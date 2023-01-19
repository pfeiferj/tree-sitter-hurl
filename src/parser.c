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
#define STATE_COUNT 204
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 156
#define ALIAS_COUNT 1
#define TOKEN_COUNT 98
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 3

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
  anon_sym_RBRACK = 48,
  aux_sym_section_type_token1 = 49,
  sym_http_status_code = 50,
  anon_sym_HTTP_SLASH1_DOT0 = 51,
  anon_sym_HTTP_SLASH1_DOT1 = 52,
  anon_sym_HTTP_SLASH2 = 53,
  anon_sym_HTTP_SLASH_STAR = 54,
  anon_sym_COLON = 55,
  aux_sym_key_value_token1 = 56,
  sym_value = 57,
  sym__char = 58,
  anon_sym_Captures = 59,
  anon_sym_Asserts = 60,
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
  sym_entry = 99,
  sym_request = 100,
  sym_header = 101,
  sym_headers = 102,
  sym_method = 103,
  sym_section = 104,
  sym_section_header = 105,
  sym_section_type = 106,
  sym_response = 107,
  sym_http_version = 108,
  sym_key_value = 109,
  sym_key = 110,
  sym__line = 111,
  sym_capture_section = 112,
  sym_assert_section = 113,
  sym_xml = 114,
  sym_xml_prolog_tag = 115,
  sym_xml_tag = 116,
  sym_xml_open_tag = 117,
  sym_xml_close_tag = 118,
  sym_xml_string = 119,
  sym_json_value = 120,
  sym_json_object = 121,
  sym_json_key_value = 122,
  sym_json_key_string = 123,
  sym_json_array = 124,
  sym_json_string = 125,
  sym_json_string_content = 126,
  sym_json_string_text = 127,
  sym_json_string_escaped_char = 128,
  sym_json_number = 129,
  sym_template = 130,
  sym_boolean = 131,
  sym_fraction = 132,
  sym_exponent = 133,
  sym_integer = 134,
  sym_digit = 135,
  sym_multiline_string_content = 136,
  sym__multiline_string_type_seq = 137,
  sym_multiline_string = 138,
  sym_bodyData = 139,
  sym_body = 140,
  aux_sym_hurl_file_repeat1 = 141,
  aux_sym_request_repeat1 = 142,
  aux_sym_headers_repeat1 = 143,
  aux_sym_response_repeat1 = 144,
  aux_sym__line_repeat1 = 145,
  aux_sym_assert_section_repeat1 = 146,
  aux_sym_xml_repeat1 = 147,
  aux_sym_xml_tag_repeat1 = 148,
  aux_sym_xml_string_repeat1 = 149,
  aux_sym_json_object_repeat1 = 150,
  aux_sym_json_array_repeat1 = 151,
  aux_sym_json_string_repeat1 = 152,
  aux_sym_json_string_content_repeat1 = 153,
  aux_sym_json_string_text_repeat1 = 154,
  aux_sym_fraction_repeat1 = 155,
  anon_alias_sym_json_key_string = 156,
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
  [anon_sym_RBRACK] = "]",
  [aux_sym_section_type_token1] = "section_type_token1",
  [sym_http_status_code] = "http_status_code",
  [anon_sym_HTTP_SLASH1_DOT0] = "HTTP/1.0",
  [anon_sym_HTTP_SLASH1_DOT1] = "HTTP/1.1",
  [anon_sym_HTTP_SLASH2] = "HTTP/2",
  [anon_sym_HTTP_SLASH_STAR] = "HTTP/*",
  [anon_sym_COLON] = ":",
  [aux_sym_key_value_token1] = "key_value_token1",
  [sym_value] = "value",
  [sym__char] = "_char",
  [anon_sym_Captures] = "section_type",
  [anon_sym_Asserts] = "section_type",
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
  [sym_entry] = "entry",
  [sym_request] = "request",
  [sym_header] = "header",
  [sym_headers] = "headers",
  [sym_method] = "method",
  [sym_section] = "section",
  [sym_section_header] = "section_header",
  [sym_section_type] = "section_type",
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
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [aux_sym_section_type_token1] = aux_sym_section_type_token1,
  [sym_http_status_code] = sym_http_status_code,
  [anon_sym_HTTP_SLASH1_DOT0] = anon_sym_HTTP_SLASH1_DOT0,
  [anon_sym_HTTP_SLASH1_DOT1] = anon_sym_HTTP_SLASH1_DOT1,
  [anon_sym_HTTP_SLASH2] = anon_sym_HTTP_SLASH2,
  [anon_sym_HTTP_SLASH_STAR] = anon_sym_HTTP_SLASH_STAR,
  [anon_sym_COLON] = anon_sym_COLON,
  [aux_sym_key_value_token1] = aux_sym_key_value_token1,
  [sym_value] = sym_value,
  [sym__char] = sym__char,
  [anon_sym_Captures] = sym_section_type,
  [anon_sym_Asserts] = sym_section_type,
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
  [sym_entry] = sym_entry,
  [sym_request] = sym_request,
  [sym_header] = sym_header,
  [sym_headers] = sym_headers,
  [sym_method] = sym_method,
  [sym_section] = sym_section,
  [sym_section_header] = sym_section_header,
  [sym_section_type] = sym_section_type,
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
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_section_type_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_http_status_code] = {
    .visible = true,
    .named = true,
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
  [anon_sym_Captures] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_Asserts] = {
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
  [sym_entry] = {
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
  [sym_section_type] = {
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
  [2] = {
    [0] = sym_section_header,
    [2] = sym_section_header,
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
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 18,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 22,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 27,
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
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 18,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 22,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 73,
  [77] = 75,
  [78] = 72,
  [79] = 79,
  [80] = 74,
  [81] = 81,
  [82] = 24,
  [83] = 23,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 26,
  [88] = 25,
  [89] = 89,
  [90] = 89,
  [91] = 28,
  [92] = 31,
  [93] = 93,
  [94] = 94,
  [95] = 32,
  [96] = 96,
  [97] = 30,
  [98] = 98,
  [99] = 18,
  [100] = 100,
  [101] = 100,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 104,
  [106] = 106,
  [107] = 107,
  [108] = 44,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 42,
  [113] = 62,
  [114] = 46,
  [115] = 115,
  [116] = 116,
  [117] = 43,
  [118] = 118,
  [119] = 61,
  [120] = 120,
  [121] = 45,
  [122] = 49,
  [123] = 52,
  [124] = 124,
  [125] = 56,
  [126] = 126,
  [127] = 127,
  [128] = 126,
  [129] = 129,
  [130] = 130,
  [131] = 126,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 129,
  [137] = 126,
  [138] = 57,
  [139] = 53,
  [140] = 127,
  [141] = 141,
  [142] = 141,
  [143] = 132,
  [144] = 134,
  [145] = 42,
  [146] = 146,
  [147] = 39,
  [148] = 63,
  [149] = 133,
  [150] = 130,
  [151] = 151,
  [152] = 50,
  [153] = 111,
  [154] = 22,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
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
  [187] = 165,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 160,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 177,
  [197] = 160,
  [198] = 198,
  [199] = 199,
  [200] = 161,
  [201] = 180,
  [202] = 194,
  [203] = 180,
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
      if (eof) ADVANCE(328);
      if (lookahead == '!') ADVANCE(103);
      if (lookahead == '"') ADVANCE(572);
      if (lookahead == '#') ADVANCE(316);
      if (lookahead == '+') ADVANCE(608);
      if (lookahead == ',') ADVANCE(570);
      if (lookahead == '-') ADVANCE(609);
      if (lookahead == '.') ADVANCE(605);
      if (lookahead == ':') ADVANCE(512);
      if (lookahead == '<') ADVANCE(400);
      if (lookahead == '=') ADVANCE(104);
      if (lookahead == '>') ADVANCE(397);
      if (lookahead == '?') ADVANCE(105);
      if (lookahead == 'E') ADVANCE(607);
      if (lookahead == 'G') ADVANCE(117);
      if (lookahead == 'H') ADVANCE(118);
      if (lookahead == 'L') ADVANCE(133);
      if (lookahead == 'O') ADVANCE(155);
      if (lookahead == 'P') ADVANCE(108);
      if (lookahead == 'T') ADVANCE(157);
      if (lookahead == 'U') ADVANCE(143);
      if (lookahead == 'V') ADVANCE(132);
      if (lookahead == '[') ADVANCE(411);
      if (lookahead == '\\') ADVANCE(577);
      if (lookahead == ']') ADVANCE(412);
      if (lookahead == '`') ADVANCE(172);
      if (lookahead == 'b') ADVANCE(578);
      if (lookahead == 'e') ADVANCE(606);
      if (lookahead == 'f') ADVANCE(579);
      if (lookahead == 'g') ADVANCE(277);
      if (lookahead == 'h') ADVANCE(212);
      if (lookahead == 'i') ADVANCE(250);
      if (lookahead == 'j') ADVANCE(284);
      if (lookahead == 'l') ADVANCE(211);
      if (lookahead == 'm') ADVANCE(173);
      if (lookahead == 'n') ADVANCE(580);
      if (lookahead == 'r') ADVANCE(581);
      if (lookahead == 's') ADVANCE(228);
      if (lookahead == 't') ADVANCE(582);
      if (lookahead == 'u') ADVANCE(584);
      if (lookahead == 'v') ADVANCE(178);
      if (lookahead == 'x') ADVANCE(268);
      if (lookahead == '{') ADVANCE(569);
      if (lookahead == '}') ADVANCE(571);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'd')) ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(604);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(321)
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '#') ADVANCE(567);
      if (lookahead == '<') ADVANCE(400);
      if (aux_sym_xml_string_token1_character_set_1(lookahead)) ADVANCE(566);
      if (lookahead != 0) ADVANCE(565);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '#') ADVANCE(316);
      if (lookahead == '\\') ADVANCE(520);
      if (lookahead == '`') ADVANCE(550);
      if (aux_sym_xml_string_token1_character_set_1(lookahead)) ADVANCE(548);
      if (lookahead != 0) ADVANCE(517);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(3)
      if (lookahead == '#') ADVANCE(316);
      if (lookahead == '\\') ADVANCE(520);
      if (aux_sym_xml_string_token1_character_set_1(lookahead)) ADVANCE(549);
      if (lookahead != 0) ADVANCE(517);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(329);
      if (lookahead == '#') ADVANCE(316);
      if (lookahead == '\\') ADVANCE(520);
      if (aux_sym_xml_string_token1_character_set_1(lookahead)) ADVANCE(518);
      if (lookahead != 0) ADVANCE(517);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(330);
      if (lookahead == ' ') ADVANCE(612);
      if (lookahead == '#') ADVANCE(316);
      if (anon_sym_LF_character_set_1(lookahead)) SKIP(6)
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(330);
      if (lookahead == '#') ADVANCE(316);
      if (aux_sym_xml_string_token1_character_set_1(lookahead)) SKIP(6)
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(7)
      if (lookahead == ' ') ADVANCE(513);
      if (lookahead == '#') ADVANCE(516);
      if (anon_sym_LF_character_set_1(lookahead)) ADVANCE(514);
      if (lookahead != 0) ADVANCE(516);
      END_STATE();
    case 8:
      if (lookahead == '\n') SKIP(8)
      if (lookahead == '#') ADVANCE(516);
      if (aux_sym_xml_string_token1_character_set_1(lookahead)) ADVANCE(515);
      if (lookahead != 0) ADVANCE(516);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(572);
      if (lookahead == '#') ADVANCE(316);
      if (lookahead == 'A') ADVANCE(499);
      if (lookahead == 'C') ADVANCE(483);
      if (lookahead == '[') ADVANCE(411);
      if (lookahead == 'f') ADVANCE(484);
      if (lookahead == 'n') ADVANCE(503);
      if (lookahead == 't') ADVANCE(493);
      if (lookahead == '{') ADVANCE(569);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(506);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(10)
      if (lookahead == '-' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(572);
      if (lookahead == '#') ADVANCE(316);
      if (lookahead == 'A') ADVANCE(499);
      if (lookahead == 'C') ADVANCE(483);
      if (lookahead == '[') ADVANCE(411);
      if (lookahead == 'f') ADVANCE(484);
      if (lookahead == 'n') ADVANCE(503);
      if (lookahead == 't') ADVANCE(493);
      if (lookahead == '{') ADVANCE(568);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(506);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(10)
      if (lookahead == '-' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 11:
      if (lookahead == '"') ADVANCE(572);
      if (lookahead == '#') ADVANCE(316);
      if (lookahead == '[') ADVANCE(411);
      if (lookahead == 'f') ADVANCE(484);
      if (lookahead == 'n') ADVANCE(503);
      if (lookahead == 't') ADVANCE(493);
      if (lookahead == '{') ADVANCE(569);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(506);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(12)
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 12:
      if (lookahead == '"') ADVANCE(572);
      if (lookahead == '#') ADVANCE(316);
      if (lookahead == '[') ADVANCE(411);
      if (lookahead == 'f') ADVANCE(484);
      if (lookahead == 'n') ADVANCE(503);
      if (lookahead == 't') ADVANCE(493);
      if (lookahead == '{') ADVANCE(568);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(506);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(12)
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 13:
      if (lookahead == '"') ADVANCE(572);
      if (lookahead == '#') ADVANCE(316);
      if (lookahead == '\\') ADVANCE(577);
      if (lookahead == 'b') ADVANCE(578);
      if (lookahead == 'f') ADVANCE(579);
      if (lookahead == 'n') ADVANCE(580);
      if (lookahead == 'r') ADVANCE(581);
      if (lookahead == 't') ADVANCE(582);
      if (lookahead == 'u') ADVANCE(583);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(315);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(13)
      END_STATE();
    case 14:
      if (lookahead == '"') ADVANCE(572);
      if (lookahead == '#') ADVANCE(576);
      if (lookahead == '\\') ADVANCE(577);
      if (lookahead == '{') ADVANCE(575);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) ADVANCE(574);
      if (lookahead != 0) ADVANCE(573);
      END_STATE();
    case 15:
      if (lookahead == '#') ADVANCE(316);
      if (lookahead == 'A') ADVANCE(499);
      if (lookahead == 'C') ADVANCE(483);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(15)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 16:
      if (lookahead == '#') ADVANCE(316);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(604);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(16)
      END_STATE();
    case 17:
      if (lookahead == '#') ADVANCE(316);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(17)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 18:
      if (lookahead == '#') ADVANCE(316);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(18)
      END_STATE();
    case 19:
      if (lookahead == '#') ADVANCE(316);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(18)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(613);
      END_STATE();
    case 20:
      if (lookahead == '#') ADVANCE(554);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) ADVANCE(555);
      if (lookahead != 0 &&
          lookahead != '?') ADVANCE(556);
      END_STATE();
    case 21:
      if (lookahead == '#') ADVANCE(332);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(21)
      if (lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(331);
      if (lookahead != 0) ADVANCE(333);
      END_STATE();
    case 22:
      if (lookahead == '#') ADVANCE(590);
      if (lookahead == '}') ADVANCE(588);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) ADVANCE(587);
      if (lookahead != 0) ADVANCE(586);
      END_STATE();
    case 23:
      if (lookahead == '#') ADVANCE(558);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) ADVANCE(559);
      if (lookahead != 0 &&
          lookahead != '/' &&
          lookahead != '?') ADVANCE(560);
      END_STATE();
    case 24:
      if (lookahead == '#') ADVANCE(562);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) ADVANCE(563);
      if (lookahead != 0 &&
          lookahead != '/' &&
          lookahead != '>') ADVANCE(564);
      END_STATE();
    case 25:
      if (lookahead == '*') ADVANCE(511);
      if (lookahead == '1') ADVANCE(96);
      if (lookahead == '2') ADVANCE(510);
      END_STATE();
    case 26:
      if (lookahead == ',') ADVANCE(615);
      if (lookahead == '/') ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 27:
      if (lookahead == ',') ADVANCE(615);
      if (lookahead == 'A') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 28:
      if (lookahead == ',') ADVANCE(615);
      if (lookahead == 'A') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 29:
      if (lookahead == ',') ADVANCE(615);
      if (lookahead == 'A') ADVANCE(82);
      if (lookahead == 'O') ADVANCE(76);
      if (lookahead == 'R') ADVANCE(68);
      if (lookahead == 'U') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 30:
      if (lookahead == ',') ADVANCE(615);
      if (lookahead == 'C') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 31:
      if (lookahead == ',') ADVANCE(615);
      if (lookahead == 'C') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 32:
      if (lookahead == ',') ADVANCE(615);
      if (lookahead == 'C') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 33:
      if (lookahead == ',') ADVANCE(615);
      if (lookahead == 'C') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 34:
      if (lookahead == ',') ADVANCE(615);
      if (lookahead == 'C') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 35:
      if (lookahead == ',') ADVANCE(615);
      if (lookahead == 'D') ADVANCE(339);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 36:
      if (lookahead == ',') ADVANCE(615);
      if (lookahead == 'D') ADVANCE(378);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 37:
      if (lookahead == ',') ADVANCE(615);
      if (lookahead == 'E') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 38:
      if (lookahead == ',') ADVANCE(615);
      if (lookahead == 'E') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 39:
      if (lookahead == ',') ADVANCE(615);
      if (lookahead == 'E') ADVANCE(27);
      if (lookahead == 'T') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 40:
      if (lookahead == ',') ADVANCE(615);
      if (lookahead == 'E') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 41:
      if (lookahead == ',') ADVANCE(615);
      if (lookahead == 'E') ADVANCE(369);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 42:
      if (lookahead == ',') ADVANCE(615);
      if (lookahead == 'E') ADVANCE(357);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 43:
      if (lookahead == ',') ADVANCE(615);
      if (lookahead == 'E') ADVANCE(348);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 44:
      if (lookahead == ',') ADVANCE(615);
      if (lookahead == 'E') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 45:
      if (lookahead == ',') ADVANCE(615);
      if (lookahead == 'E') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 46:
      if (lookahead == ',') ADVANCE(615);
      if (lookahead == 'F') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 47:
      if (lookahead == ',') ADVANCE(615);
      if (lookahead == 'G') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 48:
      if (lookahead == ',') ADVANCE(615);
      if (lookahead == 'H') ADVANCE(360);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 49:
      if (lookahead == ',') ADVANCE(615);
      if (lookahead == 'I') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 50:
      if (lookahead == ',') ADVANCE(615);
      if (lookahead == 'I') ADVANCE(60);
      if (lookahead == 'O') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 51:
      if (lookahead == ',') ADVANCE(615);
      if (lookahead == 'I') ADVANCE(64);
      if (lookahead == 'O') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 52:
      if (lookahead == ',') ADVANCE(615);
      if (lookahead == 'I') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 53:
      if (lookahead == ',') ADVANCE(615);
      if (lookahead == 'I') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 54:
      if (lookahead == ',') ADVANCE(615);
      if (lookahead == 'K') ADVANCE(363);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 55:
      if (lookahead == ',') ADVANCE(615);
      if (lookahead == 'K') ADVANCE(372);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 56:
      if (lookahead == ',') ADVANCE(615);
      if (lookahead == 'K') ADVANCE(366);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 57:
      if (lookahead == ',') ADVANCE(615);
      if (lookahead == 'K') ADVANCE(375);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 58:
      if (lookahead == ',') ADVANCE(615);
      if (lookahead == 'L') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 59:
      if (lookahead == ',') ADVANCE(615);
      if (lookahead == 'L') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 60:
      if (lookahead == ',') ADVANCE(615);
      if (lookahead == 'N') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 61:
      if (lookahead == ',') ADVANCE(615);
      if (lookahead == 'N') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 62:
      if (lookahead == ',') ADVANCE(615);
      if (lookahead == 'N') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 63:
      if (lookahead == ',') ADVANCE(615);
      if (lookahead == 'N') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 64:
      if (lookahead == ',') ADVANCE(615);
      if (lookahead == 'N') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 65:
      if (lookahead == ',') ADVANCE(615);
      if (lookahead == 'N') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 66:
      if (lookahead == ',') ADVANCE(615);
      if (lookahead == 'N') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 67:
      if (lookahead == ',') ADVANCE(615);
      if (lookahead == 'O') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 68:
      if (lookahead == ',') ADVANCE(615);
      if (lookahead == 'O') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 69:
      if (lookahead == ',') ADVANCE(615);
      if (lookahead == 'O') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 70:
      if (lookahead == ',') ADVANCE(615);
      if (lookahead == 'P') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 71:
      if (lookahead == ',') ADVANCE(615);
      if (lookahead == 'P') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 72:
      if (lookahead == ',') ADVANCE(615);
      if (lookahead == 'P') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 73:
      if (lookahead == ',') ADVANCE(615);
      if (lookahead == 'R') ADVANCE(47);
      if (lookahead == 'T') ADVANCE(345);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 74:
      if (lookahead == ',') ADVANCE(615);
      if (lookahead == 'R') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 75:
      if (lookahead == ',') ADVANCE(615);
      if (lookahead == 'S') ADVANCE(354);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 76:
      if (lookahead == ',') ADVANCE(615);
      if (lookahead == 'S') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 77:
      if (lookahead == ',') ADVANCE(615);
      if (lookahead == 'T') ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 78:
      if (lookahead == ',') ADVANCE(615);
      if (lookahead == 'T') ADVANCE(342);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 79:
      if (lookahead == ',') ADVANCE(615);
      if (lookahead == 'T') ADVANCE(351);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 80:
      if (lookahead == ',') ADVANCE(615);
      if (lookahead == 'T') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 81:
      if (lookahead == ',') ADVANCE(615);
      if (lookahead == 'T') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 82:
      if (lookahead == ',') ADVANCE(615);
      if (lookahead == 'T') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 83:
      if (lookahead == ',') ADVANCE(615);
      if (lookahead == 'T') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 84:
      if (lookahead == ',') ADVANCE(615);
      if (lookahead == 'W') ADVANCE(381);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 85:
      if (lookahead == ',') ADVANCE(615);
      if (lookahead == 'a') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 86:
      if (lookahead == ',') ADVANCE(615);
      if (lookahead == 'e') ADVANCE(594);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 87:
      if (lookahead == ',') ADVANCE(615);
      if (lookahead == 'e') ADVANCE(598);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 88:
      if (lookahead == ',') ADVANCE(615);
      if (lookahead == 'l') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 89:
      if (lookahead == ',') ADVANCE(615);
      if (lookahead == 'l') ADVANCE(602);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 90:
      if (lookahead == ',') ADVANCE(615);
      if (lookahead == 'l') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 91:
      if (lookahead == ',') ADVANCE(615);
      if (lookahead == 'r') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 92:
      if (lookahead == ',') ADVANCE(615);
      if (lookahead == 's') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 93:
      if (lookahead == ',') ADVANCE(615);
      if (lookahead == 'u') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 94:
      if (lookahead == ',') ADVANCE(615);
      if (lookahead == 'u') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 95:
      if (lookahead == ',') ADVANCE(615);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 96:
      if (lookahead == '.') ADVANCE(98);
      END_STATE();
    case 97:
      if (lookahead == '/') ADVANCE(25);
      END_STATE();
    case 98:
      if (lookahead == '0') ADVANCE(508);
      if (lookahead == '1') ADVANCE(509);
      END_STATE();
    case 99:
      if (lookahead == '2') ADVANCE(101);
      END_STATE();
    case 100:
      if (lookahead == '5') ADVANCE(393);
      END_STATE();
    case 101:
      if (lookahead == '5') ADVANCE(102);
      END_STATE();
    case 102:
      if (lookahead == '6') ADVANCE(392);
      END_STATE();
    case 103:
      if (lookahead == '=') ADVANCE(395);
      END_STATE();
    case 104:
      if (lookahead == '=') ADVANCE(394);
      END_STATE();
    case 105:
      if (lookahead == '>') ADVANCE(557);
      END_STATE();
    case 106:
      if (lookahead == 'A') ADVANCE(115);
      END_STATE();
    case 107:
      if (lookahead == 'A') ADVANCE(112);
      END_STATE();
    case 108:
      if (lookahead == 'A') ADVANCE(165);
      if (lookahead == 'O') ADVANCE(159);
      if (lookahead == 'R') ADVANCE(150);
      if (lookahead == 'U') ADVANCE(156);
      END_STATE();
    case 109:
      if (lookahead == 'B') ADVANCE(266);
      if (lookahead == 'C') ADVANCE(261);
      if (lookahead == 'F') ADVANCE(240);
      if (lookahead == 'I') ADVANCE(256);
      if (lookahead == 'S') ADVANCE(299);
      END_STATE();
    case 110:
      if (lookahead == 'C') ADVANCE(131);
      END_STATE();
    case 111:
      if (lookahead == 'C') ADVANCE(138);
      END_STATE();
    case 112:
      if (lookahead == 'C') ADVANCE(121);
      END_STATE();
    case 113:
      if (lookahead == 'C') ADVANCE(140);
      END_STATE();
    case 114:
      if (lookahead == 'C') ADVANCE(162);
      END_STATE();
    case 115:
      if (lookahead == 'D') ADVANCE(337);
      END_STATE();
    case 116:
      if (lookahead == 'D') ADVANCE(376);
      END_STATE();
    case 117:
      if (lookahead == 'E') ADVANCE(160);
      END_STATE();
    case 118:
      if (lookahead == 'E') ADVANCE(106);
      if (lookahead == 'T') ADVANCE(163);
      END_STATE();
    case 119:
      if (lookahead == 'E') ADVANCE(169);
      END_STATE();
    case 120:
      if (lookahead == 'E') ADVANCE(367);
      END_STATE();
    case 121:
      if (lookahead == 'E') ADVANCE(355);
      END_STATE();
    case 122:
      if (lookahead == 'E') ADVANCE(272);
      END_STATE();
    case 123:
      if (lookahead == 'E') ADVANCE(346);
      END_STATE();
    case 124:
      if (lookahead == 'E') ADVANCE(141);
      END_STATE();
    case 125:
      if (lookahead == 'E') ADVANCE(292);
      if (lookahead == 'U') ADVANCE(258);
      END_STATE();
    case 126:
      if (lookahead == 'E') ADVANCE(114);
      END_STATE();
    case 127:
      if (lookahead == 'E') ADVANCE(167);
      END_STATE();
    case 128:
      if (lookahead == 'E') ADVANCE(273);
      END_STATE();
    case 129:
      if (lookahead == 'F') ADVANCE(136);
      END_STATE();
    case 130:
      if (lookahead == 'G') ADVANCE(120);
      END_STATE();
    case 131:
      if (lookahead == 'H') ADVANCE(358);
      END_STATE();
    case 132:
      if (lookahead == 'I') ADVANCE(119);
      END_STATE();
    case 133:
      if (lookahead == 'I') ADVANCE(144);
      if (lookahead == 'O') ADVANCE(111);
      END_STATE();
    case 134:
      if (lookahead == 'I') ADVANCE(151);
      END_STATE();
    case 135:
      if (lookahead == 'I') ADVANCE(147);
      if (lookahead == 'O') ADVANCE(113);
      END_STATE();
    case 136:
      if (lookahead == 'I') ADVANCE(146);
      END_STATE();
    case 137:
      if (lookahead == 'K') ADVANCE(361);
      END_STATE();
    case 138:
      if (lookahead == 'K') ADVANCE(370);
      END_STATE();
    case 139:
      if (lookahead == 'K') ADVANCE(364);
      END_STATE();
    case 140:
      if (lookahead == 'K') ADVANCE(373);
      END_STATE();
    case 141:
      if (lookahead == 'L') ADVANCE(127);
      END_STATE();
    case 142:
      if (lookahead == 'L') ADVANCE(135);
      END_STATE();
    case 143:
      if (lookahead == 'N') ADVANCE(142);
      END_STATE();
    case 144:
      if (lookahead == 'N') ADVANCE(137);
      END_STATE();
    case 145:
      if (lookahead == 'N') ADVANCE(158);
      END_STATE();
    case 146:
      if (lookahead == 'N') ADVANCE(116);
      END_STATE();
    case 147:
      if (lookahead == 'N') ADVANCE(139);
      END_STATE();
    case 148:
      if (lookahead == 'N') ADVANCE(126);
      END_STATE();
    case 149:
      if (lookahead == 'N') ADVANCE(148);
      END_STATE();
    case 150:
      if (lookahead == 'O') ADVANCE(154);
      END_STATE();
    case 151:
      if (lookahead == 'O') ADVANCE(145);
      END_STATE();
    case 152:
      if (lookahead == 'O') ADVANCE(149);
      END_STATE();
    case 153:
      if (lookahead == 'P') ADVANCE(97);
      END_STATE();
    case 154:
      if (lookahead == 'P') ADVANCE(129);
      END_STATE();
    case 155:
      if (lookahead == 'P') ADVANCE(164);
      END_STATE();
    case 156:
      if (lookahead == 'R') ADVANCE(130);
      if (lookahead == 'T') ADVANCE(343);
      END_STATE();
    case 157:
      if (lookahead == 'R') ADVANCE(107);
      END_STATE();
    case 158:
      if (lookahead == 'S') ADVANCE(352);
      END_STATE();
    case 159:
      if (lookahead == 'S') ADVANCE(161);
      END_STATE();
    case 160:
      if (lookahead == 'T') ADVANCE(334);
      END_STATE();
    case 161:
      if (lookahead == 'T') ADVANCE(340);
      END_STATE();
    case 162:
      if (lookahead == 'T') ADVANCE(349);
      END_STATE();
    case 163:
      if (lookahead == 'T') ADVANCE(153);
      END_STATE();
    case 164:
      if (lookahead == 'T') ADVANCE(134);
      END_STATE();
    case 165:
      if (lookahead == 'T') ADVANCE(110);
      END_STATE();
    case 166:
      if (lookahead == 'T') ADVANCE(229);
      END_STATE();
    case 167:
      if (lookahead == 'T') ADVANCE(123);
      END_STATE();
    case 168:
      if (lookahead == 'T') ADVANCE(230);
      END_STATE();
    case 169:
      if (lookahead == 'W') ADVANCE(379);
      END_STATE();
    case 170:
      if (lookahead == 'W') ADVANCE(234);
      END_STATE();
    case 171:
      if (lookahead == '`') ADVANCE(614);
      END_STATE();
    case 172:
      if (lookahead == '`') ADVANCE(171);
      END_STATE();
    case 173:
      if (lookahead == 'a') ADVANCE(297);
      if (lookahead == 'd') ADVANCE(100);
      END_STATE();
    case 174:
      if (lookahead == 'a') ADVANCE(199);
      END_STATE();
    case 175:
      if (lookahead == 'a') ADVANCE(99);
      END_STATE();
    case 176:
      if (lookahead == 'a') ADVANCE(281);
      END_STATE();
    case 177:
      if (lookahead == 'a') ADVANCE(191);
      END_STATE();
    case 178:
      if (lookahead == 'a') ADVANCE(274);
      END_STATE();
    case 179:
      if (lookahead == 'a') ADVANCE(270);
      END_STATE();
    case 180:
      if (lookahead == 'a') ADVANCE(298);
      END_STATE();
    case 181:
      if (lookahead == 'a') ADVANCE(305);
      END_STATE();
    case 182:
      if (lookahead == 'a') ADVANCE(251);
      END_STATE();
    case 183:
      if (lookahead == 'a') ADVANCE(296);
      END_STATE();
    case 184:
      if (lookahead == 'a') ADVANCE(252);
      END_STATE();
    case 185:
      if (lookahead == 'a') ADVANCE(301);
      END_STATE();
    case 186:
      if (lookahead == 'a') ADVANCE(253);
      END_STATE();
    case 187:
      if (lookahead == 'a') ADVANCE(244);
      END_STATE();
    case 188:
      if (lookahead == 'a') ADVANCE(245);
      END_STATE();
    case 189:
      if (lookahead == 'a') ADVANCE(246);
      END_STATE();
    case 190:
      if (lookahead == 'a') ADVANCE(271);
      END_STATE();
    case 191:
      if (lookahead == 'b') ADVANCE(242);
      END_STATE();
    case 192:
      if (lookahead == 'c') ADVANCE(231);
      END_STATE();
    case 193:
      if (lookahead == 'c') ADVANCE(238);
      END_STATE();
    case 194:
      if (lookahead == 'c') ADVANCE(265);
      END_STATE();
    case 195:
      if (lookahead == 'c') ADVANCE(300);
      END_STATE();
    case 196:
      if (lookahead == 'c') ADVANCE(179);
      END_STATE();
    case 197:
      if (lookahead == 'c') ADVANCE(190);
      END_STATE();
    case 198:
      if (lookahead == 'c') ADVANCE(267);
      END_STATE();
    case 199:
      if (lookahead == 'd') ADVANCE(214);
      END_STATE();
    case 200:
      if (lookahead == 'd') ADVANCE(205);
      END_STATE();
    case 201:
      if (lookahead == 'd') ADVANCE(206);
      END_STATE();
    case 202:
      if (lookahead == 'd') ADVANCE(220);
      END_STATE();
    case 203:
      if (lookahead == 'e') ADVANCE(224);
      END_STATE();
    case 204:
      if (lookahead == 'e') ADVANCE(391);
      END_STATE();
    case 205:
      if (lookahead == 'e') ADVANCE(383);
      END_STATE();
    case 206:
      if (lookahead == 'e') ADVANCE(382);
      END_STATE();
    case 207:
      if (lookahead == 'e') ADVANCE(384);
      END_STATE();
    case 208:
      if (lookahead == 'e') ADVANCE(385);
      END_STATE();
    case 209:
      if (lookahead == 'e') ADVANCE(592);
      END_STATE();
    case 210:
      if (lookahead == 'e') ADVANCE(596);
      END_STATE();
    case 211:
      if (lookahead == 'e') ADVANCE(291);
      END_STATE();
    case 212:
      if (lookahead == 'e') ADVANCE(174);
      if (lookahead == 't') ADVANCE(249);
      END_STATE();
    case 213:
      if (lookahead == 'e') ADVANCE(194);
      END_STATE();
    case 214:
      if (lookahead == 'e') ADVANCE(275);
      END_STATE();
    case 215:
      if (lookahead == 'e') ADVANCE(282);
      END_STATE();
    case 216:
      if (lookahead == 'e') ADVANCE(195);
      END_STATE();
    case 217:
      if (lookahead == 'e') ADVANCE(276);
      END_STATE();
    case 218:
      if (lookahead == 'e') ADVANCE(181);
      END_STATE();
    case 219:
      if (lookahead == 'e') ADVANCE(286);
      END_STATE();
    case 220:
      if (lookahead == 'e') ADVANCE(287);
      END_STATE();
    case 221:
      if (lookahead == 'e') ADVANCE(184);
      END_STATE();
    case 222:
      if (lookahead == 'e') ADVANCE(295);
      END_STATE();
    case 223:
      if (lookahead == 'g') ADVANCE(409);
      END_STATE();
    case 224:
      if (lookahead == 'g') ADVANCE(217);
      END_STATE();
    case 225:
      if (lookahead == 'h') ADVANCE(389);
      END_STATE();
    case 226:
      if (lookahead == 'h') ADVANCE(390);
      END_STATE();
    case 227:
      if (lookahead == 'h') ADVANCE(403);
      END_STATE();
    case 228:
      if (lookahead == 'h') ADVANCE(175);
      if (lookahead == 't') ADVANCE(176);
      END_STATE();
    case 229:
      if (lookahead == 'h') ADVANCE(182);
      END_STATE();
    case 230:
      if (lookahead == 'h') ADVANCE(186);
      END_STATE();
    case 231:
      if (lookahead == 'h') ADVANCE(219);
      END_STATE();
    case 232:
      if (lookahead == 'i') ADVANCE(255);
      END_STATE();
    case 233:
      if (lookahead == 'i') ADVANCE(177);
      END_STATE();
    case 234:
      if (lookahead == 'i') ADVANCE(304);
      END_STATE();
    case 235:
      if (lookahead == 'i') ADVANCE(264);
      END_STATE();
    case 236:
      if (lookahead == 'l') ADVANCE(387);
      END_STATE();
    case 237:
      if (lookahead == 'l') ADVANCE(125);
      END_STATE();
    case 238:
      if (lookahead == 'l') ADVANCE(306);
      END_STATE();
    case 239:
      if (lookahead == 'l') ADVANCE(600);
      END_STATE();
    case 240:
      if (lookahead == 'l') ADVANCE(263);
      END_STATE();
    case 241:
      if (lookahead == 'l') ADVANCE(216);
      END_STATE();
    case 242:
      if (lookahead == 'l') ADVANCE(204);
      END_STATE();
    case 243:
      if (lookahead == 'l') ADVANCE(241);
      END_STATE();
    case 244:
      if (lookahead == 'l') ADVANCE(288);
      END_STATE();
    case 245:
      if (lookahead == 'l') ADVANCE(289);
      END_STATE();
    case 246:
      if (lookahead == 'l') ADVANCE(294);
      END_STATE();
    case 247:
      if (lookahead == 'l') ADVANCE(239);
      END_STATE();
    case 248:
      if (lookahead == 'l') ADVANCE(221);
      END_STATE();
    case 249:
      if (lookahead == 'm') ADVANCE(237);
      END_STATE();
    case 250:
      if (lookahead == 'n') ADVANCE(193);
      if (lookahead == 's') ADVANCE(109);
      END_STATE();
    case 251:
      if (lookahead == 'n') ADVANCE(399);
      END_STATE();
    case 252:
      if (lookahead == 'n') ADVANCE(408);
      END_STATE();
    case 253:
      if (lookahead == 'n') ADVANCE(396);
      END_STATE();
    case 254:
      if (lookahead == 'n') ADVANCE(410);
      END_STATE();
    case 255:
      if (lookahead == 'n') ADVANCE(223);
      END_STATE();
    case 256:
      if (lookahead == 'n') ADVANCE(303);
      END_STATE();
    case 257:
      if (lookahead == 'n') ADVANCE(269);
      END_STATE();
    case 258:
      if (lookahead == 'n') ADVANCE(222);
      END_STATE();
    case 259:
      if (lookahead == 'n') ADVANCE(198);
      END_STATE();
    case 260:
      if (lookahead == 'o') ADVANCE(257);
      END_STATE();
    case 261:
      if (lookahead == 'o') ADVANCE(243);
      END_STATE();
    case 262:
      if (lookahead == 'o') ADVANCE(248);
      END_STATE();
    case 263:
      if (lookahead == 'o') ADVANCE(183);
      END_STATE();
    case 264:
      if (lookahead == 'o') ADVANCE(254);
      END_STATE();
    case 265:
      if (lookahead == 'o') ADVANCE(200);
      END_STATE();
    case 266:
      if (lookahead == 'o') ADVANCE(262);
      END_STATE();
    case 267:
      if (lookahead == 'o') ADVANCE(201);
      END_STATE();
    case 268:
      if (lookahead == 'p') ADVANCE(180);
      END_STATE();
    case 269:
      if (lookahead == 'p') ADVANCE(185);
      END_STATE();
    case 270:
      if (lookahead == 'p') ADVANCE(207);
      END_STATE();
    case 271:
      if (lookahead == 'p') ADVANCE(208);
      END_STATE();
    case 272:
      if (lookahead == 'q') ADVANCE(309);
      END_STATE();
    case 273:
      if (lookahead == 'q') ADVANCE(310);
      END_STATE();
    case 274:
      if (lookahead == 'r') ADVANCE(233);
      END_STATE();
    case 275:
      if (lookahead == 'r') ADVANCE(388);
      END_STATE();
    case 276:
      if (lookahead == 'r') ADVANCE(406);
      END_STATE();
    case 277:
      if (lookahead == 'r') ADVANCE(218);
      END_STATE();
    case 278:
      if (lookahead == 'r') ADVANCE(232);
      END_STATE();
    case 279:
      if (lookahead == 'r') ADVANCE(122);
      END_STATE();
    case 280:
      if (lookahead == 'r') ADVANCE(308);
      END_STATE();
    case 281:
      if (lookahead == 'r') ADVANCE(302);
      if (lookahead == 't') ADVANCE(307);
      END_STATE();
    case 282:
      if (lookahead == 'r') ADVANCE(168);
      END_STATE();
    case 283:
      if (lookahead == 'r') ADVANCE(128);
      END_STATE();
    case 284:
      if (lookahead == 's') ADVANCE(260);
      END_STATE();
    case 285:
      if (lookahead == 's') ADVANCE(386);
      END_STATE();
    case 286:
      if (lookahead == 's') ADVANCE(404);
      END_STATE();
    case 287:
      if (lookahead == 's') ADVANCE(405);
      END_STATE();
    case 288:
      if (lookahead == 's') ADVANCE(402);
      END_STATE();
    case 289:
      if (lookahead == 's') ADVANCE(398);
      END_STATE();
    case 290:
      if (lookahead == 's') ADVANCE(170);
      END_STATE();
    case 291:
      if (lookahead == 's') ADVANCE(293);
      END_STATE();
    case 292:
      if (lookahead == 's') ADVANCE(196);
      END_STATE();
    case 293:
      if (lookahead == 's') ADVANCE(166);
      END_STATE();
    case 294:
      if (lookahead == 's') ADVANCE(210);
      END_STATE();
    case 295:
      if (lookahead == 's') ADVANCE(197);
      END_STATE();
    case 296:
      if (lookahead == 't') ADVANCE(407);
      END_STATE();
    case 297:
      if (lookahead == 't') ADVANCE(192);
      END_STATE();
    case 298:
      if (lookahead == 't') ADVANCE(225);
      END_STATE();
    case 299:
      if (lookahead == 't') ADVANCE(278);
      END_STATE();
    case 300:
      if (lookahead == 't') ADVANCE(235);
      END_STATE();
    case 301:
      if (lookahead == 't') ADVANCE(226);
      END_STATE();
    case 302:
      if (lookahead == 't') ADVANCE(290);
      END_STATE();
    case 303:
      if (lookahead == 't') ADVANCE(203);
      END_STATE();
    case 304:
      if (lookahead == 't') ADVANCE(227);
      END_STATE();
    case 305:
      if (lookahead == 't') ADVANCE(215);
      END_STATE();
    case 306:
      if (lookahead == 'u') ADVANCE(202);
      END_STATE();
    case 307:
      if (lookahead == 'u') ADVANCE(285);
      END_STATE();
    case 308:
      if (lookahead == 'u') ADVANCE(209);
      END_STATE();
    case 309:
      if (lookahead == 'u') ADVANCE(187);
      END_STATE();
    case 310:
      if (lookahead == 'u') ADVANCE(188);
      END_STATE();
    case 311:
      if (lookahead == 'u') ADVANCE(247);
      END_STATE();
    case 312:
      if (lookahead == '}') ADVANCE(591);
      END_STATE();
    case 313:
      if (lookahead == '}') ADVANCE(589);
      END_STATE();
    case 314:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(507);
      END_STATE();
    case 315:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(314);
      END_STATE();
    case 316:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(616);
      END_STATE();
    case 317:
      if (eof) ADVANCE(328);
      if (lookahead == '\n') SKIP(317)
      if (lookahead == '#') ADVANCE(316);
      if (lookahead == 'C') ADVANCE(545);
      if (lookahead == 'D') ADVANCE(541);
      if (lookahead == 'G') ADVANCE(538);
      if (lookahead == 'H') ADVANCE(540);
      if (lookahead == 'L') ADVANCE(543);
      if (lookahead == 'O') ADVANCE(546);
      if (lookahead == 'P') ADVANCE(535);
      if (lookahead == 'T') ADVANCE(547);
      if (lookahead == 'U') ADVANCE(544);
      if (lookahead == 'V') ADVANCE(542);
      if (lookahead == '\\') ADVANCE(520);
      if (aux_sym_xml_string_token1_character_set_1(lookahead)) ADVANCE(536);
      if (lookahead != 0) ADVANCE(517);
      END_STATE();
    case 318:
      if (eof) ADVANCE(328);
      if (lookahead == '\n') SKIP(319)
      if (lookahead == '"') ADVANCE(572);
      if (lookahead == '#') ADVANCE(316);
      if (lookahead == '<') ADVANCE(401);
      if (lookahead == 'C') ADVANCE(528);
      if (lookahead == 'D') ADVANCE(522);
      if (lookahead == 'G') ADVANCE(523);
      if (lookahead == 'H') ADVANCE(524);
      if (lookahead == 'L') ADVANCE(526);
      if (lookahead == 'O') ADVANCE(529);
      if (lookahead == 'P') ADVANCE(521);
      if (lookahead == 'T') ADVANCE(530);
      if (lookahead == 'U') ADVANCE(527);
      if (lookahead == 'V') ADVANCE(525);
      if (lookahead == '[') ADVANCE(411);
      if (lookahead == '\\') ADVANCE(520);
      if (lookahead == '`') ADVANCE(550);
      if (lookahead == 'f') ADVANCE(531);
      if (lookahead == 'n') ADVANCE(533);
      if (lookahead == 't') ADVANCE(532);
      if (lookahead == '{') ADVANCE(569);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(534);
      if (aux_sym_xml_string_token1_character_set_1(lookahead)) ADVANCE(519);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(534);
      if (lookahead != 0) ADVANCE(517);
      END_STATE();
    case 319:
      if (eof) ADVANCE(328);
      if (lookahead == '\n') SKIP(319)
      if (lookahead == '"') ADVANCE(572);
      if (lookahead == '#') ADVANCE(316);
      if (lookahead == '<') ADVANCE(401);
      if (lookahead == 'C') ADVANCE(528);
      if (lookahead == 'D') ADVANCE(522);
      if (lookahead == 'G') ADVANCE(523);
      if (lookahead == 'H') ADVANCE(524);
      if (lookahead == 'L') ADVANCE(526);
      if (lookahead == 'O') ADVANCE(529);
      if (lookahead == 'P') ADVANCE(521);
      if (lookahead == 'T') ADVANCE(530);
      if (lookahead == 'U') ADVANCE(527);
      if (lookahead == 'V') ADVANCE(525);
      if (lookahead == '[') ADVANCE(411);
      if (lookahead == '\\') ADVANCE(520);
      if (lookahead == '`') ADVANCE(550);
      if (lookahead == 'f') ADVANCE(531);
      if (lookahead == 'n') ADVANCE(533);
      if (lookahead == 't') ADVANCE(532);
      if (lookahead == '{') ADVANCE(568);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(534);
      if (aux_sym_xml_string_token1_character_set_1(lookahead)) ADVANCE(519);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(534);
      if (lookahead != 0) ADVANCE(517);
      END_STATE();
    case 320:
      if (eof) ADVANCE(328);
      if (lookahead == '\n') SKIP(320)
      if (lookahead == '#') ADVANCE(316);
      if (lookahead == 'C') ADVANCE(545);
      if (lookahead == 'D') ADVANCE(541);
      if (lookahead == 'G') ADVANCE(538);
      if (lookahead == 'H') ADVANCE(539);
      if (lookahead == 'L') ADVANCE(543);
      if (lookahead == 'O') ADVANCE(546);
      if (lookahead == 'P') ADVANCE(535);
      if (lookahead == 'T') ADVANCE(547);
      if (lookahead == 'U') ADVANCE(544);
      if (lookahead == 'V') ADVANCE(542);
      if (lookahead == '\\') ADVANCE(520);
      if (aux_sym_xml_string_token1_character_set_1(lookahead)) ADVANCE(537);
      if (lookahead != 0) ADVANCE(517);
      END_STATE();
    case 321:
      if (eof) ADVANCE(328);
      if (lookahead == '!') ADVANCE(103);
      if (lookahead == '"') ADVANCE(572);
      if (lookahead == '#') ADVANCE(316);
      if (lookahead == '+') ADVANCE(608);
      if (lookahead == ',') ADVANCE(570);
      if (lookahead == '-') ADVANCE(609);
      if (lookahead == '.') ADVANCE(605);
      if (lookahead == ':') ADVANCE(512);
      if (lookahead == '<') ADVANCE(400);
      if (lookahead == '=') ADVANCE(104);
      if (lookahead == '>') ADVANCE(397);
      if (lookahead == '?') ADVANCE(105);
      if (lookahead == 'E') ADVANCE(607);
      if (lookahead == 'G') ADVANCE(117);
      if (lookahead == 'H') ADVANCE(118);
      if (lookahead == 'L') ADVANCE(133);
      if (lookahead == 'O') ADVANCE(155);
      if (lookahead == 'P') ADVANCE(108);
      if (lookahead == 'T') ADVANCE(157);
      if (lookahead == 'U') ADVANCE(143);
      if (lookahead == 'V') ADVANCE(132);
      if (lookahead == '[') ADVANCE(411);
      if (lookahead == '\\') ADVANCE(577);
      if (lookahead == ']') ADVANCE(412);
      if (lookahead == '`') ADVANCE(172);
      if (lookahead == 'b') ADVANCE(578);
      if (lookahead == 'e') ADVANCE(606);
      if (lookahead == 'f') ADVANCE(579);
      if (lookahead == 'g') ADVANCE(277);
      if (lookahead == 'h') ADVANCE(212);
      if (lookahead == 'i') ADVANCE(250);
      if (lookahead == 'j') ADVANCE(284);
      if (lookahead == 'l') ADVANCE(211);
      if (lookahead == 'm') ADVANCE(173);
      if (lookahead == 'n') ADVANCE(580);
      if (lookahead == 'r') ADVANCE(581);
      if (lookahead == 's') ADVANCE(228);
      if (lookahead == 't') ADVANCE(582);
      if (lookahead == 'u') ADVANCE(584);
      if (lookahead == 'v') ADVANCE(178);
      if (lookahead == 'x') ADVANCE(268);
      if (lookahead == '{') ADVANCE(568);
      if (lookahead == '}') ADVANCE(571);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'd')) ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(604);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(321)
      END_STATE();
    case 322:
      if (eof) ADVANCE(328);
      if (lookahead == '"') ADVANCE(572);
      if (lookahead == '#') ADVANCE(316);
      if (lookahead == '+') ADVANCE(608);
      if (lookahead == ',') ADVANCE(570);
      if (lookahead == '-') ADVANCE(609);
      if (lookahead == '.') ADVANCE(605);
      if (lookahead == 'C') ADVANCE(152);
      if (lookahead == 'D') ADVANCE(124);
      if (lookahead == 'E') ADVANCE(607);
      if (lookahead == 'G') ADVANCE(117);
      if (lookahead == 'H') ADVANCE(118);
      if (lookahead == 'L') ADVANCE(133);
      if (lookahead == 'O') ADVANCE(155);
      if (lookahead == 'P') ADVANCE(108);
      if (lookahead == 'T') ADVANCE(157);
      if (lookahead == 'U') ADVANCE(143);
      if (lookahead == 'V') ADVANCE(132);
      if (lookahead == '[') ADVANCE(411);
      if (lookahead == ']') ADVANCE(412);
      if (lookahead == 'e') ADVANCE(606);
      if (lookahead == 'f') ADVANCE(189);
      if (lookahead == 'n') ADVANCE(311);
      if (lookahead == 't') ADVANCE(280);
      if (lookahead == '{') ADVANCE(569);
      if (lookahead == '}') ADVANCE(571);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(610);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(323)
      END_STATE();
    case 323:
      if (eof) ADVANCE(328);
      if (lookahead == '"') ADVANCE(572);
      if (lookahead == '#') ADVANCE(316);
      if (lookahead == '+') ADVANCE(608);
      if (lookahead == ',') ADVANCE(570);
      if (lookahead == '-') ADVANCE(609);
      if (lookahead == '.') ADVANCE(605);
      if (lookahead == 'C') ADVANCE(152);
      if (lookahead == 'D') ADVANCE(124);
      if (lookahead == 'E') ADVANCE(607);
      if (lookahead == 'G') ADVANCE(117);
      if (lookahead == 'H') ADVANCE(118);
      if (lookahead == 'L') ADVANCE(133);
      if (lookahead == 'O') ADVANCE(155);
      if (lookahead == 'P') ADVANCE(108);
      if (lookahead == 'T') ADVANCE(157);
      if (lookahead == 'U') ADVANCE(143);
      if (lookahead == 'V') ADVANCE(132);
      if (lookahead == '[') ADVANCE(411);
      if (lookahead == ']') ADVANCE(412);
      if (lookahead == 'e') ADVANCE(606);
      if (lookahead == 'f') ADVANCE(189);
      if (lookahead == 'n') ADVANCE(311);
      if (lookahead == 't') ADVANCE(280);
      if (lookahead == '{') ADVANCE(568);
      if (lookahead == '}') ADVANCE(571);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(610);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(323)
      END_STATE();
    case 324:
      if (eof) ADVANCE(328);
      if (lookahead == '"') ADVANCE(572);
      if (lookahead == '#') ADVANCE(316);
      if (lookahead == '<') ADVANCE(401);
      if (lookahead == 'C') ADVANCE(67);
      if (lookahead == 'D') ADVANCE(37);
      if (lookahead == 'G') ADVANCE(38);
      if (lookahead == 'H') ADVANCE(39);
      if (lookahead == 'L') ADVANCE(50);
      if (lookahead == 'O') ADVANCE(72);
      if (lookahead == 'P') ADVANCE(29);
      if (lookahead == 'T') ADVANCE(74);
      if (lookahead == 'U') ADVANCE(61);
      if (lookahead == 'V') ADVANCE(49);
      if (lookahead == '[') ADVANCE(411);
      if (lookahead == '`') ADVANCE(172);
      if (lookahead == 'f') ADVANCE(85);
      if (lookahead == 'n') ADVANCE(94);
      if (lookahead == 't') ADVANCE(91);
      if (lookahead == '{') ADVANCE(569);
      if (lookahead == '}') ADVANCE(312);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(611);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(325)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 325:
      if (eof) ADVANCE(328);
      if (lookahead == '"') ADVANCE(572);
      if (lookahead == '#') ADVANCE(316);
      if (lookahead == '<') ADVANCE(401);
      if (lookahead == 'C') ADVANCE(67);
      if (lookahead == 'D') ADVANCE(37);
      if (lookahead == 'G') ADVANCE(38);
      if (lookahead == 'H') ADVANCE(39);
      if (lookahead == 'L') ADVANCE(50);
      if (lookahead == 'O') ADVANCE(72);
      if (lookahead == 'P') ADVANCE(29);
      if (lookahead == 'T') ADVANCE(74);
      if (lookahead == 'U') ADVANCE(61);
      if (lookahead == 'V') ADVANCE(49);
      if (lookahead == '[') ADVANCE(411);
      if (lookahead == '`') ADVANCE(172);
      if (lookahead == 'f') ADVANCE(85);
      if (lookahead == 'n') ADVANCE(94);
      if (lookahead == 't') ADVANCE(91);
      if (lookahead == '{') ADVANCE(568);
      if (lookahead == '}') ADVANCE(312);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(611);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(325)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 326:
      if (eof) ADVANCE(328);
      if (lookahead == '"') ADVANCE(572);
      if (lookahead == '#') ADVANCE(316);
      if (lookahead == '<') ADVANCE(401);
      if (lookahead == 'C') ADVANCE(454);
      if (lookahead == 'D') ADVANCE(424);
      if (lookahead == 'G') ADVANCE(425);
      if (lookahead == 'H') ADVANCE(426);
      if (lookahead == 'L') ADVANCE(437);
      if (lookahead == 'O') ADVANCE(459);
      if (lookahead == 'P') ADVANCE(416);
      if (lookahead == 'T') ADVANCE(461);
      if (lookahead == 'U') ADVANCE(448);
      if (lookahead == 'V') ADVANCE(436);
      if (lookahead == '[') ADVANCE(411);
      if (lookahead == '`') ADVANCE(172);
      if (lookahead == 'f') ADVANCE(472);
      if (lookahead == 'n') ADVANCE(481);
      if (lookahead == 't') ADVANCE(478);
      if (lookahead == '{') ADVANCE(569);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(506);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(327)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 327:
      if (eof) ADVANCE(328);
      if (lookahead == '"') ADVANCE(572);
      if (lookahead == '#') ADVANCE(316);
      if (lookahead == '<') ADVANCE(401);
      if (lookahead == 'C') ADVANCE(454);
      if (lookahead == 'D') ADVANCE(424);
      if (lookahead == 'G') ADVANCE(425);
      if (lookahead == 'H') ADVANCE(426);
      if (lookahead == 'L') ADVANCE(437);
      if (lookahead == 'O') ADVANCE(459);
      if (lookahead == 'P') ADVANCE(416);
      if (lookahead == 'T') ADVANCE(461);
      if (lookahead == 'U') ADVANCE(448);
      if (lookahead == 'V') ADVANCE(436);
      if (lookahead == '[') ADVANCE(411);
      if (lookahead == '`') ADVANCE(172);
      if (lookahead == 'f') ADVANCE(472);
      if (lookahead == 'n') ADVANCE(481);
      if (lookahead == 't') ADVANCE(478);
      if (lookahead == '{') ADVANCE(568);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(506);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(327)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(329);
      if (aux_sym_xml_string_token1_character_set_1(lookahead)) ADVANCE(518);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(330);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_uri);
      if (lookahead == '#') ADVANCE(332);
      if (lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(333);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_uri);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(616);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(332);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_uri);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(333);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(anon_sym_GET);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(anon_sym_GET);
      if (lookahead == ',') ADVANCE(615);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(anon_sym_GET);
      if (lookahead == ',') ADVANCE(615);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(anon_sym_HEAD);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(anon_sym_HEAD);
      if (lookahead == ',') ADVANCE(615);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(anon_sym_HEAD);
      if (lookahead == ',') ADVANCE(615);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(anon_sym_POST);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(anon_sym_POST);
      if (lookahead == ',') ADVANCE(615);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(anon_sym_POST);
      if (lookahead == ',') ADVANCE(615);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(anon_sym_PUT);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(anon_sym_PUT);
      if (lookahead == ',') ADVANCE(615);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(anon_sym_PUT);
      if (lookahead == ',') ADVANCE(615);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(anon_sym_DELETE);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(anon_sym_DELETE);
      if (lookahead == ',') ADVANCE(615);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(anon_sym_DELETE);
      if (lookahead == ',') ADVANCE(615);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(anon_sym_CONNECT);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(anon_sym_CONNECT);
      if (lookahead == ',') ADVANCE(615);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(anon_sym_CONNECT);
      if (lookahead == ',') ADVANCE(615);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(anon_sym_OPTIONS);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(anon_sym_OPTIONS);
      if (lookahead == ',') ADVANCE(615);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(anon_sym_OPTIONS);
      if (lookahead == ',') ADVANCE(615);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(anon_sym_TRACE);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(anon_sym_TRACE);
      if (lookahead == ',') ADVANCE(615);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(anon_sym_TRACE);
      if (lookahead == ',') ADVANCE(615);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(anon_sym_PATCH);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(anon_sym_PATCH);
      if (lookahead == ',') ADVANCE(615);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(anon_sym_PATCH);
      if (lookahead == ',') ADVANCE(615);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(anon_sym_LINK);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(anon_sym_LINK);
      if (lookahead == ',') ADVANCE(615);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(anon_sym_LINK);
      if (lookahead == ',') ADVANCE(615);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(anon_sym_UNLINK);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(anon_sym_UNLINK);
      if (lookahead == ',') ADVANCE(615);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(anon_sym_UNLINK);
      if (lookahead == ',') ADVANCE(615);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(anon_sym_PURGE);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(anon_sym_PURGE);
      if (lookahead == ',') ADVANCE(615);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(anon_sym_PURGE);
      if (lookahead == ',') ADVANCE(615);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(anon_sym_LOCK);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(anon_sym_LOCK);
      if (lookahead == ',') ADVANCE(615);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(anon_sym_LOCK);
      if (lookahead == ',') ADVANCE(615);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(anon_sym_UNLOCK);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(anon_sym_UNLOCK);
      if (lookahead == ',') ADVANCE(615);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(anon_sym_UNLOCK);
      if (lookahead == ',') ADVANCE(615);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(anon_sym_PROPFIND);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(anon_sym_PROPFIND);
      if (lookahead == ',') ADVANCE(615);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(anon_sym_PROPFIND);
      if (lookahead == ',') ADVANCE(615);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(anon_sym_VIEW);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(anon_sym_VIEW);
      if (lookahead == ',') ADVANCE(615);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(anon_sym_VIEW);
      if (lookahead == ',') ADVANCE(615);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(anon_sym_urlEncode);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(anon_sym_urlDecode);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(anon_sym_htmlEscape);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(anon_sym_htmlUnescape);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(anon_sym_status);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(anon_sym_url);
      if (lookahead == 'D') ADVANCE(213);
      if (lookahead == 'E') ADVANCE(259);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(anon_sym_header);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(anon_sym_xpath);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(anon_sym_jsonpath);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(anon_sym_variable);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(anon_sym_sha256);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(anon_sym_md5);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(anon_sym_greaterThan);
      if (lookahead == 'O') ADVANCE(283);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(anon_sym_greaterThanOrEquals);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(anon_sym_lessThan);
      if (lookahead == 'O') ADVANCE(279);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '/') ADVANCE(561);
      if (lookahead == '?') ADVANCE(553);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '?') ADVANCE(553);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(anon_sym_lessThanOrEquals);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(anon_sym_startsWith);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(anon_sym_matches);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(anon_sym_includes);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(anon_sym_isInteger);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(anon_sym_isFloat);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(anon_sym_isBoolean);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(anon_sym_isString);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(anon_sym_isCollection);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(aux_sym_section_type_token1);
      if (lookahead == ',') ADVANCE(615);
      if (lookahead == '/') ADVANCE(25);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(aux_sym_section_type_token1);
      if (lookahead == ',') ADVANCE(615);
      if (lookahead == 'A') ADVANCE(422);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(aux_sym_section_type_token1);
      if (lookahead == ',') ADVANCE(615);
      if (lookahead == 'A') ADVANCE(420);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(aux_sym_section_type_token1);
      if (lookahead == ',') ADVANCE(615);
      if (lookahead == 'A') ADVANCE(469);
      if (lookahead == 'O') ADVANCE(463);
      if (lookahead == 'R') ADVANCE(455);
      if (lookahead == 'U') ADVANCE(460);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(aux_sym_section_type_token1);
      if (lookahead == ',') ADVANCE(615);
      if (lookahead == 'C') ADVANCE(435);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(aux_sym_section_type_token1);
      if (lookahead == ',') ADVANCE(615);
      if (lookahead == 'C') ADVANCE(442);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(aux_sym_section_type_token1);
      if (lookahead == ',') ADVANCE(615);
      if (lookahead == 'C') ADVANCE(444);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(aux_sym_section_type_token1);
      if (lookahead == ',') ADVANCE(615);
      if (lookahead == 'C') ADVANCE(429);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(aux_sym_section_type_token1);
      if (lookahead == ',') ADVANCE(615);
      if (lookahead == 'C') ADVANCE(466);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(aux_sym_section_type_token1);
      if (lookahead == ',') ADVANCE(615);
      if (lookahead == 'D') ADVANCE(338);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(aux_sym_section_type_token1);
      if (lookahead == ',') ADVANCE(615);
      if (lookahead == 'D') ADVANCE(377);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(aux_sym_section_type_token1);
      if (lookahead == ',') ADVANCE(615);
      if (lookahead == 'E') ADVANCE(445);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(aux_sym_section_type_token1);
      if (lookahead == ',') ADVANCE(615);
      if (lookahead == 'E') ADVANCE(464);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(aux_sym_section_type_token1);
      if (lookahead == ',') ADVANCE(615);
      if (lookahead == 'E') ADVANCE(414);
      if (lookahead == 'T') ADVANCE(467);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(aux_sym_section_type_token1);
      if (lookahead == ',') ADVANCE(615);
      if (lookahead == 'E') ADVANCE(471);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(aux_sym_section_type_token1);
      if (lookahead == ',') ADVANCE(615);
      if (lookahead == 'E') ADVANCE(368);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(aux_sym_section_type_token1);
      if (lookahead == ',') ADVANCE(615);
      if (lookahead == 'E') ADVANCE(356);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(aux_sym_section_type_token1);
      if (lookahead == ',') ADVANCE(615);
      if (lookahead == 'E') ADVANCE(347);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(aux_sym_section_type_token1);
      if (lookahead == ',') ADVANCE(615);
      if (lookahead == 'E') ADVANCE(421);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(aux_sym_section_type_token1);
      if (lookahead == ',') ADVANCE(615);
      if (lookahead == 'E') ADVANCE(470);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(aux_sym_section_type_token1);
      if (lookahead == ',') ADVANCE(615);
      if (lookahead == 'F') ADVANCE(439);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(aux_sym_section_type_token1);
      if (lookahead == ',') ADVANCE(615);
      if (lookahead == 'G') ADVANCE(428);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(aux_sym_section_type_token1);
      if (lookahead == ',') ADVANCE(615);
      if (lookahead == 'H') ADVANCE(359);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(aux_sym_section_type_token1);
      if (lookahead == ',') ADVANCE(615);
      if (lookahead == 'I') ADVANCE(427);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(aux_sym_section_type_token1);
      if (lookahead == ',') ADVANCE(615);
      if (lookahead == 'I') ADVANCE(447);
      if (lookahead == 'O') ADVANCE(418);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(aux_sym_section_type_token1);
      if (lookahead == ',') ADVANCE(615);
      if (lookahead == 'I') ADVANCE(451);
      if (lookahead == 'O') ADVANCE(419);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(aux_sym_section_type_token1);
      if (lookahead == ',') ADVANCE(615);
      if (lookahead == 'I') ADVANCE(450);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(aux_sym_section_type_token1);
      if (lookahead == ',') ADVANCE(615);
      if (lookahead == 'I') ADVANCE(456);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(aux_sym_section_type_token1);
      if (lookahead == ',') ADVANCE(615);
      if (lookahead == 'K') ADVANCE(362);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(aux_sym_section_type_token1);
      if (lookahead == ',') ADVANCE(615);
      if (lookahead == 'K') ADVANCE(371);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(aux_sym_section_type_token1);
      if (lookahead == ',') ADVANCE(615);
      if (lookahead == 'K') ADVANCE(365);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(aux_sym_section_type_token1);
      if (lookahead == ',') ADVANCE(615);
      if (lookahead == 'K') ADVANCE(374);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(aux_sym_section_type_token1);
      if (lookahead == ',') ADVANCE(615);
      if (lookahead == 'L') ADVANCE(432);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(aux_sym_section_type_token1);
      if (lookahead == ',') ADVANCE(615);
      if (lookahead == 'L') ADVANCE(438);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(aux_sym_section_type_token1);
      if (lookahead == ',') ADVANCE(615);
      if (lookahead == 'N') ADVANCE(441);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(aux_sym_section_type_token1);
      if (lookahead == ',') ADVANCE(615);
      if (lookahead == 'N') ADVANCE(446);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(aux_sym_section_type_token1);
      if (lookahead == ',') ADVANCE(615);
      if (lookahead == 'N') ADVANCE(462);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(aux_sym_section_type_token1);
      if (lookahead == ',') ADVANCE(615);
      if (lookahead == 'N') ADVANCE(423);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(aux_sym_section_type_token1);
      if (lookahead == ',') ADVANCE(615);
      if (lookahead == 'N') ADVANCE(443);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(aux_sym_section_type_token1);
      if (lookahead == ',') ADVANCE(615);
      if (lookahead == 'N') ADVANCE(453);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(aux_sym_section_type_token1);
      if (lookahead == ',') ADVANCE(615);
      if (lookahead == 'N') ADVANCE(431);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(aux_sym_section_type_token1);
      if (lookahead == ',') ADVANCE(615);
      if (lookahead == 'O') ADVANCE(452);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(aux_sym_section_type_token1);
      if (lookahead == ',') ADVANCE(615);
      if (lookahead == 'O') ADVANCE(458);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(aux_sym_section_type_token1);
      if (lookahead == ',') ADVANCE(615);
      if (lookahead == 'O') ADVANCE(449);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(aux_sym_section_type_token1);
      if (lookahead == ',') ADVANCE(615);
      if (lookahead == 'P') ADVANCE(413);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(aux_sym_section_type_token1);
      if (lookahead == ',') ADVANCE(615);
      if (lookahead == 'P') ADVANCE(433);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(aux_sym_section_type_token1);
      if (lookahead == ',') ADVANCE(615);
      if (lookahead == 'P') ADVANCE(468);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(aux_sym_section_type_token1);
      if (lookahead == ',') ADVANCE(615);
      if (lookahead == 'R') ADVANCE(434);
      if (lookahead == 'T') ADVANCE(344);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(aux_sym_section_type_token1);
      if (lookahead == ',') ADVANCE(615);
      if (lookahead == 'R') ADVANCE(415);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(aux_sym_section_type_token1);
      if (lookahead == ',') ADVANCE(615);
      if (lookahead == 'S') ADVANCE(353);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(aux_sym_section_type_token1);
      if (lookahead == ',') ADVANCE(615);
      if (lookahead == 'S') ADVANCE(465);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(aux_sym_section_type_token1);
      if (lookahead == ',') ADVANCE(615);
      if (lookahead == 'T') ADVANCE(335);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(aux_sym_section_type_token1);
      if (lookahead == ',') ADVANCE(615);
      if (lookahead == 'T') ADVANCE(341);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(aux_sym_section_type_token1);
      if (lookahead == ',') ADVANCE(615);
      if (lookahead == 'T') ADVANCE(350);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(aux_sym_section_type_token1);
      if (lookahead == ',') ADVANCE(615);
      if (lookahead == 'T') ADVANCE(457);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(aux_sym_section_type_token1);
      if (lookahead == ',') ADVANCE(615);
      if (lookahead == 'T') ADVANCE(440);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(aux_sym_section_type_token1);
      if (lookahead == ',') ADVANCE(615);
      if (lookahead == 'T') ADVANCE(417);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(aux_sym_section_type_token1);
      if (lookahead == ',') ADVANCE(615);
      if (lookahead == 'T') ADVANCE(430);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(aux_sym_section_type_token1);
      if (lookahead == ',') ADVANCE(615);
      if (lookahead == 'W') ADVANCE(380);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(aux_sym_section_type_token1);
      if (lookahead == ',') ADVANCE(615);
      if (lookahead == 'a') ADVANCE(475);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(aux_sym_section_type_token1);
      if (lookahead == ',') ADVANCE(615);
      if (lookahead == 'e') ADVANCE(593);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(aux_sym_section_type_token1);
      if (lookahead == ',') ADVANCE(615);
      if (lookahead == 'e') ADVANCE(597);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(aux_sym_section_type_token1);
      if (lookahead == ',') ADVANCE(615);
      if (lookahead == 'l') ADVANCE(479);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(aux_sym_section_type_token1);
      if (lookahead == ',') ADVANCE(615);
      if (lookahead == 'l') ADVANCE(601);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(aux_sym_section_type_token1);
      if (lookahead == ',') ADVANCE(615);
      if (lookahead == 'l') ADVANCE(476);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(aux_sym_section_type_token1);
      if (lookahead == ',') ADVANCE(615);
      if (lookahead == 'r') ADVANCE(480);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(aux_sym_section_type_token1);
      if (lookahead == ',') ADVANCE(615);
      if (lookahead == 's') ADVANCE(474);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(aux_sym_section_type_token1);
      if (lookahead == ',') ADVANCE(615);
      if (lookahead == 'u') ADVANCE(473);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(aux_sym_section_type_token1);
      if (lookahead == ',') ADVANCE(615);
      if (lookahead == 'u') ADVANCE(477);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(aux_sym_section_type_token1);
      if (lookahead == ',') ADVANCE(615);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(aux_sym_section_type_token1);
      if (lookahead == 'a') ADVANCE(492);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(aux_sym_section_type_token1);
      if (lookahead == 'a') ADVANCE(490);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(aux_sym_section_type_token1);
      if (lookahead == 'e') ADVANCE(595);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(aux_sym_section_type_token1);
      if (lookahead == 'e') ADVANCE(599);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(aux_sym_section_type_token1);
      if (lookahead == 'e') ADVANCE(494);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(aux_sym_section_type_token1);
      if (lookahead == 'e') ADVANCE(498);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(aux_sym_section_type_token1);
      if (lookahead == 'l') ADVANCE(603);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(aux_sym_section_type_token1);
      if (lookahead == 'l') ADVANCE(500);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(aux_sym_section_type_token1);
      if (lookahead == 'l') ADVANCE(489);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(aux_sym_section_type_token1);
      if (lookahead == 'p') ADVANCE(501);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(aux_sym_section_type_token1);
      if (lookahead == 'r') ADVANCE(504);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(aux_sym_section_type_token1);
      if (lookahead == 'r') ADVANCE(502);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(aux_sym_section_type_token1);
      if (lookahead == 'r') ADVANCE(488);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(aux_sym_section_type_token1);
      if (lookahead == 's') ADVANCE(487);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(aux_sym_section_type_token1);
      if (lookahead == 's') ADVANCE(552);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(aux_sym_section_type_token1);
      if (lookahead == 's') ADVANCE(551);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(aux_sym_section_type_token1);
      if (lookahead == 's') ADVANCE(496);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(aux_sym_section_type_token1);
      if (lookahead == 's') ADVANCE(486);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(aux_sym_section_type_token1);
      if (lookahead == 't') ADVANCE(505);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(aux_sym_section_type_token1);
      if (lookahead == 't') ADVANCE(497);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(aux_sym_section_type_token1);
      if (lookahead == 'u') ADVANCE(491);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(aux_sym_section_type_token1);
      if (lookahead == 'u') ADVANCE(485);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(aux_sym_section_type_token1);
      if (lookahead == 'u') ADVANCE(495);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(aux_sym_section_type_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym_http_status_code);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(anon_sym_HTTP_SLASH1_DOT0);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(anon_sym_HTTP_SLASH1_DOT1);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(anon_sym_HTTP_SLASH2);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(anon_sym_HTTP_SLASH_STAR);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(aux_sym_key_value_token1);
      if (lookahead == ' ') ADVANCE(513);
      if (anon_sym_LF_character_set_1(lookahead)) ADVANCE(514);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == ' ') ADVANCE(513);
      if (lookahead == '#') ADVANCE(516);
      if (anon_sym_LF_character_set_1(lookahead)) ADVANCE(514);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(516);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == '#') ADVANCE(516);
      if (aux_sym_xml_string_token1_character_set_1(lookahead)) ADVANCE(515);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(516);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym_value);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(516);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym__char);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym__char);
      if (lookahead == '\n') ADVANCE(329);
      if (lookahead == '\\') ADVANCE(520);
      if (aux_sym_xml_string_token1_character_set_1(lookahead)) ADVANCE(518);
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(517);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym__char);
      if (lookahead == '"') ADVANCE(572);
      if (lookahead == '<') ADVANCE(401);
      if (lookahead == 'C') ADVANCE(528);
      if (lookahead == 'D') ADVANCE(522);
      if (lookahead == 'G') ADVANCE(523);
      if (lookahead == 'H') ADVANCE(524);
      if (lookahead == 'L') ADVANCE(526);
      if (lookahead == 'O') ADVANCE(529);
      if (lookahead == 'P') ADVANCE(521);
      if (lookahead == 'T') ADVANCE(530);
      if (lookahead == 'U') ADVANCE(527);
      if (lookahead == 'V') ADVANCE(525);
      if (lookahead == '[') ADVANCE(411);
      if (lookahead == '\\') ADVANCE(520);
      if (lookahead == '`') ADVANCE(550);
      if (lookahead == 'f') ADVANCE(531);
      if (lookahead == 'n') ADVANCE(533);
      if (lookahead == 't') ADVANCE(532);
      if (lookahead == '{') ADVANCE(568);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(534);
      if (aux_sym_xml_string_token1_character_set_1(lookahead)) ADVANCE(519);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(534);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(517);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym__char);
      if (lookahead == '#') ADVANCE(517);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym__char);
      if (lookahead == ',') ADVANCE(615);
      if (lookahead == 'A') ADVANCE(82);
      if (lookahead == 'O') ADVANCE(76);
      if (lookahead == 'R') ADVANCE(68);
      if (lookahead == 'U') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym__char);
      if (lookahead == ',') ADVANCE(615);
      if (lookahead == 'E') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym__char);
      if (lookahead == ',') ADVANCE(615);
      if (lookahead == 'E') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym__char);
      if (lookahead == ',') ADVANCE(615);
      if (lookahead == 'E') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym__char);
      if (lookahead == ',') ADVANCE(615);
      if (lookahead == 'I') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym__char);
      if (lookahead == ',') ADVANCE(615);
      if (lookahead == 'I') ADVANCE(60);
      if (lookahead == 'O') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym__char);
      if (lookahead == ',') ADVANCE(615);
      if (lookahead == 'N') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym__char);
      if (lookahead == ',') ADVANCE(615);
      if (lookahead == 'O') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym__char);
      if (lookahead == ',') ADVANCE(615);
      if (lookahead == 'P') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym__char);
      if (lookahead == ',') ADVANCE(615);
      if (lookahead == 'R') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym__char);
      if (lookahead == ',') ADVANCE(615);
      if (lookahead == 'a') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym__char);
      if (lookahead == ',') ADVANCE(615);
      if (lookahead == 'r') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym__char);
      if (lookahead == ',') ADVANCE(615);
      if (lookahead == 'u') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym__char);
      if (lookahead == ',') ADVANCE(615);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym__char);
      if (lookahead == 'A') ADVANCE(165);
      if (lookahead == 'O') ADVANCE(159);
      if (lookahead == 'R') ADVANCE(150);
      if (lookahead == 'U') ADVANCE(156);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym__char);
      if (lookahead == 'C') ADVANCE(545);
      if (lookahead == 'D') ADVANCE(541);
      if (lookahead == 'G') ADVANCE(538);
      if (lookahead == 'H') ADVANCE(540);
      if (lookahead == 'L') ADVANCE(543);
      if (lookahead == 'O') ADVANCE(546);
      if (lookahead == 'P') ADVANCE(535);
      if (lookahead == 'T') ADVANCE(547);
      if (lookahead == 'U') ADVANCE(544);
      if (lookahead == 'V') ADVANCE(542);
      if (lookahead == '\\') ADVANCE(520);
      if (aux_sym_xml_string_token1_character_set_1(lookahead)) ADVANCE(536);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(517);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym__char);
      if (lookahead == 'C') ADVANCE(545);
      if (lookahead == 'D') ADVANCE(541);
      if (lookahead == 'G') ADVANCE(538);
      if (lookahead == 'H') ADVANCE(539);
      if (lookahead == 'L') ADVANCE(543);
      if (lookahead == 'O') ADVANCE(546);
      if (lookahead == 'P') ADVANCE(535);
      if (lookahead == 'T') ADVANCE(547);
      if (lookahead == 'U') ADVANCE(544);
      if (lookahead == 'V') ADVANCE(542);
      if (lookahead == '\\') ADVANCE(520);
      if (aux_sym_xml_string_token1_character_set_1(lookahead)) ADVANCE(537);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(517);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym__char);
      if (lookahead == 'E') ADVANCE(160);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym__char);
      if (lookahead == 'E') ADVANCE(106);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym__char);
      if (lookahead == 'E') ADVANCE(106);
      if (lookahead == 'T') ADVANCE(163);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym__char);
      if (lookahead == 'E') ADVANCE(141);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym__char);
      if (lookahead == 'I') ADVANCE(119);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym__char);
      if (lookahead == 'I') ADVANCE(144);
      if (lookahead == 'O') ADVANCE(111);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym__char);
      if (lookahead == 'N') ADVANCE(142);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym__char);
      if (lookahead == 'O') ADVANCE(149);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym__char);
      if (lookahead == 'P') ADVANCE(164);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym__char);
      if (lookahead == 'R') ADVANCE(107);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym__char);
      if (lookahead == '\\') ADVANCE(520);
      if (lookahead == '`') ADVANCE(550);
      if (aux_sym_xml_string_token1_character_set_1(lookahead)) ADVANCE(548);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(517);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym__char);
      if (lookahead == '\\') ADVANCE(520);
      if (aux_sym_xml_string_token1_character_set_1(lookahead)) ADVANCE(549);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(517);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym__char);
      if (lookahead == '`') ADVANCE(171);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(anon_sym_Captures);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(anon_sym_Asserts);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(anon_sym_LT_QMARK);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(aux_sym_xml_prolog_tag_token1);
      if (lookahead == '\n') ADVANCE(556);
      if (lookahead == '?') ADVANCE(616);
      if (lookahead != 0) ADVANCE(554);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(aux_sym_xml_prolog_tag_token1);
      if (lookahead == '#') ADVANCE(554);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) ADVANCE(555);
      if (lookahead != 0 &&
          lookahead != '?') ADVANCE(556);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(aux_sym_xml_prolog_tag_token1);
      if (lookahead != 0 &&
          lookahead != '?') ADVANCE(556);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(anon_sym_QMARK_GT);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(aux_sym_xml_open_tag_token1);
      if (lookahead == '\n') ADVANCE(560);
      if (lookahead == '>') ADVANCE(616);
      if (lookahead != 0) ADVANCE(558);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(aux_sym_xml_open_tag_token1);
      if (lookahead == '#') ADVANCE(558);
      if (lookahead == '>') ADVANCE(560);
      if (lookahead == '/' ||
          lookahead == '?') ADVANCE(560);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) ADVANCE(559);
      if (lookahead != 0) ADVANCE(560);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(aux_sym_xml_open_tag_token1);
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(560);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(anon_sym_LT_SLASH);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(aux_sym_xml_close_tag_token1);
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '/' ||
          lookahead == '>') ADVANCE(616);
      if (lookahead != 0) ADVANCE(562);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(aux_sym_xml_close_tag_token1);
      if (lookahead == '#') ADVANCE(562);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) ADVANCE(563);
      if (lookahead != 0 &&
          lookahead != '/' &&
          lookahead != '>') ADVANCE(564);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(aux_sym_xml_close_tag_token1);
      if (lookahead != 0 &&
          lookahead != '/' &&
          lookahead != '>') ADVANCE(564);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(aux_sym_xml_string_token1);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(aux_sym_xml_string_token1);
      if (lookahead == '#') ADVANCE(567);
      if (lookahead == '<') ADVANCE(400);
      if (aux_sym_xml_string_token1_character_set_1(lookahead)) ADVANCE(566);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(565);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(aux_sym_xml_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(616);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '{') ADVANCE(585);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(aux_sym_json_string_text_token1);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(aux_sym_json_string_text_token1);
      if (lookahead == '#') ADVANCE(576);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) ADVANCE(574);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(573);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(aux_sym_json_string_text_token1);
      if (lookahead == '{') ADVANCE(585);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(aux_sym_json_string_text_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(616);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(anon_sym_b);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(anon_sym_f);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(anon_sym_n);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(anon_sym_r);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(anon_sym_t);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(anon_sym_u);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(anon_sym_u);
      if (lookahead == 'r') ADVANCE(236);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(aux_sym_template_token1);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(aux_sym_template_token1);
      if (lookahead == '#') ADVANCE(590);
      if (lookahead == '}') ADVANCE(588);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) ADVANCE(587);
      if (lookahead != 0) ADVANCE(586);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(aux_sym_template_token1);
      if (lookahead == '}') ADVANCE(313);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(aux_sym_template_token1);
      if (lookahead == '}') ADVANCE(589);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(aux_sym_template_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(616);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == ',') ADVANCE(615);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == ',') ADVANCE(615);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == ',') ADVANCE(615);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == ',') ADVANCE(615);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(sym_null);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(sym_null);
      if (lookahead == ',') ADVANCE(615);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(sym_null);
      if (lookahead == ',') ADVANCE(615);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(sym_null);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(sym_hexdigit);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(anon_sym_e);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(anon_sym_E);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(aux_sym_digit_token1);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(aux_sym_digit_token1);
      if (lookahead == ',') ADVANCE(615);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(sym_multiline_string_type);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(613);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(anon_sym_BQUOTE_BQUOTE_BQUOTE);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(sym_bodyTag);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(616);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 322},
  [2] = {.lex_state = 324},
  [3] = {.lex_state = 324},
  [4] = {.lex_state = 324},
  [5] = {.lex_state = 324},
  [6] = {.lex_state = 326},
  [7] = {.lex_state = 326},
  [8] = {.lex_state = 326},
  [9] = {.lex_state = 326},
  [10] = {.lex_state = 326},
  [11] = {.lex_state = 324},
  [12] = {.lex_state = 324},
  [13] = {.lex_state = 326},
  [14] = {.lex_state = 326},
  [15] = {.lex_state = 326},
  [16] = {.lex_state = 326},
  [17] = {.lex_state = 324},
  [18] = {.lex_state = 318},
  [19] = {.lex_state = 318},
  [20] = {.lex_state = 326},
  [21] = {.lex_state = 318},
  [22] = {.lex_state = 318},
  [23] = {.lex_state = 322},
  [24] = {.lex_state = 322},
  [25] = {.lex_state = 322},
  [26] = {.lex_state = 322},
  [27] = {.lex_state = 317},
  [28] = {.lex_state = 322},
  [29] = {.lex_state = 317},
  [30] = {.lex_state = 322},
  [31] = {.lex_state = 322},
  [32] = {.lex_state = 322},
  [33] = {.lex_state = 322},
  [34] = {.lex_state = 317},
  [35] = {.lex_state = 322},
  [36] = {.lex_state = 9},
  [37] = {.lex_state = 322},
  [38] = {.lex_state = 322},
  [39] = {.lex_state = 322},
  [40] = {.lex_state = 322},
  [41] = {.lex_state = 320},
  [42] = {.lex_state = 322},
  [43] = {.lex_state = 322},
  [44] = {.lex_state = 322},
  [45] = {.lex_state = 322},
  [46] = {.lex_state = 322},
  [47] = {.lex_state = 322},
  [48] = {.lex_state = 322},
  [49] = {.lex_state = 322},
  [50] = {.lex_state = 322},
  [51] = {.lex_state = 322},
  [52] = {.lex_state = 322},
  [53] = {.lex_state = 322},
  [54] = {.lex_state = 322},
  [55] = {.lex_state = 322},
  [56] = {.lex_state = 322},
  [57] = {.lex_state = 322},
  [58] = {.lex_state = 322},
  [59] = {.lex_state = 322},
  [60] = {.lex_state = 320},
  [61] = {.lex_state = 322},
  [62] = {.lex_state = 322},
  [63] = {.lex_state = 322},
  [64] = {.lex_state = 11},
  [65] = {.lex_state = 322},
  [66] = {.lex_state = 322},
  [67] = {.lex_state = 322},
  [68] = {.lex_state = 320},
  [69] = {.lex_state = 322},
  [70] = {.lex_state = 322},
  [71] = {.lex_state = 322},
  [72] = {.lex_state = 14},
  [73] = {.lex_state = 1},
  [74] = {.lex_state = 14},
  [75] = {.lex_state = 1},
  [76] = {.lex_state = 1},
  [77] = {.lex_state = 1},
  [78] = {.lex_state = 14},
  [79] = {.lex_state = 14},
  [80] = {.lex_state = 14},
  [81] = {.lex_state = 1},
  [82] = {.lex_state = 322},
  [83] = {.lex_state = 322},
  [84] = {.lex_state = 14},
  [85] = {.lex_state = 14},
  [86] = {.lex_state = 13},
  [87] = {.lex_state = 322},
  [88] = {.lex_state = 322},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 322},
  [92] = {.lex_state = 322},
  [93] = {.lex_state = 2},
  [94] = {.lex_state = 2},
  [95] = {.lex_state = 322},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 322},
  [98] = {.lex_state = 14},
  [99] = {.lex_state = 2},
  [100] = {.lex_state = 3},
  [101] = {.lex_state = 3},
  [102] = {.lex_state = 1},
  [103] = {.lex_state = 2},
  [104] = {.lex_state = 322},
  [105] = {.lex_state = 322},
  [106] = {.lex_state = 14},
  [107] = {.lex_state = 1},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 15},
  [110] = {.lex_state = 14},
  [111] = {.lex_state = 1},
  [112] = {.lex_state = 14},
  [113] = {.lex_state = 1},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 14},
  [117] = {.lex_state = 1},
  [118] = {.lex_state = 1},
  [119] = {.lex_state = 1},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 4},
  [127] = {.lex_state = 322},
  [128] = {.lex_state = 4},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 4},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 5},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 4},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 322},
  [141] = {.lex_state = 322},
  [142] = {.lex_state = 322},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 4},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 2},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 17},
  [157] = {.lex_state = 7},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 324},
  [161] = {.lex_state = 20},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 16},
  [164] = {.lex_state = 21},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 16},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 16},
  [171] = {.lex_state = 6},
  [172] = {.lex_state = 6},
  [173] = {.lex_state = 19},
  [174] = {.lex_state = 6},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 6},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 6},
  [179] = {.lex_state = 16},
  [180] = {.lex_state = 22},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 23},
  [183] = {.lex_state = 13},
  [184] = {.lex_state = 6},
  [185] = {.lex_state = 13},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 21},
  [191] = {.lex_state = 324},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 24},
  [195] = {.lex_state = 6},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 324},
  [198] = {.lex_state = 8},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 20},
  [201] = {.lex_state = 22},
  [202] = {.lex_state = 24},
  [203] = {.lex_state = 22},
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
    [sym_hurl_file] = STATE(193),
    [sym_entry] = STATE(37),
    [sym_request] = STATE(33),
    [sym_header] = STATE(3),
    [sym_method] = STATE(190),
    [aux_sym_hurl_file_repeat1] = STATE(37),
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
  [0] = 24,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(17), 1,
      anon_sym_LT_QMARK,
    ACTIONS(19), 1,
      anon_sym_LBRACE,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(27), 1,
      sym_null,
    ACTIONS(29), 1,
      aux_sym_digit_token1,
    ACTIONS(31), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(33), 1,
      sym_bodyTag,
    STATE(9), 1,
      sym_section_header,
    STATE(26), 1,
      sym_integer,
    STATE(38), 1,
      sym_xml_tag,
    STATE(51), 1,
      sym_body,
    STATE(77), 1,
      sym_xml_open_tag,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(11), 2,
      sym_section,
      aux_sym_request_repeat1,
    STATE(24), 2,
      sym_digit,
      aux_sym_fraction_repeat1,
    STATE(96), 2,
      sym_xml_prolog_tag,
      aux_sym_xml_repeat1,
    STATE(48), 3,
      sym_xml,
      sym_json_value,
      sym_multiline_string,
    ACTIONS(9), 5,
      ts_builtin_sym_end,
      anon_sym_HTTP_SLASH1_DOT0,
      anon_sym_HTTP_SLASH1_DOT1,
      anon_sym_HTTP_SLASH2,
      anon_sym_HTTP_SLASH_STAR,
    STATE(63), 6,
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
  [103] = 24,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(17), 1,
      anon_sym_LT_QMARK,
    ACTIONS(19), 1,
      anon_sym_LBRACE,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(27), 1,
      sym_null,
    ACTIONS(29), 1,
      aux_sym_digit_token1,
    ACTIONS(31), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(33), 1,
      sym_bodyTag,
    STATE(9), 1,
      sym_section_header,
    STATE(26), 1,
      sym_integer,
    STATE(38), 1,
      sym_xml_tag,
    STATE(59), 1,
      sym_body,
    STATE(77), 1,
      sym_xml_open_tag,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(2), 2,
      sym_section,
      aux_sym_request_repeat1,
    STATE(24), 2,
      sym_digit,
      aux_sym_fraction_repeat1,
    STATE(96), 2,
      sym_xml_prolog_tag,
      aux_sym_xml_repeat1,
    STATE(48), 3,
      sym_xml,
      sym_json_value,
      sym_multiline_string,
    ACTIONS(35), 5,
      ts_builtin_sym_end,
      anon_sym_HTTP_SLASH1_DOT0,
      anon_sym_HTTP_SLASH1_DOT1,
      anon_sym_HTTP_SLASH2,
      anon_sym_HTTP_SLASH_STAR,
    STATE(63), 6,
      sym_json_object,
      sym_json_array,
      sym_json_string,
      sym_json_number,
      sym_template,
      sym_boolean,
    ACTIONS(37), 16,
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
  [206] = 24,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_LT,
    ACTIONS(17), 1,
      anon_sym_LT_QMARK,
    ACTIONS(19), 1,
      anon_sym_LBRACE,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(27), 1,
      sym_null,
    ACTIONS(29), 1,
      aux_sym_digit_token1,
    ACTIONS(31), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(39), 1,
      ts_builtin_sym_end,
    ACTIONS(43), 1,
      anon_sym_LBRACK,
    ACTIONS(45), 1,
      sym_bodyTag,
    STATE(9), 1,
      sym_section_header,
    STATE(26), 1,
      sym_integer,
    STATE(38), 1,
      sym_xml_tag,
    STATE(70), 1,
      sym_body,
    STATE(77), 1,
      sym_xml_open_tag,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(24), 2,
      sym_digit,
      aux_sym_fraction_repeat1,
    STATE(96), 2,
      sym_xml_prolog_tag,
      aux_sym_xml_repeat1,
    STATE(48), 3,
      sym_xml,
      sym_json_value,
      sym_multiline_string,
    STATE(5), 4,
      sym_section,
      sym_capture_section,
      sym_assert_section,
      aux_sym_response_repeat1,
    STATE(63), 6,
      sym_json_object,
      sym_json_array,
      sym_json_string,
      sym_json_number,
      sym_template,
      sym_boolean,
    ACTIONS(41), 16,
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
  [307] = 24,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_LT,
    ACTIONS(17), 1,
      anon_sym_LT_QMARK,
    ACTIONS(19), 1,
      anon_sym_LBRACE,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(27), 1,
      sym_null,
    ACTIONS(29), 1,
      aux_sym_digit_token1,
    ACTIONS(31), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(43), 1,
      anon_sym_LBRACK,
    ACTIONS(45), 1,
      sym_bodyTag,
    ACTIONS(47), 1,
      ts_builtin_sym_end,
    STATE(9), 1,
      sym_section_header,
    STATE(26), 1,
      sym_integer,
    STATE(38), 1,
      sym_xml_tag,
    STATE(69), 1,
      sym_body,
    STATE(77), 1,
      sym_xml_open_tag,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(24), 2,
      sym_digit,
      aux_sym_fraction_repeat1,
    STATE(96), 2,
      sym_xml_prolog_tag,
      aux_sym_xml_repeat1,
    STATE(48), 3,
      sym_xml,
      sym_json_value,
      sym_multiline_string,
    STATE(12), 4,
      sym_section,
      sym_capture_section,
      sym_assert_section,
      aux_sym_response_repeat1,
    STATE(63), 6,
      sym_json_object,
      sym_json_array,
      sym_json_string,
      sym_json_number,
      sym_template,
      sym_boolean,
    ACTIONS(49), 16,
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
  [408] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 1,
      aux_sym_section_type_token1,
    STATE(17), 1,
      sym_headers,
    STATE(188), 1,
      sym_key,
    STATE(7), 2,
      sym_key_value,
      aux_sym_headers_repeat1,
    ACTIONS(51), 11,
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
    ACTIONS(53), 22,
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
  [462] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 1,
      aux_sym_section_type_token1,
    STATE(188), 1,
      sym_key,
    STATE(8), 2,
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
  [513] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      aux_sym_section_type_token1,
    STATE(188), 1,
      sym_key,
    STATE(8), 2,
      sym_key_value,
      aux_sym_headers_repeat1,
    ACTIONS(61), 11,
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
    ACTIONS(63), 22,
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
  [564] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 1,
      aux_sym_section_type_token1,
    STATE(188), 1,
      sym_key,
    STATE(10), 2,
      sym_key_value,
      aux_sym_headers_repeat1,
    ACTIONS(68), 11,
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
    ACTIONS(70), 22,
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
  [615] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 1,
      aux_sym_section_type_token1,
    STATE(188), 1,
      sym_key,
    STATE(8), 2,
      sym_key_value,
      aux_sym_headers_repeat1,
    ACTIONS(72), 11,
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
    ACTIONS(74), 22,
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
  [666] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(80), 1,
      anon_sym_LBRACK,
    STATE(9), 1,
      sym_section_header,
    STATE(11), 2,
      sym_section,
      aux_sym_request_repeat1,
    ACTIONS(76), 10,
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
    ACTIONS(78), 22,
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
  [716] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(87), 1,
      anon_sym_LBRACK,
    STATE(9), 1,
      sym_section_header,
    STATE(12), 4,
      sym_section,
      sym_capture_section,
      sym_assert_section,
      aux_sym_response_repeat1,
    ACTIONS(83), 6,
      ts_builtin_sym_end,
      anon_sym_LT_QMARK,
      anon_sym_DQUOTE,
      anon_sym_LBRACE_LBRACE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_bodyTag,
    ACTIONS(85), 22,
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
  [764] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(90), 11,
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
    ACTIONS(92), 23,
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
      aux_sym_section_type_token1,
      anon_sym_LBRACE,
      anon_sym_true,
      anon_sym_false,
      sym_null,
      aux_sym_digit_token1,
  [806] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(94), 11,
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
    ACTIONS(96), 23,
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
      aux_sym_section_type_token1,
      anon_sym_LBRACE,
      anon_sym_true,
      anon_sym_false,
      sym_null,
      aux_sym_digit_token1,
  [848] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 11,
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
    ACTIONS(100), 23,
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
      aux_sym_section_type_token1,
      anon_sym_LBRACE,
      anon_sym_true,
      anon_sym_false,
      sym_null,
      aux_sym_digit_token1,
  [890] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 1,
      aux_sym_section_type_token1,
    STATE(188), 1,
      sym_key,
    STATE(20), 2,
      sym_key_value,
      aux_sym_headers_repeat1,
    ACTIONS(102), 7,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_LT_QMARK,
      anon_sym_DQUOTE,
      anon_sym_LBRACE_LBRACE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_bodyTag,
    ACTIONS(104), 22,
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
  [937] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 11,
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
    ACTIONS(108), 22,
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
  [978] = 6,
    ACTIONS(114), 1,
      sym__char,
    ACTIONS(117), 1,
      sym_comment,
    STATE(126), 1,
      aux_sym__line_repeat1,
    ACTIONS(110), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACE_LBRACE,
    STATE(18), 2,
      sym__line,
      aux_sym_assert_section_repeat1,
    ACTIONS(112), 27,
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
      anon_sym_LT_QMARK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_true,
      anon_sym_false,
      sym_null,
      aux_sym_digit_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_bodyTag,
  [1025] = 6,
    ACTIONS(117), 1,
      sym_comment,
    ACTIONS(123), 1,
      sym__char,
    STATE(126), 1,
      aux_sym__line_repeat1,
    ACTIONS(119), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACE_LBRACE,
    STATE(21), 2,
      sym__line,
      aux_sym_assert_section_repeat1,
    ACTIONS(121), 27,
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
      anon_sym_LT_QMARK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_true,
      anon_sym_false,
      sym_null,
      aux_sym_digit_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_bodyTag,
  [1072] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 1,
      aux_sym_section_type_token1,
    STATE(188), 1,
      sym_key,
    STATE(8), 2,
      sym_key_value,
      aux_sym_headers_repeat1,
    ACTIONS(125), 7,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_LT_QMARK,
      anon_sym_DQUOTE,
      anon_sym_LBRACE_LBRACE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_bodyTag,
    ACTIONS(127), 22,
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
  [1119] = 6,
    ACTIONS(117), 1,
      sym_comment,
    ACTIONS(123), 1,
      sym__char,
    STATE(126), 1,
      aux_sym__line_repeat1,
    ACTIONS(129), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACE_LBRACE,
    STATE(18), 2,
      sym__line,
      aux_sym_assert_section_repeat1,
    ACTIONS(131), 27,
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
      anon_sym_LT_QMARK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_true,
      anon_sym_false,
      sym_null,
      aux_sym_digit_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_bodyTag,
  [1166] = 3,
    ACTIONS(117), 1,
      sym_comment,
    ACTIONS(133), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(135), 28,
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
      anon_sym_LT_QMARK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_true,
      anon_sym_false,
      sym_null,
      aux_sym_digit_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_bodyTag,
  [1204] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(139), 1,
      aux_sym_digit_token1,
    STATE(23), 2,
      sym_digit,
      aux_sym_fraction_repeat1,
    ACTIONS(137), 24,
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
  [1241] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(144), 1,
      aux_sym_digit_token1,
    STATE(23), 2,
      sym_digit,
      aux_sym_fraction_repeat1,
    ACTIONS(142), 24,
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
  [1278] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(144), 1,
      aux_sym_digit_token1,
    STATE(23), 2,
      sym_digit,
      aux_sym_fraction_repeat1,
    ACTIONS(146), 23,
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
  [1314] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(150), 1,
      anon_sym_DOT,
    STATE(30), 1,
      sym_fraction,
    STATE(52), 1,
      sym_exponent,
    ACTIONS(152), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(148), 21,
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
  [1354] = 6,
    ACTIONS(117), 1,
      sym_comment,
    ACTIONS(154), 1,
      ts_builtin_sym_end,
    ACTIONS(158), 1,
      sym__char,
    STATE(137), 1,
      aux_sym__line_repeat1,
    STATE(29), 2,
      sym__line,
      aux_sym_assert_section_repeat1,
    ACTIONS(156), 20,
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
  [1393] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(160), 25,
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
  [1424] = 6,
    ACTIONS(110), 1,
      ts_builtin_sym_end,
    ACTIONS(117), 1,
      sym_comment,
    ACTIONS(162), 1,
      sym__char,
    STATE(137), 1,
      aux_sym__line_repeat1,
    STATE(29), 2,
      sym__line,
      aux_sym_assert_section_repeat1,
    ACTIONS(112), 20,
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
  [1463] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(49), 1,
      sym_exponent,
    ACTIONS(152), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(165), 21,
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
  [1497] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(144), 1,
      aux_sym_digit_token1,
    STATE(23), 2,
      sym_digit,
      aux_sym_fraction_repeat1,
    ACTIONS(167), 21,
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
  [1531] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(144), 1,
      aux_sym_digit_token1,
    STATE(23), 2,
      sym_digit,
      aux_sym_fraction_repeat1,
    ACTIONS(169), 21,
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
  [1565] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(71), 1,
      sym_response,
    STATE(183), 1,
      sym_http_version,
    ACTIONS(173), 4,
      anon_sym_HTTP_SLASH1_DOT0,
      anon_sym_HTTP_SLASH1_DOT1,
      anon_sym_HTTP_SLASH2,
      anon_sym_HTTP_SLASH_STAR,
    ACTIONS(171), 17,
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
  [1600] = 3,
    ACTIONS(117), 1,
      sym_comment,
    ACTIONS(133), 1,
      ts_builtin_sym_end,
    ACTIONS(135), 21,
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
  [1630] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 1,
      ts_builtin_sym_end,
    STATE(3), 1,
      sym_header,
    STATE(33), 1,
      sym_request,
    STATE(190), 1,
      sym_method,
    STATE(35), 2,
      sym_entry,
      aux_sym_hurl_file_repeat1,
    ACTIONS(177), 16,
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
  [1668] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(180), 1,
      anon_sym_LBRACK,
    ACTIONS(182), 1,
      aux_sym_section_type_token1,
    ACTIONS(184), 1,
      anon_sym_Captures,
    ACTIONS(186), 1,
      anon_sym_Asserts,
    ACTIONS(188), 1,
      anon_sym_LBRACE,
    ACTIONS(190), 1,
      anon_sym_DQUOTE,
    ACTIONS(192), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(196), 1,
      sym_null,
    ACTIONS(198), 1,
      aux_sym_digit_token1,
    STATE(87), 1,
      sym_integer,
    STATE(144), 1,
      sym_json_value,
    STATE(181), 1,
      sym_section_type,
    ACTIONS(194), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(82), 2,
      sym_digit,
      aux_sym_fraction_repeat1,
    STATE(148), 6,
      sym_json_object,
      sym_json_array,
      sym_json_string,
      sym_json_number,
      sym_template,
      sym_boolean,
  [1724] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(200), 1,
      ts_builtin_sym_end,
    STATE(3), 1,
      sym_header,
    STATE(33), 1,
      sym_request,
    STATE(190), 1,
      sym_method,
    STATE(35), 2,
      sym_entry,
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
  [1762] = 2,
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
  [1789] = 2,
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
  [1816] = 2,
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
  [1843] = 6,
    ACTIONS(117), 1,
      sym_comment,
    ACTIONS(154), 1,
      ts_builtin_sym_end,
    ACTIONS(208), 1,
      sym__char,
    STATE(128), 1,
      aux_sym__line_repeat1,
    STATE(60), 2,
      sym__line,
      aux_sym_assert_section_repeat1,
    ACTIONS(156), 16,
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
  [1878] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(210), 21,
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
  [1905] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(212), 21,
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
  [1932] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 21,
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
  [1959] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 21,
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
  [1986] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(218), 21,
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
  [2013] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(220), 21,
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
  [2040] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(222), 21,
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
  [2067] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 21,
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
  [2094] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(226), 21,
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
  [2121] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(228), 21,
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
  [2148] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 21,
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
  [2175] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(230), 21,
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
  [2202] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 21,
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
  [2229] = 2,
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
  [2256] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(236), 21,
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
  [2283] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(238), 21,
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
  [2310] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(240), 21,
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
  [2337] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 21,
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
  [2364] = 6,
    ACTIONS(110), 1,
      ts_builtin_sym_end,
    ACTIONS(117), 1,
      sym_comment,
    ACTIONS(242), 1,
      sym__char,
    STATE(128), 1,
      aux_sym__line_repeat1,
    STATE(60), 2,
      sym__line,
      aux_sym_assert_section_repeat1,
    ACTIONS(112), 16,
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
  [2399] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(245), 21,
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
  [2426] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(247), 21,
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
  [2453] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(249), 21,
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
  [2480] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(180), 1,
      anon_sym_LBRACK,
    ACTIONS(182), 1,
      aux_sym_section_type_token1,
    ACTIONS(188), 1,
      anon_sym_LBRACE,
    ACTIONS(190), 1,
      anon_sym_DQUOTE,
    ACTIONS(192), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(196), 1,
      sym_null,
    ACTIONS(198), 1,
      aux_sym_digit_token1,
    STATE(87), 1,
      sym_integer,
    STATE(144), 1,
      sym_json_value,
    STATE(181), 1,
      sym_section_type,
    ACTIONS(194), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(82), 2,
      sym_digit,
      aux_sym_fraction_repeat1,
    STATE(148), 6,
      sym_json_object,
      sym_json_array,
      sym_json_string,
      sym_json_number,
      sym_template,
      sym_boolean,
  [2530] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(180), 1,
      anon_sym_LBRACK,
    ACTIONS(188), 1,
      anon_sym_LBRACE,
    ACTIONS(190), 1,
      anon_sym_DQUOTE,
    ACTIONS(192), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(253), 1,
      sym_null,
    ACTIONS(255), 1,
      aux_sym_digit_token1,
    STATE(87), 1,
      sym_integer,
    STATE(159), 1,
      sym_json_value,
    ACTIONS(251), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(82), 2,
      sym_digit,
      aux_sym_fraction_repeat1,
    STATE(148), 6,
      sym_json_object,
      sym_json_array,
      sym_json_string,
      sym_json_number,
      sym_template,
      sym_boolean,
  [2574] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(180), 1,
      anon_sym_LBRACK,
    ACTIONS(188), 1,
      anon_sym_LBRACE,
    ACTIONS(190), 1,
      anon_sym_DQUOTE,
    ACTIONS(192), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(253), 1,
      sym_null,
    ACTIONS(255), 1,
      aux_sym_digit_token1,
    STATE(87), 1,
      sym_integer,
    STATE(134), 1,
      sym_json_value,
    ACTIONS(251), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(82), 2,
      sym_digit,
      aux_sym_fraction_repeat1,
    STATE(148), 6,
      sym_json_object,
      sym_json_array,
      sym_json_string,
      sym_json_number,
      sym_template,
      sym_boolean,
  [2618] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(180), 1,
      anon_sym_LBRACK,
    ACTIONS(188), 1,
      anon_sym_LBRACE,
    ACTIONS(190), 1,
      anon_sym_DQUOTE,
    ACTIONS(192), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(253), 1,
      sym_null,
    ACTIONS(255), 1,
      aux_sym_digit_token1,
    STATE(87), 1,
      sym_integer,
    STATE(158), 1,
      sym_json_value,
    ACTIONS(251), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(82), 2,
      sym_digit,
      aux_sym_fraction_repeat1,
    STATE(148), 6,
      sym_json_object,
      sym_json_array,
      sym_json_string,
      sym_json_number,
      sym_template,
      sym_boolean,
  [2662] = 3,
    ACTIONS(117), 1,
      sym_comment,
    ACTIONS(133), 1,
      ts_builtin_sym_end,
    ACTIONS(135), 17,
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
  [2688] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(257), 17,
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
  [2711] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(47), 17,
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
  [2734] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 17,
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
  [2757] = 8,
    ACTIONS(117), 1,
      sym_comment,
    ACTIONS(261), 1,
      anon_sym_DQUOTE,
    ACTIONS(263), 1,
      aux_sym_json_string_text_token1,
    ACTIONS(265), 1,
      anon_sym_BSLASH,
    ACTIONS(267), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(98), 1,
      aux_sym_json_string_text_repeat1,
    STATE(80), 3,
      sym_json_string_content,
      sym_template,
      aux_sym_json_string_repeat1,
    STATE(85), 3,
      sym_json_string_text,
      sym_json_string_escaped_char,
      aux_sym_json_string_content_repeat1,
  [2786] = 9,
    ACTIONS(13), 1,
      anon_sym_LT,
    ACTIONS(117), 1,
      sym_comment,
    ACTIONS(269), 1,
      anon_sym_LT_QMARK,
    ACTIONS(271), 1,
      anon_sym_LT_SLASH,
    ACTIONS(273), 1,
      aux_sym_xml_string_token1,
    STATE(75), 1,
      sym_xml_open_tag,
    STATE(102), 1,
      aux_sym_xml_string_repeat1,
    STATE(117), 1,
      sym_xml_close_tag,
    STATE(81), 4,
      sym_xml_prolog_tag,
      sym_xml_tag,
      sym_xml_string,
      aux_sym_xml_tag_repeat1,
  [2817] = 8,
    ACTIONS(117), 1,
      sym_comment,
    ACTIONS(263), 1,
      aux_sym_json_string_text_token1,
    ACTIONS(265), 1,
      anon_sym_BSLASH,
    ACTIONS(267), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(275), 1,
      anon_sym_DQUOTE,
    STATE(98), 1,
      aux_sym_json_string_text_repeat1,
    STATE(79), 3,
      sym_json_string_content,
      sym_template,
      aux_sym_json_string_repeat1,
    STATE(85), 3,
      sym_json_string_text,
      sym_json_string_escaped_char,
      aux_sym_json_string_content_repeat1,
  [2846] = 9,
    ACTIONS(13), 1,
      anon_sym_LT,
    ACTIONS(117), 1,
      sym_comment,
    ACTIONS(269), 1,
      anon_sym_LT_QMARK,
    ACTIONS(271), 1,
      anon_sym_LT_SLASH,
    ACTIONS(273), 1,
      aux_sym_xml_string_token1,
    STATE(75), 1,
      sym_xml_open_tag,
    STATE(102), 1,
      aux_sym_xml_string_repeat1,
    STATE(113), 1,
      sym_xml_close_tag,
    STATE(73), 4,
      sym_xml_prolog_tag,
      sym_xml_tag,
      sym_xml_string,
      aux_sym_xml_tag_repeat1,
  [2877] = 9,
    ACTIONS(13), 1,
      anon_sym_LT,
    ACTIONS(117), 1,
      sym_comment,
    ACTIONS(269), 1,
      anon_sym_LT_QMARK,
    ACTIONS(273), 1,
      aux_sym_xml_string_token1,
    ACTIONS(277), 1,
      anon_sym_LT_SLASH,
    STATE(43), 1,
      sym_xml_close_tag,
    STATE(75), 1,
      sym_xml_open_tag,
    STATE(102), 1,
      aux_sym_xml_string_repeat1,
    STATE(81), 4,
      sym_xml_prolog_tag,
      sym_xml_tag,
      sym_xml_string,
      aux_sym_xml_tag_repeat1,
  [2908] = 9,
    ACTIONS(13), 1,
      anon_sym_LT,
    ACTIONS(117), 1,
      sym_comment,
    ACTIONS(269), 1,
      anon_sym_LT_QMARK,
    ACTIONS(273), 1,
      aux_sym_xml_string_token1,
    ACTIONS(277), 1,
      anon_sym_LT_SLASH,
    STATE(62), 1,
      sym_xml_close_tag,
    STATE(75), 1,
      sym_xml_open_tag,
    STATE(102), 1,
      aux_sym_xml_string_repeat1,
    STATE(76), 4,
      sym_xml_prolog_tag,
      sym_xml_tag,
      sym_xml_string,
      aux_sym_xml_tag_repeat1,
  [2939] = 8,
    ACTIONS(117), 1,
      sym_comment,
    ACTIONS(263), 1,
      aux_sym_json_string_text_token1,
    ACTIONS(265), 1,
      anon_sym_BSLASH,
    ACTIONS(267), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(279), 1,
      anon_sym_DQUOTE,
    STATE(98), 1,
      aux_sym_json_string_text_repeat1,
    STATE(74), 3,
      sym_json_string_content,
      sym_template,
      aux_sym_json_string_repeat1,
    STATE(85), 3,
      sym_json_string_text,
      sym_json_string_escaped_char,
      aux_sym_json_string_content_repeat1,
  [2968] = 8,
    ACTIONS(117), 1,
      sym_comment,
    ACTIONS(281), 1,
      anon_sym_DQUOTE,
    ACTIONS(283), 1,
      aux_sym_json_string_text_token1,
    ACTIONS(286), 1,
      anon_sym_BSLASH,
    ACTIONS(289), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(98), 1,
      aux_sym_json_string_text_repeat1,
    STATE(79), 3,
      sym_json_string_content,
      sym_template,
      aux_sym_json_string_repeat1,
    STATE(85), 3,
      sym_json_string_text,
      sym_json_string_escaped_char,
      aux_sym_json_string_content_repeat1,
  [2997] = 8,
    ACTIONS(117), 1,
      sym_comment,
    ACTIONS(263), 1,
      aux_sym_json_string_text_token1,
    ACTIONS(265), 1,
      anon_sym_BSLASH,
    ACTIONS(267), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(292), 1,
      anon_sym_DQUOTE,
    STATE(98), 1,
      aux_sym_json_string_text_repeat1,
    STATE(79), 3,
      sym_json_string_content,
      sym_template,
      aux_sym_json_string_repeat1,
    STATE(85), 3,
      sym_json_string_text,
      sym_json_string_escaped_char,
      aux_sym_json_string_content_repeat1,
  [3026] = 8,
    ACTIONS(117), 1,
      sym_comment,
    ACTIONS(294), 1,
      anon_sym_LT,
    ACTIONS(297), 1,
      anon_sym_LT_QMARK,
    ACTIONS(300), 1,
      anon_sym_LT_SLASH,
    ACTIONS(302), 1,
      aux_sym_xml_string_token1,
    STATE(75), 1,
      sym_xml_open_tag,
    STATE(102), 1,
      aux_sym_xml_string_repeat1,
    STATE(81), 4,
      sym_xml_prolog_tag,
      sym_xml_tag,
      sym_xml_string,
      aux_sym_xml_tag_repeat1,
  [3054] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(255), 1,
      aux_sym_digit_token1,
    STATE(83), 2,
      sym_digit,
      aux_sym_fraction_repeat1,
    ACTIONS(142), 6,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_e,
      anon_sym_E,
  [3073] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(305), 1,
      aux_sym_digit_token1,
    STATE(83), 2,
      sym_digit,
      aux_sym_fraction_repeat1,
    ACTIONS(137), 6,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_e,
      anon_sym_E,
  [3092] = 7,
    ACTIONS(117), 1,
      sym_comment,
    ACTIONS(308), 1,
      anon_sym_DQUOTE,
    ACTIONS(310), 1,
      aux_sym_json_string_text_token1,
    ACTIONS(313), 1,
      anon_sym_BSLASH,
    ACTIONS(316), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(98), 1,
      aux_sym_json_string_text_repeat1,
    STATE(84), 3,
      sym_json_string_text,
      sym_json_string_escaped_char,
      aux_sym_json_string_content_repeat1,
  [3116] = 7,
    ACTIONS(117), 1,
      sym_comment,
    ACTIONS(263), 1,
      aux_sym_json_string_text_token1,
    ACTIONS(265), 1,
      anon_sym_BSLASH,
    ACTIONS(318), 1,
      anon_sym_DQUOTE,
    ACTIONS(320), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(98), 1,
      aux_sym_json_string_text_repeat1,
    STATE(84), 3,
      sym_json_string_text,
      sym_json_string_escaped_char,
      aux_sym_json_string_content_repeat1,
  [3140] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(324), 1,
      anon_sym_u,
    ACTIONS(322), 7,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
      anon_sym_b,
      anon_sym_f,
      anon_sym_n,
      anon_sym_r,
      anon_sym_t,
  [3156] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(326), 1,
      anon_sym_DOT,
    STATE(97), 1,
      sym_fraction,
    STATE(123), 1,
      sym_exponent,
    ACTIONS(328), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(148), 3,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [3178] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(255), 1,
      aux_sym_digit_token1,
    STATE(83), 2,
      sym_digit,
      aux_sym_fraction_repeat1,
    ACTIONS(146), 5,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_e,
      anon_sym_E,
  [3196] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(190), 1,
      anon_sym_DQUOTE,
    ACTIONS(330), 1,
      anon_sym_COMMA,
    ACTIONS(332), 1,
      anon_sym_RBRACE,
    STATE(132), 1,
      aux_sym_json_object_repeat1,
    STATE(133), 1,
      sym_json_key_value,
    STATE(166), 1,
      sym_json_key_string,
    STATE(167), 1,
      sym_json_string,
  [3221] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(190), 1,
      anon_sym_DQUOTE,
    ACTIONS(330), 1,
      anon_sym_COMMA,
    ACTIONS(334), 1,
      anon_sym_RBRACE,
    STATE(143), 1,
      aux_sym_json_object_repeat1,
    STATE(149), 1,
      sym_json_key_value,
    STATE(166), 1,
      sym_json_key_string,
    STATE(167), 1,
      sym_json_string,
  [3246] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(160), 7,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_e,
      anon_sym_E,
      aux_sym_digit_token1,
  [3259] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(255), 1,
      aux_sym_digit_token1,
    STATE(83), 2,
      sym_digit,
      aux_sym_fraction_repeat1,
    ACTIONS(167), 3,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [3275] = 6,
    ACTIONS(117), 1,
      sym_comment,
    ACTIONS(336), 1,
      sym__char,
    ACTIONS(338), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(131), 1,
      aux_sym__line_repeat1,
    STATE(175), 1,
      sym_multiline_string_content,
    STATE(103), 2,
      sym__line,
      aux_sym_assert_section_repeat1,
  [3295] = 6,
    ACTIONS(117), 1,
      sym_comment,
    ACTIONS(336), 1,
      sym__char,
    ACTIONS(340), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(131), 1,
      aux_sym__line_repeat1,
    STATE(199), 1,
      sym_multiline_string_content,
    STATE(103), 2,
      sym__line,
      aux_sym_assert_section_repeat1,
  [3315] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(255), 1,
      aux_sym_digit_token1,
    STATE(83), 2,
      sym_digit,
      aux_sym_fraction_repeat1,
    ACTIONS(169), 3,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [3331] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_LT,
    ACTIONS(17), 1,
      anon_sym_LT_QMARK,
    STATE(47), 1,
      sym_xml_tag,
    STATE(77), 1,
      sym_xml_open_tag,
    STATE(120), 2,
      sym_xml_prolog_tag,
      aux_sym_xml_repeat1,
  [3351] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(122), 1,
      sym_exponent,
    ACTIONS(328), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(165), 3,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [3367] = 5,
    ACTIONS(117), 1,
      sym_comment,
    ACTIONS(344), 1,
      aux_sym_json_string_text_token1,
    ACTIONS(346), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(106), 1,
      aux_sym_json_string_text_repeat1,
    ACTIONS(342), 2,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
  [3384] = 5,
    ACTIONS(112), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(117), 1,
      sym_comment,
    ACTIONS(348), 1,
      sym__char,
    STATE(131), 1,
      aux_sym__line_repeat1,
    STATE(99), 2,
      sym__line,
      aux_sym_assert_section_repeat1,
  [3401] = 5,
    ACTIONS(117), 1,
      sym_comment,
    ACTIONS(351), 1,
      sym__char,
    STATE(55), 1,
      sym_bodyData,
    STATE(128), 1,
      aux_sym__line_repeat1,
    STATE(41), 2,
      sym__line,
      aux_sym_assert_section_repeat1,
  [3418] = 5,
    ACTIONS(117), 1,
      sym_comment,
    ACTIONS(353), 1,
      sym__char,
    STATE(55), 1,
      sym_bodyData,
    STATE(137), 1,
      aux_sym__line_repeat1,
    STATE(27), 2,
      sym__line,
      aux_sym_assert_section_repeat1,
  [3435] = 4,
    ACTIONS(117), 1,
      sym_comment,
    ACTIONS(357), 1,
      aux_sym_xml_string_token1,
    STATE(107), 1,
      aux_sym_xml_string_repeat1,
    ACTIONS(355), 3,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
  [3450] = 5,
    ACTIONS(117), 1,
      sym_comment,
    ACTIONS(336), 1,
      sym__char,
    ACTIONS(359), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(131), 1,
      aux_sym__line_repeat1,
    STATE(99), 2,
      sym__line,
      aux_sym_assert_section_repeat1,
  [3467] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(144), 1,
      aux_sym_digit_token1,
    ACTIONS(361), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(32), 2,
      sym_digit,
      aux_sym_fraction_repeat1,
  [3482] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(255), 1,
      aux_sym_digit_token1,
    ACTIONS(363), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(95), 2,
      sym_digit,
      aux_sym_fraction_repeat1,
  [3497] = 5,
    ACTIONS(117), 1,
      sym_comment,
    ACTIONS(367), 1,
      aux_sym_json_string_text_token1,
    ACTIONS(370), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(106), 1,
      aux_sym_json_string_text_repeat1,
    ACTIONS(365), 2,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
  [3514] = 4,
    ACTIONS(117), 1,
      sym_comment,
    ACTIONS(374), 1,
      aux_sym_xml_string_token1,
    STATE(107), 1,
      aux_sym_xml_string_repeat1,
    ACTIONS(372), 3,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
  [3529] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 4,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [3539] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 1,
      aux_sym_section_type_token1,
    ACTIONS(184), 1,
      anon_sym_Captures,
    ACTIONS(186), 1,
      anon_sym_Asserts,
    STATE(181), 1,
      sym_section_type,
  [3555] = 3,
    ACTIONS(117), 1,
      sym_comment,
    ACTIONS(379), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(377), 3,
      anon_sym_DQUOTE,
      aux_sym_json_string_text_token1,
      anon_sym_BSLASH,
  [3567] = 2,
    ACTIONS(117), 1,
      sym_comment,
    ACTIONS(381), 4,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      aux_sym_xml_string_token1,
  [3577] = 3,
    ACTIONS(117), 1,
      sym_comment,
    ACTIONS(210), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(383), 3,
      anon_sym_DQUOTE,
      aux_sym_json_string_text_token1,
      anon_sym_BSLASH,
  [3589] = 2,
    ACTIONS(117), 1,
      sym_comment,
    ACTIONS(385), 4,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      aux_sym_xml_string_token1,
  [3599] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(218), 4,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [3609] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(190), 1,
      anon_sym_DQUOTE,
    STATE(155), 1,
      sym_json_key_value,
    STATE(166), 1,
      sym_json_key_string,
    STATE(167), 1,
      sym_json_string,
  [3625] = 3,
    ACTIONS(117), 1,
      sym_comment,
    ACTIONS(389), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(387), 3,
      anon_sym_DQUOTE,
      aux_sym_json_string_text_token1,
      anon_sym_BSLASH,
  [3637] = 2,
    ACTIONS(117), 1,
      sym_comment,
    ACTIONS(391), 4,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      aux_sym_xml_string_token1,
  [3647] = 2,
    ACTIONS(117), 1,
      sym_comment,
    ACTIONS(393), 4,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      aux_sym_xml_string_token1,
  [3657] = 2,
    ACTIONS(117), 1,
      sym_comment,
    ACTIONS(395), 4,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      aux_sym_xml_string_token1,
  [3667] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(397), 1,
      anon_sym_LT,
    ACTIONS(399), 1,
      anon_sym_LT_QMARK,
    STATE(120), 2,
      sym_xml_prolog_tag,
      aux_sym_xml_repeat1,
  [3681] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 3,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [3690] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 3,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [3699] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 3,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [3708] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(402), 1,
      anon_sym_RBRACK,
    ACTIONS(404), 1,
      anon_sym_COMMA,
    STATE(124), 1,
      aux_sym_json_array_repeat1,
  [3721] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(236), 3,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [3730] = 4,
    ACTIONS(117), 1,
      sym_comment,
    ACTIONS(407), 1,
      anon_sym_LF,
    ACTIONS(409), 1,
      sym__char,
    STATE(146), 1,
      aux_sym__line_repeat1,
  [3743] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(144), 1,
      aux_sym_digit_token1,
    STATE(25), 2,
      sym_digit,
      aux_sym_fraction_repeat1,
  [3754] = 4,
    ACTIONS(117), 1,
      sym_comment,
    ACTIONS(409), 1,
      sym__char,
    ACTIONS(411), 1,
      anon_sym_LF,
    STATE(146), 1,
      aux_sym__line_repeat1,
  [3767] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(330), 1,
      anon_sym_COMMA,
    ACTIONS(413), 1,
      anon_sym_RBRACE,
    STATE(151), 1,
      aux_sym_json_object_repeat1,
  [3780] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(415), 1,
      anon_sym_RBRACK,
    ACTIONS(417), 1,
      anon_sym_COMMA,
    STATE(124), 1,
      aux_sym_json_array_repeat1,
  [3793] = 4,
    ACTIONS(117), 1,
      sym_comment,
    ACTIONS(409), 1,
      sym__char,
    ACTIONS(419), 1,
      anon_sym_LF,
    STATE(146), 1,
      aux_sym__line_repeat1,
  [3806] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(330), 1,
      anon_sym_COMMA,
    ACTIONS(421), 1,
      anon_sym_RBRACE,
    STATE(151), 1,
      aux_sym_json_object_repeat1,
  [3819] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(330), 1,
      anon_sym_COMMA,
    ACTIONS(421), 1,
      anon_sym_RBRACE,
    STATE(129), 1,
      aux_sym_json_object_repeat1,
  [3832] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(417), 1,
      anon_sym_COMMA,
    ACTIONS(423), 1,
      anon_sym_RBRACK,
    STATE(130), 1,
      aux_sym_json_array_repeat1,
  [3845] = 4,
    ACTIONS(117), 1,
      sym_comment,
    ACTIONS(425), 1,
      anon_sym_LF,
    ACTIONS(427), 1,
      anon_sym_,
    STATE(174), 1,
      sym__multiline_string_type_seq,
  [3858] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(330), 1,
      anon_sym_COMMA,
    ACTIONS(429), 1,
      anon_sym_RBRACE,
    STATE(151), 1,
      aux_sym_json_object_repeat1,
  [3871] = 4,
    ACTIONS(117), 1,
      sym_comment,
    ACTIONS(409), 1,
      sym__char,
    ACTIONS(431), 1,
      anon_sym_LF,
    STATE(146), 1,
      aux_sym__line_repeat1,
  [3884] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(238), 3,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [3893] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(230), 3,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [3902] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(255), 1,
      aux_sym_digit_token1,
    STATE(88), 2,
      sym_digit,
      aux_sym_fraction_repeat1,
  [3913] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(255), 1,
      aux_sym_digit_token1,
    STATE(92), 2,
      sym_digit,
      aux_sym_fraction_repeat1,
  [3924] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(144), 1,
      aux_sym_digit_token1,
    STATE(31), 2,
      sym_digit,
      aux_sym_fraction_repeat1,
  [3935] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(330), 1,
      anon_sym_COMMA,
    ACTIONS(433), 1,
      anon_sym_RBRACE,
    STATE(151), 1,
      aux_sym_json_object_repeat1,
  [3948] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(417), 1,
      anon_sym_COMMA,
    ACTIONS(435), 1,
      anon_sym_RBRACK,
    STATE(150), 1,
      aux_sym_json_array_repeat1,
  [3961] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(210), 3,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [3970] = 4,
    ACTIONS(117), 1,
      sym_comment,
    ACTIONS(437), 1,
      anon_sym_LF,
    ACTIONS(439), 1,
      sym__char,
    STATE(146), 1,
      aux_sym__line_repeat1,
  [3983] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(204), 3,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [3992] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(249), 3,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [4001] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(330), 1,
      anon_sym_COMMA,
    ACTIONS(433), 1,
      anon_sym_RBRACE,
    STATE(136), 1,
      aux_sym_json_object_repeat1,
  [4014] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(417), 1,
      anon_sym_COMMA,
    ACTIONS(442), 1,
      anon_sym_RBRACK,
    STATE(124), 1,
      aux_sym_json_array_repeat1,
  [4027] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(444), 1,
      anon_sym_COMMA,
    ACTIONS(447), 1,
      anon_sym_RBRACE,
    STATE(151), 1,
      aux_sym_json_object_repeat1,
  [4040] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(226), 3,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [4049] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(381), 1,
      anon_sym_LT,
    ACTIONS(449), 1,
      anon_sym_LT_QMARK,
  [4059] = 2,
    ACTIONS(117), 1,
      sym_comment,
    ACTIONS(135), 2,
      sym__char,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
  [4067] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(447), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [4075] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(451), 1,
      aux_sym_section_type_token1,
    STATE(181), 1,
      sym_section_type,
  [4085] = 3,
    ACTIONS(117), 1,
      sym_comment,
    ACTIONS(453), 1,
      aux_sym_key_value_token1,
    ACTIONS(455), 1,
      sym_value,
  [4095] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(457), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [4103] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(402), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [4111] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(459), 1,
      anon_sym_RBRACE_RBRACE,
  [4118] = 2,
    ACTIONS(117), 1,
      sym_comment,
    ACTIONS(461), 1,
      aux_sym_xml_prolog_tag_token1,
  [4125] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(463), 1,
      anon_sym_RBRACK,
  [4132] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(465), 1,
      sym_hexdigit,
  [4139] = 2,
    ACTIONS(117), 1,
      sym_comment,
    ACTIONS(467), 1,
      sym_uri,
  [4146] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(469), 1,
      anon_sym_QMARK_GT,
  [4153] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(471), 1,
      anon_sym_COLON,
  [4160] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(473), 1,
      anon_sym_COLON,
  [4167] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(475), 1,
      sym_hexdigit,
  [4174] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(477), 1,
      anon_sym_GT,
  [4181] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(479), 1,
      sym_hexdigit,
  [4188] = 2,
    ACTIONS(117), 1,
      sym_comment,
    ACTIONS(481), 1,
      anon_sym_LF,
  [4195] = 2,
    ACTIONS(117), 1,
      sym_comment,
    ACTIONS(483), 1,
      anon_sym_LF,
  [4202] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(485), 1,
      sym_multiline_string_type,
  [4209] = 2,
    ACTIONS(117), 1,
      sym_comment,
    ACTIONS(487), 1,
      anon_sym_LF,
  [4216] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(489), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
  [4223] = 2,
    ACTIONS(117), 1,
      sym_comment,
    ACTIONS(491), 1,
      anon_sym_LF,
  [4230] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(493), 1,
      anon_sym_GT,
  [4237] = 2,
    ACTIONS(117), 1,
      sym_comment,
    ACTIONS(495), 1,
      anon_sym_LF,
  [4244] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(497), 1,
      sym_hexdigit,
  [4251] = 2,
    ACTIONS(117), 1,
      sym_comment,
    ACTIONS(499), 1,
      aux_sym_template_token1,
  [4258] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(501), 1,
      anon_sym_RBRACK,
  [4265] = 2,
    ACTIONS(117), 1,
      sym_comment,
    ACTIONS(503), 1,
      aux_sym_xml_open_tag_token1,
  [4272] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(505), 1,
      sym_http_status_code,
  [4279] = 2,
    ACTIONS(117), 1,
      sym_comment,
    ACTIONS(507), 1,
      anon_sym_LF,
  [4286] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(509), 1,
      sym_http_status_code,
  [4293] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(511), 1,
      anon_sym_COLON,
  [4300] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(513), 1,
      anon_sym_QMARK_GT,
  [4307] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(515), 1,
      anon_sym_COLON,
  [4314] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(517), 1,
      anon_sym_RBRACK,
  [4321] = 2,
    ACTIONS(117), 1,
      sym_comment,
    ACTIONS(519), 1,
      sym_uri,
  [4328] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(521), 1,
      anon_sym_RBRACE_RBRACE,
  [4335] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(523), 1,
      anon_sym_RBRACK,
  [4342] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(525), 1,
      ts_builtin_sym_end,
  [4349] = 2,
    ACTIONS(117), 1,
      sym_comment,
    ACTIONS(527), 1,
      aux_sym_xml_close_tag_token1,
  [4356] = 2,
    ACTIONS(117), 1,
      sym_comment,
    ACTIONS(529), 1,
      anon_sym_LF,
  [4363] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(531), 1,
      anon_sym_GT,
  [4370] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(533), 1,
      anon_sym_RBRACE_RBRACE,
  [4377] = 2,
    ACTIONS(117), 1,
      sym_comment,
    ACTIONS(535), 1,
      sym_value,
  [4384] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(537), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
  [4391] = 2,
    ACTIONS(117), 1,
      sym_comment,
    ACTIONS(539), 1,
      aux_sym_xml_prolog_tag_token1,
  [4398] = 2,
    ACTIONS(117), 1,
      sym_comment,
    ACTIONS(541), 1,
      aux_sym_template_token1,
  [4405] = 2,
    ACTIONS(117), 1,
      sym_comment,
    ACTIONS(543), 1,
      aux_sym_xml_close_tag_token1,
  [4412] = 2,
    ACTIONS(117), 1,
      sym_comment,
    ACTIONS(545), 1,
      aux_sym_template_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 103,
  [SMALL_STATE(4)] = 206,
  [SMALL_STATE(5)] = 307,
  [SMALL_STATE(6)] = 408,
  [SMALL_STATE(7)] = 462,
  [SMALL_STATE(8)] = 513,
  [SMALL_STATE(9)] = 564,
  [SMALL_STATE(10)] = 615,
  [SMALL_STATE(11)] = 666,
  [SMALL_STATE(12)] = 716,
  [SMALL_STATE(13)] = 764,
  [SMALL_STATE(14)] = 806,
  [SMALL_STATE(15)] = 848,
  [SMALL_STATE(16)] = 890,
  [SMALL_STATE(17)] = 937,
  [SMALL_STATE(18)] = 978,
  [SMALL_STATE(19)] = 1025,
  [SMALL_STATE(20)] = 1072,
  [SMALL_STATE(21)] = 1119,
  [SMALL_STATE(22)] = 1166,
  [SMALL_STATE(23)] = 1204,
  [SMALL_STATE(24)] = 1241,
  [SMALL_STATE(25)] = 1278,
  [SMALL_STATE(26)] = 1314,
  [SMALL_STATE(27)] = 1354,
  [SMALL_STATE(28)] = 1393,
  [SMALL_STATE(29)] = 1424,
  [SMALL_STATE(30)] = 1463,
  [SMALL_STATE(31)] = 1497,
  [SMALL_STATE(32)] = 1531,
  [SMALL_STATE(33)] = 1565,
  [SMALL_STATE(34)] = 1600,
  [SMALL_STATE(35)] = 1630,
  [SMALL_STATE(36)] = 1668,
  [SMALL_STATE(37)] = 1724,
  [SMALL_STATE(38)] = 1762,
  [SMALL_STATE(39)] = 1789,
  [SMALL_STATE(40)] = 1816,
  [SMALL_STATE(41)] = 1843,
  [SMALL_STATE(42)] = 1878,
  [SMALL_STATE(43)] = 1905,
  [SMALL_STATE(44)] = 1932,
  [SMALL_STATE(45)] = 1959,
  [SMALL_STATE(46)] = 1986,
  [SMALL_STATE(47)] = 2013,
  [SMALL_STATE(48)] = 2040,
  [SMALL_STATE(49)] = 2067,
  [SMALL_STATE(50)] = 2094,
  [SMALL_STATE(51)] = 2121,
  [SMALL_STATE(52)] = 2148,
  [SMALL_STATE(53)] = 2175,
  [SMALL_STATE(54)] = 2202,
  [SMALL_STATE(55)] = 2229,
  [SMALL_STATE(56)] = 2256,
  [SMALL_STATE(57)] = 2283,
  [SMALL_STATE(58)] = 2310,
  [SMALL_STATE(59)] = 2337,
  [SMALL_STATE(60)] = 2364,
  [SMALL_STATE(61)] = 2399,
  [SMALL_STATE(62)] = 2426,
  [SMALL_STATE(63)] = 2453,
  [SMALL_STATE(64)] = 2480,
  [SMALL_STATE(65)] = 2530,
  [SMALL_STATE(66)] = 2574,
  [SMALL_STATE(67)] = 2618,
  [SMALL_STATE(68)] = 2662,
  [SMALL_STATE(69)] = 2688,
  [SMALL_STATE(70)] = 2711,
  [SMALL_STATE(71)] = 2734,
  [SMALL_STATE(72)] = 2757,
  [SMALL_STATE(73)] = 2786,
  [SMALL_STATE(74)] = 2817,
  [SMALL_STATE(75)] = 2846,
  [SMALL_STATE(76)] = 2877,
  [SMALL_STATE(77)] = 2908,
  [SMALL_STATE(78)] = 2939,
  [SMALL_STATE(79)] = 2968,
  [SMALL_STATE(80)] = 2997,
  [SMALL_STATE(81)] = 3026,
  [SMALL_STATE(82)] = 3054,
  [SMALL_STATE(83)] = 3073,
  [SMALL_STATE(84)] = 3092,
  [SMALL_STATE(85)] = 3116,
  [SMALL_STATE(86)] = 3140,
  [SMALL_STATE(87)] = 3156,
  [SMALL_STATE(88)] = 3178,
  [SMALL_STATE(89)] = 3196,
  [SMALL_STATE(90)] = 3221,
  [SMALL_STATE(91)] = 3246,
  [SMALL_STATE(92)] = 3259,
  [SMALL_STATE(93)] = 3275,
  [SMALL_STATE(94)] = 3295,
  [SMALL_STATE(95)] = 3315,
  [SMALL_STATE(96)] = 3331,
  [SMALL_STATE(97)] = 3351,
  [SMALL_STATE(98)] = 3367,
  [SMALL_STATE(99)] = 3384,
  [SMALL_STATE(100)] = 3401,
  [SMALL_STATE(101)] = 3418,
  [SMALL_STATE(102)] = 3435,
  [SMALL_STATE(103)] = 3450,
  [SMALL_STATE(104)] = 3467,
  [SMALL_STATE(105)] = 3482,
  [SMALL_STATE(106)] = 3497,
  [SMALL_STATE(107)] = 3514,
  [SMALL_STATE(108)] = 3529,
  [SMALL_STATE(109)] = 3539,
  [SMALL_STATE(110)] = 3555,
  [SMALL_STATE(111)] = 3567,
  [SMALL_STATE(112)] = 3577,
  [SMALL_STATE(113)] = 3589,
  [SMALL_STATE(114)] = 3599,
  [SMALL_STATE(115)] = 3609,
  [SMALL_STATE(116)] = 3625,
  [SMALL_STATE(117)] = 3637,
  [SMALL_STATE(118)] = 3647,
  [SMALL_STATE(119)] = 3657,
  [SMALL_STATE(120)] = 3667,
  [SMALL_STATE(121)] = 3681,
  [SMALL_STATE(122)] = 3690,
  [SMALL_STATE(123)] = 3699,
  [SMALL_STATE(124)] = 3708,
  [SMALL_STATE(125)] = 3721,
  [SMALL_STATE(126)] = 3730,
  [SMALL_STATE(127)] = 3743,
  [SMALL_STATE(128)] = 3754,
  [SMALL_STATE(129)] = 3767,
  [SMALL_STATE(130)] = 3780,
  [SMALL_STATE(131)] = 3793,
  [SMALL_STATE(132)] = 3806,
  [SMALL_STATE(133)] = 3819,
  [SMALL_STATE(134)] = 3832,
  [SMALL_STATE(135)] = 3845,
  [SMALL_STATE(136)] = 3858,
  [SMALL_STATE(137)] = 3871,
  [SMALL_STATE(138)] = 3884,
  [SMALL_STATE(139)] = 3893,
  [SMALL_STATE(140)] = 3902,
  [SMALL_STATE(141)] = 3913,
  [SMALL_STATE(142)] = 3924,
  [SMALL_STATE(143)] = 3935,
  [SMALL_STATE(144)] = 3948,
  [SMALL_STATE(145)] = 3961,
  [SMALL_STATE(146)] = 3970,
  [SMALL_STATE(147)] = 3983,
  [SMALL_STATE(148)] = 3992,
  [SMALL_STATE(149)] = 4001,
  [SMALL_STATE(150)] = 4014,
  [SMALL_STATE(151)] = 4027,
  [SMALL_STATE(152)] = 4040,
  [SMALL_STATE(153)] = 4049,
  [SMALL_STATE(154)] = 4059,
  [SMALL_STATE(155)] = 4067,
  [SMALL_STATE(156)] = 4075,
  [SMALL_STATE(157)] = 4085,
  [SMALL_STATE(158)] = 4095,
  [SMALL_STATE(159)] = 4103,
  [SMALL_STATE(160)] = 4111,
  [SMALL_STATE(161)] = 4118,
  [SMALL_STATE(162)] = 4125,
  [SMALL_STATE(163)] = 4132,
  [SMALL_STATE(164)] = 4139,
  [SMALL_STATE(165)] = 4146,
  [SMALL_STATE(166)] = 4153,
  [SMALL_STATE(167)] = 4160,
  [SMALL_STATE(168)] = 4167,
  [SMALL_STATE(169)] = 4174,
  [SMALL_STATE(170)] = 4181,
  [SMALL_STATE(171)] = 4188,
  [SMALL_STATE(172)] = 4195,
  [SMALL_STATE(173)] = 4202,
  [SMALL_STATE(174)] = 4209,
  [SMALL_STATE(175)] = 4216,
  [SMALL_STATE(176)] = 4223,
  [SMALL_STATE(177)] = 4230,
  [SMALL_STATE(178)] = 4237,
  [SMALL_STATE(179)] = 4244,
  [SMALL_STATE(180)] = 4251,
  [SMALL_STATE(181)] = 4258,
  [SMALL_STATE(182)] = 4265,
  [SMALL_STATE(183)] = 4272,
  [SMALL_STATE(184)] = 4279,
  [SMALL_STATE(185)] = 4286,
  [SMALL_STATE(186)] = 4293,
  [SMALL_STATE(187)] = 4300,
  [SMALL_STATE(188)] = 4307,
  [SMALL_STATE(189)] = 4314,
  [SMALL_STATE(190)] = 4321,
  [SMALL_STATE(191)] = 4328,
  [SMALL_STATE(192)] = 4335,
  [SMALL_STATE(193)] = 4342,
  [SMALL_STATE(194)] = 4349,
  [SMALL_STATE(195)] = 4356,
  [SMALL_STATE(196)] = 4363,
  [SMALL_STATE(197)] = 4370,
  [SMALL_STATE(198)] = 4377,
  [SMALL_STATE(199)] = 4384,
  [SMALL_STATE(200)] = 4391,
  [SMALL_STATE(201)] = 4398,
  [SMALL_STATE(202)] = 4405,
  [SMALL_STATE(203)] = 4412,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hurl_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 2),
  [11] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 2),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 1),
  [37] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 1),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response, 3),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_response, 3),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response, 4),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_response, 4),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 3),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 3),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_headers, 1),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_headers, 1),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_headers_repeat1, 2),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_headers_repeat1, 2),
  [65] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_headers_repeat1, 2), SHIFT_REPEAT(186),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 1),
  [70] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section, 1),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 2),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section, 2),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_request_repeat1, 2),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_request_repeat1, 2),
  [80] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_request_repeat1, 2), SHIFT_REPEAT(156),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_response_repeat1, 2),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_response_repeat1, 2),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_response_repeat1, 2), SHIFT_REPEAT(109),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_value, 4),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_key_value, 4),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_header, 4),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section_header, 4),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_value, 5),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_key_value, 5),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_capture_section, 3, .production_id = 2),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_capture_section, 3, .production_id = 2),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 4),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 4),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_assert_section_repeat1, 2),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_assert_section_repeat1, 2),
  [114] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_assert_section_repeat1, 2), SHIFT_REPEAT(126),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assert_section, 3, .production_id = 2),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assert_section, 3, .production_id = 2),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_capture_section, 4, .production_id = 2),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_capture_section, 4, .production_id = 2),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assert_section, 4, .production_id = 2),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assert_section, 4, .production_id = 2),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__line, 2),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__line, 2),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_fraction_repeat1, 2),
  [139] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fraction_repeat1, 2), SHIFT_REPEAT(28),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer, 1),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fraction, 2),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_number, 1),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bodyData, 1),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bodyData, 1),
  [158] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_digit, 1),
  [162] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_assert_section_repeat1, 2), SHIFT_REPEAT(137),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_number, 2),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exponent, 3),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exponent, 2),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entry, 1),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_hurl_file_repeat1, 2),
  [177] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_hurl_file_repeat1, 2), SHIFT_REPEAT(164),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [182] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [184] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [186] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [188] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [194] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [196] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [198] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hurl_file, 1),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xml, 1),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_string, 3),
  [208] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template, 3),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xml_tag, 3),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_string, 3),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_object, 2),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_string, 2),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xml, 2),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 1),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_number, 3),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_object, 3),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 3),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_array, 4),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_string, 5),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 2),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_array, 3),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_object, 4),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_string, 4),
  [242] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_assert_section_repeat1, 2), SHIFT_REPEAT(128),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xml_close_tag, 3),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xml_tag, 2),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_value, 1),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response, 5),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entry, 2),
  [261] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [263] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [265] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [269] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [271] = {.entry = {.count = 1, .reusable = false}}, SHIFT(202),
  [273] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [275] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [277] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [279] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [281] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_json_string_repeat1, 2),
  [283] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_string_repeat1, 2), SHIFT_REPEAT(98),
  [286] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_string_repeat1, 2), SHIFT_REPEAT(86),
  [289] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_json_string_repeat1, 2), SHIFT_REPEAT(203),
  [292] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [294] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_xml_tag_repeat1, 2), SHIFT_REPEAT(182),
  [297] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_xml_tag_repeat1, 2), SHIFT_REPEAT(200),
  [300] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_xml_tag_repeat1, 2),
  [302] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_xml_tag_repeat1, 2), SHIFT_REPEAT(102),
  [305] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fraction_repeat1, 2), SHIFT_REPEAT(91),
  [308] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_json_string_content_repeat1, 2),
  [310] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_string_content_repeat1, 2), SHIFT_REPEAT(98),
  [313] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_string_content_repeat1, 2), SHIFT_REPEAT(86),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_json_string_content_repeat1, 2),
  [318] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_string_content, 1),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_string_content, 1),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [336] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [338] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [340] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [342] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_string_text, 1),
  [344] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_string_text, 1),
  [348] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_assert_section_repeat1, 2), SHIFT_REPEAT(131),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [355] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xml_string, 1),
  [357] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [359] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline_string_content, 1),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [365] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_json_string_text_repeat1, 2),
  [367] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_string_text_repeat1, 2), SHIFT_REPEAT(106),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_json_string_text_repeat1, 2),
  [372] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_xml_string_repeat1, 2),
  [374] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_xml_string_repeat1, 2), SHIFT_REPEAT(107),
  [377] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_string_escaped_char, 2),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_string_escaped_char, 2),
  [381] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xml_prolog_tag, 3),
  [383] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_template, 3),
  [385] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xml_tag, 2),
  [387] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_string_escaped_char, 6),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_string_escaped_char, 6),
  [391] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xml_tag, 3),
  [393] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xml_open_tag, 3),
  [395] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xml_close_tag, 3),
  [397] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_xml_repeat1, 2),
  [399] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_xml_repeat1, 2), SHIFT_REPEAT(161),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_json_array_repeat1, 2),
  [404] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_json_array_repeat1, 2), SHIFT_REPEAT(65),
  [407] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [409] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [411] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [419] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [425] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [431] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [437] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__line_repeat1, 2),
  [439] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__line_repeat1, 2), SHIFT_REPEAT(146),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [444] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_json_object_repeat1, 2), SHIFT_REPEAT(115),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_json_object_repeat1, 2),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xml_prolog_tag, 3),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [453] = {.entry = {.count = 1, .reusable = false}}, SHIFT(198),
  [455] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_key_value, 3),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [461] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_type, 1),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [467] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_method, 1),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_key_string, 1, .production_id = 1),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [499] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [503] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multiline_string_type_seq, 2),
  [509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_http_version, 1),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key, 1),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [519] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [525] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [527] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [539] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [541] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [543] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [545] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
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
