#include "tree_sitter/parser.h"

// A final line need not end with a newline. Keeping EOF explicit prevents a
// missing newline from allowing two statements on the same physical line.
enum TokenType { END_OF_FILE };

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
bool tree_sitter_hurl_external_scanner_scan(void *payload, TSLexer *lexer, const bool *valid_symbols) {
  (void)payload;
  if (!valid_symbols[END_OF_FILE]) return false;
  while (lexer->lookahead == ' ' || lexer->lookahead == '\t' || lexer->lookahead == '\r') {
    lexer->advance(lexer, true);
  }
  if (!lexer->eof(lexer)) return false;
  lexer->result_symbol = END_OF_FILE;
  return true;
}
