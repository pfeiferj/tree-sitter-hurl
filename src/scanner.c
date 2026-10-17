#include "tree_sitter/parser.h"
#include <string.h>

enum TokenType { END_OF_FILE, JSON_ARRAY_START, BRACKETED_KEY_START, JSON_NUMBER, ERROR_SENTINEL };

void *tree_sitter_hurl_external_scanner_create(void) { return NULL; }
void tree_sitter_hurl_external_scanner_destroy(void *payload) { (void)payload; }
unsigned tree_sitter_hurl_external_scanner_serialize(void *payload, char *buffer) {
  (void)payload;
  (void)buffer;
  return 0;
}
void tree_sitter_hurl_external_scanner_deserialize(void *payload, const char *buffer, unsigned length) {
  (void)payload;
  (void)buffer;
  (void)length;
}

static bool key_char(int32_t c) {
  return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') ||
         (c >= '0' && c <= '9') || c == '_' || c == '-' || c == '.' ||
         c == '[' || c == ']' || c == '@' || c == '$' || c >= 0x80;
}

// Look through a template without mistaking braces inside strings/regexes for
// its closing delimiter. This is lookahead only; the grammar parses the AST.
static bool skip_template(TSLexer *lexer) {
  lexer->advance(lexer, false);
  if (lexer->lookahead != '{') return false;
  lexer->advance(lexer, false);
  int32_t quote = 0;
  while (!lexer->eof(lexer) && lexer->lookahead != '\n' && lexer->lookahead != '\r') {
    int32_t c = lexer->lookahead;
    lexer->advance(lexer, false);
    if (c == '\\') {
      if (lexer->eof(lexer)) return false;
      lexer->advance(lexer, false);
    } else if (quote) {
      if (c == quote) quote = 0;
    } else if (c == '"' || c == '/') {
      quote = c;
    } else if (c == '}' && lexer->lookahead == '}') {
      lexer->advance(lexer, false);
      return true;
    }
  }
  return false;
}

// A compact array and a bracketed key share the same prefix. Prefer the key
// only when a contiguous key (including templates/escapes) is followed by ':'.
// Never include lookahead in the '[' token's marked range.
// Returns 0 for an array, 1 for a key, and 2 for a section header.
static unsigned bracketed_key(TSLexer *lexer, bool allow_key) {
  char plain[32] = "[";
  unsigned length = 1;
  bool is_plain = true;
  while (true) {
    if (key_char(lexer->lookahead)) {
      if (length + 1 < sizeof(plain)) plain[length++] = (char)lexer->lookahead;
      else {
        is_plain = false;
        if (!allow_key) return 0; // Section names are bounded, unlike keys.
      }
      lexer->advance(lexer, false);
    } else if (lexer->lookahead == '{') {
      if (!allow_key) return 0;
      is_plain = false;
      if (!skip_template(lexer)) return false;
    } else if (lexer->lookahead == '\\') {
      if (!allow_key) return 0;
      is_plain = false;
      lexer->advance(lexer, false);
      int32_t escape = lexer->lookahead;
      if (escape == 'u') {
        lexer->advance(lexer, false);
        if (lexer->lookahead != '{') return 0;
        lexer->advance(lexer, false);
        bool digit = false;
        while ((lexer->lookahead >= '0' && lexer->lookahead <= '9') ||
               (lexer->lookahead >= 'a' && lexer->lookahead <= 'f') ||
               (lexer->lookahead >= 'A' && lexer->lookahead <= 'F')) {
          digit = true;
          lexer->advance(lexer, false);
        }
        if (!digit || lexer->lookahead != '}') return 0;
      } else if (escape != '#' && escape != '"' && escape != ':' && escape != '/' &&
                 escape != '\\' && escape != 'b' && escape != 'f' && escape != 'n' &&
                 escape != 'r' && escape != 't') {
        return 0;
      }
      lexer->advance(lexer, false);
    } else {
      break;
    }
  }
  while (lexer->lookahead == ' ' || lexer->lookahead == '\t') {
    lexer->advance(lexer, false);
  }
  if (allow_key && lexer->lookahead == ':') return 1;
  if (is_plain) {
    plain[length] = 0;
    static const char *sections[] = {
      "[BasicAuth]", "[Query]", "[QueryStringParams]", "[Form]", "[FormParams]",
      "[Multipart]", "[MultipartFormData]", "[Cookies]", "[Captures]",
      "[Asserts]", "[Options]"
    };
    for (unsigned i = 0; i < sizeof(sections) / sizeof(sections[0]); i++) {
      if (strcmp(plain, sections[i]) == 0) return 2;
    }
  }
  return false;
}

