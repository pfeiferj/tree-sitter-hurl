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
#define STATE_COUNT 557
#define LARGE_STATE_COUNT 16
#define SYMBOL_COUNT 315
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
  aux_sym__multiline_string_text_token1 = 112,
  anon_sym_LBRACE = 113,
  sym_filename_text = 114,
  aux_sym_filename_escaped_char_token1 = 115,
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
  sym__multiline_string_text = 244,
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
  aux_sym__multiline_string_text_repeat1 = 307,
  aux_sym_filename_repeat1 = 308,
  aux_sym_filename_content_repeat1 = 309,
  aux_sym_json_object_repeat1 = 310,
  aux_sym_json_array_repeat1 = 311,
  aux_sym_json_string_repeat1 = 312,
  aux_sym_integer_repeat1 = 313,
  aux_sym_regex_content_repeat1 = 314,
  anon_alias_sym_json_key_string = 315,
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
  [aux_sym__multiline_string_text_token1] = "_multiline_string_text_token1",
  [anon_sym_LBRACE] = "{",
  [sym_filename_text] = "filename_text",
  [aux_sym_filename_escaped_char_token1] = "filename_escaped_char_token1",
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
  [aux_sym__multiline_string_text_token1] = aux_sym__multiline_string_text_token1,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [sym_filename_text] = sym_filename_text,
  [aux_sym_filename_escaped_char_token1] = aux_sym_filename_escaped_char_token1,
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
  [52] = 11,
  [53] = 9,
  [54] = 25,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 9,
  [65] = 11,
  [66] = 66,
  [67] = 55,
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
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 113,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 61,
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
  [135] = 133,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 138,
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
  [155] = 154,
  [156] = 156,
  [157] = 156,
  [158] = 158,
  [159] = 145,
  [160] = 160,
  [161] = 145,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 164,
  [166] = 151,
  [167] = 153,
  [168] = 151,
  [169] = 169,
  [170] = 170,
  [171] = 81,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 74,
  [178] = 178,
  [179] = 93,
  [180] = 86,
  [181] = 95,
  [182] = 94,
  [183] = 84,
  [184] = 91,
  [185] = 85,
  [186] = 89,
  [187] = 187,
  [188] = 87,
  [189] = 76,
  [190] = 77,
  [191] = 78,
  [192] = 82,
  [193] = 79,
  [194] = 194,
  [195] = 80,
  [196] = 196,
  [197] = 83,
  [198] = 198,
  [199] = 70,
  [200] = 200,
  [201] = 73,
  [202] = 202,
  [203] = 203,
  [204] = 71,
  [205] = 75,
  [206] = 92,
  [207] = 88,
  [208] = 72,
  [209] = 90,
  [210] = 210,
  [211] = 211,
  [212] = 212,
  [213] = 213,
  [214] = 163,
  [215] = 215,
  [216] = 216,
  [217] = 216,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 211,
  [222] = 222,
  [223] = 223,
  [224] = 160,
  [225] = 225,
  [226] = 226,
  [227] = 223,
  [228] = 223,
  [229] = 229,
  [230] = 230,
  [231] = 225,
  [232] = 203,
  [233] = 233,
  [234] = 234,
  [235] = 235,
  [236] = 236,
  [237] = 225,
  [238] = 234,
  [239] = 239,
  [240] = 240,
  [241] = 233,
  [242] = 170,
  [243] = 243,
  [244] = 244,
  [245] = 9,
  [246] = 246,
  [247] = 247,
  [248] = 248,
  [249] = 249,
  [250] = 250,
  [251] = 251,
  [252] = 252,
  [253] = 212,
  [254] = 254,
  [255] = 254,
  [256] = 11,
  [257] = 254,
  [258] = 258,
  [259] = 259,
  [260] = 260,
  [261] = 261,
  [262] = 49,
  [263] = 260,
  [264] = 264,
  [265] = 265,
  [266] = 254,
  [267] = 267,
  [268] = 268,
  [269] = 269,
  [270] = 270,
  [271] = 254,
  [272] = 240,
  [273] = 273,
  [274] = 251,
  [275] = 275,
  [276] = 226,
  [277] = 277,
  [278] = 251,
  [279] = 252,
  [280] = 280,
  [281] = 281,
  [282] = 254,
  [283] = 283,
  [284] = 284,
  [285] = 285,
  [286] = 286,
  [287] = 287,
  [288] = 288,
  [289] = 289,
  [290] = 290,
  [291] = 291,
  [292] = 252,
  [293] = 293,
  [294] = 294,
  [295] = 295,
  [296] = 296,
  [297] = 297,
  [298] = 254,
  [299] = 284,
  [300] = 300,
  [301] = 252,
  [302] = 302,
  [303] = 303,
  [304] = 304,
  [305] = 254,
  [306] = 306,
  [307] = 307,
  [308] = 308,
  [309] = 309,
  [310] = 310,
  [311] = 311,
  [312] = 254,
  [313] = 313,
  [314] = 314,
  [315] = 315,
  [316] = 311,
  [317] = 243,
  [318] = 318,
  [319] = 319,
  [320] = 254,
  [321] = 321,
  [322] = 269,
  [323] = 323,
  [324] = 324,
  [325] = 325,
  [326] = 326,
  [327] = 327,
  [328] = 328,
  [329] = 328,
  [330] = 328,
  [331] = 331,
  [332] = 328,
  [333] = 333,
  [334] = 334,
  [335] = 335,
  [336] = 328,
  [337] = 337,
  [338] = 338,
  [339] = 339,
  [340] = 340,
  [341] = 341,
  [342] = 328,
  [343] = 343,
  [344] = 328,
  [345] = 345,
  [346] = 328,
  [347] = 328,
  [348] = 328,
  [349] = 349,
  [350] = 350,
  [351] = 351,
  [352] = 352,
  [353] = 353,
  [354] = 354,
  [355] = 355,
  [356] = 356,
  [357] = 331,
  [358] = 358,
  [359] = 254,
  [360] = 360,
  [361] = 350,
  [362] = 362,
  [363] = 277,
  [364] = 349,
  [365] = 328,
  [366] = 366,
  [367] = 367,
  [368] = 368,
  [369] = 358,
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
  [384] = 367,
  [385] = 385,
  [386] = 386,
  [387] = 387,
  [388] = 388,
  [389] = 389,
  [390] = 390,
  [391] = 352,
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
  [402] = 402,
  [403] = 403,
  [404] = 354,
  [405] = 405,
  [406] = 406,
  [407] = 351,
  [408] = 408,
  [409] = 408,
  [410] = 410,
  [411] = 411,
  [412] = 412,
  [413] = 413,
  [414] = 413,
  [415] = 413,
  [416] = 416,
  [417] = 416,
  [418] = 416,
  [419] = 419,
  [420] = 420,
  [421] = 420,
  [422] = 420,
  [423] = 413,
  [424] = 424,
  [425] = 419,
  [426] = 426,
  [427] = 419,
  [428] = 419,
  [429] = 429,
  [430] = 430,
  [431] = 431,
  [432] = 432,
  [433] = 429,
  [434] = 434,
  [435] = 430,
  [436] = 431,
  [437] = 437,
  [438] = 432,
  [439] = 434,
  [440] = 440,
  [441] = 441,
  [442] = 442,
  [443] = 443,
  [444] = 444,
  [445] = 445,
  [446] = 446,
  [447] = 447,
  [448] = 448,
  [449] = 420,
  [450] = 416,
  [451] = 451,
  [452] = 452,
  [453] = 275,
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
  [471] = 395,
  [472] = 472,
  [473] = 473,
  [474] = 474,
  [475] = 475,
  [476] = 476,
  [477] = 477,
  [478] = 478,
  [479] = 479,
  [480] = 381,
  [481] = 397,
  [482] = 482,
  [483] = 483,
  [484] = 484,
  [485] = 399,
  [486] = 388,
  [487] = 487,
  [488] = 488,
  [489] = 489,
  [490] = 390,
  [491] = 491,
  [492] = 492,
  [493] = 493,
  [494] = 494,
  [495] = 393,
  [496] = 326,
  [497] = 267,
  [498] = 498,
  [499] = 499,
  [500] = 488,
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
  [514] = 470,
  [515] = 515,
  [516] = 516,
  [517] = 377,
  [518] = 518,
  [519] = 519,
  [520] = 520,
  [521] = 504,
  [522] = 498,
  [523] = 488,
  [524] = 504,
  [525] = 498,
  [526] = 504,
  [527] = 498,
  [528] = 498,
  [529] = 498,
  [530] = 498,
  [531] = 498,
  [532] = 498,
  [533] = 498,
  [534] = 534,
  [535] = 535,
  [536] = 536,
  [537] = 537,
  [538] = 538,
  [539] = 539,
  [540] = 498,
  [541] = 541,
  [542] = 405,
  [543] = 543,
  [544] = 544,
  [545] = 545,
  [546] = 546,
  [547] = 547,
  [548] = 548,
  [549] = 549,
  [550] = 550,
  [551] = 551,
  [552] = 552,
  [553] = 553,
  [554] = 554,
  [555] = 555,
  [556] = 556,
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
      if (lookahead == '+') ADVANCE(889);
      if (lookahead == ',') ADVANCE(854);
      if (lookahead == '-') ADVANCE(890);
      if (lookahead == '.') ADVANCE(886);
      if (lookahead == '/') ADVANCE(892);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == ';') ADVANCE(583);
      if (lookahead == '<') ADVANCE(620);
      if (lookahead == '=') ADVANCE(596);
      if (lookahead == '>') ADVANCE(615);
      if (lookahead == 'E') ADVANCE(888);
      if (lookahead == '[') ADVANCE(856);
      if (lookahead == '\\') ADVANCE(820);
      if (lookahead == ']') ADVANCE(861);
      if (lookahead == '`') ADVANCE(830);
      if (lookahead == 'b') ADVANCE(648);
      if (lookahead == 'e') ADVANCE(887);
      if (lookahead == 'f') ADVANCE(649);
      if (lookahead == 'n') ADVANCE(650);
      if (lookahead == 'r') ADVANCE(651);
      if (lookahead == 't') ADVANCE(652);
      if (lookahead == 'u') ADVANCE(653);
      if (lookahead == '{') ADVANCE(847);
      if (lookahead == '}') ADVANCE(853);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'd')) ADVANCE(870);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(562);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(521)
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(891);
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
      if (lookahead == ' ') SKIP(9)
      if (lookahead == '#') ADVANCE(514);
      if (lookahead == '\\') ADVANCE(644);
      if (lookahead == '{') ADVANCE(849);
      if (sym_filename_text_character_set_1(lookahead)) ADVANCE(848);
      if (lookahead != 0 &&
          lookahead != ';') ADVANCE(851);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(524);
      if (lookahead == ' ') SKIP(9)
      if (lookahead == '#') ADVANCE(514);
      if (lookahead == '\\') ADVANCE(644);
      if (sym_filename_text_character_set_1(lookahead)) ADVANCE(848);
      if (lookahead != 0 &&
          lookahead != ';') ADVANCE(851);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(525);
      if (lookahead == '#') ADVANCE(844);
      if (lookahead == '\\') ADVANCE(644);
      if (lookahead == '`') ADVANCE(830);
      if (lookahead == '{') ADVANCE(847);
      if (aux_sym_value_string_text_token1_character_set_1(lookahead)) ADVANCE(843);
      if (lookahead != 0) ADVANCE(845);
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
      if (lookahead == '#') ADVANCE(895);
      if (lookahead == '/') ADVANCE(892);
      if (lookahead == '\\') ADVANCE(644);
      if (aux_sym_value_string_text_token1_character_set_1(lookahead)) ADVANCE(894);
      if (lookahead != 0) ADVANCE(896);
      END_STATE();
    case 14:
      if (lookahead == '\n') SKIP(14)
      if (lookahead == '#') ADVANCE(899);
      if (aux_sym_value_string_text_token1_character_set_1(lookahead)) ADVANCE(898);
      if (lookahead != 0) ADVANCE(897);
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
      if (lookahead == '#') ADVANCE(828);
      if (lookahead == '+') ADVANCE(889);
      if (lookahead == ',') ADVANCE(852);
      if (lookahead == '-') ADVANCE(890);
      if (lookahead == '/') ADVANCE(892);
      if (lookahead == ':') ADVANCE(581);
      if (lookahead == ';') ADVANCE(583);
      if (lookahead == '<') ADVANCE(620);
      if (lookahead == '=') ADVANCE(55);
      if (lookahead == '>') ADVANCE(615);
      if (lookahead == 'T') ADVANCE(357);
      if (lookahead == '[') ADVANCE(855);
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
      if (lookahead == '{') ADVANCE(847);
      if (lookahead == '}') ADVANCE(513);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(884);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(17)
      END_STATE();
    case 17:
      if (lookahead == '!') ADVANCE(54);
      if (lookahead == '"') ADVANCE(639);
      if (lookahead == '#') ADVANCE(828);
      if (lookahead == '+') ADVANCE(889);
      if (lookahead == ',') ADVANCE(852);
      if (lookahead == '-') ADVANCE(890);
      if (lookahead == '/') ADVANCE(892);
      if (lookahead == ':') ADVANCE(581);
      if (lookahead == ';') ADVANCE(583);
      if (lookahead == '<') ADVANCE(620);
      if (lookahead == '=') ADVANCE(55);
      if (lookahead == '>') ADVANCE(615);
      if (lookahead == 'T') ADVANCE(357);
      if (lookahead == '[') ADVANCE(855);
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
      if (lookahead == '{') ADVANCE(846);
      if (lookahead == '}') ADVANCE(513);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(884);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(17)
      END_STATE();
    case 18:
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
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(18)
      END_STATE();
    case 19:
      if (lookahead == '"') ADVANCE(639);
      if (lookahead == '#') ADVANCE(514);
      if (lookahead == ',') ADVANCE(854);
      if (lookahead == '.') ADVANCE(886);
      if (lookahead == ':') ADVANCE(581);
      if (lookahead == '=') ADVANCE(595);
      if (lookahead == 'E') ADVANCE(888);
      if (lookahead == ']') ADVANCE(861);
      if (lookahead == 'b') ADVANCE(349);
      if (lookahead == 'c') ADVANCE(370);
      if (lookahead == 'd') ADVANCE(492);
      if (lookahead == 'e') ADVANCE(887);
      if (lookahead == 'h') ADVANCE(248);
      if (lookahead == 'j') ADVANCE(436);
      if (lookahead == 'm') ADVANCE(203);
      if (lookahead == 'r') ADVANCE(228);
      if (lookahead == 's') ADVANCE(271);
      if (lookahead == 'u') ADVANCE(399);
      if (lookahead == 'v') ADVANCE(160);
      if (lookahead == 'x') ADVANCE(381);
      if (lookahead == '{') ADVANCE(846);
      if (lookahead == '}') ADVANCE(853);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(884);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(19)
      END_STATE();
    case 20:
      if (lookahead == '"') ADVANCE(639);
      if (lookahead == '#') ADVANCE(514);
      if (lookahead == 'f') ADVANCE(146);
      if (lookahead == 'n') ADVANCE(489);
      if (lookahead == 't') ADVANCE(398);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(884);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(20)
      END_STATE();
    case 21:
      if (lookahead == '"') ADVANCE(639);
      if (lookahead == '#') ADVANCE(514);
      if (sym_key_string_text_character_set_1(lookahead)) ADVANCE(815);
      if (lookahead == '\\') ADVANCE(820);
      if (lookahead == 'f') ADVANCE(797);
      if (lookahead == 'n') ADVANCE(789);
      if (lookahead == 't') ADVANCE(762);
      if (lookahead == '{') ADVANCE(512);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(815);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(20)
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
      if (lookahead == '#') ADVANCE(865);
      if (lookahead == '\\') ADVANCE(644);
      if (lookahead == '{') ADVANCE(864);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) ADVANCE(863);
      if (lookahead != 0) ADVANCE(862);
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
      if (lookahead == '}') ADVANCE(853);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(885);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(30)
      END_STATE();
    case 31:
      if (lookahead == '#') ADVANCE(514);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(31)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
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
      if (lookahead == 'e') ADVANCE(878);
      END_STATE();
    case 216:
      if (lookahead == 'e') ADVANCE(880);
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
      if (lookahead == 'e') ADVANCE(874);
      END_STATE();
    case 224:
      if (lookahead == 'e') ADVANCE(873);
      END_STATE();
    case 225:
      if (lookahead == 'e') ADVANCE(875);
      END_STATE();
    case 226:
      if (lookahead == 'e') ADVANCE(876);
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
      if (lookahead == 'l') ADVANCE(882);
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
      if (lookahead == 't') ADVANCE(872);
      END_STATE();
    case 459:
      if (lookahead == 't') ADVANCE(877);
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
      if (lookahead == '{') ADVANCE(866);
      END_STATE();
    case 513:
      if (lookahead == '}') ADVANCE(869);
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
      if (lookahead == '.') ADVANCE(886);
      if (lookahead == '<') ADVANCE(619);
      if (lookahead == 'C') ADVANCE(108);
      if (lookahead == 'D') ADVANCE(72);
      if (lookahead == 'E') ADVANCE(888);
      if (lookahead == 'G') ADVANCE(73);
      if (lookahead == 'H') ADVANCE(79);
      if (lookahead == 'L') ADVANCE(90);
      if (lookahead == 'O') ADVANCE(114);
      if (lookahead == 'P') ADVANCE(59);
      if (lookahead == 'T') ADVANCE(117);
      if (lookahead == 'U') ADVANCE(102);
      if (lookahead == 'V') ADVANCE(89);
      if (lookahead == '[') ADVANCE(856);
      if (lookahead == '`') ADVANCE(830);
      if (lookahead == 'b') ADVANCE(165);
      if (lookahead == 'c') ADVANCE(149);
      if (lookahead == 'd') ADVANCE(492);
      if (lookahead == 'e') ADVANCE(887);
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
      if (lookahead == '{') ADVANCE(847);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(884);
      if (aux_sym_value_string_text_token1_character_set_1(lookahead)) SKIP(516)
      END_STATE();
    case 516:
      if (eof) ADVANCE(522);
      if (lookahead == '\n') ADVANCE(523);
      if (lookahead == '"') ADVANCE(639);
      if (lookahead == '#') ADVANCE(514);
      if (lookahead == '.') ADVANCE(886);
      if (lookahead == '<') ADVANCE(619);
      if (lookahead == 'C') ADVANCE(108);
      if (lookahead == 'D') ADVANCE(72);
      if (lookahead == 'E') ADVANCE(888);
      if (lookahead == 'G') ADVANCE(73);
      if (lookahead == 'H') ADVANCE(79);
      if (lookahead == 'L') ADVANCE(90);
      if (lookahead == 'O') ADVANCE(114);
      if (lookahead == 'P') ADVANCE(59);
      if (lookahead == 'T') ADVANCE(117);
      if (lookahead == 'U') ADVANCE(102);
      if (lookahead == 'V') ADVANCE(89);
      if (lookahead == '[') ADVANCE(856);
      if (lookahead == '`') ADVANCE(830);
      if (lookahead == 'b') ADVANCE(165);
      if (lookahead == 'c') ADVANCE(149);
      if (lookahead == 'd') ADVANCE(492);
      if (lookahead == 'e') ADVANCE(887);
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
      if (lookahead == '{') ADVANCE(846);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(884);
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
      if (lookahead == '[') ADVANCE(858);
      if (lookahead == '`') ADVANCE(830);
      if (lookahead == 'b') ADVANCE(164);
      if (lookahead == 'f') ADVANCE(147);
      if (lookahead == 'h') ADVANCE(234);
      if (lookahead == 'n') ADVANCE(489);
      if (lookahead == 't') ADVANCE(398);
      if (lookahead == '{') ADVANCE(846);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(884);
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
      if (lookahead == '[') ADVANCE(857);
      if (lookahead == '`') ADVANCE(830);
      if (lookahead == 'b') ADVANCE(164);
      if (lookahead == 'f') ADVANCE(147);
      if (lookahead == 'h') ADVANCE(234);
      if (lookahead == 'n') ADVANCE(489);
      if (lookahead == 't') ADVANCE(398);
      if (lookahead == '{') ADVANCE(846);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(884);
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
      if (lookahead == '[') ADVANCE(859);
      if (lookahead == '\\') ADVANCE(820);
      if (lookahead == '`') ADVANCE(830);
      if (lookahead == 'b') ADVANCE(796);
      if (lookahead == 'f') ADVANCE(659);
      if (lookahead == 'h') ADVANCE(723);
      if (lookahead == 'n') ADVANCE(789);
      if (lookahead == 't') ADVANCE(762);
      if (lookahead == '{') ADVANCE(847);
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
      if (lookahead == '[') ADVANCE(860);
      if (lookahead == '\\') ADVANCE(820);
      if (lookahead == '`') ADVANCE(830);
      if (lookahead == 'b') ADVANCE(796);
      if (lookahead == 'f') ADVANCE(659);
      if (lookahead == 'h') ADVANCE(723);
      if (lookahead == 'n') ADVANCE(789);
      if (lookahead == 't') ADVANCE(762);
      if (lookahead == '{') ADVANCE(847);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(815);
      if (aux_sym_value_string_text_token1_character_set_1(lookahead)) SKIP(518)
      END_STATE();
    case 521:
      if (eof) ADVANCE(522);
      if (lookahead == '!') ADVANCE(54);
      if (lookahead == '"') ADVANCE(639);
      if (lookahead == '#') ADVANCE(828);
      if (lookahead == '*') ADVANCE(563);
      if (lookahead == '+') ADVANCE(889);
      if (lookahead == ',') ADVANCE(854);
      if (lookahead == '-') ADVANCE(890);
      if (lookahead == '.') ADVANCE(886);
      if (lookahead == '/') ADVANCE(892);
      if (lookahead == ':') ADVANCE(581);
      if (lookahead == ';') ADVANCE(583);
      if (lookahead == '<') ADVANCE(620);
      if (lookahead == '=') ADVANCE(596);
      if (lookahead == '>') ADVANCE(615);
      if (lookahead == 'E') ADVANCE(888);
      if (lookahead == '[') ADVANCE(856);
      if (lookahead == '\\') ADVANCE(644);
      if (lookahead == ']') ADVANCE(861);
      if (lookahead == '`') ADVANCE(830);
      if (lookahead == 'b') ADVANCE(648);
      if (lookahead == 'e') ADVANCE(887);
      if (lookahead == 'f') ADVANCE(649);
      if (lookahead == 'n') ADVANCE(650);
      if (lookahead == 'r') ADVANCE(651);
      if (lookahead == 't') ADVANCE(652);
      if (lookahead == 'u') ADVANCE(653);
      if (lookahead == '{') ADVANCE(846);
      if (lookahead == '}') ADVANCE(853);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'd')) ADVANCE(870);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(562);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(521)
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(870);
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
      if (sym_filename_text_character_set_1(lookahead)) ADVANCE(848);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(525);
      if (aux_sym_value_string_text_token1_character_set_1(lookahead)) ADVANCE(843);
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
      if (lookahead == '{') ADVANCE(868);
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
      if (lookahead == 'e') ADVANCE(879);
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
      if (lookahead == 'e') ADVANCE(881);
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
      if (lookahead == 'l') ADVANCE(883);
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
      if (lookahead == '{') ADVANCE(866);
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
      if (lookahead == '{') ADVANCE(866);
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
      ACCEPT_TOKEN(aux_sym__multiline_string_text_token1);
      if (lookahead == '\n') ADVANCE(525);
      if (lookahead == '#') ADVANCE(844);
      if (aux_sym_value_string_text_token1_character_set_1(lookahead)) ADVANCE(843);
      if (lookahead != 0 &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != '{') ADVANCE(845);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(aux_sym__multiline_string_text_token1);
      if (lookahead == '\n') ADVANCE(845);
      if (lookahead == '\\' ||
          lookahead == '`' ||
          lookahead == '{') ADVANCE(1);
      if (lookahead != 0) ADVANCE(844);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(aux_sym__multiline_string_text_token1);
      if (lookahead != 0 &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != '{') ADVANCE(845);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '{') ADVANCE(866);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(sym_filename_text);
      if (lookahead == '\n') ADVANCE(524);
      if (sym_filename_text_character_set_1(lookahead)) ADVANCE(848);
      if (lookahead != 0 &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '\\') ADVANCE(851);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(sym_filename_text);
      if (lookahead == '{') ADVANCE(867);
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
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == 'A') ADVANCE(431);
      if (lookahead == 'B') ADVANCE(152);
      if (lookahead == 'C') ADVANCE(172);
      if (lookahead == 'F') ADVANCE(346);
      if (lookahead == 'M') ADVANCE(486);
      if (lookahead == 'O') ADVANCE(375);
      if (lookahead == 'Q') ADVANCE(487);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == 'A') ADVANCE(431);
      if (lookahead == 'C') ADVANCE(171);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == 'B') ADVANCE(152);
      if (lookahead == 'C') ADVANCE(351);
      if (lookahead == 'F') ADVANCE(346);
      if (lookahead == 'M') ADVANCE(486);
      if (lookahead == 'O') ADVANCE(375);
      if (lookahead == 'Q') ADVANCE(487);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (sym_key_string_text_character_set_7(lookahead)) ADVANCE(815);
      if (lookahead == 'B') ADVANCE(798);
      if (lookahead == 'C') ADVANCE(754);
      if (lookahead == 'F') ADVANCE(753);
      if (lookahead == 'M') ADVANCE(791);
      if (lookahead == 'O') ADVANCE(756);
      if (lookahead == 'Q') ADVANCE(788);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (sym_key_string_text_character_set_8(lookahead)) ADVANCE(815);
      if (lookahead == 'A') ADVANCE(779);
      if (lookahead == 'C') ADVANCE(804);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(aux_sym_json_string_text_token1);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(aux_sym_json_string_text_token1);
      if (lookahead == '#') ADVANCE(865);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) ADVANCE(863);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(862);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(aux_sym_json_string_text_token1);
      if (lookahead == '{') ADVANCE(866);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(aux_sym_json_string_text_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '\\') ADVANCE(851);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(643);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(aux_sym_variable_name_token1);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(aux_sym_variable_name_token2);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(871);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(anon_sym_count);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(anon_sym_urlEncode);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(anon_sym_urlDecode);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(anon_sym_htmlEscape);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(anon_sym_htmlUnescape);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(anon_sym_toInt);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 879:
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
    case 880:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 881:
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
    case 882:
      ACCEPT_TOKEN(anon_sym_null);
      END_STATE();
    case 883:
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
    case 884:
      ACCEPT_TOKEN(aux_sym_digit_token1);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(aux_sym_hexdigit_token1);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(anon_sym_e);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(anon_sym_E);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 893:
      ACCEPT_TOKEN(aux_sym_regex_text_token1);
      if (lookahead == '\n') ADVANCE(891);
      if (lookahead == '/' ||
          lookahead == '\\') ADVANCE(1);
      if (lookahead != 0) ADVANCE(893);
      END_STATE();
    case 894:
      ACCEPT_TOKEN(aux_sym_regex_text_token1);
      if (lookahead == '#') ADVANCE(895);
      if (aux_sym_value_string_text_token1_character_set_1(lookahead)) ADVANCE(894);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '/' &&
          lookahead != '\\') ADVANCE(896);
      END_STATE();
    case 895:
      ACCEPT_TOKEN(aux_sym_regex_text_token1);
      if (lookahead == '/' ||
          lookahead == '\\') ADVANCE(1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(893);
      END_STATE();
    case 896:
      ACCEPT_TOKEN(aux_sym_regex_text_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '/' &&
          lookahead != '\\') ADVANCE(896);
      END_STATE();
    case 897:
      ACCEPT_TOKEN(aux_sym_regex_escaped_char_token1);
      END_STATE();
    case 898:
      ACCEPT_TOKEN(aux_sym_regex_escaped_char_token1);
      if (lookahead == '#') ADVANCE(899);
      if (aux_sym_value_string_text_token1_character_set_1(lookahead)) ADVANCE(898);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(897);
      END_STATE();
    case 899:
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
  [9] = {.lex_state = 515},
  [10] = {.lex_state = 520},
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
  [49] = {.lex_state = 519},
  [50] = {.lex_state = 515},
  [51] = {.lex_state = 515},
  [52] = {.lex_state = 519},
  [53] = {.lex_state = 519},
  [54] = {.lex_state = 520},
  [55] = {.lex_state = 519},
  [56] = {.lex_state = 520},
  [57] = {.lex_state = 520},
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
  [96] = {.lex_state = 19},
  [97] = {.lex_state = 515},
  [98] = {.lex_state = 515},
  [99] = {.lex_state = 16},
  [100] = {.lex_state = 16},
  [101] = {.lex_state = 16},
  [102] = {.lex_state = 515},
  [103] = {.lex_state = 515},
  [104] = {.lex_state = 21},
  [105] = {.lex_state = 2},
  [106] = {.lex_state = 515},
  [107] = {.lex_state = 515},
  [108] = {.lex_state = 515},
  [109] = {.lex_state = 515},
  [110] = {.lex_state = 515},
  [111] = {.lex_state = 16},
  [112] = {.lex_state = 4},
  [113] = {.lex_state = 16},
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
  [130] = {.lex_state = 25},
  [131] = {.lex_state = 8},
  [132] = {.lex_state = 3},
  [133] = {.lex_state = 22},
  [134] = {.lex_state = 3},
  [135] = {.lex_state = 22},
  [136] = {.lex_state = 10},
  [137] = {.lex_state = 10},
  [138] = {.lex_state = 22},
  [139] = {.lex_state = 22},
  [140] = {.lex_state = 10},
  [141] = {.lex_state = 10},
  [142] = {.lex_state = 22},
  [143] = {.lex_state = 10},
  [144] = {.lex_state = 11},
  [145] = {.lex_state = 25},
  [146] = {.lex_state = 28},
  [147] = {.lex_state = 11},
  [148] = {.lex_state = 25},
  [149] = {.lex_state = 28},
  [150] = {.lex_state = 11},
  [151] = {.lex_state = 25},
  [152] = {.lex_state = 25},
  [153] = {.lex_state = 8},
  [154] = {.lex_state = 23},
  [155] = {.lex_state = 23},
  [156] = {.lex_state = 8},
  [157] = {.lex_state = 28},
  [158] = {.lex_state = 23},
  [159] = {.lex_state = 7},
  [160] = {.lex_state = 19},
  [161] = {.lex_state = 32},
  [162] = {.lex_state = 24},
  [163] = {.lex_state = 19},
  [164] = {.lex_state = 23},
  [165] = {.lex_state = 23},
  [166] = {.lex_state = 7},
  [167] = {.lex_state = 28},
  [168] = {.lex_state = 32},
  [169] = {.lex_state = 26},
  [170] = {.lex_state = 19},
  [171] = {.lex_state = 4},
  [172] = {.lex_state = 3},
  [173] = {.lex_state = 18},
  [174] = {.lex_state = 10},
  [175] = {.lex_state = 18},
  [176] = {.lex_state = 22},
  [177] = {.lex_state = 4},
  [178] = {.lex_state = 22},
  [179] = {.lex_state = 4},
  [180] = {.lex_state = 4},
  [181] = {.lex_state = 4},
  [182] = {.lex_state = 4},
  [183] = {.lex_state = 4},
  [184] = {.lex_state = 4},
  [185] = {.lex_state = 4},
  [186] = {.lex_state = 4},
  [187] = {.lex_state = 3},
  [188] = {.lex_state = 4},
  [189] = {.lex_state = 4},
  [190] = {.lex_state = 4},
  [191] = {.lex_state = 4},
  [192] = {.lex_state = 4},
  [193] = {.lex_state = 4},
  [194] = {.lex_state = 18},
  [195] = {.lex_state = 4},
  [196] = {.lex_state = 10},
  [197] = {.lex_state = 4},
  [198] = {.lex_state = 10},
  [199] = {.lex_state = 4},
  [200] = {.lex_state = 10},
  [201] = {.lex_state = 4},
  [202] = {.lex_state = 10},
  [203] = {.lex_state = 19},
  [204] = {.lex_state = 4},
  [205] = {.lex_state = 4},
  [206] = {.lex_state = 4},
  [207] = {.lex_state = 4},
  [208] = {.lex_state = 4},
  [209] = {.lex_state = 4},
  [210] = {.lex_state = 11},
  [211] = {.lex_state = 13},
  [212] = {.lex_state = 19},
  [213] = {.lex_state = 11},
  [214] = {.lex_state = 515},
  [215] = {.lex_state = 4},
  [216] = {.lex_state = 19},
  [217] = {.lex_state = 19},
  [218] = {.lex_state = 16},
  [219] = {.lex_state = 16},
  [220] = {.lex_state = 16},
  [221] = {.lex_state = 13},
  [222] = {.lex_state = 16},
  [223] = {.lex_state = 25},
  [224] = {.lex_state = 515},
  [225] = {.lex_state = 25},
  [226] = {.lex_state = 19},
  [227] = {.lex_state = 32},
  [228] = {.lex_state = 7},
  [229] = {.lex_state = 16},
  [230] = {.lex_state = 16},
  [231] = {.lex_state = 7},
  [232] = {.lex_state = 515},
  [233] = {.lex_state = 28},
  [234] = {.lex_state = 28},
  [235] = {.lex_state = 13},
  [236] = {.lex_state = 18},
  [237] = {.lex_state = 32},
  [238] = {.lex_state = 8},
  [239] = {.lex_state = 13},
  [240] = {.lex_state = 19},
  [241] = {.lex_state = 8},
  [242] = {.lex_state = 515},
  [243] = {.lex_state = 19},
  [244] = {.lex_state = 7},
  [245] = {.lex_state = 7},
  [246] = {.lex_state = 515},
  [247] = {.lex_state = 3},
  [248] = {.lex_state = 3},
  [249] = {.lex_state = 10},
  [250] = {.lex_state = 10},
  [251] = {.lex_state = 25},
  [252] = {.lex_state = 10},
  [253] = {.lex_state = 515},
  [254] = {.lex_state = 10},
  [255] = {.lex_state = 7},
  [256] = {.lex_state = 7},
  [257] = {.lex_state = 25},
  [258] = {.lex_state = 515},
  [259] = {.lex_state = 10},
  [260] = {.lex_state = 16},
  [261] = {.lex_state = 10},
  [262] = {.lex_state = 515},
  [263] = {.lex_state = 16},
  [264] = {.lex_state = 10},
  [265] = {.lex_state = 515},
  [266] = {.lex_state = 22},
  [267] = {.lex_state = 19},
  [268] = {.lex_state = 11},
  [269] = {.lex_state = 8},
  [270] = {.lex_state = 515},
  [271] = {.lex_state = 23},
  [272] = {.lex_state = 515},
  [273] = {.lex_state = 3},
  [274] = {.lex_state = 32},
  [275] = {.lex_state = 19},
  [276] = {.lex_state = 515},
  [277] = {.lex_state = 23},
  [278] = {.lex_state = 7},
  [279] = {.lex_state = 22},
  [280] = {.lex_state = 515},
  [281] = {.lex_state = 515},
  [282] = {.lex_state = 11},
  [283] = {.lex_state = 515},
  [284] = {.lex_state = 16},
  [285] = {.lex_state = 515},
  [286] = {.lex_state = 11},
  [287] = {.lex_state = 16},
  [288] = {.lex_state = 3},
  [289] = {.lex_state = 30},
  [290] = {.lex_state = 23},
  [291] = {.lex_state = 515},
  [292] = {.lex_state = 3},
  [293] = {.lex_state = 22},
  [294] = {.lex_state = 22},
  [295] = {.lex_state = 11},
  [296] = {.lex_state = 16},
  [297] = {.lex_state = 16},
  [298] = {.lex_state = 32},
  [299] = {.lex_state = 16},
  [300] = {.lex_state = 22},
  [301] = {.lex_state = 11},
  [302] = {.lex_state = 16},
  [303] = {.lex_state = 23},
  [304] = {.lex_state = 23},
  [305] = {.lex_state = 8},
  [306] = {.lex_state = 30},
  [307] = {.lex_state = 515},
  [308] = {.lex_state = 23},
  [309] = {.lex_state = 515},
  [310] = {.lex_state = 515},
  [311] = {.lex_state = 16},
  [312] = {.lex_state = 3},
  [313] = {.lex_state = 3},
  [314] = {.lex_state = 515},
  [315] = {.lex_state = 30},
  [316] = {.lex_state = 16},
  [317] = {.lex_state = 515},
  [318] = {.lex_state = 515},
  [319] = {.lex_state = 515},
  [320] = {.lex_state = 28},
  [321] = {.lex_state = 16},
  [322] = {.lex_state = 28},
  [323] = {.lex_state = 515},
  [324] = {.lex_state = 515},
  [325] = {.lex_state = 22},
  [326] = {.lex_state = 19},
  [327] = {.lex_state = 515},
  [328] = {.lex_state = 31},
  [329] = {.lex_state = 31},
  [330] = {.lex_state = 31},
  [331] = {.lex_state = 16},
  [332] = {.lex_state = 31},
  [333] = {.lex_state = 515},
  [334] = {.lex_state = 515},
  [335] = {.lex_state = 515},
  [336] = {.lex_state = 31},
  [337] = {.lex_state = 515},
  [338] = {.lex_state = 515},
  [339] = {.lex_state = 515},
  [340] = {.lex_state = 515},
  [341] = {.lex_state = 515},
  [342] = {.lex_state = 31},
  [343] = {.lex_state = 515},
  [344] = {.lex_state = 31},
  [345] = {.lex_state = 515},
  [346] = {.lex_state = 31},
  [347] = {.lex_state = 31},
  [348] = {.lex_state = 31},
  [349] = {.lex_state = 19},
  [350] = {.lex_state = 19},
  [351] = {.lex_state = 19},
  [352] = {.lex_state = 19},
  [353] = {.lex_state = 515},
  [354] = {.lex_state = 19},
  [355] = {.lex_state = 26},
  [356] = {.lex_state = 515},
  [357] = {.lex_state = 16},
  [358] = {.lex_state = 515},
  [359] = {.lex_state = 19},
  [360] = {.lex_state = 6},
  [361] = {.lex_state = 19},
  [362] = {.lex_state = 19},
  [363] = {.lex_state = 30},
  [364] = {.lex_state = 19},
  [365] = {.lex_state = 31},
  [366] = {.lex_state = 515},
  [367] = {.lex_state = 16},
  [368] = {.lex_state = 515},
  [369] = {.lex_state = 515},
  [370] = {.lex_state = 13},
  [371] = {.lex_state = 13},
  [372] = {.lex_state = 515},
  [373] = {.lex_state = 515},
  [374] = {.lex_state = 515},
  [375] = {.lex_state = 16},
  [376] = {.lex_state = 16},
  [377] = {.lex_state = 19},
  [378] = {.lex_state = 16},
  [379] = {.lex_state = 31},
  [380] = {.lex_state = 515},
  [381] = {.lex_state = 19},
  [382] = {.lex_state = 16},
  [383] = {.lex_state = 515},
  [384] = {.lex_state = 16},
  [385] = {.lex_state = 515},
  [386] = {.lex_state = 16},
  [387] = {.lex_state = 515},
  [388] = {.lex_state = 19},
  [389] = {.lex_state = 515},
  [390] = {.lex_state = 19},
  [391] = {.lex_state = 19},
  [392] = {.lex_state = 515},
  [393] = {.lex_state = 19},
  [394] = {.lex_state = 515},
  [395] = {.lex_state = 19},
  [396] = {.lex_state = 515},
  [397] = {.lex_state = 19},
  [398] = {.lex_state = 515},
  [399] = {.lex_state = 19},
  [400] = {.lex_state = 6},
  [401] = {.lex_state = 515},
  [402] = {.lex_state = 515},
  [403] = {.lex_state = 515},
  [404] = {.lex_state = 19},
  [405] = {.lex_state = 19},
  [406] = {.lex_state = 19},
  [407] = {.lex_state = 19},
  [408] = {.lex_state = 16},
  [409] = {.lex_state = 16},
  [410] = {.lex_state = 515},
  [411] = {.lex_state = 19},
  [412] = {.lex_state = 30},
  [413] = {.lex_state = 30},
  [414] = {.lex_state = 30},
  [415] = {.lex_state = 30},
  [416] = {.lex_state = 30},
  [417] = {.lex_state = 30},
  [418] = {.lex_state = 30},
  [419] = {.lex_state = 30},
  [420] = {.lex_state = 30},
  [421] = {.lex_state = 30},
  [422] = {.lex_state = 30},
  [423] = {.lex_state = 30},
  [424] = {.lex_state = 16},
  [425] = {.lex_state = 30},
  [426] = {.lex_state = 30},
  [427] = {.lex_state = 30},
  [428] = {.lex_state = 30},
  [429] = {.lex_state = 16},
  [430] = {.lex_state = 16},
  [431] = {.lex_state = 16},
  [432] = {.lex_state = 16},
  [433] = {.lex_state = 16},
  [434] = {.lex_state = 16},
  [435] = {.lex_state = 16},
  [436] = {.lex_state = 16},
  [437] = {.lex_state = 19},
  [438] = {.lex_state = 16},
  [439] = {.lex_state = 16},
  [440] = {.lex_state = 26},
  [441] = {.lex_state = 30},
  [442] = {.lex_state = 19},
  [443] = {.lex_state = 0},
  [444] = {.lex_state = 19},
  [445] = {.lex_state = 19},
  [446] = {.lex_state = 19},
  [447] = {.lex_state = 19},
  [448] = {.lex_state = 30},
  [449] = {.lex_state = 30},
  [450] = {.lex_state = 30},
  [451] = {.lex_state = 16},
  [452] = {.lex_state = 0},
  [453] = {.lex_state = 515},
  [454] = {.lex_state = 515},
  [455] = {.lex_state = 515},
  [456] = {.lex_state = 515},
  [457] = {.lex_state = 515},
  [458] = {.lex_state = 515},
  [459] = {.lex_state = 515},
  [460] = {.lex_state = 515},
  [461] = {.lex_state = 515},
  [462] = {.lex_state = 16},
  [463] = {.lex_state = 515},
  [464] = {.lex_state = 515},
  [465] = {.lex_state = 33},
  [466] = {.lex_state = 515},
  [467] = {.lex_state = 515},
  [468] = {.lex_state = 515},
  [469] = {.lex_state = 515},
  [470] = {.lex_state = 0},
  [471] = {.lex_state = 515},
  [472] = {.lex_state = 14},
  [473] = {.lex_state = 16},
  [474] = {.lex_state = 16},
  [475] = {.lex_state = 16},
  [476] = {.lex_state = 16},
  [477] = {.lex_state = 16},
  [478] = {.lex_state = 16},
  [479] = {.lex_state = 16},
  [480] = {.lex_state = 515},
  [481] = {.lex_state = 515},
  [482] = {.lex_state = 515},
  [483] = {.lex_state = 515},
  [484] = {.lex_state = 515},
  [485] = {.lex_state = 515},
  [486] = {.lex_state = 515},
  [487] = {.lex_state = 16},
  [488] = {.lex_state = 25},
  [489] = {.lex_state = 515},
  [490] = {.lex_state = 515},
  [491] = {.lex_state = 515},
  [492] = {.lex_state = 0},
  [493] = {.lex_state = 515},
  [494] = {.lex_state = 515},
  [495] = {.lex_state = 515},
  [496] = {.lex_state = 515},
  [497] = {.lex_state = 515},
  [498] = {.lex_state = 16},
  [499] = {.lex_state = 515},
  [500] = {.lex_state = 25},
  [501] = {.lex_state = 515},
  [502] = {.lex_state = 515},
  [503] = {.lex_state = 515},
  [504] = {.lex_state = 0},
  [505] = {.lex_state = 515},
  [506] = {.lex_state = 515},
  [507] = {.lex_state = 515},
  [508] = {.lex_state = 515},
  [509] = {.lex_state = 515},
  [510] = {.lex_state = 515},
  [511] = {.lex_state = 515},
  [512] = {.lex_state = 515},
  [513] = {.lex_state = 515},
  [514] = {.lex_state = 0},
  [515] = {.lex_state = 0},
  [516] = {.lex_state = 0},
  [517] = {.lex_state = 515},
  [518] = {.lex_state = 515},
  [519] = {.lex_state = 16},
  [520] = {.lex_state = 515},
  [521] = {.lex_state = 0},
  [522] = {.lex_state = 16},
  [523] = {.lex_state = 25},
  [524] = {.lex_state = 0},
  [525] = {.lex_state = 16},
  [526] = {.lex_state = 0},
  [527] = {.lex_state = 16},
  [528] = {.lex_state = 16},
  [529] = {.lex_state = 16},
  [530] = {.lex_state = 16},
  [531] = {.lex_state = 16},
  [532] = {.lex_state = 16},
  [533] = {.lex_state = 16},
  [534] = {.lex_state = 515},
  [535] = {.lex_state = 0},
  [536] = {.lex_state = 871},
  [537] = {.lex_state = 515},
  [538] = {.lex_state = 16},
  [539] = {.lex_state = 16},
  [540] = {.lex_state = 16},
  [541] = {.lex_state = 515},
  [542] = {.lex_state = 515},
  [543] = {.lex_state = 19},
  [544] = {.lex_state = 515},
  [545] = {.lex_state = 515},
  [546] = {.lex_state = 0},
  [547] = {.lex_state = 515},
  [548] = {.lex_state = 515},
  [549] = {.lex_state = 16},
  [550] = {.lex_state = 15},
  [551] = {.lex_state = 515},
  [552] = {.lex_state = 515},
  [553] = {.lex_state = 515},
  [554] = {.lex_state = 515},
  [555] = {.lex_state = 515},
  [556] = {.lex_state = 16},
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
    [anon_sym_LBRACE] = ACTIONS(1),
    [aux_sym_filename_escaped_char_token1] = ACTIONS(1),
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
    [sym_hurl_file] = STATE(535),
    [sym_entry] = STATE(98),
    [sym__comment_or_new_line] = STATE(246),
    [sym_request] = STATE(97),
    [sym_method] = STATE(126),
    [aux_sym_hurl_file_repeat1] = STATE(98),
    [aux_sym_hurl_file_repeat2] = STATE(246),
    [aux_sym__comment_or_new_line_repeat1] = STATE(11),
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
    [sym__comment_or_new_line] = STATE(49),
    [sym_header] = STATE(4),
    [sym_body] = STATE(107),
    [sym_request_section] = STATE(8),
    [sym_basic_auth_section] = STATE(59),
    [sym_query_string_params_section] = STATE(59),
    [sym_form_params_section] = STATE(59),
    [sym_multipart_form_data_section] = STATE(59),
    [sym_cookies_section] = STATE(59),
    [sym_options_section] = STATE(59),
    [sym_key_value] = STATE(369),
    [sym_bytes] = STATE(368),
    [sym_xml] = STATE(482),
    [sym_oneline_base64] = STATE(482),
    [sym_oneline_file] = STATE(482),
    [sym_oneline_hex] = STATE(482),
    [sym_key_string] = STATE(452),
    [sym_key_string_content] = STATE(145),
    [sym_key_string_escaped_char] = STATE(225),
    [sym_oneline_string] = STATE(482),
    [sym_multiline_string] = STATE(482),
    [sym_json_value] = STATE(482),
    [sym_json_object] = STATE(485),
    [sym_json_array] = STATE(485),
    [sym_json_string] = STATE(485),
    [sym_json_number] = STATE(485),
    [sym_template] = STATE(244),
    [sym_boolean] = STATE(485),
    [sym_null] = STATE(485),
    [sym_integer] = STATE(242),
    [sym_digit] = STATE(224),
    [aux_sym_hurl_file_repeat2] = STATE(49),
    [aux_sym__comment_or_new_line_repeat1] = STATE(52),
    [aux_sym_request_repeat1] = STATE(4),
    [aux_sym_request_repeat2] = STATE(8),
    [aux_sym_key_string_repeat1] = STATE(145),
    [aux_sym_key_string_content_repeat1] = STATE(225),
    [aux_sym_integer_repeat1] = STATE(224),
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
    [sym__comment_or_new_line] = STATE(49),
    [sym_header] = STATE(5),
    [sym_body] = STATE(108),
    [sym_request_section] = STATE(7),
    [sym_basic_auth_section] = STATE(59),
    [sym_query_string_params_section] = STATE(59),
    [sym_form_params_section] = STATE(59),
    [sym_multipart_form_data_section] = STATE(59),
    [sym_cookies_section] = STATE(59),
    [sym_options_section] = STATE(59),
    [sym_key_value] = STATE(369),
    [sym_bytes] = STATE(368),
    [sym_xml] = STATE(482),
    [sym_oneline_base64] = STATE(482),
    [sym_oneline_file] = STATE(482),
    [sym_oneline_hex] = STATE(482),
    [sym_key_string] = STATE(452),
    [sym_key_string_content] = STATE(145),
    [sym_key_string_escaped_char] = STATE(225),
    [sym_oneline_string] = STATE(482),
    [sym_multiline_string] = STATE(482),
    [sym_json_value] = STATE(482),
    [sym_json_object] = STATE(485),
    [sym_json_array] = STATE(485),
    [sym_json_string] = STATE(485),
    [sym_json_number] = STATE(485),
    [sym_template] = STATE(244),
    [sym_boolean] = STATE(485),
    [sym_null] = STATE(485),
    [sym_integer] = STATE(242),
    [sym_digit] = STATE(224),
    [aux_sym_hurl_file_repeat2] = STATE(49),
    [aux_sym__comment_or_new_line_repeat1] = STATE(52),
    [aux_sym_request_repeat1] = STATE(5),
    [aux_sym_request_repeat2] = STATE(7),
    [aux_sym_key_string_repeat1] = STATE(145),
    [aux_sym_key_string_content_repeat1] = STATE(225),
    [aux_sym_integer_repeat1] = STATE(224),
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
    [sym_header] = STATE(25),
    [sym_body] = STATE(109),
    [sym_request_section] = STATE(6),
    [sym_basic_auth_section] = STATE(59),
    [sym_query_string_params_section] = STATE(59),
    [sym_form_params_section] = STATE(59),
    [sym_multipart_form_data_section] = STATE(59),
    [sym_cookies_section] = STATE(59),
    [sym_options_section] = STATE(59),
    [sym_key_value] = STATE(369),
    [sym_bytes] = STATE(368),
    [sym_xml] = STATE(482),
    [sym_oneline_base64] = STATE(482),
    [sym_oneline_file] = STATE(482),
    [sym_oneline_hex] = STATE(482),
    [sym_key_string] = STATE(452),
    [sym_key_string_content] = STATE(145),
    [sym_key_string_escaped_char] = STATE(225),
    [sym_oneline_string] = STATE(482),
    [sym_multiline_string] = STATE(482),
    [sym_json_value] = STATE(482),
    [sym_json_object] = STATE(485),
    [sym_json_array] = STATE(485),
    [sym_json_string] = STATE(485),
    [sym_json_number] = STATE(485),
    [sym_template] = STATE(244),
    [sym_boolean] = STATE(485),
    [sym_null] = STATE(485),
    [sym_integer] = STATE(242),
    [sym_digit] = STATE(224),
    [aux_sym_request_repeat1] = STATE(25),
    [aux_sym_request_repeat2] = STATE(6),
    [aux_sym_key_string_repeat1] = STATE(145),
    [aux_sym_key_string_content_repeat1] = STATE(225),
    [aux_sym_integer_repeat1] = STATE(224),
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
  [5] = {
    [sym_header] = STATE(25),
    [sym_body] = STATE(107),
    [sym_request_section] = STATE(8),
    [sym_basic_auth_section] = STATE(59),
    [sym_query_string_params_section] = STATE(59),
    [sym_form_params_section] = STATE(59),
    [sym_multipart_form_data_section] = STATE(59),
    [sym_cookies_section] = STATE(59),
    [sym_options_section] = STATE(59),
    [sym_key_value] = STATE(369),
    [sym_bytes] = STATE(368),
    [sym_xml] = STATE(482),
    [sym_oneline_base64] = STATE(482),
    [sym_oneline_file] = STATE(482),
    [sym_oneline_hex] = STATE(482),
    [sym_key_string] = STATE(452),
    [sym_key_string_content] = STATE(145),
    [sym_key_string_escaped_char] = STATE(225),
    [sym_oneline_string] = STATE(482),
    [sym_multiline_string] = STATE(482),
    [sym_json_value] = STATE(482),
    [sym_json_object] = STATE(485),
    [sym_json_array] = STATE(485),
    [sym_json_string] = STATE(485),
    [sym_json_number] = STATE(485),
    [sym_template] = STATE(244),
    [sym_boolean] = STATE(485),
    [sym_null] = STATE(485),
    [sym_integer] = STATE(242),
    [sym_digit] = STATE(224),
    [aux_sym_request_repeat1] = STATE(25),
    [aux_sym_request_repeat2] = STATE(8),
    [aux_sym_key_string_repeat1] = STATE(145),
    [aux_sym_key_string_content_repeat1] = STATE(225),
    [aux_sym_integer_repeat1] = STATE(224),
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
    [sym_comment] = ACTIONS(17),
  },
  [6] = {
    [sym_body] = STATE(102),
    [sym_request_section] = STATE(48),
    [sym_basic_auth_section] = STATE(59),
    [sym_query_string_params_section] = STATE(59),
    [sym_form_params_section] = STATE(59),
    [sym_multipart_form_data_section] = STATE(59),
    [sym_cookies_section] = STATE(59),
    [sym_options_section] = STATE(59),
    [sym_bytes] = STATE(368),
    [sym_xml] = STATE(482),
    [sym_oneline_base64] = STATE(482),
    [sym_oneline_file] = STATE(482),
    [sym_oneline_hex] = STATE(482),
    [sym_oneline_string] = STATE(482),
    [sym_multiline_string] = STATE(482),
    [sym_json_value] = STATE(482),
    [sym_json_object] = STATE(485),
    [sym_json_array] = STATE(485),
    [sym_json_string] = STATE(485),
    [sym_json_number] = STATE(485),
    [sym_template] = STATE(485),
    [sym_boolean] = STATE(485),
    [sym_null] = STATE(485),
    [sym_integer] = STATE(242),
    [sym_digit] = STATE(224),
    [aux_sym_request_repeat2] = STATE(48),
    [aux_sym_integer_repeat1] = STATE(224),
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
  [7] = {
    [sym_body] = STATE(107),
    [sym_request_section] = STATE(48),
    [sym_basic_auth_section] = STATE(59),
    [sym_query_string_params_section] = STATE(59),
    [sym_form_params_section] = STATE(59),
    [sym_multipart_form_data_section] = STATE(59),
    [sym_cookies_section] = STATE(59),
    [sym_options_section] = STATE(59),
    [sym_bytes] = STATE(368),
    [sym_xml] = STATE(482),
    [sym_oneline_base64] = STATE(482),
    [sym_oneline_file] = STATE(482),
    [sym_oneline_hex] = STATE(482),
    [sym_oneline_string] = STATE(482),
    [sym_multiline_string] = STATE(482),
    [sym_json_value] = STATE(482),
    [sym_json_object] = STATE(485),
    [sym_json_array] = STATE(485),
    [sym_json_string] = STATE(485),
    [sym_json_number] = STATE(485),
    [sym_template] = STATE(485),
    [sym_boolean] = STATE(485),
    [sym_null] = STATE(485),
    [sym_integer] = STATE(242),
    [sym_digit] = STATE(224),
    [aux_sym_request_repeat2] = STATE(48),
    [aux_sym_integer_repeat1] = STATE(224),
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
    [sym_comment] = ACTIONS(17),
  },
  [8] = {
    [sym_body] = STATE(109),
    [sym_request_section] = STATE(48),
    [sym_basic_auth_section] = STATE(59),
    [sym_query_string_params_section] = STATE(59),
    [sym_form_params_section] = STATE(59),
    [sym_multipart_form_data_section] = STATE(59),
    [sym_cookies_section] = STATE(59),
    [sym_options_section] = STATE(59),
    [sym_bytes] = STATE(368),
    [sym_xml] = STATE(482),
    [sym_oneline_base64] = STATE(482),
    [sym_oneline_file] = STATE(482),
    [sym_oneline_hex] = STATE(482),
    [sym_oneline_string] = STATE(482),
    [sym_multiline_string] = STATE(482),
    [sym_json_value] = STATE(482),
    [sym_json_object] = STATE(485),
    [sym_json_array] = STATE(485),
    [sym_json_string] = STATE(485),
    [sym_json_number] = STATE(485),
    [sym_template] = STATE(485),
    [sym_boolean] = STATE(485),
    [sym_null] = STATE(485),
    [sym_integer] = STATE(242),
    [sym_digit] = STATE(224),
    [aux_sym_request_repeat2] = STATE(48),
    [aux_sym_integer_repeat1] = STATE(224),
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
  [9] = {
    [aux_sym__comment_or_new_line_repeat1] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(75),
    [anon_sym_LF] = ACTIONS(77),
    [anon_sym_GET] = ACTIONS(80),
    [anon_sym_HEAD] = ACTIONS(80),
    [anon_sym_POST] = ACTIONS(80),
    [anon_sym_PUT] = ACTIONS(80),
    [anon_sym_DELETE] = ACTIONS(80),
    [anon_sym_CONNECT] = ACTIONS(80),
    [anon_sym_OPTIONS] = ACTIONS(80),
    [anon_sym_TRACE] = ACTIONS(80),
    [anon_sym_PATCH] = ACTIONS(80),
    [anon_sym_LINK] = ACTIONS(80),
    [anon_sym_UNLINK] = ACTIONS(80),
    [anon_sym_PURGE] = ACTIONS(80),
    [anon_sym_LOCK] = ACTIONS(80),
    [anon_sym_UNLOCK] = ACTIONS(80),
    [anon_sym_PROPFIND] = ACTIONS(80),
    [anon_sym_VIEW] = ACTIONS(80),
    [anon_sym_HTTP_SLASH1_DOT0] = ACTIONS(80),
    [anon_sym_HTTP_SLASH1_DOT1] = ACTIONS(80),
    [anon_sym_HTTP_SLASH2] = ACTIONS(80),
    [anon_sym_HTTP_SLASH_STAR] = ACTIONS(80),
    [anon_sym_LBRACKBasicAuth_RBRACK] = ACTIONS(80),
    [anon_sym_LBRACKQueryStringParams_RBRACK] = ACTIONS(80),
    [anon_sym_LBRACKFormParams_RBRACK] = ACTIONS(80),
    [anon_sym_LBRACKMultipartFormData_RBRACK] = ACTIONS(80),
    [anon_sym_LBRACKCookies_RBRACK] = ACTIONS(80),
    [anon_sym_LBRACKCaptures_RBRACK] = ACTIONS(80),
    [anon_sym_LBRACKAsserts_RBRACK] = ACTIONS(80),
    [anon_sym_LBRACKOptions_RBRACK] = ACTIONS(80),
    [anon_sym_file_COMMA] = ACTIONS(80),
    [anon_sym_cacert] = ACTIONS(80),
    [anon_sym_location] = ACTIONS(80),
    [anon_sym_insecure] = ACTIONS(80),
    [anon_sym_max_DASHredirs] = ACTIONS(80),
    [anon_sym_retry] = ACTIONS(80),
    [anon_sym_retry_DASHinterval] = ACTIONS(80),
    [anon_sym_retry_DASHmax_DASHcount] = ACTIONS(80),
    [anon_sym_variable] = ACTIONS(80),
    [anon_sym_verbose] = ACTIONS(80),
    [anon_sym_very_DASHverbose] = ACTIONS(80),
    [anon_sym_status] = ACTIONS(80),
    [anon_sym_url] = ACTIONS(80),
    [anon_sym_header] = ACTIONS(80),
    [anon_sym_cookie] = ACTIONS(80),
    [anon_sym_body] = ACTIONS(80),
    [anon_sym_xpath] = ACTIONS(80),
    [anon_sym_jsonpath] = ACTIONS(80),
    [anon_sym_regex] = ACTIONS(80),
    [anon_sym_duration] = ACTIONS(80),
    [anon_sym_sha256] = ACTIONS(80),
    [anon_sym_md5] = ACTIONS(80),
    [anon_sym_bytes] = ACTIONS(80),
    [anon_sym_LT] = ACTIONS(80),
    [anon_sym_base64_COMMA] = ACTIONS(80),
    [anon_sym_hex_COMMA] = ACTIONS(80),
    [anon_sym_DQUOTE] = ACTIONS(80),
    [anon_sym_BQUOTE] = ACTIONS(80),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(80),
    [anon_sym_LBRACE] = ACTIONS(80),
    [anon_sym_LBRACK] = ACTIONS(80),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(75),
    [anon_sym_true] = ACTIONS(80),
    [anon_sym_false] = ACTIONS(80),
    [anon_sym_null] = ACTIONS(80),
    [aux_sym_digit_token1] = ACTIONS(80),
    [sym_comment] = ACTIONS(82),
  },
  [10] = {
    [sym_header] = STATE(54),
    [sym_body] = STATE(117),
    [sym_response_section] = STATE(21),
    [sym_captures_section] = STATE(69),
    [sym_asserts_section] = STATE(69),
    [sym_key_value] = STATE(358),
    [sym_bytes] = STATE(368),
    [sym_xml] = STATE(482),
    [sym_oneline_base64] = STATE(482),
    [sym_oneline_file] = STATE(482),
    [sym_oneline_hex] = STATE(482),
    [sym_key_string] = STATE(452),
    [sym_key_string_content] = STATE(145),
    [sym_key_string_escaped_char] = STATE(225),
    [sym_oneline_string] = STATE(482),
    [sym_multiline_string] = STATE(482),
    [sym_json_value] = STATE(482),
    [sym_json_object] = STATE(485),
    [sym_json_array] = STATE(485),
    [sym_json_string] = STATE(485),
    [sym_json_number] = STATE(485),
    [sym_template] = STATE(244),
    [sym_boolean] = STATE(485),
    [sym_null] = STATE(485),
    [sym_integer] = STATE(242),
    [sym_digit] = STATE(224),
    [aux_sym_request_repeat1] = STATE(54),
    [aux_sym_response_repeat1] = STATE(21),
    [aux_sym_key_string_repeat1] = STATE(145),
    [aux_sym_key_string_content_repeat1] = STATE(225),
    [aux_sym_integer_repeat1] = STATE(224),
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
    [anon_sym_LBRACKCaptures_RBRACK] = ACTIONS(89),
    [anon_sym_LBRACKAsserts_RBRACK] = ACTIONS(91),
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
    [sym_comment] = ACTIONS(87),
  },
  [11] = {
    [aux_sym__comment_or_new_line_repeat1] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(93),
    [anon_sym_LF] = ACTIONS(95),
    [anon_sym_GET] = ACTIONS(97),
    [anon_sym_HEAD] = ACTIONS(97),
    [anon_sym_POST] = ACTIONS(97),
    [anon_sym_PUT] = ACTIONS(97),
    [anon_sym_DELETE] = ACTIONS(97),
    [anon_sym_CONNECT] = ACTIONS(97),
    [anon_sym_OPTIONS] = ACTIONS(97),
    [anon_sym_TRACE] = ACTIONS(97),
    [anon_sym_PATCH] = ACTIONS(97),
    [anon_sym_LINK] = ACTIONS(97),
    [anon_sym_UNLINK] = ACTIONS(97),
    [anon_sym_PURGE] = ACTIONS(97),
    [anon_sym_LOCK] = ACTIONS(97),
    [anon_sym_UNLOCK] = ACTIONS(97),
    [anon_sym_PROPFIND] = ACTIONS(97),
    [anon_sym_VIEW] = ACTIONS(97),
    [anon_sym_HTTP_SLASH1_DOT0] = ACTIONS(97),
    [anon_sym_HTTP_SLASH1_DOT1] = ACTIONS(97),
    [anon_sym_HTTP_SLASH2] = ACTIONS(97),
    [anon_sym_HTTP_SLASH_STAR] = ACTIONS(97),
    [anon_sym_LBRACKBasicAuth_RBRACK] = ACTIONS(97),
    [anon_sym_LBRACKQueryStringParams_RBRACK] = ACTIONS(97),
    [anon_sym_LBRACKFormParams_RBRACK] = ACTIONS(97),
    [anon_sym_LBRACKMultipartFormData_RBRACK] = ACTIONS(97),
    [anon_sym_LBRACKCookies_RBRACK] = ACTIONS(97),
    [anon_sym_LBRACKCaptures_RBRACK] = ACTIONS(97),
    [anon_sym_LBRACKAsserts_RBRACK] = ACTIONS(97),
    [anon_sym_LBRACKOptions_RBRACK] = ACTIONS(97),
    [anon_sym_file_COMMA] = ACTIONS(97),
    [anon_sym_cacert] = ACTIONS(97),
    [anon_sym_location] = ACTIONS(97),
    [anon_sym_insecure] = ACTIONS(97),
    [anon_sym_max_DASHredirs] = ACTIONS(97),
    [anon_sym_retry] = ACTIONS(97),
    [anon_sym_retry_DASHinterval] = ACTIONS(97),
    [anon_sym_retry_DASHmax_DASHcount] = ACTIONS(97),
    [anon_sym_variable] = ACTIONS(97),
    [anon_sym_verbose] = ACTIONS(97),
    [anon_sym_very_DASHverbose] = ACTIONS(97),
    [anon_sym_status] = ACTIONS(97),
    [anon_sym_url] = ACTIONS(97),
    [anon_sym_header] = ACTIONS(97),
    [anon_sym_cookie] = ACTIONS(97),
    [anon_sym_body] = ACTIONS(97),
    [anon_sym_xpath] = ACTIONS(97),
    [anon_sym_jsonpath] = ACTIONS(97),
    [anon_sym_regex] = ACTIONS(97),
    [anon_sym_duration] = ACTIONS(97),
    [anon_sym_sha256] = ACTIONS(97),
    [anon_sym_md5] = ACTIONS(97),
    [anon_sym_bytes] = ACTIONS(97),
    [anon_sym_LT] = ACTIONS(97),
    [anon_sym_base64_COMMA] = ACTIONS(97),
    [anon_sym_hex_COMMA] = ACTIONS(97),
    [anon_sym_DQUOTE] = ACTIONS(97),
    [anon_sym_BQUOTE] = ACTIONS(97),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(97),
    [anon_sym_LBRACE] = ACTIONS(97),
    [anon_sym_LBRACK] = ACTIONS(97),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(93),
    [anon_sym_true] = ACTIONS(97),
    [anon_sym_false] = ACTIONS(97),
    [anon_sym_null] = ACTIONS(97),
    [aux_sym_digit_token1] = ACTIONS(97),
    [sym_comment] = ACTIONS(99),
  },
  [12] = {
    [sym_header] = STATE(10),
    [sym_body] = STATE(121),
    [sym_response_section] = STATE(22),
    [sym_captures_section] = STATE(69),
    [sym_asserts_section] = STATE(69),
    [sym_key_value] = STATE(358),
    [sym_bytes] = STATE(368),
    [sym_xml] = STATE(482),
    [sym_oneline_base64] = STATE(482),
    [sym_oneline_file] = STATE(482),
    [sym_oneline_hex] = STATE(482),
    [sym_key_string] = STATE(452),
    [sym_key_string_content] = STATE(145),
    [sym_key_string_escaped_char] = STATE(225),
    [sym_oneline_string] = STATE(482),
    [sym_multiline_string] = STATE(482),
    [sym_json_value] = STATE(482),
    [sym_json_object] = STATE(485),
    [sym_json_array] = STATE(485),
    [sym_json_string] = STATE(485),
    [sym_json_number] = STATE(485),
    [sym_template] = STATE(244),
    [sym_boolean] = STATE(485),
    [sym_null] = STATE(485),
    [sym_integer] = STATE(242),
    [sym_digit] = STATE(224),
    [aux_sym_request_repeat1] = STATE(10),
    [aux_sym_response_repeat1] = STATE(22),
    [aux_sym_key_string_repeat1] = STATE(145),
    [aux_sym_key_string_content_repeat1] = STATE(225),
    [aux_sym_integer_repeat1] = STATE(224),
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
    [anon_sym_LBRACKCaptures_RBRACK] = ACTIONS(89),
    [anon_sym_LBRACKAsserts_RBRACK] = ACTIONS(91),
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
    [sym_option] = STATE(15),
    [sym_ca_certificate_option] = STATE(29),
    [sym_follow_redirect_option] = STATE(29),
    [sym_insecure_option] = STATE(29),
    [sym_max_redirs_option] = STATE(29),
    [sym_retry_option] = STATE(29),
    [sym_retry_interval_option] = STATE(29),
    [sym_retry_max_count_option] = STATE(29),
    [sym_variable_option] = STATE(29),
    [sym_verbose_option] = STATE(29),
    [sym_very_verbose_option] = STATE(29),
    [aux_sym_options_section_repeat1] = STATE(15),
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
    [anon_sym_location] = ACTIONS(111),
    [anon_sym_insecure] = ACTIONS(113),
    [anon_sym_max_DASHredirs] = ACTIONS(115),
    [anon_sym_retry] = ACTIONS(117),
    [anon_sym_retry_DASHinterval] = ACTIONS(119),
    [anon_sym_retry_DASHmax_DASHcount] = ACTIONS(121),
    [anon_sym_variable] = ACTIONS(123),
    [anon_sym_verbose] = ACTIONS(125),
    [anon_sym_very_DASHverbose] = ACTIONS(127),
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
    [sym_option] = STATE(13),
    [sym_ca_certificate_option] = STATE(29),
    [sym_follow_redirect_option] = STATE(29),
    [sym_insecure_option] = STATE(29),
    [sym_max_redirs_option] = STATE(29),
    [sym_retry_option] = STATE(29),
    [sym_retry_interval_option] = STATE(29),
    [sym_retry_max_count_option] = STATE(29),
    [sym_variable_option] = STATE(29),
    [sym_verbose_option] = STATE(29),
    [sym_very_verbose_option] = STATE(29),
    [aux_sym_options_section_repeat1] = STATE(13),
    [ts_builtin_sym_end] = ACTIONS(129),
    [anon_sym_LF] = ACTIONS(129),
    [anon_sym_GET] = ACTIONS(131),
    [anon_sym_HEAD] = ACTIONS(131),
    [anon_sym_POST] = ACTIONS(131),
    [anon_sym_PUT] = ACTIONS(131),
    [anon_sym_DELETE] = ACTIONS(131),
    [anon_sym_CONNECT] = ACTIONS(131),
    [anon_sym_OPTIONS] = ACTIONS(131),
    [anon_sym_TRACE] = ACTIONS(131),
    [anon_sym_PATCH] = ACTIONS(131),
    [anon_sym_LINK] = ACTIONS(131),
    [anon_sym_UNLINK] = ACTIONS(131),
    [anon_sym_PURGE] = ACTIONS(131),
    [anon_sym_LOCK] = ACTIONS(131),
    [anon_sym_UNLOCK] = ACTIONS(131),
    [anon_sym_PROPFIND] = ACTIONS(131),
    [anon_sym_VIEW] = ACTIONS(131),
    [anon_sym_HTTP_SLASH1_DOT0] = ACTIONS(131),
    [anon_sym_HTTP_SLASH1_DOT1] = ACTIONS(131),
    [anon_sym_HTTP_SLASH2] = ACTIONS(131),
    [anon_sym_HTTP_SLASH_STAR] = ACTIONS(131),
    [anon_sym_LBRACKBasicAuth_RBRACK] = ACTIONS(131),
    [anon_sym_LBRACKQueryStringParams_RBRACK] = ACTIONS(131),
    [anon_sym_LBRACKFormParams_RBRACK] = ACTIONS(131),
    [anon_sym_LBRACKMultipartFormData_RBRACK] = ACTIONS(131),
    [anon_sym_LBRACKCookies_RBRACK] = ACTIONS(131),
    [anon_sym_LBRACKOptions_RBRACK] = ACTIONS(131),
    [anon_sym_file_COMMA] = ACTIONS(131),
    [anon_sym_cacert] = ACTIONS(109),
    [anon_sym_location] = ACTIONS(111),
    [anon_sym_insecure] = ACTIONS(113),
    [anon_sym_max_DASHredirs] = ACTIONS(115),
    [anon_sym_retry] = ACTIONS(117),
    [anon_sym_retry_DASHinterval] = ACTIONS(119),
    [anon_sym_retry_DASHmax_DASHcount] = ACTIONS(121),
    [anon_sym_variable] = ACTIONS(123),
    [anon_sym_verbose] = ACTIONS(125),
    [anon_sym_very_DASHverbose] = ACTIONS(127),
    [anon_sym_LT] = ACTIONS(131),
    [anon_sym_base64_COMMA] = ACTIONS(131),
    [anon_sym_hex_COMMA] = ACTIONS(131),
    [anon_sym_DQUOTE] = ACTIONS(131),
    [anon_sym_BQUOTE] = ACTIONS(131),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(131),
    [anon_sym_LBRACE] = ACTIONS(131),
    [anon_sym_LBRACK] = ACTIONS(131),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(129),
    [anon_sym_true] = ACTIONS(131),
    [anon_sym_false] = ACTIONS(131),
    [anon_sym_null] = ACTIONS(131),
    [aux_sym_digit_token1] = ACTIONS(131),
    [sym_comment] = ACTIONS(131),
  },
  [15] = {
    [sym_option] = STATE(15),
    [sym_ca_certificate_option] = STATE(29),
    [sym_follow_redirect_option] = STATE(29),
    [sym_insecure_option] = STATE(29),
    [sym_max_redirs_option] = STATE(29),
    [sym_retry_option] = STATE(29),
    [sym_retry_interval_option] = STATE(29),
    [sym_retry_max_count_option] = STATE(29),
    [sym_variable_option] = STATE(29),
    [sym_verbose_option] = STATE(29),
    [sym_very_verbose_option] = STATE(29),
    [aux_sym_options_section_repeat1] = STATE(15),
    [ts_builtin_sym_end] = ACTIONS(133),
    [anon_sym_LF] = ACTIONS(133),
    [anon_sym_GET] = ACTIONS(135),
    [anon_sym_HEAD] = ACTIONS(135),
    [anon_sym_POST] = ACTIONS(135),
    [anon_sym_PUT] = ACTIONS(135),
    [anon_sym_DELETE] = ACTIONS(135),
    [anon_sym_CONNECT] = ACTIONS(135),
    [anon_sym_OPTIONS] = ACTIONS(135),
    [anon_sym_TRACE] = ACTIONS(135),
    [anon_sym_PATCH] = ACTIONS(135),
    [anon_sym_LINK] = ACTIONS(135),
    [anon_sym_UNLINK] = ACTIONS(135),
    [anon_sym_PURGE] = ACTIONS(135),
    [anon_sym_LOCK] = ACTIONS(135),
    [anon_sym_UNLOCK] = ACTIONS(135),
    [anon_sym_PROPFIND] = ACTIONS(135),
    [anon_sym_VIEW] = ACTIONS(135),
    [anon_sym_HTTP_SLASH1_DOT0] = ACTIONS(135),
    [anon_sym_HTTP_SLASH1_DOT1] = ACTIONS(135),
    [anon_sym_HTTP_SLASH2] = ACTIONS(135),
    [anon_sym_HTTP_SLASH_STAR] = ACTIONS(135),
    [anon_sym_LBRACKBasicAuth_RBRACK] = ACTIONS(135),
    [anon_sym_LBRACKQueryStringParams_RBRACK] = ACTIONS(135),
    [anon_sym_LBRACKFormParams_RBRACK] = ACTIONS(135),
    [anon_sym_LBRACKMultipartFormData_RBRACK] = ACTIONS(135),
    [anon_sym_LBRACKCookies_RBRACK] = ACTIONS(135),
    [anon_sym_LBRACKOptions_RBRACK] = ACTIONS(135),
    [anon_sym_file_COMMA] = ACTIONS(135),
    [anon_sym_cacert] = ACTIONS(137),
    [anon_sym_location] = ACTIONS(140),
    [anon_sym_insecure] = ACTIONS(143),
    [anon_sym_max_DASHredirs] = ACTIONS(146),
    [anon_sym_retry] = ACTIONS(149),
    [anon_sym_retry_DASHinterval] = ACTIONS(152),
    [anon_sym_retry_DASHmax_DASHcount] = ACTIONS(155),
    [anon_sym_variable] = ACTIONS(158),
    [anon_sym_verbose] = ACTIONS(161),
    [anon_sym_very_DASHverbose] = ACTIONS(164),
    [anon_sym_LT] = ACTIONS(135),
    [anon_sym_base64_COMMA] = ACTIONS(135),
    [anon_sym_hex_COMMA] = ACTIONS(135),
    [anon_sym_DQUOTE] = ACTIONS(135),
    [anon_sym_BQUOTE] = ACTIONS(135),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(135),
    [anon_sym_LBRACE] = ACTIONS(135),
    [anon_sym_LBRACK] = ACTIONS(135),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(133),
    [anon_sym_true] = ACTIONS(135),
    [anon_sym_false] = ACTIONS(135),
    [anon_sym_null] = ACTIONS(135),
    [aux_sym_digit_token1] = ACTIONS(135),
    [sym_comment] = ACTIONS(135),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 18,
    ACTIONS(171), 1,
      anon_sym_variable,
    ACTIONS(174), 1,
      anon_sym_status,
    ACTIONS(177), 1,
      anon_sym_url,
    ACTIONS(180), 1,
      anon_sym_header,
    ACTIONS(183), 1,
      anon_sym_cookie,
    ACTIONS(186), 1,
      anon_sym_body,
    ACTIONS(189), 1,
      anon_sym_xpath,
    ACTIONS(192), 1,
      anon_sym_jsonpath,
    ACTIONS(195), 1,
      anon_sym_regex,
    ACTIONS(198), 1,
      anon_sym_duration,
    ACTIONS(201), 1,
      anon_sym_sha256,
    ACTIONS(204), 1,
      anon_sym_md5,
    ACTIONS(207), 1,
      anon_sym_bytes,
    STATE(19), 1,
      sym_query,
    STATE(16), 2,
      sym_assert,
      aux_sym_asserts_section_repeat1,
    ACTIONS(167), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    STATE(92), 13,
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
    ACTIONS(214), 1,
      anon_sym_variable,
    ACTIONS(216), 1,
      anon_sym_status,
    ACTIONS(218), 1,
      anon_sym_url,
    ACTIONS(220), 1,
      anon_sym_header,
    ACTIONS(222), 1,
      anon_sym_cookie,
    ACTIONS(224), 1,
      anon_sym_body,
    ACTIONS(226), 1,
      anon_sym_xpath,
    ACTIONS(228), 1,
      anon_sym_jsonpath,
    ACTIONS(230), 1,
      anon_sym_regex,
    ACTIONS(232), 1,
      anon_sym_duration,
    ACTIONS(234), 1,
      anon_sym_sha256,
    ACTIONS(236), 1,
      anon_sym_md5,
    ACTIONS(238), 1,
      anon_sym_bytes,
    STATE(19), 1,
      sym_query,
    STATE(16), 2,
      sym_assert,
      aux_sym_asserts_section_repeat1,
    ACTIONS(210), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    STATE(92), 13,
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
    ACTIONS(212), 32,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
    ACTIONS(214), 1,
      anon_sym_variable,
    ACTIONS(216), 1,
      anon_sym_status,
    ACTIONS(218), 1,
      anon_sym_url,
    ACTIONS(220), 1,
      anon_sym_header,
    ACTIONS(222), 1,
      anon_sym_cookie,
    ACTIONS(224), 1,
      anon_sym_body,
    ACTIONS(226), 1,
      anon_sym_xpath,
    ACTIONS(228), 1,
      anon_sym_jsonpath,
    ACTIONS(230), 1,
      anon_sym_regex,
    ACTIONS(232), 1,
      anon_sym_duration,
    ACTIONS(234), 1,
      anon_sym_sha256,
    ACTIONS(236), 1,
      anon_sym_md5,
    ACTIONS(238), 1,
      anon_sym_bytes,
    STATE(19), 1,
      sym_query,
    STATE(17), 2,
      sym_assert,
      aux_sym_asserts_section_repeat1,
    ACTIONS(240), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    STATE(92), 13,
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
    STATE(353), 1,
      sym_predicate,
    STATE(507), 1,
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
    STATE(20), 2,
      sym_filter,
      aux_sym_capture_repeat1,
    STATE(70), 7,
      sym_regex_filter,
      sym_count_filter,
      sym_url_encode_filter,
      sym_url_decode_filter,
      sym_html_encode_filter,
      sym_html_decode_filter,
      sym_to_int_filter,
    STATE(506), 17,
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
    STATE(396), 1,
      sym_predicate,
    STATE(507), 1,
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
    STATE(61), 2,
      sym_filter,
      aux_sym_capture_repeat1,
    STATE(70), 7,
      sym_regex_filter,
      sym_count_filter,
      sym_url_encode_filter,
      sym_url_decode_filter,
      sym_html_encode_filter,
      sym_html_decode_filter,
      sym_to_int_filter,
    STATE(506), 17,
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
    ACTIONS(89), 1,
      anon_sym_LBRACKCaptures_RBRACK,
    ACTIONS(91), 1,
      anon_sym_LBRACKAsserts_RBRACK,
    STATE(118), 1,
      sym_body,
    STATE(242), 1,
      sym_integer,
    STATE(368), 1,
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
    STATE(224), 2,
      sym_digit,
      aux_sym_integer_repeat1,
    STATE(482), 7,
      sym_xml,
      sym_oneline_base64,
      sym_oneline_file,
      sym_oneline_hex,
      sym_oneline_string,
      sym_multiline_string,
      sym_json_value,
    STATE(485), 7,
      sym_json_object,
      sym_json_array,
      sym_json_string,
      sym_json_number,
      sym_template,
      sym_boolean,
      sym_null,
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
    ACTIONS(89), 1,
      anon_sym_LBRACKCaptures_RBRACK,
    ACTIONS(91), 1,
      anon_sym_LBRACKAsserts_RBRACK,
    STATE(117), 1,
      sym_body,
    STATE(242), 1,
      sym_integer,
    STATE(368), 1,
      sym_bytes,
    ACTIONS(55), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(85), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(63), 2,
      sym_response_section,
      aux_sym_response_repeat1,
    STATE(69), 2,
      sym_captures_section,
      sym_asserts_section,
    STATE(224), 2,
      sym_digit,
      aux_sym_integer_repeat1,
    STATE(482), 7,
      sym_xml,
      sym_oneline_base64,
      sym_oneline_file,
      sym_oneline_hex,
      sym_oneline_string,
      sym_multiline_string,
      sym_json_value,
    STATE(485), 7,
      sym_json_object,
      sym_json_array,
      sym_json_string,
      sym_json_number,
      sym_template,
      sym_boolean,
      sym_null,
    ACTIONS(87), 17,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
    ACTIONS(41), 1,
      sym_key_string_text,
    ACTIONS(43), 1,
      anon_sym_BSLASH2,
    ACTIONS(302), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(443), 1,
      sym_key_string,
    STATE(467), 1,
      sym_multipart_form_data_param,
    ACTIONS(298), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(225), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(520), 2,
      sym_key_value,
      sym_file_param,
    STATE(145), 3,
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
    ACTIONS(302), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(443), 1,
      sym_key_string,
    STATE(467), 1,
      sym_multipart_form_data_param,
    ACTIONS(304), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(225), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(520), 2,
      sym_key_value,
      sym_file_param,
    STATE(145), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
    ACTIONS(306), 40,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
    ACTIONS(312), 1,
      sym_key_string_text,
    ACTIONS(315), 1,
      anon_sym_BSLASH2,
    ACTIONS(318), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(369), 1,
      sym_key_value,
    STATE(452), 1,
      sym_key_string,
    ACTIONS(308), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(25), 2,
      sym_header,
      aux_sym_request_repeat1,
    STATE(225), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(145), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
    ACTIONS(310), 40,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
    ACTIONS(302), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(443), 1,
      sym_key_string,
    STATE(467), 1,
      sym_multipart_form_data_param,
    ACTIONS(321), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(225), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(520), 2,
      sym_key_value,
      sym_file_param,
    STATE(145), 3,
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
    ACTIONS(302), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(452), 1,
      sym_key_string,
    STATE(468), 1,
      sym_key_value,
    ACTIONS(373), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(225), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(145), 3,
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
    ACTIONS(302), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(452), 1,
      sym_key_string,
    STATE(468), 1,
      sym_key_value,
    ACTIONS(377), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(225), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(145), 3,
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
    ACTIONS(302), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(452), 1,
      sym_key_string,
    STATE(468), 1,
      sym_key_value,
    ACTIONS(381), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(225), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(145), 3,
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
    ACTIONS(302), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(452), 1,
      sym_key_string,
    STATE(468), 1,
      sym_key_value,
    ACTIONS(385), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(225), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(145), 3,
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
    ACTIONS(302), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(452), 1,
      sym_key_string,
    STATE(468), 1,
      sym_key_value,
    ACTIONS(389), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(225), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(145), 3,
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
    ACTIONS(302), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(452), 1,
      sym_key_string,
    STATE(468), 1,
      sym_key_value,
    ACTIONS(393), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(225), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(145), 3,
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
    ACTIONS(302), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(452), 1,
      sym_key_string,
    STATE(468), 1,
      sym_key_value,
    ACTIONS(397), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(225), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(145), 3,
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
    ACTIONS(302), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(452), 1,
      sym_key_string,
    STATE(468), 1,
      sym_key_value,
    ACTIONS(401), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(225), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(145), 3,
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
    ACTIONS(302), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(452), 1,
      sym_key_string,
    STATE(468), 1,
      sym_key_value,
    ACTIONS(405), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(225), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(145), 3,
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
    STATE(59), 6,
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
  [2474] = 6,
    ACTIONS(433), 1,
      anon_sym_LF,
    ACTIONS(438), 1,
      sym_comment,
    STATE(52), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(49), 2,
      sym__comment_or_new_line,
      aux_sym_hurl_file_repeat2,
    ACTIONS(431), 3,
      ts_builtin_sym_end,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(436), 40,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
  [2535] = 2,
    ACTIONS(441), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(443), 45,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
    ACTIONS(93), 3,
      ts_builtin_sym_end,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(97), 40,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
    ACTIONS(75), 3,
      ts_builtin_sym_end,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(80), 40,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
    ACTIONS(312), 1,
      sym_key_string_text,
    ACTIONS(315), 1,
      anon_sym_BSLASH2,
    ACTIONS(318), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(358), 1,
      sym_key_value,
    STATE(452), 1,
      sym_key_string,
    ACTIONS(308), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(54), 2,
      sym_header,
      aux_sym_request_repeat1,
    STATE(225), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(145), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
    ACTIONS(310), 32,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
  [2822] = 2,
    ACTIONS(459), 4,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(461), 41,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
  [2872] = 9,
    ACTIONS(467), 1,
      sym_key_string_text,
    ACTIONS(469), 1,
      anon_sym_BSLASH2,
    ACTIONS(471), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(519), 1,
      sym_key_string,
    ACTIONS(463), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(57), 2,
      sym_capture,
      aux_sym_captures_section_repeat1,
    STATE(237), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(161), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
    ACTIONS(465), 32,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
  [2936] = 9,
    ACTIONS(477), 1,
      sym_key_string_text,
    ACTIONS(480), 1,
      anon_sym_BSLASH2,
    ACTIONS(483), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(519), 1,
      sym_key_string,
    ACTIONS(473), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(57), 2,
      sym_capture,
      aux_sym_captures_section_repeat1,
    STATE(237), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(161), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
    ACTIONS(475), 32,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
  [3000] = 9,
    ACTIONS(467), 1,
      sym_key_string_text,
    ACTIONS(469), 1,
      anon_sym_BSLASH2,
    ACTIONS(471), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(519), 1,
      sym_key_string,
    ACTIONS(486), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(56), 2,
      sym_capture,
      aux_sym_captures_section_repeat1,
    STATE(237), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(161), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
    ACTIONS(488), 32,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
  [3160] = 12,
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
    STATE(61), 2,
      sym_filter,
      aux_sym_capture_repeat1,
    ACTIONS(501), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    STATE(70), 7,
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
  [3227] = 20,
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
    STATE(464), 1,
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
    STATE(506), 17,
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
    ACTIONS(536), 1,
      sym_comment,
    STATE(64), 1,
      aux_sym__comment_or_new_line_repeat1,
    ACTIONS(75), 3,
      ts_builtin_sym_end,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(80), 32,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
    ACTIONS(539), 1,
      anon_sym_LF,
    ACTIONS(541), 1,
      sym_comment,
    STATE(64), 1,
      aux_sym__comment_or_new_line_repeat1,
    ACTIONS(93), 3,
      ts_builtin_sym_end,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(97), 32,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
    ACTIONS(459), 4,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(461), 33,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
    STATE(206), 13,
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
    STATE(11), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(110), 1,
      sym_response,
    STATE(119), 1,
      sym__comment_or_new_line,
    STATE(355), 1,
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
    STATE(11), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(97), 1,
      sym_request,
    STATE(126), 1,
      sym_method,
    STATE(103), 2,
      sym_entry,
      aux_sym_hurl_file_repeat1,
    STATE(258), 2,
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
    STATE(380), 1,
      sym_integer,
    STATE(484), 1,
      sym_predicate_value,
    ACTIONS(703), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(224), 2,
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
    STATE(380), 1,
      sym_integer,
    STATE(463), 1,
      sym_predicate_value,
    ACTIONS(703), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(224), 2,
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
    STATE(380), 1,
      sym_integer,
    STATE(460), 1,
      sym_predicate_value,
    ACTIONS(703), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(224), 2,
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
  [4963] = 2,
    ACTIONS(709), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(711), 21,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
    ACTIONS(718), 1,
      sym_comment,
    STATE(97), 1,
      sym_request,
    STATE(126), 1,
      sym_method,
    ACTIONS(713), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(103), 2,
      sym_entry,
      aux_sym_hurl_file_repeat1,
    ACTIONS(715), 16,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
    ACTIONS(720), 1,
      sym_key_string_text,
    ACTIONS(722), 1,
      anon_sym_BSLASH2,
    STATE(403), 1,
      sym_integer,
    STATE(553), 1,
      sym_variable_value,
    ACTIONS(55), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(224), 2,
      sym_digit,
      aux_sym_integer_repeat1,
    STATE(231), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(159), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
    STATE(552), 5,
      sym_quoted_string,
      sym_key_string,
      sym_boolean,
      sym_null,
      sym_float,
  [5079] = 13,
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
    STATE(248), 1,
      aux_sym_value_string_text_repeat1,
    STATE(366), 1,
      sym_integer,
    ACTIONS(55), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(724), 2,
      anon_sym_LF,
      sym_comment,
    STATE(224), 2,
      sym_digit,
      aux_sym_integer_repeat1,
    STATE(132), 3,
      sym_value_string_content,
      sym_template,
      aux_sym_value_string_repeat1,
    STATE(187), 3,
      sym_value_string_text,
      sym_value_string_escaped_char,
      aux_sym_value_string_content_repeat1,
    STATE(483), 4,
      sym_value_string,
      sym_boolean,
      sym_null,
      sym_float,
  [5129] = 2,
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
  [5157] = 2,
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
  [5185] = 2,
    ACTIONS(13), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(17), 21,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
  [5241] = 6,
    ACTIONS(7), 1,
      anon_sym_LF,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(736), 1,
      ts_builtin_sym_end,
    STATE(11), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(120), 1,
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
    STATE(170), 1,
      sym_integer,
    STATE(411), 1,
      sym_json_value,
    ACTIONS(748), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(160), 2,
      sym_digit,
      aux_sym_integer_repeat1,
    STATE(399), 7,
      sym_json_object,
      sym_json_array,
      sym_json_string,
      sym_json_number,
      sym_template,
      sym_boolean,
      sym_null,
  [5320] = 13,
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
    STATE(65), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(68), 1,
      sym__comment_or_new_line,
    STATE(122), 2,
      sym_filter,
      aux_sym_capture_repeat1,
    STATE(199), 7,
      sym_regex_filter,
      sym_count_filter,
      sym_url_encode_filter,
      sym_url_decode_filter,
      sym_html_encode_filter,
      sym_html_decode_filter,
      sym_to_int_filter,
  [5367] = 12,
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
    STATE(170), 1,
      sym_integer,
    STATE(351), 1,
      sym_json_value,
    ACTIONS(748), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(160), 2,
      sym_digit,
      aux_sym_integer_repeat1,
    STATE(399), 7,
      sym_json_object,
      sym_json_array,
      sym_json_string,
      sym_json_number,
      sym_template,
      sym_boolean,
      sym_null,
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
    STATE(170), 1,
      sym_integer,
    STATE(442), 1,
      sym_json_value,
    ACTIONS(748), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(160), 2,
      sym_digit,
      aux_sym_integer_repeat1,
    STATE(399), 7,
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
    STATE(65), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(66), 1,
      sym__comment_or_new_line,
    STATE(112), 2,
      sym_filter,
      aux_sym_capture_repeat1,
    STATE(199), 7,
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
    STATE(170), 1,
      sym_integer,
    STATE(407), 1,
      sym_json_value,
    ACTIONS(748), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(160), 2,
      sym_digit,
      aux_sym_integer_repeat1,
    STATE(399), 7,
      sym_json_object,
      sym_json_array,
      sym_json_string,
      sym_json_number,
      sym_template,
      sym_boolean,
      sym_null,
  [5549] = 2,
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
  [5645] = 2,
    ACTIONS(85), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(87), 17,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
    STATE(199), 7,
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
    STATE(124), 2,
      sym_filter,
      aux_sym_capture_repeat1,
    STATE(70), 7,
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
    STATE(61), 2,
      sym_filter,
      aux_sym_capture_repeat1,
    STATE(70), 7,
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
    ACTIONS(302), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(805), 1,
      sym_key_string_text,
    STATE(24), 1,
      sym__comment_or_new_line,
    STATE(52), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(283), 1,
      aux_sym_multipart_form_data_section_repeat1,
    STATE(318), 1,
      sym_multipart_form_data_param,
    STATE(443), 1,
      sym_key_string,
    STATE(225), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(520), 2,
      sym_key_value,
      sym_file_param,
    STATE(145), 3,
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
    STATE(248), 1,
      aux_sym_value_string_text_repeat1,
    STATE(319), 1,
      sym_value_string,
    ACTIONS(61), 2,
      anon_sym_LF,
      sym_comment,
    STATE(3), 2,
      sym__comment_or_new_line,
      aux_sym_hurl_file_repeat2,
    STATE(132), 3,
      sym_value_string_content,
      sym_template,
      aux_sym_value_string_repeat1,
    STATE(187), 3,
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
    ACTIONS(302), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(805), 1,
      sym_key_string_text,
    STATE(43), 1,
      sym__comment_or_new_line,
    STATE(52), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(270), 1,
      aux_sym_query_string_params_section_repeat1,
    STATE(280), 1,
      sym_key_value,
    STATE(452), 1,
      sym_key_string,
    STATE(225), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(145), 3,
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
    ACTIONS(302), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(805), 1,
      sym_key_string_text,
    STATE(45), 1,
      sym__comment_or_new_line,
    STATE(52), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(281), 1,
      aux_sym_query_string_params_section_repeat1,
    STATE(324), 1,
      sym_key_value,
    STATE(452), 1,
      sym_key_string,
    STATE(225), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(145), 3,
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
    ACTIONS(302), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(805), 1,
      sym_key_string_text,
    STATE(46), 1,
      sym__comment_or_new_line,
    STATE(52), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(265), 1,
      aux_sym_query_string_params_section_repeat1,
    STATE(285), 1,
      sym_key_value,
    STATE(452), 1,
      sym_key_string,
    STATE(225), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(145), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
  [5993] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(43), 1,
      anon_sym_BSLASH2,
    ACTIONS(302), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(805), 1,
      sym_key_string_text,
    STATE(443), 1,
      sym_key_string,
    STATE(467), 1,
      sym_multipart_form_data_param,
    STATE(225), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(520), 2,
      sym_key_value,
      sym_file_param,
    STATE(145), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
  [6025] = 9,
    ACTIONS(807), 1,
      anon_sym_BSLASH,
    ACTIONS(809), 1,
      sym_filename_text,
    ACTIONS(811), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(11), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(38), 1,
      sym__comment_or_new_line,
    STATE(333), 1,
      sym_filename,
    ACTIONS(11), 2,
      anon_sym_LF,
      sym_comment,
    STATE(238), 2,
      sym_filename_escaped_char,
      aux_sym_filename_content_repeat1,
    STATE(153), 3,
      sym_filename_content,
      sym_template,
      aux_sym_filename_repeat1,
  [6057] = 7,
    ACTIONS(726), 1,
      anon_sym_BSLASH,
    ACTIONS(728), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(730), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(248), 1,
      aux_sym_value_string_text_repeat1,
    ACTIONS(813), 2,
      anon_sym_LF,
      sym_comment,
    STATE(134), 3,
      sym_value_string_content,
      sym_template,
      aux_sym_value_string_repeat1,
    STATE(187), 3,
      sym_value_string_text,
      sym_value_string_escaped_char,
      aux_sym_value_string_content_repeat1,
  [6084] = 7,
    ACTIONS(815), 1,
      anon_sym_DQUOTE,
    ACTIONS(817), 1,
      aux_sym_quoted_string_text_token1,
    ACTIONS(819), 1,
      anon_sym_BSLASH,
    ACTIONS(821), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(823), 1,
      sym_comment,
    STATE(139), 3,
      sym_quoted_string_content,
      sym_template,
      aux_sym_quoted_string_repeat1,
    STATE(178), 4,
      sym_quoted_string_text,
      sym_invalid_quoted_string_escaped_char,
      sym_quoted_string_escaped_char,
      aux_sym_quoted_string_content_repeat1,
  [6111] = 7,
    ACTIONS(827), 1,
      anon_sym_BSLASH,
    ACTIONS(830), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(833), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(248), 1,
      aux_sym_value_string_text_repeat1,
    ACTIONS(825), 2,
      anon_sym_LF,
      sym_comment,
    STATE(134), 3,
      sym_value_string_content,
      sym_template,
      aux_sym_value_string_repeat1,
    STATE(187), 3,
      sym_value_string_text,
      sym_value_string_escaped_char,
      aux_sym_value_string_content_repeat1,
  [6138] = 7,
    ACTIONS(817), 1,
      aux_sym_quoted_string_text_token1,
    ACTIONS(819), 1,
      anon_sym_BSLASH,
    ACTIONS(821), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(823), 1,
      sym_comment,
    ACTIONS(836), 1,
      anon_sym_DQUOTE,
    STATE(139), 3,
      sym_quoted_string_content,
      sym_template,
      aux_sym_quoted_string_repeat1,
    STATE(178), 4,
      sym_quoted_string_text,
      sym_invalid_quoted_string_escaped_char,
      sym_quoted_string_escaped_char,
      aux_sym_quoted_string_content_repeat1,
  [6165] = 8,
    ACTIONS(823), 1,
      sym_comment,
    ACTIONS(838), 1,
      anon_sym_LF,
    ACTIONS(840), 1,
      anon_sym_BSLASH,
    ACTIONS(842), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(844), 1,
      aux_sym__multiline_string_text_token1,
    ACTIONS(846), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(143), 3,
      sym_multiline_string_content,
      sym_template,
      aux_sym_multiline_string_repeat1,
    STATE(198), 3,
      sym__multiline_string_text,
      sym_multiline_string_escaped_char,
      aux_sym_multiline_string_content_repeat1,
  [6194] = 8,
    ACTIONS(823), 1,
      sym_comment,
    ACTIONS(838), 1,
      anon_sym_LF,
    ACTIONS(840), 1,
      anon_sym_BSLASH,
    ACTIONS(842), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(844), 1,
      aux_sym__multiline_string_text_token1,
    ACTIONS(846), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(140), 3,
      sym_multiline_string_content,
      sym_template,
      aux_sym_multiline_string_repeat1,
    STATE(198), 3,
      sym__multiline_string_text,
      sym_multiline_string_escaped_char,
      aux_sym_multiline_string_content_repeat1,
  [6223] = 7,
    ACTIONS(817), 1,
      aux_sym_quoted_string_text_token1,
    ACTIONS(819), 1,
      anon_sym_BSLASH,
    ACTIONS(821), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(823), 1,
      sym_comment,
    ACTIONS(848), 1,
      anon_sym_DQUOTE,
    STATE(135), 3,
      sym_quoted_string_content,
      sym_template,
      aux_sym_quoted_string_repeat1,
    STATE(178), 4,
      sym_quoted_string_text,
      sym_invalid_quoted_string_escaped_char,
      sym_quoted_string_escaped_char,
      aux_sym_quoted_string_content_repeat1,
  [6250] = 7,
    ACTIONS(823), 1,
      sym_comment,
    ACTIONS(850), 1,
      anon_sym_DQUOTE,
    ACTIONS(852), 1,
      aux_sym_quoted_string_text_token1,
    ACTIONS(855), 1,
      anon_sym_BSLASH,
    ACTIONS(858), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(139), 3,
      sym_quoted_string_content,
      sym_template,
      aux_sym_quoted_string_repeat1,
    STATE(178), 4,
      sym_quoted_string_text,
      sym_invalid_quoted_string_escaped_char,
      sym_quoted_string_escaped_char,
      aux_sym_quoted_string_content_repeat1,
  [6277] = 8,
    ACTIONS(823), 1,
      sym_comment,
    ACTIONS(861), 1,
      anon_sym_LF,
    ACTIONS(864), 1,
      anon_sym_BSLASH,
    ACTIONS(867), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(869), 1,
      aux_sym__multiline_string_text_token1,
    ACTIONS(872), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(140), 3,
      sym_multiline_string_content,
      sym_template,
      aux_sym_multiline_string_repeat1,
    STATE(198), 3,
      sym__multiline_string_text,
      sym_multiline_string_escaped_char,
      aux_sym_multiline_string_content_repeat1,
  [6306] = 8,
    ACTIONS(823), 1,
      sym_comment,
    ACTIONS(840), 1,
      anon_sym_BSLASH,
    ACTIONS(844), 1,
      aux_sym__multiline_string_text_token1,
    ACTIONS(846), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(875), 1,
      anon_sym_LF,
    ACTIONS(877), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(137), 3,
      sym_multiline_string_content,
      sym_template,
      aux_sym_multiline_string_repeat1,
    STATE(198), 3,
      sym__multiline_string_text,
      sym_multiline_string_escaped_char,
      aux_sym_multiline_string_content_repeat1,
  [6335] = 7,
    ACTIONS(817), 1,
      aux_sym_quoted_string_text_token1,
    ACTIONS(819), 1,
      anon_sym_BSLASH,
    ACTIONS(821), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(823), 1,
      sym_comment,
    ACTIONS(879), 1,
      anon_sym_DQUOTE,
    STATE(133), 3,
      sym_quoted_string_content,
      sym_template,
      aux_sym_quoted_string_repeat1,
    STATE(178), 4,
      sym_quoted_string_text,
      sym_invalid_quoted_string_escaped_char,
      sym_quoted_string_escaped_char,
      aux_sym_quoted_string_content_repeat1,
  [6362] = 8,
    ACTIONS(823), 1,
      sym_comment,
    ACTIONS(840), 1,
      anon_sym_BSLASH,
    ACTIONS(844), 1,
      aux_sym__multiline_string_text_token1,
    ACTIONS(846), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(881), 1,
      anon_sym_LF,
    ACTIONS(883), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(140), 3,
      sym_multiline_string_content,
      sym_template,
      aux_sym_multiline_string_repeat1,
    STATE(198), 3,
      sym__multiline_string_text,
      sym_multiline_string_escaped_char,
      aux_sym_multiline_string_content_repeat1,
  [6391] = 7,
    ACTIONS(823), 1,
      sym_comment,
    ACTIONS(885), 1,
      anon_sym_BSLASH,
    ACTIONS(888), 1,
      anon_sym_BQUOTE,
    ACTIONS(890), 1,
      aux_sym_oneline_string_text_token1,
    ACTIONS(893), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(144), 3,
      sym_oneline_string_content,
      sym_template,
      aux_sym_oneline_string_repeat1,
    STATE(213), 3,
      sym_oneline_string_text,
      sym_oneline_string_escaped_char,
      aux_sym_oneline_string_content_repeat1,
  [6417] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(43), 1,
      anon_sym_BSLASH2,
    ACTIONS(302), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(805), 1,
      sym_key_string_text,
    ACTIONS(896), 1,
      anon_sym_COLON,
    ACTIONS(898), 1,
      anon_sym_COLON2,
    STATE(225), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(151), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
  [6445] = 8,
    ACTIONS(823), 1,
      sym_comment,
    ACTIONS(900), 1,
      anon_sym_SEMI,
    ACTIONS(902), 1,
      anon_sym_BSLASH,
    ACTIONS(904), 1,
      sym_filename_text,
    ACTIONS(906), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(546), 1,
      sym_filename,
    STATE(234), 2,
      sym_filename_escaped_char,
      aux_sym_filename_content_repeat1,
    STATE(167), 3,
      sym_filename_content,
      sym_template,
      aux_sym_filename_repeat1,
  [6473] = 7,
    ACTIONS(823), 1,
      sym_comment,
    ACTIONS(908), 1,
      anon_sym_BSLASH,
    ACTIONS(910), 1,
      anon_sym_BQUOTE,
    ACTIONS(912), 1,
      aux_sym_oneline_string_text_token1,
    ACTIONS(914), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(150), 3,
      sym_oneline_string_content,
      sym_template,
      aux_sym_oneline_string_repeat1,
    STATE(213), 3,
      sym_oneline_string_text,
      sym_oneline_string_escaped_char,
      aux_sym_oneline_string_content_repeat1,
  [6499] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(43), 1,
      anon_sym_BSLASH2,
    ACTIONS(302), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(805), 1,
      sym_key_string_text,
    STATE(372), 1,
      sym_key_value,
    STATE(452), 1,
      sym_key_string,
    STATE(225), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(145), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
  [6527] = 8,
    ACTIONS(823), 1,
      sym_comment,
    ACTIONS(902), 1,
      anon_sym_BSLASH,
    ACTIONS(904), 1,
      sym_filename_text,
    ACTIONS(906), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(916), 1,
      anon_sym_SEMI,
    STATE(492), 1,
      sym_filename,
    STATE(234), 2,
      sym_filename_escaped_char,
      aux_sym_filename_content_repeat1,
    STATE(167), 3,
      sym_filename_content,
      sym_template,
      aux_sym_filename_repeat1,
  [6555] = 7,
    ACTIONS(823), 1,
      sym_comment,
    ACTIONS(908), 1,
      anon_sym_BSLASH,
    ACTIONS(912), 1,
      aux_sym_oneline_string_text_token1,
    ACTIONS(914), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(918), 1,
      anon_sym_BQUOTE,
    STATE(144), 3,
      sym_oneline_string_content,
      sym_template,
      aux_sym_oneline_string_repeat1,
    STATE(213), 3,
      sym_oneline_string_text,
      sym_oneline_string_escaped_char,
      aux_sym_oneline_string_content_repeat1,
  [6581] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(920), 1,
      anon_sym_COLON,
    ACTIONS(922), 1,
      anon_sym_COLON2,
    ACTIONS(924), 1,
      sym_key_string_text,
    ACTIONS(927), 1,
      anon_sym_BSLASH2,
    ACTIONS(930), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(225), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(151), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
  [6609] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(43), 1,
      anon_sym_BSLASH2,
    ACTIONS(302), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(805), 1,
      sym_key_string_text,
    STATE(452), 1,
      sym_key_string,
    STATE(468), 1,
      sym_key_value,
    STATE(225), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(145), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
  [6637] = 6,
    ACTIONS(807), 1,
      anon_sym_BSLASH,
    ACTIONS(809), 1,
      sym_filename_text,
    ACTIONS(811), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(933), 2,
      anon_sym_LF,
      sym_comment,
    STATE(238), 2,
      sym_filename_escaped_char,
      aux_sym_filename_content_repeat1,
    STATE(156), 3,
      sym_filename_content,
      sym_template,
      aux_sym_filename_repeat1,
  [6660] = 7,
    ACTIONS(823), 1,
      sym_comment,
    ACTIONS(935), 1,
      anon_sym_DQUOTE,
    ACTIONS(937), 1,
      anon_sym_BSLASH,
    ACTIONS(939), 1,
      aux_sym_json_string_text_token1,
    ACTIONS(941), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(303), 2,
      sym_json_string_text,
      sym_json_string_escaped_char,
    STATE(158), 3,
      sym_json_string_content,
      sym_template,
      aux_sym_json_string_repeat1,
  [6685] = 7,
    ACTIONS(823), 1,
      sym_comment,
    ACTIONS(937), 1,
      anon_sym_BSLASH,
    ACTIONS(939), 1,
      aux_sym_json_string_text_token1,
    ACTIONS(941), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(943), 1,
      anon_sym_DQUOTE,
    STATE(303), 2,
      sym_json_string_text,
      sym_json_string_escaped_char,
    STATE(158), 3,
      sym_json_string_content,
      sym_template,
      aux_sym_json_string_repeat1,
  [6710] = 6,
    ACTIONS(947), 1,
      anon_sym_BSLASH,
    ACTIONS(950), 1,
      sym_filename_text,
    ACTIONS(953), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(945), 2,
      anon_sym_LF,
      sym_comment,
    STATE(238), 2,
      sym_filename_escaped_char,
      aux_sym_filename_content_repeat1,
    STATE(156), 3,
      sym_filename_content,
      sym_template,
      aux_sym_filename_repeat1,
  [6733] = 7,
    ACTIONS(823), 1,
      sym_comment,
    ACTIONS(945), 1,
      anon_sym_SEMI,
    ACTIONS(956), 1,
      anon_sym_BSLASH,
    ACTIONS(959), 1,
      sym_filename_text,
    ACTIONS(962), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(234), 2,
      sym_filename_escaped_char,
      aux_sym_filename_content_repeat1,
    STATE(157), 3,
      sym_filename_content,
      sym_template,
      aux_sym_filename_repeat1,
  [6758] = 7,
    ACTIONS(823), 1,
      sym_comment,
    ACTIONS(965), 1,
      anon_sym_DQUOTE,
    ACTIONS(967), 1,
      anon_sym_BSLASH,
    ACTIONS(970), 1,
      aux_sym_json_string_text_token1,
    ACTIONS(973), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(303), 2,
      sym_json_string_text,
      sym_json_string_escaped_char,
    STATE(158), 3,
      sym_json_string_content,
      sym_template,
      aux_sym_json_string_repeat1,
  [6783] = 7,
    ACTIONS(53), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(722), 1,
      anon_sym_BSLASH2,
    ACTIONS(896), 1,
      anon_sym_LF,
    ACTIONS(898), 1,
      sym_comment,
    ACTIONS(976), 1,
      sym_key_string_text,
    STATE(231), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(166), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
  [6808] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(752), 1,
      aux_sym_digit_token1,
    STATE(163), 2,
      sym_digit,
      aux_sym_integer_repeat1,
    ACTIONS(978), 6,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DOT,
      anon_sym_e,
      anon_sym_E,
  [6827] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(469), 1,
      anon_sym_BSLASH2,
    ACTIONS(471), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(896), 1,
      anon_sym_COLON2,
    ACTIONS(980), 1,
      sym_key_string_text,
    STATE(237), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(168), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
  [6852] = 4,
    ACTIONS(823), 1,
      sym_comment,
    ACTIONS(984), 1,
      aux_sym_invalid_quoted_string_escaped_char_token1,
    ACTIONS(986), 1,
      anon_sym_u,
    ACTIONS(982), 7,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
      anon_sym_b,
      anon_sym_f,
      anon_sym_n,
      anon_sym_r,
      anon_sym_t,
  [6871] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(990), 1,
      aux_sym_digit_token1,
    STATE(163), 2,
      sym_digit,
      aux_sym_integer_repeat1,
    ACTIONS(988), 6,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DOT,
      anon_sym_e,
      anon_sym_E,
  [6890] = 7,
    ACTIONS(823), 1,
      sym_comment,
    ACTIONS(937), 1,
      anon_sym_BSLASH,
    ACTIONS(939), 1,
      aux_sym_json_string_text_token1,
    ACTIONS(941), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(993), 1,
      anon_sym_DQUOTE,
    STATE(303), 2,
      sym_json_string_text,
      sym_json_string_escaped_char,
    STATE(154), 3,
      sym_json_string_content,
      sym_template,
      aux_sym_json_string_repeat1,
  [6915] = 7,
    ACTIONS(823), 1,
      sym_comment,
    ACTIONS(937), 1,
      anon_sym_BSLASH,
    ACTIONS(939), 1,
      aux_sym_json_string_text_token1,
    ACTIONS(941), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(995), 1,
      anon_sym_DQUOTE,
    STATE(303), 2,
      sym_json_string_text,
      sym_json_string_escaped_char,
    STATE(155), 3,
      sym_json_string_content,
      sym_template,
      aux_sym_json_string_repeat1,
  [6940] = 7,
    ACTIONS(920), 1,
      anon_sym_LF,
    ACTIONS(922), 1,
      sym_comment,
    ACTIONS(997), 1,
      sym_key_string_text,
    ACTIONS(1000), 1,
      anon_sym_BSLASH2,
    ACTIONS(1003), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(231), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(166), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
  [6965] = 7,
    ACTIONS(823), 1,
      sym_comment,
    ACTIONS(902), 1,
      anon_sym_BSLASH,
    ACTIONS(904), 1,
      sym_filename_text,
    ACTIONS(906), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(933), 1,
      anon_sym_SEMI,
    STATE(234), 2,
      sym_filename_escaped_char,
      aux_sym_filename_content_repeat1,
    STATE(157), 3,
      sym_filename_content,
      sym_template,
      aux_sym_filename_repeat1,
  [6990] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(920), 1,
      anon_sym_COLON2,
    ACTIONS(1006), 1,
      sym_key_string_text,
    ACTIONS(1009), 1,
      anon_sym_BSLASH2,
    ACTIONS(1012), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(237), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(168), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
  [7015] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1015), 9,
      anon_sym_EQ,
      anon_sym_regex,
      anon_sym_RBRACE_RBRACE,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
  [7030] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1019), 1,
      anon_sym_DOT,
    STATE(240), 1,
      sym_fraction,
    STATE(393), 1,
      sym_exponent,
    ACTIONS(1021), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(1017), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [7052] = 2,
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
  [7066] = 6,
    ACTIONS(1025), 1,
      anon_sym_BSLASH,
    ACTIONS(1028), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(1031), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(248), 1,
      aux_sym_value_string_text_repeat1,
    ACTIONS(1023), 2,
      anon_sym_LF,
      sym_comment,
    STATE(172), 3,
      sym_value_string_text,
      sym_value_string_escaped_char,
      aux_sym_value_string_content_repeat1,
  [7088] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1035), 1,
      anon_sym_u,
    ACTIONS(1037), 1,
      anon_sym_POUND,
    ACTIONS(1033), 6,
      anon_sym_BSLASH,
      anon_sym_b,
      anon_sym_f,
      anon_sym_n,
      anon_sym_r,
      anon_sym_t,
  [7106] = 5,
    ACTIONS(823), 1,
      sym_comment,
    ACTIONS(1044), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(174), 1,
      aux_sym__multiline_string_text_repeat1,
    ACTIONS(1041), 2,
      anon_sym_BQUOTE,
      anon_sym_LBRACE,
    ACTIONS(1039), 4,
      anon_sym_LF,
      anon_sym_BSLASH,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      aux_sym__multiline_string_text_token1,
  [7126] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1048), 1,
      anon_sym_u,
    ACTIONS(1046), 7,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
      anon_sym_b,
      anon_sym_f,
      anon_sym_n,
      anon_sym_r,
      anon_sym_t,
  [7142] = 5,
    ACTIONS(823), 1,
      sym_comment,
    ACTIONS(1052), 1,
      aux_sym_quoted_string_text_token1,
    ACTIONS(1055), 1,
      anon_sym_BSLASH,
    ACTIONS(1050), 2,
      anon_sym_DQUOTE,
      anon_sym_LBRACE_LBRACE,
    STATE(176), 4,
      sym_quoted_string_text,
      sym_invalid_quoted_string_escaped_char,
      sym_quoted_string_escaped_char,
      aux_sym_quoted_string_content_repeat1,
  [7162] = 2,
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
  [7176] = 5,
    ACTIONS(817), 1,
      aux_sym_quoted_string_text_token1,
    ACTIONS(819), 1,
      anon_sym_BSLASH,
    ACTIONS(823), 1,
      sym_comment,
    ACTIONS(1058), 2,
      anon_sym_DQUOTE,
      anon_sym_LBRACE_LBRACE,
    STATE(176), 4,
      sym_quoted_string_text,
      sym_invalid_quoted_string_escaped_char,
      sym_quoted_string_escaped_char,
      aux_sym_quoted_string_content_repeat1,
  [7196] = 2,
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
  [7210] = 2,
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
  [7224] = 2,
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
  [7238] = 2,
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
  [7252] = 2,
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
  [7266] = 2,
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
  [7280] = 2,
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
  [7294] = 2,
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
  [7308] = 6,
    ACTIONS(726), 1,
      anon_sym_BSLASH,
    ACTIONS(728), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(1062), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(248), 1,
      aux_sym_value_string_text_repeat1,
    ACTIONS(1060), 2,
      anon_sym_LF,
      sym_comment,
    STATE(172), 3,
      sym_value_string_text,
      sym_value_string_escaped_char,
      aux_sym_value_string_content_repeat1,
  [7330] = 2,
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
  [7344] = 2,
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
  [7358] = 2,
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
  [7372] = 2,
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
  [7386] = 2,
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
  [7400] = 2,
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
  [7414] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1066), 1,
      anon_sym_u,
    ACTIONS(1064), 7,
      anon_sym_BSLASH,
      anon_sym_b,
      anon_sym_f,
      anon_sym_n,
      anon_sym_r,
      anon_sym_t,
      anon_sym_BQUOTE,
  [7430] = 2,
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
  [7444] = 5,
    ACTIONS(823), 1,
      sym_comment,
    ACTIONS(1072), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(202), 1,
      aux_sym__multiline_string_text_repeat1,
    ACTIONS(1070), 2,
      anon_sym_BQUOTE,
      anon_sym_LBRACE,
    ACTIONS(1068), 4,
      anon_sym_LF,
      anon_sym_BSLASH,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      aux_sym__multiline_string_text_token1,
  [7464] = 2,
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
  [7478] = 7,
    ACTIONS(823), 1,
      sym_comment,
    ACTIONS(840), 1,
      anon_sym_BSLASH,
    ACTIONS(844), 1,
      aux_sym__multiline_string_text_token1,
    ACTIONS(1074), 1,
      anon_sym_LF,
    ACTIONS(1076), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(1078), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(200), 3,
      sym__multiline_string_text,
      sym_multiline_string_escaped_char,
      aux_sym_multiline_string_content_repeat1,
  [7502] = 2,
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
  [7516] = 7,
    ACTIONS(823), 1,
      sym_comment,
    ACTIONS(1080), 1,
      anon_sym_LF,
    ACTIONS(1083), 1,
      anon_sym_BSLASH,
    ACTIONS(1086), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(1088), 1,
      aux_sym__multiline_string_text_token1,
    ACTIONS(1091), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(200), 3,
      sym__multiline_string_text,
      sym_multiline_string_escaped_char,
      aux_sym_multiline_string_content_repeat1,
  [7540] = 2,
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
  [7554] = 5,
    ACTIONS(823), 1,
      sym_comment,
    ACTIONS(1097), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(174), 1,
      aux_sym__multiline_string_text_repeat1,
    ACTIONS(1095), 2,
      anon_sym_BQUOTE,
      anon_sym_LBRACE,
    ACTIONS(1093), 4,
      anon_sym_LF,
      anon_sym_BSLASH,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      aux_sym__multiline_string_text_token1,
  [7574] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(752), 1,
      aux_sym_digit_token1,
    STATE(163), 2,
      sym_digit,
      aux_sym_integer_repeat1,
    ACTIONS(1099), 5,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_e,
      anon_sym_E,
  [7592] = 2,
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
  [7606] = 2,
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
  [7620] = 2,
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
  [7634] = 2,
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
  [7648] = 2,
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
  [7662] = 2,
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
  [7676] = 6,
    ACTIONS(823), 1,
      sym_comment,
    ACTIONS(1101), 1,
      anon_sym_BSLASH,
    ACTIONS(1104), 1,
      anon_sym_BQUOTE,
    ACTIONS(1106), 1,
      aux_sym_oneline_string_text_token1,
    ACTIONS(1109), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(210), 3,
      sym_oneline_string_text,
      sym_oneline_string_escaped_char,
      aux_sym_oneline_string_content_repeat1,
  [7697] = 6,
    ACTIONS(823), 1,
      sym_comment,
    ACTIONS(1111), 1,
      anon_sym_BSLASH,
    ACTIONS(1113), 1,
      anon_sym_SLASH,
    ACTIONS(1115), 1,
      aux_sym_regex_text_token1,
    STATE(470), 1,
      sym_regex_content,
    STATE(239), 3,
      sym_regex_text,
      sym_regex_escaped_char,
      aux_sym_regex_content_repeat1,
  [7718] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1117), 7,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      aux_sym_digit_token1,
      anon_sym_DOT,
      anon_sym_e,
      anon_sym_E,
  [7731] = 4,
    ACTIONS(823), 1,
      sym_comment,
    ACTIONS(1121), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1119), 3,
      anon_sym_BSLASH,
      anon_sym_BQUOTE,
      aux_sym_oneline_string_text_token1,
    STATE(210), 3,
      sym_oneline_string_text,
      sym_oneline_string_escaped_char,
      aux_sym_oneline_string_content_repeat1,
  [7748] = 4,
    ACTIONS(988), 1,
      anon_sym_LF,
    ACTIONS(1123), 1,
      aux_sym_digit_token1,
    STATE(214), 2,
      sym_digit,
      aux_sym_integer_repeat1,
    ACTIONS(1126), 4,
      anon_sym_DOT,
      anon_sym_e,
      anon_sym_E,
      sym_comment,
  [7765] = 4,
    ACTIONS(823), 1,
      sym_comment,
    ACTIONS(1128), 1,
      anon_sym_LF,
    STATE(544), 1,
      sym_multiline_string_type,
    ACTIONS(1130), 5,
      anon_sym_base64,
      anon_sym_hex,
      anon_sym_json,
      anon_sym_xml,
      anon_sym_graphql,
  [7782] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(740), 1,
      anon_sym_DQUOTE,
    ACTIONS(1132), 1,
      anon_sym_RBRACE,
    ACTIONS(1134), 1,
      anon_sym_COMMA,
    STATE(391), 1,
      aux_sym_json_object_repeat1,
    STATE(404), 1,
      sym_json_key_value,
    STATE(538), 1,
      sym_json_string,
    STATE(539), 1,
      sym_json_key_string,
  [7807] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(740), 1,
      anon_sym_DQUOTE,
    ACTIONS(1134), 1,
      anon_sym_COMMA,
    ACTIONS(1136), 1,
      anon_sym_RBRACE,
    STATE(352), 1,
      aux_sym_json_object_repeat1,
    STATE(354), 1,
      sym_json_key_value,
    STATE(538), 1,
      sym_json_string,
    STATE(539), 1,
      sym_json_key_string,
  [7832] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(699), 1,
      anon_sym_DQUOTE,
    ACTIONS(707), 1,
      aux_sym_digit_token1,
    STATE(383), 1,
      sym_integer,
    STATE(224), 2,
      sym_digit,
      aux_sym_integer_repeat1,
    STATE(459), 2,
      sym_quoted_string,
      sym_float,
  [7853] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(699), 1,
      anon_sym_DQUOTE,
    ACTIONS(707), 1,
      aux_sym_digit_token1,
    STATE(385), 1,
      sym_integer,
    STATE(224), 2,
      sym_digit,
      aux_sym_integer_repeat1,
    STATE(458), 2,
      sym_quoted_string,
      sym_float,
  [7874] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(699), 1,
      anon_sym_DQUOTE,
    ACTIONS(707), 1,
      aux_sym_digit_token1,
    STATE(387), 1,
      sym_integer,
    STATE(224), 2,
      sym_digit,
      aux_sym_integer_repeat1,
    STATE(457), 2,
      sym_quoted_string,
      sym_float,
  [7895] = 6,
    ACTIONS(823), 1,
      sym_comment,
    ACTIONS(1111), 1,
      anon_sym_BSLASH,
    ACTIONS(1115), 1,
      aux_sym_regex_text_token1,
    ACTIONS(1138), 1,
      anon_sym_SLASH,
    STATE(514), 1,
      sym_regex_content,
    STATE(239), 3,
      sym_regex_text,
      sym_regex_escaped_char,
      aux_sym_regex_content_repeat1,
  [7916] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(699), 1,
      anon_sym_DQUOTE,
    ACTIONS(707), 1,
      aux_sym_digit_token1,
    STATE(389), 1,
      sym_integer,
    STATE(224), 2,
      sym_digit,
      aux_sym_integer_repeat1,
    STATE(456), 2,
      sym_quoted_string,
      sym_float,
  [7937] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1142), 1,
      anon_sym_COLON2,
    ACTIONS(1144), 1,
      sym_key_string_text,
    ACTIONS(1147), 1,
      anon_sym_BSLASH2,
    ACTIONS(1140), 2,
      anon_sym_COLON,
      anon_sym_LBRACE_LBRACE,
    STATE(223), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
  [7958] = 4,
    ACTIONS(59), 1,
      aux_sym_digit_token1,
    ACTIONS(978), 1,
      anon_sym_LF,
    STATE(214), 2,
      sym_digit,
      aux_sym_integer_repeat1,
    ACTIONS(1150), 4,
      anon_sym_DOT,
      anon_sym_e,
      anon_sym_E,
      sym_comment,
  [7975] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1154), 1,
      anon_sym_COLON2,
    STATE(223), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    ACTIONS(1152), 4,
      anon_sym_COLON,
      sym_key_string_text,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
  [7992] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(752), 1,
      aux_sym_digit_token1,
    STATE(163), 2,
      sym_digit,
      aux_sym_integer_repeat1,
    ACTIONS(1156), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [8008] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1158), 1,
      sym_key_string_text,
    ACTIONS(1161), 1,
      anon_sym_BSLASH2,
    ACTIONS(1140), 2,
      anon_sym_COLON2,
      anon_sym_LBRACE_LBRACE,
    STATE(227), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
  [8026] = 5,
    ACTIONS(1142), 1,
      sym_comment,
    ACTIONS(1164), 1,
      sym_key_string_text,
    ACTIONS(1167), 1,
      anon_sym_BSLASH2,
    ACTIONS(1140), 2,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    STATE(228), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
  [8044] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(695), 1,
      anon_sym_base64_COMMA,
    ACTIONS(697), 1,
      anon_sym_hex_COMMA,
    ACTIONS(699), 1,
      anon_sym_DQUOTE,
    STATE(454), 3,
      sym_oneline_base64,
      sym_oneline_hex,
      sym_quoted_string,
  [8062] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(695), 1,
      anon_sym_base64_COMMA,
    ACTIONS(697), 1,
      anon_sym_hex_COMMA,
    ACTIONS(699), 1,
      anon_sym_DQUOTE,
    STATE(455), 3,
      sym_oneline_base64,
      sym_oneline_hex,
      sym_quoted_string,
  [8080] = 3,
    ACTIONS(1154), 1,
      sym_comment,
    STATE(228), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    ACTIONS(1152), 4,
      anon_sym_LF,
      sym_key_string_text,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
  [8094] = 4,
    ACTIONS(59), 1,
      aux_sym_digit_token1,
    ACTIONS(1099), 1,
      anon_sym_LF,
    STATE(214), 2,
      sym_digit,
      aux_sym_integer_repeat1,
    ACTIONS(1170), 3,
      anon_sym_e,
      anon_sym_E,
      sym_comment,
  [8110] = 5,
    ACTIONS(823), 1,
      sym_comment,
    ACTIONS(1174), 1,
      anon_sym_BSLASH,
    ACTIONS(1177), 1,
      sym_filename_text,
    ACTIONS(1172), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE_LBRACE,
    STATE(233), 2,
      sym_filename_escaped_char,
      aux_sym_filename_content_repeat1,
  [8128] = 3,
    ACTIONS(823), 1,
      sym_comment,
    STATE(233), 2,
      sym_filename_escaped_char,
      aux_sym_filename_content_repeat1,
    ACTIONS(1180), 4,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      sym_filename_text,
      anon_sym_LBRACE_LBRACE,
  [8142] = 5,
    ACTIONS(823), 1,
      sym_comment,
    ACTIONS(1182), 1,
      anon_sym_BSLASH,
    ACTIONS(1185), 1,
      anon_sym_SLASH,
    ACTIONS(1187), 1,
      aux_sym_regex_text_token1,
    STATE(235), 3,
      sym_regex_text,
      sym_regex_escaped_char,
      aux_sym_regex_content_repeat1,
  [8160] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1192), 1,
      anon_sym_u,
    ACTIONS(1194), 1,
      anon_sym_POUND,
    ACTIONS(1190), 4,
      anon_sym_BSLASH,
      anon_sym_b,
      anon_sym_f,
      anon_sym_BQUOTE,
  [8176] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(227), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    ACTIONS(1152), 4,
      anon_sym_COLON2,
      sym_key_string_text,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
  [8190] = 2,
    STATE(241), 2,
      sym_filename_escaped_char,
      aux_sym_filename_content_repeat1,
    ACTIONS(1180), 5,
      anon_sym_LF,
      anon_sym_BSLASH,
      sym_filename_text,
      anon_sym_LBRACE_LBRACE,
      sym_comment,
  [8202] = 5,
    ACTIONS(823), 1,
      sym_comment,
    ACTIONS(1111), 1,
      anon_sym_BSLASH,
    ACTIONS(1115), 1,
      aux_sym_regex_text_token1,
    ACTIONS(1196), 1,
      anon_sym_SLASH,
    STATE(235), 3,
      sym_regex_text,
      sym_regex_escaped_char,
      aux_sym_regex_content_repeat1,
  [8220] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(381), 1,
      sym_exponent,
    ACTIONS(1021), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(1198), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [8236] = 4,
    ACTIONS(1200), 1,
      anon_sym_BSLASH,
    ACTIONS(1203), 1,
      sym_filename_text,
    STATE(241), 2,
      sym_filename_escaped_char,
      aux_sym_filename_content_repeat1,
    ACTIONS(1172), 3,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
      sym_comment,
  [8252] = 6,
    ACTIONS(1017), 1,
      anon_sym_LF,
    ACTIONS(1206), 1,
      anon_sym_DOT,
    ACTIONS(1210), 1,
      sym_comment,
    STATE(272), 1,
      sym_fraction,
    STATE(495), 1,
      sym_exponent,
    ACTIONS(1208), 2,
      anon_sym_e,
      anon_sym_E,
  [8272] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(752), 1,
      aux_sym_digit_token1,
    STATE(163), 2,
      sym_digit,
      aux_sym_integer_repeat1,
    ACTIONS(1212), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [8288] = 3,
    ACTIONS(1214), 1,
      anon_sym_LF,
    ACTIONS(1218), 1,
      sym_comment,
    ACTIONS(1216), 4,
      anon_sym_COLON,
      sym_key_string_text,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
  [8301] = 4,
    ACTIONS(1220), 1,
      anon_sym_LF,
    ACTIONS(1223), 1,
      sym_comment,
    STATE(245), 1,
      aux_sym__comment_or_new_line_repeat1,
    ACTIONS(75), 3,
      sym_key_string_text,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
  [8316] = 5,
    ACTIONS(7), 1,
      anon_sym_LF,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(691), 1,
      ts_builtin_sym_end,
    STATE(11), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(262), 2,
      sym__comment_or_new_line,
      aux_sym_hurl_file_repeat2,
  [8333] = 4,
    ACTIONS(1228), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(1231), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(247), 1,
      aux_sym_value_string_text_repeat1,
    ACTIONS(1226), 3,
      anon_sym_LF,
      anon_sym_BSLASH,
      sym_comment,
  [8348] = 4,
    ACTIONS(1235), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(1237), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(247), 1,
      aux_sym_value_string_text_repeat1,
    ACTIONS(1233), 3,
      anon_sym_LF,
      anon_sym_BSLASH,
      sym_comment,
  [8363] = 4,
    ACTIONS(823), 1,
      sym_comment,
    ACTIONS(1241), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(1243), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1239), 3,
      anon_sym_LF,
      anon_sym_BSLASH,
      aux_sym__multiline_string_text_token1,
  [8378] = 3,
    ACTIONS(823), 1,
      sym_comment,
    ACTIONS(1247), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1245), 4,
      anon_sym_LF,
      anon_sym_BSLASH,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      aux_sym__multiline_string_text_token1,
  [8391] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1251), 1,
      anon_sym_COLON2,
    ACTIONS(1249), 4,
      anon_sym_COLON,
      sym_key_string_text,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
  [8404] = 3,
    ACTIONS(823), 1,
      sym_comment,
    ACTIONS(1255), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1253), 4,
      anon_sym_LF,
      anon_sym_BSLASH,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      aux_sym__multiline_string_text_token1,
  [8417] = 2,
    ACTIONS(1117), 1,
      anon_sym_LF,
    ACTIONS(1257), 5,
      aux_sym_digit_token1,
      anon_sym_DOT,
      anon_sym_e,
      anon_sym_E,
      sym_comment,
  [8428] = 3,
    ACTIONS(823), 1,
      sym_comment,
    ACTIONS(1261), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1259), 4,
      anon_sym_LF,
      anon_sym_BSLASH,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      aux_sym__multiline_string_text_token1,
  [8441] = 2,
    ACTIONS(1259), 1,
      sym_comment,
    ACTIONS(1261), 5,
      anon_sym_LF,
      anon_sym_COLON,
      sym_key_string_text,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
  [8452] = 4,
    ACTIONS(1263), 1,
      anon_sym_LF,
    ACTIONS(1265), 1,
      sym_comment,
    STATE(245), 1,
      aux_sym__comment_or_new_line_repeat1,
    ACTIONS(93), 3,
      sym_key_string_text,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
  [8467] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1259), 1,
      anon_sym_COLON2,
    ACTIONS(1261), 4,
      anon_sym_COLON,
      sym_key_string_text,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
  [8480] = 5,
    ACTIONS(7), 1,
      anon_sym_LF,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1267), 1,
      ts_builtin_sym_end,
    STATE(11), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(262), 2,
      sym__comment_or_new_line,
      aux_sym_hurl_file_repeat2,
  [8497] = 4,
    ACTIONS(823), 1,
      sym_comment,
    ACTIONS(842), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(1243), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1239), 3,
      anon_sym_LF,
      anon_sym_BSLASH,
      aux_sym__multiline_string_text_token1,
  [8512] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(752), 1,
      aux_sym_digit_token1,
    ACTIONS(1269), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(243), 2,
      sym_digit,
      aux_sym_integer_repeat1,
  [8527] = 3,
    ACTIONS(823), 1,
      sym_comment,
    ACTIONS(1273), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1271), 4,
      anon_sym_LF,
      anon_sym_BSLASH,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      aux_sym__multiline_string_text_token1,
  [8540] = 5,
    ACTIONS(431), 1,
      ts_builtin_sym_end,
    ACTIONS(1275), 1,
      anon_sym_LF,
    ACTIONS(1278), 1,
      sym_comment,
    STATE(11), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(262), 2,
      sym__comment_or_new_line,
      aux_sym_hurl_file_repeat2,
  [8557] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(707), 1,
      aux_sym_digit_token1,
    ACTIONS(1281), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(317), 2,
      sym_digit,
      aux_sym_integer_repeat1,
  [8572] = 4,
    ACTIONS(823), 1,
      sym_comment,
    ACTIONS(883), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(1243), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1239), 3,
      anon_sym_LF,
      anon_sym_BSLASH,
      aux_sym__multiline_string_text_token1,
  [8587] = 5,
    ACTIONS(15), 1,
      anon_sym_LF,
    ACTIONS(61), 1,
      sym_comment,
    STATE(39), 1,
      sym__comment_or_new_line,
    STATE(52), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(323), 1,
      aux_sym_query_string_params_section_repeat1,
  [8603] = 2,
    ACTIONS(823), 1,
      sym_comment,
    ACTIONS(1259), 4,
      anon_sym_DQUOTE,
      aux_sym_quoted_string_text_token1,
      anon_sym_BSLASH,
      anon_sym_LBRACE_LBRACE,
  [8613] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1283), 4,
      anon_sym_COLON2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [8623] = 3,
    ACTIONS(823), 1,
      sym_comment,
    ACTIONS(1287), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1285), 3,
      anon_sym_BSLASH,
      anon_sym_BQUOTE,
      aux_sym_oneline_string_text_token1,
  [8635] = 1,
    ACTIONS(1289), 5,
      anon_sym_LF,
      anon_sym_BSLASH,
      sym_filename_text,
      anon_sym_LBRACE_LBRACE,
      sym_comment,
  [8643] = 5,
    ACTIONS(15), 1,
      anon_sym_LF,
    ACTIONS(61), 1,
      sym_comment,
    STATE(42), 1,
      sym__comment_or_new_line,
    STATE(52), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(323), 1,
      aux_sym_query_string_params_section_repeat1,
  [8659] = 3,
    ACTIONS(823), 1,
      sym_comment,
    ACTIONS(1261), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1259), 3,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
      aux_sym_json_string_text_token1,
  [8671] = 4,
    ACTIONS(1198), 1,
      anon_sym_LF,
    ACTIONS(1291), 1,
      sym_comment,
    STATE(480), 1,
      sym_exponent,
    ACTIONS(1208), 2,
      anon_sym_e,
      anon_sym_E,
  [8685] = 2,
    ACTIONS(1295), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1293), 4,
      anon_sym_LF,
      anon_sym_BSLASH,
      aux_sym_value_string_text_token1,
      sym_comment,
  [8695] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1249), 4,
      anon_sym_COLON2,
      sym_key_string_text,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
  [8705] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1297), 4,
      anon_sym_COLON2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [8715] = 4,
    ACTIONS(59), 1,
      aux_sym_digit_token1,
    ACTIONS(1156), 1,
      anon_sym_LF,
    ACTIONS(1299), 1,
      sym_comment,
    STATE(214), 2,
      sym_digit,
      aux_sym_integer_repeat1,
  [8729] = 3,
    ACTIONS(823), 1,
      sym_comment,
    ACTIONS(1303), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1301), 3,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
      aux_sym_json_string_text_token1,
  [8741] = 2,
    ACTIONS(1251), 1,
      sym_comment,
    ACTIONS(1249), 4,
      anon_sym_LF,
      sym_key_string_text,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
  [8751] = 2,
    ACTIONS(823), 1,
      sym_comment,
    ACTIONS(1253), 4,
      anon_sym_DQUOTE,
      aux_sym_quoted_string_text_token1,
      anon_sym_BSLASH,
      anon_sym_LBRACE_LBRACE,
  [8761] = 5,
    ACTIONS(15), 1,
      anon_sym_LF,
    ACTIONS(61), 1,
      sym_comment,
    STATE(42), 1,
      sym__comment_or_new_line,
    STATE(52), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(307), 1,
      aux_sym_query_string_params_section_repeat1,
  [8777] = 5,
    ACTIONS(15), 1,
      anon_sym_LF,
    ACTIONS(61), 1,
      sym_comment,
    STATE(47), 1,
      sym__comment_or_new_line,
    STATE(52), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(323), 1,
      aux_sym_query_string_params_section_repeat1,
  [8793] = 3,
    ACTIONS(823), 1,
      sym_comment,
    ACTIONS(1261), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1259), 3,
      anon_sym_BSLASH,
      anon_sym_BQUOTE,
      aux_sym_oneline_string_text_token1,
  [8805] = 5,
    ACTIONS(15), 1,
      anon_sym_LF,
    ACTIONS(61), 1,
      sym_comment,
    STATE(26), 1,
      sym__comment_or_new_line,
    STATE(52), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(309), 1,
      aux_sym_multipart_form_data_section_repeat1,
  [8821] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1305), 1,
      anon_sym_DQUOTE,
    ACTIONS(1307), 1,
      anon_sym_SLASH,
    STATE(85), 2,
      sym_quoted_string,
      sym_regex,
  [8835] = 5,
    ACTIONS(15), 1,
      anon_sym_LF,
    ACTIONS(61), 1,
      sym_comment,
    STATE(39), 1,
      sym__comment_or_new_line,
    STATE(52), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(291), 1,
      aux_sym_query_string_params_section_repeat1,
  [8851] = 3,
    ACTIONS(823), 1,
      sym_comment,
    ACTIONS(1311), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1309), 3,
      anon_sym_BSLASH,
      anon_sym_BQUOTE,
      aux_sym_oneline_string_text_token1,
  [8863] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(740), 1,
      anon_sym_DQUOTE,
    STATE(445), 1,
      sym_json_key_value,
    STATE(538), 1,
      sym_json_string,
    STATE(539), 1,
      sym_json_key_string,
  [8879] = 2,
    ACTIONS(1315), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1313), 4,
      anon_sym_LF,
      anon_sym_BSLASH,
      aux_sym_value_string_text_token1,
      sym_comment,
  [8889] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1317), 1,
      anon_sym_SEMI,
    ACTIONS(1319), 1,
      aux_sym_hexdigit_token1,
    STATE(306), 2,
      sym_hexdigit,
      aux_sym_oneline_hex_repeat1,
  [8903] = 3,
    ACTIONS(823), 1,
      sym_comment,
    ACTIONS(1323), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1321), 3,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
      aux_sym_json_string_text_token1,
  [8915] = 5,
    ACTIONS(15), 1,
      anon_sym_LF,
    ACTIONS(61), 1,
      sym_comment,
    STATE(40), 1,
      sym__comment_or_new_line,
    STATE(52), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(323), 1,
      aux_sym_query_string_params_section_repeat1,
  [8931] = 2,
    ACTIONS(1255), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1253), 4,
      anon_sym_LF,
      anon_sym_BSLASH,
      aux_sym_value_string_text_token1,
      sym_comment,
  [8941] = 2,
    ACTIONS(823), 1,
      sym_comment,
    ACTIONS(1325), 4,
      anon_sym_DQUOTE,
      aux_sym_quoted_string_text_token1,
      anon_sym_BSLASH,
      anon_sym_LBRACE_LBRACE,
  [8951] = 2,
    ACTIONS(823), 1,
      sym_comment,
    ACTIONS(1327), 4,
      anon_sym_DQUOTE,
      aux_sym_quoted_string_text_token1,
      anon_sym_BSLASH,
      anon_sym_LBRACE_LBRACE,
  [8961] = 3,
    ACTIONS(823), 1,
      sym_comment,
    ACTIONS(1331), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1329), 3,
      anon_sym_BSLASH,
      anon_sym_BQUOTE,
      aux_sym_oneline_string_text_token1,
  [8973] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(707), 1,
      aux_sym_digit_token1,
    STATE(340), 1,
      sym_integer,
    STATE(224), 2,
      sym_digit,
      aux_sym_integer_repeat1,
  [8987] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(707), 1,
      aux_sym_digit_token1,
    STATE(339), 1,
      sym_integer,
    STATE(224), 2,
      sym_digit,
      aux_sym_integer_repeat1,
  [9001] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1261), 4,
      anon_sym_COLON2,
      sym_key_string_text,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
  [9011] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(699), 1,
      anon_sym_DQUOTE,
    ACTIONS(1333), 1,
      anon_sym_SLASH,
    STATE(185), 2,
      sym_quoted_string,
      sym_regex,
  [9025] = 2,
    ACTIONS(823), 1,
      sym_comment,
    ACTIONS(1335), 4,
      anon_sym_DQUOTE,
      aux_sym_quoted_string_text_token1,
      anon_sym_BSLASH,
      anon_sym_LBRACE_LBRACE,
  [9035] = 3,
    ACTIONS(823), 1,
      sym_comment,
    ACTIONS(1255), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1253), 3,
      anon_sym_BSLASH,
      anon_sym_BQUOTE,
      aux_sym_oneline_string_text_token1,
  [9047] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(707), 1,
      aux_sym_digit_token1,
    STATE(337), 1,
      sym_integer,
    STATE(224), 2,
      sym_digit,
      aux_sym_integer_repeat1,
  [9061] = 3,
    ACTIONS(823), 1,
      sym_comment,
    ACTIONS(1339), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1337), 3,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
      aux_sym_json_string_text_token1,
  [9073] = 3,
    ACTIONS(823), 1,
      sym_comment,
    ACTIONS(1343), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1341), 3,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
      aux_sym_json_string_text_token1,
  [9085] = 1,
    ACTIONS(1259), 5,
      anon_sym_LF,
      anon_sym_BSLASH,
      sym_filename_text,
      anon_sym_LBRACE_LBRACE,
      sym_comment,
  [9093] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1319), 1,
      aux_sym_hexdigit_token1,
    ACTIONS(1345), 1,
      anon_sym_SEMI,
    STATE(315), 2,
      sym_hexdigit,
      aux_sym_oneline_hex_repeat1,
  [9107] = 5,
    ACTIONS(15), 1,
      anon_sym_LF,
    ACTIONS(61), 1,
      sym_comment,
    STATE(44), 1,
      sym__comment_or_new_line,
    STATE(52), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(323), 1,
      aux_sym_query_string_params_section_repeat1,
  [9123] = 3,
    ACTIONS(823), 1,
      sym_comment,
    ACTIONS(1349), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1347), 3,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
      aux_sym_json_string_text_token1,
  [9135] = 5,
    ACTIONS(1351), 1,
      anon_sym_LF,
    ACTIONS(1354), 1,
      sym_comment,
    STATE(130), 1,
      sym__comment_or_new_line,
    STATE(256), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(309), 1,
      aux_sym_multipart_form_data_section_repeat1,
  [9151] = 5,
    ACTIONS(15), 1,
      anon_sym_LF,
    ACTIONS(61), 1,
      sym_comment,
    STATE(23), 1,
      sym__comment_or_new_line,
    STATE(52), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(309), 1,
      aux_sym_multipart_form_data_section_repeat1,
  [9167] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1305), 1,
      anon_sym_DQUOTE,
    ACTIONS(1307), 1,
      anon_sym_SLASH,
    STATE(73), 2,
      sym_quoted_string,
      sym_regex,
  [9181] = 2,
    ACTIONS(1261), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1259), 4,
      anon_sym_LF,
      anon_sym_BSLASH,
      aux_sym_value_string_text_token1,
      sym_comment,
  [9191] = 2,
    ACTIONS(1359), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1357), 4,
      anon_sym_LF,
      anon_sym_BSLASH,
      aux_sym_value_string_text_token1,
      sym_comment,
  [9201] = 5,
    ACTIONS(15), 1,
      anon_sym_LF,
    ACTIONS(61), 1,
      sym_comment,
    STATE(41), 1,
      sym__comment_or_new_line,
    STATE(52), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(323), 1,
      aux_sym_query_string_params_section_repeat1,
  [9217] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1361), 1,
      anon_sym_SEMI,
    ACTIONS(1363), 1,
      aux_sym_hexdigit_token1,
    STATE(315), 2,
      sym_hexdigit,
      aux_sym_oneline_hex_repeat1,
  [9231] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(699), 1,
      anon_sym_DQUOTE,
    ACTIONS(1333), 1,
      anon_sym_SLASH,
    STATE(201), 2,
      sym_quoted_string,
      sym_regex,
  [9245] = 4,
    ACTIONS(59), 1,
      aux_sym_digit_token1,
    ACTIONS(1212), 1,
      anon_sym_LF,
    ACTIONS(1366), 1,
      sym_comment,
    STATE(214), 2,
      sym_digit,
      aux_sym_integer_repeat1,
  [9259] = 5,
    ACTIONS(15), 1,
      anon_sym_LF,
    ACTIONS(61), 1,
      sym_comment,
    STATE(26), 1,
      sym__comment_or_new_line,
    STATE(52), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(310), 1,
      aux_sym_multipart_form_data_section_repeat1,
  [9275] = 4,
    ACTIONS(15), 1,
      anon_sym_LF,
    ACTIONS(61), 1,
      sym_comment,
    STATE(52), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(2), 2,
      sym__comment_or_new_line,
      aux_sym_hurl_file_repeat2,
  [9289] = 2,
    ACTIONS(823), 1,
      sym_comment,
    ACTIONS(1259), 4,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      sym_filename_text,
      anon_sym_LBRACE_LBRACE,
  [9299] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(699), 1,
      anon_sym_DQUOTE,
    ACTIONS(1333), 1,
      anon_sym_SLASH,
    STATE(509), 2,
      sym_quoted_string,
      sym_regex,
  [9313] = 2,
    ACTIONS(823), 1,
      sym_comment,
    ACTIONS(1289), 4,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      sym_filename_text,
      anon_sym_LBRACE_LBRACE,
  [9323] = 5,
    ACTIONS(1368), 1,
      anon_sym_LF,
    ACTIONS(1371), 1,
      sym_comment,
    STATE(152), 1,
      sym__comment_or_new_line,
    STATE(256), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(323), 1,
      aux_sym_query_string_params_section_repeat1,
  [9339] = 5,
    ACTIONS(15), 1,
      anon_sym_LF,
    ACTIONS(61), 1,
      sym_comment,
    STATE(47), 1,
      sym__comment_or_new_line,
    STATE(52), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(314), 1,
      aux_sym_query_string_params_section_repeat1,
  [9355] = 2,
    ACTIONS(823), 1,
      sym_comment,
    ACTIONS(1374), 4,
      anon_sym_DQUOTE,
      aux_sym_quoted_string_text_token1,
      anon_sym_BSLASH,
      anon_sym_LBRACE_LBRACE,
  [9365] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1376), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [9374] = 4,
    ACTIONS(1378), 1,
      anon_sym_LF,
    ACTIONS(1380), 1,
      sym_comment,
    STATE(125), 1,
      sym__comment_or_new_line,
    STATE(256), 1,
      aux_sym__comment_or_new_line_repeat1,
  [9387] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1382), 1,
      aux_sym_variable_name_token1,
    STATE(123), 1,
      sym_variable_name,
    STATE(533), 1,
      sym_expr,
  [9400] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1382), 1,
      aux_sym_variable_name_token1,
    STATE(123), 1,
      sym_variable_name,
    STATE(532), 1,
      sym_expr,
  [9413] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1382), 1,
      aux_sym_variable_name_token1,
    STATE(123), 1,
      sym_variable_name,
    STATE(531), 1,
      sym_expr,
  [9426] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1386), 1,
      anon_sym_POUND,
    ACTIONS(1384), 2,
      anon_sym_SEMI,
      aux_sym_filename_escaped_char_token1,
  [9437] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1382), 1,
      aux_sym_variable_name_token1,
    STATE(123), 1,
      sym_variable_name,
    STATE(530), 1,
      sym_expr,
  [9450] = 4,
    ACTIONS(7), 1,
      anon_sym_LF,
    ACTIONS(11), 1,
      sym_comment,
    STATE(11), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(30), 1,
      sym__comment_or_new_line,
  [9463] = 4,
    ACTIONS(7), 1,
      anon_sym_LF,
    ACTIONS(11), 1,
      sym_comment,
    STATE(11), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(31), 1,
      sym__comment_or_new_line,
  [9476] = 4,
    ACTIONS(7), 1,
      anon_sym_LF,
    ACTIONS(11), 1,
      sym_comment,
    STATE(11), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(32), 1,
      sym__comment_or_new_line,
  [9489] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1382), 1,
      aux_sym_variable_name_token1,
    STATE(123), 1,
      sym_variable_name,
    STATE(529), 1,
      sym_expr,
  [9502] = 4,
    ACTIONS(7), 1,
      anon_sym_LF,
    ACTIONS(11), 1,
      sym_comment,
    STATE(11), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(33), 1,
      sym__comment_or_new_line,
  [9515] = 4,
    ACTIONS(7), 1,
      anon_sym_LF,
    ACTIONS(11), 1,
      sym_comment,
    STATE(11), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(28), 1,
      sym__comment_or_new_line,
  [9528] = 4,
    ACTIONS(7), 1,
      anon_sym_LF,
    ACTIONS(11), 1,
      sym_comment,
    STATE(11), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(34), 1,
      sym__comment_or_new_line,
  [9541] = 4,
    ACTIONS(7), 1,
      anon_sym_LF,
    ACTIONS(11), 1,
      sym_comment,
    STATE(11), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(35), 1,
      sym__comment_or_new_line,
  [9554] = 4,
    ACTIONS(7), 1,
      anon_sym_LF,
    ACTIONS(11), 1,
      sym_comment,
    STATE(11), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(36), 1,
      sym__comment_or_new_line,
  [9567] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1382), 1,
      aux_sym_variable_name_token1,
    STATE(123), 1,
      sym_variable_name,
    STATE(528), 1,
      sym_expr,
  [9580] = 4,
    ACTIONS(7), 1,
      anon_sym_LF,
    ACTIONS(11), 1,
      sym_comment,
    STATE(11), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(27), 1,
      sym__comment_or_new_line,
  [9593] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1382), 1,
      aux_sym_variable_name_token1,
    STATE(123), 1,
      sym_variable_name,
    STATE(527), 1,
      sym_expr,
  [9606] = 4,
    ACTIONS(7), 1,
      anon_sym_LF,
    ACTIONS(11), 1,
      sym_comment,
    STATE(11), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(37), 1,
      sym__comment_or_new_line,
  [9619] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1382), 1,
      aux_sym_variable_name_token1,
    STATE(123), 1,
      sym_variable_name,
    STATE(525), 1,
      sym_expr,
  [9632] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1382), 1,
      aux_sym_variable_name_token1,
    STATE(123), 1,
      sym_variable_name,
    STATE(522), 1,
      sym_expr,
  [9645] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1382), 1,
      aux_sym_variable_name_token1,
    STATE(123), 1,
      sym_variable_name,
    STATE(498), 1,
      sym_expr,
  [9658] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1388), 1,
      anon_sym_COMMA,
    ACTIONS(1390), 1,
      anon_sym_RBRACK,
    STATE(406), 1,
      aux_sym_json_array_repeat1,
  [9671] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1134), 1,
      anon_sym_COMMA,
    ACTIONS(1392), 1,
      anon_sym_RBRACE,
    STATE(362), 1,
      aux_sym_json_object_repeat1,
  [9684] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1388), 1,
      anon_sym_COMMA,
    ACTIONS(1394), 1,
      anon_sym_RBRACK,
    STATE(349), 1,
      aux_sym_json_array_repeat1,
  [9697] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1134), 1,
      anon_sym_COMMA,
    ACTIONS(1396), 1,
      anon_sym_RBRACE,
    STATE(362), 1,
      aux_sym_json_object_repeat1,
  [9710] = 4,
    ACTIONS(7), 1,
      anon_sym_LF,
    ACTIONS(11), 1,
      sym_comment,
    STATE(11), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(50), 1,
      sym__comment_or_new_line,
  [9723] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1134), 1,
      anon_sym_COMMA,
    ACTIONS(1396), 1,
      anon_sym_RBRACE,
    STATE(350), 1,
      aux_sym_json_object_repeat1,
  [9736] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(392), 1,
      sym_status,
    ACTIONS(1398), 2,
      aux_sym_status_token1,
      anon_sym_STAR,
  [9747] = 4,
    ACTIONS(1378), 1,
      anon_sym_LF,
    ACTIONS(1380), 1,
      sym_comment,
    STATE(256), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(489), 1,
      sym__comment_or_new_line,
  [9760] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1402), 1,
      anon_sym_POUND,
    ACTIONS(1400), 2,
      anon_sym_SEMI,
      aux_sym_filename_escaped_char_token1,
  [9771] = 4,
    ACTIONS(754), 1,
      anon_sym_LF,
    ACTIONS(770), 1,
      sym_comment,
    STATE(65), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(67), 1,
      sym__comment_or_new_line,
  [9784] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1261), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [9793] = 4,
    ACTIONS(1404), 1,
      anon_sym_LF,
    ACTIONS(1406), 1,
      aux_sym_file_contenttype_token1,
    ACTIONS(1408), 1,
      sym_comment,
    STATE(554), 1,
      sym_file_contenttype,
  [9806] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1134), 1,
      anon_sym_COMMA,
    ACTIONS(1410), 1,
      anon_sym_RBRACE,
    STATE(362), 1,
      aux_sym_json_object_repeat1,
  [9819] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1412), 1,
      anon_sym_RBRACE,
    ACTIONS(1414), 1,
      anon_sym_COMMA,
    STATE(362), 1,
      aux_sym_json_object_repeat1,
  [9832] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1303), 3,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      aux_sym_hexdigit_token1,
  [9841] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1388), 1,
      anon_sym_COMMA,
    ACTIONS(1417), 1,
      anon_sym_RBRACK,
    STATE(406), 1,
      aux_sym_json_array_repeat1,
  [9854] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1382), 1,
      aux_sym_variable_name_token1,
    STATE(123), 1,
      sym_variable_name,
    STATE(540), 1,
      sym_expr,
  [9867] = 4,
    ACTIONS(1206), 1,
      anon_sym_DOT,
    ACTIONS(1419), 1,
      anon_sym_LF,
    ACTIONS(1421), 1,
      sym_comment,
    STATE(518), 1,
      sym_fraction,
  [9880] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(707), 1,
      aux_sym_digit_token1,
    STATE(276), 2,
      sym_digit,
      aux_sym_integer_repeat1,
  [9891] = 4,
    ACTIONS(7), 1,
      anon_sym_LF,
    ACTIONS(11), 1,
      sym_comment,
    STATE(11), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(106), 1,
      sym__comment_or_new_line,
  [9904] = 4,
    ACTIONS(15), 1,
      anon_sym_LF,
    ACTIONS(61), 1,
      sym_comment,
    STATE(52), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(55), 1,
      sym__comment_or_new_line,
  [9917] = 2,
    ACTIONS(823), 1,
      sym_comment,
    ACTIONS(1423), 3,
      anon_sym_BSLASH,
      anon_sym_SLASH,
      aux_sym_regex_text_token1,
  [9926] = 2,
    ACTIONS(823), 1,
      sym_comment,
    ACTIONS(1425), 3,
      anon_sym_BSLASH,
      anon_sym_SLASH,
      aux_sym_regex_text_token1,
  [9935] = 4,
    ACTIONS(7), 1,
      anon_sym_LF,
    ACTIONS(11), 1,
      sym_comment,
    STATE(11), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(60), 1,
      sym__comment_or_new_line,
  [9948] = 4,
    ACTIONS(7), 1,
      anon_sym_LF,
    ACTIONS(11), 1,
      sym_comment,
    STATE(11), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(18), 1,
      sym__comment_or_new_line,
  [9961] = 4,
    ACTIONS(754), 1,
      anon_sym_LF,
    ACTIONS(770), 1,
      sym_comment,
    STATE(58), 1,
      sym__comment_or_new_line,
    STATE(65), 1,
      aux_sym__comment_or_new_line_repeat1,
  [9974] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(334), 1,
      sym_boolean,
    ACTIONS(703), 2,
      anon_sym_true,
      anon_sym_false,
  [9985] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(335), 1,
      sym_boolean,
    ACTIONS(703), 2,
      anon_sym_true,
      anon_sym_false,
  [9996] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1427), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [10005] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(338), 1,
      sym_boolean,
    ACTIONS(703), 2,
      anon_sym_true,
      anon_sym_false,
  [10016] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1382), 1,
      aux_sym_variable_name_token1,
    STATE(341), 1,
      sym_variable_definition,
    STATE(543), 1,
      sym_variable_name,
  [10029] = 4,
    ACTIONS(1206), 1,
      anon_sym_DOT,
    ACTIONS(1429), 1,
      anon_sym_LF,
    ACTIONS(1431), 1,
      sym_comment,
    STATE(518), 1,
      sym_fraction,
  [10042] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1433), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [10051] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(343), 1,
      sym_boolean,
    ACTIONS(703), 2,
      anon_sym_true,
      anon_sym_false,
  [10062] = 4,
    ACTIONS(1206), 1,
      anon_sym_DOT,
    ACTIONS(1435), 1,
      anon_sym_LF,
    ACTIONS(1437), 1,
      sym_comment,
    STATE(518), 1,
      sym_fraction,
  [10075] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(752), 1,
      aux_sym_digit_token1,
    STATE(226), 2,
      sym_digit,
      aux_sym_integer_repeat1,
  [10086] = 4,
    ACTIONS(1206), 1,
      anon_sym_DOT,
    ACTIONS(1439), 1,
      anon_sym_LF,
    ACTIONS(1441), 1,
      sym_comment,
    STATE(518), 1,
      sym_fraction,
  [10099] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(345), 1,
      sym_boolean,
    ACTIONS(703), 2,
      anon_sym_true,
      anon_sym_false,
  [10110] = 4,
    ACTIONS(1206), 1,
      anon_sym_DOT,
    ACTIONS(1443), 1,
      anon_sym_LF,
    ACTIONS(1445), 1,
      sym_comment,
    STATE(518), 1,
      sym_fraction,
  [10123] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1447), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [10132] = 4,
    ACTIONS(1206), 1,
      anon_sym_DOT,
    ACTIONS(1449), 1,
      anon_sym_LF,
    ACTIONS(1451), 1,
      sym_comment,
    STATE(518), 1,
      sym_fraction,
  [10145] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1453), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [10154] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1134), 1,
      anon_sym_COMMA,
    ACTIONS(1455), 1,
      anon_sym_RBRACE,
    STATE(362), 1,
      aux_sym_json_object_repeat1,
  [10167] = 4,
    ACTIONS(754), 1,
      anon_sym_LF,
    ACTIONS(770), 1,
      sym_comment,
    STATE(12), 1,
      sym__comment_or_new_line,
    STATE(65), 1,
      aux_sym__comment_or_new_line_repeat1,
  [10180] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1198), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [10189] = 4,
    ACTIONS(1378), 1,
      anon_sym_LF,
    ACTIONS(1380), 1,
      sym_comment,
    STATE(128), 1,
      sym__comment_or_new_line,
    STATE(256), 1,
      aux_sym__comment_or_new_line_repeat1,
  [10202] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1457), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [10211] = 4,
    ACTIONS(7), 1,
      anon_sym_LF,
    ACTIONS(11), 1,
      sym_comment,
    STATE(11), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(51), 1,
      sym__comment_or_new_line,
  [10224] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1459), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [10233] = 4,
    ACTIONS(7), 1,
      anon_sym_LF,
    ACTIONS(11), 1,
      sym_comment,
    STATE(11), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(14), 1,
      sym__comment_or_new_line,
  [10246] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1214), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [10255] = 4,
    ACTIONS(1406), 1,
      aux_sym_file_contenttype_token1,
    ACTIONS(1461), 1,
      anon_sym_LF,
    ACTIONS(1463), 1,
      sym_comment,
    STATE(548), 1,
      sym_file_contenttype,
  [10268] = 4,
    ACTIONS(1378), 1,
      anon_sym_LF,
    ACTIONS(1380), 1,
      sym_comment,
    STATE(129), 1,
      sym__comment_or_new_line,
    STATE(256), 1,
      aux_sym__comment_or_new_line_repeat1,
  [10281] = 4,
    ACTIONS(1378), 1,
      anon_sym_LF,
    ACTIONS(1380), 1,
      sym_comment,
    STATE(148), 1,
      sym__comment_or_new_line,
    STATE(256), 1,
      aux_sym__comment_or_new_line_repeat1,
  [10294] = 4,
    ACTIONS(1206), 1,
      anon_sym_DOT,
    ACTIONS(1465), 1,
      anon_sym_LF,
    ACTIONS(1467), 1,
      sym_comment,
    STATE(518), 1,
      sym_fraction,
  [10307] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1134), 1,
      anon_sym_COMMA,
    ACTIONS(1455), 1,
      anon_sym_RBRACE,
    STATE(361), 1,
      aux_sym_json_object_repeat1,
  [10320] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1469), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [10329] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1471), 1,
      anon_sym_COMMA,
    ACTIONS(1474), 1,
      anon_sym_RBRACK,
    STATE(406), 1,
      aux_sym_json_array_repeat1,
  [10342] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1388), 1,
      anon_sym_COMMA,
    ACTIONS(1476), 1,
      anon_sym_RBRACK,
    STATE(364), 1,
      aux_sym_json_array_repeat1,
  [10355] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(752), 1,
      aux_sym_digit_token1,
    STATE(203), 2,
      sym_digit,
      aux_sym_integer_repeat1,
  [10366] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(707), 1,
      aux_sym_digit_token1,
    STATE(232), 2,
      sym_digit,
      aux_sym_integer_repeat1,
  [10377] = 4,
    ACTIONS(1378), 1,
      anon_sym_LF,
    ACTIONS(1380), 1,
      sym_comment,
    STATE(127), 1,
      sym__comment_or_new_line,
    STATE(256), 1,
      aux_sym__comment_or_new_line_repeat1,
  [10390] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1474), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [10398] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1478), 1,
      aux_sym_hexdigit_token1,
    STATE(290), 1,
      sym_hexdigit,
  [10408] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1319), 1,
      aux_sym_hexdigit_token1,
    STATE(416), 1,
      sym_hexdigit,
  [10418] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1319), 1,
      aux_sym_hexdigit_token1,
    STATE(417), 1,
      sym_hexdigit,
  [10428] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1319), 1,
      aux_sym_hexdigit_token1,
    STATE(418), 1,
      sym_hexdigit,
  [10438] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1319), 1,
      aux_sym_hexdigit_token1,
    STATE(420), 1,
      sym_hexdigit,
  [10448] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1319), 1,
      aux_sym_hexdigit_token1,
    STATE(421), 1,
      sym_hexdigit,
  [10458] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1319), 1,
      aux_sym_hexdigit_token1,
    STATE(422), 1,
      sym_hexdigit,
  [10468] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1319), 1,
      aux_sym_hexdigit_token1,
    STATE(504), 1,
      sym_hexdigit,
  [10478] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1319), 1,
      aux_sym_hexdigit_token1,
    STATE(425), 1,
      sym_hexdigit,
  [10488] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1319), 1,
      aux_sym_hexdigit_token1,
    STATE(427), 1,
      sym_hexdigit,
  [10498] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1319), 1,
      aux_sym_hexdigit_token1,
    STATE(428), 1,
      sym_hexdigit,
  [10508] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1319), 1,
      aux_sym_hexdigit_token1,
    STATE(450), 1,
      sym_hexdigit,
  [10518] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(699), 1,
      anon_sym_DQUOTE,
    STATE(505), 1,
      sym_quoted_string,
  [10528] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1319), 1,
      aux_sym_hexdigit_token1,
    STATE(526), 1,
      sym_hexdigit,
  [10538] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1319), 1,
      aux_sym_hexdigit_token1,
    STATE(412), 1,
      sym_hexdigit,
  [10548] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1319), 1,
      aux_sym_hexdigit_token1,
    STATE(524), 1,
      sym_hexdigit,
  [10558] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1319), 1,
      aux_sym_hexdigit_token1,
    STATE(521), 1,
      sym_hexdigit,
  [10568] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1305), 1,
      anon_sym_DQUOTE,
    STATE(91), 1,
      sym_quoted_string,
  [10578] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1305), 1,
      anon_sym_DQUOTE,
    STATE(84), 1,
      sym_quoted_string,
  [10588] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1305), 1,
      anon_sym_DQUOTE,
    STATE(94), 1,
      sym_quoted_string,
  [10598] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1305), 1,
      anon_sym_DQUOTE,
    STATE(95), 1,
      sym_quoted_string,
  [10608] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(699), 1,
      anon_sym_DQUOTE,
    STATE(184), 1,
      sym_quoted_string,
  [10618] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1305), 1,
      anon_sym_DQUOTE,
    STATE(93), 1,
      sym_quoted_string,
  [10628] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(699), 1,
      anon_sym_DQUOTE,
    STATE(183), 1,
      sym_quoted_string,
  [10638] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(699), 1,
      anon_sym_DQUOTE,
    STATE(182), 1,
      sym_quoted_string,
  [10648] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1480), 1,
      anon_sym_LBRACE,
    STATE(313), 1,
      sym_unicode_char,
  [10658] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(699), 1,
      anon_sym_DQUOTE,
    STATE(181), 1,
      sym_quoted_string,
  [10668] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(699), 1,
      anon_sym_DQUOTE,
    STATE(179), 1,
      sym_quoted_string,
  [10678] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1482), 2,
      aux_sym_status_token1,
      anon_sym_STAR,
  [10686] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1319), 1,
      aux_sym_hexdigit_token1,
    STATE(448), 1,
      sym_hexdigit,
  [10696] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1484), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [10704] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1486), 1,
      anon_sym_COLON,
    ACTIONS(1488), 1,
      anon_sym_COLON2,
  [10714] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1490), 1,
      anon_sym_LBRACE,
    STATE(268), 1,
      sym_unicode_char,
  [10724] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1412), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [10732] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1492), 1,
      anon_sym_LBRACE,
    STATE(250), 1,
      sym_unicode_char,
  [10742] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1494), 1,
      anon_sym_LBRACE,
    STATE(325), 1,
      sym_unicode_char,
  [10752] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1319), 1,
      aux_sym_hexdigit_token1,
    STATE(426), 1,
      sym_hexdigit,
  [10762] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1319), 1,
      aux_sym_hexdigit_token1,
    STATE(419), 1,
      sym_hexdigit,
  [10772] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1319), 1,
      aux_sym_hexdigit_token1,
    STATE(449), 1,
      sym_hexdigit,
  [10782] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1496), 1,
      anon_sym_file_COMMA,
    STATE(356), 1,
      sym_file_value,
  [10792] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1486), 1,
      anon_sym_COLON,
  [10799] = 2,
    ACTIONS(1297), 1,
      anon_sym_LF,
    ACTIONS(1498), 1,
      sym_comment,
  [10806] = 2,
    ACTIONS(1500), 1,
      anon_sym_LF,
    ACTIONS(1502), 1,
      sym_comment,
  [10813] = 2,
    ACTIONS(1504), 1,
      anon_sym_LF,
    ACTIONS(1506), 1,
      sym_comment,
  [10820] = 2,
    ACTIONS(1449), 1,
      anon_sym_LF,
    ACTIONS(1451), 1,
      sym_comment,
  [10827] = 2,
    ACTIONS(1443), 1,
      anon_sym_LF,
    ACTIONS(1445), 1,
      sym_comment,
  [10834] = 2,
    ACTIONS(1439), 1,
      anon_sym_LF,
    ACTIONS(1441), 1,
      sym_comment,
  [10841] = 2,
    ACTIONS(1435), 1,
      anon_sym_LF,
    ACTIONS(1437), 1,
      sym_comment,
  [10848] = 2,
    ACTIONS(1508), 1,
      anon_sym_LF,
    ACTIONS(1510), 1,
      sym_comment,
  [10855] = 2,
    ACTIONS(1429), 1,
      anon_sym_LF,
    ACTIONS(1431), 1,
      sym_comment,
  [10862] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1512), 1,
      anon_sym_COLON2,
  [10869] = 2,
    ACTIONS(1514), 1,
      anon_sym_LF,
    ACTIONS(1516), 1,
      sym_comment,
  [10876] = 2,
    ACTIONS(1518), 1,
      anon_sym_LF,
    ACTIONS(1520), 1,
      sym_comment,
  [10883] = 2,
    ACTIONS(823), 1,
      sym_comment,
    ACTIONS(1522), 1,
      aux_sym_oneline_string_text_token2,
  [10890] = 2,
    ACTIONS(1524), 1,
      anon_sym_LF,
    ACTIONS(1526), 1,
      sym_comment,
  [10897] = 2,
    ACTIONS(1528), 1,
      anon_sym_LF,
    ACTIONS(1530), 1,
      sym_comment,
  [10904] = 2,
    ACTIONS(1532), 1,
      anon_sym_LF,
    ACTIONS(1534), 1,
      sym_comment,
  [10911] = 2,
    ACTIONS(1536), 1,
      anon_sym_LF,
    ACTIONS(1538), 1,
      sym_comment,
  [10918] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1540), 1,
      anon_sym_SLASH,
  [10925] = 2,
    ACTIONS(1457), 1,
      anon_sym_LF,
    ACTIONS(1542), 1,
      sym_comment,
  [10932] = 2,
    ACTIONS(823), 1,
      sym_comment,
    ACTIONS(1544), 1,
      aux_sym_regex_escaped_char_token1,
  [10939] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1546), 1,
      anon_sym_COLON2,
  [10946] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1548), 1,
      anon_sym_COLON2,
  [10953] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1550), 1,
      anon_sym_COLON2,
  [10960] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1552), 1,
      anon_sym_COLON2,
  [10967] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1554), 1,
      anon_sym_COLON2,
  [10974] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1556), 1,
      anon_sym_COLON2,
  [10981] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1558), 1,
      anon_sym_COLON2,
  [10988] = 2,
    ACTIONS(1433), 1,
      anon_sym_LF,
    ACTIONS(1560), 1,
      sym_comment,
  [10995] = 2,
    ACTIONS(1459), 1,
      anon_sym_LF,
    ACTIONS(1562), 1,
      sym_comment,
  [11002] = 2,
    ACTIONS(1564), 1,
      anon_sym_LF,
    ACTIONS(1566), 1,
      sym_comment,
  [11009] = 2,
    ACTIONS(1419), 1,
      anon_sym_LF,
    ACTIONS(1421), 1,
      sym_comment,
  [11016] = 2,
    ACTIONS(1568), 1,
      anon_sym_LF,
    ACTIONS(1570), 1,
      sym_comment,
  [11023] = 2,
    ACTIONS(1214), 1,
      anon_sym_LF,
    ACTIONS(1218), 1,
      sym_comment,
  [11030] = 2,
    ACTIONS(1447), 1,
      anon_sym_LF,
    ACTIONS(1572), 1,
      sym_comment,
  [11037] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1574), 1,
      anon_sym_COLON2,
  [11044] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1576), 1,
      aux_sym_key_string_escaped_char_token1,
  [11051] = 2,
    ACTIONS(1578), 1,
      anon_sym_LF,
    ACTIONS(1580), 1,
      sym_comment,
  [11058] = 2,
    ACTIONS(1453), 1,
      anon_sym_LF,
    ACTIONS(1582), 1,
      sym_comment,
  [11065] = 2,
    ACTIONS(1584), 1,
      anon_sym_LF,
    ACTIONS(1586), 1,
      sym_comment,
  [11072] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1588), 1,
      anon_sym_SEMI,
  [11079] = 2,
    ACTIONS(1590), 1,
      anon_sym_LF,
    ACTIONS(1592), 1,
      sym_comment,
  [11086] = 2,
    ACTIONS(1594), 1,
      anon_sym_LF,
    ACTIONS(1596), 1,
      sym_comment,
  [11093] = 2,
    ACTIONS(1198), 1,
      anon_sym_LF,
    ACTIONS(1291), 1,
      sym_comment,
  [11100] = 2,
    ACTIONS(1376), 1,
      anon_sym_LF,
    ACTIONS(1598), 1,
      sym_comment,
  [11107] = 2,
    ACTIONS(1283), 1,
      anon_sym_LF,
    ACTIONS(1600), 1,
      sym_comment,
  [11114] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1602), 1,
      anon_sym_RBRACE_RBRACE,
  [11121] = 2,
    ACTIONS(1604), 1,
      anon_sym_LF,
    ACTIONS(1606), 1,
      sym_comment,
  [11128] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1608), 1,
      aux_sym_key_string_escaped_char_token1,
  [11135] = 2,
    ACTIONS(1610), 1,
      anon_sym_LF,
    ACTIONS(1612), 1,
      sym_comment,
  [11142] = 2,
    ACTIONS(1614), 1,
      anon_sym_LF,
    ACTIONS(1616), 1,
      sym_comment,
  [11149] = 2,
    ACTIONS(1618), 1,
      anon_sym_LF,
    ACTIONS(1620), 1,
      sym_comment,
  [11156] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1622), 1,
      anon_sym_RBRACE,
  [11163] = 2,
    ACTIONS(1624), 1,
      anon_sym_LF,
    ACTIONS(1626), 1,
      sym_comment,
  [11170] = 2,
    ACTIONS(1628), 1,
      anon_sym_LF,
    ACTIONS(1630), 1,
      sym_comment,
  [11177] = 2,
    ACTIONS(1632), 1,
      anon_sym_LF,
    ACTIONS(1634), 1,
      sym_comment,
  [11184] = 2,
    ACTIONS(1636), 1,
      anon_sym_LF,
    ACTIONS(1638), 1,
      sym_comment,
  [11191] = 2,
    ACTIONS(1640), 1,
      anon_sym_LF,
    ACTIONS(1642), 1,
      sym_comment,
  [11198] = 2,
    ACTIONS(1644), 1,
      anon_sym_LF,
    ACTIONS(1646), 1,
      sym_comment,
  [11205] = 2,
    ACTIONS(1648), 1,
      anon_sym_LF,
    ACTIONS(1650), 1,
      sym_comment,
  [11212] = 2,
    ACTIONS(1652), 1,
      anon_sym_LF,
    ACTIONS(1654), 1,
      sym_comment,
  [11219] = 2,
    ACTIONS(1656), 1,
      anon_sym_LF,
    ACTIONS(1658), 1,
      sym_comment,
  [11226] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1660), 1,
      anon_sym_SLASH,
  [11233] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1662), 1,
      anon_sym_SEMI,
  [11240] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1664), 1,
      anon_sym_GT,
  [11247] = 2,
    ACTIONS(1427), 1,
      anon_sym_LF,
    ACTIONS(1666), 1,
      sym_comment,
  [11254] = 2,
    ACTIONS(1668), 1,
      anon_sym_LF,
    ACTIONS(1670), 1,
      sym_comment,
  [11261] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1672), 1,
      anon_sym_COLON2,
  [11268] = 2,
    ACTIONS(1674), 1,
      anon_sym_LF,
    ACTIONS(1676), 1,
      sym_comment,
  [11275] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1678), 1,
      anon_sym_RBRACE,
  [11282] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1680), 1,
      anon_sym_RBRACE_RBRACE,
  [11289] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1682), 1,
      aux_sym_key_string_escaped_char_token1,
  [11296] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1684), 1,
      anon_sym_RBRACE,
  [11303] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1686), 1,
      anon_sym_RBRACE_RBRACE,
  [11310] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1688), 1,
      anon_sym_RBRACE,
  [11317] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1690), 1,
      anon_sym_RBRACE_RBRACE,
  [11324] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1692), 1,
      anon_sym_RBRACE_RBRACE,
  [11331] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1694), 1,
      anon_sym_RBRACE_RBRACE,
  [11338] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1696), 1,
      anon_sym_RBRACE_RBRACE,
  [11345] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1698), 1,
      anon_sym_RBRACE_RBRACE,
  [11352] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1700), 1,
      anon_sym_RBRACE_RBRACE,
  [11359] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1702), 1,
      anon_sym_RBRACE_RBRACE,
  [11366] = 2,
    ACTIONS(1704), 1,
      anon_sym_LF,
    ACTIONS(1706), 1,
      sym_comment,
  [11373] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1708), 1,
      ts_builtin_sym_end,
  [11380] = 2,
    ACTIONS(823), 1,
      sym_comment,
    ACTIONS(1710), 1,
      aux_sym_variable_name_token2,
  [11387] = 2,
    ACTIONS(1712), 1,
      anon_sym_LF,
    ACTIONS(1714), 1,
      sym_comment,
  [11394] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1716), 1,
      anon_sym_COLON2,
  [11401] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1718), 1,
      anon_sym_COLON2,
  [11408] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1720), 1,
      anon_sym_RBRACE_RBRACE,
  [11415] = 2,
    ACTIONS(1722), 1,
      anon_sym_LF,
    ACTIONS(1724), 1,
      sym_comment,
  [11422] = 2,
    ACTIONS(1469), 1,
      anon_sym_LF,
    ACTIONS(1726), 1,
      sym_comment,
  [11429] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1728), 1,
      anon_sym_EQ,
  [11436] = 2,
    ACTIONS(823), 1,
      sym_comment,
    ACTIONS(1730), 1,
      anon_sym_LF,
  [11443] = 2,
    ACTIONS(1732), 1,
      anon_sym_LF,
    ACTIONS(1734), 1,
      sym_comment,
  [11450] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1736), 1,
      anon_sym_SEMI,
  [11457] = 2,
    ACTIONS(1738), 1,
      anon_sym_LF,
    ACTIONS(1740), 1,
      sym_comment,
  [11464] = 2,
    ACTIONS(1742), 1,
      anon_sym_LF,
    ACTIONS(1744), 1,
      sym_comment,
  [11471] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1746), 1,
      anon_sym_To_COMMABe_COMMADefined,
  [11478] = 2,
    ACTIONS(823), 1,
      sym_comment,
    ACTIONS(1748), 1,
      aux_sym_oneline_base64_token1,
  [11485] = 2,
    ACTIONS(823), 1,
      sym_comment,
    ACTIONS(1750), 1,
      anon_sym_LF,
  [11492] = 2,
    ACTIONS(1465), 1,
      anon_sym_LF,
    ACTIONS(1467), 1,
      sym_comment,
  [11499] = 2,
    ACTIONS(1752), 1,
      anon_sym_LF,
    ACTIONS(1754), 1,
      sym_comment,
  [11506] = 2,
    ACTIONS(1461), 1,
      anon_sym_LF,
    ACTIONS(1463), 1,
      sym_comment,
  [11513] = 2,
    ACTIONS(1756), 1,
      anon_sym_LF,
    ACTIONS(1758), 1,
      sym_comment,
  [11520] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1760), 1,
      anon_sym_COLON2,
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
  [SMALL_STATE(50)] = 2535,
  [SMALL_STATE(51)] = 2588,
  [SMALL_STATE(52)] = 2641,
  [SMALL_STATE(53)] = 2698,
  [SMALL_STATE(54)] = 2755,
  [SMALL_STATE(55)] = 2822,
  [SMALL_STATE(56)] = 2872,
  [SMALL_STATE(57)] = 2936,
  [SMALL_STATE(58)] = 3000,
  [SMALL_STATE(59)] = 3064,
  [SMALL_STATE(60)] = 3112,
  [SMALL_STATE(61)] = 3160,
  [SMALL_STATE(62)] = 3227,
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
  [SMALL_STATE(106)] = 5129,
  [SMALL_STATE(107)] = 5157,
  [SMALL_STATE(108)] = 5185,
  [SMALL_STATE(109)] = 5213,
  [SMALL_STATE(110)] = 5241,
  [SMALL_STATE(111)] = 5275,
  [SMALL_STATE(112)] = 5320,
  [SMALL_STATE(113)] = 5367,
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
  [SMALL_STATE(131)] = 6025,
  [SMALL_STATE(132)] = 6057,
  [SMALL_STATE(133)] = 6084,
  [SMALL_STATE(134)] = 6111,
  [SMALL_STATE(135)] = 6138,
  [SMALL_STATE(136)] = 6165,
  [SMALL_STATE(137)] = 6194,
  [SMALL_STATE(138)] = 6223,
  [SMALL_STATE(139)] = 6250,
  [SMALL_STATE(140)] = 6277,
  [SMALL_STATE(141)] = 6306,
  [SMALL_STATE(142)] = 6335,
  [SMALL_STATE(143)] = 6362,
  [SMALL_STATE(144)] = 6391,
  [SMALL_STATE(145)] = 6417,
  [SMALL_STATE(146)] = 6445,
  [SMALL_STATE(147)] = 6473,
  [SMALL_STATE(148)] = 6499,
  [SMALL_STATE(149)] = 6527,
  [SMALL_STATE(150)] = 6555,
  [SMALL_STATE(151)] = 6581,
  [SMALL_STATE(152)] = 6609,
  [SMALL_STATE(153)] = 6637,
  [SMALL_STATE(154)] = 6660,
  [SMALL_STATE(155)] = 6685,
  [SMALL_STATE(156)] = 6710,
  [SMALL_STATE(157)] = 6733,
  [SMALL_STATE(158)] = 6758,
  [SMALL_STATE(159)] = 6783,
  [SMALL_STATE(160)] = 6808,
  [SMALL_STATE(161)] = 6827,
  [SMALL_STATE(162)] = 6852,
  [SMALL_STATE(163)] = 6871,
  [SMALL_STATE(164)] = 6890,
  [SMALL_STATE(165)] = 6915,
  [SMALL_STATE(166)] = 6940,
  [SMALL_STATE(167)] = 6965,
  [SMALL_STATE(168)] = 6990,
  [SMALL_STATE(169)] = 7015,
  [SMALL_STATE(170)] = 7030,
  [SMALL_STATE(171)] = 7052,
  [SMALL_STATE(172)] = 7066,
  [SMALL_STATE(173)] = 7088,
  [SMALL_STATE(174)] = 7106,
  [SMALL_STATE(175)] = 7126,
  [SMALL_STATE(176)] = 7142,
  [SMALL_STATE(177)] = 7162,
  [SMALL_STATE(178)] = 7176,
  [SMALL_STATE(179)] = 7196,
  [SMALL_STATE(180)] = 7210,
  [SMALL_STATE(181)] = 7224,
  [SMALL_STATE(182)] = 7238,
  [SMALL_STATE(183)] = 7252,
  [SMALL_STATE(184)] = 7266,
  [SMALL_STATE(185)] = 7280,
  [SMALL_STATE(186)] = 7294,
  [SMALL_STATE(187)] = 7308,
  [SMALL_STATE(188)] = 7330,
  [SMALL_STATE(189)] = 7344,
  [SMALL_STATE(190)] = 7358,
  [SMALL_STATE(191)] = 7372,
  [SMALL_STATE(192)] = 7386,
  [SMALL_STATE(193)] = 7400,
  [SMALL_STATE(194)] = 7414,
  [SMALL_STATE(195)] = 7430,
  [SMALL_STATE(196)] = 7444,
  [SMALL_STATE(197)] = 7464,
  [SMALL_STATE(198)] = 7478,
  [SMALL_STATE(199)] = 7502,
  [SMALL_STATE(200)] = 7516,
  [SMALL_STATE(201)] = 7540,
  [SMALL_STATE(202)] = 7554,
  [SMALL_STATE(203)] = 7574,
  [SMALL_STATE(204)] = 7592,
  [SMALL_STATE(205)] = 7606,
  [SMALL_STATE(206)] = 7620,
  [SMALL_STATE(207)] = 7634,
  [SMALL_STATE(208)] = 7648,
  [SMALL_STATE(209)] = 7662,
  [SMALL_STATE(210)] = 7676,
  [SMALL_STATE(211)] = 7697,
  [SMALL_STATE(212)] = 7718,
  [SMALL_STATE(213)] = 7731,
  [SMALL_STATE(214)] = 7748,
  [SMALL_STATE(215)] = 7765,
  [SMALL_STATE(216)] = 7782,
  [SMALL_STATE(217)] = 7807,
  [SMALL_STATE(218)] = 7832,
  [SMALL_STATE(219)] = 7853,
  [SMALL_STATE(220)] = 7874,
  [SMALL_STATE(221)] = 7895,
  [SMALL_STATE(222)] = 7916,
  [SMALL_STATE(223)] = 7937,
  [SMALL_STATE(224)] = 7958,
  [SMALL_STATE(225)] = 7975,
  [SMALL_STATE(226)] = 7992,
  [SMALL_STATE(227)] = 8008,
  [SMALL_STATE(228)] = 8026,
  [SMALL_STATE(229)] = 8044,
  [SMALL_STATE(230)] = 8062,
  [SMALL_STATE(231)] = 8080,
  [SMALL_STATE(232)] = 8094,
  [SMALL_STATE(233)] = 8110,
  [SMALL_STATE(234)] = 8128,
  [SMALL_STATE(235)] = 8142,
  [SMALL_STATE(236)] = 8160,
  [SMALL_STATE(237)] = 8176,
  [SMALL_STATE(238)] = 8190,
  [SMALL_STATE(239)] = 8202,
  [SMALL_STATE(240)] = 8220,
  [SMALL_STATE(241)] = 8236,
  [SMALL_STATE(242)] = 8252,
  [SMALL_STATE(243)] = 8272,
  [SMALL_STATE(244)] = 8288,
  [SMALL_STATE(245)] = 8301,
  [SMALL_STATE(246)] = 8316,
  [SMALL_STATE(247)] = 8333,
  [SMALL_STATE(248)] = 8348,
  [SMALL_STATE(249)] = 8363,
  [SMALL_STATE(250)] = 8378,
  [SMALL_STATE(251)] = 8391,
  [SMALL_STATE(252)] = 8404,
  [SMALL_STATE(253)] = 8417,
  [SMALL_STATE(254)] = 8428,
  [SMALL_STATE(255)] = 8441,
  [SMALL_STATE(256)] = 8452,
  [SMALL_STATE(257)] = 8467,
  [SMALL_STATE(258)] = 8480,
  [SMALL_STATE(259)] = 8497,
  [SMALL_STATE(260)] = 8512,
  [SMALL_STATE(261)] = 8527,
  [SMALL_STATE(262)] = 8540,
  [SMALL_STATE(263)] = 8557,
  [SMALL_STATE(264)] = 8572,
  [SMALL_STATE(265)] = 8587,
  [SMALL_STATE(266)] = 8603,
  [SMALL_STATE(267)] = 8613,
  [SMALL_STATE(268)] = 8623,
  [SMALL_STATE(269)] = 8635,
  [SMALL_STATE(270)] = 8643,
  [SMALL_STATE(271)] = 8659,
  [SMALL_STATE(272)] = 8671,
  [SMALL_STATE(273)] = 8685,
  [SMALL_STATE(274)] = 8695,
  [SMALL_STATE(275)] = 8705,
  [SMALL_STATE(276)] = 8715,
  [SMALL_STATE(277)] = 8729,
  [SMALL_STATE(278)] = 8741,
  [SMALL_STATE(279)] = 8751,
  [SMALL_STATE(280)] = 8761,
  [SMALL_STATE(281)] = 8777,
  [SMALL_STATE(282)] = 8793,
  [SMALL_STATE(283)] = 8805,
  [SMALL_STATE(284)] = 8821,
  [SMALL_STATE(285)] = 8835,
  [SMALL_STATE(286)] = 8851,
  [SMALL_STATE(287)] = 8863,
  [SMALL_STATE(288)] = 8879,
  [SMALL_STATE(289)] = 8889,
  [SMALL_STATE(290)] = 8903,
  [SMALL_STATE(291)] = 8915,
  [SMALL_STATE(292)] = 8931,
  [SMALL_STATE(293)] = 8941,
  [SMALL_STATE(294)] = 8951,
  [SMALL_STATE(295)] = 8961,
  [SMALL_STATE(296)] = 8973,
  [SMALL_STATE(297)] = 8987,
  [SMALL_STATE(298)] = 9001,
  [SMALL_STATE(299)] = 9011,
  [SMALL_STATE(300)] = 9025,
  [SMALL_STATE(301)] = 9035,
  [SMALL_STATE(302)] = 9047,
  [SMALL_STATE(303)] = 9061,
  [SMALL_STATE(304)] = 9073,
  [SMALL_STATE(305)] = 9085,
  [SMALL_STATE(306)] = 9093,
  [SMALL_STATE(307)] = 9107,
  [SMALL_STATE(308)] = 9123,
  [SMALL_STATE(309)] = 9135,
  [SMALL_STATE(310)] = 9151,
  [SMALL_STATE(311)] = 9167,
  [SMALL_STATE(312)] = 9181,
  [SMALL_STATE(313)] = 9191,
  [SMALL_STATE(314)] = 9201,
  [SMALL_STATE(315)] = 9217,
  [SMALL_STATE(316)] = 9231,
  [SMALL_STATE(317)] = 9245,
  [SMALL_STATE(318)] = 9259,
  [SMALL_STATE(319)] = 9275,
  [SMALL_STATE(320)] = 9289,
  [SMALL_STATE(321)] = 9299,
  [SMALL_STATE(322)] = 9313,
  [SMALL_STATE(323)] = 9323,
  [SMALL_STATE(324)] = 9339,
  [SMALL_STATE(325)] = 9355,
  [SMALL_STATE(326)] = 9365,
  [SMALL_STATE(327)] = 9374,
  [SMALL_STATE(328)] = 9387,
  [SMALL_STATE(329)] = 9400,
  [SMALL_STATE(330)] = 9413,
  [SMALL_STATE(331)] = 9426,
  [SMALL_STATE(332)] = 9437,
  [SMALL_STATE(333)] = 9450,
  [SMALL_STATE(334)] = 9463,
  [SMALL_STATE(335)] = 9476,
  [SMALL_STATE(336)] = 9489,
  [SMALL_STATE(337)] = 9502,
  [SMALL_STATE(338)] = 9515,
  [SMALL_STATE(339)] = 9528,
  [SMALL_STATE(340)] = 9541,
  [SMALL_STATE(341)] = 9554,
  [SMALL_STATE(342)] = 9567,
  [SMALL_STATE(343)] = 9580,
  [SMALL_STATE(344)] = 9593,
  [SMALL_STATE(345)] = 9606,
  [SMALL_STATE(346)] = 9619,
  [SMALL_STATE(347)] = 9632,
  [SMALL_STATE(348)] = 9645,
  [SMALL_STATE(349)] = 9658,
  [SMALL_STATE(350)] = 9671,
  [SMALL_STATE(351)] = 9684,
  [SMALL_STATE(352)] = 9697,
  [SMALL_STATE(353)] = 9710,
  [SMALL_STATE(354)] = 9723,
  [SMALL_STATE(355)] = 9736,
  [SMALL_STATE(356)] = 9747,
  [SMALL_STATE(357)] = 9760,
  [SMALL_STATE(358)] = 9771,
  [SMALL_STATE(359)] = 9784,
  [SMALL_STATE(360)] = 9793,
  [SMALL_STATE(361)] = 9806,
  [SMALL_STATE(362)] = 9819,
  [SMALL_STATE(363)] = 9832,
  [SMALL_STATE(364)] = 9841,
  [SMALL_STATE(365)] = 9854,
  [SMALL_STATE(366)] = 9867,
  [SMALL_STATE(367)] = 9880,
  [SMALL_STATE(368)] = 9891,
  [SMALL_STATE(369)] = 9904,
  [SMALL_STATE(370)] = 9917,
  [SMALL_STATE(371)] = 9926,
  [SMALL_STATE(372)] = 9935,
  [SMALL_STATE(373)] = 9948,
  [SMALL_STATE(374)] = 9961,
  [SMALL_STATE(375)] = 9974,
  [SMALL_STATE(376)] = 9985,
  [SMALL_STATE(377)] = 9996,
  [SMALL_STATE(378)] = 10005,
  [SMALL_STATE(379)] = 10016,
  [SMALL_STATE(380)] = 10029,
  [SMALL_STATE(381)] = 10042,
  [SMALL_STATE(382)] = 10051,
  [SMALL_STATE(383)] = 10062,
  [SMALL_STATE(384)] = 10075,
  [SMALL_STATE(385)] = 10086,
  [SMALL_STATE(386)] = 10099,
  [SMALL_STATE(387)] = 10110,
  [SMALL_STATE(388)] = 10123,
  [SMALL_STATE(389)] = 10132,
  [SMALL_STATE(390)] = 10145,
  [SMALL_STATE(391)] = 10154,
  [SMALL_STATE(392)] = 10167,
  [SMALL_STATE(393)] = 10180,
  [SMALL_STATE(394)] = 10189,
  [SMALL_STATE(395)] = 10202,
  [SMALL_STATE(396)] = 10211,
  [SMALL_STATE(397)] = 10224,
  [SMALL_STATE(398)] = 10233,
  [SMALL_STATE(399)] = 10246,
  [SMALL_STATE(400)] = 10255,
  [SMALL_STATE(401)] = 10268,
  [SMALL_STATE(402)] = 10281,
  [SMALL_STATE(403)] = 10294,
  [SMALL_STATE(404)] = 10307,
  [SMALL_STATE(405)] = 10320,
  [SMALL_STATE(406)] = 10329,
  [SMALL_STATE(407)] = 10342,
  [SMALL_STATE(408)] = 10355,
  [SMALL_STATE(409)] = 10366,
  [SMALL_STATE(410)] = 10377,
  [SMALL_STATE(411)] = 10390,
  [SMALL_STATE(412)] = 10398,
  [SMALL_STATE(413)] = 10408,
  [SMALL_STATE(414)] = 10418,
  [SMALL_STATE(415)] = 10428,
  [SMALL_STATE(416)] = 10438,
  [SMALL_STATE(417)] = 10448,
  [SMALL_STATE(418)] = 10458,
  [SMALL_STATE(419)] = 10468,
  [SMALL_STATE(420)] = 10478,
  [SMALL_STATE(421)] = 10488,
  [SMALL_STATE(422)] = 10498,
  [SMALL_STATE(423)] = 10508,
  [SMALL_STATE(424)] = 10518,
  [SMALL_STATE(425)] = 10528,
  [SMALL_STATE(426)] = 10538,
  [SMALL_STATE(427)] = 10548,
  [SMALL_STATE(428)] = 10558,
  [SMALL_STATE(429)] = 10568,
  [SMALL_STATE(430)] = 10578,
  [SMALL_STATE(431)] = 10588,
  [SMALL_STATE(432)] = 10598,
  [SMALL_STATE(433)] = 10608,
  [SMALL_STATE(434)] = 10618,
  [SMALL_STATE(435)] = 10628,
  [SMALL_STATE(436)] = 10638,
  [SMALL_STATE(437)] = 10648,
  [SMALL_STATE(438)] = 10658,
  [SMALL_STATE(439)] = 10668,
  [SMALL_STATE(440)] = 10678,
  [SMALL_STATE(441)] = 10686,
  [SMALL_STATE(442)] = 10696,
  [SMALL_STATE(443)] = 10704,
  [SMALL_STATE(444)] = 10714,
  [SMALL_STATE(445)] = 10724,
  [SMALL_STATE(446)] = 10732,
  [SMALL_STATE(447)] = 10742,
  [SMALL_STATE(448)] = 10752,
  [SMALL_STATE(449)] = 10762,
  [SMALL_STATE(450)] = 10772,
  [SMALL_STATE(451)] = 10782,
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
  [SMALL_STATE(545)] = 11443,
  [SMALL_STATE(546)] = 11450,
  [SMALL_STATE(547)] = 11457,
  [SMALL_STATE(548)] = 11464,
  [SMALL_STATE(549)] = 11471,
  [SMALL_STATE(550)] = 11478,
  [SMALL_STATE(551)] = 11485,
  [SMALL_STATE(552)] = 11492,
  [SMALL_STATE(553)] = 11499,
  [SMALL_STATE(554)] = 11506,
  [SMALL_STATE(555)] = 11513,
  [SMALL_STATE(556)] = 11520,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hurl_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(288),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 3),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [17] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 3),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(402),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(401),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(394),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(327),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(410),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(398),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(549),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(550),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(289),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(225),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(488),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(215),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(216),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(471),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(481),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(253),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 2),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 2),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 4),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 4),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 5),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 5),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__comment_or_new_line_repeat1, 2),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__comment_or_new_line_repeat1, 2), SHIFT_REPEAT(9),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__comment_or_new_line_repeat1, 2),
  [82] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__comment_or_new_line_repeat1, 2), SHIFT_REPEAT(9),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response, 4),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_response, 4),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(374),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(373),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__comment_or_new_line, 1),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__comment_or_new_line, 1),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response, 3),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_response, 3),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_options_section, 3),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_options_section, 3),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(487),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(479),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(478),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(477),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(476),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(475),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(474),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(473),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(462),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(556),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_options_section, 2),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_options_section, 2),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_options_section_repeat1, 2),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_options_section_repeat1, 2),
  [137] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_options_section_repeat1, 2), SHIFT_REPEAT(487),
  [140] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_options_section_repeat1, 2), SHIFT_REPEAT(479),
  [143] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_options_section_repeat1, 2), SHIFT_REPEAT(478),
  [146] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_options_section_repeat1, 2), SHIFT_REPEAT(477),
  [149] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_options_section_repeat1, 2), SHIFT_REPEAT(476),
  [152] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_options_section_repeat1, 2), SHIFT_REPEAT(475),
  [155] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_options_section_repeat1, 2), SHIFT_REPEAT(474),
  [158] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_options_section_repeat1, 2), SHIFT_REPEAT(473),
  [161] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_options_section_repeat1, 2), SHIFT_REPEAT(462),
  [164] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_options_section_repeat1, 2), SHIFT_REPEAT(556),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_asserts_section_repeat1, 2),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_asserts_section_repeat1, 2),
  [171] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_asserts_section_repeat1, 2), SHIFT_REPEAT(434),
  [174] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_asserts_section_repeat1, 2), SHIFT_REPEAT(86),
  [177] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_asserts_section_repeat1, 2), SHIFT_REPEAT(87),
  [180] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_asserts_section_repeat1, 2), SHIFT_REPEAT(432),
  [183] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_asserts_section_repeat1, 2), SHIFT_REPEAT(431),
  [186] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_asserts_section_repeat1, 2), SHIFT_REPEAT(88),
  [189] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_asserts_section_repeat1, 2), SHIFT_REPEAT(430),
  [192] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_asserts_section_repeat1, 2), SHIFT_REPEAT(429),
  [195] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_asserts_section_repeat1, 2), SHIFT_REPEAT(284),
  [198] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_asserts_section_repeat1, 2), SHIFT_REPEAT(83),
  [201] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_asserts_section_repeat1, 2), SHIFT_REPEAT(89),
  [204] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_asserts_section_repeat1, 2), SHIFT_REPEAT(82),
  [207] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_asserts_section_repeat1, 2), SHIFT_REPEAT(90),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_asserts_section, 3),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_asserts_section, 3),
  [214] = {.entry = {.count = 1, .reusable = false}}, SHIFT(434),
  [216] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [218] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [220] = {.entry = {.count = 1, .reusable = false}}, SHIFT(432),
  [222] = {.entry = {.count = 1, .reusable = false}}, SHIFT(431),
  [224] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [226] = {.entry = {.count = 1, .reusable = false}}, SHIFT(430),
  [228] = {.entry = {.count = 1, .reusable = false}}, SHIFT(429),
  [230] = {.entry = {.count = 1, .reusable = false}}, SHIFT(284),
  [232] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [234] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [236] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [238] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_asserts_section, 2),
  [242] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_asserts_section, 2),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [246] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [252] = {.entry = {.count = 1, .reusable = false}}, SHIFT(218),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [256] = {.entry = {.count = 1, .reusable = false}}, SHIFT(220),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(424),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(541),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(537),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(534),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(512),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(511),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(508),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response, 5),
  [296] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_response, 5),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multipart_form_data_section, 5),
  [300] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multipart_form_data_section, 5),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multipart_form_data_section, 3),
  [306] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multipart_form_data_section, 3),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_request_repeat1, 2),
  [310] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_request_repeat1, 2),
  [312] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat1, 2), SHIFT_REPEAT(225),
  [315] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_request_repeat1, 2), SHIFT_REPEAT(488),
  [318] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_request_repeat1, 2), SHIFT_REPEAT(336),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multipart_form_data_section, 4),
  [323] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multipart_form_data_section, 4),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_verbose_option, 4),
  [327] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_verbose_option, 4),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_retry_option, 4),
  [331] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_retry_option, 4),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option, 1),
  [335] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_option, 1),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ca_certificate_option, 4),
  [339] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ca_certificate_option, 4),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_follow_redirect_option, 4),
  [343] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_follow_redirect_option, 4),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insecure_option, 4),
  [347] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_insecure_option, 4),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_max_redirs_option, 4),
  [351] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_max_redirs_option, 4),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_retry_interval_option, 4),
  [355] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_retry_interval_option, 4),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_retry_max_count_option, 4),
  [359] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_retry_max_count_option, 4),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_option, 4),
  [363] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_option, 4),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_very_verbose_option, 4),
  [367] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_very_verbose_option, 4),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ca_certificate_option, 3),
  [371] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ca_certificate_option, 3),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_string_params_section, 4),
  [375] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query_string_params_section, 4),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_string_params_section, 5),
  [379] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query_string_params_section, 5),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_form_params_section, 5),
  [383] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_form_params_section, 5),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cookies_section, 4),
  [387] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cookies_section, 4),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cookies_section, 3),
  [391] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cookies_section, 3),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cookies_section, 5),
  [395] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cookies_section, 5),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_form_params_section, 3),
  [399] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_form_params_section, 3),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_string_params_section, 3),
  [403] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query_string_params_section, 3),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_form_params_section, 4),
  [407] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_form_params_section, 4),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_request_repeat2, 2),
  [411] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_request_repeat2, 2),
  [413] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat2, 2), SHIFT_REPEAT(402),
  [416] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat2, 2), SHIFT_REPEAT(401),
  [419] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat2, 2), SHIFT_REPEAT(394),
  [422] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat2, 2), SHIFT_REPEAT(327),
  [425] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat2, 2), SHIFT_REPEAT(410),
  [428] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat2, 2), SHIFT_REPEAT(398),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_hurl_file_repeat2, 2),
  [433] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_hurl_file_repeat2, 2), SHIFT_REPEAT(52),
  [436] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_hurl_file_repeat2, 2),
  [438] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_hurl_file_repeat2, 2), SHIFT_REPEAT(52),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assert, 3),
  [443] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assert, 3),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assert, 4),
  [447] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assert, 4),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [451] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [453] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__comment_or_new_line_repeat1, 2), SHIFT_REPEAT(53),
  [456] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__comment_or_new_line_repeat1, 2), SHIFT_REPEAT(53),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 2),
  [461] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 2),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_captures_section, 3),
  [465] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_captures_section, 3),
  [467] = {.entry = {.count = 1, .reusable = false}}, SHIFT(237),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(500),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_captures_section_repeat1, 2),
  [475] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_captures_section_repeat1, 2),
  [477] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_captures_section_repeat1, 2), SHIFT_REPEAT(237),
  [480] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_captures_section_repeat1, 2), SHIFT_REPEAT(500),
  [483] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_captures_section_repeat1, 2), SHIFT_REPEAT(329),
  [486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_captures_section, 2),
  [488] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_captures_section, 2),
  [490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request_section, 1),
  [492] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request_section, 1),
  [494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_basic_auth_section, 4),
  [496] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_basic_auth_section, 4),
  [498] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_capture_repeat1, 2), SHIFT_REPEAT(311),
  [501] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_capture_repeat1, 2),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_capture_repeat1, 2),
  [505] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_capture_repeat1, 2), SHIFT_REPEAT(76),
  [508] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_capture_repeat1, 2), SHIFT_REPEAT(77),
  [511] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_capture_repeat1, 2), SHIFT_REPEAT(78),
  [514] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_capture_repeat1, 2), SHIFT_REPEAT(79),
  [517] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_capture_repeat1, 2), SHIFT_REPEAT(80),
  [520] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_capture_repeat1, 2), SHIFT_REPEAT(81),
  [523] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_response_repeat1, 2),
  [525] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_response_repeat1, 2),
  [527] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_response_repeat1, 2), SHIFT_REPEAT(374),
  [530] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_response_repeat1, 2), SHIFT_REPEAT(373),
  [533] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__comment_or_new_line_repeat1, 2), SHIFT_REPEAT(64),
  [536] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__comment_or_new_line_repeat1, 2), SHIFT_REPEAT(64),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [541] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [543] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_capture, 4),
  [545] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_capture, 4),
  [547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_capture, 5),
  [549] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_capture, 5),
  [551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response_section, 1),
  [553] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_response_section, 1),
  [555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filter, 1),
  [557] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_filter, 1),
  [559] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_string, 2),
  [561] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_string, 2),
  [563] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regex, 2),
  [565] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_regex, 2),
  [567] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regex_filter, 2),
  [569] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_regex_filter, 2),
  [571] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regex, 3),
  [573] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_regex, 3),
  [575] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_string, 3),
  [577] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_string, 3),
  [579] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_count_filter, 1),
  [581] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_count_filter, 1),
  [583] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url_encode_filter, 1),
  [585] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_url_encode_filter, 1),
  [587] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url_decode_filter, 1),
  [589] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_url_decode_filter, 1),
  [591] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_html_encode_filter, 1),
  [593] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_html_encode_filter, 1),
  [595] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_html_decode_filter, 1),
  [597] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_html_decode_filter, 1),
  [599] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_to_int_filter, 1),
  [601] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_to_int_filter, 1),
  [603] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_md5_query, 1),
  [605] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_md5_query, 1),
  [607] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_duration_query, 1),
  [609] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_duration_query, 1),
  [611] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xpath_query, 2),
  [613] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xpath_query, 2),
  [615] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regex_query, 2),
  [617] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_regex_query, 2),
  [619] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_status_query, 1),
  [621] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_status_query, 1),
  [623] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url_query, 1),
  [625] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_url_query, 1),
  [627] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body_query, 1),
  [629] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_body_query, 1),
  [631] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sha256_query, 1),
  [633] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sha256_query, 1),
  [635] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bytes_query, 1),
  [637] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bytes_query, 1),
  [639] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jsonpath_query, 2),
  [641] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_jsonpath_query, 2),
  [643] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query, 1),
  [645] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query, 1),
  [647] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_query, 2),
  [649] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_query, 2),
  [651] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cookie_query, 2),
  [653] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cookie_query, 2),
  [655] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_query, 2),
  [657] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header_query, 2),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(435),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [685] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entry, 1),
  [687] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_entry, 1),
  [689] = {.entry = {.count = 1, .reusable = false}}, SHIFT(440),
  [691] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hurl_file, 1),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(550),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(471),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(481),
  [707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [709] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 6),
  [711] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 6),
  [713] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_hurl_file_repeat1, 2),
  [715] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_hurl_file_repeat1, 2), SHIFT_REPEAT(288),
  [718] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_hurl_file_repeat1, 2),
  [720] = {.entry = {.count = 1, .reusable = false}}, SHIFT(231),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(523),
  [724] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_key_value, 2),
  [726] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [728] = {.entry = {.count = 1, .reusable = false}}, SHIFT(248),
  [730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [732] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 2),
  [734] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_body, 2),
  [736] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entry, 2),
  [738] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_entry, 2),
  [740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [742] = {.entry = {.count = 1, .reusable = false}}, SHIFT(217),
  [744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [756] = {.entry = {.count = 1, .reusable = false}}, SHIFT(316),
  [758] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [760] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [762] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [764] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [766] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [768] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [770] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [772] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response, 6),
  [774] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_response, 6),
  [776] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entry, 3),
  [778] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_entry, 3),
  [780] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_capture_repeat1, 2), SHIFT_REPEAT(316),
  [783] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_capture_repeat1, 2), SHIFT_REPEAT(189),
  [786] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_capture_repeat1, 2), SHIFT_REPEAT(190),
  [789] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_capture_repeat1, 2), SHIFT_REPEAT(191),
  [792] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_capture_repeat1, 2), SHIFT_REPEAT(193),
  [795] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_capture_repeat1, 2), SHIFT_REPEAT(195),
  [798] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_capture_repeat1, 2), SHIFT_REPEAT(171),
  [801] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 1),
  [803] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 2),
  [805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [807] = {.entry = {.count = 1, .reusable = false}}, SHIFT(357),
  [809] = {.entry = {.count = 1, .reusable = false}}, SHIFT(238),
  [811] = {.entry = {.count = 1, .reusable = false}}, SHIFT(328),
  [813] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_string, 1),
  [815] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [817] = {.entry = {.count = 1, .reusable = false}}, SHIFT(300),
  [819] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [821] = {.entry = {.count = 1, .reusable = false}}, SHIFT(330),
  [823] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [825] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_value_string_repeat1, 2),
  [827] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_string_repeat1, 2), SHIFT_REPEAT(173),
  [830] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_string_repeat1, 2), SHIFT_REPEAT(248),
  [833] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_value_string_repeat1, 2), SHIFT_REPEAT(365),
  [836] = {.entry = {.count = 1, .reusable = false}}, SHIFT(205),
  [838] = {.entry = {.count = 1, .reusable = false}}, SHIFT(264),
  [840] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [842] = {.entry = {.count = 1, .reusable = false}}, SHIFT(491),
  [844] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [848] = {.entry = {.count = 1, .reusable = false}}, SHIFT(204),
  [850] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_quoted_string_repeat1, 2),
  [852] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_string_repeat1, 2), SHIFT_REPEAT(300),
  [855] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_string_repeat1, 2), SHIFT_REPEAT(162),
  [858] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_string_repeat1, 2), SHIFT_REPEAT(330),
  [861] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multiline_string_repeat1, 2), SHIFT_REPEAT(198),
  [864] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multiline_string_repeat1, 2), SHIFT_REPEAT(194),
  [867] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_multiline_string_repeat1, 2),
  [869] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multiline_string_repeat1, 2), SHIFT_REPEAT(196),
  [872] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_multiline_string_repeat1, 2), SHIFT_REPEAT(332),
  [875] = {.entry = {.count = 1, .reusable = false}}, SHIFT(259),
  [877] = {.entry = {.count = 1, .reusable = false}}, SHIFT(493),
  [879] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [881] = {.entry = {.count = 1, .reusable = false}}, SHIFT(249),
  [883] = {.entry = {.count = 1, .reusable = false}}, SHIFT(502),
  [885] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_oneline_string_repeat1, 2), SHIFT_REPEAT(236),
  [888] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_oneline_string_repeat1, 2),
  [890] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_oneline_string_repeat1, 2), SHIFT_REPEAT(465),
  [893] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_oneline_string_repeat1, 2), SHIFT_REPEAT(344),
  [896] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_string, 1),
  [898] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_key_string, 1),
  [900] = {.entry = {.count = 1, .reusable = false}}, SHIFT(545),
  [902] = {.entry = {.count = 1, .reusable = false}}, SHIFT(331),
  [904] = {.entry = {.count = 1, .reusable = false}}, SHIFT(234),
  [906] = {.entry = {.count = 1, .reusable = false}}, SHIFT(347),
  [908] = {.entry = {.count = 1, .reusable = false}}, SHIFT(236),
  [910] = {.entry = {.count = 1, .reusable = false}}, SHIFT(469),
  [912] = {.entry = {.count = 1, .reusable = false}}, SHIFT(465),
  [914] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [916] = {.entry = {.count = 1, .reusable = false}}, SHIFT(360),
  [918] = {.entry = {.count = 1, .reusable = false}}, SHIFT(494),
  [920] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_key_string_repeat1, 2),
  [922] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_key_string_repeat1, 2),
  [924] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_string_repeat1, 2), SHIFT_REPEAT(225),
  [927] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_string_repeat1, 2), SHIFT_REPEAT(488),
  [930] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_string_repeat1, 2), SHIFT_REPEAT(336),
  [933] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_filename, 1),
  [935] = {.entry = {.count = 1, .reusable = false}}, SHIFT(497),
  [937] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [939] = {.entry = {.count = 1, .reusable = false}}, SHIFT(304),
  [941] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [943] = {.entry = {.count = 1, .reusable = false}}, SHIFT(267),
  [945] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_filename_repeat1, 2),
  [947] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_filename_repeat1, 2), SHIFT_REPEAT(357),
  [950] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_filename_repeat1, 2), SHIFT_REPEAT(238),
  [953] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_filename_repeat1, 2), SHIFT_REPEAT(328),
  [956] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_filename_repeat1, 2), SHIFT_REPEAT(331),
  [959] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_filename_repeat1, 2), SHIFT_REPEAT(234),
  [962] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_filename_repeat1, 2), SHIFT_REPEAT(347),
  [965] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_json_string_repeat1, 2),
  [967] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_string_repeat1, 2), SHIFT_REPEAT(175),
  [970] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_string_repeat1, 2), SHIFT_REPEAT(304),
  [973] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_json_string_repeat1, 2), SHIFT_REPEAT(346),
  [976] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [978] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer, 1),
  [980] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [982] = {.entry = {.count = 1, .reusable = false}}, SHIFT(293),
  [984] = {.entry = {.count = 1, .reusable = false}}, SHIFT(294),
  [986] = {.entry = {.count = 1, .reusable = false}}, SHIFT(447),
  [988] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_integer_repeat1, 2),
  [990] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_integer_repeat1, 2), SHIFT_REPEAT(212),
  [993] = {.entry = {.count = 1, .reusable = false}}, SHIFT(453),
  [995] = {.entry = {.count = 1, .reusable = false}}, SHIFT(275),
  [997] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_string_repeat1, 2), SHIFT_REPEAT(231),
  [1000] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_string_repeat1, 2), SHIFT_REPEAT(523),
  [1003] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_string_repeat1, 2), SHIFT_REPEAT(348),
  [1006] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_string_repeat1, 2), SHIFT_REPEAT(237),
  [1009] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_string_repeat1, 2), SHIFT_REPEAT(500),
  [1012] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_string_repeat1, 2), SHIFT_REPEAT(329),
  [1015] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_name, 2),
  [1017] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_number, 1),
  [1019] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [1021] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [1023] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_value_string_content_repeat1, 2),
  [1025] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_string_content_repeat1, 2), SHIFT_REPEAT(173),
  [1028] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_string_content_repeat1, 2), SHIFT_REPEAT(248),
  [1031] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_value_string_content_repeat1, 2),
  [1033] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [1035] = {.entry = {.count = 1, .reusable = true}}, SHIFT(437),
  [1037] = {.entry = {.count = 1, .reusable = false}}, SHIFT(273),
  [1039] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__multiline_string_text_repeat1, 2),
  [1041] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__multiline_string_text_repeat1, 2), SHIFT_REPEAT(174),
  [1044] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__multiline_string_text_repeat1, 2),
  [1046] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [1048] = {.entry = {.count = 1, .reusable = true}}, SHIFT(441),
  [1050] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_quoted_string_content_repeat1, 2),
  [1052] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_string_content_repeat1, 2), SHIFT_REPEAT(300),
  [1055] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_string_content_repeat1, 2), SHIFT_REPEAT(162),
  [1058] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_string_content, 1),
  [1060] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_string_content, 1),
  [1062] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_string_content, 1),
  [1064] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [1066] = {.entry = {.count = 1, .reusable = true}}, SHIFT(446),
  [1068] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__multiline_string_text, 1),
  [1070] = {.entry = {.count = 1, .reusable = false}}, SHIFT(202),
  [1072] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multiline_string_text, 1),
  [1074] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [1076] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline_string_content, 1),
  [1078] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_string_content, 1),
  [1080] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multiline_string_content_repeat1, 2), SHIFT_REPEAT(200),
  [1083] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multiline_string_content_repeat1, 2), SHIFT_REPEAT(194),
  [1086] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_multiline_string_content_repeat1, 2),
  [1088] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multiline_string_content_repeat1, 2), SHIFT_REPEAT(196),
  [1091] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_multiline_string_content_repeat1, 2),
  [1093] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__multiline_string_text, 2),
  [1095] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [1097] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multiline_string_text, 2),
  [1099] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fraction, 2),
  [1101] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_oneline_string_content_repeat1, 2), SHIFT_REPEAT(236),
  [1104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_oneline_string_content_repeat1, 2),
  [1106] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_oneline_string_content_repeat1, 2), SHIFT_REPEAT(465),
  [1109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_oneline_string_content_repeat1, 2),
  [1111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(472),
  [1113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [1115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(371),
  [1117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_digit, 1),
  [1119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneline_string_content, 1),
  [1121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneline_string_content, 1),
  [1123] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_integer_repeat1, 2), SHIFT_REPEAT(253),
  [1126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_integer_repeat1, 2),
  [1128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [1130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(551),
  [1132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(542),
  [1134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [1136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [1138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(208),
  [1140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_key_string_content_repeat1, 2),
  [1142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_key_string_content_repeat1, 2),
  [1144] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_string_content_repeat1, 2), SHIFT_REPEAT(223),
  [1147] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_string_content_repeat1, 2), SHIFT_REPEAT(488),
  [1150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer, 1),
  [1152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_string_content, 1),
  [1154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_key_string_content, 1),
  [1156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exponent, 3),
  [1158] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_string_content_repeat1, 2), SHIFT_REPEAT(227),
  [1161] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_string_content_repeat1, 2), SHIFT_REPEAT(500),
  [1164] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_string_content_repeat1, 2), SHIFT_REPEAT(228),
  [1167] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_string_content_repeat1, 2), SHIFT_REPEAT(523),
  [1170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fraction, 2),
  [1172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_filename_content_repeat1, 2),
  [1174] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_filename_content_repeat1, 2), SHIFT_REPEAT(331),
  [1177] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_filename_content_repeat1, 2), SHIFT_REPEAT(233),
  [1180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_filename_content, 1),
  [1182] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_regex_content_repeat1, 2), SHIFT_REPEAT(472),
  [1185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_regex_content_repeat1, 2),
  [1187] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_regex_content_repeat1, 2), SHIFT_REPEAT(371),
  [1190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [1192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [1194] = {.entry = {.count = 1, .reusable = false}}, SHIFT(295),
  [1196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_regex_content, 1),
  [1198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_number, 2),
  [1200] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_filename_content_repeat1, 2), SHIFT_REPEAT(357),
  [1203] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_filename_content_repeat1, 2), SHIFT_REPEAT(241),
  [1206] = {.entry = {.count = 1, .reusable = false}}, SHIFT(409),
  [1208] = {.entry = {.count = 1, .reusable = false}}, SHIFT(263),
  [1210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_number, 1),
  [1212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exponent, 2),
  [1214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_value, 1),
  [1216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_key_string_repeat1, 1),
  [1218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_value, 1),
  [1220] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__comment_or_new_line_repeat1, 2), SHIFT_REPEAT(245),
  [1223] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__comment_or_new_line_repeat1, 2), SHIFT_REPEAT(245),
  [1226] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_value_string_text_repeat1, 2),
  [1228] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_string_text_repeat1, 2), SHIFT_REPEAT(247),
  [1231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_value_string_text_repeat1, 2),
  [1233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_string_text, 1),
  [1235] = {.entry = {.count = 1, .reusable = false}}, SHIFT(247),
  [1237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_string_text, 1),
  [1239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_multiline_string_content_repeat1, 1),
  [1241] = {.entry = {.count = 1, .reusable = false}}, SHIFT(466),
  [1243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_multiline_string_content_repeat1, 1),
  [1245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline_string_escaped_char, 3),
  [1247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_string_escaped_char, 3),
  [1249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_string_escaped_char, 2),
  [1251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_key_string_escaped_char, 2),
  [1253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unicode_char, 6),
  [1255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unicode_char, 6),
  [1257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_digit, 1),
  [1259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_template, 3),
  [1261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template, 3),
  [1263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [1265] = {.entry = {.count = 1, .reusable = false}}, SHIFT(245),
  [1267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hurl_file, 2),
  [1269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [1271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline_string_escaped_char, 2),
  [1273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_string_escaped_char, 2),
  [1275] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_hurl_file_repeat2, 2), SHIFT_REPEAT(11),
  [1278] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_hurl_file_repeat2, 2), SHIFT_REPEAT(11),
  [1281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [1283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_string, 3),
  [1285] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneline_string_escaped_char, 3),
  [1287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneline_string_escaped_char, 3),
  [1289] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_filename_escaped_char, 2),
  [1291] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_number, 2),
  [1293] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_string_escaped_char, 2),
  [1295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_string_escaped_char, 2),
  [1297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_string, 2),
  [1299] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_exponent, 3),
  [1301] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hexdigit, 1),
  [1303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hexdigit, 1),
  [1305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [1307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [1309] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneline_string_text, 2),
  [1311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneline_string_text, 2),
  [1313] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_method, 1),
  [1315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method, 1),
  [1317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(547),
  [1319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [1321] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_string_escaped_char, 6),
  [1323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_string_escaped_char, 6),
  [1325] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_string_escaped_char, 2),
  [1327] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_invalid_quoted_string_escaped_char, 2),
  [1329] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneline_string_escaped_char, 2),
  [1331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneline_string_escaped_char, 2),
  [1333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [1335] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_string_text, 1),
  [1337] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_string_content, 1),
  [1339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_string_content, 1),
  [1341] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_string_text, 1),
  [1343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_string_text, 1),
  [1345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(501),
  [1347] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_string_escaped_char, 2),
  [1349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_string_escaped_char, 2),
  [1351] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_multipart_form_data_section_repeat1, 2), SHIFT_REPEAT(256),
  [1354] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multipart_form_data_section_repeat1, 2), SHIFT_REPEAT(256),
  [1357] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_string_escaped_char, 3),
  [1359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_string_escaped_char, 3),
  [1361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_oneline_hex_repeat1, 2),
  [1363] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_oneline_hex_repeat1, 2), SHIFT_REPEAT(363),
  [1366] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_exponent, 2),
  [1368] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_query_string_params_section_repeat1, 2), SHIFT_REPEAT(256),
  [1371] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_string_params_section_repeat1, 2), SHIFT_REPEAT(256),
  [1374] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_string_escaped_char, 3),
  [1376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_object, 4),
  [1378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [1380] = {.entry = {.count = 1, .reusable = false}}, SHIFT(256),
  [1382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(536),
  [1384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [1386] = {.entry = {.count = 1, .reusable = false}}, SHIFT(322),
  [1388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [1390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [1392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [1394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [1396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [1398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(499),
  [1400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [1402] = {.entry = {.count = 1, .reusable = false}}, SHIFT(269),
  [1404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_value, 2),
  [1406] = {.entry = {.count = 1, .reusable = false}}, SHIFT(555),
  [1408] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_file_value, 2),
  [1410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(496),
  [1412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_json_object_repeat1, 2),
  [1414] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_json_object_repeat1, 2), SHIFT_REPEAT(287),
  [1417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(517),
  [1419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_value, 3),
  [1421] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_key_value, 3),
  [1423] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_regex_escaped_char, 2),
  [1425] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_regex_text, 1),
  [1427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_array, 4),
  [1429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_predicate_value, 1),
  [1431] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_predicate_value, 1),
  [1433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_number, 3),
  [1435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_greater_predicate, 2),
  [1437] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_greater_predicate, 2),
  [1439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_greater_or_equal_predicate, 2),
  [1441] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_greater_or_equal_predicate, 2),
  [1443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_less_predicate, 2),
  [1445] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_less_predicate, 2),
  [1447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_array, 3),
  [1449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_less_or_equal_predicate, 2),
  [1451] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_less_or_equal_predicate, 2),
  [1453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_object, 3),
  [1455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(490),
  [1457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [1459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_null, 1),
  [1461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_value, 3),
  [1463] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_file_value, 3),
  [1465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_value, 1),
  [1467] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_value, 1),
  [1469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_object, 2),
  [1471] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_json_array_repeat1, 2), SHIFT_REPEAT(111),
  [1474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_json_array_repeat1, 2),
  [1476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(486),
  [1478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [1480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [1482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version, 1),
  [1484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_key_value, 3),
  [1486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [1488] = {.entry = {.count = 1, .reusable = false}}, SHIFT(451),
  [1490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [1492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [1494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [1496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [1498] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_string, 2),
  [1500] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_end_with_predicate, 2),
  [1502] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_end_with_predicate, 2),
  [1504] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_with_predicate, 2),
  [1506] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_with_predicate, 2),
  [1508] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_not_equal_predicate, 2),
  [1510] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_not_equal_predicate, 2),
  [1512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [1514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_equal_predicate, 2),
  [1516] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_equal_predicate, 2),
  [1518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_predicate, 2),
  [1520] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_predicate, 2),
  [1522] = {.entry = {.count = 1, .reusable = false}}, SHIFT(286),
  [1524] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_string, 6),
  [1526] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline_string, 6),
  [1528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_multipart_form_data_section_repeat1, 2),
  [1530] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_multipart_form_data_section_repeat1, 2),
  [1532] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_query_string_params_section_repeat1, 2),
  [1534] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_query_string_params_section_repeat1, 2),
  [1536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneline_string, 2),
  [1538] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneline_string, 2),
  [1540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [1542] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1),
  [1544] = {.entry = {.count = 1, .reusable = false}}, SHIFT(370),
  [1546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [1548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [1550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [1552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [1554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [1556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [1558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [1560] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_number, 3),
  [1562] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_null, 1),
  [1564] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bytes, 1),
  [1566] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bytes, 1),
  [1568] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_predicate, 2),
  [1570] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_include_predicate, 2),
  [1572] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_array, 3),
  [1574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [1576] = {.entry = {.count = 1, .reusable = false}}, SHIFT(251),
  [1578] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_param, 4),
  [1580] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_file_param, 4),
  [1582] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_object, 3),
  [1584] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_string, 4),
  [1586] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline_string, 4),
  [1588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [1590] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_string, 3),
  [1592] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline_string, 3),
  [1594] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneline_string, 3),
  [1596] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneline_string, 3),
  [1598] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_object, 4),
  [1600] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_string, 3),
  [1602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [1604] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_status, 1),
  [1606] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_status, 1),
  [1608] = {.entry = {.count = 1, .reusable = false}}, SHIFT(274),
  [1610] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneline_hex, 3),
  [1612] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneline_hex, 3),
  [1614] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_string, 5),
  [1616] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline_string, 5),
  [1618] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneline_base64, 3),
  [1620] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneline_base64, 3),
  [1622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [1624] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contain_predicate, 2),
  [1626] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_contain_predicate, 2),
  [1628] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_predicate_func, 1),
  [1630] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_predicate_func, 1),
  [1632] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_predicate, 1),
  [1634] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_predicate, 1),
  [1636] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_collection_predicate, 1),
  [1638] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_collection_predicate, 1),
  [1640] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_match_predicate, 2),
  [1642] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_match_predicate, 2),
  [1644] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xml, 3),
  [1646] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xml, 3),
  [1648] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_predicate, 1),
  [1650] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_predicate, 1),
  [1652] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_predicate, 1),
  [1654] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean_predicate, 1),
  [1656] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneline_file, 3),
  [1658] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneline_file, 3),
  [1660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [1662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(503),
  [1664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(510),
  [1666] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_array, 4),
  [1668] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float, 2),
  [1670] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float, 2),
  [1672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [1674] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multipart_form_data_param, 1),
  [1676] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multipart_form_data_param, 1),
  [1678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [1680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [1682] = {.entry = {.count = 1, .reusable = false}}, SHIFT(278),
  [1684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [1686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [1688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [1690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [1692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [1694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [1696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [1698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [1700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [1702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [1704] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float_predicate, 1),
  [1706] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float_predicate, 1),
  [1708] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [1712] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_predicate, 1),
  [1714] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer_predicate, 1),
  [1716] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_key_string, 1, .production_id = 1),
  [1718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [1720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [1722] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exist_predicate, 1),
  [1724] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_exist_predicate, 1),
  [1726] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_object, 2),
  [1728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [1730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [1732] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneline_file, 2),
  [1734] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneline_file, 2),
  [1736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(513),
  [1738] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneline_hex, 2),
  [1740] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneline_hex, 2),
  [1742] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_value, 4),
  [1744] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_file_value, 4),
  [1746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(516),
  [1748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(515),
  [1750] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_string_type, 1),
  [1752] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 3),
  [1754] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_definition, 3),
  [1756] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_contenttype, 1),
  [1758] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_file_contenttype, 1),
  [1760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
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
