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
#define STATE_COUNT 601
#define LARGE_STATE_COUNT 19
#define SYMBOL_COUNT 327
#define ALIAS_COUNT 1
#define TOKEN_COUNT 152
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
  anon_sym_HTTP = 22,
  aux_sym_status_token1 = 23,
  anon_sym_STAR = 24,
  anon_sym_LBRACKBasicAuth_RBRACK = 25,
  anon_sym_LBRACKQueryStringParams_RBRACK = 26,
  anon_sym_LBRACKFormParams_RBRACK = 27,
  anon_sym_LBRACKMultipartFormData_RBRACK = 28,
  anon_sym_LBRACKCookies_RBRACK = 29,
  anon_sym_LBRACKCaptures_RBRACK = 30,
  anon_sym_LBRACKAsserts_RBRACK = 31,
  anon_sym_LBRACKOptions_RBRACK = 32,
  anon_sym_COLON = 33,
  anon_sym_COLON2 = 34,
  anon_sym_file_COMMA = 35,
  anon_sym_SEMI = 36,
  aux_sym_file_contenttype_token1 = 37,
  anon_sym_cacert = 38,
  anon_sym_location = 39,
  anon_sym_insecure = 40,
  anon_sym_max_DASHredirs = 41,
  anon_sym_retry = 42,
  anon_sym_retry_DASHinterval = 43,
  anon_sym_retry_DASHmax_DASHcount = 44,
  anon_sym_variable = 45,
  anon_sym_verbose = 46,
  anon_sym_very_DASHverbose = 47,
  anon_sym_EQ = 48,
  anon_sym_status = 49,
  anon_sym_url = 50,
  anon_sym_header = 51,
  anon_sym_cookie = 52,
  anon_sym_body = 53,
  anon_sym_xpath = 54,
  anon_sym_jsonpath = 55,
  anon_sym_regex = 56,
  anon_sym_duration = 57,
  anon_sym_sha256 = 58,
  anon_sym_md5 = 59,
  anon_sym_bytes = 60,
  anon_sym_not = 61,
  anon_sym_equals = 62,
  anon_sym_EQ_EQ = 63,
  anon_sym_notEquals = 64,
  anon_sym_BANG_EQ = 65,
  anon_sym_greaterThan = 66,
  anon_sym_GT = 67,
  anon_sym_greaterThanOrEquals = 68,
  anon_sym_GT_EQ = 69,
  anon_sym_lessThan = 70,
  anon_sym_LT = 71,
  anon_sym_lessThanOrEquals = 72,
  anon_sym_LT_EQ = 73,
  anon_sym_startsWith = 74,
  anon_sym_endsWith = 75,
  anon_sym_contains = 76,
  anon_sym_matches = 77,
  anon_sym_exists = 78,
  anon_sym_includes = 79,
  anon_sym_isInteger = 80,
  anon_sym_isFloat = 81,
  anon_sym_isBoolean = 82,
  anon_sym_isString = 83,
  anon_sym_isCollection = 84,
  anon_sym_LT_QMARK = 85,
  aux_sym_xml_prolog_tag_token1 = 86,
  anon_sym_QMARK_GT = 87,
  aux_sym_xml_open_tag_token1 = 88,
  anon_sym_LT_SLASH = 89,
  aux_sym_xml_close_tag_token1 = 90,
  anon_sym_base64_COMMA = 91,
  aux_sym_oneline_base64_token1 = 92,
  anon_sym_hex_COMMA = 93,
  anon_sym_DQUOTE = 94,
  aux_sym_quoted_string_text_token1 = 95,
  anon_sym_BSLASH = 96,
  aux_sym_invalid_quoted_string_escaped_char_token1 = 97,
  anon_sym_b = 98,
  anon_sym_f = 99,
  anon_sym_n = 100,
  anon_sym_r = 101,
  anon_sym_t = 102,
  anon_sym_u = 103,
  sym_key_string_text = 104,
  anon_sym_BSLASH2 = 105,
  aux_sym_key_string_escaped_char_token1 = 106,
  aux_sym_value_string_text_token1 = 107,
  anon_sym_POUND = 108,
  anon_sym_BQUOTE = 109,
  aux_sym_oneline_string_text_token1 = 110,
  aux_sym_oneline_string_text_token2 = 111,
  anon_sym_BQUOTE_BQUOTE_BQUOTE = 112,
  anon_sym_base64 = 113,
  anon_sym_hex = 114,
  anon_sym_json = 115,
  anon_sym_xml = 116,
  anon_sym_graphql = 117,
  aux_sym__multiline_string_text_token1 = 118,
  anon_sym_LBRACE = 119,
  sym_filename_text = 120,
  aux_sym_filename_escaped_char_token1 = 121,
  anon_sym_RBRACE = 122,
  anon_sym_COMMA = 123,
  anon_sym_LBRACK = 124,
  anon_sym_RBRACK = 125,
  aux_sym_json_string_text_token1 = 126,
  anon_sym_LBRACE_LBRACE = 127,
  anon_sym_RBRACE_RBRACE = 128,
  aux_sym_variable_name_token1 = 129,
  aux_sym_variable_name_token2 = 130,
  anon_sym_count = 131,
  anon_sym_urlEncode = 132,
  anon_sym_urlDecode = 133,
  anon_sym_htmlEscape = 134,
  anon_sym_htmlUnescape = 135,
  anon_sym_toInt = 136,
  anon_sym_true = 137,
  anon_sym_false = 138,
  anon_sym_null = 139,
  aux_sym__alphanum_token1 = 140,
  aux_sym_digit_token1 = 141,
  aux_sym_hexdigit_token1 = 142,
  anon_sym_DOT = 143,
  anon_sym_e = 144,
  anon_sym_E = 145,
  anon_sym_PLUS = 146,
  anon_sym_DASH = 147,
  sym_comment = 148,
  anon_sym_SLASH = 149,
  aux_sym_regex_text_token1 = 150,
  aux_sym_regex_escaped_char_token1 = 151,
  sym_hurl_file = 152,
  sym_entry = 153,
  sym__comment_or_new_line = 154,
  sym_request = 155,
  sym_response = 156,
  sym_method = 157,
  sym_version = 158,
  sym_status = 159,
  sym_header = 160,
  sym_body = 161,
  sym_request_section = 162,
  sym_response_section = 163,
  sym_basic_auth_section = 164,
  sym_query_string_params_section = 165,
  sym_form_params_section = 166,
  sym_multipart_form_data_section = 167,
  sym_cookies_section = 168,
  sym_captures_section = 169,
  sym_asserts_section = 170,
  sym_options_section = 171,
  sym_key_value = 172,
  sym_multipart_form_data_param = 173,
  sym_file_param = 174,
  sym_file_value = 175,
  sym_file_contenttype = 176,
  sym_capture = 177,
  sym_assert = 178,
  sym_option = 179,
  sym_ca_certificate_option = 180,
  sym_follow_redirect_option = 181,
  sym_insecure_option = 182,
  sym_max_redirs_option = 183,
  sym_retry_option = 184,
  sym_retry_interval_option = 185,
  sym_retry_max_count_option = 186,
  sym_variable_option = 187,
  sym_verbose_option = 188,
  sym_very_verbose_option = 189,
  sym_variable_definition = 190,
  sym_variable_value = 191,
  sym_query = 192,
  sym_status_query = 193,
  sym_url_query = 194,
  sym_header_query = 195,
  sym_cookie_query = 196,
  sym_body_query = 197,
  sym_xpath_query = 198,
  sym_jsonpath_query = 199,
  sym_regex_query = 200,
  sym_variable_query = 201,
  sym_duration_query = 202,
  sym_sha256_query = 203,
  sym_md5_query = 204,
  sym_bytes_query = 205,
  sym_predicate = 206,
  sym_predicate_func = 207,
  sym_equal_predicate = 208,
  sym_not_equal_predicate = 209,
  sym_greater_predicate = 210,
  sym_greater_or_equal_predicate = 211,
  sym_less_predicate = 212,
  sym_less_or_equal_predicate = 213,
  sym_start_with_predicate = 214,
  sym_end_with_predicate = 215,
  sym_contain_predicate = 216,
  sym_match_predicate = 217,
  sym_exist_predicate = 218,
  sym_include_predicate = 219,
  sym_integer_predicate = 220,
  sym_float_predicate = 221,
  sym_boolean_predicate = 222,
  sym_string_predicate = 223,
  sym_collection_predicate = 224,
  sym_predicate_value = 225,
  sym_bytes = 226,
  sym_xml = 227,
  sym_xml_prolog_tag = 228,
  sym_xml_tag = 229,
  sym_xml_open_tag = 230,
  sym_xml_close_tag = 231,
  sym_oneline_base64 = 232,
  sym_oneline_file = 233,
  sym_oneline_hex = 234,
  sym_quoted_string = 235,
  sym_quoted_string_content = 236,
  sym_quoted_string_text = 237,
  sym_invalid_quoted_string_escaped_char = 238,
  sym_quoted_string_escaped_char = 239,
  sym_key_string = 240,
  sym_key_string_content = 241,
  sym_key_string_escaped_char = 242,
  sym_value_string = 243,
  sym_value_string_content = 244,
  sym_value_string_text = 245,
  sym_value_string_escaped_char = 246,
  sym_oneline_string = 247,
  sym_oneline_string_content = 248,
  sym_oneline_string_text = 249,
  sym_oneline_string_escaped_char = 250,
  sym_multiline_string = 251,
  sym_multiline_string_type = 252,
  sym_multiline_string_content = 253,
  sym__multiline_string_text = 254,
  sym_multiline_string_escaped_char = 255,
  sym_filename = 256,
  sym_filename_content = 257,
  sym_filename_escaped_char = 258,
  sym_unicode_char = 259,
  sym_json_value = 260,
  sym_json_object = 261,
  sym_json_key_value = 262,
  sym_json_key_string = 263,
  sym_json_array = 264,
  sym_json_string = 265,
  sym_json_string_content = 266,
  sym_json_string_text = 267,
  sym_json_string_escaped_char = 268,
  sym_json_number = 269,
  sym_template = 270,
  sym_expr = 271,
  sym_variable_name = 272,
  sym_filter = 273,
  sym_regex_filter = 274,
  sym_count_filter = 275,
  sym_url_encode_filter = 276,
  sym_url_decode_filter = 277,
  sym_html_encode_filter = 278,
  sym_html_decode_filter = 279,
  sym_to_int_filter = 280,
  sym_boolean = 281,
  sym_null = 282,
  sym_integer = 283,
  sym_float = 284,
  sym_digit = 285,
  sym_hexdigit = 286,
  sym_fraction = 287,
  sym_exponent = 288,
  sym_regex = 289,
  sym_regex_content = 290,
  sym_regex_text = 291,
  sym_regex_escaped_char = 292,
  aux_sym_hurl_file_repeat1 = 293,
  aux_sym_hurl_file_repeat2 = 294,
  aux_sym__comment_or_new_line_repeat1 = 295,
  aux_sym_request_repeat1 = 296,
  aux_sym_request_repeat2 = 297,
  aux_sym_response_repeat1 = 298,
  aux_sym_query_string_params_section_repeat1 = 299,
  aux_sym_multipart_form_data_section_repeat1 = 300,
  aux_sym_captures_section_repeat1 = 301,
  aux_sym_asserts_section_repeat1 = 302,
  aux_sym_options_section_repeat1 = 303,
  aux_sym_capture_repeat1 = 304,
  aux_sym_xml_repeat1 = 305,
  aux_sym_xml_tag_repeat1 = 306,
  aux_sym_oneline_hex_repeat1 = 307,
  aux_sym_quoted_string_repeat1 = 308,
  aux_sym_quoted_string_content_repeat1 = 309,
  aux_sym_key_string_repeat1 = 310,
  aux_sym_key_string_content_repeat1 = 311,
  aux_sym_value_string_repeat1 = 312,
  aux_sym_value_string_content_repeat1 = 313,
  aux_sym_value_string_text_repeat1 = 314,
  aux_sym_oneline_string_repeat1 = 315,
  aux_sym_oneline_string_content_repeat1 = 316,
  aux_sym_multiline_string_repeat1 = 317,
  aux_sym_multiline_string_content_repeat1 = 318,
  aux_sym__multiline_string_text_repeat1 = 319,
  aux_sym_filename_repeat1 = 320,
  aux_sym_filename_content_repeat1 = 321,
  aux_sym_json_object_repeat1 = 322,
  aux_sym_json_array_repeat1 = 323,
  aux_sym_json_string_repeat1 = 324,
  aux_sym_integer_repeat1 = 325,
  aux_sym_regex_content_repeat1 = 326,
  anon_alias_sym_json_key_string = 327,
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
  [anon_sym_HTTP] = "HTTP",
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
  [sym_xml_prolog_tag] = "xml_prolog_tag",
  [sym_xml_tag] = "xml_tag",
  [sym_xml_open_tag] = "xml_open_tag",
  [sym_xml_close_tag] = "xml_close_tag",
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
  [anon_sym_HTTP_SLASH1_DOT0] = anon_sym_HTTP_SLASH1_DOT0,
  [anon_sym_HTTP_SLASH1_DOT1] = anon_sym_HTTP_SLASH1_DOT1,
  [anon_sym_HTTP_SLASH2] = anon_sym_HTTP_SLASH2,
  [anon_sym_HTTP_SLASH_STAR] = anon_sym_HTTP_SLASH_STAR,
  [anon_sym_HTTP] = anon_sym_HTTP,
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
  [sym_xml_prolog_tag] = sym_xml_prolog_tag,
  [sym_xml_tag] = sym_xml_tag,
  [sym_xml_open_tag] = sym_xml_open_tag,
  [sym_xml_close_tag] = sym_xml_close_tag,
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
  [52] = 11,
  [53] = 12,
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
  [64] = 12,
  [65] = 11,
  [66] = 66,
  [67] = 67,
  [68] = 55,
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
  [115] = 114,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 113,
  [120] = 116,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 62,
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
  [140] = 135,
  [141] = 141,
  [142] = 136,
  [143] = 143,
  [144] = 143,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 141,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 160,
  [163] = 163,
  [164] = 164,
  [165] = 160,
  [166] = 153,
  [167] = 167,
  [168] = 168,
  [169] = 167,
  [170] = 170,
  [171] = 171,
  [172] = 163,
  [173] = 173,
  [174] = 174,
  [175] = 171,
  [176] = 170,
  [177] = 153,
  [178] = 178,
  [179] = 73,
  [180] = 86,
  [181] = 79,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 95,
  [188] = 188,
  [189] = 93,
  [190] = 92,
  [191] = 81,
  [192] = 91,
  [193] = 77,
  [194] = 74,
  [195] = 182,
  [196] = 76,
  [197] = 88,
  [198] = 80,
  [199] = 71,
  [200] = 156,
  [201] = 78,
  [202] = 70,
  [203] = 85,
  [204] = 90,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 89,
  [209] = 209,
  [210] = 82,
  [211] = 211,
  [212] = 155,
  [213] = 87,
  [214] = 84,
  [215] = 83,
  [216] = 94,
  [217] = 75,
  [218] = 72,
  [219] = 219,
  [220] = 220,
  [221] = 221,
  [222] = 222,
  [223] = 164,
  [224] = 224,
  [225] = 225,
  [226] = 226,
  [227] = 227,
  [228] = 228,
  [229] = 229,
  [230] = 178,
  [231] = 231,
  [232] = 232,
  [233] = 233,
  [234] = 234,
  [235] = 229,
  [236] = 236,
  [237] = 222,
  [238] = 238,
  [239] = 239,
  [240] = 240,
  [241] = 225,
  [242] = 242,
  [243] = 243,
  [244] = 244,
  [245] = 245,
  [246] = 246,
  [247] = 185,
  [248] = 248,
  [249] = 249,
  [250] = 250,
  [251] = 251,
  [252] = 240,
  [253] = 253,
  [254] = 254,
  [255] = 255,
  [256] = 256,
  [257] = 232,
  [258] = 258,
  [259] = 225,
  [260] = 260,
  [261] = 261,
  [262] = 232,
  [263] = 263,
  [264] = 246,
  [265] = 219,
  [266] = 266,
  [267] = 12,
  [268] = 268,
  [269] = 228,
  [270] = 49,
  [271] = 234,
  [272] = 272,
  [273] = 273,
  [274] = 261,
  [275] = 224,
  [276] = 276,
  [277] = 277,
  [278] = 278,
  [279] = 11,
  [280] = 280,
  [281] = 281,
  [282] = 282,
  [283] = 260,
  [284] = 261,
  [285] = 277,
  [286] = 261,
  [287] = 287,
  [288] = 288,
  [289] = 289,
  [290] = 290,
  [291] = 261,
  [292] = 261,
  [293] = 293,
  [294] = 245,
  [295] = 260,
  [296] = 261,
  [297] = 261,
  [298] = 298,
  [299] = 281,
  [300] = 261,
  [301] = 256,
  [302] = 302,
  [303] = 303,
  [304] = 260,
  [305] = 305,
  [306] = 242,
  [307] = 307,
  [308] = 308,
  [309] = 309,
  [310] = 310,
  [311] = 311,
  [312] = 312,
  [313] = 313,
  [314] = 314,
  [315] = 315,
  [316] = 316,
  [317] = 317,
  [318] = 261,
  [319] = 319,
  [320] = 320,
  [321] = 321,
  [322] = 281,
  [323] = 323,
  [324] = 324,
  [325] = 325,
  [326] = 326,
  [327] = 321,
  [328] = 328,
  [329] = 314,
  [330] = 330,
  [331] = 331,
  [332] = 332,
  [333] = 333,
  [334] = 334,
  [335] = 335,
  [336] = 260,
  [337] = 337,
  [338] = 338,
  [339] = 339,
  [340] = 340,
  [341] = 341,
  [342] = 342,
  [343] = 261,
  [344] = 344,
  [345] = 263,
  [346] = 307,
  [347] = 249,
  [348] = 348,
  [349] = 349,
  [350] = 350,
  [351] = 351,
  [352] = 351,
  [353] = 351,
  [354] = 351,
  [355] = 351,
  [356] = 351,
  [357] = 357,
  [358] = 351,
  [359] = 351,
  [360] = 360,
  [361] = 351,
  [362] = 351,
  [363] = 351,
  [364] = 364,
  [365] = 364,
  [366] = 366,
  [367] = 367,
  [368] = 368,
  [369] = 367,
  [370] = 370,
  [371] = 371,
  [372] = 372,
  [373] = 373,
  [374] = 374,
  [375] = 375,
  [376] = 374,
  [377] = 377,
  [378] = 357,
  [379] = 379,
  [380] = 380,
  [381] = 381,
  [382] = 382,
  [383] = 383,
  [384] = 261,
  [385] = 385,
  [386] = 324,
  [387] = 373,
  [388] = 372,
  [389] = 371,
  [390] = 390,
  [391] = 391,
  [392] = 392,
  [393] = 393,
  [394] = 394,
  [395] = 395,
  [396] = 396,
  [397] = 349,
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
  [413] = 390,
  [414] = 414,
  [415] = 415,
  [416] = 416,
  [417] = 417,
  [418] = 418,
  [419] = 419,
  [420] = 420,
  [421] = 421,
  [422] = 351,
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
  [433] = 433,
  [434] = 434,
  [435] = 435,
  [436] = 436,
  [437] = 437,
  [438] = 437,
  [439] = 437,
  [440] = 437,
  [441] = 441,
  [442] = 441,
  [443] = 441,
  [444] = 441,
  [445] = 445,
  [446] = 446,
  [447] = 445,
  [448] = 445,
  [449] = 445,
  [450] = 445,
  [451] = 436,
  [452] = 452,
  [453] = 436,
  [454] = 436,
  [455] = 437,
  [456] = 456,
  [457] = 457,
  [458] = 458,
  [459] = 459,
  [460] = 460,
  [461] = 461,
  [462] = 462,
  [463] = 463,
  [464] = 464,
  [465] = 464,
  [466] = 466,
  [467] = 467,
  [468] = 468,
  [469] = 469,
  [470] = 460,
  [471] = 459,
  [472] = 458,
  [473] = 457,
  [474] = 474,
  [475] = 475,
  [476] = 476,
  [477] = 436,
  [478] = 441,
  [479] = 251,
  [480] = 480,
  [481] = 456,
  [482] = 482,
  [483] = 483,
  [484] = 484,
  [485] = 485,
  [486] = 486,
  [487] = 487,
  [488] = 409,
  [489] = 489,
  [490] = 490,
  [491] = 491,
  [492] = 244,
  [493] = 493,
  [494] = 494,
  [495] = 495,
  [496] = 496,
  [497] = 497,
  [498] = 498,
  [499] = 499,
  [500] = 416,
  [501] = 501,
  [502] = 502,
  [503] = 503,
  [504] = 434,
  [505] = 505,
  [506] = 506,
  [507] = 507,
  [508] = 508,
  [509] = 509,
  [510] = 510,
  [511] = 323,
  [512] = 512,
  [513] = 513,
  [514] = 514,
  [515] = 391,
  [516] = 516,
  [517] = 517,
  [518] = 518,
  [519] = 519,
  [520] = 520,
  [521] = 521,
  [522] = 522,
  [523] = 350,
  [524] = 524,
  [525] = 525,
  [526] = 520,
  [527] = 527,
  [528] = 528,
  [529] = 529,
  [530] = 530,
  [531] = 487,
  [532] = 532,
  [533] = 533,
  [534] = 534,
  [535] = 535,
  [536] = 536,
  [537] = 530,
  [538] = 538,
  [539] = 539,
  [540] = 399,
  [541] = 541,
  [542] = 258,
  [543] = 543,
  [544] = 544,
  [545] = 392,
  [546] = 546,
  [547] = 547,
  [548] = 548,
  [549] = 549,
  [550] = 550,
  [551] = 551,
  [552] = 552,
  [553] = 553,
  [554] = 549,
  [555] = 555,
  [556] = 520,
  [557] = 529,
  [558] = 487,
  [559] = 559,
  [560] = 529,
  [561] = 520,
  [562] = 529,
  [563] = 520,
  [564] = 529,
  [565] = 529,
  [566] = 529,
  [567] = 529,
  [568] = 529,
  [569] = 529,
  [570] = 529,
  [571] = 547,
  [572] = 489,
  [573] = 573,
  [574] = 493,
  [575] = 575,
  [576] = 250,
  [577] = 577,
  [578] = 578,
  [579] = 579,
  [580] = 580,
  [581] = 310,
  [582] = 394,
  [583] = 433,
  [584] = 584,
  [585] = 529,
  [586] = 432,
  [587] = 587,
  [588] = 588,
  [589] = 589,
  [590] = 590,
  [591] = 591,
  [592] = 592,
  [593] = 593,
  [594] = 594,
  [595] = 595,
  [596] = 596,
  [597] = 597,
  [598] = 598,
  [599] = 599,
  [600] = 600,
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
      if (eof) ADVANCE(515);
      if (lookahead == '!') ADVANCE(56);
      if (lookahead == '"') ADVANCE(648);
      if (lookahead == '#') ADVANCE(836);
      if (lookahead == '*') ADVANCE(558);
      if (lookahead == '+') ADVANCE(897);
      if (lookahead == ',') ADVANCE(862);
      if (lookahead == '-') ADVANCE(898);
      if (lookahead == '.') ADVANCE(894);
      if (lookahead == '/') ADVANCE(900);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == ';') ADVANCE(578);
      if (lookahead == '<') ADVANCE(615);
      if (lookahead == '=') ADVANCE(591);
      if (lookahead == '>') ADVANCE(611);
      if (lookahead == '?') ADVANCE(58);
      if (lookahead == 'E') ADVANCE(896);
      if (lookahead == '[') ADVANCE(864);
      if (lookahead == '\\') ADVANCE(828);
      if (lookahead == ']') ADVANCE(869);
      if (lookahead == '`') ADVANCE(838);
      if (lookahead == 'b') ADVANCE(657);
      if (lookahead == 'e') ADVANCE(895);
      if (lookahead == 'f') ADVANCE(658);
      if (lookahead == 'n') ADVANCE(659);
      if (lookahead == 'r') ADVANCE(660);
      if (lookahead == 't') ADVANCE(661);
      if (lookahead == 'u') ADVANCE(662);
      if (lookahead == '{') ADVANCE(855);
      if (lookahead == '}') ADVANCE(861);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'd')) ADVANCE(878);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(557);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(514)
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(878);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(899);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(516);
      if (lookahead == '#') ADVANCE(507);
      if (lookahead == '\\') ADVANCE(653);
      if (lookahead == 'f') ADVANCE(832);
      if (lookahead == 'n') ADVANCE(834);
      if (lookahead == 't') ADVANCE(833);
      if (lookahead == '{') ADVANCE(835);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(831);
      if (aux_sym_value_string_text_token1_character_set_1(lookahead)) ADVANCE(831);
      if (lookahead != 0) ADVANCE(831);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(516);
      if (lookahead == '#') ADVANCE(507);
      if (lookahead == '\\') ADVANCE(653);
      if (lookahead == '{') ADVANCE(835);
      if (aux_sym_value_string_text_token1_character_set_1(lookahead)) ADVANCE(831);
      if (lookahead != 0) ADVANCE(831);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(516);
      if (lookahead == '#') ADVANCE(507);
      if (lookahead == 'b') ADVANCE(181);
      if (lookahead == 'c') ADVANCE(367);
      if (lookahead == 'g') ADVANCE(404);
      if (lookahead == 'h') ADVANCE(236);
      if (lookahead == 'j') ADVANCE(438);
      if (lookahead == 'r') ADVANCE(227);
      if (lookahead == 't') ADVANCE(349);
      if (lookahead == 'u') ADVANCE(397);
      if (lookahead == 'x') ADVANCE(316);
      if (aux_sym_value_string_text_token1_character_set_1(lookahead)) SKIP(4)
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(516);
      if (lookahead == '#') ADVANCE(507);
      if (aux_sym_value_string_text_token1_character_set_1(lookahead)) SKIP(5)
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(516);
      if (lookahead == '#') ADVANCE(507);
      if (aux_sym_value_string_text_token1_character_set_1(lookahead)) SKIP(6)
      if (lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(579);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(516);
      if (lookahead == '#') ADVANCE(507);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(824);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == '\\') ADVANCE(828);
      if (lookahead == '{') ADVANCE(505);
      if (aux_sym_value_string_text_token1_character_set_1(lookahead)) SKIP(5)
      END_STATE();
    case 8:
      if (lookahead == '\n') SKIP(32)
      if (lookahead == '#') ADVANCE(507);
      if (lookahead == '<') ADVANCE(616);
      if (lookahead == '\\') ADVANCE(653);
      if (lookahead == '{') ADVANCE(835);
      if (aux_sym_value_string_text_token1_character_set_1(lookahead)) ADVANCE(831);
      if (lookahead != 0) ADVANCE(831);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(517);
      if (lookahead == ' ') SKIP(10)
      if (lookahead == '#') ADVANCE(507);
      if (lookahead == '\\') ADVANCE(653);
      if (lookahead == '{') ADVANCE(857);
      if (sym_filename_text_character_set_1(lookahead)) ADVANCE(856);
      if (lookahead != 0 &&
          lookahead != ';') ADVANCE(859);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(517);
      if (lookahead == ' ') SKIP(10)
      if (lookahead == '#') ADVANCE(507);
      if (lookahead == '\\') ADVANCE(653);
      if (sym_filename_text_character_set_1(lookahead)) ADVANCE(856);
      if (lookahead != 0 &&
          lookahead != ';') ADVANCE(859);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(518);
      if (lookahead == '#') ADVANCE(852);
      if (lookahead == '\\') ADVANCE(653);
      if (lookahead == '`') ADVANCE(838);
      if (lookahead == '{') ADVANCE(855);
      if (aux_sym_value_string_text_token1_character_set_1(lookahead)) ADVANCE(851);
      if (lookahead != 0) ADVANCE(853);
      END_STATE();
    case 12:
      if (lookahead == '\n') SKIP(13)
      if (lookahead == '#') ADVANCE(507);
      if (lookahead == '\\') ADVANCE(653);
      if (lookahead == '`') ADVANCE(837);
      if (lookahead == '{') ADVANCE(841);
      if (aux_sym_value_string_text_token1_character_set_1(lookahead)) ADVANCE(840);
      if (lookahead != 0) ADVANCE(839);
      END_STATE();
    case 13:
      if (lookahead == '\n') SKIP(13)
      if (lookahead == '#') ADVANCE(507);
      if (lookahead == '\\') ADVANCE(653);
      if (lookahead == '`') ADVANCE(837);
      if (aux_sym_value_string_text_token1_character_set_1(lookahead)) ADVANCE(840);
      if (lookahead != 0) ADVANCE(839);
      END_STATE();
    case 14:
      if (lookahead == '\n') SKIP(14)
      if (lookahead == '#') ADVANCE(903);
      if (lookahead == '/') ADVANCE(900);
      if (lookahead == '\\') ADVANCE(653);
      if (aux_sym_value_string_text_token1_character_set_1(lookahead)) ADVANCE(902);
      if (lookahead != 0) ADVANCE(904);
      END_STATE();
    case 15:
      if (lookahead == '\n') SKIP(15)
      if (lookahead == '#') ADVANCE(907);
      if (aux_sym_value_string_text_token1_character_set_1(lookahead)) ADVANCE(906);
      if (lookahead != 0) ADVANCE(905);
      END_STATE();
    case 16:
      if (lookahead == '\n') ADVANCE(645);
      if (lookahead == '#') ADVANCE(507);
      if (aux_sym_value_string_text_token1_character_set_1(lookahead)) SKIP(16)
      if (('+' <= lookahead && lookahead <= '-') ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 17:
      if (lookahead == '!') ADVANCE(56);
      if (lookahead == '"') ADVANCE(648);
      if (lookahead == '#') ADVANCE(507);
      if (lookahead == '+') ADVANCE(897);
      if (lookahead == ',') ADVANCE(862);
      if (lookahead == '-') ADVANCE(898);
      if (lookahead == '/') ADVANCE(900);
      if (lookahead == ':') ADVANCE(576);
      if (lookahead == '<') ADVANCE(617);
      if (lookahead == '=') ADVANCE(57);
      if (lookahead == '>') ADVANCE(611);
      if (lookahead == '[') ADVANCE(863);
      if (lookahead == ']') ADVANCE(869);
      if (lookahead == '`') ADVANCE(142);
      if (lookahead == 'b') ADVANCE(165);
      if (lookahead == 'c') ADVANCE(344);
      if (lookahead == 'e') ADVANCE(326);
      if (lookahead == 'f') ADVANCE(148);
      if (lookahead == 'g') ADVANCE(405);
      if (lookahead == 'h') ADVANCE(234);
      if (lookahead == 'i') ADVANCE(328);
      if (lookahead == 'l') ADVANCE(250);
      if (lookahead == 'm') ADVANCE(170);
      if (lookahead == 'n') ADVANCE(359);
      if (lookahead == 'r') ADVANCE(227);
      if (lookahead == 's') ADVANCE(472);
      if (lookahead == 't') ADVANCE(350);
      if (lookahead == 'u') ADVANCE(397);
      if (lookahead == '{') ADVANCE(855);
      if (lookahead == '}') ADVANCE(506);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(892);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(18)
      END_STATE();
    case 18:
      if (lookahead == '!') ADVANCE(56);
      if (lookahead == '"') ADVANCE(648);
      if (lookahead == '#') ADVANCE(507);
      if (lookahead == '+') ADVANCE(897);
      if (lookahead == ',') ADVANCE(862);
      if (lookahead == '-') ADVANCE(898);
      if (lookahead == '/') ADVANCE(900);
      if (lookahead == ':') ADVANCE(576);
      if (lookahead == '<') ADVANCE(617);
      if (lookahead == '=') ADVANCE(57);
      if (lookahead == '>') ADVANCE(611);
      if (lookahead == '[') ADVANCE(863);
      if (lookahead == ']') ADVANCE(869);
      if (lookahead == '`') ADVANCE(142);
      if (lookahead == 'b') ADVANCE(165);
      if (lookahead == 'c') ADVANCE(344);
      if (lookahead == 'e') ADVANCE(326);
      if (lookahead == 'f') ADVANCE(148);
      if (lookahead == 'g') ADVANCE(405);
      if (lookahead == 'h') ADVANCE(234);
      if (lookahead == 'i') ADVANCE(328);
      if (lookahead == 'l') ADVANCE(250);
      if (lookahead == 'm') ADVANCE(170);
      if (lookahead == 'n') ADVANCE(359);
      if (lookahead == 'r') ADVANCE(227);
      if (lookahead == 's') ADVANCE(472);
      if (lookahead == 't') ADVANCE(350);
      if (lookahead == 'u') ADVANCE(397);
      if (lookahead == '{') ADVANCE(854);
      if (lookahead == '}') ADVANCE(506);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(892);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(18)
      END_STATE();
    case 19:
      if (lookahead == '"') ADVANCE(648);
      if (lookahead == '#') ADVANCE(836);
      if (lookahead == ',') ADVANCE(860);
      if (lookahead == ';') ADVANCE(578);
      if (lookahead == 'f') ADVANCE(147);
      if (lookahead == 'n') ADVANCE(482);
      if (lookahead == 't') ADVANCE(391);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(892);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(19)
      END_STATE();
    case 20:
      if (lookahead == '"') ADVANCE(648);
      if (lookahead == '#') ADVANCE(836);
      if (lookahead == '\\') ADVANCE(653);
      if (lookahead == '`') ADVANCE(837);
      if (lookahead == 'b') ADVANCE(657);
      if (lookahead == 'f') ADVANCE(658);
      if (lookahead == 'n') ADVANCE(659);
      if (lookahead == 'r') ADVANCE(660);
      if (lookahead == 't') ADVANCE(661);
      if (lookahead == 'u') ADVANCE(662);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(20)
      END_STATE();
    case 21:
      if (lookahead == '"') ADVANCE(648);
      if (lookahead == '#') ADVANCE(836);
      if (sym_key_string_text_character_set_1(lookahead)) ADVANCE(824);
      if (lookahead == ',') ADVANCE(860);
      if (lookahead == ';') ADVANCE(578);
      if (lookahead == '\\') ADVANCE(828);
      if (lookahead == 'f') ADVANCE(806);
      if (lookahead == 'n') ADVANCE(798);
      if (lookahead == 't') ADVANCE(771);
      if (lookahead == '{') ADVANCE(505);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(824);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(19)
      END_STATE();
    case 22:
      if (lookahead == '"') ADVANCE(648);
      if (lookahead == '#') ADVANCE(507);
      if (lookahead == ',') ADVANCE(862);
      if (lookahead == '.') ADVANCE(894);
      if (lookahead == ':') ADVANCE(576);
      if (lookahead == '<') ADVANCE(618);
      if (lookahead == '=') ADVANCE(590);
      if (lookahead == '>') ADVANCE(610);
      if (lookahead == 'E') ADVANCE(896);
      if (lookahead == ']') ADVANCE(869);
      if (lookahead == 'b') ADVANCE(343);
      if (lookahead == 'c') ADVANCE(363);
      if (lookahead == 'd') ADVANCE(485);
      if (lookahead == 'e') ADVANCE(895);
      if (lookahead == 'h') ADVANCE(245);
      if (lookahead == 'j') ADVANCE(429);
      if (lookahead == 'm') ADVANCE(204);
      if (lookahead == 'r') ADVANCE(227);
      if (lookahead == 's') ADVANCE(267);
      if (lookahead == 'u') ADVANCE(392);
      if (lookahead == 'v') ADVANCE(161);
      if (lookahead == 'x') ADVANCE(374);
      if (lookahead == '{') ADVANCE(854);
      if (lookahead == '}') ADVANCE(861);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(892);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(22)
      END_STATE();
    case 23:
      if (lookahead == '"') ADVANCE(648);
      if (lookahead == '#') ADVANCE(649);
      if (lookahead == '\\') ADVANCE(653);
      if (lookahead == '{') ADVANCE(651);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) ADVANCE(650);
      if (lookahead != 0) ADVANCE(652);
      END_STATE();
    case 24:
      if (lookahead == '"') ADVANCE(648);
      if (lookahead == '#') ADVANCE(873);
      if (lookahead == '\\') ADVANCE(653);
      if (lookahead == '{') ADVANCE(872);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) ADVANCE(871);
      if (lookahead != 0) ADVANCE(870);
      END_STATE();
    case 25:
      if (lookahead == '"') ADVANCE(648);
      if (lookahead == '#') ADVANCE(656);
      if (lookahead == '\\') ADVANCE(653);
      if (lookahead == 'b') ADVANCE(657);
      if (lookahead == 'f') ADVANCE(658);
      if (lookahead == 'n') ADVANCE(659);
      if (lookahead == 'r') ADVANCE(660);
      if (lookahead == 't') ADVANCE(661);
      if (lookahead == 'u') ADVANCE(662);
      if (lookahead == '\t' ||
          lookahead == '\r') SKIP(25)
      if (aux_sym_invalid_quoted_string_escaped_char_token1_character_set_1(lookahead)) ADVANCE(655);
      if (lookahead != 0 &&
          lookahead != '\f') ADVANCE(654);
      END_STATE();
    case 26:
      if (lookahead == '"') ADVANCE(829);
      if (lookahead == '#') ADVANCE(830);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(824);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == '\\') ADVANCE(828);
      if (lookahead == '{') ADVANCE(505);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(28)
      END_STATE();
    case 27:
      if (lookahead == '#') ADVANCE(507);
      if (lookahead == '*') ADVANCE(558);
      if (lookahead == '=') ADVANCE(590);
      if (lookahead == 'c') ADVANCE(367);
      if (lookahead == 'h') ADVANCE(460);
      if (lookahead == 'r') ADVANCE(227);
      if (lookahead == 't') ADVANCE(349);
      if (lookahead == 'u') ADVANCE(397);
      if (lookahead == '}') ADVANCE(506);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(557);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(27)
      END_STATE();
    case 28:
      if (lookahead == '#') ADVANCE(507);
      if (lookahead == ':') ADVANCE(576);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(28)
      END_STATE();
    case 29:
      if (lookahead == '#') ADVANCE(507);
      if (lookahead == ';') ADVANCE(578);
      if (lookahead == '\\') ADVANCE(653);
      if (lookahead == '{') ADVANCE(857);
      if (lookahead == '\n' ||
          lookahead == ' ') SKIP(30)
      if (sym_filename_text_character_set_1(lookahead)) ADVANCE(858);
      if (lookahead != 0) ADVANCE(859);
      END_STATE();
    case 30:
      if (lookahead == '#') ADVANCE(507);
      if (lookahead == ';') ADVANCE(578);
      if (lookahead == '\\') ADVANCE(653);
      if (lookahead == '\n' ||
          lookahead == ' ') SKIP(30)
      if (sym_filename_text_character_set_1(lookahead)) ADVANCE(858);
      if (lookahead != 0) ADVANCE(859);
      END_STATE();
    case 31:
      if (lookahead == '#') ADVANCE(507);
      if (lookahead == ';') ADVANCE(578);
      if (lookahead == '}') ADVANCE(861);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(893);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(31)
      END_STATE();
    case 32:
      if (lookahead == '#') ADVANCE(507);
      if (lookahead == '<') ADVANCE(616);
      if (lookahead == '\\') ADVANCE(653);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(32)
      END_STATE();
    case 33:
      if (lookahead == '#') ADVANCE(507);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(33)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(878);
      END_STATE();
    case 34:
      if (lookahead == '#') ADVANCE(507);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(824);
      if (lookahead == ':') ADVANCE(576);
      if (lookahead == '\\') ADVANCE(828);
      if (lookahead == '{') ADVANCE(505);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(28)
      END_STATE();
    case 35:
      if (lookahead == '#') ADVANCE(633);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) ADVANCE(634);
      if (lookahead != 0 &&
          lookahead != '?') ADVANCE(635);
      END_STATE();
    case 36:
      if (lookahead == '#') ADVANCE(641);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) ADVANCE(642);
      if (lookahead != 0 &&
          lookahead != '/' &&
          lookahead != '>') ADVANCE(643);
      END_STATE();
    case 37:
      if (lookahead == '#') ADVANCE(844);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) ADVANCE(843);
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(842);
      END_STATE();
    case 38:
      if (lookahead == '#') ADVANCE(637);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) ADVANCE(638);
      if (lookahead != 0 &&
          lookahead != '/' &&
          lookahead != '?') ADVANCE(639);
      END_STATE();
    case 39:
      if (lookahead == '*') ADVANCE(554);
      if (lookahead == '1') ADVANCE(46);
      if (lookahead == '2') ADVANCE(553);
      END_STATE();
    case 40:
      if (lookahead == ',') ADVANCE(647);
      END_STATE();
    case 41:
      if (lookahead == ',') ADVANCE(577);
      END_STATE();
    case 42:
      if (lookahead == ',') ADVANCE(644);
      END_STATE();
    case 43:
      if (lookahead == '-') ADVANCE(496);
      END_STATE();
    case 44:
      if (lookahead == '-') ADVANCE(194);
      END_STATE();
    case 45:
      if (lookahead == '-') ADVANCE(400);
      END_STATE();
    case 46:
      if (lookahead == '.') ADVANCE(47);
      END_STATE();
    case 47:
      if (lookahead == '0') ADVANCE(551);
      if (lookahead == '1') ADVANCE(552);
      END_STATE();
    case 48:
      if (lookahead == '2') ADVANCE(52);
      END_STATE();
    case 49:
      if (lookahead == '4') ADVANCE(846);
      END_STATE();
    case 50:
      if (lookahead == '4') ADVANCE(42);
      END_STATE();
    case 51:
      if (lookahead == '5') ADVANCE(602);
      END_STATE();
    case 52:
      if (lookahead == '5') ADVANCE(54);
      END_STATE();
    case 53:
      if (lookahead == '6') ADVANCE(50);
      END_STATE();
    case 54:
      if (lookahead == '6') ADVANCE(601);
      END_STATE();
    case 55:
      if (lookahead == '6') ADVANCE(49);
      END_STATE();
    case 56:
      if (lookahead == '=') ADVANCE(608);
      END_STATE();
    case 57:
      if (lookahead == '=') ADVANCE(606);
      END_STATE();
    case 58:
      if (lookahead == '>') ADVANCE(636);
      END_STATE();
    case 59:
      if (lookahead == 'A') ADVANCE(69);
      END_STATE();
    case 60:
      if (lookahead == 'A') ADVANCE(67);
      END_STATE();
    case 61:
      if (lookahead == 'A') ADVANCE(483);
      END_STATE();
    case 62:
      if (lookahead == 'A') ADVANCE(126);
      if (lookahead == 'O') ADVANCE(121);
      if (lookahead == 'R') ADVANCE(110);
      if (lookahead == 'U') ADVANCE(117);
      END_STATE();
    case 63:
      if (lookahead == 'B') ADVANCE(356);
      if (lookahead == 'C') ADVANCE(354);
      if (lookahead == 'F') ADVANCE(301);
      if (lookahead == 'I') ADVANCE(334);
      if (lookahead == 'S') ADVANCE(468);
      END_STATE();
    case 64:
      if (lookahead == 'C') ADVANCE(89);
      END_STATE();
    case 65:
      if (lookahead == 'C') ADVANCE(97);
      END_STATE();
    case 66:
      if (lookahead == 'C') ADVANCE(99);
      END_STATE();
    case 67:
      if (lookahead == 'C') ADVANCE(77);
      END_STATE();
    case 68:
      if (lookahead == 'C') ADVANCE(124);
      END_STATE();
    case 69:
      if (lookahead == 'D') ADVANCE(521);
      END_STATE();
    case 70:
      if (lookahead == 'D') ADVANCE(547);
      END_STATE();
    case 71:
      if (lookahead == 'D') ADVANCE(158);
      END_STATE();
    case 72:
      if (lookahead == 'D') ADVANCE(252);
      if (lookahead == 'E') ADVANCE(337);
      END_STATE();
    case 73:
      if (lookahead == 'E') ADVANCE(100);
      END_STATE();
    case 74:
      if (lookahead == 'E') ADVANCE(122);
      END_STATE();
    case 75:
      if (lookahead == 'E') ADVANCE(131);
      END_STATE();
    case 76:
      if (lookahead == 'E') ADVANCE(541);
      END_STATE();
    case 77:
      if (lookahead == 'E') ADVANCE(533);
      END_STATE();
    case 78:
      if (lookahead == 'E') ADVANCE(527);
      END_STATE();
    case 79:
      if (lookahead == 'E') ADVANCE(59);
      END_STATE();
    case 80:
      if (lookahead == 'E') ADVANCE(59);
      if (lookahead == 'T') ADVANCE(127);
      END_STATE();
    case 81:
      if (lookahead == 'E') ADVANCE(68);
      END_STATE();
    case 82:
      if (lookahead == 'E') ADVANCE(129);
      END_STATE();
    case 83:
      if (lookahead == 'E') ADVANCE(442);
      if (lookahead == 'U') ADVANCE(338);
      END_STATE();
    case 84:
      if (lookahead == 'E') ADVANCE(378);
      END_STATE();
    case 85:
      if (lookahead == 'E') ADVANCE(379);
      END_STATE();
    case 86:
      if (lookahead == 'F') ADVANCE(93);
      END_STATE();
    case 87:
      if (lookahead == 'F') ADVANCE(361);
      END_STATE();
    case 88:
      if (lookahead == 'G') ADVANCE(76);
      END_STATE();
    case 89:
      if (lookahead == 'H') ADVANCE(535);
      END_STATE();
    case 90:
      if (lookahead == 'I') ADVANCE(75);
      END_STATE();
    case 91:
      if (lookahead == 'I') ADVANCE(102);
      if (lookahead == 'O') ADVANCE(65);
      END_STATE();
    case 92:
      if (lookahead == 'I') ADVANCE(106);
      if (lookahead == 'O') ADVANCE(66);
      END_STATE();
    case 93:
      if (lookahead == 'I') ADVANCE(105);
      END_STATE();
    case 94:
      if (lookahead == 'I') ADVANCE(111);
      END_STATE();
    case 95:
      if (lookahead == 'I') ADVANCE(335);
      END_STATE();
    case 96:
      if (lookahead == 'K') ADVANCE(537);
      END_STATE();
    case 97:
      if (lookahead == 'K') ADVANCE(543);
      END_STATE();
    case 98:
      if (lookahead == 'K') ADVANCE(539);
      END_STATE();
    case 99:
      if (lookahead == 'K') ADVANCE(545);
      END_STATE();
    case 100:
      if (lookahead == 'L') ADVANCE(82);
      END_STATE();
    case 101:
      if (lookahead == 'L') ADVANCE(92);
      END_STATE();
    case 102:
      if (lookahead == 'N') ADVANCE(96);
      END_STATE();
    case 103:
      if (lookahead == 'N') ADVANCE(101);
      END_STATE();
    case 104:
      if (lookahead == 'N') ADVANCE(119);
      END_STATE();
    case 105:
      if (lookahead == 'N') ADVANCE(70);
      END_STATE();
    case 106:
      if (lookahead == 'N') ADVANCE(98);
      END_STATE();
    case 107:
      if (lookahead == 'N') ADVANCE(108);
      END_STATE();
    case 108:
      if (lookahead == 'N') ADVANCE(81);
      END_STATE();
    case 109:
      if (lookahead == 'O') ADVANCE(107);
      END_STATE();
    case 110:
      if (lookahead == 'O') ADVANCE(114);
      END_STATE();
    case 111:
      if (lookahead == 'O') ADVANCE(104);
      END_STATE();
    case 112:
      if (lookahead == 'P') ADVANCE(555);
      END_STATE();
    case 113:
      if (lookahead == 'P') ADVANCE(156);
      END_STATE();
    case 114:
      if (lookahead == 'P') ADVANCE(86);
      END_STATE();
    case 115:
      if (lookahead == 'P') ADVANCE(125);
      END_STATE();
    case 116:
      if (lookahead == 'P') ADVANCE(180);
      END_STATE();
    case 117:
      if (lookahead == 'R') ADVANCE(88);
      if (lookahead == 'T') ADVANCE(525);
      END_STATE();
    case 118:
      if (lookahead == 'R') ADVANCE(60);
      END_STATE();
    case 119:
      if (lookahead == 'S') ADVANCE(531);
      END_STATE();
    case 120:
      if (lookahead == 'S') ADVANCE(463);
      END_STATE();
    case 121:
      if (lookahead == 'S') ADVANCE(123);
      END_STATE();
    case 122:
      if (lookahead == 'T') ADVANCE(519);
      END_STATE();
    case 123:
      if (lookahead == 'T') ADVANCE(523);
      END_STATE();
    case 124:
      if (lookahead == 'T') ADVANCE(529);
      END_STATE();
    case 125:
      if (lookahead == 'T') ADVANCE(94);
      END_STATE();
    case 126:
      if (lookahead == 'T') ADVANCE(64);
      END_STATE();
    case 127:
      if (lookahead == 'T') ADVANCE(112);
      END_STATE();
    case 128:
      if (lookahead == 'T') ADVANCE(268);
      END_STATE();
    case 129:
      if (lookahead == 'T') ADVANCE(78);
      END_STATE();
    case 130:
      if (lookahead == 'T') ADVANCE(269);
      END_STATE();
    case 131:
      if (lookahead == 'W') ADVANCE(549);
      END_STATE();
    case 132:
      if (lookahead == 'W') ADVANCE(285);
      END_STATE();
    case 133:
      if (lookahead == 'W') ADVANCE(286);
      END_STATE();
    case 134:
      if (lookahead == ']') ADVANCE(571);
      END_STATE();
    case 135:
      if (lookahead == ']') ADVANCE(567);
      END_STATE();
    case 136:
      if (lookahead == ']') ADVANCE(573);
      END_STATE();
    case 137:
      if (lookahead == ']') ADVANCE(569);
      END_STATE();
    case 138:
      if (lookahead == ']') ADVANCE(559);
      END_STATE();
    case 139:
      if (lookahead == ']') ADVANCE(563);
      END_STATE();
    case 140:
      if (lookahead == ']') ADVANCE(565);
      END_STATE();
    case 141:
      if (lookahead == ']') ADVANCE(561);
      END_STATE();
    case 142:
      if (lookahead == '`') ADVANCE(143);
      END_STATE();
    case 143:
      if (lookahead == '`') ADVANCE(845);
      END_STATE();
    case 144:
      if (lookahead == 'a') ADVANCE(498);
      if (lookahead == 'd') ADVANCE(51);
      END_STATE();
    case 145:
      if (lookahead == 'a') ADVANCE(48);
      END_STATE();
    case 146:
      if (lookahead == 'a') ADVANCE(190);
      END_STATE();
    case 147:
      if (lookahead == 'a') ADVANCE(300);
      END_STATE();
    case 148:
      if (lookahead == 'a') ADVANCE(300);
      if (lookahead == 'i') ADVANCE(298);
      END_STATE();
    case 149:
      if (lookahead == 'a') ADVANCE(313);
      END_STATE();
    case 150:
      if (lookahead == 'a') ADVANCE(200);
      if (lookahead == 'o') ADVANCE(362);
      END_STATE();
    case 151:
      if (lookahead == 'a') ADVANCE(210);
      END_STATE();
    case 152:
      if (lookahead == 'a') ADVANCE(210);
      if (lookahead == 'x') ADVANCE(40);
      END_STATE();
    case 153:
      if (lookahead == 'a') ADVANCE(411);
      END_STATE();
    case 154:
      if (lookahead == 'a') ADVANCE(371);
      END_STATE();
    case 155:
      if (lookahead == 'a') ADVANCE(370);
      END_STATE();
    case 156:
      if (lookahead == 'a') ADVANCE(387);
      END_STATE();
    case 157:
      if (lookahead == 'a') ADVANCE(292);
      END_STATE();
    case 158:
      if (lookahead == 'a') ADVANCE(461);
      END_STATE();
    case 159:
      if (lookahead == 'a') ADVANCE(140);
      END_STATE();
    case 160:
      if (lookahead == 'a') ADVANCE(455);
      END_STATE();
    case 161:
      if (lookahead == 'a') ADVANCE(395);
      END_STATE();
    case 162:
      if (lookahead == 'a') ADVANCE(395);
      if (lookahead == 'e') ADVANCE(382);
      END_STATE();
    case 163:
      if (lookahead == 'a') ADVANCE(287);
      END_STATE();
    case 164:
      if (lookahead == 'a') ADVANCE(320);
      END_STATE();
    case 165:
      if (lookahead == 'a') ADVANCE(430);
      END_STATE();
    case 166:
      if (lookahead == 'a') ADVANCE(430);
      if (lookahead == 'o') ADVANCE(205);
      if (lookahead == 'y') ADVANCE(473);
      END_STATE();
    case 167:
      if (lookahead == 'a') ADVANCE(457);
      END_STATE();
    case 168:
      if (lookahead == 'a') ADVANCE(321);
      END_STATE();
    case 169:
      if (lookahead == 'a') ADVANCE(322);
      END_STATE();
    case 170:
      if (lookahead == 'a') ADVANCE(465);
      END_STATE();
    case 171:
      if (lookahead == 'a') ADVANCE(453);
      END_STATE();
    case 172:
      if (lookahead == 'a') ADVANCE(369);
      END_STATE();
    case 173:
      if (lookahead == 'a') ADVANCE(369);
      if (lookahead == 'o') ADVANCE(341);
      END_STATE();
    case 174:
      if (lookahead == 'a') ADVANCE(501);
      END_STATE();
    case 175:
      if (lookahead == 'a') ADVANCE(303);
      END_STATE();
    case 176:
      if (lookahead == 'a') ADVANCE(462);
      END_STATE();
    case 177:
      if (lookahead == 'a') ADVANCE(314);
      END_STATE();
    case 178:
      if (lookahead == 'a') ADVANCE(394);
      END_STATE();
    case 179:
      if (lookahead == 'a') ADVANCE(372);
      END_STATE();
    case 180:
      if (lookahead == 'a') ADVANCE(407);
      END_STATE();
    case 181:
      if (lookahead == 'a') ADVANCE(443);
      END_STATE();
    case 182:
      if (lookahead == 'a') ADVANCE(306);
      END_STATE();
    case 183:
      if (lookahead == 'a') ADVANCE(307);
      END_STATE();
    case 184:
      if (lookahead == 'a') ADVANCE(308);
      END_STATE();
    case 185:
      if (lookahead == 'a') ADVANCE(471);
      END_STATE();
    case 186:
      if (lookahead == 'a') ADVANCE(409);
      END_STATE();
    case 187:
      if (lookahead == 'a') ADVANCE(477);
      END_STATE();
    case 188:
      if (lookahead == 'a') ADVANCE(474);
      END_STATE();
    case 189:
      if (lookahead == 'b') ADVANCE(358);
      if (lookahead == 'y') ADVANCE(43);
      END_STATE();
    case 190:
      if (lookahead == 'b') ADVANCE(302);
      END_STATE();
    case 191:
      if (lookahead == 'b') ADVANCE(360);
      END_STATE();
    case 192:
      if (lookahead == 'c') ADVANCE(61);
      END_STATE();
    case 193:
      if (lookahead == 'c') ADVANCE(270);
      END_STATE();
    case 194:
      if (lookahead == 'c') ADVANCE(353);
      END_STATE();
    case 195:
      if (lookahead == 'c') ADVANCE(299);
      END_STATE();
    case 196:
      if (lookahead == 'c') ADVANCE(154);
      END_STATE();
    case 197:
      if (lookahead == 'c') ADVANCE(352);
      END_STATE();
    case 198:
      if (lookahead == 'c') ADVANCE(179);
      END_STATE();
    case 199:
      if (lookahead == 'c') ADVANCE(364);
      END_STATE();
    case 200:
      if (lookahead == 'c') ADVANCE(253);
      END_STATE();
    case 201:
      if (lookahead == 'c') ADVANCE(489);
      END_STATE();
    case 202:
      if (lookahead == 'c') ADVANCE(475);
      END_STATE();
    case 203:
      if (lookahead == 'c') ADVANCE(188);
      END_STATE();
    case 204:
      if (lookahead == 'd') ADVANCE(51);
      END_STATE();
    case 205:
      if (lookahead == 'd') ADVANCE(503);
      END_STATE();
    case 206:
      if (lookahead == 'd') ADVANCE(283);
      END_STATE();
    case 207:
      if (lookahead == 'd') ADVANCE(426);
      END_STATE();
    case 208:
      if (lookahead == 'd') ADVANCE(222);
      END_STATE();
    case 209:
      if (lookahead == 'd') ADVANCE(223);
      END_STATE();
    case 210:
      if (lookahead == 'd') ADVANCE(241);
      END_STATE();
    case 211:
      if (lookahead == 'd') ADVANCE(249);
      END_STATE();
    case 212:
      if (lookahead == 'e') ADVANCE(152);
      END_STATE();
    case 213:
      if (lookahead == 'e') ADVANCE(258);
      END_STATE();
    case 214:
      if (lookahead == 'e') ADVANCE(53);
      END_STATE();
    case 215:
      if (lookahead == 'e') ADVANCE(886);
      END_STATE();
    case 216:
      if (lookahead == 'e') ADVANCE(888);
      END_STATE();
    case 217:
      if (lookahead == 'e') ADVANCE(595);
      END_STATE();
    case 218:
      if (lookahead == 'e') ADVANCE(588);
      END_STATE();
    case 219:
      if (lookahead == 'e') ADVANCE(582);
      END_STATE();
    case 220:
      if (lookahead == 'e') ADVANCE(587);
      END_STATE();
    case 221:
      if (lookahead == 'e') ADVANCE(589);
      END_STATE();
    case 222:
      if (lookahead == 'e') ADVANCE(882);
      END_STATE();
    case 223:
      if (lookahead == 'e') ADVANCE(881);
      END_STATE();
    case 224:
      if (lookahead == 'e') ADVANCE(883);
      END_STATE();
    case 225:
      if (lookahead == 'e') ADVANCE(884);
      END_STATE();
    case 226:
      if (lookahead == 'e') ADVANCE(381);
      END_STATE();
    case 227:
      if (lookahead == 'e') ADVANCE(257);
      END_STATE();
    case 228:
      if (lookahead == 'e') ADVANCE(499);
      END_STATE();
    case 229:
      if (lookahead == 'e') ADVANCE(41);
      END_STATE();
    case 230:
      if (lookahead == 'e') ADVANCE(388);
      END_STATE();
    case 231:
      if (lookahead == 'e') ADVANCE(259);
      END_STATE();
    case 232:
      if (lookahead == 'e') ADVANCE(206);
      END_STATE();
    case 233:
      if (lookahead == 'e') ADVANCE(497);
      END_STATE();
    case 234:
      if (lookahead == 'e') ADVANCE(497);
      if (lookahead == 't') ADVANCE(315);
      END_STATE();
    case 235:
      if (lookahead == 'e') ADVANCE(201);
      END_STATE();
    case 236:
      if (lookahead == 'e') ADVANCE(500);
      if (lookahead == 't') ADVANCE(315);
      END_STATE();
    case 237:
      if (lookahead == 'e') ADVANCE(425);
      END_STATE();
    case 238:
      if (lookahead == 'e') ADVANCE(428);
      END_STATE();
    case 239:
      if (lookahead == 'e') ADVANCE(202);
      END_STATE();
    case 240:
      if (lookahead == 'e') ADVANCE(413);
      END_STATE();
    case 241:
      if (lookahead == 'e') ADVANCE(383);
      END_STATE();
    case 242:
      if (lookahead == 'e') ADVANCE(385);
      END_STATE();
    case 243:
      if (lookahead == 'e') ADVANCE(168);
      END_STATE();
    case 244:
      if (lookahead == 'e') ADVANCE(386);
      END_STATE();
    case 245:
      if (lookahead == 'e') ADVANCE(151);
      END_STATE();
    case 246:
      if (lookahead == 'e') ADVANCE(408);
      END_STATE();
    case 247:
      if (lookahead == 'e') ADVANCE(384);
      END_STATE();
    case 248:
      if (lookahead == 'e') ADVANCE(418);
      END_STATE();
    case 249:
      if (lookahead == 'e') ADVANCE(420);
      END_STATE();
    case 250:
      if (lookahead == 'e') ADVANCE(439);
      END_STATE();
    case 251:
      if (lookahead == 'e') ADVANCE(55);
      END_STATE();
    case 252:
      if (lookahead == 'e') ADVANCE(197);
      END_STATE();
    case 253:
      if (lookahead == 'e') ADVANCE(398);
      END_STATE();
    case 254:
      if (lookahead == 'e') ADVANCE(187);
      END_STATE();
    case 255:
      if (lookahead == 'e') ADVANCE(444);
      END_STATE();
    case 256:
      if (lookahead == 'g') ADVANCE(630);
      END_STATE();
    case 257:
      if (lookahead == 'g') ADVANCE(228);
      END_STATE();
    case 258:
      if (lookahead == 'g') ADVANCE(228);
      if (lookahead == 't') ADVANCE(390);
      END_STATE();
    case 259:
      if (lookahead == 'g') ADVANCE(247);
      END_STATE();
    case 260:
      if (lookahead == 'g') ADVANCE(116);
      END_STATE();
    case 261:
      if (lookahead == 'h') ADVANCE(597);
      END_STATE();
    case 262:
      if (lookahead == 'h') ADVANCE(598);
      END_STATE();
    case 263:
      if (lookahead == 'h') ADVANCE(622);
      END_STATE();
    case 264:
      if (lookahead == 'h') ADVANCE(621);
      END_STATE();
    case 265:
      if (lookahead == 'h') ADVANCE(376);
      END_STATE();
    case 266:
      if (lookahead == 'h') ADVANCE(138);
      END_STATE();
    case 267:
      if (lookahead == 'h') ADVANCE(145);
      if (lookahead == 't') ADVANCE(176);
      END_STATE();
    case 268:
      if (lookahead == 'h') ADVANCE(164);
      END_STATE();
    case 269:
      if (lookahead == 'h') ADVANCE(169);
      END_STATE();
    case 270:
      if (lookahead == 'h') ADVANCE(248);
      END_STATE();
    case 271:
      if (lookahead == 'i') ADVANCE(192);
      END_STATE();
    case 272:
      if (lookahead == 'i') ADVANCE(373);
      END_STATE();
    case 273:
      if (lookahead == 'i') ADVANCE(237);
      END_STATE();
    case 274:
      if (lookahead == 'i') ADVANCE(317);
      END_STATE();
    case 275:
      if (lookahead == 'i') ADVANCE(342);
      END_STATE();
    case 276:
      if (lookahead == 'i') ADVANCE(330);
      if (lookahead == 'm') ADVANCE(174);
      END_STATE();
    case 277:
      if (lookahead == 'i') ADVANCE(348);
      END_STATE();
    case 278:
      if (lookahead == 'i') ADVANCE(351);
      END_STATE();
    case 279:
      if (lookahead == 'i') ADVANCE(146);
      END_STATE();
    case 280:
      if (lookahead == 'i') ADVANCE(325);
      END_STATE();
    case 281:
      if (lookahead == 'i') ADVANCE(217);
      END_STATE();
    case 282:
      if (lookahead == 'i') ADVANCE(355);
      END_STATE();
    case 283:
      if (lookahead == 'i') ADVANCE(403);
      END_STATE();
    case 284:
      if (lookahead == 'i') ADVANCE(441);
      END_STATE();
    case 285:
      if (lookahead == 'i') ADVANCE(464);
      END_STATE();
    case 286:
      if (lookahead == 'i') ADVANCE(466);
      END_STATE();
    case 287:
      if (lookahead == 'i') ADVANCE(336);
      END_STATE();
    case 288:
      if (lookahead == 'k') ADVANCE(273);
      END_STATE();
    case 289:
      if (lookahead == 'k') ADVANCE(281);
      END_STATE();
    case 290:
      if (lookahead == 'l') ADVANCE(593);
      END_STATE();
    case 291:
      if (lookahead == 'l') ADVANCE(890);
      END_STATE();
    case 292:
      if (lookahead == 'l') ADVANCE(585);
      END_STATE();
    case 293:
      if (lookahead == 'l') ADVANCE(72);
      END_STATE();
    case 294:
      if (lookahead == 'l') ADVANCE(83);
      END_STATE();
    case 295:
      if (lookahead == 'l') ADVANCE(849);
      END_STATE();
    case 296:
      if (lookahead == 'l') ADVANCE(850);
      END_STATE();
    case 297:
      if (lookahead == 'l') ADVANCE(291);
      END_STATE();
    case 298:
      if (lookahead == 'l') ADVANCE(229);
      END_STATE();
    case 299:
      if (lookahead == 'l') ADVANCE(484);
      END_STATE();
    case 300:
      if (lookahead == 'l') ADVANCE(435);
      END_STATE();
    case 301:
      if (lookahead == 'l') ADVANCE(366);
      END_STATE();
    case 302:
      if (lookahead == 'l') ADVANCE(220);
      END_STATE();
    case 303:
      if (lookahead == 'l') ADVANCE(416);
      END_STATE();
    case 304:
      if (lookahead == 'l') ADVANCE(243);
      END_STATE();
    case 305:
      if (lookahead == 'l') ADVANCE(239);
      END_STATE();
    case 306:
      if (lookahead == 'l') ADVANCE(421);
      END_STATE();
    case 307:
      if (lookahead == 'l') ADVANCE(422);
      END_STATE();
    case 308:
      if (lookahead == 'l') ADVANCE(423);
      END_STATE();
    case 309:
      if (lookahead == 'l') ADVANCE(459);
      END_STATE();
    case 310:
      if (lookahead == 'l') ADVANCE(305);
      END_STATE();
    case 311:
      if (lookahead == 'm') ADVANCE(113);
      END_STATE();
    case 312:
      if (lookahead == 'm') ADVANCE(71);
      END_STATE();
    case 313:
      if (lookahead == 'm') ADVANCE(431);
      END_STATE();
    case 314:
      if (lookahead == 'm') ADVANCE(433);
      END_STATE();
    case 315:
      if (lookahead == 'm') ADVANCE(294);
      END_STATE();
    case 316:
      if (lookahead == 'm') ADVANCE(295);
      END_STATE();
    case 317:
      if (lookahead == 'n') ADVANCE(260);
      END_STATE();
    case 318:
      if (lookahead == 'n') ADVANCE(600);
      END_STATE();
    case 319:
      if (lookahead == 'n') ADVANCE(581);
      END_STATE();
    case 320:
      if (lookahead == 'n') ADVANCE(614);
      END_STATE();
    case 321:
      if (lookahead == 'n') ADVANCE(629);
      END_STATE();
    case 322:
      if (lookahead == 'n') ADVANCE(609);
      END_STATE();
    case 323:
      if (lookahead == 'n') ADVANCE(631);
      END_STATE();
    case 324:
      if (lookahead == 'n') ADVANCE(848);
      END_STATE();
    case 325:
      if (lookahead == 'n') ADVANCE(256);
      END_STATE();
    case 326:
      if (lookahead == 'n') ADVANCE(207);
      if (lookahead == 'q') ADVANCE(487);
      if (lookahead == 'x') ADVANCE(284);
      END_STATE();
    case 327:
      if (lookahead == 'n') ADVANCE(427);
      END_STATE();
    case 328:
      if (lookahead == 'n') ADVANCE(195);
      if (lookahead == 's') ADVANCE(63);
      END_STATE();
    case 329:
      if (lookahead == 'n') ADVANCE(432);
      END_STATE();
    case 330:
      if (lookahead == 'n') ADVANCE(476);
      END_STATE();
    case 331:
      if (lookahead == 'n') ADVANCE(449);
      END_STATE();
    case 332:
      if (lookahead == 'n') ADVANCE(467);
      if (lookahead == 'u') ADVANCE(333);
      END_STATE();
    case 333:
      if (lookahead == 'n') ADVANCE(451);
      END_STATE();
    case 334:
      if (lookahead == 'n') ADVANCE(469);
      END_STATE();
    case 335:
      if (lookahead == 'n') ADVANCE(452);
      END_STATE();
    case 336:
      if (lookahead == 'n') ADVANCE(419);
      END_STATE();
    case 337:
      if (lookahead == 'n') ADVANCE(199);
      END_STATE();
    case 338:
      if (lookahead == 'n') ADVANCE(255);
      END_STATE();
    case 339:
      if (lookahead == 'n') ADVANCE(375);
      END_STATE();
    case 340:
      if (lookahead == 'o') ADVANCE(380);
      END_STATE();
    case 341:
      if (lookahead == 'o') ADVANCE(288);
      END_STATE();
    case 342:
      if (lookahead == 'o') ADVANCE(327);
      END_STATE();
    case 343:
      if (lookahead == 'o') ADVANCE(205);
      if (lookahead == 'y') ADVANCE(473);
      END_STATE();
    case 344:
      if (lookahead == 'o') ADVANCE(332);
      END_STATE();
    case 345:
      if (lookahead == 'o') ADVANCE(341);
      END_STATE();
    case 346:
      if (lookahead == 'o') ADVANCE(203);
      END_STATE();
    case 347:
      if (lookahead == 'o') ADVANCE(339);
      END_STATE();
    case 348:
      if (lookahead == 'o') ADVANCE(318);
      END_STATE();
    case 349:
      if (lookahead == 'o') ADVANCE(95);
      END_STATE();
    case 350:
      if (lookahead == 'o') ADVANCE(95);
      if (lookahead == 'r') ADVANCE(486);
      END_STATE();
    case 351:
      if (lookahead == 'o') ADVANCE(319);
      END_STATE();
    case 352:
      if (lookahead == 'o') ADVANCE(208);
      END_STATE();
    case 353:
      if (lookahead == 'o') ADVANCE(490);
      END_STATE();
    case 354:
      if (lookahead == 'o') ADVANCE(310);
      END_STATE();
    case 355:
      if (lookahead == 'o') ADVANCE(323);
      END_STATE();
    case 356:
      if (lookahead == 'o') ADVANCE(365);
      END_STATE();
    case 357:
      if (lookahead == 'o') ADVANCE(324);
      END_STATE();
    case 358:
      if (lookahead == 'o') ADVANCE(436);
      END_STATE();
    case 359:
      if (lookahead == 'o') ADVANCE(450);
      if (lookahead == 'u') ADVANCE(297);
      END_STATE();
    case 360:
      if (lookahead == 'o') ADVANCE(437);
      END_STATE();
    case 361:
      if (lookahead == 'o') ADVANCE(389);
      END_STATE();
    case 362:
      if (lookahead == 'o') ADVANCE(289);
      END_STATE();
    case 363:
      if (lookahead == 'o') ADVANCE(362);
      END_STATE();
    case 364:
      if (lookahead == 'o') ADVANCE(209);
      END_STATE();
    case 365:
      if (lookahead == 'o') ADVANCE(304);
      END_STATE();
    case 366:
      if (lookahead == 'o') ADVANCE(171);
      END_STATE();
    case 367:
      if (lookahead == 'o') ADVANCE(491);
      END_STATE();
    case 368:
      if (lookahead == 'p') ADVANCE(454);
      END_STATE();
    case 369:
      if (lookahead == 'p') ADVANCE(456);
      END_STATE();
    case 370:
      if (lookahead == 'p') ADVANCE(265);
      END_STATE();
    case 371:
      if (lookahead == 'p') ADVANCE(224);
      END_STATE();
    case 372:
      if (lookahead == 'p') ADVANCE(225);
      END_STATE();
    case 373:
      if (lookahead == 'p') ADVANCE(178);
      END_STATE();
    case 374:
      if (lookahead == 'p') ADVANCE(160);
      END_STATE();
    case 375:
      if (lookahead == 'p') ADVANCE(167);
      END_STATE();
    case 376:
      if (lookahead == 'q') ADVANCE(296);
      END_STATE();
    case 377:
      if (lookahead == 'q') ADVANCE(492);
      END_STATE();
    case 378:
      if (lookahead == 'q') ADVANCE(493);
      END_STATE();
    case 379:
      if (lookahead == 'q') ADVANCE(494);
      END_STATE();
    case 380:
      if (lookahead == 'r') ADVANCE(311);
      END_STATE();
    case 381:
      if (lookahead == 'r') ADVANCE(502);
      END_STATE();
    case 382:
      if (lookahead == 'r') ADVANCE(189);
      END_STATE();
    case 383:
      if (lookahead == 'r') ADVANCE(594);
      END_STATE();
    case 384:
      if (lookahead == 'r') ADVANCE(627);
      END_STATE();
    case 385:
      if (lookahead == 'r') ADVANCE(191);
      END_STATE();
    case 386:
      if (lookahead == 'r') ADVANCE(495);
      END_STATE();
    case 387:
      if (lookahead == 'r') ADVANCE(149);
      END_STATE();
    case 388:
      if (lookahead == 'r') ADVANCE(458);
      END_STATE();
    case 389:
      if (lookahead == 'r') ADVANCE(312);
      END_STATE();
    case 390:
      if (lookahead == 'r') ADVANCE(504);
      END_STATE();
    case 391:
      if (lookahead == 'r') ADVANCE(486);
      END_STATE();
    case 392:
      if (lookahead == 'r') ADVANCE(290);
      END_STATE();
    case 393:
      if (lookahead == 'r') ADVANCE(274);
      END_STATE();
    case 394:
      if (lookahead == 'r') ADVANCE(447);
      END_STATE();
    case 395:
      if (lookahead == 'r') ADVANCE(279);
      END_STATE();
    case 396:
      if (lookahead == 'r') ADVANCE(185);
      END_STATE();
    case 397:
      if (lookahead == 'r') ADVANCE(293);
      END_STATE();
    case 398:
      if (lookahead == 'r') ADVANCE(448);
      END_STATE();
    case 399:
      if (lookahead == 'r') ADVANCE(84);
      END_STATE();
    case 400:
      if (lookahead == 'r') ADVANCE(232);
      END_STATE();
    case 401:
      if (lookahead == 'r') ADVANCE(280);
      END_STATE();
    case 402:
      if (lookahead == 'r') ADVANCE(219);
      END_STATE();
    case 403:
      if (lookahead == 'r') ADVANCE(415);
      END_STATE();
    case 404:
      if (lookahead == 'r') ADVANCE(155);
      END_STATE();
    case 405:
      if (lookahead == 'r') ADVANCE(254);
      END_STATE();
    case 406:
      if (lookahead == 'r') ADVANCE(238);
      END_STATE();
    case 407:
      if (lookahead == 'r') ADVANCE(177);
      END_STATE();
    case 408:
      if (lookahead == 'r') ADVANCE(130);
      END_STATE();
    case 409:
      if (lookahead == 'r') ADVANCE(478);
      END_STATE();
    case 410:
      if (lookahead == 'r') ADVANCE(85);
      END_STATE();
    case 411:
      if (lookahead == 's') ADVANCE(271);
      END_STATE();
    case 412:
      if (lookahead == 's') ADVANCE(134);
      END_STATE();
    case 413:
      if (lookahead == 's') ADVANCE(603);
      END_STATE();
    case 414:
      if (lookahead == 's') ADVANCE(592);
      END_STATE();
    case 415:
      if (lookahead == 's') ADVANCE(583);
      END_STATE();
    case 416:
      if (lookahead == 's') ADVANCE(605);
      END_STATE();
    case 417:
      if (lookahead == 's') ADVANCE(625);
      END_STATE();
    case 418:
      if (lookahead == 's') ADVANCE(624);
      END_STATE();
    case 419:
      if (lookahead == 's') ADVANCE(623);
      END_STATE();
    case 420:
      if (lookahead == 's') ADVANCE(626);
      END_STATE();
    case 421:
      if (lookahead == 's') ADVANCE(607);
      END_STATE();
    case 422:
      if (lookahead == 's') ADVANCE(619);
      END_STATE();
    case 423:
      if (lookahead == 's') ADVANCE(612);
      END_STATE();
    case 424:
      if (lookahead == 's') ADVANCE(440);
      END_STATE();
    case 425:
      if (lookahead == 's') ADVANCE(135);
      END_STATE();
    case 426:
      if (lookahead == 's') ADVANCE(132);
      END_STATE();
    case 427:
      if (lookahead == 's') ADVANCE(136);
      END_STATE();
    case 428:
      if (lookahead == 's') ADVANCE(137);
      END_STATE();
    case 429:
      if (lookahead == 's') ADVANCE(347);
      END_STATE();
    case 430:
      if (lookahead == 's') ADVANCE(214);
      END_STATE();
    case 431:
      if (lookahead == 's') ADVANCE(139);
      END_STATE();
    case 432:
      if (lookahead == 's') ADVANCE(235);
      END_STATE();
    case 433:
      if (lookahead == 's') ADVANCE(141);
      END_STATE();
    case 434:
      if (lookahead == 's') ADVANCE(128);
      END_STATE();
    case 435:
      if (lookahead == 's') ADVANCE(216);
      END_STATE();
    case 436:
      if (lookahead == 's') ADVANCE(218);
      END_STATE();
    case 437:
      if (lookahead == 's') ADVANCE(221);
      END_STATE();
    case 438:
      if (lookahead == 's') ADVANCE(357);
      END_STATE();
    case 439:
      if (lookahead == 's') ADVANCE(434);
      END_STATE();
    case 440:
      if (lookahead == 's') ADVANCE(230);
      END_STATE();
    case 441:
      if (lookahead == 's') ADVANCE(470);
      END_STATE();
    case 442:
      if (lookahead == 's') ADVANCE(196);
      END_STATE();
    case 443:
      if (lookahead == 's') ADVANCE(251);
      END_STATE();
    case 444:
      if (lookahead == 's') ADVANCE(198);
      END_STATE();
    case 445:
      if (lookahead == 's') ADVANCE(133);
      END_STATE();
    case 446:
      if (lookahead == 't') ADVANCE(266);
      END_STATE();
    case 447:
      if (lookahead == 't') ADVANCE(87);
      END_STATE();
    case 448:
      if (lookahead == 't') ADVANCE(580);
      END_STATE();
    case 449:
      if (lookahead == 't') ADVANCE(586);
      END_STATE();
    case 450:
      if (lookahead == 't') ADVANCE(604);
      END_STATE();
    case 451:
      if (lookahead == 't') ADVANCE(880);
      END_STATE();
    case 452:
      if (lookahead == 't') ADVANCE(885);
      END_STATE();
    case 453:
      if (lookahead == 't') ADVANCE(628);
      END_STATE();
    case 454:
      if (lookahead == 't') ADVANCE(275);
      END_STATE();
    case 455:
      if (lookahead == 't') ADVANCE(261);
      END_STATE();
    case 456:
      if (lookahead == 't') ADVANCE(481);
      END_STATE();
    case 457:
      if (lookahead == 't') ADVANCE(262);
      END_STATE();
    case 458:
      if (lookahead == 't') ADVANCE(412);
      END_STATE();
    case 459:
      if (lookahead == 't') ADVANCE(272);
      END_STATE();
    case 460:
      if (lookahead == 't') ADVANCE(315);
      END_STATE();
    case 461:
      if (lookahead == 't') ADVANCE(159);
      END_STATE();
    case 462:
      if (lookahead == 't') ADVANCE(488);
      END_STATE();
    case 463:
      if (lookahead == 't') ADVANCE(393);
      END_STATE();
    case 464:
      if (lookahead == 't') ADVANCE(263);
      END_STATE();
    case 465:
      if (lookahead == 't') ADVANCE(193);
      END_STATE();
    case 466:
      if (lookahead == 't') ADVANCE(264);
      END_STATE();
    case 467:
      if (lookahead == 't') ADVANCE(163);
      END_STATE();
    case 468:
      if (lookahead == 't') ADVANCE(401);
      END_STATE();
    case 469:
      if (lookahead == 't') ADVANCE(231);
      END_STATE();
    case 470:
      if (lookahead == 't') ADVANCE(417);
      END_STATE();
    case 471:
      if (lookahead == 't') ADVANCE(277);
      END_STATE();
    case 472:
      if (lookahead == 't') ADVANCE(186);
      END_STATE();
    case 473:
      if (lookahead == 't') ADVANCE(240);
      END_STATE();
    case 474:
      if (lookahead == 't') ADVANCE(278);
      END_STATE();
    case 475:
      if (lookahead == 't') ADVANCE(282);
      END_STATE();
    case 476:
      if (lookahead == 't') ADVANCE(244);
      END_STATE();
    case 477:
      if (lookahead == 't') ADVANCE(246);
      END_STATE();
    case 478:
      if (lookahead == 't') ADVANCE(445);
      END_STATE();
    case 479:
      if (lookahead == 'u') ADVANCE(309);
      END_STATE();
    case 480:
      if (lookahead == 'u') ADVANCE(226);
      END_STATE();
    case 481:
      if (lookahead == 'u') ADVANCE(406);
      END_STATE();
    case 482:
      if (lookahead == 'u') ADVANCE(297);
      END_STATE();
    case 483:
      if (lookahead == 'u') ADVANCE(446);
      END_STATE();
    case 484:
      if (lookahead == 'u') ADVANCE(211);
      END_STATE();
    case 485:
      if (lookahead == 'u') ADVANCE(396);
      END_STATE();
    case 486:
      if (lookahead == 'u') ADVANCE(215);
      END_STATE();
    case 487:
      if (lookahead == 'u') ADVANCE(175);
      END_STATE();
    case 488:
      if (lookahead == 'u') ADVANCE(414);
      END_STATE();
    case 489:
      if (lookahead == 'u') ADVANCE(402);
      END_STATE();
    case 490:
      if (lookahead == 'u') ADVANCE(331);
      END_STATE();
    case 491:
      if (lookahead == 'u') ADVANCE(333);
      END_STATE();
    case 492:
      if (lookahead == 'u') ADVANCE(182);
      END_STATE();
    case 493:
      if (lookahead == 'u') ADVANCE(183);
      END_STATE();
    case 494:
      if (lookahead == 'u') ADVANCE(184);
      END_STATE();
    case 495:
      if (lookahead == 'v') ADVANCE(157);
      END_STATE();
    case 496:
      if (lookahead == 'v') ADVANCE(242);
      END_STATE();
    case 497:
      if (lookahead == 'x') ADVANCE(40);
      END_STATE();
    case 498:
      if (lookahead == 'x') ADVANCE(45);
      END_STATE();
    case 499:
      if (lookahead == 'x') ADVANCE(599);
      END_STATE();
    case 500:
      if (lookahead == 'x') ADVANCE(847);
      END_STATE();
    case 501:
      if (lookahead == 'x') ADVANCE(44);
      END_STATE();
    case 502:
      if (lookahead == 'y') ADVANCE(120);
      END_STATE();
    case 503:
      if (lookahead == 'y') ADVANCE(596);
      END_STATE();
    case 504:
      if (lookahead == 'y') ADVANCE(584);
      END_STATE();
    case 505:
      if (lookahead == '{') ADVANCE(874);
      END_STATE();
    case 506:
      if (lookahead == '}') ADVANCE(877);
      END_STATE();
    case 507:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1);
      END_STATE();
    case 508:
      if (eof) ADVANCE(515);
      if (lookahead == '\n') ADVANCE(516);
      if (lookahead == '"') ADVANCE(648);
      if (lookahead == '#') ADVANCE(507);
      if (lookahead == '.') ADVANCE(894);
      if (lookahead == '<') ADVANCE(618);
      if (lookahead == 'C') ADVANCE(109);
      if (lookahead == 'D') ADVANCE(73);
      if (lookahead == 'E') ADVANCE(896);
      if (lookahead == 'G') ADVANCE(74);
      if (lookahead == 'H') ADVANCE(80);
      if (lookahead == 'L') ADVANCE(91);
      if (lookahead == 'O') ADVANCE(115);
      if (lookahead == 'P') ADVANCE(62);
      if (lookahead == 'T') ADVANCE(118);
      if (lookahead == 'U') ADVANCE(103);
      if (lookahead == 'V') ADVANCE(90);
      if (lookahead == '[') ADVANCE(864);
      if (lookahead == '`') ADVANCE(838);
      if (lookahead == 'b') ADVANCE(166);
      if (lookahead == 'c') ADVANCE(150);
      if (lookahead == 'd') ADVANCE(485);
      if (lookahead == 'e') ADVANCE(895);
      if (lookahead == 'f') ADVANCE(148);
      if (lookahead == 'h') ADVANCE(212);
      if (lookahead == 'i') ADVANCE(329);
      if (lookahead == 'j') ADVANCE(429);
      if (lookahead == 'l') ADVANCE(346);
      if (lookahead == 'm') ADVANCE(144);
      if (lookahead == 'n') ADVANCE(482);
      if (lookahead == 'r') ADVANCE(213);
      if (lookahead == 's') ADVANCE(267);
      if (lookahead == 't') ADVANCE(391);
      if (lookahead == 'u') ADVANCE(392);
      if (lookahead == 'v') ADVANCE(162);
      if (lookahead == 'x') ADVANCE(374);
      if (lookahead == '{') ADVANCE(855);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(892);
      if (aux_sym_value_string_text_token1_character_set_1(lookahead)) SKIP(509)
      END_STATE();
    case 509:
      if (eof) ADVANCE(515);
      if (lookahead == '\n') ADVANCE(516);
      if (lookahead == '"') ADVANCE(648);
      if (lookahead == '#') ADVANCE(507);
      if (lookahead == '.') ADVANCE(894);
      if (lookahead == '<') ADVANCE(618);
      if (lookahead == 'C') ADVANCE(109);
      if (lookahead == 'D') ADVANCE(73);
      if (lookahead == 'E') ADVANCE(896);
      if (lookahead == 'G') ADVANCE(74);
      if (lookahead == 'H') ADVANCE(80);
      if (lookahead == 'L') ADVANCE(91);
      if (lookahead == 'O') ADVANCE(115);
      if (lookahead == 'P') ADVANCE(62);
      if (lookahead == 'T') ADVANCE(118);
      if (lookahead == 'U') ADVANCE(103);
      if (lookahead == 'V') ADVANCE(90);
      if (lookahead == '[') ADVANCE(864);
      if (lookahead == '`') ADVANCE(838);
      if (lookahead == 'b') ADVANCE(166);
      if (lookahead == 'c') ADVANCE(150);
      if (lookahead == 'd') ADVANCE(485);
      if (lookahead == 'e') ADVANCE(895);
      if (lookahead == 'f') ADVANCE(148);
      if (lookahead == 'h') ADVANCE(212);
      if (lookahead == 'i') ADVANCE(329);
      if (lookahead == 'j') ADVANCE(429);
      if (lookahead == 'l') ADVANCE(346);
      if (lookahead == 'm') ADVANCE(144);
      if (lookahead == 'n') ADVANCE(482);
      if (lookahead == 'r') ADVANCE(213);
      if (lookahead == 's') ADVANCE(267);
      if (lookahead == 't') ADVANCE(391);
      if (lookahead == 'u') ADVANCE(392);
      if (lookahead == 'v') ADVANCE(162);
      if (lookahead == 'x') ADVANCE(374);
      if (lookahead == '{') ADVANCE(854);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(892);
      if (aux_sym_value_string_text_token1_character_set_1(lookahead)) SKIP(509)
      END_STATE();
    case 510:
      if (eof) ADVANCE(515);
      if (lookahead == '\n') ADVANCE(516);
      if (lookahead == '"') ADVANCE(648);
      if (lookahead == '#') ADVANCE(507);
      if (lookahead == '<') ADVANCE(618);
      if (lookahead == 'C') ADVANCE(109);
      if (lookahead == 'D') ADVANCE(73);
      if (lookahead == 'G') ADVANCE(74);
      if (lookahead == 'H') ADVANCE(80);
      if (lookahead == 'L') ADVANCE(91);
      if (lookahead == 'O') ADVANCE(115);
      if (lookahead == 'P') ADVANCE(62);
      if (lookahead == 'T') ADVANCE(118);
      if (lookahead == 'U') ADVANCE(103);
      if (lookahead == 'V') ADVANCE(90);
      if (lookahead == '[') ADVANCE(866);
      if (lookahead == '`') ADVANCE(838);
      if (lookahead == 'b') ADVANCE(165);
      if (lookahead == 'f') ADVANCE(148);
      if (lookahead == 'h') ADVANCE(233);
      if (lookahead == 'n') ADVANCE(482);
      if (lookahead == 't') ADVANCE(391);
      if (lookahead == '{') ADVANCE(854);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(892);
      if (aux_sym_value_string_text_token1_character_set_1(lookahead)) SKIP(510)
      END_STATE();
    case 511:
      if (eof) ADVANCE(515);
      if (lookahead == '\n') ADVANCE(516);
      if (lookahead == '"') ADVANCE(648);
      if (lookahead == '#') ADVANCE(507);
      if (lookahead == '<') ADVANCE(618);
      if (lookahead == 'C') ADVANCE(109);
      if (lookahead == 'D') ADVANCE(73);
      if (lookahead == 'G') ADVANCE(74);
      if (lookahead == 'H') ADVANCE(79);
      if (lookahead == 'L') ADVANCE(91);
      if (lookahead == 'O') ADVANCE(115);
      if (lookahead == 'P') ADVANCE(62);
      if (lookahead == 'T') ADVANCE(118);
      if (lookahead == 'U') ADVANCE(103);
      if (lookahead == 'V') ADVANCE(90);
      if (lookahead == '[') ADVANCE(865);
      if (lookahead == '`') ADVANCE(838);
      if (lookahead == 'b') ADVANCE(165);
      if (lookahead == 'f') ADVANCE(148);
      if (lookahead == 'h') ADVANCE(233);
      if (lookahead == 'n') ADVANCE(482);
      if (lookahead == 't') ADVANCE(391);
      if (lookahead == '{') ADVANCE(854);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(892);
      if (aux_sym_value_string_text_token1_character_set_1(lookahead)) SKIP(511)
      END_STATE();
    case 512:
      if (eof) ADVANCE(515);
      if (lookahead == '\n') ADVANCE(516);
      if (lookahead == '"') ADVANCE(648);
      if (lookahead == '#') ADVANCE(507);
      if (sym_key_string_text_character_set_2(lookahead)) ADVANCE(824);
      if (lookahead == '<') ADVANCE(618);
      if (lookahead == 'C') ADVANCE(711);
      if (lookahead == 'D') ADVANCE(682);
      if (lookahead == 'G') ADVANCE(683);
      if (lookahead == 'H') ADVANCE(664);
      if (lookahead == 'L') ADVANCE(665);
      if (lookahead == 'O') ADVANCE(717);
      if (lookahead == 'P') ADVANCE(663);
      if (lookahead == 'T') ADVANCE(719);
      if (lookahead == 'U') ADVANCE(705);
      if (lookahead == 'V') ADVANCE(695);
      if (lookahead == '[') ADVANCE(867);
      if (lookahead == '\\') ADVANCE(828);
      if (lookahead == '`') ADVANCE(838);
      if (lookahead == 'b') ADVANCE(805);
      if (lookahead == 'f') ADVANCE(668);
      if (lookahead == 'h') ADVANCE(732);
      if (lookahead == 'n') ADVANCE(798);
      if (lookahead == 't') ADVANCE(771);
      if (lookahead == '{') ADVANCE(855);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(824);
      if (aux_sym_value_string_text_token1_character_set_1(lookahead)) SKIP(510)
      END_STATE();
    case 513:
      if (eof) ADVANCE(515);
      if (lookahead == '\n') ADVANCE(516);
      if (lookahead == '"') ADVANCE(648);
      if (lookahead == '#') ADVANCE(507);
      if (sym_key_string_text_character_set_2(lookahead)) ADVANCE(824);
      if (lookahead == '<') ADVANCE(618);
      if (lookahead == 'C') ADVANCE(711);
      if (lookahead == 'D') ADVANCE(682);
      if (lookahead == 'G') ADVANCE(683);
      if (lookahead == 'H') ADVANCE(684);
      if (lookahead == 'L') ADVANCE(665);
      if (lookahead == 'O') ADVANCE(717);
      if (lookahead == 'P') ADVANCE(663);
      if (lookahead == 'T') ADVANCE(719);
      if (lookahead == 'U') ADVANCE(705);
      if (lookahead == 'V') ADVANCE(695);
      if (lookahead == '[') ADVANCE(868);
      if (lookahead == '\\') ADVANCE(828);
      if (lookahead == '`') ADVANCE(838);
      if (lookahead == 'b') ADVANCE(805);
      if (lookahead == 'f') ADVANCE(668);
      if (lookahead == 'h') ADVANCE(732);
      if (lookahead == 'n') ADVANCE(798);
      if (lookahead == 't') ADVANCE(771);
      if (lookahead == '{') ADVANCE(855);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(824);
      if (aux_sym_value_string_text_token1_character_set_1(lookahead)) SKIP(511)
      END_STATE();
    case 514:
      if (eof) ADVANCE(515);
      if (lookahead == '!') ADVANCE(56);
      if (lookahead == '"') ADVANCE(648);
      if (lookahead == '#') ADVANCE(836);
      if (lookahead == '*') ADVANCE(558);
      if (lookahead == '+') ADVANCE(897);
      if (lookahead == ',') ADVANCE(862);
      if (lookahead == '-') ADVANCE(898);
      if (lookahead == '.') ADVANCE(894);
      if (lookahead == '/') ADVANCE(900);
      if (lookahead == ':') ADVANCE(576);
      if (lookahead == ';') ADVANCE(578);
      if (lookahead == '<') ADVANCE(615);
      if (lookahead == '=') ADVANCE(591);
      if (lookahead == '>') ADVANCE(611);
      if (lookahead == '?') ADVANCE(58);
      if (lookahead == 'E') ADVANCE(896);
      if (lookahead == '[') ADVANCE(864);
      if (lookahead == '\\') ADVANCE(653);
      if (lookahead == ']') ADVANCE(869);
      if (lookahead == '`') ADVANCE(838);
      if (lookahead == 'b') ADVANCE(657);
      if (lookahead == 'e') ADVANCE(895);
      if (lookahead == 'f') ADVANCE(658);
      if (lookahead == 'n') ADVANCE(659);
      if (lookahead == 'r') ADVANCE(660);
      if (lookahead == 't') ADVANCE(661);
      if (lookahead == 'u') ADVANCE(662);
      if (lookahead == '{') ADVANCE(854);
      if (lookahead == '}') ADVANCE(861);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'd')) ADVANCE(878);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(557);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(514)
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(878);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(516);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(517);
      if (sym_filename_text_character_set_1(lookahead)) ADVANCE(856);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(518);
      if (aux_sym_value_string_text_token1_character_set_1(lookahead)) ADVANCE(851);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(anon_sym_GET);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(anon_sym_GET);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(824);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(anon_sym_HEAD);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(anon_sym_HEAD);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(824);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(anon_sym_POST);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(anon_sym_POST);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(824);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(anon_sym_PUT);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(anon_sym_PUT);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(824);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(anon_sym_DELETE);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(anon_sym_DELETE);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(824);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(anon_sym_CONNECT);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(anon_sym_CONNECT);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(824);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(anon_sym_OPTIONS);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(anon_sym_OPTIONS);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(824);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(anon_sym_TRACE);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(anon_sym_TRACE);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(824);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(anon_sym_PATCH);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(anon_sym_PATCH);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(824);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(anon_sym_LINK);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(anon_sym_LINK);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(824);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(anon_sym_UNLINK);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(anon_sym_UNLINK);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(824);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(anon_sym_PURGE);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(anon_sym_PURGE);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(824);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(anon_sym_LOCK);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(anon_sym_LOCK);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(824);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(anon_sym_UNLOCK);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(anon_sym_UNLOCK);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(824);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(anon_sym_PROPFIND);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(anon_sym_PROPFIND);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(824);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(anon_sym_VIEW);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(anon_sym_VIEW);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(824);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(anon_sym_HTTP_SLASH1_DOT0);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(anon_sym_HTTP_SLASH1_DOT1);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(anon_sym_HTTP_SLASH2);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(anon_sym_HTTP_SLASH_STAR);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(anon_sym_HTTP);
      if (lookahead == '/') ADVANCE(39);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(anon_sym_HTTP);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(824);
      if (lookahead == '/') ADVANCE(39);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(824);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(824);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(824);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(824);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(824);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(824);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(824);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(824);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(anon_sym_COLON2);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(anon_sym_file_COMMA);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(aux_sym_file_contenttype_token1);
      if (lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(579);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(anon_sym_cacert);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(anon_sym_location);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(anon_sym_insecure);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(anon_sym_max_DASHredirs);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(anon_sym_retry);
      if (lookahead == '-') ADVANCE(276);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(anon_sym_retry_DASHinterval);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(anon_sym_retry_DASHmax_DASHcount);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(anon_sym_variable);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(anon_sym_verbose);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(anon_sym_very_DASHverbose);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(606);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(anon_sym_status);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(anon_sym_url);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(anon_sym_header);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(anon_sym_cookie);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(anon_sym_body);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(anon_sym_xpath);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(anon_sym_jsonpath);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(anon_sym_regex);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(anon_sym_duration);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(anon_sym_sha256);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(anon_sym_md5);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(anon_sym_bytes);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(anon_sym_not);
      if (lookahead == 'E') ADVANCE(377);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(anon_sym_equals);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(anon_sym_notEquals);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(anon_sym_greaterThan);
      if (lookahead == 'O') ADVANCE(410);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(613);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(anon_sym_greaterThanOrEquals);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(anon_sym_lessThan);
      if (lookahead == 'O') ADVANCE(399);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '/') ADVANCE(640);
      if (lookahead == '=') ADVANCE(620);
      if (lookahead == '?') ADVANCE(632);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '/') ADVANCE(640);
      if (lookahead == '?') ADVANCE(632);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(620);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '?') ADVANCE(632);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(anon_sym_lessThanOrEquals);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(anon_sym_startsWith);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(anon_sym_endsWith);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(anon_sym_contains);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(anon_sym_matches);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(anon_sym_exists);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(anon_sym_includes);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(anon_sym_isInteger);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(anon_sym_isFloat);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(anon_sym_isBoolean);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(anon_sym_isString);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(anon_sym_isCollection);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(anon_sym_LT_QMARK);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(aux_sym_xml_prolog_tag_token1);
      if (lookahead == '\n') ADVANCE(635);
      if (lookahead == '?') ADVANCE(1);
      if (lookahead != 0) ADVANCE(633);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(aux_sym_xml_prolog_tag_token1);
      if (lookahead == '#') ADVANCE(633);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) ADVANCE(634);
      if (lookahead != 0 &&
          lookahead != '?') ADVANCE(635);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(aux_sym_xml_prolog_tag_token1);
      if (lookahead != 0 &&
          lookahead != '?') ADVANCE(635);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(anon_sym_QMARK_GT);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(aux_sym_xml_open_tag_token1);
      if (lookahead == '\n') ADVANCE(639);
      if (lookahead == '>') ADVANCE(1);
      if (lookahead != 0) ADVANCE(637);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(aux_sym_xml_open_tag_token1);
      if (lookahead == '#') ADVANCE(637);
      if (lookahead == '>') ADVANCE(639);
      if (lookahead == '/' ||
          lookahead == '?') ADVANCE(639);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) ADVANCE(638);
      if (lookahead != 0) ADVANCE(639);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(aux_sym_xml_open_tag_token1);
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(639);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(anon_sym_LT_SLASH);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(aux_sym_xml_close_tag_token1);
      if (lookahead == '\n') ADVANCE(643);
      if (lookahead == '/' ||
          lookahead == '>') ADVANCE(1);
      if (lookahead != 0) ADVANCE(641);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(aux_sym_xml_close_tag_token1);
      if (lookahead == '#') ADVANCE(641);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) ADVANCE(642);
      if (lookahead != 0 &&
          lookahead != '/' &&
          lookahead != '>') ADVANCE(643);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(aux_sym_xml_close_tag_token1);
      if (lookahead != 0 &&
          lookahead != '/' &&
          lookahead != '>') ADVANCE(643);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(anon_sym_base64_COMMA);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(aux_sym_oneline_base64_token1);
      if (lookahead == '\n') ADVANCE(645);
      if (('+' <= lookahead && lookahead <= '-') ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(aux_sym_oneline_base64_token1);
      if (lookahead == '\n' ||
          ('+' <= lookahead && lookahead <= '-') ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(anon_sym_hex_COMMA);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(aux_sym_quoted_string_text_token1);
      if (lookahead == '\n') ADVANCE(652);
      if (lookahead == '"' ||
          lookahead == '\\') ADVANCE(1);
      if (lookahead != 0) ADVANCE(649);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(aux_sym_quoted_string_text_token1);
      if (lookahead == '#') ADVANCE(649);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) ADVANCE(650);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(652);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(aux_sym_quoted_string_text_token1);
      if (lookahead == '{') ADVANCE(876);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(652);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(aux_sym_quoted_string_text_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(652);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(aux_sym_invalid_quoted_string_escaped_char_token1);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(aux_sym_invalid_quoted_string_escaped_char_token1);
      if (lookahead == '#') ADVANCE(656);
      if (lookahead == 'b') ADVANCE(657);
      if (lookahead == 'f') ADVANCE(658);
      if (lookahead == 'n') ADVANCE(659);
      if (lookahead == 'r') ADVANCE(660);
      if (lookahead == 't') ADVANCE(661);
      if (aux_sym_invalid_quoted_string_escaped_char_token1_character_set_1(lookahead)) ADVANCE(655);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\f' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\' &&
          lookahead != 'u') ADVANCE(654);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(aux_sym_invalid_quoted_string_escaped_char_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(anon_sym_b);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(anon_sym_f);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(anon_sym_n);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(anon_sym_r);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(anon_sym_t);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(anon_sym_u);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(sym_key_string_text);
      if (sym_key_string_text_character_set_3(lookahead)) ADVANCE(824);
      if (lookahead == 'A') ADVANCE(728);
      if (lookahead == 'O') ADVANCE(722);
      if (lookahead == 'R') ADVANCE(712);
      if (lookahead == 'U') ADVANCE(667);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(sym_key_string_text);
      if (sym_key_string_text_character_set_4(lookahead)) ADVANCE(824);
      if (lookahead == 'E') ADVANCE(671);
      if (lookahead == 'T') ADVANCE(726);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(sym_key_string_text);
      if (sym_key_string_text_character_set_5(lookahead)) ADVANCE(824);
      if (lookahead == 'I') ADVANCE(704);
      if (lookahead == 'O') ADVANCE(675);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(sym_key_string_text);
      if (sym_key_string_text_character_set_5(lookahead)) ADVANCE(824);
      if (lookahead == 'I') ADVANCE(708);
      if (lookahead == 'O') ADVANCE(676);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(sym_key_string_text);
      if (sym_key_string_text_character_set_6(lookahead)) ADVANCE(824);
      if (lookahead == 'R') ADVANCE(693);
      if (lookahead == 'T') ADVANCE(526);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'h') ||
          ('j' <= lookahead && lookahead <= 'z')) ADVANCE(824);
      if (lookahead == 'a') ADVANCE(752);
      if (lookahead == 'i') ADVANCE(750);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '3') ||
          ('5' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(824);
      if (lookahead == '4') ADVANCE(827);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '5') ||
          ('7' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(824);
      if (lookahead == '6') ADVANCE(669);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '@' ||
          ('B' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(824);
      if (lookahead == 'A') ADVANCE(679);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '@' ||
          ('B' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(824);
      if (lookahead == 'A') ADVANCE(677);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '@' ||
          ('B' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(824);
      if (lookahead == 'A') ADVANCE(799);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'B') ||
          ('D' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(824);
      if (lookahead == 'C') ADVANCE(694);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'B') ||
          ('D' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(824);
      if (lookahead == 'C') ADVANCE(699);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'B') ||
          ('D' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(824);
      if (lookahead == 'C') ADVANCE(701);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'B') ||
          ('D' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(824);
      if (lookahead == 'C') ADVANCE(687);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'B') ||
          ('D' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(824);
      if (lookahead == 'C') ADVANCE(725);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'C') ||
          ('E' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(824);
      if (lookahead == 'D') ADVANCE(522);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'C') ||
          ('E' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(824);
      if (lookahead == 'D') ADVANCE(548);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'C') ||
          ('E' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(824);
      if (lookahead == 'D') ADVANCE(811);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'D') ||
          ('F' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(824);
      if (lookahead == 'E') ADVANCE(702);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'D') ||
          ('F' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(824);
      if (lookahead == 'E') ADVANCE(723);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'D') ||
          ('F' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(824);
      if (lookahead == 'E') ADVANCE(671);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'D') ||
          ('F' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(824);
      if (lookahead == 'E') ADVANCE(730);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'D') ||
          ('F' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(824);
      if (lookahead == 'E') ADVANCE(542);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'D') ||
          ('F' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(824);
      if (lookahead == 'E') ADVANCE(534);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'D') ||
          ('F' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(824);
      if (lookahead == 'E') ADVANCE(528);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'D') ||
          ('F' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(824);
      if (lookahead == 'E') ADVANCE(678);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'D') ||
          ('F' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(824);
      if (lookahead == 'E') ADVANCE(729);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'E') ||
          ('G' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(824);
      if (lookahead == 'F') ADVANCE(696);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'E') ||
          ('G' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(824);
      if (lookahead == 'F') ADVANCE(764);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'F') ||
          ('H' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(824);
      if (lookahead == 'G') ADVANCE(686);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'G') ||
          ('I' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(824);
      if (lookahead == 'H') ADVANCE(536);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'H') ||
          ('J' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(824);
      if (lookahead == 'I') ADVANCE(685);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'H') ||
          ('J' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(824);
      if (lookahead == 'I') ADVANCE(707);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'H') ||
          ('J' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(824);
      if (lookahead == 'I') ADVANCE(713);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'J') ||
          ('L' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(824);
      if (lookahead == 'K') ADVANCE(538);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'J') ||
          ('L' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(824);
      if (lookahead == 'K') ADVANCE(544);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'J') ||
          ('L' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(824);
      if (lookahead == 'K') ADVANCE(540);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'J') ||
          ('L' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(824);
      if (lookahead == 'K') ADVANCE(546);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'K') ||
          ('M' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(824);
      if (lookahead == 'L') ADVANCE(690);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'K') ||
          ('M' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(824);
      if (lookahead == 'L') ADVANCE(666);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'M') ||
          ('O' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(824);
      if (lookahead == 'N') ADVANCE(698);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'M') ||
          ('O' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(824);
      if (lookahead == 'N') ADVANCE(703);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'M') ||
          ('O' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(824);
      if (lookahead == 'N') ADVANCE(720);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'M') ||
          ('O' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(824);
      if (lookahead == 'N') ADVANCE(680);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'M') ||
          ('O' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(824);
      if (lookahead == 'N') ADVANCE(700);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'M') ||
          ('O' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(824);
      if (lookahead == 'N') ADVANCE(710);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'M') ||
          ('O' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(824);
      if (lookahead == 'N') ADVANCE(689);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'N') ||
          ('P' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(824);
      if (lookahead == 'O') ADVANCE(709);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'N') ||
          ('P' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(824);
      if (lookahead == 'O') ADVANCE(715);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'N') ||
          ('P' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(824);
      if (lookahead == 'O') ADVANCE(706);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'O') ||
          ('Q' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(824);
      if (lookahead == 'P') ADVANCE(556);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'O') ||
          ('Q' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(824);
      if (lookahead == 'P') ADVANCE(691);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'O') ||
          ('Q' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(824);
      if (lookahead == 'P') ADVANCE(809);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'O') ||
          ('Q' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(824);
      if (lookahead == 'P') ADVANCE(727);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'O') ||
          ('Q' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(824);
      if (lookahead == 'P') ADVANCE(815);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Q') ||
          ('S' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(824);
      if (lookahead == 'R') ADVANCE(672);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'R') ||
          ('T' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(824);
      if (lookahead == 'S') ADVANCE(532);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'R') ||
          ('T' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(824);
      if (lookahead == 'S') ADVANCE(795);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'R') ||
          ('T' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(824);
      if (lookahead == 'S') ADVANCE(724);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'S') ||
          ('U' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(824);
      if (lookahead == 'T') ADVANCE(520);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'S') ||
          ('U' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(824);
      if (lookahead == 'T') ADVANCE(524);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'S') ||
          ('U' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(824);
      if (lookahead == 'T') ADVANCE(530);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'S') ||
          ('U' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(824);
      if (lookahead == 'T') ADVANCE(714);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'S') ||
          ('U' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(824);
      if (lookahead == 'T') ADVANCE(697);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'S') ||
          ('U' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(824);
      if (lookahead == 'T') ADVANCE(674);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'S') ||
          ('U' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(824);
      if (lookahead == 'T') ADVANCE(688);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'V') ||
          ('X' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(824);
      if (lookahead == 'W') ADVANCE(550);
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
          lookahead == 'a' ||
          lookahead == 'b' ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(824);
      if (lookahead == 'c') ADVANCE(673);
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
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(824);
      if (lookahead == 'e') ADVANCE(803);
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
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(824);
      if (lookahead == 'e') ADVANCE(670);
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
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(824);
      if (lookahead == 'e') ADVANCE(887);
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
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(824);
      if (lookahead == 'e') ADVANCE(889);
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
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(824);
      if (lookahead == 'e') ADVANCE(826);
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
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(824);
      if (lookahead == 'e') ADVANCE(769);
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
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(824);
      if (lookahead == 'e') ADVANCE(779);
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
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(824);
      if (lookahead == 'e') ADVANCE(775);
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
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(824);
      if (lookahead == 'e') ADVANCE(786);
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
          ('a' <= lookahead && lookahead <= 'f') ||
          ('h' <= lookahead && lookahead <= 'z')) ADVANCE(824);
      if (lookahead == 'g') ADVANCE(718);
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
          ('a' <= lookahead && lookahead <= 'g') ||
          ('i' <= lookahead && lookahead <= 'z')) ADVANCE(824);
      if (lookahead == 'h') ADVANCE(818);
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
          ('a' <= lookahead && lookahead <= 'h') ||
          ('j' <= lookahead && lookahead <= 'z')) ADVANCE(824);
      if (lookahead == 'i') ADVANCE(731);
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
          ('a' <= lookahead && lookahead <= 'h') ||
          ('j' <= lookahead && lookahead <= 'z')) ADVANCE(824);
      if (lookahead == 'i') ADVANCE(767);
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
          ('a' <= lookahead && lookahead <= 'h') ||
          ('j' <= lookahead && lookahead <= 'z')) ADVANCE(824);
      if (lookahead == 'i') ADVANCE(758);
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
          ('a' <= lookahead && lookahead <= 'h') ||
          ('j' <= lookahead && lookahead <= 'z')) ADVANCE(824);
      if (lookahead == 'i') ADVANCE(761);
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
          ('a' <= lookahead && lookahead <= 'h') ||
          ('j' <= lookahead && lookahead <= 'z')) ADVANCE(824);
      if (lookahead == 'i') ADVANCE(738);
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
          ('a' <= lookahead && lookahead <= 'j') ||
          ('l' <= lookahead && lookahead <= 'z')) ADVANCE(824);
      if (lookahead == 'k') ADVANCE(747);
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
          ('a' <= lookahead && lookahead <= 'k') ||
          ('m' <= lookahead && lookahead <= 'z')) ADVANCE(824);
      if (lookahead == 'l') ADVANCE(891);
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
          ('a' <= lookahead && lookahead <= 'k') ||
          ('m' <= lookahead && lookahead <= 'z')) ADVANCE(824);
      if (lookahead == 'l') ADVANCE(736);
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
          ('a' <= lookahead && lookahead <= 'k') ||
          ('m' <= lookahead && lookahead <= 'z')) ADVANCE(824);
      if (lookahead == 'l') ADVANCE(749);
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
          ('a' <= lookahead && lookahead <= 'k') ||
          ('m' <= lookahead && lookahead <= 'z')) ADVANCE(824);
      if (lookahead == 'l') ADVANCE(783);
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
          ('a' <= lookahead && lookahead <= 'k') ||
          ('m' <= lookahead && lookahead <= 'z')) ADVANCE(824);
      if (lookahead == 'l') ADVANCE(792);
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
          ('a' <= lookahead && lookahead <= 'l') ||
          ('n' <= lookahead && lookahead <= 'z')) ADVANCE(824);
      if (lookahead == 'm') ADVANCE(681);
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
          ('a' <= lookahead && lookahead <= 'l') ||
          ('n' <= lookahead && lookahead <= 'z')) ADVANCE(824);
      if (lookahead == 'm') ADVANCE(716);
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
          ('a' <= lookahead && lookahead <= 'l') ||
          ('n' <= lookahead && lookahead <= 'z')) ADVANCE(824);
      if (lookahead == 'm') ADVANCE(782);
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
          ('a' <= lookahead && lookahead <= 'l') ||
          ('n' <= lookahead && lookahead <= 'z')) ADVANCE(824);
      if (lookahead == 'm') ADVANCE(784);
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
          ('a' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'z')) ADVANCE(824);
      if (lookahead == 'n') ADVANCE(741);
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
          ('a' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'z')) ADVANCE(824);
      if (lookahead == 'n') ADVANCE(780);
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
          ('a' <= lookahead && lookahead <= 'n') ||
          ('p' <= lookahead && lookahead <= 'z')) ADVANCE(824);
      if (lookahead == 'o') ADVANCE(748);
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
          ('a' <= lookahead && lookahead <= 'n') ||
          ('p' <= lookahead && lookahead <= 'z')) ADVANCE(824);
      if (lookahead == 'o') ADVANCE(759);
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
          ('a' <= lookahead && lookahead <= 'n') ||
          ('p' <= lookahead && lookahead <= 'z')) ADVANCE(824);
      if (lookahead == 'o') ADVANCE(768);
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
          ('a' <= lookahead && lookahead <= 'n') ||
          ('p' <= lookahead && lookahead <= 'z')) ADVANCE(824);
      if (lookahead == 'o') ADVANCE(760);
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
          ('a' <= lookahead && lookahead <= 'n') ||
          ('p' <= lookahead && lookahead <= 'z')) ADVANCE(824);
      if (lookahead == 'o') ADVANCE(772);
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
          ('a' <= lookahead && lookahead <= 'o') ||
          ('q' <= lookahead && lookahead <= 'z')) ADVANCE(824);
      if (lookahead == 'p') ADVANCE(791);
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
          ('a' <= lookahead && lookahead <= 'o') ||
          ('q' <= lookahead && lookahead <= 'z')) ADVANCE(824);
      if (lookahead == 'p') ADVANCE(794);
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
          ('a' <= lookahead && lookahead <= 'o') ||
          ('q' <= lookahead && lookahead <= 'z')) ADVANCE(824);
      if (lookahead == 'p') ADVANCE(810);
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
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(824);
      if (lookahead == 'r') ADVANCE(755);
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
          ('a' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(824);
      if (lookahead == 'r') ADVANCE(804);
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
          ('a' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(824);
      if (lookahead == 'r') ADVANCE(808);
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
          ('a' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(824);
      if (lookahead == 'r') ADVANCE(801);
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
          ('a' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(824);
      if (lookahead == 'r') ADVANCE(754);
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
          ('a' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(824);
      if (lookahead == 'r') ADVANCE(790);
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
          ('a' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(824);
      if (lookahead == 'r') ADVANCE(745);
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
          ('a' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(824);
      if (lookahead == 'r') ADVANCE(796);
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
          ('a' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(824);
      if (lookahead == 'r') ADVANCE(740);
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
          ('a' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(824);
      if (lookahead == 'r') ADVANCE(814);
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
          ('t' <= lookahead && lookahead <= 'z')) ADVANCE(824);
      if (lookahead == 's') ADVANCE(743);
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
          ('t' <= lookahead && lookahead <= 'z')) ADVANCE(824);
      if (lookahead == 's') ADVANCE(816);
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
          ('a' <= lookahead && lookahead <= 'r') ||
          ('t' <= lookahead && lookahead <= 'z')) ADVANCE(824);
      if (lookahead == 's') ADVANCE(817);
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
          ('a' <= lookahead && lookahead <= 'r') ||
          ('t' <= lookahead && lookahead <= 'z')) ADVANCE(824);
      if (lookahead == 's') ADVANCE(733);
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
          ('a' <= lookahead && lookahead <= 'r') ||
          ('t' <= lookahead && lookahead <= 'z')) ADVANCE(824);
      if (lookahead == 's') ADVANCE(819);
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
          ('a' <= lookahead && lookahead <= 'r') ||
          ('t' <= lookahead && lookahead <= 'z')) ADVANCE(824);
      if (lookahead == 's') ADVANCE(735);
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
          ('a' <= lookahead && lookahead <= 'r') ||
          ('t' <= lookahead && lookahead <= 'z')) ADVANCE(824);
      if (lookahead == 's') ADVANCE(821);
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
          ('a' <= lookahead && lookahead <= 'r') ||
          ('t' <= lookahead && lookahead <= 'z')) ADVANCE(824);
      if (lookahead == 's') ADVANCE(822);
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
          ('a' <= lookahead && lookahead <= 'r') ||
          ('t' <= lookahead && lookahead <= 'z')) ADVANCE(824);
      if (lookahead == 's') ADVANCE(823);
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
          ('a' <= lookahead && lookahead <= 'r') ||
          ('t' <= lookahead && lookahead <= 'z')) ADVANCE(824);
      if (lookahead == 's') ADVANCE(739);
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
          ('a' <= lookahead && lookahead <= 'r') ||
          ('t' <= lookahead && lookahead <= 'z')) ADVANCE(824);
      if (lookahead == 's') ADVANCE(787);
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
          ('a' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z')) ADVANCE(824);
      if (lookahead == 't') ADVANCE(742);
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
          ('a' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z')) ADVANCE(824);
      if (lookahead == 't') ADVANCE(692);
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
          ('a' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z')) ADVANCE(824);
      if (lookahead == 't') ADVANCE(746);
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
          ('a' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z')) ADVANCE(824);
      if (lookahead == 't') ADVANCE(744);
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
          ('a' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z')) ADVANCE(824);
      if (lookahead == 't') ADVANCE(812);
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
          ('a' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z')) ADVANCE(824);
      if (lookahead == 't') ADVANCE(802);
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
          ('a' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z')) ADVANCE(824);
      if (lookahead == 't') ADVANCE(774);
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
          ('a' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z')) ADVANCE(824);
      if (lookahead == 't') ADVANCE(785);
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
          ('a' <= lookahead && lookahead <= 't') ||
          ('v' <= lookahead && lookahead <= 'z')) ADVANCE(824);
      if (lookahead == 'u') ADVANCE(737);
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
          ('a' <= lookahead && lookahead <= 't') ||
          ('v' <= lookahead && lookahead <= 'z')) ADVANCE(824);
      if (lookahead == 'u') ADVANCE(751);
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
          ('a' <= lookahead && lookahead <= 't') ||
          ('v' <= lookahead && lookahead <= 'z')) ADVANCE(824);
      if (lookahead == 'u') ADVANCE(789);
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
          ('a' <= lookahead && lookahead <= 't') ||
          ('v' <= lookahead && lookahead <= 'z')) ADVANCE(824);
      if (lookahead == 'u') ADVANCE(753);
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
          ('a' <= lookahead && lookahead <= 't') ||
          ('v' <= lookahead && lookahead <= 'z')) ADVANCE(824);
      if (lookahead == 'u') ADVANCE(734);
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
          ('a' <= lookahead && lookahead <= 't') ||
          ('v' <= lookahead && lookahead <= 'z')) ADVANCE(824);
      if (lookahead == 'u') ADVANCE(776);
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
          ('a' <= lookahead && lookahead <= 'w') ||
          lookahead == 'y' ||
          lookahead == 'z') ADVANCE(824);
      if (lookahead == 'x') ADVANCE(825);
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
          ('a' <= lookahead && lookahead <= 'x') ||
          lookahead == 'z') ADVANCE(824);
      if (lookahead == 'y') ADVANCE(721);
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
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(824);
      if (lookahead == 'a') ADVANCE(781);
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
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(824);
      if (lookahead == 'a') ADVANCE(752);
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
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(824);
      if (lookahead == 'a') ADVANCE(778);
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
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(824);
      if (lookahead == 'a') ADVANCE(756);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(824);
      if (lookahead == 'a') ADVANCE(770);
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
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(824);
      if (lookahead == 'a') ADVANCE(773);
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
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(824);
      if (lookahead == 'a') ADVANCE(793);
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
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(824);
      if (lookahead == 'a') ADVANCE(820);
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
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(824);
      if (lookahead == 'a') ADVANCE(766);
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
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(824);
      if (lookahead == 'a') ADVANCE(757);
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
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(824);
      if (lookahead == 'a') ADVANCE(777);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(824);
      if (lookahead == ']') ADVANCE(568);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(824);
      if (lookahead == ']') ADVANCE(574);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(824);
      if (lookahead == ']') ADVANCE(560);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(824);
      if (lookahead == ']') ADVANCE(564);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(824);
      if (lookahead == ']') ADVANCE(566);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(824);
      if (lookahead == ']') ADVANCE(562);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(824);
      if (lookahead == ']') ADVANCE(572);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(824);
      if (lookahead == ']') ADVANCE(570);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(824);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(824);
      if (lookahead == ',') ADVANCE(647);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(824);
      if (lookahead == ',') ADVANCE(577);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(824);
      if (lookahead == ',') ADVANCE(644);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(anon_sym_BSLASH2);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(aux_sym_key_string_escaped_char_token1);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(aux_sym_key_string_escaped_char_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(aux_sym_value_string_text_token1);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(aux_sym_value_string_text_token1);
      if (lookahead == 'a') ADVANCE(300);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(aux_sym_value_string_text_token1);
      if (lookahead == 'r') ADVANCE(486);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(aux_sym_value_string_text_token1);
      if (lookahead == 'u') ADVANCE(297);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(aux_sym_value_string_text_token1);
      if (lookahead == '{') ADVANCE(874);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      if (lookahead == '`') ADVANCE(143);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(aux_sym_oneline_string_text_token1);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(aux_sym_oneline_string_text_token1);
      if (lookahead == '`') ADVANCE(837);
      if (aux_sym_value_string_text_token1_character_set_1(lookahead)) ADVANCE(840);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(839);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(aux_sym_oneline_string_text_token1);
      if (lookahead == '{') ADVANCE(874);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(aux_sym_oneline_string_text_token2);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(aux_sym_oneline_string_text_token2);
      if (lookahead == '#') ADVANCE(844);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) ADVANCE(843);
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(842);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(aux_sym_oneline_string_text_token2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(anon_sym_BQUOTE_BQUOTE_BQUOTE);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(anon_sym_base64);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(anon_sym_hex);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(anon_sym_json);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(anon_sym_xml);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(anon_sym_graphql);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(aux_sym__multiline_string_text_token1);
      if (lookahead == '\n') ADVANCE(518);
      if (lookahead == '#') ADVANCE(852);
      if (aux_sym_value_string_text_token1_character_set_1(lookahead)) ADVANCE(851);
      if (lookahead != 0 &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != '{') ADVANCE(853);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(aux_sym__multiline_string_text_token1);
      if (lookahead == '\n') ADVANCE(853);
      if (lookahead == '\\' ||
          lookahead == '`' ||
          lookahead == '{') ADVANCE(1);
      if (lookahead != 0) ADVANCE(852);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(aux_sym__multiline_string_text_token1);
      if (lookahead != 0 &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != '{') ADVANCE(853);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '{') ADVANCE(874);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(sym_filename_text);
      if (lookahead == '\n') ADVANCE(517);
      if (sym_filename_text_character_set_1(lookahead)) ADVANCE(856);
      if (lookahead != 0 &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '\\') ADVANCE(859);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(sym_filename_text);
      if (lookahead == '{') ADVANCE(875);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '\\') ADVANCE(859);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(sym_filename_text);
      if (sym_filename_text_character_set_1(lookahead)) ADVANCE(858);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '\\') ADVANCE(859);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(sym_filename_text);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '\\') ADVANCE(859);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(aux_sym_filename_escaped_char_token1);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == 'A') ADVANCE(424);
      if (lookahead == 'B') ADVANCE(153);
      if (lookahead == 'C') ADVANCE(173);
      if (lookahead == 'F') ADVANCE(340);
      if (lookahead == 'M') ADVANCE(479);
      if (lookahead == 'O') ADVANCE(368);
      if (lookahead == 'Q') ADVANCE(480);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == 'A') ADVANCE(424);
      if (lookahead == 'C') ADVANCE(172);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == 'B') ADVANCE(153);
      if (lookahead == 'C') ADVANCE(345);
      if (lookahead == 'F') ADVANCE(340);
      if (lookahead == 'M') ADVANCE(479);
      if (lookahead == 'O') ADVANCE(368);
      if (lookahead == 'Q') ADVANCE(480);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (sym_key_string_text_character_set_7(lookahead)) ADVANCE(824);
      if (lookahead == 'B') ADVANCE(807);
      if (lookahead == 'C') ADVANCE(763);
      if (lookahead == 'F') ADVANCE(762);
      if (lookahead == 'M') ADVANCE(800);
      if (lookahead == 'O') ADVANCE(765);
      if (lookahead == 'Q') ADVANCE(797);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (sym_key_string_text_character_set_8(lookahead)) ADVANCE(824);
      if (lookahead == 'A') ADVANCE(788);
      if (lookahead == 'C') ADVANCE(813);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(aux_sym_json_string_text_token1);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(aux_sym_json_string_text_token1);
      if (lookahead == '#') ADVANCE(873);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) ADVANCE(871);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(870);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(aux_sym_json_string_text_token1);
      if (lookahead == '{') ADVANCE(874);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(aux_sym_json_string_text_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '\\') ADVANCE(859);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(652);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(aux_sym_variable_name_token1);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(aux_sym_variable_name_token2);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(879);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(anon_sym_count);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(anon_sym_urlEncode);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(anon_sym_urlDecode);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(anon_sym_htmlEscape);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(anon_sym_htmlUnescape);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(anon_sym_toInt);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(824);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(824);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(anon_sym_null);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(anon_sym_null);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(824);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(aux_sym_digit_token1);
      END_STATE();
    case 893:
      ACCEPT_TOKEN(aux_sym_hexdigit_token1);
      END_STATE();
    case 894:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 895:
      ACCEPT_TOKEN(anon_sym_e);
      END_STATE();
    case 896:
      ACCEPT_TOKEN(anon_sym_E);
      END_STATE();
    case 897:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 898:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 899:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 900:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 901:
      ACCEPT_TOKEN(aux_sym_regex_text_token1);
      if (lookahead == '\n') ADVANCE(899);
      if (lookahead == '/' ||
          lookahead == '\\') ADVANCE(1);
      if (lookahead != 0) ADVANCE(901);
      END_STATE();
    case 902:
      ACCEPT_TOKEN(aux_sym_regex_text_token1);
      if (lookahead == '#') ADVANCE(903);
      if (aux_sym_value_string_text_token1_character_set_1(lookahead)) ADVANCE(902);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '/' &&
          lookahead != '\\') ADVANCE(904);
      END_STATE();
    case 903:
      ACCEPT_TOKEN(aux_sym_regex_text_token1);
      if (lookahead == '/' ||
          lookahead == '\\') ADVANCE(1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(901);
      END_STATE();
    case 904:
      ACCEPT_TOKEN(aux_sym_regex_text_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '/' &&
          lookahead != '\\') ADVANCE(904);
      END_STATE();
    case 905:
      ACCEPT_TOKEN(aux_sym_regex_escaped_char_token1);
      END_STATE();
    case 906:
      ACCEPT_TOKEN(aux_sym_regex_escaped_char_token1);
      if (lookahead == '#') ADVANCE(907);
      if (aux_sym_value_string_text_token1_character_set_1(lookahead)) ADVANCE(906);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(905);
      END_STATE();
    case 907:
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
  [1] = {.lex_state = 508},
  [2] = {.lex_state = 512},
  [3] = {.lex_state = 512},
  [4] = {.lex_state = 512},
  [5] = {.lex_state = 512},
  [6] = {.lex_state = 508},
  [7] = {.lex_state = 508},
  [8] = {.lex_state = 508},
  [9] = {.lex_state = 513},
  [10] = {.lex_state = 513},
  [11] = {.lex_state = 508},
  [12] = {.lex_state = 508},
  [13] = {.lex_state = 508},
  [14] = {.lex_state = 508},
  [15] = {.lex_state = 508},
  [16] = {.lex_state = 508},
  [17] = {.lex_state = 508},
  [18] = {.lex_state = 508},
  [19] = {.lex_state = 508},
  [20] = {.lex_state = 508},
  [21] = {.lex_state = 17},
  [22] = {.lex_state = 17},
  [23] = {.lex_state = 512},
  [24] = {.lex_state = 512},
  [25] = {.lex_state = 512},
  [26] = {.lex_state = 512},
  [27] = {.lex_state = 508},
  [28] = {.lex_state = 508},
  [29] = {.lex_state = 508},
  [30] = {.lex_state = 508},
  [31] = {.lex_state = 508},
  [32] = {.lex_state = 508},
  [33] = {.lex_state = 508},
  [34] = {.lex_state = 508},
  [35] = {.lex_state = 508},
  [36] = {.lex_state = 508},
  [37] = {.lex_state = 508},
  [38] = {.lex_state = 508},
  [39] = {.lex_state = 512},
  [40] = {.lex_state = 512},
  [41] = {.lex_state = 512},
  [42] = {.lex_state = 512},
  [43] = {.lex_state = 512},
  [44] = {.lex_state = 512},
  [45] = {.lex_state = 512},
  [46] = {.lex_state = 512},
  [47] = {.lex_state = 512},
  [48] = {.lex_state = 508},
  [49] = {.lex_state = 512},
  [50] = {.lex_state = 508},
  [51] = {.lex_state = 508},
  [52] = {.lex_state = 512},
  [53] = {.lex_state = 512},
  [54] = {.lex_state = 513},
  [55] = {.lex_state = 512},
  [56] = {.lex_state = 513},
  [57] = {.lex_state = 513},
  [58] = {.lex_state = 513},
  [59] = {.lex_state = 508},
  [60] = {.lex_state = 508},
  [61] = {.lex_state = 17},
  [62] = {.lex_state = 17},
  [63] = {.lex_state = 508},
  [64] = {.lex_state = 513},
  [65] = {.lex_state = 513},
  [66] = {.lex_state = 513},
  [67] = {.lex_state = 513},
  [68] = {.lex_state = 513},
  [69] = {.lex_state = 508},
  [70] = {.lex_state = 17},
  [71] = {.lex_state = 17},
  [72] = {.lex_state = 17},
  [73] = {.lex_state = 17},
  [74] = {.lex_state = 17},
  [75] = {.lex_state = 17},
  [76] = {.lex_state = 17},
  [77] = {.lex_state = 17},
  [78] = {.lex_state = 17},
  [79] = {.lex_state = 17},
  [80] = {.lex_state = 17},
  [81] = {.lex_state = 17},
  [82] = {.lex_state = 17},
  [83] = {.lex_state = 17},
  [84] = {.lex_state = 17},
  [85] = {.lex_state = 17},
  [86] = {.lex_state = 17},
  [87] = {.lex_state = 17},
  [88] = {.lex_state = 17},
  [89] = {.lex_state = 17},
  [90] = {.lex_state = 17},
  [91] = {.lex_state = 17},
  [92] = {.lex_state = 17},
  [93] = {.lex_state = 17},
  [94] = {.lex_state = 17},
  [95] = {.lex_state = 17},
  [96] = {.lex_state = 22},
  [97] = {.lex_state = 508},
  [98] = {.lex_state = 508},
  [99] = {.lex_state = 508},
  [100] = {.lex_state = 508},
  [101] = {.lex_state = 17},
  [102] = {.lex_state = 17},
  [103] = {.lex_state = 508},
  [104] = {.lex_state = 17},
  [105] = {.lex_state = 508},
  [106] = {.lex_state = 508},
  [107] = {.lex_state = 2},
  [108] = {.lex_state = 508},
  [109] = {.lex_state = 21},
  [110] = {.lex_state = 508},
  [111] = {.lex_state = 17},
  [112] = {.lex_state = 4},
  [113] = {.lex_state = 17},
  [114] = {.lex_state = 8},
  [115] = {.lex_state = 8},
  [116] = {.lex_state = 8},
  [117] = {.lex_state = 4},
  [118] = {.lex_state = 17},
  [119] = {.lex_state = 17},
  [120] = {.lex_state = 8},
  [121] = {.lex_state = 508},
  [122] = {.lex_state = 508},
  [123] = {.lex_state = 508},
  [124] = {.lex_state = 8},
  [125] = {.lex_state = 508},
  [126] = {.lex_state = 508},
  [127] = {.lex_state = 17},
  [128] = {.lex_state = 4},
  [129] = {.lex_state = 17},
  [130] = {.lex_state = 7},
  [131] = {.lex_state = 3},
  [132] = {.lex_state = 7},
  [133] = {.lex_state = 7},
  [134] = {.lex_state = 7},
  [135] = {.lex_state = 8},
  [136] = {.lex_state = 8},
  [137] = {.lex_state = 9},
  [138] = {.lex_state = 26},
  [139] = {.lex_state = 11},
  [140] = {.lex_state = 3},
  [141] = {.lex_state = 23},
  [142] = {.lex_state = 3},
  [143] = {.lex_state = 23},
  [144] = {.lex_state = 23},
  [145] = {.lex_state = 11},
  [146] = {.lex_state = 23},
  [147] = {.lex_state = 11},
  [148] = {.lex_state = 11},
  [149] = {.lex_state = 11},
  [150] = {.lex_state = 23},
  [151] = {.lex_state = 26},
  [152] = {.lex_state = 26},
  [153] = {.lex_state = 26},
  [154] = {.lex_state = 29},
  [155] = {.lex_state = 8},
  [156] = {.lex_state = 8},
  [157] = {.lex_state = 12},
  [158] = {.lex_state = 12},
  [159] = {.lex_state = 12},
  [160] = {.lex_state = 26},
  [161] = {.lex_state = 29},
  [162] = {.lex_state = 34},
  [163] = {.lex_state = 24},
  [164] = {.lex_state = 22},
  [165] = {.lex_state = 7},
  [166] = {.lex_state = 7},
  [167] = {.lex_state = 24},
  [168] = {.lex_state = 24},
  [169] = {.lex_state = 24},
  [170] = {.lex_state = 9},
  [171] = {.lex_state = 9},
  [172] = {.lex_state = 24},
  [173] = {.lex_state = 27},
  [174] = {.lex_state = 25},
  [175] = {.lex_state = 29},
  [176] = {.lex_state = 29},
  [177] = {.lex_state = 34},
  [178] = {.lex_state = 22},
  [179] = {.lex_state = 4},
  [180] = {.lex_state = 4},
  [181] = {.lex_state = 4},
  [182] = {.lex_state = 20},
  [183] = {.lex_state = 11},
  [184] = {.lex_state = 11},
  [185] = {.lex_state = 22},
  [186] = {.lex_state = 20},
  [187] = {.lex_state = 4},
  [188] = {.lex_state = 23},
  [189] = {.lex_state = 4},
  [190] = {.lex_state = 4},
  [191] = {.lex_state = 4},
  [192] = {.lex_state = 4},
  [193] = {.lex_state = 4},
  [194] = {.lex_state = 4},
  [195] = {.lex_state = 20},
  [196] = {.lex_state = 4},
  [197] = {.lex_state = 4},
  [198] = {.lex_state = 4},
  [199] = {.lex_state = 4},
  [200] = {.lex_state = 3},
  [201] = {.lex_state = 4},
  [202] = {.lex_state = 4},
  [203] = {.lex_state = 4},
  [204] = {.lex_state = 4},
  [205] = {.lex_state = 20},
  [206] = {.lex_state = 23},
  [207] = {.lex_state = 11},
  [208] = {.lex_state = 4},
  [209] = {.lex_state = 11},
  [210] = {.lex_state = 4},
  [211] = {.lex_state = 11},
  [212] = {.lex_state = 3},
  [213] = {.lex_state = 4},
  [214] = {.lex_state = 4},
  [215] = {.lex_state = 4},
  [216] = {.lex_state = 4},
  [217] = {.lex_state = 4},
  [218] = {.lex_state = 4},
  [219] = {.lex_state = 22},
  [220] = {.lex_state = 12},
  [221] = {.lex_state = 17},
  [222] = {.lex_state = 22},
  [223] = {.lex_state = 508},
  [224] = {.lex_state = 8},
  [225] = {.lex_state = 26},
  [226] = {.lex_state = 17},
  [227] = {.lex_state = 17},
  [228] = {.lex_state = 22},
  [229] = {.lex_state = 14},
  [230] = {.lex_state = 508},
  [231] = {.lex_state = 17},
  [232] = {.lex_state = 26},
  [233] = {.lex_state = 12},
  [234] = {.lex_state = 8},
  [235] = {.lex_state = 14},
  [236] = {.lex_state = 4},
  [237] = {.lex_state = 22},
  [238] = {.lex_state = 17},
  [239] = {.lex_state = 8},
  [240] = {.lex_state = 9},
  [241] = {.lex_state = 34},
  [242] = {.lex_state = 22},
  [243] = {.lex_state = 14},
  [244] = {.lex_state = 8},
  [245] = {.lex_state = 22},
  [246] = {.lex_state = 9},
  [247] = {.lex_state = 508},
  [248] = {.lex_state = 22},
  [249] = {.lex_state = 8},
  [250] = {.lex_state = 8},
  [251] = {.lex_state = 8},
  [252] = {.lex_state = 29},
  [253] = {.lex_state = 17},
  [254] = {.lex_state = 14},
  [255] = {.lex_state = 20},
  [256] = {.lex_state = 22},
  [257] = {.lex_state = 7},
  [258] = {.lex_state = 8},
  [259] = {.lex_state = 7},
  [260] = {.lex_state = 8},
  [261] = {.lex_state = 8},
  [262] = {.lex_state = 34},
  [263] = {.lex_state = 8},
  [264] = {.lex_state = 29},
  [265] = {.lex_state = 508},
  [266] = {.lex_state = 11},
  [267] = {.lex_state = 7},
  [268] = {.lex_state = 508},
  [269] = {.lex_state = 508},
  [270] = {.lex_state = 508},
  [271] = {.lex_state = 3},
  [272] = {.lex_state = 11},
  [273] = {.lex_state = 11},
  [274] = {.lex_state = 7},
  [275] = {.lex_state = 3},
  [276] = {.lex_state = 508},
  [277] = {.lex_state = 17},
  [278] = {.lex_state = 7},
  [279] = {.lex_state = 7},
  [280] = {.lex_state = 11},
  [281] = {.lex_state = 26},
  [282] = {.lex_state = 11},
  [283] = {.lex_state = 11},
  [284] = {.lex_state = 11},
  [285] = {.lex_state = 17},
  [286] = {.lex_state = 26},
  [287] = {.lex_state = 12},
  [288] = {.lex_state = 508},
  [289] = {.lex_state = 17},
  [290] = {.lex_state = 17},
  [291] = {.lex_state = 34},
  [292] = {.lex_state = 23},
  [293] = {.lex_state = 31},
  [294] = {.lex_state = 508},
  [295] = {.lex_state = 23},
  [296] = {.lex_state = 12},
  [297] = {.lex_state = 24},
  [298] = {.lex_state = 31},
  [299] = {.lex_state = 7},
  [300] = {.lex_state = 29},
  [301] = {.lex_state = 508},
  [302] = {.lex_state = 24},
  [303] = {.lex_state = 24},
  [304] = {.lex_state = 12},
  [305] = {.lex_state = 17},
  [306] = {.lex_state = 508},
  [307] = {.lex_state = 17},
  [308] = {.lex_state = 22},
  [309] = {.lex_state = 508},
  [310] = {.lex_state = 22},
  [311] = {.lex_state = 23},
  [312] = {.lex_state = 23},
  [313] = {.lex_state = 508},
  [314] = {.lex_state = 9},
  [315] = {.lex_state = 508},
  [316] = {.lex_state = 508},
  [317] = {.lex_state = 508},
  [318] = {.lex_state = 9},
  [319] = {.lex_state = 17},
  [320] = {.lex_state = 508},
  [321] = {.lex_state = 17},
  [322] = {.lex_state = 34},
  [323] = {.lex_state = 22},
  [324] = {.lex_state = 24},
  [325] = {.lex_state = 508},
  [326] = {.lex_state = 508},
  [327] = {.lex_state = 17},
  [328] = {.lex_state = 508},
  [329] = {.lex_state = 29},
  [330] = {.lex_state = 3},
  [331] = {.lex_state = 31},
  [332] = {.lex_state = 24},
  [333] = {.lex_state = 12},
  [334] = {.lex_state = 508},
  [335] = {.lex_state = 24},
  [336] = {.lex_state = 3},
  [337] = {.lex_state = 23},
  [338] = {.lex_state = 508},
  [339] = {.lex_state = 508},
  [340] = {.lex_state = 17},
  [341] = {.lex_state = 23},
  [342] = {.lex_state = 12},
  [343] = {.lex_state = 3},
  [344] = {.lex_state = 508},
  [345] = {.lex_state = 3},
  [346] = {.lex_state = 17},
  [347] = {.lex_state = 3},
  [348] = {.lex_state = 508},
  [349] = {.lex_state = 17},
  [350] = {.lex_state = 22},
  [351] = {.lex_state = 33},
  [352] = {.lex_state = 33},
  [353] = {.lex_state = 33},
  [354] = {.lex_state = 33},
  [355] = {.lex_state = 33},
  [356] = {.lex_state = 33},
  [357] = {.lex_state = 508},
  [358] = {.lex_state = 33},
  [359] = {.lex_state = 33},
  [360] = {.lex_state = 508},
  [361] = {.lex_state = 33},
  [362] = {.lex_state = 33},
  [363] = {.lex_state = 33},
  [364] = {.lex_state = 17},
  [365] = {.lex_state = 17},
  [366] = {.lex_state = 22},
  [367] = {.lex_state = 22},
  [368] = {.lex_state = 17},
  [369] = {.lex_state = 22},
  [370] = {.lex_state = 17},
  [371] = {.lex_state = 17},
  [372] = {.lex_state = 22},
  [373] = {.lex_state = 22},
  [374] = {.lex_state = 21},
  [375] = {.lex_state = 508},
  [376] = {.lex_state = 21},
  [377] = {.lex_state = 17},
  [378] = {.lex_state = 508},
  [379] = {.lex_state = 33},
  [380] = {.lex_state = 6},
  [381] = {.lex_state = 17},
  [382] = {.lex_state = 17},
  [383] = {.lex_state = 508},
  [384] = {.lex_state = 22},
  [385] = {.lex_state = 17},
  [386] = {.lex_state = 31},
  [387] = {.lex_state = 22},
  [388] = {.lex_state = 22},
  [389] = {.lex_state = 17},
  [390] = {.lex_state = 17},
  [391] = {.lex_state = 22},
  [392] = {.lex_state = 22},
  [393] = {.lex_state = 508},
  [394] = {.lex_state = 22},
  [395] = {.lex_state = 508},
  [396] = {.lex_state = 508},
  [397] = {.lex_state = 17},
  [398] = {.lex_state = 508},
  [399] = {.lex_state = 22},
  [400] = {.lex_state = 508},
  [401] = {.lex_state = 508},
  [402] = {.lex_state = 508},
  [403] = {.lex_state = 508},
  [404] = {.lex_state = 508},
  [405] = {.lex_state = 14},
  [406] = {.lex_state = 508},
  [407] = {.lex_state = 508},
  [408] = {.lex_state = 508},
  [409] = {.lex_state = 22},
  [410] = {.lex_state = 508},
  [411] = {.lex_state = 508},
  [412] = {.lex_state = 508},
  [413] = {.lex_state = 17},
  [414] = {.lex_state = 508},
  [415] = {.lex_state = 6},
  [416] = {.lex_state = 22},
  [417] = {.lex_state = 508},
  [418] = {.lex_state = 508},
  [419] = {.lex_state = 508},
  [420] = {.lex_state = 508},
  [421] = {.lex_state = 14},
  [422] = {.lex_state = 33},
  [423] = {.lex_state = 508},
  [424] = {.lex_state = 508},
  [425] = {.lex_state = 27},
  [426] = {.lex_state = 508},
  [427] = {.lex_state = 508},
  [428] = {.lex_state = 508},
  [429] = {.lex_state = 508},
  [430] = {.lex_state = 508},
  [431] = {.lex_state = 508},
  [432] = {.lex_state = 22},
  [433] = {.lex_state = 22},
  [434] = {.lex_state = 22},
  [435] = {.lex_state = 22},
  [436] = {.lex_state = 31},
  [437] = {.lex_state = 31},
  [438] = {.lex_state = 31},
  [439] = {.lex_state = 31},
  [440] = {.lex_state = 31},
  [441] = {.lex_state = 31},
  [442] = {.lex_state = 31},
  [443] = {.lex_state = 31},
  [444] = {.lex_state = 31},
  [445] = {.lex_state = 31},
  [446] = {.lex_state = 31},
  [447] = {.lex_state = 31},
  [448] = {.lex_state = 31},
  [449] = {.lex_state = 31},
  [450] = {.lex_state = 31},
  [451] = {.lex_state = 31},
  [452] = {.lex_state = 22},
  [453] = {.lex_state = 31},
  [454] = {.lex_state = 31},
  [455] = {.lex_state = 31},
  [456] = {.lex_state = 17},
  [457] = {.lex_state = 17},
  [458] = {.lex_state = 17},
  [459] = {.lex_state = 17},
  [460] = {.lex_state = 17},
  [461] = {.lex_state = 22},
  [462] = {.lex_state = 0},
  [463] = {.lex_state = 17},
  [464] = {.lex_state = 22},
  [465] = {.lex_state = 22},
  [466] = {.lex_state = 31},
  [467] = {.lex_state = 17},
  [468] = {.lex_state = 17},
  [469] = {.lex_state = 27},
  [470] = {.lex_state = 17},
  [471] = {.lex_state = 17},
  [472] = {.lex_state = 17},
  [473] = {.lex_state = 17},
  [474] = {.lex_state = 22},
  [475] = {.lex_state = 31},
  [476] = {.lex_state = 22},
  [477] = {.lex_state = 31},
  [478] = {.lex_state = 31},
  [479] = {.lex_state = 22},
  [480] = {.lex_state = 31},
  [481] = {.lex_state = 17},
  [482] = {.lex_state = 15},
  [483] = {.lex_state = 17},
  [484] = {.lex_state = 508},
  [485] = {.lex_state = 508},
  [486] = {.lex_state = 508},
  [487] = {.lex_state = 26},
  [488] = {.lex_state = 508},
  [489] = {.lex_state = 35},
  [490] = {.lex_state = 508},
  [491] = {.lex_state = 508},
  [492] = {.lex_state = 508},
  [493] = {.lex_state = 36},
  [494] = {.lex_state = 508},
  [495] = {.lex_state = 508},
  [496] = {.lex_state = 17},
  [497] = {.lex_state = 17},
  [498] = {.lex_state = 508},
  [499] = {.lex_state = 508},
  [500] = {.lex_state = 508},
  [501] = {.lex_state = 508},
  [502] = {.lex_state = 508},
  [503] = {.lex_state = 37},
  [504] = {.lex_state = 508},
  [505] = {.lex_state = 508},
  [506] = {.lex_state = 508},
  [507] = {.lex_state = 508},
  [508] = {.lex_state = 16},
  [509] = {.lex_state = 17},
  [510] = {.lex_state = 508},
  [511] = {.lex_state = 508},
  [512] = {.lex_state = 508},
  [513] = {.lex_state = 508},
  [514] = {.lex_state = 0},
  [515] = {.lex_state = 508},
  [516] = {.lex_state = 0},
  [517] = {.lex_state = 508},
  [518] = {.lex_state = 508},
  [519] = {.lex_state = 508},
  [520] = {.lex_state = 0},
  [521] = {.lex_state = 508},
  [522] = {.lex_state = 508},
  [523] = {.lex_state = 508},
  [524] = {.lex_state = 508},
  [525] = {.lex_state = 0},
  [526] = {.lex_state = 0},
  [527] = {.lex_state = 0},
  [528] = {.lex_state = 508},
  [529] = {.lex_state = 17},
  [530] = {.lex_state = 0},
  [531] = {.lex_state = 26},
  [532] = {.lex_state = 22},
  [533] = {.lex_state = 508},
  [534] = {.lex_state = 0},
  [535] = {.lex_state = 508},
  [536] = {.lex_state = 508},
  [537] = {.lex_state = 0},
  [538] = {.lex_state = 508},
  [539] = {.lex_state = 508},
  [540] = {.lex_state = 508},
  [541] = {.lex_state = 38},
  [542] = {.lex_state = 508},
  [543] = {.lex_state = 508},
  [544] = {.lex_state = 508},
  [545] = {.lex_state = 508},
  [546] = {.lex_state = 508},
  [547] = {.lex_state = 22},
  [548] = {.lex_state = 508},
  [549] = {.lex_state = 0},
  [550] = {.lex_state = 508},
  [551] = {.lex_state = 508},
  [552] = {.lex_state = 508},
  [553] = {.lex_state = 508},
  [554] = {.lex_state = 0},
  [555] = {.lex_state = 508},
  [556] = {.lex_state = 0},
  [557] = {.lex_state = 17},
  [558] = {.lex_state = 26},
  [559] = {.lex_state = 508},
  [560] = {.lex_state = 17},
  [561] = {.lex_state = 0},
  [562] = {.lex_state = 17},
  [563] = {.lex_state = 0},
  [564] = {.lex_state = 17},
  [565] = {.lex_state = 17},
  [566] = {.lex_state = 17},
  [567] = {.lex_state = 17},
  [568] = {.lex_state = 17},
  [569] = {.lex_state = 17},
  [570] = {.lex_state = 17},
  [571] = {.lex_state = 22},
  [572] = {.lex_state = 35},
  [573] = {.lex_state = 508},
  [574] = {.lex_state = 36},
  [575] = {.lex_state = 22},
  [576] = {.lex_state = 508},
  [577] = {.lex_state = 508},
  [578] = {.lex_state = 508},
  [579] = {.lex_state = 508},
  [580] = {.lex_state = 879},
  [581] = {.lex_state = 508},
  [582] = {.lex_state = 508},
  [583] = {.lex_state = 508},
  [584] = {.lex_state = 17},
  [585] = {.lex_state = 17},
  [586] = {.lex_state = 508},
  [587] = {.lex_state = 508},
  [588] = {.lex_state = 508},
  [589] = {.lex_state = 17},
  [590] = {.lex_state = 17},
  [591] = {.lex_state = 17},
  [592] = {.lex_state = 17},
  [593] = {.lex_state = 508},
  [594] = {.lex_state = 17},
  [595] = {.lex_state = 17},
  [596] = {.lex_state = 17},
  [597] = {.lex_state = 17},
  [598] = {.lex_state = 508},
  [599] = {.lex_state = 508},
  [600] = {.lex_state = 508},
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
    [sym_hurl_file] = STATE(514),
    [sym_entry] = STATE(98),
    [sym__comment_or_new_line] = STATE(276),
    [sym_request] = STATE(97),
    [sym_method] = STATE(131),
    [aux_sym_hurl_file_repeat1] = STATE(98),
    [aux_sym_hurl_file_repeat2] = STATE(276),
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
    [sym_body] = STATE(100),
    [sym_request_section] = STATE(7),
    [sym_basic_auth_section] = STATE(59),
    [sym_query_string_params_section] = STATE(59),
    [sym_form_params_section] = STATE(59),
    [sym_multipart_form_data_section] = STATE(59),
    [sym_cookies_section] = STATE(59),
    [sym_options_section] = STATE(59),
    [sym_key_value] = STATE(357),
    [sym_bytes] = STATE(429),
    [sym_xml] = STATE(598),
    [sym_xml_prolog_tag] = STATE(248),
    [sym_xml_tag] = STATE(577),
    [sym_xml_open_tag] = STATE(116),
    [sym_oneline_base64] = STATE(598),
    [sym_oneline_file] = STATE(598),
    [sym_oneline_hex] = STATE(598),
    [sym_key_string] = STATE(516),
    [sym_key_string_content] = STATE(153),
    [sym_key_string_escaped_char] = STATE(232),
    [sym_oneline_string] = STATE(598),
    [sym_multiline_string] = STATE(598),
    [sym_json_value] = STATE(598),
    [sym_json_object] = STATE(504),
    [sym_json_array] = STATE(504),
    [sym_json_string] = STATE(504),
    [sym_json_number] = STATE(504),
    [sym_template] = STATE(278),
    [sym_boolean] = STATE(504),
    [sym_null] = STATE(504),
    [sym_integer] = STATE(247),
    [sym_digit] = STATE(230),
    [aux_sym_hurl_file_repeat2] = STATE(49),
    [aux_sym__comment_or_new_line_repeat1] = STATE(52),
    [aux_sym_request_repeat1] = STATE(4),
    [aux_sym_request_repeat2] = STATE(7),
    [aux_sym_xml_repeat1] = STATE(248),
    [aux_sym_key_string_repeat1] = STATE(153),
    [aux_sym_key_string_content_repeat1] = STATE(232),
    [aux_sym_integer_repeat1] = STATE(230),
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
    [anon_sym_HTTP] = ACTIONS(17),
    [anon_sym_LBRACKBasicAuth_RBRACK] = ACTIONS(19),
    [anon_sym_LBRACKQueryStringParams_RBRACK] = ACTIONS(21),
    [anon_sym_LBRACKFormParams_RBRACK] = ACTIONS(23),
    [anon_sym_LBRACKMultipartFormData_RBRACK] = ACTIONS(25),
    [anon_sym_LBRACKCookies_RBRACK] = ACTIONS(27),
    [anon_sym_LBRACKOptions_RBRACK] = ACTIONS(29),
    [anon_sym_file_COMMA] = ACTIONS(31),
    [anon_sym_LT] = ACTIONS(33),
    [anon_sym_LT_QMARK] = ACTIONS(35),
    [anon_sym_base64_COMMA] = ACTIONS(37),
    [anon_sym_hex_COMMA] = ACTIONS(39),
    [anon_sym_DQUOTE] = ACTIONS(41),
    [sym_key_string_text] = ACTIONS(43),
    [anon_sym_BSLASH2] = ACTIONS(45),
    [anon_sym_BQUOTE] = ACTIONS(47),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(51),
    [anon_sym_LBRACK] = ACTIONS(53),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(55),
    [anon_sym_true] = ACTIONS(57),
    [anon_sym_false] = ACTIONS(57),
    [anon_sym_null] = ACTIONS(59),
    [aux_sym_digit_token1] = ACTIONS(61),
    [sym_comment] = ACTIONS(63),
  },
  [3] = {
    [sym__comment_or_new_line] = STATE(49),
    [sym_header] = STATE(5),
    [sym_body] = STATE(99),
    [sym_request_section] = STATE(8),
    [sym_basic_auth_section] = STATE(59),
    [sym_query_string_params_section] = STATE(59),
    [sym_form_params_section] = STATE(59),
    [sym_multipart_form_data_section] = STATE(59),
    [sym_cookies_section] = STATE(59),
    [sym_options_section] = STATE(59),
    [sym_key_value] = STATE(357),
    [sym_bytes] = STATE(429),
    [sym_xml] = STATE(598),
    [sym_xml_prolog_tag] = STATE(248),
    [sym_xml_tag] = STATE(577),
    [sym_xml_open_tag] = STATE(116),
    [sym_oneline_base64] = STATE(598),
    [sym_oneline_file] = STATE(598),
    [sym_oneline_hex] = STATE(598),
    [sym_key_string] = STATE(516),
    [sym_key_string_content] = STATE(153),
    [sym_key_string_escaped_char] = STATE(232),
    [sym_oneline_string] = STATE(598),
    [sym_multiline_string] = STATE(598),
    [sym_json_value] = STATE(598),
    [sym_json_object] = STATE(504),
    [sym_json_array] = STATE(504),
    [sym_json_string] = STATE(504),
    [sym_json_number] = STATE(504),
    [sym_template] = STATE(278),
    [sym_boolean] = STATE(504),
    [sym_null] = STATE(504),
    [sym_integer] = STATE(247),
    [sym_digit] = STATE(230),
    [aux_sym_hurl_file_repeat2] = STATE(49),
    [aux_sym__comment_or_new_line_repeat1] = STATE(52),
    [aux_sym_request_repeat1] = STATE(5),
    [aux_sym_request_repeat2] = STATE(8),
    [aux_sym_xml_repeat1] = STATE(248),
    [aux_sym_key_string_repeat1] = STATE(153),
    [aux_sym_key_string_content_repeat1] = STATE(232),
    [aux_sym_integer_repeat1] = STATE(230),
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
    [anon_sym_HTTP_SLASH1_DOT0] = ACTIONS(67),
    [anon_sym_HTTP_SLASH1_DOT1] = ACTIONS(67),
    [anon_sym_HTTP_SLASH2] = ACTIONS(67),
    [anon_sym_HTTP_SLASH_STAR] = ACTIONS(67),
    [anon_sym_HTTP] = ACTIONS(67),
    [anon_sym_LBRACKBasicAuth_RBRACK] = ACTIONS(19),
    [anon_sym_LBRACKQueryStringParams_RBRACK] = ACTIONS(21),
    [anon_sym_LBRACKFormParams_RBRACK] = ACTIONS(23),
    [anon_sym_LBRACKMultipartFormData_RBRACK] = ACTIONS(25),
    [anon_sym_LBRACKCookies_RBRACK] = ACTIONS(27),
    [anon_sym_LBRACKOptions_RBRACK] = ACTIONS(29),
    [anon_sym_file_COMMA] = ACTIONS(31),
    [anon_sym_LT] = ACTIONS(33),
    [anon_sym_LT_QMARK] = ACTIONS(35),
    [anon_sym_base64_COMMA] = ACTIONS(37),
    [anon_sym_hex_COMMA] = ACTIONS(39),
    [anon_sym_DQUOTE] = ACTIONS(41),
    [sym_key_string_text] = ACTIONS(43),
    [anon_sym_BSLASH2] = ACTIONS(45),
    [anon_sym_BQUOTE] = ACTIONS(47),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(51),
    [anon_sym_LBRACK] = ACTIONS(53),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(55),
    [anon_sym_true] = ACTIONS(57),
    [anon_sym_false] = ACTIONS(57),
    [anon_sym_null] = ACTIONS(59),
    [aux_sym_digit_token1] = ACTIONS(61),
    [sym_comment] = ACTIONS(63),
  },
  [4] = {
    [sym_header] = STATE(23),
    [sym_body] = STATE(105),
    [sym_request_section] = STATE(6),
    [sym_basic_auth_section] = STATE(59),
    [sym_query_string_params_section] = STATE(59),
    [sym_form_params_section] = STATE(59),
    [sym_multipart_form_data_section] = STATE(59),
    [sym_cookies_section] = STATE(59),
    [sym_options_section] = STATE(59),
    [sym_key_value] = STATE(357),
    [sym_bytes] = STATE(429),
    [sym_xml] = STATE(598),
    [sym_xml_prolog_tag] = STATE(248),
    [sym_xml_tag] = STATE(577),
    [sym_xml_open_tag] = STATE(116),
    [sym_oneline_base64] = STATE(598),
    [sym_oneline_file] = STATE(598),
    [sym_oneline_hex] = STATE(598),
    [sym_key_string] = STATE(516),
    [sym_key_string_content] = STATE(153),
    [sym_key_string_escaped_char] = STATE(232),
    [sym_oneline_string] = STATE(598),
    [sym_multiline_string] = STATE(598),
    [sym_json_value] = STATE(598),
    [sym_json_object] = STATE(504),
    [sym_json_array] = STATE(504),
    [sym_json_string] = STATE(504),
    [sym_json_number] = STATE(504),
    [sym_template] = STATE(278),
    [sym_boolean] = STATE(504),
    [sym_null] = STATE(504),
    [sym_integer] = STATE(247),
    [sym_digit] = STATE(230),
    [aux_sym_request_repeat1] = STATE(23),
    [aux_sym_request_repeat2] = STATE(6),
    [aux_sym_xml_repeat1] = STATE(248),
    [aux_sym_key_string_repeat1] = STATE(153),
    [aux_sym_key_string_content_repeat1] = STATE(232),
    [aux_sym_integer_repeat1] = STATE(230),
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
    [anon_sym_HTTP] = ACTIONS(71),
    [anon_sym_LBRACKBasicAuth_RBRACK] = ACTIONS(19),
    [anon_sym_LBRACKQueryStringParams_RBRACK] = ACTIONS(21),
    [anon_sym_LBRACKFormParams_RBRACK] = ACTIONS(23),
    [anon_sym_LBRACKMultipartFormData_RBRACK] = ACTIONS(25),
    [anon_sym_LBRACKCookies_RBRACK] = ACTIONS(27),
    [anon_sym_LBRACKOptions_RBRACK] = ACTIONS(29),
    [anon_sym_file_COMMA] = ACTIONS(31),
    [anon_sym_LT] = ACTIONS(33),
    [anon_sym_LT_QMARK] = ACTIONS(35),
    [anon_sym_base64_COMMA] = ACTIONS(37),
    [anon_sym_hex_COMMA] = ACTIONS(39),
    [anon_sym_DQUOTE] = ACTIONS(41),
    [sym_key_string_text] = ACTIONS(43),
    [anon_sym_BSLASH2] = ACTIONS(45),
    [anon_sym_BQUOTE] = ACTIONS(47),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(51),
    [anon_sym_LBRACK] = ACTIONS(53),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(55),
    [anon_sym_true] = ACTIONS(57),
    [anon_sym_false] = ACTIONS(57),
    [anon_sym_null] = ACTIONS(59),
    [aux_sym_digit_token1] = ACTIONS(61),
    [sym_comment] = ACTIONS(71),
  },
  [5] = {
    [sym_header] = STATE(23),
    [sym_body] = STATE(100),
    [sym_request_section] = STATE(7),
    [sym_basic_auth_section] = STATE(59),
    [sym_query_string_params_section] = STATE(59),
    [sym_form_params_section] = STATE(59),
    [sym_multipart_form_data_section] = STATE(59),
    [sym_cookies_section] = STATE(59),
    [sym_options_section] = STATE(59),
    [sym_key_value] = STATE(357),
    [sym_bytes] = STATE(429),
    [sym_xml] = STATE(598),
    [sym_xml_prolog_tag] = STATE(248),
    [sym_xml_tag] = STATE(577),
    [sym_xml_open_tag] = STATE(116),
    [sym_oneline_base64] = STATE(598),
    [sym_oneline_file] = STATE(598),
    [sym_oneline_hex] = STATE(598),
    [sym_key_string] = STATE(516),
    [sym_key_string_content] = STATE(153),
    [sym_key_string_escaped_char] = STATE(232),
    [sym_oneline_string] = STATE(598),
    [sym_multiline_string] = STATE(598),
    [sym_json_value] = STATE(598),
    [sym_json_object] = STATE(504),
    [sym_json_array] = STATE(504),
    [sym_json_string] = STATE(504),
    [sym_json_number] = STATE(504),
    [sym_template] = STATE(278),
    [sym_boolean] = STATE(504),
    [sym_null] = STATE(504),
    [sym_integer] = STATE(247),
    [sym_digit] = STATE(230),
    [aux_sym_request_repeat1] = STATE(23),
    [aux_sym_request_repeat2] = STATE(7),
    [aux_sym_xml_repeat1] = STATE(248),
    [aux_sym_key_string_repeat1] = STATE(153),
    [aux_sym_key_string_content_repeat1] = STATE(232),
    [aux_sym_integer_repeat1] = STATE(230),
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
    [anon_sym_HTTP] = ACTIONS(17),
    [anon_sym_LBRACKBasicAuth_RBRACK] = ACTIONS(19),
    [anon_sym_LBRACKQueryStringParams_RBRACK] = ACTIONS(21),
    [anon_sym_LBRACKFormParams_RBRACK] = ACTIONS(23),
    [anon_sym_LBRACKMultipartFormData_RBRACK] = ACTIONS(25),
    [anon_sym_LBRACKCookies_RBRACK] = ACTIONS(27),
    [anon_sym_LBRACKOptions_RBRACK] = ACTIONS(29),
    [anon_sym_file_COMMA] = ACTIONS(31),
    [anon_sym_LT] = ACTIONS(33),
    [anon_sym_LT_QMARK] = ACTIONS(35),
    [anon_sym_base64_COMMA] = ACTIONS(37),
    [anon_sym_hex_COMMA] = ACTIONS(39),
    [anon_sym_DQUOTE] = ACTIONS(41),
    [sym_key_string_text] = ACTIONS(43),
    [anon_sym_BSLASH2] = ACTIONS(45),
    [anon_sym_BQUOTE] = ACTIONS(47),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(51),
    [anon_sym_LBRACK] = ACTIONS(53),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(55),
    [anon_sym_true] = ACTIONS(57),
    [anon_sym_false] = ACTIONS(57),
    [anon_sym_null] = ACTIONS(59),
    [aux_sym_digit_token1] = ACTIONS(61),
    [sym_comment] = ACTIONS(17),
  },
  [6] = {
    [sym_body] = STATE(103),
    [sym_request_section] = STATE(48),
    [sym_basic_auth_section] = STATE(59),
    [sym_query_string_params_section] = STATE(59),
    [sym_form_params_section] = STATE(59),
    [sym_multipart_form_data_section] = STATE(59),
    [sym_cookies_section] = STATE(59),
    [sym_options_section] = STATE(59),
    [sym_bytes] = STATE(429),
    [sym_xml] = STATE(598),
    [sym_xml_prolog_tag] = STATE(248),
    [sym_xml_tag] = STATE(577),
    [sym_xml_open_tag] = STATE(116),
    [sym_oneline_base64] = STATE(598),
    [sym_oneline_file] = STATE(598),
    [sym_oneline_hex] = STATE(598),
    [sym_oneline_string] = STATE(598),
    [sym_multiline_string] = STATE(598),
    [sym_json_value] = STATE(598),
    [sym_json_object] = STATE(504),
    [sym_json_array] = STATE(504),
    [sym_json_string] = STATE(504),
    [sym_json_number] = STATE(504),
    [sym_template] = STATE(504),
    [sym_boolean] = STATE(504),
    [sym_null] = STATE(504),
    [sym_integer] = STATE(247),
    [sym_digit] = STATE(230),
    [aux_sym_request_repeat2] = STATE(48),
    [aux_sym_xml_repeat1] = STATE(248),
    [aux_sym_integer_repeat1] = STATE(230),
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
    [anon_sym_HTTP_SLASH1_DOT0] = ACTIONS(75),
    [anon_sym_HTTP_SLASH1_DOT1] = ACTIONS(75),
    [anon_sym_HTTP_SLASH2] = ACTIONS(75),
    [anon_sym_HTTP_SLASH_STAR] = ACTIONS(75),
    [anon_sym_HTTP] = ACTIONS(75),
    [anon_sym_LBRACKBasicAuth_RBRACK] = ACTIONS(19),
    [anon_sym_LBRACKQueryStringParams_RBRACK] = ACTIONS(21),
    [anon_sym_LBRACKFormParams_RBRACK] = ACTIONS(23),
    [anon_sym_LBRACKMultipartFormData_RBRACK] = ACTIONS(25),
    [anon_sym_LBRACKCookies_RBRACK] = ACTIONS(27),
    [anon_sym_LBRACKOptions_RBRACK] = ACTIONS(29),
    [anon_sym_file_COMMA] = ACTIONS(31),
    [anon_sym_LT] = ACTIONS(33),
    [anon_sym_LT_QMARK] = ACTIONS(35),
    [anon_sym_base64_COMMA] = ACTIONS(37),
    [anon_sym_hex_COMMA] = ACTIONS(39),
    [anon_sym_DQUOTE] = ACTIONS(41),
    [anon_sym_BQUOTE] = ACTIONS(47),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(51),
    [anon_sym_LBRACK] = ACTIONS(53),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(55),
    [anon_sym_true] = ACTIONS(57),
    [anon_sym_false] = ACTIONS(57),
    [anon_sym_null] = ACTIONS(59),
    [aux_sym_digit_token1] = ACTIONS(61),
    [sym_comment] = ACTIONS(75),
  },
  [7] = {
    [sym_body] = STATE(105),
    [sym_request_section] = STATE(48),
    [sym_basic_auth_section] = STATE(59),
    [sym_query_string_params_section] = STATE(59),
    [sym_form_params_section] = STATE(59),
    [sym_multipart_form_data_section] = STATE(59),
    [sym_cookies_section] = STATE(59),
    [sym_options_section] = STATE(59),
    [sym_bytes] = STATE(429),
    [sym_xml] = STATE(598),
    [sym_xml_prolog_tag] = STATE(248),
    [sym_xml_tag] = STATE(577),
    [sym_xml_open_tag] = STATE(116),
    [sym_oneline_base64] = STATE(598),
    [sym_oneline_file] = STATE(598),
    [sym_oneline_hex] = STATE(598),
    [sym_oneline_string] = STATE(598),
    [sym_multiline_string] = STATE(598),
    [sym_json_value] = STATE(598),
    [sym_json_object] = STATE(504),
    [sym_json_array] = STATE(504),
    [sym_json_string] = STATE(504),
    [sym_json_number] = STATE(504),
    [sym_template] = STATE(504),
    [sym_boolean] = STATE(504),
    [sym_null] = STATE(504),
    [sym_integer] = STATE(247),
    [sym_digit] = STATE(230),
    [aux_sym_request_repeat2] = STATE(48),
    [aux_sym_xml_repeat1] = STATE(248),
    [aux_sym_integer_repeat1] = STATE(230),
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
    [anon_sym_HTTP] = ACTIONS(71),
    [anon_sym_LBRACKBasicAuth_RBRACK] = ACTIONS(19),
    [anon_sym_LBRACKQueryStringParams_RBRACK] = ACTIONS(21),
    [anon_sym_LBRACKFormParams_RBRACK] = ACTIONS(23),
    [anon_sym_LBRACKMultipartFormData_RBRACK] = ACTIONS(25),
    [anon_sym_LBRACKCookies_RBRACK] = ACTIONS(27),
    [anon_sym_LBRACKOptions_RBRACK] = ACTIONS(29),
    [anon_sym_file_COMMA] = ACTIONS(31),
    [anon_sym_LT] = ACTIONS(33),
    [anon_sym_LT_QMARK] = ACTIONS(35),
    [anon_sym_base64_COMMA] = ACTIONS(37),
    [anon_sym_hex_COMMA] = ACTIONS(39),
    [anon_sym_DQUOTE] = ACTIONS(41),
    [anon_sym_BQUOTE] = ACTIONS(47),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(51),
    [anon_sym_LBRACK] = ACTIONS(53),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(55),
    [anon_sym_true] = ACTIONS(57),
    [anon_sym_false] = ACTIONS(57),
    [anon_sym_null] = ACTIONS(59),
    [aux_sym_digit_token1] = ACTIONS(61),
    [sym_comment] = ACTIONS(71),
  },
  [8] = {
    [sym_body] = STATE(100),
    [sym_request_section] = STATE(48),
    [sym_basic_auth_section] = STATE(59),
    [sym_query_string_params_section] = STATE(59),
    [sym_form_params_section] = STATE(59),
    [sym_multipart_form_data_section] = STATE(59),
    [sym_cookies_section] = STATE(59),
    [sym_options_section] = STATE(59),
    [sym_bytes] = STATE(429),
    [sym_xml] = STATE(598),
    [sym_xml_prolog_tag] = STATE(248),
    [sym_xml_tag] = STATE(577),
    [sym_xml_open_tag] = STATE(116),
    [sym_oneline_base64] = STATE(598),
    [sym_oneline_file] = STATE(598),
    [sym_oneline_hex] = STATE(598),
    [sym_oneline_string] = STATE(598),
    [sym_multiline_string] = STATE(598),
    [sym_json_value] = STATE(598),
    [sym_json_object] = STATE(504),
    [sym_json_array] = STATE(504),
    [sym_json_string] = STATE(504),
    [sym_json_number] = STATE(504),
    [sym_template] = STATE(504),
    [sym_boolean] = STATE(504),
    [sym_null] = STATE(504),
    [sym_integer] = STATE(247),
    [sym_digit] = STATE(230),
    [aux_sym_request_repeat2] = STATE(48),
    [aux_sym_xml_repeat1] = STATE(248),
    [aux_sym_integer_repeat1] = STATE(230),
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
    [anon_sym_HTTP] = ACTIONS(17),
    [anon_sym_LBRACKBasicAuth_RBRACK] = ACTIONS(19),
    [anon_sym_LBRACKQueryStringParams_RBRACK] = ACTIONS(21),
    [anon_sym_LBRACKFormParams_RBRACK] = ACTIONS(23),
    [anon_sym_LBRACKMultipartFormData_RBRACK] = ACTIONS(25),
    [anon_sym_LBRACKCookies_RBRACK] = ACTIONS(27),
    [anon_sym_LBRACKOptions_RBRACK] = ACTIONS(29),
    [anon_sym_file_COMMA] = ACTIONS(31),
    [anon_sym_LT] = ACTIONS(33),
    [anon_sym_LT_QMARK] = ACTIONS(35),
    [anon_sym_base64_COMMA] = ACTIONS(37),
    [anon_sym_hex_COMMA] = ACTIONS(39),
    [anon_sym_DQUOTE] = ACTIONS(41),
    [anon_sym_BQUOTE] = ACTIONS(47),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(51),
    [anon_sym_LBRACK] = ACTIONS(53),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(55),
    [anon_sym_true] = ACTIONS(57),
    [anon_sym_false] = ACTIONS(57),
    [anon_sym_null] = ACTIONS(59),
    [aux_sym_digit_token1] = ACTIONS(61),
    [sym_comment] = ACTIONS(17),
  },
  [9] = {
    [sym_header] = STATE(10),
    [sym_body] = STATE(123),
    [sym_response_section] = STATE(19),
    [sym_captures_section] = STATE(69),
    [sym_asserts_section] = STATE(69),
    [sym_key_value] = STATE(378),
    [sym_bytes] = STATE(429),
    [sym_xml] = STATE(598),
    [sym_xml_prolog_tag] = STATE(248),
    [sym_xml_tag] = STATE(577),
    [sym_xml_open_tag] = STATE(116),
    [sym_oneline_base64] = STATE(598),
    [sym_oneline_file] = STATE(598),
    [sym_oneline_hex] = STATE(598),
    [sym_key_string] = STATE(516),
    [sym_key_string_content] = STATE(153),
    [sym_key_string_escaped_char] = STATE(232),
    [sym_oneline_string] = STATE(598),
    [sym_multiline_string] = STATE(598),
    [sym_json_value] = STATE(598),
    [sym_json_object] = STATE(504),
    [sym_json_array] = STATE(504),
    [sym_json_string] = STATE(504),
    [sym_json_number] = STATE(504),
    [sym_template] = STATE(278),
    [sym_boolean] = STATE(504),
    [sym_null] = STATE(504),
    [sym_integer] = STATE(247),
    [sym_digit] = STATE(230),
    [aux_sym_request_repeat1] = STATE(10),
    [aux_sym_response_repeat1] = STATE(19),
    [aux_sym_xml_repeat1] = STATE(248),
    [aux_sym_key_string_repeat1] = STATE(153),
    [aux_sym_key_string_content_repeat1] = STATE(232),
    [aux_sym_integer_repeat1] = STATE(230),
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
    [anon_sym_LBRACKCaptures_RBRACK] = ACTIONS(81),
    [anon_sym_LBRACKAsserts_RBRACK] = ACTIONS(83),
    [anon_sym_file_COMMA] = ACTIONS(31),
    [anon_sym_LT] = ACTIONS(33),
    [anon_sym_LT_QMARK] = ACTIONS(35),
    [anon_sym_base64_COMMA] = ACTIONS(37),
    [anon_sym_hex_COMMA] = ACTIONS(39),
    [anon_sym_DQUOTE] = ACTIONS(41),
    [sym_key_string_text] = ACTIONS(43),
    [anon_sym_BSLASH2] = ACTIONS(45),
    [anon_sym_BQUOTE] = ACTIONS(47),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(51),
    [anon_sym_LBRACK] = ACTIONS(53),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(55),
    [anon_sym_true] = ACTIONS(57),
    [anon_sym_false] = ACTIONS(57),
    [anon_sym_null] = ACTIONS(59),
    [aux_sym_digit_token1] = ACTIONS(61),
    [sym_comment] = ACTIONS(79),
  },
  [10] = {
    [sym_header] = STATE(54),
    [sym_body] = STATE(122),
    [sym_response_section] = STATE(20),
    [sym_captures_section] = STATE(69),
    [sym_asserts_section] = STATE(69),
    [sym_key_value] = STATE(378),
    [sym_bytes] = STATE(429),
    [sym_xml] = STATE(598),
    [sym_xml_prolog_tag] = STATE(248),
    [sym_xml_tag] = STATE(577),
    [sym_xml_open_tag] = STATE(116),
    [sym_oneline_base64] = STATE(598),
    [sym_oneline_file] = STATE(598),
    [sym_oneline_hex] = STATE(598),
    [sym_key_string] = STATE(516),
    [sym_key_string_content] = STATE(153),
    [sym_key_string_escaped_char] = STATE(232),
    [sym_oneline_string] = STATE(598),
    [sym_multiline_string] = STATE(598),
    [sym_json_value] = STATE(598),
    [sym_json_object] = STATE(504),
    [sym_json_array] = STATE(504),
    [sym_json_string] = STATE(504),
    [sym_json_number] = STATE(504),
    [sym_template] = STATE(278),
    [sym_boolean] = STATE(504),
    [sym_null] = STATE(504),
    [sym_integer] = STATE(247),
    [sym_digit] = STATE(230),
    [aux_sym_request_repeat1] = STATE(54),
    [aux_sym_response_repeat1] = STATE(20),
    [aux_sym_xml_repeat1] = STATE(248),
    [aux_sym_key_string_repeat1] = STATE(153),
    [aux_sym_key_string_content_repeat1] = STATE(232),
    [aux_sym_integer_repeat1] = STATE(230),
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
    [anon_sym_LBRACKCaptures_RBRACK] = ACTIONS(81),
    [anon_sym_LBRACKAsserts_RBRACK] = ACTIONS(83),
    [anon_sym_file_COMMA] = ACTIONS(31),
    [anon_sym_LT] = ACTIONS(33),
    [anon_sym_LT_QMARK] = ACTIONS(35),
    [anon_sym_base64_COMMA] = ACTIONS(37),
    [anon_sym_hex_COMMA] = ACTIONS(39),
    [anon_sym_DQUOTE] = ACTIONS(41),
    [sym_key_string_text] = ACTIONS(43),
    [anon_sym_BSLASH2] = ACTIONS(45),
    [anon_sym_BQUOTE] = ACTIONS(47),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(51),
    [anon_sym_LBRACK] = ACTIONS(53),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(55),
    [anon_sym_true] = ACTIONS(57),
    [anon_sym_false] = ACTIONS(57),
    [anon_sym_null] = ACTIONS(59),
    [aux_sym_digit_token1] = ACTIONS(61),
    [sym_comment] = ACTIONS(87),
  },
  [11] = {
    [aux_sym__comment_or_new_line_repeat1] = STATE(12),
    [ts_builtin_sym_end] = ACTIONS(89),
    [anon_sym_LF] = ACTIONS(91),
    [anon_sym_GET] = ACTIONS(93),
    [anon_sym_HEAD] = ACTIONS(93),
    [anon_sym_POST] = ACTIONS(93),
    [anon_sym_PUT] = ACTIONS(93),
    [anon_sym_DELETE] = ACTIONS(93),
    [anon_sym_CONNECT] = ACTIONS(93),
    [anon_sym_OPTIONS] = ACTIONS(93),
    [anon_sym_TRACE] = ACTIONS(93),
    [anon_sym_PATCH] = ACTIONS(93),
    [anon_sym_LINK] = ACTIONS(93),
    [anon_sym_UNLINK] = ACTIONS(93),
    [anon_sym_PURGE] = ACTIONS(93),
    [anon_sym_LOCK] = ACTIONS(93),
    [anon_sym_UNLOCK] = ACTIONS(93),
    [anon_sym_PROPFIND] = ACTIONS(93),
    [anon_sym_VIEW] = ACTIONS(93),
    [anon_sym_HTTP_SLASH1_DOT0] = ACTIONS(93),
    [anon_sym_HTTP_SLASH1_DOT1] = ACTIONS(93),
    [anon_sym_HTTP_SLASH2] = ACTIONS(93),
    [anon_sym_HTTP_SLASH_STAR] = ACTIONS(93),
    [anon_sym_HTTP] = ACTIONS(93),
    [anon_sym_LBRACKBasicAuth_RBRACK] = ACTIONS(93),
    [anon_sym_LBRACKQueryStringParams_RBRACK] = ACTIONS(93),
    [anon_sym_LBRACKFormParams_RBRACK] = ACTIONS(93),
    [anon_sym_LBRACKMultipartFormData_RBRACK] = ACTIONS(93),
    [anon_sym_LBRACKCookies_RBRACK] = ACTIONS(93),
    [anon_sym_LBRACKCaptures_RBRACK] = ACTIONS(93),
    [anon_sym_LBRACKAsserts_RBRACK] = ACTIONS(93),
    [anon_sym_LBRACKOptions_RBRACK] = ACTIONS(93),
    [anon_sym_file_COMMA] = ACTIONS(93),
    [anon_sym_cacert] = ACTIONS(93),
    [anon_sym_location] = ACTIONS(93),
    [anon_sym_insecure] = ACTIONS(93),
    [anon_sym_max_DASHredirs] = ACTIONS(93),
    [anon_sym_retry] = ACTIONS(93),
    [anon_sym_retry_DASHinterval] = ACTIONS(93),
    [anon_sym_retry_DASHmax_DASHcount] = ACTIONS(93),
    [anon_sym_variable] = ACTIONS(93),
    [anon_sym_verbose] = ACTIONS(93),
    [anon_sym_very_DASHverbose] = ACTIONS(93),
    [anon_sym_status] = ACTIONS(93),
    [anon_sym_url] = ACTIONS(93),
    [anon_sym_header] = ACTIONS(93),
    [anon_sym_cookie] = ACTIONS(93),
    [anon_sym_body] = ACTIONS(93),
    [anon_sym_xpath] = ACTIONS(93),
    [anon_sym_jsonpath] = ACTIONS(93),
    [anon_sym_regex] = ACTIONS(93),
    [anon_sym_duration] = ACTIONS(93),
    [anon_sym_sha256] = ACTIONS(93),
    [anon_sym_md5] = ACTIONS(93),
    [anon_sym_bytes] = ACTIONS(93),
    [anon_sym_LT] = ACTIONS(93),
    [anon_sym_LT_QMARK] = ACTIONS(93),
    [anon_sym_base64_COMMA] = ACTIONS(93),
    [anon_sym_hex_COMMA] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(93),
    [anon_sym_BQUOTE] = ACTIONS(93),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(93),
    [anon_sym_LBRACE] = ACTIONS(93),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(89),
    [anon_sym_true] = ACTIONS(93),
    [anon_sym_false] = ACTIONS(93),
    [anon_sym_null] = ACTIONS(93),
    [aux_sym_digit_token1] = ACTIONS(93),
    [sym_comment] = ACTIONS(95),
  },
  [12] = {
    [aux_sym__comment_or_new_line_repeat1] = STATE(12),
    [ts_builtin_sym_end] = ACTIONS(97),
    [anon_sym_LF] = ACTIONS(99),
    [anon_sym_GET] = ACTIONS(102),
    [anon_sym_HEAD] = ACTIONS(102),
    [anon_sym_POST] = ACTIONS(102),
    [anon_sym_PUT] = ACTIONS(102),
    [anon_sym_DELETE] = ACTIONS(102),
    [anon_sym_CONNECT] = ACTIONS(102),
    [anon_sym_OPTIONS] = ACTIONS(102),
    [anon_sym_TRACE] = ACTIONS(102),
    [anon_sym_PATCH] = ACTIONS(102),
    [anon_sym_LINK] = ACTIONS(102),
    [anon_sym_UNLINK] = ACTIONS(102),
    [anon_sym_PURGE] = ACTIONS(102),
    [anon_sym_LOCK] = ACTIONS(102),
    [anon_sym_UNLOCK] = ACTIONS(102),
    [anon_sym_PROPFIND] = ACTIONS(102),
    [anon_sym_VIEW] = ACTIONS(102),
    [anon_sym_HTTP_SLASH1_DOT0] = ACTIONS(102),
    [anon_sym_HTTP_SLASH1_DOT1] = ACTIONS(102),
    [anon_sym_HTTP_SLASH2] = ACTIONS(102),
    [anon_sym_HTTP_SLASH_STAR] = ACTIONS(102),
    [anon_sym_HTTP] = ACTIONS(102),
    [anon_sym_LBRACKBasicAuth_RBRACK] = ACTIONS(102),
    [anon_sym_LBRACKQueryStringParams_RBRACK] = ACTIONS(102),
    [anon_sym_LBRACKFormParams_RBRACK] = ACTIONS(102),
    [anon_sym_LBRACKMultipartFormData_RBRACK] = ACTIONS(102),
    [anon_sym_LBRACKCookies_RBRACK] = ACTIONS(102),
    [anon_sym_LBRACKCaptures_RBRACK] = ACTIONS(102),
    [anon_sym_LBRACKAsserts_RBRACK] = ACTIONS(102),
    [anon_sym_LBRACKOptions_RBRACK] = ACTIONS(102),
    [anon_sym_file_COMMA] = ACTIONS(102),
    [anon_sym_cacert] = ACTIONS(102),
    [anon_sym_location] = ACTIONS(102),
    [anon_sym_insecure] = ACTIONS(102),
    [anon_sym_max_DASHredirs] = ACTIONS(102),
    [anon_sym_retry] = ACTIONS(102),
    [anon_sym_retry_DASHinterval] = ACTIONS(102),
    [anon_sym_retry_DASHmax_DASHcount] = ACTIONS(102),
    [anon_sym_variable] = ACTIONS(102),
    [anon_sym_verbose] = ACTIONS(102),
    [anon_sym_very_DASHverbose] = ACTIONS(102),
    [anon_sym_status] = ACTIONS(102),
    [anon_sym_url] = ACTIONS(102),
    [anon_sym_header] = ACTIONS(102),
    [anon_sym_cookie] = ACTIONS(102),
    [anon_sym_body] = ACTIONS(102),
    [anon_sym_xpath] = ACTIONS(102),
    [anon_sym_jsonpath] = ACTIONS(102),
    [anon_sym_regex] = ACTIONS(102),
    [anon_sym_duration] = ACTIONS(102),
    [anon_sym_sha256] = ACTIONS(102),
    [anon_sym_md5] = ACTIONS(102),
    [anon_sym_bytes] = ACTIONS(102),
    [anon_sym_LT] = ACTIONS(102),
    [anon_sym_LT_QMARK] = ACTIONS(102),
    [anon_sym_base64_COMMA] = ACTIONS(102),
    [anon_sym_hex_COMMA] = ACTIONS(102),
    [anon_sym_DQUOTE] = ACTIONS(102),
    [anon_sym_BQUOTE] = ACTIONS(102),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(102),
    [anon_sym_LBRACE] = ACTIONS(102),
    [anon_sym_LBRACK] = ACTIONS(102),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(97),
    [anon_sym_true] = ACTIONS(102),
    [anon_sym_false] = ACTIONS(102),
    [anon_sym_null] = ACTIONS(102),
    [aux_sym_digit_token1] = ACTIONS(102),
    [sym_comment] = ACTIONS(104),
  },
  [13] = {
    [sym_option] = STATE(14),
    [sym_ca_certificate_option] = STATE(34),
    [sym_follow_redirect_option] = STATE(34),
    [sym_insecure_option] = STATE(34),
    [sym_max_redirs_option] = STATE(34),
    [sym_retry_option] = STATE(34),
    [sym_retry_interval_option] = STATE(34),
    [sym_retry_max_count_option] = STATE(34),
    [sym_variable_option] = STATE(34),
    [sym_verbose_option] = STATE(34),
    [sym_very_verbose_option] = STATE(34),
    [aux_sym_options_section_repeat1] = STATE(14),
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
    [anon_sym_HTTP_SLASH1_DOT0] = ACTIONS(109),
    [anon_sym_HTTP_SLASH1_DOT1] = ACTIONS(109),
    [anon_sym_HTTP_SLASH2] = ACTIONS(109),
    [anon_sym_HTTP_SLASH_STAR] = ACTIONS(109),
    [anon_sym_HTTP] = ACTIONS(109),
    [anon_sym_LBRACKBasicAuth_RBRACK] = ACTIONS(109),
    [anon_sym_LBRACKQueryStringParams_RBRACK] = ACTIONS(109),
    [anon_sym_LBRACKFormParams_RBRACK] = ACTIONS(109),
    [anon_sym_LBRACKMultipartFormData_RBRACK] = ACTIONS(109),
    [anon_sym_LBRACKCookies_RBRACK] = ACTIONS(109),
    [anon_sym_LBRACKOptions_RBRACK] = ACTIONS(109),
    [anon_sym_file_COMMA] = ACTIONS(109),
    [anon_sym_cacert] = ACTIONS(111),
    [anon_sym_location] = ACTIONS(113),
    [anon_sym_insecure] = ACTIONS(115),
    [anon_sym_max_DASHredirs] = ACTIONS(117),
    [anon_sym_retry] = ACTIONS(119),
    [anon_sym_retry_DASHinterval] = ACTIONS(121),
    [anon_sym_retry_DASHmax_DASHcount] = ACTIONS(123),
    [anon_sym_variable] = ACTIONS(125),
    [anon_sym_verbose] = ACTIONS(127),
    [anon_sym_very_DASHverbose] = ACTIONS(129),
    [anon_sym_LT] = ACTIONS(109),
    [anon_sym_LT_QMARK] = ACTIONS(109),
    [anon_sym_base64_COMMA] = ACTIONS(109),
    [anon_sym_hex_COMMA] = ACTIONS(109),
    [anon_sym_DQUOTE] = ACTIONS(109),
    [anon_sym_BQUOTE] = ACTIONS(109),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(109),
    [anon_sym_LBRACE] = ACTIONS(109),
    [anon_sym_LBRACK] = ACTIONS(109),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(107),
    [anon_sym_true] = ACTIONS(109),
    [anon_sym_false] = ACTIONS(109),
    [anon_sym_null] = ACTIONS(109),
    [aux_sym_digit_token1] = ACTIONS(109),
    [sym_comment] = ACTIONS(109),
  },
  [14] = {
    [sym_option] = STATE(14),
    [sym_ca_certificate_option] = STATE(34),
    [sym_follow_redirect_option] = STATE(34),
    [sym_insecure_option] = STATE(34),
    [sym_max_redirs_option] = STATE(34),
    [sym_retry_option] = STATE(34),
    [sym_retry_interval_option] = STATE(34),
    [sym_retry_max_count_option] = STATE(34),
    [sym_variable_option] = STATE(34),
    [sym_verbose_option] = STATE(34),
    [sym_very_verbose_option] = STATE(34),
    [aux_sym_options_section_repeat1] = STATE(14),
    [ts_builtin_sym_end] = ACTIONS(131),
    [anon_sym_LF] = ACTIONS(131),
    [anon_sym_GET] = ACTIONS(133),
    [anon_sym_HEAD] = ACTIONS(133),
    [anon_sym_POST] = ACTIONS(133),
    [anon_sym_PUT] = ACTIONS(133),
    [anon_sym_DELETE] = ACTIONS(133),
    [anon_sym_CONNECT] = ACTIONS(133),
    [anon_sym_OPTIONS] = ACTIONS(133),
    [anon_sym_TRACE] = ACTIONS(133),
    [anon_sym_PATCH] = ACTIONS(133),
    [anon_sym_LINK] = ACTIONS(133),
    [anon_sym_UNLINK] = ACTIONS(133),
    [anon_sym_PURGE] = ACTIONS(133),
    [anon_sym_LOCK] = ACTIONS(133),
    [anon_sym_UNLOCK] = ACTIONS(133),
    [anon_sym_PROPFIND] = ACTIONS(133),
    [anon_sym_VIEW] = ACTIONS(133),
    [anon_sym_HTTP_SLASH1_DOT0] = ACTIONS(133),
    [anon_sym_HTTP_SLASH1_DOT1] = ACTIONS(133),
    [anon_sym_HTTP_SLASH2] = ACTIONS(133),
    [anon_sym_HTTP_SLASH_STAR] = ACTIONS(133),
    [anon_sym_HTTP] = ACTIONS(133),
    [anon_sym_LBRACKBasicAuth_RBRACK] = ACTIONS(133),
    [anon_sym_LBRACKQueryStringParams_RBRACK] = ACTIONS(133),
    [anon_sym_LBRACKFormParams_RBRACK] = ACTIONS(133),
    [anon_sym_LBRACKMultipartFormData_RBRACK] = ACTIONS(133),
    [anon_sym_LBRACKCookies_RBRACK] = ACTIONS(133),
    [anon_sym_LBRACKOptions_RBRACK] = ACTIONS(133),
    [anon_sym_file_COMMA] = ACTIONS(133),
    [anon_sym_cacert] = ACTIONS(135),
    [anon_sym_location] = ACTIONS(138),
    [anon_sym_insecure] = ACTIONS(141),
    [anon_sym_max_DASHredirs] = ACTIONS(144),
    [anon_sym_retry] = ACTIONS(147),
    [anon_sym_retry_DASHinterval] = ACTIONS(150),
    [anon_sym_retry_DASHmax_DASHcount] = ACTIONS(153),
    [anon_sym_variable] = ACTIONS(156),
    [anon_sym_verbose] = ACTIONS(159),
    [anon_sym_very_DASHverbose] = ACTIONS(162),
    [anon_sym_LT] = ACTIONS(133),
    [anon_sym_LT_QMARK] = ACTIONS(133),
    [anon_sym_base64_COMMA] = ACTIONS(133),
    [anon_sym_hex_COMMA] = ACTIONS(133),
    [anon_sym_DQUOTE] = ACTIONS(133),
    [anon_sym_BQUOTE] = ACTIONS(133),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(133),
    [anon_sym_LBRACE] = ACTIONS(133),
    [anon_sym_LBRACK] = ACTIONS(133),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(131),
    [anon_sym_true] = ACTIONS(133),
    [anon_sym_false] = ACTIONS(133),
    [anon_sym_null] = ACTIONS(133),
    [aux_sym_digit_token1] = ACTIONS(133),
    [sym_comment] = ACTIONS(133),
  },
  [15] = {
    [sym_option] = STATE(13),
    [sym_ca_certificate_option] = STATE(34),
    [sym_follow_redirect_option] = STATE(34),
    [sym_insecure_option] = STATE(34),
    [sym_max_redirs_option] = STATE(34),
    [sym_retry_option] = STATE(34),
    [sym_retry_interval_option] = STATE(34),
    [sym_retry_max_count_option] = STATE(34),
    [sym_variable_option] = STATE(34),
    [sym_verbose_option] = STATE(34),
    [sym_very_verbose_option] = STATE(34),
    [aux_sym_options_section_repeat1] = STATE(13),
    [ts_builtin_sym_end] = ACTIONS(165),
    [anon_sym_LF] = ACTIONS(165),
    [anon_sym_GET] = ACTIONS(167),
    [anon_sym_HEAD] = ACTIONS(167),
    [anon_sym_POST] = ACTIONS(167),
    [anon_sym_PUT] = ACTIONS(167),
    [anon_sym_DELETE] = ACTIONS(167),
    [anon_sym_CONNECT] = ACTIONS(167),
    [anon_sym_OPTIONS] = ACTIONS(167),
    [anon_sym_TRACE] = ACTIONS(167),
    [anon_sym_PATCH] = ACTIONS(167),
    [anon_sym_LINK] = ACTIONS(167),
    [anon_sym_UNLINK] = ACTIONS(167),
    [anon_sym_PURGE] = ACTIONS(167),
    [anon_sym_LOCK] = ACTIONS(167),
    [anon_sym_UNLOCK] = ACTIONS(167),
    [anon_sym_PROPFIND] = ACTIONS(167),
    [anon_sym_VIEW] = ACTIONS(167),
    [anon_sym_HTTP_SLASH1_DOT0] = ACTIONS(167),
    [anon_sym_HTTP_SLASH1_DOT1] = ACTIONS(167),
    [anon_sym_HTTP_SLASH2] = ACTIONS(167),
    [anon_sym_HTTP_SLASH_STAR] = ACTIONS(167),
    [anon_sym_HTTP] = ACTIONS(167),
    [anon_sym_LBRACKBasicAuth_RBRACK] = ACTIONS(167),
    [anon_sym_LBRACKQueryStringParams_RBRACK] = ACTIONS(167),
    [anon_sym_LBRACKFormParams_RBRACK] = ACTIONS(167),
    [anon_sym_LBRACKMultipartFormData_RBRACK] = ACTIONS(167),
    [anon_sym_LBRACKCookies_RBRACK] = ACTIONS(167),
    [anon_sym_LBRACKOptions_RBRACK] = ACTIONS(167),
    [anon_sym_file_COMMA] = ACTIONS(167),
    [anon_sym_cacert] = ACTIONS(111),
    [anon_sym_location] = ACTIONS(113),
    [anon_sym_insecure] = ACTIONS(115),
    [anon_sym_max_DASHredirs] = ACTIONS(117),
    [anon_sym_retry] = ACTIONS(119),
    [anon_sym_retry_DASHinterval] = ACTIONS(121),
    [anon_sym_retry_DASHmax_DASHcount] = ACTIONS(123),
    [anon_sym_variable] = ACTIONS(125),
    [anon_sym_verbose] = ACTIONS(127),
    [anon_sym_very_DASHverbose] = ACTIONS(129),
    [anon_sym_LT] = ACTIONS(167),
    [anon_sym_LT_QMARK] = ACTIONS(167),
    [anon_sym_base64_COMMA] = ACTIONS(167),
    [anon_sym_hex_COMMA] = ACTIONS(167),
    [anon_sym_DQUOTE] = ACTIONS(167),
    [anon_sym_BQUOTE] = ACTIONS(167),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(167),
    [anon_sym_LBRACE] = ACTIONS(167),
    [anon_sym_LBRACK] = ACTIONS(167),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(165),
    [anon_sym_true] = ACTIONS(167),
    [anon_sym_false] = ACTIONS(167),
    [anon_sym_null] = ACTIONS(167),
    [aux_sym_digit_token1] = ACTIONS(167),
    [sym_comment] = ACTIONS(167),
  },
  [16] = {
    [sym_assert] = STATE(17),
    [sym_query] = STATE(22),
    [sym_status_query] = STATE(85),
    [sym_url_query] = STATE(85),
    [sym_header_query] = STATE(85),
    [sym_cookie_query] = STATE(85),
    [sym_body_query] = STATE(85),
    [sym_xpath_query] = STATE(85),
    [sym_jsonpath_query] = STATE(85),
    [sym_regex_query] = STATE(85),
    [sym_variable_query] = STATE(85),
    [sym_duration_query] = STATE(85),
    [sym_sha256_query] = STATE(85),
    [sym_md5_query] = STATE(85),
    [sym_bytes_query] = STATE(85),
    [aux_sym_asserts_section_repeat1] = STATE(17),
    [ts_builtin_sym_end] = ACTIONS(169),
    [anon_sym_LF] = ACTIONS(169),
    [anon_sym_GET] = ACTIONS(171),
    [anon_sym_HEAD] = ACTIONS(171),
    [anon_sym_POST] = ACTIONS(171),
    [anon_sym_PUT] = ACTIONS(171),
    [anon_sym_DELETE] = ACTIONS(171),
    [anon_sym_CONNECT] = ACTIONS(171),
    [anon_sym_OPTIONS] = ACTIONS(171),
    [anon_sym_TRACE] = ACTIONS(171),
    [anon_sym_PATCH] = ACTIONS(171),
    [anon_sym_LINK] = ACTIONS(171),
    [anon_sym_UNLINK] = ACTIONS(171),
    [anon_sym_PURGE] = ACTIONS(171),
    [anon_sym_LOCK] = ACTIONS(171),
    [anon_sym_UNLOCK] = ACTIONS(171),
    [anon_sym_PROPFIND] = ACTIONS(171),
    [anon_sym_VIEW] = ACTIONS(171),
    [anon_sym_LBRACKCaptures_RBRACK] = ACTIONS(171),
    [anon_sym_LBRACKAsserts_RBRACK] = ACTIONS(171),
    [anon_sym_file_COMMA] = ACTIONS(171),
    [anon_sym_variable] = ACTIONS(173),
    [anon_sym_status] = ACTIONS(175),
    [anon_sym_url] = ACTIONS(177),
    [anon_sym_header] = ACTIONS(179),
    [anon_sym_cookie] = ACTIONS(181),
    [anon_sym_body] = ACTIONS(183),
    [anon_sym_xpath] = ACTIONS(185),
    [anon_sym_jsonpath] = ACTIONS(187),
    [anon_sym_regex] = ACTIONS(189),
    [anon_sym_duration] = ACTIONS(191),
    [anon_sym_sha256] = ACTIONS(193),
    [anon_sym_md5] = ACTIONS(195),
    [anon_sym_bytes] = ACTIONS(197),
    [anon_sym_LT] = ACTIONS(171),
    [anon_sym_LT_QMARK] = ACTIONS(171),
    [anon_sym_base64_COMMA] = ACTIONS(171),
    [anon_sym_hex_COMMA] = ACTIONS(171),
    [anon_sym_DQUOTE] = ACTIONS(171),
    [anon_sym_BQUOTE] = ACTIONS(171),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(171),
    [anon_sym_LBRACE] = ACTIONS(171),
    [anon_sym_LBRACK] = ACTIONS(171),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(169),
    [anon_sym_true] = ACTIONS(171),
    [anon_sym_false] = ACTIONS(171),
    [anon_sym_null] = ACTIONS(171),
    [aux_sym_digit_token1] = ACTIONS(171),
    [sym_comment] = ACTIONS(171),
  },
  [17] = {
    [sym_assert] = STATE(18),
    [sym_query] = STATE(22),
    [sym_status_query] = STATE(85),
    [sym_url_query] = STATE(85),
    [sym_header_query] = STATE(85),
    [sym_cookie_query] = STATE(85),
    [sym_body_query] = STATE(85),
    [sym_xpath_query] = STATE(85),
    [sym_jsonpath_query] = STATE(85),
    [sym_regex_query] = STATE(85),
    [sym_variable_query] = STATE(85),
    [sym_duration_query] = STATE(85),
    [sym_sha256_query] = STATE(85),
    [sym_md5_query] = STATE(85),
    [sym_bytes_query] = STATE(85),
    [aux_sym_asserts_section_repeat1] = STATE(18),
    [ts_builtin_sym_end] = ACTIONS(199),
    [anon_sym_LF] = ACTIONS(199),
    [anon_sym_GET] = ACTIONS(201),
    [anon_sym_HEAD] = ACTIONS(201),
    [anon_sym_POST] = ACTIONS(201),
    [anon_sym_PUT] = ACTIONS(201),
    [anon_sym_DELETE] = ACTIONS(201),
    [anon_sym_CONNECT] = ACTIONS(201),
    [anon_sym_OPTIONS] = ACTIONS(201),
    [anon_sym_TRACE] = ACTIONS(201),
    [anon_sym_PATCH] = ACTIONS(201),
    [anon_sym_LINK] = ACTIONS(201),
    [anon_sym_UNLINK] = ACTIONS(201),
    [anon_sym_PURGE] = ACTIONS(201),
    [anon_sym_LOCK] = ACTIONS(201),
    [anon_sym_UNLOCK] = ACTIONS(201),
    [anon_sym_PROPFIND] = ACTIONS(201),
    [anon_sym_VIEW] = ACTIONS(201),
    [anon_sym_LBRACKCaptures_RBRACK] = ACTIONS(201),
    [anon_sym_LBRACKAsserts_RBRACK] = ACTIONS(201),
    [anon_sym_file_COMMA] = ACTIONS(201),
    [anon_sym_variable] = ACTIONS(173),
    [anon_sym_status] = ACTIONS(175),
    [anon_sym_url] = ACTIONS(177),
    [anon_sym_header] = ACTIONS(179),
    [anon_sym_cookie] = ACTIONS(181),
    [anon_sym_body] = ACTIONS(183),
    [anon_sym_xpath] = ACTIONS(185),
    [anon_sym_jsonpath] = ACTIONS(187),
    [anon_sym_regex] = ACTIONS(189),
    [anon_sym_duration] = ACTIONS(191),
    [anon_sym_sha256] = ACTIONS(193),
    [anon_sym_md5] = ACTIONS(195),
    [anon_sym_bytes] = ACTIONS(197),
    [anon_sym_LT] = ACTIONS(201),
    [anon_sym_LT_QMARK] = ACTIONS(201),
    [anon_sym_base64_COMMA] = ACTIONS(201),
    [anon_sym_hex_COMMA] = ACTIONS(201),
    [anon_sym_DQUOTE] = ACTIONS(201),
    [anon_sym_BQUOTE] = ACTIONS(201),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(201),
    [anon_sym_LBRACE] = ACTIONS(201),
    [anon_sym_LBRACK] = ACTIONS(201),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(199),
    [anon_sym_true] = ACTIONS(201),
    [anon_sym_false] = ACTIONS(201),
    [anon_sym_null] = ACTIONS(201),
    [aux_sym_digit_token1] = ACTIONS(201),
    [sym_comment] = ACTIONS(201),
  },
  [18] = {
    [sym_assert] = STATE(18),
    [sym_query] = STATE(22),
    [sym_status_query] = STATE(85),
    [sym_url_query] = STATE(85),
    [sym_header_query] = STATE(85),
    [sym_cookie_query] = STATE(85),
    [sym_body_query] = STATE(85),
    [sym_xpath_query] = STATE(85),
    [sym_jsonpath_query] = STATE(85),
    [sym_regex_query] = STATE(85),
    [sym_variable_query] = STATE(85),
    [sym_duration_query] = STATE(85),
    [sym_sha256_query] = STATE(85),
    [sym_md5_query] = STATE(85),
    [sym_bytes_query] = STATE(85),
    [aux_sym_asserts_section_repeat1] = STATE(18),
    [ts_builtin_sym_end] = ACTIONS(203),
    [anon_sym_LF] = ACTIONS(203),
    [anon_sym_GET] = ACTIONS(205),
    [anon_sym_HEAD] = ACTIONS(205),
    [anon_sym_POST] = ACTIONS(205),
    [anon_sym_PUT] = ACTIONS(205),
    [anon_sym_DELETE] = ACTIONS(205),
    [anon_sym_CONNECT] = ACTIONS(205),
    [anon_sym_OPTIONS] = ACTIONS(205),
    [anon_sym_TRACE] = ACTIONS(205),
    [anon_sym_PATCH] = ACTIONS(205),
    [anon_sym_LINK] = ACTIONS(205),
    [anon_sym_UNLINK] = ACTIONS(205),
    [anon_sym_PURGE] = ACTIONS(205),
    [anon_sym_LOCK] = ACTIONS(205),
    [anon_sym_UNLOCK] = ACTIONS(205),
    [anon_sym_PROPFIND] = ACTIONS(205),
    [anon_sym_VIEW] = ACTIONS(205),
    [anon_sym_LBRACKCaptures_RBRACK] = ACTIONS(205),
    [anon_sym_LBRACKAsserts_RBRACK] = ACTIONS(205),
    [anon_sym_file_COMMA] = ACTIONS(205),
    [anon_sym_variable] = ACTIONS(207),
    [anon_sym_status] = ACTIONS(210),
    [anon_sym_url] = ACTIONS(213),
    [anon_sym_header] = ACTIONS(216),
    [anon_sym_cookie] = ACTIONS(219),
    [anon_sym_body] = ACTIONS(222),
    [anon_sym_xpath] = ACTIONS(225),
    [anon_sym_jsonpath] = ACTIONS(228),
    [anon_sym_regex] = ACTIONS(231),
    [anon_sym_duration] = ACTIONS(234),
    [anon_sym_sha256] = ACTIONS(237),
    [anon_sym_md5] = ACTIONS(240),
    [anon_sym_bytes] = ACTIONS(243),
    [anon_sym_LT] = ACTIONS(205),
    [anon_sym_LT_QMARK] = ACTIONS(205),
    [anon_sym_base64_COMMA] = ACTIONS(205),
    [anon_sym_hex_COMMA] = ACTIONS(205),
    [anon_sym_DQUOTE] = ACTIONS(205),
    [anon_sym_BQUOTE] = ACTIONS(205),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(205),
    [anon_sym_LBRACE] = ACTIONS(205),
    [anon_sym_LBRACK] = ACTIONS(205),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(203),
    [anon_sym_true] = ACTIONS(205),
    [anon_sym_false] = ACTIONS(205),
    [anon_sym_null] = ACTIONS(205),
    [aux_sym_digit_token1] = ACTIONS(205),
    [sym_comment] = ACTIONS(205),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 29,
    ACTIONS(31), 1,
      anon_sym_file_COMMA,
    ACTIONS(33), 1,
      anon_sym_LT,
    ACTIONS(35), 1,
      anon_sym_LT_QMARK,
    ACTIONS(37), 1,
      anon_sym_base64_COMMA,
    ACTIONS(39), 1,
      anon_sym_hex_COMMA,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_BQUOTE,
    ACTIONS(49), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(51), 1,
      anon_sym_LBRACE,
    ACTIONS(53), 1,
      anon_sym_LBRACK,
    ACTIONS(55), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(59), 1,
      anon_sym_null,
    ACTIONS(61), 1,
      aux_sym_digit_token1,
    ACTIONS(81), 1,
      anon_sym_LBRACKCaptures_RBRACK,
    ACTIONS(83), 1,
      anon_sym_LBRACKAsserts_RBRACK,
    STATE(116), 1,
      sym_xml_open_tag,
    STATE(122), 1,
      sym_body,
    STATE(247), 1,
      sym_integer,
    STATE(429), 1,
      sym_bytes,
    STATE(577), 1,
      sym_xml_tag,
    ACTIONS(57), 2,
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
    STATE(230), 2,
      sym_digit,
      aux_sym_integer_repeat1,
    STATE(248), 2,
      sym_xml_prolog_tag,
      aux_sym_xml_repeat1,
    STATE(504), 7,
      sym_json_object,
      sym_json_array,
      sym_json_string,
      sym_json_number,
      sym_template,
      sym_boolean,
      sym_null,
    STATE(598), 7,
      sym_xml,
      sym_oneline_base64,
      sym_oneline_file,
      sym_oneline_hex,
      sym_oneline_string,
      sym_multiline_string,
      sym_json_value,
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
  [122] = 29,
    ACTIONS(31), 1,
      anon_sym_file_COMMA,
    ACTIONS(33), 1,
      anon_sym_LT,
    ACTIONS(35), 1,
      anon_sym_LT_QMARK,
    ACTIONS(37), 1,
      anon_sym_base64_COMMA,
    ACTIONS(39), 1,
      anon_sym_hex_COMMA,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_BQUOTE,
    ACTIONS(49), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(51), 1,
      anon_sym_LBRACE,
    ACTIONS(53), 1,
      anon_sym_LBRACK,
    ACTIONS(55), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(59), 1,
      anon_sym_null,
    ACTIONS(61), 1,
      aux_sym_digit_token1,
    ACTIONS(81), 1,
      anon_sym_LBRACKCaptures_RBRACK,
    ACTIONS(83), 1,
      anon_sym_LBRACKAsserts_RBRACK,
    STATE(116), 1,
      sym_xml_open_tag,
    STATE(125), 1,
      sym_body,
    STATE(247), 1,
      sym_integer,
    STATE(429), 1,
      sym_bytes,
    STATE(577), 1,
      sym_xml_tag,
    ACTIONS(57), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(246), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(63), 2,
      sym_response_section,
      aux_sym_response_repeat1,
    STATE(69), 2,
      sym_captures_section,
      sym_asserts_section,
    STATE(230), 2,
      sym_digit,
      aux_sym_integer_repeat1,
    STATE(248), 2,
      sym_xml_prolog_tag,
      aux_sym_xml_repeat1,
    STATE(504), 7,
      sym_json_object,
      sym_json_array,
      sym_json_string,
      sym_json_number,
      sym_template,
      sym_boolean,
      sym_null,
    STATE(598), 7,
      sym_xml,
      sym_oneline_base64,
      sym_oneline_file,
      sym_oneline_hex,
      sym_oneline_string,
      sym_multiline_string,
      sym_json_value,
    ACTIONS(248), 17,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
  [244] = 31,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(250), 1,
      anon_sym_regex,
    ACTIONS(252), 1,
      anon_sym_not,
    ACTIONS(266), 1,
      anon_sym_startsWith,
    ACTIONS(268), 1,
      anon_sym_endsWith,
    ACTIONS(270), 1,
      anon_sym_contains,
    ACTIONS(272), 1,
      anon_sym_matches,
    ACTIONS(274), 1,
      anon_sym_exists,
    ACTIONS(276), 1,
      anon_sym_includes,
    ACTIONS(278), 1,
      anon_sym_isInteger,
    ACTIONS(280), 1,
      anon_sym_isFloat,
    ACTIONS(282), 1,
      anon_sym_isBoolean,
    ACTIONS(284), 1,
      anon_sym_isString,
    ACTIONS(286), 1,
      anon_sym_isCollection,
    ACTIONS(288), 1,
      anon_sym_count,
    ACTIONS(290), 1,
      anon_sym_urlEncode,
    ACTIONS(292), 1,
      anon_sym_urlDecode,
    ACTIONS(294), 1,
      anon_sym_htmlEscape,
    ACTIONS(296), 1,
      anon_sym_htmlUnescape,
    ACTIONS(298), 1,
      anon_sym_toInt,
    STATE(411), 1,
      sym_predicate,
    STATE(536), 1,
      sym_predicate_func,
    ACTIONS(254), 2,
      anon_sym_equals,
      anon_sym_EQ_EQ,
    ACTIONS(256), 2,
      anon_sym_notEquals,
      anon_sym_BANG_EQ,
    ACTIONS(258), 2,
      anon_sym_greaterThan,
      anon_sym_GT,
    ACTIONS(260), 2,
      anon_sym_greaterThanOrEquals,
      anon_sym_GT_EQ,
    ACTIONS(262), 2,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(264), 2,
      anon_sym_lessThanOrEquals,
      anon_sym_LT_EQ,
    STATE(62), 2,
      sym_filter,
      aux_sym_capture_repeat1,
    STATE(76), 7,
      sym_regex_filter,
      sym_count_filter,
      sym_url_encode_filter,
      sym_url_decode_filter,
      sym_html_encode_filter,
      sym_html_decode_filter,
      sym_to_int_filter,
    STATE(535), 17,
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
  [367] = 31,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(250), 1,
      anon_sym_regex,
    ACTIONS(252), 1,
      anon_sym_not,
    ACTIONS(266), 1,
      anon_sym_startsWith,
    ACTIONS(268), 1,
      anon_sym_endsWith,
    ACTIONS(270), 1,
      anon_sym_contains,
    ACTIONS(272), 1,
      anon_sym_matches,
    ACTIONS(274), 1,
      anon_sym_exists,
    ACTIONS(276), 1,
      anon_sym_includes,
    ACTIONS(278), 1,
      anon_sym_isInteger,
    ACTIONS(280), 1,
      anon_sym_isFloat,
    ACTIONS(282), 1,
      anon_sym_isBoolean,
    ACTIONS(284), 1,
      anon_sym_isString,
    ACTIONS(286), 1,
      anon_sym_isCollection,
    ACTIONS(288), 1,
      anon_sym_count,
    ACTIONS(290), 1,
      anon_sym_urlEncode,
    ACTIONS(292), 1,
      anon_sym_urlDecode,
    ACTIONS(294), 1,
      anon_sym_htmlEscape,
    ACTIONS(296), 1,
      anon_sym_htmlUnescape,
    ACTIONS(298), 1,
      anon_sym_toInt,
    STATE(375), 1,
      sym_predicate,
    STATE(536), 1,
      sym_predicate_func,
    ACTIONS(254), 2,
      anon_sym_equals,
      anon_sym_EQ_EQ,
    ACTIONS(256), 2,
      anon_sym_notEquals,
      anon_sym_BANG_EQ,
    ACTIONS(258), 2,
      anon_sym_greaterThan,
      anon_sym_GT,
    ACTIONS(260), 2,
      anon_sym_greaterThanOrEquals,
      anon_sym_GT_EQ,
    ACTIONS(262), 2,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(264), 2,
      anon_sym_lessThanOrEquals,
      anon_sym_LT_EQ,
    STATE(21), 2,
      sym_filter,
      aux_sym_capture_repeat1,
    STATE(76), 7,
      sym_regex_filter,
      sym_count_filter,
      sym_url_encode_filter,
      sym_url_decode_filter,
      sym_html_encode_filter,
      sym_html_decode_filter,
      sym_to_int_filter,
    STATE(535), 17,
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
  [490] = 10,
    ACTIONS(304), 1,
      sym_key_string_text,
    ACTIONS(307), 1,
      anon_sym_BSLASH2,
    ACTIONS(310), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(357), 1,
      sym_key_value,
    STATE(516), 1,
      sym_key_string,
    ACTIONS(300), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(23), 2,
      sym_header,
      aux_sym_request_repeat1,
    STATE(232), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(153), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
    ACTIONS(302), 42,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
      anon_sym_HTTP_SLASH1_DOT0,
      anon_sym_HTTP_SLASH1_DOT1,
      anon_sym_HTTP_SLASH2,
      anon_sym_HTTP_SLASH_STAR,
      anon_sym_HTTP,
      anon_sym_LBRACKBasicAuth_RBRACK,
      anon_sym_LBRACKQueryStringParams_RBRACK,
      anon_sym_LBRACKFormParams_RBRACK,
      anon_sym_LBRACKMultipartFormData_RBRACK,
      anon_sym_LBRACKCookies_RBRACK,
      anon_sym_LBRACKOptions_RBRACK,
      anon_sym_file_COMMA,
      anon_sym_LT,
      anon_sym_LT_QMARK,
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
  [567] = 10,
    ACTIONS(43), 1,
      sym_key_string_text,
    ACTIONS(45), 1,
      anon_sym_BSLASH2,
    ACTIONS(317), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(462), 1,
      sym_key_string,
    STATE(593), 1,
      sym_multipart_form_data_param,
    ACTIONS(313), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(232), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(528), 2,
      sym_key_value,
      sym_file_param,
    STATE(153), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
    ACTIONS(315), 42,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
      anon_sym_HTTP_SLASH1_DOT0,
      anon_sym_HTTP_SLASH1_DOT1,
      anon_sym_HTTP_SLASH2,
      anon_sym_HTTP_SLASH_STAR,
      anon_sym_HTTP,
      anon_sym_LBRACKBasicAuth_RBRACK,
      anon_sym_LBRACKQueryStringParams_RBRACK,
      anon_sym_LBRACKFormParams_RBRACK,
      anon_sym_LBRACKMultipartFormData_RBRACK,
      anon_sym_LBRACKCookies_RBRACK,
      anon_sym_LBRACKOptions_RBRACK,
      anon_sym_file_COMMA,
      anon_sym_LT,
      anon_sym_LT_QMARK,
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
  [644] = 10,
    ACTIONS(43), 1,
      sym_key_string_text,
    ACTIONS(45), 1,
      anon_sym_BSLASH2,
    ACTIONS(317), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(462), 1,
      sym_key_string,
    STATE(593), 1,
      sym_multipart_form_data_param,
    ACTIONS(319), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(232), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(528), 2,
      sym_key_value,
      sym_file_param,
    STATE(153), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
    ACTIONS(321), 42,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
      anon_sym_HTTP_SLASH1_DOT0,
      anon_sym_HTTP_SLASH1_DOT1,
      anon_sym_HTTP_SLASH2,
      anon_sym_HTTP_SLASH_STAR,
      anon_sym_HTTP,
      anon_sym_LBRACKBasicAuth_RBRACK,
      anon_sym_LBRACKQueryStringParams_RBRACK,
      anon_sym_LBRACKFormParams_RBRACK,
      anon_sym_LBRACKMultipartFormData_RBRACK,
      anon_sym_LBRACKCookies_RBRACK,
      anon_sym_LBRACKOptions_RBRACK,
      anon_sym_file_COMMA,
      anon_sym_LT,
      anon_sym_LT_QMARK,
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
  [721] = 10,
    ACTIONS(43), 1,
      sym_key_string_text,
    ACTIONS(45), 1,
      anon_sym_BSLASH2,
    ACTIONS(317), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(462), 1,
      sym_key_string,
    STATE(593), 1,
      sym_multipart_form_data_param,
    ACTIONS(323), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(232), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(528), 2,
      sym_key_value,
      sym_file_param,
    STATE(153), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
    ACTIONS(325), 42,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
      anon_sym_HTTP_SLASH1_DOT0,
      anon_sym_HTTP_SLASH1_DOT1,
      anon_sym_HTTP_SLASH2,
      anon_sym_HTTP_SLASH_STAR,
      anon_sym_HTTP,
      anon_sym_LBRACKBasicAuth_RBRACK,
      anon_sym_LBRACKQueryStringParams_RBRACK,
      anon_sym_LBRACKFormParams_RBRACK,
      anon_sym_LBRACKMultipartFormData_RBRACK,
      anon_sym_LBRACKCookies_RBRACK,
      anon_sym_LBRACKOptions_RBRACK,
      anon_sym_file_COMMA,
      anon_sym_LT,
      anon_sym_LT_QMARK,
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
  [798] = 2,
    ACTIONS(327), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(329), 52,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
      anon_sym_HTTP_SLASH1_DOT0,
      anon_sym_HTTP_SLASH1_DOT1,
      anon_sym_HTTP_SLASH2,
      anon_sym_HTTP_SLASH_STAR,
      anon_sym_HTTP,
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
      anon_sym_LT_QMARK,
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
  [858] = 2,
    ACTIONS(331), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(333), 52,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
      anon_sym_HTTP_SLASH1_DOT0,
      anon_sym_HTTP_SLASH1_DOT1,
      anon_sym_HTTP_SLASH2,
      anon_sym_HTTP_SLASH_STAR,
      anon_sym_HTTP,
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
      anon_sym_LT_QMARK,
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
  [918] = 2,
    ACTIONS(335), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(337), 52,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
      anon_sym_HTTP_SLASH1_DOT0,
      anon_sym_HTTP_SLASH1_DOT1,
      anon_sym_HTTP_SLASH2,
      anon_sym_HTTP_SLASH_STAR,
      anon_sym_HTTP,
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
      anon_sym_LT_QMARK,
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
  [978] = 2,
    ACTIONS(339), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(341), 52,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
      anon_sym_HTTP_SLASH1_DOT0,
      anon_sym_HTTP_SLASH1_DOT1,
      anon_sym_HTTP_SLASH2,
      anon_sym_HTTP_SLASH_STAR,
      anon_sym_HTTP,
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
      anon_sym_LT_QMARK,
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
  [1038] = 2,
    ACTIONS(343), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(345), 52,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
      anon_sym_HTTP_SLASH1_DOT0,
      anon_sym_HTTP_SLASH1_DOT1,
      anon_sym_HTTP_SLASH2,
      anon_sym_HTTP_SLASH_STAR,
      anon_sym_HTTP,
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
      anon_sym_LT_QMARK,
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
  [1098] = 2,
    ACTIONS(347), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(349), 52,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
      anon_sym_HTTP_SLASH1_DOT0,
      anon_sym_HTTP_SLASH1_DOT1,
      anon_sym_HTTP_SLASH2,
      anon_sym_HTTP_SLASH_STAR,
      anon_sym_HTTP,
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
      anon_sym_LT_QMARK,
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
  [1158] = 2,
    ACTIONS(351), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(353), 52,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
      anon_sym_HTTP_SLASH1_DOT0,
      anon_sym_HTTP_SLASH1_DOT1,
      anon_sym_HTTP_SLASH2,
      anon_sym_HTTP_SLASH_STAR,
      anon_sym_HTTP,
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
      anon_sym_LT_QMARK,
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
  [1218] = 2,
    ACTIONS(355), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(357), 52,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
      anon_sym_HTTP_SLASH1_DOT0,
      anon_sym_HTTP_SLASH1_DOT1,
      anon_sym_HTTP_SLASH2,
      anon_sym_HTTP_SLASH_STAR,
      anon_sym_HTTP,
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
      anon_sym_LT_QMARK,
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
  [1278] = 2,
    ACTIONS(359), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(361), 52,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
      anon_sym_HTTP_SLASH1_DOT0,
      anon_sym_HTTP_SLASH1_DOT1,
      anon_sym_HTTP_SLASH2,
      anon_sym_HTTP_SLASH_STAR,
      anon_sym_HTTP,
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
      anon_sym_LT_QMARK,
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
  [1338] = 2,
    ACTIONS(363), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(365), 52,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
      anon_sym_HTTP_SLASH1_DOT0,
      anon_sym_HTTP_SLASH1_DOT1,
      anon_sym_HTTP_SLASH2,
      anon_sym_HTTP_SLASH_STAR,
      anon_sym_HTTP,
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
      anon_sym_LT_QMARK,
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
  [1398] = 2,
    ACTIONS(367), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(369), 52,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
      anon_sym_HTTP_SLASH1_DOT0,
      anon_sym_HTTP_SLASH1_DOT1,
      anon_sym_HTTP_SLASH2,
      anon_sym_HTTP_SLASH_STAR,
      anon_sym_HTTP,
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
      anon_sym_LT_QMARK,
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
  [1458] = 2,
    ACTIONS(371), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(373), 52,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
      anon_sym_HTTP_SLASH1_DOT0,
      anon_sym_HTTP_SLASH1_DOT1,
      anon_sym_HTTP_SLASH2,
      anon_sym_HTTP_SLASH_STAR,
      anon_sym_HTTP,
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
      anon_sym_LT_QMARK,
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
  [1518] = 9,
    ACTIONS(43), 1,
      sym_key_string_text,
    ACTIONS(45), 1,
      anon_sym_BSLASH2,
    ACTIONS(317), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(516), 1,
      sym_key_string,
    STATE(551), 1,
      sym_key_value,
    ACTIONS(375), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(232), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(153), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
    ACTIONS(377), 42,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
      anon_sym_HTTP_SLASH1_DOT0,
      anon_sym_HTTP_SLASH1_DOT1,
      anon_sym_HTTP_SLASH2,
      anon_sym_HTTP_SLASH_STAR,
      anon_sym_HTTP,
      anon_sym_LBRACKBasicAuth_RBRACK,
      anon_sym_LBRACKQueryStringParams_RBRACK,
      anon_sym_LBRACKFormParams_RBRACK,
      anon_sym_LBRACKMultipartFormData_RBRACK,
      anon_sym_LBRACKCookies_RBRACK,
      anon_sym_LBRACKOptions_RBRACK,
      anon_sym_file_COMMA,
      anon_sym_LT,
      anon_sym_LT_QMARK,
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
  [1591] = 9,
    ACTIONS(43), 1,
      sym_key_string_text,
    ACTIONS(45), 1,
      anon_sym_BSLASH2,
    ACTIONS(317), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(516), 1,
      sym_key_string,
    STATE(551), 1,
      sym_key_value,
    ACTIONS(379), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(232), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(153), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
    ACTIONS(381), 42,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
      anon_sym_HTTP_SLASH1_DOT0,
      anon_sym_HTTP_SLASH1_DOT1,
      anon_sym_HTTP_SLASH2,
      anon_sym_HTTP_SLASH_STAR,
      anon_sym_HTTP,
      anon_sym_LBRACKBasicAuth_RBRACK,
      anon_sym_LBRACKQueryStringParams_RBRACK,
      anon_sym_LBRACKFormParams_RBRACK,
      anon_sym_LBRACKMultipartFormData_RBRACK,
      anon_sym_LBRACKCookies_RBRACK,
      anon_sym_LBRACKOptions_RBRACK,
      anon_sym_file_COMMA,
      anon_sym_LT,
      anon_sym_LT_QMARK,
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
  [1664] = 9,
    ACTIONS(43), 1,
      sym_key_string_text,
    ACTIONS(45), 1,
      anon_sym_BSLASH2,
    ACTIONS(317), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(516), 1,
      sym_key_string,
    STATE(551), 1,
      sym_key_value,
    ACTIONS(383), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(232), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(153), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
    ACTIONS(385), 42,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
      anon_sym_HTTP_SLASH1_DOT0,
      anon_sym_HTTP_SLASH1_DOT1,
      anon_sym_HTTP_SLASH2,
      anon_sym_HTTP_SLASH_STAR,
      anon_sym_HTTP,
      anon_sym_LBRACKBasicAuth_RBRACK,
      anon_sym_LBRACKQueryStringParams_RBRACK,
      anon_sym_LBRACKFormParams_RBRACK,
      anon_sym_LBRACKMultipartFormData_RBRACK,
      anon_sym_LBRACKCookies_RBRACK,
      anon_sym_LBRACKOptions_RBRACK,
      anon_sym_file_COMMA,
      anon_sym_LT,
      anon_sym_LT_QMARK,
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
  [1737] = 9,
    ACTIONS(43), 1,
      sym_key_string_text,
    ACTIONS(45), 1,
      anon_sym_BSLASH2,
    ACTIONS(317), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(516), 1,
      sym_key_string,
    STATE(551), 1,
      sym_key_value,
    ACTIONS(387), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(232), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(153), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
    ACTIONS(389), 42,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
      anon_sym_HTTP_SLASH1_DOT0,
      anon_sym_HTTP_SLASH1_DOT1,
      anon_sym_HTTP_SLASH2,
      anon_sym_HTTP_SLASH_STAR,
      anon_sym_HTTP,
      anon_sym_LBRACKBasicAuth_RBRACK,
      anon_sym_LBRACKQueryStringParams_RBRACK,
      anon_sym_LBRACKFormParams_RBRACK,
      anon_sym_LBRACKMultipartFormData_RBRACK,
      anon_sym_LBRACKCookies_RBRACK,
      anon_sym_LBRACKOptions_RBRACK,
      anon_sym_file_COMMA,
      anon_sym_LT,
      anon_sym_LT_QMARK,
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
  [1810] = 9,
    ACTIONS(43), 1,
      sym_key_string_text,
    ACTIONS(45), 1,
      anon_sym_BSLASH2,
    ACTIONS(317), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(516), 1,
      sym_key_string,
    STATE(551), 1,
      sym_key_value,
    ACTIONS(391), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(232), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(153), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
    ACTIONS(393), 42,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
      anon_sym_HTTP_SLASH1_DOT0,
      anon_sym_HTTP_SLASH1_DOT1,
      anon_sym_HTTP_SLASH2,
      anon_sym_HTTP_SLASH_STAR,
      anon_sym_HTTP,
      anon_sym_LBRACKBasicAuth_RBRACK,
      anon_sym_LBRACKQueryStringParams_RBRACK,
      anon_sym_LBRACKFormParams_RBRACK,
      anon_sym_LBRACKMultipartFormData_RBRACK,
      anon_sym_LBRACKCookies_RBRACK,
      anon_sym_LBRACKOptions_RBRACK,
      anon_sym_file_COMMA,
      anon_sym_LT,
      anon_sym_LT_QMARK,
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
  [1883] = 9,
    ACTIONS(43), 1,
      sym_key_string_text,
    ACTIONS(45), 1,
      anon_sym_BSLASH2,
    ACTIONS(317), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(516), 1,
      sym_key_string,
    STATE(551), 1,
      sym_key_value,
    ACTIONS(395), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(232), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(153), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
    ACTIONS(397), 42,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
      anon_sym_HTTP_SLASH1_DOT0,
      anon_sym_HTTP_SLASH1_DOT1,
      anon_sym_HTTP_SLASH2,
      anon_sym_HTTP_SLASH_STAR,
      anon_sym_HTTP,
      anon_sym_LBRACKBasicAuth_RBRACK,
      anon_sym_LBRACKQueryStringParams_RBRACK,
      anon_sym_LBRACKFormParams_RBRACK,
      anon_sym_LBRACKMultipartFormData_RBRACK,
      anon_sym_LBRACKCookies_RBRACK,
      anon_sym_LBRACKOptions_RBRACK,
      anon_sym_file_COMMA,
      anon_sym_LT,
      anon_sym_LT_QMARK,
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
  [1956] = 9,
    ACTIONS(43), 1,
      sym_key_string_text,
    ACTIONS(45), 1,
      anon_sym_BSLASH2,
    ACTIONS(317), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(516), 1,
      sym_key_string,
    STATE(551), 1,
      sym_key_value,
    ACTIONS(399), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(232), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(153), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
    ACTIONS(401), 42,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
      anon_sym_HTTP_SLASH1_DOT0,
      anon_sym_HTTP_SLASH1_DOT1,
      anon_sym_HTTP_SLASH2,
      anon_sym_HTTP_SLASH_STAR,
      anon_sym_HTTP,
      anon_sym_LBRACKBasicAuth_RBRACK,
      anon_sym_LBRACKQueryStringParams_RBRACK,
      anon_sym_LBRACKFormParams_RBRACK,
      anon_sym_LBRACKMultipartFormData_RBRACK,
      anon_sym_LBRACKCookies_RBRACK,
      anon_sym_LBRACKOptions_RBRACK,
      anon_sym_file_COMMA,
      anon_sym_LT,
      anon_sym_LT_QMARK,
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
  [2029] = 9,
    ACTIONS(43), 1,
      sym_key_string_text,
    ACTIONS(45), 1,
      anon_sym_BSLASH2,
    ACTIONS(317), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(516), 1,
      sym_key_string,
    STATE(551), 1,
      sym_key_value,
    ACTIONS(403), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(232), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(153), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
    ACTIONS(405), 42,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
      anon_sym_HTTP_SLASH1_DOT0,
      anon_sym_HTTP_SLASH1_DOT1,
      anon_sym_HTTP_SLASH2,
      anon_sym_HTTP_SLASH_STAR,
      anon_sym_HTTP,
      anon_sym_LBRACKBasicAuth_RBRACK,
      anon_sym_LBRACKQueryStringParams_RBRACK,
      anon_sym_LBRACKFormParams_RBRACK,
      anon_sym_LBRACKMultipartFormData_RBRACK,
      anon_sym_LBRACKCookies_RBRACK,
      anon_sym_LBRACKOptions_RBRACK,
      anon_sym_file_COMMA,
      anon_sym_LT,
      anon_sym_LT_QMARK,
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
  [2102] = 9,
    ACTIONS(43), 1,
      sym_key_string_text,
    ACTIONS(45), 1,
      anon_sym_BSLASH2,
    ACTIONS(317), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(516), 1,
      sym_key_string,
    STATE(551), 1,
      sym_key_value,
    ACTIONS(407), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(232), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(153), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
    ACTIONS(409), 42,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
      anon_sym_HTTP_SLASH1_DOT0,
      anon_sym_HTTP_SLASH1_DOT1,
      anon_sym_HTTP_SLASH2,
      anon_sym_HTTP_SLASH_STAR,
      anon_sym_HTTP,
      anon_sym_LBRACKBasicAuth_RBRACK,
      anon_sym_LBRACKQueryStringParams_RBRACK,
      anon_sym_LBRACKFormParams_RBRACK,
      anon_sym_LBRACKMultipartFormData_RBRACK,
      anon_sym_LBRACKCookies_RBRACK,
      anon_sym_LBRACKOptions_RBRACK,
      anon_sym_file_COMMA,
      anon_sym_LT,
      anon_sym_LT_QMARK,
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
  [2175] = 10,
    ACTIONS(415), 1,
      anon_sym_LBRACKBasicAuth_RBRACK,
    ACTIONS(418), 1,
      anon_sym_LBRACKQueryStringParams_RBRACK,
    ACTIONS(421), 1,
      anon_sym_LBRACKFormParams_RBRACK,
    ACTIONS(424), 1,
      anon_sym_LBRACKMultipartFormData_RBRACK,
    ACTIONS(427), 1,
      anon_sym_LBRACKCookies_RBRACK,
    ACTIONS(430), 1,
      anon_sym_LBRACKOptions_RBRACK,
    STATE(48), 2,
      sym_request_section,
      aux_sym_request_repeat2,
    ACTIONS(411), 3,
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
    ACTIONS(413), 36,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
      anon_sym_HTTP_SLASH1_DOT0,
      anon_sym_HTTP_SLASH1_DOT1,
      anon_sym_HTTP_SLASH2,
      anon_sym_HTTP_SLASH_STAR,
      anon_sym_HTTP,
      anon_sym_file_COMMA,
      anon_sym_LT,
      anon_sym_LT_QMARK,
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
  [2249] = 6,
    ACTIONS(435), 1,
      anon_sym_LF,
    ACTIONS(440), 1,
      sym_comment,
    STATE(52), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(49), 2,
      sym__comment_or_new_line,
      aux_sym_hurl_file_repeat2,
    ACTIONS(433), 3,
      ts_builtin_sym_end,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(438), 42,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
      anon_sym_HTTP_SLASH1_DOT0,
      anon_sym_HTTP_SLASH1_DOT1,
      anon_sym_HTTP_SLASH2,
      anon_sym_HTTP_SLASH_STAR,
      anon_sym_HTTP,
      anon_sym_LBRACKBasicAuth_RBRACK,
      anon_sym_LBRACKQueryStringParams_RBRACK,
      anon_sym_LBRACKFormParams_RBRACK,
      anon_sym_LBRACKMultipartFormData_RBRACK,
      anon_sym_LBRACKCookies_RBRACK,
      anon_sym_LBRACKOptions_RBRACK,
      anon_sym_file_COMMA,
      anon_sym_LT,
      anon_sym_LT_QMARK,
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
  [2312] = 2,
    ACTIONS(443), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(445), 46,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
      anon_sym_LT_QMARK,
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
  [2366] = 2,
    ACTIONS(447), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(449), 46,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
      anon_sym_LT_QMARK,
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
  [2420] = 5,
    ACTIONS(451), 1,
      anon_sym_LF,
    ACTIONS(453), 1,
      sym_comment,
    STATE(53), 1,
      aux_sym__comment_or_new_line_repeat1,
    ACTIONS(89), 3,
      ts_builtin_sym_end,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(93), 42,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
      anon_sym_HTTP_SLASH1_DOT0,
      anon_sym_HTTP_SLASH1_DOT1,
      anon_sym_HTTP_SLASH2,
      anon_sym_HTTP_SLASH_STAR,
      anon_sym_HTTP,
      anon_sym_LBRACKBasicAuth_RBRACK,
      anon_sym_LBRACKQueryStringParams_RBRACK,
      anon_sym_LBRACKFormParams_RBRACK,
      anon_sym_LBRACKMultipartFormData_RBRACK,
      anon_sym_LBRACKCookies_RBRACK,
      anon_sym_LBRACKOptions_RBRACK,
      anon_sym_file_COMMA,
      anon_sym_LT,
      anon_sym_LT_QMARK,
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
  [2479] = 5,
    ACTIONS(455), 1,
      anon_sym_LF,
    ACTIONS(458), 1,
      sym_comment,
    STATE(53), 1,
      aux_sym__comment_or_new_line_repeat1,
    ACTIONS(97), 3,
      ts_builtin_sym_end,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(102), 42,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
      anon_sym_HTTP_SLASH1_DOT0,
      anon_sym_HTTP_SLASH1_DOT1,
      anon_sym_HTTP_SLASH2,
      anon_sym_HTTP_SLASH_STAR,
      anon_sym_HTTP,
      anon_sym_LBRACKBasicAuth_RBRACK,
      anon_sym_LBRACKQueryStringParams_RBRACK,
      anon_sym_LBRACKFormParams_RBRACK,
      anon_sym_LBRACKMultipartFormData_RBRACK,
      anon_sym_LBRACKCookies_RBRACK,
      anon_sym_LBRACKOptions_RBRACK,
      anon_sym_file_COMMA,
      anon_sym_LT,
      anon_sym_LT_QMARK,
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
  [2538] = 10,
    ACTIONS(304), 1,
      sym_key_string_text,
    ACTIONS(307), 1,
      anon_sym_BSLASH2,
    ACTIONS(310), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(378), 1,
      sym_key_value,
    STATE(516), 1,
      sym_key_string,
    ACTIONS(300), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(54), 2,
      sym_header,
      aux_sym_request_repeat1,
    STATE(232), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(153), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
    ACTIONS(302), 33,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
      anon_sym_LT_QMARK,
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
  [2606] = 2,
    ACTIONS(461), 4,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(463), 43,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
      anon_sym_HTTP_SLASH1_DOT0,
      anon_sym_HTTP_SLASH1_DOT1,
      anon_sym_HTTP_SLASH2,
      anon_sym_HTTP_SLASH_STAR,
      anon_sym_HTTP,
      anon_sym_LBRACKBasicAuth_RBRACK,
      anon_sym_LBRACKQueryStringParams_RBRACK,
      anon_sym_LBRACKFormParams_RBRACK,
      anon_sym_LBRACKMultipartFormData_RBRACK,
      anon_sym_LBRACKCookies_RBRACK,
      anon_sym_LBRACKOptions_RBRACK,
      anon_sym_file_COMMA,
      anon_sym_LT,
      anon_sym_LT_QMARK,
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
  [2658] = 9,
    ACTIONS(469), 1,
      sym_key_string_text,
    ACTIONS(471), 1,
      anon_sym_BSLASH2,
    ACTIONS(473), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(509), 1,
      sym_key_string,
    ACTIONS(465), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(58), 2,
      sym_capture,
      aux_sym_captures_section_repeat1,
    STATE(262), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(177), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
    ACTIONS(467), 33,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
      anon_sym_LT_QMARK,
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
  [2723] = 9,
    ACTIONS(479), 1,
      sym_key_string_text,
    ACTIONS(482), 1,
      anon_sym_BSLASH2,
    ACTIONS(485), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(509), 1,
      sym_key_string,
    ACTIONS(475), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(57), 2,
      sym_capture,
      aux_sym_captures_section_repeat1,
    STATE(262), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(177), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
    ACTIONS(477), 33,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
      anon_sym_LT_QMARK,
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
  [2788] = 9,
    ACTIONS(469), 1,
      sym_key_string_text,
    ACTIONS(471), 1,
      anon_sym_BSLASH2,
    ACTIONS(473), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(509), 1,
      sym_key_string,
    ACTIONS(488), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(57), 2,
      sym_capture,
      aux_sym_captures_section_repeat1,
    STATE(262), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(177), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
    ACTIONS(490), 33,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
      anon_sym_LT_QMARK,
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
  [2853] = 2,
    ACTIONS(492), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(494), 42,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
      anon_sym_HTTP_SLASH1_DOT0,
      anon_sym_HTTP_SLASH1_DOT1,
      anon_sym_HTTP_SLASH2,
      anon_sym_HTTP_SLASH_STAR,
      anon_sym_HTTP,
      anon_sym_LBRACKBasicAuth_RBRACK,
      anon_sym_LBRACKQueryStringParams_RBRACK,
      anon_sym_LBRACKFormParams_RBRACK,
      anon_sym_LBRACKMultipartFormData_RBRACK,
      anon_sym_LBRACKCookies_RBRACK,
      anon_sym_LBRACKOptions_RBRACK,
      anon_sym_file_COMMA,
      anon_sym_LT,
      anon_sym_LT_QMARK,
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
  [2903] = 2,
    ACTIONS(496), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(498), 42,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
      anon_sym_HTTP_SLASH1_DOT0,
      anon_sym_HTTP_SLASH1_DOT1,
      anon_sym_HTTP_SLASH2,
      anon_sym_HTTP_SLASH_STAR,
      anon_sym_HTTP,
      anon_sym_LBRACKBasicAuth_RBRACK,
      anon_sym_LBRACKQueryStringParams_RBRACK,
      anon_sym_LBRACKFormParams_RBRACK,
      anon_sym_LBRACKMultipartFormData_RBRACK,
      anon_sym_LBRACKCookies_RBRACK,
      anon_sym_LBRACKOptions_RBRACK,
      anon_sym_file_COMMA,
      anon_sym_LT,
      anon_sym_LT_QMARK,
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
  [2953] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(266), 1,
      anon_sym_startsWith,
    ACTIONS(268), 1,
      anon_sym_endsWith,
    ACTIONS(270), 1,
      anon_sym_contains,
    ACTIONS(272), 1,
      anon_sym_matches,
    ACTIONS(274), 1,
      anon_sym_exists,
    ACTIONS(276), 1,
      anon_sym_includes,
    ACTIONS(278), 1,
      anon_sym_isInteger,
    ACTIONS(280), 1,
      anon_sym_isFloat,
    ACTIONS(282), 1,
      anon_sym_isBoolean,
    ACTIONS(284), 1,
      anon_sym_isString,
    ACTIONS(286), 1,
      anon_sym_isCollection,
    STATE(484), 1,
      sym_predicate_func,
    ACTIONS(254), 2,
      anon_sym_equals,
      anon_sym_EQ_EQ,
    ACTIONS(256), 2,
      anon_sym_notEquals,
      anon_sym_BANG_EQ,
    ACTIONS(258), 2,
      anon_sym_greaterThan,
      anon_sym_GT,
    ACTIONS(260), 2,
      anon_sym_greaterThanOrEquals,
      anon_sym_GT_EQ,
    ACTIONS(262), 2,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(264), 2,
      anon_sym_lessThanOrEquals,
      anon_sym_LT_EQ,
    STATE(535), 17,
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
  [3036] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(500), 1,
      anon_sym_regex,
    ACTIONS(507), 1,
      anon_sym_count,
    ACTIONS(510), 1,
      anon_sym_urlEncode,
    ACTIONS(513), 1,
      anon_sym_urlDecode,
    ACTIONS(516), 1,
      anon_sym_htmlEscape,
    ACTIONS(519), 1,
      anon_sym_htmlUnescape,
    ACTIONS(522), 1,
      anon_sym_toInt,
    STATE(62), 2,
      sym_filter,
      aux_sym_capture_repeat1,
    ACTIONS(503), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    STATE(76), 7,
      sym_regex_filter,
      sym_count_filter,
      sym_url_encode_filter,
      sym_url_decode_filter,
      sym_html_encode_filter,
      sym_html_decode_filter,
      sym_to_int_filter,
    ACTIONS(505), 20,
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
  [3103] = 6,
    ACTIONS(529), 1,
      anon_sym_LBRACKCaptures_RBRACK,
    ACTIONS(532), 1,
      anon_sym_LBRACKAsserts_RBRACK,
    STATE(63), 2,
      sym_response_section,
      aux_sym_response_repeat1,
    STATE(69), 2,
      sym_captures_section,
      sym_asserts_section,
    ACTIONS(525), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(527), 31,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
      anon_sym_LT_QMARK,
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
  [3156] = 5,
    ACTIONS(535), 1,
      anon_sym_LF,
    ACTIONS(538), 1,
      sym_comment,
    STATE(64), 1,
      aux_sym__comment_or_new_line_repeat1,
    ACTIONS(97), 3,
      ts_builtin_sym_end,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(102), 33,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
      anon_sym_LT_QMARK,
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
  [3206] = 5,
    ACTIONS(541), 1,
      anon_sym_LF,
    ACTIONS(543), 1,
      sym_comment,
    STATE(64), 1,
      aux_sym__comment_or_new_line_repeat1,
    ACTIONS(89), 3,
      ts_builtin_sym_end,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(93), 33,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
      anon_sym_LT_QMARK,
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
  [3256] = 2,
    ACTIONS(545), 4,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(547), 34,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
      anon_sym_LT_QMARK,
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
  [3299] = 2,
    ACTIONS(549), 4,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(551), 34,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
      anon_sym_LT_QMARK,
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
  [3342] = 2,
    ACTIONS(461), 4,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(463), 34,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
      anon_sym_LT_QMARK,
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
  [3385] = 2,
    ACTIONS(553), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(555), 33,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
      anon_sym_LT_QMARK,
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
  [3426] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(559), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(557), 27,
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
  [3466] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(563), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(561), 27,
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
  [3506] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(567), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(565), 27,
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
  [3546] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(571), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(569), 27,
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
  [3586] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(575), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(573), 27,
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
  [3626] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(579), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(577), 27,
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
    ACTIONS(583), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(581), 27,
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
    ACTIONS(587), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(585), 27,
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
    ACTIONS(591), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(589), 27,
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
    ACTIONS(595), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(593), 27,
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
    ACTIONS(599), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(597), 27,
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
    ACTIONS(603), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(601), 27,
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
    ACTIONS(607), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(605), 26,
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
  [3945] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(611), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(609), 26,
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
  [3984] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(615), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(613), 26,
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
  [4023] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(619), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(617), 26,
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
  [4062] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(623), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(621), 26,
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
  [4101] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(627), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(625), 26,
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
  [4140] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(631), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(629), 26,
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
  [4179] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(635), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(633), 26,
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
  [4218] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(639), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(637), 26,
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
  [4257] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(643), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(641), 26,
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
  [4296] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(647), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(645), 26,
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
  [4335] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(651), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(649), 26,
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
  [4374] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(655), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(653), 26,
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
  [4413] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(659), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(657), 26,
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
  [4452] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(661), 1,
      anon_sym_variable,
    ACTIONS(663), 1,
      anon_sym_status,
    ACTIONS(665), 1,
      anon_sym_url,
    ACTIONS(667), 1,
      anon_sym_header,
    ACTIONS(669), 1,
      anon_sym_cookie,
    ACTIONS(671), 1,
      anon_sym_body,
    ACTIONS(673), 1,
      anon_sym_xpath,
    ACTIONS(675), 1,
      anon_sym_jsonpath,
    ACTIONS(677), 1,
      anon_sym_regex,
    ACTIONS(679), 1,
      anon_sym_duration,
    ACTIONS(681), 1,
      anon_sym_sha256,
    ACTIONS(683), 1,
      anon_sym_md5,
    ACTIONS(685), 1,
      anon_sym_bytes,
    STATE(112), 1,
      sym_query,
    STATE(203), 13,
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
  [4513] = 9,
    ACTIONS(7), 1,
      anon_sym_LF,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(687), 1,
      ts_builtin_sym_end,
    STATE(11), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(110), 1,
      sym_response,
    STATE(126), 1,
      sym__comment_or_new_line,
    STATE(425), 1,
      sym_version,
    ACTIONS(691), 5,
      anon_sym_HTTP_SLASH1_DOT0,
      anon_sym_HTTP_SLASH1_DOT1,
      anon_sym_HTTP_SLASH2,
      anon_sym_HTTP_SLASH_STAR,
      anon_sym_HTTP,
    ACTIONS(689), 16,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
  [4560] = 9,
    ACTIONS(7), 1,
      anon_sym_LF,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(693), 1,
      ts_builtin_sym_end,
    STATE(11), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(97), 1,
      sym_request,
    STATE(131), 1,
      sym_method,
    STATE(108), 2,
      sym_entry,
      aux_sym_hurl_file_repeat1,
    STATE(268), 2,
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
  [4605] = 2,
    ACTIONS(13), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(17), 22,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
      anon_sym_HTTP_SLASH1_DOT0,
      anon_sym_HTTP_SLASH1_DOT1,
      anon_sym_HTTP_SLASH2,
      anon_sym_HTTP_SLASH_STAR,
      anon_sym_HTTP,
      sym_comment,
  [4634] = 2,
    ACTIONS(69), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(71), 22,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
      anon_sym_HTTP_SLASH1_DOT0,
      anon_sym_HTTP_SLASH1_DOT1,
      anon_sym_HTTP_SLASH2,
      anon_sym_HTTP_SLASH_STAR,
      anon_sym_HTTP,
      sym_comment,
  [4663] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(695), 1,
      anon_sym_file_COMMA,
    ACTIONS(697), 1,
      anon_sym_base64_COMMA,
    ACTIONS(699), 1,
      anon_sym_hex_COMMA,
    ACTIONS(701), 1,
      anon_sym_DQUOTE,
    ACTIONS(703), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(707), 1,
      anon_sym_null,
    ACTIONS(709), 1,
      aux_sym_digit_token1,
    STATE(395), 1,
      sym_integer,
    STATE(491), 1,
      sym_predicate_value,
    ACTIONS(705), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(230), 2,
      sym_digit,
      aux_sym_integer_repeat1,
    STATE(490), 9,
      sym_oneline_base64,
      sym_oneline_file,
      sym_oneline_hex,
      sym_quoted_string,
      sym_multiline_string,
      sym_template,
      sym_boolean,
      sym_null,
      sym_float,
  [4716] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(695), 1,
      anon_sym_file_COMMA,
    ACTIONS(697), 1,
      anon_sym_base64_COMMA,
    ACTIONS(699), 1,
      anon_sym_hex_COMMA,
    ACTIONS(701), 1,
      anon_sym_DQUOTE,
    ACTIONS(703), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(707), 1,
      anon_sym_null,
    ACTIONS(709), 1,
      aux_sym_digit_token1,
    STATE(395), 1,
      sym_integer,
    STATE(546), 1,
      sym_predicate_value,
    ACTIONS(705), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(230), 2,
      sym_digit,
      aux_sym_integer_repeat1,
    STATE(490), 9,
      sym_oneline_base64,
      sym_oneline_file,
      sym_oneline_hex,
      sym_quoted_string,
      sym_multiline_string,
      sym_template,
      sym_boolean,
      sym_null,
      sym_float,
  [4769] = 2,
    ACTIONS(711), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(713), 22,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
      anon_sym_HTTP_SLASH1_DOT0,
      anon_sym_HTTP_SLASH1_DOT1,
      anon_sym_HTTP_SLASH2,
      anon_sym_HTTP_SLASH_STAR,
      anon_sym_HTTP,
      sym_comment,
  [4798] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(695), 1,
      anon_sym_file_COMMA,
    ACTIONS(697), 1,
      anon_sym_base64_COMMA,
    ACTIONS(699), 1,
      anon_sym_hex_COMMA,
    ACTIONS(701), 1,
      anon_sym_DQUOTE,
    ACTIONS(703), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(707), 1,
      anon_sym_null,
    ACTIONS(709), 1,
      aux_sym_digit_token1,
    STATE(395), 1,
      sym_integer,
    STATE(548), 1,
      sym_predicate_value,
    ACTIONS(705), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(230), 2,
      sym_digit,
      aux_sym_integer_repeat1,
    STATE(490), 9,
      sym_oneline_base64,
      sym_oneline_file,
      sym_oneline_hex,
      sym_quoted_string,
      sym_multiline_string,
      sym_template,
      sym_boolean,
      sym_null,
      sym_float,
  [4851] = 2,
    ACTIONS(73), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(75), 22,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
      anon_sym_HTTP_SLASH1_DOT0,
      anon_sym_HTTP_SLASH1_DOT1,
      anon_sym_HTTP_SLASH2,
      anon_sym_HTTP_SLASH_STAR,
      anon_sym_HTTP,
      sym_comment,
  [4880] = 2,
    ACTIONS(715), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(717), 22,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
      anon_sym_HTTP_SLASH1_DOT0,
      anon_sym_HTTP_SLASH1_DOT1,
      anon_sym_HTTP_SLASH2,
      anon_sym_HTTP_SLASH_STAR,
      anon_sym_HTTP,
      sym_comment,
  [4909] = 13,
    ACTIONS(59), 1,
      anon_sym_null,
    ACTIONS(61), 1,
      aux_sym_digit_token1,
    ACTIONS(721), 1,
      anon_sym_BSLASH,
    ACTIONS(723), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(725), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(271), 1,
      aux_sym_value_string_text_repeat1,
    STATE(360), 1,
      sym_integer,
    ACTIONS(57), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(719), 2,
      anon_sym_LF,
      sym_comment,
    STATE(230), 2,
      sym_digit,
      aux_sym_integer_repeat1,
    STATE(140), 3,
      sym_value_string_content,
      sym_template,
      aux_sym_value_string_repeat1,
    STATE(200), 3,
      sym_value_string_text,
      sym_value_string_escaped_char,
      aux_sym_value_string_content_repeat1,
    STATE(578), 4,
      sym_value_string,
      sym_boolean,
      sym_null,
      sym_float,
  [4959] = 6,
    ACTIONS(732), 1,
      sym_comment,
    STATE(97), 1,
      sym_request,
    STATE(131), 1,
      sym_method,
    ACTIONS(727), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(108), 2,
      sym_entry,
      aux_sym_hurl_file_repeat1,
    ACTIONS(729), 16,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
  [4995] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(59), 1,
      anon_sym_null,
    ACTIONS(61), 1,
      aux_sym_digit_token1,
    ACTIONS(701), 1,
      anon_sym_DQUOTE,
    ACTIONS(734), 1,
      sym_key_string_text,
    ACTIONS(736), 1,
      anon_sym_BSLASH2,
    STATE(418), 1,
      sym_integer,
    STATE(553), 1,
      sym_variable_value,
    ACTIONS(57), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(230), 2,
      sym_digit,
      aux_sym_integer_repeat1,
    STATE(257), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(166), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
    STATE(573), 5,
      sym_quoted_string,
      sym_key_string,
      sym_boolean,
      sym_null,
      sym_float,
  [5047] = 6,
    ACTIONS(7), 1,
      anon_sym_LF,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(738), 1,
      ts_builtin_sym_end,
    STATE(11), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(121), 1,
      sym__comment_or_new_line,
    ACTIONS(740), 16,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
  [5081] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(742), 1,
      anon_sym_DQUOTE,
    ACTIONS(744), 1,
      anon_sym_LBRACE,
    ACTIONS(746), 1,
      anon_sym_LBRACK,
    ACTIONS(748), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(752), 1,
      anon_sym_null,
    ACTIONS(754), 1,
      aux_sym_digit_token1,
    STATE(185), 1,
      sym_integer,
    STATE(435), 1,
      sym_json_value,
    ACTIONS(750), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(178), 2,
      sym_digit,
      aux_sym_integer_repeat1,
    STATE(434), 7,
      sym_json_object,
      sym_json_array,
      sym_json_string,
      sym_json_number,
      sym_template,
      sym_boolean,
      sym_null,
  [5126] = 13,
    ACTIONS(756), 1,
      anon_sym_LF,
    ACTIONS(758), 1,
      anon_sym_regex,
    ACTIONS(760), 1,
      anon_sym_count,
    ACTIONS(762), 1,
      anon_sym_urlEncode,
    ACTIONS(764), 1,
      anon_sym_urlDecode,
    ACTIONS(766), 1,
      anon_sym_htmlEscape,
    ACTIONS(768), 1,
      anon_sym_htmlUnescape,
    ACTIONS(770), 1,
      anon_sym_toInt,
    ACTIONS(772), 1,
      sym_comment,
    STATE(65), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(67), 1,
      sym__comment_or_new_line,
    STATE(117), 2,
      sym_filter,
      aux_sym_capture_repeat1,
    STATE(196), 7,
      sym_regex_filter,
      sym_count_filter,
      sym_url_encode_filter,
      sym_url_decode_filter,
      sym_html_encode_filter,
      sym_html_decode_filter,
      sym_to_int_filter,
  [5173] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(742), 1,
      anon_sym_DQUOTE,
    ACTIONS(744), 1,
      anon_sym_LBRACE,
    ACTIONS(746), 1,
      anon_sym_LBRACK,
    ACTIONS(748), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(752), 1,
      anon_sym_null,
    ACTIONS(754), 1,
      aux_sym_digit_token1,
    STATE(185), 1,
      sym_integer,
    STATE(371), 1,
      sym_json_value,
    ACTIONS(750), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(178), 2,
      sym_digit,
      aux_sym_integer_repeat1,
    STATE(434), 7,
      sym_json_object,
      sym_json_array,
      sym_json_string,
      sym_json_number,
      sym_template,
      sym_boolean,
      sym_null,
  [5218] = 13,
    ACTIONS(33), 1,
      anon_sym_LT,
    ACTIONS(774), 1,
      anon_sym_LT_QMARK,
    ACTIONS(776), 1,
      anon_sym_LT_SLASH,
    ACTIONS(778), 1,
      anon_sym_BSLASH,
    ACTIONS(780), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(782), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(784), 1,
      sym_comment,
    STATE(120), 1,
      sym_xml_open_tag,
    STATE(234), 1,
      aux_sym_value_string_text_repeat1,
    STATE(250), 1,
      sym_xml_close_tag,
    STATE(135), 3,
      sym_value_string_content,
      sym_template,
      aux_sym_value_string_repeat1,
    STATE(156), 3,
      sym_value_string_text,
      sym_value_string_escaped_char,
      aux_sym_value_string_content_repeat1,
    STATE(124), 4,
      sym_xml_prolog_tag,
      sym_xml_tag,
      sym_value_string,
      aux_sym_xml_tag_repeat1,
  [5265] = 13,
    ACTIONS(33), 1,
      anon_sym_LT,
    ACTIONS(774), 1,
      anon_sym_LT_QMARK,
    ACTIONS(778), 1,
      anon_sym_BSLASH,
    ACTIONS(780), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(782), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(784), 1,
      sym_comment,
    ACTIONS(786), 1,
      anon_sym_LT_SLASH,
    STATE(120), 1,
      sym_xml_open_tag,
    STATE(234), 1,
      aux_sym_value_string_text_repeat1,
    STATE(576), 1,
      sym_xml_close_tag,
    STATE(135), 3,
      sym_value_string_content,
      sym_template,
      aux_sym_value_string_repeat1,
    STATE(156), 3,
      sym_value_string_text,
      sym_value_string_escaped_char,
      aux_sym_value_string_content_repeat1,
    STATE(124), 4,
      sym_xml_prolog_tag,
      sym_xml_tag,
      sym_value_string,
      aux_sym_xml_tag_repeat1,
  [5312] = 13,
    ACTIONS(33), 1,
      anon_sym_LT,
    ACTIONS(774), 1,
      anon_sym_LT_QMARK,
    ACTIONS(778), 1,
      anon_sym_BSLASH,
    ACTIONS(780), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(782), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(784), 1,
      sym_comment,
    ACTIONS(786), 1,
      anon_sym_LT_SLASH,
    STATE(120), 1,
      sym_xml_open_tag,
    STATE(234), 1,
      aux_sym_value_string_text_repeat1,
    STATE(492), 1,
      sym_xml_close_tag,
    STATE(135), 3,
      sym_value_string_content,
      sym_template,
      aux_sym_value_string_repeat1,
    STATE(156), 3,
      sym_value_string_text,
      sym_value_string_escaped_char,
      aux_sym_value_string_content_repeat1,
    STATE(115), 4,
      sym_xml_prolog_tag,
      sym_xml_tag,
      sym_value_string,
      aux_sym_xml_tag_repeat1,
  [5359] = 13,
    ACTIONS(756), 1,
      anon_sym_LF,
    ACTIONS(758), 1,
      anon_sym_regex,
    ACTIONS(760), 1,
      anon_sym_count,
    ACTIONS(762), 1,
      anon_sym_urlEncode,
    ACTIONS(764), 1,
      anon_sym_urlDecode,
    ACTIONS(766), 1,
      anon_sym_htmlEscape,
    ACTIONS(768), 1,
      anon_sym_htmlUnescape,
    ACTIONS(770), 1,
      anon_sym_toInt,
    ACTIONS(772), 1,
      sym_comment,
    STATE(65), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(66), 1,
      sym__comment_or_new_line,
    STATE(128), 2,
      sym_filter,
      aux_sym_capture_repeat1,
    STATE(196), 7,
      sym_regex_filter,
      sym_count_filter,
      sym_url_encode_filter,
      sym_url_decode_filter,
      sym_html_encode_filter,
      sym_html_decode_filter,
      sym_to_int_filter,
  [5406] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(742), 1,
      anon_sym_DQUOTE,
    ACTIONS(744), 1,
      anon_sym_LBRACE,
    ACTIONS(746), 1,
      anon_sym_LBRACK,
    ACTIONS(748), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(752), 1,
      anon_sym_null,
    ACTIONS(754), 1,
      aux_sym_digit_token1,
    STATE(185), 1,
      sym_integer,
    STATE(468), 1,
      sym_json_value,
    ACTIONS(750), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(178), 2,
      sym_digit,
      aux_sym_integer_repeat1,
    STATE(434), 7,
      sym_json_object,
      sym_json_array,
      sym_json_string,
      sym_json_number,
      sym_template,
      sym_boolean,
      sym_null,
  [5451] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(742), 1,
      anon_sym_DQUOTE,
    ACTIONS(744), 1,
      anon_sym_LBRACE,
    ACTIONS(746), 1,
      anon_sym_LBRACK,
    ACTIONS(748), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(752), 1,
      anon_sym_null,
    ACTIONS(754), 1,
      aux_sym_digit_token1,
    STATE(185), 1,
      sym_integer,
    STATE(389), 1,
      sym_json_value,
    ACTIONS(750), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(178), 2,
      sym_digit,
      aux_sym_integer_repeat1,
    STATE(434), 7,
      sym_json_object,
      sym_json_array,
      sym_json_string,
      sym_json_number,
      sym_template,
      sym_boolean,
      sym_null,
  [5496] = 13,
    ACTIONS(33), 1,
      anon_sym_LT,
    ACTIONS(774), 1,
      anon_sym_LT_QMARK,
    ACTIONS(776), 1,
      anon_sym_LT_SLASH,
    ACTIONS(778), 1,
      anon_sym_BSLASH,
    ACTIONS(780), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(782), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(784), 1,
      sym_comment,
    STATE(120), 1,
      sym_xml_open_tag,
    STATE(234), 1,
      aux_sym_value_string_text_repeat1,
    STATE(244), 1,
      sym_xml_close_tag,
    STATE(135), 3,
      sym_value_string_content,
      sym_template,
      aux_sym_value_string_repeat1,
    STATE(156), 3,
      sym_value_string_text,
      sym_value_string_escaped_char,
      aux_sym_value_string_content_repeat1,
    STATE(114), 4,
      sym_xml_prolog_tag,
      sym_xml_tag,
      sym_value_string,
      aux_sym_xml_tag_repeat1,
  [5543] = 2,
    ACTIONS(788), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(790), 17,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
  [5567] = 2,
    ACTIONS(246), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(248), 17,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
  [5591] = 2,
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
  [5615] = 12,
    ACTIONS(784), 1,
      sym_comment,
    ACTIONS(792), 1,
      anon_sym_LT,
    ACTIONS(795), 1,
      anon_sym_LT_QMARK,
    ACTIONS(798), 1,
      anon_sym_LT_SLASH,
    ACTIONS(800), 1,
      anon_sym_BSLASH,
    ACTIONS(803), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(806), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(120), 1,
      sym_xml_open_tag,
    STATE(234), 1,
      aux_sym_value_string_text_repeat1,
    STATE(135), 3,
      sym_value_string_content,
      sym_template,
      aux_sym_value_string_repeat1,
    STATE(156), 3,
      sym_value_string_text,
      sym_value_string_escaped_char,
      aux_sym_value_string_content_repeat1,
    STATE(124), 4,
      sym_xml_prolog_tag,
      sym_xml_tag,
      sym_value_string,
      aux_sym_xml_tag_repeat1,
  [5659] = 2,
    ACTIONS(809), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(811), 17,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
  [5683] = 2,
    ACTIONS(738), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(740), 17,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
  [5707] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(250), 1,
      anon_sym_regex,
    ACTIONS(288), 1,
      anon_sym_count,
    ACTIONS(290), 1,
      anon_sym_urlEncode,
    ACTIONS(292), 1,
      anon_sym_urlDecode,
    ACTIONS(294), 1,
      anon_sym_htmlEscape,
    ACTIONS(296), 1,
      anon_sym_htmlUnescape,
    ACTIONS(298), 1,
      anon_sym_toInt,
    ACTIONS(813), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(129), 2,
      sym_filter,
      aux_sym_capture_repeat1,
    STATE(76), 7,
      sym_regex_filter,
      sym_count_filter,
      sym_url_encode_filter,
      sym_url_decode_filter,
      sym_html_encode_filter,
      sym_html_decode_filter,
      sym_to_int_filter,
  [5748] = 11,
    ACTIONS(503), 1,
      sym_comment,
    ACTIONS(505), 1,
      anon_sym_LF,
    ACTIONS(815), 1,
      anon_sym_regex,
    ACTIONS(818), 1,
      anon_sym_count,
    ACTIONS(821), 1,
      anon_sym_urlEncode,
    ACTIONS(824), 1,
      anon_sym_urlDecode,
    ACTIONS(827), 1,
      anon_sym_htmlEscape,
    ACTIONS(830), 1,
      anon_sym_htmlUnescape,
    ACTIONS(833), 1,
      anon_sym_toInt,
    STATE(128), 2,
      sym_filter,
      aux_sym_capture_repeat1,
    STATE(196), 7,
      sym_regex_filter,
      sym_count_filter,
      sym_url_encode_filter,
      sym_url_decode_filter,
      sym_html_encode_filter,
      sym_html_decode_filter,
      sym_to_int_filter,
  [5789] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(250), 1,
      anon_sym_regex,
    ACTIONS(288), 1,
      anon_sym_count,
    ACTIONS(290), 1,
      anon_sym_urlEncode,
    ACTIONS(292), 1,
      anon_sym_urlDecode,
    ACTIONS(294), 1,
      anon_sym_htmlEscape,
    ACTIONS(296), 1,
      anon_sym_htmlUnescape,
    ACTIONS(298), 1,
      anon_sym_toInt,
    ACTIONS(836), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(62), 2,
      sym_filter,
      aux_sym_capture_repeat1,
    STATE(76), 7,
      sym_regex_filter,
      sym_count_filter,
      sym_url_encode_filter,
      sym_url_decode_filter,
      sym_html_encode_filter,
      sym_html_decode_filter,
      sym_to_int_filter,
  [5830] = 13,
    ACTIONS(15), 1,
      anon_sym_LF,
    ACTIONS(45), 1,
      anon_sym_BSLASH2,
    ACTIONS(63), 1,
      sym_comment,
    ACTIONS(317), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(838), 1,
      sym_key_string_text,
    STATE(24), 1,
      sym__comment_or_new_line,
    STATE(52), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(288), 1,
      sym_multipart_form_data_param,
    STATE(320), 1,
      aux_sym_multipart_form_data_section_repeat1,
    STATE(462), 1,
      sym_key_string,
    STATE(232), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(528), 2,
      sym_key_value,
      sym_file_param,
    STATE(153), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
  [5874] = 10,
    ACTIONS(721), 1,
      anon_sym_BSLASH,
    ACTIONS(723), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(725), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(52), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(271), 1,
      aux_sym_value_string_text_repeat1,
    STATE(334), 1,
      sym_value_string,
    ACTIONS(63), 2,
      anon_sym_LF,
      sym_comment,
    STATE(3), 2,
      sym__comment_or_new_line,
      aux_sym_hurl_file_repeat2,
    STATE(140), 3,
      sym_value_string_content,
      sym_template,
      aux_sym_value_string_repeat1,
    STATE(200), 3,
      sym_value_string_text,
      sym_value_string_escaped_char,
      aux_sym_value_string_content_repeat1,
  [5911] = 12,
    ACTIONS(15), 1,
      anon_sym_LF,
    ACTIONS(45), 1,
      anon_sym_BSLASH2,
    ACTIONS(63), 1,
      sym_comment,
    ACTIONS(317), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(838), 1,
      sym_key_string_text,
    STATE(42), 1,
      sym__comment_or_new_line,
    STATE(52), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(316), 1,
      sym_key_value,
    STATE(317), 1,
      aux_sym_query_string_params_section_repeat1,
    STATE(516), 1,
      sym_key_string,
    STATE(232), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(153), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
  [5951] = 12,
    ACTIONS(15), 1,
      anon_sym_LF,
    ACTIONS(45), 1,
      anon_sym_BSLASH2,
    ACTIONS(63), 1,
      sym_comment,
    ACTIONS(317), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(838), 1,
      sym_key_string_text,
    STATE(44), 1,
      sym__comment_or_new_line,
    STATE(52), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(325), 1,
      sym_key_value,
    STATE(326), 1,
      aux_sym_query_string_params_section_repeat1,
    STATE(516), 1,
      sym_key_string,
    STATE(232), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(153), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
  [5991] = 12,
    ACTIONS(15), 1,
      anon_sym_LF,
    ACTIONS(45), 1,
      anon_sym_BSLASH2,
    ACTIONS(63), 1,
      sym_comment,
    ACTIONS(317), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(838), 1,
      sym_key_string_text,
    STATE(41), 1,
      sym__comment_or_new_line,
    STATE(52), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(313), 1,
      sym_key_value,
    STATE(315), 1,
      aux_sym_query_string_params_section_repeat1,
    STATE(516), 1,
      sym_key_string,
    STATE(232), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(153), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
  [6031] = 6,
    ACTIONS(784), 1,
      sym_comment,
    ACTIONS(842), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(234), 1,
      aux_sym_value_string_text_repeat1,
    STATE(136), 3,
      sym_value_string_content,
      sym_template,
      aux_sym_value_string_repeat1,
    STATE(156), 3,
      sym_value_string_text,
      sym_value_string_escaped_char,
      aux_sym_value_string_content_repeat1,
    ACTIONS(840), 5,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      anon_sym_BSLASH,
      aux_sym_value_string_text_token1,
  [6058] = 8,
    ACTIONS(784), 1,
      sym_comment,
    ACTIONS(846), 1,
      anon_sym_BSLASH,
    ACTIONS(849), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(852), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(234), 1,
      aux_sym_value_string_text_repeat1,
    ACTIONS(844), 3,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
    STATE(136), 3,
      sym_value_string_content,
      sym_template,
      aux_sym_value_string_repeat1,
    STATE(156), 3,
      sym_value_string_text,
      sym_value_string_escaped_char,
      aux_sym_value_string_content_repeat1,
  [6089] = 9,
    ACTIONS(855), 1,
      anon_sym_BSLASH,
    ACTIONS(857), 1,
      sym_filename_text,
    ACTIONS(859), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(11), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(35), 1,
      sym__comment_or_new_line,
    STATE(423), 1,
      sym_filename,
    ACTIONS(11), 2,
      anon_sym_LF,
      sym_comment,
    STATE(246), 2,
      sym_filename_escaped_char,
      aux_sym_filename_content_repeat1,
    STATE(170), 3,
      sym_filename_content,
      sym_template,
      aux_sym_filename_repeat1,
  [6121] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      anon_sym_BSLASH2,
    ACTIONS(317), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(838), 1,
      sym_key_string_text,
    STATE(462), 1,
      sym_key_string,
    STATE(593), 1,
      sym_multipart_form_data_param,
    STATE(232), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(528), 2,
      sym_key_value,
      sym_file_param,
    STATE(153), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
  [6153] = 8,
    ACTIONS(784), 1,
      sym_comment,
    ACTIONS(861), 1,
      anon_sym_LF,
    ACTIONS(863), 1,
      anon_sym_BSLASH,
    ACTIONS(865), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(867), 1,
      aux_sym__multiline_string_text_token1,
    ACTIONS(869), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(148), 3,
      sym_multiline_string_content,
      sym_template,
      aux_sym_multiline_string_repeat1,
    STATE(209), 3,
      sym__multiline_string_text,
      sym_multiline_string_escaped_char,
      aux_sym_multiline_string_content_repeat1,
  [6182] = 7,
    ACTIONS(721), 1,
      anon_sym_BSLASH,
    ACTIONS(723), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(725), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(271), 1,
      aux_sym_value_string_text_repeat1,
    ACTIONS(840), 2,
      anon_sym_LF,
      sym_comment,
    STATE(142), 3,
      sym_value_string_content,
      sym_template,
      aux_sym_value_string_repeat1,
    STATE(200), 3,
      sym_value_string_text,
      sym_value_string_escaped_char,
      aux_sym_value_string_content_repeat1,
  [6209] = 7,
    ACTIONS(784), 1,
      sym_comment,
    ACTIONS(871), 1,
      anon_sym_DQUOTE,
    ACTIONS(873), 1,
      aux_sym_quoted_string_text_token1,
    ACTIONS(875), 1,
      anon_sym_BSLASH,
    ACTIONS(877), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(143), 3,
      sym_quoted_string_content,
      sym_template,
      aux_sym_quoted_string_repeat1,
    STATE(206), 4,
      sym_quoted_string_text,
      sym_invalid_quoted_string_escaped_char,
      sym_quoted_string_escaped_char,
      aux_sym_quoted_string_content_repeat1,
  [6236] = 7,
    ACTIONS(879), 1,
      anon_sym_BSLASH,
    ACTIONS(882), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(885), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(271), 1,
      aux_sym_value_string_text_repeat1,
    ACTIONS(844), 2,
      anon_sym_LF,
      sym_comment,
    STATE(142), 3,
      sym_value_string_content,
      sym_template,
      aux_sym_value_string_repeat1,
    STATE(200), 3,
      sym_value_string_text,
      sym_value_string_escaped_char,
      aux_sym_value_string_content_repeat1,
  [6263] = 7,
    ACTIONS(784), 1,
      sym_comment,
    ACTIONS(873), 1,
      aux_sym_quoted_string_text_token1,
    ACTIONS(875), 1,
      anon_sym_BSLASH,
    ACTIONS(877), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(888), 1,
      anon_sym_DQUOTE,
    STATE(146), 3,
      sym_quoted_string_content,
      sym_template,
      aux_sym_quoted_string_repeat1,
    STATE(206), 4,
      sym_quoted_string_text,
      sym_invalid_quoted_string_escaped_char,
      sym_quoted_string_escaped_char,
      aux_sym_quoted_string_content_repeat1,
  [6290] = 7,
    ACTIONS(784), 1,
      sym_comment,
    ACTIONS(873), 1,
      aux_sym_quoted_string_text_token1,
    ACTIONS(875), 1,
      anon_sym_BSLASH,
    ACTIONS(877), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(890), 1,
      anon_sym_DQUOTE,
    STATE(146), 3,
      sym_quoted_string_content,
      sym_template,
      aux_sym_quoted_string_repeat1,
    STATE(206), 4,
      sym_quoted_string_text,
      sym_invalid_quoted_string_escaped_char,
      sym_quoted_string_escaped_char,
      aux_sym_quoted_string_content_repeat1,
  [6317] = 8,
    ACTIONS(784), 1,
      sym_comment,
    ACTIONS(892), 1,
      anon_sym_LF,
    ACTIONS(895), 1,
      anon_sym_BSLASH,
    ACTIONS(898), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(900), 1,
      aux_sym__multiline_string_text_token1,
    ACTIONS(903), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(145), 3,
      sym_multiline_string_content,
      sym_template,
      aux_sym_multiline_string_repeat1,
    STATE(209), 3,
      sym__multiline_string_text,
      sym_multiline_string_escaped_char,
      aux_sym_multiline_string_content_repeat1,
  [6346] = 7,
    ACTIONS(784), 1,
      sym_comment,
    ACTIONS(906), 1,
      anon_sym_DQUOTE,
    ACTIONS(908), 1,
      aux_sym_quoted_string_text_token1,
    ACTIONS(911), 1,
      anon_sym_BSLASH,
    ACTIONS(914), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(146), 3,
      sym_quoted_string_content,
      sym_template,
      aux_sym_quoted_string_repeat1,
    STATE(206), 4,
      sym_quoted_string_text,
      sym_invalid_quoted_string_escaped_char,
      sym_quoted_string_escaped_char,
      aux_sym_quoted_string_content_repeat1,
  [6373] = 8,
    ACTIONS(784), 1,
      sym_comment,
    ACTIONS(863), 1,
      anon_sym_BSLASH,
    ACTIONS(867), 1,
      aux_sym__multiline_string_text_token1,
    ACTIONS(869), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(917), 1,
      anon_sym_LF,
    ACTIONS(919), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(145), 3,
      sym_multiline_string_content,
      sym_template,
      aux_sym_multiline_string_repeat1,
    STATE(209), 3,
      sym__multiline_string_text,
      sym_multiline_string_escaped_char,
      aux_sym_multiline_string_content_repeat1,
  [6402] = 8,
    ACTIONS(784), 1,
      sym_comment,
    ACTIONS(863), 1,
      anon_sym_BSLASH,
    ACTIONS(867), 1,
      aux_sym__multiline_string_text_token1,
    ACTIONS(869), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(921), 1,
      anon_sym_LF,
    ACTIONS(923), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(145), 3,
      sym_multiline_string_content,
      sym_template,
      aux_sym_multiline_string_repeat1,
    STATE(209), 3,
      sym__multiline_string_text,
      sym_multiline_string_escaped_char,
      aux_sym_multiline_string_content_repeat1,
  [6431] = 8,
    ACTIONS(784), 1,
      sym_comment,
    ACTIONS(863), 1,
      anon_sym_BSLASH,
    ACTIONS(867), 1,
      aux_sym__multiline_string_text_token1,
    ACTIONS(869), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(921), 1,
      anon_sym_LF,
    ACTIONS(923), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(147), 3,
      sym_multiline_string_content,
      sym_template,
      aux_sym_multiline_string_repeat1,
    STATE(209), 3,
      sym__multiline_string_text,
      sym_multiline_string_escaped_char,
      aux_sym_multiline_string_content_repeat1,
  [6460] = 7,
    ACTIONS(784), 1,
      sym_comment,
    ACTIONS(873), 1,
      aux_sym_quoted_string_text_token1,
    ACTIONS(875), 1,
      anon_sym_BSLASH,
    ACTIONS(877), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(925), 1,
      anon_sym_DQUOTE,
    STATE(144), 3,
      sym_quoted_string_content,
      sym_template,
      aux_sym_quoted_string_repeat1,
    STATE(206), 4,
      sym_quoted_string_text,
      sym_invalid_quoted_string_escaped_char,
      sym_quoted_string_escaped_char,
      aux_sym_quoted_string_content_repeat1,
  [6487] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      anon_sym_BSLASH2,
    ACTIONS(317), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(838), 1,
      sym_key_string_text,
    STATE(401), 1,
      sym_key_value,
    STATE(516), 1,
      sym_key_string,
    STATE(232), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(153), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
  [6515] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      anon_sym_BSLASH2,
    ACTIONS(317), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(838), 1,
      sym_key_string_text,
    STATE(516), 1,
      sym_key_string,
    STATE(551), 1,
      sym_key_value,
    STATE(232), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(153), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
  [6543] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      anon_sym_BSLASH2,
    ACTIONS(317), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(838), 1,
      sym_key_string_text,
    ACTIONS(927), 1,
      anon_sym_COLON,
    ACTIONS(929), 1,
      anon_sym_COLON2,
    STATE(232), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(160), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
  [6571] = 8,
    ACTIONS(784), 1,
      sym_comment,
    ACTIONS(931), 1,
      anon_sym_SEMI,
    ACTIONS(933), 1,
      anon_sym_BSLASH,
    ACTIONS(935), 1,
      sym_filename_text,
    ACTIONS(937), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(525), 1,
      sym_filename,
    STATE(264), 2,
      sym_filename_escaped_char,
      aux_sym_filename_content_repeat1,
    STATE(176), 3,
      sym_filename_content,
      sym_template,
      aux_sym_filename_repeat1,
  [6599] = 7,
    ACTIONS(784), 1,
      sym_comment,
    ACTIONS(941), 1,
      anon_sym_BSLASH,
    ACTIONS(944), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(947), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(234), 1,
      aux_sym_value_string_text_repeat1,
    ACTIONS(939), 3,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
    STATE(155), 3,
      sym_value_string_text,
      sym_value_string_escaped_char,
      aux_sym_value_string_content_repeat1,
  [6625] = 7,
    ACTIONS(778), 1,
      anon_sym_BSLASH,
    ACTIONS(780), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(784), 1,
      sym_comment,
    ACTIONS(951), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(234), 1,
      aux_sym_value_string_text_repeat1,
    ACTIONS(949), 3,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
    STATE(155), 3,
      sym_value_string_text,
      sym_value_string_escaped_char,
      aux_sym_value_string_content_repeat1,
  [6651] = 7,
    ACTIONS(784), 1,
      sym_comment,
    ACTIONS(953), 1,
      anon_sym_BSLASH,
    ACTIONS(955), 1,
      anon_sym_BQUOTE,
    ACTIONS(957), 1,
      aux_sym_oneline_string_text_token1,
    ACTIONS(959), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(158), 3,
      sym_oneline_string_content,
      sym_template,
      aux_sym_oneline_string_repeat1,
    STATE(233), 3,
      sym_oneline_string_text,
      sym_oneline_string_escaped_char,
      aux_sym_oneline_string_content_repeat1,
  [6677] = 7,
    ACTIONS(784), 1,
      sym_comment,
    ACTIONS(961), 1,
      anon_sym_BSLASH,
    ACTIONS(964), 1,
      anon_sym_BQUOTE,
    ACTIONS(966), 1,
      aux_sym_oneline_string_text_token1,
    ACTIONS(969), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(158), 3,
      sym_oneline_string_content,
      sym_template,
      aux_sym_oneline_string_repeat1,
    STATE(233), 3,
      sym_oneline_string_text,
      sym_oneline_string_escaped_char,
      aux_sym_oneline_string_content_repeat1,
  [6703] = 7,
    ACTIONS(784), 1,
      sym_comment,
    ACTIONS(953), 1,
      anon_sym_BSLASH,
    ACTIONS(957), 1,
      aux_sym_oneline_string_text_token1,
    ACTIONS(959), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(972), 1,
      anon_sym_BQUOTE,
    STATE(157), 3,
      sym_oneline_string_content,
      sym_template,
      aux_sym_oneline_string_repeat1,
    STATE(233), 3,
      sym_oneline_string_text,
      sym_oneline_string_escaped_char,
      aux_sym_oneline_string_content_repeat1,
  [6729] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(974), 1,
      anon_sym_COLON,
    ACTIONS(976), 1,
      anon_sym_COLON2,
    ACTIONS(978), 1,
      sym_key_string_text,
    ACTIONS(981), 1,
      anon_sym_BSLASH2,
    ACTIONS(984), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(232), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(160), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
  [6757] = 8,
    ACTIONS(784), 1,
      sym_comment,
    ACTIONS(933), 1,
      anon_sym_BSLASH,
    ACTIONS(935), 1,
      sym_filename_text,
    ACTIONS(937), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(987), 1,
      anon_sym_SEMI,
    STATE(534), 1,
      sym_filename,
    STATE(264), 2,
      sym_filename_escaped_char,
      aux_sym_filename_content_repeat1,
    STATE(176), 3,
      sym_filename_content,
      sym_template,
      aux_sym_filename_repeat1,
  [6785] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(974), 1,
      anon_sym_COLON2,
    ACTIONS(989), 1,
      sym_key_string_text,
    ACTIONS(992), 1,
      anon_sym_BSLASH2,
    ACTIONS(995), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(262), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(162), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
  [6810] = 7,
    ACTIONS(784), 1,
      sym_comment,
    ACTIONS(998), 1,
      anon_sym_DQUOTE,
    ACTIONS(1000), 1,
      anon_sym_BSLASH,
    ACTIONS(1002), 1,
      aux_sym_json_string_text_token1,
    ACTIONS(1004), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(303), 2,
      sym_json_string_text,
      sym_json_string_escaped_char,
    STATE(167), 3,
      sym_json_string_content,
      sym_template,
      aux_sym_json_string_repeat1,
  [6835] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1008), 1,
      aux_sym_digit_token1,
    STATE(164), 2,
      sym_digit,
      aux_sym_integer_repeat1,
    ACTIONS(1006), 6,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DOT,
      anon_sym_e,
      anon_sym_E,
  [6854] = 7,
    ACTIONS(974), 1,
      anon_sym_LF,
    ACTIONS(976), 1,
      sym_comment,
    ACTIONS(1011), 1,
      sym_key_string_text,
    ACTIONS(1014), 1,
      anon_sym_BSLASH2,
    ACTIONS(1017), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(257), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(165), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
  [6879] = 7,
    ACTIONS(55), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(736), 1,
      anon_sym_BSLASH2,
    ACTIONS(927), 1,
      anon_sym_LF,
    ACTIONS(929), 1,
      sym_comment,
    ACTIONS(1020), 1,
      sym_key_string_text,
    STATE(257), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(165), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
  [6904] = 7,
    ACTIONS(784), 1,
      sym_comment,
    ACTIONS(1000), 1,
      anon_sym_BSLASH,
    ACTIONS(1002), 1,
      aux_sym_json_string_text_token1,
    ACTIONS(1004), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1022), 1,
      anon_sym_DQUOTE,
    STATE(303), 2,
      sym_json_string_text,
      sym_json_string_escaped_char,
    STATE(168), 3,
      sym_json_string_content,
      sym_template,
      aux_sym_json_string_repeat1,
  [6929] = 7,
    ACTIONS(784), 1,
      sym_comment,
    ACTIONS(1024), 1,
      anon_sym_DQUOTE,
    ACTIONS(1026), 1,
      anon_sym_BSLASH,
    ACTIONS(1029), 1,
      aux_sym_json_string_text_token1,
    ACTIONS(1032), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(303), 2,
      sym_json_string_text,
      sym_json_string_escaped_char,
    STATE(168), 3,
      sym_json_string_content,
      sym_template,
      aux_sym_json_string_repeat1,
  [6954] = 7,
    ACTIONS(784), 1,
      sym_comment,
    ACTIONS(1000), 1,
      anon_sym_BSLASH,
    ACTIONS(1002), 1,
      aux_sym_json_string_text_token1,
    ACTIONS(1004), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1035), 1,
      anon_sym_DQUOTE,
    STATE(303), 2,
      sym_json_string_text,
      sym_json_string_escaped_char,
    STATE(168), 3,
      sym_json_string_content,
      sym_template,
      aux_sym_json_string_repeat1,
  [6979] = 6,
    ACTIONS(855), 1,
      anon_sym_BSLASH,
    ACTIONS(857), 1,
      sym_filename_text,
    ACTIONS(859), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1037), 2,
      anon_sym_LF,
      sym_comment,
    STATE(246), 2,
      sym_filename_escaped_char,
      aux_sym_filename_content_repeat1,
    STATE(171), 3,
      sym_filename_content,
      sym_template,
      aux_sym_filename_repeat1,
  [7002] = 6,
    ACTIONS(1041), 1,
      anon_sym_BSLASH,
    ACTIONS(1044), 1,
      sym_filename_text,
    ACTIONS(1047), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1039), 2,
      anon_sym_LF,
      sym_comment,
    STATE(246), 2,
      sym_filename_escaped_char,
      aux_sym_filename_content_repeat1,
    STATE(171), 3,
      sym_filename_content,
      sym_template,
      aux_sym_filename_repeat1,
  [7025] = 7,
    ACTIONS(784), 1,
      sym_comment,
    ACTIONS(1000), 1,
      anon_sym_BSLASH,
    ACTIONS(1002), 1,
      aux_sym_json_string_text_token1,
    ACTIONS(1004), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1050), 1,
      anon_sym_DQUOTE,
    STATE(303), 2,
      sym_json_string_text,
      sym_json_string_escaped_char,
    STATE(169), 3,
      sym_json_string_content,
      sym_template,
      aux_sym_json_string_repeat1,
  [7050] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1052), 9,
      anon_sym_EQ,
      anon_sym_regex,
      anon_sym_RBRACE_RBRACE,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
  [7065] = 4,
    ACTIONS(784), 1,
      sym_comment,
    ACTIONS(1056), 1,
      aux_sym_invalid_quoted_string_escaped_char_token1,
    ACTIONS(1058), 1,
      anon_sym_u,
    ACTIONS(1054), 7,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
      anon_sym_b,
      anon_sym_f,
      anon_sym_n,
      anon_sym_r,
      anon_sym_t,
  [7084] = 7,
    ACTIONS(784), 1,
      sym_comment,
    ACTIONS(1039), 1,
      anon_sym_SEMI,
    ACTIONS(1060), 1,
      anon_sym_BSLASH,
    ACTIONS(1063), 1,
      sym_filename_text,
    ACTIONS(1066), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(264), 2,
      sym_filename_escaped_char,
      aux_sym_filename_content_repeat1,
    STATE(175), 3,
      sym_filename_content,
      sym_template,
      aux_sym_filename_repeat1,
  [7109] = 7,
    ACTIONS(784), 1,
      sym_comment,
    ACTIONS(933), 1,
      anon_sym_BSLASH,
    ACTIONS(935), 1,
      sym_filename_text,
    ACTIONS(937), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1037), 1,
      anon_sym_SEMI,
    STATE(264), 2,
      sym_filename_escaped_char,
      aux_sym_filename_content_repeat1,
    STATE(175), 3,
      sym_filename_content,
      sym_template,
      aux_sym_filename_repeat1,
  [7134] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(471), 1,
      anon_sym_BSLASH2,
    ACTIONS(473), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(927), 1,
      anon_sym_COLON2,
    ACTIONS(1069), 1,
      sym_key_string_text,
    STATE(262), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(162), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
  [7159] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(754), 1,
      aux_sym_digit_token1,
    STATE(164), 2,
      sym_digit,
      aux_sym_integer_repeat1,
    ACTIONS(1071), 6,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DOT,
      anon_sym_e,
      anon_sym_E,
  [7178] = 2,
    ACTIONS(569), 1,
      anon_sym_LF,
    ACTIONS(571), 8,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
      sym_comment,
  [7192] = 2,
    ACTIONS(621), 1,
      anon_sym_LF,
    ACTIONS(623), 8,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
      sym_comment,
  [7206] = 2,
    ACTIONS(593), 1,
      anon_sym_LF,
    ACTIONS(595), 8,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
      sym_comment,
  [7220] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1075), 1,
      anon_sym_u,
    ACTIONS(1077), 1,
      anon_sym_POUND,
    ACTIONS(1073), 6,
      anon_sym_BSLASH,
      anon_sym_b,
      anon_sym_f,
      anon_sym_n,
      anon_sym_r,
      anon_sym_t,
  [7238] = 7,
    ACTIONS(784), 1,
      sym_comment,
    ACTIONS(1079), 1,
      anon_sym_LF,
    ACTIONS(1082), 1,
      anon_sym_BSLASH,
    ACTIONS(1085), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(1087), 1,
      aux_sym__multiline_string_text_token1,
    ACTIONS(1090), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(183), 3,
      sym__multiline_string_text,
      sym_multiline_string_escaped_char,
      aux_sym_multiline_string_content_repeat1,
  [7262] = 5,
    ACTIONS(784), 1,
      sym_comment,
    ACTIONS(1096), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(211), 1,
      aux_sym__multiline_string_text_repeat1,
    ACTIONS(1094), 2,
      anon_sym_BQUOTE,
      anon_sym_LBRACE,
    ACTIONS(1092), 4,
      anon_sym_LF,
      anon_sym_BSLASH,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      aux_sym__multiline_string_text_token1,
  [7282] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1100), 1,
      anon_sym_DOT,
    STATE(242), 1,
      sym_fraction,
    STATE(409), 1,
      sym_exponent,
    ACTIONS(1102), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(1098), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [7304] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1106), 1,
      anon_sym_u,
    ACTIONS(1104), 7,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
      anon_sym_b,
      anon_sym_f,
      anon_sym_n,
      anon_sym_r,
      anon_sym_t,
  [7320] = 2,
    ACTIONS(657), 1,
      anon_sym_LF,
    ACTIONS(659), 8,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
      sym_comment,
  [7334] = 5,
    ACTIONS(784), 1,
      sym_comment,
    ACTIONS(1110), 1,
      aux_sym_quoted_string_text_token1,
    ACTIONS(1113), 1,
      anon_sym_BSLASH,
    ACTIONS(1108), 2,
      anon_sym_DQUOTE,
      anon_sym_LBRACE_LBRACE,
    STATE(188), 4,
      sym_quoted_string_text,
      sym_invalid_quoted_string_escaped_char,
      sym_quoted_string_escaped_char,
      aux_sym_quoted_string_content_repeat1,
  [7354] = 2,
    ACTIONS(649), 1,
      anon_sym_LF,
    ACTIONS(651), 8,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
      sym_comment,
  [7368] = 2,
    ACTIONS(645), 1,
      anon_sym_LF,
    ACTIONS(647), 8,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
      sym_comment,
  [7382] = 2,
    ACTIONS(601), 1,
      anon_sym_LF,
    ACTIONS(603), 8,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
      sym_comment,
  [7396] = 2,
    ACTIONS(641), 1,
      anon_sym_LF,
    ACTIONS(643), 8,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
      sym_comment,
  [7410] = 2,
    ACTIONS(585), 1,
      anon_sym_LF,
    ACTIONS(587), 8,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
      sym_comment,
  [7424] = 2,
    ACTIONS(573), 1,
      anon_sym_LF,
    ACTIONS(575), 8,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
      sym_comment,
  [7438] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1118), 1,
      anon_sym_u,
    ACTIONS(1120), 1,
      anon_sym_POUND,
    ACTIONS(1116), 6,
      anon_sym_BSLASH,
      anon_sym_b,
      anon_sym_f,
      anon_sym_n,
      anon_sym_r,
      anon_sym_t,
  [7456] = 2,
    ACTIONS(581), 1,
      anon_sym_LF,
    ACTIONS(583), 8,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
      sym_comment,
  [7470] = 2,
    ACTIONS(629), 1,
      anon_sym_LF,
    ACTIONS(631), 8,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
      sym_comment,
  [7484] = 2,
    ACTIONS(597), 1,
      anon_sym_LF,
    ACTIONS(599), 8,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
      sym_comment,
  [7498] = 2,
    ACTIONS(561), 1,
      anon_sym_LF,
    ACTIONS(563), 8,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
      sym_comment,
  [7512] = 6,
    ACTIONS(721), 1,
      anon_sym_BSLASH,
    ACTIONS(723), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(951), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(271), 1,
      aux_sym_value_string_text_repeat1,
    ACTIONS(949), 2,
      anon_sym_LF,
      sym_comment,
    STATE(212), 3,
      sym_value_string_text,
      sym_value_string_escaped_char,
      aux_sym_value_string_content_repeat1,
  [7534] = 2,
    ACTIONS(589), 1,
      anon_sym_LF,
    ACTIONS(591), 8,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
      sym_comment,
  [7548] = 2,
    ACTIONS(557), 1,
      anon_sym_LF,
    ACTIONS(559), 8,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
      sym_comment,
  [7562] = 2,
    ACTIONS(617), 1,
      anon_sym_LF,
    ACTIONS(619), 8,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
      sym_comment,
  [7576] = 2,
    ACTIONS(637), 1,
      anon_sym_LF,
    ACTIONS(639), 8,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
      sym_comment,
  [7590] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1124), 1,
      anon_sym_u,
    ACTIONS(1122), 7,
      anon_sym_BSLASH,
      anon_sym_b,
      anon_sym_f,
      anon_sym_n,
      anon_sym_r,
      anon_sym_t,
      anon_sym_BQUOTE,
  [7606] = 5,
    ACTIONS(784), 1,
      sym_comment,
    ACTIONS(873), 1,
      aux_sym_quoted_string_text_token1,
    ACTIONS(875), 1,
      anon_sym_BSLASH,
    ACTIONS(1126), 2,
      anon_sym_DQUOTE,
      anon_sym_LBRACE_LBRACE,
    STATE(188), 4,
      sym_quoted_string_text,
      sym_invalid_quoted_string_escaped_char,
      sym_quoted_string_escaped_char,
      aux_sym_quoted_string_content_repeat1,
  [7626] = 5,
    ACTIONS(784), 1,
      sym_comment,
    ACTIONS(1132), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(184), 1,
      aux_sym__multiline_string_text_repeat1,
    ACTIONS(1130), 2,
      anon_sym_BQUOTE,
      anon_sym_LBRACE,
    ACTIONS(1128), 4,
      anon_sym_LF,
      anon_sym_BSLASH,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      aux_sym__multiline_string_text_token1,
  [7646] = 2,
    ACTIONS(633), 1,
      anon_sym_LF,
    ACTIONS(635), 8,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
      sym_comment,
  [7660] = 7,
    ACTIONS(784), 1,
      sym_comment,
    ACTIONS(863), 1,
      anon_sym_BSLASH,
    ACTIONS(867), 1,
      aux_sym__multiline_string_text_token1,
    ACTIONS(1134), 1,
      anon_sym_LF,
    ACTIONS(1136), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(1138), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(183), 3,
      sym__multiline_string_text,
      sym_multiline_string_escaped_char,
      aux_sym_multiline_string_content_repeat1,
  [7684] = 2,
    ACTIONS(605), 1,
      anon_sym_LF,
    ACTIONS(607), 8,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
      sym_comment,
  [7698] = 5,
    ACTIONS(784), 1,
      sym_comment,
    ACTIONS(1145), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(211), 1,
      aux_sym__multiline_string_text_repeat1,
    ACTIONS(1142), 2,
      anon_sym_BQUOTE,
      anon_sym_LBRACE,
    ACTIONS(1140), 4,
      anon_sym_LF,
      anon_sym_BSLASH,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      aux_sym__multiline_string_text_token1,
  [7718] = 6,
    ACTIONS(947), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1147), 1,
      anon_sym_BSLASH,
    ACTIONS(1150), 1,
      aux_sym_value_string_text_token1,
    STATE(271), 1,
      aux_sym_value_string_text_repeat1,
    ACTIONS(939), 2,
      anon_sym_LF,
      sym_comment,
    STATE(212), 3,
      sym_value_string_text,
      sym_value_string_escaped_char,
      aux_sym_value_string_content_repeat1,
  [7740] = 2,
    ACTIONS(625), 1,
      anon_sym_LF,
    ACTIONS(627), 8,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
      sym_comment,
  [7754] = 2,
    ACTIONS(613), 1,
      anon_sym_LF,
    ACTIONS(615), 8,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
      sym_comment,
  [7768] = 2,
    ACTIONS(609), 1,
      anon_sym_LF,
    ACTIONS(611), 8,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
      sym_comment,
  [7782] = 2,
    ACTIONS(653), 1,
      anon_sym_LF,
    ACTIONS(655), 8,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
      sym_comment,
  [7796] = 2,
    ACTIONS(577), 1,
      anon_sym_LF,
    ACTIONS(579), 8,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
      sym_comment,
  [7810] = 2,
    ACTIONS(565), 1,
      anon_sym_LF,
    ACTIONS(567), 8,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
      sym_comment,
  [7824] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(754), 1,
      aux_sym_digit_token1,
    STATE(164), 2,
      sym_digit,
      aux_sym_integer_repeat1,
    ACTIONS(1153), 5,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_e,
      anon_sym_E,
  [7842] = 6,
    ACTIONS(784), 1,
      sym_comment,
    ACTIONS(1155), 1,
      anon_sym_BSLASH,
    ACTIONS(1158), 1,
      anon_sym_BQUOTE,
    ACTIONS(1160), 1,
      aux_sym_oneline_string_text_token1,
    ACTIONS(1163), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(220), 3,
      sym_oneline_string_text,
      sym_oneline_string_escaped_char,
      aux_sym_oneline_string_content_repeat1,
  [7863] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(701), 1,
      anon_sym_DQUOTE,
    ACTIONS(709), 1,
      aux_sym_digit_token1,
    STATE(400), 1,
      sym_integer,
    STATE(230), 2,
      sym_digit,
      aux_sym_integer_repeat1,
    STATE(498), 2,
      sym_quoted_string,
      sym_float,
  [7884] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(742), 1,
      anon_sym_DQUOTE,
    ACTIONS(1165), 1,
      anon_sym_RBRACE,
    ACTIONS(1167), 1,
      anon_sym_COMMA,
    STATE(372), 1,
      aux_sym_json_object_repeat1,
    STATE(373), 1,
      sym_json_key_value,
    STATE(496), 1,
      sym_json_string,
    STATE(497), 1,
      sym_json_key_string,
  [7909] = 4,
    ACTIONS(1006), 1,
      anon_sym_LF,
    ACTIONS(1169), 1,
      aux_sym_digit_token1,
    STATE(223), 2,
      sym_digit,
      aux_sym_integer_repeat1,
    ACTIONS(1172), 4,
      anon_sym_DOT,
      anon_sym_e,
      anon_sym_E,
      sym_comment,
  [7926] = 5,
    ACTIONS(784), 1,
      sym_comment,
    ACTIONS(1176), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(1179), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(224), 1,
      aux_sym_value_string_text_repeat1,
    ACTIONS(1174), 4,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      anon_sym_BSLASH,
  [7945] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1183), 1,
      anon_sym_COLON2,
    ACTIONS(1185), 1,
      sym_key_string_text,
    ACTIONS(1188), 1,
      anon_sym_BSLASH2,
    ACTIONS(1181), 2,
      anon_sym_COLON,
      anon_sym_LBRACE_LBRACE,
    STATE(225), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
  [7966] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(701), 1,
      anon_sym_DQUOTE,
    ACTIONS(709), 1,
      aux_sym_digit_token1,
    STATE(402), 1,
      sym_integer,
    STATE(230), 2,
      sym_digit,
      aux_sym_integer_repeat1,
    STATE(499), 2,
      sym_quoted_string,
      sym_float,
  [7987] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(701), 1,
      anon_sym_DQUOTE,
    ACTIONS(709), 1,
      aux_sym_digit_token1,
    STATE(404), 1,
      sym_integer,
    STATE(230), 2,
      sym_digit,
      aux_sym_integer_repeat1,
    STATE(506), 2,
      sym_quoted_string,
      sym_float,
  [8008] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1191), 7,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      aux_sym_digit_token1,
      anon_sym_DOT,
      anon_sym_e,
      anon_sym_E,
  [8021] = 6,
    ACTIONS(784), 1,
      sym_comment,
    ACTIONS(1193), 1,
      anon_sym_BSLASH,
    ACTIONS(1195), 1,
      anon_sym_SLASH,
    ACTIONS(1197), 1,
      aux_sym_regex_text_token1,
    STATE(549), 1,
      sym_regex_content,
    STATE(243), 3,
      sym_regex_text,
      sym_regex_escaped_char,
      aux_sym_regex_content_repeat1,
  [8042] = 4,
    ACTIONS(61), 1,
      aux_sym_digit_token1,
    ACTIONS(1071), 1,
      anon_sym_LF,
    STATE(223), 2,
      sym_digit,
      aux_sym_integer_repeat1,
    ACTIONS(1199), 4,
      anon_sym_DOT,
      anon_sym_e,
      anon_sym_E,
      sym_comment,
  [8059] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(701), 1,
      anon_sym_DQUOTE,
    ACTIONS(709), 1,
      aux_sym_digit_token1,
    STATE(398), 1,
      sym_integer,
    STATE(230), 2,
      sym_digit,
      aux_sym_integer_repeat1,
    STATE(495), 2,
      sym_quoted_string,
      sym_float,
  [8080] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1203), 1,
      anon_sym_COLON2,
    STATE(225), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    ACTIONS(1201), 4,
      anon_sym_COLON,
      sym_key_string_text,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
  [8097] = 4,
    ACTIONS(784), 1,
      sym_comment,
    ACTIONS(1207), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1205), 3,
      anon_sym_BSLASH,
      anon_sym_BQUOTE,
      aux_sym_oneline_string_text_token1,
    STATE(220), 3,
      sym_oneline_string_text,
      sym_oneline_string_escaped_char,
      aux_sym_oneline_string_content_repeat1,
  [8114] = 5,
    ACTIONS(784), 1,
      sym_comment,
    ACTIONS(1211), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(1213), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(224), 1,
      aux_sym_value_string_text_repeat1,
    ACTIONS(1209), 4,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      anon_sym_BSLASH,
  [8133] = 6,
    ACTIONS(784), 1,
      sym_comment,
    ACTIONS(1193), 1,
      anon_sym_BSLASH,
    ACTIONS(1197), 1,
      aux_sym_regex_text_token1,
    ACTIONS(1215), 1,
      anon_sym_SLASH,
    STATE(554), 1,
      sym_regex_content,
    STATE(243), 3,
      sym_regex_text,
      sym_regex_escaped_char,
      aux_sym_regex_content_repeat1,
  [8154] = 4,
    ACTIONS(784), 1,
      sym_comment,
    ACTIONS(1217), 1,
      anon_sym_LF,
    STATE(501), 1,
      sym_multiline_string_type,
    ACTIONS(1219), 5,
      anon_sym_base64,
      anon_sym_hex,
      anon_sym_json,
      anon_sym_xml,
      anon_sym_graphql,
  [8171] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(742), 1,
      anon_sym_DQUOTE,
    ACTIONS(1167), 1,
      anon_sym_COMMA,
    ACTIONS(1221), 1,
      anon_sym_RBRACE,
    STATE(387), 1,
      sym_json_key_value,
    STATE(388), 1,
      aux_sym_json_object_repeat1,
    STATE(496), 1,
      sym_json_string,
    STATE(497), 1,
      sym_json_key_string,
  [8196] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(697), 1,
      anon_sym_base64_COMMA,
    ACTIONS(699), 1,
      anon_sym_hex_COMMA,
    ACTIONS(701), 1,
      anon_sym_DQUOTE,
    STATE(507), 3,
      sym_oneline_base64,
      sym_oneline_hex,
      sym_quoted_string,
  [8214] = 3,
    ACTIONS(784), 1,
      sym_comment,
    ACTIONS(1225), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1223), 5,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      anon_sym_BSLASH,
      aux_sym_value_string_text_token1,
  [8228] = 4,
    ACTIONS(1229), 1,
      anon_sym_BSLASH,
    ACTIONS(1232), 1,
      sym_filename_text,
    STATE(240), 2,
      sym_filename_escaped_char,
      aux_sym_filename_content_repeat1,
    ACTIONS(1227), 3,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
      sym_comment,
  [8244] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1235), 1,
      sym_key_string_text,
    ACTIONS(1238), 1,
      anon_sym_BSLASH2,
    ACTIONS(1181), 2,
      anon_sym_COLON2,
      anon_sym_LBRACE_LBRACE,
    STATE(241), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
  [8262] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(394), 1,
      sym_exponent,
    ACTIONS(1102), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(1241), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [8278] = 5,
    ACTIONS(784), 1,
      sym_comment,
    ACTIONS(1193), 1,
      anon_sym_BSLASH,
    ACTIONS(1197), 1,
      aux_sym_regex_text_token1,
    ACTIONS(1243), 1,
      anon_sym_SLASH,
    STATE(254), 3,
      sym_regex_text,
      sym_regex_escaped_char,
      aux_sym_regex_content_repeat1,
  [8296] = 3,
    ACTIONS(784), 1,
      sym_comment,
    ACTIONS(1247), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1245), 5,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      anon_sym_BSLASH,
      aux_sym_value_string_text_token1,
  [8310] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(754), 1,
      aux_sym_digit_token1,
    STATE(164), 2,
      sym_digit,
      aux_sym_integer_repeat1,
    ACTIONS(1249), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [8326] = 2,
    STATE(240), 2,
      sym_filename_escaped_char,
      aux_sym_filename_content_repeat1,
    ACTIONS(1251), 5,
      anon_sym_LF,
      anon_sym_BSLASH,
      sym_filename_text,
      anon_sym_LBRACE_LBRACE,
      sym_comment,
  [8338] = 6,
    ACTIONS(1098), 1,
      anon_sym_LF,
    ACTIONS(1253), 1,
      anon_sym_DOT,
    ACTIONS(1257), 1,
      sym_comment,
    STATE(306), 1,
      sym_fraction,
    STATE(488), 1,
      sym_exponent,
    ACTIONS(1255), 2,
      anon_sym_e,
      anon_sym_E,
  [8358] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_LT,
    ACTIONS(1259), 1,
      anon_sym_LT_QMARK,
    STATE(116), 1,
      sym_xml_open_tag,
    STATE(486), 1,
      sym_xml_tag,
    STATE(308), 2,
      sym_xml_prolog_tag,
      aux_sym_xml_repeat1,
  [8378] = 3,
    ACTIONS(784), 1,
      sym_comment,
    ACTIONS(1263), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1261), 5,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      anon_sym_BSLASH,
      aux_sym_value_string_text_token1,
  [8392] = 3,
    ACTIONS(784), 1,
      sym_comment,
    ACTIONS(1267), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1265), 5,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      anon_sym_BSLASH,
      aux_sym_value_string_text_token1,
  [8406] = 3,
    ACTIONS(784), 1,
      sym_comment,
    ACTIONS(1271), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1269), 5,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      anon_sym_BSLASH,
      aux_sym_value_string_text_token1,
  [8420] = 5,
    ACTIONS(784), 1,
      sym_comment,
    ACTIONS(1273), 1,
      anon_sym_BSLASH,
    ACTIONS(1276), 1,
      sym_filename_text,
    ACTIONS(1227), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE_LBRACE,
    STATE(252), 2,
      sym_filename_escaped_char,
      aux_sym_filename_content_repeat1,
  [8438] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(697), 1,
      anon_sym_base64_COMMA,
    ACTIONS(699), 1,
      anon_sym_hex_COMMA,
    ACTIONS(701), 1,
      anon_sym_DQUOTE,
    STATE(513), 3,
      sym_oneline_base64,
      sym_oneline_hex,
      sym_quoted_string,
  [8456] = 5,
    ACTIONS(784), 1,
      sym_comment,
    ACTIONS(1279), 1,
      anon_sym_BSLASH,
    ACTIONS(1282), 1,
      anon_sym_SLASH,
    ACTIONS(1284), 1,
      aux_sym_regex_text_token1,
    STATE(254), 3,
      sym_regex_text,
      sym_regex_escaped_char,
      aux_sym_regex_content_repeat1,
  [8474] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1289), 1,
      anon_sym_u,
    ACTIONS(1291), 1,
      anon_sym_POUND,
    ACTIONS(1287), 4,
      anon_sym_BSLASH,
      anon_sym_b,
      anon_sym_f,
      anon_sym_BQUOTE,
  [8490] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(754), 1,
      aux_sym_digit_token1,
    STATE(164), 2,
      sym_digit,
      aux_sym_integer_repeat1,
    ACTIONS(1293), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [8506] = 3,
    ACTIONS(1203), 1,
      sym_comment,
    STATE(259), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    ACTIONS(1201), 4,
      anon_sym_LF,
      sym_key_string_text,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
  [8520] = 3,
    ACTIONS(784), 1,
      sym_comment,
    ACTIONS(1297), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1295), 5,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      anon_sym_BSLASH,
      aux_sym_value_string_text_token1,
  [8534] = 5,
    ACTIONS(1183), 1,
      sym_comment,
    ACTIONS(1299), 1,
      sym_key_string_text,
    ACTIONS(1302), 1,
      anon_sym_BSLASH2,
    ACTIONS(1181), 2,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    STATE(259), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
  [8552] = 3,
    ACTIONS(784), 1,
      sym_comment,
    ACTIONS(1307), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1305), 5,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      anon_sym_BSLASH,
      aux_sym_value_string_text_token1,
  [8566] = 3,
    ACTIONS(784), 1,
      sym_comment,
    ACTIONS(1311), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1309), 5,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      anon_sym_BSLASH,
      aux_sym_value_string_text_token1,
  [8580] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(241), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    ACTIONS(1201), 4,
      anon_sym_COLON2,
      sym_key_string_text,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
  [8594] = 3,
    ACTIONS(784), 1,
      sym_comment,
    ACTIONS(1315), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1313), 5,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      anon_sym_BSLASH,
      aux_sym_value_string_text_token1,
  [8608] = 3,
    ACTIONS(784), 1,
      sym_comment,
    STATE(252), 2,
      sym_filename_escaped_char,
      aux_sym_filename_content_repeat1,
    ACTIONS(1251), 4,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      sym_filename_text,
      anon_sym_LBRACE_LBRACE,
  [8622] = 4,
    ACTIONS(61), 1,
      aux_sym_digit_token1,
    ACTIONS(1153), 1,
      anon_sym_LF,
    STATE(223), 2,
      sym_digit,
      aux_sym_integer_repeat1,
    ACTIONS(1317), 3,
      anon_sym_e,
      anon_sym_E,
      sym_comment,
  [8638] = 4,
    ACTIONS(784), 1,
      sym_comment,
    ACTIONS(1321), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(1323), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1319), 3,
      anon_sym_LF,
      anon_sym_BSLASH,
      aux_sym__multiline_string_text_token1,
  [8653] = 4,
    ACTIONS(1325), 1,
      anon_sym_LF,
    ACTIONS(1328), 1,
      sym_comment,
    STATE(267), 1,
      aux_sym__comment_or_new_line_repeat1,
    ACTIONS(97), 3,
      sym_key_string_text,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
  [8668] = 5,
    ACTIONS(7), 1,
      anon_sym_LF,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1331), 1,
      ts_builtin_sym_end,
    STATE(11), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(270), 2,
      sym__comment_or_new_line,
      aux_sym_hurl_file_repeat2,
  [8685] = 2,
    ACTIONS(1191), 1,
      anon_sym_LF,
    ACTIONS(1333), 5,
      aux_sym_digit_token1,
      anon_sym_DOT,
      anon_sym_e,
      anon_sym_E,
      sym_comment,
  [8696] = 5,
    ACTIONS(433), 1,
      ts_builtin_sym_end,
    ACTIONS(1335), 1,
      anon_sym_LF,
    ACTIONS(1338), 1,
      sym_comment,
    STATE(11), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(270), 2,
      sym__comment_or_new_line,
      aux_sym_hurl_file_repeat2,
  [8713] = 4,
    ACTIONS(1213), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1341), 1,
      aux_sym_value_string_text_token1,
    STATE(275), 1,
      aux_sym_value_string_text_repeat1,
    ACTIONS(1209), 3,
      anon_sym_LF,
      anon_sym_BSLASH,
      sym_comment,
  [8728] = 4,
    ACTIONS(784), 1,
      sym_comment,
    ACTIONS(923), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(1323), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1319), 3,
      anon_sym_LF,
      anon_sym_BSLASH,
      aux_sym__multiline_string_text_token1,
  [8743] = 3,
    ACTIONS(784), 1,
      sym_comment,
    ACTIONS(1345), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1343), 4,
      anon_sym_LF,
      anon_sym_BSLASH,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      aux_sym__multiline_string_text_token1,
  [8756] = 2,
    ACTIONS(1309), 1,
      sym_comment,
    ACTIONS(1311), 5,
      anon_sym_LF,
      anon_sym_COLON,
      sym_key_string_text,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
  [8767] = 4,
    ACTIONS(1179), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1347), 1,
      aux_sym_value_string_text_token1,
    STATE(275), 1,
      aux_sym_value_string_text_repeat1,
    ACTIONS(1174), 3,
      anon_sym_LF,
      anon_sym_BSLASH,
      sym_comment,
  [8782] = 5,
    ACTIONS(7), 1,
      anon_sym_LF,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(693), 1,
      ts_builtin_sym_end,
    STATE(11), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(270), 2,
      sym__comment_or_new_line,
      aux_sym_hurl_file_repeat2,
  [8799] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(754), 1,
      aux_sym_digit_token1,
    ACTIONS(1350), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(245), 2,
      sym_digit,
      aux_sym_integer_repeat1,
  [8814] = 3,
    ACTIONS(1352), 1,
      anon_sym_LF,
    ACTIONS(1356), 1,
      sym_comment,
    ACTIONS(1354), 4,
      anon_sym_COLON,
      sym_key_string_text,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
  [8827] = 4,
    ACTIONS(1358), 1,
      anon_sym_LF,
    ACTIONS(1360), 1,
      sym_comment,
    STATE(267), 1,
      aux_sym__comment_or_new_line_repeat1,
    ACTIONS(89), 3,
      sym_key_string_text,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
  [8842] = 3,
    ACTIONS(784), 1,
      sym_comment,
    ACTIONS(1364), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1362), 4,
      anon_sym_LF,
      anon_sym_BSLASH,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      aux_sym__multiline_string_text_token1,
  [8855] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1368), 1,
      anon_sym_COLON2,
    ACTIONS(1366), 4,
      anon_sym_COLON,
      sym_key_string_text,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
  [8868] = 4,
    ACTIONS(784), 1,
      sym_comment,
    ACTIONS(919), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(1323), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1319), 3,
      anon_sym_LF,
      anon_sym_BSLASH,
      aux_sym__multiline_string_text_token1,
  [8883] = 3,
    ACTIONS(784), 1,
      sym_comment,
    ACTIONS(1307), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1305), 4,
      anon_sym_LF,
      anon_sym_BSLASH,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      aux_sym__multiline_string_text_token1,
  [8896] = 3,
    ACTIONS(784), 1,
      sym_comment,
    ACTIONS(1311), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1309), 4,
      anon_sym_LF,
      anon_sym_BSLASH,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      aux_sym__multiline_string_text_token1,
  [8909] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(709), 1,
      aux_sym_digit_token1,
    ACTIONS(1370), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(294), 2,
      sym_digit,
      aux_sym_integer_repeat1,
  [8924] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1309), 1,
      anon_sym_COLON2,
    ACTIONS(1311), 4,
      anon_sym_COLON,
      sym_key_string_text,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
  [8937] = 3,
    ACTIONS(784), 1,
      sym_comment,
    ACTIONS(1374), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1372), 3,
      anon_sym_BSLASH,
      anon_sym_BQUOTE,
      aux_sym_oneline_string_text_token1,
  [8949] = 5,
    ACTIONS(15), 1,
      anon_sym_LF,
    ACTIONS(63), 1,
      sym_comment,
    STATE(25), 1,
      sym__comment_or_new_line,
    STATE(52), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(344), 1,
      aux_sym_multipart_form_data_section_repeat1,
  [8965] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(709), 1,
      aux_sym_digit_token1,
    STATE(430), 1,
      sym_integer,
    STATE(230), 2,
      sym_digit,
      aux_sym_integer_repeat1,
  [8979] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(709), 1,
      aux_sym_digit_token1,
    STATE(412), 1,
      sym_integer,
    STATE(230), 2,
      sym_digit,
      aux_sym_integer_repeat1,
  [8993] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1311), 4,
      anon_sym_COLON2,
      sym_key_string_text,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
  [9003] = 2,
    ACTIONS(784), 1,
      sym_comment,
    ACTIONS(1309), 4,
      anon_sym_DQUOTE,
      aux_sym_quoted_string_text_token1,
      anon_sym_BSLASH,
      anon_sym_LBRACE_LBRACE,
  [9013] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1376), 1,
      anon_sym_SEMI,
    ACTIONS(1378), 1,
      aux_sym_hexdigit_token1,
    STATE(298), 2,
      sym_hexdigit,
      aux_sym_oneline_hex_repeat1,
  [9027] = 4,
    ACTIONS(61), 1,
      aux_sym_digit_token1,
    ACTIONS(1249), 1,
      anon_sym_LF,
    ACTIONS(1380), 1,
      sym_comment,
    STATE(223), 2,
      sym_digit,
      aux_sym_integer_repeat1,
  [9041] = 2,
    ACTIONS(784), 1,
      sym_comment,
    ACTIONS(1305), 4,
      anon_sym_DQUOTE,
      aux_sym_quoted_string_text_token1,
      anon_sym_BSLASH,
      anon_sym_LBRACE_LBRACE,
  [9051] = 3,
    ACTIONS(784), 1,
      sym_comment,
    ACTIONS(1311), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1309), 3,
      anon_sym_BSLASH,
      anon_sym_BQUOTE,
      aux_sym_oneline_string_text_token1,
  [9063] = 3,
    ACTIONS(784), 1,
      sym_comment,
    ACTIONS(1311), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1309), 3,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
      aux_sym_json_string_text_token1,
  [9075] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1378), 1,
      aux_sym_hexdigit_token1,
    ACTIONS(1382), 1,
      anon_sym_SEMI,
    STATE(331), 2,
      sym_hexdigit,
      aux_sym_oneline_hex_repeat1,
  [9089] = 2,
    ACTIONS(1368), 1,
      sym_comment,
    ACTIONS(1366), 4,
      anon_sym_LF,
      sym_key_string_text,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
  [9099] = 2,
    ACTIONS(784), 1,
      sym_comment,
    ACTIONS(1309), 4,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      sym_filename_text,
      anon_sym_LBRACE_LBRACE,
  [9109] = 4,
    ACTIONS(61), 1,
      aux_sym_digit_token1,
    ACTIONS(1293), 1,
      anon_sym_LF,
    ACTIONS(1384), 1,
      sym_comment,
    STATE(223), 2,
      sym_digit,
      aux_sym_integer_repeat1,
  [9123] = 3,
    ACTIONS(784), 1,
      sym_comment,
    ACTIONS(1388), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1386), 3,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
      aux_sym_json_string_text_token1,
  [9135] = 3,
    ACTIONS(784), 1,
      sym_comment,
    ACTIONS(1392), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1390), 3,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
      aux_sym_json_string_text_token1,
  [9147] = 3,
    ACTIONS(784), 1,
      sym_comment,
    ACTIONS(1307), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1305), 3,
      anon_sym_BSLASH,
      anon_sym_BQUOTE,
      aux_sym_oneline_string_text_token1,
  [9159] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(742), 1,
      anon_sym_DQUOTE,
    STATE(476), 1,
      sym_json_key_value,
    STATE(496), 1,
      sym_json_string,
    STATE(497), 1,
      sym_json_key_string,
  [9175] = 4,
    ACTIONS(1241), 1,
      anon_sym_LF,
    ACTIONS(1394), 1,
      sym_comment,
    STATE(582), 1,
      sym_exponent,
    ACTIONS(1255), 2,
      anon_sym_e,
      anon_sym_E,
  [9189] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1396), 1,
      anon_sym_DQUOTE,
    ACTIONS(1398), 1,
      anon_sym_SLASH,
    STATE(95), 2,
      sym_quoted_string,
      sym_regex,
  [9203] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1400), 1,
      anon_sym_LT,
    ACTIONS(1402), 1,
      anon_sym_LT_QMARK,
    STATE(308), 2,
      sym_xml_prolog_tag,
      aux_sym_xml_repeat1,
  [9217] = 5,
    ACTIONS(1405), 1,
      anon_sym_LF,
    ACTIONS(1408), 1,
      sym_comment,
    STATE(152), 1,
      sym__comment_or_new_line,
    STATE(279), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(309), 1,
      aux_sym_query_string_params_section_repeat1,
  [9233] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1411), 4,
      anon_sym_COLON2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [9243] = 2,
    ACTIONS(784), 1,
      sym_comment,
    ACTIONS(1413), 4,
      anon_sym_DQUOTE,
      aux_sym_quoted_string_text_token1,
      anon_sym_BSLASH,
      anon_sym_LBRACE_LBRACE,
  [9253] = 2,
    ACTIONS(784), 1,
      sym_comment,
    ACTIONS(1415), 4,
      anon_sym_DQUOTE,
      aux_sym_quoted_string_text_token1,
      anon_sym_BSLASH,
      anon_sym_LBRACE_LBRACE,
  [9263] = 5,
    ACTIONS(15), 1,
      anon_sym_LF,
    ACTIONS(63), 1,
      sym_comment,
    STATE(46), 1,
      sym__comment_or_new_line,
    STATE(52), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(339), 1,
      aux_sym_query_string_params_section_repeat1,
  [9279] = 1,
    ACTIONS(1417), 5,
      anon_sym_LF,
      anon_sym_BSLASH,
      sym_filename_text,
      anon_sym_LBRACE_LBRACE,
      sym_comment,
  [9287] = 5,
    ACTIONS(15), 1,
      anon_sym_LF,
    ACTIONS(63), 1,
      sym_comment,
    STATE(46), 1,
      sym__comment_or_new_line,
    STATE(52), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(309), 1,
      aux_sym_query_string_params_section_repeat1,
  [9303] = 5,
    ACTIONS(15), 1,
      anon_sym_LF,
    ACTIONS(63), 1,
      sym_comment,
    STATE(45), 1,
      sym__comment_or_new_line,
    STATE(52), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(348), 1,
      aux_sym_query_string_params_section_repeat1,
  [9319] = 5,
    ACTIONS(15), 1,
      anon_sym_LF,
    ACTIONS(63), 1,
      sym_comment,
    STATE(45), 1,
      sym__comment_or_new_line,
    STATE(52), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(309), 1,
      aux_sym_query_string_params_section_repeat1,
  [9335] = 1,
    ACTIONS(1309), 5,
      anon_sym_LF,
      anon_sym_BSLASH,
      sym_filename_text,
      anon_sym_LBRACE_LBRACE,
      sym_comment,
  [9343] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(709), 1,
      aux_sym_digit_token1,
    STATE(428), 1,
      sym_integer,
    STATE(230), 2,
      sym_digit,
      aux_sym_integer_repeat1,
  [9357] = 5,
    ACTIONS(15), 1,
      anon_sym_LF,
    ACTIONS(63), 1,
      sym_comment,
    STATE(25), 1,
      sym__comment_or_new_line,
    STATE(52), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(338), 1,
      aux_sym_multipart_form_data_section_repeat1,
  [9373] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(701), 1,
      anon_sym_DQUOTE,
    ACTIONS(1419), 1,
      anon_sym_SLASH,
    STATE(202), 2,
      sym_quoted_string,
      sym_regex,
  [9387] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1366), 4,
      anon_sym_COLON2,
      sym_key_string_text,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
  [9397] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1421), 4,
      anon_sym_COLON2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [9407] = 3,
    ACTIONS(784), 1,
      sym_comment,
    ACTIONS(1425), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1423), 3,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
      aux_sym_json_string_text_token1,
  [9419] = 5,
    ACTIONS(15), 1,
      anon_sym_LF,
    ACTIONS(63), 1,
      sym_comment,
    STATE(43), 1,
      sym__comment_or_new_line,
    STATE(52), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(328), 1,
      aux_sym_query_string_params_section_repeat1,
  [9435] = 5,
    ACTIONS(15), 1,
      anon_sym_LF,
    ACTIONS(63), 1,
      sym_comment,
    STATE(43), 1,
      sym__comment_or_new_line,
    STATE(52), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(309), 1,
      aux_sym_query_string_params_section_repeat1,
  [9451] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1396), 1,
      anon_sym_DQUOTE,
    ACTIONS(1398), 1,
      anon_sym_SLASH,
    STATE(70), 2,
      sym_quoted_string,
      sym_regex,
  [9465] = 5,
    ACTIONS(15), 1,
      anon_sym_LF,
    ACTIONS(63), 1,
      sym_comment,
    STATE(47), 1,
      sym__comment_or_new_line,
    STATE(52), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(309), 1,
      aux_sym_query_string_params_section_repeat1,
  [9481] = 2,
    ACTIONS(784), 1,
      sym_comment,
    ACTIONS(1417), 4,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      sym_filename_text,
      anon_sym_LBRACE_LBRACE,
  [9491] = 2,
    ACTIONS(1429), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1427), 4,
      anon_sym_LF,
      anon_sym_BSLASH,
      aux_sym_value_string_text_token1,
      sym_comment,
  [9501] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1431), 1,
      anon_sym_SEMI,
    ACTIONS(1433), 1,
      aux_sym_hexdigit_token1,
    STATE(331), 2,
      sym_hexdigit,
      aux_sym_oneline_hex_repeat1,
  [9515] = 3,
    ACTIONS(784), 1,
      sym_comment,
    ACTIONS(1438), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1436), 3,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
      aux_sym_json_string_text_token1,
  [9527] = 3,
    ACTIONS(784), 1,
      sym_comment,
    ACTIONS(1442), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1440), 3,
      anon_sym_BSLASH,
      anon_sym_BQUOTE,
      aux_sym_oneline_string_text_token1,
  [9539] = 4,
    ACTIONS(15), 1,
      anon_sym_LF,
    ACTIONS(63), 1,
      sym_comment,
    STATE(52), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(2), 2,
      sym__comment_or_new_line,
      aux_sym_hurl_file_repeat2,
  [9553] = 3,
    ACTIONS(784), 1,
      sym_comment,
    ACTIONS(1446), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1444), 3,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
      aux_sym_json_string_text_token1,
  [9565] = 2,
    ACTIONS(1307), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1305), 4,
      anon_sym_LF,
      anon_sym_BSLASH,
      aux_sym_value_string_text_token1,
      sym_comment,
  [9575] = 2,
    ACTIONS(784), 1,
      sym_comment,
    ACTIONS(1448), 4,
      anon_sym_DQUOTE,
      aux_sym_quoted_string_text_token1,
      anon_sym_BSLASH,
      anon_sym_LBRACE_LBRACE,
  [9585] = 5,
    ACTIONS(1450), 1,
      anon_sym_LF,
    ACTIONS(1453), 1,
      sym_comment,
    STATE(138), 1,
      sym__comment_or_new_line,
    STATE(279), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(338), 1,
      aux_sym_multipart_form_data_section_repeat1,
  [9601] = 5,
    ACTIONS(15), 1,
      anon_sym_LF,
    ACTIONS(63), 1,
      sym_comment,
    STATE(40), 1,
      sym__comment_or_new_line,
    STATE(52), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(309), 1,
      aux_sym_query_string_params_section_repeat1,
  [9617] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(701), 1,
      anon_sym_DQUOTE,
    ACTIONS(1419), 1,
      anon_sym_SLASH,
    STATE(533), 2,
      sym_quoted_string,
      sym_regex,
  [9631] = 2,
    ACTIONS(784), 1,
      sym_comment,
    ACTIONS(1456), 4,
      anon_sym_DQUOTE,
      aux_sym_quoted_string_text_token1,
      anon_sym_BSLASH,
      anon_sym_LBRACE_LBRACE,
  [9641] = 3,
    ACTIONS(784), 1,
      sym_comment,
    ACTIONS(1460), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1458), 3,
      anon_sym_BSLASH,
      anon_sym_BQUOTE,
      aux_sym_oneline_string_text_token1,
  [9653] = 2,
    ACTIONS(1311), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1309), 4,
      anon_sym_LF,
      anon_sym_BSLASH,
      aux_sym_value_string_text_token1,
      sym_comment,
  [9663] = 5,
    ACTIONS(15), 1,
      anon_sym_LF,
    ACTIONS(63), 1,
      sym_comment,
    STATE(26), 1,
      sym__comment_or_new_line,
    STATE(52), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(338), 1,
      aux_sym_multipart_form_data_section_repeat1,
  [9679] = 2,
    ACTIONS(1315), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1313), 4,
      anon_sym_LF,
      anon_sym_BSLASH,
      aux_sym_value_string_text_token1,
      sym_comment,
  [9689] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(701), 1,
      anon_sym_DQUOTE,
    ACTIONS(1419), 1,
      anon_sym_SLASH,
    STATE(187), 2,
      sym_quoted_string,
      sym_regex,
  [9703] = 2,
    ACTIONS(1263), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1261), 4,
      anon_sym_LF,
      anon_sym_BSLASH,
      aux_sym_value_string_text_token1,
      sym_comment,
  [9713] = 5,
    ACTIONS(15), 1,
      anon_sym_LF,
    ACTIONS(63), 1,
      sym_comment,
    STATE(39), 1,
      sym__comment_or_new_line,
    STATE(52), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(309), 1,
      aux_sym_query_string_params_section_repeat1,
  [9729] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(709), 1,
      aux_sym_digit_token1,
    STATE(301), 2,
      sym_digit,
      aux_sym_integer_repeat1,
  [9740] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1462), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [9749] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1464), 1,
      aux_sym_variable_name_token1,
    STATE(127), 1,
      sym_variable_name,
    STATE(570), 1,
      sym_expr,
  [9762] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1464), 1,
      aux_sym_variable_name_token1,
    STATE(127), 1,
      sym_variable_name,
    STATE(569), 1,
      sym_expr,
  [9775] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1464), 1,
      aux_sym_variable_name_token1,
    STATE(127), 1,
      sym_variable_name,
    STATE(568), 1,
      sym_expr,
  [9788] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1464), 1,
      aux_sym_variable_name_token1,
    STATE(127), 1,
      sym_variable_name,
    STATE(567), 1,
      sym_expr,
  [9801] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1464), 1,
      aux_sym_variable_name_token1,
    STATE(127), 1,
      sym_variable_name,
    STATE(566), 1,
      sym_expr,
  [9814] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1464), 1,
      aux_sym_variable_name_token1,
    STATE(127), 1,
      sym_variable_name,
    STATE(565), 1,
      sym_expr,
  [9827] = 4,
    ACTIONS(15), 1,
      anon_sym_LF,
    ACTIONS(63), 1,
      sym_comment,
    STATE(52), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(55), 1,
      sym__comment_or_new_line,
  [9840] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1464), 1,
      aux_sym_variable_name_token1,
    STATE(127), 1,
      sym_variable_name,
    STATE(564), 1,
      sym_expr,
  [9853] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1464), 1,
      aux_sym_variable_name_token1,
    STATE(127), 1,
      sym_variable_name,
    STATE(562), 1,
      sym_expr,
  [9866] = 4,
    ACTIONS(1253), 1,
      anon_sym_DOT,
    ACTIONS(1466), 1,
      anon_sym_LF,
    ACTIONS(1468), 1,
      sym_comment,
    STATE(510), 1,
      sym_fraction,
  [9879] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1464), 1,
      aux_sym_variable_name_token1,
    STATE(127), 1,
      sym_variable_name,
    STATE(560), 1,
      sym_expr,
  [9892] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1464), 1,
      aux_sym_variable_name_token1,
    STATE(127), 1,
      sym_variable_name,
    STATE(557), 1,
      sym_expr,
  [9905] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1464), 1,
      aux_sym_variable_name_token1,
    STATE(127), 1,
      sym_variable_name,
    STATE(529), 1,
      sym_expr,
  [9918] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1470), 1,
      anon_sym_COMMA,
    ACTIONS(1472), 1,
      anon_sym_RBRACK,
    STATE(385), 1,
      aux_sym_json_array_repeat1,
  [9931] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1470), 1,
      anon_sym_COMMA,
    ACTIONS(1474), 1,
      anon_sym_RBRACK,
    STATE(385), 1,
      aux_sym_json_array_repeat1,
  [9944] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1476), 1,
      anon_sym_RBRACE,
    ACTIONS(1478), 1,
      anon_sym_COMMA,
    STATE(366), 1,
      aux_sym_json_object_repeat1,
  [9957] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1167), 1,
      anon_sym_COMMA,
    ACTIONS(1481), 1,
      anon_sym_RBRACE,
    STATE(366), 1,
      aux_sym_json_object_repeat1,
  [9970] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(424), 1,
      sym_boolean,
    ACTIONS(705), 2,
      anon_sym_true,
      anon_sym_false,
  [9981] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1167), 1,
      anon_sym_COMMA,
    ACTIONS(1483), 1,
      anon_sym_RBRACE,
    STATE(366), 1,
      aux_sym_json_object_repeat1,
  [9994] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(426), 1,
      sym_boolean,
    ACTIONS(705), 2,
      anon_sym_true,
      anon_sym_false,
  [10005] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1470), 1,
      anon_sym_COMMA,
    ACTIONS(1485), 1,
      anon_sym_RBRACK,
    STATE(365), 1,
      aux_sym_json_array_repeat1,
  [10018] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1167), 1,
      anon_sym_COMMA,
    ACTIONS(1487), 1,
      anon_sym_RBRACE,
    STATE(366), 1,
      aux_sym_json_object_repeat1,
  [10031] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1167), 1,
      anon_sym_COMMA,
    ACTIONS(1487), 1,
      anon_sym_RBRACE,
    STATE(367), 1,
      aux_sym_json_object_repeat1,
  [10044] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1491), 1,
      anon_sym_POUND,
    ACTIONS(1489), 2,
      anon_sym_SEMI,
      aux_sym_filename_escaped_char_token1,
  [10055] = 4,
    ACTIONS(7), 1,
      anon_sym_LF,
    ACTIONS(11), 1,
      sym_comment,
    STATE(11), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(50), 1,
      sym__comment_or_new_line,
  [10068] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1495), 1,
      anon_sym_POUND,
    ACTIONS(1493), 2,
      anon_sym_SEMI,
      aux_sym_filename_escaped_char_token1,
  [10079] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(431), 1,
      sym_boolean,
    ACTIONS(705), 2,
      anon_sym_true,
      anon_sym_false,
  [10090] = 4,
    ACTIONS(756), 1,
      anon_sym_LF,
    ACTIONS(772), 1,
      sym_comment,
    STATE(65), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(68), 1,
      sym__comment_or_new_line,
  [10103] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1464), 1,
      aux_sym_variable_name_token1,
    STATE(427), 1,
      sym_variable_definition,
    STATE(575), 1,
      sym_variable_name,
  [10116] = 4,
    ACTIONS(1497), 1,
      anon_sym_LF,
    ACTIONS(1499), 1,
      aux_sym_file_contenttype_token1,
    ACTIONS(1501), 1,
      sym_comment,
    STATE(552), 1,
      sym_file_contenttype,
  [10129] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(420), 1,
      sym_boolean,
    ACTIONS(705), 2,
      anon_sym_true,
      anon_sym_false,
  [10140] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(419), 1,
      sym_boolean,
    ACTIONS(705), 2,
      anon_sym_true,
      anon_sym_false,
  [10151] = 4,
    ACTIONS(756), 1,
      anon_sym_LF,
    ACTIONS(772), 1,
      sym_comment,
    STATE(9), 1,
      sym__comment_or_new_line,
    STATE(65), 1,
      aux_sym__comment_or_new_line_repeat1,
  [10164] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1311), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [10173] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1503), 1,
      anon_sym_COMMA,
    ACTIONS(1506), 1,
      anon_sym_RBRACK,
    STATE(385), 1,
      aux_sym_json_array_repeat1,
  [10186] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1425), 3,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      aux_sym_hexdigit_token1,
  [10195] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1167), 1,
      anon_sym_COMMA,
    ACTIONS(1508), 1,
      anon_sym_RBRACE,
    STATE(369), 1,
      aux_sym_json_object_repeat1,
  [10208] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1167), 1,
      anon_sym_COMMA,
    ACTIONS(1508), 1,
      anon_sym_RBRACE,
    STATE(366), 1,
      aux_sym_json_object_repeat1,
  [10221] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1470), 1,
      anon_sym_COMMA,
    ACTIONS(1510), 1,
      anon_sym_RBRACK,
    STATE(364), 1,
      aux_sym_json_array_repeat1,
  [10234] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(709), 1,
      aux_sym_digit_token1,
    STATE(265), 2,
      sym_digit,
      aux_sym_integer_repeat1,
  [10245] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1512), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [10254] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1514), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [10263] = 4,
    ACTIONS(756), 1,
      anon_sym_LF,
    ACTIONS(772), 1,
      sym_comment,
    STATE(56), 1,
      sym__comment_or_new_line,
    STATE(65), 1,
      aux_sym__comment_or_new_line_repeat1,
  [10276] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1516), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [10285] = 4,
    ACTIONS(1253), 1,
      anon_sym_DOT,
    ACTIONS(1518), 1,
      anon_sym_LF,
    ACTIONS(1520), 1,
      sym_comment,
    STATE(510), 1,
      sym_fraction,
  [10298] = 4,
    ACTIONS(7), 1,
      anon_sym_LF,
    ACTIONS(11), 1,
      sym_comment,
    STATE(11), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(16), 1,
      sym__comment_or_new_line,
  [10311] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(754), 1,
      aux_sym_digit_token1,
    STATE(256), 2,
      sym_digit,
      aux_sym_integer_repeat1,
  [10322] = 4,
    ACTIONS(1253), 1,
      anon_sym_DOT,
    ACTIONS(1522), 1,
      anon_sym_LF,
    ACTIONS(1524), 1,
      sym_comment,
    STATE(510), 1,
      sym_fraction,
  [10335] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1526), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [10344] = 4,
    ACTIONS(1253), 1,
      anon_sym_DOT,
    ACTIONS(1528), 1,
      anon_sym_LF,
    ACTIONS(1530), 1,
      sym_comment,
    STATE(510), 1,
      sym_fraction,
  [10357] = 4,
    ACTIONS(7), 1,
      anon_sym_LF,
    ACTIONS(11), 1,
      sym_comment,
    STATE(11), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(60), 1,
      sym__comment_or_new_line,
  [10370] = 4,
    ACTIONS(1253), 1,
      anon_sym_DOT,
    ACTIONS(1532), 1,
      anon_sym_LF,
    ACTIONS(1534), 1,
      sym_comment,
    STATE(510), 1,
      sym_fraction,
  [10383] = 4,
    ACTIONS(7), 1,
      anon_sym_LF,
    ACTIONS(11), 1,
      sym_comment,
    STATE(11), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(15), 1,
      sym__comment_or_new_line,
  [10396] = 4,
    ACTIONS(1253), 1,
      anon_sym_DOT,
    ACTIONS(1536), 1,
      anon_sym_LF,
    ACTIONS(1538), 1,
      sym_comment,
    STATE(510), 1,
      sym_fraction,
  [10409] = 2,
    ACTIONS(784), 1,
      sym_comment,
    ACTIONS(1540), 3,
      anon_sym_BSLASH,
      anon_sym_SLASH,
      aux_sym_regex_text_token1,
  [10418] = 4,
    ACTIONS(1542), 1,
      anon_sym_LF,
    ACTIONS(1544), 1,
      sym_comment,
    STATE(133), 1,
      sym__comment_or_new_line,
    STATE(279), 1,
      aux_sym__comment_or_new_line_repeat1,
  [10431] = 4,
    ACTIONS(1542), 1,
      anon_sym_LF,
    ACTIONS(1544), 1,
      sym_comment,
    STATE(130), 1,
      sym__comment_or_new_line,
    STATE(279), 1,
      aux_sym__comment_or_new_line_repeat1,
  [10444] = 4,
    ACTIONS(1542), 1,
      anon_sym_LF,
    ACTIONS(1544), 1,
      sym_comment,
    STATE(132), 1,
      sym__comment_or_new_line,
    STATE(279), 1,
      aux_sym__comment_or_new_line_repeat1,
  [10457] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1241), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [10466] = 4,
    ACTIONS(1542), 1,
      anon_sym_LF,
    ACTIONS(1544), 1,
      sym_comment,
    STATE(134), 1,
      sym__comment_or_new_line,
    STATE(279), 1,
      aux_sym__comment_or_new_line_repeat1,
  [10479] = 4,
    ACTIONS(7), 1,
      anon_sym_LF,
    ACTIONS(11), 1,
      sym_comment,
    STATE(11), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(51), 1,
      sym__comment_or_new_line,
  [10492] = 4,
    ACTIONS(7), 1,
      anon_sym_LF,
    ACTIONS(11), 1,
      sym_comment,
    STATE(11), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(38), 1,
      sym__comment_or_new_line,
  [10505] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(754), 1,
      aux_sym_digit_token1,
    STATE(219), 2,
      sym_digit,
      aux_sym_integer_repeat1,
  [10516] = 4,
    ACTIONS(1542), 1,
      anon_sym_LF,
    ACTIONS(1544), 1,
      sym_comment,
    STATE(279), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(524), 1,
      sym__comment_or_new_line,
  [10529] = 4,
    ACTIONS(1499), 1,
      aux_sym_file_contenttype_token1,
    ACTIONS(1546), 1,
      anon_sym_LF,
    ACTIONS(1548), 1,
      sym_comment,
    STATE(579), 1,
      sym_file_contenttype,
  [10542] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1550), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [10551] = 4,
    ACTIONS(1542), 1,
      anon_sym_LF,
    ACTIONS(1544), 1,
      sym_comment,
    STATE(151), 1,
      sym__comment_or_new_line,
    STATE(279), 1,
      aux_sym__comment_or_new_line_repeat1,
  [10564] = 4,
    ACTIONS(1253), 1,
      anon_sym_DOT,
    ACTIONS(1552), 1,
      anon_sym_LF,
    ACTIONS(1554), 1,
      sym_comment,
    STATE(510), 1,
      sym_fraction,
  [10577] = 4,
    ACTIONS(7), 1,
      anon_sym_LF,
    ACTIONS(11), 1,
      sym_comment,
    STATE(11), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(33), 1,
      sym__comment_or_new_line,
  [10590] = 4,
    ACTIONS(7), 1,
      anon_sym_LF,
    ACTIONS(11), 1,
      sym_comment,
    STATE(11), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(36), 1,
      sym__comment_or_new_line,
  [10603] = 2,
    ACTIONS(784), 1,
      sym_comment,
    ACTIONS(1556), 3,
      anon_sym_BSLASH,
      anon_sym_SLASH,
      aux_sym_regex_text_token1,
  [10612] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1464), 1,
      aux_sym_variable_name_token1,
    STATE(127), 1,
      sym_variable_name,
    STATE(585), 1,
      sym_expr,
  [10625] = 4,
    ACTIONS(7), 1,
      anon_sym_LF,
    ACTIONS(11), 1,
      sym_comment,
    STATE(11), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(32), 1,
      sym__comment_or_new_line,
  [10638] = 4,
    ACTIONS(7), 1,
      anon_sym_LF,
    ACTIONS(11), 1,
      sym_comment,
    STATE(11), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(31), 1,
      sym__comment_or_new_line,
  [10651] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(383), 1,
      sym_status,
    ACTIONS(1558), 2,
      aux_sym_status_token1,
      anon_sym_STAR,
  [10662] = 4,
    ACTIONS(7), 1,
      anon_sym_LF,
    ACTIONS(11), 1,
      sym_comment,
    STATE(11), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(30), 1,
      sym__comment_or_new_line,
  [10675] = 4,
    ACTIONS(7), 1,
      anon_sym_LF,
    ACTIONS(11), 1,
      sym_comment,
    STATE(11), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(37), 1,
      sym__comment_or_new_line,
  [10688] = 4,
    ACTIONS(7), 1,
      anon_sym_LF,
    ACTIONS(11), 1,
      sym_comment,
    STATE(11), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(29), 1,
      sym__comment_or_new_line,
  [10701] = 4,
    ACTIONS(7), 1,
      anon_sym_LF,
    ACTIONS(11), 1,
      sym_comment,
    STATE(11), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(106), 1,
      sym__comment_or_new_line,
  [10714] = 4,
    ACTIONS(7), 1,
      anon_sym_LF,
    ACTIONS(11), 1,
      sym_comment,
    STATE(11), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(27), 1,
      sym__comment_or_new_line,
  [10727] = 4,
    ACTIONS(7), 1,
      anon_sym_LF,
    ACTIONS(11), 1,
      sym_comment,
    STATE(11), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(28), 1,
      sym__comment_or_new_line,
  [10740] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1560), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [10749] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1562), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [10758] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1352), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [10767] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1564), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [10775] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1378), 1,
      aux_sym_hexdigit_token1,
    STATE(561), 1,
      sym_hexdigit,
  [10785] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1378), 1,
      aux_sym_hexdigit_token1,
    STATE(441), 1,
      sym_hexdigit,
  [10795] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1378), 1,
      aux_sym_hexdigit_token1,
    STATE(442), 1,
      sym_hexdigit,
  [10805] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1378), 1,
      aux_sym_hexdigit_token1,
    STATE(443), 1,
      sym_hexdigit,
  [10815] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1378), 1,
      aux_sym_hexdigit_token1,
    STATE(444), 1,
      sym_hexdigit,
  [10825] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1378), 1,
      aux_sym_hexdigit_token1,
    STATE(445), 1,
      sym_hexdigit,
  [10835] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1378), 1,
      aux_sym_hexdigit_token1,
    STATE(447), 1,
      sym_hexdigit,
  [10845] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1378), 1,
      aux_sym_hexdigit_token1,
    STATE(448), 1,
      sym_hexdigit,
  [10855] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1378), 1,
      aux_sym_hexdigit_token1,
    STATE(449), 1,
      sym_hexdigit,
  [10865] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1378), 1,
      aux_sym_hexdigit_token1,
    STATE(451), 1,
      sym_hexdigit,
  [10875] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1378), 1,
      aux_sym_hexdigit_token1,
    STATE(466), 1,
      sym_hexdigit,
  [10885] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1378), 1,
      aux_sym_hexdigit_token1,
    STATE(436), 1,
      sym_hexdigit,
  [10895] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1378), 1,
      aux_sym_hexdigit_token1,
    STATE(453), 1,
      sym_hexdigit,
  [10905] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1378), 1,
      aux_sym_hexdigit_token1,
    STATE(454), 1,
      sym_hexdigit,
  [10915] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1378), 1,
      aux_sym_hexdigit_token1,
    STATE(477), 1,
      sym_hexdigit,
  [10925] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1378), 1,
      aux_sym_hexdigit_token1,
    STATE(563), 1,
      sym_hexdigit,
  [10935] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1566), 1,
      anon_sym_LBRACE,
    STATE(273), 1,
      sym_unicode_char,
  [10945] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1378), 1,
      aux_sym_hexdigit_token1,
    STATE(520), 1,
      sym_hexdigit,
  [10955] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1378), 1,
      aux_sym_hexdigit_token1,
    STATE(556), 1,
      sym_hexdigit,
  [10965] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1378), 1,
      aux_sym_hexdigit_token1,
    STATE(478), 1,
      sym_hexdigit,
  [10975] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(701), 1,
      anon_sym_DQUOTE,
    STATE(189), 1,
      sym_quoted_string,
  [10985] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(701), 1,
      anon_sym_DQUOTE,
    STATE(190), 1,
      sym_quoted_string,
  [10995] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(701), 1,
      anon_sym_DQUOTE,
    STATE(192), 1,
      sym_quoted_string,
  [11005] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(701), 1,
      anon_sym_DQUOTE,
    STATE(197), 1,
      sym_quoted_string,
  [11015] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(701), 1,
      anon_sym_DQUOTE,
    STATE(180), 1,
      sym_quoted_string,
  [11025] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1568), 1,
      anon_sym_LBRACE,
    STATE(287), 1,
      sym_unicode_char,
  [11035] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1570), 1,
      anon_sym_COLON,
    ACTIONS(1572), 1,
      anon_sym_COLON2,
  [11045] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1574), 1,
      anon_sym_file_COMMA,
    STATE(414), 1,
      sym_file_value,
  [11055] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1576), 1,
      anon_sym_LBRACE,
    STATE(345), 1,
      sym_unicode_char,
  [11065] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1578), 1,
      anon_sym_LBRACE,
    STATE(263), 1,
      sym_unicode_char,
  [11075] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1378), 1,
      aux_sym_hexdigit_token1,
    STATE(475), 1,
      sym_hexdigit,
  [11085] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(701), 1,
      anon_sym_DQUOTE,
    STATE(518), 1,
      sym_quoted_string,
  [11095] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1506), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [11103] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1580), 2,
      aux_sym_status_token1,
      anon_sym_STAR,
  [11111] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1396), 1,
      anon_sym_DQUOTE,
    STATE(86), 1,
      sym_quoted_string,
  [11121] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1396), 1,
      anon_sym_DQUOTE,
    STATE(88), 1,
      sym_quoted_string,
  [11131] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1396), 1,
      anon_sym_DQUOTE,
    STATE(91), 1,
      sym_quoted_string,
  [11141] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1396), 1,
      anon_sym_DQUOTE,
    STATE(92), 1,
      sym_quoted_string,
  [11151] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1582), 1,
      anon_sym_LBRACE,
    STATE(337), 1,
      sym_unicode_char,
  [11161] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1378), 1,
      aux_sym_hexdigit_token1,
    STATE(480), 1,
      sym_hexdigit,
  [11171] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1476), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [11179] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1378), 1,
      aux_sym_hexdigit_token1,
    STATE(526), 1,
      sym_hexdigit,
  [11189] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1378), 1,
      aux_sym_hexdigit_token1,
    STATE(450), 1,
      sym_hexdigit,
  [11199] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1269), 1,
      anon_sym_LT,
    ACTIONS(1271), 1,
      anon_sym_LT_QMARK,
  [11209] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1584), 1,
      aux_sym_hexdigit_token1,
    STATE(335), 1,
      sym_hexdigit,
  [11219] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1396), 1,
      anon_sym_DQUOTE,
    STATE(93), 1,
      sym_quoted_string,
  [11229] = 2,
    ACTIONS(784), 1,
      sym_comment,
    ACTIONS(1586), 1,
      aux_sym_regex_escaped_char_token1,
  [11236] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1588), 1,
      anon_sym_COLON2,
  [11243] = 2,
    ACTIONS(1590), 1,
      anon_sym_LF,
    ACTIONS(1592), 1,
      sym_comment,
  [11250] = 2,
    ACTIONS(1594), 1,
      anon_sym_LF,
    ACTIONS(1596), 1,
      sym_comment,
  [11257] = 2,
    ACTIONS(1598), 1,
      anon_sym_LF,
    ACTIONS(1600), 1,
      sym_comment,
  [11264] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1602), 1,
      aux_sym_key_string_escaped_char_token1,
  [11271] = 2,
    ACTIONS(1241), 1,
      anon_sym_LF,
    ACTIONS(1394), 1,
      sym_comment,
  [11278] = 2,
    ACTIONS(784), 1,
      sym_comment,
    ACTIONS(1604), 1,
      aux_sym_xml_prolog_tag_token1,
  [11285] = 2,
    ACTIONS(1518), 1,
      anon_sym_LF,
    ACTIONS(1520), 1,
      sym_comment,
  [11292] = 2,
    ACTIONS(1606), 1,
      anon_sym_LF,
    ACTIONS(1608), 1,
      sym_comment,
  [11299] = 2,
    ACTIONS(1245), 1,
      sym_comment,
    ACTIONS(1247), 1,
      anon_sym_LF,
  [11306] = 2,
    ACTIONS(784), 1,
      sym_comment,
    ACTIONS(1610), 1,
      aux_sym_xml_close_tag_token1,
  [11313] = 2,
    ACTIONS(1612), 1,
      anon_sym_LF,
    ACTIONS(1614), 1,
      sym_comment,
  [11320] = 2,
    ACTIONS(1522), 1,
      anon_sym_LF,
    ACTIONS(1524), 1,
      sym_comment,
  [11327] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1616), 1,
      anon_sym_COLON2,
  [11334] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1618), 1,
      anon_sym_COLON2,
  [11341] = 2,
    ACTIONS(1528), 1,
      anon_sym_LF,
    ACTIONS(1530), 1,
      sym_comment,
  [11348] = 2,
    ACTIONS(1532), 1,
      anon_sym_LF,
    ACTIONS(1534), 1,
      sym_comment,
  [11355] = 2,
    ACTIONS(1550), 1,
      anon_sym_LF,
    ACTIONS(1620), 1,
      sym_comment,
  [11362] = 2,
    ACTIONS(784), 1,
      sym_comment,
    ACTIONS(1622), 1,
      anon_sym_LF,
  [11369] = 2,
    ACTIONS(784), 1,
      sym_comment,
    ACTIONS(1624), 1,
      anon_sym_LF,
  [11376] = 2,
    ACTIONS(784), 1,
      sym_comment,
    ACTIONS(1626), 1,
      aux_sym_oneline_string_text_token2,
  [11383] = 2,
    ACTIONS(1352), 1,
      anon_sym_LF,
    ACTIONS(1356), 1,
      sym_comment,
  [11390] = 2,
    ACTIONS(1628), 1,
      anon_sym_LF,
    ACTIONS(1630), 1,
      sym_comment,
  [11397] = 2,
    ACTIONS(1536), 1,
      anon_sym_LF,
    ACTIONS(1538), 1,
      sym_comment,
  [11404] = 2,
    ACTIONS(1632), 1,
      anon_sym_LF,
    ACTIONS(1634), 1,
      sym_comment,
  [11411] = 2,
    ACTIONS(784), 1,
      sym_comment,
    ACTIONS(1636), 1,
      aux_sym_oneline_base64_token1,
  [11418] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1638), 1,
      anon_sym_COLON2,
  [11425] = 2,
    ACTIONS(1640), 1,
      anon_sym_LF,
    ACTIONS(1642), 1,
      sym_comment,
  [11432] = 2,
    ACTIONS(1421), 1,
      anon_sym_LF,
    ACTIONS(1644), 1,
      sym_comment,
  [11439] = 2,
    ACTIONS(1646), 1,
      anon_sym_LF,
    ACTIONS(1648), 1,
      sym_comment,
  [11446] = 2,
    ACTIONS(1650), 1,
      anon_sym_LF,
    ACTIONS(1652), 1,
      sym_comment,
  [11453] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1654), 1,
      ts_builtin_sym_end,
  [11460] = 2,
    ACTIONS(1512), 1,
      anon_sym_LF,
    ACTIONS(1656), 1,
      sym_comment,
  [11467] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1570), 1,
      anon_sym_COLON,
  [11474] = 2,
    ACTIONS(1658), 1,
      anon_sym_LF,
    ACTIONS(1660), 1,
      sym_comment,
  [11481] = 2,
    ACTIONS(1662), 1,
      anon_sym_LF,
    ACTIONS(1664), 1,
      sym_comment,
  [11488] = 2,
    ACTIONS(1666), 1,
      anon_sym_LF,
    ACTIONS(1668), 1,
      sym_comment,
  [11495] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1670), 1,
      anon_sym_RBRACE,
  [11502] = 2,
    ACTIONS(1672), 1,
      anon_sym_LF,
    ACTIONS(1674), 1,
      sym_comment,
  [11509] = 2,
    ACTIONS(1676), 1,
      anon_sym_LF,
    ACTIONS(1678), 1,
      sym_comment,
  [11516] = 2,
    ACTIONS(1462), 1,
      anon_sym_LF,
    ACTIONS(1680), 1,
      sym_comment,
  [11523] = 2,
    ACTIONS(1682), 1,
      anon_sym_LF,
    ACTIONS(1684), 1,
      sym_comment,
  [11530] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1686), 1,
      anon_sym_SEMI,
  [11537] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1688), 1,
      anon_sym_RBRACE,
  [11544] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1690), 1,
      anon_sym_SEMI,
  [11551] = 2,
    ACTIONS(1692), 1,
      anon_sym_LF,
    ACTIONS(1694), 1,
      sym_comment,
  [11558] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1696), 1,
      anon_sym_RBRACE_RBRACE,
  [11565] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1698), 1,
      anon_sym_QMARK_GT,
  [11572] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1700), 1,
      aux_sym_key_string_escaped_char_token1,
  [11579] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1702), 1,
      anon_sym_GT,
  [11586] = 2,
    ACTIONS(1704), 1,
      anon_sym_LF,
    ACTIONS(1706), 1,
      sym_comment,
  [11593] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1708), 1,
      anon_sym_SEMI,
  [11600] = 2,
    ACTIONS(1710), 1,
      anon_sym_LF,
    ACTIONS(1712), 1,
      sym_comment,
  [11607] = 2,
    ACTIONS(1714), 1,
      anon_sym_LF,
    ACTIONS(1716), 1,
      sym_comment,
  [11614] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1718), 1,
      anon_sym_QMARK_GT,
  [11621] = 2,
    ACTIONS(1720), 1,
      anon_sym_LF,
    ACTIONS(1722), 1,
      sym_comment,
  [11628] = 2,
    ACTIONS(1724), 1,
      anon_sym_LF,
    ACTIONS(1726), 1,
      sym_comment,
  [11635] = 2,
    ACTIONS(1526), 1,
      anon_sym_LF,
    ACTIONS(1728), 1,
      sym_comment,
  [11642] = 2,
    ACTIONS(784), 1,
      sym_comment,
    ACTIONS(1730), 1,
      aux_sym_xml_open_tag_token1,
  [11649] = 2,
    ACTIONS(1295), 1,
      sym_comment,
    ACTIONS(1297), 1,
      anon_sym_LF,
  [11656] = 2,
    ACTIONS(1732), 1,
      anon_sym_LF,
    ACTIONS(1734), 1,
      sym_comment,
  [11663] = 2,
    ACTIONS(1736), 1,
      anon_sym_LF,
    ACTIONS(1738), 1,
      sym_comment,
  [11670] = 2,
    ACTIONS(1514), 1,
      anon_sym_LF,
    ACTIONS(1740), 1,
      sym_comment,
  [11677] = 2,
    ACTIONS(1742), 1,
      anon_sym_LF,
    ACTIONS(1744), 1,
      sym_comment,
  [11684] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1746), 1,
      anon_sym_GT,
  [11691] = 2,
    ACTIONS(1748), 1,
      anon_sym_LF,
    ACTIONS(1750), 1,
      sym_comment,
  [11698] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1752), 1,
      anon_sym_SLASH,
  [11705] = 2,
    ACTIONS(1754), 1,
      anon_sym_LF,
    ACTIONS(1756), 1,
      sym_comment,
  [11712] = 2,
    ACTIONS(1758), 1,
      anon_sym_LF,
    ACTIONS(1760), 1,
      sym_comment,
  [11719] = 2,
    ACTIONS(1546), 1,
      anon_sym_LF,
    ACTIONS(1548), 1,
      sym_comment,
  [11726] = 2,
    ACTIONS(1762), 1,
      anon_sym_LF,
    ACTIONS(1764), 1,
      sym_comment,
  [11733] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1766), 1,
      anon_sym_SLASH,
  [11740] = 2,
    ACTIONS(1768), 1,
      anon_sym_LF,
    ACTIONS(1770), 1,
      sym_comment,
  [11747] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1772), 1,
      anon_sym_RBRACE,
  [11754] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1774), 1,
      anon_sym_RBRACE_RBRACE,
  [11761] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1776), 1,
      aux_sym_key_string_escaped_char_token1,
  [11768] = 2,
    ACTIONS(1778), 1,
      anon_sym_LF,
    ACTIONS(1780), 1,
      sym_comment,
  [11775] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1782), 1,
      anon_sym_RBRACE_RBRACE,
  [11782] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1784), 1,
      anon_sym_RBRACE,
  [11789] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1786), 1,
      anon_sym_RBRACE_RBRACE,
  [11796] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1788), 1,
      anon_sym_RBRACE,
  [11803] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1790), 1,
      anon_sym_RBRACE_RBRACE,
  [11810] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1792), 1,
      anon_sym_RBRACE_RBRACE,
  [11817] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1794), 1,
      anon_sym_RBRACE_RBRACE,
  [11824] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1796), 1,
      anon_sym_RBRACE_RBRACE,
  [11831] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1798), 1,
      anon_sym_RBRACE_RBRACE,
  [11838] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1800), 1,
      anon_sym_RBRACE_RBRACE,
  [11845] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1802), 1,
      anon_sym_RBRACE_RBRACE,
  [11852] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1804), 1,
      anon_sym_GT,
  [11859] = 2,
    ACTIONS(784), 1,
      sym_comment,
    ACTIONS(1806), 1,
      aux_sym_xml_prolog_tag_token1,
  [11866] = 2,
    ACTIONS(1552), 1,
      anon_sym_LF,
    ACTIONS(1554), 1,
      sym_comment,
  [11873] = 2,
    ACTIONS(784), 1,
      sym_comment,
    ACTIONS(1808), 1,
      aux_sym_xml_close_tag_token1,
  [11880] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1810), 1,
      anon_sym_EQ,
  [11887] = 2,
    ACTIONS(1265), 1,
      sym_comment,
    ACTIONS(1267), 1,
      anon_sym_LF,
  [11894] = 2,
    ACTIONS(1812), 1,
      anon_sym_LF,
    ACTIONS(1814), 1,
      sym_comment,
  [11901] = 2,
    ACTIONS(1466), 1,
      anon_sym_LF,
    ACTIONS(1468), 1,
      sym_comment,
  [11908] = 2,
    ACTIONS(1816), 1,
      anon_sym_LF,
    ACTIONS(1818), 1,
      sym_comment,
  [11915] = 2,
    ACTIONS(784), 1,
      sym_comment,
    ACTIONS(1820), 1,
      aux_sym_variable_name_token2,
  [11922] = 2,
    ACTIONS(1411), 1,
      anon_sym_LF,
    ACTIONS(1822), 1,
      sym_comment,
  [11929] = 2,
    ACTIONS(1516), 1,
      anon_sym_LF,
    ACTIONS(1824), 1,
      sym_comment,
  [11936] = 2,
    ACTIONS(1562), 1,
      anon_sym_LF,
    ACTIONS(1826), 1,
      sym_comment,
  [11943] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1828), 1,
      anon_sym_COLON2,
  [11950] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1830), 1,
      anon_sym_RBRACE_RBRACE,
  [11957] = 2,
    ACTIONS(1560), 1,
      anon_sym_LF,
    ACTIONS(1832), 1,
      sym_comment,
  [11964] = 2,
    ACTIONS(1834), 1,
      anon_sym_LF,
    ACTIONS(1836), 1,
      sym_comment,
  [11971] = 2,
    ACTIONS(1838), 1,
      anon_sym_LF,
    ACTIONS(1840), 1,
      sym_comment,
  [11978] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1842), 1,
      anon_sym_COLON2,
  [11985] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1844), 1,
      anon_sym_COLON2,
  [11992] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1846), 1,
      anon_sym_COLON2,
  [11999] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1848), 1,
      anon_sym_COLON2,
  [12006] = 2,
    ACTIONS(1850), 1,
      anon_sym_LF,
    ACTIONS(1852), 1,
      sym_comment,
  [12013] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1854), 1,
      anon_sym_COLON2,
  [12020] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1856), 1,
      anon_sym_COLON2,
  [12027] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1858), 1,
      anon_sym_COLON2,
  [12034] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1860), 1,
      anon_sym_COLON2,
  [12041] = 2,
    ACTIONS(1862), 1,
      anon_sym_LF,
    ACTIONS(1864), 1,
      sym_comment,
  [12048] = 2,
    ACTIONS(1866), 1,
      anon_sym_LF,
    ACTIONS(1868), 1,
      sym_comment,
  [12055] = 2,
    ACTIONS(1870), 1,
      anon_sym_LF,
    ACTIONS(1872), 1,
      sym_comment,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(19)] = 0,
  [SMALL_STATE(20)] = 122,
  [SMALL_STATE(21)] = 244,
  [SMALL_STATE(22)] = 367,
  [SMALL_STATE(23)] = 490,
  [SMALL_STATE(24)] = 567,
  [SMALL_STATE(25)] = 644,
  [SMALL_STATE(26)] = 721,
  [SMALL_STATE(27)] = 798,
  [SMALL_STATE(28)] = 858,
  [SMALL_STATE(29)] = 918,
  [SMALL_STATE(30)] = 978,
  [SMALL_STATE(31)] = 1038,
  [SMALL_STATE(32)] = 1098,
  [SMALL_STATE(33)] = 1158,
  [SMALL_STATE(34)] = 1218,
  [SMALL_STATE(35)] = 1278,
  [SMALL_STATE(36)] = 1338,
  [SMALL_STATE(37)] = 1398,
  [SMALL_STATE(38)] = 1458,
  [SMALL_STATE(39)] = 1518,
  [SMALL_STATE(40)] = 1591,
  [SMALL_STATE(41)] = 1664,
  [SMALL_STATE(42)] = 1737,
  [SMALL_STATE(43)] = 1810,
  [SMALL_STATE(44)] = 1883,
  [SMALL_STATE(45)] = 1956,
  [SMALL_STATE(46)] = 2029,
  [SMALL_STATE(47)] = 2102,
  [SMALL_STATE(48)] = 2175,
  [SMALL_STATE(49)] = 2249,
  [SMALL_STATE(50)] = 2312,
  [SMALL_STATE(51)] = 2366,
  [SMALL_STATE(52)] = 2420,
  [SMALL_STATE(53)] = 2479,
  [SMALL_STATE(54)] = 2538,
  [SMALL_STATE(55)] = 2606,
  [SMALL_STATE(56)] = 2658,
  [SMALL_STATE(57)] = 2723,
  [SMALL_STATE(58)] = 2788,
  [SMALL_STATE(59)] = 2853,
  [SMALL_STATE(60)] = 2903,
  [SMALL_STATE(61)] = 2953,
  [SMALL_STATE(62)] = 3036,
  [SMALL_STATE(63)] = 3103,
  [SMALL_STATE(64)] = 3156,
  [SMALL_STATE(65)] = 3206,
  [SMALL_STATE(66)] = 3256,
  [SMALL_STATE(67)] = 3299,
  [SMALL_STATE(68)] = 3342,
  [SMALL_STATE(69)] = 3385,
  [SMALL_STATE(70)] = 3426,
  [SMALL_STATE(71)] = 3466,
  [SMALL_STATE(72)] = 3506,
  [SMALL_STATE(73)] = 3546,
  [SMALL_STATE(74)] = 3586,
  [SMALL_STATE(75)] = 3626,
  [SMALL_STATE(76)] = 3666,
  [SMALL_STATE(77)] = 3706,
  [SMALL_STATE(78)] = 3746,
  [SMALL_STATE(79)] = 3786,
  [SMALL_STATE(80)] = 3826,
  [SMALL_STATE(81)] = 3866,
  [SMALL_STATE(82)] = 3906,
  [SMALL_STATE(83)] = 3945,
  [SMALL_STATE(84)] = 3984,
  [SMALL_STATE(85)] = 4023,
  [SMALL_STATE(86)] = 4062,
  [SMALL_STATE(87)] = 4101,
  [SMALL_STATE(88)] = 4140,
  [SMALL_STATE(89)] = 4179,
  [SMALL_STATE(90)] = 4218,
  [SMALL_STATE(91)] = 4257,
  [SMALL_STATE(92)] = 4296,
  [SMALL_STATE(93)] = 4335,
  [SMALL_STATE(94)] = 4374,
  [SMALL_STATE(95)] = 4413,
  [SMALL_STATE(96)] = 4452,
  [SMALL_STATE(97)] = 4513,
  [SMALL_STATE(98)] = 4560,
  [SMALL_STATE(99)] = 4605,
  [SMALL_STATE(100)] = 4634,
  [SMALL_STATE(101)] = 4663,
  [SMALL_STATE(102)] = 4716,
  [SMALL_STATE(103)] = 4769,
  [SMALL_STATE(104)] = 4798,
  [SMALL_STATE(105)] = 4851,
  [SMALL_STATE(106)] = 4880,
  [SMALL_STATE(107)] = 4909,
  [SMALL_STATE(108)] = 4959,
  [SMALL_STATE(109)] = 4995,
  [SMALL_STATE(110)] = 5047,
  [SMALL_STATE(111)] = 5081,
  [SMALL_STATE(112)] = 5126,
  [SMALL_STATE(113)] = 5173,
  [SMALL_STATE(114)] = 5218,
  [SMALL_STATE(115)] = 5265,
  [SMALL_STATE(116)] = 5312,
  [SMALL_STATE(117)] = 5359,
  [SMALL_STATE(118)] = 5406,
  [SMALL_STATE(119)] = 5451,
  [SMALL_STATE(120)] = 5496,
  [SMALL_STATE(121)] = 5543,
  [SMALL_STATE(122)] = 5567,
  [SMALL_STATE(123)] = 5591,
  [SMALL_STATE(124)] = 5615,
  [SMALL_STATE(125)] = 5659,
  [SMALL_STATE(126)] = 5683,
  [SMALL_STATE(127)] = 5707,
  [SMALL_STATE(128)] = 5748,
  [SMALL_STATE(129)] = 5789,
  [SMALL_STATE(130)] = 5830,
  [SMALL_STATE(131)] = 5874,
  [SMALL_STATE(132)] = 5911,
  [SMALL_STATE(133)] = 5951,
  [SMALL_STATE(134)] = 5991,
  [SMALL_STATE(135)] = 6031,
  [SMALL_STATE(136)] = 6058,
  [SMALL_STATE(137)] = 6089,
  [SMALL_STATE(138)] = 6121,
  [SMALL_STATE(139)] = 6153,
  [SMALL_STATE(140)] = 6182,
  [SMALL_STATE(141)] = 6209,
  [SMALL_STATE(142)] = 6236,
  [SMALL_STATE(143)] = 6263,
  [SMALL_STATE(144)] = 6290,
  [SMALL_STATE(145)] = 6317,
  [SMALL_STATE(146)] = 6346,
  [SMALL_STATE(147)] = 6373,
  [SMALL_STATE(148)] = 6402,
  [SMALL_STATE(149)] = 6431,
  [SMALL_STATE(150)] = 6460,
  [SMALL_STATE(151)] = 6487,
  [SMALL_STATE(152)] = 6515,
  [SMALL_STATE(153)] = 6543,
  [SMALL_STATE(154)] = 6571,
  [SMALL_STATE(155)] = 6599,
  [SMALL_STATE(156)] = 6625,
  [SMALL_STATE(157)] = 6651,
  [SMALL_STATE(158)] = 6677,
  [SMALL_STATE(159)] = 6703,
  [SMALL_STATE(160)] = 6729,
  [SMALL_STATE(161)] = 6757,
  [SMALL_STATE(162)] = 6785,
  [SMALL_STATE(163)] = 6810,
  [SMALL_STATE(164)] = 6835,
  [SMALL_STATE(165)] = 6854,
  [SMALL_STATE(166)] = 6879,
  [SMALL_STATE(167)] = 6904,
  [SMALL_STATE(168)] = 6929,
  [SMALL_STATE(169)] = 6954,
  [SMALL_STATE(170)] = 6979,
  [SMALL_STATE(171)] = 7002,
  [SMALL_STATE(172)] = 7025,
  [SMALL_STATE(173)] = 7050,
  [SMALL_STATE(174)] = 7065,
  [SMALL_STATE(175)] = 7084,
  [SMALL_STATE(176)] = 7109,
  [SMALL_STATE(177)] = 7134,
  [SMALL_STATE(178)] = 7159,
  [SMALL_STATE(179)] = 7178,
  [SMALL_STATE(180)] = 7192,
  [SMALL_STATE(181)] = 7206,
  [SMALL_STATE(182)] = 7220,
  [SMALL_STATE(183)] = 7238,
  [SMALL_STATE(184)] = 7262,
  [SMALL_STATE(185)] = 7282,
  [SMALL_STATE(186)] = 7304,
  [SMALL_STATE(187)] = 7320,
  [SMALL_STATE(188)] = 7334,
  [SMALL_STATE(189)] = 7354,
  [SMALL_STATE(190)] = 7368,
  [SMALL_STATE(191)] = 7382,
  [SMALL_STATE(192)] = 7396,
  [SMALL_STATE(193)] = 7410,
  [SMALL_STATE(194)] = 7424,
  [SMALL_STATE(195)] = 7438,
  [SMALL_STATE(196)] = 7456,
  [SMALL_STATE(197)] = 7470,
  [SMALL_STATE(198)] = 7484,
  [SMALL_STATE(199)] = 7498,
  [SMALL_STATE(200)] = 7512,
  [SMALL_STATE(201)] = 7534,
  [SMALL_STATE(202)] = 7548,
  [SMALL_STATE(203)] = 7562,
  [SMALL_STATE(204)] = 7576,
  [SMALL_STATE(205)] = 7590,
  [SMALL_STATE(206)] = 7606,
  [SMALL_STATE(207)] = 7626,
  [SMALL_STATE(208)] = 7646,
  [SMALL_STATE(209)] = 7660,
  [SMALL_STATE(210)] = 7684,
  [SMALL_STATE(211)] = 7698,
  [SMALL_STATE(212)] = 7718,
  [SMALL_STATE(213)] = 7740,
  [SMALL_STATE(214)] = 7754,
  [SMALL_STATE(215)] = 7768,
  [SMALL_STATE(216)] = 7782,
  [SMALL_STATE(217)] = 7796,
  [SMALL_STATE(218)] = 7810,
  [SMALL_STATE(219)] = 7824,
  [SMALL_STATE(220)] = 7842,
  [SMALL_STATE(221)] = 7863,
  [SMALL_STATE(222)] = 7884,
  [SMALL_STATE(223)] = 7909,
  [SMALL_STATE(224)] = 7926,
  [SMALL_STATE(225)] = 7945,
  [SMALL_STATE(226)] = 7966,
  [SMALL_STATE(227)] = 7987,
  [SMALL_STATE(228)] = 8008,
  [SMALL_STATE(229)] = 8021,
  [SMALL_STATE(230)] = 8042,
  [SMALL_STATE(231)] = 8059,
  [SMALL_STATE(232)] = 8080,
  [SMALL_STATE(233)] = 8097,
  [SMALL_STATE(234)] = 8114,
  [SMALL_STATE(235)] = 8133,
  [SMALL_STATE(236)] = 8154,
  [SMALL_STATE(237)] = 8171,
  [SMALL_STATE(238)] = 8196,
  [SMALL_STATE(239)] = 8214,
  [SMALL_STATE(240)] = 8228,
  [SMALL_STATE(241)] = 8244,
  [SMALL_STATE(242)] = 8262,
  [SMALL_STATE(243)] = 8278,
  [SMALL_STATE(244)] = 8296,
  [SMALL_STATE(245)] = 8310,
  [SMALL_STATE(246)] = 8326,
  [SMALL_STATE(247)] = 8338,
  [SMALL_STATE(248)] = 8358,
  [SMALL_STATE(249)] = 8378,
  [SMALL_STATE(250)] = 8392,
  [SMALL_STATE(251)] = 8406,
  [SMALL_STATE(252)] = 8420,
  [SMALL_STATE(253)] = 8438,
  [SMALL_STATE(254)] = 8456,
  [SMALL_STATE(255)] = 8474,
  [SMALL_STATE(256)] = 8490,
  [SMALL_STATE(257)] = 8506,
  [SMALL_STATE(258)] = 8520,
  [SMALL_STATE(259)] = 8534,
  [SMALL_STATE(260)] = 8552,
  [SMALL_STATE(261)] = 8566,
  [SMALL_STATE(262)] = 8580,
  [SMALL_STATE(263)] = 8594,
  [SMALL_STATE(264)] = 8608,
  [SMALL_STATE(265)] = 8622,
  [SMALL_STATE(266)] = 8638,
  [SMALL_STATE(267)] = 8653,
  [SMALL_STATE(268)] = 8668,
  [SMALL_STATE(269)] = 8685,
  [SMALL_STATE(270)] = 8696,
  [SMALL_STATE(271)] = 8713,
  [SMALL_STATE(272)] = 8728,
  [SMALL_STATE(273)] = 8743,
  [SMALL_STATE(274)] = 8756,
  [SMALL_STATE(275)] = 8767,
  [SMALL_STATE(276)] = 8782,
  [SMALL_STATE(277)] = 8799,
  [SMALL_STATE(278)] = 8814,
  [SMALL_STATE(279)] = 8827,
  [SMALL_STATE(280)] = 8842,
  [SMALL_STATE(281)] = 8855,
  [SMALL_STATE(282)] = 8868,
  [SMALL_STATE(283)] = 8883,
  [SMALL_STATE(284)] = 8896,
  [SMALL_STATE(285)] = 8909,
  [SMALL_STATE(286)] = 8924,
  [SMALL_STATE(287)] = 8937,
  [SMALL_STATE(288)] = 8949,
  [SMALL_STATE(289)] = 8965,
  [SMALL_STATE(290)] = 8979,
  [SMALL_STATE(291)] = 8993,
  [SMALL_STATE(292)] = 9003,
  [SMALL_STATE(293)] = 9013,
  [SMALL_STATE(294)] = 9027,
  [SMALL_STATE(295)] = 9041,
  [SMALL_STATE(296)] = 9051,
  [SMALL_STATE(297)] = 9063,
  [SMALL_STATE(298)] = 9075,
  [SMALL_STATE(299)] = 9089,
  [SMALL_STATE(300)] = 9099,
  [SMALL_STATE(301)] = 9109,
  [SMALL_STATE(302)] = 9123,
  [SMALL_STATE(303)] = 9135,
  [SMALL_STATE(304)] = 9147,
  [SMALL_STATE(305)] = 9159,
  [SMALL_STATE(306)] = 9175,
  [SMALL_STATE(307)] = 9189,
  [SMALL_STATE(308)] = 9203,
  [SMALL_STATE(309)] = 9217,
  [SMALL_STATE(310)] = 9233,
  [SMALL_STATE(311)] = 9243,
  [SMALL_STATE(312)] = 9253,
  [SMALL_STATE(313)] = 9263,
  [SMALL_STATE(314)] = 9279,
  [SMALL_STATE(315)] = 9287,
  [SMALL_STATE(316)] = 9303,
  [SMALL_STATE(317)] = 9319,
  [SMALL_STATE(318)] = 9335,
  [SMALL_STATE(319)] = 9343,
  [SMALL_STATE(320)] = 9357,
  [SMALL_STATE(321)] = 9373,
  [SMALL_STATE(322)] = 9387,
  [SMALL_STATE(323)] = 9397,
  [SMALL_STATE(324)] = 9407,
  [SMALL_STATE(325)] = 9419,
  [SMALL_STATE(326)] = 9435,
  [SMALL_STATE(327)] = 9451,
  [SMALL_STATE(328)] = 9465,
  [SMALL_STATE(329)] = 9481,
  [SMALL_STATE(330)] = 9491,
  [SMALL_STATE(331)] = 9501,
  [SMALL_STATE(332)] = 9515,
  [SMALL_STATE(333)] = 9527,
  [SMALL_STATE(334)] = 9539,
  [SMALL_STATE(335)] = 9553,
  [SMALL_STATE(336)] = 9565,
  [SMALL_STATE(337)] = 9575,
  [SMALL_STATE(338)] = 9585,
  [SMALL_STATE(339)] = 9601,
  [SMALL_STATE(340)] = 9617,
  [SMALL_STATE(341)] = 9631,
  [SMALL_STATE(342)] = 9641,
  [SMALL_STATE(343)] = 9653,
  [SMALL_STATE(344)] = 9663,
  [SMALL_STATE(345)] = 9679,
  [SMALL_STATE(346)] = 9689,
  [SMALL_STATE(347)] = 9703,
  [SMALL_STATE(348)] = 9713,
  [SMALL_STATE(349)] = 9729,
  [SMALL_STATE(350)] = 9740,
  [SMALL_STATE(351)] = 9749,
  [SMALL_STATE(352)] = 9762,
  [SMALL_STATE(353)] = 9775,
  [SMALL_STATE(354)] = 9788,
  [SMALL_STATE(355)] = 9801,
  [SMALL_STATE(356)] = 9814,
  [SMALL_STATE(357)] = 9827,
  [SMALL_STATE(358)] = 9840,
  [SMALL_STATE(359)] = 9853,
  [SMALL_STATE(360)] = 9866,
  [SMALL_STATE(361)] = 9879,
  [SMALL_STATE(362)] = 9892,
  [SMALL_STATE(363)] = 9905,
  [SMALL_STATE(364)] = 9918,
  [SMALL_STATE(365)] = 9931,
  [SMALL_STATE(366)] = 9944,
  [SMALL_STATE(367)] = 9957,
  [SMALL_STATE(368)] = 9970,
  [SMALL_STATE(369)] = 9981,
  [SMALL_STATE(370)] = 9994,
  [SMALL_STATE(371)] = 10005,
  [SMALL_STATE(372)] = 10018,
  [SMALL_STATE(373)] = 10031,
  [SMALL_STATE(374)] = 10044,
  [SMALL_STATE(375)] = 10055,
  [SMALL_STATE(376)] = 10068,
  [SMALL_STATE(377)] = 10079,
  [SMALL_STATE(378)] = 10090,
  [SMALL_STATE(379)] = 10103,
  [SMALL_STATE(380)] = 10116,
  [SMALL_STATE(381)] = 10129,
  [SMALL_STATE(382)] = 10140,
  [SMALL_STATE(383)] = 10151,
  [SMALL_STATE(384)] = 10164,
  [SMALL_STATE(385)] = 10173,
  [SMALL_STATE(386)] = 10186,
  [SMALL_STATE(387)] = 10195,
  [SMALL_STATE(388)] = 10208,
  [SMALL_STATE(389)] = 10221,
  [SMALL_STATE(390)] = 10234,
  [SMALL_STATE(391)] = 10245,
  [SMALL_STATE(392)] = 10254,
  [SMALL_STATE(393)] = 10263,
  [SMALL_STATE(394)] = 10276,
  [SMALL_STATE(395)] = 10285,
  [SMALL_STATE(396)] = 10298,
  [SMALL_STATE(397)] = 10311,
  [SMALL_STATE(398)] = 10322,
  [SMALL_STATE(399)] = 10335,
  [SMALL_STATE(400)] = 10344,
  [SMALL_STATE(401)] = 10357,
  [SMALL_STATE(402)] = 10370,
  [SMALL_STATE(403)] = 10383,
  [SMALL_STATE(404)] = 10396,
  [SMALL_STATE(405)] = 10409,
  [SMALL_STATE(406)] = 10418,
  [SMALL_STATE(407)] = 10431,
  [SMALL_STATE(408)] = 10444,
  [SMALL_STATE(409)] = 10457,
  [SMALL_STATE(410)] = 10466,
  [SMALL_STATE(411)] = 10479,
  [SMALL_STATE(412)] = 10492,
  [SMALL_STATE(413)] = 10505,
  [SMALL_STATE(414)] = 10516,
  [SMALL_STATE(415)] = 10529,
  [SMALL_STATE(416)] = 10542,
  [SMALL_STATE(417)] = 10551,
  [SMALL_STATE(418)] = 10564,
  [SMALL_STATE(419)] = 10577,
  [SMALL_STATE(420)] = 10590,
  [SMALL_STATE(421)] = 10603,
  [SMALL_STATE(422)] = 10612,
  [SMALL_STATE(423)] = 10625,
  [SMALL_STATE(424)] = 10638,
  [SMALL_STATE(425)] = 10651,
  [SMALL_STATE(426)] = 10662,
  [SMALL_STATE(427)] = 10675,
  [SMALL_STATE(428)] = 10688,
  [SMALL_STATE(429)] = 10701,
  [SMALL_STATE(430)] = 10714,
  [SMALL_STATE(431)] = 10727,
  [SMALL_STATE(432)] = 10740,
  [SMALL_STATE(433)] = 10749,
  [SMALL_STATE(434)] = 10758,
  [SMALL_STATE(435)] = 10767,
  [SMALL_STATE(436)] = 10775,
  [SMALL_STATE(437)] = 10785,
  [SMALL_STATE(438)] = 10795,
  [SMALL_STATE(439)] = 10805,
  [SMALL_STATE(440)] = 10815,
  [SMALL_STATE(441)] = 10825,
  [SMALL_STATE(442)] = 10835,
  [SMALL_STATE(443)] = 10845,
  [SMALL_STATE(444)] = 10855,
  [SMALL_STATE(445)] = 10865,
  [SMALL_STATE(446)] = 10875,
  [SMALL_STATE(447)] = 10885,
  [SMALL_STATE(448)] = 10895,
  [SMALL_STATE(449)] = 10905,
  [SMALL_STATE(450)] = 10915,
  [SMALL_STATE(451)] = 10925,
  [SMALL_STATE(452)] = 10935,
  [SMALL_STATE(453)] = 10945,
  [SMALL_STATE(454)] = 10955,
  [SMALL_STATE(455)] = 10965,
  [SMALL_STATE(456)] = 10975,
  [SMALL_STATE(457)] = 10985,
  [SMALL_STATE(458)] = 10995,
  [SMALL_STATE(459)] = 11005,
  [SMALL_STATE(460)] = 11015,
  [SMALL_STATE(461)] = 11025,
  [SMALL_STATE(462)] = 11035,
  [SMALL_STATE(463)] = 11045,
  [SMALL_STATE(464)] = 11055,
  [SMALL_STATE(465)] = 11065,
  [SMALL_STATE(466)] = 11075,
  [SMALL_STATE(467)] = 11085,
  [SMALL_STATE(468)] = 11095,
  [SMALL_STATE(469)] = 11103,
  [SMALL_STATE(470)] = 11111,
  [SMALL_STATE(471)] = 11121,
  [SMALL_STATE(472)] = 11131,
  [SMALL_STATE(473)] = 11141,
  [SMALL_STATE(474)] = 11151,
  [SMALL_STATE(475)] = 11161,
  [SMALL_STATE(476)] = 11171,
  [SMALL_STATE(477)] = 11179,
  [SMALL_STATE(478)] = 11189,
  [SMALL_STATE(479)] = 11199,
  [SMALL_STATE(480)] = 11209,
  [SMALL_STATE(481)] = 11219,
  [SMALL_STATE(482)] = 11229,
  [SMALL_STATE(483)] = 11236,
  [SMALL_STATE(484)] = 11243,
  [SMALL_STATE(485)] = 11250,
  [SMALL_STATE(486)] = 11257,
  [SMALL_STATE(487)] = 11264,
  [SMALL_STATE(488)] = 11271,
  [SMALL_STATE(489)] = 11278,
  [SMALL_STATE(490)] = 11285,
  [SMALL_STATE(491)] = 11292,
  [SMALL_STATE(492)] = 11299,
  [SMALL_STATE(493)] = 11306,
  [SMALL_STATE(494)] = 11313,
  [SMALL_STATE(495)] = 11320,
  [SMALL_STATE(496)] = 11327,
  [SMALL_STATE(497)] = 11334,
  [SMALL_STATE(498)] = 11341,
  [SMALL_STATE(499)] = 11348,
  [SMALL_STATE(500)] = 11355,
  [SMALL_STATE(501)] = 11362,
  [SMALL_STATE(502)] = 11369,
  [SMALL_STATE(503)] = 11376,
  [SMALL_STATE(504)] = 11383,
  [SMALL_STATE(505)] = 11390,
  [SMALL_STATE(506)] = 11397,
  [SMALL_STATE(507)] = 11404,
  [SMALL_STATE(508)] = 11411,
  [SMALL_STATE(509)] = 11418,
  [SMALL_STATE(510)] = 11425,
  [SMALL_STATE(511)] = 11432,
  [SMALL_STATE(512)] = 11439,
  [SMALL_STATE(513)] = 11446,
  [SMALL_STATE(514)] = 11453,
  [SMALL_STATE(515)] = 11460,
  [SMALL_STATE(516)] = 11467,
  [SMALL_STATE(517)] = 11474,
  [SMALL_STATE(518)] = 11481,
  [SMALL_STATE(519)] = 11488,
  [SMALL_STATE(520)] = 11495,
  [SMALL_STATE(521)] = 11502,
  [SMALL_STATE(522)] = 11509,
  [SMALL_STATE(523)] = 11516,
  [SMALL_STATE(524)] = 11523,
  [SMALL_STATE(525)] = 11530,
  [SMALL_STATE(526)] = 11537,
  [SMALL_STATE(527)] = 11544,
  [SMALL_STATE(528)] = 11551,
  [SMALL_STATE(529)] = 11558,
  [SMALL_STATE(530)] = 11565,
  [SMALL_STATE(531)] = 11572,
  [SMALL_STATE(532)] = 11579,
  [SMALL_STATE(533)] = 11586,
  [SMALL_STATE(534)] = 11593,
  [SMALL_STATE(535)] = 11600,
  [SMALL_STATE(536)] = 11607,
  [SMALL_STATE(537)] = 11614,
  [SMALL_STATE(538)] = 11621,
  [SMALL_STATE(539)] = 11628,
  [SMALL_STATE(540)] = 11635,
  [SMALL_STATE(541)] = 11642,
  [SMALL_STATE(542)] = 11649,
  [SMALL_STATE(543)] = 11656,
  [SMALL_STATE(544)] = 11663,
  [SMALL_STATE(545)] = 11670,
  [SMALL_STATE(546)] = 11677,
  [SMALL_STATE(547)] = 11684,
  [SMALL_STATE(548)] = 11691,
  [SMALL_STATE(549)] = 11698,
  [SMALL_STATE(550)] = 11705,
  [SMALL_STATE(551)] = 11712,
  [SMALL_STATE(552)] = 11719,
  [SMALL_STATE(553)] = 11726,
  [SMALL_STATE(554)] = 11733,
  [SMALL_STATE(555)] = 11740,
  [SMALL_STATE(556)] = 11747,
  [SMALL_STATE(557)] = 11754,
  [SMALL_STATE(558)] = 11761,
  [SMALL_STATE(559)] = 11768,
  [SMALL_STATE(560)] = 11775,
  [SMALL_STATE(561)] = 11782,
  [SMALL_STATE(562)] = 11789,
  [SMALL_STATE(563)] = 11796,
  [SMALL_STATE(564)] = 11803,
  [SMALL_STATE(565)] = 11810,
  [SMALL_STATE(566)] = 11817,
  [SMALL_STATE(567)] = 11824,
  [SMALL_STATE(568)] = 11831,
  [SMALL_STATE(569)] = 11838,
  [SMALL_STATE(570)] = 11845,
  [SMALL_STATE(571)] = 11852,
  [SMALL_STATE(572)] = 11859,
  [SMALL_STATE(573)] = 11866,
  [SMALL_STATE(574)] = 11873,
  [SMALL_STATE(575)] = 11880,
  [SMALL_STATE(576)] = 11887,
  [SMALL_STATE(577)] = 11894,
  [SMALL_STATE(578)] = 11901,
  [SMALL_STATE(579)] = 11908,
  [SMALL_STATE(580)] = 11915,
  [SMALL_STATE(581)] = 11922,
  [SMALL_STATE(582)] = 11929,
  [SMALL_STATE(583)] = 11936,
  [SMALL_STATE(584)] = 11943,
  [SMALL_STATE(585)] = 11950,
  [SMALL_STATE(586)] = 11957,
  [SMALL_STATE(587)] = 11964,
  [SMALL_STATE(588)] = 11971,
  [SMALL_STATE(589)] = 11978,
  [SMALL_STATE(590)] = 11985,
  [SMALL_STATE(591)] = 11992,
  [SMALL_STATE(592)] = 11999,
  [SMALL_STATE(593)] = 12006,
  [SMALL_STATE(594)] = 12013,
  [SMALL_STATE(595)] = 12020,
  [SMALL_STATE(596)] = 12027,
  [SMALL_STATE(597)] = 12034,
  [SMALL_STATE(598)] = 12041,
  [SMALL_STATE(599)] = 12048,
  [SMALL_STATE(600)] = 12055,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hurl_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(330),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 3),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [17] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 3),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(417),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(410),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(408),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(407),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(406),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(403),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(541),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(489),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(508),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(293),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(232),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(487),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(236),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(237),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(586),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(583),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(269),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 2),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 2),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 4),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 4),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 5),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 5),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response, 3),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_response, 3),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(393),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(396),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response, 4),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_response, 4),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__comment_or_new_line, 1),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__comment_or_new_line, 1),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__comment_or_new_line_repeat1, 2),
  [99] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__comment_or_new_line_repeat1, 2), SHIFT_REPEAT(12),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__comment_or_new_line_repeat1, 2),
  [104] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__comment_or_new_line_repeat1, 2), SHIFT_REPEAT(12),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_options_section, 3),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_options_section, 3),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(584),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(589),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(590),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(591),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(483),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(592),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(594),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(595),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(596),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(597),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_options_section_repeat1, 2),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_options_section_repeat1, 2),
  [135] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_options_section_repeat1, 2), SHIFT_REPEAT(584),
  [138] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_options_section_repeat1, 2), SHIFT_REPEAT(589),
  [141] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_options_section_repeat1, 2), SHIFT_REPEAT(590),
  [144] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_options_section_repeat1, 2), SHIFT_REPEAT(591),
  [147] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_options_section_repeat1, 2), SHIFT_REPEAT(483),
  [150] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_options_section_repeat1, 2), SHIFT_REPEAT(592),
  [153] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_options_section_repeat1, 2), SHIFT_REPEAT(594),
  [156] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_options_section_repeat1, 2), SHIFT_REPEAT(595),
  [159] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_options_section_repeat1, 2), SHIFT_REPEAT(596),
  [162] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_options_section_repeat1, 2), SHIFT_REPEAT(597),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_options_section, 2),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_options_section, 2),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_asserts_section, 2),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_asserts_section, 2),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(470),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(471),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(472),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(473),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(481),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(307),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_asserts_section, 3),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_asserts_section, 3),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_asserts_section_repeat1, 2),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_asserts_section_repeat1, 2),
  [207] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_asserts_section_repeat1, 2), SHIFT_REPEAT(470),
  [210] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_asserts_section_repeat1, 2), SHIFT_REPEAT(94),
  [213] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_asserts_section_repeat1, 2), SHIFT_REPEAT(83),
  [216] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_asserts_section_repeat1, 2), SHIFT_REPEAT(471),
  [219] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_asserts_section_repeat1, 2), SHIFT_REPEAT(472),
  [222] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_asserts_section_repeat1, 2), SHIFT_REPEAT(84),
  [225] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_asserts_section_repeat1, 2), SHIFT_REPEAT(473),
  [228] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_asserts_section_repeat1, 2), SHIFT_REPEAT(481),
  [231] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_asserts_section_repeat1, 2), SHIFT_REPEAT(307),
  [234] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_asserts_section_repeat1, 2), SHIFT_REPEAT(87),
  [237] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_asserts_section_repeat1, 2), SHIFT_REPEAT(82),
  [240] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_asserts_section_repeat1, 2), SHIFT_REPEAT(89),
  [243] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_asserts_section_repeat1, 2), SHIFT_REPEAT(90),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response, 5),
  [248] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_response, 5),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [252] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [258] = {.entry = {.count = 1, .reusable = false}}, SHIFT(231),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [262] = {.entry = {.count = 1, .reusable = false}}, SHIFT(226),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(467),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(539),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(543),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(559),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(588),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(544),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(538),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_request_repeat1, 2),
  [302] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_request_repeat1, 2),
  [304] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat1, 2), SHIFT_REPEAT(232),
  [307] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_request_repeat1, 2), SHIFT_REPEAT(487),
  [310] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_request_repeat1, 2), SHIFT_REPEAT(355),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multipart_form_data_section, 3),
  [315] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multipart_form_data_section, 3),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multipart_form_data_section, 4),
  [321] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multipart_form_data_section, 4),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multipart_form_data_section, 5),
  [325] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multipart_form_data_section, 5),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_retry_interval_option, 4),
  [329] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_retry_interval_option, 4),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_retry_option, 4),
  [333] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_retry_option, 4),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_max_redirs_option, 4),
  [337] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_max_redirs_option, 4),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insecure_option, 4),
  [341] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_insecure_option, 4),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_follow_redirect_option, 4),
  [345] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_follow_redirect_option, 4),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ca_certificate_option, 4),
  [349] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ca_certificate_option, 4),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_very_verbose_option, 4),
  [353] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_very_verbose_option, 4),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option, 1),
  [357] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_option, 1),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ca_certificate_option, 3),
  [361] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ca_certificate_option, 3),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_verbose_option, 4),
  [365] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_verbose_option, 4),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_option, 4),
  [369] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_option, 4),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_retry_max_count_option, 4),
  [373] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_retry_max_count_option, 4),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_form_params_section, 5),
  [377] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_form_params_section, 5),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_string_params_section, 5),
  [381] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query_string_params_section, 5),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_string_params_section, 3),
  [385] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query_string_params_section, 3),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_form_params_section, 3),
  [389] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_form_params_section, 3),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cookies_section, 4),
  [393] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cookies_section, 4),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cookies_section, 3),
  [397] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cookies_section, 3),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_form_params_section, 4),
  [401] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_form_params_section, 4),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_string_params_section, 4),
  [405] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query_string_params_section, 4),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cookies_section, 5),
  [409] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cookies_section, 5),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_request_repeat2, 2),
  [413] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_request_repeat2, 2),
  [415] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat2, 2), SHIFT_REPEAT(417),
  [418] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat2, 2), SHIFT_REPEAT(410),
  [421] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat2, 2), SHIFT_REPEAT(408),
  [424] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat2, 2), SHIFT_REPEAT(407),
  [427] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat2, 2), SHIFT_REPEAT(406),
  [430] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat2, 2), SHIFT_REPEAT(403),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_hurl_file_repeat2, 2),
  [435] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_hurl_file_repeat2, 2), SHIFT_REPEAT(52),
  [438] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_hurl_file_repeat2, 2),
  [440] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_hurl_file_repeat2, 2), SHIFT_REPEAT(52),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assert, 3),
  [445] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assert, 3),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assert, 4),
  [449] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assert, 4),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [453] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [455] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__comment_or_new_line_repeat1, 2), SHIFT_REPEAT(53),
  [458] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__comment_or_new_line_repeat1, 2), SHIFT_REPEAT(53),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 2),
  [463] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 2),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_captures_section, 2),
  [467] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_captures_section, 2),
  [469] = {.entry = {.count = 1, .reusable = false}}, SHIFT(262),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(531),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_captures_section_repeat1, 2),
  [477] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_captures_section_repeat1, 2),
  [479] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_captures_section_repeat1, 2), SHIFT_REPEAT(262),
  [482] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_captures_section_repeat1, 2), SHIFT_REPEAT(531),
  [485] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_captures_section_repeat1, 2), SHIFT_REPEAT(352),
  [488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_captures_section, 3),
  [490] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_captures_section, 3),
  [492] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request_section, 1),
  [494] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request_section, 1),
  [496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_basic_auth_section, 4),
  [498] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_basic_auth_section, 4),
  [500] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_capture_repeat1, 2), SHIFT_REPEAT(327),
  [503] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_capture_repeat1, 2),
  [505] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_capture_repeat1, 2),
  [507] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_capture_repeat1, 2), SHIFT_REPEAT(79),
  [510] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_capture_repeat1, 2), SHIFT_REPEAT(80),
  [513] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_capture_repeat1, 2), SHIFT_REPEAT(81),
  [516] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_capture_repeat1, 2), SHIFT_REPEAT(77),
  [519] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_capture_repeat1, 2), SHIFT_REPEAT(73),
  [522] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_capture_repeat1, 2), SHIFT_REPEAT(74),
  [525] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_response_repeat1, 2),
  [527] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_response_repeat1, 2),
  [529] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_response_repeat1, 2), SHIFT_REPEAT(393),
  [532] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_response_repeat1, 2), SHIFT_REPEAT(396),
  [535] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__comment_or_new_line_repeat1, 2), SHIFT_REPEAT(64),
  [538] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__comment_or_new_line_repeat1, 2), SHIFT_REPEAT(64),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [543] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [545] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_capture, 5),
  [547] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_capture, 5),
  [549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_capture, 4),
  [551] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_capture, 4),
  [553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response_section, 1),
  [555] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_response_section, 1),
  [557] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regex_filter, 2),
  [559] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_regex_filter, 2),
  [561] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regex, 3),
  [563] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_regex, 3),
  [565] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_string, 2),
  [567] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_string, 2),
  [569] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_html_decode_filter, 1),
  [571] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_html_decode_filter, 1),
  [573] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_to_int_filter, 1),
  [575] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_to_int_filter, 1),
  [577] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regex, 2),
  [579] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_regex, 2),
  [581] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filter, 1),
  [583] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_filter, 1),
  [585] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_html_encode_filter, 1),
  [587] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_html_encode_filter, 1),
  [589] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_string, 3),
  [591] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_string, 3),
  [593] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_count_filter, 1),
  [595] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_count_filter, 1),
  [597] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url_encode_filter, 1),
  [599] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_url_encode_filter, 1),
  [601] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url_decode_filter, 1),
  [603] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_url_decode_filter, 1),
  [605] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sha256_query, 1),
  [607] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sha256_query, 1),
  [609] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url_query, 1),
  [611] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_url_query, 1),
  [613] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body_query, 1),
  [615] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_body_query, 1),
  [617] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query, 1),
  [619] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query, 1),
  [621] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_query, 2),
  [623] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_query, 2),
  [625] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_duration_query, 1),
  [627] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_duration_query, 1),
  [629] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_query, 2),
  [631] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header_query, 2),
  [633] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_md5_query, 1),
  [635] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_md5_query, 1),
  [637] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bytes_query, 1),
  [639] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bytes_query, 1),
  [641] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cookie_query, 2),
  [643] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cookie_query, 2),
  [645] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xpath_query, 2),
  [647] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xpath_query, 2),
  [649] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jsonpath_query, 2),
  [651] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_jsonpath_query, 2),
  [653] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_status_query, 1),
  [655] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_status_query, 1),
  [657] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regex_query, 2),
  [659] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_regex_query, 2),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(460),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(459),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(458),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(457),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(456),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [687] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entry, 1),
  [689] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_entry, 1),
  [691] = {.entry = {.count = 1, .reusable = false}}, SHIFT(469),
  [693] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hurl_file, 1),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(508),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(586),
  [707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(583),
  [709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [711] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 6),
  [713] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 6),
  [715] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 2),
  [717] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_body, 2),
  [719] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_key_value, 2),
  [721] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [723] = {.entry = {.count = 1, .reusable = false}}, SHIFT(271),
  [725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [727] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_hurl_file_repeat1, 2),
  [729] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_hurl_file_repeat1, 2), SHIFT_REPEAT(330),
  [732] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_hurl_file_repeat1, 2),
  [734] = {.entry = {.count = 1, .reusable = false}}, SHIFT(257),
  [736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(558),
  [738] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entry, 2),
  [740] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_entry, 2),
  [742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [744] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [758] = {.entry = {.count = 1, .reusable = false}}, SHIFT(321),
  [760] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [762] = {.entry = {.count = 1, .reusable = false}}, SHIFT(198),
  [764] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [766] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [768] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [770] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [772] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [774] = {.entry = {.count = 1, .reusable = false}}, SHIFT(572),
  [776] = {.entry = {.count = 1, .reusable = false}}, SHIFT(574),
  [778] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [780] = {.entry = {.count = 1, .reusable = false}}, SHIFT(234),
  [782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [784] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [786] = {.entry = {.count = 1, .reusable = false}}, SHIFT(493),
  [788] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entry, 3),
  [790] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_entry, 3),
  [792] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_xml_tag_repeat1, 2), SHIFT_REPEAT(541),
  [795] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_xml_tag_repeat1, 2), SHIFT_REPEAT(572),
  [798] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_xml_tag_repeat1, 2),
  [800] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_xml_tag_repeat1, 2), SHIFT_REPEAT(182),
  [803] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_xml_tag_repeat1, 2), SHIFT_REPEAT(234),
  [806] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_xml_tag_repeat1, 2), SHIFT_REPEAT(356),
  [809] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response, 6),
  [811] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_response, 6),
  [813] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 1),
  [815] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_capture_repeat1, 2), SHIFT_REPEAT(321),
  [818] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_capture_repeat1, 2), SHIFT_REPEAT(181),
  [821] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_capture_repeat1, 2), SHIFT_REPEAT(198),
  [824] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_capture_repeat1, 2), SHIFT_REPEAT(191),
  [827] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_capture_repeat1, 2), SHIFT_REPEAT(193),
  [830] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_capture_repeat1, 2), SHIFT_REPEAT(179),
  [833] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_capture_repeat1, 2), SHIFT_REPEAT(194),
  [836] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 2),
  [838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [840] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_string, 1),
  [842] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_string, 1),
  [844] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_value_string_repeat1, 2),
  [846] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_string_repeat1, 2), SHIFT_REPEAT(182),
  [849] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_string_repeat1, 2), SHIFT_REPEAT(234),
  [852] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_value_string_repeat1, 2), SHIFT_REPEAT(356),
  [855] = {.entry = {.count = 1, .reusable = false}}, SHIFT(376),
  [857] = {.entry = {.count = 1, .reusable = false}}, SHIFT(246),
  [859] = {.entry = {.count = 1, .reusable = false}}, SHIFT(351),
  [861] = {.entry = {.count = 1, .reusable = false}}, SHIFT(272),
  [863] = {.entry = {.count = 1, .reusable = false}}, SHIFT(205),
  [865] = {.entry = {.count = 1, .reusable = false}}, SHIFT(517),
  [867] = {.entry = {.count = 1, .reusable = false}}, SHIFT(207),
  [869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [871] = {.entry = {.count = 1, .reusable = false}}, SHIFT(218),
  [873] = {.entry = {.count = 1, .reusable = false}}, SHIFT(341),
  [875] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [877] = {.entry = {.count = 1, .reusable = false}}, SHIFT(353),
  [879] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_string_repeat1, 2), SHIFT_REPEAT(195),
  [882] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_string_repeat1, 2), SHIFT_REPEAT(271),
  [885] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_value_string_repeat1, 2), SHIFT_REPEAT(422),
  [888] = {.entry = {.count = 1, .reusable = false}}, SHIFT(201),
  [890] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [892] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multiline_string_repeat1, 2), SHIFT_REPEAT(209),
  [895] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multiline_string_repeat1, 2), SHIFT_REPEAT(205),
  [898] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_multiline_string_repeat1, 2),
  [900] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multiline_string_repeat1, 2), SHIFT_REPEAT(207),
  [903] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_multiline_string_repeat1, 2), SHIFT_REPEAT(354),
  [906] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_quoted_string_repeat1, 2),
  [908] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_string_repeat1, 2), SHIFT_REPEAT(341),
  [911] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_string_repeat1, 2), SHIFT_REPEAT(174),
  [914] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_string_repeat1, 2), SHIFT_REPEAT(353),
  [917] = {.entry = {.count = 1, .reusable = false}}, SHIFT(266),
  [919] = {.entry = {.count = 1, .reusable = false}}, SHIFT(587),
  [921] = {.entry = {.count = 1, .reusable = false}}, SHIFT(282),
  [923] = {.entry = {.count = 1, .reusable = false}}, SHIFT(522),
  [925] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [927] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_string, 1),
  [929] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_key_string, 1),
  [931] = {.entry = {.count = 1, .reusable = false}}, SHIFT(380),
  [933] = {.entry = {.count = 1, .reusable = false}}, SHIFT(374),
  [935] = {.entry = {.count = 1, .reusable = false}}, SHIFT(264),
  [937] = {.entry = {.count = 1, .reusable = false}}, SHIFT(362),
  [939] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_value_string_content_repeat1, 2),
  [941] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_string_content_repeat1, 2), SHIFT_REPEAT(182),
  [944] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_string_content_repeat1, 2), SHIFT_REPEAT(234),
  [947] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_value_string_content_repeat1, 2),
  [949] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_string_content, 1),
  [951] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_string_content, 1),
  [953] = {.entry = {.count = 1, .reusable = false}}, SHIFT(255),
  [955] = {.entry = {.count = 1, .reusable = false}}, SHIFT(494),
  [957] = {.entry = {.count = 1, .reusable = false}}, SHIFT(503),
  [959] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [961] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_oneline_string_repeat1, 2), SHIFT_REPEAT(255),
  [964] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_oneline_string_repeat1, 2),
  [966] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_oneline_string_repeat1, 2), SHIFT_REPEAT(503),
  [969] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_oneline_string_repeat1, 2), SHIFT_REPEAT(359),
  [972] = {.entry = {.count = 1, .reusable = false}}, SHIFT(505),
  [974] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_key_string_repeat1, 2),
  [976] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_key_string_repeat1, 2),
  [978] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_string_repeat1, 2), SHIFT_REPEAT(232),
  [981] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_string_repeat1, 2), SHIFT_REPEAT(487),
  [984] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_string_repeat1, 2), SHIFT_REPEAT(355),
  [987] = {.entry = {.count = 1, .reusable = false}}, SHIFT(512),
  [989] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_string_repeat1, 2), SHIFT_REPEAT(262),
  [992] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_string_repeat1, 2), SHIFT_REPEAT(531),
  [995] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_string_repeat1, 2), SHIFT_REPEAT(352),
  [998] = {.entry = {.count = 1, .reusable = false}}, SHIFT(511),
  [1000] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [1002] = {.entry = {.count = 1, .reusable = false}}, SHIFT(302),
  [1004] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [1006] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_integer_repeat1, 2),
  [1008] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_integer_repeat1, 2), SHIFT_REPEAT(228),
  [1011] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_string_repeat1, 2), SHIFT_REPEAT(257),
  [1014] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_string_repeat1, 2), SHIFT_REPEAT(558),
  [1017] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_string_repeat1, 2), SHIFT_REPEAT(363),
  [1020] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [1022] = {.entry = {.count = 1, .reusable = false}}, SHIFT(581),
  [1024] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_json_string_repeat1, 2),
  [1026] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_string_repeat1, 2), SHIFT_REPEAT(186),
  [1029] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_string_repeat1, 2), SHIFT_REPEAT(302),
  [1032] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_json_string_repeat1, 2), SHIFT_REPEAT(361),
  [1035] = {.entry = {.count = 1, .reusable = false}}, SHIFT(310),
  [1037] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_filename, 1),
  [1039] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_filename_repeat1, 2),
  [1041] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_filename_repeat1, 2), SHIFT_REPEAT(376),
  [1044] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_filename_repeat1, 2), SHIFT_REPEAT(246),
  [1047] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_filename_repeat1, 2), SHIFT_REPEAT(351),
  [1050] = {.entry = {.count = 1, .reusable = false}}, SHIFT(323),
  [1052] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_name, 2),
  [1054] = {.entry = {.count = 1, .reusable = false}}, SHIFT(311),
  [1056] = {.entry = {.count = 1, .reusable = false}}, SHIFT(312),
  [1058] = {.entry = {.count = 1, .reusable = false}}, SHIFT(474),
  [1060] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_filename_repeat1, 2), SHIFT_REPEAT(374),
  [1063] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_filename_repeat1, 2), SHIFT_REPEAT(264),
  [1066] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_filename_repeat1, 2), SHIFT_REPEAT(362),
  [1069] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [1071] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer, 1),
  [1073] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [1075] = {.entry = {.count = 1, .reusable = true}}, SHIFT(465),
  [1077] = {.entry = {.count = 1, .reusable = false}}, SHIFT(249),
  [1079] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multiline_string_content_repeat1, 2), SHIFT_REPEAT(183),
  [1082] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multiline_string_content_repeat1, 2), SHIFT_REPEAT(205),
  [1085] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_multiline_string_content_repeat1, 2),
  [1087] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multiline_string_content_repeat1, 2), SHIFT_REPEAT(207),
  [1090] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_multiline_string_content_repeat1, 2),
  [1092] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__multiline_string_text, 2),
  [1094] = {.entry = {.count = 1, .reusable = false}}, SHIFT(211),
  [1096] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multiline_string_text, 2),
  [1098] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_number, 1),
  [1100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [1102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [1104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [1106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(446),
  [1108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_quoted_string_content_repeat1, 2),
  [1110] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_string_content_repeat1, 2), SHIFT_REPEAT(341),
  [1113] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_string_content_repeat1, 2), SHIFT_REPEAT(174),
  [1116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [1118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(464),
  [1120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(347),
  [1122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [1124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(452),
  [1126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_string_content, 1),
  [1128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__multiline_string_text, 1),
  [1130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [1132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multiline_string_text, 1),
  [1134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [1136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline_string_content, 1),
  [1138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_string_content, 1),
  [1140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__multiline_string_text_repeat1, 2),
  [1142] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__multiline_string_text_repeat1, 2), SHIFT_REPEAT(211),
  [1145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__multiline_string_text_repeat1, 2),
  [1147] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_string_content_repeat1, 2), SHIFT_REPEAT(195),
  [1150] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_string_content_repeat1, 2), SHIFT_REPEAT(271),
  [1153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fraction, 2),
  [1155] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_oneline_string_content_repeat1, 2), SHIFT_REPEAT(255),
  [1158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_oneline_string_content_repeat1, 2),
  [1160] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_oneline_string_content_repeat1, 2), SHIFT_REPEAT(503),
  [1163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_oneline_string_content_repeat1, 2),
  [1165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [1167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [1169] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_integer_repeat1, 2), SHIFT_REPEAT(269),
  [1172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_integer_repeat1, 2),
  [1174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_value_string_text_repeat1, 2),
  [1176] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_string_text_repeat1, 2), SHIFT_REPEAT(224),
  [1179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_value_string_text_repeat1, 2),
  [1181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_key_string_content_repeat1, 2),
  [1183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_key_string_content_repeat1, 2),
  [1185] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_string_content_repeat1, 2), SHIFT_REPEAT(225),
  [1188] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_string_content_repeat1, 2), SHIFT_REPEAT(487),
  [1191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_digit, 1),
  [1193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(482),
  [1195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(217),
  [1197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(421),
  [1199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer, 1),
  [1201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_string_content, 1),
  [1203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_key_string_content, 1),
  [1205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneline_string_content, 1),
  [1207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneline_string_content, 1),
  [1209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_string_text, 1),
  [1211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(224),
  [1213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_string_text, 1),
  [1215] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [1217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [1219] = {.entry = {.count = 1, .reusable = false}}, SHIFT(502),
  [1221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(500),
  [1223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xml_open_tag, 3),
  [1225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xml_open_tag, 3),
  [1227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_filename_content_repeat1, 2),
  [1229] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_filename_content_repeat1, 2), SHIFT_REPEAT(376),
  [1232] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_filename_content_repeat1, 2), SHIFT_REPEAT(240),
  [1235] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_string_content_repeat1, 2), SHIFT_REPEAT(241),
  [1238] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_string_content_repeat1, 2), SHIFT_REPEAT(531),
  [1241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_number, 2),
  [1243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_regex_content, 1),
  [1245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xml_tag, 2),
  [1247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xml_tag, 2),
  [1249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exponent, 2),
  [1251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_filename_content, 1),
  [1253] = {.entry = {.count = 1, .reusable = false}}, SHIFT(390),
  [1255] = {.entry = {.count = 1, .reusable = false}}, SHIFT(285),
  [1257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_number, 1),
  [1259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(489),
  [1261] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_string_escaped_char, 2),
  [1263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_string_escaped_char, 2),
  [1265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xml_tag, 3),
  [1267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xml_tag, 3),
  [1269] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xml_prolog_tag, 3),
  [1271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xml_prolog_tag, 3),
  [1273] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_filename_content_repeat1, 2), SHIFT_REPEAT(374),
  [1276] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_filename_content_repeat1, 2), SHIFT_REPEAT(252),
  [1279] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_regex_content_repeat1, 2), SHIFT_REPEAT(482),
  [1282] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_regex_content_repeat1, 2),
  [1284] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_regex_content_repeat1, 2), SHIFT_REPEAT(421),
  [1287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [1289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(461),
  [1291] = {.entry = {.count = 1, .reusable = false}}, SHIFT(333),
  [1293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exponent, 3),
  [1295] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xml_close_tag, 3),
  [1297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xml_close_tag, 3),
  [1299] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_string_content_repeat1, 2), SHIFT_REPEAT(259),
  [1302] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_string_content_repeat1, 2), SHIFT_REPEAT(558),
  [1305] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unicode_char, 6),
  [1307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unicode_char, 6),
  [1309] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_template, 3),
  [1311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template, 3),
  [1313] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_string_escaped_char, 3),
  [1315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_string_escaped_char, 3),
  [1317] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fraction, 2),
  [1319] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_multiline_string_content_repeat1, 1),
  [1321] = {.entry = {.count = 1, .reusable = false}}, SHIFT(485),
  [1323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_multiline_string_content_repeat1, 1),
  [1325] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__comment_or_new_line_repeat1, 2), SHIFT_REPEAT(267),
  [1328] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__comment_or_new_line_repeat1, 2), SHIFT_REPEAT(267),
  [1331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hurl_file, 2),
  [1333] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_digit, 1),
  [1335] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_hurl_file_repeat2, 2), SHIFT_REPEAT(11),
  [1338] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_hurl_file_repeat2, 2), SHIFT_REPEAT(11),
  [1341] = {.entry = {.count = 1, .reusable = false}}, SHIFT(275),
  [1343] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline_string_escaped_char, 3),
  [1345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_string_escaped_char, 3),
  [1347] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_string_text_repeat1, 2), SHIFT_REPEAT(275),
  [1350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [1352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_value, 1),
  [1354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_key_string_repeat1, 1),
  [1356] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_value, 1),
  [1358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [1360] = {.entry = {.count = 1, .reusable = false}}, SHIFT(267),
  [1362] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline_string_escaped_char, 2),
  [1364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_string_escaped_char, 2),
  [1366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_string_escaped_char, 2),
  [1368] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_key_string_escaped_char, 2),
  [1370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [1372] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneline_string_escaped_char, 3),
  [1374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneline_string_escaped_char, 3),
  [1376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(521),
  [1378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [1380] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_exponent, 2),
  [1382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(599),
  [1384] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_exponent, 3),
  [1386] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_string_text, 1),
  [1388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_string_text, 1),
  [1390] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_string_content, 1),
  [1392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_string_content, 1),
  [1394] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_number, 2),
  [1396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [1398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [1400] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_xml_repeat1, 2),
  [1402] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_xml_repeat1, 2), SHIFT_REPEAT(489),
  [1405] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_query_string_params_section_repeat1, 2), SHIFT_REPEAT(279),
  [1408] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_string_params_section_repeat1, 2), SHIFT_REPEAT(279),
  [1411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_string, 3),
  [1413] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_string_escaped_char, 2),
  [1415] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_invalid_quoted_string_escaped_char, 2),
  [1417] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_filename_escaped_char, 2),
  [1419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [1421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_string, 2),
  [1423] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hexdigit, 1),
  [1425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hexdigit, 1),
  [1427] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_method, 1),
  [1429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method, 1),
  [1431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_oneline_hex_repeat1, 2),
  [1433] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_oneline_hex_repeat1, 2), SHIFT_REPEAT(386),
  [1436] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_string_escaped_char, 2),
  [1438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_string_escaped_char, 2),
  [1440] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneline_string_escaped_char, 2),
  [1442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneline_string_escaped_char, 2),
  [1444] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_string_escaped_char, 6),
  [1446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_string_escaped_char, 6),
  [1448] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_string_escaped_char, 3),
  [1450] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_multipart_form_data_section_repeat1, 2), SHIFT_REPEAT(279),
  [1453] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multipart_form_data_section_repeat1, 2), SHIFT_REPEAT(279),
  [1456] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_string_text, 1),
  [1458] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneline_string_text, 2),
  [1460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneline_string_text, 2),
  [1462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_object, 3),
  [1464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(580),
  [1466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_value, 3),
  [1468] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_key_value, 3),
  [1470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [1472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(515),
  [1474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [1476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_json_object_repeat1, 2),
  [1478] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_json_object_repeat1, 2), SHIFT_REPEAT(305),
  [1481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [1483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(545),
  [1485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [1487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [1489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [1491] = {.entry = {.count = 1, .reusable = false}}, SHIFT(329),
  [1493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [1495] = {.entry = {.count = 1, .reusable = false}}, SHIFT(314),
  [1497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_value, 2),
  [1499] = {.entry = {.count = 1, .reusable = false}}, SHIFT(550),
  [1501] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_file_value, 2),
  [1503] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_json_array_repeat1, 2), SHIFT_REPEAT(118),
  [1506] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_json_array_repeat1, 2),
  [1508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(523),
  [1510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(540),
  [1512] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_array, 4),
  [1514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_object, 4),
  [1516] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_number, 3),
  [1518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_predicate_value, 1),
  [1520] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_predicate_value, 1),
  [1522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_greater_predicate, 2),
  [1524] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_greater_predicate, 2),
  [1526] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_array, 3),
  [1528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_greater_or_equal_predicate, 2),
  [1530] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_greater_or_equal_predicate, 2),
  [1532] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_less_predicate, 2),
  [1534] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_less_predicate, 2),
  [1536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_less_or_equal_predicate, 2),
  [1538] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_less_or_equal_predicate, 2),
  [1540] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_regex_escaped_char, 2),
  [1542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [1544] = {.entry = {.count = 1, .reusable = false}}, SHIFT(279),
  [1546] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_value, 3),
  [1548] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_file_value, 3),
  [1550] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_object, 2),
  [1552] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_value, 1),
  [1554] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_value, 1),
  [1556] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_regex_text, 1),
  [1558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(555),
  [1560] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [1562] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_null, 1),
  [1564] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_key_value, 3),
  [1566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [1568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(440),
  [1570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [1572] = {.entry = {.count = 1, .reusable = false}}, SHIFT(463),
  [1574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [1576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(455),
  [1578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
  [1580] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version, 1),
  [1582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(437),
  [1584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [1586] = {.entry = {.count = 1, .reusable = false}}, SHIFT(405),
  [1588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [1590] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_predicate, 2),
  [1592] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_predicate, 2),
  [1594] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_string, 6),
  [1596] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline_string, 6),
  [1598] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xml, 2),
  [1600] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xml, 2),
  [1602] = {.entry = {.count = 1, .reusable = false}}, SHIFT(281),
  [1604] = {.entry = {.count = 1, .reusable = false}}, SHIFT(530),
  [1606] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_not_equal_predicate, 2),
  [1608] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_not_equal_predicate, 2),
  [1610] = {.entry = {.count = 1, .reusable = false}}, SHIFT(571),
  [1612] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneline_string, 3),
  [1614] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneline_string, 3),
  [1616] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_key_string, 1, .production_id = 1),
  [1618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [1620] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_object, 2),
  [1622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [1624] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_string_type, 1),
  [1626] = {.entry = {.count = 1, .reusable = false}}, SHIFT(342),
  [1628] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneline_string, 2),
  [1630] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneline_string, 2),
  [1632] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_with_predicate, 2),
  [1634] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_with_predicate, 2),
  [1636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(527),
  [1638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [1640] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float, 2),
  [1642] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float, 2),
  [1644] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_string, 2),
  [1646] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneline_file, 2),
  [1648] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneline_file, 2),
  [1650] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_end_with_predicate, 2),
  [1652] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_end_with_predicate, 2),
  [1654] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1656] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_array, 4),
  [1658] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_string, 3),
  [1660] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline_string, 3),
  [1662] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contain_predicate, 2),
  [1664] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_contain_predicate, 2),
  [1666] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneline_file, 3),
  [1668] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneline_file, 3),
  [1670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [1672] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneline_hex, 2),
  [1674] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneline_hex, 2),
  [1676] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_string, 4),
  [1678] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline_string, 4),
  [1680] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_object, 3),
  [1682] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_param, 4),
  [1684] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_file_param, 4),
  [1686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [1688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [1690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(600),
  [1692] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multipart_form_data_param, 1),
  [1694] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multipart_form_data_param, 1),
  [1696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [1698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(479),
  [1700] = {.entry = {.count = 1, .reusable = false}}, SHIFT(322),
  [1702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [1704] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_match_predicate, 2),
  [1706] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_match_predicate, 2),
  [1708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(519),
  [1710] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_predicate_func, 1),
  [1712] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_predicate_func, 1),
  [1714] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_predicate, 1),
  [1716] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_predicate, 1),
  [1718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [1720] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_collection_predicate, 1),
  [1722] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_collection_predicate, 1),
  [1724] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exist_predicate, 1),
  [1726] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_exist_predicate, 1),
  [1728] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_array, 3),
  [1730] = {.entry = {.count = 1, .reusable = false}}, SHIFT(532),
  [1732] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_predicate, 1),
  [1734] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer_predicate, 1),
  [1736] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_predicate, 1),
  [1738] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_predicate, 1),
  [1740] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_object, 4),
  [1742] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_equal_predicate, 2),
  [1744] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_equal_predicate, 2),
  [1746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [1748] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_predicate, 2),
  [1750] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_include_predicate, 2),
  [1752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [1754] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_contenttype, 1),
  [1756] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_file_contenttype, 1),
  [1758] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_query_string_params_section_repeat1, 2),
  [1760] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_query_string_params_section_repeat1, 2),
  [1762] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 3),
  [1764] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_definition, 3),
  [1766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [1768] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_status, 1),
  [1770] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_status, 1),
  [1772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [1774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [1776] = {.entry = {.count = 1, .reusable = false}}, SHIFT(299),
  [1778] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float_predicate, 1),
  [1780] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float_predicate, 1),
  [1782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [1784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [1786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [1788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [1790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [1792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [1794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [1796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [1798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [1800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [1802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [1804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(542),
  [1806] = {.entry = {.count = 1, .reusable = false}}, SHIFT(537),
  [1808] = {.entry = {.count = 1, .reusable = false}}, SHIFT(547),
  [1810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [1812] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xml, 1),
  [1814] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xml, 1),
  [1816] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_value, 4),
  [1818] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_file_value, 4),
  [1820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [1822] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_string, 3),
  [1824] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_number, 3),
  [1826] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_null, 1),
  [1828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [1830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [1832] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1),
  [1834] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_string, 5),
  [1836] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline_string, 5),
  [1838] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_predicate, 1),
  [1840] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean_predicate, 1),
  [1842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [1844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [1846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [1848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [1850] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_multipart_form_data_section_repeat1, 2),
  [1852] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_multipart_form_data_section_repeat1, 2),
  [1854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [1856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [1858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [1860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [1862] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bytes, 1),
  [1864] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bytes, 1),
  [1866] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneline_hex, 3),
  [1868] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneline_hex, 3),
  [1870] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneline_base64, 3),
  [1872] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneline_base64, 3),
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
