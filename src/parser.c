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
#define STATE_COUNT 545
#define LARGE_STATE_COUNT 16
#define SYMBOL_COUNT 314
#define ALIAS_COUNT 1
#define TOKEN_COUNT 146
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 2

enum {
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
  anon_sym_HTTP_SLASH1_DOT0 = 18,
  anon_sym_HTTP_SLASH1_DOT1 = 19,
  anon_sym_HTTP_SLASH2 = 20,
  anon_sym_HTTP_SLASH_STAR = 21,
  aux_sym_status_token1 = 22,
  anon_sym_STAR = 23,
  anon_sym_LBRACKBasicAuth_RBRACK = 24,
  anon_sym_LBRACKQueryStringParams_RBRACK = 25,
  anon_sym_LBRACKFormParams_RBRACK = 26,
  anon_sym_LBRACKMultipartFormData_RBRACK = 27,
  anon_sym_LBRACKCookies_RBRACK = 28,
  anon_sym_LBRACKCaptures_RBRACK = 29,
  anon_sym_LBRACKAsserts_RBRACK = 30,
  anon_sym_LBRACKOptions_RBRACK = 31,
  anon_sym_COLON = 32,
  anon_sym_COLON2 = 33,
  anon_sym_file_COMMA = 34,
  anon_sym_SEMI = 35,
  aux_sym_file_contenttype_token1 = 36,
  anon_sym_cacert = 37,
  anon_sym_location = 38,
  anon_sym_insecure = 39,
  anon_sym_max_DASHredirs = 40,
  anon_sym_retry = 41,
  anon_sym_retry_DASHinterval = 42,
  anon_sym_retry_DASHmax_DASHcount = 43,
  anon_sym_variable = 44,
  anon_sym_verbose = 45,
  anon_sym_very_DASHverbose = 46,
  anon_sym_EQ = 47,
  anon_sym_status = 48,
  anon_sym_url = 49,
  anon_sym_header = 50,
  anon_sym_cookie = 51,
  anon_sym_body = 52,
  anon_sym_xpath = 53,
  anon_sym_jsonpath = 54,
  anon_sym_regex = 55,
  anon_sym_duration = 56,
  anon_sym_sha256 = 57,
  anon_sym_md5 = 58,
  anon_sym_bytes = 59,
  anon_sym_not = 60,
  anon_sym_equals = 61,
  anon_sym_EQ_EQ = 62,
  anon_sym_notEquals = 63,
  anon_sym_BANG_EQ = 64,
  anon_sym_greaterThan = 65,
  anon_sym_GT = 66,
  anon_sym_greaterThanOrEquals = 67,
  anon_sym_GT_EQ = 68,
  anon_sym_lessThan = 69,
  anon_sym_LT = 70,
  anon_sym_lessThanOrEquals = 71,
  anon_sym_LT_EQ = 72,
  anon_sym_startsWith = 73,
  anon_sym_endsWith = 74,
  anon_sym_contains = 75,
  anon_sym_matches = 76,
  anon_sym_exists = 77,
  anon_sym_includes = 78,
  anon_sym_isInteger = 79,
  anon_sym_isFloat = 80,
  anon_sym_isBoolean = 81,
  anon_sym_isString = 82,
  anon_sym_isCollection = 83,
  anon_sym_To_COMMABe_COMMADefined = 84,
  anon_sym_base64_COMMA = 85,
  aux_sym_oneline_base64_token1 = 86,
  anon_sym_hex_COMMA = 87,
  anon_sym_DQUOTE = 88,
  aux_sym_quoted_string_text_token1 = 89,
  anon_sym_BSLASH = 90,
  aux_sym_invalid_quoted_string_escaped_char_token1 = 91,
  anon_sym_b = 92,
  anon_sym_f = 93,
  anon_sym_n = 94,
  anon_sym_r = 95,
  anon_sym_t = 96,
  anon_sym_u = 97,
  sym_key_string_text = 98,
  anon_sym_BSLASH2 = 99,
  aux_sym_key_string_escaped_char_token1 = 100,
  aux_sym_value_string_text_token1 = 101,
  anon_sym_POUND = 102,
  anon_sym_BQUOTE = 103,
  aux_sym_oneline_string_text_token1 = 104,
  aux_sym_oneline_string_text_token2 = 105,
  anon_sym_BQUOTE_BQUOTE_BQUOTE = 106,
  anon_sym_base64 = 107,
  anon_sym_hex = 108,
  anon_sym_json = 109,
  anon_sym_xml = 110,
  anon_sym_graphql = 111,
  aux_sym_multiline_string_text_token1 = 112,
  sym_filename_text = 113,
  aux_sym_filename_escaped_char_token1 = 114,
  anon_sym_LBRACE = 115,
  anon_sym_RBRACE = 116,
  anon_sym_COMMA = 117,
  anon_sym_LBRACK = 118,
  anon_sym_RBRACK = 119,
  aux_sym_json_string_text_token1 = 120,
  anon_sym_LBRACE_LBRACE = 121,
  anon_sym_RBRACE_RBRACE = 122,
  aux_sym_variable_name_token1 = 123,
  aux_sym_variable_name_token2 = 124,
  anon_sym_count = 125,
  anon_sym_urlEncode = 126,
  anon_sym_urlDecode = 127,
  anon_sym_htmlEscape = 128,
  anon_sym_htmlUnescape = 129,
  anon_sym_toInt = 130,
  anon_sym_true = 131,
  anon_sym_false = 132,
  anon_sym_null = 133,
  aux_sym__alphanum_token1 = 134,
  aux_sym_digit_token1 = 135,
  aux_sym_hexdigit_token1 = 136,
  anon_sym_DOT = 137,
  anon_sym_e = 138,
  anon_sym_E = 139,
  anon_sym_PLUS = 140,
  anon_sym_DASH = 141,
  sym_comment = 142,
  anon_sym_SLASH = 143,
  aux_sym_regex_text_token1 = 144,
  aux_sym_regex_escaped_char_token1 = 145,
  sym_hurl_file = 146,
  sym_entry = 147,
  sym__comment_or_new_line = 148,
  sym_request = 149,
  sym_response = 150,
  sym_method = 151,
  sym_version = 152,
  sym_status = 153,
  sym_header = 154,
  sym_body = 155,
  sym_request_section = 156,
  sym_response_section = 157,
  sym_basic_auth_section = 158,
  sym_query_string_params_section = 159,
  sym_form_params_section = 160,
  sym_multipart_form_data_section = 161,
  sym_cookies_section = 162,
  sym_captures_section = 163,
  sym_asserts_section = 164,
  sym_options_section = 165,
  sym_key_value = 166,
  sym_multipart_form_data_param = 167,
  sym_file_param = 168,
  sym_file_value = 169,
  sym_file_contenttype = 170,
  sym_capture = 171,
  sym_assert = 172,
  sym_option = 173,
  sym_ca_certificate_option = 174,
  sym_follow_redirect_option = 175,
  sym_insecure_option = 176,
  sym_max_redirs_option = 177,
  sym_retry_option = 178,
  sym_retry_interval_option = 179,
  sym_retry_max_count_option = 180,
  sym_variable_option = 181,
  sym_verbose_option = 182,
  sym_very_verbose_option = 183,
  sym_variable_definition = 184,
  sym_variable_value = 185,
  sym_query = 186,
  sym_status_query = 187,
  sym_url_query = 188,
  sym_header_query = 189,
  sym_cookie_query = 190,
  sym_body_query = 191,
  sym_xpath_query = 192,
  sym_jsonpath_query = 193,
  sym_regex_query = 194,
  sym_variable_query = 195,
  sym_duration_query = 196,
  sym_sha256_query = 197,
  sym_md5_query = 198,
  sym_bytes_query = 199,
  sym_predicate = 200,
  sym_predicate_func = 201,
  sym_equal_predicate = 202,
  sym_not_equal_predicate = 203,
  sym_greater_predicate = 204,
  sym_greater_or_equal_predicate = 205,
  sym_less_predicate = 206,
  sym_less_or_equal_predicate = 207,
  sym_start_with_predicate = 208,
  sym_end_with_predicate = 209,
  sym_contain_predicate = 210,
  sym_match_predicate = 211,
  sym_exist_predicate = 212,
  sym_include_predicate = 213,
  sym_integer_predicate = 214,
  sym_float_predicate = 215,
  sym_boolean_predicate = 216,
  sym_string_predicate = 217,
  sym_collection_predicate = 218,
  sym_predicate_value = 219,
  sym_bytes = 220,
  sym_xml = 221,
  sym_oneline_base64 = 222,
  sym_oneline_file = 223,
  sym_oneline_hex = 224,
  sym_quoted_string = 225,
  sym_quoted_string_content = 226,
  sym_quoted_string_text = 227,
  sym_invalid_quoted_string_escaped_char = 228,
  sym_quoted_string_escaped_char = 229,
  sym_key_string = 230,
  sym_key_string_content = 231,
  sym_key_string_escaped_char = 232,
  sym_value_string = 233,
  sym_value_string_content = 234,
  sym_value_string_text = 235,
  sym_value_string_escaped_char = 236,
  sym_oneline_string = 237,
  sym_oneline_string_content = 238,
  sym_oneline_string_text = 239,
  sym_oneline_string_escaped_char = 240,
  sym_multiline_string = 241,
  sym_multiline_string_type = 242,
  sym_multiline_string_content = 243,
  sym_multiline_string_text = 244,
  sym_multiline_string_escaped_char = 245,
  sym_filename = 246,
  sym_filename_content = 247,
  sym_filename_escaped_char = 248,
  sym_unicode_char = 249,
  sym_json_value = 250,
  sym_json_object = 251,
  sym_json_key_value = 252,
  sym_json_key_string = 253,
  sym_json_array = 254,
  sym_json_string = 255,
  sym_json_string_content = 256,
  sym_json_string_text = 257,
  sym_json_string_escaped_char = 258,
  sym_json_number = 259,
  sym_template = 260,
  sym_expr = 261,
  sym_variable_name = 262,
  sym_filter = 263,
  sym_regex_filter = 264,
  sym_count_filter = 265,
  sym_url_encode_filter = 266,
  sym_url_decode_filter = 267,
  sym_html_encode_filter = 268,
  sym_html_decode_filter = 269,
  sym_to_int_filter = 270,
  sym_boolean = 271,
  sym_null = 272,
  sym_integer = 273,
  sym_float = 274,
  sym_digit = 275,
  sym_hexdigit = 276,
  sym_fraction = 277,
  sym_exponent = 278,
  sym_regex = 279,
  sym_regex_content = 280,
  sym_regex_text = 281,
  sym_regex_escaped_char = 282,
  aux_sym_hurl_file_repeat1 = 283,
  aux_sym_hurl_file_repeat2 = 284,
  aux_sym__comment_or_new_line_repeat1 = 285,
  aux_sym_request_repeat1 = 286,
  aux_sym_request_repeat2 = 287,
  aux_sym_response_repeat1 = 288,
  aux_sym_query_string_params_section_repeat1 = 289,
  aux_sym_multipart_form_data_section_repeat1 = 290,
  aux_sym_captures_section_repeat1 = 291,
  aux_sym_asserts_section_repeat1 = 292,
  aux_sym_options_section_repeat1 = 293,
  aux_sym_capture_repeat1 = 294,
  aux_sym_oneline_hex_repeat1 = 295,
  aux_sym_quoted_string_repeat1 = 296,
  aux_sym_quoted_string_content_repeat1 = 297,
  aux_sym_key_string_repeat1 = 298,
  aux_sym_key_string_content_repeat1 = 299,
  aux_sym_value_string_repeat1 = 300,
  aux_sym_value_string_content_repeat1 = 301,
  aux_sym_value_string_text_repeat1 = 302,
  aux_sym_oneline_string_repeat1 = 303,
  aux_sym_oneline_string_content_repeat1 = 304,
  aux_sym_multiline_string_repeat1 = 305,
  aux_sym_multiline_string_content_repeat1 = 306,
  aux_sym_filename_repeat1 = 307,
  aux_sym_filename_content_repeat1 = 308,
  aux_sym_json_object_repeat1 = 309,
  aux_sym_json_array_repeat1 = 310,
  aux_sym_json_string_repeat1 = 311,
  aux_sym_integer_repeat1 = 312,
  aux_sym_regex_content_repeat1 = 313,
  anon_alias_sym_json_key_string = 314,
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
  [anon_sym_HTTP_SLASH1_DOT0] = "HTTP/1.0",
  [anon_sym_HTTP_SLASH1_DOT1] = "HTTP/1.1",
  [anon_sym_HTTP_SLASH2] = "HTTP/2",
  [anon_sym_HTTP_SLASH_STAR] = "HTTP/*",
  [aux_sym_status_token1] = "status_token1",
  [anon_sym_STAR] = "*",
  [anon_sym_LBRACKBasicAuth_RBRACK] = "[BasicAuth]",
  [anon_sym_LBRACKQueryStringParams_RBRACK] = "[QueryStringParams]",
  [anon_sym_LBRACKFormParams_RBRACK] = "[FormParams]",
  [anon_sym_LBRACKMultipartFormData_RBRACK] = "[MultipartFormData]",
  [anon_sym_LBRACKCookies_RBRACK] = "[Cookies]",
  [anon_sym_LBRACKCaptures_RBRACK] = "[Captures]",
  [anon_sym_LBRACKAsserts_RBRACK] = "[Asserts]",
  [anon_sym_LBRACKOptions_RBRACK] = "[Options]",
  [anon_sym_COLON] = ":",
  [anon_sym_COLON2] = ":",
  [anon_sym_file_COMMA] = "file,",
  [anon_sym_SEMI] = ";",
  [aux_sym_file_contenttype_token1] = "file_contenttype_token1",
  [anon_sym_cacert] = "cacert",
  [anon_sym_location] = "location",
  [anon_sym_insecure] = "insecure",
  [anon_sym_max_DASHredirs] = "max-redirs",
  [anon_sym_retry] = "retry",
  [anon_sym_retry_DASHinterval] = "retry-interval",
  [anon_sym_retry_DASHmax_DASHcount] = "retry-max-count",
  [anon_sym_variable] = "variable",
  [anon_sym_verbose] = "verbose",
  [anon_sym_very_DASHverbose] = "very-verbose",
  [anon_sym_EQ] = "=",
  [anon_sym_status] = "status",
  [anon_sym_url] = "url",
  [anon_sym_header] = "header",
  [anon_sym_cookie] = "cookie",
  [anon_sym_body] = "body",
  [anon_sym_xpath] = "xpath",
  [anon_sym_jsonpath] = "jsonpath",
  [anon_sym_regex] = "regex",
  [anon_sym_duration] = "duration",
  [anon_sym_sha256] = "sha256",
  [anon_sym_md5] = "md5",
  [anon_sym_bytes] = "bytes",
  [anon_sym_not] = "not",
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
  [anon_sym_exists] = "exists",
  [anon_sym_includes] = "includes",
  [anon_sym_isInteger] = "isInteger",
  [anon_sym_isFloat] = "isFloat",
  [anon_sym_isBoolean] = "isBoolean",
  [anon_sym_isString] = "isString",
  [anon_sym_isCollection] = "isCollection",
  [anon_sym_To_COMMABe_COMMADefined] = "To,Be,Defined",
  [anon_sym_base64_COMMA] = "base64,",
  [aux_sym_oneline_base64_token1] = "oneline_base64_token1",
  [anon_sym_hex_COMMA] = "hex,",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_quoted_string_text_token1] = "quoted_string_text_token1",
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
  [anon_sym_BQUOTE] = "`",
  [aux_sym_oneline_string_text_token1] = "oneline_string_text_token1",
  [aux_sym_oneline_string_text_token2] = "oneline_string_text_token2",
  [anon_sym_BQUOTE_BQUOTE_BQUOTE] = "```",
  [anon_sym_base64] = "base64",
  [anon_sym_hex] = "hex",
  [anon_sym_json] = "json",
  [anon_sym_xml] = "xml",
  [anon_sym_graphql] = "graphql",
  [aux_sym_multiline_string_text_token1] = "multiline_string_text_token1",
  [sym_filename_text] = "filename_text",
  [aux_sym_filename_escaped_char_token1] = "filename_escaped_char_token1",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_COMMA] = ",",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [aux_sym_json_string_text_token1] = "json_string_text_token1",
  [anon_sym_LBRACE_LBRACE] = "{{",
  [anon_sym_RBRACE_RBRACE] = "}}",
  [aux_sym_variable_name_token1] = "variable_name_token1",
  [aux_sym_variable_name_token2] = "variable_name_token2",
  [anon_sym_count] = "count",
  [anon_sym_urlEncode] = "urlEncode",
  [anon_sym_urlDecode] = "urlDecode",
  [anon_sym_htmlEscape] = "htmlEscape",
  [anon_sym_htmlUnescape] = "htmlUnescape",
  [anon_sym_toInt] = "toInt",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [anon_sym_null] = "null",
  [aux_sym__alphanum_token1] = "_alphanum_token1",
  [aux_sym_digit_token1] = "digit_token1",
  [aux_sym_hexdigit_token1] = "hexdigit_token1",
  [anon_sym_DOT] = ".",
  [anon_sym_e] = "e",
  [anon_sym_E] = "E",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [sym_comment] = "comment",
  [anon_sym_SLASH] = "/",
  [aux_sym_regex_text_token1] = "regex_text_token1",
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
  [sym_file_contenttype] = "file_contenttype",
  [sym_capture] = "capture",
  [sym_assert] = "assert",
  [sym_option] = "option",
  [sym_ca_certificate_option] = "ca_certificate_option",
  [sym_follow_redirect_option] = "follow_redirect_option",
  [sym_insecure_option] = "insecure_option",
  [sym_max_redirs_option] = "max_redirs_option",
  [sym_retry_option] = "retry_option",
  [sym_retry_interval_option] = "retry_interval_option",
  [sym_retry_max_count_option] = "retry_max_count_option",
  [sym_variable_option] = "variable_option",
  [sym_verbose_option] = "verbose_option",
  [sym_very_verbose_option] = "very_verbose_option",
  [sym_variable_definition] = "variable_definition",
  [sym_variable_value] = "variable_value",
  [sym_query] = "query",
  [sym_status_query] = "status_query",
  [sym_url_query] = "url_query",
  [sym_header_query] = "header_query",
  [sym_cookie_query] = "cookie_query",
  [sym_body_query] = "body_query",
  [sym_xpath_query] = "xpath_query",
  [sym_jsonpath_query] = "jsonpath_query",
  [sym_regex_query] = "regex_query",
  [sym_variable_query] = "variable_query",
  [sym_duration_query] = "duration_query",
  [sym_sha256_query] = "sha256_query",
  [sym_md5_query] = "md5_query",
  [sym_bytes_query] = "bytes_query",
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
  [sym_exist_predicate] = "exist_predicate",
  [sym_include_predicate] = "include_predicate",
  [sym_integer_predicate] = "integer_predicate",
  [sym_float_predicate] = "float_predicate",
  [sym_boolean_predicate] = "boolean_predicate",
  [sym_string_predicate] = "string_predicate",
  [sym_collection_predicate] = "collection_predicate",
  [sym_predicate_value] = "predicate_value",
  [sym_bytes] = "bytes",
  [sym_xml] = "xml",
  [sym_oneline_base64] = "oneline_base64",
  [sym_oneline_file] = "oneline_file",
  [sym_oneline_hex] = "oneline_hex",
  [sym_quoted_string] = "quoted_string",
  [sym_quoted_string_content] = "quoted_string_content",
  [sym_quoted_string_text] = "quoted_string_text",
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
  [sym_multiline_string_text] = "multiline_string_text",
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
  [sym_json_string_text] = "json_string_text",
  [sym_json_string_escaped_char] = "json_string_escaped_char",
  [sym_json_number] = "json_number",
  [sym_template] = "template",
  [sym_expr] = "expr",
  [sym_variable_name] = "variable_name",
  [sym_filter] = "filter",
  [sym_regex_filter] = "regex_filter",
  [sym_count_filter] = "count_filter",
  [sym_url_encode_filter] = "url_encode_filter",
  [sym_url_decode_filter] = "url_decode_filter",
  [sym_html_encode_filter] = "html_encode_filter",
  [sym_html_decode_filter] = "html_decode_filter",
  [sym_to_int_filter] = "to_int_filter",
  [sym_boolean] = "boolean",
  [sym_null] = "null",
  [sym_integer] = "integer",
  [sym_float] = "float",
  [sym_digit] = "digit",
  [sym_hexdigit] = "hexdigit",
  [sym_fraction] = "fraction",
  [sym_exponent] = "exponent",
  [sym_regex] = "regex",
  [sym_regex_content] = "regex_content",
  [sym_regex_text] = "regex_text",
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
  [anon_sym_HTTP_SLASH1_DOT0] = anon_sym_HTTP_SLASH1_DOT0,
  [anon_sym_HTTP_SLASH1_DOT1] = anon_sym_HTTP_SLASH1_DOT1,
  [anon_sym_HTTP_SLASH2] = anon_sym_HTTP_SLASH2,
  [anon_sym_HTTP_SLASH_STAR] = anon_sym_HTTP_SLASH_STAR,
  [aux_sym_status_token1] = aux_sym_status_token1,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_LBRACKBasicAuth_RBRACK] = anon_sym_LBRACKBasicAuth_RBRACK,
  [anon_sym_LBRACKQueryStringParams_RBRACK] = anon_sym_LBRACKQueryStringParams_RBRACK,
  [anon_sym_LBRACKFormParams_RBRACK] = anon_sym_LBRACKFormParams_RBRACK,
  [anon_sym_LBRACKMultipartFormData_RBRACK] = anon_sym_LBRACKMultipartFormData_RBRACK,
  [anon_sym_LBRACKCookies_RBRACK] = anon_sym_LBRACKCookies_RBRACK,
  [anon_sym_LBRACKCaptures_RBRACK] = anon_sym_LBRACKCaptures_RBRACK,
  [anon_sym_LBRACKAsserts_RBRACK] = anon_sym_LBRACKAsserts_RBRACK,
  [anon_sym_LBRACKOptions_RBRACK] = anon_sym_LBRACKOptions_RBRACK,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_COLON2] = anon_sym_COLON,
  [anon_sym_file_COMMA] = anon_sym_file_COMMA,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [aux_sym_file_contenttype_token1] = aux_sym_file_contenttype_token1,
  [anon_sym_cacert] = anon_sym_cacert,
  [anon_sym_location] = anon_sym_location,
  [anon_sym_insecure] = anon_sym_insecure,
  [anon_sym_max_DASHredirs] = anon_sym_max_DASHredirs,
  [anon_sym_retry] = anon_sym_retry,
  [anon_sym_retry_DASHinterval] = anon_sym_retry_DASHinterval,
  [anon_sym_retry_DASHmax_DASHcount] = anon_sym_retry_DASHmax_DASHcount,
  [anon_sym_variable] = anon_sym_variable,
  [anon_sym_verbose] = anon_sym_verbose,
  [anon_sym_very_DASHverbose] = anon_sym_very_DASHverbose,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_status] = anon_sym_status,
  [anon_sym_url] = anon_sym_url,
  [anon_sym_header] = anon_sym_header,
  [anon_sym_cookie] = anon_sym_cookie,
  [anon_sym_body] = anon_sym_body,
  [anon_sym_xpath] = anon_sym_xpath,
  [anon_sym_jsonpath] = anon_sym_jsonpath,
  [anon_sym_regex] = anon_sym_regex,
  [anon_sym_duration] = anon_sym_duration,
  [anon_sym_sha256] = anon_sym_sha256,
  [anon_sym_md5] = anon_sym_md5,
  [anon_sym_bytes] = anon_sym_bytes,
  [anon_sym_not] = anon_sym_not,
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
  [anon_sym_exists] = anon_sym_exists,
  [anon_sym_includes] = anon_sym_includes,
  [anon_sym_isInteger] = anon_sym_isInteger,
  [anon_sym_isFloat] = anon_sym_isFloat,
  [anon_sym_isBoolean] = anon_sym_isBoolean,
  [anon_sym_isString] = anon_sym_isString,
  [anon_sym_isCollection] = anon_sym_isCollection,
  [anon_sym_To_COMMABe_COMMADefined] = anon_sym_To_COMMABe_COMMADefined,
  [anon_sym_base64_COMMA] = anon_sym_base64_COMMA,
  [aux_sym_oneline_base64_token1] = aux_sym_oneline_base64_token1,
  [anon_sym_hex_COMMA] = anon_sym_hex_COMMA,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_quoted_string_text_token1] = aux_sym_quoted_string_text_token1,
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
  [anon_sym_BQUOTE] = anon_sym_BQUOTE,
  [aux_sym_oneline_string_text_token1] = aux_sym_oneline_string_text_token1,
  [aux_sym_oneline_string_text_token2] = aux_sym_oneline_string_text_token2,
  [anon_sym_BQUOTE_BQUOTE_BQUOTE] = anon_sym_BQUOTE_BQUOTE_BQUOTE,
  [anon_sym_base64] = anon_sym_base64,
  [anon_sym_hex] = anon_sym_hex,
  [anon_sym_json] = anon_sym_json,
  [anon_sym_xml] = anon_sym_xml,
  [anon_sym_graphql] = anon_sym_graphql,
  [aux_sym_multiline_string_text_token1] = aux_sym_multiline_string_text_token1,
  [sym_filename_text] = sym_filename_text,
  [aux_sym_filename_escaped_char_token1] = aux_sym_filename_escaped_char_token1,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [aux_sym_json_string_text_token1] = aux_sym_json_string_text_token1,
  [anon_sym_LBRACE_LBRACE] = anon_sym_LBRACE_LBRACE,
  [anon_sym_RBRACE_RBRACE] = anon_sym_RBRACE_RBRACE,
  [aux_sym_variable_name_token1] = aux_sym_variable_name_token1,
  [aux_sym_variable_name_token2] = aux_sym_variable_name_token2,
  [anon_sym_count] = anon_sym_count,
  [anon_sym_urlEncode] = anon_sym_urlEncode,
  [anon_sym_urlDecode] = anon_sym_urlDecode,
  [anon_sym_htmlEscape] = anon_sym_htmlEscape,
  [anon_sym_htmlUnescape] = anon_sym_htmlUnescape,
  [anon_sym_toInt] = anon_sym_toInt,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [anon_sym_null] = anon_sym_null,
  [aux_sym__alphanum_token1] = aux_sym__alphanum_token1,
  [aux_sym_digit_token1] = aux_sym_digit_token1,
  [aux_sym_hexdigit_token1] = aux_sym_hexdigit_token1,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_e] = anon_sym_e,
  [anon_sym_E] = anon_sym_E,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [sym_comment] = sym_comment,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [aux_sym_regex_text_token1] = aux_sym_regex_text_token1,
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
  [sym_file_contenttype] = sym_file_contenttype,
  [sym_capture] = sym_capture,
  [sym_assert] = sym_assert,
  [sym_option] = sym_option,
  [sym_ca_certificate_option] = sym_ca_certificate_option,
  [sym_follow_redirect_option] = sym_follow_redirect_option,
  [sym_insecure_option] = sym_insecure_option,
  [sym_max_redirs_option] = sym_max_redirs_option,
  [sym_retry_option] = sym_retry_option,
  [sym_retry_interval_option] = sym_retry_interval_option,
  [sym_retry_max_count_option] = sym_retry_max_count_option,
  [sym_variable_option] = sym_variable_option,
  [sym_verbose_option] = sym_verbose_option,
  [sym_very_verbose_option] = sym_very_verbose_option,
  [sym_variable_definition] = sym_variable_definition,
  [sym_variable_value] = sym_variable_value,
  [sym_query] = sym_query,
  [sym_status_query] = sym_status_query,
  [sym_url_query] = sym_url_query,
  [sym_header_query] = sym_header_query,
  [sym_cookie_query] = sym_cookie_query,
  [sym_body_query] = sym_body_query,
  [sym_xpath_query] = sym_xpath_query,
  [sym_jsonpath_query] = sym_jsonpath_query,
  [sym_regex_query] = sym_regex_query,
  [sym_variable_query] = sym_variable_query,
  [sym_duration_query] = sym_duration_query,
  [sym_sha256_query] = sym_sha256_query,
  [sym_md5_query] = sym_md5_query,
  [sym_bytes_query] = sym_bytes_query,
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
  [sym_exist_predicate] = sym_exist_predicate,
  [sym_include_predicate] = sym_include_predicate,
  [sym_integer_predicate] = sym_integer_predicate,
  [sym_float_predicate] = sym_float_predicate,
  [sym_boolean_predicate] = sym_boolean_predicate,
  [sym_string_predicate] = sym_string_predicate,
  [sym_collection_predicate] = sym_collection_predicate,
  [sym_predicate_value] = sym_predicate_value,
  [sym_bytes] = sym_bytes,
  [sym_xml] = sym_xml,
  [sym_oneline_base64] = sym_oneline_base64,
  [sym_oneline_file] = sym_oneline_file,
  [sym_oneline_hex] = sym_oneline_hex,
  [sym_quoted_string] = sym_quoted_string,
  [sym_quoted_string_content] = sym_quoted_string_content,
  [sym_quoted_string_text] = sym_quoted_string_text,
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
  [sym_multiline_string_text] = sym_multiline_string_text,
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
  [sym_json_string_text] = sym_json_string_text,
  [sym_json_string_escaped_char] = sym_json_string_escaped_char,
  [sym_json_number] = sym_json_number,
  [sym_template] = sym_template,
  [sym_expr] = sym_expr,
  [sym_variable_name] = sym_variable_name,
  [sym_filter] = sym_filter,
  [sym_regex_filter] = sym_regex_filter,
  [sym_count_filter] = sym_count_filter,
  [sym_url_encode_filter] = sym_url_encode_filter,
  [sym_url_decode_filter] = sym_url_decode_filter,
  [sym_html_encode_filter] = sym_html_encode_filter,
  [sym_html_decode_filter] = sym_html_decode_filter,
  [sym_to_int_filter] = sym_to_int_filter,
  [sym_boolean] = sym_boolean,
  [sym_null] = sym_null,
  [sym_integer] = sym_integer,
  [sym_float] = sym_float,
  [sym_digit] = sym_digit,
  [sym_hexdigit] = sym_hexdigit,
  [sym_fraction] = sym_fraction,
  [sym_exponent] = sym_exponent,
  [sym_regex] = sym_regex,
  [sym_regex_content] = sym_regex_content,
  [sym_regex_text] = sym_regex_text,
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
  [anon_sym_LBRACKQueryStringParams_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACKFormParams_RBRACK] = {
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
  [aux_sym_file_contenttype_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_cacert] = {
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
  [anon_sym_header] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cookie] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_body] = {
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
  [anon_sym_duration] = {
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
  [anon_sym_bytes] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_not] = {
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
  [anon_sym_exists] = {
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
  [anon_sym_To_COMMABe_COMMADefined] = {
    .visible = true,
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
  [aux_sym_quoted_string_text_token1] = {
    .visible = false,
    .named = false,
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
  [aux_sym_multiline_string_text_token1] = {
    .visible = false,
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
  [anon_sym_LBRACE] = {
    .visible = true,
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
  [aux_sym_json_string_text_token1] = {
    .visible = false,
    .named = false,
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
  [anon_sym_htmlEscape] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_htmlUnescape] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_toInt] = {
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
  [anon_sym_null] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__alphanum_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_digit_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_hexdigit_token1] = {
    .visible = false,
    .named = false,
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
  [aux_sym_regex_text_token1] = {
    .visible = false,
    .named = false,
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
  [sym_file_contenttype] = {
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
  [sym_status_query] = {
    .visible = true,
    .named = true,
  },
  [sym_url_query] = {
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
  [sym_body_query] = {
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
  [sym_duration_query] = {
    .visible = true,
    .named = true,
  },
  [sym_sha256_query] = {
    .visible = true,
    .named = true,
  },
  [sym_md5_query] = {
    .visible = true,
    .named = true,
  },
  [sym_bytes_query] = {
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
  [sym_exist_predicate] = {
    .visible = true,
    .named = true,
  },
  [sym_include_predicate] = {
    .visible = true,
    .named = true,
  },
  [sym_integer_predicate] = {
    .visible = true,
    .named = true,
  },
  [sym_float_predicate] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean_predicate] = {
    .visible = true,
    .named = true,
  },
  [sym_string_predicate] = {
    .visible = true,
    .named = true,
  },
  [sym_collection_predicate] = {
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
  [sym_quoted_string_text] = {
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
  [sym_multiline_string_text] = {
    .visible = true,
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
  [sym_count_filter] = {
    .visible = true,
    .named = true,
  },
  [sym_url_encode_filter] = {
    .visible = true,
    .named = true,
  },
  [sym_url_decode_filter] = {
    .visible = true,
    .named = true,
  },
  [sym_html_encode_filter] = {
    .visible = true,
    .named = true,
  },
  [sym_html_decode_filter] = {
    .visible = true,
    .named = true,
  },
  [sym_to_int_filter] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean] = {
    .visible = true,
    .named = true,
  },
  [sym_null] = {
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
  [sym_digit] = {
    .visible = true,
    .named = true,
  },
  [sym_hexdigit] = {
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
  [sym_regex_text] = {
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
  [52] = 10,
  [53] = 11,
  [54] = 23,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 10,
  [65] = 11,
  [66] = 66,
  [67] = 67,
  [68] = 57,
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
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
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
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 111,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 62,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 137,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 141,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 150,
  [160] = 160,
  [161] = 150,
  [162] = 162,
  [163] = 160,
  [164] = 162,
  [165] = 146,
  [166] = 166,
  [167] = 155,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 146,
  [172] = 170,
  [173] = 85,
  [174] = 174,
  [175] = 175,
  [176] = 93,
  [177] = 72,
  [178] = 178,
  [179] = 94,
  [180] = 180,
  [181] = 73,
  [182] = 91,
  [183] = 83,
  [184] = 95,
  [185] = 88,
  [186] = 84,
  [187] = 90,
  [188] = 82,
  [189] = 75,
  [190] = 87,
  [191] = 191,
  [192] = 74,
  [193] = 193,
  [194] = 89,
  [195] = 76,
  [196] = 196,
  [197] = 77,
  [198] = 198,
  [199] = 86,
  [200] = 200,
  [201] = 78,
  [202] = 70,
  [203] = 79,
  [204] = 71,
  [205] = 92,
  [206] = 81,
  [207] = 80,
  [208] = 208,
  [209] = 168,
  [210] = 210,
  [211] = 211,
  [212] = 212,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 213,
  [217] = 158,
  [218] = 218,
  [219] = 212,
  [220] = 220,
  [221] = 221,
  [222] = 222,
  [223] = 223,
  [224] = 222,
  [225] = 225,
  [226] = 226,
  [227] = 227,
  [228] = 228,
  [229] = 229,
  [230] = 230,
  [231] = 231,
  [232] = 218,
  [233] = 218,
  [234] = 229,
  [235] = 222,
  [236] = 236,
  [237] = 11,
  [238] = 10,
  [239] = 239,
  [240] = 200,
  [241] = 236,
  [242] = 198,
  [243] = 243,
  [244] = 244,
  [245] = 245,
  [246] = 246,
  [247] = 247,
  [248] = 248,
  [249] = 50,
  [250] = 250,
  [251] = 251,
  [252] = 244,
  [253] = 244,
  [254] = 254,
  [255] = 246,
  [256] = 256,
  [257] = 257,
  [258] = 208,
  [259] = 259,
  [260] = 260,
  [261] = 10,
  [262] = 262,
  [263] = 11,
  [264] = 264,
  [265] = 265,
  [266] = 266,
  [267] = 244,
  [268] = 244,
  [269] = 269,
  [270] = 270,
  [271] = 271,
  [272] = 272,
  [273] = 273,
  [274] = 250,
  [275] = 275,
  [276] = 227,
  [277] = 244,
  [278] = 257,
  [279] = 279,
  [280] = 280,
  [281] = 281,
  [282] = 282,
  [283] = 283,
  [284] = 244,
  [285] = 285,
  [286] = 286,
  [287] = 287,
  [288] = 288,
  [289] = 228,
  [290] = 290,
  [291] = 291,
  [292] = 292,
  [293] = 293,
  [294] = 244,
  [295] = 291,
  [296] = 244,
  [297] = 297,
  [298] = 298,
  [299] = 299,
  [300] = 300,
  [301] = 257,
  [302] = 302,
  [303] = 303,
  [304] = 297,
  [305] = 305,
  [306] = 281,
  [307] = 307,
  [308] = 308,
  [309] = 309,
  [310] = 310,
  [311] = 311,
  [312] = 250,
  [313] = 313,
  [314] = 314,
  [315] = 315,
  [316] = 316,
  [317] = 317,
  [318] = 318,
  [319] = 257,
  [320] = 320,
  [321] = 321,
  [322] = 244,
  [323] = 323,
  [324] = 280,
  [325] = 325,
  [326] = 223,
  [327] = 281,
  [328] = 281,
  [329] = 329,
  [330] = 330,
  [331] = 331,
  [332] = 332,
  [333] = 333,
  [334] = 334,
  [335] = 335,
  [336] = 336,
  [337] = 337,
  [338] = 338,
  [339] = 339,
  [340] = 340,
  [341] = 341,
  [342] = 342,
  [343] = 337,
  [344] = 337,
  [345] = 337,
  [346] = 337,
  [347] = 337,
  [348] = 337,
  [349] = 349,
  [350] = 350,
  [351] = 337,
  [352] = 349,
  [353] = 353,
  [354] = 354,
  [355] = 355,
  [356] = 356,
  [357] = 337,
  [358] = 349,
  [359] = 359,
  [360] = 360,
  [361] = 361,
  [362] = 362,
  [363] = 363,
  [364] = 364,
  [365] = 365,
  [366] = 366,
  [367] = 337,
  [368] = 368,
  [369] = 369,
  [370] = 364,
  [371] = 337,
  [372] = 372,
  [373] = 373,
  [374] = 374,
  [375] = 375,
  [376] = 376,
  [377] = 377,
  [378] = 378,
  [379] = 379,
  [380] = 380,
  [381] = 381,
  [382] = 382,
  [383] = 383,
  [384] = 375,
  [385] = 385,
  [386] = 382,
  [387] = 366,
  [388] = 372,
  [389] = 374,
  [390] = 390,
  [391] = 269,
  [392] = 392,
  [393] = 393,
  [394] = 394,
  [395] = 395,
  [396] = 331,
  [397] = 397,
  [398] = 398,
  [399] = 399,
  [400] = 400,
  [401] = 401,
  [402] = 402,
  [403] = 403,
  [404] = 404,
  [405] = 405,
  [406] = 406,
  [407] = 407,
  [408] = 408,
  [409] = 409,
  [410] = 410,
  [411] = 411,
  [412] = 412,
  [413] = 341,
  [414] = 244,
  [415] = 415,
  [416] = 416,
  [417] = 417,
  [418] = 349,
  [419] = 393,
  [420] = 420,
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
  [432] = 429,
  [433] = 433,
  [434] = 434,
  [435] = 435,
  [436] = 436,
  [437] = 426,
  [438] = 434,
  [439] = 439,
  [440] = 440,
  [441] = 427,
  [442] = 425,
  [443] = 443,
  [444] = 444,
  [445] = 445,
  [446] = 446,
  [447] = 447,
  [448] = 448,
  [449] = 449,
  [450] = 450,
  [451] = 451,
  [452] = 452,
  [453] = 453,
  [454] = 454,
  [455] = 455,
  [456] = 456,
  [457] = 457,
  [458] = 458,
  [459] = 459,
  [460] = 460,
  [461] = 365,
  [462] = 462,
  [463] = 299,
  [464] = 464,
  [465] = 465,
  [466] = 466,
  [467] = 467,
  [468] = 373,
  [469] = 354,
  [470] = 470,
  [471] = 471,
  [472] = 472,
  [473] = 273,
  [474] = 342,
  [475] = 475,
  [476] = 476,
  [477] = 477,
  [478] = 478,
  [479] = 479,
  [480] = 480,
  [481] = 340,
  [482] = 411,
  [483] = 483,
  [484] = 484,
  [485] = 485,
  [486] = 486,
  [487] = 409,
  [488] = 408,
  [489] = 489,
  [490] = 490,
  [491] = 491,
  [492] = 492,
  [493] = 493,
  [494] = 494,
  [495] = 495,
  [496] = 496,
  [497] = 490,
  [498] = 415,
  [499] = 499,
  [500] = 500,
  [501] = 501,
  [502] = 502,
  [503] = 503,
  [504] = 504,
  [505] = 505,
  [506] = 495,
  [507] = 507,
  [508] = 508,
  [509] = 509,
  [510] = 510,
  [511] = 511,
  [512] = 486,
  [513] = 513,
  [514] = 514,
  [515] = 515,
  [516] = 516,
  [517] = 517,
  [518] = 518,
  [519] = 495,
  [520] = 490,
  [521] = 521,
  [522] = 495,
  [523] = 523,
  [524] = 495,
  [525] = 495,
  [526] = 495,
  [527] = 495,
  [528] = 495,
  [529] = 495,
  [530] = 495,
  [531] = 359,
  [532] = 532,
  [533] = 533,
  [534] = 534,
  [535] = 535,
  [536] = 536,
  [537] = 537,
  [538] = 538,
  [539] = 539,
  [540] = 540,
  [541] = 541,
  [542] = 542,
  [543] = 543,
  [544] = 544,
};

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

static inline bool aux_sym_invalid_quoted_string_escaped_char_token1_character_set_1(int32_t c) {
  return (c < 8192
    ? (c < 160
      ? (c < ' '
        ? c == '\n'
        : c <= ' ')
      : (c <= 160 || c == 5760))
    : (c <= 8203 || (c < 12288
      ? (c < 8287
        ? c == 8239
        : c <= 8288)
      : (c <= 12288 || c == 65279))));
}

static inline bool sym_key_string_text_character_set_1(int32_t c) {
  return (c < '_'
    ? (c < '@'
      ? (c < '-'
        ? c == '$'
        : c <= '.')
      : (c <= '[' || c == ']'))
    : (c <= '_' || (c < 'o'
      ? (c < 'g'
        ? (c >= 'a' && c <= 'e')
        : c <= 'm')
      : (c <= 's' || (c >= 'u' && c <= 'z')))));
}

static inline bool sym_key_string_text_character_set_2(int32_t c) {
  return (c < ']'
    ? (c < 'I'
      ? (c < '@'
        ? (c < '-'
          ? c == '$'
          : c <= '.')
        : (c <= 'B' || (c >= 'E' && c <= 'F')))
      : (c <= 'K' || (c < 'Q'
        ? (c >= 'M' && c <= 'N')
        : (c <= 'S' || (c >= 'W' && c <= 'Z')))))
    : (c <= ']' || (c < 'g'
      ? (c < 'a'
        ? c == '_'
        : (c <= 'a' || (c >= 'c' && c <= 'e')))
      : (c <= 'g' || (c < 'o'
        ? (c >= 'i' && c <= 'm')
        : (c <= 's' || (c >= 'u' && c <= 'z')))))));
}

static inline bool sym_key_string_text_character_set_3(int32_t c) {
  return (c < 'P'
    ? (c < '0'
      ? (c < '-'
        ? c == '$'
        : c <= '.')
      : (c <= '9' || (c < 'B'
        ? c == '@'
        : c <= 'N')))
    : (c <= 'Q' || (c < ']'
      ? (c < 'V'
        ? (c >= 'S' && c <= 'T')
        : c <= '[')
      : (c <= ']' || (c < 'a'
        ? c == '_'
        : c <= 'z')))));
}

static inline bool sym_key_string_text_character_set_4(int32_t c) {
  return (c < 'F'
    ? (c < '0'
      ? (c < '-'
        ? c == '$'
        : c <= '.')
      : (c <= '9' || (c >= '@' && c <= 'D')))
    : (c <= 'S' || (c < '_'
      ? (c < ']'
        ? (c >= 'U' && c <= '[')
        : c <= ']')
      : (c <= '_' || (c >= 'a' && c <= 'z')))));
}

static inline bool sym_key_string_text_character_set_5(int32_t c) {
  return (c < 'J'
    ? (c < '0'
      ? (c < '-'
        ? c == '$'
        : c <= '.')
      : (c <= '9' || (c >= '@' && c <= 'H')))
    : (c <= 'N' || (c < '_'
      ? (c < ']'
        ? (c >= 'P' && c <= '[')
        : c <= ']')
      : (c <= '_' || (c >= 'a' && c <= 'z')))));
}

static inline bool sym_key_string_text_character_set_6(int32_t c) {
  return (c < 'S'
    ? (c < '0'
      ? (c < '-'
        ? c == '$'
        : c <= '.')
      : (c <= '9' || (c >= '@' && c <= 'Q')))
    : (c <= 'S' || (c < '_'
      ? (c < ']'
        ? (c >= 'U' && c <= '[')
        : c <= ']')
      : (c <= '_' || (c >= 'a' && c <= 'z')))));
}

static inline bool sym_key_string_text_character_set_7(int32_t c) {
  return (c < 'N'
    ? (c < '@'
      ? (c < '-'
        ? c == '$'
        : (c <= '.' || (c >= '0' && c <= '9')))
      : (c <= 'A' || (c < 'G'
        ? (c >= 'D' && c <= 'E')
        : c <= 'L')))
    : (c <= 'N' || (c < ']'
      ? (c < 'R'
        ? c == 'P'
        : c <= '[')
      : (c <= ']' || (c < 'a'
        ? c == '_'
        : c <= 'z')))));
}

static inline bool sym_key_string_text_character_set_8(int32_t c) {
  return (c < 'B'
    ? (c < '0'
      ? (c < '-'
        ? c == '$'
        : c <= '.')
      : (c <= '9' || c == '@'))
    : (c <= 'B' || (c < '_'
      ? (c < ']'
        ? (c >= 'D' && c <= '[')
        : c <= ']')
      : (c <= '_' || (c >= 'a' && c <= 'z')))));
}

static inline bool aux_sym_value_string_text_token1_character_set_1(int32_t c) {
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

static inline bool sym_filename_text_character_set_1(int32_t c) {
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

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(522);
      if (lookahead == '!') ADVANCE(54);
      if (lookahead == '"') ADVANCE(639);
      if (lookahead == '#') ADVANCE(828);
      if (lookahead == '*') ADVANCE(563);
      if (lookahead == '+') ADVANCE(891);
      if (lookahead == ',') ADVANCE(856);
      if (lookahead == '-') ADVANCE(892);
      if (lookahead == '.') ADVANCE(888);
      if (lookahead == '/') ADVANCE(894);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == ';') ADVANCE(583);
      if (lookahead == '<') ADVANCE(620);
      if (lookahead == '=') ADVANCE(596);
      if (lookahead == '>') ADVANCE(615);
      if (lookahead == 'E') ADVANCE(890);
      if (lookahead == '[') ADVANCE(858);
      if (lookahead == '\\') ADVANCE(820);
      if (lookahead == ']') ADVANCE(863);
      if (lookahead == '`') ADVANCE(830);
      if (lookahead == 'b') ADVANCE(648);
      if (lookahead == 'e') ADVANCE(889);
      if (lookahead == 'f') ADVANCE(649);
      if (lookahead == 'n') ADVANCE(650);
      if (lookahead == 'r') ADVANCE(651);
      if (lookahead == 't') ADVANCE(652);
      if (lookahead == 'u') ADVANCE(653);
      if (lookahead == '{') ADVANCE(854);
      if (lookahead == '}') ADVANCE(855);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'd')) ADVANCE(872);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(562);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(521)
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(872);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(893);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(523);
      if (lookahead == '#') ADVANCE(514);
      if (lookahead == '\\') ADVANCE(644);
      if (lookahead == 'f') ADVANCE(824);
      if (lookahead == 'n') ADVANCE(826);
      if (lookahead == 't') ADVANCE(825);
      if (lookahead == '{') ADVANCE(827);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(823);
      if (aux_sym_value_string_text_token1_character_set_1(lookahead)) ADVANCE(823);
      if (lookahead != 0) ADVANCE(823);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(523);
      if (lookahead == '#') ADVANCE(514);
      if (lookahead == '\\') ADVANCE(644);
      if (lookahead == '{') ADVANCE(827);
      if (aux_sym_value_string_text_token1_character_set_1(lookahead)) ADVANCE(823);
      if (lookahead != 0) ADVANCE(823);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(523);
      if (lookahead == '#') ADVANCE(514);
      if (lookahead == 'b') ADVANCE(180);
      if (lookahead == 'c') ADVANCE(374);
      if (lookahead == 'g') ADVANCE(411);
      if (lookahead == 'h') ADVANCE(237);
      if (lookahead == 'j') ADVANCE(445);
      if (lookahead == 'r') ADVANCE(228);
      if (lookahead == 't') ADVANCE(355);
      if (lookahead == 'u') ADVANCE(404);
      if (lookahead == 'x') ADVANCE(321);
      if (aux_sym_value_string_text_token1_character_set_1(lookahead)) SKIP(4)
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(523);
      if (lookahead == '#') ADVANCE(514);
      if (aux_sym_value_string_text_token1_character_set_1(lookahead)) SKIP(5)
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(523);
      if (lookahead == '#') ADVANCE(514);
      if (aux_sym_value_string_text_token1_character_set_1(lookahead)) SKIP(6)
      if (lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(584);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(523);
      if (lookahead == '#') ADVANCE(514);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(815);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == '\\') ADVANCE(820);
      if (lookahead == '{') ADVANCE(512);
      if (aux_sym_value_string_text_token1_character_set_1(lookahead)) SKIP(5)
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(524);
      if (lookahead == '#') ADVANCE(847);
      if (lookahead == '\\') ADVANCE(644);
      if (lookahead == '`') ADVANCE(845);
      if (lookahead == '{') ADVANCE(846);
      if (aux_sym_value_string_text_token1_character_set_1(lookahead)) ADVANCE(844);
      if (lookahead != 0) ADVANCE(843);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(525);
      if (lookahead == ' ') SKIP(10)
      if (lookahead == '#') ADVANCE(514);
      if (lookahead == '\\') ADVANCE(644);
      if (lookahead == '{') ADVANCE(849);
      if (sym_filename_text_character_set_1(lookahead)) ADVANCE(848);
      if (lookahead != 0 &&
          lookahead != ';') ADVANCE(851);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(525);
      if (lookahead == ' ') SKIP(10)
      if (lookahead == '#') ADVANCE(514);
      if (lookahead == '\\') ADVANCE(644);
      if (sym_filename_text_character_set_1(lookahead)) ADVANCE(848);
      if (lookahead != 0 &&
          lookahead != ';') ADVANCE(851);
      END_STATE();
    case 11:
      if (lookahead == '\n') SKIP(12)
      if (lookahead == '#') ADVANCE(514);
      if (lookahead == '\\') ADVANCE(644);
      if (lookahead == '`') ADVANCE(829);
      if (lookahead == '{') ADVANCE(833);
      if (aux_sym_value_string_text_token1_character_set_1(lookahead)) ADVANCE(832);
      if (lookahead != 0) ADVANCE(831);
      END_STATE();
    case 12:
      if (lookahead == '\n') SKIP(12)
      if (lookahead == '#') ADVANCE(514);
      if (lookahead == '\\') ADVANCE(644);
      if (lookahead == '`') ADVANCE(829);
      if (aux_sym_value_string_text_token1_character_set_1(lookahead)) ADVANCE(832);
      if (lookahead != 0) ADVANCE(831);
      END_STATE();
    case 13:
      if (lookahead == '\n') SKIP(13)
      if (lookahead == '#') ADVANCE(897);
      if (lookahead == '/') ADVANCE(894);
      if (lookahead == '\\') ADVANCE(644);
      if (aux_sym_value_string_text_token1_character_set_1(lookahead)) ADVANCE(896);
      if (lookahead != 0) ADVANCE(898);
      END_STATE();
    case 14:
      if (lookahead == '\n') SKIP(14)
      if (lookahead == '#') ADVANCE(901);
      if (aux_sym_value_string_text_token1_character_set_1(lookahead)) ADVANCE(900);
      if (lookahead != 0) ADVANCE(899);
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(636);
      if (lookahead == '#') ADVANCE(514);
      if (aux_sym_value_string_text_token1_character_set_1(lookahead)) SKIP(15)
      if (('+' <= lookahead && lookahead <= '-') ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 16:
      if (lookahead == '!') ADVANCE(54);
      if (lookahead == '"') ADVANCE(639);
      if (lookahead == '#') ADVANCE(514);
      if (lookahead == '+') ADVANCE(891);
      if (lookahead == ',') ADVANCE(856);
      if (lookahead == '-') ADVANCE(892);
      if (lookahead == '/') ADVANCE(894);
      if (lookahead == ':') ADVANCE(581);
      if (lookahead == '<') ADVANCE(620);
      if (lookahead == '=') ADVANCE(55);
      if (lookahead == '>') ADVANCE(615);
      if (lookahead == 'T') ADVANCE(357);
      if (lookahead == '[') ADVANCE(857);
      if (lookahead == ']') ADVANCE(863);
      if (lookahead == '`') ADVANCE(141);
      if (lookahead == 'b') ADVANCE(164);
      if (lookahead == 'c') ADVANCE(350);
      if (lookahead == 'e') ADVANCE(331);
      if (lookahead == 'f') ADVANCE(147);
      if (lookahead == 'g') ADVANCE(412);
      if (lookahead == 'h') ADVANCE(235);
      if (lookahead == 'i') ADVANCE(333);
      if (lookahead == 'l') ADVANCE(253);
      if (lookahead == 'm') ADVANCE(169);
      if (lookahead == 'n') ADVANCE(366);
      if (lookahead == 'r') ADVANCE(228);
      if (lookahead == 's') ADVANCE(479);
      if (lookahead == 't') ADVANCE(356);
      if (lookahead == 'u') ADVANCE(404);
      if (lookahead == '{') ADVANCE(854);
      if (lookahead == '}') ADVANCE(513);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(886);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(17)
      END_STATE();
    case 17:
      if (lookahead == '!') ADVANCE(54);
      if (lookahead == '"') ADVANCE(639);
      if (lookahead == '#') ADVANCE(514);
      if (lookahead == '+') ADVANCE(891);
      if (lookahead == ',') ADVANCE(856);
      if (lookahead == '-') ADVANCE(892);
      if (lookahead == '/') ADVANCE(894);
      if (lookahead == ':') ADVANCE(581);
      if (lookahead == '<') ADVANCE(620);
      if (lookahead == '=') ADVANCE(55);
      if (lookahead == '>') ADVANCE(615);
      if (lookahead == 'T') ADVANCE(357);
      if (lookahead == '[') ADVANCE(857);
      if (lookahead == ']') ADVANCE(863);
      if (lookahead == '`') ADVANCE(141);
      if (lookahead == 'b') ADVANCE(164);
      if (lookahead == 'c') ADVANCE(350);
      if (lookahead == 'e') ADVANCE(331);
      if (lookahead == 'f') ADVANCE(147);
      if (lookahead == 'g') ADVANCE(412);
      if (lookahead == 'h') ADVANCE(235);
      if (lookahead == 'i') ADVANCE(333);
      if (lookahead == 'l') ADVANCE(253);
      if (lookahead == 'm') ADVANCE(169);
      if (lookahead == 'n') ADVANCE(366);
      if (lookahead == 'r') ADVANCE(228);
      if (lookahead == 's') ADVANCE(479);
      if (lookahead == 't') ADVANCE(356);
      if (lookahead == 'u') ADVANCE(404);
      if (lookahead == '{') ADVANCE(853);
      if (lookahead == '}') ADVANCE(513);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(886);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(17)
      END_STATE();
    case 18:
      if (lookahead == '"') ADVANCE(639);
      if (lookahead == '#') ADVANCE(828);
      if (lookahead == ',') ADVANCE(852);
      if (lookahead == ';') ADVANCE(583);
      if (lookahead == 'f') ADVANCE(146);
      if (lookahead == 'n') ADVANCE(489);
      if (lookahead == 't') ADVANCE(398);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(886);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(18)
      END_STATE();
    case 19:
      if (lookahead == '"') ADVANCE(639);
      if (lookahead == '#') ADVANCE(828);
      if (lookahead == '\\') ADVANCE(644);
      if (lookahead == '`') ADVANCE(829);
      if (lookahead == 'b') ADVANCE(648);
      if (lookahead == 'f') ADVANCE(649);
      if (lookahead == 'n') ADVANCE(650);
      if (lookahead == 'r') ADVANCE(651);
      if (lookahead == 't') ADVANCE(652);
      if (lookahead == 'u') ADVANCE(653);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(19)
      END_STATE();
    case 20:
      if (lookahead == '"') ADVANCE(639);
      if (lookahead == '#') ADVANCE(828);
      if (sym_key_string_text_character_set_1(lookahead)) ADVANCE(815);
      if (lookahead == ',') ADVANCE(852);
      if (lookahead == ';') ADVANCE(583);
      if (lookahead == '\\') ADVANCE(820);
      if (lookahead == 'f') ADVANCE(797);
      if (lookahead == 'n') ADVANCE(789);
      if (lookahead == 't') ADVANCE(762);
      if (lookahead == '{') ADVANCE(512);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(815);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(18)
      END_STATE();
    case 21:
      if (lookahead == '"') ADVANCE(639);
      if (lookahead == '#') ADVANCE(514);
      if (lookahead == ',') ADVANCE(856);
      if (lookahead == '.') ADVANCE(888);
      if (lookahead == ':') ADVANCE(581);
      if (lookahead == '=') ADVANCE(595);
      if (lookahead == 'E') ADVANCE(890);
      if (lookahead == ']') ADVANCE(863);
      if (lookahead == 'b') ADVANCE(349);
      if (lookahead == 'c') ADVANCE(370);
      if (lookahead == 'd') ADVANCE(492);
      if (lookahead == 'e') ADVANCE(889);
      if (lookahead == 'h') ADVANCE(248);
      if (lookahead == 'j') ADVANCE(436);
      if (lookahead == 'm') ADVANCE(203);
      if (lookahead == 'r') ADVANCE(228);
      if (lookahead == 's') ADVANCE(271);
      if (lookahead == 'u') ADVANCE(399);
      if (lookahead == 'v') ADVANCE(160);
      if (lookahead == 'x') ADVANCE(381);
      if (lookahead == '}') ADVANCE(855);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(886);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(21)
      END_STATE();
    case 22:
      if (lookahead == '"') ADVANCE(639);
      if (lookahead == '#') ADVANCE(640);
      if (lookahead == '\\') ADVANCE(644);
      if (lookahead == '{') ADVANCE(642);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) ADVANCE(641);
      if (lookahead != 0) ADVANCE(643);
      END_STATE();
    case 23:
      if (lookahead == '"') ADVANCE(639);
      if (lookahead == '#') ADVANCE(867);
      if (lookahead == '\\') ADVANCE(644);
      if (lookahead == '{') ADVANCE(866);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) ADVANCE(865);
      if (lookahead != 0) ADVANCE(864);
      END_STATE();
    case 24:
      if (lookahead == '"') ADVANCE(639);
      if (lookahead == '#') ADVANCE(647);
      if (lookahead == '\\') ADVANCE(644);
      if (lookahead == 'b') ADVANCE(648);
      if (lookahead == 'f') ADVANCE(649);
      if (lookahead == 'n') ADVANCE(650);
      if (lookahead == 'r') ADVANCE(651);
      if (lookahead == 't') ADVANCE(652);
      if (lookahead == 'u') ADVANCE(653);
      if (lookahead == '\t' ||
          lookahead == '\r') SKIP(24)
      if (aux_sym_invalid_quoted_string_escaped_char_token1_character_set_1(lookahead)) ADVANCE(646);
      if (lookahead != 0 &&
          lookahead != '\f') ADVANCE(645);
      END_STATE();
    case 25:
      if (lookahead == '"') ADVANCE(821);
      if (lookahead == '#') ADVANCE(822);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(815);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == '\\') ADVANCE(820);
      if (lookahead == '{') ADVANCE(512);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(27)
      END_STATE();
    case 26:
      if (lookahead == '#') ADVANCE(514);
      if (lookahead == '*') ADVANCE(563);
      if (lookahead == '=') ADVANCE(595);
      if (lookahead == 'c') ADVANCE(374);
      if (lookahead == 'h') ADVANCE(467);
      if (lookahead == 'r') ADVANCE(228);
      if (lookahead == 't') ADVANCE(355);
      if (lookahead == 'u') ADVANCE(404);
      if (lookahead == '}') ADVANCE(513);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(562);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(26)
      END_STATE();
    case 27:
      if (lookahead == '#') ADVANCE(514);
      if (lookahead == ':') ADVANCE(581);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(27)
      END_STATE();
    case 28:
      if (lookahead == '#') ADVANCE(514);
      if (lookahead == ';') ADVANCE(583);
      if (lookahead == '\\') ADVANCE(644);
      if (lookahead == '{') ADVANCE(849);
      if (lookahead == '\n' ||
          lookahead == ' ') SKIP(29)
      if (sym_filename_text_character_set_1(lookahead)) ADVANCE(850);
      if (lookahead != 0) ADVANCE(851);
      END_STATE();
    case 29:
      if (lookahead == '#') ADVANCE(514);
      if (lookahead == ';') ADVANCE(583);
      if (lookahead == '\\') ADVANCE(644);
      if (lookahead == '\n' ||
          lookahead == ' ') SKIP(29)
      if (sym_filename_text_character_set_1(lookahead)) ADVANCE(850);
      if (lookahead != 0) ADVANCE(851);
      END_STATE();
    case 30:
      if (lookahead == '#') ADVANCE(514);
      if (lookahead == ';') ADVANCE(583);
      if (lookahead == '}') ADVANCE(855);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(887);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(30)
      END_STATE();
    case 31:
      if (lookahead == '#') ADVANCE(514);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(31)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(872);
      END_STATE();
    case 32:
      if (lookahead == '#') ADVANCE(514);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(815);
      if (lookahead == ':') ADVANCE(581);
      if (lookahead == '\\') ADVANCE(820);
      if (lookahead == '{') ADVANCE(512);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(27)
      END_STATE();
    case 33:
      if (lookahead == '#') ADVANCE(836);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) ADVANCE(835);
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(834);
      END_STATE();
    case 34:
      if (lookahead == '*') ADVANCE(561);
      if (lookahead == '1') ADVANCE(43);
      if (lookahead == '2') ADVANCE(560);
      END_STATE();
    case 35:
      if (lookahead == ',') ADVANCE(638);
      END_STATE();
    case 36:
      if (lookahead == ',') ADVANCE(582);
      END_STATE();
    case 37:
      if (lookahead == ',') ADVANCE(635);
      END_STATE();
    case 38:
      if (lookahead == ',') ADVANCE(61);
      END_STATE();
    case 39:
      if (lookahead == ',') ADVANCE(71);
      END_STATE();
    case 40:
      if (lookahead == '-') ADVANCE(503);
      END_STATE();
    case 41:
      if (lookahead == '-') ADVANCE(193);
      END_STATE();
    case 42:
      if (lookahead == '-') ADVANCE(407);
      END_STATE();
    case 43:
      if (lookahead == '.') ADVANCE(45);
      END_STATE();
    case 44:
      if (lookahead == '/') ADVANCE(34);
      END_STATE();
    case 45:
      if (lookahead == '0') ADVANCE(558);
      if (lookahead == '1') ADVANCE(559);
      END_STATE();
    case 46:
      if (lookahead == '2') ADVANCE(50);
      END_STATE();
    case 47:
      if (lookahead == '4') ADVANCE(838);
      END_STATE();
    case 48:
      if (lookahead == '4') ADVANCE(37);
      END_STATE();
    case 49:
      if (lookahead == '5') ADVANCE(607);
      END_STATE();
    case 50:
      if (lookahead == '5') ADVANCE(52);
      END_STATE();
    case 51:
      if (lookahead == '6') ADVANCE(48);
      END_STATE();
    case 52:
      if (lookahead == '6') ADVANCE(606);
      END_STATE();
    case 53:
      if (lookahead == '6') ADVANCE(47);
      END_STATE();
    case 54:
      if (lookahead == '=') ADVANCE(613);
      END_STATE();
    case 55:
      if (lookahead == '=') ADVANCE(611);
      END_STATE();
    case 56:
      if (lookahead == 'A') ADVANCE(67);
      END_STATE();
    case 57:
      if (lookahead == 'A') ADVANCE(65);
      END_STATE();
    case 58:
      if (lookahead == 'A') ADVANCE(490);
      END_STATE();
    case 59:
      if (lookahead == 'A') ADVANCE(125);
      if (lookahead == 'O') ADVANCE(120);
      if (lookahead == 'R') ADVANCE(109);
      if (lookahead == 'U') ADVANCE(116);
      END_STATE();
    case 60:
      if (lookahead == 'B') ADVANCE(363);
      if (lookahead == 'C') ADVANCE(361);
      if (lookahead == 'F') ADVANCE(307);
      if (lookahead == 'I') ADVANCE(339);
      if (lookahead == 'S') ADVANCE(475);
      END_STATE();
    case 61:
      if (lookahead == 'B') ADVANCE(239);
      END_STATE();
    case 62:
      if (lookahead == 'C') ADVANCE(88);
      END_STATE();
    case 63:
      if (lookahead == 'C') ADVANCE(96);
      END_STATE();
    case 64:
      if (lookahead == 'C') ADVANCE(98);
      END_STATE();
    case 65:
      if (lookahead == 'C') ADVANCE(76);
      END_STATE();
    case 66:
      if (lookahead == 'C') ADVANCE(123);
      END_STATE();
    case 67:
      if (lookahead == 'D') ADVANCE(528);
      END_STATE();
    case 68:
      if (lookahead == 'D') ADVANCE(554);
      END_STATE();
    case 69:
      if (lookahead == 'D') ADVANCE(157);
      END_STATE();
    case 70:
      if (lookahead == 'D') ADVANCE(255);
      if (lookahead == 'E') ADVANCE(343);
      END_STATE();
    case 71:
      if (lookahead == 'D') ADVANCE(222);
      END_STATE();
    case 72:
      if (lookahead == 'E') ADVANCE(99);
      END_STATE();
    case 73:
      if (lookahead == 'E') ADVANCE(121);
      END_STATE();
    case 74:
      if (lookahead == 'E') ADVANCE(130);
      END_STATE();
    case 75:
      if (lookahead == 'E') ADVANCE(548);
      END_STATE();
    case 76:
      if (lookahead == 'E') ADVANCE(540);
      END_STATE();
    case 77:
      if (lookahead == 'E') ADVANCE(534);
      END_STATE();
    case 78:
      if (lookahead == 'E') ADVANCE(56);
      END_STATE();
    case 79:
      if (lookahead == 'E') ADVANCE(56);
      if (lookahead == 'T') ADVANCE(126);
      END_STATE();
    case 80:
      if (lookahead == 'E') ADVANCE(66);
      END_STATE();
    case 81:
      if (lookahead == 'E') ADVANCE(128);
      END_STATE();
    case 82:
      if (lookahead == 'E') ADVANCE(449);
      if (lookahead == 'U') ADVANCE(344);
      END_STATE();
    case 83:
      if (lookahead == 'E') ADVANCE(385);
      END_STATE();
    case 84:
      if (lookahead == 'E') ADVANCE(386);
      END_STATE();
    case 85:
      if (lookahead == 'F') ADVANCE(92);
      END_STATE();
    case 86:
      if (lookahead == 'F') ADVANCE(368);
      END_STATE();
    case 87:
      if (lookahead == 'G') ADVANCE(75);
      END_STATE();
    case 88:
      if (lookahead == 'H') ADVANCE(542);
      END_STATE();
    case 89:
      if (lookahead == 'I') ADVANCE(74);
      END_STATE();
    case 90:
      if (lookahead == 'I') ADVANCE(101);
      if (lookahead == 'O') ADVANCE(63);
      END_STATE();
    case 91:
      if (lookahead == 'I') ADVANCE(105);
      if (lookahead == 'O') ADVANCE(64);
      END_STATE();
    case 92:
      if (lookahead == 'I') ADVANCE(104);
      END_STATE();
    case 93:
      if (lookahead == 'I') ADVANCE(110);
      END_STATE();
    case 94:
      if (lookahead == 'I') ADVANCE(340);
      END_STATE();
    case 95:
      if (lookahead == 'K') ADVANCE(544);
      END_STATE();
    case 96:
      if (lookahead == 'K') ADVANCE(550);
      END_STATE();
    case 97:
      if (lookahead == 'K') ADVANCE(546);
      END_STATE();
    case 98:
      if (lookahead == 'K') ADVANCE(552);
      END_STATE();
    case 99:
      if (lookahead == 'L') ADVANCE(81);
      END_STATE();
    case 100:
      if (lookahead == 'L') ADVANCE(91);
      END_STATE();
    case 101:
      if (lookahead == 'N') ADVANCE(95);
      END_STATE();
    case 102:
      if (lookahead == 'N') ADVANCE(100);
      END_STATE();
    case 103:
      if (lookahead == 'N') ADVANCE(118);
      END_STATE();
    case 104:
      if (lookahead == 'N') ADVANCE(68);
      END_STATE();
    case 105:
      if (lookahead == 'N') ADVANCE(97);
      END_STATE();
    case 106:
      if (lookahead == 'N') ADVANCE(107);
      END_STATE();
    case 107:
      if (lookahead == 'N') ADVANCE(80);
      END_STATE();
    case 108:
      if (lookahead == 'O') ADVANCE(106);
      END_STATE();
    case 109:
      if (lookahead == 'O') ADVANCE(113);
      END_STATE();
    case 110:
      if (lookahead == 'O') ADVANCE(103);
      END_STATE();
    case 111:
      if (lookahead == 'P') ADVANCE(44);
      END_STATE();
    case 112:
      if (lookahead == 'P') ADVANCE(155);
      END_STATE();
    case 113:
      if (lookahead == 'P') ADVANCE(85);
      END_STATE();
    case 114:
      if (lookahead == 'P') ADVANCE(124);
      END_STATE();
    case 115:
      if (lookahead == 'P') ADVANCE(179);
      END_STATE();
    case 116:
      if (lookahead == 'R') ADVANCE(87);
      if (lookahead == 'T') ADVANCE(532);
      END_STATE();
    case 117:
      if (lookahead == 'R') ADVANCE(57);
      END_STATE();
    case 118:
      if (lookahead == 'S') ADVANCE(538);
      END_STATE();
    case 119:
      if (lookahead == 'S') ADVANCE(470);
      END_STATE();
    case 120:
      if (lookahead == 'S') ADVANCE(122);
      END_STATE();
    case 121:
      if (lookahead == 'T') ADVANCE(526);
      END_STATE();
    case 122:
      if (lookahead == 'T') ADVANCE(530);
      END_STATE();
    case 123:
      if (lookahead == 'T') ADVANCE(536);
      END_STATE();
    case 124:
      if (lookahead == 'T') ADVANCE(93);
      END_STATE();
    case 125:
      if (lookahead == 'T') ADVANCE(62);
      END_STATE();
    case 126:
      if (lookahead == 'T') ADVANCE(111);
      END_STATE();
    case 127:
      if (lookahead == 'T') ADVANCE(272);
      END_STATE();
    case 128:
      if (lookahead == 'T') ADVANCE(77);
      END_STATE();
    case 129:
      if (lookahead == 'T') ADVANCE(273);
      END_STATE();
    case 130:
      if (lookahead == 'W') ADVANCE(556);
      END_STATE();
    case 131:
      if (lookahead == 'W') ADVANCE(290);
      END_STATE();
    case 132:
      if (lookahead == 'W') ADVANCE(291);
      END_STATE();
    case 133:
      if (lookahead == ']') ADVANCE(576);
      END_STATE();
    case 134:
      if (lookahead == ']') ADVANCE(572);
      END_STATE();
    case 135:
      if (lookahead == ']') ADVANCE(578);
      END_STATE();
    case 136:
      if (lookahead == ']') ADVANCE(574);
      END_STATE();
    case 137:
      if (lookahead == ']') ADVANCE(564);
      END_STATE();
    case 138:
      if (lookahead == ']') ADVANCE(568);
      END_STATE();
    case 139:
      if (lookahead == ']') ADVANCE(570);
      END_STATE();
    case 140:
      if (lookahead == ']') ADVANCE(566);
      END_STATE();
    case 141:
      if (lookahead == '`') ADVANCE(142);
      END_STATE();
    case 142:
      if (lookahead == '`') ADVANCE(837);
      END_STATE();
    case 143:
      if (lookahead == 'a') ADVANCE(505);
      if (lookahead == 'd') ADVANCE(49);
      END_STATE();
    case 144:
      if (lookahead == 'a') ADVANCE(46);
      END_STATE();
    case 145:
      if (lookahead == 'a') ADVANCE(189);
      END_STATE();
    case 146:
      if (lookahead == 'a') ADVANCE(305);
      END_STATE();
    case 147:
      if (lookahead == 'a') ADVANCE(305);
      if (lookahead == 'i') ADVANCE(303);
      END_STATE();
    case 148:
      if (lookahead == 'a') ADVANCE(318);
      END_STATE();
    case 149:
      if (lookahead == 'a') ADVANCE(199);
      if (lookahead == 'o') ADVANCE(369);
      END_STATE();
    case 150:
      if (lookahead == 'a') ADVANCE(210);
      END_STATE();
    case 151:
      if (lookahead == 'a') ADVANCE(210);
      if (lookahead == 'x') ADVANCE(35);
      END_STATE();
    case 152:
      if (lookahead == 'a') ADVANCE(418);
      END_STATE();
    case 153:
      if (lookahead == 'a') ADVANCE(378);
      END_STATE();
    case 154:
      if (lookahead == 'a') ADVANCE(377);
      END_STATE();
    case 155:
      if (lookahead == 'a') ADVANCE(394);
      END_STATE();
    case 156:
      if (lookahead == 'a') ADVANCE(297);
      END_STATE();
    case 157:
      if (lookahead == 'a') ADVANCE(468);
      END_STATE();
    case 158:
      if (lookahead == 'a') ADVANCE(139);
      END_STATE();
    case 159:
      if (lookahead == 'a') ADVANCE(462);
      END_STATE();
    case 160:
      if (lookahead == 'a') ADVANCE(402);
      END_STATE();
    case 161:
      if (lookahead == 'a') ADVANCE(402);
      if (lookahead == 'e') ADVANCE(389);
      END_STATE();
    case 162:
      if (lookahead == 'a') ADVANCE(292);
      END_STATE();
    case 163:
      if (lookahead == 'a') ADVANCE(325);
      END_STATE();
    case 164:
      if (lookahead == 'a') ADVANCE(437);
      END_STATE();
    case 165:
      if (lookahead == 'a') ADVANCE(437);
      if (lookahead == 'o') ADVANCE(205);
      if (lookahead == 'y') ADVANCE(480);
      END_STATE();
    case 166:
      if (lookahead == 'a') ADVANCE(464);
      END_STATE();
    case 167:
      if (lookahead == 'a') ADVANCE(326);
      END_STATE();
    case 168:
      if (lookahead == 'a') ADVANCE(327);
      END_STATE();
    case 169:
      if (lookahead == 'a') ADVANCE(472);
      END_STATE();
    case 170:
      if (lookahead == 'a') ADVANCE(460);
      END_STATE();
    case 171:
      if (lookahead == 'a') ADVANCE(376);
      END_STATE();
    case 172:
      if (lookahead == 'a') ADVANCE(376);
      if (lookahead == 'o') ADVANCE(347);
      END_STATE();
    case 173:
      if (lookahead == 'a') ADVANCE(508);
      END_STATE();
    case 174:
      if (lookahead == 'a') ADVANCE(308);
      END_STATE();
    case 175:
      if (lookahead == 'a') ADVANCE(469);
      END_STATE();
    case 176:
      if (lookahead == 'a') ADVANCE(319);
      END_STATE();
    case 177:
      if (lookahead == 'a') ADVANCE(401);
      END_STATE();
    case 178:
      if (lookahead == 'a') ADVANCE(379);
      END_STATE();
    case 179:
      if (lookahead == 'a') ADVANCE(414);
      END_STATE();
    case 180:
      if (lookahead == 'a') ADVANCE(450);
      END_STATE();
    case 181:
      if (lookahead == 'a') ADVANCE(311);
      END_STATE();
    case 182:
      if (lookahead == 'a') ADVANCE(312);
      END_STATE();
    case 183:
      if (lookahead == 'a') ADVANCE(313);
      END_STATE();
    case 184:
      if (lookahead == 'a') ADVANCE(478);
      END_STATE();
    case 185:
      if (lookahead == 'a') ADVANCE(416);
      END_STATE();
    case 186:
      if (lookahead == 'a') ADVANCE(484);
      END_STATE();
    case 187:
      if (lookahead == 'a') ADVANCE(481);
      END_STATE();
    case 188:
      if (lookahead == 'b') ADVANCE(365);
      if (lookahead == 'y') ADVANCE(40);
      END_STATE();
    case 189:
      if (lookahead == 'b') ADVANCE(306);
      END_STATE();
    case 190:
      if (lookahead == 'b') ADVANCE(367);
      END_STATE();
    case 191:
      if (lookahead == 'c') ADVANCE(58);
      END_STATE();
    case 192:
      if (lookahead == 'c') ADVANCE(274);
      END_STATE();
    case 193:
      if (lookahead == 'c') ADVANCE(360);
      END_STATE();
    case 194:
      if (lookahead == 'c') ADVANCE(304);
      END_STATE();
    case 195:
      if (lookahead == 'c') ADVANCE(153);
      END_STATE();
    case 196:
      if (lookahead == 'c') ADVANCE(359);
      END_STATE();
    case 197:
      if (lookahead == 'c') ADVANCE(178);
      END_STATE();
    case 198:
      if (lookahead == 'c') ADVANCE(371);
      END_STATE();
    case 199:
      if (lookahead == 'c') ADVANCE(256);
      END_STATE();
    case 200:
      if (lookahead == 'c') ADVANCE(496);
      END_STATE();
    case 201:
      if (lookahead == 'c') ADVANCE(482);
      END_STATE();
    case 202:
      if (lookahead == 'c') ADVANCE(187);
      END_STATE();
    case 203:
      if (lookahead == 'd') ADVANCE(49);
      END_STATE();
    case 204:
      if (lookahead == 'd') ADVANCE(634);
      END_STATE();
    case 205:
      if (lookahead == 'd') ADVANCE(510);
      END_STATE();
    case 206:
      if (lookahead == 'd') ADVANCE(287);
      END_STATE();
    case 207:
      if (lookahead == 'd') ADVANCE(433);
      END_STATE();
    case 208:
      if (lookahead == 'd') ADVANCE(223);
      END_STATE();
    case 209:
      if (lookahead == 'd') ADVANCE(224);
      END_STATE();
    case 210:
      if (lookahead == 'd') ADVANCE(244);
      END_STATE();
    case 211:
      if (lookahead == 'd') ADVANCE(252);
      END_STATE();
    case 212:
      if (lookahead == 'e') ADVANCE(151);
      END_STATE();
    case 213:
      if (lookahead == 'e') ADVANCE(262);
      END_STATE();
    case 214:
      if (lookahead == 'e') ADVANCE(51);
      END_STATE();
    case 215:
      if (lookahead == 'e') ADVANCE(880);
      END_STATE();
    case 216:
      if (lookahead == 'e') ADVANCE(882);
      END_STATE();
    case 217:
      if (lookahead == 'e') ADVANCE(600);
      END_STATE();
    case 218:
      if (lookahead == 'e') ADVANCE(593);
      END_STATE();
    case 219:
      if (lookahead == 'e') ADVANCE(587);
      END_STATE();
    case 220:
      if (lookahead == 'e') ADVANCE(592);
      END_STATE();
    case 221:
      if (lookahead == 'e') ADVANCE(594);
      END_STATE();
    case 222:
      if (lookahead == 'e') ADVANCE(259);
      END_STATE();
    case 223:
      if (lookahead == 'e') ADVANCE(876);
      END_STATE();
    case 224:
      if (lookahead == 'e') ADVANCE(875);
      END_STATE();
    case 225:
      if (lookahead == 'e') ADVANCE(877);
      END_STATE();
    case 226:
      if (lookahead == 'e') ADVANCE(878);
      END_STATE();
    case 227:
      if (lookahead == 'e') ADVANCE(388);
      END_STATE();
    case 228:
      if (lookahead == 'e') ADVANCE(261);
      END_STATE();
    case 229:
      if (lookahead == 'e') ADVANCE(506);
      END_STATE();
    case 230:
      if (lookahead == 'e') ADVANCE(36);
      END_STATE();
    case 231:
      if (lookahead == 'e') ADVANCE(395);
      END_STATE();
    case 232:
      if (lookahead == 'e') ADVANCE(263);
      END_STATE();
    case 233:
      if (lookahead == 'e') ADVANCE(206);
      END_STATE();
    case 234:
      if (lookahead == 'e') ADVANCE(504);
      END_STATE();
    case 235:
      if (lookahead == 'e') ADVANCE(504);
      if (lookahead == 't') ADVANCE(320);
      END_STATE();
    case 236:
      if (lookahead == 'e') ADVANCE(200);
      END_STATE();
    case 237:
      if (lookahead == 'e') ADVANCE(507);
      if (lookahead == 't') ADVANCE(320);
      END_STATE();
    case 238:
      if (lookahead == 'e') ADVANCE(432);
      END_STATE();
    case 239:
      if (lookahead == 'e') ADVANCE(39);
      END_STATE();
    case 240:
      if (lookahead == 'e') ADVANCE(435);
      END_STATE();
    case 241:
      if (lookahead == 'e') ADVANCE(204);
      END_STATE();
    case 242:
      if (lookahead == 'e') ADVANCE(201);
      END_STATE();
    case 243:
      if (lookahead == 'e') ADVANCE(420);
      END_STATE();
    case 244:
      if (lookahead == 'e') ADVANCE(390);
      END_STATE();
    case 245:
      if (lookahead == 'e') ADVANCE(392);
      END_STATE();
    case 246:
      if (lookahead == 'e') ADVANCE(167);
      END_STATE();
    case 247:
      if (lookahead == 'e') ADVANCE(393);
      END_STATE();
    case 248:
      if (lookahead == 'e') ADVANCE(150);
      END_STATE();
    case 249:
      if (lookahead == 'e') ADVANCE(415);
      END_STATE();
    case 250:
      if (lookahead == 'e') ADVANCE(391);
      END_STATE();
    case 251:
      if (lookahead == 'e') ADVANCE(425);
      END_STATE();
    case 252:
      if (lookahead == 'e') ADVANCE(427);
      END_STATE();
    case 253:
      if (lookahead == 'e') ADVANCE(446);
      END_STATE();
    case 254:
      if (lookahead == 'e') ADVANCE(53);
      END_STATE();
    case 255:
      if (lookahead == 'e') ADVANCE(196);
      END_STATE();
    case 256:
      if (lookahead == 'e') ADVANCE(405);
      END_STATE();
    case 257:
      if (lookahead == 'e') ADVANCE(186);
      END_STATE();
    case 258:
      if (lookahead == 'e') ADVANCE(451);
      END_STATE();
    case 259:
      if (lookahead == 'f') ADVANCE(286);
      END_STATE();
    case 260:
      if (lookahead == 'g') ADVANCE(632);
      END_STATE();
    case 261:
      if (lookahead == 'g') ADVANCE(229);
      END_STATE();
    case 262:
      if (lookahead == 'g') ADVANCE(229);
      if (lookahead == 't') ADVANCE(397);
      END_STATE();
    case 263:
      if (lookahead == 'g') ADVANCE(250);
      END_STATE();
    case 264:
      if (lookahead == 'g') ADVANCE(115);
      END_STATE();
    case 265:
      if (lookahead == 'h') ADVANCE(602);
      END_STATE();
    case 266:
      if (lookahead == 'h') ADVANCE(603);
      END_STATE();
    case 267:
      if (lookahead == 'h') ADVANCE(624);
      END_STATE();
    case 268:
      if (lookahead == 'h') ADVANCE(623);
      END_STATE();
    case 269:
      if (lookahead == 'h') ADVANCE(383);
      END_STATE();
    case 270:
      if (lookahead == 'h') ADVANCE(137);
      END_STATE();
    case 271:
      if (lookahead == 'h') ADVANCE(144);
      if (lookahead == 't') ADVANCE(175);
      END_STATE();
    case 272:
      if (lookahead == 'h') ADVANCE(163);
      END_STATE();
    case 273:
      if (lookahead == 'h') ADVANCE(168);
      END_STATE();
    case 274:
      if (lookahead == 'h') ADVANCE(251);
      END_STATE();
    case 275:
      if (lookahead == 'i') ADVANCE(191);
      END_STATE();
    case 276:
      if (lookahead == 'i') ADVANCE(380);
      END_STATE();
    case 277:
      if (lookahead == 'i') ADVANCE(238);
      END_STATE();
    case 278:
      if (lookahead == 'i') ADVANCE(322);
      END_STATE();
    case 279:
      if (lookahead == 'i') ADVANCE(348);
      END_STATE();
    case 280:
      if (lookahead == 'i') ADVANCE(335);
      if (lookahead == 'm') ADVANCE(173);
      END_STATE();
    case 281:
      if (lookahead == 'i') ADVANCE(354);
      END_STATE();
    case 282:
      if (lookahead == 'i') ADVANCE(358);
      END_STATE();
    case 283:
      if (lookahead == 'i') ADVANCE(145);
      END_STATE();
    case 284:
      if (lookahead == 'i') ADVANCE(330);
      END_STATE();
    case 285:
      if (lookahead == 'i') ADVANCE(217);
      END_STATE();
    case 286:
      if (lookahead == 'i') ADVANCE(342);
      END_STATE();
    case 287:
      if (lookahead == 'i') ADVANCE(410);
      END_STATE();
    case 288:
      if (lookahead == 'i') ADVANCE(362);
      END_STATE();
    case 289:
      if (lookahead == 'i') ADVANCE(448);
      END_STATE();
    case 290:
      if (lookahead == 'i') ADVANCE(471);
      END_STATE();
    case 291:
      if (lookahead == 'i') ADVANCE(473);
      END_STATE();
    case 292:
      if (lookahead == 'i') ADVANCE(341);
      END_STATE();
    case 293:
      if (lookahead == 'k') ADVANCE(277);
      END_STATE();
    case 294:
      if (lookahead == 'k') ADVANCE(285);
      END_STATE();
    case 295:
      if (lookahead == 'l') ADVANCE(598);
      END_STATE();
    case 296:
      if (lookahead == 'l') ADVANCE(884);
      END_STATE();
    case 297:
      if (lookahead == 'l') ADVANCE(590);
      END_STATE();
    case 298:
      if (lookahead == 'l') ADVANCE(70);
      END_STATE();
    case 299:
      if (lookahead == 'l') ADVANCE(82);
      END_STATE();
    case 300:
      if (lookahead == 'l') ADVANCE(841);
      END_STATE();
    case 301:
      if (lookahead == 'l') ADVANCE(842);
      END_STATE();
    case 302:
      if (lookahead == 'l') ADVANCE(296);
      END_STATE();
    case 303:
      if (lookahead == 'l') ADVANCE(230);
      END_STATE();
    case 304:
      if (lookahead == 'l') ADVANCE(491);
      END_STATE();
    case 305:
      if (lookahead == 'l') ADVANCE(442);
      END_STATE();
    case 306:
      if (lookahead == 'l') ADVANCE(220);
      END_STATE();
    case 307:
      if (lookahead == 'l') ADVANCE(373);
      END_STATE();
    case 308:
      if (lookahead == 'l') ADVANCE(423);
      END_STATE();
    case 309:
      if (lookahead == 'l') ADVANCE(246);
      END_STATE();
    case 310:
      if (lookahead == 'l') ADVANCE(242);
      END_STATE();
    case 311:
      if (lookahead == 'l') ADVANCE(428);
      END_STATE();
    case 312:
      if (lookahead == 'l') ADVANCE(429);
      END_STATE();
    case 313:
      if (lookahead == 'l') ADVANCE(430);
      END_STATE();
    case 314:
      if (lookahead == 'l') ADVANCE(466);
      END_STATE();
    case 315:
      if (lookahead == 'l') ADVANCE(310);
      END_STATE();
    case 316:
      if (lookahead == 'm') ADVANCE(112);
      END_STATE();
    case 317:
      if (lookahead == 'm') ADVANCE(69);
      END_STATE();
    case 318:
      if (lookahead == 'm') ADVANCE(438);
      END_STATE();
    case 319:
      if (lookahead == 'm') ADVANCE(440);
      END_STATE();
    case 320:
      if (lookahead == 'm') ADVANCE(299);
      END_STATE();
    case 321:
      if (lookahead == 'm') ADVANCE(300);
      END_STATE();
    case 322:
      if (lookahead == 'n') ADVANCE(264);
      END_STATE();
    case 323:
      if (lookahead == 'n') ADVANCE(605);
      END_STATE();
    case 324:
      if (lookahead == 'n') ADVANCE(586);
      END_STATE();
    case 325:
      if (lookahead == 'n') ADVANCE(618);
      END_STATE();
    case 326:
      if (lookahead == 'n') ADVANCE(631);
      END_STATE();
    case 327:
      if (lookahead == 'n') ADVANCE(614);
      END_STATE();
    case 328:
      if (lookahead == 'n') ADVANCE(633);
      END_STATE();
    case 329:
      if (lookahead == 'n') ADVANCE(840);
      END_STATE();
    case 330:
      if (lookahead == 'n') ADVANCE(260);
      END_STATE();
    case 331:
      if (lookahead == 'n') ADVANCE(207);
      if (lookahead == 'q') ADVANCE(494);
      if (lookahead == 'x') ADVANCE(289);
      END_STATE();
    case 332:
      if (lookahead == 'n') ADVANCE(434);
      END_STATE();
    case 333:
      if (lookahead == 'n') ADVANCE(194);
      if (lookahead == 's') ADVANCE(60);
      END_STATE();
    case 334:
      if (lookahead == 'n') ADVANCE(439);
      END_STATE();
    case 335:
      if (lookahead == 'n') ADVANCE(483);
      END_STATE();
    case 336:
      if (lookahead == 'n') ADVANCE(456);
      END_STATE();
    case 337:
      if (lookahead == 'n') ADVANCE(474);
      if (lookahead == 'u') ADVANCE(338);
      END_STATE();
    case 338:
      if (lookahead == 'n') ADVANCE(458);
      END_STATE();
    case 339:
      if (lookahead == 'n') ADVANCE(477);
      END_STATE();
    case 340:
      if (lookahead == 'n') ADVANCE(459);
      END_STATE();
    case 341:
      if (lookahead == 'n') ADVANCE(426);
      END_STATE();
    case 342:
      if (lookahead == 'n') ADVANCE(241);
      END_STATE();
    case 343:
      if (lookahead == 'n') ADVANCE(198);
      END_STATE();
    case 344:
      if (lookahead == 'n') ADVANCE(258);
      END_STATE();
    case 345:
      if (lookahead == 'n') ADVANCE(382);
      END_STATE();
    case 346:
      if (lookahead == 'o') ADVANCE(387);
      END_STATE();
    case 347:
      if (lookahead == 'o') ADVANCE(293);
      END_STATE();
    case 348:
      if (lookahead == 'o') ADVANCE(332);
      END_STATE();
    case 349:
      if (lookahead == 'o') ADVANCE(205);
      if (lookahead == 'y') ADVANCE(480);
      END_STATE();
    case 350:
      if (lookahead == 'o') ADVANCE(337);
      END_STATE();
    case 351:
      if (lookahead == 'o') ADVANCE(347);
      END_STATE();
    case 352:
      if (lookahead == 'o') ADVANCE(202);
      END_STATE();
    case 353:
      if (lookahead == 'o') ADVANCE(345);
      END_STATE();
    case 354:
      if (lookahead == 'o') ADVANCE(323);
      END_STATE();
    case 355:
      if (lookahead == 'o') ADVANCE(94);
      END_STATE();
    case 356:
      if (lookahead == 'o') ADVANCE(94);
      if (lookahead == 'r') ADVANCE(493);
      END_STATE();
    case 357:
      if (lookahead == 'o') ADVANCE(38);
      END_STATE();
    case 358:
      if (lookahead == 'o') ADVANCE(324);
      END_STATE();
    case 359:
      if (lookahead == 'o') ADVANCE(208);
      END_STATE();
    case 360:
      if (lookahead == 'o') ADVANCE(497);
      END_STATE();
    case 361:
      if (lookahead == 'o') ADVANCE(315);
      END_STATE();
    case 362:
      if (lookahead == 'o') ADVANCE(328);
      END_STATE();
    case 363:
      if (lookahead == 'o') ADVANCE(372);
      END_STATE();
    case 364:
      if (lookahead == 'o') ADVANCE(329);
      END_STATE();
    case 365:
      if (lookahead == 'o') ADVANCE(443);
      END_STATE();
    case 366:
      if (lookahead == 'o') ADVANCE(457);
      if (lookahead == 'u') ADVANCE(302);
      END_STATE();
    case 367:
      if (lookahead == 'o') ADVANCE(444);
      END_STATE();
    case 368:
      if (lookahead == 'o') ADVANCE(396);
      END_STATE();
    case 369:
      if (lookahead == 'o') ADVANCE(294);
      END_STATE();
    case 370:
      if (lookahead == 'o') ADVANCE(369);
      END_STATE();
    case 371:
      if (lookahead == 'o') ADVANCE(209);
      END_STATE();
    case 372:
      if (lookahead == 'o') ADVANCE(309);
      END_STATE();
    case 373:
      if (lookahead == 'o') ADVANCE(170);
      END_STATE();
    case 374:
      if (lookahead == 'o') ADVANCE(498);
      END_STATE();
    case 375:
      if (lookahead == 'p') ADVANCE(461);
      END_STATE();
    case 376:
      if (lookahead == 'p') ADVANCE(463);
      END_STATE();
    case 377:
      if (lookahead == 'p') ADVANCE(269);
      END_STATE();
    case 378:
      if (lookahead == 'p') ADVANCE(225);
      END_STATE();
    case 379:
      if (lookahead == 'p') ADVANCE(226);
      END_STATE();
    case 380:
      if (lookahead == 'p') ADVANCE(177);
      END_STATE();
    case 381:
      if (lookahead == 'p') ADVANCE(159);
      END_STATE();
    case 382:
      if (lookahead == 'p') ADVANCE(166);
      END_STATE();
    case 383:
      if (lookahead == 'q') ADVANCE(301);
      END_STATE();
    case 384:
      if (lookahead == 'q') ADVANCE(499);
      END_STATE();
    case 385:
      if (lookahead == 'q') ADVANCE(500);
      END_STATE();
    case 386:
      if (lookahead == 'q') ADVANCE(501);
      END_STATE();
    case 387:
      if (lookahead == 'r') ADVANCE(316);
      END_STATE();
    case 388:
      if (lookahead == 'r') ADVANCE(509);
      END_STATE();
    case 389:
      if (lookahead == 'r') ADVANCE(188);
      END_STATE();
    case 390:
      if (lookahead == 'r') ADVANCE(599);
      END_STATE();
    case 391:
      if (lookahead == 'r') ADVANCE(629);
      END_STATE();
    case 392:
      if (lookahead == 'r') ADVANCE(190);
      END_STATE();
    case 393:
      if (lookahead == 'r') ADVANCE(502);
      END_STATE();
    case 394:
      if (lookahead == 'r') ADVANCE(148);
      END_STATE();
    case 395:
      if (lookahead == 'r') ADVANCE(465);
      END_STATE();
    case 396:
      if (lookahead == 'r') ADVANCE(317);
      END_STATE();
    case 397:
      if (lookahead == 'r') ADVANCE(511);
      END_STATE();
    case 398:
      if (lookahead == 'r') ADVANCE(493);
      END_STATE();
    case 399:
      if (lookahead == 'r') ADVANCE(295);
      END_STATE();
    case 400:
      if (lookahead == 'r') ADVANCE(278);
      END_STATE();
    case 401:
      if (lookahead == 'r') ADVANCE(454);
      END_STATE();
    case 402:
      if (lookahead == 'r') ADVANCE(283);
      END_STATE();
    case 403:
      if (lookahead == 'r') ADVANCE(184);
      END_STATE();
    case 404:
      if (lookahead == 'r') ADVANCE(298);
      END_STATE();
    case 405:
      if (lookahead == 'r') ADVANCE(455);
      END_STATE();
    case 406:
      if (lookahead == 'r') ADVANCE(83);
      END_STATE();
    case 407:
      if (lookahead == 'r') ADVANCE(233);
      END_STATE();
    case 408:
      if (lookahead == 'r') ADVANCE(284);
      END_STATE();
    case 409:
      if (lookahead == 'r') ADVANCE(219);
      END_STATE();
    case 410:
      if (lookahead == 'r') ADVANCE(422);
      END_STATE();
    case 411:
      if (lookahead == 'r') ADVANCE(154);
      END_STATE();
    case 412:
      if (lookahead == 'r') ADVANCE(257);
      END_STATE();
    case 413:
      if (lookahead == 'r') ADVANCE(240);
      END_STATE();
    case 414:
      if (lookahead == 'r') ADVANCE(176);
      END_STATE();
    case 415:
      if (lookahead == 'r') ADVANCE(129);
      END_STATE();
    case 416:
      if (lookahead == 'r') ADVANCE(485);
      END_STATE();
    case 417:
      if (lookahead == 'r') ADVANCE(84);
      END_STATE();
    case 418:
      if (lookahead == 's') ADVANCE(275);
      END_STATE();
    case 419:
      if (lookahead == 's') ADVANCE(133);
      END_STATE();
    case 420:
      if (lookahead == 's') ADVANCE(608);
      END_STATE();
    case 421:
      if (lookahead == 's') ADVANCE(597);
      END_STATE();
    case 422:
      if (lookahead == 's') ADVANCE(588);
      END_STATE();
    case 423:
      if (lookahead == 's') ADVANCE(610);
      END_STATE();
    case 424:
      if (lookahead == 's') ADVANCE(627);
      END_STATE();
    case 425:
      if (lookahead == 's') ADVANCE(626);
      END_STATE();
    case 426:
      if (lookahead == 's') ADVANCE(625);
      END_STATE();
    case 427:
      if (lookahead == 's') ADVANCE(628);
      END_STATE();
    case 428:
      if (lookahead == 's') ADVANCE(612);
      END_STATE();
    case 429:
      if (lookahead == 's') ADVANCE(621);
      END_STATE();
    case 430:
      if (lookahead == 's') ADVANCE(616);
      END_STATE();
    case 431:
      if (lookahead == 's') ADVANCE(447);
      END_STATE();
    case 432:
      if (lookahead == 's') ADVANCE(134);
      END_STATE();
    case 433:
      if (lookahead == 's') ADVANCE(131);
      END_STATE();
    case 434:
      if (lookahead == 's') ADVANCE(135);
      END_STATE();
    case 435:
      if (lookahead == 's') ADVANCE(136);
      END_STATE();
    case 436:
      if (lookahead == 's') ADVANCE(353);
      END_STATE();
    case 437:
      if (lookahead == 's') ADVANCE(214);
      END_STATE();
    case 438:
      if (lookahead == 's') ADVANCE(138);
      END_STATE();
    case 439:
      if (lookahead == 's') ADVANCE(236);
      END_STATE();
    case 440:
      if (lookahead == 's') ADVANCE(140);
      END_STATE();
    case 441:
      if (lookahead == 's') ADVANCE(127);
      END_STATE();
    case 442:
      if (lookahead == 's') ADVANCE(216);
      END_STATE();
    case 443:
      if (lookahead == 's') ADVANCE(218);
      END_STATE();
    case 444:
      if (lookahead == 's') ADVANCE(221);
      END_STATE();
    case 445:
      if (lookahead == 's') ADVANCE(364);
      END_STATE();
    case 446:
      if (lookahead == 's') ADVANCE(441);
      END_STATE();
    case 447:
      if (lookahead == 's') ADVANCE(231);
      END_STATE();
    case 448:
      if (lookahead == 's') ADVANCE(476);
      END_STATE();
    case 449:
      if (lookahead == 's') ADVANCE(195);
      END_STATE();
    case 450:
      if (lookahead == 's') ADVANCE(254);
      END_STATE();
    case 451:
      if (lookahead == 's') ADVANCE(197);
      END_STATE();
    case 452:
      if (lookahead == 's') ADVANCE(132);
      END_STATE();
    case 453:
      if (lookahead == 't') ADVANCE(270);
      END_STATE();
    case 454:
      if (lookahead == 't') ADVANCE(86);
      END_STATE();
    case 455:
      if (lookahead == 't') ADVANCE(585);
      END_STATE();
    case 456:
      if (lookahead == 't') ADVANCE(591);
      END_STATE();
    case 457:
      if (lookahead == 't') ADVANCE(609);
      END_STATE();
    case 458:
      if (lookahead == 't') ADVANCE(874);
      END_STATE();
    case 459:
      if (lookahead == 't') ADVANCE(879);
      END_STATE();
    case 460:
      if (lookahead == 't') ADVANCE(630);
      END_STATE();
    case 461:
      if (lookahead == 't') ADVANCE(279);
      END_STATE();
    case 462:
      if (lookahead == 't') ADVANCE(265);
      END_STATE();
    case 463:
      if (lookahead == 't') ADVANCE(488);
      END_STATE();
    case 464:
      if (lookahead == 't') ADVANCE(266);
      END_STATE();
    case 465:
      if (lookahead == 't') ADVANCE(419);
      END_STATE();
    case 466:
      if (lookahead == 't') ADVANCE(276);
      END_STATE();
    case 467:
      if (lookahead == 't') ADVANCE(320);
      END_STATE();
    case 468:
      if (lookahead == 't') ADVANCE(158);
      END_STATE();
    case 469:
      if (lookahead == 't') ADVANCE(495);
      END_STATE();
    case 470:
      if (lookahead == 't') ADVANCE(400);
      END_STATE();
    case 471:
      if (lookahead == 't') ADVANCE(267);
      END_STATE();
    case 472:
      if (lookahead == 't') ADVANCE(192);
      END_STATE();
    case 473:
      if (lookahead == 't') ADVANCE(268);
      END_STATE();
    case 474:
      if (lookahead == 't') ADVANCE(162);
      END_STATE();
    case 475:
      if (lookahead == 't') ADVANCE(408);
      END_STATE();
    case 476:
      if (lookahead == 't') ADVANCE(424);
      END_STATE();
    case 477:
      if (lookahead == 't') ADVANCE(232);
      END_STATE();
    case 478:
      if (lookahead == 't') ADVANCE(281);
      END_STATE();
    case 479:
      if (lookahead == 't') ADVANCE(185);
      END_STATE();
    case 480:
      if (lookahead == 't') ADVANCE(243);
      END_STATE();
    case 481:
      if (lookahead == 't') ADVANCE(282);
      END_STATE();
    case 482:
      if (lookahead == 't') ADVANCE(288);
      END_STATE();
    case 483:
      if (lookahead == 't') ADVANCE(247);
      END_STATE();
    case 484:
      if (lookahead == 't') ADVANCE(249);
      END_STATE();
    case 485:
      if (lookahead == 't') ADVANCE(452);
      END_STATE();
    case 486:
      if (lookahead == 'u') ADVANCE(314);
      END_STATE();
    case 487:
      if (lookahead == 'u') ADVANCE(227);
      END_STATE();
    case 488:
      if (lookahead == 'u') ADVANCE(413);
      END_STATE();
    case 489:
      if (lookahead == 'u') ADVANCE(302);
      END_STATE();
    case 490:
      if (lookahead == 'u') ADVANCE(453);
      END_STATE();
    case 491:
      if (lookahead == 'u') ADVANCE(211);
      END_STATE();
    case 492:
      if (lookahead == 'u') ADVANCE(403);
      END_STATE();
    case 493:
      if (lookahead == 'u') ADVANCE(215);
      END_STATE();
    case 494:
      if (lookahead == 'u') ADVANCE(174);
      END_STATE();
    case 495:
      if (lookahead == 'u') ADVANCE(421);
      END_STATE();
    case 496:
      if (lookahead == 'u') ADVANCE(409);
      END_STATE();
    case 497:
      if (lookahead == 'u') ADVANCE(336);
      END_STATE();
    case 498:
      if (lookahead == 'u') ADVANCE(338);
      END_STATE();
    case 499:
      if (lookahead == 'u') ADVANCE(181);
      END_STATE();
    case 500:
      if (lookahead == 'u') ADVANCE(182);
      END_STATE();
    case 501:
      if (lookahead == 'u') ADVANCE(183);
      END_STATE();
    case 502:
      if (lookahead == 'v') ADVANCE(156);
      END_STATE();
    case 503:
      if (lookahead == 'v') ADVANCE(245);
      END_STATE();
    case 504:
      if (lookahead == 'x') ADVANCE(35);
      END_STATE();
    case 505:
      if (lookahead == 'x') ADVANCE(42);
      END_STATE();
    case 506:
      if (lookahead == 'x') ADVANCE(604);
      END_STATE();
    case 507:
      if (lookahead == 'x') ADVANCE(839);
      END_STATE();
    case 508:
      if (lookahead == 'x') ADVANCE(41);
      END_STATE();
    case 509:
      if (lookahead == 'y') ADVANCE(119);
      END_STATE();
    case 510:
      if (lookahead == 'y') ADVANCE(601);
      END_STATE();
    case 511:
      if (lookahead == 'y') ADVANCE(589);
      END_STATE();
    case 512:
      if (lookahead == '{') ADVANCE(868);
      END_STATE();
    case 513:
      if (lookahead == '}') ADVANCE(871);
      END_STATE();
    case 514:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1);
      END_STATE();
    case 515:
      if (eof) ADVANCE(522);
      if (lookahead == '\n') ADVANCE(523);
      if (lookahead == '"') ADVANCE(639);
      if (lookahead == '#') ADVANCE(514);
      if (lookahead == '.') ADVANCE(888);
      if (lookahead == '<') ADVANCE(619);
      if (lookahead == 'C') ADVANCE(108);
      if (lookahead == 'D') ADVANCE(72);
      if (lookahead == 'E') ADVANCE(890);
      if (lookahead == 'G') ADVANCE(73);
      if (lookahead == 'H') ADVANCE(79);
      if (lookahead == 'L') ADVANCE(90);
      if (lookahead == 'O') ADVANCE(114);
      if (lookahead == 'P') ADVANCE(59);
      if (lookahead == 'T') ADVANCE(117);
      if (lookahead == 'U') ADVANCE(102);
      if (lookahead == 'V') ADVANCE(89);
      if (lookahead == '[') ADVANCE(858);
      if (lookahead == '`') ADVANCE(830);
      if (lookahead == 'b') ADVANCE(165);
      if (lookahead == 'c') ADVANCE(149);
      if (lookahead == 'd') ADVANCE(492);
      if (lookahead == 'e') ADVANCE(889);
      if (lookahead == 'f') ADVANCE(147);
      if (lookahead == 'h') ADVANCE(212);
      if (lookahead == 'i') ADVANCE(334);
      if (lookahead == 'j') ADVANCE(436);
      if (lookahead == 'l') ADVANCE(352);
      if (lookahead == 'm') ADVANCE(143);
      if (lookahead == 'n') ADVANCE(489);
      if (lookahead == 'r') ADVANCE(213);
      if (lookahead == 's') ADVANCE(271);
      if (lookahead == 't') ADVANCE(398);
      if (lookahead == 'u') ADVANCE(399);
      if (lookahead == 'v') ADVANCE(161);
      if (lookahead == 'x') ADVANCE(381);
      if (lookahead == '{') ADVANCE(854);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(886);
      if (aux_sym_value_string_text_token1_character_set_1(lookahead)) SKIP(516)
      END_STATE();
    case 516:
      if (eof) ADVANCE(522);
      if (lookahead == '\n') ADVANCE(523);
      if (lookahead == '"') ADVANCE(639);
      if (lookahead == '#') ADVANCE(514);
      if (lookahead == '.') ADVANCE(888);
      if (lookahead == '<') ADVANCE(619);
      if (lookahead == 'C') ADVANCE(108);
      if (lookahead == 'D') ADVANCE(72);
      if (lookahead == 'E') ADVANCE(890);
      if (lookahead == 'G') ADVANCE(73);
      if (lookahead == 'H') ADVANCE(79);
      if (lookahead == 'L') ADVANCE(90);
      if (lookahead == 'O') ADVANCE(114);
      if (lookahead == 'P') ADVANCE(59);
      if (lookahead == 'T') ADVANCE(117);
      if (lookahead == 'U') ADVANCE(102);
      if (lookahead == 'V') ADVANCE(89);
      if (lookahead == '[') ADVANCE(858);
      if (lookahead == '`') ADVANCE(830);
      if (lookahead == 'b') ADVANCE(165);
      if (lookahead == 'c') ADVANCE(149);
      if (lookahead == 'd') ADVANCE(492);
      if (lookahead == 'e') ADVANCE(889);
      if (lookahead == 'f') ADVANCE(147);
      if (lookahead == 'h') ADVANCE(212);
      if (lookahead == 'i') ADVANCE(334);
      if (lookahead == 'j') ADVANCE(436);
      if (lookahead == 'l') ADVANCE(352);
      if (lookahead == 'm') ADVANCE(143);
      if (lookahead == 'n') ADVANCE(489);
      if (lookahead == 'r') ADVANCE(213);
      if (lookahead == 's') ADVANCE(271);
      if (lookahead == 't') ADVANCE(398);
      if (lookahead == 'u') ADVANCE(399);
      if (lookahead == 'v') ADVANCE(161);
      if (lookahead == 'x') ADVANCE(381);
      if (lookahead == '{') ADVANCE(853);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(886);
      if (aux_sym_value_string_text_token1_character_set_1(lookahead)) SKIP(516)
      END_STATE();
    case 517:
      if (eof) ADVANCE(522);
      if (lookahead == '\n') ADVANCE(523);
      if (lookahead == '"') ADVANCE(639);
      if (lookahead == '#') ADVANCE(514);
      if (lookahead == '<') ADVANCE(619);
      if (lookahead == 'C') ADVANCE(108);
      if (lookahead == 'D') ADVANCE(72);
      if (lookahead == 'G') ADVANCE(73);
      if (lookahead == 'H') ADVANCE(79);
      if (lookahead == 'L') ADVANCE(90);
      if (lookahead == 'O') ADVANCE(114);
      if (lookahead == 'P') ADVANCE(59);
      if (lookahead == 'T') ADVANCE(117);
      if (lookahead == 'U') ADVANCE(102);
      if (lookahead == 'V') ADVANCE(89);
      if (lookahead == '[') ADVANCE(860);
      if (lookahead == '`') ADVANCE(830);
      if (lookahead == 'b') ADVANCE(164);
      if (lookahead == 'f') ADVANCE(147);
      if (lookahead == 'h') ADVANCE(234);
      if (lookahead == 'n') ADVANCE(489);
      if (lookahead == 't') ADVANCE(398);
      if (lookahead == '{') ADVANCE(853);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(886);
      if (aux_sym_value_string_text_token1_character_set_1(lookahead)) SKIP(517)
      END_STATE();
    case 518:
      if (eof) ADVANCE(522);
      if (lookahead == '\n') ADVANCE(523);
      if (lookahead == '"') ADVANCE(639);
      if (lookahead == '#') ADVANCE(514);
      if (lookahead == '<') ADVANCE(619);
      if (lookahead == 'C') ADVANCE(108);
      if (lookahead == 'D') ADVANCE(72);
      if (lookahead == 'G') ADVANCE(73);
      if (lookahead == 'H') ADVANCE(78);
      if (lookahead == 'L') ADVANCE(90);
      if (lookahead == 'O') ADVANCE(114);
      if (lookahead == 'P') ADVANCE(59);
      if (lookahead == 'T') ADVANCE(117);
      if (lookahead == 'U') ADVANCE(102);
      if (lookahead == 'V') ADVANCE(89);
      if (lookahead == '[') ADVANCE(859);
      if (lookahead == '`') ADVANCE(830);
      if (lookahead == 'b') ADVANCE(164);
      if (lookahead == 'f') ADVANCE(147);
      if (lookahead == 'h') ADVANCE(234);
      if (lookahead == 'n') ADVANCE(489);
      if (lookahead == 't') ADVANCE(398);
      if (lookahead == '{') ADVANCE(853);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(886);
      if (aux_sym_value_string_text_token1_character_set_1(lookahead)) SKIP(518)
      END_STATE();
    case 519:
      if (eof) ADVANCE(522);
      if (lookahead == '\n') ADVANCE(523);
      if (lookahead == '"') ADVANCE(639);
      if (lookahead == '#') ADVANCE(514);
      if (sym_key_string_text_character_set_2(lookahead)) ADVANCE(815);
      if (lookahead == '<') ADVANCE(619);
      if (lookahead == 'C') ADVANCE(702);
      if (lookahead == 'D') ADVANCE(673);
      if (lookahead == 'G') ADVANCE(674);
      if (lookahead == 'H') ADVANCE(655);
      if (lookahead == 'L') ADVANCE(656);
      if (lookahead == 'O') ADVANCE(708);
      if (lookahead == 'P') ADVANCE(654);
      if (lookahead == 'T') ADVANCE(710);
      if (lookahead == 'U') ADVANCE(696);
      if (lookahead == 'V') ADVANCE(686);
      if (lookahead == '[') ADVANCE(861);
      if (lookahead == '\\') ADVANCE(820);
      if (lookahead == '`') ADVANCE(830);
      if (lookahead == 'b') ADVANCE(796);
      if (lookahead == 'f') ADVANCE(659);
      if (lookahead == 'h') ADVANCE(723);
      if (lookahead == 'n') ADVANCE(789);
      if (lookahead == 't') ADVANCE(762);
      if (lookahead == '{') ADVANCE(854);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(815);
      if (aux_sym_value_string_text_token1_character_set_1(lookahead)) SKIP(517)
      END_STATE();
    case 520:
      if (eof) ADVANCE(522);
      if (lookahead == '\n') ADVANCE(523);
      if (lookahead == '"') ADVANCE(639);
      if (lookahead == '#') ADVANCE(514);
      if (sym_key_string_text_character_set_2(lookahead)) ADVANCE(815);
      if (lookahead == '<') ADVANCE(619);
      if (lookahead == 'C') ADVANCE(702);
      if (lookahead == 'D') ADVANCE(673);
      if (lookahead == 'G') ADVANCE(674);
      if (lookahead == 'H') ADVANCE(675);
      if (lookahead == 'L') ADVANCE(656);
      if (lookahead == 'O') ADVANCE(708);
      if (lookahead == 'P') ADVANCE(654);
      if (lookahead == 'T') ADVANCE(710);
      if (lookahead == 'U') ADVANCE(696);
      if (lookahead == 'V') ADVANCE(686);
      if (lookahead == '[') ADVANCE(862);
      if (lookahead == '\\') ADVANCE(820);
      if (lookahead == '`') ADVANCE(830);
      if (lookahead == 'b') ADVANCE(796);
      if (lookahead == 'f') ADVANCE(659);
      if (lookahead == 'h') ADVANCE(723);
      if (lookahead == 'n') ADVANCE(789);
      if (lookahead == 't') ADVANCE(762);
      if (lookahead == '{') ADVANCE(854);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(815);
      if (aux_sym_value_string_text_token1_character_set_1(lookahead)) SKIP(518)
      END_STATE();
    case 521:
      if (eof) ADVANCE(522);
      if (lookahead == '!') ADVANCE(54);
      if (lookahead == '"') ADVANCE(639);
      if (lookahead == '#') ADVANCE(828);
      if (lookahead == '*') ADVANCE(563);
      if (lookahead == '+') ADVANCE(891);
      if (lookahead == ',') ADVANCE(856);
      if (lookahead == '-') ADVANCE(892);
      if (lookahead == '.') ADVANCE(888);
      if (lookahead == '/') ADVANCE(894);
      if (lookahead == ':') ADVANCE(581);
      if (lookahead == ';') ADVANCE(583);
      if (lookahead == '<') ADVANCE(620);
      if (lookahead == '=') ADVANCE(596);
      if (lookahead == '>') ADVANCE(615);
      if (lookahead == 'E') ADVANCE(890);
      if (lookahead == '[') ADVANCE(858);
      if (lookahead == '\\') ADVANCE(644);
      if (lookahead == ']') ADVANCE(863);
      if (lookahead == '`') ADVANCE(830);
      if (lookahead == 'b') ADVANCE(648);
      if (lookahead == 'e') ADVANCE(889);
      if (lookahead == 'f') ADVANCE(649);
      if (lookahead == 'n') ADVANCE(650);
      if (lookahead == 'r') ADVANCE(651);
      if (lookahead == 't') ADVANCE(652);
      if (lookahead == 'u') ADVANCE(653);
      if (lookahead == '{') ADVANCE(853);
      if (lookahead == '}') ADVANCE(855);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'd')) ADVANCE(872);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(562);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(521)
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(872);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(523);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(524);
      if (aux_sym_value_string_text_token1_character_set_1(lookahead)) ADVANCE(844);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(525);
      if (sym_filename_text_character_set_1(lookahead)) ADVANCE(848);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(anon_sym_GET);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(anon_sym_GET);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(815);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(anon_sym_HEAD);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(anon_sym_HEAD);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(815);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(anon_sym_POST);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(anon_sym_POST);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(815);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(anon_sym_PUT);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(anon_sym_PUT);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(815);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(anon_sym_DELETE);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(anon_sym_DELETE);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(815);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(anon_sym_CONNECT);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(anon_sym_CONNECT);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(815);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(anon_sym_OPTIONS);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(anon_sym_OPTIONS);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(815);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(anon_sym_TRACE);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(anon_sym_TRACE);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(815);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(anon_sym_PATCH);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(anon_sym_PATCH);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(815);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(anon_sym_LINK);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(anon_sym_LINK);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(815);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(anon_sym_UNLINK);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(anon_sym_UNLINK);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(815);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(anon_sym_PURGE);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(anon_sym_PURGE);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(815);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(anon_sym_LOCK);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(anon_sym_LOCK);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(815);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(anon_sym_UNLOCK);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(anon_sym_UNLOCK);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(815);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(anon_sym_PROPFIND);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(anon_sym_PROPFIND);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(815);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(anon_sym_VIEW);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(anon_sym_VIEW);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(815);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(anon_sym_HTTP_SLASH1_DOT0);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(anon_sym_HTTP_SLASH1_DOT1);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(anon_sym_HTTP_SLASH2);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(anon_sym_HTTP_SLASH_STAR);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(aux_sym_status_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(562);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(anon_sym_LBRACKBasicAuth_RBRACK);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(anon_sym_LBRACKBasicAuth_RBRACK);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(815);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(anon_sym_LBRACKQueryStringParams_RBRACK);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(anon_sym_LBRACKQueryStringParams_RBRACK);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(815);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(anon_sym_LBRACKFormParams_RBRACK);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(anon_sym_LBRACKFormParams_RBRACK);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(815);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(anon_sym_LBRACKMultipartFormData_RBRACK);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(anon_sym_LBRACKMultipartFormData_RBRACK);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(815);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(anon_sym_LBRACKCookies_RBRACK);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(anon_sym_LBRACKCookies_RBRACK);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(815);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(anon_sym_LBRACKCaptures_RBRACK);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(anon_sym_LBRACKCaptures_RBRACK);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(815);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(anon_sym_LBRACKAsserts_RBRACK);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(anon_sym_LBRACKAsserts_RBRACK);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(815);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(anon_sym_LBRACKOptions_RBRACK);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(anon_sym_LBRACKOptions_RBRACK);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(815);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(anon_sym_COLON2);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(anon_sym_file_COMMA);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(aux_sym_file_contenttype_token1);
      if (lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(584);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(anon_sym_cacert);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(anon_sym_location);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(anon_sym_insecure);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(anon_sym_max_DASHredirs);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(anon_sym_retry);
      if (lookahead == '-') ADVANCE(280);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(anon_sym_retry_DASHinterval);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(anon_sym_retry_DASHmax_DASHcount);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(anon_sym_variable);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(anon_sym_verbose);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(anon_sym_very_DASHverbose);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(611);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(anon_sym_status);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(anon_sym_url);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(anon_sym_header);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(anon_sym_cookie);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(anon_sym_body);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(anon_sym_xpath);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(anon_sym_jsonpath);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(anon_sym_regex);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(anon_sym_duration);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(anon_sym_sha256);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(anon_sym_md5);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(anon_sym_bytes);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(anon_sym_not);
      if (lookahead == 'E') ADVANCE(384);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(anon_sym_equals);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(anon_sym_notEquals);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(anon_sym_greaterThan);
      if (lookahead == 'O') ADVANCE(417);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(617);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(anon_sym_greaterThanOrEquals);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(anon_sym_lessThan);
      if (lookahead == 'O') ADVANCE(406);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(622);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(anon_sym_lessThanOrEquals);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(anon_sym_startsWith);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(anon_sym_endsWith);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(anon_sym_contains);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(anon_sym_matches);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(anon_sym_exists);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(anon_sym_includes);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(anon_sym_isInteger);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(anon_sym_isFloat);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(anon_sym_isBoolean);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(anon_sym_isString);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(anon_sym_isCollection);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(anon_sym_To_COMMABe_COMMADefined);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(anon_sym_base64_COMMA);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(aux_sym_oneline_base64_token1);
      if (lookahead == '\n') ADVANCE(636);
      if (('+' <= lookahead && lookahead <= '-') ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(aux_sym_oneline_base64_token1);
      if (lookahead == '\n' ||
          ('+' <= lookahead && lookahead <= '-') ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(anon_sym_hex_COMMA);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(aux_sym_quoted_string_text_token1);
      if (lookahead == '\n') ADVANCE(643);
      if (lookahead == '"' ||
          lookahead == '\\') ADVANCE(1);
      if (lookahead != 0) ADVANCE(640);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(aux_sym_quoted_string_text_token1);
      if (lookahead == '#') ADVANCE(640);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) ADVANCE(641);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(643);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(aux_sym_quoted_string_text_token1);
      if (lookahead == '{') ADVANCE(870);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(643);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(aux_sym_quoted_string_text_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(643);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(aux_sym_invalid_quoted_string_escaped_char_token1);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(aux_sym_invalid_quoted_string_escaped_char_token1);
      if (lookahead == '#') ADVANCE(647);
      if (lookahead == 'b') ADVANCE(648);
      if (lookahead == 'f') ADVANCE(649);
      if (lookahead == 'n') ADVANCE(650);
      if (lookahead == 'r') ADVANCE(651);
      if (lookahead == 't') ADVANCE(652);
      if (aux_sym_invalid_quoted_string_escaped_char_token1_character_set_1(lookahead)) ADVANCE(646);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\f' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\' &&
          lookahead != 'u') ADVANCE(645);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(aux_sym_invalid_quoted_string_escaped_char_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(anon_sym_b);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(anon_sym_f);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(anon_sym_n);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(anon_sym_r);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(anon_sym_t);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(anon_sym_u);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(sym_key_string_text);
      if (sym_key_string_text_character_set_3(lookahead)) ADVANCE(815);
      if (lookahead == 'A') ADVANCE(719);
      if (lookahead == 'O') ADVANCE(713);
      if (lookahead == 'R') ADVANCE(703);
      if (lookahead == 'U') ADVANCE(658);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(sym_key_string_text);
      if (sym_key_string_text_character_set_4(lookahead)) ADVANCE(815);
      if (lookahead == 'E') ADVANCE(662);
      if (lookahead == 'T') ADVANCE(717);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(sym_key_string_text);
      if (sym_key_string_text_character_set_5(lookahead)) ADVANCE(815);
      if (lookahead == 'I') ADVANCE(695);
      if (lookahead == 'O') ADVANCE(666);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(sym_key_string_text);
      if (sym_key_string_text_character_set_5(lookahead)) ADVANCE(815);
      if (lookahead == 'I') ADVANCE(699);
      if (lookahead == 'O') ADVANCE(667);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(sym_key_string_text);
      if (sym_key_string_text_character_set_6(lookahead)) ADVANCE(815);
      if (lookahead == 'R') ADVANCE(684);
      if (lookahead == 'T') ADVANCE(533);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'h') ||
          ('j' <= lookahead && lookahead <= 'z')) ADVANCE(815);
      if (lookahead == 'a') ADVANCE(743);
      if (lookahead == 'i') ADVANCE(741);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '3') ||
          ('5' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(815);
      if (lookahead == '4') ADVANCE(818);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '5') ||
          ('7' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(815);
      if (lookahead == '6') ADVANCE(660);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '@' ||
          ('B' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(815);
      if (lookahead == 'A') ADVANCE(670);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '@' ||
          ('B' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(815);
      if (lookahead == 'A') ADVANCE(668);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '@' ||
          ('B' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(815);
      if (lookahead == 'A') ADVANCE(790);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'B') ||
          ('D' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(815);
      if (lookahead == 'C') ADVANCE(685);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'B') ||
          ('D' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(815);
      if (lookahead == 'C') ADVANCE(690);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'B') ||
          ('D' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(815);
      if (lookahead == 'C') ADVANCE(692);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'B') ||
          ('D' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(815);
      if (lookahead == 'C') ADVANCE(678);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'B') ||
          ('D' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(815);
      if (lookahead == 'C') ADVANCE(716);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'C') ||
          ('E' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(815);
      if (lookahead == 'D') ADVANCE(529);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'C') ||
          ('E' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(815);
      if (lookahead == 'D') ADVANCE(555);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'C') ||
          ('E' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(815);
      if (lookahead == 'D') ADVANCE(802);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'D') ||
          ('F' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(815);
      if (lookahead == 'E') ADVANCE(693);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'D') ||
          ('F' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(815);
      if (lookahead == 'E') ADVANCE(714);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'D') ||
          ('F' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(815);
      if (lookahead == 'E') ADVANCE(662);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'D') ||
          ('F' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(815);
      if (lookahead == 'E') ADVANCE(721);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'D') ||
          ('F' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(815);
      if (lookahead == 'E') ADVANCE(549);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'D') ||
          ('F' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(815);
      if (lookahead == 'E') ADVANCE(541);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'D') ||
          ('F' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(815);
      if (lookahead == 'E') ADVANCE(535);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'D') ||
          ('F' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(815);
      if (lookahead == 'E') ADVANCE(669);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'D') ||
          ('F' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(815);
      if (lookahead == 'E') ADVANCE(720);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'E') ||
          ('G' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(815);
      if (lookahead == 'F') ADVANCE(687);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'E') ||
          ('G' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(815);
      if (lookahead == 'F') ADVANCE(755);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'F') ||
          ('H' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(815);
      if (lookahead == 'G') ADVANCE(677);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'G') ||
          ('I' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(815);
      if (lookahead == 'H') ADVANCE(543);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'H') ||
          ('J' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(815);
      if (lookahead == 'I') ADVANCE(676);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'H') ||
          ('J' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(815);
      if (lookahead == 'I') ADVANCE(698);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'H') ||
          ('J' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(815);
      if (lookahead == 'I') ADVANCE(704);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'J') ||
          ('L' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(815);
      if (lookahead == 'K') ADVANCE(545);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'J') ||
          ('L' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(815);
      if (lookahead == 'K') ADVANCE(551);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'J') ||
          ('L' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(815);
      if (lookahead == 'K') ADVANCE(547);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'J') ||
          ('L' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(815);
      if (lookahead == 'K') ADVANCE(553);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'K') ||
          ('M' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(815);
      if (lookahead == 'L') ADVANCE(681);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'K') ||
          ('M' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(815);
      if (lookahead == 'L') ADVANCE(657);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'M') ||
          ('O' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(815);
      if (lookahead == 'N') ADVANCE(689);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'M') ||
          ('O' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(815);
      if (lookahead == 'N') ADVANCE(694);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'M') ||
          ('O' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(815);
      if (lookahead == 'N') ADVANCE(711);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'M') ||
          ('O' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(815);
      if (lookahead == 'N') ADVANCE(671);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'M') ||
          ('O' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(815);
      if (lookahead == 'N') ADVANCE(691);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'M') ||
          ('O' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(815);
      if (lookahead == 'N') ADVANCE(701);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'M') ||
          ('O' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(815);
      if (lookahead == 'N') ADVANCE(680);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'N') ||
          ('P' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(815);
      if (lookahead == 'O') ADVANCE(700);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'N') ||
          ('P' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(815);
      if (lookahead == 'O') ADVANCE(706);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'N') ||
          ('P' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(815);
      if (lookahead == 'O') ADVANCE(697);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'O') ||
          ('Q' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(815);
      if (lookahead == 'P') ADVANCE(819);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'O') ||
          ('Q' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(815);
      if (lookahead == 'P') ADVANCE(682);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'O') ||
          ('Q' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(815);
      if (lookahead == 'P') ADVANCE(800);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'O') ||
          ('Q' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(815);
      if (lookahead == 'P') ADVANCE(718);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'O') ||
          ('Q' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(815);
      if (lookahead == 'P') ADVANCE(806);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Q') ||
          ('S' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(815);
      if (lookahead == 'R') ADVANCE(663);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'R') ||
          ('T' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(815);
      if (lookahead == 'S') ADVANCE(539);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'R') ||
          ('T' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(815);
      if (lookahead == 'S') ADVANCE(786);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'R') ||
          ('T' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(815);
      if (lookahead == 'S') ADVANCE(715);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'S') ||
          ('U' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(815);
      if (lookahead == 'T') ADVANCE(527);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'S') ||
          ('U' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(815);
      if (lookahead == 'T') ADVANCE(531);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'S') ||
          ('U' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(815);
      if (lookahead == 'T') ADVANCE(537);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'S') ||
          ('U' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(815);
      if (lookahead == 'T') ADVANCE(705);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'S') ||
          ('U' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(815);
      if (lookahead == 'T') ADVANCE(688);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'S') ||
          ('U' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(815);
      if (lookahead == 'T') ADVANCE(665);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'S') ||
          ('U' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(815);
      if (lookahead == 'T') ADVANCE(679);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'V') ||
          ('X' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(815);
      if (lookahead == 'W') ADVANCE(557);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          lookahead == 'a' ||
          lookahead == 'b' ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(815);
      if (lookahead == 'c') ADVANCE(664);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(815);
      if (lookahead == 'e') ADVANCE(794);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(815);
      if (lookahead == 'e') ADVANCE(661);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(815);
      if (lookahead == 'e') ADVANCE(881);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(815);
      if (lookahead == 'e') ADVANCE(883);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(815);
      if (lookahead == 'e') ADVANCE(817);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(815);
      if (lookahead == 'e') ADVANCE(760);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(815);
      if (lookahead == 'e') ADVANCE(770);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(815);
      if (lookahead == 'e') ADVANCE(766);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(815);
      if (lookahead == 'e') ADVANCE(777);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f') ||
          ('h' <= lookahead && lookahead <= 'z')) ADVANCE(815);
      if (lookahead == 'g') ADVANCE(709);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'g') ||
          ('i' <= lookahead && lookahead <= 'z')) ADVANCE(815);
      if (lookahead == 'h') ADVANCE(809);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'h') ||
          ('j' <= lookahead && lookahead <= 'z')) ADVANCE(815);
      if (lookahead == 'i') ADVANCE(722);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'h') ||
          ('j' <= lookahead && lookahead <= 'z')) ADVANCE(815);
      if (lookahead == 'i') ADVANCE(758);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'h') ||
          ('j' <= lookahead && lookahead <= 'z')) ADVANCE(815);
      if (lookahead == 'i') ADVANCE(749);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'h') ||
          ('j' <= lookahead && lookahead <= 'z')) ADVANCE(815);
      if (lookahead == 'i') ADVANCE(752);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'h') ||
          ('j' <= lookahead && lookahead <= 'z')) ADVANCE(815);
      if (lookahead == 'i') ADVANCE(729);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'j') ||
          ('l' <= lookahead && lookahead <= 'z')) ADVANCE(815);
      if (lookahead == 'k') ADVANCE(738);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'k') ||
          ('m' <= lookahead && lookahead <= 'z')) ADVANCE(815);
      if (lookahead == 'l') ADVANCE(885);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'k') ||
          ('m' <= lookahead && lookahead <= 'z')) ADVANCE(815);
      if (lookahead == 'l') ADVANCE(727);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'k') ||
          ('m' <= lookahead && lookahead <= 'z')) ADVANCE(815);
      if (lookahead == 'l') ADVANCE(740);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'k') ||
          ('m' <= lookahead && lookahead <= 'z')) ADVANCE(815);
      if (lookahead == 'l') ADVANCE(774);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'k') ||
          ('m' <= lookahead && lookahead <= 'z')) ADVANCE(815);
      if (lookahead == 'l') ADVANCE(783);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'l') ||
          ('n' <= lookahead && lookahead <= 'z')) ADVANCE(815);
      if (lookahead == 'm') ADVANCE(672);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'l') ||
          ('n' <= lookahead && lookahead <= 'z')) ADVANCE(815);
      if (lookahead == 'm') ADVANCE(707);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'l') ||
          ('n' <= lookahead && lookahead <= 'z')) ADVANCE(815);
      if (lookahead == 'm') ADVANCE(773);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'l') ||
          ('n' <= lookahead && lookahead <= 'z')) ADVANCE(815);
      if (lookahead == 'm') ADVANCE(775);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'z')) ADVANCE(815);
      if (lookahead == 'n') ADVANCE(732);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'z')) ADVANCE(815);
      if (lookahead == 'n') ADVANCE(771);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'n') ||
          ('p' <= lookahead && lookahead <= 'z')) ADVANCE(815);
      if (lookahead == 'o') ADVANCE(739);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'n') ||
          ('p' <= lookahead && lookahead <= 'z')) ADVANCE(815);
      if (lookahead == 'o') ADVANCE(750);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'n') ||
          ('p' <= lookahead && lookahead <= 'z')) ADVANCE(815);
      if (lookahead == 'o') ADVANCE(759);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'n') ||
          ('p' <= lookahead && lookahead <= 'z')) ADVANCE(815);
      if (lookahead == 'o') ADVANCE(751);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'n') ||
          ('p' <= lookahead && lookahead <= 'z')) ADVANCE(815);
      if (lookahead == 'o') ADVANCE(763);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'o') ||
          ('q' <= lookahead && lookahead <= 'z')) ADVANCE(815);
      if (lookahead == 'p') ADVANCE(782);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'o') ||
          ('q' <= lookahead && lookahead <= 'z')) ADVANCE(815);
      if (lookahead == 'p') ADVANCE(785);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'o') ||
          ('q' <= lookahead && lookahead <= 'z')) ADVANCE(815);
      if (lookahead == 'p') ADVANCE(801);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(815);
      if (lookahead == 'r') ADVANCE(746);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(815);
      if (lookahead == 'r') ADVANCE(795);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(815);
      if (lookahead == 'r') ADVANCE(799);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(815);
      if (lookahead == 'r') ADVANCE(792);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(815);
      if (lookahead == 'r') ADVANCE(745);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(815);
      if (lookahead == 'r') ADVANCE(781);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(815);
      if (lookahead == 'r') ADVANCE(736);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(815);
      if (lookahead == 'r') ADVANCE(787);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(815);
      if (lookahead == 'r') ADVANCE(731);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(815);
      if (lookahead == 'r') ADVANCE(805);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'r') ||
          ('t' <= lookahead && lookahead <= 'z')) ADVANCE(815);
      if (lookahead == 's') ADVANCE(734);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'r') ||
          ('t' <= lookahead && lookahead <= 'z')) ADVANCE(815);
      if (lookahead == 's') ADVANCE(807);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'r') ||
          ('t' <= lookahead && lookahead <= 'z')) ADVANCE(815);
      if (lookahead == 's') ADVANCE(808);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'r') ||
          ('t' <= lookahead && lookahead <= 'z')) ADVANCE(815);
      if (lookahead == 's') ADVANCE(724);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'r') ||
          ('t' <= lookahead && lookahead <= 'z')) ADVANCE(815);
      if (lookahead == 's') ADVANCE(810);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'r') ||
          ('t' <= lookahead && lookahead <= 'z')) ADVANCE(815);
      if (lookahead == 's') ADVANCE(726);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'r') ||
          ('t' <= lookahead && lookahead <= 'z')) ADVANCE(815);
      if (lookahead == 's') ADVANCE(812);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'r') ||
          ('t' <= lookahead && lookahead <= 'z')) ADVANCE(815);
      if (lookahead == 's') ADVANCE(813);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'r') ||
          ('t' <= lookahead && lookahead <= 'z')) ADVANCE(815);
      if (lookahead == 's') ADVANCE(814);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'r') ||
          ('t' <= lookahead && lookahead <= 'z')) ADVANCE(815);
      if (lookahead == 's') ADVANCE(730);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'r') ||
          ('t' <= lookahead && lookahead <= 'z')) ADVANCE(815);
      if (lookahead == 's') ADVANCE(778);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z')) ADVANCE(815);
      if (lookahead == 't') ADVANCE(733);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z')) ADVANCE(815);
      if (lookahead == 't') ADVANCE(683);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z')) ADVANCE(815);
      if (lookahead == 't') ADVANCE(737);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z')) ADVANCE(815);
      if (lookahead == 't') ADVANCE(735);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z')) ADVANCE(815);
      if (lookahead == 't') ADVANCE(803);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z')) ADVANCE(815);
      if (lookahead == 't') ADVANCE(793);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z')) ADVANCE(815);
      if (lookahead == 't') ADVANCE(765);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z')) ADVANCE(815);
      if (lookahead == 't') ADVANCE(776);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 't') ||
          ('v' <= lookahead && lookahead <= 'z')) ADVANCE(815);
      if (lookahead == 'u') ADVANCE(728);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 't') ||
          ('v' <= lookahead && lookahead <= 'z')) ADVANCE(815);
      if (lookahead == 'u') ADVANCE(742);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 't') ||
          ('v' <= lookahead && lookahead <= 'z')) ADVANCE(815);
      if (lookahead == 'u') ADVANCE(780);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 't') ||
          ('v' <= lookahead && lookahead <= 'z')) ADVANCE(815);
      if (lookahead == 'u') ADVANCE(744);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 't') ||
          ('v' <= lookahead && lookahead <= 'z')) ADVANCE(815);
      if (lookahead == 'u') ADVANCE(725);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 't') ||
          ('v' <= lookahead && lookahead <= 'z')) ADVANCE(815);
      if (lookahead == 'u') ADVANCE(767);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'w') ||
          lookahead == 'y' ||
          lookahead == 'z') ADVANCE(815);
      if (lookahead == 'x') ADVANCE(816);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'x') ||
          lookahead == 'z') ADVANCE(815);
      if (lookahead == 'y') ADVANCE(712);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(815);
      if (lookahead == 'a') ADVANCE(772);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(815);
      if (lookahead == 'a') ADVANCE(743);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(815);
      if (lookahead == 'a') ADVANCE(769);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(815);
      if (lookahead == 'a') ADVANCE(747);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(815);
      if (lookahead == 'a') ADVANCE(761);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(815);
      if (lookahead == 'a') ADVANCE(764);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(815);
      if (lookahead == 'a') ADVANCE(784);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(815);
      if (lookahead == 'a') ADVANCE(811);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(815);
      if (lookahead == 'a') ADVANCE(757);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(815);
      if (lookahead == 'a') ADVANCE(748);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(815);
      if (lookahead == 'a') ADVANCE(768);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(815);
      if (lookahead == ']') ADVANCE(573);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(815);
      if (lookahead == ']') ADVANCE(579);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(815);
      if (lookahead == ']') ADVANCE(565);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(815);
      if (lookahead == ']') ADVANCE(569);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(815);
      if (lookahead == ']') ADVANCE(571);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(815);
      if (lookahead == ']') ADVANCE(567);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(815);
      if (lookahead == ']') ADVANCE(577);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(815);
      if (lookahead == ']') ADVANCE(575);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(815);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(815);
      if (lookahead == ',') ADVANCE(638);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(815);
      if (lookahead == ',') ADVANCE(582);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(815);
      if (lookahead == ',') ADVANCE(635);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(815);
      if (lookahead == '/') ADVANCE(34);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(anon_sym_BSLASH2);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(aux_sym_key_string_escaped_char_token1);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(aux_sym_key_string_escaped_char_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(aux_sym_value_string_text_token1);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(aux_sym_value_string_text_token1);
      if (lookahead == 'a') ADVANCE(305);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(aux_sym_value_string_text_token1);
      if (lookahead == 'r') ADVANCE(493);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(aux_sym_value_string_text_token1);
      if (lookahead == 'u') ADVANCE(302);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(aux_sym_value_string_text_token1);
      if (lookahead == '{') ADVANCE(868);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      if (lookahead == '`') ADVANCE(142);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(aux_sym_oneline_string_text_token1);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(aux_sym_oneline_string_text_token1);
      if (lookahead == '`') ADVANCE(829);
      if (aux_sym_value_string_text_token1_character_set_1(lookahead)) ADVANCE(832);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(831);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(aux_sym_oneline_string_text_token1);
      if (lookahead == '{') ADVANCE(868);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(aux_sym_oneline_string_text_token2);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(aux_sym_oneline_string_text_token2);
      if (lookahead == '#') ADVANCE(836);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) ADVANCE(835);
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(834);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(aux_sym_oneline_string_text_token2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(anon_sym_BQUOTE_BQUOTE_BQUOTE);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(anon_sym_base64);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(anon_sym_hex);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(anon_sym_json);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(anon_sym_xml);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(anon_sym_graphql);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(aux_sym_multiline_string_text_token1);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(aux_sym_multiline_string_text_token1);
      if (lookahead == '\n') ADVANCE(524);
      if (lookahead == '#') ADVANCE(847);
      if (lookahead == '`') ADVANCE(845);
      if (aux_sym_value_string_text_token1_character_set_1(lookahead)) ADVANCE(844);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(843);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(aux_sym_multiline_string_text_token1);
      if (lookahead == '`') ADVANCE(142);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(aux_sym_multiline_string_text_token1);
      if (lookahead == '{') ADVANCE(868);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(aux_sym_multiline_string_text_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(sym_filename_text);
      if (lookahead == '\n') ADVANCE(525);
      if (sym_filename_text_character_set_1(lookahead)) ADVANCE(848);
      if (lookahead != 0 &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '\\') ADVANCE(851);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(sym_filename_text);
      if (lookahead == '{') ADVANCE(869);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '\\') ADVANCE(851);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(sym_filename_text);
      if (sym_filename_text_character_set_1(lookahead)) ADVANCE(850);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '\\') ADVANCE(851);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(sym_filename_text);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '\\') ADVANCE(851);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(aux_sym_filename_escaped_char_token1);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '{') ADVANCE(868);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == 'A') ADVANCE(431);
      if (lookahead == 'B') ADVANCE(152);
      if (lookahead == 'C') ADVANCE(172);
      if (lookahead == 'F') ADVANCE(346);
      if (lookahead == 'M') ADVANCE(486);
      if (lookahead == 'O') ADVANCE(375);
      if (lookahead == 'Q') ADVANCE(487);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == 'A') ADVANCE(431);
      if (lookahead == 'C') ADVANCE(171);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == 'B') ADVANCE(152);
      if (lookahead == 'C') ADVANCE(351);
      if (lookahead == 'F') ADVANCE(346);
      if (lookahead == 'M') ADVANCE(486);
      if (lookahead == 'O') ADVANCE(375);
      if (lookahead == 'Q') ADVANCE(487);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (sym_key_string_text_character_set_7(lookahead)) ADVANCE(815);
      if (lookahead == 'B') ADVANCE(798);
      if (lookahead == 'C') ADVANCE(754);
      if (lookahead == 'F') ADVANCE(753);
      if (lookahead == 'M') ADVANCE(791);
      if (lookahead == 'O') ADVANCE(756);
      if (lookahead == 'Q') ADVANCE(788);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (sym_key_string_text_character_set_8(lookahead)) ADVANCE(815);
      if (lookahead == 'A') ADVANCE(779);
      if (lookahead == 'C') ADVANCE(804);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(aux_sym_json_string_text_token1);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(aux_sym_json_string_text_token1);
      if (lookahead == '#') ADVANCE(867);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) ADVANCE(865);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(864);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(aux_sym_json_string_text_token1);
      if (lookahead == '{') ADVANCE(868);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(aux_sym_json_string_text_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '\\') ADVANCE(851);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(643);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(aux_sym_variable_name_token1);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(aux_sym_variable_name_token2);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(873);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(anon_sym_count);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(anon_sym_urlEncode);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(anon_sym_urlDecode);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(anon_sym_htmlEscape);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(anon_sym_htmlUnescape);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(anon_sym_toInt);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(815);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(815);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(anon_sym_null);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(anon_sym_null);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(815);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(aux_sym_digit_token1);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(aux_sym_hexdigit_token1);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(anon_sym_e);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(anon_sym_E);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 893:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 894:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 895:
      ACCEPT_TOKEN(aux_sym_regex_text_token1);
      if (lookahead == '\n') ADVANCE(893);
      if (lookahead == '/' ||
          lookahead == '\\') ADVANCE(1);
      if (lookahead != 0) ADVANCE(895);
      END_STATE();
    case 896:
      ACCEPT_TOKEN(aux_sym_regex_text_token1);
      if (lookahead == '#') ADVANCE(897);
      if (aux_sym_value_string_text_token1_character_set_1(lookahead)) ADVANCE(896);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '/' &&
          lookahead != '\\') ADVANCE(898);
      END_STATE();
    case 897:
      ACCEPT_TOKEN(aux_sym_regex_text_token1);
      if (lookahead == '/' ||
          lookahead == '\\') ADVANCE(1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(895);
      END_STATE();
    case 898:
      ACCEPT_TOKEN(aux_sym_regex_text_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '/' &&
          lookahead != '\\') ADVANCE(898);
      END_STATE();
    case 899:
      ACCEPT_TOKEN(aux_sym_regex_escaped_char_token1);
      END_STATE();
    case 900:
      ACCEPT_TOKEN(aux_sym_regex_escaped_char_token1);
      if (lookahead == '#') ADVANCE(901);
      if (aux_sym_value_string_text_token1_character_set_1(lookahead)) ADVANCE(900);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(899);
      END_STATE();
    case 901:
      ACCEPT_TOKEN(aux_sym_regex_escaped_char_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 515},
  [2] = {.lex_state = 519},
  [3] = {.lex_state = 519},
  [4] = {.lex_state = 519},
  [5] = {.lex_state = 519},
  [6] = {.lex_state = 515},
  [7] = {.lex_state = 515},
  [8] = {.lex_state = 515},
  [9] = {.lex_state = 520},
  [10] = {.lex_state = 515},
  [11] = {.lex_state = 515},
  [12] = {.lex_state = 520},
  [13] = {.lex_state = 515},
  [14] = {.lex_state = 515},
  [15] = {.lex_state = 515},
  [16] = {.lex_state = 515},
  [17] = {.lex_state = 515},
  [18] = {.lex_state = 515},
  [19] = {.lex_state = 16},
  [20] = {.lex_state = 16},
  [21] = {.lex_state = 515},
  [22] = {.lex_state = 515},
  [23] = {.lex_state = 519},
  [24] = {.lex_state = 519},
  [25] = {.lex_state = 519},
  [26] = {.lex_state = 519},
  [27] = {.lex_state = 515},
  [28] = {.lex_state = 515},
  [29] = {.lex_state = 515},
  [30] = {.lex_state = 515},
  [31] = {.lex_state = 515},
  [32] = {.lex_state = 515},
  [33] = {.lex_state = 515},
  [34] = {.lex_state = 515},
  [35] = {.lex_state = 515},
  [36] = {.lex_state = 515},
  [37] = {.lex_state = 515},
  [38] = {.lex_state = 515},
  [39] = {.lex_state = 519},
  [40] = {.lex_state = 519},
  [41] = {.lex_state = 519},
  [42] = {.lex_state = 519},
  [43] = {.lex_state = 519},
  [44] = {.lex_state = 519},
  [45] = {.lex_state = 519},
  [46] = {.lex_state = 519},
  [47] = {.lex_state = 519},
  [48] = {.lex_state = 515},
  [49] = {.lex_state = 515},
  [50] = {.lex_state = 519},
  [51] = {.lex_state = 515},
  [52] = {.lex_state = 519},
  [53] = {.lex_state = 519},
  [54] = {.lex_state = 520},
  [55] = {.lex_state = 520},
  [56] = {.lex_state = 520},
  [57] = {.lex_state = 519},
  [58] = {.lex_state = 520},
  [59] = {.lex_state = 515},
  [60] = {.lex_state = 515},
  [61] = {.lex_state = 16},
  [62] = {.lex_state = 16},
  [63] = {.lex_state = 515},
  [64] = {.lex_state = 520},
  [65] = {.lex_state = 520},
  [66] = {.lex_state = 520},
  [67] = {.lex_state = 520},
  [68] = {.lex_state = 520},
  [69] = {.lex_state = 515},
  [70] = {.lex_state = 16},
  [71] = {.lex_state = 16},
  [72] = {.lex_state = 16},
  [73] = {.lex_state = 16},
  [74] = {.lex_state = 16},
  [75] = {.lex_state = 16},
  [76] = {.lex_state = 16},
  [77] = {.lex_state = 16},
  [78] = {.lex_state = 16},
  [79] = {.lex_state = 16},
  [80] = {.lex_state = 16},
  [81] = {.lex_state = 16},
  [82] = {.lex_state = 16},
  [83] = {.lex_state = 16},
  [84] = {.lex_state = 16},
  [85] = {.lex_state = 16},
  [86] = {.lex_state = 16},
  [87] = {.lex_state = 16},
  [88] = {.lex_state = 16},
  [89] = {.lex_state = 16},
  [90] = {.lex_state = 16},
  [91] = {.lex_state = 16},
  [92] = {.lex_state = 16},
  [93] = {.lex_state = 16},
  [94] = {.lex_state = 16},
  [95] = {.lex_state = 16},
  [96] = {.lex_state = 21},
  [97] = {.lex_state = 515},
  [98] = {.lex_state = 515},
  [99] = {.lex_state = 16},
  [100] = {.lex_state = 16},
  [101] = {.lex_state = 16},
  [102] = {.lex_state = 515},
  [103] = {.lex_state = 515},
  [104] = {.lex_state = 20},
  [105] = {.lex_state = 515},
  [106] = {.lex_state = 515},
  [107] = {.lex_state = 2},
  [108] = {.lex_state = 515},
  [109] = {.lex_state = 515},
  [110] = {.lex_state = 515},
  [111] = {.lex_state = 16},
  [112] = {.lex_state = 16},
  [113] = {.lex_state = 4},
  [114] = {.lex_state = 16},
  [115] = {.lex_state = 4},
  [116] = {.lex_state = 16},
  [117] = {.lex_state = 515},
  [118] = {.lex_state = 515},
  [119] = {.lex_state = 515},
  [120] = {.lex_state = 515},
  [121] = {.lex_state = 515},
  [122] = {.lex_state = 4},
  [123] = {.lex_state = 16},
  [124] = {.lex_state = 16},
  [125] = {.lex_state = 7},
  [126] = {.lex_state = 3},
  [127] = {.lex_state = 7},
  [128] = {.lex_state = 7},
  [129] = {.lex_state = 7},
  [130] = {.lex_state = 8},
  [131] = {.lex_state = 8},
  [132] = {.lex_state = 8},
  [133] = {.lex_state = 8},
  [134] = {.lex_state = 8},
  [135] = {.lex_state = 9},
  [136] = {.lex_state = 25},
  [137] = {.lex_state = 22},
  [138] = {.lex_state = 22},
  [139] = {.lex_state = 3},
  [140] = {.lex_state = 3},
  [141] = {.lex_state = 22},
  [142] = {.lex_state = 22},
  [143] = {.lex_state = 22},
  [144] = {.lex_state = 25},
  [145] = {.lex_state = 11},
  [146] = {.lex_state = 25},
  [147] = {.lex_state = 8},
  [148] = {.lex_state = 8},
  [149] = {.lex_state = 11},
  [150] = {.lex_state = 25},
  [151] = {.lex_state = 11},
  [152] = {.lex_state = 28},
  [153] = {.lex_state = 25},
  [154] = {.lex_state = 28},
  [155] = {.lex_state = 23},
  [156] = {.lex_state = 4},
  [157] = {.lex_state = 24},
  [158] = {.lex_state = 21},
  [159] = {.lex_state = 7},
  [160] = {.lex_state = 23},
  [161] = {.lex_state = 32},
  [162] = {.lex_state = 28},
  [163] = {.lex_state = 23},
  [164] = {.lex_state = 9},
  [165] = {.lex_state = 7},
  [166] = {.lex_state = 26},
  [167] = {.lex_state = 23},
  [168] = {.lex_state = 21},
  [169] = {.lex_state = 23},
  [170] = {.lex_state = 9},
  [171] = {.lex_state = 32},
  [172] = {.lex_state = 28},
  [173] = {.lex_state = 4},
  [174] = {.lex_state = 19},
  [175] = {.lex_state = 3},
  [176] = {.lex_state = 4},
  [177] = {.lex_state = 4},
  [178] = {.lex_state = 22},
  [179] = {.lex_state = 4},
  [180] = {.lex_state = 19},
  [181] = {.lex_state = 4},
  [182] = {.lex_state = 4},
  [183] = {.lex_state = 4},
  [184] = {.lex_state = 4},
  [185] = {.lex_state = 4},
  [186] = {.lex_state = 4},
  [187] = {.lex_state = 4},
  [188] = {.lex_state = 4},
  [189] = {.lex_state = 4},
  [190] = {.lex_state = 4},
  [191] = {.lex_state = 22},
  [192] = {.lex_state = 4},
  [193] = {.lex_state = 19},
  [194] = {.lex_state = 4},
  [195] = {.lex_state = 4},
  [196] = {.lex_state = 3},
  [197] = {.lex_state = 4},
  [198] = {.lex_state = 21},
  [199] = {.lex_state = 4},
  [200] = {.lex_state = 21},
  [201] = {.lex_state = 4},
  [202] = {.lex_state = 4},
  [203] = {.lex_state = 4},
  [204] = {.lex_state = 4},
  [205] = {.lex_state = 4},
  [206] = {.lex_state = 4},
  [207] = {.lex_state = 4},
  [208] = {.lex_state = 21},
  [209] = {.lex_state = 515},
  [210] = {.lex_state = 16},
  [211] = {.lex_state = 11},
  [212] = {.lex_state = 21},
  [213] = {.lex_state = 13},
  [214] = {.lex_state = 11},
  [215] = {.lex_state = 16},
  [216] = {.lex_state = 13},
  [217] = {.lex_state = 515},
  [218] = {.lex_state = 25},
  [219] = {.lex_state = 21},
  [220] = {.lex_state = 16},
  [221] = {.lex_state = 16},
  [222] = {.lex_state = 25},
  [223] = {.lex_state = 21},
  [224] = {.lex_state = 7},
  [225] = {.lex_state = 16},
  [226] = {.lex_state = 16},
  [227] = {.lex_state = 21},
  [228] = {.lex_state = 21},
  [229] = {.lex_state = 9},
  [230] = {.lex_state = 13},
  [231] = {.lex_state = 13},
  [232] = {.lex_state = 32},
  [233] = {.lex_state = 7},
  [234] = {.lex_state = 28},
  [235] = {.lex_state = 32},
  [236] = {.lex_state = 28},
  [237] = {.lex_state = 8},
  [238] = {.lex_state = 8},
  [239] = {.lex_state = 19},
  [240] = {.lex_state = 515},
  [241] = {.lex_state = 9},
  [242] = {.lex_state = 515},
  [243] = {.lex_state = 8},
  [244] = {.lex_state = 25},
  [245] = {.lex_state = 515},
  [246] = {.lex_state = 16},
  [247] = {.lex_state = 3},
  [248] = {.lex_state = 515},
  [249] = {.lex_state = 515},
  [250] = {.lex_state = 25},
  [251] = {.lex_state = 8},
  [252] = {.lex_state = 7},
  [253] = {.lex_state = 8},
  [254] = {.lex_state = 30},
  [255] = {.lex_state = 16},
  [256] = {.lex_state = 7},
  [257] = {.lex_state = 8},
  [258] = {.lex_state = 515},
  [259] = {.lex_state = 8},
  [260] = {.lex_state = 3},
  [261] = {.lex_state = 7},
  [262] = {.lex_state = 8},
  [263] = {.lex_state = 7},
  [264] = {.lex_state = 8},
  [265] = {.lex_state = 8},
  [266] = {.lex_state = 30},
  [267] = {.lex_state = 9},
  [268] = {.lex_state = 3},
  [269] = {.lex_state = 23},
  [270] = {.lex_state = 3},
  [271] = {.lex_state = 11},
  [272] = {.lex_state = 23},
  [273] = {.lex_state = 21},
  [274] = {.lex_state = 32},
  [275] = {.lex_state = 11},
  [276] = {.lex_state = 515},
  [277] = {.lex_state = 23},
  [278] = {.lex_state = 22},
  [279] = {.lex_state = 23},
  [280] = {.lex_state = 16},
  [281] = {.lex_state = 30},
  [282] = {.lex_state = 11},
  [283] = {.lex_state = 23},
  [284] = {.lex_state = 11},
  [285] = {.lex_state = 515},
  [286] = {.lex_state = 515},
  [287] = {.lex_state = 22},
  [288] = {.lex_state = 22},
  [289] = {.lex_state = 515},
  [290] = {.lex_state = 515},
  [291] = {.lex_state = 28},
  [292] = {.lex_state = 16},
  [293] = {.lex_state = 515},
  [294] = {.lex_state = 22},
  [295] = {.lex_state = 9},
  [296] = {.lex_state = 32},
  [297] = {.lex_state = 16},
  [298] = {.lex_state = 30},
  [299] = {.lex_state = 21},
  [300] = {.lex_state = 16},
  [301] = {.lex_state = 11},
  [302] = {.lex_state = 16},
  [303] = {.lex_state = 16},
  [304] = {.lex_state = 16},
  [305] = {.lex_state = 515},
  [306] = {.lex_state = 30},
  [307] = {.lex_state = 515},
  [308] = {.lex_state = 3},
  [309] = {.lex_state = 515},
  [310] = {.lex_state = 22},
  [311] = {.lex_state = 3},
  [312] = {.lex_state = 7},
  [313] = {.lex_state = 515},
  [314] = {.lex_state = 515},
  [315] = {.lex_state = 515},
  [316] = {.lex_state = 515},
  [317] = {.lex_state = 515},
  [318] = {.lex_state = 515},
  [319] = {.lex_state = 3},
  [320] = {.lex_state = 23},
  [321] = {.lex_state = 16},
  [322] = {.lex_state = 28},
  [323] = {.lex_state = 515},
  [324] = {.lex_state = 16},
  [325] = {.lex_state = 22},
  [326] = {.lex_state = 515},
  [327] = {.lex_state = 30},
  [328] = {.lex_state = 30},
  [329] = {.lex_state = 515},
  [330] = {.lex_state = 515},
  [331] = {.lex_state = 515},
  [332] = {.lex_state = 515},
  [333] = {.lex_state = 515},
  [334] = {.lex_state = 515},
  [335] = {.lex_state = 515},
  [336] = {.lex_state = 515},
  [337] = {.lex_state = 31},
  [338] = {.lex_state = 515},
  [339] = {.lex_state = 515},
  [340] = {.lex_state = 21},
  [341] = {.lex_state = 16},
  [342] = {.lex_state = 21},
  [343] = {.lex_state = 31},
  [344] = {.lex_state = 31},
  [345] = {.lex_state = 31},
  [346] = {.lex_state = 31},
  [347] = {.lex_state = 31},
  [348] = {.lex_state = 31},
  [349] = {.lex_state = 30},
  [350] = {.lex_state = 515},
  [351] = {.lex_state = 31},
  [352] = {.lex_state = 30},
  [353] = {.lex_state = 13},
  [354] = {.lex_state = 21},
  [355] = {.lex_state = 515},
  [356] = {.lex_state = 6},
  [357] = {.lex_state = 31},
  [358] = {.lex_state = 30},
  [359] = {.lex_state = 21},
  [360] = {.lex_state = 515},
  [361] = {.lex_state = 515},
  [362] = {.lex_state = 515},
  [363] = {.lex_state = 515},
  [364] = {.lex_state = 16},
  [365] = {.lex_state = 21},
  [366] = {.lex_state = 16},
  [367] = {.lex_state = 31},
  [368] = {.lex_state = 16},
  [369] = {.lex_state = 26},
  [370] = {.lex_state = 16},
  [371] = {.lex_state = 31},
  [372] = {.lex_state = 21},
  [373] = {.lex_state = 21},
  [374] = {.lex_state = 21},
  [375] = {.lex_state = 21},
  [376] = {.lex_state = 515},
  [377] = {.lex_state = 21},
  [378] = {.lex_state = 515},
  [379] = {.lex_state = 515},
  [380] = {.lex_state = 515},
  [381] = {.lex_state = 515},
  [382] = {.lex_state = 16},
  [383] = {.lex_state = 515},
  [384] = {.lex_state = 21},
  [385] = {.lex_state = 515},
  [386] = {.lex_state = 16},
  [387] = {.lex_state = 16},
  [388] = {.lex_state = 21},
  [389] = {.lex_state = 21},
  [390] = {.lex_state = 515},
  [391] = {.lex_state = 30},
  [392] = {.lex_state = 515},
  [393] = {.lex_state = 20},
  [394] = {.lex_state = 515},
  [395] = {.lex_state = 6},
  [396] = {.lex_state = 515},
  [397] = {.lex_state = 515},
  [398] = {.lex_state = 515},
  [399] = {.lex_state = 515},
  [400] = {.lex_state = 515},
  [401] = {.lex_state = 16},
  [402] = {.lex_state = 515},
  [403] = {.lex_state = 515},
  [404] = {.lex_state = 16},
  [405] = {.lex_state = 515},
  [406] = {.lex_state = 31},
  [407] = {.lex_state = 16},
  [408] = {.lex_state = 21},
  [409] = {.lex_state = 21},
  [410] = {.lex_state = 16},
  [411] = {.lex_state = 21},
  [412] = {.lex_state = 16},
  [413] = {.lex_state = 16},
  [414] = {.lex_state = 21},
  [415] = {.lex_state = 21},
  [416] = {.lex_state = 515},
  [417] = {.lex_state = 13},
  [418] = {.lex_state = 30},
  [419] = {.lex_state = 20},
  [420] = {.lex_state = 26},
  [421] = {.lex_state = 30},
  [422] = {.lex_state = 21},
  [423] = {.lex_state = 0},
  [424] = {.lex_state = 16},
  [425] = {.lex_state = 16},
  [426] = {.lex_state = 16},
  [427] = {.lex_state = 16},
  [428] = {.lex_state = 21},
  [429] = {.lex_state = 16},
  [430] = {.lex_state = 16},
  [431] = {.lex_state = 30},
  [432] = {.lex_state = 16},
  [433] = {.lex_state = 0},
  [434] = {.lex_state = 16},
  [435] = {.lex_state = 0},
  [436] = {.lex_state = 30},
  [437] = {.lex_state = 16},
  [438] = {.lex_state = 16},
  [439] = {.lex_state = 0},
  [440] = {.lex_state = 0},
  [441] = {.lex_state = 16},
  [442] = {.lex_state = 16},
  [443] = {.lex_state = 16},
  [444] = {.lex_state = 30},
  [445] = {.lex_state = 515},
  [446] = {.lex_state = 16},
  [447] = {.lex_state = 16},
  [448] = {.lex_state = 16},
  [449] = {.lex_state = 16},
  [450] = {.lex_state = 16},
  [451] = {.lex_state = 16},
  [452] = {.lex_state = 16},
  [453] = {.lex_state = 16},
  [454] = {.lex_state = 16},
  [455] = {.lex_state = 21},
  [456] = {.lex_state = 16},
  [457] = {.lex_state = 515},
  [458] = {.lex_state = 515},
  [459] = {.lex_state = 515},
  [460] = {.lex_state = 0},
  [461] = {.lex_state = 515},
  [462] = {.lex_state = 515},
  [463] = {.lex_state = 515},
  [464] = {.lex_state = 515},
  [465] = {.lex_state = 16},
  [466] = {.lex_state = 16},
  [467] = {.lex_state = 515},
  [468] = {.lex_state = 515},
  [469] = {.lex_state = 515},
  [470] = {.lex_state = 515},
  [471] = {.lex_state = 33},
  [472] = {.lex_state = 515},
  [473] = {.lex_state = 515},
  [474] = {.lex_state = 515},
  [475] = {.lex_state = 515},
  [476] = {.lex_state = 0},
  [477] = {.lex_state = 0},
  [478] = {.lex_state = 0},
  [479] = {.lex_state = 515},
  [480] = {.lex_state = 515},
  [481] = {.lex_state = 515},
  [482] = {.lex_state = 515},
  [483] = {.lex_state = 0},
  [484] = {.lex_state = 515},
  [485] = {.lex_state = 14},
  [486] = {.lex_state = 0},
  [487] = {.lex_state = 515},
  [488] = {.lex_state = 515},
  [489] = {.lex_state = 515},
  [490] = {.lex_state = 25},
  [491] = {.lex_state = 15},
  [492] = {.lex_state = 16},
  [493] = {.lex_state = 515},
  [494] = {.lex_state = 515},
  [495] = {.lex_state = 16},
  [496] = {.lex_state = 515},
  [497] = {.lex_state = 25},
  [498] = {.lex_state = 515},
  [499] = {.lex_state = 515},
  [500] = {.lex_state = 515},
  [501] = {.lex_state = 515},
  [502] = {.lex_state = 515},
  [503] = {.lex_state = 515},
  [504] = {.lex_state = 515},
  [505] = {.lex_state = 515},
  [506] = {.lex_state = 16},
  [507] = {.lex_state = 873},
  [508] = {.lex_state = 515},
  [509] = {.lex_state = 515},
  [510] = {.lex_state = 515},
  [511] = {.lex_state = 515},
  [512] = {.lex_state = 0},
  [513] = {.lex_state = 515},
  [514] = {.lex_state = 515},
  [515] = {.lex_state = 515},
  [516] = {.lex_state = 515},
  [517] = {.lex_state = 515},
  [518] = {.lex_state = 515},
  [519] = {.lex_state = 16},
  [520] = {.lex_state = 25},
  [521] = {.lex_state = 515},
  [522] = {.lex_state = 16},
  [523] = {.lex_state = 515},
  [524] = {.lex_state = 16},
  [525] = {.lex_state = 16},
  [526] = {.lex_state = 16},
  [527] = {.lex_state = 16},
  [528] = {.lex_state = 16},
  [529] = {.lex_state = 16},
  [530] = {.lex_state = 16},
  [531] = {.lex_state = 515},
  [532] = {.lex_state = 515},
  [533] = {.lex_state = 16},
  [534] = {.lex_state = 515},
  [535] = {.lex_state = 0},
  [536] = {.lex_state = 515},
  [537] = {.lex_state = 515},
  [538] = {.lex_state = 515},
  [539] = {.lex_state = 515},
  [540] = {.lex_state = 515},
  [541] = {.lex_state = 515},
  [542] = {.lex_state = 515},
  [543] = {.lex_state = 515},
  [544] = {.lex_state = 515},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_status_token1] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_LBRACKBasicAuth_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACKQueryStringParams_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACKFormParams_RBRACK] = ACTIONS(1),
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
    [aux_sym_filename_escaped_char_token1] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(1),
    [aux_sym_variable_name_token1] = ACTIONS(1),
    [aux_sym__alphanum_token1] = ACTIONS(1),
    [aux_sym_digit_token1] = ACTIONS(1),
    [aux_sym_hexdigit_token1] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_e] = ACTIONS(1),
    [anon_sym_E] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [anon_sym_SLASH] = ACTIONS(1),
  },
  [1] = {
    [sym_hurl_file] = STATE(460),
    [sym_entry] = STATE(98),
    [sym__comment_or_new_line] = STATE(245),
    [sym_request] = STATE(97),
    [sym_method] = STATE(126),
    [aux_sym_hurl_file_repeat1] = STATE(98),
    [aux_sym_hurl_file_repeat2] = STATE(245),
    [aux_sym__comment_or_new_line_repeat1] = STATE(10),
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
    [sym_comment] = ACTIONS(11),
  },
  [2] = {
    [sym__comment_or_new_line] = STATE(50),
    [sym_header] = STATE(4),
    [sym_body] = STATE(109),
    [sym_request_section] = STATE(7),
    [sym_basic_auth_section] = STATE(60),
    [sym_query_string_params_section] = STATE(60),
    [sym_form_params_section] = STATE(60),
    [sym_multipart_form_data_section] = STATE(60),
    [sym_cookies_section] = STATE(60),
    [sym_options_section] = STATE(60),
    [sym_key_value] = STATE(331),
    [sym_bytes] = STATE(416),
    [sym_xml] = STATE(484),
    [sym_oneline_base64] = STATE(484),
    [sym_oneline_file] = STATE(484),
    [sym_oneline_hex] = STATE(484),
    [sym_key_string] = STATE(483),
    [sym_key_string_content] = STATE(150),
    [sym_key_string_escaped_char] = STATE(218),
    [sym_oneline_string] = STATE(484),
    [sym_multiline_string] = STATE(484),
    [sym_json_value] = STATE(484),
    [sym_json_object] = STATE(482),
    [sym_json_array] = STATE(482),
    [sym_json_string] = STATE(482),
    [sym_json_number] = STATE(482),
    [sym_template] = STATE(256),
    [sym_boolean] = STATE(482),
    [sym_null] = STATE(482),
    [sym_integer] = STATE(240),
    [sym_digit] = STATE(217),
    [aux_sym_hurl_file_repeat2] = STATE(50),
    [aux_sym__comment_or_new_line_repeat1] = STATE(52),
    [aux_sym_request_repeat1] = STATE(4),
    [aux_sym_request_repeat2] = STATE(7),
    [aux_sym_key_string_repeat1] = STATE(150),
    [aux_sym_key_string_content_repeat1] = STATE(218),
    [aux_sym_integer_repeat1] = STATE(217),
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
    [anon_sym_HTTP_SLASH1_DOT0] = ACTIONS(17),
    [anon_sym_HTTP_SLASH1_DOT1] = ACTIONS(17),
    [anon_sym_HTTP_SLASH2] = ACTIONS(17),
    [anon_sym_HTTP_SLASH_STAR] = ACTIONS(17),
    [anon_sym_LBRACKBasicAuth_RBRACK] = ACTIONS(19),
    [anon_sym_LBRACKQueryStringParams_RBRACK] = ACTIONS(21),
    [anon_sym_LBRACKFormParams_RBRACK] = ACTIONS(23),
    [anon_sym_LBRACKMultipartFormData_RBRACK] = ACTIONS(25),
    [anon_sym_LBRACKCookies_RBRACK] = ACTIONS(27),
    [anon_sym_LBRACKOptions_RBRACK] = ACTIONS(29),
    [anon_sym_file_COMMA] = ACTIONS(31),
    [anon_sym_LT] = ACTIONS(33),
    [anon_sym_base64_COMMA] = ACTIONS(35),
    [anon_sym_hex_COMMA] = ACTIONS(37),
    [anon_sym_DQUOTE] = ACTIONS(39),
    [sym_key_string_text] = ACTIONS(41),
    [anon_sym_BSLASH2] = ACTIONS(43),
    [anon_sym_BQUOTE] = ACTIONS(45),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(47),
    [anon_sym_LBRACE] = ACTIONS(49),
    [anon_sym_LBRACK] = ACTIONS(51),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(53),
    [anon_sym_true] = ACTIONS(55),
    [anon_sym_false] = ACTIONS(55),
    [anon_sym_null] = ACTIONS(57),
    [aux_sym_digit_token1] = ACTIONS(59),
    [sym_comment] = ACTIONS(61),
  },
  [3] = {
    [sym__comment_or_new_line] = STATE(50),
    [sym_header] = STATE(5),
    [sym_body] = STATE(102),
    [sym_request_section] = STATE(6),
    [sym_basic_auth_section] = STATE(60),
    [sym_query_string_params_section] = STATE(60),
    [sym_form_params_section] = STATE(60),
    [sym_multipart_form_data_section] = STATE(60),
    [sym_cookies_section] = STATE(60),
    [sym_options_section] = STATE(60),
    [sym_key_value] = STATE(331),
    [sym_bytes] = STATE(416),
    [sym_xml] = STATE(484),
    [sym_oneline_base64] = STATE(484),
    [sym_oneline_file] = STATE(484),
    [sym_oneline_hex] = STATE(484),
    [sym_key_string] = STATE(483),
    [sym_key_string_content] = STATE(150),
    [sym_key_string_escaped_char] = STATE(218),
    [sym_oneline_string] = STATE(484),
    [sym_multiline_string] = STATE(484),
    [sym_json_value] = STATE(484),
    [sym_json_object] = STATE(482),
    [sym_json_array] = STATE(482),
    [sym_json_string] = STATE(482),
    [sym_json_number] = STATE(482),
    [sym_template] = STATE(256),
    [sym_boolean] = STATE(482),
    [sym_null] = STATE(482),
    [sym_integer] = STATE(240),
    [sym_digit] = STATE(217),
    [aux_sym_hurl_file_repeat2] = STATE(50),
    [aux_sym__comment_or_new_line_repeat1] = STATE(52),
    [aux_sym_request_repeat1] = STATE(5),
    [aux_sym_request_repeat2] = STATE(6),
    [aux_sym_key_string_repeat1] = STATE(150),
    [aux_sym_key_string_content_repeat1] = STATE(218),
    [aux_sym_integer_repeat1] = STATE(217),
    [ts_builtin_sym_end] = ACTIONS(63),
    [anon_sym_LF] = ACTIONS(15),
    [anon_sym_GET] = ACTIONS(65),
    [anon_sym_HEAD] = ACTIONS(65),
    [anon_sym_POST] = ACTIONS(65),
    [anon_sym_PUT] = ACTIONS(65),
    [anon_sym_DELETE] = ACTIONS(65),
    [anon_sym_CONNECT] = ACTIONS(65),
    [anon_sym_OPTIONS] = ACTIONS(65),
    [anon_sym_TRACE] = ACTIONS(65),
    [anon_sym_PATCH] = ACTIONS(65),
    [anon_sym_LINK] = ACTIONS(65),
    [anon_sym_UNLINK] = ACTIONS(65),
    [anon_sym_PURGE] = ACTIONS(65),
    [anon_sym_LOCK] = ACTIONS(65),
    [anon_sym_UNLOCK] = ACTIONS(65),
    [anon_sym_PROPFIND] = ACTIONS(65),
    [anon_sym_VIEW] = ACTIONS(65),
    [anon_sym_HTTP_SLASH1_DOT0] = ACTIONS(65),
    [anon_sym_HTTP_SLASH1_DOT1] = ACTIONS(65),
    [anon_sym_HTTP_SLASH2] = ACTIONS(65),
    [anon_sym_HTTP_SLASH_STAR] = ACTIONS(65),
    [anon_sym_LBRACKBasicAuth_RBRACK] = ACTIONS(19),
    [anon_sym_LBRACKQueryStringParams_RBRACK] = ACTIONS(21),
    [anon_sym_LBRACKFormParams_RBRACK] = ACTIONS(23),
    [anon_sym_LBRACKMultipartFormData_RBRACK] = ACTIONS(25),
    [anon_sym_LBRACKCookies_RBRACK] = ACTIONS(27),
    [anon_sym_LBRACKOptions_RBRACK] = ACTIONS(29),
    [anon_sym_file_COMMA] = ACTIONS(31),
    [anon_sym_LT] = ACTIONS(33),
    [anon_sym_base64_COMMA] = ACTIONS(35),
    [anon_sym_hex_COMMA] = ACTIONS(37),
    [anon_sym_DQUOTE] = ACTIONS(39),
    [sym_key_string_text] = ACTIONS(41),
    [anon_sym_BSLASH2] = ACTIONS(43),
    [anon_sym_BQUOTE] = ACTIONS(45),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(47),
    [anon_sym_LBRACE] = ACTIONS(49),
    [anon_sym_LBRACK] = ACTIONS(51),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(53),
    [anon_sym_true] = ACTIONS(55),
    [anon_sym_false] = ACTIONS(55),
    [anon_sym_null] = ACTIONS(57),
    [aux_sym_digit_token1] = ACTIONS(59),
    [sym_comment] = ACTIONS(61),
  },
  [4] = {
    [sym_header] = STATE(23),
    [sym_body] = STATE(102),
    [sym_request_section] = STATE(6),
    [sym_basic_auth_section] = STATE(60),
    [sym_query_string_params_section] = STATE(60),
    [sym_form_params_section] = STATE(60),
    [sym_multipart_form_data_section] = STATE(60),
    [sym_cookies_section] = STATE(60),
    [sym_options_section] = STATE(60),
    [sym_key_value] = STATE(331),
    [sym_bytes] = STATE(416),
    [sym_xml] = STATE(484),
    [sym_oneline_base64] = STATE(484),
    [sym_oneline_file] = STATE(484),
    [sym_oneline_hex] = STATE(484),
    [sym_key_string] = STATE(483),
    [sym_key_string_content] = STATE(150),
    [sym_key_string_escaped_char] = STATE(218),
    [sym_oneline_string] = STATE(484),
    [sym_multiline_string] = STATE(484),
    [sym_json_value] = STATE(484),
    [sym_json_object] = STATE(482),
    [sym_json_array] = STATE(482),
    [sym_json_string] = STATE(482),
    [sym_json_number] = STATE(482),
    [sym_template] = STATE(256),
    [sym_boolean] = STATE(482),
    [sym_null] = STATE(482),
    [sym_integer] = STATE(240),
    [sym_digit] = STATE(217),
    [aux_sym_request_repeat1] = STATE(23),
    [aux_sym_request_repeat2] = STATE(6),
    [aux_sym_key_string_repeat1] = STATE(150),
    [aux_sym_key_string_content_repeat1] = STATE(218),
    [aux_sym_integer_repeat1] = STATE(217),
    [ts_builtin_sym_end] = ACTIONS(63),
    [anon_sym_LF] = ACTIONS(63),
    [anon_sym_GET] = ACTIONS(65),
    [anon_sym_HEAD] = ACTIONS(65),
    [anon_sym_POST] = ACTIONS(65),
    [anon_sym_PUT] = ACTIONS(65),
    [anon_sym_DELETE] = ACTIONS(65),
    [anon_sym_CONNECT] = ACTIONS(65),
    [anon_sym_OPTIONS] = ACTIONS(65),
    [anon_sym_TRACE] = ACTIONS(65),
    [anon_sym_PATCH] = ACTIONS(65),
    [anon_sym_LINK] = ACTIONS(65),
    [anon_sym_UNLINK] = ACTIONS(65),
    [anon_sym_PURGE] = ACTIONS(65),
    [anon_sym_LOCK] = ACTIONS(65),
    [anon_sym_UNLOCK] = ACTIONS(65),
    [anon_sym_PROPFIND] = ACTIONS(65),
    [anon_sym_VIEW] = ACTIONS(65),
    [anon_sym_HTTP_SLASH1_DOT0] = ACTIONS(65),
    [anon_sym_HTTP_SLASH1_DOT1] = ACTIONS(65),
    [anon_sym_HTTP_SLASH2] = ACTIONS(65),
    [anon_sym_HTTP_SLASH_STAR] = ACTIONS(65),
    [anon_sym_LBRACKBasicAuth_RBRACK] = ACTIONS(19),
    [anon_sym_LBRACKQueryStringParams_RBRACK] = ACTIONS(21),
    [anon_sym_LBRACKFormParams_RBRACK] = ACTIONS(23),
    [anon_sym_LBRACKMultipartFormData_RBRACK] = ACTIONS(25),
    [anon_sym_LBRACKCookies_RBRACK] = ACTIONS(27),
    [anon_sym_LBRACKOptions_RBRACK] = ACTIONS(29),
    [anon_sym_file_COMMA] = ACTIONS(31),
    [anon_sym_LT] = ACTIONS(33),
    [anon_sym_base64_COMMA] = ACTIONS(35),
    [anon_sym_hex_COMMA] = ACTIONS(37),
    [anon_sym_DQUOTE] = ACTIONS(39),
    [sym_key_string_text] = ACTIONS(41),
    [anon_sym_BSLASH2] = ACTIONS(43),
    [anon_sym_BQUOTE] = ACTIONS(45),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(47),
    [anon_sym_LBRACE] = ACTIONS(49),
    [anon_sym_LBRACK] = ACTIONS(51),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(53),
    [anon_sym_true] = ACTIONS(55),
    [anon_sym_false] = ACTIONS(55),
    [anon_sym_null] = ACTIONS(57),
    [aux_sym_digit_token1] = ACTIONS(59),
    [sym_comment] = ACTIONS(65),
  },
  [5] = {
    [sym_header] = STATE(23),
    [sym_body] = STATE(106),
    [sym_request_section] = STATE(8),
    [sym_basic_auth_section] = STATE(60),
    [sym_query_string_params_section] = STATE(60),
    [sym_form_params_section] = STATE(60),
    [sym_multipart_form_data_section] = STATE(60),
    [sym_cookies_section] = STATE(60),
    [sym_options_section] = STATE(60),
    [sym_key_value] = STATE(331),
    [sym_bytes] = STATE(416),
    [sym_xml] = STATE(484),
    [sym_oneline_base64] = STATE(484),
    [sym_oneline_file] = STATE(484),
    [sym_oneline_hex] = STATE(484),
    [sym_key_string] = STATE(483),
    [sym_key_string_content] = STATE(150),
    [sym_key_string_escaped_char] = STATE(218),
    [sym_oneline_string] = STATE(484),
    [sym_multiline_string] = STATE(484),
    [sym_json_value] = STATE(484),
    [sym_json_object] = STATE(482),
    [sym_json_array] = STATE(482),
    [sym_json_string] = STATE(482),
    [sym_json_number] = STATE(482),
    [sym_template] = STATE(256),
    [sym_boolean] = STATE(482),
    [sym_null] = STATE(482),
    [sym_integer] = STATE(240),
    [sym_digit] = STATE(217),
    [aux_sym_request_repeat1] = STATE(23),
    [aux_sym_request_repeat2] = STATE(8),
    [aux_sym_key_string_repeat1] = STATE(150),
    [aux_sym_key_string_content_repeat1] = STATE(218),
    [aux_sym_integer_repeat1] = STATE(217),
    [ts_builtin_sym_end] = ACTIONS(67),
    [anon_sym_LF] = ACTIONS(67),
    [anon_sym_GET] = ACTIONS(69),
    [anon_sym_HEAD] = ACTIONS(69),
    [anon_sym_POST] = ACTIONS(69),
    [anon_sym_PUT] = ACTIONS(69),
    [anon_sym_DELETE] = ACTIONS(69),
    [anon_sym_CONNECT] = ACTIONS(69),
    [anon_sym_OPTIONS] = ACTIONS(69),
    [anon_sym_TRACE] = ACTIONS(69),
    [anon_sym_PATCH] = ACTIONS(69),
    [anon_sym_LINK] = ACTIONS(69),
    [anon_sym_UNLINK] = ACTIONS(69),
    [anon_sym_PURGE] = ACTIONS(69),
    [anon_sym_LOCK] = ACTIONS(69),
    [anon_sym_UNLOCK] = ACTIONS(69),
    [anon_sym_PROPFIND] = ACTIONS(69),
    [anon_sym_VIEW] = ACTIONS(69),
    [anon_sym_HTTP_SLASH1_DOT0] = ACTIONS(69),
    [anon_sym_HTTP_SLASH1_DOT1] = ACTIONS(69),
    [anon_sym_HTTP_SLASH2] = ACTIONS(69),
    [anon_sym_HTTP_SLASH_STAR] = ACTIONS(69),
    [anon_sym_LBRACKBasicAuth_RBRACK] = ACTIONS(19),
    [anon_sym_LBRACKQueryStringParams_RBRACK] = ACTIONS(21),
    [anon_sym_LBRACKFormParams_RBRACK] = ACTIONS(23),
    [anon_sym_LBRACKMultipartFormData_RBRACK] = ACTIONS(25),
    [anon_sym_LBRACKCookies_RBRACK] = ACTIONS(27),
    [anon_sym_LBRACKOptions_RBRACK] = ACTIONS(29),
    [anon_sym_file_COMMA] = ACTIONS(31),
    [anon_sym_LT] = ACTIONS(33),
    [anon_sym_base64_COMMA] = ACTIONS(35),
    [anon_sym_hex_COMMA] = ACTIONS(37),
    [anon_sym_DQUOTE] = ACTIONS(39),
    [sym_key_string_text] = ACTIONS(41),
    [anon_sym_BSLASH2] = ACTIONS(43),
    [anon_sym_BQUOTE] = ACTIONS(45),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(47),
    [anon_sym_LBRACE] = ACTIONS(49),
    [anon_sym_LBRACK] = ACTIONS(51),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(53),
    [anon_sym_true] = ACTIONS(55),
    [anon_sym_false] = ACTIONS(55),
    [anon_sym_null] = ACTIONS(57),
    [aux_sym_digit_token1] = ACTIONS(59),
    [sym_comment] = ACTIONS(69),
  },
  [6] = {
    [sym_body] = STATE(106),
    [sym_request_section] = STATE(48),
    [sym_basic_auth_section] = STATE(60),
    [sym_query_string_params_section] = STATE(60),
    [sym_form_params_section] = STATE(60),
    [sym_multipart_form_data_section] = STATE(60),
    [sym_cookies_section] = STATE(60),
    [sym_options_section] = STATE(60),
    [sym_bytes] = STATE(416),
    [sym_xml] = STATE(484),
    [sym_oneline_base64] = STATE(484),
    [sym_oneline_file] = STATE(484),
    [sym_oneline_hex] = STATE(484),
    [sym_oneline_string] = STATE(484),
    [sym_multiline_string] = STATE(484),
    [sym_json_value] = STATE(484),
    [sym_json_object] = STATE(482),
    [sym_json_array] = STATE(482),
    [sym_json_string] = STATE(482),
    [sym_json_number] = STATE(482),
    [sym_template] = STATE(482),
    [sym_boolean] = STATE(482),
    [sym_null] = STATE(482),
    [sym_integer] = STATE(240),
    [sym_digit] = STATE(217),
    [aux_sym_request_repeat2] = STATE(48),
    [aux_sym_integer_repeat1] = STATE(217),
    [ts_builtin_sym_end] = ACTIONS(67),
    [anon_sym_LF] = ACTIONS(67),
    [anon_sym_GET] = ACTIONS(69),
    [anon_sym_HEAD] = ACTIONS(69),
    [anon_sym_POST] = ACTIONS(69),
    [anon_sym_PUT] = ACTIONS(69),
    [anon_sym_DELETE] = ACTIONS(69),
    [anon_sym_CONNECT] = ACTIONS(69),
    [anon_sym_OPTIONS] = ACTIONS(69),
    [anon_sym_TRACE] = ACTIONS(69),
    [anon_sym_PATCH] = ACTIONS(69),
    [anon_sym_LINK] = ACTIONS(69),
    [anon_sym_UNLINK] = ACTIONS(69),
    [anon_sym_PURGE] = ACTIONS(69),
    [anon_sym_LOCK] = ACTIONS(69),
    [anon_sym_UNLOCK] = ACTIONS(69),
    [anon_sym_PROPFIND] = ACTIONS(69),
    [anon_sym_VIEW] = ACTIONS(69),
    [anon_sym_HTTP_SLASH1_DOT0] = ACTIONS(69),
    [anon_sym_HTTP_SLASH1_DOT1] = ACTIONS(69),
    [anon_sym_HTTP_SLASH2] = ACTIONS(69),
    [anon_sym_HTTP_SLASH_STAR] = ACTIONS(69),
    [anon_sym_LBRACKBasicAuth_RBRACK] = ACTIONS(19),
    [anon_sym_LBRACKQueryStringParams_RBRACK] = ACTIONS(21),
    [anon_sym_LBRACKFormParams_RBRACK] = ACTIONS(23),
    [anon_sym_LBRACKMultipartFormData_RBRACK] = ACTIONS(25),
    [anon_sym_LBRACKCookies_RBRACK] = ACTIONS(27),
    [anon_sym_LBRACKOptions_RBRACK] = ACTIONS(29),
    [anon_sym_file_COMMA] = ACTIONS(31),
    [anon_sym_LT] = ACTIONS(33),
    [anon_sym_base64_COMMA] = ACTIONS(35),
    [anon_sym_hex_COMMA] = ACTIONS(37),
    [anon_sym_DQUOTE] = ACTIONS(39),
    [anon_sym_BQUOTE] = ACTIONS(45),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(47),
    [anon_sym_LBRACE] = ACTIONS(49),
    [anon_sym_LBRACK] = ACTIONS(51),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(53),
    [anon_sym_true] = ACTIONS(55),
    [anon_sym_false] = ACTIONS(55),
    [anon_sym_null] = ACTIONS(57),
    [aux_sym_digit_token1] = ACTIONS(59),
    [sym_comment] = ACTIONS(69),
  },
  [7] = {
    [sym_body] = STATE(102),
    [sym_request_section] = STATE(48),
    [sym_basic_auth_section] = STATE(60),
    [sym_query_string_params_section] = STATE(60),
    [sym_form_params_section] = STATE(60),
    [sym_multipart_form_data_section] = STATE(60),
    [sym_cookies_section] = STATE(60),
    [sym_options_section] = STATE(60),
    [sym_bytes] = STATE(416),
    [sym_xml] = STATE(484),
    [sym_oneline_base64] = STATE(484),
    [sym_oneline_file] = STATE(484),
    [sym_oneline_hex] = STATE(484),
    [sym_oneline_string] = STATE(484),
    [sym_multiline_string] = STATE(484),
    [sym_json_value] = STATE(484),
    [sym_json_object] = STATE(482),
    [sym_json_array] = STATE(482),
    [sym_json_string] = STATE(482),
    [sym_json_number] = STATE(482),
    [sym_template] = STATE(482),
    [sym_boolean] = STATE(482),
    [sym_null] = STATE(482),
    [sym_integer] = STATE(240),
    [sym_digit] = STATE(217),
    [aux_sym_request_repeat2] = STATE(48),
    [aux_sym_integer_repeat1] = STATE(217),
    [ts_builtin_sym_end] = ACTIONS(63),
    [anon_sym_LF] = ACTIONS(63),
    [anon_sym_GET] = ACTIONS(65),
    [anon_sym_HEAD] = ACTIONS(65),
    [anon_sym_POST] = ACTIONS(65),
    [anon_sym_PUT] = ACTIONS(65),
    [anon_sym_DELETE] = ACTIONS(65),
    [anon_sym_CONNECT] = ACTIONS(65),
    [anon_sym_OPTIONS] = ACTIONS(65),
    [anon_sym_TRACE] = ACTIONS(65),
    [anon_sym_PATCH] = ACTIONS(65),
    [anon_sym_LINK] = ACTIONS(65),
    [anon_sym_UNLINK] = ACTIONS(65),
    [anon_sym_PURGE] = ACTIONS(65),
    [anon_sym_LOCK] = ACTIONS(65),
    [anon_sym_UNLOCK] = ACTIONS(65),
    [anon_sym_PROPFIND] = ACTIONS(65),
    [anon_sym_VIEW] = ACTIONS(65),
    [anon_sym_HTTP_SLASH1_DOT0] = ACTIONS(65),
    [anon_sym_HTTP_SLASH1_DOT1] = ACTIONS(65),
    [anon_sym_HTTP_SLASH2] = ACTIONS(65),
    [anon_sym_HTTP_SLASH_STAR] = ACTIONS(65),
    [anon_sym_LBRACKBasicAuth_RBRACK] = ACTIONS(19),
    [anon_sym_LBRACKQueryStringParams_RBRACK] = ACTIONS(21),
    [anon_sym_LBRACKFormParams_RBRACK] = ACTIONS(23),
    [anon_sym_LBRACKMultipartFormData_RBRACK] = ACTIONS(25),
    [anon_sym_LBRACKCookies_RBRACK] = ACTIONS(27),
    [anon_sym_LBRACKOptions_RBRACK] = ACTIONS(29),
    [anon_sym_file_COMMA] = ACTIONS(31),
    [anon_sym_LT] = ACTIONS(33),
    [anon_sym_base64_COMMA] = ACTIONS(35),
    [anon_sym_hex_COMMA] = ACTIONS(37),
    [anon_sym_DQUOTE] = ACTIONS(39),
    [anon_sym_BQUOTE] = ACTIONS(45),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(47),
    [anon_sym_LBRACE] = ACTIONS(49),
    [anon_sym_LBRACK] = ACTIONS(51),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(53),
    [anon_sym_true] = ACTIONS(55),
    [anon_sym_false] = ACTIONS(55),
    [anon_sym_null] = ACTIONS(57),
    [aux_sym_digit_token1] = ACTIONS(59),
    [sym_comment] = ACTIONS(65),
  },
  [8] = {
    [sym_body] = STATE(105),
    [sym_request_section] = STATE(48),
    [sym_basic_auth_section] = STATE(60),
    [sym_query_string_params_section] = STATE(60),
    [sym_form_params_section] = STATE(60),
    [sym_multipart_form_data_section] = STATE(60),
    [sym_cookies_section] = STATE(60),
    [sym_options_section] = STATE(60),
    [sym_bytes] = STATE(416),
    [sym_xml] = STATE(484),
    [sym_oneline_base64] = STATE(484),
    [sym_oneline_file] = STATE(484),
    [sym_oneline_hex] = STATE(484),
    [sym_oneline_string] = STATE(484),
    [sym_multiline_string] = STATE(484),
    [sym_json_value] = STATE(484),
    [sym_json_object] = STATE(482),
    [sym_json_array] = STATE(482),
    [sym_json_string] = STATE(482),
    [sym_json_number] = STATE(482),
    [sym_template] = STATE(482),
    [sym_boolean] = STATE(482),
    [sym_null] = STATE(482),
    [sym_integer] = STATE(240),
    [sym_digit] = STATE(217),
    [aux_sym_request_repeat2] = STATE(48),
    [aux_sym_integer_repeat1] = STATE(217),
    [ts_builtin_sym_end] = ACTIONS(71),
    [anon_sym_LF] = ACTIONS(71),
    [anon_sym_GET] = ACTIONS(73),
    [anon_sym_HEAD] = ACTIONS(73),
    [anon_sym_POST] = ACTIONS(73),
    [anon_sym_PUT] = ACTIONS(73),
    [anon_sym_DELETE] = ACTIONS(73),
    [anon_sym_CONNECT] = ACTIONS(73),
    [anon_sym_OPTIONS] = ACTIONS(73),
    [anon_sym_TRACE] = ACTIONS(73),
    [anon_sym_PATCH] = ACTIONS(73),
    [anon_sym_LINK] = ACTIONS(73),
    [anon_sym_UNLINK] = ACTIONS(73),
    [anon_sym_PURGE] = ACTIONS(73),
    [anon_sym_LOCK] = ACTIONS(73),
    [anon_sym_UNLOCK] = ACTIONS(73),
    [anon_sym_PROPFIND] = ACTIONS(73),
    [anon_sym_VIEW] = ACTIONS(73),
    [anon_sym_HTTP_SLASH1_DOT0] = ACTIONS(73),
    [anon_sym_HTTP_SLASH1_DOT1] = ACTIONS(73),
    [anon_sym_HTTP_SLASH2] = ACTIONS(73),
    [anon_sym_HTTP_SLASH_STAR] = ACTIONS(73),
    [anon_sym_LBRACKBasicAuth_RBRACK] = ACTIONS(19),
    [anon_sym_LBRACKQueryStringParams_RBRACK] = ACTIONS(21),
    [anon_sym_LBRACKFormParams_RBRACK] = ACTIONS(23),
    [anon_sym_LBRACKMultipartFormData_RBRACK] = ACTIONS(25),
    [anon_sym_LBRACKCookies_RBRACK] = ACTIONS(27),
    [anon_sym_LBRACKOptions_RBRACK] = ACTIONS(29),
    [anon_sym_file_COMMA] = ACTIONS(31),
    [anon_sym_LT] = ACTIONS(33),
    [anon_sym_base64_COMMA] = ACTIONS(35),
    [anon_sym_hex_COMMA] = ACTIONS(37),
    [anon_sym_DQUOTE] = ACTIONS(39),
    [anon_sym_BQUOTE] = ACTIONS(45),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(47),
    [anon_sym_LBRACE] = ACTIONS(49),
    [anon_sym_LBRACK] = ACTIONS(51),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(53),
    [anon_sym_true] = ACTIONS(55),
    [anon_sym_false] = ACTIONS(55),
    [anon_sym_null] = ACTIONS(57),
    [aux_sym_digit_token1] = ACTIONS(59),
    [sym_comment] = ACTIONS(73),
  },
  [9] = {
    [sym_header] = STATE(12),
    [sym_body] = STATE(117),
    [sym_response_section] = STATE(21),
    [sym_captures_section] = STATE(69),
    [sym_asserts_section] = STATE(69),
    [sym_key_value] = STATE(396),
    [sym_bytes] = STATE(416),
    [sym_xml] = STATE(484),
    [sym_oneline_base64] = STATE(484),
    [sym_oneline_file] = STATE(484),
    [sym_oneline_hex] = STATE(484),
    [sym_key_string] = STATE(483),
    [sym_key_string_content] = STATE(150),
    [sym_key_string_escaped_char] = STATE(218),
    [sym_oneline_string] = STATE(484),
    [sym_multiline_string] = STATE(484),
    [sym_json_value] = STATE(484),
    [sym_json_object] = STATE(482),
    [sym_json_array] = STATE(482),
    [sym_json_string] = STATE(482),
    [sym_json_number] = STATE(482),
    [sym_template] = STATE(256),
    [sym_boolean] = STATE(482),
    [sym_null] = STATE(482),
    [sym_integer] = STATE(240),
    [sym_digit] = STATE(217),
    [aux_sym_request_repeat1] = STATE(12),
    [aux_sym_response_repeat1] = STATE(21),
    [aux_sym_key_string_repeat1] = STATE(150),
    [aux_sym_key_string_content_repeat1] = STATE(218),
    [aux_sym_integer_repeat1] = STATE(217),
    [ts_builtin_sym_end] = ACTIONS(75),
    [anon_sym_LF] = ACTIONS(75),
    [anon_sym_GET] = ACTIONS(77),
    [anon_sym_HEAD] = ACTIONS(77),
    [anon_sym_POST] = ACTIONS(77),
    [anon_sym_PUT] = ACTIONS(77),
    [anon_sym_DELETE] = ACTIONS(77),
    [anon_sym_CONNECT] = ACTIONS(77),
    [anon_sym_OPTIONS] = ACTIONS(77),
    [anon_sym_TRACE] = ACTIONS(77),
    [anon_sym_PATCH] = ACTIONS(77),
    [anon_sym_LINK] = ACTIONS(77),
    [anon_sym_UNLINK] = ACTIONS(77),
    [anon_sym_PURGE] = ACTIONS(77),
    [anon_sym_LOCK] = ACTIONS(77),
    [anon_sym_UNLOCK] = ACTIONS(77),
    [anon_sym_PROPFIND] = ACTIONS(77),
    [anon_sym_VIEW] = ACTIONS(77),
    [anon_sym_LBRACKCaptures_RBRACK] = ACTIONS(79),
    [anon_sym_LBRACKAsserts_RBRACK] = ACTIONS(81),
    [anon_sym_file_COMMA] = ACTIONS(31),
    [anon_sym_LT] = ACTIONS(33),
    [anon_sym_base64_COMMA] = ACTIONS(35),
    [anon_sym_hex_COMMA] = ACTIONS(37),
    [anon_sym_DQUOTE] = ACTIONS(39),
    [sym_key_string_text] = ACTIONS(41),
    [anon_sym_BSLASH2] = ACTIONS(43),
    [anon_sym_BQUOTE] = ACTIONS(45),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(47),
    [anon_sym_LBRACE] = ACTIONS(49),
    [anon_sym_LBRACK] = ACTIONS(51),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(53),
    [anon_sym_true] = ACTIONS(55),
    [anon_sym_false] = ACTIONS(55),
    [anon_sym_null] = ACTIONS(57),
    [aux_sym_digit_token1] = ACTIONS(59),
    [sym_comment] = ACTIONS(77),
  },
  [10] = {
    [aux_sym__comment_or_new_line_repeat1] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(83),
    [anon_sym_LF] = ACTIONS(85),
    [anon_sym_GET] = ACTIONS(87),
    [anon_sym_HEAD] = ACTIONS(87),
    [anon_sym_POST] = ACTIONS(87),
    [anon_sym_PUT] = ACTIONS(87),
    [anon_sym_DELETE] = ACTIONS(87),
    [anon_sym_CONNECT] = ACTIONS(87),
    [anon_sym_OPTIONS] = ACTIONS(87),
    [anon_sym_TRACE] = ACTIONS(87),
    [anon_sym_PATCH] = ACTIONS(87),
    [anon_sym_LINK] = ACTIONS(87),
    [anon_sym_UNLINK] = ACTIONS(87),
    [anon_sym_PURGE] = ACTIONS(87),
    [anon_sym_LOCK] = ACTIONS(87),
    [anon_sym_UNLOCK] = ACTIONS(87),
    [anon_sym_PROPFIND] = ACTIONS(87),
    [anon_sym_VIEW] = ACTIONS(87),
    [anon_sym_HTTP_SLASH1_DOT0] = ACTIONS(87),
    [anon_sym_HTTP_SLASH1_DOT1] = ACTIONS(87),
    [anon_sym_HTTP_SLASH2] = ACTIONS(87),
    [anon_sym_HTTP_SLASH_STAR] = ACTIONS(87),
    [anon_sym_LBRACKBasicAuth_RBRACK] = ACTIONS(87),
    [anon_sym_LBRACKQueryStringParams_RBRACK] = ACTIONS(87),
    [anon_sym_LBRACKFormParams_RBRACK] = ACTIONS(87),
    [anon_sym_LBRACKMultipartFormData_RBRACK] = ACTIONS(87),
    [anon_sym_LBRACKCookies_RBRACK] = ACTIONS(87),
    [anon_sym_LBRACKCaptures_RBRACK] = ACTIONS(87),
    [anon_sym_LBRACKAsserts_RBRACK] = ACTIONS(87),
    [anon_sym_LBRACKOptions_RBRACK] = ACTIONS(87),
    [anon_sym_file_COMMA] = ACTIONS(87),
    [anon_sym_cacert] = ACTIONS(87),
    [anon_sym_location] = ACTIONS(87),
    [anon_sym_insecure] = ACTIONS(87),
    [anon_sym_max_DASHredirs] = ACTIONS(87),
    [anon_sym_retry] = ACTIONS(87),
    [anon_sym_retry_DASHinterval] = ACTIONS(87),
    [anon_sym_retry_DASHmax_DASHcount] = ACTIONS(87),
    [anon_sym_variable] = ACTIONS(87),
    [anon_sym_verbose] = ACTIONS(87),
    [anon_sym_very_DASHverbose] = ACTIONS(87),
    [anon_sym_status] = ACTIONS(87),
    [anon_sym_url] = ACTIONS(87),
    [anon_sym_header] = ACTIONS(87),
    [anon_sym_cookie] = ACTIONS(87),
    [anon_sym_body] = ACTIONS(87),
    [anon_sym_xpath] = ACTIONS(87),
    [anon_sym_jsonpath] = ACTIONS(87),
    [anon_sym_regex] = ACTIONS(87),
    [anon_sym_duration] = ACTIONS(87),
    [anon_sym_sha256] = ACTIONS(87),
    [anon_sym_md5] = ACTIONS(87),
    [anon_sym_bytes] = ACTIONS(87),
    [anon_sym_LT] = ACTIONS(87),
    [anon_sym_base64_COMMA] = ACTIONS(87),
    [anon_sym_hex_COMMA] = ACTIONS(87),
    [anon_sym_DQUOTE] = ACTIONS(87),
    [anon_sym_BQUOTE] = ACTIONS(87),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(87),
    [anon_sym_LBRACE] = ACTIONS(87),
    [anon_sym_LBRACK] = ACTIONS(87),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(83),
    [anon_sym_true] = ACTIONS(87),
    [anon_sym_false] = ACTIONS(87),
    [anon_sym_null] = ACTIONS(87),
    [aux_sym_digit_token1] = ACTIONS(87),
    [sym_comment] = ACTIONS(89),
  },
  [11] = {
    [aux_sym__comment_or_new_line_repeat1] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(91),
    [anon_sym_LF] = ACTIONS(93),
    [anon_sym_GET] = ACTIONS(96),
    [anon_sym_HEAD] = ACTIONS(96),
    [anon_sym_POST] = ACTIONS(96),
    [anon_sym_PUT] = ACTIONS(96),
    [anon_sym_DELETE] = ACTIONS(96),
    [anon_sym_CONNECT] = ACTIONS(96),
    [anon_sym_OPTIONS] = ACTIONS(96),
    [anon_sym_TRACE] = ACTIONS(96),
    [anon_sym_PATCH] = ACTIONS(96),
    [anon_sym_LINK] = ACTIONS(96),
    [anon_sym_UNLINK] = ACTIONS(96),
    [anon_sym_PURGE] = ACTIONS(96),
    [anon_sym_LOCK] = ACTIONS(96),
    [anon_sym_UNLOCK] = ACTIONS(96),
    [anon_sym_PROPFIND] = ACTIONS(96),
    [anon_sym_VIEW] = ACTIONS(96),
    [anon_sym_HTTP_SLASH1_DOT0] = ACTIONS(96),
    [anon_sym_HTTP_SLASH1_DOT1] = ACTIONS(96),
    [anon_sym_HTTP_SLASH2] = ACTIONS(96),
    [anon_sym_HTTP_SLASH_STAR] = ACTIONS(96),
    [anon_sym_LBRACKBasicAuth_RBRACK] = ACTIONS(96),
    [anon_sym_LBRACKQueryStringParams_RBRACK] = ACTIONS(96),
    [anon_sym_LBRACKFormParams_RBRACK] = ACTIONS(96),
    [anon_sym_LBRACKMultipartFormData_RBRACK] = ACTIONS(96),
    [anon_sym_LBRACKCookies_RBRACK] = ACTIONS(96),
    [anon_sym_LBRACKCaptures_RBRACK] = ACTIONS(96),
    [anon_sym_LBRACKAsserts_RBRACK] = ACTIONS(96),
    [anon_sym_LBRACKOptions_RBRACK] = ACTIONS(96),
    [anon_sym_file_COMMA] = ACTIONS(96),
    [anon_sym_cacert] = ACTIONS(96),
    [anon_sym_location] = ACTIONS(96),
    [anon_sym_insecure] = ACTIONS(96),
    [anon_sym_max_DASHredirs] = ACTIONS(96),
    [anon_sym_retry] = ACTIONS(96),
    [anon_sym_retry_DASHinterval] = ACTIONS(96),
    [anon_sym_retry_DASHmax_DASHcount] = ACTIONS(96),
    [anon_sym_variable] = ACTIONS(96),
    [anon_sym_verbose] = ACTIONS(96),
    [anon_sym_very_DASHverbose] = ACTIONS(96),
    [anon_sym_status] = ACTIONS(96),
    [anon_sym_url] = ACTIONS(96),
    [anon_sym_header] = ACTIONS(96),
    [anon_sym_cookie] = ACTIONS(96),
    [anon_sym_body] = ACTIONS(96),
    [anon_sym_xpath] = ACTIONS(96),
    [anon_sym_jsonpath] = ACTIONS(96),
    [anon_sym_regex] = ACTIONS(96),
    [anon_sym_duration] = ACTIONS(96),
    [anon_sym_sha256] = ACTIONS(96),
    [anon_sym_md5] = ACTIONS(96),
    [anon_sym_bytes] = ACTIONS(96),
    [anon_sym_LT] = ACTIONS(96),
    [anon_sym_base64_COMMA] = ACTIONS(96),
    [anon_sym_hex_COMMA] = ACTIONS(96),
    [anon_sym_DQUOTE] = ACTIONS(96),
    [anon_sym_BQUOTE] = ACTIONS(96),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(96),
    [anon_sym_LBRACE] = ACTIONS(96),
    [anon_sym_LBRACK] = ACTIONS(96),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(91),
    [anon_sym_true] = ACTIONS(96),
    [anon_sym_false] = ACTIONS(96),
    [anon_sym_null] = ACTIONS(96),
    [aux_sym_digit_token1] = ACTIONS(96),
    [sym_comment] = ACTIONS(98),
  },
  [12] = {
    [sym_header] = STATE(54),
    [sym_body] = STATE(120),
    [sym_response_section] = STATE(22),
    [sym_captures_section] = STATE(69),
    [sym_asserts_section] = STATE(69),
    [sym_key_value] = STATE(396),
    [sym_bytes] = STATE(416),
    [sym_xml] = STATE(484),
    [sym_oneline_base64] = STATE(484),
    [sym_oneline_file] = STATE(484),
    [sym_oneline_hex] = STATE(484),
    [sym_key_string] = STATE(483),
    [sym_key_string_content] = STATE(150),
    [sym_key_string_escaped_char] = STATE(218),
    [sym_oneline_string] = STATE(484),
    [sym_multiline_string] = STATE(484),
    [sym_json_value] = STATE(484),
    [sym_json_object] = STATE(482),
    [sym_json_array] = STATE(482),
    [sym_json_string] = STATE(482),
    [sym_json_number] = STATE(482),
    [sym_template] = STATE(256),
    [sym_boolean] = STATE(482),
    [sym_null] = STATE(482),
    [sym_integer] = STATE(240),
    [sym_digit] = STATE(217),
    [aux_sym_request_repeat1] = STATE(54),
    [aux_sym_response_repeat1] = STATE(22),
    [aux_sym_key_string_repeat1] = STATE(150),
    [aux_sym_key_string_content_repeat1] = STATE(218),
    [aux_sym_integer_repeat1] = STATE(217),
    [ts_builtin_sym_end] = ACTIONS(101),
    [anon_sym_LF] = ACTIONS(101),
    [anon_sym_GET] = ACTIONS(103),
    [anon_sym_HEAD] = ACTIONS(103),
    [anon_sym_POST] = ACTIONS(103),
    [anon_sym_PUT] = ACTIONS(103),
    [anon_sym_DELETE] = ACTIONS(103),
    [anon_sym_CONNECT] = ACTIONS(103),
    [anon_sym_OPTIONS] = ACTIONS(103),
    [anon_sym_TRACE] = ACTIONS(103),
    [anon_sym_PATCH] = ACTIONS(103),
    [anon_sym_LINK] = ACTIONS(103),
    [anon_sym_UNLINK] = ACTIONS(103),
    [anon_sym_PURGE] = ACTIONS(103),
    [anon_sym_LOCK] = ACTIONS(103),
    [anon_sym_UNLOCK] = ACTIONS(103),
    [anon_sym_PROPFIND] = ACTIONS(103),
    [anon_sym_VIEW] = ACTIONS(103),
    [anon_sym_LBRACKCaptures_RBRACK] = ACTIONS(79),
    [anon_sym_LBRACKAsserts_RBRACK] = ACTIONS(81),
    [anon_sym_file_COMMA] = ACTIONS(31),
    [anon_sym_LT] = ACTIONS(33),
    [anon_sym_base64_COMMA] = ACTIONS(35),
    [anon_sym_hex_COMMA] = ACTIONS(37),
    [anon_sym_DQUOTE] = ACTIONS(39),
    [sym_key_string_text] = ACTIONS(41),
    [anon_sym_BSLASH2] = ACTIONS(43),
    [anon_sym_BQUOTE] = ACTIONS(45),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(47),
    [anon_sym_LBRACE] = ACTIONS(49),
    [anon_sym_LBRACK] = ACTIONS(51),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(53),
    [anon_sym_true] = ACTIONS(55),
    [anon_sym_false] = ACTIONS(55),
    [anon_sym_null] = ACTIONS(57),
    [aux_sym_digit_token1] = ACTIONS(59),
    [sym_comment] = ACTIONS(103),
  },
  [13] = {
    [sym_option] = STATE(13),
    [sym_ca_certificate_option] = STATE(38),
    [sym_follow_redirect_option] = STATE(38),
    [sym_insecure_option] = STATE(38),
    [sym_max_redirs_option] = STATE(38),
    [sym_retry_option] = STATE(38),
    [sym_retry_interval_option] = STATE(38),
    [sym_retry_max_count_option] = STATE(38),
    [sym_variable_option] = STATE(38),
    [sym_verbose_option] = STATE(38),
    [sym_very_verbose_option] = STATE(38),
    [aux_sym_options_section_repeat1] = STATE(13),
    [ts_builtin_sym_end] = ACTIONS(105),
    [anon_sym_LF] = ACTIONS(105),
    [anon_sym_GET] = ACTIONS(107),
    [anon_sym_HEAD] = ACTIONS(107),
    [anon_sym_POST] = ACTIONS(107),
    [anon_sym_PUT] = ACTIONS(107),
    [anon_sym_DELETE] = ACTIONS(107),
    [anon_sym_CONNECT] = ACTIONS(107),
    [anon_sym_OPTIONS] = ACTIONS(107),
    [anon_sym_TRACE] = ACTIONS(107),
    [anon_sym_PATCH] = ACTIONS(107),
    [anon_sym_LINK] = ACTIONS(107),
    [anon_sym_UNLINK] = ACTIONS(107),
    [anon_sym_PURGE] = ACTIONS(107),
    [anon_sym_LOCK] = ACTIONS(107),
    [anon_sym_UNLOCK] = ACTIONS(107),
    [anon_sym_PROPFIND] = ACTIONS(107),
    [anon_sym_VIEW] = ACTIONS(107),
    [anon_sym_HTTP_SLASH1_DOT0] = ACTIONS(107),
    [anon_sym_HTTP_SLASH1_DOT1] = ACTIONS(107),
    [anon_sym_HTTP_SLASH2] = ACTIONS(107),
    [anon_sym_HTTP_SLASH_STAR] = ACTIONS(107),
    [anon_sym_LBRACKBasicAuth_RBRACK] = ACTIONS(107),
    [anon_sym_LBRACKQueryStringParams_RBRACK] = ACTIONS(107),
    [anon_sym_LBRACKFormParams_RBRACK] = ACTIONS(107),
    [anon_sym_LBRACKMultipartFormData_RBRACK] = ACTIONS(107),
    [anon_sym_LBRACKCookies_RBRACK] = ACTIONS(107),
    [anon_sym_LBRACKOptions_RBRACK] = ACTIONS(107),
    [anon_sym_file_COMMA] = ACTIONS(107),
    [anon_sym_cacert] = ACTIONS(109),
    [anon_sym_location] = ACTIONS(112),
    [anon_sym_insecure] = ACTIONS(115),
    [anon_sym_max_DASHredirs] = ACTIONS(118),
    [anon_sym_retry] = ACTIONS(121),
    [anon_sym_retry_DASHinterval] = ACTIONS(124),
    [anon_sym_retry_DASHmax_DASHcount] = ACTIONS(127),
    [anon_sym_variable] = ACTIONS(130),
    [anon_sym_verbose] = ACTIONS(133),
    [anon_sym_very_DASHverbose] = ACTIONS(136),
    [anon_sym_LT] = ACTIONS(107),
    [anon_sym_base64_COMMA] = ACTIONS(107),
    [anon_sym_hex_COMMA] = ACTIONS(107),
    [anon_sym_DQUOTE] = ACTIONS(107),
    [anon_sym_BQUOTE] = ACTIONS(107),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(107),
    [anon_sym_LBRACE] = ACTIONS(107),
    [anon_sym_LBRACK] = ACTIONS(107),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(105),
    [anon_sym_true] = ACTIONS(107),
    [anon_sym_false] = ACTIONS(107),
    [anon_sym_null] = ACTIONS(107),
    [aux_sym_digit_token1] = ACTIONS(107),
    [sym_comment] = ACTIONS(107),
  },
  [14] = {
    [sym_option] = STATE(15),
    [sym_ca_certificate_option] = STATE(38),
    [sym_follow_redirect_option] = STATE(38),
    [sym_insecure_option] = STATE(38),
    [sym_max_redirs_option] = STATE(38),
    [sym_retry_option] = STATE(38),
    [sym_retry_interval_option] = STATE(38),
    [sym_retry_max_count_option] = STATE(38),
    [sym_variable_option] = STATE(38),
    [sym_verbose_option] = STATE(38),
    [sym_very_verbose_option] = STATE(38),
    [aux_sym_options_section_repeat1] = STATE(15),
    [ts_builtin_sym_end] = ACTIONS(139),
    [anon_sym_LF] = ACTIONS(139),
    [anon_sym_GET] = ACTIONS(141),
    [anon_sym_HEAD] = ACTIONS(141),
    [anon_sym_POST] = ACTIONS(141),
    [anon_sym_PUT] = ACTIONS(141),
    [anon_sym_DELETE] = ACTIONS(141),
    [anon_sym_CONNECT] = ACTIONS(141),
    [anon_sym_OPTIONS] = ACTIONS(141),
    [anon_sym_TRACE] = ACTIONS(141),
    [anon_sym_PATCH] = ACTIONS(141),
    [anon_sym_LINK] = ACTIONS(141),
    [anon_sym_UNLINK] = ACTIONS(141),
    [anon_sym_PURGE] = ACTIONS(141),
    [anon_sym_LOCK] = ACTIONS(141),
    [anon_sym_UNLOCK] = ACTIONS(141),
    [anon_sym_PROPFIND] = ACTIONS(141),
    [anon_sym_VIEW] = ACTIONS(141),
    [anon_sym_HTTP_SLASH1_DOT0] = ACTIONS(141),
    [anon_sym_HTTP_SLASH1_DOT1] = ACTIONS(141),
    [anon_sym_HTTP_SLASH2] = ACTIONS(141),
    [anon_sym_HTTP_SLASH_STAR] = ACTIONS(141),
    [anon_sym_LBRACKBasicAuth_RBRACK] = ACTIONS(141),
    [anon_sym_LBRACKQueryStringParams_RBRACK] = ACTIONS(141),
    [anon_sym_LBRACKFormParams_RBRACK] = ACTIONS(141),
    [anon_sym_LBRACKMultipartFormData_RBRACK] = ACTIONS(141),
    [anon_sym_LBRACKCookies_RBRACK] = ACTIONS(141),
    [anon_sym_LBRACKOptions_RBRACK] = ACTIONS(141),
    [anon_sym_file_COMMA] = ACTIONS(141),
    [anon_sym_cacert] = ACTIONS(143),
    [anon_sym_location] = ACTIONS(145),
    [anon_sym_insecure] = ACTIONS(147),
    [anon_sym_max_DASHredirs] = ACTIONS(149),
    [anon_sym_retry] = ACTIONS(151),
    [anon_sym_retry_DASHinterval] = ACTIONS(153),
    [anon_sym_retry_DASHmax_DASHcount] = ACTIONS(155),
    [anon_sym_variable] = ACTIONS(157),
    [anon_sym_verbose] = ACTIONS(159),
    [anon_sym_very_DASHverbose] = ACTIONS(161),
    [anon_sym_LT] = ACTIONS(141),
    [anon_sym_base64_COMMA] = ACTIONS(141),
    [anon_sym_hex_COMMA] = ACTIONS(141),
    [anon_sym_DQUOTE] = ACTIONS(141),
    [anon_sym_BQUOTE] = ACTIONS(141),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(141),
    [anon_sym_LBRACE] = ACTIONS(141),
    [anon_sym_LBRACK] = ACTIONS(141),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(139),
    [anon_sym_true] = ACTIONS(141),
    [anon_sym_false] = ACTIONS(141),
    [anon_sym_null] = ACTIONS(141),
    [aux_sym_digit_token1] = ACTIONS(141),
    [sym_comment] = ACTIONS(141),
  },
  [15] = {
    [sym_option] = STATE(13),
    [sym_ca_certificate_option] = STATE(38),
    [sym_follow_redirect_option] = STATE(38),
    [sym_insecure_option] = STATE(38),
    [sym_max_redirs_option] = STATE(38),
    [sym_retry_option] = STATE(38),
    [sym_retry_interval_option] = STATE(38),
    [sym_retry_max_count_option] = STATE(38),
    [sym_variable_option] = STATE(38),
    [sym_verbose_option] = STATE(38),
    [sym_very_verbose_option] = STATE(38),
    [aux_sym_options_section_repeat1] = STATE(13),
    [ts_builtin_sym_end] = ACTIONS(163),
    [anon_sym_LF] = ACTIONS(163),
    [anon_sym_GET] = ACTIONS(165),
    [anon_sym_HEAD] = ACTIONS(165),
    [anon_sym_POST] = ACTIONS(165),
    [anon_sym_PUT] = ACTIONS(165),
    [anon_sym_DELETE] = ACTIONS(165),
    [anon_sym_CONNECT] = ACTIONS(165),
    [anon_sym_OPTIONS] = ACTIONS(165),
    [anon_sym_TRACE] = ACTIONS(165),
    [anon_sym_PATCH] = ACTIONS(165),
    [anon_sym_LINK] = ACTIONS(165),
    [anon_sym_UNLINK] = ACTIONS(165),
    [anon_sym_PURGE] = ACTIONS(165),
    [anon_sym_LOCK] = ACTIONS(165),
    [anon_sym_UNLOCK] = ACTIONS(165),
    [anon_sym_PROPFIND] = ACTIONS(165),
    [anon_sym_VIEW] = ACTIONS(165),
    [anon_sym_HTTP_SLASH1_DOT0] = ACTIONS(165),
    [anon_sym_HTTP_SLASH1_DOT1] = ACTIONS(165),
    [anon_sym_HTTP_SLASH2] = ACTIONS(165),
    [anon_sym_HTTP_SLASH_STAR] = ACTIONS(165),
    [anon_sym_LBRACKBasicAuth_RBRACK] = ACTIONS(165),
    [anon_sym_LBRACKQueryStringParams_RBRACK] = ACTIONS(165),
    [anon_sym_LBRACKFormParams_RBRACK] = ACTIONS(165),
    [anon_sym_LBRACKMultipartFormData_RBRACK] = ACTIONS(165),
    [anon_sym_LBRACKCookies_RBRACK] = ACTIONS(165),
    [anon_sym_LBRACKOptions_RBRACK] = ACTIONS(165),
    [anon_sym_file_COMMA] = ACTIONS(165),
    [anon_sym_cacert] = ACTIONS(143),
    [anon_sym_location] = ACTIONS(145),
    [anon_sym_insecure] = ACTIONS(147),
    [anon_sym_max_DASHredirs] = ACTIONS(149),
    [anon_sym_retry] = ACTIONS(151),
    [anon_sym_retry_DASHinterval] = ACTIONS(153),
    [anon_sym_retry_DASHmax_DASHcount] = ACTIONS(155),
    [anon_sym_variable] = ACTIONS(157),
    [anon_sym_verbose] = ACTIONS(159),
    [anon_sym_very_DASHverbose] = ACTIONS(161),
    [anon_sym_LT] = ACTIONS(165),
    [anon_sym_base64_COMMA] = ACTIONS(165),
    [anon_sym_hex_COMMA] = ACTIONS(165),
    [anon_sym_DQUOTE] = ACTIONS(165),
    [anon_sym_BQUOTE] = ACTIONS(165),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(165),
    [anon_sym_LBRACE] = ACTIONS(165),
    [anon_sym_LBRACK] = ACTIONS(165),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(163),
    [anon_sym_true] = ACTIONS(165),
    [anon_sym_false] = ACTIONS(165),
    [anon_sym_null] = ACTIONS(165),
    [aux_sym_digit_token1] = ACTIONS(165),
    [sym_comment] = ACTIONS(165),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 18,
    ACTIONS(171), 1,
      anon_sym_variable,
    ACTIONS(173), 1,
      anon_sym_status,
    ACTIONS(175), 1,
      anon_sym_url,
    ACTIONS(177), 1,
      anon_sym_header,
    ACTIONS(179), 1,
      anon_sym_cookie,
    ACTIONS(181), 1,
      anon_sym_body,
    ACTIONS(183), 1,
      anon_sym_xpath,
    ACTIONS(185), 1,
      anon_sym_jsonpath,
    ACTIONS(187), 1,
      anon_sym_regex,
    ACTIONS(189), 1,
      anon_sym_duration,
    ACTIONS(191), 1,
      anon_sym_sha256,
    ACTIONS(193), 1,
      anon_sym_md5,
    ACTIONS(195), 1,
      anon_sym_bytes,
    STATE(20), 1,
      sym_query,
    STATE(18), 2,
      sym_assert,
      aux_sym_asserts_section_repeat1,
    ACTIONS(167), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    STATE(93), 13,
      sym_status_query,
      sym_url_query,
      sym_header_query,
      sym_cookie_query,
      sym_body_query,
      sym_xpath_query,
      sym_jsonpath_query,
      sym_regex_query,
      sym_variable_query,
      sym_duration_query,
      sym_sha256_query,
      sym_md5_query,
      sym_bytes_query,
    ACTIONS(169), 32,
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
      anon_sym_LBRACKCaptures_RBRACK,
      anon_sym_LBRACKAsserts_RBRACK,
      anon_sym_file_COMMA,
      anon_sym_LT,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      aux_sym_digit_token1,
      sym_comment,
  [101] = 18,
    ACTIONS(201), 1,
      anon_sym_variable,
    ACTIONS(204), 1,
      anon_sym_status,
    ACTIONS(207), 1,
      anon_sym_url,
    ACTIONS(210), 1,
      anon_sym_header,
    ACTIONS(213), 1,
      anon_sym_cookie,
    ACTIONS(216), 1,
      anon_sym_body,
    ACTIONS(219), 1,
      anon_sym_xpath,
    ACTIONS(222), 1,
      anon_sym_jsonpath,
    ACTIONS(225), 1,
      anon_sym_regex,
    ACTIONS(228), 1,
      anon_sym_duration,
    ACTIONS(231), 1,
      anon_sym_sha256,
    ACTIONS(234), 1,
      anon_sym_md5,
    ACTIONS(237), 1,
      anon_sym_bytes,
    STATE(20), 1,
      sym_query,
    STATE(17), 2,
      sym_assert,
      aux_sym_asserts_section_repeat1,
    ACTIONS(197), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    STATE(93), 13,
      sym_status_query,
      sym_url_query,
      sym_header_query,
      sym_cookie_query,
      sym_body_query,
      sym_xpath_query,
      sym_jsonpath_query,
      sym_regex_query,
      sym_variable_query,
      sym_duration_query,
      sym_sha256_query,
      sym_md5_query,
      sym_bytes_query,
    ACTIONS(199), 32,
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
      anon_sym_LBRACKCaptures_RBRACK,
      anon_sym_LBRACKAsserts_RBRACK,
      anon_sym_file_COMMA,
      anon_sym_LT,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      aux_sym_digit_token1,
      sym_comment,
  [202] = 18,
    ACTIONS(171), 1,
      anon_sym_variable,
    ACTIONS(173), 1,
      anon_sym_status,
    ACTIONS(175), 1,
      anon_sym_url,
    ACTIONS(177), 1,
      anon_sym_header,
    ACTIONS(179), 1,
      anon_sym_cookie,
    ACTIONS(181), 1,
      anon_sym_body,
    ACTIONS(183), 1,
      anon_sym_xpath,
    ACTIONS(185), 1,
      anon_sym_jsonpath,
    ACTIONS(187), 1,
      anon_sym_regex,
    ACTIONS(189), 1,
      anon_sym_duration,
    ACTIONS(191), 1,
      anon_sym_sha256,
    ACTIONS(193), 1,
      anon_sym_md5,
    ACTIONS(195), 1,
      anon_sym_bytes,
    STATE(20), 1,
      sym_query,
    STATE(17), 2,
      sym_assert,
      aux_sym_asserts_section_repeat1,
    ACTIONS(240), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    STATE(93), 13,
      sym_status_query,
      sym_url_query,
      sym_header_query,
      sym_cookie_query,
      sym_body_query,
      sym_xpath_query,
      sym_jsonpath_query,
      sym_regex_query,
      sym_variable_query,
      sym_duration_query,
      sym_sha256_query,
      sym_md5_query,
      sym_bytes_query,
    ACTIONS(242), 32,
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
      anon_sym_LBRACKCaptures_RBRACK,
      anon_sym_LBRACKAsserts_RBRACK,
      anon_sym_file_COMMA,
      anon_sym_LT,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      aux_sym_digit_token1,
      sym_comment,
  [303] = 31,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(244), 1,
      anon_sym_regex,
    ACTIONS(246), 1,
      anon_sym_not,
    ACTIONS(260), 1,
      anon_sym_startsWith,
    ACTIONS(262), 1,
      anon_sym_endsWith,
    ACTIONS(264), 1,
      anon_sym_contains,
    ACTIONS(266), 1,
      anon_sym_matches,
    ACTIONS(268), 1,
      anon_sym_exists,
    ACTIONS(270), 1,
      anon_sym_includes,
    ACTIONS(272), 1,
      anon_sym_isInteger,
    ACTIONS(274), 1,
      anon_sym_isFloat,
    ACTIONS(276), 1,
      anon_sym_isBoolean,
    ACTIONS(278), 1,
      anon_sym_isString,
    ACTIONS(280), 1,
      anon_sym_isCollection,
    ACTIONS(282), 1,
      anon_sym_count,
    ACTIONS(284), 1,
      anon_sym_urlEncode,
    ACTIONS(286), 1,
      anon_sym_urlDecode,
    ACTIONS(288), 1,
      anon_sym_htmlEscape,
    ACTIONS(290), 1,
      anon_sym_htmlUnescape,
    ACTIONS(292), 1,
      anon_sym_toInt,
    STATE(392), 1,
      sym_predicate,
    STATE(537), 1,
      sym_predicate_func,
    ACTIONS(248), 2,
      anon_sym_equals,
      anon_sym_EQ_EQ,
    ACTIONS(250), 2,
      anon_sym_notEquals,
      anon_sym_BANG_EQ,
    ACTIONS(252), 2,
      anon_sym_greaterThan,
      anon_sym_GT,
    ACTIONS(254), 2,
      anon_sym_greaterThanOrEquals,
      anon_sym_GT_EQ,
    ACTIONS(256), 2,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(258), 2,
      anon_sym_lessThanOrEquals,
      anon_sym_LT_EQ,
    STATE(62), 2,
      sym_filter,
      aux_sym_capture_repeat1,
    STATE(81), 7,
      sym_regex_filter,
      sym_count_filter,
      sym_url_encode_filter,
      sym_url_decode_filter,
      sym_html_encode_filter,
      sym_html_decode_filter,
      sym_to_int_filter,
    STATE(536), 17,
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
      sym_exist_predicate,
      sym_include_predicate,
      sym_integer_predicate,
      sym_float_predicate,
      sym_boolean_predicate,
      sym_string_predicate,
      sym_collection_predicate,
  [426] = 31,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(244), 1,
      anon_sym_regex,
    ACTIONS(246), 1,
      anon_sym_not,
    ACTIONS(260), 1,
      anon_sym_startsWith,
    ACTIONS(262), 1,
      anon_sym_endsWith,
    ACTIONS(264), 1,
      anon_sym_contains,
    ACTIONS(266), 1,
      anon_sym_matches,
    ACTIONS(268), 1,
      anon_sym_exists,
    ACTIONS(270), 1,
      anon_sym_includes,
    ACTIONS(272), 1,
      anon_sym_isInteger,
    ACTIONS(274), 1,
      anon_sym_isFloat,
    ACTIONS(276), 1,
      anon_sym_isBoolean,
    ACTIONS(278), 1,
      anon_sym_isString,
    ACTIONS(280), 1,
      anon_sym_isCollection,
    ACTIONS(282), 1,
      anon_sym_count,
    ACTIONS(284), 1,
      anon_sym_urlEncode,
    ACTIONS(286), 1,
      anon_sym_urlDecode,
    ACTIONS(288), 1,
      anon_sym_htmlEscape,
    ACTIONS(290), 1,
      anon_sym_htmlUnescape,
    ACTIONS(292), 1,
      anon_sym_toInt,
    STATE(350), 1,
      sym_predicate,
    STATE(537), 1,
      sym_predicate_func,
    ACTIONS(248), 2,
      anon_sym_equals,
      anon_sym_EQ_EQ,
    ACTIONS(250), 2,
      anon_sym_notEquals,
      anon_sym_BANG_EQ,
    ACTIONS(252), 2,
      anon_sym_greaterThan,
      anon_sym_GT,
    ACTIONS(254), 2,
      anon_sym_greaterThanOrEquals,
      anon_sym_GT_EQ,
    ACTIONS(256), 2,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(258), 2,
      anon_sym_lessThanOrEquals,
      anon_sym_LT_EQ,
    STATE(19), 2,
      sym_filter,
      aux_sym_capture_repeat1,
    STATE(81), 7,
      sym_regex_filter,
      sym_count_filter,
      sym_url_encode_filter,
      sym_url_decode_filter,
      sym_html_encode_filter,
      sym_html_decode_filter,
      sym_to_int_filter,
    STATE(536), 17,
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
      sym_exist_predicate,
      sym_include_predicate,
      sym_integer_predicate,
      sym_float_predicate,
      sym_boolean_predicate,
      sym_string_predicate,
      sym_collection_predicate,
  [549] = 25,
    ACTIONS(31), 1,
      anon_sym_file_COMMA,
    ACTIONS(33), 1,
      anon_sym_LT,
    ACTIONS(35), 1,
      anon_sym_base64_COMMA,
    ACTIONS(37), 1,
      anon_sym_hex_COMMA,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_BQUOTE,
    ACTIONS(47), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(49), 1,
      anon_sym_LBRACE,
    ACTIONS(51), 1,
      anon_sym_LBRACK,
    ACTIONS(53), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(57), 1,
      anon_sym_null,
    ACTIONS(59), 1,
      aux_sym_digit_token1,
    ACTIONS(79), 1,
      anon_sym_LBRACKCaptures_RBRACK,
    ACTIONS(81), 1,
      anon_sym_LBRACKAsserts_RBRACK,
    STATE(120), 1,
      sym_body,
    STATE(240), 1,
      sym_integer,
    STATE(416), 1,
      sym_bytes,
    ACTIONS(55), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(101), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(63), 2,
      sym_response_section,
      aux_sym_response_repeat1,
    STATE(69), 2,
      sym_captures_section,
      sym_asserts_section,
    STATE(217), 2,
      sym_digit,
      aux_sym_integer_repeat1,
    STATE(482), 7,
      sym_json_object,
      sym_json_array,
      sym_json_string,
      sym_json_number,
      sym_template,
      sym_boolean,
      sym_null,
    STATE(484), 7,
      sym_xml,
      sym_oneline_base64,
      sym_oneline_file,
      sym_oneline_hex,
      sym_oneline_string,
      sym_multiline_string,
      sym_json_value,
    ACTIONS(103), 17,
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
      sym_comment,
  [658] = 25,
    ACTIONS(31), 1,
      anon_sym_file_COMMA,
    ACTIONS(33), 1,
      anon_sym_LT,
    ACTIONS(35), 1,
      anon_sym_base64_COMMA,
    ACTIONS(37), 1,
      anon_sym_hex_COMMA,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_BQUOTE,
    ACTIONS(47), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(49), 1,
      anon_sym_LBRACE,
    ACTIONS(51), 1,
      anon_sym_LBRACK,
    ACTIONS(53), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(57), 1,
      anon_sym_null,
    ACTIONS(59), 1,
      aux_sym_digit_token1,
    ACTIONS(79), 1,
      anon_sym_LBRACKCaptures_RBRACK,
    ACTIONS(81), 1,
      anon_sym_LBRACKAsserts_RBRACK,
    STATE(121), 1,
      sym_body,
    STATE(240), 1,
      sym_integer,
    STATE(416), 1,
      sym_bytes,
    ACTIONS(55), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(294), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(63), 2,
      sym_response_section,
      aux_sym_response_repeat1,
    STATE(69), 2,
      sym_captures_section,
      sym_asserts_section,
    STATE(217), 2,
      sym_digit,
      aux_sym_integer_repeat1,
    STATE(482), 7,
      sym_json_object,
      sym_json_array,
      sym_json_string,
      sym_json_number,
      sym_template,
      sym_boolean,
      sym_null,
    STATE(484), 7,
      sym_xml,
      sym_oneline_base64,
      sym_oneline_file,
      sym_oneline_hex,
      sym_oneline_string,
      sym_multiline_string,
      sym_json_value,
    ACTIONS(296), 17,
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
      sym_comment,
  [767] = 10,
    ACTIONS(302), 1,
      sym_key_string_text,
    ACTIONS(305), 1,
      anon_sym_BSLASH2,
    ACTIONS(308), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(331), 1,
      sym_key_value,
    STATE(483), 1,
      sym_key_string,
    ACTIONS(298), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(23), 2,
      sym_header,
      aux_sym_request_repeat1,
    STATE(218), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(150), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
    ACTIONS(300), 40,
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
      anon_sym_LBRACKBasicAuth_RBRACK,
      anon_sym_LBRACKQueryStringParams_RBRACK,
      anon_sym_LBRACKFormParams_RBRACK,
      anon_sym_LBRACKMultipartFormData_RBRACK,
      anon_sym_LBRACKCookies_RBRACK,
      anon_sym_LBRACKOptions_RBRACK,
      anon_sym_file_COMMA,
      anon_sym_LT,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      aux_sym_digit_token1,
      sym_comment,
  [842] = 10,
    ACTIONS(41), 1,
      sym_key_string_text,
    ACTIONS(43), 1,
      anon_sym_BSLASH2,
    ACTIONS(315), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(439), 1,
      sym_key_string,
    STATE(493), 1,
      sym_multipart_form_data_param,
    ACTIONS(311), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(218), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(458), 2,
      sym_key_value,
      sym_file_param,
    STATE(150), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
    ACTIONS(313), 40,
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
      anon_sym_LBRACKBasicAuth_RBRACK,
      anon_sym_LBRACKQueryStringParams_RBRACK,
      anon_sym_LBRACKFormParams_RBRACK,
      anon_sym_LBRACKMultipartFormData_RBRACK,
      anon_sym_LBRACKCookies_RBRACK,
      anon_sym_LBRACKOptions_RBRACK,
      anon_sym_file_COMMA,
      anon_sym_LT,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      aux_sym_digit_token1,
      sym_comment,
  [917] = 10,
    ACTIONS(41), 1,
      sym_key_string_text,
    ACTIONS(43), 1,
      anon_sym_BSLASH2,
    ACTIONS(315), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(439), 1,
      sym_key_string,
    STATE(493), 1,
      sym_multipart_form_data_param,
    ACTIONS(317), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(218), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(458), 2,
      sym_key_value,
      sym_file_param,
    STATE(150), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
    ACTIONS(319), 40,
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
      anon_sym_LBRACKBasicAuth_RBRACK,
      anon_sym_LBRACKQueryStringParams_RBRACK,
      anon_sym_LBRACKFormParams_RBRACK,
      anon_sym_LBRACKMultipartFormData_RBRACK,
      anon_sym_LBRACKCookies_RBRACK,
      anon_sym_LBRACKOptions_RBRACK,
      anon_sym_file_COMMA,
      anon_sym_LT,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      aux_sym_digit_token1,
      sym_comment,
  [992] = 10,
    ACTIONS(41), 1,
      sym_key_string_text,
    ACTIONS(43), 1,
      anon_sym_BSLASH2,
    ACTIONS(315), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(439), 1,
      sym_key_string,
    STATE(493), 1,
      sym_multipart_form_data_param,
    ACTIONS(321), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(218), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(458), 2,
      sym_key_value,
      sym_file_param,
    STATE(150), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
    ACTIONS(323), 40,
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
      anon_sym_LBRACKBasicAuth_RBRACK,
      anon_sym_LBRACKQueryStringParams_RBRACK,
      anon_sym_LBRACKFormParams_RBRACK,
      anon_sym_LBRACKMultipartFormData_RBRACK,
      anon_sym_LBRACKCookies_RBRACK,
      anon_sym_LBRACKOptions_RBRACK,
      anon_sym_file_COMMA,
      anon_sym_LT,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      aux_sym_digit_token1,
      sym_comment,
  [1067] = 2,
    ACTIONS(325), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(327), 50,
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
      anon_sym_LBRACKBasicAuth_RBRACK,
      anon_sym_LBRACKQueryStringParams_RBRACK,
      anon_sym_LBRACKFormParams_RBRACK,
      anon_sym_LBRACKMultipartFormData_RBRACK,
      anon_sym_LBRACKCookies_RBRACK,
      anon_sym_LBRACKOptions_RBRACK,
      anon_sym_file_COMMA,
      anon_sym_cacert,
      anon_sym_location,
      anon_sym_insecure,
      anon_sym_max_DASHredirs,
      anon_sym_retry,
      anon_sym_retry_DASHinterval,
      anon_sym_retry_DASHmax_DASHcount,
      anon_sym_variable,
      anon_sym_verbose,
      anon_sym_very_DASHverbose,
      anon_sym_LT,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      aux_sym_digit_token1,
      sym_comment,
  [1125] = 2,
    ACTIONS(329), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(331), 50,
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
      anon_sym_LBRACKBasicAuth_RBRACK,
      anon_sym_LBRACKQueryStringParams_RBRACK,
      anon_sym_LBRACKFormParams_RBRACK,
      anon_sym_LBRACKMultipartFormData_RBRACK,
      anon_sym_LBRACKCookies_RBRACK,
      anon_sym_LBRACKOptions_RBRACK,
      anon_sym_file_COMMA,
      anon_sym_cacert,
      anon_sym_location,
      anon_sym_insecure,
      anon_sym_max_DASHredirs,
      anon_sym_retry,
      anon_sym_retry_DASHinterval,
      anon_sym_retry_DASHmax_DASHcount,
      anon_sym_variable,
      anon_sym_verbose,
      anon_sym_very_DASHverbose,
      anon_sym_LT,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      aux_sym_digit_token1,
      sym_comment,
  [1183] = 2,
    ACTIONS(333), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(335), 50,
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
      anon_sym_LBRACKBasicAuth_RBRACK,
      anon_sym_LBRACKQueryStringParams_RBRACK,
      anon_sym_LBRACKFormParams_RBRACK,
      anon_sym_LBRACKMultipartFormData_RBRACK,
      anon_sym_LBRACKCookies_RBRACK,
      anon_sym_LBRACKOptions_RBRACK,
      anon_sym_file_COMMA,
      anon_sym_cacert,
      anon_sym_location,
      anon_sym_insecure,
      anon_sym_max_DASHredirs,
      anon_sym_retry,
      anon_sym_retry_DASHinterval,
      anon_sym_retry_DASHmax_DASHcount,
      anon_sym_variable,
      anon_sym_verbose,
      anon_sym_very_DASHverbose,
      anon_sym_LT,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      aux_sym_digit_token1,
      sym_comment,
  [1241] = 2,
    ACTIONS(337), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(339), 50,
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
      anon_sym_LBRACKBasicAuth_RBRACK,
      anon_sym_LBRACKQueryStringParams_RBRACK,
      anon_sym_LBRACKFormParams_RBRACK,
      anon_sym_LBRACKMultipartFormData_RBRACK,
      anon_sym_LBRACKCookies_RBRACK,
      anon_sym_LBRACKOptions_RBRACK,
      anon_sym_file_COMMA,
      anon_sym_cacert,
      anon_sym_location,
      anon_sym_insecure,
      anon_sym_max_DASHredirs,
      anon_sym_retry,
      anon_sym_retry_DASHinterval,
      anon_sym_retry_DASHmax_DASHcount,
      anon_sym_variable,
      anon_sym_verbose,
      anon_sym_very_DASHverbose,
      anon_sym_LT,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      aux_sym_digit_token1,
      sym_comment,
  [1299] = 2,
    ACTIONS(341), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(343), 50,
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
      anon_sym_LBRACKBasicAuth_RBRACK,
      anon_sym_LBRACKQueryStringParams_RBRACK,
      anon_sym_LBRACKFormParams_RBRACK,
      anon_sym_LBRACKMultipartFormData_RBRACK,
      anon_sym_LBRACKCookies_RBRACK,
      anon_sym_LBRACKOptions_RBRACK,
      anon_sym_file_COMMA,
      anon_sym_cacert,
      anon_sym_location,
      anon_sym_insecure,
      anon_sym_max_DASHredirs,
      anon_sym_retry,
      anon_sym_retry_DASHinterval,
      anon_sym_retry_DASHmax_DASHcount,
      anon_sym_variable,
      anon_sym_verbose,
      anon_sym_very_DASHverbose,
      anon_sym_LT,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      aux_sym_digit_token1,
      sym_comment,
  [1357] = 2,
    ACTIONS(345), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(347), 50,
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
      anon_sym_LBRACKBasicAuth_RBRACK,
      anon_sym_LBRACKQueryStringParams_RBRACK,
      anon_sym_LBRACKFormParams_RBRACK,
      anon_sym_LBRACKMultipartFormData_RBRACK,
      anon_sym_LBRACKCookies_RBRACK,
      anon_sym_LBRACKOptions_RBRACK,
      anon_sym_file_COMMA,
      anon_sym_cacert,
      anon_sym_location,
      anon_sym_insecure,
      anon_sym_max_DASHredirs,
      anon_sym_retry,
      anon_sym_retry_DASHinterval,
      anon_sym_retry_DASHmax_DASHcount,
      anon_sym_variable,
      anon_sym_verbose,
      anon_sym_very_DASHverbose,
      anon_sym_LT,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      aux_sym_digit_token1,
      sym_comment,
  [1415] = 2,
    ACTIONS(349), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(351), 50,
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
      anon_sym_LBRACKBasicAuth_RBRACK,
      anon_sym_LBRACKQueryStringParams_RBRACK,
      anon_sym_LBRACKFormParams_RBRACK,
      anon_sym_LBRACKMultipartFormData_RBRACK,
      anon_sym_LBRACKCookies_RBRACK,
      anon_sym_LBRACKOptions_RBRACK,
      anon_sym_file_COMMA,
      anon_sym_cacert,
      anon_sym_location,
      anon_sym_insecure,
      anon_sym_max_DASHredirs,
      anon_sym_retry,
      anon_sym_retry_DASHinterval,
      anon_sym_retry_DASHmax_DASHcount,
      anon_sym_variable,
      anon_sym_verbose,
      anon_sym_very_DASHverbose,
      anon_sym_LT,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      aux_sym_digit_token1,
      sym_comment,
  [1473] = 2,
    ACTIONS(353), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(355), 50,
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
      anon_sym_LBRACKBasicAuth_RBRACK,
      anon_sym_LBRACKQueryStringParams_RBRACK,
      anon_sym_LBRACKFormParams_RBRACK,
      anon_sym_LBRACKMultipartFormData_RBRACK,
      anon_sym_LBRACKCookies_RBRACK,
      anon_sym_LBRACKOptions_RBRACK,
      anon_sym_file_COMMA,
      anon_sym_cacert,
      anon_sym_location,
      anon_sym_insecure,
      anon_sym_max_DASHredirs,
      anon_sym_retry,
      anon_sym_retry_DASHinterval,
      anon_sym_retry_DASHmax_DASHcount,
      anon_sym_variable,
      anon_sym_verbose,
      anon_sym_very_DASHverbose,
      anon_sym_LT,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      aux_sym_digit_token1,
      sym_comment,
  [1531] = 2,
    ACTIONS(357), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(359), 50,
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
      anon_sym_LBRACKBasicAuth_RBRACK,
      anon_sym_LBRACKQueryStringParams_RBRACK,
      anon_sym_LBRACKFormParams_RBRACK,
      anon_sym_LBRACKMultipartFormData_RBRACK,
      anon_sym_LBRACKCookies_RBRACK,
      anon_sym_LBRACKOptions_RBRACK,
      anon_sym_file_COMMA,
      anon_sym_cacert,
      anon_sym_location,
      anon_sym_insecure,
      anon_sym_max_DASHredirs,
      anon_sym_retry,
      anon_sym_retry_DASHinterval,
      anon_sym_retry_DASHmax_DASHcount,
      anon_sym_variable,
      anon_sym_verbose,
      anon_sym_very_DASHverbose,
      anon_sym_LT,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      aux_sym_digit_token1,
      sym_comment,
  [1589] = 2,
    ACTIONS(361), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(363), 50,
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
      anon_sym_LBRACKBasicAuth_RBRACK,
      anon_sym_LBRACKQueryStringParams_RBRACK,
      anon_sym_LBRACKFormParams_RBRACK,
      anon_sym_LBRACKMultipartFormData_RBRACK,
      anon_sym_LBRACKCookies_RBRACK,
      anon_sym_LBRACKOptions_RBRACK,
      anon_sym_file_COMMA,
      anon_sym_cacert,
      anon_sym_location,
      anon_sym_insecure,
      anon_sym_max_DASHredirs,
      anon_sym_retry,
      anon_sym_retry_DASHinterval,
      anon_sym_retry_DASHmax_DASHcount,
      anon_sym_variable,
      anon_sym_verbose,
      anon_sym_very_DASHverbose,
      anon_sym_LT,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      aux_sym_digit_token1,
      sym_comment,
  [1647] = 2,
    ACTIONS(365), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(367), 50,
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
      anon_sym_LBRACKBasicAuth_RBRACK,
      anon_sym_LBRACKQueryStringParams_RBRACK,
      anon_sym_LBRACKFormParams_RBRACK,
      anon_sym_LBRACKMultipartFormData_RBRACK,
      anon_sym_LBRACKCookies_RBRACK,
      anon_sym_LBRACKOptions_RBRACK,
      anon_sym_file_COMMA,
      anon_sym_cacert,
      anon_sym_location,
      anon_sym_insecure,
      anon_sym_max_DASHredirs,
      anon_sym_retry,
      anon_sym_retry_DASHinterval,
      anon_sym_retry_DASHmax_DASHcount,
      anon_sym_variable,
      anon_sym_verbose,
      anon_sym_very_DASHverbose,
      anon_sym_LT,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      aux_sym_digit_token1,
      sym_comment,
  [1705] = 2,
    ACTIONS(369), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(371), 50,
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
      anon_sym_LBRACKBasicAuth_RBRACK,
      anon_sym_LBRACKQueryStringParams_RBRACK,
      anon_sym_LBRACKFormParams_RBRACK,
      anon_sym_LBRACKMultipartFormData_RBRACK,
      anon_sym_LBRACKCookies_RBRACK,
      anon_sym_LBRACKOptions_RBRACK,
      anon_sym_file_COMMA,
      anon_sym_cacert,
      anon_sym_location,
      anon_sym_insecure,
      anon_sym_max_DASHredirs,
      anon_sym_retry,
      anon_sym_retry_DASHinterval,
      anon_sym_retry_DASHmax_DASHcount,
      anon_sym_variable,
      anon_sym_verbose,
      anon_sym_very_DASHverbose,
      anon_sym_LT,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      aux_sym_digit_token1,
      sym_comment,
  [1763] = 9,
    ACTIONS(41), 1,
      sym_key_string_text,
    ACTIONS(43), 1,
      anon_sym_BSLASH2,
    ACTIONS(315), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(483), 1,
      sym_key_string,
    STATE(489), 1,
      sym_key_value,
    ACTIONS(373), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(218), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(150), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
    ACTIONS(375), 40,
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
      anon_sym_LBRACKBasicAuth_RBRACK,
      anon_sym_LBRACKQueryStringParams_RBRACK,
      anon_sym_LBRACKFormParams_RBRACK,
      anon_sym_LBRACKMultipartFormData_RBRACK,
      anon_sym_LBRACKCookies_RBRACK,
      anon_sym_LBRACKOptions_RBRACK,
      anon_sym_file_COMMA,
      anon_sym_LT,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      aux_sym_digit_token1,
      sym_comment,
  [1834] = 9,
    ACTIONS(41), 1,
      sym_key_string_text,
    ACTIONS(43), 1,
      anon_sym_BSLASH2,
    ACTIONS(315), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(483), 1,
      sym_key_string,
    STATE(489), 1,
      sym_key_value,
    ACTIONS(377), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(218), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(150), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
    ACTIONS(379), 40,
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
      anon_sym_LBRACKBasicAuth_RBRACK,
      anon_sym_LBRACKQueryStringParams_RBRACK,
      anon_sym_LBRACKFormParams_RBRACK,
      anon_sym_LBRACKMultipartFormData_RBRACK,
      anon_sym_LBRACKCookies_RBRACK,
      anon_sym_LBRACKOptions_RBRACK,
      anon_sym_file_COMMA,
      anon_sym_LT,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      aux_sym_digit_token1,
      sym_comment,
  [1905] = 9,
    ACTIONS(41), 1,
      sym_key_string_text,
    ACTIONS(43), 1,
      anon_sym_BSLASH2,
    ACTIONS(315), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(483), 1,
      sym_key_string,
    STATE(489), 1,
      sym_key_value,
    ACTIONS(381), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(218), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(150), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
    ACTIONS(383), 40,
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
      anon_sym_LBRACKBasicAuth_RBRACK,
      anon_sym_LBRACKQueryStringParams_RBRACK,
      anon_sym_LBRACKFormParams_RBRACK,
      anon_sym_LBRACKMultipartFormData_RBRACK,
      anon_sym_LBRACKCookies_RBRACK,
      anon_sym_LBRACKOptions_RBRACK,
      anon_sym_file_COMMA,
      anon_sym_LT,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      aux_sym_digit_token1,
      sym_comment,
  [1976] = 9,
    ACTIONS(41), 1,
      sym_key_string_text,
    ACTIONS(43), 1,
      anon_sym_BSLASH2,
    ACTIONS(315), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(483), 1,
      sym_key_string,
    STATE(489), 1,
      sym_key_value,
    ACTIONS(385), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(218), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(150), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
    ACTIONS(387), 40,
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
      anon_sym_LBRACKBasicAuth_RBRACK,
      anon_sym_LBRACKQueryStringParams_RBRACK,
      anon_sym_LBRACKFormParams_RBRACK,
      anon_sym_LBRACKMultipartFormData_RBRACK,
      anon_sym_LBRACKCookies_RBRACK,
      anon_sym_LBRACKOptions_RBRACK,
      anon_sym_file_COMMA,
      anon_sym_LT,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      aux_sym_digit_token1,
      sym_comment,
  [2047] = 9,
    ACTIONS(41), 1,
      sym_key_string_text,
    ACTIONS(43), 1,
      anon_sym_BSLASH2,
    ACTIONS(315), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(483), 1,
      sym_key_string,
    STATE(489), 1,
      sym_key_value,
    ACTIONS(389), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(218), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(150), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
    ACTIONS(391), 40,
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
      anon_sym_LBRACKBasicAuth_RBRACK,
      anon_sym_LBRACKQueryStringParams_RBRACK,
      anon_sym_LBRACKFormParams_RBRACK,
      anon_sym_LBRACKMultipartFormData_RBRACK,
      anon_sym_LBRACKCookies_RBRACK,
      anon_sym_LBRACKOptions_RBRACK,
      anon_sym_file_COMMA,
      anon_sym_LT,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      aux_sym_digit_token1,
      sym_comment,
  [2118] = 9,
    ACTIONS(41), 1,
      sym_key_string_text,
    ACTIONS(43), 1,
      anon_sym_BSLASH2,
    ACTIONS(315), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(483), 1,
      sym_key_string,
    STATE(489), 1,
      sym_key_value,
    ACTIONS(393), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(218), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(150), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
    ACTIONS(395), 40,
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
      anon_sym_LBRACKBasicAuth_RBRACK,
      anon_sym_LBRACKQueryStringParams_RBRACK,
      anon_sym_LBRACKFormParams_RBRACK,
      anon_sym_LBRACKMultipartFormData_RBRACK,
      anon_sym_LBRACKCookies_RBRACK,
      anon_sym_LBRACKOptions_RBRACK,
      anon_sym_file_COMMA,
      anon_sym_LT,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      aux_sym_digit_token1,
      sym_comment,
  [2189] = 9,
    ACTIONS(41), 1,
      sym_key_string_text,
    ACTIONS(43), 1,
      anon_sym_BSLASH2,
    ACTIONS(315), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(483), 1,
      sym_key_string,
    STATE(489), 1,
      sym_key_value,
    ACTIONS(397), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(218), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(150), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
    ACTIONS(399), 40,
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
      anon_sym_LBRACKBasicAuth_RBRACK,
      anon_sym_LBRACKQueryStringParams_RBRACK,
      anon_sym_LBRACKFormParams_RBRACK,
      anon_sym_LBRACKMultipartFormData_RBRACK,
      anon_sym_LBRACKCookies_RBRACK,
      anon_sym_LBRACKOptions_RBRACK,
      anon_sym_file_COMMA,
      anon_sym_LT,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      aux_sym_digit_token1,
      sym_comment,
  [2260] = 9,
    ACTIONS(41), 1,
      sym_key_string_text,
    ACTIONS(43), 1,
      anon_sym_BSLASH2,
    ACTIONS(315), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(483), 1,
      sym_key_string,
    STATE(489), 1,
      sym_key_value,
    ACTIONS(401), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(218), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(150), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
    ACTIONS(403), 40,
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
      anon_sym_LBRACKBasicAuth_RBRACK,
      anon_sym_LBRACKQueryStringParams_RBRACK,
      anon_sym_LBRACKFormParams_RBRACK,
      anon_sym_LBRACKMultipartFormData_RBRACK,
      anon_sym_LBRACKCookies_RBRACK,
      anon_sym_LBRACKOptions_RBRACK,
      anon_sym_file_COMMA,
      anon_sym_LT,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      aux_sym_digit_token1,
      sym_comment,
  [2331] = 9,
    ACTIONS(41), 1,
      sym_key_string_text,
    ACTIONS(43), 1,
      anon_sym_BSLASH2,
    ACTIONS(315), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(483), 1,
      sym_key_string,
    STATE(489), 1,
      sym_key_value,
    ACTIONS(405), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(218), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(150), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
    ACTIONS(407), 40,
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
      anon_sym_LBRACKBasicAuth_RBRACK,
      anon_sym_LBRACKQueryStringParams_RBRACK,
      anon_sym_LBRACKFormParams_RBRACK,
      anon_sym_LBRACKMultipartFormData_RBRACK,
      anon_sym_LBRACKCookies_RBRACK,
      anon_sym_LBRACKOptions_RBRACK,
      anon_sym_file_COMMA,
      anon_sym_LT,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      aux_sym_digit_token1,
      sym_comment,
  [2402] = 10,
    ACTIONS(413), 1,
      anon_sym_LBRACKBasicAuth_RBRACK,
    ACTIONS(416), 1,
      anon_sym_LBRACKQueryStringParams_RBRACK,
    ACTIONS(419), 1,
      anon_sym_LBRACKFormParams_RBRACK,
    ACTIONS(422), 1,
      anon_sym_LBRACKMultipartFormData_RBRACK,
    ACTIONS(425), 1,
      anon_sym_LBRACKCookies_RBRACK,
    ACTIONS(428), 1,
      anon_sym_LBRACKOptions_RBRACK,
    STATE(48), 2,
      sym_request_section,
      aux_sym_request_repeat2,
    ACTIONS(409), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    STATE(60), 6,
      sym_basic_auth_section,
      sym_query_string_params_section,
      sym_form_params_section,
      sym_multipart_form_data_section,
      sym_cookies_section,
      sym_options_section,
    ACTIONS(411), 34,
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
      anon_sym_file_COMMA,
      anon_sym_LT,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      aux_sym_digit_token1,
      sym_comment,
  [2474] = 2,
    ACTIONS(431), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(433), 45,
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
      anon_sym_LBRACKCaptures_RBRACK,
      anon_sym_LBRACKAsserts_RBRACK,
      anon_sym_file_COMMA,
      anon_sym_variable,
      anon_sym_status,
      anon_sym_url,
      anon_sym_header,
      anon_sym_cookie,
      anon_sym_body,
      anon_sym_xpath,
      anon_sym_jsonpath,
      anon_sym_regex,
      anon_sym_duration,
      anon_sym_sha256,
      anon_sym_md5,
      anon_sym_bytes,
      anon_sym_LT,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      aux_sym_digit_token1,
      sym_comment,
  [2527] = 6,
    ACTIONS(437), 1,
      anon_sym_LF,
    ACTIONS(442), 1,
      sym_comment,
    STATE(52), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(50), 2,
      sym__comment_or_new_line,
      aux_sym_hurl_file_repeat2,
    ACTIONS(435), 3,
      ts_builtin_sym_end,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(440), 40,
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
      anon_sym_LBRACKBasicAuth_RBRACK,
      anon_sym_LBRACKQueryStringParams_RBRACK,
      anon_sym_LBRACKFormParams_RBRACK,
      anon_sym_LBRACKMultipartFormData_RBRACK,
      anon_sym_LBRACKCookies_RBRACK,
      anon_sym_LBRACKOptions_RBRACK,
      anon_sym_file_COMMA,
      anon_sym_LT,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      sym_key_string_text,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      aux_sym_digit_token1,
  [2588] = 2,
    ACTIONS(445), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(447), 45,
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
      anon_sym_LBRACKCaptures_RBRACK,
      anon_sym_LBRACKAsserts_RBRACK,
      anon_sym_file_COMMA,
      anon_sym_variable,
      anon_sym_status,
      anon_sym_url,
      anon_sym_header,
      anon_sym_cookie,
      anon_sym_body,
      anon_sym_xpath,
      anon_sym_jsonpath,
      anon_sym_regex,
      anon_sym_duration,
      anon_sym_sha256,
      anon_sym_md5,
      anon_sym_bytes,
      anon_sym_LT,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      aux_sym_digit_token1,
      sym_comment,
  [2641] = 5,
    ACTIONS(449), 1,
      anon_sym_LF,
    ACTIONS(451), 1,
      sym_comment,
    STATE(53), 1,
      aux_sym__comment_or_new_line_repeat1,
    ACTIONS(83), 3,
      ts_builtin_sym_end,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(87), 40,
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
      anon_sym_LBRACKBasicAuth_RBRACK,
      anon_sym_LBRACKQueryStringParams_RBRACK,
      anon_sym_LBRACKFormParams_RBRACK,
      anon_sym_LBRACKMultipartFormData_RBRACK,
      anon_sym_LBRACKCookies_RBRACK,
      anon_sym_LBRACKOptions_RBRACK,
      anon_sym_file_COMMA,
      anon_sym_LT,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      sym_key_string_text,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      aux_sym_digit_token1,
  [2698] = 5,
    ACTIONS(453), 1,
      anon_sym_LF,
    ACTIONS(456), 1,
      sym_comment,
    STATE(53), 1,
      aux_sym__comment_or_new_line_repeat1,
    ACTIONS(91), 3,
      ts_builtin_sym_end,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(96), 40,
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
      anon_sym_LBRACKBasicAuth_RBRACK,
      anon_sym_LBRACKQueryStringParams_RBRACK,
      anon_sym_LBRACKFormParams_RBRACK,
      anon_sym_LBRACKMultipartFormData_RBRACK,
      anon_sym_LBRACKCookies_RBRACK,
      anon_sym_LBRACKOptions_RBRACK,
      anon_sym_file_COMMA,
      anon_sym_LT,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      sym_key_string_text,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      aux_sym_digit_token1,
  [2755] = 10,
    ACTIONS(302), 1,
      sym_key_string_text,
    ACTIONS(305), 1,
      anon_sym_BSLASH2,
    ACTIONS(308), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(396), 1,
      sym_key_value,
    STATE(483), 1,
      sym_key_string,
    ACTIONS(298), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(54), 2,
      sym_header,
      aux_sym_request_repeat1,
    STATE(218), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(150), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
    ACTIONS(300), 32,
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
      anon_sym_LBRACKCaptures_RBRACK,
      anon_sym_LBRACKAsserts_RBRACK,
      anon_sym_file_COMMA,
      anon_sym_LT,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      aux_sym_digit_token1,
      sym_comment,
  [2822] = 9,
    ACTIONS(463), 1,
      sym_key_string_text,
    ACTIONS(465), 1,
      anon_sym_BSLASH2,
    ACTIONS(467), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(533), 1,
      sym_key_string,
    ACTIONS(459), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(58), 2,
      sym_capture,
      aux_sym_captures_section_repeat1,
    STATE(232), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(161), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
    ACTIONS(461), 32,
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
      anon_sym_LBRACKCaptures_RBRACK,
      anon_sym_LBRACKAsserts_RBRACK,
      anon_sym_file_COMMA,
      anon_sym_LT,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      aux_sym_digit_token1,
      sym_comment,
  [2886] = 9,
    ACTIONS(463), 1,
      sym_key_string_text,
    ACTIONS(465), 1,
      anon_sym_BSLASH2,
    ACTIONS(467), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(533), 1,
      sym_key_string,
    ACTIONS(469), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(55), 2,
      sym_capture,
      aux_sym_captures_section_repeat1,
    STATE(232), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(161), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
    ACTIONS(471), 32,
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
      anon_sym_LBRACKCaptures_RBRACK,
      anon_sym_LBRACKAsserts_RBRACK,
      anon_sym_file_COMMA,
      anon_sym_LT,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      aux_sym_digit_token1,
      sym_comment,
  [2950] = 2,
    ACTIONS(473), 4,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(475), 41,
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
      anon_sym_LBRACKBasicAuth_RBRACK,
      anon_sym_LBRACKQueryStringParams_RBRACK,
      anon_sym_LBRACKFormParams_RBRACK,
      anon_sym_LBRACKMultipartFormData_RBRACK,
      anon_sym_LBRACKCookies_RBRACK,
      anon_sym_LBRACKOptions_RBRACK,
      anon_sym_file_COMMA,
      anon_sym_LT,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      sym_key_string_text,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      aux_sym_digit_token1,
      sym_comment,
  [3000] = 9,
    ACTIONS(481), 1,
      sym_key_string_text,
    ACTIONS(484), 1,
      anon_sym_BSLASH2,
    ACTIONS(487), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(533), 1,
      sym_key_string,
    ACTIONS(477), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(58), 2,
      sym_capture,
      aux_sym_captures_section_repeat1,
    STATE(232), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(161), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
    ACTIONS(479), 32,
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
      anon_sym_LBRACKCaptures_RBRACK,
      anon_sym_LBRACKAsserts_RBRACK,
      anon_sym_file_COMMA,
      anon_sym_LT,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      aux_sym_digit_token1,
      sym_comment,
  [3064] = 2,
    ACTIONS(490), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(492), 40,
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
      anon_sym_LBRACKBasicAuth_RBRACK,
      anon_sym_LBRACKQueryStringParams_RBRACK,
      anon_sym_LBRACKFormParams_RBRACK,
      anon_sym_LBRACKMultipartFormData_RBRACK,
      anon_sym_LBRACKCookies_RBRACK,
      anon_sym_LBRACKOptions_RBRACK,
      anon_sym_file_COMMA,
      anon_sym_LT,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      aux_sym_digit_token1,
      sym_comment,
  [3112] = 2,
    ACTIONS(494), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(496), 40,
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
      anon_sym_LBRACKBasicAuth_RBRACK,
      anon_sym_LBRACKQueryStringParams_RBRACK,
      anon_sym_LBRACKFormParams_RBRACK,
      anon_sym_LBRACKMultipartFormData_RBRACK,
      anon_sym_LBRACKCookies_RBRACK,
      anon_sym_LBRACKOptions_RBRACK,
      anon_sym_file_COMMA,
      anon_sym_LT,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      aux_sym_digit_token1,
      sym_comment,
  [3160] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(260), 1,
      anon_sym_startsWith,
    ACTIONS(262), 1,
      anon_sym_endsWith,
    ACTIONS(264), 1,
      anon_sym_contains,
    ACTIONS(266), 1,
      anon_sym_matches,
    ACTIONS(268), 1,
      anon_sym_exists,
    ACTIONS(270), 1,
      anon_sym_includes,
    ACTIONS(272), 1,
      anon_sym_isInteger,
    ACTIONS(274), 1,
      anon_sym_isFloat,
    ACTIONS(276), 1,
      anon_sym_isBoolean,
    ACTIONS(278), 1,
      anon_sym_isString,
    ACTIONS(280), 1,
      anon_sym_isCollection,
    STATE(521), 1,
      sym_predicate_func,
    ACTIONS(248), 2,
      anon_sym_equals,
      anon_sym_EQ_EQ,
    ACTIONS(250), 2,
      anon_sym_notEquals,
      anon_sym_BANG_EQ,
    ACTIONS(252), 2,
      anon_sym_greaterThan,
      anon_sym_GT,
    ACTIONS(254), 2,
      anon_sym_greaterThanOrEquals,
      anon_sym_GT_EQ,
    ACTIONS(256), 2,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(258), 2,
      anon_sym_lessThanOrEquals,
      anon_sym_LT_EQ,
    STATE(536), 17,
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
      sym_exist_predicate,
      sym_include_predicate,
      sym_integer_predicate,
      sym_float_predicate,
      sym_boolean_predicate,
      sym_string_predicate,
      sym_collection_predicate,
  [3243] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(498), 1,
      anon_sym_regex,
    ACTIONS(505), 1,
      anon_sym_count,
    ACTIONS(508), 1,
      anon_sym_urlEncode,
    ACTIONS(511), 1,
      anon_sym_urlDecode,
    ACTIONS(514), 1,
      anon_sym_htmlEscape,
    ACTIONS(517), 1,
      anon_sym_htmlUnescape,
    ACTIONS(520), 1,
      anon_sym_toInt,
    STATE(62), 2,
      sym_filter,
      aux_sym_capture_repeat1,
    ACTIONS(501), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    STATE(81), 7,
      sym_regex_filter,
      sym_count_filter,
      sym_url_encode_filter,
      sym_url_decode_filter,
      sym_html_encode_filter,
      sym_html_decode_filter,
      sym_to_int_filter,
    ACTIONS(503), 20,
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
      anon_sym_exists,
      anon_sym_includes,
      anon_sym_isInteger,
      anon_sym_isFloat,
      anon_sym_isBoolean,
      anon_sym_isString,
      anon_sym_isCollection,
      anon_sym_RBRACE_RBRACE,
  [3310] = 6,
    ACTIONS(527), 1,
      anon_sym_LBRACKCaptures_RBRACK,
    ACTIONS(530), 1,
      anon_sym_LBRACKAsserts_RBRACK,
    STATE(63), 2,
      sym_response_section,
      aux_sym_response_repeat1,
    STATE(69), 2,
      sym_captures_section,
      sym_asserts_section,
    ACTIONS(523), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(525), 30,
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
      anon_sym_file_COMMA,
      anon_sym_LT,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      aux_sym_digit_token1,
      sym_comment,
  [3362] = 5,
    ACTIONS(533), 1,
      anon_sym_LF,
    ACTIONS(535), 1,
      sym_comment,
    STATE(65), 1,
      aux_sym__comment_or_new_line_repeat1,
    ACTIONS(83), 3,
      ts_builtin_sym_end,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(87), 32,
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
      anon_sym_LBRACKCaptures_RBRACK,
      anon_sym_LBRACKAsserts_RBRACK,
      anon_sym_file_COMMA,
      anon_sym_LT,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      sym_key_string_text,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      aux_sym_digit_token1,
  [3411] = 5,
    ACTIONS(537), 1,
      anon_sym_LF,
    ACTIONS(540), 1,
      sym_comment,
    STATE(65), 1,
      aux_sym__comment_or_new_line_repeat1,
    ACTIONS(91), 3,
      ts_builtin_sym_end,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(96), 32,
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
      anon_sym_LBRACKCaptures_RBRACK,
      anon_sym_LBRACKAsserts_RBRACK,
      anon_sym_file_COMMA,
      anon_sym_LT,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      sym_key_string_text,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      aux_sym_digit_token1,
  [3460] = 2,
    ACTIONS(543), 4,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(545), 33,
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
      anon_sym_LBRACKCaptures_RBRACK,
      anon_sym_LBRACKAsserts_RBRACK,
      anon_sym_file_COMMA,
      anon_sym_LT,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      sym_key_string_text,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      aux_sym_digit_token1,
      sym_comment,
  [3502] = 2,
    ACTIONS(547), 4,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(549), 33,
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
      anon_sym_LBRACKCaptures_RBRACK,
      anon_sym_LBRACKAsserts_RBRACK,
      anon_sym_file_COMMA,
      anon_sym_LT,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      sym_key_string_text,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      aux_sym_digit_token1,
      sym_comment,
  [3544] = 2,
    ACTIONS(473), 4,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(475), 33,
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
      anon_sym_LBRACKCaptures_RBRACK,
      anon_sym_LBRACKAsserts_RBRACK,
      anon_sym_file_COMMA,
      anon_sym_LT,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      sym_key_string_text,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      aux_sym_digit_token1,
      sym_comment,
  [3586] = 2,
    ACTIONS(551), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(553), 32,
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
      anon_sym_LBRACKCaptures_RBRACK,
      anon_sym_LBRACKAsserts_RBRACK,
      anon_sym_file_COMMA,
      anon_sym_LT,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      aux_sym_digit_token1,
      sym_comment,
  [3626] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(557), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(555), 27,
      anon_sym_regex,
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
      anon_sym_exists,
      anon_sym_includes,
      anon_sym_isInteger,
      anon_sym_isFloat,
      anon_sym_isBoolean,
      anon_sym_isString,
      anon_sym_isCollection,
      anon_sym_RBRACE_RBRACE,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
  [3666] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(561), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(559), 27,
      anon_sym_regex,
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
      anon_sym_exists,
      anon_sym_includes,
      anon_sym_isInteger,
      anon_sym_isFloat,
      anon_sym_isBoolean,
      anon_sym_isString,
      anon_sym_isCollection,
      anon_sym_RBRACE_RBRACE,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
  [3706] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(565), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(563), 27,
      anon_sym_regex,
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
      anon_sym_exists,
      anon_sym_includes,
      anon_sym_isInteger,
      anon_sym_isFloat,
      anon_sym_isBoolean,
      anon_sym_isString,
      anon_sym_isCollection,
      anon_sym_RBRACE_RBRACE,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
  [3746] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(569), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(567), 27,
      anon_sym_regex,
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
      anon_sym_exists,
      anon_sym_includes,
      anon_sym_isInteger,
      anon_sym_isFloat,
      anon_sym_isBoolean,
      anon_sym_isString,
      anon_sym_isCollection,
      anon_sym_RBRACE_RBRACE,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
  [3786] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(573), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(571), 27,
      anon_sym_regex,
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
      anon_sym_exists,
      anon_sym_includes,
      anon_sym_isInteger,
      anon_sym_isFloat,
      anon_sym_isBoolean,
      anon_sym_isString,
      anon_sym_isCollection,
      anon_sym_RBRACE_RBRACE,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
  [3826] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(577), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(575), 27,
      anon_sym_regex,
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
      anon_sym_exists,
      anon_sym_includes,
      anon_sym_isInteger,
      anon_sym_isFloat,
      anon_sym_isBoolean,
      anon_sym_isString,
      anon_sym_isCollection,
      anon_sym_RBRACE_RBRACE,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
  [3866] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(581), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(579), 27,
      anon_sym_regex,
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
      anon_sym_exists,
      anon_sym_includes,
      anon_sym_isInteger,
      anon_sym_isFloat,
      anon_sym_isBoolean,
      anon_sym_isString,
      anon_sym_isCollection,
      anon_sym_RBRACE_RBRACE,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
  [3906] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(585), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(583), 27,
      anon_sym_regex,
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
      anon_sym_exists,
      anon_sym_includes,
      anon_sym_isInteger,
      anon_sym_isFloat,
      anon_sym_isBoolean,
      anon_sym_isString,
      anon_sym_isCollection,
      anon_sym_RBRACE_RBRACE,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
  [3946] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(589), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(587), 27,
      anon_sym_regex,
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
      anon_sym_exists,
      anon_sym_includes,
      anon_sym_isInteger,
      anon_sym_isFloat,
      anon_sym_isBoolean,
      anon_sym_isString,
      anon_sym_isCollection,
      anon_sym_RBRACE_RBRACE,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
  [3986] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(593), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(591), 27,
      anon_sym_regex,
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
      anon_sym_exists,
      anon_sym_includes,
      anon_sym_isInteger,
      anon_sym_isFloat,
      anon_sym_isBoolean,
      anon_sym_isString,
      anon_sym_isCollection,
      anon_sym_RBRACE_RBRACE,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
  [4026] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(597), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(595), 27,
      anon_sym_regex,
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
      anon_sym_exists,
      anon_sym_includes,
      anon_sym_isInteger,
      anon_sym_isFloat,
      anon_sym_isBoolean,
      anon_sym_isString,
      anon_sym_isCollection,
      anon_sym_RBRACE_RBRACE,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
  [4066] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(601), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(599), 27,
      anon_sym_regex,
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
      anon_sym_exists,
      anon_sym_includes,
      anon_sym_isInteger,
      anon_sym_isFloat,
      anon_sym_isBoolean,
      anon_sym_isString,
      anon_sym_isCollection,
      anon_sym_RBRACE_RBRACE,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
  [4106] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(605), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(603), 26,
      anon_sym_regex,
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
      anon_sym_exists,
      anon_sym_includes,
      anon_sym_isInteger,
      anon_sym_isFloat,
      anon_sym_isBoolean,
      anon_sym_isString,
      anon_sym_isCollection,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
  [4145] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(609), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(607), 26,
      anon_sym_regex,
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
      anon_sym_exists,
      anon_sym_includes,
      anon_sym_isInteger,
      anon_sym_isFloat,
      anon_sym_isBoolean,
      anon_sym_isString,
      anon_sym_isCollection,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
  [4184] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(613), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(611), 26,
      anon_sym_regex,
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
      anon_sym_exists,
      anon_sym_includes,
      anon_sym_isInteger,
      anon_sym_isFloat,
      anon_sym_isBoolean,
      anon_sym_isString,
      anon_sym_isCollection,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
  [4223] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(617), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(615), 26,
      anon_sym_regex,
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
      anon_sym_exists,
      anon_sym_includes,
      anon_sym_isInteger,
      anon_sym_isFloat,
      anon_sym_isBoolean,
      anon_sym_isString,
      anon_sym_isCollection,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
  [4262] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(621), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(619), 26,
      anon_sym_regex,
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
      anon_sym_exists,
      anon_sym_includes,
      anon_sym_isInteger,
      anon_sym_isFloat,
      anon_sym_isBoolean,
      anon_sym_isString,
      anon_sym_isCollection,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
  [4301] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(625), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(623), 26,
      anon_sym_regex,
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
      anon_sym_exists,
      anon_sym_includes,
      anon_sym_isInteger,
      anon_sym_isFloat,
      anon_sym_isBoolean,
      anon_sym_isString,
      anon_sym_isCollection,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
  [4340] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(629), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(627), 26,
      anon_sym_regex,
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
      anon_sym_exists,
      anon_sym_includes,
      anon_sym_isInteger,
      anon_sym_isFloat,
      anon_sym_isBoolean,
      anon_sym_isString,
      anon_sym_isCollection,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
  [4379] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(633), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(631), 26,
      anon_sym_regex,
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
      anon_sym_exists,
      anon_sym_includes,
      anon_sym_isInteger,
      anon_sym_isFloat,
      anon_sym_isBoolean,
      anon_sym_isString,
      anon_sym_isCollection,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
  [4418] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(637), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(635), 26,
      anon_sym_regex,
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
      anon_sym_exists,
      anon_sym_includes,
      anon_sym_isInteger,
      anon_sym_isFloat,
      anon_sym_isBoolean,
      anon_sym_isString,
      anon_sym_isCollection,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
  [4457] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(641), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(639), 26,
      anon_sym_regex,
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
      anon_sym_exists,
      anon_sym_includes,
      anon_sym_isInteger,
      anon_sym_isFloat,
      anon_sym_isBoolean,
      anon_sym_isString,
      anon_sym_isCollection,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
  [4496] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(645), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(643), 26,
      anon_sym_regex,
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
      anon_sym_exists,
      anon_sym_includes,
      anon_sym_isInteger,
      anon_sym_isFloat,
      anon_sym_isBoolean,
      anon_sym_isString,
      anon_sym_isCollection,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
  [4535] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(649), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(647), 26,
      anon_sym_regex,
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
      anon_sym_exists,
      anon_sym_includes,
      anon_sym_isInteger,
      anon_sym_isFloat,
      anon_sym_isBoolean,
      anon_sym_isString,
      anon_sym_isCollection,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
  [4574] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(653), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(651), 26,
      anon_sym_regex,
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
      anon_sym_exists,
      anon_sym_includes,
      anon_sym_isInteger,
      anon_sym_isFloat,
      anon_sym_isBoolean,
      anon_sym_isString,
      anon_sym_isCollection,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
  [4613] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(657), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(655), 26,
      anon_sym_regex,
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
      anon_sym_exists,
      anon_sym_includes,
      anon_sym_isInteger,
      anon_sym_isFloat,
      anon_sym_isBoolean,
      anon_sym_isString,
      anon_sym_isCollection,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
  [4652] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(659), 1,
      anon_sym_variable,
    ACTIONS(661), 1,
      anon_sym_status,
    ACTIONS(663), 1,
      anon_sym_url,
    ACTIONS(665), 1,
      anon_sym_header,
    ACTIONS(667), 1,
      anon_sym_cookie,
    ACTIONS(669), 1,
      anon_sym_body,
    ACTIONS(671), 1,
      anon_sym_xpath,
    ACTIONS(673), 1,
      anon_sym_jsonpath,
    ACTIONS(675), 1,
      anon_sym_regex,
    ACTIONS(677), 1,
      anon_sym_duration,
    ACTIONS(679), 1,
      anon_sym_sha256,
    ACTIONS(681), 1,
      anon_sym_md5,
    ACTIONS(683), 1,
      anon_sym_bytes,
    STATE(115), 1,
      sym_query,
    STATE(176), 13,
      sym_status_query,
      sym_url_query,
      sym_header_query,
      sym_cookie_query,
      sym_body_query,
      sym_xpath_query,
      sym_jsonpath_query,
      sym_regex_query,
      sym_variable_query,
      sym_duration_query,
      sym_sha256_query,
      sym_md5_query,
      sym_bytes_query,
  [4713] = 9,
    ACTIONS(7), 1,
      anon_sym_LF,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(685), 1,
      ts_builtin_sym_end,
    STATE(10), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(110), 1,
      sym_response,
    STATE(119), 1,
      sym__comment_or_new_line,
    STATE(369), 1,
      sym_version,
    ACTIONS(689), 4,
      anon_sym_HTTP_SLASH1_DOT0,
      anon_sym_HTTP_SLASH1_DOT1,
      anon_sym_HTTP_SLASH2,
      anon_sym_HTTP_SLASH_STAR,
    ACTIONS(687), 16,
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
  [4759] = 9,
    ACTIONS(7), 1,
      anon_sym_LF,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(691), 1,
      ts_builtin_sym_end,
    STATE(10), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(97), 1,
      sym_request,
    STATE(126), 1,
      sym_method,
    STATE(103), 2,
      sym_entry,
      aux_sym_hurl_file_repeat1,
    STATE(248), 2,
      sym__comment_or_new_line,
      aux_sym_hurl_file_repeat2,
    ACTIONS(9), 16,
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
  [4804] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(693), 1,
      anon_sym_file_COMMA,
    ACTIONS(695), 1,
      anon_sym_base64_COMMA,
    ACTIONS(697), 1,
      anon_sym_hex_COMMA,
    ACTIONS(699), 1,
      anon_sym_DQUOTE,
    ACTIONS(701), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(705), 1,
      anon_sym_null,
    ACTIONS(707), 1,
      aux_sym_digit_token1,
    STATE(376), 1,
      sym_integer,
    STATE(517), 1,
      sym_predicate_value,
    ACTIONS(703), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(217), 2,
      sym_digit,
      aux_sym_integer_repeat1,
    STATE(516), 9,
      sym_oneline_base64,
      sym_oneline_file,
      sym_oneline_hex,
      sym_quoted_string,
      sym_multiline_string,
      sym_template,
      sym_boolean,
      sym_null,
      sym_float,
  [4857] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(693), 1,
      anon_sym_file_COMMA,
    ACTIONS(695), 1,
      anon_sym_base64_COMMA,
    ACTIONS(697), 1,
      anon_sym_hex_COMMA,
    ACTIONS(699), 1,
      anon_sym_DQUOTE,
    ACTIONS(701), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(705), 1,
      anon_sym_null,
    ACTIONS(707), 1,
      aux_sym_digit_token1,
    STATE(376), 1,
      sym_integer,
    STATE(515), 1,
      sym_predicate_value,
    ACTIONS(703), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(217), 2,
      sym_digit,
      aux_sym_integer_repeat1,
    STATE(516), 9,
      sym_oneline_base64,
      sym_oneline_file,
      sym_oneline_hex,
      sym_quoted_string,
      sym_multiline_string,
      sym_template,
      sym_boolean,
      sym_null,
      sym_float,
  [4910] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(693), 1,
      anon_sym_file_COMMA,
    ACTIONS(695), 1,
      anon_sym_base64_COMMA,
    ACTIONS(697), 1,
      anon_sym_hex_COMMA,
    ACTIONS(699), 1,
      anon_sym_DQUOTE,
    ACTIONS(701), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(705), 1,
      anon_sym_null,
    ACTIONS(707), 1,
      aux_sym_digit_token1,
    STATE(376), 1,
      sym_integer,
    STATE(503), 1,
      sym_predicate_value,
    ACTIONS(703), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(217), 2,
      sym_digit,
      aux_sym_integer_repeat1,
    STATE(516), 9,
      sym_oneline_base64,
      sym_oneline_file,
      sym_oneline_hex,
      sym_quoted_string,
      sym_multiline_string,
      sym_template,
      sym_boolean,
      sym_null,
      sym_float,
  [4963] = 2,
    ACTIONS(67), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(69), 21,
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
      sym_comment,
  [4991] = 6,
    ACTIONS(714), 1,
      sym_comment,
    STATE(97), 1,
      sym_request,
    STATE(126), 1,
      sym_method,
    ACTIONS(709), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(103), 2,
      sym_entry,
      aux_sym_hurl_file_repeat1,
    ACTIONS(711), 16,
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
  [5027] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(57), 1,
      anon_sym_null,
    ACTIONS(59), 1,
      aux_sym_digit_token1,
    ACTIONS(699), 1,
      anon_sym_DQUOTE,
    ACTIONS(716), 1,
      sym_key_string_text,
    ACTIONS(718), 1,
      anon_sym_BSLASH2,
    STATE(398), 1,
      sym_integer,
    STATE(500), 1,
      sym_variable_value,
    ACTIONS(55), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(217), 2,
      sym_digit,
      aux_sym_integer_repeat1,
    STATE(233), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(159), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
    STATE(499), 5,
      sym_quoted_string,
      sym_key_string,
      sym_boolean,
      sym_null,
      sym_float,
  [5079] = 2,
    ACTIONS(720), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(722), 21,
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
      sym_comment,
  [5107] = 2,
    ACTIONS(71), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(73), 21,
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
      sym_comment,
  [5135] = 13,
    ACTIONS(57), 1,
      anon_sym_null,
    ACTIONS(59), 1,
      aux_sym_digit_token1,
    ACTIONS(726), 1,
      anon_sym_BSLASH,
    ACTIONS(728), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(730), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(247), 1,
      aux_sym_value_string_text_repeat1,
    STATE(402), 1,
      sym_integer,
    ACTIONS(55), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(724), 2,
      anon_sym_LF,
      sym_comment,
    STATE(217), 2,
      sym_digit,
      aux_sym_integer_repeat1,
    STATE(140), 3,
      sym_value_string_content,
      sym_template,
      aux_sym_value_string_repeat1,
    STATE(175), 3,
      sym_value_string_text,
      sym_value_string_escaped_char,
      aux_sym_value_string_content_repeat1,
    STATE(479), 4,
      sym_value_string,
      sym_boolean,
      sym_null,
      sym_float,
  [5185] = 2,
    ACTIONS(732), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(734), 21,
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
      sym_comment,
  [5213] = 2,
    ACTIONS(63), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(65), 21,
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
      sym_comment,
  [5241] = 6,
    ACTIONS(7), 1,
      anon_sym_LF,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(736), 1,
      ts_builtin_sym_end,
    STATE(10), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(118), 1,
      sym__comment_or_new_line,
    ACTIONS(738), 16,
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
  [5275] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(740), 1,
      anon_sym_DQUOTE,
    ACTIONS(742), 1,
      anon_sym_LBRACE,
    ACTIONS(744), 1,
      anon_sym_LBRACK,
    ACTIONS(746), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(750), 1,
      anon_sym_null,
    ACTIONS(752), 1,
      aux_sym_digit_token1,
    STATE(200), 1,
      sym_integer,
    STATE(366), 1,
      sym_json_value,
    ACTIONS(748), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(158), 2,
      sym_digit,
      aux_sym_integer_repeat1,
    STATE(411), 7,
      sym_json_object,
      sym_json_array,
      sym_json_string,
      sym_json_number,
      sym_template,
      sym_boolean,
      sym_null,
  [5320] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(740), 1,
      anon_sym_DQUOTE,
    ACTIONS(742), 1,
      anon_sym_LBRACE,
    ACTIONS(744), 1,
      anon_sym_LBRACK,
    ACTIONS(746), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(750), 1,
      anon_sym_null,
    ACTIONS(752), 1,
      aux_sym_digit_token1,
    STATE(200), 1,
      sym_integer,
    STATE(422), 1,
      sym_json_value,
    ACTIONS(748), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(158), 2,
      sym_digit,
      aux_sym_integer_repeat1,
    STATE(411), 7,
      sym_json_object,
      sym_json_array,
      sym_json_string,
      sym_json_number,
      sym_template,
      sym_boolean,
      sym_null,
  [5365] = 13,
    ACTIONS(754), 1,
      anon_sym_LF,
    ACTIONS(756), 1,
      anon_sym_regex,
    ACTIONS(758), 1,
      anon_sym_count,
    ACTIONS(760), 1,
      anon_sym_urlEncode,
    ACTIONS(762), 1,
      anon_sym_urlDecode,
    ACTIONS(764), 1,
      anon_sym_htmlEscape,
    ACTIONS(766), 1,
      anon_sym_htmlUnescape,
    ACTIONS(768), 1,
      anon_sym_toInt,
    ACTIONS(770), 1,
      sym_comment,
    STATE(64), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(67), 1,
      sym__comment_or_new_line,
    STATE(122), 2,
      sym_filter,
      aux_sym_capture_repeat1,
    STATE(206), 7,
      sym_regex_filter,
      sym_count_filter,
      sym_url_encode_filter,
      sym_url_decode_filter,
      sym_html_encode_filter,
      sym_html_decode_filter,
      sym_to_int_filter,
  [5412] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(740), 1,
      anon_sym_DQUOTE,
    ACTIONS(742), 1,
      anon_sym_LBRACE,
    ACTIONS(744), 1,
      anon_sym_LBRACK,
    ACTIONS(746), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(750), 1,
      anon_sym_null,
    ACTIONS(752), 1,
      aux_sym_digit_token1,
    STATE(200), 1,
      sym_integer,
    STATE(387), 1,
      sym_json_value,
    ACTIONS(748), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(158), 2,
      sym_digit,
      aux_sym_integer_repeat1,
    STATE(411), 7,
      sym_json_object,
      sym_json_array,
      sym_json_string,
      sym_json_number,
      sym_template,
      sym_boolean,
      sym_null,
  [5457] = 13,
    ACTIONS(754), 1,
      anon_sym_LF,
    ACTIONS(756), 1,
      anon_sym_regex,
    ACTIONS(758), 1,
      anon_sym_count,
    ACTIONS(760), 1,
      anon_sym_urlEncode,
    ACTIONS(762), 1,
      anon_sym_urlDecode,
    ACTIONS(764), 1,
      anon_sym_htmlEscape,
    ACTIONS(766), 1,
      anon_sym_htmlUnescape,
    ACTIONS(768), 1,
      anon_sym_toInt,
    ACTIONS(770), 1,
      sym_comment,
    STATE(64), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(66), 1,
      sym__comment_or_new_line,
    STATE(113), 2,
      sym_filter,
      aux_sym_capture_repeat1,
    STATE(206), 7,
      sym_regex_filter,
      sym_count_filter,
      sym_url_encode_filter,
      sym_url_decode_filter,
      sym_html_encode_filter,
      sym_html_decode_filter,
      sym_to_int_filter,
  [5504] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(740), 1,
      anon_sym_DQUOTE,
    ACTIONS(742), 1,
      anon_sym_LBRACE,
    ACTIONS(744), 1,
      anon_sym_LBRACK,
    ACTIONS(746), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(750), 1,
      anon_sym_null,
    ACTIONS(752), 1,
      aux_sym_digit_token1,
    STATE(200), 1,
      sym_integer,
    STATE(430), 1,
      sym_json_value,
    ACTIONS(748), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(158), 2,
      sym_digit,
      aux_sym_integer_repeat1,
    STATE(411), 7,
      sym_json_object,
      sym_json_array,
      sym_json_string,
      sym_json_number,
      sym_template,
      sym_boolean,
      sym_null,
  [5549] = 2,
    ACTIONS(101), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(103), 17,
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
      sym_comment,
  [5573] = 2,
    ACTIONS(772), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(774), 17,
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
      sym_comment,
  [5597] = 2,
    ACTIONS(736), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(738), 17,
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
      sym_comment,
  [5621] = 2,
    ACTIONS(294), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(296), 17,
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
      sym_comment,
  [5645] = 2,
    ACTIONS(776), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(778), 17,
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
      sym_comment,
  [5669] = 11,
    ACTIONS(501), 1,
      sym_comment,
    ACTIONS(503), 1,
      anon_sym_LF,
    ACTIONS(780), 1,
      anon_sym_regex,
    ACTIONS(783), 1,
      anon_sym_count,
    ACTIONS(786), 1,
      anon_sym_urlEncode,
    ACTIONS(789), 1,
      anon_sym_urlDecode,
    ACTIONS(792), 1,
      anon_sym_htmlEscape,
    ACTIONS(795), 1,
      anon_sym_htmlUnescape,
    ACTIONS(798), 1,
      anon_sym_toInt,
    STATE(122), 2,
      sym_filter,
      aux_sym_capture_repeat1,
    STATE(206), 7,
      sym_regex_filter,
      sym_count_filter,
      sym_url_encode_filter,
      sym_url_decode_filter,
      sym_html_encode_filter,
      sym_html_decode_filter,
      sym_to_int_filter,
  [5710] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(244), 1,
      anon_sym_regex,
    ACTIONS(282), 1,
      anon_sym_count,
    ACTIONS(284), 1,
      anon_sym_urlEncode,
    ACTIONS(286), 1,
      anon_sym_urlDecode,
    ACTIONS(288), 1,
      anon_sym_htmlEscape,
    ACTIONS(290), 1,
      anon_sym_htmlUnescape,
    ACTIONS(292), 1,
      anon_sym_toInt,
    ACTIONS(801), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(62), 2,
      sym_filter,
      aux_sym_capture_repeat1,
    STATE(81), 7,
      sym_regex_filter,
      sym_count_filter,
      sym_url_encode_filter,
      sym_url_decode_filter,
      sym_html_encode_filter,
      sym_html_decode_filter,
      sym_to_int_filter,
  [5751] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(244), 1,
      anon_sym_regex,
    ACTIONS(282), 1,
      anon_sym_count,
    ACTIONS(284), 1,
      anon_sym_urlEncode,
    ACTIONS(286), 1,
      anon_sym_urlDecode,
    ACTIONS(288), 1,
      anon_sym_htmlEscape,
    ACTIONS(290), 1,
      anon_sym_htmlUnescape,
    ACTIONS(292), 1,
      anon_sym_toInt,
    ACTIONS(803), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(123), 2,
      sym_filter,
      aux_sym_capture_repeat1,
    STATE(81), 7,
      sym_regex_filter,
      sym_count_filter,
      sym_url_encode_filter,
      sym_url_decode_filter,
      sym_html_encode_filter,
      sym_html_decode_filter,
      sym_to_int_filter,
  [5792] = 13,
    ACTIONS(15), 1,
      anon_sym_LF,
    ACTIONS(43), 1,
      anon_sym_BSLASH2,
    ACTIONS(61), 1,
      sym_comment,
    ACTIONS(315), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(805), 1,
      sym_key_string_text,
    STATE(25), 1,
      sym__comment_or_new_line,
    STATE(52), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(309), 1,
      aux_sym_multipart_form_data_section_repeat1,
    STATE(314), 1,
      sym_multipart_form_data_param,
    STATE(439), 1,
      sym_key_string,
    STATE(218), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(458), 2,
      sym_key_value,
      sym_file_param,
    STATE(150), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
  [5836] = 10,
    ACTIONS(726), 1,
      anon_sym_BSLASH,
    ACTIONS(728), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(730), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(52), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(247), 1,
      aux_sym_value_string_text_repeat1,
    STATE(323), 1,
      sym_value_string,
    ACTIONS(61), 2,
      anon_sym_LF,
      sym_comment,
    STATE(2), 2,
      sym__comment_or_new_line,
      aux_sym_hurl_file_repeat2,
    STATE(140), 3,
      sym_value_string_content,
      sym_template,
      aux_sym_value_string_repeat1,
    STATE(175), 3,
      sym_value_string_text,
      sym_value_string_escaped_char,
      aux_sym_value_string_content_repeat1,
  [5873] = 12,
    ACTIONS(15), 1,
      anon_sym_LF,
    ACTIONS(43), 1,
      anon_sym_BSLASH2,
    ACTIONS(61), 1,
      sym_comment,
    ACTIONS(315), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(805), 1,
      sym_key_string_text,
    STATE(39), 1,
      sym__comment_or_new_line,
    STATE(52), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(317), 1,
      aux_sym_query_string_params_section_repeat1,
    STATE(318), 1,
      sym_key_value,
    STATE(483), 1,
      sym_key_string,
    STATE(218), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(150), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
  [5913] = 12,
    ACTIONS(15), 1,
      anon_sym_LF,
    ACTIONS(43), 1,
      anon_sym_BSLASH2,
    ACTIONS(61), 1,
      sym_comment,
    ACTIONS(315), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(805), 1,
      sym_key_string_text,
    STATE(41), 1,
      sym__comment_or_new_line,
    STATE(52), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(305), 1,
      aux_sym_query_string_params_section_repeat1,
    STATE(307), 1,
      sym_key_value,
    STATE(483), 1,
      sym_key_string,
    STATE(218), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(150), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
  [5953] = 12,
    ACTIONS(15), 1,
      anon_sym_LF,
    ACTIONS(43), 1,
      anon_sym_BSLASH2,
    ACTIONS(61), 1,
      sym_comment,
    ACTIONS(315), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(805), 1,
      sym_key_string_text,
    STATE(43), 1,
      sym__comment_or_new_line,
    STATE(52), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(315), 1,
      aux_sym_query_string_params_section_repeat1,
    STATE(316), 1,
      sym_key_value,
    STATE(483), 1,
      sym_key_string,
    STATE(218), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(150), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
  [5993] = 9,
    ACTIONS(809), 1,
      anon_sym_BSLASH,
    ACTIONS(811), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(813), 1,
      aux_sym_multiline_string_text_token1,
    ACTIONS(815), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(238), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(262), 1,
      sym__comment_or_new_line,
    ACTIONS(807), 2,
      anon_sym_LF,
      sym_comment,
    STATE(133), 3,
      sym_multiline_string_content,
      sym_template,
      aux_sym_multiline_string_repeat1,
    STATE(147), 3,
      sym_multiline_string_text,
      sym_multiline_string_escaped_char,
      aux_sym_multiline_string_content_repeat1,
  [6026] = 9,
    ACTIONS(809), 1,
      anon_sym_BSLASH,
    ACTIONS(811), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(813), 1,
      aux_sym_multiline_string_text_token1,
    ACTIONS(815), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(238), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(262), 1,
      sym__comment_or_new_line,
    ACTIONS(807), 2,
      anon_sym_LF,
      sym_comment,
    STATE(132), 3,
      sym_multiline_string_content,
      sym_template,
      aux_sym_multiline_string_repeat1,
    STATE(147), 3,
      sym_multiline_string_text,
      sym_multiline_string_escaped_char,
      aux_sym_multiline_string_content_repeat1,
  [6059] = 9,
    ACTIONS(809), 1,
      anon_sym_BSLASH,
    ACTIONS(813), 1,
      aux_sym_multiline_string_text_token1,
    ACTIONS(815), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(817), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(238), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(243), 1,
      sym__comment_or_new_line,
    ACTIONS(807), 2,
      anon_sym_LF,
      sym_comment,
    STATE(133), 3,
      sym_multiline_string_content,
      sym_template,
      aux_sym_multiline_string_repeat1,
    STATE(147), 3,
      sym_multiline_string_text,
      sym_multiline_string_escaped_char,
      aux_sym_multiline_string_content_repeat1,
  [6092] = 8,
    ACTIONS(822), 1,
      anon_sym_BSLASH,
    ACTIONS(825), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(827), 1,
      aux_sym_multiline_string_text_token1,
    ACTIONS(830), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(238), 1,
      aux_sym__comment_or_new_line_repeat1,
    ACTIONS(819), 2,
      anon_sym_LF,
      sym_comment,
    STATE(133), 3,
      sym_multiline_string_content,
      sym_template,
      aux_sym_multiline_string_repeat1,
    STATE(147), 4,
      sym__comment_or_new_line,
      sym_multiline_string_text,
      sym_multiline_string_escaped_char,
      aux_sym_multiline_string_content_repeat1,
  [6123] = 9,
    ACTIONS(809), 1,
      anon_sym_BSLASH,
    ACTIONS(813), 1,
      aux_sym_multiline_string_text_token1,
    ACTIONS(815), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(833), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(238), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(264), 1,
      sym__comment_or_new_line,
    ACTIONS(807), 2,
      anon_sym_LF,
      sym_comment,
    STATE(130), 3,
      sym_multiline_string_content,
      sym_template,
      aux_sym_multiline_string_repeat1,
    STATE(147), 3,
      sym_multiline_string_text,
      sym_multiline_string_escaped_char,
      aux_sym_multiline_string_content_repeat1,
  [6156] = 9,
    ACTIONS(835), 1,
      anon_sym_BSLASH,
    ACTIONS(837), 1,
      sym_filename_text,
    ACTIONS(839), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(10), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(33), 1,
      sym__comment_or_new_line,
    STATE(362), 1,
      sym_filename,
    ACTIONS(11), 2,
      anon_sym_LF,
      sym_comment,
    STATE(241), 2,
      sym_filename_escaped_char,
      aux_sym_filename_content_repeat1,
    STATE(164), 3,
      sym_filename_content,
      sym_template,
      aux_sym_filename_repeat1,
  [6188] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(43), 1,
      anon_sym_BSLASH2,
    ACTIONS(315), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(805), 1,
      sym_key_string_text,
    STATE(439), 1,
      sym_key_string,
    STATE(493), 1,
      sym_multipart_form_data_param,
    STATE(218), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(458), 2,
      sym_key_value,
      sym_file_param,
    STATE(150), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
  [6220] = 7,
    ACTIONS(841), 1,
      anon_sym_DQUOTE,
    ACTIONS(843), 1,
      aux_sym_quoted_string_text_token1,
    ACTIONS(845), 1,
      anon_sym_BSLASH,
    ACTIONS(847), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(849), 1,
      sym_comment,
    STATE(143), 3,
      sym_quoted_string_content,
      sym_template,
      aux_sym_quoted_string_repeat1,
    STATE(191), 4,
      sym_quoted_string_text,
      sym_invalid_quoted_string_escaped_char,
      sym_quoted_string_escaped_char,
      aux_sym_quoted_string_content_repeat1,
  [6247] = 7,
    ACTIONS(843), 1,
      aux_sym_quoted_string_text_token1,
    ACTIONS(845), 1,
      anon_sym_BSLASH,
    ACTIONS(847), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(849), 1,
      sym_comment,
    ACTIONS(851), 1,
      anon_sym_DQUOTE,
    STATE(141), 3,
      sym_quoted_string_content,
      sym_template,
      aux_sym_quoted_string_repeat1,
    STATE(191), 4,
      sym_quoted_string_text,
      sym_invalid_quoted_string_escaped_char,
      sym_quoted_string_escaped_char,
      aux_sym_quoted_string_content_repeat1,
  [6274] = 7,
    ACTIONS(855), 1,
      anon_sym_BSLASH,
    ACTIONS(858), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(861), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(247), 1,
      aux_sym_value_string_text_repeat1,
    ACTIONS(853), 2,
      anon_sym_LF,
      sym_comment,
    STATE(139), 3,
      sym_value_string_content,
      sym_template,
      aux_sym_value_string_repeat1,
    STATE(175), 3,
      sym_value_string_text,
      sym_value_string_escaped_char,
      aux_sym_value_string_content_repeat1,
  [6301] = 7,
    ACTIONS(726), 1,
      anon_sym_BSLASH,
    ACTIONS(728), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(730), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(247), 1,
      aux_sym_value_string_text_repeat1,
    ACTIONS(864), 2,
      anon_sym_LF,
      sym_comment,
    STATE(139), 3,
      sym_value_string_content,
      sym_template,
      aux_sym_value_string_repeat1,
    STATE(175), 3,
      sym_value_string_text,
      sym_value_string_escaped_char,
      aux_sym_value_string_content_repeat1,
  [6328] = 7,
    ACTIONS(843), 1,
      aux_sym_quoted_string_text_token1,
    ACTIONS(845), 1,
      anon_sym_BSLASH,
    ACTIONS(847), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(849), 1,
      sym_comment,
    ACTIONS(866), 1,
      anon_sym_DQUOTE,
    STATE(142), 3,
      sym_quoted_string_content,
      sym_template,
      aux_sym_quoted_string_repeat1,
    STATE(191), 4,
      sym_quoted_string_text,
      sym_invalid_quoted_string_escaped_char,
      sym_quoted_string_escaped_char,
      aux_sym_quoted_string_content_repeat1,
  [6355] = 7,
    ACTIONS(849), 1,
      sym_comment,
    ACTIONS(868), 1,
      anon_sym_DQUOTE,
    ACTIONS(870), 1,
      aux_sym_quoted_string_text_token1,
    ACTIONS(873), 1,
      anon_sym_BSLASH,
    ACTIONS(876), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(142), 3,
      sym_quoted_string_content,
      sym_template,
      aux_sym_quoted_string_repeat1,
    STATE(191), 4,
      sym_quoted_string_text,
      sym_invalid_quoted_string_escaped_char,
      sym_quoted_string_escaped_char,
      aux_sym_quoted_string_content_repeat1,
  [6382] = 7,
    ACTIONS(843), 1,
      aux_sym_quoted_string_text_token1,
    ACTIONS(845), 1,
      anon_sym_BSLASH,
    ACTIONS(847), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(849), 1,
      sym_comment,
    ACTIONS(879), 1,
      anon_sym_DQUOTE,
    STATE(142), 3,
      sym_quoted_string_content,
      sym_template,
      aux_sym_quoted_string_repeat1,
    STATE(191), 4,
      sym_quoted_string_text,
      sym_invalid_quoted_string_escaped_char,
      sym_quoted_string_escaped_char,
      aux_sym_quoted_string_content_repeat1,
  [6409] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(43), 1,
      anon_sym_BSLASH2,
    ACTIONS(315), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(805), 1,
      sym_key_string_text,
    STATE(360), 1,
      sym_key_value,
    STATE(483), 1,
      sym_key_string,
    STATE(218), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(150), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
  [6437] = 7,
    ACTIONS(849), 1,
      sym_comment,
    ACTIONS(881), 1,
      anon_sym_BSLASH,
    ACTIONS(883), 1,
      anon_sym_BQUOTE,
    ACTIONS(885), 1,
      aux_sym_oneline_string_text_token1,
    ACTIONS(887), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(149), 3,
      sym_oneline_string_content,
      sym_template,
      aux_sym_oneline_string_repeat1,
    STATE(211), 3,
      sym_oneline_string_text,
      sym_oneline_string_escaped_char,
      aux_sym_oneline_string_content_repeat1,
  [6463] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(889), 1,
      anon_sym_COLON,
    ACTIONS(891), 1,
      anon_sym_COLON2,
    ACTIONS(893), 1,
      sym_key_string_text,
    ACTIONS(896), 1,
      anon_sym_BSLASH2,
    ACTIONS(899), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(218), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(146), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
  [6491] = 7,
    ACTIONS(809), 1,
      anon_sym_BSLASH,
    ACTIONS(813), 1,
      aux_sym_multiline_string_text_token1,
    ACTIONS(902), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(904), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(238), 1,
      aux_sym__comment_or_new_line_repeat1,
    ACTIONS(807), 2,
      anon_sym_LF,
      sym_comment,
    STATE(148), 4,
      sym__comment_or_new_line,
      sym_multiline_string_text,
      sym_multiline_string_escaped_char,
      aux_sym_multiline_string_content_repeat1,
  [6517] = 7,
    ACTIONS(909), 1,
      anon_sym_BSLASH,
    ACTIONS(912), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(914), 1,
      aux_sym_multiline_string_text_token1,
    ACTIONS(917), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(238), 1,
      aux_sym__comment_or_new_line_repeat1,
    ACTIONS(906), 2,
      anon_sym_LF,
      sym_comment,
    STATE(148), 4,
      sym__comment_or_new_line,
      sym_multiline_string_text,
      sym_multiline_string_escaped_char,
      aux_sym_multiline_string_content_repeat1,
  [6543] = 7,
    ACTIONS(849), 1,
      sym_comment,
    ACTIONS(919), 1,
      anon_sym_BSLASH,
    ACTIONS(922), 1,
      anon_sym_BQUOTE,
    ACTIONS(924), 1,
      aux_sym_oneline_string_text_token1,
    ACTIONS(927), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(149), 3,
      sym_oneline_string_content,
      sym_template,
      aux_sym_oneline_string_repeat1,
    STATE(211), 3,
      sym_oneline_string_text,
      sym_oneline_string_escaped_char,
      aux_sym_oneline_string_content_repeat1,
  [6569] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(43), 1,
      anon_sym_BSLASH2,
    ACTIONS(315), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(805), 1,
      sym_key_string_text,
    ACTIONS(930), 1,
      anon_sym_COLON,
    ACTIONS(932), 1,
      anon_sym_COLON2,
    STATE(218), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(146), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
  [6597] = 7,
    ACTIONS(849), 1,
      sym_comment,
    ACTIONS(881), 1,
      anon_sym_BSLASH,
    ACTIONS(885), 1,
      aux_sym_oneline_string_text_token1,
    ACTIONS(887), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(934), 1,
      anon_sym_BQUOTE,
    STATE(145), 3,
      sym_oneline_string_content,
      sym_template,
      aux_sym_oneline_string_repeat1,
    STATE(211), 3,
      sym_oneline_string_text,
      sym_oneline_string_escaped_char,
      aux_sym_oneline_string_content_repeat1,
  [6623] = 8,
    ACTIONS(849), 1,
      sym_comment,
    ACTIONS(936), 1,
      anon_sym_SEMI,
    ACTIONS(938), 1,
      anon_sym_BSLASH,
    ACTIONS(940), 1,
      sym_filename_text,
    ACTIONS(942), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(478), 1,
      sym_filename,
    STATE(236), 2,
      sym_filename_escaped_char,
      aux_sym_filename_content_repeat1,
    STATE(162), 3,
      sym_filename_content,
      sym_template,
      aux_sym_filename_repeat1,
  [6651] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(43), 1,
      anon_sym_BSLASH2,
    ACTIONS(315), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(805), 1,
      sym_key_string_text,
    STATE(483), 1,
      sym_key_string,
    STATE(489), 1,
      sym_key_value,
    STATE(218), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(150), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
  [6679] = 8,
    ACTIONS(849), 1,
      sym_comment,
    ACTIONS(938), 1,
      anon_sym_BSLASH,
    ACTIONS(940), 1,
      sym_filename_text,
    ACTIONS(942), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(944), 1,
      anon_sym_SEMI,
    STATE(535), 1,
      sym_filename,
    STATE(236), 2,
      sym_filename_escaped_char,
      aux_sym_filename_content_repeat1,
    STATE(162), 3,
      sym_filename_content,
      sym_template,
      aux_sym_filename_repeat1,
  [6707] = 7,
    ACTIONS(849), 1,
      sym_comment,
    ACTIONS(946), 1,
      anon_sym_DQUOTE,
    ACTIONS(948), 1,
      anon_sym_BSLASH,
    ACTIONS(950), 1,
      aux_sym_json_string_text_token1,
    ACTIONS(952), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(279), 2,
      sym_json_string_text,
      sym_json_string_escaped_char,
    STATE(160), 3,
      sym_json_string_content,
      sym_template,
      aux_sym_json_string_repeat1,
  [6732] = 6,
    ACTIONS(807), 1,
      sym_comment,
    ACTIONS(954), 1,
      anon_sym_LF,
    STATE(134), 1,
      sym__comment_or_new_line,
    STATE(238), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(378), 1,
      sym_multiline_string_type,
    ACTIONS(956), 5,
      anon_sym_base64,
      anon_sym_hex,
      anon_sym_json,
      anon_sym_xml,
      anon_sym_graphql,
  [6755] = 4,
    ACTIONS(849), 1,
      sym_comment,
    ACTIONS(960), 1,
      aux_sym_invalid_quoted_string_escaped_char_token1,
    ACTIONS(962), 1,
      anon_sym_u,
    ACTIONS(958), 7,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
      anon_sym_b,
      anon_sym_f,
      anon_sym_n,
      anon_sym_r,
      anon_sym_t,
  [6774] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(752), 1,
      aux_sym_digit_token1,
    STATE(168), 2,
      sym_digit,
      aux_sym_integer_repeat1,
    ACTIONS(964), 6,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DOT,
      anon_sym_e,
      anon_sym_E,
  [6793] = 7,
    ACTIONS(53), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(718), 1,
      anon_sym_BSLASH2,
    ACTIONS(930), 1,
      anon_sym_LF,
    ACTIONS(932), 1,
      sym_comment,
    ACTIONS(966), 1,
      sym_key_string_text,
    STATE(233), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(165), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
  [6818] = 7,
    ACTIONS(849), 1,
      sym_comment,
    ACTIONS(948), 1,
      anon_sym_BSLASH,
    ACTIONS(950), 1,
      aux_sym_json_string_text_token1,
    ACTIONS(952), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(968), 1,
      anon_sym_DQUOTE,
    STATE(279), 2,
      sym_json_string_text,
      sym_json_string_escaped_char,
    STATE(169), 3,
      sym_json_string_content,
      sym_template,
      aux_sym_json_string_repeat1,
  [6843] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(465), 1,
      anon_sym_BSLASH2,
    ACTIONS(467), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(930), 1,
      anon_sym_COLON2,
    ACTIONS(970), 1,
      sym_key_string_text,
    STATE(232), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(171), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
  [6868] = 7,
    ACTIONS(849), 1,
      sym_comment,
    ACTIONS(938), 1,
      anon_sym_BSLASH,
    ACTIONS(940), 1,
      sym_filename_text,
    ACTIONS(942), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(972), 1,
      anon_sym_SEMI,
    STATE(236), 2,
      sym_filename_escaped_char,
      aux_sym_filename_content_repeat1,
    STATE(172), 3,
      sym_filename_content,
      sym_template,
      aux_sym_filename_repeat1,
  [6893] = 7,
    ACTIONS(849), 1,
      sym_comment,
    ACTIONS(948), 1,
      anon_sym_BSLASH,
    ACTIONS(950), 1,
      aux_sym_json_string_text_token1,
    ACTIONS(952), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(974), 1,
      anon_sym_DQUOTE,
    STATE(279), 2,
      sym_json_string_text,
      sym_json_string_escaped_char,
    STATE(169), 3,
      sym_json_string_content,
      sym_template,
      aux_sym_json_string_repeat1,
  [6918] = 6,
    ACTIONS(835), 1,
      anon_sym_BSLASH,
    ACTIONS(837), 1,
      sym_filename_text,
    ACTIONS(839), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(972), 2,
      anon_sym_LF,
      sym_comment,
    STATE(241), 2,
      sym_filename_escaped_char,
      aux_sym_filename_content_repeat1,
    STATE(170), 3,
      sym_filename_content,
      sym_template,
      aux_sym_filename_repeat1,
  [6941] = 7,
    ACTIONS(889), 1,
      anon_sym_LF,
    ACTIONS(891), 1,
      sym_comment,
    ACTIONS(976), 1,
      sym_key_string_text,
    ACTIONS(979), 1,
      anon_sym_BSLASH2,
    ACTIONS(982), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(233), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(165), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
  [6966] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(985), 9,
      anon_sym_EQ,
      anon_sym_regex,
      anon_sym_RBRACE_RBRACE,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
  [6981] = 7,
    ACTIONS(849), 1,
      sym_comment,
    ACTIONS(948), 1,
      anon_sym_BSLASH,
    ACTIONS(950), 1,
      aux_sym_json_string_text_token1,
    ACTIONS(952), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(987), 1,
      anon_sym_DQUOTE,
    STATE(279), 2,
      sym_json_string_text,
      sym_json_string_escaped_char,
    STATE(163), 3,
      sym_json_string_content,
      sym_template,
      aux_sym_json_string_repeat1,
  [7006] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(991), 1,
      aux_sym_digit_token1,
    STATE(168), 2,
      sym_digit,
      aux_sym_integer_repeat1,
    ACTIONS(989), 6,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DOT,
      anon_sym_e,
      anon_sym_E,
  [7025] = 7,
    ACTIONS(849), 1,
      sym_comment,
    ACTIONS(994), 1,
      anon_sym_DQUOTE,
    ACTIONS(996), 1,
      anon_sym_BSLASH,
    ACTIONS(999), 1,
      aux_sym_json_string_text_token1,
    ACTIONS(1002), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(279), 2,
      sym_json_string_text,
      sym_json_string_escaped_char,
    STATE(169), 3,
      sym_json_string_content,
      sym_template,
      aux_sym_json_string_repeat1,
  [7050] = 6,
    ACTIONS(1007), 1,
      anon_sym_BSLASH,
    ACTIONS(1010), 1,
      sym_filename_text,
    ACTIONS(1013), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1005), 2,
      anon_sym_LF,
      sym_comment,
    STATE(241), 2,
      sym_filename_escaped_char,
      aux_sym_filename_content_repeat1,
    STATE(170), 3,
      sym_filename_content,
      sym_template,
      aux_sym_filename_repeat1,
  [7073] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(889), 1,
      anon_sym_COLON2,
    ACTIONS(1016), 1,
      sym_key_string_text,
    ACTIONS(1019), 1,
      anon_sym_BSLASH2,
    ACTIONS(1022), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(232), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(171), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
  [7098] = 7,
    ACTIONS(849), 1,
      sym_comment,
    ACTIONS(1005), 1,
      anon_sym_SEMI,
    ACTIONS(1025), 1,
      anon_sym_BSLASH,
    ACTIONS(1028), 1,
      sym_filename_text,
    ACTIONS(1031), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(236), 2,
      sym_filename_escaped_char,
      aux_sym_filename_content_repeat1,
    STATE(172), 3,
      sym_filename_content,
      sym_template,
      aux_sym_filename_repeat1,
  [7123] = 2,
    ACTIONS(615), 1,
      anon_sym_LF,
    ACTIONS(617), 8,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
      sym_comment,
  [7137] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1036), 1,
      anon_sym_u,
    ACTIONS(1038), 1,
      anon_sym_POUND,
    ACTIONS(1034), 6,
      anon_sym_BSLASH,
      anon_sym_b,
      anon_sym_f,
      anon_sym_n,
      anon_sym_r,
      anon_sym_t,
  [7155] = 6,
    ACTIONS(726), 1,
      anon_sym_BSLASH,
    ACTIONS(728), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(1042), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(247), 1,
      aux_sym_value_string_text_repeat1,
    ACTIONS(1040), 2,
      anon_sym_LF,
      sym_comment,
    STATE(196), 3,
      sym_value_string_text,
      sym_value_string_escaped_char,
      aux_sym_value_string_content_repeat1,
  [7177] = 2,
    ACTIONS(647), 1,
      anon_sym_LF,
    ACTIONS(649), 8,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
      sym_comment,
  [7191] = 2,
    ACTIONS(563), 1,
      anon_sym_LF,
    ACTIONS(565), 8,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
      sym_comment,
  [7205] = 5,
    ACTIONS(849), 1,
      sym_comment,
    ACTIONS(1046), 1,
      aux_sym_quoted_string_text_token1,
    ACTIONS(1049), 1,
      anon_sym_BSLASH,
    ACTIONS(1044), 2,
      anon_sym_DQUOTE,
      anon_sym_LBRACE_LBRACE,
    STATE(178), 4,
      sym_quoted_string_text,
      sym_invalid_quoted_string_escaped_char,
      sym_quoted_string_escaped_char,
      aux_sym_quoted_string_content_repeat1,
  [7225] = 2,
    ACTIONS(651), 1,
      anon_sym_LF,
    ACTIONS(653), 8,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
      sym_comment,
  [7239] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1054), 1,
      anon_sym_u,
    ACTIONS(1052), 7,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
      anon_sym_b,
      anon_sym_f,
      anon_sym_n,
      anon_sym_r,
      anon_sym_t,
  [7255] = 2,
    ACTIONS(567), 1,
      anon_sym_LF,
    ACTIONS(569), 8,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
      sym_comment,
  [7269] = 2,
    ACTIONS(639), 1,
      anon_sym_LF,
    ACTIONS(641), 8,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
      sym_comment,
  [7283] = 2,
    ACTIONS(607), 1,
      anon_sym_LF,
    ACTIONS(609), 8,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
      sym_comment,
  [7297] = 2,
    ACTIONS(655), 1,
      anon_sym_LF,
    ACTIONS(657), 8,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
      sym_comment,
  [7311] = 2,
    ACTIONS(627), 1,
      anon_sym_LF,
    ACTIONS(629), 8,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
      sym_comment,
  [7325] = 2,
    ACTIONS(611), 1,
      anon_sym_LF,
    ACTIONS(613), 8,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
      sym_comment,
  [7339] = 2,
    ACTIONS(635), 1,
      anon_sym_LF,
    ACTIONS(637), 8,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
      sym_comment,
  [7353] = 2,
    ACTIONS(603), 1,
      anon_sym_LF,
    ACTIONS(605), 8,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
      sym_comment,
  [7367] = 2,
    ACTIONS(575), 1,
      anon_sym_LF,
    ACTIONS(577), 8,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
      sym_comment,
  [7381] = 2,
    ACTIONS(623), 1,
      anon_sym_LF,
    ACTIONS(625), 8,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
      sym_comment,
  [7395] = 5,
    ACTIONS(843), 1,
      aux_sym_quoted_string_text_token1,
    ACTIONS(845), 1,
      anon_sym_BSLASH,
    ACTIONS(849), 1,
      sym_comment,
    ACTIONS(1056), 2,
      anon_sym_DQUOTE,
      anon_sym_LBRACE_LBRACE,
    STATE(178), 4,
      sym_quoted_string_text,
      sym_invalid_quoted_string_escaped_char,
      sym_quoted_string_escaped_char,
      aux_sym_quoted_string_content_repeat1,
  [7415] = 2,
    ACTIONS(571), 1,
      anon_sym_LF,
    ACTIONS(573), 8,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
      sym_comment,
  [7429] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1060), 1,
      anon_sym_u,
    ACTIONS(1058), 7,
      anon_sym_BSLASH,
      anon_sym_b,
      anon_sym_f,
      anon_sym_n,
      anon_sym_r,
      anon_sym_t,
      anon_sym_BQUOTE,
  [7445] = 2,
    ACTIONS(631), 1,
      anon_sym_LF,
    ACTIONS(633), 8,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
      sym_comment,
  [7459] = 2,
    ACTIONS(579), 1,
      anon_sym_LF,
    ACTIONS(581), 8,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
      sym_comment,
  [7473] = 6,
    ACTIONS(1064), 1,
      anon_sym_BSLASH,
    ACTIONS(1067), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(1070), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(247), 1,
      aux_sym_value_string_text_repeat1,
    ACTIONS(1062), 2,
      anon_sym_LF,
      sym_comment,
    STATE(196), 3,
      sym_value_string_text,
      sym_value_string_escaped_char,
      aux_sym_value_string_content_repeat1,
  [7495] = 2,
    ACTIONS(583), 1,
      anon_sym_LF,
    ACTIONS(585), 8,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
      sym_comment,
  [7509] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(752), 1,
      aux_sym_digit_token1,
    STATE(168), 2,
      sym_digit,
      aux_sym_integer_repeat1,
    ACTIONS(1072), 5,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_e,
      anon_sym_E,
  [7527] = 2,
    ACTIONS(619), 1,
      anon_sym_LF,
    ACTIONS(621), 8,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
      sym_comment,
  [7541] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1076), 1,
      anon_sym_DOT,
    STATE(223), 1,
      sym_fraction,
    STATE(365), 1,
      sym_exponent,
    ACTIONS(1078), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(1074), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [7563] = 2,
    ACTIONS(587), 1,
      anon_sym_LF,
    ACTIONS(589), 8,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
      sym_comment,
  [7577] = 2,
    ACTIONS(555), 1,
      anon_sym_LF,
    ACTIONS(557), 8,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
      sym_comment,
  [7591] = 2,
    ACTIONS(591), 1,
      anon_sym_LF,
    ACTIONS(593), 8,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
      sym_comment,
  [7605] = 2,
    ACTIONS(559), 1,
      anon_sym_LF,
    ACTIONS(561), 8,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
      sym_comment,
  [7619] = 2,
    ACTIONS(643), 1,
      anon_sym_LF,
    ACTIONS(645), 8,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
      sym_comment,
  [7633] = 2,
    ACTIONS(599), 1,
      anon_sym_LF,
    ACTIONS(601), 8,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
      sym_comment,
  [7647] = 2,
    ACTIONS(595), 1,
      anon_sym_LF,
    ACTIONS(597), 8,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
      sym_comment,
  [7661] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1080), 7,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      aux_sym_digit_token1,
      anon_sym_DOT,
      anon_sym_e,
      anon_sym_E,
  [7674] = 4,
    ACTIONS(989), 1,
      anon_sym_LF,
    ACTIONS(1082), 1,
      aux_sym_digit_token1,
    STATE(209), 2,
      sym_digit,
      aux_sym_integer_repeat1,
    ACTIONS(1085), 4,
      anon_sym_DOT,
      anon_sym_e,
      anon_sym_E,
      sym_comment,
  [7691] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(699), 1,
      anon_sym_DQUOTE,
    ACTIONS(707), 1,
      aux_sym_digit_token1,
    STATE(379), 1,
      sym_integer,
    STATE(217), 2,
      sym_digit,
      aux_sym_integer_repeat1,
    STATE(514), 2,
      sym_quoted_string,
      sym_float,
  [7712] = 4,
    ACTIONS(849), 1,
      sym_comment,
    ACTIONS(1089), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1087), 3,
      anon_sym_BSLASH,
      anon_sym_BQUOTE,
      aux_sym_oneline_string_text_token1,
    STATE(214), 3,
      sym_oneline_string_text,
      sym_oneline_string_escaped_char,
      aux_sym_oneline_string_content_repeat1,
  [7729] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(740), 1,
      anon_sym_DQUOTE,
    ACTIONS(1091), 1,
      anon_sym_RBRACE,
    ACTIONS(1093), 1,
      anon_sym_COMMA,
    STATE(388), 1,
      aux_sym_json_object_repeat1,
    STATE(389), 1,
      sym_json_key_value,
    STATE(465), 1,
      sym_json_string,
    STATE(466), 1,
      sym_json_key_string,
  [7754] = 6,
    ACTIONS(849), 1,
      sym_comment,
    ACTIONS(1095), 1,
      anon_sym_BSLASH,
    ACTIONS(1097), 1,
      anon_sym_SLASH,
    ACTIONS(1099), 1,
      aux_sym_regex_text_token1,
    STATE(486), 1,
      sym_regex_content,
    STATE(230), 3,
      sym_regex_text,
      sym_regex_escaped_char,
      aux_sym_regex_content_repeat1,
  [7775] = 6,
    ACTIONS(849), 1,
      sym_comment,
    ACTIONS(1101), 1,
      anon_sym_BSLASH,
    ACTIONS(1104), 1,
      anon_sym_BQUOTE,
    ACTIONS(1106), 1,
      aux_sym_oneline_string_text_token1,
    ACTIONS(1109), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(214), 3,
      sym_oneline_string_text,
      sym_oneline_string_escaped_char,
      aux_sym_oneline_string_content_repeat1,
  [7796] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(699), 1,
      anon_sym_DQUOTE,
    ACTIONS(707), 1,
      aux_sym_digit_token1,
    STATE(385), 1,
      sym_integer,
    STATE(217), 2,
      sym_digit,
      aux_sym_integer_repeat1,
    STATE(510), 2,
      sym_quoted_string,
      sym_float,
  [7817] = 6,
    ACTIONS(849), 1,
      sym_comment,
    ACTIONS(1095), 1,
      anon_sym_BSLASH,
    ACTIONS(1099), 1,
      aux_sym_regex_text_token1,
    ACTIONS(1111), 1,
      anon_sym_SLASH,
    STATE(512), 1,
      sym_regex_content,
    STATE(230), 3,
      sym_regex_text,
      sym_regex_escaped_char,
      aux_sym_regex_content_repeat1,
  [7838] = 4,
    ACTIONS(59), 1,
      aux_sym_digit_token1,
    ACTIONS(964), 1,
      anon_sym_LF,
    STATE(209), 2,
      sym_digit,
      aux_sym_integer_repeat1,
    ACTIONS(1113), 4,
      anon_sym_DOT,
      anon_sym_e,
      anon_sym_E,
      sym_comment,
  [7855] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1117), 1,
      anon_sym_COLON2,
    STATE(222), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    ACTIONS(1115), 4,
      anon_sym_COLON,
      sym_key_string_text,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
  [7872] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(740), 1,
      anon_sym_DQUOTE,
    ACTIONS(1093), 1,
      anon_sym_COMMA,
    ACTIONS(1119), 1,
      anon_sym_RBRACE,
    STATE(372), 1,
      aux_sym_json_object_repeat1,
    STATE(374), 1,
      sym_json_key_value,
    STATE(465), 1,
      sym_json_string,
    STATE(466), 1,
      sym_json_key_string,
  [7897] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(699), 1,
      anon_sym_DQUOTE,
    ACTIONS(707), 1,
      aux_sym_digit_token1,
    STATE(383), 1,
      sym_integer,
    STATE(217), 2,
      sym_digit,
      aux_sym_integer_repeat1,
    STATE(511), 2,
      sym_quoted_string,
      sym_float,
  [7918] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(699), 1,
      anon_sym_DQUOTE,
    ACTIONS(707), 1,
      aux_sym_digit_token1,
    STATE(381), 1,
      sym_integer,
    STATE(217), 2,
      sym_digit,
      aux_sym_integer_repeat1,
    STATE(513), 2,
      sym_quoted_string,
      sym_float,
  [7939] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1123), 1,
      anon_sym_COLON2,
    ACTIONS(1125), 1,
      sym_key_string_text,
    ACTIONS(1128), 1,
      anon_sym_BSLASH2,
    ACTIONS(1121), 2,
      anon_sym_COLON,
      anon_sym_LBRACE_LBRACE,
    STATE(222), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
  [7960] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(340), 1,
      sym_exponent,
    ACTIONS(1078), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(1131), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [7976] = 5,
    ACTIONS(1123), 1,
      sym_comment,
    ACTIONS(1133), 1,
      sym_key_string_text,
    ACTIONS(1136), 1,
      anon_sym_BSLASH2,
    ACTIONS(1121), 2,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    STATE(224), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
  [7994] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(695), 1,
      anon_sym_base64_COMMA,
    ACTIONS(697), 1,
      anon_sym_hex_COMMA,
    ACTIONS(699), 1,
      anon_sym_DQUOTE,
    STATE(508), 3,
      sym_oneline_base64,
      sym_oneline_hex,
      sym_quoted_string,
  [8012] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(695), 1,
      anon_sym_base64_COMMA,
    ACTIONS(697), 1,
      anon_sym_hex_COMMA,
    ACTIONS(699), 1,
      anon_sym_DQUOTE,
    STATE(509), 3,
      sym_oneline_base64,
      sym_oneline_hex,
      sym_quoted_string,
  [8030] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(752), 1,
      aux_sym_digit_token1,
    STATE(168), 2,
      sym_digit,
      aux_sym_integer_repeat1,
    ACTIONS(1139), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [8046] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(752), 1,
      aux_sym_digit_token1,
    STATE(168), 2,
      sym_digit,
      aux_sym_integer_repeat1,
    ACTIONS(1141), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [8062] = 4,
    ACTIONS(1145), 1,
      anon_sym_BSLASH,
    ACTIONS(1148), 1,
      sym_filename_text,
    STATE(229), 2,
      sym_filename_escaped_char,
      aux_sym_filename_content_repeat1,
    ACTIONS(1143), 3,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
      sym_comment,
  [8078] = 5,
    ACTIONS(849), 1,
      sym_comment,
    ACTIONS(1095), 1,
      anon_sym_BSLASH,
    ACTIONS(1099), 1,
      aux_sym_regex_text_token1,
    ACTIONS(1151), 1,
      anon_sym_SLASH,
    STATE(231), 3,
      sym_regex_text,
      sym_regex_escaped_char,
      aux_sym_regex_content_repeat1,
  [8096] = 5,
    ACTIONS(849), 1,
      sym_comment,
    ACTIONS(1153), 1,
      anon_sym_BSLASH,
    ACTIONS(1156), 1,
      anon_sym_SLASH,
    ACTIONS(1158), 1,
      aux_sym_regex_text_token1,
    STATE(231), 3,
      sym_regex_text,
      sym_regex_escaped_char,
      aux_sym_regex_content_repeat1,
  [8114] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(235), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    ACTIONS(1115), 4,
      anon_sym_COLON2,
      sym_key_string_text,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
  [8128] = 3,
    ACTIONS(1117), 1,
      sym_comment,
    STATE(224), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    ACTIONS(1115), 4,
      anon_sym_LF,
      sym_key_string_text,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
  [8142] = 5,
    ACTIONS(849), 1,
      sym_comment,
    ACTIONS(1161), 1,
      anon_sym_BSLASH,
    ACTIONS(1164), 1,
      sym_filename_text,
    ACTIONS(1143), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE_LBRACE,
    STATE(234), 2,
      sym_filename_escaped_char,
      aux_sym_filename_content_repeat1,
  [8160] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1167), 1,
      sym_key_string_text,
    ACTIONS(1170), 1,
      anon_sym_BSLASH2,
    ACTIONS(1121), 2,
      anon_sym_COLON2,
      anon_sym_LBRACE_LBRACE,
    STATE(235), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
  [8178] = 3,
    ACTIONS(849), 1,
      sym_comment,
    STATE(234), 2,
      sym_filename_escaped_char,
      aux_sym_filename_content_repeat1,
    ACTIONS(1173), 4,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      sym_filename_text,
      anon_sym_LBRACE_LBRACE,
  [8192] = 4,
    ACTIONS(91), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(237), 1,
      aux_sym__comment_or_new_line_repeat1,
    ACTIONS(1175), 2,
      anon_sym_LF,
      sym_comment,
    ACTIONS(96), 3,
      anon_sym_BSLASH,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      aux_sym_multiline_string_text_token1,
  [8208] = 4,
    ACTIONS(83), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(237), 1,
      aux_sym__comment_or_new_line_repeat1,
    ACTIONS(1178), 2,
      anon_sym_LF,
      sym_comment,
    ACTIONS(87), 3,
      anon_sym_BSLASH,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      aux_sym_multiline_string_text_token1,
  [8224] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1182), 1,
      anon_sym_u,
    ACTIONS(1184), 1,
      anon_sym_POUND,
    ACTIONS(1180), 4,
      anon_sym_BSLASH,
      anon_sym_b,
      anon_sym_f,
      anon_sym_BQUOTE,
  [8240] = 6,
    ACTIONS(1074), 1,
      anon_sym_LF,
    ACTIONS(1186), 1,
      anon_sym_DOT,
    ACTIONS(1190), 1,
      sym_comment,
    STATE(326), 1,
      sym_fraction,
    STATE(461), 1,
      sym_exponent,
    ACTIONS(1188), 2,
      anon_sym_e,
      anon_sym_E,
  [8260] = 2,
    STATE(229), 2,
      sym_filename_escaped_char,
      aux_sym_filename_content_repeat1,
    ACTIONS(1173), 5,
      anon_sym_LF,
      anon_sym_BSLASH,
      sym_filename_text,
      anon_sym_LBRACE_LBRACE,
      sym_comment,
  [8272] = 4,
    ACTIONS(59), 1,
      aux_sym_digit_token1,
    ACTIONS(1072), 1,
      anon_sym_LF,
    STATE(209), 2,
      sym_digit,
      aux_sym_integer_repeat1,
    ACTIONS(1192), 3,
      anon_sym_e,
      anon_sym_E,
      sym_comment,
  [8288] = 3,
    ACTIONS(1196), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(1198), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1194), 4,
      anon_sym_LF,
      anon_sym_BSLASH,
      aux_sym_multiline_string_text_token1,
      sym_comment,
  [8301] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1202), 1,
      anon_sym_COLON2,
    ACTIONS(1200), 4,
      anon_sym_COLON,
      sym_key_string_text,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
  [8314] = 5,
    ACTIONS(7), 1,
      anon_sym_LF,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(691), 1,
      ts_builtin_sym_end,
    STATE(10), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(249), 2,
      sym__comment_or_new_line,
      aux_sym_hurl_file_repeat2,
  [8331] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(707), 1,
      aux_sym_digit_token1,
    ACTIONS(1204), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(289), 2,
      sym_digit,
      aux_sym_integer_repeat1,
  [8346] = 4,
    ACTIONS(1208), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(1210), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(260), 1,
      aux_sym_value_string_text_repeat1,
    ACTIONS(1206), 3,
      anon_sym_LF,
      anon_sym_BSLASH,
      sym_comment,
  [8361] = 5,
    ACTIONS(7), 1,
      anon_sym_LF,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1212), 1,
      ts_builtin_sym_end,
    STATE(10), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(249), 2,
      sym__comment_or_new_line,
      aux_sym_hurl_file_repeat2,
  [8378] = 5,
    ACTIONS(435), 1,
      ts_builtin_sym_end,
    ACTIONS(1214), 1,
      anon_sym_LF,
    ACTIONS(1217), 1,
      sym_comment,
    STATE(10), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(249), 2,
      sym__comment_or_new_line,
      aux_sym_hurl_file_repeat2,
  [8395] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1222), 1,
      anon_sym_COLON2,
    ACTIONS(1220), 4,
      anon_sym_COLON,
      sym_key_string_text,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
  [8408] = 2,
    ACTIONS(1226), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1224), 5,
      anon_sym_LF,
      anon_sym_BSLASH,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      aux_sym_multiline_string_text_token1,
      sym_comment,
  [8419] = 2,
    ACTIONS(1202), 1,
      sym_comment,
    ACTIONS(1200), 5,
      anon_sym_LF,
      anon_sym_COLON,
      sym_key_string_text,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
  [8430] = 2,
    ACTIONS(1200), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1202), 5,
      anon_sym_LF,
      anon_sym_BSLASH,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      aux_sym_multiline_string_text_token1,
      sym_comment,
  [8441] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1230), 1,
      aux_sym_hexdigit_token1,
    ACTIONS(1228), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
    STATE(254), 2,
      sym_hexdigit,
      aux_sym_oneline_hex_repeat1,
  [8456] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(752), 1,
      aux_sym_digit_token1,
    ACTIONS(1233), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(228), 2,
      sym_digit,
      aux_sym_integer_repeat1,
  [8471] = 3,
    ACTIONS(1235), 1,
      anon_sym_LF,
    ACTIONS(1239), 1,
      sym_comment,
    ACTIONS(1237), 4,
      anon_sym_COLON,
      sym_key_string_text,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
  [8484] = 2,
    ACTIONS(1243), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1241), 5,
      anon_sym_LF,
      anon_sym_BSLASH,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      aux_sym_multiline_string_text_token1,
      sym_comment,
  [8495] = 2,
    ACTIONS(1080), 1,
      anon_sym_LF,
    ACTIONS(1245), 5,
      aux_sym_digit_token1,
      anon_sym_DOT,
      anon_sym_e,
      anon_sym_E,
      sym_comment,
  [8506] = 2,
    ACTIONS(1249), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1247), 5,
      anon_sym_LF,
      anon_sym_BSLASH,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      aux_sym_multiline_string_text_token1,
      sym_comment,
  [8517] = 4,
    ACTIONS(1253), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(1256), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(260), 1,
      aux_sym_value_string_text_repeat1,
    ACTIONS(1251), 3,
      anon_sym_LF,
      anon_sym_BSLASH,
      sym_comment,
  [8532] = 4,
    ACTIONS(1258), 1,
      anon_sym_LF,
    ACTIONS(1260), 1,
      sym_comment,
    STATE(263), 1,
      aux_sym__comment_or_new_line_repeat1,
    ACTIONS(83), 3,
      sym_key_string_text,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
  [8547] = 3,
    ACTIONS(817), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(1198), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1194), 4,
      anon_sym_LF,
      anon_sym_BSLASH,
      aux_sym_multiline_string_text_token1,
      sym_comment,
  [8560] = 4,
    ACTIONS(1262), 1,
      anon_sym_LF,
    ACTIONS(1265), 1,
      sym_comment,
    STATE(263), 1,
      aux_sym__comment_or_new_line_repeat1,
    ACTIONS(91), 3,
      sym_key_string_text,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
  [8575] = 3,
    ACTIONS(811), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(1198), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1194), 4,
      anon_sym_LF,
      anon_sym_BSLASH,
      aux_sym_multiline_string_text_token1,
      sym_comment,
  [8588] = 2,
    ACTIONS(1270), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1268), 5,
      anon_sym_LF,
      anon_sym_BSLASH,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      aux_sym_multiline_string_text_token1,
      sym_comment,
  [8599] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1272), 1,
      anon_sym_SEMI,
    ACTIONS(1274), 1,
      aux_sym_hexdigit_token1,
    STATE(298), 2,
      sym_hexdigit,
      aux_sym_oneline_hex_repeat1,
  [8613] = 1,
    ACTIONS(1202), 5,
      anon_sym_LF,
      anon_sym_BSLASH,
      sym_filename_text,
      anon_sym_LBRACE_LBRACE,
      sym_comment,
  [8621] = 2,
    ACTIONS(1200), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1202), 4,
      anon_sym_LF,
      anon_sym_BSLASH,
      aux_sym_value_string_text_token1,
      sym_comment,
  [8631] = 3,
    ACTIONS(849), 1,
      sym_comment,
    ACTIONS(1278), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1276), 3,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
      aux_sym_json_string_text_token1,
  [8643] = 2,
    ACTIONS(1282), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1280), 4,
      anon_sym_LF,
      anon_sym_BSLASH,
      aux_sym_value_string_text_token1,
      sym_comment,
  [8653] = 3,
    ACTIONS(849), 1,
      sym_comment,
    ACTIONS(1286), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1284), 3,
      anon_sym_BSLASH,
      anon_sym_BQUOTE,
      aux_sym_oneline_string_text_token1,
  [8665] = 3,
    ACTIONS(849), 1,
      sym_comment,
    ACTIONS(1290), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1288), 3,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
      aux_sym_json_string_text_token1,
  [8677] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1292), 4,
      anon_sym_COLON2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [8687] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1220), 4,
      anon_sym_COLON2,
      sym_key_string_text,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
  [8697] = 3,
    ACTIONS(849), 1,
      sym_comment,
    ACTIONS(1296), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1294), 3,
      anon_sym_BSLASH,
      anon_sym_BQUOTE,
      aux_sym_oneline_string_text_token1,
  [8709] = 4,
    ACTIONS(59), 1,
      aux_sym_digit_token1,
    ACTIONS(1139), 1,
      anon_sym_LF,
    ACTIONS(1298), 1,
      sym_comment,
    STATE(209), 2,
      sym_digit,
      aux_sym_integer_repeat1,
  [8723] = 3,
    ACTIONS(849), 1,
      sym_comment,
    ACTIONS(1200), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1202), 3,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
      aux_sym_json_string_text_token1,
  [8735] = 2,
    ACTIONS(849), 1,
      sym_comment,
    ACTIONS(1241), 4,
      anon_sym_DQUOTE,
      aux_sym_quoted_string_text_token1,
      anon_sym_BSLASH,
      anon_sym_LBRACE_LBRACE,
  [8745] = 3,
    ACTIONS(849), 1,
      sym_comment,
    ACTIONS(1302), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1300), 3,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
      aux_sym_json_string_text_token1,
  [8757] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1304), 1,
      anon_sym_DQUOTE,
    ACTIONS(1306), 1,
      anon_sym_SLASH,
    STATE(82), 2,
      sym_quoted_string,
      sym_regex,
  [8771] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1274), 1,
      aux_sym_hexdigit_token1,
    ACTIONS(1308), 1,
      anon_sym_RBRACE,
    STATE(254), 2,
      sym_hexdigit,
      aux_sym_oneline_hex_repeat1,
  [8785] = 3,
    ACTIONS(849), 1,
      sym_comment,
    ACTIONS(1312), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1310), 3,
      anon_sym_BSLASH,
      anon_sym_BQUOTE,
      aux_sym_oneline_string_text_token1,
  [8797] = 3,
    ACTIONS(849), 1,
      sym_comment,
    ACTIONS(1316), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1314), 3,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
      aux_sym_json_string_text_token1,
  [8809] = 3,
    ACTIONS(849), 1,
      sym_comment,
    ACTIONS(1200), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1202), 3,
      anon_sym_BSLASH,
      anon_sym_BQUOTE,
      aux_sym_oneline_string_text_token1,
  [8821] = 5,
    ACTIONS(15), 1,
      anon_sym_LF,
    ACTIONS(61), 1,
      sym_comment,
    STATE(46), 1,
      sym__comment_or_new_line,
    STATE(52), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(290), 1,
      aux_sym_query_string_params_section_repeat1,
  [8837] = 5,
    ACTIONS(15), 1,
      anon_sym_LF,
    ACTIONS(61), 1,
      sym_comment,
    STATE(26), 1,
      sym__comment_or_new_line,
    STATE(52), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(329), 1,
      aux_sym_multipart_form_data_section_repeat1,
  [8853] = 2,
    ACTIONS(849), 1,
      sym_comment,
    ACTIONS(1318), 4,
      anon_sym_DQUOTE,
      aux_sym_quoted_string_text_token1,
      anon_sym_BSLASH,
      anon_sym_LBRACE_LBRACE,
  [8863] = 2,
    ACTIONS(849), 1,
      sym_comment,
    ACTIONS(1320), 4,
      anon_sym_DQUOTE,
      aux_sym_quoted_string_text_token1,
      anon_sym_BSLASH,
      anon_sym_LBRACE_LBRACE,
  [8873] = 4,
    ACTIONS(59), 1,
      aux_sym_digit_token1,
    ACTIONS(1141), 1,
      anon_sym_LF,
    ACTIONS(1322), 1,
      sym_comment,
    STATE(209), 2,
      sym_digit,
      aux_sym_integer_repeat1,
  [8887] = 5,
    ACTIONS(1324), 1,
      anon_sym_LF,
    ACTIONS(1327), 1,
      sym_comment,
    STATE(153), 1,
      sym__comment_or_new_line,
    STATE(261), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(290), 1,
      aux_sym_query_string_params_section_repeat1,
  [8903] = 2,
    ACTIONS(849), 1,
      sym_comment,
    ACTIONS(1330), 4,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      sym_filename_text,
      anon_sym_LBRACE_LBRACE,
  [8913] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(740), 1,
      anon_sym_DQUOTE,
    STATE(428), 1,
      sym_json_key_value,
    STATE(465), 1,
      sym_json_string,
    STATE(466), 1,
      sym_json_key_string,
  [8929] = 5,
    ACTIONS(15), 1,
      anon_sym_LF,
    ACTIONS(61), 1,
      sym_comment,
    STATE(47), 1,
      sym__comment_or_new_line,
    STATE(52), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(290), 1,
      aux_sym_query_string_params_section_repeat1,
  [8945] = 2,
    ACTIONS(849), 1,
      sym_comment,
    ACTIONS(1202), 4,
      anon_sym_DQUOTE,
      aux_sym_quoted_string_text_token1,
      anon_sym_BSLASH,
      anon_sym_LBRACE_LBRACE,
  [8955] = 1,
    ACTIONS(1330), 5,
      anon_sym_LF,
      anon_sym_BSLASH,
      sym_filename_text,
      anon_sym_LBRACE_LBRACE,
      sym_comment,
  [8963] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1200), 4,
      anon_sym_COLON2,
      sym_key_string_text,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
  [8973] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1304), 1,
      anon_sym_DQUOTE,
    ACTIONS(1306), 1,
      anon_sym_SLASH,
    STATE(73), 2,
      sym_quoted_string,
      sym_regex,
  [8987] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1274), 1,
      aux_sym_hexdigit_token1,
    ACTIONS(1332), 1,
      anon_sym_SEMI,
    STATE(254), 2,
      sym_hexdigit,
      aux_sym_oneline_hex_repeat1,
  [9001] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1334), 4,
      anon_sym_COLON2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [9011] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(707), 1,
      aux_sym_digit_token1,
    STATE(335), 1,
      sym_integer,
    STATE(217), 2,
      sym_digit,
      aux_sym_integer_repeat1,
  [9025] = 3,
    ACTIONS(849), 1,
      sym_comment,
    ACTIONS(1243), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1241), 3,
      anon_sym_BSLASH,
      anon_sym_BQUOTE,
      aux_sym_oneline_string_text_token1,
  [9037] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(707), 1,
      aux_sym_digit_token1,
    STATE(334), 1,
      sym_integer,
    STATE(217), 2,
      sym_digit,
      aux_sym_integer_repeat1,
  [9051] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(707), 1,
      aux_sym_digit_token1,
    STATE(332), 1,
      sym_integer,
    STATE(217), 2,
      sym_digit,
      aux_sym_integer_repeat1,
  [9065] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(699), 1,
      anon_sym_DQUOTE,
    ACTIONS(1336), 1,
      anon_sym_SLASH,
    STATE(181), 2,
      sym_quoted_string,
      sym_regex,
  [9079] = 5,
    ACTIONS(15), 1,
      anon_sym_LF,
    ACTIONS(61), 1,
      sym_comment,
    STATE(44), 1,
      sym__comment_or_new_line,
    STATE(52), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(290), 1,
      aux_sym_query_string_params_section_repeat1,
  [9095] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1274), 1,
      aux_sym_hexdigit_token1,
    ACTIONS(1338), 1,
      anon_sym_RBRACE,
    STATE(254), 2,
      sym_hexdigit,
      aux_sym_oneline_hex_repeat1,
  [9109] = 5,
    ACTIONS(15), 1,
      anon_sym_LF,
    ACTIONS(61), 1,
      sym_comment,
    STATE(44), 1,
      sym__comment_or_new_line,
    STATE(52), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(313), 1,
      aux_sym_query_string_params_section_repeat1,
  [9125] = 2,
    ACTIONS(1342), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1340), 4,
      anon_sym_LF,
      anon_sym_BSLASH,
      aux_sym_value_string_text_token1,
      sym_comment,
  [9135] = 5,
    ACTIONS(15), 1,
      anon_sym_LF,
    ACTIONS(61), 1,
      sym_comment,
    STATE(24), 1,
      sym__comment_or_new_line,
    STATE(52), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(329), 1,
      aux_sym_multipart_form_data_section_repeat1,
  [9151] = 2,
    ACTIONS(849), 1,
      sym_comment,
    ACTIONS(1344), 4,
      anon_sym_DQUOTE,
      aux_sym_quoted_string_text_token1,
      anon_sym_BSLASH,
      anon_sym_LBRACE_LBRACE,
  [9161] = 2,
    ACTIONS(1348), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1346), 4,
      anon_sym_LF,
      anon_sym_BSLASH,
      aux_sym_value_string_text_token1,
      sym_comment,
  [9171] = 2,
    ACTIONS(1222), 1,
      sym_comment,
    ACTIONS(1220), 4,
      anon_sym_LF,
      sym_key_string_text,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
  [9181] = 5,
    ACTIONS(15), 1,
      anon_sym_LF,
    ACTIONS(61), 1,
      sym_comment,
    STATE(42), 1,
      sym__comment_or_new_line,
    STATE(52), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(290), 1,
      aux_sym_query_string_params_section_repeat1,
  [9197] = 5,
    ACTIONS(15), 1,
      anon_sym_LF,
    ACTIONS(61), 1,
      sym_comment,
    STATE(24), 1,
      sym__comment_or_new_line,
    STATE(52), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(286), 1,
      aux_sym_multipart_form_data_section_repeat1,
  [9213] = 5,
    ACTIONS(15), 1,
      anon_sym_LF,
    ACTIONS(61), 1,
      sym_comment,
    STATE(40), 1,
      sym__comment_or_new_line,
    STATE(52), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(290), 1,
      aux_sym_query_string_params_section_repeat1,
  [9229] = 5,
    ACTIONS(15), 1,
      anon_sym_LF,
    ACTIONS(61), 1,
      sym_comment,
    STATE(40), 1,
      sym__comment_or_new_line,
    STATE(52), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(285), 1,
      aux_sym_query_string_params_section_repeat1,
  [9245] = 5,
    ACTIONS(15), 1,
      anon_sym_LF,
    ACTIONS(61), 1,
      sym_comment,
    STATE(45), 1,
      sym__comment_or_new_line,
    STATE(52), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(290), 1,
      aux_sym_query_string_params_section_repeat1,
  [9261] = 5,
    ACTIONS(15), 1,
      anon_sym_LF,
    ACTIONS(61), 1,
      sym_comment,
    STATE(45), 1,
      sym__comment_or_new_line,
    STATE(52), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(293), 1,
      aux_sym_query_string_params_section_repeat1,
  [9277] = 2,
    ACTIONS(1243), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1241), 4,
      anon_sym_LF,
      anon_sym_BSLASH,
      aux_sym_value_string_text_token1,
      sym_comment,
  [9287] = 3,
    ACTIONS(849), 1,
      sym_comment,
    ACTIONS(1352), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1350), 3,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
      aux_sym_json_string_text_token1,
  [9299] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(699), 1,
      anon_sym_DQUOTE,
    ACTIONS(1336), 1,
      anon_sym_SLASH,
    STATE(504), 2,
      sym_quoted_string,
      sym_regex,
  [9313] = 2,
    ACTIONS(849), 1,
      sym_comment,
    ACTIONS(1202), 4,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      sym_filename_text,
      anon_sym_LBRACE_LBRACE,
  [9323] = 4,
    ACTIONS(15), 1,
      anon_sym_LF,
    ACTIONS(61), 1,
      sym_comment,
    STATE(52), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(3), 2,
      sym__comment_or_new_line,
      aux_sym_hurl_file_repeat2,
  [9337] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(699), 1,
      anon_sym_DQUOTE,
    ACTIONS(1336), 1,
      anon_sym_SLASH,
    STATE(188), 2,
      sym_quoted_string,
      sym_regex,
  [9351] = 2,
    ACTIONS(849), 1,
      sym_comment,
    ACTIONS(1354), 4,
      anon_sym_DQUOTE,
      aux_sym_quoted_string_text_token1,
      anon_sym_BSLASH,
      anon_sym_LBRACE_LBRACE,
  [9361] = 4,
    ACTIONS(1131), 1,
      anon_sym_LF,
    ACTIONS(1356), 1,
      sym_comment,
    STATE(481), 1,
      sym_exponent,
    ACTIONS(1188), 2,
      anon_sym_e,
      anon_sym_E,
  [9375] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1274), 1,
      aux_sym_hexdigit_token1,
    ACTIONS(1358), 1,
      anon_sym_RBRACE,
    STATE(254), 2,
      sym_hexdigit,
      aux_sym_oneline_hex_repeat1,
  [9389] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1274), 1,
      aux_sym_hexdigit_token1,
    ACTIONS(1360), 1,
      anon_sym_RBRACE,
    STATE(254), 2,
      sym_hexdigit,
      aux_sym_oneline_hex_repeat1,
  [9403] = 5,
    ACTIONS(1362), 1,
      anon_sym_LF,
    ACTIONS(1365), 1,
      sym_comment,
    STATE(136), 1,
      sym__comment_or_new_line,
    STATE(261), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(329), 1,
      aux_sym_multipart_form_data_section_repeat1,
  [9419] = 4,
    ACTIONS(754), 1,
      anon_sym_LF,
    ACTIONS(770), 1,
      sym_comment,
    STATE(56), 1,
      sym__comment_or_new_line,
    STATE(64), 1,
      aux_sym__comment_or_new_line_repeat1,
  [9432] = 4,
    ACTIONS(15), 1,
      anon_sym_LF,
    ACTIONS(61), 1,
      sym_comment,
    STATE(52), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(57), 1,
      sym__comment_or_new_line,
  [9445] = 4,
    ACTIONS(7), 1,
      anon_sym_LF,
    ACTIONS(11), 1,
      sym_comment,
    STATE(10), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(32), 1,
      sym__comment_or_new_line,
  [9458] = 4,
    ACTIONS(7), 1,
      anon_sym_LF,
    ACTIONS(11), 1,
      sym_comment,
    STATE(10), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(28), 1,
      sym__comment_or_new_line,
  [9471] = 4,
    ACTIONS(7), 1,
      anon_sym_LF,
    ACTIONS(11), 1,
      sym_comment,
    STATE(10), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(36), 1,
      sym__comment_or_new_line,
  [9484] = 4,
    ACTIONS(7), 1,
      anon_sym_LF,
    ACTIONS(11), 1,
      sym_comment,
    STATE(10), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(35), 1,
      sym__comment_or_new_line,
  [9497] = 4,
    ACTIONS(7), 1,
      anon_sym_LF,
    ACTIONS(11), 1,
      sym_comment,
    STATE(10), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(31), 1,
      sym__comment_or_new_line,
  [9510] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1368), 1,
      aux_sym_variable_name_token1,
    STATE(124), 1,
      sym_variable_name,
    STATE(530), 1,
      sym_expr,
  [9523] = 4,
    ACTIONS(7), 1,
      anon_sym_LF,
    ACTIONS(11), 1,
      sym_comment,
    STATE(10), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(30), 1,
      sym__comment_or_new_line,
  [9536] = 4,
    ACTIONS(7), 1,
      anon_sym_LF,
    ACTIONS(11), 1,
      sym_comment,
    STATE(10), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(29), 1,
      sym__comment_or_new_line,
  [9549] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1370), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [9558] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(752), 1,
      aux_sym_digit_token1,
    STATE(227), 2,
      sym_digit,
      aux_sym_integer_repeat1,
  [9569] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1372), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [9578] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1368), 1,
      aux_sym_variable_name_token1,
    STATE(124), 1,
      sym_variable_name,
    STATE(529), 1,
      sym_expr,
  [9591] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1368), 1,
      aux_sym_variable_name_token1,
    STATE(124), 1,
      sym_variable_name,
    STATE(528), 1,
      sym_expr,
  [9604] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1368), 1,
      aux_sym_variable_name_token1,
    STATE(124), 1,
      sym_variable_name,
    STATE(527), 1,
      sym_expr,
  [9617] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1368), 1,
      aux_sym_variable_name_token1,
    STATE(124), 1,
      sym_variable_name,
    STATE(526), 1,
      sym_expr,
  [9630] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1368), 1,
      aux_sym_variable_name_token1,
    STATE(124), 1,
      sym_variable_name,
    STATE(525), 1,
      sym_expr,
  [9643] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1368), 1,
      aux_sym_variable_name_token1,
    STATE(124), 1,
      sym_variable_name,
    STATE(524), 1,
      sym_expr,
  [9656] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1274), 1,
      aux_sym_hexdigit_token1,
    STATE(328), 2,
      sym_hexdigit,
      aux_sym_oneline_hex_repeat1,
  [9667] = 4,
    ACTIONS(7), 1,
      anon_sym_LF,
    ACTIONS(11), 1,
      sym_comment,
    STATE(10), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(51), 1,
      sym__comment_or_new_line,
  [9680] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1368), 1,
      aux_sym_variable_name_token1,
    STATE(124), 1,
      sym_variable_name,
    STATE(522), 1,
      sym_expr,
  [9693] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1274), 1,
      aux_sym_hexdigit_token1,
    STATE(327), 2,
      sym_hexdigit,
      aux_sym_oneline_hex_repeat1,
  [9704] = 2,
    ACTIONS(849), 1,
      sym_comment,
    ACTIONS(1374), 3,
      anon_sym_BSLASH,
      anon_sym_SLASH,
      aux_sym_regex_text_token1,
  [9713] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1376), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [9722] = 4,
    ACTIONS(1378), 1,
      anon_sym_LF,
    ACTIONS(1380), 1,
      sym_comment,
    STATE(261), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(534), 1,
      sym__comment_or_new_line,
  [9735] = 4,
    ACTIONS(1382), 1,
      anon_sym_LF,
    ACTIONS(1384), 1,
      aux_sym_file_contenttype_token1,
    ACTIONS(1386), 1,
      sym_comment,
    STATE(501), 1,
      sym_file_contenttype,
  [9748] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1368), 1,
      aux_sym_variable_name_token1,
    STATE(124), 1,
      sym_variable_name,
    STATE(519), 1,
      sym_expr,
  [9761] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1274), 1,
      aux_sym_hexdigit_token1,
    STATE(306), 2,
      sym_hexdigit,
      aux_sym_oneline_hex_repeat1,
  [9772] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1388), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [9781] = 4,
    ACTIONS(7), 1,
      anon_sym_LF,
    ACTIONS(11), 1,
      sym_comment,
    STATE(10), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(59), 1,
      sym__comment_or_new_line,
  [9794] = 4,
    ACTIONS(7), 1,
      anon_sym_LF,
    ACTIONS(11), 1,
      sym_comment,
    STATE(10), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(27), 1,
      sym__comment_or_new_line,
  [9807] = 4,
    ACTIONS(7), 1,
      anon_sym_LF,
    ACTIONS(11), 1,
      sym_comment,
    STATE(10), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(37), 1,
      sym__comment_or_new_line,
  [9820] = 4,
    ACTIONS(7), 1,
      anon_sym_LF,
    ACTIONS(11), 1,
      sym_comment,
    STATE(10), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(34), 1,
      sym__comment_or_new_line,
  [9833] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(707), 1,
      aux_sym_digit_token1,
    STATE(242), 2,
      sym_digit,
      aux_sym_integer_repeat1,
  [9844] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1131), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [9853] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1390), 1,
      anon_sym_COMMA,
    ACTIONS(1392), 1,
      anon_sym_RBRACK,
    STATE(386), 1,
      aux_sym_json_array_repeat1,
  [9866] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1368), 1,
      aux_sym_variable_name_token1,
    STATE(124), 1,
      sym_variable_name,
    STATE(495), 1,
      sym_expr,
  [9879] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1394), 1,
      anon_sym_COMMA,
    ACTIONS(1397), 1,
      anon_sym_RBRACK,
    STATE(368), 1,
      aux_sym_json_array_repeat1,
  [9892] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(380), 1,
      sym_status,
    ACTIONS(1399), 2,
      aux_sym_status_token1,
      anon_sym_STAR,
  [9903] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(752), 1,
      aux_sym_digit_token1,
    STATE(198), 2,
      sym_digit,
      aux_sym_integer_repeat1,
  [9914] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1368), 1,
      aux_sym_variable_name_token1,
    STATE(124), 1,
      sym_variable_name,
    STATE(506), 1,
      sym_expr,
  [9927] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1093), 1,
      anon_sym_COMMA,
    ACTIONS(1401), 1,
      anon_sym_RBRACE,
    STATE(377), 1,
      aux_sym_json_object_repeat1,
  [9940] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1403), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [9949] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1093), 1,
      anon_sym_COMMA,
    ACTIONS(1401), 1,
      anon_sym_RBRACE,
    STATE(375), 1,
      aux_sym_json_object_repeat1,
  [9962] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1093), 1,
      anon_sym_COMMA,
    ACTIONS(1405), 1,
      anon_sym_RBRACE,
    STATE(377), 1,
      aux_sym_json_object_repeat1,
  [9975] = 4,
    ACTIONS(1186), 1,
      anon_sym_DOT,
    ACTIONS(1407), 1,
      anon_sym_LF,
    ACTIONS(1409), 1,
      sym_comment,
    STATE(532), 1,
      sym_fraction,
  [9988] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1411), 1,
      anon_sym_RBRACE,
    ACTIONS(1413), 1,
      anon_sym_COMMA,
    STATE(377), 1,
      aux_sym_json_object_repeat1,
  [10001] = 4,
    ACTIONS(807), 1,
      sym_comment,
    ACTIONS(954), 1,
      anon_sym_LF,
    STATE(131), 1,
      sym__comment_or_new_line,
    STATE(238), 1,
      aux_sym__comment_or_new_line_repeat1,
  [10014] = 4,
    ACTIONS(1186), 1,
      anon_sym_DOT,
    ACTIONS(1416), 1,
      anon_sym_LF,
    ACTIONS(1418), 1,
      sym_comment,
    STATE(532), 1,
      sym_fraction,
  [10027] = 4,
    ACTIONS(754), 1,
      anon_sym_LF,
    ACTIONS(770), 1,
      sym_comment,
    STATE(9), 1,
      sym__comment_or_new_line,
    STATE(64), 1,
      aux_sym__comment_or_new_line_repeat1,
  [10040] = 4,
    ACTIONS(1186), 1,
      anon_sym_DOT,
    ACTIONS(1420), 1,
      anon_sym_LF,
    ACTIONS(1422), 1,
      sym_comment,
    STATE(532), 1,
      sym_fraction,
  [10053] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1390), 1,
      anon_sym_COMMA,
    ACTIONS(1424), 1,
      anon_sym_RBRACK,
    STATE(368), 1,
      aux_sym_json_array_repeat1,
  [10066] = 4,
    ACTIONS(1186), 1,
      anon_sym_DOT,
    ACTIONS(1426), 1,
      anon_sym_LF,
    ACTIONS(1428), 1,
      sym_comment,
    STATE(532), 1,
      sym_fraction,
  [10079] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1093), 1,
      anon_sym_COMMA,
    ACTIONS(1430), 1,
      anon_sym_RBRACE,
    STATE(377), 1,
      aux_sym_json_object_repeat1,
  [10092] = 4,
    ACTIONS(1186), 1,
      anon_sym_DOT,
    ACTIONS(1432), 1,
      anon_sym_LF,
    ACTIONS(1434), 1,
      sym_comment,
    STATE(532), 1,
      sym_fraction,
  [10105] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1390), 1,
      anon_sym_COMMA,
    ACTIONS(1436), 1,
      anon_sym_RBRACK,
    STATE(368), 1,
      aux_sym_json_array_repeat1,
  [10118] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1390), 1,
      anon_sym_COMMA,
    ACTIONS(1438), 1,
      anon_sym_RBRACK,
    STATE(382), 1,
      aux_sym_json_array_repeat1,
  [10131] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1093), 1,
      anon_sym_COMMA,
    ACTIONS(1440), 1,
      anon_sym_RBRACE,
    STATE(377), 1,
      aux_sym_json_object_repeat1,
  [10144] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1093), 1,
      anon_sym_COMMA,
    ACTIONS(1440), 1,
      anon_sym_RBRACE,
    STATE(384), 1,
      aux_sym_json_object_repeat1,
  [10157] = 4,
    ACTIONS(1378), 1,
      anon_sym_LF,
    ACTIONS(1380), 1,
      sym_comment,
    STATE(144), 1,
      sym__comment_or_new_line,
    STATE(261), 1,
      aux_sym__comment_or_new_line_repeat1,
  [10170] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1278), 3,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      aux_sym_hexdigit_token1,
  [10179] = 4,
    ACTIONS(7), 1,
      anon_sym_LF,
    ACTIONS(11), 1,
      sym_comment,
    STATE(10), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(49), 1,
      sym__comment_or_new_line,
  [10192] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1444), 1,
      anon_sym_POUND,
    ACTIONS(1442), 2,
      anon_sym_SEMI,
      aux_sym_filename_escaped_char_token1,
  [10203] = 4,
    ACTIONS(1378), 1,
      anon_sym_LF,
    ACTIONS(1380), 1,
      sym_comment,
    STATE(127), 1,
      sym__comment_or_new_line,
    STATE(261), 1,
      aux_sym__comment_or_new_line_repeat1,
  [10216] = 4,
    ACTIONS(1384), 1,
      aux_sym_file_contenttype_token1,
    ACTIONS(1446), 1,
      anon_sym_LF,
    ACTIONS(1448), 1,
      sym_comment,
    STATE(494), 1,
      sym_file_contenttype,
  [10229] = 4,
    ACTIONS(754), 1,
      anon_sym_LF,
    ACTIONS(770), 1,
      sym_comment,
    STATE(64), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(68), 1,
      sym__comment_or_new_line,
  [10242] = 4,
    ACTIONS(1378), 1,
      anon_sym_LF,
    ACTIONS(1380), 1,
      sym_comment,
    STATE(129), 1,
      sym__comment_or_new_line,
    STATE(261), 1,
      aux_sym__comment_or_new_line_repeat1,
  [10255] = 4,
    ACTIONS(1186), 1,
      anon_sym_DOT,
    ACTIONS(1450), 1,
      anon_sym_LF,
    ACTIONS(1452), 1,
      sym_comment,
    STATE(532), 1,
      sym_fraction,
  [10268] = 4,
    ACTIONS(1378), 1,
      anon_sym_LF,
    ACTIONS(1380), 1,
      sym_comment,
    STATE(125), 1,
      sym__comment_or_new_line,
    STATE(261), 1,
      aux_sym__comment_or_new_line_repeat1,
  [10281] = 4,
    ACTIONS(1378), 1,
      anon_sym_LF,
    ACTIONS(1380), 1,
      sym_comment,
    STATE(128), 1,
      sym__comment_or_new_line,
    STATE(261), 1,
      aux_sym__comment_or_new_line_repeat1,
  [10294] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(338), 1,
      sym_boolean,
    ACTIONS(703), 2,
      anon_sym_true,
      anon_sym_false,
  [10305] = 4,
    ACTIONS(1186), 1,
      anon_sym_DOT,
    ACTIONS(1454), 1,
      anon_sym_LF,
    ACTIONS(1456), 1,
      sym_comment,
    STATE(532), 1,
      sym_fraction,
  [10318] = 4,
    ACTIONS(7), 1,
      anon_sym_LF,
    ACTIONS(11), 1,
      sym_comment,
    STATE(10), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(14), 1,
      sym__comment_or_new_line,
  [10331] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(339), 1,
      sym_boolean,
    ACTIONS(703), 2,
      anon_sym_true,
      anon_sym_false,
  [10342] = 4,
    ACTIONS(7), 1,
      anon_sym_LF,
    ACTIONS(11), 1,
      sym_comment,
    STATE(10), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(16), 1,
      sym__comment_or_new_line,
  [10355] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1368), 1,
      aux_sym_variable_name_token1,
    STATE(336), 1,
      sym_variable_definition,
    STATE(455), 1,
      sym_variable_name,
  [10368] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(333), 1,
      sym_boolean,
    ACTIONS(703), 2,
      anon_sym_true,
      anon_sym_false,
  [10379] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1458), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [10388] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1460), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [10397] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(361), 1,
      sym_boolean,
    ACTIONS(703), 2,
      anon_sym_true,
      anon_sym_false,
  [10408] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1235), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [10417] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(363), 1,
      sym_boolean,
    ACTIONS(703), 2,
      anon_sym_true,
      anon_sym_false,
  [10428] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(707), 1,
      aux_sym_digit_token1,
    STATE(276), 2,
      sym_digit,
      aux_sym_integer_repeat1,
  [10439] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1200), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [10448] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1462), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [10457] = 4,
    ACTIONS(7), 1,
      anon_sym_LF,
    ACTIONS(11), 1,
      sym_comment,
    STATE(10), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(108), 1,
      sym__comment_or_new_line,
  [10470] = 2,
    ACTIONS(849), 1,
      sym_comment,
    ACTIONS(1464), 3,
      anon_sym_BSLASH,
      anon_sym_SLASH,
      aux_sym_regex_text_token1,
  [10479] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1274), 1,
      aux_sym_hexdigit_token1,
    STATE(281), 2,
      sym_hexdigit,
      aux_sym_oneline_hex_repeat1,
  [10490] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1468), 1,
      anon_sym_POUND,
    ACTIONS(1466), 2,
      anon_sym_SEMI,
      aux_sym_filename_escaped_char_token1,
  [10501] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1470), 2,
      aux_sym_status_token1,
      anon_sym_STAR,
  [10509] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1274), 1,
      aux_sym_hexdigit_token1,
    STATE(444), 1,
      sym_hexdigit,
  [10519] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1472), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [10527] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1474), 1,
      anon_sym_LBRACE,
    STATE(270), 1,
      sym_unicode_char,
  [10537] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1476), 1,
      anon_sym_file_COMMA,
    STATE(355), 1,
      sym_file_value,
  [10547] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(699), 1,
      anon_sym_DQUOTE,
    STATE(185), 1,
      sym_quoted_string,
  [10557] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(699), 1,
      anon_sym_DQUOTE,
    STATE(190), 1,
      sym_quoted_string,
  [10567] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(699), 1,
      anon_sym_DQUOTE,
    STATE(199), 1,
      sym_quoted_string,
  [10577] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1411), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [10585] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1304), 1,
      anon_sym_DQUOTE,
    STATE(94), 1,
      sym_quoted_string,
  [10595] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1397), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [10603] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1478), 1,
      aux_sym_hexdigit_token1,
    STATE(272), 1,
      sym_hexdigit,
  [10613] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(699), 1,
      anon_sym_DQUOTE,
    STATE(179), 1,
      sym_quoted_string,
  [10623] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1480), 1,
      anon_sym_LBRACE,
    STATE(271), 1,
      sym_unicode_char,
  [10633] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(699), 1,
      anon_sym_DQUOTE,
    STATE(173), 1,
      sym_quoted_string,
  [10643] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1482), 1,
      anon_sym_LBRACE,
    STATE(251), 1,
      sym_unicode_char,
  [10653] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1274), 1,
      aux_sym_hexdigit_token1,
    STATE(421), 1,
      sym_hexdigit,
  [10663] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1304), 1,
      anon_sym_DQUOTE,
    STATE(87), 1,
      sym_quoted_string,
  [10673] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1304), 1,
      anon_sym_DQUOTE,
    STATE(85), 1,
      sym_quoted_string,
  [10683] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1484), 1,
      anon_sym_COLON,
    ACTIONS(1486), 1,
      anon_sym_COLON2,
  [10693] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1488), 1,
      anon_sym_LBRACE,
    STATE(325), 1,
      sym_unicode_char,
  [10703] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1304), 1,
      anon_sym_DQUOTE,
    STATE(86), 1,
      sym_quoted_string,
  [10713] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1304), 1,
      anon_sym_DQUOTE,
    STATE(88), 1,
      sym_quoted_string,
  [10723] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(699), 1,
      anon_sym_DQUOTE,
    STATE(505), 1,
      sym_quoted_string,
  [10733] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1274), 1,
      aux_sym_hexdigit_token1,
    STATE(431), 1,
      sym_hexdigit,
  [10743] = 2,
    ACTIONS(1490), 1,
      anon_sym_LF,
    ACTIONS(1492), 1,
      sym_comment,
  [10750] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1494), 1,
      anon_sym_COLON2,
  [10757] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1496), 1,
      anon_sym_COLON2,
  [10764] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1498), 1,
      anon_sym_COLON2,
  [10771] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1500), 1,
      anon_sym_COLON2,
  [10778] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1502), 1,
      anon_sym_COLON2,
  [10785] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1504), 1,
      anon_sym_COLON2,
  [10792] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1506), 1,
      anon_sym_COLON2,
  [10799] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1508), 1,
      anon_sym_COLON2,
  [10806] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1510), 1,
      anon_sym_COLON2,
  [10813] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1512), 1,
      anon_sym_EQ,
  [10820] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1514), 1,
      anon_sym_COLON2,
  [10827] = 2,
    ACTIONS(1516), 1,
      anon_sym_LF,
    ACTIONS(1518), 1,
      sym_comment,
  [10834] = 2,
    ACTIONS(1520), 1,
      anon_sym_LF,
    ACTIONS(1522), 1,
      sym_comment,
  [10841] = 2,
    ACTIONS(1524), 1,
      anon_sym_LF,
    ACTIONS(1526), 1,
      sym_comment,
  [10848] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1528), 1,
      ts_builtin_sym_end,
  [10855] = 2,
    ACTIONS(1131), 1,
      anon_sym_LF,
    ACTIONS(1356), 1,
      sym_comment,
  [10862] = 2,
    ACTIONS(1530), 1,
      anon_sym_LF,
    ACTIONS(1532), 1,
      sym_comment,
  [10869] = 2,
    ACTIONS(1334), 1,
      anon_sym_LF,
    ACTIONS(1534), 1,
      sym_comment,
  [10876] = 2,
    ACTIONS(1536), 1,
      anon_sym_LF,
    ACTIONS(1538), 1,
      sym_comment,
  [10883] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1540), 1,
      anon_sym_COLON2,
  [10890] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1542), 1,
      anon_sym_COLON2,
  [10897] = 2,
    ACTIONS(1544), 1,
      anon_sym_LF,
    ACTIONS(1546), 1,
      sym_comment,
  [10904] = 2,
    ACTIONS(1403), 1,
      anon_sym_LF,
    ACTIONS(1548), 1,
      sym_comment,
  [10911] = 2,
    ACTIONS(1376), 1,
      anon_sym_LF,
    ACTIONS(1550), 1,
      sym_comment,
  [10918] = 2,
    ACTIONS(1552), 1,
      anon_sym_LF,
    ACTIONS(1554), 1,
      sym_comment,
  [10925] = 2,
    ACTIONS(849), 1,
      sym_comment,
    ACTIONS(1556), 1,
      aux_sym_oneline_string_text_token2,
  [10932] = 2,
    ACTIONS(1558), 1,
      anon_sym_LF,
    ACTIONS(1560), 1,
      sym_comment,
  [10939] = 2,
    ACTIONS(1292), 1,
      anon_sym_LF,
    ACTIONS(1562), 1,
      sym_comment,
  [10946] = 2,
    ACTIONS(1372), 1,
      anon_sym_LF,
    ACTIONS(1564), 1,
      sym_comment,
  [10953] = 2,
    ACTIONS(1566), 1,
      anon_sym_LF,
    ACTIONS(1568), 1,
      sym_comment,
  [10960] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1570), 1,
      anon_sym_SEMI,
  [10967] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1572), 1,
      anon_sym_GT,
  [10974] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1574), 1,
      anon_sym_SEMI,
  [10981] = 2,
    ACTIONS(1454), 1,
      anon_sym_LF,
    ACTIONS(1456), 1,
      sym_comment,
  [10988] = 2,
    ACTIONS(1576), 1,
      anon_sym_LF,
    ACTIONS(1578), 1,
      sym_comment,
  [10995] = 2,
    ACTIONS(1370), 1,
      anon_sym_LF,
    ACTIONS(1580), 1,
      sym_comment,
  [11002] = 2,
    ACTIONS(1235), 1,
      anon_sym_LF,
    ACTIONS(1239), 1,
      sym_comment,
  [11009] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1484), 1,
      anon_sym_COLON,
  [11016] = 2,
    ACTIONS(1582), 1,
      anon_sym_LF,
    ACTIONS(1584), 1,
      sym_comment,
  [11023] = 2,
    ACTIONS(849), 1,
      sym_comment,
    ACTIONS(1586), 1,
      aux_sym_regex_escaped_char_token1,
  [11030] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1588), 1,
      anon_sym_SLASH,
  [11037] = 2,
    ACTIONS(1460), 1,
      anon_sym_LF,
    ACTIONS(1590), 1,
      sym_comment,
  [11044] = 2,
    ACTIONS(1458), 1,
      anon_sym_LF,
    ACTIONS(1592), 1,
      sym_comment,
  [11051] = 2,
    ACTIONS(1594), 1,
      anon_sym_LF,
    ACTIONS(1596), 1,
      sym_comment,
  [11058] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1598), 1,
      aux_sym_key_string_escaped_char_token1,
  [11065] = 2,
    ACTIONS(849), 1,
      sym_comment,
    ACTIONS(1600), 1,
      aux_sym_oneline_base64_token1,
  [11072] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1602), 1,
      anon_sym_To_COMMABe_COMMADefined,
  [11079] = 2,
    ACTIONS(1604), 1,
      anon_sym_LF,
    ACTIONS(1606), 1,
      sym_comment,
  [11086] = 2,
    ACTIONS(1608), 1,
      anon_sym_LF,
    ACTIONS(1610), 1,
      sym_comment,
  [11093] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1612), 1,
      anon_sym_RBRACE_RBRACE,
  [11100] = 2,
    ACTIONS(1614), 1,
      anon_sym_LF,
    ACTIONS(1616), 1,
      sym_comment,
  [11107] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1618), 1,
      aux_sym_key_string_escaped_char_token1,
  [11114] = 2,
    ACTIONS(1462), 1,
      anon_sym_LF,
    ACTIONS(1620), 1,
      sym_comment,
  [11121] = 2,
    ACTIONS(1450), 1,
      anon_sym_LF,
    ACTIONS(1452), 1,
      sym_comment,
  [11128] = 2,
    ACTIONS(1622), 1,
      anon_sym_LF,
    ACTIONS(1624), 1,
      sym_comment,
  [11135] = 2,
    ACTIONS(1446), 1,
      anon_sym_LF,
    ACTIONS(1448), 1,
      sym_comment,
  [11142] = 2,
    ACTIONS(1626), 1,
      anon_sym_LF,
    ACTIONS(1628), 1,
      sym_comment,
  [11149] = 2,
    ACTIONS(1630), 1,
      anon_sym_LF,
    ACTIONS(1632), 1,
      sym_comment,
  [11156] = 2,
    ACTIONS(1634), 1,
      anon_sym_LF,
    ACTIONS(1636), 1,
      sym_comment,
  [11163] = 2,
    ACTIONS(1638), 1,
      anon_sym_LF,
    ACTIONS(1640), 1,
      sym_comment,
  [11170] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1642), 1,
      anon_sym_RBRACE_RBRACE,
  [11177] = 2,
    ACTIONS(849), 1,
      sym_comment,
    ACTIONS(1644), 1,
      aux_sym_variable_name_token2,
  [11184] = 2,
    ACTIONS(1646), 1,
      anon_sym_LF,
    ACTIONS(1648), 1,
      sym_comment,
  [11191] = 2,
    ACTIONS(1650), 1,
      anon_sym_LF,
    ACTIONS(1652), 1,
      sym_comment,
  [11198] = 2,
    ACTIONS(1432), 1,
      anon_sym_LF,
    ACTIONS(1434), 1,
      sym_comment,
  [11205] = 2,
    ACTIONS(1426), 1,
      anon_sym_LF,
    ACTIONS(1428), 1,
      sym_comment,
  [11212] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1654), 1,
      anon_sym_SLASH,
  [11219] = 2,
    ACTIONS(1420), 1,
      anon_sym_LF,
    ACTIONS(1422), 1,
      sym_comment,
  [11226] = 2,
    ACTIONS(1416), 1,
      anon_sym_LF,
    ACTIONS(1418), 1,
      sym_comment,
  [11233] = 2,
    ACTIONS(1656), 1,
      anon_sym_LF,
    ACTIONS(1658), 1,
      sym_comment,
  [11240] = 2,
    ACTIONS(1407), 1,
      anon_sym_LF,
    ACTIONS(1409), 1,
      sym_comment,
  [11247] = 2,
    ACTIONS(1660), 1,
      anon_sym_LF,
    ACTIONS(1662), 1,
      sym_comment,
  [11254] = 2,
    ACTIONS(1664), 1,
      anon_sym_LF,
    ACTIONS(1666), 1,
      sym_comment,
  [11261] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1668), 1,
      anon_sym_RBRACE_RBRACE,
  [11268] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1670), 1,
      aux_sym_key_string_escaped_char_token1,
  [11275] = 2,
    ACTIONS(1672), 1,
      anon_sym_LF,
    ACTIONS(1674), 1,
      sym_comment,
  [11282] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1676), 1,
      anon_sym_RBRACE_RBRACE,
  [11289] = 2,
    ACTIONS(1678), 1,
      anon_sym_LF,
    ACTIONS(1680), 1,
      sym_comment,
  [11296] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1682), 1,
      anon_sym_RBRACE_RBRACE,
  [11303] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1684), 1,
      anon_sym_RBRACE_RBRACE,
  [11310] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1686), 1,
      anon_sym_RBRACE_RBRACE,
  [11317] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1688), 1,
      anon_sym_RBRACE_RBRACE,
  [11324] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1690), 1,
      anon_sym_RBRACE_RBRACE,
  [11331] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1692), 1,
      anon_sym_RBRACE_RBRACE,
  [11338] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1694), 1,
      anon_sym_RBRACE_RBRACE,
  [11345] = 2,
    ACTIONS(1388), 1,
      anon_sym_LF,
    ACTIONS(1696), 1,
      sym_comment,
  [11352] = 2,
    ACTIONS(1698), 1,
      anon_sym_LF,
    ACTIONS(1700), 1,
      sym_comment,
  [11359] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1702), 1,
      anon_sym_COLON2,
  [11366] = 2,
    ACTIONS(1704), 1,
      anon_sym_LF,
    ACTIONS(1706), 1,
      sym_comment,
  [11373] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1708), 1,
      anon_sym_SEMI,
  [11380] = 2,
    ACTIONS(1710), 1,
      anon_sym_LF,
    ACTIONS(1712), 1,
      sym_comment,
  [11387] = 2,
    ACTIONS(1714), 1,
      anon_sym_LF,
    ACTIONS(1716), 1,
      sym_comment,
  [11394] = 2,
    ACTIONS(1718), 1,
      anon_sym_LF,
    ACTIONS(1720), 1,
      sym_comment,
  [11401] = 2,
    ACTIONS(1722), 1,
      anon_sym_LF,
    ACTIONS(1724), 1,
      sym_comment,
  [11408] = 2,
    ACTIONS(1726), 1,
      anon_sym_LF,
    ACTIONS(1728), 1,
      sym_comment,
  [11415] = 2,
    ACTIONS(1730), 1,
      anon_sym_LF,
    ACTIONS(1732), 1,
      sym_comment,
  [11422] = 2,
    ACTIONS(1734), 1,
      anon_sym_LF,
    ACTIONS(1736), 1,
      sym_comment,
  [11429] = 2,
    ACTIONS(1738), 1,
      anon_sym_LF,
    ACTIONS(1740), 1,
      sym_comment,
  [11436] = 2,
    ACTIONS(1742), 1,
      anon_sym_LF,
    ACTIONS(1744), 1,
      sym_comment,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(16)] = 0,
  [SMALL_STATE(17)] = 101,
  [SMALL_STATE(18)] = 202,
  [SMALL_STATE(19)] = 303,
  [SMALL_STATE(20)] = 426,
  [SMALL_STATE(21)] = 549,
  [SMALL_STATE(22)] = 658,
  [SMALL_STATE(23)] = 767,
  [SMALL_STATE(24)] = 842,
  [SMALL_STATE(25)] = 917,
  [SMALL_STATE(26)] = 992,
  [SMALL_STATE(27)] = 1067,
  [SMALL_STATE(28)] = 1125,
  [SMALL_STATE(29)] = 1183,
  [SMALL_STATE(30)] = 1241,
  [SMALL_STATE(31)] = 1299,
  [SMALL_STATE(32)] = 1357,
  [SMALL_STATE(33)] = 1415,
  [SMALL_STATE(34)] = 1473,
  [SMALL_STATE(35)] = 1531,
  [SMALL_STATE(36)] = 1589,
  [SMALL_STATE(37)] = 1647,
  [SMALL_STATE(38)] = 1705,
  [SMALL_STATE(39)] = 1763,
  [SMALL_STATE(40)] = 1834,
  [SMALL_STATE(41)] = 1905,
  [SMALL_STATE(42)] = 1976,
  [SMALL_STATE(43)] = 2047,
  [SMALL_STATE(44)] = 2118,
  [SMALL_STATE(45)] = 2189,
  [SMALL_STATE(46)] = 2260,
  [SMALL_STATE(47)] = 2331,
  [SMALL_STATE(48)] = 2402,
  [SMALL_STATE(49)] = 2474,
  [SMALL_STATE(50)] = 2527,
  [SMALL_STATE(51)] = 2588,
  [SMALL_STATE(52)] = 2641,
  [SMALL_STATE(53)] = 2698,
  [SMALL_STATE(54)] = 2755,
  [SMALL_STATE(55)] = 2822,
  [SMALL_STATE(56)] = 2886,
  [SMALL_STATE(57)] = 2950,
  [SMALL_STATE(58)] = 3000,
  [SMALL_STATE(59)] = 3064,
  [SMALL_STATE(60)] = 3112,
  [SMALL_STATE(61)] = 3160,
  [SMALL_STATE(62)] = 3243,
  [SMALL_STATE(63)] = 3310,
  [SMALL_STATE(64)] = 3362,
  [SMALL_STATE(65)] = 3411,
  [SMALL_STATE(66)] = 3460,
  [SMALL_STATE(67)] = 3502,
  [SMALL_STATE(68)] = 3544,
  [SMALL_STATE(69)] = 3586,
  [SMALL_STATE(70)] = 3626,
  [SMALL_STATE(71)] = 3666,
  [SMALL_STATE(72)] = 3706,
  [SMALL_STATE(73)] = 3746,
  [SMALL_STATE(74)] = 3786,
  [SMALL_STATE(75)] = 3826,
  [SMALL_STATE(76)] = 3866,
  [SMALL_STATE(77)] = 3906,
  [SMALL_STATE(78)] = 3946,
  [SMALL_STATE(79)] = 3986,
  [SMALL_STATE(80)] = 4026,
  [SMALL_STATE(81)] = 4066,
  [SMALL_STATE(82)] = 4106,
  [SMALL_STATE(83)] = 4145,
  [SMALL_STATE(84)] = 4184,
  [SMALL_STATE(85)] = 4223,
  [SMALL_STATE(86)] = 4262,
  [SMALL_STATE(87)] = 4301,
  [SMALL_STATE(88)] = 4340,
  [SMALL_STATE(89)] = 4379,
  [SMALL_STATE(90)] = 4418,
  [SMALL_STATE(91)] = 4457,
  [SMALL_STATE(92)] = 4496,
  [SMALL_STATE(93)] = 4535,
  [SMALL_STATE(94)] = 4574,
  [SMALL_STATE(95)] = 4613,
  [SMALL_STATE(96)] = 4652,
  [SMALL_STATE(97)] = 4713,
  [SMALL_STATE(98)] = 4759,
  [SMALL_STATE(99)] = 4804,
  [SMALL_STATE(100)] = 4857,
  [SMALL_STATE(101)] = 4910,
  [SMALL_STATE(102)] = 4963,
  [SMALL_STATE(103)] = 4991,
  [SMALL_STATE(104)] = 5027,
  [SMALL_STATE(105)] = 5079,
  [SMALL_STATE(106)] = 5107,
  [SMALL_STATE(107)] = 5135,
  [SMALL_STATE(108)] = 5185,
  [SMALL_STATE(109)] = 5213,
  [SMALL_STATE(110)] = 5241,
  [SMALL_STATE(111)] = 5275,
  [SMALL_STATE(112)] = 5320,
  [SMALL_STATE(113)] = 5365,
  [SMALL_STATE(114)] = 5412,
  [SMALL_STATE(115)] = 5457,
  [SMALL_STATE(116)] = 5504,
  [SMALL_STATE(117)] = 5549,
  [SMALL_STATE(118)] = 5573,
  [SMALL_STATE(119)] = 5597,
  [SMALL_STATE(120)] = 5621,
  [SMALL_STATE(121)] = 5645,
  [SMALL_STATE(122)] = 5669,
  [SMALL_STATE(123)] = 5710,
  [SMALL_STATE(124)] = 5751,
  [SMALL_STATE(125)] = 5792,
  [SMALL_STATE(126)] = 5836,
  [SMALL_STATE(127)] = 5873,
  [SMALL_STATE(128)] = 5913,
  [SMALL_STATE(129)] = 5953,
  [SMALL_STATE(130)] = 5993,
  [SMALL_STATE(131)] = 6026,
  [SMALL_STATE(132)] = 6059,
  [SMALL_STATE(133)] = 6092,
  [SMALL_STATE(134)] = 6123,
  [SMALL_STATE(135)] = 6156,
  [SMALL_STATE(136)] = 6188,
  [SMALL_STATE(137)] = 6220,
  [SMALL_STATE(138)] = 6247,
  [SMALL_STATE(139)] = 6274,
  [SMALL_STATE(140)] = 6301,
  [SMALL_STATE(141)] = 6328,
  [SMALL_STATE(142)] = 6355,
  [SMALL_STATE(143)] = 6382,
  [SMALL_STATE(144)] = 6409,
  [SMALL_STATE(145)] = 6437,
  [SMALL_STATE(146)] = 6463,
  [SMALL_STATE(147)] = 6491,
  [SMALL_STATE(148)] = 6517,
  [SMALL_STATE(149)] = 6543,
  [SMALL_STATE(150)] = 6569,
  [SMALL_STATE(151)] = 6597,
  [SMALL_STATE(152)] = 6623,
  [SMALL_STATE(153)] = 6651,
  [SMALL_STATE(154)] = 6679,
  [SMALL_STATE(155)] = 6707,
  [SMALL_STATE(156)] = 6732,
  [SMALL_STATE(157)] = 6755,
  [SMALL_STATE(158)] = 6774,
  [SMALL_STATE(159)] = 6793,
  [SMALL_STATE(160)] = 6818,
  [SMALL_STATE(161)] = 6843,
  [SMALL_STATE(162)] = 6868,
  [SMALL_STATE(163)] = 6893,
  [SMALL_STATE(164)] = 6918,
  [SMALL_STATE(165)] = 6941,
  [SMALL_STATE(166)] = 6966,
  [SMALL_STATE(167)] = 6981,
  [SMALL_STATE(168)] = 7006,
  [SMALL_STATE(169)] = 7025,
  [SMALL_STATE(170)] = 7050,
  [SMALL_STATE(171)] = 7073,
  [SMALL_STATE(172)] = 7098,
  [SMALL_STATE(173)] = 7123,
  [SMALL_STATE(174)] = 7137,
  [SMALL_STATE(175)] = 7155,
  [SMALL_STATE(176)] = 7177,
  [SMALL_STATE(177)] = 7191,
  [SMALL_STATE(178)] = 7205,
  [SMALL_STATE(179)] = 7225,
  [SMALL_STATE(180)] = 7239,
  [SMALL_STATE(181)] = 7255,
  [SMALL_STATE(182)] = 7269,
  [SMALL_STATE(183)] = 7283,
  [SMALL_STATE(184)] = 7297,
  [SMALL_STATE(185)] = 7311,
  [SMALL_STATE(186)] = 7325,
  [SMALL_STATE(187)] = 7339,
  [SMALL_STATE(188)] = 7353,
  [SMALL_STATE(189)] = 7367,
  [SMALL_STATE(190)] = 7381,
  [SMALL_STATE(191)] = 7395,
  [SMALL_STATE(192)] = 7415,
  [SMALL_STATE(193)] = 7429,
  [SMALL_STATE(194)] = 7445,
  [SMALL_STATE(195)] = 7459,
  [SMALL_STATE(196)] = 7473,
  [SMALL_STATE(197)] = 7495,
  [SMALL_STATE(198)] = 7509,
  [SMALL_STATE(199)] = 7527,
  [SMALL_STATE(200)] = 7541,
  [SMALL_STATE(201)] = 7563,
  [SMALL_STATE(202)] = 7577,
  [SMALL_STATE(203)] = 7591,
  [SMALL_STATE(204)] = 7605,
  [SMALL_STATE(205)] = 7619,
  [SMALL_STATE(206)] = 7633,
  [SMALL_STATE(207)] = 7647,
  [SMALL_STATE(208)] = 7661,
  [SMALL_STATE(209)] = 7674,
  [SMALL_STATE(210)] = 7691,
  [SMALL_STATE(211)] = 7712,
  [SMALL_STATE(212)] = 7729,
  [SMALL_STATE(213)] = 7754,
  [SMALL_STATE(214)] = 7775,
  [SMALL_STATE(215)] = 7796,
  [SMALL_STATE(216)] = 7817,
  [SMALL_STATE(217)] = 7838,
  [SMALL_STATE(218)] = 7855,
  [SMALL_STATE(219)] = 7872,
  [SMALL_STATE(220)] = 7897,
  [SMALL_STATE(221)] = 7918,
  [SMALL_STATE(222)] = 7939,
  [SMALL_STATE(223)] = 7960,
  [SMALL_STATE(224)] = 7976,
  [SMALL_STATE(225)] = 7994,
  [SMALL_STATE(226)] = 8012,
  [SMALL_STATE(227)] = 8030,
  [SMALL_STATE(228)] = 8046,
  [SMALL_STATE(229)] = 8062,
  [SMALL_STATE(230)] = 8078,
  [SMALL_STATE(231)] = 8096,
  [SMALL_STATE(232)] = 8114,
  [SMALL_STATE(233)] = 8128,
  [SMALL_STATE(234)] = 8142,
  [SMALL_STATE(235)] = 8160,
  [SMALL_STATE(236)] = 8178,
  [SMALL_STATE(237)] = 8192,
  [SMALL_STATE(238)] = 8208,
  [SMALL_STATE(239)] = 8224,
  [SMALL_STATE(240)] = 8240,
  [SMALL_STATE(241)] = 8260,
  [SMALL_STATE(242)] = 8272,
  [SMALL_STATE(243)] = 8288,
  [SMALL_STATE(244)] = 8301,
  [SMALL_STATE(245)] = 8314,
  [SMALL_STATE(246)] = 8331,
  [SMALL_STATE(247)] = 8346,
  [SMALL_STATE(248)] = 8361,
  [SMALL_STATE(249)] = 8378,
  [SMALL_STATE(250)] = 8395,
  [SMALL_STATE(251)] = 8408,
  [SMALL_STATE(252)] = 8419,
  [SMALL_STATE(253)] = 8430,
  [SMALL_STATE(254)] = 8441,
  [SMALL_STATE(255)] = 8456,
  [SMALL_STATE(256)] = 8471,
  [SMALL_STATE(257)] = 8484,
  [SMALL_STATE(258)] = 8495,
  [SMALL_STATE(259)] = 8506,
  [SMALL_STATE(260)] = 8517,
  [SMALL_STATE(261)] = 8532,
  [SMALL_STATE(262)] = 8547,
  [SMALL_STATE(263)] = 8560,
  [SMALL_STATE(264)] = 8575,
  [SMALL_STATE(265)] = 8588,
  [SMALL_STATE(266)] = 8599,
  [SMALL_STATE(267)] = 8613,
  [SMALL_STATE(268)] = 8621,
  [SMALL_STATE(269)] = 8631,
  [SMALL_STATE(270)] = 8643,
  [SMALL_STATE(271)] = 8653,
  [SMALL_STATE(272)] = 8665,
  [SMALL_STATE(273)] = 8677,
  [SMALL_STATE(274)] = 8687,
  [SMALL_STATE(275)] = 8697,
  [SMALL_STATE(276)] = 8709,
  [SMALL_STATE(277)] = 8723,
  [SMALL_STATE(278)] = 8735,
  [SMALL_STATE(279)] = 8745,
  [SMALL_STATE(280)] = 8757,
  [SMALL_STATE(281)] = 8771,
  [SMALL_STATE(282)] = 8785,
  [SMALL_STATE(283)] = 8797,
  [SMALL_STATE(284)] = 8809,
  [SMALL_STATE(285)] = 8821,
  [SMALL_STATE(286)] = 8837,
  [SMALL_STATE(287)] = 8853,
  [SMALL_STATE(288)] = 8863,
  [SMALL_STATE(289)] = 8873,
  [SMALL_STATE(290)] = 8887,
  [SMALL_STATE(291)] = 8903,
  [SMALL_STATE(292)] = 8913,
  [SMALL_STATE(293)] = 8929,
  [SMALL_STATE(294)] = 8945,
  [SMALL_STATE(295)] = 8955,
  [SMALL_STATE(296)] = 8963,
  [SMALL_STATE(297)] = 8973,
  [SMALL_STATE(298)] = 8987,
  [SMALL_STATE(299)] = 9001,
  [SMALL_STATE(300)] = 9011,
  [SMALL_STATE(301)] = 9025,
  [SMALL_STATE(302)] = 9037,
  [SMALL_STATE(303)] = 9051,
  [SMALL_STATE(304)] = 9065,
  [SMALL_STATE(305)] = 9079,
  [SMALL_STATE(306)] = 9095,
  [SMALL_STATE(307)] = 9109,
  [SMALL_STATE(308)] = 9125,
  [SMALL_STATE(309)] = 9135,
  [SMALL_STATE(310)] = 9151,
  [SMALL_STATE(311)] = 9161,
  [SMALL_STATE(312)] = 9171,
  [SMALL_STATE(313)] = 9181,
  [SMALL_STATE(314)] = 9197,
  [SMALL_STATE(315)] = 9213,
  [SMALL_STATE(316)] = 9229,
  [SMALL_STATE(317)] = 9245,
  [SMALL_STATE(318)] = 9261,
  [SMALL_STATE(319)] = 9277,
  [SMALL_STATE(320)] = 9287,
  [SMALL_STATE(321)] = 9299,
  [SMALL_STATE(322)] = 9313,
  [SMALL_STATE(323)] = 9323,
  [SMALL_STATE(324)] = 9337,
  [SMALL_STATE(325)] = 9351,
  [SMALL_STATE(326)] = 9361,
  [SMALL_STATE(327)] = 9375,
  [SMALL_STATE(328)] = 9389,
  [SMALL_STATE(329)] = 9403,
  [SMALL_STATE(330)] = 9419,
  [SMALL_STATE(331)] = 9432,
  [SMALL_STATE(332)] = 9445,
  [SMALL_STATE(333)] = 9458,
  [SMALL_STATE(334)] = 9471,
  [SMALL_STATE(335)] = 9484,
  [SMALL_STATE(336)] = 9497,
  [SMALL_STATE(337)] = 9510,
  [SMALL_STATE(338)] = 9523,
  [SMALL_STATE(339)] = 9536,
  [SMALL_STATE(340)] = 9549,
  [SMALL_STATE(341)] = 9558,
  [SMALL_STATE(342)] = 9569,
  [SMALL_STATE(343)] = 9578,
  [SMALL_STATE(344)] = 9591,
  [SMALL_STATE(345)] = 9604,
  [SMALL_STATE(346)] = 9617,
  [SMALL_STATE(347)] = 9630,
  [SMALL_STATE(348)] = 9643,
  [SMALL_STATE(349)] = 9656,
  [SMALL_STATE(350)] = 9667,
  [SMALL_STATE(351)] = 9680,
  [SMALL_STATE(352)] = 9693,
  [SMALL_STATE(353)] = 9704,
  [SMALL_STATE(354)] = 9713,
  [SMALL_STATE(355)] = 9722,
  [SMALL_STATE(356)] = 9735,
  [SMALL_STATE(357)] = 9748,
  [SMALL_STATE(358)] = 9761,
  [SMALL_STATE(359)] = 9772,
  [SMALL_STATE(360)] = 9781,
  [SMALL_STATE(361)] = 9794,
  [SMALL_STATE(362)] = 9807,
  [SMALL_STATE(363)] = 9820,
  [SMALL_STATE(364)] = 9833,
  [SMALL_STATE(365)] = 9844,
  [SMALL_STATE(366)] = 9853,
  [SMALL_STATE(367)] = 9866,
  [SMALL_STATE(368)] = 9879,
  [SMALL_STATE(369)] = 9892,
  [SMALL_STATE(370)] = 9903,
  [SMALL_STATE(371)] = 9914,
  [SMALL_STATE(372)] = 9927,
  [SMALL_STATE(373)] = 9940,
  [SMALL_STATE(374)] = 9949,
  [SMALL_STATE(375)] = 9962,
  [SMALL_STATE(376)] = 9975,
  [SMALL_STATE(377)] = 9988,
  [SMALL_STATE(378)] = 10001,
  [SMALL_STATE(379)] = 10014,
  [SMALL_STATE(380)] = 10027,
  [SMALL_STATE(381)] = 10040,
  [SMALL_STATE(382)] = 10053,
  [SMALL_STATE(383)] = 10066,
  [SMALL_STATE(384)] = 10079,
  [SMALL_STATE(385)] = 10092,
  [SMALL_STATE(386)] = 10105,
  [SMALL_STATE(387)] = 10118,
  [SMALL_STATE(388)] = 10131,
  [SMALL_STATE(389)] = 10144,
  [SMALL_STATE(390)] = 10157,
  [SMALL_STATE(391)] = 10170,
  [SMALL_STATE(392)] = 10179,
  [SMALL_STATE(393)] = 10192,
  [SMALL_STATE(394)] = 10203,
  [SMALL_STATE(395)] = 10216,
  [SMALL_STATE(396)] = 10229,
  [SMALL_STATE(397)] = 10242,
  [SMALL_STATE(398)] = 10255,
  [SMALL_STATE(399)] = 10268,
  [SMALL_STATE(400)] = 10281,
  [SMALL_STATE(401)] = 10294,
  [SMALL_STATE(402)] = 10305,
  [SMALL_STATE(403)] = 10318,
  [SMALL_STATE(404)] = 10331,
  [SMALL_STATE(405)] = 10342,
  [SMALL_STATE(406)] = 10355,
  [SMALL_STATE(407)] = 10368,
  [SMALL_STATE(408)] = 10379,
  [SMALL_STATE(409)] = 10388,
  [SMALL_STATE(410)] = 10397,
  [SMALL_STATE(411)] = 10408,
  [SMALL_STATE(412)] = 10417,
  [SMALL_STATE(413)] = 10428,
  [SMALL_STATE(414)] = 10439,
  [SMALL_STATE(415)] = 10448,
  [SMALL_STATE(416)] = 10457,
  [SMALL_STATE(417)] = 10470,
  [SMALL_STATE(418)] = 10479,
  [SMALL_STATE(419)] = 10490,
  [SMALL_STATE(420)] = 10501,
  [SMALL_STATE(421)] = 10509,
  [SMALL_STATE(422)] = 10519,
  [SMALL_STATE(423)] = 10527,
  [SMALL_STATE(424)] = 10537,
  [SMALL_STATE(425)] = 10547,
  [SMALL_STATE(426)] = 10557,
  [SMALL_STATE(427)] = 10567,
  [SMALL_STATE(428)] = 10577,
  [SMALL_STATE(429)] = 10585,
  [SMALL_STATE(430)] = 10595,
  [SMALL_STATE(431)] = 10603,
  [SMALL_STATE(432)] = 10613,
  [SMALL_STATE(433)] = 10623,
  [SMALL_STATE(434)] = 10633,
  [SMALL_STATE(435)] = 10643,
  [SMALL_STATE(436)] = 10653,
  [SMALL_STATE(437)] = 10663,
  [SMALL_STATE(438)] = 10673,
  [SMALL_STATE(439)] = 10683,
  [SMALL_STATE(440)] = 10693,
  [SMALL_STATE(441)] = 10703,
  [SMALL_STATE(442)] = 10713,
  [SMALL_STATE(443)] = 10723,
  [SMALL_STATE(444)] = 10733,
  [SMALL_STATE(445)] = 10743,
  [SMALL_STATE(446)] = 10750,
  [SMALL_STATE(447)] = 10757,
  [SMALL_STATE(448)] = 10764,
  [SMALL_STATE(449)] = 10771,
  [SMALL_STATE(450)] = 10778,
  [SMALL_STATE(451)] = 10785,
  [SMALL_STATE(452)] = 10792,
  [SMALL_STATE(453)] = 10799,
  [SMALL_STATE(454)] = 10806,
  [SMALL_STATE(455)] = 10813,
  [SMALL_STATE(456)] = 10820,
  [SMALL_STATE(457)] = 10827,
  [SMALL_STATE(458)] = 10834,
  [SMALL_STATE(459)] = 10841,
  [SMALL_STATE(460)] = 10848,
  [SMALL_STATE(461)] = 10855,
  [SMALL_STATE(462)] = 10862,
  [SMALL_STATE(463)] = 10869,
  [SMALL_STATE(464)] = 10876,
  [SMALL_STATE(465)] = 10883,
  [SMALL_STATE(466)] = 10890,
  [SMALL_STATE(467)] = 10897,
  [SMALL_STATE(468)] = 10904,
  [SMALL_STATE(469)] = 10911,
  [SMALL_STATE(470)] = 10918,
  [SMALL_STATE(471)] = 10925,
  [SMALL_STATE(472)] = 10932,
  [SMALL_STATE(473)] = 10939,
  [SMALL_STATE(474)] = 10946,
  [SMALL_STATE(475)] = 10953,
  [SMALL_STATE(476)] = 10960,
  [SMALL_STATE(477)] = 10967,
  [SMALL_STATE(478)] = 10974,
  [SMALL_STATE(479)] = 10981,
  [SMALL_STATE(480)] = 10988,
  [SMALL_STATE(481)] = 10995,
  [SMALL_STATE(482)] = 11002,
  [SMALL_STATE(483)] = 11009,
  [SMALL_STATE(484)] = 11016,
  [SMALL_STATE(485)] = 11023,
  [SMALL_STATE(486)] = 11030,
  [SMALL_STATE(487)] = 11037,
  [SMALL_STATE(488)] = 11044,
  [SMALL_STATE(489)] = 11051,
  [SMALL_STATE(490)] = 11058,
  [SMALL_STATE(491)] = 11065,
  [SMALL_STATE(492)] = 11072,
  [SMALL_STATE(493)] = 11079,
  [SMALL_STATE(494)] = 11086,
  [SMALL_STATE(495)] = 11093,
  [SMALL_STATE(496)] = 11100,
  [SMALL_STATE(497)] = 11107,
  [SMALL_STATE(498)] = 11114,
  [SMALL_STATE(499)] = 11121,
  [SMALL_STATE(500)] = 11128,
  [SMALL_STATE(501)] = 11135,
  [SMALL_STATE(502)] = 11142,
  [SMALL_STATE(503)] = 11149,
  [SMALL_STATE(504)] = 11156,
  [SMALL_STATE(505)] = 11163,
  [SMALL_STATE(506)] = 11170,
  [SMALL_STATE(507)] = 11177,
  [SMALL_STATE(508)] = 11184,
  [SMALL_STATE(509)] = 11191,
  [SMALL_STATE(510)] = 11198,
  [SMALL_STATE(511)] = 11205,
  [SMALL_STATE(512)] = 11212,
  [SMALL_STATE(513)] = 11219,
  [SMALL_STATE(514)] = 11226,
  [SMALL_STATE(515)] = 11233,
  [SMALL_STATE(516)] = 11240,
  [SMALL_STATE(517)] = 11247,
  [SMALL_STATE(518)] = 11254,
  [SMALL_STATE(519)] = 11261,
  [SMALL_STATE(520)] = 11268,
  [SMALL_STATE(521)] = 11275,
  [SMALL_STATE(522)] = 11282,
  [SMALL_STATE(523)] = 11289,
  [SMALL_STATE(524)] = 11296,
  [SMALL_STATE(525)] = 11303,
  [SMALL_STATE(526)] = 11310,
  [SMALL_STATE(527)] = 11317,
  [SMALL_STATE(528)] = 11324,
  [SMALL_STATE(529)] = 11331,
  [SMALL_STATE(530)] = 11338,
  [SMALL_STATE(531)] = 11345,
  [SMALL_STATE(532)] = 11352,
  [SMALL_STATE(533)] = 11359,
  [SMALL_STATE(534)] = 11366,
  [SMALL_STATE(535)] = 11373,
  [SMALL_STATE(536)] = 11380,
  [SMALL_STATE(537)] = 11387,
  [SMALL_STATE(538)] = 11394,
  [SMALL_STATE(539)] = 11401,
  [SMALL_STATE(540)] = 11408,
  [SMALL_STATE(541)] = 11415,
  [SMALL_STATE(542)] = 11422,
  [SMALL_STATE(543)] = 11429,
  [SMALL_STATE(544)] = 11436,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hurl_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(311),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 2),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [17] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 2),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(390),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(394),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(397),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(399),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(400),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(403),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(492),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(491),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(266),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(218),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(490),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(219),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(488),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(487),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(258),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 3),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 3),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 4),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 4),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 5),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 5),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response, 3),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_response, 3),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(330),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(405),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__comment_or_new_line, 1),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__comment_or_new_line, 1),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__comment_or_new_line_repeat1, 2),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__comment_or_new_line_repeat1, 2), SHIFT_REPEAT(11),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__comment_or_new_line_repeat1, 2),
  [98] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__comment_or_new_line_repeat1, 2), SHIFT_REPEAT(11),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response, 4),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_response, 4),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_options_section_repeat1, 2),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_options_section_repeat1, 2),
  [109] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_options_section_repeat1, 2), SHIFT_REPEAT(456),
  [112] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_options_section_repeat1, 2), SHIFT_REPEAT(453),
  [115] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_options_section_repeat1, 2), SHIFT_REPEAT(452),
  [118] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_options_section_repeat1, 2), SHIFT_REPEAT(451),
  [121] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_options_section_repeat1, 2), SHIFT_REPEAT(449),
  [124] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_options_section_repeat1, 2), SHIFT_REPEAT(447),
  [127] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_options_section_repeat1, 2), SHIFT_REPEAT(450),
  [130] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_options_section_repeat1, 2), SHIFT_REPEAT(448),
  [133] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_options_section_repeat1, 2), SHIFT_REPEAT(446),
  [136] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_options_section_repeat1, 2), SHIFT_REPEAT(454),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_options_section, 2),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_options_section, 2),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(456),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(453),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(452),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(451),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(449),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(447),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(450),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(448),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(446),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(454),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_options_section, 3),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_options_section, 3),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_asserts_section, 2),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_asserts_section, 2),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(429),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(442),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(437),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(441),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(438),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(280),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_asserts_section_repeat1, 2),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_asserts_section_repeat1, 2),
  [201] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_asserts_section_repeat1, 2), SHIFT_REPEAT(429),
  [204] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_asserts_section_repeat1, 2), SHIFT_REPEAT(95),
  [207] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_asserts_section_repeat1, 2), SHIFT_REPEAT(83),
  [210] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_asserts_section_repeat1, 2), SHIFT_REPEAT(442),
  [213] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_asserts_section_repeat1, 2), SHIFT_REPEAT(437),
  [216] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_asserts_section_repeat1, 2), SHIFT_REPEAT(84),
  [219] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_asserts_section_repeat1, 2), SHIFT_REPEAT(441),
  [222] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_asserts_section_repeat1, 2), SHIFT_REPEAT(438),
  [225] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_asserts_section_repeat1, 2), SHIFT_REPEAT(280),
  [228] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_asserts_section_repeat1, 2), SHIFT_REPEAT(89),
  [231] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_asserts_section_repeat1, 2), SHIFT_REPEAT(90),
  [234] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_asserts_section_repeat1, 2), SHIFT_REPEAT(91),
  [237] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_asserts_section_repeat1, 2), SHIFT_REPEAT(92),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_asserts_section, 3),
  [242] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_asserts_section, 3),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [246] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [252] = {.entry = {.count = 1, .reusable = false}}, SHIFT(210),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [256] = {.entry = {.count = 1, .reusable = false}}, SHIFT(220),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(443),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(544),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(542),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(541),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(540),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(539),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(538),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response, 5),
  [296] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_response, 5),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_request_repeat1, 2),
  [300] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_request_repeat1, 2),
  [302] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat1, 2), SHIFT_REPEAT(218),
  [305] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_request_repeat1, 2), SHIFT_REPEAT(490),
  [308] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_request_repeat1, 2), SHIFT_REPEAT(346),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multipart_form_data_section, 4),
  [313] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multipart_form_data_section, 4),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multipart_form_data_section, 3),
  [319] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multipart_form_data_section, 3),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multipart_form_data_section, 5),
  [323] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multipart_form_data_section, 5),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insecure_option, 4),
  [327] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_insecure_option, 4),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_retry_option, 4),
  [331] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_retry_option, 4),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_very_verbose_option, 4),
  [335] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_very_verbose_option, 4),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_verbose_option, 4),
  [339] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_verbose_option, 4),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_option, 4),
  [343] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_option, 4),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_max_redirs_option, 4),
  [347] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_max_redirs_option, 4),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ca_certificate_option, 3),
  [351] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ca_certificate_option, 3),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_follow_redirect_option, 4),
  [355] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_follow_redirect_option, 4),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_retry_max_count_option, 4),
  [359] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_retry_max_count_option, 4),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_retry_interval_option, 4),
  [363] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_retry_interval_option, 4),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ca_certificate_option, 4),
  [367] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ca_certificate_option, 4),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option, 1),
  [371] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_option, 1),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_string_params_section, 3),
  [375] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query_string_params_section, 3),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_form_params_section, 4),
  [379] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_form_params_section, 4),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cookies_section, 3),
  [383] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cookies_section, 3),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cookies_section, 5),
  [387] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cookies_section, 5),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_form_params_section, 3),
  [391] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_form_params_section, 3),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cookies_section, 4),
  [395] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cookies_section, 4),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_string_params_section, 4),
  [399] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query_string_params_section, 4),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_form_params_section, 5),
  [403] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_form_params_section, 5),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_string_params_section, 5),
  [407] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query_string_params_section, 5),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_request_repeat2, 2),
  [411] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_request_repeat2, 2),
  [413] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat2, 2), SHIFT_REPEAT(390),
  [416] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat2, 2), SHIFT_REPEAT(394),
  [419] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat2, 2), SHIFT_REPEAT(397),
  [422] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat2, 2), SHIFT_REPEAT(399),
  [425] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat2, 2), SHIFT_REPEAT(400),
  [428] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat2, 2), SHIFT_REPEAT(403),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assert, 4),
  [433] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assert, 4),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_hurl_file_repeat2, 2),
  [437] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_hurl_file_repeat2, 2), SHIFT_REPEAT(52),
  [440] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_hurl_file_repeat2, 2),
  [442] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_hurl_file_repeat2, 2), SHIFT_REPEAT(52),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assert, 3),
  [447] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assert, 3),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [451] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [453] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__comment_or_new_line_repeat1, 2), SHIFT_REPEAT(53),
  [456] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__comment_or_new_line_repeat1, 2), SHIFT_REPEAT(53),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_captures_section, 3),
  [461] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_captures_section, 3),
  [463] = {.entry = {.count = 1, .reusable = false}}, SHIFT(232),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(497),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_captures_section, 2),
  [471] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_captures_section, 2),
  [473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 2),
  [475] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 2),
  [477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_captures_section_repeat1, 2),
  [479] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_captures_section_repeat1, 2),
  [481] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_captures_section_repeat1, 2), SHIFT_REPEAT(232),
  [484] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_captures_section_repeat1, 2), SHIFT_REPEAT(497),
  [487] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_captures_section_repeat1, 2), SHIFT_REPEAT(343),
  [490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_basic_auth_section, 4),
  [492] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_basic_auth_section, 4),
  [494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request_section, 1),
  [496] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request_section, 1),
  [498] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_capture_repeat1, 2), SHIFT_REPEAT(297),
  [501] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_capture_repeat1, 2),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_capture_repeat1, 2),
  [505] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_capture_repeat1, 2), SHIFT_REPEAT(75),
  [508] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_capture_repeat1, 2), SHIFT_REPEAT(76),
  [511] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_capture_repeat1, 2), SHIFT_REPEAT(77),
  [514] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_capture_repeat1, 2), SHIFT_REPEAT(78),
  [517] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_capture_repeat1, 2), SHIFT_REPEAT(79),
  [520] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_capture_repeat1, 2), SHIFT_REPEAT(80),
  [523] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_response_repeat1, 2),
  [525] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_response_repeat1, 2),
  [527] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_response_repeat1, 2), SHIFT_REPEAT(330),
  [530] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_response_repeat1, 2), SHIFT_REPEAT(405),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [535] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [537] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__comment_or_new_line_repeat1, 2), SHIFT_REPEAT(65),
  [540] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__comment_or_new_line_repeat1, 2), SHIFT_REPEAT(65),
  [543] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_capture, 4),
  [545] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_capture, 4),
  [547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_capture, 5),
  [549] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_capture, 5),
  [551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response_section, 1),
  [553] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_response_section, 1),
  [555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_string, 2),
  [557] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_string, 2),
  [559] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regex, 2),
  [561] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_regex, 2),
  [563] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regex, 3),
  [565] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_regex, 3),
  [567] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regex_filter, 2),
  [569] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_regex_filter, 2),
  [571] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_string, 3),
  [573] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_string, 3),
  [575] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_count_filter, 1),
  [577] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_count_filter, 1),
  [579] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url_encode_filter, 1),
  [581] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_url_encode_filter, 1),
  [583] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url_decode_filter, 1),
  [585] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_url_decode_filter, 1),
  [587] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_html_encode_filter, 1),
  [589] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_html_encode_filter, 1),
  [591] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_html_decode_filter, 1),
  [593] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_html_decode_filter, 1),
  [595] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_to_int_filter, 1),
  [597] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_to_int_filter, 1),
  [599] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filter, 1),
  [601] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_filter, 1),
  [603] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regex_query, 2),
  [605] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_regex_query, 2),
  [607] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url_query, 1),
  [609] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_url_query, 1),
  [611] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body_query, 1),
  [613] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_body_query, 1),
  [615] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jsonpath_query, 2),
  [617] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_jsonpath_query, 2),
  [619] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xpath_query, 2),
  [621] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xpath_query, 2),
  [623] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cookie_query, 2),
  [625] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cookie_query, 2),
  [627] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_query, 2),
  [629] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header_query, 2),
  [631] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_duration_query, 1),
  [633] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_duration_query, 1),
  [635] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sha256_query, 1),
  [637] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sha256_query, 1),
  [639] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_md5_query, 1),
  [641] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_md5_query, 1),
  [643] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bytes_query, 1),
  [645] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bytes_query, 1),
  [647] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query, 1),
  [649] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query, 1),
  [651] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_query, 2),
  [653] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_query, 2),
  [655] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_status_query, 1),
  [657] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_status_query, 1),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(426),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(434),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [685] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entry, 1),
  [687] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_entry, 1),
  [689] = {.entry = {.count = 1, .reusable = false}}, SHIFT(420),
  [691] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hurl_file, 1),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(491),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(488),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(487),
  [707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [709] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_hurl_file_repeat1, 2),
  [711] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_hurl_file_repeat1, 2), SHIFT_REPEAT(311),
  [714] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_hurl_file_repeat1, 2),
  [716] = {.entry = {.count = 1, .reusable = false}}, SHIFT(233),
  [718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(520),
  [720] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 6),
  [722] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 6),
  [724] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_key_value, 2),
  [726] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [728] = {.entry = {.count = 1, .reusable = false}}, SHIFT(247),
  [730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [732] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 2),
  [734] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_body, 2),
  [736] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entry, 2),
  [738] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_entry, 2),
  [740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [742] = {.entry = {.count = 1, .reusable = false}}, SHIFT(212),
  [744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [756] = {.entry = {.count = 1, .reusable = false}}, SHIFT(304),
  [758] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [760] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [762] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [764] = {.entry = {.count = 1, .reusable = false}}, SHIFT(201),
  [766] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [768] = {.entry = {.count = 1, .reusable = false}}, SHIFT(207),
  [770] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [772] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entry, 3),
  [774] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_entry, 3),
  [776] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response, 6),
  [778] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_response, 6),
  [780] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_capture_repeat1, 2), SHIFT_REPEAT(304),
  [783] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_capture_repeat1, 2), SHIFT_REPEAT(189),
  [786] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_capture_repeat1, 2), SHIFT_REPEAT(195),
  [789] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_capture_repeat1, 2), SHIFT_REPEAT(197),
  [792] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_capture_repeat1, 2), SHIFT_REPEAT(201),
  [795] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_capture_repeat1, 2), SHIFT_REPEAT(203),
  [798] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_capture_repeat1, 2), SHIFT_REPEAT(207),
  [801] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 2),
  [803] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 1),
  [805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [807] = {.entry = {.count = 1, .reusable = false}}, SHIFT(238),
  [809] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [811] = {.entry = {.count = 1, .reusable = false}}, SHIFT(496),
  [813] = {.entry = {.count = 1, .reusable = false}}, SHIFT(265),
  [815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [817] = {.entry = {.count = 1, .reusable = false}}, SHIFT(543),
  [819] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multiline_string_repeat1, 2), SHIFT_REPEAT(238),
  [822] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multiline_string_repeat1, 2), SHIFT_REPEAT(193),
  [825] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_multiline_string_repeat1, 2),
  [827] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multiline_string_repeat1, 2), SHIFT_REPEAT(265),
  [830] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_multiline_string_repeat1, 2), SHIFT_REPEAT(345),
  [833] = {.entry = {.count = 1, .reusable = false}}, SHIFT(467),
  [835] = {.entry = {.count = 1, .reusable = false}}, SHIFT(393),
  [837] = {.entry = {.count = 1, .reusable = false}}, SHIFT(241),
  [839] = {.entry = {.count = 1, .reusable = false}}, SHIFT(337),
  [841] = {.entry = {.count = 1, .reusable = false}}, SHIFT(202),
  [843] = {.entry = {.count = 1, .reusable = false}}, SHIFT(310),
  [845] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [847] = {.entry = {.count = 1, .reusable = false}}, SHIFT(344),
  [849] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [851] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [853] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_value_string_repeat1, 2),
  [855] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_string_repeat1, 2), SHIFT_REPEAT(174),
  [858] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_string_repeat1, 2), SHIFT_REPEAT(247),
  [861] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_value_string_repeat1, 2), SHIFT_REPEAT(371),
  [864] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_string, 1),
  [866] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [868] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_quoted_string_repeat1, 2),
  [870] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_string_repeat1, 2), SHIFT_REPEAT(310),
  [873] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_string_repeat1, 2), SHIFT_REPEAT(157),
  [876] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_string_repeat1, 2), SHIFT_REPEAT(344),
  [879] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [881] = {.entry = {.count = 1, .reusable = false}}, SHIFT(239),
  [883] = {.entry = {.count = 1, .reusable = false}}, SHIFT(464),
  [885] = {.entry = {.count = 1, .reusable = false}}, SHIFT(471),
  [887] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [889] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_key_string_repeat1, 2),
  [891] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_key_string_repeat1, 2),
  [893] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_string_repeat1, 2), SHIFT_REPEAT(218),
  [896] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_string_repeat1, 2), SHIFT_REPEAT(490),
  [899] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_string_repeat1, 2), SHIFT_REPEAT(346),
  [902] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline_string_content, 1),
  [904] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_string_content, 1),
  [906] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multiline_string_content_repeat1, 2), SHIFT_REPEAT(238),
  [909] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multiline_string_content_repeat1, 2), SHIFT_REPEAT(193),
  [912] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_multiline_string_content_repeat1, 2),
  [914] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multiline_string_content_repeat1, 2), SHIFT_REPEAT(265),
  [917] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_multiline_string_content_repeat1, 2),
  [919] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_oneline_string_repeat1, 2), SHIFT_REPEAT(239),
  [922] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_oneline_string_repeat1, 2),
  [924] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_oneline_string_repeat1, 2), SHIFT_REPEAT(471),
  [927] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_oneline_string_repeat1, 2), SHIFT_REPEAT(348),
  [930] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_string, 1),
  [932] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_key_string, 1),
  [934] = {.entry = {.count = 1, .reusable = false}}, SHIFT(472),
  [936] = {.entry = {.count = 1, .reusable = false}}, SHIFT(480),
  [938] = {.entry = {.count = 1, .reusable = false}}, SHIFT(419),
  [940] = {.entry = {.count = 1, .reusable = false}}, SHIFT(236),
  [942] = {.entry = {.count = 1, .reusable = false}}, SHIFT(357),
  [944] = {.entry = {.count = 1, .reusable = false}}, SHIFT(356),
  [946] = {.entry = {.count = 1, .reusable = false}}, SHIFT(473),
  [948] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [950] = {.entry = {.count = 1, .reusable = false}}, SHIFT(320),
  [952] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [954] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [956] = {.entry = {.count = 1, .reusable = false}}, SHIFT(470),
  [958] = {.entry = {.count = 1, .reusable = false}}, SHIFT(287),
  [960] = {.entry = {.count = 1, .reusable = false}}, SHIFT(288),
  [962] = {.entry = {.count = 1, .reusable = false}}, SHIFT(440),
  [964] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer, 1),
  [966] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [968] = {.entry = {.count = 1, .reusable = false}}, SHIFT(463),
  [970] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [972] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_filename, 1),
  [974] = {.entry = {.count = 1, .reusable = false}}, SHIFT(299),
  [976] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_string_repeat1, 2), SHIFT_REPEAT(233),
  [979] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_string_repeat1, 2), SHIFT_REPEAT(520),
  [982] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_string_repeat1, 2), SHIFT_REPEAT(367),
  [985] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_name, 2),
  [987] = {.entry = {.count = 1, .reusable = false}}, SHIFT(273),
  [989] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_integer_repeat1, 2),
  [991] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_integer_repeat1, 2), SHIFT_REPEAT(208),
  [994] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_json_string_repeat1, 2),
  [996] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_string_repeat1, 2), SHIFT_REPEAT(180),
  [999] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_string_repeat1, 2), SHIFT_REPEAT(320),
  [1002] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_json_string_repeat1, 2), SHIFT_REPEAT(351),
  [1005] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_filename_repeat1, 2),
  [1007] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_filename_repeat1, 2), SHIFT_REPEAT(393),
  [1010] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_filename_repeat1, 2), SHIFT_REPEAT(241),
  [1013] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_filename_repeat1, 2), SHIFT_REPEAT(337),
  [1016] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_string_repeat1, 2), SHIFT_REPEAT(232),
  [1019] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_string_repeat1, 2), SHIFT_REPEAT(497),
  [1022] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_string_repeat1, 2), SHIFT_REPEAT(343),
  [1025] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_filename_repeat1, 2), SHIFT_REPEAT(419),
  [1028] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_filename_repeat1, 2), SHIFT_REPEAT(236),
  [1031] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_filename_repeat1, 2), SHIFT_REPEAT(357),
  [1034] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [1036] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [1038] = {.entry = {.count = 1, .reusable = false}}, SHIFT(308),
  [1040] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_string_content, 1),
  [1042] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_string_content, 1),
  [1044] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_quoted_string_content_repeat1, 2),
  [1046] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_string_content_repeat1, 2), SHIFT_REPEAT(310),
  [1049] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_string_content_repeat1, 2), SHIFT_REPEAT(157),
  [1052] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [1054] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [1056] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_string_content, 1),
  [1058] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [1060] = {.entry = {.count = 1, .reusable = true}}, SHIFT(435),
  [1062] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_value_string_content_repeat1, 2),
  [1064] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_string_content_repeat1, 2), SHIFT_REPEAT(174),
  [1067] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_string_content_repeat1, 2), SHIFT_REPEAT(247),
  [1070] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_value_string_content_repeat1, 2),
  [1072] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fraction, 2),
  [1074] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_number, 1),
  [1076] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [1078] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [1080] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_digit, 1),
  [1082] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_integer_repeat1, 2), SHIFT_REPEAT(258),
  [1085] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_integer_repeat1, 2),
  [1087] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneline_string_content, 1),
  [1089] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneline_string_content, 1),
  [1091] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [1093] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [1095] = {.entry = {.count = 1, .reusable = false}}, SHIFT(485),
  [1097] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [1099] = {.entry = {.count = 1, .reusable = false}}, SHIFT(417),
  [1101] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_oneline_string_content_repeat1, 2), SHIFT_REPEAT(239),
  [1104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_oneline_string_content_repeat1, 2),
  [1106] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_oneline_string_content_repeat1, 2), SHIFT_REPEAT(471),
  [1109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_oneline_string_content_repeat1, 2),
  [1111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(204),
  [1113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer, 1),
  [1115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_string_content, 1),
  [1117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_key_string_content, 1),
  [1119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(468),
  [1121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_key_string_content_repeat1, 2),
  [1123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_key_string_content_repeat1, 2),
  [1125] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_string_content_repeat1, 2), SHIFT_REPEAT(222),
  [1128] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_string_content_repeat1, 2), SHIFT_REPEAT(490),
  [1131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_number, 2),
  [1133] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_string_content_repeat1, 2), SHIFT_REPEAT(224),
  [1136] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_string_content_repeat1, 2), SHIFT_REPEAT(520),
  [1139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exponent, 3),
  [1141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exponent, 2),
  [1143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_filename_content_repeat1, 2),
  [1145] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_filename_content_repeat1, 2), SHIFT_REPEAT(393),
  [1148] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_filename_content_repeat1, 2), SHIFT_REPEAT(229),
  [1151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_regex_content, 1),
  [1153] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_regex_content_repeat1, 2), SHIFT_REPEAT(485),
  [1156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_regex_content_repeat1, 2),
  [1158] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_regex_content_repeat1, 2), SHIFT_REPEAT(417),
  [1161] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_filename_content_repeat1, 2), SHIFT_REPEAT(419),
  [1164] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_filename_content_repeat1, 2), SHIFT_REPEAT(234),
  [1167] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_string_content_repeat1, 2), SHIFT_REPEAT(235),
  [1170] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_string_content_repeat1, 2), SHIFT_REPEAT(497),
  [1173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_filename_content, 1),
  [1175] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__comment_or_new_line_repeat1, 2), SHIFT_REPEAT(237),
  [1178] = {.entry = {.count = 1, .reusable = false}}, SHIFT(237),
  [1180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [1182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [1184] = {.entry = {.count = 1, .reusable = false}}, SHIFT(282),
  [1186] = {.entry = {.count = 1, .reusable = false}}, SHIFT(364),
  [1188] = {.entry = {.count = 1, .reusable = false}}, SHIFT(246),
  [1190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_number, 1),
  [1192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fraction, 2),
  [1194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_multiline_string_content_repeat1, 1),
  [1196] = {.entry = {.count = 1, .reusable = false}}, SHIFT(523),
  [1198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_multiline_string_content_repeat1, 1),
  [1200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template, 3),
  [1202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_template, 3),
  [1204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [1206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_string_text, 1),
  [1208] = {.entry = {.count = 1, .reusable = false}}, SHIFT(260),
  [1210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_string_text, 1),
  [1212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hurl_file, 2),
  [1214] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_hurl_file_repeat2, 2), SHIFT_REPEAT(10),
  [1217] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_hurl_file_repeat2, 2), SHIFT_REPEAT(10),
  [1220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_string_escaped_char, 2),
  [1222] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_key_string_escaped_char, 2),
  [1224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline_string_escaped_char, 3),
  [1226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_string_escaped_char, 3),
  [1228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_oneline_hex_repeat1, 2),
  [1230] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_oneline_hex_repeat1, 2), SHIFT_REPEAT(391),
  [1233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [1235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_value, 1),
  [1237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_key_string_repeat1, 1),
  [1239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_value, 1),
  [1241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unicode_char, 3),
  [1243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unicode_char, 3),
  [1245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_digit, 1),
  [1247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline_string_escaped_char, 2),
  [1249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_string_escaped_char, 2),
  [1251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_value_string_text_repeat1, 2),
  [1253] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_string_text_repeat1, 2), SHIFT_REPEAT(260),
  [1256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_value_string_text_repeat1, 2),
  [1258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [1260] = {.entry = {.count = 1, .reusable = false}}, SHIFT(263),
  [1262] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__comment_or_new_line_repeat1, 2), SHIFT_REPEAT(263),
  [1265] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__comment_or_new_line_repeat1, 2), SHIFT_REPEAT(263),
  [1268] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline_string_text, 1),
  [1270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_string_text, 1),
  [1272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(475),
  [1274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [1276] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hexdigit, 1),
  [1278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hexdigit, 1),
  [1280] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_string_escaped_char, 3),
  [1282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_string_escaped_char, 3),
  [1284] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneline_string_escaped_char, 3),
  [1286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneline_string_escaped_char, 3),
  [1288] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_string_escaped_char, 6),
  [1290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_string_escaped_char, 6),
  [1292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_string, 2),
  [1294] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneline_string_text, 2),
  [1296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneline_string_text, 2),
  [1298] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_exponent, 3),
  [1300] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_string_content, 1),
  [1302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_string_content, 1),
  [1304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [1306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [1308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [1310] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneline_string_escaped_char, 2),
  [1312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneline_string_escaped_char, 2),
  [1314] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_string_escaped_char, 2),
  [1316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_string_escaped_char, 2),
  [1318] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_string_escaped_char, 2),
  [1320] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_invalid_quoted_string_escaped_char, 2),
  [1322] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_exponent, 2),
  [1324] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_query_string_params_section_repeat1, 2), SHIFT_REPEAT(261),
  [1327] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_string_params_section_repeat1, 2), SHIFT_REPEAT(261),
  [1330] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_filename_escaped_char, 2),
  [1332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(445),
  [1334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_string, 3),
  [1336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [1338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [1340] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_string_escaped_char, 2),
  [1342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_string_escaped_char, 2),
  [1344] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_string_text, 1),
  [1346] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_method, 1),
  [1348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method, 1),
  [1350] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_string_text, 1),
  [1352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_string_text, 1),
  [1354] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_string_escaped_char, 3),
  [1356] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_number, 2),
  [1358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [1360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [1362] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_multipart_form_data_section_repeat1, 2), SHIFT_REPEAT(261),
  [1365] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multipart_form_data_section_repeat1, 2), SHIFT_REPEAT(261),
  [1368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(507),
  [1370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_number, 3),
  [1372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_array, 3),
  [1374] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_regex_escaped_char, 2),
  [1376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_object, 3),
  [1378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [1380] = {.entry = {.count = 1, .reusable = false}}, SHIFT(261),
  [1382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_value, 2),
  [1384] = {.entry = {.count = 1, .reusable = false}}, SHIFT(502),
  [1386] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_file_value, 2),
  [1388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_array, 4),
  [1390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [1392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(474),
  [1394] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_json_array_repeat1, 2), SHIFT_REPEAT(116),
  [1397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_json_array_repeat1, 2),
  [1399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(518),
  [1401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(469),
  [1403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_object, 2),
  [1405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(498),
  [1407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_predicate_value, 1),
  [1409] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_predicate_value, 1),
  [1411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_json_object_repeat1, 2),
  [1413] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_json_object_repeat1, 2), SHIFT_REPEAT(292),
  [1416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_greater_predicate, 2),
  [1418] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_greater_predicate, 2),
  [1420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_greater_or_equal_predicate, 2),
  [1422] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_greater_or_equal_predicate, 2),
  [1424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [1426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_less_predicate, 2),
  [1428] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_less_predicate, 2),
  [1430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [1432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_less_or_equal_predicate, 2),
  [1434] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_less_or_equal_predicate, 2),
  [1436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(531),
  [1438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [1440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [1442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [1444] = {.entry = {.count = 1, .reusable = false}}, SHIFT(295),
  [1446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_value, 3),
  [1448] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_file_value, 3),
  [1450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_value, 1),
  [1452] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_value, 1),
  [1454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_value, 3),
  [1456] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_key_value, 3),
  [1458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [1460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_null, 1),
  [1462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_object, 4),
  [1464] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_regex_text, 1),
  [1466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [1468] = {.entry = {.count = 1, .reusable = false}}, SHIFT(291),
  [1470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version, 1),
  [1472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_key_value, 3),
  [1474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [1476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [1478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [1480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [1482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [1484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [1486] = {.entry = {.count = 1, .reusable = false}}, SHIFT(424),
  [1488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [1490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneline_hex, 3),
  [1492] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneline_hex, 3),
  [1494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [1496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [1498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [1500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [1502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [1504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [1506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [1508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [1510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [1512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [1514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [1516] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneline_file, 3),
  [1518] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneline_file, 3),
  [1520] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multipart_form_data_param, 1),
  [1522] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multipart_form_data_param, 1),
  [1524] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xml, 3),
  [1526] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xml, 3),
  [1528] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1530] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneline_base64, 3),
  [1532] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneline_base64, 3),
  [1534] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_string, 3),
  [1536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneline_string, 3),
  [1538] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneline_string, 3),
  [1540] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_key_string, 1, .production_id = 1),
  [1542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [1544] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_string, 3),
  [1546] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline_string, 3),
  [1548] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_object, 2),
  [1550] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_object, 3),
  [1552] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_string_type, 1),
  [1554] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline_string_type, 1),
  [1556] = {.entry = {.count = 1, .reusable = false}}, SHIFT(275),
  [1558] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneline_string, 2),
  [1560] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneline_string, 2),
  [1562] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_string, 2),
  [1564] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_array, 3),
  [1566] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneline_hex, 2),
  [1568] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneline_hex, 2),
  [1570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(462),
  [1572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(459),
  [1574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(457),
  [1576] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneline_file, 2),
  [1578] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneline_file, 2),
  [1580] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_number, 3),
  [1582] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bytes, 1),
  [1584] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bytes, 1),
  [1586] = {.entry = {.count = 1, .reusable = false}}, SHIFT(353),
  [1588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [1590] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_null, 1),
  [1592] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1),
  [1594] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_query_string_params_section_repeat1, 2),
  [1596] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_query_string_params_section_repeat1, 2),
  [1598] = {.entry = {.count = 1, .reusable = false}}, SHIFT(250),
  [1600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(476),
  [1602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(477),
  [1604] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_multipart_form_data_section_repeat1, 2),
  [1606] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_multipart_form_data_section_repeat1, 2),
  [1608] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_value, 4),
  [1610] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_file_value, 4),
  [1612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [1614] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_string, 4),
  [1616] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline_string, 4),
  [1618] = {.entry = {.count = 1, .reusable = false}}, SHIFT(274),
  [1620] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_object, 4),
  [1622] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 3),
  [1624] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_definition, 3),
  [1626] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_contenttype, 1),
  [1628] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_file_contenttype, 1),
  [1630] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_predicate, 2),
  [1632] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_include_predicate, 2),
  [1634] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_match_predicate, 2),
  [1636] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_match_predicate, 2),
  [1638] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contain_predicate, 2),
  [1640] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_contain_predicate, 2),
  [1642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [1644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [1646] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_end_with_predicate, 2),
  [1648] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_end_with_predicate, 2),
  [1650] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_with_predicate, 2),
  [1652] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_with_predicate, 2),
  [1654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [1656] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_not_equal_predicate, 2),
  [1658] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_not_equal_predicate, 2),
  [1660] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_equal_predicate, 2),
  [1662] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_equal_predicate, 2),
  [1664] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_status, 1),
  [1666] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_status, 1),
  [1668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [1670] = {.entry = {.count = 1, .reusable = false}}, SHIFT(312),
  [1672] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_predicate, 2),
  [1674] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_predicate, 2),
  [1676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [1678] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_string, 6),
  [1680] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline_string, 6),
  [1682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [1684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [1686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [1688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [1690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [1692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [1694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [1696] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_array, 4),
  [1698] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float, 2),
  [1700] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float, 2),
  [1702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [1704] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_param, 4),
  [1706] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_file_param, 4),
  [1708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [1710] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_predicate_func, 1),
  [1712] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_predicate_func, 1),
  [1714] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_predicate, 1),
  [1716] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_predicate, 1),
  [1718] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_collection_predicate, 1),
  [1720] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_collection_predicate, 1),
  [1722] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_predicate, 1),
  [1724] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_predicate, 1),
  [1726] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_predicate, 1),
  [1728] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean_predicate, 1),
  [1730] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float_predicate, 1),
  [1732] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float_predicate, 1),
  [1734] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_predicate, 1),
  [1736] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer_predicate, 1),
  [1738] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_string, 5),
  [1740] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline_string, 5),
  [1742] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exist_predicate, 1),
  [1744] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_exist_predicate, 1),
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
