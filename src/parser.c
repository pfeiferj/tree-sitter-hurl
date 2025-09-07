#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
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
#define STATE_COUNT 610
#define LARGE_STATE_COUNT 14
#define SYMBOL_COUNT 329
#define ALIAS_COUNT 1
#define TOKEN_COUNT 173
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 2

enum ts_symbol_identifiers {
  anon_sym_LF = 1,
  anon_sym_GET = 2,
  anon_sym_HEAD = 3,
  anon_sym_POST = 4,
  anon_sym_PUT = 5,
  anon_sym_DELETE = 6,
  anon_sym_CONNECT = 7,
  anon_sym_OPTIONS = 8,
  anon_sym_TRACE = 9,
  anon_sym_PATCH = 10,
  anon_sym_LINK = 11,
  anon_sym_UNLINK = 12,
  anon_sym_PURGE = 13,
  anon_sym_LOCK = 14,
  anon_sym_UNLOCK = 15,
  anon_sym_PROPFIND = 16,
  anon_sym_VIEW = 17,
  aux_sym_method_token1 = 18,
  anon_sym_HTTP_SLASH1_DOT0 = 19,
  anon_sym_HTTP_SLASH1_DOT1 = 20,
  anon_sym_HTTP_SLASH2 = 21,
  anon_sym_HTTP_SLASH3 = 22,
  anon_sym_HTTP_SLASH_STAR = 23,
  anon_sym_HTTP = 24,
  aux_sym_status_token1 = 25,
  anon_sym_STAR = 26,
  anon_sym_LBRACKBasicAuth_RBRACK = 27,
  anon_sym_LBRACKQuery_RBRACK = 28,
  anon_sym_LBRACKQueryStringParams_RBRACK = 29,
  anon_sym_LBRACKForm_RBRACK = 30,
  anon_sym_LBRACKFormParams_RBRACK = 31,
  anon_sym_LBRACKMultipart_RBRACK = 32,
  anon_sym_LBRACKMultipartFormData_RBRACK = 33,
  anon_sym_LBRACKCookies_RBRACK = 34,
  anon_sym_LBRACKCaptures_RBRACK = 35,
  anon_sym_LBRACKAsserts_RBRACK = 36,
  anon_sym_LBRACKOptions_RBRACK = 37,
  anon_sym_COLON = 38,
  anon_sym_null = 39,
  anon_sym_COLON2 = 40,
  anon_sym_file_COMMA = 41,
  anon_sym_SEMI = 42,
  aux_sym_file_value_token1 = 43,
  anon_sym_cacert = 44,
  anon_sym_compressed = 45,
  anon_sym_location = 46,
  anon_sym_insecure = 47,
  anon_sym_max_DASHredirs = 48,
  anon_sym_path_DASHas_DASHis = 49,
  anon_sym_proxy = 50,
  anon_sym_retry = 51,
  anon_sym_retry_DASHinterval = 52,
  anon_sym_retry_DASHmax_DASHcount = 53,
  anon_sym_variable = 54,
  anon_sym_verbose = 55,
  anon_sym_very_DASHverbose = 56,
  anon_sym_EQ = 57,
  anon_sym_status = 58,
  anon_sym_url = 59,
  anon_sym_body = 60,
  anon_sym_duration = 61,
  anon_sym_bytes = 62,
  anon_sym_sha256 = 63,
  anon_sym_md5 = 64,
  anon_sym_header = 65,
  anon_sym_cookie = 66,
  anon_sym_xpath = 67,
  anon_sym_jsonpath = 68,
  anon_sym_regex = 69,
  anon_sym_not = 70,
  anon_sym_exists = 71,
  anon_sym_isInteger = 72,
  anon_sym_isFloat = 73,
  anon_sym_isBoolean = 74,
  anon_sym_isString = 75,
  anon_sym_isCollection = 76,
  anon_sym_isNumber = 77,
  anon_sym_isIsoDate = 78,
  anon_sym_isEmpty = 79,
  anon_sym_equals = 80,
  anon_sym_EQ_EQ = 81,
  anon_sym_notEquals = 82,
  anon_sym_BANG_EQ = 83,
  anon_sym_greaterThan = 84,
  anon_sym_GT = 85,
  anon_sym_greaterThanOrEquals = 86,
  anon_sym_GT_EQ = 87,
  anon_sym_lessThan = 88,
  anon_sym_LT = 89,
  anon_sym_lessThanOrEquals = 90,
  anon_sym_LT_EQ = 91,
  anon_sym_startsWith = 92,
  anon_sym_endsWith = 93,
  anon_sym_contains = 94,
  anon_sym_matches = 95,
  anon_sym_includes = 96,
  anon_sym_LT_QMARK = 97,
  aux_sym_xml_prolog_tag_token1 = 98,
  anon_sym_QMARK_GT = 99,
  aux_sym_xml_open_tag_token1 = 100,
  anon_sym_LT_SLASH = 101,
  aux_sym_xml_close_tag_token1 = 102,
  anon_sym_base64_COMMA = 103,
  aux_sym_oneline_base64_token1 = 104,
  anon_sym_hex_COMMA = 105,
  anon_sym_DQUOTE = 106,
  sym_quoted_string_text = 107,
  anon_sym_BSLASH = 108,
  aux_sym_invalid_quoted_string_escaped_char_token1 = 109,
  anon_sym_b = 110,
  anon_sym_f = 111,
  anon_sym_n = 112,
  anon_sym_r = 113,
  anon_sym_t = 114,
  anon_sym_u = 115,
  sym_key_string_text = 116,
  anon_sym_BSLASH2 = 117,
  aux_sym_key_string_escaped_char_token1 = 118,
  aux_sym_value_string_text_token1 = 119,
  anon_sym_POUND = 120,
  aux_sym_oneline_string_token1 = 121,
  anon_sym_BQUOTE = 122,
  aux_sym_oneline_string_text_token1 = 123,
  aux_sym_oneline_string_text_token2 = 124,
  anon_sym_BQUOTE_BQUOTE_BQUOTE = 125,
  anon_sym_base64 = 126,
  anon_sym_hex = 127,
  anon_sym_json = 128,
  anon_sym_xml = 129,
  anon_sym_graphql = 130,
  aux_sym_multiline_string_type_token1 = 131,
  aux_sym__multiline_string_text_token1 = 132,
  anon_sym_LBRACE = 133,
  sym_filename_text = 134,
  aux_sym_filename_escaped_char_token1 = 135,
  anon_sym_RBRACE = 136,
  anon_sym_COMMA = 137,
  anon_sym_LBRACK = 138,
  anon_sym_RBRACK = 139,
  sym_json_string_text = 140,
  anon_sym_LBRACE_LBRACE = 141,
  anon_sym_RBRACE_RBRACE = 142,
  aux_sym_variable_name_token1 = 143,
  aux_sym_variable_name_token2 = 144,
  anon_sym_count = 145,
  anon_sym_urlEncode = 146,
  anon_sym_urlDecode = 147,
  anon_sym_toInt = 148,
  anon_sym_htmlEscape = 149,
  anon_sym_htmlUnescape = 150,
  anon_sym_daysAfterNow = 151,
  anon_sym_daysBeforeNow = 152,
  anon_sym_decode = 153,
  anon_sym_format = 154,
  anon_sym_toDate = 155,
  anon_sym_nth = 156,
  anon_sym_replace = 157,
  anon_sym_split = 158,
  anon_sym_true = 159,
  anon_sym_false = 160,
  sym__alphanum = 161,
  sym_digit = 162,
  sym_hexdigit = 163,
  anon_sym_DOT = 164,
  anon_sym_e = 165,
  anon_sym_E = 166,
  anon_sym_PLUS = 167,
  anon_sym_DASH = 168,
  sym_comment = 169,
  anon_sym_SLASH = 170,
  sym_regex_text = 171,
  aux_sym_regex_escaped_char_token1 = 172,
  sym_hurl_file = 173,
  sym_entry = 174,
  sym__comment_or_new_line = 175,
  sym_request = 176,
  sym_response = 177,
  sym_method = 178,
  sym_version = 179,
  sym_status = 180,
  sym_header = 181,
  sym_body = 182,
  sym_request_section = 183,
  sym_response_section = 184,
  sym_basic_auth_section = 185,
  sym_query_string_params_section = 186,
  sym_form_params_section = 187,
  sym_multipart_form_data_section = 188,
  sym_cookies_section = 189,
  sym_captures_section = 190,
  sym_asserts_section = 191,
  sym_options_section = 192,
  sym_key_value = 193,
  sym_multipart_form_data_param = 194,
  sym_file_param = 195,
  sym_file_value = 196,
  sym_capture = 197,
  sym_assert = 198,
  sym_option = 199,
  sym_ca_certificate_option = 200,
  sym_compressed_option = 201,
  sym_follow_redirect_option = 202,
  sym_insecure_option = 203,
  sym_max_redirs_option = 204,
  sym_path_as_is_option = 205,
  sym_proxy_option = 206,
  sym_retry_option = 207,
  sym_retry_interval_option = 208,
  sym_retry_max_count_option = 209,
  sym_variable_option = 210,
  sym_verbose_option = 211,
  sym_very_verbose_option = 212,
  sym_variable_definition = 213,
  sym_variable_value = 214,
  sym_query = 215,
  sym_header_query = 216,
  sym_cookie_query = 217,
  sym_xpath_query = 218,
  sym_jsonpath_query = 219,
  sym_regex_query = 220,
  sym_variable_query = 221,
  sym_predicate = 222,
  sym_predicate_func = 223,
  sym_equal_predicate = 224,
  sym_not_equal_predicate = 225,
  sym_greater_predicate = 226,
  sym_greater_or_equal_predicate = 227,
  sym_less_predicate = 228,
  sym_less_or_equal_predicate = 229,
  sym_start_with_predicate = 230,
  sym_end_with_predicate = 231,
  sym_contain_predicate = 232,
  sym_match_predicate = 233,
  sym_include_predicate = 234,
  sym_predicate_value = 235,
  sym_bytes = 236,
  sym_xml = 237,
  sym_xml_prolog_tag = 238,
  sym_xml_tag = 239,
  sym_xml_open_tag = 240,
  sym_xml_close_tag = 241,
  sym_oneline_base64 = 242,
  sym_oneline_file = 243,
  sym_oneline_hex = 244,
  sym_quoted_string = 245,
  sym_quoted_string_content = 246,
  sym_invalid_quoted_string_escaped_char = 247,
  sym_quoted_string_escaped_char = 248,
  sym_key_string = 249,
  sym_key_string_content = 250,
  sym_key_string_escaped_char = 251,
  sym_value_string = 252,
  sym_value_string_content = 253,
  sym_value_string_text = 254,
  sym_value_string_escaped_char = 255,
  sym_oneline_string = 256,
  sym_oneline_string_content = 257,
  sym_oneline_string_text = 258,
  sym_oneline_string_escaped_char = 259,
  sym_multiline_string = 260,
  sym_multiline_string_type = 261,
  sym_multiline_string_content = 262,
  sym__multiline_string_text = 263,
  sym_multiline_string_escaped_char = 264,
  sym_filename = 265,
  sym_filename_content = 266,
  sym_filename_escaped_char = 267,
  sym_unicode_char = 268,
  sym_json_value = 269,
  sym_json_object = 270,
  sym_json_key_value = 271,
  sym_json_key_string = 272,
  sym_json_array = 273,
  sym_json_string = 274,
  sym_json_string_content = 275,
  sym_json_string_escaped_char = 276,
  sym_json_number = 277,
  sym_template = 278,
  sym_expr = 279,
  sym_variable_name = 280,
  sym_filter = 281,
  sym_regex_filter = 282,
  sym_nth_filter = 283,
  sym_replace_filter = 284,
  sym_split_filter = 285,
  sym_xpath_filter = 286,
  sym_boolean = 287,
  sym_integer = 288,
  sym_float = 289,
  sym_fraction = 290,
  sym_exponent = 291,
  sym_regex = 292,
  sym_regex_content = 293,
  sym_regex_escaped_char = 294,
  aux_sym_hurl_file_repeat1 = 295,
  aux_sym_hurl_file_repeat2 = 296,
  aux_sym__comment_or_new_line_repeat1 = 297,
  aux_sym_request_repeat1 = 298,
  aux_sym_request_repeat2 = 299,
  aux_sym_response_repeat1 = 300,
  aux_sym_query_string_params_section_repeat1 = 301,
  aux_sym_multipart_form_data_section_repeat1 = 302,
  aux_sym_captures_section_repeat1 = 303,
  aux_sym_asserts_section_repeat1 = 304,
  aux_sym_options_section_repeat1 = 305,
  aux_sym_capture_repeat1 = 306,
  aux_sym_xml_repeat1 = 307,
  aux_sym_xml_tag_repeat1 = 308,
  aux_sym_oneline_hex_repeat1 = 309,
  aux_sym_quoted_string_repeat1 = 310,
  aux_sym_quoted_string_content_repeat1 = 311,
  aux_sym_key_string_repeat1 = 312,
  aux_sym_key_string_content_repeat1 = 313,
  aux_sym_value_string_repeat1 = 314,
  aux_sym_value_string_content_repeat1 = 315,
  aux_sym_value_string_text_repeat1 = 316,
  aux_sym_oneline_string_repeat1 = 317,
  aux_sym_oneline_string_content_repeat1 = 318,
  aux_sym_multiline_string_repeat1 = 319,
  aux_sym_multiline_string_content_repeat1 = 320,
  aux_sym__multiline_string_text_repeat1 = 321,
  aux_sym_filename_repeat1 = 322,
  aux_sym_filename_content_repeat1 = 323,
  aux_sym_json_object_repeat1 = 324,
  aux_sym_json_array_repeat1 = 325,
  aux_sym_json_string_repeat1 = 326,
  aux_sym_integer_repeat1 = 327,
  aux_sym_regex_content_repeat1 = 328,
  anon_alias_sym_json_key_string = 329,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LF] = "\n",
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
  [aux_sym_method_token1] = "method_token1",
  [anon_sym_HTTP_SLASH1_DOT0] = "HTTP/1.0",
  [anon_sym_HTTP_SLASH1_DOT1] = "HTTP/1.1",
  [anon_sym_HTTP_SLASH2] = "HTTP/2",
  [anon_sym_HTTP_SLASH3] = "HTTP/3",
  [anon_sym_HTTP_SLASH_STAR] = "HTTP/*",
  [anon_sym_HTTP] = "HTTP",
  [aux_sym_status_token1] = "status_token1",
  [anon_sym_STAR] = "*",
  [anon_sym_LBRACKBasicAuth_RBRACK] = "[BasicAuth]",
  [anon_sym_LBRACKQuery_RBRACK] = "[Query]",
  [anon_sym_LBRACKQueryStringParams_RBRACK] = "[QueryStringParams]",
  [anon_sym_LBRACKForm_RBRACK] = "[Form]",
  [anon_sym_LBRACKFormParams_RBRACK] = "[FormParams]",
  [anon_sym_LBRACKMultipart_RBRACK] = "[Multipart]",
  [anon_sym_LBRACKMultipartFormData_RBRACK] = "[MultipartFormData]",
  [anon_sym_LBRACKCookies_RBRACK] = "[Cookies]",
  [anon_sym_LBRACKCaptures_RBRACK] = "[Captures]",
  [anon_sym_LBRACKAsserts_RBRACK] = "[Asserts]",
  [anon_sym_LBRACKOptions_RBRACK] = "[Options]",
  [anon_sym_COLON] = ":",
  [anon_sym_null] = "null",
  [anon_sym_COLON2] = ":",
  [anon_sym_file_COMMA] = "file,",
  [anon_sym_SEMI] = ";",
  [aux_sym_file_value_token1] = "file_value_token1",
  [anon_sym_cacert] = "cacert",
  [anon_sym_compressed] = "compressed",
  [anon_sym_location] = "location",
  [anon_sym_insecure] = "insecure",
  [anon_sym_max_DASHredirs] = "max-redirs",
  [anon_sym_path_DASHas_DASHis] = "path-as-is",
  [anon_sym_proxy] = "proxy",
  [anon_sym_retry] = "retry",
  [anon_sym_retry_DASHinterval] = "retry-interval",
  [anon_sym_retry_DASHmax_DASHcount] = "retry-max-count",
  [anon_sym_variable] = "variable",
  [anon_sym_verbose] = "verbose",
  [anon_sym_very_DASHverbose] = "very-verbose",
  [anon_sym_EQ] = "=",
  [anon_sym_status] = "status",
  [anon_sym_url] = "url",
  [anon_sym_body] = "body",
  [anon_sym_duration] = "duration",
  [anon_sym_bytes] = "bytes",
  [anon_sym_sha256] = "sha256",
  [anon_sym_md5] = "md5",
  [anon_sym_header] = "header",
  [anon_sym_cookie] = "cookie",
  [anon_sym_xpath] = "xpath",
  [anon_sym_jsonpath] = "jsonpath",
  [anon_sym_regex] = "regex",
  [anon_sym_not] = "not",
  [anon_sym_exists] = "exists",
  [anon_sym_isInteger] = "isInteger",
  [anon_sym_isFloat] = "isFloat",
  [anon_sym_isBoolean] = "isBoolean",
  [anon_sym_isString] = "isString",
  [anon_sym_isCollection] = "isCollection",
  [anon_sym_isNumber] = "isNumber",
  [anon_sym_isIsoDate] = "isIsoDate",
  [anon_sym_isEmpty] = "isEmpty",
  [anon_sym_equals] = "equals",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_notEquals] = "notEquals",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_greaterThan] = "greaterThan",
  [anon_sym_GT] = ">",
  [anon_sym_greaterThanOrEquals] = "greaterThanOrEquals",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_lessThan] = "lessThan",
  [anon_sym_LT] = "<",
  [anon_sym_lessThanOrEquals] = "lessThanOrEquals",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_startsWith] = "startsWith",
  [anon_sym_endsWith] = "endsWith",
  [anon_sym_contains] = "contains",
  [anon_sym_matches] = "matches",
  [anon_sym_includes] = "includes",
  [anon_sym_LT_QMARK] = "<\?",
  [aux_sym_xml_prolog_tag_token1] = "xml_prolog_tag_token1",
  [anon_sym_QMARK_GT] = "\?>",
  [aux_sym_xml_open_tag_token1] = "xml_open_tag_token1",
  [anon_sym_LT_SLASH] = "</",
  [aux_sym_xml_close_tag_token1] = "xml_close_tag_token1",
  [anon_sym_base64_COMMA] = "base64,",
  [aux_sym_oneline_base64_token1] = "oneline_base64_token1",
  [anon_sym_hex_COMMA] = "hex,",
  [anon_sym_DQUOTE] = "\"",
  [sym_quoted_string_text] = "quoted_string_text",
  [anon_sym_BSLASH] = "\\",
  [aux_sym_invalid_quoted_string_escaped_char_token1] = "invalid_quoted_string_escaped_char_token1",
  [anon_sym_b] = "b",
  [anon_sym_f] = "f",
  [anon_sym_n] = "n",
  [anon_sym_r] = "r",
  [anon_sym_t] = "t",
  [anon_sym_u] = "u",
  [sym_key_string_text] = "key_string_text",
  [anon_sym_BSLASH2] = "\\",
  [aux_sym_key_string_escaped_char_token1] = "key_string_escaped_char_token1",
  [aux_sym_value_string_text_token1] = "value_string_text_token1",
  [anon_sym_POUND] = "#",
  [aux_sym_oneline_string_token1] = "oneline_string_token1",
  [anon_sym_BQUOTE] = "`",
  [aux_sym_oneline_string_text_token1] = "oneline_string_text_token1",
  [aux_sym_oneline_string_text_token2] = "oneline_string_text_token2",
  [anon_sym_BQUOTE_BQUOTE_BQUOTE] = "```",
  [anon_sym_base64] = "base64",
  [anon_sym_hex] = "hex",
  [anon_sym_json] = "json",
  [anon_sym_xml] = "xml",
  [anon_sym_graphql] = "graphql",
  [aux_sym_multiline_string_type_token1] = "multiline_string_type_token1",
  [aux_sym__multiline_string_text_token1] = "_multiline_string_text_token1",
  [anon_sym_LBRACE] = "{",
  [sym_filename_text] = "filename_text",
  [aux_sym_filename_escaped_char_token1] = "filename_escaped_char_token1",
  [anon_sym_RBRACE] = "}",
  [anon_sym_COMMA] = ",",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [sym_json_string_text] = "json_string_text",
  [anon_sym_LBRACE_LBRACE] = "{{",
  [anon_sym_RBRACE_RBRACE] = "}}",
  [aux_sym_variable_name_token1] = "variable_name_token1",
  [aux_sym_variable_name_token2] = "variable_name_token2",
  [anon_sym_count] = "count",
  [anon_sym_urlEncode] = "urlEncode",
  [anon_sym_urlDecode] = "urlDecode",
  [anon_sym_toInt] = "toInt",
  [anon_sym_htmlEscape] = "htmlEscape",
  [anon_sym_htmlUnescape] = "htmlUnescape",
  [anon_sym_daysAfterNow] = "daysAfterNow",
  [anon_sym_daysBeforeNow] = "daysBeforeNow",
  [anon_sym_decode] = "decode",
  [anon_sym_format] = "format",
  [anon_sym_toDate] = "toDate",
  [anon_sym_nth] = "nth",
  [anon_sym_replace] = "replace",
  [anon_sym_split] = "split",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [sym__alphanum] = "_alphanum",
  [sym_digit] = "digit",
  [sym_hexdigit] = "hexdigit",
  [anon_sym_DOT] = ".",
  [anon_sym_e] = "e",
  [anon_sym_E] = "E",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [sym_comment] = "comment",
  [anon_sym_SLASH] = "/",
  [sym_regex_text] = "regex_text",
  [aux_sym_regex_escaped_char_token1] = "regex_escaped_char_token1",
  [sym_hurl_file] = "hurl_file",
  [sym_entry] = "entry",
  [sym__comment_or_new_line] = "_comment_or_new_line",
  [sym_request] = "request",
  [sym_response] = "response",
  [sym_method] = "method",
  [sym_version] = "version",
  [sym_status] = "status",
  [sym_header] = "header",
  [sym_body] = "body",
  [sym_request_section] = "request_section",
  [sym_response_section] = "response_section",
  [sym_basic_auth_section] = "basic_auth_section",
  [sym_query_string_params_section] = "query_string_params_section",
  [sym_form_params_section] = "form_params_section",
  [sym_multipart_form_data_section] = "multipart_form_data_section",
  [sym_cookies_section] = "cookies_section",
  [sym_captures_section] = "captures_section",
  [sym_asserts_section] = "asserts_section",
  [sym_options_section] = "options_section",
  [sym_key_value] = "key_value",
  [sym_multipart_form_data_param] = "multipart_form_data_param",
  [sym_file_param] = "file_param",
  [sym_file_value] = "file_value",
  [sym_capture] = "capture",
  [sym_assert] = "assert",
  [sym_option] = "option",
  [sym_ca_certificate_option] = "ca_certificate_option",
  [sym_compressed_option] = "compressed_option",
  [sym_follow_redirect_option] = "follow_redirect_option",
  [sym_insecure_option] = "insecure_option",
  [sym_max_redirs_option] = "max_redirs_option",
  [sym_path_as_is_option] = "path_as_is_option",
  [sym_proxy_option] = "proxy_option",
  [sym_retry_option] = "retry_option",
  [sym_retry_interval_option] = "retry_interval_option",
  [sym_retry_max_count_option] = "retry_max_count_option",
  [sym_variable_option] = "variable_option",
  [sym_verbose_option] = "verbose_option",
  [sym_very_verbose_option] = "very_verbose_option",
  [sym_variable_definition] = "variable_definition",
  [sym_variable_value] = "variable_value",
  [sym_query] = "query",
  [sym_header_query] = "header_query",
  [sym_cookie_query] = "cookie_query",
  [sym_xpath_query] = "xpath_query",
  [sym_jsonpath_query] = "jsonpath_query",
  [sym_regex_query] = "regex_query",
  [sym_variable_query] = "variable_query",
  [sym_predicate] = "predicate",
  [sym_predicate_func] = "predicate_func",
  [sym_equal_predicate] = "equal_predicate",
  [sym_not_equal_predicate] = "not_equal_predicate",
  [sym_greater_predicate] = "greater_predicate",
  [sym_greater_or_equal_predicate] = "greater_or_equal_predicate",
  [sym_less_predicate] = "less_predicate",
  [sym_less_or_equal_predicate] = "less_or_equal_predicate",
  [sym_start_with_predicate] = "start_with_predicate",
  [sym_end_with_predicate] = "end_with_predicate",
  [sym_contain_predicate] = "contain_predicate",
  [sym_match_predicate] = "match_predicate",
  [sym_include_predicate] = "include_predicate",
  [sym_predicate_value] = "predicate_value",
  [sym_bytes] = "bytes",
  [sym_xml] = "xml",
  [sym_xml_prolog_tag] = "xml_prolog_tag",
  [sym_xml_tag] = "xml_tag",
  [sym_xml_open_tag] = "xml_open_tag",
  [sym_xml_close_tag] = "xml_close_tag",
  [sym_oneline_base64] = "oneline_base64",
  [sym_oneline_file] = "oneline_file",
  [sym_oneline_hex] = "oneline_hex",
  [sym_quoted_string] = "quoted_string",
  [sym_quoted_string_content] = "quoted_string_content",
  [sym_invalid_quoted_string_escaped_char] = "invalid_quoted_string_escaped_char",
  [sym_quoted_string_escaped_char] = "quoted_string_escaped_char",
  [sym_key_string] = "key_string",
  [sym_key_string_content] = "key_string_content",
  [sym_key_string_escaped_char] = "key_string_escaped_char",
  [sym_value_string] = "value_string",
  [sym_value_string_content] = "value_string_content",
  [sym_value_string_text] = "value_string_text",
  [sym_value_string_escaped_char] = "value_string_escaped_char",
  [sym_oneline_string] = "oneline_string",
  [sym_oneline_string_content] = "oneline_string_content",
  [sym_oneline_string_text] = "oneline_string_text",
  [sym_oneline_string_escaped_char] = "oneline_string_escaped_char",
  [sym_multiline_string] = "multiline_string",
  [sym_multiline_string_type] = "multiline_string_type",
  [sym_multiline_string_content] = "multiline_string_content",
  [sym__multiline_string_text] = "_multiline_string_text",
  [sym_multiline_string_escaped_char] = "multiline_string_escaped_char",
  [sym_filename] = "filename",
  [sym_filename_content] = "filename_content",
  [sym_filename_escaped_char] = "filename_escaped_char",
  [sym_unicode_char] = "unicode_char",
  [sym_json_value] = "json_value",
  [sym_json_object] = "json_object",
  [sym_json_key_value] = "json_key_value",
  [sym_json_key_string] = "json_key_string",
  [sym_json_array] = "json_array",
  [sym_json_string] = "json_string",
  [sym_json_string_content] = "json_string_content",
  [sym_json_string_escaped_char] = "json_string_escaped_char",
  [sym_json_number] = "json_number",
  [sym_template] = "template",
  [sym_expr] = "expr",
  [sym_variable_name] = "variable_name",
  [sym_filter] = "filter",
  [sym_regex_filter] = "regex_filter",
  [sym_nth_filter] = "nth_filter",
  [sym_replace_filter] = "replace_filter",
  [sym_split_filter] = "split_filter",
  [sym_xpath_filter] = "xpath_filter",
  [sym_boolean] = "boolean",
  [sym_integer] = "integer",
  [sym_float] = "float",
  [sym_fraction] = "fraction",
  [sym_exponent] = "exponent",
  [sym_regex] = "regex",
  [sym_regex_content] = "regex_content",
  [sym_regex_escaped_char] = "regex_escaped_char",
  [aux_sym_hurl_file_repeat1] = "hurl_file_repeat1",
  [aux_sym_hurl_file_repeat2] = "hurl_file_repeat2",
  [aux_sym__comment_or_new_line_repeat1] = "_comment_or_new_line_repeat1",
  [aux_sym_request_repeat1] = "request_repeat1",
  [aux_sym_request_repeat2] = "request_repeat2",
  [aux_sym_response_repeat1] = "response_repeat1",
  [aux_sym_query_string_params_section_repeat1] = "query_string_params_section_repeat1",
  [aux_sym_multipart_form_data_section_repeat1] = "multipart_form_data_section_repeat1",
  [aux_sym_captures_section_repeat1] = "captures_section_repeat1",
  [aux_sym_asserts_section_repeat1] = "asserts_section_repeat1",
  [aux_sym_options_section_repeat1] = "options_section_repeat1",
  [aux_sym_capture_repeat1] = "capture_repeat1",
  [aux_sym_xml_repeat1] = "xml_repeat1",
  [aux_sym_xml_tag_repeat1] = "xml_tag_repeat1",
  [aux_sym_oneline_hex_repeat1] = "oneline_hex_repeat1",
  [aux_sym_quoted_string_repeat1] = "quoted_string_repeat1",
  [aux_sym_quoted_string_content_repeat1] = "quoted_string_content_repeat1",
  [aux_sym_key_string_repeat1] = "key_string_repeat1",
  [aux_sym_key_string_content_repeat1] = "key_string_content_repeat1",
  [aux_sym_value_string_repeat1] = "value_string_repeat1",
  [aux_sym_value_string_content_repeat1] = "value_string_content_repeat1",
  [aux_sym_value_string_text_repeat1] = "value_string_text_repeat1",
  [aux_sym_oneline_string_repeat1] = "oneline_string_repeat1",
  [aux_sym_oneline_string_content_repeat1] = "oneline_string_content_repeat1",
  [aux_sym_multiline_string_repeat1] = "multiline_string_repeat1",
  [aux_sym_multiline_string_content_repeat1] = "multiline_string_content_repeat1",
  [aux_sym__multiline_string_text_repeat1] = "_multiline_string_text_repeat1",
  [aux_sym_filename_repeat1] = "filename_repeat1",
  [aux_sym_filename_content_repeat1] = "filename_content_repeat1",
  [aux_sym_json_object_repeat1] = "json_object_repeat1",
  [aux_sym_json_array_repeat1] = "json_array_repeat1",
  [aux_sym_json_string_repeat1] = "json_string_repeat1",
  [aux_sym_integer_repeat1] = "integer_repeat1",
  [aux_sym_regex_content_repeat1] = "regex_content_repeat1",
  [anon_alias_sym_json_key_string] = "json_key_string",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LF] = anon_sym_LF,
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
  [aux_sym_method_token1] = aux_sym_method_token1,
  [anon_sym_HTTP_SLASH1_DOT0] = anon_sym_HTTP_SLASH1_DOT0,
  [anon_sym_HTTP_SLASH1_DOT1] = anon_sym_HTTP_SLASH1_DOT1,
  [anon_sym_HTTP_SLASH2] = anon_sym_HTTP_SLASH2,
  [anon_sym_HTTP_SLASH3] = anon_sym_HTTP_SLASH3,
  [anon_sym_HTTP_SLASH_STAR] = anon_sym_HTTP_SLASH_STAR,
  [anon_sym_HTTP] = anon_sym_HTTP,
  [aux_sym_status_token1] = aux_sym_status_token1,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_LBRACKBasicAuth_RBRACK] = anon_sym_LBRACKBasicAuth_RBRACK,
  [anon_sym_LBRACKQuery_RBRACK] = anon_sym_LBRACKQuery_RBRACK,
  [anon_sym_LBRACKQueryStringParams_RBRACK] = anon_sym_LBRACKQueryStringParams_RBRACK,
  [anon_sym_LBRACKForm_RBRACK] = anon_sym_LBRACKForm_RBRACK,
  [anon_sym_LBRACKFormParams_RBRACK] = anon_sym_LBRACKFormParams_RBRACK,
  [anon_sym_LBRACKMultipart_RBRACK] = anon_sym_LBRACKMultipart_RBRACK,
  [anon_sym_LBRACKMultipartFormData_RBRACK] = anon_sym_LBRACKMultipartFormData_RBRACK,
  [anon_sym_LBRACKCookies_RBRACK] = anon_sym_LBRACKCookies_RBRACK,
  [anon_sym_LBRACKCaptures_RBRACK] = anon_sym_LBRACKCaptures_RBRACK,
  [anon_sym_LBRACKAsserts_RBRACK] = anon_sym_LBRACKAsserts_RBRACK,
  [anon_sym_LBRACKOptions_RBRACK] = anon_sym_LBRACKOptions_RBRACK,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_null] = anon_sym_null,
  [anon_sym_COLON2] = anon_sym_COLON,
  [anon_sym_file_COMMA] = anon_sym_file_COMMA,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [aux_sym_file_value_token1] = aux_sym_file_value_token1,
  [anon_sym_cacert] = anon_sym_cacert,
  [anon_sym_compressed] = anon_sym_compressed,
  [anon_sym_location] = anon_sym_location,
  [anon_sym_insecure] = anon_sym_insecure,
  [anon_sym_max_DASHredirs] = anon_sym_max_DASHredirs,
  [anon_sym_path_DASHas_DASHis] = anon_sym_path_DASHas_DASHis,
  [anon_sym_proxy] = anon_sym_proxy,
  [anon_sym_retry] = anon_sym_retry,
  [anon_sym_retry_DASHinterval] = anon_sym_retry_DASHinterval,
  [anon_sym_retry_DASHmax_DASHcount] = anon_sym_retry_DASHmax_DASHcount,
  [anon_sym_variable] = anon_sym_variable,
  [anon_sym_verbose] = anon_sym_verbose,
  [anon_sym_very_DASHverbose] = anon_sym_very_DASHverbose,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_status] = anon_sym_status,
  [anon_sym_url] = anon_sym_url,
  [anon_sym_body] = anon_sym_body,
  [anon_sym_duration] = anon_sym_duration,
  [anon_sym_bytes] = anon_sym_bytes,
  [anon_sym_sha256] = anon_sym_sha256,
  [anon_sym_md5] = anon_sym_md5,
  [anon_sym_header] = anon_sym_header,
  [anon_sym_cookie] = anon_sym_cookie,
  [anon_sym_xpath] = anon_sym_xpath,
  [anon_sym_jsonpath] = anon_sym_jsonpath,
  [anon_sym_regex] = anon_sym_regex,
  [anon_sym_not] = anon_sym_not,
  [anon_sym_exists] = anon_sym_exists,
  [anon_sym_isInteger] = anon_sym_isInteger,
  [anon_sym_isFloat] = anon_sym_isFloat,
  [anon_sym_isBoolean] = anon_sym_isBoolean,
  [anon_sym_isString] = anon_sym_isString,
  [anon_sym_isCollection] = anon_sym_isCollection,
  [anon_sym_isNumber] = anon_sym_isNumber,
  [anon_sym_isIsoDate] = anon_sym_isIsoDate,
  [anon_sym_isEmpty] = anon_sym_isEmpty,
  [anon_sym_equals] = anon_sym_equals,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_notEquals] = anon_sym_notEquals,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_greaterThan] = anon_sym_greaterThan,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_greaterThanOrEquals] = anon_sym_greaterThanOrEquals,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_lessThan] = anon_sym_lessThan,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_lessThanOrEquals] = anon_sym_lessThanOrEquals,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_startsWith] = anon_sym_startsWith,
  [anon_sym_endsWith] = anon_sym_endsWith,
  [anon_sym_contains] = anon_sym_contains,
  [anon_sym_matches] = anon_sym_matches,
  [anon_sym_includes] = anon_sym_includes,
  [anon_sym_LT_QMARK] = anon_sym_LT_QMARK,
  [aux_sym_xml_prolog_tag_token1] = aux_sym_xml_prolog_tag_token1,
  [anon_sym_QMARK_GT] = anon_sym_QMARK_GT,
  [aux_sym_xml_open_tag_token1] = aux_sym_xml_open_tag_token1,
  [anon_sym_LT_SLASH] = anon_sym_LT_SLASH,
  [aux_sym_xml_close_tag_token1] = aux_sym_xml_close_tag_token1,
  [anon_sym_base64_COMMA] = anon_sym_base64_COMMA,
  [aux_sym_oneline_base64_token1] = aux_sym_oneline_base64_token1,
  [anon_sym_hex_COMMA] = anon_sym_hex_COMMA,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [sym_quoted_string_text] = sym_quoted_string_text,
  [anon_sym_BSLASH] = anon_sym_BSLASH,
  [aux_sym_invalid_quoted_string_escaped_char_token1] = aux_sym_invalid_quoted_string_escaped_char_token1,
  [anon_sym_b] = anon_sym_b,
  [anon_sym_f] = anon_sym_f,
  [anon_sym_n] = anon_sym_n,
  [anon_sym_r] = anon_sym_r,
  [anon_sym_t] = anon_sym_t,
  [anon_sym_u] = anon_sym_u,
  [sym_key_string_text] = sym_key_string_text,
  [anon_sym_BSLASH2] = anon_sym_BSLASH,
  [aux_sym_key_string_escaped_char_token1] = aux_sym_key_string_escaped_char_token1,
  [aux_sym_value_string_text_token1] = aux_sym_value_string_text_token1,
  [anon_sym_POUND] = anon_sym_POUND,
  [aux_sym_oneline_string_token1] = aux_sym_oneline_string_token1,
  [anon_sym_BQUOTE] = anon_sym_BQUOTE,
  [aux_sym_oneline_string_text_token1] = aux_sym_oneline_string_text_token1,
  [aux_sym_oneline_string_text_token2] = aux_sym_oneline_string_text_token2,
  [anon_sym_BQUOTE_BQUOTE_BQUOTE] = anon_sym_BQUOTE_BQUOTE_BQUOTE,
  [anon_sym_base64] = anon_sym_base64,
  [anon_sym_hex] = anon_sym_hex,
  [anon_sym_json] = anon_sym_json,
  [anon_sym_xml] = anon_sym_xml,
  [anon_sym_graphql] = anon_sym_graphql,
  [aux_sym_multiline_string_type_token1] = aux_sym_multiline_string_type_token1,
  [aux_sym__multiline_string_text_token1] = aux_sym__multiline_string_text_token1,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [sym_filename_text] = sym_filename_text,
  [aux_sym_filename_escaped_char_token1] = aux_sym_filename_escaped_char_token1,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [sym_json_string_text] = sym_json_string_text,
  [anon_sym_LBRACE_LBRACE] = anon_sym_LBRACE_LBRACE,
  [anon_sym_RBRACE_RBRACE] = anon_sym_RBRACE_RBRACE,
  [aux_sym_variable_name_token1] = aux_sym_variable_name_token1,
  [aux_sym_variable_name_token2] = aux_sym_variable_name_token2,
  [anon_sym_count] = anon_sym_count,
  [anon_sym_urlEncode] = anon_sym_urlEncode,
  [anon_sym_urlDecode] = anon_sym_urlDecode,
  [anon_sym_toInt] = anon_sym_toInt,
  [anon_sym_htmlEscape] = anon_sym_htmlEscape,
  [anon_sym_htmlUnescape] = anon_sym_htmlUnescape,
  [anon_sym_daysAfterNow] = anon_sym_daysAfterNow,
  [anon_sym_daysBeforeNow] = anon_sym_daysBeforeNow,
  [anon_sym_decode] = anon_sym_decode,
  [anon_sym_format] = anon_sym_format,
  [anon_sym_toDate] = anon_sym_toDate,
  [anon_sym_nth] = anon_sym_nth,
  [anon_sym_replace] = anon_sym_replace,
  [anon_sym_split] = anon_sym_split,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [sym__alphanum] = sym__alphanum,
  [sym_digit] = sym_digit,
  [sym_hexdigit] = sym_hexdigit,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_e] = anon_sym_e,
  [anon_sym_E] = anon_sym_E,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [sym_comment] = sym_comment,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [sym_regex_text] = sym_regex_text,
  [aux_sym_regex_escaped_char_token1] = aux_sym_regex_escaped_char_token1,
  [sym_hurl_file] = sym_hurl_file,
  [sym_entry] = sym_entry,
  [sym__comment_or_new_line] = sym__comment_or_new_line,
  [sym_request] = sym_request,
  [sym_response] = sym_response,
  [sym_method] = sym_method,
  [sym_version] = sym_version,
  [sym_status] = sym_status,
  [sym_header] = sym_header,
  [sym_body] = sym_body,
  [sym_request_section] = sym_request_section,
  [sym_response_section] = sym_response_section,
  [sym_basic_auth_section] = sym_basic_auth_section,
  [sym_query_string_params_section] = sym_query_string_params_section,
  [sym_form_params_section] = sym_form_params_section,
  [sym_multipart_form_data_section] = sym_multipart_form_data_section,
  [sym_cookies_section] = sym_cookies_section,
  [sym_captures_section] = sym_captures_section,
  [sym_asserts_section] = sym_asserts_section,
  [sym_options_section] = sym_options_section,
  [sym_key_value] = sym_key_value,
  [sym_multipart_form_data_param] = sym_multipart_form_data_param,
  [sym_file_param] = sym_file_param,
  [sym_file_value] = sym_file_value,
  [sym_capture] = sym_capture,
  [sym_assert] = sym_assert,
  [sym_option] = sym_option,
  [sym_ca_certificate_option] = sym_ca_certificate_option,
  [sym_compressed_option] = sym_compressed_option,
  [sym_follow_redirect_option] = sym_follow_redirect_option,
  [sym_insecure_option] = sym_insecure_option,
  [sym_max_redirs_option] = sym_max_redirs_option,
  [sym_path_as_is_option] = sym_path_as_is_option,
  [sym_proxy_option] = sym_proxy_option,
  [sym_retry_option] = sym_retry_option,
  [sym_retry_interval_option] = sym_retry_interval_option,
  [sym_retry_max_count_option] = sym_retry_max_count_option,
  [sym_variable_option] = sym_variable_option,
  [sym_verbose_option] = sym_verbose_option,
  [sym_very_verbose_option] = sym_very_verbose_option,
  [sym_variable_definition] = sym_variable_definition,
  [sym_variable_value] = sym_variable_value,
  [sym_query] = sym_query,
  [sym_header_query] = sym_header_query,
  [sym_cookie_query] = sym_cookie_query,
  [sym_xpath_query] = sym_xpath_query,
  [sym_jsonpath_query] = sym_jsonpath_query,
  [sym_regex_query] = sym_regex_query,
  [sym_variable_query] = sym_variable_query,
  [sym_predicate] = sym_predicate,
  [sym_predicate_func] = sym_predicate_func,
  [sym_equal_predicate] = sym_equal_predicate,
  [sym_not_equal_predicate] = sym_not_equal_predicate,
  [sym_greater_predicate] = sym_greater_predicate,
  [sym_greater_or_equal_predicate] = sym_greater_or_equal_predicate,
  [sym_less_predicate] = sym_less_predicate,
  [sym_less_or_equal_predicate] = sym_less_or_equal_predicate,
  [sym_start_with_predicate] = sym_start_with_predicate,
  [sym_end_with_predicate] = sym_end_with_predicate,
  [sym_contain_predicate] = sym_contain_predicate,
  [sym_match_predicate] = sym_match_predicate,
  [sym_include_predicate] = sym_include_predicate,
  [sym_predicate_value] = sym_predicate_value,
  [sym_bytes] = sym_bytes,
  [sym_xml] = sym_xml,
  [sym_xml_prolog_tag] = sym_xml_prolog_tag,
  [sym_xml_tag] = sym_xml_tag,
  [sym_xml_open_tag] = sym_xml_open_tag,
  [sym_xml_close_tag] = sym_xml_close_tag,
  [sym_oneline_base64] = sym_oneline_base64,
  [sym_oneline_file] = sym_oneline_file,
  [sym_oneline_hex] = sym_oneline_hex,
  [sym_quoted_string] = sym_quoted_string,
  [sym_quoted_string_content] = sym_quoted_string_content,
  [sym_invalid_quoted_string_escaped_char] = sym_invalid_quoted_string_escaped_char,
  [sym_quoted_string_escaped_char] = sym_quoted_string_escaped_char,
  [sym_key_string] = sym_key_string,
  [sym_key_string_content] = sym_key_string_content,
  [sym_key_string_escaped_char] = sym_key_string_escaped_char,
  [sym_value_string] = sym_value_string,
  [sym_value_string_content] = sym_value_string_content,
  [sym_value_string_text] = sym_value_string_text,
  [sym_value_string_escaped_char] = sym_value_string_escaped_char,
  [sym_oneline_string] = sym_oneline_string,
  [sym_oneline_string_content] = sym_oneline_string_content,
  [sym_oneline_string_text] = sym_oneline_string_text,
  [sym_oneline_string_escaped_char] = sym_oneline_string_escaped_char,
  [sym_multiline_string] = sym_multiline_string,
  [sym_multiline_string_type] = sym_multiline_string_type,
  [sym_multiline_string_content] = sym_multiline_string_content,
  [sym__multiline_string_text] = sym__multiline_string_text,
  [sym_multiline_string_escaped_char] = sym_multiline_string_escaped_char,
  [sym_filename] = sym_filename,
  [sym_filename_content] = sym_filename_content,
  [sym_filename_escaped_char] = sym_filename_escaped_char,
  [sym_unicode_char] = sym_unicode_char,
  [sym_json_value] = sym_json_value,
  [sym_json_object] = sym_json_object,
  [sym_json_key_value] = sym_json_key_value,
  [sym_json_key_string] = sym_json_key_string,
  [sym_json_array] = sym_json_array,
  [sym_json_string] = sym_json_string,
  [sym_json_string_content] = sym_json_string_content,
  [sym_json_string_escaped_char] = sym_json_string_escaped_char,
  [sym_json_number] = sym_json_number,
  [sym_template] = sym_template,
  [sym_expr] = sym_expr,
  [sym_variable_name] = sym_variable_name,
  [sym_filter] = sym_filter,
  [sym_regex_filter] = sym_regex_filter,
  [sym_nth_filter] = sym_nth_filter,
  [sym_replace_filter] = sym_replace_filter,
  [sym_split_filter] = sym_split_filter,
  [sym_xpath_filter] = sym_xpath_filter,
  [sym_boolean] = sym_boolean,
  [sym_integer] = sym_integer,
  [sym_float] = sym_float,
  [sym_fraction] = sym_fraction,
  [sym_exponent] = sym_exponent,
  [sym_regex] = sym_regex,
  [sym_regex_content] = sym_regex_content,
  [sym_regex_escaped_char] = sym_regex_escaped_char,
  [aux_sym_hurl_file_repeat1] = aux_sym_hurl_file_repeat1,
  [aux_sym_hurl_file_repeat2] = aux_sym_hurl_file_repeat2,
  [aux_sym__comment_or_new_line_repeat1] = aux_sym__comment_or_new_line_repeat1,
  [aux_sym_request_repeat1] = aux_sym_request_repeat1,
  [aux_sym_request_repeat2] = aux_sym_request_repeat2,
  [aux_sym_response_repeat1] = aux_sym_response_repeat1,
  [aux_sym_query_string_params_section_repeat1] = aux_sym_query_string_params_section_repeat1,
  [aux_sym_multipart_form_data_section_repeat1] = aux_sym_multipart_form_data_section_repeat1,
  [aux_sym_captures_section_repeat1] = aux_sym_captures_section_repeat1,
  [aux_sym_asserts_section_repeat1] = aux_sym_asserts_section_repeat1,
  [aux_sym_options_section_repeat1] = aux_sym_options_section_repeat1,
  [aux_sym_capture_repeat1] = aux_sym_capture_repeat1,
  [aux_sym_xml_repeat1] = aux_sym_xml_repeat1,
  [aux_sym_xml_tag_repeat1] = aux_sym_xml_tag_repeat1,
  [aux_sym_oneline_hex_repeat1] = aux_sym_oneline_hex_repeat1,
  [aux_sym_quoted_string_repeat1] = aux_sym_quoted_string_repeat1,
  [aux_sym_quoted_string_content_repeat1] = aux_sym_quoted_string_content_repeat1,
  [aux_sym_key_string_repeat1] = aux_sym_key_string_repeat1,
  [aux_sym_key_string_content_repeat1] = aux_sym_key_string_content_repeat1,
  [aux_sym_value_string_repeat1] = aux_sym_value_string_repeat1,
  [aux_sym_value_string_content_repeat1] = aux_sym_value_string_content_repeat1,
  [aux_sym_value_string_text_repeat1] = aux_sym_value_string_text_repeat1,
  [aux_sym_oneline_string_repeat1] = aux_sym_oneline_string_repeat1,
  [aux_sym_oneline_string_content_repeat1] = aux_sym_oneline_string_content_repeat1,
  [aux_sym_multiline_string_repeat1] = aux_sym_multiline_string_repeat1,
  [aux_sym_multiline_string_content_repeat1] = aux_sym_multiline_string_content_repeat1,
  [aux_sym__multiline_string_text_repeat1] = aux_sym__multiline_string_text_repeat1,
  [aux_sym_filename_repeat1] = aux_sym_filename_repeat1,
  [aux_sym_filename_content_repeat1] = aux_sym_filename_content_repeat1,
  [aux_sym_json_object_repeat1] = aux_sym_json_object_repeat1,
  [aux_sym_json_array_repeat1] = aux_sym_json_array_repeat1,
  [aux_sym_json_string_repeat1] = aux_sym_json_string_repeat1,
  [aux_sym_integer_repeat1] = aux_sym_integer_repeat1,
  [aux_sym_regex_content_repeat1] = aux_sym_regex_content_repeat1,
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
  [aux_sym_method_token1] = {
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
  [anon_sym_HTTP_SLASH3] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_HTTP_SLASH_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_HTTP] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_status_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACKBasicAuth_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACKQuery_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACKQueryStringParams_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACKForm_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACKFormParams_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACKMultipart_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACKMultipartFormData_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACKCookies_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACKCaptures_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACKAsserts_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACKOptions_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_null] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_file_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_file_value_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_cacert] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_compressed] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_location] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_insecure] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_max_DASHredirs] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_path_DASHas_DASHis] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_proxy] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_retry] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_retry_DASHinterval] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_retry_DASHmax_DASHcount] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_variable] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_verbose] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_very_DASHverbose] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
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
  [anon_sym_body] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_duration] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bytes] = {
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
  [anon_sym_header] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cookie] = {
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
  [anon_sym_regex] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_not] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_exists] = {
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
  [anon_sym_isNumber] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_isIsoDate] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_isEmpty] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_equals] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_notEquals] = {
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
  [anon_sym_GT_EQ] = {
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
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_startsWith] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endsWith] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_contains] = {
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
  [anon_sym_base64_COMMA] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_oneline_base64_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_hex_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [sym_quoted_string_text] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_invalid_quoted_string_escaped_char_token1] = {
    .visible = false,
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
  [sym_key_string_text] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_key_string_escaped_char_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_value_string_text_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_oneline_string_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_BQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_oneline_string_text_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_oneline_string_text_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_BQUOTE_BQUOTE_BQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_base64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_hex] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_json] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_xml] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_graphql] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_multiline_string_type_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__multiline_string_text_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym_filename_text] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_filename_escaped_char_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
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
  [sym_json_string_text] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACE_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_variable_name_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_variable_name_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_count] = {
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
  [anon_sym_toInt] = {
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
  [anon_sym_daysAfterNow] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_daysBeforeNow] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_decode] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_format] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_toDate] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_nth] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_replace] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_split] = {
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
  [sym__alphanum] = {
    .visible = false,
    .named = true,
  },
  [sym_digit] = {
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
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [sym_regex_text] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_regex_escaped_char_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_hurl_file] = {
    .visible = true,
    .named = true,
  },
  [sym_entry] = {
    .visible = true,
    .named = true,
  },
  [sym__comment_or_new_line] = {
    .visible = false,
    .named = true,
  },
  [sym_request] = {
    .visible = true,
    .named = true,
  },
  [sym_response] = {
    .visible = true,
    .named = true,
  },
  [sym_method] = {
    .visible = true,
    .named = true,
  },
  [sym_version] = {
    .visible = true,
    .named = true,
  },
  [sym_status] = {
    .visible = true,
    .named = true,
  },
  [sym_header] = {
    .visible = true,
    .named = true,
  },
  [sym_body] = {
    .visible = true,
    .named = true,
  },
  [sym_request_section] = {
    .visible = true,
    .named = true,
  },
  [sym_response_section] = {
    .visible = true,
    .named = true,
  },
  [sym_basic_auth_section] = {
    .visible = true,
    .named = true,
  },
  [sym_query_string_params_section] = {
    .visible = true,
    .named = true,
  },
  [sym_form_params_section] = {
    .visible = true,
    .named = true,
  },
  [sym_multipart_form_data_section] = {
    .visible = true,
    .named = true,
  },
  [sym_cookies_section] = {
    .visible = true,
    .named = true,
  },
  [sym_captures_section] = {
    .visible = true,
    .named = true,
  },
  [sym_asserts_section] = {
    .visible = true,
    .named = true,
  },
  [sym_options_section] = {
    .visible = true,
    .named = true,
  },
  [sym_key_value] = {
    .visible = true,
    .named = true,
  },
  [sym_multipart_form_data_param] = {
    .visible = true,
    .named = true,
  },
  [sym_file_param] = {
    .visible = true,
    .named = true,
  },
  [sym_file_value] = {
    .visible = true,
    .named = true,
  },
  [sym_capture] = {
    .visible = true,
    .named = true,
  },
  [sym_assert] = {
    .visible = true,
    .named = true,
  },
  [sym_option] = {
    .visible = true,
    .named = true,
  },
  [sym_ca_certificate_option] = {
    .visible = true,
    .named = true,
  },
  [sym_compressed_option] = {
    .visible = true,
    .named = true,
  },
  [sym_follow_redirect_option] = {
    .visible = true,
    .named = true,
  },
  [sym_insecure_option] = {
    .visible = true,
    .named = true,
  },
  [sym_max_redirs_option] = {
    .visible = true,
    .named = true,
  },
  [sym_path_as_is_option] = {
    .visible = true,
    .named = true,
  },
  [sym_proxy_option] = {
    .visible = true,
    .named = true,
  },
  [sym_retry_option] = {
    .visible = true,
    .named = true,
  },
  [sym_retry_interval_option] = {
    .visible = true,
    .named = true,
  },
  [sym_retry_max_count_option] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_option] = {
    .visible = true,
    .named = true,
  },
  [sym_verbose_option] = {
    .visible = true,
    .named = true,
  },
  [sym_very_verbose_option] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_value] = {
    .visible = true,
    .named = true,
  },
  [sym_query] = {
    .visible = true,
    .named = true,
  },
  [sym_header_query] = {
    .visible = true,
    .named = true,
  },
  [sym_cookie_query] = {
    .visible = true,
    .named = true,
  },
  [sym_xpath_query] = {
    .visible = true,
    .named = true,
  },
  [sym_jsonpath_query] = {
    .visible = true,
    .named = true,
  },
  [sym_regex_query] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_query] = {
    .visible = true,
    .named = true,
  },
  [sym_predicate] = {
    .visible = true,
    .named = true,
  },
  [sym_predicate_func] = {
    .visible = true,
    .named = true,
  },
  [sym_equal_predicate] = {
    .visible = true,
    .named = true,
  },
  [sym_not_equal_predicate] = {
    .visible = true,
    .named = true,
  },
  [sym_greater_predicate] = {
    .visible = true,
    .named = true,
  },
  [sym_greater_or_equal_predicate] = {
    .visible = true,
    .named = true,
  },
  [sym_less_predicate] = {
    .visible = true,
    .named = true,
  },
  [sym_less_or_equal_predicate] = {
    .visible = true,
    .named = true,
  },
  [sym_start_with_predicate] = {
    .visible = true,
    .named = true,
  },
  [sym_end_with_predicate] = {
    .visible = true,
    .named = true,
  },
  [sym_contain_predicate] = {
    .visible = true,
    .named = true,
  },
  [sym_match_predicate] = {
    .visible = true,
    .named = true,
  },
  [sym_include_predicate] = {
    .visible = true,
    .named = true,
  },
  [sym_predicate_value] = {
    .visible = true,
    .named = true,
  },
  [sym_bytes] = {
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
  [sym_oneline_base64] = {
    .visible = true,
    .named = true,
  },
  [sym_oneline_file] = {
    .visible = true,
    .named = true,
  },
  [sym_oneline_hex] = {
    .visible = true,
    .named = true,
  },
  [sym_quoted_string] = {
    .visible = true,
    .named = true,
  },
  [sym_quoted_string_content] = {
    .visible = true,
    .named = true,
  },
  [sym_invalid_quoted_string_escaped_char] = {
    .visible = true,
    .named = true,
  },
  [sym_quoted_string_escaped_char] = {
    .visible = true,
    .named = true,
  },
  [sym_key_string] = {
    .visible = true,
    .named = true,
  },
  [sym_key_string_content] = {
    .visible = true,
    .named = true,
  },
  [sym_key_string_escaped_char] = {
    .visible = true,
    .named = true,
  },
  [sym_value_string] = {
    .visible = true,
    .named = true,
  },
  [sym_value_string_content] = {
    .visible = true,
    .named = true,
  },
  [sym_value_string_text] = {
    .visible = true,
    .named = true,
  },
  [sym_value_string_escaped_char] = {
    .visible = true,
    .named = true,
  },
  [sym_oneline_string] = {
    .visible = true,
    .named = true,
  },
  [sym_oneline_string_content] = {
    .visible = true,
    .named = true,
  },
  [sym_oneline_string_text] = {
    .visible = true,
    .named = true,
  },
  [sym_oneline_string_escaped_char] = {
    .visible = true,
    .named = true,
  },
  [sym_multiline_string] = {
    .visible = true,
    .named = true,
  },
  [sym_multiline_string_type] = {
    .visible = true,
    .named = true,
  },
  [sym_multiline_string_content] = {
    .visible = true,
    .named = true,
  },
  [sym__multiline_string_text] = {
    .visible = false,
    .named = true,
  },
  [sym_multiline_string_escaped_char] = {
    .visible = true,
    .named = true,
  },
  [sym_filename] = {
    .visible = true,
    .named = true,
  },
  [sym_filename_content] = {
    .visible = true,
    .named = true,
  },
  [sym_filename_escaped_char] = {
    .visible = true,
    .named = true,
  },
  [sym_unicode_char] = {
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
  [sym_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_name] = {
    .visible = true,
    .named = true,
  },
  [sym_filter] = {
    .visible = true,
    .named = true,
  },
  [sym_regex_filter] = {
    .visible = true,
    .named = true,
  },
  [sym_nth_filter] = {
    .visible = true,
    .named = true,
  },
  [sym_replace_filter] = {
    .visible = true,
    .named = true,
  },
  [sym_split_filter] = {
    .visible = true,
    .named = true,
  },
  [sym_xpath_filter] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean] = {
    .visible = true,
    .named = true,
  },
  [sym_integer] = {
    .visible = true,
    .named = true,
  },
  [sym_float] = {
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
  [sym_regex] = {
    .visible = true,
    .named = true,
  },
  [sym_regex_content] = {
    .visible = true,
    .named = true,
  },
  [sym_regex_escaped_char] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_hurl_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_hurl_file_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__comment_or_new_line_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_request_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_request_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_response_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_query_string_params_section_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_multipart_form_data_section_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_captures_section_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_asserts_section_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_options_section_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_capture_repeat1] = {
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
  [aux_sym_oneline_hex_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_quoted_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_quoted_string_content_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_key_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_key_string_content_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_value_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_value_string_content_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_value_string_text_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_oneline_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_oneline_string_content_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_multiline_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_multiline_string_content_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__multiline_string_text_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_filename_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_filename_content_repeat1] = {
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
  [aux_sym_integer_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_regex_content_repeat1] = {
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
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
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
  [53] = 15,
  [54] = 14,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 14,
  [60] = 15,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 35,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 14,
  [88] = 15,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 58,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 55,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 56,
  [112] = 57,
  [113] = 52,
  [114] = 52,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 15,
  [125] = 14,
  [126] = 126,
  [127] = 127,
  [128] = 103,
  [129] = 129,
  [130] = 129,
  [131] = 131,
  [132] = 132,
  [133] = 127,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 80,
  [139] = 81,
  [140] = 70,
  [141] = 82,
  [142] = 69,
  [143] = 72,
  [144] = 71,
  [145] = 84,
  [146] = 85,
  [147] = 74,
  [148] = 78,
  [149] = 75,
  [150] = 150,
  [151] = 83,
  [152] = 79,
  [153] = 153,
  [154] = 154,
  [155] = 73,
  [156] = 154,
  [157] = 77,
  [158] = 76,
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
  [169] = 164,
  [170] = 170,
  [171] = 165,
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
  [183] = 178,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 176,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 179,
  [195] = 189,
  [196] = 196,
  [197] = 196,
  [198] = 179,
  [199] = 192,
  [200] = 189,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 207,
  [209] = 209,
  [210] = 210,
  [211] = 211,
  [212] = 212,
  [213] = 209,
  [214] = 214,
  [215] = 180,
  [216] = 184,
  [217] = 201,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 56,
  [222] = 222,
  [223] = 223,
  [224] = 224,
  [225] = 225,
  [226] = 57,
  [227] = 227,
  [228] = 228,
  [229] = 227,
  [230] = 230,
  [231] = 230,
  [232] = 232,
  [233] = 233,
  [234] = 234,
  [235] = 235,
  [236] = 236,
  [237] = 237,
  [238] = 220,
  [239] = 239,
  [240] = 220,
  [241] = 224,
  [242] = 242,
  [243] = 224,
  [244] = 244,
  [245] = 245,
  [246] = 246,
  [247] = 234,
  [248] = 246,
  [249] = 249,
  [250] = 250,
  [251] = 251,
  [252] = 252,
  [253] = 253,
  [254] = 254,
  [255] = 232,
  [256] = 230,
  [257] = 242,
  [258] = 258,
  [259] = 259,
  [260] = 260,
  [261] = 261,
  [262] = 262,
  [263] = 260,
  [264] = 260,
  [265] = 246,
  [266] = 14,
  [267] = 260,
  [268] = 222,
  [269] = 269,
  [270] = 270,
  [271] = 271,
  [272] = 219,
  [273] = 273,
  [274] = 249,
  [275] = 275,
  [276] = 262,
  [277] = 277,
  [278] = 278,
  [279] = 279,
  [280] = 280,
  [281] = 15,
  [282] = 282,
  [283] = 283,
  [284] = 284,
  [285] = 260,
  [286] = 262,
  [287] = 287,
  [288] = 288,
  [289] = 260,
  [290] = 249,
  [291] = 291,
  [292] = 292,
  [293] = 293,
  [294] = 294,
  [295] = 249,
  [296] = 296,
  [297] = 297,
  [298] = 260,
  [299] = 299,
  [300] = 260,
  [301] = 260,
  [302] = 302,
  [303] = 303,
  [304] = 269,
  [305] = 305,
  [306] = 306,
  [307] = 307,
  [308] = 308,
  [309] = 309,
  [310] = 310,
  [311] = 311,
  [312] = 284,
  [313] = 313,
  [314] = 314,
  [315] = 315,
  [316] = 316,
  [317] = 237,
  [318] = 318,
  [319] = 319,
  [320] = 320,
  [321] = 321,
  [322] = 322,
  [323] = 284,
  [324] = 324,
  [325] = 325,
  [326] = 269,
  [327] = 260,
  [328] = 328,
  [329] = 249,
  [330] = 328,
  [331] = 331,
  [332] = 291,
  [333] = 303,
  [334] = 334,
  [335] = 306,
  [336] = 336,
  [337] = 320,
  [338] = 260,
  [339] = 250,
  [340] = 334,
  [341] = 341,
  [342] = 342,
  [343] = 343,
  [344] = 344,
  [345] = 345,
  [346] = 345,
  [347] = 347,
  [348] = 348,
  [349] = 345,
  [350] = 345,
  [351] = 351,
  [352] = 345,
  [353] = 353,
  [354] = 345,
  [355] = 355,
  [356] = 356,
  [357] = 357,
  [358] = 358,
  [359] = 359,
  [360] = 360,
  [361] = 361,
  [362] = 362,
  [363] = 345,
  [364] = 364,
  [365] = 365,
  [366] = 366,
  [367] = 345,
  [368] = 345,
  [369] = 345,
  [370] = 370,
  [371] = 371,
  [372] = 345,
  [373] = 373,
  [374] = 343,
  [375] = 375,
  [376] = 376,
  [377] = 377,
  [378] = 378,
  [379] = 379,
  [380] = 380,
  [381] = 381,
  [382] = 382,
  [383] = 383,
  [384] = 384,
  [385] = 373,
  [386] = 386,
  [387] = 387,
  [388] = 345,
  [389] = 384,
  [390] = 383,
  [391] = 260,
  [392] = 382,
  [393] = 393,
  [394] = 394,
  [395] = 395,
  [396] = 396,
  [397] = 397,
  [398] = 398,
  [399] = 387,
  [400] = 400,
  [401] = 401,
  [402] = 402,
  [403] = 403,
  [404] = 404,
  [405] = 405,
  [406] = 377,
  [407] = 407,
  [408] = 408,
  [409] = 409,
  [410] = 410,
  [411] = 411,
  [412] = 412,
  [413] = 413,
  [414] = 414,
  [415] = 415,
  [416] = 416,
  [417] = 417,
  [418] = 418,
  [419] = 291,
  [420] = 370,
  [421] = 421,
  [422] = 422,
  [423] = 423,
  [424] = 424,
  [425] = 425,
  [426] = 426,
  [427] = 427,
  [428] = 428,
  [429] = 429,
  [430] = 430,
  [431] = 431,
  [432] = 432,
  [433] = 397,
  [434] = 306,
  [435] = 435,
  [436] = 436,
  [437] = 437,
  [438] = 438,
  [439] = 439,
  [440] = 440,
  [441] = 441,
  [442] = 442,
  [443] = 443,
  [444] = 444,
  [445] = 445,
  [446] = 446,
  [447] = 447,
  [448] = 448,
  [449] = 449,
  [450] = 437,
  [451] = 451,
  [452] = 452,
  [453] = 453,
  [454] = 454,
  [455] = 445,
  [456] = 456,
  [457] = 443,
  [458] = 458,
  [459] = 446,
  [460] = 441,
  [461] = 439,
  [462] = 447,
  [463] = 458,
  [464] = 458,
  [465] = 254,
  [466] = 466,
  [467] = 466,
  [468] = 444,
  [469] = 454,
  [470] = 466,
  [471] = 471,
  [472] = 472,
  [473] = 473,
  [474] = 342,
  [475] = 475,
  [476] = 259,
  [477] = 477,
  [478] = 407,
  [479] = 479,
  [480] = 480,
  [481] = 481,
  [482] = 408,
  [483] = 483,
  [484] = 484,
  [485] = 331,
  [486] = 486,
  [487] = 487,
  [488] = 488,
  [489] = 489,
  [490] = 490,
  [491] = 491,
  [492] = 492,
  [493] = 493,
  [494] = 494,
  [495] = 495,
  [496] = 496,
  [497] = 497,
  [498] = 498,
  [499] = 499,
  [500] = 500,
  [501] = 501,
  [502] = 502,
  [503] = 503,
  [504] = 504,
  [505] = 505,
  [506] = 506,
  [507] = 507,
  [508] = 508,
  [509] = 509,
  [510] = 510,
  [511] = 511,
  [512] = 512,
  [513] = 513,
  [514] = 514,
  [515] = 515,
  [516] = 516,
  [517] = 517,
  [518] = 428,
  [519] = 519,
  [520] = 251,
  [521] = 521,
  [522] = 522,
  [523] = 523,
  [524] = 524,
  [525] = 525,
  [526] = 526,
  [527] = 527,
  [528] = 528,
  [529] = 427,
  [530] = 530,
  [531] = 531,
  [532] = 532,
  [533] = 533,
  [534] = 534,
  [535] = 473,
  [536] = 536,
  [537] = 537,
  [538] = 293,
  [539] = 539,
  [540] = 540,
  [541] = 432,
  [542] = 542,
  [543] = 543,
  [544] = 544,
  [545] = 545,
  [546] = 431,
  [547] = 547,
  [548] = 548,
  [549] = 549,
  [550] = 550,
  [551] = 551,
  [552] = 552,
  [553] = 553,
  [554] = 477,
  [555] = 555,
  [556] = 539,
  [557] = 557,
  [558] = 405,
  [559] = 403,
  [560] = 239,
  [561] = 561,
  [562] = 562,
  [563] = 563,
  [564] = 564,
  [565] = 533,
  [566] = 473,
  [567] = 563,
  [568] = 533,
  [569] = 563,
  [570] = 533,
  [571] = 563,
  [572] = 533,
  [573] = 533,
  [574] = 533,
  [575] = 533,
  [576] = 533,
  [577] = 533,
  [578] = 533,
  [579] = 579,
  [580] = 514,
  [581] = 581,
  [582] = 582,
  [583] = 521,
  [584] = 547,
  [585] = 563,
  [586] = 547,
  [587] = 587,
  [588] = 547,
  [589] = 589,
  [590] = 547,
  [591] = 591,
  [592] = 592,
  [593] = 593,
  [594] = 594,
  [595] = 543,
  [596] = 596,
  [597] = 533,
  [598] = 525,
  [599] = 525,
  [600] = 525,
  [601] = 525,
  [602] = 513,
  [603] = 513,
  [604] = 513,
  [605] = 513,
  [606] = 483,
  [607] = 483,
  [608] = 483,
  [609] = 483,
};

static TSCharacterRange extras_character_set_1[] = {
  {'\t', '\t'}, {0x0b, '\r'}, {' ', ' '}, {0xa0, 0xa0}, {0x1680, 0x1680}, {0x2000, 0x200b}, {0x202f, 0x202f}, {0x205f, 0x2060},
  {0x3000, 0x3000}, {0xfeff, 0xfeff},
};

static TSCharacterRange extras_character_set_2[] = {
  {'\t', '\r'}, {' ', ' '}, {0xa0, 0xa0}, {0x1680, 0x1680}, {0x2000, 0x200b}, {0x202f, 0x202f}, {0x205f, 0x2060}, {0x3000, 0x3000},
  {0xfeff, 0xfeff},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(526);
      ADVANCE_MAP(
        '!', 60,
        '"', 735,
        '#', 924,
        '*', 631,
        '+', 1014,
        ',', 971,
        '-', 1015,
        '.', 1009,
        '/', 1018,
        ':', 654,
        ';', 659,
        '<', 708,
        '=', 675,
        '>', 704,
        '?', 62,
        'E', 1013,
        '[', 973,
        '\\', 916,
        ']', 978,
        '`', 927,
        'b', 744,
        'e', 1010,
        'f', 745,
        'n', 746,
        'r', 747,
        't', 748,
        'u', 749,
        '{', 964,
        '}', 970,
        'a', 987,
        'c', 987,
        'd', 987,
      );
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(622);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(630);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      if (('G' <= lookahead && lookahead <= 'Z')) ADVANCE(622);
      if (set_contains(extras_character_set_2, 9, lookahead)) SKIP(523);
      END_STATE();
    case 1:
      ADVANCE_MAP(
        '\n', 527,
        '#', 1017,
        '.', 1009,
        'E', 1012,
        'c', 345,
        'd', 102,
        'e', 1010,
        'f', 346,
        'h', 456,
        'n', 457,
        'r', 191,
        's', 355,
        't', 321,
        'u', 387,
        'x', 362,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1007);
      if (set_contains(extras_character_set_2, 9, lookahead)) SKIP(1);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(527);
      if (lookahead == '#') ADVANCE(1017);
      if (lookahead == ':') ADVANCE(654);
      if (lookahead == '\\') ADVANCE(916);
      if (lookahead == '{') ADVANCE(513);
      if (set_contains(extras_character_set_2, 9, lookahead)) SKIP(5);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= ']') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(527);
      if (lookahead == '#') ADVANCE(1017);
      if (lookahead == '\\') ADVANCE(740);
      if (lookahead == 'f') ADVANCE(920);
      if (lookahead == 'n') ADVANCE(922);
      if (lookahead == 't') ADVANCE(921);
      if (lookahead == '{') ADVANCE(923);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(919);
      if (set_contains(extras_character_set_2, 9, lookahead)) ADVANCE(919);
      if (lookahead != 0) ADVANCE(919);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(527);
      if (lookahead == '#') ADVANCE(1017);
      if (lookahead == '\\') ADVANCE(740);
      if (lookahead == '{') ADVANCE(923);
      if (set_contains(extras_character_set_2, 9, lookahead)) ADVANCE(919);
      if (lookahead != 0) ADVANCE(919);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(527);
      if (lookahead == '#') ADVANCE(1017);
      if (set_contains(extras_character_set_2, 9, lookahead)) SKIP(5);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(527);
      if (lookahead == '#') ADVANCE(1017);
      if (set_contains(extras_character_set_2, 9, lookahead)) SKIP(6);
      if (lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(660);
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(35);
      if (lookahead == '#') ADVANCE(1017);
      if (lookahead == '<') ADVANCE(709);
      if (lookahead == '\\') ADVANCE(740);
      if (lookahead == '{') ADVANCE(923);
      if (set_contains(extras_character_set_2, 9, lookahead)) ADVANCE(919);
      if (lookahead != 0) ADVANCE(919);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(528);
      if (lookahead == ' ') SKIP(9);
      if (lookahead == '#') ADVANCE(1017);
      if (lookahead == '\\') ADVANCE(740);
      if (lookahead == '{') ADVANCE(966);
      if (set_contains(extras_character_set_2, 9, lookahead)) ADVANCE(965);
      if (lookahead != 0 &&
          lookahead != ';') ADVANCE(968);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(528);
      if (lookahead == ' ') SKIP(9);
      if (lookahead == '#') ADVANCE(1017);
      if (lookahead == '\\') ADVANCE(740);
      if (set_contains(extras_character_set_2, 9, lookahead)) ADVANCE(965);
      if (lookahead != 0 &&
          lookahead != ';') ADVANCE(968);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(529);
      if (lookahead == '#') ADVANCE(961);
      if (lookahead == '\\') ADVANCE(740);
      if (lookahead == '`') ADVANCE(927);
      if (lookahead == '{') ADVANCE(964);
      if (set_contains(extras_character_set_2, 9, lookahead)) ADVANCE(960);
      if (lookahead != 0) ADVANCE(962);
      END_STATE();
    case 11:
      if (lookahead == '\n') SKIP(36);
      if (lookahead == '#') ADVANCE(1017);
      if (lookahead == '\\') ADVANCE(740);
      if (lookahead == '{') ADVANCE(923);
      if (set_contains(extras_character_set_2, 9, lookahead)) ADVANCE(919);
      if (lookahead != 0) ADVANCE(919);
      END_STATE();
    case 12:
      if (lookahead == '\n') SKIP(13);
      if (lookahead == '#') ADVANCE(1017);
      if (lookahead == '\\') ADVANCE(740);
      if (lookahead == '`') ADVANCE(926);
      if (lookahead == '{') ADVANCE(930);
      if (set_contains(extras_character_set_2, 9, lookahead)) ADVANCE(929);
      if (lookahead != 0) ADVANCE(928);
      END_STATE();
    case 13:
      if (lookahead == '\n') SKIP(13);
      if (lookahead == '#') ADVANCE(1017);
      if (lookahead == '\\') ADVANCE(740);
      if (lookahead == '`') ADVANCE(926);
      if (set_contains(extras_character_set_2, 9, lookahead)) ADVANCE(929);
      if (lookahead != 0) ADVANCE(928);
      END_STATE();
    case 14:
      if (lookahead == '\n') SKIP(14);
      if (lookahead == '#') ADVANCE(1016);
      if (lookahead == '/') ADVANCE(1018);
      if (lookahead == '\\') ADVANCE(740);
      if (set_contains(extras_character_set_2, 9, lookahead)) ADVANCE(1019);
      if (lookahead != 0) ADVANCE(1020);
      END_STATE();
    case 15:
      if (lookahead == '\n') SKIP(15);
      if (lookahead == '#') ADVANCE(1017);
      if (set_contains(extras_character_set_2, 9, lookahead)) ADVANCE(1022);
      if (lookahead != 0) ADVANCE(1021);
      END_STATE();
    case 16:
      if (lookahead == '\n') ADVANCE(732);
      if (lookahead == '#') ADVANCE(1017);
      if (set_contains(extras_character_set_2, 9, lookahead)) SKIP(16);
      if (('+' <= lookahead && lookahead <= '-') ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(733);
      END_STATE();
    case 17:
      if (lookahead == '\n') ADVANCE(530);
      if (lookahead == '#') ADVANCE(959);
      if (lookahead == 'b') ADVANCE(944);
      if (lookahead == 'g') ADVANCE(955);
      if (lookahead == 'h') ADVANCE(945);
      if (lookahead == 'j') ADVANCE(956);
      if (lookahead == 'x') ADVANCE(950);
      if (set_contains(extras_character_set_2, 9, lookahead)) ADVANCE(940);
      if (lookahead != 0) ADVANCE(959);
      END_STATE();
    case 18:
      ADVANCE_MAP(
        '!', 60,
        '#', 1017,
        ',', 971,
        '.', 1009,
        ':', 657,
        '<', 710,
        '=', 61,
        '>', 704,
        'E', 1012,
        ']', 978,
        'c', 324,
        'd', 102,
        'e', 1011,
        'f', 346,
        'g', 396,
        'h', 456,
        'i', 305,
        'l', 221,
        'm', 127,
        'n', 339,
        'r', 191,
        's', 356,
        't', 321,
        'u', 387,
        'x', 362,
        '{', 963,
        '}', 514,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1007);
      if (set_contains(extras_character_set_2, 9, lookahead)) SKIP(18);
      END_STATE();
    case 19:
      ADVANCE_MAP(
        '"', 735,
        '#', 1017,
        ',', 971,
        '<', 711,
        '=', 674,
        '>', 703,
        '\\', 916,
        'f', 830,
        'n', 907,
        't', 880,
        '{', 513,
        '}', 970,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(915);
      if (set_contains(extras_character_set_2, 9, lookahead)) SKIP(20);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= ']') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 20:
      ADVANCE_MAP(
        '"', 735,
        '#', 1017,
        ',', 971,
        '<', 711,
        '=', 674,
        '>', 703,
        'f', 96,
        'n', 484,
        't', 380,
        '}', 970,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1007);
      if (set_contains(extras_character_set_2, 9, lookahead)) SKIP(20);
      END_STATE();
    case 21:
      ADVANCE_MAP(
        '"', 735,
        '#', 1017,
        '\\', 740,
        '`', 926,
        'b', 744,
        'f', 745,
        'n', 746,
        'r', 747,
        't', 748,
        'u', 749,
      );
      if (set_contains(extras_character_set_2, 9, lookahead)) SKIP(21);
      END_STATE();
    case 22:
      if (lookahead == '"') ADVANCE(735);
      if (lookahead == '#') ADVANCE(736);
      if (lookahead == '\\') ADVANCE(740);
      if (lookahead == '{') ADVANCE(738);
      if (set_contains(extras_character_set_2, 9, lookahead)) ADVANCE(737);
      if (lookahead != 0) ADVANCE(739);
      END_STATE();
    case 23:
      ADVANCE_MAP(
        '"', 735,
        '#', 743,
        '\\', 740,
        'b', 744,
        'f', 745,
        'n', 746,
        'r', 747,
        't', 748,
        'u', 749,
      );
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == '\r') SKIP(23);
      if (set_contains(extras_character_set_2, 9, lookahead)) ADVANCE(742);
      if (lookahead != 0) ADVANCE(741);
      END_STATE();
    case 24:
      if (lookahead == '"') ADVANCE(735);
      if (lookahead == '#') ADVANCE(982);
      if (lookahead == '\\') ADVANCE(740);
      if (lookahead == '{') ADVANCE(981);
      if (set_contains(extras_character_set_2, 9, lookahead)) ADVANCE(980);
      if (lookahead != 0) ADVANCE(979);
      END_STATE();
    case 25:
      if (lookahead == '"') ADVANCE(917);
      if (lookahead == '#') ADVANCE(918);
      if (set_contains(extras_character_set_2, 9, lookahead)) SKIP(38);
      END_STATE();
    case 26:
      ADVANCE_MAP(
        '#', 924,
        ',', 969,
        ';', 659,
        '\\', 740,
        '`', 926,
        'b', 744,
        'f', 745,
        'n', 746,
        'r', 747,
        't', 748,
        'u', 749,
      );
      if (set_contains(extras_character_set_2, 9, lookahead)) SKIP(26);
      END_STATE();
    case 27:
      ADVANCE_MAP(
        '#', 1017,
        '*', 631,
        '=', 674,
        'c', 345,
        'd', 102,
        'f', 346,
        'h', 456,
        'n', 457,
        'r', 191,
        's', 355,
        't', 321,
        'u', 387,
        'x', 362,
        '}', 514,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(630);
      if (set_contains(extras_character_set_2, 9, lookahead)) SKIP(27);
      END_STATE();
    case 28:
      ADVANCE_MAP(
        '#', 1017,
        ',', 971,
        '.', 1009,
        ':', 657,
        'E', 1012,
        ']', 978,
        'b', 326,
        'c', 343,
        'd', 490,
        'e', 1010,
        'h', 213,
        'j', 424,
        'm', 163,
        'r', 194,
        's', 241,
        'u', 381,
        'v', 113,
        'x', 362,
        '}', 970,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1007);
      if (set_contains(extras_character_set_2, 9, lookahead)) SKIP(28);
      END_STATE();
    case 29:
      if (lookahead == '#') ADVANCE(1017);
      if (lookahead == ':') ADVANCE(654);
      if (lookahead == '\\') ADVANCE(916);
      if (lookahead == '{') ADVANCE(513);
      if (set_contains(extras_character_set_2, 9, lookahead)) SKIP(31);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= ']') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 30:
      if (lookahead == '#') ADVANCE(1017);
      if (lookahead == ':') ADVANCE(657);
      if (lookahead == '\\') ADVANCE(916);
      if (lookahead == '{') ADVANCE(513);
      if (set_contains(extras_character_set_2, 9, lookahead)) SKIP(31);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= ']') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 31:
      if (lookahead == '#') ADVANCE(1017);
      if (lookahead == ':') ADVANCE(657);
      if (set_contains(extras_character_set_2, 9, lookahead)) SKIP(31);
      END_STATE();
    case 32:
      if (lookahead == '#') ADVANCE(1017);
      if (lookahead == ';') ADVANCE(659);
      if (lookahead == '\\') ADVANCE(740);
      if (lookahead == '{') ADVANCE(966);
      if (lookahead == '\n' ||
          lookahead == ' ') SKIP(33);
      if (set_contains(extras_character_set_2, 9, lookahead)) ADVANCE(967);
      if (lookahead != 0) ADVANCE(968);
      END_STATE();
    case 33:
      if (lookahead == '#') ADVANCE(1017);
      if (lookahead == ';') ADVANCE(659);
      if (lookahead == '\\') ADVANCE(740);
      if (lookahead == '\n' ||
          lookahead == ' ') SKIP(33);
      if (set_contains(extras_character_set_2, 9, lookahead)) ADVANCE(967);
      if (lookahead != 0) ADVANCE(968);
      END_STATE();
    case 34:
      if (lookahead == '#') ADVANCE(1017);
      if (lookahead == ';') ADVANCE(659);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1008);
      if (set_contains(extras_character_set_2, 9, lookahead)) SKIP(34);
      END_STATE();
    case 35:
      if (lookahead == '#') ADVANCE(1017);
      if (lookahead == '<') ADVANCE(709);
      if (lookahead == '\\') ADVANCE(740);
      if (set_contains(extras_character_set_2, 9, lookahead)) SKIP(35);
      END_STATE();
    case 36:
      if (lookahead == '#') ADVANCE(1017);
      if (lookahead == '\\') ADVANCE(740);
      if (set_contains(extras_character_set_2, 9, lookahead)) SKIP(36);
      END_STATE();
    case 37:
      if (lookahead == '#') ADVANCE(1017);
      if (set_contains(extras_character_set_2, 9, lookahead)) SKIP(37);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 38:
      if (lookahead == '#') ADVANCE(1017);
      if (set_contains(extras_character_set_2, 9, lookahead)) SKIP(38);
      END_STATE();
    case 39:
      if (lookahead == '#') ADVANCE(720);
      if (set_contains(extras_character_set_2, 9, lookahead)) ADVANCE(721);
      if (lookahead != 0 &&
          lookahead != '?') ADVANCE(722);
      END_STATE();
    case 40:
      if (lookahead == '#') ADVANCE(724);
      if (set_contains(extras_character_set_2, 9, lookahead)) ADVANCE(725);
      if (lookahead != 0 &&
          lookahead != '/' &&
          lookahead != '?') ADVANCE(726);
      END_STATE();
    case 41:
      if (lookahead == '#') ADVANCE(728);
      if (set_contains(extras_character_set_2, 9, lookahead)) ADVANCE(729);
      if (lookahead != 0 &&
          lookahead != '/' &&
          lookahead != '>') ADVANCE(730);
      END_STATE();
    case 42:
      if (lookahead == '#') ADVANCE(933);
      if (set_contains(extras_character_set_2, 9, lookahead)) ADVANCE(932);
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(931);
      END_STATE();
    case 43:
      if (lookahead == '*') ADVANCE(627);
      if (lookahead == '1') ADVANCE(52);
      if (lookahead == '2') ADVANCE(625);
      if (lookahead == '3') ADVANCE(626);
      END_STATE();
    case 44:
      if (lookahead == ',') ADVANCE(734);
      END_STATE();
    case 45:
      if (lookahead == ',') ADVANCE(658);
      END_STATE();
    case 46:
      if (lookahead == ',') ADVANCE(731);
      END_STATE();
    case 47:
      if (lookahead == '-') ADVANCE(499);
      END_STATE();
    case 48:
      if (lookahead == '-') ADVANCE(257);
      END_STATE();
    case 49:
      if (lookahead == '-') ADVANCE(154);
      END_STATE();
    case 50:
      if (lookahead == '-') ADVANCE(392);
      END_STATE();
    case 51:
      if (lookahead == '-') ADVANCE(126);
      END_STATE();
    case 52:
      if (lookahead == '.') ADVANCE(53);
      END_STATE();
    case 53:
      if (lookahead == '0') ADVANCE(623);
      if (lookahead == '1') ADVANCE(624);
      END_STATE();
    case 54:
      if (lookahead == '2') ADVANCE(57);
      END_STATE();
    case 55:
      if (lookahead == '4') ADVANCE(46);
      END_STATE();
    case 56:
      if (lookahead == '5') ADVANCE(682);
      END_STATE();
    case 57:
      if (lookahead == '5') ADVANCE(59);
      END_STATE();
    case 58:
      if (lookahead == '6') ADVANCE(55);
      END_STATE();
    case 59:
      if (lookahead == '6') ADVANCE(681);
      END_STATE();
    case 60:
      if (lookahead == '=') ADVANCE(701);
      END_STATE();
    case 61:
      if (lookahead == '=') ADVANCE(699);
      END_STATE();
    case 62:
      if (lookahead == '>') ADVANCE(723);
      END_STATE();
    case 63:
      if (lookahead == 'A') ADVANCE(226);
      if (lookahead == 'B') ADVANCE(198);
      END_STATE();
    case 64:
      if (lookahead == 'A') ADVANCE(485);
      END_STATE();
    case 65:
      if (lookahead == 'B') ADVANCE(338);
      if (lookahead == 'C') ADVANCE(336);
      if (lookahead == 'E') ADVANCE(294);
      if (lookahead == 'F') ADVANCE(278);
      if (lookahead == 'I') ADVANCE(313);
      if (lookahead == 'N') ADVANCE(487);
      if (lookahead == 'S') ADVANCE(468);
      END_STATE();
    case 66:
      if (lookahead == 'D') ADVANCE(110);
      END_STATE();
    case 67:
      if (lookahead == 'D') ADVANCE(224);
      if (lookahead == 'E') ADVANCE(317);
      END_STATE();
    case 68:
      if (lookahead == 'D') ADVANCE(124);
      if (lookahead == 'I') ADVANCE(309);
      END_STATE();
    case 69:
      if (lookahead == 'D') ADVANCE(138);
      END_STATE();
    case 70:
      if (lookahead == 'E') ADVANCE(436);
      if (lookahead == 'U') ADVANCE(314);
      END_STATE();
    case 71:
      if (lookahead == 'E') ADVANCE(365);
      END_STATE();
    case 72:
      if (lookahead == 'E') ADVANCE(366);
      END_STATE();
    case 73:
      if (lookahead == 'F') ADVANCE(341);
      if (lookahead == ']') ADVANCE(642);
      END_STATE();
    case 74:
      if (lookahead == 'N') ADVANCE(323);
      END_STATE();
    case 75:
      if (lookahead == 'N') ADVANCE(327);
      END_STATE();
    case 76:
      if (lookahead == 'P') ADVANCE(106);
      if (lookahead == ']') ADVANCE(638);
      END_STATE();
    case 77:
      if (lookahead == 'P') ADVANCE(135);
      END_STATE();
    case 78:
      if (lookahead == 'S') ADVANCE(462);
      if (lookahead == ']') ADVANCE(634);
      END_STATE();
    case 79:
      if (lookahead == 'T') ADVANCE(242);
      END_STATE();
    case 80:
      if (lookahead == 'T') ADVANCE(243);
      END_STATE();
    case 81:
      if (lookahead == 'W') ADVANCE(260);
      END_STATE();
    case 82:
      if (lookahead == 'W') ADVANCE(261);
      END_STATE();
    case 83:
      if (lookahead == ']') ADVANCE(650);
      END_STATE();
    case 84:
      if (lookahead == ']') ADVANCE(646);
      END_STATE();
    case 85:
      if (lookahead == ']') ADVANCE(652);
      END_STATE();
    case 86:
      if (lookahead == ']') ADVANCE(648);
      END_STATE();
    case 87:
      if (lookahead == ']') ADVANCE(632);
      END_STATE();
    case 88:
      if (lookahead == ']') ADVANCE(640);
      END_STATE();
    case 89:
      if (lookahead == ']') ADVANCE(644);
      END_STATE();
    case 90:
      if (lookahead == ']') ADVANCE(636);
      END_STATE();
    case 91:
      if (lookahead == '`') ADVANCE(93);
      END_STATE();
    case 92:
      if (lookahead == '`') ADVANCE(93);
      if (lookahead != 0) ADVANCE(925);
      END_STATE();
    case 93:
      if (lookahead == '`') ADVANCE(934);
      END_STATE();
    case 94:
      if (lookahead == 'a') ADVANCE(54);
      END_STATE();
    case 95:
      if (lookahead == 'a') ADVANCE(146);
      END_STATE();
    case 96:
      if (lookahead == 'a') ADVANCE(276);
      END_STATE();
    case 97:
      if (lookahead == 'a') ADVANCE(276);
      if (lookahead == 'i') ADVANCE(272);
      END_STATE();
    case 98:
      if (lookahead == 'a') ADVANCE(276);
      if (lookahead == 'i') ADVANCE(272);
      if (lookahead == 'o') ADVANCE(383);
      END_STATE();
    case 99:
      if (lookahead == 'a') ADVANCE(291);
      END_STATE();
    case 100:
      if (lookahead == 'a') ADVANCE(160);
      if (lookahead == 'o') ADVANCE(290);
      END_STATE();
    case 101:
      if (lookahead == 'a') ADVANCE(402);
      END_STATE();
    case 102:
      if (lookahead == 'a') ADVANCE(512);
      if (lookahead == 'e') ADVANCE(151);
      END_STATE();
    case 103:
      if (lookahead == 'a') ADVANCE(171);
      END_STATE();
    case 104:
      if (lookahead == 'a') ADVANCE(171);
      if (lookahead == 'x') ADVANCE(44);
      END_STATE();
    case 105:
      if (lookahead == 'a') ADVANCE(504);
      END_STATE();
    case 106:
      if (lookahead == 'a') ADVANCE(377);
      END_STATE();
    case 107:
      if (lookahead == 'a') ADVANCE(506);
      END_STATE();
    case 108:
      if (lookahead == 'a') ADVANCE(359);
      END_STATE();
    case 109:
      if (lookahead == 'a') ADVANCE(155);
      END_STATE();
    case 110:
      if (lookahead == 'a') ADVANCE(459);
      END_STATE();
    case 111:
      if (lookahead == 'a') ADVANCE(89);
      END_STATE();
    case 112:
      if (lookahead == 'a') ADVANCE(451);
      END_STATE();
    case 113:
      if (lookahead == 'a') ADVANCE(386);
      END_STATE();
    case 114:
      if (lookahead == 'a') ADVANCE(386);
      if (lookahead == 'e') ADVANCE(370);
      END_STATE();
    case 115:
      if (lookahead == 'a') ADVANCE(453);
      END_STATE();
    case 116:
      if (lookahead == 'a') ADVANCE(299);
      END_STATE();
    case 117:
      if (lookahead == 'a') ADVANCE(425);
      END_STATE();
    case 118:
      if (lookahead == 'a') ADVANCE(425);
      if (lookahead == 'o') ADVANCE(165);
      if (lookahead == 'y') ADVANCE(474);
      END_STATE();
    case 119:
      if (lookahead == 'a') ADVANCE(270);
      END_STATE();
    case 120:
      if (lookahead == 'a') ADVANCE(460);
      if (lookahead == 'r') ADVANCE(332);
      END_STATE();
    case 121:
      if (lookahead == 'a') ADVANCE(262);
      END_STATE();
    case 122:
      if (lookahead == 'a') ADVANCE(300);
      END_STATE();
    case 123:
      if (lookahead == 'a') ADVANCE(301);
      END_STATE();
    case 124:
      if (lookahead == 'a') ADVANCE(469);
      END_STATE();
    case 125:
      if (lookahead == 'a') ADVANCE(446);
      END_STATE();
    case 126:
      if (lookahead == 'a') ADVANCE(423);
      END_STATE();
    case 127:
      if (lookahead == 'a') ADVANCE(464);
      END_STATE();
    case 128:
      if (lookahead == 'a') ADVANCE(449);
      END_STATE();
    case 129:
      if (lookahead == 'a') ADVANCE(354);
      END_STATE();
    case 130:
      if (lookahead == 'a') ADVANCE(354);
      if (lookahead == 'o') ADVANCE(319);
      END_STATE();
    case 131:
      if (lookahead == 'a') ADVANCE(279);
      END_STATE();
    case 132:
      if (lookahead == 'a') ADVANCE(461);
      END_STATE();
    case 133:
      if (lookahead == 'a') ADVANCE(292);
      END_STATE();
    case 134:
      if (lookahead == 'a') ADVANCE(385);
      END_STATE();
    case 135:
      if (lookahead == 'a') ADVANCE(398);
      END_STATE();
    case 136:
      if (lookahead == 'a') ADVANCE(360);
      END_STATE();
    case 137:
      if (lookahead == 'a') ADVANCE(280);
      END_STATE();
    case 138:
      if (lookahead == 'a') ADVANCE(472);
      END_STATE();
    case 139:
      if (lookahead == 'a') ADVANCE(281);
      END_STATE();
    case 140:
      if (lookahead == 'a') ADVANCE(282);
      END_STATE();
    case 141:
      if (lookahead == 'a') ADVANCE(473);
      END_STATE();
    case 142:
      if (lookahead == 'a') ADVANCE(399);
      END_STATE();
    case 143:
      if (lookahead == 'a') ADVANCE(475);
      END_STATE();
    case 144:
      if (lookahead == 'a') ADVANCE(479);
      END_STATE();
    case 145:
      if (lookahead == 'b') ADVANCE(337);
      if (lookahead == 'y') ADVANCE(47);
      END_STATE();
    case 146:
      if (lookahead == 'b') ADVANCE(275);
      END_STATE();
    case 147:
      if (lookahead == 'b') ADVANCE(215);
      END_STATE();
    case 148:
      if (lookahead == 'b') ADVANCE(349);
      END_STATE();
    case 149:
      if (lookahead == 'c') ADVANCE(64);
      END_STATE();
    case 150:
      if (lookahead == 'c') ADVANCE(244);
      END_STATE();
    case 151:
      if (lookahead == 'c') ADVANCE(331);
      END_STATE();
    case 152:
      if (lookahead == 'c') ADVANCE(274);
      END_STATE();
    case 153:
      if (lookahead == 'c') ADVANCE(108);
      END_STATE();
    case 154:
      if (lookahead == 'c') ADVANCE(333);
      END_STATE();
    case 155:
      if (lookahead == 'c') ADVANCE(183);
      END_STATE();
    case 156:
      if (lookahead == 'c') ADVANCE(344);
      END_STATE();
    case 157:
      if (lookahead == 'c') ADVANCE(136);
      END_STATE();
    case 158:
      if (lookahead == 'c') ADVANCE(493);
      END_STATE();
    case 159:
      if (lookahead == 'c') ADVANCE(348);
      END_STATE();
    case 160:
      if (lookahead == 'c') ADVANCE(222);
      END_STATE();
    case 161:
      if (lookahead == 'c') ADVANCE(476);
      END_STATE();
    case 162:
      if (lookahead == 'c') ADVANCE(143);
      END_STATE();
    case 163:
      if (lookahead == 'd') ADVANCE(56);
      END_STATE();
    case 164:
      if (lookahead == 'd') ADVANCE(662);
      END_STATE();
    case 165:
      if (lookahead == 'd') ADVANCE(508);
      END_STATE();
    case 166:
      if (lookahead == 'd') ADVANCE(256);
      END_STATE();
    case 167:
      if (lookahead == 'd') ADVANCE(181);
      END_STATE();
    case 168:
      if (lookahead == 'd') ADVANCE(409);
      END_STATE();
    case 169:
      if (lookahead == 'd') ADVANCE(186);
      END_STATE();
    case 170:
      if (lookahead == 'd') ADVANCE(187);
      END_STATE();
    case 171:
      if (lookahead == 'd') ADVANCE(207);
      END_STATE();
    case 172:
      if (lookahead == 'd') ADVANCE(218);
      END_STATE();
    case 173:
      if (lookahead == 'e') ADVANCE(104);
      END_STATE();
    case 174:
      if (lookahead == 'e') ADVANCE(58);
      END_STATE();
    case 175:
      if (lookahead == 'e') ADVANCE(503);
      END_STATE();
    case 176:
      if (lookahead == 'e') ADVANCE(1003);
      END_STATE();
    case 177:
      if (lookahead == 'e') ADVANCE(1005);
      END_STATE();
    case 178:
      if (lookahead == 'e') ADVANCE(684);
      END_STATE();
    case 179:
      if (lookahead == 'e') ADVANCE(671);
      END_STATE();
    case 180:
      if (lookahead == 'e') ADVANCE(232);
      END_STATE();
    case 181:
      if (lookahead == 'e') ADVANCE(997);
      END_STATE();
    case 182:
      if (lookahead == 'e') ADVANCE(999);
      END_STATE();
    case 183:
      if (lookahead == 'e') ADVANCE(1001);
      END_STATE();
    case 184:
      if (lookahead == 'e') ADVANCE(672);
      END_STATE();
    case 185:
      if (lookahead == 'e') ADVANCE(664);
      END_STATE();
    case 186:
      if (lookahead == 'e') ADVANCE(991);
      END_STATE();
    case 187:
      if (lookahead == 'e') ADVANCE(990);
      END_STATE();
    case 188:
      if (lookahead == 'e') ADVANCE(993);
      END_STATE();
    case 189:
      if (lookahead == 'e') ADVANCE(994);
      END_STATE();
    case 190:
      if (lookahead == 'e') ADVANCE(673);
      END_STATE();
    case 191:
      if (lookahead == 'e') ADVANCE(231);
      END_STATE();
    case 192:
      if (lookahead == 'e') ADVANCE(696);
      END_STATE();
    case 193:
      if (lookahead == 'e') ADVANCE(368);
      END_STATE();
    case 194:
      if (lookahead == 'e') ADVANCE(230);
      END_STATE();
    case 195:
      if (lookahead == 'e') ADVANCE(45);
      END_STATE();
    case 196:
      if (lookahead == 'e') ADVANCE(502);
      END_STATE();
    case 197:
      if (lookahead == 'e') ADVANCE(502);
      if (lookahead == 't') ADVANCE(293);
      END_STATE();
    case 198:
      if (lookahead == 'e') ADVANCE(227);
      END_STATE();
    case 199:
      if (lookahead == 'e') ADVANCE(378);
      END_STATE();
    case 200:
      if (lookahead == 'e') ADVANCE(233);
      END_STATE();
    case 201:
      if (lookahead == 'e') ADVANCE(420);
      END_STATE();
    case 202:
      if (lookahead == 'e') ADVANCE(158);
      END_STATE();
    case 203:
      if (lookahead == 'e') ADVANCE(166);
      END_STATE();
    case 204:
      if (lookahead == 'e') ADVANCE(164);
      END_STATE();
    case 205:
      if (lookahead == 'e') ADVANCE(422);
      END_STATE();
    case 206:
      if (lookahead == 'e') ADVANCE(161);
      END_STATE();
    case 207:
      if (lookahead == 'e') ADVANCE(369);
      END_STATE();
    case 208:
      if (lookahead == 'e') ADVANCE(404);
      END_STATE();
    case 209:
      if (lookahead == 'e') ADVANCE(375);
      END_STATE();
    case 210:
      if (lookahead == 'e') ADVANCE(371);
      END_STATE();
    case 211:
      if (lookahead == 'e') ADVANCE(122);
      END_STATE();
    case 212:
      if (lookahead == 'e') ADVANCE(376);
      END_STATE();
    case 213:
      if (lookahead == 'e') ADVANCE(103);
      END_STATE();
    case 214:
      if (lookahead == 'e') ADVANCE(400);
      END_STATE();
    case 215:
      if (lookahead == 'e') ADVANCE(372);
      END_STATE();
    case 216:
      if (lookahead == 'e') ADVANCE(373);
      END_STATE();
    case 217:
      if (lookahead == 'e') ADVANCE(413);
      END_STATE();
    case 218:
      if (lookahead == 'e') ADVANCE(415);
      END_STATE();
    case 219:
      if (lookahead == 'e') ADVANCE(437);
      END_STATE();
    case 220:
      if (lookahead == 'e') ADVANCE(75);
      END_STATE();
    case 221:
      if (lookahead == 'e') ADVANCE(431);
      END_STATE();
    case 222:
      if (lookahead == 'e') ADVANCE(390);
      END_STATE();
    case 223:
      if (lookahead == 'e') ADVANCE(144);
      END_STATE();
    case 224:
      if (lookahead == 'e') ADVANCE(156);
      END_STATE();
    case 225:
      if (lookahead == 'e') ADVANCE(438);
      END_STATE();
    case 226:
      if (lookahead == 'f') ADVANCE(477);
      END_STATE();
    case 227:
      if (lookahead == 'f') ADVANCE(350);
      END_STATE();
    case 228:
      if (lookahead == 'g') ADVANCE(77);
      END_STATE();
    case 229:
      if (lookahead == 'g') ADVANCE(693);
      END_STATE();
    case 230:
      if (lookahead == 'g') ADVANCE(175);
      END_STATE();
    case 231:
      if (lookahead == 'g') ADVANCE(175);
      if (lookahead == 'p') ADVANCE(277);
      END_STATE();
    case 232:
      if (lookahead == 'g') ADVANCE(175);
      if (lookahead == 'p') ADVANCE(277);
      if (lookahead == 't') ADVANCE(384);
      END_STATE();
    case 233:
      if (lookahead == 'g') ADVANCE(216);
      END_STATE();
    case 234:
      if (lookahead == 'h') ADVANCE(685);
      END_STATE();
    case 235:
      if (lookahead == 'h') ADVANCE(686);
      END_STATE();
    case 236:
      if (lookahead == 'h') ADVANCE(1000);
      END_STATE();
    case 237:
      if (lookahead == 'h') ADVANCE(715);
      END_STATE();
    case 238:
      if (lookahead == 'h') ADVANCE(714);
      END_STATE();
    case 239:
      if (lookahead == 'h') ADVANCE(51);
      END_STATE();
    case 240:
      if (lookahead == 'h') ADVANCE(87);
      END_STATE();
    case 241:
      if (lookahead == 'h') ADVANCE(94);
      if (lookahead == 't') ADVANCE(132);
      END_STATE();
    case 242:
      if (lookahead == 'h') ADVANCE(116);
      END_STATE();
    case 243:
      if (lookahead == 'h') ADVANCE(123);
      END_STATE();
    case 244:
      if (lookahead == 'h') ADVANCE(217);
      END_STATE();
    case 245:
      if (lookahead == 'i') ADVANCE(149);
      END_STATE();
    case 246:
      if (lookahead == 'i') ADVANCE(361);
      END_STATE();
    case 247:
      if (lookahead == 'i') ADVANCE(201);
      END_STATE();
    case 248:
      if (lookahead == 'i') ADVANCE(296);
      END_STATE();
    case 249:
      if (lookahead == 'i') ADVANCE(320);
      END_STATE();
    case 250:
      if (lookahead == 'i') ADVANCE(330);
      END_STATE();
    case 251:
      if (lookahead == 'i') ADVANCE(303);
      END_STATE();
    case 252:
      if (lookahead == 'i') ADVANCE(95);
      END_STATE();
    case 253:
      if (lookahead == 'i') ADVANCE(178);
      END_STATE();
    case 254:
      if (lookahead == 'i') ADVANCE(334);
      END_STATE();
    case 255:
      if (lookahead == 'i') ADVANCE(443);
      END_STATE();
    case 256:
      if (lookahead == 'i') ADVANCE(393);
      END_STATE();
    case 257:
      if (lookahead == 'i') ADVANCE(408);
      END_STATE();
    case 258:
      if (lookahead == 'i') ADVANCE(335);
      END_STATE();
    case 259:
      if (lookahead == 'i') ADVANCE(435);
      END_STATE();
    case 260:
      if (lookahead == 'i') ADVANCE(465);
      END_STATE();
    case 261:
      if (lookahead == 'i') ADVANCE(466);
      END_STATE();
    case 262:
      if (lookahead == 'i') ADVANCE(312);
      END_STATE();
    case 263:
      if (lookahead == 'i') ADVANCE(316);
      if (lookahead == 'm') ADVANCE(107);
      END_STATE();
    case 264:
      if (lookahead == 'k') ADVANCE(247);
      END_STATE();
    case 265:
      if (lookahead == 'k') ADVANCE(253);
      END_STATE();
    case 266:
      if (lookahead == 'l') ADVANCE(677);
      END_STATE();
    case 267:
      if (lookahead == 'l') ADVANCE(655);
      END_STATE();
    case 268:
      if (lookahead == 'l') ADVANCE(67);
      END_STATE();
    case 269:
      if (lookahead == 'l') ADVANCE(70);
      END_STATE();
    case 270:
      if (lookahead == 'l') ADVANCE(669);
      END_STATE();
    case 271:
      if (lookahead == 'l') ADVANCE(267);
      END_STATE();
    case 272:
      if (lookahead == 'l') ADVANCE(195);
      END_STATE();
    case 273:
      if (lookahead == 'l') ADVANCE(255);
      END_STATE();
    case 274:
      if (lookahead == 'l') ADVANCE(489);
      END_STATE();
    case 275:
      if (lookahead == 'l') ADVANCE(179);
      END_STATE();
    case 276:
      if (lookahead == 'l') ADVANCE(428);
      END_STATE();
    case 277:
      if (lookahead == 'l') ADVANCE(109);
      END_STATE();
    case 278:
      if (lookahead == 'l') ADVANCE(351);
      END_STATE();
    case 279:
      if (lookahead == 'l') ADVANCE(411);
      END_STATE();
    case 280:
      if (lookahead == 'l') ADVANCE(416);
      END_STATE();
    case 281:
      if (lookahead == 'l') ADVANCE(417);
      END_STATE();
    case 282:
      if (lookahead == 'l') ADVANCE(418);
      END_STATE();
    case 283:
      if (lookahead == 'l') ADVANCE(211);
      END_STATE();
    case 284:
      if (lookahead == 'l') ADVANCE(206);
      END_STATE();
    case 285:
      if (lookahead == 'l') ADVANCE(455);
      END_STATE();
    case 286:
      if (lookahead == 'l') ADVANCE(284);
      END_STATE();
    case 287:
      if (lookahead == 'm') ADVANCE(76);
      END_STATE();
    case 288:
      if (lookahead == 'm') ADVANCE(66);
      END_STATE();
    case 289:
      if (lookahead == 'm') ADVANCE(147);
      END_STATE();
    case 290:
      if (lookahead == 'm') ADVANCE(357);
      if (lookahead == 'u') ADVANCE(307);
      END_STATE();
    case 291:
      if (lookahead == 'm') ADVANCE(426);
      END_STATE();
    case 292:
      if (lookahead == 'm') ADVANCE(427);
      END_STATE();
    case 293:
      if (lookahead == 'm') ADVANCE(269);
      END_STATE();
    case 294:
      if (lookahead == 'm') ADVANCE(358);
      END_STATE();
    case 295:
      if (lookahead == 'm') ADVANCE(125);
      END_STATE();
    case 296:
      if (lookahead == 'n') ADVANCE(228);
      END_STATE();
    case 297:
      if (lookahead == 'n') ADVANCE(679);
      END_STATE();
    case 298:
      if (lookahead == 'n') ADVANCE(663);
      END_STATE();
    case 299:
      if (lookahead == 'n') ADVANCE(707);
      END_STATE();
    case 300:
      if (lookahead == 'n') ADVANCE(692);
      END_STATE();
    case 301:
      if (lookahead == 'n') ADVANCE(702);
      END_STATE();
    case 302:
      if (lookahead == 'n') ADVANCE(694);
      END_STATE();
    case 303:
      if (lookahead == 'n') ADVANCE(229);
      END_STATE();
    case 304:
      if (lookahead == 'n') ADVANCE(421);
      END_STATE();
    case 305:
      if (lookahead == 'n') ADVANCE(152);
      if (lookahead == 's') ADVANCE(65);
      END_STATE();
    case 306:
      if (lookahead == 'n') ADVANCE(168);
      if (lookahead == 'q') ADVANCE(492);
      if (lookahead == 'x') ADVANCE(259);
      END_STATE();
    case 307:
      if (lookahead == 'n') ADVANCE(442);
      END_STATE();
    case 308:
      if (lookahead == 'n') ADVANCE(429);
      END_STATE();
    case 309:
      if (lookahead == 'n') ADVANCE(444);
      END_STATE();
    case 310:
      if (lookahead == 'n') ADVANCE(447);
      END_STATE();
    case 311:
      if (lookahead == 'n') ADVANCE(467);
      if (lookahead == 'u') ADVANCE(307);
      END_STATE();
    case 312:
      if (lookahead == 'n') ADVANCE(414);
      END_STATE();
    case 313:
      if (lookahead == 'n') ADVANCE(471);
      if (lookahead == 's') ADVANCE(352);
      END_STATE();
    case 314:
      if (lookahead == 'n') ADVANCE(225);
      END_STATE();
    case 315:
      if (lookahead == 'n') ADVANCE(363);
      END_STATE();
    case 316:
      if (lookahead == 'n') ADVANCE(478);
      END_STATE();
    case 317:
      if (lookahead == 'n') ADVANCE(159);
      END_STATE();
    case 318:
      if (lookahead == 'o') ADVANCE(367);
      END_STATE();
    case 319:
      if (lookahead == 'o') ADVANCE(264);
      END_STATE();
    case 320:
      if (lookahead == 'o') ADVANCE(304);
      END_STATE();
    case 321:
      if (lookahead == 'o') ADVANCE(68);
      END_STATE();
    case 322:
      if (lookahead == 'o') ADVANCE(68);
      if (lookahead == 'r') ADVANCE(488);
      END_STATE();
    case 323:
      if (lookahead == 'o') ADVANCE(500);
      END_STATE();
    case 324:
      if (lookahead == 'o') ADVANCE(311);
      END_STATE();
    case 325:
      if (lookahead == 'o') ADVANCE(319);
      END_STATE();
    case 326:
      if (lookahead == 'o') ADVANCE(165);
      if (lookahead == 'y') ADVANCE(474);
      END_STATE();
    case 327:
      if (lookahead == 'o') ADVANCE(501);
      END_STATE();
    case 328:
      if (lookahead == 'o') ADVANCE(315);
      END_STATE();
    case 329:
      if (lookahead == 'o') ADVANCE(162);
      END_STATE();
    case 330:
      if (lookahead == 'o') ADVANCE(297);
      END_STATE();
    case 331:
      if (lookahead == 'o') ADVANCE(167);
      END_STATE();
    case 332:
      if (lookahead == 'o') ADVANCE(505);
      END_STATE();
    case 333:
      if (lookahead == 'o') ADVANCE(494);
      END_STATE();
    case 334:
      if (lookahead == 'o') ADVANCE(298);
      END_STATE();
    case 335:
      if (lookahead == 'o') ADVANCE(302);
      END_STATE();
    case 336:
      if (lookahead == 'o') ADVANCE(286);
      END_STATE();
    case 337:
      if (lookahead == 'o') ADVANCE(430);
      END_STATE();
    case 338:
      if (lookahead == 'o') ADVANCE(347);
      END_STATE();
    case 339:
      if (lookahead == 'o') ADVANCE(448);
      if (lookahead == 't') ADVANCE(236);
      END_STATE();
    case 340:
      if (lookahead == 'o') ADVANCE(448);
      if (lookahead == 't') ADVANCE(236);
      if (lookahead == 'u') ADVANCE(271);
      END_STATE();
    case 341:
      if (lookahead == 'o') ADVANCE(379);
      END_STATE();
    case 342:
      if (lookahead == 'o') ADVANCE(265);
      END_STATE();
    case 343:
      if (lookahead == 'o') ADVANCE(342);
      END_STATE();
    case 344:
      if (lookahead == 'o') ADVANCE(169);
      END_STATE();
    case 345:
      if (lookahead == 'o') ADVANCE(486);
      END_STATE();
    case 346:
      if (lookahead == 'o') ADVANCE(383);
      END_STATE();
    case 347:
      if (lookahead == 'o') ADVANCE(283);
      END_STATE();
    case 348:
      if (lookahead == 'o') ADVANCE(170);
      END_STATE();
    case 349:
      if (lookahead == 'o') ADVANCE(433);
      END_STATE();
    case 350:
      if (lookahead == 'o') ADVANCE(395);
      END_STATE();
    case 351:
      if (lookahead == 'o') ADVANCE(128);
      END_STATE();
    case 352:
      if (lookahead == 'o') ADVANCE(69);
      END_STATE();
    case 353:
      if (lookahead == 'p') ADVANCE(450);
      END_STATE();
    case 354:
      if (lookahead == 'p') ADVANCE(452);
      END_STATE();
    case 355:
      if (lookahead == 'p') ADVANCE(273);
      END_STATE();
    case 356:
      if (lookahead == 'p') ADVANCE(273);
      if (lookahead == 't') ADVANCE(142);
      END_STATE();
    case 357:
      if (lookahead == 'p') ADVANCE(391);
      END_STATE();
    case 358:
      if (lookahead == 'p') ADVANCE(463);
      END_STATE();
    case 359:
      if (lookahead == 'p') ADVANCE(188);
      END_STATE();
    case 360:
      if (lookahead == 'p') ADVANCE(189);
      END_STATE();
    case 361:
      if (lookahead == 'p') ADVANCE(134);
      END_STATE();
    case 362:
      if (lookahead == 'p') ADVANCE(112);
      END_STATE();
    case 363:
      if (lookahead == 'p') ADVANCE(115);
      END_STATE();
    case 364:
      if (lookahead == 'q') ADVANCE(495);
      END_STATE();
    case 365:
      if (lookahead == 'q') ADVANCE(496);
      END_STATE();
    case 366:
      if (lookahead == 'q') ADVANCE(497);
      END_STATE();
    case 367:
      if (lookahead == 'r') ADVANCE(287);
      END_STATE();
    case 368:
      if (lookahead == 'r') ADVANCE(507);
      END_STATE();
    case 369:
      if (lookahead == 'r') ADVANCE(683);
      END_STATE();
    case 370:
      if (lookahead == 'r') ADVANCE(145);
      END_STATE();
    case 371:
      if (lookahead == 'r') ADVANCE(74);
      END_STATE();
    case 372:
      if (lookahead == 'r') ADVANCE(695);
      END_STATE();
    case 373:
      if (lookahead == 'r') ADVANCE(690);
      END_STATE();
    case 374:
      if (lookahead == 'r') ADVANCE(71);
      END_STATE();
    case 375:
      if (lookahead == 'r') ADVANCE(148);
      END_STATE();
    case 376:
      if (lookahead == 'r') ADVANCE(498);
      END_STATE();
    case 377:
      if (lookahead == 'r') ADVANCE(99);
      END_STATE();
    case 378:
      if (lookahead == 'r') ADVANCE(454);
      END_STATE();
    case 379:
      if (lookahead == 'r') ADVANCE(288);
      END_STATE();
    case 380:
      if (lookahead == 'r') ADVANCE(488);
      END_STATE();
    case 381:
      if (lookahead == 'r') ADVANCE(266);
      END_STATE();
    case 382:
      if (lookahead == 'r') ADVANCE(248);
      END_STATE();
    case 383:
      if (lookahead == 'r') ADVANCE(295);
      END_STATE();
    case 384:
      if (lookahead == 'r') ADVANCE(510);
      END_STATE();
    case 385:
      if (lookahead == 'r') ADVANCE(441);
      END_STATE();
    case 386:
      if (lookahead == 'r') ADVANCE(252);
      END_STATE();
    case 387:
      if (lookahead == 'r') ADVANCE(268);
      END_STATE();
    case 388:
      if (lookahead == 'r') ADVANCE(141);
      END_STATE();
    case 389:
      if (lookahead == 'r') ADVANCE(251);
      END_STATE();
    case 390:
      if (lookahead == 'r') ADVANCE(445);
      END_STATE();
    case 391:
      if (lookahead == 'r') ADVANCE(219);
      END_STATE();
    case 392:
      if (lookahead == 'r') ADVANCE(203);
      END_STATE();
    case 393:
      if (lookahead == 'r') ADVANCE(407);
      END_STATE();
    case 394:
      if (lookahead == 'r') ADVANCE(185);
      END_STATE();
    case 395:
      if (lookahead == 'r') ADVANCE(220);
      END_STATE();
    case 396:
      if (lookahead == 'r') ADVANCE(223);
      END_STATE();
    case 397:
      if (lookahead == 'r') ADVANCE(205);
      END_STATE();
    case 398:
      if (lookahead == 'r') ADVANCE(133);
      END_STATE();
    case 399:
      if (lookahead == 'r') ADVANCE(480);
      END_STATE();
    case 400:
      if (lookahead == 'r') ADVANCE(80);
      END_STATE();
    case 401:
      if (lookahead == 'r') ADVANCE(72);
      END_STATE();
    case 402:
      if (lookahead == 's') ADVANCE(245);
      END_STATE();
    case 403:
      if (lookahead == 's') ADVANCE(83);
      END_STATE();
    case 404:
      if (lookahead == 's') ADVANCE(680);
      END_STATE();
    case 405:
      if (lookahead == 's') ADVANCE(676);
      END_STATE();
    case 406:
      if (lookahead == 's') ADVANCE(63);
      END_STATE();
    case 407:
      if (lookahead == 's') ADVANCE(665);
      END_STATE();
    case 408:
      if (lookahead == 's') ADVANCE(666);
      END_STATE();
    case 409:
      if (lookahead == 's') ADVANCE(81);
      END_STATE();
    case 410:
      if (lookahead == 's') ADVANCE(79);
      END_STATE();
    case 411:
      if (lookahead == 's') ADVANCE(698);
      END_STATE();
    case 412:
      if (lookahead == 's') ADVANCE(689);
      END_STATE();
    case 413:
      if (lookahead == 's') ADVANCE(717);
      END_STATE();
    case 414:
      if (lookahead == 's') ADVANCE(716);
      END_STATE();
    case 415:
      if (lookahead == 's') ADVANCE(718);
      END_STATE();
    case 416:
      if (lookahead == 's') ADVANCE(700);
      END_STATE();
    case 417:
      if (lookahead == 's') ADVANCE(712);
      END_STATE();
    case 418:
      if (lookahead == 's') ADVANCE(705);
      END_STATE();
    case 419:
      if (lookahead == 's') ADVANCE(434);
      END_STATE();
    case 420:
      if (lookahead == 's') ADVANCE(84);
      END_STATE();
    case 421:
      if (lookahead == 's') ADVANCE(85);
      END_STATE();
    case 422:
      if (lookahead == 's') ADVANCE(86);
      END_STATE();
    case 423:
      if (lookahead == 's') ADVANCE(48);
      END_STATE();
    case 424:
      if (lookahead == 's') ADVANCE(328);
      END_STATE();
    case 425:
      if (lookahead == 's') ADVANCE(174);
      END_STATE();
    case 426:
      if (lookahead == 's') ADVANCE(88);
      END_STATE();
    case 427:
      if (lookahead == 's') ADVANCE(90);
      END_STATE();
    case 428:
      if (lookahead == 's') ADVANCE(177);
      END_STATE();
    case 429:
      if (lookahead == 's') ADVANCE(202);
      END_STATE();
    case 430:
      if (lookahead == 's') ADVANCE(184);
      END_STATE();
    case 431:
      if (lookahead == 's') ADVANCE(410);
      END_STATE();
    case 432:
      if (lookahead == 's') ADVANCE(204);
      END_STATE();
    case 433:
      if (lookahead == 's') ADVANCE(190);
      END_STATE();
    case 434:
      if (lookahead == 's') ADVANCE(199);
      END_STATE();
    case 435:
      if (lookahead == 's') ADVANCE(470);
      END_STATE();
    case 436:
      if (lookahead == 's') ADVANCE(153);
      END_STATE();
    case 437:
      if (lookahead == 's') ADVANCE(432);
      END_STATE();
    case 438:
      if (lookahead == 's') ADVANCE(157);
      END_STATE();
    case 439:
      if (lookahead == 's') ADVANCE(82);
      END_STATE();
    case 440:
      if (lookahead == 't') ADVANCE(240);
      END_STATE();
    case 441:
      if (lookahead == 't') ADVANCE(73);
      END_STATE();
    case 442:
      if (lookahead == 't') ADVANCE(989);
      END_STATE();
    case 443:
      if (lookahead == 't') ADVANCE(1002);
      END_STATE();
    case 444:
      if (lookahead == 't') ADVANCE(992);
      END_STATE();
    case 445:
      if (lookahead == 't') ADVANCE(661);
      END_STATE();
    case 446:
      if (lookahead == 't') ADVANCE(998);
      END_STATE();
    case 447:
      if (lookahead == 't') ADVANCE(670);
      END_STATE();
    case 448:
      if (lookahead == 't') ADVANCE(688);
      END_STATE();
    case 449:
      if (lookahead == 't') ADVANCE(691);
      END_STATE();
    case 450:
      if (lookahead == 't') ADVANCE(249);
      END_STATE();
    case 451:
      if (lookahead == 't') ADVANCE(234);
      END_STATE();
    case 452:
      if (lookahead == 't') ADVANCE(483);
      END_STATE();
    case 453:
      if (lookahead == 't') ADVANCE(235);
      END_STATE();
    case 454:
      if (lookahead == 't') ADVANCE(403);
      END_STATE();
    case 455:
      if (lookahead == 't') ADVANCE(246);
      END_STATE();
    case 456:
      if (lookahead == 't') ADVANCE(293);
      END_STATE();
    case 457:
      if (lookahead == 't') ADVANCE(236);
      END_STATE();
    case 458:
      if (lookahead == 't') ADVANCE(236);
      if (lookahead == 'u') ADVANCE(271);
      END_STATE();
    case 459:
      if (lookahead == 't') ADVANCE(111);
      END_STATE();
    case 460:
      if (lookahead == 't') ADVANCE(239);
      END_STATE();
    case 461:
      if (lookahead == 't') ADVANCE(491);
      END_STATE();
    case 462:
      if (lookahead == 't') ADVANCE(382);
      END_STATE();
    case 463:
      if (lookahead == 't') ADVANCE(511);
      END_STATE();
    case 464:
      if (lookahead == 't') ADVANCE(150);
      END_STATE();
    case 465:
      if (lookahead == 't') ADVANCE(237);
      END_STATE();
    case 466:
      if (lookahead == 't') ADVANCE(238);
      END_STATE();
    case 467:
      if (lookahead == 't') ADVANCE(121);
      END_STATE();
    case 468:
      if (lookahead == 't') ADVANCE(389);
      END_STATE();
    case 469:
      if (lookahead == 't') ADVANCE(182);
      END_STATE();
    case 470:
      if (lookahead == 't') ADVANCE(412);
      END_STATE();
    case 471:
      if (lookahead == 't') ADVANCE(200);
      END_STATE();
    case 472:
      if (lookahead == 't') ADVANCE(192);
      END_STATE();
    case 473:
      if (lookahead == 't') ADVANCE(250);
      END_STATE();
    case 474:
      if (lookahead == 't') ADVANCE(208);
      END_STATE();
    case 475:
      if (lookahead == 't') ADVANCE(254);
      END_STATE();
    case 476:
      if (lookahead == 't') ADVANCE(258);
      END_STATE();
    case 477:
      if (lookahead == 't') ADVANCE(210);
      END_STATE();
    case 478:
      if (lookahead == 't') ADVANCE(212);
      END_STATE();
    case 479:
      if (lookahead == 't') ADVANCE(214);
      END_STATE();
    case 480:
      if (lookahead == 't') ADVANCE(439);
      END_STATE();
    case 481:
      if (lookahead == 'u') ADVANCE(285);
      END_STATE();
    case 482:
      if (lookahead == 'u') ADVANCE(193);
      END_STATE();
    case 483:
      if (lookahead == 'u') ADVANCE(397);
      END_STATE();
    case 484:
      if (lookahead == 'u') ADVANCE(271);
      END_STATE();
    case 485:
      if (lookahead == 'u') ADVANCE(440);
      END_STATE();
    case 486:
      if (lookahead == 'u') ADVANCE(307);
      END_STATE();
    case 487:
      if (lookahead == 'u') ADVANCE(289);
      END_STATE();
    case 488:
      if (lookahead == 'u') ADVANCE(176);
      END_STATE();
    case 489:
      if (lookahead == 'u') ADVANCE(172);
      END_STATE();
    case 490:
      if (lookahead == 'u') ADVANCE(388);
      END_STATE();
    case 491:
      if (lookahead == 'u') ADVANCE(405);
      END_STATE();
    case 492:
      if (lookahead == 'u') ADVANCE(131);
      END_STATE();
    case 493:
      if (lookahead == 'u') ADVANCE(394);
      END_STATE();
    case 494:
      if (lookahead == 'u') ADVANCE(310);
      END_STATE();
    case 495:
      if (lookahead == 'u') ADVANCE(137);
      END_STATE();
    case 496:
      if (lookahead == 'u') ADVANCE(139);
      END_STATE();
    case 497:
      if (lookahead == 'u') ADVANCE(140);
      END_STATE();
    case 498:
      if (lookahead == 'v') ADVANCE(119);
      END_STATE();
    case 499:
      if (lookahead == 'v') ADVANCE(209);
      END_STATE();
    case 500:
      if (lookahead == 'w') ADVANCE(995);
      END_STATE();
    case 501:
      if (lookahead == 'w') ADVANCE(996);
      END_STATE();
    case 502:
      if (lookahead == 'x') ADVANCE(44);
      END_STATE();
    case 503:
      if (lookahead == 'x') ADVANCE(687);
      END_STATE();
    case 504:
      if (lookahead == 'x') ADVANCE(50);
      END_STATE();
    case 505:
      if (lookahead == 'x') ADVANCE(509);
      END_STATE();
    case 506:
      if (lookahead == 'x') ADVANCE(49);
      END_STATE();
    case 507:
      if (lookahead == 'y') ADVANCE(78);
      END_STATE();
    case 508:
      if (lookahead == 'y') ADVANCE(678);
      END_STATE();
    case 509:
      if (lookahead == 'y') ADVANCE(667);
      END_STATE();
    case 510:
      if (lookahead == 'y') ADVANCE(668);
      END_STATE();
    case 511:
      if (lookahead == 'y') ADVANCE(697);
      END_STATE();
    case 512:
      if (lookahead == 'y') ADVANCE(406);
      END_STATE();
    case 513:
      if (lookahead == '{') ADVANCE(983);
      END_STATE();
    case 514:
      if (lookahead == '}') ADVANCE(986);
      END_STATE();
    case 515:
      if (eof) ADVANCE(526);
      ADVANCE_MAP(
        '\n', 527,
        '"', 735,
        '#', 1017,
        '.', 1009,
        '<', 711,
        'C', 605,
        'D', 573,
        'G', 574,
        'H', 576,
        'L', 586,
        'O', 609,
        'P', 564,
        'T', 611,
        'U', 598,
        'V', 587,
        '[', 974,
        '`', 92,
        'b', 118,
        'c', 343,
        'd', 490,
        'f', 97,
        'h', 173,
        'j', 424,
        'm', 163,
        'n', 484,
        'r', 194,
        's', 241,
        't', 380,
        'u', 381,
        'v', 113,
        'x', 362,
        '{', 964,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1007);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(622);
      if (set_contains(extras_character_set_2, 9, lookahead)) SKIP(516);
      END_STATE();
    case 516:
      if (eof) ADVANCE(526);
      ADVANCE_MAP(
        '\n', 527,
        '"', 735,
        '#', 1017,
        '.', 1009,
        '<', 711,
        'C', 605,
        'D', 573,
        'G', 574,
        'H', 576,
        'L', 586,
        'O', 609,
        'P', 564,
        'T', 611,
        'U', 598,
        'V', 587,
        '[', 974,
        '`', 92,
        'b', 118,
        'c', 343,
        'd', 490,
        'f', 97,
        'h', 173,
        'j', 424,
        'm', 163,
        'n', 484,
        'r', 194,
        's', 241,
        't', 380,
        'u', 381,
        'v', 113,
        'x', 362,
        '{', 963,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1007);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(622);
      if (set_contains(extras_character_set_2, 9, lookahead)) SKIP(516);
      END_STATE();
    case 517:
      if (eof) ADVANCE(526);
      ADVANCE_MAP(
        '\n', 527,
        '"', 735,
        '#', 1017,
        '<', 711,
        'C', 605,
        'D', 573,
        'G', 574,
        'H', 575,
        'L', 586,
        'O', 609,
        'P', 564,
        'T', 611,
        'U', 598,
        'V', 587,
        '[', 976,
        '`', 92,
        'b', 117,
        'c', 100,
        'd', 102,
        'f', 98,
        'h', 197,
        'i', 308,
        'l', 329,
        'm', 105,
        'n', 458,
        'p', 120,
        'r', 180,
        's', 355,
        't', 322,
        'u', 387,
        'v', 114,
        'x', 362,
        '{', 964,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1007);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(622);
      if (set_contains(extras_character_set_2, 9, lookahead)) SKIP(518);
      END_STATE();
    case 518:
      if (eof) ADVANCE(526);
      ADVANCE_MAP(
        '\n', 527,
        '"', 735,
        '#', 1017,
        '<', 711,
        'C', 605,
        'D', 573,
        'G', 574,
        'H', 575,
        'L', 586,
        'O', 609,
        'P', 564,
        'T', 611,
        'U', 598,
        'V', 587,
        '[', 976,
        '`', 92,
        'b', 117,
        'c', 100,
        'd', 102,
        'f', 98,
        'h', 197,
        'i', 308,
        'l', 329,
        'm', 105,
        'n', 458,
        'p', 120,
        'r', 180,
        's', 355,
        't', 322,
        'u', 387,
        'v', 114,
        'x', 362,
        '{', 963,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1007);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(622);
      if (set_contains(extras_character_set_2, 9, lookahead)) SKIP(518);
      END_STATE();
    case 519:
      if (eof) ADVANCE(526);
      ADVANCE_MAP(
        '\n', 527,
        '"', 735,
        '#', 1017,
        '<', 711,
        'C', 605,
        'D', 573,
        'G', 574,
        'H', 575,
        'L', 586,
        'O', 609,
        'P', 564,
        'T', 611,
        'U', 598,
        'V', 587,
        '[', 976,
        '`', 92,
        'b', 117,
        'f', 97,
        'h', 196,
        'n', 484,
        't', 380,
        '{', 963,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1007);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(622);
      if (set_contains(extras_character_set_2, 9, lookahead)) SKIP(519);
      END_STATE();
    case 520:
      if (eof) ADVANCE(526);
      ADVANCE_MAP(
        '\n', 527,
        '"', 735,
        '#', 1017,
        '<', 711,
        'C', 605,
        'D', 573,
        'G', 574,
        'H', 576,
        'L', 586,
        'O', 609,
        'P', 564,
        'T', 611,
        'U', 598,
        'V', 587,
        '[', 974,
        '`', 92,
        'b', 117,
        'f', 97,
        'h', 196,
        'n', 484,
        't', 380,
        '{', 963,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1007);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(622);
      if (set_contains(extras_character_set_2, 9, lookahead)) SKIP(520);
      END_STATE();
    case 521:
      if (eof) ADVANCE(526);
      ADVANCE_MAP(
        '\n', 527,
        '"', 735,
        '#', 1017,
        '<', 711,
        'C', 799,
        'D', 767,
        'G', 768,
        'H', 769,
        'L', 782,
        'O', 805,
        'P', 758,
        'T', 808,
        'U', 793,
        'V', 781,
        '[', 977,
        '\\', 916,
        '`', 92,
        'b', 828,
        'f', 829,
        'h', 841,
        'n', 907,
        't', 880,
        '{', 964,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(915);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(914);
      if (set_contains(extras_character_set_2, 9, lookahead)) SKIP(519);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 522:
      if (eof) ADVANCE(526);
      ADVANCE_MAP(
        '\n', 527,
        '"', 735,
        '#', 1017,
        '<', 711,
        'C', 799,
        'D', 767,
        'G', 768,
        'H', 770,
        'L', 782,
        'O', 805,
        'P', 758,
        'T', 808,
        'U', 793,
        'V', 781,
        '[', 975,
        '\\', 916,
        '`', 92,
        'b', 828,
        'f', 829,
        'h', 841,
        'n', 907,
        't', 880,
        '{', 964,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(915);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(914);
      if (set_contains(extras_character_set_2, 9, lookahead)) SKIP(520);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 523:
      if (eof) ADVANCE(526);
      ADVANCE_MAP(
        '!', 60,
        '"', 735,
        '#', 924,
        '*', 631,
        '+', 1014,
        ',', 971,
        '-', 1015,
        '.', 1009,
        '/', 1018,
        ':', 657,
        ';', 659,
        '<', 708,
        '=', 675,
        '>', 704,
        '?', 62,
        'E', 1013,
        '[', 973,
        '\\', 740,
        ']', 978,
        '`', 927,
        'b', 744,
        'e', 1010,
        'f', 745,
        'n', 746,
        'r', 747,
        't', 748,
        'u', 749,
        '{', 963,
        '}', 970,
        'a', 987,
        'c', 987,
        'd', 987,
      );
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(622);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(630);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      if (('G' <= lookahead && lookahead <= 'Z')) ADVANCE(622);
      if (set_contains(extras_character_set_2, 9, lookahead)) SKIP(523);
      END_STATE();
    case 524:
      if (eof) ADVANCE(526);
      ADVANCE_MAP(
        '!', 60,
        '"', 735,
        '#', 1017,
        '+', 1014,
        ',', 971,
        '-', 1015,
        '/', 1018,
        ':', 654,
        ';', 659,
        '<', 710,
        '=', 61,
        '>', 704,
        '?', 62,
        '[', 972,
        ']', 978,
        '`', 91,
        'b', 117,
        'c', 324,
        'd', 102,
        'e', 306,
        'f', 98,
        'g', 396,
        'h', 197,
        'i', 305,
        'l', 221,
        'm', 127,
        'n', 340,
        'r', 191,
        's', 356,
        't', 322,
        'u', 387,
        'x', 362,
        '{', 964,
        '}', 514,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1007);
      if (set_contains(extras_character_set_2, 9, lookahead)) SKIP(525);
      END_STATE();
    case 525:
      if (eof) ADVANCE(526);
      ADVANCE_MAP(
        '!', 60,
        '"', 735,
        '#', 1017,
        '+', 1014,
        ',', 971,
        '-', 1015,
        '/', 1018,
        ':', 657,
        ';', 659,
        '<', 710,
        '=', 61,
        '>', 704,
        '?', 62,
        '[', 972,
        ']', 978,
        '`', 91,
        'b', 117,
        'c', 324,
        'd', 102,
        'e', 306,
        'f', 98,
        'g', 396,
        'h', 197,
        'i', 305,
        'l', 221,
        'm', 127,
        'n', 340,
        'r', 191,
        's', 356,
        't', 322,
        'u', 387,
        'x', 362,
        '{', 963,
        '}', 514,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1007);
      if (set_contains(extras_character_set_2, 9, lookahead)) SKIP(525);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(527);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(528);
      if ((set_contains(extras_character_set_2, 9, lookahead)) &&
          lookahead != ' ') ADVANCE(965);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(529);
      if (set_contains(extras_character_set_2, 9, lookahead)) ADVANCE(960);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(530);
      if (set_contains(extras_character_set_2, 9, lookahead)) ADVANCE(940);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(anon_sym_GET);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(622);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(anon_sym_GET);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(914);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(anon_sym_HEAD);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(622);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(anon_sym_HEAD);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(914);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(anon_sym_POST);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(622);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(anon_sym_POST);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(914);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(anon_sym_PUT);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(622);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(anon_sym_PUT);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(914);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(anon_sym_DELETE);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(622);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(anon_sym_DELETE);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(914);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(anon_sym_CONNECT);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(622);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(anon_sym_CONNECT);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(914);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(anon_sym_OPTIONS);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(622);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(anon_sym_OPTIONS);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(914);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(anon_sym_TRACE);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(622);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(anon_sym_TRACE);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(914);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(anon_sym_PATCH);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(622);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(anon_sym_PATCH);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(914);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(anon_sym_LINK);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(622);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(anon_sym_LINK);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(914);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(anon_sym_UNLINK);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(622);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(anon_sym_UNLINK);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(914);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(anon_sym_PURGE);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(622);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(anon_sym_PURGE);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(914);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(anon_sym_LOCK);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(622);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(anon_sym_LOCK);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(914);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(anon_sym_UNLOCK);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(622);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(anon_sym_UNLOCK);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(914);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(anon_sym_PROPFIND);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(622);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(anon_sym_PROPFIND);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(914);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(anon_sym_VIEW);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(622);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(anon_sym_VIEW);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(914);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'A') ADVANCE(571);
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(622);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'A') ADVANCE(618);
      if (lookahead == 'O') ADVANCE(613);
      if (lookahead == 'R') ADVANCE(604);
      if (lookahead == 'U') ADVANCE(610);
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(622);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'A') ADVANCE(570);
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(622);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'C') ADVANCE(585);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(622);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'C') ADVANCE(592);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(622);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'C') ADVANCE(594);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(622);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'C') ADVANCE(616);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(622);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'C') ADVANCE(579);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(622);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'D') ADVANCE(533);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(622);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'D') ADVANCE(559);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(622);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'E') ADVANCE(595);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(622);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'E') ADVANCE(614);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(622);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'E') ADVANCE(563);
      if (lookahead == 'T') ADVANCE(619);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(622);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'E') ADVANCE(563);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(622);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'E') ADVANCE(621);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(622);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'E') ADVANCE(553);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(622);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'E') ADVANCE(545);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(622);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'E') ADVANCE(539);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(622);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'E') ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(622);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'E') ADVANCE(620);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(622);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'F') ADVANCE(589);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(622);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'G') ADVANCE(578);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(622);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'H') ADVANCE(547);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(622);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'I') ADVANCE(597);
      if (lookahead == 'O') ADVANCE(567);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(622);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'I') ADVANCE(577);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(622);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'I') ADVANCE(601);
      if (lookahead == 'O') ADVANCE(568);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(622);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'I') ADVANCE(600);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(622);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'I') ADVANCE(606);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(622);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'K') ADVANCE(549);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(622);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'K') ADVANCE(555);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(622);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'K') ADVANCE(551);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(622);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'K') ADVANCE(557);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(622);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'L') ADVANCE(582);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(622);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'L') ADVANCE(588);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(622);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'N') ADVANCE(591);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(622);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'N') ADVANCE(596);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(622);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'N') ADVANCE(612);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(622);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'N') ADVANCE(572);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(622);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'N') ADVANCE(593);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(622);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'N') ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(622);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'N') ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(622);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'O') ADVANCE(607);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(622);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'O') ADVANCE(602);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(622);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'O') ADVANCE(599);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(622);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'P') ADVANCE(583);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(622);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'P') ADVANCE(628);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(622);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'P') ADVANCE(617);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(622);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'R') ADVANCE(584);
      if (lookahead == 'T') ADVANCE(537);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(622);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'R') ADVANCE(565);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(622);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'S') ADVANCE(543);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(622);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'S') ADVANCE(615);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(622);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'T') ADVANCE(531);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(622);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'T') ADVANCE(535);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(622);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'T') ADVANCE(541);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(622);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'T') ADVANCE(590);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(622);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'T') ADVANCE(566);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(622);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'T') ADVANCE(608);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(622);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'T') ADVANCE(580);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(622);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'W') ADVANCE(561);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(622);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(622);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(anon_sym_HTTP_SLASH1_DOT0);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(anon_sym_HTTP_SLASH1_DOT1);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(anon_sym_HTTP_SLASH2);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(anon_sym_HTTP_SLASH3);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(anon_sym_HTTP_SLASH_STAR);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(anon_sym_HTTP);
      if (lookahead == '/') ADVANCE(43);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(622);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(anon_sym_HTTP);
      if (lookahead == '/') ADVANCE(43);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(914);
      if (lookahead == '$' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(aux_sym_status_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(630);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(anon_sym_LBRACKBasicAuth_RBRACK);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(anon_sym_LBRACKBasicAuth_RBRACK);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(anon_sym_LBRACKQuery_RBRACK);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(anon_sym_LBRACKQuery_RBRACK);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(anon_sym_LBRACKQueryStringParams_RBRACK);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(anon_sym_LBRACKQueryStringParams_RBRACK);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(anon_sym_LBRACKForm_RBRACK);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(anon_sym_LBRACKForm_RBRACK);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(anon_sym_LBRACKFormParams_RBRACK);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(anon_sym_LBRACKFormParams_RBRACK);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(anon_sym_LBRACKMultipart_RBRACK);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(anon_sym_LBRACKMultipart_RBRACK);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(anon_sym_LBRACKMultipartFormData_RBRACK);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(anon_sym_LBRACKMultipartFormData_RBRACK);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(anon_sym_LBRACKCookies_RBRACK);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(anon_sym_LBRACKCookies_RBRACK);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(anon_sym_LBRACKCaptures_RBRACK);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(anon_sym_LBRACKCaptures_RBRACK);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(anon_sym_LBRACKAsserts_RBRACK);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(anon_sym_LBRACKAsserts_RBRACK);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(anon_sym_LBRACKOptions_RBRACK);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(anon_sym_LBRACKOptions_RBRACK);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(anon_sym_null);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(anon_sym_null);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(anon_sym_COLON2);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(anon_sym_file_COMMA);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(aux_sym_file_value_token1);
      if (lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(660);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(anon_sym_cacert);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(anon_sym_compressed);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(anon_sym_location);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(anon_sym_insecure);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(anon_sym_max_DASHredirs);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(anon_sym_path_DASHas_DASHis);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(anon_sym_proxy);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(anon_sym_retry);
      if (lookahead == '-') ADVANCE(263);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(anon_sym_retry_DASHinterval);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(anon_sym_retry_DASHmax_DASHcount);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(anon_sym_variable);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(anon_sym_verbose);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(anon_sym_very_DASHverbose);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(699);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(anon_sym_status);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(anon_sym_url);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(anon_sym_body);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(anon_sym_duration);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(anon_sym_bytes);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(anon_sym_sha256);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(anon_sym_md5);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(anon_sym_header);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(anon_sym_cookie);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(anon_sym_xpath);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(anon_sym_jsonpath);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(anon_sym_regex);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(anon_sym_not);
      if (lookahead == 'E') ADVANCE(364);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(anon_sym_exists);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(anon_sym_isInteger);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(anon_sym_isFloat);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(anon_sym_isBoolean);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(anon_sym_isString);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(anon_sym_isCollection);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(anon_sym_isNumber);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(anon_sym_isIsoDate);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(anon_sym_isEmpty);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(anon_sym_equals);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(anon_sym_notEquals);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(anon_sym_greaterThan);
      if (lookahead == 'O') ADVANCE(401);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(706);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(anon_sym_greaterThanOrEquals);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(anon_sym_lessThan);
      if (lookahead == 'O') ADVANCE(374);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '/') ADVANCE(727);
      if (lookahead == '=') ADVANCE(713);
      if (lookahead == '?') ADVANCE(719);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '/') ADVANCE(727);
      if (lookahead == '?') ADVANCE(719);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(713);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '?') ADVANCE(719);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(anon_sym_lessThanOrEquals);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(anon_sym_startsWith);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(anon_sym_endsWith);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(anon_sym_contains);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(anon_sym_matches);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(anon_sym_includes);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(anon_sym_LT_QMARK);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(aux_sym_xml_prolog_tag_token1);
      if (lookahead == '\n') ADVANCE(722);
      if (lookahead == '?') ADVANCE(1017);
      if (lookahead != 0) ADVANCE(720);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(aux_sym_xml_prolog_tag_token1);
      if (lookahead == '#') ADVANCE(720);
      if (set_contains(extras_character_set_2, 9, lookahead)) ADVANCE(721);
      if (lookahead != 0 &&
          lookahead != '?') ADVANCE(722);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(aux_sym_xml_prolog_tag_token1);
      if (lookahead != 0 &&
          lookahead != '?') ADVANCE(722);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(anon_sym_QMARK_GT);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(aux_sym_xml_open_tag_token1);
      if (lookahead == '\n') ADVANCE(726);
      if (lookahead == '>') ADVANCE(1017);
      if (lookahead != 0) ADVANCE(724);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(aux_sym_xml_open_tag_token1);
      if (lookahead == '#') ADVANCE(724);
      if (lookahead == '>') ADVANCE(726);
      if (lookahead == '/' ||
          lookahead == '?') ADVANCE(726);
      if (set_contains(extras_character_set_2, 9, lookahead)) ADVANCE(725);
      if (lookahead != 0) ADVANCE(726);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(aux_sym_xml_open_tag_token1);
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(726);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(anon_sym_LT_SLASH);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(aux_sym_xml_close_tag_token1);
      if (lookahead == '\n') ADVANCE(730);
      if (lookahead == '/' ||
          lookahead == '>') ADVANCE(1017);
      if (lookahead != 0) ADVANCE(728);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(aux_sym_xml_close_tag_token1);
      if (lookahead == '#') ADVANCE(728);
      if (set_contains(extras_character_set_2, 9, lookahead)) ADVANCE(729);
      if (lookahead != 0 &&
          lookahead != '/' &&
          lookahead != '>') ADVANCE(730);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(aux_sym_xml_close_tag_token1);
      if (lookahead != 0 &&
          lookahead != '/' &&
          lookahead != '>') ADVANCE(730);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(anon_sym_base64_COMMA);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(aux_sym_oneline_base64_token1);
      if (lookahead == '\n') ADVANCE(732);
      if (('+' <= lookahead && lookahead <= '-') ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(733);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(aux_sym_oneline_base64_token1);
      if (lookahead == '\n' ||
          ('+' <= lookahead && lookahead <= '-') ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(733);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(anon_sym_hex_COMMA);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(sym_quoted_string_text);
      if (lookahead == '\n') ADVANCE(739);
      if (lookahead == '"' ||
          lookahead == '\\') ADVANCE(1017);
      if (lookahead != 0) ADVANCE(736);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(sym_quoted_string_text);
      if (lookahead == '#') ADVANCE(736);
      if (set_contains(extras_character_set_2, 9, lookahead)) ADVANCE(737);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(sym_quoted_string_text);
      if (lookahead == '{') ADVANCE(985);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(sym_quoted_string_text);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(aux_sym_invalid_quoted_string_escaped_char_token1);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(aux_sym_invalid_quoted_string_escaped_char_token1);
      if (lookahead == '#') ADVANCE(743);
      if (lookahead == 'b') ADVANCE(744);
      if (lookahead == 'f') ADVANCE(745);
      if (lookahead == 'n') ADVANCE(746);
      if (lookahead == 'r') ADVANCE(747);
      if (lookahead == 't') ADVANCE(748);
      if ((set_contains(extras_character_set_2, 9, lookahead)) &&
          lookahead != '\t' &&
          lookahead != '\f' &&
          lookahead != '\r') ADVANCE(742);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '\\' &&
          lookahead != 't' &&
          lookahead != 'u') ADVANCE(741);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(aux_sym_invalid_quoted_string_escaped_char_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1017);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(anon_sym_b);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(anon_sym_f);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(anon_sym_n);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(anon_sym_r);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(anon_sym_t);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(anon_sym_u);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == ',') ADVANCE(734);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == ',') ADVANCE(658);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == ',') ADVANCE(731);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '4') ADVANCE(752);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '6') ADVANCE(753);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'A') ADVANCE(764);
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(914);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'A') ADVANCE(762);
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(914);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'A') ADVANCE(908);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'A') ADVANCE(817);
      if (lookahead == 'O') ADVANCE(811);
      if (lookahead == 'R') ADVANCE(800);
      if (lookahead == 'U') ADVANCE(807);
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(914);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'C') ADVANCE(780);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(914);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'C') ADVANCE(787);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(914);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'C') ADVANCE(789);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(914);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'C') ADVANCE(773);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(914);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'C') ADVANCE(814);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(914);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'D') ADVANCE(534);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(914);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'D') ADVANCE(560);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(914);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'D') ADVANCE(835);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'E') ADVANCE(790);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(914);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'E') ADVANCE(812);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(914);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'E') ADVANCE(755);
      if (lookahead == 'T') ADVANCE(815);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(914);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'E') ADVANCE(755);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(914);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'E') ADVANCE(819);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(914);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'E') ADVANCE(554);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(914);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'E') ADVANCE(546);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(914);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'E') ADVANCE(540);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(914);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'E') ADVANCE(763);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(914);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'E') ADVANCE(818);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(914);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'F') ADVANCE(784);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(914);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'F') ADVANCE(873);
      if (lookahead == ']') ADVANCE(643);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'G') ADVANCE(772);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(914);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'H') ADVANCE(548);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(914);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'I') ADVANCE(771);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(914);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'I') ADVANCE(792);
      if (lookahead == 'O') ADVANCE(760);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(914);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'I') ADVANCE(796);
      if (lookahead == 'O') ADVANCE(761);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(914);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'I') ADVANCE(795);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(914);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'I') ADVANCE(801);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(914);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'K') ADVANCE(550);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(914);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'K') ADVANCE(556);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(914);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'K') ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(914);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'K') ADVANCE(558);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(914);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'L') ADVANCE(776);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(914);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'L') ADVANCE(783);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(914);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'N') ADVANCE(786);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(914);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'N') ADVANCE(791);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(914);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'N') ADVANCE(809);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(914);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'N') ADVANCE(765);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(914);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'N') ADVANCE(788);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(914);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'N') ADVANCE(798);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(914);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'N') ADVANCE(775);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(914);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'O') ADVANCE(797);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(914);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'O') ADVANCE(803);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(914);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'O') ADVANCE(794);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(914);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'P') ADVANCE(629);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(914);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'P') ADVANCE(777);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(914);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'P') ADVANCE(833);
      if (lookahead == ']') ADVANCE(639);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'P') ADVANCE(816);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(914);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'P') ADVANCE(839);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'R') ADVANCE(779);
      if (lookahead == 'T') ADVANCE(538);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(914);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'R') ADVANCE(756);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(914);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'S') ADVANCE(544);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(914);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'S') ADVANCE(904);
      if (lookahead == ']') ADVANCE(635);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'S') ADVANCE(813);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(914);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'T') ADVANCE(532);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(914);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'T') ADVANCE(536);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(914);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'T') ADVANCE(542);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(914);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'T') ADVANCE(802);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(914);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'T') ADVANCE(785);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(914);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'T') ADVANCE(759);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(914);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'T') ADVANCE(774);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(914);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'W') ADVANCE(562);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(914);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == ']') ADVANCE(647);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == ']') ADVANCE(653);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == ']') ADVANCE(633);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == ']') ADVANCE(641);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == ']') ADVANCE(645);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == ']') ADVANCE(637);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == ']') ADVANCE(651);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == ']') ADVANCE(649);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'a') ADVANCE(890);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'a') ADVANCE(861);
      if (lookahead == 'i') ADVANCE(859);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'a') ADVANCE(861);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'a') ADVANCE(887);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'a') ADVANCE(865);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'a') ADVANCE(879);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'a') ADVANCE(882);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'a') ADVANCE(902);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'a') ADVANCE(824);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'a') ADVANCE(875);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'a') ADVANCE(866);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'a') ADVANCE(886);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'c') ADVANCE(757);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'e') ADVANCE(912);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'e') ADVANCE(754);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'e') ADVANCE(1004);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'e') ADVANCE(1006);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'e') ADVANCE(751);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'e') ADVANCE(878);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'e') ADVANCE(888);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'e') ADVANCE(884);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'e') ADVANCE(895);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'g') ADVANCE(806);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'h') ADVANCE(822);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'i') ADVANCE(840);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'i') ADVANCE(876);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'i') ADVANCE(867);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'i') ADVANCE(870);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'i') ADVANCE(847);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'k') ADVANCE(856);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'l') ADVANCE(656);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'l') ADVANCE(845);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'l') ADVANCE(858);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'l') ADVANCE(892);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'l') ADVANCE(901);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'm') ADVANCE(804);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'm') ADVANCE(766);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'm') ADVANCE(891);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'm') ADVANCE(893);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'n') ADVANCE(850);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'n') ADVANCE(889);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'o') ADVANCE(857);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'o') ADVANCE(868);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'o') ADVANCE(877);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'o') ADVANCE(869);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'o') ADVANCE(881);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'p') ADVANCE(900);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'p') ADVANCE(903);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'p') ADVANCE(834);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'r') ADVANCE(863);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'r') ADVANCE(913);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'r') ADVANCE(832);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'r') ADVANCE(910);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'r') ADVANCE(864);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'r') ADVANCE(899);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'r') ADVANCE(854);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'r') ADVANCE(905);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'r') ADVANCE(849);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'r') ADVANCE(838);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 's') ADVANCE(852);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 's') ADVANCE(820);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 's') ADVANCE(821);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 's') ADVANCE(842);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 's') ADVANCE(823);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 's') ADVANCE(844);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 893:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 's') ADVANCE(825);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 894:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 's') ADVANCE(826);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 895:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 's') ADVANCE(827);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 896:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 's') ADVANCE(848);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 897:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 's') ADVANCE(896);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 898:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 't') ADVANCE(851);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 899:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 't') ADVANCE(778);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 900:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 't') ADVANCE(855);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 901:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 't') ADVANCE(853);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 902:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 't') ADVANCE(836);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 903:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 't') ADVANCE(911);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 904:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 't') ADVANCE(883);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 905:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 't') ADVANCE(894);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 906:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'u') ADVANCE(846);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 907:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'u') ADVANCE(860);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 908:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'u') ADVANCE(898);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 909:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'u') ADVANCE(862);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 910:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'u') ADVANCE(843);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 911:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'u') ADVANCE(885);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 912:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'x') ADVANCE(750);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 913:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'y') ADVANCE(810);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 914:
      ACCEPT_TOKEN(sym_key_string_text);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(914);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 915:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 916:
      ACCEPT_TOKEN(anon_sym_BSLASH2);
      END_STATE();
    case 917:
      ACCEPT_TOKEN(aux_sym_key_string_escaped_char_token1);
      END_STATE();
    case 918:
      ACCEPT_TOKEN(aux_sym_key_string_escaped_char_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1017);
      END_STATE();
    case 919:
      ACCEPT_TOKEN(aux_sym_value_string_text_token1);
      END_STATE();
    case 920:
      ACCEPT_TOKEN(aux_sym_value_string_text_token1);
      if (lookahead == 'a') ADVANCE(276);
      END_STATE();
    case 921:
      ACCEPT_TOKEN(aux_sym_value_string_text_token1);
      if (lookahead == 'r') ADVANCE(488);
      END_STATE();
    case 922:
      ACCEPT_TOKEN(aux_sym_value_string_text_token1);
      if (lookahead == 'u') ADVANCE(271);
      END_STATE();
    case 923:
      ACCEPT_TOKEN(aux_sym_value_string_text_token1);
      if (lookahead == '{') ADVANCE(983);
      END_STATE();
    case 924:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1017);
      END_STATE();
    case 925:
      ACCEPT_TOKEN(aux_sym_oneline_string_token1);
      END_STATE();
    case 926:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 927:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      if (lookahead == '`') ADVANCE(93);
      END_STATE();
    case 928:
      ACCEPT_TOKEN(aux_sym_oneline_string_text_token1);
      END_STATE();
    case 929:
      ACCEPT_TOKEN(aux_sym_oneline_string_text_token1);
      if (lookahead == '`') ADVANCE(926);
      if (set_contains(extras_character_set_1, 10, lookahead)) ADVANCE(929);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(928);
      END_STATE();
    case 930:
      ACCEPT_TOKEN(aux_sym_oneline_string_text_token1);
      if (lookahead == '{') ADVANCE(983);
      END_STATE();
    case 931:
      ACCEPT_TOKEN(aux_sym_oneline_string_text_token2);
      END_STATE();
    case 932:
      ACCEPT_TOKEN(aux_sym_oneline_string_text_token2);
      if (lookahead == '#') ADVANCE(933);
      if (set_contains(extras_character_set_2, 9, lookahead)) ADVANCE(932);
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(931);
      END_STATE();
    case 933:
      ACCEPT_TOKEN(aux_sym_oneline_string_text_token2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1017);
      END_STATE();
    case 934:
      ACCEPT_TOKEN(anon_sym_BQUOTE_BQUOTE_BQUOTE);
      END_STATE();
    case 935:
      ACCEPT_TOKEN(anon_sym_base64);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(959);
      END_STATE();
    case 936:
      ACCEPT_TOKEN(anon_sym_hex);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(959);
      END_STATE();
    case 937:
      ACCEPT_TOKEN(anon_sym_json);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(959);
      END_STATE();
    case 938:
      ACCEPT_TOKEN(anon_sym_xml);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(959);
      END_STATE();
    case 939:
      ACCEPT_TOKEN(anon_sym_graphql);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(959);
      END_STATE();
    case 940:
      ACCEPT_TOKEN(aux_sym_multiline_string_type_token1);
      if (lookahead == '\n') ADVANCE(530);
      if (lookahead == '#') ADVANCE(959);
      if (lookahead == 'b') ADVANCE(944);
      if (lookahead == 'g') ADVANCE(955);
      if (lookahead == 'h') ADVANCE(945);
      if (lookahead == 'j') ADVANCE(956);
      if (lookahead == 'x') ADVANCE(950);
      if (set_contains(extras_character_set_2, 9, lookahead)) ADVANCE(940);
      if (lookahead != 0) ADVANCE(959);
      END_STATE();
    case 941:
      ACCEPT_TOKEN(aux_sym_multiline_string_type_token1);
      if (lookahead == '4') ADVANCE(935);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(959);
      END_STATE();
    case 942:
      ACCEPT_TOKEN(aux_sym_multiline_string_type_token1);
      if (lookahead == '6') ADVANCE(941);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(959);
      END_STATE();
    case 943:
      ACCEPT_TOKEN(aux_sym_multiline_string_type_token1);
      if (lookahead == 'a') ADVANCE(953);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(959);
      END_STATE();
    case 944:
      ACCEPT_TOKEN(aux_sym_multiline_string_type_token1);
      if (lookahead == 'a') ADVANCE(957);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(959);
      END_STATE();
    case 945:
      ACCEPT_TOKEN(aux_sym_multiline_string_type_token1);
      if (lookahead == 'e') ADVANCE(958);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(959);
      END_STATE();
    case 946:
      ACCEPT_TOKEN(aux_sym_multiline_string_type_token1);
      if (lookahead == 'e') ADVANCE(942);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(959);
      END_STATE();
    case 947:
      ACCEPT_TOKEN(aux_sym_multiline_string_type_token1);
      if (lookahead == 'h') ADVANCE(954);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(959);
      END_STATE();
    case 948:
      ACCEPT_TOKEN(aux_sym_multiline_string_type_token1);
      if (lookahead == 'l') ADVANCE(938);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(959);
      END_STATE();
    case 949:
      ACCEPT_TOKEN(aux_sym_multiline_string_type_token1);
      if (lookahead == 'l') ADVANCE(939);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(959);
      END_STATE();
    case 950:
      ACCEPT_TOKEN(aux_sym_multiline_string_type_token1);
      if (lookahead == 'm') ADVANCE(948);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(959);
      END_STATE();
    case 951:
      ACCEPT_TOKEN(aux_sym_multiline_string_type_token1);
      if (lookahead == 'n') ADVANCE(937);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(959);
      END_STATE();
    case 952:
      ACCEPT_TOKEN(aux_sym_multiline_string_type_token1);
      if (lookahead == 'o') ADVANCE(951);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(959);
      END_STATE();
    case 953:
      ACCEPT_TOKEN(aux_sym_multiline_string_type_token1);
      if (lookahead == 'p') ADVANCE(947);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(959);
      END_STATE();
    case 954:
      ACCEPT_TOKEN(aux_sym_multiline_string_type_token1);
      if (lookahead == 'q') ADVANCE(949);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(959);
      END_STATE();
    case 955:
      ACCEPT_TOKEN(aux_sym_multiline_string_type_token1);
      if (lookahead == 'r') ADVANCE(943);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(959);
      END_STATE();
    case 956:
      ACCEPT_TOKEN(aux_sym_multiline_string_type_token1);
      if (lookahead == 's') ADVANCE(952);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(959);
      END_STATE();
    case 957:
      ACCEPT_TOKEN(aux_sym_multiline_string_type_token1);
      if (lookahead == 's') ADVANCE(946);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(959);
      END_STATE();
    case 958:
      ACCEPT_TOKEN(aux_sym_multiline_string_type_token1);
      if (lookahead == 'x') ADVANCE(936);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(959);
      END_STATE();
    case 959:
      ACCEPT_TOKEN(aux_sym_multiline_string_type_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(959);
      END_STATE();
    case 960:
      ACCEPT_TOKEN(aux_sym__multiline_string_text_token1);
      if (lookahead == '\n') ADVANCE(529);
      if (lookahead == '#') ADVANCE(961);
      if (set_contains(extras_character_set_2, 9, lookahead)) ADVANCE(960);
      if (lookahead != 0 &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != '{') ADVANCE(962);
      END_STATE();
    case 961:
      ACCEPT_TOKEN(aux_sym__multiline_string_text_token1);
      if (lookahead == '\\' ||
          lookahead == '`' ||
          lookahead == '{') ADVANCE(1017);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(961);
      END_STATE();
    case 962:
      ACCEPT_TOKEN(aux_sym__multiline_string_text_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != '{') ADVANCE(962);
      END_STATE();
    case 963:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 964:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '{') ADVANCE(983);
      END_STATE();
    case 965:
      ACCEPT_TOKEN(sym_filename_text);
      if (lookahead == '\n') ADVANCE(528);
      if ((set_contains(extras_character_set_2, 9, lookahead)) &&
          lookahead != ' ') ADVANCE(965);
      if (lookahead != 0 &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '\\') ADVANCE(968);
      END_STATE();
    case 966:
      ACCEPT_TOKEN(sym_filename_text);
      if (lookahead == '{') ADVANCE(984);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '\\') ADVANCE(968);
      END_STATE();
    case 967:
      ACCEPT_TOKEN(sym_filename_text);
      if ((set_contains(extras_character_set_1, 10, lookahead)) &&
          lookahead != ' ') ADVANCE(967);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '\\') ADVANCE(968);
      END_STATE();
    case 968:
      ACCEPT_TOKEN(sym_filename_text);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '\\') ADVANCE(968);
      END_STATE();
    case 969:
      ACCEPT_TOKEN(aux_sym_filename_escaped_char_token1);
      END_STATE();
    case 970:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 971:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 972:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 973:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == 'A') ADVANCE(419);
      if (lookahead == 'B') ADVANCE(101);
      if (lookahead == 'C') ADVANCE(130);
      if (lookahead == 'F') ADVANCE(318);
      if (lookahead == 'M') ADVANCE(481);
      if (lookahead == 'O') ADVANCE(353);
      if (lookahead == 'Q') ADVANCE(482);
      END_STATE();
    case 974:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == 'A') ADVANCE(419);
      if (lookahead == 'C') ADVANCE(129);
      END_STATE();
    case 975:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == 'A') ADVANCE(897);
      if (lookahead == 'C') ADVANCE(837);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 976:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == 'B') ADVANCE(101);
      if (lookahead == 'C') ADVANCE(325);
      if (lookahead == 'F') ADVANCE(318);
      if (lookahead == 'M') ADVANCE(481);
      if (lookahead == 'O') ADVANCE(353);
      if (lookahead == 'Q') ADVANCE(482);
      END_STATE();
    case 977:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == 'B') ADVANCE(831);
      if (lookahead == 'C') ADVANCE(872);
      if (lookahead == 'F') ADVANCE(871);
      if (lookahead == 'M') ADVANCE(909);
      if (lookahead == 'O') ADVANCE(874);
      if (lookahead == 'Q') ADVANCE(906);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 978:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 979:
      ACCEPT_TOKEN(sym_json_string_text);
      END_STATE();
    case 980:
      ACCEPT_TOKEN(sym_json_string_text);
      if (lookahead == '#') ADVANCE(982);
      if (set_contains(extras_character_set_2, 9, lookahead)) ADVANCE(980);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(979);
      END_STATE();
    case 981:
      ACCEPT_TOKEN(sym_json_string_text);
      if (lookahead == '{') ADVANCE(983);
      END_STATE();
    case 982:
      ACCEPT_TOKEN(sym_json_string_text);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1017);
      END_STATE();
    case 983:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      END_STATE();
    case 984:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '\\') ADVANCE(968);
      END_STATE();
    case 985:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 986:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 987:
      ACCEPT_TOKEN(aux_sym_variable_name_token1);
      END_STATE();
    case 988:
      ACCEPT_TOKEN(aux_sym_variable_name_token2);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(988);
      END_STATE();
    case 989:
      ACCEPT_TOKEN(anon_sym_count);
      END_STATE();
    case 990:
      ACCEPT_TOKEN(anon_sym_urlEncode);
      END_STATE();
    case 991:
      ACCEPT_TOKEN(anon_sym_urlDecode);
      END_STATE();
    case 992:
      ACCEPT_TOKEN(anon_sym_toInt);
      END_STATE();
    case 993:
      ACCEPT_TOKEN(anon_sym_htmlEscape);
      END_STATE();
    case 994:
      ACCEPT_TOKEN(anon_sym_htmlUnescape);
      END_STATE();
    case 995:
      ACCEPT_TOKEN(anon_sym_daysAfterNow);
      END_STATE();
    case 996:
      ACCEPT_TOKEN(anon_sym_daysBeforeNow);
      END_STATE();
    case 997:
      ACCEPT_TOKEN(anon_sym_decode);
      END_STATE();
    case 998:
      ACCEPT_TOKEN(anon_sym_format);
      END_STATE();
    case 999:
      ACCEPT_TOKEN(anon_sym_toDate);
      END_STATE();
    case 1000:
      ACCEPT_TOKEN(anon_sym_nth);
      END_STATE();
    case 1001:
      ACCEPT_TOKEN(anon_sym_replace);
      END_STATE();
    case 1002:
      ACCEPT_TOKEN(anon_sym_split);
      END_STATE();
    case 1003:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 1004:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 1005:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 1006:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 1007:
      ACCEPT_TOKEN(sym_digit);
      END_STATE();
    case 1008:
      ACCEPT_TOKEN(sym_hexdigit);
      END_STATE();
    case 1009:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 1010:
      ACCEPT_TOKEN(anon_sym_e);
      END_STATE();
    case 1011:
      ACCEPT_TOKEN(anon_sym_e);
      if (lookahead == 'n') ADVANCE(168);
      if (lookahead == 'q') ADVANCE(492);
      if (lookahead == 'x') ADVANCE(259);
      END_STATE();
    case 1012:
      ACCEPT_TOKEN(anon_sym_E);
      END_STATE();
    case 1013:
      ACCEPT_TOKEN(anon_sym_E);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(622);
      END_STATE();
    case 1014:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 1015:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 1016:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '/' ||
          lookahead == '\\') ADVANCE(1017);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1016);
      END_STATE();
    case 1017:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1017);
      END_STATE();
    case 1018:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 1019:
      ACCEPT_TOKEN(sym_regex_text);
      if (lookahead == '#') ADVANCE(1016);
      if (set_contains(extras_character_set_1, 10, lookahead)) ADVANCE(1019);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '/' &&
          lookahead != '\\') ADVANCE(1020);
      END_STATE();
    case 1020:
      ACCEPT_TOKEN(sym_regex_text);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '/' &&
          lookahead != '\\') ADVANCE(1020);
      END_STATE();
    case 1021:
      ACCEPT_TOKEN(aux_sym_regex_escaped_char_token1);
      END_STATE();
    case 1022:
      ACCEPT_TOKEN(aux_sym_regex_escaped_char_token1);
      if (lookahead == '#') ADVANCE(1017);
      if (set_contains(extras_character_set_1, 10, lookahead)) ADVANCE(1022);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(1021);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 515},
  [2] = {.lex_state = 521},
  [3] = {.lex_state = 521},
  [4] = {.lex_state = 521},
  [5] = {.lex_state = 521},
  [6] = {.lex_state = 517},
  [7] = {.lex_state = 517},
  [8] = {.lex_state = 517},
  [9] = {.lex_state = 517},
  [10] = {.lex_state = 517},
  [11] = {.lex_state = 517},
  [12] = {.lex_state = 522},
  [13] = {.lex_state = 522},
  [14] = {.lex_state = 517},
  [15] = {.lex_state = 517},
  [16] = {.lex_state = 524},
  [17] = {.lex_state = 524},
  [18] = {.lex_state = 517},
  [19] = {.lex_state = 517},
  [20] = {.lex_state = 517},
  [21] = {.lex_state = 517},
  [22] = {.lex_state = 517},
  [23] = {.lex_state = 517},
  [24] = {.lex_state = 517},
  [25] = {.lex_state = 517},
  [26] = {.lex_state = 517},
  [27] = {.lex_state = 517},
  [28] = {.lex_state = 517},
  [29] = {.lex_state = 517},
  [30] = {.lex_state = 517},
  [31] = {.lex_state = 517},
  [32] = {.lex_state = 517},
  [33] = {.lex_state = 515},
  [34] = {.lex_state = 515},
  [35] = {.lex_state = 521},
  [36] = {.lex_state = 521},
  [37] = {.lex_state = 521},
  [38] = {.lex_state = 521},
  [39] = {.lex_state = 521},
  [40] = {.lex_state = 521},
  [41] = {.lex_state = 515},
  [42] = {.lex_state = 515},
  [43] = {.lex_state = 521},
  [44] = {.lex_state = 521},
  [45] = {.lex_state = 521},
  [46] = {.lex_state = 521},
  [47] = {.lex_state = 521},
  [48] = {.lex_state = 521},
  [49] = {.lex_state = 521},
  [50] = {.lex_state = 515},
  [51] = {.lex_state = 517},
  [52] = {.lex_state = 521},
  [53] = {.lex_state = 521},
  [54] = {.lex_state = 521},
  [55] = {.lex_state = 524},
  [56] = {.lex_state = 18},
  [57] = {.lex_state = 18},
  [58] = {.lex_state = 521},
  [59] = {.lex_state = 515},
  [60] = {.lex_state = 515},
  [61] = {.lex_state = 517},
  [62] = {.lex_state = 517},
  [63] = {.lex_state = 515},
  [64] = {.lex_state = 515},
  [65] = {.lex_state = 522},
  [66] = {.lex_state = 522},
  [67] = {.lex_state = 522},
  [68] = {.lex_state = 522},
  [69] = {.lex_state = 524},
  [70] = {.lex_state = 524},
  [71] = {.lex_state = 524},
  [72] = {.lex_state = 524},
  [73] = {.lex_state = 524},
  [74] = {.lex_state = 524},
  [75] = {.lex_state = 524},
  [76] = {.lex_state = 524},
  [77] = {.lex_state = 524},
  [78] = {.lex_state = 524},
  [79] = {.lex_state = 524},
  [80] = {.lex_state = 524},
  [81] = {.lex_state = 524},
  [82] = {.lex_state = 524},
  [83] = {.lex_state = 524},
  [84] = {.lex_state = 524},
  [85] = {.lex_state = 524},
  [86] = {.lex_state = 515},
  [87] = {.lex_state = 522},
  [88] = {.lex_state = 522},
  [89] = {.lex_state = 522},
  [90] = {.lex_state = 522},
  [91] = {.lex_state = 524},
  [92] = {.lex_state = 522},
  [93] = {.lex_state = 515},
  [94] = {.lex_state = 517},
  [95] = {.lex_state = 517},
  [96] = {.lex_state = 517},
  [97] = {.lex_state = 517},
  [98] = {.lex_state = 515},
  [99] = {.lex_state = 515},
  [100] = {.lex_state = 517},
  [101] = {.lex_state = 517},
  [102] = {.lex_state = 517},
  [103] = {.lex_state = 517},
  [104] = {.lex_state = 517},
  [105] = {.lex_state = 515},
  [106] = {.lex_state = 517},
  [107] = {.lex_state = 524},
  [108] = {.lex_state = 524},
  [109] = {.lex_state = 515},
  [110] = {.lex_state = 515},
  [111] = {.lex_state = 1},
  [112] = {.lex_state = 1},
  [113] = {.lex_state = 515},
  [114] = {.lex_state = 515},
  [115] = {.lex_state = 524},
  [116] = {.lex_state = 524},
  [117] = {.lex_state = 515},
  [118] = {.lex_state = 515},
  [119] = {.lex_state = 524},
  [120] = {.lex_state = 3},
  [121] = {.lex_state = 19},
  [122] = {.lex_state = 28},
  [123] = {.lex_state = 515},
  [124] = {.lex_state = 515},
  [125] = {.lex_state = 515},
  [126] = {.lex_state = 515},
  [127] = {.lex_state = 7},
  [128] = {.lex_state = 515},
  [129] = {.lex_state = 7},
  [130] = {.lex_state = 7},
  [131] = {.lex_state = 515},
  [132] = {.lex_state = 515},
  [133] = {.lex_state = 7},
  [134] = {.lex_state = 515},
  [135] = {.lex_state = 515},
  [136] = {.lex_state = 27},
  [137] = {.lex_state = 7},
  [138] = {.lex_state = 517},
  [139] = {.lex_state = 517},
  [140] = {.lex_state = 517},
  [141] = {.lex_state = 517},
  [142] = {.lex_state = 517},
  [143] = {.lex_state = 517},
  [144] = {.lex_state = 517},
  [145] = {.lex_state = 517},
  [146] = {.lex_state = 517},
  [147] = {.lex_state = 517},
  [148] = {.lex_state = 517},
  [149] = {.lex_state = 517},
  [150] = {.lex_state = 524},
  [151] = {.lex_state = 517},
  [152] = {.lex_state = 517},
  [153] = {.lex_state = 524},
  [154] = {.lex_state = 524},
  [155] = {.lex_state = 517},
  [156] = {.lex_state = 524},
  [157] = {.lex_state = 517},
  [158] = {.lex_state = 517},
  [159] = {.lex_state = 2},
  [160] = {.lex_state = 4},
  [161] = {.lex_state = 2},
  [162] = {.lex_state = 2},
  [163] = {.lex_state = 2},
  [164] = {.lex_state = 7},
  [165] = {.lex_state = 7},
  [166] = {.lex_state = 8},
  [167] = {.lex_state = 29},
  [168] = {.lex_state = 10},
  [169] = {.lex_state = 4},
  [170] = {.lex_state = 11},
  [171] = {.lex_state = 4},
  [172] = {.lex_state = 10},
  [173] = {.lex_state = 10},
  [174] = {.lex_state = 10},
  [175] = {.lex_state = 10},
  [176] = {.lex_state = 22},
  [177] = {.lex_state = 22},
  [178] = {.lex_state = 22},
  [179] = {.lex_state = 29},
  [180] = {.lex_state = 7},
  [181] = {.lex_state = 12},
  [182] = {.lex_state = 12},
  [183] = {.lex_state = 22},
  [184] = {.lex_state = 7},
  [185] = {.lex_state = 32},
  [186] = {.lex_state = 32},
  [187] = {.lex_state = 22},
  [188] = {.lex_state = 12},
  [189] = {.lex_state = 29},
  [190] = {.lex_state = 29},
  [191] = {.lex_state = 29},
  [192] = {.lex_state = 32},
  [193] = {.lex_state = 23},
  [194] = {.lex_state = 30},
  [195] = {.lex_state = 30},
  [196] = {.lex_state = 32},
  [197] = {.lex_state = 8},
  [198] = {.lex_state = 2},
  [199] = {.lex_state = 8},
  [200] = {.lex_state = 2},
  [201] = {.lex_state = 26},
  [202] = {.lex_state = 17},
  [203] = {.lex_state = 10},
  [204] = {.lex_state = 10},
  [205] = {.lex_state = 21},
  [206] = {.lex_state = 24},
  [207] = {.lex_state = 24},
  [208] = {.lex_state = 24},
  [209] = {.lex_state = 24},
  [210] = {.lex_state = 21},
  [211] = {.lex_state = 10},
  [212] = {.lex_state = 10},
  [213] = {.lex_state = 24},
  [214] = {.lex_state = 10},
  [215] = {.lex_state = 4},
  [216] = {.lex_state = 4},
  [217] = {.lex_state = 26},
  [218] = {.lex_state = 12},
  [219] = {.lex_state = 7},
  [220] = {.lex_state = 29},
  [221] = {.lex_state = 28},
  [222] = {.lex_state = 7},
  [223] = {.lex_state = 12},
  [224] = {.lex_state = 29},
  [225] = {.lex_state = 22},
  [226] = {.lex_state = 28},
  [227] = {.lex_state = 19},
  [228] = {.lex_state = 22},
  [229] = {.lex_state = 19},
  [230] = {.lex_state = 28},
  [231] = {.lex_state = 28},
  [232] = {.lex_state = 8},
  [233] = {.lex_state = 524},
  [234] = {.lex_state = 32},
  [235] = {.lex_state = 7},
  [236] = {.lex_state = 524},
  [237] = {.lex_state = 7},
  [238] = {.lex_state = 30},
  [239] = {.lex_state = 7},
  [240] = {.lex_state = 2},
  [241] = {.lex_state = 30},
  [242] = {.lex_state = 14},
  [243] = {.lex_state = 2},
  [244] = {.lex_state = 524},
  [245] = {.lex_state = 524},
  [246] = {.lex_state = 28},
  [247] = {.lex_state = 8},
  [248] = {.lex_state = 28},
  [249] = {.lex_state = 7},
  [250] = {.lex_state = 7},
  [251] = {.lex_state = 7},
  [252] = {.lex_state = 26},
  [253] = {.lex_state = 524},
  [254] = {.lex_state = 7},
  [255] = {.lex_state = 32},
  [256] = {.lex_state = 1},
  [257] = {.lex_state = 14},
  [258] = {.lex_state = 524},
  [259] = {.lex_state = 7},
  [260] = {.lex_state = 7},
  [261] = {.lex_state = 19},
  [262] = {.lex_state = 28},
  [263] = {.lex_state = 29},
  [264] = {.lex_state = 10},
  [265] = {.lex_state = 1},
  [266] = {.lex_state = 2},
  [267] = {.lex_state = 2},
  [268] = {.lex_state = 4},
  [269] = {.lex_state = 29},
  [270] = {.lex_state = 2},
  [271] = {.lex_state = 14},
  [272] = {.lex_state = 4},
  [273] = {.lex_state = 10},
  [274] = {.lex_state = 10},
  [275] = {.lex_state = 14},
  [276] = {.lex_state = 28},
  [277] = {.lex_state = 10},
  [278] = {.lex_state = 10},
  [279] = {.lex_state = 10},
  [280] = {.lex_state = 10},
  [281] = {.lex_state = 2},
  [282] = {.lex_state = 515},
  [283] = {.lex_state = 19},
  [284] = {.lex_state = 524},
  [285] = {.lex_state = 24},
  [286] = {.lex_state = 1},
  [287] = {.lex_state = 12},
  [288] = {.lex_state = 12},
  [289] = {.lex_state = 12},
  [290] = {.lex_state = 22},
  [291] = {.lex_state = 28},
  [292] = {.lex_state = 515},
  [293] = {.lex_state = 28},
  [294] = {.lex_state = 24},
  [295] = {.lex_state = 4},
  [296] = {.lex_state = 4},
  [297] = {.lex_state = 524},
  [298] = {.lex_state = 22},
  [299] = {.lex_state = 515},
  [300] = {.lex_state = 30},
  [301] = {.lex_state = 8},
  [302] = {.lex_state = 515},
  [303] = {.lex_state = 524},
  [304] = {.lex_state = 30},
  [305] = {.lex_state = 515},
  [306] = {.lex_state = 28},
  [307] = {.lex_state = 515},
  [308] = {.lex_state = 22},
  [309] = {.lex_state = 22},
  [310] = {.lex_state = 515},
  [311] = {.lex_state = 515},
  [312] = {.lex_state = 524},
  [313] = {.lex_state = 515},
  [314] = {.lex_state = 24},
  [315] = {.lex_state = 515},
  [316] = {.lex_state = 515},
  [317] = {.lex_state = 4},
  [318] = {.lex_state = 515},
  [319] = {.lex_state = 22},
  [320] = {.lex_state = 524},
  [321] = {.lex_state = 515},
  [322] = {.lex_state = 524},
  [323] = {.lex_state = 524},
  [324] = {.lex_state = 515},
  [325] = {.lex_state = 515},
  [326] = {.lex_state = 2},
  [327] = {.lex_state = 32},
  [328] = {.lex_state = 8},
  [329] = {.lex_state = 12},
  [330] = {.lex_state = 32},
  [331] = {.lex_state = 28},
  [332] = {.lex_state = 524},
  [333] = {.lex_state = 524},
  [334] = {.lex_state = 524},
  [335] = {.lex_state = 524},
  [336] = {.lex_state = 24},
  [337] = {.lex_state = 524},
  [338] = {.lex_state = 4},
  [339] = {.lex_state = 4},
  [340] = {.lex_state = 524},
  [341] = {.lex_state = 12},
  [342] = {.lex_state = 28},
  [343] = {.lex_state = 524},
  [344] = {.lex_state = 515},
  [345] = {.lex_state = 37},
  [346] = {.lex_state = 37},
  [347] = {.lex_state = 515},
  [348] = {.lex_state = 515},
  [349] = {.lex_state = 37},
  [350] = {.lex_state = 37},
  [351] = {.lex_state = 515},
  [352] = {.lex_state = 37},
  [353] = {.lex_state = 515},
  [354] = {.lex_state = 37},
  [355] = {.lex_state = 515},
  [356] = {.lex_state = 515},
  [357] = {.lex_state = 515},
  [358] = {.lex_state = 515},
  [359] = {.lex_state = 515},
  [360] = {.lex_state = 515},
  [361] = {.lex_state = 515},
  [362] = {.lex_state = 515},
  [363] = {.lex_state = 37},
  [364] = {.lex_state = 515},
  [365] = {.lex_state = 515},
  [366] = {.lex_state = 515},
  [367] = {.lex_state = 37},
  [368] = {.lex_state = 37},
  [369] = {.lex_state = 37},
  [370] = {.lex_state = 524},
  [371] = {.lex_state = 515},
  [372] = {.lex_state = 37},
  [373] = {.lex_state = 26},
  [374] = {.lex_state = 524},
  [375] = {.lex_state = 515},
  [376] = {.lex_state = 515},
  [377] = {.lex_state = 19},
  [378] = {.lex_state = 515},
  [379] = {.lex_state = 515},
  [380] = {.lex_state = 14},
  [381] = {.lex_state = 515},
  [382] = {.lex_state = 524},
  [383] = {.lex_state = 19},
  [384] = {.lex_state = 19},
  [385] = {.lex_state = 26},
  [386] = {.lex_state = 34},
  [387] = {.lex_state = 515},
  [388] = {.lex_state = 37},
  [389] = {.lex_state = 19},
  [390] = {.lex_state = 19},
  [391] = {.lex_state = 28},
  [392] = {.lex_state = 524},
  [393] = {.lex_state = 515},
  [394] = {.lex_state = 515},
  [395] = {.lex_state = 515},
  [396] = {.lex_state = 515},
  [397] = {.lex_state = 515},
  [398] = {.lex_state = 515},
  [399] = {.lex_state = 515},
  [400] = {.lex_state = 515},
  [401] = {.lex_state = 34},
  [402] = {.lex_state = 515},
  [403] = {.lex_state = 28},
  [404] = {.lex_state = 515},
  [405] = {.lex_state = 28},
  [406] = {.lex_state = 19},
  [407] = {.lex_state = 28},
  [408] = {.lex_state = 28},
  [409] = {.lex_state = 524},
  [410] = {.lex_state = 524},
  [411] = {.lex_state = 515},
  [412] = {.lex_state = 37},
  [413] = {.lex_state = 524},
  [414] = {.lex_state = 524},
  [415] = {.lex_state = 524},
  [416] = {.lex_state = 524},
  [417] = {.lex_state = 515},
  [418] = {.lex_state = 524},
  [419] = {.lex_state = 515},
  [420] = {.lex_state = 524},
  [421] = {.lex_state = 27},
  [422] = {.lex_state = 524},
  [423] = {.lex_state = 524},
  [424] = {.lex_state = 524},
  [425] = {.lex_state = 524},
  [426] = {.lex_state = 515},
  [427] = {.lex_state = 28},
  [428] = {.lex_state = 28},
  [429] = {.lex_state = 34},
  [430] = {.lex_state = 19},
  [431] = {.lex_state = 28},
  [432] = {.lex_state = 28},
  [433] = {.lex_state = 515},
  [434] = {.lex_state = 515},
  [435] = {.lex_state = 19},
  [436] = {.lex_state = 524},
  [437] = {.lex_state = 524},
  [438] = {.lex_state = 524},
  [439] = {.lex_state = 18},
  [440] = {.lex_state = 6},
  [441] = {.lex_state = 524},
  [442] = {.lex_state = 6},
  [443] = {.lex_state = 524},
  [444] = {.lex_state = 524},
  [445] = {.lex_state = 524},
  [446] = {.lex_state = 524},
  [447] = {.lex_state = 524},
  [448] = {.lex_state = 524},
  [449] = {.lex_state = 19},
  [450] = {.lex_state = 524},
  [451] = {.lex_state = 27},
  [452] = {.lex_state = 18},
  [453] = {.lex_state = 18},
  [454] = {.lex_state = 524},
  [455] = {.lex_state = 524},
  [456] = {.lex_state = 524},
  [457] = {.lex_state = 524},
  [458] = {.lex_state = 524},
  [459] = {.lex_state = 524},
  [460] = {.lex_state = 524},
  [461] = {.lex_state = 18},
  [462] = {.lex_state = 524},
  [463] = {.lex_state = 524},
  [464] = {.lex_state = 524},
  [465] = {.lex_state = 19},
  [466] = {.lex_state = 524},
  [467] = {.lex_state = 524},
  [468] = {.lex_state = 524},
  [469] = {.lex_state = 524},
  [470] = {.lex_state = 524},
  [471] = {.lex_state = 18},
  [472] = {.lex_state = 515},
  [473] = {.lex_state = 25},
  [474] = {.lex_state = 515},
  [475] = {.lex_state = 515},
  [476] = {.lex_state = 515},
  [477] = {.lex_state = 19},
  [478] = {.lex_state = 515},
  [479] = {.lex_state = 19},
  [480] = {.lex_state = 515},
  [481] = {.lex_state = 515},
  [482] = {.lex_state = 515},
  [483] = {.lex_state = 34},
  [484] = {.lex_state = 515},
  [485] = {.lex_state = 515},
  [486] = {.lex_state = 515},
  [487] = {.lex_state = 515},
  [488] = {.lex_state = 34},
  [489] = {.lex_state = 515},
  [490] = {.lex_state = 515},
  [491] = {.lex_state = 515},
  [492] = {.lex_state = 515},
  [493] = {.lex_state = 515},
  [494] = {.lex_state = 515},
  [495] = {.lex_state = 18},
  [496] = {.lex_state = 18},
  [497] = {.lex_state = 18},
  [498] = {.lex_state = 18},
  [499] = {.lex_state = 18},
  [500] = {.lex_state = 18},
  [501] = {.lex_state = 18},
  [502] = {.lex_state = 18},
  [503] = {.lex_state = 18},
  [504] = {.lex_state = 18},
  [505] = {.lex_state = 18},
  [506] = {.lex_state = 18},
  [507] = {.lex_state = 18},
  [508] = {.lex_state = 515},
  [509] = {.lex_state = 515},
  [510] = {.lex_state = 515},
  [511] = {.lex_state = 524},
  [512] = {.lex_state = 515},
  [513] = {.lex_state = 34},
  [514] = {.lex_state = 39},
  [515] = {.lex_state = 515},
  [516] = {.lex_state = 515},
  [517] = {.lex_state = 515},
  [518] = {.lex_state = 515},
  [519] = {.lex_state = 40},
  [520] = {.lex_state = 515},
  [521] = {.lex_state = 41},
  [522] = {.lex_state = 515},
  [523] = {.lex_state = 524},
  [524] = {.lex_state = 515},
  [525] = {.lex_state = 34},
  [526] = {.lex_state = 18},
  [527] = {.lex_state = 18},
  [528] = {.lex_state = 515},
  [529] = {.lex_state = 515},
  [530] = {.lex_state = 515},
  [531] = {.lex_state = 515},
  [532] = {.lex_state = 15},
  [533] = {.lex_state = 524},
  [534] = {.lex_state = 42},
  [535] = {.lex_state = 25},
  [536] = {.lex_state = 515},
  [537] = {.lex_state = 34},
  [538] = {.lex_state = 515},
  [539] = {.lex_state = 524},
  [540] = {.lex_state = 515},
  [541] = {.lex_state = 515},
  [542] = {.lex_state = 515},
  [543] = {.lex_state = 524},
  [544] = {.lex_state = 515},
  [545] = {.lex_state = 515},
  [546] = {.lex_state = 515},
  [547] = {.lex_state = 34},
  [548] = {.lex_state = 524},
  [549] = {.lex_state = 19},
  [550] = {.lex_state = 524},
  [551] = {.lex_state = 16},
  [552] = {.lex_state = 34},
  [553] = {.lex_state = 515},
  [554] = {.lex_state = 19},
  [555] = {.lex_state = 515},
  [556] = {.lex_state = 524},
  [557] = {.lex_state = 515},
  [558] = {.lex_state = 515},
  [559] = {.lex_state = 515},
  [560] = {.lex_state = 515},
  [561] = {.lex_state = 515},
  [562] = {.lex_state = 515},
  [563] = {.lex_state = 19},
  [564] = {.lex_state = 515},
  [565] = {.lex_state = 524},
  [566] = {.lex_state = 25},
  [567] = {.lex_state = 19},
  [568] = {.lex_state = 524},
  [569] = {.lex_state = 19},
  [570] = {.lex_state = 524},
  [571] = {.lex_state = 19},
  [572] = {.lex_state = 524},
  [573] = {.lex_state = 524},
  [574] = {.lex_state = 524},
  [575] = {.lex_state = 524},
  [576] = {.lex_state = 524},
  [577] = {.lex_state = 524},
  [578] = {.lex_state = 524},
  [579] = {.lex_state = 524},
  [580] = {.lex_state = 39},
  [581] = {.lex_state = 18},
  [582] = {.lex_state = 515},
  [583] = {.lex_state = 41},
  [584] = {.lex_state = 34},
  [585] = {.lex_state = 19},
  [586] = {.lex_state = 34},
  [587] = {.lex_state = 515},
  [588] = {.lex_state = 34},
  [589] = {.lex_state = 988},
  [590] = {.lex_state = 34},
  [591] = {.lex_state = 515},
  [592] = {.lex_state = 515},
  [593] = {.lex_state = 515},
  [594] = {.lex_state = 515},
  [595] = {.lex_state = 524},
  [596] = {.lex_state = 34},
  [597] = {.lex_state = 524},
  [598] = {.lex_state = 34},
  [599] = {.lex_state = 34},
  [600] = {.lex_state = 34},
  [601] = {.lex_state = 34},
  [602] = {.lex_state = 34},
  [603] = {.lex_state = 34},
  [604] = {.lex_state = 34},
  [605] = {.lex_state = 34},
  [606] = {.lex_state = 34},
  [607] = {.lex_state = 34},
  [608] = {.lex_state = 34},
  [609] = {.lex_state = 34},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_method_token1] = ACTIONS(1),
    [aux_sym_status_token1] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_LBRACKBasicAuth_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACKQuery_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACKQueryStringParams_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACKForm_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACKFormParams_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACKMultipart_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACKMultipartFormData_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACKCookies_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACKCaptures_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACKAsserts_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACKOptions_RBRACK] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_COLON2] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_LT_QMARK] = ACTIONS(1),
    [anon_sym_QMARK_GT] = ACTIONS(1),
    [anon_sym_LT_SLASH] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_BSLASH] = ACTIONS(1),
    [anon_sym_b] = ACTIONS(1),
    [anon_sym_f] = ACTIONS(1),
    [anon_sym_n] = ACTIONS(1),
    [anon_sym_r] = ACTIONS(1),
    [anon_sym_t] = ACTIONS(1),
    [anon_sym_u] = ACTIONS(1),
    [anon_sym_BSLASH2] = ACTIONS(1),
    [aux_sym_key_string_escaped_char_token1] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_BQUOTE] = ACTIONS(1),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [aux_sym_filename_escaped_char_token1] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(1),
    [aux_sym_variable_name_token1] = ACTIONS(1),
    [sym__alphanum] = ACTIONS(1),
    [sym_digit] = ACTIONS(1),
    [sym_hexdigit] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_e] = ACTIONS(1),
    [anon_sym_E] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [anon_sym_SLASH] = ACTIONS(1),
  },
  [1] = {
    [sym_hurl_file] = STATE(523),
    [sym_entry] = STATE(99),
    [sym__comment_or_new_line] = STATE(105),
    [sym_request] = STATE(94),
    [sym_method] = STATE(160),
    [aux_sym_hurl_file_repeat1] = STATE(99),
    [aux_sym_hurl_file_repeat2] = STATE(105),
    [aux_sym__comment_or_new_line_repeat1] = STATE(60),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_LF] = ACTIONS(7),
    [anon_sym_GET] = ACTIONS(9),
    [anon_sym_HEAD] = ACTIONS(9),
    [anon_sym_POST] = ACTIONS(9),
    [anon_sym_PUT] = ACTIONS(9),
    [anon_sym_DELETE] = ACTIONS(9),
    [anon_sym_CONNECT] = ACTIONS(9),
    [anon_sym_OPTIONS] = ACTIONS(9),
    [anon_sym_TRACE] = ACTIONS(9),
    [anon_sym_PATCH] = ACTIONS(9),
    [anon_sym_LINK] = ACTIONS(9),
    [anon_sym_UNLINK] = ACTIONS(9),
    [anon_sym_PURGE] = ACTIONS(9),
    [anon_sym_LOCK] = ACTIONS(9),
    [anon_sym_UNLOCK] = ACTIONS(9),
    [anon_sym_PROPFIND] = ACTIONS(9),
    [anon_sym_VIEW] = ACTIONS(9),
    [aux_sym_method_token1] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
  },
  [2] = {
    [sym__comment_or_new_line] = STATE(52),
    [sym_header] = STATE(4),
    [sym_body] = STATE(100),
    [sym_request_section] = STATE(6),
    [sym_basic_auth_section] = STATE(61),
    [sym_query_string_params_section] = STATE(61),
    [sym_form_params_section] = STATE(61),
    [sym_multipart_form_data_section] = STATE(61),
    [sym_cookies_section] = STATE(61),
    [sym_options_section] = STATE(61),
    [sym_key_value] = STATE(399),
    [sym_bytes] = STATE(397),
    [sym_xml] = STATE(508),
    [sym_xml_prolog_tag] = STATE(261),
    [sym_xml_tag] = STATE(510),
    [sym_xml_open_tag] = STATE(127),
    [sym_oneline_base64] = STATE(508),
    [sym_oneline_file] = STATE(508),
    [sym_oneline_hex] = STATE(508),
    [sym_key_string] = STATE(511),
    [sym_key_string_content] = STATE(189),
    [sym_key_string_escaped_char] = STATE(224),
    [sym_oneline_string] = STATE(508),
    [sym_multiline_string] = STATE(508),
    [sym_json_value] = STATE(508),
    [sym_json_object] = STATE(546),
    [sym_json_array] = STATE(546),
    [sym_json_string] = STATE(546),
    [sym_json_number] = STATE(546),
    [sym_template] = STATE(270),
    [sym_boolean] = STATE(546),
    [sym_integer] = STATE(256),
    [aux_sym_hurl_file_repeat2] = STATE(52),
    [aux_sym__comment_or_new_line_repeat1] = STATE(53),
    [aux_sym_request_repeat1] = STATE(4),
    [aux_sym_request_repeat2] = STATE(6),
    [aux_sym_xml_repeat1] = STATE(261),
    [aux_sym_key_string_repeat1] = STATE(189),
    [aux_sym_key_string_content_repeat1] = STATE(224),
    [aux_sym_integer_repeat1] = STATE(112),
    [ts_builtin_sym_end] = ACTIONS(13),
    [anon_sym_LF] = ACTIONS(15),
    [anon_sym_GET] = ACTIONS(17),
    [anon_sym_HEAD] = ACTIONS(17),
    [anon_sym_POST] = ACTIONS(17),
    [anon_sym_PUT] = ACTIONS(17),
    [anon_sym_DELETE] = ACTIONS(17),
    [anon_sym_CONNECT] = ACTIONS(17),
    [anon_sym_OPTIONS] = ACTIONS(17),
    [anon_sym_TRACE] = ACTIONS(17),
    [anon_sym_PATCH] = ACTIONS(17),
    [anon_sym_LINK] = ACTIONS(17),
    [anon_sym_UNLINK] = ACTIONS(17),
    [anon_sym_PURGE] = ACTIONS(17),
    [anon_sym_LOCK] = ACTIONS(17),
    [anon_sym_UNLOCK] = ACTIONS(17),
    [anon_sym_PROPFIND] = ACTIONS(17),
    [anon_sym_VIEW] = ACTIONS(17),
    [aux_sym_method_token1] = ACTIONS(17),
    [anon_sym_HTTP_SLASH1_DOT0] = ACTIONS(17),
    [anon_sym_HTTP_SLASH1_DOT1] = ACTIONS(17),
    [anon_sym_HTTP_SLASH2] = ACTIONS(17),
    [anon_sym_HTTP_SLASH3] = ACTIONS(17),
    [anon_sym_HTTP_SLASH_STAR] = ACTIONS(17),
    [anon_sym_HTTP] = ACTIONS(17),
    [anon_sym_LBRACKBasicAuth_RBRACK] = ACTIONS(19),
    [anon_sym_LBRACKQuery_RBRACK] = ACTIONS(21),
    [anon_sym_LBRACKQueryStringParams_RBRACK] = ACTIONS(21),
    [anon_sym_LBRACKForm_RBRACK] = ACTIONS(23),
    [anon_sym_LBRACKFormParams_RBRACK] = ACTIONS(23),
    [anon_sym_LBRACKMultipart_RBRACK] = ACTIONS(25),
    [anon_sym_LBRACKMultipartFormData_RBRACK] = ACTIONS(25),
    [anon_sym_LBRACKCookies_RBRACK] = ACTIONS(27),
    [anon_sym_LBRACKOptions_RBRACK] = ACTIONS(29),
    [anon_sym_null] = ACTIONS(31),
    [anon_sym_file_COMMA] = ACTIONS(33),
    [anon_sym_LT] = ACTIONS(35),
    [anon_sym_LT_QMARK] = ACTIONS(37),
    [anon_sym_base64_COMMA] = ACTIONS(39),
    [anon_sym_hex_COMMA] = ACTIONS(41),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [sym_key_string_text] = ACTIONS(45),
    [anon_sym_BSLASH2] = ACTIONS(47),
    [aux_sym_oneline_string_token1] = ACTIONS(49),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(51),
    [anon_sym_LBRACE] = ACTIONS(53),
    [anon_sym_LBRACK] = ACTIONS(55),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(57),
    [anon_sym_true] = ACTIONS(59),
    [anon_sym_false] = ACTIONS(59),
    [sym_digit] = ACTIONS(61),
    [sym_comment] = ACTIONS(63),
  },
  [3] = {
    [sym__comment_or_new_line] = STATE(52),
    [sym_header] = STATE(5),
    [sym_body] = STATE(101),
    [sym_request_section] = STATE(7),
    [sym_basic_auth_section] = STATE(61),
    [sym_query_string_params_section] = STATE(61),
    [sym_form_params_section] = STATE(61),
    [sym_multipart_form_data_section] = STATE(61),
    [sym_cookies_section] = STATE(61),
    [sym_options_section] = STATE(61),
    [sym_key_value] = STATE(399),
    [sym_bytes] = STATE(397),
    [sym_xml] = STATE(508),
    [sym_xml_prolog_tag] = STATE(261),
    [sym_xml_tag] = STATE(510),
    [sym_xml_open_tag] = STATE(127),
    [sym_oneline_base64] = STATE(508),
    [sym_oneline_file] = STATE(508),
    [sym_oneline_hex] = STATE(508),
    [sym_key_string] = STATE(511),
    [sym_key_string_content] = STATE(189),
    [sym_key_string_escaped_char] = STATE(224),
    [sym_oneline_string] = STATE(508),
    [sym_multiline_string] = STATE(508),
    [sym_json_value] = STATE(508),
    [sym_json_object] = STATE(546),
    [sym_json_array] = STATE(546),
    [sym_json_string] = STATE(546),
    [sym_json_number] = STATE(546),
    [sym_template] = STATE(270),
    [sym_boolean] = STATE(546),
    [sym_integer] = STATE(256),
    [aux_sym_hurl_file_repeat2] = STATE(52),
    [aux_sym__comment_or_new_line_repeat1] = STATE(53),
    [aux_sym_request_repeat1] = STATE(5),
    [aux_sym_request_repeat2] = STATE(7),
    [aux_sym_xml_repeat1] = STATE(261),
    [aux_sym_key_string_repeat1] = STATE(189),
    [aux_sym_key_string_content_repeat1] = STATE(224),
    [aux_sym_integer_repeat1] = STATE(112),
    [ts_builtin_sym_end] = ACTIONS(65),
    [anon_sym_LF] = ACTIONS(15),
    [anon_sym_GET] = ACTIONS(67),
    [anon_sym_HEAD] = ACTIONS(67),
    [anon_sym_POST] = ACTIONS(67),
    [anon_sym_PUT] = ACTIONS(67),
    [anon_sym_DELETE] = ACTIONS(67),
    [anon_sym_CONNECT] = ACTIONS(67),
    [anon_sym_OPTIONS] = ACTIONS(67),
    [anon_sym_TRACE] = ACTIONS(67),
    [anon_sym_PATCH] = ACTIONS(67),
    [anon_sym_LINK] = ACTIONS(67),
    [anon_sym_UNLINK] = ACTIONS(67),
    [anon_sym_PURGE] = ACTIONS(67),
    [anon_sym_LOCK] = ACTIONS(67),
    [anon_sym_UNLOCK] = ACTIONS(67),
    [anon_sym_PROPFIND] = ACTIONS(67),
    [anon_sym_VIEW] = ACTIONS(67),
    [aux_sym_method_token1] = ACTIONS(67),
    [anon_sym_HTTP_SLASH1_DOT0] = ACTIONS(67),
    [anon_sym_HTTP_SLASH1_DOT1] = ACTIONS(67),
    [anon_sym_HTTP_SLASH2] = ACTIONS(67),
    [anon_sym_HTTP_SLASH3] = ACTIONS(67),
    [anon_sym_HTTP_SLASH_STAR] = ACTIONS(67),
    [anon_sym_HTTP] = ACTIONS(67),
    [anon_sym_LBRACKBasicAuth_RBRACK] = ACTIONS(19),
    [anon_sym_LBRACKQuery_RBRACK] = ACTIONS(21),
    [anon_sym_LBRACKQueryStringParams_RBRACK] = ACTIONS(21),
    [anon_sym_LBRACKForm_RBRACK] = ACTIONS(23),
    [anon_sym_LBRACKFormParams_RBRACK] = ACTIONS(23),
    [anon_sym_LBRACKMultipart_RBRACK] = ACTIONS(25),
    [anon_sym_LBRACKMultipartFormData_RBRACK] = ACTIONS(25),
    [anon_sym_LBRACKCookies_RBRACK] = ACTIONS(27),
    [anon_sym_LBRACKOptions_RBRACK] = ACTIONS(29),
    [anon_sym_null] = ACTIONS(31),
    [anon_sym_file_COMMA] = ACTIONS(33),
    [anon_sym_LT] = ACTIONS(35),
    [anon_sym_LT_QMARK] = ACTIONS(37),
    [anon_sym_base64_COMMA] = ACTIONS(39),
    [anon_sym_hex_COMMA] = ACTIONS(41),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [sym_key_string_text] = ACTIONS(45),
    [anon_sym_BSLASH2] = ACTIONS(47),
    [aux_sym_oneline_string_token1] = ACTIONS(49),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(51),
    [anon_sym_LBRACE] = ACTIONS(53),
    [anon_sym_LBRACK] = ACTIONS(55),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(57),
    [anon_sym_true] = ACTIONS(59),
    [anon_sym_false] = ACTIONS(59),
    [sym_digit] = ACTIONS(61),
    [sym_comment] = ACTIONS(63),
  },
  [4] = {
    [sym_header] = STATE(35),
    [sym_body] = STATE(102),
    [sym_request_section] = STATE(8),
    [sym_basic_auth_section] = STATE(61),
    [sym_query_string_params_section] = STATE(61),
    [sym_form_params_section] = STATE(61),
    [sym_multipart_form_data_section] = STATE(61),
    [sym_cookies_section] = STATE(61),
    [sym_options_section] = STATE(61),
    [sym_key_value] = STATE(399),
    [sym_bytes] = STATE(397),
    [sym_xml] = STATE(508),
    [sym_xml_prolog_tag] = STATE(261),
    [sym_xml_tag] = STATE(510),
    [sym_xml_open_tag] = STATE(127),
    [sym_oneline_base64] = STATE(508),
    [sym_oneline_file] = STATE(508),
    [sym_oneline_hex] = STATE(508),
    [sym_key_string] = STATE(511),
    [sym_key_string_content] = STATE(189),
    [sym_key_string_escaped_char] = STATE(224),
    [sym_oneline_string] = STATE(508),
    [sym_multiline_string] = STATE(508),
    [sym_json_value] = STATE(508),
    [sym_json_object] = STATE(546),
    [sym_json_array] = STATE(546),
    [sym_json_string] = STATE(546),
    [sym_json_number] = STATE(546),
    [sym_template] = STATE(270),
    [sym_boolean] = STATE(546),
    [sym_integer] = STATE(256),
    [aux_sym_request_repeat1] = STATE(35),
    [aux_sym_request_repeat2] = STATE(8),
    [aux_sym_xml_repeat1] = STATE(261),
    [aux_sym_key_string_repeat1] = STATE(189),
    [aux_sym_key_string_content_repeat1] = STATE(224),
    [aux_sym_integer_repeat1] = STATE(112),
    [ts_builtin_sym_end] = ACTIONS(69),
    [anon_sym_LF] = ACTIONS(69),
    [anon_sym_GET] = ACTIONS(71),
    [anon_sym_HEAD] = ACTIONS(71),
    [anon_sym_POST] = ACTIONS(71),
    [anon_sym_PUT] = ACTIONS(71),
    [anon_sym_DELETE] = ACTIONS(71),
    [anon_sym_CONNECT] = ACTIONS(71),
    [anon_sym_OPTIONS] = ACTIONS(71),
    [anon_sym_TRACE] = ACTIONS(71),
    [anon_sym_PATCH] = ACTIONS(71),
    [anon_sym_LINK] = ACTIONS(71),
    [anon_sym_UNLINK] = ACTIONS(71),
    [anon_sym_PURGE] = ACTIONS(71),
    [anon_sym_LOCK] = ACTIONS(71),
    [anon_sym_UNLOCK] = ACTIONS(71),
    [anon_sym_PROPFIND] = ACTIONS(71),
    [anon_sym_VIEW] = ACTIONS(71),
    [aux_sym_method_token1] = ACTIONS(71),
    [anon_sym_HTTP_SLASH1_DOT0] = ACTIONS(71),
    [anon_sym_HTTP_SLASH1_DOT1] = ACTIONS(71),
    [anon_sym_HTTP_SLASH2] = ACTIONS(71),
    [anon_sym_HTTP_SLASH3] = ACTIONS(71),
    [anon_sym_HTTP_SLASH_STAR] = ACTIONS(71),
    [anon_sym_HTTP] = ACTIONS(71),
    [anon_sym_LBRACKBasicAuth_RBRACK] = ACTIONS(19),
    [anon_sym_LBRACKQuery_RBRACK] = ACTIONS(21),
    [anon_sym_LBRACKQueryStringParams_RBRACK] = ACTIONS(21),
    [anon_sym_LBRACKForm_RBRACK] = ACTIONS(23),
    [anon_sym_LBRACKFormParams_RBRACK] = ACTIONS(23),
    [anon_sym_LBRACKMultipart_RBRACK] = ACTIONS(25),
    [anon_sym_LBRACKMultipartFormData_RBRACK] = ACTIONS(25),
    [anon_sym_LBRACKCookies_RBRACK] = ACTIONS(27),
    [anon_sym_LBRACKOptions_RBRACK] = ACTIONS(29),
    [anon_sym_null] = ACTIONS(31),
    [anon_sym_file_COMMA] = ACTIONS(33),
    [anon_sym_LT] = ACTIONS(35),
    [anon_sym_LT_QMARK] = ACTIONS(37),
    [anon_sym_base64_COMMA] = ACTIONS(39),
    [anon_sym_hex_COMMA] = ACTIONS(41),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [sym_key_string_text] = ACTIONS(45),
    [anon_sym_BSLASH2] = ACTIONS(47),
    [aux_sym_oneline_string_token1] = ACTIONS(49),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(51),
    [anon_sym_LBRACE] = ACTIONS(53),
    [anon_sym_LBRACK] = ACTIONS(55),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(57),
    [anon_sym_true] = ACTIONS(59),
    [anon_sym_false] = ACTIONS(59),
    [sym_digit] = ACTIONS(61),
    [sym_comment] = ACTIONS(71),
  },
  [5] = {
    [sym_header] = STATE(35),
    [sym_body] = STATE(100),
    [sym_request_section] = STATE(6),
    [sym_basic_auth_section] = STATE(61),
    [sym_query_string_params_section] = STATE(61),
    [sym_form_params_section] = STATE(61),
    [sym_multipart_form_data_section] = STATE(61),
    [sym_cookies_section] = STATE(61),
    [sym_options_section] = STATE(61),
    [sym_key_value] = STATE(399),
    [sym_bytes] = STATE(397),
    [sym_xml] = STATE(508),
    [sym_xml_prolog_tag] = STATE(261),
    [sym_xml_tag] = STATE(510),
    [sym_xml_open_tag] = STATE(127),
    [sym_oneline_base64] = STATE(508),
    [sym_oneline_file] = STATE(508),
    [sym_oneline_hex] = STATE(508),
    [sym_key_string] = STATE(511),
    [sym_key_string_content] = STATE(189),
    [sym_key_string_escaped_char] = STATE(224),
    [sym_oneline_string] = STATE(508),
    [sym_multiline_string] = STATE(508),
    [sym_json_value] = STATE(508),
    [sym_json_object] = STATE(546),
    [sym_json_array] = STATE(546),
    [sym_json_string] = STATE(546),
    [sym_json_number] = STATE(546),
    [sym_template] = STATE(270),
    [sym_boolean] = STATE(546),
    [sym_integer] = STATE(256),
    [aux_sym_request_repeat1] = STATE(35),
    [aux_sym_request_repeat2] = STATE(6),
    [aux_sym_xml_repeat1] = STATE(261),
    [aux_sym_key_string_repeat1] = STATE(189),
    [aux_sym_key_string_content_repeat1] = STATE(224),
    [aux_sym_integer_repeat1] = STATE(112),
    [ts_builtin_sym_end] = ACTIONS(13),
    [anon_sym_LF] = ACTIONS(13),
    [anon_sym_GET] = ACTIONS(17),
    [anon_sym_HEAD] = ACTIONS(17),
    [anon_sym_POST] = ACTIONS(17),
    [anon_sym_PUT] = ACTIONS(17),
    [anon_sym_DELETE] = ACTIONS(17),
    [anon_sym_CONNECT] = ACTIONS(17),
    [anon_sym_OPTIONS] = ACTIONS(17),
    [anon_sym_TRACE] = ACTIONS(17),
    [anon_sym_PATCH] = ACTIONS(17),
    [anon_sym_LINK] = ACTIONS(17),
    [anon_sym_UNLINK] = ACTIONS(17),
    [anon_sym_PURGE] = ACTIONS(17),
    [anon_sym_LOCK] = ACTIONS(17),
    [anon_sym_UNLOCK] = ACTIONS(17),
    [anon_sym_PROPFIND] = ACTIONS(17),
    [anon_sym_VIEW] = ACTIONS(17),
    [aux_sym_method_token1] = ACTIONS(17),
    [anon_sym_HTTP_SLASH1_DOT0] = ACTIONS(17),
    [anon_sym_HTTP_SLASH1_DOT1] = ACTIONS(17),
    [anon_sym_HTTP_SLASH2] = ACTIONS(17),
    [anon_sym_HTTP_SLASH3] = ACTIONS(17),
    [anon_sym_HTTP_SLASH_STAR] = ACTIONS(17),
    [anon_sym_HTTP] = ACTIONS(17),
    [anon_sym_LBRACKBasicAuth_RBRACK] = ACTIONS(19),
    [anon_sym_LBRACKQuery_RBRACK] = ACTIONS(21),
    [anon_sym_LBRACKQueryStringParams_RBRACK] = ACTIONS(21),
    [anon_sym_LBRACKForm_RBRACK] = ACTIONS(23),
    [anon_sym_LBRACKFormParams_RBRACK] = ACTIONS(23),
    [anon_sym_LBRACKMultipart_RBRACK] = ACTIONS(25),
    [anon_sym_LBRACKMultipartFormData_RBRACK] = ACTIONS(25),
    [anon_sym_LBRACKCookies_RBRACK] = ACTIONS(27),
    [anon_sym_LBRACKOptions_RBRACK] = ACTIONS(29),
    [anon_sym_null] = ACTIONS(31),
    [anon_sym_file_COMMA] = ACTIONS(33),
    [anon_sym_LT] = ACTIONS(35),
    [anon_sym_LT_QMARK] = ACTIONS(37),
    [anon_sym_base64_COMMA] = ACTIONS(39),
    [anon_sym_hex_COMMA] = ACTIONS(41),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [sym_key_string_text] = ACTIONS(45),
    [anon_sym_BSLASH2] = ACTIONS(47),
    [aux_sym_oneline_string_token1] = ACTIONS(49),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(51),
    [anon_sym_LBRACE] = ACTIONS(53),
    [anon_sym_LBRACK] = ACTIONS(55),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(57),
    [anon_sym_true] = ACTIONS(59),
    [anon_sym_false] = ACTIONS(59),
    [sym_digit] = ACTIONS(61),
    [sym_comment] = ACTIONS(17),
  },
  [6] = {
    [sym_body] = STATE(102),
    [sym_request_section] = STATE(51),
    [sym_basic_auth_section] = STATE(61),
    [sym_query_string_params_section] = STATE(61),
    [sym_form_params_section] = STATE(61),
    [sym_multipart_form_data_section] = STATE(61),
    [sym_cookies_section] = STATE(61),
    [sym_options_section] = STATE(61),
    [sym_bytes] = STATE(397),
    [sym_xml] = STATE(508),
    [sym_xml_prolog_tag] = STATE(261),
    [sym_xml_tag] = STATE(510),
    [sym_xml_open_tag] = STATE(127),
    [sym_oneline_base64] = STATE(508),
    [sym_oneline_file] = STATE(508),
    [sym_oneline_hex] = STATE(508),
    [sym_oneline_string] = STATE(508),
    [sym_multiline_string] = STATE(508),
    [sym_json_value] = STATE(508),
    [sym_json_object] = STATE(546),
    [sym_json_array] = STATE(546),
    [sym_json_string] = STATE(546),
    [sym_json_number] = STATE(546),
    [sym_template] = STATE(546),
    [sym_boolean] = STATE(546),
    [sym_integer] = STATE(256),
    [aux_sym_request_repeat2] = STATE(51),
    [aux_sym_xml_repeat1] = STATE(261),
    [aux_sym_integer_repeat1] = STATE(112),
    [ts_builtin_sym_end] = ACTIONS(69),
    [anon_sym_LF] = ACTIONS(69),
    [anon_sym_GET] = ACTIONS(71),
    [anon_sym_HEAD] = ACTIONS(71),
    [anon_sym_POST] = ACTIONS(71),
    [anon_sym_PUT] = ACTIONS(71),
    [anon_sym_DELETE] = ACTIONS(71),
    [anon_sym_CONNECT] = ACTIONS(71),
    [anon_sym_OPTIONS] = ACTIONS(71),
    [anon_sym_TRACE] = ACTIONS(71),
    [anon_sym_PATCH] = ACTIONS(71),
    [anon_sym_LINK] = ACTIONS(71),
    [anon_sym_UNLINK] = ACTIONS(71),
    [anon_sym_PURGE] = ACTIONS(71),
    [anon_sym_LOCK] = ACTIONS(71),
    [anon_sym_UNLOCK] = ACTIONS(71),
    [anon_sym_PROPFIND] = ACTIONS(71),
    [anon_sym_VIEW] = ACTIONS(71),
    [aux_sym_method_token1] = ACTIONS(71),
    [anon_sym_HTTP_SLASH1_DOT0] = ACTIONS(71),
    [anon_sym_HTTP_SLASH1_DOT1] = ACTIONS(71),
    [anon_sym_HTTP_SLASH2] = ACTIONS(71),
    [anon_sym_HTTP_SLASH3] = ACTIONS(71),
    [anon_sym_HTTP_SLASH_STAR] = ACTIONS(71),
    [anon_sym_HTTP] = ACTIONS(71),
    [anon_sym_LBRACKBasicAuth_RBRACK] = ACTIONS(19),
    [anon_sym_LBRACKQuery_RBRACK] = ACTIONS(21),
    [anon_sym_LBRACKQueryStringParams_RBRACK] = ACTIONS(21),
    [anon_sym_LBRACKForm_RBRACK] = ACTIONS(23),
    [anon_sym_LBRACKFormParams_RBRACK] = ACTIONS(23),
    [anon_sym_LBRACKMultipart_RBRACK] = ACTIONS(25),
    [anon_sym_LBRACKMultipartFormData_RBRACK] = ACTIONS(25),
    [anon_sym_LBRACKCookies_RBRACK] = ACTIONS(27),
    [anon_sym_LBRACKOptions_RBRACK] = ACTIONS(29),
    [anon_sym_null] = ACTIONS(31),
    [anon_sym_file_COMMA] = ACTIONS(33),
    [anon_sym_LT] = ACTIONS(35),
    [anon_sym_LT_QMARK] = ACTIONS(37),
    [anon_sym_base64_COMMA] = ACTIONS(39),
    [anon_sym_hex_COMMA] = ACTIONS(41),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [aux_sym_oneline_string_token1] = ACTIONS(49),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(51),
    [anon_sym_LBRACE] = ACTIONS(53),
    [anon_sym_LBRACK] = ACTIONS(55),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(57),
    [anon_sym_true] = ACTIONS(59),
    [anon_sym_false] = ACTIONS(59),
    [sym_digit] = ACTIONS(61),
    [sym_comment] = ACTIONS(71),
  },
  [7] = {
    [sym_body] = STATE(100),
    [sym_request_section] = STATE(51),
    [sym_basic_auth_section] = STATE(61),
    [sym_query_string_params_section] = STATE(61),
    [sym_form_params_section] = STATE(61),
    [sym_multipart_form_data_section] = STATE(61),
    [sym_cookies_section] = STATE(61),
    [sym_options_section] = STATE(61),
    [sym_bytes] = STATE(397),
    [sym_xml] = STATE(508),
    [sym_xml_prolog_tag] = STATE(261),
    [sym_xml_tag] = STATE(510),
    [sym_xml_open_tag] = STATE(127),
    [sym_oneline_base64] = STATE(508),
    [sym_oneline_file] = STATE(508),
    [sym_oneline_hex] = STATE(508),
    [sym_oneline_string] = STATE(508),
    [sym_multiline_string] = STATE(508),
    [sym_json_value] = STATE(508),
    [sym_json_object] = STATE(546),
    [sym_json_array] = STATE(546),
    [sym_json_string] = STATE(546),
    [sym_json_number] = STATE(546),
    [sym_template] = STATE(546),
    [sym_boolean] = STATE(546),
    [sym_integer] = STATE(256),
    [aux_sym_request_repeat2] = STATE(51),
    [aux_sym_xml_repeat1] = STATE(261),
    [aux_sym_integer_repeat1] = STATE(112),
    [ts_builtin_sym_end] = ACTIONS(13),
    [anon_sym_LF] = ACTIONS(13),
    [anon_sym_GET] = ACTIONS(17),
    [anon_sym_HEAD] = ACTIONS(17),
    [anon_sym_POST] = ACTIONS(17),
    [anon_sym_PUT] = ACTIONS(17),
    [anon_sym_DELETE] = ACTIONS(17),
    [anon_sym_CONNECT] = ACTIONS(17),
    [anon_sym_OPTIONS] = ACTIONS(17),
    [anon_sym_TRACE] = ACTIONS(17),
    [anon_sym_PATCH] = ACTIONS(17),
    [anon_sym_LINK] = ACTIONS(17),
    [anon_sym_UNLINK] = ACTIONS(17),
    [anon_sym_PURGE] = ACTIONS(17),
    [anon_sym_LOCK] = ACTIONS(17),
    [anon_sym_UNLOCK] = ACTIONS(17),
    [anon_sym_PROPFIND] = ACTIONS(17),
    [anon_sym_VIEW] = ACTIONS(17),
    [aux_sym_method_token1] = ACTIONS(17),
    [anon_sym_HTTP_SLASH1_DOT0] = ACTIONS(17),
    [anon_sym_HTTP_SLASH1_DOT1] = ACTIONS(17),
    [anon_sym_HTTP_SLASH2] = ACTIONS(17),
    [anon_sym_HTTP_SLASH3] = ACTIONS(17),
    [anon_sym_HTTP_SLASH_STAR] = ACTIONS(17),
    [anon_sym_HTTP] = ACTIONS(17),
    [anon_sym_LBRACKBasicAuth_RBRACK] = ACTIONS(19),
    [anon_sym_LBRACKQuery_RBRACK] = ACTIONS(21),
    [anon_sym_LBRACKQueryStringParams_RBRACK] = ACTIONS(21),
    [anon_sym_LBRACKForm_RBRACK] = ACTIONS(23),
    [anon_sym_LBRACKFormParams_RBRACK] = ACTIONS(23),
    [anon_sym_LBRACKMultipart_RBRACK] = ACTIONS(25),
    [anon_sym_LBRACKMultipartFormData_RBRACK] = ACTIONS(25),
    [anon_sym_LBRACKCookies_RBRACK] = ACTIONS(27),
    [anon_sym_LBRACKOptions_RBRACK] = ACTIONS(29),
    [anon_sym_null] = ACTIONS(31),
    [anon_sym_file_COMMA] = ACTIONS(33),
    [anon_sym_LT] = ACTIONS(35),
    [anon_sym_LT_QMARK] = ACTIONS(37),
    [anon_sym_base64_COMMA] = ACTIONS(39),
    [anon_sym_hex_COMMA] = ACTIONS(41),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [aux_sym_oneline_string_token1] = ACTIONS(49),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(51),
    [anon_sym_LBRACE] = ACTIONS(53),
    [anon_sym_LBRACK] = ACTIONS(55),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(57),
    [anon_sym_true] = ACTIONS(59),
    [anon_sym_false] = ACTIONS(59),
    [sym_digit] = ACTIONS(61),
    [sym_comment] = ACTIONS(17),
  },
  [8] = {
    [sym_body] = STATE(104),
    [sym_request_section] = STATE(51),
    [sym_basic_auth_section] = STATE(61),
    [sym_query_string_params_section] = STATE(61),
    [sym_form_params_section] = STATE(61),
    [sym_multipart_form_data_section] = STATE(61),
    [sym_cookies_section] = STATE(61),
    [sym_options_section] = STATE(61),
    [sym_bytes] = STATE(397),
    [sym_xml] = STATE(508),
    [sym_xml_prolog_tag] = STATE(261),
    [sym_xml_tag] = STATE(510),
    [sym_xml_open_tag] = STATE(127),
    [sym_oneline_base64] = STATE(508),
    [sym_oneline_file] = STATE(508),
    [sym_oneline_hex] = STATE(508),
    [sym_oneline_string] = STATE(508),
    [sym_multiline_string] = STATE(508),
    [sym_json_value] = STATE(508),
    [sym_json_object] = STATE(546),
    [sym_json_array] = STATE(546),
    [sym_json_string] = STATE(546),
    [sym_json_number] = STATE(546),
    [sym_template] = STATE(546),
    [sym_boolean] = STATE(546),
    [sym_integer] = STATE(256),
    [aux_sym_request_repeat2] = STATE(51),
    [aux_sym_xml_repeat1] = STATE(261),
    [aux_sym_integer_repeat1] = STATE(112),
    [ts_builtin_sym_end] = ACTIONS(73),
    [anon_sym_LF] = ACTIONS(73),
    [anon_sym_GET] = ACTIONS(75),
    [anon_sym_HEAD] = ACTIONS(75),
    [anon_sym_POST] = ACTIONS(75),
    [anon_sym_PUT] = ACTIONS(75),
    [anon_sym_DELETE] = ACTIONS(75),
    [anon_sym_CONNECT] = ACTIONS(75),
    [anon_sym_OPTIONS] = ACTIONS(75),
    [anon_sym_TRACE] = ACTIONS(75),
    [anon_sym_PATCH] = ACTIONS(75),
    [anon_sym_LINK] = ACTIONS(75),
    [anon_sym_UNLINK] = ACTIONS(75),
    [anon_sym_PURGE] = ACTIONS(75),
    [anon_sym_LOCK] = ACTIONS(75),
    [anon_sym_UNLOCK] = ACTIONS(75),
    [anon_sym_PROPFIND] = ACTIONS(75),
    [anon_sym_VIEW] = ACTIONS(75),
    [aux_sym_method_token1] = ACTIONS(75),
    [anon_sym_HTTP_SLASH1_DOT0] = ACTIONS(75),
    [anon_sym_HTTP_SLASH1_DOT1] = ACTIONS(75),
    [anon_sym_HTTP_SLASH2] = ACTIONS(75),
    [anon_sym_HTTP_SLASH3] = ACTIONS(75),
    [anon_sym_HTTP_SLASH_STAR] = ACTIONS(75),
    [anon_sym_HTTP] = ACTIONS(75),
    [anon_sym_LBRACKBasicAuth_RBRACK] = ACTIONS(19),
    [anon_sym_LBRACKQuery_RBRACK] = ACTIONS(21),
    [anon_sym_LBRACKQueryStringParams_RBRACK] = ACTIONS(21),
    [anon_sym_LBRACKForm_RBRACK] = ACTIONS(23),
    [anon_sym_LBRACKFormParams_RBRACK] = ACTIONS(23),
    [anon_sym_LBRACKMultipart_RBRACK] = ACTIONS(25),
    [anon_sym_LBRACKMultipartFormData_RBRACK] = ACTIONS(25),
    [anon_sym_LBRACKCookies_RBRACK] = ACTIONS(27),
    [anon_sym_LBRACKOptions_RBRACK] = ACTIONS(29),
    [anon_sym_null] = ACTIONS(31),
    [anon_sym_file_COMMA] = ACTIONS(33),
    [anon_sym_LT] = ACTIONS(35),
    [anon_sym_LT_QMARK] = ACTIONS(37),
    [anon_sym_base64_COMMA] = ACTIONS(39),
    [anon_sym_hex_COMMA] = ACTIONS(41),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [aux_sym_oneline_string_token1] = ACTIONS(49),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(51),
    [anon_sym_LBRACE] = ACTIONS(53),
    [anon_sym_LBRACK] = ACTIONS(55),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(57),
    [anon_sym_true] = ACTIONS(59),
    [anon_sym_false] = ACTIONS(59),
    [sym_digit] = ACTIONS(61),
    [sym_comment] = ACTIONS(75),
  },
  [9] = {
    [sym_option] = STATE(10),
    [sym_ca_certificate_option] = STATE(18),
    [sym_compressed_option] = STATE(18),
    [sym_follow_redirect_option] = STATE(18),
    [sym_insecure_option] = STATE(18),
    [sym_max_redirs_option] = STATE(18),
    [sym_path_as_is_option] = STATE(18),
    [sym_proxy_option] = STATE(18),
    [sym_retry_option] = STATE(18),
    [sym_retry_interval_option] = STATE(18),
    [sym_retry_max_count_option] = STATE(18),
    [sym_variable_option] = STATE(18),
    [sym_verbose_option] = STATE(18),
    [sym_very_verbose_option] = STATE(18),
    [aux_sym_options_section_repeat1] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(77),
    [anon_sym_LF] = ACTIONS(77),
    [anon_sym_GET] = ACTIONS(79),
    [anon_sym_HEAD] = ACTIONS(79),
    [anon_sym_POST] = ACTIONS(79),
    [anon_sym_PUT] = ACTIONS(79),
    [anon_sym_DELETE] = ACTIONS(79),
    [anon_sym_CONNECT] = ACTIONS(79),
    [anon_sym_OPTIONS] = ACTIONS(79),
    [anon_sym_TRACE] = ACTIONS(79),
    [anon_sym_PATCH] = ACTIONS(79),
    [anon_sym_LINK] = ACTIONS(79),
    [anon_sym_UNLINK] = ACTIONS(79),
    [anon_sym_PURGE] = ACTIONS(79),
    [anon_sym_LOCK] = ACTIONS(79),
    [anon_sym_UNLOCK] = ACTIONS(79),
    [anon_sym_PROPFIND] = ACTIONS(79),
    [anon_sym_VIEW] = ACTIONS(79),
    [aux_sym_method_token1] = ACTIONS(79),
    [anon_sym_HTTP_SLASH1_DOT0] = ACTIONS(79),
    [anon_sym_HTTP_SLASH1_DOT1] = ACTIONS(79),
    [anon_sym_HTTP_SLASH2] = ACTIONS(79),
    [anon_sym_HTTP_SLASH3] = ACTIONS(79),
    [anon_sym_HTTP_SLASH_STAR] = ACTIONS(79),
    [anon_sym_HTTP] = ACTIONS(79),
    [anon_sym_LBRACKBasicAuth_RBRACK] = ACTIONS(79),
    [anon_sym_LBRACKQuery_RBRACK] = ACTIONS(79),
    [anon_sym_LBRACKQueryStringParams_RBRACK] = ACTIONS(79),
    [anon_sym_LBRACKForm_RBRACK] = ACTIONS(79),
    [anon_sym_LBRACKFormParams_RBRACK] = ACTIONS(79),
    [anon_sym_LBRACKMultipart_RBRACK] = ACTIONS(79),
    [anon_sym_LBRACKMultipartFormData_RBRACK] = ACTIONS(79),
    [anon_sym_LBRACKCookies_RBRACK] = ACTIONS(79),
    [anon_sym_LBRACKOptions_RBRACK] = ACTIONS(79),
    [anon_sym_null] = ACTIONS(79),
    [anon_sym_file_COMMA] = ACTIONS(79),
    [anon_sym_cacert] = ACTIONS(81),
    [anon_sym_compressed] = ACTIONS(83),
    [anon_sym_location] = ACTIONS(85),
    [anon_sym_insecure] = ACTIONS(87),
    [anon_sym_max_DASHredirs] = ACTIONS(89),
    [anon_sym_path_DASHas_DASHis] = ACTIONS(91),
    [anon_sym_proxy] = ACTIONS(93),
    [anon_sym_retry] = ACTIONS(95),
    [anon_sym_retry_DASHinterval] = ACTIONS(97),
    [anon_sym_retry_DASHmax_DASHcount] = ACTIONS(99),
    [anon_sym_variable] = ACTIONS(101),
    [anon_sym_verbose] = ACTIONS(103),
    [anon_sym_very_DASHverbose] = ACTIONS(105),
    [anon_sym_LT] = ACTIONS(79),
    [anon_sym_LT_QMARK] = ACTIONS(79),
    [anon_sym_base64_COMMA] = ACTIONS(79),
    [anon_sym_hex_COMMA] = ACTIONS(79),
    [anon_sym_DQUOTE] = ACTIONS(79),
    [aux_sym_oneline_string_token1] = ACTIONS(79),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(79),
    [anon_sym_LBRACE] = ACTIONS(79),
    [anon_sym_LBRACK] = ACTIONS(79),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(77),
    [anon_sym_true] = ACTIONS(79),
    [anon_sym_false] = ACTIONS(79),
    [sym_digit] = ACTIONS(79),
    [sym_comment] = ACTIONS(79),
  },
  [10] = {
    [sym_option] = STATE(11),
    [sym_ca_certificate_option] = STATE(18),
    [sym_compressed_option] = STATE(18),
    [sym_follow_redirect_option] = STATE(18),
    [sym_insecure_option] = STATE(18),
    [sym_max_redirs_option] = STATE(18),
    [sym_path_as_is_option] = STATE(18),
    [sym_proxy_option] = STATE(18),
    [sym_retry_option] = STATE(18),
    [sym_retry_interval_option] = STATE(18),
    [sym_retry_max_count_option] = STATE(18),
    [sym_variable_option] = STATE(18),
    [sym_verbose_option] = STATE(18),
    [sym_very_verbose_option] = STATE(18),
    [aux_sym_options_section_repeat1] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(107),
    [anon_sym_LF] = ACTIONS(107),
    [anon_sym_GET] = ACTIONS(109),
    [anon_sym_HEAD] = ACTIONS(109),
    [anon_sym_POST] = ACTIONS(109),
    [anon_sym_PUT] = ACTIONS(109),
    [anon_sym_DELETE] = ACTIONS(109),
    [anon_sym_CONNECT] = ACTIONS(109),
    [anon_sym_OPTIONS] = ACTIONS(109),
    [anon_sym_TRACE] = ACTIONS(109),
    [anon_sym_PATCH] = ACTIONS(109),
    [anon_sym_LINK] = ACTIONS(109),
    [anon_sym_UNLINK] = ACTIONS(109),
    [anon_sym_PURGE] = ACTIONS(109),
    [anon_sym_LOCK] = ACTIONS(109),
    [anon_sym_UNLOCK] = ACTIONS(109),
    [anon_sym_PROPFIND] = ACTIONS(109),
    [anon_sym_VIEW] = ACTIONS(109),
    [aux_sym_method_token1] = ACTIONS(109),
    [anon_sym_HTTP_SLASH1_DOT0] = ACTIONS(109),
    [anon_sym_HTTP_SLASH1_DOT1] = ACTIONS(109),
    [anon_sym_HTTP_SLASH2] = ACTIONS(109),
    [anon_sym_HTTP_SLASH3] = ACTIONS(109),
    [anon_sym_HTTP_SLASH_STAR] = ACTIONS(109),
    [anon_sym_HTTP] = ACTIONS(109),
    [anon_sym_LBRACKBasicAuth_RBRACK] = ACTIONS(109),
    [anon_sym_LBRACKQuery_RBRACK] = ACTIONS(109),
    [anon_sym_LBRACKQueryStringParams_RBRACK] = ACTIONS(109),
    [anon_sym_LBRACKForm_RBRACK] = ACTIONS(109),
    [anon_sym_LBRACKFormParams_RBRACK] = ACTIONS(109),
    [anon_sym_LBRACKMultipart_RBRACK] = ACTIONS(109),
    [anon_sym_LBRACKMultipartFormData_RBRACK] = ACTIONS(109),
    [anon_sym_LBRACKCookies_RBRACK] = ACTIONS(109),
    [anon_sym_LBRACKOptions_RBRACK] = ACTIONS(109),
    [anon_sym_null] = ACTIONS(109),
    [anon_sym_file_COMMA] = ACTIONS(109),
    [anon_sym_cacert] = ACTIONS(81),
    [anon_sym_compressed] = ACTIONS(83),
    [anon_sym_location] = ACTIONS(85),
    [anon_sym_insecure] = ACTIONS(87),
    [anon_sym_max_DASHredirs] = ACTIONS(89),
    [anon_sym_path_DASHas_DASHis] = ACTIONS(91),
    [anon_sym_proxy] = ACTIONS(93),
    [anon_sym_retry] = ACTIONS(95),
    [anon_sym_retry_DASHinterval] = ACTIONS(97),
    [anon_sym_retry_DASHmax_DASHcount] = ACTIONS(99),
    [anon_sym_variable] = ACTIONS(101),
    [anon_sym_verbose] = ACTIONS(103),
    [anon_sym_very_DASHverbose] = ACTIONS(105),
    [anon_sym_LT] = ACTIONS(109),
    [anon_sym_LT_QMARK] = ACTIONS(109),
    [anon_sym_base64_COMMA] = ACTIONS(109),
    [anon_sym_hex_COMMA] = ACTIONS(109),
    [anon_sym_DQUOTE] = ACTIONS(109),
    [aux_sym_oneline_string_token1] = ACTIONS(109),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(109),
    [anon_sym_LBRACE] = ACTIONS(109),
    [anon_sym_LBRACK] = ACTIONS(109),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(107),
    [anon_sym_true] = ACTIONS(109),
    [anon_sym_false] = ACTIONS(109),
    [sym_digit] = ACTIONS(109),
    [sym_comment] = ACTIONS(109),
  },
  [11] = {
    [sym_option] = STATE(11),
    [sym_ca_certificate_option] = STATE(18),
    [sym_compressed_option] = STATE(18),
    [sym_follow_redirect_option] = STATE(18),
    [sym_insecure_option] = STATE(18),
    [sym_max_redirs_option] = STATE(18),
    [sym_path_as_is_option] = STATE(18),
    [sym_proxy_option] = STATE(18),
    [sym_retry_option] = STATE(18),
    [sym_retry_interval_option] = STATE(18),
    [sym_retry_max_count_option] = STATE(18),
    [sym_variable_option] = STATE(18),
    [sym_verbose_option] = STATE(18),
    [sym_very_verbose_option] = STATE(18),
    [aux_sym_options_section_repeat1] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(111),
    [anon_sym_LF] = ACTIONS(111),
    [anon_sym_GET] = ACTIONS(113),
    [anon_sym_HEAD] = ACTIONS(113),
    [anon_sym_POST] = ACTIONS(113),
    [anon_sym_PUT] = ACTIONS(113),
    [anon_sym_DELETE] = ACTIONS(113),
    [anon_sym_CONNECT] = ACTIONS(113),
    [anon_sym_OPTIONS] = ACTIONS(113),
    [anon_sym_TRACE] = ACTIONS(113),
    [anon_sym_PATCH] = ACTIONS(113),
    [anon_sym_LINK] = ACTIONS(113),
    [anon_sym_UNLINK] = ACTIONS(113),
    [anon_sym_PURGE] = ACTIONS(113),
    [anon_sym_LOCK] = ACTIONS(113),
    [anon_sym_UNLOCK] = ACTIONS(113),
    [anon_sym_PROPFIND] = ACTIONS(113),
    [anon_sym_VIEW] = ACTIONS(113),
    [aux_sym_method_token1] = ACTIONS(113),
    [anon_sym_HTTP_SLASH1_DOT0] = ACTIONS(113),
    [anon_sym_HTTP_SLASH1_DOT1] = ACTIONS(113),
    [anon_sym_HTTP_SLASH2] = ACTIONS(113),
    [anon_sym_HTTP_SLASH3] = ACTIONS(113),
    [anon_sym_HTTP_SLASH_STAR] = ACTIONS(113),
    [anon_sym_HTTP] = ACTIONS(113),
    [anon_sym_LBRACKBasicAuth_RBRACK] = ACTIONS(113),
    [anon_sym_LBRACKQuery_RBRACK] = ACTIONS(113),
    [anon_sym_LBRACKQueryStringParams_RBRACK] = ACTIONS(113),
    [anon_sym_LBRACKForm_RBRACK] = ACTIONS(113),
    [anon_sym_LBRACKFormParams_RBRACK] = ACTIONS(113),
    [anon_sym_LBRACKMultipart_RBRACK] = ACTIONS(113),
    [anon_sym_LBRACKMultipartFormData_RBRACK] = ACTIONS(113),
    [anon_sym_LBRACKCookies_RBRACK] = ACTIONS(113),
    [anon_sym_LBRACKOptions_RBRACK] = ACTIONS(113),
    [anon_sym_null] = ACTIONS(113),
    [anon_sym_file_COMMA] = ACTIONS(113),
    [anon_sym_cacert] = ACTIONS(115),
    [anon_sym_compressed] = ACTIONS(118),
    [anon_sym_location] = ACTIONS(121),
    [anon_sym_insecure] = ACTIONS(124),
    [anon_sym_max_DASHredirs] = ACTIONS(127),
    [anon_sym_path_DASHas_DASHis] = ACTIONS(130),
    [anon_sym_proxy] = ACTIONS(133),
    [anon_sym_retry] = ACTIONS(136),
    [anon_sym_retry_DASHinterval] = ACTIONS(139),
    [anon_sym_retry_DASHmax_DASHcount] = ACTIONS(142),
    [anon_sym_variable] = ACTIONS(145),
    [anon_sym_verbose] = ACTIONS(148),
    [anon_sym_very_DASHverbose] = ACTIONS(151),
    [anon_sym_LT] = ACTIONS(113),
    [anon_sym_LT_QMARK] = ACTIONS(113),
    [anon_sym_base64_COMMA] = ACTIONS(113),
    [anon_sym_hex_COMMA] = ACTIONS(113),
    [anon_sym_DQUOTE] = ACTIONS(113),
    [aux_sym_oneline_string_token1] = ACTIONS(113),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(113),
    [anon_sym_LBRACE] = ACTIONS(113),
    [anon_sym_LBRACK] = ACTIONS(113),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(111),
    [anon_sym_true] = ACTIONS(113),
    [anon_sym_false] = ACTIONS(113),
    [sym_digit] = ACTIONS(113),
    [sym_comment] = ACTIONS(113),
  },
  [12] = {
    [sym_header] = STATE(13),
    [sym_body] = STATE(131),
    [sym_response_section] = STATE(33),
    [sym_captures_section] = STATE(93),
    [sym_asserts_section] = STATE(93),
    [sym_key_value] = STATE(387),
    [sym_bytes] = STATE(433),
    [sym_xml] = STATE(508),
    [sym_xml_prolog_tag] = STATE(261),
    [sym_xml_tag] = STATE(510),
    [sym_xml_open_tag] = STATE(127),
    [sym_oneline_base64] = STATE(508),
    [sym_oneline_file] = STATE(508),
    [sym_oneline_hex] = STATE(508),
    [sym_key_string] = STATE(511),
    [sym_key_string_content] = STATE(189),
    [sym_key_string_escaped_char] = STATE(224),
    [sym_oneline_string] = STATE(508),
    [sym_multiline_string] = STATE(508),
    [sym_json_value] = STATE(508),
    [sym_json_object] = STATE(546),
    [sym_json_array] = STATE(546),
    [sym_json_string] = STATE(546),
    [sym_json_number] = STATE(546),
    [sym_template] = STATE(270),
    [sym_boolean] = STATE(546),
    [sym_integer] = STATE(256),
    [aux_sym_request_repeat1] = STATE(13),
    [aux_sym_response_repeat1] = STATE(33),
    [aux_sym_xml_repeat1] = STATE(261),
    [aux_sym_key_string_repeat1] = STATE(189),
    [aux_sym_key_string_content_repeat1] = STATE(224),
    [aux_sym_integer_repeat1] = STATE(112),
    [ts_builtin_sym_end] = ACTIONS(154),
    [anon_sym_LF] = ACTIONS(154),
    [anon_sym_GET] = ACTIONS(156),
    [anon_sym_HEAD] = ACTIONS(156),
    [anon_sym_POST] = ACTIONS(156),
    [anon_sym_PUT] = ACTIONS(156),
    [anon_sym_DELETE] = ACTIONS(156),
    [anon_sym_CONNECT] = ACTIONS(156),
    [anon_sym_OPTIONS] = ACTIONS(156),
    [anon_sym_TRACE] = ACTIONS(156),
    [anon_sym_PATCH] = ACTIONS(156),
    [anon_sym_LINK] = ACTIONS(156),
    [anon_sym_UNLINK] = ACTIONS(156),
    [anon_sym_PURGE] = ACTIONS(156),
    [anon_sym_LOCK] = ACTIONS(156),
    [anon_sym_UNLOCK] = ACTIONS(156),
    [anon_sym_PROPFIND] = ACTIONS(156),
    [anon_sym_VIEW] = ACTIONS(156),
    [aux_sym_method_token1] = ACTIONS(156),
    [anon_sym_LBRACKCaptures_RBRACK] = ACTIONS(158),
    [anon_sym_LBRACKAsserts_RBRACK] = ACTIONS(160),
    [anon_sym_null] = ACTIONS(31),
    [anon_sym_file_COMMA] = ACTIONS(33),
    [anon_sym_LT] = ACTIONS(35),
    [anon_sym_LT_QMARK] = ACTIONS(37),
    [anon_sym_base64_COMMA] = ACTIONS(39),
    [anon_sym_hex_COMMA] = ACTIONS(41),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [sym_key_string_text] = ACTIONS(45),
    [anon_sym_BSLASH2] = ACTIONS(47),
    [aux_sym_oneline_string_token1] = ACTIONS(49),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(51),
    [anon_sym_LBRACE] = ACTIONS(53),
    [anon_sym_LBRACK] = ACTIONS(55),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(57),
    [anon_sym_true] = ACTIONS(59),
    [anon_sym_false] = ACTIONS(59),
    [sym_digit] = ACTIONS(61),
    [sym_comment] = ACTIONS(156),
  },
  [13] = {
    [sym_header] = STATE(65),
    [sym_body] = STATE(126),
    [sym_response_section] = STATE(34),
    [sym_captures_section] = STATE(93),
    [sym_asserts_section] = STATE(93),
    [sym_key_value] = STATE(387),
    [sym_bytes] = STATE(433),
    [sym_xml] = STATE(508),
    [sym_xml_prolog_tag] = STATE(261),
    [sym_xml_tag] = STATE(510),
    [sym_xml_open_tag] = STATE(127),
    [sym_oneline_base64] = STATE(508),
    [sym_oneline_file] = STATE(508),
    [sym_oneline_hex] = STATE(508),
    [sym_key_string] = STATE(511),
    [sym_key_string_content] = STATE(189),
    [sym_key_string_escaped_char] = STATE(224),
    [sym_oneline_string] = STATE(508),
    [sym_multiline_string] = STATE(508),
    [sym_json_value] = STATE(508),
    [sym_json_object] = STATE(546),
    [sym_json_array] = STATE(546),
    [sym_json_string] = STATE(546),
    [sym_json_number] = STATE(546),
    [sym_template] = STATE(270),
    [sym_boolean] = STATE(546),
    [sym_integer] = STATE(256),
    [aux_sym_request_repeat1] = STATE(65),
    [aux_sym_response_repeat1] = STATE(34),
    [aux_sym_xml_repeat1] = STATE(261),
    [aux_sym_key_string_repeat1] = STATE(189),
    [aux_sym_key_string_content_repeat1] = STATE(224),
    [aux_sym_integer_repeat1] = STATE(112),
    [ts_builtin_sym_end] = ACTIONS(162),
    [anon_sym_LF] = ACTIONS(162),
    [anon_sym_GET] = ACTIONS(164),
    [anon_sym_HEAD] = ACTIONS(164),
    [anon_sym_POST] = ACTIONS(164),
    [anon_sym_PUT] = ACTIONS(164),
    [anon_sym_DELETE] = ACTIONS(164),
    [anon_sym_CONNECT] = ACTIONS(164),
    [anon_sym_OPTIONS] = ACTIONS(164),
    [anon_sym_TRACE] = ACTIONS(164),
    [anon_sym_PATCH] = ACTIONS(164),
    [anon_sym_LINK] = ACTIONS(164),
    [anon_sym_UNLINK] = ACTIONS(164),
    [anon_sym_PURGE] = ACTIONS(164),
    [anon_sym_LOCK] = ACTIONS(164),
    [anon_sym_UNLOCK] = ACTIONS(164),
    [anon_sym_PROPFIND] = ACTIONS(164),
    [anon_sym_VIEW] = ACTIONS(164),
    [aux_sym_method_token1] = ACTIONS(164),
    [anon_sym_LBRACKCaptures_RBRACK] = ACTIONS(158),
    [anon_sym_LBRACKAsserts_RBRACK] = ACTIONS(160),
    [anon_sym_null] = ACTIONS(31),
    [anon_sym_file_COMMA] = ACTIONS(33),
    [anon_sym_LT] = ACTIONS(35),
    [anon_sym_LT_QMARK] = ACTIONS(37),
    [anon_sym_base64_COMMA] = ACTIONS(39),
    [anon_sym_hex_COMMA] = ACTIONS(41),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [sym_key_string_text] = ACTIONS(45),
    [anon_sym_BSLASH2] = ACTIONS(47),
    [aux_sym_oneline_string_token1] = ACTIONS(49),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(51),
    [anon_sym_LBRACE] = ACTIONS(53),
    [anon_sym_LBRACK] = ACTIONS(55),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(57),
    [anon_sym_true] = ACTIONS(59),
    [anon_sym_false] = ACTIONS(59),
    [sym_digit] = ACTIONS(61),
    [sym_comment] = ACTIONS(164),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(168), 1,
      anon_sym_LF,
    ACTIONS(173), 1,
      sym_comment,
    STATE(14), 1,
      aux_sym__comment_or_new_line_repeat1,
    ACTIONS(166), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(171), 59,
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
      aux_sym_method_token1,
      anon_sym_HTTP_SLASH1_DOT0,
      anon_sym_HTTP_SLASH1_DOT1,
      anon_sym_HTTP_SLASH2,
      anon_sym_HTTP_SLASH3,
      anon_sym_HTTP_SLASH_STAR,
      anon_sym_HTTP,
      anon_sym_LBRACKBasicAuth_RBRACK,
      anon_sym_LBRACKQuery_RBRACK,
      anon_sym_LBRACKQueryStringParams_RBRACK,
      anon_sym_LBRACKForm_RBRACK,
      anon_sym_LBRACKFormParams_RBRACK,
      anon_sym_LBRACKMultipart_RBRACK,
      anon_sym_LBRACKMultipartFormData_RBRACK,
      anon_sym_LBRACKCookies_RBRACK,
      anon_sym_LBRACKOptions_RBRACK,
      anon_sym_null,
      anon_sym_file_COMMA,
      anon_sym_cacert,
      anon_sym_compressed,
      anon_sym_location,
      anon_sym_insecure,
      anon_sym_max_DASHredirs,
      anon_sym_path_DASHas_DASHis,
      anon_sym_proxy,
      anon_sym_retry,
      anon_sym_retry_DASHinterval,
      anon_sym_retry_DASHmax_DASHcount,
      anon_sym_variable,
      anon_sym_verbose,
      anon_sym_very_DASHverbose,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      aux_sym_oneline_string_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_true,
      anon_sym_false,
      sym_digit,
  [75] = 5,
    ACTIONS(178), 1,
      anon_sym_LF,
    ACTIONS(182), 1,
      sym_comment,
    STATE(14), 1,
      aux_sym__comment_or_new_line_repeat1,
    ACTIONS(176), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(180), 59,
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
      aux_sym_method_token1,
      anon_sym_HTTP_SLASH1_DOT0,
      anon_sym_HTTP_SLASH1_DOT1,
      anon_sym_HTTP_SLASH2,
      anon_sym_HTTP_SLASH3,
      anon_sym_HTTP_SLASH_STAR,
      anon_sym_HTTP,
      anon_sym_LBRACKBasicAuth_RBRACK,
      anon_sym_LBRACKQuery_RBRACK,
      anon_sym_LBRACKQueryStringParams_RBRACK,
      anon_sym_LBRACKForm_RBRACK,
      anon_sym_LBRACKFormParams_RBRACK,
      anon_sym_LBRACKMultipart_RBRACK,
      anon_sym_LBRACKMultipartFormData_RBRACK,
      anon_sym_LBRACKCookies_RBRACK,
      anon_sym_LBRACKOptions_RBRACK,
      anon_sym_null,
      anon_sym_file_COMMA,
      anon_sym_cacert,
      anon_sym_compressed,
      anon_sym_location,
      anon_sym_insecure,
      anon_sym_max_DASHredirs,
      anon_sym_path_DASHas_DASHis,
      anon_sym_proxy,
      anon_sym_retry,
      anon_sym_retry_DASHinterval,
      anon_sym_retry_DASHmax_DASHcount,
      anon_sym_variable,
      anon_sym_verbose,
      anon_sym_very_DASHverbose,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      aux_sym_oneline_string_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_true,
      anon_sym_false,
      sym_digit,
  [150] = 25,
    ACTIONS(184), 1,
      anon_sym_xpath,
    ACTIONS(186), 1,
      anon_sym_regex,
    ACTIONS(188), 1,
      anon_sym_not,
    ACTIONS(204), 1,
      anon_sym_startsWith,
    ACTIONS(206), 1,
      anon_sym_endsWith,
    ACTIONS(208), 1,
      anon_sym_contains,
    ACTIONS(210), 1,
      anon_sym_matches,
    ACTIONS(212), 1,
      anon_sym_includes,
    ACTIONS(216), 1,
      anon_sym_nth,
    ACTIONS(218), 1,
      anon_sym_replace,
    ACTIONS(220), 1,
      anon_sym_split,
    ACTIONS(222), 1,
      sym_comment,
    STATE(366), 1,
      sym_predicate,
    STATE(591), 1,
      sym_predicate_func,
    ACTIONS(192), 2,
      anon_sym_equals,
      anon_sym_EQ_EQ,
    ACTIONS(194), 2,
      anon_sym_notEquals,
      anon_sym_BANG_EQ,
    ACTIONS(196), 2,
      anon_sym_greaterThan,
      anon_sym_GT,
    ACTIONS(198), 2,
      anon_sym_greaterThanOrEquals,
      anon_sym_GT_EQ,
    ACTIONS(200), 2,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(202), 2,
      anon_sym_lessThanOrEquals,
      anon_sym_LT_EQ,
    STATE(17), 2,
      sym_filter,
      aux_sym_capture_repeat1,
    STATE(74), 5,
      sym_regex_filter,
      sym_nth_filter,
      sym_replace_filter,
      sym_split_filter,
      sym_xpath_filter,
    ACTIONS(190), 9,
      anon_sym_exists,
      anon_sym_isInteger,
      anon_sym_isFloat,
      anon_sym_isBoolean,
      anon_sym_isString,
      anon_sym_isCollection,
      anon_sym_isNumber,
      anon_sym_isIsoDate,
      anon_sym_isEmpty,
    ACTIONS(214), 11,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_toInt,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_toDate,
    STATE(593), 11,
      sym_equal_predicate,
      sym_not_equal_predicate,
      sym_greater_predicate,
      sym_greater_or_equal_predicate,
      sym_less_predicate,
      sym_less_or_equal_predicate,
      sym_start_with_predicate,
      sym_end_with_predicate,
      sym_contain_predicate,
      sym_match_predicate,
      sym_include_predicate,
  [265] = 25,
    ACTIONS(184), 1,
      anon_sym_xpath,
    ACTIONS(186), 1,
      anon_sym_regex,
    ACTIONS(188), 1,
      anon_sym_not,
    ACTIONS(204), 1,
      anon_sym_startsWith,
    ACTIONS(206), 1,
      anon_sym_endsWith,
    ACTIONS(208), 1,
      anon_sym_contains,
    ACTIONS(210), 1,
      anon_sym_matches,
    ACTIONS(212), 1,
      anon_sym_includes,
    ACTIONS(216), 1,
      anon_sym_nth,
    ACTIONS(218), 1,
      anon_sym_replace,
    ACTIONS(220), 1,
      anon_sym_split,
    ACTIONS(222), 1,
      sym_comment,
    STATE(411), 1,
      sym_predicate,
    STATE(591), 1,
      sym_predicate_func,
    ACTIONS(192), 2,
      anon_sym_equals,
      anon_sym_EQ_EQ,
    ACTIONS(194), 2,
      anon_sym_notEquals,
      anon_sym_BANG_EQ,
    ACTIONS(196), 2,
      anon_sym_greaterThan,
      anon_sym_GT,
    ACTIONS(198), 2,
      anon_sym_greaterThanOrEquals,
      anon_sym_GT_EQ,
    ACTIONS(200), 2,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(202), 2,
      anon_sym_lessThanOrEquals,
      anon_sym_LT_EQ,
    STATE(55), 2,
      sym_filter,
      aux_sym_capture_repeat1,
    STATE(74), 5,
      sym_regex_filter,
      sym_nth_filter,
      sym_replace_filter,
      sym_split_filter,
      sym_xpath_filter,
    ACTIONS(190), 9,
      anon_sym_exists,
      anon_sym_isInteger,
      anon_sym_isFloat,
      anon_sym_isBoolean,
      anon_sym_isString,
      anon_sym_isCollection,
      anon_sym_isNumber,
      anon_sym_isIsoDate,
      anon_sym_isEmpty,
    ACTIONS(214), 11,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_toInt,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_toDate,
    STATE(593), 11,
      sym_equal_predicate,
      sym_not_equal_predicate,
      sym_greater_predicate,
      sym_greater_or_equal_predicate,
      sym_less_predicate,
      sym_less_or_equal_predicate,
      sym_start_with_predicate,
      sym_end_with_predicate,
      sym_contain_predicate,
      sym_match_predicate,
      sym_include_predicate,
  [380] = 2,
    ACTIONS(224), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(226), 60,
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
      aux_sym_method_token1,
      anon_sym_HTTP_SLASH1_DOT0,
      anon_sym_HTTP_SLASH1_DOT1,
      anon_sym_HTTP_SLASH2,
      anon_sym_HTTP_SLASH3,
      anon_sym_HTTP_SLASH_STAR,
      anon_sym_HTTP,
      anon_sym_LBRACKBasicAuth_RBRACK,
      anon_sym_LBRACKQuery_RBRACK,
      anon_sym_LBRACKQueryStringParams_RBRACK,
      anon_sym_LBRACKForm_RBRACK,
      anon_sym_LBRACKFormParams_RBRACK,
      anon_sym_LBRACKMultipart_RBRACK,
      anon_sym_LBRACKMultipartFormData_RBRACK,
      anon_sym_LBRACKCookies_RBRACK,
      anon_sym_LBRACKOptions_RBRACK,
      anon_sym_null,
      anon_sym_file_COMMA,
      anon_sym_cacert,
      anon_sym_compressed,
      anon_sym_location,
      anon_sym_insecure,
      anon_sym_max_DASHredirs,
      anon_sym_path_DASHas_DASHis,
      anon_sym_proxy,
      anon_sym_retry,
      anon_sym_retry_DASHinterval,
      anon_sym_retry_DASHmax_DASHcount,
      anon_sym_variable,
      anon_sym_verbose,
      anon_sym_very_DASHverbose,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      aux_sym_oneline_string_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_true,
      anon_sym_false,
      sym_digit,
      sym_comment,
  [448] = 2,
    ACTIONS(228), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(230), 60,
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
      aux_sym_method_token1,
      anon_sym_HTTP_SLASH1_DOT0,
      anon_sym_HTTP_SLASH1_DOT1,
      anon_sym_HTTP_SLASH2,
      anon_sym_HTTP_SLASH3,
      anon_sym_HTTP_SLASH_STAR,
      anon_sym_HTTP,
      anon_sym_LBRACKBasicAuth_RBRACK,
      anon_sym_LBRACKQuery_RBRACK,
      anon_sym_LBRACKQueryStringParams_RBRACK,
      anon_sym_LBRACKForm_RBRACK,
      anon_sym_LBRACKFormParams_RBRACK,
      anon_sym_LBRACKMultipart_RBRACK,
      anon_sym_LBRACKMultipartFormData_RBRACK,
      anon_sym_LBRACKCookies_RBRACK,
      anon_sym_LBRACKOptions_RBRACK,
      anon_sym_null,
      anon_sym_file_COMMA,
      anon_sym_cacert,
      anon_sym_compressed,
      anon_sym_location,
      anon_sym_insecure,
      anon_sym_max_DASHredirs,
      anon_sym_path_DASHas_DASHis,
      anon_sym_proxy,
      anon_sym_retry,
      anon_sym_retry_DASHinterval,
      anon_sym_retry_DASHmax_DASHcount,
      anon_sym_variable,
      anon_sym_verbose,
      anon_sym_very_DASHverbose,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      aux_sym_oneline_string_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_true,
      anon_sym_false,
      sym_digit,
      sym_comment,
  [516] = 2,
    ACTIONS(232), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(234), 60,
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
      aux_sym_method_token1,
      anon_sym_HTTP_SLASH1_DOT0,
      anon_sym_HTTP_SLASH1_DOT1,
      anon_sym_HTTP_SLASH2,
      anon_sym_HTTP_SLASH3,
      anon_sym_HTTP_SLASH_STAR,
      anon_sym_HTTP,
      anon_sym_LBRACKBasicAuth_RBRACK,
      anon_sym_LBRACKQuery_RBRACK,
      anon_sym_LBRACKQueryStringParams_RBRACK,
      anon_sym_LBRACKForm_RBRACK,
      anon_sym_LBRACKFormParams_RBRACK,
      anon_sym_LBRACKMultipart_RBRACK,
      anon_sym_LBRACKMultipartFormData_RBRACK,
      anon_sym_LBRACKCookies_RBRACK,
      anon_sym_LBRACKOptions_RBRACK,
      anon_sym_null,
      anon_sym_file_COMMA,
      anon_sym_cacert,
      anon_sym_compressed,
      anon_sym_location,
      anon_sym_insecure,
      anon_sym_max_DASHredirs,
      anon_sym_path_DASHas_DASHis,
      anon_sym_proxy,
      anon_sym_retry,
      anon_sym_retry_DASHinterval,
      anon_sym_retry_DASHmax_DASHcount,
      anon_sym_variable,
      anon_sym_verbose,
      anon_sym_very_DASHverbose,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      aux_sym_oneline_string_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_true,
      anon_sym_false,
      sym_digit,
      sym_comment,
  [584] = 2,
    ACTIONS(236), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(238), 60,
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
      aux_sym_method_token1,
      anon_sym_HTTP_SLASH1_DOT0,
      anon_sym_HTTP_SLASH1_DOT1,
      anon_sym_HTTP_SLASH2,
      anon_sym_HTTP_SLASH3,
      anon_sym_HTTP_SLASH_STAR,
      anon_sym_HTTP,
      anon_sym_LBRACKBasicAuth_RBRACK,
      anon_sym_LBRACKQuery_RBRACK,
      anon_sym_LBRACKQueryStringParams_RBRACK,
      anon_sym_LBRACKForm_RBRACK,
      anon_sym_LBRACKFormParams_RBRACK,
      anon_sym_LBRACKMultipart_RBRACK,
      anon_sym_LBRACKMultipartFormData_RBRACK,
      anon_sym_LBRACKCookies_RBRACK,
      anon_sym_LBRACKOptions_RBRACK,
      anon_sym_null,
      anon_sym_file_COMMA,
      anon_sym_cacert,
      anon_sym_compressed,
      anon_sym_location,
      anon_sym_insecure,
      anon_sym_max_DASHredirs,
      anon_sym_path_DASHas_DASHis,
      anon_sym_proxy,
      anon_sym_retry,
      anon_sym_retry_DASHinterval,
      anon_sym_retry_DASHmax_DASHcount,
      anon_sym_variable,
      anon_sym_verbose,
      anon_sym_very_DASHverbose,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      aux_sym_oneline_string_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_true,
      anon_sym_false,
      sym_digit,
      sym_comment,
  [652] = 2,
    ACTIONS(240), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(242), 60,
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
      aux_sym_method_token1,
      anon_sym_HTTP_SLASH1_DOT0,
      anon_sym_HTTP_SLASH1_DOT1,
      anon_sym_HTTP_SLASH2,
      anon_sym_HTTP_SLASH3,
      anon_sym_HTTP_SLASH_STAR,
      anon_sym_HTTP,
      anon_sym_LBRACKBasicAuth_RBRACK,
      anon_sym_LBRACKQuery_RBRACK,
      anon_sym_LBRACKQueryStringParams_RBRACK,
      anon_sym_LBRACKForm_RBRACK,
      anon_sym_LBRACKFormParams_RBRACK,
      anon_sym_LBRACKMultipart_RBRACK,
      anon_sym_LBRACKMultipartFormData_RBRACK,
      anon_sym_LBRACKCookies_RBRACK,
      anon_sym_LBRACKOptions_RBRACK,
      anon_sym_null,
      anon_sym_file_COMMA,
      anon_sym_cacert,
      anon_sym_compressed,
      anon_sym_location,
      anon_sym_insecure,
      anon_sym_max_DASHredirs,
      anon_sym_path_DASHas_DASHis,
      anon_sym_proxy,
      anon_sym_retry,
      anon_sym_retry_DASHinterval,
      anon_sym_retry_DASHmax_DASHcount,
      anon_sym_variable,
      anon_sym_verbose,
      anon_sym_very_DASHverbose,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      aux_sym_oneline_string_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_true,
      anon_sym_false,
      sym_digit,
      sym_comment,
  [720] = 2,
    ACTIONS(244), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(246), 60,
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
      aux_sym_method_token1,
      anon_sym_HTTP_SLASH1_DOT0,
      anon_sym_HTTP_SLASH1_DOT1,
      anon_sym_HTTP_SLASH2,
      anon_sym_HTTP_SLASH3,
      anon_sym_HTTP_SLASH_STAR,
      anon_sym_HTTP,
      anon_sym_LBRACKBasicAuth_RBRACK,
      anon_sym_LBRACKQuery_RBRACK,
      anon_sym_LBRACKQueryStringParams_RBRACK,
      anon_sym_LBRACKForm_RBRACK,
      anon_sym_LBRACKFormParams_RBRACK,
      anon_sym_LBRACKMultipart_RBRACK,
      anon_sym_LBRACKMultipartFormData_RBRACK,
      anon_sym_LBRACKCookies_RBRACK,
      anon_sym_LBRACKOptions_RBRACK,
      anon_sym_null,
      anon_sym_file_COMMA,
      anon_sym_cacert,
      anon_sym_compressed,
      anon_sym_location,
      anon_sym_insecure,
      anon_sym_max_DASHredirs,
      anon_sym_path_DASHas_DASHis,
      anon_sym_proxy,
      anon_sym_retry,
      anon_sym_retry_DASHinterval,
      anon_sym_retry_DASHmax_DASHcount,
      anon_sym_variable,
      anon_sym_verbose,
      anon_sym_very_DASHverbose,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      aux_sym_oneline_string_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_true,
      anon_sym_false,
      sym_digit,
      sym_comment,
  [788] = 2,
    ACTIONS(248), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(250), 60,
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
      aux_sym_method_token1,
      anon_sym_HTTP_SLASH1_DOT0,
      anon_sym_HTTP_SLASH1_DOT1,
      anon_sym_HTTP_SLASH2,
      anon_sym_HTTP_SLASH3,
      anon_sym_HTTP_SLASH_STAR,
      anon_sym_HTTP,
      anon_sym_LBRACKBasicAuth_RBRACK,
      anon_sym_LBRACKQuery_RBRACK,
      anon_sym_LBRACKQueryStringParams_RBRACK,
      anon_sym_LBRACKForm_RBRACK,
      anon_sym_LBRACKFormParams_RBRACK,
      anon_sym_LBRACKMultipart_RBRACK,
      anon_sym_LBRACKMultipartFormData_RBRACK,
      anon_sym_LBRACKCookies_RBRACK,
      anon_sym_LBRACKOptions_RBRACK,
      anon_sym_null,
      anon_sym_file_COMMA,
      anon_sym_cacert,
      anon_sym_compressed,
      anon_sym_location,
      anon_sym_insecure,
      anon_sym_max_DASHredirs,
      anon_sym_path_DASHas_DASHis,
      anon_sym_proxy,
      anon_sym_retry,
      anon_sym_retry_DASHinterval,
      anon_sym_retry_DASHmax_DASHcount,
      anon_sym_variable,
      anon_sym_verbose,
      anon_sym_very_DASHverbose,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      aux_sym_oneline_string_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_true,
      anon_sym_false,
      sym_digit,
      sym_comment,
  [856] = 2,
    ACTIONS(252), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(254), 60,
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
      aux_sym_method_token1,
      anon_sym_HTTP_SLASH1_DOT0,
      anon_sym_HTTP_SLASH1_DOT1,
      anon_sym_HTTP_SLASH2,
      anon_sym_HTTP_SLASH3,
      anon_sym_HTTP_SLASH_STAR,
      anon_sym_HTTP,
      anon_sym_LBRACKBasicAuth_RBRACK,
      anon_sym_LBRACKQuery_RBRACK,
      anon_sym_LBRACKQueryStringParams_RBRACK,
      anon_sym_LBRACKForm_RBRACK,
      anon_sym_LBRACKFormParams_RBRACK,
      anon_sym_LBRACKMultipart_RBRACK,
      anon_sym_LBRACKMultipartFormData_RBRACK,
      anon_sym_LBRACKCookies_RBRACK,
      anon_sym_LBRACKOptions_RBRACK,
      anon_sym_null,
      anon_sym_file_COMMA,
      anon_sym_cacert,
      anon_sym_compressed,
      anon_sym_location,
      anon_sym_insecure,
      anon_sym_max_DASHredirs,
      anon_sym_path_DASHas_DASHis,
      anon_sym_proxy,
      anon_sym_retry,
      anon_sym_retry_DASHinterval,
      anon_sym_retry_DASHmax_DASHcount,
      anon_sym_variable,
      anon_sym_verbose,
      anon_sym_very_DASHverbose,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      aux_sym_oneline_string_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_true,
      anon_sym_false,
      sym_digit,
      sym_comment,
  [924] = 2,
    ACTIONS(256), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(258), 60,
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
      aux_sym_method_token1,
      anon_sym_HTTP_SLASH1_DOT0,
      anon_sym_HTTP_SLASH1_DOT1,
      anon_sym_HTTP_SLASH2,
      anon_sym_HTTP_SLASH3,
      anon_sym_HTTP_SLASH_STAR,
      anon_sym_HTTP,
      anon_sym_LBRACKBasicAuth_RBRACK,
      anon_sym_LBRACKQuery_RBRACK,
      anon_sym_LBRACKQueryStringParams_RBRACK,
      anon_sym_LBRACKForm_RBRACK,
      anon_sym_LBRACKFormParams_RBRACK,
      anon_sym_LBRACKMultipart_RBRACK,
      anon_sym_LBRACKMultipartFormData_RBRACK,
      anon_sym_LBRACKCookies_RBRACK,
      anon_sym_LBRACKOptions_RBRACK,
      anon_sym_null,
      anon_sym_file_COMMA,
      anon_sym_cacert,
      anon_sym_compressed,
      anon_sym_location,
      anon_sym_insecure,
      anon_sym_max_DASHredirs,
      anon_sym_path_DASHas_DASHis,
      anon_sym_proxy,
      anon_sym_retry,
      anon_sym_retry_DASHinterval,
      anon_sym_retry_DASHmax_DASHcount,
      anon_sym_variable,
      anon_sym_verbose,
      anon_sym_very_DASHverbose,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      aux_sym_oneline_string_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_true,
      anon_sym_false,
      sym_digit,
      sym_comment,
  [992] = 2,
    ACTIONS(260), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(262), 60,
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
      aux_sym_method_token1,
      anon_sym_HTTP_SLASH1_DOT0,
      anon_sym_HTTP_SLASH1_DOT1,
      anon_sym_HTTP_SLASH2,
      anon_sym_HTTP_SLASH3,
      anon_sym_HTTP_SLASH_STAR,
      anon_sym_HTTP,
      anon_sym_LBRACKBasicAuth_RBRACK,
      anon_sym_LBRACKQuery_RBRACK,
      anon_sym_LBRACKQueryStringParams_RBRACK,
      anon_sym_LBRACKForm_RBRACK,
      anon_sym_LBRACKFormParams_RBRACK,
      anon_sym_LBRACKMultipart_RBRACK,
      anon_sym_LBRACKMultipartFormData_RBRACK,
      anon_sym_LBRACKCookies_RBRACK,
      anon_sym_LBRACKOptions_RBRACK,
      anon_sym_null,
      anon_sym_file_COMMA,
      anon_sym_cacert,
      anon_sym_compressed,
      anon_sym_location,
      anon_sym_insecure,
      anon_sym_max_DASHredirs,
      anon_sym_path_DASHas_DASHis,
      anon_sym_proxy,
      anon_sym_retry,
      anon_sym_retry_DASHinterval,
      anon_sym_retry_DASHmax_DASHcount,
      anon_sym_variable,
      anon_sym_verbose,
      anon_sym_very_DASHverbose,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      aux_sym_oneline_string_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_true,
      anon_sym_false,
      sym_digit,
      sym_comment,
  [1060] = 2,
    ACTIONS(264), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(266), 60,
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
      aux_sym_method_token1,
      anon_sym_HTTP_SLASH1_DOT0,
      anon_sym_HTTP_SLASH1_DOT1,
      anon_sym_HTTP_SLASH2,
      anon_sym_HTTP_SLASH3,
      anon_sym_HTTP_SLASH_STAR,
      anon_sym_HTTP,
      anon_sym_LBRACKBasicAuth_RBRACK,
      anon_sym_LBRACKQuery_RBRACK,
      anon_sym_LBRACKQueryStringParams_RBRACK,
      anon_sym_LBRACKForm_RBRACK,
      anon_sym_LBRACKFormParams_RBRACK,
      anon_sym_LBRACKMultipart_RBRACK,
      anon_sym_LBRACKMultipartFormData_RBRACK,
      anon_sym_LBRACKCookies_RBRACK,
      anon_sym_LBRACKOptions_RBRACK,
      anon_sym_null,
      anon_sym_file_COMMA,
      anon_sym_cacert,
      anon_sym_compressed,
      anon_sym_location,
      anon_sym_insecure,
      anon_sym_max_DASHredirs,
      anon_sym_path_DASHas_DASHis,
      anon_sym_proxy,
      anon_sym_retry,
      anon_sym_retry_DASHinterval,
      anon_sym_retry_DASHmax_DASHcount,
      anon_sym_variable,
      anon_sym_verbose,
      anon_sym_very_DASHverbose,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      aux_sym_oneline_string_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_true,
      anon_sym_false,
      sym_digit,
      sym_comment,
  [1128] = 2,
    ACTIONS(268), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(270), 60,
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
      aux_sym_method_token1,
      anon_sym_HTTP_SLASH1_DOT0,
      anon_sym_HTTP_SLASH1_DOT1,
      anon_sym_HTTP_SLASH2,
      anon_sym_HTTP_SLASH3,
      anon_sym_HTTP_SLASH_STAR,
      anon_sym_HTTP,
      anon_sym_LBRACKBasicAuth_RBRACK,
      anon_sym_LBRACKQuery_RBRACK,
      anon_sym_LBRACKQueryStringParams_RBRACK,
      anon_sym_LBRACKForm_RBRACK,
      anon_sym_LBRACKFormParams_RBRACK,
      anon_sym_LBRACKMultipart_RBRACK,
      anon_sym_LBRACKMultipartFormData_RBRACK,
      anon_sym_LBRACKCookies_RBRACK,
      anon_sym_LBRACKOptions_RBRACK,
      anon_sym_null,
      anon_sym_file_COMMA,
      anon_sym_cacert,
      anon_sym_compressed,
      anon_sym_location,
      anon_sym_insecure,
      anon_sym_max_DASHredirs,
      anon_sym_path_DASHas_DASHis,
      anon_sym_proxy,
      anon_sym_retry,
      anon_sym_retry_DASHinterval,
      anon_sym_retry_DASHmax_DASHcount,
      anon_sym_variable,
      anon_sym_verbose,
      anon_sym_very_DASHverbose,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      aux_sym_oneline_string_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_true,
      anon_sym_false,
      sym_digit,
      sym_comment,
  [1196] = 2,
    ACTIONS(272), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(274), 60,
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
      aux_sym_method_token1,
      anon_sym_HTTP_SLASH1_DOT0,
      anon_sym_HTTP_SLASH1_DOT1,
      anon_sym_HTTP_SLASH2,
      anon_sym_HTTP_SLASH3,
      anon_sym_HTTP_SLASH_STAR,
      anon_sym_HTTP,
      anon_sym_LBRACKBasicAuth_RBRACK,
      anon_sym_LBRACKQuery_RBRACK,
      anon_sym_LBRACKQueryStringParams_RBRACK,
      anon_sym_LBRACKForm_RBRACK,
      anon_sym_LBRACKFormParams_RBRACK,
      anon_sym_LBRACKMultipart_RBRACK,
      anon_sym_LBRACKMultipartFormData_RBRACK,
      anon_sym_LBRACKCookies_RBRACK,
      anon_sym_LBRACKOptions_RBRACK,
      anon_sym_null,
      anon_sym_file_COMMA,
      anon_sym_cacert,
      anon_sym_compressed,
      anon_sym_location,
      anon_sym_insecure,
      anon_sym_max_DASHredirs,
      anon_sym_path_DASHas_DASHis,
      anon_sym_proxy,
      anon_sym_retry,
      anon_sym_retry_DASHinterval,
      anon_sym_retry_DASHmax_DASHcount,
      anon_sym_variable,
      anon_sym_verbose,
      anon_sym_very_DASHverbose,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      aux_sym_oneline_string_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_true,
      anon_sym_false,
      sym_digit,
      sym_comment,
  [1264] = 2,
    ACTIONS(276), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(278), 60,
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
      aux_sym_method_token1,
      anon_sym_HTTP_SLASH1_DOT0,
      anon_sym_HTTP_SLASH1_DOT1,
      anon_sym_HTTP_SLASH2,
      anon_sym_HTTP_SLASH3,
      anon_sym_HTTP_SLASH_STAR,
      anon_sym_HTTP,
      anon_sym_LBRACKBasicAuth_RBRACK,
      anon_sym_LBRACKQuery_RBRACK,
      anon_sym_LBRACKQueryStringParams_RBRACK,
      anon_sym_LBRACKForm_RBRACK,
      anon_sym_LBRACKFormParams_RBRACK,
      anon_sym_LBRACKMultipart_RBRACK,
      anon_sym_LBRACKMultipartFormData_RBRACK,
      anon_sym_LBRACKCookies_RBRACK,
      anon_sym_LBRACKOptions_RBRACK,
      anon_sym_null,
      anon_sym_file_COMMA,
      anon_sym_cacert,
      anon_sym_compressed,
      anon_sym_location,
      anon_sym_insecure,
      anon_sym_max_DASHredirs,
      anon_sym_path_DASHas_DASHis,
      anon_sym_proxy,
      anon_sym_retry,
      anon_sym_retry_DASHinterval,
      anon_sym_retry_DASHmax_DASHcount,
      anon_sym_variable,
      anon_sym_verbose,
      anon_sym_very_DASHverbose,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      aux_sym_oneline_string_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_true,
      anon_sym_false,
      sym_digit,
      sym_comment,
  [1332] = 2,
    ACTIONS(280), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(282), 60,
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
      aux_sym_method_token1,
      anon_sym_HTTP_SLASH1_DOT0,
      anon_sym_HTTP_SLASH1_DOT1,
      anon_sym_HTTP_SLASH2,
      anon_sym_HTTP_SLASH3,
      anon_sym_HTTP_SLASH_STAR,
      anon_sym_HTTP,
      anon_sym_LBRACKBasicAuth_RBRACK,
      anon_sym_LBRACKQuery_RBRACK,
      anon_sym_LBRACKQueryStringParams_RBRACK,
      anon_sym_LBRACKForm_RBRACK,
      anon_sym_LBRACKFormParams_RBRACK,
      anon_sym_LBRACKMultipart_RBRACK,
      anon_sym_LBRACKMultipartFormData_RBRACK,
      anon_sym_LBRACKCookies_RBRACK,
      anon_sym_LBRACKOptions_RBRACK,
      anon_sym_null,
      anon_sym_file_COMMA,
      anon_sym_cacert,
      anon_sym_compressed,
      anon_sym_location,
      anon_sym_insecure,
      anon_sym_max_DASHredirs,
      anon_sym_path_DASHas_DASHis,
      anon_sym_proxy,
      anon_sym_retry,
      anon_sym_retry_DASHinterval,
      anon_sym_retry_DASHmax_DASHcount,
      anon_sym_variable,
      anon_sym_verbose,
      anon_sym_very_DASHverbose,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      aux_sym_oneline_string_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_true,
      anon_sym_false,
      sym_digit,
      sym_comment,
  [1400] = 29,
    ACTIONS(31), 1,
      anon_sym_null,
    ACTIONS(33), 1,
      anon_sym_file_COMMA,
    ACTIONS(35), 1,
      anon_sym_LT,
    ACTIONS(37), 1,
      anon_sym_LT_QMARK,
    ACTIONS(39), 1,
      anon_sym_base64_COMMA,
    ACTIONS(41), 1,
      anon_sym_hex_COMMA,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(49), 1,
      aux_sym_oneline_string_token1,
    ACTIONS(51), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(53), 1,
      anon_sym_LBRACE,
    ACTIONS(55), 1,
      anon_sym_LBRACK,
    ACTIONS(57), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(61), 1,
      sym_digit,
    ACTIONS(158), 1,
      anon_sym_LBRACKCaptures_RBRACK,
    ACTIONS(160), 1,
      anon_sym_LBRACKAsserts_RBRACK,
    STATE(112), 1,
      aux_sym_integer_repeat1,
    STATE(126), 1,
      sym_body,
    STATE(127), 1,
      sym_xml_open_tag,
    STATE(256), 1,
      sym_integer,
    STATE(433), 1,
      sym_bytes,
    STATE(510), 1,
      sym_xml_tag,
    ACTIONS(59), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(162), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(86), 2,
      sym_response_section,
      aux_sym_response_repeat1,
    STATE(93), 2,
      sym_captures_section,
      sym_asserts_section,
    STATE(261), 2,
      sym_xml_prolog_tag,
      aux_sym_xml_repeat1,
    STATE(546), 6,
      sym_json_object,
      sym_json_array,
      sym_json_string,
      sym_json_number,
      sym_template,
      sym_boolean,
    STATE(508), 7,
      sym_xml,
      sym_oneline_base64,
      sym_oneline_file,
      sym_oneline_hex,
      sym_oneline_string,
      sym_multiline_string,
      sym_json_value,
    ACTIONS(164), 18,
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
      aux_sym_method_token1,
      sym_comment,
  [1521] = 29,
    ACTIONS(31), 1,
      anon_sym_null,
    ACTIONS(33), 1,
      anon_sym_file_COMMA,
    ACTIONS(35), 1,
      anon_sym_LT,
    ACTIONS(37), 1,
      anon_sym_LT_QMARK,
    ACTIONS(39), 1,
      anon_sym_base64_COMMA,
    ACTIONS(41), 1,
      anon_sym_hex_COMMA,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(49), 1,
      aux_sym_oneline_string_token1,
    ACTIONS(51), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(53), 1,
      anon_sym_LBRACE,
    ACTIONS(55), 1,
      anon_sym_LBRACK,
    ACTIONS(57), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(61), 1,
      sym_digit,
    ACTIONS(158), 1,
      anon_sym_LBRACKCaptures_RBRACK,
    ACTIONS(160), 1,
      anon_sym_LBRACKAsserts_RBRACK,
    STATE(112), 1,
      aux_sym_integer_repeat1,
    STATE(127), 1,
      sym_xml_open_tag,
    STATE(135), 1,
      sym_body,
    STATE(256), 1,
      sym_integer,
    STATE(433), 1,
      sym_bytes,
    STATE(510), 1,
      sym_xml_tag,
    ACTIONS(59), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(284), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(86), 2,
      sym_response_section,
      aux_sym_response_repeat1,
    STATE(93), 2,
      sym_captures_section,
      sym_asserts_section,
    STATE(261), 2,
      sym_xml_prolog_tag,
      aux_sym_xml_repeat1,
    STATE(546), 6,
      sym_json_object,
      sym_json_array,
      sym_json_string,
      sym_json_number,
      sym_template,
      sym_boolean,
    STATE(508), 7,
      sym_xml,
      sym_oneline_base64,
      sym_oneline_file,
      sym_oneline_hex,
      sym_oneline_string,
      sym_multiline_string,
      sym_json_value,
    ACTIONS(286), 18,
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
      aux_sym_method_token1,
      sym_comment,
  [1642] = 10,
    ACTIONS(292), 1,
      sym_key_string_text,
    ACTIONS(295), 1,
      anon_sym_BSLASH2,
    ACTIONS(298), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(399), 1,
      sym_key_value,
    STATE(511), 1,
      sym_key_string,
    ACTIONS(288), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(35), 2,
      sym_header,
      aux_sym_request_repeat1,
    STATE(224), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(189), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
    ACTIONS(290), 47,
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
      aux_sym_method_token1,
      anon_sym_HTTP_SLASH1_DOT0,
      anon_sym_HTTP_SLASH1_DOT1,
      anon_sym_HTTP_SLASH2,
      anon_sym_HTTP_SLASH3,
      anon_sym_HTTP_SLASH_STAR,
      anon_sym_HTTP,
      anon_sym_LBRACKBasicAuth_RBRACK,
      anon_sym_LBRACKQuery_RBRACK,
      anon_sym_LBRACKQueryStringParams_RBRACK,
      anon_sym_LBRACKForm_RBRACK,
      anon_sym_LBRACKFormParams_RBRACK,
      anon_sym_LBRACKMultipart_RBRACK,
      anon_sym_LBRACKMultipartFormData_RBRACK,
      anon_sym_LBRACKCookies_RBRACK,
      anon_sym_LBRACKOptions_RBRACK,
      anon_sym_null,
      anon_sym_file_COMMA,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      aux_sym_oneline_string_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_true,
      anon_sym_false,
      sym_digit,
      sym_comment,
  [1724] = 10,
    ACTIONS(45), 1,
      sym_key_string_text,
    ACTIONS(47), 1,
      anon_sym_BSLASH2,
    ACTIONS(305), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(436), 1,
      sym_key_string,
    STATE(542), 1,
      sym_multipart_form_data_param,
    ACTIONS(301), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(224), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(509), 2,
      sym_key_value,
      sym_file_param,
    STATE(189), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
    ACTIONS(303), 47,
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
      aux_sym_method_token1,
      anon_sym_HTTP_SLASH1_DOT0,
      anon_sym_HTTP_SLASH1_DOT1,
      anon_sym_HTTP_SLASH2,
      anon_sym_HTTP_SLASH3,
      anon_sym_HTTP_SLASH_STAR,
      anon_sym_HTTP,
      anon_sym_LBRACKBasicAuth_RBRACK,
      anon_sym_LBRACKQuery_RBRACK,
      anon_sym_LBRACKQueryStringParams_RBRACK,
      anon_sym_LBRACKForm_RBRACK,
      anon_sym_LBRACKFormParams_RBRACK,
      anon_sym_LBRACKMultipart_RBRACK,
      anon_sym_LBRACKMultipartFormData_RBRACK,
      anon_sym_LBRACKCookies_RBRACK,
      anon_sym_LBRACKOptions_RBRACK,
      anon_sym_null,
      anon_sym_file_COMMA,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      aux_sym_oneline_string_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_true,
      anon_sym_false,
      sym_digit,
      sym_comment,
  [1806] = 10,
    ACTIONS(45), 1,
      sym_key_string_text,
    ACTIONS(47), 1,
      anon_sym_BSLASH2,
    ACTIONS(305), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(436), 1,
      sym_key_string,
    STATE(542), 1,
      sym_multipart_form_data_param,
    ACTIONS(307), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(224), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(509), 2,
      sym_key_value,
      sym_file_param,
    STATE(189), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
    ACTIONS(309), 47,
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
      aux_sym_method_token1,
      anon_sym_HTTP_SLASH1_DOT0,
      anon_sym_HTTP_SLASH1_DOT1,
      anon_sym_HTTP_SLASH2,
      anon_sym_HTTP_SLASH3,
      anon_sym_HTTP_SLASH_STAR,
      anon_sym_HTTP,
      anon_sym_LBRACKBasicAuth_RBRACK,
      anon_sym_LBRACKQuery_RBRACK,
      anon_sym_LBRACKQueryStringParams_RBRACK,
      anon_sym_LBRACKForm_RBRACK,
      anon_sym_LBRACKFormParams_RBRACK,
      anon_sym_LBRACKMultipart_RBRACK,
      anon_sym_LBRACKMultipartFormData_RBRACK,
      anon_sym_LBRACKCookies_RBRACK,
      anon_sym_LBRACKOptions_RBRACK,
      anon_sym_null,
      anon_sym_file_COMMA,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      aux_sym_oneline_string_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_true,
      anon_sym_false,
      sym_digit,
      sym_comment,
  [1888] = 10,
    ACTIONS(45), 1,
      sym_key_string_text,
    ACTIONS(47), 1,
      anon_sym_BSLASH2,
    ACTIONS(305), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(436), 1,
      sym_key_string,
    STATE(542), 1,
      sym_multipart_form_data_param,
    ACTIONS(311), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(224), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(509), 2,
      sym_key_value,
      sym_file_param,
    STATE(189), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
    ACTIONS(313), 47,
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
      aux_sym_method_token1,
      anon_sym_HTTP_SLASH1_DOT0,
      anon_sym_HTTP_SLASH1_DOT1,
      anon_sym_HTTP_SLASH2,
      anon_sym_HTTP_SLASH3,
      anon_sym_HTTP_SLASH_STAR,
      anon_sym_HTTP,
      anon_sym_LBRACKBasicAuth_RBRACK,
      anon_sym_LBRACKQuery_RBRACK,
      anon_sym_LBRACKQueryStringParams_RBRACK,
      anon_sym_LBRACKForm_RBRACK,
      anon_sym_LBRACKFormParams_RBRACK,
      anon_sym_LBRACKMultipart_RBRACK,
      anon_sym_LBRACKMultipartFormData_RBRACK,
      anon_sym_LBRACKCookies_RBRACK,
      anon_sym_LBRACKOptions_RBRACK,
      anon_sym_null,
      anon_sym_file_COMMA,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      aux_sym_oneline_string_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_true,
      anon_sym_false,
      sym_digit,
      sym_comment,
  [1970] = 9,
    ACTIONS(45), 1,
      sym_key_string_text,
    ACTIONS(47), 1,
      anon_sym_BSLASH2,
    ACTIONS(305), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(511), 1,
      sym_key_string,
    STATE(594), 1,
      sym_key_value,
    ACTIONS(315), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(224), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(189), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
    ACTIONS(317), 47,
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
      aux_sym_method_token1,
      anon_sym_HTTP_SLASH1_DOT0,
      anon_sym_HTTP_SLASH1_DOT1,
      anon_sym_HTTP_SLASH2,
      anon_sym_HTTP_SLASH3,
      anon_sym_HTTP_SLASH_STAR,
      anon_sym_HTTP,
      anon_sym_LBRACKBasicAuth_RBRACK,
      anon_sym_LBRACKQuery_RBRACK,
      anon_sym_LBRACKQueryStringParams_RBRACK,
      anon_sym_LBRACKForm_RBRACK,
      anon_sym_LBRACKFormParams_RBRACK,
      anon_sym_LBRACKMultipart_RBRACK,
      anon_sym_LBRACKMultipartFormData_RBRACK,
      anon_sym_LBRACKCookies_RBRACK,
      anon_sym_LBRACKOptions_RBRACK,
      anon_sym_null,
      anon_sym_file_COMMA,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      aux_sym_oneline_string_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_true,
      anon_sym_false,
      sym_digit,
      sym_comment,
  [2048] = 9,
    ACTIONS(45), 1,
      sym_key_string_text,
    ACTIONS(47), 1,
      anon_sym_BSLASH2,
    ACTIONS(305), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(511), 1,
      sym_key_string,
    STATE(594), 1,
      sym_key_value,
    ACTIONS(319), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(224), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(189), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
    ACTIONS(321), 47,
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
      aux_sym_method_token1,
      anon_sym_HTTP_SLASH1_DOT0,
      anon_sym_HTTP_SLASH1_DOT1,
      anon_sym_HTTP_SLASH2,
      anon_sym_HTTP_SLASH3,
      anon_sym_HTTP_SLASH_STAR,
      anon_sym_HTTP,
      anon_sym_LBRACKBasicAuth_RBRACK,
      anon_sym_LBRACKQuery_RBRACK,
      anon_sym_LBRACKQueryStringParams_RBRACK,
      anon_sym_LBRACKForm_RBRACK,
      anon_sym_LBRACKFormParams_RBRACK,
      anon_sym_LBRACKMultipart_RBRACK,
      anon_sym_LBRACKMultipartFormData_RBRACK,
      anon_sym_LBRACKCookies_RBRACK,
      anon_sym_LBRACKOptions_RBRACK,
      anon_sym_null,
      anon_sym_file_COMMA,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      aux_sym_oneline_string_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_true,
      anon_sym_false,
      sym_digit,
      sym_comment,
  [2126] = 12,
    ACTIONS(327), 1,
      anon_sym_variable,
    ACTIONS(333), 1,
      anon_sym_header,
    ACTIONS(336), 1,
      anon_sym_cookie,
    ACTIONS(339), 1,
      anon_sym_xpath,
    ACTIONS(342), 1,
      anon_sym_jsonpath,
    ACTIONS(345), 1,
      anon_sym_regex,
    STATE(16), 1,
      sym_query,
    STATE(41), 2,
      sym_assert,
      aux_sym_asserts_section_repeat1,
    ACTIONS(323), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    STATE(82), 6,
      sym_header_query,
      sym_cookie_query,
      sym_xpath_query,
      sym_jsonpath_query,
      sym_regex_query,
      sym_variable_query,
    ACTIONS(330), 7,
      anon_sym_status,
      anon_sym_url,
      anon_sym_body,
      anon_sym_duration,
      anon_sym_bytes,
      anon_sym_sha256,
      anon_sym_md5,
    ACTIONS(325), 34,
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
      aux_sym_method_token1,
      anon_sym_LBRACKCaptures_RBRACK,
      anon_sym_LBRACKAsserts_RBRACK,
      anon_sym_null,
      anon_sym_file_COMMA,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      aux_sym_oneline_string_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_true,
      anon_sym_false,
      sym_digit,
      sym_comment,
  [2210] = 12,
    ACTIONS(352), 1,
      anon_sym_variable,
    ACTIONS(356), 1,
      anon_sym_header,
    ACTIONS(358), 1,
      anon_sym_cookie,
    ACTIONS(360), 1,
      anon_sym_xpath,
    ACTIONS(362), 1,
      anon_sym_jsonpath,
    ACTIONS(364), 1,
      anon_sym_regex,
    STATE(16), 1,
      sym_query,
    STATE(41), 2,
      sym_assert,
      aux_sym_asserts_section_repeat1,
    ACTIONS(348), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    STATE(82), 6,
      sym_header_query,
      sym_cookie_query,
      sym_xpath_query,
      sym_jsonpath_query,
      sym_regex_query,
      sym_variable_query,
    ACTIONS(354), 7,
      anon_sym_status,
      anon_sym_url,
      anon_sym_body,
      anon_sym_duration,
      anon_sym_bytes,
      anon_sym_sha256,
      anon_sym_md5,
    ACTIONS(350), 34,
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
      aux_sym_method_token1,
      anon_sym_LBRACKCaptures_RBRACK,
      anon_sym_LBRACKAsserts_RBRACK,
      anon_sym_null,
      anon_sym_file_COMMA,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      aux_sym_oneline_string_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_true,
      anon_sym_false,
      sym_digit,
      sym_comment,
  [2294] = 9,
    ACTIONS(45), 1,
      sym_key_string_text,
    ACTIONS(47), 1,
      anon_sym_BSLASH2,
    ACTIONS(305), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(511), 1,
      sym_key_string,
    STATE(594), 1,
      sym_key_value,
    ACTIONS(366), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(224), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(189), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
    ACTIONS(368), 47,
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
      aux_sym_method_token1,
      anon_sym_HTTP_SLASH1_DOT0,
      anon_sym_HTTP_SLASH1_DOT1,
      anon_sym_HTTP_SLASH2,
      anon_sym_HTTP_SLASH3,
      anon_sym_HTTP_SLASH_STAR,
      anon_sym_HTTP,
      anon_sym_LBRACKBasicAuth_RBRACK,
      anon_sym_LBRACKQuery_RBRACK,
      anon_sym_LBRACKQueryStringParams_RBRACK,
      anon_sym_LBRACKForm_RBRACK,
      anon_sym_LBRACKFormParams_RBRACK,
      anon_sym_LBRACKMultipart_RBRACK,
      anon_sym_LBRACKMultipartFormData_RBRACK,
      anon_sym_LBRACKCookies_RBRACK,
      anon_sym_LBRACKOptions_RBRACK,
      anon_sym_null,
      anon_sym_file_COMMA,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      aux_sym_oneline_string_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_true,
      anon_sym_false,
      sym_digit,
      sym_comment,
  [2372] = 9,
    ACTIONS(45), 1,
      sym_key_string_text,
    ACTIONS(47), 1,
      anon_sym_BSLASH2,
    ACTIONS(305), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(511), 1,
      sym_key_string,
    STATE(594), 1,
      sym_key_value,
    ACTIONS(370), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(224), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(189), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
    ACTIONS(372), 47,
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
      aux_sym_method_token1,
      anon_sym_HTTP_SLASH1_DOT0,
      anon_sym_HTTP_SLASH1_DOT1,
      anon_sym_HTTP_SLASH2,
      anon_sym_HTTP_SLASH3,
      anon_sym_HTTP_SLASH_STAR,
      anon_sym_HTTP,
      anon_sym_LBRACKBasicAuth_RBRACK,
      anon_sym_LBRACKQuery_RBRACK,
      anon_sym_LBRACKQueryStringParams_RBRACK,
      anon_sym_LBRACKForm_RBRACK,
      anon_sym_LBRACKFormParams_RBRACK,
      anon_sym_LBRACKMultipart_RBRACK,
      anon_sym_LBRACKMultipartFormData_RBRACK,
      anon_sym_LBRACKCookies_RBRACK,
      anon_sym_LBRACKOptions_RBRACK,
      anon_sym_null,
      anon_sym_file_COMMA,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      aux_sym_oneline_string_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_true,
      anon_sym_false,
      sym_digit,
      sym_comment,
  [2450] = 9,
    ACTIONS(45), 1,
      sym_key_string_text,
    ACTIONS(47), 1,
      anon_sym_BSLASH2,
    ACTIONS(305), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(511), 1,
      sym_key_string,
    STATE(594), 1,
      sym_key_value,
    ACTIONS(374), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(224), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(189), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
    ACTIONS(376), 47,
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
      aux_sym_method_token1,
      anon_sym_HTTP_SLASH1_DOT0,
      anon_sym_HTTP_SLASH1_DOT1,
      anon_sym_HTTP_SLASH2,
      anon_sym_HTTP_SLASH3,
      anon_sym_HTTP_SLASH_STAR,
      anon_sym_HTTP,
      anon_sym_LBRACKBasicAuth_RBRACK,
      anon_sym_LBRACKQuery_RBRACK,
      anon_sym_LBRACKQueryStringParams_RBRACK,
      anon_sym_LBRACKForm_RBRACK,
      anon_sym_LBRACKFormParams_RBRACK,
      anon_sym_LBRACKMultipart_RBRACK,
      anon_sym_LBRACKMultipartFormData_RBRACK,
      anon_sym_LBRACKCookies_RBRACK,
      anon_sym_LBRACKOptions_RBRACK,
      anon_sym_null,
      anon_sym_file_COMMA,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      aux_sym_oneline_string_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_true,
      anon_sym_false,
      sym_digit,
      sym_comment,
  [2528] = 9,
    ACTIONS(45), 1,
      sym_key_string_text,
    ACTIONS(47), 1,
      anon_sym_BSLASH2,
    ACTIONS(305), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(511), 1,
      sym_key_string,
    STATE(594), 1,
      sym_key_value,
    ACTIONS(378), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(224), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(189), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
    ACTIONS(380), 47,
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
      aux_sym_method_token1,
      anon_sym_HTTP_SLASH1_DOT0,
      anon_sym_HTTP_SLASH1_DOT1,
      anon_sym_HTTP_SLASH2,
      anon_sym_HTTP_SLASH3,
      anon_sym_HTTP_SLASH_STAR,
      anon_sym_HTTP,
      anon_sym_LBRACKBasicAuth_RBRACK,
      anon_sym_LBRACKQuery_RBRACK,
      anon_sym_LBRACKQueryStringParams_RBRACK,
      anon_sym_LBRACKForm_RBRACK,
      anon_sym_LBRACKFormParams_RBRACK,
      anon_sym_LBRACKMultipart_RBRACK,
      anon_sym_LBRACKMultipartFormData_RBRACK,
      anon_sym_LBRACKCookies_RBRACK,
      anon_sym_LBRACKOptions_RBRACK,
      anon_sym_null,
      anon_sym_file_COMMA,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      aux_sym_oneline_string_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_true,
      anon_sym_false,
      sym_digit,
      sym_comment,
  [2606] = 9,
    ACTIONS(45), 1,
      sym_key_string_text,
    ACTIONS(47), 1,
      anon_sym_BSLASH2,
    ACTIONS(305), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(511), 1,
      sym_key_string,
    STATE(594), 1,
      sym_key_value,
    ACTIONS(382), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(224), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(189), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
    ACTIONS(384), 47,
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
      aux_sym_method_token1,
      anon_sym_HTTP_SLASH1_DOT0,
      anon_sym_HTTP_SLASH1_DOT1,
      anon_sym_HTTP_SLASH2,
      anon_sym_HTTP_SLASH3,
      anon_sym_HTTP_SLASH_STAR,
      anon_sym_HTTP,
      anon_sym_LBRACKBasicAuth_RBRACK,
      anon_sym_LBRACKQuery_RBRACK,
      anon_sym_LBRACKQueryStringParams_RBRACK,
      anon_sym_LBRACKForm_RBRACK,
      anon_sym_LBRACKFormParams_RBRACK,
      anon_sym_LBRACKMultipart_RBRACK,
      anon_sym_LBRACKMultipartFormData_RBRACK,
      anon_sym_LBRACKCookies_RBRACK,
      anon_sym_LBRACKOptions_RBRACK,
      anon_sym_null,
      anon_sym_file_COMMA,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      aux_sym_oneline_string_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_true,
      anon_sym_false,
      sym_digit,
      sym_comment,
  [2684] = 9,
    ACTIONS(45), 1,
      sym_key_string_text,
    ACTIONS(47), 1,
      anon_sym_BSLASH2,
    ACTIONS(305), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(511), 1,
      sym_key_string,
    STATE(594), 1,
      sym_key_value,
    ACTIONS(386), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(224), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(189), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
    ACTIONS(388), 47,
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
      aux_sym_method_token1,
      anon_sym_HTTP_SLASH1_DOT0,
      anon_sym_HTTP_SLASH1_DOT1,
      anon_sym_HTTP_SLASH2,
      anon_sym_HTTP_SLASH3,
      anon_sym_HTTP_SLASH_STAR,
      anon_sym_HTTP,
      anon_sym_LBRACKBasicAuth_RBRACK,
      anon_sym_LBRACKQuery_RBRACK,
      anon_sym_LBRACKQueryStringParams_RBRACK,
      anon_sym_LBRACKForm_RBRACK,
      anon_sym_LBRACKFormParams_RBRACK,
      anon_sym_LBRACKMultipart_RBRACK,
      anon_sym_LBRACKMultipartFormData_RBRACK,
      anon_sym_LBRACKCookies_RBRACK,
      anon_sym_LBRACKOptions_RBRACK,
      anon_sym_null,
      anon_sym_file_COMMA,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      aux_sym_oneline_string_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_true,
      anon_sym_false,
      sym_digit,
      sym_comment,
  [2762] = 9,
    ACTIONS(45), 1,
      sym_key_string_text,
    ACTIONS(47), 1,
      anon_sym_BSLASH2,
    ACTIONS(305), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(511), 1,
      sym_key_string,
    STATE(594), 1,
      sym_key_value,
    ACTIONS(390), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(224), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(189), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
    ACTIONS(392), 47,
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
      aux_sym_method_token1,
      anon_sym_HTTP_SLASH1_DOT0,
      anon_sym_HTTP_SLASH1_DOT1,
      anon_sym_HTTP_SLASH2,
      anon_sym_HTTP_SLASH3,
      anon_sym_HTTP_SLASH_STAR,
      anon_sym_HTTP,
      anon_sym_LBRACKBasicAuth_RBRACK,
      anon_sym_LBRACKQuery_RBRACK,
      anon_sym_LBRACKQueryStringParams_RBRACK,
      anon_sym_LBRACKForm_RBRACK,
      anon_sym_LBRACKFormParams_RBRACK,
      anon_sym_LBRACKMultipart_RBRACK,
      anon_sym_LBRACKMultipartFormData_RBRACK,
      anon_sym_LBRACKCookies_RBRACK,
      anon_sym_LBRACKOptions_RBRACK,
      anon_sym_null,
      anon_sym_file_COMMA,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      aux_sym_oneline_string_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_true,
      anon_sym_false,
      sym_digit,
      sym_comment,
  [2840] = 12,
    ACTIONS(352), 1,
      anon_sym_variable,
    ACTIONS(356), 1,
      anon_sym_header,
    ACTIONS(358), 1,
      anon_sym_cookie,
    ACTIONS(360), 1,
      anon_sym_xpath,
    ACTIONS(362), 1,
      anon_sym_jsonpath,
    ACTIONS(364), 1,
      anon_sym_regex,
    STATE(16), 1,
      sym_query,
    STATE(42), 2,
      sym_assert,
      aux_sym_asserts_section_repeat1,
    ACTIONS(394), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    STATE(82), 6,
      sym_header_query,
      sym_cookie_query,
      sym_xpath_query,
      sym_jsonpath_query,
      sym_regex_query,
      sym_variable_query,
    ACTIONS(354), 7,
      anon_sym_status,
      anon_sym_url,
      anon_sym_body,
      anon_sym_duration,
      anon_sym_bytes,
      anon_sym_sha256,
      anon_sym_md5,
    ACTIONS(396), 34,
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
      aux_sym_method_token1,
      anon_sym_LBRACKCaptures_RBRACK,
      anon_sym_LBRACKAsserts_RBRACK,
      anon_sym_null,
      anon_sym_file_COMMA,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      aux_sym_oneline_string_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_true,
      anon_sym_false,
      sym_digit,
      sym_comment,
  [2924] = 10,
    ACTIONS(402), 1,
      anon_sym_LBRACKBasicAuth_RBRACK,
    ACTIONS(414), 1,
      anon_sym_LBRACKCookies_RBRACK,
    ACTIONS(417), 1,
      anon_sym_LBRACKOptions_RBRACK,
    ACTIONS(405), 2,
      anon_sym_LBRACKQuery_RBRACK,
      anon_sym_LBRACKQueryStringParams_RBRACK,
    ACTIONS(408), 2,
      anon_sym_LBRACKForm_RBRACK,
      anon_sym_LBRACKFormParams_RBRACK,
    ACTIONS(411), 2,
      anon_sym_LBRACKMultipart_RBRACK,
      anon_sym_LBRACKMultipartFormData_RBRACK,
    STATE(51), 2,
      sym_request_section,
      aux_sym_request_repeat2,
    ACTIONS(398), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    STATE(61), 6,
      sym_basic_auth_section,
      sym_query_string_params_section,
      sym_form_params_section,
      sym_multipart_form_data_section,
      sym_cookies_section,
      sym_options_section,
    ACTIONS(400), 38,
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
      aux_sym_method_token1,
      anon_sym_HTTP_SLASH1_DOT0,
      anon_sym_HTTP_SLASH1_DOT1,
      anon_sym_HTTP_SLASH2,
      anon_sym_HTTP_SLASH3,
      anon_sym_HTTP_SLASH_STAR,
      anon_sym_HTTP,
      anon_sym_null,
      anon_sym_file_COMMA,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      aux_sym_oneline_string_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_true,
      anon_sym_false,
      sym_digit,
      sym_comment,
  [3003] = 6,
    ACTIONS(422), 1,
      anon_sym_LF,
    ACTIONS(427), 1,
      sym_comment,
    STATE(53), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(52), 2,
      sym__comment_or_new_line,
      aux_sym_hurl_file_repeat2,
    ACTIONS(420), 3,
      ts_builtin_sym_end,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(425), 47,
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
      aux_sym_method_token1,
      anon_sym_HTTP_SLASH1_DOT0,
      anon_sym_HTTP_SLASH1_DOT1,
      anon_sym_HTTP_SLASH2,
      anon_sym_HTTP_SLASH3,
      anon_sym_HTTP_SLASH_STAR,
      anon_sym_HTTP,
      anon_sym_LBRACKBasicAuth_RBRACK,
      anon_sym_LBRACKQuery_RBRACK,
      anon_sym_LBRACKQueryStringParams_RBRACK,
      anon_sym_LBRACKForm_RBRACK,
      anon_sym_LBRACKFormParams_RBRACK,
      anon_sym_LBRACKMultipart_RBRACK,
      anon_sym_LBRACKMultipartFormData_RBRACK,
      anon_sym_LBRACKCookies_RBRACK,
      anon_sym_LBRACKOptions_RBRACK,
      anon_sym_null,
      anon_sym_file_COMMA,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      sym_key_string_text,
      aux_sym_oneline_string_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_true,
      anon_sym_false,
      sym_digit,
  [3071] = 5,
    ACTIONS(430), 1,
      anon_sym_LF,
    ACTIONS(432), 1,
      sym_comment,
    STATE(54), 1,
      aux_sym__comment_or_new_line_repeat1,
    ACTIONS(176), 3,
      ts_builtin_sym_end,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(180), 47,
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
      aux_sym_method_token1,
      anon_sym_HTTP_SLASH1_DOT0,
      anon_sym_HTTP_SLASH1_DOT1,
      anon_sym_HTTP_SLASH2,
      anon_sym_HTTP_SLASH3,
      anon_sym_HTTP_SLASH_STAR,
      anon_sym_HTTP,
      anon_sym_LBRACKBasicAuth_RBRACK,
      anon_sym_LBRACKQuery_RBRACK,
      anon_sym_LBRACKQueryStringParams_RBRACK,
      anon_sym_LBRACKForm_RBRACK,
      anon_sym_LBRACKFormParams_RBRACK,
      anon_sym_LBRACKMultipart_RBRACK,
      anon_sym_LBRACKMultipartFormData_RBRACK,
      anon_sym_LBRACKCookies_RBRACK,
      anon_sym_LBRACKOptions_RBRACK,
      anon_sym_null,
      anon_sym_file_COMMA,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      sym_key_string_text,
      aux_sym_oneline_string_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_true,
      anon_sym_false,
      sym_digit,
  [3135] = 5,
    ACTIONS(434), 1,
      anon_sym_LF,
    ACTIONS(437), 1,
      sym_comment,
    STATE(54), 1,
      aux_sym__comment_or_new_line_repeat1,
    ACTIONS(166), 3,
      ts_builtin_sym_end,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(171), 47,
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
      aux_sym_method_token1,
      anon_sym_HTTP_SLASH1_DOT0,
      anon_sym_HTTP_SLASH1_DOT1,
      anon_sym_HTTP_SLASH2,
      anon_sym_HTTP_SLASH3,
      anon_sym_HTTP_SLASH_STAR,
      anon_sym_HTTP,
      anon_sym_LBRACKBasicAuth_RBRACK,
      anon_sym_LBRACKQuery_RBRACK,
      anon_sym_LBRACKQueryStringParams_RBRACK,
      anon_sym_LBRACKForm_RBRACK,
      anon_sym_LBRACKFormParams_RBRACK,
      anon_sym_LBRACKMultipart_RBRACK,
      anon_sym_LBRACKMultipartFormData_RBRACK,
      anon_sym_LBRACKCookies_RBRACK,
      anon_sym_LBRACKOptions_RBRACK,
      anon_sym_null,
      anon_sym_file_COMMA,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      sym_key_string_text,
      aux_sym_oneline_string_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_true,
      anon_sym_false,
      sym_digit,
  [3199] = 11,
    ACTIONS(222), 1,
      sym_comment,
    ACTIONS(440), 1,
      anon_sym_xpath,
    ACTIONS(443), 1,
      anon_sym_regex,
    ACTIONS(453), 1,
      anon_sym_nth,
    ACTIONS(456), 1,
      anon_sym_replace,
    ACTIONS(459), 1,
      anon_sym_split,
    STATE(55), 2,
      sym_filter,
      aux_sym_capture_repeat1,
    ACTIONS(446), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    STATE(74), 5,
      sym_regex_filter,
      sym_nth_filter,
      sym_replace_filter,
      sym_split_filter,
      sym_xpath_filter,
    ACTIONS(450), 11,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_toInt,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_toDate,
    ACTIONS(448), 23,
      anon_sym_exists,
      anon_sym_isInteger,
      anon_sym_isFloat,
      anon_sym_isBoolean,
      anon_sym_isString,
      anon_sym_isCollection,
      anon_sym_isNumber,
      anon_sym_isIsoDate,
      anon_sym_isEmpty,
      anon_sym_equals,
      anon_sym_EQ_EQ,
      anon_sym_notEquals,
      anon_sym_BANG_EQ,
      anon_sym_greaterThanOrEquals,
      anon_sym_GT_EQ,
      anon_sym_lessThanOrEquals,
      anon_sym_LT_EQ,
      anon_sym_startsWith,
      anon_sym_endsWith,
      anon_sym_contains,
      anon_sym_matches,
      anon_sym_includes,
      anon_sym_RBRACE_RBRACE,
  [3274] = 5,
    ACTIONS(222), 1,
      sym_comment,
    ACTIONS(466), 1,
      sym_digit,
    STATE(56), 1,
      aux_sym_integer_repeat1,
    ACTIONS(464), 6,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
      anon_sym_e,
    ACTIONS(462), 43,
      anon_sym_xpath,
      anon_sym_regex,
      anon_sym_exists,
      anon_sym_isInteger,
      anon_sym_isFloat,
      anon_sym_isBoolean,
      anon_sym_isString,
      anon_sym_isCollection,
      anon_sym_isNumber,
      anon_sym_isIsoDate,
      anon_sym_isEmpty,
      anon_sym_equals,
      anon_sym_EQ_EQ,
      anon_sym_notEquals,
      anon_sym_BANG_EQ,
      anon_sym_greaterThanOrEquals,
      anon_sym_GT_EQ,
      anon_sym_lessThanOrEquals,
      anon_sym_LT_EQ,
      anon_sym_startsWith,
      anon_sym_endsWith,
      anon_sym_contains,
      anon_sym_matches,
      anon_sym_includes,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE_RBRACE,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_toInt,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_toDate,
      anon_sym_nth,
      anon_sym_replace,
      anon_sym_split,
      anon_sym_DOT,
      anon_sym_E,
  [3337] = 5,
    ACTIONS(222), 1,
      sym_comment,
    ACTIONS(473), 1,
      sym_digit,
    STATE(56), 1,
      aux_sym_integer_repeat1,
    ACTIONS(471), 6,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
      anon_sym_e,
    ACTIONS(469), 43,
      anon_sym_xpath,
      anon_sym_regex,
      anon_sym_exists,
      anon_sym_isInteger,
      anon_sym_isFloat,
      anon_sym_isBoolean,
      anon_sym_isString,
      anon_sym_isCollection,
      anon_sym_isNumber,
      anon_sym_isIsoDate,
      anon_sym_isEmpty,
      anon_sym_equals,
      anon_sym_EQ_EQ,
      anon_sym_notEquals,
      anon_sym_BANG_EQ,
      anon_sym_greaterThanOrEquals,
      anon_sym_GT_EQ,
      anon_sym_lessThanOrEquals,
      anon_sym_LT_EQ,
      anon_sym_startsWith,
      anon_sym_endsWith,
      anon_sym_contains,
      anon_sym_matches,
      anon_sym_includes,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE_RBRACE,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_toInt,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_toDate,
      anon_sym_nth,
      anon_sym_replace,
      anon_sym_split,
      anon_sym_DOT,
      anon_sym_E,
  [3400] = 2,
    ACTIONS(475), 4,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(477), 48,
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
      aux_sym_method_token1,
      anon_sym_HTTP_SLASH1_DOT0,
      anon_sym_HTTP_SLASH1_DOT1,
      anon_sym_HTTP_SLASH2,
      anon_sym_HTTP_SLASH3,
      anon_sym_HTTP_SLASH_STAR,
      anon_sym_HTTP,
      anon_sym_LBRACKBasicAuth_RBRACK,
      anon_sym_LBRACKQuery_RBRACK,
      anon_sym_LBRACKQueryStringParams_RBRACK,
      anon_sym_LBRACKForm_RBRACK,
      anon_sym_LBRACKFormParams_RBRACK,
      anon_sym_LBRACKMultipart_RBRACK,
      anon_sym_LBRACKMultipartFormData_RBRACK,
      anon_sym_LBRACKCookies_RBRACK,
      anon_sym_LBRACKOptions_RBRACK,
      anon_sym_null,
      anon_sym_file_COMMA,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      sym_key_string_text,
      aux_sym_oneline_string_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_true,
      anon_sym_false,
      sym_digit,
      sym_comment,
  [3457] = 5,
    ACTIONS(479), 1,
      anon_sym_LF,
    ACTIONS(482), 1,
      sym_comment,
    STATE(59), 1,
      aux_sym__comment_or_new_line_repeat1,
    ACTIONS(166), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(171), 46,
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
      aux_sym_method_token1,
      anon_sym_LBRACKCaptures_RBRACK,
      anon_sym_LBRACKAsserts_RBRACK,
      anon_sym_null,
      anon_sym_file_COMMA,
      anon_sym_variable,
      anon_sym_status,
      anon_sym_url,
      anon_sym_body,
      anon_sym_duration,
      anon_sym_bytes,
      anon_sym_sha256,
      anon_sym_md5,
      anon_sym_header,
      anon_sym_cookie,
      anon_sym_xpath,
      anon_sym_jsonpath,
      anon_sym_regex,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      aux_sym_oneline_string_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_true,
      anon_sym_false,
      sym_digit,
  [3519] = 5,
    ACTIONS(485), 1,
      anon_sym_LF,
    ACTIONS(487), 1,
      sym_comment,
    STATE(59), 1,
      aux_sym__comment_or_new_line_repeat1,
    ACTIONS(176), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(180), 46,
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
      aux_sym_method_token1,
      anon_sym_LBRACKCaptures_RBRACK,
      anon_sym_LBRACKAsserts_RBRACK,
      anon_sym_null,
      anon_sym_file_COMMA,
      anon_sym_variable,
      anon_sym_status,
      anon_sym_url,
      anon_sym_body,
      anon_sym_duration,
      anon_sym_bytes,
      anon_sym_sha256,
      anon_sym_md5,
      anon_sym_header,
      anon_sym_cookie,
      anon_sym_xpath,
      anon_sym_jsonpath,
      anon_sym_regex,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      aux_sym_oneline_string_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_true,
      anon_sym_false,
      sym_digit,
  [3581] = 2,
    ACTIONS(489), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(491), 47,
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
      aux_sym_method_token1,
      anon_sym_HTTP_SLASH1_DOT0,
      anon_sym_HTTP_SLASH1_DOT1,
      anon_sym_HTTP_SLASH2,
      anon_sym_HTTP_SLASH3,
      anon_sym_HTTP_SLASH_STAR,
      anon_sym_HTTP,
      anon_sym_LBRACKBasicAuth_RBRACK,
      anon_sym_LBRACKQuery_RBRACK,
      anon_sym_LBRACKQueryStringParams_RBRACK,
      anon_sym_LBRACKForm_RBRACK,
      anon_sym_LBRACKFormParams_RBRACK,
      anon_sym_LBRACKMultipart_RBRACK,
      anon_sym_LBRACKMultipartFormData_RBRACK,
      anon_sym_LBRACKCookies_RBRACK,
      anon_sym_LBRACKOptions_RBRACK,
      anon_sym_null,
      anon_sym_file_COMMA,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      aux_sym_oneline_string_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_true,
      anon_sym_false,
      sym_digit,
      sym_comment,
  [3636] = 2,
    ACTIONS(493), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(495), 47,
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
      aux_sym_method_token1,
      anon_sym_HTTP_SLASH1_DOT0,
      anon_sym_HTTP_SLASH1_DOT1,
      anon_sym_HTTP_SLASH2,
      anon_sym_HTTP_SLASH3,
      anon_sym_HTTP_SLASH_STAR,
      anon_sym_HTTP,
      anon_sym_LBRACKBasicAuth_RBRACK,
      anon_sym_LBRACKQuery_RBRACK,
      anon_sym_LBRACKQueryStringParams_RBRACK,
      anon_sym_LBRACKForm_RBRACK,
      anon_sym_LBRACKFormParams_RBRACK,
      anon_sym_LBRACKMultipart_RBRACK,
      anon_sym_LBRACKMultipartFormData_RBRACK,
      anon_sym_LBRACKCookies_RBRACK,
      anon_sym_LBRACKOptions_RBRACK,
      anon_sym_null,
      anon_sym_file_COMMA,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      aux_sym_oneline_string_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_true,
      anon_sym_false,
      sym_digit,
      sym_comment,
  [3691] = 2,
    ACTIONS(497), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(499), 47,
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
      aux_sym_method_token1,
      anon_sym_LBRACKCaptures_RBRACK,
      anon_sym_LBRACKAsserts_RBRACK,
      anon_sym_null,
      anon_sym_file_COMMA,
      anon_sym_variable,
      anon_sym_status,
      anon_sym_url,
      anon_sym_body,
      anon_sym_duration,
      anon_sym_bytes,
      anon_sym_sha256,
      anon_sym_md5,
      anon_sym_header,
      anon_sym_cookie,
      anon_sym_xpath,
      anon_sym_jsonpath,
      anon_sym_regex,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      aux_sym_oneline_string_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_true,
      anon_sym_false,
      sym_digit,
      sym_comment,
  [3746] = 2,
    ACTIONS(501), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(503), 47,
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
      aux_sym_method_token1,
      anon_sym_LBRACKCaptures_RBRACK,
      anon_sym_LBRACKAsserts_RBRACK,
      anon_sym_null,
      anon_sym_file_COMMA,
      anon_sym_variable,
      anon_sym_status,
      anon_sym_url,
      anon_sym_body,
      anon_sym_duration,
      anon_sym_bytes,
      anon_sym_sha256,
      anon_sym_md5,
      anon_sym_header,
      anon_sym_cookie,
      anon_sym_xpath,
      anon_sym_jsonpath,
      anon_sym_regex,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      aux_sym_oneline_string_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_true,
      anon_sym_false,
      sym_digit,
      sym_comment,
  [3801] = 10,
    ACTIONS(292), 1,
      sym_key_string_text,
    ACTIONS(295), 1,
      anon_sym_BSLASH2,
    ACTIONS(298), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(387), 1,
      sym_key_value,
    STATE(511), 1,
      sym_key_string,
    ACTIONS(288), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(65), 2,
      sym_header,
      aux_sym_request_repeat1,
    STATE(224), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(189), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
    ACTIONS(290), 34,
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
      aux_sym_method_token1,
      anon_sym_LBRACKCaptures_RBRACK,
      anon_sym_LBRACKAsserts_RBRACK,
      anon_sym_null,
      anon_sym_file_COMMA,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      aux_sym_oneline_string_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_true,
      anon_sym_false,
      sym_digit,
      sym_comment,
  [3870] = 9,
    ACTIONS(509), 1,
      sym_key_string_text,
    ACTIONS(511), 1,
      anon_sym_BSLASH2,
    ACTIONS(513), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(581), 1,
      sym_key_string,
    ACTIONS(505), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(68), 2,
      sym_capture,
      aux_sym_captures_section_repeat1,
    STATE(241), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(195), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
    ACTIONS(507), 34,
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
      aux_sym_method_token1,
      anon_sym_LBRACKCaptures_RBRACK,
      anon_sym_LBRACKAsserts_RBRACK,
      anon_sym_null,
      anon_sym_file_COMMA,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      aux_sym_oneline_string_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_true,
      anon_sym_false,
      sym_digit,
      sym_comment,
  [3936] = 9,
    ACTIONS(519), 1,
      sym_key_string_text,
    ACTIONS(522), 1,
      anon_sym_BSLASH2,
    ACTIONS(525), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(581), 1,
      sym_key_string,
    ACTIONS(515), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(67), 2,
      sym_capture,
      aux_sym_captures_section_repeat1,
    STATE(241), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(195), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
    ACTIONS(517), 34,
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
      aux_sym_method_token1,
      anon_sym_LBRACKCaptures_RBRACK,
      anon_sym_LBRACKAsserts_RBRACK,
      anon_sym_null,
      anon_sym_file_COMMA,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      aux_sym_oneline_string_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_true,
      anon_sym_false,
      sym_digit,
      sym_comment,
  [4002] = 9,
    ACTIONS(509), 1,
      sym_key_string_text,
    ACTIONS(511), 1,
      anon_sym_BSLASH2,
    ACTIONS(513), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(581), 1,
      sym_key_string,
    ACTIONS(528), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(67), 2,
      sym_capture,
      aux_sym_captures_section_repeat1,
    STATE(241), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(195), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
    ACTIONS(530), 34,
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
      aux_sym_method_token1,
      anon_sym_LBRACKCaptures_RBRACK,
      anon_sym_LBRACKAsserts_RBRACK,
      anon_sym_null,
      anon_sym_file_COMMA,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      aux_sym_oneline_string_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_true,
      anon_sym_false,
      sym_digit,
      sym_comment,
  [4068] = 3,
    ACTIONS(222), 1,
      sym_comment,
    ACTIONS(534), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(532), 40,
      anon_sym_xpath,
      anon_sym_regex,
      anon_sym_exists,
      anon_sym_isInteger,
      anon_sym_isFloat,
      anon_sym_isBoolean,
      anon_sym_isString,
      anon_sym_isCollection,
      anon_sym_isNumber,
      anon_sym_isIsoDate,
      anon_sym_isEmpty,
      anon_sym_equals,
      anon_sym_EQ_EQ,
      anon_sym_notEquals,
      anon_sym_BANG_EQ,
      anon_sym_greaterThanOrEquals,
      anon_sym_GT_EQ,
      anon_sym_lessThanOrEquals,
      anon_sym_LT_EQ,
      anon_sym_startsWith,
      anon_sym_endsWith,
      anon_sym_contains,
      anon_sym_matches,
      anon_sym_includes,
      anon_sym_DQUOTE,
      anon_sym_RBRACE_RBRACE,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_toInt,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_toDate,
      anon_sym_nth,
      anon_sym_replace,
      anon_sym_split,
  [4121] = 3,
    ACTIONS(222), 1,
      sym_comment,
    ACTIONS(538), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(536), 40,
      anon_sym_xpath,
      anon_sym_regex,
      anon_sym_exists,
      anon_sym_isInteger,
      anon_sym_isFloat,
      anon_sym_isBoolean,
      anon_sym_isString,
      anon_sym_isCollection,
      anon_sym_isNumber,
      anon_sym_isIsoDate,
      anon_sym_isEmpty,
      anon_sym_equals,
      anon_sym_EQ_EQ,
      anon_sym_notEquals,
      anon_sym_BANG_EQ,
      anon_sym_greaterThanOrEquals,
      anon_sym_GT_EQ,
      anon_sym_lessThanOrEquals,
      anon_sym_LT_EQ,
      anon_sym_startsWith,
      anon_sym_endsWith,
      anon_sym_contains,
      anon_sym_matches,
      anon_sym_includes,
      anon_sym_DQUOTE,
      anon_sym_RBRACE_RBRACE,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_toInt,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_toDate,
      anon_sym_nth,
      anon_sym_replace,
      anon_sym_split,
  [4174] = 3,
    ACTIONS(222), 1,
      sym_comment,
    ACTIONS(542), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(540), 40,
      anon_sym_xpath,
      anon_sym_regex,
      anon_sym_exists,
      anon_sym_isInteger,
      anon_sym_isFloat,
      anon_sym_isBoolean,
      anon_sym_isString,
      anon_sym_isCollection,
      anon_sym_isNumber,
      anon_sym_isIsoDate,
      anon_sym_isEmpty,
      anon_sym_equals,
      anon_sym_EQ_EQ,
      anon_sym_notEquals,
      anon_sym_BANG_EQ,
      anon_sym_greaterThanOrEquals,
      anon_sym_GT_EQ,
      anon_sym_lessThanOrEquals,
      anon_sym_LT_EQ,
      anon_sym_startsWith,
      anon_sym_endsWith,
      anon_sym_contains,
      anon_sym_matches,
      anon_sym_includes,
      anon_sym_DQUOTE,
      anon_sym_RBRACE_RBRACE,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_toInt,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_toDate,
      anon_sym_nth,
      anon_sym_replace,
      anon_sym_split,
  [4227] = 3,
    ACTIONS(222), 1,
      sym_comment,
    ACTIONS(546), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(544), 40,
      anon_sym_xpath,
      anon_sym_regex,
      anon_sym_exists,
      anon_sym_isInteger,
      anon_sym_isFloat,
      anon_sym_isBoolean,
      anon_sym_isString,
      anon_sym_isCollection,
      anon_sym_isNumber,
      anon_sym_isIsoDate,
      anon_sym_isEmpty,
      anon_sym_equals,
      anon_sym_EQ_EQ,
      anon_sym_notEquals,
      anon_sym_BANG_EQ,
      anon_sym_greaterThanOrEquals,
      anon_sym_GT_EQ,
      anon_sym_lessThanOrEquals,
      anon_sym_LT_EQ,
      anon_sym_startsWith,
      anon_sym_endsWith,
      anon_sym_contains,
      anon_sym_matches,
      anon_sym_includes,
      anon_sym_DQUOTE,
      anon_sym_RBRACE_RBRACE,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_toInt,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_toDate,
      anon_sym_nth,
      anon_sym_replace,
      anon_sym_split,
  [4280] = 3,
    ACTIONS(222), 1,
      sym_comment,
    ACTIONS(550), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(548), 39,
      anon_sym_xpath,
      anon_sym_regex,
      anon_sym_exists,
      anon_sym_isInteger,
      anon_sym_isFloat,
      anon_sym_isBoolean,
      anon_sym_isString,
      anon_sym_isCollection,
      anon_sym_isNumber,
      anon_sym_isIsoDate,
      anon_sym_isEmpty,
      anon_sym_equals,
      anon_sym_EQ_EQ,
      anon_sym_notEquals,
      anon_sym_BANG_EQ,
      anon_sym_greaterThanOrEquals,
      anon_sym_GT_EQ,
      anon_sym_lessThanOrEquals,
      anon_sym_LT_EQ,
      anon_sym_startsWith,
      anon_sym_endsWith,
      anon_sym_contains,
      anon_sym_matches,
      anon_sym_includes,
      anon_sym_RBRACE_RBRACE,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_toInt,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_toDate,
      anon_sym_nth,
      anon_sym_replace,
      anon_sym_split,
  [4332] = 3,
    ACTIONS(222), 1,
      sym_comment,
    ACTIONS(554), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(552), 39,
      anon_sym_xpath,
      anon_sym_regex,
      anon_sym_exists,
      anon_sym_isInteger,
      anon_sym_isFloat,
      anon_sym_isBoolean,
      anon_sym_isString,
      anon_sym_isCollection,
      anon_sym_isNumber,
      anon_sym_isIsoDate,
      anon_sym_isEmpty,
      anon_sym_equals,
      anon_sym_EQ_EQ,
      anon_sym_notEquals,
      anon_sym_BANG_EQ,
      anon_sym_greaterThanOrEquals,
      anon_sym_GT_EQ,
      anon_sym_lessThanOrEquals,
      anon_sym_LT_EQ,
      anon_sym_startsWith,
      anon_sym_endsWith,
      anon_sym_contains,
      anon_sym_matches,
      anon_sym_includes,
      anon_sym_RBRACE_RBRACE,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_toInt,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_toDate,
      anon_sym_nth,
      anon_sym_replace,
      anon_sym_split,
  [4384] = 3,
    ACTIONS(222), 1,
      sym_comment,
    ACTIONS(558), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(556), 39,
      anon_sym_xpath,
      anon_sym_regex,
      anon_sym_exists,
      anon_sym_isInteger,
      anon_sym_isFloat,
      anon_sym_isBoolean,
      anon_sym_isString,
      anon_sym_isCollection,
      anon_sym_isNumber,
      anon_sym_isIsoDate,
      anon_sym_isEmpty,
      anon_sym_equals,
      anon_sym_EQ_EQ,
      anon_sym_notEquals,
      anon_sym_BANG_EQ,
      anon_sym_greaterThanOrEquals,
      anon_sym_GT_EQ,
      anon_sym_lessThanOrEquals,
      anon_sym_LT_EQ,
      anon_sym_startsWith,
      anon_sym_endsWith,
      anon_sym_contains,
      anon_sym_matches,
      anon_sym_includes,
      anon_sym_RBRACE_RBRACE,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_toInt,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_toDate,
      anon_sym_nth,
      anon_sym_replace,
      anon_sym_split,
  [4436] = 3,
    ACTIONS(222), 1,
      sym_comment,
    ACTIONS(562), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(560), 39,
      anon_sym_xpath,
      anon_sym_regex,
      anon_sym_exists,
      anon_sym_isInteger,
      anon_sym_isFloat,
      anon_sym_isBoolean,
      anon_sym_isString,
      anon_sym_isCollection,
      anon_sym_isNumber,
      anon_sym_isIsoDate,
      anon_sym_isEmpty,
      anon_sym_equals,
      anon_sym_EQ_EQ,
      anon_sym_notEquals,
      anon_sym_BANG_EQ,
      anon_sym_greaterThanOrEquals,
      anon_sym_GT_EQ,
      anon_sym_lessThanOrEquals,
      anon_sym_LT_EQ,
      anon_sym_startsWith,
      anon_sym_endsWith,
      anon_sym_contains,
      anon_sym_matches,
      anon_sym_includes,
      anon_sym_RBRACE_RBRACE,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_toInt,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_toDate,
      anon_sym_nth,
      anon_sym_replace,
      anon_sym_split,
  [4488] = 3,
    ACTIONS(222), 1,
      sym_comment,
    ACTIONS(566), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(564), 39,
      anon_sym_xpath,
      anon_sym_regex,
      anon_sym_exists,
      anon_sym_isInteger,
      anon_sym_isFloat,
      anon_sym_isBoolean,
      anon_sym_isString,
      anon_sym_isCollection,
      anon_sym_isNumber,
      anon_sym_isIsoDate,
      anon_sym_isEmpty,
      anon_sym_equals,
      anon_sym_EQ_EQ,
      anon_sym_notEquals,
      anon_sym_BANG_EQ,
      anon_sym_greaterThanOrEquals,
      anon_sym_GT_EQ,
      anon_sym_lessThanOrEquals,
      anon_sym_LT_EQ,
      anon_sym_startsWith,
      anon_sym_endsWith,
      anon_sym_contains,
      anon_sym_matches,
      anon_sym_includes,
      anon_sym_RBRACE_RBRACE,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_toInt,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_toDate,
      anon_sym_nth,
      anon_sym_replace,
      anon_sym_split,
  [4540] = 3,
    ACTIONS(222), 1,
      sym_comment,
    ACTIONS(570), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(568), 39,
      anon_sym_xpath,
      anon_sym_regex,
      anon_sym_exists,
      anon_sym_isInteger,
      anon_sym_isFloat,
      anon_sym_isBoolean,
      anon_sym_isString,
      anon_sym_isCollection,
      anon_sym_isNumber,
      anon_sym_isIsoDate,
      anon_sym_isEmpty,
      anon_sym_equals,
      anon_sym_EQ_EQ,
      anon_sym_notEquals,
      anon_sym_BANG_EQ,
      anon_sym_greaterThanOrEquals,
      anon_sym_GT_EQ,
      anon_sym_lessThanOrEquals,
      anon_sym_LT_EQ,
      anon_sym_startsWith,
      anon_sym_endsWith,
      anon_sym_contains,
      anon_sym_matches,
      anon_sym_includes,
      anon_sym_RBRACE_RBRACE,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_toInt,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_toDate,
      anon_sym_nth,
      anon_sym_replace,
      anon_sym_split,
  [4592] = 3,
    ACTIONS(222), 1,
      sym_comment,
    ACTIONS(574), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(572), 38,
      anon_sym_xpath,
      anon_sym_regex,
      anon_sym_exists,
      anon_sym_isInteger,
      anon_sym_isFloat,
      anon_sym_isBoolean,
      anon_sym_isString,
      anon_sym_isCollection,
      anon_sym_isNumber,
      anon_sym_isIsoDate,
      anon_sym_isEmpty,
      anon_sym_equals,
      anon_sym_EQ_EQ,
      anon_sym_notEquals,
      anon_sym_BANG_EQ,
      anon_sym_greaterThanOrEquals,
      anon_sym_GT_EQ,
      anon_sym_lessThanOrEquals,
      anon_sym_LT_EQ,
      anon_sym_startsWith,
      anon_sym_endsWith,
      anon_sym_contains,
      anon_sym_matches,
      anon_sym_includes,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_toInt,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_toDate,
      anon_sym_nth,
      anon_sym_replace,
      anon_sym_split,
  [4643] = 3,
    ACTIONS(222), 1,
      sym_comment,
    ACTIONS(578), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(576), 38,
      anon_sym_xpath,
      anon_sym_regex,
      anon_sym_exists,
      anon_sym_isInteger,
      anon_sym_isFloat,
      anon_sym_isBoolean,
      anon_sym_isString,
      anon_sym_isCollection,
      anon_sym_isNumber,
      anon_sym_isIsoDate,
      anon_sym_isEmpty,
      anon_sym_equals,
      anon_sym_EQ_EQ,
      anon_sym_notEquals,
      anon_sym_BANG_EQ,
      anon_sym_greaterThanOrEquals,
      anon_sym_GT_EQ,
      anon_sym_lessThanOrEquals,
      anon_sym_LT_EQ,
      anon_sym_startsWith,
      anon_sym_endsWith,
      anon_sym_contains,
      anon_sym_matches,
      anon_sym_includes,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_toInt,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_toDate,
      anon_sym_nth,
      anon_sym_replace,
      anon_sym_split,
  [4694] = 3,
    ACTIONS(222), 1,
      sym_comment,
    ACTIONS(582), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(580), 38,
      anon_sym_xpath,
      anon_sym_regex,
      anon_sym_exists,
      anon_sym_isInteger,
      anon_sym_isFloat,
      anon_sym_isBoolean,
      anon_sym_isString,
      anon_sym_isCollection,
      anon_sym_isNumber,
      anon_sym_isIsoDate,
      anon_sym_isEmpty,
      anon_sym_equals,
      anon_sym_EQ_EQ,
      anon_sym_notEquals,
      anon_sym_BANG_EQ,
      anon_sym_greaterThanOrEquals,
      anon_sym_GT_EQ,
      anon_sym_lessThanOrEquals,
      anon_sym_LT_EQ,
      anon_sym_startsWith,
      anon_sym_endsWith,
      anon_sym_contains,
      anon_sym_matches,
      anon_sym_includes,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_toInt,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_toDate,
      anon_sym_nth,
      anon_sym_replace,
      anon_sym_split,
  [4745] = 3,
    ACTIONS(222), 1,
      sym_comment,
    ACTIONS(586), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(584), 38,
      anon_sym_xpath,
      anon_sym_regex,
      anon_sym_exists,
      anon_sym_isInteger,
      anon_sym_isFloat,
      anon_sym_isBoolean,
      anon_sym_isString,
      anon_sym_isCollection,
      anon_sym_isNumber,
      anon_sym_isIsoDate,
      anon_sym_isEmpty,
      anon_sym_equals,
      anon_sym_EQ_EQ,
      anon_sym_notEquals,
      anon_sym_BANG_EQ,
      anon_sym_greaterThanOrEquals,
      anon_sym_GT_EQ,
      anon_sym_lessThanOrEquals,
      anon_sym_LT_EQ,
      anon_sym_startsWith,
      anon_sym_endsWith,
      anon_sym_contains,
      anon_sym_matches,
      anon_sym_includes,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_toInt,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_toDate,
      anon_sym_nth,
      anon_sym_replace,
      anon_sym_split,
  [4796] = 3,
    ACTIONS(222), 1,
      sym_comment,
    ACTIONS(590), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(588), 38,
      anon_sym_xpath,
      anon_sym_regex,
      anon_sym_exists,
      anon_sym_isInteger,
      anon_sym_isFloat,
      anon_sym_isBoolean,
      anon_sym_isString,
      anon_sym_isCollection,
      anon_sym_isNumber,
      anon_sym_isIsoDate,
      anon_sym_isEmpty,
      anon_sym_equals,
      anon_sym_EQ_EQ,
      anon_sym_notEquals,
      anon_sym_BANG_EQ,
      anon_sym_greaterThanOrEquals,
      anon_sym_GT_EQ,
      anon_sym_lessThanOrEquals,
      anon_sym_LT_EQ,
      anon_sym_startsWith,
      anon_sym_endsWith,
      anon_sym_contains,
      anon_sym_matches,
      anon_sym_includes,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_toInt,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_toDate,
      anon_sym_nth,
      anon_sym_replace,
      anon_sym_split,
  [4847] = 3,
    ACTIONS(222), 1,
      sym_comment,
    ACTIONS(594), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(592), 38,
      anon_sym_xpath,
      anon_sym_regex,
      anon_sym_exists,
      anon_sym_isInteger,
      anon_sym_isFloat,
      anon_sym_isBoolean,
      anon_sym_isString,
      anon_sym_isCollection,
      anon_sym_isNumber,
      anon_sym_isIsoDate,
      anon_sym_isEmpty,
      anon_sym_equals,
      anon_sym_EQ_EQ,
      anon_sym_notEquals,
      anon_sym_BANG_EQ,
      anon_sym_greaterThanOrEquals,
      anon_sym_GT_EQ,
      anon_sym_lessThanOrEquals,
      anon_sym_LT_EQ,
      anon_sym_startsWith,
      anon_sym_endsWith,
      anon_sym_contains,
      anon_sym_matches,
      anon_sym_includes,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_toInt,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_toDate,
      anon_sym_nth,
      anon_sym_replace,
      anon_sym_split,
  [4898] = 3,
    ACTIONS(222), 1,
      sym_comment,
    ACTIONS(598), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(596), 38,
      anon_sym_xpath,
      anon_sym_regex,
      anon_sym_exists,
      anon_sym_isInteger,
      anon_sym_isFloat,
      anon_sym_isBoolean,
      anon_sym_isString,
      anon_sym_isCollection,
      anon_sym_isNumber,
      anon_sym_isIsoDate,
      anon_sym_isEmpty,
      anon_sym_equals,
      anon_sym_EQ_EQ,
      anon_sym_notEquals,
      anon_sym_BANG_EQ,
      anon_sym_greaterThanOrEquals,
      anon_sym_GT_EQ,
      anon_sym_lessThanOrEquals,
      anon_sym_LT_EQ,
      anon_sym_startsWith,
      anon_sym_endsWith,
      anon_sym_contains,
      anon_sym_matches,
      anon_sym_includes,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_toInt,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_toDate,
      anon_sym_nth,
      anon_sym_replace,
      anon_sym_split,
  [4949] = 6,
    ACTIONS(604), 1,
      anon_sym_LBRACKCaptures_RBRACK,
    ACTIONS(607), 1,
      anon_sym_LBRACKAsserts_RBRACK,
    STATE(86), 2,
      sym_response_section,
      aux_sym_response_repeat1,
    STATE(93), 2,
      sym_captures_section,
      sym_asserts_section,
    ACTIONS(600), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(602), 32,
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
      aux_sym_method_token1,
      anon_sym_null,
      anon_sym_file_COMMA,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      aux_sym_oneline_string_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_true,
      anon_sym_false,
      sym_digit,
      sym_comment,
  [5003] = 5,
    ACTIONS(610), 1,
      anon_sym_LF,
    ACTIONS(613), 1,
      sym_comment,
    STATE(87), 1,
      aux_sym__comment_or_new_line_repeat1,
    ACTIONS(166), 3,
      ts_builtin_sym_end,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(171), 34,
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
      aux_sym_method_token1,
      anon_sym_LBRACKCaptures_RBRACK,
      anon_sym_LBRACKAsserts_RBRACK,
      anon_sym_null,
      anon_sym_file_COMMA,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      sym_key_string_text,
      aux_sym_oneline_string_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_true,
      anon_sym_false,
      sym_digit,
  [5054] = 5,
    ACTIONS(616), 1,
      anon_sym_LF,
    ACTIONS(618), 1,
      sym_comment,
    STATE(87), 1,
      aux_sym__comment_or_new_line_repeat1,
    ACTIONS(176), 3,
      ts_builtin_sym_end,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(180), 34,
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
      aux_sym_method_token1,
      anon_sym_LBRACKCaptures_RBRACK,
      anon_sym_LBRACKAsserts_RBRACK,
      anon_sym_null,
      anon_sym_file_COMMA,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      sym_key_string_text,
      aux_sym_oneline_string_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_true,
      anon_sym_false,
      sym_digit,
  [5105] = 2,
    ACTIONS(620), 4,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(622), 35,
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
      aux_sym_method_token1,
      anon_sym_LBRACKCaptures_RBRACK,
      anon_sym_LBRACKAsserts_RBRACK,
      anon_sym_null,
      anon_sym_file_COMMA,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      sym_key_string_text,
      aux_sym_oneline_string_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_true,
      anon_sym_false,
      sym_digit,
      sym_comment,
  [5149] = 2,
    ACTIONS(624), 4,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(626), 35,
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
      aux_sym_method_token1,
      anon_sym_LBRACKCaptures_RBRACK,
      anon_sym_LBRACKAsserts_RBRACK,
      anon_sym_null,
      anon_sym_file_COMMA,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      sym_key_string_text,
      aux_sym_oneline_string_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_true,
      anon_sym_false,
      sym_digit,
      sym_comment,
  [5193] = 15,
    ACTIONS(204), 1,
      anon_sym_startsWith,
    ACTIONS(206), 1,
      anon_sym_endsWith,
    ACTIONS(208), 1,
      anon_sym_contains,
    ACTIONS(210), 1,
      anon_sym_matches,
    ACTIONS(212), 1,
      anon_sym_includes,
    ACTIONS(222), 1,
      sym_comment,
    STATE(524), 1,
      sym_predicate_func,
    ACTIONS(192), 2,
      anon_sym_equals,
      anon_sym_EQ_EQ,
    ACTIONS(194), 2,
      anon_sym_notEquals,
      anon_sym_BANG_EQ,
    ACTIONS(196), 2,
      anon_sym_greaterThan,
      anon_sym_GT,
    ACTIONS(198), 2,
      anon_sym_greaterThanOrEquals,
      anon_sym_GT_EQ,
    ACTIONS(200), 2,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(202), 2,
      anon_sym_lessThanOrEquals,
      anon_sym_LT_EQ,
    ACTIONS(190), 9,
      anon_sym_exists,
      anon_sym_isInteger,
      anon_sym_isFloat,
      anon_sym_isBoolean,
      anon_sym_isString,
      anon_sym_isCollection,
      anon_sym_isNumber,
      anon_sym_isIsoDate,
      anon_sym_isEmpty,
    STATE(593), 11,
      sym_equal_predicate,
      sym_not_equal_predicate,
      sym_greater_predicate,
      sym_greater_or_equal_predicate,
      sym_less_predicate,
      sym_less_or_equal_predicate,
      sym_start_with_predicate,
      sym_end_with_predicate,
      sym_contain_predicate,
      sym_match_predicate,
      sym_include_predicate,
  [5263] = 2,
    ACTIONS(475), 4,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(477), 35,
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
      aux_sym_method_token1,
      anon_sym_LBRACKCaptures_RBRACK,
      anon_sym_LBRACKAsserts_RBRACK,
      anon_sym_null,
      anon_sym_file_COMMA,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      sym_key_string_text,
      aux_sym_oneline_string_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_true,
      anon_sym_false,
      sym_digit,
      sym_comment,
  [5307] = 2,
    ACTIONS(628), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(630), 34,
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
      aux_sym_method_token1,
      anon_sym_LBRACKCaptures_RBRACK,
      anon_sym_LBRACKAsserts_RBRACK,
      anon_sym_null,
      anon_sym_file_COMMA,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      aux_sym_oneline_string_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_true,
      anon_sym_false,
      sym_digit,
      sym_comment,
  [5349] = 9,
    ACTIONS(7), 1,
      anon_sym_LF,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(632), 1,
      ts_builtin_sym_end,
    STATE(60), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(117), 1,
      sym_response,
    STATE(132), 1,
      sym__comment_or_new_line,
    STATE(421), 1,
      sym_version,
    ACTIONS(636), 6,
      anon_sym_HTTP_SLASH1_DOT0,
      anon_sym_HTTP_SLASH1_DOT1,
      anon_sym_HTTP_SLASH2,
      anon_sym_HTTP_SLASH3,
      anon_sym_HTTP_SLASH_STAR,
      anon_sym_HTTP,
    ACTIONS(634), 17,
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
      aux_sym_method_token1,
  [5398] = 9,
    ACTIONS(7), 1,
      anon_sym_LF,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(638), 1,
      ts_builtin_sym_end,
    STATE(60), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(118), 1,
      sym_response,
    STATE(123), 1,
      sym__comment_or_new_line,
    STATE(421), 1,
      sym_version,
    ACTIONS(636), 6,
      anon_sym_HTTP_SLASH1_DOT0,
      anon_sym_HTTP_SLASH1_DOT1,
      anon_sym_HTTP_SLASH2,
      anon_sym_HTTP_SLASH3,
      anon_sym_HTTP_SLASH_STAR,
      anon_sym_HTTP,
    ACTIONS(640), 17,
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
      aux_sym_method_token1,
  [5447] = 12,
    ACTIONS(642), 1,
      anon_sym_LF,
    ACTIONS(644), 1,
      anon_sym_xpath,
    ACTIONS(646), 1,
      anon_sym_regex,
    ACTIONS(650), 1,
      anon_sym_nth,
    ACTIONS(652), 1,
      anon_sym_replace,
    ACTIONS(654), 1,
      anon_sym_split,
    ACTIONS(656), 1,
      sym_comment,
    STATE(88), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(89), 1,
      sym__comment_or_new_line,
    STATE(106), 2,
      sym_filter,
      aux_sym_capture_repeat1,
    STATE(147), 5,
      sym_regex_filter,
      sym_nth_filter,
      sym_replace_filter,
      sym_split_filter,
      sym_xpath_filter,
    ACTIONS(648), 11,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_toInt,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_toDate,
  [5499] = 12,
    ACTIONS(642), 1,
      anon_sym_LF,
    ACTIONS(644), 1,
      anon_sym_xpath,
    ACTIONS(646), 1,
      anon_sym_regex,
    ACTIONS(650), 1,
      anon_sym_nth,
    ACTIONS(652), 1,
      anon_sym_replace,
    ACTIONS(654), 1,
      anon_sym_split,
    ACTIONS(656), 1,
      sym_comment,
    STATE(88), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(90), 1,
      sym__comment_or_new_line,
    STATE(96), 2,
      sym_filter,
      aux_sym_capture_repeat1,
    STATE(147), 5,
      sym_regex_filter,
      sym_nth_filter,
      sym_replace_filter,
      sym_split_filter,
      sym_xpath_filter,
    ACTIONS(648), 11,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_toInt,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_toDate,
  [5551] = 9,
    ACTIONS(658), 1,
      ts_builtin_sym_end,
    ACTIONS(660), 1,
      anon_sym_LF,
    ACTIONS(666), 1,
      sym_comment,
    STATE(94), 1,
      sym_request,
    STATE(124), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(160), 1,
      sym_method,
    STATE(98), 2,
      sym_entry,
      aux_sym_hurl_file_repeat1,
    STATE(110), 2,
      sym__comment_or_new_line,
      aux_sym_hurl_file_repeat2,
    ACTIONS(663), 17,
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
      aux_sym_method_token1,
  [5597] = 9,
    ACTIONS(7), 1,
      anon_sym_LF,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(669), 1,
      ts_builtin_sym_end,
    STATE(60), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(94), 1,
      sym_request,
    STATE(160), 1,
      sym_method,
    STATE(98), 2,
      sym_entry,
      aux_sym_hurl_file_repeat1,
    STATE(109), 2,
      sym__comment_or_new_line,
      aux_sym_hurl_file_repeat2,
    ACTIONS(9), 17,
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
      aux_sym_method_token1,
  [5643] = 2,
    ACTIONS(69), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(71), 24,
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
      aux_sym_method_token1,
      anon_sym_HTTP_SLASH1_DOT0,
      anon_sym_HTTP_SLASH1_DOT1,
      anon_sym_HTTP_SLASH2,
      anon_sym_HTTP_SLASH3,
      anon_sym_HTTP_SLASH_STAR,
      anon_sym_HTTP,
      sym_comment,
  [5674] = 2,
    ACTIONS(13), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(17), 24,
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
      aux_sym_method_token1,
      anon_sym_HTTP_SLASH1_DOT0,
      anon_sym_HTTP_SLASH1_DOT1,
      anon_sym_HTTP_SLASH2,
      anon_sym_HTTP_SLASH3,
      anon_sym_HTTP_SLASH_STAR,
      anon_sym_HTTP,
      sym_comment,
  [5705] = 2,
    ACTIONS(73), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(75), 24,
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
      aux_sym_method_token1,
      anon_sym_HTTP_SLASH1_DOT0,
      anon_sym_HTTP_SLASH1_DOT1,
      anon_sym_HTTP_SLASH2,
      anon_sym_HTTP_SLASH3,
      anon_sym_HTTP_SLASH_STAR,
      anon_sym_HTTP,
      sym_comment,
  [5736] = 2,
    ACTIONS(671), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(673), 24,
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
      aux_sym_method_token1,
      anon_sym_HTTP_SLASH1_DOT0,
      anon_sym_HTTP_SLASH1_DOT1,
      anon_sym_HTTP_SLASH2,
      anon_sym_HTTP_SLASH3,
      anon_sym_HTTP_SLASH_STAR,
      anon_sym_HTTP,
      sym_comment,
  [5767] = 2,
    ACTIONS(675), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(677), 24,
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
      aux_sym_method_token1,
      anon_sym_HTTP_SLASH1_DOT0,
      anon_sym_HTTP_SLASH1_DOT1,
      anon_sym_HTTP_SLASH2,
      anon_sym_HTTP_SLASH3,
      anon_sym_HTTP_SLASH_STAR,
      anon_sym_HTTP,
      sym_comment,
  [5798] = 8,
    ACTIONS(7), 1,
      anon_sym_LF,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(669), 1,
      ts_builtin_sym_end,
    STATE(60), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(95), 1,
      sym_request,
    STATE(160), 1,
      sym_method,
    STATE(113), 2,
      sym__comment_or_new_line,
      aux_sym_hurl_file_repeat2,
    ACTIONS(9), 17,
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
      aux_sym_method_token1,
  [5840] = 10,
    ACTIONS(446), 1,
      sym_comment,
    ACTIONS(448), 1,
      anon_sym_LF,
    ACTIONS(679), 1,
      anon_sym_xpath,
    ACTIONS(682), 1,
      anon_sym_regex,
    ACTIONS(688), 1,
      anon_sym_nth,
    ACTIONS(691), 1,
      anon_sym_replace,
    ACTIONS(694), 1,
      anon_sym_split,
    STATE(106), 2,
      sym_filter,
      aux_sym_capture_repeat1,
    STATE(147), 5,
      sym_regex_filter,
      sym_nth_filter,
      sym_replace_filter,
      sym_split_filter,
      sym_xpath_filter,
    ACTIONS(685), 11,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_toInt,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_toDate,
  [5886] = 10,
    ACTIONS(184), 1,
      anon_sym_xpath,
    ACTIONS(186), 1,
      anon_sym_regex,
    ACTIONS(216), 1,
      anon_sym_nth,
    ACTIONS(218), 1,
      anon_sym_replace,
    ACTIONS(220), 1,
      anon_sym_split,
    ACTIONS(222), 1,
      sym_comment,
    ACTIONS(697), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(108), 2,
      sym_filter,
      aux_sym_capture_repeat1,
    STATE(74), 5,
      sym_regex_filter,
      sym_nth_filter,
      sym_replace_filter,
      sym_split_filter,
      sym_xpath_filter,
    ACTIONS(214), 11,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_toInt,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_toDate,
  [5932] = 10,
    ACTIONS(184), 1,
      anon_sym_xpath,
    ACTIONS(186), 1,
      anon_sym_regex,
    ACTIONS(216), 1,
      anon_sym_nth,
    ACTIONS(218), 1,
      anon_sym_replace,
    ACTIONS(220), 1,
      anon_sym_split,
    ACTIONS(222), 1,
      sym_comment,
    ACTIONS(699), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(55), 2,
      sym_filter,
      aux_sym_capture_repeat1,
    STATE(74), 5,
      sym_regex_filter,
      sym_nth_filter,
      sym_replace_filter,
      sym_split_filter,
      sym_xpath_filter,
    ACTIONS(214), 11,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_toInt,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_toDate,
  [5978] = 8,
    ACTIONS(7), 1,
      anon_sym_LF,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(701), 1,
      ts_builtin_sym_end,
    STATE(60), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(95), 1,
      sym_request,
    STATE(160), 1,
      sym_method,
    STATE(113), 2,
      sym__comment_or_new_line,
      aux_sym_hurl_file_repeat2,
    ACTIONS(9), 17,
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
      aux_sym_method_token1,
  [6020] = 7,
    ACTIONS(703), 1,
      anon_sym_LF,
    ACTIONS(705), 1,
      sym_comment,
    STATE(95), 1,
      sym_request,
    STATE(124), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(160), 1,
      sym_method,
    STATE(114), 2,
      sym__comment_or_new_line,
      aux_sym_hurl_file_repeat2,
    ACTIONS(9), 17,
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
      aux_sym_method_token1,
  [6059] = 4,
    ACTIONS(462), 1,
      anon_sym_LF,
    ACTIONS(707), 1,
      sym_digit,
    STATE(111), 1,
      aux_sym_integer_repeat1,
    ACTIONS(464), 20,
      anon_sym_xpath,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_toInt,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_toDate,
      anon_sym_nth,
      anon_sym_replace,
      anon_sym_split,
      anon_sym_DOT,
      anon_sym_e,
      anon_sym_E,
      sym_comment,
  [6091] = 4,
    ACTIONS(469), 1,
      anon_sym_LF,
    ACTIONS(710), 1,
      sym_digit,
    STATE(111), 1,
      aux_sym_integer_repeat1,
    ACTIONS(471), 20,
      anon_sym_xpath,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_toInt,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_toDate,
      anon_sym_nth,
      anon_sym_replace,
      anon_sym_split,
      anon_sym_DOT,
      anon_sym_e,
      anon_sym_E,
      sym_comment,
  [6123] = 6,
    ACTIONS(420), 1,
      ts_builtin_sym_end,
    ACTIONS(712), 1,
      anon_sym_LF,
    ACTIONS(715), 1,
      sym_comment,
    STATE(60), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(113), 2,
      sym__comment_or_new_line,
      aux_sym_hurl_file_repeat2,
    ACTIONS(425), 17,
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
      aux_sym_method_token1,
  [6159] = 5,
    ACTIONS(718), 1,
      anon_sym_LF,
    ACTIONS(721), 1,
      sym_comment,
    STATE(124), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(114), 2,
      sym__comment_or_new_line,
      aux_sym_hurl_file_repeat2,
    ACTIONS(425), 17,
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
      aux_sym_method_token1,
  [6192] = 14,
    ACTIONS(57), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(222), 1,
      sym_comment,
    ACTIONS(724), 1,
      anon_sym_null,
    ACTIONS(726), 1,
      anon_sym_file_COMMA,
    ACTIONS(728), 1,
      anon_sym_base64_COMMA,
    ACTIONS(730), 1,
      anon_sym_hex_COMMA,
    ACTIONS(732), 1,
      anon_sym_DQUOTE,
    ACTIONS(734), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(738), 1,
      sym_digit,
    STATE(112), 1,
      aux_sym_integer_repeat1,
    STATE(395), 1,
      sym_integer,
    STATE(515), 1,
      sym_predicate_value,
    ACTIONS(736), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(472), 8,
      sym_oneline_base64,
      sym_oneline_file,
      sym_oneline_hex,
      sym_quoted_string,
      sym_multiline_string,
      sym_template,
      sym_boolean,
      sym_float,
  [6243] = 14,
    ACTIONS(57), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(222), 1,
      sym_comment,
    ACTIONS(724), 1,
      anon_sym_null,
    ACTIONS(726), 1,
      anon_sym_file_COMMA,
    ACTIONS(728), 1,
      anon_sym_base64_COMMA,
    ACTIONS(730), 1,
      anon_sym_hex_COMMA,
    ACTIONS(732), 1,
      anon_sym_DQUOTE,
    ACTIONS(734), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(738), 1,
      sym_digit,
    STATE(112), 1,
      aux_sym_integer_repeat1,
    STATE(395), 1,
      sym_integer,
    STATE(516), 1,
      sym_predicate_value,
    ACTIONS(736), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(472), 8,
      sym_oneline_base64,
      sym_oneline_file,
      sym_oneline_hex,
      sym_quoted_string,
      sym_multiline_string,
      sym_template,
      sym_boolean,
      sym_float,
  [6294] = 6,
    ACTIONS(7), 1,
      anon_sym_LF,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(638), 1,
      ts_builtin_sym_end,
    STATE(60), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(123), 1,
      sym__comment_or_new_line,
    ACTIONS(640), 17,
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
      aux_sym_method_token1,
  [6329] = 6,
    ACTIONS(7), 1,
      anon_sym_LF,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(740), 1,
      ts_builtin_sym_end,
    STATE(60), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(134), 1,
      sym__comment_or_new_line,
    ACTIONS(742), 17,
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
      aux_sym_method_token1,
  [6364] = 14,
    ACTIONS(57), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(222), 1,
      sym_comment,
    ACTIONS(724), 1,
      anon_sym_null,
    ACTIONS(726), 1,
      anon_sym_file_COMMA,
    ACTIONS(728), 1,
      anon_sym_base64_COMMA,
    ACTIONS(730), 1,
      anon_sym_hex_COMMA,
    ACTIONS(732), 1,
      anon_sym_DQUOTE,
    ACTIONS(734), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(738), 1,
      sym_digit,
    STATE(112), 1,
      aux_sym_integer_repeat1,
    STATE(395), 1,
      sym_integer,
    STATE(522), 1,
      sym_predicate_value,
    ACTIONS(736), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(472), 8,
      sym_oneline_base64,
      sym_oneline_file,
      sym_oneline_hex,
      sym_quoted_string,
      sym_multiline_string,
      sym_template,
      sym_boolean,
      sym_float,
  [6415] = 13,
    ACTIONS(61), 1,
      sym_digit,
    ACTIONS(746), 1,
      anon_sym_null,
    ACTIONS(748), 1,
      anon_sym_BSLASH,
    ACTIONS(750), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(752), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(112), 1,
      aux_sym_integer_repeat1,
    STATE(268), 1,
      aux_sym_value_string_text_repeat1,
    STATE(426), 1,
      sym_integer,
    ACTIONS(59), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(744), 2,
      anon_sym_LF,
      sym_comment,
    STATE(169), 3,
      sym_value_string_content,
      sym_template,
      aux_sym_value_string_repeat1,
    STATE(216), 3,
      sym_value_string_text,
      sym_value_string_escaped_char,
      aux_sym_value_string_content_repeat1,
    STATE(475), 3,
      sym_value_string,
      sym_boolean,
      sym_float,
  [6463] = 14,
    ACTIONS(57), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(61), 1,
      sym_digit,
    ACTIONS(222), 1,
      sym_comment,
    ACTIONS(732), 1,
      anon_sym_DQUOTE,
    ACTIONS(754), 1,
      anon_sym_null,
    ACTIONS(756), 1,
      sym_key_string_text,
    ACTIONS(758), 1,
      anon_sym_BSLASH2,
    STATE(112), 1,
      aux_sym_integer_repeat1,
    STATE(417), 1,
      sym_integer,
    STATE(582), 1,
      sym_variable_value,
    ACTIONS(59), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(243), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(200), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
    STATE(587), 4,
      sym_quoted_string,
      sym_key_string,
      sym_boolean,
      sym_float,
  [6513] = 10,
    ACTIONS(222), 1,
      sym_comment,
    ACTIONS(760), 1,
      anon_sym_variable,
    ACTIONS(764), 1,
      anon_sym_header,
    ACTIONS(766), 1,
      anon_sym_cookie,
    ACTIONS(768), 1,
      anon_sym_xpath,
    ACTIONS(770), 1,
      anon_sym_jsonpath,
    ACTIONS(772), 1,
      anon_sym_regex,
    STATE(97), 1,
      sym_query,
    STATE(141), 6,
      sym_header_query,
      sym_cookie_query,
      sym_xpath_query,
      sym_jsonpath_query,
      sym_regex_query,
      sym_variable_query,
    ACTIONS(762), 7,
      anon_sym_status,
      anon_sym_url,
      anon_sym_body,
      anon_sym_duration,
      anon_sym_bytes,
      anon_sym_sha256,
      anon_sym_md5,
  [6555] = 2,
    ACTIONS(740), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(742), 18,
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
      aux_sym_method_token1,
      sym_comment,
  [6580] = 4,
    ACTIONS(774), 1,
      anon_sym_LF,
    ACTIONS(776), 1,
      sym_comment,
    STATE(125), 1,
      aux_sym__comment_or_new_line_repeat1,
    ACTIONS(180), 17,
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
      aux_sym_method_token1,
  [6609] = 4,
    ACTIONS(778), 1,
      anon_sym_LF,
    ACTIONS(781), 1,
      sym_comment,
    STATE(125), 1,
      aux_sym__comment_or_new_line_repeat1,
    ACTIONS(171), 17,
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
      aux_sym_method_token1,
  [6638] = 2,
    ACTIONS(284), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(286), 18,
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
      aux_sym_method_token1,
      sym_comment,
  [6663] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_LT,
    ACTIONS(784), 1,
      anon_sym_LT_QMARK,
    ACTIONS(786), 1,
      anon_sym_LT_SLASH,
    ACTIONS(788), 1,
      anon_sym_BSLASH,
    ACTIONS(790), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(792), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(133), 1,
      sym_xml_open_tag,
    STATE(222), 1,
      aux_sym_value_string_text_repeat1,
    STATE(520), 1,
      sym_xml_close_tag,
    STATE(164), 3,
      sym_value_string_content,
      sym_template,
      aux_sym_value_string_repeat1,
    STATE(184), 3,
      sym_value_string_text,
      sym_value_string_escaped_char,
      aux_sym_value_string_content_repeat1,
    STATE(130), 4,
      sym_xml_prolog_tag,
      sym_xml_tag,
      sym_value_string,
      aux_sym_xml_tag_repeat1,
  [6710] = 2,
    ACTIONS(671), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(673), 18,
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
      aux_sym_method_token1,
      sym_comment,
  [6735] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_LT,
    ACTIONS(784), 1,
      anon_sym_LT_QMARK,
    ACTIONS(788), 1,
      anon_sym_BSLASH,
    ACTIONS(790), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(792), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(794), 1,
      anon_sym_LT_SLASH,
    STATE(133), 1,
      sym_xml_open_tag,
    STATE(222), 1,
      aux_sym_value_string_text_repeat1,
    STATE(259), 1,
      sym_xml_close_tag,
    STATE(164), 3,
      sym_value_string_content,
      sym_template,
      aux_sym_value_string_repeat1,
    STATE(184), 3,
      sym_value_string_text,
      sym_value_string_escaped_char,
      aux_sym_value_string_content_repeat1,
    STATE(137), 4,
      sym_xml_prolog_tag,
      sym_xml_tag,
      sym_value_string,
      aux_sym_xml_tag_repeat1,
  [6782] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_LT,
    ACTIONS(784), 1,
      anon_sym_LT_QMARK,
    ACTIONS(786), 1,
      anon_sym_LT_SLASH,
    ACTIONS(788), 1,
      anon_sym_BSLASH,
    ACTIONS(790), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(792), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(133), 1,
      sym_xml_open_tag,
    STATE(222), 1,
      aux_sym_value_string_text_repeat1,
    STATE(476), 1,
      sym_xml_close_tag,
    STATE(164), 3,
      sym_value_string_content,
      sym_template,
      aux_sym_value_string_repeat1,
    STATE(184), 3,
      sym_value_string_text,
      sym_value_string_escaped_char,
      aux_sym_value_string_content_repeat1,
    STATE(137), 4,
      sym_xml_prolog_tag,
      sym_xml_tag,
      sym_value_string,
      aux_sym_xml_tag_repeat1,
  [6829] = 2,
    ACTIONS(162), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(164), 18,
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
      aux_sym_method_token1,
      sym_comment,
  [6854] = 2,
    ACTIONS(638), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(640), 18,
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
      aux_sym_method_token1,
      sym_comment,
  [6879] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_LT,
    ACTIONS(784), 1,
      anon_sym_LT_QMARK,
    ACTIONS(788), 1,
      anon_sym_BSLASH,
    ACTIONS(790), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(792), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(794), 1,
      anon_sym_LT_SLASH,
    STATE(133), 1,
      sym_xml_open_tag,
    STATE(222), 1,
      aux_sym_value_string_text_repeat1,
    STATE(251), 1,
      sym_xml_close_tag,
    STATE(164), 3,
      sym_value_string_content,
      sym_template,
      aux_sym_value_string_repeat1,
    STATE(184), 3,
      sym_value_string_text,
      sym_value_string_escaped_char,
      aux_sym_value_string_content_repeat1,
    STATE(129), 4,
      sym_xml_prolog_tag,
      sym_xml_tag,
      sym_value_string,
      aux_sym_xml_tag_repeat1,
  [6926] = 2,
    ACTIONS(796), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(798), 18,
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
      aux_sym_method_token1,
      sym_comment,
  [6951] = 2,
    ACTIONS(800), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(802), 18,
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
      aux_sym_method_token1,
      sym_comment,
  [6976] = 2,
    ACTIONS(222), 1,
      sym_comment,
    ACTIONS(804), 18,
      anon_sym_EQ,
      anon_sym_xpath,
      anon_sym_regex,
      anon_sym_RBRACE_RBRACE,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_toInt,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_toDate,
      anon_sym_nth,
      anon_sym_replace,
      anon_sym_split,
  [7000] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(806), 1,
      anon_sym_LT,
    ACTIONS(809), 1,
      anon_sym_LT_QMARK,
    ACTIONS(812), 1,
      anon_sym_LT_SLASH,
    ACTIONS(814), 1,
      anon_sym_BSLASH,
    ACTIONS(817), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(820), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(133), 1,
      sym_xml_open_tag,
    STATE(222), 1,
      aux_sym_value_string_text_repeat1,
    STATE(164), 3,
      sym_value_string_content,
      sym_template,
      aux_sym_value_string_repeat1,
    STATE(184), 3,
      sym_value_string_text,
      sym_value_string_escaped_char,
      aux_sym_value_string_content_repeat1,
    STATE(137), 4,
      sym_xml_prolog_tag,
      sym_xml_tag,
      sym_value_string,
      aux_sym_xml_tag_repeat1,
  [7044] = 2,
    ACTIONS(576), 1,
      anon_sym_LF,
    ACTIONS(578), 17,
      anon_sym_xpath,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_toInt,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_toDate,
      anon_sym_nth,
      anon_sym_replace,
      anon_sym_split,
      sym_comment,
  [7067] = 2,
    ACTIONS(580), 1,
      anon_sym_LF,
    ACTIONS(582), 17,
      anon_sym_xpath,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_toInt,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_toDate,
      anon_sym_nth,
      anon_sym_replace,
      anon_sym_split,
      sym_comment,
  [7090] = 2,
    ACTIONS(536), 1,
      anon_sym_LF,
    ACTIONS(538), 17,
      anon_sym_xpath,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_toInt,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_toDate,
      anon_sym_nth,
      anon_sym_replace,
      anon_sym_split,
      sym_comment,
  [7113] = 2,
    ACTIONS(584), 1,
      anon_sym_LF,
    ACTIONS(586), 17,
      anon_sym_xpath,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_toInt,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_toDate,
      anon_sym_nth,
      anon_sym_replace,
      anon_sym_split,
      sym_comment,
  [7136] = 2,
    ACTIONS(532), 1,
      anon_sym_LF,
    ACTIONS(534), 17,
      anon_sym_xpath,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_toInt,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_toDate,
      anon_sym_nth,
      anon_sym_replace,
      anon_sym_split,
      sym_comment,
  [7159] = 2,
    ACTIONS(544), 1,
      anon_sym_LF,
    ACTIONS(546), 17,
      anon_sym_xpath,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_toInt,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_toDate,
      anon_sym_nth,
      anon_sym_replace,
      anon_sym_split,
      sym_comment,
  [7182] = 2,
    ACTIONS(540), 1,
      anon_sym_LF,
    ACTIONS(542), 17,
      anon_sym_xpath,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_toInt,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_toDate,
      anon_sym_nth,
      anon_sym_replace,
      anon_sym_split,
      sym_comment,
  [7205] = 2,
    ACTIONS(592), 1,
      anon_sym_LF,
    ACTIONS(594), 17,
      anon_sym_xpath,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_toInt,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_toDate,
      anon_sym_nth,
      anon_sym_replace,
      anon_sym_split,
      sym_comment,
  [7228] = 2,
    ACTIONS(596), 1,
      anon_sym_LF,
    ACTIONS(598), 17,
      anon_sym_xpath,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_toInt,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_toDate,
      anon_sym_nth,
      anon_sym_replace,
      anon_sym_split,
      sym_comment,
  [7251] = 2,
    ACTIONS(552), 1,
      anon_sym_LF,
    ACTIONS(554), 17,
      anon_sym_xpath,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_toInt,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_toDate,
      anon_sym_nth,
      anon_sym_replace,
      anon_sym_split,
      sym_comment,
  [7274] = 2,
    ACTIONS(568), 1,
      anon_sym_LF,
    ACTIONS(570), 17,
      anon_sym_xpath,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_toInt,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_toDate,
      anon_sym_nth,
      anon_sym_replace,
      anon_sym_split,
      sym_comment,
  [7297] = 2,
    ACTIONS(556), 1,
      anon_sym_LF,
    ACTIONS(558), 17,
      anon_sym_xpath,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_toInt,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_toDate,
      anon_sym_nth,
      anon_sym_replace,
      anon_sym_split,
      sym_comment,
  [7320] = 12,
    ACTIONS(222), 1,
      sym_comment,
    ACTIONS(823), 1,
      anon_sym_null,
    ACTIONS(825), 1,
      anon_sym_DQUOTE,
    ACTIONS(827), 1,
      anon_sym_LBRACE,
    ACTIONS(829), 1,
      anon_sym_LBRACK,
    ACTIONS(831), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(835), 1,
      sym_digit,
    STATE(226), 1,
      aux_sym_integer_repeat1,
    STATE(230), 1,
      sym_integer,
    STATE(449), 1,
      sym_json_value,
    ACTIONS(833), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(431), 6,
      sym_json_object,
      sym_json_array,
      sym_json_string,
      sym_json_number,
      sym_template,
      sym_boolean,
  [7363] = 2,
    ACTIONS(588), 1,
      anon_sym_LF,
    ACTIONS(590), 17,
      anon_sym_xpath,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_toInt,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_toDate,
      anon_sym_nth,
      anon_sym_replace,
      anon_sym_split,
      sym_comment,
  [7386] = 2,
    ACTIONS(572), 1,
      anon_sym_LF,
    ACTIONS(574), 17,
      anon_sym_xpath,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_toInt,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_toDate,
      anon_sym_nth,
      anon_sym_replace,
      anon_sym_split,
      sym_comment,
  [7409] = 12,
    ACTIONS(222), 1,
      sym_comment,
    ACTIONS(823), 1,
      anon_sym_null,
    ACTIONS(825), 1,
      anon_sym_DQUOTE,
    ACTIONS(827), 1,
      anon_sym_LBRACE,
    ACTIONS(829), 1,
      anon_sym_LBRACK,
    ACTIONS(831), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(837), 1,
      sym_digit,
    STATE(57), 1,
      aux_sym_integer_repeat1,
    STATE(231), 1,
      sym_integer,
    STATE(448), 1,
      sym_json_value,
    ACTIONS(833), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(431), 6,
      sym_json_object,
      sym_json_array,
      sym_json_string,
      sym_json_number,
      sym_template,
      sym_boolean,
  [7452] = 12,
    ACTIONS(222), 1,
      sym_comment,
    ACTIONS(823), 1,
      anon_sym_null,
    ACTIONS(825), 1,
      anon_sym_DQUOTE,
    ACTIONS(827), 1,
      anon_sym_LBRACE,
    ACTIONS(829), 1,
      anon_sym_LBRACK,
    ACTIONS(831), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(837), 1,
      sym_digit,
    STATE(57), 1,
      aux_sym_integer_repeat1,
    STATE(231), 1,
      sym_integer,
    STATE(382), 1,
      sym_json_value,
    ACTIONS(833), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(431), 6,
      sym_json_object,
      sym_json_array,
      sym_json_string,
      sym_json_number,
      sym_template,
      sym_boolean,
  [7495] = 2,
    ACTIONS(548), 1,
      anon_sym_LF,
    ACTIONS(550), 17,
      anon_sym_xpath,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_toInt,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_toDate,
      anon_sym_nth,
      anon_sym_replace,
      anon_sym_split,
      sym_comment,
  [7518] = 12,
    ACTIONS(222), 1,
      sym_comment,
    ACTIONS(823), 1,
      anon_sym_null,
    ACTIONS(825), 1,
      anon_sym_DQUOTE,
    ACTIONS(827), 1,
      anon_sym_LBRACE,
    ACTIONS(829), 1,
      anon_sym_LBRACK,
    ACTIONS(831), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(837), 1,
      sym_digit,
    STATE(57), 1,
      aux_sym_integer_repeat1,
    STATE(231), 1,
      sym_integer,
    STATE(392), 1,
      sym_json_value,
    ACTIONS(833), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(431), 6,
      sym_json_object,
      sym_json_array,
      sym_json_string,
      sym_json_number,
      sym_template,
      sym_boolean,
  [7561] = 2,
    ACTIONS(564), 1,
      anon_sym_LF,
    ACTIONS(566), 17,
      anon_sym_xpath,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_toInt,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_toDate,
      anon_sym_nth,
      anon_sym_replace,
      anon_sym_split,
      sym_comment,
  [7584] = 2,
    ACTIONS(560), 1,
      anon_sym_LF,
    ACTIONS(562), 17,
      anon_sym_xpath,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_toInt,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_toDate,
      anon_sym_nth,
      anon_sym_replace,
      anon_sym_split,
      sym_comment,
  [7607] = 13,
    ACTIONS(15), 1,
      anon_sym_LF,
    ACTIONS(47), 1,
      anon_sym_BSLASH2,
    ACTIONS(63), 1,
      sym_comment,
    ACTIONS(305), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(839), 1,
      sym_key_string_text,
    STATE(36), 1,
      sym__comment_or_new_line,
    STATE(53), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(282), 1,
      sym_multipart_form_data_param,
    STATE(321), 1,
      aux_sym_multipart_form_data_section_repeat1,
    STATE(436), 1,
      sym_key_string,
    STATE(224), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(509), 2,
      sym_key_value,
      sym_file_param,
    STATE(189), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
  [7651] = 10,
    ACTIONS(748), 1,
      anon_sym_BSLASH,
    ACTIONS(750), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(752), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(53), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(268), 1,
      aux_sym_value_string_text_repeat1,
    STATE(299), 1,
      sym_value_string,
    ACTIONS(63), 2,
      anon_sym_LF,
      sym_comment,
    STATE(3), 2,
      sym__comment_or_new_line,
      aux_sym_hurl_file_repeat2,
    STATE(169), 3,
      sym_value_string_content,
      sym_template,
      aux_sym_value_string_repeat1,
    STATE(216), 3,
      sym_value_string_text,
      sym_value_string_escaped_char,
      aux_sym_value_string_content_repeat1,
  [7688] = 12,
    ACTIONS(15), 1,
      anon_sym_LF,
    ACTIONS(47), 1,
      anon_sym_BSLASH2,
    ACTIONS(63), 1,
      sym_comment,
    ACTIONS(305), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(839), 1,
      sym_key_string_text,
    STATE(48), 1,
      sym__comment_or_new_line,
    STATE(53), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(324), 1,
      sym_key_value,
    STATE(325), 1,
      aux_sym_query_string_params_section_repeat1,
    STATE(511), 1,
      sym_key_string,
    STATE(224), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(189), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
  [7728] = 12,
    ACTIONS(15), 1,
      anon_sym_LF,
    ACTIONS(47), 1,
      anon_sym_BSLASH2,
    ACTIONS(63), 1,
      sym_comment,
    ACTIONS(305), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(839), 1,
      sym_key_string_text,
    STATE(46), 1,
      sym__comment_or_new_line,
    STATE(53), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(316), 1,
      sym_key_value,
    STATE(318), 1,
      aux_sym_query_string_params_section_repeat1,
    STATE(511), 1,
      sym_key_string,
    STATE(224), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(189), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
  [7768] = 12,
    ACTIONS(15), 1,
      anon_sym_LF,
    ACTIONS(47), 1,
      anon_sym_BSLASH2,
    ACTIONS(63), 1,
      sym_comment,
    ACTIONS(305), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(839), 1,
      sym_key_string_text,
    STATE(43), 1,
      sym__comment_or_new_line,
    STATE(53), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(313), 1,
      sym_key_value,
    STATE(315), 1,
      aux_sym_query_string_params_section_repeat1,
    STATE(511), 1,
      sym_key_string,
    STATE(224), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(189), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
  [7808] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(843), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(222), 1,
      aux_sym_value_string_text_repeat1,
    STATE(165), 3,
      sym_value_string_content,
      sym_template,
      aux_sym_value_string_repeat1,
    STATE(184), 3,
      sym_value_string_text,
      sym_value_string_escaped_char,
      aux_sym_value_string_content_repeat1,
    ACTIONS(841), 5,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      anon_sym_BSLASH,
      aux_sym_value_string_text_token1,
  [7835] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(847), 1,
      anon_sym_BSLASH,
    ACTIONS(850), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(853), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(222), 1,
      aux_sym_value_string_text_repeat1,
    ACTIONS(845), 3,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
    STATE(165), 3,
      sym_value_string_content,
      sym_template,
      aux_sym_value_string_repeat1,
    STATE(184), 3,
      sym_value_string_text,
      sym_value_string_escaped_char,
      aux_sym_value_string_content_repeat1,
  [7866] = 9,
    ACTIONS(858), 1,
      anon_sym_BSLASH,
    ACTIONS(860), 1,
      sym_filename_text,
    ACTIONS(862), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(15), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(29), 1,
      sym__comment_or_new_line,
    STATE(362), 1,
      sym_filename,
    ACTIONS(856), 2,
      anon_sym_LF,
      sym_comment,
    STATE(247), 2,
      sym_filename_escaped_char,
      aux_sym_filename_content_repeat1,
    STATE(199), 3,
      sym_filename_content,
      sym_template,
      aux_sym_filename_repeat1,
  [7898] = 9,
    ACTIONS(47), 1,
      anon_sym_BSLASH2,
    ACTIONS(222), 1,
      sym_comment,
    ACTIONS(305), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(839), 1,
      sym_key_string_text,
    STATE(436), 1,
      sym_key_string,
    STATE(542), 1,
      sym_multipart_form_data_param,
    STATE(224), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(509), 2,
      sym_key_value,
      sym_file_param,
    STATE(189), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
  [7930] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(864), 1,
      anon_sym_LF,
    ACTIONS(866), 1,
      anon_sym_BSLASH,
    ACTIONS(868), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(870), 1,
      aux_sym__multiline_string_text_token1,
    ACTIONS(872), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(174), 3,
      sym_multiline_string_content,
      sym_template,
      aux_sym_multiline_string_repeat1,
    STATE(214), 3,
      sym__multiline_string_text,
      sym_multiline_string_escaped_char,
      aux_sym_multiline_string_content_repeat1,
  [7959] = 7,
    ACTIONS(748), 1,
      anon_sym_BSLASH,
    ACTIONS(750), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(752), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(268), 1,
      aux_sym_value_string_text_repeat1,
    ACTIONS(841), 2,
      anon_sym_LF,
      sym_comment,
    STATE(171), 3,
      sym_value_string_content,
      sym_template,
      aux_sym_value_string_repeat1,
    STATE(216), 3,
      sym_value_string_text,
      sym_value_string_escaped_char,
      aux_sym_value_string_content_repeat1,
  [7986] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(748), 1,
      anon_sym_BSLASH,
    ACTIONS(750), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(752), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(268), 1,
      aux_sym_value_string_text_repeat1,
    STATE(356), 1,
      sym_value_string,
    STATE(169), 3,
      sym_value_string_content,
      sym_template,
      aux_sym_value_string_repeat1,
    STATE(216), 3,
      sym_value_string_text,
      sym_value_string_escaped_char,
      aux_sym_value_string_content_repeat1,
  [8015] = 7,
    ACTIONS(874), 1,
      anon_sym_BSLASH,
    ACTIONS(877), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(880), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(268), 1,
      aux_sym_value_string_text_repeat1,
    ACTIONS(845), 2,
      anon_sym_LF,
      sym_comment,
    STATE(171), 3,
      sym_value_string_content,
      sym_template,
      aux_sym_value_string_repeat1,
    STATE(216), 3,
      sym_value_string_text,
      sym_value_string_escaped_char,
      aux_sym_value_string_content_repeat1,
  [8042] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(866), 1,
      anon_sym_BSLASH,
    ACTIONS(870), 1,
      aux_sym__multiline_string_text_token1,
    ACTIONS(872), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(883), 1,
      anon_sym_LF,
    ACTIONS(885), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(174), 3,
      sym_multiline_string_content,
      sym_template,
      aux_sym_multiline_string_repeat1,
    STATE(214), 3,
      sym__multiline_string_text,
      sym_multiline_string_escaped_char,
      aux_sym_multiline_string_content_repeat1,
  [8071] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(866), 1,
      anon_sym_BSLASH,
    ACTIONS(870), 1,
      aux_sym__multiline_string_text_token1,
    ACTIONS(872), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(883), 1,
      anon_sym_LF,
    ACTIONS(885), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(168), 3,
      sym_multiline_string_content,
      sym_template,
      aux_sym_multiline_string_repeat1,
    STATE(214), 3,
      sym__multiline_string_text,
      sym_multiline_string_escaped_char,
      aux_sym_multiline_string_content_repeat1,
  [8100] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(887), 1,
      anon_sym_LF,
    ACTIONS(890), 1,
      anon_sym_BSLASH,
    ACTIONS(893), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(895), 1,
      aux_sym__multiline_string_text_token1,
    ACTIONS(898), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(174), 3,
      sym_multiline_string_content,
      sym_template,
      aux_sym_multiline_string_repeat1,
    STATE(214), 3,
      sym__multiline_string_text,
      sym_multiline_string_escaped_char,
      aux_sym_multiline_string_content_repeat1,
  [8129] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(866), 1,
      anon_sym_BSLASH,
    ACTIONS(870), 1,
      aux_sym__multiline_string_text_token1,
    ACTIONS(872), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(901), 1,
      anon_sym_LF,
    ACTIONS(903), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(172), 3,
      sym_multiline_string_content,
      sym_template,
      aux_sym_multiline_string_repeat1,
    STATE(214), 3,
      sym__multiline_string_text,
      sym_multiline_string_escaped_char,
      aux_sym_multiline_string_content_repeat1,
  [8158] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(905), 1,
      anon_sym_DQUOTE,
    ACTIONS(907), 1,
      sym_quoted_string_text,
    ACTIONS(909), 1,
      anon_sym_BSLASH,
    ACTIONS(911), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(178), 3,
      sym_quoted_string_content,
      sym_template,
      aux_sym_quoted_string_repeat1,
    STATE(225), 3,
      sym_invalid_quoted_string_escaped_char,
      sym_quoted_string_escaped_char,
      aux_sym_quoted_string_content_repeat1,
  [8184] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(913), 1,
      anon_sym_DQUOTE,
    ACTIONS(915), 1,
      sym_quoted_string_text,
    ACTIONS(918), 1,
      anon_sym_BSLASH,
    ACTIONS(921), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(177), 3,
      sym_quoted_string_content,
      sym_template,
      aux_sym_quoted_string_repeat1,
    STATE(225), 3,
      sym_invalid_quoted_string_escaped_char,
      sym_quoted_string_escaped_char,
      aux_sym_quoted_string_content_repeat1,
  [8210] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(907), 1,
      sym_quoted_string_text,
    ACTIONS(909), 1,
      anon_sym_BSLASH,
    ACTIONS(911), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(924), 1,
      anon_sym_DQUOTE,
    STATE(177), 3,
      sym_quoted_string_content,
      sym_template,
      aux_sym_quoted_string_repeat1,
    STATE(225), 3,
      sym_invalid_quoted_string_escaped_char,
      sym_quoted_string_escaped_char,
      aux_sym_quoted_string_content_repeat1,
  [8236] = 8,
    ACTIONS(222), 1,
      sym_comment,
    ACTIONS(926), 1,
      anon_sym_COLON,
    ACTIONS(928), 1,
      anon_sym_COLON2,
    ACTIONS(930), 1,
      sym_key_string_text,
    ACTIONS(933), 1,
      anon_sym_BSLASH2,
    ACTIONS(936), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(224), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(179), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
  [8264] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(941), 1,
      anon_sym_BSLASH,
    ACTIONS(944), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(947), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(222), 1,
      aux_sym_value_string_text_repeat1,
    ACTIONS(939), 3,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
    STATE(180), 3,
      sym_value_string_text,
      sym_value_string_escaped_char,
      aux_sym_value_string_content_repeat1,
  [8290] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(949), 1,
      anon_sym_BSLASH,
    ACTIONS(951), 1,
      anon_sym_BQUOTE,
    ACTIONS(953), 1,
      aux_sym_oneline_string_text_token1,
    ACTIONS(955), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(182), 3,
      sym_oneline_string_content,
      sym_template,
      aux_sym_oneline_string_repeat1,
    STATE(218), 3,
      sym_oneline_string_text,
      sym_oneline_string_escaped_char,
      aux_sym_oneline_string_content_repeat1,
  [8316] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(949), 1,
      anon_sym_BSLASH,
    ACTIONS(953), 1,
      aux_sym_oneline_string_text_token1,
    ACTIONS(955), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(957), 1,
      anon_sym_BQUOTE,
    STATE(188), 3,
      sym_oneline_string_content,
      sym_template,
      aux_sym_oneline_string_repeat1,
    STATE(218), 3,
      sym_oneline_string_text,
      sym_oneline_string_escaped_char,
      aux_sym_oneline_string_content_repeat1,
  [8342] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(907), 1,
      sym_quoted_string_text,
    ACTIONS(909), 1,
      anon_sym_BSLASH,
    ACTIONS(911), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(959), 1,
      anon_sym_DQUOTE,
    STATE(177), 3,
      sym_quoted_string_content,
      sym_template,
      aux_sym_quoted_string_repeat1,
    STATE(225), 3,
      sym_invalid_quoted_string_escaped_char,
      sym_quoted_string_escaped_char,
      aux_sym_quoted_string_content_repeat1,
  [8368] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(788), 1,
      anon_sym_BSLASH,
    ACTIONS(790), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(963), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(222), 1,
      aux_sym_value_string_text_repeat1,
    ACTIONS(961), 3,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
    STATE(180), 3,
      sym_value_string_text,
      sym_value_string_escaped_char,
      aux_sym_value_string_content_repeat1,
  [8394] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(965), 1,
      anon_sym_SEMI,
    ACTIONS(967), 1,
      anon_sym_BSLASH,
    ACTIONS(969), 1,
      sym_filename_text,
    ACTIONS(971), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(550), 1,
      sym_filename,
    STATE(234), 2,
      sym_filename_escaped_char,
      aux_sym_filename_content_repeat1,
    STATE(192), 3,
      sym_filename_content,
      sym_template,
      aux_sym_filename_repeat1,
  [8422] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(967), 1,
      anon_sym_BSLASH,
    ACTIONS(969), 1,
      sym_filename_text,
    ACTIONS(971), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(973), 1,
      anon_sym_SEMI,
    STATE(579), 1,
      sym_filename,
    STATE(234), 2,
      sym_filename_escaped_char,
      aux_sym_filename_content_repeat1,
    STATE(192), 3,
      sym_filename_content,
      sym_template,
      aux_sym_filename_repeat1,
  [8450] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(907), 1,
      sym_quoted_string_text,
    ACTIONS(909), 1,
      anon_sym_BSLASH,
    ACTIONS(911), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(975), 1,
      anon_sym_DQUOTE,
    STATE(183), 3,
      sym_quoted_string_content,
      sym_template,
      aux_sym_quoted_string_repeat1,
    STATE(225), 3,
      sym_invalid_quoted_string_escaped_char,
      sym_quoted_string_escaped_char,
      aux_sym_quoted_string_content_repeat1,
  [8476] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(977), 1,
      anon_sym_BSLASH,
    ACTIONS(980), 1,
      anon_sym_BQUOTE,
    ACTIONS(982), 1,
      aux_sym_oneline_string_text_token1,
    ACTIONS(985), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(188), 3,
      sym_oneline_string_content,
      sym_template,
      aux_sym_oneline_string_repeat1,
    STATE(218), 3,
      sym_oneline_string_text,
      sym_oneline_string_escaped_char,
      aux_sym_oneline_string_content_repeat1,
  [8502] = 8,
    ACTIONS(47), 1,
      anon_sym_BSLASH2,
    ACTIONS(222), 1,
      sym_comment,
    ACTIONS(305), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(839), 1,
      sym_key_string_text,
    ACTIONS(988), 1,
      anon_sym_COLON,
    ACTIONS(990), 1,
      anon_sym_COLON2,
    STATE(224), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(179), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
  [8530] = 8,
    ACTIONS(47), 1,
      anon_sym_BSLASH2,
    ACTIONS(222), 1,
      sym_comment,
    ACTIONS(305), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(839), 1,
      sym_key_string_text,
    STATE(511), 1,
      sym_key_string,
    STATE(594), 1,
      sym_key_value,
    STATE(224), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(189), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
  [8558] = 8,
    ACTIONS(47), 1,
      anon_sym_BSLASH2,
    ACTIONS(222), 1,
      sym_comment,
    ACTIONS(305), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(839), 1,
      sym_key_string_text,
    STATE(396), 1,
      sym_key_value,
    STATE(511), 1,
      sym_key_string,
    STATE(224), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(189), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
  [8586] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(967), 1,
      anon_sym_BSLASH,
    ACTIONS(969), 1,
      sym_filename_text,
    ACTIONS(971), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(992), 1,
      anon_sym_SEMI,
    STATE(234), 2,
      sym_filename_escaped_char,
      aux_sym_filename_content_repeat1,
    STATE(196), 3,
      sym_filename_content,
      sym_template,
      aux_sym_filename_repeat1,
  [8611] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(996), 1,
      aux_sym_invalid_quoted_string_escaped_char_token1,
    ACTIONS(998), 1,
      anon_sym_u,
    ACTIONS(994), 7,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
      anon_sym_b,
      anon_sym_f,
      anon_sym_n,
      anon_sym_r,
      anon_sym_t,
  [8630] = 7,
    ACTIONS(222), 1,
      sym_comment,
    ACTIONS(926), 1,
      anon_sym_COLON2,
    ACTIONS(1000), 1,
      sym_key_string_text,
    ACTIONS(1003), 1,
      anon_sym_BSLASH2,
    ACTIONS(1006), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(241), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(194), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
  [8655] = 7,
    ACTIONS(222), 1,
      sym_comment,
    ACTIONS(511), 1,
      anon_sym_BSLASH2,
    ACTIONS(513), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(988), 1,
      anon_sym_COLON2,
    ACTIONS(1009), 1,
      sym_key_string_text,
    STATE(241), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(194), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
  [8680] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1011), 1,
      anon_sym_SEMI,
    ACTIONS(1013), 1,
      anon_sym_BSLASH,
    ACTIONS(1016), 1,
      sym_filename_text,
    ACTIONS(1019), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(234), 2,
      sym_filename_escaped_char,
      aux_sym_filename_content_repeat1,
    STATE(196), 3,
      sym_filename_content,
      sym_template,
      aux_sym_filename_repeat1,
  [8705] = 6,
    ACTIONS(1022), 1,
      anon_sym_BSLASH,
    ACTIONS(1025), 1,
      sym_filename_text,
    ACTIONS(1028), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1011), 2,
      anon_sym_LF,
      sym_comment,
    STATE(247), 2,
      sym_filename_escaped_char,
      aux_sym_filename_content_repeat1,
    STATE(197), 3,
      sym_filename_content,
      sym_template,
      aux_sym_filename_repeat1,
  [8728] = 7,
    ACTIONS(926), 1,
      anon_sym_LF,
    ACTIONS(928), 1,
      sym_comment,
    ACTIONS(1031), 1,
      sym_key_string_text,
    ACTIONS(1034), 1,
      anon_sym_BSLASH2,
    ACTIONS(1037), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(243), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(198), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
  [8753] = 6,
    ACTIONS(858), 1,
      anon_sym_BSLASH,
    ACTIONS(860), 1,
      sym_filename_text,
    ACTIONS(862), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(992), 2,
      anon_sym_LF,
      sym_comment,
    STATE(247), 2,
      sym_filename_escaped_char,
      aux_sym_filename_content_repeat1,
    STATE(197), 3,
      sym_filename_content,
      sym_template,
      aux_sym_filename_repeat1,
  [8776] = 7,
    ACTIONS(57), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(758), 1,
      anon_sym_BSLASH2,
    ACTIONS(988), 1,
      anon_sym_LF,
    ACTIONS(990), 1,
      sym_comment,
    ACTIONS(1040), 1,
      sym_key_string_text,
    STATE(243), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(198), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
  [8801] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1044), 1,
      anon_sym_u,
    ACTIONS(1046), 1,
      anon_sym_POUND,
    ACTIONS(1042), 6,
      anon_sym_BSLASH,
      anon_sym_b,
      anon_sym_f,
      anon_sym_n,
      anon_sym_r,
      anon_sym_t,
  [8819] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1048), 1,
      anon_sym_LF,
    STATE(530), 1,
      sym_multiline_string_type,
    ACTIONS(1050), 6,
      anon_sym_base64,
      anon_sym_hex,
      anon_sym_json,
      anon_sym_xml,
      anon_sym_graphql,
      aux_sym_multiline_string_type_token1,
  [8837] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1052), 1,
      anon_sym_LF,
    ACTIONS(1055), 1,
      anon_sym_BSLASH,
    ACTIONS(1058), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(1060), 1,
      aux_sym__multiline_string_text_token1,
    ACTIONS(1063), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(203), 3,
      sym__multiline_string_text,
      sym_multiline_string_escaped_char,
      aux_sym_multiline_string_content_repeat1,
  [8861] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1069), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(211), 1,
      aux_sym__multiline_string_text_repeat1,
    ACTIONS(1067), 2,
      anon_sym_BQUOTE,
      anon_sym_LBRACE,
    ACTIONS(1065), 4,
      anon_sym_LF,
      anon_sym_BSLASH,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      aux_sym__multiline_string_text_token1,
  [8881] = 3,
    ACTIONS(222), 1,
      sym_comment,
    ACTIONS(1073), 1,
      anon_sym_u,
    ACTIONS(1071), 7,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
      anon_sym_b,
      anon_sym_f,
      anon_sym_n,
      anon_sym_r,
      anon_sym_t,
  [8897] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1075), 1,
      anon_sym_DQUOTE,
    ACTIONS(1077), 1,
      anon_sym_BSLASH,
    ACTIONS(1080), 1,
      sym_json_string_text,
    ACTIONS(1083), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(314), 1,
      sym_json_string_escaped_char,
    STATE(206), 3,
      sym_json_string_content,
      sym_template,
      aux_sym_json_string_repeat1,
  [8921] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1086), 1,
      anon_sym_DQUOTE,
    ACTIONS(1088), 1,
      anon_sym_BSLASH,
    ACTIONS(1090), 1,
      sym_json_string_text,
    ACTIONS(1092), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(314), 1,
      sym_json_string_escaped_char,
    STATE(206), 3,
      sym_json_string_content,
      sym_template,
      aux_sym_json_string_repeat1,
  [8945] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1088), 1,
      anon_sym_BSLASH,
    ACTIONS(1090), 1,
      sym_json_string_text,
    ACTIONS(1092), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1094), 1,
      anon_sym_DQUOTE,
    STATE(314), 1,
      sym_json_string_escaped_char,
    STATE(206), 3,
      sym_json_string_content,
      sym_template,
      aux_sym_json_string_repeat1,
  [8969] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1088), 1,
      anon_sym_BSLASH,
    ACTIONS(1090), 1,
      sym_json_string_text,
    ACTIONS(1092), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1096), 1,
      anon_sym_DQUOTE,
    STATE(314), 1,
      sym_json_string_escaped_char,
    STATE(208), 3,
      sym_json_string_content,
      sym_template,
      aux_sym_json_string_repeat1,
  [8993] = 3,
    ACTIONS(222), 1,
      sym_comment,
    ACTIONS(1100), 1,
      anon_sym_u,
    ACTIONS(1098), 7,
      anon_sym_BSLASH,
      anon_sym_b,
      anon_sym_f,
      anon_sym_n,
      anon_sym_r,
      anon_sym_t,
      anon_sym_BQUOTE,
  [9009] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1107), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(211), 1,
      aux_sym__multiline_string_text_repeat1,
    ACTIONS(1104), 2,
      anon_sym_BQUOTE,
      anon_sym_LBRACE,
    ACTIONS(1102), 4,
      anon_sym_LF,
      anon_sym_BSLASH,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      aux_sym__multiline_string_text_token1,
  [9029] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1113), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(204), 1,
      aux_sym__multiline_string_text_repeat1,
    ACTIONS(1111), 2,
      anon_sym_BQUOTE,
      anon_sym_LBRACE,
    ACTIONS(1109), 4,
      anon_sym_LF,
      anon_sym_BSLASH,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      aux_sym__multiline_string_text_token1,
  [9049] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1088), 1,
      anon_sym_BSLASH,
    ACTIONS(1090), 1,
      sym_json_string_text,
    ACTIONS(1092), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1115), 1,
      anon_sym_DQUOTE,
    STATE(314), 1,
      sym_json_string_escaped_char,
    STATE(207), 3,
      sym_json_string_content,
      sym_template,
      aux_sym_json_string_repeat1,
  [9073] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1119), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(203), 3,
      sym__multiline_string_text,
      sym_multiline_string_escaped_char,
      aux_sym_multiline_string_content_repeat1,
    ACTIONS(1117), 4,
      anon_sym_LF,
      anon_sym_BSLASH,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      aux_sym__multiline_string_text_token1,
  [9091] = 6,
    ACTIONS(947), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1121), 1,
      anon_sym_BSLASH,
    ACTIONS(1124), 1,
      aux_sym_value_string_text_token1,
    STATE(268), 1,
      aux_sym_value_string_text_repeat1,
    ACTIONS(939), 2,
      anon_sym_LF,
      sym_comment,
    STATE(215), 3,
      sym_value_string_text,
      sym_value_string_escaped_char,
      aux_sym_value_string_content_repeat1,
  [9113] = 6,
    ACTIONS(748), 1,
      anon_sym_BSLASH,
    ACTIONS(750), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(963), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(268), 1,
      aux_sym_value_string_text_repeat1,
    ACTIONS(961), 2,
      anon_sym_LF,
      sym_comment,
    STATE(215), 3,
      sym_value_string_text,
      sym_value_string_escaped_char,
      aux_sym_value_string_content_repeat1,
  [9135] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1129), 1,
      anon_sym_u,
    ACTIONS(1131), 1,
      anon_sym_POUND,
    ACTIONS(1127), 6,
      anon_sym_BSLASH,
      anon_sym_b,
      anon_sym_f,
      anon_sym_n,
      anon_sym_r,
      anon_sym_t,
  [9153] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1135), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1133), 3,
      anon_sym_BSLASH,
      anon_sym_BQUOTE,
      aux_sym_oneline_string_text_token1,
    STATE(223), 3,
      sym_oneline_string_text,
      sym_oneline_string_escaped_char,
      aux_sym_oneline_string_content_repeat1,
  [9170] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1139), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(1142), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(219), 1,
      aux_sym_value_string_text_repeat1,
    ACTIONS(1137), 4,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      anon_sym_BSLASH,
  [9189] = 6,
    ACTIONS(222), 1,
      sym_comment,
    ACTIONS(1146), 1,
      anon_sym_COLON2,
    ACTIONS(1148), 1,
      sym_key_string_text,
    ACTIONS(1151), 1,
      anon_sym_BSLASH2,
    ACTIONS(1144), 2,
      anon_sym_COLON,
      anon_sym_LBRACE_LBRACE,
    STATE(220), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
  [9210] = 4,
    ACTIONS(222), 1,
      sym_comment,
    ACTIONS(1154), 1,
      sym_digit,
    STATE(221), 1,
      aux_sym_integer_repeat1,
    ACTIONS(462), 5,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_e,
      anon_sym_E,
  [9227] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1159), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(1161), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(219), 1,
      aux_sym_value_string_text_repeat1,
    ACTIONS(1157), 4,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      anon_sym_BSLASH,
  [9246] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1163), 1,
      anon_sym_BSLASH,
    ACTIONS(1166), 1,
      anon_sym_BQUOTE,
    ACTIONS(1168), 1,
      aux_sym_oneline_string_text_token1,
    ACTIONS(1171), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(223), 3,
      sym_oneline_string_text,
      sym_oneline_string_escaped_char,
      aux_sym_oneline_string_content_repeat1,
  [9267] = 4,
    ACTIONS(222), 1,
      sym_comment,
    ACTIONS(1175), 1,
      anon_sym_COLON2,
    STATE(220), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    ACTIONS(1173), 4,
      anon_sym_COLON,
      sym_key_string_text,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
  [9284] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(909), 1,
      anon_sym_BSLASH,
    ACTIONS(1179), 1,
      sym_quoted_string_text,
    ACTIONS(1177), 2,
      anon_sym_DQUOTE,
      anon_sym_LBRACE_LBRACE,
    STATE(228), 3,
      sym_invalid_quoted_string_escaped_char,
      sym_quoted_string_escaped_char,
      aux_sym_quoted_string_content_repeat1,
  [9303] = 4,
    ACTIONS(222), 1,
      sym_comment,
    ACTIONS(1181), 1,
      sym_digit,
    STATE(221), 1,
      aux_sym_integer_repeat1,
    ACTIONS(469), 5,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_e,
      anon_sym_E,
  [9320] = 8,
    ACTIONS(222), 1,
      sym_comment,
    ACTIONS(825), 1,
      anon_sym_DQUOTE,
    ACTIONS(1183), 1,
      anon_sym_RBRACE,
    ACTIONS(1185), 1,
      anon_sym_COMMA,
    STATE(383), 1,
      aux_sym_json_object_repeat1,
    STATE(384), 1,
      sym_json_key_value,
    STATE(526), 1,
      sym_json_string,
    STATE(527), 1,
      sym_json_key_string,
  [9345] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1189), 1,
      sym_quoted_string_text,
    ACTIONS(1192), 1,
      anon_sym_BSLASH,
    ACTIONS(1187), 2,
      anon_sym_DQUOTE,
      anon_sym_LBRACE_LBRACE,
    STATE(228), 3,
      sym_invalid_quoted_string_escaped_char,
      sym_quoted_string_escaped_char,
      aux_sym_quoted_string_content_repeat1,
  [9364] = 8,
    ACTIONS(222), 1,
      sym_comment,
    ACTIONS(825), 1,
      anon_sym_DQUOTE,
    ACTIONS(1185), 1,
      anon_sym_COMMA,
    ACTIONS(1195), 1,
      anon_sym_RBRACE,
    STATE(389), 1,
      sym_json_key_value,
    STATE(390), 1,
      aux_sym_json_object_repeat1,
    STATE(526), 1,
      sym_json_string,
    STATE(527), 1,
      sym_json_key_string,
  [9389] = 6,
    ACTIONS(222), 1,
      sym_comment,
    ACTIONS(1199), 1,
      anon_sym_DOT,
    STATE(276), 1,
      sym_fraction,
    STATE(428), 1,
      sym_exponent,
    ACTIONS(1197), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
    ACTIONS(1201), 2,
      anon_sym_e,
      anon_sym_E,
  [9410] = 6,
    ACTIONS(222), 1,
      sym_comment,
    ACTIONS(1203), 1,
      anon_sym_DOT,
    STATE(262), 1,
      sym_fraction,
    STATE(428), 1,
      sym_exponent,
    ACTIONS(1197), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(1205), 2,
      anon_sym_e,
      anon_sym_E,
  [9431] = 4,
    ACTIONS(1209), 1,
      anon_sym_BSLASH,
    ACTIONS(1212), 1,
      sym_filename_text,
    STATE(232), 2,
      sym_filename_escaped_char,
      aux_sym_filename_content_repeat1,
    ACTIONS(1207), 3,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
      sym_comment,
  [9447] = 6,
    ACTIONS(222), 1,
      sym_comment,
    ACTIONS(732), 1,
      anon_sym_DQUOTE,
    ACTIONS(738), 1,
      sym_digit,
    STATE(112), 1,
      aux_sym_integer_repeat1,
    STATE(402), 1,
      sym_integer,
    STATE(493), 2,
      sym_quoted_string,
      sym_float,
  [9467] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(255), 2,
      sym_filename_escaped_char,
      aux_sym_filename_content_repeat1,
    ACTIONS(1215), 4,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      sym_filename_text,
      anon_sym_LBRACE_LBRACE,
  [9481] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1219), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1217), 5,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      anon_sym_BSLASH,
      aux_sym_value_string_text_token1,
  [9495] = 5,
    ACTIONS(222), 1,
      sym_comment,
    ACTIONS(728), 1,
      anon_sym_base64_COMMA,
    ACTIONS(730), 1,
      anon_sym_hex_COMMA,
    ACTIONS(732), 1,
      anon_sym_DQUOTE,
    STATE(486), 3,
      sym_oneline_base64,
      sym_oneline_hex,
      sym_quoted_string,
  [9513] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1223), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1221), 5,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      anon_sym_BSLASH,
      aux_sym_value_string_text_token1,
  [9527] = 5,
    ACTIONS(222), 1,
      sym_comment,
    ACTIONS(1225), 1,
      sym_key_string_text,
    ACTIONS(1228), 1,
      anon_sym_BSLASH2,
    ACTIONS(1144), 2,
      anon_sym_COLON2,
      anon_sym_LBRACE_LBRACE,
    STATE(238), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
  [9545] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1233), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1231), 5,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      anon_sym_BSLASH,
      aux_sym_value_string_text_token1,
  [9559] = 5,
    ACTIONS(1146), 1,
      sym_comment,
    ACTIONS(1235), 1,
      sym_key_string_text,
    ACTIONS(1238), 1,
      anon_sym_BSLASH2,
    ACTIONS(1144), 2,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    STATE(240), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
  [9577] = 3,
    ACTIONS(222), 1,
      sym_comment,
    STATE(238), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    ACTIONS(1173), 4,
      anon_sym_COLON2,
      sym_key_string_text,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
  [9591] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1241), 1,
      anon_sym_BSLASH,
    ACTIONS(1243), 1,
      anon_sym_SLASH,
    ACTIONS(1245), 1,
      sym_regex_text,
    STATE(556), 1,
      sym_regex_content,
    STATE(271), 2,
      sym_regex_escaped_char,
      aux_sym_regex_content_repeat1,
  [9611] = 3,
    ACTIONS(1175), 1,
      sym_comment,
    STATE(240), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    ACTIONS(1173), 4,
      anon_sym_LF,
      sym_key_string_text,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
  [9625] = 6,
    ACTIONS(222), 1,
      sym_comment,
    ACTIONS(732), 1,
      anon_sym_DQUOTE,
    ACTIONS(738), 1,
      sym_digit,
    STATE(112), 1,
      aux_sym_integer_repeat1,
    STATE(404), 1,
      sym_integer,
    STATE(489), 2,
      sym_quoted_string,
      sym_float,
  [9645] = 5,
    ACTIONS(222), 1,
      sym_comment,
    ACTIONS(728), 1,
      anon_sym_base64_COMMA,
    ACTIONS(730), 1,
      anon_sym_hex_COMMA,
    ACTIONS(732), 1,
      anon_sym_DQUOTE,
    STATE(487), 3,
      sym_oneline_base64,
      sym_oneline_hex,
      sym_quoted_string,
  [9663] = 4,
    ACTIONS(222), 1,
      sym_comment,
    ACTIONS(473), 1,
      sym_digit,
    STATE(56), 1,
      aux_sym_integer_repeat1,
    ACTIONS(1247), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_e,
      anon_sym_E,
  [9679] = 2,
    STATE(232), 2,
      sym_filename_escaped_char,
      aux_sym_filename_content_repeat1,
    ACTIONS(1215), 5,
      anon_sym_LF,
      anon_sym_BSLASH,
      sym_filename_text,
      anon_sym_LBRACE_LBRACE,
      sym_comment,
  [9691] = 4,
    ACTIONS(222), 1,
      sym_comment,
    ACTIONS(1181), 1,
      sym_digit,
    STATE(221), 1,
      aux_sym_integer_repeat1,
    ACTIONS(1247), 4,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_e,
      anon_sym_E,
  [9707] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1251), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1249), 5,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      anon_sym_BSLASH,
      aux_sym_value_string_text_token1,
  [9721] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1255), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1253), 5,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      anon_sym_BSLASH,
      aux_sym_value_string_text_token1,
  [9735] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1259), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1257), 5,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      anon_sym_BSLASH,
      aux_sym_value_string_text_token1,
  [9749] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1263), 1,
      anon_sym_u,
    ACTIONS(1265), 1,
      anon_sym_POUND,
    ACTIONS(1261), 4,
      anon_sym_BSLASH,
      anon_sym_b,
      anon_sym_f,
      anon_sym_BQUOTE,
  [9765] = 6,
    ACTIONS(222), 1,
      sym_comment,
    ACTIONS(732), 1,
      anon_sym_DQUOTE,
    ACTIONS(738), 1,
      sym_digit,
    STATE(112), 1,
      aux_sym_integer_repeat1,
    STATE(400), 1,
      sym_integer,
    STATE(494), 2,
      sym_quoted_string,
      sym_float,
  [9785] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1269), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1267), 5,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      anon_sym_BSLASH,
      aux_sym_value_string_text_token1,
  [9799] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1271), 1,
      anon_sym_BSLASH,
    ACTIONS(1274), 1,
      sym_filename_text,
    ACTIONS(1207), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE_LBRACE,
    STATE(255), 2,
      sym_filename_escaped_char,
      aux_sym_filename_content_repeat1,
  [9817] = 6,
    ACTIONS(1197), 1,
      anon_sym_LF,
    ACTIONS(1277), 1,
      anon_sym_DOT,
    ACTIONS(1281), 1,
      sym_comment,
    STATE(286), 1,
      sym_fraction,
    STATE(518), 1,
      sym_exponent,
    ACTIONS(1279), 2,
      anon_sym_e,
      anon_sym_E,
  [9837] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1241), 1,
      anon_sym_BSLASH,
    ACTIONS(1245), 1,
      sym_regex_text,
    ACTIONS(1283), 1,
      anon_sym_SLASH,
    STATE(539), 1,
      sym_regex_content,
    STATE(271), 2,
      sym_regex_escaped_char,
      aux_sym_regex_content_repeat1,
  [9857] = 6,
    ACTIONS(222), 1,
      sym_comment,
    ACTIONS(732), 1,
      anon_sym_DQUOTE,
    ACTIONS(738), 1,
      sym_digit,
    STATE(112), 1,
      aux_sym_integer_repeat1,
    STATE(398), 1,
      sym_integer,
    STATE(512), 2,
      sym_quoted_string,
      sym_float,
  [9877] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1287), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1285), 5,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      anon_sym_BSLASH,
      aux_sym_value_string_text_token1,
  [9891] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1291), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1289), 5,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      anon_sym_BSLASH,
      aux_sym_value_string_text_token1,
  [9905] = 6,
    ACTIONS(35), 1,
      anon_sym_LT,
    ACTIONS(222), 1,
      sym_comment,
    ACTIONS(1293), 1,
      anon_sym_LT_QMARK,
    STATE(127), 1,
      sym_xml_open_tag,
    STATE(517), 1,
      sym_xml_tag,
    STATE(283), 2,
      sym_xml_prolog_tag,
      aux_sym_xml_repeat1,
  [9925] = 4,
    ACTIONS(222), 1,
      sym_comment,
    STATE(342), 1,
      sym_exponent,
    ACTIONS(1205), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(1295), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [9940] = 3,
    ACTIONS(222), 1,
      sym_comment,
    ACTIONS(1289), 1,
      anon_sym_COLON2,
    ACTIONS(1291), 4,
      anon_sym_COLON,
      sym_key_string_text,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
  [9953] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1291), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1289), 4,
      anon_sym_LF,
      anon_sym_BSLASH,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      aux_sym__multiline_string_text_token1,
  [9966] = 4,
    ACTIONS(710), 1,
      sym_digit,
    ACTIONS(1247), 1,
      anon_sym_LF,
    STATE(111), 1,
      aux_sym_integer_repeat1,
    ACTIONS(1297), 3,
      anon_sym_e,
      anon_sym_E,
      sym_comment,
  [9981] = 4,
    ACTIONS(1299), 1,
      anon_sym_LF,
    ACTIONS(1302), 1,
      sym_comment,
    STATE(266), 1,
      aux_sym__comment_or_new_line_repeat1,
    ACTIONS(166), 3,
      sym_key_string_text,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
  [9996] = 2,
    ACTIONS(1289), 1,
      sym_comment,
    ACTIONS(1291), 5,
      anon_sym_LF,
      anon_sym_COLON,
      sym_key_string_text,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
  [10007] = 4,
    ACTIONS(1161), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1305), 1,
      aux_sym_value_string_text_token1,
    STATE(272), 1,
      aux_sym_value_string_text_repeat1,
    ACTIONS(1157), 3,
      anon_sym_LF,
      anon_sym_BSLASH,
      sym_comment,
  [10022] = 3,
    ACTIONS(222), 1,
      sym_comment,
    ACTIONS(1309), 1,
      anon_sym_COLON2,
    ACTIONS(1307), 4,
      anon_sym_COLON,
      sym_key_string_text,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
  [10035] = 3,
    ACTIONS(1311), 1,
      anon_sym_LF,
    ACTIONS(1315), 1,
      sym_comment,
    ACTIONS(1313), 4,
      anon_sym_COLON,
      sym_key_string_text,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
  [10048] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1241), 1,
      anon_sym_BSLASH,
    ACTIONS(1317), 1,
      anon_sym_SLASH,
    ACTIONS(1319), 1,
      sym_regex_text,
    STATE(275), 2,
      sym_regex_escaped_char,
      aux_sym_regex_content_repeat1,
  [10065] = 4,
    ACTIONS(1142), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1321), 1,
      aux_sym_value_string_text_token1,
    STATE(272), 1,
      aux_sym_value_string_text_repeat1,
    ACTIONS(1137), 3,
      anon_sym_LF,
      anon_sym_BSLASH,
      sym_comment,
  [10080] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(885), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(1326), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1324), 3,
      anon_sym_LF,
      anon_sym_BSLASH,
      aux_sym__multiline_string_text_token1,
  [10095] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1251), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1249), 4,
      anon_sym_LF,
      anon_sym_BSLASH,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      aux_sym__multiline_string_text_token1,
  [10108] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1328), 1,
      anon_sym_BSLASH,
    ACTIONS(1331), 1,
      anon_sym_SLASH,
    ACTIONS(1333), 1,
      sym_regex_text,
    STATE(275), 2,
      sym_regex_escaped_char,
      aux_sym_regex_content_repeat1,
  [10125] = 4,
    ACTIONS(222), 1,
      sym_comment,
    STATE(342), 1,
      sym_exponent,
    ACTIONS(1201), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(1295), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [10140] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1338), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1336), 4,
      anon_sym_LF,
      anon_sym_BSLASH,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      aux_sym__multiline_string_text_token1,
  [10153] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1326), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1340), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(1324), 3,
      anon_sym_LF,
      anon_sym_BSLASH,
      aux_sym__multiline_string_text_token1,
  [10168] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(868), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(1326), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1324), 3,
      anon_sym_LF,
      anon_sym_BSLASH,
      aux_sym__multiline_string_text_token1,
  [10183] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1344), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1342), 4,
      anon_sym_LF,
      anon_sym_BSLASH,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      aux_sym__multiline_string_text_token1,
  [10196] = 4,
    ACTIONS(1346), 1,
      anon_sym_LF,
    ACTIONS(1348), 1,
      sym_comment,
    STATE(266), 1,
      aux_sym__comment_or_new_line_repeat1,
    ACTIONS(176), 3,
      sym_key_string_text,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
  [10211] = 5,
    ACTIONS(15), 1,
      anon_sym_LF,
    ACTIONS(63), 1,
      sym_comment,
    STATE(38), 1,
      sym__comment_or_new_line,
    STATE(53), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(305), 1,
      aux_sym_multipart_form_data_section_repeat1,
  [10227] = 4,
    ACTIONS(222), 1,
      sym_comment,
    ACTIONS(1350), 1,
      anon_sym_LT,
    ACTIONS(1352), 1,
      anon_sym_LT_QMARK,
    STATE(283), 2,
      sym_xml_prolog_tag,
      aux_sym_xml_repeat1,
  [10241] = 4,
    ACTIONS(222), 1,
      sym_comment,
    ACTIONS(1355), 1,
      sym_digit,
    STATE(434), 1,
      aux_sym_integer_repeat1,
    ACTIONS(1357), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [10255] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1291), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1289), 3,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
      sym_json_string_text,
  [10267] = 4,
    ACTIONS(1295), 1,
      anon_sym_LF,
    ACTIONS(1359), 1,
      sym_comment,
    STATE(474), 1,
      sym_exponent,
    ACTIONS(1279), 2,
      anon_sym_e,
      anon_sym_E,
  [10281] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1363), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1361), 3,
      anon_sym_BSLASH,
      anon_sym_BQUOTE,
      aux_sym_oneline_string_text_token1,
  [10293] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1367), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1365), 3,
      anon_sym_BSLASH,
      anon_sym_BQUOTE,
      aux_sym_oneline_string_text_token1,
  [10305] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1291), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1289), 3,
      anon_sym_BSLASH,
      anon_sym_BQUOTE,
      aux_sym_oneline_string_text_token1,
  [10317] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1249), 4,
      anon_sym_DQUOTE,
      sym_quoted_string_text,
      anon_sym_BSLASH,
      anon_sym_LBRACE_LBRACE,
  [10327] = 4,
    ACTIONS(222), 1,
      sym_comment,
    ACTIONS(1181), 1,
      sym_digit,
    STATE(221), 1,
      aux_sym_integer_repeat1,
    ACTIONS(1369), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [10341] = 5,
    ACTIONS(15), 1,
      anon_sym_LF,
    ACTIONS(63), 1,
      sym_comment,
    STATE(47), 1,
      sym__comment_or_new_line,
    STATE(53), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(310), 1,
      aux_sym_query_string_params_section_repeat1,
  [10357] = 2,
    ACTIONS(222), 1,
      sym_comment,
    ACTIONS(1371), 4,
      anon_sym_COLON2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [10367] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1375), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1373), 3,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
      sym_json_string_text,
  [10379] = 2,
    ACTIONS(1251), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1249), 4,
      anon_sym_LF,
      anon_sym_BSLASH,
      aux_sym_value_string_text_token1,
      sym_comment,
  [10389] = 2,
    ACTIONS(1379), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1377), 4,
      anon_sym_LF,
      anon_sym_BSLASH,
      aux_sym_value_string_text_token1,
      sym_comment,
  [10399] = 5,
    ACTIONS(222), 1,
      sym_comment,
    ACTIONS(825), 1,
      anon_sym_DQUOTE,
    STATE(435), 1,
      sym_json_key_value,
    STATE(526), 1,
      sym_json_string,
    STATE(527), 1,
      sym_json_key_string,
  [10415] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1289), 4,
      anon_sym_DQUOTE,
      sym_quoted_string_text,
      anon_sym_BSLASH,
      anon_sym_LBRACE_LBRACE,
  [10425] = 4,
    ACTIONS(15), 1,
      anon_sym_LF,
    ACTIONS(63), 1,
      sym_comment,
    STATE(53), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(2), 2,
      sym__comment_or_new_line,
      aux_sym_hurl_file_repeat2,
  [10439] = 2,
    ACTIONS(222), 1,
      sym_comment,
    ACTIONS(1291), 4,
      anon_sym_COLON2,
      sym_key_string_text,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
  [10449] = 1,
    ACTIONS(1289), 5,
      anon_sym_LF,
      anon_sym_BSLASH,
      sym_filename_text,
      anon_sym_LBRACE_LBRACE,
      sym_comment,
  [10457] = 5,
    ACTIONS(1381), 1,
      anon_sym_LF,
    ACTIONS(1384), 1,
      sym_comment,
    STATE(167), 1,
      sym__comment_or_new_line,
    STATE(281), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(302), 1,
      aux_sym_multipart_form_data_section_repeat1,
  [10473] = 4,
    ACTIONS(222), 1,
      sym_comment,
    ACTIONS(1387), 1,
      anon_sym_DQUOTE,
    ACTIONS(1389), 1,
      anon_sym_SLASH,
    STATE(79), 2,
      sym_quoted_string,
      sym_regex,
  [10487] = 2,
    ACTIONS(222), 1,
      sym_comment,
    ACTIONS(1307), 4,
      anon_sym_COLON2,
      sym_key_string_text,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
  [10497] = 5,
    ACTIONS(15), 1,
      anon_sym_LF,
    ACTIONS(63), 1,
      sym_comment,
    STATE(37), 1,
      sym__comment_or_new_line,
    STATE(53), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(302), 1,
      aux_sym_multipart_form_data_section_repeat1,
  [10513] = 4,
    ACTIONS(222), 1,
      sym_comment,
    ACTIONS(1181), 1,
      sym_digit,
    STATE(221), 1,
      aux_sym_integer_repeat1,
    ACTIONS(1391), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [10527] = 5,
    ACTIONS(15), 1,
      anon_sym_LF,
    ACTIONS(63), 1,
      sym_comment,
    STATE(49), 1,
      sym__comment_or_new_line,
    STATE(53), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(310), 1,
      aux_sym_query_string_params_section_repeat1,
  [10543] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1393), 4,
      anon_sym_DQUOTE,
      sym_quoted_string_text,
      anon_sym_BSLASH,
      anon_sym_LBRACE_LBRACE,
  [10553] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1395), 4,
      anon_sym_DQUOTE,
      sym_quoted_string_text,
      anon_sym_BSLASH,
      anon_sym_LBRACE_LBRACE,
  [10563] = 5,
    ACTIONS(1397), 1,
      anon_sym_LF,
    ACTIONS(1400), 1,
      sym_comment,
    STATE(190), 1,
      sym__comment_or_new_line,
    STATE(281), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(310), 1,
      aux_sym_query_string_params_section_repeat1,
  [10579] = 5,
    ACTIONS(15), 1,
      anon_sym_LF,
    ACTIONS(63), 1,
      sym_comment,
    STATE(40), 1,
      sym__comment_or_new_line,
    STATE(53), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(310), 1,
      aux_sym_query_string_params_section_repeat1,
  [10595] = 4,
    ACTIONS(222), 1,
      sym_comment,
    ACTIONS(1403), 1,
      sym_digit,
    STATE(335), 1,
      aux_sym_integer_repeat1,
    ACTIONS(1405), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [10609] = 5,
    ACTIONS(15), 1,
      anon_sym_LF,
    ACTIONS(63), 1,
      sym_comment,
    STATE(45), 1,
      sym__comment_or_new_line,
    STATE(53), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(311), 1,
      aux_sym_query_string_params_section_repeat1,
  [10625] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1409), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1407), 3,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
      sym_json_string_text,
  [10637] = 5,
    ACTIONS(15), 1,
      anon_sym_LF,
    ACTIONS(63), 1,
      sym_comment,
    STATE(45), 1,
      sym__comment_or_new_line,
    STATE(53), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(310), 1,
      aux_sym_query_string_params_section_repeat1,
  [10653] = 5,
    ACTIONS(15), 1,
      anon_sym_LF,
    ACTIONS(63), 1,
      sym_comment,
    STATE(39), 1,
      sym__comment_or_new_line,
    STATE(53), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(307), 1,
      aux_sym_query_string_params_section_repeat1,
  [10669] = 2,
    ACTIONS(1223), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1221), 4,
      anon_sym_LF,
      anon_sym_BSLASH,
      aux_sym_value_string_text_token1,
      sym_comment,
  [10679] = 5,
    ACTIONS(15), 1,
      anon_sym_LF,
    ACTIONS(63), 1,
      sym_comment,
    STATE(39), 1,
      sym__comment_or_new_line,
    STATE(53), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(310), 1,
      aux_sym_query_string_params_section_repeat1,
  [10695] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1411), 4,
      anon_sym_DQUOTE,
      sym_quoted_string_text,
      anon_sym_BSLASH,
      anon_sym_LBRACE_LBRACE,
  [10705] = 4,
    ACTIONS(222), 1,
      sym_comment,
    ACTIONS(732), 1,
      anon_sym_DQUOTE,
    ACTIONS(1413), 1,
      anon_sym_SLASH,
    STATE(155), 2,
      sym_quoted_string,
      sym_regex,
  [10719] = 5,
    ACTIONS(15), 1,
      anon_sym_LF,
    ACTIONS(63), 1,
      sym_comment,
    STATE(38), 1,
      sym__comment_or_new_line,
    STATE(53), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(302), 1,
      aux_sym_multipart_form_data_section_repeat1,
  [10735] = 4,
    ACTIONS(222), 1,
      sym_comment,
    ACTIONS(732), 1,
      anon_sym_DQUOTE,
    ACTIONS(1413), 1,
      anon_sym_SLASH,
    STATE(480), 2,
      sym_quoted_string,
      sym_regex,
  [10749] = 4,
    ACTIONS(222), 1,
      sym_comment,
    ACTIONS(1415), 1,
      sym_digit,
    STATE(306), 1,
      aux_sym_integer_repeat1,
    ACTIONS(1417), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [10763] = 5,
    ACTIONS(15), 1,
      anon_sym_LF,
    ACTIONS(63), 1,
      sym_comment,
    STATE(44), 1,
      sym__comment_or_new_line,
    STATE(53), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(292), 1,
      aux_sym_query_string_params_section_repeat1,
  [10779] = 5,
    ACTIONS(15), 1,
      anon_sym_LF,
    ACTIONS(63), 1,
      sym_comment,
    STATE(44), 1,
      sym__comment_or_new_line,
    STATE(53), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(310), 1,
      aux_sym_query_string_params_section_repeat1,
  [10795] = 2,
    ACTIONS(1309), 1,
      sym_comment,
    ACTIONS(1307), 4,
      anon_sym_LF,
      sym_key_string_text,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
  [10805] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1289), 4,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      sym_filename_text,
      anon_sym_LBRACE_LBRACE,
  [10815] = 1,
    ACTIONS(1419), 5,
      anon_sym_LF,
      anon_sym_BSLASH,
      sym_filename_text,
      anon_sym_LBRACE_LBRACE,
      sym_comment,
  [10823] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1251), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1249), 3,
      anon_sym_BSLASH,
      anon_sym_BQUOTE,
      aux_sym_oneline_string_text_token1,
  [10835] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1419), 4,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      sym_filename_text,
      anon_sym_LBRACE_LBRACE,
  [10845] = 2,
    ACTIONS(222), 1,
      sym_comment,
    ACTIONS(1421), 4,
      anon_sym_COLON2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [10855] = 4,
    ACTIONS(222), 1,
      sym_comment,
    ACTIONS(473), 1,
      sym_digit,
    STATE(56), 1,
      aux_sym_integer_repeat1,
    ACTIONS(1369), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [10869] = 4,
    ACTIONS(222), 1,
      sym_comment,
    ACTIONS(732), 1,
      anon_sym_DQUOTE,
    ACTIONS(1413), 1,
      anon_sym_SLASH,
    STATE(152), 2,
      sym_quoted_string,
      sym_regex,
  [10883] = 4,
    ACTIONS(222), 1,
      sym_comment,
    ACTIONS(1387), 1,
      anon_sym_DQUOTE,
    ACTIONS(1389), 1,
      anon_sym_SLASH,
    STATE(469), 2,
      sym_quoted_string,
      sym_regex,
  [10897] = 4,
    ACTIONS(222), 1,
      sym_comment,
    ACTIONS(473), 1,
      sym_digit,
    STATE(56), 1,
      aux_sym_integer_repeat1,
    ACTIONS(1391), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [10911] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1425), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1423), 3,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
      sym_json_string_text,
  [10923] = 4,
    ACTIONS(222), 1,
      sym_comment,
    ACTIONS(1387), 1,
      anon_sym_DQUOTE,
    ACTIONS(1389), 1,
      anon_sym_SLASH,
    STATE(73), 2,
      sym_quoted_string,
      sym_regex,
  [10937] = 2,
    ACTIONS(1291), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1289), 4,
      anon_sym_LF,
      anon_sym_BSLASH,
      aux_sym_value_string_text_token1,
      sym_comment,
  [10947] = 2,
    ACTIONS(1255), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1253), 4,
      anon_sym_LF,
      anon_sym_BSLASH,
      aux_sym_value_string_text_token1,
      sym_comment,
  [10957] = 4,
    ACTIONS(222), 1,
      sym_comment,
    ACTIONS(1387), 1,
      anon_sym_DQUOTE,
    ACTIONS(1389), 1,
      anon_sym_SLASH,
    STATE(454), 2,
      sym_quoted_string,
      sym_regex,
  [10971] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1429), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1427), 3,
      anon_sym_BSLASH,
      anon_sym_BQUOTE,
      aux_sym_oneline_string_text_token1,
  [10983] = 2,
    ACTIONS(222), 1,
      sym_comment,
    ACTIONS(1431), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [10992] = 4,
    ACTIONS(222), 1,
      sym_comment,
    ACTIONS(1433), 1,
      anon_sym_COMMA,
    ACTIONS(1435), 1,
      anon_sym_RBRACK,
    STATE(424), 1,
      aux_sym_json_array_repeat1,
  [11005] = 4,
    ACTIONS(856), 1,
      sym_comment,
    ACTIONS(1437), 1,
      anon_sym_LF,
    STATE(15), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(19), 1,
      sym__comment_or_new_line,
  [11018] = 4,
    ACTIONS(222), 1,
      sym_comment,
    ACTIONS(1439), 1,
      aux_sym_variable_name_token1,
    STATE(107), 1,
      sym_variable_name,
    STATE(578), 1,
      sym_expr,
  [11031] = 4,
    ACTIONS(222), 1,
      sym_comment,
    ACTIONS(1439), 1,
      aux_sym_variable_name_token1,
    STATE(107), 1,
      sym_variable_name,
    STATE(577), 1,
      sym_expr,
  [11044] = 4,
    ACTIONS(856), 1,
      sym_comment,
    ACTIONS(1437), 1,
      anon_sym_LF,
    STATE(15), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(31), 1,
      sym__comment_or_new_line,
  [11057] = 4,
    ACTIONS(856), 1,
      sym_comment,
    ACTIONS(1437), 1,
      anon_sym_LF,
    STATE(15), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(30), 1,
      sym__comment_or_new_line,
  [11070] = 4,
    ACTIONS(222), 1,
      sym_comment,
    ACTIONS(1439), 1,
      aux_sym_variable_name_token1,
    STATE(107), 1,
      sym_variable_name,
    STATE(576), 1,
      sym_expr,
  [11083] = 4,
    ACTIONS(222), 1,
      sym_comment,
    ACTIONS(1439), 1,
      aux_sym_variable_name_token1,
    STATE(107), 1,
      sym_variable_name,
    STATE(575), 1,
      sym_expr,
  [11096] = 4,
    ACTIONS(856), 1,
      sym_comment,
    ACTIONS(1437), 1,
      anon_sym_LF,
    STATE(15), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(32), 1,
      sym__comment_or_new_line,
  [11109] = 4,
    ACTIONS(222), 1,
      sym_comment,
    ACTIONS(1439), 1,
      aux_sym_variable_name_token1,
    STATE(107), 1,
      sym_variable_name,
    STATE(574), 1,
      sym_expr,
  [11122] = 4,
    ACTIONS(856), 1,
      sym_comment,
    ACTIONS(1437), 1,
      anon_sym_LF,
    STATE(15), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(20), 1,
      sym__comment_or_new_line,
  [11135] = 4,
    ACTIONS(222), 1,
      sym_comment,
    ACTIONS(1439), 1,
      aux_sym_variable_name_token1,
    STATE(107), 1,
      sym_variable_name,
    STATE(573), 1,
      sym_expr,
  [11148] = 4,
    ACTIONS(856), 1,
      sym_comment,
    ACTIONS(1437), 1,
      anon_sym_LF,
    STATE(15), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(21), 1,
      sym__comment_or_new_line,
  [11161] = 4,
    ACTIONS(856), 1,
      sym_comment,
    ACTIONS(1437), 1,
      anon_sym_LF,
    STATE(15), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(22), 1,
      sym__comment_or_new_line,
  [11174] = 4,
    ACTIONS(856), 1,
      sym_comment,
    ACTIONS(1437), 1,
      anon_sym_LF,
    STATE(15), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(23), 1,
      sym__comment_or_new_line,
  [11187] = 4,
    ACTIONS(856), 1,
      sym_comment,
    ACTIONS(1437), 1,
      anon_sym_LF,
    STATE(15), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(24), 1,
      sym__comment_or_new_line,
  [11200] = 4,
    ACTIONS(856), 1,
      sym_comment,
    ACTIONS(1437), 1,
      anon_sym_LF,
    STATE(15), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(25), 1,
      sym__comment_or_new_line,
  [11213] = 4,
    ACTIONS(856), 1,
      sym_comment,
    ACTIONS(1437), 1,
      anon_sym_LF,
    STATE(15), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(26), 1,
      sym__comment_or_new_line,
  [11226] = 4,
    ACTIONS(856), 1,
      sym_comment,
    ACTIONS(1437), 1,
      anon_sym_LF,
    STATE(15), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(27), 1,
      sym__comment_or_new_line,
  [11239] = 4,
    ACTIONS(856), 1,
      sym_comment,
    ACTIONS(1437), 1,
      anon_sym_LF,
    STATE(15), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(28), 1,
      sym__comment_or_new_line,
  [11252] = 4,
    ACTIONS(222), 1,
      sym_comment,
    ACTIONS(1439), 1,
      aux_sym_variable_name_token1,
    STATE(107), 1,
      sym_variable_name,
    STATE(572), 1,
      sym_expr,
  [11265] = 4,
    ACTIONS(1441), 1,
      anon_sym_LF,
    ACTIONS(1443), 1,
      sym_comment,
    STATE(191), 1,
      sym__comment_or_new_line,
    STATE(281), 1,
      aux_sym__comment_or_new_line_repeat1,
  [11278] = 4,
    ACTIONS(703), 1,
      anon_sym_LF,
    ACTIONS(705), 1,
      sym_comment,
    STATE(124), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(555), 1,
      sym__comment_or_new_line,
  [11291] = 4,
    ACTIONS(7), 1,
      anon_sym_LF,
    ACTIONS(11), 1,
      sym_comment,
    STATE(60), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(63), 1,
      sym__comment_or_new_line,
  [11304] = 4,
    ACTIONS(222), 1,
      sym_comment,
    ACTIONS(1439), 1,
      aux_sym_variable_name_token1,
    STATE(107), 1,
      sym_variable_name,
    STATE(570), 1,
      sym_expr,
  [11317] = 4,
    ACTIONS(222), 1,
      sym_comment,
    ACTIONS(1439), 1,
      aux_sym_variable_name_token1,
    STATE(107), 1,
      sym_variable_name,
    STATE(568), 1,
      sym_expr,
  [11330] = 4,
    ACTIONS(222), 1,
      sym_comment,
    ACTIONS(1439), 1,
      aux_sym_variable_name_token1,
    STATE(107), 1,
      sym_variable_name,
    STATE(565), 1,
      sym_expr,
  [11343] = 4,
    ACTIONS(222), 1,
      sym_comment,
    ACTIONS(837), 1,
      sym_digit,
    STATE(57), 1,
      aux_sym_integer_repeat1,
    STATE(76), 1,
      sym_integer,
  [11356] = 4,
    ACTIONS(1441), 1,
      anon_sym_LF,
    ACTIONS(1443), 1,
      sym_comment,
    STATE(163), 1,
      sym__comment_or_new_line,
    STATE(281), 1,
      aux_sym__comment_or_new_line_repeat1,
  [11369] = 4,
    ACTIONS(222), 1,
      sym_comment,
    ACTIONS(1439), 1,
      aux_sym_variable_name_token1,
    STATE(107), 1,
      sym_variable_name,
    STATE(533), 1,
      sym_expr,
  [11382] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1447), 1,
      anon_sym_POUND,
    ACTIONS(1445), 2,
      anon_sym_SEMI,
      aux_sym_filename_escaped_char_token1,
  [11393] = 4,
    ACTIONS(222), 1,
      sym_comment,
    ACTIONS(1433), 1,
      anon_sym_COMMA,
    ACTIONS(1449), 1,
      anon_sym_RBRACK,
    STATE(424), 1,
      aux_sym_json_array_repeat1,
  [11406] = 4,
    ACTIONS(1441), 1,
      anon_sym_LF,
    ACTIONS(1443), 1,
      sym_comment,
    STATE(162), 1,
      sym__comment_or_new_line,
    STATE(281), 1,
      aux_sym__comment_or_new_line_repeat1,
  [11419] = 4,
    ACTIONS(642), 1,
      anon_sym_LF,
    ACTIONS(656), 1,
      sym_comment,
    STATE(12), 1,
      sym__comment_or_new_line,
    STATE(88), 1,
      aux_sym__comment_or_new_line_repeat1,
  [11432] = 4,
    ACTIONS(222), 1,
      sym_comment,
    ACTIONS(1185), 1,
      anon_sym_COMMA,
    ACTIONS(1451), 1,
      anon_sym_RBRACE,
    STATE(430), 1,
      aux_sym_json_object_repeat1,
  [11445] = 4,
    ACTIONS(1441), 1,
      anon_sym_LF,
    ACTIONS(1443), 1,
      sym_comment,
    STATE(159), 1,
      sym__comment_or_new_line,
    STATE(281), 1,
      aux_sym__comment_or_new_line_repeat1,
  [11458] = 4,
    ACTIONS(1441), 1,
      anon_sym_LF,
    ACTIONS(1443), 1,
      sym_comment,
    STATE(161), 1,
      sym__comment_or_new_line,
    STATE(281), 1,
      aux_sym__comment_or_new_line_repeat1,
  [11471] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1453), 3,
      anon_sym_BSLASH,
      anon_sym_SLASH,
      sym_regex_text,
  [11480] = 4,
    ACTIONS(856), 1,
      sym_comment,
    ACTIONS(1437), 1,
      anon_sym_LF,
    STATE(9), 1,
      sym__comment_or_new_line,
    STATE(15), 1,
      aux_sym__comment_or_new_line_repeat1,
  [11493] = 4,
    ACTIONS(222), 1,
      sym_comment,
    ACTIONS(1433), 1,
      anon_sym_COMMA,
    ACTIONS(1455), 1,
      anon_sym_RBRACK,
    STATE(374), 1,
      aux_sym_json_array_repeat1,
  [11506] = 4,
    ACTIONS(222), 1,
      sym_comment,
    ACTIONS(1185), 1,
      anon_sym_COMMA,
    ACTIONS(1457), 1,
      anon_sym_RBRACE,
    STATE(430), 1,
      aux_sym_json_object_repeat1,
  [11519] = 4,
    ACTIONS(222), 1,
      sym_comment,
    ACTIONS(1185), 1,
      anon_sym_COMMA,
    ACTIONS(1457), 1,
      anon_sym_RBRACE,
    STATE(377), 1,
      aux_sym_json_object_repeat1,
  [11532] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1461), 1,
      anon_sym_POUND,
    ACTIONS(1459), 2,
      anon_sym_SEMI,
      aux_sym_filename_escaped_char_token1,
  [11543] = 4,
    ACTIONS(222), 1,
      sym_comment,
    ACTIONS(1463), 1,
      anon_sym_SEMI,
    ACTIONS(1465), 1,
      sym_hexdigit,
    STATE(401), 1,
      aux_sym_oneline_hex_repeat1,
  [11556] = 4,
    ACTIONS(642), 1,
      anon_sym_LF,
    ACTIONS(656), 1,
      sym_comment,
    STATE(88), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(92), 1,
      sym__comment_or_new_line,
  [11569] = 4,
    ACTIONS(222), 1,
      sym_comment,
    ACTIONS(1439), 1,
      aux_sym_variable_name_token1,
    STATE(107), 1,
      sym_variable_name,
    STATE(597), 1,
      sym_expr,
  [11582] = 4,
    ACTIONS(222), 1,
      sym_comment,
    ACTIONS(1185), 1,
      anon_sym_COMMA,
    ACTIONS(1467), 1,
      anon_sym_RBRACE,
    STATE(406), 1,
      aux_sym_json_object_repeat1,
  [11595] = 4,
    ACTIONS(222), 1,
      sym_comment,
    ACTIONS(1185), 1,
      anon_sym_COMMA,
    ACTIONS(1467), 1,
      anon_sym_RBRACE,
    STATE(430), 1,
      aux_sym_json_object_repeat1,
  [11608] = 2,
    ACTIONS(222), 1,
      sym_comment,
    ACTIONS(1291), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [11617] = 4,
    ACTIONS(222), 1,
      sym_comment,
    ACTIONS(1433), 1,
      anon_sym_COMMA,
    ACTIONS(1469), 1,
      anon_sym_RBRACK,
    STATE(343), 1,
      aux_sym_json_array_repeat1,
  [11630] = 4,
    ACTIONS(642), 1,
      anon_sym_LF,
    ACTIONS(656), 1,
      sym_comment,
    STATE(66), 1,
      sym__comment_or_new_line,
    STATE(88), 1,
      aux_sym__comment_or_new_line_repeat1,
  [11643] = 4,
    ACTIONS(7), 1,
      anon_sym_LF,
    ACTIONS(11), 1,
      sym_comment,
    STATE(50), 1,
      sym__comment_or_new_line,
    STATE(60), 1,
      aux_sym__comment_or_new_line_repeat1,
  [11656] = 4,
    ACTIONS(1277), 1,
      anon_sym_DOT,
    ACTIONS(1471), 1,
      anon_sym_LF,
    ACTIONS(1473), 1,
      sym_comment,
    STATE(564), 1,
      sym_fraction,
  [11669] = 4,
    ACTIONS(856), 1,
      sym_comment,
    ACTIONS(1437), 1,
      anon_sym_LF,
    STATE(15), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(62), 1,
      sym__comment_or_new_line,
  [11682] = 4,
    ACTIONS(856), 1,
      sym_comment,
    ACTIONS(1437), 1,
      anon_sym_LF,
    STATE(15), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(103), 1,
      sym__comment_or_new_line,
  [11695] = 4,
    ACTIONS(1277), 1,
      anon_sym_DOT,
    ACTIONS(1475), 1,
      anon_sym_LF,
    ACTIONS(1477), 1,
      sym_comment,
    STATE(564), 1,
      sym_fraction,
  [11708] = 4,
    ACTIONS(15), 1,
      anon_sym_LF,
    ACTIONS(63), 1,
      sym_comment,
    STATE(53), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(58), 1,
      sym__comment_or_new_line,
  [11721] = 4,
    ACTIONS(1277), 1,
      anon_sym_DOT,
    ACTIONS(1479), 1,
      anon_sym_LF,
    ACTIONS(1481), 1,
      sym_comment,
    STATE(564), 1,
      sym_fraction,
  [11734] = 4,
    ACTIONS(222), 1,
      sym_comment,
    ACTIONS(1483), 1,
      anon_sym_SEMI,
    ACTIONS(1485), 1,
      sym_hexdigit,
    STATE(401), 1,
      aux_sym_oneline_hex_repeat1,
  [11747] = 4,
    ACTIONS(1277), 1,
      anon_sym_DOT,
    ACTIONS(1488), 1,
      anon_sym_LF,
    ACTIONS(1490), 1,
      sym_comment,
    STATE(564), 1,
      sym_fraction,
  [11760] = 2,
    ACTIONS(222), 1,
      sym_comment,
    ACTIONS(1492), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [11769] = 4,
    ACTIONS(1277), 1,
      anon_sym_DOT,
    ACTIONS(1494), 1,
      anon_sym_LF,
    ACTIONS(1496), 1,
      sym_comment,
    STATE(564), 1,
      sym_fraction,
  [11782] = 2,
    ACTIONS(222), 1,
      sym_comment,
    ACTIONS(1498), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [11791] = 4,
    ACTIONS(222), 1,
      sym_comment,
    ACTIONS(1185), 1,
      anon_sym_COMMA,
    ACTIONS(1500), 1,
      anon_sym_RBRACE,
    STATE(430), 1,
      aux_sym_json_object_repeat1,
  [11804] = 2,
    ACTIONS(222), 1,
      sym_comment,
    ACTIONS(1502), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [11813] = 2,
    ACTIONS(222), 1,
      sym_comment,
    ACTIONS(1504), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [11822] = 3,
    ACTIONS(222), 1,
      sym_comment,
    STATE(348), 1,
      sym_boolean,
    ACTIONS(736), 2,
      anon_sym_true,
      anon_sym_false,
  [11833] = 3,
    ACTIONS(222), 1,
      sym_comment,
    STATE(347), 1,
      sym_boolean,
    ACTIONS(736), 2,
      anon_sym_true,
      anon_sym_false,
  [11844] = 4,
    ACTIONS(7), 1,
      anon_sym_LF,
    ACTIONS(11), 1,
      sym_comment,
    STATE(60), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(64), 1,
      sym__comment_or_new_line,
  [11857] = 4,
    ACTIONS(222), 1,
      sym_comment,
    ACTIONS(1439), 1,
      aux_sym_variable_name_token1,
    STATE(344), 1,
      sym_variable_definition,
    STATE(479), 1,
      sym_variable_name,
  [11870] = 4,
    ACTIONS(222), 1,
      sym_comment,
    ACTIONS(738), 1,
      sym_digit,
    STATE(112), 1,
      aux_sym_integer_repeat1,
    STATE(351), 1,
      sym_integer,
  [11883] = 4,
    ACTIONS(222), 1,
      sym_comment,
    ACTIONS(738), 1,
      sym_digit,
    STATE(112), 1,
      aux_sym_integer_repeat1,
    STATE(353), 1,
      sym_integer,
  [11896] = 3,
    ACTIONS(222), 1,
      sym_comment,
    STATE(355), 1,
      sym_boolean,
    ACTIONS(736), 2,
      anon_sym_true,
      anon_sym_false,
  [11907] = 3,
    ACTIONS(222), 1,
      sym_comment,
    STATE(357), 1,
      sym_boolean,
    ACTIONS(736), 2,
      anon_sym_true,
      anon_sym_false,
  [11918] = 4,
    ACTIONS(1277), 1,
      anon_sym_DOT,
    ACTIONS(1506), 1,
      anon_sym_LF,
    ACTIONS(1508), 1,
      sym_comment,
    STATE(564), 1,
      sym_fraction,
  [11931] = 4,
    ACTIONS(222), 1,
      sym_comment,
    ACTIONS(738), 1,
      sym_digit,
    STATE(112), 1,
      aux_sym_integer_repeat1,
    STATE(358), 1,
      sym_integer,
  [11944] = 4,
    ACTIONS(710), 1,
      sym_digit,
    ACTIONS(1369), 1,
      anon_sym_LF,
    ACTIONS(1510), 1,
      sym_comment,
    STATE(111), 1,
      aux_sym_integer_repeat1,
  [11957] = 4,
    ACTIONS(222), 1,
      sym_comment,
    ACTIONS(738), 1,
      sym_digit,
    STATE(112), 1,
      aux_sym_integer_repeat1,
    STATE(158), 1,
      sym_integer,
  [11970] = 3,
    ACTIONS(222), 1,
      sym_comment,
    STATE(376), 1,
      sym_status,
    ACTIONS(1512), 2,
      aux_sym_status_token1,
      anon_sym_STAR,
  [11981] = 3,
    ACTIONS(222), 1,
      sym_comment,
    STATE(359), 1,
      sym_boolean,
    ACTIONS(736), 2,
      anon_sym_true,
      anon_sym_false,
  [11992] = 3,
    ACTIONS(222), 1,
      sym_comment,
    STATE(360), 1,
      sym_boolean,
    ACTIONS(736), 2,
      anon_sym_true,
      anon_sym_false,
  [12003] = 4,
    ACTIONS(222), 1,
      sym_comment,
    ACTIONS(1514), 1,
      anon_sym_COMMA,
    ACTIONS(1517), 1,
      anon_sym_RBRACK,
    STATE(424), 1,
      aux_sym_json_array_repeat1,
  [12016] = 3,
    ACTIONS(222), 1,
      sym_comment,
    STATE(361), 1,
      sym_boolean,
    ACTIONS(736), 2,
      anon_sym_true,
      anon_sym_false,
  [12027] = 4,
    ACTIONS(1277), 1,
      anon_sym_DOT,
    ACTIONS(1519), 1,
      anon_sym_LF,
    ACTIONS(1521), 1,
      sym_comment,
    STATE(564), 1,
      sym_fraction,
  [12040] = 2,
    ACTIONS(222), 1,
      sym_comment,
    ACTIONS(1523), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [12049] = 2,
    ACTIONS(222), 1,
      sym_comment,
    ACTIONS(1295), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [12058] = 4,
    ACTIONS(222), 1,
      sym_comment,
    ACTIONS(1525), 1,
      anon_sym_SEMI,
    ACTIONS(1527), 1,
      sym_hexdigit,
    STATE(386), 1,
      aux_sym_oneline_hex_repeat1,
  [12071] = 4,
    ACTIONS(222), 1,
      sym_comment,
    ACTIONS(1529), 1,
      anon_sym_RBRACE,
    ACTIONS(1531), 1,
      anon_sym_COMMA,
    STATE(430), 1,
      aux_sym_json_object_repeat1,
  [12084] = 2,
    ACTIONS(222), 1,
      sym_comment,
    ACTIONS(1311), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [12093] = 2,
    ACTIONS(222), 1,
      sym_comment,
    ACTIONS(1534), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [12102] = 4,
    ACTIONS(7), 1,
      anon_sym_LF,
    ACTIONS(11), 1,
      sym_comment,
    STATE(60), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(128), 1,
      sym__comment_or_new_line,
  [12115] = 4,
    ACTIONS(710), 1,
      sym_digit,
    ACTIONS(1391), 1,
      anon_sym_LF,
    ACTIONS(1536), 1,
      sym_comment,
    STATE(111), 1,
      aux_sym_integer_repeat1,
  [12128] = 2,
    ACTIONS(222), 1,
      sym_comment,
    ACTIONS(1529), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [12136] = 3,
    ACTIONS(222), 1,
      sym_comment,
    ACTIONS(1538), 1,
      anon_sym_COLON,
    ACTIONS(1540), 1,
      anon_sym_COLON2,
  [12146] = 3,
    ACTIONS(222), 1,
      sym_comment,
    ACTIONS(1387), 1,
      anon_sym_DQUOTE,
    STATE(81), 1,
      sym_quoted_string,
  [12156] = 3,
    ACTIONS(222), 1,
      sym_comment,
    ACTIONS(732), 1,
      anon_sym_DQUOTE,
    STATE(481), 1,
      sym_quoted_string,
  [12166] = 3,
    ACTIONS(222), 1,
      sym_comment,
    ACTIONS(1542), 1,
      anon_sym_LBRACE,
    STATE(339), 1,
      sym_unicode_char,
  [12176] = 3,
    ACTIONS(1544), 1,
      anon_sym_LF,
    ACTIONS(1546), 1,
      aux_sym_file_value_token1,
    ACTIONS(1548), 1,
      sym_comment,
  [12186] = 3,
    ACTIONS(222), 1,
      sym_comment,
    ACTIONS(1387), 1,
      anon_sym_DQUOTE,
    STATE(75), 1,
      sym_quoted_string,
  [12196] = 3,
    ACTIONS(1550), 1,
      anon_sym_LF,
    ACTIONS(1552), 1,
      aux_sym_file_value_token1,
    ACTIONS(1554), 1,
      sym_comment,
  [12206] = 3,
    ACTIONS(222), 1,
      sym_comment,
    ACTIONS(1387), 1,
      anon_sym_DQUOTE,
    STATE(77), 1,
      sym_quoted_string,
  [12216] = 3,
    ACTIONS(222), 1,
      sym_comment,
    ACTIONS(732), 1,
      anon_sym_DQUOTE,
    STATE(151), 1,
      sym_quoted_string,
  [12226] = 3,
    ACTIONS(222), 1,
      sym_comment,
    ACTIONS(732), 1,
      anon_sym_DQUOTE,
    STATE(145), 1,
      sym_quoted_string,
  [12236] = 3,
    ACTIONS(222), 1,
      sym_comment,
    ACTIONS(732), 1,
      anon_sym_DQUOTE,
    STATE(146), 1,
      sym_quoted_string,
  [12246] = 3,
    ACTIONS(222), 1,
      sym_comment,
    ACTIONS(732), 1,
      anon_sym_DQUOTE,
    STATE(138), 1,
      sym_quoted_string,
  [12256] = 2,
    ACTIONS(222), 1,
      sym_comment,
    ACTIONS(1517), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [12264] = 2,
    ACTIONS(222), 1,
      sym_comment,
    ACTIONS(1556), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [12272] = 3,
    ACTIONS(222), 1,
      sym_comment,
    ACTIONS(732), 1,
      anon_sym_DQUOTE,
    STATE(139), 1,
      sym_quoted_string,
  [12282] = 2,
    ACTIONS(222), 1,
      sym_comment,
    ACTIONS(1558), 2,
      aux_sym_status_token1,
      anon_sym_STAR,
  [12290] = 3,
    ACTIONS(222), 1,
      sym_comment,
    ACTIONS(1560), 1,
      anon_sym_LBRACE,
    STATE(280), 1,
      sym_unicode_char,
  [12300] = 3,
    ACTIONS(222), 1,
      sym_comment,
    ACTIONS(1562), 1,
      anon_sym_LBRACE,
    STATE(319), 1,
      sym_unicode_char,
  [12310] = 3,
    ACTIONS(222), 1,
      sym_comment,
    ACTIONS(732), 1,
      anon_sym_DQUOTE,
    STATE(148), 1,
      sym_quoted_string,
  [12320] = 3,
    ACTIONS(222), 1,
      sym_comment,
    ACTIONS(1387), 1,
      anon_sym_DQUOTE,
    STATE(84), 1,
      sym_quoted_string,
  [12330] = 3,
    ACTIONS(222), 1,
      sym_comment,
    ACTIONS(1564), 1,
      anon_sym_file_COMMA,
    STATE(365), 1,
      sym_file_value,
  [12340] = 3,
    ACTIONS(222), 1,
      sym_comment,
    ACTIONS(732), 1,
      anon_sym_DQUOTE,
    STATE(157), 1,
      sym_quoted_string,
  [12350] = 3,
    ACTIONS(222), 1,
      sym_comment,
    ACTIONS(1566), 1,
      sym_digit,
    STATE(246), 1,
      aux_sym_integer_repeat1,
  [12360] = 3,
    ACTIONS(222), 1,
      sym_comment,
    ACTIONS(1387), 1,
      anon_sym_DQUOTE,
    STATE(85), 1,
      sym_quoted_string,
  [12370] = 3,
    ACTIONS(222), 1,
      sym_comment,
    ACTIONS(732), 1,
      anon_sym_DQUOTE,
    STATE(149), 1,
      sym_quoted_string,
  [12380] = 3,
    ACTIONS(222), 1,
      sym_comment,
    ACTIONS(1568), 1,
      anon_sym_LBRACE,
    STATE(250), 1,
      sym_unicode_char,
  [12390] = 3,
    ACTIONS(222), 1,
      sym_comment,
    ACTIONS(1387), 1,
      anon_sym_DQUOTE,
    STATE(80), 1,
      sym_quoted_string,
  [12400] = 3,
    ACTIONS(222), 1,
      sym_comment,
    ACTIONS(1570), 1,
      sym_digit,
    STATE(265), 1,
      aux_sym_integer_repeat1,
  [12410] = 3,
    ACTIONS(222), 1,
      sym_comment,
    ACTIONS(1572), 1,
      sym_digit,
    STATE(248), 1,
      aux_sym_integer_repeat1,
  [12420] = 3,
    ACTIONS(222), 1,
      sym_comment,
    ACTIONS(1267), 1,
      anon_sym_LT,
    ACTIONS(1269), 1,
      anon_sym_LT_QMARK,
  [12430] = 3,
    ACTIONS(222), 1,
      sym_comment,
    ACTIONS(1574), 1,
      sym_digit,
    STATE(419), 1,
      aux_sym_integer_repeat1,
  [12440] = 3,
    ACTIONS(222), 1,
      sym_comment,
    ACTIONS(1576), 1,
      sym_digit,
    STATE(332), 1,
      aux_sym_integer_repeat1,
  [12450] = 3,
    ACTIONS(222), 1,
      sym_comment,
    ACTIONS(1387), 1,
      anon_sym_DQUOTE,
    STATE(83), 1,
      sym_quoted_string,
  [12460] = 3,
    ACTIONS(222), 1,
      sym_comment,
    ACTIONS(1387), 1,
      anon_sym_DQUOTE,
    STATE(78), 1,
      sym_quoted_string,
  [12470] = 3,
    ACTIONS(222), 1,
      sym_comment,
    ACTIONS(1578), 1,
      sym_digit,
    STATE(291), 1,
      aux_sym_integer_repeat1,
  [12480] = 3,
    ACTIONS(222), 1,
      sym_comment,
    ACTIONS(1580), 1,
      anon_sym_LBRACE,
    STATE(287), 1,
      sym_unicode_char,
  [12490] = 2,
    ACTIONS(1471), 1,
      anon_sym_LF,
    ACTIONS(1473), 1,
      sym_comment,
  [12497] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1582), 1,
      aux_sym_key_string_escaped_char_token1,
  [12504] = 2,
    ACTIONS(1431), 1,
      anon_sym_LF,
    ACTIONS(1584), 1,
      sym_comment,
  [12511] = 2,
    ACTIONS(1519), 1,
      anon_sym_LF,
    ACTIONS(1521), 1,
      sym_comment,
  [12518] = 2,
    ACTIONS(1285), 1,
      sym_comment,
    ACTIONS(1287), 1,
      anon_sym_LF,
  [12525] = 2,
    ACTIONS(222), 1,
      sym_comment,
    ACTIONS(1586), 1,
      anon_sym_GT,
  [12532] = 2,
    ACTIONS(1502), 1,
      anon_sym_LF,
    ACTIONS(1588), 1,
      sym_comment,
  [12539] = 2,
    ACTIONS(222), 1,
      sym_comment,
    ACTIONS(1590), 1,
      anon_sym_EQ,
  [12546] = 2,
    ACTIONS(1592), 1,
      anon_sym_LF,
    ACTIONS(1594), 1,
      sym_comment,
  [12553] = 2,
    ACTIONS(1596), 1,
      anon_sym_LF,
    ACTIONS(1598), 1,
      sym_comment,
  [12560] = 2,
    ACTIONS(1504), 1,
      anon_sym_LF,
    ACTIONS(1600), 1,
      sym_comment,
  [12567] = 2,
    ACTIONS(222), 1,
      sym_comment,
    ACTIONS(1602), 1,
      sym_hexdigit,
  [12574] = 2,
    ACTIONS(1604), 1,
      anon_sym_LF,
    ACTIONS(1606), 1,
      sym_comment,
  [12581] = 2,
    ACTIONS(1421), 1,
      anon_sym_LF,
    ACTIONS(1608), 1,
      sym_comment,
  [12588] = 2,
    ACTIONS(1610), 1,
      anon_sym_LF,
    ACTIONS(1612), 1,
      sym_comment,
  [12595] = 2,
    ACTIONS(1614), 1,
      anon_sym_LF,
    ACTIONS(1616), 1,
      sym_comment,
  [12602] = 2,
    ACTIONS(222), 1,
      sym_comment,
    ACTIONS(1618), 1,
      sym_hexdigit,
  [12609] = 2,
    ACTIONS(1494), 1,
      anon_sym_LF,
    ACTIONS(1496), 1,
      sym_comment,
  [12616] = 2,
    ACTIONS(1620), 1,
      anon_sym_LF,
    ACTIONS(1622), 1,
      sym_comment,
  [12623] = 2,
    ACTIONS(1624), 1,
      anon_sym_LF,
    ACTIONS(1626), 1,
      sym_comment,
  [12630] = 2,
    ACTIONS(1628), 1,
      anon_sym_LF,
    ACTIONS(1630), 1,
      sym_comment,
  [12637] = 2,
    ACTIONS(1488), 1,
      anon_sym_LF,
    ACTIONS(1490), 1,
      sym_comment,
  [12644] = 2,
    ACTIONS(1479), 1,
      anon_sym_LF,
    ACTIONS(1481), 1,
      sym_comment,
  [12651] = 2,
    ACTIONS(222), 1,
      sym_comment,
    ACTIONS(1632), 1,
      anon_sym_COLON2,
  [12658] = 2,
    ACTIONS(222), 1,
      sym_comment,
    ACTIONS(1634), 1,
      anon_sym_COLON2,
  [12665] = 2,
    ACTIONS(222), 1,
      sym_comment,
    ACTIONS(1636), 1,
      anon_sym_COLON2,
  [12672] = 2,
    ACTIONS(222), 1,
      sym_comment,
    ACTIONS(1638), 1,
      anon_sym_COLON2,
  [12679] = 2,
    ACTIONS(222), 1,
      sym_comment,
    ACTIONS(1640), 1,
      anon_sym_COLON2,
  [12686] = 2,
    ACTIONS(222), 1,
      sym_comment,
    ACTIONS(1642), 1,
      anon_sym_COLON2,
  [12693] = 2,
    ACTIONS(222), 1,
      sym_comment,
    ACTIONS(1644), 1,
      anon_sym_COLON2,
  [12700] = 2,
    ACTIONS(222), 1,
      sym_comment,
    ACTIONS(1646), 1,
      anon_sym_COLON2,
  [12707] = 2,
    ACTIONS(222), 1,
      sym_comment,
    ACTIONS(1648), 1,
      anon_sym_COLON2,
  [12714] = 2,
    ACTIONS(222), 1,
      sym_comment,
    ACTIONS(1650), 1,
      anon_sym_COLON2,
  [12721] = 2,
    ACTIONS(222), 1,
      sym_comment,
    ACTIONS(1652), 1,
      anon_sym_COLON2,
  [12728] = 2,
    ACTIONS(222), 1,
      sym_comment,
    ACTIONS(1654), 1,
      anon_sym_COLON2,
  [12735] = 2,
    ACTIONS(222), 1,
      sym_comment,
    ACTIONS(1656), 1,
      anon_sym_COLON2,
  [12742] = 2,
    ACTIONS(1658), 1,
      anon_sym_LF,
    ACTIONS(1660), 1,
      sym_comment,
  [12749] = 2,
    ACTIONS(1662), 1,
      anon_sym_LF,
    ACTIONS(1664), 1,
      sym_comment,
  [12756] = 2,
    ACTIONS(1666), 1,
      anon_sym_LF,
    ACTIONS(1668), 1,
      sym_comment,
  [12763] = 2,
    ACTIONS(222), 1,
      sym_comment,
    ACTIONS(1538), 1,
      anon_sym_COLON,
  [12770] = 2,
    ACTIONS(1475), 1,
      anon_sym_LF,
    ACTIONS(1477), 1,
      sym_comment,
  [12777] = 2,
    ACTIONS(222), 1,
      sym_comment,
    ACTIONS(1670), 1,
      sym_hexdigit,
  [12784] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1672), 1,
      aux_sym_xml_prolog_tag_token1,
  [12791] = 2,
    ACTIONS(1674), 1,
      anon_sym_LF,
    ACTIONS(1676), 1,
      sym_comment,
  [12798] = 2,
    ACTIONS(1678), 1,
      anon_sym_LF,
    ACTIONS(1680), 1,
      sym_comment,
  [12805] = 2,
    ACTIONS(1682), 1,
      anon_sym_LF,
    ACTIONS(1684), 1,
      sym_comment,
  [12812] = 2,
    ACTIONS(1295), 1,
      anon_sym_LF,
    ACTIONS(1359), 1,
      sym_comment,
  [12819] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1686), 1,
      aux_sym_xml_open_tag_token1,
  [12826] = 2,
    ACTIONS(1257), 1,
      sym_comment,
    ACTIONS(1259), 1,
      anon_sym_LF,
  [12833] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1688), 1,
      aux_sym_xml_close_tag_token1,
  [12840] = 2,
    ACTIONS(1690), 1,
      anon_sym_LF,
    ACTIONS(1692), 1,
      sym_comment,
  [12847] = 2,
    ACTIONS(222), 1,
      sym_comment,
    ACTIONS(1694), 1,
      ts_builtin_sym_end,
  [12854] = 2,
    ACTIONS(1696), 1,
      anon_sym_LF,
    ACTIONS(1698), 1,
      sym_comment,
  [12861] = 2,
    ACTIONS(222), 1,
      sym_comment,
    ACTIONS(1700), 1,
      sym_hexdigit,
  [12868] = 2,
    ACTIONS(222), 1,
      sym_comment,
    ACTIONS(1702), 1,
      anon_sym_COLON2,
  [12875] = 2,
    ACTIONS(222), 1,
      sym_comment,
    ACTIONS(1704), 1,
      anon_sym_COLON2,
  [12882] = 2,
    ACTIONS(1706), 1,
      anon_sym_LF,
    ACTIONS(1708), 1,
      sym_comment,
  [12889] = 2,
    ACTIONS(1523), 1,
      anon_sym_LF,
    ACTIONS(1710), 1,
      sym_comment,
  [12896] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1712), 1,
      anon_sym_LF,
  [12903] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1714), 1,
      anon_sym_LF,
  [12910] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1716), 1,
      aux_sym_regex_escaped_char_token1,
  [12917] = 2,
    ACTIONS(222), 1,
      sym_comment,
    ACTIONS(1718), 1,
      anon_sym_RBRACE_RBRACE,
  [12924] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1720), 1,
      aux_sym_oneline_string_text_token2,
  [12931] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1722), 1,
      aux_sym_key_string_escaped_char_token1,
  [12938] = 2,
    ACTIONS(1724), 1,
      anon_sym_LF,
    ACTIONS(1726), 1,
      sym_comment,
  [12945] = 2,
    ACTIONS(222), 1,
      sym_comment,
    ACTIONS(1728), 1,
      sym_hexdigit,
  [12952] = 2,
    ACTIONS(1371), 1,
      anon_sym_LF,
    ACTIONS(1730), 1,
      sym_comment,
  [12959] = 2,
    ACTIONS(222), 1,
      sym_comment,
    ACTIONS(1732), 1,
      anon_sym_SLASH,
  [12966] = 2,
    ACTIONS(1734), 1,
      anon_sym_LF,
    ACTIONS(1736), 1,
      sym_comment,
  [12973] = 2,
    ACTIONS(1534), 1,
      anon_sym_LF,
    ACTIONS(1738), 1,
      sym_comment,
  [12980] = 2,
    ACTIONS(1740), 1,
      anon_sym_LF,
    ACTIONS(1742), 1,
      sym_comment,
  [12987] = 2,
    ACTIONS(222), 1,
      sym_comment,
    ACTIONS(1744), 1,
      anon_sym_QMARK_GT,
  [12994] = 2,
    ACTIONS(1746), 1,
      anon_sym_LF,
    ACTIONS(1748), 1,
      sym_comment,
  [13001] = 2,
    ACTIONS(1750), 1,
      anon_sym_LF,
    ACTIONS(1752), 1,
      sym_comment,
  [13008] = 2,
    ACTIONS(1311), 1,
      anon_sym_LF,
    ACTIONS(1315), 1,
      sym_comment,
  [13015] = 2,
    ACTIONS(222), 1,
      sym_comment,
    ACTIONS(1754), 1,
      sym_hexdigit,
  [13022] = 2,
    ACTIONS(222), 1,
      sym_comment,
    ACTIONS(1756), 1,
      anon_sym_SEMI,
  [13029] = 2,
    ACTIONS(222), 1,
      sym_comment,
    ACTIONS(1758), 1,
      anon_sym_GT,
  [13036] = 2,
    ACTIONS(222), 1,
      sym_comment,
    ACTIONS(1760), 1,
      anon_sym_SEMI,
  [13043] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1762), 1,
      aux_sym_oneline_base64_token1,
  [13050] = 2,
    ACTIONS(222), 1,
      sym_comment,
    ACTIONS(1764), 1,
      sym_hexdigit,
  [13057] = 2,
    ACTIONS(1766), 1,
      anon_sym_LF,
    ACTIONS(1768), 1,
      sym_comment,
  [13064] = 2,
    ACTIONS(222), 1,
      sym_comment,
    ACTIONS(1770), 1,
      anon_sym_GT,
  [13071] = 2,
    ACTIONS(1772), 1,
      anon_sym_LF,
    ACTIONS(1774), 1,
      sym_comment,
  [13078] = 2,
    ACTIONS(222), 1,
      sym_comment,
    ACTIONS(1776), 1,
      anon_sym_SLASH,
  [13085] = 2,
    ACTIONS(1778), 1,
      anon_sym_LF,
    ACTIONS(1780), 1,
      sym_comment,
  [13092] = 2,
    ACTIONS(1498), 1,
      anon_sym_LF,
    ACTIONS(1782), 1,
      sym_comment,
  [13099] = 2,
    ACTIONS(1492), 1,
      anon_sym_LF,
    ACTIONS(1784), 1,
      sym_comment,
  [13106] = 2,
    ACTIONS(1231), 1,
      sym_comment,
    ACTIONS(1233), 1,
      anon_sym_LF,
  [13113] = 2,
    ACTIONS(1786), 1,
      anon_sym_LF,
    ACTIONS(1788), 1,
      sym_comment,
  [13120] = 2,
    ACTIONS(1790), 1,
      anon_sym_LF,
    ACTIONS(1792), 1,
      sym_comment,
  [13127] = 2,
    ACTIONS(222), 1,
      sym_comment,
    ACTIONS(1794), 1,
      anon_sym_RBRACE,
  [13134] = 2,
    ACTIONS(1796), 1,
      anon_sym_LF,
    ACTIONS(1798), 1,
      sym_comment,
  [13141] = 2,
    ACTIONS(222), 1,
      sym_comment,
    ACTIONS(1800), 1,
      anon_sym_RBRACE_RBRACE,
  [13148] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1802), 1,
      aux_sym_key_string_escaped_char_token1,
  [13155] = 2,
    ACTIONS(222), 1,
      sym_comment,
    ACTIONS(1804), 1,
      anon_sym_RBRACE,
  [13162] = 2,
    ACTIONS(222), 1,
      sym_comment,
    ACTIONS(1806), 1,
      anon_sym_RBRACE_RBRACE,
  [13169] = 2,
    ACTIONS(222), 1,
      sym_comment,
    ACTIONS(1808), 1,
      anon_sym_RBRACE,
  [13176] = 2,
    ACTIONS(222), 1,
      sym_comment,
    ACTIONS(1810), 1,
      anon_sym_RBRACE_RBRACE,
  [13183] = 2,
    ACTIONS(222), 1,
      sym_comment,
    ACTIONS(1812), 1,
      anon_sym_RBRACE,
  [13190] = 2,
    ACTIONS(222), 1,
      sym_comment,
    ACTIONS(1814), 1,
      anon_sym_RBRACE_RBRACE,
  [13197] = 2,
    ACTIONS(222), 1,
      sym_comment,
    ACTIONS(1816), 1,
      anon_sym_RBRACE_RBRACE,
  [13204] = 2,
    ACTIONS(222), 1,
      sym_comment,
    ACTIONS(1818), 1,
      anon_sym_RBRACE_RBRACE,
  [13211] = 2,
    ACTIONS(222), 1,
      sym_comment,
    ACTIONS(1820), 1,
      anon_sym_RBRACE_RBRACE,
  [13218] = 2,
    ACTIONS(222), 1,
      sym_comment,
    ACTIONS(1822), 1,
      anon_sym_RBRACE_RBRACE,
  [13225] = 2,
    ACTIONS(222), 1,
      sym_comment,
    ACTIONS(1824), 1,
      anon_sym_RBRACE_RBRACE,
  [13232] = 2,
    ACTIONS(222), 1,
      sym_comment,
    ACTIONS(1826), 1,
      anon_sym_RBRACE_RBRACE,
  [13239] = 2,
    ACTIONS(222), 1,
      sym_comment,
    ACTIONS(1828), 1,
      anon_sym_SEMI,
  [13246] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1830), 1,
      aux_sym_xml_prolog_tag_token1,
  [13253] = 2,
    ACTIONS(222), 1,
      sym_comment,
    ACTIONS(1832), 1,
      anon_sym_COLON2,
  [13260] = 2,
    ACTIONS(1834), 1,
      anon_sym_LF,
    ACTIONS(1836), 1,
      sym_comment,
  [13267] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1838), 1,
      aux_sym_xml_close_tag_token1,
  [13274] = 2,
    ACTIONS(222), 1,
      sym_comment,
    ACTIONS(1840), 1,
      sym_hexdigit,
  [13281] = 2,
    ACTIONS(222), 1,
      sym_comment,
    ACTIONS(1842), 1,
      anon_sym_RBRACE,
  [13288] = 2,
    ACTIONS(222), 1,
      sym_comment,
    ACTIONS(1844), 1,
      sym_hexdigit,
  [13295] = 2,
    ACTIONS(1506), 1,
      anon_sym_LF,
    ACTIONS(1508), 1,
      sym_comment,
  [13302] = 2,
    ACTIONS(222), 1,
      sym_comment,
    ACTIONS(1846), 1,
      sym_hexdigit,
  [13309] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1848), 1,
      aux_sym_variable_name_token2,
  [13316] = 2,
    ACTIONS(222), 1,
      sym_comment,
    ACTIONS(1850), 1,
      sym_hexdigit,
  [13323] = 2,
    ACTIONS(1852), 1,
      anon_sym_LF,
    ACTIONS(1854), 1,
      sym_comment,
  [13330] = 2,
    ACTIONS(1544), 1,
      anon_sym_LF,
    ACTIONS(1548), 1,
      sym_comment,
  [13337] = 2,
    ACTIONS(1856), 1,
      anon_sym_LF,
    ACTIONS(1858), 1,
      sym_comment,
  [13344] = 2,
    ACTIONS(1860), 1,
      anon_sym_LF,
    ACTIONS(1862), 1,
      sym_comment,
  [13351] = 2,
    ACTIONS(222), 1,
      sym_comment,
    ACTIONS(1864), 1,
      anon_sym_QMARK_GT,
  [13358] = 2,
    ACTIONS(222), 1,
      sym_comment,
    ACTIONS(1866), 1,
      sym_hexdigit,
  [13365] = 2,
    ACTIONS(222), 1,
      sym_comment,
    ACTIONS(1868), 1,
      anon_sym_RBRACE_RBRACE,
  [13372] = 2,
    ACTIONS(222), 1,
      sym_comment,
    ACTIONS(1870), 1,
      sym_hexdigit,
  [13379] = 2,
    ACTIONS(222), 1,
      sym_comment,
    ACTIONS(1872), 1,
      sym_hexdigit,
  [13386] = 2,
    ACTIONS(222), 1,
      sym_comment,
    ACTIONS(1874), 1,
      sym_hexdigit,
  [13393] = 2,
    ACTIONS(222), 1,
      sym_comment,
    ACTIONS(1876), 1,
      sym_hexdigit,
  [13400] = 2,
    ACTIONS(222), 1,
      sym_comment,
    ACTIONS(1878), 1,
      sym_hexdigit,
  [13407] = 2,
    ACTIONS(222), 1,
      sym_comment,
    ACTIONS(1880), 1,
      sym_hexdigit,
  [13414] = 2,
    ACTIONS(222), 1,
      sym_comment,
    ACTIONS(1882), 1,
      sym_hexdigit,
  [13421] = 2,
    ACTIONS(222), 1,
      sym_comment,
    ACTIONS(1884), 1,
      sym_hexdigit,
  [13428] = 2,
    ACTIONS(222), 1,
      sym_comment,
    ACTIONS(1886), 1,
      sym_hexdigit,
  [13435] = 2,
    ACTIONS(222), 1,
      sym_comment,
    ACTIONS(1888), 1,
      sym_hexdigit,
  [13442] = 2,
    ACTIONS(222), 1,
      sym_comment,
    ACTIONS(1890), 1,
      sym_hexdigit,
  [13449] = 2,
    ACTIONS(222), 1,
      sym_comment,
    ACTIONS(1892), 1,
      sym_hexdigit,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(14)] = 0,
  [SMALL_STATE(15)] = 75,
  [SMALL_STATE(16)] = 150,
  [SMALL_STATE(17)] = 265,
  [SMALL_STATE(18)] = 380,
  [SMALL_STATE(19)] = 448,
  [SMALL_STATE(20)] = 516,
  [SMALL_STATE(21)] = 584,
  [SMALL_STATE(22)] = 652,
  [SMALL_STATE(23)] = 720,
  [SMALL_STATE(24)] = 788,
  [SMALL_STATE(25)] = 856,
  [SMALL_STATE(26)] = 924,
  [SMALL_STATE(27)] = 992,
  [SMALL_STATE(28)] = 1060,
  [SMALL_STATE(29)] = 1128,
  [SMALL_STATE(30)] = 1196,
  [SMALL_STATE(31)] = 1264,
  [SMALL_STATE(32)] = 1332,
  [SMALL_STATE(33)] = 1400,
  [SMALL_STATE(34)] = 1521,
  [SMALL_STATE(35)] = 1642,
  [SMALL_STATE(36)] = 1724,
  [SMALL_STATE(37)] = 1806,
  [SMALL_STATE(38)] = 1888,
  [SMALL_STATE(39)] = 1970,
  [SMALL_STATE(40)] = 2048,
  [SMALL_STATE(41)] = 2126,
  [SMALL_STATE(42)] = 2210,
  [SMALL_STATE(43)] = 2294,
  [SMALL_STATE(44)] = 2372,
  [SMALL_STATE(45)] = 2450,
  [SMALL_STATE(46)] = 2528,
  [SMALL_STATE(47)] = 2606,
  [SMALL_STATE(48)] = 2684,
  [SMALL_STATE(49)] = 2762,
  [SMALL_STATE(50)] = 2840,
  [SMALL_STATE(51)] = 2924,
  [SMALL_STATE(52)] = 3003,
  [SMALL_STATE(53)] = 3071,
  [SMALL_STATE(54)] = 3135,
  [SMALL_STATE(55)] = 3199,
  [SMALL_STATE(56)] = 3274,
  [SMALL_STATE(57)] = 3337,
  [SMALL_STATE(58)] = 3400,
  [SMALL_STATE(59)] = 3457,
  [SMALL_STATE(60)] = 3519,
  [SMALL_STATE(61)] = 3581,
  [SMALL_STATE(62)] = 3636,
  [SMALL_STATE(63)] = 3691,
  [SMALL_STATE(64)] = 3746,
  [SMALL_STATE(65)] = 3801,
  [SMALL_STATE(66)] = 3870,
  [SMALL_STATE(67)] = 3936,
  [SMALL_STATE(68)] = 4002,
  [SMALL_STATE(69)] = 4068,
  [SMALL_STATE(70)] = 4121,
  [SMALL_STATE(71)] = 4174,
  [SMALL_STATE(72)] = 4227,
  [SMALL_STATE(73)] = 4280,
  [SMALL_STATE(74)] = 4332,
  [SMALL_STATE(75)] = 4384,
  [SMALL_STATE(76)] = 4436,
  [SMALL_STATE(77)] = 4488,
  [SMALL_STATE(78)] = 4540,
  [SMALL_STATE(79)] = 4592,
  [SMALL_STATE(80)] = 4643,
  [SMALL_STATE(81)] = 4694,
  [SMALL_STATE(82)] = 4745,
  [SMALL_STATE(83)] = 4796,
  [SMALL_STATE(84)] = 4847,
  [SMALL_STATE(85)] = 4898,
  [SMALL_STATE(86)] = 4949,
  [SMALL_STATE(87)] = 5003,
  [SMALL_STATE(88)] = 5054,
  [SMALL_STATE(89)] = 5105,
  [SMALL_STATE(90)] = 5149,
  [SMALL_STATE(91)] = 5193,
  [SMALL_STATE(92)] = 5263,
  [SMALL_STATE(93)] = 5307,
  [SMALL_STATE(94)] = 5349,
  [SMALL_STATE(95)] = 5398,
  [SMALL_STATE(96)] = 5447,
  [SMALL_STATE(97)] = 5499,
  [SMALL_STATE(98)] = 5551,
  [SMALL_STATE(99)] = 5597,
  [SMALL_STATE(100)] = 5643,
  [SMALL_STATE(101)] = 5674,
  [SMALL_STATE(102)] = 5705,
  [SMALL_STATE(103)] = 5736,
  [SMALL_STATE(104)] = 5767,
  [SMALL_STATE(105)] = 5798,
  [SMALL_STATE(106)] = 5840,
  [SMALL_STATE(107)] = 5886,
  [SMALL_STATE(108)] = 5932,
  [SMALL_STATE(109)] = 5978,
  [SMALL_STATE(110)] = 6020,
  [SMALL_STATE(111)] = 6059,
  [SMALL_STATE(112)] = 6091,
  [SMALL_STATE(113)] = 6123,
  [SMALL_STATE(114)] = 6159,
  [SMALL_STATE(115)] = 6192,
  [SMALL_STATE(116)] = 6243,
  [SMALL_STATE(117)] = 6294,
  [SMALL_STATE(118)] = 6329,
  [SMALL_STATE(119)] = 6364,
  [SMALL_STATE(120)] = 6415,
  [SMALL_STATE(121)] = 6463,
  [SMALL_STATE(122)] = 6513,
  [SMALL_STATE(123)] = 6555,
  [SMALL_STATE(124)] = 6580,
  [SMALL_STATE(125)] = 6609,
  [SMALL_STATE(126)] = 6638,
  [SMALL_STATE(127)] = 6663,
  [SMALL_STATE(128)] = 6710,
  [SMALL_STATE(129)] = 6735,
  [SMALL_STATE(130)] = 6782,
  [SMALL_STATE(131)] = 6829,
  [SMALL_STATE(132)] = 6854,
  [SMALL_STATE(133)] = 6879,
  [SMALL_STATE(134)] = 6926,
  [SMALL_STATE(135)] = 6951,
  [SMALL_STATE(136)] = 6976,
  [SMALL_STATE(137)] = 7000,
  [SMALL_STATE(138)] = 7044,
  [SMALL_STATE(139)] = 7067,
  [SMALL_STATE(140)] = 7090,
  [SMALL_STATE(141)] = 7113,
  [SMALL_STATE(142)] = 7136,
  [SMALL_STATE(143)] = 7159,
  [SMALL_STATE(144)] = 7182,
  [SMALL_STATE(145)] = 7205,
  [SMALL_STATE(146)] = 7228,
  [SMALL_STATE(147)] = 7251,
  [SMALL_STATE(148)] = 7274,
  [SMALL_STATE(149)] = 7297,
  [SMALL_STATE(150)] = 7320,
  [SMALL_STATE(151)] = 7363,
  [SMALL_STATE(152)] = 7386,
  [SMALL_STATE(153)] = 7409,
  [SMALL_STATE(154)] = 7452,
  [SMALL_STATE(155)] = 7495,
  [SMALL_STATE(156)] = 7518,
  [SMALL_STATE(157)] = 7561,
  [SMALL_STATE(158)] = 7584,
  [SMALL_STATE(159)] = 7607,
  [SMALL_STATE(160)] = 7651,
  [SMALL_STATE(161)] = 7688,
  [SMALL_STATE(162)] = 7728,
  [SMALL_STATE(163)] = 7768,
  [SMALL_STATE(164)] = 7808,
  [SMALL_STATE(165)] = 7835,
  [SMALL_STATE(166)] = 7866,
  [SMALL_STATE(167)] = 7898,
  [SMALL_STATE(168)] = 7930,
  [SMALL_STATE(169)] = 7959,
  [SMALL_STATE(170)] = 7986,
  [SMALL_STATE(171)] = 8015,
  [SMALL_STATE(172)] = 8042,
  [SMALL_STATE(173)] = 8071,
  [SMALL_STATE(174)] = 8100,
  [SMALL_STATE(175)] = 8129,
  [SMALL_STATE(176)] = 8158,
  [SMALL_STATE(177)] = 8184,
  [SMALL_STATE(178)] = 8210,
  [SMALL_STATE(179)] = 8236,
  [SMALL_STATE(180)] = 8264,
  [SMALL_STATE(181)] = 8290,
  [SMALL_STATE(182)] = 8316,
  [SMALL_STATE(183)] = 8342,
  [SMALL_STATE(184)] = 8368,
  [SMALL_STATE(185)] = 8394,
  [SMALL_STATE(186)] = 8422,
  [SMALL_STATE(187)] = 8450,
  [SMALL_STATE(188)] = 8476,
  [SMALL_STATE(189)] = 8502,
  [SMALL_STATE(190)] = 8530,
  [SMALL_STATE(191)] = 8558,
  [SMALL_STATE(192)] = 8586,
  [SMALL_STATE(193)] = 8611,
  [SMALL_STATE(194)] = 8630,
  [SMALL_STATE(195)] = 8655,
  [SMALL_STATE(196)] = 8680,
  [SMALL_STATE(197)] = 8705,
  [SMALL_STATE(198)] = 8728,
  [SMALL_STATE(199)] = 8753,
  [SMALL_STATE(200)] = 8776,
  [SMALL_STATE(201)] = 8801,
  [SMALL_STATE(202)] = 8819,
  [SMALL_STATE(203)] = 8837,
  [SMALL_STATE(204)] = 8861,
  [SMALL_STATE(205)] = 8881,
  [SMALL_STATE(206)] = 8897,
  [SMALL_STATE(207)] = 8921,
  [SMALL_STATE(208)] = 8945,
  [SMALL_STATE(209)] = 8969,
  [SMALL_STATE(210)] = 8993,
  [SMALL_STATE(211)] = 9009,
  [SMALL_STATE(212)] = 9029,
  [SMALL_STATE(213)] = 9049,
  [SMALL_STATE(214)] = 9073,
  [SMALL_STATE(215)] = 9091,
  [SMALL_STATE(216)] = 9113,
  [SMALL_STATE(217)] = 9135,
  [SMALL_STATE(218)] = 9153,
  [SMALL_STATE(219)] = 9170,
  [SMALL_STATE(220)] = 9189,
  [SMALL_STATE(221)] = 9210,
  [SMALL_STATE(222)] = 9227,
  [SMALL_STATE(223)] = 9246,
  [SMALL_STATE(224)] = 9267,
  [SMALL_STATE(225)] = 9284,
  [SMALL_STATE(226)] = 9303,
  [SMALL_STATE(227)] = 9320,
  [SMALL_STATE(228)] = 9345,
  [SMALL_STATE(229)] = 9364,
  [SMALL_STATE(230)] = 9389,
  [SMALL_STATE(231)] = 9410,
  [SMALL_STATE(232)] = 9431,
  [SMALL_STATE(233)] = 9447,
  [SMALL_STATE(234)] = 9467,
  [SMALL_STATE(235)] = 9481,
  [SMALL_STATE(236)] = 9495,
  [SMALL_STATE(237)] = 9513,
  [SMALL_STATE(238)] = 9527,
  [SMALL_STATE(239)] = 9545,
  [SMALL_STATE(240)] = 9559,
  [SMALL_STATE(241)] = 9577,
  [SMALL_STATE(242)] = 9591,
  [SMALL_STATE(243)] = 9611,
  [SMALL_STATE(244)] = 9625,
  [SMALL_STATE(245)] = 9645,
  [SMALL_STATE(246)] = 9663,
  [SMALL_STATE(247)] = 9679,
  [SMALL_STATE(248)] = 9691,
  [SMALL_STATE(249)] = 9707,
  [SMALL_STATE(250)] = 9721,
  [SMALL_STATE(251)] = 9735,
  [SMALL_STATE(252)] = 9749,
  [SMALL_STATE(253)] = 9765,
  [SMALL_STATE(254)] = 9785,
  [SMALL_STATE(255)] = 9799,
  [SMALL_STATE(256)] = 9817,
  [SMALL_STATE(257)] = 9837,
  [SMALL_STATE(258)] = 9857,
  [SMALL_STATE(259)] = 9877,
  [SMALL_STATE(260)] = 9891,
  [SMALL_STATE(261)] = 9905,
  [SMALL_STATE(262)] = 9925,
  [SMALL_STATE(263)] = 9940,
  [SMALL_STATE(264)] = 9953,
  [SMALL_STATE(265)] = 9966,
  [SMALL_STATE(266)] = 9981,
  [SMALL_STATE(267)] = 9996,
  [SMALL_STATE(268)] = 10007,
  [SMALL_STATE(269)] = 10022,
  [SMALL_STATE(270)] = 10035,
  [SMALL_STATE(271)] = 10048,
  [SMALL_STATE(272)] = 10065,
  [SMALL_STATE(273)] = 10080,
  [SMALL_STATE(274)] = 10095,
  [SMALL_STATE(275)] = 10108,
  [SMALL_STATE(276)] = 10125,
  [SMALL_STATE(277)] = 10140,
  [SMALL_STATE(278)] = 10153,
  [SMALL_STATE(279)] = 10168,
  [SMALL_STATE(280)] = 10183,
  [SMALL_STATE(281)] = 10196,
  [SMALL_STATE(282)] = 10211,
  [SMALL_STATE(283)] = 10227,
  [SMALL_STATE(284)] = 10241,
  [SMALL_STATE(285)] = 10255,
  [SMALL_STATE(286)] = 10267,
  [SMALL_STATE(287)] = 10281,
  [SMALL_STATE(288)] = 10293,
  [SMALL_STATE(289)] = 10305,
  [SMALL_STATE(290)] = 10317,
  [SMALL_STATE(291)] = 10327,
  [SMALL_STATE(292)] = 10341,
  [SMALL_STATE(293)] = 10357,
  [SMALL_STATE(294)] = 10367,
  [SMALL_STATE(295)] = 10379,
  [SMALL_STATE(296)] = 10389,
  [SMALL_STATE(297)] = 10399,
  [SMALL_STATE(298)] = 10415,
  [SMALL_STATE(299)] = 10425,
  [SMALL_STATE(300)] = 10439,
  [SMALL_STATE(301)] = 10449,
  [SMALL_STATE(302)] = 10457,
  [SMALL_STATE(303)] = 10473,
  [SMALL_STATE(304)] = 10487,
  [SMALL_STATE(305)] = 10497,
  [SMALL_STATE(306)] = 10513,
  [SMALL_STATE(307)] = 10527,
  [SMALL_STATE(308)] = 10543,
  [SMALL_STATE(309)] = 10553,
  [SMALL_STATE(310)] = 10563,
  [SMALL_STATE(311)] = 10579,
  [SMALL_STATE(312)] = 10595,
  [SMALL_STATE(313)] = 10609,
  [SMALL_STATE(314)] = 10625,
  [SMALL_STATE(315)] = 10637,
  [SMALL_STATE(316)] = 10653,
  [SMALL_STATE(317)] = 10669,
  [SMALL_STATE(318)] = 10679,
  [SMALL_STATE(319)] = 10695,
  [SMALL_STATE(320)] = 10705,
  [SMALL_STATE(321)] = 10719,
  [SMALL_STATE(322)] = 10735,
  [SMALL_STATE(323)] = 10749,
  [SMALL_STATE(324)] = 10763,
  [SMALL_STATE(325)] = 10779,
  [SMALL_STATE(326)] = 10795,
  [SMALL_STATE(327)] = 10805,
  [SMALL_STATE(328)] = 10815,
  [SMALL_STATE(329)] = 10823,
  [SMALL_STATE(330)] = 10835,
  [SMALL_STATE(331)] = 10845,
  [SMALL_STATE(332)] = 10855,
  [SMALL_STATE(333)] = 10869,
  [SMALL_STATE(334)] = 10883,
  [SMALL_STATE(335)] = 10897,
  [SMALL_STATE(336)] = 10911,
  [SMALL_STATE(337)] = 10923,
  [SMALL_STATE(338)] = 10937,
  [SMALL_STATE(339)] = 10947,
  [SMALL_STATE(340)] = 10957,
  [SMALL_STATE(341)] = 10971,
  [SMALL_STATE(342)] = 10983,
  [SMALL_STATE(343)] = 10992,
  [SMALL_STATE(344)] = 11005,
  [SMALL_STATE(345)] = 11018,
  [SMALL_STATE(346)] = 11031,
  [SMALL_STATE(347)] = 11044,
  [SMALL_STATE(348)] = 11057,
  [SMALL_STATE(349)] = 11070,
  [SMALL_STATE(350)] = 11083,
  [SMALL_STATE(351)] = 11096,
  [SMALL_STATE(352)] = 11109,
  [SMALL_STATE(353)] = 11122,
  [SMALL_STATE(354)] = 11135,
  [SMALL_STATE(355)] = 11148,
  [SMALL_STATE(356)] = 11161,
  [SMALL_STATE(357)] = 11174,
  [SMALL_STATE(358)] = 11187,
  [SMALL_STATE(359)] = 11200,
  [SMALL_STATE(360)] = 11213,
  [SMALL_STATE(361)] = 11226,
  [SMALL_STATE(362)] = 11239,
  [SMALL_STATE(363)] = 11252,
  [SMALL_STATE(364)] = 11265,
  [SMALL_STATE(365)] = 11278,
  [SMALL_STATE(366)] = 11291,
  [SMALL_STATE(367)] = 11304,
  [SMALL_STATE(368)] = 11317,
  [SMALL_STATE(369)] = 11330,
  [SMALL_STATE(370)] = 11343,
  [SMALL_STATE(371)] = 11356,
  [SMALL_STATE(372)] = 11369,
  [SMALL_STATE(373)] = 11382,
  [SMALL_STATE(374)] = 11393,
  [SMALL_STATE(375)] = 11406,
  [SMALL_STATE(376)] = 11419,
  [SMALL_STATE(377)] = 11432,
  [SMALL_STATE(378)] = 11445,
  [SMALL_STATE(379)] = 11458,
  [SMALL_STATE(380)] = 11471,
  [SMALL_STATE(381)] = 11480,
  [SMALL_STATE(382)] = 11493,
  [SMALL_STATE(383)] = 11506,
  [SMALL_STATE(384)] = 11519,
  [SMALL_STATE(385)] = 11532,
  [SMALL_STATE(386)] = 11543,
  [SMALL_STATE(387)] = 11556,
  [SMALL_STATE(388)] = 11569,
  [SMALL_STATE(389)] = 11582,
  [SMALL_STATE(390)] = 11595,
  [SMALL_STATE(391)] = 11608,
  [SMALL_STATE(392)] = 11617,
  [SMALL_STATE(393)] = 11630,
  [SMALL_STATE(394)] = 11643,
  [SMALL_STATE(395)] = 11656,
  [SMALL_STATE(396)] = 11669,
  [SMALL_STATE(397)] = 11682,
  [SMALL_STATE(398)] = 11695,
  [SMALL_STATE(399)] = 11708,
  [SMALL_STATE(400)] = 11721,
  [SMALL_STATE(401)] = 11734,
  [SMALL_STATE(402)] = 11747,
  [SMALL_STATE(403)] = 11760,
  [SMALL_STATE(404)] = 11769,
  [SMALL_STATE(405)] = 11782,
  [SMALL_STATE(406)] = 11791,
  [SMALL_STATE(407)] = 11804,
  [SMALL_STATE(408)] = 11813,
  [SMALL_STATE(409)] = 11822,
  [SMALL_STATE(410)] = 11833,
  [SMALL_STATE(411)] = 11844,
  [SMALL_STATE(412)] = 11857,
  [SMALL_STATE(413)] = 11870,
  [SMALL_STATE(414)] = 11883,
  [SMALL_STATE(415)] = 11896,
  [SMALL_STATE(416)] = 11907,
  [SMALL_STATE(417)] = 11918,
  [SMALL_STATE(418)] = 11931,
  [SMALL_STATE(419)] = 11944,
  [SMALL_STATE(420)] = 11957,
  [SMALL_STATE(421)] = 11970,
  [SMALL_STATE(422)] = 11981,
  [SMALL_STATE(423)] = 11992,
  [SMALL_STATE(424)] = 12003,
  [SMALL_STATE(425)] = 12016,
  [SMALL_STATE(426)] = 12027,
  [SMALL_STATE(427)] = 12040,
  [SMALL_STATE(428)] = 12049,
  [SMALL_STATE(429)] = 12058,
  [SMALL_STATE(430)] = 12071,
  [SMALL_STATE(431)] = 12084,
  [SMALL_STATE(432)] = 12093,
  [SMALL_STATE(433)] = 12102,
  [SMALL_STATE(434)] = 12115,
  [SMALL_STATE(435)] = 12128,
  [SMALL_STATE(436)] = 12136,
  [SMALL_STATE(437)] = 12146,
  [SMALL_STATE(438)] = 12156,
  [SMALL_STATE(439)] = 12166,
  [SMALL_STATE(440)] = 12176,
  [SMALL_STATE(441)] = 12186,
  [SMALL_STATE(442)] = 12196,
  [SMALL_STATE(443)] = 12206,
  [SMALL_STATE(444)] = 12216,
  [SMALL_STATE(445)] = 12226,
  [SMALL_STATE(446)] = 12236,
  [SMALL_STATE(447)] = 12246,
  [SMALL_STATE(448)] = 12256,
  [SMALL_STATE(449)] = 12264,
  [SMALL_STATE(450)] = 12272,
  [SMALL_STATE(451)] = 12282,
  [SMALL_STATE(452)] = 12290,
  [SMALL_STATE(453)] = 12300,
  [SMALL_STATE(454)] = 12310,
  [SMALL_STATE(455)] = 12320,
  [SMALL_STATE(456)] = 12330,
  [SMALL_STATE(457)] = 12340,
  [SMALL_STATE(458)] = 12350,
  [SMALL_STATE(459)] = 12360,
  [SMALL_STATE(460)] = 12370,
  [SMALL_STATE(461)] = 12380,
  [SMALL_STATE(462)] = 12390,
  [SMALL_STATE(463)] = 12400,
  [SMALL_STATE(464)] = 12410,
  [SMALL_STATE(465)] = 12420,
  [SMALL_STATE(466)] = 12430,
  [SMALL_STATE(467)] = 12440,
  [SMALL_STATE(468)] = 12450,
  [SMALL_STATE(469)] = 12460,
  [SMALL_STATE(470)] = 12470,
  [SMALL_STATE(471)] = 12480,
  [SMALL_STATE(472)] = 12490,
  [SMALL_STATE(473)] = 12497,
  [SMALL_STATE(474)] = 12504,
  [SMALL_STATE(475)] = 12511,
  [SMALL_STATE(476)] = 12518,
  [SMALL_STATE(477)] = 12525,
  [SMALL_STATE(478)] = 12532,
  [SMALL_STATE(479)] = 12539,
  [SMALL_STATE(480)] = 12546,
  [SMALL_STATE(481)] = 12553,
  [SMALL_STATE(482)] = 12560,
  [SMALL_STATE(483)] = 12567,
  [SMALL_STATE(484)] = 12574,
  [SMALL_STATE(485)] = 12581,
  [SMALL_STATE(486)] = 12588,
  [SMALL_STATE(487)] = 12595,
  [SMALL_STATE(488)] = 12602,
  [SMALL_STATE(489)] = 12609,
  [SMALL_STATE(490)] = 12616,
  [SMALL_STATE(491)] = 12623,
  [SMALL_STATE(492)] = 12630,
  [SMALL_STATE(493)] = 12637,
  [SMALL_STATE(494)] = 12644,
  [SMALL_STATE(495)] = 12651,
  [SMALL_STATE(496)] = 12658,
  [SMALL_STATE(497)] = 12665,
  [SMALL_STATE(498)] = 12672,
  [SMALL_STATE(499)] = 12679,
  [SMALL_STATE(500)] = 12686,
  [SMALL_STATE(501)] = 12693,
  [SMALL_STATE(502)] = 12700,
  [SMALL_STATE(503)] = 12707,
  [SMALL_STATE(504)] = 12714,
  [SMALL_STATE(505)] = 12721,
  [SMALL_STATE(506)] = 12728,
  [SMALL_STATE(507)] = 12735,
  [SMALL_STATE(508)] = 12742,
  [SMALL_STATE(509)] = 12749,
  [SMALL_STATE(510)] = 12756,
  [SMALL_STATE(511)] = 12763,
  [SMALL_STATE(512)] = 12770,
  [SMALL_STATE(513)] = 12777,
  [SMALL_STATE(514)] = 12784,
  [SMALL_STATE(515)] = 12791,
  [SMALL_STATE(516)] = 12798,
  [SMALL_STATE(517)] = 12805,
  [SMALL_STATE(518)] = 12812,
  [SMALL_STATE(519)] = 12819,
  [SMALL_STATE(520)] = 12826,
  [SMALL_STATE(521)] = 12833,
  [SMALL_STATE(522)] = 12840,
  [SMALL_STATE(523)] = 12847,
  [SMALL_STATE(524)] = 12854,
  [SMALL_STATE(525)] = 12861,
  [SMALL_STATE(526)] = 12868,
  [SMALL_STATE(527)] = 12875,
  [SMALL_STATE(528)] = 12882,
  [SMALL_STATE(529)] = 12889,
  [SMALL_STATE(530)] = 12896,
  [SMALL_STATE(531)] = 12903,
  [SMALL_STATE(532)] = 12910,
  [SMALL_STATE(533)] = 12917,
  [SMALL_STATE(534)] = 12924,
  [SMALL_STATE(535)] = 12931,
  [SMALL_STATE(536)] = 12938,
  [SMALL_STATE(537)] = 12945,
  [SMALL_STATE(538)] = 12952,
  [SMALL_STATE(539)] = 12959,
  [SMALL_STATE(540)] = 12966,
  [SMALL_STATE(541)] = 12973,
  [SMALL_STATE(542)] = 12980,
  [SMALL_STATE(543)] = 12987,
  [SMALL_STATE(544)] = 12994,
  [SMALL_STATE(545)] = 13001,
  [SMALL_STATE(546)] = 13008,
  [SMALL_STATE(547)] = 13015,
  [SMALL_STATE(548)] = 13022,
  [SMALL_STATE(549)] = 13029,
  [SMALL_STATE(550)] = 13036,
  [SMALL_STATE(551)] = 13043,
  [SMALL_STATE(552)] = 13050,
  [SMALL_STATE(553)] = 13057,
  [SMALL_STATE(554)] = 13064,
  [SMALL_STATE(555)] = 13071,
  [SMALL_STATE(556)] = 13078,
  [SMALL_STATE(557)] = 13085,
  [SMALL_STATE(558)] = 13092,
  [SMALL_STATE(559)] = 13099,
  [SMALL_STATE(560)] = 13106,
  [SMALL_STATE(561)] = 13113,
  [SMALL_STATE(562)] = 13120,
  [SMALL_STATE(563)] = 13127,
  [SMALL_STATE(564)] = 13134,
  [SMALL_STATE(565)] = 13141,
  [SMALL_STATE(566)] = 13148,
  [SMALL_STATE(567)] = 13155,
  [SMALL_STATE(568)] = 13162,
  [SMALL_STATE(569)] = 13169,
  [SMALL_STATE(570)] = 13176,
  [SMALL_STATE(571)] = 13183,
  [SMALL_STATE(572)] = 13190,
  [SMALL_STATE(573)] = 13197,
  [SMALL_STATE(574)] = 13204,
  [SMALL_STATE(575)] = 13211,
  [SMALL_STATE(576)] = 13218,
  [SMALL_STATE(577)] = 13225,
  [SMALL_STATE(578)] = 13232,
  [SMALL_STATE(579)] = 13239,
  [SMALL_STATE(580)] = 13246,
  [SMALL_STATE(581)] = 13253,
  [SMALL_STATE(582)] = 13260,
  [SMALL_STATE(583)] = 13267,
  [SMALL_STATE(584)] = 13274,
  [SMALL_STATE(585)] = 13281,
  [SMALL_STATE(586)] = 13288,
  [SMALL_STATE(587)] = 13295,
  [SMALL_STATE(588)] = 13302,
  [SMALL_STATE(589)] = 13309,
  [SMALL_STATE(590)] = 13316,
  [SMALL_STATE(591)] = 13323,
  [SMALL_STATE(592)] = 13330,
  [SMALL_STATE(593)] = 13337,
  [SMALL_STATE(594)] = 13344,
  [SMALL_STATE(595)] = 13351,
  [SMALL_STATE(596)] = 13358,
  [SMALL_STATE(597)] = 13365,
  [SMALL_STATE(598)] = 13372,
  [SMALL_STATE(599)] = 13379,
  [SMALL_STATE(600)] = 13386,
  [SMALL_STATE(601)] = 13393,
  [SMALL_STATE(602)] = 13400,
  [SMALL_STATE(603)] = 13407,
  [SMALL_STATE(604)] = 13414,
  [SMALL_STATE(605)] = 13421,
  [SMALL_STATE(606)] = 13428,
  [SMALL_STATE(607)] = 13435,
  [SMALL_STATE(608)] = 13442,
  [SMALL_STATE(609)] = 13449,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hurl_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(296),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 3, 0, 0),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [17] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 3, 0, 0),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(364),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(371),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(375),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(378),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(379),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(381),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(546),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(519),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(514),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(551),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(429),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(213),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(224),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(473),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(202),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(229),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(541),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 2, 0, 0),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 2, 0, 0),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 4, 0, 0),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 4, 0, 0),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 5, 0, 0),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 5, 0, 0),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_options_section, 2, 0, 0),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_options_section, 2, 0, 0),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(507),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(506),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(505),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(504),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(503),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(502),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(501),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(500),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(499),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(498),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(497),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(496),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(495),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_options_section, 3, 0, 0),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_options_section, 3, 0, 0),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_options_section_repeat1, 2, 0, 0),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_options_section_repeat1, 2, 0, 0),
  [115] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_options_section_repeat1, 2, 0, 0), SHIFT_REPEAT(507),
  [118] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_options_section_repeat1, 2, 0, 0), SHIFT_REPEAT(506),
  [121] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_options_section_repeat1, 2, 0, 0), SHIFT_REPEAT(505),
  [124] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_options_section_repeat1, 2, 0, 0), SHIFT_REPEAT(504),
  [127] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_options_section_repeat1, 2, 0, 0), SHIFT_REPEAT(503),
  [130] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_options_section_repeat1, 2, 0, 0), SHIFT_REPEAT(502),
  [133] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_options_section_repeat1, 2, 0, 0), SHIFT_REPEAT(501),
  [136] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_options_section_repeat1, 2, 0, 0), SHIFT_REPEAT(500),
  [139] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_options_section_repeat1, 2, 0, 0), SHIFT_REPEAT(499),
  [142] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_options_section_repeat1, 2, 0, 0), SHIFT_REPEAT(498),
  [145] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_options_section_repeat1, 2, 0, 0), SHIFT_REPEAT(497),
  [148] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_options_section_repeat1, 2, 0, 0), SHIFT_REPEAT(496),
  [151] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_options_section_repeat1, 2, 0, 0), SHIFT_REPEAT(495),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response, 3, 0, 0),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_response, 3, 0, 0),
  [158] = {.entry = {.count = 1, .reusable = false}}, SHIFT(393),
  [160] = {.entry = {.count = 1, .reusable = false}}, SHIFT(394),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response, 4, 0, 0),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_response, 4, 0, 0),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__comment_or_new_line_repeat1, 2, 0, 0),
  [168] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__comment_or_new_line_repeat1, 2, 0, 0), SHIFT_REPEAT(14),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__comment_or_new_line_repeat1, 2, 0, 0),
  [173] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__comment_or_new_line_repeat1, 2, 0, 0), SHIFT_REPEAT(14),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__comment_or_new_line, 1, 0, 0),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__comment_or_new_line, 1, 0, 0),
  [182] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(441),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [188] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(593),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [196] = {.entry = {.count = 1, .reusable = false}}, SHIFT(258),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [200] = {.entry = {.count = 1, .reusable = false}}, SHIFT(233),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(443),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option, 1, 0, 0),
  [226] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_option, 1, 0, 0),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_option, 4, 0, 0),
  [230] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_option, 4, 0, 0),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_retry_interval_option, 4, 0, 0),
  [234] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_retry_interval_option, 4, 0, 0),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_retry_option, 4, 0, 0),
  [238] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_retry_option, 4, 0, 0),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_proxy_option, 4, 0, 0),
  [242] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_proxy_option, 4, 0, 0),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path_as_is_option, 4, 0, 0),
  [246] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path_as_is_option, 4, 0, 0),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_max_redirs_option, 4, 0, 0),
  [250] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_max_redirs_option, 4, 0, 0),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insecure_option, 4, 0, 0),
  [254] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_insecure_option, 4, 0, 0),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_follow_redirect_option, 4, 0, 0),
  [258] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_follow_redirect_option, 4, 0, 0),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compressed_option, 4, 0, 0),
  [262] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_compressed_option, 4, 0, 0),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ca_certificate_option, 4, 0, 0),
  [266] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ca_certificate_option, 4, 0, 0),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ca_certificate_option, 3, 0, 0),
  [270] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ca_certificate_option, 3, 0, 0),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_very_verbose_option, 4, 0, 0),
  [274] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_very_verbose_option, 4, 0, 0),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_verbose_option, 4, 0, 0),
  [278] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_verbose_option, 4, 0, 0),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_retry_max_count_option, 4, 0, 0),
  [282] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_retry_max_count_option, 4, 0, 0),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response, 5, 0, 0),
  [286] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_response, 5, 0, 0),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_request_repeat1, 2, 0, 0),
  [290] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_request_repeat1, 2, 0, 0),
  [292] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat1, 2, 0, 0), SHIFT_REPEAT(224),
  [295] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_request_repeat1, 2, 0, 0), SHIFT_REPEAT(473),
  [298] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_request_repeat1, 2, 0, 0), SHIFT_REPEAT(352),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multipart_form_data_section, 3, 0, 0),
  [303] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multipart_form_data_section, 3, 0, 0),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multipart_form_data_section, 5, 0, 0),
  [309] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multipart_form_data_section, 5, 0, 0),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multipart_form_data_section, 4, 0, 0),
  [313] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multipart_form_data_section, 4, 0, 0),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_form_params_section, 4, 0, 0),
  [317] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_form_params_section, 4, 0, 0),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_string_params_section, 5, 0, 0),
  [321] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query_string_params_section, 5, 0, 0),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_asserts_section_repeat1, 2, 0, 0),
  [325] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_asserts_section_repeat1, 2, 0, 0),
  [327] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_asserts_section_repeat1, 2, 0, 0), SHIFT_REPEAT(437),
  [330] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_asserts_section_repeat1, 2, 0, 0), SHIFT_REPEAT(82),
  [333] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_asserts_section_repeat1, 2, 0, 0), SHIFT_REPEAT(462),
  [336] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_asserts_section_repeat1, 2, 0, 0), SHIFT_REPEAT(459),
  [339] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_asserts_section_repeat1, 2, 0, 0), SHIFT_REPEAT(455),
  [342] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_asserts_section_repeat1, 2, 0, 0), SHIFT_REPEAT(468),
  [345] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_asserts_section_repeat1, 2, 0, 0), SHIFT_REPEAT(303),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_asserts_section, 3, 0, 0),
  [350] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_asserts_section, 3, 0, 0),
  [352] = {.entry = {.count = 1, .reusable = false}}, SHIFT(437),
  [354] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [356] = {.entry = {.count = 1, .reusable = false}}, SHIFT(462),
  [358] = {.entry = {.count = 1, .reusable = false}}, SHIFT(459),
  [360] = {.entry = {.count = 1, .reusable = false}}, SHIFT(455),
  [362] = {.entry = {.count = 1, .reusable = false}}, SHIFT(468),
  [364] = {.entry = {.count = 1, .reusable = false}}, SHIFT(303),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_string_params_section, 3, 0, 0),
  [368] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query_string_params_section, 3, 0, 0),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cookies_section, 4, 0, 0),
  [372] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cookies_section, 4, 0, 0),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_string_params_section, 4, 0, 0),
  [376] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query_string_params_section, 4, 0, 0),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_form_params_section, 3, 0, 0),
  [380] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_form_params_section, 3, 0, 0),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cookies_section, 5, 0, 0),
  [384] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cookies_section, 5, 0, 0),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cookies_section, 3, 0, 0),
  [388] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cookies_section, 3, 0, 0),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_form_params_section, 5, 0, 0),
  [392] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_form_params_section, 5, 0, 0),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_asserts_section, 2, 0, 0),
  [396] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_asserts_section, 2, 0, 0),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_request_repeat2, 2, 0, 0),
  [400] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_request_repeat2, 2, 0, 0),
  [402] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat2, 2, 0, 0), SHIFT_REPEAT(364),
  [405] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat2, 2, 0, 0), SHIFT_REPEAT(371),
  [408] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat2, 2, 0, 0), SHIFT_REPEAT(375),
  [411] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat2, 2, 0, 0), SHIFT_REPEAT(378),
  [414] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat2, 2, 0, 0), SHIFT_REPEAT(379),
  [417] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat2, 2, 0, 0), SHIFT_REPEAT(381),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_hurl_file_repeat2, 2, 0, 0),
  [422] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_hurl_file_repeat2, 2, 0, 0), SHIFT_REPEAT(53),
  [425] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_hurl_file_repeat2, 2, 0, 0),
  [427] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_hurl_file_repeat2, 2, 0, 0), SHIFT_REPEAT(53),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [432] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [434] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__comment_or_new_line_repeat1, 2, 0, 0), SHIFT_REPEAT(54),
  [437] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__comment_or_new_line_repeat1, 2, 0, 0), SHIFT_REPEAT(54),
  [440] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_capture_repeat1, 2, 0, 0), SHIFT_REPEAT(441),
  [443] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_capture_repeat1, 2, 0, 0), SHIFT_REPEAT(337),
  [446] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_capture_repeat1, 2, 0, 0),
  [448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_capture_repeat1, 2, 0, 0),
  [450] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_capture_repeat1, 2, 0, 0), SHIFT_REPEAT(74),
  [453] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_capture_repeat1, 2, 0, 0), SHIFT_REPEAT(370),
  [456] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_capture_repeat1, 2, 0, 0), SHIFT_REPEAT(334),
  [459] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_capture_repeat1, 2, 0, 0), SHIFT_REPEAT(443),
  [462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_integer_repeat1, 2, 0, 0),
  [464] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_integer_repeat1, 2, 0, 0),
  [466] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_integer_repeat1, 2, 0, 0), SHIFT_REPEAT(56),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer, 1, 0, 0),
  [471] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer, 1, 0, 0),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 2, 0, 0),
  [477] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 2, 0, 0),
  [479] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__comment_or_new_line_repeat1, 2, 0, 0), SHIFT_REPEAT(59),
  [482] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__comment_or_new_line_repeat1, 2, 0, 0), SHIFT_REPEAT(59),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [487] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [489] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request_section, 1, 0, 0),
  [491] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request_section, 1, 0, 0),
  [493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_basic_auth_section, 4, 0, 0),
  [495] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_basic_auth_section, 4, 0, 0),
  [497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assert, 3, 0, 0),
  [499] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assert, 3, 0, 0),
  [501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assert, 4, 0, 0),
  [503] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assert, 4, 0, 0),
  [505] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_captures_section, 2, 0, 0),
  [507] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_captures_section, 2, 0, 0),
  [509] = {.entry = {.count = 1, .reusable = false}}, SHIFT(241),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(535),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_captures_section_repeat1, 2, 0, 0),
  [517] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_captures_section_repeat1, 2, 0, 0),
  [519] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_captures_section_repeat1, 2, 0, 0), SHIFT_REPEAT(241),
  [522] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_captures_section_repeat1, 2, 0, 0), SHIFT_REPEAT(535),
  [525] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_captures_section_repeat1, 2, 0, 0), SHIFT_REPEAT(346),
  [528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_captures_section, 3, 0, 0),
  [530] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_captures_section, 3, 0, 0),
  [532] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_string, 3, 0, 0),
  [534] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_string, 3, 0, 0),
  [536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_string, 2, 0, 0),
  [538] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_string, 2, 0, 0),
  [540] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regex, 2, 0, 0),
  [542] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_regex, 2, 0, 0),
  [544] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regex, 3, 0, 0),
  [546] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_regex, 3, 0, 0),
  [548] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regex_filter, 2, 0, 0),
  [550] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_regex_filter, 2, 0, 0),
  [552] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filter, 1, 0, 0),
  [554] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_filter, 1, 0, 0),
  [556] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xpath_filter, 2, 0, 0),
  [558] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xpath_filter, 2, 0, 0),
  [560] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nth_filter, 2, 0, 0),
  [562] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nth_filter, 2, 0, 0),
  [564] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_split_filter, 2, 0, 0),
  [566] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_split_filter, 2, 0, 0),
  [568] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_replace_filter, 3, 0, 0),
  [570] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_replace_filter, 3, 0, 0),
  [572] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regex_query, 2, 0, 0),
  [574] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_regex_query, 2, 0, 0),
  [576] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_query, 2, 0, 0),
  [578] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header_query, 2, 0, 0),
  [580] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_query, 2, 0, 0),
  [582] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_query, 2, 0, 0),
  [584] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query, 1, 0, 0),
  [586] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query, 1, 0, 0),
  [588] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jsonpath_query, 2, 0, 0),
  [590] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_jsonpath_query, 2, 0, 0),
  [592] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xpath_query, 2, 0, 0),
  [594] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xpath_query, 2, 0, 0),
  [596] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cookie_query, 2, 0, 0),
  [598] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cookie_query, 2, 0, 0),
  [600] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_response_repeat1, 2, 0, 0),
  [602] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_response_repeat1, 2, 0, 0),
  [604] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_response_repeat1, 2, 0, 0), SHIFT_REPEAT(393),
  [607] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_response_repeat1, 2, 0, 0), SHIFT_REPEAT(394),
  [610] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__comment_or_new_line_repeat1, 2, 0, 0), SHIFT_REPEAT(87),
  [613] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__comment_or_new_line_repeat1, 2, 0, 0), SHIFT_REPEAT(87),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [618] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [620] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_capture, 5, 0, 0),
  [622] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_capture, 5, 0, 0),
  [624] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_capture, 4, 0, 0),
  [626] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_capture, 4, 0, 0),
  [628] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response_section, 1, 0, 0),
  [630] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_response_section, 1, 0, 0),
  [632] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entry, 1, 0, 0),
  [634] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_entry, 1, 0, 0),
  [636] = {.entry = {.count = 1, .reusable = false}}, SHIFT(451),
  [638] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entry, 2, 0, 0),
  [640] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_entry, 2, 0, 0),
  [642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [644] = {.entry = {.count = 1, .reusable = false}}, SHIFT(460),
  [646] = {.entry = {.count = 1, .reusable = false}}, SHIFT(320),
  [648] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [650] = {.entry = {.count = 1, .reusable = false}}, SHIFT(420),
  [652] = {.entry = {.count = 1, .reusable = false}}, SHIFT(340),
  [654] = {.entry = {.count = 1, .reusable = false}}, SHIFT(457),
  [656] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [658] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_hurl_file_repeat1, 2, 0, 0),
  [660] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_hurl_file_repeat1, 2, 0, 0), SHIFT_REPEAT(124),
  [663] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_hurl_file_repeat1, 2, 0, 0), SHIFT_REPEAT(296),
  [666] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_hurl_file_repeat1, 2, 0, 0), SHIFT_REPEAT(124),
  [669] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hurl_file, 1, 0, 0),
  [671] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 2, 0, 0),
  [673] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_body, 2, 0, 0),
  [675] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 6, 0, 0),
  [677] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 6, 0, 0),
  [679] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_capture_repeat1, 2, 0, 0), SHIFT_REPEAT(460),
  [682] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_capture_repeat1, 2, 0, 0), SHIFT_REPEAT(320),
  [685] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_capture_repeat1, 2, 0, 0), SHIFT_REPEAT(147),
  [688] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_capture_repeat1, 2, 0, 0), SHIFT_REPEAT(420),
  [691] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_capture_repeat1, 2, 0, 0), SHIFT_REPEAT(340),
  [694] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_capture_repeat1, 2, 0, 0), SHIFT_REPEAT(457),
  [697] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 1, 0, 0),
  [699] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 2, 0, 0),
  [701] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hurl_file, 2, 0, 0),
  [703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [705] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [707] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_integer_repeat1, 2, 0, 0), SHIFT_REPEAT(111),
  [710] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [712] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_hurl_file_repeat2, 2, 0, 0), SHIFT_REPEAT(60),
  [715] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_hurl_file_repeat2, 2, 0, 0), SHIFT_REPEAT(60),
  [718] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_hurl_file_repeat2, 2, 0, 0), SHIFT_REPEAT(124),
  [721] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_hurl_file_repeat2, 2, 0, 0), SHIFT_REPEAT(124),
  [724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(472),
  [726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(551),
  [730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(541),
  [738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [740] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entry, 3, 0, 0),
  [742] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_entry, 3, 0, 0),
  [744] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_key_value, 2, 0, 0),
  [746] = {.entry = {.count = 1, .reusable = false}}, SHIFT(475),
  [748] = {.entry = {.count = 1, .reusable = false}}, SHIFT(201),
  [750] = {.entry = {.count = 1, .reusable = false}}, SHIFT(268),
  [752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [754] = {.entry = {.count = 1, .reusable = false}}, SHIFT(587),
  [756] = {.entry = {.count = 1, .reusable = false}}, SHIFT(243),
  [758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(566),
  [760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(450),
  [762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(447),
  [766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(446),
  [768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(445),
  [770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [776] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [778] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__comment_or_new_line_repeat1, 2, 0, 0), SHIFT_REPEAT(125),
  [781] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__comment_or_new_line_repeat1, 2, 0, 0), SHIFT_REPEAT(125),
  [784] = {.entry = {.count = 1, .reusable = false}}, SHIFT(580),
  [786] = {.entry = {.count = 1, .reusable = false}}, SHIFT(521),
  [788] = {.entry = {.count = 1, .reusable = false}}, SHIFT(217),
  [790] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [794] = {.entry = {.count = 1, .reusable = false}}, SHIFT(583),
  [796] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entry, 4, 0, 0),
  [798] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_entry, 4, 0, 0),
  [800] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response, 6, 0, 0),
  [802] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_response, 6, 0, 0),
  [804] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_name, 2, 0, 0),
  [806] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_xml_tag_repeat1, 2, 0, 0), SHIFT_REPEAT(519),
  [809] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_xml_tag_repeat1, 2, 0, 0), SHIFT_REPEAT(580),
  [812] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_xml_tag_repeat1, 2, 0, 0),
  [814] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_xml_tag_repeat1, 2, 0, 0), SHIFT_REPEAT(217),
  [817] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_xml_tag_repeat1, 2, 0, 0), SHIFT_REPEAT(222),
  [820] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_xml_tag_repeat1, 2, 0, 0), SHIFT_REPEAT(354),
  [823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(431),
  [825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [827] = {.entry = {.count = 1, .reusable = false}}, SHIFT(227),
  [829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [841] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_string, 1, 0, 0),
  [843] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_string, 1, 0, 0),
  [845] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_value_string_repeat1, 2, 0, 0),
  [847] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_string_repeat1, 2, 0, 0), SHIFT_REPEAT(217),
  [850] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_string_repeat1, 2, 0, 0), SHIFT_REPEAT(222),
  [853] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_value_string_repeat1, 2, 0, 0), SHIFT_REPEAT(354),
  [856] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [858] = {.entry = {.count = 1, .reusable = false}}, SHIFT(385),
  [860] = {.entry = {.count = 1, .reusable = false}}, SHIFT(247),
  [862] = {.entry = {.count = 1, .reusable = false}}, SHIFT(345),
  [864] = {.entry = {.count = 1, .reusable = false}}, SHIFT(278),
  [866] = {.entry = {.count = 1, .reusable = false}}, SHIFT(210),
  [868] = {.entry = {.count = 1, .reusable = false}}, SHIFT(545),
  [870] = {.entry = {.count = 1, .reusable = false}}, SHIFT(212),
  [872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [874] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_string_repeat1, 2, 0, 0), SHIFT_REPEAT(201),
  [877] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_string_repeat1, 2, 0, 0), SHIFT_REPEAT(268),
  [880] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_value_string_repeat1, 2, 0, 0), SHIFT_REPEAT(388),
  [883] = {.entry = {.count = 1, .reusable = false}}, SHIFT(279),
  [885] = {.entry = {.count = 1, .reusable = false}}, SHIFT(557),
  [887] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multiline_string_repeat1, 2, 0, 0), SHIFT_REPEAT(214),
  [890] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multiline_string_repeat1, 2, 0, 0), SHIFT_REPEAT(210),
  [893] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_multiline_string_repeat1, 2, 0, 0),
  [895] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multiline_string_repeat1, 2, 0, 0), SHIFT_REPEAT(212),
  [898] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_multiline_string_repeat1, 2, 0, 0), SHIFT_REPEAT(350),
  [901] = {.entry = {.count = 1, .reusable = false}}, SHIFT(273),
  [903] = {.entry = {.count = 1, .reusable = false}}, SHIFT(540),
  [905] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [907] = {.entry = {.count = 1, .reusable = false}}, SHIFT(225),
  [909] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [911] = {.entry = {.count = 1, .reusable = false}}, SHIFT(349),
  [913] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_quoted_string_repeat1, 2, 0, 0),
  [915] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_string_repeat1, 2, 0, 0), SHIFT_REPEAT(225),
  [918] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_string_repeat1, 2, 0, 0), SHIFT_REPEAT(193),
  [921] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_string_repeat1, 2, 0, 0), SHIFT_REPEAT(349),
  [924] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [926] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_key_string_repeat1, 2, 0, 0),
  [928] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_key_string_repeat1, 2, 0, 0),
  [930] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_string_repeat1, 2, 0, 0), SHIFT_REPEAT(224),
  [933] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_string_repeat1, 2, 0, 0), SHIFT_REPEAT(473),
  [936] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_string_repeat1, 2, 0, 0), SHIFT_REPEAT(352),
  [939] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_value_string_content_repeat1, 2, 0, 0),
  [941] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_string_content_repeat1, 2, 0, 0), SHIFT_REPEAT(217),
  [944] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_string_content_repeat1, 2, 0, 0), SHIFT_REPEAT(222),
  [947] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_value_string_content_repeat1, 2, 0, 0),
  [949] = {.entry = {.count = 1, .reusable = false}}, SHIFT(252),
  [951] = {.entry = {.count = 1, .reusable = false}}, SHIFT(536),
  [953] = {.entry = {.count = 1, .reusable = false}}, SHIFT(534),
  [955] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [957] = {.entry = {.count = 1, .reusable = false}}, SHIFT(484),
  [959] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [961] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_string_content, 1, 0, 0),
  [963] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_string_content, 1, 0, 0),
  [965] = {.entry = {.count = 1, .reusable = false}}, SHIFT(562),
  [967] = {.entry = {.count = 1, .reusable = false}}, SHIFT(373),
  [969] = {.entry = {.count = 1, .reusable = false}}, SHIFT(234),
  [971] = {.entry = {.count = 1, .reusable = false}}, SHIFT(369),
  [973] = {.entry = {.count = 1, .reusable = false}}, SHIFT(442),
  [975] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [977] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_oneline_string_repeat1, 2, 0, 0), SHIFT_REPEAT(252),
  [980] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_oneline_string_repeat1, 2, 0, 0),
  [982] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_oneline_string_repeat1, 2, 0, 0), SHIFT_REPEAT(534),
  [985] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_oneline_string_repeat1, 2, 0, 0), SHIFT_REPEAT(367),
  [988] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_string, 1, 0, 0),
  [990] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_key_string, 1, 0, 0),
  [992] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_filename, 1, 0, 0),
  [994] = {.entry = {.count = 1, .reusable = false}}, SHIFT(308),
  [996] = {.entry = {.count = 1, .reusable = false}}, SHIFT(309),
  [998] = {.entry = {.count = 1, .reusable = false}}, SHIFT(453),
  [1000] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_string_repeat1, 2, 0, 0), SHIFT_REPEAT(241),
  [1003] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_string_repeat1, 2, 0, 0), SHIFT_REPEAT(535),
  [1006] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_string_repeat1, 2, 0, 0), SHIFT_REPEAT(346),
  [1009] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [1011] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_filename_repeat1, 2, 0, 0),
  [1013] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_filename_repeat1, 2, 0, 0), SHIFT_REPEAT(373),
  [1016] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_filename_repeat1, 2, 0, 0), SHIFT_REPEAT(234),
  [1019] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_filename_repeat1, 2, 0, 0), SHIFT_REPEAT(369),
  [1022] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_filename_repeat1, 2, 0, 0), SHIFT_REPEAT(385),
  [1025] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_filename_repeat1, 2, 0, 0), SHIFT_REPEAT(247),
  [1028] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_filename_repeat1, 2, 0, 0), SHIFT_REPEAT(345),
  [1031] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_string_repeat1, 2, 0, 0), SHIFT_REPEAT(243),
  [1034] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_string_repeat1, 2, 0, 0), SHIFT_REPEAT(566),
  [1037] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_string_repeat1, 2, 0, 0), SHIFT_REPEAT(372),
  [1040] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [1042] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [1044] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
  [1046] = {.entry = {.count = 1, .reusable = false}}, SHIFT(317),
  [1048] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [1050] = {.entry = {.count = 1, .reusable = false}}, SHIFT(531),
  [1052] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multiline_string_content_repeat1, 2, 0, 0), SHIFT_REPEAT(203),
  [1055] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multiline_string_content_repeat1, 2, 0, 0), SHIFT_REPEAT(210),
  [1058] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_multiline_string_content_repeat1, 2, 0, 0),
  [1060] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multiline_string_content_repeat1, 2, 0, 0), SHIFT_REPEAT(212),
  [1063] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_multiline_string_content_repeat1, 2, 0, 0),
  [1065] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__multiline_string_text, 2, 0, 0),
  [1067] = {.entry = {.count = 1, .reusable = false}}, SHIFT(211),
  [1069] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multiline_string_text, 2, 0, 0),
  [1071] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [1073] = {.entry = {.count = 1, .reusable = true}}, SHIFT(488),
  [1075] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_json_string_repeat1, 2, 0, 0),
  [1077] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_string_repeat1, 2, 0, 0), SHIFT_REPEAT(205),
  [1080] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_string_repeat1, 2, 0, 0), SHIFT_REPEAT(314),
  [1083] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_json_string_repeat1, 2, 0, 0), SHIFT_REPEAT(368),
  [1086] = {.entry = {.count = 1, .reusable = false}}, SHIFT(485),
  [1088] = {.entry = {.count = 1, .reusable = false}}, SHIFT(205),
  [1090] = {.entry = {.count = 1, .reusable = false}}, SHIFT(314),
  [1092] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [1094] = {.entry = {.count = 1, .reusable = false}}, SHIFT(331),
  [1096] = {.entry = {.count = 1, .reusable = false}}, SHIFT(293),
  [1098] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [1100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(452),
  [1102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__multiline_string_text_repeat1, 2, 0, 0),
  [1104] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__multiline_string_text_repeat1, 2, 0, 0), SHIFT_REPEAT(211),
  [1107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__multiline_string_text_repeat1, 2, 0, 0),
  [1109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__multiline_string_text, 1, 0, 0),
  [1111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(204),
  [1113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multiline_string_text, 1, 0, 0),
  [1115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(538),
  [1117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline_string_content, 1, 0, 0),
  [1119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_string_content, 1, 0, 0),
  [1121] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_string_content_repeat1, 2, 0, 0), SHIFT_REPEAT(201),
  [1124] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_string_content_repeat1, 2, 0, 0), SHIFT_REPEAT(268),
  [1127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [1129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(461),
  [1131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(237),
  [1133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneline_string_content, 1, 0, 0),
  [1135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneline_string_content, 1, 0, 0),
  [1137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_value_string_text_repeat1, 2, 0, 0),
  [1139] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_string_text_repeat1, 2, 0, 0), SHIFT_REPEAT(219),
  [1142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_value_string_text_repeat1, 2, 0, 0),
  [1144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_key_string_content_repeat1, 2, 0, 0),
  [1146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_key_string_content_repeat1, 2, 0, 0),
  [1148] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_string_content_repeat1, 2, 0, 0), SHIFT_REPEAT(220),
  [1151] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_string_content_repeat1, 2, 0, 0), SHIFT_REPEAT(473),
  [1154] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_integer_repeat1, 2, 0, 0), SHIFT_REPEAT(221),
  [1157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_string_text, 1, 0, 0),
  [1159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(219),
  [1161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_string_text, 1, 0, 0),
  [1163] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_oneline_string_content_repeat1, 2, 0, 0), SHIFT_REPEAT(252),
  [1166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_oneline_string_content_repeat1, 2, 0, 0),
  [1168] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_oneline_string_content_repeat1, 2, 0, 0), SHIFT_REPEAT(534),
  [1171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_oneline_string_content_repeat1, 2, 0, 0),
  [1173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_string_content, 1, 0, 0),
  [1175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_key_string_content, 1, 0, 0),
  [1177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_string_content, 1, 0, 0),
  [1179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(228),
  [1181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [1183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [1185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [1187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_quoted_string_content_repeat1, 2, 0, 0),
  [1189] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_string_content_repeat1, 2, 0, 0), SHIFT_REPEAT(228),
  [1192] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_string_content_repeat1, 2, 0, 0), SHIFT_REPEAT(193),
  [1195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(529),
  [1197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_number, 1, 0, 0),
  [1199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(464),
  [1201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [1203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(458),
  [1205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [1207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_filename_content_repeat1, 2, 0, 0),
  [1209] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_filename_content_repeat1, 2, 0, 0), SHIFT_REPEAT(385),
  [1212] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_filename_content_repeat1, 2, 0, 0), SHIFT_REPEAT(232),
  [1215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_filename_content, 1, 0, 0),
  [1217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xml_open_tag, 3, 0, 0),
  [1219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xml_open_tag, 3, 0, 0),
  [1221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_string_escaped_char, 2, 0, 0),
  [1223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_string_escaped_char, 2, 0, 0),
  [1225] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_string_content_repeat1, 2, 0, 0), SHIFT_REPEAT(238),
  [1228] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_string_content_repeat1, 2, 0, 0), SHIFT_REPEAT(535),
  [1231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xml_close_tag, 3, 0, 0),
  [1233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xml_close_tag, 3, 0, 0),
  [1235] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_string_content_repeat1, 2, 0, 0), SHIFT_REPEAT(240),
  [1238] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_string_content_repeat1, 2, 0, 0), SHIFT_REPEAT(566),
  [1241] = {.entry = {.count = 1, .reusable = false}}, SHIFT(532),
  [1243] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [1245] = {.entry = {.count = 1, .reusable = false}}, SHIFT(271),
  [1247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fraction, 2, 0, 0),
  [1249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unicode_char, 6, 0, 0),
  [1251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unicode_char, 6, 0, 0),
  [1253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_string_escaped_char, 3, 0, 0),
  [1255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_string_escaped_char, 3, 0, 0),
  [1257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xml_tag, 2, 0, 0),
  [1259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xml_tag, 2, 0, 0),
  [1261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [1263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(471),
  [1265] = {.entry = {.count = 1, .reusable = false}}, SHIFT(288),
  [1267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xml_prolog_tag, 3, 0, 0),
  [1269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xml_prolog_tag, 3, 0, 0),
  [1271] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_filename_content_repeat1, 2, 0, 0), SHIFT_REPEAT(373),
  [1274] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_filename_content_repeat1, 2, 0, 0), SHIFT_REPEAT(255),
  [1277] = {.entry = {.count = 1, .reusable = false}}, SHIFT(463),
  [1279] = {.entry = {.count = 1, .reusable = false}}, SHIFT(284),
  [1281] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_number, 1, 0, 0),
  [1283] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [1285] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xml_tag, 3, 0, 0),
  [1287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xml_tag, 3, 0, 0),
  [1289] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_template, 3, 0, 0),
  [1291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template, 3, 0, 0),
  [1293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(514),
  [1295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_number, 2, 0, 0),
  [1297] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fraction, 2, 0, 0),
  [1299] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__comment_or_new_line_repeat1, 2, 0, 0), SHIFT_REPEAT(266),
  [1302] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__comment_or_new_line_repeat1, 2, 0, 0), SHIFT_REPEAT(266),
  [1305] = {.entry = {.count = 1, .reusable = false}}, SHIFT(272),
  [1307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_string_escaped_char, 2, 0, 0),
  [1309] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_key_string_escaped_char, 2, 0, 0),
  [1311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_value, 1, 0, 0),
  [1313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_key_string_repeat1, 1, 0, 0),
  [1315] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_value, 1, 0, 0),
  [1317] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_regex_content, 1, 0, 0),
  [1319] = {.entry = {.count = 1, .reusable = false}}, SHIFT(275),
  [1321] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_string_text_repeat1, 2, 0, 0), SHIFT_REPEAT(272),
  [1324] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_multiline_string_content_repeat1, 1, 0, 0),
  [1326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_multiline_string_content_repeat1, 1, 0, 0),
  [1328] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_regex_content_repeat1, 2, 0, 0), SHIFT_REPEAT(532),
  [1331] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_regex_content_repeat1, 2, 0, 0),
  [1333] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_regex_content_repeat1, 2, 0, 0), SHIFT_REPEAT(275),
  [1336] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline_string_escaped_char, 2, 0, 0),
  [1338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_string_escaped_char, 2, 0, 0),
  [1340] = {.entry = {.count = 1, .reusable = false}}, SHIFT(528),
  [1342] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline_string_escaped_char, 3, 0, 0),
  [1344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_string_escaped_char, 3, 0, 0),
  [1346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [1348] = {.entry = {.count = 1, .reusable = false}}, SHIFT(266),
  [1350] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_xml_repeat1, 2, 0, 0),
  [1352] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_xml_repeat1, 2, 0, 0), SHIFT_REPEAT(514),
  [1355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(434),
  [1357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(466),
  [1359] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_number, 2, 0, 0),
  [1361] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneline_string_escaped_char, 3, 0, 0),
  [1363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneline_string_escaped_char, 3, 0, 0),
  [1365] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneline_string_escaped_char, 2, 0, 0),
  [1367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneline_string_escaped_char, 2, 0, 0),
  [1369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exponent, 3, 0, 0),
  [1371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_string, 2, 0, 0),
  [1373] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_string_escaped_char, 6, 0, 0),
  [1375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_string_escaped_char, 6, 0, 0),
  [1377] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_method, 1, 0, 0),
  [1379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method, 1, 0, 0),
  [1381] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_multipart_form_data_section_repeat1, 2, 0, 0), SHIFT_REPEAT(281),
  [1384] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multipart_form_data_section_repeat1, 2, 0, 0), SHIFT_REPEAT(281),
  [1387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [1389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [1391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exponent, 2, 0, 0),
  [1393] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_string_escaped_char, 2, 0, 0),
  [1395] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_invalid_quoted_string_escaped_char, 2, 0, 0),
  [1397] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_query_string_params_section_repeat1, 2, 0, 0), SHIFT_REPEAT(281),
  [1400] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_string_params_section_repeat1, 2, 0, 0), SHIFT_REPEAT(281),
  [1403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [1405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(467),
  [1407] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_string_content, 1, 0, 0),
  [1409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_string_content, 1, 0, 0),
  [1411] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_string_escaped_char, 3, 0, 0),
  [1413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [1415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [1417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(470),
  [1419] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_filename_escaped_char, 2, 0, 0),
  [1421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_string, 3, 0, 0),
  [1423] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_string_escaped_char, 2, 0, 0),
  [1425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_string_escaped_char, 2, 0, 0),
  [1427] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneline_string_text, 2, 0, 0),
  [1429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneline_string_text, 2, 0, 0),
  [1431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_number, 3, 0, 0),
  [1433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [1435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(559),
  [1437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [1439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(589),
  [1441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [1443] = {.entry = {.count = 1, .reusable = false}}, SHIFT(281),
  [1445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [1447] = {.entry = {.count = 1, .reusable = false}}, SHIFT(330),
  [1449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [1451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [1453] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_regex_escaped_char, 2, 0, 0),
  [1455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [1457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [1459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [1461] = {.entry = {.count = 1, .reusable = false}}, SHIFT(328),
  [1463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(490),
  [1465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [1467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(482),
  [1469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(478),
  [1471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_predicate_value, 1, 0, 0),
  [1473] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_predicate_value, 1, 0, 0),
  [1475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_greater_predicate, 2, 0, 0),
  [1477] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_greater_predicate, 2, 0, 0),
  [1479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_greater_or_equal_predicate, 2, 0, 0),
  [1481] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_greater_or_equal_predicate, 2, 0, 0),
  [1483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_oneline_hex_repeat1, 2, 0, 0),
  [1485] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_oneline_hex_repeat1, 2, 0, 0), SHIFT_REPEAT(401),
  [1488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_less_predicate, 2, 0, 0),
  [1490] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_less_predicate, 2, 0, 0),
  [1492] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_array, 4, 0, 0),
  [1494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_less_or_equal_predicate, 2, 0, 0),
  [1496] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_less_or_equal_predicate, 2, 0, 0),
  [1498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_object, 4, 0, 0),
  [1500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(558),
  [1502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_array, 3, 0, 0),
  [1504] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_object, 3, 0, 0),
  [1506] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_value, 1, 0, 0),
  [1508] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_value, 1, 0, 0),
  [1510] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_exponent, 3, 0, 0),
  [1512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(553),
  [1514] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_json_array_repeat1, 2, 0, 0), SHIFT_REPEAT(153),
  [1517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_json_array_repeat1, 2, 0, 0),
  [1519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_value, 3, 0, 0),
  [1521] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_key_value, 3, 0, 0),
  [1523] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_object, 2, 0, 0),
  [1525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(544),
  [1527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [1529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_json_object_repeat1, 2, 0, 0),
  [1531] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_json_object_repeat1, 2, 0, 0), SHIFT_REPEAT(297),
  [1534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1, 0, 0),
  [1536] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_exponent, 2, 0, 0),
  [1538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [1540] = {.entry = {.count = 1, .reusable = false}}, SHIFT(456),
  [1542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(483),
  [1544] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_value, 3, 0, 0),
  [1546] = {.entry = {.count = 1, .reusable = false}}, SHIFT(561),
  [1548] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_file_value, 3, 0, 0),
  [1550] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_value, 2, 0, 0),
  [1552] = {.entry = {.count = 1, .reusable = false}}, SHIFT(592),
  [1554] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_file_value, 2, 0, 0),
  [1556] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_key_value, 3, 0, 0),
  [1558] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version, 1, 0, 0),
  [1560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(608),
  [1562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(609),
  [1564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [1566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [1568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(607),
  [1570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [1572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [1574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [1576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [1578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [1580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(606),
  [1582] = {.entry = {.count = 1, .reusable = false}}, SHIFT(269),
  [1584] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_number, 3, 0, 0),
  [1586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(560),
  [1588] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_array, 3, 0, 0),
  [1590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [1592] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_match_predicate, 2, 0, 0),
  [1594] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_match_predicate, 2, 0, 0),
  [1596] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contain_predicate, 2, 0, 0),
  [1598] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_contain_predicate, 2, 0, 0),
  [1600] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_object, 3, 0, 0),
  [1602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(513),
  [1604] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneline_string, 3, 0, 0),
  [1606] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneline_string, 3, 0, 0),
  [1608] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_string, 3, 0, 0),
  [1610] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_end_with_predicate, 2, 0, 0),
  [1612] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_end_with_predicate, 2, 0, 0),
  [1614] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_with_predicate, 2, 0, 0),
  [1616] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_with_predicate, 2, 0, 0),
  [1618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(552),
  [1620] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneline_hex, 3, 0, 0),
  [1622] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneline_hex, 3, 0, 0),
  [1624] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneline_base64, 3, 0, 0),
  [1626] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneline_base64, 3, 0, 0),
  [1628] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneline_file, 3, 0, 0),
  [1630] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneline_file, 3, 0, 0),
  [1632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [1634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [1636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [1638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [1640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [1642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [1644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [1646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [1648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [1650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [1652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [1654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [1656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [1658] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bytes, 1, 0, 0),
  [1660] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bytes, 1, 0, 0),
  [1662] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multipart_form_data_param, 1, 0, 0),
  [1664] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multipart_form_data_param, 1, 0, 0),
  [1666] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xml, 1, 0, 0),
  [1668] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xml, 1, 0, 0),
  [1670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(525),
  [1672] = {.entry = {.count = 1, .reusable = false}}, SHIFT(595),
  [1674] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_not_equal_predicate, 2, 0, 0),
  [1676] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_not_equal_predicate, 2, 0, 0),
  [1678] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_equal_predicate, 2, 0, 0),
  [1680] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_equal_predicate, 2, 0, 0),
  [1682] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xml, 2, 0, 0),
  [1684] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xml, 2, 0, 0),
  [1686] = {.entry = {.count = 1, .reusable = false}}, SHIFT(549),
  [1688] = {.entry = {.count = 1, .reusable = false}}, SHIFT(477),
  [1690] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_predicate, 2, 0, 0),
  [1692] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_include_predicate, 2, 0, 0),
  [1694] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1696] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_predicate, 2, 0, 0),
  [1698] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_predicate, 2, 0, 0),
  [1700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(547),
  [1702] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_key_string, 1, 0, 1),
  [1704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [1706] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_string, 6, 0, 0),
  [1708] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline_string, 6, 0, 0),
  [1710] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_object, 2, 0, 0),
  [1712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [1714] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_string_type, 1, 0, 0),
  [1716] = {.entry = {.count = 1, .reusable = false}}, SHIFT(380),
  [1718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [1720] = {.entry = {.count = 1, .reusable = false}}, SHIFT(341),
  [1722] = {.entry = {.count = 1, .reusable = false}}, SHIFT(304),
  [1724] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneline_string, 2, 0, 0),
  [1726] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneline_string, 2, 0, 0),
  [1728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [1730] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_string, 2, 0, 0),
  [1732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [1734] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_string, 3, 0, 0),
  [1736] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline_string, 3, 0, 0),
  [1738] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1, 0, 0),
  [1740] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_multipart_form_data_section_repeat1, 2, 0, 0),
  [1742] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_multipart_form_data_section_repeat1, 2, 0, 0),
  [1744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [1746] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneline_hex, 2, 0, 0),
  [1748] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneline_hex, 2, 0, 0),
  [1750] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_string, 5, 0, 0),
  [1752] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline_string, 5, 0, 0),
  [1754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(585),
  [1756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(491),
  [1758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [1760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(492),
  [1762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(548),
  [1764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(596),
  [1766] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_status, 1, 0, 0),
  [1768] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_status, 1, 0, 0),
  [1770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [1772] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_param, 4, 0, 0),
  [1774] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_file_param, 4, 0, 0),
  [1776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [1778] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_string, 4, 0, 0),
  [1780] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline_string, 4, 0, 0),
  [1782] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_object, 4, 0, 0),
  [1784] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_array, 4, 0, 0),
  [1786] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_value, 4, 0, 0),
  [1788] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_file_value, 4, 0, 0),
  [1790] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneline_file, 2, 0, 0),
  [1792] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneline_file, 2, 0, 0),
  [1794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [1796] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float, 2, 0, 0),
  [1798] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float, 2, 0, 0),
  [1800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [1802] = {.entry = {.count = 1, .reusable = false}}, SHIFT(326),
  [1804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [1806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [1808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [1810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [1812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [1814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [1816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [1818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [1820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [1822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [1824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [1826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [1828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(440),
  [1830] = {.entry = {.count = 1, .reusable = false}}, SHIFT(543),
  [1832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [1834] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 3, 0, 0),
  [1836] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_definition, 3, 0, 0),
  [1838] = {.entry = {.count = 1, .reusable = false}}, SHIFT(554),
  [1840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(563),
  [1842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [1844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(567),
  [1846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(569),
  [1848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [1850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(571),
  [1852] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_predicate, 1, 0, 0),
  [1854] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_predicate, 1, 0, 0),
  [1856] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_predicate_func, 1, 0, 0),
  [1858] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_predicate_func, 1, 0, 0),
  [1860] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_query_string_params_section_repeat1, 2, 0, 0),
  [1862] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_query_string_params_section_repeat1, 2, 0, 0),
  [1864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(465),
  [1866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(537),
  [1868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [1870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(584),
  [1872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(586),
  [1874] = {.entry = {.count = 1, .reusable = true}}, SHIFT(588),
  [1876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(590),
  [1878] = {.entry = {.count = 1, .reusable = true}}, SHIFT(598),
  [1880] = {.entry = {.count = 1, .reusable = true}}, SHIFT(599),
  [1882] = {.entry = {.count = 1, .reusable = true}}, SHIFT(600),
  [1884] = {.entry = {.count = 1, .reusable = true}}, SHIFT(601),
  [1886] = {.entry = {.count = 1, .reusable = true}}, SHIFT(602),
  [1888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(603),
  [1890] = {.entry = {.count = 1, .reusable = true}}, SHIFT(604),
  [1892] = {.entry = {.count = 1, .reusable = true}}, SHIFT(605),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_hurl(void) {
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
