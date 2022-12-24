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
#define STATE_COUNT 525
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
  [50] = 22,
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
  [61] = 51,
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
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 107,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 57,
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
  [133] = 129,
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
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 150,
  [156] = 156,
  [157] = 151,
  [158] = 152,
  [159] = 154,
  [160] = 153,
  [161] = 146,
  [162] = 162,
  [163] = 163,
  [164] = 73,
  [165] = 76,
  [166] = 80,
  [167] = 167,
  [168] = 82,
  [169] = 66,
  [170] = 170,
  [171] = 67,
  [172] = 172,
  [173] = 72,
  [174] = 174,
  [175] = 65,
  [176] = 85,
  [177] = 75,
  [178] = 74,
  [179] = 84,
  [180] = 81,
  [181] = 181,
  [182] = 86,
  [183] = 71,
  [184] = 184,
  [185] = 70,
  [186] = 87,
  [187] = 69,
  [188] = 68,
  [189] = 83,
  [190] = 190,
  [191] = 79,
  [192] = 192,
  [193] = 88,
  [194] = 89,
  [195] = 78,
  [196] = 196,
  [197] = 64,
  [198] = 77,
  [199] = 199,
  [200] = 149,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 204,
  [205] = 162,
  [206] = 204,
  [207] = 207,
  [208] = 208,
  [209] = 209,
  [210] = 210,
  [211] = 211,
  [212] = 202,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 215,
  [222] = 222,
  [223] = 223,
  [224] = 219,
  [225] = 225,
  [226] = 216,
  [227] = 199,
  [228] = 167,
  [229] = 229,
  [230] = 230,
  [231] = 225,
  [232] = 232,
  [233] = 233,
  [234] = 234,
  [235] = 235,
  [236] = 236,
  [237] = 237,
  [238] = 238,
  [239] = 239,
  [240] = 240,
  [241] = 241,
  [242] = 242,
  [243] = 238,
  [244] = 201,
  [245] = 245,
  [246] = 240,
  [247] = 247,
  [248] = 248,
  [249] = 249,
  [250] = 250,
  [251] = 251,
  [252] = 252,
  [253] = 253,
  [254] = 254,
  [255] = 255,
  [256] = 256,
  [257] = 257,
  [258] = 256,
  [259] = 232,
  [260] = 260,
  [261] = 261,
  [262] = 232,
  [263] = 230,
  [264] = 264,
  [265] = 265,
  [266] = 238,
  [267] = 238,
  [268] = 268,
  [269] = 214,
  [270] = 270,
  [271] = 271,
  [272] = 272,
  [273] = 273,
  [274] = 274,
  [275] = 253,
  [276] = 238,
  [277] = 277,
  [278] = 232,
  [279] = 279,
  [280] = 280,
  [281] = 238,
  [282] = 238,
  [283] = 238,
  [284] = 238,
  [285] = 285,
  [286] = 286,
  [287] = 287,
  [288] = 268,
  [289] = 289,
  [290] = 290,
  [291] = 273,
  [292] = 292,
  [293] = 280,
  [294] = 273,
  [295] = 218,
  [296] = 273,
  [297] = 297,
  [298] = 298,
  [299] = 299,
  [300] = 299,
  [301] = 299,
  [302] = 299,
  [303] = 303,
  [304] = 299,
  [305] = 299,
  [306] = 306,
  [307] = 299,
  [308] = 306,
  [309] = 299,
  [310] = 306,
  [311] = 299,
  [312] = 312,
  [313] = 313,
  [314] = 314,
  [315] = 315,
  [316] = 316,
  [317] = 317,
  [318] = 318,
  [319] = 319,
  [320] = 299,
  [321] = 314,
  [322] = 238,
  [323] = 323,
  [324] = 313,
  [325] = 325,
  [326] = 315,
  [327] = 316,
  [328] = 328,
  [329] = 297,
  [330] = 317,
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
  [342] = 325,
  [343] = 343,
  [344] = 344,
  [345] = 345,
  [346] = 346,
  [347] = 347,
  [348] = 348,
  [349] = 349,
  [350] = 252,
  [351] = 351,
  [352] = 352,
  [353] = 353,
  [354] = 354,
  [355] = 319,
  [356] = 356,
  [357] = 306,
  [358] = 358,
  [359] = 359,
  [360] = 360,
  [361] = 361,
  [362] = 362,
  [363] = 363,
  [364] = 364,
  [365] = 365,
  [366] = 366,
  [367] = 367,
  [368] = 368,
  [369] = 367,
  [370] = 361,
  [371] = 371,
  [372] = 372,
  [373] = 373,
  [374] = 371,
  [375] = 372,
  [376] = 376,
  [377] = 377,
  [378] = 378,
  [379] = 379,
  [380] = 380,
  [381] = 381,
  [382] = 382,
  [383] = 383,
  [384] = 373,
  [385] = 385,
  [386] = 386,
  [387] = 387,
  [388] = 388,
  [389] = 389,
  [390] = 379,
  [391] = 391,
  [392] = 392,
  [393] = 393,
  [394] = 394,
  [395] = 395,
  [396] = 396,
  [397] = 397,
  [398] = 398,
  [399] = 399,
  [400] = 400,
  [401] = 401,
  [402] = 335,
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
  [413] = 413,
  [414] = 414,
  [415] = 415,
  [416] = 416,
  [417] = 417,
  [418] = 418,
  [419] = 419,
  [420] = 420,
  [421] = 421,
  [422] = 332,
  [423] = 333,
  [424] = 424,
  [425] = 425,
  [426] = 426,
  [427] = 359,
  [428] = 428,
  [429] = 429,
  [430] = 430,
  [431] = 431,
  [432] = 432,
  [433] = 433,
  [434] = 434,
  [435] = 435,
  [436] = 436,
  [437] = 437,
  [438] = 438,
  [439] = 352,
  [440] = 349,
  [441] = 441,
  [442] = 442,
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
  [461] = 461,
  [462] = 462,
  [463] = 463,
  [464] = 464,
  [465] = 343,
  [466] = 466,
  [467] = 467,
  [468] = 468,
  [469] = 469,
  [470] = 470,
  [471] = 336,
  [472] = 339,
  [473] = 473,
  [474] = 474,
  [475] = 337,
  [476] = 476,
  [477] = 477,
  [478] = 459,
  [479] = 479,
  [480] = 480,
  [481] = 481,
  [482] = 438,
  [483] = 483,
  [484] = 484,
  [485] = 485,
  [486] = 486,
  [487] = 487,
  [488] = 488,
  [489] = 257,
  [490] = 490,
  [491] = 251,
  [492] = 492,
  [493] = 493,
  [494] = 494,
  [495] = 446,
  [496] = 496,
  [497] = 497,
  [498] = 498,
  [499] = 499,
  [500] = 500,
  [501] = 501,
  [502] = 459,
  [503] = 503,
  [504] = 459,
  [505] = 505,
  [506] = 459,
  [507] = 459,
  [508] = 459,
  [509] = 459,
  [510] = 459,
  [511] = 459,
  [512] = 512,
  [513] = 513,
  [514] = 514,
  [515] = 515,
  [516] = 516,
  [517] = 517,
  [518] = 518,
  [519] = 519,
  [520] = 520,
  [521] = 521,
  [522] = 522,
  [523] = 523,
  [524] = 524,
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
      if (eof) ADVANCE(506);
      if (lookahead == 8) ADVANCE(636);
      if (lookahead == '\f') ADVANCE(637);
      if (lookahead == '!') ADVANCE(47);
      if (lookahead == '"') ADVANCE(627);
      if (lookahead == '#') ADVANCE(809);
      if (lookahead == '*') ADVANCE(552);
      if (lookahead == '+') ADVANCE(881);
      if (lookahead == ',') ADVANCE(848);
      if (lookahead == '-') ADVANCE(882);
      if (lookahead == '.') ADVANCE(878);
      if (lookahead == '/') ADVANCE(885);
      if (lookahead == ':') ADVANCE(569);
      if (lookahead == ';') ADVANCE(571);
      if (lookahead == '<') ADVANCE(608);
      if (lookahead == '=') ADVANCE(584);
      if (lookahead == '>') ADVANCE(603);
      if (lookahead == 'E') ADVANCE(880);
      if (lookahead == '[') ADVANCE(850);
      if (lookahead == '\\') ADVANCE(632);
      if (lookahead == ']') ADVANCE(853);
      if (lookahead == '`') ADVANCE(821);
      if (lookahead == 'b') ADVANCE(825);
      if (lookahead == 'e') ADVANCE(879);
      if (lookahead == 'f') ADVANCE(826);
      if (lookahead == 'n') ADVANCE(838);
      if (lookahead == 'r') ADVANCE(839);
      if (lookahead == 't') ADVANCE(840);
      if (lookahead == 'u') ADVANCE(642);
      if (lookahead == '{') ADVANCE(846);
      if (lookahead == '}') ADVANCE(847);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'd')) ADVANCE(862);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(551);
      if (anon_sym__character_set_1(lookahead)) SKIP(0)
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(862);
      END_STATE();
    case 1:
      if (lookahead == 8) ADVANCE(636);
      if (lookahead == '\t') ADVANCE(640);
      if (lookahead == '\n') ADVANCE(507);
      if (lookahead == '\f') ADVANCE(637);
      if (lookahead == '\r') ADVANCE(638);
      if (lookahead == '"') ADVANCE(627);
      if (lookahead == '#') ADVANCE(635);
      if (lookahead == '\\') ADVANCE(632);
      if (lookahead == 'u') ADVANCE(642);
      if (lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(634);
      if (lookahead != 0) ADVANCE(633);
      END_STATE();
    case 2:
      if (lookahead == 8) ADVANCE(636);
      if (lookahead == '\t') ADVANCE(641);
      if (lookahead == '\n') ADVANCE(508);
      if (lookahead == '\f') ADVANCE(637);
      if (lookahead == '\r') ADVANCE(639);
      if (lookahead == '#') ADVANCE(809);
      if (lookahead == '\\') ADVANCE(632);
      if (lookahead == 'u') ADVANCE(642);
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
      if (lookahead == '\n') ADVANCE(509);
      if (lookahead == '#') ADVANCE(502);
      if (lookahead == 'b') ADVANCE(170);
      if (lookahead == 'c') ADVANCE(362);
      if (lookahead == 'g') ADVANCE(399);
      if (lookahead == 'h') ADVANCE(226);
      if (lookahead == 'j') ADVANCE(433);
      if (lookahead == 'r') ADVANCE(218);
      if (lookahead == 't') ADVANCE(343);
      if (lookahead == 'u') ADVANCE(392);
      if (lookahead == 'x') ADVANCE(310);
      if (anon_sym_LF_character_set_1(lookahead)) SKIP(3)
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(509);
      if (lookahead == '#') ADVANCE(502);
      if (anon_sym_LF_character_set_1(lookahead)) SKIP(4)
      if (lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(509);
      if (lookahead == '#') ADVANCE(502);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(804);
      if (lookahead == ':') ADVANCE(569);
      if (lookahead == '\\') ADVANCE(632);
      if (lookahead == '{') ADVANCE(500);
      if (anon_sym_LF_character_set_1(lookahead)) SKIP(5)
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(510);
      if (lookahead == '#') ADVANCE(502);
      if (lookahead == '\\') ADVANCE(632);
      if (lookahead == 'f') ADVANCE(816);
      if (lookahead == 'n') ADVANCE(818);
      if (lookahead == 't') ADVANCE(817);
      if (lookahead == '{') ADVANCE(819);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(810);
      if (anon_sym_LF_character_set_1(lookahead)) ADVANCE(811);
      if (lookahead != 0) ADVANCE(810);
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(7)
      if (lookahead == '#') ADVANCE(502);
      if (lookahead == '\\') ADVANCE(632);
      if (lookahead == '`') ADVANCE(820);
      if (lookahead == '{') ADVANCE(819);
      if (anon_sym_LF_character_set_1(lookahead)) ADVANCE(814);
      if (lookahead != 0) ADVANCE(810);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(511);
      if (lookahead == ' ') SKIP(8)
      if (lookahead == '#') ADVANCE(502);
      if (lookahead == '\\') ADVANCE(632);
      if (lookahead == '{') ADVANCE(843);
      if (sym_filename_text_character_set_1(lookahead)) ADVANCE(841);
      if (lookahead != 0 &&
          lookahead != ';') ADVANCE(844);
      END_STATE();
    case 9:
      if (lookahead == '\n') SKIP(9)
      if (lookahead == '#') ADVANCE(887);
      if (lookahead == '/') ADVANCE(885);
      if (lookahead == '\\') ADVANCE(632);
      if (anon_sym_LF_character_set_1(lookahead)) ADVANCE(886);
      if (lookahead != 0) ADVANCE(888);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(624);
      if (lookahead == '#') ADVANCE(502);
      if (anon_sym_LF_character_set_1(lookahead)) SKIP(10)
      if (('+' <= lookahead && lookahead <= '-') ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(625);
      END_STATE();
    case 11:
      if (lookahead == '\n') SKIP(11)
      if (lookahead == '#') ADVANCE(891);
      if (anon_sym_LF_character_set_1(lookahead)) ADVANCE(890);
      if (lookahead != 0) ADVANCE(889);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(512);
      if (lookahead == '#') ADVANCE(502);
      if (lookahead == '\\') ADVANCE(632);
      if (lookahead == '{') ADVANCE(819);
      if (anon_sym_LF_character_set_1(lookahead)) ADVANCE(812);
      if (lookahead != 0) ADVANCE(810);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(513);
      if (lookahead == '#') ADVANCE(837);
      if (lookahead == '\\') ADVANCE(632);
      if (lookahead == '`') ADVANCE(835);
      if (lookahead == '{') ADVANCE(836);
      if (anon_sym_LF_character_set_1(lookahead)) ADVANCE(834);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(514);
      if (lookahead == '#') ADVANCE(502);
      if (lookahead == '\\') ADVANCE(632);
      if (lookahead == 'f') ADVANCE(815);
      if (lookahead == 'n') ADVANCE(818);
      if (lookahead == 't') ADVANCE(817);
      if (lookahead == '{') ADVANCE(819);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(810);
      if (anon_sym_LF_character_set_1(lookahead)) ADVANCE(813);
      if (lookahead != 0) ADVANCE(810);
      END_STATE();
    case 15:
      if (lookahead == '!') ADVANCE(47);
      if (lookahead == '"') ADVANCE(627);
      if (lookahead == '#') ADVANCE(502);
      if (lookahead == '+') ADVANCE(881);
      if (lookahead == ',') ADVANCE(848);
      if (lookahead == '-') ADVANCE(882);
      if (lookahead == '<') ADVANCE(608);
      if (lookahead == '=') ADVANCE(48);
      if (lookahead == '>') ADVANCE(603);
      if (lookahead == 'T') ADVANCE(345);
      if (lookahead == '[') ADVANCE(849);
      if (lookahead == ']') ADVANCE(853);
      if (lookahead == '`') ADVANCE(133);
      if (lookahead == 'b') ADVANCE(155);
      if (lookahead == 'c') ADVANCE(339);
      if (lookahead == 'e') ADVANCE(320);
      if (lookahead == 'f') ADVANCE(138);
      if (lookahead == 'g') ADVANCE(400);
      if (lookahead == 'h') ADVANCE(224);
      if (lookahead == 'i') ADVANCE(322);
      if (lookahead == 'l') ADVANCE(242);
      if (lookahead == 'm') ADVANCE(160);
      if (lookahead == 'n') ADVANCE(354);
      if (lookahead == 'r') ADVANCE(218);
      if (lookahead == 's') ADVANCE(467);
      if (lookahead == 't') ADVANCE(344);
      if (lookahead == 'u') ADVANCE(392);
      if (lookahead == '{') ADVANCE(846);
      if (lookahead == '}') ADVANCE(501);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(876);
      if (anon_sym__character_set_1(lookahead)) SKIP(15)
      END_STATE();
    case 16:
      if (lookahead == '"') ADVANCE(627);
      if (lookahead == '#') ADVANCE(809);
      if (lookahead == '\\') ADVANCE(632);
      if (lookahead == '`') ADVANCE(820);
      if (lookahead == 'b') ADVANCE(825);
      if (lookahead == 'f') ADVANCE(826);
      if (lookahead == 'n') ADVANCE(838);
      if (lookahead == 'r') ADVANCE(839);
      if (lookahead == 't') ADVANCE(840);
      if (lookahead == 'u') ADVANCE(642);
      if (anon_sym__character_set_1(lookahead)) SKIP(16)
      END_STATE();
    case 17:
      if (lookahead == '"') ADVANCE(627);
      if (lookahead == '#') ADVANCE(809);
      if (sym_key_string_text_character_set_1(lookahead)) ADVANCE(804);
      if (lookahead == ',') ADVANCE(845);
      if (lookahead == ';') ADVANCE(571);
      if (lookahead == '\\') ADVANCE(632);
      if (lookahead == 'f') ADVANCE(786);
      if (lookahead == 'n') ADVANCE(778);
      if (lookahead == 't') ADVANCE(751);
      if (lookahead == '{') ADVANCE(500);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(804);
      if (anon_sym__character_set_1(lookahead)) SKIP(17)
      END_STATE();
    case 18:
      if (lookahead == '"') ADVANCE(627);
      if (lookahead == '#') ADVANCE(502);
      if (lookahead == ',') ADVANCE(848);
      if (lookahead == '.') ADVANCE(878);
      if (lookahead == ':') ADVANCE(569);
      if (lookahead == '=') ADVANCE(583);
      if (lookahead == 'E') ADVANCE(880);
      if (lookahead == ']') ADVANCE(853);
      if (lookahead == 'b') ADVANCE(338);
      if (lookahead == 'c') ADVANCE(358);
      if (lookahead == 'd') ADVANCE(480);
      if (lookahead == 'e') ADVANCE(879);
      if (lookahead == 'h') ADVANCE(236);
      if (lookahead == 'j') ADVANCE(424);
      if (lookahead == 'm') ADVANCE(193);
      if (lookahead == 'r') ADVANCE(218);
      if (lookahead == 's') ADVANCE(260);
      if (lookahead == 'u') ADVANCE(387);
      if (lookahead == 'v') ADVANCE(151);
      if (lookahead == 'x') ADVANCE(369);
      if (lookahead == '}') ADVANCE(847);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(876);
      if (anon_sym__character_set_1(lookahead)) SKIP(18)
      END_STATE();
    case 19:
      if (lookahead == '"') ADVANCE(627);
      if (lookahead == '#') ADVANCE(628);
      if (lookahead == '\\') ADVANCE(632);
      if (lookahead == '{') ADVANCE(630);
      if (anon_sym__character_set_1(lookahead)) ADVANCE(629);
      if (lookahead != 0) ADVANCE(631);
      END_STATE();
    case 20:
      if (lookahead == '"') ADVANCE(627);
      if (lookahead == '#') ADVANCE(857);
      if (lookahead == '\\') ADVANCE(632);
      if (lookahead == '{') ADVANCE(856);
      if (anon_sym__character_set_1(lookahead)) ADVANCE(855);
      if (lookahead != 0) ADVANCE(854);
      END_STATE();
    case 21:
      if (lookahead == '#') ADVANCE(502);
      if (lookahead == '*') ADVANCE(552);
      if (lookahead == '=') ADVANCE(583);
      if (lookahead == 'c') ADVANCE(362);
      if (lookahead == 'h') ADVANCE(455);
      if (lookahead == 'r') ADVANCE(218);
      if (lookahead == 't') ADVANCE(343);
      if (lookahead == 'u') ADVANCE(392);
      if (lookahead == '}') ADVANCE(501);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(551);
      if (anon_sym__character_set_1(lookahead)) SKIP(21)
      END_STATE();
    case 22:
      if (lookahead == '#') ADVANCE(502);
      if (lookahead == ';') ADVANCE(571);
      if (lookahead == '\\') ADVANCE(632);
      if (lookahead == '{') ADVANCE(843);
      if (lookahead == '\n' ||
          lookahead == ' ') SKIP(22)
      if (sym_filename_text_character_set_1(lookahead)) ADVANCE(842);
      if (lookahead != 0) ADVANCE(844);
      END_STATE();
    case 23:
      if (lookahead == '#') ADVANCE(502);
      if (lookahead == ';') ADVANCE(571);
      if (lookahead == '}') ADVANCE(847);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(877);
      if (anon_sym__character_set_1(lookahead)) SKIP(23)
      END_STATE();
    case 24:
      if (lookahead == '#') ADVANCE(502);
      if (anon_sym__character_set_1(lookahead)) SKIP(24)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(862);
      END_STATE();
    case 25:
      if (lookahead == '#') ADVANCE(502);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(804);
      if (lookahead == ':') ADVANCE(569);
      if (lookahead == '\\') ADVANCE(632);
      if (lookahead == '{') ADVANCE(500);
      if (anon_sym__character_set_1(lookahead)) SKIP(25)
      END_STATE();
    case 26:
      if (lookahead == '#') ADVANCE(824);
      if (anon_sym__character_set_1(lookahead)) ADVANCE(823);
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(822);
      END_STATE();
    case 27:
      if (lookahead == '*') ADVANCE(550);
      if (lookahead == '1') ADVANCE(36);
      if (lookahead == '2') ADVANCE(549);
      END_STATE();
    case 28:
      if (lookahead == ',') ADVANCE(626);
      END_STATE();
    case 29:
      if (lookahead == ',') ADVANCE(570);
      END_STATE();
    case 30:
      if (lookahead == ',') ADVANCE(623);
      END_STATE();
    case 31:
      if (lookahead == ',') ADVANCE(54);
      END_STATE();
    case 32:
      if (lookahead == ',') ADVANCE(64);
      END_STATE();
    case 33:
      if (lookahead == '-') ADVANCE(491);
      END_STATE();
    case 34:
      if (lookahead == '-') ADVANCE(183);
      END_STATE();
    case 35:
      if (lookahead == '-') ADVANCE(395);
      END_STATE();
    case 36:
      if (lookahead == '.') ADVANCE(38);
      END_STATE();
    case 37:
      if (lookahead == '/') ADVANCE(27);
      END_STATE();
    case 38:
      if (lookahead == '0') ADVANCE(547);
      if (lookahead == '1') ADVANCE(548);
      END_STATE();
    case 39:
      if (lookahead == '2') ADVANCE(43);
      END_STATE();
    case 40:
      if (lookahead == '4') ADVANCE(828);
      END_STATE();
    case 41:
      if (lookahead == '4') ADVANCE(30);
      END_STATE();
    case 42:
      if (lookahead == '5') ADVANCE(595);
      END_STATE();
    case 43:
      if (lookahead == '5') ADVANCE(45);
      END_STATE();
    case 44:
      if (lookahead == '6') ADVANCE(41);
      END_STATE();
    case 45:
      if (lookahead == '6') ADVANCE(594);
      END_STATE();
    case 46:
      if (lookahead == '6') ADVANCE(40);
      END_STATE();
    case 47:
      if (lookahead == '=') ADVANCE(601);
      END_STATE();
    case 48:
      if (lookahead == '=') ADVANCE(599);
      END_STATE();
    case 49:
      if (lookahead == 'A') ADVANCE(60);
      END_STATE();
    case 50:
      if (lookahead == 'A') ADVANCE(58);
      END_STATE();
    case 51:
      if (lookahead == 'A') ADVANCE(478);
      END_STATE();
    case 52:
      if (lookahead == 'A') ADVANCE(117);
      if (lookahead == 'O') ADVANCE(112);
      if (lookahead == 'R') ADVANCE(101);
      if (lookahead == 'U') ADVANCE(108);
      END_STATE();
    case 53:
      if (lookahead == 'B') ADVANCE(350);
      if (lookahead == 'C') ADVANCE(349);
      if (lookahead == 'F') ADVANCE(295);
      if (lookahead == 'I') ADVANCE(328);
      if (lookahead == 'S') ADVANCE(463);
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
      if (lookahead == 'D') ADVANCE(517);
      END_STATE();
    case 61:
      if (lookahead == 'D') ADVANCE(543);
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
      if (lookahead == 'E') ADVANCE(537);
      END_STATE();
    case 69:
      if (lookahead == 'E') ADVANCE(529);
      END_STATE();
    case 70:
      if (lookahead == 'E') ADVANCE(523);
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
      if (lookahead == 'E') ADVANCE(437);
      if (lookahead == 'U') ADVANCE(333);
      END_STATE();
    case 75:
      if (lookahead == 'E') ADVANCE(373);
      END_STATE();
    case 76:
      if (lookahead == 'E') ADVANCE(374);
      END_STATE();
    case 77:
      if (lookahead == 'F') ADVANCE(84);
      END_STATE();
    case 78:
      if (lookahead == 'F') ADVANCE(356);
      END_STATE();
    case 79:
      if (lookahead == 'G') ADVANCE(68);
      END_STATE();
    case 80:
      if (lookahead == 'H') ADVANCE(531);
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
      if (lookahead == 'K') ADVANCE(533);
      END_STATE();
    case 88:
      if (lookahead == 'K') ADVANCE(539);
      END_STATE();
    case 89:
      if (lookahead == 'K') ADVANCE(535);
      END_STATE();
    case 90:
      if (lookahead == 'K') ADVANCE(541);
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
      if (lookahead == 'T') ADVANCE(521);
      END_STATE();
    case 109:
      if (lookahead == 'R') ADVANCE(50);
      END_STATE();
    case 110:
      if (lookahead == 'S') ADVANCE(527);
      END_STATE();
    case 111:
      if (lookahead == 'S') ADVANCE(458);
      END_STATE();
    case 112:
      if (lookahead == 'S') ADVANCE(114);
      END_STATE();
    case 113:
      if (lookahead == 'T') ADVANCE(515);
      END_STATE();
    case 114:
      if (lookahead == 'T') ADVANCE(519);
      END_STATE();
    case 115:
      if (lookahead == 'T') ADVANCE(525);
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
      if (lookahead == 'W') ADVANCE(545);
      END_STATE();
    case 123:
      if (lookahead == 'W') ADVANCE(279);
      END_STATE();
    case 124:
      if (lookahead == 'W') ADVANCE(280);
      END_STATE();
    case 125:
      if (lookahead == ']') ADVANCE(565);
      END_STATE();
    case 126:
      if (lookahead == ']') ADVANCE(561);
      END_STATE();
    case 127:
      if (lookahead == ']') ADVANCE(567);
      END_STATE();
    case 128:
      if (lookahead == ']') ADVANCE(563);
      END_STATE();
    case 129:
      if (lookahead == ']') ADVANCE(553);
      END_STATE();
    case 130:
      if (lookahead == ']') ADVANCE(557);
      END_STATE();
    case 131:
      if (lookahead == ']') ADVANCE(559);
      END_STATE();
    case 132:
      if (lookahead == ']') ADVANCE(555);
      END_STATE();
    case 133:
      if (lookahead == '`') ADVANCE(134);
      END_STATE();
    case 134:
      if (lookahead == '`') ADVANCE(827);
      END_STATE();
    case 135:
      if (lookahead == 'a') ADVANCE(493);
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
      if (lookahead == 'o') ADVANCE(357);
      END_STATE();
    case 141:
      if (lookahead == 'a') ADVANCE(200);
      END_STATE();
    case 142:
      if (lookahead == 'a') ADVANCE(200);
      if (lookahead == 'x') ADVANCE(28);
      END_STATE();
    case 143:
      if (lookahead == 'a') ADVANCE(406);
      END_STATE();
    case 144:
      if (lookahead == 'a') ADVANCE(366);
      END_STATE();
    case 145:
      if (lookahead == 'a') ADVANCE(365);
      END_STATE();
    case 146:
      if (lookahead == 'a') ADVANCE(382);
      END_STATE();
    case 147:
      if (lookahead == 'a') ADVANCE(286);
      END_STATE();
    case 148:
      if (lookahead == 'a') ADVANCE(456);
      END_STATE();
    case 149:
      if (lookahead == 'a') ADVANCE(131);
      END_STATE();
    case 150:
      if (lookahead == 'a') ADVANCE(450);
      END_STATE();
    case 151:
      if (lookahead == 'a') ADVANCE(390);
      END_STATE();
    case 152:
      if (lookahead == 'a') ADVANCE(390);
      if (lookahead == 'e') ADVANCE(377);
      END_STATE();
    case 153:
      if (lookahead == 'a') ADVANCE(281);
      END_STATE();
    case 154:
      if (lookahead == 'a') ADVANCE(314);
      END_STATE();
    case 155:
      if (lookahead == 'a') ADVANCE(425);
      END_STATE();
    case 156:
      if (lookahead == 'a') ADVANCE(425);
      if (lookahead == 'o') ADVANCE(195);
      if (lookahead == 'y') ADVANCE(468);
      END_STATE();
    case 157:
      if (lookahead == 'a') ADVANCE(452);
      END_STATE();
    case 158:
      if (lookahead == 'a') ADVANCE(315);
      END_STATE();
    case 159:
      if (lookahead == 'a') ADVANCE(316);
      END_STATE();
    case 160:
      if (lookahead == 'a') ADVANCE(460);
      END_STATE();
    case 161:
      if (lookahead == 'a') ADVANCE(448);
      END_STATE();
    case 162:
      if (lookahead == 'a') ADVANCE(364);
      if (lookahead == 'o') ADVANCE(336);
      END_STATE();
    case 163:
      if (lookahead == 'a') ADVANCE(496);
      END_STATE();
    case 164:
      if (lookahead == 'a') ADVANCE(297);
      END_STATE();
    case 165:
      if (lookahead == 'a') ADVANCE(457);
      END_STATE();
    case 166:
      if (lookahead == 'a') ADVANCE(308);
      END_STATE();
    case 167:
      if (lookahead == 'a') ADVANCE(389);
      END_STATE();
    case 168:
      if (lookahead == 'a') ADVANCE(367);
      END_STATE();
    case 169:
      if (lookahead == 'a') ADVANCE(402);
      END_STATE();
    case 170:
      if (lookahead == 'a') ADVANCE(438);
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
      if (lookahead == 'a') ADVANCE(466);
      END_STATE();
    case 175:
      if (lookahead == 'a') ADVANCE(404);
      END_STATE();
    case 176:
      if (lookahead == 'a') ADVANCE(472);
      END_STATE();
    case 177:
      if (lookahead == 'a') ADVANCE(469);
      END_STATE();
    case 178:
      if (lookahead == 'b') ADVANCE(353);
      if (lookahead == 'y') ADVANCE(33);
      END_STATE();
    case 179:
      if (lookahead == 'b') ADVANCE(296);
      END_STATE();
    case 180:
      if (lookahead == 'b') ADVANCE(355);
      END_STATE();
    case 181:
      if (lookahead == 'c') ADVANCE(51);
      END_STATE();
    case 182:
      if (lookahead == 'c') ADVANCE(263);
      END_STATE();
    case 183:
      if (lookahead == 'c') ADVANCE(348);
      END_STATE();
    case 184:
      if (lookahead == 'c') ADVANCE(293);
      END_STATE();
    case 185:
      if (lookahead == 'c') ADVANCE(144);
      END_STATE();
    case 186:
      if (lookahead == 'c') ADVANCE(347);
      END_STATE();
    case 187:
      if (lookahead == 'c') ADVANCE(168);
      END_STATE();
    case 188:
      if (lookahead == 'c') ADVANCE(359);
      END_STATE();
    case 189:
      if (lookahead == 'c') ADVANCE(245);
      END_STATE();
    case 190:
      if (lookahead == 'c') ADVANCE(484);
      END_STATE();
    case 191:
      if (lookahead == 'c') ADVANCE(470);
      END_STATE();
    case 192:
      if (lookahead == 'c') ADVANCE(177);
      END_STATE();
    case 193:
      if (lookahead == 'd') ADVANCE(42);
      END_STATE();
    case 194:
      if (lookahead == 'd') ADVANCE(622);
      END_STATE();
    case 195:
      if (lookahead == 'd') ADVANCE(498);
      END_STATE();
    case 196:
      if (lookahead == 'd') ADVANCE(277);
      END_STATE();
    case 197:
      if (lookahead == 'd') ADVANCE(421);
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
      if (lookahead == 'e') ADVANCE(870);
      END_STATE();
    case 206:
      if (lookahead == 'e') ADVANCE(872);
      END_STATE();
    case 207:
      if (lookahead == 'e') ADVANCE(588);
      END_STATE();
    case 208:
      if (lookahead == 'e') ADVANCE(581);
      END_STATE();
    case 209:
      if (lookahead == 'e') ADVANCE(575);
      END_STATE();
    case 210:
      if (lookahead == 'e') ADVANCE(580);
      END_STATE();
    case 211:
      if (lookahead == 'e') ADVANCE(582);
      END_STATE();
    case 212:
      if (lookahead == 'e') ADVANCE(248);
      END_STATE();
    case 213:
      if (lookahead == 'e') ADVANCE(866);
      END_STATE();
    case 214:
      if (lookahead == 'e') ADVANCE(865);
      END_STATE();
    case 215:
      if (lookahead == 'e') ADVANCE(867);
      END_STATE();
    case 216:
      if (lookahead == 'e') ADVANCE(868);
      END_STATE();
    case 217:
      if (lookahead == 'e') ADVANCE(376);
      END_STATE();
    case 218:
      if (lookahead == 'e') ADVANCE(250);
      END_STATE();
    case 219:
      if (lookahead == 'e') ADVANCE(494);
      END_STATE();
    case 220:
      if (lookahead == 'e') ADVANCE(29);
      END_STATE();
    case 221:
      if (lookahead == 'e') ADVANCE(383);
      END_STATE();
    case 222:
      if (lookahead == 'e') ADVANCE(252);
      END_STATE();
    case 223:
      if (lookahead == 'e') ADVANCE(196);
      END_STATE();
    case 224:
      if (lookahead == 'e') ADVANCE(492);
      if (lookahead == 't') ADVANCE(309);
      END_STATE();
    case 225:
      if (lookahead == 'e') ADVANCE(190);
      END_STATE();
    case 226:
      if (lookahead == 'e') ADVANCE(495);
      if (lookahead == 't') ADVANCE(309);
      END_STATE();
    case 227:
      if (lookahead == 'e') ADVANCE(420);
      END_STATE();
    case 228:
      if (lookahead == 'e') ADVANCE(32);
      END_STATE();
    case 229:
      if (lookahead == 'e') ADVANCE(423);
      END_STATE();
    case 230:
      if (lookahead == 'e') ADVANCE(194);
      END_STATE();
    case 231:
      if (lookahead == 'e') ADVANCE(191);
      END_STATE();
    case 232:
      if (lookahead == 'e') ADVANCE(408);
      END_STATE();
    case 233:
      if (lookahead == 'e') ADVANCE(378);
      END_STATE();
    case 234:
      if (lookahead == 'e') ADVANCE(158);
      END_STATE();
    case 235:
      if (lookahead == 'e') ADVANCE(380);
      END_STATE();
    case 236:
      if (lookahead == 'e') ADVANCE(141);
      END_STATE();
    case 237:
      if (lookahead == 'e') ADVANCE(381);
      END_STATE();
    case 238:
      if (lookahead == 'e') ADVANCE(403);
      END_STATE();
    case 239:
      if (lookahead == 'e') ADVANCE(379);
      END_STATE();
    case 240:
      if (lookahead == 'e') ADVANCE(413);
      END_STATE();
    case 241:
      if (lookahead == 'e') ADVANCE(415);
      END_STATE();
    case 242:
      if (lookahead == 'e') ADVANCE(434);
      END_STATE();
    case 243:
      if (lookahead == 'e') ADVANCE(46);
      END_STATE();
    case 244:
      if (lookahead == 'e') ADVANCE(186);
      END_STATE();
    case 245:
      if (lookahead == 'e') ADVANCE(394);
      END_STATE();
    case 246:
      if (lookahead == 'e') ADVANCE(176);
      END_STATE();
    case 247:
      if (lookahead == 'e') ADVANCE(439);
      END_STATE();
    case 248:
      if (lookahead == 'f') ADVANCE(275);
      END_STATE();
    case 249:
      if (lookahead == 'g') ADVANCE(620);
      END_STATE();
    case 250:
      if (lookahead == 'g') ADVANCE(219);
      END_STATE();
    case 251:
      if (lookahead == 'g') ADVANCE(219);
      if (lookahead == 't') ADVANCE(385);
      END_STATE();
    case 252:
      if (lookahead == 'g') ADVANCE(239);
      END_STATE();
    case 253:
      if (lookahead == 'g') ADVANCE(107);
      END_STATE();
    case 254:
      if (lookahead == 'h') ADVANCE(590);
      END_STATE();
    case 255:
      if (lookahead == 'h') ADVANCE(591);
      END_STATE();
    case 256:
      if (lookahead == 'h') ADVANCE(612);
      END_STATE();
    case 257:
      if (lookahead == 'h') ADVANCE(611);
      END_STATE();
    case 258:
      if (lookahead == 'h') ADVANCE(371);
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
      if (lookahead == 'i') ADVANCE(368);
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
      if (lookahead == 'i') ADVANCE(342);
      END_STATE();
    case 271:
      if (lookahead == 'i') ADVANCE(346);
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
      if (lookahead == 'i') ADVANCE(351);
      END_STATE();
    case 277:
      if (lookahead == 'i') ADVANCE(398);
      END_STATE();
    case 278:
      if (lookahead == 'i') ADVANCE(436);
      END_STATE();
    case 279:
      if (lookahead == 'i') ADVANCE(459);
      END_STATE();
    case 280:
      if (lookahead == 'i') ADVANCE(461);
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
      if (lookahead == 'l') ADVANCE(586);
      END_STATE();
    case 285:
      if (lookahead == 'l') ADVANCE(874);
      END_STATE();
    case 286:
      if (lookahead == 'l') ADVANCE(578);
      END_STATE();
    case 287:
      if (lookahead == 'l') ADVANCE(63);
      END_STATE();
    case 288:
      if (lookahead == 'l') ADVANCE(74);
      END_STATE();
    case 289:
      if (lookahead == 'l') ADVANCE(831);
      END_STATE();
    case 290:
      if (lookahead == 'l') ADVANCE(832);
      END_STATE();
    case 291:
      if (lookahead == 'l') ADVANCE(285);
      END_STATE();
    case 292:
      if (lookahead == 'l') ADVANCE(220);
      END_STATE();
    case 293:
      if (lookahead == 'l') ADVANCE(479);
      END_STATE();
    case 294:
      if (lookahead == 'l') ADVANCE(430);
      END_STATE();
    case 295:
      if (lookahead == 'l') ADVANCE(361);
      END_STATE();
    case 296:
      if (lookahead == 'l') ADVANCE(210);
      END_STATE();
    case 297:
      if (lookahead == 'l') ADVANCE(411);
      END_STATE();
    case 298:
      if (lookahead == 'l') ADVANCE(234);
      END_STATE();
    case 299:
      if (lookahead == 'l') ADVANCE(231);
      END_STATE();
    case 300:
      if (lookahead == 'l') ADVANCE(416);
      END_STATE();
    case 301:
      if (lookahead == 'l') ADVANCE(417);
      END_STATE();
    case 302:
      if (lookahead == 'l') ADVANCE(418);
      END_STATE();
    case 303:
      if (lookahead == 'l') ADVANCE(454);
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
      if (lookahead == 'm') ADVANCE(426);
      END_STATE();
    case 308:
      if (lookahead == 'm') ADVANCE(428);
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
      if (lookahead == 'n') ADVANCE(593);
      END_STATE();
    case 313:
      if (lookahead == 'n') ADVANCE(574);
      END_STATE();
    case 314:
      if (lookahead == 'n') ADVANCE(606);
      END_STATE();
    case 315:
      if (lookahead == 'n') ADVANCE(619);
      END_STATE();
    case 316:
      if (lookahead == 'n') ADVANCE(602);
      END_STATE();
    case 317:
      if (lookahead == 'n') ADVANCE(621);
      END_STATE();
    case 318:
      if (lookahead == 'n') ADVANCE(830);
      END_STATE();
    case 319:
      if (lookahead == 'n') ADVANCE(249);
      END_STATE();
    case 320:
      if (lookahead == 'n') ADVANCE(197);
      if (lookahead == 'q') ADVANCE(482);
      if (lookahead == 'x') ADVANCE(278);
      END_STATE();
    case 321:
      if (lookahead == 'n') ADVANCE(422);
      END_STATE();
    case 322:
      if (lookahead == 'n') ADVANCE(184);
      if (lookahead == 's') ADVANCE(53);
      END_STATE();
    case 323:
      if (lookahead == 'n') ADVANCE(427);
      END_STATE();
    case 324:
      if (lookahead == 'n') ADVANCE(471);
      END_STATE();
    case 325:
      if (lookahead == 'n') ADVANCE(444);
      END_STATE();
    case 326:
      if (lookahead == 'n') ADVANCE(462);
      if (lookahead == 'u') ADVANCE(327);
      END_STATE();
    case 327:
      if (lookahead == 'n') ADVANCE(446);
      END_STATE();
    case 328:
      if (lookahead == 'n') ADVANCE(464);
      END_STATE();
    case 329:
      if (lookahead == 'n') ADVANCE(447);
      END_STATE();
    case 330:
      if (lookahead == 'n') ADVANCE(414);
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
      if (lookahead == 'n') ADVANCE(370);
      END_STATE();
    case 335:
      if (lookahead == 'o') ADVANCE(375);
      END_STATE();
    case 336:
      if (lookahead == 'o') ADVANCE(282);
      END_STATE();
    case 337:
      if (lookahead == 'o') ADVANCE(321);
      END_STATE();
    case 338:
      if (lookahead == 'o') ADVANCE(195);
      if (lookahead == 'y') ADVANCE(468);
      END_STATE();
    case 339:
      if (lookahead == 'o') ADVANCE(326);
      END_STATE();
    case 340:
      if (lookahead == 'o') ADVANCE(192);
      END_STATE();
    case 341:
      if (lookahead == 'o') ADVANCE(334);
      END_STATE();
    case 342:
      if (lookahead == 'o') ADVANCE(312);
      END_STATE();
    case 343:
      if (lookahead == 'o') ADVANCE(86);
      END_STATE();
    case 344:
      if (lookahead == 'o') ADVANCE(86);
      if (lookahead == 'r') ADVANCE(481);
      END_STATE();
    case 345:
      if (lookahead == 'o') ADVANCE(31);
      END_STATE();
    case 346:
      if (lookahead == 'o') ADVANCE(313);
      END_STATE();
    case 347:
      if (lookahead == 'o') ADVANCE(198);
      END_STATE();
    case 348:
      if (lookahead == 'o') ADVANCE(485);
      END_STATE();
    case 349:
      if (lookahead == 'o') ADVANCE(304);
      END_STATE();
    case 350:
      if (lookahead == 'o') ADVANCE(360);
      END_STATE();
    case 351:
      if (lookahead == 'o') ADVANCE(317);
      END_STATE();
    case 352:
      if (lookahead == 'o') ADVANCE(318);
      END_STATE();
    case 353:
      if (lookahead == 'o') ADVANCE(431);
      END_STATE();
    case 354:
      if (lookahead == 'o') ADVANCE(445);
      if (lookahead == 'u') ADVANCE(291);
      END_STATE();
    case 355:
      if (lookahead == 'o') ADVANCE(432);
      END_STATE();
    case 356:
      if (lookahead == 'o') ADVANCE(384);
      END_STATE();
    case 357:
      if (lookahead == 'o') ADVANCE(283);
      END_STATE();
    case 358:
      if (lookahead == 'o') ADVANCE(357);
      END_STATE();
    case 359:
      if (lookahead == 'o') ADVANCE(199);
      END_STATE();
    case 360:
      if (lookahead == 'o') ADVANCE(298);
      END_STATE();
    case 361:
      if (lookahead == 'o') ADVANCE(161);
      END_STATE();
    case 362:
      if (lookahead == 'o') ADVANCE(486);
      END_STATE();
    case 363:
      if (lookahead == 'p') ADVANCE(449);
      END_STATE();
    case 364:
      if (lookahead == 'p') ADVANCE(451);
      END_STATE();
    case 365:
      if (lookahead == 'p') ADVANCE(258);
      END_STATE();
    case 366:
      if (lookahead == 'p') ADVANCE(215);
      END_STATE();
    case 367:
      if (lookahead == 'p') ADVANCE(216);
      END_STATE();
    case 368:
      if (lookahead == 'p') ADVANCE(167);
      END_STATE();
    case 369:
      if (lookahead == 'p') ADVANCE(150);
      END_STATE();
    case 370:
      if (lookahead == 'p') ADVANCE(157);
      END_STATE();
    case 371:
      if (lookahead == 'q') ADVANCE(290);
      END_STATE();
    case 372:
      if (lookahead == 'q') ADVANCE(487);
      END_STATE();
    case 373:
      if (lookahead == 'q') ADVANCE(488);
      END_STATE();
    case 374:
      if (lookahead == 'q') ADVANCE(489);
      END_STATE();
    case 375:
      if (lookahead == 'r') ADVANCE(305);
      END_STATE();
    case 376:
      if (lookahead == 'r') ADVANCE(497);
      END_STATE();
    case 377:
      if (lookahead == 'r') ADVANCE(178);
      END_STATE();
    case 378:
      if (lookahead == 'r') ADVANCE(587);
      END_STATE();
    case 379:
      if (lookahead == 'r') ADVANCE(617);
      END_STATE();
    case 380:
      if (lookahead == 'r') ADVANCE(180);
      END_STATE();
    case 381:
      if (lookahead == 'r') ADVANCE(490);
      END_STATE();
    case 382:
      if (lookahead == 'r') ADVANCE(139);
      END_STATE();
    case 383:
      if (lookahead == 'r') ADVANCE(453);
      END_STATE();
    case 384:
      if (lookahead == 'r') ADVANCE(306);
      END_STATE();
    case 385:
      if (lookahead == 'r') ADVANCE(499);
      END_STATE();
    case 386:
      if (lookahead == 'r') ADVANCE(481);
      END_STATE();
    case 387:
      if (lookahead == 'r') ADVANCE(284);
      END_STATE();
    case 388:
      if (lookahead == 'r') ADVANCE(267);
      END_STATE();
    case 389:
      if (lookahead == 'r') ADVANCE(442);
      END_STATE();
    case 390:
      if (lookahead == 'r') ADVANCE(272);
      END_STATE();
    case 391:
      if (lookahead == 'r') ADVANCE(174);
      END_STATE();
    case 392:
      if (lookahead == 'r') ADVANCE(287);
      END_STATE();
    case 393:
      if (lookahead == 'r') ADVANCE(75);
      END_STATE();
    case 394:
      if (lookahead == 'r') ADVANCE(443);
      END_STATE();
    case 395:
      if (lookahead == 'r') ADVANCE(223);
      END_STATE();
    case 396:
      if (lookahead == 'r') ADVANCE(273);
      END_STATE();
    case 397:
      if (lookahead == 'r') ADVANCE(209);
      END_STATE();
    case 398:
      if (lookahead == 'r') ADVANCE(410);
      END_STATE();
    case 399:
      if (lookahead == 'r') ADVANCE(145);
      END_STATE();
    case 400:
      if (lookahead == 'r') ADVANCE(246);
      END_STATE();
    case 401:
      if (lookahead == 'r') ADVANCE(229);
      END_STATE();
    case 402:
      if (lookahead == 'r') ADVANCE(166);
      END_STATE();
    case 403:
      if (lookahead == 'r') ADVANCE(121);
      END_STATE();
    case 404:
      if (lookahead == 'r') ADVANCE(473);
      END_STATE();
    case 405:
      if (lookahead == 'r') ADVANCE(76);
      END_STATE();
    case 406:
      if (lookahead == 's') ADVANCE(264);
      END_STATE();
    case 407:
      if (lookahead == 's') ADVANCE(125);
      END_STATE();
    case 408:
      if (lookahead == 's') ADVANCE(596);
      END_STATE();
    case 409:
      if (lookahead == 's') ADVANCE(585);
      END_STATE();
    case 410:
      if (lookahead == 's') ADVANCE(576);
      END_STATE();
    case 411:
      if (lookahead == 's') ADVANCE(598);
      END_STATE();
    case 412:
      if (lookahead == 's') ADVANCE(615);
      END_STATE();
    case 413:
      if (lookahead == 's') ADVANCE(614);
      END_STATE();
    case 414:
      if (lookahead == 's') ADVANCE(613);
      END_STATE();
    case 415:
      if (lookahead == 's') ADVANCE(616);
      END_STATE();
    case 416:
      if (lookahead == 's') ADVANCE(600);
      END_STATE();
    case 417:
      if (lookahead == 's') ADVANCE(609);
      END_STATE();
    case 418:
      if (lookahead == 's') ADVANCE(604);
      END_STATE();
    case 419:
      if (lookahead == 's') ADVANCE(435);
      END_STATE();
    case 420:
      if (lookahead == 's') ADVANCE(126);
      END_STATE();
    case 421:
      if (lookahead == 's') ADVANCE(123);
      END_STATE();
    case 422:
      if (lookahead == 's') ADVANCE(127);
      END_STATE();
    case 423:
      if (lookahead == 's') ADVANCE(128);
      END_STATE();
    case 424:
      if (lookahead == 's') ADVANCE(341);
      END_STATE();
    case 425:
      if (lookahead == 's') ADVANCE(204);
      END_STATE();
    case 426:
      if (lookahead == 's') ADVANCE(130);
      END_STATE();
    case 427:
      if (lookahead == 's') ADVANCE(225);
      END_STATE();
    case 428:
      if (lookahead == 's') ADVANCE(132);
      END_STATE();
    case 429:
      if (lookahead == 's') ADVANCE(119);
      END_STATE();
    case 430:
      if (lookahead == 's') ADVANCE(206);
      END_STATE();
    case 431:
      if (lookahead == 's') ADVANCE(208);
      END_STATE();
    case 432:
      if (lookahead == 's') ADVANCE(211);
      END_STATE();
    case 433:
      if (lookahead == 's') ADVANCE(352);
      END_STATE();
    case 434:
      if (lookahead == 's') ADVANCE(429);
      END_STATE();
    case 435:
      if (lookahead == 's') ADVANCE(221);
      END_STATE();
    case 436:
      if (lookahead == 's') ADVANCE(465);
      END_STATE();
    case 437:
      if (lookahead == 's') ADVANCE(185);
      END_STATE();
    case 438:
      if (lookahead == 's') ADVANCE(243);
      END_STATE();
    case 439:
      if (lookahead == 's') ADVANCE(187);
      END_STATE();
    case 440:
      if (lookahead == 's') ADVANCE(124);
      END_STATE();
    case 441:
      if (lookahead == 't') ADVANCE(259);
      END_STATE();
    case 442:
      if (lookahead == 't') ADVANCE(78);
      END_STATE();
    case 443:
      if (lookahead == 't') ADVANCE(573);
      END_STATE();
    case 444:
      if (lookahead == 't') ADVANCE(579);
      END_STATE();
    case 445:
      if (lookahead == 't') ADVANCE(597);
      END_STATE();
    case 446:
      if (lookahead == 't') ADVANCE(864);
      END_STATE();
    case 447:
      if (lookahead == 't') ADVANCE(869);
      END_STATE();
    case 448:
      if (lookahead == 't') ADVANCE(618);
      END_STATE();
    case 449:
      if (lookahead == 't') ADVANCE(268);
      END_STATE();
    case 450:
      if (lookahead == 't') ADVANCE(254);
      END_STATE();
    case 451:
      if (lookahead == 't') ADVANCE(476);
      END_STATE();
    case 452:
      if (lookahead == 't') ADVANCE(255);
      END_STATE();
    case 453:
      if (lookahead == 't') ADVANCE(407);
      END_STATE();
    case 454:
      if (lookahead == 't') ADVANCE(265);
      END_STATE();
    case 455:
      if (lookahead == 't') ADVANCE(309);
      END_STATE();
    case 456:
      if (lookahead == 't') ADVANCE(149);
      END_STATE();
    case 457:
      if (lookahead == 't') ADVANCE(483);
      END_STATE();
    case 458:
      if (lookahead == 't') ADVANCE(388);
      END_STATE();
    case 459:
      if (lookahead == 't') ADVANCE(256);
      END_STATE();
    case 460:
      if (lookahead == 't') ADVANCE(182);
      END_STATE();
    case 461:
      if (lookahead == 't') ADVANCE(257);
      END_STATE();
    case 462:
      if (lookahead == 't') ADVANCE(153);
      END_STATE();
    case 463:
      if (lookahead == 't') ADVANCE(396);
      END_STATE();
    case 464:
      if (lookahead == 't') ADVANCE(222);
      END_STATE();
    case 465:
      if (lookahead == 't') ADVANCE(412);
      END_STATE();
    case 466:
      if (lookahead == 't') ADVANCE(270);
      END_STATE();
    case 467:
      if (lookahead == 't') ADVANCE(175);
      END_STATE();
    case 468:
      if (lookahead == 't') ADVANCE(232);
      END_STATE();
    case 469:
      if (lookahead == 't') ADVANCE(271);
      END_STATE();
    case 470:
      if (lookahead == 't') ADVANCE(276);
      END_STATE();
    case 471:
      if (lookahead == 't') ADVANCE(237);
      END_STATE();
    case 472:
      if (lookahead == 't') ADVANCE(238);
      END_STATE();
    case 473:
      if (lookahead == 't') ADVANCE(440);
      END_STATE();
    case 474:
      if (lookahead == 'u') ADVANCE(303);
      END_STATE();
    case 475:
      if (lookahead == 'u') ADVANCE(217);
      END_STATE();
    case 476:
      if (lookahead == 'u') ADVANCE(401);
      END_STATE();
    case 477:
      if (lookahead == 'u') ADVANCE(291);
      END_STATE();
    case 478:
      if (lookahead == 'u') ADVANCE(441);
      END_STATE();
    case 479:
      if (lookahead == 'u') ADVANCE(201);
      END_STATE();
    case 480:
      if (lookahead == 'u') ADVANCE(391);
      END_STATE();
    case 481:
      if (lookahead == 'u') ADVANCE(205);
      END_STATE();
    case 482:
      if (lookahead == 'u') ADVANCE(164);
      END_STATE();
    case 483:
      if (lookahead == 'u') ADVANCE(409);
      END_STATE();
    case 484:
      if (lookahead == 'u') ADVANCE(397);
      END_STATE();
    case 485:
      if (lookahead == 'u') ADVANCE(325);
      END_STATE();
    case 486:
      if (lookahead == 'u') ADVANCE(327);
      END_STATE();
    case 487:
      if (lookahead == 'u') ADVANCE(171);
      END_STATE();
    case 488:
      if (lookahead == 'u') ADVANCE(172);
      END_STATE();
    case 489:
      if (lookahead == 'u') ADVANCE(173);
      END_STATE();
    case 490:
      if (lookahead == 'v') ADVANCE(147);
      END_STATE();
    case 491:
      if (lookahead == 'v') ADVANCE(235);
      END_STATE();
    case 492:
      if (lookahead == 'x') ADVANCE(28);
      END_STATE();
    case 493:
      if (lookahead == 'x') ADVANCE(35);
      END_STATE();
    case 494:
      if (lookahead == 'x') ADVANCE(592);
      END_STATE();
    case 495:
      if (lookahead == 'x') ADVANCE(829);
      END_STATE();
    case 496:
      if (lookahead == 'x') ADVANCE(34);
      END_STATE();
    case 497:
      if (lookahead == 'y') ADVANCE(111);
      END_STATE();
    case 498:
      if (lookahead == 'y') ADVANCE(589);
      END_STATE();
    case 499:
      if (lookahead == 'y') ADVANCE(577);
      END_STATE();
    case 500:
      if (lookahead == '{') ADVANCE(858);
      END_STATE();
    case 501:
      if (lookahead == '}') ADVANCE(861);
      END_STATE();
    case 502:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(884);
      END_STATE();
    case 503:
      if (eof) ADVANCE(506);
      if (lookahead == '\n') ADVANCE(509);
      if (lookahead == '"') ADVANCE(627);
      if (lookahead == '#') ADVANCE(502);
      if (lookahead == '.') ADVANCE(878);
      if (lookahead == '<') ADVANCE(607);
      if (lookahead == 'C') ADVANCE(100);
      if (lookahead == 'D') ADVANCE(65);
      if (lookahead == 'E') ADVANCE(880);
      if (lookahead == 'G') ADVANCE(66);
      if (lookahead == 'H') ADVANCE(71);
      if (lookahead == 'L') ADVANCE(82);
      if (lookahead == 'O') ADVANCE(106);
      if (lookahead == 'P') ADVANCE(52);
      if (lookahead == 'T') ADVANCE(109);
      if (lookahead == 'U') ADVANCE(94);
      if (lookahead == 'V') ADVANCE(81);
      if (lookahead == '[') ADVANCE(850);
      if (lookahead == '`') ADVANCE(821);
      if (lookahead == 'b') ADVANCE(156);
      if (lookahead == 'c') ADVANCE(140);
      if (lookahead == 'd') ADVANCE(480);
      if (lookahead == 'e') ADVANCE(879);
      if (lookahead == 'f') ADVANCE(138);
      if (lookahead == 'h') ADVANCE(202);
      if (lookahead == 'i') ADVANCE(323);
      if (lookahead == 'j') ADVANCE(424);
      if (lookahead == 'l') ADVANCE(340);
      if (lookahead == 'm') ADVANCE(135);
      if (lookahead == 'n') ADVANCE(477);
      if (lookahead == 'r') ADVANCE(203);
      if (lookahead == 's') ADVANCE(260);
      if (lookahead == 't') ADVANCE(386);
      if (lookahead == 'u') ADVANCE(387);
      if (lookahead == 'v') ADVANCE(152);
      if (lookahead == 'x') ADVANCE(369);
      if (lookahead == '{') ADVANCE(846);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(876);
      if (anon_sym_LF_character_set_1(lookahead)) SKIP(503)
      END_STATE();
    case 504:
      if (eof) ADVANCE(506);
      if (lookahead == '\n') ADVANCE(509);
      if (lookahead == '"') ADVANCE(627);
      if (lookahead == '#') ADVANCE(502);
      if (sym_key_string_text_character_set_2(lookahead)) ADVANCE(804);
      if (lookahead == '<') ADVANCE(607);
      if (lookahead == 'C') ADVANCE(691);
      if (lookahead == 'D') ADVANCE(662);
      if (lookahead == 'G') ADVANCE(663);
      if (lookahead == 'H') ADVANCE(644);
      if (lookahead == 'L') ADVANCE(645);
      if (lookahead == 'O') ADVANCE(697);
      if (lookahead == 'P') ADVANCE(643);
      if (lookahead == 'T') ADVANCE(699);
      if (lookahead == 'U') ADVANCE(685);
      if (lookahead == 'V') ADVANCE(675);
      if (lookahead == '[') ADVANCE(851);
      if (lookahead == '\\') ADVANCE(632);
      if (lookahead == '`') ADVANCE(821);
      if (lookahead == 'b') ADVANCE(785);
      if (lookahead == 'f') ADVANCE(648);
      if (lookahead == 'h') ADVANCE(712);
      if (lookahead == 'n') ADVANCE(778);
      if (lookahead == 't') ADVANCE(751);
      if (lookahead == '{') ADVANCE(846);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(804);
      if (anon_sym_LF_character_set_1(lookahead)) SKIP(504)
      END_STATE();
    case 505:
      if (eof) ADVANCE(506);
      if (lookahead == '\n') ADVANCE(509);
      if (lookahead == '"') ADVANCE(627);
      if (lookahead == '#') ADVANCE(502);
      if (sym_key_string_text_character_set_2(lookahead)) ADVANCE(804);
      if (lookahead == '<') ADVANCE(607);
      if (lookahead == 'C') ADVANCE(691);
      if (lookahead == 'D') ADVANCE(662);
      if (lookahead == 'G') ADVANCE(663);
      if (lookahead == 'H') ADVANCE(664);
      if (lookahead == 'L') ADVANCE(645);
      if (lookahead == 'O') ADVANCE(697);
      if (lookahead == 'P') ADVANCE(643);
      if (lookahead == 'T') ADVANCE(699);
      if (lookahead == 'U') ADVANCE(685);
      if (lookahead == 'V') ADVANCE(675);
      if (lookahead == '[') ADVANCE(852);
      if (lookahead == '\\') ADVANCE(632);
      if (lookahead == '`') ADVANCE(821);
      if (lookahead == 'b') ADVANCE(785);
      if (lookahead == 'f') ADVANCE(648);
      if (lookahead == 'h') ADVANCE(712);
      if (lookahead == 'n') ADVANCE(778);
      if (lookahead == 't') ADVANCE(751);
      if (lookahead == '{') ADVANCE(846);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(804);
      if (anon_sym_LF_character_set_1(lookahead)) SKIP(505)
      END_STATE();
    case 506:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\t') ADVANCE(640);
      if (lookahead == '\n') ADVANCE(507);
      if (lookahead == '\r') ADVANCE(638);
      if (lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(634);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\t') ADVANCE(641);
      if (lookahead == '\n') ADVANCE(508);
      if (lookahead == '\r') ADVANCE(639);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(509);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(510);
      if (anon_sym_LF_character_set_1(lookahead)) ADVANCE(811);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(511);
      if (sym_filename_text_character_set_1(lookahead)) ADVANCE(841);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(512);
      if (anon_sym_LF_character_set_1(lookahead)) ADVANCE(812);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(513);
      if (anon_sym_LF_character_set_1(lookahead)) ADVANCE(834);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(514);
      if (anon_sym_LF_character_set_1(lookahead)) ADVANCE(813);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(anon_sym_GET);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(anon_sym_GET);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(804);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(anon_sym_HEAD);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(anon_sym_HEAD);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(804);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(anon_sym_POST);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(anon_sym_POST);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(804);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(anon_sym_PUT);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(anon_sym_PUT);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(804);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(anon_sym_DELETE);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(anon_sym_DELETE);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(804);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(anon_sym_CONNECT);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(anon_sym_CONNECT);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(804);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(anon_sym_OPTIONS);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(anon_sym_OPTIONS);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(804);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(anon_sym_TRACE);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(anon_sym_TRACE);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(804);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(anon_sym_PATCH);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(anon_sym_PATCH);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(804);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(anon_sym_LINK);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(anon_sym_LINK);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(804);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(anon_sym_UNLINK);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(anon_sym_UNLINK);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(804);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(anon_sym_PURGE);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(anon_sym_PURGE);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(804);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(anon_sym_LOCK);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(anon_sym_LOCK);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(804);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(anon_sym_UNLOCK);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(anon_sym_UNLOCK);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(804);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(anon_sym_PROPFIND);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(anon_sym_PROPFIND);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(804);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(anon_sym_VIEW);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(anon_sym_VIEW);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(804);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(anon_sym_HTTP_SLASH1_DOT0);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(anon_sym_HTTP_SLASH1_DOT1);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(anon_sym_HTTP_SLASH2);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(anon_sym_HTTP_SLASH_STAR);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(aux_sym_status_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(551);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(anon_sym_LBRACKBasicAuth_RBRACK);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(anon_sym_LBRACKBasicAuth_RBRACK);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(804);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(anon_sym_LBRACKQueryStringParams_RBRACK);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(anon_sym_LBRACKQueryStringParams_RBRACK);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(804);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(anon_sym_LBRACKFormParams_RBRACK);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(anon_sym_LBRACKFormParams_RBRACK);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(804);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(anon_sym_LBRACKMultipartFormData_RBRACK);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(anon_sym_LBRACKMultipartFormData_RBRACK);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(804);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(anon_sym_LBRACKCookies_RBRACK);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(anon_sym_LBRACKCookies_RBRACK);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(804);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(anon_sym_LBRACKCaptures_RBRACK);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(anon_sym_LBRACKCaptures_RBRACK);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(804);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(anon_sym_LBRACKAsserts_RBRACK);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(anon_sym_LBRACKAsserts_RBRACK);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(804);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(anon_sym_LBRACKOptions_RBRACK);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(anon_sym_LBRACKOptions_RBRACK);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(804);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(anon_sym_file_COMMA);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(aux_sym_file_contenttype_token1);
      if (lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(anon_sym_cacert);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(anon_sym_location);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(anon_sym_insecure);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(anon_sym_max_DASHredirs);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(anon_sym_retry);
      if (lookahead == '-') ADVANCE(269);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(anon_sym_retry_DASHinterval);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(anon_sym_retry_DASHmax_DASHcount);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(anon_sym_variable);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(anon_sym_verbose);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(anon_sym_very_DASHverbose);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(599);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(anon_sym_status);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(anon_sym_url);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(anon_sym_header);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(anon_sym_cookie);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(anon_sym_body);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(anon_sym_xpath);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(anon_sym_jsonpath);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(anon_sym_regex);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(anon_sym_duration);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(anon_sym_sha256);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(anon_sym_md5);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(anon_sym_bytes);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(anon_sym_not);
      if (lookahead == 'E') ADVANCE(372);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(anon_sym_equals);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(anon_sym_notEquals);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(anon_sym_greaterThan);
      if (lookahead == 'O') ADVANCE(405);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(605);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(anon_sym_greaterThanOrEquals);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(anon_sym_lessThan);
      if (lookahead == 'O') ADVANCE(393);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(610);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(anon_sym_lessThanOrEquals);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(anon_sym_startsWith);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(anon_sym_endsWith);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(anon_sym_contains);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(anon_sym_matches);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(anon_sym_exists);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(anon_sym_includes);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(anon_sym_isInteger);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(anon_sym_isFloat);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(anon_sym_isBoolean);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(anon_sym_isString);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(anon_sym_isCollection);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(anon_sym_To_COMMABe_COMMADefined);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(anon_sym_base64_COMMA);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(aux_sym_oneline_base64_token1);
      if (lookahead == '\n') ADVANCE(624);
      if (('+' <= lookahead && lookahead <= '-') ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(625);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(aux_sym_oneline_base64_token1);
      if (lookahead == '\n' ||
          ('+' <= lookahead && lookahead <= '-') ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(625);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(anon_sym_hex_COMMA);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(aux_sym_quoted_string_text_token1);
      if (lookahead == '\n') ADVANCE(631);
      if (lookahead == '"' ||
          lookahead == '\\') ADVANCE(884);
      if (lookahead != 0) ADVANCE(628);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(aux_sym_quoted_string_text_token1);
      if (lookahead == '#') ADVANCE(628);
      if (lookahead == '{') ADVANCE(630);
      if (anon_sym__character_set_1(lookahead)) ADVANCE(629);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(631);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(aux_sym_quoted_string_text_token1);
      if (lookahead == '{') ADVANCE(860);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(631);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(aux_sym_quoted_string_text_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(631);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(aux_sym_invalid_quoted_string_escaped_char_token1);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(aux_sym_invalid_quoted_string_escaped_char_token1);
      if (lookahead == 8) ADVANCE(636);
      if (lookahead == '\t') ADVANCE(640);
      if (lookahead == '\n') ADVANCE(507);
      if (lookahead == '\r') ADVANCE(638);
      if (lookahead == '#') ADVANCE(635);
      if (lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(634);
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != '"' &&
          lookahead != '\\' &&
          lookahead != 'u') ADVANCE(633);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(aux_sym_invalid_quoted_string_escaped_char_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(884);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(anon_sym_2);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(anon_sym_CR);
      if (lookahead == '\t') ADVANCE(640);
      if (lookahead == '\n') ADVANCE(507);
      if (lookahead == '\r') ADVANCE(638);
      if (lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(634);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(anon_sym_CR);
      if (lookahead == '\t') ADVANCE(641);
      if (lookahead == '\n') ADVANCE(508);
      if (lookahead == '\r') ADVANCE(639);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead == '\t') ADVANCE(640);
      if (lookahead == '\n') ADVANCE(507);
      if (lookahead == '\r') ADVANCE(638);
      if (lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(634);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead == '\t') ADVANCE(641);
      if (lookahead == '\n') ADVANCE(508);
      if (lookahead == '\r') ADVANCE(639);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(anon_sym_u);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(sym_key_string_text);
      if (sym_key_string_text_character_set_3(lookahead)) ADVANCE(804);
      if (lookahead == 'A') ADVANCE(708);
      if (lookahead == 'O') ADVANCE(702);
      if (lookahead == 'R') ADVANCE(692);
      if (lookahead == 'U') ADVANCE(647);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(sym_key_string_text);
      if (sym_key_string_text_character_set_4(lookahead)) ADVANCE(804);
      if (lookahead == 'E') ADVANCE(651);
      if (lookahead == 'T') ADVANCE(706);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(sym_key_string_text);
      if (sym_key_string_text_character_set_5(lookahead)) ADVANCE(804);
      if (lookahead == 'I') ADVANCE(684);
      if (lookahead == 'O') ADVANCE(655);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(sym_key_string_text);
      if (sym_key_string_text_character_set_5(lookahead)) ADVANCE(804);
      if (lookahead == 'I') ADVANCE(688);
      if (lookahead == 'O') ADVANCE(656);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(sym_key_string_text);
      if (sym_key_string_text_character_set_6(lookahead)) ADVANCE(804);
      if (lookahead == 'R') ADVANCE(673);
      if (lookahead == 'T') ADVANCE(522);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'h') ||
          ('j' <= lookahead && lookahead <= 'z')) ADVANCE(804);
      if (lookahead == 'a') ADVANCE(732);
      if (lookahead == 'i') ADVANCE(730);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '3') ||
          ('5' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(804);
      if (lookahead == '4') ADVANCE(807);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '5') ||
          ('7' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(804);
      if (lookahead == '6') ADVANCE(649);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '@' ||
          ('B' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(804);
      if (lookahead == 'A') ADVANCE(659);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '@' ||
          ('B' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(804);
      if (lookahead == 'A') ADVANCE(657);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '@' ||
          ('B' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(804);
      if (lookahead == 'A') ADVANCE(779);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'B') ||
          ('D' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(804);
      if (lookahead == 'C') ADVANCE(674);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'B') ||
          ('D' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(804);
      if (lookahead == 'C') ADVANCE(679);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'B') ||
          ('D' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(804);
      if (lookahead == 'C') ADVANCE(681);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'B') ||
          ('D' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(804);
      if (lookahead == 'C') ADVANCE(667);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'B') ||
          ('D' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(804);
      if (lookahead == 'C') ADVANCE(705);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'C') ||
          ('E' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(804);
      if (lookahead == 'D') ADVANCE(518);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'C') ||
          ('E' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(804);
      if (lookahead == 'D') ADVANCE(544);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'C') ||
          ('E' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(804);
      if (lookahead == 'D') ADVANCE(791);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'D') ||
          ('F' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(804);
      if (lookahead == 'E') ADVANCE(682);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'D') ||
          ('F' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(804);
      if (lookahead == 'E') ADVANCE(703);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'D') ||
          ('F' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(804);
      if (lookahead == 'E') ADVANCE(651);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'D') ||
          ('F' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(804);
      if (lookahead == 'E') ADVANCE(710);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'D') ||
          ('F' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(804);
      if (lookahead == 'E') ADVANCE(538);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'D') ||
          ('F' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(804);
      if (lookahead == 'E') ADVANCE(530);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(804);
      if (lookahead == 'E') ADVANCE(524);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(804);
      if (lookahead == 'E') ADVANCE(658);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(804);
      if (lookahead == 'E') ADVANCE(709);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'E') ||
          ('G' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(804);
      if (lookahead == 'F') ADVANCE(676);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'E') ||
          ('G' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(804);
      if (lookahead == 'F') ADVANCE(744);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'F') ||
          ('H' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(804);
      if (lookahead == 'G') ADVANCE(666);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'G') ||
          ('I' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(804);
      if (lookahead == 'H') ADVANCE(532);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'H') ||
          ('J' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(804);
      if (lookahead == 'I') ADVANCE(665);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'H') ||
          ('J' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(804);
      if (lookahead == 'I') ADVANCE(687);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'H') ||
          ('J' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(804);
      if (lookahead == 'I') ADVANCE(693);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'J') ||
          ('L' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(804);
      if (lookahead == 'K') ADVANCE(534);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'J') ||
          ('L' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(804);
      if (lookahead == 'K') ADVANCE(540);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'J') ||
          ('L' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(804);
      if (lookahead == 'K') ADVANCE(536);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'J') ||
          ('L' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(804);
      if (lookahead == 'K') ADVANCE(542);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'K') ||
          ('M' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(804);
      if (lookahead == 'L') ADVANCE(670);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'K') ||
          ('M' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(804);
      if (lookahead == 'L') ADVANCE(646);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'M') ||
          ('O' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(804);
      if (lookahead == 'N') ADVANCE(678);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'M') ||
          ('O' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(804);
      if (lookahead == 'N') ADVANCE(683);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'M') ||
          ('O' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(804);
      if (lookahead == 'N') ADVANCE(700);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'M') ||
          ('O' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(804);
      if (lookahead == 'N') ADVANCE(660);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'M') ||
          ('O' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(804);
      if (lookahead == 'N') ADVANCE(680);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'M') ||
          ('O' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(804);
      if (lookahead == 'N') ADVANCE(690);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(804);
      if (lookahead == 'N') ADVANCE(669);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'N') ||
          ('P' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(804);
      if (lookahead == 'O') ADVANCE(689);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'N') ||
          ('P' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(804);
      if (lookahead == 'O') ADVANCE(695);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'N') ||
          ('P' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(804);
      if (lookahead == 'O') ADVANCE(686);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'O') ||
          ('Q' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(804);
      if (lookahead == 'P') ADVANCE(808);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'O') ||
          ('Q' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(804);
      if (lookahead == 'P') ADVANCE(671);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'O') ||
          ('Q' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(804);
      if (lookahead == 'P') ADVANCE(789);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'O') ||
          ('Q' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(804);
      if (lookahead == 'P') ADVANCE(707);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'O') ||
          ('Q' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(804);
      if (lookahead == 'P') ADVANCE(795);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Q') ||
          ('S' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(804);
      if (lookahead == 'R') ADVANCE(652);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'R') ||
          ('T' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(804);
      if (lookahead == 'S') ADVANCE(528);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'R') ||
          ('T' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(804);
      if (lookahead == 'S') ADVANCE(775);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'R') ||
          ('T' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(804);
      if (lookahead == 'S') ADVANCE(704);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'S') ||
          ('U' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(804);
      if (lookahead == 'T') ADVANCE(516);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'S') ||
          ('U' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(804);
      if (lookahead == 'T') ADVANCE(520);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'S') ||
          ('U' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(804);
      if (lookahead == 'T') ADVANCE(526);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'S') ||
          ('U' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(804);
      if (lookahead == 'T') ADVANCE(694);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'S') ||
          ('U' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(804);
      if (lookahead == 'T') ADVANCE(677);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'S') ||
          ('U' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(804);
      if (lookahead == 'T') ADVANCE(654);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(804);
      if (lookahead == 'T') ADVANCE(668);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'V') ||
          ('X' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(804);
      if (lookahead == 'W') ADVANCE(546);
      END_STATE();
    case 711:
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
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(804);
      if (lookahead == 'c') ADVANCE(653);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(804);
      if (lookahead == 'e') ADVANCE(783);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(804);
      if (lookahead == 'e') ADVANCE(650);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(804);
      if (lookahead == 'e') ADVANCE(871);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(804);
      if (lookahead == 'e') ADVANCE(873);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(804);
      if (lookahead == 'e') ADVANCE(806);
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
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(804);
      if (lookahead == 'e') ADVANCE(749);
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
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(804);
      if (lookahead == 'e') ADVANCE(759);
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
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(804);
      if (lookahead == 'e') ADVANCE(755);
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
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(804);
      if (lookahead == 'e') ADVANCE(766);
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
          ('a' <= lookahead && lookahead <= 'f') ||
          ('h' <= lookahead && lookahead <= 'z')) ADVANCE(804);
      if (lookahead == 'g') ADVANCE(698);
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
          ('a' <= lookahead && lookahead <= 'g') ||
          ('i' <= lookahead && lookahead <= 'z')) ADVANCE(804);
      if (lookahead == 'h') ADVANCE(798);
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
          ('a' <= lookahead && lookahead <= 'h') ||
          ('j' <= lookahead && lookahead <= 'z')) ADVANCE(804);
      if (lookahead == 'i') ADVANCE(711);
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
          ('a' <= lookahead && lookahead <= 'h') ||
          ('j' <= lookahead && lookahead <= 'z')) ADVANCE(804);
      if (lookahead == 'i') ADVANCE(747);
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
          ('a' <= lookahead && lookahead <= 'h') ||
          ('j' <= lookahead && lookahead <= 'z')) ADVANCE(804);
      if (lookahead == 'i') ADVANCE(738);
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
          ('a' <= lookahead && lookahead <= 'h') ||
          ('j' <= lookahead && lookahead <= 'z')) ADVANCE(804);
      if (lookahead == 'i') ADVANCE(741);
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
          ('a' <= lookahead && lookahead <= 'h') ||
          ('j' <= lookahead && lookahead <= 'z')) ADVANCE(804);
      if (lookahead == 'i') ADVANCE(718);
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
          ('a' <= lookahead && lookahead <= 'j') ||
          ('l' <= lookahead && lookahead <= 'z')) ADVANCE(804);
      if (lookahead == 'k') ADVANCE(727);
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
          ('a' <= lookahead && lookahead <= 'k') ||
          ('m' <= lookahead && lookahead <= 'z')) ADVANCE(804);
      if (lookahead == 'l') ADVANCE(875);
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
          ('a' <= lookahead && lookahead <= 'k') ||
          ('m' <= lookahead && lookahead <= 'z')) ADVANCE(804);
      if (lookahead == 'l') ADVANCE(716);
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
          ('a' <= lookahead && lookahead <= 'k') ||
          ('m' <= lookahead && lookahead <= 'z')) ADVANCE(804);
      if (lookahead == 'l') ADVANCE(729);
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
          ('a' <= lookahead && lookahead <= 'k') ||
          ('m' <= lookahead && lookahead <= 'z')) ADVANCE(804);
      if (lookahead == 'l') ADVANCE(763);
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
          ('a' <= lookahead && lookahead <= 'k') ||
          ('m' <= lookahead && lookahead <= 'z')) ADVANCE(804);
      if (lookahead == 'l') ADVANCE(772);
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
          ('a' <= lookahead && lookahead <= 'l') ||
          ('n' <= lookahead && lookahead <= 'z')) ADVANCE(804);
      if (lookahead == 'm') ADVANCE(661);
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
          ('a' <= lookahead && lookahead <= 'l') ||
          ('n' <= lookahead && lookahead <= 'z')) ADVANCE(804);
      if (lookahead == 'm') ADVANCE(696);
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
          ('a' <= lookahead && lookahead <= 'l') ||
          ('n' <= lookahead && lookahead <= 'z')) ADVANCE(804);
      if (lookahead == 'm') ADVANCE(762);
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
          ('a' <= lookahead && lookahead <= 'l') ||
          ('n' <= lookahead && lookahead <= 'z')) ADVANCE(804);
      if (lookahead == 'm') ADVANCE(764);
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
          ('a' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'z')) ADVANCE(804);
      if (lookahead == 'n') ADVANCE(721);
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
          ('a' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'z')) ADVANCE(804);
      if (lookahead == 'n') ADVANCE(760);
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
          ('a' <= lookahead && lookahead <= 'n') ||
          ('p' <= lookahead && lookahead <= 'z')) ADVANCE(804);
      if (lookahead == 'o') ADVANCE(728);
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
          ('a' <= lookahead && lookahead <= 'n') ||
          ('p' <= lookahead && lookahead <= 'z')) ADVANCE(804);
      if (lookahead == 'o') ADVANCE(739);
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
          ('a' <= lookahead && lookahead <= 'n') ||
          ('p' <= lookahead && lookahead <= 'z')) ADVANCE(804);
      if (lookahead == 'o') ADVANCE(748);
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
          ('a' <= lookahead && lookahead <= 'n') ||
          ('p' <= lookahead && lookahead <= 'z')) ADVANCE(804);
      if (lookahead == 'o') ADVANCE(740);
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
          ('a' <= lookahead && lookahead <= 'n') ||
          ('p' <= lookahead && lookahead <= 'z')) ADVANCE(804);
      if (lookahead == 'o') ADVANCE(752);
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
          ('a' <= lookahead && lookahead <= 'o') ||
          ('q' <= lookahead && lookahead <= 'z')) ADVANCE(804);
      if (lookahead == 'p') ADVANCE(771);
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
          ('a' <= lookahead && lookahead <= 'o') ||
          ('q' <= lookahead && lookahead <= 'z')) ADVANCE(804);
      if (lookahead == 'p') ADVANCE(774);
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
          ('a' <= lookahead && lookahead <= 'o') ||
          ('q' <= lookahead && lookahead <= 'z')) ADVANCE(804);
      if (lookahead == 'p') ADVANCE(790);
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
          ('a' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(804);
      if (lookahead == 'r') ADVANCE(735);
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
          ('a' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(804);
      if (lookahead == 'r') ADVANCE(784);
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
          ('a' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(804);
      if (lookahead == 'r') ADVANCE(788);
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
          ('a' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(804);
      if (lookahead == 'r') ADVANCE(781);
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
          ('a' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(804);
      if (lookahead == 'r') ADVANCE(734);
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
          ('a' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(804);
      if (lookahead == 'r') ADVANCE(770);
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
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(804);
      if (lookahead == 'r') ADVANCE(725);
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
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(804);
      if (lookahead == 'r') ADVANCE(776);
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
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(804);
      if (lookahead == 'r') ADVANCE(720);
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
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(804);
      if (lookahead == 'r') ADVANCE(794);
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
          ('a' <= lookahead && lookahead <= 'r') ||
          ('t' <= lookahead && lookahead <= 'z')) ADVANCE(804);
      if (lookahead == 's') ADVANCE(723);
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
          ('a' <= lookahead && lookahead <= 'r') ||
          ('t' <= lookahead && lookahead <= 'z')) ADVANCE(804);
      if (lookahead == 's') ADVANCE(796);
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
          ('a' <= lookahead && lookahead <= 'r') ||
          ('t' <= lookahead && lookahead <= 'z')) ADVANCE(804);
      if (lookahead == 's') ADVANCE(797);
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
          ('a' <= lookahead && lookahead <= 'r') ||
          ('t' <= lookahead && lookahead <= 'z')) ADVANCE(804);
      if (lookahead == 's') ADVANCE(713);
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
          ('a' <= lookahead && lookahead <= 'r') ||
          ('t' <= lookahead && lookahead <= 'z')) ADVANCE(804);
      if (lookahead == 's') ADVANCE(799);
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
          ('a' <= lookahead && lookahead <= 'r') ||
          ('t' <= lookahead && lookahead <= 'z')) ADVANCE(804);
      if (lookahead == 's') ADVANCE(715);
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
          ('t' <= lookahead && lookahead <= 'z')) ADVANCE(804);
      if (lookahead == 's') ADVANCE(801);
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
          ('t' <= lookahead && lookahead <= 'z')) ADVANCE(804);
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
          ('t' <= lookahead && lookahead <= 'z')) ADVANCE(804);
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
          ('t' <= lookahead && lookahead <= 'z')) ADVANCE(804);
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
          ('t' <= lookahead && lookahead <= 'z')) ADVANCE(804);
      if (lookahead == 's') ADVANCE(767);
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
          ('a' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z')) ADVANCE(804);
      if (lookahead == 't') ADVANCE(722);
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
          ('a' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z')) ADVANCE(804);
      if (lookahead == 't') ADVANCE(672);
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
          ('a' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z')) ADVANCE(804);
      if (lookahead == 't') ADVANCE(726);
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
          ('a' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z')) ADVANCE(804);
      if (lookahead == 't') ADVANCE(724);
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
          ('a' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z')) ADVANCE(804);
      if (lookahead == 't') ADVANCE(792);
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
          ('a' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z')) ADVANCE(804);
      if (lookahead == 't') ADVANCE(782);
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
          ('u' <= lookahead && lookahead <= 'z')) ADVANCE(804);
      if (lookahead == 't') ADVANCE(754);
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
          ('u' <= lookahead && lookahead <= 'z')) ADVANCE(804);
      if (lookahead == 't') ADVANCE(765);
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
          ('a' <= lookahead && lookahead <= 't') ||
          ('v' <= lookahead && lookahead <= 'z')) ADVANCE(804);
      if (lookahead == 'u') ADVANCE(717);
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
          ('a' <= lookahead && lookahead <= 't') ||
          ('v' <= lookahead && lookahead <= 'z')) ADVANCE(804);
      if (lookahead == 'u') ADVANCE(731);
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
          ('a' <= lookahead && lookahead <= 't') ||
          ('v' <= lookahead && lookahead <= 'z')) ADVANCE(804);
      if (lookahead == 'u') ADVANCE(769);
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
          ('a' <= lookahead && lookahead <= 't') ||
          ('v' <= lookahead && lookahead <= 'z')) ADVANCE(804);
      if (lookahead == 'u') ADVANCE(733);
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
          ('a' <= lookahead && lookahead <= 't') ||
          ('v' <= lookahead && lookahead <= 'z')) ADVANCE(804);
      if (lookahead == 'u') ADVANCE(714);
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
          ('a' <= lookahead && lookahead <= 't') ||
          ('v' <= lookahead && lookahead <= 'z')) ADVANCE(804);
      if (lookahead == 'u') ADVANCE(756);
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
          ('a' <= lookahead && lookahead <= 'w') ||
          lookahead == 'y' ||
          lookahead == 'z') ADVANCE(804);
      if (lookahead == 'x') ADVANCE(805);
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
          ('a' <= lookahead && lookahead <= 'x') ||
          lookahead == 'z') ADVANCE(804);
      if (lookahead == 'y') ADVANCE(701);
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
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(804);
      if (lookahead == 'a') ADVANCE(761);
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
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(804);
      if (lookahead == 'a') ADVANCE(732);
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
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(804);
      if (lookahead == 'a') ADVANCE(758);
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
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(804);
      if (lookahead == 'a') ADVANCE(736);
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
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(804);
      if (lookahead == 'a') ADVANCE(750);
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
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(804);
      if (lookahead == 'a') ADVANCE(753);
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
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(804);
      if (lookahead == 'a') ADVANCE(773);
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
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(804);
      if (lookahead == 'a') ADVANCE(800);
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
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(804);
      if (lookahead == 'a') ADVANCE(746);
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
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(804);
      if (lookahead == 'a') ADVANCE(737);
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
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(804);
      if (lookahead == 'a') ADVANCE(757);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(804);
      if (lookahead == ']') ADVANCE(562);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(804);
      if (lookahead == ']') ADVANCE(568);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(804);
      if (lookahead == ']') ADVANCE(554);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(804);
      if (lookahead == ']') ADVANCE(558);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(804);
      if (lookahead == ']') ADVANCE(560);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(804);
      if (lookahead == ']') ADVANCE(556);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(804);
      if (lookahead == ']') ADVANCE(566);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(804);
      if (lookahead == ']') ADVANCE(564);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(804);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(804);
      if (lookahead == ',') ADVANCE(626);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(804);
      if (lookahead == ',') ADVANCE(570);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(804);
      if (lookahead == ',') ADVANCE(623);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(804);
      if (lookahead == '/') ADVANCE(27);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(884);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(aux_sym_value_string_text_token1);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(aux_sym_value_string_text_token1);
      if (lookahead == '\n') ADVANCE(510);
      if (lookahead == 'f') ADVANCE(816);
      if (lookahead == 'n') ADVANCE(818);
      if (lookahead == 't') ADVANCE(817);
      if (lookahead == '{') ADVANCE(819);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(810);
      if (anon_sym_LF_character_set_1(lookahead)) ADVANCE(811);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(810);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(aux_sym_value_string_text_token1);
      if (lookahead == '\n') ADVANCE(512);
      if (lookahead == '{') ADVANCE(819);
      if (anon_sym_LF_character_set_1(lookahead)) ADVANCE(812);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(810);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(aux_sym_value_string_text_token1);
      if (lookahead == '\n') ADVANCE(514);
      if (lookahead == 'f') ADVANCE(815);
      if (lookahead == 'n') ADVANCE(818);
      if (lookahead == 't') ADVANCE(817);
      if (lookahead == '{') ADVANCE(819);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(810);
      if (anon_sym_LF_character_set_1(lookahead)) ADVANCE(813);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(810);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(aux_sym_value_string_text_token1);
      if (lookahead == '`') ADVANCE(820);
      if (lookahead == '{') ADVANCE(819);
      if (anon_sym_LF_character_set_1(lookahead)) ADVANCE(814);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(810);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(aux_sym_value_string_text_token1);
      if (lookahead == 'a') ADVANCE(294);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(aux_sym_value_string_text_token1);
      if (lookahead == 'a') ADVANCE(294);
      if (lookahead == 'i') ADVANCE(292);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(aux_sym_value_string_text_token1);
      if (lookahead == 'r') ADVANCE(481);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(aux_sym_value_string_text_token1);
      if (lookahead == 'u') ADVANCE(291);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(aux_sym_value_string_text_token1);
      if (lookahead == '{') ADVANCE(858);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      if (lookahead == '`') ADVANCE(134);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(aux_sym_oneline_string_text_token1);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(aux_sym_oneline_string_text_token1);
      if (lookahead == '#') ADVANCE(824);
      if (anon_sym__character_set_1(lookahead)) ADVANCE(823);
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(822);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(aux_sym_oneline_string_text_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(884);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(anon_sym_b);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(anon_sym_f);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(anon_sym_BQUOTE_BQUOTE_BQUOTE);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(anon_sym_base64);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(anon_sym_hex);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(anon_sym_json);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(anon_sym_xml);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(anon_sym_graphql);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(aux_sym_multiline_string_text_token1);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(aux_sym_multiline_string_text_token1);
      if (lookahead == '\n') ADVANCE(513);
      if (lookahead == '#') ADVANCE(837);
      if (lookahead == '`') ADVANCE(835);
      if (lookahead == '{') ADVANCE(836);
      if (anon_sym_LF_character_set_1(lookahead)) ADVANCE(834);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(833);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(aux_sym_multiline_string_text_token1);
      if (lookahead == '`') ADVANCE(134);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(aux_sym_multiline_string_text_token1);
      if (lookahead == '{') ADVANCE(858);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(aux_sym_multiline_string_text_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(884);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(anon_sym_n);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(anon_sym_r);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(anon_sym_t);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(sym_filename_text);
      if (lookahead == '\n') ADVANCE(511);
      if (lookahead == '{') ADVANCE(843);
      if (sym_filename_text_character_set_1(lookahead)) ADVANCE(841);
      if (lookahead != 0 &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '\\') ADVANCE(844);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(sym_filename_text);
      if (lookahead == '{') ADVANCE(843);
      if (sym_filename_text_character_set_1(lookahead)) ADVANCE(842);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '\\') ADVANCE(844);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(sym_filename_text);
      if (lookahead == '{') ADVANCE(859);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '\\') ADVANCE(844);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(sym_filename_text);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '\\') ADVANCE(844);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(aux_sym_filename_escaped_char_token1);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '{') ADVANCE(858);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == 'A') ADVANCE(419);
      if (lookahead == 'B') ADVANCE(143);
      if (lookahead == 'C') ADVANCE(162);
      if (lookahead == 'F') ADVANCE(335);
      if (lookahead == 'M') ADVANCE(474);
      if (lookahead == 'O') ADVANCE(363);
      if (lookahead == 'Q') ADVANCE(475);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (sym_key_string_text_character_set_7(lookahead)) ADVANCE(804);
      if (lookahead == 'B') ADVANCE(787);
      if (lookahead == 'C') ADVANCE(743);
      if (lookahead == 'F') ADVANCE(742);
      if (lookahead == 'M') ADVANCE(780);
      if (lookahead == 'O') ADVANCE(745);
      if (lookahead == 'Q') ADVANCE(777);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (sym_key_string_text_character_set_8(lookahead)) ADVANCE(804);
      if (lookahead == 'A') ADVANCE(768);
      if (lookahead == 'C') ADVANCE(793);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(aux_sym_json_string_text_token1);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(aux_sym_json_string_text_token1);
      if (lookahead == '#') ADVANCE(857);
      if (lookahead == '{') ADVANCE(856);
      if (anon_sym__character_set_1(lookahead)) ADVANCE(855);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(854);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(aux_sym_json_string_text_token1);
      if (lookahead == '{') ADVANCE(858);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(aux_sym_json_string_text_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(884);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '\\') ADVANCE(844);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(631);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(aux_sym_variable_name_token1);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(aux_sym_variable_name_token2);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(863);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(anon_sym_count);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(anon_sym_urlEncode);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(anon_sym_urlDecode);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(anon_sym_htmlEscape);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(anon_sym_htmlUnescape);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(anon_sym_toInt);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(804);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(804);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(anon_sym_null);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(anon_sym_null);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(804);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(aux_sym_digit_token1);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(aux_sym_hexdigit_token1);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(anon_sym_e);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(anon_sym_E);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '/' ||
          lookahead == '\\') ADVANCE(884);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(883);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(884);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(aux_sym_regex_text_token1);
      if (lookahead == '#') ADVANCE(887);
      if (anon_sym_LF_character_set_1(lookahead)) ADVANCE(886);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '/' &&
          lookahead != '\\') ADVANCE(888);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(aux_sym_regex_text_token1);
      if (lookahead == '/' ||
          lookahead == '\\') ADVANCE(884);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(883);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(aux_sym_regex_text_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '/' &&
          lookahead != '\\') ADVANCE(888);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(aux_sym_regex_escaped_char_token1);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(aux_sym_regex_escaped_char_token1);
      if (lookahead == '#') ADVANCE(891);
      if (anon_sym_LF_character_set_1(lookahead)) ADVANCE(890);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(889);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(aux_sym_regex_escaped_char_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(884);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 503},
  [2] = {.lex_state = 504},
  [3] = {.lex_state = 504},
  [4] = {.lex_state = 504},
  [5] = {.lex_state = 504},
  [6] = {.lex_state = 503},
  [7] = {.lex_state = 503},
  [8] = {.lex_state = 503},
  [9] = {.lex_state = 505},
  [10] = {.lex_state = 505},
  [11] = {.lex_state = 503},
  [12] = {.lex_state = 503},
  [13] = {.lex_state = 503},
  [14] = {.lex_state = 503},
  [15] = {.lex_state = 503},
  [16] = {.lex_state = 503},
  [17] = {.lex_state = 15},
  [18] = {.lex_state = 15},
  [19] = {.lex_state = 503},
  [20] = {.lex_state = 503},
  [21] = {.lex_state = 504},
  [22] = {.lex_state = 504},
  [23] = {.lex_state = 504},
  [24] = {.lex_state = 504},
  [25] = {.lex_state = 503},
  [26] = {.lex_state = 503},
  [27] = {.lex_state = 503},
  [28] = {.lex_state = 503},
  [29] = {.lex_state = 503},
  [30] = {.lex_state = 503},
  [31] = {.lex_state = 503},
  [32] = {.lex_state = 503},
  [33] = {.lex_state = 503},
  [34] = {.lex_state = 503},
  [35] = {.lex_state = 503},
  [36] = {.lex_state = 503},
  [37] = {.lex_state = 504},
  [38] = {.lex_state = 504},
  [39] = {.lex_state = 504},
  [40] = {.lex_state = 504},
  [41] = {.lex_state = 504},
  [42] = {.lex_state = 504},
  [43] = {.lex_state = 504},
  [44] = {.lex_state = 504},
  [45] = {.lex_state = 504},
  [46] = {.lex_state = 503},
  [47] = {.lex_state = 503},
  [48] = {.lex_state = 503},
  [49] = {.lex_state = 504},
  [50] = {.lex_state = 505},
  [51] = {.lex_state = 504},
  [52] = {.lex_state = 505},
  [53] = {.lex_state = 505},
  [54] = {.lex_state = 505},
  [55] = {.lex_state = 503},
  [56] = {.lex_state = 503},
  [57] = {.lex_state = 15},
  [58] = {.lex_state = 15},
  [59] = {.lex_state = 503},
  [60] = {.lex_state = 505},
  [61] = {.lex_state = 505},
  [62] = {.lex_state = 505},
  [63] = {.lex_state = 503},
  [64] = {.lex_state = 15},
  [65] = {.lex_state = 15},
  [66] = {.lex_state = 15},
  [67] = {.lex_state = 15},
  [68] = {.lex_state = 15},
  [69] = {.lex_state = 15},
  [70] = {.lex_state = 15},
  [71] = {.lex_state = 15},
  [72] = {.lex_state = 15},
  [73] = {.lex_state = 15},
  [74] = {.lex_state = 15},
  [75] = {.lex_state = 15},
  [76] = {.lex_state = 15},
  [77] = {.lex_state = 15},
  [78] = {.lex_state = 15},
  [79] = {.lex_state = 15},
  [80] = {.lex_state = 15},
  [81] = {.lex_state = 15},
  [82] = {.lex_state = 15},
  [83] = {.lex_state = 15},
  [84] = {.lex_state = 15},
  [85] = {.lex_state = 15},
  [86] = {.lex_state = 15},
  [87] = {.lex_state = 15},
  [88] = {.lex_state = 15},
  [89] = {.lex_state = 15},
  [90] = {.lex_state = 18},
  [91] = {.lex_state = 6},
  [92] = {.lex_state = 503},
  [93] = {.lex_state = 15},
  [94] = {.lex_state = 15},
  [95] = {.lex_state = 15},
  [96] = {.lex_state = 503},
  [97] = {.lex_state = 503},
  [98] = {.lex_state = 503},
  [99] = {.lex_state = 17},
  [100] = {.lex_state = 503},
  [101] = {.lex_state = 503},
  [102] = {.lex_state = 14},
  [103] = {.lex_state = 503},
  [104] = {.lex_state = 503},
  [105] = {.lex_state = 15},
  [106] = {.lex_state = 15},
  [107] = {.lex_state = 15},
  [108] = {.lex_state = 15},
  [109] = {.lex_state = 503},
  [110] = {.lex_state = 503},
  [111] = {.lex_state = 503},
  [112] = {.lex_state = 503},
  [113] = {.lex_state = 503},
  [114] = {.lex_state = 503},
  [115] = {.lex_state = 3},
  [116] = {.lex_state = 15},
  [117] = {.lex_state = 3},
  [118] = {.lex_state = 15},
  [119] = {.lex_state = 3},
  [120] = {.lex_state = 5},
  [121] = {.lex_state = 12},
  [122] = {.lex_state = 5},
  [123] = {.lex_state = 25},
  [124] = {.lex_state = 5},
  [125] = {.lex_state = 5},
  [126] = {.lex_state = 13},
  [127] = {.lex_state = 13},
  [128] = {.lex_state = 19},
  [129] = {.lex_state = 19},
  [130] = {.lex_state = 13},
  [131] = {.lex_state = 12},
  [132] = {.lex_state = 13},
  [133] = {.lex_state = 19},
  [134] = {.lex_state = 12},
  [135] = {.lex_state = 19},
  [136] = {.lex_state = 19},
  [137] = {.lex_state = 13},
  [138] = {.lex_state = 7},
  [139] = {.lex_state = 8},
  [140] = {.lex_state = 22},
  [141] = {.lex_state = 7},
  [142] = {.lex_state = 22},
  [143] = {.lex_state = 25},
  [144] = {.lex_state = 25},
  [145] = {.lex_state = 7},
  [146] = {.lex_state = 25},
  [147] = {.lex_state = 21},
  [148] = {.lex_state = 1},
  [149] = {.lex_state = 18},
  [150] = {.lex_state = 5},
  [151] = {.lex_state = 20},
  [152] = {.lex_state = 8},
  [153] = {.lex_state = 20},
  [154] = {.lex_state = 8},
  [155] = {.lex_state = 25},
  [156] = {.lex_state = 20},
  [157] = {.lex_state = 20},
  [158] = {.lex_state = 22},
  [159] = {.lex_state = 22},
  [160] = {.lex_state = 20},
  [161] = {.lex_state = 5},
  [162] = {.lex_state = 18},
  [163] = {.lex_state = 12},
  [164] = {.lex_state = 3},
  [165] = {.lex_state = 3},
  [166] = {.lex_state = 3},
  [167] = {.lex_state = 18},
  [168] = {.lex_state = 3},
  [169] = {.lex_state = 3},
  [170] = {.lex_state = 13},
  [171] = {.lex_state = 3},
  [172] = {.lex_state = 2},
  [173] = {.lex_state = 3},
  [174] = {.lex_state = 19},
  [175] = {.lex_state = 3},
  [176] = {.lex_state = 3},
  [177] = {.lex_state = 3},
  [178] = {.lex_state = 3},
  [179] = {.lex_state = 3},
  [180] = {.lex_state = 3},
  [181] = {.lex_state = 12},
  [182] = {.lex_state = 3},
  [183] = {.lex_state = 3},
  [184] = {.lex_state = 16},
  [185] = {.lex_state = 3},
  [186] = {.lex_state = 3},
  [187] = {.lex_state = 3},
  [188] = {.lex_state = 3},
  [189] = {.lex_state = 3},
  [190] = {.lex_state = 19},
  [191] = {.lex_state = 3},
  [192] = {.lex_state = 16},
  [193] = {.lex_state = 3},
  [194] = {.lex_state = 3},
  [195] = {.lex_state = 3},
  [196] = {.lex_state = 13},
  [197] = {.lex_state = 3},
  [198] = {.lex_state = 3},
  [199] = {.lex_state = 18},
  [200] = {.lex_state = 503},
  [201] = {.lex_state = 18},
  [202] = {.lex_state = 18},
  [203] = {.lex_state = 3},
  [204] = {.lex_state = 9},
  [205] = {.lex_state = 503},
  [206] = {.lex_state = 9},
  [207] = {.lex_state = 7},
  [208] = {.lex_state = 7},
  [209] = {.lex_state = 15},
  [210] = {.lex_state = 15},
  [211] = {.lex_state = 15},
  [212] = {.lex_state = 18},
  [213] = {.lex_state = 15},
  [214] = {.lex_state = 18},
  [215] = {.lex_state = 8},
  [216] = {.lex_state = 8},
  [217] = {.lex_state = 15},
  [218] = {.lex_state = 18},
  [219] = {.lex_state = 5},
  [220] = {.lex_state = 15},
  [221] = {.lex_state = 22},
  [222] = {.lex_state = 16},
  [223] = {.lex_state = 9},
  [224] = {.lex_state = 25},
  [225] = {.lex_state = 5},
  [226] = {.lex_state = 22},
  [227] = {.lex_state = 503},
  [228] = {.lex_state = 503},
  [229] = {.lex_state = 9},
  [230] = {.lex_state = 18},
  [231] = {.lex_state = 25},
  [232] = {.lex_state = 13},
  [233] = {.lex_state = 13},
  [234] = {.lex_state = 13},
  [235] = {.lex_state = 23},
  [236] = {.lex_state = 12},
  [237] = {.lex_state = 13},
  [238] = {.lex_state = 5},
  [239] = {.lex_state = 12},
  [240] = {.lex_state = 15},
  [241] = {.lex_state = 5},
  [242] = {.lex_state = 13},
  [243] = {.lex_state = 13},
  [244] = {.lex_state = 503},
  [245] = {.lex_state = 13},
  [246] = {.lex_state = 15},
  [247] = {.lex_state = 13},
  [248] = {.lex_state = 15},
  [249] = {.lex_state = 20},
  [250] = {.lex_state = 15},
  [251] = {.lex_state = 18},
  [252] = {.lex_state = 20},
  [253] = {.lex_state = 5},
  [254] = {.lex_state = 15},
  [255] = {.lex_state = 7},
  [256] = {.lex_state = 8},
  [257] = {.lex_state = 18},
  [258] = {.lex_state = 22},
  [259] = {.lex_state = 7},
  [260] = {.lex_state = 23},
  [261] = {.lex_state = 19},
  [262] = {.lex_state = 12},
  [263] = {.lex_state = 503},
  [264] = {.lex_state = 12},
  [265] = {.lex_state = 12},
  [266] = {.lex_state = 12},
  [267] = {.lex_state = 22},
  [268] = {.lex_state = 0},
  [269] = {.lex_state = 503},
  [270] = {.lex_state = 20},
  [271] = {.lex_state = 12},
  [272] = {.lex_state = 23},
  [273] = {.lex_state = 23},
  [274] = {.lex_state = 20},
  [275] = {.lex_state = 25},
  [276] = {.lex_state = 20},
  [277] = {.lex_state = 19},
  [278] = {.lex_state = 19},
  [279] = {.lex_state = 0},
  [280] = {.lex_state = 0},
  [281] = {.lex_state = 7},
  [282] = {.lex_state = 25},
  [283] = {.lex_state = 19},
  [284] = {.lex_state = 8},
  [285] = {.lex_state = 7},
  [286] = {.lex_state = 7},
  [287] = {.lex_state = 0},
  [288] = {.lex_state = 0},
  [289] = {.lex_state = 19},
  [290] = {.lex_state = 19},
  [291] = {.lex_state = 23},
  [292] = {.lex_state = 20},
  [293] = {.lex_state = 0},
  [294] = {.lex_state = 23},
  [295] = {.lex_state = 503},
  [296] = {.lex_state = 23},
  [297] = {.lex_state = 15},
  [298] = {.lex_state = 15},
  [299] = {.lex_state = 24},
  [300] = {.lex_state = 24},
  [301] = {.lex_state = 24},
  [302] = {.lex_state = 24},
  [303] = {.lex_state = 9},
  [304] = {.lex_state = 24},
  [305] = {.lex_state = 24},
  [306] = {.lex_state = 23},
  [307] = {.lex_state = 24},
  [308] = {.lex_state = 23},
  [309] = {.lex_state = 24},
  [310] = {.lex_state = 23},
  [311] = {.lex_state = 24},
  [312] = {.lex_state = 503},
  [313] = {.lex_state = 15},
  [314] = {.lex_state = 18},
  [315] = {.lex_state = 15},
  [316] = {.lex_state = 18},
  [317] = {.lex_state = 18},
  [318] = {.lex_state = 21},
  [319] = {.lex_state = 17},
  [320] = {.lex_state = 24},
  [321] = {.lex_state = 18},
  [322] = {.lex_state = 18},
  [323] = {.lex_state = 18},
  [324] = {.lex_state = 15},
  [325] = {.lex_state = 15},
  [326] = {.lex_state = 15},
  [327] = {.lex_state = 18},
  [328] = {.lex_state = 503},
  [329] = {.lex_state = 15},
  [330] = {.lex_state = 18},
  [331] = {.lex_state = 503},
  [332] = {.lex_state = 18},
  [333] = {.lex_state = 18},
  [334] = {.lex_state = 9},
  [335] = {.lex_state = 18},
  [336] = {.lex_state = 18},
  [337] = {.lex_state = 18},
  [338] = {.lex_state = 15},
  [339] = {.lex_state = 18},
  [340] = {.lex_state = 15},
  [341] = {.lex_state = 15},
  [342] = {.lex_state = 15},
  [343] = {.lex_state = 18},
  [344] = {.lex_state = 24},
  [345] = {.lex_state = 15},
  [346] = {.lex_state = 15},
  [347] = {.lex_state = 503},
  [348] = {.lex_state = 503},
  [349] = {.lex_state = 18},
  [350] = {.lex_state = 23},
  [351] = {.lex_state = 503},
  [352] = {.lex_state = 18},
  [353] = {.lex_state = 503},
  [354] = {.lex_state = 4},
  [355] = {.lex_state = 17},
  [356] = {.lex_state = 503},
  [357] = {.lex_state = 23},
  [358] = {.lex_state = 4},
  [359] = {.lex_state = 18},
  [360] = {.lex_state = 503},
  [361] = {.lex_state = 0},
  [362] = {.lex_state = 503},
  [363] = {.lex_state = 503},
  [364] = {.lex_state = 503},
  [365] = {.lex_state = 503},
  [366] = {.lex_state = 503},
  [367] = {.lex_state = 0},
  [368] = {.lex_state = 503},
  [369] = {.lex_state = 0},
  [370] = {.lex_state = 0},
  [371] = {.lex_state = 0},
  [372] = {.lex_state = 0},
  [373] = {.lex_state = 0},
  [374] = {.lex_state = 0},
  [375] = {.lex_state = 0},
  [376] = {.lex_state = 23},
  [377] = {.lex_state = 21},
  [378] = {.lex_state = 0},
  [379] = {.lex_state = 0},
  [380] = {.lex_state = 18},
  [381] = {.lex_state = 23},
  [382] = {.lex_state = 23},
  [383] = {.lex_state = 503},
  [384] = {.lex_state = 0},
  [385] = {.lex_state = 0},
  [386] = {.lex_state = 503},
  [387] = {.lex_state = 503},
  [388] = {.lex_state = 503},
  [389] = {.lex_state = 0},
  [390] = {.lex_state = 0},
  [391] = {.lex_state = 503},
  [392] = {.lex_state = 503},
  [393] = {.lex_state = 503},
  [394] = {.lex_state = 23},
  [395] = {.lex_state = 0},
  [396] = {.lex_state = 503},
  [397] = {.lex_state = 15},
  [398] = {.lex_state = 18},
  [399] = {.lex_state = 0},
  [400] = {.lex_state = 503},
  [401] = {.lex_state = 503},
  [402] = {.lex_state = 503},
  [403] = {.lex_state = 503},
  [404] = {.lex_state = 503},
  [405] = {.lex_state = 503},
  [406] = {.lex_state = 503},
  [407] = {.lex_state = 503},
  [408] = {.lex_state = 503},
  [409] = {.lex_state = 503},
  [410] = {.lex_state = 503},
  [411] = {.lex_state = 503},
  [412] = {.lex_state = 503},
  [413] = {.lex_state = 503},
  [414] = {.lex_state = 503},
  [415] = {.lex_state = 503},
  [416] = {.lex_state = 0},
  [417] = {.lex_state = 0},
  [418] = {.lex_state = 503},
  [419] = {.lex_state = 503},
  [420] = {.lex_state = 0},
  [421] = {.lex_state = 503},
  [422] = {.lex_state = 503},
  [423] = {.lex_state = 503},
  [424] = {.lex_state = 0},
  [425] = {.lex_state = 0},
  [426] = {.lex_state = 503},
  [427] = {.lex_state = 503},
  [428] = {.lex_state = 0},
  [429] = {.lex_state = 503},
  [430] = {.lex_state = 503},
  [431] = {.lex_state = 503},
  [432] = {.lex_state = 503},
  [433] = {.lex_state = 503},
  [434] = {.lex_state = 503},
  [435] = {.lex_state = 503},
  [436] = {.lex_state = 503},
  [437] = {.lex_state = 0},
  [438] = {.lex_state = 503},
  [439] = {.lex_state = 503},
  [440] = {.lex_state = 503},
  [441] = {.lex_state = 503},
  [442] = {.lex_state = 0},
  [443] = {.lex_state = 0},
  [444] = {.lex_state = 503},
  [445] = {.lex_state = 0},
  [446] = {.lex_state = 0},
  [447] = {.lex_state = 503},
  [448] = {.lex_state = 10},
  [449] = {.lex_state = 503},
  [450] = {.lex_state = 503},
  [451] = {.lex_state = 11},
  [452] = {.lex_state = 15},
  [453] = {.lex_state = 503},
  [454] = {.lex_state = 503},
  [455] = {.lex_state = 503},
  [456] = {.lex_state = 503},
  [457] = {.lex_state = 503},
  [458] = {.lex_state = 503},
  [459] = {.lex_state = 15},
  [460] = {.lex_state = 863},
  [461] = {.lex_state = 503},
  [462] = {.lex_state = 503},
  [463] = {.lex_state = 503},
  [464] = {.lex_state = 503},
  [465] = {.lex_state = 503},
  [466] = {.lex_state = 503},
  [467] = {.lex_state = 503},
  [468] = {.lex_state = 0},
  [469] = {.lex_state = 503},
  [470] = {.lex_state = 0},
  [471] = {.lex_state = 503},
  [472] = {.lex_state = 503},
  [473] = {.lex_state = 503},
  [474] = {.lex_state = 0},
  [475] = {.lex_state = 503},
  [476] = {.lex_state = 503},
  [477] = {.lex_state = 503},
  [478] = {.lex_state = 15},
  [479] = {.lex_state = 503},
  [480] = {.lex_state = 0},
  [481] = {.lex_state = 503},
  [482] = {.lex_state = 503},
  [483] = {.lex_state = 503},
  [484] = {.lex_state = 503},
  [485] = {.lex_state = 18},
  [486] = {.lex_state = 503},
  [487] = {.lex_state = 503},
  [488] = {.lex_state = 503},
  [489] = {.lex_state = 503},
  [490] = {.lex_state = 0},
  [491] = {.lex_state = 503},
  [492] = {.lex_state = 503},
  [493] = {.lex_state = 503},
  [494] = {.lex_state = 503},
  [495] = {.lex_state = 0},
  [496] = {.lex_state = 0},
  [497] = {.lex_state = 0},
  [498] = {.lex_state = 26},
  [499] = {.lex_state = 503},
  [500] = {.lex_state = 503},
  [501] = {.lex_state = 503},
  [502] = {.lex_state = 15},
  [503] = {.lex_state = 503},
  [504] = {.lex_state = 15},
  [505] = {.lex_state = 503},
  [506] = {.lex_state = 15},
  [507] = {.lex_state = 15},
  [508] = {.lex_state = 15},
  [509] = {.lex_state = 15},
  [510] = {.lex_state = 15},
  [511] = {.lex_state = 15},
  [512] = {.lex_state = 503},
  [513] = {.lex_state = 0},
  [514] = {.lex_state = 503},
  [515] = {.lex_state = 503},
  [516] = {.lex_state = 503},
  [517] = {.lex_state = 503},
  [518] = {.lex_state = 503},
  [519] = {.lex_state = 0},
  [520] = {.lex_state = 0},
  [521] = {.lex_state = 503},
  [522] = {.lex_state = 503},
  [523] = {.lex_state = 503},
  [524] = {.lex_state = 503},
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
    [sym_hurl_file] = STATE(513),
    [sym_entry] = STATE(96),
    [sym_request] = STATE(92),
    [sym_method] = STATE(121),
    [aux_sym_hurl_file_repeat1] = STATE(96),
    [aux_sym_hurl_file_repeat2] = STATE(312),
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
    [sym_header] = STATE(4),
    [sym_body] = STATE(97),
    [sym_request_section] = STATE(7),
    [sym_basic_auth_section] = STATE(55),
    [sym_query_string_params_section] = STATE(55),
    [sym_form_params_section] = STATE(55),
    [sym_multipart_form_data_section] = STATE(55),
    [sym_cookies_section] = STATE(55),
    [sym_options_section] = STATE(55),
    [sym_key_value] = STATE(438),
    [sym_bytes] = STATE(433),
    [sym_xml] = STATE(429),
    [sym_oneline_base64] = STATE(429),
    [sym_oneline_file] = STATE(429),
    [sym_oneline_hex] = STATE(429),
    [sym_key_string] = STATE(428),
    [sym_key_string_content] = STATE(146),
    [sym_key_string_escaped_char] = STATE(231),
    [sym_oneline_string] = STATE(429),
    [sym_multiline_string] = STATE(429),
    [sym_json_value] = STATE(429),
    [sym_json_object] = STATE(427),
    [sym_json_array] = STATE(427),
    [sym_json_string] = STATE(427),
    [sym_json_number] = STATE(427),
    [sym_template] = STATE(241),
    [sym_boolean] = STATE(427),
    [sym_null] = STATE(427),
    [sym_integer] = STATE(228),
    [sym_digit] = STATE(205),
    [aux_sym_hurl_file_repeat2] = STATE(49),
    [aux_sym_request_repeat1] = STATE(4),
    [aux_sym_request_repeat2] = STATE(7),
    [aux_sym_key_string_repeat1] = STATE(146),
    [aux_sym_key_string_content_repeat1] = STATE(231),
    [aux_sym_integer_repeat1] = STATE(205),
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
    [sym_header] = STATE(5),
    [sym_body] = STATE(100),
    [sym_request_section] = STATE(6),
    [sym_basic_auth_section] = STATE(55),
    [sym_query_string_params_section] = STATE(55),
    [sym_form_params_section] = STATE(55),
    [sym_multipart_form_data_section] = STATE(55),
    [sym_cookies_section] = STATE(55),
    [sym_options_section] = STATE(55),
    [sym_key_value] = STATE(438),
    [sym_bytes] = STATE(433),
    [sym_xml] = STATE(429),
    [sym_oneline_base64] = STATE(429),
    [sym_oneline_file] = STATE(429),
    [sym_oneline_hex] = STATE(429),
    [sym_key_string] = STATE(428),
    [sym_key_string_content] = STATE(146),
    [sym_key_string_escaped_char] = STATE(231),
    [sym_oneline_string] = STATE(429),
    [sym_multiline_string] = STATE(429),
    [sym_json_value] = STATE(429),
    [sym_json_object] = STATE(427),
    [sym_json_array] = STATE(427),
    [sym_json_string] = STATE(427),
    [sym_json_number] = STATE(427),
    [sym_template] = STATE(241),
    [sym_boolean] = STATE(427),
    [sym_null] = STATE(427),
    [sym_integer] = STATE(228),
    [sym_digit] = STATE(205),
    [aux_sym_hurl_file_repeat2] = STATE(49),
    [aux_sym_request_repeat1] = STATE(5),
    [aux_sym_request_repeat2] = STATE(6),
    [aux_sym_key_string_repeat1] = STATE(146),
    [aux_sym_key_string_content_repeat1] = STATE(231),
    [aux_sym_integer_repeat1] = STATE(205),
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
    [sym_header] = STATE(22),
    [sym_body] = STATE(104),
    [sym_request_section] = STATE(8),
    [sym_basic_auth_section] = STATE(55),
    [sym_query_string_params_section] = STATE(55),
    [sym_form_params_section] = STATE(55),
    [sym_multipart_form_data_section] = STATE(55),
    [sym_cookies_section] = STATE(55),
    [sym_options_section] = STATE(55),
    [sym_key_value] = STATE(438),
    [sym_bytes] = STATE(433),
    [sym_xml] = STATE(429),
    [sym_oneline_base64] = STATE(429),
    [sym_oneline_file] = STATE(429),
    [sym_oneline_hex] = STATE(429),
    [sym_key_string] = STATE(428),
    [sym_key_string_content] = STATE(146),
    [sym_key_string_escaped_char] = STATE(231),
    [sym_oneline_string] = STATE(429),
    [sym_multiline_string] = STATE(429),
    [sym_json_value] = STATE(429),
    [sym_json_object] = STATE(427),
    [sym_json_array] = STATE(427),
    [sym_json_string] = STATE(427),
    [sym_json_number] = STATE(427),
    [sym_template] = STATE(241),
    [sym_boolean] = STATE(427),
    [sym_null] = STATE(427),
    [sym_integer] = STATE(228),
    [sym_digit] = STATE(205),
    [aux_sym_request_repeat1] = STATE(22),
    [aux_sym_request_repeat2] = STATE(8),
    [aux_sym_key_string_repeat1] = STATE(146),
    [aux_sym_key_string_content_repeat1] = STATE(231),
    [aux_sym_integer_repeat1] = STATE(205),
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
  [5] = {
    [sym_header] = STATE(22),
    [sym_body] = STATE(97),
    [sym_request_section] = STATE(7),
    [sym_basic_auth_section] = STATE(55),
    [sym_query_string_params_section] = STATE(55),
    [sym_form_params_section] = STATE(55),
    [sym_multipart_form_data_section] = STATE(55),
    [sym_cookies_section] = STATE(55),
    [sym_options_section] = STATE(55),
    [sym_key_value] = STATE(438),
    [sym_bytes] = STATE(433),
    [sym_xml] = STATE(429),
    [sym_oneline_base64] = STATE(429),
    [sym_oneline_file] = STATE(429),
    [sym_oneline_hex] = STATE(429),
    [sym_key_string] = STATE(428),
    [sym_key_string_content] = STATE(146),
    [sym_key_string_escaped_char] = STATE(231),
    [sym_oneline_string] = STATE(429),
    [sym_multiline_string] = STATE(429),
    [sym_json_value] = STATE(429),
    [sym_json_object] = STATE(427),
    [sym_json_array] = STATE(427),
    [sym_json_string] = STATE(427),
    [sym_json_number] = STATE(427),
    [sym_template] = STATE(241),
    [sym_boolean] = STATE(427),
    [sym_null] = STATE(427),
    [sym_integer] = STATE(228),
    [sym_digit] = STATE(205),
    [aux_sym_request_repeat1] = STATE(22),
    [aux_sym_request_repeat2] = STATE(7),
    [aux_sym_key_string_repeat1] = STATE(146),
    [aux_sym_key_string_content_repeat1] = STATE(231),
    [aux_sym_integer_repeat1] = STATE(205),
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
  [6] = {
    [sym_body] = STATE(97),
    [sym_request_section] = STATE(46),
    [sym_basic_auth_section] = STATE(55),
    [sym_query_string_params_section] = STATE(55),
    [sym_form_params_section] = STATE(55),
    [sym_multipart_form_data_section] = STATE(55),
    [sym_cookies_section] = STATE(55),
    [sym_options_section] = STATE(55),
    [sym_bytes] = STATE(433),
    [sym_xml] = STATE(429),
    [sym_oneline_base64] = STATE(429),
    [sym_oneline_file] = STATE(429),
    [sym_oneline_hex] = STATE(429),
    [sym_oneline_string] = STATE(429),
    [sym_multiline_string] = STATE(429),
    [sym_json_value] = STATE(429),
    [sym_json_object] = STATE(427),
    [sym_json_array] = STATE(427),
    [sym_json_string] = STATE(427),
    [sym_json_number] = STATE(427),
    [sym_template] = STATE(427),
    [sym_boolean] = STATE(427),
    [sym_null] = STATE(427),
    [sym_integer] = STATE(228),
    [sym_digit] = STATE(205),
    [aux_sym_request_repeat2] = STATE(46),
    [aux_sym_integer_repeat1] = STATE(205),
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
    [sym_body] = STATE(104),
    [sym_request_section] = STATE(46),
    [sym_basic_auth_section] = STATE(55),
    [sym_query_string_params_section] = STATE(55),
    [sym_form_params_section] = STATE(55),
    [sym_multipart_form_data_section] = STATE(55),
    [sym_cookies_section] = STATE(55),
    [sym_options_section] = STATE(55),
    [sym_bytes] = STATE(433),
    [sym_xml] = STATE(429),
    [sym_oneline_base64] = STATE(429),
    [sym_oneline_file] = STATE(429),
    [sym_oneline_hex] = STATE(429),
    [sym_oneline_string] = STATE(429),
    [sym_multiline_string] = STATE(429),
    [sym_json_value] = STATE(429),
    [sym_json_object] = STATE(427),
    [sym_json_array] = STATE(427),
    [sym_json_string] = STATE(427),
    [sym_json_number] = STATE(427),
    [sym_template] = STATE(427),
    [sym_boolean] = STATE(427),
    [sym_null] = STATE(427),
    [sym_integer] = STATE(228),
    [sym_digit] = STATE(205),
    [aux_sym_request_repeat2] = STATE(46),
    [aux_sym_integer_repeat1] = STATE(205),
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
    [sym_body] = STATE(98),
    [sym_request_section] = STATE(46),
    [sym_basic_auth_section] = STATE(55),
    [sym_query_string_params_section] = STATE(55),
    [sym_form_params_section] = STATE(55),
    [sym_multipart_form_data_section] = STATE(55),
    [sym_cookies_section] = STATE(55),
    [sym_options_section] = STATE(55),
    [sym_bytes] = STATE(433),
    [sym_xml] = STATE(429),
    [sym_oneline_base64] = STATE(429),
    [sym_oneline_file] = STATE(429),
    [sym_oneline_hex] = STATE(429),
    [sym_oneline_string] = STATE(429),
    [sym_multiline_string] = STATE(429),
    [sym_json_value] = STATE(429),
    [sym_json_object] = STATE(427),
    [sym_json_array] = STATE(427),
    [sym_json_string] = STATE(427),
    [sym_json_number] = STATE(427),
    [sym_template] = STATE(427),
    [sym_boolean] = STATE(427),
    [sym_null] = STATE(427),
    [sym_integer] = STATE(228),
    [sym_digit] = STATE(205),
    [aux_sym_request_repeat2] = STATE(46),
    [aux_sym_integer_repeat1] = STATE(205),
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
    [sym_body] = STATE(110),
    [sym_response_section] = STATE(19),
    [sym_captures_section] = STATE(63),
    [sym_asserts_section] = STATE(63),
    [sym_key_value] = STATE(482),
    [sym_bytes] = STATE(433),
    [sym_xml] = STATE(429),
    [sym_oneline_base64] = STATE(429),
    [sym_oneline_file] = STATE(429),
    [sym_oneline_hex] = STATE(429),
    [sym_key_string] = STATE(428),
    [sym_key_string_content] = STATE(146),
    [sym_key_string_escaped_char] = STATE(231),
    [sym_oneline_string] = STATE(429),
    [sym_multiline_string] = STATE(429),
    [sym_json_value] = STATE(429),
    [sym_json_object] = STATE(427),
    [sym_json_array] = STATE(427),
    [sym_json_string] = STATE(427),
    [sym_json_number] = STATE(427),
    [sym_template] = STATE(241),
    [sym_boolean] = STATE(427),
    [sym_null] = STATE(427),
    [sym_integer] = STATE(228),
    [sym_digit] = STATE(205),
    [aux_sym_request_repeat1] = STATE(10),
    [aux_sym_response_repeat1] = STATE(19),
    [aux_sym_key_string_repeat1] = STATE(146),
    [aux_sym_key_string_content_repeat1] = STATE(231),
    [aux_sym_integer_repeat1] = STATE(205),
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
    [sym_header] = STATE(50),
    [sym_body] = STATE(114),
    [sym_response_section] = STATE(20),
    [sym_captures_section] = STATE(63),
    [sym_asserts_section] = STATE(63),
    [sym_key_value] = STATE(482),
    [sym_bytes] = STATE(433),
    [sym_xml] = STATE(429),
    [sym_oneline_base64] = STATE(429),
    [sym_oneline_file] = STATE(429),
    [sym_oneline_hex] = STATE(429),
    [sym_key_string] = STATE(428),
    [sym_key_string_content] = STATE(146),
    [sym_key_string_escaped_char] = STATE(231),
    [sym_oneline_string] = STATE(429),
    [sym_multiline_string] = STATE(429),
    [sym_json_value] = STATE(429),
    [sym_json_object] = STATE(427),
    [sym_json_array] = STATE(427),
    [sym_json_string] = STATE(427),
    [sym_json_number] = STATE(427),
    [sym_template] = STATE(241),
    [sym_boolean] = STATE(427),
    [sym_null] = STATE(427),
    [sym_integer] = STATE(228),
    [sym_digit] = STATE(205),
    [aux_sym_request_repeat1] = STATE(50),
    [aux_sym_response_repeat1] = STATE(20),
    [aux_sym_key_string_repeat1] = STATE(146),
    [aux_sym_key_string_content_repeat1] = STATE(231),
    [aux_sym_integer_repeat1] = STATE(205),
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
    [sym_option] = STATE(12),
    [sym_ca_certificate_option] = STATE(26),
    [sym_follow_redirect_option] = STATE(26),
    [sym_insecure_option] = STATE(26),
    [sym_max_redirs_option] = STATE(26),
    [sym_retry_option] = STATE(26),
    [sym_retry_interval_option] = STATE(26),
    [sym_retry_max_count_option] = STATE(26),
    [sym_variable_option] = STATE(26),
    [sym_verbose_option] = STATE(26),
    [sym_very_verbose_option] = STATE(26),
    [aux_sym_options_section_repeat1] = STATE(12),
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
    [sym_option] = STATE(13),
    [sym_ca_certificate_option] = STATE(26),
    [sym_follow_redirect_option] = STATE(26),
    [sym_insecure_option] = STATE(26),
    [sym_max_redirs_option] = STATE(26),
    [sym_retry_option] = STATE(26),
    [sym_retry_interval_option] = STATE(26),
    [sym_retry_max_count_option] = STATE(26),
    [sym_variable_option] = STATE(26),
    [sym_verbose_option] = STATE(26),
    [sym_very_verbose_option] = STATE(26),
    [aux_sym_options_section_repeat1] = STATE(13),
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
    [sym_ca_certificate_option] = STATE(26),
    [sym_follow_redirect_option] = STATE(26),
    [sym_insecure_option] = STATE(26),
    [sym_max_redirs_option] = STATE(26),
    [sym_retry_option] = STATE(26),
    [sym_retry_interval_option] = STATE(26),
    [sym_retry_max_count_option] = STATE(26),
    [sym_variable_option] = STATE(26),
    [sym_verbose_option] = STATE(26),
    [sym_very_verbose_option] = STATE(26),
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
    ACTIONS(154), 1,
      anon_sym_status,
    ACTIONS(157), 1,
      anon_sym_url,
    ACTIONS(160), 1,
      anon_sym_header,
    ACTIONS(163), 1,
      anon_sym_cookie,
    ACTIONS(166), 1,
      anon_sym_body,
    ACTIONS(169), 1,
      anon_sym_xpath,
    ACTIONS(172), 1,
      anon_sym_jsonpath,
    ACTIONS(175), 1,
      anon_sym_regex,
    ACTIONS(178), 1,
      anon_sym_duration,
    ACTIONS(181), 1,
      anon_sym_sha256,
    ACTIONS(184), 1,
      anon_sym_md5,
    ACTIONS(187), 1,
      anon_sym_bytes,
    STATE(17), 1,
      sym_query,
    ACTIONS(147), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(14), 2,
      sym_assert,
      aux_sym_asserts_section_repeat1,
    STATE(85), 13,
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
    ACTIONS(194), 1,
      anon_sym_variable,
    ACTIONS(196), 1,
      anon_sym_status,
    ACTIONS(198), 1,
      anon_sym_url,
    ACTIONS(200), 1,
      anon_sym_header,
    ACTIONS(202), 1,
      anon_sym_cookie,
    ACTIONS(204), 1,
      anon_sym_body,
    ACTIONS(206), 1,
      anon_sym_xpath,
    ACTIONS(208), 1,
      anon_sym_jsonpath,
    ACTIONS(210), 1,
      anon_sym_regex,
    ACTIONS(212), 1,
      anon_sym_duration,
    ACTIONS(214), 1,
      anon_sym_sha256,
    ACTIONS(216), 1,
      anon_sym_md5,
    ACTIONS(218), 1,
      anon_sym_bytes,
    STATE(17), 1,
      sym_query,
    ACTIONS(190), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(14), 2,
      sym_assert,
      aux_sym_asserts_section_repeat1,
    STATE(85), 13,
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
    ACTIONS(192), 32,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
    ACTIONS(194), 1,
      anon_sym_variable,
    ACTIONS(196), 1,
      anon_sym_status,
    ACTIONS(198), 1,
      anon_sym_url,
    ACTIONS(200), 1,
      anon_sym_header,
    ACTIONS(202), 1,
      anon_sym_cookie,
    ACTIONS(204), 1,
      anon_sym_body,
    ACTIONS(206), 1,
      anon_sym_xpath,
    ACTIONS(208), 1,
      anon_sym_jsonpath,
    ACTIONS(210), 1,
      anon_sym_regex,
    ACTIONS(212), 1,
      anon_sym_duration,
    ACTIONS(214), 1,
      anon_sym_sha256,
    ACTIONS(216), 1,
      anon_sym_md5,
    ACTIONS(218), 1,
      anon_sym_bytes,
    STATE(17), 1,
      sym_query,
    ACTIONS(220), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(15), 2,
      sym_assert,
      aux_sym_asserts_section_repeat1,
    STATE(85), 13,
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
    STATE(447), 1,
      sym_predicate,
    STATE(524), 1,
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
    STATE(68), 7,
      sym_regex_filter,
      sym_count_filter,
      sym_url_encode_filter,
      sym_url_decode_filter,
      sym_html_encode_filter,
      sym_html_decode_filter,
      sym_to_int_filter,
    STATE(522), 17,
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
    STATE(524), 1,
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
    STATE(57), 2,
      sym_filter,
      aux_sym_capture_repeat1,
    STATE(68), 7,
      sym_regex_filter,
      sym_count_filter,
      sym_url_encode_filter,
      sym_url_decode_filter,
      sym_html_encode_filter,
      sym_html_decode_filter,
      sym_to_int_filter,
    STATE(522), 17,
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
    STATE(114), 1,
      sym_body,
    STATE(228), 1,
      sym_integer,
    STATE(433), 1,
      sym_bytes,
    ACTIONS(55), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(81), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(59), 2,
      sym_response_section,
      aux_sym_response_repeat1,
    STATE(63), 2,
      sym_captures_section,
      sym_asserts_section,
    STATE(205), 2,
      sym_digit,
      aux_sym_integer_repeat1,
    STATE(427), 7,
      sym_json_object,
      sym_json_array,
      sym_json_string,
      sym_json_number,
      sym_template,
      sym_boolean,
      sym_null,
    STATE(429), 7,
      sym_xml,
      sym_oneline_base64,
      sym_oneline_file,
      sym_oneline_hex,
      sym_oneline_string,
      sym_multiline_string,
      sym_json_value,
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
    STATE(111), 1,
      sym_body,
    STATE(228), 1,
      sym_integer,
    STATE(433), 1,
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
    STATE(205), 2,
      sym_digit,
      aux_sym_integer_repeat1,
    STATE(427), 7,
      sym_json_object,
      sym_json_array,
      sym_json_string,
      sym_json_number,
      sym_template,
      sym_boolean,
      sym_null,
    STATE(429), 7,
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
  [777] = 11,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_BSLASH,
    ACTIONS(43), 1,
      sym_key_string_text,
    ACTIONS(282), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(441), 1,
      sym_multipart_form_data_param,
    STATE(520), 1,
      sym_key_string,
    ACTIONS(278), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(231), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(523), 2,
      sym_key_value,
      sym_file_param,
    STATE(146), 3,
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
      anon_sym_BSLASH,
    ACTIONS(291), 1,
      sym_key_string_text,
    ACTIONS(294), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(428), 1,
      sym_key_string,
    STATE(438), 1,
      sym_key_value,
    ACTIONS(284), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(22), 2,
      sym_header,
      aux_sym_request_repeat1,
    STATE(231), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(146), 3,
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
      anon_sym_BSLASH,
    ACTIONS(43), 1,
      sym_key_string_text,
    ACTIONS(282), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(441), 1,
      sym_multipart_form_data_param,
    STATE(520), 1,
      sym_key_string,
    ACTIONS(297), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(231), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(523), 2,
      sym_key_value,
      sym_file_param,
    STATE(146), 3,
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
      anon_sym_BSLASH,
    ACTIONS(43), 1,
      sym_key_string_text,
    ACTIONS(282), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(441), 1,
      sym_multipart_form_data_param,
    STATE(520), 1,
      sym_key_string,
    ACTIONS(301), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(231), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(523), 2,
      sym_key_value,
      sym_file_param,
    STATE(146), 3,
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
    ACTIONS(305), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(307), 50,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
  [1145] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(309), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(311), 50,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
  [1205] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(313), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(315), 50,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
  [1265] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(317), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(319), 50,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
  [1325] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(321), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(323), 50,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
  [1385] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(325), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
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
      anon_sym_LBRACE_LBRACE,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      aux_sym_digit_token1,
  [1445] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(329), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
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
      anon_sym_LBRACE_LBRACE,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      aux_sym_digit_token1,
  [1505] = 3,
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
  [1565] = 3,
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
  [1625] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(341), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
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
      anon_sym_LBRACE_LBRACE,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      aux_sym_digit_token1,
  [1685] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(345), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
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
      anon_sym_LBRACE_LBRACE,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      aux_sym_digit_token1,
  [1745] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(349), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
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
      anon_sym_LBRACE_LBRACE,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      aux_sym_digit_token1,
  [1805] = 10,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_BSLASH,
    ACTIONS(43), 1,
      sym_key_string_text,
    ACTIONS(282), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(428), 1,
      sym_key_string,
    STATE(444), 1,
      sym_key_value,
    ACTIONS(353), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(231), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(146), 3,
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
      anon_sym_BSLASH,
    ACTIONS(43), 1,
      sym_key_string_text,
    ACTIONS(282), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(428), 1,
      sym_key_string,
    STATE(444), 1,
      sym_key_value,
    ACTIONS(357), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(231), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(146), 3,
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
      anon_sym_BSLASH,
    ACTIONS(43), 1,
      sym_key_string_text,
    ACTIONS(282), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(428), 1,
      sym_key_string,
    STATE(444), 1,
      sym_key_value,
    ACTIONS(361), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(231), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(146), 3,
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
      anon_sym_BSLASH,
    ACTIONS(43), 1,
      sym_key_string_text,
    ACTIONS(282), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(428), 1,
      sym_key_string,
    STATE(444), 1,
      sym_key_value,
    ACTIONS(365), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(231), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(146), 3,
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
      anon_sym_BSLASH,
    ACTIONS(43), 1,
      sym_key_string_text,
    ACTIONS(282), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(428), 1,
      sym_key_string,
    STATE(444), 1,
      sym_key_value,
    ACTIONS(369), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(231), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(146), 3,
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
      anon_sym_BSLASH,
    ACTIONS(43), 1,
      sym_key_string_text,
    ACTIONS(282), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(428), 1,
      sym_key_string,
    STATE(444), 1,
      sym_key_value,
    ACTIONS(373), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(231), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(146), 3,
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
      anon_sym_BSLASH,
    ACTIONS(43), 1,
      sym_key_string_text,
    ACTIONS(282), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(428), 1,
      sym_key_string,
    STATE(444), 1,
      sym_key_value,
    ACTIONS(377), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(231), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(146), 3,
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
      anon_sym_BSLASH,
    ACTIONS(43), 1,
      sym_key_string_text,
    ACTIONS(282), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(428), 1,
      sym_key_string,
    STATE(444), 1,
      sym_key_value,
    ACTIONS(381), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(231), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(146), 3,
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
      anon_sym_BSLASH,
    ACTIONS(43), 1,
      sym_key_string_text,
    ACTIONS(282), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(428), 1,
      sym_key_string,
    STATE(444), 1,
      sym_key_value,
    ACTIONS(385), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(231), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(146), 3,
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
    ACTIONS(389), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(46), 2,
      sym_request_section,
      aux_sym_request_repeat2,
    STATE(55), 6,
      sym_basic_auth_section,
      sym_query_string_params_section,
      sym_form_params_section,
      sym_multipart_form_data_section,
      sym_cookies_section,
      sym_options_section,
    ACTIONS(391), 34,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
  [2536] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(411), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(413), 45,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
  [2591] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(415), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(417), 45,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
  [2646] = 5,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(419), 1,
      ts_builtin_sym_end,
    ACTIONS(421), 1,
      anon_sym_LF,
    STATE(49), 1,
      aux_sym_hurl_file_repeat2,
    ACTIONS(424), 42,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
  [2703] = 11,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(288), 1,
      anon_sym_BSLASH,
    ACTIONS(291), 1,
      sym_key_string_text,
    ACTIONS(294), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(428), 1,
      sym_key_string,
    STATE(482), 1,
      sym_key_value,
    ACTIONS(284), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(50), 2,
      sym_header,
      aux_sym_request_repeat1,
    STATE(231), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(146), 3,
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
  [2772] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(426), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(428), 42,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
  [2824] = 10,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(434), 1,
      anon_sym_BSLASH,
    ACTIONS(437), 1,
      sym_key_string_text,
    ACTIONS(440), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(420), 1,
      sym_key_string,
    ACTIONS(430), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(52), 2,
      sym_capture,
      aux_sym_captures_section_repeat1,
    STATE(231), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(146), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
    ACTIONS(432), 31,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
  [2890] = 10,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_BSLASH,
    ACTIONS(43), 1,
      sym_key_string_text,
    ACTIONS(282), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(420), 1,
      sym_key_string,
    ACTIONS(443), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(52), 2,
      sym_capture,
      aux_sym_captures_section_repeat1,
    STATE(231), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(146), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
    ACTIONS(445), 31,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
  [2956] = 10,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_BSLASH,
    ACTIONS(43), 1,
      sym_key_string_text,
    ACTIONS(282), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(420), 1,
      sym_key_string,
    ACTIONS(447), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(53), 2,
      sym_capture,
      aux_sym_captures_section_repeat1,
    STATE(231), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(146), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
    ACTIONS(449), 31,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
  [3022] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(451), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(453), 40,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
  [3072] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(455), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(457), 40,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
  [3122] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(459), 1,
      anon_sym_regex,
    ACTIONS(466), 1,
      anon_sym_count,
    ACTIONS(469), 1,
      anon_sym_urlEncode,
    ACTIONS(472), 1,
      anon_sym_urlDecode,
    ACTIONS(475), 1,
      anon_sym_htmlEscape,
    ACTIONS(478), 1,
      anon_sym_htmlUnescape,
    ACTIONS(481), 1,
      anon_sym_toInt,
    STATE(57), 2,
      sym_filter,
      aux_sym_capture_repeat1,
    ACTIONS(462), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    STATE(68), 7,
      sym_regex_filter,
      sym_count_filter,
      sym_url_encode_filter,
      sym_url_decode_filter,
      sym_html_encode_filter,
      sym_html_decode_filter,
      sym_to_int_filter,
    ACTIONS(464), 20,
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
  [3189] = 20,
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
    STATE(467), 1,
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
    STATE(522), 17,
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
  [3272] = 7,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(488), 1,
      anon_sym_LBRACKCaptures_RBRACK,
    ACTIONS(491), 1,
      anon_sym_LBRACKAsserts_RBRACK,
    ACTIONS(484), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(59), 2,
      sym_response_section,
      aux_sym_response_repeat1,
    STATE(63), 2,
      sym_captures_section,
      sym_asserts_section,
    ACTIONS(486), 30,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
  [3326] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(494), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(496), 34,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
  [3370] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(426), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(428), 34,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
  [3414] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(498), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(500), 34,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
  [3458] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(502), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(504), 32,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
  [3500] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(508), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(506), 27,
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
    ACTIONS(512), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(510), 27,
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
    ACTIONS(516), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(514), 27,
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
    ACTIONS(520), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(518), 27,
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
    ACTIONS(524), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(522), 27,
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
    ACTIONS(528), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(526), 27,
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
    ACTIONS(532), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(530), 27,
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
    ACTIONS(536), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(534), 27,
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
    ACTIONS(540), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(538), 27,
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
    ACTIONS(544), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(542), 27,
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
    ACTIONS(548), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(546), 27,
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
    ACTIONS(552), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(550), 27,
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
    ACTIONS(556), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(554), 26,
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
    ACTIONS(560), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(558), 26,
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
    ACTIONS(564), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(562), 26,
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
    ACTIONS(568), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(566), 26,
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
    ACTIONS(572), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(570), 26,
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
    ACTIONS(576), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(574), 26,
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
    ACTIONS(580), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(578), 26,
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
    ACTIONS(584), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(582), 26,
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
    ACTIONS(588), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(586), 26,
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
    ACTIONS(592), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(590), 26,
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
    ACTIONS(596), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(594), 26,
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
    ACTIONS(600), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(598), 26,
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
    ACTIONS(604), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(602), 26,
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
    ACTIONS(608), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(606), 26,
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
    ACTIONS(610), 1,
      anon_sym_variable,
    ACTIONS(612), 1,
      anon_sym_status,
    ACTIONS(614), 1,
      anon_sym_url,
    ACTIONS(616), 1,
      anon_sym_header,
    ACTIONS(618), 1,
      anon_sym_cookie,
    ACTIONS(620), 1,
      anon_sym_body,
    ACTIONS(622), 1,
      anon_sym_xpath,
    ACTIONS(624), 1,
      anon_sym_jsonpath,
    ACTIONS(626), 1,
      anon_sym_regex,
    ACTIONS(628), 1,
      anon_sym_duration,
    ACTIONS(630), 1,
      anon_sym_sha256,
    ACTIONS(632), 1,
      anon_sym_md5,
    ACTIONS(634), 1,
      anon_sym_bytes,
    STATE(119), 1,
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
  [4587] = 16,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(57), 1,
      anon_sym_null,
    ACTIONS(59), 1,
      aux_sym_digit_token1,
    ACTIONS(636), 1,
      anon_sym_LF,
    ACTIONS(638), 1,
      anon_sym_file_COMMA,
    ACTIONS(640), 1,
      anon_sym_BSLASH,
    ACTIONS(642), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(644), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(239), 1,
      aux_sym_value_string_text_repeat1,
    STATE(328), 1,
      sym_integer,
    STATE(517), 1,
      sym_file_value,
    ACTIONS(55), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(205), 2,
      sym_digit,
      aux_sym_integer_repeat1,
    STATE(134), 3,
      sym_value_string_content,
      sym_template,
      aux_sym_value_string_repeat1,
    STATE(181), 3,
      sym_value_string_text,
      sym_value_string_escaped_char,
      aux_sym_value_string_content_repeat1,
    STATE(469), 4,
      sym_value_string,
      sym_boolean,
      sym_null,
      sym_float,
  [4645] = 7,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(646), 1,
      ts_builtin_sym_end,
    ACTIONS(648), 1,
      anon_sym_LF,
    STATE(112), 1,
      sym_response,
    STATE(318), 1,
      sym_version,
    ACTIONS(652), 4,
      anon_sym_HTTP_SLASH1_DOT0,
      anon_sym_HTTP_SLASH1_DOT1,
      anon_sym_HTTP_SLASH2,
      anon_sym_HTTP_SLASH_STAR,
    ACTIONS(650), 16,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
  [4685] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(654), 1,
      anon_sym_file_COMMA,
    ACTIONS(656), 1,
      anon_sym_base64_COMMA,
    ACTIONS(658), 1,
      anon_sym_hex_COMMA,
    ACTIONS(660), 1,
      anon_sym_DQUOTE,
    ACTIONS(662), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(664), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(668), 1,
      anon_sym_null,
    ACTIONS(670), 1,
      aux_sym_digit_token1,
    STATE(360), 1,
      sym_integer,
    STATE(409), 1,
      sym_predicate_value,
    ACTIONS(666), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(205), 2,
      sym_digit,
      aux_sym_integer_repeat1,
    STATE(461), 9,
      sym_oneline_base64,
      sym_oneline_file,
      sym_oneline_hex,
      sym_quoted_string,
      sym_multiline_string,
      sym_template,
      sym_boolean,
      sym_null,
      sym_float,
  [4738] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(654), 1,
      anon_sym_file_COMMA,
    ACTIONS(656), 1,
      anon_sym_base64_COMMA,
    ACTIONS(658), 1,
      anon_sym_hex_COMMA,
    ACTIONS(660), 1,
      anon_sym_DQUOTE,
    ACTIONS(662), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(664), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(668), 1,
      anon_sym_null,
    ACTIONS(670), 1,
      aux_sym_digit_token1,
    STATE(360), 1,
      sym_integer,
    STATE(450), 1,
      sym_predicate_value,
    ACTIONS(666), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(205), 2,
      sym_digit,
      aux_sym_integer_repeat1,
    STATE(461), 9,
      sym_oneline_base64,
      sym_oneline_file,
      sym_oneline_hex,
      sym_quoted_string,
      sym_multiline_string,
      sym_template,
      sym_boolean,
      sym_null,
      sym_float,
  [4791] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(654), 1,
      anon_sym_file_COMMA,
    ACTIONS(656), 1,
      anon_sym_base64_COMMA,
    ACTIONS(658), 1,
      anon_sym_hex_COMMA,
    ACTIONS(660), 1,
      anon_sym_DQUOTE,
    ACTIONS(662), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(664), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(668), 1,
      anon_sym_null,
    ACTIONS(670), 1,
      aux_sym_digit_token1,
    STATE(360), 1,
      sym_integer,
    STATE(466), 1,
      sym_predicate_value,
    ACTIONS(666), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(205), 2,
      sym_digit,
      aux_sym_integer_repeat1,
    STATE(461), 9,
      sym_oneline_base64,
      sym_oneline_file,
      sym_oneline_hex,
      sym_quoted_string,
      sym_multiline_string,
      sym_template,
      sym_boolean,
      sym_null,
      sym_float,
  [4844] = 8,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(672), 1,
      ts_builtin_sym_end,
    ACTIONS(674), 1,
      anon_sym_LF,
    STATE(92), 1,
      sym_request,
    STATE(121), 1,
      sym_method,
    STATE(331), 1,
      aux_sym_hurl_file_repeat2,
    STATE(101), 2,
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
  [4885] = 3,
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
  [4915] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(676), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(678), 20,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
  [4945] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      anon_sym_null,
    ACTIONS(59), 1,
      aux_sym_digit_token1,
    ACTIONS(660), 1,
      anon_sym_DQUOTE,
    ACTIONS(664), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(680), 1,
      anon_sym_BSLASH,
    ACTIONS(682), 1,
      sym_key_string_text,
    STATE(347), 1,
      sym_integer,
    STATE(414), 1,
      sym_variable_value,
    ACTIONS(55), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(205), 2,
      sym_digit,
      aux_sym_integer_repeat1,
    STATE(225), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(161), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
    STATE(401), 5,
      sym_quoted_string,
      sym_key_string,
      sym_boolean,
      sym_null,
      sym_float,
  [4997] = 3,
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
  [5027] = 6,
    ACTIONS(11), 1,
      sym_comment,
    STATE(92), 1,
      sym_request,
    STATE(121), 1,
      sym_method,
    ACTIONS(684), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(101), 2,
      sym_entry,
      aux_sym_hurl_file_repeat1,
    ACTIONS(686), 16,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
  [5063] = 14,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(57), 1,
      anon_sym_null,
    ACTIONS(59), 1,
      aux_sym_digit_token1,
    ACTIONS(636), 1,
      anon_sym_LF,
    ACTIONS(640), 1,
      anon_sym_BSLASH,
    ACTIONS(642), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(644), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(239), 1,
      aux_sym_value_string_text_repeat1,
    STATE(328), 1,
      sym_integer,
    ACTIONS(55), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(205), 2,
      sym_digit,
      aux_sym_integer_repeat1,
    STATE(134), 3,
      sym_value_string_content,
      sym_template,
      aux_sym_value_string_repeat1,
    STATE(181), 3,
      sym_value_string_text,
      sym_value_string_escaped_char,
      aux_sym_value_string_content_repeat1,
    STATE(469), 4,
      sym_value_string,
      sym_boolean,
      sym_null,
      sym_float,
  [5115] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(689), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(691), 20,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
  [5145] = 3,
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
  [5175] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(693), 1,
      anon_sym_DQUOTE,
    ACTIONS(695), 1,
      anon_sym_LBRACE,
    ACTIONS(697), 1,
      anon_sym_LBRACK,
    ACTIONS(699), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(703), 1,
      anon_sym_null,
    ACTIONS(705), 1,
      aux_sym_digit_token1,
    STATE(167), 1,
      sym_integer,
    STATE(398), 1,
      sym_json_value,
    ACTIONS(701), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(162), 2,
      sym_digit,
      aux_sym_integer_repeat1,
    STATE(359), 7,
      sym_json_object,
      sym_json_array,
      sym_json_string,
      sym_json_number,
      sym_template,
      sym_boolean,
      sym_null,
  [5220] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(693), 1,
      anon_sym_DQUOTE,
    ACTIONS(695), 1,
      anon_sym_LBRACE,
    ACTIONS(697), 1,
      anon_sym_LBRACK,
    ACTIONS(699), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(703), 1,
      anon_sym_null,
    ACTIONS(705), 1,
      aux_sym_digit_token1,
    STATE(167), 1,
      sym_integer,
    STATE(397), 1,
      sym_json_value,
    ACTIONS(701), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(162), 2,
      sym_digit,
      aux_sym_integer_repeat1,
    STATE(359), 7,
      sym_json_object,
      sym_json_array,
      sym_json_string,
      sym_json_number,
      sym_template,
      sym_boolean,
      sym_null,
  [5265] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(693), 1,
      anon_sym_DQUOTE,
    ACTIONS(695), 1,
      anon_sym_LBRACE,
    ACTIONS(697), 1,
      anon_sym_LBRACK,
    ACTIONS(699), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(703), 1,
      anon_sym_null,
    ACTIONS(705), 1,
      aux_sym_digit_token1,
    STATE(167), 1,
      sym_integer,
    STATE(315), 1,
      sym_json_value,
    ACTIONS(701), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(162), 2,
      sym_digit,
      aux_sym_integer_repeat1,
    STATE(359), 7,
      sym_json_object,
      sym_json_array,
      sym_json_string,
      sym_json_number,
      sym_template,
      sym_boolean,
      sym_null,
  [5310] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(693), 1,
      anon_sym_DQUOTE,
    ACTIONS(695), 1,
      anon_sym_LBRACE,
    ACTIONS(697), 1,
      anon_sym_LBRACK,
    ACTIONS(699), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(703), 1,
      anon_sym_null,
    ACTIONS(705), 1,
      aux_sym_digit_token1,
    STATE(167), 1,
      sym_integer,
    STATE(326), 1,
      sym_json_value,
    ACTIONS(701), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(162), 2,
      sym_digit,
      aux_sym_integer_repeat1,
    STATE(359), 7,
      sym_json_object,
      sym_json_array,
      sym_json_string,
      sym_json_number,
      sym_template,
      sym_boolean,
      sym_null,
  [5355] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(707), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(709), 16,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
  [5381] = 3,
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
  [5407] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(711), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(713), 16,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
  [5433] = 4,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(715), 1,
      ts_builtin_sym_end,
    ACTIONS(717), 1,
      anon_sym_LF,
    ACTIONS(719), 16,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
  [5461] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(715), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(719), 16,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
  [5487] = 3,
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
  [5513] = 11,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(721), 1,
      anon_sym_LF,
    ACTIONS(723), 1,
      anon_sym_regex,
    ACTIONS(725), 1,
      anon_sym_count,
    ACTIONS(727), 1,
      anon_sym_urlEncode,
    ACTIONS(729), 1,
      anon_sym_urlDecode,
    ACTIONS(731), 1,
      anon_sym_htmlEscape,
    ACTIONS(733), 1,
      anon_sym_htmlUnescape,
    ACTIONS(735), 1,
      anon_sym_toInt,
    STATE(117), 2,
      sym_filter,
      aux_sym_capture_repeat1,
    STATE(188), 7,
      sym_regex_filter,
      sym_count_filter,
      sym_url_encode_filter,
      sym_url_decode_filter,
      sym_html_encode_filter,
      sym_html_decode_filter,
      sym_to_int_filter,
  [5554] = 11,
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
    ACTIONS(737), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(118), 2,
      sym_filter,
      aux_sym_capture_repeat1,
    STATE(68), 7,
      sym_regex_filter,
      sym_count_filter,
      sym_url_encode_filter,
      sym_url_decode_filter,
      sym_html_encode_filter,
      sym_html_decode_filter,
      sym_to_int_filter,
  [5595] = 11,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(464), 1,
      anon_sym_LF,
    ACTIONS(739), 1,
      anon_sym_regex,
    ACTIONS(742), 1,
      anon_sym_count,
    ACTIONS(745), 1,
      anon_sym_urlEncode,
    ACTIONS(748), 1,
      anon_sym_urlDecode,
    ACTIONS(751), 1,
      anon_sym_htmlEscape,
    ACTIONS(754), 1,
      anon_sym_htmlUnescape,
    ACTIONS(757), 1,
      anon_sym_toInt,
    STATE(117), 2,
      sym_filter,
      aux_sym_capture_repeat1,
    STATE(188), 7,
      sym_regex_filter,
      sym_count_filter,
      sym_url_encode_filter,
      sym_url_decode_filter,
      sym_html_encode_filter,
      sym_html_decode_filter,
      sym_to_int_filter,
  [5636] = 11,
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
    ACTIONS(760), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(57), 2,
      sym_filter,
      aux_sym_capture_repeat1,
    STATE(68), 7,
      sym_regex_filter,
      sym_count_filter,
      sym_url_encode_filter,
      sym_url_decode_filter,
      sym_html_encode_filter,
      sym_html_decode_filter,
      sym_to_int_filter,
  [5677] = 11,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(723), 1,
      anon_sym_regex,
    ACTIONS(725), 1,
      anon_sym_count,
    ACTIONS(727), 1,
      anon_sym_urlEncode,
    ACTIONS(729), 1,
      anon_sym_urlDecode,
    ACTIONS(731), 1,
      anon_sym_htmlEscape,
    ACTIONS(733), 1,
      anon_sym_htmlUnescape,
    ACTIONS(735), 1,
      anon_sym_toInt,
    ACTIONS(762), 1,
      anon_sym_LF,
    STATE(115), 2,
      sym_filter,
      aux_sym_capture_repeat1,
    STATE(188), 7,
      sym_regex_filter,
      sym_count_filter,
      sym_url_encode_filter,
      sym_url_decode_filter,
      sym_html_encode_filter,
      sym_html_decode_filter,
      sym_to_int_filter,
  [5718] = 11,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_BSLASH,
    ACTIONS(43), 1,
      sym_key_string_text,
    ACTIONS(282), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(764), 1,
      anon_sym_LF,
    STATE(363), 1,
      sym_multipart_form_data_param,
    STATE(386), 1,
      aux_sym_multipart_form_data_section_repeat1,
    STATE(520), 1,
      sym_key_string,
    STATE(231), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(523), 2,
      sym_key_value,
      sym_file_param,
    STATE(146), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
  [5756] = 10,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(640), 1,
      anon_sym_BSLASH,
    ACTIONS(642), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(644), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(766), 1,
      anon_sym_LF,
    STATE(3), 1,
      aux_sym_hurl_file_repeat2,
    STATE(239), 1,
      aux_sym_value_string_text_repeat1,
    STATE(383), 1,
      sym_value_string,
    STATE(134), 3,
      sym_value_string_content,
      sym_template,
      aux_sym_value_string_repeat1,
    STATE(181), 3,
      sym_value_string_text,
      sym_value_string_escaped_char,
      aux_sym_value_string_content_repeat1,
  [5791] = 10,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_BSLASH,
    ACTIONS(43), 1,
      sym_key_string_text,
    ACTIONS(282), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(768), 1,
      anon_sym_LF,
    STATE(366), 1,
      aux_sym_query_string_params_section_repeat1,
    STATE(368), 1,
      sym_key_value,
    STATE(428), 1,
      sym_key_string,
    STATE(231), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(146), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
  [5825] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(770), 1,
      anon_sym_BSLASH,
    ACTIONS(772), 1,
      sym_key_string_text,
    ACTIONS(774), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(441), 1,
      sym_multipart_form_data_param,
    STATE(520), 1,
      sym_key_string,
    STATE(231), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(523), 2,
      sym_key_value,
      sym_file_param,
    STATE(146), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
  [5857] = 10,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_BSLASH,
    ACTIONS(43), 1,
      sym_key_string_text,
    ACTIONS(282), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(776), 1,
      anon_sym_LF,
    STATE(387), 1,
      sym_key_value,
    STATE(388), 1,
      aux_sym_query_string_params_section_repeat1,
    STATE(428), 1,
      sym_key_string,
    STATE(231), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(146), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
  [5891] = 10,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_BSLASH,
    ACTIONS(43), 1,
      sym_key_string_text,
    ACTIONS(282), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(778), 1,
      anon_sym_LF,
    STATE(364), 1,
      aux_sym_query_string_params_section_repeat1,
    STATE(365), 1,
      sym_key_value,
    STATE(428), 1,
      sym_key_string,
    STATE(231), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(146), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
  [5925] = 8,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(780), 1,
      anon_sym_LF,
    ACTIONS(782), 1,
      anon_sym_BSLASH,
    ACTIONS(784), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(786), 1,
      aux_sym_multiline_string_text_token1,
    ACTIONS(788), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(132), 3,
      sym_multiline_string_content,
      sym_template,
      aux_sym_multiline_string_repeat1,
    STATE(196), 3,
      sym_multiline_string_text,
      sym_multiline_string_escaped_char,
      aux_sym_multiline_string_content_repeat1,
  [5954] = 8,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(782), 1,
      anon_sym_BSLASH,
    ACTIONS(786), 1,
      aux_sym_multiline_string_text_token1,
    ACTIONS(788), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(790), 1,
      anon_sym_LF,
    ACTIONS(792), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(132), 3,
      sym_multiline_string_content,
      sym_template,
      aux_sym_multiline_string_repeat1,
    STATE(196), 3,
      sym_multiline_string_text,
      sym_multiline_string_escaped_char,
      aux_sym_multiline_string_content_repeat1,
  [5983] = 7,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(794), 1,
      anon_sym_DQUOTE,
    ACTIONS(796), 1,
      aux_sym_quoted_string_text_token1,
    ACTIONS(798), 1,
      anon_sym_BSLASH,
    ACTIONS(800), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(135), 3,
      sym_quoted_string_content,
      sym_template,
      aux_sym_quoted_string_repeat1,
    STATE(174), 4,
      sym_quoted_string_text,
      sym_invalid_quoted_string_escaped_char,
      sym_quoted_string_escaped_char,
      aux_sym_quoted_string_content_repeat1,
  [6010] = 7,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(796), 1,
      aux_sym_quoted_string_text_token1,
    ACTIONS(798), 1,
      anon_sym_BSLASH,
    ACTIONS(800), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(802), 1,
      anon_sym_DQUOTE,
    STATE(136), 3,
      sym_quoted_string_content,
      sym_template,
      aux_sym_quoted_string_repeat1,
    STATE(174), 4,
      sym_quoted_string_text,
      sym_invalid_quoted_string_escaped_char,
      sym_quoted_string_escaped_char,
      aux_sym_quoted_string_content_repeat1,
  [6037] = 8,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(782), 1,
      anon_sym_BSLASH,
    ACTIONS(786), 1,
      aux_sym_multiline_string_text_token1,
    ACTIONS(788), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(804), 1,
      anon_sym_LF,
    ACTIONS(806), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(127), 3,
      sym_multiline_string_content,
      sym_template,
      aux_sym_multiline_string_repeat1,
    STATE(196), 3,
      sym_multiline_string_text,
      sym_multiline_string_escaped_char,
      aux_sym_multiline_string_content_repeat1,
  [6066] = 8,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(808), 1,
      anon_sym_LF,
    ACTIONS(810), 1,
      anon_sym_BSLASH,
    ACTIONS(813), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(816), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(239), 1,
      aux_sym_value_string_text_repeat1,
    STATE(131), 3,
      sym_value_string_content,
      sym_template,
      aux_sym_value_string_repeat1,
    STATE(181), 3,
      sym_value_string_text,
      sym_value_string_escaped_char,
      aux_sym_value_string_content_repeat1,
  [6095] = 8,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(819), 1,
      anon_sym_LF,
    ACTIONS(822), 1,
      anon_sym_BSLASH,
    ACTIONS(825), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(827), 1,
      aux_sym_multiline_string_text_token1,
    ACTIONS(830), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(132), 3,
      sym_multiline_string_content,
      sym_template,
      aux_sym_multiline_string_repeat1,
    STATE(196), 3,
      sym_multiline_string_text,
      sym_multiline_string_escaped_char,
      aux_sym_multiline_string_content_repeat1,
  [6124] = 7,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(796), 1,
      aux_sym_quoted_string_text_token1,
    ACTIONS(798), 1,
      anon_sym_BSLASH,
    ACTIONS(800), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(833), 1,
      anon_sym_DQUOTE,
    STATE(128), 3,
      sym_quoted_string_content,
      sym_template,
      aux_sym_quoted_string_repeat1,
    STATE(174), 4,
      sym_quoted_string_text,
      sym_invalid_quoted_string_escaped_char,
      sym_quoted_string_escaped_char,
      aux_sym_quoted_string_content_repeat1,
  [6151] = 8,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(640), 1,
      anon_sym_BSLASH,
    ACTIONS(642), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(644), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(835), 1,
      anon_sym_LF,
    STATE(239), 1,
      aux_sym_value_string_text_repeat1,
    STATE(131), 3,
      sym_value_string_content,
      sym_template,
      aux_sym_value_string_repeat1,
    STATE(181), 3,
      sym_value_string_text,
      sym_value_string_escaped_char,
      aux_sym_value_string_content_repeat1,
  [6180] = 7,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(837), 1,
      anon_sym_DQUOTE,
    ACTIONS(839), 1,
      aux_sym_quoted_string_text_token1,
    ACTIONS(842), 1,
      anon_sym_BSLASH,
    ACTIONS(845), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(135), 3,
      sym_quoted_string_content,
      sym_template,
      aux_sym_quoted_string_repeat1,
    STATE(174), 4,
      sym_quoted_string_text,
      sym_invalid_quoted_string_escaped_char,
      sym_quoted_string_escaped_char,
      aux_sym_quoted_string_content_repeat1,
  [6207] = 7,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(796), 1,
      aux_sym_quoted_string_text_token1,
    ACTIONS(798), 1,
      anon_sym_BSLASH,
    ACTIONS(800), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(848), 1,
      anon_sym_DQUOTE,
    STATE(135), 3,
      sym_quoted_string_content,
      sym_template,
      aux_sym_quoted_string_repeat1,
    STATE(174), 4,
      sym_quoted_string_text,
      sym_invalid_quoted_string_escaped_char,
      sym_quoted_string_escaped_char,
      aux_sym_quoted_string_content_repeat1,
  [6234] = 8,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(782), 1,
      anon_sym_BSLASH,
    ACTIONS(786), 1,
      aux_sym_multiline_string_text_token1,
    ACTIONS(788), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(790), 1,
      anon_sym_LF,
    ACTIONS(792), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(126), 3,
      sym_multiline_string_content,
      sym_template,
      aux_sym_multiline_string_repeat1,
    STATE(196), 3,
      sym_multiline_string_text,
      sym_multiline_string_escaped_char,
      aux_sym_multiline_string_content_repeat1,
  [6263] = 7,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(850), 1,
      anon_sym_BSLASH,
    ACTIONS(853), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(856), 1,
      anon_sym_BQUOTE,
    ACTIONS(858), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(138), 3,
      sym_oneline_string_content,
      sym_template,
      aux_sym_oneline_string_repeat1,
    STATE(207), 3,
      sym_oneline_string_text,
      sym_oneline_string_escaped_char,
      aux_sym_oneline_string_content_repeat1,
  [6289] = 8,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(861), 1,
      anon_sym_LF,
    ACTIONS(863), 1,
      anon_sym_BSLASH,
    ACTIONS(865), 1,
      sym_filename_text,
    ACTIONS(867), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(514), 1,
      sym_filename,
    STATE(216), 2,
      sym_filename_escaped_char,
      aux_sym_filename_content_repeat1,
    STATE(152), 3,
      sym_filename_content,
      sym_template,
      aux_sym_filename_repeat1,
  [6317] = 8,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(869), 1,
      anon_sym_SEMI,
    ACTIONS(871), 1,
      anon_sym_BSLASH,
    ACTIONS(873), 1,
      sym_filename_text,
    ACTIONS(875), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(519), 1,
      sym_filename,
    STATE(226), 2,
      sym_filename_escaped_char,
      aux_sym_filename_content_repeat1,
    STATE(158), 3,
      sym_filename_content,
      sym_template,
      aux_sym_filename_repeat1,
  [6345] = 7,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(877), 1,
      anon_sym_BSLASH,
    ACTIONS(879), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(881), 1,
      anon_sym_BQUOTE,
    ACTIONS(883), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(138), 3,
      sym_oneline_string_content,
      sym_template,
      aux_sym_oneline_string_repeat1,
    STATE(207), 3,
      sym_oneline_string_text,
      sym_oneline_string_escaped_char,
      aux_sym_oneline_string_content_repeat1,
  [6371] = 8,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(871), 1,
      anon_sym_BSLASH,
    ACTIONS(873), 1,
      sym_filename_text,
    ACTIONS(875), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(885), 1,
      anon_sym_SEMI,
    STATE(417), 1,
      sym_filename,
    STATE(226), 2,
      sym_filename_escaped_char,
      aux_sym_filename_content_repeat1,
    STATE(158), 3,
      sym_filename_content,
      sym_template,
      aux_sym_filename_repeat1,
  [6399] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(770), 1,
      anon_sym_BSLASH,
    ACTIONS(772), 1,
      sym_key_string_text,
    ACTIONS(774), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(428), 1,
      sym_key_string,
    STATE(444), 1,
      sym_key_value,
    STATE(231), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(146), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
  [6427] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(770), 1,
      anon_sym_BSLASH,
    ACTIONS(772), 1,
      sym_key_string_text,
    ACTIONS(774), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(428), 1,
      sym_key_string,
    STATE(518), 1,
      sym_key_value,
    STATE(231), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(146), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
  [6455] = 7,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(877), 1,
      anon_sym_BSLASH,
    ACTIONS(879), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(883), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(887), 1,
      anon_sym_BQUOTE,
    STATE(141), 3,
      sym_oneline_string_content,
      sym_template,
      aux_sym_oneline_string_repeat1,
    STATE(207), 3,
      sym_oneline_string_text,
      sym_oneline_string_escaped_char,
      aux_sym_oneline_string_content_repeat1,
  [6481] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(770), 1,
      anon_sym_BSLASH,
    ACTIONS(772), 1,
      sym_key_string_text,
    ACTIONS(774), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(889), 1,
      anon_sym_COLON,
    STATE(231), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(155), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
  [6506] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(891), 9,
      anon_sym_EQ,
      anon_sym_regex,
      anon_sym_RBRACE_RBRACE,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
  [6521] = 4,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(895), 1,
      aux_sym_invalid_quoted_string_escaped_char_token1,
    ACTIONS(897), 1,
      anon_sym_u,
    ACTIONS(893), 7,
      anon_sym_LF,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
      anon_sym_,
      anon_sym_2,
      anon_sym_CR,
      anon_sym_TAB,
  [6540] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(901), 1,
      aux_sym_digit_token1,
    STATE(149), 2,
      sym_digit,
      aux_sym_integer_repeat1,
    ACTIONS(899), 6,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DOT,
      anon_sym_e,
      anon_sym_E,
  [6559] = 7,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(904), 1,
      anon_sym_LF,
    ACTIONS(906), 1,
      anon_sym_BSLASH,
    ACTIONS(909), 1,
      sym_key_string_text,
    ACTIONS(912), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(225), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(150), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
  [6584] = 7,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(915), 1,
      anon_sym_DQUOTE,
    ACTIONS(917), 1,
      anon_sym_BSLASH,
    ACTIONS(919), 1,
      aux_sym_json_string_text_token1,
    ACTIONS(921), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(274), 2,
      sym_json_string_text,
      sym_json_string_escaped_char,
    STATE(156), 3,
      sym_json_string_content,
      sym_template,
      aux_sym_json_string_repeat1,
  [6609] = 7,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(863), 1,
      anon_sym_BSLASH,
    ACTIONS(865), 1,
      sym_filename_text,
    ACTIONS(867), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(923), 1,
      anon_sym_LF,
    STATE(216), 2,
      sym_filename_escaped_char,
      aux_sym_filename_content_repeat1,
    STATE(154), 3,
      sym_filename_content,
      sym_template,
      aux_sym_filename_repeat1,
  [6634] = 7,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(917), 1,
      anon_sym_BSLASH,
    ACTIONS(919), 1,
      aux_sym_json_string_text_token1,
    ACTIONS(921), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(925), 1,
      anon_sym_DQUOTE,
    STATE(274), 2,
      sym_json_string_text,
      sym_json_string_escaped_char,
    STATE(151), 3,
      sym_json_string_content,
      sym_template,
      aux_sym_json_string_repeat1,
  [6659] = 7,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(927), 1,
      anon_sym_LF,
    ACTIONS(929), 1,
      anon_sym_BSLASH,
    ACTIONS(932), 1,
      sym_filename_text,
    ACTIONS(935), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(216), 2,
      sym_filename_escaped_char,
      aux_sym_filename_content_repeat1,
    STATE(154), 3,
      sym_filename_content,
      sym_template,
      aux_sym_filename_repeat1,
  [6684] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(904), 1,
      anon_sym_COLON,
    ACTIONS(938), 1,
      anon_sym_BSLASH,
    ACTIONS(941), 1,
      sym_key_string_text,
    ACTIONS(944), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(231), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(155), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
  [6709] = 7,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(947), 1,
      anon_sym_DQUOTE,
    ACTIONS(949), 1,
      anon_sym_BSLASH,
    ACTIONS(952), 1,
      aux_sym_json_string_text_token1,
    ACTIONS(955), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(274), 2,
      sym_json_string_text,
      sym_json_string_escaped_char,
    STATE(156), 3,
      sym_json_string_content,
      sym_template,
      aux_sym_json_string_repeat1,
  [6734] = 7,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(917), 1,
      anon_sym_BSLASH,
    ACTIONS(919), 1,
      aux_sym_json_string_text_token1,
    ACTIONS(921), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(958), 1,
      anon_sym_DQUOTE,
    STATE(274), 2,
      sym_json_string_text,
      sym_json_string_escaped_char,
    STATE(156), 3,
      sym_json_string_content,
      sym_template,
      aux_sym_json_string_repeat1,
  [6759] = 7,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(871), 1,
      anon_sym_BSLASH,
    ACTIONS(873), 1,
      sym_filename_text,
    ACTIONS(875), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(923), 1,
      anon_sym_SEMI,
    STATE(226), 2,
      sym_filename_escaped_char,
      aux_sym_filename_content_repeat1,
    STATE(159), 3,
      sym_filename_content,
      sym_template,
      aux_sym_filename_repeat1,
  [6784] = 7,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(927), 1,
      anon_sym_SEMI,
    ACTIONS(960), 1,
      anon_sym_BSLASH,
    ACTIONS(963), 1,
      sym_filename_text,
    ACTIONS(966), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(226), 2,
      sym_filename_escaped_char,
      aux_sym_filename_content_repeat1,
    STATE(159), 3,
      sym_filename_content,
      sym_template,
      aux_sym_filename_repeat1,
  [6809] = 7,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(917), 1,
      anon_sym_BSLASH,
    ACTIONS(919), 1,
      aux_sym_json_string_text_token1,
    ACTIONS(921), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(969), 1,
      anon_sym_DQUOTE,
    STATE(274), 2,
      sym_json_string_text,
      sym_json_string_escaped_char,
    STATE(157), 3,
      sym_json_string_content,
      sym_template,
      aux_sym_json_string_repeat1,
  [6834] = 7,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(53), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(682), 1,
      sym_key_string_text,
    ACTIONS(889), 1,
      anon_sym_LF,
    ACTIONS(971), 1,
      anon_sym_BSLASH,
    STATE(225), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(150), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
  [6859] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(705), 1,
      aux_sym_digit_token1,
    STATE(149), 2,
      sym_digit,
      aux_sym_integer_repeat1,
    ACTIONS(973), 6,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DOT,
      anon_sym_e,
      anon_sym_E,
  [6878] = 6,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(977), 1,
      anon_sym_BSLASH,
    ACTIONS(980), 1,
      aux_sym_value_string_text_token1,
    STATE(239), 1,
      aux_sym_value_string_text_repeat1,
    ACTIONS(975), 2,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    STATE(163), 3,
      sym_value_string_text,
      sym_value_string_escaped_char,
      aux_sym_value_string_content_repeat1,
  [6900] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(542), 1,
      anon_sym_LF,
    ACTIONS(544), 7,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
  [6916] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(554), 1,
      anon_sym_LF,
    ACTIONS(556), 7,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
  [6932] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(570), 1,
      anon_sym_LF,
    ACTIONS(572), 7,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
  [6948] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(985), 1,
      anon_sym_DOT,
    STATE(218), 1,
      sym_fraction,
    STATE(339), 1,
      sym_exponent,
    ACTIONS(987), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(983), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [6970] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(578), 1,
      anon_sym_LF,
    ACTIONS(580), 7,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
  [6986] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(514), 1,
      anon_sym_LF,
    ACTIONS(516), 7,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
  [7002] = 6,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(989), 1,
      anon_sym_LF,
    ACTIONS(992), 1,
      anon_sym_BSLASH,
    ACTIONS(997), 1,
      aux_sym_multiline_string_text_token1,
    ACTIONS(995), 2,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE_LBRACE,
    STATE(170), 3,
      sym_multiline_string_text,
      sym_multiline_string_escaped_char,
      aux_sym_multiline_string_content_repeat1,
  [7024] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(518), 1,
      anon_sym_LF,
    ACTIONS(520), 7,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
  [7040] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1002), 1,
      anon_sym_u,
    ACTIONS(1000), 7,
      anon_sym_LF,
      anon_sym_BSLASH,
      anon_sym_,
      anon_sym_2,
      anon_sym_CR,
      anon_sym_TAB,
      anon_sym_POUND,
  [7056] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(538), 1,
      anon_sym_LF,
    ACTIONS(540), 7,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
  [7072] = 5,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(796), 1,
      aux_sym_quoted_string_text_token1,
    ACTIONS(798), 1,
      anon_sym_BSLASH,
    ACTIONS(1004), 2,
      anon_sym_DQUOTE,
      anon_sym_LBRACE_LBRACE,
    STATE(190), 4,
      sym_quoted_string_text,
      sym_invalid_quoted_string_escaped_char,
      sym_quoted_string_escaped_char,
      aux_sym_quoted_string_content_repeat1,
  [7092] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(510), 1,
      anon_sym_LF,
    ACTIONS(512), 7,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
  [7108] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(590), 1,
      anon_sym_LF,
    ACTIONS(592), 7,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
  [7124] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(550), 1,
      anon_sym_LF,
    ACTIONS(552), 7,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
  [7140] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(546), 1,
      anon_sym_LF,
    ACTIONS(548), 7,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
  [7156] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(586), 1,
      anon_sym_LF,
    ACTIONS(588), 7,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
  [7172] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(574), 1,
      anon_sym_LF,
    ACTIONS(576), 7,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
  [7188] = 6,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(640), 1,
      anon_sym_BSLASH,
    ACTIONS(642), 1,
      aux_sym_value_string_text_token1,
    STATE(239), 1,
      aux_sym_value_string_text_repeat1,
    ACTIONS(1006), 2,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    STATE(163), 3,
      sym_value_string_text,
      sym_value_string_escaped_char,
      aux_sym_value_string_content_repeat1,
  [7210] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(594), 1,
      anon_sym_LF,
    ACTIONS(596), 7,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
  [7226] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(534), 1,
      anon_sym_LF,
    ACTIONS(536), 7,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
  [7242] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1010), 1,
      anon_sym_u,
    ACTIONS(1008), 7,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
      anon_sym_b,
      anon_sym_f,
      anon_sym_n,
      anon_sym_r,
      anon_sym_t,
  [7258] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(530), 1,
      anon_sym_LF,
    ACTIONS(532), 7,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
  [7274] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(598), 1,
      anon_sym_LF,
    ACTIONS(600), 7,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
  [7290] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(526), 1,
      anon_sym_LF,
    ACTIONS(528), 7,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
  [7306] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(522), 1,
      anon_sym_LF,
    ACTIONS(524), 7,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
  [7322] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(582), 1,
      anon_sym_LF,
    ACTIONS(584), 7,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
  [7338] = 5,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1014), 1,
      aux_sym_quoted_string_text_token1,
    ACTIONS(1017), 1,
      anon_sym_BSLASH,
    ACTIONS(1012), 2,
      anon_sym_DQUOTE,
      anon_sym_LBRACE_LBRACE,
    STATE(190), 4,
      sym_quoted_string_text,
      sym_invalid_quoted_string_escaped_char,
      sym_quoted_string_escaped_char,
      aux_sym_quoted_string_content_repeat1,
  [7358] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(566), 1,
      anon_sym_LF,
    ACTIONS(568), 7,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
  [7374] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1022), 1,
      anon_sym_u,
    ACTIONS(1020), 7,
      anon_sym_BSLASH,
      anon_sym_BQUOTE,
      anon_sym_b,
      anon_sym_f,
      anon_sym_n,
      anon_sym_r,
      anon_sym_t,
  [7390] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(602), 1,
      anon_sym_LF,
    ACTIONS(604), 7,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
  [7406] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(606), 1,
      anon_sym_LF,
    ACTIONS(608), 7,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
  [7422] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(562), 1,
      anon_sym_LF,
    ACTIONS(564), 7,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
  [7438] = 6,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(782), 1,
      anon_sym_BSLASH,
    ACTIONS(786), 1,
      aux_sym_multiline_string_text_token1,
    ACTIONS(1024), 1,
      anon_sym_LF,
    ACTIONS(1026), 2,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE_LBRACE,
    STATE(170), 3,
      sym_multiline_string_text,
      sym_multiline_string_escaped_char,
      aux_sym_multiline_string_content_repeat1,
  [7460] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(506), 1,
      anon_sym_LF,
    ACTIONS(508), 7,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
  [7476] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(558), 1,
      anon_sym_LF,
    ACTIONS(560), 7,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
  [7492] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(705), 1,
      aux_sym_digit_token1,
    STATE(149), 2,
      sym_digit,
      aux_sym_integer_repeat1,
    ACTIONS(1028), 5,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_e,
      anon_sym_E,
  [7510] = 5,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(899), 1,
      anon_sym_LF,
    ACTIONS(1030), 1,
      aux_sym_digit_token1,
    STATE(200), 2,
      sym_digit,
      aux_sym_integer_repeat1,
    ACTIONS(1033), 3,
      anon_sym_DOT,
      anon_sym_e,
      anon_sym_E,
  [7529] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1035), 7,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      aux_sym_digit_token1,
      anon_sym_DOT,
      anon_sym_e,
      anon_sym_E,
  [7542] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(693), 1,
      anon_sym_DQUOTE,
    ACTIONS(1037), 1,
      anon_sym_RBRACE,
    ACTIONS(1039), 1,
      anon_sym_COMMA,
    STATE(327), 1,
      aux_sym_json_object_repeat1,
    STATE(330), 1,
      sym_json_key_value,
    STATE(468), 1,
      sym_json_key_string,
    STATE(470), 1,
      sym_json_string,
  [7567] = 4,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1041), 1,
      anon_sym_LF,
    STATE(435), 1,
      sym_multiline_string_type,
    ACTIONS(1043), 5,
      anon_sym_base64,
      anon_sym_hex,
      anon_sym_json,
      anon_sym_xml,
      anon_sym_graphql,
  [7584] = 6,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1045), 1,
      anon_sym_BSLASH,
    ACTIONS(1047), 1,
      anon_sym_SLASH,
    ACTIONS(1049), 1,
      aux_sym_regex_text_token1,
    STATE(446), 1,
      sym_regex_content,
    STATE(229), 3,
      sym_regex_text,
      sym_regex_escaped_char,
      aux_sym_regex_content_repeat1,
  [7605] = 5,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(59), 1,
      aux_sym_digit_token1,
    ACTIONS(973), 1,
      anon_sym_LF,
    STATE(200), 2,
      sym_digit,
      aux_sym_integer_repeat1,
    ACTIONS(1051), 3,
      anon_sym_DOT,
      anon_sym_e,
      anon_sym_E,
  [7624] = 6,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1045), 1,
      anon_sym_BSLASH,
    ACTIONS(1049), 1,
      aux_sym_regex_text_token1,
    ACTIONS(1053), 1,
      anon_sym_SLASH,
    STATE(495), 1,
      sym_regex_content,
    STATE(229), 3,
      sym_regex_text,
      sym_regex_escaped_char,
      aux_sym_regex_content_repeat1,
  [7645] = 3,
    ACTIONS(11), 1,
      sym_comment,
    STATE(208), 3,
      sym_oneline_string_text,
      sym_oneline_string_escaped_char,
      aux_sym_oneline_string_content_repeat1,
    ACTIONS(1055), 4,
      anon_sym_BSLASH,
      aux_sym_value_string_text_token1,
      anon_sym_BQUOTE,
      anon_sym_LBRACE_LBRACE,
  [7660] = 5,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1057), 1,
      anon_sym_BSLASH,
    ACTIONS(1060), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(1063), 2,
      anon_sym_BQUOTE,
      anon_sym_LBRACE_LBRACE,
    STATE(208), 3,
      sym_oneline_string_text,
      sym_oneline_string_escaped_char,
      aux_sym_oneline_string_content_repeat1,
  [7679] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(660), 1,
      anon_sym_DQUOTE,
    ACTIONS(670), 1,
      aux_sym_digit_token1,
    STATE(356), 1,
      sym_integer,
    STATE(205), 2,
      sym_digit,
      aux_sym_integer_repeat1,
    STATE(404), 2,
      sym_quoted_string,
      sym_float,
  [7700] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(660), 1,
      anon_sym_DQUOTE,
    ACTIONS(670), 1,
      aux_sym_digit_token1,
    STATE(348), 1,
      sym_integer,
    STATE(205), 2,
      sym_digit,
      aux_sym_integer_repeat1,
    STATE(449), 2,
      sym_quoted_string,
      sym_float,
  [7721] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(660), 1,
      anon_sym_DQUOTE,
    ACTIONS(670), 1,
      aux_sym_digit_token1,
    STATE(351), 1,
      sym_integer,
    STATE(205), 2,
      sym_digit,
      aux_sym_integer_repeat1,
    STATE(462), 2,
      sym_quoted_string,
      sym_float,
  [7742] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(693), 1,
      anon_sym_DQUOTE,
    ACTIONS(1039), 1,
      anon_sym_COMMA,
    ACTIONS(1065), 1,
      anon_sym_RBRACE,
    STATE(316), 1,
      aux_sym_json_object_repeat1,
    STATE(317), 1,
      sym_json_key_value,
    STATE(468), 1,
      sym_json_key_string,
    STATE(470), 1,
      sym_json_string,
  [7767] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(660), 1,
      anon_sym_DQUOTE,
    ACTIONS(670), 1,
      aux_sym_digit_token1,
    STATE(353), 1,
      sym_integer,
    STATE(205), 2,
      sym_digit,
      aux_sym_integer_repeat1,
    STATE(403), 2,
      sym_quoted_string,
      sym_float,
  [7788] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(705), 1,
      aux_sym_digit_token1,
    STATE(149), 2,
      sym_digit,
      aux_sym_integer_repeat1,
    ACTIONS(1067), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [7804] = 5,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1071), 1,
      anon_sym_BSLASH,
    ACTIONS(1074), 1,
      sym_filename_text,
    ACTIONS(1069), 2,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    STATE(215), 2,
      sym_filename_escaped_char,
      aux_sym_filename_content_repeat1,
  [7822] = 3,
    ACTIONS(11), 1,
      sym_comment,
    STATE(215), 2,
      sym_filename_escaped_char,
      aux_sym_filename_content_repeat1,
    ACTIONS(1077), 4,
      anon_sym_LF,
      anon_sym_BSLASH,
      sym_filename_text,
      anon_sym_LBRACE_LBRACE,
  [7836] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(656), 1,
      anon_sym_base64_COMMA,
    ACTIONS(658), 1,
      anon_sym_hex_COMMA,
    ACTIONS(660), 1,
      anon_sym_DQUOTE,
    STATE(405), 3,
      sym_oneline_base64,
      sym_oneline_hex,
      sym_quoted_string,
  [7854] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(335), 1,
      sym_exponent,
    ACTIONS(987), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(1079), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [7870] = 6,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1081), 1,
      anon_sym_LF,
    ACTIONS(1083), 1,
      anon_sym_BSLASH,
    ACTIONS(1086), 1,
      sym_key_string_text,
    ACTIONS(1089), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(219), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
  [7890] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(656), 1,
      anon_sym_base64_COMMA,
    ACTIONS(658), 1,
      anon_sym_hex_COMMA,
    ACTIONS(660), 1,
      anon_sym_DQUOTE,
    STATE(406), 3,
      sym_oneline_base64,
      sym_oneline_hex,
      sym_quoted_string,
  [7908] = 5,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1091), 1,
      anon_sym_BSLASH,
    ACTIONS(1094), 1,
      sym_filename_text,
    ACTIONS(1069), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE_LBRACE,
    STATE(221), 2,
      sym_filename_escaped_char,
      aux_sym_filename_content_repeat1,
  [7926] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1099), 1,
      anon_sym_u,
    ACTIONS(1101), 1,
      anon_sym_POUND,
    ACTIONS(1097), 4,
      anon_sym_BSLASH,
      anon_sym_BQUOTE,
      anon_sym_b,
      anon_sym_f,
  [7942] = 5,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1103), 1,
      anon_sym_BSLASH,
    ACTIONS(1106), 1,
      anon_sym_SLASH,
    ACTIONS(1108), 1,
      aux_sym_regex_text_token1,
    STATE(223), 3,
      sym_regex_text,
      sym_regex_escaped_char,
      aux_sym_regex_content_repeat1,
  [7960] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1111), 1,
      anon_sym_BSLASH,
    ACTIONS(1114), 1,
      sym_key_string_text,
    ACTIONS(1081), 2,
      anon_sym_COLON,
      anon_sym_LBRACE_LBRACE,
    STATE(224), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
  [7978] = 4,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1117), 1,
      anon_sym_LF,
    STATE(219), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    ACTIONS(1119), 3,
      anon_sym_BSLASH,
      sym_key_string_text,
      anon_sym_LBRACE_LBRACE,
  [7994] = 3,
    ACTIONS(11), 1,
      sym_comment,
    STATE(221), 2,
      sym_filename_escaped_char,
      aux_sym_filename_content_repeat1,
    ACTIONS(1077), 4,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      sym_filename_text,
      anon_sym_LBRACE_LBRACE,
  [8008] = 5,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(59), 1,
      aux_sym_digit_token1,
    ACTIONS(1028), 1,
      anon_sym_LF,
    ACTIONS(1121), 2,
      anon_sym_e,
      anon_sym_E,
    STATE(200), 2,
      sym_digit,
      aux_sym_integer_repeat1,
  [8026] = 6,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(983), 1,
      anon_sym_LF,
    ACTIONS(1123), 1,
      anon_sym_DOT,
    STATE(295), 1,
      sym_fraction,
    STATE(472), 1,
      sym_exponent,
    ACTIONS(1125), 2,
      anon_sym_e,
      anon_sym_E,
  [8046] = 5,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1045), 1,
      anon_sym_BSLASH,
    ACTIONS(1049), 1,
      aux_sym_regex_text_token1,
    ACTIONS(1127), 1,
      anon_sym_SLASH,
    STATE(223), 3,
      sym_regex_text,
      sym_regex_escaped_char,
      aux_sym_regex_content_repeat1,
  [8064] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(705), 1,
      aux_sym_digit_token1,
    STATE(149), 2,
      sym_digit,
      aux_sym_integer_repeat1,
    ACTIONS(1129), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [8080] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(224), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    ACTIONS(1117), 4,
      anon_sym_COLON,
      anon_sym_BSLASH,
      sym_key_string_text,
      anon_sym_LBRACE_LBRACE,
  [8094] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1131), 5,
      anon_sym_LF,
      anon_sym_BSLASH,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      aux_sym_multiline_string_text_token1,
      anon_sym_LBRACE_LBRACE,
  [8105] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1133), 5,
      anon_sym_LF,
      anon_sym_BSLASH,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      aux_sym_multiline_string_text_token1,
      anon_sym_LBRACE_LBRACE,
  [8116] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(784), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(1135), 4,
      anon_sym_LF,
      anon_sym_BSLASH,
      aux_sym_multiline_string_text_token1,
      anon_sym_LBRACE_LBRACE,
  [8129] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1139), 1,
      aux_sym_hexdigit_token1,
    ACTIONS(1137), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
    STATE(235), 2,
      sym_hexdigit,
      aux_sym_oneline_hex_repeat1,
  [8144] = 4,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1144), 1,
      aux_sym_value_string_text_token1,
    STATE(236), 1,
      aux_sym_value_string_text_repeat1,
    ACTIONS(1142), 3,
      anon_sym_LF,
      anon_sym_BSLASH,
      anon_sym_LBRACE_LBRACE,
  [8159] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1147), 5,
      anon_sym_LF,
      anon_sym_BSLASH,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      aux_sym_multiline_string_text_token1,
      anon_sym_LBRACE_LBRACE,
  [8170] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1149), 1,
      anon_sym_LF,
    ACTIONS(1151), 4,
      anon_sym_COLON,
      anon_sym_BSLASH,
      sym_key_string_text,
      anon_sym_LBRACE_LBRACE,
  [8183] = 4,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1155), 1,
      aux_sym_value_string_text_token1,
    STATE(236), 1,
      aux_sym_value_string_text_repeat1,
    ACTIONS(1153), 3,
      anon_sym_LF,
      anon_sym_BSLASH,
      anon_sym_LBRACE_LBRACE,
  [8198] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(670), 1,
      aux_sym_digit_token1,
    ACTIONS(1157), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(263), 2,
      sym_digit,
      aux_sym_integer_repeat1,
  [8213] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1159), 1,
      anon_sym_LF,
    ACTIONS(1161), 4,
      anon_sym_COLON,
      anon_sym_BSLASH,
      sym_key_string_text,
      anon_sym_LBRACE_LBRACE,
  [8226] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1163), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(1135), 4,
      anon_sym_LF,
      anon_sym_BSLASH,
      aux_sym_multiline_string_text_token1,
      anon_sym_LBRACE_LBRACE,
  [8239] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1151), 5,
      anon_sym_LF,
      anon_sym_BSLASH,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      aux_sym_multiline_string_text_token1,
      anon_sym_LBRACE_LBRACE,
  [8250] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1035), 1,
      anon_sym_LF,
    ACTIONS(1165), 4,
      aux_sym_digit_token1,
      anon_sym_DOT,
      anon_sym_e,
      anon_sym_E,
  [8263] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1167), 5,
      anon_sym_LF,
      anon_sym_BSLASH,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      aux_sym_multiline_string_text_token1,
      anon_sym_LBRACE_LBRACE,
  [8274] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(705), 1,
      aux_sym_digit_token1,
    ACTIONS(1169), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(230), 2,
      sym_digit,
      aux_sym_integer_repeat1,
  [8289] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(792), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(1135), 4,
      anon_sym_LF,
      anon_sym_BSLASH,
      aux_sym_multiline_string_text_token1,
      anon_sym_LBRACE_LBRACE,
  [8302] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(670), 1,
      aux_sym_digit_token1,
    STATE(488), 1,
      sym_integer,
    STATE(205), 2,
      sym_digit,
      aux_sym_integer_repeat1,
  [8316] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1171), 4,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
      aux_sym_json_string_text_token1,
      anon_sym_LBRACE_LBRACE,
  [8326] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(670), 1,
      aux_sym_digit_token1,
    STATE(487), 1,
      sym_integer,
    STATE(205), 2,
      sym_digit,
      aux_sym_integer_repeat1,
  [8340] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1173), 4,
      anon_sym_COLON,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [8350] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1175), 4,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
      aux_sym_json_string_text_token1,
      anon_sym_LBRACE_LBRACE,
  [8360] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1177), 1,
      anon_sym_LF,
    ACTIONS(1179), 3,
      anon_sym_BSLASH,
      sym_key_string_text,
      anon_sym_LBRACE_LBRACE,
  [8372] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(670), 1,
      aux_sym_digit_token1,
    STATE(493), 1,
      sym_integer,
    STATE(205), 2,
      sym_digit,
      aux_sym_integer_repeat1,
  [8386] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1181), 4,
      anon_sym_BSLASH,
      aux_sym_value_string_text_token1,
      anon_sym_BQUOTE,
      anon_sym_LBRACE_LBRACE,
  [8396] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1183), 4,
      anon_sym_LF,
      anon_sym_BSLASH,
      sym_filename_text,
      anon_sym_LBRACE_LBRACE,
  [8406] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1185), 4,
      anon_sym_COLON,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [8416] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1183), 4,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      sym_filename_text,
      anon_sym_LBRACE_LBRACE,
  [8426] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1131), 4,
      anon_sym_BSLASH,
      aux_sym_value_string_text_token1,
      anon_sym_BQUOTE,
      anon_sym_LBRACE_LBRACE,
  [8436] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1187), 1,
      anon_sym_SEMI,
    ACTIONS(1189), 1,
      aux_sym_hexdigit_token1,
    STATE(272), 2,
      sym_hexdigit,
      aux_sym_oneline_hex_repeat1,
  [8450] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1191), 4,
      anon_sym_DQUOTE,
      aux_sym_quoted_string_text_token1,
      anon_sym_BSLASH,
      anon_sym_LBRACE_LBRACE,
  [8460] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1131), 4,
      anon_sym_LF,
      anon_sym_BSLASH,
      aux_sym_value_string_text_token1,
      anon_sym_LBRACE_LBRACE,
  [8470] = 4,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(59), 1,
      aux_sym_digit_token1,
    ACTIONS(1129), 1,
      anon_sym_LF,
    STATE(200), 2,
      sym_digit,
      aux_sym_integer_repeat1,
  [8484] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1193), 4,
      anon_sym_LF,
      anon_sym_BSLASH,
      aux_sym_value_string_text_token1,
      anon_sym_LBRACE_LBRACE,
  [8494] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1195), 4,
      anon_sym_LF,
      anon_sym_BSLASH,
      aux_sym_value_string_text_token1,
      anon_sym_LBRACE_LBRACE,
  [8504] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1151), 4,
      anon_sym_LF,
      anon_sym_BSLASH,
      aux_sym_value_string_text_token1,
      anon_sym_LBRACE_LBRACE,
  [8514] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1151), 4,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      sym_filename_text,
      anon_sym_LBRACE_LBRACE,
  [8524] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1197), 1,
      anon_sym_DQUOTE,
    ACTIONS(1199), 1,
      anon_sym_SLASH,
    STATE(64), 2,
      sym_quoted_string,
      sym_regex,
  [8538] = 4,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(59), 1,
      aux_sym_digit_token1,
    ACTIONS(1067), 1,
      anon_sym_LF,
    STATE(200), 2,
      sym_digit,
      aux_sym_integer_repeat1,
  [8552] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1201), 4,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
      aux_sym_json_string_text_token1,
      anon_sym_LBRACE_LBRACE,
  [8562] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1203), 4,
      anon_sym_LF,
      anon_sym_BSLASH,
      aux_sym_value_string_text_token1,
      anon_sym_LBRACE_LBRACE,
  [8572] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1189), 1,
      aux_sym_hexdigit_token1,
    ACTIONS(1205), 1,
      anon_sym_SEMI,
    STATE(235), 2,
      sym_hexdigit,
      aux_sym_oneline_hex_repeat1,
  [8586] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1189), 1,
      aux_sym_hexdigit_token1,
    ACTIONS(1207), 1,
      anon_sym_RBRACE,
    STATE(235), 2,
      sym_hexdigit,
      aux_sym_oneline_hex_repeat1,
  [8600] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1209), 4,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
      aux_sym_json_string_text_token1,
      anon_sym_LBRACE_LBRACE,
  [8610] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1177), 4,
      anon_sym_COLON,
      anon_sym_BSLASH,
      sym_key_string_text,
      anon_sym_LBRACE_LBRACE,
  [8620] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1151), 4,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
      aux_sym_json_string_text_token1,
      anon_sym_LBRACE_LBRACE,
  [8630] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1211), 4,
      anon_sym_DQUOTE,
      aux_sym_quoted_string_text_token1,
      anon_sym_BSLASH,
      anon_sym_LBRACE_LBRACE,
  [8640] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1131), 4,
      anon_sym_DQUOTE,
      aux_sym_quoted_string_text_token1,
      anon_sym_BSLASH,
      anon_sym_LBRACE_LBRACE,
  [8650] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(660), 1,
      anon_sym_DQUOTE,
    ACTIONS(1213), 1,
      anon_sym_SLASH,
    STATE(408), 2,
      sym_quoted_string,
      sym_regex,
  [8664] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1197), 1,
      anon_sym_DQUOTE,
    ACTIONS(1199), 1,
      anon_sym_SLASH,
    STATE(82), 2,
      sym_quoted_string,
      sym_regex,
  [8678] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1151), 4,
      anon_sym_BSLASH,
      aux_sym_value_string_text_token1,
      anon_sym_BQUOTE,
      anon_sym_LBRACE_LBRACE,
  [8688] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1149), 4,
      anon_sym_COLON,
      anon_sym_BSLASH,
      sym_key_string_text,
      anon_sym_LBRACE_LBRACE,
  [8698] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1151), 4,
      anon_sym_DQUOTE,
      aux_sym_quoted_string_text_token1,
      anon_sym_BSLASH,
      anon_sym_LBRACE_LBRACE,
  [8708] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1151), 4,
      anon_sym_LF,
      anon_sym_BSLASH,
      sym_filename_text,
      anon_sym_LBRACE_LBRACE,
  [8718] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1215), 4,
      anon_sym_BSLASH,
      aux_sym_value_string_text_token1,
      anon_sym_BQUOTE,
      anon_sym_LBRACE_LBRACE,
  [8728] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1217), 4,
      anon_sym_BSLASH,
      aux_sym_value_string_text_token1,
      anon_sym_BQUOTE,
      anon_sym_LBRACE_LBRACE,
  [8738] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(693), 1,
      anon_sym_DQUOTE,
    STATE(380), 1,
      sym_json_key_value,
    STATE(468), 1,
      sym_json_key_string,
    STATE(470), 1,
      sym_json_string,
  [8754] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(660), 1,
      anon_sym_DQUOTE,
    ACTIONS(1213), 1,
      anon_sym_SLASH,
    STATE(197), 2,
      sym_quoted_string,
      sym_regex,
  [8768] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1219), 4,
      anon_sym_DQUOTE,
      aux_sym_quoted_string_text_token1,
      anon_sym_BSLASH,
      anon_sym_LBRACE_LBRACE,
  [8778] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1221), 4,
      anon_sym_DQUOTE,
      aux_sym_quoted_string_text_token1,
      anon_sym_BSLASH,
      anon_sym_LBRACE_LBRACE,
  [8788] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1189), 1,
      aux_sym_hexdigit_token1,
    ACTIONS(1223), 1,
      anon_sym_RBRACE,
    STATE(235), 2,
      sym_hexdigit,
      aux_sym_oneline_hex_repeat1,
  [8802] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1225), 4,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
      aux_sym_json_string_text_token1,
      anon_sym_LBRACE_LBRACE,
  [8812] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(660), 1,
      anon_sym_DQUOTE,
    ACTIONS(1213), 1,
      anon_sym_SLASH,
    STATE(168), 2,
      sym_quoted_string,
      sym_regex,
  [8826] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1189), 1,
      aux_sym_hexdigit_token1,
    ACTIONS(1227), 1,
      anon_sym_RBRACE,
    STATE(235), 2,
      sym_hexdigit,
      aux_sym_oneline_hex_repeat1,
  [8840] = 4,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1079), 1,
      anon_sym_LF,
    STATE(402), 1,
      sym_exponent,
    ACTIONS(1125), 2,
      anon_sym_e,
      anon_sym_E,
  [8854] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1189), 1,
      aux_sym_hexdigit_token1,
    ACTIONS(1229), 1,
      anon_sym_RBRACE,
    STATE(235), 2,
      sym_hexdigit,
      aux_sym_oneline_hex_repeat1,
  [8868] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(705), 1,
      aux_sym_digit_token1,
    STATE(214), 2,
      sym_digit,
      aux_sym_integer_repeat1,
  [8879] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1231), 1,
      anon_sym_COMMA,
    ACTIONS(1234), 1,
      anon_sym_RBRACK,
    STATE(298), 1,
      aux_sym_json_array_repeat1,
  [8892] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1236), 1,
      aux_sym_variable_name_token1,
    STATE(116), 1,
      sym_variable_name,
    STATE(511), 1,
      sym_expr,
  [8905] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1236), 1,
      aux_sym_variable_name_token1,
    STATE(116), 1,
      sym_variable_name,
    STATE(510), 1,
      sym_expr,
  [8918] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1236), 1,
      aux_sym_variable_name_token1,
    STATE(116), 1,
      sym_variable_name,
    STATE(509), 1,
      sym_expr,
  [8931] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1236), 1,
      aux_sym_variable_name_token1,
    STATE(116), 1,
      sym_variable_name,
    STATE(508), 1,
      sym_expr,
  [8944] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1238), 3,
      anon_sym_BSLASH,
      anon_sym_SLASH,
      aux_sym_regex_text_token1,
  [8953] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1236), 1,
      aux_sym_variable_name_token1,
    STATE(116), 1,
      sym_variable_name,
    STATE(507), 1,
      sym_expr,
  [8966] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1236), 1,
      aux_sym_variable_name_token1,
    STATE(116), 1,
      sym_variable_name,
    STATE(506), 1,
      sym_expr,
  [8979] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1189), 1,
      aux_sym_hexdigit_token1,
    STATE(273), 2,
      sym_hexdigit,
      aux_sym_oneline_hex_repeat1,
  [8990] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1236), 1,
      aux_sym_variable_name_token1,
    STATE(116), 1,
      sym_variable_name,
    STATE(504), 1,
      sym_expr,
  [9003] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1189), 1,
      aux_sym_hexdigit_token1,
    STATE(296), 2,
      sym_hexdigit,
      aux_sym_oneline_hex_repeat1,
  [9014] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1236), 1,
      aux_sym_variable_name_token1,
    STATE(116), 1,
      sym_variable_name,
    STATE(502), 1,
      sym_expr,
  [9027] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1189), 1,
      aux_sym_hexdigit_token1,
    STATE(291), 2,
      sym_hexdigit,
      aux_sym_oneline_hex_repeat1,
  [9038] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1236), 1,
      aux_sym_variable_name_token1,
    STATE(116), 1,
      sym_variable_name,
    STATE(478), 1,
      sym_expr,
  [9051] = 4,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LF,
    ACTIONS(672), 1,
      ts_builtin_sym_end,
    STATE(49), 1,
      aux_sym_hurl_file_repeat2,
  [9064] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1240), 1,
      anon_sym_COMMA,
    ACTIONS(1242), 1,
      anon_sym_RBRACK,
    STATE(298), 1,
      aux_sym_json_array_repeat1,
  [9077] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1039), 1,
      anon_sym_COMMA,
    ACTIONS(1244), 1,
      anon_sym_RBRACE,
    STATE(323), 1,
      aux_sym_json_object_repeat1,
  [9090] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1240), 1,
      anon_sym_COMMA,
    ACTIONS(1246), 1,
      anon_sym_RBRACK,
    STATE(313), 1,
      aux_sym_json_array_repeat1,
  [9103] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1039), 1,
      anon_sym_COMMA,
    ACTIONS(1248), 1,
      anon_sym_RBRACE,
    STATE(323), 1,
      aux_sym_json_object_repeat1,
  [9116] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1039), 1,
      anon_sym_COMMA,
    ACTIONS(1248), 1,
      anon_sym_RBRACE,
    STATE(314), 1,
      aux_sym_json_object_repeat1,
  [9129] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(463), 1,
      sym_status,
    ACTIONS(1250), 2,
      aux_sym_status_token1,
      anon_sym_STAR,
  [9140] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1254), 1,
      anon_sym_POUND,
    ACTIONS(1252), 2,
      anon_sym_SEMI,
      aux_sym_filename_escaped_char_token1,
  [9151] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1236), 1,
      aux_sym_variable_name_token1,
    STATE(116), 1,
      sym_variable_name,
    STATE(459), 1,
      sym_expr,
  [9164] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1039), 1,
      anon_sym_COMMA,
    ACTIONS(1256), 1,
      anon_sym_RBRACE,
    STATE(323), 1,
      aux_sym_json_object_repeat1,
  [9177] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1149), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [9186] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1258), 1,
      anon_sym_RBRACE,
    ACTIONS(1260), 1,
      anon_sym_COMMA,
    STATE(323), 1,
      aux_sym_json_object_repeat1,
  [9199] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1240), 1,
      anon_sym_COMMA,
    ACTIONS(1263), 1,
      anon_sym_RBRACK,
    STATE(298), 1,
      aux_sym_json_array_repeat1,
  [9212] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(670), 1,
      aux_sym_digit_token1,
    STATE(227), 2,
      sym_digit,
      aux_sym_integer_repeat1,
  [9223] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1240), 1,
      anon_sym_COMMA,
    ACTIONS(1265), 1,
      anon_sym_RBRACK,
    STATE(324), 1,
      aux_sym_json_array_repeat1,
  [9236] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1039), 1,
      anon_sym_COMMA,
    ACTIONS(1267), 1,
      anon_sym_RBRACE,
    STATE(323), 1,
      aux_sym_json_object_repeat1,
  [9249] = 4,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1123), 1,
      anon_sym_DOT,
    ACTIONS(1269), 1,
      anon_sym_LF,
    STATE(421), 1,
      sym_fraction,
  [9262] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(670), 1,
      aux_sym_digit_token1,
    STATE(269), 2,
      sym_digit,
      aux_sym_integer_repeat1,
  [9273] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1039), 1,
      anon_sym_COMMA,
    ACTIONS(1267), 1,
      anon_sym_RBRACE,
    STATE(321), 1,
      aux_sym_json_object_repeat1,
  [9286] = 4,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LF,
    ACTIONS(1271), 1,
      ts_builtin_sym_end,
    STATE(49), 1,
      aux_sym_hurl_file_repeat2,
  [9299] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1273), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [9308] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1275), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [9317] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1277), 3,
      anon_sym_BSLASH,
      anon_sym_SLASH,
      aux_sym_regex_text_token1,
  [9326] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1279), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [9335] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1281), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [9344] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1283), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [9353] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(512), 1,
      sym_boolean,
    ACTIONS(666), 2,
      anon_sym_true,
      anon_sym_false,
  [9364] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1079), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [9373] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(494), 1,
      sym_boolean,
    ACTIONS(666), 2,
      anon_sym_true,
      anon_sym_false,
  [9384] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(492), 1,
      sym_boolean,
    ACTIONS(666), 2,
      anon_sym_true,
      anon_sym_false,
  [9395] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(705), 1,
      aux_sym_digit_token1,
    STATE(199), 2,
      sym_digit,
      aux_sym_integer_repeat1,
  [9406] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1285), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [9415] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1236), 1,
      aux_sym_variable_name_token1,
    STATE(485), 1,
      sym_variable_name,
    STATE(486), 1,
      sym_variable_definition,
  [9428] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(484), 1,
      sym_boolean,
    ACTIONS(666), 2,
      anon_sym_true,
      anon_sym_false,
  [9439] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(479), 1,
      sym_boolean,
    ACTIONS(666), 2,
      anon_sym_true,
      anon_sym_false,
  [9450] = 4,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1123), 1,
      anon_sym_DOT,
    ACTIONS(1287), 1,
      anon_sym_LF,
    STATE(421), 1,
      sym_fraction,
  [9463] = 4,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1123), 1,
      anon_sym_DOT,
    ACTIONS(1289), 1,
      anon_sym_LF,
    STATE(421), 1,
      sym_fraction,
  [9476] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1291), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [9485] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1293), 3,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      aux_sym_hexdigit_token1,
  [9494] = 4,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1123), 1,
      anon_sym_DOT,
    ACTIONS(1295), 1,
      anon_sym_LF,
    STATE(421), 1,
      sym_fraction,
  [9507] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1297), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [9516] = 4,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1123), 1,
      anon_sym_DOT,
    ACTIONS(1299), 1,
      anon_sym_LF,
    STATE(421), 1,
      sym_fraction,
  [9529] = 4,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1301), 1,
      anon_sym_LF,
    ACTIONS(1303), 1,
      aux_sym_file_contenttype_token1,
    STATE(413), 1,
      sym_file_contenttype,
  [9542] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1307), 1,
      anon_sym_POUND,
    ACTIONS(1305), 2,
      anon_sym_SEMI,
      aux_sym_filename_escaped_char_token1,
  [9553] = 4,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1123), 1,
      anon_sym_DOT,
    ACTIONS(1309), 1,
      anon_sym_LF,
    STATE(421), 1,
      sym_fraction,
  [9566] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1189), 1,
      aux_sym_hexdigit_token1,
    STATE(294), 2,
      sym_hexdigit,
      aux_sym_oneline_hex_repeat1,
  [9577] = 4,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1303), 1,
      aux_sym_file_contenttype_token1,
    ACTIONS(1311), 1,
      anon_sym_LF,
    STATE(419), 1,
      sym_file_contenttype,
  [9590] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1159), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [9599] = 4,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1123), 1,
      anon_sym_DOT,
    ACTIONS(1313), 1,
      anon_sym_LF,
    STATE(421), 1,
      sym_fraction,
  [9612] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1197), 1,
      anon_sym_DQUOTE,
    STATE(87), 1,
      sym_quoted_string,
  [9622] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1315), 1,
      anon_sym_LF,
    STATE(362), 1,
      aux_sym_query_string_params_section_repeat1,
  [9632] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1318), 1,
      anon_sym_LF,
    STATE(392), 1,
      aux_sym_multipart_form_data_section_repeat1,
  [9642] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1320), 1,
      anon_sym_LF,
    STATE(362), 1,
      aux_sym_query_string_params_section_repeat1,
  [9652] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1320), 1,
      anon_sym_LF,
    STATE(396), 1,
      aux_sym_query_string_params_section_repeat1,
  [9662] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1322), 1,
      anon_sym_LF,
    STATE(362), 1,
      aux_sym_query_string_params_section_repeat1,
  [9672] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1197), 1,
      anon_sym_DQUOTE,
    STATE(86), 1,
      sym_quoted_string,
  [9682] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1322), 1,
      anon_sym_LF,
    STATE(393), 1,
      aux_sym_query_string_params_section_repeat1,
  [9692] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(660), 1,
      anon_sym_DQUOTE,
    STATE(182), 1,
      sym_quoted_string,
  [9702] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(660), 1,
      anon_sym_DQUOTE,
    STATE(186), 1,
      sym_quoted_string,
  [9712] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(660), 1,
      anon_sym_DQUOTE,
    STATE(193), 1,
      sym_quoted_string,
  [9722] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(660), 1,
      anon_sym_DQUOTE,
    STATE(194), 1,
      sym_quoted_string,
  [9732] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(660), 1,
      anon_sym_DQUOTE,
    STATE(166), 1,
      sym_quoted_string,
  [9742] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1197), 1,
      anon_sym_DQUOTE,
    STATE(88), 1,
      sym_quoted_string,
  [9752] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1197), 1,
      anon_sym_DQUOTE,
    STATE(89), 1,
      sym_quoted_string,
  [9762] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1189), 1,
      aux_sym_hexdigit_token1,
    STATE(394), 1,
      sym_hexdigit,
  [9772] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1324), 2,
      aux_sym_status_token1,
      anon_sym_STAR,
  [9780] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1326), 1,
      anon_sym_LBRACE,
    STATE(255), 1,
      sym_unicode_char,
  [9790] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1328), 1,
      anon_sym_DQUOTE,
    ACTIONS(1330), 1,
      anon_sym_POUND,
  [9800] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1258), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [9808] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1332), 1,
      aux_sym_hexdigit_token1,
    STATE(270), 1,
      sym_hexdigit,
  [9818] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1189), 1,
      aux_sym_hexdigit_token1,
    STATE(381), 1,
      sym_hexdigit,
  [9828] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1334), 1,
      anon_sym_LF,
    STATE(2), 1,
      aux_sym_hurl_file_repeat2,
  [9838] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1197), 1,
      anon_sym_DQUOTE,
    STATE(80), 1,
      sym_quoted_string,
  [9848] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1336), 1,
      anon_sym_LBRACE,
    STATE(265), 1,
      sym_unicode_char,
  [9858] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1318), 1,
      anon_sym_LF,
    STATE(391), 1,
      aux_sym_multipart_form_data_section_repeat1,
  [9868] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1338), 1,
      anon_sym_LF,
    STATE(400), 1,
      aux_sym_query_string_params_section_repeat1,
  [9878] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1338), 1,
      anon_sym_LF,
    STATE(362), 1,
      aux_sym_query_string_params_section_repeat1,
  [9888] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1340), 1,
      anon_sym_LBRACE,
    STATE(233), 1,
      sym_unicode_char,
  [9898] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1342), 1,
      anon_sym_DQUOTE,
    ACTIONS(1344), 1,
      anon_sym_POUND,
  [9908] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1346), 1,
      anon_sym_LF,
    STATE(391), 1,
      aux_sym_multipart_form_data_section_repeat1,
  [9918] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1349), 1,
      anon_sym_LF,
    STATE(391), 1,
      aux_sym_multipart_form_data_section_repeat1,
  [9928] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1351), 1,
      anon_sym_LF,
    STATE(362), 1,
      aux_sym_query_string_params_section_repeat1,
  [9938] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1189), 1,
      aux_sym_hexdigit_token1,
    STATE(382), 1,
      sym_hexdigit,
  [9948] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1353), 1,
      anon_sym_LBRACE,
    STATE(277), 1,
      sym_unicode_char,
  [9958] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1355), 1,
      anon_sym_LF,
    STATE(362), 1,
      aux_sym_query_string_params_section_repeat1,
  [9968] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1234), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [9976] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1357), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [9984] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(660), 1,
      anon_sym_DQUOTE,
    STATE(407), 1,
      sym_quoted_string,
  [9994] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1359), 1,
      anon_sym_LF,
    STATE(362), 1,
      aux_sym_query_string_params_section_repeat1,
  [10004] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1287), 1,
      anon_sym_LF,
  [10011] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1279), 1,
      anon_sym_LF,
  [10018] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1299), 1,
      anon_sym_LF,
  [10025] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1309), 1,
      anon_sym_LF,
  [10032] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1361), 1,
      anon_sym_LF,
  [10039] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1363), 1,
      anon_sym_LF,
  [10046] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1365), 1,
      anon_sym_LF,
  [10053] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1367), 1,
      anon_sym_LF,
  [10060] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1369), 1,
      anon_sym_LF,
  [10067] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1371), 1,
      anon_sym_LF,
  [10074] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1373), 1,
      anon_sym_LF,
  [10081] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1375), 1,
      anon_sym_LF,
  [10088] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1311), 1,
      anon_sym_LF,
  [10095] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1377), 1,
      anon_sym_LF,
  [10102] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1379), 1,
      anon_sym_LF,
  [10109] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1381), 1,
      anon_sym_COLON,
  [10116] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1383), 1,
      anon_sym_SEMI,
  [10123] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1385), 1,
      anon_sym_LF,
  [10130] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1387), 1,
      anon_sym_LF,
  [10137] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1389), 1,
      anon_sym_COLON,
  [10144] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1391), 1,
      anon_sym_LF,
  [10151] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1273), 1,
      anon_sym_LF,
  [10158] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1275), 1,
      anon_sym_LF,
  [10165] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1393), 1,
      anon_sym_COLON,
  [10172] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1395), 1,
      anon_sym_COLON,
  [10179] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1397), 1,
      anon_sym_LF,
  [10186] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1159), 1,
      anon_sym_LF,
  [10193] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1399), 1,
      anon_sym_COLON,
  [10200] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1401), 1,
      anon_sym_LF,
  [10207] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1403), 1,
      anon_sym_LF,
  [10214] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1405), 1,
      anon_sym_LF,
  [10221] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1407), 1,
      anon_sym_LF,
  [10228] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1409), 1,
      anon_sym_LF,
  [10235] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1411), 1,
      anon_sym_LF,
  [10242] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1413), 1,
      anon_sym_LF,
  [10249] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1415), 1,
      anon_sym_LF,
  [10256] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1417), 1,
      anon_sym_COLON,
  [10263] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1419), 1,
      anon_sym_LF,
  [10270] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1297), 1,
      anon_sym_LF,
  [10277] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1291), 1,
      anon_sym_LF,
  [10284] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1421), 1,
      anon_sym_LF,
  [10291] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1423), 1,
      anon_sym_COLON,
  [10298] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1425), 1,
      anon_sym_COLON,
  [10305] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1427), 1,
      anon_sym_LF,
  [10312] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1429), 1,
      anon_sym_COLON,
  [10319] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1431), 1,
      anon_sym_SLASH,
  [10326] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1433), 1,
      anon_sym_LF,
  [10333] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1435), 1,
      aux_sym_oneline_base64_token1,
  [10340] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1289), 1,
      anon_sym_LF,
  [10347] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1437), 1,
      anon_sym_LF,
  [10354] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1439), 1,
      aux_sym_regex_escaped_char_token1,
  [10361] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1441), 1,
      anon_sym_To_COMMABe_COMMADefined,
  [10368] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1443), 1,
      anon_sym_LF,
  [10375] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1445), 1,
      anon_sym_LF,
  [10382] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1447), 1,
      anon_sym_LF,
  [10389] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1449), 1,
      anon_sym_LF,
  [10396] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1451), 1,
      anon_sym_LF,
  [10403] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1453), 1,
      anon_sym_LF,
  [10410] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1455), 1,
      anon_sym_RBRACE_RBRACE,
  [10417] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1457), 1,
      aux_sym_variable_name_token2,
  [10424] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1313), 1,
      anon_sym_LF,
  [10431] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1295), 1,
      anon_sym_LF,
  [10438] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1459), 1,
      anon_sym_LF,
  [10445] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1461), 1,
      anon_sym_LF,
  [10452] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1285), 1,
      anon_sym_LF,
  [10459] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1463), 1,
      anon_sym_LF,
  [10466] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1465), 1,
      anon_sym_LF,
  [10473] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1467), 1,
      anon_sym_COLON,
  [10480] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1269), 1,
      anon_sym_LF,
  [10487] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1469), 1,
      anon_sym_COLON,
  [10494] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1281), 1,
      anon_sym_LF,
  [10501] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1079), 1,
      anon_sym_LF,
  [10508] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1471), 1,
      anon_sym_LF,
  [10515] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1473), 1,
      anon_sym_GT,
  [10522] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1283), 1,
      anon_sym_LF,
  [10529] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1475), 1,
      anon_sym_LF,
  [10536] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1477), 1,
      anon_sym_LF,
  [10543] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1479), 1,
      anon_sym_RBRACE_RBRACE,
  [10550] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1481), 1,
      anon_sym_LF,
  [10557] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1483), 1,
      anon_sym_SEMI,
  [10564] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1485), 1,
      anon_sym_LF,
  [10571] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1487), 1,
      anon_sym_LF,
  [10578] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1489), 1,
      anon_sym_LF,
  [10585] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1491), 1,
      anon_sym_LF,
  [10592] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1493), 1,
      anon_sym_EQ,
  [10599] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1495), 1,
      anon_sym_LF,
  [10606] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1497), 1,
      anon_sym_LF,
  [10613] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1499), 1,
      anon_sym_LF,
  [10620] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1185), 1,
      anon_sym_LF,
  [10627] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1501), 1,
      anon_sym_COLON,
  [10634] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1173), 1,
      anon_sym_LF,
  [10641] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1503), 1,
      anon_sym_LF,
  [10648] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1505), 1,
      anon_sym_LF,
  [10655] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1507), 1,
      anon_sym_LF,
  [10662] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1509), 1,
      anon_sym_SLASH,
  [10669] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1511), 1,
      anon_sym_COLON,
  [10676] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1513), 1,
      anon_sym_COLON,
  [10683] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1515), 1,
      aux_sym_oneline_string_text_token1,
  [10690] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1517), 1,
      anon_sym_LF,
  [10697] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1519), 1,
      anon_sym_LF,
  [10704] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1521), 1,
      anon_sym_LF,
  [10711] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1523), 1,
      anon_sym_RBRACE_RBRACE,
  [10718] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1525), 1,
      anon_sym_LF,
  [10725] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1527), 1,
      anon_sym_RBRACE_RBRACE,
  [10732] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1529), 1,
      anon_sym_LF,
  [10739] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1531), 1,
      anon_sym_RBRACE_RBRACE,
  [10746] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1533), 1,
      anon_sym_RBRACE_RBRACE,
  [10753] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1535), 1,
      anon_sym_RBRACE_RBRACE,
  [10760] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1537), 1,
      anon_sym_RBRACE_RBRACE,
  [10767] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1539), 1,
      anon_sym_RBRACE_RBRACE,
  [10774] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1541), 1,
      anon_sym_RBRACE_RBRACE,
  [10781] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1543), 1,
      anon_sym_LF,
  [10788] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1545), 1,
      ts_builtin_sym_end,
  [10795] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1547), 1,
      anon_sym_LF,
  [10802] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1549), 1,
      anon_sym_LF,
  [10809] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1551), 1,
      anon_sym_LF,
  [10816] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1553), 1,
      anon_sym_LF,
  [10823] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1555), 1,
      anon_sym_LF,
  [10830] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1557), 1,
      anon_sym_SEMI,
  [10837] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1559), 1,
      anon_sym_COLON,
  [10844] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1561), 1,
      anon_sym_LF,
  [10851] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1563), 1,
      anon_sym_LF,
  [10858] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1565), 1,
      anon_sym_LF,
  [10865] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1567), 1,
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
  [SMALL_STATE(50)] = 2703,
  [SMALL_STATE(51)] = 2772,
  [SMALL_STATE(52)] = 2824,
  [SMALL_STATE(53)] = 2890,
  [SMALL_STATE(54)] = 2956,
  [SMALL_STATE(55)] = 3022,
  [SMALL_STATE(56)] = 3072,
  [SMALL_STATE(57)] = 3122,
  [SMALL_STATE(58)] = 3189,
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
  [SMALL_STATE(92)] = 4645,
  [SMALL_STATE(93)] = 4685,
  [SMALL_STATE(94)] = 4738,
  [SMALL_STATE(95)] = 4791,
  [SMALL_STATE(96)] = 4844,
  [SMALL_STATE(97)] = 4885,
  [SMALL_STATE(98)] = 4915,
  [SMALL_STATE(99)] = 4945,
  [SMALL_STATE(100)] = 4997,
  [SMALL_STATE(101)] = 5027,
  [SMALL_STATE(102)] = 5063,
  [SMALL_STATE(103)] = 5115,
  [SMALL_STATE(104)] = 5145,
  [SMALL_STATE(105)] = 5175,
  [SMALL_STATE(106)] = 5220,
  [SMALL_STATE(107)] = 5265,
  [SMALL_STATE(108)] = 5310,
  [SMALL_STATE(109)] = 5355,
  [SMALL_STATE(110)] = 5381,
  [SMALL_STATE(111)] = 5407,
  [SMALL_STATE(112)] = 5433,
  [SMALL_STATE(113)] = 5461,
  [SMALL_STATE(114)] = 5487,
  [SMALL_STATE(115)] = 5513,
  [SMALL_STATE(116)] = 5554,
  [SMALL_STATE(117)] = 5595,
  [SMALL_STATE(118)] = 5636,
  [SMALL_STATE(119)] = 5677,
  [SMALL_STATE(120)] = 5718,
  [SMALL_STATE(121)] = 5756,
  [SMALL_STATE(122)] = 5791,
  [SMALL_STATE(123)] = 5825,
  [SMALL_STATE(124)] = 5857,
  [SMALL_STATE(125)] = 5891,
  [SMALL_STATE(126)] = 5925,
  [SMALL_STATE(127)] = 5954,
  [SMALL_STATE(128)] = 5983,
  [SMALL_STATE(129)] = 6010,
  [SMALL_STATE(130)] = 6037,
  [SMALL_STATE(131)] = 6066,
  [SMALL_STATE(132)] = 6095,
  [SMALL_STATE(133)] = 6124,
  [SMALL_STATE(134)] = 6151,
  [SMALL_STATE(135)] = 6180,
  [SMALL_STATE(136)] = 6207,
  [SMALL_STATE(137)] = 6234,
  [SMALL_STATE(138)] = 6263,
  [SMALL_STATE(139)] = 6289,
  [SMALL_STATE(140)] = 6317,
  [SMALL_STATE(141)] = 6345,
  [SMALL_STATE(142)] = 6371,
  [SMALL_STATE(143)] = 6399,
  [SMALL_STATE(144)] = 6427,
  [SMALL_STATE(145)] = 6455,
  [SMALL_STATE(146)] = 6481,
  [SMALL_STATE(147)] = 6506,
  [SMALL_STATE(148)] = 6521,
  [SMALL_STATE(149)] = 6540,
  [SMALL_STATE(150)] = 6559,
  [SMALL_STATE(151)] = 6584,
  [SMALL_STATE(152)] = 6609,
  [SMALL_STATE(153)] = 6634,
  [SMALL_STATE(154)] = 6659,
  [SMALL_STATE(155)] = 6684,
  [SMALL_STATE(156)] = 6709,
  [SMALL_STATE(157)] = 6734,
  [SMALL_STATE(158)] = 6759,
  [SMALL_STATE(159)] = 6784,
  [SMALL_STATE(160)] = 6809,
  [SMALL_STATE(161)] = 6834,
  [SMALL_STATE(162)] = 6859,
  [SMALL_STATE(163)] = 6878,
  [SMALL_STATE(164)] = 6900,
  [SMALL_STATE(165)] = 6916,
  [SMALL_STATE(166)] = 6932,
  [SMALL_STATE(167)] = 6948,
  [SMALL_STATE(168)] = 6970,
  [SMALL_STATE(169)] = 6986,
  [SMALL_STATE(170)] = 7002,
  [SMALL_STATE(171)] = 7024,
  [SMALL_STATE(172)] = 7040,
  [SMALL_STATE(173)] = 7056,
  [SMALL_STATE(174)] = 7072,
  [SMALL_STATE(175)] = 7092,
  [SMALL_STATE(176)] = 7108,
  [SMALL_STATE(177)] = 7124,
  [SMALL_STATE(178)] = 7140,
  [SMALL_STATE(179)] = 7156,
  [SMALL_STATE(180)] = 7172,
  [SMALL_STATE(181)] = 7188,
  [SMALL_STATE(182)] = 7210,
  [SMALL_STATE(183)] = 7226,
  [SMALL_STATE(184)] = 7242,
  [SMALL_STATE(185)] = 7258,
  [SMALL_STATE(186)] = 7274,
  [SMALL_STATE(187)] = 7290,
  [SMALL_STATE(188)] = 7306,
  [SMALL_STATE(189)] = 7322,
  [SMALL_STATE(190)] = 7338,
  [SMALL_STATE(191)] = 7358,
  [SMALL_STATE(192)] = 7374,
  [SMALL_STATE(193)] = 7390,
  [SMALL_STATE(194)] = 7406,
  [SMALL_STATE(195)] = 7422,
  [SMALL_STATE(196)] = 7438,
  [SMALL_STATE(197)] = 7460,
  [SMALL_STATE(198)] = 7476,
  [SMALL_STATE(199)] = 7492,
  [SMALL_STATE(200)] = 7510,
  [SMALL_STATE(201)] = 7529,
  [SMALL_STATE(202)] = 7542,
  [SMALL_STATE(203)] = 7567,
  [SMALL_STATE(204)] = 7584,
  [SMALL_STATE(205)] = 7605,
  [SMALL_STATE(206)] = 7624,
  [SMALL_STATE(207)] = 7645,
  [SMALL_STATE(208)] = 7660,
  [SMALL_STATE(209)] = 7679,
  [SMALL_STATE(210)] = 7700,
  [SMALL_STATE(211)] = 7721,
  [SMALL_STATE(212)] = 7742,
  [SMALL_STATE(213)] = 7767,
  [SMALL_STATE(214)] = 7788,
  [SMALL_STATE(215)] = 7804,
  [SMALL_STATE(216)] = 7822,
  [SMALL_STATE(217)] = 7836,
  [SMALL_STATE(218)] = 7854,
  [SMALL_STATE(219)] = 7870,
  [SMALL_STATE(220)] = 7890,
  [SMALL_STATE(221)] = 7908,
  [SMALL_STATE(222)] = 7926,
  [SMALL_STATE(223)] = 7942,
  [SMALL_STATE(224)] = 7960,
  [SMALL_STATE(225)] = 7978,
  [SMALL_STATE(226)] = 7994,
  [SMALL_STATE(227)] = 8008,
  [SMALL_STATE(228)] = 8026,
  [SMALL_STATE(229)] = 8046,
  [SMALL_STATE(230)] = 8064,
  [SMALL_STATE(231)] = 8080,
  [SMALL_STATE(232)] = 8094,
  [SMALL_STATE(233)] = 8105,
  [SMALL_STATE(234)] = 8116,
  [SMALL_STATE(235)] = 8129,
  [SMALL_STATE(236)] = 8144,
  [SMALL_STATE(237)] = 8159,
  [SMALL_STATE(238)] = 8170,
  [SMALL_STATE(239)] = 8183,
  [SMALL_STATE(240)] = 8198,
  [SMALL_STATE(241)] = 8213,
  [SMALL_STATE(242)] = 8226,
  [SMALL_STATE(243)] = 8239,
  [SMALL_STATE(244)] = 8250,
  [SMALL_STATE(245)] = 8263,
  [SMALL_STATE(246)] = 8274,
  [SMALL_STATE(247)] = 8289,
  [SMALL_STATE(248)] = 8302,
  [SMALL_STATE(249)] = 8316,
  [SMALL_STATE(250)] = 8326,
  [SMALL_STATE(251)] = 8340,
  [SMALL_STATE(252)] = 8350,
  [SMALL_STATE(253)] = 8360,
  [SMALL_STATE(254)] = 8372,
  [SMALL_STATE(255)] = 8386,
  [SMALL_STATE(256)] = 8396,
  [SMALL_STATE(257)] = 8406,
  [SMALL_STATE(258)] = 8416,
  [SMALL_STATE(259)] = 8426,
  [SMALL_STATE(260)] = 8436,
  [SMALL_STATE(261)] = 8450,
  [SMALL_STATE(262)] = 8460,
  [SMALL_STATE(263)] = 8470,
  [SMALL_STATE(264)] = 8484,
  [SMALL_STATE(265)] = 8494,
  [SMALL_STATE(266)] = 8504,
  [SMALL_STATE(267)] = 8514,
  [SMALL_STATE(268)] = 8524,
  [SMALL_STATE(269)] = 8538,
  [SMALL_STATE(270)] = 8552,
  [SMALL_STATE(271)] = 8562,
  [SMALL_STATE(272)] = 8572,
  [SMALL_STATE(273)] = 8586,
  [SMALL_STATE(274)] = 8600,
  [SMALL_STATE(275)] = 8610,
  [SMALL_STATE(276)] = 8620,
  [SMALL_STATE(277)] = 8630,
  [SMALL_STATE(278)] = 8640,
  [SMALL_STATE(279)] = 8650,
  [SMALL_STATE(280)] = 8664,
  [SMALL_STATE(281)] = 8678,
  [SMALL_STATE(282)] = 8688,
  [SMALL_STATE(283)] = 8698,
  [SMALL_STATE(284)] = 8708,
  [SMALL_STATE(285)] = 8718,
  [SMALL_STATE(286)] = 8728,
  [SMALL_STATE(287)] = 8738,
  [SMALL_STATE(288)] = 8754,
  [SMALL_STATE(289)] = 8768,
  [SMALL_STATE(290)] = 8778,
  [SMALL_STATE(291)] = 8788,
  [SMALL_STATE(292)] = 8802,
  [SMALL_STATE(293)] = 8812,
  [SMALL_STATE(294)] = 8826,
  [SMALL_STATE(295)] = 8840,
  [SMALL_STATE(296)] = 8854,
  [SMALL_STATE(297)] = 8868,
  [SMALL_STATE(298)] = 8879,
  [SMALL_STATE(299)] = 8892,
  [SMALL_STATE(300)] = 8905,
  [SMALL_STATE(301)] = 8918,
  [SMALL_STATE(302)] = 8931,
  [SMALL_STATE(303)] = 8944,
  [SMALL_STATE(304)] = 8953,
  [SMALL_STATE(305)] = 8966,
  [SMALL_STATE(306)] = 8979,
  [SMALL_STATE(307)] = 8990,
  [SMALL_STATE(308)] = 9003,
  [SMALL_STATE(309)] = 9014,
  [SMALL_STATE(310)] = 9027,
  [SMALL_STATE(311)] = 9038,
  [SMALL_STATE(312)] = 9051,
  [SMALL_STATE(313)] = 9064,
  [SMALL_STATE(314)] = 9077,
  [SMALL_STATE(315)] = 9090,
  [SMALL_STATE(316)] = 9103,
  [SMALL_STATE(317)] = 9116,
  [SMALL_STATE(318)] = 9129,
  [SMALL_STATE(319)] = 9140,
  [SMALL_STATE(320)] = 9151,
  [SMALL_STATE(321)] = 9164,
  [SMALL_STATE(322)] = 9177,
  [SMALL_STATE(323)] = 9186,
  [SMALL_STATE(324)] = 9199,
  [SMALL_STATE(325)] = 9212,
  [SMALL_STATE(326)] = 9223,
  [SMALL_STATE(327)] = 9236,
  [SMALL_STATE(328)] = 9249,
  [SMALL_STATE(329)] = 9262,
  [SMALL_STATE(330)] = 9273,
  [SMALL_STATE(331)] = 9286,
  [SMALL_STATE(332)] = 9299,
  [SMALL_STATE(333)] = 9308,
  [SMALL_STATE(334)] = 9317,
  [SMALL_STATE(335)] = 9326,
  [SMALL_STATE(336)] = 9335,
  [SMALL_STATE(337)] = 9344,
  [SMALL_STATE(338)] = 9353,
  [SMALL_STATE(339)] = 9364,
  [SMALL_STATE(340)] = 9373,
  [SMALL_STATE(341)] = 9384,
  [SMALL_STATE(342)] = 9395,
  [SMALL_STATE(343)] = 9406,
  [SMALL_STATE(344)] = 9415,
  [SMALL_STATE(345)] = 9428,
  [SMALL_STATE(346)] = 9439,
  [SMALL_STATE(347)] = 9450,
  [SMALL_STATE(348)] = 9463,
  [SMALL_STATE(349)] = 9476,
  [SMALL_STATE(350)] = 9485,
  [SMALL_STATE(351)] = 9494,
  [SMALL_STATE(352)] = 9507,
  [SMALL_STATE(353)] = 9516,
  [SMALL_STATE(354)] = 9529,
  [SMALL_STATE(355)] = 9542,
  [SMALL_STATE(356)] = 9553,
  [SMALL_STATE(357)] = 9566,
  [SMALL_STATE(358)] = 9577,
  [SMALL_STATE(359)] = 9590,
  [SMALL_STATE(360)] = 9599,
  [SMALL_STATE(361)] = 9612,
  [SMALL_STATE(362)] = 9622,
  [SMALL_STATE(363)] = 9632,
  [SMALL_STATE(364)] = 9642,
  [SMALL_STATE(365)] = 9652,
  [SMALL_STATE(366)] = 9662,
  [SMALL_STATE(367)] = 9672,
  [SMALL_STATE(368)] = 9682,
  [SMALL_STATE(369)] = 9692,
  [SMALL_STATE(370)] = 9702,
  [SMALL_STATE(371)] = 9712,
  [SMALL_STATE(372)] = 9722,
  [SMALL_STATE(373)] = 9732,
  [SMALL_STATE(374)] = 9742,
  [SMALL_STATE(375)] = 9752,
  [SMALL_STATE(376)] = 9762,
  [SMALL_STATE(377)] = 9772,
  [SMALL_STATE(378)] = 9780,
  [SMALL_STATE(379)] = 9790,
  [SMALL_STATE(380)] = 9800,
  [SMALL_STATE(381)] = 9808,
  [SMALL_STATE(382)] = 9818,
  [SMALL_STATE(383)] = 9828,
  [SMALL_STATE(384)] = 9838,
  [SMALL_STATE(385)] = 9848,
  [SMALL_STATE(386)] = 9858,
  [SMALL_STATE(387)] = 9868,
  [SMALL_STATE(388)] = 9878,
  [SMALL_STATE(389)] = 9888,
  [SMALL_STATE(390)] = 9898,
  [SMALL_STATE(391)] = 9908,
  [SMALL_STATE(392)] = 9918,
  [SMALL_STATE(393)] = 9928,
  [SMALL_STATE(394)] = 9938,
  [SMALL_STATE(395)] = 9948,
  [SMALL_STATE(396)] = 9958,
  [SMALL_STATE(397)] = 9968,
  [SMALL_STATE(398)] = 9976,
  [SMALL_STATE(399)] = 9984,
  [SMALL_STATE(400)] = 9994,
  [SMALL_STATE(401)] = 10004,
  [SMALL_STATE(402)] = 10011,
  [SMALL_STATE(403)] = 10018,
  [SMALL_STATE(404)] = 10025,
  [SMALL_STATE(405)] = 10032,
  [SMALL_STATE(406)] = 10039,
  [SMALL_STATE(407)] = 10046,
  [SMALL_STATE(408)] = 10053,
  [SMALL_STATE(409)] = 10060,
  [SMALL_STATE(410)] = 10067,
  [SMALL_STATE(411)] = 10074,
  [SMALL_STATE(412)] = 10081,
  [SMALL_STATE(413)] = 10088,
  [SMALL_STATE(414)] = 10095,
  [SMALL_STATE(415)] = 10102,
  [SMALL_STATE(416)] = 10109,
  [SMALL_STATE(417)] = 10116,
  [SMALL_STATE(418)] = 10123,
  [SMALL_STATE(419)] = 10130,
  [SMALL_STATE(420)] = 10137,
  [SMALL_STATE(421)] = 10144,
  [SMALL_STATE(422)] = 10151,
  [SMALL_STATE(423)] = 10158,
  [SMALL_STATE(424)] = 10165,
  [SMALL_STATE(425)] = 10172,
  [SMALL_STATE(426)] = 10179,
  [SMALL_STATE(427)] = 10186,
  [SMALL_STATE(428)] = 10193,
  [SMALL_STATE(429)] = 10200,
  [SMALL_STATE(430)] = 10207,
  [SMALL_STATE(431)] = 10214,
  [SMALL_STATE(432)] = 10221,
  [SMALL_STATE(433)] = 10228,
  [SMALL_STATE(434)] = 10235,
  [SMALL_STATE(435)] = 10242,
  [SMALL_STATE(436)] = 10249,
  [SMALL_STATE(437)] = 10256,
  [SMALL_STATE(438)] = 10263,
  [SMALL_STATE(439)] = 10270,
  [SMALL_STATE(440)] = 10277,
  [SMALL_STATE(441)] = 10284,
  [SMALL_STATE(442)] = 10291,
  [SMALL_STATE(443)] = 10298,
  [SMALL_STATE(444)] = 10305,
  [SMALL_STATE(445)] = 10312,
  [SMALL_STATE(446)] = 10319,
  [SMALL_STATE(447)] = 10326,
  [SMALL_STATE(448)] = 10333,
  [SMALL_STATE(449)] = 10340,
  [SMALL_STATE(450)] = 10347,
  [SMALL_STATE(451)] = 10354,
  [SMALL_STATE(452)] = 10361,
  [SMALL_STATE(453)] = 10368,
  [SMALL_STATE(454)] = 10375,
  [SMALL_STATE(455)] = 10382,
  [SMALL_STATE(456)] = 10389,
  [SMALL_STATE(457)] = 10396,
  [SMALL_STATE(458)] = 10403,
  [SMALL_STATE(459)] = 10410,
  [SMALL_STATE(460)] = 10417,
  [SMALL_STATE(461)] = 10424,
  [SMALL_STATE(462)] = 10431,
  [SMALL_STATE(463)] = 10438,
  [SMALL_STATE(464)] = 10445,
  [SMALL_STATE(465)] = 10452,
  [SMALL_STATE(466)] = 10459,
  [SMALL_STATE(467)] = 10466,
  [SMALL_STATE(468)] = 10473,
  [SMALL_STATE(469)] = 10480,
  [SMALL_STATE(470)] = 10487,
  [SMALL_STATE(471)] = 10494,
  [SMALL_STATE(472)] = 10501,
  [SMALL_STATE(473)] = 10508,
  [SMALL_STATE(474)] = 10515,
  [SMALL_STATE(475)] = 10522,
  [SMALL_STATE(476)] = 10529,
  [SMALL_STATE(477)] = 10536,
  [SMALL_STATE(478)] = 10543,
  [SMALL_STATE(479)] = 10550,
  [SMALL_STATE(480)] = 10557,
  [SMALL_STATE(481)] = 10564,
  [SMALL_STATE(482)] = 10571,
  [SMALL_STATE(483)] = 10578,
  [SMALL_STATE(484)] = 10585,
  [SMALL_STATE(485)] = 10592,
  [SMALL_STATE(486)] = 10599,
  [SMALL_STATE(487)] = 10606,
  [SMALL_STATE(488)] = 10613,
  [SMALL_STATE(489)] = 10620,
  [SMALL_STATE(490)] = 10627,
  [SMALL_STATE(491)] = 10634,
  [SMALL_STATE(492)] = 10641,
  [SMALL_STATE(493)] = 10648,
  [SMALL_STATE(494)] = 10655,
  [SMALL_STATE(495)] = 10662,
  [SMALL_STATE(496)] = 10669,
  [SMALL_STATE(497)] = 10676,
  [SMALL_STATE(498)] = 10683,
  [SMALL_STATE(499)] = 10690,
  [SMALL_STATE(500)] = 10697,
  [SMALL_STATE(501)] = 10704,
  [SMALL_STATE(502)] = 10711,
  [SMALL_STATE(503)] = 10718,
  [SMALL_STATE(504)] = 10725,
  [SMALL_STATE(505)] = 10732,
  [SMALL_STATE(506)] = 10739,
  [SMALL_STATE(507)] = 10746,
  [SMALL_STATE(508)] = 10753,
  [SMALL_STATE(509)] = 10760,
  [SMALL_STATE(510)] = 10767,
  [SMALL_STATE(511)] = 10774,
  [SMALL_STATE(512)] = 10781,
  [SMALL_STATE(513)] = 10788,
  [SMALL_STATE(514)] = 10795,
  [SMALL_STATE(515)] = 10802,
  [SMALL_STATE(516)] = 10809,
  [SMALL_STATE(517)] = 10816,
  [SMALL_STATE(518)] = 10823,
  [SMALL_STATE(519)] = 10830,
  [SMALL_STATE(520)] = 10837,
  [SMALL_STATE(521)] = 10844,
  [SMALL_STATE(522)] = 10851,
  [SMALL_STATE(523)] = 10858,
  [SMALL_STATE(524)] = 10865,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hurl_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(271),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 3),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [17] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 3),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(458),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(457),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(456),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(455),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(454),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(453),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(452),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(448),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(260),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(390),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(231),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(202),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(311),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(440),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(439),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(244),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 2),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 2),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 4),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 4),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 5),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 5),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response, 3),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_response, 3),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(515),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(516),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response, 4),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_response, 4),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_options_section, 2),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_options_section, 2),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(445),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(443),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(442),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(437),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(497),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(496),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(490),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(416),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(424),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(425),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_options_section, 3),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_options_section, 3),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_options_section_repeat1, 2),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_options_section_repeat1, 2),
  [117] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_options_section_repeat1, 2), SHIFT_REPEAT(445),
  [120] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_options_section_repeat1, 2), SHIFT_REPEAT(443),
  [123] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_options_section_repeat1, 2), SHIFT_REPEAT(442),
  [126] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_options_section_repeat1, 2), SHIFT_REPEAT(437),
  [129] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_options_section_repeat1, 2), SHIFT_REPEAT(497),
  [132] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_options_section_repeat1, 2), SHIFT_REPEAT(496),
  [135] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_options_section_repeat1, 2), SHIFT_REPEAT(490),
  [138] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_options_section_repeat1, 2), SHIFT_REPEAT(416),
  [141] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_options_section_repeat1, 2), SHIFT_REPEAT(424),
  [144] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_options_section_repeat1, 2), SHIFT_REPEAT(425),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_asserts_section_repeat1, 2),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_asserts_section_repeat1, 2),
  [151] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_asserts_section_repeat1, 2), SHIFT_REPEAT(384),
  [154] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_asserts_section_repeat1, 2), SHIFT_REPEAT(81),
  [157] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_asserts_section_repeat1, 2), SHIFT_REPEAT(76),
  [160] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_asserts_section_repeat1, 2), SHIFT_REPEAT(375),
  [163] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_asserts_section_repeat1, 2), SHIFT_REPEAT(374),
  [166] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_asserts_section_repeat1, 2), SHIFT_REPEAT(77),
  [169] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_asserts_section_repeat1, 2), SHIFT_REPEAT(361),
  [172] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_asserts_section_repeat1, 2), SHIFT_REPEAT(367),
  [175] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_asserts_section_repeat1, 2), SHIFT_REPEAT(280),
  [178] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_asserts_section_repeat1, 2), SHIFT_REPEAT(78),
  [181] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_asserts_section_repeat1, 2), SHIFT_REPEAT(79),
  [184] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_asserts_section_repeat1, 2), SHIFT_REPEAT(83),
  [187] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_asserts_section_repeat1, 2), SHIFT_REPEAT(84),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_asserts_section, 3),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_asserts_section, 3),
  [194] = {.entry = {.count = 1, .reusable = false}}, SHIFT(384),
  [196] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [198] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [200] = {.entry = {.count = 1, .reusable = false}}, SHIFT(375),
  [202] = {.entry = {.count = 1, .reusable = false}}, SHIFT(374),
  [204] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [206] = {.entry = {.count = 1, .reusable = false}}, SHIFT(361),
  [208] = {.entry = {.count = 1, .reusable = false}}, SHIFT(367),
  [210] = {.entry = {.count = 1, .reusable = false}}, SHIFT(280),
  [212] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [214] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [216] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [218] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_asserts_section, 2),
  [222] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_asserts_section, 2),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [226] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [232] = {.entry = {.count = 1, .reusable = false}}, SHIFT(210),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [236] = {.entry = {.count = 1, .reusable = false}}, SHIFT(213),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(434),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(431),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(430),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response, 5),
  [276] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_response, 5),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multipart_form_data_section, 3),
  [280] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multipart_form_data_section, 3),
  [282] = {.entry = {.count = 1, .reusable = false}}, SHIFT(302),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_request_repeat1, 2),
  [286] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_request_repeat1, 2),
  [288] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat1, 2), SHIFT_REPEAT(390),
  [291] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat1, 2), SHIFT_REPEAT(231),
  [294] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat1, 2), SHIFT_REPEAT(302),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multipart_form_data_section, 4),
  [299] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multipart_form_data_section, 4),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multipart_form_data_section, 5),
  [303] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multipart_form_data_section, 5),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insecure_option, 4),
  [307] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_insecure_option, 4),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option, 1),
  [311] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_option, 1),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_very_verbose_option, 4),
  [315] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_very_verbose_option, 4),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_option, 4),
  [319] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_option, 4),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_retry_max_count_option, 4),
  [323] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_retry_max_count_option, 4),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_verbose_option, 4),
  [327] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_verbose_option, 4),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_retry_interval_option, 4),
  [331] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_retry_interval_option, 4),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ca_certificate_option, 3),
  [335] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ca_certificate_option, 3),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_retry_option, 4),
  [339] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_retry_option, 4),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_max_redirs_option, 4),
  [343] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_max_redirs_option, 4),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_follow_redirect_option, 4),
  [347] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_follow_redirect_option, 4),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ca_certificate_option, 4),
  [351] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ca_certificate_option, 4),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_form_params_section, 3),
  [355] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_form_params_section, 3),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_string_params_section, 5),
  [359] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query_string_params_section, 5),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cookies_section, 3),
  [363] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cookies_section, 3),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_string_params_section, 3),
  [367] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query_string_params_section, 3),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_string_params_section, 4),
  [371] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query_string_params_section, 4),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cookies_section, 5),
  [375] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cookies_section, 5),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_form_params_section, 4),
  [379] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_form_params_section, 4),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cookies_section, 4),
  [383] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cookies_section, 4),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_form_params_section, 5),
  [387] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_form_params_section, 5),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_request_repeat2, 2),
  [391] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_request_repeat2, 2),
  [393] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat2, 2), SHIFT_REPEAT(458),
  [396] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat2, 2), SHIFT_REPEAT(457),
  [399] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat2, 2), SHIFT_REPEAT(456),
  [402] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat2, 2), SHIFT_REPEAT(455),
  [405] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat2, 2), SHIFT_REPEAT(454),
  [408] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat2, 2), SHIFT_REPEAT(453),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assert, 3),
  [413] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assert, 3),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assert, 4),
  [417] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assert, 4),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_hurl_file_repeat2, 2),
  [421] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_hurl_file_repeat2, 2), SHIFT_REPEAT(49),
  [424] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_hurl_file_repeat2, 2),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 2),
  [428] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 2),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_captures_section_repeat1, 2),
  [432] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_captures_section_repeat1, 2),
  [434] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_captures_section_repeat1, 2), SHIFT_REPEAT(390),
  [437] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_captures_section_repeat1, 2), SHIFT_REPEAT(231),
  [440] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_captures_section_repeat1, 2), SHIFT_REPEAT(302),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_captures_section, 3),
  [445] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_captures_section, 3),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_captures_section, 2),
  [449] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_captures_section, 2),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request_section, 1),
  [453] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request_section, 1),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_basic_auth_section, 4),
  [457] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_basic_auth_section, 4),
  [459] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_capture_repeat1, 2), SHIFT_REPEAT(268),
  [462] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_capture_repeat1, 2),
  [464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_capture_repeat1, 2),
  [466] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_capture_repeat1, 2), SHIFT_REPEAT(75),
  [469] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_capture_repeat1, 2), SHIFT_REPEAT(74),
  [472] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_capture_repeat1, 2), SHIFT_REPEAT(73),
  [475] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_capture_repeat1, 2), SHIFT_REPEAT(71),
  [478] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_capture_repeat1, 2), SHIFT_REPEAT(70),
  [481] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_capture_repeat1, 2), SHIFT_REPEAT(69),
  [484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_response_repeat1, 2),
  [486] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_response_repeat1, 2),
  [488] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_response_repeat1, 2), SHIFT_REPEAT(515),
  [491] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_response_repeat1, 2), SHIFT_REPEAT(516),
  [494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_capture, 4),
  [496] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_capture, 4),
  [498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_capture, 5),
  [500] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_capture, 5),
  [502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response_section, 1),
  [504] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_response_section, 1),
  [506] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regex_filter, 2),
  [508] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_regex_filter, 2),
  [510] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_string, 2),
  [512] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_string, 2),
  [514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regex, 3),
  [516] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_regex, 3),
  [518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_string, 3),
  [520] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_string, 3),
  [522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filter, 1),
  [524] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_filter, 1),
  [526] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_to_int_filter, 1),
  [528] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_to_int_filter, 1),
  [530] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_html_decode_filter, 1),
  [532] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_html_decode_filter, 1),
  [534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_html_encode_filter, 1),
  [536] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_html_encode_filter, 1),
  [538] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regex, 2),
  [540] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_regex, 2),
  [542] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url_decode_filter, 1),
  [544] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_url_decode_filter, 1),
  [546] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url_encode_filter, 1),
  [548] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_url_encode_filter, 1),
  [550] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_count_filter, 1),
  [552] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_count_filter, 1),
  [554] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url_query, 1),
  [556] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_url_query, 1),
  [558] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body_query, 1),
  [560] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_body_query, 1),
  [562] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_duration_query, 1),
  [564] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_duration_query, 1),
  [566] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sha256_query, 1),
  [568] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sha256_query, 1),
  [570] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_query, 2),
  [572] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_query, 2),
  [574] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_status_query, 1),
  [576] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_status_query, 1),
  [578] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regex_query, 2),
  [580] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_regex_query, 2),
  [582] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_md5_query, 1),
  [584] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_md5_query, 1),
  [586] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bytes_query, 1),
  [588] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bytes_query, 1),
  [590] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query, 1),
  [592] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query, 1),
  [594] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jsonpath_query, 2),
  [596] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_jsonpath_query, 2),
  [598] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xpath_query, 2),
  [600] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xpath_query, 2),
  [602] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cookie_query, 2),
  [604] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cookie_query, 2),
  [606] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_query, 2),
  [608] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header_query, 2),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [636] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_key_value, 2),
  [638] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [640] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [642] = {.entry = {.count = 1, .reusable = false}}, SHIFT(239),
  [644] = {.entry = {.count = 1, .reusable = false}}, SHIFT(320),
  [646] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entry, 1),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [650] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_entry, 1),
  [652] = {.entry = {.count = 1, .reusable = false}}, SHIFT(377),
  [654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(448),
  [658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(440),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [672] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hurl_file, 1),
  [674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [676] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 6),
  [678] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 6),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [682] = {.entry = {.count = 1, .reusable = false}}, SHIFT(225),
  [684] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_hurl_file_repeat1, 2),
  [686] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_hurl_file_repeat1, 2), SHIFT_REPEAT(271),
  [689] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 2),
  [691] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_body, 2),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [695] = {.entry = {.count = 1, .reusable = false}}, SHIFT(212),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [707] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entry, 3),
  [709] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_entry, 3),
  [711] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response, 6),
  [713] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_response, 6),
  [715] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entry, 2),
  [717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [719] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_entry, 2),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [723] = {.entry = {.count = 1, .reusable = false}}, SHIFT(288),
  [725] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [727] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [729] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [731] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [733] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [735] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [737] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 1),
  [739] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_capture_repeat1, 2), SHIFT_REPEAT(288),
  [742] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_capture_repeat1, 2), SHIFT_REPEAT(177),
  [745] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_capture_repeat1, 2), SHIFT_REPEAT(178),
  [748] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_capture_repeat1, 2), SHIFT_REPEAT(164),
  [751] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_capture_repeat1, 2), SHIFT_REPEAT(183),
  [754] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_capture_repeat1, 2), SHIFT_REPEAT(185),
  [757] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_capture_repeat1, 2), SHIFT_REPEAT(187),
  [760] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 2),
  [762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [766] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [780] = {.entry = {.count = 1, .reusable = false}}, SHIFT(242),
  [782] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [784] = {.entry = {.count = 1, .reusable = false}}, SHIFT(473),
  [786] = {.entry = {.count = 1, .reusable = false}}, SHIFT(245),
  [788] = {.entry = {.count = 1, .reusable = false}}, SHIFT(301),
  [790] = {.entry = {.count = 1, .reusable = false}}, SHIFT(234),
  [792] = {.entry = {.count = 1, .reusable = false}}, SHIFT(426),
  [794] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [796] = {.entry = {.count = 1, .reusable = false}}, SHIFT(261),
  [798] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [800] = {.entry = {.count = 1, .reusable = false}}, SHIFT(300),
  [802] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [804] = {.entry = {.count = 1, .reusable = false}}, SHIFT(247),
  [806] = {.entry = {.count = 1, .reusable = false}}, SHIFT(477),
  [808] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_value_string_repeat1, 2),
  [810] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_string_repeat1, 2), SHIFT_REPEAT(172),
  [813] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_string_repeat1, 2), SHIFT_REPEAT(239),
  [816] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_string_repeat1, 2), SHIFT_REPEAT(320),
  [819] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multiline_string_repeat1, 2), SHIFT_REPEAT(196),
  [822] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multiline_string_repeat1, 2), SHIFT_REPEAT(192),
  [825] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_multiline_string_repeat1, 2),
  [827] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multiline_string_repeat1, 2), SHIFT_REPEAT(245),
  [830] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multiline_string_repeat1, 2), SHIFT_REPEAT(301),
  [833] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [835] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_string, 1),
  [837] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_quoted_string_repeat1, 2),
  [839] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_string_repeat1, 2), SHIFT_REPEAT(261),
  [842] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_string_repeat1, 2), SHIFT_REPEAT(148),
  [845] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_string_repeat1, 2), SHIFT_REPEAT(300),
  [848] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [850] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_oneline_string_repeat1, 2), SHIFT_REPEAT(222),
  [853] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_oneline_string_repeat1, 2), SHIFT_REPEAT(498),
  [856] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_oneline_string_repeat1, 2),
  [858] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_oneline_string_repeat1, 2), SHIFT_REPEAT(305),
  [861] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [863] = {.entry = {.count = 1, .reusable = false}}, SHIFT(319),
  [865] = {.entry = {.count = 1, .reusable = false}}, SHIFT(216),
  [867] = {.entry = {.count = 1, .reusable = false}}, SHIFT(299),
  [869] = {.entry = {.count = 1, .reusable = false}}, SHIFT(354),
  [871] = {.entry = {.count = 1, .reusable = false}}, SHIFT(355),
  [873] = {.entry = {.count = 1, .reusable = false}}, SHIFT(226),
  [875] = {.entry = {.count = 1, .reusable = false}}, SHIFT(309),
  [877] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [879] = {.entry = {.count = 1, .reusable = false}}, SHIFT(498),
  [881] = {.entry = {.count = 1, .reusable = false}}, SHIFT(481),
  [883] = {.entry = {.count = 1, .reusable = false}}, SHIFT(305),
  [885] = {.entry = {.count = 1, .reusable = false}}, SHIFT(418),
  [887] = {.entry = {.count = 1, .reusable = false}}, SHIFT(499),
  [889] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_string, 1),
  [891] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_name, 2),
  [893] = {.entry = {.count = 1, .reusable = false}}, SHIFT(289),
  [895] = {.entry = {.count = 1, .reusable = false}}, SHIFT(290),
  [897] = {.entry = {.count = 1, .reusable = false}}, SHIFT(395),
  [899] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_integer_repeat1, 2),
  [901] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_integer_repeat1, 2), SHIFT_REPEAT(201),
  [904] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_key_string_repeat1, 2),
  [906] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_key_string_repeat1, 2), SHIFT_REPEAT(379),
  [909] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_key_string_repeat1, 2), SHIFT_REPEAT(225),
  [912] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_key_string_repeat1, 2), SHIFT_REPEAT(311),
  [915] = {.entry = {.count = 1, .reusable = false}}, SHIFT(489),
  [917] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [919] = {.entry = {.count = 1, .reusable = false}}, SHIFT(249),
  [921] = {.entry = {.count = 1, .reusable = false}}, SHIFT(307),
  [923] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_filename, 1),
  [925] = {.entry = {.count = 1, .reusable = false}}, SHIFT(491),
  [927] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_filename_repeat1, 2),
  [929] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_filename_repeat1, 2), SHIFT_REPEAT(319),
  [932] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_filename_repeat1, 2), SHIFT_REPEAT(216),
  [935] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_filename_repeat1, 2), SHIFT_REPEAT(299),
  [938] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_string_repeat1, 2), SHIFT_REPEAT(390),
  [941] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_string_repeat1, 2), SHIFT_REPEAT(231),
  [944] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_string_repeat1, 2), SHIFT_REPEAT(302),
  [947] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_json_string_repeat1, 2),
  [949] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_string_repeat1, 2), SHIFT_REPEAT(184),
  [952] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_string_repeat1, 2), SHIFT_REPEAT(249),
  [955] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_string_repeat1, 2), SHIFT_REPEAT(307),
  [958] = {.entry = {.count = 1, .reusable = false}}, SHIFT(257),
  [960] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_filename_repeat1, 2), SHIFT_REPEAT(355),
  [963] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_filename_repeat1, 2), SHIFT_REPEAT(226),
  [966] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_filename_repeat1, 2), SHIFT_REPEAT(309),
  [969] = {.entry = {.count = 1, .reusable = false}}, SHIFT(251),
  [971] = {.entry = {.count = 1, .reusable = false}}, SHIFT(379),
  [973] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer, 1),
  [975] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_value_string_content_repeat1, 2),
  [977] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_string_content_repeat1, 2), SHIFT_REPEAT(172),
  [980] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_string_content_repeat1, 2), SHIFT_REPEAT(239),
  [983] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_number, 1),
  [985] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [987] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [989] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multiline_string_content_repeat1, 2), SHIFT_REPEAT(170),
  [992] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multiline_string_content_repeat1, 2), SHIFT_REPEAT(192),
  [995] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_multiline_string_content_repeat1, 2),
  [997] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multiline_string_content_repeat1, 2), SHIFT_REPEAT(245),
  [1000] = {.entry = {.count = 1, .reusable = false}}, SHIFT(264),
  [1002] = {.entry = {.count = 1, .reusable = false}}, SHIFT(385),
  [1004] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_string_content, 1),
  [1006] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_string_content, 1),
  [1008] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [1010] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [1012] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_quoted_string_content_repeat1, 2),
  [1014] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_string_content_repeat1, 2), SHIFT_REPEAT(261),
  [1017] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_string_content_repeat1, 2), SHIFT_REPEAT(148),
  [1020] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [1022] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [1024] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [1026] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline_string_content, 1),
  [1028] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fraction, 2),
  [1030] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_integer_repeat1, 2), SHIFT_REPEAT(244),
  [1033] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_integer_repeat1, 2),
  [1035] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_digit, 1),
  [1037] = {.entry = {.count = 1, .reusable = true}}, SHIFT(465),
  [1039] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [1041] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [1043] = {.entry = {.count = 1, .reusable = false}}, SHIFT(521),
  [1045] = {.entry = {.count = 1, .reusable = false}}, SHIFT(451),
  [1047] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [1049] = {.entry = {.count = 1, .reusable = false}}, SHIFT(334),
  [1051] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer, 1),
  [1053] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [1055] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneline_string_content, 1),
  [1057] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_oneline_string_content_repeat1, 2), SHIFT_REPEAT(222),
  [1060] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_oneline_string_content_repeat1, 2), SHIFT_REPEAT(498),
  [1063] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_oneline_string_content_repeat1, 2),
  [1065] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [1067] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exponent, 3),
  [1069] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_filename_content_repeat1, 2),
  [1071] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_filename_content_repeat1, 2), SHIFT_REPEAT(319),
  [1074] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_filename_content_repeat1, 2), SHIFT_REPEAT(215),
  [1077] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_filename_content, 1),
  [1079] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_number, 2),
  [1081] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_key_string_content_repeat1, 2),
  [1083] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_key_string_content_repeat1, 2), SHIFT_REPEAT(379),
  [1086] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_key_string_content_repeat1, 2), SHIFT_REPEAT(219),
  [1089] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_key_string_content_repeat1, 2),
  [1091] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_filename_content_repeat1, 2), SHIFT_REPEAT(355),
  [1094] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_filename_content_repeat1, 2), SHIFT_REPEAT(221),
  [1097] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [1099] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [1101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(286),
  [1103] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_regex_content_repeat1, 2), SHIFT_REPEAT(451),
  [1106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_regex_content_repeat1, 2),
  [1108] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_regex_content_repeat1, 2), SHIFT_REPEAT(334),
  [1111] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_string_content_repeat1, 2), SHIFT_REPEAT(390),
  [1114] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_string_content_repeat1, 2), SHIFT_REPEAT(224),
  [1117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_string_content, 1),
  [1119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_key_string_content, 1),
  [1121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fraction, 2),
  [1123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(325),
  [1125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(240),
  [1127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_regex_content, 1),
  [1129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exponent, 2),
  [1131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unicode_char, 3),
  [1133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline_string_escaped_char, 3),
  [1135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_multiline_string_content_repeat1, 1),
  [1137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_oneline_hex_repeat1, 2),
  [1139] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_oneline_hex_repeat1, 2), SHIFT_REPEAT(350),
  [1142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_value_string_text_repeat1, 2),
  [1144] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_string_text_repeat1, 2), SHIFT_REPEAT(236),
  [1147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline_string_escaped_char, 2),
  [1149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template, 3),
  [1151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_template, 3),
  [1153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_string_text, 1),
  [1155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(236),
  [1157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [1159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_value, 1),
  [1161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_key_string_repeat1, 1),
  [1163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(476),
  [1165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_digit, 1),
  [1167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline_string_text, 1),
  [1169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [1171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_string_text, 1),
  [1173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_string, 2),
  [1175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hexdigit, 1),
  [1177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_string_escaped_char, 2),
  [1179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_key_string_escaped_char, 2),
  [1181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneline_string_escaped_char, 3),
  [1183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_filename_escaped_char, 2),
  [1185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_string, 3),
  [1187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(483),
  [1189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [1191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_string_text, 1),
  [1193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_string_escaped_char, 2),
  [1195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_string_escaped_char, 3),
  [1197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [1199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [1201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_string_escaped_char, 6),
  [1203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_method, 1),
  [1205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(501),
  [1207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [1209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_string_content, 1),
  [1211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_string_escaped_char, 3),
  [1213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [1215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneline_string_text, 2),
  [1217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneline_string_escaped_char, 2),
  [1219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_string_escaped_char, 2),
  [1221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_invalid_quoted_string_escaped_char, 2),
  [1223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [1225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_string_escaped_char, 2),
  [1227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [1229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [1231] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_json_array_repeat1, 2), SHIFT_REPEAT(106),
  [1234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_json_array_repeat1, 2),
  [1236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(460),
  [1238] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_regex_escaped_char, 2),
  [1240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [1242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [1244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [1246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [1248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [1250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(464),
  [1252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [1254] = {.entry = {.count = 1, .reusable = false}}, SHIFT(256),
  [1256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [1258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_json_object_repeat1, 2),
  [1260] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_json_object_repeat1, 2), SHIFT_REPEAT(287),
  [1263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [1265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(471),
  [1267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(475),
  [1269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_value, 3),
  [1271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hurl_file, 2),
  [1273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_array, 4),
  [1275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_object, 4),
  [1277] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_regex_text, 1),
  [1279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_number, 3),
  [1281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_array, 3),
  [1283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_object, 3),
  [1285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_object, 2),
  [1287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_value, 1),
  [1289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_greater_predicate, 2),
  [1291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [1293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hexdigit, 1),
  [1295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_greater_or_equal_predicate, 2),
  [1297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_null, 1),
  [1299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_less_predicate, 2),
  [1301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_value, 2),
  [1303] = {.entry = {.count = 1, .reusable = false}}, SHIFT(412),
  [1305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [1307] = {.entry = {.count = 1, .reusable = false}}, SHIFT(258),
  [1309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_less_or_equal_predicate, 2),
  [1311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_value, 3),
  [1313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_predicate_value, 1),
  [1315] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_query_string_params_section_repeat1, 2), SHIFT_REPEAT(143),
  [1318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [1320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [1322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [1324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version, 1),
  [1326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [1328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [1330] = {.entry = {.count = 1, .reusable = false}}, SHIFT(253),
  [1332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [1334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [1336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [1338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [1340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [1342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [1344] = {.entry = {.count = 1, .reusable = false}}, SHIFT(275),
  [1346] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_multipart_form_data_section_repeat1, 2), SHIFT_REPEAT(123),
  [1349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [1351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [1353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [1355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [1357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_key_value, 3),
  [1359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [1361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_with_predicate, 2),
  [1363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_end_with_predicate, 2),
  [1365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contain_predicate, 2),
  [1367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_match_predicate, 2),
  [1369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_predicate, 2),
  [1371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneline_file, 3),
  [1373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [1375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_contenttype, 1),
  [1377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 3),
  [1379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_collection_predicate, 1),
  [1381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [1383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [1385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneline_file, 2),
  [1387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_value, 4),
  [1389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [1391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float, 2),
  [1393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [1395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [1397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_string, 4),
  [1399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [1401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bytes, 1),
  [1403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_predicate, 1),
  [1405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_predicate, 1),
  [1407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float_predicate, 1),
  [1409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [1411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_predicate, 1),
  [1413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [1415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exist_predicate, 1),
  [1417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [1419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [1421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_multipart_form_data_section_repeat1, 2),
  [1423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [1425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [1427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_query_string_params_section_repeat1, 2),
  [1429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [1431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [1433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [1435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(480),
  [1437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_not_equal_predicate, 2),
  [1439] = {.entry = {.count = 1, .reusable = false}}, SHIFT(303),
  [1441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(474),
  [1443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [1445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [1447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [1449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [1451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [1453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [1455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [1457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [1459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [1461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_status, 1),
  [1463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_equal_predicate, 2),
  [1465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_predicate, 2),
  [1467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [1469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_key_string, 1, .production_id = 1),
  [1471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_string, 5),
  [1473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(505),
  [1475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_string, 6),
  [1477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_string, 3),
  [1479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [1481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [1483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(503),
  [1485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneline_string, 3),
  [1487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [1489] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneline_hex, 2),
  [1491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [1493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [1495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [1497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [1499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [1501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [1503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [1505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [1507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [1509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [1511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [1513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [1515] = {.entry = {.count = 1, .reusable = false}}, SHIFT(285),
  [1517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneline_string, 2),
  [1519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_param, 4),
  [1521] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneline_hex, 3),
  [1523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [1525] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneline_base64, 3),
  [1527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [1529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xml, 3),
  [1531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [1533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [1535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [1537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [1539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [1541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [1543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [1545] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [1549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [1551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [1553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(500),
  [1555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [1557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [1559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [1561] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_string_type, 1),
  [1563] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_predicate_func, 1),
  [1565] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multipart_form_data_param, 1),
  [1567] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_predicate, 1),
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
