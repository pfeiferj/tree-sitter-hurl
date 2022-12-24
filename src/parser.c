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
#define STATE_COUNT 578
#define LARGE_STATE_COUNT 14
#define SYMBOL_COUNT 313
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
  anon_sym_file_COMMA = 33,
  anon_sym_SEMI = 34,
  aux_sym_file_contenttype_token1 = 35,
  anon_sym_cacert = 36,
  anon_sym_location = 37,
  anon_sym_insecure = 38,
  anon_sym_max_DASHredirs = 39,
  anon_sym_retry = 40,
  anon_sym_retry_DASHinterval = 41,
  anon_sym_retry_DASHmax_DASHcount = 42,
  anon_sym_variable = 43,
  anon_sym_verbose = 44,
  anon_sym_very_DASHverbose = 45,
  anon_sym_EQ = 46,
  anon_sym_status = 47,
  anon_sym_url = 48,
  anon_sym_header = 49,
  anon_sym_cookie = 50,
  anon_sym_body = 51,
  anon_sym_xpath = 52,
  anon_sym_jsonpath = 53,
  anon_sym_regex = 54,
  anon_sym_duration = 55,
  anon_sym_sha256 = 56,
  anon_sym_md5 = 57,
  anon_sym_bytes = 58,
  anon_sym_not = 59,
  anon_sym_equals = 60,
  anon_sym_EQ_EQ = 61,
  anon_sym_notEquals = 62,
  anon_sym_BANG_EQ = 63,
  anon_sym_greaterThan = 64,
  anon_sym_GT = 65,
  anon_sym_greaterThanOrEquals = 66,
  anon_sym_GT_EQ = 67,
  anon_sym_lessThan = 68,
  anon_sym_LT = 69,
  anon_sym_lessThanOrEquals = 70,
  anon_sym_LT_EQ = 71,
  anon_sym_startsWith = 72,
  anon_sym_endsWith = 73,
  anon_sym_contains = 74,
  anon_sym_matches = 75,
  anon_sym_exists = 76,
  anon_sym_includes = 77,
  anon_sym_isInteger = 78,
  anon_sym_isFloat = 79,
  anon_sym_isBoolean = 80,
  anon_sym_isString = 81,
  anon_sym_isCollection = 82,
  anon_sym_To_COMMABe_COMMADefined = 83,
  anon_sym_base64_COMMA = 84,
  aux_sym_oneline_base64_token1 = 85,
  anon_sym_hex_COMMA = 86,
  anon_sym_DQUOTE = 87,
  aux_sym_quoted_string_text_token1 = 88,
  anon_sym_BSLASH = 89,
  aux_sym_invalid_quoted_string_escaped_char_token1 = 90,
  anon_sym_ = 91,
  anon_sym_2 = 92,
  anon_sym_CR = 93,
  anon_sym_TAB = 94,
  anon_sym_u = 95,
  sym_key_string_text = 96,
  anon_sym_POUND = 97,
  aux_sym_value_string_text_token1 = 98,
  anon_sym_BQUOTE = 99,
  aux_sym_oneline_string_text_token1 = 100,
  anon_sym_b = 101,
  anon_sym_f = 102,
  anon_sym_BQUOTE_BQUOTE_BQUOTE = 103,
  anon_sym_base64 = 104,
  anon_sym_hex = 105,
  anon_sym_json = 106,
  anon_sym_xml = 107,
  anon_sym_graphql = 108,
  aux_sym_multiline_string_text_token1 = 109,
  anon_sym_n = 110,
  anon_sym_r = 111,
  anon_sym_t = 112,
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
  aux_sym_form_params_section_repeat1 = 288,
  aux_sym_multipart_form_data_section_repeat1 = 289,
  aux_sym_captures_section_repeat1 = 290,
  aux_sym_asserts_section_repeat1 = 291,
  aux_sym_options_section_repeat1 = 292,
  aux_sym_capture_repeat1 = 293,
  aux_sym_oneline_hex_repeat1 = 294,
  aux_sym_quoted_string_repeat1 = 295,
  aux_sym_quoted_string_content_repeat1 = 296,
  aux_sym_key_string_repeat1 = 297,
  aux_sym_key_string_content_repeat1 = 298,
  aux_sym_value_string_repeat1 = 299,
  aux_sym_value_string_content_repeat1 = 300,
  aux_sym_value_string_text_repeat1 = 301,
  aux_sym_oneline_string_repeat1 = 302,
  aux_sym_oneline_string_content_repeat1 = 303,
  aux_sym_multiline_string_repeat1 = 304,
  aux_sym_multiline_string_content_repeat1 = 305,
  aux_sym_filename_repeat1 = 306,
  aux_sym_filename_content_repeat1 = 307,
  aux_sym_json_object_repeat1 = 308,
  aux_sym_json_array_repeat1 = 309,
  aux_sym_json_string_repeat1 = 310,
  aux_sym_integer_repeat1 = 311,
  aux_sym_regex_content_repeat1 = 312,
  anon_alias_sym_json_key_string = 313,
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
  [anon_sym_] = "",
  [anon_sym_2] = "\f",
  [anon_sym_CR] = "\r",
  [anon_sym_TAB] = "\t",
  [anon_sym_u] = "u",
  [sym_key_string_text] = "key_string_text",
  [anon_sym_POUND] = "#",
  [aux_sym_value_string_text_token1] = "value_string_text_token1",
  [anon_sym_BQUOTE] = "`",
  [aux_sym_oneline_string_text_token1] = "oneline_string_text_token1",
  [anon_sym_b] = "b",
  [anon_sym_f] = "f",
  [anon_sym_BQUOTE_BQUOTE_BQUOTE] = "```",
  [anon_sym_base64] = "base64",
  [anon_sym_hex] = "hex",
  [anon_sym_json] = "json",
  [anon_sym_xml] = "xml",
  [anon_sym_graphql] = "graphql",
  [aux_sym_multiline_string_text_token1] = "multiline_string_text_token1",
  [anon_sym_n] = "n",
  [anon_sym_r] = "r",
  [anon_sym_t] = "t",
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
  [aux_sym_form_params_section_repeat1] = "form_params_section_repeat1",
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
  [anon_sym_] = anon_sym_,
  [anon_sym_2] = anon_sym_2,
  [anon_sym_CR] = anon_sym_CR,
  [anon_sym_TAB] = anon_sym_TAB,
  [anon_sym_u] = anon_sym_u,
  [sym_key_string_text] = sym_key_string_text,
  [anon_sym_POUND] = anon_sym_POUND,
  [aux_sym_value_string_text_token1] = aux_sym_value_string_text_token1,
  [anon_sym_BQUOTE] = anon_sym_BQUOTE,
  [aux_sym_oneline_string_text_token1] = aux_sym_oneline_string_text_token1,
  [anon_sym_b] = anon_sym_b,
  [anon_sym_f] = anon_sym_f,
  [anon_sym_BQUOTE_BQUOTE_BQUOTE] = anon_sym_BQUOTE_BQUOTE_BQUOTE,
  [anon_sym_base64] = anon_sym_base64,
  [anon_sym_hex] = anon_sym_hex,
  [anon_sym_json] = anon_sym_json,
  [anon_sym_xml] = anon_sym_xml,
  [anon_sym_graphql] = anon_sym_graphql,
  [aux_sym_multiline_string_text_token1] = aux_sym_multiline_string_text_token1,
  [anon_sym_n] = anon_sym_n,
  [anon_sym_r] = anon_sym_r,
  [anon_sym_t] = anon_sym_t,
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
  [aux_sym_form_params_section_repeat1] = aux_sym_form_params_section_repeat1,
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
  [anon_sym_] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TAB] = {
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
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_value_string_text_token1] = {
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
  [anon_sym_b] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_f] = {
    .visible = true,
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
  [aux_sym_form_params_section_repeat1] = {
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
  [20] = 18,
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
  [46] = 43,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 35,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 53,
  [56] = 54,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 59,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 57,
  [67] = 26,
  [68] = 68,
  [69] = 69,
  [70] = 65,
  [71] = 71,
  [72] = 61,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 59,
  [77] = 77,
  [78] = 78,
  [79] = 64,
  [80] = 80,
  [81] = 68,
  [82] = 69,
  [83] = 75,
  [84] = 71,
  [85] = 85,
  [86] = 74,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 63,
  [92] = 71,
  [93] = 87,
  [94] = 85,
  [95] = 95,
  [96] = 96,
  [97] = 89,
  [98] = 78,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 90,
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
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
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
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 18,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 149,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 99,
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
  [170] = 169,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 35,
  [177] = 43,
  [178] = 172,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 189,
  [191] = 191,
  [192] = 57,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 191,
  [197] = 188,
  [198] = 187,
  [199] = 199,
  [200] = 199,
  [201] = 59,
  [202] = 193,
  [203] = 203,
  [204] = 116,
  [205] = 121,
  [206] = 123,
  [207] = 124,
  [208] = 119,
  [209] = 209,
  [210] = 117,
  [211] = 106,
  [212] = 125,
  [213] = 127,
  [214] = 130,
  [215] = 131,
  [216] = 118,
  [217] = 129,
  [218] = 128,
  [219] = 126,
  [220] = 54,
  [221] = 221,
  [222] = 222,
  [223] = 110,
  [224] = 109,
  [225] = 225,
  [226] = 226,
  [227] = 63,
  [228] = 228,
  [229] = 228,
  [230] = 228,
  [231] = 231,
  [232] = 53,
  [233] = 122,
  [234] = 234,
  [235] = 107,
  [236] = 120,
  [237] = 115,
  [238] = 114,
  [239] = 108,
  [240] = 113,
  [241] = 112,
  [242] = 111,
  [243] = 243,
  [244] = 244,
  [245] = 245,
  [246] = 246,
  [247] = 247,
  [248] = 248,
  [249] = 59,
  [250] = 250,
  [251] = 71,
  [252] = 252,
  [253] = 252,
  [254] = 254,
  [255] = 57,
  [256] = 246,
  [257] = 226,
  [258] = 258,
  [259] = 259,
  [260] = 260,
  [261] = 261,
  [262] = 262,
  [263] = 263,
  [264] = 262,
  [265] = 265,
  [266] = 63,
  [267] = 259,
  [268] = 258,
  [269] = 269,
  [270] = 270,
  [271] = 271,
  [272] = 272,
  [273] = 269,
  [274] = 274,
  [275] = 275,
  [276] = 276,
  [277] = 68,
  [278] = 278,
  [279] = 68,
  [280] = 280,
  [281] = 281,
  [282] = 61,
  [283] = 275,
  [284] = 65,
  [285] = 71,
  [286] = 286,
  [287] = 287,
  [288] = 288,
  [289] = 69,
  [290] = 290,
  [291] = 291,
  [292] = 292,
  [293] = 293,
  [294] = 291,
  [295] = 291,
  [296] = 291,
  [297] = 297,
  [298] = 298,
  [299] = 299,
  [300] = 300,
  [301] = 301,
  [302] = 302,
  [303] = 303,
  [304] = 75,
  [305] = 305,
  [306] = 306,
  [307] = 307,
  [308] = 308,
  [309] = 260,
  [310] = 69,
  [311] = 311,
  [312] = 69,
  [313] = 261,
  [314] = 68,
  [315] = 315,
  [316] = 316,
  [317] = 317,
  [318] = 68,
  [319] = 74,
  [320] = 274,
  [321] = 291,
  [322] = 322,
  [323] = 307,
  [324] = 303,
  [325] = 68,
  [326] = 326,
  [327] = 327,
  [328] = 69,
  [329] = 322,
  [330] = 291,
  [331] = 331,
  [332] = 332,
  [333] = 68,
  [334] = 334,
  [335] = 335,
  [336] = 316,
  [337] = 337,
  [338] = 68,
  [339] = 339,
  [340] = 68,
  [341] = 68,
  [342] = 301,
  [343] = 343,
  [344] = 344,
  [345] = 345,
  [346] = 346,
  [347] = 347,
  [348] = 348,
  [349] = 349,
  [350] = 68,
  [351] = 351,
  [352] = 352,
  [353] = 353,
  [354] = 354,
  [355] = 355,
  [356] = 356,
  [357] = 353,
  [358] = 353,
  [359] = 347,
  [360] = 344,
  [361] = 361,
  [362] = 351,
  [363] = 345,
  [364] = 364,
  [365] = 365,
  [366] = 356,
  [367] = 64,
  [368] = 368,
  [369] = 369,
  [370] = 351,
  [371] = 365,
  [372] = 372,
  [373] = 351,
  [374] = 374,
  [375] = 375,
  [376] = 376,
  [377] = 361,
  [378] = 378,
  [379] = 379,
  [380] = 365,
  [381] = 381,
  [382] = 368,
  [383] = 383,
  [384] = 351,
  [385] = 385,
  [386] = 365,
  [387] = 351,
  [388] = 388,
  [389] = 365,
  [390] = 390,
  [391] = 391,
  [392] = 351,
  [393] = 351,
  [394] = 365,
  [395] = 353,
  [396] = 396,
  [397] = 397,
  [398] = 351,
  [399] = 351,
  [400] = 400,
  [401] = 401,
  [402] = 78,
  [403] = 87,
  [404] = 404,
  [405] = 405,
  [406] = 346,
  [407] = 351,
  [408] = 351,
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
  [425] = 425,
  [426] = 426,
  [427] = 427,
  [428] = 428,
  [429] = 429,
  [430] = 420,
  [431] = 424,
  [432] = 432,
  [433] = 427,
  [434] = 434,
  [435] = 435,
  [436] = 428,
  [437] = 437,
  [438] = 438,
  [439] = 439,
  [440] = 419,
  [441] = 441,
  [442] = 442,
  [443] = 443,
  [444] = 444,
  [445] = 429,
  [446] = 419,
  [447] = 447,
  [448] = 448,
  [449] = 439,
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
  [469] = 381,
  [470] = 470,
  [471] = 471,
  [472] = 472,
  [473] = 85,
  [474] = 474,
  [475] = 383,
  [476] = 476,
  [477] = 477,
  [478] = 478,
  [479] = 385,
  [480] = 480,
  [481] = 481,
  [482] = 482,
  [483] = 483,
  [484] = 484,
  [485] = 485,
  [486] = 486,
  [487] = 487,
  [488] = 488,
  [489] = 489,
  [490] = 490,
  [491] = 491,
  [492] = 492,
  [493] = 493,
  [494] = 343,
  [495] = 87,
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
  [507] = 302,
  [508] = 508,
  [509] = 509,
  [510] = 510,
  [511] = 511,
  [512] = 308,
  [513] = 513,
  [514] = 78,
  [515] = 515,
  [516] = 516,
  [517] = 517,
  [518] = 518,
  [519] = 491,
  [520] = 520,
  [521] = 521,
  [522] = 522,
  [523] = 523,
  [524] = 524,
  [525] = 525,
  [526] = 526,
  [527] = 527,
  [528] = 528,
  [529] = 523,
  [530] = 530,
  [531] = 89,
  [532] = 532,
  [533] = 533,
  [534] = 534,
  [535] = 535,
  [536] = 536,
  [537] = 456,
  [538] = 538,
  [539] = 539,
  [540] = 540,
  [541] = 375,
  [542] = 542,
  [543] = 390,
  [544] = 544,
  [545] = 545,
  [546] = 491,
  [547] = 524,
  [548] = 548,
  [549] = 491,
  [550] = 550,
  [551] = 491,
  [552] = 524,
  [553] = 491,
  [554] = 554,
  [555] = 491,
  [556] = 491,
  [557] = 491,
  [558] = 491,
  [559] = 491,
  [560] = 491,
  [561] = 405,
  [562] = 562,
  [563] = 563,
  [564] = 564,
  [565] = 565,
  [566] = 566,
  [567] = 567,
  [568] = 568,
  [569] = 569,
  [570] = 570,
  [571] = 571,
  [572] = 572,
  [573] = 573,
  [574] = 574,
  [575] = 396,
  [576] = 576,
  [577] = 577,
};

static inline bool anon_sym_LF_character_set_1(int32_t c) {
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

static inline bool anon_sym__character_set_1(int32_t c) {
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
          : c <= '-')
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

static inline bool sym_key_string_text_character_set_4(int32_t c) {
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

static inline bool sym_key_string_text_character_set_5(int32_t c) {
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

static inline bool sym_key_string_text_character_set_6(int32_t c) {
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

static inline bool sym_key_string_text_character_set_7(int32_t c) {
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

static inline bool sym_key_string_text_character_set_8(int32_t c) {
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

static inline bool sym_key_string_text_character_set_9(int32_t c) {
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
      if (eof) ADVANCE(510);
      if (lookahead == 8) ADVANCE(642);
      if (lookahead == '\f') ADVANCE(643);
      if (lookahead == '!') ADVANCE(47);
      if (lookahead == '"') ADVANCE(633);
      if (lookahead == '#') ADVANCE(815);
      if (lookahead == '*') ADVANCE(558);
      if (lookahead == '+') ADVANCE(903);
      if (lookahead == ',') ADVANCE(868);
      if (lookahead == '-') ADVANCE(904);
      if (lookahead == '.') ADVANCE(899);
      if (lookahead == '/') ADVANCE(907);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == ';') ADVANCE(577);
      if (lookahead == '<') ADVANCE(614);
      if (lookahead == '=') ADVANCE(590);
      if (lookahead == '>') ADVANCE(609);
      if (lookahead == 'E') ADVANCE(902);
      if (lookahead == '[') ADVANCE(870);
      if (lookahead == '\\') ADVANCE(638);
      if (lookahead == ']') ADVANCE(874);
      if (lookahead == '`') ADVANCE(841);
      if (lookahead == 'b') ADVANCE(845);
      if (lookahead == 'e') ADVANCE(901);
      if (lookahead == 'f') ADVANCE(846);
      if (lookahead == 'n') ADVANCE(858);
      if (lookahead == 'r') ADVANCE(859);
      if (lookahead == 't') ADVANCE(860);
      if (lookahead == 'u') ADVANCE(648);
      if (lookahead == '{') ADVANCE(866);
      if (lookahead == '}') ADVANCE(867);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'd')) ADVANCE(883);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(557);
      if (anon_sym__character_set_1(lookahead)) SKIP(0)
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(883);
      END_STATE();
    case 1:
      if (lookahead == 8) ADVANCE(642);
      if (lookahead == '\t') ADVANCE(646);
      if (lookahead == '\n') ADVANCE(511);
      if (lookahead == '\f') ADVANCE(643);
      if (lookahead == '\r') ADVANCE(644);
      if (lookahead == '"') ADVANCE(633);
      if (lookahead == '#') ADVANCE(641);
      if (lookahead == '\\') ADVANCE(638);
      if (lookahead == 'u') ADVANCE(648);
      if (lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(640);
      if (lookahead != 0) ADVANCE(639);
      END_STATE();
    case 2:
      if (lookahead == 8) ADVANCE(642);
      if (lookahead == '\t') ADVANCE(647);
      if (lookahead == '\n') ADVANCE(512);
      if (lookahead == '\f') ADVANCE(643);
      if (lookahead == '\r') ADVANCE(645);
      if (lookahead == '#') ADVANCE(815);
      if (lookahead == '\\') ADVANCE(638);
      if (lookahead == 'u') ADVANCE(648);
      if (lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) SKIP(2)
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(513);
      if (lookahead == '#') ADVANCE(503);
      if (lookahead == 'b') ADVANCE(170);
      if (lookahead == 'c') ADVANCE(363);
      if (lookahead == 'g') ADVANCE(400);
      if (lookahead == 'h') ADVANCE(226);
      if (lookahead == 'j') ADVANCE(434);
      if (lookahead == 'r') ADVANCE(218);
      if (lookahead == 't') ADVANCE(344);
      if (lookahead == 'u') ADVANCE(393);
      if (lookahead == 'x') ADVANCE(310);
      if (anon_sym_LF_character_set_1(lookahead)) SKIP(3)
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(513);
      if (lookahead == '#') ADVANCE(503);
      if (anon_sym_LF_character_set_1(lookahead)) SKIP(4)
      if (lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(578);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(513);
      if (lookahead == '#') ADVANCE(503);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(810);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == '\\') ADVANCE(638);
      if (lookahead == '{') ADVANCE(501);
      if (anon_sym_LF_character_set_1(lookahead)) SKIP(5)
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(6)
      if (lookahead == '#') ADVANCE(503);
      if (lookahead == '\\') ADVANCE(638);
      if (lookahead == '`') ADVANCE(840);
      if (lookahead == '{') ADVANCE(839);
      if (anon_sym_LF_character_set_1(lookahead)) ADVANCE(832);
      if (lookahead != 0) ADVANCE(816);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(515);
      if (lookahead == ' ') SKIP(7)
      if (lookahead == '#') ADVANCE(503);
      if (lookahead == '\\') ADVANCE(638);
      if (lookahead == '{') ADVANCE(863);
      if (sym_filename_text_character_set_1(lookahead)) ADVANCE(861);
      if (lookahead != 0 &&
          lookahead != ';') ADVANCE(864);
      END_STATE();
    case 8:
      if (lookahead == '\n') SKIP(8)
      if (lookahead == '#') ADVANCE(909);
      if (lookahead == '/') ADVANCE(907);
      if (lookahead == '\\') ADVANCE(638);
      if (anon_sym_LF_character_set_1(lookahead)) ADVANCE(908);
      if (lookahead != 0) ADVANCE(910);
      END_STATE();
    case 9:
      if (lookahead == '\n') SKIP(9)
      if (lookahead == '#') ADVANCE(913);
      if (anon_sym_LF_character_set_1(lookahead)) ADVANCE(912);
      if (lookahead != 0) ADVANCE(911);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(630);
      if (lookahead == '#') ADVANCE(503);
      if (anon_sym_LF_character_set_1(lookahead)) SKIP(10)
      if (('+' <= lookahead && lookahead <= '-') ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(631);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(517);
      if (lookahead == '#') ADVANCE(503);
      if (lookahead == '\\') ADVANCE(638);
      if (lookahead == 'f') ADVANCE(834);
      if (lookahead == 'n') ADVANCE(838);
      if (lookahead == 't') ADVANCE(837);
      if (lookahead == '{') ADVANCE(839);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(816);
      if (anon_sym_LF_character_set_1(lookahead)) ADVANCE(819);
      if (lookahead != 0) ADVANCE(816);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(518);
      if (lookahead == '#') ADVANCE(503);
      if (lookahead == '\\') ADVANCE(638);
      if (lookahead == 'f') ADVANCE(833);
      if (lookahead == 'n') ADVANCE(838);
      if (lookahead == 't') ADVANCE(837);
      if (lookahead == '{') ADVANCE(839);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(816);
      if (anon_sym_LF_character_set_1(lookahead)) ADVANCE(820);
      if (lookahead != 0) ADVANCE(816);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(519);
      if (lookahead == '#') ADVANCE(503);
      if (lookahead == '\\') ADVANCE(638);
      if (lookahead == '{') ADVANCE(839);
      if (anon_sym_LF_character_set_1(lookahead)) ADVANCE(821);
      if (lookahead != 0) ADVANCE(816);
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(520);
      if (lookahead == '#') ADVANCE(857);
      if (lookahead == '\\') ADVANCE(638);
      if (lookahead == '`') ADVANCE(855);
      if (lookahead == '{') ADVANCE(856);
      if (anon_sym_LF_character_set_1(lookahead)) ADVANCE(854);
      if (lookahead != 0) ADVANCE(853);
      END_STATE();
    case 15:
      if (lookahead == '!') ADVANCE(47);
      if (lookahead == '"') ADVANCE(633);
      if (lookahead == '#') ADVANCE(503);
      if (lookahead == '+') ADVANCE(903);
      if (lookahead == ',') ADVANCE(868);
      if (lookahead == '-') ADVANCE(904);
      if (lookahead == '<') ADVANCE(614);
      if (lookahead == '=') ADVANCE(48);
      if (lookahead == '>') ADVANCE(609);
      if (lookahead == 'T') ADVANCE(346);
      if (lookahead == '[') ADVANCE(869);
      if (lookahead == ']') ADVANCE(874);
      if (lookahead == '`') ADVANCE(133);
      if (lookahead == 'b') ADVANCE(155);
      if (lookahead == 'c') ADVANCE(339);
      if (lookahead == 'e') ADVANCE(320);
      if (lookahead == 'f') ADVANCE(138);
      if (lookahead == 'g') ADVANCE(401);
      if (lookahead == 'h') ADVANCE(224);
      if (lookahead == 'i') ADVANCE(322);
      if (lookahead == 'l') ADVANCE(242);
      if (lookahead == 'm') ADVANCE(160);
      if (lookahead == 'n') ADVANCE(355);
      if (lookahead == 'r') ADVANCE(218);
      if (lookahead == 's') ADVANCE(468);
      if (lookahead == 't') ADVANCE(345);
      if (lookahead == 'u') ADVANCE(393);
      if (lookahead == '{') ADVANCE(866);
      if (lookahead == '}') ADVANCE(502);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(897);
      if (anon_sym__character_set_1(lookahead)) SKIP(15)
      END_STATE();
    case 16:
      if (lookahead == '"') ADVANCE(633);
      if (lookahead == '#') ADVANCE(815);
      if (lookahead == '\\') ADVANCE(638);
      if (lookahead == '`') ADVANCE(840);
      if (lookahead == 'b') ADVANCE(845);
      if (lookahead == 'f') ADVANCE(846);
      if (lookahead == 'n') ADVANCE(858);
      if (lookahead == 'r') ADVANCE(859);
      if (lookahead == 't') ADVANCE(860);
      if (lookahead == 'u') ADVANCE(648);
      if (anon_sym__character_set_1(lookahead)) SKIP(16)
      END_STATE();
    case 17:
      if (lookahead == '"') ADVANCE(633);
      if (lookahead == '#') ADVANCE(815);
      if (sym_key_string_text_character_set_1(lookahead)) ADVANCE(810);
      if (lookahead == ',') ADVANCE(865);
      if (lookahead == ';') ADVANCE(577);
      if (lookahead == '\\') ADVANCE(638);
      if (lookahead == 'f') ADVANCE(792);
      if (lookahead == 'n') ADVANCE(784);
      if (lookahead == 't') ADVANCE(757);
      if (lookahead == '{') ADVANCE(501);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(810);
      if (anon_sym__character_set_1(lookahead)) SKIP(17)
      END_STATE();
    case 18:
      if (lookahead == '"') ADVANCE(633);
      if (lookahead == '#') ADVANCE(503);
      if (lookahead == ',') ADVANCE(868);
      if (lookahead == '.') ADVANCE(899);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == '=') ADVANCE(589);
      if (lookahead == 'E') ADVANCE(902);
      if (lookahead == ']') ADVANCE(874);
      if (lookahead == 'b') ADVANCE(338);
      if (lookahead == 'c') ADVANCE(359);
      if (lookahead == 'd') ADVANCE(481);
      if (lookahead == 'e') ADVANCE(901);
      if (lookahead == 'h') ADVANCE(236);
      if (lookahead == 'j') ADVANCE(425);
      if (lookahead == 'm') ADVANCE(193);
      if (lookahead == 'r') ADVANCE(218);
      if (lookahead == 's') ADVANCE(260);
      if (lookahead == 'u') ADVANCE(388);
      if (lookahead == 'v') ADVANCE(151);
      if (lookahead == 'x') ADVANCE(370);
      if (lookahead == '}') ADVANCE(867);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(897);
      if (anon_sym__character_set_1(lookahead)) SKIP(18)
      END_STATE();
    case 19:
      if (lookahead == '"') ADVANCE(633);
      if (lookahead == '#') ADVANCE(634);
      if (lookahead == '\\') ADVANCE(638);
      if (lookahead == '{') ADVANCE(636);
      if (anon_sym__character_set_1(lookahead)) ADVANCE(635);
      if (lookahead != 0) ADVANCE(637);
      END_STATE();
    case 20:
      if (lookahead == '"') ADVANCE(633);
      if (lookahead == '#') ADVANCE(878);
      if (lookahead == '\\') ADVANCE(638);
      if (lookahead == '{') ADVANCE(877);
      if (anon_sym__character_set_1(lookahead)) ADVANCE(876);
      if (lookahead != 0) ADVANCE(875);
      END_STATE();
    case 21:
      if (lookahead == '#') ADVANCE(503);
      if (lookahead == '*') ADVANCE(558);
      if (lookahead == '=') ADVANCE(589);
      if (lookahead == 'c') ADVANCE(363);
      if (lookahead == 'h') ADVANCE(456);
      if (lookahead == 'r') ADVANCE(218);
      if (lookahead == 't') ADVANCE(344);
      if (lookahead == 'u') ADVANCE(393);
      if (lookahead == '}') ADVANCE(502);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(557);
      if (anon_sym__character_set_1(lookahead)) SKIP(21)
      END_STATE();
    case 22:
      if (lookahead == '#') ADVANCE(503);
      if (lookahead == ';') ADVANCE(577);
      if (lookahead == '\\') ADVANCE(638);
      if (lookahead == '{') ADVANCE(863);
      if (lookahead == '\n' ||
          lookahead == ' ') SKIP(22)
      if (sym_filename_text_character_set_1(lookahead)) ADVANCE(862);
      if (lookahead != 0) ADVANCE(864);
      END_STATE();
    case 23:
      if (lookahead == '#') ADVANCE(503);
      if (lookahead == ';') ADVANCE(577);
      if (lookahead == '}') ADVANCE(867);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(898);
      if (anon_sym__character_set_1(lookahead)) SKIP(23)
      END_STATE();
    case 24:
      if (lookahead == '#') ADVANCE(503);
      if (anon_sym__character_set_1(lookahead)) SKIP(24)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(883);
      END_STATE();
    case 25:
      if (lookahead == '#') ADVANCE(503);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(810);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == '\\') ADVANCE(638);
      if (lookahead == '{') ADVANCE(501);
      if (anon_sym__character_set_1(lookahead)) SKIP(25)
      END_STATE();
    case 26:
      if (lookahead == '#') ADVANCE(844);
      if (anon_sym__character_set_1(lookahead)) ADVANCE(843);
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(842);
      END_STATE();
    case 27:
      if (lookahead == '*') ADVANCE(556);
      if (lookahead == '1') ADVANCE(36);
      if (lookahead == '2') ADVANCE(555);
      END_STATE();
    case 28:
      if (lookahead == ',') ADVANCE(632);
      END_STATE();
    case 29:
      if (lookahead == ',') ADVANCE(576);
      END_STATE();
    case 30:
      if (lookahead == ',') ADVANCE(629);
      END_STATE();
    case 31:
      if (lookahead == ',') ADVANCE(54);
      END_STATE();
    case 32:
      if (lookahead == ',') ADVANCE(64);
      END_STATE();
    case 33:
      if (lookahead == '-') ADVANCE(492);
      END_STATE();
    case 34:
      if (lookahead == '-') ADVANCE(183);
      END_STATE();
    case 35:
      if (lookahead == '-') ADVANCE(396);
      END_STATE();
    case 36:
      if (lookahead == '.') ADVANCE(38);
      END_STATE();
    case 37:
      if (lookahead == '/') ADVANCE(27);
      END_STATE();
    case 38:
      if (lookahead == '0') ADVANCE(553);
      if (lookahead == '1') ADVANCE(554);
      END_STATE();
    case 39:
      if (lookahead == '2') ADVANCE(43);
      END_STATE();
    case 40:
      if (lookahead == '4') ADVANCE(848);
      END_STATE();
    case 41:
      if (lookahead == '4') ADVANCE(30);
      END_STATE();
    case 42:
      if (lookahead == '5') ADVANCE(601);
      END_STATE();
    case 43:
      if (lookahead == '5') ADVANCE(45);
      END_STATE();
    case 44:
      if (lookahead == '6') ADVANCE(41);
      END_STATE();
    case 45:
      if (lookahead == '6') ADVANCE(600);
      END_STATE();
    case 46:
      if (lookahead == '6') ADVANCE(40);
      END_STATE();
    case 47:
      if (lookahead == '=') ADVANCE(607);
      END_STATE();
    case 48:
      if (lookahead == '=') ADVANCE(605);
      END_STATE();
    case 49:
      if (lookahead == 'A') ADVANCE(60);
      END_STATE();
    case 50:
      if (lookahead == 'A') ADVANCE(58);
      END_STATE();
    case 51:
      if (lookahead == 'A') ADVANCE(479);
      END_STATE();
    case 52:
      if (lookahead == 'A') ADVANCE(117);
      if (lookahead == 'O') ADVANCE(112);
      if (lookahead == 'R') ADVANCE(101);
      if (lookahead == 'U') ADVANCE(108);
      END_STATE();
    case 53:
      if (lookahead == 'B') ADVANCE(351);
      if (lookahead == 'C') ADVANCE(350);
      if (lookahead == 'F') ADVANCE(295);
      if (lookahead == 'I') ADVANCE(328);
      if (lookahead == 'S') ADVANCE(464);
      END_STATE();
    case 54:
      if (lookahead == 'B') ADVANCE(228);
      END_STATE();
    case 55:
      if (lookahead == 'C') ADVANCE(80);
      END_STATE();
    case 56:
      if (lookahead == 'C') ADVANCE(88);
      END_STATE();
    case 57:
      if (lookahead == 'C') ADVANCE(90);
      END_STATE();
    case 58:
      if (lookahead == 'C') ADVANCE(69);
      END_STATE();
    case 59:
      if (lookahead == 'C') ADVANCE(115);
      END_STATE();
    case 60:
      if (lookahead == 'D') ADVANCE(523);
      END_STATE();
    case 61:
      if (lookahead == 'D') ADVANCE(549);
      END_STATE();
    case 62:
      if (lookahead == 'D') ADVANCE(148);
      END_STATE();
    case 63:
      if (lookahead == 'D') ADVANCE(244);
      if (lookahead == 'E') ADVANCE(332);
      END_STATE();
    case 64:
      if (lookahead == 'D') ADVANCE(212);
      END_STATE();
    case 65:
      if (lookahead == 'E') ADVANCE(91);
      END_STATE();
    case 66:
      if (lookahead == 'E') ADVANCE(113);
      END_STATE();
    case 67:
      if (lookahead == 'E') ADVANCE(122);
      END_STATE();
    case 68:
      if (lookahead == 'E') ADVANCE(543);
      END_STATE();
    case 69:
      if (lookahead == 'E') ADVANCE(535);
      END_STATE();
    case 70:
      if (lookahead == 'E') ADVANCE(529);
      END_STATE();
    case 71:
      if (lookahead == 'E') ADVANCE(49);
      if (lookahead == 'T') ADVANCE(118);
      END_STATE();
    case 72:
      if (lookahead == 'E') ADVANCE(59);
      END_STATE();
    case 73:
      if (lookahead == 'E') ADVANCE(120);
      END_STATE();
    case 74:
      if (lookahead == 'E') ADVANCE(438);
      if (lookahead == 'U') ADVANCE(333);
      END_STATE();
    case 75:
      if (lookahead == 'E') ADVANCE(374);
      END_STATE();
    case 76:
      if (lookahead == 'E') ADVANCE(375);
      END_STATE();
    case 77:
      if (lookahead == 'F') ADVANCE(84);
      END_STATE();
    case 78:
      if (lookahead == 'F') ADVANCE(357);
      END_STATE();
    case 79:
      if (lookahead == 'G') ADVANCE(68);
      END_STATE();
    case 80:
      if (lookahead == 'H') ADVANCE(537);
      END_STATE();
    case 81:
      if (lookahead == 'I') ADVANCE(67);
      END_STATE();
    case 82:
      if (lookahead == 'I') ADVANCE(93);
      if (lookahead == 'O') ADVANCE(56);
      END_STATE();
    case 83:
      if (lookahead == 'I') ADVANCE(97);
      if (lookahead == 'O') ADVANCE(57);
      END_STATE();
    case 84:
      if (lookahead == 'I') ADVANCE(96);
      END_STATE();
    case 85:
      if (lookahead == 'I') ADVANCE(102);
      END_STATE();
    case 86:
      if (lookahead == 'I') ADVANCE(329);
      END_STATE();
    case 87:
      if (lookahead == 'K') ADVANCE(539);
      END_STATE();
    case 88:
      if (lookahead == 'K') ADVANCE(545);
      END_STATE();
    case 89:
      if (lookahead == 'K') ADVANCE(541);
      END_STATE();
    case 90:
      if (lookahead == 'K') ADVANCE(547);
      END_STATE();
    case 91:
      if (lookahead == 'L') ADVANCE(73);
      END_STATE();
    case 92:
      if (lookahead == 'L') ADVANCE(83);
      END_STATE();
    case 93:
      if (lookahead == 'N') ADVANCE(87);
      END_STATE();
    case 94:
      if (lookahead == 'N') ADVANCE(92);
      END_STATE();
    case 95:
      if (lookahead == 'N') ADVANCE(110);
      END_STATE();
    case 96:
      if (lookahead == 'N') ADVANCE(61);
      END_STATE();
    case 97:
      if (lookahead == 'N') ADVANCE(89);
      END_STATE();
    case 98:
      if (lookahead == 'N') ADVANCE(99);
      END_STATE();
    case 99:
      if (lookahead == 'N') ADVANCE(72);
      END_STATE();
    case 100:
      if (lookahead == 'O') ADVANCE(98);
      END_STATE();
    case 101:
      if (lookahead == 'O') ADVANCE(105);
      END_STATE();
    case 102:
      if (lookahead == 'O') ADVANCE(95);
      END_STATE();
    case 103:
      if (lookahead == 'P') ADVANCE(37);
      END_STATE();
    case 104:
      if (lookahead == 'P') ADVANCE(146);
      END_STATE();
    case 105:
      if (lookahead == 'P') ADVANCE(77);
      END_STATE();
    case 106:
      if (lookahead == 'P') ADVANCE(116);
      END_STATE();
    case 107:
      if (lookahead == 'P') ADVANCE(169);
      END_STATE();
    case 108:
      if (lookahead == 'R') ADVANCE(79);
      if (lookahead == 'T') ADVANCE(527);
      END_STATE();
    case 109:
      if (lookahead == 'R') ADVANCE(50);
      END_STATE();
    case 110:
      if (lookahead == 'S') ADVANCE(533);
      END_STATE();
    case 111:
      if (lookahead == 'S') ADVANCE(459);
      END_STATE();
    case 112:
      if (lookahead == 'S') ADVANCE(114);
      END_STATE();
    case 113:
      if (lookahead == 'T') ADVANCE(521);
      END_STATE();
    case 114:
      if (lookahead == 'T') ADVANCE(525);
      END_STATE();
    case 115:
      if (lookahead == 'T') ADVANCE(531);
      END_STATE();
    case 116:
      if (lookahead == 'T') ADVANCE(85);
      END_STATE();
    case 117:
      if (lookahead == 'T') ADVANCE(55);
      END_STATE();
    case 118:
      if (lookahead == 'T') ADVANCE(103);
      END_STATE();
    case 119:
      if (lookahead == 'T') ADVANCE(261);
      END_STATE();
    case 120:
      if (lookahead == 'T') ADVANCE(70);
      END_STATE();
    case 121:
      if (lookahead == 'T') ADVANCE(262);
      END_STATE();
    case 122:
      if (lookahead == 'W') ADVANCE(551);
      END_STATE();
    case 123:
      if (lookahead == 'W') ADVANCE(279);
      END_STATE();
    case 124:
      if (lookahead == 'W') ADVANCE(280);
      END_STATE();
    case 125:
      if (lookahead == ']') ADVANCE(571);
      END_STATE();
    case 126:
      if (lookahead == ']') ADVANCE(567);
      END_STATE();
    case 127:
      if (lookahead == ']') ADVANCE(573);
      END_STATE();
    case 128:
      if (lookahead == ']') ADVANCE(569);
      END_STATE();
    case 129:
      if (lookahead == ']') ADVANCE(559);
      END_STATE();
    case 130:
      if (lookahead == ']') ADVANCE(563);
      END_STATE();
    case 131:
      if (lookahead == ']') ADVANCE(565);
      END_STATE();
    case 132:
      if (lookahead == ']') ADVANCE(561);
      END_STATE();
    case 133:
      if (lookahead == '`') ADVANCE(134);
      END_STATE();
    case 134:
      if (lookahead == '`') ADVANCE(847);
      END_STATE();
    case 135:
      if (lookahead == 'a') ADVANCE(494);
      if (lookahead == 'd') ADVANCE(42);
      END_STATE();
    case 136:
      if (lookahead == 'a') ADVANCE(39);
      END_STATE();
    case 137:
      if (lookahead == 'a') ADVANCE(179);
      END_STATE();
    case 138:
      if (lookahead == 'a') ADVANCE(294);
      if (lookahead == 'i') ADVANCE(292);
      END_STATE();
    case 139:
      if (lookahead == 'a') ADVANCE(307);
      END_STATE();
    case 140:
      if (lookahead == 'a') ADVANCE(189);
      if (lookahead == 'o') ADVANCE(358);
      END_STATE();
    case 141:
      if (lookahead == 'a') ADVANCE(200);
      END_STATE();
    case 142:
      if (lookahead == 'a') ADVANCE(200);
      if (lookahead == 'x') ADVANCE(28);
      END_STATE();
    case 143:
      if (lookahead == 'a') ADVANCE(407);
      END_STATE();
    case 144:
      if (lookahead == 'a') ADVANCE(367);
      END_STATE();
    case 145:
      if (lookahead == 'a') ADVANCE(366);
      END_STATE();
    case 146:
      if (lookahead == 'a') ADVANCE(383);
      END_STATE();
    case 147:
      if (lookahead == 'a') ADVANCE(286);
      END_STATE();
    case 148:
      if (lookahead == 'a') ADVANCE(457);
      END_STATE();
    case 149:
      if (lookahead == 'a') ADVANCE(131);
      END_STATE();
    case 150:
      if (lookahead == 'a') ADVANCE(451);
      END_STATE();
    case 151:
      if (lookahead == 'a') ADVANCE(391);
      END_STATE();
    case 152:
      if (lookahead == 'a') ADVANCE(391);
      if (lookahead == 'e') ADVANCE(378);
      END_STATE();
    case 153:
      if (lookahead == 'a') ADVANCE(281);
      END_STATE();
    case 154:
      if (lookahead == 'a') ADVANCE(314);
      END_STATE();
    case 155:
      if (lookahead == 'a') ADVANCE(426);
      END_STATE();
    case 156:
      if (lookahead == 'a') ADVANCE(426);
      if (lookahead == 'o') ADVANCE(195);
      if (lookahead == 'y') ADVANCE(469);
      END_STATE();
    case 157:
      if (lookahead == 'a') ADVANCE(453);
      END_STATE();
    case 158:
      if (lookahead == 'a') ADVANCE(315);
      END_STATE();
    case 159:
      if (lookahead == 'a') ADVANCE(316);
      END_STATE();
    case 160:
      if (lookahead == 'a') ADVANCE(461);
      END_STATE();
    case 161:
      if (lookahead == 'a') ADVANCE(449);
      END_STATE();
    case 162:
      if (lookahead == 'a') ADVANCE(365);
      if (lookahead == 'o') ADVANCE(336);
      END_STATE();
    case 163:
      if (lookahead == 'a') ADVANCE(497);
      END_STATE();
    case 164:
      if (lookahead == 'a') ADVANCE(297);
      END_STATE();
    case 165:
      if (lookahead == 'a') ADVANCE(458);
      END_STATE();
    case 166:
      if (lookahead == 'a') ADVANCE(308);
      END_STATE();
    case 167:
      if (lookahead == 'a') ADVANCE(390);
      END_STATE();
    case 168:
      if (lookahead == 'a') ADVANCE(368);
      END_STATE();
    case 169:
      if (lookahead == 'a') ADVANCE(403);
      END_STATE();
    case 170:
      if (lookahead == 'a') ADVANCE(439);
      END_STATE();
    case 171:
      if (lookahead == 'a') ADVANCE(300);
      END_STATE();
    case 172:
      if (lookahead == 'a') ADVANCE(301);
      END_STATE();
    case 173:
      if (lookahead == 'a') ADVANCE(302);
      END_STATE();
    case 174:
      if (lookahead == 'a') ADVANCE(467);
      END_STATE();
    case 175:
      if (lookahead == 'a') ADVANCE(405);
      END_STATE();
    case 176:
      if (lookahead == 'a') ADVANCE(473);
      END_STATE();
    case 177:
      if (lookahead == 'a') ADVANCE(470);
      END_STATE();
    case 178:
      if (lookahead == 'b') ADVANCE(354);
      if (lookahead == 'y') ADVANCE(33);
      END_STATE();
    case 179:
      if (lookahead == 'b') ADVANCE(296);
      END_STATE();
    case 180:
      if (lookahead == 'b') ADVANCE(356);
      END_STATE();
    case 181:
      if (lookahead == 'c') ADVANCE(51);
      END_STATE();
    case 182:
      if (lookahead == 'c') ADVANCE(263);
      END_STATE();
    case 183:
      if (lookahead == 'c') ADVANCE(349);
      END_STATE();
    case 184:
      if (lookahead == 'c') ADVANCE(293);
      END_STATE();
    case 185:
      if (lookahead == 'c') ADVANCE(144);
      END_STATE();
    case 186:
      if (lookahead == 'c') ADVANCE(348);
      END_STATE();
    case 187:
      if (lookahead == 'c') ADVANCE(168);
      END_STATE();
    case 188:
      if (lookahead == 'c') ADVANCE(360);
      END_STATE();
    case 189:
      if (lookahead == 'c') ADVANCE(245);
      END_STATE();
    case 190:
      if (lookahead == 'c') ADVANCE(485);
      END_STATE();
    case 191:
      if (lookahead == 'c') ADVANCE(471);
      END_STATE();
    case 192:
      if (lookahead == 'c') ADVANCE(177);
      END_STATE();
    case 193:
      if (lookahead == 'd') ADVANCE(42);
      END_STATE();
    case 194:
      if (lookahead == 'd') ADVANCE(628);
      END_STATE();
    case 195:
      if (lookahead == 'd') ADVANCE(499);
      END_STATE();
    case 196:
      if (lookahead == 'd') ADVANCE(277);
      END_STATE();
    case 197:
      if (lookahead == 'd') ADVANCE(422);
      END_STATE();
    case 198:
      if (lookahead == 'd') ADVANCE(213);
      END_STATE();
    case 199:
      if (lookahead == 'd') ADVANCE(214);
      END_STATE();
    case 200:
      if (lookahead == 'd') ADVANCE(233);
      END_STATE();
    case 201:
      if (lookahead == 'd') ADVANCE(241);
      END_STATE();
    case 202:
      if (lookahead == 'e') ADVANCE(142);
      END_STATE();
    case 203:
      if (lookahead == 'e') ADVANCE(251);
      END_STATE();
    case 204:
      if (lookahead == 'e') ADVANCE(44);
      END_STATE();
    case 205:
      if (lookahead == 'e') ADVANCE(891);
      END_STATE();
    case 206:
      if (lookahead == 'e') ADVANCE(893);
      END_STATE();
    case 207:
      if (lookahead == 'e') ADVANCE(594);
      END_STATE();
    case 208:
      if (lookahead == 'e') ADVANCE(587);
      END_STATE();
    case 209:
      if (lookahead == 'e') ADVANCE(581);
      END_STATE();
    case 210:
      if (lookahead == 'e') ADVANCE(586);
      END_STATE();
    case 211:
      if (lookahead == 'e') ADVANCE(588);
      END_STATE();
    case 212:
      if (lookahead == 'e') ADVANCE(248);
      END_STATE();
    case 213:
      if (lookahead == 'e') ADVANCE(887);
      END_STATE();
    case 214:
      if (lookahead == 'e') ADVANCE(886);
      END_STATE();
    case 215:
      if (lookahead == 'e') ADVANCE(888);
      END_STATE();
    case 216:
      if (lookahead == 'e') ADVANCE(889);
      END_STATE();
    case 217:
      if (lookahead == 'e') ADVANCE(377);
      END_STATE();
    case 218:
      if (lookahead == 'e') ADVANCE(250);
      END_STATE();
    case 219:
      if (lookahead == 'e') ADVANCE(495);
      END_STATE();
    case 220:
      if (lookahead == 'e') ADVANCE(29);
      END_STATE();
    case 221:
      if (lookahead == 'e') ADVANCE(384);
      END_STATE();
    case 222:
      if (lookahead == 'e') ADVANCE(252);
      END_STATE();
    case 223:
      if (lookahead == 'e') ADVANCE(196);
      END_STATE();
    case 224:
      if (lookahead == 'e') ADVANCE(493);
      if (lookahead == 't') ADVANCE(309);
      END_STATE();
    case 225:
      if (lookahead == 'e') ADVANCE(190);
      END_STATE();
    case 226:
      if (lookahead == 'e') ADVANCE(496);
      if (lookahead == 't') ADVANCE(309);
      END_STATE();
    case 227:
      if (lookahead == 'e') ADVANCE(421);
      END_STATE();
    case 228:
      if (lookahead == 'e') ADVANCE(32);
      END_STATE();
    case 229:
      if (lookahead == 'e') ADVANCE(424);
      END_STATE();
    case 230:
      if (lookahead == 'e') ADVANCE(194);
      END_STATE();
    case 231:
      if (lookahead == 'e') ADVANCE(191);
      END_STATE();
    case 232:
      if (lookahead == 'e') ADVANCE(409);
      END_STATE();
    case 233:
      if (lookahead == 'e') ADVANCE(379);
      END_STATE();
    case 234:
      if (lookahead == 'e') ADVANCE(158);
      END_STATE();
    case 235:
      if (lookahead == 'e') ADVANCE(381);
      END_STATE();
    case 236:
      if (lookahead == 'e') ADVANCE(141);
      END_STATE();
    case 237:
      if (lookahead == 'e') ADVANCE(382);
      END_STATE();
    case 238:
      if (lookahead == 'e') ADVANCE(404);
      END_STATE();
    case 239:
      if (lookahead == 'e') ADVANCE(380);
      END_STATE();
    case 240:
      if (lookahead == 'e') ADVANCE(414);
      END_STATE();
    case 241:
      if (lookahead == 'e') ADVANCE(416);
      END_STATE();
    case 242:
      if (lookahead == 'e') ADVANCE(435);
      END_STATE();
    case 243:
      if (lookahead == 'e') ADVANCE(46);
      END_STATE();
    case 244:
      if (lookahead == 'e') ADVANCE(186);
      END_STATE();
    case 245:
      if (lookahead == 'e') ADVANCE(395);
      END_STATE();
    case 246:
      if (lookahead == 'e') ADVANCE(176);
      END_STATE();
    case 247:
      if (lookahead == 'e') ADVANCE(440);
      END_STATE();
    case 248:
      if (lookahead == 'f') ADVANCE(275);
      END_STATE();
    case 249:
      if (lookahead == 'g') ADVANCE(626);
      END_STATE();
    case 250:
      if (lookahead == 'g') ADVANCE(219);
      END_STATE();
    case 251:
      if (lookahead == 'g') ADVANCE(219);
      if (lookahead == 't') ADVANCE(386);
      END_STATE();
    case 252:
      if (lookahead == 'g') ADVANCE(239);
      END_STATE();
    case 253:
      if (lookahead == 'g') ADVANCE(107);
      END_STATE();
    case 254:
      if (lookahead == 'h') ADVANCE(596);
      END_STATE();
    case 255:
      if (lookahead == 'h') ADVANCE(597);
      END_STATE();
    case 256:
      if (lookahead == 'h') ADVANCE(618);
      END_STATE();
    case 257:
      if (lookahead == 'h') ADVANCE(617);
      END_STATE();
    case 258:
      if (lookahead == 'h') ADVANCE(372);
      END_STATE();
    case 259:
      if (lookahead == 'h') ADVANCE(129);
      END_STATE();
    case 260:
      if (lookahead == 'h') ADVANCE(136);
      if (lookahead == 't') ADVANCE(165);
      END_STATE();
    case 261:
      if (lookahead == 'h') ADVANCE(154);
      END_STATE();
    case 262:
      if (lookahead == 'h') ADVANCE(159);
      END_STATE();
    case 263:
      if (lookahead == 'h') ADVANCE(240);
      END_STATE();
    case 264:
      if (lookahead == 'i') ADVANCE(181);
      END_STATE();
    case 265:
      if (lookahead == 'i') ADVANCE(369);
      END_STATE();
    case 266:
      if (lookahead == 'i') ADVANCE(227);
      END_STATE();
    case 267:
      if (lookahead == 'i') ADVANCE(311);
      END_STATE();
    case 268:
      if (lookahead == 'i') ADVANCE(337);
      END_STATE();
    case 269:
      if (lookahead == 'i') ADVANCE(324);
      if (lookahead == 'm') ADVANCE(163);
      END_STATE();
    case 270:
      if (lookahead == 'i') ADVANCE(343);
      END_STATE();
    case 271:
      if (lookahead == 'i') ADVANCE(347);
      END_STATE();
    case 272:
      if (lookahead == 'i') ADVANCE(137);
      END_STATE();
    case 273:
      if (lookahead == 'i') ADVANCE(319);
      END_STATE();
    case 274:
      if (lookahead == 'i') ADVANCE(207);
      END_STATE();
    case 275:
      if (lookahead == 'i') ADVANCE(331);
      END_STATE();
    case 276:
      if (lookahead == 'i') ADVANCE(352);
      END_STATE();
    case 277:
      if (lookahead == 'i') ADVANCE(399);
      END_STATE();
    case 278:
      if (lookahead == 'i') ADVANCE(437);
      END_STATE();
    case 279:
      if (lookahead == 'i') ADVANCE(460);
      END_STATE();
    case 280:
      if (lookahead == 'i') ADVANCE(462);
      END_STATE();
    case 281:
      if (lookahead == 'i') ADVANCE(330);
      END_STATE();
    case 282:
      if (lookahead == 'k') ADVANCE(266);
      END_STATE();
    case 283:
      if (lookahead == 'k') ADVANCE(274);
      END_STATE();
    case 284:
      if (lookahead == 'l') ADVANCE(592);
      END_STATE();
    case 285:
      if (lookahead == 'l') ADVANCE(895);
      END_STATE();
    case 286:
      if (lookahead == 'l') ADVANCE(584);
      END_STATE();
    case 287:
      if (lookahead == 'l') ADVANCE(63);
      END_STATE();
    case 288:
      if (lookahead == 'l') ADVANCE(74);
      END_STATE();
    case 289:
      if (lookahead == 'l') ADVANCE(851);
      END_STATE();
    case 290:
      if (lookahead == 'l') ADVANCE(852);
      END_STATE();
    case 291:
      if (lookahead == 'l') ADVANCE(285);
      END_STATE();
    case 292:
      if (lookahead == 'l') ADVANCE(220);
      END_STATE();
    case 293:
      if (lookahead == 'l') ADVANCE(480);
      END_STATE();
    case 294:
      if (lookahead == 'l') ADVANCE(431);
      END_STATE();
    case 295:
      if (lookahead == 'l') ADVANCE(362);
      END_STATE();
    case 296:
      if (lookahead == 'l') ADVANCE(210);
      END_STATE();
    case 297:
      if (lookahead == 'l') ADVANCE(412);
      END_STATE();
    case 298:
      if (lookahead == 'l') ADVANCE(234);
      END_STATE();
    case 299:
      if (lookahead == 'l') ADVANCE(231);
      END_STATE();
    case 300:
      if (lookahead == 'l') ADVANCE(417);
      END_STATE();
    case 301:
      if (lookahead == 'l') ADVANCE(418);
      END_STATE();
    case 302:
      if (lookahead == 'l') ADVANCE(419);
      END_STATE();
    case 303:
      if (lookahead == 'l') ADVANCE(455);
      END_STATE();
    case 304:
      if (lookahead == 'l') ADVANCE(299);
      END_STATE();
    case 305:
      if (lookahead == 'm') ADVANCE(104);
      END_STATE();
    case 306:
      if (lookahead == 'm') ADVANCE(62);
      END_STATE();
    case 307:
      if (lookahead == 'm') ADVANCE(427);
      END_STATE();
    case 308:
      if (lookahead == 'm') ADVANCE(429);
      END_STATE();
    case 309:
      if (lookahead == 'm') ADVANCE(288);
      END_STATE();
    case 310:
      if (lookahead == 'm') ADVANCE(289);
      END_STATE();
    case 311:
      if (lookahead == 'n') ADVANCE(253);
      END_STATE();
    case 312:
      if (lookahead == 'n') ADVANCE(599);
      END_STATE();
    case 313:
      if (lookahead == 'n') ADVANCE(580);
      END_STATE();
    case 314:
      if (lookahead == 'n') ADVANCE(612);
      END_STATE();
    case 315:
      if (lookahead == 'n') ADVANCE(625);
      END_STATE();
    case 316:
      if (lookahead == 'n') ADVANCE(608);
      END_STATE();
    case 317:
      if (lookahead == 'n') ADVANCE(627);
      END_STATE();
    case 318:
      if (lookahead == 'n') ADVANCE(850);
      END_STATE();
    case 319:
      if (lookahead == 'n') ADVANCE(249);
      END_STATE();
    case 320:
      if (lookahead == 'n') ADVANCE(197);
      if (lookahead == 'q') ADVANCE(483);
      if (lookahead == 'x') ADVANCE(278);
      END_STATE();
    case 321:
      if (lookahead == 'n') ADVANCE(423);
      END_STATE();
    case 322:
      if (lookahead == 'n') ADVANCE(184);
      if (lookahead == 's') ADVANCE(53);
      END_STATE();
    case 323:
      if (lookahead == 'n') ADVANCE(428);
      END_STATE();
    case 324:
      if (lookahead == 'n') ADVANCE(472);
      END_STATE();
    case 325:
      if (lookahead == 'n') ADVANCE(445);
      END_STATE();
    case 326:
      if (lookahead == 'n') ADVANCE(463);
      if (lookahead == 'u') ADVANCE(327);
      END_STATE();
    case 327:
      if (lookahead == 'n') ADVANCE(447);
      END_STATE();
    case 328:
      if (lookahead == 'n') ADVANCE(465);
      END_STATE();
    case 329:
      if (lookahead == 'n') ADVANCE(448);
      END_STATE();
    case 330:
      if (lookahead == 'n') ADVANCE(415);
      END_STATE();
    case 331:
      if (lookahead == 'n') ADVANCE(230);
      END_STATE();
    case 332:
      if (lookahead == 'n') ADVANCE(188);
      END_STATE();
    case 333:
      if (lookahead == 'n') ADVANCE(247);
      END_STATE();
    case 334:
      if (lookahead == 'n') ADVANCE(371);
      END_STATE();
    case 335:
      if (lookahead == 'o') ADVANCE(376);
      END_STATE();
    case 336:
      if (lookahead == 'o') ADVANCE(282);
      END_STATE();
    case 337:
      if (lookahead == 'o') ADVANCE(321);
      END_STATE();
    case 338:
      if (lookahead == 'o') ADVANCE(195);
      if (lookahead == 'y') ADVANCE(469);
      END_STATE();
    case 339:
      if (lookahead == 'o') ADVANCE(326);
      END_STATE();
    case 340:
      if (lookahead == 'o') ADVANCE(336);
      END_STATE();
    case 341:
      if (lookahead == 'o') ADVANCE(192);
      END_STATE();
    case 342:
      if (lookahead == 'o') ADVANCE(334);
      END_STATE();
    case 343:
      if (lookahead == 'o') ADVANCE(312);
      END_STATE();
    case 344:
      if (lookahead == 'o') ADVANCE(86);
      END_STATE();
    case 345:
      if (lookahead == 'o') ADVANCE(86);
      if (lookahead == 'r') ADVANCE(482);
      END_STATE();
    case 346:
      if (lookahead == 'o') ADVANCE(31);
      END_STATE();
    case 347:
      if (lookahead == 'o') ADVANCE(313);
      END_STATE();
    case 348:
      if (lookahead == 'o') ADVANCE(198);
      END_STATE();
    case 349:
      if (lookahead == 'o') ADVANCE(486);
      END_STATE();
    case 350:
      if (lookahead == 'o') ADVANCE(304);
      END_STATE();
    case 351:
      if (lookahead == 'o') ADVANCE(361);
      END_STATE();
    case 352:
      if (lookahead == 'o') ADVANCE(317);
      END_STATE();
    case 353:
      if (lookahead == 'o') ADVANCE(318);
      END_STATE();
    case 354:
      if (lookahead == 'o') ADVANCE(432);
      END_STATE();
    case 355:
      if (lookahead == 'o') ADVANCE(446);
      if (lookahead == 'u') ADVANCE(291);
      END_STATE();
    case 356:
      if (lookahead == 'o') ADVANCE(433);
      END_STATE();
    case 357:
      if (lookahead == 'o') ADVANCE(385);
      END_STATE();
    case 358:
      if (lookahead == 'o') ADVANCE(283);
      END_STATE();
    case 359:
      if (lookahead == 'o') ADVANCE(358);
      END_STATE();
    case 360:
      if (lookahead == 'o') ADVANCE(199);
      END_STATE();
    case 361:
      if (lookahead == 'o') ADVANCE(298);
      END_STATE();
    case 362:
      if (lookahead == 'o') ADVANCE(161);
      END_STATE();
    case 363:
      if (lookahead == 'o') ADVANCE(487);
      END_STATE();
    case 364:
      if (lookahead == 'p') ADVANCE(450);
      END_STATE();
    case 365:
      if (lookahead == 'p') ADVANCE(452);
      END_STATE();
    case 366:
      if (lookahead == 'p') ADVANCE(258);
      END_STATE();
    case 367:
      if (lookahead == 'p') ADVANCE(215);
      END_STATE();
    case 368:
      if (lookahead == 'p') ADVANCE(216);
      END_STATE();
    case 369:
      if (lookahead == 'p') ADVANCE(167);
      END_STATE();
    case 370:
      if (lookahead == 'p') ADVANCE(150);
      END_STATE();
    case 371:
      if (lookahead == 'p') ADVANCE(157);
      END_STATE();
    case 372:
      if (lookahead == 'q') ADVANCE(290);
      END_STATE();
    case 373:
      if (lookahead == 'q') ADVANCE(488);
      END_STATE();
    case 374:
      if (lookahead == 'q') ADVANCE(489);
      END_STATE();
    case 375:
      if (lookahead == 'q') ADVANCE(490);
      END_STATE();
    case 376:
      if (lookahead == 'r') ADVANCE(305);
      END_STATE();
    case 377:
      if (lookahead == 'r') ADVANCE(498);
      END_STATE();
    case 378:
      if (lookahead == 'r') ADVANCE(178);
      END_STATE();
    case 379:
      if (lookahead == 'r') ADVANCE(593);
      END_STATE();
    case 380:
      if (lookahead == 'r') ADVANCE(623);
      END_STATE();
    case 381:
      if (lookahead == 'r') ADVANCE(180);
      END_STATE();
    case 382:
      if (lookahead == 'r') ADVANCE(491);
      END_STATE();
    case 383:
      if (lookahead == 'r') ADVANCE(139);
      END_STATE();
    case 384:
      if (lookahead == 'r') ADVANCE(454);
      END_STATE();
    case 385:
      if (lookahead == 'r') ADVANCE(306);
      END_STATE();
    case 386:
      if (lookahead == 'r') ADVANCE(500);
      END_STATE();
    case 387:
      if (lookahead == 'r') ADVANCE(482);
      END_STATE();
    case 388:
      if (lookahead == 'r') ADVANCE(284);
      END_STATE();
    case 389:
      if (lookahead == 'r') ADVANCE(267);
      END_STATE();
    case 390:
      if (lookahead == 'r') ADVANCE(443);
      END_STATE();
    case 391:
      if (lookahead == 'r') ADVANCE(272);
      END_STATE();
    case 392:
      if (lookahead == 'r') ADVANCE(174);
      END_STATE();
    case 393:
      if (lookahead == 'r') ADVANCE(287);
      END_STATE();
    case 394:
      if (lookahead == 'r') ADVANCE(75);
      END_STATE();
    case 395:
      if (lookahead == 'r') ADVANCE(444);
      END_STATE();
    case 396:
      if (lookahead == 'r') ADVANCE(223);
      END_STATE();
    case 397:
      if (lookahead == 'r') ADVANCE(273);
      END_STATE();
    case 398:
      if (lookahead == 'r') ADVANCE(209);
      END_STATE();
    case 399:
      if (lookahead == 'r') ADVANCE(411);
      END_STATE();
    case 400:
      if (lookahead == 'r') ADVANCE(145);
      END_STATE();
    case 401:
      if (lookahead == 'r') ADVANCE(246);
      END_STATE();
    case 402:
      if (lookahead == 'r') ADVANCE(229);
      END_STATE();
    case 403:
      if (lookahead == 'r') ADVANCE(166);
      END_STATE();
    case 404:
      if (lookahead == 'r') ADVANCE(121);
      END_STATE();
    case 405:
      if (lookahead == 'r') ADVANCE(474);
      END_STATE();
    case 406:
      if (lookahead == 'r') ADVANCE(76);
      END_STATE();
    case 407:
      if (lookahead == 's') ADVANCE(264);
      END_STATE();
    case 408:
      if (lookahead == 's') ADVANCE(125);
      END_STATE();
    case 409:
      if (lookahead == 's') ADVANCE(602);
      END_STATE();
    case 410:
      if (lookahead == 's') ADVANCE(591);
      END_STATE();
    case 411:
      if (lookahead == 's') ADVANCE(582);
      END_STATE();
    case 412:
      if (lookahead == 's') ADVANCE(604);
      END_STATE();
    case 413:
      if (lookahead == 's') ADVANCE(621);
      END_STATE();
    case 414:
      if (lookahead == 's') ADVANCE(620);
      END_STATE();
    case 415:
      if (lookahead == 's') ADVANCE(619);
      END_STATE();
    case 416:
      if (lookahead == 's') ADVANCE(622);
      END_STATE();
    case 417:
      if (lookahead == 's') ADVANCE(606);
      END_STATE();
    case 418:
      if (lookahead == 's') ADVANCE(615);
      END_STATE();
    case 419:
      if (lookahead == 's') ADVANCE(610);
      END_STATE();
    case 420:
      if (lookahead == 's') ADVANCE(436);
      END_STATE();
    case 421:
      if (lookahead == 's') ADVANCE(126);
      END_STATE();
    case 422:
      if (lookahead == 's') ADVANCE(123);
      END_STATE();
    case 423:
      if (lookahead == 's') ADVANCE(127);
      END_STATE();
    case 424:
      if (lookahead == 's') ADVANCE(128);
      END_STATE();
    case 425:
      if (lookahead == 's') ADVANCE(342);
      END_STATE();
    case 426:
      if (lookahead == 's') ADVANCE(204);
      END_STATE();
    case 427:
      if (lookahead == 's') ADVANCE(130);
      END_STATE();
    case 428:
      if (lookahead == 's') ADVANCE(225);
      END_STATE();
    case 429:
      if (lookahead == 's') ADVANCE(132);
      END_STATE();
    case 430:
      if (lookahead == 's') ADVANCE(119);
      END_STATE();
    case 431:
      if (lookahead == 's') ADVANCE(206);
      END_STATE();
    case 432:
      if (lookahead == 's') ADVANCE(208);
      END_STATE();
    case 433:
      if (lookahead == 's') ADVANCE(211);
      END_STATE();
    case 434:
      if (lookahead == 's') ADVANCE(353);
      END_STATE();
    case 435:
      if (lookahead == 's') ADVANCE(430);
      END_STATE();
    case 436:
      if (lookahead == 's') ADVANCE(221);
      END_STATE();
    case 437:
      if (lookahead == 's') ADVANCE(466);
      END_STATE();
    case 438:
      if (lookahead == 's') ADVANCE(185);
      END_STATE();
    case 439:
      if (lookahead == 's') ADVANCE(243);
      END_STATE();
    case 440:
      if (lookahead == 's') ADVANCE(187);
      END_STATE();
    case 441:
      if (lookahead == 's') ADVANCE(124);
      END_STATE();
    case 442:
      if (lookahead == 't') ADVANCE(259);
      END_STATE();
    case 443:
      if (lookahead == 't') ADVANCE(78);
      END_STATE();
    case 444:
      if (lookahead == 't') ADVANCE(579);
      END_STATE();
    case 445:
      if (lookahead == 't') ADVANCE(585);
      END_STATE();
    case 446:
      if (lookahead == 't') ADVANCE(603);
      END_STATE();
    case 447:
      if (lookahead == 't') ADVANCE(885);
      END_STATE();
    case 448:
      if (lookahead == 't') ADVANCE(890);
      END_STATE();
    case 449:
      if (lookahead == 't') ADVANCE(624);
      END_STATE();
    case 450:
      if (lookahead == 't') ADVANCE(268);
      END_STATE();
    case 451:
      if (lookahead == 't') ADVANCE(254);
      END_STATE();
    case 452:
      if (lookahead == 't') ADVANCE(477);
      END_STATE();
    case 453:
      if (lookahead == 't') ADVANCE(255);
      END_STATE();
    case 454:
      if (lookahead == 't') ADVANCE(408);
      END_STATE();
    case 455:
      if (lookahead == 't') ADVANCE(265);
      END_STATE();
    case 456:
      if (lookahead == 't') ADVANCE(309);
      END_STATE();
    case 457:
      if (lookahead == 't') ADVANCE(149);
      END_STATE();
    case 458:
      if (lookahead == 't') ADVANCE(484);
      END_STATE();
    case 459:
      if (lookahead == 't') ADVANCE(389);
      END_STATE();
    case 460:
      if (lookahead == 't') ADVANCE(256);
      END_STATE();
    case 461:
      if (lookahead == 't') ADVANCE(182);
      END_STATE();
    case 462:
      if (lookahead == 't') ADVANCE(257);
      END_STATE();
    case 463:
      if (lookahead == 't') ADVANCE(153);
      END_STATE();
    case 464:
      if (lookahead == 't') ADVANCE(397);
      END_STATE();
    case 465:
      if (lookahead == 't') ADVANCE(222);
      END_STATE();
    case 466:
      if (lookahead == 't') ADVANCE(413);
      END_STATE();
    case 467:
      if (lookahead == 't') ADVANCE(270);
      END_STATE();
    case 468:
      if (lookahead == 't') ADVANCE(175);
      END_STATE();
    case 469:
      if (lookahead == 't') ADVANCE(232);
      END_STATE();
    case 470:
      if (lookahead == 't') ADVANCE(271);
      END_STATE();
    case 471:
      if (lookahead == 't') ADVANCE(276);
      END_STATE();
    case 472:
      if (lookahead == 't') ADVANCE(237);
      END_STATE();
    case 473:
      if (lookahead == 't') ADVANCE(238);
      END_STATE();
    case 474:
      if (lookahead == 't') ADVANCE(441);
      END_STATE();
    case 475:
      if (lookahead == 'u') ADVANCE(303);
      END_STATE();
    case 476:
      if (lookahead == 'u') ADVANCE(217);
      END_STATE();
    case 477:
      if (lookahead == 'u') ADVANCE(402);
      END_STATE();
    case 478:
      if (lookahead == 'u') ADVANCE(291);
      END_STATE();
    case 479:
      if (lookahead == 'u') ADVANCE(442);
      END_STATE();
    case 480:
      if (lookahead == 'u') ADVANCE(201);
      END_STATE();
    case 481:
      if (lookahead == 'u') ADVANCE(392);
      END_STATE();
    case 482:
      if (lookahead == 'u') ADVANCE(205);
      END_STATE();
    case 483:
      if (lookahead == 'u') ADVANCE(164);
      END_STATE();
    case 484:
      if (lookahead == 'u') ADVANCE(410);
      END_STATE();
    case 485:
      if (lookahead == 'u') ADVANCE(398);
      END_STATE();
    case 486:
      if (lookahead == 'u') ADVANCE(325);
      END_STATE();
    case 487:
      if (lookahead == 'u') ADVANCE(327);
      END_STATE();
    case 488:
      if (lookahead == 'u') ADVANCE(171);
      END_STATE();
    case 489:
      if (lookahead == 'u') ADVANCE(172);
      END_STATE();
    case 490:
      if (lookahead == 'u') ADVANCE(173);
      END_STATE();
    case 491:
      if (lookahead == 'v') ADVANCE(147);
      END_STATE();
    case 492:
      if (lookahead == 'v') ADVANCE(235);
      END_STATE();
    case 493:
      if (lookahead == 'x') ADVANCE(28);
      END_STATE();
    case 494:
      if (lookahead == 'x') ADVANCE(35);
      END_STATE();
    case 495:
      if (lookahead == 'x') ADVANCE(598);
      END_STATE();
    case 496:
      if (lookahead == 'x') ADVANCE(849);
      END_STATE();
    case 497:
      if (lookahead == 'x') ADVANCE(34);
      END_STATE();
    case 498:
      if (lookahead == 'y') ADVANCE(111);
      END_STATE();
    case 499:
      if (lookahead == 'y') ADVANCE(595);
      END_STATE();
    case 500:
      if (lookahead == 'y') ADVANCE(583);
      END_STATE();
    case 501:
      if (lookahead == '{') ADVANCE(879);
      END_STATE();
    case 502:
      if (lookahead == '}') ADVANCE(882);
      END_STATE();
    case 503:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(906);
      END_STATE();
    case 504:
      if (eof) ADVANCE(510);
      if (lookahead == '\n') ADVANCE(513);
      if (lookahead == '"') ADVANCE(633);
      if (lookahead == '#') ADVANCE(503);
      if (lookahead == '.') ADVANCE(899);
      if (lookahead == '<') ADVANCE(613);
      if (lookahead == 'C') ADVANCE(100);
      if (lookahead == 'D') ADVANCE(65);
      if (lookahead == 'E') ADVANCE(902);
      if (lookahead == 'G') ADVANCE(66);
      if (lookahead == 'H') ADVANCE(71);
      if (lookahead == 'L') ADVANCE(82);
      if (lookahead == 'O') ADVANCE(106);
      if (lookahead == 'P') ADVANCE(52);
      if (lookahead == 'T') ADVANCE(109);
      if (lookahead == 'U') ADVANCE(94);
      if (lookahead == 'V') ADVANCE(81);
      if (lookahead == '[') ADVANCE(870);
      if (lookahead == '`') ADVANCE(841);
      if (lookahead == 'b') ADVANCE(156);
      if (lookahead == 'c') ADVANCE(140);
      if (lookahead == 'd') ADVANCE(481);
      if (lookahead == 'e') ADVANCE(901);
      if (lookahead == 'f') ADVANCE(138);
      if (lookahead == 'h') ADVANCE(202);
      if (lookahead == 'i') ADVANCE(323);
      if (lookahead == 'j') ADVANCE(425);
      if (lookahead == 'l') ADVANCE(341);
      if (lookahead == 'm') ADVANCE(135);
      if (lookahead == 'n') ADVANCE(478);
      if (lookahead == 'r') ADVANCE(203);
      if (lookahead == 's') ADVANCE(260);
      if (lookahead == 't') ADVANCE(387);
      if (lookahead == 'u') ADVANCE(388);
      if (lookahead == 'v') ADVANCE(152);
      if (lookahead == 'x') ADVANCE(370);
      if (lookahead == '{') ADVANCE(866);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(897);
      if (anon_sym_LF_character_set_1(lookahead)) SKIP(504)
      END_STATE();
    case 505:
      if (eof) ADVANCE(510);
      if (lookahead == '\n') ADVANCE(513);
      if (lookahead == '"') ADVANCE(633);
      if (lookahead == '#') ADVANCE(503);
      if (sym_key_string_text_character_set_2(lookahead)) ADVANCE(810);
      if (lookahead == '.') ADVANCE(900);
      if (lookahead == '<') ADVANCE(613);
      if (lookahead == 'C') ADVANCE(697);
      if (lookahead == 'D') ADVANCE(668);
      if (lookahead == 'G') ADVANCE(669);
      if (lookahead == 'H') ADVANCE(650);
      if (lookahead == 'L') ADVANCE(651);
      if (lookahead == 'O') ADVANCE(703);
      if (lookahead == 'P') ADVANCE(649);
      if (lookahead == 'T') ADVANCE(705);
      if (lookahead == 'U') ADVANCE(691);
      if (lookahead == 'V') ADVANCE(681);
      if (lookahead == '[') ADVANCE(872);
      if (lookahead == '\\') ADVANCE(638);
      if (lookahead == '`') ADVANCE(841);
      if (lookahead == 'b') ADVANCE(791);
      if (lookahead == 'f') ADVANCE(654);
      if (lookahead == 'h') ADVANCE(718);
      if (lookahead == 'n') ADVANCE(784);
      if (lookahead == 't') ADVANCE(757);
      if (lookahead == '{') ADVANCE(866);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(810);
      if (anon_sym_LF_character_set_1(lookahead)) SKIP(505)
      END_STATE();
    case 506:
      if (eof) ADVANCE(510);
      if (lookahead == '\n') ADVANCE(513);
      if (lookahead == '"') ADVANCE(633);
      if (lookahead == '#') ADVANCE(503);
      if (sym_key_string_text_character_set_3(lookahead)) ADVANCE(810);
      if (lookahead == '<') ADVANCE(613);
      if (lookahead == 'C') ADVANCE(697);
      if (lookahead == 'D') ADVANCE(668);
      if (lookahead == 'G') ADVANCE(669);
      if (lookahead == 'H') ADVANCE(650);
      if (lookahead == 'L') ADVANCE(651);
      if (lookahead == 'O') ADVANCE(703);
      if (lookahead == 'P') ADVANCE(649);
      if (lookahead == 'T') ADVANCE(705);
      if (lookahead == 'U') ADVANCE(691);
      if (lookahead == 'V') ADVANCE(681);
      if (lookahead == '[') ADVANCE(872);
      if (lookahead == '\\') ADVANCE(638);
      if (lookahead == '`') ADVANCE(841);
      if (lookahead == 'b') ADVANCE(791);
      if (lookahead == 'f') ADVANCE(654);
      if (lookahead == 'h') ADVANCE(718);
      if (lookahead == 'n') ADVANCE(784);
      if (lookahead == 't') ADVANCE(757);
      if (lookahead == '{') ADVANCE(866);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(810);
      if (anon_sym_LF_character_set_1(lookahead)) SKIP(506)
      END_STATE();
    case 507:
      if (eof) ADVANCE(510);
      if (lookahead == '\n') ADVANCE(513);
      if (lookahead == '"') ADVANCE(633);
      if (lookahead == '#') ADVANCE(503);
      if (sym_key_string_text_character_set_3(lookahead)) ADVANCE(810);
      if (lookahead == '<') ADVANCE(613);
      if (lookahead == 'C') ADVANCE(697);
      if (lookahead == 'D') ADVANCE(668);
      if (lookahead == 'G') ADVANCE(669);
      if (lookahead == 'H') ADVANCE(670);
      if (lookahead == 'L') ADVANCE(651);
      if (lookahead == 'O') ADVANCE(703);
      if (lookahead == 'P') ADVANCE(649);
      if (lookahead == 'T') ADVANCE(705);
      if (lookahead == 'U') ADVANCE(691);
      if (lookahead == 'V') ADVANCE(681);
      if (lookahead == '[') ADVANCE(873);
      if (lookahead == '\\') ADVANCE(638);
      if (lookahead == '`') ADVANCE(841);
      if (lookahead == 'b') ADVANCE(791);
      if (lookahead == 'f') ADVANCE(654);
      if (lookahead == 'h') ADVANCE(718);
      if (lookahead == 'n') ADVANCE(784);
      if (lookahead == 't') ADVANCE(757);
      if (lookahead == '{') ADVANCE(866);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(810);
      if (anon_sym_LF_character_set_1(lookahead)) SKIP(507)
      END_STATE();
    case 508:
      if (eof) ADVANCE(510);
      if (lookahead == '\n') ADVANCE(514);
      if (lookahead == '"') ADVANCE(633);
      if (lookahead == '#') ADVANCE(503);
      if (sym_key_string_text_character_set_3(lookahead)) ADVANCE(810);
      if (lookahead == '<') ADVANCE(613);
      if (lookahead == 'C') ADVANCE(697);
      if (lookahead == 'D') ADVANCE(668);
      if (lookahead == 'G') ADVANCE(669);
      if (lookahead == 'H') ADVANCE(650);
      if (lookahead == 'L') ADVANCE(651);
      if (lookahead == 'O') ADVANCE(703);
      if (lookahead == 'P') ADVANCE(649);
      if (lookahead == 'T') ADVANCE(705);
      if (lookahead == 'U') ADVANCE(691);
      if (lookahead == 'V') ADVANCE(681);
      if (lookahead == '[') ADVANCE(872);
      if (lookahead == '\\') ADVANCE(638);
      if (lookahead == '`') ADVANCE(841);
      if (lookahead == 'b') ADVANCE(791);
      if (lookahead == 'f') ADVANCE(654);
      if (lookahead == 'h') ADVANCE(718);
      if (lookahead == 'n') ADVANCE(784);
      if (lookahead == 't') ADVANCE(757);
      if (lookahead == '{') ADVANCE(866);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(810);
      if (anon_sym_LF_character_set_1(lookahead)) ADVANCE(817);
      if (lookahead != 0) ADVANCE(816);
      END_STATE();
    case 509:
      if (eof) ADVANCE(510);
      if (lookahead == '\n') ADVANCE(516);
      if (lookahead == '"') ADVANCE(633);
      if (lookahead == '#') ADVANCE(503);
      if (lookahead == '<') ADVANCE(613);
      if (lookahead == 'C') ADVANCE(829);
      if (lookahead == 'D') ADVANCE(823);
      if (lookahead == 'G') ADVANCE(824);
      if (lookahead == 'H') ADVANCE(825);
      if (lookahead == 'L') ADVANCE(827);
      if (lookahead == 'O') ADVANCE(830);
      if (lookahead == 'P') ADVANCE(822);
      if (lookahead == 'T') ADVANCE(831);
      if (lookahead == 'U') ADVANCE(828);
      if (lookahead == 'V') ADVANCE(826);
      if (lookahead == '[') ADVANCE(871);
      if (lookahead == '\\') ADVANCE(638);
      if (lookahead == '`') ADVANCE(841);
      if (lookahead == 'b') ADVANCE(835);
      if (lookahead == 'f') ADVANCE(834);
      if (lookahead == 'h') ADVANCE(836);
      if (lookahead == 'n') ADVANCE(838);
      if (lookahead == 't') ADVANCE(837);
      if (lookahead == '{') ADVANCE(866);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(816);
      if (anon_sym_LF_character_set_1(lookahead)) ADVANCE(818);
      if (lookahead != 0) ADVANCE(816);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\t') ADVANCE(646);
      if (lookahead == '\n') ADVANCE(511);
      if (lookahead == '\r') ADVANCE(644);
      if (lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(640);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\t') ADVANCE(647);
      if (lookahead == '\n') ADVANCE(512);
      if (lookahead == '\r') ADVANCE(645);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(513);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(514);
      if (anon_sym_LF_character_set_1(lookahead)) ADVANCE(817);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(515);
      if (sym_filename_text_character_set_1(lookahead)) ADVANCE(861);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(516);
      if (anon_sym_LF_character_set_1(lookahead)) ADVANCE(818);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(517);
      if (anon_sym_LF_character_set_1(lookahead)) ADVANCE(819);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(518);
      if (anon_sym_LF_character_set_1(lookahead)) ADVANCE(820);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(519);
      if (anon_sym_LF_character_set_1(lookahead)) ADVANCE(821);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(520);
      if (anon_sym_LF_character_set_1(lookahead)) ADVANCE(854);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(anon_sym_GET);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(anon_sym_GET);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(810);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(anon_sym_HEAD);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(anon_sym_HEAD);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(810);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(anon_sym_POST);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(anon_sym_POST);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(810);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(anon_sym_PUT);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(anon_sym_PUT);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(810);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(anon_sym_DELETE);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(anon_sym_DELETE);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(810);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(anon_sym_CONNECT);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(anon_sym_CONNECT);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(810);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(anon_sym_OPTIONS);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(anon_sym_OPTIONS);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(810);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(anon_sym_TRACE);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(anon_sym_TRACE);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(810);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(anon_sym_PATCH);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(anon_sym_PATCH);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(810);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(anon_sym_LINK);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(anon_sym_LINK);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(810);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(anon_sym_UNLINK);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(anon_sym_UNLINK);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(810);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(anon_sym_PURGE);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(anon_sym_PURGE);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(810);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(anon_sym_LOCK);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(anon_sym_LOCK);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(810);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(anon_sym_UNLOCK);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(anon_sym_UNLOCK);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(810);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(anon_sym_PROPFIND);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(anon_sym_PROPFIND);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(810);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(anon_sym_VIEW);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(anon_sym_VIEW);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(810);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(anon_sym_HTTP_SLASH1_DOT0);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(anon_sym_HTTP_SLASH1_DOT1);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(anon_sym_HTTP_SLASH2);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(anon_sym_HTTP_SLASH_STAR);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(aux_sym_status_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(557);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(anon_sym_LBRACKBasicAuth_RBRACK);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(anon_sym_LBRACKBasicAuth_RBRACK);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(810);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(anon_sym_LBRACKQueryStringParams_RBRACK);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(anon_sym_LBRACKQueryStringParams_RBRACK);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(810);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(anon_sym_LBRACKFormParams_RBRACK);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(anon_sym_LBRACKFormParams_RBRACK);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(810);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(anon_sym_LBRACKMultipartFormData_RBRACK);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(anon_sym_LBRACKMultipartFormData_RBRACK);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(810);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(anon_sym_LBRACKCookies_RBRACK);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(anon_sym_LBRACKCookies_RBRACK);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(810);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(anon_sym_LBRACKCaptures_RBRACK);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(anon_sym_LBRACKCaptures_RBRACK);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(810);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(anon_sym_LBRACKAsserts_RBRACK);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(anon_sym_LBRACKAsserts_RBRACK);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(810);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(anon_sym_LBRACKOptions_RBRACK);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(anon_sym_LBRACKOptions_RBRACK);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(810);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(anon_sym_file_COMMA);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(aux_sym_file_contenttype_token1);
      if (lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(578);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(anon_sym_cacert);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(anon_sym_location);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(anon_sym_insecure);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(anon_sym_max_DASHredirs);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(anon_sym_retry);
      if (lookahead == '-') ADVANCE(269);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(anon_sym_retry_DASHinterval);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(anon_sym_retry_DASHmax_DASHcount);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(anon_sym_variable);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(anon_sym_verbose);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(anon_sym_very_DASHverbose);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(605);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(anon_sym_status);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(anon_sym_url);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(anon_sym_header);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(anon_sym_cookie);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(anon_sym_body);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(anon_sym_xpath);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(anon_sym_jsonpath);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(anon_sym_regex);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(anon_sym_duration);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(anon_sym_sha256);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(anon_sym_md5);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(anon_sym_bytes);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(anon_sym_not);
      if (lookahead == 'E') ADVANCE(373);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(anon_sym_equals);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(anon_sym_notEquals);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(anon_sym_greaterThan);
      if (lookahead == 'O') ADVANCE(406);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(611);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(anon_sym_greaterThanOrEquals);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(anon_sym_lessThan);
      if (lookahead == 'O') ADVANCE(394);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(616);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(anon_sym_lessThanOrEquals);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(anon_sym_startsWith);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(anon_sym_endsWith);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(anon_sym_contains);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(anon_sym_matches);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(anon_sym_exists);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(anon_sym_includes);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(anon_sym_isInteger);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(anon_sym_isFloat);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(anon_sym_isBoolean);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(anon_sym_isString);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(anon_sym_isCollection);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(anon_sym_To_COMMABe_COMMADefined);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(anon_sym_base64_COMMA);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(aux_sym_oneline_base64_token1);
      if (lookahead == '\n') ADVANCE(630);
      if (('+' <= lookahead && lookahead <= '-') ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(631);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(aux_sym_oneline_base64_token1);
      if (lookahead == '\n' ||
          ('+' <= lookahead && lookahead <= '-') ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(631);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(anon_sym_hex_COMMA);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(aux_sym_quoted_string_text_token1);
      if (lookahead == '\n') ADVANCE(637);
      if (lookahead == '"' ||
          lookahead == '\\') ADVANCE(906);
      if (lookahead != 0) ADVANCE(634);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(aux_sym_quoted_string_text_token1);
      if (lookahead == '#') ADVANCE(634);
      if (lookahead == '{') ADVANCE(636);
      if (anon_sym__character_set_1(lookahead)) ADVANCE(635);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(637);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(aux_sym_quoted_string_text_token1);
      if (lookahead == '{') ADVANCE(881);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(637);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(aux_sym_quoted_string_text_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(637);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(aux_sym_invalid_quoted_string_escaped_char_token1);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(aux_sym_invalid_quoted_string_escaped_char_token1);
      if (lookahead == 8) ADVANCE(642);
      if (lookahead == '\t') ADVANCE(646);
      if (lookahead == '\n') ADVANCE(511);
      if (lookahead == '\r') ADVANCE(644);
      if (lookahead == '#') ADVANCE(641);
      if (lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(640);
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != '"' &&
          lookahead != '\\' &&
          lookahead != 'u') ADVANCE(639);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(aux_sym_invalid_quoted_string_escaped_char_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(906);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(anon_sym_2);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(anon_sym_CR);
      if (lookahead == '\t') ADVANCE(646);
      if (lookahead == '\n') ADVANCE(511);
      if (lookahead == '\r') ADVANCE(644);
      if (lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(640);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(anon_sym_CR);
      if (lookahead == '\t') ADVANCE(647);
      if (lookahead == '\n') ADVANCE(512);
      if (lookahead == '\r') ADVANCE(645);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead == '\t') ADVANCE(646);
      if (lookahead == '\n') ADVANCE(511);
      if (lookahead == '\r') ADVANCE(644);
      if (lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(640);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead == '\t') ADVANCE(647);
      if (lookahead == '\n') ADVANCE(512);
      if (lookahead == '\r') ADVANCE(645);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(anon_sym_u);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(sym_key_string_text);
      if (sym_key_string_text_character_set_4(lookahead)) ADVANCE(810);
      if (lookahead == 'A') ADVANCE(714);
      if (lookahead == 'O') ADVANCE(708);
      if (lookahead == 'R') ADVANCE(698);
      if (lookahead == 'U') ADVANCE(653);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(sym_key_string_text);
      if (sym_key_string_text_character_set_5(lookahead)) ADVANCE(810);
      if (lookahead == 'E') ADVANCE(657);
      if (lookahead == 'T') ADVANCE(712);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(sym_key_string_text);
      if (sym_key_string_text_character_set_6(lookahead)) ADVANCE(810);
      if (lookahead == 'I') ADVANCE(690);
      if (lookahead == 'O') ADVANCE(661);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(sym_key_string_text);
      if (sym_key_string_text_character_set_6(lookahead)) ADVANCE(810);
      if (lookahead == 'I') ADVANCE(694);
      if (lookahead == 'O') ADVANCE(662);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(sym_key_string_text);
      if (sym_key_string_text_character_set_7(lookahead)) ADVANCE(810);
      if (lookahead == 'R') ADVANCE(679);
      if (lookahead == 'T') ADVANCE(528);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'h') ||
          ('j' <= lookahead && lookahead <= 'z')) ADVANCE(810);
      if (lookahead == 'a') ADVANCE(738);
      if (lookahead == 'i') ADVANCE(736);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '3') ||
          ('5' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(810);
      if (lookahead == '4') ADVANCE(813);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '5') ||
          ('7' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(810);
      if (lookahead == '6') ADVANCE(655);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '@' ||
          ('B' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(810);
      if (lookahead == 'A') ADVANCE(665);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '@' ||
          ('B' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(810);
      if (lookahead == 'A') ADVANCE(663);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '@' ||
          ('B' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(810);
      if (lookahead == 'A') ADVANCE(785);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'B') ||
          ('D' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(810);
      if (lookahead == 'C') ADVANCE(680);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'B') ||
          ('D' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(810);
      if (lookahead == 'C') ADVANCE(685);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'B') ||
          ('D' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(810);
      if (lookahead == 'C') ADVANCE(687);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'B') ||
          ('D' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(810);
      if (lookahead == 'C') ADVANCE(673);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'B') ||
          ('D' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(810);
      if (lookahead == 'C') ADVANCE(711);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'C') ||
          ('E' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(810);
      if (lookahead == 'D') ADVANCE(524);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'C') ||
          ('E' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(810);
      if (lookahead == 'D') ADVANCE(550);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'C') ||
          ('E' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(810);
      if (lookahead == 'D') ADVANCE(797);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'D') ||
          ('F' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(810);
      if (lookahead == 'E') ADVANCE(688);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'D') ||
          ('F' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(810);
      if (lookahead == 'E') ADVANCE(709);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'D') ||
          ('F' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(810);
      if (lookahead == 'E') ADVANCE(657);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'D') ||
          ('F' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(810);
      if (lookahead == 'E') ADVANCE(716);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'D') ||
          ('F' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(810);
      if (lookahead == 'E') ADVANCE(544);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(810);
      if (lookahead == 'E') ADVANCE(536);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(810);
      if (lookahead == 'E') ADVANCE(530);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(810);
      if (lookahead == 'E') ADVANCE(664);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(810);
      if (lookahead == 'E') ADVANCE(715);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'E') ||
          ('G' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(810);
      if (lookahead == 'F') ADVANCE(682);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'E') ||
          ('G' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(810);
      if (lookahead == 'F') ADVANCE(750);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'F') ||
          ('H' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(810);
      if (lookahead == 'G') ADVANCE(672);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'G') ||
          ('I' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(810);
      if (lookahead == 'H') ADVANCE(538);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'H') ||
          ('J' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(810);
      if (lookahead == 'I') ADVANCE(671);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'H') ||
          ('J' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(810);
      if (lookahead == 'I') ADVANCE(693);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'H') ||
          ('J' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(810);
      if (lookahead == 'I') ADVANCE(699);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'J') ||
          ('L' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(810);
      if (lookahead == 'K') ADVANCE(540);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'J') ||
          ('L' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(810);
      if (lookahead == 'K') ADVANCE(546);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'J') ||
          ('L' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(810);
      if (lookahead == 'K') ADVANCE(542);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'J') ||
          ('L' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(810);
      if (lookahead == 'K') ADVANCE(548);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'K') ||
          ('M' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(810);
      if (lookahead == 'L') ADVANCE(676);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'K') ||
          ('M' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(810);
      if (lookahead == 'L') ADVANCE(652);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'M') ||
          ('O' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(810);
      if (lookahead == 'N') ADVANCE(684);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'M') ||
          ('O' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(810);
      if (lookahead == 'N') ADVANCE(689);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'M') ||
          ('O' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(810);
      if (lookahead == 'N') ADVANCE(706);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'M') ||
          ('O' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(810);
      if (lookahead == 'N') ADVANCE(666);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'M') ||
          ('O' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(810);
      if (lookahead == 'N') ADVANCE(686);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(810);
      if (lookahead == 'N') ADVANCE(696);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(810);
      if (lookahead == 'N') ADVANCE(675);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'N') ||
          ('P' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(810);
      if (lookahead == 'O') ADVANCE(695);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'N') ||
          ('P' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(810);
      if (lookahead == 'O') ADVANCE(701);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'N') ||
          ('P' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(810);
      if (lookahead == 'O') ADVANCE(692);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'O') ||
          ('Q' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(810);
      if (lookahead == 'P') ADVANCE(814);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'O') ||
          ('Q' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(810);
      if (lookahead == 'P') ADVANCE(677);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'O') ||
          ('Q' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(810);
      if (lookahead == 'P') ADVANCE(795);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'O') ||
          ('Q' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(810);
      if (lookahead == 'P') ADVANCE(713);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'O') ||
          ('Q' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(810);
      if (lookahead == 'P') ADVANCE(801);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Q') ||
          ('S' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(810);
      if (lookahead == 'R') ADVANCE(658);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'R') ||
          ('T' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(810);
      if (lookahead == 'S') ADVANCE(534);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'R') ||
          ('T' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(810);
      if (lookahead == 'S') ADVANCE(781);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'R') ||
          ('T' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(810);
      if (lookahead == 'S') ADVANCE(710);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'S') ||
          ('U' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(810);
      if (lookahead == 'T') ADVANCE(522);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'S') ||
          ('U' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(810);
      if (lookahead == 'T') ADVANCE(526);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'S') ||
          ('U' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(810);
      if (lookahead == 'T') ADVANCE(532);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'S') ||
          ('U' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(810);
      if (lookahead == 'T') ADVANCE(700);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'S') ||
          ('U' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(810);
      if (lookahead == 'T') ADVANCE(683);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(810);
      if (lookahead == 'T') ADVANCE(660);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(810);
      if (lookahead == 'T') ADVANCE(674);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'V') ||
          ('X' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(810);
      if (lookahead == 'W') ADVANCE(552);
      END_STATE();
    case 717:
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
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(810);
      if (lookahead == 'c') ADVANCE(659);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(810);
      if (lookahead == 'e') ADVANCE(789);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(810);
      if (lookahead == 'e') ADVANCE(656);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(810);
      if (lookahead == 'e') ADVANCE(892);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(810);
      if (lookahead == 'e') ADVANCE(894);
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
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(810);
      if (lookahead == 'e') ADVANCE(812);
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
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(810);
      if (lookahead == 'e') ADVANCE(755);
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
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(810);
      if (lookahead == 'e') ADVANCE(765);
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
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(810);
      if (lookahead == 'e') ADVANCE(761);
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
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(810);
      if (lookahead == 'e') ADVANCE(772);
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
          ('a' <= lookahead && lookahead <= 'f') ||
          ('h' <= lookahead && lookahead <= 'z')) ADVANCE(810);
      if (lookahead == 'g') ADVANCE(704);
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
          ('a' <= lookahead && lookahead <= 'g') ||
          ('i' <= lookahead && lookahead <= 'z')) ADVANCE(810);
      if (lookahead == 'h') ADVANCE(804);
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
          ('a' <= lookahead && lookahead <= 'h') ||
          ('j' <= lookahead && lookahead <= 'z')) ADVANCE(810);
      if (lookahead == 'i') ADVANCE(717);
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
          ('a' <= lookahead && lookahead <= 'h') ||
          ('j' <= lookahead && lookahead <= 'z')) ADVANCE(810);
      if (lookahead == 'i') ADVANCE(753);
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
          ('a' <= lookahead && lookahead <= 'h') ||
          ('j' <= lookahead && lookahead <= 'z')) ADVANCE(810);
      if (lookahead == 'i') ADVANCE(744);
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
          ('a' <= lookahead && lookahead <= 'h') ||
          ('j' <= lookahead && lookahead <= 'z')) ADVANCE(810);
      if (lookahead == 'i') ADVANCE(747);
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
          ('a' <= lookahead && lookahead <= 'h') ||
          ('j' <= lookahead && lookahead <= 'z')) ADVANCE(810);
      if (lookahead == 'i') ADVANCE(724);
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
          ('a' <= lookahead && lookahead <= 'j') ||
          ('l' <= lookahead && lookahead <= 'z')) ADVANCE(810);
      if (lookahead == 'k') ADVANCE(733);
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
          ('a' <= lookahead && lookahead <= 'k') ||
          ('m' <= lookahead && lookahead <= 'z')) ADVANCE(810);
      if (lookahead == 'l') ADVANCE(896);
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
          ('a' <= lookahead && lookahead <= 'k') ||
          ('m' <= lookahead && lookahead <= 'z')) ADVANCE(810);
      if (lookahead == 'l') ADVANCE(722);
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
          ('a' <= lookahead && lookahead <= 'k') ||
          ('m' <= lookahead && lookahead <= 'z')) ADVANCE(810);
      if (lookahead == 'l') ADVANCE(735);
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
          ('a' <= lookahead && lookahead <= 'k') ||
          ('m' <= lookahead && lookahead <= 'z')) ADVANCE(810);
      if (lookahead == 'l') ADVANCE(769);
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
          ('a' <= lookahead && lookahead <= 'k') ||
          ('m' <= lookahead && lookahead <= 'z')) ADVANCE(810);
      if (lookahead == 'l') ADVANCE(778);
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
          ('a' <= lookahead && lookahead <= 'l') ||
          ('n' <= lookahead && lookahead <= 'z')) ADVANCE(810);
      if (lookahead == 'm') ADVANCE(667);
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
          ('a' <= lookahead && lookahead <= 'l') ||
          ('n' <= lookahead && lookahead <= 'z')) ADVANCE(810);
      if (lookahead == 'm') ADVANCE(702);
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
          ('a' <= lookahead && lookahead <= 'l') ||
          ('n' <= lookahead && lookahead <= 'z')) ADVANCE(810);
      if (lookahead == 'm') ADVANCE(768);
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
          ('a' <= lookahead && lookahead <= 'l') ||
          ('n' <= lookahead && lookahead <= 'z')) ADVANCE(810);
      if (lookahead == 'm') ADVANCE(770);
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
          ('a' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'z')) ADVANCE(810);
      if (lookahead == 'n') ADVANCE(727);
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
          ('a' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'z')) ADVANCE(810);
      if (lookahead == 'n') ADVANCE(766);
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
          ('a' <= lookahead && lookahead <= 'n') ||
          ('p' <= lookahead && lookahead <= 'z')) ADVANCE(810);
      if (lookahead == 'o') ADVANCE(734);
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
          ('a' <= lookahead && lookahead <= 'n') ||
          ('p' <= lookahead && lookahead <= 'z')) ADVANCE(810);
      if (lookahead == 'o') ADVANCE(745);
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
          ('a' <= lookahead && lookahead <= 'n') ||
          ('p' <= lookahead && lookahead <= 'z')) ADVANCE(810);
      if (lookahead == 'o') ADVANCE(754);
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
          ('a' <= lookahead && lookahead <= 'n') ||
          ('p' <= lookahead && lookahead <= 'z')) ADVANCE(810);
      if (lookahead == 'o') ADVANCE(746);
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
          ('a' <= lookahead && lookahead <= 'n') ||
          ('p' <= lookahead && lookahead <= 'z')) ADVANCE(810);
      if (lookahead == 'o') ADVANCE(758);
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
          ('a' <= lookahead && lookahead <= 'o') ||
          ('q' <= lookahead && lookahead <= 'z')) ADVANCE(810);
      if (lookahead == 'p') ADVANCE(777);
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
          ('a' <= lookahead && lookahead <= 'o') ||
          ('q' <= lookahead && lookahead <= 'z')) ADVANCE(810);
      if (lookahead == 'p') ADVANCE(780);
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
          ('a' <= lookahead && lookahead <= 'o') ||
          ('q' <= lookahead && lookahead <= 'z')) ADVANCE(810);
      if (lookahead == 'p') ADVANCE(796);
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
          ('a' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(810);
      if (lookahead == 'r') ADVANCE(741);
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
          ('a' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(810);
      if (lookahead == 'r') ADVANCE(790);
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
          ('a' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(810);
      if (lookahead == 'r') ADVANCE(794);
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
          ('a' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(810);
      if (lookahead == 'r') ADVANCE(787);
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
          ('a' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(810);
      if (lookahead == 'r') ADVANCE(740);
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
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(810);
      if (lookahead == 'r') ADVANCE(776);
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
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(810);
      if (lookahead == 'r') ADVANCE(731);
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
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(810);
      if (lookahead == 'r') ADVANCE(782);
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
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(810);
      if (lookahead == 'r') ADVANCE(726);
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
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(810);
      if (lookahead == 'r') ADVANCE(800);
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
          ('a' <= lookahead && lookahead <= 'r') ||
          ('t' <= lookahead && lookahead <= 'z')) ADVANCE(810);
      if (lookahead == 's') ADVANCE(729);
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
          ('a' <= lookahead && lookahead <= 'r') ||
          ('t' <= lookahead && lookahead <= 'z')) ADVANCE(810);
      if (lookahead == 's') ADVANCE(802);
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
          ('a' <= lookahead && lookahead <= 'r') ||
          ('t' <= lookahead && lookahead <= 'z')) ADVANCE(810);
      if (lookahead == 's') ADVANCE(803);
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
          ('a' <= lookahead && lookahead <= 'r') ||
          ('t' <= lookahead && lookahead <= 'z')) ADVANCE(810);
      if (lookahead == 's') ADVANCE(719);
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
          ('a' <= lookahead && lookahead <= 'r') ||
          ('t' <= lookahead && lookahead <= 'z')) ADVANCE(810);
      if (lookahead == 's') ADVANCE(805);
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
          ('t' <= lookahead && lookahead <= 'z')) ADVANCE(810);
      if (lookahead == 's') ADVANCE(721);
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
          ('t' <= lookahead && lookahead <= 'z')) ADVANCE(810);
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
          ('t' <= lookahead && lookahead <= 'z')) ADVANCE(810);
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
          ('t' <= lookahead && lookahead <= 'z')) ADVANCE(810);
      if (lookahead == 's') ADVANCE(809);
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
          ('t' <= lookahead && lookahead <= 'z')) ADVANCE(810);
      if (lookahead == 's') ADVANCE(725);
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
          ('t' <= lookahead && lookahead <= 'z')) ADVANCE(810);
      if (lookahead == 's') ADVANCE(773);
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
          ('a' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z')) ADVANCE(810);
      if (lookahead == 't') ADVANCE(728);
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
          ('a' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z')) ADVANCE(810);
      if (lookahead == 't') ADVANCE(678);
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
          ('a' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z')) ADVANCE(810);
      if (lookahead == 't') ADVANCE(732);
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
          ('a' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z')) ADVANCE(810);
      if (lookahead == 't') ADVANCE(730);
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
          ('a' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z')) ADVANCE(810);
      if (lookahead == 't') ADVANCE(798);
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
          ('u' <= lookahead && lookahead <= 'z')) ADVANCE(810);
      if (lookahead == 't') ADVANCE(788);
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
          ('u' <= lookahead && lookahead <= 'z')) ADVANCE(810);
      if (lookahead == 't') ADVANCE(760);
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
          ('u' <= lookahead && lookahead <= 'z')) ADVANCE(810);
      if (lookahead == 't') ADVANCE(771);
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
          ('a' <= lookahead && lookahead <= 't') ||
          ('v' <= lookahead && lookahead <= 'z')) ADVANCE(810);
      if (lookahead == 'u') ADVANCE(723);
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
          ('a' <= lookahead && lookahead <= 't') ||
          ('v' <= lookahead && lookahead <= 'z')) ADVANCE(810);
      if (lookahead == 'u') ADVANCE(737);
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
          ('a' <= lookahead && lookahead <= 't') ||
          ('v' <= lookahead && lookahead <= 'z')) ADVANCE(810);
      if (lookahead == 'u') ADVANCE(775);
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
          ('a' <= lookahead && lookahead <= 't') ||
          ('v' <= lookahead && lookahead <= 'z')) ADVANCE(810);
      if (lookahead == 'u') ADVANCE(739);
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
          ('a' <= lookahead && lookahead <= 't') ||
          ('v' <= lookahead && lookahead <= 'z')) ADVANCE(810);
      if (lookahead == 'u') ADVANCE(720);
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
          ('v' <= lookahead && lookahead <= 'z')) ADVANCE(810);
      if (lookahead == 'u') ADVANCE(762);
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
          ('a' <= lookahead && lookahead <= 'w') ||
          lookahead == 'y' ||
          lookahead == 'z') ADVANCE(810);
      if (lookahead == 'x') ADVANCE(811);
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
          ('a' <= lookahead && lookahead <= 'x') ||
          lookahead == 'z') ADVANCE(810);
      if (lookahead == 'y') ADVANCE(707);
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
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(810);
      if (lookahead == 'a') ADVANCE(767);
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
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(810);
      if (lookahead == 'a') ADVANCE(738);
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
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(810);
      if (lookahead == 'a') ADVANCE(764);
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
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(810);
      if (lookahead == 'a') ADVANCE(742);
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
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(810);
      if (lookahead == 'a') ADVANCE(756);
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
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(810);
      if (lookahead == 'a') ADVANCE(759);
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
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(810);
      if (lookahead == 'a') ADVANCE(779);
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
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(810);
      if (lookahead == 'a') ADVANCE(806);
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
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(810);
      if (lookahead == 'a') ADVANCE(752);
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
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(810);
      if (lookahead == 'a') ADVANCE(743);
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
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(810);
      if (lookahead == 'a') ADVANCE(763);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(810);
      if (lookahead == ']') ADVANCE(568);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(810);
      if (lookahead == ']') ADVANCE(574);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(810);
      if (lookahead == ']') ADVANCE(560);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(810);
      if (lookahead == ']') ADVANCE(564);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(810);
      if (lookahead == ']') ADVANCE(566);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(810);
      if (lookahead == ']') ADVANCE(562);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(810);
      if (lookahead == ']') ADVANCE(572);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(810);
      if (lookahead == ']') ADVANCE(570);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(810);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(810);
      if (lookahead == ',') ADVANCE(632);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(810);
      if (lookahead == ',') ADVANCE(576);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(810);
      if (lookahead == ',') ADVANCE(629);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(810);
      if (lookahead == '/') ADVANCE(27);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(906);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(aux_sym_value_string_text_token1);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(aux_sym_value_string_text_token1);
      if (lookahead == '\n') ADVANCE(514);
      if (lookahead == '"') ADVANCE(633);
      if (sym_key_string_text_character_set_3(lookahead)) ADVANCE(810);
      if (lookahead == '<') ADVANCE(613);
      if (lookahead == 'C') ADVANCE(697);
      if (lookahead == 'D') ADVANCE(668);
      if (lookahead == 'G') ADVANCE(669);
      if (lookahead == 'H') ADVANCE(650);
      if (lookahead == 'L') ADVANCE(651);
      if (lookahead == 'O') ADVANCE(703);
      if (lookahead == 'P') ADVANCE(649);
      if (lookahead == 'T') ADVANCE(705);
      if (lookahead == 'U') ADVANCE(691);
      if (lookahead == 'V') ADVANCE(681);
      if (lookahead == '[') ADVANCE(872);
      if (lookahead == '`') ADVANCE(841);
      if (lookahead == 'b') ADVANCE(791);
      if (lookahead == 'f') ADVANCE(654);
      if (lookahead == 'h') ADVANCE(718);
      if (lookahead == 'n') ADVANCE(784);
      if (lookahead == 't') ADVANCE(757);
      if (lookahead == '{') ADVANCE(866);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(810);
      if (anon_sym_LF_character_set_1(lookahead)) ADVANCE(817);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(aux_sym_value_string_text_token1);
      if (lookahead == '\n') ADVANCE(516);
      if (lookahead == '"') ADVANCE(633);
      if (lookahead == '<') ADVANCE(613);
      if (lookahead == 'C') ADVANCE(829);
      if (lookahead == 'D') ADVANCE(823);
      if (lookahead == 'G') ADVANCE(824);
      if (lookahead == 'H') ADVANCE(825);
      if (lookahead == 'L') ADVANCE(827);
      if (lookahead == 'O') ADVANCE(830);
      if (lookahead == 'P') ADVANCE(822);
      if (lookahead == 'T') ADVANCE(831);
      if (lookahead == 'U') ADVANCE(828);
      if (lookahead == 'V') ADVANCE(826);
      if (lookahead == '[') ADVANCE(871);
      if (lookahead == '`') ADVANCE(841);
      if (lookahead == 'b') ADVANCE(835);
      if (lookahead == 'f') ADVANCE(834);
      if (lookahead == 'h') ADVANCE(836);
      if (lookahead == 'n') ADVANCE(838);
      if (lookahead == 't') ADVANCE(837);
      if (lookahead == '{') ADVANCE(866);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(816);
      if (anon_sym_LF_character_set_1(lookahead)) ADVANCE(818);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(aux_sym_value_string_text_token1);
      if (lookahead == '\n') ADVANCE(517);
      if (lookahead == 'f') ADVANCE(834);
      if (lookahead == 'n') ADVANCE(838);
      if (lookahead == 't') ADVANCE(837);
      if (lookahead == '{') ADVANCE(839);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(816);
      if (anon_sym_LF_character_set_1(lookahead)) ADVANCE(819);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(aux_sym_value_string_text_token1);
      if (lookahead == '\n') ADVANCE(518);
      if (lookahead == 'f') ADVANCE(833);
      if (lookahead == 'n') ADVANCE(838);
      if (lookahead == 't') ADVANCE(837);
      if (lookahead == '{') ADVANCE(839);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(816);
      if (anon_sym_LF_character_set_1(lookahead)) ADVANCE(820);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(aux_sym_value_string_text_token1);
      if (lookahead == '\n') ADVANCE(519);
      if (lookahead == '{') ADVANCE(839);
      if (anon_sym_LF_character_set_1(lookahead)) ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(aux_sym_value_string_text_token1);
      if (lookahead == 'A') ADVANCE(117);
      if (lookahead == 'O') ADVANCE(112);
      if (lookahead == 'R') ADVANCE(101);
      if (lookahead == 'U') ADVANCE(108);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(aux_sym_value_string_text_token1);
      if (lookahead == 'E') ADVANCE(91);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(aux_sym_value_string_text_token1);
      if (lookahead == 'E') ADVANCE(113);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(aux_sym_value_string_text_token1);
      if (lookahead == 'E') ADVANCE(49);
      if (lookahead == 'T') ADVANCE(118);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(aux_sym_value_string_text_token1);
      if (lookahead == 'I') ADVANCE(67);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(aux_sym_value_string_text_token1);
      if (lookahead == 'I') ADVANCE(93);
      if (lookahead == 'O') ADVANCE(56);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(aux_sym_value_string_text_token1);
      if (lookahead == 'N') ADVANCE(92);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(aux_sym_value_string_text_token1);
      if (lookahead == 'O') ADVANCE(98);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(aux_sym_value_string_text_token1);
      if (lookahead == 'P') ADVANCE(116);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(aux_sym_value_string_text_token1);
      if (lookahead == 'R') ADVANCE(50);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(aux_sym_value_string_text_token1);
      if (lookahead == '`') ADVANCE(840);
      if (lookahead == '{') ADVANCE(839);
      if (anon_sym_LF_character_set_1(lookahead)) ADVANCE(832);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(aux_sym_value_string_text_token1);
      if (lookahead == 'a') ADVANCE(294);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(aux_sym_value_string_text_token1);
      if (lookahead == 'a') ADVANCE(294);
      if (lookahead == 'i') ADVANCE(292);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(aux_sym_value_string_text_token1);
      if (lookahead == 'a') ADVANCE(426);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(aux_sym_value_string_text_token1);
      if (lookahead == 'e') ADVANCE(493);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(aux_sym_value_string_text_token1);
      if (lookahead == 'r') ADVANCE(482);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(aux_sym_value_string_text_token1);
      if (lookahead == 'u') ADVANCE(291);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(aux_sym_value_string_text_token1);
      if (lookahead == '{') ADVANCE(879);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      if (lookahead == '`') ADVANCE(134);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(aux_sym_oneline_string_text_token1);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(aux_sym_oneline_string_text_token1);
      if (lookahead == '#') ADVANCE(844);
      if (anon_sym__character_set_1(lookahead)) ADVANCE(843);
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(842);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(aux_sym_oneline_string_text_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(906);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(anon_sym_b);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(anon_sym_f);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(anon_sym_BQUOTE_BQUOTE_BQUOTE);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(anon_sym_base64);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(anon_sym_hex);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(anon_sym_json);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(anon_sym_xml);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(anon_sym_graphql);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(aux_sym_multiline_string_text_token1);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(aux_sym_multiline_string_text_token1);
      if (lookahead == '\n') ADVANCE(520);
      if (lookahead == '#') ADVANCE(857);
      if (lookahead == '`') ADVANCE(855);
      if (lookahead == '{') ADVANCE(856);
      if (anon_sym_LF_character_set_1(lookahead)) ADVANCE(854);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(853);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(aux_sym_multiline_string_text_token1);
      if (lookahead == '`') ADVANCE(134);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(aux_sym_multiline_string_text_token1);
      if (lookahead == '{') ADVANCE(879);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(aux_sym_multiline_string_text_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(906);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(anon_sym_n);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(anon_sym_r);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(anon_sym_t);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(sym_filename_text);
      if (lookahead == '\n') ADVANCE(515);
      if (lookahead == '{') ADVANCE(863);
      if (sym_filename_text_character_set_1(lookahead)) ADVANCE(861);
      if (lookahead != 0 &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '\\') ADVANCE(864);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(sym_filename_text);
      if (lookahead == '{') ADVANCE(863);
      if (sym_filename_text_character_set_1(lookahead)) ADVANCE(862);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '\\') ADVANCE(864);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(sym_filename_text);
      if (lookahead == '{') ADVANCE(880);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '\\') ADVANCE(864);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(sym_filename_text);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '\\') ADVANCE(864);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(aux_sym_filename_escaped_char_token1);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '{') ADVANCE(879);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == 'A') ADVANCE(420);
      if (lookahead == 'B') ADVANCE(143);
      if (lookahead == 'C') ADVANCE(162);
      if (lookahead == 'F') ADVANCE(335);
      if (lookahead == 'M') ADVANCE(475);
      if (lookahead == 'O') ADVANCE(364);
      if (lookahead == 'Q') ADVANCE(476);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == 'B') ADVANCE(143);
      if (lookahead == 'C') ADVANCE(340);
      if (lookahead == 'F') ADVANCE(335);
      if (lookahead == 'M') ADVANCE(475);
      if (lookahead == 'O') ADVANCE(364);
      if (lookahead == 'Q') ADVANCE(476);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (sym_key_string_text_character_set_8(lookahead)) ADVANCE(810);
      if (lookahead == 'B') ADVANCE(793);
      if (lookahead == 'C') ADVANCE(749);
      if (lookahead == 'F') ADVANCE(748);
      if (lookahead == 'M') ADVANCE(786);
      if (lookahead == 'O') ADVANCE(751);
      if (lookahead == 'Q') ADVANCE(783);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (sym_key_string_text_character_set_9(lookahead)) ADVANCE(810);
      if (lookahead == 'A') ADVANCE(774);
      if (lookahead == 'C') ADVANCE(799);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(aux_sym_json_string_text_token1);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(aux_sym_json_string_text_token1);
      if (lookahead == '#') ADVANCE(878);
      if (lookahead == '{') ADVANCE(877);
      if (anon_sym__character_set_1(lookahead)) ADVANCE(876);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(875);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(aux_sym_json_string_text_token1);
      if (lookahead == '{') ADVANCE(879);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(aux_sym_json_string_text_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(906);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '\\') ADVANCE(864);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(637);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(aux_sym_variable_name_token1);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(aux_sym_variable_name_token2);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(884);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(anon_sym_count);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(anon_sym_urlEncode);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(anon_sym_urlDecode);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(anon_sym_htmlEscape);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(anon_sym_htmlUnescape);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(anon_sym_toInt);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(810);
      END_STATE();
    case 893:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 894:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(810);
      END_STATE();
    case 895:
      ACCEPT_TOKEN(anon_sym_null);
      END_STATE();
    case 896:
      ACCEPT_TOKEN(anon_sym_null);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(810);
      END_STATE();
    case 897:
      ACCEPT_TOKEN(aux_sym_digit_token1);
      END_STATE();
    case 898:
      ACCEPT_TOKEN(aux_sym_hexdigit_token1);
      END_STATE();
    case 899:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 900:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(810);
      END_STATE();
    case 901:
      ACCEPT_TOKEN(anon_sym_e);
      END_STATE();
    case 902:
      ACCEPT_TOKEN(anon_sym_E);
      END_STATE();
    case 903:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 904:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 905:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '/' ||
          lookahead == '\\') ADVANCE(906);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(905);
      END_STATE();
    case 906:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(906);
      END_STATE();
    case 907:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 908:
      ACCEPT_TOKEN(aux_sym_regex_text_token1);
      if (lookahead == '#') ADVANCE(909);
      if (anon_sym_LF_character_set_1(lookahead)) ADVANCE(908);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '/' &&
          lookahead != '\\') ADVANCE(910);
      END_STATE();
    case 909:
      ACCEPT_TOKEN(aux_sym_regex_text_token1);
      if (lookahead == '/' ||
          lookahead == '\\') ADVANCE(906);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(905);
      END_STATE();
    case 910:
      ACCEPT_TOKEN(aux_sym_regex_text_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '/' &&
          lookahead != '\\') ADVANCE(910);
      END_STATE();
    case 911:
      ACCEPT_TOKEN(aux_sym_regex_escaped_char_token1);
      END_STATE();
    case 912:
      ACCEPT_TOKEN(aux_sym_regex_escaped_char_token1);
      if (lookahead == '#') ADVANCE(913);
      if (anon_sym_LF_character_set_1(lookahead)) ADVANCE(912);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(911);
      END_STATE();
    case 913:
      ACCEPT_TOKEN(aux_sym_regex_escaped_char_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(906);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 504},
  [2] = {.lex_state = 506},
  [3] = {.lex_state = 506},
  [4] = {.lex_state = 506},
  [5] = {.lex_state = 506},
  [6] = {.lex_state = 504},
  [7] = {.lex_state = 504},
  [8] = {.lex_state = 504},
  [9] = {.lex_state = 507},
  [10] = {.lex_state = 507},
  [11] = {.lex_state = 504},
  [12] = {.lex_state = 504},
  [13] = {.lex_state = 504},
  [14] = {.lex_state = 504},
  [15] = {.lex_state = 504},
  [16] = {.lex_state = 504},
  [17] = {.lex_state = 15},
  [18] = {.lex_state = 508},
  [19] = {.lex_state = 15},
  [20] = {.lex_state = 509},
  [21] = {.lex_state = 504},
  [22] = {.lex_state = 504},
  [23] = {.lex_state = 506},
  [24] = {.lex_state = 506},
  [25] = {.lex_state = 506},
  [26] = {.lex_state = 506},
  [27] = {.lex_state = 504},
  [28] = {.lex_state = 504},
  [29] = {.lex_state = 506},
  [30] = {.lex_state = 506},
  [31] = {.lex_state = 504},
  [32] = {.lex_state = 504},
  [33] = {.lex_state = 504},
  [34] = {.lex_state = 504},
  [35] = {.lex_state = 508},
  [36] = {.lex_state = 504},
  [37] = {.lex_state = 504},
  [38] = {.lex_state = 506},
  [39] = {.lex_state = 504},
  [40] = {.lex_state = 504},
  [41] = {.lex_state = 504},
  [42] = {.lex_state = 504},
  [43] = {.lex_state = 508},
  [44] = {.lex_state = 506},
  [45] = {.lex_state = 506},
  [46] = {.lex_state = 509},
  [47] = {.lex_state = 506},
  [48] = {.lex_state = 506},
  [49] = {.lex_state = 506},
  [50] = {.lex_state = 509},
  [51] = {.lex_state = 506},
  [52] = {.lex_state = 504},
  [53] = {.lex_state = 508},
  [54] = {.lex_state = 508},
  [55] = {.lex_state = 509},
  [56] = {.lex_state = 509},
  [57] = {.lex_state = 505},
  [58] = {.lex_state = 504},
  [59] = {.lex_state = 505},
  [60] = {.lex_state = 504},
  [61] = {.lex_state = 508},
  [62] = {.lex_state = 506},
  [63] = {.lex_state = 506},
  [64] = {.lex_state = 505},
  [65] = {.lex_state = 508},
  [66] = {.lex_state = 504},
  [67] = {.lex_state = 507},
  [68] = {.lex_state = 508},
  [69] = {.lex_state = 508},
  [70] = {.lex_state = 509},
  [71] = {.lex_state = 505},
  [72] = {.lex_state = 509},
  [73] = {.lex_state = 506},
  [74] = {.lex_state = 508},
  [75] = {.lex_state = 508},
  [76] = {.lex_state = 504},
  [77] = {.lex_state = 507},
  [78] = {.lex_state = 506},
  [79] = {.lex_state = 504},
  [80] = {.lex_state = 507},
  [81] = {.lex_state = 509},
  [82] = {.lex_state = 509},
  [83] = {.lex_state = 509},
  [84] = {.lex_state = 506},
  [85] = {.lex_state = 506},
  [86] = {.lex_state = 509},
  [87] = {.lex_state = 506},
  [88] = {.lex_state = 507},
  [89] = {.lex_state = 506},
  [90] = {.lex_state = 506},
  [91] = {.lex_state = 504},
  [92] = {.lex_state = 504},
  [93] = {.lex_state = 504},
  [94] = {.lex_state = 504},
  [95] = {.lex_state = 504},
  [96] = {.lex_state = 504},
  [97] = {.lex_state = 504},
  [98] = {.lex_state = 504},
  [99] = {.lex_state = 15},
  [100] = {.lex_state = 15},
  [101] = {.lex_state = 504},
  [102] = {.lex_state = 507},
  [103] = {.lex_state = 507},
  [104] = {.lex_state = 507},
  [105] = {.lex_state = 504},
  [106] = {.lex_state = 15},
  [107] = {.lex_state = 15},
  [108] = {.lex_state = 15},
  [109] = {.lex_state = 15},
  [110] = {.lex_state = 15},
  [111] = {.lex_state = 15},
  [112] = {.lex_state = 15},
  [113] = {.lex_state = 15},
  [114] = {.lex_state = 15},
  [115] = {.lex_state = 15},
  [116] = {.lex_state = 15},
  [117] = {.lex_state = 15},
  [118] = {.lex_state = 15},
  [119] = {.lex_state = 15},
  [120] = {.lex_state = 15},
  [121] = {.lex_state = 15},
  [122] = {.lex_state = 15},
  [123] = {.lex_state = 15},
  [124] = {.lex_state = 15},
  [125] = {.lex_state = 15},
  [126] = {.lex_state = 15},
  [127] = {.lex_state = 15},
  [128] = {.lex_state = 15},
  [129] = {.lex_state = 15},
  [130] = {.lex_state = 15},
  [131] = {.lex_state = 15},
  [132] = {.lex_state = 18},
  [133] = {.lex_state = 504},
  [134] = {.lex_state = 11},
  [135] = {.lex_state = 15},
  [136] = {.lex_state = 15},
  [137] = {.lex_state = 504},
  [138] = {.lex_state = 15},
  [139] = {.lex_state = 504},
  [140] = {.lex_state = 504},
  [141] = {.lex_state = 504},
  [142] = {.lex_state = 17},
  [143] = {.lex_state = 504},
  [144] = {.lex_state = 12},
  [145] = {.lex_state = 504},
  [146] = {.lex_state = 504},
  [147] = {.lex_state = 15},
  [148] = {.lex_state = 15},
  [149] = {.lex_state = 15},
  [150] = {.lex_state = 15},
  [151] = {.lex_state = 504},
  [152] = {.lex_state = 504},
  [153] = {.lex_state = 504},
  [154] = {.lex_state = 504},
  [155] = {.lex_state = 504},
  [156] = {.lex_state = 504},
  [157] = {.lex_state = 3},
  [158] = {.lex_state = 3},
  [159] = {.lex_state = 3},
  [160] = {.lex_state = 15},
  [161] = {.lex_state = 15},
  [162] = {.lex_state = 5},
  [163] = {.lex_state = 13},
  [164] = {.lex_state = 5},
  [165] = {.lex_state = 5},
  [166] = {.lex_state = 25},
  [167] = {.lex_state = 19},
  [168] = {.lex_state = 14},
  [169] = {.lex_state = 19},
  [170] = {.lex_state = 19},
  [171] = {.lex_state = 14},
  [172] = {.lex_state = 19},
  [173] = {.lex_state = 14},
  [174] = {.lex_state = 14},
  [175] = {.lex_state = 14},
  [176] = {.lex_state = 13},
  [177] = {.lex_state = 13},
  [178] = {.lex_state = 19},
  [179] = {.lex_state = 22},
  [180] = {.lex_state = 6},
  [181] = {.lex_state = 25},
  [182] = {.lex_state = 6},
  [183] = {.lex_state = 25},
  [184] = {.lex_state = 7},
  [185] = {.lex_state = 6},
  [186] = {.lex_state = 22},
  [187] = {.lex_state = 22},
  [188] = {.lex_state = 20},
  [189] = {.lex_state = 25},
  [190] = {.lex_state = 5},
  [191] = {.lex_state = 20},
  [192] = {.lex_state = 18},
  [193] = {.lex_state = 22},
  [194] = {.lex_state = 20},
  [195] = {.lex_state = 21},
  [196] = {.lex_state = 20},
  [197] = {.lex_state = 20},
  [198] = {.lex_state = 7},
  [199] = {.lex_state = 25},
  [200] = {.lex_state = 5},
  [201] = {.lex_state = 18},
  [202] = {.lex_state = 7},
  [203] = {.lex_state = 1},
  [204] = {.lex_state = 3},
  [205] = {.lex_state = 3},
  [206] = {.lex_state = 3},
  [207] = {.lex_state = 3},
  [208] = {.lex_state = 3},
  [209] = {.lex_state = 19},
  [210] = {.lex_state = 3},
  [211] = {.lex_state = 3},
  [212] = {.lex_state = 3},
  [213] = {.lex_state = 3},
  [214] = {.lex_state = 3},
  [215] = {.lex_state = 3},
  [216] = {.lex_state = 3},
  [217] = {.lex_state = 3},
  [218] = {.lex_state = 3},
  [219] = {.lex_state = 3},
  [220] = {.lex_state = 13},
  [221] = {.lex_state = 19},
  [222] = {.lex_state = 14},
  [223] = {.lex_state = 3},
  [224] = {.lex_state = 3},
  [225] = {.lex_state = 16},
  [226] = {.lex_state = 18},
  [227] = {.lex_state = 18},
  [228] = {.lex_state = 2},
  [229] = {.lex_state = 2},
  [230] = {.lex_state = 2},
  [231] = {.lex_state = 14},
  [232] = {.lex_state = 13},
  [233] = {.lex_state = 3},
  [234] = {.lex_state = 16},
  [235] = {.lex_state = 3},
  [236] = {.lex_state = 3},
  [237] = {.lex_state = 3},
  [238] = {.lex_state = 3},
  [239] = {.lex_state = 3},
  [240] = {.lex_state = 3},
  [241] = {.lex_state = 3},
  [242] = {.lex_state = 3},
  [243] = {.lex_state = 3},
  [244] = {.lex_state = 15},
  [245] = {.lex_state = 15},
  [246] = {.lex_state = 8},
  [247] = {.lex_state = 15},
  [248] = {.lex_state = 15},
  [249] = {.lex_state = 504},
  [250] = {.lex_state = 6},
  [251] = {.lex_state = 18},
  [252] = {.lex_state = 18},
  [253] = {.lex_state = 18},
  [254] = {.lex_state = 6},
  [255] = {.lex_state = 504},
  [256] = {.lex_state = 8},
  [257] = {.lex_state = 504},
  [258] = {.lex_state = 7},
  [259] = {.lex_state = 25},
  [260] = {.lex_state = 18},
  [261] = {.lex_state = 18},
  [262] = {.lex_state = 22},
  [263] = {.lex_state = 8},
  [264] = {.lex_state = 7},
  [265] = {.lex_state = 16},
  [266] = {.lex_state = 504},
  [267] = {.lex_state = 5},
  [268] = {.lex_state = 22},
  [269] = {.lex_state = 25},
  [270] = {.lex_state = 8},
  [271] = {.lex_state = 15},
  [272] = {.lex_state = 15},
  [273] = {.lex_state = 5},
  [274] = {.lex_state = 18},
  [275] = {.lex_state = 15},
  [276] = {.lex_state = 14},
  [277] = {.lex_state = 5},
  [278] = {.lex_state = 5},
  [279] = {.lex_state = 14},
  [280] = {.lex_state = 14},
  [281] = {.lex_state = 23},
  [282] = {.lex_state = 13},
  [283] = {.lex_state = 15},
  [284] = {.lex_state = 13},
  [285] = {.lex_state = 504},
  [286] = {.lex_state = 14},
  [287] = {.lex_state = 14},
  [288] = {.lex_state = 14},
  [289] = {.lex_state = 14},
  [290] = {.lex_state = 14},
  [291] = {.lex_state = 23},
  [292] = {.lex_state = 15},
  [293] = {.lex_state = 0},
  [294] = {.lex_state = 23},
  [295] = {.lex_state = 23},
  [296] = {.lex_state = 23},
  [297] = {.lex_state = 19},
  [298] = {.lex_state = 15},
  [299] = {.lex_state = 6},
  [300] = {.lex_state = 15},
  [301] = {.lex_state = 20},
  [302] = {.lex_state = 18},
  [303] = {.lex_state = 5},
  [304] = {.lex_state = 13},
  [305] = {.lex_state = 20},
  [306] = {.lex_state = 13},
  [307] = {.lex_state = 7},
  [308] = {.lex_state = 18},
  [309] = {.lex_state = 504},
  [310] = {.lex_state = 6},
  [311] = {.lex_state = 19},
  [312] = {.lex_state = 13},
  [313] = {.lex_state = 504},
  [314] = {.lex_state = 13},
  [315] = {.lex_state = 19},
  [316] = {.lex_state = 0},
  [317] = {.lex_state = 23},
  [318] = {.lex_state = 22},
  [319] = {.lex_state = 13},
  [320] = {.lex_state = 504},
  [321] = {.lex_state = 23},
  [322] = {.lex_state = 0},
  [323] = {.lex_state = 22},
  [324] = {.lex_state = 25},
  [325] = {.lex_state = 20},
  [326] = {.lex_state = 20},
  [327] = {.lex_state = 20},
  [328] = {.lex_state = 19},
  [329] = {.lex_state = 0},
  [330] = {.lex_state = 23},
  [331] = {.lex_state = 6},
  [332] = {.lex_state = 6},
  [333] = {.lex_state = 6},
  [334] = {.lex_state = 23},
  [335] = {.lex_state = 0},
  [336] = {.lex_state = 0},
  [337] = {.lex_state = 20},
  [338] = {.lex_state = 7},
  [339] = {.lex_state = 19},
  [340] = {.lex_state = 19},
  [341] = {.lex_state = 25},
  [342] = {.lex_state = 23},
  [343] = {.lex_state = 18},
  [344] = {.lex_state = 15},
  [345] = {.lex_state = 18},
  [346] = {.lex_state = 18},
  [347] = {.lex_state = 17},
  [348] = {.lex_state = 504},
  [349] = {.lex_state = 21},
  [350] = {.lex_state = 18},
  [351] = {.lex_state = 24},
  [352] = {.lex_state = 4},
  [353] = {.lex_state = 15},
  [354] = {.lex_state = 8},
  [355] = {.lex_state = 504},
  [356] = {.lex_state = 15},
  [357] = {.lex_state = 15},
  [358] = {.lex_state = 15},
  [359] = {.lex_state = 17},
  [360] = {.lex_state = 15},
  [361] = {.lex_state = 18},
  [362] = {.lex_state = 24},
  [363] = {.lex_state = 18},
  [364] = {.lex_state = 18},
  [365] = {.lex_state = 23},
  [366] = {.lex_state = 15},
  [367] = {.lex_state = 504},
  [368] = {.lex_state = 15},
  [369] = {.lex_state = 504},
  [370] = {.lex_state = 24},
  [371] = {.lex_state = 23},
  [372] = {.lex_state = 504},
  [373] = {.lex_state = 24},
  [374] = {.lex_state = 504},
  [375] = {.lex_state = 18},
  [376] = {.lex_state = 504},
  [377] = {.lex_state = 18},
  [378] = {.lex_state = 504},
  [379] = {.lex_state = 8},
  [380] = {.lex_state = 23},
  [381] = {.lex_state = 18},
  [382] = {.lex_state = 15},
  [383] = {.lex_state = 18},
  [384] = {.lex_state = 24},
  [385] = {.lex_state = 18},
  [386] = {.lex_state = 23},
  [387] = {.lex_state = 24},
  [388] = {.lex_state = 4},
  [389] = {.lex_state = 23},
  [390] = {.lex_state = 18},
  [391] = {.lex_state = 504},
  [392] = {.lex_state = 24},
  [393] = {.lex_state = 24},
  [394] = {.lex_state = 23},
  [395] = {.lex_state = 15},
  [396] = {.lex_state = 18},
  [397] = {.lex_state = 15},
  [398] = {.lex_state = 24},
  [399] = {.lex_state = 24},
  [400] = {.lex_state = 15},
  [401] = {.lex_state = 15},
  [402] = {.lex_state = 18},
  [403] = {.lex_state = 18},
  [404] = {.lex_state = 24},
  [405] = {.lex_state = 18},
  [406] = {.lex_state = 18},
  [407] = {.lex_state = 24},
  [408] = {.lex_state = 24},
  [409] = {.lex_state = 15},
  [410] = {.lex_state = 15},
  [411] = {.lex_state = 15},
  [412] = {.lex_state = 23},
  [413] = {.lex_state = 504},
  [414] = {.lex_state = 0},
  [415] = {.lex_state = 23},
  [416] = {.lex_state = 23},
  [417] = {.lex_state = 504},
  [418] = {.lex_state = 0},
  [419] = {.lex_state = 0},
  [420] = {.lex_state = 0},
  [421] = {.lex_state = 504},
  [422] = {.lex_state = 504},
  [423] = {.lex_state = 504},
  [424] = {.lex_state = 0},
  [425] = {.lex_state = 18},
  [426] = {.lex_state = 15},
  [427] = {.lex_state = 0},
  [428] = {.lex_state = 0},
  [429] = {.lex_state = 0},
  [430] = {.lex_state = 0},
  [431] = {.lex_state = 0},
  [432] = {.lex_state = 504},
  [433] = {.lex_state = 0},
  [434] = {.lex_state = 0},
  [435] = {.lex_state = 504},
  [436] = {.lex_state = 0},
  [437] = {.lex_state = 504},
  [438] = {.lex_state = 504},
  [439] = {.lex_state = 0},
  [440] = {.lex_state = 0},
  [441] = {.lex_state = 23},
  [442] = {.lex_state = 21},
  [443] = {.lex_state = 504},
  [444] = {.lex_state = 0},
  [445] = {.lex_state = 0},
  [446] = {.lex_state = 0},
  [447] = {.lex_state = 18},
  [448] = {.lex_state = 504},
  [449] = {.lex_state = 0},
  [450] = {.lex_state = 504},
  [451] = {.lex_state = 504},
  [452] = {.lex_state = 504},
  [453] = {.lex_state = 504},
  [454] = {.lex_state = 0},
  [455] = {.lex_state = 504},
  [456] = {.lex_state = 0},
  [457] = {.lex_state = 504},
  [458] = {.lex_state = 504},
  [459] = {.lex_state = 504},
  [460] = {.lex_state = 9},
  [461] = {.lex_state = 504},
  [462] = {.lex_state = 0},
  [463] = {.lex_state = 504},
  [464] = {.lex_state = 0},
  [465] = {.lex_state = 0},
  [466] = {.lex_state = 0},
  [467] = {.lex_state = 0},
  [468] = {.lex_state = 0},
  [469] = {.lex_state = 504},
  [470] = {.lex_state = 504},
  [471] = {.lex_state = 504},
  [472] = {.lex_state = 504},
  [473] = {.lex_state = 504},
  [474] = {.lex_state = 504},
  [475] = {.lex_state = 504},
  [476] = {.lex_state = 0},
  [477] = {.lex_state = 504},
  [478] = {.lex_state = 504},
  [479] = {.lex_state = 504},
  [480] = {.lex_state = 0},
  [481] = {.lex_state = 10},
  [482] = {.lex_state = 15},
  [483] = {.lex_state = 504},
  [484] = {.lex_state = 504},
  [485] = {.lex_state = 504},
  [486] = {.lex_state = 504},
  [487] = {.lex_state = 504},
  [488] = {.lex_state = 504},
  [489] = {.lex_state = 0},
  [490] = {.lex_state = 504},
  [491] = {.lex_state = 15},
  [492] = {.lex_state = 884},
  [493] = {.lex_state = 504},
  [494] = {.lex_state = 504},
  [495] = {.lex_state = 504},
  [496] = {.lex_state = 504},
  [497] = {.lex_state = 504},
  [498] = {.lex_state = 0},
  [499] = {.lex_state = 504},
  [500] = {.lex_state = 0},
  [501] = {.lex_state = 0},
  [502] = {.lex_state = 504},
  [503] = {.lex_state = 504},
  [504] = {.lex_state = 504},
  [505] = {.lex_state = 504},
  [506] = {.lex_state = 0},
  [507] = {.lex_state = 504},
  [508] = {.lex_state = 504},
  [509] = {.lex_state = 504},
  [510] = {.lex_state = 504},
  [511] = {.lex_state = 504},
  [512] = {.lex_state = 504},
  [513] = {.lex_state = 504},
  [514] = {.lex_state = 504},
  [515] = {.lex_state = 504},
  [516] = {.lex_state = 504},
  [517] = {.lex_state = 504},
  [518] = {.lex_state = 0},
  [519] = {.lex_state = 15},
  [520] = {.lex_state = 504},
  [521] = {.lex_state = 504},
  [522] = {.lex_state = 504},
  [523] = {.lex_state = 504},
  [524] = {.lex_state = 0},
  [525] = {.lex_state = 504},
  [526] = {.lex_state = 504},
  [527] = {.lex_state = 504},
  [528] = {.lex_state = 504},
  [529] = {.lex_state = 504},
  [530] = {.lex_state = 504},
  [531] = {.lex_state = 504},
  [532] = {.lex_state = 504},
  [533] = {.lex_state = 504},
  [534] = {.lex_state = 504},
  [535] = {.lex_state = 504},
  [536] = {.lex_state = 504},
  [537] = {.lex_state = 0},
  [538] = {.lex_state = 504},
  [539] = {.lex_state = 504},
  [540] = {.lex_state = 504},
  [541] = {.lex_state = 504},
  [542] = {.lex_state = 504},
  [543] = {.lex_state = 504},
  [544] = {.lex_state = 0},
  [545] = {.lex_state = 0},
  [546] = {.lex_state = 15},
  [547] = {.lex_state = 0},
  [548] = {.lex_state = 26},
  [549] = {.lex_state = 15},
  [550] = {.lex_state = 504},
  [551] = {.lex_state = 15},
  [552] = {.lex_state = 0},
  [553] = {.lex_state = 15},
  [554] = {.lex_state = 504},
  [555] = {.lex_state = 15},
  [556] = {.lex_state = 15},
  [557] = {.lex_state = 15},
  [558] = {.lex_state = 15},
  [559] = {.lex_state = 15},
  [560] = {.lex_state = 15},
  [561] = {.lex_state = 504},
  [562] = {.lex_state = 0},
  [563] = {.lex_state = 504},
  [564] = {.lex_state = 504},
  [565] = {.lex_state = 18},
  [566] = {.lex_state = 504},
  [567] = {.lex_state = 504},
  [568] = {.lex_state = 504},
  [569] = {.lex_state = 504},
  [570] = {.lex_state = 504},
  [571] = {.lex_state = 504},
  [572] = {.lex_state = 504},
  [573] = {.lex_state = 504},
  [574] = {.lex_state = 504},
  [575] = {.lex_state = 504},
  [576] = {.lex_state = 504},
  [577] = {.lex_state = 0},
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
    [anon_sym_] = ACTIONS(1),
    [anon_sym_2] = ACTIONS(1),
    [anon_sym_u] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_BQUOTE] = ACTIONS(1),
    [anon_sym_b] = ACTIONS(1),
    [anon_sym_f] = ACTIONS(1),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(1),
    [anon_sym_n] = ACTIONS(1),
    [anon_sym_r] = ACTIONS(1),
    [anon_sym_t] = ACTIONS(1),
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
    [sym_hurl_file] = STATE(562),
    [sym_entry] = STATE(137),
    [sym_request] = STATE(133),
    [sym_method] = STATE(163),
    [aux_sym_hurl_file_repeat1] = STATE(137),
    [aux_sym_hurl_file_repeat2] = STATE(348),
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
    [sym_body] = STATE(143),
    [sym_request_section] = STATE(7),
    [sym_basic_auth_section] = STATE(96),
    [sym_query_string_params_section] = STATE(96),
    [sym_form_params_section] = STATE(96),
    [sym_multipart_form_data_section] = STATE(96),
    [sym_cookies_section] = STATE(96),
    [sym_options_section] = STATE(96),
    [sym_key_value] = STATE(529),
    [sym_bytes] = STATE(539),
    [sym_xml] = STATE(540),
    [sym_oneline_base64] = STATE(540),
    [sym_oneline_file] = STATE(540),
    [sym_oneline_hex] = STATE(540),
    [sym_key_string] = STATE(552),
    [sym_key_string_content] = STATE(189),
    [sym_key_string_escaped_char] = STATE(259),
    [sym_oneline_string] = STATE(540),
    [sym_multiline_string] = STATE(540),
    [sym_json_value] = STATE(540),
    [sym_json_object] = STATE(561),
    [sym_json_array] = STATE(561),
    [sym_json_string] = STATE(561),
    [sym_json_number] = STATE(561),
    [sym_template] = STATE(278),
    [sym_boolean] = STATE(561),
    [sym_null] = STATE(561),
    [sym_integer] = STATE(257),
    [sym_digit] = STATE(255),
    [aux_sym_hurl_file_repeat2] = STATE(73),
    [aux_sym_request_repeat1] = STATE(5),
    [aux_sym_request_repeat2] = STATE(7),
    [aux_sym_key_string_repeat1] = STATE(189),
    [aux_sym_key_string_content_repeat1] = STATE(259),
    [aux_sym_integer_repeat1] = STATE(255),
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
    [anon_sym_BSLASH] = ACTIONS(41),
    [sym_key_string_text] = ACTIONS(43),
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
    [sym_body] = STATE(140),
    [sym_request_section] = STATE(6),
    [sym_basic_auth_section] = STATE(96),
    [sym_query_string_params_section] = STATE(96),
    [sym_form_params_section] = STATE(96),
    [sym_multipart_form_data_section] = STATE(96),
    [sym_cookies_section] = STATE(96),
    [sym_options_section] = STATE(96),
    [sym_key_value] = STATE(529),
    [sym_bytes] = STATE(539),
    [sym_xml] = STATE(540),
    [sym_oneline_base64] = STATE(540),
    [sym_oneline_file] = STATE(540),
    [sym_oneline_hex] = STATE(540),
    [sym_key_string] = STATE(552),
    [sym_key_string_content] = STATE(189),
    [sym_key_string_escaped_char] = STATE(259),
    [sym_oneline_string] = STATE(540),
    [sym_multiline_string] = STATE(540),
    [sym_json_value] = STATE(540),
    [sym_json_object] = STATE(561),
    [sym_json_array] = STATE(561),
    [sym_json_string] = STATE(561),
    [sym_json_number] = STATE(561),
    [sym_template] = STATE(278),
    [sym_boolean] = STATE(561),
    [sym_null] = STATE(561),
    [sym_integer] = STATE(257),
    [sym_digit] = STATE(255),
    [aux_sym_hurl_file_repeat2] = STATE(73),
    [aux_sym_request_repeat1] = STATE(4),
    [aux_sym_request_repeat2] = STATE(6),
    [aux_sym_key_string_repeat1] = STATE(189),
    [aux_sym_key_string_content_repeat1] = STATE(259),
    [aux_sym_integer_repeat1] = STATE(255),
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
    [anon_sym_BSLASH] = ACTIONS(41),
    [sym_key_string_text] = ACTIONS(43),
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
    [sym_header] = STATE(26),
    [sym_body] = STATE(143),
    [sym_request_section] = STATE(7),
    [sym_basic_auth_section] = STATE(96),
    [sym_query_string_params_section] = STATE(96),
    [sym_form_params_section] = STATE(96),
    [sym_multipart_form_data_section] = STATE(96),
    [sym_cookies_section] = STATE(96),
    [sym_options_section] = STATE(96),
    [sym_key_value] = STATE(529),
    [sym_bytes] = STATE(539),
    [sym_xml] = STATE(540),
    [sym_oneline_base64] = STATE(540),
    [sym_oneline_file] = STATE(540),
    [sym_oneline_hex] = STATE(540),
    [sym_key_string] = STATE(552),
    [sym_key_string_content] = STATE(189),
    [sym_key_string_escaped_char] = STATE(259),
    [sym_oneline_string] = STATE(540),
    [sym_multiline_string] = STATE(540),
    [sym_json_value] = STATE(540),
    [sym_json_object] = STATE(561),
    [sym_json_array] = STATE(561),
    [sym_json_string] = STATE(561),
    [sym_json_number] = STATE(561),
    [sym_template] = STATE(278),
    [sym_boolean] = STATE(561),
    [sym_null] = STATE(561),
    [sym_integer] = STATE(257),
    [sym_digit] = STATE(255),
    [aux_sym_request_repeat1] = STATE(26),
    [aux_sym_request_repeat2] = STATE(7),
    [aux_sym_key_string_repeat1] = STATE(189),
    [aux_sym_key_string_content_repeat1] = STATE(259),
    [aux_sym_integer_repeat1] = STATE(255),
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
    [anon_sym_BSLASH] = ACTIONS(41),
    [sym_key_string_text] = ACTIONS(43),
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
    [sym_header] = STATE(26),
    [sym_body] = STATE(141),
    [sym_request_section] = STATE(8),
    [sym_basic_auth_section] = STATE(96),
    [sym_query_string_params_section] = STATE(96),
    [sym_form_params_section] = STATE(96),
    [sym_multipart_form_data_section] = STATE(96),
    [sym_cookies_section] = STATE(96),
    [sym_options_section] = STATE(96),
    [sym_key_value] = STATE(529),
    [sym_bytes] = STATE(539),
    [sym_xml] = STATE(540),
    [sym_oneline_base64] = STATE(540),
    [sym_oneline_file] = STATE(540),
    [sym_oneline_hex] = STATE(540),
    [sym_key_string] = STATE(552),
    [sym_key_string_content] = STATE(189),
    [sym_key_string_escaped_char] = STATE(259),
    [sym_oneline_string] = STATE(540),
    [sym_multiline_string] = STATE(540),
    [sym_json_value] = STATE(540),
    [sym_json_object] = STATE(561),
    [sym_json_array] = STATE(561),
    [sym_json_string] = STATE(561),
    [sym_json_number] = STATE(561),
    [sym_template] = STATE(278),
    [sym_boolean] = STATE(561),
    [sym_null] = STATE(561),
    [sym_integer] = STATE(257),
    [sym_digit] = STATE(255),
    [aux_sym_request_repeat1] = STATE(26),
    [aux_sym_request_repeat2] = STATE(8),
    [aux_sym_key_string_repeat1] = STATE(189),
    [aux_sym_key_string_content_repeat1] = STATE(259),
    [aux_sym_integer_repeat1] = STATE(255),
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
    [anon_sym_BSLASH] = ACTIONS(41),
    [sym_key_string_text] = ACTIONS(43),
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
    [sym_body] = STATE(143),
    [sym_request_section] = STATE(52),
    [sym_basic_auth_section] = STATE(96),
    [sym_query_string_params_section] = STATE(96),
    [sym_form_params_section] = STATE(96),
    [sym_multipart_form_data_section] = STATE(96),
    [sym_cookies_section] = STATE(96),
    [sym_options_section] = STATE(96),
    [sym_bytes] = STATE(539),
    [sym_xml] = STATE(540),
    [sym_oneline_base64] = STATE(540),
    [sym_oneline_file] = STATE(540),
    [sym_oneline_hex] = STATE(540),
    [sym_oneline_string] = STATE(540),
    [sym_multiline_string] = STATE(540),
    [sym_json_value] = STATE(540),
    [sym_json_object] = STATE(561),
    [sym_json_array] = STATE(561),
    [sym_json_string] = STATE(561),
    [sym_json_number] = STATE(561),
    [sym_template] = STATE(561),
    [sym_boolean] = STATE(561),
    [sym_null] = STATE(561),
    [sym_integer] = STATE(257),
    [sym_digit] = STATE(255),
    [aux_sym_request_repeat2] = STATE(52),
    [aux_sym_integer_repeat1] = STATE(255),
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
  [7] = {
    [sym_body] = STATE(141),
    [sym_request_section] = STATE(52),
    [sym_basic_auth_section] = STATE(96),
    [sym_query_string_params_section] = STATE(96),
    [sym_form_params_section] = STATE(96),
    [sym_multipart_form_data_section] = STATE(96),
    [sym_cookies_section] = STATE(96),
    [sym_options_section] = STATE(96),
    [sym_bytes] = STATE(539),
    [sym_xml] = STATE(540),
    [sym_oneline_base64] = STATE(540),
    [sym_oneline_file] = STATE(540),
    [sym_oneline_hex] = STATE(540),
    [sym_oneline_string] = STATE(540),
    [sym_multiline_string] = STATE(540),
    [sym_json_value] = STATE(540),
    [sym_json_object] = STATE(561),
    [sym_json_array] = STATE(561),
    [sym_json_string] = STATE(561),
    [sym_json_number] = STATE(561),
    [sym_template] = STATE(561),
    [sym_boolean] = STATE(561),
    [sym_null] = STATE(561),
    [sym_integer] = STATE(257),
    [sym_digit] = STATE(255),
    [aux_sym_request_repeat2] = STATE(52),
    [aux_sym_integer_repeat1] = STATE(255),
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
  [8] = {
    [sym_body] = STATE(145),
    [sym_request_section] = STATE(52),
    [sym_basic_auth_section] = STATE(96),
    [sym_query_string_params_section] = STATE(96),
    [sym_form_params_section] = STATE(96),
    [sym_multipart_form_data_section] = STATE(96),
    [sym_cookies_section] = STATE(96),
    [sym_options_section] = STATE(96),
    [sym_bytes] = STATE(539),
    [sym_xml] = STATE(540),
    [sym_oneline_base64] = STATE(540),
    [sym_oneline_file] = STATE(540),
    [sym_oneline_hex] = STATE(540),
    [sym_oneline_string] = STATE(540),
    [sym_multiline_string] = STATE(540),
    [sym_json_value] = STATE(540),
    [sym_json_object] = STATE(561),
    [sym_json_array] = STATE(561),
    [sym_json_string] = STATE(561),
    [sym_json_number] = STATE(561),
    [sym_template] = STATE(561),
    [sym_boolean] = STATE(561),
    [sym_null] = STATE(561),
    [sym_integer] = STATE(257),
    [sym_digit] = STATE(255),
    [aux_sym_request_repeat2] = STATE(52),
    [aux_sym_integer_repeat1] = STATE(255),
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
  [9] = {
    [sym_header] = STATE(10),
    [sym_body] = STATE(151),
    [sym_response_section] = STATE(22),
    [sym_captures_section] = STATE(105),
    [sym_asserts_section] = STATE(105),
    [sym_key_value] = STATE(523),
    [sym_bytes] = STATE(539),
    [sym_xml] = STATE(540),
    [sym_oneline_base64] = STATE(540),
    [sym_oneline_file] = STATE(540),
    [sym_oneline_hex] = STATE(540),
    [sym_key_string] = STATE(552),
    [sym_key_string_content] = STATE(189),
    [sym_key_string_escaped_char] = STATE(259),
    [sym_oneline_string] = STATE(540),
    [sym_multiline_string] = STATE(540),
    [sym_json_value] = STATE(540),
    [sym_json_object] = STATE(561),
    [sym_json_array] = STATE(561),
    [sym_json_string] = STATE(561),
    [sym_json_number] = STATE(561),
    [sym_template] = STATE(278),
    [sym_boolean] = STATE(561),
    [sym_null] = STATE(561),
    [sym_integer] = STATE(257),
    [sym_digit] = STATE(255),
    [aux_sym_request_repeat1] = STATE(10),
    [aux_sym_response_repeat1] = STATE(22),
    [aux_sym_key_string_repeat1] = STATE(189),
    [aux_sym_key_string_content_repeat1] = STATE(259),
    [aux_sym_integer_repeat1] = STATE(255),
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
    [anon_sym_BSLASH] = ACTIONS(41),
    [sym_key_string_text] = ACTIONS(43),
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
    [sym_header] = STATE(67),
    [sym_body] = STATE(155),
    [sym_response_section] = STATE(21),
    [sym_captures_section] = STATE(105),
    [sym_asserts_section] = STATE(105),
    [sym_key_value] = STATE(523),
    [sym_bytes] = STATE(539),
    [sym_xml] = STATE(540),
    [sym_oneline_base64] = STATE(540),
    [sym_oneline_file] = STATE(540),
    [sym_oneline_hex] = STATE(540),
    [sym_key_string] = STATE(552),
    [sym_key_string_content] = STATE(189),
    [sym_key_string_escaped_char] = STATE(259),
    [sym_oneline_string] = STATE(540),
    [sym_multiline_string] = STATE(540),
    [sym_json_value] = STATE(540),
    [sym_json_object] = STATE(561),
    [sym_json_array] = STATE(561),
    [sym_json_string] = STATE(561),
    [sym_json_number] = STATE(561),
    [sym_template] = STATE(278),
    [sym_boolean] = STATE(561),
    [sym_null] = STATE(561),
    [sym_integer] = STATE(257),
    [sym_digit] = STATE(255),
    [aux_sym_request_repeat1] = STATE(67),
    [aux_sym_response_repeat1] = STATE(21),
    [aux_sym_key_string_repeat1] = STATE(189),
    [aux_sym_key_string_content_repeat1] = STATE(259),
    [aux_sym_integer_repeat1] = STATE(255),
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
    [anon_sym_BSLASH] = ACTIONS(41),
    [sym_key_string_text] = ACTIONS(43),
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
    [sym_ca_certificate_option] = STATE(41),
    [sym_follow_redirect_option] = STATE(41),
    [sym_insecure_option] = STATE(41),
    [sym_max_redirs_option] = STATE(41),
    [sym_retry_option] = STATE(41),
    [sym_retry_interval_option] = STATE(41),
    [sym_retry_max_count_option] = STATE(41),
    [sym_variable_option] = STATE(41),
    [sym_verbose_option] = STATE(41),
    [sym_very_verbose_option] = STATE(41),
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
    [anon_sym_LBRACE_LBRACE] = ACTIONS(87),
    [anon_sym_true] = ACTIONS(87),
    [anon_sym_false] = ACTIONS(87),
    [anon_sym_null] = ACTIONS(87),
    [aux_sym_digit_token1] = ACTIONS(87),
    [sym_comment] = ACTIONS(11),
  },
  [12] = {
    [sym_option] = STATE(11),
    [sym_ca_certificate_option] = STATE(41),
    [sym_follow_redirect_option] = STATE(41),
    [sym_insecure_option] = STATE(41),
    [sym_max_redirs_option] = STATE(41),
    [sym_retry_option] = STATE(41),
    [sym_retry_interval_option] = STATE(41),
    [sym_retry_max_count_option] = STATE(41),
    [sym_variable_option] = STATE(41),
    [sym_verbose_option] = STATE(41),
    [sym_very_verbose_option] = STATE(41),
    [aux_sym_options_section_repeat1] = STATE(11),
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
    [anon_sym_LT] = ACTIONS(111),
    [anon_sym_base64_COMMA] = ACTIONS(111),
    [anon_sym_hex_COMMA] = ACTIONS(111),
    [anon_sym_DQUOTE] = ACTIONS(111),
    [anon_sym_BQUOTE] = ACTIONS(111),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(111),
    [anon_sym_LBRACE] = ACTIONS(111),
    [anon_sym_LBRACK] = ACTIONS(111),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(111),
    [anon_sym_true] = ACTIONS(111),
    [anon_sym_false] = ACTIONS(111),
    [anon_sym_null] = ACTIONS(111),
    [aux_sym_digit_token1] = ACTIONS(111),
    [sym_comment] = ACTIONS(11),
  },
  [13] = {
    [sym_option] = STATE(13),
    [sym_ca_certificate_option] = STATE(41),
    [sym_follow_redirect_option] = STATE(41),
    [sym_insecure_option] = STATE(41),
    [sym_max_redirs_option] = STATE(41),
    [sym_retry_option] = STATE(41),
    [sym_retry_interval_option] = STATE(41),
    [sym_retry_max_count_option] = STATE(41),
    [sym_variable_option] = STATE(41),
    [sym_verbose_option] = STATE(41),
    [sym_very_verbose_option] = STATE(41),
    [aux_sym_options_section_repeat1] = STATE(13),
    [ts_builtin_sym_end] = ACTIONS(113),
    [anon_sym_LF] = ACTIONS(113),
    [anon_sym_GET] = ACTIONS(115),
    [anon_sym_HEAD] = ACTIONS(115),
    [anon_sym_POST] = ACTIONS(115),
    [anon_sym_PUT] = ACTIONS(115),
    [anon_sym_DELETE] = ACTIONS(115),
    [anon_sym_CONNECT] = ACTIONS(115),
    [anon_sym_OPTIONS] = ACTIONS(115),
    [anon_sym_TRACE] = ACTIONS(115),
    [anon_sym_PATCH] = ACTIONS(115),
    [anon_sym_LINK] = ACTIONS(115),
    [anon_sym_UNLINK] = ACTIONS(115),
    [anon_sym_PURGE] = ACTIONS(115),
    [anon_sym_LOCK] = ACTIONS(115),
    [anon_sym_UNLOCK] = ACTIONS(115),
    [anon_sym_PROPFIND] = ACTIONS(115),
    [anon_sym_VIEW] = ACTIONS(115),
    [anon_sym_HTTP_SLASH1_DOT0] = ACTIONS(115),
    [anon_sym_HTTP_SLASH1_DOT1] = ACTIONS(115),
    [anon_sym_HTTP_SLASH2] = ACTIONS(115),
    [anon_sym_HTTP_SLASH_STAR] = ACTIONS(115),
    [anon_sym_LBRACKBasicAuth_RBRACK] = ACTIONS(115),
    [anon_sym_LBRACKQueryStringParams_RBRACK] = ACTIONS(115),
    [anon_sym_LBRACKFormParams_RBRACK] = ACTIONS(115),
    [anon_sym_LBRACKMultipartFormData_RBRACK] = ACTIONS(115),
    [anon_sym_LBRACKCookies_RBRACK] = ACTIONS(115),
    [anon_sym_LBRACKOptions_RBRACK] = ACTIONS(115),
    [anon_sym_file_COMMA] = ACTIONS(115),
    [anon_sym_cacert] = ACTIONS(117),
    [anon_sym_location] = ACTIONS(120),
    [anon_sym_insecure] = ACTIONS(123),
    [anon_sym_max_DASHredirs] = ACTIONS(126),
    [anon_sym_retry] = ACTIONS(129),
    [anon_sym_retry_DASHinterval] = ACTIONS(132),
    [anon_sym_retry_DASHmax_DASHcount] = ACTIONS(135),
    [anon_sym_variable] = ACTIONS(138),
    [anon_sym_verbose] = ACTIONS(141),
    [anon_sym_very_DASHverbose] = ACTIONS(144),
    [anon_sym_LT] = ACTIONS(115),
    [anon_sym_base64_COMMA] = ACTIONS(115),
    [anon_sym_hex_COMMA] = ACTIONS(115),
    [anon_sym_DQUOTE] = ACTIONS(115),
    [anon_sym_BQUOTE] = ACTIONS(115),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(115),
    [anon_sym_LBRACE] = ACTIONS(115),
    [anon_sym_LBRACK] = ACTIONS(115),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(115),
    [anon_sym_true] = ACTIONS(115),
    [anon_sym_false] = ACTIONS(115),
    [anon_sym_null] = ACTIONS(115),
    [aux_sym_digit_token1] = ACTIONS(115),
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
    STATE(19), 1,
      sym_query,
    ACTIONS(147), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(16), 2,
      sym_assert,
      aux_sym_asserts_section_repeat1,
    STATE(125), 13,
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
    ACTIONS(149), 32,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
      anon_sym_LBRACE_LBRACE,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      aux_sym_digit_token1,
  [103] = 19,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(181), 1,
      anon_sym_variable,
    ACTIONS(184), 1,
      anon_sym_status,
    ACTIONS(187), 1,
      anon_sym_url,
    ACTIONS(190), 1,
      anon_sym_header,
    ACTIONS(193), 1,
      anon_sym_cookie,
    ACTIONS(196), 1,
      anon_sym_body,
    ACTIONS(199), 1,
      anon_sym_xpath,
    ACTIONS(202), 1,
      anon_sym_jsonpath,
    ACTIONS(205), 1,
      anon_sym_regex,
    ACTIONS(208), 1,
      anon_sym_duration,
    ACTIONS(211), 1,
      anon_sym_sha256,
    ACTIONS(214), 1,
      anon_sym_md5,
    ACTIONS(217), 1,
      anon_sym_bytes,
    STATE(19), 1,
      sym_query,
    ACTIONS(177), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(15), 2,
      sym_assert,
      aux_sym_asserts_section_repeat1,
    STATE(125), 13,
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
    ACTIONS(179), 32,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
      anon_sym_LBRACE_LBRACE,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      aux_sym_digit_token1,
  [206] = 19,
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
    STATE(19), 1,
      sym_query,
    ACTIONS(220), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(15), 2,
      sym_assert,
      aux_sym_asserts_section_repeat1,
    STATE(125), 13,
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
    ACTIONS(222), 32,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
      anon_sym_LBRACE_LBRACE,
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
    STATE(503), 1,
      sym_predicate,
    STATE(509), 1,
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
    STATE(99), 2,
      sym_filter,
      aux_sym_capture_repeat1,
    STATE(115), 7,
      sym_regex_filter,
      sym_count_filter,
      sym_url_encode_filter,
      sym_url_decode_filter,
      sym_html_encode_filter,
      sym_html_decode_filter,
      sym_to_int_filter,
    STATE(508), 17,
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
  [432] = 15,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(274), 1,
      ts_builtin_sym_end,
    ACTIONS(278), 1,
      anon_sym_BSLASH,
    ACTIONS(280), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(282), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(286), 1,
      anon_sym_null,
    ACTIONS(288), 1,
      aux_sym_digit_token1,
    STATE(61), 1,
      aux_sym_value_string_text_repeat1,
    STATE(64), 1,
      sym_integer,
    ACTIONS(284), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(57), 2,
      sym_digit,
      aux_sym_integer_repeat1,
    STATE(43), 3,
      sym_value_string_content,
      sym_template,
      aux_sym_value_string_repeat1,
    STATE(53), 3,
      sym_value_string_text,
      sym_value_string_escaped_char,
      aux_sym_value_string_content_repeat1,
    STATE(85), 4,
      sym_value_string,
      sym_boolean,
      sym_null,
      sym_float,
    ACTIONS(276), 37,
      anon_sym_LF,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
  [523] = 31,
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
    STATE(509), 1,
      sym_predicate_func,
    STATE(510), 1,
      sym_predicate,
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
    STATE(17), 2,
      sym_filter,
      aux_sym_capture_repeat1,
    STATE(115), 7,
      sym_regex_filter,
      sym_count_filter,
      sym_url_encode_filter,
      sym_url_decode_filter,
      sym_html_encode_filter,
      sym_html_decode_filter,
      sym_to_int_filter,
    STATE(508), 17,
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
  [646] = 15,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(274), 1,
      ts_builtin_sym_end,
    ACTIONS(290), 1,
      anon_sym_BSLASH,
    ACTIONS(292), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(294), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(298), 1,
      anon_sym_null,
    ACTIONS(300), 1,
      aux_sym_digit_token1,
    STATE(72), 1,
      aux_sym_value_string_text_repeat1,
    STATE(79), 1,
      sym_integer,
    ACTIONS(296), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(66), 2,
      sym_digit,
      aux_sym_integer_repeat1,
    STATE(46), 3,
      sym_value_string_content,
      sym_template,
      aux_sym_value_string_repeat1,
    STATE(55), 3,
      sym_value_string_text,
      sym_value_string_escaped_char,
      aux_sym_value_string_content_repeat1,
    STATE(94), 4,
      sym_value_string,
      sym_boolean,
      sym_null,
      sym_float,
    ACTIONS(276), 36,
      anon_sym_LF,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
  [736] = 26,
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
    STATE(154), 1,
      sym_body,
    STATE(257), 1,
      sym_integer,
    STATE(539), 1,
      sym_bytes,
    ACTIONS(55), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(302), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(101), 2,
      sym_response_section,
      aux_sym_response_repeat1,
    STATE(105), 2,
      sym_captures_section,
      sym_asserts_section,
    STATE(255), 2,
      sym_digit,
      aux_sym_integer_repeat1,
    STATE(540), 7,
      sym_xml,
      sym_oneline_base64,
      sym_oneline_file,
      sym_oneline_hex,
      sym_oneline_string,
      sym_multiline_string,
      sym_json_value,
    STATE(561), 7,
      sym_json_object,
      sym_json_array,
      sym_json_string,
      sym_json_number,
      sym_template,
      sym_boolean,
      sym_null,
    ACTIONS(304), 16,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
  [847] = 26,
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
    STATE(155), 1,
      sym_body,
    STATE(257), 1,
      sym_integer,
    STATE(539), 1,
      sym_bytes,
    ACTIONS(55), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(81), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(101), 2,
      sym_response_section,
      aux_sym_response_repeat1,
    STATE(105), 2,
      sym_captures_section,
      sym_asserts_section,
    STATE(255), 2,
      sym_digit,
      aux_sym_integer_repeat1,
    STATE(540), 7,
      sym_xml,
      sym_oneline_base64,
      sym_oneline_file,
      sym_oneline_hex,
      sym_oneline_string,
      sym_multiline_string,
      sym_json_value,
    STATE(561), 7,
      sym_json_object,
      sym_json_array,
      sym_json_string,
      sym_json_number,
      sym_template,
      sym_boolean,
      sym_null,
    ACTIONS(83), 16,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
  [958] = 11,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_BSLASH,
    ACTIONS(43), 1,
      sym_key_string_text,
    ACTIONS(310), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(518), 1,
      sym_key_string,
    STATE(528), 1,
      sym_multipart_form_data_param,
    ACTIONS(306), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(259), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(534), 2,
      sym_key_value,
      sym_file_param,
    STATE(189), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
    ACTIONS(308), 39,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
  [1035] = 11,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_BSLASH,
    ACTIONS(43), 1,
      sym_key_string_text,
    ACTIONS(310), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(518), 1,
      sym_key_string,
    STATE(528), 1,
      sym_multipart_form_data_param,
    ACTIONS(312), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(259), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(534), 2,
      sym_key_value,
      sym_file_param,
    STATE(189), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
    ACTIONS(314), 39,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
  [1112] = 11,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_BSLASH,
    ACTIONS(43), 1,
      sym_key_string_text,
    ACTIONS(310), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(518), 1,
      sym_key_string,
    STATE(528), 1,
      sym_multipart_form_data_param,
    ACTIONS(316), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(259), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(534), 2,
      sym_key_value,
      sym_file_param,
    STATE(189), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
    ACTIONS(318), 39,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
  [1189] = 11,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(324), 1,
      anon_sym_BSLASH,
    ACTIONS(327), 1,
      sym_key_string_text,
    ACTIONS(330), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(529), 1,
      sym_key_value,
    STATE(552), 1,
      sym_key_string,
    ACTIONS(320), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(26), 2,
      sym_header,
      aux_sym_request_repeat1,
    STATE(259), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(189), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
    ACTIONS(322), 39,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
  [1266] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(333), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
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
      anon_sym_LBRACE_LBRACE,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      aux_sym_digit_token1,
  [1326] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(337), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
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
      anon_sym_LBRACE_LBRACE,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      aux_sym_digit_token1,
  [1386] = 11,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(341), 1,
      ts_builtin_sym_end,
    ACTIONS(343), 1,
      anon_sym_LF,
    ACTIONS(348), 1,
      anon_sym_BSLASH,
    ACTIONS(351), 1,
      sym_key_string_text,
    ACTIONS(354), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(547), 1,
      sym_key_string,
    STATE(29), 2,
      sym_key_value,
      aux_sym_query_string_params_section_repeat1,
    STATE(259), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(189), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
    ACTIONS(346), 39,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
  [1462] = 11,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_BSLASH,
    ACTIONS(43), 1,
      sym_key_string_text,
    ACTIONS(310), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(357), 1,
      ts_builtin_sym_end,
    ACTIONS(359), 1,
      anon_sym_LF,
    STATE(547), 1,
      sym_key_string,
    STATE(29), 2,
      sym_key_value,
      aux_sym_query_string_params_section_repeat1,
    STATE(259), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(189), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
    ACTIONS(361), 39,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
  [1538] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(363), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(365), 50,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
      anon_sym_LBRACE_LBRACE,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      aux_sym_digit_token1,
  [1598] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(367), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(369), 50,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
      anon_sym_LBRACE_LBRACE,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      aux_sym_digit_token1,
  [1658] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(371), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(373), 50,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
      anon_sym_LBRACE_LBRACE,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      aux_sym_digit_token1,
  [1718] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(375), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(377), 50,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
      anon_sym_LBRACE_LBRACE,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      aux_sym_digit_token1,
  [1778] = 9,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(379), 1,
      ts_builtin_sym_end,
    ACTIONS(383), 1,
      anon_sym_BSLASH,
    ACTIONS(386), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(389), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(61), 1,
      aux_sym_value_string_text_repeat1,
    STATE(35), 3,
      sym_value_string_content,
      sym_template,
      aux_sym_value_string_repeat1,
    STATE(53), 3,
      sym_value_string_text,
      sym_value_string_escaped_char,
      aux_sym_value_string_content_repeat1,
    ACTIONS(381), 41,
      anon_sym_LF,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
  [1850] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(392), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(394), 50,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
      anon_sym_LBRACE_LBRACE,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      aux_sym_digit_token1,
  [1910] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(396), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(398), 50,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
      anon_sym_LBRACE_LBRACE,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      aux_sym_digit_token1,
  [1970] = 11,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_BSLASH,
    ACTIONS(43), 1,
      sym_key_string_text,
    ACTIONS(310), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(400), 1,
      ts_builtin_sym_end,
    ACTIONS(402), 1,
      anon_sym_LF,
    STATE(547), 1,
      sym_key_string,
    STATE(30), 2,
      sym_key_value,
      aux_sym_query_string_params_section_repeat1,
    STATE(259), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(189), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
    ACTIONS(404), 39,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
  [2046] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(406), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(408), 50,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
      anon_sym_LBRACE_LBRACE,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      aux_sym_digit_token1,
  [2106] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(410), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(412), 50,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
      anon_sym_LBRACE_LBRACE,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      aux_sym_digit_token1,
  [2166] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(414), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(416), 50,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
      anon_sym_LBRACE_LBRACE,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      aux_sym_digit_token1,
  [2226] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(418), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(420), 50,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
      anon_sym_LBRACE_LBRACE,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      aux_sym_digit_token1,
  [2286] = 7,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(280), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(422), 1,
      ts_builtin_sym_end,
    STATE(61), 1,
      aux_sym_value_string_text_repeat1,
    STATE(35), 3,
      sym_value_string_content,
      sym_template,
      aux_sym_value_string_repeat1,
    STATE(53), 3,
      sym_value_string_text,
      sym_value_string_escaped_char,
      aux_sym_value_string_content_repeat1,
    ACTIONS(424), 43,
      anon_sym_LF,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
      anon_sym_BSLASH,
      sym_key_string_text,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_LBRACE_LBRACE,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      aux_sym_digit_token1,
  [2354] = 10,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_BSLASH,
    ACTIONS(43), 1,
      sym_key_string_text,
    ACTIONS(310), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(517), 1,
      sym_key_value,
    STATE(552), 1,
      sym_key_string,
    ACTIONS(426), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(259), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(189), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
    ACTIONS(428), 39,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
  [2427] = 10,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_BSLASH,
    ACTIONS(43), 1,
      sym_key_string_text,
    ACTIONS(310), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(517), 1,
      sym_key_value,
    STATE(552), 1,
      sym_key_string,
    ACTIONS(430), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(259), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(189), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
    ACTIONS(432), 39,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
  [2500] = 8,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(290), 1,
      anon_sym_BSLASH,
    ACTIONS(292), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(422), 1,
      ts_builtin_sym_end,
    STATE(72), 1,
      aux_sym_value_string_text_repeat1,
    STATE(50), 3,
      sym_value_string_content,
      sym_template,
      aux_sym_value_string_repeat1,
    STATE(55), 3,
      sym_value_string_text,
      sym_value_string_escaped_char,
      aux_sym_value_string_content_repeat1,
    ACTIONS(424), 41,
      anon_sym_LF,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
      anon_sym_LBRACE_LBRACE,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      aux_sym_digit_token1,
  [2569] = 10,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_BSLASH,
    ACTIONS(43), 1,
      sym_key_string_text,
    ACTIONS(310), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(517), 1,
      sym_key_value,
    STATE(552), 1,
      sym_key_string,
    ACTIONS(434), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(259), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(189), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
    ACTIONS(436), 39,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
  [2642] = 10,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_BSLASH,
    ACTIONS(43), 1,
      sym_key_string_text,
    ACTIONS(310), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(517), 1,
      sym_key_value,
    STATE(552), 1,
      sym_key_string,
    ACTIONS(438), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(259), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(189), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
    ACTIONS(440), 39,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
  [2715] = 10,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_BSLASH,
    ACTIONS(43), 1,
      sym_key_string_text,
    ACTIONS(310), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(517), 1,
      sym_key_value,
    STATE(552), 1,
      sym_key_string,
    ACTIONS(442), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(259), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(189), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
    ACTIONS(444), 39,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
  [2788] = 9,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(379), 1,
      ts_builtin_sym_end,
    ACTIONS(446), 1,
      anon_sym_BSLASH,
    ACTIONS(449), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(452), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(72), 1,
      aux_sym_value_string_text_repeat1,
    STATE(50), 3,
      sym_value_string_content,
      sym_template,
      aux_sym_value_string_repeat1,
    STATE(55), 3,
      sym_value_string_text,
      sym_value_string_escaped_char,
      aux_sym_value_string_content_repeat1,
    ACTIONS(381), 40,
      anon_sym_LF,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
  [2859] = 10,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_BSLASH,
    ACTIONS(43), 1,
      sym_key_string_text,
    ACTIONS(310), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(517), 1,
      sym_key_value,
    STATE(552), 1,
      sym_key_string,
    ACTIONS(455), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(259), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(189), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
    ACTIONS(457), 39,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
  [2932] = 11,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(463), 1,
      anon_sym_LBRACKBasicAuth_RBRACK,
    ACTIONS(466), 1,
      anon_sym_LBRACKQueryStringParams_RBRACK,
    ACTIONS(469), 1,
      anon_sym_LBRACKFormParams_RBRACK,
    ACTIONS(472), 1,
      anon_sym_LBRACKMultipartFormData_RBRACK,
    ACTIONS(475), 1,
      anon_sym_LBRACKCookies_RBRACK,
    ACTIONS(478), 1,
      anon_sym_LBRACKOptions_RBRACK,
    ACTIONS(459), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(52), 2,
      sym_request_section,
      aux_sym_request_repeat2,
    STATE(96), 6,
      sym_basic_auth_section,
      sym_query_string_params_section,
      sym_form_params_section,
      sym_multipart_form_data_section,
      sym_cookies_section,
      sym_options_section,
    ACTIONS(461), 34,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
      anon_sym_LBRACE_LBRACE,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      aux_sym_digit_token1,
  [3006] = 7,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(278), 1,
      anon_sym_BSLASH,
    ACTIONS(280), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(481), 1,
      ts_builtin_sym_end,
    STATE(61), 1,
      aux_sym_value_string_text_repeat1,
    STATE(54), 3,
      sym_value_string_text,
      sym_value_string_escaped_char,
      aux_sym_value_string_content_repeat1,
    ACTIONS(483), 42,
      anon_sym_LF,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
      anon_sym_LBRACE_LBRACE,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      aux_sym_digit_token1,
  [3071] = 7,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(485), 1,
      ts_builtin_sym_end,
    ACTIONS(489), 1,
      anon_sym_BSLASH,
    ACTIONS(492), 1,
      aux_sym_value_string_text_token1,
    STATE(61), 1,
      aux_sym_value_string_text_repeat1,
    STATE(54), 3,
      sym_value_string_text,
      sym_value_string_escaped_char,
      aux_sym_value_string_content_repeat1,
    ACTIONS(487), 42,
      anon_sym_LF,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
      anon_sym_LBRACE_LBRACE,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      aux_sym_digit_token1,
  [3136] = 7,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(290), 1,
      anon_sym_BSLASH,
    ACTIONS(292), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(481), 1,
      ts_builtin_sym_end,
    STATE(72), 1,
      aux_sym_value_string_text_repeat1,
    STATE(56), 3,
      sym_value_string_text,
      sym_value_string_escaped_char,
      aux_sym_value_string_content_repeat1,
    ACTIONS(483), 41,
      anon_sym_LF,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
      anon_sym_LBRACE_LBRACE,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      aux_sym_digit_token1,
  [3200] = 7,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(485), 1,
      ts_builtin_sym_end,
    ACTIONS(495), 1,
      anon_sym_BSLASH,
    ACTIONS(498), 1,
      aux_sym_value_string_text_token1,
    STATE(72), 1,
      aux_sym_value_string_text_repeat1,
    STATE(56), 3,
      sym_value_string_text,
      sym_value_string_escaped_char,
      aux_sym_value_string_content_repeat1,
    ACTIONS(487), 41,
      anon_sym_LF,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
      anon_sym_LBRACE_LBRACE,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      aux_sym_digit_token1,
  [3264] = 4,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(501), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(59), 2,
      sym_digit,
      aux_sym_integer_repeat1,
    ACTIONS(503), 43,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
      anon_sym_BSLASH,
      sym_key_string_text,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_LBRACE_LBRACE,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      aux_sym_digit_token1,
      anon_sym_DOT,
  [3321] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(505), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(507), 45,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
      anon_sym_LBRACE_LBRACE,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      aux_sym_digit_token1,
  [3376] = 5,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(513), 1,
      aux_sym_digit_token1,
    ACTIONS(509), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(59), 2,
      sym_digit,
      aux_sym_integer_repeat1,
    ACTIONS(511), 42,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
      anon_sym_BSLASH,
      sym_key_string_text,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_LBRACE_LBRACE,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      anon_sym_DOT,
  [3435] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(516), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(518), 45,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
      anon_sym_LBRACE_LBRACE,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      aux_sym_digit_token1,
  [3490] = 5,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(520), 1,
      ts_builtin_sym_end,
    ACTIONS(524), 1,
      aux_sym_value_string_text_token1,
    STATE(65), 1,
      aux_sym_value_string_text_repeat1,
    ACTIONS(522), 43,
      anon_sym_LF,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
      anon_sym_BSLASH,
      sym_key_string_text,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_LBRACE_LBRACE,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      aux_sym_digit_token1,
  [3548] = 5,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(526), 1,
      aux_sym_digit_token1,
    ACTIONS(509), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(62), 2,
      sym_digit,
      aux_sym_integer_repeat1,
    ACTIONS(511), 41,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
      anon_sym_BSLASH,
      sym_key_string_text,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_LBRACE_LBRACE,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
  [3606] = 4,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(529), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(62), 2,
      sym_digit,
      aux_sym_integer_repeat1,
    ACTIONS(531), 42,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
      anon_sym_BSLASH,
      sym_key_string_text,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_LBRACE_LBRACE,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      aux_sym_digit_token1,
  [3662] = 5,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(537), 1,
      anon_sym_DOT,
    STATE(89), 1,
      sym_fraction,
    ACTIONS(533), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(535), 42,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
      anon_sym_BSLASH,
      sym_key_string_text,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_LBRACE_LBRACE,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      aux_sym_digit_token1,
  [3720] = 5,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(539), 1,
      ts_builtin_sym_end,
    ACTIONS(543), 1,
      aux_sym_value_string_text_token1,
    STATE(65), 1,
      aux_sym_value_string_text_repeat1,
    ACTIONS(541), 43,
      anon_sym_LF,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
      anon_sym_BSLASH,
      sym_key_string_text,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_LBRACE_LBRACE,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      aux_sym_digit_token1,
  [3778] = 4,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(501), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(76), 2,
      sym_digit,
      aux_sym_integer_repeat1,
    ACTIONS(503), 41,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
      anon_sym_LBRACE_LBRACE,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      aux_sym_digit_token1,
      anon_sym_DOT,
  [3833] = 11,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(324), 1,
      anon_sym_BSLASH,
    ACTIONS(327), 1,
      sym_key_string_text,
    ACTIONS(330), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(523), 1,
      sym_key_value,
    STATE(552), 1,
      sym_key_string,
    ACTIONS(320), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(67), 2,
      sym_header,
      aux_sym_request_repeat1,
    STATE(259), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(189), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
    ACTIONS(322), 31,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
  [3902] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(546), 1,
      ts_builtin_sym_end,
    ACTIONS(548), 44,
      anon_sym_LF,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
      anon_sym_BSLASH,
      sym_key_string_text,
      aux_sym_value_string_text_token1,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_LBRACE_LBRACE,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      aux_sym_digit_token1,
  [3955] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(550), 1,
      ts_builtin_sym_end,
    ACTIONS(552), 44,
      anon_sym_LF,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
      anon_sym_BSLASH,
      sym_key_string_text,
      aux_sym_value_string_text_token1,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_LBRACE_LBRACE,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      aux_sym_digit_token1,
  [4008] = 5,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(539), 1,
      ts_builtin_sym_end,
    ACTIONS(554), 1,
      aux_sym_value_string_text_token1,
    STATE(70), 1,
      aux_sym_value_string_text_repeat1,
    ACTIONS(541), 42,
      anon_sym_LF,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
      anon_sym_BSLASH,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_LBRACE_LBRACE,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      aux_sym_digit_token1,
  [4065] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(557), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(559), 43,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
      anon_sym_BSLASH,
      sym_key_string_text,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_LBRACE_LBRACE,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      aux_sym_digit_token1,
      anon_sym_DOT,
  [4118] = 5,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(520), 1,
      ts_builtin_sym_end,
    ACTIONS(561), 1,
      aux_sym_value_string_text_token1,
    STATE(70), 1,
      aux_sym_value_string_text_repeat1,
    ACTIONS(522), 42,
      anon_sym_LF,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
      anon_sym_BSLASH,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_LBRACE_LBRACE,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      aux_sym_digit_token1,
  [4175] = 5,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(563), 1,
      ts_builtin_sym_end,
    ACTIONS(565), 1,
      anon_sym_LF,
    STATE(73), 1,
      aux_sym_hurl_file_repeat2,
    ACTIONS(568), 42,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
      anon_sym_BSLASH,
      sym_key_string_text,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_LBRACE_LBRACE,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      aux_sym_digit_token1,
  [4232] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(570), 1,
      ts_builtin_sym_end,
    ACTIONS(572), 44,
      anon_sym_LF,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
      anon_sym_BSLASH,
      sym_key_string_text,
      aux_sym_value_string_text_token1,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_LBRACE_LBRACE,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      aux_sym_digit_token1,
  [4285] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(574), 1,
      ts_builtin_sym_end,
    ACTIONS(576), 44,
      anon_sym_LF,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
      anon_sym_BSLASH,
      sym_key_string_text,
      aux_sym_value_string_text_token1,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_LBRACE_LBRACE,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      aux_sym_digit_token1,
  [4338] = 5,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(578), 1,
      aux_sym_digit_token1,
    ACTIONS(509), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(76), 2,
      sym_digit,
      aux_sym_integer_repeat1,
    ACTIONS(511), 40,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
      anon_sym_LBRACE_LBRACE,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      anon_sym_DOT,
  [4395] = 10,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_BSLASH,
    ACTIONS(43), 1,
      sym_key_string_text,
    ACTIONS(310), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(480), 1,
      sym_key_string,
    ACTIONS(581), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(88), 2,
      sym_capture,
      aux_sym_captures_section_repeat1,
    STATE(259), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(189), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
    ACTIONS(583), 31,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
  [4461] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(585), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(587), 42,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
      anon_sym_BSLASH,
      sym_key_string_text,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_LBRACE_LBRACE,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      aux_sym_digit_token1,
  [4513] = 5,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(589), 1,
      anon_sym_DOT,
    STATE(97), 1,
      sym_fraction,
    ACTIONS(533), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(535), 40,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
      anon_sym_LBRACE_LBRACE,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      aux_sym_digit_token1,
  [4569] = 10,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_BSLASH,
    ACTIONS(43), 1,
      sym_key_string_text,
    ACTIONS(310), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(480), 1,
      sym_key_string,
    ACTIONS(591), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(77), 2,
      sym_capture,
      aux_sym_captures_section_repeat1,
    STATE(259), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(189), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
    ACTIONS(593), 31,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
  [4635] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(546), 1,
      ts_builtin_sym_end,
    ACTIONS(548), 43,
      anon_sym_LF,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
      anon_sym_BSLASH,
      aux_sym_value_string_text_token1,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_LBRACE_LBRACE,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      aux_sym_digit_token1,
  [4687] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(550), 1,
      ts_builtin_sym_end,
    ACTIONS(552), 43,
      anon_sym_LF,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
      anon_sym_BSLASH,
      aux_sym_value_string_text_token1,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_LBRACE_LBRACE,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      aux_sym_digit_token1,
  [4739] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(574), 1,
      ts_builtin_sym_end,
    ACTIONS(576), 43,
      anon_sym_LF,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
      anon_sym_BSLASH,
      aux_sym_value_string_text_token1,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_LBRACE_LBRACE,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      aux_sym_digit_token1,
  [4791] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(557), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(559), 42,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
      anon_sym_BSLASH,
      sym_key_string_text,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_LBRACE_LBRACE,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      aux_sym_digit_token1,
  [4843] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(533), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(535), 42,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
      anon_sym_BSLASH,
      sym_key_string_text,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_LBRACE_LBRACE,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      aux_sym_digit_token1,
  [4895] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(570), 1,
      ts_builtin_sym_end,
    ACTIONS(572), 43,
      anon_sym_LF,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
      anon_sym_BSLASH,
      aux_sym_value_string_text_token1,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_LBRACE_LBRACE,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      aux_sym_digit_token1,
  [4947] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(595), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(597), 42,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
      anon_sym_BSLASH,
      sym_key_string_text,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_LBRACE_LBRACE,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      aux_sym_digit_token1,
  [4999] = 10,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(603), 1,
      anon_sym_BSLASH,
    ACTIONS(606), 1,
      sym_key_string_text,
    ACTIONS(609), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(480), 1,
      sym_key_string,
    ACTIONS(599), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(88), 2,
      sym_capture,
      aux_sym_captures_section_repeat1,
    STATE(259), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(189), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
    ACTIONS(601), 31,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
  [5065] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(612), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(614), 42,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
      anon_sym_BSLASH,
      sym_key_string_text,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_LBRACE_LBRACE,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      aux_sym_digit_token1,
  [5117] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(616), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(618), 42,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
      anon_sym_BSLASH,
      sym_key_string_text,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_LBRACE_LBRACE,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      aux_sym_digit_token1,
  [5169] = 4,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(529), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(76), 2,
      sym_digit,
      aux_sym_integer_repeat1,
    ACTIONS(531), 40,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
      anon_sym_LBRACE_LBRACE,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      aux_sym_digit_token1,
  [5223] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(557), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(559), 41,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
      anon_sym_LBRACE_LBRACE,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      aux_sym_digit_token1,
      anon_sym_DOT,
  [5274] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(595), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(597), 40,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
      anon_sym_LBRACE_LBRACE,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      aux_sym_digit_token1,
  [5324] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(533), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(535), 40,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
      anon_sym_LBRACE_LBRACE,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      aux_sym_digit_token1,
  [5374] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(620), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(622), 40,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
      anon_sym_LBRACE_LBRACE,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      aux_sym_digit_token1,
  [5424] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(624), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(626), 40,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
      anon_sym_LBRACE_LBRACE,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      aux_sym_digit_token1,
  [5474] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(612), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(614), 40,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
      anon_sym_LBRACE_LBRACE,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      aux_sym_digit_token1,
  [5524] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(585), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(587), 40,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
      anon_sym_LBRACE_LBRACE,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      aux_sym_digit_token1,
  [5574] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(628), 1,
      anon_sym_regex,
    ACTIONS(635), 1,
      anon_sym_count,
    ACTIONS(638), 1,
      anon_sym_urlEncode,
    ACTIONS(641), 1,
      anon_sym_urlDecode,
    ACTIONS(644), 1,
      anon_sym_htmlEscape,
    ACTIONS(647), 1,
      anon_sym_htmlUnescape,
    ACTIONS(650), 1,
      anon_sym_toInt,
    STATE(99), 2,
      sym_filter,
      aux_sym_capture_repeat1,
    ACTIONS(631), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    STATE(115), 7,
      sym_regex_filter,
      sym_count_filter,
      sym_url_encode_filter,
      sym_url_decode_filter,
      sym_html_encode_filter,
      sym_html_decode_filter,
      sym_to_int_filter,
    ACTIONS(633), 20,
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
  [5641] = 20,
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
    STATE(477), 1,
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
    STATE(508), 17,
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
  [5724] = 7,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(657), 1,
      anon_sym_LBRACKCaptures_RBRACK,
    ACTIONS(660), 1,
      anon_sym_LBRACKAsserts_RBRACK,
    ACTIONS(653), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(101), 2,
      sym_response_section,
      aux_sym_response_repeat1,
    STATE(105), 2,
      sym_captures_section,
      sym_asserts_section,
    ACTIONS(655), 30,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
      anon_sym_LBRACE_LBRACE,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      aux_sym_digit_token1,
  [5778] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(616), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(618), 34,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
      anon_sym_BSLASH,
      sym_key_string_text,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_LBRACE_LBRACE,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      aux_sym_digit_token1,
  [5822] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(663), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(665), 34,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
      anon_sym_BSLASH,
      sym_key_string_text,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_LBRACE_LBRACE,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      aux_sym_digit_token1,
  [5866] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(667), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(669), 34,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
      anon_sym_BSLASH,
      sym_key_string_text,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_LBRACE_LBRACE,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      aux_sym_digit_token1,
  [5910] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(671), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(673), 32,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
      anon_sym_LBRACE_LBRACE,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      aux_sym_digit_token1,
  [5952] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(677), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(675), 27,
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
  [5992] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(681), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(679), 27,
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
  [6032] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(685), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(683), 27,
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
  [6072] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(689), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(687), 27,
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
  [6112] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(693), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(691), 27,
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
  [6152] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(697), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(695), 27,
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
  [6192] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(701), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(699), 27,
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
  [6232] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(705), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(703), 27,
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
  [6272] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(709), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(707), 27,
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
  [6312] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(713), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(711), 27,
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
  [6352] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(717), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(715), 27,
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
  [6392] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(721), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(719), 27,
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
  [6432] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(725), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(723), 26,
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
  [6471] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(729), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(727), 26,
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
  [6510] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(733), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(731), 26,
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
  [6549] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(737), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(735), 26,
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
  [6588] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(741), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(739), 26,
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
  [6627] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(745), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(743), 26,
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
  [6666] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(749), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(747), 26,
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
  [6705] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(753), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(751), 26,
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
  [6744] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(757), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(755), 26,
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
  [6783] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(761), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(759), 26,
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
  [6822] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(765), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(763), 26,
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
  [6861] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(769), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(767), 26,
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
  [6900] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(773), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(771), 26,
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
  [6939] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(777), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(775), 26,
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
  [6978] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(779), 1,
      anon_sym_variable,
    ACTIONS(781), 1,
      anon_sym_status,
    ACTIONS(783), 1,
      anon_sym_url,
    ACTIONS(785), 1,
      anon_sym_header,
    ACTIONS(787), 1,
      anon_sym_cookie,
    ACTIONS(789), 1,
      anon_sym_body,
    ACTIONS(791), 1,
      anon_sym_xpath,
    ACTIONS(793), 1,
      anon_sym_jsonpath,
    ACTIONS(795), 1,
      anon_sym_regex,
    ACTIONS(797), 1,
      anon_sym_duration,
    ACTIONS(799), 1,
      anon_sym_sha256,
    ACTIONS(801), 1,
      anon_sym_md5,
    ACTIONS(803), 1,
      anon_sym_bytes,
    STATE(159), 1,
      sym_query,
    STATE(212), 13,
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
  [7039] = 7,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(805), 1,
      ts_builtin_sym_end,
    ACTIONS(807), 1,
      anon_sym_LF,
    STATE(152), 1,
      sym_response,
    STATE(349), 1,
      sym_version,
    ACTIONS(811), 4,
      anon_sym_HTTP_SLASH1_DOT0,
      anon_sym_HTTP_SLASH1_DOT1,
      anon_sym_HTTP_SLASH2,
      anon_sym_HTTP_SLASH_STAR,
    ACTIONS(809), 16,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
  [7079] = 16,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(57), 1,
      anon_sym_null,
    ACTIONS(59), 1,
      aux_sym_digit_token1,
    ACTIONS(276), 1,
      anon_sym_LF,
    ACTIONS(813), 1,
      anon_sym_file_COMMA,
    ACTIONS(815), 1,
      anon_sym_BSLASH,
    ACTIONS(817), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(819), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(282), 1,
      aux_sym_value_string_text_repeat1,
    STATE(367), 1,
      sym_integer,
    STATE(576), 1,
      sym_file_value,
    ACTIONS(55), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(255), 2,
      sym_digit,
      aux_sym_integer_repeat1,
    STATE(177), 3,
      sym_value_string_content,
      sym_template,
      aux_sym_value_string_repeat1,
    STATE(232), 3,
      sym_value_string_text,
      sym_value_string_escaped_char,
      aux_sym_value_string_content_repeat1,
    STATE(473), 4,
      sym_value_string,
      sym_boolean,
      sym_null,
      sym_float,
  [7137] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(821), 1,
      anon_sym_file_COMMA,
    ACTIONS(823), 1,
      anon_sym_base64_COMMA,
    ACTIONS(825), 1,
      anon_sym_hex_COMMA,
    ACTIONS(827), 1,
      anon_sym_DQUOTE,
    ACTIONS(829), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(831), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(835), 1,
      anon_sym_null,
    ACTIONS(837), 1,
      aux_sym_digit_token1,
    STATE(369), 1,
      sym_integer,
    STATE(453), 1,
      sym_predicate_value,
    ACTIONS(833), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(255), 2,
      sym_digit,
      aux_sym_integer_repeat1,
    STATE(472), 9,
      sym_oneline_base64,
      sym_oneline_file,
      sym_oneline_hex,
      sym_quoted_string,
      sym_multiline_string,
      sym_template,
      sym_boolean,
      sym_null,
      sym_float,
  [7190] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(821), 1,
      anon_sym_file_COMMA,
    ACTIONS(823), 1,
      anon_sym_base64_COMMA,
    ACTIONS(825), 1,
      anon_sym_hex_COMMA,
    ACTIONS(827), 1,
      anon_sym_DQUOTE,
    ACTIONS(829), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(831), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(835), 1,
      anon_sym_null,
    ACTIONS(837), 1,
      aux_sym_digit_token1,
    STATE(369), 1,
      sym_integer,
    STATE(471), 1,
      sym_predicate_value,
    ACTIONS(833), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(255), 2,
      sym_digit,
      aux_sym_integer_repeat1,
    STATE(472), 9,
      sym_oneline_base64,
      sym_oneline_file,
      sym_oneline_hex,
      sym_quoted_string,
      sym_multiline_string,
      sym_template,
      sym_boolean,
      sym_null,
      sym_float,
  [7243] = 8,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(839), 1,
      ts_builtin_sym_end,
    ACTIONS(841), 1,
      anon_sym_LF,
    STATE(133), 1,
      sym_request,
    STATE(163), 1,
      sym_method,
    STATE(355), 1,
      aux_sym_hurl_file_repeat2,
    STATE(146), 2,
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
  [7284] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(821), 1,
      anon_sym_file_COMMA,
    ACTIONS(823), 1,
      anon_sym_base64_COMMA,
    ACTIONS(825), 1,
      anon_sym_hex_COMMA,
    ACTIONS(827), 1,
      anon_sym_DQUOTE,
    ACTIONS(829), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(831), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(835), 1,
      anon_sym_null,
    ACTIONS(837), 1,
      aux_sym_digit_token1,
    STATE(369), 1,
      sym_integer,
    STATE(474), 1,
      sym_predicate_value,
    ACTIONS(833), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(255), 2,
      sym_digit,
      aux_sym_integer_repeat1,
    STATE(472), 9,
      sym_oneline_base64,
      sym_oneline_file,
      sym_oneline_hex,
      sym_quoted_string,
      sym_multiline_string,
      sym_template,
      sym_boolean,
      sym_null,
      sym_float,
  [7337] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(843), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(845), 20,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
  [7367] = 3,
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
  [7397] = 3,
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
  [7427] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      anon_sym_null,
    ACTIONS(59), 1,
      aux_sym_digit_token1,
    ACTIONS(827), 1,
      anon_sym_DQUOTE,
    ACTIONS(831), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(847), 1,
      anon_sym_BSLASH,
    ACTIONS(849), 1,
      sym_key_string_text,
    STATE(391), 1,
      sym_integer,
    STATE(521), 1,
      sym_variable_value,
    ACTIONS(55), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(255), 2,
      sym_digit,
      aux_sym_integer_repeat1,
    STATE(267), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(190), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
    STATE(525), 5,
      sym_quoted_string,
      sym_key_string,
      sym_boolean,
      sym_null,
      sym_float,
  [7479] = 3,
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
  [7509] = 14,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(57), 1,
      anon_sym_null,
    ACTIONS(59), 1,
      aux_sym_digit_token1,
    ACTIONS(276), 1,
      anon_sym_LF,
    ACTIONS(815), 1,
      anon_sym_BSLASH,
    ACTIONS(817), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(819), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(282), 1,
      aux_sym_value_string_text_repeat1,
    STATE(367), 1,
      sym_integer,
    ACTIONS(55), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(255), 2,
      sym_digit,
      aux_sym_integer_repeat1,
    STATE(177), 3,
      sym_value_string_content,
      sym_template,
      aux_sym_value_string_repeat1,
    STATE(232), 3,
      sym_value_string_text,
      sym_value_string_escaped_char,
      aux_sym_value_string_content_repeat1,
    STATE(473), 4,
      sym_value_string,
      sym_boolean,
      sym_null,
      sym_float,
  [7561] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(851), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(853), 20,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
  [7591] = 6,
    ACTIONS(11), 1,
      sym_comment,
    STATE(133), 1,
      sym_request,
    STATE(163), 1,
      sym_method,
    ACTIONS(855), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(146), 2,
      sym_entry,
      aux_sym_hurl_file_repeat1,
    ACTIONS(857), 16,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
  [7627] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(860), 1,
      anon_sym_DQUOTE,
    ACTIONS(862), 1,
      anon_sym_LBRACE,
    ACTIONS(864), 1,
      anon_sym_LBRACK,
    ACTIONS(866), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(870), 1,
      anon_sym_null,
    ACTIONS(872), 1,
      aux_sym_digit_token1,
    STATE(226), 1,
      sym_integer,
    STATE(425), 1,
      sym_json_value,
    ACTIONS(868), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(192), 2,
      sym_digit,
      aux_sym_integer_repeat1,
    STATE(405), 7,
      sym_json_object,
      sym_json_array,
      sym_json_string,
      sym_json_number,
      sym_template,
      sym_boolean,
      sym_null,
  [7672] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(860), 1,
      anon_sym_DQUOTE,
    ACTIONS(862), 1,
      anon_sym_LBRACE,
    ACTIONS(864), 1,
      anon_sym_LBRACK,
    ACTIONS(866), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(870), 1,
      anon_sym_null,
    ACTIONS(872), 1,
      aux_sym_digit_token1,
    STATE(226), 1,
      sym_integer,
    STATE(426), 1,
      sym_json_value,
    ACTIONS(868), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(192), 2,
      sym_digit,
      aux_sym_integer_repeat1,
    STATE(405), 7,
      sym_json_object,
      sym_json_array,
      sym_json_string,
      sym_json_number,
      sym_template,
      sym_boolean,
      sym_null,
  [7717] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(860), 1,
      anon_sym_DQUOTE,
    ACTIONS(862), 1,
      anon_sym_LBRACE,
    ACTIONS(864), 1,
      anon_sym_LBRACK,
    ACTIONS(866), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(870), 1,
      anon_sym_null,
    ACTIONS(872), 1,
      aux_sym_digit_token1,
    STATE(226), 1,
      sym_integer,
    STATE(360), 1,
      sym_json_value,
    ACTIONS(868), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(192), 2,
      sym_digit,
      aux_sym_integer_repeat1,
    STATE(405), 7,
      sym_json_object,
      sym_json_array,
      sym_json_string,
      sym_json_number,
      sym_template,
      sym_boolean,
      sym_null,
  [7762] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(860), 1,
      anon_sym_DQUOTE,
    ACTIONS(862), 1,
      anon_sym_LBRACE,
    ACTIONS(864), 1,
      anon_sym_LBRACK,
    ACTIONS(866), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(870), 1,
      anon_sym_null,
    ACTIONS(872), 1,
      aux_sym_digit_token1,
    STATE(226), 1,
      sym_integer,
    STATE(344), 1,
      sym_json_value,
    ACTIONS(868), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(192), 2,
      sym_digit,
      aux_sym_integer_repeat1,
    STATE(405), 7,
      sym_json_object,
      sym_json_array,
      sym_json_string,
      sym_json_number,
      sym_template,
      sym_boolean,
      sym_null,
  [7807] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(81), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(83), 16,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
  [7833] = 4,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(874), 1,
      ts_builtin_sym_end,
    ACTIONS(876), 1,
      anon_sym_LF,
    ACTIONS(878), 16,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
  [7861] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(874), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(878), 16,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
  [7887] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(880), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(882), 16,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
  [7913] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(302), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(304), 16,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
  [7939] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(884), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(886), 16,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
  [7965] = 11,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(633), 1,
      anon_sym_LF,
    ACTIONS(888), 1,
      anon_sym_regex,
    ACTIONS(891), 1,
      anon_sym_count,
    ACTIONS(894), 1,
      anon_sym_urlEncode,
    ACTIONS(897), 1,
      anon_sym_urlDecode,
    ACTIONS(900), 1,
      anon_sym_htmlEscape,
    ACTIONS(903), 1,
      anon_sym_htmlUnescape,
    ACTIONS(906), 1,
      anon_sym_toInt,
    STATE(157), 2,
      sym_filter,
      aux_sym_capture_repeat1,
    STATE(237), 7,
      sym_regex_filter,
      sym_count_filter,
      sym_url_encode_filter,
      sym_url_decode_filter,
      sym_html_encode_filter,
      sym_html_decode_filter,
      sym_to_int_filter,
  [8006] = 11,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(909), 1,
      anon_sym_LF,
    ACTIONS(911), 1,
      anon_sym_regex,
    ACTIONS(913), 1,
      anon_sym_count,
    ACTIONS(915), 1,
      anon_sym_urlEncode,
    ACTIONS(917), 1,
      anon_sym_urlDecode,
    ACTIONS(919), 1,
      anon_sym_htmlEscape,
    ACTIONS(921), 1,
      anon_sym_htmlUnescape,
    ACTIONS(923), 1,
      anon_sym_toInt,
    STATE(157), 2,
      sym_filter,
      aux_sym_capture_repeat1,
    STATE(237), 7,
      sym_regex_filter,
      sym_count_filter,
      sym_url_encode_filter,
      sym_url_decode_filter,
      sym_html_encode_filter,
      sym_html_decode_filter,
      sym_to_int_filter,
  [8047] = 11,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(911), 1,
      anon_sym_regex,
    ACTIONS(913), 1,
      anon_sym_count,
    ACTIONS(915), 1,
      anon_sym_urlEncode,
    ACTIONS(917), 1,
      anon_sym_urlDecode,
    ACTIONS(919), 1,
      anon_sym_htmlEscape,
    ACTIONS(921), 1,
      anon_sym_htmlUnescape,
    ACTIONS(923), 1,
      anon_sym_toInt,
    ACTIONS(925), 1,
      anon_sym_LF,
    STATE(158), 2,
      sym_filter,
      aux_sym_capture_repeat1,
    STATE(237), 7,
      sym_regex_filter,
      sym_count_filter,
      sym_url_encode_filter,
      sym_url_decode_filter,
      sym_html_encode_filter,
      sym_html_decode_filter,
      sym_to_int_filter,
  [8088] = 11,
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
    ACTIONS(927), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(99), 2,
      sym_filter,
      aux_sym_capture_repeat1,
    STATE(115), 7,
      sym_regex_filter,
      sym_count_filter,
      sym_url_encode_filter,
      sym_url_decode_filter,
      sym_html_encode_filter,
      sym_html_decode_filter,
      sym_to_int_filter,
  [8129] = 11,
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
    ACTIONS(929), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(160), 2,
      sym_filter,
      aux_sym_capture_repeat1,
    STATE(115), 7,
      sym_regex_filter,
      sym_count_filter,
      sym_url_encode_filter,
      sym_url_decode_filter,
      sym_html_encode_filter,
      sym_html_decode_filter,
      sym_to_int_filter,
  [8170] = 11,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_BSLASH,
    ACTIONS(43), 1,
      sym_key_string_text,
    ACTIONS(310), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(931), 1,
      anon_sym_LF,
    STATE(435), 1,
      sym_multipart_form_data_param,
    STATE(448), 1,
      aux_sym_multipart_form_data_section_repeat1,
    STATE(518), 1,
      sym_key_string,
    STATE(259), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(534), 2,
      sym_key_value,
      sym_file_param,
    STATE(189), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
  [8208] = 10,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(815), 1,
      anon_sym_BSLASH,
    ACTIONS(817), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(819), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(933), 1,
      anon_sym_LF,
    STATE(3), 1,
      aux_sym_hurl_file_repeat2,
    STATE(282), 1,
      aux_sym_value_string_text_repeat1,
    STATE(443), 1,
      sym_value_string,
    STATE(177), 3,
      sym_value_string_content,
      sym_template,
      aux_sym_value_string_repeat1,
    STATE(232), 3,
      sym_value_string_text,
      sym_value_string_escaped_char,
      aux_sym_value_string_content_repeat1,
  [8243] = 10,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_BSLASH,
    ACTIONS(43), 1,
      sym_key_string_text,
    ACTIONS(310), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(935), 1,
      anon_sym_LF,
    STATE(417), 1,
      sym_key_value,
    STATE(422), 1,
      aux_sym_form_params_section_repeat1,
    STATE(552), 1,
      sym_key_string,
    STATE(259), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(189), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
  [8277] = 10,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_BSLASH,
    ACTIONS(43), 1,
      sym_key_string_text,
    ACTIONS(310), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(937), 1,
      anon_sym_LF,
    STATE(413), 1,
      aux_sym_form_params_section_repeat1,
    STATE(450), 1,
      sym_key_value,
    STATE(552), 1,
      sym_key_string,
    STATE(259), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(189), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
  [8311] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(939), 1,
      anon_sym_BSLASH,
    ACTIONS(941), 1,
      sym_key_string_text,
    ACTIONS(943), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(518), 1,
      sym_key_string,
    STATE(528), 1,
      sym_multipart_form_data_param,
    STATE(259), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(534), 2,
      sym_key_value,
      sym_file_param,
    STATE(189), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
  [8343] = 7,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(945), 1,
      anon_sym_DQUOTE,
    ACTIONS(947), 1,
      aux_sym_quoted_string_text_token1,
    ACTIONS(950), 1,
      anon_sym_BSLASH,
    ACTIONS(953), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(167), 3,
      sym_quoted_string_content,
      sym_template,
      aux_sym_quoted_string_repeat1,
    STATE(221), 4,
      sym_quoted_string_text,
      sym_invalid_quoted_string_escaped_char,
      sym_quoted_string_escaped_char,
      aux_sym_quoted_string_content_repeat1,
  [8370] = 8,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(956), 1,
      anon_sym_LF,
    ACTIONS(958), 1,
      anon_sym_BSLASH,
    ACTIONS(960), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(962), 1,
      aux_sym_multiline_string_text_token1,
    ACTIONS(964), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(175), 3,
      sym_multiline_string_content,
      sym_template,
      aux_sym_multiline_string_repeat1,
    STATE(231), 3,
      sym_multiline_string_text,
      sym_multiline_string_escaped_char,
      aux_sym_multiline_string_content_repeat1,
  [8399] = 7,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(966), 1,
      anon_sym_DQUOTE,
    ACTIONS(968), 1,
      aux_sym_quoted_string_text_token1,
    ACTIONS(970), 1,
      anon_sym_BSLASH,
    ACTIONS(972), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(167), 3,
      sym_quoted_string_content,
      sym_template,
      aux_sym_quoted_string_repeat1,
    STATE(221), 4,
      sym_quoted_string_text,
      sym_invalid_quoted_string_escaped_char,
      sym_quoted_string_escaped_char,
      aux_sym_quoted_string_content_repeat1,
  [8426] = 7,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(968), 1,
      aux_sym_quoted_string_text_token1,
    ACTIONS(970), 1,
      anon_sym_BSLASH,
    ACTIONS(972), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(974), 1,
      anon_sym_DQUOTE,
    STATE(167), 3,
      sym_quoted_string_content,
      sym_template,
      aux_sym_quoted_string_repeat1,
    STATE(221), 4,
      sym_quoted_string_text,
      sym_invalid_quoted_string_escaped_char,
      sym_quoted_string_escaped_char,
      aux_sym_quoted_string_content_repeat1,
  [8453] = 8,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(956), 1,
      anon_sym_LF,
    ACTIONS(958), 1,
      anon_sym_BSLASH,
    ACTIONS(960), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(962), 1,
      aux_sym_multiline_string_text_token1,
    ACTIONS(964), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(173), 3,
      sym_multiline_string_content,
      sym_template,
      aux_sym_multiline_string_repeat1,
    STATE(231), 3,
      sym_multiline_string_text,
      sym_multiline_string_escaped_char,
      aux_sym_multiline_string_content_repeat1,
  [8482] = 7,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(968), 1,
      aux_sym_quoted_string_text_token1,
    ACTIONS(970), 1,
      anon_sym_BSLASH,
    ACTIONS(972), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(976), 1,
      anon_sym_DQUOTE,
    STATE(170), 3,
      sym_quoted_string_content,
      sym_template,
      aux_sym_quoted_string_repeat1,
    STATE(221), 4,
      sym_quoted_string_text,
      sym_invalid_quoted_string_escaped_char,
      sym_quoted_string_escaped_char,
      aux_sym_quoted_string_content_repeat1,
  [8509] = 8,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(978), 1,
      anon_sym_LF,
    ACTIONS(981), 1,
      anon_sym_BSLASH,
    ACTIONS(984), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(986), 1,
      aux_sym_multiline_string_text_token1,
    ACTIONS(989), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(173), 3,
      sym_multiline_string_content,
      sym_template,
      aux_sym_multiline_string_repeat1,
    STATE(231), 3,
      sym_multiline_string_text,
      sym_multiline_string_escaped_char,
      aux_sym_multiline_string_content_repeat1,
  [8538] = 8,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(958), 1,
      anon_sym_BSLASH,
    ACTIONS(962), 1,
      aux_sym_multiline_string_text_token1,
    ACTIONS(964), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(992), 1,
      anon_sym_LF,
    ACTIONS(994), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(171), 3,
      sym_multiline_string_content,
      sym_template,
      aux_sym_multiline_string_repeat1,
    STATE(231), 3,
      sym_multiline_string_text,
      sym_multiline_string_escaped_char,
      aux_sym_multiline_string_content_repeat1,
  [8567] = 8,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(958), 1,
      anon_sym_BSLASH,
    ACTIONS(962), 1,
      aux_sym_multiline_string_text_token1,
    ACTIONS(964), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(996), 1,
      anon_sym_LF,
    ACTIONS(998), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(173), 3,
      sym_multiline_string_content,
      sym_template,
      aux_sym_multiline_string_repeat1,
    STATE(231), 3,
      sym_multiline_string_text,
      sym_multiline_string_escaped_char,
      aux_sym_multiline_string_content_repeat1,
  [8596] = 8,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(381), 1,
      anon_sym_LF,
    ACTIONS(1000), 1,
      anon_sym_BSLASH,
    ACTIONS(1003), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(1006), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(282), 1,
      aux_sym_value_string_text_repeat1,
    STATE(176), 3,
      sym_value_string_content,
      sym_template,
      aux_sym_value_string_repeat1,
    STATE(232), 3,
      sym_value_string_text,
      sym_value_string_escaped_char,
      aux_sym_value_string_content_repeat1,
  [8625] = 8,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(424), 1,
      anon_sym_LF,
    ACTIONS(815), 1,
      anon_sym_BSLASH,
    ACTIONS(817), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(819), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(282), 1,
      aux_sym_value_string_text_repeat1,
    STATE(176), 3,
      sym_value_string_content,
      sym_template,
      aux_sym_value_string_repeat1,
    STATE(232), 3,
      sym_value_string_text,
      sym_value_string_escaped_char,
      aux_sym_value_string_content_repeat1,
  [8654] = 7,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(968), 1,
      aux_sym_quoted_string_text_token1,
    ACTIONS(970), 1,
      anon_sym_BSLASH,
    ACTIONS(972), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1009), 1,
      anon_sym_DQUOTE,
    STATE(169), 3,
      sym_quoted_string_content,
      sym_template,
      aux_sym_quoted_string_repeat1,
    STATE(221), 4,
      sym_quoted_string_text,
      sym_invalid_quoted_string_escaped_char,
      sym_quoted_string_escaped_char,
      aux_sym_quoted_string_content_repeat1,
  [8681] = 8,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1011), 1,
      anon_sym_SEMI,
    ACTIONS(1013), 1,
      anon_sym_BSLASH,
    ACTIONS(1015), 1,
      sym_filename_text,
    ACTIONS(1017), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(489), 1,
      sym_filename,
    STATE(268), 2,
      sym_filename_escaped_char,
      aux_sym_filename_content_repeat1,
    STATE(187), 3,
      sym_filename_content,
      sym_template,
      aux_sym_filename_repeat1,
  [8709] = 7,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1019), 1,
      anon_sym_BSLASH,
    ACTIONS(1022), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(1025), 1,
      anon_sym_BQUOTE,
    ACTIONS(1027), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(180), 3,
      sym_oneline_string_content,
      sym_template,
      aux_sym_oneline_string_repeat1,
    STATE(250), 3,
      sym_oneline_string_text,
      sym_oneline_string_escaped_char,
      aux_sym_oneline_string_content_repeat1,
  [8735] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(939), 1,
      anon_sym_BSLASH,
    ACTIONS(941), 1,
      sym_key_string_text,
    ACTIONS(943), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(95), 1,
      sym_key_value,
    STATE(524), 1,
      sym_key_string,
    STATE(259), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(189), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
  [8763] = 7,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1030), 1,
      anon_sym_BSLASH,
    ACTIONS(1032), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(1034), 1,
      anon_sym_BQUOTE,
    ACTIONS(1036), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(185), 3,
      sym_oneline_string_content,
      sym_template,
      aux_sym_oneline_string_repeat1,
    STATE(250), 3,
      sym_oneline_string_text,
      sym_oneline_string_escaped_char,
      aux_sym_oneline_string_content_repeat1,
  [8789] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(939), 1,
      anon_sym_BSLASH,
    ACTIONS(941), 1,
      sym_key_string_text,
    ACTIONS(943), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(517), 1,
      sym_key_value,
    STATE(552), 1,
      sym_key_string,
    STATE(259), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(189), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
  [8817] = 8,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1038), 1,
      anon_sym_LF,
    ACTIONS(1040), 1,
      anon_sym_BSLASH,
    ACTIONS(1042), 1,
      sym_filename_text,
    ACTIONS(1044), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(573), 1,
      sym_filename,
    STATE(258), 2,
      sym_filename_escaped_char,
      aux_sym_filename_content_repeat1,
    STATE(198), 3,
      sym_filename_content,
      sym_template,
      aux_sym_filename_repeat1,
  [8845] = 7,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1030), 1,
      anon_sym_BSLASH,
    ACTIONS(1032), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(1036), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1046), 1,
      anon_sym_BQUOTE,
    STATE(180), 3,
      sym_oneline_string_content,
      sym_template,
      aux_sym_oneline_string_repeat1,
    STATE(250), 3,
      sym_oneline_string_text,
      sym_oneline_string_escaped_char,
      aux_sym_oneline_string_content_repeat1,
  [8871] = 8,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1013), 1,
      anon_sym_BSLASH,
    ACTIONS(1015), 1,
      sym_filename_text,
    ACTIONS(1017), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1048), 1,
      anon_sym_SEMI,
    STATE(506), 1,
      sym_filename,
    STATE(268), 2,
      sym_filename_escaped_char,
      aux_sym_filename_content_repeat1,
    STATE(187), 3,
      sym_filename_content,
      sym_template,
      aux_sym_filename_repeat1,
  [8899] = 7,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1013), 1,
      anon_sym_BSLASH,
    ACTIONS(1015), 1,
      sym_filename_text,
    ACTIONS(1017), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1050), 1,
      anon_sym_SEMI,
    STATE(268), 2,
      sym_filename_escaped_char,
      aux_sym_filename_content_repeat1,
    STATE(193), 3,
      sym_filename_content,
      sym_template,
      aux_sym_filename_repeat1,
  [8924] = 7,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1052), 1,
      anon_sym_DQUOTE,
    ACTIONS(1054), 1,
      anon_sym_BSLASH,
    ACTIONS(1056), 1,
      aux_sym_json_string_text_token1,
    ACTIONS(1058), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(326), 2,
      sym_json_string_text,
      sym_json_string_escaped_char,
    STATE(194), 3,
      sym_json_string_content,
      sym_template,
      aux_sym_json_string_repeat1,
  [8949] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(939), 1,
      anon_sym_BSLASH,
    ACTIONS(941), 1,
      sym_key_string_text,
    ACTIONS(943), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1060), 1,
      anon_sym_COLON,
    STATE(259), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(199), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
  [8974] = 7,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(53), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(849), 1,
      sym_key_string_text,
    ACTIONS(1060), 1,
      anon_sym_LF,
    ACTIONS(1062), 1,
      anon_sym_BSLASH,
    STATE(267), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(200), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
  [8999] = 7,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1054), 1,
      anon_sym_BSLASH,
    ACTIONS(1056), 1,
      aux_sym_json_string_text_token1,
    ACTIONS(1058), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1064), 1,
      anon_sym_DQUOTE,
    STATE(326), 2,
      sym_json_string_text,
      sym_json_string_escaped_char,
    STATE(188), 3,
      sym_json_string_content,
      sym_template,
      aux_sym_json_string_repeat1,
  [9024] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(872), 1,
      aux_sym_digit_token1,
    STATE(201), 2,
      sym_digit,
      aux_sym_integer_repeat1,
    ACTIONS(501), 6,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DOT,
      anon_sym_e,
      anon_sym_E,
  [9043] = 7,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1066), 1,
      anon_sym_SEMI,
    ACTIONS(1068), 1,
      anon_sym_BSLASH,
    ACTIONS(1071), 1,
      sym_filename_text,
    ACTIONS(1074), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(268), 2,
      sym_filename_escaped_char,
      aux_sym_filename_content_repeat1,
    STATE(193), 3,
      sym_filename_content,
      sym_template,
      aux_sym_filename_repeat1,
  [9068] = 7,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1077), 1,
      anon_sym_DQUOTE,
    ACTIONS(1079), 1,
      anon_sym_BSLASH,
    ACTIONS(1082), 1,
      aux_sym_json_string_text_token1,
    ACTIONS(1085), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(326), 2,
      sym_json_string_text,
      sym_json_string_escaped_char,
    STATE(194), 3,
      sym_json_string_content,
      sym_template,
      aux_sym_json_string_repeat1,
  [9093] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1088), 9,
      anon_sym_EQ,
      anon_sym_regex,
      anon_sym_RBRACE_RBRACE,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
  [9108] = 7,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1054), 1,
      anon_sym_BSLASH,
    ACTIONS(1056), 1,
      aux_sym_json_string_text_token1,
    ACTIONS(1058), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1090), 1,
      anon_sym_DQUOTE,
    STATE(326), 2,
      sym_json_string_text,
      sym_json_string_escaped_char,
    STATE(197), 3,
      sym_json_string_content,
      sym_template,
      aux_sym_json_string_repeat1,
  [9133] = 7,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1054), 1,
      anon_sym_BSLASH,
    ACTIONS(1056), 1,
      aux_sym_json_string_text_token1,
    ACTIONS(1058), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1092), 1,
      anon_sym_DQUOTE,
    STATE(326), 2,
      sym_json_string_text,
      sym_json_string_escaped_char,
    STATE(194), 3,
      sym_json_string_content,
      sym_template,
      aux_sym_json_string_repeat1,
  [9158] = 7,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1040), 1,
      anon_sym_BSLASH,
    ACTIONS(1042), 1,
      sym_filename_text,
    ACTIONS(1044), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1050), 1,
      anon_sym_LF,
    STATE(258), 2,
      sym_filename_escaped_char,
      aux_sym_filename_content_repeat1,
    STATE(202), 3,
      sym_filename_content,
      sym_template,
      aux_sym_filename_repeat1,
  [9183] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1094), 1,
      anon_sym_COLON,
    ACTIONS(1096), 1,
      anon_sym_BSLASH,
    ACTIONS(1099), 1,
      sym_key_string_text,
    ACTIONS(1102), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(259), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(199), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
  [9208] = 7,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1094), 1,
      anon_sym_LF,
    ACTIONS(1105), 1,
      anon_sym_BSLASH,
    ACTIONS(1108), 1,
      sym_key_string_text,
    ACTIONS(1111), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(267), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(200), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
  [9233] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1114), 1,
      aux_sym_digit_token1,
    STATE(201), 2,
      sym_digit,
      aux_sym_integer_repeat1,
    ACTIONS(509), 6,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DOT,
      anon_sym_e,
      anon_sym_E,
  [9252] = 7,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1066), 1,
      anon_sym_LF,
    ACTIONS(1117), 1,
      anon_sym_BSLASH,
    ACTIONS(1120), 1,
      sym_filename_text,
    ACTIONS(1123), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(258), 2,
      sym_filename_escaped_char,
      aux_sym_filename_content_repeat1,
    STATE(202), 3,
      sym_filename_content,
      sym_template,
      aux_sym_filename_repeat1,
  [9277] = 4,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1128), 1,
      aux_sym_invalid_quoted_string_escaped_char_token1,
    ACTIONS(1130), 1,
      anon_sym_u,
    ACTIONS(1126), 7,
      anon_sym_LF,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
      anon_sym_,
      anon_sym_2,
      anon_sym_CR,
      anon_sym_TAB,
  [9296] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(715), 1,
      anon_sym_LF,
    ACTIONS(717), 7,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
  [9312] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(735), 1,
      anon_sym_LF,
    ACTIONS(737), 7,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
  [9328] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(743), 1,
      anon_sym_LF,
    ACTIONS(745), 7,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
  [9344] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(747), 1,
      anon_sym_LF,
    ACTIONS(749), 7,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
  [9360] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(727), 1,
      anon_sym_LF,
    ACTIONS(729), 7,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
  [9376] = 5,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1134), 1,
      aux_sym_quoted_string_text_token1,
    ACTIONS(1137), 1,
      anon_sym_BSLASH,
    ACTIONS(1132), 2,
      anon_sym_DQUOTE,
      anon_sym_LBRACE_LBRACE,
    STATE(209), 4,
      sym_quoted_string_text,
      sym_invalid_quoted_string_escaped_char,
      sym_quoted_string_escaped_char,
      aux_sym_quoted_string_content_repeat1,
  [9396] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(719), 1,
      anon_sym_LF,
    ACTIONS(721), 7,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
  [9412] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(675), 1,
      anon_sym_LF,
    ACTIONS(677), 7,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
  [9428] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(751), 1,
      anon_sym_LF,
    ACTIONS(753), 7,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
  [9444] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(759), 1,
      anon_sym_LF,
    ACTIONS(761), 7,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
  [9460] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(771), 1,
      anon_sym_LF,
    ACTIONS(773), 7,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
  [9476] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(775), 1,
      anon_sym_LF,
    ACTIONS(777), 7,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
  [9492] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(723), 1,
      anon_sym_LF,
    ACTIONS(725), 7,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
  [9508] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(767), 1,
      anon_sym_LF,
    ACTIONS(769), 7,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
  [9524] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(763), 1,
      anon_sym_LF,
    ACTIONS(765), 7,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
  [9540] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(755), 1,
      anon_sym_LF,
    ACTIONS(757), 7,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
  [9556] = 6,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1140), 1,
      anon_sym_BSLASH,
    ACTIONS(1143), 1,
      aux_sym_value_string_text_token1,
    STATE(282), 1,
      aux_sym_value_string_text_repeat1,
    ACTIONS(487), 2,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    STATE(220), 3,
      sym_value_string_text,
      sym_value_string_escaped_char,
      aux_sym_value_string_content_repeat1,
  [9578] = 5,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(968), 1,
      aux_sym_quoted_string_text_token1,
    ACTIONS(970), 1,
      anon_sym_BSLASH,
    ACTIONS(1146), 2,
      anon_sym_DQUOTE,
      anon_sym_LBRACE_LBRACE,
    STATE(209), 4,
      sym_quoted_string_text,
      sym_invalid_quoted_string_escaped_char,
      sym_quoted_string_escaped_char,
      aux_sym_quoted_string_content_repeat1,
  [9598] = 6,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1148), 1,
      anon_sym_LF,
    ACTIONS(1151), 1,
      anon_sym_BSLASH,
    ACTIONS(1156), 1,
      aux_sym_multiline_string_text_token1,
    ACTIONS(1154), 2,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE_LBRACE,
    STATE(222), 3,
      sym_multiline_string_text,
      sym_multiline_string_escaped_char,
      aux_sym_multiline_string_content_repeat1,
  [9620] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(691), 1,
      anon_sym_LF,
    ACTIONS(693), 7,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
  [9636] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(687), 1,
      anon_sym_LF,
    ACTIONS(689), 7,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
  [9652] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1161), 1,
      anon_sym_u,
    ACTIONS(1159), 7,
      anon_sym_BSLASH,
      anon_sym_BQUOTE,
      anon_sym_b,
      anon_sym_f,
      anon_sym_n,
      anon_sym_r,
      anon_sym_t,
  [9668] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1165), 1,
      anon_sym_DOT,
    STATE(274), 1,
      sym_fraction,
    STATE(390), 1,
      sym_exponent,
    ACTIONS(1167), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(1163), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [9690] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(872), 1,
      aux_sym_digit_token1,
    STATE(201), 2,
      sym_digit,
      aux_sym_integer_repeat1,
    ACTIONS(529), 5,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_e,
      anon_sym_E,
  [9708] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1171), 1,
      anon_sym_u,
    ACTIONS(1169), 7,
      anon_sym_LF,
      anon_sym_BSLASH,
      anon_sym_,
      anon_sym_2,
      anon_sym_CR,
      anon_sym_TAB,
      anon_sym_POUND,
  [9724] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1175), 1,
      anon_sym_u,
    ACTIONS(1173), 7,
      anon_sym_LF,
      anon_sym_BSLASH,
      anon_sym_,
      anon_sym_2,
      anon_sym_CR,
      anon_sym_TAB,
      anon_sym_POUND,
  [9740] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1179), 1,
      anon_sym_u,
    ACTIONS(1177), 7,
      anon_sym_LF,
      anon_sym_BSLASH,
      anon_sym_,
      anon_sym_2,
      anon_sym_CR,
      anon_sym_TAB,
      anon_sym_POUND,
  [9756] = 6,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(958), 1,
      anon_sym_BSLASH,
    ACTIONS(962), 1,
      aux_sym_multiline_string_text_token1,
    ACTIONS(1181), 1,
      anon_sym_LF,
    ACTIONS(1183), 2,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE_LBRACE,
    STATE(222), 3,
      sym_multiline_string_text,
      sym_multiline_string_escaped_char,
      aux_sym_multiline_string_content_repeat1,
  [9778] = 6,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(815), 1,
      anon_sym_BSLASH,
    ACTIONS(817), 1,
      aux_sym_value_string_text_token1,
    STATE(282), 1,
      aux_sym_value_string_text_repeat1,
    ACTIONS(483), 2,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    STATE(220), 3,
      sym_value_string_text,
      sym_value_string_escaped_char,
      aux_sym_value_string_content_repeat1,
  [9800] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(739), 1,
      anon_sym_LF,
    ACTIONS(741), 7,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
  [9816] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1187), 1,
      anon_sym_u,
    ACTIONS(1185), 7,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
      anon_sym_b,
      anon_sym_f,
      anon_sym_n,
      anon_sym_r,
      anon_sym_t,
  [9832] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(679), 1,
      anon_sym_LF,
    ACTIONS(681), 7,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
  [9848] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(731), 1,
      anon_sym_LF,
    ACTIONS(733), 7,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
  [9864] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(711), 1,
      anon_sym_LF,
    ACTIONS(713), 7,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
  [9880] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(707), 1,
      anon_sym_LF,
    ACTIONS(709), 7,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
  [9896] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(683), 1,
      anon_sym_LF,
    ACTIONS(685), 7,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
  [9912] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(703), 1,
      anon_sym_LF,
    ACTIONS(705), 7,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
  [9928] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(699), 1,
      anon_sym_LF,
    ACTIONS(701), 7,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
  [9944] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(695), 1,
      anon_sym_LF,
    ACTIONS(697), 7,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
  [9960] = 4,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1189), 1,
      anon_sym_LF,
    STATE(574), 1,
      sym_multiline_string_type,
    ACTIONS(1191), 5,
      anon_sym_base64,
      anon_sym_hex,
      anon_sym_json,
      anon_sym_xml,
      anon_sym_graphql,
  [9977] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(827), 1,
      anon_sym_DQUOTE,
    ACTIONS(837), 1,
      aux_sym_digit_token1,
    STATE(378), 1,
      sym_integer,
    STATE(255), 2,
      sym_digit,
      aux_sym_integer_repeat1,
    STATE(459), 2,
      sym_quoted_string,
      sym_float,
  [9998] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(827), 1,
      anon_sym_DQUOTE,
    ACTIONS(837), 1,
      aux_sym_digit_token1,
    STATE(376), 1,
      sym_integer,
    STATE(255), 2,
      sym_digit,
      aux_sym_integer_repeat1,
    STATE(461), 2,
      sym_quoted_string,
      sym_float,
  [10019] = 6,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1193), 1,
      anon_sym_BSLASH,
    ACTIONS(1195), 1,
      anon_sym_SLASH,
    ACTIONS(1197), 1,
      aux_sym_regex_text_token1,
    STATE(456), 1,
      sym_regex_content,
    STATE(263), 3,
      sym_regex_text,
      sym_regex_escaped_char,
      aux_sym_regex_content_repeat1,
  [10040] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(827), 1,
      anon_sym_DQUOTE,
    ACTIONS(837), 1,
      aux_sym_digit_token1,
    STATE(374), 1,
      sym_integer,
    STATE(255), 2,
      sym_digit,
      aux_sym_integer_repeat1,
    STATE(463), 2,
      sym_quoted_string,
      sym_float,
  [10061] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(827), 1,
      anon_sym_DQUOTE,
    ACTIONS(837), 1,
      aux_sym_digit_token1,
    STATE(372), 1,
      sym_integer,
    STATE(255), 2,
      sym_digit,
      aux_sym_integer_repeat1,
    STATE(470), 2,
      sym_quoted_string,
      sym_float,
  [10082] = 5,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(509), 1,
      anon_sym_LF,
    ACTIONS(1199), 1,
      aux_sym_digit_token1,
    STATE(249), 2,
      sym_digit,
      aux_sym_integer_repeat1,
    ACTIONS(511), 3,
      anon_sym_DOT,
      anon_sym_e,
      anon_sym_E,
  [10101] = 3,
    ACTIONS(11), 1,
      sym_comment,
    STATE(254), 3,
      sym_oneline_string_text,
      sym_oneline_string_escaped_char,
      aux_sym_oneline_string_content_repeat1,
    ACTIONS(1202), 4,
      anon_sym_BSLASH,
      aux_sym_value_string_text_token1,
      anon_sym_BQUOTE,
      anon_sym_LBRACE_LBRACE,
  [10116] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(557), 7,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      aux_sym_digit_token1,
      anon_sym_DOT,
      anon_sym_e,
      anon_sym_E,
  [10129] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(860), 1,
      anon_sym_DQUOTE,
    ACTIONS(1204), 1,
      anon_sym_RBRACE,
    ACTIONS(1206), 1,
      anon_sym_COMMA,
    STATE(345), 1,
      aux_sym_json_object_repeat1,
    STATE(346), 1,
      sym_json_key_value,
    STATE(454), 1,
      sym_json_string,
    STATE(577), 1,
      sym_json_key_string,
  [10154] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(860), 1,
      anon_sym_DQUOTE,
    ACTIONS(1206), 1,
      anon_sym_COMMA,
    ACTIONS(1208), 1,
      anon_sym_RBRACE,
    STATE(363), 1,
      aux_sym_json_object_repeat1,
    STATE(406), 1,
      sym_json_key_value,
    STATE(454), 1,
      sym_json_string,
    STATE(577), 1,
      sym_json_key_string,
  [10179] = 5,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1210), 1,
      anon_sym_BSLASH,
    ACTIONS(1213), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(1216), 2,
      anon_sym_BQUOTE,
      anon_sym_LBRACE_LBRACE,
    STATE(254), 3,
      sym_oneline_string_text,
      sym_oneline_string_escaped_char,
      aux_sym_oneline_string_content_repeat1,
  [10198] = 5,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(59), 1,
      aux_sym_digit_token1,
    ACTIONS(501), 1,
      anon_sym_LF,
    STATE(249), 2,
      sym_digit,
      aux_sym_integer_repeat1,
    ACTIONS(503), 3,
      anon_sym_DOT,
      anon_sym_e,
      anon_sym_E,
  [10217] = 6,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1193), 1,
      anon_sym_BSLASH,
    ACTIONS(1197), 1,
      aux_sym_regex_text_token1,
    ACTIONS(1218), 1,
      anon_sym_SLASH,
    STATE(537), 1,
      sym_regex_content,
    STATE(263), 3,
      sym_regex_text,
      sym_regex_escaped_char,
      aux_sym_regex_content_repeat1,
  [10238] = 6,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1163), 1,
      anon_sym_LF,
    ACTIONS(1220), 1,
      anon_sym_DOT,
    STATE(320), 1,
      sym_fraction,
    STATE(543), 1,
      sym_exponent,
    ACTIONS(1222), 2,
      anon_sym_e,
      anon_sym_E,
  [10258] = 3,
    ACTIONS(11), 1,
      sym_comment,
    STATE(264), 2,
      sym_filename_escaped_char,
      aux_sym_filename_content_repeat1,
    ACTIONS(1224), 4,
      anon_sym_LF,
      anon_sym_BSLASH,
      sym_filename_text,
      anon_sym_LBRACE_LBRACE,
  [10272] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(269), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    ACTIONS(1226), 4,
      anon_sym_COLON,
      anon_sym_BSLASH,
      sym_key_string_text,
      anon_sym_LBRACE_LBRACE,
  [10286] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(872), 1,
      aux_sym_digit_token1,
    STATE(201), 2,
      sym_digit,
      aux_sym_integer_repeat1,
    ACTIONS(1228), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [10302] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(872), 1,
      aux_sym_digit_token1,
    STATE(201), 2,
      sym_digit,
      aux_sym_integer_repeat1,
    ACTIONS(1230), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [10318] = 5,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1234), 1,
      anon_sym_BSLASH,
    ACTIONS(1237), 1,
      sym_filename_text,
    ACTIONS(1232), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE_LBRACE,
    STATE(262), 2,
      sym_filename_escaped_char,
      aux_sym_filename_content_repeat1,
  [10336] = 5,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1193), 1,
      anon_sym_BSLASH,
    ACTIONS(1197), 1,
      aux_sym_regex_text_token1,
    ACTIONS(1240), 1,
      anon_sym_SLASH,
    STATE(270), 3,
      sym_regex_text,
      sym_regex_escaped_char,
      aux_sym_regex_content_repeat1,
  [10354] = 5,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1242), 1,
      anon_sym_BSLASH,
    ACTIONS(1245), 1,
      sym_filename_text,
    ACTIONS(1232), 2,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    STATE(264), 2,
      sym_filename_escaped_char,
      aux_sym_filename_content_repeat1,
  [10372] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1250), 1,
      anon_sym_u,
    ACTIONS(1252), 1,
      anon_sym_POUND,
    ACTIONS(1248), 4,
      anon_sym_BSLASH,
      anon_sym_BQUOTE,
      anon_sym_b,
      anon_sym_f,
  [10388] = 5,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(59), 1,
      aux_sym_digit_token1,
    ACTIONS(529), 1,
      anon_sym_LF,
    ACTIONS(531), 2,
      anon_sym_e,
      anon_sym_E,
    STATE(249), 2,
      sym_digit,
      aux_sym_integer_repeat1,
  [10406] = 4,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1226), 1,
      anon_sym_LF,
    STATE(273), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    ACTIONS(1254), 3,
      anon_sym_BSLASH,
      sym_key_string_text,
      anon_sym_LBRACE_LBRACE,
  [10422] = 3,
    ACTIONS(11), 1,
      sym_comment,
    STATE(262), 2,
      sym_filename_escaped_char,
      aux_sym_filename_content_repeat1,
    ACTIONS(1224), 4,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      sym_filename_text,
      anon_sym_LBRACE_LBRACE,
  [10436] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1258), 1,
      anon_sym_BSLASH,
    ACTIONS(1261), 1,
      sym_key_string_text,
    ACTIONS(1256), 2,
      anon_sym_COLON,
      anon_sym_LBRACE_LBRACE,
    STATE(269), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
  [10454] = 5,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1264), 1,
      anon_sym_BSLASH,
    ACTIONS(1267), 1,
      anon_sym_SLASH,
    ACTIONS(1269), 1,
      aux_sym_regex_text_token1,
    STATE(270), 3,
      sym_regex_text,
      sym_regex_escaped_char,
      aux_sym_regex_content_repeat1,
  [10472] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(823), 1,
      anon_sym_base64_COMMA,
    ACTIONS(825), 1,
      anon_sym_hex_COMMA,
    ACTIONS(827), 1,
      anon_sym_DQUOTE,
    STATE(457), 3,
      sym_oneline_base64,
      sym_oneline_hex,
      sym_quoted_string,
  [10490] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(823), 1,
      anon_sym_base64_COMMA,
    ACTIONS(825), 1,
      anon_sym_hex_COMMA,
    ACTIONS(827), 1,
      anon_sym_DQUOTE,
    STATE(458), 3,
      sym_oneline_base64,
      sym_oneline_hex,
      sym_quoted_string,
  [10508] = 6,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1256), 1,
      anon_sym_LF,
    ACTIONS(1272), 1,
      anon_sym_BSLASH,
    ACTIONS(1275), 1,
      sym_key_string_text,
    ACTIONS(1278), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(273), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
  [10528] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(381), 1,
      sym_exponent,
    ACTIONS(1167), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(1280), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [10544] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(872), 1,
      aux_sym_digit_token1,
    ACTIONS(1282), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(261), 2,
      sym_digit,
      aux_sym_integer_repeat1,
  [10559] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1284), 5,
      anon_sym_LF,
      anon_sym_BSLASH,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      aux_sym_multiline_string_text_token1,
      anon_sym_LBRACE_LBRACE,
  [10570] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(546), 1,
      anon_sym_LF,
    ACTIONS(548), 4,
      anon_sym_COLON,
      anon_sym_BSLASH,
      sym_key_string_text,
      anon_sym_LBRACE_LBRACE,
  [10583] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1286), 1,
      anon_sym_LF,
    ACTIONS(1288), 4,
      anon_sym_COLON,
      anon_sym_BSLASH,
      sym_key_string_text,
      anon_sym_LBRACE_LBRACE,
  [10596] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(548), 5,
      anon_sym_LF,
      anon_sym_BSLASH,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      aux_sym_multiline_string_text_token1,
      anon_sym_LBRACE_LBRACE,
  [10607] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1290), 5,
      anon_sym_LF,
      anon_sym_BSLASH,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      aux_sym_multiline_string_text_token1,
      anon_sym_LBRACE_LBRACE,
  [10618] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1294), 1,
      aux_sym_hexdigit_token1,
    ACTIONS(1292), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
    STATE(281), 2,
      sym_hexdigit,
      aux_sym_oneline_hex_repeat1,
  [10633] = 4,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1297), 1,
      aux_sym_value_string_text_token1,
    STATE(284), 1,
      aux_sym_value_string_text_repeat1,
    ACTIONS(522), 3,
      anon_sym_LF,
      anon_sym_BSLASH,
      anon_sym_LBRACE_LBRACE,
  [10648] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(837), 1,
      aux_sym_digit_token1,
    ACTIONS(1299), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(313), 2,
      sym_digit,
      aux_sym_integer_repeat1,
  [10663] = 4,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1301), 1,
      aux_sym_value_string_text_token1,
    STATE(284), 1,
      aux_sym_value_string_text_repeat1,
    ACTIONS(541), 3,
      anon_sym_LF,
      anon_sym_BSLASH,
      anon_sym_LBRACE_LBRACE,
  [10678] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(557), 1,
      anon_sym_LF,
    ACTIONS(559), 4,
      aux_sym_digit_token1,
      anon_sym_DOT,
      anon_sym_e,
      anon_sym_E,
  [10691] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1306), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(1304), 4,
      anon_sym_LF,
      anon_sym_BSLASH,
      aux_sym_multiline_string_text_token1,
      anon_sym_LBRACE_LBRACE,
  [10704] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1308), 5,
      anon_sym_LF,
      anon_sym_BSLASH,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      aux_sym_multiline_string_text_token1,
      anon_sym_LBRACE_LBRACE,
  [10715] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(960), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(1304), 4,
      anon_sym_LF,
      anon_sym_BSLASH,
      aux_sym_multiline_string_text_token1,
      anon_sym_LBRACE_LBRACE,
  [10728] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(552), 5,
      anon_sym_LF,
      anon_sym_BSLASH,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      aux_sym_multiline_string_text_token1,
      anon_sym_LBRACE_LBRACE,
  [10739] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(998), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(1304), 4,
      anon_sym_LF,
      anon_sym_BSLASH,
      aux_sym_multiline_string_text_token1,
      anon_sym_LBRACE_LBRACE,
  [10752] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1310), 1,
      anon_sym_RBRACE,
    ACTIONS(1312), 1,
      aux_sym_hexdigit_token1,
    STATE(281), 2,
      sym_hexdigit,
      aux_sym_oneline_hex_repeat1,
  [10766] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(837), 1,
      aux_sym_digit_token1,
    STATE(570), 1,
      sym_integer,
    STATE(255), 2,
      sym_digit,
      aux_sym_integer_repeat1,
  [10780] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(860), 1,
      anon_sym_DQUOTE,
    STATE(447), 1,
      sym_json_key_value,
    STATE(454), 1,
      sym_json_string,
    STATE(577), 1,
      sym_json_key_string,
  [10796] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1312), 1,
      aux_sym_hexdigit_token1,
    ACTIONS(1314), 1,
      anon_sym_RBRACE,
    STATE(281), 2,
      sym_hexdigit,
      aux_sym_oneline_hex_repeat1,
  [10810] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1312), 1,
      aux_sym_hexdigit_token1,
    ACTIONS(1316), 1,
      anon_sym_RBRACE,
    STATE(281), 2,
      sym_hexdigit,
      aux_sym_oneline_hex_repeat1,
  [10824] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1312), 1,
      aux_sym_hexdigit_token1,
    ACTIONS(1318), 1,
      anon_sym_RBRACE,
    STATE(281), 2,
      sym_hexdigit,
      aux_sym_oneline_hex_repeat1,
  [10838] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1320), 4,
      anon_sym_DQUOTE,
      aux_sym_quoted_string_text_token1,
      anon_sym_BSLASH,
      anon_sym_LBRACE_LBRACE,
  [10848] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(837), 1,
      aux_sym_digit_token1,
    STATE(568), 1,
      sym_integer,
    STATE(255), 2,
      sym_digit,
      aux_sym_integer_repeat1,
  [10862] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1322), 4,
      anon_sym_BSLASH,
      aux_sym_value_string_text_token1,
      anon_sym_BQUOTE,
      anon_sym_LBRACE_LBRACE,
  [10872] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(837), 1,
      aux_sym_digit_token1,
    STATE(567), 1,
      sym_integer,
    STATE(255), 2,
      sym_digit,
      aux_sym_integer_repeat1,
  [10886] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1324), 4,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
      aux_sym_json_string_text_token1,
      anon_sym_LBRACE_LBRACE,
  [10896] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1326), 4,
      anon_sym_COLON,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [10906] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1328), 1,
      anon_sym_LF,
    ACTIONS(1330), 3,
      anon_sym_BSLASH,
      sym_key_string_text,
      anon_sym_LBRACE_LBRACE,
  [10918] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(576), 4,
      anon_sym_LF,
      anon_sym_BSLASH,
      aux_sym_value_string_text_token1,
      anon_sym_LBRACE_LBRACE,
  [10928] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1332), 4,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
      aux_sym_json_string_text_token1,
      anon_sym_LBRACE_LBRACE,
  [10938] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1334), 4,
      anon_sym_LF,
      anon_sym_BSLASH,
      aux_sym_value_string_text_token1,
      anon_sym_LBRACE_LBRACE,
  [10948] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1336), 4,
      anon_sym_LF,
      anon_sym_BSLASH,
      sym_filename_text,
      anon_sym_LBRACE_LBRACE,
  [10958] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1338), 4,
      anon_sym_COLON,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [10968] = 4,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(59), 1,
      aux_sym_digit_token1,
    ACTIONS(1228), 1,
      anon_sym_LF,
    STATE(249), 2,
      sym_digit,
      aux_sym_integer_repeat1,
  [10982] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(552), 4,
      anon_sym_BSLASH,
      aux_sym_value_string_text_token1,
      anon_sym_BQUOTE,
      anon_sym_LBRACE_LBRACE,
  [10992] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1340), 4,
      anon_sym_DQUOTE,
      aux_sym_quoted_string_text_token1,
      anon_sym_BSLASH,
      anon_sym_LBRACE_LBRACE,
  [11002] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(552), 4,
      anon_sym_LF,
      anon_sym_BSLASH,
      aux_sym_value_string_text_token1,
      anon_sym_LBRACE_LBRACE,
  [11012] = 4,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(59), 1,
      aux_sym_digit_token1,
    ACTIONS(1230), 1,
      anon_sym_LF,
    STATE(249), 2,
      sym_digit,
      aux_sym_integer_repeat1,
  [11026] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(548), 4,
      anon_sym_LF,
      anon_sym_BSLASH,
      aux_sym_value_string_text_token1,
      anon_sym_LBRACE_LBRACE,
  [11036] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1342), 4,
      anon_sym_DQUOTE,
      aux_sym_quoted_string_text_token1,
      anon_sym_BSLASH,
      anon_sym_LBRACE_LBRACE,
  [11046] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1344), 1,
      anon_sym_DQUOTE,
    ACTIONS(1346), 1,
      anon_sym_SLASH,
    STATE(116), 2,
      sym_quoted_string,
      sym_regex,
  [11060] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1312), 1,
      aux_sym_hexdigit_token1,
    ACTIONS(1348), 1,
      anon_sym_SEMI,
    STATE(334), 2,
      sym_hexdigit,
      aux_sym_oneline_hex_repeat1,
  [11074] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(548), 4,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      sym_filename_text,
      anon_sym_LBRACE_LBRACE,
  [11084] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(572), 4,
      anon_sym_LF,
      anon_sym_BSLASH,
      aux_sym_value_string_text_token1,
      anon_sym_LBRACE_LBRACE,
  [11094] = 4,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1280), 1,
      anon_sym_LF,
    STATE(469), 1,
      sym_exponent,
    ACTIONS(1222), 2,
      anon_sym_e,
      anon_sym_E,
  [11108] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1312), 1,
      aux_sym_hexdigit_token1,
    ACTIONS(1350), 1,
      anon_sym_RBRACE,
    STATE(281), 2,
      sym_hexdigit,
      aux_sym_oneline_hex_repeat1,
  [11122] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(827), 1,
      anon_sym_DQUOTE,
    ACTIONS(1352), 1,
      anon_sym_SLASH,
    STATE(236), 2,
      sym_quoted_string,
      sym_regex,
  [11136] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1336), 4,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      sym_filename_text,
      anon_sym_LBRACE_LBRACE,
  [11146] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1328), 4,
      anon_sym_COLON,
      anon_sym_BSLASH,
      sym_key_string_text,
      anon_sym_LBRACE_LBRACE,
  [11156] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(548), 4,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
      aux_sym_json_string_text_token1,
      anon_sym_LBRACE_LBRACE,
  [11166] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1354), 4,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
      aux_sym_json_string_text_token1,
      anon_sym_LBRACE_LBRACE,
  [11176] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1356), 4,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
      aux_sym_json_string_text_token1,
      anon_sym_LBRACE_LBRACE,
  [11186] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(552), 4,
      anon_sym_DQUOTE,
      aux_sym_quoted_string_text_token1,
      anon_sym_BSLASH,
      anon_sym_LBRACE_LBRACE,
  [11196] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1344), 1,
      anon_sym_DQUOTE,
    ACTIONS(1346), 1,
      anon_sym_SLASH,
    STATE(120), 2,
      sym_quoted_string,
      sym_regex,
  [11210] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1312), 1,
      aux_sym_hexdigit_token1,
    ACTIONS(1358), 1,
      anon_sym_RBRACE,
    STATE(281), 2,
      sym_hexdigit,
      aux_sym_oneline_hex_repeat1,
  [11224] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1360), 4,
      anon_sym_BSLASH,
      aux_sym_value_string_text_token1,
      anon_sym_BQUOTE,
      anon_sym_LBRACE_LBRACE,
  [11234] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1362), 4,
      anon_sym_BSLASH,
      aux_sym_value_string_text_token1,
      anon_sym_BQUOTE,
      anon_sym_LBRACE_LBRACE,
  [11244] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(548), 4,
      anon_sym_BSLASH,
      aux_sym_value_string_text_token1,
      anon_sym_BQUOTE,
      anon_sym_LBRACE_LBRACE,
  [11254] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1312), 1,
      aux_sym_hexdigit_token1,
    ACTIONS(1364), 1,
      anon_sym_SEMI,
    STATE(281), 2,
      sym_hexdigit,
      aux_sym_oneline_hex_repeat1,
  [11268] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(827), 1,
      anon_sym_DQUOTE,
    ACTIONS(1352), 1,
      anon_sym_SLASH,
    STATE(542), 2,
      sym_quoted_string,
      sym_regex,
  [11282] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(827), 1,
      anon_sym_DQUOTE,
    ACTIONS(1352), 1,
      anon_sym_SLASH,
    STATE(204), 2,
      sym_quoted_string,
      sym_regex,
  [11296] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1366), 4,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
      aux_sym_json_string_text_token1,
      anon_sym_LBRACE_LBRACE,
  [11306] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(548), 4,
      anon_sym_LF,
      anon_sym_BSLASH,
      sym_filename_text,
      anon_sym_LBRACE_LBRACE,
  [11316] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1368), 4,
      anon_sym_DQUOTE,
      aux_sym_quoted_string_text_token1,
      anon_sym_BSLASH,
      anon_sym_LBRACE_LBRACE,
  [11326] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(548), 4,
      anon_sym_DQUOTE,
      aux_sym_quoted_string_text_token1,
      anon_sym_BSLASH,
      anon_sym_LBRACE_LBRACE,
  [11336] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(546), 4,
      anon_sym_COLON,
      anon_sym_BSLASH,
      sym_key_string_text,
      anon_sym_LBRACE_LBRACE,
  [11346] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1370), 3,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      aux_sym_hexdigit_token1,
  [11355] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1372), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [11364] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1374), 1,
      anon_sym_COMMA,
    ACTIONS(1376), 1,
      anon_sym_RBRACK,
    STATE(356), 1,
      aux_sym_json_array_repeat1,
  [11377] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1206), 1,
      anon_sym_COMMA,
    ACTIONS(1378), 1,
      anon_sym_RBRACE,
    STATE(364), 1,
      aux_sym_json_object_repeat1,
  [11390] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1206), 1,
      anon_sym_COMMA,
    ACTIONS(1378), 1,
      anon_sym_RBRACE,
    STATE(377), 1,
      aux_sym_json_object_repeat1,
  [11403] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1382), 1,
      anon_sym_POUND,
    ACTIONS(1380), 2,
      anon_sym_SEMI,
      aux_sym_filename_escaped_char_token1,
  [11414] = 4,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LF,
    ACTIONS(839), 1,
      ts_builtin_sym_end,
    STATE(73), 1,
      aux_sym_hurl_file_repeat2,
  [11427] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(496), 1,
      sym_status,
    ACTIONS(1384), 2,
      aux_sym_status_token1,
      anon_sym_STAR,
  [11438] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(546), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [11447] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1386), 1,
      aux_sym_variable_name_token1,
    STATE(161), 1,
      sym_variable_name,
    STATE(491), 1,
      sym_expr,
  [11460] = 4,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1388), 1,
      anon_sym_LF,
    ACTIONS(1390), 1,
      aux_sym_file_contenttype_token1,
    STATE(452), 1,
      sym_file_contenttype,
  [11473] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1392), 1,
      aux_sym_digit_token1,
    STATE(63), 2,
      sym_digit,
      aux_sym_integer_repeat1,
  [11484] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1394), 3,
      anon_sym_BSLASH,
      anon_sym_SLASH,
      aux_sym_regex_text_token1,
  [11493] = 4,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LF,
    ACTIONS(1396), 1,
      ts_builtin_sym_end,
    STATE(73), 1,
      aux_sym_hurl_file_repeat2,
  [11506] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1374), 1,
      anon_sym_COMMA,
    ACTIONS(1398), 1,
      anon_sym_RBRACK,
    STATE(397), 1,
      aux_sym_json_array_repeat1,
  [11519] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1400), 1,
      aux_sym_digit_token1,
    STATE(91), 2,
      sym_digit,
      aux_sym_integer_repeat1,
  [11530] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(837), 1,
      aux_sym_digit_token1,
    STATE(266), 2,
      sym_digit,
      aux_sym_integer_repeat1,
  [11541] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1404), 1,
      anon_sym_POUND,
    ACTIONS(1402), 2,
      anon_sym_SEMI,
      aux_sym_filename_escaped_char_token1,
  [11552] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1374), 1,
      anon_sym_COMMA,
    ACTIONS(1406), 1,
      anon_sym_RBRACK,
    STATE(366), 1,
      aux_sym_json_array_repeat1,
  [11565] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1206), 1,
      anon_sym_COMMA,
    ACTIONS(1408), 1,
      anon_sym_RBRACE,
    STATE(364), 1,
      aux_sym_json_object_repeat1,
  [11578] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1386), 1,
      aux_sym_variable_name_token1,
    STATE(161), 1,
      sym_variable_name,
    STATE(519), 1,
      sym_expr,
  [11591] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1206), 1,
      anon_sym_COMMA,
    ACTIONS(1410), 1,
      anon_sym_RBRACE,
    STATE(364), 1,
      aux_sym_json_object_repeat1,
  [11604] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1412), 1,
      anon_sym_RBRACE,
    ACTIONS(1414), 1,
      anon_sym_COMMA,
    STATE(364), 1,
      aux_sym_json_object_repeat1,
  [11617] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1312), 1,
      aux_sym_hexdigit_token1,
    STATE(330), 2,
      sym_hexdigit,
      aux_sym_oneline_hex_repeat1,
  [11628] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1374), 1,
      anon_sym_COMMA,
    ACTIONS(1417), 1,
      anon_sym_RBRACK,
    STATE(397), 1,
      aux_sym_json_array_repeat1,
  [11641] = 4,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(533), 1,
      anon_sym_LF,
    ACTIONS(1220), 1,
      anon_sym_DOT,
    STATE(531), 1,
      sym_fraction,
  [11654] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(837), 1,
      aux_sym_digit_token1,
    STATE(309), 2,
      sym_digit,
      aux_sym_integer_repeat1,
  [11665] = 4,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1220), 1,
      anon_sym_DOT,
    ACTIONS(1419), 1,
      anon_sym_LF,
    STATE(531), 1,
      sym_fraction,
  [11678] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1386), 1,
      aux_sym_variable_name_token1,
    STATE(161), 1,
      sym_variable_name,
    STATE(546), 1,
      sym_expr,
  [11691] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1312), 1,
      aux_sym_hexdigit_token1,
    STATE(321), 2,
      sym_hexdigit,
      aux_sym_oneline_hex_repeat1,
  [11702] = 4,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1220), 1,
      anon_sym_DOT,
    ACTIONS(1421), 1,
      anon_sym_LF,
    STATE(531), 1,
      sym_fraction,
  [11715] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1386), 1,
      aux_sym_variable_name_token1,
    STATE(161), 1,
      sym_variable_name,
    STATE(549), 1,
      sym_expr,
  [11728] = 4,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1220), 1,
      anon_sym_DOT,
    ACTIONS(1423), 1,
      anon_sym_LF,
    STATE(531), 1,
      sym_fraction,
  [11741] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1425), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [11750] = 4,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1220), 1,
      anon_sym_DOT,
    ACTIONS(1427), 1,
      anon_sym_LF,
    STATE(531), 1,
      sym_fraction,
  [11763] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1206), 1,
      anon_sym_COMMA,
    ACTIONS(1429), 1,
      anon_sym_RBRACE,
    STATE(364), 1,
      aux_sym_json_object_repeat1,
  [11776] = 4,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1220), 1,
      anon_sym_DOT,
    ACTIONS(1431), 1,
      anon_sym_LF,
    STATE(531), 1,
      sym_fraction,
  [11789] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1433), 3,
      anon_sym_BSLASH,
      anon_sym_SLASH,
      aux_sym_regex_text_token1,
  [11798] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1312), 1,
      aux_sym_hexdigit_token1,
    STATE(296), 2,
      sym_hexdigit,
      aux_sym_oneline_hex_repeat1,
  [11809] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1435), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [11818] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(872), 1,
      aux_sym_digit_token1,
    STATE(260), 2,
      sym_digit,
      aux_sym_integer_repeat1,
  [11829] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1437), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [11838] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1386), 1,
      aux_sym_variable_name_token1,
    STATE(161), 1,
      sym_variable_name,
    STATE(551), 1,
      sym_expr,
  [11851] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1439), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [11860] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1312), 1,
      aux_sym_hexdigit_token1,
    STATE(295), 2,
      sym_hexdigit,
      aux_sym_oneline_hex_repeat1,
  [11871] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1386), 1,
      aux_sym_variable_name_token1,
    STATE(161), 1,
      sym_variable_name,
    STATE(553), 1,
      sym_expr,
  [11884] = 4,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1390), 1,
      aux_sym_file_contenttype_token1,
    ACTIONS(1441), 1,
      anon_sym_LF,
    STATE(538), 1,
      sym_file_contenttype,
  [11897] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1312), 1,
      aux_sym_hexdigit_token1,
    STATE(294), 2,
      sym_hexdigit,
      aux_sym_oneline_hex_repeat1,
  [11908] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1280), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [11917] = 4,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1220), 1,
      anon_sym_DOT,
    ACTIONS(1443), 1,
      anon_sym_LF,
    STATE(531), 1,
      sym_fraction,
  [11930] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1386), 1,
      aux_sym_variable_name_token1,
    STATE(161), 1,
      sym_variable_name,
    STATE(555), 1,
      sym_expr,
  [11943] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1386), 1,
      aux_sym_variable_name_token1,
    STATE(161), 1,
      sym_variable_name,
    STATE(556), 1,
      sym_expr,
  [11956] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1312), 1,
      aux_sym_hexdigit_token1,
    STATE(291), 2,
      sym_hexdigit,
      aux_sym_oneline_hex_repeat1,
  [11967] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(872), 1,
      aux_sym_digit_token1,
    STATE(227), 2,
      sym_digit,
      aux_sym_integer_repeat1,
  [11978] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1445), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [11987] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1447), 1,
      anon_sym_COMMA,
    ACTIONS(1450), 1,
      anon_sym_RBRACK,
    STATE(397), 1,
      aux_sym_json_array_repeat1,
  [12000] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1386), 1,
      aux_sym_variable_name_token1,
    STATE(161), 1,
      sym_variable_name,
    STATE(557), 1,
      sym_expr,
  [12013] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1386), 1,
      aux_sym_variable_name_token1,
    STATE(161), 1,
      sym_variable_name,
    STATE(558), 1,
      sym_expr,
  [12026] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(569), 1,
      sym_boolean,
    ACTIONS(833), 2,
      anon_sym_true,
      anon_sym_false,
  [12037] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(571), 1,
      sym_boolean,
    ACTIONS(833), 2,
      anon_sym_true,
      anon_sym_false,
  [12048] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(585), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [12057] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(595), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [12066] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1386), 1,
      aux_sym_variable_name_token1,
    STATE(565), 1,
      sym_variable_name,
    STATE(566), 1,
      sym_variable_definition,
  [12079] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1286), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [12088] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1206), 1,
      anon_sym_COMMA,
    ACTIONS(1410), 1,
      anon_sym_RBRACE,
    STATE(361), 1,
      aux_sym_json_object_repeat1,
  [12101] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1386), 1,
      aux_sym_variable_name_token1,
    STATE(161), 1,
      sym_variable_name,
    STATE(559), 1,
      sym_expr,
  [12114] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1386), 1,
      aux_sym_variable_name_token1,
    STATE(161), 1,
      sym_variable_name,
    STATE(560), 1,
      sym_expr,
  [12127] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(572), 1,
      sym_boolean,
    ACTIONS(833), 2,
      anon_sym_true,
      anon_sym_false,
  [12138] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(563), 1,
      sym_boolean,
    ACTIONS(833), 2,
      anon_sym_true,
      anon_sym_false,
  [12149] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(564), 1,
      sym_boolean,
    ACTIONS(833), 2,
      anon_sym_true,
      anon_sym_false,
  [12160] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1452), 1,
      aux_sym_hexdigit_token1,
    STATE(305), 1,
      sym_hexdigit,
  [12170] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1454), 1,
      anon_sym_LF,
    STATE(437), 1,
      aux_sym_form_params_section_repeat1,
  [12180] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1456), 1,
      anon_sym_LBRACE,
    STATE(287), 1,
      sym_unicode_char,
  [12190] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1312), 1,
      aux_sym_hexdigit_token1,
    STATE(412), 1,
      sym_hexdigit,
  [12200] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1312), 1,
      aux_sym_hexdigit_token1,
    STATE(415), 1,
      sym_hexdigit,
  [12210] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1458), 1,
      anon_sym_LF,
    STATE(438), 1,
      aux_sym_form_params_section_repeat1,
  [12220] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1460), 1,
      anon_sym_LBRACE,
    STATE(339), 1,
      sym_unicode_char,
  [12230] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1462), 1,
      anon_sym_LBRACE,
    STATE(75), 1,
      sym_unicode_char,
  [12240] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(827), 1,
      anon_sym_DQUOTE,
    STATE(205), 1,
      sym_quoted_string,
  [12250] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1464), 1,
      anon_sym_LF,
    STATE(437), 1,
      aux_sym_form_params_section_repeat1,
  [12260] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1458), 1,
      anon_sym_LF,
    STATE(437), 1,
      aux_sym_form_params_section_repeat1,
  [12270] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1466), 1,
      anon_sym_LF,
    STATE(423), 1,
      aux_sym_multipart_form_data_section_repeat1,
  [12280] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(827), 1,
      anon_sym_DQUOTE,
    STATE(233), 1,
      sym_quoted_string,
  [12290] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1469), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [12298] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1450), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [12306] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(827), 1,
      anon_sym_DQUOTE,
    STATE(206), 1,
      sym_quoted_string,
  [12316] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(827), 1,
      anon_sym_DQUOTE,
    STATE(207), 1,
      sym_quoted_string,
  [12326] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(827), 1,
      anon_sym_DQUOTE,
    STATE(208), 1,
      sym_quoted_string,
  [12336] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1344), 1,
      anon_sym_DQUOTE,
    STATE(121), 1,
      sym_quoted_string,
  [12346] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1344), 1,
      anon_sym_DQUOTE,
    STATE(122), 1,
      sym_quoted_string,
  [12356] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1471), 1,
      anon_sym_LF,
    STATE(423), 1,
      aux_sym_multipart_form_data_section_repeat1,
  [12366] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1344), 1,
      anon_sym_DQUOTE,
    STATE(123), 1,
      sym_quoted_string,
  [12376] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(827), 1,
      anon_sym_DQUOTE,
    STATE(455), 1,
      sym_quoted_string,
  [12386] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1473), 1,
      anon_sym_LF,
    STATE(432), 1,
      aux_sym_multipart_form_data_section_repeat1,
  [12396] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1344), 1,
      anon_sym_DQUOTE,
    STATE(124), 1,
      sym_quoted_string,
  [12406] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1475), 1,
      anon_sym_LF,
    STATE(437), 1,
      aux_sym_form_params_section_repeat1,
  [12416] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1478), 1,
      anon_sym_LF,
    STATE(437), 1,
      aux_sym_form_params_section_repeat1,
  [12426] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1480), 1,
      anon_sym_DQUOTE,
    ACTIONS(1482), 1,
      anon_sym_POUND,
  [12436] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1484), 1,
      anon_sym_LBRACE,
    STATE(83), 1,
      sym_unicode_char,
  [12446] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1312), 1,
      aux_sym_hexdigit_token1,
    STATE(416), 1,
      sym_hexdigit,
  [12456] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1486), 2,
      aux_sym_status_token1,
      anon_sym_STAR,
  [12464] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1488), 1,
      anon_sym_LF,
    STATE(2), 1,
      aux_sym_hurl_file_repeat2,
  [12474] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1490), 1,
      anon_sym_LBRACE,
    STATE(299), 1,
      sym_unicode_char,
  [12484] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1344), 1,
      anon_sym_DQUOTE,
    STATE(119), 1,
      sym_quoted_string,
  [12494] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1492), 1,
      anon_sym_LBRACE,
    STATE(304), 1,
      sym_unicode_char,
  [12504] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1412), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [12512] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1473), 1,
      anon_sym_LF,
    STATE(423), 1,
      aux_sym_multipart_form_data_section_repeat1,
  [12522] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1494), 1,
      anon_sym_DQUOTE,
    ACTIONS(1496), 1,
      anon_sym_POUND,
  [12532] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1454), 1,
      anon_sym_LF,
    STATE(421), 1,
      aux_sym_form_params_section_repeat1,
  [12542] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1498), 1,
      anon_sym_LF,
  [12549] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1441), 1,
      anon_sym_LF,
  [12556] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1500), 1,
      anon_sym_LF,
  [12563] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1502), 1,
      anon_sym_COLON,
  [12570] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1504), 1,
      anon_sym_LF,
  [12577] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1506), 1,
      anon_sym_SLASH,
  [12584] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1508), 1,
      anon_sym_LF,
  [12591] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1510), 1,
      anon_sym_LF,
  [12598] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1431), 1,
      anon_sym_LF,
  [12605] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1512), 1,
      aux_sym_regex_escaped_char_token1,
  [12612] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1427), 1,
      anon_sym_LF,
  [12619] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1514), 1,
      anon_sym_COLON,
  [12626] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1423), 1,
      anon_sym_LF,
  [12633] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1516), 1,
      anon_sym_COLON,
  [12640] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1518), 1,
      anon_sym_COLON,
  [12647] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1520), 1,
      anon_sym_COLON,
  [12654] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1522), 1,
      anon_sym_COLON,
  [12661] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1524), 1,
      anon_sym_COLON,
  [12668] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1435), 1,
      anon_sym_LF,
  [12675] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1421), 1,
      anon_sym_LF,
  [12682] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1526), 1,
      anon_sym_LF,
  [12689] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1419), 1,
      anon_sym_LF,
  [12696] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(533), 1,
      anon_sym_LF,
  [12703] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1528), 1,
      anon_sym_LF,
  [12710] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1437), 1,
      anon_sym_LF,
  [12717] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1530), 1,
      anon_sym_COLON,
  [12724] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1532), 1,
      anon_sym_LF,
  [12731] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1534), 1,
      anon_sym_LF,
  [12738] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1439), 1,
      anon_sym_LF,
  [12745] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1536), 1,
      anon_sym_COLON,
  [12752] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1538), 1,
      aux_sym_oneline_base64_token1,
  [12759] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1540), 1,
      anon_sym_To_COMMABe_COMMADefined,
  [12766] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1542), 1,
      anon_sym_LF,
  [12773] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1544), 1,
      anon_sym_LF,
  [12780] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1546), 1,
      anon_sym_LF,
  [12787] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1548), 1,
      anon_sym_LF,
  [12794] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1550), 1,
      anon_sym_LF,
  [12801] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1552), 1,
      anon_sym_LF,
  [12808] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1554), 1,
      anon_sym_SEMI,
  [12815] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1556), 1,
      anon_sym_LF,
  [12822] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1558), 1,
      anon_sym_RBRACE_RBRACE,
  [12829] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1560), 1,
      aux_sym_variable_name_token2,
  [12836] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1562), 1,
      anon_sym_LF,
  [12843] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1372), 1,
      anon_sym_LF,
  [12850] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(595), 1,
      anon_sym_LF,
  [12857] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1564), 1,
      anon_sym_LF,
  [12864] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1566), 1,
      anon_sym_LF,
  [12871] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1568), 1,
      anon_sym_COLON,
  [12878] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1570), 1,
      anon_sym_LF,
  [12885] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1572), 1,
      anon_sym_GT,
  [12892] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1574), 1,
      anon_sym_SEMI,
  [12899] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1576), 1,
      anon_sym_LF,
  [12906] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1578), 1,
      anon_sym_LF,
  [12913] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1580), 1,
      anon_sym_LF,
  [12920] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1582), 1,
      anon_sym_LF,
  [12927] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1584), 1,
      anon_sym_SEMI,
  [12934] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1326), 1,
      anon_sym_LF,
  [12941] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1586), 1,
      anon_sym_LF,
  [12948] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1588), 1,
      anon_sym_LF,
  [12955] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1590), 1,
      anon_sym_LF,
  [12962] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1592), 1,
      anon_sym_LF,
  [12969] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1338), 1,
      anon_sym_LF,
  [12976] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1594), 1,
      anon_sym_LF,
  [12983] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(585), 1,
      anon_sym_LF,
  [12990] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1596), 1,
      anon_sym_LF,
  [12997] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1598), 1,
      anon_sym_LF,
  [13004] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1600), 1,
      anon_sym_LF,
  [13011] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1602), 1,
      anon_sym_COLON,
  [13018] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1604), 1,
      anon_sym_RBRACE_RBRACE,
  [13025] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1606), 1,
      anon_sym_LF,
  [13032] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1608), 1,
      anon_sym_LF,
  [13039] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1610), 1,
      anon_sym_LF,
  [13046] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1612), 1,
      anon_sym_LF,
  [13053] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1614), 1,
      anon_sym_COLON,
  [13060] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1443), 1,
      anon_sym_LF,
  [13067] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1616), 1,
      anon_sym_LF,
  [13074] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1618), 1,
      anon_sym_LF,
  [13081] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1620), 1,
      anon_sym_LF,
  [13088] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1622), 1,
      anon_sym_LF,
  [13095] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1624), 1,
      anon_sym_LF,
  [13102] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(612), 1,
      anon_sym_LF,
  [13109] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1626), 1,
      anon_sym_LF,
  [13116] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1628), 1,
      anon_sym_LF,
  [13123] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1630), 1,
      anon_sym_LF,
  [13130] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1632), 1,
      anon_sym_LF,
  [13137] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1634), 1,
      anon_sym_LF,
  [13144] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1636), 1,
      anon_sym_SLASH,
  [13151] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1638), 1,
      anon_sym_LF,
  [13158] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1640), 1,
      anon_sym_LF,
  [13165] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1642), 1,
      anon_sym_LF,
  [13172] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1425), 1,
      anon_sym_LF,
  [13179] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1644), 1,
      anon_sym_LF,
  [13186] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1280), 1,
      anon_sym_LF,
  [13193] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1646), 1,
      anon_sym_COLON,
  [13200] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1648), 1,
      anon_sym_COLON,
  [13207] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1650), 1,
      anon_sym_RBRACE_RBRACE,
  [13214] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1652), 1,
      anon_sym_COLON,
  [13221] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1654), 1,
      aux_sym_oneline_string_text_token1,
  [13228] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1656), 1,
      anon_sym_RBRACE_RBRACE,
  [13235] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1658), 1,
      anon_sym_LF,
  [13242] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1660), 1,
      anon_sym_RBRACE_RBRACE,
  [13249] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1662), 1,
      anon_sym_COLON,
  [13256] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1664), 1,
      anon_sym_RBRACE_RBRACE,
  [13263] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1666), 1,
      anon_sym_LF,
  [13270] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1668), 1,
      anon_sym_RBRACE_RBRACE,
  [13277] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1670), 1,
      anon_sym_RBRACE_RBRACE,
  [13284] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1672), 1,
      anon_sym_RBRACE_RBRACE,
  [13291] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1674), 1,
      anon_sym_RBRACE_RBRACE,
  [13298] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1676), 1,
      anon_sym_RBRACE_RBRACE,
  [13305] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1678), 1,
      anon_sym_RBRACE_RBRACE,
  [13312] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1286), 1,
      anon_sym_LF,
  [13319] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1680), 1,
      ts_builtin_sym_end,
  [13326] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1682), 1,
      anon_sym_LF,
  [13333] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1684), 1,
      anon_sym_LF,
  [13340] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1686), 1,
      anon_sym_EQ,
  [13347] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1688), 1,
      anon_sym_LF,
  [13354] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1690), 1,
      anon_sym_LF,
  [13361] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1692), 1,
      anon_sym_LF,
  [13368] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1694), 1,
      anon_sym_LF,
  [13375] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1696), 1,
      anon_sym_LF,
  [13382] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1698), 1,
      anon_sym_LF,
  [13389] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1700), 1,
      anon_sym_LF,
  [13396] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1702), 1,
      anon_sym_LF,
  [13403] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1704), 1,
      anon_sym_LF,
  [13410] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1445), 1,
      anon_sym_LF,
  [13417] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1706), 1,
      anon_sym_LF,
  [13424] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1708), 1,
      anon_sym_COLON,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(14)] = 0,
  [SMALL_STATE(15)] = 103,
  [SMALL_STATE(16)] = 206,
  [SMALL_STATE(17)] = 309,
  [SMALL_STATE(18)] = 432,
  [SMALL_STATE(19)] = 523,
  [SMALL_STATE(20)] = 646,
  [SMALL_STATE(21)] = 736,
  [SMALL_STATE(22)] = 847,
  [SMALL_STATE(23)] = 958,
  [SMALL_STATE(24)] = 1035,
  [SMALL_STATE(25)] = 1112,
  [SMALL_STATE(26)] = 1189,
  [SMALL_STATE(27)] = 1266,
  [SMALL_STATE(28)] = 1326,
  [SMALL_STATE(29)] = 1386,
  [SMALL_STATE(30)] = 1462,
  [SMALL_STATE(31)] = 1538,
  [SMALL_STATE(32)] = 1598,
  [SMALL_STATE(33)] = 1658,
  [SMALL_STATE(34)] = 1718,
  [SMALL_STATE(35)] = 1778,
  [SMALL_STATE(36)] = 1850,
  [SMALL_STATE(37)] = 1910,
  [SMALL_STATE(38)] = 1970,
  [SMALL_STATE(39)] = 2046,
  [SMALL_STATE(40)] = 2106,
  [SMALL_STATE(41)] = 2166,
  [SMALL_STATE(42)] = 2226,
  [SMALL_STATE(43)] = 2286,
  [SMALL_STATE(44)] = 2354,
  [SMALL_STATE(45)] = 2427,
  [SMALL_STATE(46)] = 2500,
  [SMALL_STATE(47)] = 2569,
  [SMALL_STATE(48)] = 2642,
  [SMALL_STATE(49)] = 2715,
  [SMALL_STATE(50)] = 2788,
  [SMALL_STATE(51)] = 2859,
  [SMALL_STATE(52)] = 2932,
  [SMALL_STATE(53)] = 3006,
  [SMALL_STATE(54)] = 3071,
  [SMALL_STATE(55)] = 3136,
  [SMALL_STATE(56)] = 3200,
  [SMALL_STATE(57)] = 3264,
  [SMALL_STATE(58)] = 3321,
  [SMALL_STATE(59)] = 3376,
  [SMALL_STATE(60)] = 3435,
  [SMALL_STATE(61)] = 3490,
  [SMALL_STATE(62)] = 3548,
  [SMALL_STATE(63)] = 3606,
  [SMALL_STATE(64)] = 3662,
  [SMALL_STATE(65)] = 3720,
  [SMALL_STATE(66)] = 3778,
  [SMALL_STATE(67)] = 3833,
  [SMALL_STATE(68)] = 3902,
  [SMALL_STATE(69)] = 3955,
  [SMALL_STATE(70)] = 4008,
  [SMALL_STATE(71)] = 4065,
  [SMALL_STATE(72)] = 4118,
  [SMALL_STATE(73)] = 4175,
  [SMALL_STATE(74)] = 4232,
  [SMALL_STATE(75)] = 4285,
  [SMALL_STATE(76)] = 4338,
  [SMALL_STATE(77)] = 4395,
  [SMALL_STATE(78)] = 4461,
  [SMALL_STATE(79)] = 4513,
  [SMALL_STATE(80)] = 4569,
  [SMALL_STATE(81)] = 4635,
  [SMALL_STATE(82)] = 4687,
  [SMALL_STATE(83)] = 4739,
  [SMALL_STATE(84)] = 4791,
  [SMALL_STATE(85)] = 4843,
  [SMALL_STATE(86)] = 4895,
  [SMALL_STATE(87)] = 4947,
  [SMALL_STATE(88)] = 4999,
  [SMALL_STATE(89)] = 5065,
  [SMALL_STATE(90)] = 5117,
  [SMALL_STATE(91)] = 5169,
  [SMALL_STATE(92)] = 5223,
  [SMALL_STATE(93)] = 5274,
  [SMALL_STATE(94)] = 5324,
  [SMALL_STATE(95)] = 5374,
  [SMALL_STATE(96)] = 5424,
  [SMALL_STATE(97)] = 5474,
  [SMALL_STATE(98)] = 5524,
  [SMALL_STATE(99)] = 5574,
  [SMALL_STATE(100)] = 5641,
  [SMALL_STATE(101)] = 5724,
  [SMALL_STATE(102)] = 5778,
  [SMALL_STATE(103)] = 5822,
  [SMALL_STATE(104)] = 5866,
  [SMALL_STATE(105)] = 5910,
  [SMALL_STATE(106)] = 5952,
  [SMALL_STATE(107)] = 5992,
  [SMALL_STATE(108)] = 6032,
  [SMALL_STATE(109)] = 6072,
  [SMALL_STATE(110)] = 6112,
  [SMALL_STATE(111)] = 6152,
  [SMALL_STATE(112)] = 6192,
  [SMALL_STATE(113)] = 6232,
  [SMALL_STATE(114)] = 6272,
  [SMALL_STATE(115)] = 6312,
  [SMALL_STATE(116)] = 6352,
  [SMALL_STATE(117)] = 6392,
  [SMALL_STATE(118)] = 6432,
  [SMALL_STATE(119)] = 6471,
  [SMALL_STATE(120)] = 6510,
  [SMALL_STATE(121)] = 6549,
  [SMALL_STATE(122)] = 6588,
  [SMALL_STATE(123)] = 6627,
  [SMALL_STATE(124)] = 6666,
  [SMALL_STATE(125)] = 6705,
  [SMALL_STATE(126)] = 6744,
  [SMALL_STATE(127)] = 6783,
  [SMALL_STATE(128)] = 6822,
  [SMALL_STATE(129)] = 6861,
  [SMALL_STATE(130)] = 6900,
  [SMALL_STATE(131)] = 6939,
  [SMALL_STATE(132)] = 6978,
  [SMALL_STATE(133)] = 7039,
  [SMALL_STATE(134)] = 7079,
  [SMALL_STATE(135)] = 7137,
  [SMALL_STATE(136)] = 7190,
  [SMALL_STATE(137)] = 7243,
  [SMALL_STATE(138)] = 7284,
  [SMALL_STATE(139)] = 7337,
  [SMALL_STATE(140)] = 7367,
  [SMALL_STATE(141)] = 7397,
  [SMALL_STATE(142)] = 7427,
  [SMALL_STATE(143)] = 7479,
  [SMALL_STATE(144)] = 7509,
  [SMALL_STATE(145)] = 7561,
  [SMALL_STATE(146)] = 7591,
  [SMALL_STATE(147)] = 7627,
  [SMALL_STATE(148)] = 7672,
  [SMALL_STATE(149)] = 7717,
  [SMALL_STATE(150)] = 7762,
  [SMALL_STATE(151)] = 7807,
  [SMALL_STATE(152)] = 7833,
  [SMALL_STATE(153)] = 7861,
  [SMALL_STATE(154)] = 7887,
  [SMALL_STATE(155)] = 7913,
  [SMALL_STATE(156)] = 7939,
  [SMALL_STATE(157)] = 7965,
  [SMALL_STATE(158)] = 8006,
  [SMALL_STATE(159)] = 8047,
  [SMALL_STATE(160)] = 8088,
  [SMALL_STATE(161)] = 8129,
  [SMALL_STATE(162)] = 8170,
  [SMALL_STATE(163)] = 8208,
  [SMALL_STATE(164)] = 8243,
  [SMALL_STATE(165)] = 8277,
  [SMALL_STATE(166)] = 8311,
  [SMALL_STATE(167)] = 8343,
  [SMALL_STATE(168)] = 8370,
  [SMALL_STATE(169)] = 8399,
  [SMALL_STATE(170)] = 8426,
  [SMALL_STATE(171)] = 8453,
  [SMALL_STATE(172)] = 8482,
  [SMALL_STATE(173)] = 8509,
  [SMALL_STATE(174)] = 8538,
  [SMALL_STATE(175)] = 8567,
  [SMALL_STATE(176)] = 8596,
  [SMALL_STATE(177)] = 8625,
  [SMALL_STATE(178)] = 8654,
  [SMALL_STATE(179)] = 8681,
  [SMALL_STATE(180)] = 8709,
  [SMALL_STATE(181)] = 8735,
  [SMALL_STATE(182)] = 8763,
  [SMALL_STATE(183)] = 8789,
  [SMALL_STATE(184)] = 8817,
  [SMALL_STATE(185)] = 8845,
  [SMALL_STATE(186)] = 8871,
  [SMALL_STATE(187)] = 8899,
  [SMALL_STATE(188)] = 8924,
  [SMALL_STATE(189)] = 8949,
  [SMALL_STATE(190)] = 8974,
  [SMALL_STATE(191)] = 8999,
  [SMALL_STATE(192)] = 9024,
  [SMALL_STATE(193)] = 9043,
  [SMALL_STATE(194)] = 9068,
  [SMALL_STATE(195)] = 9093,
  [SMALL_STATE(196)] = 9108,
  [SMALL_STATE(197)] = 9133,
  [SMALL_STATE(198)] = 9158,
  [SMALL_STATE(199)] = 9183,
  [SMALL_STATE(200)] = 9208,
  [SMALL_STATE(201)] = 9233,
  [SMALL_STATE(202)] = 9252,
  [SMALL_STATE(203)] = 9277,
  [SMALL_STATE(204)] = 9296,
  [SMALL_STATE(205)] = 9312,
  [SMALL_STATE(206)] = 9328,
  [SMALL_STATE(207)] = 9344,
  [SMALL_STATE(208)] = 9360,
  [SMALL_STATE(209)] = 9376,
  [SMALL_STATE(210)] = 9396,
  [SMALL_STATE(211)] = 9412,
  [SMALL_STATE(212)] = 9428,
  [SMALL_STATE(213)] = 9444,
  [SMALL_STATE(214)] = 9460,
  [SMALL_STATE(215)] = 9476,
  [SMALL_STATE(216)] = 9492,
  [SMALL_STATE(217)] = 9508,
  [SMALL_STATE(218)] = 9524,
  [SMALL_STATE(219)] = 9540,
  [SMALL_STATE(220)] = 9556,
  [SMALL_STATE(221)] = 9578,
  [SMALL_STATE(222)] = 9598,
  [SMALL_STATE(223)] = 9620,
  [SMALL_STATE(224)] = 9636,
  [SMALL_STATE(225)] = 9652,
  [SMALL_STATE(226)] = 9668,
  [SMALL_STATE(227)] = 9690,
  [SMALL_STATE(228)] = 9708,
  [SMALL_STATE(229)] = 9724,
  [SMALL_STATE(230)] = 9740,
  [SMALL_STATE(231)] = 9756,
  [SMALL_STATE(232)] = 9778,
  [SMALL_STATE(233)] = 9800,
  [SMALL_STATE(234)] = 9816,
  [SMALL_STATE(235)] = 9832,
  [SMALL_STATE(236)] = 9848,
  [SMALL_STATE(237)] = 9864,
  [SMALL_STATE(238)] = 9880,
  [SMALL_STATE(239)] = 9896,
  [SMALL_STATE(240)] = 9912,
  [SMALL_STATE(241)] = 9928,
  [SMALL_STATE(242)] = 9944,
  [SMALL_STATE(243)] = 9960,
  [SMALL_STATE(244)] = 9977,
  [SMALL_STATE(245)] = 9998,
  [SMALL_STATE(246)] = 10019,
  [SMALL_STATE(247)] = 10040,
  [SMALL_STATE(248)] = 10061,
  [SMALL_STATE(249)] = 10082,
  [SMALL_STATE(250)] = 10101,
  [SMALL_STATE(251)] = 10116,
  [SMALL_STATE(252)] = 10129,
  [SMALL_STATE(253)] = 10154,
  [SMALL_STATE(254)] = 10179,
  [SMALL_STATE(255)] = 10198,
  [SMALL_STATE(256)] = 10217,
  [SMALL_STATE(257)] = 10238,
  [SMALL_STATE(258)] = 10258,
  [SMALL_STATE(259)] = 10272,
  [SMALL_STATE(260)] = 10286,
  [SMALL_STATE(261)] = 10302,
  [SMALL_STATE(262)] = 10318,
  [SMALL_STATE(263)] = 10336,
  [SMALL_STATE(264)] = 10354,
  [SMALL_STATE(265)] = 10372,
  [SMALL_STATE(266)] = 10388,
  [SMALL_STATE(267)] = 10406,
  [SMALL_STATE(268)] = 10422,
  [SMALL_STATE(269)] = 10436,
  [SMALL_STATE(270)] = 10454,
  [SMALL_STATE(271)] = 10472,
  [SMALL_STATE(272)] = 10490,
  [SMALL_STATE(273)] = 10508,
  [SMALL_STATE(274)] = 10528,
  [SMALL_STATE(275)] = 10544,
  [SMALL_STATE(276)] = 10559,
  [SMALL_STATE(277)] = 10570,
  [SMALL_STATE(278)] = 10583,
  [SMALL_STATE(279)] = 10596,
  [SMALL_STATE(280)] = 10607,
  [SMALL_STATE(281)] = 10618,
  [SMALL_STATE(282)] = 10633,
  [SMALL_STATE(283)] = 10648,
  [SMALL_STATE(284)] = 10663,
  [SMALL_STATE(285)] = 10678,
  [SMALL_STATE(286)] = 10691,
  [SMALL_STATE(287)] = 10704,
  [SMALL_STATE(288)] = 10715,
  [SMALL_STATE(289)] = 10728,
  [SMALL_STATE(290)] = 10739,
  [SMALL_STATE(291)] = 10752,
  [SMALL_STATE(292)] = 10766,
  [SMALL_STATE(293)] = 10780,
  [SMALL_STATE(294)] = 10796,
  [SMALL_STATE(295)] = 10810,
  [SMALL_STATE(296)] = 10824,
  [SMALL_STATE(297)] = 10838,
  [SMALL_STATE(298)] = 10848,
  [SMALL_STATE(299)] = 10862,
  [SMALL_STATE(300)] = 10872,
  [SMALL_STATE(301)] = 10886,
  [SMALL_STATE(302)] = 10896,
  [SMALL_STATE(303)] = 10906,
  [SMALL_STATE(304)] = 10918,
  [SMALL_STATE(305)] = 10928,
  [SMALL_STATE(306)] = 10938,
  [SMALL_STATE(307)] = 10948,
  [SMALL_STATE(308)] = 10958,
  [SMALL_STATE(309)] = 10968,
  [SMALL_STATE(310)] = 10982,
  [SMALL_STATE(311)] = 10992,
  [SMALL_STATE(312)] = 11002,
  [SMALL_STATE(313)] = 11012,
  [SMALL_STATE(314)] = 11026,
  [SMALL_STATE(315)] = 11036,
  [SMALL_STATE(316)] = 11046,
  [SMALL_STATE(317)] = 11060,
  [SMALL_STATE(318)] = 11074,
  [SMALL_STATE(319)] = 11084,
  [SMALL_STATE(320)] = 11094,
  [SMALL_STATE(321)] = 11108,
  [SMALL_STATE(322)] = 11122,
  [SMALL_STATE(323)] = 11136,
  [SMALL_STATE(324)] = 11146,
  [SMALL_STATE(325)] = 11156,
  [SMALL_STATE(326)] = 11166,
  [SMALL_STATE(327)] = 11176,
  [SMALL_STATE(328)] = 11186,
  [SMALL_STATE(329)] = 11196,
  [SMALL_STATE(330)] = 11210,
  [SMALL_STATE(331)] = 11224,
  [SMALL_STATE(332)] = 11234,
  [SMALL_STATE(333)] = 11244,
  [SMALL_STATE(334)] = 11254,
  [SMALL_STATE(335)] = 11268,
  [SMALL_STATE(336)] = 11282,
  [SMALL_STATE(337)] = 11296,
  [SMALL_STATE(338)] = 11306,
  [SMALL_STATE(339)] = 11316,
  [SMALL_STATE(340)] = 11326,
  [SMALL_STATE(341)] = 11336,
  [SMALL_STATE(342)] = 11346,
  [SMALL_STATE(343)] = 11355,
  [SMALL_STATE(344)] = 11364,
  [SMALL_STATE(345)] = 11377,
  [SMALL_STATE(346)] = 11390,
  [SMALL_STATE(347)] = 11403,
  [SMALL_STATE(348)] = 11414,
  [SMALL_STATE(349)] = 11427,
  [SMALL_STATE(350)] = 11438,
  [SMALL_STATE(351)] = 11447,
  [SMALL_STATE(352)] = 11460,
  [SMALL_STATE(353)] = 11473,
  [SMALL_STATE(354)] = 11484,
  [SMALL_STATE(355)] = 11493,
  [SMALL_STATE(356)] = 11506,
  [SMALL_STATE(357)] = 11519,
  [SMALL_STATE(358)] = 11530,
  [SMALL_STATE(359)] = 11541,
  [SMALL_STATE(360)] = 11552,
  [SMALL_STATE(361)] = 11565,
  [SMALL_STATE(362)] = 11578,
  [SMALL_STATE(363)] = 11591,
  [SMALL_STATE(364)] = 11604,
  [SMALL_STATE(365)] = 11617,
  [SMALL_STATE(366)] = 11628,
  [SMALL_STATE(367)] = 11641,
  [SMALL_STATE(368)] = 11654,
  [SMALL_STATE(369)] = 11665,
  [SMALL_STATE(370)] = 11678,
  [SMALL_STATE(371)] = 11691,
  [SMALL_STATE(372)] = 11702,
  [SMALL_STATE(373)] = 11715,
  [SMALL_STATE(374)] = 11728,
  [SMALL_STATE(375)] = 11741,
  [SMALL_STATE(376)] = 11750,
  [SMALL_STATE(377)] = 11763,
  [SMALL_STATE(378)] = 11776,
  [SMALL_STATE(379)] = 11789,
  [SMALL_STATE(380)] = 11798,
  [SMALL_STATE(381)] = 11809,
  [SMALL_STATE(382)] = 11818,
  [SMALL_STATE(383)] = 11829,
  [SMALL_STATE(384)] = 11838,
  [SMALL_STATE(385)] = 11851,
  [SMALL_STATE(386)] = 11860,
  [SMALL_STATE(387)] = 11871,
  [SMALL_STATE(388)] = 11884,
  [SMALL_STATE(389)] = 11897,
  [SMALL_STATE(390)] = 11908,
  [SMALL_STATE(391)] = 11917,
  [SMALL_STATE(392)] = 11930,
  [SMALL_STATE(393)] = 11943,
  [SMALL_STATE(394)] = 11956,
  [SMALL_STATE(395)] = 11967,
  [SMALL_STATE(396)] = 11978,
  [SMALL_STATE(397)] = 11987,
  [SMALL_STATE(398)] = 12000,
  [SMALL_STATE(399)] = 12013,
  [SMALL_STATE(400)] = 12026,
  [SMALL_STATE(401)] = 12037,
  [SMALL_STATE(402)] = 12048,
  [SMALL_STATE(403)] = 12057,
  [SMALL_STATE(404)] = 12066,
  [SMALL_STATE(405)] = 12079,
  [SMALL_STATE(406)] = 12088,
  [SMALL_STATE(407)] = 12101,
  [SMALL_STATE(408)] = 12114,
  [SMALL_STATE(409)] = 12127,
  [SMALL_STATE(410)] = 12138,
  [SMALL_STATE(411)] = 12149,
  [SMALL_STATE(412)] = 12160,
  [SMALL_STATE(413)] = 12170,
  [SMALL_STATE(414)] = 12180,
  [SMALL_STATE(415)] = 12190,
  [SMALL_STATE(416)] = 12200,
  [SMALL_STATE(417)] = 12210,
  [SMALL_STATE(418)] = 12220,
  [SMALL_STATE(419)] = 12230,
  [SMALL_STATE(420)] = 12240,
  [SMALL_STATE(421)] = 12250,
  [SMALL_STATE(422)] = 12260,
  [SMALL_STATE(423)] = 12270,
  [SMALL_STATE(424)] = 12280,
  [SMALL_STATE(425)] = 12290,
  [SMALL_STATE(426)] = 12298,
  [SMALL_STATE(427)] = 12306,
  [SMALL_STATE(428)] = 12316,
  [SMALL_STATE(429)] = 12326,
  [SMALL_STATE(430)] = 12336,
  [SMALL_STATE(431)] = 12346,
  [SMALL_STATE(432)] = 12356,
  [SMALL_STATE(433)] = 12366,
  [SMALL_STATE(434)] = 12376,
  [SMALL_STATE(435)] = 12386,
  [SMALL_STATE(436)] = 12396,
  [SMALL_STATE(437)] = 12406,
  [SMALL_STATE(438)] = 12416,
  [SMALL_STATE(439)] = 12426,
  [SMALL_STATE(440)] = 12436,
  [SMALL_STATE(441)] = 12446,
  [SMALL_STATE(442)] = 12456,
  [SMALL_STATE(443)] = 12464,
  [SMALL_STATE(444)] = 12474,
  [SMALL_STATE(445)] = 12484,
  [SMALL_STATE(446)] = 12494,
  [SMALL_STATE(447)] = 12504,
  [SMALL_STATE(448)] = 12512,
  [SMALL_STATE(449)] = 12522,
  [SMALL_STATE(450)] = 12532,
  [SMALL_STATE(451)] = 12542,
  [SMALL_STATE(452)] = 12549,
  [SMALL_STATE(453)] = 12556,
  [SMALL_STATE(454)] = 12563,
  [SMALL_STATE(455)] = 12570,
  [SMALL_STATE(456)] = 12577,
  [SMALL_STATE(457)] = 12584,
  [SMALL_STATE(458)] = 12591,
  [SMALL_STATE(459)] = 12598,
  [SMALL_STATE(460)] = 12605,
  [SMALL_STATE(461)] = 12612,
  [SMALL_STATE(462)] = 12619,
  [SMALL_STATE(463)] = 12626,
  [SMALL_STATE(464)] = 12633,
  [SMALL_STATE(465)] = 12640,
  [SMALL_STATE(466)] = 12647,
  [SMALL_STATE(467)] = 12654,
  [SMALL_STATE(468)] = 12661,
  [SMALL_STATE(469)] = 12668,
  [SMALL_STATE(470)] = 12675,
  [SMALL_STATE(471)] = 12682,
  [SMALL_STATE(472)] = 12689,
  [SMALL_STATE(473)] = 12696,
  [SMALL_STATE(474)] = 12703,
  [SMALL_STATE(475)] = 12710,
  [SMALL_STATE(476)] = 12717,
  [SMALL_STATE(477)] = 12724,
  [SMALL_STATE(478)] = 12731,
  [SMALL_STATE(479)] = 12738,
  [SMALL_STATE(480)] = 12745,
  [SMALL_STATE(481)] = 12752,
  [SMALL_STATE(482)] = 12759,
  [SMALL_STATE(483)] = 12766,
  [SMALL_STATE(484)] = 12773,
  [SMALL_STATE(485)] = 12780,
  [SMALL_STATE(486)] = 12787,
  [SMALL_STATE(487)] = 12794,
  [SMALL_STATE(488)] = 12801,
  [SMALL_STATE(489)] = 12808,
  [SMALL_STATE(490)] = 12815,
  [SMALL_STATE(491)] = 12822,
  [SMALL_STATE(492)] = 12829,
  [SMALL_STATE(493)] = 12836,
  [SMALL_STATE(494)] = 12843,
  [SMALL_STATE(495)] = 12850,
  [SMALL_STATE(496)] = 12857,
  [SMALL_STATE(497)] = 12864,
  [SMALL_STATE(498)] = 12871,
  [SMALL_STATE(499)] = 12878,
  [SMALL_STATE(500)] = 12885,
  [SMALL_STATE(501)] = 12892,
  [SMALL_STATE(502)] = 12899,
  [SMALL_STATE(503)] = 12906,
  [SMALL_STATE(504)] = 12913,
  [SMALL_STATE(505)] = 12920,
  [SMALL_STATE(506)] = 12927,
  [SMALL_STATE(507)] = 12934,
  [SMALL_STATE(508)] = 12941,
  [SMALL_STATE(509)] = 12948,
  [SMALL_STATE(510)] = 12955,
  [SMALL_STATE(511)] = 12962,
  [SMALL_STATE(512)] = 12969,
  [SMALL_STATE(513)] = 12976,
  [SMALL_STATE(514)] = 12983,
  [SMALL_STATE(515)] = 12990,
  [SMALL_STATE(516)] = 12997,
  [SMALL_STATE(517)] = 13004,
  [SMALL_STATE(518)] = 13011,
  [SMALL_STATE(519)] = 13018,
  [SMALL_STATE(520)] = 13025,
  [SMALL_STATE(521)] = 13032,
  [SMALL_STATE(522)] = 13039,
  [SMALL_STATE(523)] = 13046,
  [SMALL_STATE(524)] = 13053,
  [SMALL_STATE(525)] = 13060,
  [SMALL_STATE(526)] = 13067,
  [SMALL_STATE(527)] = 13074,
  [SMALL_STATE(528)] = 13081,
  [SMALL_STATE(529)] = 13088,
  [SMALL_STATE(530)] = 13095,
  [SMALL_STATE(531)] = 13102,
  [SMALL_STATE(532)] = 13109,
  [SMALL_STATE(533)] = 13116,
  [SMALL_STATE(534)] = 13123,
  [SMALL_STATE(535)] = 13130,
  [SMALL_STATE(536)] = 13137,
  [SMALL_STATE(537)] = 13144,
  [SMALL_STATE(538)] = 13151,
  [SMALL_STATE(539)] = 13158,
  [SMALL_STATE(540)] = 13165,
  [SMALL_STATE(541)] = 13172,
  [SMALL_STATE(542)] = 13179,
  [SMALL_STATE(543)] = 13186,
  [SMALL_STATE(544)] = 13193,
  [SMALL_STATE(545)] = 13200,
  [SMALL_STATE(546)] = 13207,
  [SMALL_STATE(547)] = 13214,
  [SMALL_STATE(548)] = 13221,
  [SMALL_STATE(549)] = 13228,
  [SMALL_STATE(550)] = 13235,
  [SMALL_STATE(551)] = 13242,
  [SMALL_STATE(552)] = 13249,
  [SMALL_STATE(553)] = 13256,
  [SMALL_STATE(554)] = 13263,
  [SMALL_STATE(555)] = 13270,
  [SMALL_STATE(556)] = 13277,
  [SMALL_STATE(557)] = 13284,
  [SMALL_STATE(558)] = 13291,
  [SMALL_STATE(559)] = 13298,
  [SMALL_STATE(560)] = 13305,
  [SMALL_STATE(561)] = 13312,
  [SMALL_STATE(562)] = 13319,
  [SMALL_STATE(563)] = 13326,
  [SMALL_STATE(564)] = 13333,
  [SMALL_STATE(565)] = 13340,
  [SMALL_STATE(566)] = 13347,
  [SMALL_STATE(567)] = 13354,
  [SMALL_STATE(568)] = 13361,
  [SMALL_STATE(569)] = 13368,
  [SMALL_STATE(570)] = 13375,
  [SMALL_STATE(571)] = 13382,
  [SMALL_STATE(572)] = 13389,
  [SMALL_STATE(573)] = 13396,
  [SMALL_STATE(574)] = 13403,
  [SMALL_STATE(575)] = 13410,
  [SMALL_STATE(576)] = 13417,
  [SMALL_STATE(577)] = 13424,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hurl_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(306),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 3),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [17] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 3),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(490),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(488),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(486),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(485),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(484),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(483),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(482),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(481),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(317),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(449),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(259),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(243),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(253),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(362),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(514),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(495),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(285),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 2),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 2),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 4),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 4),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 5),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 5),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response, 3),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_response, 3),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(535),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(530),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response, 4),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_response, 4),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_options_section, 3),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_options_section, 3),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(462),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(464),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(465),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(466),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(467),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(468),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(476),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(498),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(545),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(544),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_options_section, 2),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_options_section, 2),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_options_section_repeat1, 2),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_options_section_repeat1, 2),
  [117] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_options_section_repeat1, 2), SHIFT_REPEAT(462),
  [120] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_options_section_repeat1, 2), SHIFT_REPEAT(464),
  [123] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_options_section_repeat1, 2), SHIFT_REPEAT(465),
  [126] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_options_section_repeat1, 2), SHIFT_REPEAT(466),
  [129] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_options_section_repeat1, 2), SHIFT_REPEAT(467),
  [132] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_options_section_repeat1, 2), SHIFT_REPEAT(468),
  [135] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_options_section_repeat1, 2), SHIFT_REPEAT(476),
  [138] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_options_section_repeat1, 2), SHIFT_REPEAT(498),
  [141] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_options_section_repeat1, 2), SHIFT_REPEAT(545),
  [144] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_options_section_repeat1, 2), SHIFT_REPEAT(544),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_asserts_section, 2),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_asserts_section, 2),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(445),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(436),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(433),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(431),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(430),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(329),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_asserts_section_repeat1, 2),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_asserts_section_repeat1, 2),
  [181] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_asserts_section_repeat1, 2), SHIFT_REPEAT(445),
  [184] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_asserts_section_repeat1, 2), SHIFT_REPEAT(126),
  [187] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_asserts_section_repeat1, 2), SHIFT_REPEAT(128),
  [190] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_asserts_section_repeat1, 2), SHIFT_REPEAT(436),
  [193] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_asserts_section_repeat1, 2), SHIFT_REPEAT(433),
  [196] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_asserts_section_repeat1, 2), SHIFT_REPEAT(129),
  [199] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_asserts_section_repeat1, 2), SHIFT_REPEAT(431),
  [202] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_asserts_section_repeat1, 2), SHIFT_REPEAT(430),
  [205] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_asserts_section_repeat1, 2), SHIFT_REPEAT(329),
  [208] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_asserts_section_repeat1, 2), SHIFT_REPEAT(118),
  [211] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_asserts_section_repeat1, 2), SHIFT_REPEAT(131),
  [214] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_asserts_section_repeat1, 2), SHIFT_REPEAT(130),
  [217] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_asserts_section_repeat1, 2), SHIFT_REPEAT(127),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_asserts_section, 3),
  [222] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_asserts_section, 3),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [226] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [232] = {.entry = {.count = 1, .reusable = false}}, SHIFT(248),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [236] = {.entry = {.count = 1, .reusable = false}}, SHIFT(245),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(434),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(526),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(520),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(516),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(515),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(513),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(511),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_value, 2),
  [276] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_key_value, 2),
  [278] = {.entry = {.count = 1, .reusable = false}}, SHIFT(230),
  [280] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [282] = {.entry = {.count = 1, .reusable = false}}, SHIFT(407),
  [284] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [286] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [288] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [290] = {.entry = {.count = 1, .reusable = false}}, SHIFT(229),
  [292] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [294] = {.entry = {.count = 1, .reusable = false}}, SHIFT(399),
  [296] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [298] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [300] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response, 5),
  [304] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_response, 5),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multipart_form_data_section, 4),
  [308] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multipart_form_data_section, 4),
  [310] = {.entry = {.count = 1, .reusable = false}}, SHIFT(392),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multipart_form_data_section, 3),
  [314] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multipart_form_data_section, 3),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multipart_form_data_section, 5),
  [318] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multipart_form_data_section, 5),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_request_repeat1, 2),
  [322] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_request_repeat1, 2),
  [324] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat1, 2), SHIFT_REPEAT(449),
  [327] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat1, 2), SHIFT_REPEAT(259),
  [330] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat1, 2), SHIFT_REPEAT(392),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_max_redirs_option, 4),
  [335] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_max_redirs_option, 4),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_retry_max_count_option, 4),
  [339] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_retry_max_count_option, 4),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_query_string_params_section_repeat1, 2),
  [343] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_query_string_params_section_repeat1, 2), SHIFT_REPEAT(29),
  [346] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_query_string_params_section_repeat1, 2),
  [348] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_string_params_section_repeat1, 2), SHIFT_REPEAT(449),
  [351] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_string_params_section_repeat1, 2), SHIFT_REPEAT(259),
  [354] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_string_params_section_repeat1, 2), SHIFT_REPEAT(392),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_string_params_section, 3),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [361] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query_string_params_section, 3),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_verbose_option, 4),
  [365] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_verbose_option, 4),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ca_certificate_option, 3),
  [369] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ca_certificate_option, 3),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ca_certificate_option, 4),
  [373] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ca_certificate_option, 4),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_very_verbose_option, 4),
  [377] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_very_verbose_option, 4),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_value_string_repeat1, 2),
  [381] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_value_string_repeat1, 2),
  [383] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_string_repeat1, 2), SHIFT_REPEAT(230),
  [386] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_string_repeat1, 2), SHIFT_REPEAT(61),
  [389] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_string_repeat1, 2), SHIFT_REPEAT(407),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_follow_redirect_option, 4),
  [394] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_follow_redirect_option, 4),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insecure_option, 4),
  [398] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_insecure_option, 4),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_string_params_section, 2),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [404] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query_string_params_section, 2),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_retry_option, 4),
  [408] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_retry_option, 4),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_retry_interval_option, 4),
  [412] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_retry_interval_option, 4),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option, 1),
  [416] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_option, 1),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_option, 4),
  [420] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_option, 4),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_string, 1),
  [424] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_string, 1),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_form_params_section, 3),
  [428] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_form_params_section, 3),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cookies_section, 4),
  [432] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cookies_section, 4),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cookies_section, 5),
  [436] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cookies_section, 5),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_form_params_section, 5),
  [440] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_form_params_section, 5),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_form_params_section, 4),
  [444] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_form_params_section, 4),
  [446] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_string_repeat1, 2), SHIFT_REPEAT(229),
  [449] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_string_repeat1, 2), SHIFT_REPEAT(72),
  [452] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_string_repeat1, 2), SHIFT_REPEAT(399),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cookies_section, 3),
  [457] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cookies_section, 3),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_request_repeat2, 2),
  [461] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_request_repeat2, 2),
  [463] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat2, 2), SHIFT_REPEAT(490),
  [466] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat2, 2), SHIFT_REPEAT(488),
  [469] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat2, 2), SHIFT_REPEAT(486),
  [472] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat2, 2), SHIFT_REPEAT(485),
  [475] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat2, 2), SHIFT_REPEAT(484),
  [478] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat2, 2), SHIFT_REPEAT(483),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_string_content, 1),
  [483] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_string_content, 1),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_value_string_content_repeat1, 2),
  [487] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_value_string_content_repeat1, 2),
  [489] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_string_content_repeat1, 2), SHIFT_REPEAT(230),
  [492] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_string_content_repeat1, 2), SHIFT_REPEAT(61),
  [495] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_string_content_repeat1, 2), SHIFT_REPEAT(229),
  [498] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_string_content_repeat1, 2), SHIFT_REPEAT(72),
  [501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer, 1),
  [503] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer, 1),
  [505] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assert, 4),
  [507] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assert, 4),
  [509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_integer_repeat1, 2),
  [511] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_integer_repeat1, 2),
  [513] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_integer_repeat1, 2), SHIFT_REPEAT(71),
  [516] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assert, 3),
  [518] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assert, 3),
  [520] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_string_text, 1),
  [522] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_string_text, 1),
  [524] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [526] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_integer_repeat1, 2), SHIFT_REPEAT(84),
  [529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fraction, 2),
  [531] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fraction, 2),
  [533] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_value, 3),
  [535] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_key_value, 3),
  [537] = {.entry = {.count = 1, .reusable = false}}, SHIFT(353),
  [539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_value_string_text_repeat1, 2),
  [541] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_value_string_text_repeat1, 2),
  [543] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_string_text_repeat1, 2), SHIFT_REPEAT(65),
  [546] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template, 3),
  [548] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_template, 3),
  [550] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unicode_char, 3),
  [552] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unicode_char, 3),
  [554] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_string_text_repeat1, 2), SHIFT_REPEAT(70),
  [557] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_digit, 1),
  [559] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_digit, 1),
  [561] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [563] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_hurl_file_repeat2, 2),
  [565] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_hurl_file_repeat2, 2), SHIFT_REPEAT(73),
  [568] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_hurl_file_repeat2, 2),
  [570] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_string_escaped_char, 2),
  [572] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_string_escaped_char, 2),
  [574] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_string_escaped_char, 3),
  [576] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_string_escaped_char, 3),
  [578] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_integer_repeat1, 2), SHIFT_REPEAT(92),
  [581] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_captures_section, 3),
  [583] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_captures_section, 3),
  [585] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [587] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1),
  [589] = {.entry = {.count = 1, .reusable = false}}, SHIFT(357),
  [591] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_captures_section, 2),
  [593] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_captures_section, 2),
  [595] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_null, 1),
  [597] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_null, 1),
  [599] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_captures_section_repeat1, 2),
  [601] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_captures_section_repeat1, 2),
  [603] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_captures_section_repeat1, 2), SHIFT_REPEAT(449),
  [606] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_captures_section_repeat1, 2), SHIFT_REPEAT(259),
  [609] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_captures_section_repeat1, 2), SHIFT_REPEAT(392),
  [612] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float, 2),
  [614] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float, 2),
  [616] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 2),
  [618] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 2),
  [620] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_basic_auth_section, 3),
  [622] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_basic_auth_section, 3),
  [624] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request_section, 1),
  [626] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request_section, 1),
  [628] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_capture_repeat1, 2), SHIFT_REPEAT(316),
  [631] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_capture_repeat1, 2),
  [633] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_capture_repeat1, 2),
  [635] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_capture_repeat1, 2), SHIFT_REPEAT(107),
  [638] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_capture_repeat1, 2), SHIFT_REPEAT(108),
  [641] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_capture_repeat1, 2), SHIFT_REPEAT(111),
  [644] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_capture_repeat1, 2), SHIFT_REPEAT(112),
  [647] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_capture_repeat1, 2), SHIFT_REPEAT(113),
  [650] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_capture_repeat1, 2), SHIFT_REPEAT(114),
  [653] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_response_repeat1, 2),
  [655] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_response_repeat1, 2),
  [657] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_response_repeat1, 2), SHIFT_REPEAT(535),
  [660] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_response_repeat1, 2), SHIFT_REPEAT(530),
  [663] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_capture, 4),
  [665] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_capture, 4),
  [667] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_capture, 5),
  [669] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_capture, 5),
  [671] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response_section, 1),
  [673] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_response_section, 1),
  [675] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_string, 3),
  [677] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_string, 3),
  [679] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_count_filter, 1),
  [681] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_count_filter, 1),
  [683] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url_encode_filter, 1),
  [685] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_url_encode_filter, 1),
  [687] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_string, 2),
  [689] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_string, 2),
  [691] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regex, 2),
  [693] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_regex, 2),
  [695] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url_decode_filter, 1),
  [697] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_url_decode_filter, 1),
  [699] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_html_encode_filter, 1),
  [701] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_html_encode_filter, 1),
  [703] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_html_decode_filter, 1),
  [705] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_html_decode_filter, 1),
  [707] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_to_int_filter, 1),
  [709] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_to_int_filter, 1),
  [711] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filter, 1),
  [713] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_filter, 1),
  [715] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regex_filter, 2),
  [717] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_regex_filter, 2),
  [719] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regex, 3),
  [721] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_regex, 3),
  [723] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_duration_query, 1),
  [725] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_duration_query, 1),
  [727] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_query, 2),
  [729] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_query, 2),
  [731] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regex_query, 2),
  [733] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_regex_query, 2),
  [735] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jsonpath_query, 2),
  [737] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_jsonpath_query, 2),
  [739] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xpath_query, 2),
  [741] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xpath_query, 2),
  [743] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cookie_query, 2),
  [745] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cookie_query, 2),
  [747] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_query, 2),
  [749] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header_query, 2),
  [751] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query, 1),
  [753] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query, 1),
  [755] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_status_query, 1),
  [757] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_status_query, 1),
  [759] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bytes_query, 1),
  [761] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bytes_query, 1),
  [763] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url_query, 1),
  [765] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_url_query, 1),
  [767] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body_query, 1),
  [769] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_body_query, 1),
  [771] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_md5_query, 1),
  [773] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_md5_query, 1),
  [775] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sha256_query, 1),
  [777] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sha256_query, 1),
  [779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(428),
  [787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(424),
  [793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [805] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entry, 1),
  [807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [809] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_entry, 1),
  [811] = {.entry = {.count = 1, .reusable = false}}, SHIFT(442),
  [813] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [815] = {.entry = {.count = 1, .reusable = false}}, SHIFT(228),
  [817] = {.entry = {.count = 1, .reusable = false}}, SHIFT(282),
  [819] = {.entry = {.count = 1, .reusable = false}}, SHIFT(351),
  [821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(481),
  [825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(514),
  [835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(495),
  [837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [839] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hurl_file, 1),
  [841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [843] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 2),
  [845] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_body, 2),
  [847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
  [849] = {.entry = {.count = 1, .reusable = false}}, SHIFT(267),
  [851] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 6),
  [853] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 6),
  [855] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_hurl_file_repeat1, 2),
  [857] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_hurl_file_repeat1, 2), SHIFT_REPEAT(306),
  [860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [862] = {.entry = {.count = 1, .reusable = false}}, SHIFT(252),
  [864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [874] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entry, 2),
  [876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [878] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_entry, 2),
  [880] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response, 6),
  [882] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_response, 6),
  [884] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entry, 3),
  [886] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_entry, 3),
  [888] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_capture_repeat1, 2), SHIFT_REPEAT(336),
  [891] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_capture_repeat1, 2), SHIFT_REPEAT(235),
  [894] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_capture_repeat1, 2), SHIFT_REPEAT(239),
  [897] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_capture_repeat1, 2), SHIFT_REPEAT(242),
  [900] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_capture_repeat1, 2), SHIFT_REPEAT(241),
  [903] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_capture_repeat1, 2), SHIFT_REPEAT(240),
  [906] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_capture_repeat1, 2), SHIFT_REPEAT(238),
  [909] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [911] = {.entry = {.count = 1, .reusable = false}}, SHIFT(336),
  [913] = {.entry = {.count = 1, .reusable = false}}, SHIFT(235),
  [915] = {.entry = {.count = 1, .reusable = false}}, SHIFT(239),
  [917] = {.entry = {.count = 1, .reusable = false}}, SHIFT(242),
  [919] = {.entry = {.count = 1, .reusable = false}}, SHIFT(241),
  [921] = {.entry = {.count = 1, .reusable = false}}, SHIFT(240),
  [923] = {.entry = {.count = 1, .reusable = false}}, SHIFT(238),
  [925] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [927] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 2),
  [929] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 1),
  [931] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [933] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [935] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [939] = {.entry = {.count = 1, .reusable = true}}, SHIFT(449),
  [941] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [943] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [945] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_quoted_string_repeat1, 2),
  [947] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_string_repeat1, 2), SHIFT_REPEAT(311),
  [950] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_string_repeat1, 2), SHIFT_REPEAT(203),
  [953] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_string_repeat1, 2), SHIFT_REPEAT(398),
  [956] = {.entry = {.count = 1, .reusable = false}}, SHIFT(290),
  [958] = {.entry = {.count = 1, .reusable = false}}, SHIFT(225),
  [960] = {.entry = {.count = 1, .reusable = false}}, SHIFT(493),
  [962] = {.entry = {.count = 1, .reusable = false}}, SHIFT(276),
  [964] = {.entry = {.count = 1, .reusable = false}}, SHIFT(393),
  [966] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [968] = {.entry = {.count = 1, .reusable = false}}, SHIFT(311),
  [970] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [972] = {.entry = {.count = 1, .reusable = false}}, SHIFT(398),
  [974] = {.entry = {.count = 1, .reusable = false}}, SHIFT(211),
  [976] = {.entry = {.count = 1, .reusable = false}}, SHIFT(224),
  [978] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multiline_string_repeat1, 2), SHIFT_REPEAT(231),
  [981] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multiline_string_repeat1, 2), SHIFT_REPEAT(225),
  [984] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_multiline_string_repeat1, 2),
  [986] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multiline_string_repeat1, 2), SHIFT_REPEAT(276),
  [989] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multiline_string_repeat1, 2), SHIFT_REPEAT(393),
  [992] = {.entry = {.count = 1, .reusable = false}}, SHIFT(288),
  [994] = {.entry = {.count = 1, .reusable = false}}, SHIFT(451),
  [996] = {.entry = {.count = 1, .reusable = false}}, SHIFT(286),
  [998] = {.entry = {.count = 1, .reusable = false}}, SHIFT(554),
  [1000] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_string_repeat1, 2), SHIFT_REPEAT(228),
  [1003] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_string_repeat1, 2), SHIFT_REPEAT(282),
  [1006] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_string_repeat1, 2), SHIFT_REPEAT(351),
  [1009] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [1011] = {.entry = {.count = 1, .reusable = false}}, SHIFT(487),
  [1013] = {.entry = {.count = 1, .reusable = false}}, SHIFT(359),
  [1015] = {.entry = {.count = 1, .reusable = false}}, SHIFT(268),
  [1017] = {.entry = {.count = 1, .reusable = false}}, SHIFT(370),
  [1019] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_oneline_string_repeat1, 2), SHIFT_REPEAT(265),
  [1022] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_oneline_string_repeat1, 2), SHIFT_REPEAT(548),
  [1025] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_oneline_string_repeat1, 2),
  [1027] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_oneline_string_repeat1, 2), SHIFT_REPEAT(384),
  [1030] = {.entry = {.count = 1, .reusable = false}}, SHIFT(265),
  [1032] = {.entry = {.count = 1, .reusable = false}}, SHIFT(548),
  [1034] = {.entry = {.count = 1, .reusable = false}}, SHIFT(550),
  [1036] = {.entry = {.count = 1, .reusable = false}}, SHIFT(384),
  [1038] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [1040] = {.entry = {.count = 1, .reusable = false}}, SHIFT(347),
  [1042] = {.entry = {.count = 1, .reusable = false}}, SHIFT(258),
  [1044] = {.entry = {.count = 1, .reusable = false}}, SHIFT(408),
  [1046] = {.entry = {.count = 1, .reusable = false}}, SHIFT(499),
  [1048] = {.entry = {.count = 1, .reusable = false}}, SHIFT(352),
  [1050] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_filename, 1),
  [1052] = {.entry = {.count = 1, .reusable = false}}, SHIFT(308),
  [1054] = {.entry = {.count = 1, .reusable = false}}, SHIFT(234),
  [1056] = {.entry = {.count = 1, .reusable = false}}, SHIFT(327),
  [1058] = {.entry = {.count = 1, .reusable = false}}, SHIFT(373),
  [1060] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_string, 1),
  [1062] = {.entry = {.count = 1, .reusable = false}}, SHIFT(439),
  [1064] = {.entry = {.count = 1, .reusable = false}}, SHIFT(302),
  [1066] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_filename_repeat1, 2),
  [1068] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_filename_repeat1, 2), SHIFT_REPEAT(359),
  [1071] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_filename_repeat1, 2), SHIFT_REPEAT(268),
  [1074] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_filename_repeat1, 2), SHIFT_REPEAT(370),
  [1077] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_json_string_repeat1, 2),
  [1079] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_string_repeat1, 2), SHIFT_REPEAT(234),
  [1082] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_string_repeat1, 2), SHIFT_REPEAT(327),
  [1085] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_string_repeat1, 2), SHIFT_REPEAT(373),
  [1088] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_name, 2),
  [1090] = {.entry = {.count = 1, .reusable = false}}, SHIFT(507),
  [1092] = {.entry = {.count = 1, .reusable = false}}, SHIFT(512),
  [1094] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_key_string_repeat1, 2),
  [1096] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_string_repeat1, 2), SHIFT_REPEAT(449),
  [1099] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_string_repeat1, 2), SHIFT_REPEAT(259),
  [1102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_string_repeat1, 2), SHIFT_REPEAT(392),
  [1105] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_key_string_repeat1, 2), SHIFT_REPEAT(439),
  [1108] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_key_string_repeat1, 2), SHIFT_REPEAT(267),
  [1111] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_key_string_repeat1, 2), SHIFT_REPEAT(362),
  [1114] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_integer_repeat1, 2), SHIFT_REPEAT(251),
  [1117] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_filename_repeat1, 2), SHIFT_REPEAT(347),
  [1120] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_filename_repeat1, 2), SHIFT_REPEAT(258),
  [1123] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_filename_repeat1, 2), SHIFT_REPEAT(408),
  [1126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(315),
  [1128] = {.entry = {.count = 1, .reusable = false}}, SHIFT(297),
  [1130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(418),
  [1132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_quoted_string_content_repeat1, 2),
  [1134] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_string_content_repeat1, 2), SHIFT_REPEAT(311),
  [1137] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_string_content_repeat1, 2), SHIFT_REPEAT(203),
  [1140] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_string_content_repeat1, 2), SHIFT_REPEAT(228),
  [1143] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_string_content_repeat1, 2), SHIFT_REPEAT(282),
  [1146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_string_content, 1),
  [1148] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multiline_string_content_repeat1, 2), SHIFT_REPEAT(222),
  [1151] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multiline_string_content_repeat1, 2), SHIFT_REPEAT(225),
  [1154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_multiline_string_content_repeat1, 2),
  [1156] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multiline_string_content_repeat1, 2), SHIFT_REPEAT(276),
  [1159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [1161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [1163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_number, 1),
  [1165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [1167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [1169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(319),
  [1171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(446),
  [1173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [1175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(440),
  [1177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [1179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(419),
  [1181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [1183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline_string_content, 1),
  [1185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [1187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(441),
  [1189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [1191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(536),
  [1193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(460),
  [1195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [1197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(379),
  [1199] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_integer_repeat1, 2), SHIFT_REPEAT(285),
  [1202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneline_string_content, 1),
  [1204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [1206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [1208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(575),
  [1210] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_oneline_string_content_repeat1, 2), SHIFT_REPEAT(265),
  [1213] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_oneline_string_content_repeat1, 2), SHIFT_REPEAT(548),
  [1216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_oneline_string_content_repeat1, 2),
  [1218] = {.entry = {.count = 1, .reusable = false}}, SHIFT(223),
  [1220] = {.entry = {.count = 1, .reusable = false}}, SHIFT(358),
  [1222] = {.entry = {.count = 1, .reusable = false}}, SHIFT(283),
  [1224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_filename_content, 1),
  [1226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_string_content, 1),
  [1228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exponent, 3),
  [1230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exponent, 2),
  [1232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_filename_content_repeat1, 2),
  [1234] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_filename_content_repeat1, 2), SHIFT_REPEAT(359),
  [1237] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_filename_content_repeat1, 2), SHIFT_REPEAT(262),
  [1240] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_regex_content, 1),
  [1242] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_filename_content_repeat1, 2), SHIFT_REPEAT(347),
  [1245] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_filename_content_repeat1, 2), SHIFT_REPEAT(264),
  [1248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [1250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [1252] = {.entry = {.count = 1, .reusable = false}}, SHIFT(331),
  [1254] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_key_string_content, 1),
  [1256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_key_string_content_repeat1, 2),
  [1258] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_string_content_repeat1, 2), SHIFT_REPEAT(449),
  [1261] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_string_content_repeat1, 2), SHIFT_REPEAT(269),
  [1264] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_regex_content_repeat1, 2), SHIFT_REPEAT(460),
  [1267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_regex_content_repeat1, 2),
  [1269] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_regex_content_repeat1, 2), SHIFT_REPEAT(379),
  [1272] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_key_string_content_repeat1, 2), SHIFT_REPEAT(439),
  [1275] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_key_string_content_repeat1, 2), SHIFT_REPEAT(273),
  [1278] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_key_string_content_repeat1, 2),
  [1280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_number, 2),
  [1282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [1284] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline_string_text, 1),
  [1286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_value, 1),
  [1288] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_key_string_repeat1, 1),
  [1290] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline_string_escaped_char, 2),
  [1292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_oneline_hex_repeat1, 2),
  [1294] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_oneline_hex_repeat1, 2), SHIFT_REPEAT(342),
  [1297] = {.entry = {.count = 1, .reusable = false}}, SHIFT(284),
  [1299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [1301] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_string_text_repeat1, 2), SHIFT_REPEAT(284),
  [1304] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_multiline_string_content_repeat1, 1),
  [1306] = {.entry = {.count = 1, .reusable = false}}, SHIFT(478),
  [1308] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline_string_escaped_char, 3),
  [1310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [1312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [1314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [1316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [1318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [1320] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_invalid_quoted_string_escaped_char, 2),
  [1322] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneline_string_escaped_char, 3),
  [1324] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hexdigit, 1),
  [1326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_string, 2),
  [1328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_string_escaped_char, 2),
  [1330] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_key_string_escaped_char, 2),
  [1332] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_string_escaped_char, 6),
  [1334] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_method, 1),
  [1336] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_filename_escaped_char, 2),
  [1338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_string, 3),
  [1340] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_string_text, 1),
  [1342] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_string_escaped_char, 2),
  [1344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [1346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [1348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(502),
  [1350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [1352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [1354] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_string_content, 1),
  [1356] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_string_text, 1),
  [1358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [1360] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneline_string_escaped_char, 2),
  [1362] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneline_string_text, 2),
  [1364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(522),
  [1366] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_string_escaped_char, 2),
  [1368] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_string_escaped_char, 3),
  [1370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hexdigit, 1),
  [1372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_object, 4),
  [1374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [1376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [1378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [1380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [1382] = {.entry = {.count = 1, .reusable = false}}, SHIFT(307),
  [1384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(497),
  [1386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(492),
  [1388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_value, 2),
  [1390] = {.entry = {.count = 1, .reusable = false}}, SHIFT(505),
  [1392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [1394] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_regex_escaped_char, 2),
  [1396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hurl_file, 2),
  [1398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [1400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [1402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [1404] = {.entry = {.count = 1, .reusable = false}}, SHIFT(323),
  [1406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(475),
  [1408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(494),
  [1410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(479),
  [1412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_json_object_repeat1, 2),
  [1414] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_json_object_repeat1, 2), SHIFT_REPEAT(293),
  [1417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(541),
  [1419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_predicate_value, 1),
  [1421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_greater_predicate, 2),
  [1423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_greater_or_equal_predicate, 2),
  [1425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_array, 4),
  [1427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_less_predicate, 2),
  [1429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [1431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_less_or_equal_predicate, 2),
  [1433] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_regex_text, 1),
  [1435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_number, 3),
  [1437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_array, 3),
  [1439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_object, 3),
  [1441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_value, 3),
  [1443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_value, 1),
  [1445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_object, 2),
  [1447] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_json_array_repeat1, 2), SHIFT_REPEAT(148),
  [1450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_json_array_repeat1, 2),
  [1452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [1454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [1456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [1458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [1460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [1462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [1464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [1466] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_multipart_form_data_section_repeat1, 2), SHIFT_REPEAT(166),
  [1469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_key_value, 3),
  [1471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [1473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [1475] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_form_params_section_repeat1, 2), SHIFT_REPEAT(183),
  [1478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [1480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [1482] = {.entry = {.count = 1, .reusable = false}}, SHIFT(303),
  [1484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [1486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version, 1),
  [1488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [1490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [1492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [1494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [1496] = {.entry = {.count = 1, .reusable = false}}, SHIFT(324),
  [1498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_string, 3),
  [1500] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_predicate, 2),
  [1502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_key_string, 1, .production_id = 1),
  [1504] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contain_predicate, 2),
  [1506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [1508] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_end_with_predicate, 2),
  [1510] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_with_predicate, 2),
  [1512] = {.entry = {.count = 1, .reusable = false}}, SHIFT(354),
  [1514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [1516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [1518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [1520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [1522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [1524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [1526] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_not_equal_predicate, 2),
  [1528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_equal_predicate, 2),
  [1530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [1532] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_predicate, 2),
  [1534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_string, 6),
  [1536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [1538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(501),
  [1540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(500),
  [1542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [1544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [1546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [1548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [1550] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneline_file, 2),
  [1552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [1554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(533),
  [1556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [1558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [1560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [1562] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_string, 4),
  [1564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [1566] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_status, 1),
  [1568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [1570] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneline_string, 3),
  [1572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(532),
  [1574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(527),
  [1576] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneline_hex, 2),
  [1578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [1580] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_param, 4),
  [1582] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_contenttype, 1),
  [1584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [1586] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_predicate_func, 1),
  [1588] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_predicate, 1),
  [1590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [1592] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_collection_predicate, 1),
  [1594] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_predicate, 1),
  [1596] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_predicate, 1),
  [1598] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float_predicate, 1),
  [1600] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_form_params_section_repeat1, 2),
  [1602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [1604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [1606] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_predicate, 1),
  [1608] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 3),
  [1610] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneline_hex, 3),
  [1612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [1614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [1616] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exist_predicate, 1),
  [1618] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneline_base64, 3),
  [1620] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_multipart_form_data_section_repeat1, 2),
  [1622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [1624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [1626] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xml, 3),
  [1628] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneline_file, 3),
  [1630] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multipart_form_data_param, 1),
  [1632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [1634] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_string_type, 1),
  [1636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [1638] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_value, 4),
  [1640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [1642] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bytes, 1),
  [1644] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_match_predicate, 2),
  [1646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [1648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [1650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [1652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [1654] = {.entry = {.count = 1, .reusable = false}}, SHIFT(332),
  [1656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [1658] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneline_string, 2),
  [1660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [1662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [1664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [1666] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_string, 5),
  [1668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [1670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [1672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [1674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [1676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [1678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [1680] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [1684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [1686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [1688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [1690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [1692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [1694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [1696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [1698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [1700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [1702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [1704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [1706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(504),
  [1708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
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
