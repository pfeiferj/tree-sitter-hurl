#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 209
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 154
#define ALIAS_COUNT 1
#define TOKEN_COUNT 98
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 2

enum {
  anon_sym_LF = 1,
  sym_uri = 2,
  anon_sym_GET = 3,
  anon_sym_HEAD = 4,
  anon_sym_POST = 5,
  anon_sym_PUT = 6,
  anon_sym_DELETE = 7,
  anon_sym_CONNECT = 8,
  anon_sym_OPTIONS = 9,
  anon_sym_TRACE = 10,
  anon_sym_PATCH = 11,
  anon_sym_LINK = 12,
  anon_sym_UNLINK = 13,
  anon_sym_PURGE = 14,
  anon_sym_LOCK = 15,
  anon_sym_UNLOCK = 16,
  anon_sym_PROPFIND = 17,
  anon_sym_VIEW = 18,
  anon_sym_urlEncode = 19,
  anon_sym_urlDecode = 20,
  anon_sym_htmlEscape = 21,
  anon_sym_htmlUnescape = 22,
  anon_sym_status = 23,
  anon_sym_url = 24,
  anon_sym_header = 25,
  anon_sym_xpath = 26,
  anon_sym_jsonpath = 27,
  anon_sym_variable = 28,
  anon_sym_sha256 = 29,
  anon_sym_md5 = 30,
  anon_sym_EQ_EQ = 31,
  anon_sym_BANG_EQ = 32,
  anon_sym_greaterThan = 33,
  anon_sym_GT = 34,
  anon_sym_greaterThanOrEquals = 35,
  anon_sym_lessThan = 36,
  anon_sym_LT = 37,
  anon_sym_lessThanOrEquals = 38,
  anon_sym_startsWith = 39,
  anon_sym_matches = 40,
  anon_sym_includes = 41,
  anon_sym_isInteger = 42,
  anon_sym_isFloat = 43,
  anon_sym_isBoolean = 44,
  anon_sym_isString = 45,
  anon_sym_isCollection = 46,
  anon_sym_LBRACK = 47,
  aux_sym_section_header_token1 = 48,
  anon_sym_RBRACK = 49,
  aux_sym_response_token1 = 50,
  anon_sym_HTTP_SLASH1_DOT0 = 51,
  anon_sym_HTTP_SLASH1_DOT1 = 52,
  anon_sym_HTTP_SLASH2 = 53,
  anon_sym_HTTP_SLASH_STAR = 54,
  anon_sym_COLON = 55,
  aux_sym_key_value_token1 = 56,
  sym_value = 57,
  sym__char = 58,
  anon_sym_LBRACKCaptures_RBRACK = 59,
  anon_sym_LBRACKAsserts_RBRACK = 60,
  anon_sym_LT_QMARK = 61,
  aux_sym_xml_prolog_tag_token1 = 62,
  anon_sym_QMARK_GT = 63,
  aux_sym_xml_open_tag_token1 = 64,
  anon_sym_LT_SLASH = 65,
  aux_sym_xml_close_tag_token1 = 66,
  aux_sym_xml_string_token1 = 67,
  anon_sym_LBRACE = 68,
  anon_sym_COMMA = 69,
  anon_sym_RBRACE = 70,
  anon_sym_DQUOTE = 71,
  aux_sym_json_string_text_token1 = 72,
  anon_sym_BSLASH = 73,
  anon_sym_b = 74,
  anon_sym_f = 75,
  anon_sym_n = 76,
  anon_sym_r = 77,
  anon_sym_t = 78,
  anon_sym_u = 79,
  anon_sym_LBRACE_LBRACE = 80,
  aux_sym_template_token1 = 81,
  anon_sym_RBRACE_RBRACE = 82,
  anon_sym_true = 83,
  anon_sym_false = 84,
  sym_null = 85,
  sym_hexdigit = 86,
  anon_sym_DOT = 87,
  anon_sym_e = 88,
  anon_sym_E = 89,
  anon_sym_PLUS = 90,
  anon_sym_DASH = 91,
  aux_sym_digit_token1 = 92,
  anon_sym_ = 93,
  sym_multiline_string_type = 94,
  anon_sym_BQUOTE_BQUOTE_BQUOTE = 95,
  sym_bodyTag = 96,
  sym_comment = 97,
  sym_hurl_file = 98,
  sym_request = 99,
  sym_header = 100,
  sym_headers = 101,
  sym_method = 102,
  sym_section = 103,
  sym_section_header = 104,
  sym_response = 105,
  sym_http_version = 106,
  sym_key_value = 107,
  sym_key = 108,
  sym__line = 109,
  sym_capture_section = 110,
  sym_assert_section = 111,
  sym_xml = 112,
  sym_xml_prolog_tag = 113,
  sym_xml_tag = 114,
  sym_xml_open_tag = 115,
  sym_xml_close_tag = 116,
  sym_xml_string = 117,
  sym_json_value = 118,
  sym_json_object = 119,
  sym_json_key_value = 120,
  sym_json_key_string = 121,
  sym_json_array = 122,
  sym_json_string = 123,
  sym_json_string_content = 124,
  sym_json_string_text = 125,
  sym_json_string_escaped_char = 126,
  sym_json_number = 127,
  sym_template = 128,
  sym_boolean = 129,
  sym_fraction = 130,
  sym_exponent = 131,
  sym_integer = 132,
  sym_digit = 133,
  sym_multiline_string_content = 134,
  sym__multiline_string_type_seq = 135,
  sym_multiline_string = 136,
  sym_bodyData = 137,
  sym_body = 138,
  aux_sym_hurl_file_repeat1 = 139,
  aux_sym_request_repeat1 = 140,
  aux_sym_headers_repeat1 = 141,
  aux_sym_response_repeat1 = 142,
  aux_sym__line_repeat1 = 143,
  aux_sym_assert_section_repeat1 = 144,
  aux_sym_xml_repeat1 = 145,
  aux_sym_xml_tag_repeat1 = 146,
  aux_sym_xml_string_repeat1 = 147,
  aux_sym_json_object_repeat1 = 148,
  aux_sym_json_array_repeat1 = 149,
  aux_sym_json_string_repeat1 = 150,
  aux_sym_json_string_content_repeat1 = 151,
  aux_sym_json_string_text_repeat1 = 152,
  aux_sym_fraction_repeat1 = 153,
  anon_alias_sym_json_key_string = 154,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LF] = "\n",
  [sym_uri] = "uri",
  [anon_sym_GET] = "GET",
  [anon_sym_HEAD] = "HEAD",
  [anon_sym_POST] = "POST",
  [anon_sym_PUT] = "PUT",
  [anon_sym_DELETE] = "DELETE",
  [anon_sym_CONNECT] = "CONNECT",
  [anon_sym_OPTIONS] = "OPTIONS",
  [anon_sym_TRACE] = "TRACE",
  [anon_sym_PATCH] = "PATCH",
  [anon_sym_LINK] = "LINK",
  [anon_sym_UNLINK] = "UNLINK",
  [anon_sym_PURGE] = "PURGE",
  [anon_sym_LOCK] = "LOCK",
  [anon_sym_UNLOCK] = "UNLOCK",
  [anon_sym_PROPFIND] = "PROPFIND",
  [anon_sym_VIEW] = "VIEW",
  [anon_sym_urlEncode] = "urlEncode",
  [anon_sym_urlDecode] = "urlDecode",
  [anon_sym_htmlEscape] = "htmlEscape",
  [anon_sym_htmlUnescape] = "htmlUnescape",
  [anon_sym_status] = "status",
  [anon_sym_url] = "url",
  [anon_sym_header] = "header",
  [anon_sym_xpath] = "xpath",
  [anon_sym_jsonpath] = "jsonpath",
  [anon_sym_variable] = "variable",
  [anon_sym_sha256] = "sha256",
  [anon_sym_md5] = "md5",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_greaterThan] = "greaterThan",
  [anon_sym_GT] = ">",
  [anon_sym_greaterThanOrEquals] = "greaterThanOrEquals",
  [anon_sym_lessThan] = "lessThan",
  [anon_sym_LT] = "<",
  [anon_sym_lessThanOrEquals] = "lessThanOrEquals",
  [anon_sym_startsWith] = "startsWith",
  [anon_sym_matches] = "matches",
  [anon_sym_includes] = "includes",
  [anon_sym_isInteger] = "isInteger",
  [anon_sym_isFloat] = "isFloat",
  [anon_sym_isBoolean] = "isBoolean",
  [anon_sym_isString] = "isString",
  [anon_sym_isCollection] = "isCollection",
  [anon_sym_LBRACK] = "[",
  [aux_sym_section_header_token1] = "section_header_token1",
  [anon_sym_RBRACK] = "]",
  [aux_sym_response_token1] = "response_token1",
  [anon_sym_HTTP_SLASH1_DOT0] = "HTTP/1.0",
  [anon_sym_HTTP_SLASH1_DOT1] = "HTTP/1.1",
  [anon_sym_HTTP_SLASH2] = "HTTP/2",
  [anon_sym_HTTP_SLASH_STAR] = "HTTP/*",
  [anon_sym_COLON] = ":",
  [aux_sym_key_value_token1] = "key_value_token1",
  [sym_value] = "value",
  [sym__char] = "_char",
  [anon_sym_LBRACKCaptures_RBRACK] = "section_header",
  [anon_sym_LBRACKAsserts_RBRACK] = "section_header",
  [anon_sym_LT_QMARK] = "<\?",
  [aux_sym_xml_prolog_tag_token1] = "xml_prolog_tag_token1",
  [anon_sym_QMARK_GT] = "\?>",
  [aux_sym_xml_open_tag_token1] = "xml_open_tag_token1",
  [anon_sym_LT_SLASH] = "</",
  [aux_sym_xml_close_tag_token1] = "xml_close_tag_token1",
  [aux_sym_xml_string_token1] = "xml_string_token1",
  [anon_sym_LBRACE] = "{",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACE] = "}",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_json_string_text_token1] = "json_string_text_token1",
  [anon_sym_BSLASH] = "\\",
  [anon_sym_b] = "b",
  [anon_sym_f] = "f",
  [anon_sym_n] = "n",
  [anon_sym_r] = "r",
  [anon_sym_t] = "t",
  [anon_sym_u] = "u",
  [anon_sym_LBRACE_LBRACE] = "{{",
  [aux_sym_template_token1] = "template_token1",
  [anon_sym_RBRACE_RBRACE] = "}}",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [sym_null] = "null",
  [sym_hexdigit] = "hexdigit",
  [anon_sym_DOT] = ".",
  [anon_sym_e] = "e",
  [anon_sym_E] = "E",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [aux_sym_digit_token1] = "digit_token1",
  [anon_sym_] = " ",
  [sym_multiline_string_type] = "multiline_string_type",
  [anon_sym_BQUOTE_BQUOTE_BQUOTE] = "```",
  [sym_bodyTag] = "bodyTag",
  [sym_comment] = "comment",
  [sym_hurl_file] = "hurl_file",
  [sym_request] = "request",
  [sym_header] = "header",
  [sym_headers] = "headers",
  [sym_method] = "method",
  [sym_section] = "section",
  [sym_section_header] = "section_header",
  [sym_response] = "response",
  [sym_http_version] = "http_version",
  [sym_key_value] = "key_value",
  [sym_key] = "key",
  [sym__line] = "_line",
  [sym_capture_section] = "capture_section",
  [sym_assert_section] = "assert_section",
  [sym_xml] = "xml",
  [sym_xml_prolog_tag] = "xml_prolog_tag",
  [sym_xml_tag] = "xml_tag",
  [sym_xml_open_tag] = "xml_open_tag",
  [sym_xml_close_tag] = "xml_close_tag",
  [sym_xml_string] = "xml_string",
  [sym_json_value] = "json_value",
  [sym_json_object] = "json_object",
  [sym_json_key_value] = "json_key_value",
  [sym_json_key_string] = "json_key_string",
  [sym_json_array] = "json_array",
  [sym_json_string] = "json_string",
  [sym_json_string_content] = "json_string_content",
  [sym_json_string_text] = "json_string_text",
  [sym_json_string_escaped_char] = "json_string_escaped_char",
  [sym_json_number] = "json_number",
  [sym_template] = "template",
  [sym_boolean] = "boolean",
  [sym_fraction] = "fraction",
  [sym_exponent] = "exponent",
  [sym_integer] = "integer",
  [sym_digit] = "digit",
  [sym_multiline_string_content] = "multiline_string_content",
  [sym__multiline_string_type_seq] = "_multiline_string_type_seq",
  [sym_multiline_string] = "multiline_string",
  [sym_bodyData] = "bodyData",
  [sym_body] = "body",
  [aux_sym_hurl_file_repeat1] = "hurl_file_repeat1",
  [aux_sym_request_repeat1] = "request_repeat1",
  [aux_sym_headers_repeat1] = "headers_repeat1",
  [aux_sym_response_repeat1] = "response_repeat1",
  [aux_sym__line_repeat1] = "_line_repeat1",
  [aux_sym_assert_section_repeat1] = "assert_section_repeat1",
  [aux_sym_xml_repeat1] = "xml_repeat1",
  [aux_sym_xml_tag_repeat1] = "xml_tag_repeat1",
  [aux_sym_xml_string_repeat1] = "xml_string_repeat1",
  [aux_sym_json_object_repeat1] = "json_object_repeat1",
  [aux_sym_json_array_repeat1] = "json_array_repeat1",
  [aux_sym_json_string_repeat1] = "json_string_repeat1",
  [aux_sym_json_string_content_repeat1] = "json_string_content_repeat1",
  [aux_sym_json_string_text_repeat1] = "json_string_text_repeat1",
  [aux_sym_fraction_repeat1] = "fraction_repeat1",
  [anon_alias_sym_json_key_string] = "json_key_string",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LF] = anon_sym_LF,
  [sym_uri] = sym_uri,
  [anon_sym_GET] = anon_sym_GET,
  [anon_sym_HEAD] = anon_sym_HEAD,
  [anon_sym_POST] = anon_sym_POST,
  [anon_sym_PUT] = anon_sym_PUT,
  [anon_sym_DELETE] = anon_sym_DELETE,
  [anon_sym_CONNECT] = anon_sym_CONNECT,
  [anon_sym_OPTIONS] = anon_sym_OPTIONS,
  [anon_sym_TRACE] = anon_sym_TRACE,
  [anon_sym_PATCH] = anon_sym_PATCH,
  [anon_sym_LINK] = anon_sym_LINK,
  [anon_sym_UNLINK] = anon_sym_UNLINK,
  [anon_sym_PURGE] = anon_sym_PURGE,
  [anon_sym_LOCK] = anon_sym_LOCK,
  [anon_sym_UNLOCK] = anon_sym_UNLOCK,
  [anon_sym_PROPFIND] = anon_sym_PROPFIND,
  [anon_sym_VIEW] = anon_sym_VIEW,
  [anon_sym_urlEncode] = anon_sym_urlEncode,
  [anon_sym_urlDecode] = anon_sym_urlDecode,
  [anon_sym_htmlEscape] = anon_sym_htmlEscape,
  [anon_sym_htmlUnescape] = anon_sym_htmlUnescape,
  [anon_sym_status] = anon_sym_status,
  [anon_sym_url] = anon_sym_url,
  [anon_sym_header] = anon_sym_header,
  [anon_sym_xpath] = anon_sym_xpath,
  [anon_sym_jsonpath] = anon_sym_jsonpath,
  [anon_sym_variable] = anon_sym_variable,
  [anon_sym_sha256] = anon_sym_sha256,
  [anon_sym_md5] = anon_sym_md5,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_greaterThan] = anon_sym_greaterThan,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_greaterThanOrEquals] = anon_sym_greaterThanOrEquals,
  [anon_sym_lessThan] = anon_sym_lessThan,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_lessThanOrEquals] = anon_sym_lessThanOrEquals,
  [anon_sym_startsWith] = anon_sym_startsWith,
  [anon_sym_matches] = anon_sym_matches,
  [anon_sym_includes] = anon_sym_includes,
  [anon_sym_isInteger] = anon_sym_isInteger,
  [anon_sym_isFloat] = anon_sym_isFloat,
  [anon_sym_isBoolean] = anon_sym_isBoolean,
  [anon_sym_isString] = anon_sym_isString,
  [anon_sym_isCollection] = anon_sym_isCollection,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [aux_sym_section_header_token1] = aux_sym_section_header_token1,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [aux_sym_response_token1] = aux_sym_response_token1,
  [anon_sym_HTTP_SLASH1_DOT0] = anon_sym_HTTP_SLASH1_DOT0,
  [anon_sym_HTTP_SLASH1_DOT1] = anon_sym_HTTP_SLASH1_DOT1,
  [anon_sym_HTTP_SLASH2] = anon_sym_HTTP_SLASH2,
  [anon_sym_HTTP_SLASH_STAR] = anon_sym_HTTP_SLASH_STAR,
  [anon_sym_COLON] = anon_sym_COLON,
  [aux_sym_key_value_token1] = aux_sym_key_value_token1,
  [sym_value] = sym_value,
  [sym__char] = sym__char,
  [anon_sym_LBRACKCaptures_RBRACK] = sym_section_header,
  [anon_sym_LBRACKAsserts_RBRACK] = sym_section_header,
  [anon_sym_LT_QMARK] = anon_sym_LT_QMARK,
  [aux_sym_xml_prolog_tag_token1] = aux_sym_xml_prolog_tag_token1,
  [anon_sym_QMARK_GT] = anon_sym_QMARK_GT,
  [aux_sym_xml_open_tag_token1] = aux_sym_xml_open_tag_token1,
  [anon_sym_LT_SLASH] = anon_sym_LT_SLASH,
  [aux_sym_xml_close_tag_token1] = aux_sym_xml_close_tag_token1,
  [aux_sym_xml_string_token1] = aux_sym_xml_string_token1,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_json_string_text_token1] = aux_sym_json_string_text_token1,
  [anon_sym_BSLASH] = anon_sym_BSLASH,
  [anon_sym_b] = anon_sym_b,
  [anon_sym_f] = anon_sym_f,
  [anon_sym_n] = anon_sym_n,
  [anon_sym_r] = anon_sym_r,
  [anon_sym_t] = anon_sym_t,
  [anon_sym_u] = anon_sym_u,
  [anon_sym_LBRACE_LBRACE] = anon_sym_LBRACE_LBRACE,
  [aux_sym_template_token1] = aux_sym_template_token1,
  [anon_sym_RBRACE_RBRACE] = anon_sym_RBRACE_RBRACE,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [sym_null] = sym_null,
  [sym_hexdigit] = sym_hexdigit,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_e] = anon_sym_e,
  [anon_sym_E] = anon_sym_E,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [aux_sym_digit_token1] = aux_sym_digit_token1,
  [anon_sym_] = anon_sym_,
  [sym_multiline_string_type] = sym_multiline_string_type,
  [anon_sym_BQUOTE_BQUOTE_BQUOTE] = anon_sym_BQUOTE_BQUOTE_BQUOTE,
  [sym_bodyTag] = sym_bodyTag,
  [sym_comment] = sym_comment,
  [sym_hurl_file] = sym_hurl_file,
  [sym_request] = sym_request,
  [sym_header] = sym_header,
  [sym_headers] = sym_headers,
  [sym_method] = sym_method,
  [sym_section] = sym_section,
  [sym_section_header] = sym_section_header,
  [sym_response] = sym_response,
  [sym_http_version] = sym_http_version,
  [sym_key_value] = sym_key_value,
  [sym_key] = sym_key,
  [sym__line] = sym__line,
  [sym_capture_section] = sym_capture_section,
  [sym_assert_section] = sym_assert_section,
  [sym_xml] = sym_xml,
  [sym_xml_prolog_tag] = sym_xml_prolog_tag,
  [sym_xml_tag] = sym_xml_tag,
  [sym_xml_open_tag] = sym_xml_open_tag,
  [sym_xml_close_tag] = sym_xml_close_tag,
  [sym_xml_string] = sym_xml_string,
  [sym_json_value] = sym_json_value,
  [sym_json_object] = sym_json_object,
  [sym_json_key_value] = sym_json_key_value,
  [sym_json_key_string] = sym_json_key_string,
  [sym_json_array] = sym_json_array,
  [sym_json_string] = sym_json_string,
  [sym_json_string_content] = sym_json_string_content,
  [sym_json_string_text] = sym_json_string_text,
  [sym_json_string_escaped_char] = sym_json_string_escaped_char,
  [sym_json_number] = sym_json_number,
  [sym_template] = sym_template,
  [sym_boolean] = sym_boolean,
  [sym_fraction] = sym_fraction,
  [sym_exponent] = sym_exponent,
  [sym_integer] = sym_integer,
  [sym_digit] = sym_digit,
  [sym_multiline_string_content] = sym_multiline_string_content,
  [sym__multiline_string_type_seq] = sym__multiline_string_type_seq,
  [sym_multiline_string] = sym_multiline_string,
  [sym_bodyData] = sym_bodyData,
  [sym_body] = sym_body,
  [aux_sym_hurl_file_repeat1] = aux_sym_hurl_file_repeat1,
  [aux_sym_request_repeat1] = aux_sym_request_repeat1,
  [aux_sym_headers_repeat1] = aux_sym_headers_repeat1,
  [aux_sym_response_repeat1] = aux_sym_response_repeat1,
  [aux_sym__line_repeat1] = aux_sym__line_repeat1,
  [aux_sym_assert_section_repeat1] = aux_sym_assert_section_repeat1,
  [aux_sym_xml_repeat1] = aux_sym_xml_repeat1,
  [aux_sym_xml_tag_repeat1] = aux_sym_xml_tag_repeat1,
  [aux_sym_xml_string_repeat1] = aux_sym_xml_string_repeat1,
  [aux_sym_json_object_repeat1] = aux_sym_json_object_repeat1,
  [aux_sym_json_array_repeat1] = aux_sym_json_array_repeat1,
  [aux_sym_json_string_repeat1] = aux_sym_json_string_repeat1,
  [aux_sym_json_string_content_repeat1] = aux_sym_json_string_content_repeat1,
  [aux_sym_json_string_text_repeat1] = aux_sym_json_string_text_repeat1,
  [aux_sym_fraction_repeat1] = aux_sym_fraction_repeat1,
  [anon_alias_sym_json_key_string] = anon_alias_sym_json_key_string,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [sym_uri] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_GET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_HEAD] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POST] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PUT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DELETE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CONNECT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_OPTIONS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PATCH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LINK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_UNLINK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PURGE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LOCK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_UNLOCK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PROPFIND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_VIEW] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_urlEncode] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_urlDecode] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_htmlEscape] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_htmlUnescape] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_status] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_url] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_header] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_xpath] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_jsonpath] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_variable] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sha256] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_md5] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_greaterThan] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_greaterThanOrEquals] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lessThan] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lessThanOrEquals] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_startsWith] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_matches] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_includes] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_isInteger] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_isFloat] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_isBoolean] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_isString] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_isCollection] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_section_header_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_response_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_HTTP_SLASH1_DOT0] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_HTTP_SLASH1_DOT1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_HTTP_SLASH2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_HTTP_SLASH_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_key_value_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_value] = {
    .visible = true,
    .named = true,
  },
  [sym__char] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LBRACKCaptures_RBRACK] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACKAsserts_RBRACK] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_QMARK] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_xml_prolog_tag_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_QMARK_GT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_xml_open_tag_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LT_SLASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_xml_close_tag_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_xml_string_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_json_string_text_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_BSLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_b] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_f] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_n] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_r] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_t] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_template_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_RBRACE_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [sym_null] = {
    .visible = true,
    .named = true,
  },
  [sym_hexdigit] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_e] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_E] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_digit_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_] = {
    .visible = true,
    .named = false,
  },
  [sym_multiline_string_type] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BQUOTE_BQUOTE_BQUOTE] = {
    .visible = true,
    .named = false,
  },
  [sym_bodyTag] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_hurl_file] = {
    .visible = true,
    .named = true,
  },
  [sym_request] = {
    .visible = true,
    .named = true,
  },
  [sym_header] = {
    .visible = true,
    .named = true,
  },
  [sym_headers] = {
    .visible = true,
    .named = true,
  },
  [sym_method] = {
    .visible = true,
    .named = true,
  },
  [sym_section] = {
    .visible = true,
    .named = true,
  },
  [sym_section_header] = {
    .visible = true,
    .named = true,
  },
  [sym_response] = {
    .visible = true,
    .named = true,
  },
  [sym_http_version] = {
    .visible = true,
    .named = true,
  },
  [sym_key_value] = {
    .visible = true,
    .named = true,
  },
  [sym_key] = {
    .visible = true,
    .named = true,
  },
  [sym__line] = {
    .visible = false,
    .named = true,
  },
  [sym_capture_section] = {
    .visible = true,
    .named = true,
  },
  [sym_assert_section] = {
    .visible = true,
    .named = true,
  },
  [sym_xml] = {
    .visible = true,
    .named = true,
  },
  [sym_xml_prolog_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_xml_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_xml_open_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_xml_close_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_xml_string] = {
    .visible = true,
    .named = true,
  },
  [sym_json_value] = {
    .visible = true,
    .named = true,
  },
  [sym_json_object] = {
    .visible = true,
    .named = true,
  },
  [sym_json_key_value] = {
    .visible = true,
    .named = true,
  },
  [sym_json_key_string] = {
    .visible = true,
    .named = true,
  },
  [sym_json_array] = {
    .visible = true,
    .named = true,
  },
  [sym_json_string] = {
    .visible = true,
    .named = true,
  },
  [sym_json_string_content] = {
    .visible = true,
    .named = true,
  },
  [sym_json_string_text] = {
    .visible = true,
    .named = true,
  },
  [sym_json_string_escaped_char] = {
    .visible = true,
    .named = true,
  },
  [sym_json_number] = {
    .visible = true,
    .named = true,
  },
  [sym_template] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean] = {
    .visible = true,
    .named = true,
  },
  [sym_fraction] = {
    .visible = true,
    .named = true,
  },
  [sym_exponent] = {
    .visible = true,
    .named = true,
  },
  [sym_integer] = {
    .visible = true,
    .named = true,
  },
  [sym_digit] = {
    .visible = true,
    .named = true,
  },
  [sym_multiline_string_content] = {
    .visible = true,
    .named = true,
  },
  [sym__multiline_string_type_seq] = {
    .visible = false,
    .named = true,
  },
  [sym_multiline_string] = {
    .visible = true,
    .named = true,
  },
  [sym_bodyData] = {
    .visible = true,
    .named = true,
  },
  [sym_body] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_hurl_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_request_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_headers_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_response_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__line_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_assert_section_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_xml_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_xml_tag_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_xml_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_json_object_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_json_array_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_json_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_json_string_content_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_json_string_text_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_fraction_repeat1] = {
    .visible = false,
    .named = false,
  },
  [anon_alias_sym_json_key_string] = {
    .visible = true,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = anon_alias_sym_json_key_string,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym_json_string, 2,
    sym_json_string,
    anon_alias_sym_json_key_string,
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 8,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 21,
  [24] = 24,
  [25] = 20,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 14,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 24,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 14,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 32,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 24,
  [69] = 69,
  [70] = 69,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 76,
  [80] = 78,
  [81] = 77,
  [82] = 82,
  [83] = 83,
  [84] = 82,
  [85] = 85,
  [86] = 27,
  [87] = 26,
  [88] = 88,
  [89] = 89,
  [90] = 28,
  [91] = 91,
  [92] = 29,
  [93] = 93,
  [94] = 31,
  [95] = 93,
  [96] = 96,
  [97] = 34,
  [98] = 98,
  [99] = 33,
  [100] = 35,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 104,
  [109] = 103,
  [110] = 14,
  [111] = 111,
  [112] = 58,
  [113] = 113,
  [114] = 47,
  [115] = 60,
  [116] = 116,
  [117] = 59,
  [118] = 118,
  [119] = 51,
  [120] = 43,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 124,
  [127] = 127,
  [128] = 128,
  [129] = 124,
  [130] = 130,
  [131] = 131,
  [132] = 124,
  [133] = 125,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 135,
  [138] = 134,
  [139] = 139,
  [140] = 48,
  [141] = 49,
  [142] = 50,
  [143] = 40,
  [144] = 53,
  [145] = 127,
  [146] = 146,
  [147] = 130,
  [148] = 42,
  [149] = 58,
  [150] = 45,
  [151] = 131,
  [152] = 152,
  [153] = 62,
  [154] = 152,
  [155] = 52,
  [156] = 122,
  [157] = 157,
  [158] = 24,
  [159] = 159,
  [160] = 160,
  [161] = 159,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 177,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 169,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 171,
  [197] = 188,
  [198] = 169,
  [199] = 195,
  [200] = 200,
  [201] = 184,
  [202] = 183,
  [203] = 203,
  [204] = 200,
  [205] = 205,
  [206] = 163,
  [207] = 183,
  [208] = 165,
};

