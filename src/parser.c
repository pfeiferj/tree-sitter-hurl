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
#define STATE_COUNT 534
#define LARGE_STATE_COUNT 14
#define SYMBOL_COUNT 312
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
  sym_request = 148,
  sym_response = 149,
  sym_method = 150,
  sym_version = 151,
  sym_status = 152,
  sym_header = 153,
  sym_body = 154,
  sym_request_section = 155,
  sym_response_section = 156,
  sym_basic_auth_section = 157,
  sym_query_string_params_section = 158,
  sym_form_params_section = 159,
  sym_multipart_form_data_section = 160,
  sym_cookies_section = 161,
  sym_captures_section = 162,
  sym_asserts_section = 163,
  sym_options_section = 164,
  sym_key_value = 165,
  sym_multipart_form_data_param = 166,
  sym_file_param = 167,
  sym_file_value = 168,
  sym_file_contenttype = 169,
  sym_capture = 170,
  sym_assert = 171,
  sym_option = 172,
  sym_ca_certificate_option = 173,
  sym_follow_redirect_option = 174,
  sym_insecure_option = 175,
  sym_max_redirs_option = 176,
  sym_retry_option = 177,
  sym_retry_interval_option = 178,
  sym_retry_max_count_option = 179,
  sym_variable_option = 180,
  sym_verbose_option = 181,
  sym_very_verbose_option = 182,
  sym_variable_definition = 183,
  sym_variable_value = 184,
  sym_query = 185,
  sym_status_query = 186,
  sym_url_query = 187,
  sym_header_query = 188,
  sym_cookie_query = 189,
  sym_body_query = 190,
  sym_xpath_query = 191,
  sym_jsonpath_query = 192,
  sym_regex_query = 193,
  sym_variable_query = 194,
  sym_duration_query = 195,
  sym_sha256_query = 196,
  sym_md5_query = 197,
  sym_bytes_query = 198,
  sym_predicate = 199,
  sym_predicate_func = 200,
  sym_equal_predicate = 201,
  sym_not_equal_predicate = 202,
  sym_greater_predicate = 203,
  sym_greater_or_equal_predicate = 204,
  sym_less_predicate = 205,
  sym_less_or_equal_predicate = 206,
  sym_start_with_predicate = 207,
  sym_end_with_predicate = 208,
  sym_contain_predicate = 209,
  sym_match_predicate = 210,
  sym_exist_predicate = 211,
  sym_include_predicate = 212,
  sym_integer_predicate = 213,
  sym_float_predicate = 214,
  sym_boolean_predicate = 215,
  sym_string_predicate = 216,
  sym_collection_predicate = 217,
  sym_predicate_value = 218,
  sym_bytes = 219,
  sym_xml = 220,
  sym_oneline_base64 = 221,
  sym_oneline_file = 222,
  sym_oneline_hex = 223,
  sym_quoted_string = 224,
  sym_quoted_string_content = 225,
  sym_quoted_string_text = 226,
  sym_invalid_quoted_string_escaped_char = 227,
  sym_quoted_string_escaped_char = 228,
  sym_key_string = 229,
  sym_key_string_content = 230,
  sym_key_string_escaped_char = 231,
  sym_value_string = 232,
  sym_value_string_content = 233,
  sym_value_string_text = 234,
  sym_value_string_escaped_char = 235,
  sym_oneline_string = 236,
  sym_oneline_string_content = 237,
  sym_oneline_string_text = 238,
  sym_oneline_string_escaped_char = 239,
  sym_multiline_string = 240,
  sym_multiline_string_type = 241,
  sym_multiline_string_content = 242,
  sym_multiline_string_text = 243,
  sym_multiline_string_escaped_char = 244,
  sym_filename = 245,
  sym_filename_content = 246,
  sym_filename_escaped_char = 247,
  sym_unicode_char = 248,
  sym_json_value = 249,
  sym_json_object = 250,
  sym_json_key_value = 251,
  sym_json_key_string = 252,
  sym_json_array = 253,
  sym_json_string = 254,
  sym_json_string_content = 255,
  sym_json_string_text = 256,
  sym_json_string_escaped_char = 257,
  sym_json_number = 258,
  sym_template = 259,
  sym_expr = 260,
  sym_variable_name = 261,
  sym_filter = 262,
  sym_regex_filter = 263,
  sym_count_filter = 264,
  sym_url_encode_filter = 265,
  sym_url_decode_filter = 266,
  sym_html_encode_filter = 267,
  sym_html_decode_filter = 268,
  sym_to_int_filter = 269,
  sym_boolean = 270,
  sym_null = 271,
  sym_integer = 272,
  sym_float = 273,
  sym_digit = 274,
  sym_hexdigit = 275,
  sym_fraction = 276,
  sym_exponent = 277,
  sym_regex = 278,
  sym_regex_content = 279,
  sym_regex_text = 280,
  sym_regex_escaped_char = 281,
  aux_sym_hurl_file_repeat1 = 282,
  aux_sym_hurl_file_repeat2 = 283,
  aux_sym_request_repeat1 = 284,
  aux_sym_request_repeat2 = 285,
  aux_sym_response_repeat1 = 286,
  aux_sym_query_string_params_section_repeat1 = 287,
  aux_sym_multipart_form_data_section_repeat1 = 288,
  aux_sym_captures_section_repeat1 = 289,
  aux_sym_asserts_section_repeat1 = 290,
  aux_sym_options_section_repeat1 = 291,
  aux_sym_capture_repeat1 = 292,
  aux_sym_oneline_hex_repeat1 = 293,
  aux_sym_quoted_string_repeat1 = 294,
  aux_sym_quoted_string_content_repeat1 = 295,
  aux_sym_key_string_repeat1 = 296,
  aux_sym_key_string_content_repeat1 = 297,
  aux_sym_value_string_repeat1 = 298,
  aux_sym_value_string_content_repeat1 = 299,
  aux_sym_value_string_text_repeat1 = 300,
  aux_sym_oneline_string_repeat1 = 301,
  aux_sym_oneline_string_content_repeat1 = 302,
  aux_sym_multiline_string_repeat1 = 303,
  aux_sym_multiline_string_content_repeat1 = 304,
  aux_sym_filename_repeat1 = 305,
  aux_sym_filename_content_repeat1 = 306,
  aux_sym_json_object_repeat1 = 307,
  aux_sym_json_array_repeat1 = 308,
  aux_sym_json_string_repeat1 = 309,
  aux_sym_integer_repeat1 = 310,
  aux_sym_regex_content_repeat1 = 311,
  anon_alias_sym_json_key_string = 312,
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
  [49] = 22,
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
  [60] = 60,
  [61] = 54,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
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
  [105] = 104,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 58,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 125,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 128,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 145,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 145,
  [152] = 152,
  [153] = 143,
  [154] = 154,
  [155] = 150,
  [156] = 143,
  [157] = 157,
  [158] = 149,
  [159] = 159,
  [160] = 160,
  [161] = 159,
  [162] = 162,
  [163] = 154,
  [164] = 75,
  [165] = 71,
  [166] = 79,
  [167] = 77,
  [168] = 80,
  [169] = 81,
  [170] = 84,
  [171] = 171,
  [172] = 172,
  [173] = 64,
  [174] = 85,
  [175] = 175,
  [176] = 176,
  [177] = 82,
  [178] = 178,
  [179] = 179,
  [180] = 72,
  [181] = 181,
  [182] = 86,
  [183] = 67,
  [184] = 89,
  [185] = 87,
  [186] = 68,
  [187] = 65,
  [188] = 88,
  [189] = 78,
  [190] = 70,
  [191] = 73,
  [192] = 192,
  [193] = 76,
  [194] = 194,
  [195] = 83,
  [196] = 196,
  [197] = 69,
  [198] = 74,
  [199] = 66,
  [200] = 200,
  [201] = 201,
  [202] = 148,
  [203] = 203,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 201,
  [209] = 209,
  [210] = 210,
  [211] = 211,
  [212] = 160,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 210,
  [217] = 217,
  [218] = 214,
  [219] = 219,
  [220] = 220,
  [221] = 221,
  [222] = 222,
  [223] = 223,
  [224] = 224,
  [225] = 225,
  [226] = 222,
  [227] = 227,
  [228] = 211,
  [229] = 229,
  [230] = 211,
  [231] = 181,
  [232] = 224,
  [233] = 194,
  [234] = 214,
  [235] = 235,
  [236] = 215,
  [237] = 237,
  [238] = 238,
  [239] = 239,
  [240] = 235,
  [241] = 241,
  [242] = 235,
  [243] = 243,
  [244] = 244,
  [245] = 245,
  [246] = 246,
  [247] = 247,
  [248] = 245,
  [249] = 249,
  [250] = 250,
  [251] = 251,
  [252] = 252,
  [253] = 253,
  [254] = 254,
  [255] = 255,
  [256] = 256,
  [257] = 257,
  [258] = 258,
  [259] = 259,
  [260] = 260,
  [261] = 261,
  [262] = 262,
  [263] = 263,
  [264] = 263,
  [265] = 265,
  [266] = 239,
  [267] = 267,
  [268] = 268,
  [269] = 220,
  [270] = 270,
  [271] = 263,
  [272] = 237,
  [273] = 273,
  [274] = 274,
  [275] = 275,
  [276] = 276,
  [277] = 237,
  [278] = 235,
  [279] = 219,
  [280] = 267,
  [281] = 281,
  [282] = 281,
  [283] = 283,
  [284] = 284,
  [285] = 285,
  [286] = 235,
  [287] = 235,
  [288] = 235,
  [289] = 289,
  [290] = 290,
  [291] = 237,
  [292] = 292,
  [293] = 293,
  [294] = 294,
  [295] = 235,
  [296] = 229,
  [297] = 273,
  [298] = 235,
  [299] = 239,
  [300] = 263,
  [301] = 235,
  [302] = 302,
  [303] = 303,
  [304] = 304,
  [305] = 305,
  [306] = 306,
  [307] = 307,
  [308] = 235,
  [309] = 309,
  [310] = 310,
  [311] = 311,
  [312] = 312,
  [313] = 313,
  [314] = 314,
  [315] = 315,
  [316] = 316,
  [317] = 317,
  [318] = 318,
  [319] = 319,
  [320] = 270,
  [321] = 321,
  [322] = 322,
  [323] = 309,
  [324] = 322,
  [325] = 307,
  [326] = 326,
  [327] = 313,
  [328] = 328,
  [329] = 329,
  [330] = 306,
  [331] = 331,
  [332] = 315,
  [333] = 319,
  [334] = 334,
  [335] = 335,
  [336] = 336,
  [337] = 337,
  [338] = 338,
  [339] = 329,
  [340] = 340,
  [341] = 338,
  [342] = 329,
  [343] = 343,
  [344] = 344,
  [345] = 345,
  [346] = 338,
  [347] = 347,
  [348] = 348,
  [349] = 329,
  [350] = 350,
  [351] = 338,
  [352] = 338,
  [353] = 353,
  [354] = 354,
  [355] = 355,
  [356] = 356,
  [357] = 305,
  [358] = 338,
  [359] = 338,
  [360] = 360,
  [361] = 338,
  [362] = 338,
  [363] = 363,
  [364] = 338,
  [365] = 365,
  [366] = 338,
  [367] = 367,
  [368] = 368,
  [369] = 369,
  [370] = 370,
  [371] = 371,
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
  [384] = 384,
  [385] = 385,
  [386] = 386,
  [387] = 387,
  [388] = 388,
  [389] = 389,
  [390] = 390,
  [391] = 391,
  [392] = 392,
  [393] = 393,
  [394] = 394,
  [395] = 395,
  [396] = 372,
  [397] = 373,
  [398] = 375,
  [399] = 376,
  [400] = 400,
  [401] = 377,
  [402] = 402,
  [403] = 403,
  [404] = 404,
  [405] = 405,
  [406] = 406,
  [407] = 275,
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
  [419] = 419,
  [420] = 420,
  [421] = 421,
  [422] = 422,
  [423] = 423,
  [424] = 424,
  [425] = 311,
  [426] = 426,
  [427] = 427,
  [428] = 428,
  [429] = 429,
  [430] = 430,
  [431] = 431,
  [432] = 432,
  [433] = 433,
  [434] = 434,
  [435] = 435,
  [436] = 436,
  [437] = 304,
  [438] = 438,
  [439] = 439,
  [440] = 440,
  [441] = 441,
  [442] = 442,
  [443] = 443,
  [444] = 312,
  [445] = 445,
  [446] = 321,
  [447] = 328,
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
  [461] = 461,
  [462] = 462,
  [463] = 463,
  [464] = 464,
  [465] = 465,
  [466] = 466,
  [467] = 467,
  [468] = 468,
  [469] = 469,
  [470] = 470,
  [471] = 471,
  [472] = 472,
  [473] = 473,
  [474] = 474,
  [475] = 475,
  [476] = 476,
  [477] = 477,
  [478] = 334,
  [479] = 479,
  [480] = 480,
  [481] = 337,
  [482] = 482,
  [483] = 483,
  [484] = 484,
  [485] = 485,
  [486] = 486,
  [487] = 487,
  [488] = 488,
  [489] = 268,
  [490] = 490,
  [491] = 491,
  [492] = 492,
  [493] = 493,
  [494] = 494,
  [495] = 314,
  [496] = 496,
  [497] = 497,
  [498] = 498,
  [499] = 488,
  [500] = 316,
  [501] = 442,
  [502] = 502,
  [503] = 503,
  [504] = 504,
  [505] = 505,
  [506] = 506,
  [507] = 317,
  [508] = 484,
  [509] = 486,
  [510] = 486,
  [511] = 484,
  [512] = 512,
  [513] = 484,
  [514] = 484,
  [515] = 484,
  [516] = 484,
  [517] = 484,
  [518] = 484,
  [519] = 484,
  [520] = 520,
  [521] = 521,
  [522] = 522,
  [523] = 523,
  [524] = 524,
  [525] = 525,
  [526] = 526,
  [527] = 484,
  [528] = 528,
  [529] = 529,
  [530] = 530,
  [531] = 531,
  [532] = 532,
  [533] = 533,
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
      if (lookahead == '\n') SKIP(10)
      if (lookahead == '#') ADVANCE(514);
      if (lookahead == '\\') ADVANCE(644);
      if (lookahead == '`') ADVANCE(829);
      if (lookahead == '{') ADVANCE(833);
      if (aux_sym_value_string_text_token1_character_set_1(lookahead)) ADVANCE(832);
      if (lookahead != 0) ADVANCE(831);
      END_STATE();
    case 10:
      if (lookahead == '\n') SKIP(10)
      if (lookahead == '#') ADVANCE(514);
      if (lookahead == '\\') ADVANCE(644);
      if (lookahead == '`') ADVANCE(829);
      if (aux_sym_value_string_text_token1_character_set_1(lookahead)) ADVANCE(832);
      if (lookahead != 0) ADVANCE(831);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(525);
      if (lookahead == ' ') SKIP(12)
      if (lookahead == '#') ADVANCE(514);
      if (lookahead == '\\') ADVANCE(644);
      if (lookahead == '{') ADVANCE(849);
      if (sym_filename_text_character_set_1(lookahead)) ADVANCE(848);
      if (lookahead != 0 &&
          lookahead != ';') ADVANCE(851);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(525);
      if (lookahead == ' ') SKIP(12)
      if (lookahead == '#') ADVANCE(514);
      if (lookahead == '\\') ADVANCE(644);
      if (sym_filename_text_character_set_1(lookahead)) ADVANCE(848);
      if (lookahead != 0 &&
          lookahead != ';') ADVANCE(851);
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
  [10] = {.lex_state = 520},
  [11] = {.lex_state = 515},
  [12] = {.lex_state = 515},
  [13] = {.lex_state = 515},
  [14] = {.lex_state = 515},
  [15] = {.lex_state = 515},
  [16] = {.lex_state = 515},
  [17] = {.lex_state = 16},
  [18] = {.lex_state = 16},
  [19] = {.lex_state = 515},
  [20] = {.lex_state = 515},
  [21] = {.lex_state = 519},
  [22] = {.lex_state = 519},
  [23] = {.lex_state = 519},
  [24] = {.lex_state = 519},
  [25] = {.lex_state = 515},
  [26] = {.lex_state = 515},
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
  [37] = {.lex_state = 519},
  [38] = {.lex_state = 519},
  [39] = {.lex_state = 519},
  [40] = {.lex_state = 519},
  [41] = {.lex_state = 519},
  [42] = {.lex_state = 519},
  [43] = {.lex_state = 519},
  [44] = {.lex_state = 519},
  [45] = {.lex_state = 519},
  [46] = {.lex_state = 515},
  [47] = {.lex_state = 515},
  [48] = {.lex_state = 515},
  [49] = {.lex_state = 520},
  [50] = {.lex_state = 519},
  [51] = {.lex_state = 520},
  [52] = {.lex_state = 520},
  [53] = {.lex_state = 520},
  [54] = {.lex_state = 519},
  [55] = {.lex_state = 515},
  [56] = {.lex_state = 515},
  [57] = {.lex_state = 16},
  [58] = {.lex_state = 16},
  [59] = {.lex_state = 515},
  [60] = {.lex_state = 520},
  [61] = {.lex_state = 520},
  [62] = {.lex_state = 520},
  [63] = {.lex_state = 515},
  [64] = {.lex_state = 16},
  [65] = {.lex_state = 16},
  [66] = {.lex_state = 16},
  [67] = {.lex_state = 16},
  [68] = {.lex_state = 16},
  [69] = {.lex_state = 16},
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
  [90] = {.lex_state = 21},
  [91] = {.lex_state = 515},
  [92] = {.lex_state = 16},
  [93] = {.lex_state = 16},
  [94] = {.lex_state = 16},
  [95] = {.lex_state = 515},
  [96] = {.lex_state = 2},
  [97] = {.lex_state = 515},
  [98] = {.lex_state = 515},
  [99] = {.lex_state = 515},
  [100] = {.lex_state = 515},
  [101] = {.lex_state = 20},
  [102] = {.lex_state = 515},
  [103] = {.lex_state = 515},
  [104] = {.lex_state = 16},
  [105] = {.lex_state = 16},
  [106] = {.lex_state = 16},
  [107] = {.lex_state = 16},
  [108] = {.lex_state = 515},
  [109] = {.lex_state = 515},
  [110] = {.lex_state = 515},
  [111] = {.lex_state = 515},
  [112] = {.lex_state = 515},
  [113] = {.lex_state = 515},
  [114] = {.lex_state = 4},
  [115] = {.lex_state = 16},
  [116] = {.lex_state = 4},
  [117] = {.lex_state = 16},
  [118] = {.lex_state = 4},
  [119] = {.lex_state = 7},
  [120] = {.lex_state = 3},
  [121] = {.lex_state = 7},
  [122] = {.lex_state = 7},
  [123] = {.lex_state = 7},
  [124] = {.lex_state = 25},
  [125] = {.lex_state = 22},
  [126] = {.lex_state = 3},
  [127] = {.lex_state = 8},
  [128] = {.lex_state = 22},
  [129] = {.lex_state = 8},
  [130] = {.lex_state = 22},
  [131] = {.lex_state = 22},
  [132] = {.lex_state = 8},
  [133] = {.lex_state = 8},
  [134] = {.lex_state = 3},
  [135] = {.lex_state = 8},
  [136] = {.lex_state = 22},
  [137] = {.lex_state = 9},
  [138] = {.lex_state = 25},
  [139] = {.lex_state = 28},
  [140] = {.lex_state = 11},
  [141] = {.lex_state = 28},
  [142] = {.lex_state = 9},
  [143] = {.lex_state = 25},
  [144] = {.lex_state = 9},
  [145] = {.lex_state = 25},
  [146] = {.lex_state = 25},
  [147] = {.lex_state = 7},
  [148] = {.lex_state = 21},
  [149] = {.lex_state = 23},
  [150] = {.lex_state = 23},
  [151] = {.lex_state = 32},
  [152] = {.lex_state = 24},
  [153] = {.lex_state = 32},
  [154] = {.lex_state = 28},
  [155] = {.lex_state = 23},
  [156] = {.lex_state = 7},
  [157] = {.lex_state = 23},
  [158] = {.lex_state = 23},
  [159] = {.lex_state = 28},
  [160] = {.lex_state = 21},
  [161] = {.lex_state = 11},
  [162] = {.lex_state = 26},
  [163] = {.lex_state = 11},
  [164] = {.lex_state = 4},
  [165] = {.lex_state = 4},
  [166] = {.lex_state = 4},
  [167] = {.lex_state = 4},
  [168] = {.lex_state = 4},
  [169] = {.lex_state = 4},
  [170] = {.lex_state = 4},
  [171] = {.lex_state = 3},
  [172] = {.lex_state = 8},
  [173] = {.lex_state = 4},
  [174] = {.lex_state = 4},
  [175] = {.lex_state = 3},
  [176] = {.lex_state = 22},
  [177] = {.lex_state = 4},
  [178] = {.lex_state = 19},
  [179] = {.lex_state = 22},
  [180] = {.lex_state = 4},
  [181] = {.lex_state = 21},
  [182] = {.lex_state = 4},
  [183] = {.lex_state = 4},
  [184] = {.lex_state = 4},
  [185] = {.lex_state = 4},
  [186] = {.lex_state = 4},
  [187] = {.lex_state = 4},
  [188] = {.lex_state = 4},
  [189] = {.lex_state = 4},
  [190] = {.lex_state = 4},
  [191] = {.lex_state = 4},
  [192] = {.lex_state = 19},
  [193] = {.lex_state = 4},
  [194] = {.lex_state = 21},
  [195] = {.lex_state = 4},
  [196] = {.lex_state = 8},
  [197] = {.lex_state = 4},
  [198] = {.lex_state = 4},
  [199] = {.lex_state = 4},
  [200] = {.lex_state = 19},
  [201] = {.lex_state = 21},
  [202] = {.lex_state = 515},
  [203] = {.lex_state = 16},
  [204] = {.lex_state = 16},
  [205] = {.lex_state = 16},
  [206] = {.lex_state = 16},
  [207] = {.lex_state = 4},
  [208] = {.lex_state = 21},
  [209] = {.lex_state = 9},
  [210] = {.lex_state = 13},
  [211] = {.lex_state = 25},
  [212] = {.lex_state = 515},
  [213] = {.lex_state = 9},
  [214] = {.lex_state = 25},
  [215] = {.lex_state = 21},
  [216] = {.lex_state = 13},
  [217] = {.lex_state = 19},
  [218] = {.lex_state = 7},
  [219] = {.lex_state = 21},
  [220] = {.lex_state = 21},
  [221] = {.lex_state = 16},
  [222] = {.lex_state = 28},
  [223] = {.lex_state = 13},
  [224] = {.lex_state = 28},
  [225] = {.lex_state = 16},
  [226] = {.lex_state = 11},
  [227] = {.lex_state = 13},
  [228] = {.lex_state = 7},
  [229] = {.lex_state = 21},
  [230] = {.lex_state = 32},
  [231] = {.lex_state = 515},
  [232] = {.lex_state = 11},
  [233] = {.lex_state = 515},
  [234] = {.lex_state = 32},
  [235] = {.lex_state = 8},
  [236] = {.lex_state = 515},
  [237] = {.lex_state = 8},
  [238] = {.lex_state = 30},
  [239] = {.lex_state = 25},
  [240] = {.lex_state = 7},
  [241] = {.lex_state = 8},
  [242] = {.lex_state = 25},
  [243] = {.lex_state = 8},
  [244] = {.lex_state = 7},
  [245] = {.lex_state = 16},
  [246] = {.lex_state = 8},
  [247] = {.lex_state = 8},
  [248] = {.lex_state = 16},
  [249] = {.lex_state = 3},
  [250] = {.lex_state = 8},
  [251] = {.lex_state = 3},
  [252] = {.lex_state = 8},
  [253] = {.lex_state = 23},
  [254] = {.lex_state = 3},
  [255] = {.lex_state = 9},
  [256] = {.lex_state = 3},
  [257] = {.lex_state = 16},
  [258] = {.lex_state = 22},
  [259] = {.lex_state = 23},
  [260] = {.lex_state = 16},
  [261] = {.lex_state = 16},
  [262] = {.lex_state = 16},
  [263] = {.lex_state = 30},
  [264] = {.lex_state = 30},
  [265] = {.lex_state = 30},
  [266] = {.lex_state = 32},
  [267] = {.lex_state = 16},
  [268] = {.lex_state = 21},
  [269] = {.lex_state = 515},
  [270] = {.lex_state = 23},
  [271] = {.lex_state = 30},
  [272] = {.lex_state = 22},
  [273] = {.lex_state = 11},
  [274] = {.lex_state = 3},
  [275] = {.lex_state = 21},
  [276] = {.lex_state = 22},
  [277] = {.lex_state = 3},
  [278] = {.lex_state = 3},
  [279] = {.lex_state = 515},
  [280] = {.lex_state = 16},
  [281] = {.lex_state = 16},
  [282] = {.lex_state = 16},
  [283] = {.lex_state = 30},
  [284] = {.lex_state = 23},
  [285] = {.lex_state = 23},
  [286] = {.lex_state = 11},
  [287] = {.lex_state = 32},
  [288] = {.lex_state = 22},
  [289] = {.lex_state = 22},
  [290] = {.lex_state = 22},
  [291] = {.lex_state = 9},
  [292] = {.lex_state = 9},
  [293] = {.lex_state = 9},
  [294] = {.lex_state = 16},
  [295] = {.lex_state = 9},
  [296] = {.lex_state = 515},
  [297] = {.lex_state = 28},
  [298] = {.lex_state = 28},
  [299] = {.lex_state = 7},
  [300] = {.lex_state = 30},
  [301] = {.lex_state = 23},
  [302] = {.lex_state = 515},
  [303] = {.lex_state = 16},
  [304] = {.lex_state = 21},
  [305] = {.lex_state = 16},
  [306] = {.lex_state = 16},
  [307] = {.lex_state = 21},
  [308] = {.lex_state = 21},
  [309] = {.lex_state = 21},
  [310] = {.lex_state = 16},
  [311] = {.lex_state = 21},
  [312] = {.lex_state = 21},
  [313] = {.lex_state = 16},
  [314] = {.lex_state = 21},
  [315] = {.lex_state = 21},
  [316] = {.lex_state = 21},
  [317] = {.lex_state = 21},
  [318] = {.lex_state = 21},
  [319] = {.lex_state = 16},
  [320] = {.lex_state = 30},
  [321] = {.lex_state = 21},
  [322] = {.lex_state = 20},
  [323] = {.lex_state = 21},
  [324] = {.lex_state = 20},
  [325] = {.lex_state = 21},
  [326] = {.lex_state = 16},
  [327] = {.lex_state = 16},
  [328] = {.lex_state = 21},
  [329] = {.lex_state = 30},
  [330] = {.lex_state = 16},
  [331] = {.lex_state = 13},
  [332] = {.lex_state = 21},
  [333] = {.lex_state = 16},
  [334] = {.lex_state = 21},
  [335] = {.lex_state = 13},
  [336] = {.lex_state = 16},
  [337] = {.lex_state = 21},
  [338] = {.lex_state = 31},
  [339] = {.lex_state = 30},
  [340] = {.lex_state = 16},
  [341] = {.lex_state = 31},
  [342] = {.lex_state = 30},
  [343] = {.lex_state = 31},
  [344] = {.lex_state = 515},
  [345] = {.lex_state = 6},
  [346] = {.lex_state = 31},
  [347] = {.lex_state = 515},
  [348] = {.lex_state = 515},
  [349] = {.lex_state = 30},
  [350] = {.lex_state = 515},
  [351] = {.lex_state = 31},
  [352] = {.lex_state = 31},
  [353] = {.lex_state = 16},
  [354] = {.lex_state = 6},
  [355] = {.lex_state = 515},
  [356] = {.lex_state = 515},
  [357] = {.lex_state = 16},
  [358] = {.lex_state = 31},
  [359] = {.lex_state = 31},
  [360] = {.lex_state = 515},
  [361] = {.lex_state = 31},
  [362] = {.lex_state = 31},
  [363] = {.lex_state = 26},
  [364] = {.lex_state = 31},
  [365] = {.lex_state = 515},
  [366] = {.lex_state = 31},
  [367] = {.lex_state = 16},
  [368] = {.lex_state = 30},
  [369] = {.lex_state = 26},
  [370] = {.lex_state = 515},
  [371] = {.lex_state = 0},
  [372] = {.lex_state = 16},
  [373] = {.lex_state = 16},
  [374] = {.lex_state = 30},
  [375] = {.lex_state = 16},
  [376] = {.lex_state = 16},
  [377] = {.lex_state = 16},
  [378] = {.lex_state = 515},
  [379] = {.lex_state = 515},
  [380] = {.lex_state = 515},
  [381] = {.lex_state = 515},
  [382] = {.lex_state = 515},
  [383] = {.lex_state = 0},
  [384] = {.lex_state = 515},
  [385] = {.lex_state = 515},
  [386] = {.lex_state = 515},
  [387] = {.lex_state = 0},
  [388] = {.lex_state = 21},
  [389] = {.lex_state = 30},
  [390] = {.lex_state = 515},
  [391] = {.lex_state = 515},
  [392] = {.lex_state = 16},
  [393] = {.lex_state = 515},
  [394] = {.lex_state = 0},
  [395] = {.lex_state = 0},
  [396] = {.lex_state = 16},
  [397] = {.lex_state = 16},
  [398] = {.lex_state = 16},
  [399] = {.lex_state = 16},
  [400] = {.lex_state = 16},
  [401] = {.lex_state = 16},
  [402] = {.lex_state = 515},
  [403] = {.lex_state = 30},
  [404] = {.lex_state = 515},
  [405] = {.lex_state = 515},
  [406] = {.lex_state = 21},
  [407] = {.lex_state = 515},
  [408] = {.lex_state = 515},
  [409] = {.lex_state = 515},
  [410] = {.lex_state = 21},
  [411] = {.lex_state = 515},
  [412] = {.lex_state = 515},
  [413] = {.lex_state = 515},
  [414] = {.lex_state = 515},
  [415] = {.lex_state = 515},
  [416] = {.lex_state = 515},
  [417] = {.lex_state = 515},
  [418] = {.lex_state = 515},
  [419] = {.lex_state = 515},
  [420] = {.lex_state = 515},
  [421] = {.lex_state = 515},
  [422] = {.lex_state = 515},
  [423] = {.lex_state = 515},
  [424] = {.lex_state = 515},
  [425] = {.lex_state = 515},
  [426] = {.lex_state = 515},
  [427] = {.lex_state = 515},
  [428] = {.lex_state = 515},
  [429] = {.lex_state = 515},
  [430] = {.lex_state = 515},
  [431] = {.lex_state = 515},
  [432] = {.lex_state = 515},
  [433] = {.lex_state = 515},
  [434] = {.lex_state = 515},
  [435] = {.lex_state = 16},
  [436] = {.lex_state = 515},
  [437] = {.lex_state = 515},
  [438] = {.lex_state = 515},
  [439] = {.lex_state = 515},
  [440] = {.lex_state = 515},
  [441] = {.lex_state = 515},
  [442] = {.lex_state = 0},
  [443] = {.lex_state = 14},
  [444] = {.lex_state = 515},
  [445] = {.lex_state = 515},
  [446] = {.lex_state = 515},
  [447] = {.lex_state = 515},
  [448] = {.lex_state = 515},
  [449] = {.lex_state = 515},
  [450] = {.lex_state = 515},
  [451] = {.lex_state = 515},
  [452] = {.lex_state = 515},
  [453] = {.lex_state = 515},
  [454] = {.lex_state = 515},
  [455] = {.lex_state = 16},
  [456] = {.lex_state = 16},
  [457] = {.lex_state = 16},
  [458] = {.lex_state = 16},
  [459] = {.lex_state = 16},
  [460] = {.lex_state = 16},
  [461] = {.lex_state = 16},
  [462] = {.lex_state = 16},
  [463] = {.lex_state = 16},
  [464] = {.lex_state = 16},
  [465] = {.lex_state = 515},
  [466] = {.lex_state = 515},
  [467] = {.lex_state = 515},
  [468] = {.lex_state = 515},
  [469] = {.lex_state = 515},
  [470] = {.lex_state = 515},
  [471] = {.lex_state = 515},
  [472] = {.lex_state = 515},
  [473] = {.lex_state = 515},
  [474] = {.lex_state = 515},
  [475] = {.lex_state = 515},
  [476] = {.lex_state = 515},
  [477] = {.lex_state = 0},
  [478] = {.lex_state = 515},
  [479] = {.lex_state = 16},
  [480] = {.lex_state = 16},
  [481] = {.lex_state = 515},
  [482] = {.lex_state = 515},
  [483] = {.lex_state = 515},
  [484] = {.lex_state = 16},
  [485] = {.lex_state = 33},
  [486] = {.lex_state = 25},
  [487] = {.lex_state = 515},
  [488] = {.lex_state = 515},
  [489] = {.lex_state = 515},
  [490] = {.lex_state = 515},
  [491] = {.lex_state = 0},
  [492] = {.lex_state = 0},
  [493] = {.lex_state = 0},
  [494] = {.lex_state = 515},
  [495] = {.lex_state = 515},
  [496] = {.lex_state = 0},
  [497] = {.lex_state = 515},
  [498] = {.lex_state = 515},
  [499] = {.lex_state = 515},
  [500] = {.lex_state = 515},
  [501] = {.lex_state = 0},
  [502] = {.lex_state = 515},
  [503] = {.lex_state = 515},
  [504] = {.lex_state = 515},
  [505] = {.lex_state = 515},
  [506] = {.lex_state = 515},
  [507] = {.lex_state = 515},
  [508] = {.lex_state = 16},
  [509] = {.lex_state = 25},
  [510] = {.lex_state = 25},
  [511] = {.lex_state = 16},
  [512] = {.lex_state = 15},
  [513] = {.lex_state = 16},
  [514] = {.lex_state = 16},
  [515] = {.lex_state = 16},
  [516] = {.lex_state = 16},
  [517] = {.lex_state = 16},
  [518] = {.lex_state = 16},
  [519] = {.lex_state = 16},
  [520] = {.lex_state = 16},
  [521] = {.lex_state = 515},
  [522] = {.lex_state = 515},
  [523] = {.lex_state = 515},
  [524] = {.lex_state = 515},
  [525] = {.lex_state = 515},
  [526] = {.lex_state = 515},
  [527] = {.lex_state = 16},
  [528] = {.lex_state = 873},
  [529] = {.lex_state = 0},
  [530] = {.lex_state = 515},
  [531] = {.lex_state = 515},
  [532] = {.lex_state = 515},
  [533] = {.lex_state = 515},
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
    [sym_hurl_file] = STATE(477),
    [sym_entry] = STATE(95),
    [sym_request] = STATE(91),
    [sym_method] = STATE(120),
    [aux_sym_hurl_file_repeat1] = STATE(95),
    [aux_sym_hurl_file_repeat2] = STATE(365),
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
    [sym_header] = STATE(5),
    [sym_body] = STATE(100),
    [sym_request_section] = STATE(6),
    [sym_basic_auth_section] = STATE(55),
    [sym_query_string_params_section] = STATE(55),
    [sym_form_params_section] = STATE(55),
    [sym_multipart_form_data_section] = STATE(55),
    [sym_cookies_section] = STATE(55),
    [sym_options_section] = STATE(55),
    [sym_key_value] = STATE(499),
    [sym_bytes] = STATE(498),
    [sym_xml] = STATE(497),
    [sym_oneline_base64] = STATE(497),
    [sym_oneline_file] = STATE(497),
    [sym_oneline_hex] = STATE(497),
    [sym_key_string] = STATE(496),
    [sym_key_string_content] = STATE(145),
    [sym_key_string_escaped_char] = STATE(211),
    [sym_oneline_string] = STATE(497),
    [sym_multiline_string] = STATE(497),
    [sym_json_value] = STATE(497),
    [sym_json_object] = STATE(495),
    [sym_json_array] = STATE(495),
    [sym_json_string] = STATE(495),
    [sym_json_number] = STATE(495),
    [sym_template] = STATE(244),
    [sym_boolean] = STATE(495),
    [sym_null] = STATE(495),
    [sym_integer] = STATE(231),
    [sym_digit] = STATE(212),
    [aux_sym_hurl_file_repeat2] = STATE(50),
    [aux_sym_request_repeat1] = STATE(5),
    [aux_sym_request_repeat2] = STATE(6),
    [aux_sym_key_string_repeat1] = STATE(145),
    [aux_sym_key_string_content_repeat1] = STATE(211),
    [aux_sym_integer_repeat1] = STATE(212),
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
    [sym_comment] = ACTIONS(11),
  },
  [3] = {
    [sym_header] = STATE(4),
    [sym_body] = STATE(97),
    [sym_request_section] = STATE(8),
    [sym_basic_auth_section] = STATE(55),
    [sym_query_string_params_section] = STATE(55),
    [sym_form_params_section] = STATE(55),
    [sym_multipart_form_data_section] = STATE(55),
    [sym_cookies_section] = STATE(55),
    [sym_options_section] = STATE(55),
    [sym_key_value] = STATE(499),
    [sym_bytes] = STATE(498),
    [sym_xml] = STATE(497),
    [sym_oneline_base64] = STATE(497),
    [sym_oneline_file] = STATE(497),
    [sym_oneline_hex] = STATE(497),
    [sym_key_string] = STATE(496),
    [sym_key_string_content] = STATE(145),
    [sym_key_string_escaped_char] = STATE(211),
    [sym_oneline_string] = STATE(497),
    [sym_multiline_string] = STATE(497),
    [sym_json_value] = STATE(497),
    [sym_json_object] = STATE(495),
    [sym_json_array] = STATE(495),
    [sym_json_string] = STATE(495),
    [sym_json_number] = STATE(495),
    [sym_template] = STATE(244),
    [sym_boolean] = STATE(495),
    [sym_null] = STATE(495),
    [sym_integer] = STATE(231),
    [sym_digit] = STATE(212),
    [aux_sym_hurl_file_repeat2] = STATE(50),
    [aux_sym_request_repeat1] = STATE(4),
    [aux_sym_request_repeat2] = STATE(8),
    [aux_sym_key_string_repeat1] = STATE(145),
    [aux_sym_key_string_content_repeat1] = STATE(211),
    [aux_sym_integer_repeat1] = STATE(212),
    [ts_builtin_sym_end] = ACTIONS(61),
    [anon_sym_LF] = ACTIONS(15),
    [anon_sym_GET] = ACTIONS(63),
    [anon_sym_HEAD] = ACTIONS(63),
    [anon_sym_POST] = ACTIONS(63),
    [anon_sym_PUT] = ACTIONS(63),
    [anon_sym_DELETE] = ACTIONS(63),
    [anon_sym_CONNECT] = ACTIONS(63),
    [anon_sym_OPTIONS] = ACTIONS(63),
    [anon_sym_TRACE] = ACTIONS(63),
    [anon_sym_PATCH] = ACTIONS(63),
    [anon_sym_LINK] = ACTIONS(63),
    [anon_sym_UNLINK] = ACTIONS(63),
    [anon_sym_PURGE] = ACTIONS(63),
    [anon_sym_LOCK] = ACTIONS(63),
    [anon_sym_UNLOCK] = ACTIONS(63),
    [anon_sym_PROPFIND] = ACTIONS(63),
    [anon_sym_VIEW] = ACTIONS(63),
    [anon_sym_HTTP_SLASH1_DOT0] = ACTIONS(63),
    [anon_sym_HTTP_SLASH1_DOT1] = ACTIONS(63),
    [anon_sym_HTTP_SLASH2] = ACTIONS(63),
    [anon_sym_HTTP_SLASH_STAR] = ACTIONS(63),
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
    [sym_comment] = ACTIONS(11),
  },
  [4] = {
    [sym_header] = STATE(22),
    [sym_body] = STATE(100),
    [sym_request_section] = STATE(6),
    [sym_basic_auth_section] = STATE(55),
    [sym_query_string_params_section] = STATE(55),
    [sym_form_params_section] = STATE(55),
    [sym_multipart_form_data_section] = STATE(55),
    [sym_cookies_section] = STATE(55),
    [sym_options_section] = STATE(55),
    [sym_key_value] = STATE(499),
    [sym_bytes] = STATE(498),
    [sym_xml] = STATE(497),
    [sym_oneline_base64] = STATE(497),
    [sym_oneline_file] = STATE(497),
    [sym_oneline_hex] = STATE(497),
    [sym_key_string] = STATE(496),
    [sym_key_string_content] = STATE(145),
    [sym_key_string_escaped_char] = STATE(211),
    [sym_oneline_string] = STATE(497),
    [sym_multiline_string] = STATE(497),
    [sym_json_value] = STATE(497),
    [sym_json_object] = STATE(495),
    [sym_json_array] = STATE(495),
    [sym_json_string] = STATE(495),
    [sym_json_number] = STATE(495),
    [sym_template] = STATE(244),
    [sym_boolean] = STATE(495),
    [sym_null] = STATE(495),
    [sym_integer] = STATE(231),
    [sym_digit] = STATE(212),
    [aux_sym_request_repeat1] = STATE(22),
    [aux_sym_request_repeat2] = STATE(6),
    [aux_sym_key_string_repeat1] = STATE(145),
    [aux_sym_key_string_content_repeat1] = STATE(211),
    [aux_sym_integer_repeat1] = STATE(212),
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
    [sym_comment] = ACTIONS(11),
  },
  [5] = {
    [sym_header] = STATE(22),
    [sym_body] = STATE(102),
    [sym_request_section] = STATE(7),
    [sym_basic_auth_section] = STATE(55),
    [sym_query_string_params_section] = STATE(55),
    [sym_form_params_section] = STATE(55),
    [sym_multipart_form_data_section] = STATE(55),
    [sym_cookies_section] = STATE(55),
    [sym_options_section] = STATE(55),
    [sym_key_value] = STATE(499),
    [sym_bytes] = STATE(498),
    [sym_xml] = STATE(497),
    [sym_oneline_base64] = STATE(497),
    [sym_oneline_file] = STATE(497),
    [sym_oneline_hex] = STATE(497),
    [sym_key_string] = STATE(496),
    [sym_key_string_content] = STATE(145),
    [sym_key_string_escaped_char] = STATE(211),
    [sym_oneline_string] = STATE(497),
    [sym_multiline_string] = STATE(497),
    [sym_json_value] = STATE(497),
    [sym_json_object] = STATE(495),
    [sym_json_array] = STATE(495),
    [sym_json_string] = STATE(495),
    [sym_json_number] = STATE(495),
    [sym_template] = STATE(244),
    [sym_boolean] = STATE(495),
    [sym_null] = STATE(495),
    [sym_integer] = STATE(231),
    [sym_digit] = STATE(212),
    [aux_sym_request_repeat1] = STATE(22),
    [aux_sym_request_repeat2] = STATE(7),
    [aux_sym_key_string_repeat1] = STATE(145),
    [aux_sym_key_string_content_repeat1] = STATE(211),
    [aux_sym_integer_repeat1] = STATE(212),
    [ts_builtin_sym_end] = ACTIONS(65),
    [anon_sym_LF] = ACTIONS(65),
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
    [anon_sym_HTTP_SLASH1_DOT0] = ACTIONS(67),
    [anon_sym_HTTP_SLASH1_DOT1] = ACTIONS(67),
    [anon_sym_HTTP_SLASH2] = ACTIONS(67),
    [anon_sym_HTTP_SLASH_STAR] = ACTIONS(67),
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
    [sym_comment] = ACTIONS(11),
  },
  [6] = {
    [sym_body] = STATE(102),
    [sym_request_section] = STATE(46),
    [sym_basic_auth_section] = STATE(55),
    [sym_query_string_params_section] = STATE(55),
    [sym_form_params_section] = STATE(55),
    [sym_multipart_form_data_section] = STATE(55),
    [sym_cookies_section] = STATE(55),
    [sym_options_section] = STATE(55),
    [sym_bytes] = STATE(498),
    [sym_xml] = STATE(497),
    [sym_oneline_base64] = STATE(497),
    [sym_oneline_file] = STATE(497),
    [sym_oneline_hex] = STATE(497),
    [sym_oneline_string] = STATE(497),
    [sym_multiline_string] = STATE(497),
    [sym_json_value] = STATE(497),
    [sym_json_object] = STATE(495),
    [sym_json_array] = STATE(495),
    [sym_json_string] = STATE(495),
    [sym_json_number] = STATE(495),
    [sym_template] = STATE(495),
    [sym_boolean] = STATE(495),
    [sym_null] = STATE(495),
    [sym_integer] = STATE(231),
    [sym_digit] = STATE(212),
    [aux_sym_request_repeat2] = STATE(46),
    [aux_sym_integer_repeat1] = STATE(212),
    [ts_builtin_sym_end] = ACTIONS(65),
    [anon_sym_LF] = ACTIONS(65),
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
    [anon_sym_HTTP_SLASH1_DOT0] = ACTIONS(67),
    [anon_sym_HTTP_SLASH1_DOT1] = ACTIONS(67),
    [anon_sym_HTTP_SLASH2] = ACTIONS(67),
    [anon_sym_HTTP_SLASH_STAR] = ACTIONS(67),
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
    [sym_comment] = ACTIONS(11),
  },
  [7] = {
    [sym_body] = STATE(99),
    [sym_request_section] = STATE(46),
    [sym_basic_auth_section] = STATE(55),
    [sym_query_string_params_section] = STATE(55),
    [sym_form_params_section] = STATE(55),
    [sym_multipart_form_data_section] = STATE(55),
    [sym_cookies_section] = STATE(55),
    [sym_options_section] = STATE(55),
    [sym_bytes] = STATE(498),
    [sym_xml] = STATE(497),
    [sym_oneline_base64] = STATE(497),
    [sym_oneline_file] = STATE(497),
    [sym_oneline_hex] = STATE(497),
    [sym_oneline_string] = STATE(497),
    [sym_multiline_string] = STATE(497),
    [sym_json_value] = STATE(497),
    [sym_json_object] = STATE(495),
    [sym_json_array] = STATE(495),
    [sym_json_string] = STATE(495),
    [sym_json_number] = STATE(495),
    [sym_template] = STATE(495),
    [sym_boolean] = STATE(495),
    [sym_null] = STATE(495),
    [sym_integer] = STATE(231),
    [sym_digit] = STATE(212),
    [aux_sym_request_repeat2] = STATE(46),
    [aux_sym_integer_repeat1] = STATE(212),
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
    [anon_sym_HTTP_SLASH1_DOT0] = ACTIONS(71),
    [anon_sym_HTTP_SLASH1_DOT1] = ACTIONS(71),
    [anon_sym_HTTP_SLASH2] = ACTIONS(71),
    [anon_sym_HTTP_SLASH_STAR] = ACTIONS(71),
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
    [sym_comment] = ACTIONS(11),
  },
  [8] = {
    [sym_body] = STATE(100),
    [sym_request_section] = STATE(46),
    [sym_basic_auth_section] = STATE(55),
    [sym_query_string_params_section] = STATE(55),
    [sym_form_params_section] = STATE(55),
    [sym_multipart_form_data_section] = STATE(55),
    [sym_cookies_section] = STATE(55),
    [sym_options_section] = STATE(55),
    [sym_bytes] = STATE(498),
    [sym_xml] = STATE(497),
    [sym_oneline_base64] = STATE(497),
    [sym_oneline_file] = STATE(497),
    [sym_oneline_hex] = STATE(497),
    [sym_oneline_string] = STATE(497),
    [sym_multiline_string] = STATE(497),
    [sym_json_value] = STATE(497),
    [sym_json_object] = STATE(495),
    [sym_json_array] = STATE(495),
    [sym_json_string] = STATE(495),
    [sym_json_number] = STATE(495),
    [sym_template] = STATE(495),
    [sym_boolean] = STATE(495),
    [sym_null] = STATE(495),
    [sym_integer] = STATE(231),
    [sym_digit] = STATE(212),
    [aux_sym_request_repeat2] = STATE(46),
    [aux_sym_integer_repeat1] = STATE(212),
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
    [anon_sym_BQUOTE] = ACTIONS(45),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(47),
    [anon_sym_LBRACE] = ACTIONS(49),
    [anon_sym_LBRACK] = ACTIONS(51),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(53),
    [anon_sym_true] = ACTIONS(55),
    [anon_sym_false] = ACTIONS(55),
    [anon_sym_null] = ACTIONS(57),
    [aux_sym_digit_token1] = ACTIONS(59),
    [sym_comment] = ACTIONS(11),
  },
  [9] = {
    [sym_header] = STATE(49),
    [sym_body] = STATE(110),
    [sym_response_section] = STATE(19),
    [sym_captures_section] = STATE(63),
    [sym_asserts_section] = STATE(63),
    [sym_key_value] = STATE(488),
    [sym_bytes] = STATE(498),
    [sym_xml] = STATE(497),
    [sym_oneline_base64] = STATE(497),
    [sym_oneline_file] = STATE(497),
    [sym_oneline_hex] = STATE(497),
    [sym_key_string] = STATE(496),
    [sym_key_string_content] = STATE(145),
    [sym_key_string_escaped_char] = STATE(211),
    [sym_oneline_string] = STATE(497),
    [sym_multiline_string] = STATE(497),
    [sym_json_value] = STATE(497),
    [sym_json_object] = STATE(495),
    [sym_json_array] = STATE(495),
    [sym_json_string] = STATE(495),
    [sym_json_number] = STATE(495),
    [sym_template] = STATE(244),
    [sym_boolean] = STATE(495),
    [sym_null] = STATE(495),
    [sym_integer] = STATE(231),
    [sym_digit] = STATE(212),
    [aux_sym_request_repeat1] = STATE(49),
    [aux_sym_response_repeat1] = STATE(19),
    [aux_sym_key_string_repeat1] = STATE(145),
    [aux_sym_key_string_content_repeat1] = STATE(211),
    [aux_sym_integer_repeat1] = STATE(212),
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
    [anon_sym_LBRACKCaptures_RBRACK] = ACTIONS(77),
    [anon_sym_LBRACKAsserts_RBRACK] = ACTIONS(79),
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
    [sym_comment] = ACTIONS(11),
  },
  [10] = {
    [sym_header] = STATE(9),
    [sym_body] = STATE(108),
    [sym_response_section] = STATE(20),
    [sym_captures_section] = STATE(63),
    [sym_asserts_section] = STATE(63),
    [sym_key_value] = STATE(488),
    [sym_bytes] = STATE(498),
    [sym_xml] = STATE(497),
    [sym_oneline_base64] = STATE(497),
    [sym_oneline_file] = STATE(497),
    [sym_oneline_hex] = STATE(497),
    [sym_key_string] = STATE(496),
    [sym_key_string_content] = STATE(145),
    [sym_key_string_escaped_char] = STATE(211),
    [sym_oneline_string] = STATE(497),
    [sym_multiline_string] = STATE(497),
    [sym_json_value] = STATE(497),
    [sym_json_object] = STATE(495),
    [sym_json_array] = STATE(495),
    [sym_json_string] = STATE(495),
    [sym_json_number] = STATE(495),
    [sym_template] = STATE(244),
    [sym_boolean] = STATE(495),
    [sym_null] = STATE(495),
    [sym_integer] = STATE(231),
    [sym_digit] = STATE(212),
    [aux_sym_request_repeat1] = STATE(9),
    [aux_sym_response_repeat1] = STATE(20),
    [aux_sym_key_string_repeat1] = STATE(145),
    [aux_sym_key_string_content_repeat1] = STATE(211),
    [aux_sym_integer_repeat1] = STATE(212),
    [ts_builtin_sym_end] = ACTIONS(81),
    [anon_sym_LF] = ACTIONS(81),
    [anon_sym_GET] = ACTIONS(83),
    [anon_sym_HEAD] = ACTIONS(83),
    [anon_sym_POST] = ACTIONS(83),
    [anon_sym_PUT] = ACTIONS(83),
    [anon_sym_DELETE] = ACTIONS(83),
    [anon_sym_CONNECT] = ACTIONS(83),
    [anon_sym_OPTIONS] = ACTIONS(83),
    [anon_sym_TRACE] = ACTIONS(83),
    [anon_sym_PATCH] = ACTIONS(83),
    [anon_sym_LINK] = ACTIONS(83),
    [anon_sym_UNLINK] = ACTIONS(83),
    [anon_sym_PURGE] = ACTIONS(83),
    [anon_sym_LOCK] = ACTIONS(83),
    [anon_sym_UNLOCK] = ACTIONS(83),
    [anon_sym_PROPFIND] = ACTIONS(83),
    [anon_sym_VIEW] = ACTIONS(83),
    [anon_sym_LBRACKCaptures_RBRACK] = ACTIONS(77),
    [anon_sym_LBRACKAsserts_RBRACK] = ACTIONS(79),
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
    [sym_comment] = ACTIONS(11),
  },
  [11] = {
    [sym_option] = STATE(13),
    [sym_ca_certificate_option] = STATE(31),
    [sym_follow_redirect_option] = STATE(31),
    [sym_insecure_option] = STATE(31),
    [sym_max_redirs_option] = STATE(31),
    [sym_retry_option] = STATE(31),
    [sym_retry_interval_option] = STATE(31),
    [sym_retry_max_count_option] = STATE(31),
    [sym_variable_option] = STATE(31),
    [sym_verbose_option] = STATE(31),
    [sym_very_verbose_option] = STATE(31),
    [aux_sym_options_section_repeat1] = STATE(13),
    [ts_builtin_sym_end] = ACTIONS(85),
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
    [anon_sym_LBRACKOptions_RBRACK] = ACTIONS(87),
    [anon_sym_file_COMMA] = ACTIONS(87),
    [anon_sym_cacert] = ACTIONS(89),
    [anon_sym_location] = ACTIONS(91),
    [anon_sym_insecure] = ACTIONS(93),
    [anon_sym_max_DASHredirs] = ACTIONS(95),
    [anon_sym_retry] = ACTIONS(97),
    [anon_sym_retry_DASHinterval] = ACTIONS(99),
    [anon_sym_retry_DASHmax_DASHcount] = ACTIONS(101),
    [anon_sym_variable] = ACTIONS(103),
    [anon_sym_verbose] = ACTIONS(105),
    [anon_sym_very_DASHverbose] = ACTIONS(107),
    [anon_sym_LT] = ACTIONS(87),
    [anon_sym_base64_COMMA] = ACTIONS(87),
    [anon_sym_hex_COMMA] = ACTIONS(87),
    [anon_sym_DQUOTE] = ACTIONS(87),
    [anon_sym_BQUOTE] = ACTIONS(87),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(87),
    [anon_sym_LBRACE] = ACTIONS(87),
    [anon_sym_LBRACK] = ACTIONS(87),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(85),
    [anon_sym_true] = ACTIONS(87),
    [anon_sym_false] = ACTIONS(87),
    [anon_sym_null] = ACTIONS(87),
    [aux_sym_digit_token1] = ACTIONS(87),
    [sym_comment] = ACTIONS(11),
  },
  [12] = {
    [sym_option] = STATE(12),
    [sym_ca_certificate_option] = STATE(31),
    [sym_follow_redirect_option] = STATE(31),
    [sym_insecure_option] = STATE(31),
    [sym_max_redirs_option] = STATE(31),
    [sym_retry_option] = STATE(31),
    [sym_retry_interval_option] = STATE(31),
    [sym_retry_max_count_option] = STATE(31),
    [sym_variable_option] = STATE(31),
    [sym_verbose_option] = STATE(31),
    [sym_very_verbose_option] = STATE(31),
    [aux_sym_options_section_repeat1] = STATE(12),
    [ts_builtin_sym_end] = ACTIONS(109),
    [anon_sym_LF] = ACTIONS(109),
    [anon_sym_GET] = ACTIONS(111),
    [anon_sym_HEAD] = ACTIONS(111),
    [anon_sym_POST] = ACTIONS(111),
    [anon_sym_PUT] = ACTIONS(111),
    [anon_sym_DELETE] = ACTIONS(111),
    [anon_sym_CONNECT] = ACTIONS(111),
    [anon_sym_OPTIONS] = ACTIONS(111),
    [anon_sym_TRACE] = ACTIONS(111),
    [anon_sym_PATCH] = ACTIONS(111),
    [anon_sym_LINK] = ACTIONS(111),
    [anon_sym_UNLINK] = ACTIONS(111),
    [anon_sym_PURGE] = ACTIONS(111),
    [anon_sym_LOCK] = ACTIONS(111),
    [anon_sym_UNLOCK] = ACTIONS(111),
    [anon_sym_PROPFIND] = ACTIONS(111),
    [anon_sym_VIEW] = ACTIONS(111),
    [anon_sym_HTTP_SLASH1_DOT0] = ACTIONS(111),
    [anon_sym_HTTP_SLASH1_DOT1] = ACTIONS(111),
    [anon_sym_HTTP_SLASH2] = ACTIONS(111),
    [anon_sym_HTTP_SLASH_STAR] = ACTIONS(111),
    [anon_sym_LBRACKBasicAuth_RBRACK] = ACTIONS(111),
    [anon_sym_LBRACKQueryStringParams_RBRACK] = ACTIONS(111),
    [anon_sym_LBRACKFormParams_RBRACK] = ACTIONS(111),
    [anon_sym_LBRACKMultipartFormData_RBRACK] = ACTIONS(111),
    [anon_sym_LBRACKCookies_RBRACK] = ACTIONS(111),
    [anon_sym_LBRACKOptions_RBRACK] = ACTIONS(111),
    [anon_sym_file_COMMA] = ACTIONS(111),
    [anon_sym_cacert] = ACTIONS(113),
    [anon_sym_location] = ACTIONS(116),
    [anon_sym_insecure] = ACTIONS(119),
    [anon_sym_max_DASHredirs] = ACTIONS(122),
    [anon_sym_retry] = ACTIONS(125),
    [anon_sym_retry_DASHinterval] = ACTIONS(128),
    [anon_sym_retry_DASHmax_DASHcount] = ACTIONS(131),
    [anon_sym_variable] = ACTIONS(134),
    [anon_sym_verbose] = ACTIONS(137),
    [anon_sym_very_DASHverbose] = ACTIONS(140),
    [anon_sym_LT] = ACTIONS(111),
    [anon_sym_base64_COMMA] = ACTIONS(111),
    [anon_sym_hex_COMMA] = ACTIONS(111),
    [anon_sym_DQUOTE] = ACTIONS(111),
    [anon_sym_BQUOTE] = ACTIONS(111),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(111),
    [anon_sym_LBRACE] = ACTIONS(111),
    [anon_sym_LBRACK] = ACTIONS(111),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(109),
    [anon_sym_true] = ACTIONS(111),
    [anon_sym_false] = ACTIONS(111),
    [anon_sym_null] = ACTIONS(111),
    [aux_sym_digit_token1] = ACTIONS(111),
    [sym_comment] = ACTIONS(11),
  },
  [13] = {
    [sym_option] = STATE(12),
    [sym_ca_certificate_option] = STATE(31),
    [sym_follow_redirect_option] = STATE(31),
    [sym_insecure_option] = STATE(31),
    [sym_max_redirs_option] = STATE(31),
    [sym_retry_option] = STATE(31),
    [sym_retry_interval_option] = STATE(31),
    [sym_retry_max_count_option] = STATE(31),
    [sym_variable_option] = STATE(31),
    [sym_verbose_option] = STATE(31),
    [sym_very_verbose_option] = STATE(31),
    [aux_sym_options_section_repeat1] = STATE(12),
    [ts_builtin_sym_end] = ACTIONS(143),
    [anon_sym_LF] = ACTIONS(143),
    [anon_sym_GET] = ACTIONS(145),
    [anon_sym_HEAD] = ACTIONS(145),
    [anon_sym_POST] = ACTIONS(145),
    [anon_sym_PUT] = ACTIONS(145),
    [anon_sym_DELETE] = ACTIONS(145),
    [anon_sym_CONNECT] = ACTIONS(145),
    [anon_sym_OPTIONS] = ACTIONS(145),
    [anon_sym_TRACE] = ACTIONS(145),
    [anon_sym_PATCH] = ACTIONS(145),
    [anon_sym_LINK] = ACTIONS(145),
    [anon_sym_UNLINK] = ACTIONS(145),
    [anon_sym_PURGE] = ACTIONS(145),
    [anon_sym_LOCK] = ACTIONS(145),
    [anon_sym_UNLOCK] = ACTIONS(145),
    [anon_sym_PROPFIND] = ACTIONS(145),
    [anon_sym_VIEW] = ACTIONS(145),
    [anon_sym_HTTP_SLASH1_DOT0] = ACTIONS(145),
    [anon_sym_HTTP_SLASH1_DOT1] = ACTIONS(145),
    [anon_sym_HTTP_SLASH2] = ACTIONS(145),
    [anon_sym_HTTP_SLASH_STAR] = ACTIONS(145),
    [anon_sym_LBRACKBasicAuth_RBRACK] = ACTIONS(145),
    [anon_sym_LBRACKQueryStringParams_RBRACK] = ACTIONS(145),
    [anon_sym_LBRACKFormParams_RBRACK] = ACTIONS(145),
    [anon_sym_LBRACKMultipartFormData_RBRACK] = ACTIONS(145),
    [anon_sym_LBRACKCookies_RBRACK] = ACTIONS(145),
    [anon_sym_LBRACKOptions_RBRACK] = ACTIONS(145),
    [anon_sym_file_COMMA] = ACTIONS(145),
    [anon_sym_cacert] = ACTIONS(89),
    [anon_sym_location] = ACTIONS(91),
    [anon_sym_insecure] = ACTIONS(93),
    [anon_sym_max_DASHredirs] = ACTIONS(95),
    [anon_sym_retry] = ACTIONS(97),
    [anon_sym_retry_DASHinterval] = ACTIONS(99),
    [anon_sym_retry_DASHmax_DASHcount] = ACTIONS(101),
    [anon_sym_variable] = ACTIONS(103),
    [anon_sym_verbose] = ACTIONS(105),
    [anon_sym_very_DASHverbose] = ACTIONS(107),
    [anon_sym_LT] = ACTIONS(145),
    [anon_sym_base64_COMMA] = ACTIONS(145),
    [anon_sym_hex_COMMA] = ACTIONS(145),
    [anon_sym_DQUOTE] = ACTIONS(145),
    [anon_sym_BQUOTE] = ACTIONS(145),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(145),
    [anon_sym_LBRACE] = ACTIONS(145),
    [anon_sym_LBRACK] = ACTIONS(145),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(143),
    [anon_sym_true] = ACTIONS(145),
    [anon_sym_false] = ACTIONS(145),
    [anon_sym_null] = ACTIONS(145),
    [aux_sym_digit_token1] = ACTIONS(145),
    [sym_comment] = ACTIONS(11),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 19,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(151), 1,
      anon_sym_variable,
    ACTIONS(153), 1,
      anon_sym_status,
    ACTIONS(155), 1,
      anon_sym_url,
    ACTIONS(157), 1,
      anon_sym_header,
    ACTIONS(159), 1,
      anon_sym_cookie,
    ACTIONS(161), 1,
      anon_sym_body,
    ACTIONS(163), 1,
      anon_sym_xpath,
    ACTIONS(165), 1,
      anon_sym_jsonpath,
    ACTIONS(167), 1,
      anon_sym_regex,
    ACTIONS(169), 1,
      anon_sym_duration,
    ACTIONS(171), 1,
      anon_sym_sha256,
    ACTIONS(173), 1,
      anon_sym_md5,
    ACTIONS(175), 1,
      anon_sym_bytes,
    STATE(17), 1,
      sym_query,
    STATE(15), 2,
      sym_assert,
      aux_sym_asserts_section_repeat1,
    ACTIONS(147), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    STATE(87), 13,
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
    ACTIONS(149), 31,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
  [103] = 19,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(151), 1,
      anon_sym_variable,
    ACTIONS(153), 1,
      anon_sym_status,
    ACTIONS(155), 1,
      anon_sym_url,
    ACTIONS(157), 1,
      anon_sym_header,
    ACTIONS(159), 1,
      anon_sym_cookie,
    ACTIONS(161), 1,
      anon_sym_body,
    ACTIONS(163), 1,
      anon_sym_xpath,
    ACTIONS(165), 1,
      anon_sym_jsonpath,
    ACTIONS(167), 1,
      anon_sym_regex,
    ACTIONS(169), 1,
      anon_sym_duration,
    ACTIONS(171), 1,
      anon_sym_sha256,
    ACTIONS(173), 1,
      anon_sym_md5,
    ACTIONS(175), 1,
      anon_sym_bytes,
    STATE(17), 1,
      sym_query,
    STATE(16), 2,
      sym_assert,
      aux_sym_asserts_section_repeat1,
    ACTIONS(177), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    STATE(87), 13,
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
    ACTIONS(179), 31,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
  [206] = 19,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(185), 1,
      anon_sym_variable,
    ACTIONS(188), 1,
      anon_sym_status,
    ACTIONS(191), 1,
      anon_sym_url,
    ACTIONS(194), 1,
      anon_sym_header,
    ACTIONS(197), 1,
      anon_sym_cookie,
    ACTIONS(200), 1,
      anon_sym_body,
    ACTIONS(203), 1,
      anon_sym_xpath,
    ACTIONS(206), 1,
      anon_sym_jsonpath,
    ACTIONS(209), 1,
      anon_sym_regex,
    ACTIONS(212), 1,
      anon_sym_duration,
    ACTIONS(215), 1,
      anon_sym_sha256,
    ACTIONS(218), 1,
      anon_sym_md5,
    ACTIONS(221), 1,
      anon_sym_bytes,
    STATE(17), 1,
      sym_query,
    STATE(16), 2,
      sym_assert,
      aux_sym_asserts_section_repeat1,
    ACTIONS(181), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    STATE(87), 13,
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
    ACTIONS(183), 31,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
  [309] = 31,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 1,
      anon_sym_regex,
    ACTIONS(226), 1,
      anon_sym_not,
    ACTIONS(240), 1,
      anon_sym_startsWith,
    ACTIONS(242), 1,
      anon_sym_endsWith,
    ACTIONS(244), 1,
      anon_sym_contains,
    ACTIONS(246), 1,
      anon_sym_matches,
    ACTIONS(248), 1,
      anon_sym_exists,
    ACTIONS(250), 1,
      anon_sym_includes,
    ACTIONS(252), 1,
      anon_sym_isInteger,
    ACTIONS(254), 1,
      anon_sym_isFloat,
    ACTIONS(256), 1,
      anon_sym_isBoolean,
    ACTIONS(258), 1,
      anon_sym_isString,
    ACTIONS(260), 1,
      anon_sym_isCollection,
    ACTIONS(262), 1,
      anon_sym_count,
    ACTIONS(264), 1,
      anon_sym_urlEncode,
    ACTIONS(266), 1,
      anon_sym_urlDecode,
    ACTIONS(268), 1,
      anon_sym_htmlEscape,
    ACTIONS(270), 1,
      anon_sym_htmlUnescape,
    ACTIONS(272), 1,
      anon_sym_toInt,
    STATE(465), 1,
      sym_predicate,
    STATE(533), 1,
      sym_predicate_func,
    ACTIONS(228), 2,
      anon_sym_equals,
      anon_sym_EQ_EQ,
    ACTIONS(230), 2,
      anon_sym_notEquals,
      anon_sym_BANG_EQ,
    ACTIONS(232), 2,
      anon_sym_greaterThan,
      anon_sym_GT,
    ACTIONS(234), 2,
      anon_sym_greaterThanOrEquals,
      anon_sym_GT_EQ,
    ACTIONS(236), 2,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(238), 2,
      anon_sym_lessThanOrEquals,
      anon_sym_LT_EQ,
    STATE(18), 2,
      sym_filter,
      aux_sym_capture_repeat1,
    STATE(72), 7,
      sym_regex_filter,
      sym_count_filter,
      sym_url_encode_filter,
      sym_url_decode_filter,
      sym_html_encode_filter,
      sym_html_decode_filter,
      sym_to_int_filter,
    STATE(532), 17,
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
  [432] = 31,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 1,
      anon_sym_regex,
    ACTIONS(226), 1,
      anon_sym_not,
    ACTIONS(240), 1,
      anon_sym_startsWith,
    ACTIONS(242), 1,
      anon_sym_endsWith,
    ACTIONS(244), 1,
      anon_sym_contains,
    ACTIONS(246), 1,
      anon_sym_matches,
    ACTIONS(248), 1,
      anon_sym_exists,
    ACTIONS(250), 1,
      anon_sym_includes,
    ACTIONS(252), 1,
      anon_sym_isInteger,
    ACTIONS(254), 1,
      anon_sym_isFloat,
    ACTIONS(256), 1,
      anon_sym_isBoolean,
    ACTIONS(258), 1,
      anon_sym_isString,
    ACTIONS(260), 1,
      anon_sym_isCollection,
    ACTIONS(262), 1,
      anon_sym_count,
    ACTIONS(264), 1,
      anon_sym_urlEncode,
    ACTIONS(266), 1,
      anon_sym_urlDecode,
    ACTIONS(268), 1,
      anon_sym_htmlEscape,
    ACTIONS(270), 1,
      anon_sym_htmlUnescape,
    ACTIONS(272), 1,
      anon_sym_toInt,
    STATE(411), 1,
      sym_predicate,
    STATE(533), 1,
      sym_predicate_func,
    ACTIONS(228), 2,
      anon_sym_equals,
      anon_sym_EQ_EQ,
    ACTIONS(230), 2,
      anon_sym_notEquals,
      anon_sym_BANG_EQ,
    ACTIONS(232), 2,
      anon_sym_greaterThan,
      anon_sym_GT,
    ACTIONS(234), 2,
      anon_sym_greaterThanOrEquals,
      anon_sym_GT_EQ,
    ACTIONS(236), 2,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(238), 2,
      anon_sym_lessThanOrEquals,
      anon_sym_LT_EQ,
    STATE(58), 2,
      sym_filter,
      aux_sym_capture_repeat1,
    STATE(72), 7,
      sym_regex_filter,
      sym_count_filter,
      sym_url_encode_filter,
      sym_url_decode_filter,
      sym_html_encode_filter,
      sym_html_decode_filter,
      sym_to_int_filter,
    STATE(532), 17,
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
  [555] = 26,
    ACTIONS(11), 1,
      sym_comment,
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
    ACTIONS(77), 1,
      anon_sym_LBRACKCaptures_RBRACK,
    ACTIONS(79), 1,
      anon_sym_LBRACKAsserts_RBRACK,
    STATE(113), 1,
      sym_body,
    STATE(231), 1,
      sym_integer,
    STATE(498), 1,
      sym_bytes,
    ACTIONS(55), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(274), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(59), 2,
      sym_response_section,
      aux_sym_response_repeat1,
    STATE(63), 2,
      sym_captures_section,
      sym_asserts_section,
    STATE(212), 2,
      sym_digit,
      aux_sym_integer_repeat1,
    STATE(495), 7,
      sym_json_object,
      sym_json_array,
      sym_json_string,
      sym_json_number,
      sym_template,
      sym_boolean,
      sym_null,
    STATE(497), 7,
      sym_xml,
      sym_oneline_base64,
      sym_oneline_file,
      sym_oneline_hex,
      sym_oneline_string,
      sym_multiline_string,
      sym_json_value,
    ACTIONS(276), 16,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
  [666] = 26,
    ACTIONS(11), 1,
      sym_comment,
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
    ACTIONS(77), 1,
      anon_sym_LBRACKCaptures_RBRACK,
    ACTIONS(79), 1,
      anon_sym_LBRACKAsserts_RBRACK,
    STATE(110), 1,
      sym_body,
    STATE(231), 1,
      sym_integer,
    STATE(498), 1,
      sym_bytes,
    ACTIONS(55), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(73), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(59), 2,
      sym_response_section,
      aux_sym_response_repeat1,
    STATE(63), 2,
      sym_captures_section,
      sym_asserts_section,
    STATE(212), 2,
      sym_digit,
      aux_sym_integer_repeat1,
    STATE(495), 7,
      sym_json_object,
      sym_json_array,
      sym_json_string,
      sym_json_number,
      sym_template,
      sym_boolean,
      sym_null,
    STATE(497), 7,
      sym_xml,
      sym_oneline_base64,
      sym_oneline_file,
      sym_oneline_hex,
      sym_oneline_string,
      sym_multiline_string,
      sym_json_value,
    ACTIONS(75), 16,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
  [777] = 11,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(41), 1,
      sym_key_string_text,
    ACTIONS(43), 1,
      anon_sym_BSLASH2,
    ACTIONS(282), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(383), 1,
      sym_key_string,
    STATE(440), 1,
      sym_multipart_form_data_param,
    ACTIONS(278), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(211), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(408), 2,
      sym_key_value,
      sym_file_param,
    STATE(145), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
    ACTIONS(280), 39,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
  [854] = 11,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(288), 1,
      sym_key_string_text,
    ACTIONS(291), 1,
      anon_sym_BSLASH2,
    ACTIONS(294), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(496), 1,
      sym_key_string,
    STATE(499), 1,
      sym_key_value,
    ACTIONS(284), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(22), 2,
      sym_header,
      aux_sym_request_repeat1,
    STATE(211), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(145), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
    ACTIONS(286), 39,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
  [931] = 11,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(41), 1,
      sym_key_string_text,
    ACTIONS(43), 1,
      anon_sym_BSLASH2,
    ACTIONS(282), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(383), 1,
      sym_key_string,
    STATE(440), 1,
      sym_multipart_form_data_param,
    ACTIONS(297), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(211), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(408), 2,
      sym_key_value,
      sym_file_param,
    STATE(145), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
    ACTIONS(299), 39,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
  [1008] = 11,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(41), 1,
      sym_key_string_text,
    ACTIONS(43), 1,
      anon_sym_BSLASH2,
    ACTIONS(282), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(383), 1,
      sym_key_string,
    STATE(440), 1,
      sym_multipart_form_data_param,
    ACTIONS(301), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(211), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(408), 2,
      sym_key_value,
      sym_file_param,
    STATE(145), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
    ACTIONS(303), 39,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
  [1085] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(305), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(307), 49,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
  [1145] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(309), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(311), 49,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
  [1205] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(313), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(315), 49,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
  [1265] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(317), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(319), 49,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
  [1325] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(321), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(323), 49,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
  [1385] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(325), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(327), 49,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
  [1445] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(329), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(331), 49,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
  [1505] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(333), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(335), 49,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
  [1565] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(337), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(339), 49,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
  [1625] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(341), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(343), 49,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
  [1685] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(345), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(347), 49,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
  [1745] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(349), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(351), 49,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
  [1805] = 10,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(41), 1,
      sym_key_string_text,
    ACTIONS(43), 1,
      anon_sym_BSLASH2,
    ACTIONS(282), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(441), 1,
      sym_key_value,
    STATE(496), 1,
      sym_key_string,
    ACTIONS(353), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(211), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(145), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
    ACTIONS(355), 39,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
  [1878] = 10,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(41), 1,
      sym_key_string_text,
    ACTIONS(43), 1,
      anon_sym_BSLASH2,
    ACTIONS(282), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(441), 1,
      sym_key_value,
    STATE(496), 1,
      sym_key_string,
    ACTIONS(357), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(211), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(145), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
    ACTIONS(359), 39,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
  [1951] = 10,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(41), 1,
      sym_key_string_text,
    ACTIONS(43), 1,
      anon_sym_BSLASH2,
    ACTIONS(282), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(441), 1,
      sym_key_value,
    STATE(496), 1,
      sym_key_string,
    ACTIONS(361), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(211), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(145), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
    ACTIONS(363), 39,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
  [2024] = 10,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(41), 1,
      sym_key_string_text,
    ACTIONS(43), 1,
      anon_sym_BSLASH2,
    ACTIONS(282), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(441), 1,
      sym_key_value,
    STATE(496), 1,
      sym_key_string,
    ACTIONS(365), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(211), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(145), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
    ACTIONS(367), 39,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
  [2097] = 10,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(41), 1,
      sym_key_string_text,
    ACTIONS(43), 1,
      anon_sym_BSLASH2,
    ACTIONS(282), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(441), 1,
      sym_key_value,
    STATE(496), 1,
      sym_key_string,
    ACTIONS(369), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(211), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(145), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
    ACTIONS(371), 39,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
  [2170] = 10,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(41), 1,
      sym_key_string_text,
    ACTIONS(43), 1,
      anon_sym_BSLASH2,
    ACTIONS(282), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(441), 1,
      sym_key_value,
    STATE(496), 1,
      sym_key_string,
    ACTIONS(373), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(211), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(145), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
    ACTIONS(375), 39,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
  [2243] = 10,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(41), 1,
      sym_key_string_text,
    ACTIONS(43), 1,
      anon_sym_BSLASH2,
    ACTIONS(282), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(441), 1,
      sym_key_value,
    STATE(496), 1,
      sym_key_string,
    ACTIONS(377), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(211), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(145), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
    ACTIONS(379), 39,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
  [2316] = 10,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(41), 1,
      sym_key_string_text,
    ACTIONS(43), 1,
      anon_sym_BSLASH2,
    ACTIONS(282), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(441), 1,
      sym_key_value,
    STATE(496), 1,
      sym_key_string,
    ACTIONS(381), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(211), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(145), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
    ACTIONS(383), 39,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
  [2389] = 10,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(41), 1,
      sym_key_string_text,
    ACTIONS(43), 1,
      anon_sym_BSLASH2,
    ACTIONS(282), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(441), 1,
      sym_key_value,
    STATE(496), 1,
      sym_key_string,
    ACTIONS(385), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(211), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(145), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
    ACTIONS(387), 39,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
  [2462] = 11,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(393), 1,
      anon_sym_LBRACKBasicAuth_RBRACK,
    ACTIONS(396), 1,
      anon_sym_LBRACKQueryStringParams_RBRACK,
    ACTIONS(399), 1,
      anon_sym_LBRACKFormParams_RBRACK,
    ACTIONS(402), 1,
      anon_sym_LBRACKMultipartFormData_RBRACK,
    ACTIONS(405), 1,
      anon_sym_LBRACKCookies_RBRACK,
    ACTIONS(408), 1,
      anon_sym_LBRACKOptions_RBRACK,
    STATE(46), 2,
      sym_request_section,
      aux_sym_request_repeat2,
    ACTIONS(389), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    STATE(55), 6,
      sym_basic_auth_section,
      sym_query_string_params_section,
      sym_form_params_section,
      sym_multipart_form_data_section,
      sym_cookies_section,
      sym_options_section,
    ACTIONS(391), 33,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
  [2536] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(411), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(413), 44,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
  [2591] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(415), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(417), 44,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
  [2646] = 11,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(288), 1,
      sym_key_string_text,
    ACTIONS(291), 1,
      anon_sym_BSLASH2,
    ACTIONS(294), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(488), 1,
      sym_key_value,
    STATE(496), 1,
      sym_key_string,
    ACTIONS(284), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(49), 2,
      sym_header,
      aux_sym_request_repeat1,
    STATE(211), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(145), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
    ACTIONS(286), 31,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
  [2715] = 5,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(421), 1,
      anon_sym_LF,
    STATE(50), 1,
      aux_sym_hurl_file_repeat2,
    ACTIONS(419), 3,
      ts_builtin_sym_end,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(424), 40,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
  [2772] = 10,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(430), 1,
      sym_key_string_text,
    ACTIONS(432), 1,
      anon_sym_BSLASH2,
    ACTIONS(434), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(435), 1,
      sym_key_string,
    ACTIONS(426), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(52), 2,
      sym_capture,
      aux_sym_captures_section_repeat1,
    STATE(230), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(151), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
    ACTIONS(428), 31,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
  [2838] = 10,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(430), 1,
      sym_key_string_text,
    ACTIONS(432), 1,
      anon_sym_BSLASH2,
    ACTIONS(434), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(435), 1,
      sym_key_string,
    ACTIONS(436), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(53), 2,
      sym_capture,
      aux_sym_captures_section_repeat1,
    STATE(230), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(151), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
    ACTIONS(438), 31,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
  [2904] = 10,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(444), 1,
      sym_key_string_text,
    ACTIONS(447), 1,
      anon_sym_BSLASH2,
    ACTIONS(450), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(435), 1,
      sym_key_string,
    ACTIONS(440), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(53), 2,
      sym_capture,
      aux_sym_captures_section_repeat1,
    STATE(230), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(151), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
    ACTIONS(442), 31,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
  [2970] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(453), 4,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(455), 40,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
  [3022] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(457), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(459), 39,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
  [3072] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(461), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(463), 39,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
  [3122] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(240), 1,
      anon_sym_startsWith,
    ACTIONS(242), 1,
      anon_sym_endsWith,
    ACTIONS(244), 1,
      anon_sym_contains,
    ACTIONS(246), 1,
      anon_sym_matches,
    ACTIONS(248), 1,
      anon_sym_exists,
    ACTIONS(250), 1,
      anon_sym_includes,
    ACTIONS(252), 1,
      anon_sym_isInteger,
    ACTIONS(254), 1,
      anon_sym_isFloat,
    ACTIONS(256), 1,
      anon_sym_isBoolean,
    ACTIONS(258), 1,
      anon_sym_isString,
    ACTIONS(260), 1,
      anon_sym_isCollection,
    STATE(504), 1,
      sym_predicate_func,
    ACTIONS(228), 2,
      anon_sym_equals,
      anon_sym_EQ_EQ,
    ACTIONS(230), 2,
      anon_sym_notEquals,
      anon_sym_BANG_EQ,
    ACTIONS(232), 2,
      anon_sym_greaterThan,
      anon_sym_GT,
    ACTIONS(234), 2,
      anon_sym_greaterThanOrEquals,
      anon_sym_GT_EQ,
    ACTIONS(236), 2,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(238), 2,
      anon_sym_lessThanOrEquals,
      anon_sym_LT_EQ,
    STATE(532), 17,
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
  [3205] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(465), 1,
      anon_sym_regex,
    ACTIONS(472), 1,
      anon_sym_count,
    ACTIONS(475), 1,
      anon_sym_urlEncode,
    ACTIONS(478), 1,
      anon_sym_urlDecode,
    ACTIONS(481), 1,
      anon_sym_htmlEscape,
    ACTIONS(484), 1,
      anon_sym_htmlUnescape,
    ACTIONS(487), 1,
      anon_sym_toInt,
    STATE(58), 2,
      sym_filter,
      aux_sym_capture_repeat1,
    ACTIONS(468), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    STATE(72), 7,
      sym_regex_filter,
      sym_count_filter,
      sym_url_encode_filter,
      sym_url_decode_filter,
      sym_html_encode_filter,
      sym_html_decode_filter,
      sym_to_int_filter,
    ACTIONS(470), 20,
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
  [3272] = 7,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(494), 1,
      anon_sym_LBRACKCaptures_RBRACK,
    ACTIONS(497), 1,
      anon_sym_LBRACKAsserts_RBRACK,
    STATE(59), 2,
      sym_response_section,
      aux_sym_response_repeat1,
    STATE(63), 2,
      sym_captures_section,
      sym_asserts_section,
    ACTIONS(490), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(492), 29,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
  [3326] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(500), 4,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(502), 32,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
  [3370] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(453), 4,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(455), 32,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
  [3414] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(504), 4,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(506), 32,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
  [3458] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(508), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(510), 31,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
  [3500] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(514), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(512), 27,
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
  [3540] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(518), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(516), 27,
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
  [3580] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(522), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(520), 27,
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
  [3620] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(526), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(524), 27,
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
  [3660] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(530), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(528), 27,
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
  [3700] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(534), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(532), 27,
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
  [3740] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(538), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(536), 27,
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
  [3780] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(542), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(540), 27,
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
  [3820] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(546), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(544), 27,
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
  [3860] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(550), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(548), 27,
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
  [3900] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(554), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(552), 27,
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
  [3940] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(558), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(556), 27,
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
  [3980] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(562), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(560), 26,
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
  [4019] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(566), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(564), 26,
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
  [4058] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(570), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(568), 26,
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
  [4097] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(574), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(572), 26,
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
  [4136] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(578), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(576), 26,
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
  [4175] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(582), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(580), 26,
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
  [4214] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(586), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(584), 26,
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
  [4253] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(590), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(588), 26,
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
  [4292] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(594), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(592), 26,
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
  [4331] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(598), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(596), 26,
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
  [4370] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(602), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(600), 26,
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
  [4409] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(606), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(604), 26,
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
  [4448] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(610), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(608), 26,
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
  [4487] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(614), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(612), 26,
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
  [4526] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(616), 1,
      anon_sym_variable,
    ACTIONS(618), 1,
      anon_sym_status,
    ACTIONS(620), 1,
      anon_sym_url,
    ACTIONS(622), 1,
      anon_sym_header,
    ACTIONS(624), 1,
      anon_sym_cookie,
    ACTIONS(626), 1,
      anon_sym_body,
    ACTIONS(628), 1,
      anon_sym_xpath,
    ACTIONS(630), 1,
      anon_sym_jsonpath,
    ACTIONS(632), 1,
      anon_sym_regex,
    ACTIONS(634), 1,
      anon_sym_duration,
    ACTIONS(636), 1,
      anon_sym_sha256,
    ACTIONS(638), 1,
      anon_sym_md5,
    ACTIONS(640), 1,
      anon_sym_bytes,
    STATE(114), 1,
      sym_query,
    STATE(185), 13,
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
  [4587] = 7,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(642), 1,
      ts_builtin_sym_end,
    ACTIONS(644), 1,
      anon_sym_LF,
    STATE(111), 1,
      sym_response,
    STATE(363), 1,
      sym_version,
    ACTIONS(648), 4,
      anon_sym_HTTP_SLASH1_DOT0,
      anon_sym_HTTP_SLASH1_DOT1,
      anon_sym_HTTP_SLASH2,
      anon_sym_HTTP_SLASH_STAR,
    ACTIONS(646), 16,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
  [4627] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(650), 1,
      anon_sym_file_COMMA,
    ACTIONS(652), 1,
      anon_sym_base64_COMMA,
    ACTIONS(654), 1,
      anon_sym_hex_COMMA,
    ACTIONS(656), 1,
      anon_sym_DQUOTE,
    ACTIONS(658), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(662), 1,
      anon_sym_null,
    ACTIONS(664), 1,
      aux_sym_digit_token1,
    STATE(347), 1,
      sym_integer,
    STATE(474), 1,
      sym_predicate_value,
    ACTIONS(660), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(212), 2,
      sym_digit,
      aux_sym_integer_repeat1,
    STATE(502), 9,
      sym_oneline_base64,
      sym_oneline_file,
      sym_oneline_hex,
      sym_quoted_string,
      sym_multiline_string,
      sym_template,
      sym_boolean,
      sym_null,
      sym_float,
  [4680] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(650), 1,
      anon_sym_file_COMMA,
    ACTIONS(652), 1,
      anon_sym_base64_COMMA,
    ACTIONS(654), 1,
      anon_sym_hex_COMMA,
    ACTIONS(656), 1,
      anon_sym_DQUOTE,
    ACTIONS(658), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(662), 1,
      anon_sym_null,
    ACTIONS(664), 1,
      aux_sym_digit_token1,
    STATE(347), 1,
      sym_integer,
    STATE(409), 1,
      sym_predicate_value,
    ACTIONS(660), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(212), 2,
      sym_digit,
      aux_sym_integer_repeat1,
    STATE(502), 9,
      sym_oneline_base64,
      sym_oneline_file,
      sym_oneline_hex,
      sym_quoted_string,
      sym_multiline_string,
      sym_template,
      sym_boolean,
      sym_null,
      sym_float,
  [4733] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(650), 1,
      anon_sym_file_COMMA,
    ACTIONS(652), 1,
      anon_sym_base64_COMMA,
    ACTIONS(654), 1,
      anon_sym_hex_COMMA,
    ACTIONS(656), 1,
      anon_sym_DQUOTE,
    ACTIONS(658), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(662), 1,
      anon_sym_null,
    ACTIONS(664), 1,
      aux_sym_digit_token1,
    STATE(347), 1,
      sym_integer,
    STATE(503), 1,
      sym_predicate_value,
    ACTIONS(660), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(212), 2,
      sym_digit,
      aux_sym_integer_repeat1,
    STATE(502), 9,
      sym_oneline_base64,
      sym_oneline_file,
      sym_oneline_hex,
      sym_quoted_string,
      sym_multiline_string,
      sym_template,
      sym_boolean,
      sym_null,
      sym_float,
  [4786] = 8,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(666), 1,
      ts_builtin_sym_end,
    ACTIONS(668), 1,
      anon_sym_LF,
    STATE(91), 1,
      sym_request,
    STATE(120), 1,
      sym_method,
    STATE(360), 1,
      aux_sym_hurl_file_repeat2,
    STATE(103), 2,
      sym_entry,
      aux_sym_hurl_file_repeat1,
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
  [4827] = 14,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(57), 1,
      anon_sym_null,
    ACTIONS(59), 1,
      aux_sym_digit_token1,
    ACTIONS(670), 1,
      anon_sym_LF,
    ACTIONS(672), 1,
      anon_sym_BSLASH,
    ACTIONS(674), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(676), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(251), 1,
      aux_sym_value_string_text_repeat1,
    STATE(302), 1,
      sym_integer,
    ACTIONS(55), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(212), 2,
      sym_digit,
      aux_sym_integer_repeat1,
    STATE(126), 3,
      sym_value_string_content,
      sym_template,
      aux_sym_value_string_repeat1,
    STATE(171), 3,
      sym_value_string_text,
      sym_value_string_escaped_char,
      aux_sym_value_string_content_repeat1,
    STATE(445), 4,
      sym_value_string,
      sym_boolean,
      sym_null,
      sym_float,
  [4879] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(13), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(17), 20,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
  [4909] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(678), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(680), 20,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
  [4939] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(682), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(684), 20,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
  [4969] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(65), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(67), 20,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
  [4999] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(57), 1,
      anon_sym_null,
    ACTIONS(59), 1,
      aux_sym_digit_token1,
    ACTIONS(656), 1,
      anon_sym_DQUOTE,
    ACTIONS(686), 1,
      sym_key_string_text,
    ACTIONS(688), 1,
      anon_sym_BSLASH2,
    STATE(344), 1,
      sym_integer,
    STATE(415), 1,
      sym_variable_value,
    ACTIONS(55), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(212), 2,
      sym_digit,
      aux_sym_integer_repeat1,
    STATE(228), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(147), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
    STATE(416), 5,
      sym_quoted_string,
      sym_key_string,
      sym_boolean,
      sym_null,
      sym_float,
  [5051] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(69), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(71), 20,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
  [5081] = 6,
    ACTIONS(11), 1,
      sym_comment,
    STATE(91), 1,
      sym_request,
    STATE(120), 1,
      sym_method,
    ACTIONS(690), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(103), 2,
      sym_entry,
      aux_sym_hurl_file_repeat1,
    ACTIONS(692), 16,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
  [5117] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(695), 1,
      anon_sym_DQUOTE,
    ACTIONS(697), 1,
      anon_sym_LBRACE,
    ACTIONS(699), 1,
      anon_sym_LBRACK,
    ACTIONS(701), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(705), 1,
      anon_sym_null,
    ACTIONS(707), 1,
      aux_sym_digit_token1,
    STATE(181), 1,
      sym_integer,
    STATE(330), 1,
      sym_json_value,
    ACTIONS(703), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(160), 2,
      sym_digit,
      aux_sym_integer_repeat1,
    STATE(314), 7,
      sym_json_object,
      sym_json_array,
      sym_json_string,
      sym_json_number,
      sym_template,
      sym_boolean,
      sym_null,
  [5162] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(695), 1,
      anon_sym_DQUOTE,
    ACTIONS(697), 1,
      anon_sym_LBRACE,
    ACTIONS(699), 1,
      anon_sym_LBRACK,
    ACTIONS(701), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(705), 1,
      anon_sym_null,
    ACTIONS(707), 1,
      aux_sym_digit_token1,
    STATE(181), 1,
      sym_integer,
    STATE(306), 1,
      sym_json_value,
    ACTIONS(703), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(160), 2,
      sym_digit,
      aux_sym_integer_repeat1,
    STATE(314), 7,
      sym_json_object,
      sym_json_array,
      sym_json_string,
      sym_json_number,
      sym_template,
      sym_boolean,
      sym_null,
  [5207] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(695), 1,
      anon_sym_DQUOTE,
    ACTIONS(697), 1,
      anon_sym_LBRACE,
    ACTIONS(699), 1,
      anon_sym_LBRACK,
    ACTIONS(701), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(705), 1,
      anon_sym_null,
    ACTIONS(707), 1,
      aux_sym_digit_token1,
    STATE(181), 1,
      sym_integer,
    STATE(406), 1,
      sym_json_value,
    ACTIONS(703), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(160), 2,
      sym_digit,
      aux_sym_integer_repeat1,
    STATE(314), 7,
      sym_json_object,
      sym_json_array,
      sym_json_string,
      sym_json_number,
      sym_template,
      sym_boolean,
      sym_null,
  [5252] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(695), 1,
      anon_sym_DQUOTE,
    ACTIONS(697), 1,
      anon_sym_LBRACE,
    ACTIONS(699), 1,
      anon_sym_LBRACK,
    ACTIONS(701), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(705), 1,
      anon_sym_null,
    ACTIONS(707), 1,
      aux_sym_digit_token1,
    STATE(181), 1,
      sym_integer,
    STATE(367), 1,
      sym_json_value,
    ACTIONS(703), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(160), 2,
      sym_digit,
      aux_sym_integer_repeat1,
    STATE(314), 7,
      sym_json_object,
      sym_json_array,
      sym_json_string,
      sym_json_number,
      sym_template,
      sym_boolean,
      sym_null,
  [5297] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(73), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(75), 16,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
  [5323] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(709), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
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
  [5349] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(274), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(276), 16,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
  [5375] = 4,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(713), 1,
      ts_builtin_sym_end,
    ACTIONS(715), 1,
      anon_sym_LF,
    ACTIONS(717), 16,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
  [5403] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(713), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(717), 16,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
  [5429] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(719), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(721), 16,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
  [5455] = 11,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(723), 1,
      anon_sym_LF,
    ACTIONS(725), 1,
      anon_sym_regex,
    ACTIONS(727), 1,
      anon_sym_count,
    ACTIONS(729), 1,
      anon_sym_urlEncode,
    ACTIONS(731), 1,
      anon_sym_urlDecode,
    ACTIONS(733), 1,
      anon_sym_htmlEscape,
    ACTIONS(735), 1,
      anon_sym_htmlUnescape,
    ACTIONS(737), 1,
      anon_sym_toInt,
    STATE(116), 2,
      sym_filter,
      aux_sym_capture_repeat1,
    STATE(180), 7,
      sym_regex_filter,
      sym_count_filter,
      sym_url_encode_filter,
      sym_url_decode_filter,
      sym_html_encode_filter,
      sym_html_decode_filter,
      sym_to_int_filter,
  [5496] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 1,
      anon_sym_regex,
    ACTIONS(262), 1,
      anon_sym_count,
    ACTIONS(264), 1,
      anon_sym_urlEncode,
    ACTIONS(266), 1,
      anon_sym_urlDecode,
    ACTIONS(268), 1,
      anon_sym_htmlEscape,
    ACTIONS(270), 1,
      anon_sym_htmlUnescape,
    ACTIONS(272), 1,
      anon_sym_toInt,
    ACTIONS(739), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(117), 2,
      sym_filter,
      aux_sym_capture_repeat1,
    STATE(72), 7,
      sym_regex_filter,
      sym_count_filter,
      sym_url_encode_filter,
      sym_url_decode_filter,
      sym_html_encode_filter,
      sym_html_decode_filter,
      sym_to_int_filter,
  [5537] = 11,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(725), 1,
      anon_sym_regex,
    ACTIONS(727), 1,
      anon_sym_count,
    ACTIONS(729), 1,
      anon_sym_urlEncode,
    ACTIONS(731), 1,
      anon_sym_urlDecode,
    ACTIONS(733), 1,
      anon_sym_htmlEscape,
    ACTIONS(735), 1,
      anon_sym_htmlUnescape,
    ACTIONS(737), 1,
      anon_sym_toInt,
    ACTIONS(741), 1,
      anon_sym_LF,
    STATE(118), 2,
      sym_filter,
      aux_sym_capture_repeat1,
    STATE(180), 7,
      sym_regex_filter,
      sym_count_filter,
      sym_url_encode_filter,
      sym_url_decode_filter,
      sym_html_encode_filter,
      sym_html_decode_filter,
      sym_to_int_filter,
  [5578] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 1,
      anon_sym_regex,
    ACTIONS(262), 1,
      anon_sym_count,
    ACTIONS(264), 1,
      anon_sym_urlEncode,
    ACTIONS(266), 1,
      anon_sym_urlDecode,
    ACTIONS(268), 1,
      anon_sym_htmlEscape,
    ACTIONS(270), 1,
      anon_sym_htmlUnescape,
    ACTIONS(272), 1,
      anon_sym_toInt,
    ACTIONS(743), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(58), 2,
      sym_filter,
      aux_sym_capture_repeat1,
    STATE(72), 7,
      sym_regex_filter,
      sym_count_filter,
      sym_url_encode_filter,
      sym_url_decode_filter,
      sym_html_encode_filter,
      sym_html_decode_filter,
      sym_to_int_filter,
  [5619] = 11,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(470), 1,
      anon_sym_LF,
    ACTIONS(745), 1,
      anon_sym_regex,
    ACTIONS(748), 1,
      anon_sym_count,
    ACTIONS(751), 1,
      anon_sym_urlEncode,
    ACTIONS(754), 1,
      anon_sym_urlDecode,
    ACTIONS(757), 1,
      anon_sym_htmlEscape,
    ACTIONS(760), 1,
      anon_sym_htmlUnescape,
    ACTIONS(763), 1,
      anon_sym_toInt,
    STATE(118), 2,
      sym_filter,
      aux_sym_capture_repeat1,
    STATE(180), 7,
      sym_regex_filter,
      sym_count_filter,
      sym_url_encode_filter,
      sym_url_decode_filter,
      sym_html_encode_filter,
      sym_html_decode_filter,
      sym_to_int_filter,
  [5660] = 11,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(43), 1,
      anon_sym_BSLASH2,
    ACTIONS(282), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(766), 1,
      anon_sym_LF,
    ACTIONS(768), 1,
      sym_key_string_text,
    STATE(382), 1,
      sym_multipart_form_data_param,
    STATE(383), 1,
      sym_key_string,
    STATE(384), 1,
      aux_sym_multipart_form_data_section_repeat1,
    STATE(211), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(408), 2,
      sym_key_value,
      sym_file_param,
    STATE(145), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
  [5698] = 10,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(672), 1,
      anon_sym_BSLASH,
    ACTIONS(674), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(676), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(770), 1,
      anon_sym_LF,
    STATE(3), 1,
      aux_sym_hurl_file_repeat2,
    STATE(251), 1,
      aux_sym_value_string_text_repeat1,
    STATE(370), 1,
      sym_value_string,
    STATE(126), 3,
      sym_value_string_content,
      sym_template,
      aux_sym_value_string_repeat1,
    STATE(171), 3,
      sym_value_string_text,
      sym_value_string_escaped_char,
      aux_sym_value_string_content_repeat1,
  [5733] = 10,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(43), 1,
      anon_sym_BSLASH2,
    ACTIONS(282), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(768), 1,
      sym_key_string_text,
    ACTIONS(772), 1,
      anon_sym_LF,
    STATE(385), 1,
      sym_key_value,
    STATE(386), 1,
      aux_sym_query_string_params_section_repeat1,
    STATE(496), 1,
      sym_key_string,
    STATE(211), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(145), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
  [5767] = 10,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(43), 1,
      anon_sym_BSLASH2,
    ACTIONS(282), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(768), 1,
      sym_key_string_text,
    ACTIONS(774), 1,
      anon_sym_LF,
    STATE(380), 1,
      sym_key_value,
    STATE(381), 1,
      aux_sym_query_string_params_section_repeat1,
    STATE(496), 1,
      sym_key_string,
    STATE(211), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(145), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
  [5801] = 10,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(43), 1,
      anon_sym_BSLASH2,
    ACTIONS(282), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(768), 1,
      sym_key_string_text,
    ACTIONS(776), 1,
      anon_sym_LF,
    STATE(378), 1,
      sym_key_value,
    STATE(379), 1,
      aux_sym_query_string_params_section_repeat1,
    STATE(496), 1,
      sym_key_string,
    STATE(211), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(145), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
  [5835] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(43), 1,
      anon_sym_BSLASH2,
    ACTIONS(282), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(768), 1,
      sym_key_string_text,
    STATE(383), 1,
      sym_key_string,
    STATE(440), 1,
      sym_multipart_form_data_param,
    STATE(211), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(408), 2,
      sym_key_value,
      sym_file_param,
    STATE(145), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
  [5867] = 7,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(778), 1,
      anon_sym_DQUOTE,
    ACTIONS(780), 1,
      aux_sym_quoted_string_text_token1,
    ACTIONS(782), 1,
      anon_sym_BSLASH,
    ACTIONS(784), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(130), 3,
      sym_quoted_string_content,
      sym_template,
      aux_sym_quoted_string_repeat1,
    STATE(176), 4,
      sym_quoted_string_text,
      sym_invalid_quoted_string_escaped_char,
      sym_quoted_string_escaped_char,
      aux_sym_quoted_string_content_repeat1,
  [5894] = 8,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(672), 1,
      anon_sym_BSLASH,
    ACTIONS(674), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(676), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(786), 1,
      anon_sym_LF,
    STATE(251), 1,
      aux_sym_value_string_text_repeat1,
    STATE(134), 3,
      sym_value_string_content,
      sym_template,
      aux_sym_value_string_repeat1,
    STATE(171), 3,
      sym_value_string_text,
      sym_value_string_escaped_char,
      aux_sym_value_string_content_repeat1,
  [5923] = 8,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(788), 1,
      anon_sym_LF,
    ACTIONS(790), 1,
      anon_sym_BSLASH,
    ACTIONS(792), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(794), 1,
      aux_sym_multiline_string_text_token1,
    ACTIONS(796), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(132), 3,
      sym_multiline_string_content,
      sym_template,
      aux_sym_multiline_string_repeat1,
    STATE(196), 3,
      sym_multiline_string_text,
      sym_multiline_string_escaped_char,
      aux_sym_multiline_string_content_repeat1,
  [5952] = 7,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(780), 1,
      aux_sym_quoted_string_text_token1,
    ACTIONS(782), 1,
      anon_sym_BSLASH,
    ACTIONS(784), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(798), 1,
      anon_sym_DQUOTE,
    STATE(131), 3,
      sym_quoted_string_content,
      sym_template,
      aux_sym_quoted_string_repeat1,
    STATE(176), 4,
      sym_quoted_string_text,
      sym_invalid_quoted_string_escaped_char,
      sym_quoted_string_escaped_char,
      aux_sym_quoted_string_content_repeat1,
  [5979] = 8,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(788), 1,
      anon_sym_LF,
    ACTIONS(790), 1,
      anon_sym_BSLASH,
    ACTIONS(792), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(794), 1,
      aux_sym_multiline_string_text_token1,
    ACTIONS(796), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(135), 3,
      sym_multiline_string_content,
      sym_template,
      aux_sym_multiline_string_repeat1,
    STATE(196), 3,
      sym_multiline_string_text,
      sym_multiline_string_escaped_char,
      aux_sym_multiline_string_content_repeat1,
  [6008] = 7,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(800), 1,
      anon_sym_DQUOTE,
    ACTIONS(802), 1,
      aux_sym_quoted_string_text_token1,
    ACTIONS(805), 1,
      anon_sym_BSLASH,
    ACTIONS(808), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(130), 3,
      sym_quoted_string_content,
      sym_template,
      aux_sym_quoted_string_repeat1,
    STATE(176), 4,
      sym_quoted_string_text,
      sym_invalid_quoted_string_escaped_char,
      sym_quoted_string_escaped_char,
      aux_sym_quoted_string_content_repeat1,
  [6035] = 7,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(780), 1,
      aux_sym_quoted_string_text_token1,
    ACTIONS(782), 1,
      anon_sym_BSLASH,
    ACTIONS(784), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(811), 1,
      anon_sym_DQUOTE,
    STATE(130), 3,
      sym_quoted_string_content,
      sym_template,
      aux_sym_quoted_string_repeat1,
    STATE(176), 4,
      sym_quoted_string_text,
      sym_invalid_quoted_string_escaped_char,
      sym_quoted_string_escaped_char,
      aux_sym_quoted_string_content_repeat1,
  [6062] = 8,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(790), 1,
      anon_sym_BSLASH,
    ACTIONS(794), 1,
      aux_sym_multiline_string_text_token1,
    ACTIONS(796), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(813), 1,
      anon_sym_LF,
    ACTIONS(815), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(135), 3,
      sym_multiline_string_content,
      sym_template,
      aux_sym_multiline_string_repeat1,
    STATE(196), 3,
      sym_multiline_string_text,
      sym_multiline_string_escaped_char,
      aux_sym_multiline_string_content_repeat1,
  [6091] = 8,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(790), 1,
      anon_sym_BSLASH,
    ACTIONS(794), 1,
      aux_sym_multiline_string_text_token1,
    ACTIONS(796), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(817), 1,
      anon_sym_LF,
    ACTIONS(819), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(129), 3,
      sym_multiline_string_content,
      sym_template,
      aux_sym_multiline_string_repeat1,
    STATE(196), 3,
      sym_multiline_string_text,
      sym_multiline_string_escaped_char,
      aux_sym_multiline_string_content_repeat1,
  [6120] = 8,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(821), 1,
      anon_sym_LF,
    ACTIONS(823), 1,
      anon_sym_BSLASH,
    ACTIONS(826), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(829), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(251), 1,
      aux_sym_value_string_text_repeat1,
    STATE(134), 3,
      sym_value_string_content,
      sym_template,
      aux_sym_value_string_repeat1,
    STATE(171), 3,
      sym_value_string_text,
      sym_value_string_escaped_char,
      aux_sym_value_string_content_repeat1,
  [6149] = 8,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(832), 1,
      anon_sym_LF,
    ACTIONS(835), 1,
      anon_sym_BSLASH,
    ACTIONS(838), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(840), 1,
      aux_sym_multiline_string_text_token1,
    ACTIONS(843), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(135), 3,
      sym_multiline_string_content,
      sym_template,
      aux_sym_multiline_string_repeat1,
    STATE(196), 3,
      sym_multiline_string_text,
      sym_multiline_string_escaped_char,
      aux_sym_multiline_string_content_repeat1,
  [6178] = 7,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(780), 1,
      aux_sym_quoted_string_text_token1,
    ACTIONS(782), 1,
      anon_sym_BSLASH,
    ACTIONS(784), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(846), 1,
      anon_sym_DQUOTE,
    STATE(125), 3,
      sym_quoted_string_content,
      sym_template,
      aux_sym_quoted_string_repeat1,
    STATE(176), 4,
      sym_quoted_string_text,
      sym_invalid_quoted_string_escaped_char,
      sym_quoted_string_escaped_char,
      aux_sym_quoted_string_content_repeat1,
  [6205] = 7,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(848), 1,
      anon_sym_BSLASH,
    ACTIONS(850), 1,
      anon_sym_BQUOTE,
    ACTIONS(852), 1,
      aux_sym_oneline_string_text_token1,
    ACTIONS(854), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(142), 3,
      sym_oneline_string_content,
      sym_template,
      aux_sym_oneline_string_repeat1,
    STATE(213), 3,
      sym_oneline_string_text,
      sym_oneline_string_escaped_char,
      aux_sym_oneline_string_content_repeat1,
  [6231] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(43), 1,
      anon_sym_BSLASH2,
    ACTIONS(282), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(768), 1,
      sym_key_string_text,
    STATE(441), 1,
      sym_key_value,
    STATE(496), 1,
      sym_key_string,
    STATE(211), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(145), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
  [6259] = 8,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(856), 1,
      anon_sym_SEMI,
    ACTIONS(858), 1,
      anon_sym_BSLASH,
    ACTIONS(860), 1,
      sym_filename_text,
    ACTIONS(862), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(529), 1,
      sym_filename,
    STATE(224), 2,
      sym_filename_escaped_char,
      aux_sym_filename_content_repeat1,
    STATE(159), 3,
      sym_filename_content,
      sym_template,
      aux_sym_filename_repeat1,
  [6287] = 8,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(864), 1,
      anon_sym_LF,
    ACTIONS(866), 1,
      anon_sym_BSLASH,
    ACTIONS(868), 1,
      sym_filename_text,
    ACTIONS(870), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(433), 1,
      sym_filename,
    STATE(232), 2,
      sym_filename_escaped_char,
      aux_sym_filename_content_repeat1,
    STATE(161), 3,
      sym_filename_content,
      sym_template,
      aux_sym_filename_repeat1,
  [6315] = 8,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(858), 1,
      anon_sym_BSLASH,
    ACTIONS(860), 1,
      sym_filename_text,
    ACTIONS(862), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(872), 1,
      anon_sym_SEMI,
    STATE(493), 1,
      sym_filename,
    STATE(224), 2,
      sym_filename_escaped_char,
      aux_sym_filename_content_repeat1,
    STATE(159), 3,
      sym_filename_content,
      sym_template,
      aux_sym_filename_repeat1,
  [6343] = 7,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(874), 1,
      anon_sym_BSLASH,
    ACTIONS(877), 1,
      anon_sym_BQUOTE,
    ACTIONS(879), 1,
      aux_sym_oneline_string_text_token1,
    ACTIONS(882), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(142), 3,
      sym_oneline_string_content,
      sym_template,
      aux_sym_oneline_string_repeat1,
    STATE(213), 3,
      sym_oneline_string_text,
      sym_oneline_string_escaped_char,
      aux_sym_oneline_string_content_repeat1,
  [6369] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(885), 1,
      anon_sym_COLON,
    ACTIONS(887), 1,
      anon_sym_COLON2,
    ACTIONS(889), 1,
      sym_key_string_text,
    ACTIONS(892), 1,
      anon_sym_BSLASH2,
    ACTIONS(895), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(211), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(143), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
  [6397] = 7,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(848), 1,
      anon_sym_BSLASH,
    ACTIONS(852), 1,
      aux_sym_oneline_string_text_token1,
    ACTIONS(854), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(898), 1,
      anon_sym_BQUOTE,
    STATE(137), 3,
      sym_oneline_string_content,
      sym_template,
      aux_sym_oneline_string_repeat1,
    STATE(213), 3,
      sym_oneline_string_text,
      sym_oneline_string_escaped_char,
      aux_sym_oneline_string_content_repeat1,
  [6423] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(43), 1,
      anon_sym_BSLASH2,
    ACTIONS(282), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(768), 1,
      sym_key_string_text,
    ACTIONS(900), 1,
      anon_sym_COLON,
    ACTIONS(902), 1,
      anon_sym_COLON2,
    STATE(211), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(143), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
  [6451] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(43), 1,
      anon_sym_BSLASH2,
    ACTIONS(282), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(768), 1,
      sym_key_string_text,
    STATE(475), 1,
      sym_key_value,
    STATE(496), 1,
      sym_key_string,
    STATE(211), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(145), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
  [6479] = 7,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(53), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(688), 1,
      anon_sym_BSLASH2,
    ACTIONS(900), 1,
      anon_sym_LF,
    ACTIONS(904), 1,
      sym_key_string_text,
    STATE(228), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(156), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
  [6504] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(908), 1,
      aux_sym_digit_token1,
    STATE(148), 2,
      sym_digit,
      aux_sym_integer_repeat1,
    ACTIONS(906), 6,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DOT,
      anon_sym_e,
      anon_sym_E,
  [6523] = 7,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(911), 1,
      anon_sym_DQUOTE,
    ACTIONS(913), 1,
      anon_sym_BSLASH,
    ACTIONS(915), 1,
      aux_sym_json_string_text_token1,
    ACTIONS(917), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(285), 2,
      sym_json_string_text,
      sym_json_string_escaped_char,
    STATE(157), 3,
      sym_json_string_content,
      sym_template,
      aux_sym_json_string_repeat1,
  [6548] = 7,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(913), 1,
      anon_sym_BSLASH,
    ACTIONS(915), 1,
      aux_sym_json_string_text_token1,
    ACTIONS(917), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(919), 1,
      anon_sym_DQUOTE,
    STATE(285), 2,
      sym_json_string_text,
      sym_json_string_escaped_char,
    STATE(158), 3,
      sym_json_string_content,
      sym_template,
      aux_sym_json_string_repeat1,
  [6573] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(432), 1,
      anon_sym_BSLASH2,
    ACTIONS(434), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(900), 1,
      anon_sym_COLON2,
    ACTIONS(921), 1,
      sym_key_string_text,
    STATE(230), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(153), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
  [6598] = 4,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(925), 1,
      aux_sym_invalid_quoted_string_escaped_char_token1,
    ACTIONS(927), 1,
      anon_sym_u,
    ACTIONS(923), 7,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
      anon_sym_b,
      anon_sym_f,
      anon_sym_n,
      anon_sym_r,
      anon_sym_t,
  [6617] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(885), 1,
      anon_sym_COLON2,
    ACTIONS(929), 1,
      sym_key_string_text,
    ACTIONS(932), 1,
      anon_sym_BSLASH2,
    ACTIONS(935), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(230), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(153), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
  [6642] = 7,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(938), 1,
      anon_sym_SEMI,
    ACTIONS(940), 1,
      anon_sym_BSLASH,
    ACTIONS(943), 1,
      sym_filename_text,
    ACTIONS(946), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(224), 2,
      sym_filename_escaped_char,
      aux_sym_filename_content_repeat1,
    STATE(154), 3,
      sym_filename_content,
      sym_template,
      aux_sym_filename_repeat1,
  [6667] = 7,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(913), 1,
      anon_sym_BSLASH,
    ACTIONS(915), 1,
      aux_sym_json_string_text_token1,
    ACTIONS(917), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(949), 1,
      anon_sym_DQUOTE,
    STATE(285), 2,
      sym_json_string_text,
      sym_json_string_escaped_char,
    STATE(149), 3,
      sym_json_string_content,
      sym_template,
      aux_sym_json_string_repeat1,
  [6692] = 7,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(885), 1,
      anon_sym_LF,
    ACTIONS(951), 1,
      sym_key_string_text,
    ACTIONS(954), 1,
      anon_sym_BSLASH2,
    ACTIONS(957), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(228), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(156), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
  [6717] = 7,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(960), 1,
      anon_sym_DQUOTE,
    ACTIONS(962), 1,
      anon_sym_BSLASH,
    ACTIONS(965), 1,
      aux_sym_json_string_text_token1,
    ACTIONS(968), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(285), 2,
      sym_json_string_text,
      sym_json_string_escaped_char,
    STATE(157), 3,
      sym_json_string_content,
      sym_template,
      aux_sym_json_string_repeat1,
  [6742] = 7,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(913), 1,
      anon_sym_BSLASH,
    ACTIONS(915), 1,
      aux_sym_json_string_text_token1,
    ACTIONS(917), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(971), 1,
      anon_sym_DQUOTE,
    STATE(285), 2,
      sym_json_string_text,
      sym_json_string_escaped_char,
    STATE(157), 3,
      sym_json_string_content,
      sym_template,
      aux_sym_json_string_repeat1,
  [6767] = 7,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(858), 1,
      anon_sym_BSLASH,
    ACTIONS(860), 1,
      sym_filename_text,
    ACTIONS(862), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(973), 1,
      anon_sym_SEMI,
    STATE(224), 2,
      sym_filename_escaped_char,
      aux_sym_filename_content_repeat1,
    STATE(154), 3,
      sym_filename_content,
      sym_template,
      aux_sym_filename_repeat1,
  [6792] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(707), 1,
      aux_sym_digit_token1,
    STATE(148), 2,
      sym_digit,
      aux_sym_integer_repeat1,
    ACTIONS(975), 6,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DOT,
      anon_sym_e,
      anon_sym_E,
  [6811] = 7,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(866), 1,
      anon_sym_BSLASH,
    ACTIONS(868), 1,
      sym_filename_text,
    ACTIONS(870), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(973), 1,
      anon_sym_LF,
    STATE(232), 2,
      sym_filename_escaped_char,
      aux_sym_filename_content_repeat1,
    STATE(163), 3,
      sym_filename_content,
      sym_template,
      aux_sym_filename_repeat1,
  [6836] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(977), 9,
      anon_sym_EQ,
      anon_sym_regex,
      anon_sym_RBRACE_RBRACE,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
  [6851] = 7,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(938), 1,
      anon_sym_LF,
    ACTIONS(979), 1,
      anon_sym_BSLASH,
    ACTIONS(982), 1,
      sym_filename_text,
    ACTIONS(985), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(232), 2,
      sym_filename_escaped_char,
      aux_sym_filename_content_repeat1,
    STATE(163), 3,
      sym_filename_content,
      sym_template,
      aux_sym_filename_repeat1,
  [6876] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(556), 1,
      anon_sym_LF,
    ACTIONS(558), 7,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
  [6892] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(540), 1,
      anon_sym_LF,
    ACTIONS(542), 7,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
  [6908] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(572), 1,
      anon_sym_LF,
    ACTIONS(574), 7,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
  [6924] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(564), 1,
      anon_sym_LF,
    ACTIONS(566), 7,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
  [6940] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(576), 1,
      anon_sym_LF,
    ACTIONS(578), 7,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
  [6956] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(580), 1,
      anon_sym_LF,
    ACTIONS(582), 7,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
  [6972] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(592), 1,
      anon_sym_LF,
    ACTIONS(594), 7,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
  [6988] = 7,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(672), 1,
      anon_sym_BSLASH,
    ACTIONS(674), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(988), 1,
      anon_sym_LF,
    ACTIONS(990), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(251), 1,
      aux_sym_value_string_text_repeat1,
    STATE(175), 3,
      sym_value_string_text,
      sym_value_string_escaped_char,
      aux_sym_value_string_content_repeat1,
  [7012] = 7,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(992), 1,
      anon_sym_LF,
    ACTIONS(995), 1,
      anon_sym_BSLASH,
    ACTIONS(998), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(1000), 1,
      aux_sym_multiline_string_text_token1,
    ACTIONS(1003), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(172), 3,
      sym_multiline_string_text,
      sym_multiline_string_escaped_char,
      aux_sym_multiline_string_content_repeat1,
  [7036] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(512), 1,
      anon_sym_LF,
    ACTIONS(514), 7,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
  [7052] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(596), 1,
      anon_sym_LF,
    ACTIONS(598), 7,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
  [7068] = 7,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1005), 1,
      anon_sym_LF,
    ACTIONS(1007), 1,
      anon_sym_BSLASH,
    ACTIONS(1010), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(1013), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(251), 1,
      aux_sym_value_string_text_repeat1,
    STATE(175), 3,
      sym_value_string_text,
      sym_value_string_escaped_char,
      aux_sym_value_string_content_repeat1,
  [7092] = 5,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(780), 1,
      aux_sym_quoted_string_text_token1,
    ACTIONS(782), 1,
      anon_sym_BSLASH,
    ACTIONS(1015), 2,
      anon_sym_DQUOTE,
      anon_sym_LBRACE_LBRACE,
    STATE(179), 4,
      sym_quoted_string_text,
      sym_invalid_quoted_string_escaped_char,
      sym_quoted_string_escaped_char,
      aux_sym_quoted_string_content_repeat1,
  [7112] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(584), 1,
      anon_sym_LF,
    ACTIONS(586), 7,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
  [7128] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1019), 1,
      anon_sym_u,
    ACTIONS(1017), 7,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
      anon_sym_b,
      anon_sym_f,
      anon_sym_n,
      anon_sym_r,
      anon_sym_t,
  [7144] = 5,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1023), 1,
      aux_sym_quoted_string_text_token1,
    ACTIONS(1026), 1,
      anon_sym_BSLASH,
    ACTIONS(1021), 2,
      anon_sym_DQUOTE,
      anon_sym_LBRACE_LBRACE,
    STATE(179), 4,
      sym_quoted_string_text,
      sym_invalid_quoted_string_escaped_char,
      sym_quoted_string_escaped_char,
      aux_sym_quoted_string_content_repeat1,
  [7164] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(544), 1,
      anon_sym_LF,
    ACTIONS(546), 7,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
  [7180] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1031), 1,
      anon_sym_DOT,
    STATE(229), 1,
      sym_fraction,
    STATE(334), 1,
      sym_exponent,
    ACTIONS(1033), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(1029), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [7202] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(600), 1,
      anon_sym_LF,
    ACTIONS(602), 7,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
  [7218] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(524), 1,
      anon_sym_LF,
    ACTIONS(526), 7,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
  [7234] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(612), 1,
      anon_sym_LF,
    ACTIONS(614), 7,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
  [7250] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(604), 1,
      anon_sym_LF,
    ACTIONS(606), 7,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
  [7266] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(528), 1,
      anon_sym_LF,
    ACTIONS(530), 7,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
  [7282] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(516), 1,
      anon_sym_LF,
    ACTIONS(518), 7,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
  [7298] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(608), 1,
      anon_sym_LF,
    ACTIONS(610), 7,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
  [7314] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(568), 1,
      anon_sym_LF,
    ACTIONS(570), 7,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
  [7330] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(536), 1,
      anon_sym_LF,
    ACTIONS(538), 7,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
  [7346] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(548), 1,
      anon_sym_LF,
    ACTIONS(550), 7,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
  [7362] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1037), 1,
      anon_sym_u,
    ACTIONS(1035), 7,
      anon_sym_BSLASH,
      anon_sym_b,
      anon_sym_f,
      anon_sym_n,
      anon_sym_r,
      anon_sym_t,
      anon_sym_BQUOTE,
  [7378] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(560), 1,
      anon_sym_LF,
    ACTIONS(562), 7,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
  [7394] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(707), 1,
      aux_sym_digit_token1,
    STATE(148), 2,
      sym_digit,
      aux_sym_integer_repeat1,
    ACTIONS(1039), 5,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_e,
      anon_sym_E,
  [7412] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(588), 1,
      anon_sym_LF,
    ACTIONS(590), 7,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
  [7428] = 7,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(790), 1,
      anon_sym_BSLASH,
    ACTIONS(794), 1,
      aux_sym_multiline_string_text_token1,
    ACTIONS(1041), 1,
      anon_sym_LF,
    ACTIONS(1043), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(1045), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(172), 3,
      sym_multiline_string_text,
      sym_multiline_string_escaped_char,
      aux_sym_multiline_string_content_repeat1,
  [7452] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(532), 1,
      anon_sym_LF,
    ACTIONS(534), 7,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
  [7468] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(552), 1,
      anon_sym_LF,
    ACTIONS(554), 7,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
  [7484] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(520), 1,
      anon_sym_LF,
    ACTIONS(522), 7,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
  [7500] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1049), 1,
      anon_sym_u,
    ACTIONS(1051), 1,
      anon_sym_POUND,
    ACTIONS(1047), 6,
      anon_sym_BSLASH,
      anon_sym_b,
      anon_sym_f,
      anon_sym_n,
      anon_sym_r,
      anon_sym_t,
  [7518] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(695), 1,
      anon_sym_DQUOTE,
    ACTIONS(1053), 1,
      anon_sym_RBRACE,
    ACTIONS(1055), 1,
      anon_sym_COMMA,
    STATE(323), 1,
      sym_json_key_value,
    STATE(325), 1,
      aux_sym_json_object_repeat1,
    STATE(479), 1,
      sym_json_string,
    STATE(480), 1,
      sym_json_key_string,
  [7543] = 5,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(906), 1,
      anon_sym_LF,
    ACTIONS(1057), 1,
      aux_sym_digit_token1,
    STATE(202), 2,
      sym_digit,
      aux_sym_integer_repeat1,
    ACTIONS(1060), 3,
      anon_sym_DOT,
      anon_sym_e,
      anon_sym_E,
  [7562] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(656), 1,
      anon_sym_DQUOTE,
    ACTIONS(664), 1,
      aux_sym_digit_token1,
    STATE(350), 1,
      sym_integer,
    STATE(212), 2,
      sym_digit,
      aux_sym_integer_repeat1,
    STATE(469), 2,
      sym_quoted_string,
      sym_float,
  [7583] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(656), 1,
      anon_sym_DQUOTE,
    ACTIONS(664), 1,
      aux_sym_digit_token1,
    STATE(356), 1,
      sym_integer,
    STATE(212), 2,
      sym_digit,
      aux_sym_integer_repeat1,
    STATE(471), 2,
      sym_quoted_string,
      sym_float,
  [7604] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(656), 1,
      anon_sym_DQUOTE,
    ACTIONS(664), 1,
      aux_sym_digit_token1,
    STATE(348), 1,
      sym_integer,
    STATE(212), 2,
      sym_digit,
      aux_sym_integer_repeat1,
    STATE(472), 2,
      sym_quoted_string,
      sym_float,
  [7625] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(656), 1,
      anon_sym_DQUOTE,
    ACTIONS(664), 1,
      aux_sym_digit_token1,
    STATE(355), 1,
      sym_integer,
    STATE(212), 2,
      sym_digit,
      aux_sym_integer_repeat1,
    STATE(473), 2,
      sym_quoted_string,
      sym_float,
  [7646] = 4,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1062), 1,
      anon_sym_LF,
    STATE(482), 1,
      sym_multiline_string_type,
    ACTIONS(1064), 5,
      anon_sym_base64,
      anon_sym_hex,
      anon_sym_json,
      anon_sym_xml,
      anon_sym_graphql,
  [7663] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(695), 1,
      anon_sym_DQUOTE,
    ACTIONS(1055), 1,
      anon_sym_COMMA,
    ACTIONS(1066), 1,
      anon_sym_RBRACE,
    STATE(307), 1,
      aux_sym_json_object_repeat1,
    STATE(309), 1,
      sym_json_key_value,
    STATE(479), 1,
      sym_json_string,
    STATE(480), 1,
      sym_json_key_string,
  [7688] = 6,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1068), 1,
      anon_sym_BSLASH,
    ACTIONS(1071), 1,
      anon_sym_BQUOTE,
    ACTIONS(1073), 1,
      aux_sym_oneline_string_text_token1,
    ACTIONS(1076), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(209), 3,
      sym_oneline_string_text,
      sym_oneline_string_escaped_char,
      aux_sym_oneline_string_content_repeat1,
  [7709] = 6,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1078), 1,
      anon_sym_BSLASH,
    ACTIONS(1080), 1,
      anon_sym_SLASH,
    ACTIONS(1082), 1,
      aux_sym_regex_text_token1,
    STATE(501), 1,
      sym_regex_content,
    STATE(227), 3,
      sym_regex_text,
      sym_regex_escaped_char,
      aux_sym_regex_content_repeat1,
  [7730] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1086), 1,
      anon_sym_COLON2,
    STATE(214), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    ACTIONS(1084), 4,
      anon_sym_COLON,
      sym_key_string_text,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
  [7747] = 5,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(59), 1,
      aux_sym_digit_token1,
    ACTIONS(975), 1,
      anon_sym_LF,
    STATE(202), 2,
      sym_digit,
      aux_sym_integer_repeat1,
    ACTIONS(1088), 3,
      anon_sym_DOT,
      anon_sym_e,
      anon_sym_E,
  [7766] = 4,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1092), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1090), 3,
      anon_sym_BSLASH,
      anon_sym_BQUOTE,
      aux_sym_oneline_string_text_token1,
    STATE(209), 3,
      sym_oneline_string_text,
      sym_oneline_string_escaped_char,
      aux_sym_oneline_string_content_repeat1,
  [7783] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1096), 1,
      anon_sym_COLON2,
    ACTIONS(1098), 1,
      sym_key_string_text,
    ACTIONS(1101), 1,
      anon_sym_BSLASH2,
    ACTIONS(1094), 2,
      anon_sym_COLON,
      anon_sym_LBRACE_LBRACE,
    STATE(214), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
  [7804] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1104), 7,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      aux_sym_digit_token1,
      anon_sym_DOT,
      anon_sym_e,
      anon_sym_E,
  [7817] = 6,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1078), 1,
      anon_sym_BSLASH,
    ACTIONS(1082), 1,
      aux_sym_regex_text_token1,
    ACTIONS(1106), 1,
      anon_sym_SLASH,
    STATE(442), 1,
      sym_regex_content,
    STATE(227), 3,
      sym_regex_text,
      sym_regex_escaped_char,
      aux_sym_regex_content_repeat1,
  [7838] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1110), 1,
      anon_sym_u,
    ACTIONS(1112), 1,
      anon_sym_POUND,
    ACTIONS(1108), 4,
      anon_sym_BSLASH,
      anon_sym_b,
      anon_sym_f,
      anon_sym_BQUOTE,
  [7854] = 5,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1114), 1,
      sym_key_string_text,
    ACTIONS(1117), 1,
      anon_sym_BSLASH2,
    ACTIONS(1094), 2,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    STATE(218), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
  [7872] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(707), 1,
      aux_sym_digit_token1,
    STATE(148), 2,
      sym_digit,
      aux_sym_integer_repeat1,
    ACTIONS(1120), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [7888] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(707), 1,
      aux_sym_digit_token1,
    STATE(148), 2,
      sym_digit,
      aux_sym_integer_repeat1,
    ACTIONS(1122), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [7904] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(652), 1,
      anon_sym_base64_COMMA,
    ACTIONS(654), 1,
      anon_sym_hex_COMMA,
    ACTIONS(656), 1,
      anon_sym_DQUOTE,
    STATE(467), 3,
      sym_oneline_base64,
      sym_oneline_hex,
      sym_quoted_string,
  [7922] = 5,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1126), 1,
      anon_sym_BSLASH,
    ACTIONS(1129), 1,
      sym_filename_text,
    ACTIONS(1124), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE_LBRACE,
    STATE(222), 2,
      sym_filename_escaped_char,
      aux_sym_filename_content_repeat1,
  [7940] = 5,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1132), 1,
      anon_sym_BSLASH,
    ACTIONS(1135), 1,
      anon_sym_SLASH,
    ACTIONS(1137), 1,
      aux_sym_regex_text_token1,
    STATE(223), 3,
      sym_regex_text,
      sym_regex_escaped_char,
      aux_sym_regex_content_repeat1,
  [7958] = 3,
    ACTIONS(11), 1,
      sym_comment,
    STATE(222), 2,
      sym_filename_escaped_char,
      aux_sym_filename_content_repeat1,
    ACTIONS(1140), 4,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      sym_filename_text,
      anon_sym_LBRACE_LBRACE,
  [7972] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(652), 1,
      anon_sym_base64_COMMA,
    ACTIONS(654), 1,
      anon_sym_hex_COMMA,
    ACTIONS(656), 1,
      anon_sym_DQUOTE,
    STATE(468), 3,
      sym_oneline_base64,
      sym_oneline_hex,
      sym_quoted_string,
  [7990] = 5,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1142), 1,
      anon_sym_BSLASH,
    ACTIONS(1145), 1,
      sym_filename_text,
    ACTIONS(1124), 2,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    STATE(226), 2,
      sym_filename_escaped_char,
      aux_sym_filename_content_repeat1,
  [8008] = 5,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1078), 1,
      anon_sym_BSLASH,
    ACTIONS(1082), 1,
      aux_sym_regex_text_token1,
    ACTIONS(1148), 1,
      anon_sym_SLASH,
    STATE(223), 3,
      sym_regex_text,
      sym_regex_escaped_char,
      aux_sym_regex_content_repeat1,
  [8026] = 3,
    ACTIONS(11), 1,
      sym_comment,
    STATE(218), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    ACTIONS(1084), 4,
      anon_sym_LF,
      sym_key_string_text,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
  [8040] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(312), 1,
      sym_exponent,
    ACTIONS(1033), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(1150), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [8056] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(234), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    ACTIONS(1084), 4,
      anon_sym_COLON2,
      sym_key_string_text,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
  [8070] = 6,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1029), 1,
      anon_sym_LF,
    ACTIONS(1152), 1,
      anon_sym_DOT,
    STATE(296), 1,
      sym_fraction,
    STATE(478), 1,
      sym_exponent,
    ACTIONS(1154), 2,
      anon_sym_e,
      anon_sym_E,
  [8090] = 3,
    ACTIONS(11), 1,
      sym_comment,
    STATE(226), 2,
      sym_filename_escaped_char,
      aux_sym_filename_content_repeat1,
    ACTIONS(1140), 4,
      anon_sym_LF,
      anon_sym_BSLASH,
      sym_filename_text,
      anon_sym_LBRACE_LBRACE,
  [8104] = 5,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(59), 1,
      aux_sym_digit_token1,
    ACTIONS(1039), 1,
      anon_sym_LF,
    ACTIONS(1156), 2,
      anon_sym_e,
      anon_sym_E,
    STATE(202), 2,
      sym_digit,
      aux_sym_integer_repeat1,
  [8122] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1158), 1,
      sym_key_string_text,
    ACTIONS(1161), 1,
      anon_sym_BSLASH2,
    ACTIONS(1094), 2,
      anon_sym_COLON2,
      anon_sym_LBRACE_LBRACE,
    STATE(234), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
  [8140] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1166), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1164), 4,
      anon_sym_LF,
      anon_sym_BSLASH,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      aux_sym_multiline_string_text_token1,
  [8153] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1104), 1,
      anon_sym_LF,
    ACTIONS(1168), 4,
      aux_sym_digit_token1,
      anon_sym_DOT,
      anon_sym_e,
      anon_sym_E,
  [8166] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1172), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1170), 4,
      anon_sym_LF,
      anon_sym_BSLASH,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      aux_sym_multiline_string_text_token1,
  [8179] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1176), 1,
      aux_sym_hexdigit_token1,
    ACTIONS(1174), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
    STATE(238), 2,
      sym_hexdigit,
      aux_sym_oneline_hex_repeat1,
  [8194] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1181), 1,
      anon_sym_COLON2,
    ACTIONS(1179), 4,
      anon_sym_COLON,
      sym_key_string_text,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
  [8207] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1166), 5,
      anon_sym_LF,
      anon_sym_COLON,
      sym_key_string_text,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
  [8218] = 4,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(792), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(1185), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1183), 3,
      anon_sym_LF,
      anon_sym_BSLASH,
      aux_sym_multiline_string_text_token1,
  [8233] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1164), 1,
      anon_sym_COLON2,
    ACTIONS(1166), 4,
      anon_sym_COLON,
      sym_key_string_text,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
  [8246] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1189), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1187), 4,
      anon_sym_LF,
      anon_sym_BSLASH,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      aux_sym_multiline_string_text_token1,
  [8259] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1191), 1,
      anon_sym_LF,
    ACTIONS(1193), 4,
      anon_sym_COLON,
      sym_key_string_text,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
  [8272] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(707), 1,
      aux_sym_digit_token1,
    ACTIONS(1195), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(219), 2,
      sym_digit,
      aux_sym_integer_repeat1,
  [8287] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1199), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1197), 4,
      anon_sym_LF,
      anon_sym_BSLASH,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      aux_sym_multiline_string_text_token1,
  [8300] = 4,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(815), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(1185), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1183), 3,
      anon_sym_LF,
      anon_sym_BSLASH,
      aux_sym_multiline_string_text_token1,
  [8315] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(664), 1,
      aux_sym_digit_token1,
    ACTIONS(1201), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(279), 2,
      sym_digit,
      aux_sym_integer_repeat1,
  [8330] = 5,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1205), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(1208), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(249), 1,
      aux_sym_value_string_text_repeat1,
    ACTIONS(1203), 2,
      anon_sym_LF,
      anon_sym_BSLASH,
  [8347] = 4,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1185), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1210), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(1183), 3,
      anon_sym_LF,
      anon_sym_BSLASH,
      aux_sym_multiline_string_text_token1,
  [8362] = 5,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1214), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(1216), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(249), 1,
      aux_sym_value_string_text_repeat1,
    ACTIONS(1212), 2,
      anon_sym_LF,
      anon_sym_BSLASH,
  [8379] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1220), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1218), 4,
      anon_sym_LF,
      anon_sym_BSLASH,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      aux_sym_multiline_string_text_token1,
  [8392] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1224), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1222), 3,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
      aux_sym_json_string_text_token1,
  [8404] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1228), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1226), 3,
      anon_sym_LF,
      anon_sym_BSLASH,
      aux_sym_value_string_text_token1,
  [8416] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1232), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1230), 3,
      anon_sym_BSLASH,
      anon_sym_BQUOTE,
      aux_sym_oneline_string_text_token1,
  [8428] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1236), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1234), 3,
      anon_sym_LF,
      anon_sym_BSLASH,
      aux_sym_value_string_text_token1,
  [8440] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(664), 1,
      aux_sym_digit_token1,
    STATE(430), 1,
      sym_integer,
    STATE(212), 2,
      sym_digit,
      aux_sym_integer_repeat1,
  [8454] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1238), 4,
      anon_sym_DQUOTE,
      aux_sym_quoted_string_text_token1,
      anon_sym_BSLASH,
      anon_sym_LBRACE_LBRACE,
  [8464] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1242), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1240), 3,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
      aux_sym_json_string_text_token1,
  [8476] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(664), 1,
      aux_sym_digit_token1,
    STATE(428), 1,
      sym_integer,
    STATE(212), 2,
      sym_digit,
      aux_sym_integer_repeat1,
  [8490] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(664), 1,
      aux_sym_digit_token1,
    STATE(427), 1,
      sym_integer,
    STATE(212), 2,
      sym_digit,
      aux_sym_integer_repeat1,
  [8504] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(656), 1,
      anon_sym_DQUOTE,
    ACTIONS(1244), 1,
      anon_sym_SLASH,
    STATE(470), 2,
      sym_quoted_string,
      sym_regex,
  [8518] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1246), 1,
      anon_sym_RBRACE,
    ACTIONS(1248), 1,
      aux_sym_hexdigit_token1,
    STATE(238), 2,
      sym_hexdigit,
      aux_sym_oneline_hex_repeat1,
  [8532] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1248), 1,
      aux_sym_hexdigit_token1,
    ACTIONS(1250), 1,
      anon_sym_RBRACE,
    STATE(238), 2,
      sym_hexdigit,
      aux_sym_oneline_hex_repeat1,
  [8546] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1248), 1,
      aux_sym_hexdigit_token1,
    ACTIONS(1252), 1,
      anon_sym_SEMI,
    STATE(283), 2,
      sym_hexdigit,
      aux_sym_oneline_hex_repeat1,
  [8560] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1179), 4,
      anon_sym_COLON2,
      sym_key_string_text,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
  [8570] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(656), 1,
      anon_sym_DQUOTE,
    ACTIONS(1244), 1,
      anon_sym_SLASH,
    STATE(182), 2,
      sym_quoted_string,
      sym_regex,
  [8584] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1254), 4,
      anon_sym_COLON2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [8594] = 4,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(59), 1,
      aux_sym_digit_token1,
    ACTIONS(1122), 1,
      anon_sym_LF,
    STATE(202), 2,
      sym_digit,
      aux_sym_integer_repeat1,
  [8608] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1258), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1256), 3,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
      aux_sym_json_string_text_token1,
  [8620] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1248), 1,
      aux_sym_hexdigit_token1,
    ACTIONS(1260), 1,
      anon_sym_RBRACE,
    STATE(238), 2,
      sym_hexdigit,
      aux_sym_oneline_hex_repeat1,
  [8634] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1170), 4,
      anon_sym_DQUOTE,
      aux_sym_quoted_string_text_token1,
      anon_sym_BSLASH,
      anon_sym_LBRACE_LBRACE,
  [8644] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1262), 4,
      anon_sym_LF,
      anon_sym_BSLASH,
      sym_filename_text,
      anon_sym_LBRACE_LBRACE,
  [8654] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1266), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1264), 3,
      anon_sym_LF,
      anon_sym_BSLASH,
      aux_sym_value_string_text_token1,
  [8666] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1268), 4,
      anon_sym_COLON2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [8676] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1270), 4,
      anon_sym_DQUOTE,
      aux_sym_quoted_string_text_token1,
      anon_sym_BSLASH,
      anon_sym_LBRACE_LBRACE,
  [8686] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1172), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1170), 3,
      anon_sym_LF,
      anon_sym_BSLASH,
      aux_sym_value_string_text_token1,
  [8698] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1166), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1164), 3,
      anon_sym_LF,
      anon_sym_BSLASH,
      aux_sym_value_string_text_token1,
  [8710] = 4,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(59), 1,
      aux_sym_digit_token1,
    ACTIONS(1120), 1,
      anon_sym_LF,
    STATE(202), 2,
      sym_digit,
      aux_sym_integer_repeat1,
  [8724] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1272), 1,
      anon_sym_DQUOTE,
    ACTIONS(1274), 1,
      anon_sym_SLASH,
    STATE(86), 2,
      sym_quoted_string,
      sym_regex,
  [8738] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1272), 1,
      anon_sym_DQUOTE,
    ACTIONS(1274), 1,
      anon_sym_SLASH,
    STATE(64), 2,
      sym_quoted_string,
      sym_regex,
  [8752] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(656), 1,
      anon_sym_DQUOTE,
    ACTIONS(1244), 1,
      anon_sym_SLASH,
    STATE(173), 2,
      sym_quoted_string,
      sym_regex,
  [8766] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1248), 1,
      aux_sym_hexdigit_token1,
    ACTIONS(1276), 1,
      anon_sym_SEMI,
    STATE(238), 2,
      sym_hexdigit,
      aux_sym_oneline_hex_repeat1,
  [8780] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1280), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1278), 3,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
      aux_sym_json_string_text_token1,
  [8792] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1284), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1282), 3,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
      aux_sym_json_string_text_token1,
  [8804] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1164), 4,
      anon_sym_LF,
      anon_sym_BSLASH,
      sym_filename_text,
      anon_sym_LBRACE_LBRACE,
  [8814] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1166), 4,
      anon_sym_COLON2,
      sym_key_string_text,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
  [8824] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1164), 4,
      anon_sym_DQUOTE,
      aux_sym_quoted_string_text_token1,
      anon_sym_BSLASH,
      anon_sym_LBRACE_LBRACE,
  [8834] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1286), 4,
      anon_sym_DQUOTE,
      aux_sym_quoted_string_text_token1,
      anon_sym_BSLASH,
      anon_sym_LBRACE_LBRACE,
  [8844] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1288), 4,
      anon_sym_DQUOTE,
      aux_sym_quoted_string_text_token1,
      anon_sym_BSLASH,
      anon_sym_LBRACE_LBRACE,
  [8854] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1172), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1170), 3,
      anon_sym_BSLASH,
      anon_sym_BQUOTE,
      aux_sym_oneline_string_text_token1,
  [8866] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1292), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1290), 3,
      anon_sym_BSLASH,
      anon_sym_BQUOTE,
      aux_sym_oneline_string_text_token1,
  [8878] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1296), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1294), 3,
      anon_sym_BSLASH,
      anon_sym_BQUOTE,
      aux_sym_oneline_string_text_token1,
  [8890] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(695), 1,
      anon_sym_DQUOTE,
    STATE(388), 1,
      sym_json_key_value,
    STATE(479), 1,
      sym_json_string,
    STATE(480), 1,
      sym_json_key_string,
  [8906] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1166), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1164), 3,
      anon_sym_BSLASH,
      anon_sym_BQUOTE,
      aux_sym_oneline_string_text_token1,
  [8918] = 4,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1150), 1,
      anon_sym_LF,
    STATE(444), 1,
      sym_exponent,
    ACTIONS(1154), 2,
      anon_sym_e,
      anon_sym_E,
  [8932] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1262), 4,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      sym_filename_text,
      anon_sym_LBRACE_LBRACE,
  [8942] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1164), 4,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      sym_filename_text,
      anon_sym_LBRACE_LBRACE,
  [8952] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1179), 4,
      anon_sym_LF,
      sym_key_string_text,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
  [8962] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1248), 1,
      aux_sym_hexdigit_token1,
    ACTIONS(1298), 1,
      anon_sym_RBRACE,
    STATE(238), 2,
      sym_hexdigit,
      aux_sym_oneline_hex_repeat1,
  [8976] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1166), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1164), 3,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
      aux_sym_json_string_text_token1,
  [8988] = 4,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1152), 1,
      anon_sym_DOT,
    ACTIONS(1300), 1,
      anon_sym_LF,
    STATE(436), 1,
      sym_fraction,
  [9001] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1302), 1,
      anon_sym_COMMA,
    ACTIONS(1305), 1,
      anon_sym_RBRACK,
    STATE(303), 1,
      aux_sym_json_array_repeat1,
  [9014] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1307), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [9023] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(664), 1,
      aux_sym_digit_token1,
    STATE(233), 2,
      sym_digit,
      aux_sym_integer_repeat1,
  [9034] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1309), 1,
      anon_sym_COMMA,
    ACTIONS(1311), 1,
      anon_sym_RBRACK,
    STATE(319), 1,
      aux_sym_json_array_repeat1,
  [9047] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1055), 1,
      anon_sym_COMMA,
    ACTIONS(1313), 1,
      anon_sym_RBRACE,
    STATE(318), 1,
      aux_sym_json_object_repeat1,
  [9060] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1166), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [9069] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1055), 1,
      anon_sym_COMMA,
    ACTIONS(1313), 1,
      anon_sym_RBRACE,
    STATE(315), 1,
      aux_sym_json_object_repeat1,
  [9082] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(431), 1,
      sym_boolean,
    ACTIONS(660), 2,
      anon_sym_true,
      anon_sym_false,
  [9093] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1315), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [9102] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1317), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [9111] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(707), 1,
      aux_sym_digit_token1,
    STATE(220), 2,
      sym_digit,
      aux_sym_integer_repeat1,
  [9122] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1191), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [9131] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1055), 1,
      anon_sym_COMMA,
    ACTIONS(1319), 1,
      anon_sym_RBRACE,
    STATE(318), 1,
      aux_sym_json_object_repeat1,
  [9144] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1321), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [9153] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1323), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [9162] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1325), 1,
      anon_sym_RBRACE,
    ACTIONS(1327), 1,
      anon_sym_COMMA,
    STATE(318), 1,
      aux_sym_json_object_repeat1,
  [9175] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1309), 1,
      anon_sym_COMMA,
    ACTIONS(1330), 1,
      anon_sym_RBRACK,
    STATE(303), 1,
      aux_sym_json_array_repeat1,
  [9188] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1258), 3,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      aux_sym_hexdigit_token1,
  [9197] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1332), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [9206] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1336), 1,
      anon_sym_POUND,
    ACTIONS(1334), 2,
      anon_sym_SEMI,
      aux_sym_filename_escaped_char_token1,
  [9217] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1055), 1,
      anon_sym_COMMA,
    ACTIONS(1338), 1,
      anon_sym_RBRACE,
    STATE(332), 1,
      aux_sym_json_object_repeat1,
  [9230] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1342), 1,
      anon_sym_POUND,
    ACTIONS(1340), 2,
      anon_sym_SEMI,
      aux_sym_filename_escaped_char_token1,
  [9241] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1055), 1,
      anon_sym_COMMA,
    ACTIONS(1338), 1,
      anon_sym_RBRACE,
    STATE(318), 1,
      aux_sym_json_object_repeat1,
  [9254] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(432), 1,
      sym_boolean,
    ACTIONS(660), 2,
      anon_sym_true,
      anon_sym_false,
  [9265] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(664), 1,
      aux_sym_digit_token1,
    STATE(269), 2,
      sym_digit,
      aux_sym_integer_repeat1,
  [9276] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1344), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [9285] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1248), 1,
      aux_sym_hexdigit_token1,
    STATE(300), 2,
      sym_hexdigit,
      aux_sym_oneline_hex_repeat1,
  [9296] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1309), 1,
      anon_sym_COMMA,
    ACTIONS(1346), 1,
      anon_sym_RBRACK,
    STATE(333), 1,
      aux_sym_json_array_repeat1,
  [9309] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1348), 3,
      anon_sym_BSLASH,
      anon_sym_SLASH,
      aux_sym_regex_text_token1,
  [9318] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1055), 1,
      anon_sym_COMMA,
    ACTIONS(1350), 1,
      anon_sym_RBRACE,
    STATE(318), 1,
      aux_sym_json_object_repeat1,
  [9331] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1309), 1,
      anon_sym_COMMA,
    ACTIONS(1352), 1,
      anon_sym_RBRACK,
    STATE(303), 1,
      aux_sym_json_array_repeat1,
  [9344] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1150), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [9353] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1354), 3,
      anon_sym_BSLASH,
      anon_sym_SLASH,
      aux_sym_regex_text_token1,
  [9362] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(423), 1,
      sym_boolean,
    ACTIONS(660), 2,
      anon_sym_true,
      anon_sym_false,
  [9373] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1356), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [9382] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1358), 1,
      aux_sym_variable_name_token1,
    STATE(115), 1,
      sym_variable_name,
    STATE(484), 1,
      sym_expr,
  [9395] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1248), 1,
      aux_sym_hexdigit_token1,
    STATE(271), 2,
      sym_hexdigit,
      aux_sym_oneline_hex_repeat1,
  [9406] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(424), 1,
      sym_boolean,
    ACTIONS(660), 2,
      anon_sym_true,
      anon_sym_false,
  [9417] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1358), 1,
      aux_sym_variable_name_token1,
    STATE(115), 1,
      sym_variable_name,
    STATE(508), 1,
      sym_expr,
  [9430] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1248), 1,
      aux_sym_hexdigit_token1,
    STATE(264), 2,
      sym_hexdigit,
      aux_sym_oneline_hex_repeat1,
  [9441] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1358), 1,
      aux_sym_variable_name_token1,
    STATE(410), 1,
      sym_variable_name,
    STATE(426), 1,
      sym_variable_definition,
  [9454] = 4,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1152), 1,
      anon_sym_DOT,
    ACTIONS(1360), 1,
      anon_sym_LF,
    STATE(436), 1,
      sym_fraction,
  [9467] = 4,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1362), 1,
      anon_sym_LF,
    ACTIONS(1364), 1,
      aux_sym_file_contenttype_token1,
    STATE(421), 1,
      sym_file_contenttype,
  [9480] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1358), 1,
      aux_sym_variable_name_token1,
    STATE(115), 1,
      sym_variable_name,
    STATE(511), 1,
      sym_expr,
  [9493] = 4,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1152), 1,
      anon_sym_DOT,
    ACTIONS(1366), 1,
      anon_sym_LF,
    STATE(436), 1,
      sym_fraction,
  [9506] = 4,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1152), 1,
      anon_sym_DOT,
    ACTIONS(1368), 1,
      anon_sym_LF,
    STATE(436), 1,
      sym_fraction,
  [9519] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1248), 1,
      aux_sym_hexdigit_token1,
    STATE(263), 2,
      sym_hexdigit,
      aux_sym_oneline_hex_repeat1,
  [9530] = 4,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1152), 1,
      anon_sym_DOT,
    ACTIONS(1370), 1,
      anon_sym_LF,
    STATE(436), 1,
      sym_fraction,
  [9543] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1358), 1,
      aux_sym_variable_name_token1,
    STATE(115), 1,
      sym_variable_name,
    STATE(513), 1,
      sym_expr,
  [9556] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1358), 1,
      aux_sym_variable_name_token1,
    STATE(115), 1,
      sym_variable_name,
    STATE(514), 1,
      sym_expr,
  [9569] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(429), 1,
      sym_boolean,
    ACTIONS(660), 2,
      anon_sym_true,
      anon_sym_false,
  [9580] = 4,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1364), 1,
      aux_sym_file_contenttype_token1,
    ACTIONS(1372), 1,
      anon_sym_LF,
    STATE(413), 1,
      sym_file_contenttype,
  [9593] = 4,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1152), 1,
      anon_sym_DOT,
    ACTIONS(1374), 1,
      anon_sym_LF,
    STATE(436), 1,
      sym_fraction,
  [9606] = 4,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1152), 1,
      anon_sym_DOT,
    ACTIONS(1376), 1,
      anon_sym_LF,
    STATE(436), 1,
      sym_fraction,
  [9619] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(707), 1,
      aux_sym_digit_token1,
    STATE(194), 2,
      sym_digit,
      aux_sym_integer_repeat1,
  [9630] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1358), 1,
      aux_sym_variable_name_token1,
    STATE(115), 1,
      sym_variable_name,
    STATE(515), 1,
      sym_expr,
  [9643] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1358), 1,
      aux_sym_variable_name_token1,
    STATE(115), 1,
      sym_variable_name,
    STATE(516), 1,
      sym_expr,
  [9656] = 4,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LF,
    ACTIONS(1378), 1,
      ts_builtin_sym_end,
    STATE(50), 1,
      aux_sym_hurl_file_repeat2,
  [9669] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1358), 1,
      aux_sym_variable_name_token1,
    STATE(115), 1,
      sym_variable_name,
    STATE(517), 1,
      sym_expr,
  [9682] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1358), 1,
      aux_sym_variable_name_token1,
    STATE(115), 1,
      sym_variable_name,
    STATE(527), 1,
      sym_expr,
  [9695] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(530), 1,
      sym_status,
    ACTIONS(1380), 2,
      aux_sym_status_token1,
      anon_sym_STAR,
  [9706] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1358), 1,
      aux_sym_variable_name_token1,
    STATE(115), 1,
      sym_variable_name,
    STATE(518), 1,
      sym_expr,
  [9719] = 4,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LF,
    ACTIONS(666), 1,
      ts_builtin_sym_end,
    STATE(50), 1,
      aux_sym_hurl_file_repeat2,
  [9732] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1358), 1,
      aux_sym_variable_name_token1,
    STATE(115), 1,
      sym_variable_name,
    STATE(519), 1,
      sym_expr,
  [9745] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1305), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [9753] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1248), 1,
      aux_sym_hexdigit_token1,
    STATE(389), 1,
      sym_hexdigit,
  [9763] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1382), 2,
      aux_sym_status_token1,
      anon_sym_STAR,
  [9771] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1384), 1,
      anon_sym_LF,
    STATE(2), 1,
      aux_sym_hurl_file_repeat2,
  [9781] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1386), 1,
      anon_sym_LBRACE,
    STATE(274), 1,
      sym_unicode_char,
  [9791] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(656), 1,
      anon_sym_DQUOTE,
    STATE(184), 1,
      sym_quoted_string,
  [9801] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(656), 1,
      anon_sym_DQUOTE,
    STATE(188), 1,
      sym_quoted_string,
  [9811] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1388), 1,
      aux_sym_hexdigit_token1,
    STATE(259), 1,
      sym_hexdigit,
  [9821] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(656), 1,
      anon_sym_DQUOTE,
    STATE(189), 1,
      sym_quoted_string,
  [9831] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(656), 1,
      anon_sym_DQUOTE,
    STATE(193), 1,
      sym_quoted_string,
  [9841] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(656), 1,
      anon_sym_DQUOTE,
    STATE(195), 1,
      sym_quoted_string,
  [9851] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1390), 1,
      anon_sym_LF,
    STATE(405), 1,
      aux_sym_query_string_params_section_repeat1,
  [9861] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1390), 1,
      anon_sym_LF,
    STATE(404), 1,
      aux_sym_query_string_params_section_repeat1,
  [9871] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1392), 1,
      anon_sym_LF,
    STATE(402), 1,
      aux_sym_query_string_params_section_repeat1,
  [9881] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1392), 1,
      anon_sym_LF,
    STATE(404), 1,
      aux_sym_query_string_params_section_repeat1,
  [9891] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1394), 1,
      anon_sym_LF,
    STATE(393), 1,
      aux_sym_multipart_form_data_section_repeat1,
  [9901] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1396), 1,
      anon_sym_COLON,
    ACTIONS(1398), 1,
      anon_sym_COLON2,
  [9911] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1394), 1,
      anon_sym_LF,
    STATE(391), 1,
      aux_sym_multipart_form_data_section_repeat1,
  [9921] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1400), 1,
      anon_sym_LF,
    STATE(390), 1,
      aux_sym_query_string_params_section_repeat1,
  [9931] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1400), 1,
      anon_sym_LF,
    STATE(404), 1,
      aux_sym_query_string_params_section_repeat1,
  [9941] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1402), 1,
      anon_sym_LBRACE,
    STATE(252), 1,
      sym_unicode_char,
  [9951] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1325), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [9959] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1248), 1,
      aux_sym_hexdigit_token1,
    STATE(403), 1,
      sym_hexdigit,
  [9969] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1404), 1,
      anon_sym_LF,
    STATE(404), 1,
      aux_sym_query_string_params_section_repeat1,
  [9979] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1406), 1,
      anon_sym_LF,
    STATE(391), 1,
      aux_sym_multipart_form_data_section_repeat1,
  [9989] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1409), 1,
      anon_sym_file_COMMA,
    STATE(434), 1,
      sym_file_value,
  [9999] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1411), 1,
      anon_sym_LF,
    STATE(391), 1,
      aux_sym_multipart_form_data_section_repeat1,
  [10009] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1413), 1,
      anon_sym_LBRACE,
    STATE(255), 1,
      sym_unicode_char,
  [10019] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1415), 1,
      anon_sym_LBRACE,
    STATE(258), 1,
      sym_unicode_char,
  [10029] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1272), 1,
      anon_sym_DQUOTE,
    STATE(89), 1,
      sym_quoted_string,
  [10039] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1272), 1,
      anon_sym_DQUOTE,
    STATE(88), 1,
      sym_quoted_string,
  [10049] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1272), 1,
      anon_sym_DQUOTE,
    STATE(78), 1,
      sym_quoted_string,
  [10059] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1272), 1,
      anon_sym_DQUOTE,
    STATE(76), 1,
      sym_quoted_string,
  [10069] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(656), 1,
      anon_sym_DQUOTE,
    STATE(466), 1,
      sym_quoted_string,
  [10079] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1272), 1,
      anon_sym_DQUOTE,
    STATE(83), 1,
      sym_quoted_string,
  [10089] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1417), 1,
      anon_sym_LF,
    STATE(404), 1,
      aux_sym_query_string_params_section_repeat1,
  [10099] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1248), 1,
      aux_sym_hexdigit_token1,
    STATE(374), 1,
      sym_hexdigit,
  [10109] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1419), 1,
      anon_sym_LF,
    STATE(404), 1,
      aux_sym_query_string_params_section_repeat1,
  [10119] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1422), 1,
      anon_sym_LF,
    STATE(404), 1,
      aux_sym_query_string_params_section_repeat1,
  [10129] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1424), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [10137] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1268), 1,
      anon_sym_LF,
  [10144] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1426), 1,
      anon_sym_LF,
  [10151] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1428), 1,
      anon_sym_LF,
  [10158] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1430), 1,
      anon_sym_EQ,
  [10165] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1432), 1,
      anon_sym_LF,
  [10172] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1434), 1,
      anon_sym_LF,
  [10179] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1362), 1,
      anon_sym_LF,
  [10186] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1436), 1,
      anon_sym_LF,
  [10193] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1438), 1,
      anon_sym_LF,
  [10200] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1360), 1,
      anon_sym_LF,
  [10207] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1440), 1,
      anon_sym_LF,
  [10214] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1442), 1,
      anon_sym_LF,
  [10221] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1444), 1,
      anon_sym_LF,
  [10228] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1446), 1,
      anon_sym_LF,
  [10235] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1448), 1,
      anon_sym_LF,
  [10242] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1450), 1,
      anon_sym_LF,
  [10249] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1452), 1,
      anon_sym_LF,
  [10256] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1454), 1,
      anon_sym_LF,
  [10263] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1315), 1,
      anon_sym_LF,
  [10270] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1456), 1,
      anon_sym_LF,
  [10277] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1458), 1,
      anon_sym_LF,
  [10284] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1460), 1,
      anon_sym_LF,
  [10291] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1462), 1,
      anon_sym_LF,
  [10298] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1464), 1,
      anon_sym_LF,
  [10305] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1466), 1,
      anon_sym_LF,
  [10312] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1468), 1,
      anon_sym_LF,
  [10319] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1470), 1,
      anon_sym_LF,
  [10326] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1472), 1,
      anon_sym_LF,
  [10333] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1474), 1,
      anon_sym_COLON2,
  [10340] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1476), 1,
      anon_sym_LF,
  [10347] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1307), 1,
      anon_sym_LF,
  [10354] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1478), 1,
      anon_sym_LF,
  [10361] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1480), 1,
      anon_sym_LF,
  [10368] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1482), 1,
      anon_sym_LF,
  [10375] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1484), 1,
      anon_sym_LF,
  [10382] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1486), 1,
      anon_sym_SLASH,
  [10389] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1488), 1,
      aux_sym_regex_escaped_char_token1,
  [10396] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1317), 1,
      anon_sym_LF,
  [10403] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1300), 1,
      anon_sym_LF,
  [10410] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1332), 1,
      anon_sym_LF,
  [10417] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1344), 1,
      anon_sym_LF,
  [10424] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1490), 1,
      anon_sym_LF,
  [10431] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1492), 1,
      anon_sym_LF,
  [10438] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1494), 1,
      anon_sym_LF,
  [10445] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1496), 1,
      anon_sym_LF,
  [10452] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1498), 1,
      anon_sym_LF,
  [10459] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1500), 1,
      anon_sym_LF,
  [10466] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1502), 1,
      anon_sym_LF,
  [10473] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1504), 1,
      anon_sym_COLON2,
  [10480] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1506), 1,
      anon_sym_COLON2,
  [10487] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1508), 1,
      anon_sym_COLON2,
  [10494] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1510), 1,
      anon_sym_COLON2,
  [10501] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1512), 1,
      anon_sym_COLON2,
  [10508] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1514), 1,
      anon_sym_COLON2,
  [10515] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1516), 1,
      anon_sym_COLON2,
  [10522] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1518), 1,
      anon_sym_COLON2,
  [10529] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1520), 1,
      anon_sym_COLON2,
  [10536] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1522), 1,
      anon_sym_COLON2,
  [10543] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1524), 1,
      anon_sym_LF,
  [10550] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1526), 1,
      anon_sym_LF,
  [10557] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1528), 1,
      anon_sym_LF,
  [10564] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1530), 1,
      anon_sym_LF,
  [10571] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1370), 1,
      anon_sym_LF,
  [10578] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1532), 1,
      anon_sym_LF,
  [10585] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1376), 1,
      anon_sym_LF,
  [10592] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1368), 1,
      anon_sym_LF,
  [10599] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1374), 1,
      anon_sym_LF,
  [10606] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1534), 1,
      anon_sym_LF,
  [10613] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1536), 1,
      anon_sym_LF,
  [10620] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1538), 1,
      anon_sym_LF,
  [10627] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1540), 1,
      ts_builtin_sym_end,
  [10634] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1150), 1,
      anon_sym_LF,
  [10641] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1542), 1,
      anon_sym_COLON2,
  [10648] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1544), 1,
      anon_sym_COLON2,
  [10655] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1356), 1,
      anon_sym_LF,
  [10662] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1546), 1,
      anon_sym_LF,
  [10669] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1548), 1,
      anon_sym_LF,
  [10676] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1550), 1,
      anon_sym_RBRACE_RBRACE,
  [10683] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1552), 1,
      aux_sym_oneline_string_text_token2,
  [10690] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1554), 1,
      aux_sym_key_string_escaped_char_token1,
  [10697] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1556), 1,
      anon_sym_LF,
  [10704] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1558), 1,
      anon_sym_LF,
  [10711] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1254), 1,
      anon_sym_LF,
  [10718] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1560), 1,
      anon_sym_LF,
  [10725] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1562), 1,
      anon_sym_SEMI,
  [10732] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1564), 1,
      anon_sym_GT,
  [10739] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1566), 1,
      anon_sym_SEMI,
  [10746] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1568), 1,
      anon_sym_LF,
  [10753] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1191), 1,
      anon_sym_LF,
  [10760] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1396), 1,
      anon_sym_COLON,
  [10767] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1570), 1,
      anon_sym_LF,
  [10774] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1572), 1,
      anon_sym_LF,
  [10781] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1574), 1,
      anon_sym_LF,
  [10788] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1321), 1,
      anon_sym_LF,
  [10795] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1576), 1,
      anon_sym_SLASH,
  [10802] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1366), 1,
      anon_sym_LF,
  [10809] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1578), 1,
      anon_sym_LF,
  [10816] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1580), 1,
      anon_sym_LF,
  [10823] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1582), 1,
      anon_sym_LF,
  [10830] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1584), 1,
      anon_sym_LF,
  [10837] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1323), 1,
      anon_sym_LF,
  [10844] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1586), 1,
      anon_sym_RBRACE_RBRACE,
  [10851] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1588), 1,
      aux_sym_key_string_escaped_char_token1,
  [10858] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1590), 1,
      aux_sym_key_string_escaped_char_token1,
  [10865] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1592), 1,
      anon_sym_RBRACE_RBRACE,
  [10872] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1594), 1,
      aux_sym_oneline_base64_token1,
  [10879] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1596), 1,
      anon_sym_RBRACE_RBRACE,
  [10886] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1598), 1,
      anon_sym_RBRACE_RBRACE,
  [10893] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1600), 1,
      anon_sym_RBRACE_RBRACE,
  [10900] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1602), 1,
      anon_sym_RBRACE_RBRACE,
  [10907] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1604), 1,
      anon_sym_RBRACE_RBRACE,
  [10914] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1606), 1,
      anon_sym_RBRACE_RBRACE,
  [10921] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1608), 1,
      anon_sym_RBRACE_RBRACE,
  [10928] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1610), 1,
      anon_sym_To_COMMABe_COMMADefined,
  [10935] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1612), 1,
      anon_sym_LF,
  [10942] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1614), 1,
      anon_sym_LF,
  [10949] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1616), 1,
      anon_sym_LF,
  [10956] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1618), 1,
      anon_sym_LF,
  [10963] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1620), 1,
      anon_sym_LF,
  [10970] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1622), 1,
      anon_sym_LF,
  [10977] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1624), 1,
      anon_sym_RBRACE_RBRACE,
  [10984] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1626), 1,
      aux_sym_variable_name_token2,
  [10991] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1628), 1,
      anon_sym_SEMI,
  [10998] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1630), 1,
      anon_sym_LF,
  [11005] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1632), 1,
      anon_sym_LF,
  [11012] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1634), 1,
      anon_sym_LF,
  [11019] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1636), 1,
      anon_sym_LF,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(14)] = 0,
  [SMALL_STATE(15)] = 103,
  [SMALL_STATE(16)] = 206,
  [SMALL_STATE(17)] = 309,
  [SMALL_STATE(18)] = 432,
  [SMALL_STATE(19)] = 555,
  [SMALL_STATE(20)] = 666,
  [SMALL_STATE(21)] = 777,
  [SMALL_STATE(22)] = 854,
  [SMALL_STATE(23)] = 931,
  [SMALL_STATE(24)] = 1008,
  [SMALL_STATE(25)] = 1085,
  [SMALL_STATE(26)] = 1145,
  [SMALL_STATE(27)] = 1205,
  [SMALL_STATE(28)] = 1265,
  [SMALL_STATE(29)] = 1325,
  [SMALL_STATE(30)] = 1385,
  [SMALL_STATE(31)] = 1445,
  [SMALL_STATE(32)] = 1505,
  [SMALL_STATE(33)] = 1565,
  [SMALL_STATE(34)] = 1625,
  [SMALL_STATE(35)] = 1685,
  [SMALL_STATE(36)] = 1745,
  [SMALL_STATE(37)] = 1805,
  [SMALL_STATE(38)] = 1878,
  [SMALL_STATE(39)] = 1951,
  [SMALL_STATE(40)] = 2024,
  [SMALL_STATE(41)] = 2097,
  [SMALL_STATE(42)] = 2170,
  [SMALL_STATE(43)] = 2243,
  [SMALL_STATE(44)] = 2316,
  [SMALL_STATE(45)] = 2389,
  [SMALL_STATE(46)] = 2462,
  [SMALL_STATE(47)] = 2536,
  [SMALL_STATE(48)] = 2591,
  [SMALL_STATE(49)] = 2646,
  [SMALL_STATE(50)] = 2715,
  [SMALL_STATE(51)] = 2772,
  [SMALL_STATE(52)] = 2838,
  [SMALL_STATE(53)] = 2904,
  [SMALL_STATE(54)] = 2970,
  [SMALL_STATE(55)] = 3022,
  [SMALL_STATE(56)] = 3072,
  [SMALL_STATE(57)] = 3122,
  [SMALL_STATE(58)] = 3205,
  [SMALL_STATE(59)] = 3272,
  [SMALL_STATE(60)] = 3326,
  [SMALL_STATE(61)] = 3370,
  [SMALL_STATE(62)] = 3414,
  [SMALL_STATE(63)] = 3458,
  [SMALL_STATE(64)] = 3500,
  [SMALL_STATE(65)] = 3540,
  [SMALL_STATE(66)] = 3580,
  [SMALL_STATE(67)] = 3620,
  [SMALL_STATE(68)] = 3660,
  [SMALL_STATE(69)] = 3700,
  [SMALL_STATE(70)] = 3740,
  [SMALL_STATE(71)] = 3780,
  [SMALL_STATE(72)] = 3820,
  [SMALL_STATE(73)] = 3860,
  [SMALL_STATE(74)] = 3900,
  [SMALL_STATE(75)] = 3940,
  [SMALL_STATE(76)] = 3980,
  [SMALL_STATE(77)] = 4019,
  [SMALL_STATE(78)] = 4058,
  [SMALL_STATE(79)] = 4097,
  [SMALL_STATE(80)] = 4136,
  [SMALL_STATE(81)] = 4175,
  [SMALL_STATE(82)] = 4214,
  [SMALL_STATE(83)] = 4253,
  [SMALL_STATE(84)] = 4292,
  [SMALL_STATE(85)] = 4331,
  [SMALL_STATE(86)] = 4370,
  [SMALL_STATE(87)] = 4409,
  [SMALL_STATE(88)] = 4448,
  [SMALL_STATE(89)] = 4487,
  [SMALL_STATE(90)] = 4526,
  [SMALL_STATE(91)] = 4587,
  [SMALL_STATE(92)] = 4627,
  [SMALL_STATE(93)] = 4680,
  [SMALL_STATE(94)] = 4733,
  [SMALL_STATE(95)] = 4786,
  [SMALL_STATE(96)] = 4827,
  [SMALL_STATE(97)] = 4879,
  [SMALL_STATE(98)] = 4909,
  [SMALL_STATE(99)] = 4939,
  [SMALL_STATE(100)] = 4969,
  [SMALL_STATE(101)] = 4999,
  [SMALL_STATE(102)] = 5051,
  [SMALL_STATE(103)] = 5081,
  [SMALL_STATE(104)] = 5117,
  [SMALL_STATE(105)] = 5162,
  [SMALL_STATE(106)] = 5207,
  [SMALL_STATE(107)] = 5252,
  [SMALL_STATE(108)] = 5297,
  [SMALL_STATE(109)] = 5323,
  [SMALL_STATE(110)] = 5349,
  [SMALL_STATE(111)] = 5375,
  [SMALL_STATE(112)] = 5403,
  [SMALL_STATE(113)] = 5429,
  [SMALL_STATE(114)] = 5455,
  [SMALL_STATE(115)] = 5496,
  [SMALL_STATE(116)] = 5537,
  [SMALL_STATE(117)] = 5578,
  [SMALL_STATE(118)] = 5619,
  [SMALL_STATE(119)] = 5660,
  [SMALL_STATE(120)] = 5698,
  [SMALL_STATE(121)] = 5733,
  [SMALL_STATE(122)] = 5767,
  [SMALL_STATE(123)] = 5801,
  [SMALL_STATE(124)] = 5835,
  [SMALL_STATE(125)] = 5867,
  [SMALL_STATE(126)] = 5894,
  [SMALL_STATE(127)] = 5923,
  [SMALL_STATE(128)] = 5952,
  [SMALL_STATE(129)] = 5979,
  [SMALL_STATE(130)] = 6008,
  [SMALL_STATE(131)] = 6035,
  [SMALL_STATE(132)] = 6062,
  [SMALL_STATE(133)] = 6091,
  [SMALL_STATE(134)] = 6120,
  [SMALL_STATE(135)] = 6149,
  [SMALL_STATE(136)] = 6178,
  [SMALL_STATE(137)] = 6205,
  [SMALL_STATE(138)] = 6231,
  [SMALL_STATE(139)] = 6259,
  [SMALL_STATE(140)] = 6287,
  [SMALL_STATE(141)] = 6315,
  [SMALL_STATE(142)] = 6343,
  [SMALL_STATE(143)] = 6369,
  [SMALL_STATE(144)] = 6397,
  [SMALL_STATE(145)] = 6423,
  [SMALL_STATE(146)] = 6451,
  [SMALL_STATE(147)] = 6479,
  [SMALL_STATE(148)] = 6504,
  [SMALL_STATE(149)] = 6523,
  [SMALL_STATE(150)] = 6548,
  [SMALL_STATE(151)] = 6573,
  [SMALL_STATE(152)] = 6598,
  [SMALL_STATE(153)] = 6617,
  [SMALL_STATE(154)] = 6642,
  [SMALL_STATE(155)] = 6667,
  [SMALL_STATE(156)] = 6692,
  [SMALL_STATE(157)] = 6717,
  [SMALL_STATE(158)] = 6742,
  [SMALL_STATE(159)] = 6767,
  [SMALL_STATE(160)] = 6792,
  [SMALL_STATE(161)] = 6811,
  [SMALL_STATE(162)] = 6836,
  [SMALL_STATE(163)] = 6851,
  [SMALL_STATE(164)] = 6876,
  [SMALL_STATE(165)] = 6892,
  [SMALL_STATE(166)] = 6908,
  [SMALL_STATE(167)] = 6924,
  [SMALL_STATE(168)] = 6940,
  [SMALL_STATE(169)] = 6956,
  [SMALL_STATE(170)] = 6972,
  [SMALL_STATE(171)] = 6988,
  [SMALL_STATE(172)] = 7012,
  [SMALL_STATE(173)] = 7036,
  [SMALL_STATE(174)] = 7052,
  [SMALL_STATE(175)] = 7068,
  [SMALL_STATE(176)] = 7092,
  [SMALL_STATE(177)] = 7112,
  [SMALL_STATE(178)] = 7128,
  [SMALL_STATE(179)] = 7144,
  [SMALL_STATE(180)] = 7164,
  [SMALL_STATE(181)] = 7180,
  [SMALL_STATE(182)] = 7202,
  [SMALL_STATE(183)] = 7218,
  [SMALL_STATE(184)] = 7234,
  [SMALL_STATE(185)] = 7250,
  [SMALL_STATE(186)] = 7266,
  [SMALL_STATE(187)] = 7282,
  [SMALL_STATE(188)] = 7298,
  [SMALL_STATE(189)] = 7314,
  [SMALL_STATE(190)] = 7330,
  [SMALL_STATE(191)] = 7346,
  [SMALL_STATE(192)] = 7362,
  [SMALL_STATE(193)] = 7378,
  [SMALL_STATE(194)] = 7394,
  [SMALL_STATE(195)] = 7412,
  [SMALL_STATE(196)] = 7428,
  [SMALL_STATE(197)] = 7452,
  [SMALL_STATE(198)] = 7468,
  [SMALL_STATE(199)] = 7484,
  [SMALL_STATE(200)] = 7500,
  [SMALL_STATE(201)] = 7518,
  [SMALL_STATE(202)] = 7543,
  [SMALL_STATE(203)] = 7562,
  [SMALL_STATE(204)] = 7583,
  [SMALL_STATE(205)] = 7604,
  [SMALL_STATE(206)] = 7625,
  [SMALL_STATE(207)] = 7646,
  [SMALL_STATE(208)] = 7663,
  [SMALL_STATE(209)] = 7688,
  [SMALL_STATE(210)] = 7709,
  [SMALL_STATE(211)] = 7730,
  [SMALL_STATE(212)] = 7747,
  [SMALL_STATE(213)] = 7766,
  [SMALL_STATE(214)] = 7783,
  [SMALL_STATE(215)] = 7804,
  [SMALL_STATE(216)] = 7817,
  [SMALL_STATE(217)] = 7838,
  [SMALL_STATE(218)] = 7854,
  [SMALL_STATE(219)] = 7872,
  [SMALL_STATE(220)] = 7888,
  [SMALL_STATE(221)] = 7904,
  [SMALL_STATE(222)] = 7922,
  [SMALL_STATE(223)] = 7940,
  [SMALL_STATE(224)] = 7958,
  [SMALL_STATE(225)] = 7972,
  [SMALL_STATE(226)] = 7990,
  [SMALL_STATE(227)] = 8008,
  [SMALL_STATE(228)] = 8026,
  [SMALL_STATE(229)] = 8040,
  [SMALL_STATE(230)] = 8056,
  [SMALL_STATE(231)] = 8070,
  [SMALL_STATE(232)] = 8090,
  [SMALL_STATE(233)] = 8104,
  [SMALL_STATE(234)] = 8122,
  [SMALL_STATE(235)] = 8140,
  [SMALL_STATE(236)] = 8153,
  [SMALL_STATE(237)] = 8166,
  [SMALL_STATE(238)] = 8179,
  [SMALL_STATE(239)] = 8194,
  [SMALL_STATE(240)] = 8207,
  [SMALL_STATE(241)] = 8218,
  [SMALL_STATE(242)] = 8233,
  [SMALL_STATE(243)] = 8246,
  [SMALL_STATE(244)] = 8259,
  [SMALL_STATE(245)] = 8272,
  [SMALL_STATE(246)] = 8287,
  [SMALL_STATE(247)] = 8300,
  [SMALL_STATE(248)] = 8315,
  [SMALL_STATE(249)] = 8330,
  [SMALL_STATE(250)] = 8347,
  [SMALL_STATE(251)] = 8362,
  [SMALL_STATE(252)] = 8379,
  [SMALL_STATE(253)] = 8392,
  [SMALL_STATE(254)] = 8404,
  [SMALL_STATE(255)] = 8416,
  [SMALL_STATE(256)] = 8428,
  [SMALL_STATE(257)] = 8440,
  [SMALL_STATE(258)] = 8454,
  [SMALL_STATE(259)] = 8464,
  [SMALL_STATE(260)] = 8476,
  [SMALL_STATE(261)] = 8490,
  [SMALL_STATE(262)] = 8504,
  [SMALL_STATE(263)] = 8518,
  [SMALL_STATE(264)] = 8532,
  [SMALL_STATE(265)] = 8546,
  [SMALL_STATE(266)] = 8560,
  [SMALL_STATE(267)] = 8570,
  [SMALL_STATE(268)] = 8584,
  [SMALL_STATE(269)] = 8594,
  [SMALL_STATE(270)] = 8608,
  [SMALL_STATE(271)] = 8620,
  [SMALL_STATE(272)] = 8634,
  [SMALL_STATE(273)] = 8644,
  [SMALL_STATE(274)] = 8654,
  [SMALL_STATE(275)] = 8666,
  [SMALL_STATE(276)] = 8676,
  [SMALL_STATE(277)] = 8686,
  [SMALL_STATE(278)] = 8698,
  [SMALL_STATE(279)] = 8710,
  [SMALL_STATE(280)] = 8724,
  [SMALL_STATE(281)] = 8738,
  [SMALL_STATE(282)] = 8752,
  [SMALL_STATE(283)] = 8766,
  [SMALL_STATE(284)] = 8780,
  [SMALL_STATE(285)] = 8792,
  [SMALL_STATE(286)] = 8804,
  [SMALL_STATE(287)] = 8814,
  [SMALL_STATE(288)] = 8824,
  [SMALL_STATE(289)] = 8834,
  [SMALL_STATE(290)] = 8844,
  [SMALL_STATE(291)] = 8854,
  [SMALL_STATE(292)] = 8866,
  [SMALL_STATE(293)] = 8878,
  [SMALL_STATE(294)] = 8890,
  [SMALL_STATE(295)] = 8906,
  [SMALL_STATE(296)] = 8918,
  [SMALL_STATE(297)] = 8932,
  [SMALL_STATE(298)] = 8942,
  [SMALL_STATE(299)] = 8952,
  [SMALL_STATE(300)] = 8962,
  [SMALL_STATE(301)] = 8976,
  [SMALL_STATE(302)] = 8988,
  [SMALL_STATE(303)] = 9001,
  [SMALL_STATE(304)] = 9014,
  [SMALL_STATE(305)] = 9023,
  [SMALL_STATE(306)] = 9034,
  [SMALL_STATE(307)] = 9047,
  [SMALL_STATE(308)] = 9060,
  [SMALL_STATE(309)] = 9069,
  [SMALL_STATE(310)] = 9082,
  [SMALL_STATE(311)] = 9093,
  [SMALL_STATE(312)] = 9102,
  [SMALL_STATE(313)] = 9111,
  [SMALL_STATE(314)] = 9122,
  [SMALL_STATE(315)] = 9131,
  [SMALL_STATE(316)] = 9144,
  [SMALL_STATE(317)] = 9153,
  [SMALL_STATE(318)] = 9162,
  [SMALL_STATE(319)] = 9175,
  [SMALL_STATE(320)] = 9188,
  [SMALL_STATE(321)] = 9197,
  [SMALL_STATE(322)] = 9206,
  [SMALL_STATE(323)] = 9217,
  [SMALL_STATE(324)] = 9230,
  [SMALL_STATE(325)] = 9241,
  [SMALL_STATE(326)] = 9254,
  [SMALL_STATE(327)] = 9265,
  [SMALL_STATE(328)] = 9276,
  [SMALL_STATE(329)] = 9285,
  [SMALL_STATE(330)] = 9296,
  [SMALL_STATE(331)] = 9309,
  [SMALL_STATE(332)] = 9318,
  [SMALL_STATE(333)] = 9331,
  [SMALL_STATE(334)] = 9344,
  [SMALL_STATE(335)] = 9353,
  [SMALL_STATE(336)] = 9362,
  [SMALL_STATE(337)] = 9373,
  [SMALL_STATE(338)] = 9382,
  [SMALL_STATE(339)] = 9395,
  [SMALL_STATE(340)] = 9406,
  [SMALL_STATE(341)] = 9417,
  [SMALL_STATE(342)] = 9430,
  [SMALL_STATE(343)] = 9441,
  [SMALL_STATE(344)] = 9454,
  [SMALL_STATE(345)] = 9467,
  [SMALL_STATE(346)] = 9480,
  [SMALL_STATE(347)] = 9493,
  [SMALL_STATE(348)] = 9506,
  [SMALL_STATE(349)] = 9519,
  [SMALL_STATE(350)] = 9530,
  [SMALL_STATE(351)] = 9543,
  [SMALL_STATE(352)] = 9556,
  [SMALL_STATE(353)] = 9569,
  [SMALL_STATE(354)] = 9580,
  [SMALL_STATE(355)] = 9593,
  [SMALL_STATE(356)] = 9606,
  [SMALL_STATE(357)] = 9619,
  [SMALL_STATE(358)] = 9630,
  [SMALL_STATE(359)] = 9643,
  [SMALL_STATE(360)] = 9656,
  [SMALL_STATE(361)] = 9669,
  [SMALL_STATE(362)] = 9682,
  [SMALL_STATE(363)] = 9695,
  [SMALL_STATE(364)] = 9706,
  [SMALL_STATE(365)] = 9719,
  [SMALL_STATE(366)] = 9732,
  [SMALL_STATE(367)] = 9745,
  [SMALL_STATE(368)] = 9753,
  [SMALL_STATE(369)] = 9763,
  [SMALL_STATE(370)] = 9771,
  [SMALL_STATE(371)] = 9781,
  [SMALL_STATE(372)] = 9791,
  [SMALL_STATE(373)] = 9801,
  [SMALL_STATE(374)] = 9811,
  [SMALL_STATE(375)] = 9821,
  [SMALL_STATE(376)] = 9831,
  [SMALL_STATE(377)] = 9841,
  [SMALL_STATE(378)] = 9851,
  [SMALL_STATE(379)] = 9861,
  [SMALL_STATE(380)] = 9871,
  [SMALL_STATE(381)] = 9881,
  [SMALL_STATE(382)] = 9891,
  [SMALL_STATE(383)] = 9901,
  [SMALL_STATE(384)] = 9911,
  [SMALL_STATE(385)] = 9921,
  [SMALL_STATE(386)] = 9931,
  [SMALL_STATE(387)] = 9941,
  [SMALL_STATE(388)] = 9951,
  [SMALL_STATE(389)] = 9959,
  [SMALL_STATE(390)] = 9969,
  [SMALL_STATE(391)] = 9979,
  [SMALL_STATE(392)] = 9989,
  [SMALL_STATE(393)] = 9999,
  [SMALL_STATE(394)] = 10009,
  [SMALL_STATE(395)] = 10019,
  [SMALL_STATE(396)] = 10029,
  [SMALL_STATE(397)] = 10039,
  [SMALL_STATE(398)] = 10049,
  [SMALL_STATE(399)] = 10059,
  [SMALL_STATE(400)] = 10069,
  [SMALL_STATE(401)] = 10079,
  [SMALL_STATE(402)] = 10089,
  [SMALL_STATE(403)] = 10099,
  [SMALL_STATE(404)] = 10109,
  [SMALL_STATE(405)] = 10119,
  [SMALL_STATE(406)] = 10129,
  [SMALL_STATE(407)] = 10137,
  [SMALL_STATE(408)] = 10144,
  [SMALL_STATE(409)] = 10151,
  [SMALL_STATE(410)] = 10158,
  [SMALL_STATE(411)] = 10165,
  [SMALL_STATE(412)] = 10172,
  [SMALL_STATE(413)] = 10179,
  [SMALL_STATE(414)] = 10186,
  [SMALL_STATE(415)] = 10193,
  [SMALL_STATE(416)] = 10200,
  [SMALL_STATE(417)] = 10207,
  [SMALL_STATE(418)] = 10214,
  [SMALL_STATE(419)] = 10221,
  [SMALL_STATE(420)] = 10228,
  [SMALL_STATE(421)] = 10235,
  [SMALL_STATE(422)] = 10242,
  [SMALL_STATE(423)] = 10249,
  [SMALL_STATE(424)] = 10256,
  [SMALL_STATE(425)] = 10263,
  [SMALL_STATE(426)] = 10270,
  [SMALL_STATE(427)] = 10277,
  [SMALL_STATE(428)] = 10284,
  [SMALL_STATE(429)] = 10291,
  [SMALL_STATE(430)] = 10298,
  [SMALL_STATE(431)] = 10305,
  [SMALL_STATE(432)] = 10312,
  [SMALL_STATE(433)] = 10319,
  [SMALL_STATE(434)] = 10326,
  [SMALL_STATE(435)] = 10333,
  [SMALL_STATE(436)] = 10340,
  [SMALL_STATE(437)] = 10347,
  [SMALL_STATE(438)] = 10354,
  [SMALL_STATE(439)] = 10361,
  [SMALL_STATE(440)] = 10368,
  [SMALL_STATE(441)] = 10375,
  [SMALL_STATE(442)] = 10382,
  [SMALL_STATE(443)] = 10389,
  [SMALL_STATE(444)] = 10396,
  [SMALL_STATE(445)] = 10403,
  [SMALL_STATE(446)] = 10410,
  [SMALL_STATE(447)] = 10417,
  [SMALL_STATE(448)] = 10424,
  [SMALL_STATE(449)] = 10431,
  [SMALL_STATE(450)] = 10438,
  [SMALL_STATE(451)] = 10445,
  [SMALL_STATE(452)] = 10452,
  [SMALL_STATE(453)] = 10459,
  [SMALL_STATE(454)] = 10466,
  [SMALL_STATE(455)] = 10473,
  [SMALL_STATE(456)] = 10480,
  [SMALL_STATE(457)] = 10487,
  [SMALL_STATE(458)] = 10494,
  [SMALL_STATE(459)] = 10501,
  [SMALL_STATE(460)] = 10508,
  [SMALL_STATE(461)] = 10515,
  [SMALL_STATE(462)] = 10522,
  [SMALL_STATE(463)] = 10529,
  [SMALL_STATE(464)] = 10536,
  [SMALL_STATE(465)] = 10543,
  [SMALL_STATE(466)] = 10550,
  [SMALL_STATE(467)] = 10557,
  [SMALL_STATE(468)] = 10564,
  [SMALL_STATE(469)] = 10571,
  [SMALL_STATE(470)] = 10578,
  [SMALL_STATE(471)] = 10585,
  [SMALL_STATE(472)] = 10592,
  [SMALL_STATE(473)] = 10599,
  [SMALL_STATE(474)] = 10606,
  [SMALL_STATE(475)] = 10613,
  [SMALL_STATE(476)] = 10620,
  [SMALL_STATE(477)] = 10627,
  [SMALL_STATE(478)] = 10634,
  [SMALL_STATE(479)] = 10641,
  [SMALL_STATE(480)] = 10648,
  [SMALL_STATE(481)] = 10655,
  [SMALL_STATE(482)] = 10662,
  [SMALL_STATE(483)] = 10669,
  [SMALL_STATE(484)] = 10676,
  [SMALL_STATE(485)] = 10683,
  [SMALL_STATE(486)] = 10690,
  [SMALL_STATE(487)] = 10697,
  [SMALL_STATE(488)] = 10704,
  [SMALL_STATE(489)] = 10711,
  [SMALL_STATE(490)] = 10718,
  [SMALL_STATE(491)] = 10725,
  [SMALL_STATE(492)] = 10732,
  [SMALL_STATE(493)] = 10739,
  [SMALL_STATE(494)] = 10746,
  [SMALL_STATE(495)] = 10753,
  [SMALL_STATE(496)] = 10760,
  [SMALL_STATE(497)] = 10767,
  [SMALL_STATE(498)] = 10774,
  [SMALL_STATE(499)] = 10781,
  [SMALL_STATE(500)] = 10788,
  [SMALL_STATE(501)] = 10795,
  [SMALL_STATE(502)] = 10802,
  [SMALL_STATE(503)] = 10809,
  [SMALL_STATE(504)] = 10816,
  [SMALL_STATE(505)] = 10823,
  [SMALL_STATE(506)] = 10830,
  [SMALL_STATE(507)] = 10837,
  [SMALL_STATE(508)] = 10844,
  [SMALL_STATE(509)] = 10851,
  [SMALL_STATE(510)] = 10858,
  [SMALL_STATE(511)] = 10865,
  [SMALL_STATE(512)] = 10872,
  [SMALL_STATE(513)] = 10879,
  [SMALL_STATE(514)] = 10886,
  [SMALL_STATE(515)] = 10893,
  [SMALL_STATE(516)] = 10900,
  [SMALL_STATE(517)] = 10907,
  [SMALL_STATE(518)] = 10914,
  [SMALL_STATE(519)] = 10921,
  [SMALL_STATE(520)] = 10928,
  [SMALL_STATE(521)] = 10935,
  [SMALL_STATE(522)] = 10942,
  [SMALL_STATE(523)] = 10949,
  [SMALL_STATE(524)] = 10956,
  [SMALL_STATE(525)] = 10963,
  [SMALL_STATE(526)] = 10970,
  [SMALL_STATE(527)] = 10977,
  [SMALL_STATE(528)] = 10984,
  [SMALL_STATE(529)] = 10991,
  [SMALL_STATE(530)] = 10998,
  [SMALL_STATE(531)] = 11005,
  [SMALL_STATE(532)] = 11012,
  [SMALL_STATE(533)] = 11019,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hurl_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(254),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 3),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [17] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 3),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(526),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(525),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(524),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(523),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(522),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(521),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(520),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(512),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(265),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(211),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(510),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(207),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(208),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(507),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(500),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(236),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 2),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 2),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 4),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 4),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 5),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 5),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response, 4),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_response, 4),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(438),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(476),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response, 3),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_response, 3),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_options_section, 2),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_options_section, 2),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(464),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(463),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(462),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(461),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(460),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(459),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(458),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(457),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(456),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(455),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_options_section_repeat1, 2),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_options_section_repeat1, 2),
  [113] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_options_section_repeat1, 2), SHIFT_REPEAT(464),
  [116] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_options_section_repeat1, 2), SHIFT_REPEAT(463),
  [119] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_options_section_repeat1, 2), SHIFT_REPEAT(462),
  [122] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_options_section_repeat1, 2), SHIFT_REPEAT(461),
  [125] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_options_section_repeat1, 2), SHIFT_REPEAT(460),
  [128] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_options_section_repeat1, 2), SHIFT_REPEAT(459),
  [131] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_options_section_repeat1, 2), SHIFT_REPEAT(458),
  [134] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_options_section_repeat1, 2), SHIFT_REPEAT(457),
  [137] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_options_section_repeat1, 2), SHIFT_REPEAT(456),
  [140] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_options_section_repeat1, 2), SHIFT_REPEAT(455),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_options_section, 3),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_options_section, 3),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_asserts_section, 2),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_asserts_section, 2),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(401),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(399),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(398),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(397),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(396),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(280),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_asserts_section, 3),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_asserts_section, 3),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_asserts_section_repeat1, 2),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_asserts_section_repeat1, 2),
  [185] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_asserts_section_repeat1, 2), SHIFT_REPEAT(401),
  [188] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_asserts_section_repeat1, 2), SHIFT_REPEAT(82),
  [191] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_asserts_section_repeat1, 2), SHIFT_REPEAT(85),
  [194] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_asserts_section_repeat1, 2), SHIFT_REPEAT(399),
  [197] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_asserts_section_repeat1, 2), SHIFT_REPEAT(398),
  [200] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_asserts_section_repeat1, 2), SHIFT_REPEAT(84),
  [203] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_asserts_section_repeat1, 2), SHIFT_REPEAT(397),
  [206] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_asserts_section_repeat1, 2), SHIFT_REPEAT(396),
  [209] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_asserts_section_repeat1, 2), SHIFT_REPEAT(280),
  [212] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_asserts_section_repeat1, 2), SHIFT_REPEAT(81),
  [215] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_asserts_section_repeat1, 2), SHIFT_REPEAT(80),
  [218] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_asserts_section_repeat1, 2), SHIFT_REPEAT(77),
  [221] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_asserts_section_repeat1, 2), SHIFT_REPEAT(79),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [226] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [232] = {.entry = {.count = 1, .reusable = false}}, SHIFT(206),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [236] = {.entry = {.count = 1, .reusable = false}}, SHIFT(204),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(417),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(450),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response, 5),
  [276] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_response, 5),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multipart_form_data_section, 4),
  [280] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multipart_form_data_section, 4),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_request_repeat1, 2),
  [286] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_request_repeat1, 2),
  [288] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat1, 2), SHIFT_REPEAT(211),
  [291] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_request_repeat1, 2), SHIFT_REPEAT(510),
  [294] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_request_repeat1, 2), SHIFT_REPEAT(358),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multipart_form_data_section, 5),
  [299] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multipart_form_data_section, 5),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multipart_form_data_section, 3),
  [303] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multipart_form_data_section, 3),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_retry_interval_option, 4),
  [307] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_retry_interval_option, 4),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ca_certificate_option, 4),
  [311] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ca_certificate_option, 4),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ca_certificate_option, 3),
  [315] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ca_certificate_option, 3),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_verbose_option, 4),
  [319] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_verbose_option, 4),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_follow_redirect_option, 4),
  [323] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_follow_redirect_option, 4),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insecure_option, 4),
  [327] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_insecure_option, 4),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option, 1),
  [331] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_option, 1),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_max_redirs_option, 4),
  [335] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_max_redirs_option, 4),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_retry_option, 4),
  [339] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_retry_option, 4),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_retry_max_count_option, 4),
  [343] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_retry_max_count_option, 4),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_very_verbose_option, 4),
  [347] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_very_verbose_option, 4),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_option, 4),
  [351] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_option, 4),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_string_params_section, 5),
  [355] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query_string_params_section, 5),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_form_params_section, 3),
  [359] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_form_params_section, 3),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cookies_section, 5),
  [363] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cookies_section, 5),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_string_params_section, 3),
  [367] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query_string_params_section, 3),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cookies_section, 3),
  [371] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cookies_section, 3),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_string_params_section, 4),
  [375] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query_string_params_section, 4),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cookies_section, 4),
  [379] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cookies_section, 4),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_form_params_section, 4),
  [383] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_form_params_section, 4),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_form_params_section, 5),
  [387] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_form_params_section, 5),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_request_repeat2, 2),
  [391] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_request_repeat2, 2),
  [393] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat2, 2), SHIFT_REPEAT(526),
  [396] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat2, 2), SHIFT_REPEAT(525),
  [399] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat2, 2), SHIFT_REPEAT(524),
  [402] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat2, 2), SHIFT_REPEAT(523),
  [405] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat2, 2), SHIFT_REPEAT(522),
  [408] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat2, 2), SHIFT_REPEAT(521),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assert, 3),
  [413] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assert, 3),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assert, 4),
  [417] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assert, 4),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_hurl_file_repeat2, 2),
  [421] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_hurl_file_repeat2, 2), SHIFT_REPEAT(50),
  [424] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_hurl_file_repeat2, 2),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_captures_section, 2),
  [428] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_captures_section, 2),
  [430] = {.entry = {.count = 1, .reusable = false}}, SHIFT(230),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(486),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_captures_section, 3),
  [438] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_captures_section, 3),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_captures_section_repeat1, 2),
  [442] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_captures_section_repeat1, 2),
  [444] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_captures_section_repeat1, 2), SHIFT_REPEAT(230),
  [447] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_captures_section_repeat1, 2), SHIFT_REPEAT(486),
  [450] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_captures_section_repeat1, 2), SHIFT_REPEAT(364),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 2),
  [455] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 2),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request_section, 1),
  [459] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request_section, 1),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_basic_auth_section, 4),
  [463] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_basic_auth_section, 4),
  [465] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_capture_repeat1, 2), SHIFT_REPEAT(281),
  [468] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_capture_repeat1, 2),
  [470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_capture_repeat1, 2),
  [472] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_capture_repeat1, 2), SHIFT_REPEAT(73),
  [475] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_capture_repeat1, 2), SHIFT_REPEAT(74),
  [478] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_capture_repeat1, 2), SHIFT_REPEAT(75),
  [481] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_capture_repeat1, 2), SHIFT_REPEAT(65),
  [484] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_capture_repeat1, 2), SHIFT_REPEAT(70),
  [487] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_capture_repeat1, 2), SHIFT_REPEAT(71),
  [490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_response_repeat1, 2),
  [492] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_response_repeat1, 2),
  [494] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_response_repeat1, 2), SHIFT_REPEAT(438),
  [497] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_response_repeat1, 2), SHIFT_REPEAT(476),
  [500] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_capture, 5),
  [502] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_capture, 5),
  [504] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_capture, 4),
  [506] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_capture, 4),
  [508] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response_section, 1),
  [510] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_response_section, 1),
  [512] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regex_filter, 2),
  [514] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_regex_filter, 2),
  [516] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_html_encode_filter, 1),
  [518] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_html_encode_filter, 1),
  [520] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_string, 3),
  [522] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_string, 3),
  [524] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regex, 2),
  [526] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_regex, 2),
  [528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_string, 2),
  [530] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_string, 2),
  [532] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regex, 3),
  [534] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_regex, 3),
  [536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_html_decode_filter, 1),
  [538] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_html_decode_filter, 1),
  [540] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_to_int_filter, 1),
  [542] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_to_int_filter, 1),
  [544] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filter, 1),
  [546] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_filter, 1),
  [548] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_count_filter, 1),
  [550] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_count_filter, 1),
  [552] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url_encode_filter, 1),
  [554] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_url_encode_filter, 1),
  [556] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url_decode_filter, 1),
  [558] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_url_decode_filter, 1),
  [560] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_query, 2),
  [562] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header_query, 2),
  [564] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_md5_query, 1),
  [566] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_md5_query, 1),
  [568] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cookie_query, 2),
  [570] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cookie_query, 2),
  [572] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bytes_query, 1),
  [574] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bytes_query, 1),
  [576] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sha256_query, 1),
  [578] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sha256_query, 1),
  [580] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_duration_query, 1),
  [582] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_duration_query, 1),
  [584] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_status_query, 1),
  [586] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_status_query, 1),
  [588] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_query, 2),
  [590] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_query, 2),
  [592] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body_query, 1),
  [594] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_body_query, 1),
  [596] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url_query, 1),
  [598] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_url_query, 1),
  [600] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regex_query, 2),
  [602] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_regex_query, 2),
  [604] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query, 1),
  [606] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query, 1),
  [608] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xpath_query, 2),
  [610] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xpath_query, 2),
  [612] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jsonpath_query, 2),
  [614] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_jsonpath_query, 2),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [642] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entry, 1),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [646] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_entry, 1),
  [648] = {.entry = {.count = 1, .reusable = false}}, SHIFT(369),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(512),
  [654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(507),
  [662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(500),
  [664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [666] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hurl_file, 1),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [670] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_key_value, 2),
  [672] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [674] = {.entry = {.count = 1, .reusable = false}}, SHIFT(251),
  [676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [678] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 2),
  [680] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_body, 2),
  [682] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 6),
  [684] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 6),
  [686] = {.entry = {.count = 1, .reusable = false}}, SHIFT(228),
  [688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(509),
  [690] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_hurl_file_repeat1, 2),
  [692] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_hurl_file_repeat1, 2), SHIFT_REPEAT(254),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [697] = {.entry = {.count = 1, .reusable = false}}, SHIFT(201),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [709] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entry, 3),
  [711] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_entry, 3),
  [713] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entry, 2),
  [715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [717] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_entry, 2),
  [719] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response, 6),
  [721] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_response, 6),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [725] = {.entry = {.count = 1, .reusable = false}}, SHIFT(282),
  [727] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [729] = {.entry = {.count = 1, .reusable = false}}, SHIFT(198),
  [731] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [733] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [735] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [737] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [739] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 1),
  [741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [743] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 2),
  [745] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_capture_repeat1, 2), SHIFT_REPEAT(282),
  [748] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_capture_repeat1, 2), SHIFT_REPEAT(191),
  [751] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_capture_repeat1, 2), SHIFT_REPEAT(198),
  [754] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_capture_repeat1, 2), SHIFT_REPEAT(164),
  [757] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_capture_repeat1, 2), SHIFT_REPEAT(187),
  [760] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_capture_repeat1, 2), SHIFT_REPEAT(190),
  [763] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_capture_repeat1, 2), SHIFT_REPEAT(165),
  [766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [770] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [778] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [780] = {.entry = {.count = 1, .reusable = false}}, SHIFT(276),
  [782] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [784] = {.entry = {.count = 1, .reusable = false}}, SHIFT(361),
  [786] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_string, 1),
  [788] = {.entry = {.count = 1, .reusable = false}}, SHIFT(247),
  [790] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [792] = {.entry = {.count = 1, .reusable = false}}, SHIFT(439),
  [794] = {.entry = {.count = 1, .reusable = false}}, SHIFT(243),
  [796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [798] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [800] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_quoted_string_repeat1, 2),
  [802] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_string_repeat1, 2), SHIFT_REPEAT(276),
  [805] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_string_repeat1, 2), SHIFT_REPEAT(152),
  [808] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_string_repeat1, 2), SHIFT_REPEAT(361),
  [811] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [813] = {.entry = {.count = 1, .reusable = false}}, SHIFT(250),
  [815] = {.entry = {.count = 1, .reusable = false}}, SHIFT(422),
  [817] = {.entry = {.count = 1, .reusable = false}}, SHIFT(241),
  [819] = {.entry = {.count = 1, .reusable = false}}, SHIFT(448),
  [821] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_value_string_repeat1, 2),
  [823] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_string_repeat1, 2), SHIFT_REPEAT(200),
  [826] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_string_repeat1, 2), SHIFT_REPEAT(251),
  [829] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_value_string_repeat1, 2), SHIFT_REPEAT(362),
  [832] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multiline_string_repeat1, 2), SHIFT_REPEAT(196),
  [835] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multiline_string_repeat1, 2), SHIFT_REPEAT(192),
  [838] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_multiline_string_repeat1, 2),
  [840] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multiline_string_repeat1, 2), SHIFT_REPEAT(243),
  [843] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_multiline_string_repeat1, 2), SHIFT_REPEAT(359),
  [846] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [848] = {.entry = {.count = 1, .reusable = false}}, SHIFT(217),
  [850] = {.entry = {.count = 1, .reusable = false}}, SHIFT(449),
  [852] = {.entry = {.count = 1, .reusable = false}}, SHIFT(485),
  [854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [856] = {.entry = {.count = 1, .reusable = false}}, SHIFT(354),
  [858] = {.entry = {.count = 1, .reusable = false}}, SHIFT(324),
  [860] = {.entry = {.count = 1, .reusable = false}}, SHIFT(224),
  [862] = {.entry = {.count = 1, .reusable = false}}, SHIFT(341),
  [864] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [866] = {.entry = {.count = 1, .reusable = false}}, SHIFT(322),
  [868] = {.entry = {.count = 1, .reusable = false}}, SHIFT(232),
  [870] = {.entry = {.count = 1, .reusable = false}}, SHIFT(366),
  [872] = {.entry = {.count = 1, .reusable = false}}, SHIFT(494),
  [874] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_oneline_string_repeat1, 2), SHIFT_REPEAT(217),
  [877] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_oneline_string_repeat1, 2),
  [879] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_oneline_string_repeat1, 2), SHIFT_REPEAT(485),
  [882] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_oneline_string_repeat1, 2), SHIFT_REPEAT(351),
  [885] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_key_string_repeat1, 2),
  [887] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_key_string_repeat1, 2),
  [889] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_string_repeat1, 2), SHIFT_REPEAT(211),
  [892] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_string_repeat1, 2), SHIFT_REPEAT(510),
  [895] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_string_repeat1, 2), SHIFT_REPEAT(358),
  [898] = {.entry = {.count = 1, .reusable = false}}, SHIFT(487),
  [900] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_string, 1),
  [902] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_key_string, 1),
  [904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [906] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_integer_repeat1, 2),
  [908] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_integer_repeat1, 2), SHIFT_REPEAT(215),
  [911] = {.entry = {.count = 1, .reusable = false}}, SHIFT(275),
  [913] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [915] = {.entry = {.count = 1, .reusable = false}}, SHIFT(284),
  [917] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [919] = {.entry = {.count = 1, .reusable = false}}, SHIFT(489),
  [921] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [923] = {.entry = {.count = 1, .reusable = false}}, SHIFT(289),
  [925] = {.entry = {.count = 1, .reusable = false}}, SHIFT(290),
  [927] = {.entry = {.count = 1, .reusable = false}}, SHIFT(395),
  [929] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_string_repeat1, 2), SHIFT_REPEAT(230),
  [932] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_string_repeat1, 2), SHIFT_REPEAT(486),
  [935] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_string_repeat1, 2), SHIFT_REPEAT(364),
  [938] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_filename_repeat1, 2),
  [940] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_filename_repeat1, 2), SHIFT_REPEAT(324),
  [943] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_filename_repeat1, 2), SHIFT_REPEAT(224),
  [946] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_filename_repeat1, 2), SHIFT_REPEAT(341),
  [949] = {.entry = {.count = 1, .reusable = false}}, SHIFT(268),
  [951] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_string_repeat1, 2), SHIFT_REPEAT(228),
  [954] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_string_repeat1, 2), SHIFT_REPEAT(509),
  [957] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_string_repeat1, 2), SHIFT_REPEAT(338),
  [960] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_json_string_repeat1, 2),
  [962] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_string_repeat1, 2), SHIFT_REPEAT(178),
  [965] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_string_repeat1, 2), SHIFT_REPEAT(284),
  [968] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_json_string_repeat1, 2), SHIFT_REPEAT(346),
  [971] = {.entry = {.count = 1, .reusable = false}}, SHIFT(407),
  [973] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_filename, 1),
  [975] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer, 1),
  [977] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_name, 2),
  [979] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_filename_repeat1, 2), SHIFT_REPEAT(322),
  [982] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_filename_repeat1, 2), SHIFT_REPEAT(232),
  [985] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_filename_repeat1, 2), SHIFT_REPEAT(366),
  [988] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_string_content, 1),
  [990] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_string_content, 1),
  [992] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multiline_string_content_repeat1, 2), SHIFT_REPEAT(172),
  [995] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multiline_string_content_repeat1, 2), SHIFT_REPEAT(192),
  [998] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_multiline_string_content_repeat1, 2),
  [1000] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multiline_string_content_repeat1, 2), SHIFT_REPEAT(243),
  [1003] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_multiline_string_content_repeat1, 2),
  [1005] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_value_string_content_repeat1, 2),
  [1007] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_string_content_repeat1, 2), SHIFT_REPEAT(200),
  [1010] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_string_content_repeat1, 2), SHIFT_REPEAT(251),
  [1013] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_value_string_content_repeat1, 2),
  [1015] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_string_content, 1),
  [1017] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [1019] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [1021] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_quoted_string_content_repeat1, 2),
  [1023] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_string_content_repeat1, 2), SHIFT_REPEAT(276),
  [1026] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_string_content_repeat1, 2), SHIFT_REPEAT(152),
  [1029] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_number, 1),
  [1031] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [1033] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [1035] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [1037] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [1039] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fraction, 2),
  [1041] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [1043] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline_string_content, 1),
  [1045] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_string_content, 1),
  [1047] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [1049] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [1051] = {.entry = {.count = 1, .reusable = false}}, SHIFT(256),
  [1053] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [1055] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [1057] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_integer_repeat1, 2), SHIFT_REPEAT(236),
  [1060] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_integer_repeat1, 2),
  [1062] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [1064] = {.entry = {.count = 1, .reusable = false}}, SHIFT(483),
  [1066] = {.entry = {.count = 1, .reusable = true}}, SHIFT(481),
  [1068] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_oneline_string_content_repeat1, 2), SHIFT_REPEAT(217),
  [1071] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_oneline_string_content_repeat1, 2),
  [1073] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_oneline_string_content_repeat1, 2), SHIFT_REPEAT(485),
  [1076] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_oneline_string_content_repeat1, 2),
  [1078] = {.entry = {.count = 1, .reusable = false}}, SHIFT(443),
  [1080] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [1082] = {.entry = {.count = 1, .reusable = false}}, SHIFT(331),
  [1084] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_string_content, 1),
  [1086] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_key_string_content, 1),
  [1088] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer, 1),
  [1090] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneline_string_content, 1),
  [1092] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneline_string_content, 1),
  [1094] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_key_string_content_repeat1, 2),
  [1096] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_key_string_content_repeat1, 2),
  [1098] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_string_content_repeat1, 2), SHIFT_REPEAT(214),
  [1101] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_string_content_repeat1, 2), SHIFT_REPEAT(510),
  [1104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_digit, 1),
  [1106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [1108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [1110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [1112] = {.entry = {.count = 1, .reusable = false}}, SHIFT(293),
  [1114] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_string_content_repeat1, 2), SHIFT_REPEAT(218),
  [1117] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_string_content_repeat1, 2), SHIFT_REPEAT(509),
  [1120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exponent, 2),
  [1122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exponent, 3),
  [1124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_filename_content_repeat1, 2),
  [1126] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_filename_content_repeat1, 2), SHIFT_REPEAT(324),
  [1129] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_filename_content_repeat1, 2), SHIFT_REPEAT(222),
  [1132] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_regex_content_repeat1, 2), SHIFT_REPEAT(443),
  [1135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_regex_content_repeat1, 2),
  [1137] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_regex_content_repeat1, 2), SHIFT_REPEAT(331),
  [1140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_filename_content, 1),
  [1142] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_filename_content_repeat1, 2), SHIFT_REPEAT(322),
  [1145] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_filename_content_repeat1, 2), SHIFT_REPEAT(226),
  [1148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_regex_content, 1),
  [1150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_number, 2),
  [1152] = {.entry = {.count = 1, .reusable = false}}, SHIFT(305),
  [1154] = {.entry = {.count = 1, .reusable = false}}, SHIFT(248),
  [1156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fraction, 2),
  [1158] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_string_content_repeat1, 2), SHIFT_REPEAT(234),
  [1161] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_string_content_repeat1, 2), SHIFT_REPEAT(486),
  [1164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_template, 3),
  [1166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template, 3),
  [1168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_digit, 1),
  [1170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unicode_char, 3),
  [1172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unicode_char, 3),
  [1174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_oneline_hex_repeat1, 2),
  [1176] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_oneline_hex_repeat1, 2), SHIFT_REPEAT(320),
  [1179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_string_escaped_char, 2),
  [1181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_key_string_escaped_char, 2),
  [1183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_multiline_string_content_repeat1, 1),
  [1185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_multiline_string_content_repeat1, 1),
  [1187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline_string_text, 1),
  [1189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_string_text, 1),
  [1191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_value, 1),
  [1193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_key_string_repeat1, 1),
  [1195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [1197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline_string_escaped_char, 2),
  [1199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_string_escaped_char, 2),
  [1201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [1203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_value_string_text_repeat1, 2),
  [1205] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_string_text_repeat1, 2), SHIFT_REPEAT(249),
  [1208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_value_string_text_repeat1, 2),
  [1210] = {.entry = {.count = 1, .reusable = false}}, SHIFT(505),
  [1212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_string_text, 1),
  [1214] = {.entry = {.count = 1, .reusable = false}}, SHIFT(249),
  [1216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_string_text, 1),
  [1218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline_string_escaped_char, 3),
  [1220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_string_escaped_char, 3),
  [1222] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_string_escaped_char, 2),
  [1224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_string_escaped_char, 2),
  [1226] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_method, 1),
  [1228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method, 1),
  [1230] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneline_string_escaped_char, 3),
  [1232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneline_string_escaped_char, 3),
  [1234] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_string_escaped_char, 2),
  [1236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_string_escaped_char, 2),
  [1238] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_string_escaped_char, 3),
  [1240] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_string_escaped_char, 6),
  [1242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_string_escaped_char, 6),
  [1244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [1246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [1248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [1250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [1252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(490),
  [1254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_string, 2),
  [1256] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hexdigit, 1),
  [1258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hexdigit, 1),
  [1260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [1262] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_filename_escaped_char, 2),
  [1264] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_string_escaped_char, 3),
  [1266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_string_escaped_char, 3),
  [1268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_string, 3),
  [1270] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_string_text, 1),
  [1272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [1274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [1276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(451),
  [1278] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_string_text, 1),
  [1280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_string_text, 1),
  [1282] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_string_content, 1),
  [1284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_string_content, 1),
  [1286] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_string_escaped_char, 2),
  [1288] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_invalid_quoted_string_escaped_char, 2),
  [1290] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneline_string_text, 2),
  [1292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneline_string_text, 2),
  [1294] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneline_string_escaped_char, 2),
  [1296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneline_string_escaped_char, 2),
  [1298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [1300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_value, 3),
  [1302] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_json_array_repeat1, 2), SHIFT_REPEAT(107),
  [1305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_json_array_repeat1, 2),
  [1307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_array, 4),
  [1309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [1311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(446),
  [1313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(447),
  [1315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_object, 4),
  [1317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_number, 3),
  [1319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [1321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_null, 1),
  [1323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [1325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_json_object_repeat1, 2),
  [1327] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_json_object_repeat1, 2), SHIFT_REPEAT(294),
  [1330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(437),
  [1332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_array, 3),
  [1334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [1336] = {.entry = {.count = 1, .reusable = false}}, SHIFT(273),
  [1338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [1340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [1342] = {.entry = {.count = 1, .reusable = false}}, SHIFT(297),
  [1344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_object, 3),
  [1346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [1348] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_regex_text, 1),
  [1350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [1352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [1354] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_regex_escaped_char, 2),
  [1356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_object, 2),
  [1358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(528),
  [1360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_value, 1),
  [1362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_value, 3),
  [1364] = {.entry = {.count = 1, .reusable = false}}, SHIFT(412),
  [1366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_predicate_value, 1),
  [1368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_greater_or_equal_predicate, 2),
  [1370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_less_or_equal_predicate, 2),
  [1372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_value, 2),
  [1374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_greater_predicate, 2),
  [1376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_less_predicate, 2),
  [1378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hurl_file, 2),
  [1380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(531),
  [1382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version, 1),
  [1384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [1386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [1388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [1390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [1392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [1394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [1396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [1398] = {.entry = {.count = 1, .reusable = false}}, SHIFT(392),
  [1400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [1402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [1404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [1406] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_multipart_form_data_section_repeat1, 2), SHIFT_REPEAT(124),
  [1409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [1411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [1413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [1415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [1417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [1419] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_query_string_params_section_repeat1, 2), SHIFT_REPEAT(138),
  [1422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [1424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_key_value, 3),
  [1426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multipart_form_data_param, 1),
  [1428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_predicate, 2),
  [1430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [1432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [1434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_contenttype, 1),
  [1436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_predicate, 1),
  [1438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 3),
  [1440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_predicate, 1),
  [1442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float_predicate, 1),
  [1444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_predicate, 1),
  [1446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exist_predicate, 1),
  [1448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_value, 4),
  [1450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_string, 5),
  [1452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [1454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [1456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [1458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [1460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [1462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [1464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [1466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [1468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [1470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [1472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(506),
  [1474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [1476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float, 2),
  [1478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [1480] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_string, 4),
  [1482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_multipart_form_data_section_repeat1, 2),
  [1484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_query_string_params_section_repeat1, 2),
  [1486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [1488] = {.entry = {.count = 1, .reusable = false}}, SHIFT(335),
  [1490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_string, 3),
  [1492] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneline_string, 3),
  [1494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_collection_predicate, 1),
  [1496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneline_hex, 3),
  [1498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneline_base64, 3),
  [1500] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xml, 3),
  [1502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneline_file, 3),
  [1504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [1506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [1508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [1510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [1512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [1514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [1516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [1518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [1520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [1522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [1524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [1526] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contain_predicate, 2),
  [1528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_end_with_predicate, 2),
  [1530] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_with_predicate, 2),
  [1532] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_match_predicate, 2),
  [1534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_not_equal_predicate, 2),
  [1536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [1538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [1540] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1542] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_key_string, 1, .production_id = 1),
  [1544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [1546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [1548] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_string_type, 1),
  [1550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [1552] = {.entry = {.count = 1, .reusable = false}}, SHIFT(292),
  [1554] = {.entry = {.count = 1, .reusable = false}}, SHIFT(266),
  [1556] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneline_string, 2),
  [1558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [1560] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneline_hex, 2),
  [1562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(452),
  [1564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(453),
  [1566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(454),
  [1568] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneline_file, 2),
  [1570] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bytes, 1),
  [1572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [1574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [1576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [1578] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_equal_predicate, 2),
  [1580] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_predicate, 2),
  [1582] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_string, 6),
  [1584] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_param, 4),
  [1586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [1588] = {.entry = {.count = 1, .reusable = false}}, SHIFT(299),
  [1590] = {.entry = {.count = 1, .reusable = false}}, SHIFT(239),
  [1592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [1594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(491),
  [1596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [1598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [1600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [1602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [1604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [1606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [1608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [1610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(492),
  [1612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [1614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [1616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [1618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [1620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [1622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [1624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [1626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [1628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [1630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [1632] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_status, 1),
  [1634] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_predicate_func, 1),
  [1636] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_predicate, 1),
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