bool tree_sitter_hurl_external_scanner_scan(void *payload, TSLexer *lexer, const bool *valid_symbols) {
  (void)payload;
  // All external tokens are enabled during error recovery. Do not repeatedly
  // scan the remaining line while the parser is searching for a recovery point.
  if (valid_symbols[ERROR_SENTINEL]) return false;
  if (valid_symbols[JSON_ARRAY_START]) {
    // Unlike a key fragment, an array body can be indented. Do not skip a
    // physical newline here: the grammar owns statement boundaries.
    while (lexer->lookahead == ' ' || lexer->lookahead == '\t' || lexer->lookahead == '\r') {
      lexer->advance(lexer, true);
    }
    if (lexer->lookahead == '[') {
      lexer->advance(lexer, false);
      lexer->mark_end(lexer);
      unsigned kind = bracketed_key(lexer, valid_symbols[BRACKETED_KEY_START]);
      if (kind == 2) return false; // Let the internal lexer recognize sections.
      if (kind == 1) {
        lexer->result_symbol = BRACKETED_KEY_START;
        return true;
      }
      lexer->result_symbol = JSON_ARRAY_START;
      return true;
    }
  }
  if (valid_symbols[JSON_NUMBER] &&
      (lexer->lookahead == '-' || (lexer->lookahead >= '0' && lexer->lookahead <= '9'))) {
    if (lexer->lookahead == '-') lexer->advance(lexer, false);
    if (lexer->lookahead < '0' || lexer->lookahead > '9') return false;
    bool zero = lexer->lookahead == '0';
    lexer->advance(lexer, false);
    if (zero && lexer->lookahead >= '0' && lexer->lookahead <= '9') return false;
    while (lexer->lookahead >= '0' && lexer->lookahead <= '9') lexer->advance(lexer, false);
    if (lexer->lookahead == '.') {
      lexer->advance(lexer, false);
      if (lexer->lookahead < '0' || lexer->lookahead > '9') return false;
      while (lexer->lookahead >= '0' && lexer->lookahead <= '9') lexer->advance(lexer, false);
    }
    if (lexer->lookahead == 'e' || lexer->lookahead == 'E') {
      lexer->advance(lexer, false);
      if (lexer->lookahead == '+' || lexer->lookahead == '-') lexer->advance(lexer, false);
      if (lexer->lookahead < '0' || lexer->lookahead > '9') return false;
      while (lexer->lookahead >= '0' && lexer->lookahead <= '9') lexer->advance(lexer, false);
    }
    lexer->mark_end(lexer);
    if (valid_symbols[BRACKETED_KEY_START] && bracketed_key(lexer, true) == 1) return false;
    lexer->result_symbol = JSON_NUMBER;
    return true;
  }
  // Literal JSON words and method keywords can also be ordinary header keys.
  // Their first fragment is external only when a colon follows a contiguous key;
  // otherwise the internal lexer retains the original method/body behavior.
  if (valid_symbols[BRACKETED_KEY_START] && key_char(lexer->lookahead) &&
      lexer->lookahead != '[' && lexer->lookahead != '-' &&
      !(lexer->lookahead >= '0' && lexer->lookahead <= '9')) {
    lexer->advance(lexer, false);
    lexer->mark_end(lexer);
    if (bracketed_key(lexer, true) == 1) {
      lexer->result_symbol = BRACKETED_KEY_START;
      return true;
    }
    return false;
  }
  if (!valid_symbols[END_OF_FILE]) return false;
  while (lexer->lookahead == ' ' || lexer->lookahead == '\t' || lexer->lookahead == '\r') {
    lexer->advance(lexer, true);
  }
  if (!lexer->eof(lexer)) return false;
  lexer->result_symbol = END_OF_FILE;
  return true;
}