static inline bool anon_sym_LF_character_set_1(int32_t c) {
  return (c < 8192
    ? (c < 160
      ? (c < '\r'
        ? c == '\t'
        : c <= '\r')
      : (c <= 160 || c == 5760))
    : (c <= 8203 || (c < 12288
      ? (c < 8287
        ? c == 8239
        : c <= 8288)
      : (c <= 12288 || c == 65279))));
}

static inline bool aux_sym_xml_string_token1_character_set_1(int32_t c) {
  return (c < 8192
    ? (c < ' '
      ? (c < '\r'
        ? c == '\t'
        : c <= '\r')
      : (c <= ' ' || (c < 5760
        ? c == 160
        : c <= 5760)))
    : (c <= 8203 || (c < 12288
      ? (c < 8287
        ? c == 8239
        : c <= 8288)
      : (c <= 12288 || c == 65279))));
}

static inline bool anon_sym_DQUOTE_character_set_1(int32_t c) {
  return (c < 8192
    ? (c < ' '
      ? (c < '\r'
        ? (c >= '\t' && c <= '\n')
        : c <= '\r')
      : (c <= ' ' || (c < 5760
        ? c == 160
        : c <= 5760)))
    : (c <= 8203 || (c < 12288
      ? (c < 8287
        ? c == 8239
        : c <= 8288)
      : (c <= 12288 || c == 65279))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(345);
      if (lookahead == '!') ADVANCE(101);
      if (lookahead == '"') ADVANCE(578);
      if (lookahead == '#') ADVANCE(329);
      if (lookahead == '+') ADVANCE(614);
      if (lookahead == ',') ADVANCE(576);
      if (lookahead == '-') ADVANCE(615);
      if (lookahead == '.') ADVANCE(611);
      if (lookahead == ':') ADVANCE(518);
      if (lookahead == '<') ADVANCE(417);
      if (lookahead == '=') ADVANCE(102);
      if (lookahead == '>') ADVANCE(414);
      if (lookahead == '?') ADVANCE(103);
      if (lookahead == 'E') ADVANCE(613);
      if (lookahead == 'G') ADVANCE(115);
      if (lookahead == 'H') ADVANCE(116);
      if (lookahead == 'L') ADVANCE(131);
      if (lookahead == 'O') ADVANCE(153);
      if (lookahead == 'P') ADVANCE(106);
      if (lookahead == 'T') ADVANCE(155);
      if (lookahead == 'U') ADVANCE(141);
      if (lookahead == 'V') ADVANCE(130);
      if (lookahead == '[') ADVANCE(429);
      if (lookahead == '\\') ADVANCE(583);
      if (lookahead == ']') ADVANCE(512);
      if (lookahead == '`') ADVANCE(172);
      if (lookahead == 'b') ADVANCE(584);
      if (lookahead == 'e') ADVANCE(612);
      if (lookahead == 'f') ADVANCE(585);
      if (lookahead == 'g') ADVANCE(281);
      if (lookahead == 'h') ADVANCE(212);
      if (lookahead == 'i') ADVANCE(253);
      if (lookahead == 'j') ADVANCE(290);
      if (lookahead == 'l') ADVANCE(224);
      if (lookahead == 'm') ADVANCE(173);
      if (lookahead == 'n') ADVANCE(586);
      if (lookahead == 'r') ADVANCE(587);
      if (lookahead == 's') ADVANCE(231);
      if (lookahead == 't') ADVANCE(588);
      if (lookahead == 'u') ADVANCE(590);
      if (lookahead == 'v') ADVANCE(178);
      if (lookahead == 'x') ADVANCE(272);
      if (lookahead == '{') ADVANCE(575);
      if (lookahead == '}') ADVANCE(577);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'd')) ADVANCE(610);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(610);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(334)
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '#') ADVANCE(573);
      if (lookahead == '<') ADVANCE(417);
      if (aux_sym_xml_string_token1_character_set_1(lookahead)) ADVANCE(572);
      if (lookahead != 0) ADVANCE(571);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '#') ADVANCE(329);
      if (lookahead == '\\') ADVANCE(526);
      if (lookahead == '`') ADVANCE(556);
      if (aux_sym_xml_string_token1_character_set_1(lookahead)) ADVANCE(554);
      if (lookahead != 0) ADVANCE(523);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(3)
      if (lookahead == '#') ADVANCE(329);
      if (lookahead == '\\') ADVANCE(526);
      if (aux_sym_xml_string_token1_character_set_1(lookahead)) ADVANCE(555);
      if (lookahead != 0) ADVANCE(523);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(346);
      if (lookahead == '#') ADVANCE(329);
      if (lookahead == '\\') ADVANCE(526);
      if (aux_sym_xml_string_token1_character_set_1(lookahead)) ADVANCE(524);
      if (lookahead != 0) ADVANCE(523);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(347);
      if (lookahead == ' ') ADVANCE(618);
      if (lookahead == '#') ADVANCE(329);
      if (anon_sym_LF_character_set_1(lookahead)) SKIP(6)
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(347);
      if (lookahead == '#') ADVANCE(329);
      if (aux_sym_xml_string_token1_character_set_1(lookahead)) SKIP(6)
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(7)
      if (lookahead == ' ') ADVANCE(519);
      if (lookahead == '#') ADVANCE(522);
      if (anon_sym_LF_character_set_1(lookahead)) ADVANCE(520);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 8:
      if (lookahead == '\n') SKIP(8)
      if (lookahead == '#') ADVANCE(522);
      if (aux_sym_xml_string_token1_character_set_1(lookahead)) ADVANCE(521);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(578);
      if (lookahead == '#') ADVANCE(329);
      if (lookahead == '[') ADVANCE(428);
      if (lookahead == 'f') ADVANCE(501);
      if (lookahead == 'n') ADVANCE(510);
      if (lookahead == 't') ADVANCE(507);
      if (lookahead == '{') ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(511);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(10)
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(578);
      if (lookahead == '#') ADVANCE(329);
      if (lookahead == '[') ADVANCE(428);
      if (lookahead == 'f') ADVANCE(501);
      if (lookahead == 'n') ADVANCE(510);
      if (lookahead == 't') ADVANCE(507);
      if (lookahead == '{') ADVANCE(574);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(511);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(10)
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 11:
      if (lookahead == '"') ADVANCE(578);
      if (lookahead == '#') ADVANCE(329);
      if (lookahead == '\\') ADVANCE(583);
      if (lookahead == 'b') ADVANCE(584);
      if (lookahead == 'f') ADVANCE(585);
      if (lookahead == 'n') ADVANCE(586);
      if (lookahead == 'r') ADVANCE(587);
      if (lookahead == 't') ADVANCE(588);
      if (lookahead == 'u') ADVANCE(589);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(328);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(11)
      END_STATE();
    case 12:
      if (lookahead == '"') ADVANCE(578);
      if (lookahead == '#') ADVANCE(582);
      if (lookahead == '\\') ADVANCE(583);
      if (lookahead == '{') ADVANCE(581);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) ADVANCE(580);
      if (lookahead != 0) ADVANCE(579);
      END_STATE();
    case 13:
      if (lookahead == '#') ADVANCE(329);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(610);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(13)
      END_STATE();
    case 14:
      if (lookahead == '#') ADVANCE(329);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(14)
      END_STATE();
    case 15:
      if (lookahead == '#') ADVANCE(329);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(14)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(619);
      END_STATE();
    case 16:
      if (lookahead == '#') ADVANCE(329);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(16)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 17:
      if (lookahead == '#') ADVANCE(349);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(17)
      if (lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(348);
      if (lookahead != 0) ADVANCE(350);
      END_STATE();
    case 18:
      if (lookahead == '#') ADVANCE(596);
      if (lookahead == '}') ADVANCE(594);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) ADVANCE(593);
      if (lookahead != 0) ADVANCE(592);
      END_STATE();
    case 19:
      if (lookahead == '#') ADVANCE(560);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) ADVANCE(561);
      if (lookahead != 0 &&
          lookahead != '?') ADVANCE(562);
      END_STATE();
    case 20:
      if (lookahead == '#') ADVANCE(564);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) ADVANCE(565);
      if (lookahead != 0 &&
          lookahead != '/' &&
          lookahead != '?') ADVANCE(566);
      END_STATE();
    case 21:
      if (lookahead == '#') ADVANCE(568);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) ADVANCE(569);
      if (lookahead != 0 &&
          lookahead != '/' &&
          lookahead != '>') ADVANCE(570);
      END_STATE();
    case 22:
      if (lookahead == '*') ADVANCE(517);
      if (lookahead == '1') ADVANCE(94);
      if (lookahead == '2') ADVANCE(516);
      END_STATE();
    case 23:
      if (lookahead == ',') ADVANCE(621);
      if (lookahead == '/') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 24:
      if (lookahead == ',') ADVANCE(621);
      if (lookahead == 'A') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 25:
      if (lookahead == ',') ADVANCE(621);
      if (lookahead == 'A') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 26:
      if (lookahead == ',') ADVANCE(621);
      if (lookahead == 'A') ADVANCE(80);
      if (lookahead == 'O') ADVANCE(74);
      if (lookahead == 'R') ADVANCE(66);
      if (lookahead == 'U') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 27:
      if (lookahead == ',') ADVANCE(621);
      if (lookahead == 'C') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 28:
      if (lookahead == ',') ADVANCE(621);
      if (lookahead == 'C') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 29:
      if (lookahead == ',') ADVANCE(621);
      if (lookahead == 'C') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 30:
      if (lookahead == ',') ADVANCE(621);
      if (lookahead == 'C') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 31:
      if (lookahead == ',') ADVANCE(621);
      if (lookahead == 'C') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 32:
      if (lookahead == ',') ADVANCE(621);
      if (lookahead == 'D') ADVANCE(356);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 33:
      if (lookahead == ',') ADVANCE(621);
      if (lookahead == 'D') ADVANCE(395);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 34:
      if (lookahead == ',') ADVANCE(621);
      if (lookahead == 'E') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 35:
      if (lookahead == ',') ADVANCE(621);
      if (lookahead == 'E') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 36:
      if (lookahead == ',') ADVANCE(621);
      if (lookahead == 'E') ADVANCE(24);
      if (lookahead == 'T') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 37:
      if (lookahead == ',') ADVANCE(621);
      if (lookahead == 'E') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 38:
      if (lookahead == ',') ADVANCE(621);
      if (lookahead == 'E') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 39:
      if (lookahead == ',') ADVANCE(621);
      if (lookahead == 'E') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 40:
      if (lookahead == ',') ADVANCE(621);
      if (lookahead == 'E') ADVANCE(374);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 41:
      if (lookahead == ',') ADVANCE(621);
      if (lookahead == 'E') ADVANCE(365);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 42:
      if (lookahead == ',') ADVANCE(621);
      if (lookahead == 'E') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 43:
      if (lookahead == ',') ADVANCE(621);
      if (lookahead == 'E') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 44:
      if (lookahead == ',') ADVANCE(621);
      if (lookahead == 'F') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 45:
      if (lookahead == ',') ADVANCE(621);
      if (lookahead == 'G') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 46:
      if (lookahead == ',') ADVANCE(621);
      if (lookahead == 'H') ADVANCE(377);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 47:
      if (lookahead == ',') ADVANCE(621);
      if (lookahead == 'I') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 48:
      if (lookahead == ',') ADVANCE(621);
      if (lookahead == 'I') ADVANCE(58);
      if (lookahead == 'O') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 49:
      if (lookahead == ',') ADVANCE(621);
      if (lookahead == 'I') ADVANCE(62);
      if (lookahead == 'O') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 50:
      if (lookahead == ',') ADVANCE(621);
      if (lookahead == 'I') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 51:
      if (lookahead == ',') ADVANCE(621);
      if (lookahead == 'I') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 52:
      if (lookahead == ',') ADVANCE(621);
      if (lookahead == 'K') ADVANCE(380);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 53:
      if (lookahead == ',') ADVANCE(621);
      if (lookahead == 'K') ADVANCE(389);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 54:
      if (lookahead == ',') ADVANCE(621);
      if (lookahead == 'K') ADVANCE(383);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 55:
      if (lookahead == ',') ADVANCE(621);
      if (lookahead == 'K') ADVANCE(392);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 56:
      if (lookahead == ',') ADVANCE(621);
      if (lookahead == 'L') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 57:
      if (lookahead == ',') ADVANCE(621);
      if (lookahead == 'L') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 58:
      if (lookahead == ',') ADVANCE(621);
      if (lookahead == 'N') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 59:
      if (lookahead == ',') ADVANCE(621);
      if (lookahead == 'N') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 60:
      if (lookahead == ',') ADVANCE(621);
      if (lookahead == 'N') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 61:
      if (lookahead == ',') ADVANCE(621);
      if (lookahead == 'N') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 62:
      if (lookahead == ',') ADVANCE(621);
      if (lookahead == 'N') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 63:
      if (lookahead == ',') ADVANCE(621);
      if (lookahead == 'N') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 64:
      if (lookahead == ',') ADVANCE(621);
      if (lookahead == 'N') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 65:
      if (lookahead == ',') ADVANCE(621);
      if (lookahead == 'O') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 66:
      if (lookahead == ',') ADVANCE(621);
      if (lookahead == 'O') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 67:
      if (lookahead == ',') ADVANCE(621);
      if (lookahead == 'O') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 68:
      if (lookahead == ',') ADVANCE(621);
      if (lookahead == 'P') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 69:
      if (lookahead == ',') ADVANCE(621);
      if (lookahead == 'P') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 70:
      if (lookahead == ',') ADVANCE(621);
      if (lookahead == 'P') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 71:
      if (lookahead == ',') ADVANCE(621);
      if (lookahead == 'R') ADVANCE(45);
      if (lookahead == 'T') ADVANCE(362);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 72:
      if (lookahead == ',') ADVANCE(621);
      if (lookahead == 'R') ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 73:
      if (lookahead == ',') ADVANCE(621);
      if (lookahead == 'S') ADVANCE(371);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 74:
      if (lookahead == ',') ADVANCE(621);
      if (lookahead == 'S') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 75:
      if (lookahead == ',') ADVANCE(621);
      if (lookahead == 'T') ADVANCE(353);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 76:
      if (lookahead == ',') ADVANCE(621);
      if (lookahead == 'T') ADVANCE(359);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 77:
      if (lookahead == ',') ADVANCE(621);
      if (lookahead == 'T') ADVANCE(368);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 78:
      if (lookahead == ',') ADVANCE(621);
      if (lookahead == 'T') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 79:
      if (lookahead == ',') ADVANCE(621);
      if (lookahead == 'T') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 80:
      if (lookahead == ',') ADVANCE(621);
      if (lookahead == 'T') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 81:
      if (lookahead == ',') ADVANCE(621);
      if (lookahead == 'T') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 82:
      if (lookahead == ',') ADVANCE(621);
      if (lookahead == 'W') ADVANCE(398);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 83:
      if (lookahead == ',') ADVANCE(621);
      if (lookahead == 'a') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 84:
      if (lookahead == ',') ADVANCE(621);
      if (lookahead == 'e') ADVANCE(600);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 85:
      if (lookahead == ',') ADVANCE(621);
      if (lookahead == 'e') ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 86:
      if (lookahead == ',') ADVANCE(621);
      if (lookahead == 'l') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 87:
      if (lookahead == ',') ADVANCE(621);
      if (lookahead == 'l') ADVANCE(608);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 88:
      if (lookahead == ',') ADVANCE(621);
      if (lookahead == 'l') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 89:
      if (lookahead == ',') ADVANCE(621);
      if (lookahead == 'r') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 90:
      if (lookahead == ',') ADVANCE(621);
      if (lookahead == 's') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 91:
      if (lookahead == ',') ADVANCE(621);
      if (lookahead == 'u') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 92:
      if (lookahead == ',') ADVANCE(621);
      if (lookahead == 'u') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 93:
      if (lookahead == ',') ADVANCE(621);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 94:
      if (lookahead == '.') ADVANCE(96);
      END_STATE();
    case 95:
      if (lookahead == '/') ADVANCE(22);
      END_STATE();
    case 96:
      if (lookahead == '0') ADVANCE(514);
      if (lookahead == '1') ADVANCE(515);
      END_STATE();
    case 97:
      if (lookahead == '2') ADVANCE(99);
      END_STATE();
    case 98:
      if (lookahead == '5') ADVANCE(410);
      END_STATE();
    case 99:
      if (lookahead == '5') ADVANCE(100);
      END_STATE();
    case 100:
      if (lookahead == '6') ADVANCE(409);
      END_STATE();
    case 101:
      if (lookahead == '=') ADVANCE(412);
      END_STATE();
    case 102:
      if (lookahead == '=') ADVANCE(411);
      END_STATE();
    case 103:
      if (lookahead == '>') ADVANCE(563);
      END_STATE();
    case 104:
      if (lookahead == 'A') ADVANCE(113);
      END_STATE();
    case 105:
      if (lookahead == 'A') ADVANCE(110);
      END_STATE();
    case 106:
      if (lookahead == 'A') ADVANCE(163);
      if (lookahead == 'O') ADVANCE(157);
      if (lookahead == 'R') ADVANCE(148);
      if (lookahead == 'U') ADVANCE(154);
      END_STATE();
    case 107:
      if (lookahead == 'B') ADVANCE(269);
      if (lookahead == 'C') ADVANCE(264);
      if (lookahead == 'F') ADVANCE(243);
      if (lookahead == 'I') ADVANCE(259);
      if (lookahead == 'S') ADVANCE(309);
      END_STATE();
    case 108:
      if (lookahead == 'C') ADVANCE(129);
      END_STATE();
    case 109:
      if (lookahead == 'C') ADVANCE(136);
      END_STATE();
    case 110:
      if (lookahead == 'C') ADVANCE(119);
      END_STATE();
    case 111:
      if (lookahead == 'C') ADVANCE(138);
      END_STATE();
    case 112:
      if (lookahead == 'C') ADVANCE(160);
      END_STATE();
    case 113:
      if (lookahead == 'D') ADVANCE(354);
      END_STATE();
    case 114:
      if (lookahead == 'D') ADVANCE(393);
      END_STATE();
    case 115:
      if (lookahead == 'E') ADVANCE(158);
      END_STATE();
    case 116:
      if (lookahead == 'E') ADVANCE(104);
      if (lookahead == 'T') ADVANCE(161);
      END_STATE();
    case 117:
      if (lookahead == 'E') ADVANCE(167);
      END_STATE();
    case 118:
      if (lookahead == 'E') ADVANCE(384);
      END_STATE();
    case 119:
      if (lookahead == 'E') ADVANCE(372);
      END_STATE();
    case 120:
      if (lookahead == 'E') ADVANCE(276);
      END_STATE();
    case 121:
      if (lookahead == 'E') ADVANCE(363);
      END_STATE();
    case 122:
      if (lookahead == 'E') ADVANCE(139);
      END_STATE();
    case 123:
      if (lookahead == 'E') ADVANCE(112);
      END_STATE();
    case 124:
      if (lookahead == 'E') ADVANCE(302);
      if (lookahead == 'U') ADVANCE(261);
      END_STATE();
    case 125:
      if (lookahead == 'E') ADVANCE(165);
      END_STATE();
    case 126:
      if (lookahead == 'E') ADVANCE(277);
      END_STATE();
    case 127:
      if (lookahead == 'F') ADVANCE(134);
      END_STATE();
    case 128:
      if (lookahead == 'G') ADVANCE(118);
      END_STATE();
    case 129:
      if (lookahead == 'H') ADVANCE(375);
      END_STATE();
    case 130:
      if (lookahead == 'I') ADVANCE(117);
      END_STATE();
    case 131:
      if (lookahead == 'I') ADVANCE(142);
      if (lookahead == 'O') ADVANCE(109);
      END_STATE();
    case 132:
      if (lookahead == 'I') ADVANCE(149);
      END_STATE();
    case 133:
      if (lookahead == 'I') ADVANCE(145);
      if (lookahead == 'O') ADVANCE(111);
      END_STATE();
    case 134:
      if (lookahead == 'I') ADVANCE(144);
      END_STATE();
    case 135:
      if (lookahead == 'K') ADVANCE(378);
      END_STATE();
    case 136:
      if (lookahead == 'K') ADVANCE(387);
      END_STATE();
    case 137:
      if (lookahead == 'K') ADVANCE(381);
      END_STATE();
    case 138:
      if (lookahead == 'K') ADVANCE(390);
      END_STATE();
    case 139:
      if (lookahead == 'L') ADVANCE(125);
      END_STATE();
    case 140:
      if (lookahead == 'L') ADVANCE(133);
      END_STATE();
    case 141:
      if (lookahead == 'N') ADVANCE(140);
      END_STATE();
    case 142:
      if (lookahead == 'N') ADVANCE(135);
      END_STATE();
    case 143:
      if (lookahead == 'N') ADVANCE(156);
      END_STATE();
    case 144:
      if (lookahead == 'N') ADVANCE(114);
      END_STATE();
    case 145:
      if (lookahead == 'N') ADVANCE(137);
      END_STATE();
    case 146:
      if (lookahead == 'N') ADVANCE(123);
      END_STATE();
    case 147:
      if (lookahead == 'N') ADVANCE(146);
      END_STATE();
    case 148:
      if (lookahead == 'O') ADVANCE(152);
      END_STATE();
    case 149:
      if (lookahead == 'O') ADVANCE(143);
      END_STATE();
    case 150:
      if (lookahead == 'O') ADVANCE(147);
      END_STATE();
    case 151:
      if (lookahead == 'P') ADVANCE(95);
      END_STATE();
    case 152:
      if (lookahead == 'P') ADVANCE(127);
      END_STATE();
    case 153:
      if (lookahead == 'P') ADVANCE(162);
      END_STATE();
    case 154:
      if (lookahead == 'R') ADVANCE(128);
      if (lookahead == 'T') ADVANCE(360);
      END_STATE();
    case 155:
      if (lookahead == 'R') ADVANCE(105);
      END_STATE();
    case 156:
      if (lookahead == 'S') ADVANCE(369);
      END_STATE();
    case 157:
      if (lookahead == 'S') ADVANCE(159);
      END_STATE();
    case 158:
      if (lookahead == 'T') ADVANCE(351);
      END_STATE();
    case 159:
      if (lookahead == 'T') ADVANCE(357);
      END_STATE();
    case 160:
      if (lookahead == 'T') ADVANCE(366);
      END_STATE();
    case 161:
      if (lookahead == 'T') ADVANCE(151);
      END_STATE();
    case 162:
      if (lookahead == 'T') ADVANCE(132);
      END_STATE();
    case 163:
      if (lookahead == 'T') ADVANCE(108);
      END_STATE();
    case 164:
      if (lookahead == 'T') ADVANCE(232);
      END_STATE();
    case 165:
      if (lookahead == 'T') ADVANCE(121);
      END_STATE();
    case 166:
      if (lookahead == 'T') ADVANCE(233);
      END_STATE();
    case 167:
      if (lookahead == 'W') ADVANCE(396);
      END_STATE();
    case 168:
      if (lookahead == 'W') ADVANCE(237);
      END_STATE();
    case 169:
      if (lookahead == ']') ADVANCE(558);
      END_STATE();
    case 170:
      if (lookahead == ']') ADVANCE(557);
      END_STATE();
    case 171:
      if (lookahead == '`') ADVANCE(620);
      END_STATE();
    case 172:
      if (lookahead == '`') ADVANCE(171);
      END_STATE();
    case 173:
      if (lookahead == 'a') ADVANCE(307);
      if (lookahead == 'd') ADVANCE(98);
      END_STATE();
    case 174:
      if (lookahead == 'a') ADVANCE(202);
      END_STATE();
    case 175:
      if (lookahead == 'a') ADVANCE(97);
      END_STATE();
    case 176:
      if (lookahead == 'a') ADVANCE(285);
      END_STATE();
    case 177:
      if (lookahead == 'a') ADVANCE(192);
      END_STATE();
    case 178:
      if (lookahead == 'a') ADVANCE(278);
      END_STATE();
    case 179:
      if (lookahead == 'a') ADVANCE(271);
      END_STATE();
    case 180:
      if (lookahead == 'a') ADVANCE(273);
      END_STATE();
    case 181:
      if (lookahead == 'a') ADVANCE(308);
      END_STATE();
    case 182:
      if (lookahead == 'a') ADVANCE(317);
      END_STATE();
    case 183:
      if (lookahead == 'a') ADVANCE(254);
      END_STATE();
    case 184:
      if (lookahead == 'a') ADVANCE(255);
      END_STATE();
    case 185:
      if (lookahead == 'a') ADVANCE(256);
      END_STATE();
    case 186:
      if (lookahead == 'a') ADVANCE(306);
      END_STATE();
    case 187:
      if (lookahead == 'a') ADVANCE(248);
      END_STATE();
    case 188:
      if (lookahead == 'a') ADVANCE(312);
      END_STATE();
    case 189:
      if (lookahead == 'a') ADVANCE(251);
      END_STATE();
    case 190:
      if (lookahead == 'a') ADVANCE(274);
      END_STATE();
    case 191:
      if (lookahead == 'a') ADVANCE(249);
      END_STATE();
    case 192:
      if (lookahead == 'b') ADVANCE(245);
      END_STATE();
    case 193:
      if (lookahead == 'c') ADVANCE(234);
      END_STATE();
    case 194:
      if (lookahead == 'c') ADVANCE(241);
      END_STATE();
    case 195:
      if (lookahead == 'c') ADVANCE(268);
      END_STATE();
    case 196:
      if (lookahead == 'c') ADVANCE(311);
      END_STATE();
    case 197:
      if (lookahead == 'c') ADVANCE(180);
      END_STATE();
    case 198:
      if (lookahead == 'c') ADVANCE(190);
      END_STATE();
    case 199:
      if (lookahead == 'c') ADVANCE(270);
      END_STATE();
    case 200:
      if (lookahead == 'd') ADVANCE(206);
      END_STATE();
    case 201:
      if (lookahead == 'd') ADVANCE(207);
      END_STATE();
    case 202:
      if (lookahead == 'd') ADVANCE(215);
      END_STATE();
    case 203:
      if (lookahead == 'd') ADVANCE(221);
      END_STATE();
    case 204:
      if (lookahead == 'e') ADVANCE(227);
      END_STATE();
    case 205:
      if (lookahead == 'e') ADVANCE(408);
      END_STATE();
    case 206:
      if (lookahead == 'e') ADVANCE(400);
      END_STATE();
    case 207:
      if (lookahead == 'e') ADVANCE(399);
      END_STATE();
    case 208:
      if (lookahead == 'e') ADVANCE(401);
      END_STATE();
    case 209:
      if (lookahead == 'e') ADVANCE(402);
      END_STATE();
    case 210:
      if (lookahead == 'e') ADVANCE(598);
      END_STATE();
    case 211:
      if (lookahead == 'e') ADVANCE(602);
      END_STATE();
    case 212:
      if (lookahead == 'e') ADVANCE(174);
      if (lookahead == 't') ADVANCE(252);
      END_STATE();
    case 213:
      if (lookahead == 'e') ADVANCE(195);
      END_STATE();
    case 214:
      if (lookahead == 'e') ADVANCE(286);
      END_STATE();
    case 215:
      if (lookahead == 'e') ADVANCE(279);
      END_STATE();
    case 216:
      if (lookahead == 'e') ADVANCE(196);
      END_STATE();
    case 217:
      if (lookahead == 'e') ADVANCE(287);
      END_STATE();
    case 218:
      if (lookahead == 'e') ADVANCE(280);
      END_STATE();
    case 219:
      if (lookahead == 'e') ADVANCE(182);
      END_STATE();
    case 220:
      if (lookahead == 'e') ADVANCE(292);
      END_STATE();
    case 221:
      if (lookahead == 'e') ADVANCE(294);
      END_STATE();
    case 222:
      if (lookahead == 'e') ADVANCE(298);
      END_STATE();
    case 223:
      if (lookahead == 'e') ADVANCE(184);
      END_STATE();
    case 224:
      if (lookahead == 'e') ADVANCE(301);
      END_STATE();
    case 225:
      if (lookahead == 'e') ADVANCE(305);
      END_STATE();
    case 226:
      if (lookahead == 'g') ADVANCE(426);
      END_STATE();
    case 227:
      if (lookahead == 'g') ADVANCE(218);
      END_STATE();
    case 228:
      if (lookahead == 'h') ADVANCE(406);
      END_STATE();
    case 229:
      if (lookahead == 'h') ADVANCE(407);
      END_STATE();
    case 230:
      if (lookahead == 'h') ADVANCE(420);
      END_STATE();
    case 231:
      if (lookahead == 'h') ADVANCE(175);
      if (lookahead == 't') ADVANCE(176);
      END_STATE();
    case 232:
      if (lookahead == 'h') ADVANCE(183);
      END_STATE();
    case 233:
      if (lookahead == 'h') ADVANCE(185);
      END_STATE();
    case 234:
      if (lookahead == 'h') ADVANCE(220);
      END_STATE();
    case 235:
      if (lookahead == 'i') ADVANCE(258);
      END_STATE();
    case 236:
      if (lookahead == 'i') ADVANCE(177);
      END_STATE();
    case 237:
      if (lookahead == 'i') ADVANCE(314);
      END_STATE();
    case 238:
      if (lookahead == 'i') ADVANCE(267);
      END_STATE();
    case 239:
      if (lookahead == 'l') ADVANCE(404);
      END_STATE();
    case 240:
      if (lookahead == 'l') ADVANCE(124);
      END_STATE();
    case 241:
      if (lookahead == 'l') ADVANCE(318);
      END_STATE();
    case 242:
      if (lookahead == 'l') ADVANCE(606);
      END_STATE();
    case 243:
      if (lookahead == 'l') ADVANCE(266);
      END_STATE();
    case 244:
      if (lookahead == 'l') ADVANCE(216);
      END_STATE();
    case 245:
      if (lookahead == 'l') ADVANCE(205);
      END_STATE();
    case 246:
      if (lookahead == 'l') ADVANCE(244);
      END_STATE();
    case 247:
      if (lookahead == 'l') ADVANCE(242);
      END_STATE();
    case 248:
      if (lookahead == 'l') ADVANCE(295);
      END_STATE();
    case 249:
      if (lookahead == 'l') ADVANCE(296);
      END_STATE();
    case 250:
      if (lookahead == 'l') ADVANCE(223);
      END_STATE();
    case 251:
      if (lookahead == 'l') ADVANCE(304);
      END_STATE();
    case 252:
      if (lookahead == 'm') ADVANCE(240);
      END_STATE();
    case 253:
      if (lookahead == 'n') ADVANCE(194);
      if (lookahead == 's') ADVANCE(107);
      END_STATE();
    case 254:
      if (lookahead == 'n') ADVANCE(416);
      END_STATE();
    case 255:
      if (lookahead == 'n') ADVANCE(425);
      END_STATE();
    case 256:
      if (lookahead == 'n') ADVANCE(413);
      END_STATE();
    case 257:
      if (lookahead == 'n') ADVANCE(427);
      END_STATE();
    case 258:
      if (lookahead == 'n') ADVANCE(226);
      END_STATE();
    case 259:
      if (lookahead == 'n') ADVANCE(313);
      END_STATE();
    case 260:
      if (lookahead == 'n') ADVANCE(275);
      END_STATE();
    case 261:
      if (lookahead == 'n') ADVANCE(225);
      END_STATE();
    case 262:
      if (lookahead == 'n') ADVANCE(199);
      END_STATE();
    case 263:
      if (lookahead == 'o') ADVANCE(260);
      END_STATE();
    case 264:
      if (lookahead == 'o') ADVANCE(246);
      END_STATE();
    case 265:
      if (lookahead == 'o') ADVANCE(250);
      END_STATE();
    case 266:
      if (lookahead == 'o') ADVANCE(186);
      END_STATE();
    case 267:
      if (lookahead == 'o') ADVANCE(257);
      END_STATE();
    case 268:
      if (lookahead == 'o') ADVANCE(200);
      END_STATE();
    case 269:
      if (lookahead == 'o') ADVANCE(265);
      END_STATE();
    case 270:
      if (lookahead == 'o') ADVANCE(201);
      END_STATE();
    case 271:
      if (lookahead == 'p') ADVANCE(310);
      END_STATE();
    case 272:
      if (lookahead == 'p') ADVANCE(181);
      END_STATE();
    case 273:
      if (lookahead == 'p') ADVANCE(208);
      END_STATE();
    case 274:
      if (lookahead == 'p') ADVANCE(209);
      END_STATE();
    case 275:
      if (lookahead == 'p') ADVANCE(188);
      END_STATE();
    case 276:
      if (lookahead == 'q') ADVANCE(321);
      END_STATE();
    case 277:
      if (lookahead == 'q') ADVANCE(324);
      END_STATE();
    case 278:
      if (lookahead == 'r') ADVANCE(236);
      END_STATE();
    case 279:
      if (lookahead == 'r') ADVANCE(405);
      END_STATE();
    case 280:
      if (lookahead == 'r') ADVANCE(423);
      END_STATE();
    case 281:
      if (lookahead == 'r') ADVANCE(219);
      END_STATE();
    case 282:
      if (lookahead == 'r') ADVANCE(235);
      END_STATE();
    case 283:
      if (lookahead == 'r') ADVANCE(120);
      END_STATE();
    case 284:
      if (lookahead == 'r') ADVANCE(320);
      END_STATE();
    case 285:
      if (lookahead == 'r') ADVANCE(315);
      if (lookahead == 't') ADVANCE(319);
      END_STATE();
    case 286:
      if (lookahead == 'r') ADVANCE(316);
      END_STATE();
    case 287:
      if (lookahead == 'r') ADVANCE(166);
      END_STATE();
    case 288:
      if (lookahead == 'r') ADVANCE(222);
      END_STATE();
    case 289:
      if (lookahead == 'r') ADVANCE(126);
      END_STATE();
    case 290:
      if (lookahead == 's') ADVANCE(263);
      END_STATE();
    case 291:
      if (lookahead == 's') ADVANCE(403);
      END_STATE();
    case 292:
      if (lookahead == 's') ADVANCE(421);
      END_STATE();
    case 293:
      if (lookahead == 's') ADVANCE(169);
      END_STATE();
    case 294:
      if (lookahead == 's') ADVANCE(422);
      END_STATE();
    case 295:
      if (lookahead == 's') ADVANCE(419);
      END_STATE();
    case 296:
      if (lookahead == 's') ADVANCE(415);
      END_STATE();
    case 297:
      if (lookahead == 's') ADVANCE(168);
      END_STATE();
    case 298:
      if (lookahead == 's') ADVANCE(170);
      END_STATE();
    case 299:
      if (lookahead == 's') ADVANCE(300);
      END_STATE();
    case 300:
      if (lookahead == 's') ADVANCE(214);
      END_STATE();
    case 301:
      if (lookahead == 's') ADVANCE(303);
      END_STATE();
    case 302:
      if (lookahead == 's') ADVANCE(197);
      END_STATE();
    case 303:
      if (lookahead == 's') ADVANCE(164);
      END_STATE();
    case 304:
      if (lookahead == 's') ADVANCE(211);
      END_STATE();
    case 305:
      if (lookahead == 's') ADVANCE(198);
      END_STATE();
    case 306:
      if (lookahead == 't') ADVANCE(424);
      END_STATE();
    case 307:
      if (lookahead == 't') ADVANCE(193);
      END_STATE();
    case 308:
      if (lookahead == 't') ADVANCE(228);
      END_STATE();
    case 309:
      if (lookahead == 't') ADVANCE(282);
      END_STATE();
    case 310:
      if (lookahead == 't') ADVANCE(322);
      END_STATE();
    case 311:
      if (lookahead == 't') ADVANCE(238);
      END_STATE();
    case 312:
      if (lookahead == 't') ADVANCE(229);
      END_STATE();
    case 313:
      if (lookahead == 't') ADVANCE(204);
      END_STATE();
    case 314:
      if (lookahead == 't') ADVANCE(230);
      END_STATE();
    case 315:
      if (lookahead == 't') ADVANCE(297);
      END_STATE();
    case 316:
      if (lookahead == 't') ADVANCE(293);
      END_STATE();
    case 317:
      if (lookahead == 't') ADVANCE(217);
      END_STATE();
    case 318:
      if (lookahead == 'u') ADVANCE(203);
      END_STATE();
    case 319:
      if (lookahead == 'u') ADVANCE(291);
      END_STATE();
    case 320:
      if (lookahead == 'u') ADVANCE(210);
      END_STATE();
    case 321:
      if (lookahead == 'u') ADVANCE(187);
      END_STATE();
    case 322:
      if (lookahead == 'u') ADVANCE(288);
      END_STATE();
    case 323:
      if (lookahead == 'u') ADVANCE(247);
      END_STATE();
    case 324:
      if (lookahead == 'u') ADVANCE(191);
      END_STATE();
    case 325:
      if (lookahead == '}') ADVANCE(597);
      END_STATE();
    case 326:
      if (lookahead == '}') ADVANCE(595);
      END_STATE();
    case 327:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(513);
      END_STATE();
    case 328:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(327);
      END_STATE();
    case 329:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(622);
      END_STATE();
    case 330:
      if (eof) ADVANCE(345);
      if (lookahead == '\n') SKIP(330)
      if (lookahead == '#') ADVANCE(329);
      if (lookahead == 'C') ADVANCE(551);
      if (lookahead == 'D') ADVANCE(547);
      if (lookahead == 'G') ADVANCE(544);
      if (lookahead == 'H') ADVANCE(546);
      if (lookahead == 'L') ADVANCE(549);
      if (lookahead == 'O') ADVANCE(552);
      if (lookahead == 'P') ADVANCE(541);
      if (lookahead == 'T') ADVANCE(553);
      if (lookahead == 'U') ADVANCE(550);
      if (lookahead == 'V') ADVANCE(548);
      if (lookahead == '\\') ADVANCE(526);
      if (aux_sym_xml_string_token1_character_set_1(lookahead)) ADVANCE(542);
      if (lookahead != 0) ADVANCE(523);
      END_STATE();
    case 331:
      if (eof) ADVANCE(345);
      if (lookahead == '\n') SKIP(332)
      if (lookahead == '"') ADVANCE(578);
      if (lookahead == '#') ADVANCE(329);
      if (lookahead == '<') ADVANCE(418);
      if (lookahead == 'C') ADVANCE(534);
      if (lookahead == 'D') ADVANCE(528);
      if (lookahead == 'G') ADVANCE(529);
      if (lookahead == 'H') ADVANCE(530);
      if (lookahead == 'L') ADVANCE(532);
      if (lookahead == 'O') ADVANCE(535);
      if (lookahead == 'P') ADVANCE(527);
      if (lookahead == 'T') ADVANCE(536);
      if (lookahead == 'U') ADVANCE(533);
      if (lookahead == 'V') ADVANCE(531);
      if (lookahead == '[') ADVANCE(429);
      if (lookahead == '\\') ADVANCE(526);
      if (lookahead == '`') ADVANCE(556);
      if (lookahead == 'f') ADVANCE(537);
      if (lookahead == 'n') ADVANCE(539);
      if (lookahead == 't') ADVANCE(538);
      if (lookahead == '{') ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(540);
      if (aux_sym_xml_string_token1_character_set_1(lookahead)) ADVANCE(525);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(540);
      if (lookahead != 0) ADVANCE(523);
      END_STATE();
    case 332:
      if (eof) ADVANCE(345);
      if (lookahead == '\n') SKIP(332)
      if (lookahead == '"') ADVANCE(578);
      if (lookahead == '#') ADVANCE(329);
      if (lookahead == '<') ADVANCE(418);
      if (lookahead == 'C') ADVANCE(534);
      if (lookahead == 'D') ADVANCE(528);
      if (lookahead == 'G') ADVANCE(529);
      if (lookahead == 'H') ADVANCE(530);
      if (lookahead == 'L') ADVANCE(532);
      if (lookahead == 'O') ADVANCE(535);
      if (lookahead == 'P') ADVANCE(527);
      if (lookahead == 'T') ADVANCE(536);
      if (lookahead == 'U') ADVANCE(533);
      if (lookahead == 'V') ADVANCE(531);
      if (lookahead == '[') ADVANCE(429);
      if (lookahead == '\\') ADVANCE(526);
      if (lookahead == '`') ADVANCE(556);
      if (lookahead == 'f') ADVANCE(537);
      if (lookahead == 'n') ADVANCE(539);
      if (lookahead == 't') ADVANCE(538);
      if (lookahead == '{') ADVANCE(574);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(540);
      if (aux_sym_xml_string_token1_character_set_1(lookahead)) ADVANCE(525);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(540);
      if (lookahead != 0) ADVANCE(523);
      END_STATE();
    case 333:
      if (eof) ADVANCE(345);
      if (lookahead == '\n') SKIP(333)
      if (lookahead == '#') ADVANCE(329);
      if (lookahead == 'C') ADVANCE(551);
      if (lookahead == 'D') ADVANCE(547);
      if (lookahead == 'G') ADVANCE(544);
      if (lookahead == 'H') ADVANCE(545);
      if (lookahead == 'L') ADVANCE(549);
      if (lookahead == 'O') ADVANCE(552);
      if (lookahead == 'P') ADVANCE(541);
      if (lookahead == 'T') ADVANCE(553);
      if (lookahead == 'U') ADVANCE(550);
      if (lookahead == 'V') ADVANCE(548);
      if (lookahead == '\\') ADVANCE(526);
      if (aux_sym_xml_string_token1_character_set_1(lookahead)) ADVANCE(543);
      if (lookahead != 0) ADVANCE(523);
      END_STATE();
    case 334:
      if (eof) ADVANCE(345);
      if (lookahead == '!') ADVANCE(101);
      if (lookahead == '"') ADVANCE(578);
      if (lookahead == '#') ADVANCE(329);
      if (lookahead == '+') ADVANCE(614);
      if (lookahead == ',') ADVANCE(576);
      if (lookahead == '-') ADVANCE(615);
      if (lookahead == '.') ADVANCE(611);
      if (lookahead == ':') ADVANCE(518);
      if (lookahead == '<') ADVANCE(417);
      if (lookahead == '=') ADVANCE(102);
      if (lookahead == '>') ADVANCE(414);
      if (lookahead == '?') ADVANCE(103);
      if (lookahead == 'E') ADVANCE(613);
      if (lookahead == 'G') ADVANCE(115);
      if (lookahead == 'H') ADVANCE(116);
      if (lookahead == 'L') ADVANCE(131);
      if (lookahead == 'O') ADVANCE(153);
      if (lookahead == 'P') ADVANCE(106);
      if (lookahead == 'T') ADVANCE(155);
      if (lookahead == 'U') ADVANCE(141);
      if (lookahead == 'V') ADVANCE(130);
      if (lookahead == '[') ADVANCE(429);
      if (lookahead == '\\') ADVANCE(583);
      if (lookahead == ']') ADVANCE(512);
      if (lookahead == '`') ADVANCE(172);
      if (lookahead == 'b') ADVANCE(584);
      if (lookahead == 'e') ADVANCE(612);
      if (lookahead == 'f') ADVANCE(585);
      if (lookahead == 'g') ADVANCE(281);
      if (lookahead == 'h') ADVANCE(212);
      if (lookahead == 'i') ADVANCE(253);
      if (lookahead == 'j') ADVANCE(290);
      if (lookahead == 'l') ADVANCE(224);
      if (lookahead == 'm') ADVANCE(173);
      if (lookahead == 'n') ADVANCE(586);
      if (lookahead == 'r') ADVANCE(587);
      if (lookahead == 's') ADVANCE(231);
      if (lookahead == 't') ADVANCE(588);
      if (lookahead == 'u') ADVANCE(590);
      if (lookahead == 'v') ADVANCE(178);
      if (lookahead == 'x') ADVANCE(272);
      if (lookahead == '{') ADVANCE(574);
      if (lookahead == '}') ADVANCE(577);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'd')) ADVANCE(610);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(610);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(334)
      END_STATE();
    case 335:
      if (eof) ADVANCE(345);
      if (lookahead == '"') ADVANCE(578);
      if (lookahead == '#') ADVANCE(329);
      if (lookahead == '+') ADVANCE(614);
      if (lookahead == ',') ADVANCE(576);
      if (lookahead == '-') ADVANCE(615);
      if (lookahead == '.') ADVANCE(611);
      if (lookahead == 'C') ADVANCE(150);
      if (lookahead == 'D') ADVANCE(122);
      if (lookahead == 'E') ADVANCE(613);
      if (lookahead == 'G') ADVANCE(115);
      if (lookahead == 'H') ADVANCE(116);
      if (lookahead == 'L') ADVANCE(131);
      if (lookahead == 'O') ADVANCE(153);
      if (lookahead == 'P') ADVANCE(106);
      if (lookahead == 'T') ADVANCE(155);
      if (lookahead == 'U') ADVANCE(141);
      if (lookahead == 'V') ADVANCE(130);
      if (lookahead == '[') ADVANCE(428);
      if (lookahead == ']') ADVANCE(512);
      if (lookahead == 'e') ADVANCE(612);
      if (lookahead == 'f') ADVANCE(189);
      if (lookahead == 'n') ADVANCE(323);
      if (lookahead == 't') ADVANCE(284);
      if (lookahead == '{') ADVANCE(575);
      if (lookahead == '}') ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(616);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(336)
      END_STATE();
    case 336:
      if (eof) ADVANCE(345);
      if (lookahead == '"') ADVANCE(578);
      if (lookahead == '#') ADVANCE(329);
      if (lookahead == '+') ADVANCE(614);
      if (lookahead == ',') ADVANCE(576);
      if (lookahead == '-') ADVANCE(615);
      if (lookahead == '.') ADVANCE(611);
      if (lookahead == 'C') ADVANCE(150);
      if (lookahead == 'D') ADVANCE(122);
      if (lookahead == 'E') ADVANCE(613);
      if (lookahead == 'G') ADVANCE(115);
      if (lookahead == 'H') ADVANCE(116);
      if (lookahead == 'L') ADVANCE(131);
      if (lookahead == 'O') ADVANCE(153);
      if (lookahead == 'P') ADVANCE(106);
      if (lookahead == 'T') ADVANCE(155);
      if (lookahead == 'U') ADVANCE(141);
      if (lookahead == 'V') ADVANCE(130);
      if (lookahead == '[') ADVANCE(428);
      if (lookahead == ']') ADVANCE(512);
      if (lookahead == 'e') ADVANCE(612);
      if (lookahead == 'f') ADVANCE(189);
      if (lookahead == 'n') ADVANCE(323);
      if (lookahead == 't') ADVANCE(284);
      if (lookahead == '{') ADVANCE(574);
      if (lookahead == '}') ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(616);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(336)
      END_STATE();
    case 337:
      if (eof) ADVANCE(345);
      if (lookahead == '"') ADVANCE(578);
      if (lookahead == '#') ADVANCE(329);
      if (lookahead == '<') ADVANCE(418);
      if (lookahead == 'C') ADVANCE(65);
      if (lookahead == 'D') ADVANCE(34);
      if (lookahead == 'G') ADVANCE(35);
      if (lookahead == 'H') ADVANCE(36);
      if (lookahead == 'L') ADVANCE(48);
      if (lookahead == 'O') ADVANCE(70);
      if (lookahead == 'P') ADVANCE(26);
      if (lookahead == 'T') ADVANCE(72);
      if (lookahead == 'U') ADVANCE(59);
      if (lookahead == 'V') ADVANCE(47);
      if (lookahead == '[') ADVANCE(428);
      if (lookahead == '`') ADVANCE(172);
      if (lookahead == 'f') ADVANCE(83);
      if (lookahead == 'n') ADVANCE(92);
      if (lookahead == 't') ADVANCE(89);
      if (lookahead == '{') ADVANCE(575);
      if (lookahead == '}') ADVANCE(325);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(617);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(338)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 338:
      if (eof) ADVANCE(345);
      if (lookahead == '"') ADVANCE(578);
      if (lookahead == '#') ADVANCE(329);
      if (lookahead == '<') ADVANCE(418);
      if (lookahead == 'C') ADVANCE(65);
      if (lookahead == 'D') ADVANCE(34);
      if (lookahead == 'G') ADVANCE(35);
      if (lookahead == 'H') ADVANCE(36);
      if (lookahead == 'L') ADVANCE(48);
      if (lookahead == 'O') ADVANCE(70);
      if (lookahead == 'P') ADVANCE(26);
      if (lookahead == 'T') ADVANCE(72);
      if (lookahead == 'U') ADVANCE(59);
      if (lookahead == 'V') ADVANCE(47);
      if (lookahead == '[') ADVANCE(428);
      if (lookahead == '`') ADVANCE(172);
      if (lookahead == 'f') ADVANCE(83);
      if (lookahead == 'n') ADVANCE(92);
      if (lookahead == 't') ADVANCE(89);
      if (lookahead == '{') ADVANCE(574);
      if (lookahead == '}') ADVANCE(325);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(617);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(338)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 339:
      if (eof) ADVANCE(345);
      if (lookahead == '"') ADVANCE(578);
      if (lookahead == '#') ADVANCE(329);
      if (lookahead == '<') ADVANCE(418);
      if (lookahead == 'C') ADVANCE(65);
      if (lookahead == 'D') ADVANCE(34);
      if (lookahead == 'G') ADVANCE(35);
      if (lookahead == 'H') ADVANCE(37);
      if (lookahead == 'L') ADVANCE(48);
      if (lookahead == 'O') ADVANCE(70);
      if (lookahead == 'P') ADVANCE(26);
      if (lookahead == 'T') ADVANCE(72);
      if (lookahead == 'U') ADVANCE(59);
      if (lookahead == 'V') ADVANCE(47);
      if (lookahead == '[') ADVANCE(429);
      if (lookahead == '`') ADVANCE(172);
      if (lookahead == 'f') ADVANCE(83);
      if (lookahead == 'n') ADVANCE(92);
      if (lookahead == 't') ADVANCE(89);
      if (lookahead == '{') ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(617);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(340)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 340:
      if (eof) ADVANCE(345);
      if (lookahead == '"') ADVANCE(578);
      if (lookahead == '#') ADVANCE(329);
      if (lookahead == '<') ADVANCE(418);
      if (lookahead == 'C') ADVANCE(65);
      if (lookahead == 'D') ADVANCE(34);
      if (lookahead == 'G') ADVANCE(35);
      if (lookahead == 'H') ADVANCE(37);
      if (lookahead == 'L') ADVANCE(48);
      if (lookahead == 'O') ADVANCE(70);
      if (lookahead == 'P') ADVANCE(26);
      if (lookahead == 'T') ADVANCE(72);
      if (lookahead == 'U') ADVANCE(59);
      if (lookahead == 'V') ADVANCE(47);
      if (lookahead == '[') ADVANCE(429);
      if (lookahead == '`') ADVANCE(172);
      if (lookahead == 'f') ADVANCE(83);
      if (lookahead == 'n') ADVANCE(92);
      if (lookahead == 't') ADVANCE(89);
      if (lookahead == '{') ADVANCE(574);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(617);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(340)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 341:
      if (eof) ADVANCE(345);
      if (lookahead == '"') ADVANCE(578);
      if (lookahead == '#') ADVANCE(329);
      if (lookahead == '<') ADVANCE(418);
      if (lookahead == 'C') ADVANCE(472);
      if (lookahead == 'D') ADVANCE(441);
      if (lookahead == 'G') ADVANCE(442);
      if (lookahead == 'H') ADVANCE(443);
      if (lookahead == 'L') ADVANCE(455);
      if (lookahead == 'O') ADVANCE(477);
      if (lookahead == 'P') ADVANCE(433);
      if (lookahead == 'T') ADVANCE(479);
      if (lookahead == 'U') ADVANCE(466);
      if (lookahead == 'V') ADVANCE(454);
      if (lookahead == '[') ADVANCE(428);
      if (lookahead == '`') ADVANCE(172);
      if (lookahead == 'f') ADVANCE(490);
      if (lookahead == 'n') ADVANCE(499);
      if (lookahead == 't') ADVANCE(496);
      if (lookahead == '{') ADVANCE(575);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(511);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(500);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(342)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 342:
      if (eof) ADVANCE(345);
      if (lookahead == '"') ADVANCE(578);
      if (lookahead == '#') ADVANCE(329);
      if (lookahead == '<') ADVANCE(418);
      if (lookahead == 'C') ADVANCE(472);
      if (lookahead == 'D') ADVANCE(441);
      if (lookahead == 'G') ADVANCE(442);
      if (lookahead == 'H') ADVANCE(443);
      if (lookahead == 'L') ADVANCE(455);
      if (lookahead == 'O') ADVANCE(477);
      if (lookahead == 'P') ADVANCE(433);
      if (lookahead == 'T') ADVANCE(479);
      if (lookahead == 'U') ADVANCE(466);
      if (lookahead == 'V') ADVANCE(454);
      if (lookahead == '[') ADVANCE(428);
      if (lookahead == '`') ADVANCE(172);
      if (lookahead == 'f') ADVANCE(490);
      if (lookahead == 'n') ADVANCE(499);
      if (lookahead == 't') ADVANCE(496);
      if (lookahead == '{') ADVANCE(574);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(511);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(500);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(342)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 343:
      if (eof) ADVANCE(345);
      if (lookahead == '"') ADVANCE(578);
      if (lookahead == '#') ADVANCE(329);
      if (lookahead == '<') ADVANCE(418);
      if (lookahead == 'C') ADVANCE(472);
      if (lookahead == 'D') ADVANCE(441);
      if (lookahead == 'G') ADVANCE(442);
      if (lookahead == 'H') ADVANCE(444);
      if (lookahead == 'L') ADVANCE(455);
      if (lookahead == 'O') ADVANCE(477);
      if (lookahead == 'P') ADVANCE(433);
      if (lookahead == 'T') ADVANCE(479);
      if (lookahead == 'U') ADVANCE(466);
      if (lookahead == 'V') ADVANCE(454);
      if (lookahead == '[') ADVANCE(429);
      if (lookahead == '`') ADVANCE(172);
      if (lookahead == 'f') ADVANCE(490);
      if (lookahead == 'n') ADVANCE(499);
      if (lookahead == 't') ADVANCE(496);
      if (lookahead == '{') ADVANCE(575);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(511);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(500);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(344)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 344:
      if (eof) ADVANCE(345);
      if (lookahead == '"') ADVANCE(578);
      if (lookahead == '#') ADVANCE(329);
      if (lookahead == '<') ADVANCE(418);
      if (lookahead == 'C') ADVANCE(472);
      if (lookahead == 'D') ADVANCE(441);
      if (lookahead == 'G') ADVANCE(442);
      if (lookahead == 'H') ADVANCE(444);
      if (lookahead == 'L') ADVANCE(455);
      if (lookahead == 'O') ADVANCE(477);
      if (lookahead == 'P') ADVANCE(433);
      if (lookahead == 'T') ADVANCE(479);
      if (lookahead == 'U') ADVANCE(466);
      if (lookahead == 'V') ADVANCE(454);
      if (lookahead == '[') ADVANCE(429);
      if (lookahead == '`') ADVANCE(172);
      if (lookahead == 'f') ADVANCE(490);
      if (lookahead == 'n') ADVANCE(499);
      if (lookahead == 't') ADVANCE(496);
      if (lookahead == '{') ADVANCE(574);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(511);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(500);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(344)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(346);
      if (aux_sym_xml_string_token1_character_set_1(lookahead)) ADVANCE(524);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(347);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_uri);
      if (lookahead == '#') ADVANCE(349);
      if (lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(348);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(350);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_uri);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(622);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(349);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_uri);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(350);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(anon_sym_GET);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(anon_sym_GET);
      if (lookahead == ',') ADVANCE(621);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(511);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(anon_sym_GET);
      if (lookahead == ',') ADVANCE(621);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(anon_sym_HEAD);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(anon_sym_HEAD);
      if (lookahead == ',') ADVANCE(621);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(511);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(anon_sym_HEAD);
      if (lookahead == ',') ADVANCE(621);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(anon_sym_POST);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(anon_sym_POST);
      if (lookahead == ',') ADVANCE(621);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(511);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(anon_sym_POST);
      if (lookahead == ',') ADVANCE(621);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(anon_sym_PUT);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(anon_sym_PUT);
      if (lookahead == ',') ADVANCE(621);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(511);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(anon_sym_PUT);
      if (lookahead == ',') ADVANCE(621);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(anon_sym_DELETE);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(anon_sym_DELETE);
      if (lookahead == ',') ADVANCE(621);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(511);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(anon_sym_DELETE);
      if (lookahead == ',') ADVANCE(621);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(anon_sym_CONNECT);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(anon_sym_CONNECT);
      if (lookahead == ',') ADVANCE(621);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(511);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(anon_sym_CONNECT);
      if (lookahead == ',') ADVANCE(621);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(anon_sym_OPTIONS);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(anon_sym_OPTIONS);
      if (lookahead == ',') ADVANCE(621);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(511);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(anon_sym_OPTIONS);
      if (lookahead == ',') ADVANCE(621);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(anon_sym_TRACE);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(anon_sym_TRACE);
      if (lookahead == ',') ADVANCE(621);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(511);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(anon_sym_TRACE);
      if (lookahead == ',') ADVANCE(621);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(anon_sym_PATCH);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(anon_sym_PATCH);
      if (lookahead == ',') ADVANCE(621);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(511);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(anon_sym_PATCH);
      if (lookahead == ',') ADVANCE(621);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(anon_sym_LINK);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(anon_sym_LINK);
      if (lookahead == ',') ADVANCE(621);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(511);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(anon_sym_LINK);
      if (lookahead == ',') ADVANCE(621);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(anon_sym_UNLINK);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(anon_sym_UNLINK);
      if (lookahead == ',') ADVANCE(621);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(511);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(anon_sym_UNLINK);
      if (lookahead == ',') ADVANCE(621);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(anon_sym_PURGE);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(anon_sym_PURGE);
      if (lookahead == ',') ADVANCE(621);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(511);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(anon_sym_PURGE);
      if (lookahead == ',') ADVANCE(621);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(anon_sym_LOCK);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(anon_sym_LOCK);
      if (lookahead == ',') ADVANCE(621);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(511);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(anon_sym_LOCK);
      if (lookahead == ',') ADVANCE(621);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(anon_sym_UNLOCK);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(anon_sym_UNLOCK);
      if (lookahead == ',') ADVANCE(621);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(511);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(anon_sym_UNLOCK);
      if (lookahead == ',') ADVANCE(621);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(anon_sym_PROPFIND);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(anon_sym_PROPFIND);
      if (lookahead == ',') ADVANCE(621);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(511);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(anon_sym_PROPFIND);
      if (lookahead == ',') ADVANCE(621);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(anon_sym_VIEW);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(anon_sym_VIEW);
      if (lookahead == ',') ADVANCE(621);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(511);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(anon_sym_VIEW);
      if (lookahead == ',') ADVANCE(621);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(anon_sym_urlEncode);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(anon_sym_urlDecode);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(anon_sym_htmlEscape);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(anon_sym_htmlUnescape);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(anon_sym_status);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(anon_sym_url);
      if (lookahead == 'D') ADVANCE(213);
      if (lookahead == 'E') ADVANCE(262);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(anon_sym_header);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(anon_sym_xpath);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(anon_sym_jsonpath);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(anon_sym_variable);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(anon_sym_sha256);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(anon_sym_md5);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(anon_sym_greaterThan);
      if (lookahead == 'O') ADVANCE(289);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(anon_sym_greaterThanOrEquals);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(anon_sym_lessThan);
      if (lookahead == 'O') ADVANCE(283);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '/') ADVANCE(567);
      if (lookahead == '?') ADVANCE(559);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '?') ADVANCE(559);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(anon_sym_lessThanOrEquals);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(anon_sym_startsWith);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(anon_sym_matches);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(anon_sym_includes);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(anon_sym_isInteger);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(anon_sym_isFloat);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(anon_sym_isBoolean);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(anon_sym_isString);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(anon_sym_isCollection);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == 'A') ADVANCE(299);
      if (lookahead == 'C') ADVANCE(179);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(aux_sym_section_header_token1);
      if (lookahead == ',') ADVANCE(621);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(511);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(aux_sym_section_header_token1);
      if (lookahead == ',') ADVANCE(621);
      if (lookahead == 'A') ADVANCE(439);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(511);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(aux_sym_section_header_token1);
      if (lookahead == ',') ADVANCE(621);
      if (lookahead == 'A') ADVANCE(437);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(511);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(aux_sym_section_header_token1);
      if (lookahead == ',') ADVANCE(621);
      if (lookahead == 'A') ADVANCE(487);
      if (lookahead == 'O') ADVANCE(481);
      if (lookahead == 'R') ADVANCE(473);
      if (lookahead == 'U') ADVANCE(478);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(511);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(aux_sym_section_header_token1);
      if (lookahead == ',') ADVANCE(621);
      if (lookahead == 'C') ADVANCE(453);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(511);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(aux_sym_section_header_token1);
      if (lookahead == ',') ADVANCE(621);
      if (lookahead == 'C') ADVANCE(460);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(511);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(aux_sym_section_header_token1);
      if (lookahead == ',') ADVANCE(621);
      if (lookahead == 'C') ADVANCE(462);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(511);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(aux_sym_section_header_token1);
      if (lookahead == ',') ADVANCE(621);
      if (lookahead == 'C') ADVANCE(447);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(511);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(aux_sym_section_header_token1);
      if (lookahead == ',') ADVANCE(621);
      if (lookahead == 'C') ADVANCE(484);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(511);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(aux_sym_section_header_token1);
      if (lookahead == ',') ADVANCE(621);
      if (lookahead == 'D') ADVANCE(355);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(511);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(aux_sym_section_header_token1);
      if (lookahead == ',') ADVANCE(621);
      if (lookahead == 'D') ADVANCE(394);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(511);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(aux_sym_section_header_token1);
      if (lookahead == ',') ADVANCE(621);
      if (lookahead == 'E') ADVANCE(463);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(511);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(aux_sym_section_header_token1);
      if (lookahead == ',') ADVANCE(621);
      if (lookahead == 'E') ADVANCE(482);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(511);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(aux_sym_section_header_token1);
      if (lookahead == ',') ADVANCE(621);
      if (lookahead == 'E') ADVANCE(431);
      if (lookahead == 'T') ADVANCE(485);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(511);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(aux_sym_section_header_token1);
      if (lookahead == ',') ADVANCE(621);
      if (lookahead == 'E') ADVANCE(431);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(511);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(aux_sym_section_header_token1);
      if (lookahead == ',') ADVANCE(621);
      if (lookahead == 'E') ADVANCE(489);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(511);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(aux_sym_section_header_token1);
      if (lookahead == ',') ADVANCE(621);
      if (lookahead == 'E') ADVANCE(385);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(511);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(aux_sym_section_header_token1);
      if (lookahead == ',') ADVANCE(621);
      if (lookahead == 'E') ADVANCE(373);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(511);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(aux_sym_section_header_token1);
      if (lookahead == ',') ADVANCE(621);
      if (lookahead == 'E') ADVANCE(364);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(511);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(aux_sym_section_header_token1);
      if (lookahead == ',') ADVANCE(621);
      if (lookahead == 'E') ADVANCE(438);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(511);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(aux_sym_section_header_token1);
      if (lookahead == ',') ADVANCE(621);
      if (lookahead == 'E') ADVANCE(488);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(511);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(aux_sym_section_header_token1);
      if (lookahead == ',') ADVANCE(621);
      if (lookahead == 'F') ADVANCE(457);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(511);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(aux_sym_section_header_token1);
      if (lookahead == ',') ADVANCE(621);
      if (lookahead == 'G') ADVANCE(446);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(511);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(aux_sym_section_header_token1);
      if (lookahead == ',') ADVANCE(621);
      if (lookahead == 'H') ADVANCE(376);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(511);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(aux_sym_section_header_token1);
      if (lookahead == ',') ADVANCE(621);
      if (lookahead == 'I') ADVANCE(445);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(511);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(aux_sym_section_header_token1);
      if (lookahead == ',') ADVANCE(621);
      if (lookahead == 'I') ADVANCE(465);
      if (lookahead == 'O') ADVANCE(435);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(511);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(aux_sym_section_header_token1);
      if (lookahead == ',') ADVANCE(621);
      if (lookahead == 'I') ADVANCE(469);
      if (lookahead == 'O') ADVANCE(436);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(511);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(aux_sym_section_header_token1);
      if (lookahead == ',') ADVANCE(621);
      if (lookahead == 'I') ADVANCE(468);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(511);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(aux_sym_section_header_token1);
      if (lookahead == ',') ADVANCE(621);
      if (lookahead == 'I') ADVANCE(474);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(511);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(aux_sym_section_header_token1);
      if (lookahead == ',') ADVANCE(621);
      if (lookahead == 'K') ADVANCE(379);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(511);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(aux_sym_section_header_token1);
      if (lookahead == ',') ADVANCE(621);
      if (lookahead == 'K') ADVANCE(388);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(511);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(aux_sym_section_header_token1);
      if (lookahead == ',') ADVANCE(621);
      if (lookahead == 'K') ADVANCE(382);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(511);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(aux_sym_section_header_token1);
      if (lookahead == ',') ADVANCE(621);
      if (lookahead == 'K') ADVANCE(391);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(511);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(aux_sym_section_header_token1);
      if (lookahead == ',') ADVANCE(621);
      if (lookahead == 'L') ADVANCE(450);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(511);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(aux_sym_section_header_token1);
      if (lookahead == ',') ADVANCE(621);
      if (lookahead == 'L') ADVANCE(456);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(511);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(aux_sym_section_header_token1);
      if (lookahead == ',') ADVANCE(621);
      if (lookahead == 'N') ADVANCE(459);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(511);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(aux_sym_section_header_token1);
      if (lookahead == ',') ADVANCE(621);
      if (lookahead == 'N') ADVANCE(464);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(511);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(aux_sym_section_header_token1);
      if (lookahead == ',') ADVANCE(621);
      if (lookahead == 'N') ADVANCE(480);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(511);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(aux_sym_section_header_token1);
      if (lookahead == ',') ADVANCE(621);
      if (lookahead == 'N') ADVANCE(440);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(511);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(aux_sym_section_header_token1);
      if (lookahead == ',') ADVANCE(621);
      if (lookahead == 'N') ADVANCE(461);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(511);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(aux_sym_section_header_token1);
      if (lookahead == ',') ADVANCE(621);
      if (lookahead == 'N') ADVANCE(471);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(511);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(aux_sym_section_header_token1);
      if (lookahead == ',') ADVANCE(621);
      if (lookahead == 'N') ADVANCE(449);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(511);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(aux_sym_section_header_token1);
      if (lookahead == ',') ADVANCE(621);
      if (lookahead == 'O') ADVANCE(470);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(511);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(aux_sym_section_header_token1);
      if (lookahead == ',') ADVANCE(621);
      if (lookahead == 'O') ADVANCE(476);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(511);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(aux_sym_section_header_token1);
      if (lookahead == ',') ADVANCE(621);
      if (lookahead == 'O') ADVANCE(467);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(511);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(aux_sym_section_header_token1);
      if (lookahead == ',') ADVANCE(621);
      if (lookahead == 'P') ADVANCE(430);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(511);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(aux_sym_section_header_token1);
      if (lookahead == ',') ADVANCE(621);
      if (lookahead == 'P') ADVANCE(451);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(511);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(aux_sym_section_header_token1);
      if (lookahead == ',') ADVANCE(621);
      if (lookahead == 'P') ADVANCE(486);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(511);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(aux_sym_section_header_token1);
      if (lookahead == ',') ADVANCE(621);
      if (lookahead == 'R') ADVANCE(452);
      if (lookahead == 'T') ADVANCE(361);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(511);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(aux_sym_section_header_token1);
      if (lookahead == ',') ADVANCE(621);
      if (lookahead == 'R') ADVANCE(432);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(511);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(aux_sym_section_header_token1);
      if (lookahead == ',') ADVANCE(621);
      if (lookahead == 'S') ADVANCE(370);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(511);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(aux_sym_section_header_token1);
      if (lookahead == ',') ADVANCE(621);
      if (lookahead == 'S') ADVANCE(483);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(511);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(aux_sym_section_header_token1);
      if (lookahead == ',') ADVANCE(621);
      if (lookahead == 'T') ADVANCE(352);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(511);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(aux_sym_section_header_token1);
      if (lookahead == ',') ADVANCE(621);
      if (lookahead == 'T') ADVANCE(358);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(511);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(aux_sym_section_header_token1);
      if (lookahead == ',') ADVANCE(621);
      if (lookahead == 'T') ADVANCE(367);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(511);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(aux_sym_section_header_token1);
      if (lookahead == ',') ADVANCE(621);
      if (lookahead == 'T') ADVANCE(475);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(511);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(aux_sym_section_header_token1);
      if (lookahead == ',') ADVANCE(621);
      if (lookahead == 'T') ADVANCE(458);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(511);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(aux_sym_section_header_token1);
      if (lookahead == ',') ADVANCE(621);
      if (lookahead == 'T') ADVANCE(434);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(511);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(aux_sym_section_header_token1);
      if (lookahead == ',') ADVANCE(621);
      if (lookahead == 'T') ADVANCE(448);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(511);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(aux_sym_section_header_token1);
      if (lookahead == ',') ADVANCE(621);
      if (lookahead == 'W') ADVANCE(397);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(511);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(aux_sym_section_header_token1);
      if (lookahead == ',') ADVANCE(621);
      if (lookahead == 'a') ADVANCE(493);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(511);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(aux_sym_section_header_token1);
      if (lookahead == ',') ADVANCE(621);
      if (lookahead == 'e') ADVANCE(599);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(511);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(aux_sym_section_header_token1);
      if (lookahead == ',') ADVANCE(621);
      if (lookahead == 'e') ADVANCE(603);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(511);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(aux_sym_section_header_token1);
      if (lookahead == ',') ADVANCE(621);
      if (lookahead == 'l') ADVANCE(497);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(511);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(aux_sym_section_header_token1);
      if (lookahead == ',') ADVANCE(621);
      if (lookahead == 'l') ADVANCE(607);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(511);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(aux_sym_section_header_token1);
      if (lookahead == ',') ADVANCE(621);
      if (lookahead == 'l') ADVANCE(494);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(511);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(aux_sym_section_header_token1);
      if (lookahead == ',') ADVANCE(621);
      if (lookahead == 'r') ADVANCE(498);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(511);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(aux_sym_section_header_token1);
      if (lookahead == ',') ADVANCE(621);
      if (lookahead == 's') ADVANCE(492);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(511);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(aux_sym_section_header_token1);
      if (lookahead == ',') ADVANCE(621);
      if (lookahead == 'u') ADVANCE(491);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(511);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(aux_sym_section_header_token1);
      if (lookahead == ',') ADVANCE(621);
      if (lookahead == 'u') ADVANCE(495);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(511);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(aux_sym_section_header_token1);
      if (lookahead == ',') ADVANCE(621);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(511);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(aux_sym_section_header_token1);
      if (lookahead == 'a') ADVANCE(504);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(aux_sym_section_header_token1);
      if (lookahead == 'e') ADVANCE(601);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(aux_sym_section_header_token1);
      if (lookahead == 'e') ADVANCE(605);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(aux_sym_section_header_token1);
      if (lookahead == 'l') ADVANCE(508);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(aux_sym_section_header_token1);
      if (lookahead == 'l') ADVANCE(609);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(aux_sym_section_header_token1);
      if (lookahead == 'l') ADVANCE(505);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(aux_sym_section_header_token1);
      if (lookahead == 'r') ADVANCE(509);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(aux_sym_section_header_token1);
      if (lookahead == 's') ADVANCE(503);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(aux_sym_section_header_token1);
      if (lookahead == 'u') ADVANCE(502);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(aux_sym_section_header_token1);
      if (lookahead == 'u') ADVANCE(506);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(aux_sym_section_header_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(aux_sym_response_token1);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(anon_sym_HTTP_SLASH1_DOT0);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(anon_sym_HTTP_SLASH1_DOT1);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(anon_sym_HTTP_SLASH2);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(anon_sym_HTTP_SLASH_STAR);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(aux_sym_key_value_token1);
      if (lookahead == ' ') ADVANCE(519);
      if (anon_sym_LF_character_set_1(lookahead)) ADVANCE(520);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == ' ') ADVANCE(519);
      if (lookahead == '#') ADVANCE(522);
      if (anon_sym_LF_character_set_1(lookahead)) ADVANCE(520);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(522);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == '#') ADVANCE(522);
      if (aux_sym_xml_string_token1_character_set_1(lookahead)) ADVANCE(521);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(522);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym_value);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(522);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym__char);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym__char);
      if (lookahead == '\n') ADVANCE(346);
      if (lookahead == '\\') ADVANCE(526);
      if (aux_sym_xml_string_token1_character_set_1(lookahead)) ADVANCE(524);
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(523);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym__char);
      if (lookahead == '"') ADVANCE(578);
      if (lookahead == '<') ADVANCE(418);
      if (lookahead == 'C') ADVANCE(534);
      if (lookahead == 'D') ADVANCE(528);
      if (lookahead == 'G') ADVANCE(529);
      if (lookahead == 'H') ADVANCE(530);
      if (lookahead == 'L') ADVANCE(532);
      if (lookahead == 'O') ADVANCE(535);
      if (lookahead == 'P') ADVANCE(527);
      if (lookahead == 'T') ADVANCE(536);
      if (lookahead == 'U') ADVANCE(533);
      if (lookahead == 'V') ADVANCE(531);
      if (lookahead == '[') ADVANCE(429);
      if (lookahead == '\\') ADVANCE(526);
      if (lookahead == '`') ADVANCE(556);
      if (lookahead == 'f') ADVANCE(537);
      if (lookahead == 'n') ADVANCE(539);
      if (lookahead == 't') ADVANCE(538);
      if (lookahead == '{') ADVANCE(574);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(540);
      if (aux_sym_xml_string_token1_character_set_1(lookahead)) ADVANCE(525);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(540);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(523);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym__char);
      if (lookahead == '#') ADVANCE(523);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym__char);
      if (lookahead == ',') ADVANCE(621);
      if (lookahead == 'A') ADVANCE(80);
      if (lookahead == 'O') ADVANCE(74);
      if (lookahead == 'R') ADVANCE(66);
      if (lookahead == 'U') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym__char);
      if (lookahead == ',') ADVANCE(621);
      if (lookahead == 'E') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym__char);
      if (lookahead == ',') ADVANCE(621);
      if (lookahead == 'E') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym__char);
      if (lookahead == ',') ADVANCE(621);
      if (lookahead == 'E') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym__char);
      if (lookahead == ',') ADVANCE(621);
      if (lookahead == 'I') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym__char);
      if (lookahead == ',') ADVANCE(621);
      if (lookahead == 'I') ADVANCE(58);
      if (lookahead == 'O') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym__char);
      if (lookahead == ',') ADVANCE(621);
      if (lookahead == 'N') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym__char);
      if (lookahead == ',') ADVANCE(621);
      if (lookahead == 'O') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym__char);
      if (lookahead == ',') ADVANCE(621);
      if (lookahead == 'P') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym__char);
      if (lookahead == ',') ADVANCE(621);
      if (lookahead == 'R') ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym__char);
      if (lookahead == ',') ADVANCE(621);
      if (lookahead == 'a') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym__char);
      if (lookahead == ',') ADVANCE(621);
      if (lookahead == 'r') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym__char);
      if (lookahead == ',') ADVANCE(621);
      if (lookahead == 'u') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym__char);
      if (lookahead == ',') ADVANCE(621);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym__char);
      if (lookahead == 'A') ADVANCE(163);
      if (lookahead == 'O') ADVANCE(157);
      if (lookahead == 'R') ADVANCE(148);
      if (lookahead == 'U') ADVANCE(154);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym__char);
      if (lookahead == 'C') ADVANCE(551);
      if (lookahead == 'D') ADVANCE(547);
      if (lookahead == 'G') ADVANCE(544);
      if (lookahead == 'H') ADVANCE(546);
      if (lookahead == 'L') ADVANCE(549);
      if (lookahead == 'O') ADVANCE(552);
      if (lookahead == 'P') ADVANCE(541);
      if (lookahead == 'T') ADVANCE(553);
      if (lookahead == 'U') ADVANCE(550);
      if (lookahead == 'V') ADVANCE(548);
      if (lookahead == '\\') ADVANCE(526);
      if (aux_sym_xml_string_token1_character_set_1(lookahead)) ADVANCE(542);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(523);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym__char);
      if (lookahead == 'C') ADVANCE(551);
      if (lookahead == 'D') ADVANCE(547);
      if (lookahead == 'G') ADVANCE(544);
      if (lookahead == 'H') ADVANCE(545);
      if (lookahead == 'L') ADVANCE(549);
      if (lookahead == 'O') ADVANCE(552);
      if (lookahead == 'P') ADVANCE(541);
      if (lookahead == 'T') ADVANCE(553);
      if (lookahead == 'U') ADVANCE(550);
      if (lookahead == 'V') ADVANCE(548);
      if (lookahead == '\\') ADVANCE(526);
      if (aux_sym_xml_string_token1_character_set_1(lookahead)) ADVANCE(543);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(523);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym__char);
      if (lookahead == 'E') ADVANCE(158);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym__char);
      if (lookahead == 'E') ADVANCE(104);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym__char);
      if (lookahead == 'E') ADVANCE(104);
      if (lookahead == 'T') ADVANCE(161);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym__char);
      if (lookahead == 'E') ADVANCE(139);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym__char);
      if (lookahead == 'I') ADVANCE(117);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym__char);
      if (lookahead == 'I') ADVANCE(142);
      if (lookahead == 'O') ADVANCE(109);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym__char);
      if (lookahead == 'N') ADVANCE(140);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym__char);
      if (lookahead == 'O') ADVANCE(147);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym__char);
      if (lookahead == 'P') ADVANCE(162);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym__char);
      if (lookahead == 'R') ADVANCE(105);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym__char);
      if (lookahead == '\\') ADVANCE(526);
      if (lookahead == '`') ADVANCE(556);
      if (aux_sym_xml_string_token1_character_set_1(lookahead)) ADVANCE(554);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(523);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym__char);
      if (lookahead == '\\') ADVANCE(526);
      if (aux_sym_xml_string_token1_character_set_1(lookahead)) ADVANCE(555);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(523);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym__char);
      if (lookahead == '`') ADVANCE(171);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(anon_sym_LBRACKCaptures_RBRACK);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(anon_sym_LBRACKAsserts_RBRACK);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(anon_sym_LT_QMARK);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(aux_sym_xml_prolog_tag_token1);
      if (lookahead == '\n') ADVANCE(562);
      if (lookahead == '?') ADVANCE(622);
      if (lookahead != 0) ADVANCE(560);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(aux_sym_xml_prolog_tag_token1);
      if (lookahead == '#') ADVANCE(560);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) ADVANCE(561);
      if (lookahead != 0 &&
          lookahead != '?') ADVANCE(562);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(aux_sym_xml_prolog_tag_token1);
      if (lookahead != 0 &&
          lookahead != '?') ADVANCE(562);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(anon_sym_QMARK_GT);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(aux_sym_xml_open_tag_token1);
      if (lookahead == '\n') ADVANCE(566);
      if (lookahead == '>') ADVANCE(622);
      if (lookahead != 0) ADVANCE(564);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(aux_sym_xml_open_tag_token1);
      if (lookahead == '#') ADVANCE(564);
      if (lookahead == '>') ADVANCE(566);
      if (lookahead == '/' ||
          lookahead == '?') ADVANCE(566);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) ADVANCE(565);
      if (lookahead != 0) ADVANCE(566);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(aux_sym_xml_open_tag_token1);
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(566);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(anon_sym_LT_SLASH);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(aux_sym_xml_close_tag_token1);
      if (lookahead == '\n') ADVANCE(570);
      if (lookahead == '/' ||
          lookahead == '>') ADVANCE(622);
      if (lookahead != 0) ADVANCE(568);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(aux_sym_xml_close_tag_token1);
      if (lookahead == '#') ADVANCE(568);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) ADVANCE(569);
      if (lookahead != 0 &&
          lookahead != '/' &&
          lookahead != '>') ADVANCE(570);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(aux_sym_xml_close_tag_token1);
      if (lookahead != 0 &&
          lookahead != '/' &&
          lookahead != '>') ADVANCE(570);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(aux_sym_xml_string_token1);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(aux_sym_xml_string_token1);
      if (lookahead == '#') ADVANCE(573);
      if (lookahead == '<') ADVANCE(417);
      if (aux_sym_xml_string_token1_character_set_1(lookahead)) ADVANCE(572);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(571);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(aux_sym_xml_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(622);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '{') ADVANCE(591);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(aux_sym_json_string_text_token1);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(aux_sym_json_string_text_token1);
      if (lookahead == '#') ADVANCE(582);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) ADVANCE(580);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(579);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(aux_sym_json_string_text_token1);
      if (lookahead == '{') ADVANCE(591);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(aux_sym_json_string_text_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(622);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(anon_sym_b);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(anon_sym_f);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(anon_sym_n);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(anon_sym_r);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(anon_sym_t);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(anon_sym_u);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(anon_sym_u);
      if (lookahead == 'r') ADVANCE(239);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(aux_sym_template_token1);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(aux_sym_template_token1);
      if (lookahead == '#') ADVANCE(596);
      if (lookahead == '}') ADVANCE(594);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) ADVANCE(593);
      if (lookahead != 0) ADVANCE(592);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(aux_sym_template_token1);
      if (lookahead == '}') ADVANCE(326);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(aux_sym_template_token1);
      if (lookahead == '}') ADVANCE(595);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(aux_sym_template_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(622);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == ',') ADVANCE(621);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(511);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == ',') ADVANCE(621);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == ',') ADVANCE(621);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(511);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == ',') ADVANCE(621);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(sym_null);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(sym_null);
      if (lookahead == ',') ADVANCE(621);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(511);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(sym_null);
      if (lookahead == ',') ADVANCE(621);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(sym_null);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(sym_hexdigit);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(anon_sym_e);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(anon_sym_E);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(aux_sym_digit_token1);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(aux_sym_digit_token1);
      if (lookahead == ',') ADVANCE(621);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(sym_multiline_string_type);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(619);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(anon_sym_BQUOTE_BQUOTE_BQUOTE);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(sym_bodyTag);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(622);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 335},
  [2] = {.lex_state = 337},
  [3] = {.lex_state = 337},
  [4] = {.lex_state = 339},
  [5] = {.lex_state = 339},
  [6] = {.lex_state = 341},
  [7] = {.lex_state = 341},
  [8] = {.lex_state = 341},
  [9] = {.lex_state = 341},
  [10] = {.lex_state = 341},
  [11] = {.lex_state = 337},
  [12] = {.lex_state = 343},
  [13] = {.lex_state = 343},
  [14] = {.lex_state = 331},
  [15] = {.lex_state = 331},
  [16] = {.lex_state = 331},
  [17] = {.lex_state = 343},
  [18] = {.lex_state = 341},
  [19] = {.lex_state = 339},
  [20] = {.lex_state = 341},
  [21] = {.lex_state = 341},
  [22] = {.lex_state = 337},
  [23] = {.lex_state = 343},
  [24] = {.lex_state = 331},
  [25] = {.lex_state = 343},
  [26] = {.lex_state = 335},
  [27] = {.lex_state = 335},
  [28] = {.lex_state = 335},
  [29] = {.lex_state = 335},
  [30] = {.lex_state = 330},
  [31] = {.lex_state = 335},
  [32] = {.lex_state = 330},
  [33] = {.lex_state = 335},
  [34] = {.lex_state = 335},
  [35] = {.lex_state = 335},
  [36] = {.lex_state = 335},
  [37] = {.lex_state = 335},
  [38] = {.lex_state = 330},
  [39] = {.lex_state = 335},
  [40] = {.lex_state = 335},
  [41] = {.lex_state = 335},
  [42] = {.lex_state = 335},
  [43] = {.lex_state = 335},
  [44] = {.lex_state = 335},
  [45] = {.lex_state = 335},
  [46] = {.lex_state = 335},
  [47] = {.lex_state = 335},
  [48] = {.lex_state = 335},
  [49] = {.lex_state = 335},
  [50] = {.lex_state = 335},
  [51] = {.lex_state = 335},
  [52] = {.lex_state = 335},
  [53] = {.lex_state = 335},
  [54] = {.lex_state = 333},
  [55] = {.lex_state = 335},
  [56] = {.lex_state = 335},
  [57] = {.lex_state = 335},
  [58] = {.lex_state = 335},
  [59] = {.lex_state = 335},
  [60] = {.lex_state = 335},
  [61] = {.lex_state = 333},
  [62] = {.lex_state = 335},
  [63] = {.lex_state = 335},
  [64] = {.lex_state = 335},
  [65] = {.lex_state = 9},
  [66] = {.lex_state = 335},
  [67] = {.lex_state = 335},
  [68] = {.lex_state = 333},
  [69] = {.lex_state = 335},
  [70] = {.lex_state = 335},
  [71] = {.lex_state = 335},
  [72] = {.lex_state = 335},
  [73] = {.lex_state = 335},
  [74] = {.lex_state = 335},
  [75] = {.lex_state = 335},
  [76] = {.lex_state = 12},
  [77] = {.lex_state = 12},
  [78] = {.lex_state = 1},
  [79] = {.lex_state = 12},
  [80] = {.lex_state = 1},
  [81] = {.lex_state = 12},
  [82] = {.lex_state = 1},
  [83] = {.lex_state = 12},
  [84] = {.lex_state = 1},
  [85] = {.lex_state = 1},
  [86] = {.lex_state = 335},
  [87] = {.lex_state = 335},
  [88] = {.lex_state = 11},
  [89] = {.lex_state = 12},
  [90] = {.lex_state = 335},
  [91] = {.lex_state = 12},
  [92] = {.lex_state = 335},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 335},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 2},
  [97] = {.lex_state = 335},
  [98] = {.lex_state = 2},
  [99] = {.lex_state = 335},
  [100] = {.lex_state = 335},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 12},
  [103] = {.lex_state = 3},
  [104] = {.lex_state = 335},
  [105] = {.lex_state = 12},
  [106] = {.lex_state = 1},
  [107] = {.lex_state = 1},
  [108] = {.lex_state = 335},
  [109] = {.lex_state = 3},
  [110] = {.lex_state = 2},
  [111] = {.lex_state = 2},
  [112] = {.lex_state = 12},
  [113] = {.lex_state = 12},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 1},
  [116] = {.lex_state = 1},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 1},
  [120] = {.lex_state = 1},
  [121] = {.lex_state = 12},
  [122] = {.lex_state = 1},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 4},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 4},
  [127] = {.lex_state = 335},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 4},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 4},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 5},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 4},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 335},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 335},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 335},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 2},
  [159] = {.lex_state = 7},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 7},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 8},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 6},
  [168] = {.lex_state = 15},
  [169] = {.lex_state = 337},
  [170] = {.lex_state = 13},
  [171] = {.lex_state = 6},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 6},
  [174] = {.lex_state = 13},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 17},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 6},
  [182] = {.lex_state = 11},
  [183] = {.lex_state = 18},
  [184] = {.lex_state = 19},
  [185] = {.lex_state = 11},
  [186] = {.lex_state = 6},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 6},
  [189] = {.lex_state = 16},
  [190] = {.lex_state = 20},
  [191] = {.lex_state = 337},
  [192] = {.lex_state = 13},
  [193] = {.lex_state = 17},
  [194] = {.lex_state = 13},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 6},
  [197] = {.lex_state = 6},
  [198] = {.lex_state = 337},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 21},
  [201] = {.lex_state = 19},
  [202] = {.lex_state = 18},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 21},
  [205] = {.lex_state = 6},
  [206] = {.lex_state = 8},
  [207] = {.lex_state = 18},
  [208] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_GET] = ACTIONS(1),
    [anon_sym_HEAD] = ACTIONS(1),
    [anon_sym_POST] = ACTIONS(1),
    [anon_sym_PUT] = ACTIONS(1),
    [anon_sym_OPTIONS] = ACTIONS(1),
    [anon_sym_TRACE] = ACTIONS(1),
    [anon_sym_PATCH] = ACTIONS(1),
    [anon_sym_LINK] = ACTIONS(1),
    [anon_sym_UNLINK] = ACTIONS(1),
    [anon_sym_PURGE] = ACTIONS(1),
    [anon_sym_LOCK] = ACTIONS(1),
    [anon_sym_UNLOCK] = ACTIONS(1),
    [anon_sym_PROPFIND] = ACTIONS(1),
    [anon_sym_VIEW] = ACTIONS(1),
    [anon_sym_urlEncode] = ACTIONS(1),
    [anon_sym_urlDecode] = ACTIONS(1),
    [anon_sym_htmlEscape] = ACTIONS(1),
    [anon_sym_htmlUnescape] = ACTIONS(1),
    [anon_sym_status] = ACTIONS(1),
    [anon_sym_url] = ACTIONS(1),
    [anon_sym_header] = ACTIONS(1),
    [anon_sym_xpath] = ACTIONS(1),
    [anon_sym_jsonpath] = ACTIONS(1),
    [anon_sym_variable] = ACTIONS(1),
    [anon_sym_sha256] = ACTIONS(1),
    [anon_sym_md5] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_greaterThan] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_greaterThanOrEquals] = ACTIONS(1),
    [anon_sym_lessThan] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_lessThanOrEquals] = ACTIONS(1),
    [anon_sym_startsWith] = ACTIONS(1),
    [anon_sym_matches] = ACTIONS(1),
    [anon_sym_includes] = ACTIONS(1),
    [anon_sym_isInteger] = ACTIONS(1),
    [anon_sym_isFloat] = ACTIONS(1),
    [anon_sym_isBoolean] = ACTIONS(1),
    [anon_sym_isString] = ACTIONS(1),
    [anon_sym_isCollection] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_HTTP_SLASH1_DOT0] = ACTIONS(1),
    [anon_sym_HTTP_SLASH1_DOT1] = ACTIONS(1),
    [anon_sym_HTTP_SLASH2] = ACTIONS(1),
    [anon_sym_HTTP_SLASH_STAR] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_LBRACKCaptures_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACKAsserts_RBRACK] = ACTIONS(1),
    [anon_sym_LT_QMARK] = ACTIONS(1),
    [anon_sym_QMARK_GT] = ACTIONS(1),
    [anon_sym_LT_SLASH] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_BSLASH] = ACTIONS(1),
    [anon_sym_b] = ACTIONS(1),
    [anon_sym_f] = ACTIONS(1),
    [anon_sym_n] = ACTIONS(1),
    [anon_sym_r] = ACTIONS(1),
    [anon_sym_t] = ACTIONS(1),
    [anon_sym_u] = ACTIONS(1),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(1),
    [sym_hexdigit] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_e] = ACTIONS(1),
    [anon_sym_E] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [aux_sym_digit_token1] = ACTIONS(1),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_hurl_file] = STATE(203),
    [sym_request] = STATE(44),
    [sym_header] = STATE(3),
    [sym_method] = STATE(193),
    [aux_sym_hurl_file_repeat1] = STATE(44),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_GET] = ACTIONS(7),
    [anon_sym_HEAD] = ACTIONS(7),
    [anon_sym_POST] = ACTIONS(7),
    [anon_sym_PUT] = ACTIONS(7),
    [anon_sym_DELETE] = ACTIONS(7),
    [anon_sym_CONNECT] = ACTIONS(7),
    [anon_sym_OPTIONS] = ACTIONS(7),
    [anon_sym_TRACE] = ACTIONS(7),
    [anon_sym_PATCH] = ACTIONS(7),
    [anon_sym_LINK] = ACTIONS(7),
    [anon_sym_UNLINK] = ACTIONS(7),
    [anon_sym_PURGE] = ACTIONS(7),
    [anon_sym_LOCK] = ACTIONS(7),
    [anon_sym_UNLOCK] = ACTIONS(7),
    [anon_sym_PROPFIND] = ACTIONS(7),
    [anon_sym_VIEW] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      ts_builtin_sym_end,
    ACTIONS(13), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      anon_sym_LT_QMARK,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(29), 1,
      sym_null,
    ACTIONS(31), 1,
      aux_sym_digit_token1,
    ACTIONS(33), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(35), 1,
      sym_bodyTag,
    STATE(10), 1,
      sym_section_header,
    STATE(28), 1,
      sym_integer,
    STATE(36), 1,
      sym_body,
    STATE(57), 1,
      sym_xml_tag,
    STATE(72), 1,
      sym_response,
    STATE(82), 1,
      sym_xml_open_tag,
    STATE(182), 1,
      sym_http_version,
    ACTIONS(27), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(11), 2,
      sym_section,
      aux_sym_request_repeat1,
    STATE(27), 2,
      sym_digit,
      aux_sym_fraction_repeat1,
    STATE(101), 2,
      sym_xml_prolog_tag,
      aux_sym_xml_repeat1,
    STATE(56), 3,
      sym_xml,
      sym_json_value,
      sym_multiline_string,
    ACTIONS(17), 4,
      anon_sym_HTTP_SLASH1_DOT0,
      anon_sym_HTTP_SLASH1_DOT1,
      anon_sym_HTTP_SLASH2,
      anon_sym_HTTP_SLASH_STAR,
    STATE(53), 6,
      sym_json_object,
      sym_json_array,
      sym_json_string,
      sym_json_number,
      sym_template,
      sym_boolean,
    ACTIONS(11), 16,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
  [111] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      anon_sym_LT_QMARK,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(29), 1,
      sym_null,
    ACTIONS(31), 1,
      aux_sym_digit_token1,
    ACTIONS(33), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(35), 1,
      sym_bodyTag,
    ACTIONS(37), 1,
      ts_builtin_sym_end,
    STATE(10), 1,
      sym_section_header,
    STATE(28), 1,
      sym_integer,
    STATE(37), 1,
      sym_body,
    STATE(57), 1,
      sym_xml_tag,
    STATE(73), 1,
      sym_response,
    STATE(82), 1,
      sym_xml_open_tag,
    STATE(182), 1,
      sym_http_version,
    ACTIONS(27), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(2), 2,
      sym_section,
      aux_sym_request_repeat1,
    STATE(27), 2,
      sym_digit,
      aux_sym_fraction_repeat1,
    STATE(101), 2,
      sym_xml_prolog_tag,
      aux_sym_xml_repeat1,
    STATE(56), 3,
      sym_xml,
      sym_json_value,
      sym_multiline_string,
    ACTIONS(17), 4,
      anon_sym_HTTP_SLASH1_DOT0,
      anon_sym_HTTP_SLASH1_DOT1,
      anon_sym_HTTP_SLASH2,
      anon_sym_HTTP_SLASH_STAR,
    STATE(53), 6,
      sym_json_object,
      sym_json_array,
      sym_json_string,
      sym_json_number,
      sym_template,
      sym_boolean,
    ACTIONS(39), 16,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
  [222] = 25,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_LT,
    ACTIONS(19), 1,
      anon_sym_LT_QMARK,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(29), 1,
      sym_null,
    ACTIONS(31), 1,
      aux_sym_digit_token1,
    ACTIONS(33), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(41), 1,
      ts_builtin_sym_end,
    ACTIONS(45), 1,
      anon_sym_LBRACK,
    ACTIONS(47), 1,
      anon_sym_LBRACKCaptures_RBRACK,
    ACTIONS(49), 1,
      anon_sym_LBRACKAsserts_RBRACK,
    ACTIONS(51), 1,
      sym_bodyTag,
    STATE(28), 1,
      sym_integer,
    STATE(57), 1,
      sym_xml_tag,
    STATE(75), 1,
      sym_body,
    STATE(82), 1,
      sym_xml_open_tag,
    ACTIONS(27), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(27), 2,
      sym_digit,
      aux_sym_fraction_repeat1,
    STATE(101), 2,
      sym_xml_prolog_tag,
      aux_sym_xml_repeat1,
    STATE(5), 3,
      sym_capture_section,
      sym_assert_section,
      aux_sym_response_repeat1,
    STATE(56), 3,
      sym_xml,
      sym_json_value,
      sym_multiline_string,
    STATE(53), 6,
      sym_json_object,
      sym_json_array,
      sym_json_string,
      sym_json_number,
      sym_template,
      sym_boolean,
    ACTIONS(43), 16,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
  [325] = 25,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_LT,
    ACTIONS(19), 1,
      anon_sym_LT_QMARK,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(29), 1,
      sym_null,
    ACTIONS(31), 1,
      aux_sym_digit_token1,
    ACTIONS(33), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(45), 1,
      anon_sym_LBRACK,
    ACTIONS(47), 1,
      anon_sym_LBRACKCaptures_RBRACK,
    ACTIONS(49), 1,
      anon_sym_LBRACKAsserts_RBRACK,
    ACTIONS(51), 1,
      sym_bodyTag,
    ACTIONS(53), 1,
      ts_builtin_sym_end,
    STATE(28), 1,
      sym_integer,
    STATE(57), 1,
      sym_xml_tag,
    STATE(74), 1,
      sym_body,
    STATE(82), 1,
      sym_xml_open_tag,
    ACTIONS(27), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(27), 2,
      sym_digit,
      aux_sym_fraction_repeat1,
    STATE(101), 2,
      sym_xml_prolog_tag,
      aux_sym_xml_repeat1,
    STATE(19), 3,
      sym_capture_section,
      sym_assert_section,
      aux_sym_response_repeat1,
    STATE(56), 3,
      sym_xml,
      sym_json_value,
      sym_multiline_string,
    STATE(53), 6,
      sym_json_object,
      sym_json_array,
      sym_json_string,
      sym_json_number,
      sym_template,
      sym_boolean,
    ACTIONS(55), 16,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
  [428] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      aux_sym_section_header_token1,
    STATE(22), 1,
      sym_headers,
    STATE(165), 1,
      sym_key,
    STATE(7), 2,
      sym_key_value,
      aux_sym_headers_repeat1,
    ACTIONS(57), 11,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_HTTP_SLASH1_DOT0,
      anon_sym_HTTP_SLASH1_DOT1,
      anon_sym_HTTP_SLASH2,
      anon_sym_HTTP_SLASH_STAR,
      anon_sym_LT_QMARK,
      anon_sym_DQUOTE,
      anon_sym_LBRACE_LBRACE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_bodyTag,
    ACTIONS(59), 22,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_true,
      anon_sym_false,
      sym_null,
      aux_sym_digit_token1,
  [482] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      aux_sym_section_header_token1,
    STATE(165), 1,
      sym_key,
    STATE(8), 2,
      sym_key_value,
      aux_sym_headers_repeat1,
    ACTIONS(63), 11,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_HTTP_SLASH1_DOT0,
      anon_sym_HTTP_SLASH1_DOT1,
      anon_sym_HTTP_SLASH2,
      anon_sym_HTTP_SLASH_STAR,
      anon_sym_LT_QMARK,
      anon_sym_DQUOTE,
      anon_sym_LBRACE_LBRACE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_bodyTag,
    ACTIONS(65), 22,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_true,
      anon_sym_false,
      sym_null,
      aux_sym_digit_token1,
  [533] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      aux_sym_section_header_token1,
    STATE(165), 1,
      sym_key,
    STATE(8), 2,
      sym_key_value,
      aux_sym_headers_repeat1,
    ACTIONS(67), 11,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_HTTP_SLASH1_DOT0,
      anon_sym_HTTP_SLASH1_DOT1,
      anon_sym_HTTP_SLASH2,
      anon_sym_HTTP_SLASH_STAR,
      anon_sym_LT_QMARK,
      anon_sym_DQUOTE,
      anon_sym_LBRACE_LBRACE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_bodyTag,
    ACTIONS(69), 22,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_true,
      anon_sym_false,
      sym_null,
      aux_sym_digit_token1,
  [584] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      aux_sym_section_header_token1,
    STATE(165), 1,
      sym_key,
    STATE(8), 2,
      sym_key_value,
      aux_sym_headers_repeat1,
    ACTIONS(74), 11,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_HTTP_SLASH1_DOT0,
      anon_sym_HTTP_SLASH1_DOT1,
      anon_sym_HTTP_SLASH2,
      anon_sym_HTTP_SLASH_STAR,
      anon_sym_LT_QMARK,
      anon_sym_DQUOTE,
      anon_sym_LBRACE_LBRACE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_bodyTag,
    ACTIONS(76), 22,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_true,
      anon_sym_false,
      sym_null,
      aux_sym_digit_token1,
  [635] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      aux_sym_section_header_token1,
    STATE(165), 1,
      sym_key,
    STATE(9), 2,
      sym_key_value,
      aux_sym_headers_repeat1,
    ACTIONS(78), 11,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_HTTP_SLASH1_DOT0,
      anon_sym_HTTP_SLASH1_DOT1,
      anon_sym_HTTP_SLASH2,
      anon_sym_HTTP_SLASH_STAR,
      anon_sym_LT_QMARK,
      anon_sym_DQUOTE,
      anon_sym_LBRACE_LBRACE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_bodyTag,
    ACTIONS(80), 22,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_true,
      anon_sym_false,
      sym_null,
      aux_sym_digit_token1,
  [686] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(86), 1,
      anon_sym_LBRACK,
    STATE(10), 1,
      sym_section_header,
    STATE(11), 2,
      sym_section,
      aux_sym_request_repeat1,
    ACTIONS(82), 10,
      ts_builtin_sym_end,
      anon_sym_HTTP_SLASH1_DOT0,
      anon_sym_HTTP_SLASH1_DOT1,
      anon_sym_HTTP_SLASH2,
      anon_sym_HTTP_SLASH_STAR,
      anon_sym_LT_QMARK,
      anon_sym_DQUOTE,
      anon_sym_LBRACE_LBRACE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_bodyTag,
    ACTIONS(84), 22,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_true,
      anon_sym_false,
      sym_null,
      aux_sym_digit_token1,
  [736] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      aux_sym_section_header_token1,
    STATE(208), 1,
      sym_key,
    STATE(13), 2,
      sym_key_value,
      aux_sym_headers_repeat1,
    ACTIONS(89), 8,
      ts_builtin_sym_end,
      anon_sym_LBRACKCaptures_RBRACK,
      anon_sym_LBRACKAsserts_RBRACK,
      anon_sym_LT_QMARK,
      anon_sym_DQUOTE,
      anon_sym_LBRACE_LBRACE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_bodyTag,
    ACTIONS(91), 23,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_true,
      anon_sym_false,
      sym_null,
      aux_sym_digit_token1,
  [785] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      aux_sym_section_header_token1,
    STATE(208), 1,
      sym_key,
    STATE(13), 2,
      sym_key_value,
      aux_sym_headers_repeat1,
    ACTIONS(67), 8,
      ts_builtin_sym_end,
      anon_sym_LBRACKCaptures_RBRACK,
      anon_sym_LBRACKAsserts_RBRACK,
      anon_sym_LT_QMARK,
      anon_sym_DQUOTE,
      anon_sym_LBRACE_LBRACE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_bodyTag,
    ACTIONS(69), 23,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_true,
      anon_sym_false,
      sym_null,
      aux_sym_digit_token1,
  [834] = 6,
    ACTIONS(97), 1,
      sym__char,
    ACTIONS(100), 1,
      sym_comment,
    STATE(129), 1,
      aux_sym__line_repeat1,
    ACTIONS(93), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACE_LBRACE,
    STATE(14), 2,
      sym__line,
      aux_sym_assert_section_repeat1,
    ACTIONS(95), 29,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_LBRACKCaptures_RBRACK,
      anon_sym_LBRACKAsserts_RBRACK,
      anon_sym_LT_QMARK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_true,
      anon_sym_false,
      sym_null,
      aux_sym_digit_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_bodyTag,
  [883] = 6,
    ACTIONS(100), 1,
      sym_comment,
    ACTIONS(106), 1,
      sym__char,
    STATE(129), 1,
      aux_sym__line_repeat1,
    ACTIONS(102), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACE_LBRACE,
    STATE(16), 2,
      sym__line,
      aux_sym_assert_section_repeat1,
    ACTIONS(104), 29,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_LBRACKCaptures_RBRACK,
      anon_sym_LBRACKAsserts_RBRACK,
      anon_sym_LT_QMARK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_true,
      anon_sym_false,
      sym_null,
      aux_sym_digit_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_bodyTag,
  [932] = 6,
    ACTIONS(100), 1,
      sym_comment,
    ACTIONS(106), 1,
      sym__char,
    STATE(129), 1,
      aux_sym__line_repeat1,
    ACTIONS(108), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACE_LBRACE,
    STATE(14), 2,
      sym__line,
      aux_sym_assert_section_repeat1,
    ACTIONS(110), 29,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_LBRACKCaptures_RBRACK,
      anon_sym_LBRACKAsserts_RBRACK,
      anon_sym_LT_QMARK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_true,
      anon_sym_false,
      sym_null,
      aux_sym_digit_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_bodyTag,
  [981] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      aux_sym_section_header_token1,
    STATE(208), 1,
      sym_key,
    STATE(12), 2,
      sym_key_value,
      aux_sym_headers_repeat1,
    ACTIONS(112), 8,
      ts_builtin_sym_end,
      anon_sym_LBRACKCaptures_RBRACK,
      anon_sym_LBRACKAsserts_RBRACK,
      anon_sym_LT_QMARK,
      anon_sym_DQUOTE,
      anon_sym_LBRACE_LBRACE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_bodyTag,
    ACTIONS(114), 23,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_true,
      anon_sym_false,
      sym_null,
      aux_sym_digit_token1,
  [1030] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 11,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_HTTP_SLASH1_DOT0,
      anon_sym_HTTP_SLASH1_DOT1,
      anon_sym_HTTP_SLASH2,
      anon_sym_HTTP_SLASH_STAR,
      anon_sym_LT_QMARK,
      anon_sym_DQUOTE,
      anon_sym_LBRACE_LBRACE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_bodyTag,
    ACTIONS(118), 23,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
      anon_sym_LT,
      aux_sym_section_header_token1,
      anon_sym_LBRACE,
      anon_sym_true,
      anon_sym_false,
      sym_null,
      aux_sym_digit_token1,
  [1072] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(124), 1,
      anon_sym_LBRACKCaptures_RBRACK,
    ACTIONS(127), 1,
      anon_sym_LBRACKAsserts_RBRACK,
    STATE(19), 3,
      sym_capture_section,
      sym_assert_section,
      aux_sym_response_repeat1,
    ACTIONS(120), 6,
      ts_builtin_sym_end,
      anon_sym_LT_QMARK,
      anon_sym_DQUOTE,
      anon_sym_LBRACE_LBRACE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_bodyTag,
    ACTIONS(122), 23,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_true,
      anon_sym_false,
      sym_null,
      aux_sym_digit_token1,
  [1120] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(130), 11,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_HTTP_SLASH1_DOT0,
      anon_sym_HTTP_SLASH1_DOT1,
      anon_sym_HTTP_SLASH2,
      anon_sym_HTTP_SLASH_STAR,
      anon_sym_LT_QMARK,
      anon_sym_DQUOTE,
      anon_sym_LBRACE_LBRACE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_bodyTag,
    ACTIONS(132), 23,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
      anon_sym_LT,
      aux_sym_section_header_token1,
      anon_sym_LBRACE,
      anon_sym_true,
      anon_sym_false,
      sym_null,
      aux_sym_digit_token1,
  [1162] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(134), 11,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_HTTP_SLASH1_DOT0,
      anon_sym_HTTP_SLASH1_DOT1,
      anon_sym_HTTP_SLASH2,
      anon_sym_HTTP_SLASH_STAR,
      anon_sym_LT_QMARK,
      anon_sym_DQUOTE,
      anon_sym_LBRACE_LBRACE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_bodyTag,
    ACTIONS(136), 23,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
      anon_sym_LT,
      aux_sym_section_header_token1,
      anon_sym_LBRACE,
      anon_sym_true,
      anon_sym_false,
      sym_null,
      aux_sym_digit_token1,
  [1204] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(138), 11,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_HTTP_SLASH1_DOT0,
      anon_sym_HTTP_SLASH1_DOT1,
      anon_sym_HTTP_SLASH2,
      anon_sym_HTTP_SLASH_STAR,
      anon_sym_LT_QMARK,
      anon_sym_DQUOTE,
      anon_sym_LBRACE_LBRACE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_bodyTag,
    ACTIONS(140), 22,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_true,
      anon_sym_false,
      sym_null,
      aux_sym_digit_token1,
  [1245] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(134), 8,
      ts_builtin_sym_end,
      anon_sym_LBRACKCaptures_RBRACK,
      anon_sym_LBRACKAsserts_RBRACK,
      anon_sym_LT_QMARK,
      anon_sym_DQUOTE,
      anon_sym_LBRACE_LBRACE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_bodyTag,
    ACTIONS(136), 24,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
      anon_sym_LT,
      anon_sym_LBRACK,
      aux_sym_section_header_token1,
      anon_sym_LBRACE,
      anon_sym_true,
      anon_sym_false,
      sym_null,
      aux_sym_digit_token1,
  [1285] = 3,
    ACTIONS(100), 1,
      sym_comment,
    ACTIONS(142), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(144), 30,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
      anon_sym_LT,
      anon_sym_LBRACK,
      sym__char,
      anon_sym_LBRACKCaptures_RBRACK,
      anon_sym_LBRACKAsserts_RBRACK,
      anon_sym_LT_QMARK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_true,
      anon_sym_false,
      sym_null,
      aux_sym_digit_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_bodyTag,
  [1325] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(130), 8,
      ts_builtin_sym_end,
      anon_sym_LBRACKCaptures_RBRACK,
      anon_sym_LBRACKAsserts_RBRACK,
      anon_sym_LT_QMARK,
      anon_sym_DQUOTE,
      anon_sym_LBRACE_LBRACE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_bodyTag,
    ACTIONS(132), 24,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
      anon_sym_LT,
      anon_sym_LBRACK,
      aux_sym_section_header_token1,
      anon_sym_LBRACE,
      anon_sym_true,
      anon_sym_false,
      sym_null,
      aux_sym_digit_token1,
  [1365] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(148), 1,
      aux_sym_digit_token1,
    STATE(26), 2,
      sym_digit,
      aux_sym_fraction_repeat1,
    ACTIONS(146), 24,
      ts_builtin_sym_end,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
      anon_sym_HTTP_SLASH1_DOT0,
      anon_sym_HTTP_SLASH1_DOT1,
      anon_sym_HTTP_SLASH2,
      anon_sym_HTTP_SLASH_STAR,
      anon_sym_DOT,
      anon_sym_e,
      anon_sym_E,
  [1402] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 1,
      aux_sym_digit_token1,
    STATE(26), 2,
      sym_digit,
      aux_sym_fraction_repeat1,
    ACTIONS(151), 24,
      ts_builtin_sym_end,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
      anon_sym_HTTP_SLASH1_DOT0,
      anon_sym_HTTP_SLASH1_DOT1,
      anon_sym_HTTP_SLASH2,
      anon_sym_HTTP_SLASH_STAR,
      anon_sym_DOT,
      anon_sym_e,
      anon_sym_E,
  [1439] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 1,
      anon_sym_DOT,
    STATE(35), 1,
      sym_fraction,
    STATE(52), 1,
      sym_exponent,
    ACTIONS(159), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(155), 21,
      ts_builtin_sym_end,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
      anon_sym_HTTP_SLASH1_DOT0,
      anon_sym_HTTP_SLASH1_DOT1,
      anon_sym_HTTP_SLASH2,
      anon_sym_HTTP_SLASH_STAR,
  [1479] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 1,
      aux_sym_digit_token1,
    STATE(26), 2,
      sym_digit,
      aux_sym_fraction_repeat1,
    ACTIONS(161), 23,
      ts_builtin_sym_end,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
      anon_sym_HTTP_SLASH1_DOT0,
      anon_sym_HTTP_SLASH1_DOT1,
      anon_sym_HTTP_SLASH2,
      anon_sym_HTTP_SLASH_STAR,
      anon_sym_e,
      anon_sym_E,
  [1515] = 6,
    ACTIONS(93), 1,
      ts_builtin_sym_end,
    ACTIONS(100), 1,
      sym_comment,
    ACTIONS(163), 1,
      sym__char,
    STATE(124), 1,
      aux_sym__line_repeat1,
    STATE(30), 2,
      sym__line,
      aux_sym_assert_section_repeat1,
    ACTIONS(95), 20,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
      anon_sym_HTTP_SLASH1_DOT0,
      anon_sym_HTTP_SLASH1_DOT1,
      anon_sym_HTTP_SLASH2,
      anon_sym_HTTP_SLASH_STAR,
  [1554] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(166), 25,
      ts_builtin_sym_end,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
      anon_sym_HTTP_SLASH1_DOT0,
      anon_sym_HTTP_SLASH1_DOT1,
      anon_sym_HTTP_SLASH2,
      anon_sym_HTTP_SLASH_STAR,
      anon_sym_DOT,
      anon_sym_e,
      anon_sym_E,
      aux_sym_digit_token1,
  [1585] = 6,
    ACTIONS(100), 1,
      sym_comment,
    ACTIONS(168), 1,
      ts_builtin_sym_end,
    ACTIONS(172), 1,
      sym__char,
    STATE(124), 1,
      aux_sym__line_repeat1,
    STATE(30), 2,
      sym__line,
      aux_sym_assert_section_repeat1,
    ACTIONS(170), 20,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
      anon_sym_HTTP_SLASH1_DOT0,
      anon_sym_HTTP_SLASH1_DOT1,
      anon_sym_HTTP_SLASH2,
      anon_sym_HTTP_SLASH_STAR,
  [1624] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 1,
      aux_sym_digit_token1,
    STATE(26), 2,
      sym_digit,
      aux_sym_fraction_repeat1,
    ACTIONS(174), 21,
      ts_builtin_sym_end,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
      anon_sym_HTTP_SLASH1_DOT0,
      anon_sym_HTTP_SLASH1_DOT1,
      anon_sym_HTTP_SLASH2,
      anon_sym_HTTP_SLASH_STAR,
  [1658] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 1,
      aux_sym_digit_token1,
    STATE(26), 2,
      sym_digit,
      aux_sym_fraction_repeat1,
    ACTIONS(176), 21,
      ts_builtin_sym_end,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
      anon_sym_HTTP_SLASH1_DOT0,
      anon_sym_HTTP_SLASH1_DOT1,
      anon_sym_HTTP_SLASH2,
      anon_sym_HTTP_SLASH_STAR,
  [1692] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(50), 1,
      sym_exponent,
    ACTIONS(159), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(178), 21,
      ts_builtin_sym_end,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
      anon_sym_HTTP_SLASH1_DOT0,
      anon_sym_HTTP_SLASH1_DOT1,
      anon_sym_HTTP_SLASH2,
      anon_sym_HTTP_SLASH_STAR,
  [1726] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(71), 1,
      sym_response,
    STATE(182), 1,
      sym_http_version,
    ACTIONS(17), 4,
      anon_sym_HTTP_SLASH1_DOT0,
      anon_sym_HTTP_SLASH1_DOT1,
      anon_sym_HTTP_SLASH2,
      anon_sym_HTTP_SLASH_STAR,
    ACTIONS(180), 17,
      ts_builtin_sym_end,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
  [1761] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(72), 1,
      sym_response,
    STATE(182), 1,
      sym_http_version,
    ACTIONS(17), 4,
      anon_sym_HTTP_SLASH1_DOT0,
      anon_sym_HTTP_SLASH1_DOT1,
      anon_sym_HTTP_SLASH2,
      anon_sym_HTTP_SLASH_STAR,
    ACTIONS(9), 17,
      ts_builtin_sym_end,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
  [1796] = 3,
    ACTIONS(100), 1,
      sym_comment,
    ACTIONS(142), 1,
      ts_builtin_sym_end,
    ACTIONS(144), 21,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
      anon_sym_HTTP_SLASH1_DOT0,
      anon_sym_HTTP_SLASH1_DOT1,
      anon_sym_HTTP_SLASH2,
      anon_sym_HTTP_SLASH_STAR,
      sym__char,
  [1826] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 21,
      ts_builtin_sym_end,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
      anon_sym_HTTP_SLASH1_DOT0,
      anon_sym_HTTP_SLASH1_DOT1,
      anon_sym_HTTP_SLASH2,
      anon_sym_HTTP_SLASH_STAR,
  [1853] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(184), 21,
      ts_builtin_sym_end,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
      anon_sym_HTTP_SLASH1_DOT0,
      anon_sym_HTTP_SLASH1_DOT1,
      anon_sym_HTTP_SLASH2,
      anon_sym_HTTP_SLASH_STAR,
  [1880] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(186), 21,
      ts_builtin_sym_end,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
      anon_sym_HTTP_SLASH1_DOT0,
      anon_sym_HTTP_SLASH1_DOT1,
      anon_sym_HTTP_SLASH2,
      anon_sym_HTTP_SLASH_STAR,
  [1907] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(188), 21,
      ts_builtin_sym_end,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
      anon_sym_HTTP_SLASH1_DOT0,
      anon_sym_HTTP_SLASH1_DOT1,
      anon_sym_HTTP_SLASH2,
      anon_sym_HTTP_SLASH_STAR,
  [1934] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(190), 21,
      ts_builtin_sym_end,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
      anon_sym_HTTP_SLASH1_DOT0,
      anon_sym_HTTP_SLASH1_DOT1,
      anon_sym_HTTP_SLASH2,
      anon_sym_HTTP_SLASH_STAR,
  [1961] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(192), 1,
      ts_builtin_sym_end,
    STATE(3), 1,
      sym_header,
    STATE(193), 1,
      sym_method,
    STATE(63), 2,
      sym_request,
      aux_sym_hurl_file_repeat1,
    ACTIONS(7), 16,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
  [1996] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(194), 21,
      ts_builtin_sym_end,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
      anon_sym_HTTP_SLASH1_DOT0,
      anon_sym_HTTP_SLASH1_DOT1,
      anon_sym_HTTP_SLASH2,
      anon_sym_HTTP_SLASH_STAR,
  [2023] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(196), 21,
      ts_builtin_sym_end,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
      anon_sym_HTTP_SLASH1_DOT0,
      anon_sym_HTTP_SLASH1_DOT1,
      anon_sym_HTTP_SLASH2,
      anon_sym_HTTP_SLASH_STAR,
  [2050] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(198), 21,
      ts_builtin_sym_end,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
      anon_sym_HTTP_SLASH1_DOT0,
      anon_sym_HTTP_SLASH1_DOT1,
      anon_sym_HTTP_SLASH2,
      anon_sym_HTTP_SLASH_STAR,
  [2077] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(200), 21,
      ts_builtin_sym_end,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
      anon_sym_HTTP_SLASH1_DOT0,
      anon_sym_HTTP_SLASH1_DOT1,
      anon_sym_HTTP_SLASH2,
      anon_sym_HTTP_SLASH_STAR,
  [2104] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(202), 21,
      ts_builtin_sym_end,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
      anon_sym_HTTP_SLASH1_DOT0,
      anon_sym_HTTP_SLASH1_DOT1,
      anon_sym_HTTP_SLASH2,
      anon_sym_HTTP_SLASH_STAR,
  [2131] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(204), 21,
      ts_builtin_sym_end,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
      anon_sym_HTTP_SLASH1_DOT0,
      anon_sym_HTTP_SLASH1_DOT1,
      anon_sym_HTTP_SLASH2,
      anon_sym_HTTP_SLASH_STAR,
  [2158] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 21,
      ts_builtin_sym_end,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
      anon_sym_HTTP_SLASH1_DOT0,
      anon_sym_HTTP_SLASH1_DOT1,
      anon_sym_HTTP_SLASH2,
      anon_sym_HTTP_SLASH_STAR,
  [2185] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(178), 21,
      ts_builtin_sym_end,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
      anon_sym_HTTP_SLASH1_DOT0,
      anon_sym_HTTP_SLASH1_DOT1,
      anon_sym_HTTP_SLASH2,
      anon_sym_HTTP_SLASH_STAR,
  [2212] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 21,
      ts_builtin_sym_end,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
      anon_sym_HTTP_SLASH1_DOT0,
      anon_sym_HTTP_SLASH1_DOT1,
      anon_sym_HTTP_SLASH2,
      anon_sym_HTTP_SLASH_STAR,
  [2239] = 6,
    ACTIONS(93), 1,
      ts_builtin_sym_end,
    ACTIONS(100), 1,
      sym_comment,
    ACTIONS(210), 1,
      sym__char,
    STATE(126), 1,
      aux_sym__line_repeat1,
    STATE(54), 2,
      sym__line,
      aux_sym_assert_section_repeat1,
    ACTIONS(95), 16,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
  [2274] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 21,
      ts_builtin_sym_end,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
      anon_sym_HTTP_SLASH1_DOT0,
      anon_sym_HTTP_SLASH1_DOT1,
      anon_sym_HTTP_SLASH2,
      anon_sym_HTTP_SLASH_STAR,
  [2301] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 21,
      ts_builtin_sym_end,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
      anon_sym_HTTP_SLASH1_DOT0,
      anon_sym_HTTP_SLASH1_DOT1,
      anon_sym_HTTP_SLASH2,
      anon_sym_HTTP_SLASH_STAR,
  [2328] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(217), 21,
      ts_builtin_sym_end,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
      anon_sym_HTTP_SLASH1_DOT0,
      anon_sym_HTTP_SLASH1_DOT1,
      anon_sym_HTTP_SLASH2,
      anon_sym_HTTP_SLASH_STAR,
  [2355] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(219), 21,
      ts_builtin_sym_end,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
      anon_sym_HTTP_SLASH1_DOT0,
      anon_sym_HTTP_SLASH1_DOT1,
      anon_sym_HTTP_SLASH2,
      anon_sym_HTTP_SLASH_STAR,
  [2382] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 21,
      ts_builtin_sym_end,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
      anon_sym_HTTP_SLASH1_DOT0,
      anon_sym_HTTP_SLASH1_DOT1,
      anon_sym_HTTP_SLASH2,
      anon_sym_HTTP_SLASH_STAR,
  [2409] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 21,
      ts_builtin_sym_end,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
      anon_sym_HTTP_SLASH1_DOT0,
      anon_sym_HTTP_SLASH1_DOT1,
      anon_sym_HTTP_SLASH2,
      anon_sym_HTTP_SLASH_STAR,
  [2436] = 6,
    ACTIONS(100), 1,
      sym_comment,
    ACTIONS(168), 1,
      ts_builtin_sym_end,
    ACTIONS(225), 1,
      sym__char,
    STATE(126), 1,
      aux_sym__line_repeat1,
    STATE(54), 2,
      sym__line,
      aux_sym_assert_section_repeat1,
    ACTIONS(170), 16,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
  [2471] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(227), 21,
      ts_builtin_sym_end,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
      anon_sym_HTTP_SLASH1_DOT0,
      anon_sym_HTTP_SLASH1_DOT1,
      anon_sym_HTTP_SLASH2,
      anon_sym_HTTP_SLASH_STAR,
  [2498] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(229), 1,
      ts_builtin_sym_end,
    STATE(3), 1,
      sym_header,
    STATE(193), 1,
      sym_method,
    STATE(63), 2,
      sym_request,
      aux_sym_hurl_file_repeat1,
    ACTIONS(231), 16,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
  [2533] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(234), 21,
      ts_builtin_sym_end,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
      anon_sym_HTTP_SLASH1_DOT0,
      anon_sym_HTTP_SLASH1_DOT1,
      anon_sym_HTTP_SLASH2,
      anon_sym_HTTP_SLASH_STAR,
  [2560] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(236), 1,
      anon_sym_LBRACK,
    ACTIONS(238), 1,
      aux_sym_section_header_token1,
    ACTIONS(240), 1,
      anon_sym_LBRACE,
    ACTIONS(242), 1,
      anon_sym_DQUOTE,
    ACTIONS(244), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(248), 1,
      sym_null,
    ACTIONS(250), 1,
      aux_sym_digit_token1,
    STATE(90), 1,
      sym_integer,
    STATE(137), 1,
      sym_json_value,
    ACTIONS(246), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(86), 2,
      sym_digit,
      aux_sym_fraction_repeat1,
    STATE(144), 6,
      sym_json_object,
      sym_json_array,
      sym_json_string,
      sym_json_number,
      sym_template,
      sym_boolean,
  [2607] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(236), 1,
      anon_sym_LBRACK,
    ACTIONS(240), 1,
      anon_sym_LBRACE,
    ACTIONS(242), 1,
      anon_sym_DQUOTE,
    ACTIONS(244), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(254), 1,
      sym_null,
    ACTIONS(256), 1,
      aux_sym_digit_token1,
    STATE(90), 1,
      sym_integer,
    STATE(160), 1,
      sym_json_value,
    ACTIONS(252), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(86), 2,
      sym_digit,
      aux_sym_fraction_repeat1,
    STATE(144), 6,
      sym_json_object,
      sym_json_array,
      sym_json_string,
      sym_json_number,
      sym_template,
      sym_boolean,
  [2651] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(236), 1,
      anon_sym_LBRACK,
    ACTIONS(240), 1,
      anon_sym_LBRACE,
    ACTIONS(242), 1,
      anon_sym_DQUOTE,
    ACTIONS(244), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(254), 1,
      sym_null,
    ACTIONS(256), 1,
      aux_sym_digit_token1,
    STATE(90), 1,
      sym_integer,
    STATE(162), 1,
      sym_json_value,
    ACTIONS(252), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(86), 2,
      sym_digit,
      aux_sym_fraction_repeat1,
    STATE(144), 6,
      sym_json_object,
      sym_json_array,
      sym_json_string,
      sym_json_number,
      sym_template,
      sym_boolean,
  [2695] = 3,
    ACTIONS(100), 1,
      sym_comment,
    ACTIONS(142), 1,
      ts_builtin_sym_end,
    ACTIONS(144), 17,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
      sym__char,
  [2721] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(236), 1,
      anon_sym_LBRACK,
    ACTIONS(240), 1,
      anon_sym_LBRACE,
    ACTIONS(242), 1,
      anon_sym_DQUOTE,
    ACTIONS(244), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(254), 1,
      sym_null,
    ACTIONS(256), 1,
      aux_sym_digit_token1,
    STATE(90), 1,
      sym_integer,
    STATE(135), 1,
      sym_json_value,
    ACTIONS(252), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(86), 2,
      sym_digit,
      aux_sym_fraction_repeat1,
    STATE(144), 6,
      sym_json_object,
      sym_json_array,
      sym_json_string,
      sym_json_number,
      sym_template,
      sym_boolean,
  [2765] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(236), 1,
      anon_sym_LBRACK,
    ACTIONS(240), 1,
      anon_sym_LBRACE,
    ACTIONS(242), 1,
      anon_sym_DQUOTE,
    ACTIONS(244), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(254), 1,
      sym_null,
    ACTIONS(256), 1,
      aux_sym_digit_token1,
    STATE(90), 1,
      sym_integer,
    STATE(137), 1,
      sym_json_value,
    ACTIONS(252), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(86), 2,
      sym_digit,
      aux_sym_fraction_repeat1,
    STATE(144), 6,
      sym_json_object,
      sym_json_array,
      sym_json_string,
      sym_json_number,
      sym_template,
      sym_boolean,
  [2809] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(258), 17,
      ts_builtin_sym_end,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
  [2832] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(180), 17,
      ts_builtin_sym_end,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
  [2855] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 17,
      ts_builtin_sym_end,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
  [2878] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(260), 17,
      ts_builtin_sym_end,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
  [2901] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 17,
      ts_builtin_sym_end,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
  [2924] = 8,
    ACTIONS(100), 1,
      sym_comment,
    ACTIONS(262), 1,
      anon_sym_DQUOTE,
    ACTIONS(264), 1,
      aux_sym_json_string_text_token1,
    ACTIONS(266), 1,
      anon_sym_BSLASH,
    ACTIONS(268), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(102), 1,
      aux_sym_json_string_text_repeat1,
    STATE(77), 3,
      sym_json_string_content,
      sym_template,
      aux_sym_json_string_repeat1,
    STATE(89), 3,
      sym_json_string_text,
      sym_json_string_escaped_char,
      aux_sym_json_string_content_repeat1,
  [2953] = 8,
    ACTIONS(100), 1,
      sym_comment,
    ACTIONS(264), 1,
      aux_sym_json_string_text_token1,
    ACTIONS(266), 1,
      anon_sym_BSLASH,
    ACTIONS(268), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(270), 1,
      anon_sym_DQUOTE,
    STATE(102), 1,
      aux_sym_json_string_text_repeat1,
    STATE(83), 3,
      sym_json_string_content,
      sym_template,
      aux_sym_json_string_repeat1,
    STATE(89), 3,
      sym_json_string_text,
      sym_json_string_escaped_char,
      aux_sym_json_string_content_repeat1,
  [2982] = 9,
    ACTIONS(13), 1,
      anon_sym_LT,
    ACTIONS(100), 1,
      sym_comment,
    ACTIONS(272), 1,
      anon_sym_LT_QMARK,
    ACTIONS(274), 1,
      anon_sym_LT_SLASH,
    ACTIONS(276), 1,
      aux_sym_xml_string_token1,
    STATE(84), 1,
      sym_xml_open_tag,
    STATE(107), 1,
      aux_sym_xml_string_repeat1,
    STATE(119), 1,
      sym_xml_close_tag,
    STATE(85), 4,
      sym_xml_prolog_tag,
      sym_xml_tag,
      sym_xml_string,
      aux_sym_xml_tag_repeat1,
  [3013] = 8,
    ACTIONS(100), 1,
      sym_comment,
    ACTIONS(264), 1,
      aux_sym_json_string_text_token1,
    ACTIONS(266), 1,
      anon_sym_BSLASH,
    ACTIONS(268), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(278), 1,
      anon_sym_DQUOTE,
    STATE(102), 1,
      aux_sym_json_string_text_repeat1,
    STATE(81), 3,
      sym_json_string_content,
      sym_template,
      aux_sym_json_string_repeat1,
    STATE(89), 3,
      sym_json_string_text,
      sym_json_string_escaped_char,
      aux_sym_json_string_content_repeat1,
  [3042] = 9,
    ACTIONS(13), 1,
      anon_sym_LT,
    ACTIONS(100), 1,
      sym_comment,
    ACTIONS(272), 1,
      anon_sym_LT_QMARK,
    ACTIONS(276), 1,
      aux_sym_xml_string_token1,
    ACTIONS(280), 1,
      anon_sym_LT_SLASH,
    STATE(51), 1,
      sym_xml_close_tag,
    STATE(84), 1,
      sym_xml_open_tag,
    STATE(107), 1,
      aux_sym_xml_string_repeat1,
    STATE(85), 4,
      sym_xml_prolog_tag,
      sym_xml_tag,
      sym_xml_string,
      aux_sym_xml_tag_repeat1,
  [3073] = 8,
    ACTIONS(100), 1,
      sym_comment,
    ACTIONS(264), 1,
      aux_sym_json_string_text_token1,
    ACTIONS(266), 1,
      anon_sym_BSLASH,
    ACTIONS(268), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(282), 1,
      anon_sym_DQUOTE,
    STATE(102), 1,
      aux_sym_json_string_text_repeat1,
    STATE(83), 3,
      sym_json_string_content,
      sym_template,
      aux_sym_json_string_repeat1,
    STATE(89), 3,
      sym_json_string_text,
      sym_json_string_escaped_char,
      aux_sym_json_string_content_repeat1,
  [3102] = 9,
    ACTIONS(13), 1,
      anon_sym_LT,
    ACTIONS(100), 1,
      sym_comment,
    ACTIONS(272), 1,
      anon_sym_LT_QMARK,
    ACTIONS(276), 1,
      aux_sym_xml_string_token1,
    ACTIONS(280), 1,
      anon_sym_LT_SLASH,
    STATE(60), 1,
      sym_xml_close_tag,
    STATE(84), 1,
      sym_xml_open_tag,
    STATE(107), 1,
      aux_sym_xml_string_repeat1,
    STATE(80), 4,
      sym_xml_prolog_tag,
      sym_xml_tag,
      sym_xml_string,
      aux_sym_xml_tag_repeat1,
  [3133] = 8,
    ACTIONS(100), 1,
      sym_comment,
    ACTIONS(284), 1,
      anon_sym_DQUOTE,
    ACTIONS(286), 1,
      aux_sym_json_string_text_token1,
    ACTIONS(289), 1,
      anon_sym_BSLASH,
    ACTIONS(292), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(102), 1,
      aux_sym_json_string_text_repeat1,
    STATE(83), 3,
      sym_json_string_content,
      sym_template,
      aux_sym_json_string_repeat1,
    STATE(89), 3,
      sym_json_string_text,
      sym_json_string_escaped_char,
      aux_sym_json_string_content_repeat1,
  [3162] = 9,
    ACTIONS(13), 1,
      anon_sym_LT,
    ACTIONS(100), 1,
      sym_comment,
    ACTIONS(272), 1,
      anon_sym_LT_QMARK,
    ACTIONS(274), 1,
      anon_sym_LT_SLASH,
    ACTIONS(276), 1,
      aux_sym_xml_string_token1,
    STATE(84), 1,
      sym_xml_open_tag,
    STATE(107), 1,
      aux_sym_xml_string_repeat1,
    STATE(115), 1,
      sym_xml_close_tag,
    STATE(78), 4,
      sym_xml_prolog_tag,
      sym_xml_tag,
      sym_xml_string,
      aux_sym_xml_tag_repeat1,
  [3193] = 8,
    ACTIONS(100), 1,
      sym_comment,
    ACTIONS(295), 1,
      anon_sym_LT,
    ACTIONS(298), 1,
      anon_sym_LT_QMARK,
    ACTIONS(301), 1,
      anon_sym_LT_SLASH,
    ACTIONS(303), 1,
      aux_sym_xml_string_token1,
    STATE(84), 1,
      sym_xml_open_tag,
    STATE(107), 1,
      aux_sym_xml_string_repeat1,
    STATE(85), 4,
      sym_xml_prolog_tag,
      sym_xml_tag,
      sym_xml_string,
      aux_sym_xml_tag_repeat1,
  [3221] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(256), 1,
      aux_sym_digit_token1,
    STATE(87), 2,
      sym_digit,
      aux_sym_fraction_repeat1,
    ACTIONS(151), 6,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_e,
      anon_sym_E,
  [3240] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(306), 1,
      aux_sym_digit_token1,
    STATE(87), 2,
      sym_digit,
      aux_sym_fraction_repeat1,
    ACTIONS(146), 6,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_e,
      anon_sym_E,
  [3259] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(311), 1,
      anon_sym_u,
    ACTIONS(309), 7,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
      anon_sym_b,
      anon_sym_f,
      anon_sym_n,
      anon_sym_r,
      anon_sym_t,
  [3275] = 7,
    ACTIONS(100), 1,
      sym_comment,
    ACTIONS(264), 1,
      aux_sym_json_string_text_token1,
    ACTIONS(266), 1,
      anon_sym_BSLASH,
    ACTIONS(313), 1,
      anon_sym_DQUOTE,
    ACTIONS(315), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(102), 1,
      aux_sym_json_string_text_repeat1,
    STATE(91), 3,
      sym_json_string_text,
      sym_json_string_escaped_char,
      aux_sym_json_string_content_repeat1,
  [3299] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(317), 1,
      anon_sym_DOT,
    STATE(100), 1,
      sym_fraction,
    STATE(155), 1,
      sym_exponent,
    ACTIONS(319), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(155), 3,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [3321] = 7,
    ACTIONS(100), 1,
      sym_comment,
    ACTIONS(321), 1,
      anon_sym_DQUOTE,
    ACTIONS(323), 1,
      aux_sym_json_string_text_token1,
    ACTIONS(326), 1,
      anon_sym_BSLASH,
    ACTIONS(329), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(102), 1,
      aux_sym_json_string_text_repeat1,
    STATE(91), 3,
      sym_json_string_text,
      sym_json_string_escaped_char,
      aux_sym_json_string_content_repeat1,
  [3345] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(256), 1,
      aux_sym_digit_token1,
    STATE(87), 2,
      sym_digit,
      aux_sym_fraction_repeat1,
    ACTIONS(161), 5,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_e,
      anon_sym_E,
  [3363] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(242), 1,
      anon_sym_DQUOTE,
    ACTIONS(331), 1,
      anon_sym_COMMA,
    ACTIONS(333), 1,
      anon_sym_RBRACE,
    STATE(125), 1,
      aux_sym_json_object_repeat1,
    STATE(138), 1,
      sym_json_key_value,
    STATE(175), 1,
      sym_json_string,
    STATE(176), 1,
      sym_json_key_string,
  [3388] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(166), 7,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_e,
      anon_sym_E,
      aux_sym_digit_token1,
  [3401] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(242), 1,
      anon_sym_DQUOTE,
    ACTIONS(331), 1,
      anon_sym_COMMA,
    ACTIONS(335), 1,
      anon_sym_RBRACE,
    STATE(133), 1,
      aux_sym_json_object_repeat1,
    STATE(134), 1,
      sym_json_key_value,
    STATE(175), 1,
      sym_json_string,
    STATE(176), 1,
      sym_json_key_string,
  [3426] = 6,
    ACTIONS(100), 1,
      sym_comment,
    ACTIONS(337), 1,
      sym__char,
    ACTIONS(339), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(132), 1,
      aux_sym__line_repeat1,
    STATE(172), 1,
      sym_multiline_string_content,
    STATE(111), 2,
      sym__line,
      aux_sym_assert_section_repeat1,
  [3446] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(256), 1,
      aux_sym_digit_token1,
    STATE(87), 2,
      sym_digit,
      aux_sym_fraction_repeat1,
    ACTIONS(176), 3,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [3462] = 6,
    ACTIONS(100), 1,
      sym_comment,
    ACTIONS(337), 1,
      sym__char,
    ACTIONS(341), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(132), 1,
      aux_sym__line_repeat1,
    STATE(164), 1,
      sym_multiline_string_content,
    STATE(111), 2,
      sym__line,
      aux_sym_assert_section_repeat1,
  [3482] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(256), 1,
      aux_sym_digit_token1,
    STATE(87), 2,
      sym_digit,
      aux_sym_fraction_repeat1,
    ACTIONS(174), 3,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [3498] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(142), 1,
      sym_exponent,
    ACTIONS(319), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(178), 3,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [3514] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_LT,
    ACTIONS(19), 1,
      anon_sym_LT_QMARK,
    STATE(64), 1,
      sym_xml_tag,
    STATE(82), 1,
      sym_xml_open_tag,
    STATE(118), 2,
      sym_xml_prolog_tag,
      aux_sym_xml_repeat1,
  [3534] = 5,
    ACTIONS(100), 1,
      sym_comment,
    ACTIONS(345), 1,
      aux_sym_json_string_text_token1,
    ACTIONS(347), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(105), 1,
      aux_sym_json_string_text_repeat1,
    ACTIONS(343), 2,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
  [3551] = 5,
    ACTIONS(100), 1,
      sym_comment,
    ACTIONS(349), 1,
      sym__char,
    STATE(55), 1,
      sym_bodyData,
    STATE(126), 1,
      aux_sym__line_repeat1,
    STATE(61), 2,
      sym__line,
      aux_sym_assert_section_repeat1,
  [3568] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(256), 1,
      aux_sym_digit_token1,
    ACTIONS(351), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(99), 2,
      sym_digit,
      aux_sym_fraction_repeat1,
  [3583] = 5,
    ACTIONS(100), 1,
      sym_comment,
    ACTIONS(355), 1,
      aux_sym_json_string_text_token1,
    ACTIONS(358), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(105), 1,
      aux_sym_json_string_text_repeat1,
    ACTIONS(353), 2,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
  [3600] = 4,
    ACTIONS(100), 1,
      sym_comment,
    ACTIONS(362), 1,
      aux_sym_xml_string_token1,
    STATE(106), 1,
      aux_sym_xml_string_repeat1,
    ACTIONS(360), 3,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
  [3615] = 4,
    ACTIONS(100), 1,
      sym_comment,
    ACTIONS(367), 1,
      aux_sym_xml_string_token1,
    STATE(106), 1,
      aux_sym_xml_string_repeat1,
    ACTIONS(365), 3,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
  [3630] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 1,
      aux_sym_digit_token1,
    ACTIONS(369), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(33), 2,
      sym_digit,
      aux_sym_fraction_repeat1,
  [3645] = 5,
    ACTIONS(100), 1,
      sym_comment,
    ACTIONS(371), 1,
      sym__char,
    STATE(55), 1,
      sym_bodyData,
    STATE(124), 1,
      aux_sym__line_repeat1,
    STATE(32), 2,
      sym__line,
      aux_sym_assert_section_repeat1,
  [3662] = 5,
    ACTIONS(95), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(100), 1,
      sym_comment,
    ACTIONS(373), 1,
      sym__char,
    STATE(132), 1,
      aux_sym__line_repeat1,
    STATE(110), 2,
      sym__line,
      aux_sym_assert_section_repeat1,
  [3679] = 5,
    ACTIONS(100), 1,
      sym_comment,
    ACTIONS(337), 1,
      sym__char,
    ACTIONS(376), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(132), 1,
      aux_sym__line_repeat1,
    STATE(110), 2,
      sym__line,
      aux_sym_assert_section_repeat1,
  [3696] = 3,
    ACTIONS(100), 1,
      sym_comment,
    ACTIONS(219), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(378), 3,
      anon_sym_DQUOTE,
      aux_sym_json_string_text_token1,
      anon_sym_BSLASH,
  [3708] = 3,
    ACTIONS(100), 1,
      sym_comment,
    ACTIONS(382), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(380), 3,
      anon_sym_DQUOTE,
      aux_sym_json_string_text_token1,
      anon_sym_BSLASH,
  [3720] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(198), 4,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [3730] = 2,
    ACTIONS(100), 1,
      sym_comment,
    ACTIONS(384), 4,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      aux_sym_xml_string_token1,
  [3740] = 2,
    ACTIONS(100), 1,
      sym_comment,
    ACTIONS(386), 4,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      aux_sym_xml_string_token1,
  [3750] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 4,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [3760] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(388), 1,
      anon_sym_LT,
    ACTIONS(390), 1,
      anon_sym_LT_QMARK,
    STATE(118), 2,
      sym_xml_prolog_tag,
      aux_sym_xml_repeat1,
  [3774] = 2,
    ACTIONS(100), 1,
      sym_comment,
    ACTIONS(393), 4,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      aux_sym_xml_string_token1,
  [3784] = 2,
    ACTIONS(100), 1,
      sym_comment,
    ACTIONS(395), 4,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      aux_sym_xml_string_token1,
  [3794] = 3,
    ACTIONS(100), 1,
      sym_comment,
    ACTIONS(399), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(397), 3,
      anon_sym_DQUOTE,
      aux_sym_json_string_text_token1,
      anon_sym_BSLASH,
  [3806] = 2,
    ACTIONS(100), 1,
      sym_comment,
    ACTIONS(401), 4,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      aux_sym_xml_string_token1,
  [3816] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(242), 1,
      anon_sym_DQUOTE,
    STATE(157), 1,
      sym_json_key_value,
    STATE(175), 1,
      sym_json_string,
    STATE(176), 1,
      sym_json_key_string,
  [3832] = 4,
    ACTIONS(100), 1,
      sym_comment,
    ACTIONS(403), 1,
      anon_sym_LF,
    ACTIONS(405), 1,
      sym__char,
    STATE(139), 1,
      aux_sym__line_repeat1,
  [3845] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(331), 1,
      anon_sym_COMMA,
    ACTIONS(407), 1,
      anon_sym_RBRACE,
    STATE(146), 1,
      aux_sym_json_object_repeat1,
  [3858] = 4,
    ACTIONS(100), 1,
      sym_comment,
    ACTIONS(405), 1,
      sym__char,
    ACTIONS(409), 1,
      anon_sym_LF,
    STATE(139), 1,
      aux_sym__line_repeat1,
  [3871] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 1,
      aux_sym_digit_token1,
    STATE(34), 2,
      sym_digit,
      aux_sym_fraction_repeat1,
  [3882] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(411), 1,
      anon_sym_RBRACK,
    ACTIONS(413), 1,
      anon_sym_COMMA,
    STATE(128), 1,
      aux_sym_json_array_repeat1,
  [3895] = 4,
    ACTIONS(100), 1,
      sym_comment,
    ACTIONS(405), 1,
      sym__char,
    ACTIONS(416), 1,
      anon_sym_LF,
    STATE(139), 1,
      aux_sym__line_repeat1,
  [3908] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(331), 1,
      anon_sym_COMMA,
    ACTIONS(418), 1,
      anon_sym_RBRACE,
    STATE(146), 1,
      aux_sym_json_object_repeat1,
  [3921] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(420), 1,
      anon_sym_RBRACK,
    ACTIONS(422), 1,
      anon_sym_COMMA,
    STATE(128), 1,
      aux_sym_json_array_repeat1,
  [3934] = 4,
    ACTIONS(100), 1,
      sym_comment,
    ACTIONS(405), 1,
      sym__char,
    ACTIONS(424), 1,
      anon_sym_LF,
    STATE(139), 1,
      aux_sym__line_repeat1,
  [3947] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(331), 1,
      anon_sym_COMMA,
    ACTIONS(426), 1,
      anon_sym_RBRACE,
    STATE(146), 1,
      aux_sym_json_object_repeat1,
  [3960] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(331), 1,
      anon_sym_COMMA,
    ACTIONS(426), 1,
      anon_sym_RBRACE,
    STATE(130), 1,
      aux_sym_json_object_repeat1,
  [3973] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(422), 1,
      anon_sym_COMMA,
    ACTIONS(428), 1,
      anon_sym_RBRACK,
    STATE(131), 1,
      aux_sym_json_array_repeat1,
  [3986] = 4,
    ACTIONS(100), 1,
      sym_comment,
    ACTIONS(430), 1,
      anon_sym_LF,
    ACTIONS(432), 1,
      anon_sym_,
    STATE(167), 1,
      sym__multiline_string_type_seq,
  [3999] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(422), 1,
      anon_sym_COMMA,
    ACTIONS(434), 1,
      anon_sym_RBRACK,
    STATE(151), 1,
      aux_sym_json_array_repeat1,
  [4012] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(331), 1,
      anon_sym_COMMA,
    ACTIONS(407), 1,
      anon_sym_RBRACE,
    STATE(147), 1,
      aux_sym_json_object_repeat1,
  [4025] = 4,
    ACTIONS(100), 1,
      sym_comment,
    ACTIONS(436), 1,
      anon_sym_LF,
    ACTIONS(438), 1,
      sym__char,
    STATE(139), 1,
      aux_sym__line_repeat1,
  [4038] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(200), 3,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [4047] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(202), 3,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [4056] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(204), 3,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [4065] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(184), 3,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [4074] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 3,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [4083] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(256), 1,
      aux_sym_digit_token1,
    STATE(97), 2,
      sym_digit,
      aux_sym_fraction_repeat1,
  [4094] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(441), 1,
      anon_sym_COMMA,
    ACTIONS(444), 1,
      anon_sym_RBRACE,
    STATE(146), 1,
      aux_sym_json_object_repeat1,
  [4107] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(331), 1,
      anon_sym_COMMA,
    ACTIONS(446), 1,
      anon_sym_RBRACE,
    STATE(146), 1,
      aux_sym_json_object_repeat1,
  [4120] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(188), 3,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [4129] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(219), 3,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [4138] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(194), 3,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [4147] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(422), 1,
      anon_sym_COMMA,
    ACTIONS(448), 1,
      anon_sym_RBRACK,
    STATE(128), 1,
      aux_sym_json_array_repeat1,
  [4160] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(256), 1,
      aux_sym_digit_token1,
    STATE(92), 2,
      sym_digit,
      aux_sym_fraction_repeat1,
  [4171] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(227), 3,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [4180] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 1,
      aux_sym_digit_token1,
    STATE(29), 2,
      sym_digit,
      aux_sym_fraction_repeat1,
  [4191] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(178), 3,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [4200] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(401), 1,
      anon_sym_LT,
    ACTIONS(450), 1,
      anon_sym_LT_QMARK,
  [4210] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(444), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [4218] = 2,
    ACTIONS(100), 1,
      sym_comment,
    ACTIONS(144), 2,
      sym__char,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
  [4226] = 3,
    ACTIONS(100), 1,
      sym_comment,
    ACTIONS(452), 1,
      aux_sym_key_value_token1,
    ACTIONS(454), 1,
      sym_value,
  [4236] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(456), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [4244] = 3,
    ACTIONS(100), 1,
      sym_comment,
    ACTIONS(458), 1,
      aux_sym_key_value_token1,
    ACTIONS(460), 1,
      sym_value,
  [4254] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(411), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [4262] = 2,
    ACTIONS(100), 1,
      sym_comment,
    ACTIONS(462), 1,
      sym_value,
  [4269] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(464), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
  [4276] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(466), 1,
      anon_sym_COLON,
  [4283] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(468), 1,
      anon_sym_COLON,
  [4290] = 2,
    ACTIONS(100), 1,
      sym_comment,
    ACTIONS(470), 1,
      anon_sym_LF,
  [4297] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(472), 1,
      sym_multiline_string_type,
  [4304] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(474), 1,
      anon_sym_RBRACE_RBRACE,
  [4311] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(476), 1,
      sym_hexdigit,
  [4318] = 2,
    ACTIONS(100), 1,
      sym_comment,
    ACTIONS(478), 1,
      anon_sym_LF,
  [4325] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(480), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
  [4332] = 2,
    ACTIONS(100), 1,
      sym_comment,
    ACTIONS(482), 1,
      anon_sym_LF,
  [4339] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(484), 1,
      sym_hexdigit,
  [4346] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(486), 1,
      anon_sym_COLON,
  [4353] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(488), 1,
      anon_sym_COLON,
  [4360] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(490), 1,
      anon_sym_QMARK_GT,
  [4367] = 2,
    ACTIONS(100), 1,
      sym_comment,
    ACTIONS(492), 1,
      sym_uri,
  [4374] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(494), 1,
      anon_sym_RBRACK,
  [4381] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(496), 1,
      anon_sym_GT,
  [4388] = 2,
    ACTIONS(100), 1,
      sym_comment,
    ACTIONS(498), 1,
      anon_sym_LF,
  [4395] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(500), 1,
      aux_sym_response_token1,
  [4402] = 2,
    ACTIONS(100), 1,
      sym_comment,
    ACTIONS(502), 1,
      aux_sym_template_token1,
  [4409] = 2,
    ACTIONS(100), 1,
      sym_comment,
    ACTIONS(504), 1,
      aux_sym_xml_prolog_tag_token1,
  [4416] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(506), 1,
      aux_sym_response_token1,
  [4423] = 2,
    ACTIONS(100), 1,
      sym_comment,
    ACTIONS(508), 1,
      anon_sym_LF,
  [4430] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(510), 1,
      anon_sym_QMARK_GT,
  [4437] = 2,
    ACTIONS(100), 1,
      sym_comment,
    ACTIONS(512), 1,
      anon_sym_LF,
  [4444] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(514), 1,
      aux_sym_section_header_token1,
  [4451] = 2,
    ACTIONS(100), 1,
      sym_comment,
    ACTIONS(516), 1,
      aux_sym_xml_open_tag_token1,
  [4458] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(518), 1,
      anon_sym_RBRACE_RBRACE,
  [4465] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(520), 1,
      sym_hexdigit,
  [4472] = 2,
    ACTIONS(100), 1,
      sym_comment,
    ACTIONS(522), 1,
      sym_uri,
  [4479] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(524), 1,
      sym_hexdigit,
  [4486] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(526), 1,
      anon_sym_GT,
  [4493] = 2,
    ACTIONS(100), 1,
      sym_comment,
    ACTIONS(528), 1,
      anon_sym_LF,
  [4500] = 2,
    ACTIONS(100), 1,
      sym_comment,
    ACTIONS(530), 1,
      anon_sym_LF,
  [4507] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(532), 1,
      anon_sym_RBRACE_RBRACE,
  [4514] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(534), 1,
      anon_sym_GT,
  [4521] = 2,
    ACTIONS(100), 1,
      sym_comment,
    ACTIONS(536), 1,
      aux_sym_xml_close_tag_token1,
  [4528] = 2,
    ACTIONS(100), 1,
      sym_comment,
    ACTIONS(538), 1,
      aux_sym_xml_prolog_tag_token1,
  [4535] = 2,
    ACTIONS(100), 1,
      sym_comment,
    ACTIONS(540), 1,
      aux_sym_template_token1,
  [4542] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(542), 1,
      ts_builtin_sym_end,
  [4549] = 2,
    ACTIONS(100), 1,
      sym_comment,
    ACTIONS(544), 1,
      aux_sym_xml_close_tag_token1,
  [4556] = 2,
    ACTIONS(100), 1,
      sym_comment,
    ACTIONS(546), 1,
      anon_sym_LF,
  [4563] = 2,
    ACTIONS(100), 1,
      sym_comment,
    ACTIONS(548), 1,
      sym_value,
  [4570] = 2,
    ACTIONS(100), 1,
      sym_comment,
    ACTIONS(550), 1,
      aux_sym_template_token1,
  [4577] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(552), 1,
      anon_sym_COLON,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 111,
  [SMALL_STATE(4)] = 222,
  [SMALL_STATE(5)] = 325,
  [SMALL_STATE(6)] = 428,
  [SMALL_STATE(7)] = 482,
  [SMALL_STATE(8)] = 533,
  [SMALL_STATE(9)] = 584,
  [SMALL_STATE(10)] = 635,
  [SMALL_STATE(11)] = 686,
  [SMALL_STATE(12)] = 736,
  [SMALL_STATE(13)] = 785,
  [SMALL_STATE(14)] = 834,
  [SMALL_STATE(15)] = 883,
  [SMALL_STATE(16)] = 932,
  [SMALL_STATE(17)] = 981,
  [SMALL_STATE(18)] = 1030,
  [SMALL_STATE(19)] = 1072,
  [SMALL_STATE(20)] = 1120,
  [SMALL_STATE(21)] = 1162,
  [SMALL_STATE(22)] = 1204,
  [SMALL_STATE(23)] = 1245,
  [SMALL_STATE(24)] = 1285,
  [SMALL_STATE(25)] = 1325,
  [SMALL_STATE(26)] = 1365,
  [SMALL_STATE(27)] = 1402,
  [SMALL_STATE(28)] = 1439,
  [SMALL_STATE(29)] = 1479,
  [SMALL_STATE(30)] = 1515,
  [SMALL_STATE(31)] = 1554,
  [SMALL_STATE(32)] = 1585,
  [SMALL_STATE(33)] = 1624,
  [SMALL_STATE(34)] = 1658,
  [SMALL_STATE(35)] = 1692,
  [SMALL_STATE(36)] = 1726,
  [SMALL_STATE(37)] = 1761,
  [SMALL_STATE(38)] = 1796,
  [SMALL_STATE(39)] = 1826,
  [SMALL_STATE(40)] = 1853,
  [SMALL_STATE(41)] = 1880,
  [SMALL_STATE(42)] = 1907,
  [SMALL_STATE(43)] = 1934,
  [SMALL_STATE(44)] = 1961,
  [SMALL_STATE(45)] = 1996,
  [SMALL_STATE(46)] = 2023,
  [SMALL_STATE(47)] = 2050,
  [SMALL_STATE(48)] = 2077,
  [SMALL_STATE(49)] = 2104,
  [SMALL_STATE(50)] = 2131,
  [SMALL_STATE(51)] = 2158,
  [SMALL_STATE(52)] = 2185,
  [SMALL_STATE(53)] = 2212,
  [SMALL_STATE(54)] = 2239,
  [SMALL_STATE(55)] = 2274,
  [SMALL_STATE(56)] = 2301,
  [SMALL_STATE(57)] = 2328,
  [SMALL_STATE(58)] = 2355,
  [SMALL_STATE(59)] = 2382,
  [SMALL_STATE(60)] = 2409,
  [SMALL_STATE(61)] = 2436,
  [SMALL_STATE(62)] = 2471,
  [SMALL_STATE(63)] = 2498,
  [SMALL_STATE(64)] = 2533,
  [SMALL_STATE(65)] = 2560,
  [SMALL_STATE(66)] = 2607,
  [SMALL_STATE(67)] = 2651,
  [SMALL_STATE(68)] = 2695,
  [SMALL_STATE(69)] = 2721,
  [SMALL_STATE(70)] = 2765,
  [SMALL_STATE(71)] = 2809,
  [SMALL_STATE(72)] = 2832,
  [SMALL_STATE(73)] = 2855,
  [SMALL_STATE(74)] = 2878,
  [SMALL_STATE(75)] = 2901,
  [SMALL_STATE(76)] = 2924,
  [SMALL_STATE(77)] = 2953,
  [SMALL_STATE(78)] = 2982,
  [SMALL_STATE(79)] = 3013,
  [SMALL_STATE(80)] = 3042,
  [SMALL_STATE(81)] = 3073,
  [SMALL_STATE(82)] = 3102,
  [SMALL_STATE(83)] = 3133,
  [SMALL_STATE(84)] = 3162,
  [SMALL_STATE(85)] = 3193,
  [SMALL_STATE(86)] = 3221,
  [SMALL_STATE(87)] = 3240,
  [SMALL_STATE(88)] = 3259,
  [SMALL_STATE(89)] = 3275,
  [SMALL_STATE(90)] = 3299,
  [SMALL_STATE(91)] = 3321,
  [SMALL_STATE(92)] = 3345,
  [SMALL_STATE(93)] = 3363,
  [SMALL_STATE(94)] = 3388,
  [SMALL_STATE(95)] = 3401,
  [SMALL_STATE(96)] = 3426,
  [SMALL_STATE(97)] = 3446,
  [SMALL_STATE(98)] = 3462,
  [SMALL_STATE(99)] = 3482,
  [SMALL_STATE(100)] = 3498,
  [SMALL_STATE(101)] = 3514,
  [SMALL_STATE(102)] = 3534,
  [SMALL_STATE(103)] = 3551,
  [SMALL_STATE(104)] = 3568,
  [SMALL_STATE(105)] = 3583,
  [SMALL_STATE(106)] = 3600,
  [SMALL_STATE(107)] = 3615,
  [SMALL_STATE(108)] = 3630,
  [SMALL_STATE(109)] = 3645,
  [SMALL_STATE(110)] = 3662,
  [SMALL_STATE(111)] = 3679,
  [SMALL_STATE(112)] = 3696,
  [SMALL_STATE(113)] = 3708,
  [SMALL_STATE(114)] = 3720,
  [SMALL_STATE(115)] = 3730,
  [SMALL_STATE(116)] = 3740,
  [SMALL_STATE(117)] = 3750,
  [SMALL_STATE(118)] = 3760,
  [SMALL_STATE(119)] = 3774,
  [SMALL_STATE(120)] = 3784,
  [SMALL_STATE(121)] = 3794,
  [SMALL_STATE(122)] = 3806,
  [SMALL_STATE(123)] = 3816,
  [SMALL_STATE(124)] = 3832,
  [SMALL_STATE(125)] = 3845,
  [SMALL_STATE(126)] = 3858,
  [SMALL_STATE(127)] = 3871,
  [SMALL_STATE(128)] = 3882,
  [SMALL_STATE(129)] = 3895,
  [SMALL_STATE(130)] = 3908,
  [SMALL_STATE(131)] = 3921,
  [SMALL_STATE(132)] = 3934,
  [SMALL_STATE(133)] = 3947,
  [SMALL_STATE(134)] = 3960,
  [SMALL_STATE(135)] = 3973,
  [SMALL_STATE(136)] = 3986,
  [SMALL_STATE(137)] = 3999,
  [SMALL_STATE(138)] = 4012,
  [SMALL_STATE(139)] = 4025,
  [SMALL_STATE(140)] = 4038,
  [SMALL_STATE(141)] = 4047,
  [SMALL_STATE(142)] = 4056,
  [SMALL_STATE(143)] = 4065,
  [SMALL_STATE(144)] = 4074,
  [SMALL_STATE(145)] = 4083,
  [SMALL_STATE(146)] = 4094,
  [SMALL_STATE(147)] = 4107,
  [SMALL_STATE(148)] = 4120,
  [SMALL_STATE(149)] = 4129,
  [SMALL_STATE(150)] = 4138,
  [SMALL_STATE(151)] = 4147,
  [SMALL_STATE(152)] = 4160,
  [SMALL_STATE(153)] = 4171,
  [SMALL_STATE(154)] = 4180,
  [SMALL_STATE(155)] = 4191,
  [SMALL_STATE(156)] = 4200,
  [SMALL_STATE(157)] = 4210,
  [SMALL_STATE(158)] = 4218,
  [SMALL_STATE(159)] = 4226,
  [SMALL_STATE(160)] = 4236,
  [SMALL_STATE(161)] = 4244,
  [SMALL_STATE(162)] = 4254,
  [SMALL_STATE(163)] = 4262,
  [SMALL_STATE(164)] = 4269,
  [SMALL_STATE(165)] = 4276,
  [SMALL_STATE(166)] = 4283,
  [SMALL_STATE(167)] = 4290,
  [SMALL_STATE(168)] = 4297,
  [SMALL_STATE(169)] = 4304,
  [SMALL_STATE(170)] = 4311,
  [SMALL_STATE(171)] = 4318,
  [SMALL_STATE(172)] = 4325,
  [SMALL_STATE(173)] = 4332,
  [SMALL_STATE(174)] = 4339,
  [SMALL_STATE(175)] = 4346,
  [SMALL_STATE(176)] = 4353,
  [SMALL_STATE(177)] = 4360,
  [SMALL_STATE(178)] = 4367,
  [SMALL_STATE(179)] = 4374,
  [SMALL_STATE(180)] = 4381,
  [SMALL_STATE(181)] = 4388,
  [SMALL_STATE(182)] = 4395,
  [SMALL_STATE(183)] = 4402,
  [SMALL_STATE(184)] = 4409,
  [SMALL_STATE(185)] = 4416,
  [SMALL_STATE(186)] = 4423,
  [SMALL_STATE(187)] = 4430,
  [SMALL_STATE(188)] = 4437,
  [SMALL_STATE(189)] = 4444,
  [SMALL_STATE(190)] = 4451,
  [SMALL_STATE(191)] = 4458,
  [SMALL_STATE(192)] = 4465,
  [SMALL_STATE(193)] = 4472,
  [SMALL_STATE(194)] = 4479,
  [SMALL_STATE(195)] = 4486,
  [SMALL_STATE(196)] = 4493,
  [SMALL_STATE(197)] = 4500,
  [SMALL_STATE(198)] = 4507,
  [SMALL_STATE(199)] = 4514,
  [SMALL_STATE(200)] = 4521,
  [SMALL_STATE(201)] = 4528,
  [SMALL_STATE(202)] = 4535,
  [SMALL_STATE(203)] = 4542,
  [SMALL_STATE(204)] = 4549,
  [SMALL_STATE(205)] = 4556,
  [SMALL_STATE(206)] = 4563,
  [SMALL_STATE(207)] = 4570,
  [SMALL_STATE(208)] = 4577,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hurl_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 2),
  [11] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 2),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 1),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 1),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response, 3),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_response, 3),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response, 4),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_response, 4),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 3),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 3),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_headers, 1),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_headers, 1),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_headers_repeat1, 2),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_headers_repeat1, 2),
  [71] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_headers_repeat1, 2), SHIFT_REPEAT(166),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 2),
  [76] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section, 2),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 1),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section, 1),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_request_repeat1, 2),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_request_repeat1, 2),
  [86] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_request_repeat1, 2), SHIFT_REPEAT(189),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_capture_section, 2),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_capture_section, 2),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_assert_section_repeat1, 2),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_assert_section_repeat1, 2),
  [97] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_assert_section_repeat1, 2), SHIFT_REPEAT(129),
  [100] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assert_section, 1),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assert_section, 1),
  [106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assert_section, 2),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assert_section, 2),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_capture_section, 1),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_capture_section, 1),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_header, 4),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section_header, 4),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_response_repeat1, 2),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_response_repeat1, 2),
  [124] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_response_repeat1, 2), SHIFT_REPEAT(17),
  [127] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_response_repeat1, 2), SHIFT_REPEAT(15),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_value, 5),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_key_value, 5),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_value, 4),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_key_value, 4),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 4),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 4),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__line, 2),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__line, 2),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_fraction_repeat1, 2),
  [148] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fraction_repeat1, 2), SHIFT_REPEAT(31),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer, 1),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_number, 1),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fraction, 2),
  [163] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_assert_section_repeat1, 2), SHIFT_REPEAT(124),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_digit, 1),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bodyData, 1),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bodyData, 1),
  [172] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exponent, 2),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exponent, 3),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_number, 2),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 3),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_string, 3),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_string, 5),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_object, 2),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xml_close_tag, 3),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hurl_file, 1),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_object, 3),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_string, 4),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_string, 2),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_object, 4),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_array, 4),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_number, 3),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xml_tag, 3),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_value, 1),
  [210] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_assert_section_repeat1, 2), SHIFT_REPEAT(126),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 2),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 1),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xml, 1),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template, 3),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_string, 3),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xml_tag, 2),
  [225] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_array, 3),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_hurl_file_repeat1, 2),
  [231] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_hurl_file_repeat1, 2), SHIFT_REPEAT(178),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xml, 2),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [238] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [240] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [246] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [248] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [250] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 4),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response, 5),
  [262] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [264] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [266] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [270] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [272] = {.entry = {.count = 1, .reusable = false}}, SHIFT(201),
  [274] = {.entry = {.count = 1, .reusable = false}}, SHIFT(204),
  [276] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [278] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [280] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [282] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [284] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_json_string_repeat1, 2),
  [286] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_string_repeat1, 2), SHIFT_REPEAT(102),
  [289] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_string_repeat1, 2), SHIFT_REPEAT(88),
  [292] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_json_string_repeat1, 2), SHIFT_REPEAT(207),
  [295] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_xml_tag_repeat1, 2), SHIFT_REPEAT(190),
  [298] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_xml_tag_repeat1, 2), SHIFT_REPEAT(201),
  [301] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_xml_tag_repeat1, 2),
  [303] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_xml_tag_repeat1, 2), SHIFT_REPEAT(107),
  [306] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fraction_repeat1, 2), SHIFT_REPEAT(94),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [313] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_string_content, 1),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_string_content, 1),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [321] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_json_string_content_repeat1, 2),
  [323] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_string_content_repeat1, 2), SHIFT_REPEAT(102),
  [326] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_string_content_repeat1, 2), SHIFT_REPEAT(88),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_json_string_content_repeat1, 2),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [337] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [339] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [341] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [343] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_string_text, 1),
  [345] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_string_text, 1),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [353] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_json_string_text_repeat1, 2),
  [355] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_string_text_repeat1, 2), SHIFT_REPEAT(105),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_json_string_text_repeat1, 2),
  [360] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_xml_string_repeat1, 2),
  [362] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_xml_string_repeat1, 2), SHIFT_REPEAT(106),
  [365] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xml_string, 1),
  [367] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [373] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_assert_section_repeat1, 2), SHIFT_REPEAT(132),
  [376] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline_string_content, 1),
  [378] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_template, 3),
  [380] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_string_escaped_char, 2),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_string_escaped_char, 2),
  [384] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xml_tag, 2),
  [386] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xml_open_tag, 3),
  [388] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_xml_repeat1, 2),
  [390] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_xml_repeat1, 2), SHIFT_REPEAT(184),
  [393] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xml_tag, 3),
  [395] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xml_close_tag, 3),
  [397] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_string_escaped_char, 6),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_string_escaped_char, 6),
  [401] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xml_prolog_tag, 3),
  [403] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [405] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [409] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_json_array_repeat1, 2),
  [413] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_json_array_repeat1, 2), SHIFT_REPEAT(67),
  [416] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [424] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [430] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [436] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__line_repeat1, 2),
  [438] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__line_repeat1, 2), SHIFT_REPEAT(139),
  [441] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_json_object_repeat1, 2), SHIFT_REPEAT(123),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_json_object_repeat1, 2),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xml_prolog_tag, 3),
  [452] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [454] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_key_value, 3),
  [458] = {.entry = {.count = 1, .reusable = false}}, SHIFT(206),
  [460] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [468] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key, 1),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multiline_string_type_seq, 2),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_key_string, 1, .production_id = 1),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [492] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_method, 1),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [502] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [504] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [506] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_http_version, 1),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [516] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [522] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [536] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [538] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [540] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [542] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [544] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [550] = {.entry = {.count = 1, .reusable = false}}, SHIFT(198),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_hurl(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
