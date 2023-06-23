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
#define STATE_COUNT 609
#define LARGE_STATE_COUNT 19
#define SYMBOL_COUNT 331
#define ALIAS_COUNT 1
#define TOKEN_COUNT 154
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
  anon_sym_compressed = 39,
  anon_sym_location = 40,
  anon_sym_insecure = 41,
  anon_sym_max_DASHredirs = 42,
  anon_sym_path_as_is = 43,
  anon_sym_retry = 44,
  anon_sym_retry_DASHinterval = 45,
  anon_sym_retry_DASHmax_DASHcount = 46,
  anon_sym_variable = 47,
  anon_sym_verbose = 48,
  anon_sym_very_DASHverbose = 49,
  anon_sym_EQ = 50,
  anon_sym_status = 51,
  anon_sym_url = 52,
  anon_sym_header = 53,
  anon_sym_cookie = 54,
  anon_sym_body = 55,
  anon_sym_xpath = 56,
  anon_sym_jsonpath = 57,
  anon_sym_regex = 58,
  anon_sym_duration = 59,
  anon_sym_sha256 = 60,
  anon_sym_md5 = 61,
  anon_sym_bytes = 62,
  anon_sym_not = 63,
  anon_sym_equals = 64,
  anon_sym_EQ_EQ = 65,
  anon_sym_notEquals = 66,
  anon_sym_BANG_EQ = 67,
  anon_sym_greaterThan = 68,
  anon_sym_GT = 69,
  anon_sym_greaterThanOrEquals = 70,
  anon_sym_GT_EQ = 71,
  anon_sym_lessThan = 72,
  anon_sym_LT = 73,
  anon_sym_lessThanOrEquals = 74,
  anon_sym_LT_EQ = 75,
  anon_sym_startsWith = 76,
  anon_sym_endsWith = 77,
  anon_sym_contains = 78,
  anon_sym_matches = 79,
  anon_sym_exists = 80,
  anon_sym_includes = 81,
  anon_sym_isInteger = 82,
  anon_sym_isFloat = 83,
  anon_sym_isBoolean = 84,
  anon_sym_isString = 85,
  anon_sym_isCollection = 86,
  anon_sym_LT_QMARK = 87,
  aux_sym_xml_prolog_tag_token1 = 88,
  anon_sym_QMARK_GT = 89,
  aux_sym_xml_open_tag_token1 = 90,
  anon_sym_LT_SLASH = 91,
  aux_sym_xml_close_tag_token1 = 92,
  anon_sym_base64_COMMA = 93,
  aux_sym_oneline_base64_token1 = 94,
  anon_sym_hex_COMMA = 95,
  anon_sym_DQUOTE = 96,
  aux_sym_quoted_string_text_token1 = 97,
  anon_sym_BSLASH = 98,
  aux_sym_invalid_quoted_string_escaped_char_token1 = 99,
  anon_sym_b = 100,
  anon_sym_f = 101,
  anon_sym_n = 102,
  anon_sym_r = 103,
  anon_sym_t = 104,
  anon_sym_u = 105,
  sym_key_string_text = 106,
  anon_sym_BSLASH2 = 107,
  aux_sym_key_string_escaped_char_token1 = 108,
  aux_sym_value_string_text_token1 = 109,
  anon_sym_POUND = 110,
  anon_sym_BQUOTE = 111,
  aux_sym_oneline_string_text_token1 = 112,
  aux_sym_oneline_string_text_token2 = 113,
  anon_sym_BQUOTE_BQUOTE_BQUOTE = 114,
  anon_sym_base64 = 115,
  anon_sym_hex = 116,
  anon_sym_json = 117,
  anon_sym_xml = 118,
  anon_sym_graphql = 119,
  aux_sym__multiline_string_text_token1 = 120,
  anon_sym_LBRACE = 121,
  sym_filename_text = 122,
  aux_sym_filename_escaped_char_token1 = 123,
  anon_sym_RBRACE = 124,
  anon_sym_COMMA = 125,
  anon_sym_LBRACK = 126,
  anon_sym_RBRACK = 127,
  aux_sym_json_string_text_token1 = 128,
  anon_sym_LBRACE_LBRACE = 129,
  anon_sym_RBRACE_RBRACE = 130,
  aux_sym_variable_name_token1 = 131,
  aux_sym_variable_name_token2 = 132,
  anon_sym_count = 133,
  anon_sym_urlEncode = 134,
  anon_sym_urlDecode = 135,
  anon_sym_htmlEscape = 136,
  anon_sym_htmlUnescape = 137,
  anon_sym_toInt = 138,
  anon_sym_true = 139,
  anon_sym_false = 140,
  anon_sym_null = 141,
  aux_sym__alphanum_token1 = 142,
  aux_sym_digit_token1 = 143,
  aux_sym_hexdigit_token1 = 144,
  anon_sym_DOT = 145,
  anon_sym_e = 146,
  anon_sym_E = 147,
  anon_sym_PLUS = 148,
  anon_sym_DASH = 149,
  sym_comment = 150,
  anon_sym_SLASH = 151,
  aux_sym_regex_text_token1 = 152,
  aux_sym_regex_escaped_char_token1 = 153,
  sym_hurl_file = 154,
  sym_entry = 155,
  sym__comment_or_new_line = 156,
  sym_request = 157,
  sym_response = 158,
  sym_method = 159,
  sym_version = 160,
  sym_status = 161,
  sym_header = 162,
  sym_body = 163,
  sym_request_section = 164,
  sym_response_section = 165,
  sym_basic_auth_section = 166,
  sym_query_string_params_section = 167,
  sym_form_params_section = 168,
  sym_multipart_form_data_section = 169,
  sym_cookies_section = 170,
  sym_captures_section = 171,
  sym_asserts_section = 172,
  sym_options_section = 173,
  sym_key_value = 174,
  sym_multipart_form_data_param = 175,
  sym_file_param = 176,
  sym_file_value = 177,
  sym_file_contenttype = 178,
  sym_capture = 179,
  sym_assert = 180,
  sym_option = 181,
  sym_ca_certificate_option = 182,
  sym_compressed_option = 183,
  sym_follow_redirect_option = 184,
  sym_insecure_option = 185,
  sym_max_redirs_option = 186,
  sym_path_as_is_option = 187,
  sym_retry_option = 188,
  sym_retry_interval_option = 189,
  sym_retry_max_count_option = 190,
  sym_variable_option = 191,
  sym_verbose_option = 192,
  sym_very_verbose_option = 193,
  sym_variable_definition = 194,
  sym_variable_value = 195,
  sym_query = 196,
  sym_status_query = 197,
  sym_url_query = 198,
  sym_header_query = 199,
  sym_cookie_query = 200,
  sym_body_query = 201,
  sym_xpath_query = 202,
  sym_jsonpath_query = 203,
  sym_regex_query = 204,
  sym_variable_query = 205,
  sym_duration_query = 206,
  sym_sha256_query = 207,
  sym_md5_query = 208,
  sym_bytes_query = 209,
  sym_predicate = 210,
  sym_predicate_func = 211,
  sym_equal_predicate = 212,
  sym_not_equal_predicate = 213,
  sym_greater_predicate = 214,
  sym_greater_or_equal_predicate = 215,
  sym_less_predicate = 216,
  sym_less_or_equal_predicate = 217,
  sym_start_with_predicate = 218,
  sym_end_with_predicate = 219,
  sym_contain_predicate = 220,
  sym_match_predicate = 221,
  sym_exist_predicate = 222,
  sym_include_predicate = 223,
  sym_integer_predicate = 224,
  sym_float_predicate = 225,
  sym_boolean_predicate = 226,
  sym_string_predicate = 227,
  sym_collection_predicate = 228,
  sym_predicate_value = 229,
  sym_bytes = 230,
  sym_xml = 231,
  sym_xml_prolog_tag = 232,
  sym_xml_tag = 233,
  sym_xml_open_tag = 234,
  sym_xml_close_tag = 235,
  sym_oneline_base64 = 236,
  sym_oneline_file = 237,
  sym_oneline_hex = 238,
  sym_quoted_string = 239,
  sym_quoted_string_content = 240,
  sym_quoted_string_text = 241,
  sym_invalid_quoted_string_escaped_char = 242,
  sym_quoted_string_escaped_char = 243,
  sym_key_string = 244,
  sym_key_string_content = 245,
  sym_key_string_escaped_char = 246,
  sym_value_string = 247,
  sym_value_string_content = 248,
  sym_value_string_text = 249,
  sym_value_string_escaped_char = 250,
  sym_oneline_string = 251,
  sym_oneline_string_content = 252,
  sym_oneline_string_text = 253,
  sym_oneline_string_escaped_char = 254,
  sym_multiline_string = 255,
  sym_multiline_string_type = 256,
  sym_multiline_string_content = 257,
  sym__multiline_string_text = 258,
  sym_multiline_string_escaped_char = 259,
  sym_filename = 260,
  sym_filename_content = 261,
  sym_filename_escaped_char = 262,
  sym_unicode_char = 263,
  sym_json_value = 264,
  sym_json_object = 265,
  sym_json_key_value = 266,
  sym_json_key_string = 267,
  sym_json_array = 268,
  sym_json_string = 269,
  sym_json_string_content = 270,
  sym_json_string_text = 271,
  sym_json_string_escaped_char = 272,
  sym_json_number = 273,
  sym_template = 274,
  sym_expr = 275,
  sym_variable_name = 276,
  sym_filter = 277,
  sym_regex_filter = 278,
  sym_count_filter = 279,
  sym_url_encode_filter = 280,
  sym_url_decode_filter = 281,
  sym_html_encode_filter = 282,
  sym_html_decode_filter = 283,
  sym_to_int_filter = 284,
  sym_boolean = 285,
  sym_null = 286,
  sym_integer = 287,
  sym_float = 288,
  sym_digit = 289,
  sym_hexdigit = 290,
  sym_fraction = 291,
  sym_exponent = 292,
  sym_regex = 293,
  sym_regex_content = 294,
  sym_regex_text = 295,
  sym_regex_escaped_char = 296,
  aux_sym_hurl_file_repeat1 = 297,
  aux_sym_hurl_file_repeat2 = 298,
  aux_sym__comment_or_new_line_repeat1 = 299,
  aux_sym_request_repeat1 = 300,
  aux_sym_request_repeat2 = 301,
  aux_sym_response_repeat1 = 302,
  aux_sym_query_string_params_section_repeat1 = 303,
  aux_sym_multipart_form_data_section_repeat1 = 304,
  aux_sym_captures_section_repeat1 = 305,
  aux_sym_asserts_section_repeat1 = 306,
  aux_sym_options_section_repeat1 = 307,
  aux_sym_capture_repeat1 = 308,
  aux_sym_xml_repeat1 = 309,
  aux_sym_xml_tag_repeat1 = 310,
  aux_sym_oneline_hex_repeat1 = 311,
  aux_sym_quoted_string_repeat1 = 312,
  aux_sym_quoted_string_content_repeat1 = 313,
  aux_sym_key_string_repeat1 = 314,
  aux_sym_key_string_content_repeat1 = 315,
  aux_sym_value_string_repeat1 = 316,
  aux_sym_value_string_content_repeat1 = 317,
  aux_sym_value_string_text_repeat1 = 318,
  aux_sym_oneline_string_repeat1 = 319,
  aux_sym_oneline_string_content_repeat1 = 320,
  aux_sym_multiline_string_repeat1 = 321,
  aux_sym_multiline_string_content_repeat1 = 322,
  aux_sym__multiline_string_text_repeat1 = 323,
  aux_sym_filename_repeat1 = 324,
  aux_sym_filename_content_repeat1 = 325,
  aux_sym_json_object_repeat1 = 326,
  aux_sym_json_array_repeat1 = 327,
  aux_sym_json_string_repeat1 = 328,
  aux_sym_integer_repeat1 = 329,
  aux_sym_regex_content_repeat1 = 330,
  anon_alias_sym_json_key_string = 331,
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
  [anon_sym_compressed] = "compressed",
  [anon_sym_location] = "location",
  [anon_sym_insecure] = "insecure",
  [anon_sym_max_DASHredirs] = "max-redirs",
  [anon_sym_path_as_is] = "path_as_is",
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
  [sym_compressed_option] = "compressed_option",
  [sym_follow_redirect_option] = "follow_redirect_option",
  [sym_insecure_option] = "insecure_option",
  [sym_max_redirs_option] = "max_redirs_option",
  [sym_path_as_is_option] = "path_as_is_option",
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
  [anon_sym_compressed] = anon_sym_compressed,
  [anon_sym_location] = anon_sym_location,
  [anon_sym_insecure] = anon_sym_insecure,
  [anon_sym_max_DASHredirs] = anon_sym_max_DASHredirs,
  [anon_sym_path_as_is] = anon_sym_path_as_is,
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
  [sym_compressed_option] = sym_compressed_option,
  [sym_follow_redirect_option] = sym_follow_redirect_option,
  [sym_insecure_option] = sym_insecure_option,
  [sym_max_redirs_option] = sym_max_redirs_option,
  [sym_path_as_is_option] = sym_path_as_is_option,
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
  [anon_sym_path_as_is] = {
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
  [52] = 52,
  [53] = 53,
  [54] = 12,
  [55] = 11,
  [56] = 56,
  [57] = 40,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 12,
  [67] = 11,
  [68] = 68,
  [69] = 69,
  [70] = 56,
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
  [114] = 113,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 116,
  [121] = 121,
  [122] = 118,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 64,
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
  [144] = 144,
  [145] = 145,
  [146] = 138,
  [147] = 147,
  [148] = 148,
  [149] = 147,
  [150] = 148,
  [151] = 151,
  [152] = 137,
  [153] = 153,
  [154] = 154,
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
  [168] = 153,
  [169] = 169,
  [170] = 170,
  [171] = 155,
  [172] = 172,
  [173] = 153,
  [174] = 164,
  [175] = 155,
  [176] = 167,
  [177] = 177,
  [178] = 178,
  [179] = 172,
  [180] = 170,
  [181] = 82,
  [182] = 182,
  [183] = 183,
  [184] = 93,
  [185] = 74,
  [186] = 84,
  [187] = 96,
  [188] = 97,
  [189] = 189,
  [190] = 91,
  [191] = 90,
  [192] = 73,
  [193] = 193,
  [194] = 85,
  [195] = 89,
  [196] = 86,
  [197] = 76,
  [198] = 198,
  [199] = 199,
  [200] = 92,
  [201] = 88,
  [202] = 87,
  [203] = 75,
  [204] = 94,
  [205] = 78,
  [206] = 95,
  [207] = 207,
  [208] = 208,
  [209] = 209,
  [210] = 159,
  [211] = 211,
  [212] = 212,
  [213] = 77,
  [214] = 72,
  [215] = 83,
  [216] = 163,
  [217] = 81,
  [218] = 80,
  [219] = 79,
  [220] = 220,
  [221] = 193,
  [222] = 222,
  [223] = 223,
  [224] = 224,
  [225] = 225,
  [226] = 226,
  [227] = 169,
  [228] = 228,
  [229] = 229,
  [230] = 230,
  [231] = 231,
  [232] = 232,
  [233] = 222,
  [234] = 166,
  [235] = 235,
  [236] = 236,
  [237] = 224,
  [238] = 238,
  [239] = 239,
  [240] = 240,
  [241] = 241,
  [242] = 242,
  [243] = 243,
  [244] = 244,
  [245] = 245,
  [246] = 246,
  [247] = 247,
  [248] = 235,
  [249] = 249,
  [250] = 250,
  [251] = 251,
  [252] = 252,
  [253] = 226,
  [254] = 182,
  [255] = 255,
  [256] = 256,
  [257] = 257,
  [258] = 226,
  [259] = 259,
  [260] = 260,
  [261] = 261,
  [262] = 252,
  [263] = 242,
  [264] = 183,
  [265] = 265,
  [266] = 266,
  [267] = 235,
  [268] = 225,
  [269] = 269,
  [270] = 270,
  [271] = 271,
  [272] = 272,
  [273] = 273,
  [274] = 246,
  [275] = 246,
  [276] = 276,
  [277] = 277,
  [278] = 240,
  [279] = 246,
  [280] = 280,
  [281] = 12,
  [282] = 11,
  [283] = 272,
  [284] = 284,
  [285] = 230,
  [286] = 51,
  [287] = 287,
  [288] = 229,
  [289] = 289,
  [290] = 259,
  [291] = 291,
  [292] = 240,
  [293] = 293,
  [294] = 247,
  [295] = 246,
  [296] = 296,
  [297] = 276,
  [298] = 255,
  [299] = 299,
  [300] = 300,
  [301] = 301,
  [302] = 302,
  [303] = 296,
  [304] = 304,
  [305] = 305,
  [306] = 306,
  [307] = 307,
  [308] = 308,
  [309] = 309,
  [310] = 310,
  [311] = 311,
  [312] = 312,
  [313] = 313,
  [314] = 314,
  [315] = 256,
  [316] = 246,
  [317] = 317,
  [318] = 246,
  [319] = 319,
  [320] = 320,
  [321] = 321,
  [322] = 322,
  [323] = 323,
  [324] = 324,
  [325] = 325,
  [326] = 246,
  [327] = 240,
  [328] = 328,
  [329] = 329,
  [330] = 330,
  [331] = 331,
  [332] = 323,
  [333] = 333,
  [334] = 334,
  [335] = 240,
  [336] = 276,
  [337] = 337,
  [338] = 338,
  [339] = 339,
  [340] = 340,
  [341] = 246,
  [342] = 342,
  [343] = 246,
  [344] = 344,
  [345] = 261,
  [346] = 346,
  [347] = 347,
  [348] = 346,
  [349] = 349,
  [350] = 246,
  [351] = 351,
  [352] = 352,
  [353] = 353,
  [354] = 354,
  [355] = 329,
  [356] = 356,
  [357] = 357,
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
  [369] = 369,
  [370] = 370,
  [371] = 246,
  [372] = 372,
  [373] = 373,
  [374] = 374,
  [375] = 375,
  [376] = 356,
  [377] = 377,
  [378] = 378,
  [379] = 379,
  [380] = 380,
  [381] = 381,
  [382] = 382,
  [383] = 378,
  [384] = 384,
  [385] = 385,
  [386] = 386,
  [387] = 379,
  [388] = 385,
  [389] = 389,
  [390] = 357,
  [391] = 357,
  [392] = 384,
  [393] = 357,
  [394] = 394,
  [395] = 357,
  [396] = 396,
  [397] = 397,
  [398] = 397,
  [399] = 354,
  [400] = 400,
  [401] = 401,
  [402] = 357,
  [403] = 403,
  [404] = 404,
  [405] = 357,
  [406] = 406,
  [407] = 357,
  [408] = 408,
  [409] = 400,
  [410] = 410,
  [411] = 357,
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
  [428] = 357,
  [429] = 429,
  [430] = 430,
  [431] = 357,
  [432] = 432,
  [433] = 433,
  [434] = 357,
  [435] = 435,
  [436] = 362,
  [437] = 437,
  [438] = 438,
  [439] = 439,
  [440] = 440,
  [441] = 441,
  [442] = 442,
  [443] = 443,
  [444] = 441,
  [445] = 445,
  [446] = 446,
  [447] = 447,
  [448] = 448,
  [449] = 449,
  [450] = 441,
  [451] = 451,
  [452] = 441,
  [453] = 453,
  [454] = 454,
  [455] = 455,
  [456] = 456,
  [457] = 457,
  [458] = 458,
  [459] = 457,
  [460] = 454,
  [461] = 461,
  [462] = 453,
  [463] = 449,
  [464] = 446,
  [465] = 465,
  [466] = 443,
  [467] = 443,
  [468] = 468,
  [469] = 469,
  [470] = 443,
  [471] = 468,
  [472] = 443,
  [473] = 473,
  [474] = 474,
  [475] = 445,
  [476] = 445,
  [477] = 477,
  [478] = 266,
  [479] = 479,
  [480] = 445,
  [481] = 445,
  [482] = 468,
  [483] = 441,
  [484] = 473,
  [485] = 468,
  [486] = 468,
  [487] = 487,
  [488] = 437,
  [489] = 489,
  [490] = 490,
  [491] = 491,
  [492] = 389,
  [493] = 493,
  [494] = 494,
  [495] = 495,
  [496] = 496,
  [497] = 497,
  [498] = 440,
  [499] = 439,
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
  [518] = 518,
  [519] = 519,
  [520] = 520,
  [521] = 435,
  [522] = 522,
  [523] = 523,
  [524] = 524,
  [525] = 525,
  [526] = 526,
  [527] = 527,
  [528] = 528,
  [529] = 529,
  [530] = 530,
  [531] = 531,
  [532] = 532,
  [533] = 533,
  [534] = 534,
  [535] = 535,
  [536] = 536,
  [537] = 489,
  [538] = 538,
  [539] = 496,
  [540] = 540,
  [541] = 330,
  [542] = 542,
  [543] = 543,
  [544] = 544,
  [545] = 536,
  [546] = 546,
  [547] = 547,
  [548] = 548,
  [549] = 549,
  [550] = 550,
  [551] = 551,
  [552] = 265,
  [553] = 382,
  [554] = 554,
  [555] = 555,
  [556] = 556,
  [557] = 557,
  [558] = 249,
  [559] = 559,
  [560] = 438,
  [561] = 561,
  [562] = 562,
  [563] = 563,
  [564] = 524,
  [565] = 489,
  [566] = 496,
  [567] = 524,
  [568] = 489,
  [569] = 524,
  [570] = 489,
  [571] = 524,
  [572] = 489,
  [573] = 489,
  [574] = 489,
  [575] = 489,
  [576] = 489,
  [577] = 489,
  [578] = 489,
  [579] = 579,
  [580] = 494,
  [581] = 581,
  [582] = 582,
  [583] = 557,
  [584] = 584,
  [585] = 585,
  [586] = 365,
  [587] = 587,
  [588] = 588,
  [589] = 257,
  [590] = 555,
  [591] = 363,
  [592] = 592,
  [593] = 593,
  [594] = 364,
  [595] = 595,
  [596] = 596,
  [597] = 597,
  [598] = 598,
  [599] = 599,
  [600] = 582,
  [601] = 347,
  [602] = 602,
  [603] = 603,
  [604] = 604,
  [605] = 605,
  [606] = 606,
  [607] = 607,
  [608] = 608,
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
      if (eof) ADVANCE(532);
      if (lookahead == '!') ADVANCE(56);
      if (lookahead == '"') ADVANCE(667);
      if (lookahead == '#') ADVANCE(855);
      if (lookahead == '*') ADVANCE(575);
      if (lookahead == '+') ADVANCE(916);
      if (lookahead == ',') ADVANCE(881);
      if (lookahead == '-') ADVANCE(917);
      if (lookahead == '.') ADVANCE(913);
      if (lookahead == '/') ADVANCE(919);
      if (lookahead == ':') ADVANCE(592);
      if (lookahead == ';') ADVANCE(595);
      if (lookahead == '<') ADVANCE(634);
      if (lookahead == '=') ADVANCE(610);
      if (lookahead == '>') ADVANCE(630);
      if (lookahead == '?') ADVANCE(58);
      if (lookahead == 'E') ADVANCE(915);
      if (lookahead == '[') ADVANCE(883);
      if (lookahead == '\\') ADVANCE(847);
      if (lookahead == ']') ADVANCE(888);
      if (lookahead == '`') ADVANCE(857);
      if (lookahead == 'b') ADVANCE(676);
      if (lookahead == 'e') ADVANCE(914);
      if (lookahead == 'f') ADVANCE(677);
      if (lookahead == 'n') ADVANCE(678);
      if (lookahead == 'r') ADVANCE(679);
      if (lookahead == 't') ADVANCE(680);
      if (lookahead == 'u') ADVANCE(681);
      if (lookahead == '{') ADVANCE(874);
      if (lookahead == '}') ADVANCE(880);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'd')) ADVANCE(897);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(574);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(531)
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(897);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(918);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(533);
      if (lookahead == '#') ADVANCE(524);
      if (lookahead == '\\') ADVANCE(672);
      if (lookahead == 'f') ADVANCE(851);
      if (lookahead == 'n') ADVANCE(853);
      if (lookahead == 't') ADVANCE(852);
      if (lookahead == '{') ADVANCE(854);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(850);
      if (aux_sym_value_string_text_token1_character_set_1(lookahead)) ADVANCE(850);
      if (lookahead != 0) ADVANCE(850);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(533);
      if (lookahead == '#') ADVANCE(524);
      if (lookahead == '\\') ADVANCE(672);
      if (lookahead == '{') ADVANCE(854);
      if (aux_sym_value_string_text_token1_character_set_1(lookahead)) ADVANCE(850);
      if (lookahead != 0) ADVANCE(850);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(533);
      if (lookahead == '#') ADVANCE(524);
      if (lookahead == 'b') ADVANCE(185);
      if (lookahead == 'c') ADVANCE(377);
      if (lookahead == 'g') ADVANCE(416);
      if (lookahead == 'h') ADVANCE(242);
      if (lookahead == 'j') ADVANCE(454);
      if (lookahead == 'r') ADVANCE(232);
      if (lookahead == 't') ADVANCE(359);
      if (lookahead == 'u') ADVANCE(408);
      if (lookahead == 'x') ADVANCE(326);
      if (aux_sym_value_string_text_token1_character_set_1(lookahead)) SKIP(4)
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(533);
      if (lookahead == '#') ADVANCE(524);
      if (aux_sym_value_string_text_token1_character_set_1(lookahead)) SKIP(5)
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(533);
      if (lookahead == '#') ADVANCE(524);
      if (aux_sym_value_string_text_token1_character_set_1(lookahead)) SKIP(6)
      if (lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(596);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(533);
      if (lookahead == '#') ADVANCE(524);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == ':') ADVANCE(592);
      if (lookahead == '\\') ADVANCE(847);
      if (lookahead == '{') ADVANCE(522);
      if (aux_sym_value_string_text_token1_character_set_1(lookahead)) SKIP(5)
      END_STATE();
    case 8:
      if (lookahead == '\n') SKIP(32)
      if (lookahead == '#') ADVANCE(524);
      if (lookahead == '<') ADVANCE(635);
      if (lookahead == '\\') ADVANCE(672);
      if (lookahead == '{') ADVANCE(854);
      if (aux_sym_value_string_text_token1_character_set_1(lookahead)) ADVANCE(850);
      if (lookahead != 0) ADVANCE(850);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(534);
      if (lookahead == ' ') SKIP(10)
      if (lookahead == '#') ADVANCE(524);
      if (lookahead == '\\') ADVANCE(672);
      if (lookahead == '{') ADVANCE(876);
      if (sym_filename_text_character_set_1(lookahead)) ADVANCE(875);
      if (lookahead != 0 &&
          lookahead != ';') ADVANCE(878);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(534);
      if (lookahead == ' ') SKIP(10)
      if (lookahead == '#') ADVANCE(524);
      if (lookahead == '\\') ADVANCE(672);
      if (sym_filename_text_character_set_1(lookahead)) ADVANCE(875);
      if (lookahead != 0 &&
          lookahead != ';') ADVANCE(878);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(535);
      if (lookahead == '#') ADVANCE(871);
      if (lookahead == '\\') ADVANCE(672);
      if (lookahead == '`') ADVANCE(857);
      if (lookahead == '{') ADVANCE(874);
      if (aux_sym_value_string_text_token1_character_set_1(lookahead)) ADVANCE(870);
      if (lookahead != 0) ADVANCE(872);
      END_STATE();
    case 12:
      if (lookahead == '\n') SKIP(13)
      if (lookahead == '#') ADVANCE(524);
      if (lookahead == '\\') ADVANCE(672);
      if (lookahead == '`') ADVANCE(856);
      if (lookahead == '{') ADVANCE(860);
      if (aux_sym_value_string_text_token1_character_set_1(lookahead)) ADVANCE(859);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 13:
      if (lookahead == '\n') SKIP(13)
      if (lookahead == '#') ADVANCE(524);
      if (lookahead == '\\') ADVANCE(672);
      if (lookahead == '`') ADVANCE(856);
      if (aux_sym_value_string_text_token1_character_set_1(lookahead)) ADVANCE(859);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 14:
      if (lookahead == '\n') SKIP(14)
      if (lookahead == '#') ADVANCE(922);
      if (lookahead == '/') ADVANCE(919);
      if (lookahead == '\\') ADVANCE(672);
      if (aux_sym_value_string_text_token1_character_set_1(lookahead)) ADVANCE(921);
      if (lookahead != 0) ADVANCE(923);
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(664);
      if (lookahead == '#') ADVANCE(524);
      if (aux_sym_value_string_text_token1_character_set_1(lookahead)) SKIP(15)
      if (('+' <= lookahead && lookahead <= '-') ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(665);
      END_STATE();
    case 16:
      if (lookahead == '\n') SKIP(16)
      if (lookahead == '#') ADVANCE(926);
      if (aux_sym_value_string_text_token1_character_set_1(lookahead)) ADVANCE(925);
      if (lookahead != 0) ADVANCE(924);
      END_STATE();
    case 17:
      if (lookahead == '!') ADVANCE(56);
      if (lookahead == '"') ADVANCE(667);
      if (lookahead == '#') ADVANCE(855);
      if (lookahead == '+') ADVANCE(916);
      if (lookahead == ',') ADVANCE(879);
      if (lookahead == '-') ADVANCE(917);
      if (lookahead == '/') ADVANCE(919);
      if (lookahead == ':') ADVANCE(593);
      if (lookahead == ';') ADVANCE(595);
      if (lookahead == '<') ADVANCE(636);
      if (lookahead == '=') ADVANCE(57);
      if (lookahead == '>') ADVANCE(630);
      if (lookahead == '[') ADVANCE(882);
      if (lookahead == '`') ADVANCE(144);
      if (lookahead == 'b') ADVANCE(168);
      if (lookahead == 'c') ADVANCE(354);
      if (lookahead == 'e') ADVANCE(336);
      if (lookahead == 'f') ADVANCE(150);
      if (lookahead == 'g') ADVANCE(417);
      if (lookahead == 'h') ADVANCE(239);
      if (lookahead == 'i') ADVANCE(338);
      if (lookahead == 'l') ADVANCE(259);
      if (lookahead == 'm') ADVANCE(173);
      if (lookahead == 'n') ADVANCE(369);
      if (lookahead == 'r') ADVANCE(232);
      if (lookahead == 's') ADVANCE(489);
      if (lookahead == 't') ADVANCE(360);
      if (lookahead == 'u') ADVANCE(408);
      if (lookahead == '{') ADVANCE(874);
      if (lookahead == '}') ADVANCE(523);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(911);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(18)
      END_STATE();
    case 18:
      if (lookahead == '!') ADVANCE(56);
      if (lookahead == '"') ADVANCE(667);
      if (lookahead == '#') ADVANCE(855);
      if (lookahead == '+') ADVANCE(916);
      if (lookahead == ',') ADVANCE(879);
      if (lookahead == '-') ADVANCE(917);
      if (lookahead == '/') ADVANCE(919);
      if (lookahead == ':') ADVANCE(593);
      if (lookahead == ';') ADVANCE(595);
      if (lookahead == '<') ADVANCE(636);
      if (lookahead == '=') ADVANCE(57);
      if (lookahead == '>') ADVANCE(630);
      if (lookahead == '[') ADVANCE(882);
      if (lookahead == '`') ADVANCE(144);
      if (lookahead == 'b') ADVANCE(168);
      if (lookahead == 'c') ADVANCE(354);
      if (lookahead == 'e') ADVANCE(336);
      if (lookahead == 'f') ADVANCE(150);
      if (lookahead == 'g') ADVANCE(417);
      if (lookahead == 'h') ADVANCE(239);
      if (lookahead == 'i') ADVANCE(338);
      if (lookahead == 'l') ADVANCE(259);
      if (lookahead == 'm') ADVANCE(173);
      if (lookahead == 'n') ADVANCE(369);
      if (lookahead == 'r') ADVANCE(232);
      if (lookahead == 's') ADVANCE(489);
      if (lookahead == 't') ADVANCE(360);
      if (lookahead == 'u') ADVANCE(408);
      if (lookahead == '{') ADVANCE(873);
      if (lookahead == '}') ADVANCE(523);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(911);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(18)
      END_STATE();
    case 19:
      if (lookahead == '"') ADVANCE(667);
      if (lookahead == '#') ADVANCE(855);
      if (lookahead == '\\') ADVANCE(672);
      if (lookahead == '`') ADVANCE(856);
      if (lookahead == 'b') ADVANCE(676);
      if (lookahead == 'f') ADVANCE(677);
      if (lookahead == 'n') ADVANCE(678);
      if (lookahead == 'r') ADVANCE(679);
      if (lookahead == 't') ADVANCE(680);
      if (lookahead == 'u') ADVANCE(681);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(19)
      END_STATE();
    case 20:
      if (lookahead == '"') ADVANCE(667);
      if (lookahead == '#') ADVANCE(524);
      if (lookahead == ',') ADVANCE(881);
      if (lookahead == '.') ADVANCE(913);
      if (lookahead == ':') ADVANCE(593);
      if (lookahead == '<') ADVANCE(637);
      if (lookahead == '=') ADVANCE(609);
      if (lookahead == '>') ADVANCE(629);
      if (lookahead == 'E') ADVANCE(915);
      if (lookahead == ']') ADVANCE(888);
      if (lookahead == 'b') ADVANCE(353);
      if (lookahead == 'c') ADVANCE(373);
      if (lookahead == 'd') ADVANCE(502);
      if (lookahead == 'e') ADVANCE(914);
      if (lookahead == 'h') ADVANCE(250);
      if (lookahead == 'j') ADVANCE(443);
      if (lookahead == 'm') ADVANCE(208);
      if (lookahead == 'r') ADVANCE(232);
      if (lookahead == 's') ADVANCE(275);
      if (lookahead == 'u') ADVANCE(403);
      if (lookahead == 'v') ADVANCE(163);
      if (lookahead == 'x') ADVANCE(385);
      if (lookahead == '{') ADVANCE(873);
      if (lookahead == '}') ADVANCE(880);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(911);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(20)
      END_STATE();
    case 21:
      if (lookahead == '"') ADVANCE(667);
      if (lookahead == '#') ADVANCE(524);
      if (lookahead == 'f') ADVANCE(149);
      if (lookahead == 'n') ADVANCE(499);
      if (lookahead == 't') ADVANCE(402);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(911);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(21)
      END_STATE();
    case 22:
      if (lookahead == '"') ADVANCE(667);
      if (lookahead == '#') ADVANCE(524);
      if (sym_key_string_text_character_set_1(lookahead)) ADVANCE(843);
      if (lookahead == '\\') ADVANCE(847);
      if (lookahead == 'f') ADVANCE(825);
      if (lookahead == 'n') ADVANCE(817);
      if (lookahead == 't') ADVANCE(790);
      if (lookahead == '{') ADVANCE(522);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(843);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(21)
      END_STATE();
    case 23:
      if (lookahead == '"') ADVANCE(667);
      if (lookahead == '#') ADVANCE(668);
      if (lookahead == '\\') ADVANCE(672);
      if (lookahead == '{') ADVANCE(670);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) ADVANCE(669);
      if (lookahead != 0) ADVANCE(671);
      END_STATE();
    case 24:
      if (lookahead == '"') ADVANCE(667);
      if (lookahead == '#') ADVANCE(892);
      if (lookahead == '\\') ADVANCE(672);
      if (lookahead == '{') ADVANCE(891);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) ADVANCE(890);
      if (lookahead != 0) ADVANCE(889);
      END_STATE();
    case 25:
      if (lookahead == '"') ADVANCE(667);
      if (lookahead == '#') ADVANCE(675);
      if (lookahead == '\\') ADVANCE(672);
      if (lookahead == 'b') ADVANCE(676);
      if (lookahead == 'f') ADVANCE(677);
      if (lookahead == 'n') ADVANCE(678);
      if (lookahead == 'r') ADVANCE(679);
      if (lookahead == 't') ADVANCE(680);
      if (lookahead == 'u') ADVANCE(681);
      if (lookahead == '\t' ||
          lookahead == '\r') SKIP(25)
      if (aux_sym_invalid_quoted_string_escaped_char_token1_character_set_1(lookahead)) ADVANCE(674);
      if (lookahead != 0 &&
          lookahead != '\f') ADVANCE(673);
      END_STATE();
    case 26:
      if (lookahead == '"') ADVANCE(848);
      if (lookahead == '#') ADVANCE(849);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == ':') ADVANCE(592);
      if (lookahead == '\\') ADVANCE(847);
      if (lookahead == '{') ADVANCE(522);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(28)
      END_STATE();
    case 27:
      if (lookahead == '#') ADVANCE(524);
      if (lookahead == '*') ADVANCE(575);
      if (lookahead == '=') ADVANCE(609);
      if (lookahead == 'c') ADVANCE(377);
      if (lookahead == 'h') ADVANCE(476);
      if (lookahead == 'r') ADVANCE(232);
      if (lookahead == 't') ADVANCE(359);
      if (lookahead == 'u') ADVANCE(408);
      if (lookahead == '}') ADVANCE(523);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(574);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(27)
      END_STATE();
    case 28:
      if (lookahead == '#') ADVANCE(524);
      if (lookahead == ':') ADVANCE(593);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(28)
      END_STATE();
    case 29:
      if (lookahead == '#') ADVANCE(524);
      if (lookahead == ';') ADVANCE(595);
      if (lookahead == '\\') ADVANCE(672);
      if (lookahead == '{') ADVANCE(876);
      if (lookahead == '\n' ||
          lookahead == ' ') SKIP(30)
      if (sym_filename_text_character_set_1(lookahead)) ADVANCE(877);
      if (lookahead != 0) ADVANCE(878);
      END_STATE();
    case 30:
      if (lookahead == '#') ADVANCE(524);
      if (lookahead == ';') ADVANCE(595);
      if (lookahead == '\\') ADVANCE(672);
      if (lookahead == '\n' ||
          lookahead == ' ') SKIP(30)
      if (sym_filename_text_character_set_1(lookahead)) ADVANCE(877);
      if (lookahead != 0) ADVANCE(878);
      END_STATE();
    case 31:
      if (lookahead == '#') ADVANCE(524);
      if (lookahead == ';') ADVANCE(595);
      if (lookahead == '}') ADVANCE(880);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(912);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(31)
      END_STATE();
    case 32:
      if (lookahead == '#') ADVANCE(524);
      if (lookahead == '<') ADVANCE(635);
      if (lookahead == '\\') ADVANCE(672);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(32)
      END_STATE();
    case 33:
      if (lookahead == '#') ADVANCE(524);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(33)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(897);
      END_STATE();
    case 34:
      if (lookahead == '#') ADVANCE(524);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == ':') ADVANCE(593);
      if (lookahead == '\\') ADVANCE(847);
      if (lookahead == '{') ADVANCE(522);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(28)
      END_STATE();
    case 35:
      if (lookahead == '#') ADVANCE(656);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) ADVANCE(657);
      if (lookahead != 0 &&
          lookahead != '/' &&
          lookahead != '?') ADVANCE(658);
      END_STATE();
    case 36:
      if (lookahead == '#') ADVANCE(652);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) ADVANCE(653);
      if (lookahead != 0 &&
          lookahead != '?') ADVANCE(654);
      END_STATE();
    case 37:
      if (lookahead == '#') ADVANCE(863);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) ADVANCE(862);
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(861);
      END_STATE();
    case 38:
      if (lookahead == '#') ADVANCE(660);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) ADVANCE(661);
      if (lookahead != 0 &&
          lookahead != '/' &&
          lookahead != '>') ADVANCE(662);
      END_STATE();
    case 39:
      if (lookahead == '*') ADVANCE(571);
      if (lookahead == '1') ADVANCE(46);
      if (lookahead == '2') ADVANCE(570);
      END_STATE();
    case 40:
      if (lookahead == ',') ADVANCE(666);
      END_STATE();
    case 41:
      if (lookahead == ',') ADVANCE(594);
      END_STATE();
    case 42:
      if (lookahead == ',') ADVANCE(663);
      END_STATE();
    case 43:
      if (lookahead == '-') ADVANCE(513);
      END_STATE();
    case 44:
      if (lookahead == '-') ADVANCE(198);
      END_STATE();
    case 45:
      if (lookahead == '-') ADVANCE(413);
      END_STATE();
    case 46:
      if (lookahead == '.') ADVANCE(47);
      END_STATE();
    case 47:
      if (lookahead == '0') ADVANCE(568);
      if (lookahead == '1') ADVANCE(569);
      END_STATE();
    case 48:
      if (lookahead == '2') ADVANCE(52);
      END_STATE();
    case 49:
      if (lookahead == '4') ADVANCE(865);
      END_STATE();
    case 50:
      if (lookahead == '4') ADVANCE(42);
      END_STATE();
    case 51:
      if (lookahead == '5') ADVANCE(621);
      END_STATE();
    case 52:
      if (lookahead == '5') ADVANCE(54);
      END_STATE();
    case 53:
      if (lookahead == '6') ADVANCE(50);
      END_STATE();
    case 54:
      if (lookahead == '6') ADVANCE(620);
      END_STATE();
    case 55:
      if (lookahead == '6') ADVANCE(49);
      END_STATE();
    case 56:
      if (lookahead == '=') ADVANCE(627);
      END_STATE();
    case 57:
      if (lookahead == '=') ADVANCE(625);
      END_STATE();
    case 58:
      if (lookahead == '>') ADVANCE(655);
      END_STATE();
    case 59:
      if (lookahead == 'A') ADVANCE(69);
      END_STATE();
    case 60:
      if (lookahead == 'A') ADVANCE(67);
      END_STATE();
    case 61:
      if (lookahead == 'A') ADVANCE(500);
      END_STATE();
    case 62:
      if (lookahead == 'A') ADVANCE(126);
      if (lookahead == 'O') ADVANCE(121);
      if (lookahead == 'R') ADVANCE(110);
      if (lookahead == 'U') ADVANCE(117);
      END_STATE();
    case 63:
      if (lookahead == 'B') ADVANCE(366);
      if (lookahead == 'C') ADVANCE(364);
      if (lookahead == 'F') ADVANCE(310);
      if (lookahead == 'I') ADVANCE(344);
      if (lookahead == 'S') ADVANCE(485);
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
      if (lookahead == 'D') ADVANCE(538);
      END_STATE();
    case 70:
      if (lookahead == 'D') ADVANCE(564);
      END_STATE();
    case 71:
      if (lookahead == 'D') ADVANCE(160);
      END_STATE();
    case 72:
      if (lookahead == 'D') ADVANCE(258);
      if (lookahead == 'E') ADVANCE(347);
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
      if (lookahead == 'E') ADVANCE(558);
      END_STATE();
    case 77:
      if (lookahead == 'E') ADVANCE(550);
      END_STATE();
    case 78:
      if (lookahead == 'E') ADVANCE(544);
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
      if (lookahead == 'E') ADVANCE(458);
      if (lookahead == 'U') ADVANCE(348);
      END_STATE();
    case 84:
      if (lookahead == 'E') ADVANCE(389);
      END_STATE();
    case 85:
      if (lookahead == 'E') ADVANCE(390);
      END_STATE();
    case 86:
      if (lookahead == 'F') ADVANCE(93);
      END_STATE();
    case 87:
      if (lookahead == 'F') ADVANCE(371);
      END_STATE();
    case 88:
      if (lookahead == 'G') ADVANCE(76);
      END_STATE();
    case 89:
      if (lookahead == 'H') ADVANCE(552);
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
      if (lookahead == 'I') ADVANCE(345);
      END_STATE();
    case 96:
      if (lookahead == 'K') ADVANCE(554);
      END_STATE();
    case 97:
      if (lookahead == 'K') ADVANCE(560);
      END_STATE();
    case 98:
      if (lookahead == 'K') ADVANCE(556);
      END_STATE();
    case 99:
      if (lookahead == 'K') ADVANCE(562);
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
      if (lookahead == 'P') ADVANCE(572);
      END_STATE();
    case 113:
      if (lookahead == 'P') ADVANCE(157);
      END_STATE();
    case 114:
      if (lookahead == 'P') ADVANCE(86);
      END_STATE();
    case 115:
      if (lookahead == 'P') ADVANCE(125);
      END_STATE();
    case 116:
      if (lookahead == 'P') ADVANCE(184);
      END_STATE();
    case 117:
      if (lookahead == 'R') ADVANCE(88);
      if (lookahead == 'T') ADVANCE(542);
      END_STATE();
    case 118:
      if (lookahead == 'R') ADVANCE(60);
      END_STATE();
    case 119:
      if (lookahead == 'S') ADVANCE(548);
      END_STATE();
    case 120:
      if (lookahead == 'S') ADVANCE(480);
      END_STATE();
    case 121:
      if (lookahead == 'S') ADVANCE(123);
      END_STATE();
    case 122:
      if (lookahead == 'T') ADVANCE(536);
      END_STATE();
    case 123:
      if (lookahead == 'T') ADVANCE(540);
      END_STATE();
    case 124:
      if (lookahead == 'T') ADVANCE(546);
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
      if (lookahead == 'T') ADVANCE(276);
      END_STATE();
    case 129:
      if (lookahead == 'T') ADVANCE(78);
      END_STATE();
    case 130:
      if (lookahead == 'T') ADVANCE(277);
      END_STATE();
    case 131:
      if (lookahead == 'W') ADVANCE(566);
      END_STATE();
    case 132:
      if (lookahead == 'W') ADVANCE(293);
      END_STATE();
    case 133:
      if (lookahead == 'W') ADVANCE(295);
      END_STATE();
    case 134:
      if (lookahead == ']') ADVANCE(588);
      END_STATE();
    case 135:
      if (lookahead == ']') ADVANCE(584);
      END_STATE();
    case 136:
      if (lookahead == ']') ADVANCE(590);
      END_STATE();
    case 137:
      if (lookahead == ']') ADVANCE(586);
      END_STATE();
    case 138:
      if (lookahead == ']') ADVANCE(576);
      END_STATE();
    case 139:
      if (lookahead == ']') ADVANCE(580);
      END_STATE();
    case 140:
      if (lookahead == ']') ADVANCE(582);
      END_STATE();
    case 141:
      if (lookahead == ']') ADVANCE(578);
      END_STATE();
    case 142:
      if (lookahead == '_') ADVANCE(292);
      END_STATE();
    case 143:
      if (lookahead == '_') ADVANCE(174);
      END_STATE();
    case 144:
      if (lookahead == '`') ADVANCE(145);
      END_STATE();
    case 145:
      if (lookahead == '`') ADVANCE(864);
      END_STATE();
    case 146:
      if (lookahead == 'a') ADVANCE(515);
      if (lookahead == 'd') ADVANCE(51);
      END_STATE();
    case 147:
      if (lookahead == 'a') ADVANCE(48);
      END_STATE();
    case 148:
      if (lookahead == 'a') ADVANCE(194);
      END_STATE();
    case 149:
      if (lookahead == 'a') ADVANCE(309);
      END_STATE();
    case 150:
      if (lookahead == 'a') ADVANCE(309);
      if (lookahead == 'i') ADVANCE(307);
      END_STATE();
    case 151:
      if (lookahead == 'a') ADVANCE(323);
      END_STATE();
    case 152:
      if (lookahead == 'a') ADVANCE(204);
      if (lookahead == 'o') ADVANCE(322);
      END_STATE();
    case 153:
      if (lookahead == 'a') ADVANCE(215);
      END_STATE();
    case 154:
      if (lookahead == 'a') ADVANCE(215);
      if (lookahead == 'x') ADVANCE(40);
      END_STATE();
    case 155:
      if (lookahead == 'a') ADVANCE(423);
      END_STATE();
    case 156:
      if (lookahead == 'a') ADVANCE(382);
      END_STATE();
    case 157:
      if (lookahead == 'a') ADVANCE(398);
      END_STATE();
    case 158:
      if (lookahead == 'a') ADVANCE(380);
      END_STATE();
    case 159:
      if (lookahead == 'a') ADVANCE(301);
      END_STATE();
    case 160:
      if (lookahead == 'a') ADVANCE(478);
      END_STATE();
    case 161:
      if (lookahead == 'a') ADVANCE(140);
      END_STATE();
    case 162:
      if (lookahead == 'a') ADVANCE(471);
      END_STATE();
    case 163:
      if (lookahead == 'a') ADVANCE(406);
      END_STATE();
    case 164:
      if (lookahead == 'a') ADVANCE(406);
      if (lookahead == 'e') ADVANCE(393);
      END_STATE();
    case 165:
      if (lookahead == 'a') ADVANCE(473);
      END_STATE();
    case 166:
      if (lookahead == 'a') ADVANCE(296);
      END_STATE();
    case 167:
      if (lookahead == 'a') ADVANCE(330);
      END_STATE();
    case 168:
      if (lookahead == 'a') ADVANCE(444);
      END_STATE();
    case 169:
      if (lookahead == 'a') ADVANCE(444);
      if (lookahead == 'o') ADVANCE(210);
      if (lookahead == 'y') ADVANCE(490);
      END_STATE();
    case 170:
      if (lookahead == 'a') ADVANCE(331);
      END_STATE();
    case 171:
      if (lookahead == 'a') ADVANCE(477);
      END_STATE();
    case 172:
      if (lookahead == 'a') ADVANCE(332);
      END_STATE();
    case 173:
      if (lookahead == 'a') ADVANCE(481);
      END_STATE();
    case 174:
      if (lookahead == 'a') ADVANCE(440);
      END_STATE();
    case 175:
      if (lookahead == 'a') ADVANCE(469);
      END_STATE();
    case 176:
      if (lookahead == 'a') ADVANCE(379);
      END_STATE();
    case 177:
      if (lookahead == 'a') ADVANCE(379);
      if (lookahead == 'o') ADVANCE(351);
      END_STATE();
    case 178:
      if (lookahead == 'a') ADVANCE(518);
      END_STATE();
    case 179:
      if (lookahead == 'a') ADVANCE(313);
      END_STATE();
    case 180:
      if (lookahead == 'a') ADVANCE(479);
      END_STATE();
    case 181:
      if (lookahead == 'a') ADVANCE(324);
      END_STATE();
    case 182:
      if (lookahead == 'a') ADVANCE(405);
      END_STATE();
    case 183:
      if (lookahead == 'a') ADVANCE(383);
      END_STATE();
    case 184:
      if (lookahead == 'a') ADVANCE(419);
      END_STATE();
    case 185:
      if (lookahead == 'a') ADVANCE(459);
      END_STATE();
    case 186:
      if (lookahead == 'a') ADVANCE(315);
      END_STATE();
    case 187:
      if (lookahead == 'a') ADVANCE(316);
      END_STATE();
    case 188:
      if (lookahead == 'a') ADVANCE(317);
      END_STATE();
    case 189:
      if (lookahead == 'a') ADVANCE(488);
      END_STATE();
    case 190:
      if (lookahead == 'a') ADVANCE(421);
      END_STATE();
    case 191:
      if (lookahead == 'a') ADVANCE(494);
      END_STATE();
    case 192:
      if (lookahead == 'a') ADVANCE(491);
      END_STATE();
    case 193:
      if (lookahead == 'b') ADVANCE(368);
      if (lookahead == 'y') ADVANCE(43);
      END_STATE();
    case 194:
      if (lookahead == 'b') ADVANCE(311);
      END_STATE();
    case 195:
      if (lookahead == 'b') ADVANCE(370);
      END_STATE();
    case 196:
      if (lookahead == 'c') ADVANCE(61);
      END_STATE();
    case 197:
      if (lookahead == 'c') ADVANCE(278);
      END_STATE();
    case 198:
      if (lookahead == 'c') ADVANCE(362);
      END_STATE();
    case 199:
      if (lookahead == 'c') ADVANCE(308);
      END_STATE();
    case 200:
      if (lookahead == 'c') ADVANCE(156);
      END_STATE();
    case 201:
      if (lookahead == 'c') ADVANCE(363);
      END_STATE();
    case 202:
      if (lookahead == 'c') ADVANCE(183);
      END_STATE();
    case 203:
      if (lookahead == 'c') ADVANCE(374);
      END_STATE();
    case 204:
      if (lookahead == 'c') ADVANCE(260);
      END_STATE();
    case 205:
      if (lookahead == 'c') ADVANCE(506);
      END_STATE();
    case 206:
      if (lookahead == 'c') ADVANCE(492);
      END_STATE();
    case 207:
      if (lookahead == 'c') ADVANCE(192);
      END_STATE();
    case 208:
      if (lookahead == 'd') ADVANCE(51);
      END_STATE();
    case 209:
      if (lookahead == 'd') ADVANCE(598);
      END_STATE();
    case 210:
      if (lookahead == 'd') ADVANCE(520);
      END_STATE();
    case 211:
      if (lookahead == 'd') ADVANCE(291);
      END_STATE();
    case 212:
      if (lookahead == 'd') ADVANCE(439);
      END_STATE();
    case 213:
      if (lookahead == 'd') ADVANCE(227);
      END_STATE();
    case 214:
      if (lookahead == 'd') ADVANCE(228);
      END_STATE();
    case 215:
      if (lookahead == 'd') ADVANCE(247);
      END_STATE();
    case 216:
      if (lookahead == 'd') ADVANCE(255);
      END_STATE();
    case 217:
      if (lookahead == 'e') ADVANCE(154);
      END_STATE();
    case 218:
      if (lookahead == 'e') ADVANCE(265);
      END_STATE();
    case 219:
      if (lookahead == 'e') ADVANCE(53);
      END_STATE();
    case 220:
      if (lookahead == 'e') ADVANCE(905);
      END_STATE();
    case 221:
      if (lookahead == 'e') ADVANCE(907);
      END_STATE();
    case 222:
      if (lookahead == 'e') ADVANCE(614);
      END_STATE();
    case 223:
      if (lookahead == 'e') ADVANCE(607);
      END_STATE();
    case 224:
      if (lookahead == 'e') ADVANCE(600);
      END_STATE();
    case 225:
      if (lookahead == 'e') ADVANCE(606);
      END_STATE();
    case 226:
      if (lookahead == 'e') ADVANCE(608);
      END_STATE();
    case 227:
      if (lookahead == 'e') ADVANCE(901);
      END_STATE();
    case 228:
      if (lookahead == 'e') ADVANCE(900);
      END_STATE();
    case 229:
      if (lookahead == 'e') ADVANCE(902);
      END_STATE();
    case 230:
      if (lookahead == 'e') ADVANCE(903);
      END_STATE();
    case 231:
      if (lookahead == 'e') ADVANCE(392);
      END_STATE();
    case 232:
      if (lookahead == 'e') ADVANCE(264);
      END_STATE();
    case 233:
      if (lookahead == 'e') ADVANCE(516);
      END_STATE();
    case 234:
      if (lookahead == 'e') ADVANCE(41);
      END_STATE();
    case 235:
      if (lookahead == 'e') ADVANCE(399);
      END_STATE();
    case 236:
      if (lookahead == 'e') ADVANCE(266);
      END_STATE();
    case 237:
      if (lookahead == 'e') ADVANCE(211);
      END_STATE();
    case 238:
      if (lookahead == 'e') ADVANCE(514);
      END_STATE();
    case 239:
      if (lookahead == 'e') ADVANCE(514);
      if (lookahead == 't') ADVANCE(325);
      END_STATE();
    case 240:
      if (lookahead == 'e') ADVANCE(205);
      END_STATE();
    case 241:
      if (lookahead == 'e') ADVANCE(209);
      END_STATE();
    case 242:
      if (lookahead == 'e') ADVANCE(517);
      if (lookahead == 't') ADVANCE(325);
      END_STATE();
    case 243:
      if (lookahead == 'e') ADVANCE(438);
      END_STATE();
    case 244:
      if (lookahead == 'e') ADVANCE(442);
      END_STATE();
    case 245:
      if (lookahead == 'e') ADVANCE(206);
      END_STATE();
    case 246:
      if (lookahead == 'e') ADVANCE(425);
      END_STATE();
    case 247:
      if (lookahead == 'e') ADVANCE(394);
      END_STATE();
    case 248:
      if (lookahead == 'e') ADVANCE(170);
      END_STATE();
    case 249:
      if (lookahead == 'e') ADVANCE(396);
      END_STATE();
    case 250:
      if (lookahead == 'e') ADVANCE(153);
      END_STATE();
    case 251:
      if (lookahead == 'e') ADVANCE(397);
      END_STATE();
    case 252:
      if (lookahead == 'e') ADVANCE(420);
      END_STATE();
    case 253:
      if (lookahead == 'e') ADVANCE(395);
      END_STATE();
    case 254:
      if (lookahead == 'e') ADVANCE(431);
      END_STATE();
    case 255:
      if (lookahead == 'e') ADVANCE(433);
      END_STATE();
    case 256:
      if (lookahead == 'e') ADVANCE(452);
      END_STATE();
    case 257:
      if (lookahead == 'e') ADVANCE(55);
      END_STATE();
    case 258:
      if (lookahead == 'e') ADVANCE(201);
      END_STATE();
    case 259:
      if (lookahead == 'e') ADVANCE(455);
      END_STATE();
    case 260:
      if (lookahead == 'e') ADVANCE(410);
      END_STATE();
    case 261:
      if (lookahead == 'e') ADVANCE(191);
      END_STATE();
    case 262:
      if (lookahead == 'e') ADVANCE(460);
      END_STATE();
    case 263:
      if (lookahead == 'g') ADVANCE(649);
      END_STATE();
    case 264:
      if (lookahead == 'g') ADVANCE(233);
      END_STATE();
    case 265:
      if (lookahead == 'g') ADVANCE(233);
      if (lookahead == 't') ADVANCE(401);
      END_STATE();
    case 266:
      if (lookahead == 'g') ADVANCE(253);
      END_STATE();
    case 267:
      if (lookahead == 'g') ADVANCE(116);
      END_STATE();
    case 268:
      if (lookahead == 'h') ADVANCE(143);
      END_STATE();
    case 269:
      if (lookahead == 'h') ADVANCE(616);
      END_STATE();
    case 270:
      if (lookahead == 'h') ADVANCE(617);
      END_STATE();
    case 271:
      if (lookahead == 'h') ADVANCE(641);
      END_STATE();
    case 272:
      if (lookahead == 'h') ADVANCE(640);
      END_STATE();
    case 273:
      if (lookahead == 'h') ADVANCE(387);
      END_STATE();
    case 274:
      if (lookahead == 'h') ADVANCE(138);
      END_STATE();
    case 275:
      if (lookahead == 'h') ADVANCE(147);
      if (lookahead == 't') ADVANCE(180);
      END_STATE();
    case 276:
      if (lookahead == 'h') ADVANCE(167);
      END_STATE();
    case 277:
      if (lookahead == 'h') ADVANCE(172);
      END_STATE();
    case 278:
      if (lookahead == 'h') ADVANCE(254);
      END_STATE();
    case 279:
      if (lookahead == 'i') ADVANCE(196);
      END_STATE();
    case 280:
      if (lookahead == 'i') ADVANCE(384);
      END_STATE();
    case 281:
      if (lookahead == 'i') ADVANCE(243);
      END_STATE();
    case 282:
      if (lookahead == 'i') ADVANCE(327);
      END_STATE();
    case 283:
      if (lookahead == 'i') ADVANCE(352);
      END_STATE();
    case 284:
      if (lookahead == 'i') ADVANCE(340);
      if (lookahead == 'm') ADVANCE(178);
      END_STATE();
    case 285:
      if (lookahead == 'i') ADVANCE(358);
      END_STATE();
    case 286:
      if (lookahead == 'i') ADVANCE(361);
      END_STATE();
    case 287:
      if (lookahead == 'i') ADVANCE(148);
      END_STATE();
    case 288:
      if (lookahead == 'i') ADVANCE(335);
      END_STATE();
    case 289:
      if (lookahead == 'i') ADVANCE(222);
      END_STATE();
    case 290:
      if (lookahead == 'i') ADVANCE(365);
      END_STATE();
    case 291:
      if (lookahead == 'i') ADVANCE(415);
      END_STATE();
    case 292:
      if (lookahead == 'i') ADVANCE(428);
      END_STATE();
    case 293:
      if (lookahead == 'i') ADVANCE(482);
      END_STATE();
    case 294:
      if (lookahead == 'i') ADVANCE(457);
      END_STATE();
    case 295:
      if (lookahead == 'i') ADVANCE(483);
      END_STATE();
    case 296:
      if (lookahead == 'i') ADVANCE(346);
      END_STATE();
    case 297:
      if (lookahead == 'k') ADVANCE(281);
      END_STATE();
    case 298:
      if (lookahead == 'k') ADVANCE(289);
      END_STATE();
    case 299:
      if (lookahead == 'l') ADVANCE(612);
      END_STATE();
    case 300:
      if (lookahead == 'l') ADVANCE(909);
      END_STATE();
    case 301:
      if (lookahead == 'l') ADVANCE(604);
      END_STATE();
    case 302:
      if (lookahead == 'l') ADVANCE(72);
      END_STATE();
    case 303:
      if (lookahead == 'l') ADVANCE(83);
      END_STATE();
    case 304:
      if (lookahead == 'l') ADVANCE(868);
      END_STATE();
    case 305:
      if (lookahead == 'l') ADVANCE(869);
      END_STATE();
    case 306:
      if (lookahead == 'l') ADVANCE(300);
      END_STATE();
    case 307:
      if (lookahead == 'l') ADVANCE(234);
      END_STATE();
    case 308:
      if (lookahead == 'l') ADVANCE(501);
      END_STATE();
    case 309:
      if (lookahead == 'l') ADVANCE(449);
      END_STATE();
    case 310:
      if (lookahead == 'l') ADVANCE(376);
      END_STATE();
    case 311:
      if (lookahead == 'l') ADVANCE(225);
      END_STATE();
    case 312:
      if (lookahead == 'l') ADVANCE(248);
      END_STATE();
    case 313:
      if (lookahead == 'l') ADVANCE(429);
      END_STATE();
    case 314:
      if (lookahead == 'l') ADVANCE(245);
      END_STATE();
    case 315:
      if (lookahead == 'l') ADVANCE(434);
      END_STATE();
    case 316:
      if (lookahead == 'l') ADVANCE(435);
      END_STATE();
    case 317:
      if (lookahead == 'l') ADVANCE(436);
      END_STATE();
    case 318:
      if (lookahead == 'l') ADVANCE(475);
      END_STATE();
    case 319:
      if (lookahead == 'l') ADVANCE(314);
      END_STATE();
    case 320:
      if (lookahead == 'm') ADVANCE(113);
      END_STATE();
    case 321:
      if (lookahead == 'm') ADVANCE(71);
      END_STATE();
    case 322:
      if (lookahead == 'm') ADVANCE(381);
      if (lookahead == 'o') ADVANCE(298);
      END_STATE();
    case 323:
      if (lookahead == 'm') ADVANCE(445);
      END_STATE();
    case 324:
      if (lookahead == 'm') ADVANCE(447);
      END_STATE();
    case 325:
      if (lookahead == 'm') ADVANCE(303);
      END_STATE();
    case 326:
      if (lookahead == 'm') ADVANCE(304);
      END_STATE();
    case 327:
      if (lookahead == 'n') ADVANCE(267);
      END_STATE();
    case 328:
      if (lookahead == 'n') ADVANCE(619);
      END_STATE();
    case 329:
      if (lookahead == 'n') ADVANCE(599);
      END_STATE();
    case 330:
      if (lookahead == 'n') ADVANCE(633);
      END_STATE();
    case 331:
      if (lookahead == 'n') ADVANCE(648);
      END_STATE();
    case 332:
      if (lookahead == 'n') ADVANCE(628);
      END_STATE();
    case 333:
      if (lookahead == 'n') ADVANCE(650);
      END_STATE();
    case 334:
      if (lookahead == 'n') ADVANCE(867);
      END_STATE();
    case 335:
      if (lookahead == 'n') ADVANCE(263);
      END_STATE();
    case 336:
      if (lookahead == 'n') ADVANCE(212);
      if (lookahead == 'q') ADVANCE(504);
      if (lookahead == 'x') ADVANCE(294);
      END_STATE();
    case 337:
      if (lookahead == 'n') ADVANCE(441);
      END_STATE();
    case 338:
      if (lookahead == 'n') ADVANCE(199);
      if (lookahead == 's') ADVANCE(63);
      END_STATE();
    case 339:
      if (lookahead == 'n') ADVANCE(446);
      END_STATE();
    case 340:
      if (lookahead == 'n') ADVANCE(493);
      END_STATE();
    case 341:
      if (lookahead == 'n') ADVANCE(465);
      END_STATE();
    case 342:
      if (lookahead == 'n') ADVANCE(484);
      if (lookahead == 'u') ADVANCE(343);
      END_STATE();
    case 343:
      if (lookahead == 'n') ADVANCE(467);
      END_STATE();
    case 344:
      if (lookahead == 'n') ADVANCE(486);
      END_STATE();
    case 345:
      if (lookahead == 'n') ADVANCE(468);
      END_STATE();
    case 346:
      if (lookahead == 'n') ADVANCE(432);
      END_STATE();
    case 347:
      if (lookahead == 'n') ADVANCE(203);
      END_STATE();
    case 348:
      if (lookahead == 'n') ADVANCE(262);
      END_STATE();
    case 349:
      if (lookahead == 'n') ADVANCE(386);
      END_STATE();
    case 350:
      if (lookahead == 'o') ADVANCE(391);
      END_STATE();
    case 351:
      if (lookahead == 'o') ADVANCE(297);
      END_STATE();
    case 352:
      if (lookahead == 'o') ADVANCE(337);
      END_STATE();
    case 353:
      if (lookahead == 'o') ADVANCE(210);
      if (lookahead == 'y') ADVANCE(490);
      END_STATE();
    case 354:
      if (lookahead == 'o') ADVANCE(342);
      END_STATE();
    case 355:
      if (lookahead == 'o') ADVANCE(351);
      END_STATE();
    case 356:
      if (lookahead == 'o') ADVANCE(207);
      END_STATE();
    case 357:
      if (lookahead == 'o') ADVANCE(349);
      END_STATE();
    case 358:
      if (lookahead == 'o') ADVANCE(328);
      END_STATE();
    case 359:
      if (lookahead == 'o') ADVANCE(95);
      END_STATE();
    case 360:
      if (lookahead == 'o') ADVANCE(95);
      if (lookahead == 'r') ADVANCE(503);
      END_STATE();
    case 361:
      if (lookahead == 'o') ADVANCE(329);
      END_STATE();
    case 362:
      if (lookahead == 'o') ADVANCE(507);
      END_STATE();
    case 363:
      if (lookahead == 'o') ADVANCE(213);
      END_STATE();
    case 364:
      if (lookahead == 'o') ADVANCE(319);
      END_STATE();
    case 365:
      if (lookahead == 'o') ADVANCE(333);
      END_STATE();
    case 366:
      if (lookahead == 'o') ADVANCE(375);
      END_STATE();
    case 367:
      if (lookahead == 'o') ADVANCE(334);
      END_STATE();
    case 368:
      if (lookahead == 'o') ADVANCE(450);
      END_STATE();
    case 369:
      if (lookahead == 'o') ADVANCE(466);
      if (lookahead == 'u') ADVANCE(306);
      END_STATE();
    case 370:
      if (lookahead == 'o') ADVANCE(453);
      END_STATE();
    case 371:
      if (lookahead == 'o') ADVANCE(400);
      END_STATE();
    case 372:
      if (lookahead == 'o') ADVANCE(298);
      END_STATE();
    case 373:
      if (lookahead == 'o') ADVANCE(372);
      END_STATE();
    case 374:
      if (lookahead == 'o') ADVANCE(214);
      END_STATE();
    case 375:
      if (lookahead == 'o') ADVANCE(312);
      END_STATE();
    case 376:
      if (lookahead == 'o') ADVANCE(175);
      END_STATE();
    case 377:
      if (lookahead == 'o') ADVANCE(508);
      END_STATE();
    case 378:
      if (lookahead == 'p') ADVANCE(470);
      END_STATE();
    case 379:
      if (lookahead == 'p') ADVANCE(472);
      END_STATE();
    case 380:
      if (lookahead == 'p') ADVANCE(273);
      END_STATE();
    case 381:
      if (lookahead == 'p') ADVANCE(411);
      END_STATE();
    case 382:
      if (lookahead == 'p') ADVANCE(229);
      END_STATE();
    case 383:
      if (lookahead == 'p') ADVANCE(230);
      END_STATE();
    case 384:
      if (lookahead == 'p') ADVANCE(182);
      END_STATE();
    case 385:
      if (lookahead == 'p') ADVANCE(165);
      END_STATE();
    case 386:
      if (lookahead == 'p') ADVANCE(171);
      END_STATE();
    case 387:
      if (lookahead == 'q') ADVANCE(305);
      END_STATE();
    case 388:
      if (lookahead == 'q') ADVANCE(509);
      END_STATE();
    case 389:
      if (lookahead == 'q') ADVANCE(510);
      END_STATE();
    case 390:
      if (lookahead == 'q') ADVANCE(511);
      END_STATE();
    case 391:
      if (lookahead == 'r') ADVANCE(320);
      END_STATE();
    case 392:
      if (lookahead == 'r') ADVANCE(519);
      END_STATE();
    case 393:
      if (lookahead == 'r') ADVANCE(193);
      END_STATE();
    case 394:
      if (lookahead == 'r') ADVANCE(613);
      END_STATE();
    case 395:
      if (lookahead == 'r') ADVANCE(646);
      END_STATE();
    case 396:
      if (lookahead == 'r') ADVANCE(195);
      END_STATE();
    case 397:
      if (lookahead == 'r') ADVANCE(512);
      END_STATE();
    case 398:
      if (lookahead == 'r') ADVANCE(151);
      END_STATE();
    case 399:
      if (lookahead == 'r') ADVANCE(474);
      END_STATE();
    case 400:
      if (lookahead == 'r') ADVANCE(321);
      END_STATE();
    case 401:
      if (lookahead == 'r') ADVANCE(521);
      END_STATE();
    case 402:
      if (lookahead == 'r') ADVANCE(503);
      END_STATE();
    case 403:
      if (lookahead == 'r') ADVANCE(299);
      END_STATE();
    case 404:
      if (lookahead == 'r') ADVANCE(282);
      END_STATE();
    case 405:
      if (lookahead == 'r') ADVANCE(463);
      END_STATE();
    case 406:
      if (lookahead == 'r') ADVANCE(287);
      END_STATE();
    case 407:
      if (lookahead == 'r') ADVANCE(189);
      END_STATE();
    case 408:
      if (lookahead == 'r') ADVANCE(302);
      END_STATE();
    case 409:
      if (lookahead == 'r') ADVANCE(84);
      END_STATE();
    case 410:
      if (lookahead == 'r') ADVANCE(464);
      END_STATE();
    case 411:
      if (lookahead == 'r') ADVANCE(256);
      END_STATE();
    case 412:
      if (lookahead == 'r') ADVANCE(288);
      END_STATE();
    case 413:
      if (lookahead == 'r') ADVANCE(237);
      END_STATE();
    case 414:
      if (lookahead == 'r') ADVANCE(224);
      END_STATE();
    case 415:
      if (lookahead == 'r') ADVANCE(427);
      END_STATE();
    case 416:
      if (lookahead == 'r') ADVANCE(158);
      END_STATE();
    case 417:
      if (lookahead == 'r') ADVANCE(261);
      END_STATE();
    case 418:
      if (lookahead == 'r') ADVANCE(244);
      END_STATE();
    case 419:
      if (lookahead == 'r') ADVANCE(181);
      END_STATE();
    case 420:
      if (lookahead == 'r') ADVANCE(130);
      END_STATE();
    case 421:
      if (lookahead == 'r') ADVANCE(495);
      END_STATE();
    case 422:
      if (lookahead == 'r') ADVANCE(85);
      END_STATE();
    case 423:
      if (lookahead == 's') ADVANCE(279);
      END_STATE();
    case 424:
      if (lookahead == 's') ADVANCE(134);
      END_STATE();
    case 425:
      if (lookahead == 's') ADVANCE(622);
      END_STATE();
    case 426:
      if (lookahead == 's') ADVANCE(611);
      END_STATE();
    case 427:
      if (lookahead == 's') ADVANCE(601);
      END_STATE();
    case 428:
      if (lookahead == 's') ADVANCE(602);
      END_STATE();
    case 429:
      if (lookahead == 's') ADVANCE(624);
      END_STATE();
    case 430:
      if (lookahead == 's') ADVANCE(644);
      END_STATE();
    case 431:
      if (lookahead == 's') ADVANCE(643);
      END_STATE();
    case 432:
      if (lookahead == 's') ADVANCE(642);
      END_STATE();
    case 433:
      if (lookahead == 's') ADVANCE(645);
      END_STATE();
    case 434:
      if (lookahead == 's') ADVANCE(626);
      END_STATE();
    case 435:
      if (lookahead == 's') ADVANCE(638);
      END_STATE();
    case 436:
      if (lookahead == 's') ADVANCE(631);
      END_STATE();
    case 437:
      if (lookahead == 's') ADVANCE(456);
      END_STATE();
    case 438:
      if (lookahead == 's') ADVANCE(135);
      END_STATE();
    case 439:
      if (lookahead == 's') ADVANCE(132);
      END_STATE();
    case 440:
      if (lookahead == 's') ADVANCE(142);
      END_STATE();
    case 441:
      if (lookahead == 's') ADVANCE(136);
      END_STATE();
    case 442:
      if (lookahead == 's') ADVANCE(137);
      END_STATE();
    case 443:
      if (lookahead == 's') ADVANCE(357);
      END_STATE();
    case 444:
      if (lookahead == 's') ADVANCE(219);
      END_STATE();
    case 445:
      if (lookahead == 's') ADVANCE(139);
      END_STATE();
    case 446:
      if (lookahead == 's') ADVANCE(240);
      END_STATE();
    case 447:
      if (lookahead == 's') ADVANCE(141);
      END_STATE();
    case 448:
      if (lookahead == 's') ADVANCE(128);
      END_STATE();
    case 449:
      if (lookahead == 's') ADVANCE(221);
      END_STATE();
    case 450:
      if (lookahead == 's') ADVANCE(223);
      END_STATE();
    case 451:
      if (lookahead == 's') ADVANCE(241);
      END_STATE();
    case 452:
      if (lookahead == 's') ADVANCE(451);
      END_STATE();
    case 453:
      if (lookahead == 's') ADVANCE(226);
      END_STATE();
    case 454:
      if (lookahead == 's') ADVANCE(367);
      END_STATE();
    case 455:
      if (lookahead == 's') ADVANCE(448);
      END_STATE();
    case 456:
      if (lookahead == 's') ADVANCE(235);
      END_STATE();
    case 457:
      if (lookahead == 's') ADVANCE(487);
      END_STATE();
    case 458:
      if (lookahead == 's') ADVANCE(200);
      END_STATE();
    case 459:
      if (lookahead == 's') ADVANCE(257);
      END_STATE();
    case 460:
      if (lookahead == 's') ADVANCE(202);
      END_STATE();
    case 461:
      if (lookahead == 's') ADVANCE(133);
      END_STATE();
    case 462:
      if (lookahead == 't') ADVANCE(274);
      END_STATE();
    case 463:
      if (lookahead == 't') ADVANCE(87);
      END_STATE();
    case 464:
      if (lookahead == 't') ADVANCE(597);
      END_STATE();
    case 465:
      if (lookahead == 't') ADVANCE(605);
      END_STATE();
    case 466:
      if (lookahead == 't') ADVANCE(623);
      END_STATE();
    case 467:
      if (lookahead == 't') ADVANCE(899);
      END_STATE();
    case 468:
      if (lookahead == 't') ADVANCE(904);
      END_STATE();
    case 469:
      if (lookahead == 't') ADVANCE(647);
      END_STATE();
    case 470:
      if (lookahead == 't') ADVANCE(283);
      END_STATE();
    case 471:
      if (lookahead == 't') ADVANCE(268);
      END_STATE();
    case 472:
      if (lookahead == 't') ADVANCE(498);
      END_STATE();
    case 473:
      if (lookahead == 't') ADVANCE(269);
      END_STATE();
    case 474:
      if (lookahead == 't') ADVANCE(424);
      END_STATE();
    case 475:
      if (lookahead == 't') ADVANCE(280);
      END_STATE();
    case 476:
      if (lookahead == 't') ADVANCE(325);
      END_STATE();
    case 477:
      if (lookahead == 't') ADVANCE(270);
      END_STATE();
    case 478:
      if (lookahead == 't') ADVANCE(161);
      END_STATE();
    case 479:
      if (lookahead == 't') ADVANCE(505);
      END_STATE();
    case 480:
      if (lookahead == 't') ADVANCE(404);
      END_STATE();
    case 481:
      if (lookahead == 't') ADVANCE(197);
      END_STATE();
    case 482:
      if (lookahead == 't') ADVANCE(271);
      END_STATE();
    case 483:
      if (lookahead == 't') ADVANCE(272);
      END_STATE();
    case 484:
      if (lookahead == 't') ADVANCE(166);
      END_STATE();
    case 485:
      if (lookahead == 't') ADVANCE(412);
      END_STATE();
    case 486:
      if (lookahead == 't') ADVANCE(236);
      END_STATE();
    case 487:
      if (lookahead == 't') ADVANCE(430);
      END_STATE();
    case 488:
      if (lookahead == 't') ADVANCE(285);
      END_STATE();
    case 489:
      if (lookahead == 't') ADVANCE(190);
      END_STATE();
    case 490:
      if (lookahead == 't') ADVANCE(246);
      END_STATE();
    case 491:
      if (lookahead == 't') ADVANCE(286);
      END_STATE();
    case 492:
      if (lookahead == 't') ADVANCE(290);
      END_STATE();
    case 493:
      if (lookahead == 't') ADVANCE(251);
      END_STATE();
    case 494:
      if (lookahead == 't') ADVANCE(252);
      END_STATE();
    case 495:
      if (lookahead == 't') ADVANCE(461);
      END_STATE();
    case 496:
      if (lookahead == 'u') ADVANCE(318);
      END_STATE();
    case 497:
      if (lookahead == 'u') ADVANCE(231);
      END_STATE();
    case 498:
      if (lookahead == 'u') ADVANCE(418);
      END_STATE();
    case 499:
      if (lookahead == 'u') ADVANCE(306);
      END_STATE();
    case 500:
      if (lookahead == 'u') ADVANCE(462);
      END_STATE();
    case 501:
      if (lookahead == 'u') ADVANCE(216);
      END_STATE();
    case 502:
      if (lookahead == 'u') ADVANCE(407);
      END_STATE();
    case 503:
      if (lookahead == 'u') ADVANCE(220);
      END_STATE();
    case 504:
      if (lookahead == 'u') ADVANCE(179);
      END_STATE();
    case 505:
      if (lookahead == 'u') ADVANCE(426);
      END_STATE();
    case 506:
      if (lookahead == 'u') ADVANCE(414);
      END_STATE();
    case 507:
      if (lookahead == 'u') ADVANCE(341);
      END_STATE();
    case 508:
      if (lookahead == 'u') ADVANCE(343);
      END_STATE();
    case 509:
      if (lookahead == 'u') ADVANCE(186);
      END_STATE();
    case 510:
      if (lookahead == 'u') ADVANCE(187);
      END_STATE();
    case 511:
      if (lookahead == 'u') ADVANCE(188);
      END_STATE();
    case 512:
      if (lookahead == 'v') ADVANCE(159);
      END_STATE();
    case 513:
      if (lookahead == 'v') ADVANCE(249);
      END_STATE();
    case 514:
      if (lookahead == 'x') ADVANCE(40);
      END_STATE();
    case 515:
      if (lookahead == 'x') ADVANCE(45);
      END_STATE();
    case 516:
      if (lookahead == 'x') ADVANCE(618);
      END_STATE();
    case 517:
      if (lookahead == 'x') ADVANCE(866);
      END_STATE();
    case 518:
      if (lookahead == 'x') ADVANCE(44);
      END_STATE();
    case 519:
      if (lookahead == 'y') ADVANCE(120);
      END_STATE();
    case 520:
      if (lookahead == 'y') ADVANCE(615);
      END_STATE();
    case 521:
      if (lookahead == 'y') ADVANCE(603);
      END_STATE();
    case 522:
      if (lookahead == '{') ADVANCE(893);
      END_STATE();
    case 523:
      if (lookahead == '}') ADVANCE(896);
      END_STATE();
    case 524:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1);
      END_STATE();
    case 525:
      if (eof) ADVANCE(532);
      if (lookahead == '\n') ADVANCE(533);
      if (lookahead == '"') ADVANCE(667);
      if (lookahead == '#') ADVANCE(524);
      if (lookahead == '.') ADVANCE(913);
      if (lookahead == '<') ADVANCE(637);
      if (lookahead == 'C') ADVANCE(109);
      if (lookahead == 'D') ADVANCE(73);
      if (lookahead == 'E') ADVANCE(915);
      if (lookahead == 'G') ADVANCE(74);
      if (lookahead == 'H') ADVANCE(80);
      if (lookahead == 'L') ADVANCE(91);
      if (lookahead == 'O') ADVANCE(115);
      if (lookahead == 'P') ADVANCE(62);
      if (lookahead == 'T') ADVANCE(118);
      if (lookahead == 'U') ADVANCE(103);
      if (lookahead == 'V') ADVANCE(90);
      if (lookahead == '[') ADVANCE(883);
      if (lookahead == '`') ADVANCE(857);
      if (lookahead == 'b') ADVANCE(169);
      if (lookahead == 'c') ADVANCE(152);
      if (lookahead == 'd') ADVANCE(502);
      if (lookahead == 'e') ADVANCE(914);
      if (lookahead == 'f') ADVANCE(150);
      if (lookahead == 'h') ADVANCE(217);
      if (lookahead == 'i') ADVANCE(339);
      if (lookahead == 'j') ADVANCE(443);
      if (lookahead == 'l') ADVANCE(356);
      if (lookahead == 'm') ADVANCE(146);
      if (lookahead == 'n') ADVANCE(499);
      if (lookahead == 'p') ADVANCE(162);
      if (lookahead == 'r') ADVANCE(218);
      if (lookahead == 's') ADVANCE(275);
      if (lookahead == 't') ADVANCE(402);
      if (lookahead == 'u') ADVANCE(403);
      if (lookahead == 'v') ADVANCE(164);
      if (lookahead == 'x') ADVANCE(385);
      if (lookahead == '{') ADVANCE(874);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(911);
      if (aux_sym_value_string_text_token1_character_set_1(lookahead)) SKIP(526)
      END_STATE();
    case 526:
      if (eof) ADVANCE(532);
      if (lookahead == '\n') ADVANCE(533);
      if (lookahead == '"') ADVANCE(667);
      if (lookahead == '#') ADVANCE(524);
      if (lookahead == '.') ADVANCE(913);
      if (lookahead == '<') ADVANCE(637);
      if (lookahead == 'C') ADVANCE(109);
      if (lookahead == 'D') ADVANCE(73);
      if (lookahead == 'E') ADVANCE(915);
      if (lookahead == 'G') ADVANCE(74);
      if (lookahead == 'H') ADVANCE(80);
      if (lookahead == 'L') ADVANCE(91);
      if (lookahead == 'O') ADVANCE(115);
      if (lookahead == 'P') ADVANCE(62);
      if (lookahead == 'T') ADVANCE(118);
      if (lookahead == 'U') ADVANCE(103);
      if (lookahead == 'V') ADVANCE(90);
      if (lookahead == '[') ADVANCE(883);
      if (lookahead == '`') ADVANCE(857);
      if (lookahead == 'b') ADVANCE(169);
      if (lookahead == 'c') ADVANCE(152);
      if (lookahead == 'd') ADVANCE(502);
      if (lookahead == 'e') ADVANCE(914);
      if (lookahead == 'f') ADVANCE(150);
      if (lookahead == 'h') ADVANCE(217);
      if (lookahead == 'i') ADVANCE(339);
      if (lookahead == 'j') ADVANCE(443);
      if (lookahead == 'l') ADVANCE(356);
      if (lookahead == 'm') ADVANCE(146);
      if (lookahead == 'n') ADVANCE(499);
      if (lookahead == 'p') ADVANCE(162);
      if (lookahead == 'r') ADVANCE(218);
      if (lookahead == 's') ADVANCE(275);
      if (lookahead == 't') ADVANCE(402);
      if (lookahead == 'u') ADVANCE(403);
      if (lookahead == 'v') ADVANCE(164);
      if (lookahead == 'x') ADVANCE(385);
      if (lookahead == '{') ADVANCE(873);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(911);
      if (aux_sym_value_string_text_token1_character_set_1(lookahead)) SKIP(526)
      END_STATE();
    case 527:
      if (eof) ADVANCE(532);
      if (lookahead == '\n') ADVANCE(533);
      if (lookahead == '"') ADVANCE(667);
      if (lookahead == '#') ADVANCE(524);
      if (lookahead == '<') ADVANCE(637);
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
      if (lookahead == '[') ADVANCE(885);
      if (lookahead == '`') ADVANCE(857);
      if (lookahead == 'b') ADVANCE(168);
      if (lookahead == 'f') ADVANCE(150);
      if (lookahead == 'h') ADVANCE(238);
      if (lookahead == 'n') ADVANCE(499);
      if (lookahead == 't') ADVANCE(402);
      if (lookahead == '{') ADVANCE(873);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(911);
      if (aux_sym_value_string_text_token1_character_set_1(lookahead)) SKIP(527)
      END_STATE();
    case 528:
      if (eof) ADVANCE(532);
      if (lookahead == '\n') ADVANCE(533);
      if (lookahead == '"') ADVANCE(667);
      if (lookahead == '#') ADVANCE(524);
      if (lookahead == '<') ADVANCE(637);
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
      if (lookahead == '[') ADVANCE(884);
      if (lookahead == '`') ADVANCE(857);
      if (lookahead == 'b') ADVANCE(168);
      if (lookahead == 'f') ADVANCE(150);
      if (lookahead == 'h') ADVANCE(238);
      if (lookahead == 'n') ADVANCE(499);
      if (lookahead == 't') ADVANCE(402);
      if (lookahead == '{') ADVANCE(873);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(911);
      if (aux_sym_value_string_text_token1_character_set_1(lookahead)) SKIP(528)
      END_STATE();
    case 529:
      if (eof) ADVANCE(532);
      if (lookahead == '\n') ADVANCE(533);
      if (lookahead == '"') ADVANCE(667);
      if (lookahead == '#') ADVANCE(524);
      if (sym_key_string_text_character_set_2(lookahead)) ADVANCE(843);
      if (lookahead == '<') ADVANCE(637);
      if (lookahead == 'C') ADVANCE(730);
      if (lookahead == 'D') ADVANCE(701);
      if (lookahead == 'G') ADVANCE(702);
      if (lookahead == 'H') ADVANCE(683);
      if (lookahead == 'L') ADVANCE(684);
      if (lookahead == 'O') ADVANCE(736);
      if (lookahead == 'P') ADVANCE(682);
      if (lookahead == 'T') ADVANCE(738);
      if (lookahead == 'U') ADVANCE(724);
      if (lookahead == 'V') ADVANCE(714);
      if (lookahead == '[') ADVANCE(886);
      if (lookahead == '\\') ADVANCE(847);
      if (lookahead == '`') ADVANCE(857);
      if (lookahead == 'b') ADVANCE(824);
      if (lookahead == 'f') ADVANCE(687);
      if (lookahead == 'h') ADVANCE(751);
      if (lookahead == 'n') ADVANCE(817);
      if (lookahead == 't') ADVANCE(790);
      if (lookahead == '{') ADVANCE(874);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(843);
      if (aux_sym_value_string_text_token1_character_set_1(lookahead)) SKIP(527)
      END_STATE();
    case 530:
      if (eof) ADVANCE(532);
      if (lookahead == '\n') ADVANCE(533);
      if (lookahead == '"') ADVANCE(667);
      if (lookahead == '#') ADVANCE(524);
      if (sym_key_string_text_character_set_2(lookahead)) ADVANCE(843);
      if (lookahead == '<') ADVANCE(637);
      if (lookahead == 'C') ADVANCE(730);
      if (lookahead == 'D') ADVANCE(701);
      if (lookahead == 'G') ADVANCE(702);
      if (lookahead == 'H') ADVANCE(703);
      if (lookahead == 'L') ADVANCE(684);
      if (lookahead == 'O') ADVANCE(736);
      if (lookahead == 'P') ADVANCE(682);
      if (lookahead == 'T') ADVANCE(738);
      if (lookahead == 'U') ADVANCE(724);
      if (lookahead == 'V') ADVANCE(714);
      if (lookahead == '[') ADVANCE(887);
      if (lookahead == '\\') ADVANCE(847);
      if (lookahead == '`') ADVANCE(857);
      if (lookahead == 'b') ADVANCE(824);
      if (lookahead == 'f') ADVANCE(687);
      if (lookahead == 'h') ADVANCE(751);
      if (lookahead == 'n') ADVANCE(817);
      if (lookahead == 't') ADVANCE(790);
      if (lookahead == '{') ADVANCE(874);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(843);
      if (aux_sym_value_string_text_token1_character_set_1(lookahead)) SKIP(528)
      END_STATE();
    case 531:
      if (eof) ADVANCE(532);
      if (lookahead == '!') ADVANCE(56);
      if (lookahead == '"') ADVANCE(667);
      if (lookahead == '#') ADVANCE(855);
      if (lookahead == '*') ADVANCE(575);
      if (lookahead == '+') ADVANCE(916);
      if (lookahead == ',') ADVANCE(881);
      if (lookahead == '-') ADVANCE(917);
      if (lookahead == '.') ADVANCE(913);
      if (lookahead == '/') ADVANCE(919);
      if (lookahead == ':') ADVANCE(593);
      if (lookahead == ';') ADVANCE(595);
      if (lookahead == '<') ADVANCE(634);
      if (lookahead == '=') ADVANCE(610);
      if (lookahead == '>') ADVANCE(630);
      if (lookahead == '?') ADVANCE(58);
      if (lookahead == 'E') ADVANCE(915);
      if (lookahead == '[') ADVANCE(883);
      if (lookahead == '\\') ADVANCE(672);
      if (lookahead == ']') ADVANCE(888);
      if (lookahead == '`') ADVANCE(857);
      if (lookahead == 'b') ADVANCE(676);
      if (lookahead == 'e') ADVANCE(914);
      if (lookahead == 'f') ADVANCE(677);
      if (lookahead == 'n') ADVANCE(678);
      if (lookahead == 'r') ADVANCE(679);
      if (lookahead == 't') ADVANCE(680);
      if (lookahead == 'u') ADVANCE(681);
      if (lookahead == '{') ADVANCE(873);
      if (lookahead == '}') ADVANCE(880);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'd')) ADVANCE(897);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(574);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(531)
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(897);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(533);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(534);
      if (sym_filename_text_character_set_1(lookahead)) ADVANCE(875);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(535);
      if (aux_sym_value_string_text_token1_character_set_1(lookahead)) ADVANCE(870);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(anon_sym_GET);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(anon_sym_GET);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(anon_sym_HEAD);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(anon_sym_HEAD);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(anon_sym_POST);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(anon_sym_POST);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(anon_sym_PUT);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(anon_sym_PUT);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(anon_sym_DELETE);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(anon_sym_DELETE);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(anon_sym_CONNECT);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(anon_sym_CONNECT);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(anon_sym_OPTIONS);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(anon_sym_OPTIONS);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(anon_sym_TRACE);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(anon_sym_TRACE);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(anon_sym_PATCH);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(anon_sym_PATCH);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(anon_sym_LINK);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(anon_sym_LINK);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(anon_sym_UNLINK);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(anon_sym_UNLINK);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(anon_sym_PURGE);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(anon_sym_PURGE);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(anon_sym_LOCK);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(anon_sym_LOCK);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(anon_sym_UNLOCK);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(anon_sym_UNLOCK);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(anon_sym_PROPFIND);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(anon_sym_PROPFIND);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(anon_sym_VIEW);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(anon_sym_VIEW);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(anon_sym_HTTP_SLASH1_DOT0);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(anon_sym_HTTP_SLASH1_DOT1);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(anon_sym_HTTP_SLASH2);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(anon_sym_HTTP_SLASH_STAR);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(anon_sym_HTTP);
      if (lookahead == '/') ADVANCE(39);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(anon_sym_HTTP);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '/') ADVANCE(39);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(aux_sym_status_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(574);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(anon_sym_LBRACKBasicAuth_RBRACK);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(anon_sym_LBRACKBasicAuth_RBRACK);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(anon_sym_LBRACKQueryStringParams_RBRACK);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(anon_sym_LBRACKQueryStringParams_RBRACK);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(anon_sym_LBRACKFormParams_RBRACK);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(anon_sym_LBRACKFormParams_RBRACK);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(anon_sym_LBRACKMultipartFormData_RBRACK);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(anon_sym_LBRACKMultipartFormData_RBRACK);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(anon_sym_LBRACKCookies_RBRACK);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(anon_sym_LBRACKCookies_RBRACK);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(anon_sym_LBRACKCaptures_RBRACK);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(anon_sym_LBRACKCaptures_RBRACK);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(anon_sym_LBRACKAsserts_RBRACK);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(anon_sym_LBRACKAsserts_RBRACK);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(anon_sym_LBRACKOptions_RBRACK);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(anon_sym_LBRACKOptions_RBRACK);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(anon_sym_COLON2);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(anon_sym_file_COMMA);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(aux_sym_file_contenttype_token1);
      if (lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(596);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(anon_sym_cacert);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(anon_sym_compressed);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(anon_sym_location);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(anon_sym_insecure);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(anon_sym_max_DASHredirs);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(anon_sym_path_as_is);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(anon_sym_retry);
      if (lookahead == '-') ADVANCE(284);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(anon_sym_retry_DASHinterval);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(anon_sym_retry_DASHmax_DASHcount);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(anon_sym_variable);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(anon_sym_verbose);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(anon_sym_very_DASHverbose);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(625);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(anon_sym_status);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(anon_sym_url);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(anon_sym_header);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(anon_sym_cookie);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(anon_sym_body);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(anon_sym_xpath);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(anon_sym_jsonpath);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(anon_sym_regex);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(anon_sym_duration);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(anon_sym_sha256);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(anon_sym_md5);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(anon_sym_bytes);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(anon_sym_not);
      if (lookahead == 'E') ADVANCE(388);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(anon_sym_equals);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(anon_sym_notEquals);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(anon_sym_greaterThan);
      if (lookahead == 'O') ADVANCE(422);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(632);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(anon_sym_greaterThanOrEquals);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(anon_sym_lessThan);
      if (lookahead == 'O') ADVANCE(409);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '/') ADVANCE(659);
      if (lookahead == '=') ADVANCE(639);
      if (lookahead == '?') ADVANCE(651);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '/') ADVANCE(659);
      if (lookahead == '?') ADVANCE(651);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(639);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '?') ADVANCE(651);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(anon_sym_lessThanOrEquals);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(anon_sym_startsWith);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(anon_sym_endsWith);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(anon_sym_contains);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(anon_sym_matches);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(anon_sym_exists);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(anon_sym_includes);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(anon_sym_isInteger);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(anon_sym_isFloat);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(anon_sym_isBoolean);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(anon_sym_isString);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(anon_sym_isCollection);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(anon_sym_LT_QMARK);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(aux_sym_xml_prolog_tag_token1);
      if (lookahead == '\n') ADVANCE(654);
      if (lookahead == '?') ADVANCE(1);
      if (lookahead != 0) ADVANCE(652);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(aux_sym_xml_prolog_tag_token1);
      if (lookahead == '#') ADVANCE(652);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) ADVANCE(653);
      if (lookahead != 0 &&
          lookahead != '?') ADVANCE(654);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(aux_sym_xml_prolog_tag_token1);
      if (lookahead != 0 &&
          lookahead != '?') ADVANCE(654);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(anon_sym_QMARK_GT);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(aux_sym_xml_open_tag_token1);
      if (lookahead == '\n') ADVANCE(658);
      if (lookahead == '>') ADVANCE(1);
      if (lookahead != 0) ADVANCE(656);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(aux_sym_xml_open_tag_token1);
      if (lookahead == '#') ADVANCE(656);
      if (lookahead == '>') ADVANCE(658);
      if (lookahead == '/' ||
          lookahead == '?') ADVANCE(658);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) ADVANCE(657);
      if (lookahead != 0) ADVANCE(658);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(aux_sym_xml_open_tag_token1);
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(658);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(anon_sym_LT_SLASH);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(aux_sym_xml_close_tag_token1);
      if (lookahead == '\n') ADVANCE(662);
      if (lookahead == '/' ||
          lookahead == '>') ADVANCE(1);
      if (lookahead != 0) ADVANCE(660);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(aux_sym_xml_close_tag_token1);
      if (lookahead == '#') ADVANCE(660);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) ADVANCE(661);
      if (lookahead != 0 &&
          lookahead != '/' &&
          lookahead != '>') ADVANCE(662);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(aux_sym_xml_close_tag_token1);
      if (lookahead != 0 &&
          lookahead != '/' &&
          lookahead != '>') ADVANCE(662);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(anon_sym_base64_COMMA);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(aux_sym_oneline_base64_token1);
      if (lookahead == '\n') ADVANCE(664);
      if (('+' <= lookahead && lookahead <= '-') ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(665);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(aux_sym_oneline_base64_token1);
      if (lookahead == '\n' ||
          ('+' <= lookahead && lookahead <= '-') ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(665);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(anon_sym_hex_COMMA);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(aux_sym_quoted_string_text_token1);
      if (lookahead == '\n') ADVANCE(671);
      if (lookahead == '"' ||
          lookahead == '\\') ADVANCE(1);
      if (lookahead != 0) ADVANCE(668);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(aux_sym_quoted_string_text_token1);
      if (lookahead == '#') ADVANCE(668);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) ADVANCE(669);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(671);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(aux_sym_quoted_string_text_token1);
      if (lookahead == '{') ADVANCE(895);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(671);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(aux_sym_quoted_string_text_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(671);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(aux_sym_invalid_quoted_string_escaped_char_token1);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(aux_sym_invalid_quoted_string_escaped_char_token1);
      if (lookahead == '#') ADVANCE(675);
      if (lookahead == 'b') ADVANCE(676);
      if (lookahead == 'f') ADVANCE(677);
      if (lookahead == 'n') ADVANCE(678);
      if (lookahead == 'r') ADVANCE(679);
      if (lookahead == 't') ADVANCE(680);
      if (aux_sym_invalid_quoted_string_escaped_char_token1_character_set_1(lookahead)) ADVANCE(674);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\f' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\' &&
          lookahead != 'u') ADVANCE(673);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(aux_sym_invalid_quoted_string_escaped_char_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(anon_sym_b);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(anon_sym_f);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(anon_sym_n);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(anon_sym_r);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(anon_sym_t);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(anon_sym_u);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(sym_key_string_text);
      if (sym_key_string_text_character_set_3(lookahead)) ADVANCE(843);
      if (lookahead == 'A') ADVANCE(747);
      if (lookahead == 'O') ADVANCE(741);
      if (lookahead == 'R') ADVANCE(731);
      if (lookahead == 'U') ADVANCE(686);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(sym_key_string_text);
      if (sym_key_string_text_character_set_4(lookahead)) ADVANCE(843);
      if (lookahead == 'E') ADVANCE(690);
      if (lookahead == 'T') ADVANCE(745);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(sym_key_string_text);
      if (sym_key_string_text_character_set_5(lookahead)) ADVANCE(843);
      if (lookahead == 'I') ADVANCE(723);
      if (lookahead == 'O') ADVANCE(694);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(sym_key_string_text);
      if (sym_key_string_text_character_set_5(lookahead)) ADVANCE(843);
      if (lookahead == 'I') ADVANCE(727);
      if (lookahead == 'O') ADVANCE(695);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(sym_key_string_text);
      if (sym_key_string_text_character_set_6(lookahead)) ADVANCE(843);
      if (lookahead == 'R') ADVANCE(712);
      if (lookahead == 'T') ADVANCE(543);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'h') ||
          ('j' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == 'a') ADVANCE(771);
      if (lookahead == 'i') ADVANCE(769);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '3') ||
          ('5' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '4') ADVANCE(846);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '5') ||
          ('7' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '6') ADVANCE(688);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '@' ||
          ('B' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == 'A') ADVANCE(698);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '@' ||
          ('B' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == 'A') ADVANCE(696);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '@' ||
          ('B' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == 'A') ADVANCE(818);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'B') ||
          ('D' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == 'C') ADVANCE(713);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'B') ||
          ('D' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == 'C') ADVANCE(718);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'B') ||
          ('D' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == 'C') ADVANCE(720);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'B') ||
          ('D' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == 'C') ADVANCE(706);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'B') ||
          ('D' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == 'C') ADVANCE(744);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'C') ||
          ('E' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == 'D') ADVANCE(539);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'C') ||
          ('E' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == 'D') ADVANCE(565);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'C') ||
          ('E' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == 'D') ADVANCE(830);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'D') ||
          ('F' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == 'E') ADVANCE(721);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'D') ||
          ('F' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == 'E') ADVANCE(742);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'D') ||
          ('F' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == 'E') ADVANCE(690);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'D') ||
          ('F' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == 'E') ADVANCE(749);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'D') ||
          ('F' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == 'E') ADVANCE(559);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'D') ||
          ('F' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == 'E') ADVANCE(551);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'D') ||
          ('F' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == 'E') ADVANCE(545);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'D') ||
          ('F' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == 'E') ADVANCE(697);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'D') ||
          ('F' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == 'E') ADVANCE(748);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'E') ||
          ('G' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == 'F') ADVANCE(715);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'E') ||
          ('G' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == 'F') ADVANCE(783);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'F') ||
          ('H' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == 'G') ADVANCE(705);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'G') ||
          ('I' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == 'H') ADVANCE(553);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'H') ||
          ('J' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == 'I') ADVANCE(704);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'H') ||
          ('J' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == 'I') ADVANCE(726);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'H') ||
          ('J' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == 'I') ADVANCE(732);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'J') ||
          ('L' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == 'K') ADVANCE(555);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'J') ||
          ('L' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == 'K') ADVANCE(561);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'J') ||
          ('L' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == 'K') ADVANCE(557);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'J') ||
          ('L' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == 'K') ADVANCE(563);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'K') ||
          ('M' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == 'L') ADVANCE(709);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'K') ||
          ('M' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == 'L') ADVANCE(685);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'M') ||
          ('O' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == 'N') ADVANCE(717);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'M') ||
          ('O' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == 'N') ADVANCE(722);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'M') ||
          ('O' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == 'N') ADVANCE(739);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'M') ||
          ('O' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == 'N') ADVANCE(699);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'M') ||
          ('O' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == 'N') ADVANCE(719);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'M') ||
          ('O' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == 'N') ADVANCE(729);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'M') ||
          ('O' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == 'N') ADVANCE(708);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'N') ||
          ('P' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == 'O') ADVANCE(728);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'N') ||
          ('P' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == 'O') ADVANCE(734);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'N') ||
          ('P' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == 'O') ADVANCE(725);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'O') ||
          ('Q' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == 'P') ADVANCE(573);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'O') ||
          ('Q' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == 'P') ADVANCE(710);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'O') ||
          ('Q' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == 'P') ADVANCE(828);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'O') ||
          ('Q' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == 'P') ADVANCE(746);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'O') ||
          ('Q' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == 'P') ADVANCE(834);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Q') ||
          ('S' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == 'R') ADVANCE(691);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'R') ||
          ('T' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == 'S') ADVANCE(549);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'R') ||
          ('T' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == 'S') ADVANCE(814);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'R') ||
          ('T' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == 'S') ADVANCE(743);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'S') ||
          ('U' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == 'T') ADVANCE(537);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'S') ||
          ('U' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == 'T') ADVANCE(541);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'S') ||
          ('U' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == 'T') ADVANCE(547);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'S') ||
          ('U' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == 'T') ADVANCE(733);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'S') ||
          ('U' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == 'T') ADVANCE(716);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'S') ||
          ('U' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == 'T') ADVANCE(693);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'S') ||
          ('U' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == 'T') ADVANCE(707);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'V') ||
          ('X' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == 'W') ADVANCE(567);
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
          lookahead == 'a' ||
          lookahead == 'b' ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == 'c') ADVANCE(692);
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
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == 'e') ADVANCE(822);
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
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == 'e') ADVANCE(689);
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
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == 'e') ADVANCE(906);
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
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == 'e') ADVANCE(908);
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
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == 'e') ADVANCE(845);
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
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == 'e') ADVANCE(788);
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
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == 'e') ADVANCE(798);
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
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == 'e') ADVANCE(794);
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
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == 'e') ADVANCE(805);
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
          ('a' <= lookahead && lookahead <= 'f') ||
          ('h' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == 'g') ADVANCE(737);
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
          ('a' <= lookahead && lookahead <= 'g') ||
          ('i' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == 'h') ADVANCE(837);
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
          ('a' <= lookahead && lookahead <= 'h') ||
          ('j' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == 'i') ADVANCE(750);
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
          ('a' <= lookahead && lookahead <= 'h') ||
          ('j' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == 'i') ADVANCE(786);
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
          ('a' <= lookahead && lookahead <= 'h') ||
          ('j' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == 'i') ADVANCE(777);
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
          ('a' <= lookahead && lookahead <= 'h') ||
          ('j' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == 'i') ADVANCE(780);
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
          ('a' <= lookahead && lookahead <= 'h') ||
          ('j' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == 'i') ADVANCE(757);
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
          ('a' <= lookahead && lookahead <= 'j') ||
          ('l' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == 'k') ADVANCE(766);
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
          ('a' <= lookahead && lookahead <= 'k') ||
          ('m' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == 'l') ADVANCE(910);
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
          ('a' <= lookahead && lookahead <= 'k') ||
          ('m' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == 'l') ADVANCE(755);
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
          ('a' <= lookahead && lookahead <= 'k') ||
          ('m' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == 'l') ADVANCE(768);
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
          ('a' <= lookahead && lookahead <= 'k') ||
          ('m' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == 'l') ADVANCE(802);
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
          ('a' <= lookahead && lookahead <= 'k') ||
          ('m' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == 'l') ADVANCE(811);
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
          ('a' <= lookahead && lookahead <= 'l') ||
          ('n' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == 'm') ADVANCE(700);
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
          ('a' <= lookahead && lookahead <= 'l') ||
          ('n' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == 'm') ADVANCE(735);
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
          ('a' <= lookahead && lookahead <= 'l') ||
          ('n' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == 'm') ADVANCE(801);
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
          ('a' <= lookahead && lookahead <= 'l') ||
          ('n' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == 'm') ADVANCE(803);
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
          ('a' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == 'n') ADVANCE(760);
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
          ('a' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == 'n') ADVANCE(799);
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
          ('a' <= lookahead && lookahead <= 'n') ||
          ('p' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == 'o') ADVANCE(767);
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
          ('a' <= lookahead && lookahead <= 'n') ||
          ('p' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == 'o') ADVANCE(778);
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
          ('a' <= lookahead && lookahead <= 'n') ||
          ('p' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == 'o') ADVANCE(787);
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
          ('a' <= lookahead && lookahead <= 'n') ||
          ('p' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == 'o') ADVANCE(779);
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
          ('a' <= lookahead && lookahead <= 'n') ||
          ('p' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == 'o') ADVANCE(791);
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
          ('a' <= lookahead && lookahead <= 'o') ||
          ('q' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == 'p') ADVANCE(810);
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
          ('a' <= lookahead && lookahead <= 'o') ||
          ('q' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == 'p') ADVANCE(813);
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
          ('a' <= lookahead && lookahead <= 'o') ||
          ('q' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == 'p') ADVANCE(829);
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
          ('a' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == 'r') ADVANCE(774);
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
          ('a' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == 'r') ADVANCE(823);
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
          ('a' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == 'r') ADVANCE(827);
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
          ('a' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == 'r') ADVANCE(820);
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
          ('a' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == 'r') ADVANCE(773);
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
          ('a' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == 'r') ADVANCE(809);
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
          ('a' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == 'r') ADVANCE(764);
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
          ('a' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == 'r') ADVANCE(815);
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
          ('a' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == 'r') ADVANCE(759);
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
          ('a' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == 'r') ADVANCE(833);
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
          ('a' <= lookahead && lookahead <= 'r') ||
          ('t' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == 's') ADVANCE(762);
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
          ('a' <= lookahead && lookahead <= 'r') ||
          ('t' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == 's') ADVANCE(835);
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
          ('a' <= lookahead && lookahead <= 'r') ||
          ('t' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == 's') ADVANCE(836);
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
          ('a' <= lookahead && lookahead <= 'r') ||
          ('t' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == 's') ADVANCE(752);
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
          ('a' <= lookahead && lookahead <= 'r') ||
          ('t' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == 's') ADVANCE(838);
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
          ('a' <= lookahead && lookahead <= 'r') ||
          ('t' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == 's') ADVANCE(754);
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
          ('a' <= lookahead && lookahead <= 'r') ||
          ('t' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == 's') ADVANCE(840);
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
          ('a' <= lookahead && lookahead <= 'r') ||
          ('t' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == 's') ADVANCE(841);
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
          ('a' <= lookahead && lookahead <= 'r') ||
          ('t' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == 's') ADVANCE(842);
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
          ('a' <= lookahead && lookahead <= 'r') ||
          ('t' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == 's') ADVANCE(758);
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
          ('a' <= lookahead && lookahead <= 'r') ||
          ('t' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == 's') ADVANCE(806);
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
          ('a' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == 't') ADVANCE(761);
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
          ('a' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == 't') ADVANCE(711);
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
          ('a' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == 't') ADVANCE(765);
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
          ('a' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == 't') ADVANCE(763);
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
          ('a' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == 't') ADVANCE(831);
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
          ('a' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == 't') ADVANCE(821);
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
          ('a' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == 't') ADVANCE(793);
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
          ('a' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == 't') ADVANCE(804);
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
          ('a' <= lookahead && lookahead <= 't') ||
          ('v' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == 'u') ADVANCE(756);
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
          ('a' <= lookahead && lookahead <= 't') ||
          ('v' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == 'u') ADVANCE(770);
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
          ('a' <= lookahead && lookahead <= 't') ||
          ('v' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == 'u') ADVANCE(808);
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
          ('a' <= lookahead && lookahead <= 't') ||
          ('v' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == 'u') ADVANCE(772);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 't') ||
          ('v' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == 'u') ADVANCE(753);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 't') ||
          ('v' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == 'u') ADVANCE(795);
      END_STATE();
    case 822:
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
          lookahead == 'z') ADVANCE(843);
      if (lookahead == 'x') ADVANCE(844);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'x') ||
          lookahead == 'z') ADVANCE(843);
      if (lookahead == 'y') ADVANCE(740);
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
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == 'a') ADVANCE(800);
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
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == 'a') ADVANCE(771);
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
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == 'a') ADVANCE(797);
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
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == 'a') ADVANCE(775);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == 'a') ADVANCE(789);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == 'a') ADVANCE(792);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == 'a') ADVANCE(812);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == 'a') ADVANCE(839);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == 'a') ADVANCE(785);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == 'a') ADVANCE(776);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == 'a') ADVANCE(796);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == ']') ADVANCE(585);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == ']') ADVANCE(591);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == ']') ADVANCE(577);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == ']') ADVANCE(581);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == ']') ADVANCE(583);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == ']') ADVANCE(579);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == ']') ADVANCE(589);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == ']') ADVANCE(587);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == ',') ADVANCE(666);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == ',') ADVANCE(594);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == ',') ADVANCE(663);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(anon_sym_BSLASH2);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(aux_sym_key_string_escaped_char_token1);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(aux_sym_key_string_escaped_char_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(aux_sym_value_string_text_token1);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(aux_sym_value_string_text_token1);
      if (lookahead == 'a') ADVANCE(309);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(aux_sym_value_string_text_token1);
      if (lookahead == 'r') ADVANCE(503);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(aux_sym_value_string_text_token1);
      if (lookahead == 'u') ADVANCE(306);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(aux_sym_value_string_text_token1);
      if (lookahead == '{') ADVANCE(893);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      if (lookahead == '`') ADVANCE(145);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(aux_sym_oneline_string_text_token1);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(aux_sym_oneline_string_text_token1);
      if (lookahead == '`') ADVANCE(856);
      if (aux_sym_value_string_text_token1_character_set_1(lookahead)) ADVANCE(859);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(858);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(aux_sym_oneline_string_text_token1);
      if (lookahead == '{') ADVANCE(893);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(aux_sym_oneline_string_text_token2);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(aux_sym_oneline_string_text_token2);
      if (lookahead == '#') ADVANCE(863);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) ADVANCE(862);
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(861);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(aux_sym_oneline_string_text_token2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(anon_sym_BQUOTE_BQUOTE_BQUOTE);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(anon_sym_base64);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(anon_sym_hex);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(anon_sym_json);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(anon_sym_xml);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(anon_sym_graphql);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(aux_sym__multiline_string_text_token1);
      if (lookahead == '\n') ADVANCE(535);
      if (lookahead == '#') ADVANCE(871);
      if (aux_sym_value_string_text_token1_character_set_1(lookahead)) ADVANCE(870);
      if (lookahead != 0 &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != '{') ADVANCE(872);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(aux_sym__multiline_string_text_token1);
      if (lookahead == '\n') ADVANCE(872);
      if (lookahead == '\\' ||
          lookahead == '`' ||
          lookahead == '{') ADVANCE(1);
      if (lookahead != 0) ADVANCE(871);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(aux_sym__multiline_string_text_token1);
      if (lookahead != 0 &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != '{') ADVANCE(872);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '{') ADVANCE(893);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(sym_filename_text);
      if (lookahead == '\n') ADVANCE(534);
      if (sym_filename_text_character_set_1(lookahead)) ADVANCE(875);
      if (lookahead != 0 &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '\\') ADVANCE(878);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(sym_filename_text);
      if (lookahead == '{') ADVANCE(894);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '\\') ADVANCE(878);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(sym_filename_text);
      if (sym_filename_text_character_set_1(lookahead)) ADVANCE(877);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '\\') ADVANCE(878);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(sym_filename_text);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '\\') ADVANCE(878);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(aux_sym_filename_escaped_char_token1);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == 'A') ADVANCE(437);
      if (lookahead == 'B') ADVANCE(155);
      if (lookahead == 'C') ADVANCE(177);
      if (lookahead == 'F') ADVANCE(350);
      if (lookahead == 'M') ADVANCE(496);
      if (lookahead == 'O') ADVANCE(378);
      if (lookahead == 'Q') ADVANCE(497);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == 'A') ADVANCE(437);
      if (lookahead == 'C') ADVANCE(176);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == 'B') ADVANCE(155);
      if (lookahead == 'C') ADVANCE(355);
      if (lookahead == 'F') ADVANCE(350);
      if (lookahead == 'M') ADVANCE(496);
      if (lookahead == 'O') ADVANCE(378);
      if (lookahead == 'Q') ADVANCE(497);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (sym_key_string_text_character_set_7(lookahead)) ADVANCE(843);
      if (lookahead == 'B') ADVANCE(826);
      if (lookahead == 'C') ADVANCE(782);
      if (lookahead == 'F') ADVANCE(781);
      if (lookahead == 'M') ADVANCE(819);
      if (lookahead == 'O') ADVANCE(784);
      if (lookahead == 'Q') ADVANCE(816);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (sym_key_string_text_character_set_8(lookahead)) ADVANCE(843);
      if (lookahead == 'A') ADVANCE(807);
      if (lookahead == 'C') ADVANCE(832);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(aux_sym_json_string_text_token1);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(aux_sym_json_string_text_token1);
      if (lookahead == '#') ADVANCE(892);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) ADVANCE(890);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(889);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(aux_sym_json_string_text_token1);
      if (lookahead == '{') ADVANCE(893);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(aux_sym_json_string_text_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1);
      END_STATE();
    case 893:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      END_STATE();
    case 894:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '\\') ADVANCE(878);
      END_STATE();
    case 895:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(671);
      END_STATE();
    case 896:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 897:
      ACCEPT_TOKEN(aux_sym_variable_name_token1);
      END_STATE();
    case 898:
      ACCEPT_TOKEN(aux_sym_variable_name_token2);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(898);
      END_STATE();
    case 899:
      ACCEPT_TOKEN(anon_sym_count);
      END_STATE();
    case 900:
      ACCEPT_TOKEN(anon_sym_urlEncode);
      END_STATE();
    case 901:
      ACCEPT_TOKEN(anon_sym_urlDecode);
      END_STATE();
    case 902:
      ACCEPT_TOKEN(anon_sym_htmlEscape);
      END_STATE();
    case 903:
      ACCEPT_TOKEN(anon_sym_htmlUnescape);
      END_STATE();
    case 904:
      ACCEPT_TOKEN(anon_sym_toInt);
      END_STATE();
    case 905:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 906:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 907:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 908:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 909:
      ACCEPT_TOKEN(anon_sym_null);
      END_STATE();
    case 910:
      ACCEPT_TOKEN(anon_sym_null);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 911:
      ACCEPT_TOKEN(aux_sym_digit_token1);
      END_STATE();
    case 912:
      ACCEPT_TOKEN(aux_sym_hexdigit_token1);
      END_STATE();
    case 913:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 914:
      ACCEPT_TOKEN(anon_sym_e);
      END_STATE();
    case 915:
      ACCEPT_TOKEN(anon_sym_E);
      END_STATE();
    case 916:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 917:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 918:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 919:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 920:
      ACCEPT_TOKEN(aux_sym_regex_text_token1);
      if (lookahead == '\n') ADVANCE(918);
      if (lookahead == '/' ||
          lookahead == '\\') ADVANCE(1);
      if (lookahead != 0) ADVANCE(920);
      END_STATE();
    case 921:
      ACCEPT_TOKEN(aux_sym_regex_text_token1);
      if (lookahead == '#') ADVANCE(922);
      if (aux_sym_value_string_text_token1_character_set_1(lookahead)) ADVANCE(921);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '/' &&
          lookahead != '\\') ADVANCE(923);
      END_STATE();
    case 922:
      ACCEPT_TOKEN(aux_sym_regex_text_token1);
      if (lookahead == '/' ||
          lookahead == '\\') ADVANCE(1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(920);
      END_STATE();
    case 923:
      ACCEPT_TOKEN(aux_sym_regex_text_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '/' &&
          lookahead != '\\') ADVANCE(923);
      END_STATE();
    case 924:
      ACCEPT_TOKEN(aux_sym_regex_escaped_char_token1);
      END_STATE();
    case 925:
      ACCEPT_TOKEN(aux_sym_regex_escaped_char_token1);
      if (lookahead == '#') ADVANCE(926);
      if (aux_sym_value_string_text_token1_character_set_1(lookahead)) ADVANCE(925);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(924);
      END_STATE();
    case 926:
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
  [1] = {.lex_state = 525},
  [2] = {.lex_state = 529},
  [3] = {.lex_state = 529},
  [4] = {.lex_state = 529},
  [5] = {.lex_state = 529},
  [6] = {.lex_state = 525},
  [7] = {.lex_state = 525},
  [8] = {.lex_state = 525},
  [9] = {.lex_state = 530},
  [10] = {.lex_state = 530},
  [11] = {.lex_state = 525},
  [12] = {.lex_state = 525},
  [13] = {.lex_state = 525},
  [14] = {.lex_state = 525},
  [15] = {.lex_state = 525},
  [16] = {.lex_state = 525},
  [17] = {.lex_state = 525},
  [18] = {.lex_state = 525},
  [19] = {.lex_state = 525},
  [20] = {.lex_state = 525},
  [21] = {.lex_state = 17},
  [22] = {.lex_state = 17},
  [23] = {.lex_state = 525},
  [24] = {.lex_state = 525},
  [25] = {.lex_state = 525},
  [26] = {.lex_state = 525},
  [27] = {.lex_state = 525},
  [28] = {.lex_state = 525},
  [29] = {.lex_state = 525},
  [30] = {.lex_state = 525},
  [31] = {.lex_state = 525},
  [32] = {.lex_state = 525},
  [33] = {.lex_state = 525},
  [34] = {.lex_state = 525},
  [35] = {.lex_state = 525},
  [36] = {.lex_state = 525},
  [37] = {.lex_state = 529},
  [38] = {.lex_state = 529},
  [39] = {.lex_state = 529},
  [40] = {.lex_state = 529},
  [41] = {.lex_state = 529},
  [42] = {.lex_state = 529},
  [43] = {.lex_state = 529},
  [44] = {.lex_state = 529},
  [45] = {.lex_state = 529},
  [46] = {.lex_state = 529},
  [47] = {.lex_state = 529},
  [48] = {.lex_state = 529},
  [49] = {.lex_state = 529},
  [50] = {.lex_state = 525},
  [51] = {.lex_state = 529},
  [52] = {.lex_state = 525},
  [53] = {.lex_state = 525},
  [54] = {.lex_state = 529},
  [55] = {.lex_state = 529},
  [56] = {.lex_state = 529},
  [57] = {.lex_state = 530},
  [58] = {.lex_state = 530},
  [59] = {.lex_state = 530},
  [60] = {.lex_state = 530},
  [61] = {.lex_state = 525},
  [62] = {.lex_state = 525},
  [63] = {.lex_state = 17},
  [64] = {.lex_state = 17},
  [65] = {.lex_state = 525},
  [66] = {.lex_state = 530},
  [67] = {.lex_state = 530},
  [68] = {.lex_state = 530},
  [69] = {.lex_state = 530},
  [70] = {.lex_state = 530},
  [71] = {.lex_state = 525},
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
  [96] = {.lex_state = 17},
  [97] = {.lex_state = 17},
  [98] = {.lex_state = 525},
  [99] = {.lex_state = 20},
  [100] = {.lex_state = 525},
  [101] = {.lex_state = 17},
  [102] = {.lex_state = 17},
  [103] = {.lex_state = 525},
  [104] = {.lex_state = 525},
  [105] = {.lex_state = 525},
  [106] = {.lex_state = 525},
  [107] = {.lex_state = 525},
  [108] = {.lex_state = 17},
  [109] = {.lex_state = 2},
  [110] = {.lex_state = 22},
  [111] = {.lex_state = 525},
  [112] = {.lex_state = 525},
  [113] = {.lex_state = 8},
  [114] = {.lex_state = 8},
  [115] = {.lex_state = 17},
  [116] = {.lex_state = 17},
  [117] = {.lex_state = 17},
  [118] = {.lex_state = 8},
  [119] = {.lex_state = 4},
  [120] = {.lex_state = 17},
  [121] = {.lex_state = 4},
  [122] = {.lex_state = 8},
  [123] = {.lex_state = 8},
  [124] = {.lex_state = 525},
  [125] = {.lex_state = 525},
  [126] = {.lex_state = 525},
  [127] = {.lex_state = 525},
  [128] = {.lex_state = 525},
  [129] = {.lex_state = 17},
  [130] = {.lex_state = 17},
  [131] = {.lex_state = 4},
  [132] = {.lex_state = 7},
  [133] = {.lex_state = 3},
  [134] = {.lex_state = 7},
  [135] = {.lex_state = 7},
  [136] = {.lex_state = 7},
  [137] = {.lex_state = 8},
  [138] = {.lex_state = 8},
  [139] = {.lex_state = 26},
  [140] = {.lex_state = 9},
  [141] = {.lex_state = 11},
  [142] = {.lex_state = 11},
  [143] = {.lex_state = 11},
  [144] = {.lex_state = 11},
  [145] = {.lex_state = 23},
  [146] = {.lex_state = 3},
  [147] = {.lex_state = 23},
  [148] = {.lex_state = 23},
  [149] = {.lex_state = 23},
  [150] = {.lex_state = 23},
  [151] = {.lex_state = 11},
  [152] = {.lex_state = 3},
  [153] = {.lex_state = 26},
  [154] = {.lex_state = 12},
  [155] = {.lex_state = 26},
  [156] = {.lex_state = 12},
  [157] = {.lex_state = 26},
  [158] = {.lex_state = 12},
  [159] = {.lex_state = 8},
  [160] = {.lex_state = 29},
  [161] = {.lex_state = 26},
  [162] = {.lex_state = 29},
  [163] = {.lex_state = 8},
  [164] = {.lex_state = 24},
  [165] = {.lex_state = 25},
  [166] = {.lex_state = 20},
  [167] = {.lex_state = 9},
  [168] = {.lex_state = 34},
  [169] = {.lex_state = 20},
  [170] = {.lex_state = 9},
  [171] = {.lex_state = 7},
  [172] = {.lex_state = 24},
  [173] = {.lex_state = 7},
  [174] = {.lex_state = 24},
  [175] = {.lex_state = 34},
  [176] = {.lex_state = 29},
  [177] = {.lex_state = 27},
  [178] = {.lex_state = 24},
  [179] = {.lex_state = 24},
  [180] = {.lex_state = 29},
  [181] = {.lex_state = 4},
  [182] = {.lex_state = 20},
  [183] = {.lex_state = 20},
  [184] = {.lex_state = 4},
  [185] = {.lex_state = 4},
  [186] = {.lex_state = 4},
  [187] = {.lex_state = 4},
  [188] = {.lex_state = 4},
  [189] = {.lex_state = 11},
  [190] = {.lex_state = 4},
  [191] = {.lex_state = 4},
  [192] = {.lex_state = 4},
  [193] = {.lex_state = 19},
  [194] = {.lex_state = 4},
  [195] = {.lex_state = 4},
  [196] = {.lex_state = 4},
  [197] = {.lex_state = 4},
  [198] = {.lex_state = 11},
  [199] = {.lex_state = 11},
  [200] = {.lex_state = 4},
  [201] = {.lex_state = 4},
  [202] = {.lex_state = 4},
  [203] = {.lex_state = 4},
  [204] = {.lex_state = 4},
  [205] = {.lex_state = 4},
  [206] = {.lex_state = 4},
  [207] = {.lex_state = 19},
  [208] = {.lex_state = 19},
  [209] = {.lex_state = 11},
  [210] = {.lex_state = 3},
  [211] = {.lex_state = 11},
  [212] = {.lex_state = 23},
  [213] = {.lex_state = 4},
  [214] = {.lex_state = 4},
  [215] = {.lex_state = 4},
  [216] = {.lex_state = 3},
  [217] = {.lex_state = 4},
  [218] = {.lex_state = 4},
  [219] = {.lex_state = 4},
  [220] = {.lex_state = 23},
  [221] = {.lex_state = 19},
  [222] = {.lex_state = 14},
  [223] = {.lex_state = 17},
  [224] = {.lex_state = 20},
  [225] = {.lex_state = 20},
  [226] = {.lex_state = 26},
  [227] = {.lex_state = 525},
  [228] = {.lex_state = 17},
  [229] = {.lex_state = 8},
  [230] = {.lex_state = 8},
  [231] = {.lex_state = 17},
  [232] = {.lex_state = 17},
  [233] = {.lex_state = 14},
  [234] = {.lex_state = 525},
  [235] = {.lex_state = 26},
  [236] = {.lex_state = 12},
  [237] = {.lex_state = 20},
  [238] = {.lex_state = 4},
  [239] = {.lex_state = 12},
  [240] = {.lex_state = 8},
  [241] = {.lex_state = 17},
  [242] = {.lex_state = 9},
  [243] = {.lex_state = 19},
  [244] = {.lex_state = 20},
  [245] = {.lex_state = 14},
  [246] = {.lex_state = 8},
  [247] = {.lex_state = 20},
  [248] = {.lex_state = 7},
  [249] = {.lex_state = 8},
  [250] = {.lex_state = 14},
  [251] = {.lex_state = 17},
  [252] = {.lex_state = 9},
  [253] = {.lex_state = 7},
  [254] = {.lex_state = 525},
  [255] = {.lex_state = 20},
  [256] = {.lex_state = 8},
  [257] = {.lex_state = 8},
  [258] = {.lex_state = 34},
  [259] = {.lex_state = 20},
  [260] = {.lex_state = 8},
  [261] = {.lex_state = 8},
  [262] = {.lex_state = 29},
  [263] = {.lex_state = 29},
  [264] = {.lex_state = 525},
  [265] = {.lex_state = 8},
  [266] = {.lex_state = 8},
  [267] = {.lex_state = 34},
  [268] = {.lex_state = 525},
  [269] = {.lex_state = 525},
  [270] = {.lex_state = 11},
  [271] = {.lex_state = 11},
  [272] = {.lex_state = 17},
  [273] = {.lex_state = 11},
  [274] = {.lex_state = 11},
  [275] = {.lex_state = 26},
  [276] = {.lex_state = 26},
  [277] = {.lex_state = 11},
  [278] = {.lex_state = 11},
  [279] = {.lex_state = 7},
  [280] = {.lex_state = 11},
  [281] = {.lex_state = 7},
  [282] = {.lex_state = 7},
  [283] = {.lex_state = 17},
  [284] = {.lex_state = 7},
  [285] = {.lex_state = 3},
  [286] = {.lex_state = 525},
  [287] = {.lex_state = 525},
  [288] = {.lex_state = 3},
  [289] = {.lex_state = 525},
  [290] = {.lex_state = 525},
  [291] = {.lex_state = 525},
  [292] = {.lex_state = 12},
  [293] = {.lex_state = 525},
  [294] = {.lex_state = 525},
  [295] = {.lex_state = 29},
  [296] = {.lex_state = 17},
  [297] = {.lex_state = 7},
  [298] = {.lex_state = 525},
  [299] = {.lex_state = 525},
  [300] = {.lex_state = 525},
  [301] = {.lex_state = 525},
  [302] = {.lex_state = 525},
  [303] = {.lex_state = 17},
  [304] = {.lex_state = 23},
  [305] = {.lex_state = 24},
  [306] = {.lex_state = 31},
  [307] = {.lex_state = 525},
  [308] = {.lex_state = 17},
  [309] = {.lex_state = 17},
  [310] = {.lex_state = 17},
  [311] = {.lex_state = 23},
  [312] = {.lex_state = 23},
  [313] = {.lex_state = 23},
  [314] = {.lex_state = 24},
  [315] = {.lex_state = 3},
  [316] = {.lex_state = 3},
  [317] = {.lex_state = 525},
  [318] = {.lex_state = 24},
  [319] = {.lex_state = 525},
  [320] = {.lex_state = 525},
  [321] = {.lex_state = 20},
  [322] = {.lex_state = 525},
  [323] = {.lex_state = 17},
  [324] = {.lex_state = 3},
  [325] = {.lex_state = 525},
  [326] = {.lex_state = 12},
  [327] = {.lex_state = 23},
  [328] = {.lex_state = 24},
  [329] = {.lex_state = 24},
  [330] = {.lex_state = 20},
  [331] = {.lex_state = 525},
  [332] = {.lex_state = 17},
  [333] = {.lex_state = 12},
  [334] = {.lex_state = 17},
  [335] = {.lex_state = 3},
  [336] = {.lex_state = 34},
  [337] = {.lex_state = 12},
  [338] = {.lex_state = 12},
  [339] = {.lex_state = 17},
  [340] = {.lex_state = 24},
  [341] = {.lex_state = 23},
  [342] = {.lex_state = 31},
  [343] = {.lex_state = 9},
  [344] = {.lex_state = 525},
  [345] = {.lex_state = 3},
  [346] = {.lex_state = 9},
  [347] = {.lex_state = 20},
  [348] = {.lex_state = 29},
  [349] = {.lex_state = 31},
  [350] = {.lex_state = 34},
  [351] = {.lex_state = 525},
  [352] = {.lex_state = 17},
  [353] = {.lex_state = 525},
  [354] = {.lex_state = 525},
  [355] = {.lex_state = 31},
  [356] = {.lex_state = 17},
  [357] = {.lex_state = 33},
  [358] = {.lex_state = 525},
  [359] = {.lex_state = 525},
  [360] = {.lex_state = 525},
  [361] = {.lex_state = 525},
  [362] = {.lex_state = 17},
  [363] = {.lex_state = 20},
  [364] = {.lex_state = 20},
  [365] = {.lex_state = 20},
  [366] = {.lex_state = 525},
  [367] = {.lex_state = 525},
  [368] = {.lex_state = 525},
  [369] = {.lex_state = 525},
  [370] = {.lex_state = 525},
  [371] = {.lex_state = 20},
  [372] = {.lex_state = 525},
  [373] = {.lex_state = 525},
  [374] = {.lex_state = 525},
  [375] = {.lex_state = 525},
  [376] = {.lex_state = 17},
  [377] = {.lex_state = 14},
  [378] = {.lex_state = 20},
  [379] = {.lex_state = 20},
  [380] = {.lex_state = 525},
  [381] = {.lex_state = 6},
  [382] = {.lex_state = 20},
  [383] = {.lex_state = 20},
  [384] = {.lex_state = 17},
  [385] = {.lex_state = 20},
  [386] = {.lex_state = 27},
  [387] = {.lex_state = 20},
  [388] = {.lex_state = 20},
  [389] = {.lex_state = 20},
  [390] = {.lex_state = 33},
  [391] = {.lex_state = 33},
  [392] = {.lex_state = 17},
  [393] = {.lex_state = 33},
  [394] = {.lex_state = 525},
  [395] = {.lex_state = 33},
  [396] = {.lex_state = 525},
  [397] = {.lex_state = 20},
  [398] = {.lex_state = 20},
  [399] = {.lex_state = 525},
  [400] = {.lex_state = 20},
  [401] = {.lex_state = 20},
  [402] = {.lex_state = 33},
  [403] = {.lex_state = 525},
  [404] = {.lex_state = 20},
  [405] = {.lex_state = 33},
  [406] = {.lex_state = 525},
  [407] = {.lex_state = 33},
  [408] = {.lex_state = 525},
  [409] = {.lex_state = 20},
  [410] = {.lex_state = 525},
  [411] = {.lex_state = 33},
  [412] = {.lex_state = 525},
  [413] = {.lex_state = 525},
  [414] = {.lex_state = 525},
  [415] = {.lex_state = 17},
  [416] = {.lex_state = 17},
  [417] = {.lex_state = 33},
  [418] = {.lex_state = 17},
  [419] = {.lex_state = 525},
  [420] = {.lex_state = 525},
  [421] = {.lex_state = 17},
  [422] = {.lex_state = 17},
  [423] = {.lex_state = 6},
  [424] = {.lex_state = 17},
  [425] = {.lex_state = 525},
  [426] = {.lex_state = 525},
  [427] = {.lex_state = 525},
  [428] = {.lex_state = 33},
  [429] = {.lex_state = 525},
  [430] = {.lex_state = 525},
  [431] = {.lex_state = 33},
  [432] = {.lex_state = 14},
  [433] = {.lex_state = 525},
  [434] = {.lex_state = 33},
  [435] = {.lex_state = 20},
  [436] = {.lex_state = 17},
  [437] = {.lex_state = 20},
  [438] = {.lex_state = 20},
  [439] = {.lex_state = 20},
  [440] = {.lex_state = 20},
  [441] = {.lex_state = 31},
  [442] = {.lex_state = 0},
  [443] = {.lex_state = 31},
  [444] = {.lex_state = 31},
  [445] = {.lex_state = 31},
  [446] = {.lex_state = 17},
  [447] = {.lex_state = 17},
  [448] = {.lex_state = 31},
  [449] = {.lex_state = 17},
  [450] = {.lex_state = 31},
  [451] = {.lex_state = 20},
  [452] = {.lex_state = 31},
  [453] = {.lex_state = 17},
  [454] = {.lex_state = 17},
  [455] = {.lex_state = 20},
  [456] = {.lex_state = 20},
  [457] = {.lex_state = 17},
  [458] = {.lex_state = 31},
  [459] = {.lex_state = 17},
  [460] = {.lex_state = 17},
  [461] = {.lex_state = 20},
  [462] = {.lex_state = 17},
  [463] = {.lex_state = 17},
  [464] = {.lex_state = 17},
  [465] = {.lex_state = 27},
  [466] = {.lex_state = 31},
  [467] = {.lex_state = 31},
  [468] = {.lex_state = 31},
  [469] = {.lex_state = 20},
  [470] = {.lex_state = 31},
  [471] = {.lex_state = 31},
  [472] = {.lex_state = 31},
  [473] = {.lex_state = 20},
  [474] = {.lex_state = 31},
  [475] = {.lex_state = 31},
  [476] = {.lex_state = 31},
  [477] = {.lex_state = 20},
  [478] = {.lex_state = 20},
  [479] = {.lex_state = 17},
  [480] = {.lex_state = 31},
  [481] = {.lex_state = 31},
  [482] = {.lex_state = 31},
  [483] = {.lex_state = 31},
  [484] = {.lex_state = 20},
  [485] = {.lex_state = 31},
  [486] = {.lex_state = 31},
  [487] = {.lex_state = 31},
  [488] = {.lex_state = 525},
  [489] = {.lex_state = 17},
  [490] = {.lex_state = 525},
  [491] = {.lex_state = 898},
  [492] = {.lex_state = 525},
  [493] = {.lex_state = 35},
  [494] = {.lex_state = 36},
  [495] = {.lex_state = 15},
  [496] = {.lex_state = 26},
  [497] = {.lex_state = 525},
  [498] = {.lex_state = 525},
  [499] = {.lex_state = 525},
  [500] = {.lex_state = 525},
  [501] = {.lex_state = 525},
  [502] = {.lex_state = 525},
  [503] = {.lex_state = 525},
  [504] = {.lex_state = 525},
  [505] = {.lex_state = 525},
  [506] = {.lex_state = 525},
  [507] = {.lex_state = 525},
  [508] = {.lex_state = 525},
  [509] = {.lex_state = 525},
  [510] = {.lex_state = 525},
  [511] = {.lex_state = 525},
  [512] = {.lex_state = 525},
  [513] = {.lex_state = 525},
  [514] = {.lex_state = 525},
  [515] = {.lex_state = 525},
  [516] = {.lex_state = 525},
  [517] = {.lex_state = 525},
  [518] = {.lex_state = 525},
  [519] = {.lex_state = 525},
  [520] = {.lex_state = 0},
  [521] = {.lex_state = 525},
  [522] = {.lex_state = 525},
  [523] = {.lex_state = 0},
  [524] = {.lex_state = 0},
  [525] = {.lex_state = 525},
  [526] = {.lex_state = 525},
  [527] = {.lex_state = 525},
  [528] = {.lex_state = 525},
  [529] = {.lex_state = 525},
  [530] = {.lex_state = 525},
  [531] = {.lex_state = 525},
  [532] = {.lex_state = 525},
  [533] = {.lex_state = 525},
  [534] = {.lex_state = 0},
  [535] = {.lex_state = 20},
  [536] = {.lex_state = 0},
  [537] = {.lex_state = 17},
  [538] = {.lex_state = 0},
  [539] = {.lex_state = 26},
  [540] = {.lex_state = 525},
  [541] = {.lex_state = 525},
  [542] = {.lex_state = 525},
  [543] = {.lex_state = 20},
  [544] = {.lex_state = 525},
  [545] = {.lex_state = 0},
  [546] = {.lex_state = 37},
  [547] = {.lex_state = 525},
  [548] = {.lex_state = 525},
  [549] = {.lex_state = 17},
  [550] = {.lex_state = 17},
  [551] = {.lex_state = 17},
  [552] = {.lex_state = 525},
  [553] = {.lex_state = 525},
  [554] = {.lex_state = 17},
  [555] = {.lex_state = 20},
  [556] = {.lex_state = 525},
  [557] = {.lex_state = 0},
  [558] = {.lex_state = 525},
  [559] = {.lex_state = 17},
  [560] = {.lex_state = 525},
  [561] = {.lex_state = 525},
  [562] = {.lex_state = 525},
  [563] = {.lex_state = 525},
  [564] = {.lex_state = 0},
  [565] = {.lex_state = 17},
  [566] = {.lex_state = 26},
  [567] = {.lex_state = 0},
  [568] = {.lex_state = 17},
  [569] = {.lex_state = 0},
  [570] = {.lex_state = 17},
  [571] = {.lex_state = 0},
  [572] = {.lex_state = 17},
  [573] = {.lex_state = 17},
  [574] = {.lex_state = 17},
  [575] = {.lex_state = 17},
  [576] = {.lex_state = 17},
  [577] = {.lex_state = 17},
  [578] = {.lex_state = 17},
  [579] = {.lex_state = 525},
  [580] = {.lex_state = 36},
  [581] = {.lex_state = 0},
  [582] = {.lex_state = 38},
  [583] = {.lex_state = 0},
  [584] = {.lex_state = 16},
  [585] = {.lex_state = 525},
  [586] = {.lex_state = 525},
  [587] = {.lex_state = 525},
  [588] = {.lex_state = 17},
  [589] = {.lex_state = 525},
  [590] = {.lex_state = 20},
  [591] = {.lex_state = 525},
  [592] = {.lex_state = 17},
  [593] = {.lex_state = 17},
  [594] = {.lex_state = 525},
  [595] = {.lex_state = 17},
  [596] = {.lex_state = 17},
  [597] = {.lex_state = 525},
  [598] = {.lex_state = 17},
  [599] = {.lex_state = 525},
  [600] = {.lex_state = 38},
  [601] = {.lex_state = 525},
  [602] = {.lex_state = 525},
  [603] = {.lex_state = 525},
  [604] = {.lex_state = 525},
  [605] = {.lex_state = 17},
  [606] = {.lex_state = 17},
  [607] = {.lex_state = 17},
  [608] = {.lex_state = 17},
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
    [sym_hurl_file] = STATE(581),
    [sym_entry] = STATE(100),
    [sym__comment_or_new_line] = STATE(269),
    [sym_request] = STATE(98),
    [sym_method] = STATE(133),
    [aux_sym_hurl_file_repeat1] = STATE(100),
    [aux_sym_hurl_file_repeat2] = STATE(269),
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
    [sym__comment_or_new_line] = STATE(51),
    [sym_header] = STATE(4),
    [sym_body] = STATE(103),
    [sym_request_section] = STATE(6),
    [sym_basic_auth_section] = STATE(61),
    [sym_query_string_params_section] = STATE(61),
    [sym_form_params_section] = STATE(61),
    [sym_multipart_form_data_section] = STATE(61),
    [sym_cookies_section] = STATE(61),
    [sym_options_section] = STATE(61),
    [sym_key_value] = STATE(399),
    [sym_bytes] = STATE(396),
    [sym_xml] = STATE(518),
    [sym_xml_prolog_tag] = STATE(244),
    [sym_xml_tag] = STATE(519),
    [sym_xml_open_tag] = STATE(113),
    [sym_oneline_base64] = STATE(518),
    [sym_oneline_file] = STATE(518),
    [sym_oneline_hex] = STATE(518),
    [sym_key_string] = STATE(520),
    [sym_key_string_content] = STATE(155),
    [sym_key_string_escaped_char] = STATE(235),
    [sym_oneline_string] = STATE(518),
    [sym_multiline_string] = STATE(518),
    [sym_json_value] = STATE(518),
    [sym_json_object] = STATE(521),
    [sym_json_array] = STATE(521),
    [sym_json_string] = STATE(521),
    [sym_json_number] = STATE(521),
    [sym_template] = STATE(284),
    [sym_boolean] = STATE(521),
    [sym_null] = STATE(521),
    [sym_integer] = STATE(254),
    [sym_digit] = STATE(234),
    [aux_sym_hurl_file_repeat2] = STATE(51),
    [aux_sym__comment_or_new_line_repeat1] = STATE(55),
    [aux_sym_request_repeat1] = STATE(4),
    [aux_sym_request_repeat2] = STATE(6),
    [aux_sym_xml_repeat1] = STATE(244),
    [aux_sym_key_string_repeat1] = STATE(155),
    [aux_sym_key_string_content_repeat1] = STATE(235),
    [aux_sym_integer_repeat1] = STATE(234),
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
    [sym__comment_or_new_line] = STATE(51),
    [sym_header] = STATE(5),
    [sym_body] = STATE(106),
    [sym_request_section] = STATE(8),
    [sym_basic_auth_section] = STATE(61),
    [sym_query_string_params_section] = STATE(61),
    [sym_form_params_section] = STATE(61),
    [sym_multipart_form_data_section] = STATE(61),
    [sym_cookies_section] = STATE(61),
    [sym_options_section] = STATE(61),
    [sym_key_value] = STATE(399),
    [sym_bytes] = STATE(396),
    [sym_xml] = STATE(518),
    [sym_xml_prolog_tag] = STATE(244),
    [sym_xml_tag] = STATE(519),
    [sym_xml_open_tag] = STATE(113),
    [sym_oneline_base64] = STATE(518),
    [sym_oneline_file] = STATE(518),
    [sym_oneline_hex] = STATE(518),
    [sym_key_string] = STATE(520),
    [sym_key_string_content] = STATE(155),
    [sym_key_string_escaped_char] = STATE(235),
    [sym_oneline_string] = STATE(518),
    [sym_multiline_string] = STATE(518),
    [sym_json_value] = STATE(518),
    [sym_json_object] = STATE(521),
    [sym_json_array] = STATE(521),
    [sym_json_string] = STATE(521),
    [sym_json_number] = STATE(521),
    [sym_template] = STATE(284),
    [sym_boolean] = STATE(521),
    [sym_null] = STATE(521),
    [sym_integer] = STATE(254),
    [sym_digit] = STATE(234),
    [aux_sym_hurl_file_repeat2] = STATE(51),
    [aux_sym__comment_or_new_line_repeat1] = STATE(55),
    [aux_sym_request_repeat1] = STATE(5),
    [aux_sym_request_repeat2] = STATE(8),
    [aux_sym_xml_repeat1] = STATE(244),
    [aux_sym_key_string_repeat1] = STATE(155),
    [aux_sym_key_string_content_repeat1] = STATE(235),
    [aux_sym_integer_repeat1] = STATE(234),
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
    [sym_header] = STATE(40),
    [sym_body] = STATE(105),
    [sym_request_section] = STATE(7),
    [sym_basic_auth_section] = STATE(61),
    [sym_query_string_params_section] = STATE(61),
    [sym_form_params_section] = STATE(61),
    [sym_multipart_form_data_section] = STATE(61),
    [sym_cookies_section] = STATE(61),
    [sym_options_section] = STATE(61),
    [sym_key_value] = STATE(399),
    [sym_bytes] = STATE(396),
    [sym_xml] = STATE(518),
    [sym_xml_prolog_tag] = STATE(244),
    [sym_xml_tag] = STATE(519),
    [sym_xml_open_tag] = STATE(113),
    [sym_oneline_base64] = STATE(518),
    [sym_oneline_file] = STATE(518),
    [sym_oneline_hex] = STATE(518),
    [sym_key_string] = STATE(520),
    [sym_key_string_content] = STATE(155),
    [sym_key_string_escaped_char] = STATE(235),
    [sym_oneline_string] = STATE(518),
    [sym_multiline_string] = STATE(518),
    [sym_json_value] = STATE(518),
    [sym_json_object] = STATE(521),
    [sym_json_array] = STATE(521),
    [sym_json_string] = STATE(521),
    [sym_json_number] = STATE(521),
    [sym_template] = STATE(284),
    [sym_boolean] = STATE(521),
    [sym_null] = STATE(521),
    [sym_integer] = STATE(254),
    [sym_digit] = STATE(234),
    [aux_sym_request_repeat1] = STATE(40),
    [aux_sym_request_repeat2] = STATE(7),
    [aux_sym_xml_repeat1] = STATE(244),
    [aux_sym_key_string_repeat1] = STATE(155),
    [aux_sym_key_string_content_repeat1] = STATE(235),
    [aux_sym_integer_repeat1] = STATE(234),
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
    [sym_header] = STATE(40),
    [sym_body] = STATE(103),
    [sym_request_section] = STATE(6),
    [sym_basic_auth_section] = STATE(61),
    [sym_query_string_params_section] = STATE(61),
    [sym_form_params_section] = STATE(61),
    [sym_multipart_form_data_section] = STATE(61),
    [sym_cookies_section] = STATE(61),
    [sym_options_section] = STATE(61),
    [sym_key_value] = STATE(399),
    [sym_bytes] = STATE(396),
    [sym_xml] = STATE(518),
    [sym_xml_prolog_tag] = STATE(244),
    [sym_xml_tag] = STATE(519),
    [sym_xml_open_tag] = STATE(113),
    [sym_oneline_base64] = STATE(518),
    [sym_oneline_file] = STATE(518),
    [sym_oneline_hex] = STATE(518),
    [sym_key_string] = STATE(520),
    [sym_key_string_content] = STATE(155),
    [sym_key_string_escaped_char] = STATE(235),
    [sym_oneline_string] = STATE(518),
    [sym_multiline_string] = STATE(518),
    [sym_json_value] = STATE(518),
    [sym_json_object] = STATE(521),
    [sym_json_array] = STATE(521),
    [sym_json_string] = STATE(521),
    [sym_json_number] = STATE(521),
    [sym_template] = STATE(284),
    [sym_boolean] = STATE(521),
    [sym_null] = STATE(521),
    [sym_integer] = STATE(254),
    [sym_digit] = STATE(234),
    [aux_sym_request_repeat1] = STATE(40),
    [aux_sym_request_repeat2] = STATE(6),
    [aux_sym_xml_repeat1] = STATE(244),
    [aux_sym_key_string_repeat1] = STATE(155),
    [aux_sym_key_string_content_repeat1] = STATE(235),
    [aux_sym_integer_repeat1] = STATE(234),
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
    [sym_body] = STATE(105),
    [sym_request_section] = STATE(50),
    [sym_basic_auth_section] = STATE(61),
    [sym_query_string_params_section] = STATE(61),
    [sym_form_params_section] = STATE(61),
    [sym_multipart_form_data_section] = STATE(61),
    [sym_cookies_section] = STATE(61),
    [sym_options_section] = STATE(61),
    [sym_bytes] = STATE(396),
    [sym_xml] = STATE(518),
    [sym_xml_prolog_tag] = STATE(244),
    [sym_xml_tag] = STATE(519),
    [sym_xml_open_tag] = STATE(113),
    [sym_oneline_base64] = STATE(518),
    [sym_oneline_file] = STATE(518),
    [sym_oneline_hex] = STATE(518),
    [sym_oneline_string] = STATE(518),
    [sym_multiline_string] = STATE(518),
    [sym_json_value] = STATE(518),
    [sym_json_object] = STATE(521),
    [sym_json_array] = STATE(521),
    [sym_json_string] = STATE(521),
    [sym_json_number] = STATE(521),
    [sym_template] = STATE(521),
    [sym_boolean] = STATE(521),
    [sym_null] = STATE(521),
    [sym_integer] = STATE(254),
    [sym_digit] = STATE(234),
    [aux_sym_request_repeat2] = STATE(50),
    [aux_sym_xml_repeat1] = STATE(244),
    [aux_sym_integer_repeat1] = STATE(234),
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
  [7] = {
    [sym_body] = STATE(104),
    [sym_request_section] = STATE(50),
    [sym_basic_auth_section] = STATE(61),
    [sym_query_string_params_section] = STATE(61),
    [sym_form_params_section] = STATE(61),
    [sym_multipart_form_data_section] = STATE(61),
    [sym_cookies_section] = STATE(61),
    [sym_options_section] = STATE(61),
    [sym_bytes] = STATE(396),
    [sym_xml] = STATE(518),
    [sym_xml_prolog_tag] = STATE(244),
    [sym_xml_tag] = STATE(519),
    [sym_xml_open_tag] = STATE(113),
    [sym_oneline_base64] = STATE(518),
    [sym_oneline_file] = STATE(518),
    [sym_oneline_hex] = STATE(518),
    [sym_oneline_string] = STATE(518),
    [sym_multiline_string] = STATE(518),
    [sym_json_value] = STATE(518),
    [sym_json_object] = STATE(521),
    [sym_json_array] = STATE(521),
    [sym_json_string] = STATE(521),
    [sym_json_number] = STATE(521),
    [sym_template] = STATE(521),
    [sym_boolean] = STATE(521),
    [sym_null] = STATE(521),
    [sym_integer] = STATE(254),
    [sym_digit] = STATE(234),
    [aux_sym_request_repeat2] = STATE(50),
    [aux_sym_xml_repeat1] = STATE(244),
    [aux_sym_integer_repeat1] = STATE(234),
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
  [8] = {
    [sym_body] = STATE(103),
    [sym_request_section] = STATE(50),
    [sym_basic_auth_section] = STATE(61),
    [sym_query_string_params_section] = STATE(61),
    [sym_form_params_section] = STATE(61),
    [sym_multipart_form_data_section] = STATE(61),
    [sym_cookies_section] = STATE(61),
    [sym_options_section] = STATE(61),
    [sym_bytes] = STATE(396),
    [sym_xml] = STATE(518),
    [sym_xml_prolog_tag] = STATE(244),
    [sym_xml_tag] = STATE(519),
    [sym_xml_open_tag] = STATE(113),
    [sym_oneline_base64] = STATE(518),
    [sym_oneline_file] = STATE(518),
    [sym_oneline_hex] = STATE(518),
    [sym_oneline_string] = STATE(518),
    [sym_multiline_string] = STATE(518),
    [sym_json_value] = STATE(518),
    [sym_json_object] = STATE(521),
    [sym_json_array] = STATE(521),
    [sym_json_string] = STATE(521),
    [sym_json_number] = STATE(521),
    [sym_template] = STATE(521),
    [sym_boolean] = STATE(521),
    [sym_null] = STATE(521),
    [sym_integer] = STATE(254),
    [sym_digit] = STATE(234),
    [aux_sym_request_repeat2] = STATE(50),
    [aux_sym_xml_repeat1] = STATE(244),
    [aux_sym_integer_repeat1] = STATE(234),
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
    [sym_header] = STATE(57),
    [sym_body] = STATE(126),
    [sym_response_section] = STATE(20),
    [sym_captures_section] = STATE(71),
    [sym_asserts_section] = STATE(71),
    [sym_key_value] = STATE(354),
    [sym_bytes] = STATE(396),
    [sym_xml] = STATE(518),
    [sym_xml_prolog_tag] = STATE(244),
    [sym_xml_tag] = STATE(519),
    [sym_xml_open_tag] = STATE(113),
    [sym_oneline_base64] = STATE(518),
    [sym_oneline_file] = STATE(518),
    [sym_oneline_hex] = STATE(518),
    [sym_key_string] = STATE(520),
    [sym_key_string_content] = STATE(155),
    [sym_key_string_escaped_char] = STATE(235),
    [sym_oneline_string] = STATE(518),
    [sym_multiline_string] = STATE(518),
    [sym_json_value] = STATE(518),
    [sym_json_object] = STATE(521),
    [sym_json_array] = STATE(521),
    [sym_json_string] = STATE(521),
    [sym_json_number] = STATE(521),
    [sym_template] = STATE(284),
    [sym_boolean] = STATE(521),
    [sym_null] = STATE(521),
    [sym_integer] = STATE(254),
    [sym_digit] = STATE(234),
    [aux_sym_request_repeat1] = STATE(57),
    [aux_sym_response_repeat1] = STATE(20),
    [aux_sym_xml_repeat1] = STATE(244),
    [aux_sym_key_string_repeat1] = STATE(155),
    [aux_sym_key_string_content_repeat1] = STATE(235),
    [aux_sym_integer_repeat1] = STATE(234),
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
    [sym_header] = STATE(9),
    [sym_body] = STATE(128),
    [sym_response_section] = STATE(19),
    [sym_captures_section] = STATE(71),
    [sym_asserts_section] = STATE(71),
    [sym_key_value] = STATE(354),
    [sym_bytes] = STATE(396),
    [sym_xml] = STATE(518),
    [sym_xml_prolog_tag] = STATE(244),
    [sym_xml_tag] = STATE(519),
    [sym_xml_open_tag] = STATE(113),
    [sym_oneline_base64] = STATE(518),
    [sym_oneline_file] = STATE(518),
    [sym_oneline_hex] = STATE(518),
    [sym_key_string] = STATE(520),
    [sym_key_string_content] = STATE(155),
    [sym_key_string_escaped_char] = STATE(235),
    [sym_oneline_string] = STATE(518),
    [sym_multiline_string] = STATE(518),
    [sym_json_value] = STATE(518),
    [sym_json_object] = STATE(521),
    [sym_json_array] = STATE(521),
    [sym_json_string] = STATE(521),
    [sym_json_number] = STATE(521),
    [sym_template] = STATE(284),
    [sym_boolean] = STATE(521),
    [sym_null] = STATE(521),
    [sym_integer] = STATE(254),
    [sym_digit] = STATE(234),
    [aux_sym_request_repeat1] = STATE(9),
    [aux_sym_response_repeat1] = STATE(19),
    [aux_sym_xml_repeat1] = STATE(244),
    [aux_sym_key_string_repeat1] = STATE(155),
    [aux_sym_key_string_content_repeat1] = STATE(235),
    [aux_sym_integer_repeat1] = STATE(234),
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
    [anon_sym_compressed] = ACTIONS(93),
    [anon_sym_location] = ACTIONS(93),
    [anon_sym_insecure] = ACTIONS(93),
    [anon_sym_max_DASHredirs] = ACTIONS(93),
    [anon_sym_path_as_is] = ACTIONS(93),
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
    [anon_sym_compressed] = ACTIONS(102),
    [anon_sym_location] = ACTIONS(102),
    [anon_sym_insecure] = ACTIONS(102),
    [anon_sym_max_DASHredirs] = ACTIONS(102),
    [anon_sym_path_as_is] = ACTIONS(102),
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
    [sym_option] = STATE(13),
    [sym_ca_certificate_option] = STATE(26),
    [sym_compressed_option] = STATE(26),
    [sym_follow_redirect_option] = STATE(26),
    [sym_insecure_option] = STATE(26),
    [sym_max_redirs_option] = STATE(26),
    [sym_path_as_is_option] = STATE(26),
    [sym_retry_option] = STATE(26),
    [sym_retry_interval_option] = STATE(26),
    [sym_retry_max_count_option] = STATE(26),
    [sym_variable_option] = STATE(26),
    [sym_verbose_option] = STATE(26),
    [sym_very_verbose_option] = STATE(26),
    [aux_sym_options_section_repeat1] = STATE(13),
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
    [anon_sym_compressed] = ACTIONS(114),
    [anon_sym_location] = ACTIONS(117),
    [anon_sym_insecure] = ACTIONS(120),
    [anon_sym_max_DASHredirs] = ACTIONS(123),
    [anon_sym_path_as_is] = ACTIONS(126),
    [anon_sym_retry] = ACTIONS(129),
    [anon_sym_retry_DASHinterval] = ACTIONS(132),
    [anon_sym_retry_DASHmax_DASHcount] = ACTIONS(135),
    [anon_sym_variable] = ACTIONS(138),
    [anon_sym_verbose] = ACTIONS(141),
    [anon_sym_very_DASHverbose] = ACTIONS(144),
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
    [sym_option] = STATE(15),
    [sym_ca_certificate_option] = STATE(26),
    [sym_compressed_option] = STATE(26),
    [sym_follow_redirect_option] = STATE(26),
    [sym_insecure_option] = STATE(26),
    [sym_max_redirs_option] = STATE(26),
    [sym_path_as_is_option] = STATE(26),
    [sym_retry_option] = STATE(26),
    [sym_retry_interval_option] = STATE(26),
    [sym_retry_max_count_option] = STATE(26),
    [sym_variable_option] = STATE(26),
    [sym_verbose_option] = STATE(26),
    [sym_very_verbose_option] = STATE(26),
    [aux_sym_options_section_repeat1] = STATE(15),
    [ts_builtin_sym_end] = ACTIONS(147),
    [anon_sym_LF] = ACTIONS(147),
    [anon_sym_GET] = ACTIONS(149),
    [anon_sym_HEAD] = ACTIONS(149),
    [anon_sym_POST] = ACTIONS(149),
    [anon_sym_PUT] = ACTIONS(149),
    [anon_sym_DELETE] = ACTIONS(149),
    [anon_sym_CONNECT] = ACTIONS(149),
    [anon_sym_OPTIONS] = ACTIONS(149),
    [anon_sym_TRACE] = ACTIONS(149),
    [anon_sym_PATCH] = ACTIONS(149),
    [anon_sym_LINK] = ACTIONS(149),
    [anon_sym_UNLINK] = ACTIONS(149),
    [anon_sym_PURGE] = ACTIONS(149),
    [anon_sym_LOCK] = ACTIONS(149),
    [anon_sym_UNLOCK] = ACTIONS(149),
    [anon_sym_PROPFIND] = ACTIONS(149),
    [anon_sym_VIEW] = ACTIONS(149),
    [anon_sym_HTTP_SLASH1_DOT0] = ACTIONS(149),
    [anon_sym_HTTP_SLASH1_DOT1] = ACTIONS(149),
    [anon_sym_HTTP_SLASH2] = ACTIONS(149),
    [anon_sym_HTTP_SLASH_STAR] = ACTIONS(149),
    [anon_sym_HTTP] = ACTIONS(149),
    [anon_sym_LBRACKBasicAuth_RBRACK] = ACTIONS(149),
    [anon_sym_LBRACKQueryStringParams_RBRACK] = ACTIONS(149),
    [anon_sym_LBRACKFormParams_RBRACK] = ACTIONS(149),
    [anon_sym_LBRACKMultipartFormData_RBRACK] = ACTIONS(149),
    [anon_sym_LBRACKCookies_RBRACK] = ACTIONS(149),
    [anon_sym_LBRACKOptions_RBRACK] = ACTIONS(149),
    [anon_sym_file_COMMA] = ACTIONS(149),
    [anon_sym_cacert] = ACTIONS(151),
    [anon_sym_compressed] = ACTIONS(153),
    [anon_sym_location] = ACTIONS(155),
    [anon_sym_insecure] = ACTIONS(157),
    [anon_sym_max_DASHredirs] = ACTIONS(159),
    [anon_sym_path_as_is] = ACTIONS(161),
    [anon_sym_retry] = ACTIONS(163),
    [anon_sym_retry_DASHinterval] = ACTIONS(165),
    [anon_sym_retry_DASHmax_DASHcount] = ACTIONS(167),
    [anon_sym_variable] = ACTIONS(169),
    [anon_sym_verbose] = ACTIONS(171),
    [anon_sym_very_DASHverbose] = ACTIONS(173),
    [anon_sym_LT] = ACTIONS(149),
    [anon_sym_LT_QMARK] = ACTIONS(149),
    [anon_sym_base64_COMMA] = ACTIONS(149),
    [anon_sym_hex_COMMA] = ACTIONS(149),
    [anon_sym_DQUOTE] = ACTIONS(149),
    [anon_sym_BQUOTE] = ACTIONS(149),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(149),
    [anon_sym_LBRACE] = ACTIONS(149),
    [anon_sym_LBRACK] = ACTIONS(149),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(147),
    [anon_sym_true] = ACTIONS(149),
    [anon_sym_false] = ACTIONS(149),
    [anon_sym_null] = ACTIONS(149),
    [aux_sym_digit_token1] = ACTIONS(149),
    [sym_comment] = ACTIONS(149),
  },
  [15] = {
    [sym_option] = STATE(13),
    [sym_ca_certificate_option] = STATE(26),
    [sym_compressed_option] = STATE(26),
    [sym_follow_redirect_option] = STATE(26),
    [sym_insecure_option] = STATE(26),
    [sym_max_redirs_option] = STATE(26),
    [sym_path_as_is_option] = STATE(26),
    [sym_retry_option] = STATE(26),
    [sym_retry_interval_option] = STATE(26),
    [sym_retry_max_count_option] = STATE(26),
    [sym_variable_option] = STATE(26),
    [sym_verbose_option] = STATE(26),
    [sym_very_verbose_option] = STATE(26),
    [aux_sym_options_section_repeat1] = STATE(13),
    [ts_builtin_sym_end] = ACTIONS(175),
    [anon_sym_LF] = ACTIONS(175),
    [anon_sym_GET] = ACTIONS(177),
    [anon_sym_HEAD] = ACTIONS(177),
    [anon_sym_POST] = ACTIONS(177),
    [anon_sym_PUT] = ACTIONS(177),
    [anon_sym_DELETE] = ACTIONS(177),
    [anon_sym_CONNECT] = ACTIONS(177),
    [anon_sym_OPTIONS] = ACTIONS(177),
    [anon_sym_TRACE] = ACTIONS(177),
    [anon_sym_PATCH] = ACTIONS(177),
    [anon_sym_LINK] = ACTIONS(177),
    [anon_sym_UNLINK] = ACTIONS(177),
    [anon_sym_PURGE] = ACTIONS(177),
    [anon_sym_LOCK] = ACTIONS(177),
    [anon_sym_UNLOCK] = ACTIONS(177),
    [anon_sym_PROPFIND] = ACTIONS(177),
    [anon_sym_VIEW] = ACTIONS(177),
    [anon_sym_HTTP_SLASH1_DOT0] = ACTIONS(177),
    [anon_sym_HTTP_SLASH1_DOT1] = ACTIONS(177),
    [anon_sym_HTTP_SLASH2] = ACTIONS(177),
    [anon_sym_HTTP_SLASH_STAR] = ACTIONS(177),
    [anon_sym_HTTP] = ACTIONS(177),
    [anon_sym_LBRACKBasicAuth_RBRACK] = ACTIONS(177),
    [anon_sym_LBRACKQueryStringParams_RBRACK] = ACTIONS(177),
    [anon_sym_LBRACKFormParams_RBRACK] = ACTIONS(177),
    [anon_sym_LBRACKMultipartFormData_RBRACK] = ACTIONS(177),
    [anon_sym_LBRACKCookies_RBRACK] = ACTIONS(177),
    [anon_sym_LBRACKOptions_RBRACK] = ACTIONS(177),
    [anon_sym_file_COMMA] = ACTIONS(177),
    [anon_sym_cacert] = ACTIONS(151),
    [anon_sym_compressed] = ACTIONS(153),
    [anon_sym_location] = ACTIONS(155),
    [anon_sym_insecure] = ACTIONS(157),
    [anon_sym_max_DASHredirs] = ACTIONS(159),
    [anon_sym_path_as_is] = ACTIONS(161),
    [anon_sym_retry] = ACTIONS(163),
    [anon_sym_retry_DASHinterval] = ACTIONS(165),
    [anon_sym_retry_DASHmax_DASHcount] = ACTIONS(167),
    [anon_sym_variable] = ACTIONS(169),
    [anon_sym_verbose] = ACTIONS(171),
    [anon_sym_very_DASHverbose] = ACTIONS(173),
    [anon_sym_LT] = ACTIONS(177),
    [anon_sym_LT_QMARK] = ACTIONS(177),
    [anon_sym_base64_COMMA] = ACTIONS(177),
    [anon_sym_hex_COMMA] = ACTIONS(177),
    [anon_sym_DQUOTE] = ACTIONS(177),
    [anon_sym_BQUOTE] = ACTIONS(177),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(177),
    [anon_sym_LBRACE] = ACTIONS(177),
    [anon_sym_LBRACK] = ACTIONS(177),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(175),
    [anon_sym_true] = ACTIONS(177),
    [anon_sym_false] = ACTIONS(177),
    [anon_sym_null] = ACTIONS(177),
    [aux_sym_digit_token1] = ACTIONS(177),
    [sym_comment] = ACTIONS(177),
  },
  [16] = {
    [sym_assert] = STATE(16),
    [sym_query] = STATE(22),
    [sym_status_query] = STATE(93),
    [sym_url_query] = STATE(93),
    [sym_header_query] = STATE(93),
    [sym_cookie_query] = STATE(93),
    [sym_body_query] = STATE(93),
    [sym_xpath_query] = STATE(93),
    [sym_jsonpath_query] = STATE(93),
    [sym_regex_query] = STATE(93),
    [sym_variable_query] = STATE(93),
    [sym_duration_query] = STATE(93),
    [sym_sha256_query] = STATE(93),
    [sym_md5_query] = STATE(93),
    [sym_bytes_query] = STATE(93),
    [aux_sym_asserts_section_repeat1] = STATE(16),
    [ts_builtin_sym_end] = ACTIONS(179),
    [anon_sym_LF] = ACTIONS(179),
    [anon_sym_GET] = ACTIONS(181),
    [anon_sym_HEAD] = ACTIONS(181),
    [anon_sym_POST] = ACTIONS(181),
    [anon_sym_PUT] = ACTIONS(181),
    [anon_sym_DELETE] = ACTIONS(181),
    [anon_sym_CONNECT] = ACTIONS(181),
    [anon_sym_OPTIONS] = ACTIONS(181),
    [anon_sym_TRACE] = ACTIONS(181),
    [anon_sym_PATCH] = ACTIONS(181),
    [anon_sym_LINK] = ACTIONS(181),
    [anon_sym_UNLINK] = ACTIONS(181),
    [anon_sym_PURGE] = ACTIONS(181),
    [anon_sym_LOCK] = ACTIONS(181),
    [anon_sym_UNLOCK] = ACTIONS(181),
    [anon_sym_PROPFIND] = ACTIONS(181),
    [anon_sym_VIEW] = ACTIONS(181),
    [anon_sym_LBRACKCaptures_RBRACK] = ACTIONS(181),
    [anon_sym_LBRACKAsserts_RBRACK] = ACTIONS(181),
    [anon_sym_file_COMMA] = ACTIONS(181),
    [anon_sym_variable] = ACTIONS(183),
    [anon_sym_status] = ACTIONS(186),
    [anon_sym_url] = ACTIONS(189),
    [anon_sym_header] = ACTIONS(192),
    [anon_sym_cookie] = ACTIONS(195),
    [anon_sym_body] = ACTIONS(198),
    [anon_sym_xpath] = ACTIONS(201),
    [anon_sym_jsonpath] = ACTIONS(204),
    [anon_sym_regex] = ACTIONS(207),
    [anon_sym_duration] = ACTIONS(210),
    [anon_sym_sha256] = ACTIONS(213),
    [anon_sym_md5] = ACTIONS(216),
    [anon_sym_bytes] = ACTIONS(219),
    [anon_sym_LT] = ACTIONS(181),
    [anon_sym_LT_QMARK] = ACTIONS(181),
    [anon_sym_base64_COMMA] = ACTIONS(181),
    [anon_sym_hex_COMMA] = ACTIONS(181),
    [anon_sym_DQUOTE] = ACTIONS(181),
    [anon_sym_BQUOTE] = ACTIONS(181),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(181),
    [anon_sym_LBRACE] = ACTIONS(181),
    [anon_sym_LBRACK] = ACTIONS(181),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(179),
    [anon_sym_true] = ACTIONS(181),
    [anon_sym_false] = ACTIONS(181),
    [anon_sym_null] = ACTIONS(181),
    [aux_sym_digit_token1] = ACTIONS(181),
    [sym_comment] = ACTIONS(181),
  },
  [17] = {
    [sym_assert] = STATE(16),
    [sym_query] = STATE(22),
    [sym_status_query] = STATE(93),
    [sym_url_query] = STATE(93),
    [sym_header_query] = STATE(93),
    [sym_cookie_query] = STATE(93),
    [sym_body_query] = STATE(93),
    [sym_xpath_query] = STATE(93),
    [sym_jsonpath_query] = STATE(93),
    [sym_regex_query] = STATE(93),
    [sym_variable_query] = STATE(93),
    [sym_duration_query] = STATE(93),
    [sym_sha256_query] = STATE(93),
    [sym_md5_query] = STATE(93),
    [sym_bytes_query] = STATE(93),
    [aux_sym_asserts_section_repeat1] = STATE(16),
    [ts_builtin_sym_end] = ACTIONS(222),
    [anon_sym_LF] = ACTIONS(222),
    [anon_sym_GET] = ACTIONS(224),
    [anon_sym_HEAD] = ACTIONS(224),
    [anon_sym_POST] = ACTIONS(224),
    [anon_sym_PUT] = ACTIONS(224),
    [anon_sym_DELETE] = ACTIONS(224),
    [anon_sym_CONNECT] = ACTIONS(224),
    [anon_sym_OPTIONS] = ACTIONS(224),
    [anon_sym_TRACE] = ACTIONS(224),
    [anon_sym_PATCH] = ACTIONS(224),
    [anon_sym_LINK] = ACTIONS(224),
    [anon_sym_UNLINK] = ACTIONS(224),
    [anon_sym_PURGE] = ACTIONS(224),
    [anon_sym_LOCK] = ACTIONS(224),
    [anon_sym_UNLOCK] = ACTIONS(224),
    [anon_sym_PROPFIND] = ACTIONS(224),
    [anon_sym_VIEW] = ACTIONS(224),
    [anon_sym_LBRACKCaptures_RBRACK] = ACTIONS(224),
    [anon_sym_LBRACKAsserts_RBRACK] = ACTIONS(224),
    [anon_sym_file_COMMA] = ACTIONS(224),
    [anon_sym_variable] = ACTIONS(226),
    [anon_sym_status] = ACTIONS(228),
    [anon_sym_url] = ACTIONS(230),
    [anon_sym_header] = ACTIONS(232),
    [anon_sym_cookie] = ACTIONS(234),
    [anon_sym_body] = ACTIONS(236),
    [anon_sym_xpath] = ACTIONS(238),
    [anon_sym_jsonpath] = ACTIONS(240),
    [anon_sym_regex] = ACTIONS(242),
    [anon_sym_duration] = ACTIONS(244),
    [anon_sym_sha256] = ACTIONS(246),
    [anon_sym_md5] = ACTIONS(248),
    [anon_sym_bytes] = ACTIONS(250),
    [anon_sym_LT] = ACTIONS(224),
    [anon_sym_LT_QMARK] = ACTIONS(224),
    [anon_sym_base64_COMMA] = ACTIONS(224),
    [anon_sym_hex_COMMA] = ACTIONS(224),
    [anon_sym_DQUOTE] = ACTIONS(224),
    [anon_sym_BQUOTE] = ACTIONS(224),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(224),
    [anon_sym_LBRACE] = ACTIONS(224),
    [anon_sym_LBRACK] = ACTIONS(224),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(222),
    [anon_sym_true] = ACTIONS(224),
    [anon_sym_false] = ACTIONS(224),
    [anon_sym_null] = ACTIONS(224),
    [aux_sym_digit_token1] = ACTIONS(224),
    [sym_comment] = ACTIONS(224),
  },
  [18] = {
    [sym_assert] = STATE(17),
    [sym_query] = STATE(22),
    [sym_status_query] = STATE(93),
    [sym_url_query] = STATE(93),
    [sym_header_query] = STATE(93),
    [sym_cookie_query] = STATE(93),
    [sym_body_query] = STATE(93),
    [sym_xpath_query] = STATE(93),
    [sym_jsonpath_query] = STATE(93),
    [sym_regex_query] = STATE(93),
    [sym_variable_query] = STATE(93),
    [sym_duration_query] = STATE(93),
    [sym_sha256_query] = STATE(93),
    [sym_md5_query] = STATE(93),
    [sym_bytes_query] = STATE(93),
    [aux_sym_asserts_section_repeat1] = STATE(17),
    [ts_builtin_sym_end] = ACTIONS(252),
    [anon_sym_LF] = ACTIONS(252),
    [anon_sym_GET] = ACTIONS(254),
    [anon_sym_HEAD] = ACTIONS(254),
    [anon_sym_POST] = ACTIONS(254),
    [anon_sym_PUT] = ACTIONS(254),
    [anon_sym_DELETE] = ACTIONS(254),
    [anon_sym_CONNECT] = ACTIONS(254),
    [anon_sym_OPTIONS] = ACTIONS(254),
    [anon_sym_TRACE] = ACTIONS(254),
    [anon_sym_PATCH] = ACTIONS(254),
    [anon_sym_LINK] = ACTIONS(254),
    [anon_sym_UNLINK] = ACTIONS(254),
    [anon_sym_PURGE] = ACTIONS(254),
    [anon_sym_LOCK] = ACTIONS(254),
    [anon_sym_UNLOCK] = ACTIONS(254),
    [anon_sym_PROPFIND] = ACTIONS(254),
    [anon_sym_VIEW] = ACTIONS(254),
    [anon_sym_LBRACKCaptures_RBRACK] = ACTIONS(254),
    [anon_sym_LBRACKAsserts_RBRACK] = ACTIONS(254),
    [anon_sym_file_COMMA] = ACTIONS(254),
    [anon_sym_variable] = ACTIONS(226),
    [anon_sym_status] = ACTIONS(228),
    [anon_sym_url] = ACTIONS(230),
    [anon_sym_header] = ACTIONS(232),
    [anon_sym_cookie] = ACTIONS(234),
    [anon_sym_body] = ACTIONS(236),
    [anon_sym_xpath] = ACTIONS(238),
    [anon_sym_jsonpath] = ACTIONS(240),
    [anon_sym_regex] = ACTIONS(242),
    [anon_sym_duration] = ACTIONS(244),
    [anon_sym_sha256] = ACTIONS(246),
    [anon_sym_md5] = ACTIONS(248),
    [anon_sym_bytes] = ACTIONS(250),
    [anon_sym_LT] = ACTIONS(254),
    [anon_sym_LT_QMARK] = ACTIONS(254),
    [anon_sym_base64_COMMA] = ACTIONS(254),
    [anon_sym_hex_COMMA] = ACTIONS(254),
    [anon_sym_DQUOTE] = ACTIONS(254),
    [anon_sym_BQUOTE] = ACTIONS(254),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(254),
    [anon_sym_LBRACE] = ACTIONS(254),
    [anon_sym_LBRACK] = ACTIONS(254),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(252),
    [anon_sym_true] = ACTIONS(254),
    [anon_sym_false] = ACTIONS(254),
    [anon_sym_null] = ACTIONS(254),
    [aux_sym_digit_token1] = ACTIONS(254),
    [sym_comment] = ACTIONS(254),
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
    STATE(113), 1,
      sym_xml_open_tag,
    STATE(126), 1,
      sym_body,
    STATE(254), 1,
      sym_integer,
    STATE(396), 1,
      sym_bytes,
    STATE(519), 1,
      sym_xml_tag,
    ACTIONS(57), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(77), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(65), 2,
      sym_response_section,
      aux_sym_response_repeat1,
    STATE(71), 2,
      sym_captures_section,
      sym_asserts_section,
    STATE(234), 2,
      sym_digit,
      aux_sym_integer_repeat1,
    STATE(244), 2,
      sym_xml_prolog_tag,
      aux_sym_xml_repeat1,
    STATE(518), 7,
      sym_xml,
      sym_oneline_base64,
      sym_oneline_file,
      sym_oneline_hex,
      sym_oneline_string,
      sym_multiline_string,
      sym_json_value,
    STATE(521), 7,
      sym_json_object,
      sym_json_array,
      sym_json_string,
      sym_json_number,
      sym_template,
      sym_boolean,
      sym_null,
    ACTIONS(79), 17,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
    STATE(113), 1,
      sym_xml_open_tag,
    STATE(124), 1,
      sym_body,
    STATE(254), 1,
      sym_integer,
    STATE(396), 1,
      sym_bytes,
    STATE(519), 1,
      sym_xml_tag,
    ACTIONS(57), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(256), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(65), 2,
      sym_response_section,
      aux_sym_response_repeat1,
    STATE(71), 2,
      sym_captures_section,
      sym_asserts_section,
    STATE(234), 2,
      sym_digit,
      aux_sym_integer_repeat1,
    STATE(244), 2,
      sym_xml_prolog_tag,
      aux_sym_xml_repeat1,
    STATE(518), 7,
      sym_xml,
      sym_oneline_base64,
      sym_oneline_file,
      sym_oneline_hex,
      sym_oneline_string,
      sym_multiline_string,
      sym_json_value,
    STATE(521), 7,
      sym_json_object,
      sym_json_array,
      sym_json_string,
      sym_json_number,
      sym_template,
      sym_boolean,
      sym_null,
    ACTIONS(258), 17,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
    ACTIONS(260), 1,
      anon_sym_regex,
    ACTIONS(262), 1,
      anon_sym_not,
    ACTIONS(276), 1,
      anon_sym_startsWith,
    ACTIONS(278), 1,
      anon_sym_endsWith,
    ACTIONS(280), 1,
      anon_sym_contains,
    ACTIONS(282), 1,
      anon_sym_matches,
    ACTIONS(284), 1,
      anon_sym_exists,
    ACTIONS(286), 1,
      anon_sym_includes,
    ACTIONS(288), 1,
      anon_sym_isInteger,
    ACTIONS(290), 1,
      anon_sym_isFloat,
    ACTIONS(292), 1,
      anon_sym_isBoolean,
    ACTIONS(294), 1,
      anon_sym_isString,
    ACTIONS(296), 1,
      anon_sym_isCollection,
    ACTIONS(298), 1,
      anon_sym_count,
    ACTIONS(300), 1,
      anon_sym_urlEncode,
    ACTIONS(302), 1,
      anon_sym_urlDecode,
    ACTIONS(304), 1,
      anon_sym_htmlEscape,
    ACTIONS(306), 1,
      anon_sym_htmlUnescape,
    ACTIONS(308), 1,
      anon_sym_toInt,
    STATE(419), 1,
      sym_predicate,
    STATE(526), 1,
      sym_predicate_func,
    ACTIONS(264), 2,
      anon_sym_equals,
      anon_sym_EQ_EQ,
    ACTIONS(266), 2,
      anon_sym_notEquals,
      anon_sym_BANG_EQ,
    ACTIONS(268), 2,
      anon_sym_greaterThan,
      anon_sym_GT,
    ACTIONS(270), 2,
      anon_sym_greaterThanOrEquals,
      anon_sym_GT_EQ,
    ACTIONS(272), 2,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(274), 2,
      anon_sym_lessThanOrEquals,
      anon_sym_LT_EQ,
    STATE(64), 2,
      sym_filter,
      aux_sym_capture_repeat1,
    STATE(77), 7,
      sym_regex_filter,
      sym_count_filter,
      sym_url_encode_filter,
      sym_url_decode_filter,
      sym_html_encode_filter,
      sym_html_decode_filter,
      sym_to_int_filter,
    STATE(525), 17,
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
    ACTIONS(260), 1,
      anon_sym_regex,
    ACTIONS(262), 1,
      anon_sym_not,
    ACTIONS(276), 1,
      anon_sym_startsWith,
    ACTIONS(278), 1,
      anon_sym_endsWith,
    ACTIONS(280), 1,
      anon_sym_contains,
    ACTIONS(282), 1,
      anon_sym_matches,
    ACTIONS(284), 1,
      anon_sym_exists,
    ACTIONS(286), 1,
      anon_sym_includes,
    ACTIONS(288), 1,
      anon_sym_isInteger,
    ACTIONS(290), 1,
      anon_sym_isFloat,
    ACTIONS(292), 1,
      anon_sym_isBoolean,
    ACTIONS(294), 1,
      anon_sym_isString,
    ACTIONS(296), 1,
      anon_sym_isCollection,
    ACTIONS(298), 1,
      anon_sym_count,
    ACTIONS(300), 1,
      anon_sym_urlEncode,
    ACTIONS(302), 1,
      anon_sym_urlDecode,
    ACTIONS(304), 1,
      anon_sym_htmlEscape,
    ACTIONS(306), 1,
      anon_sym_htmlUnescape,
    ACTIONS(308), 1,
      anon_sym_toInt,
    STATE(374), 1,
      sym_predicate,
    STATE(526), 1,
      sym_predicate_func,
    ACTIONS(264), 2,
      anon_sym_equals,
      anon_sym_EQ_EQ,
    ACTIONS(266), 2,
      anon_sym_notEquals,
      anon_sym_BANG_EQ,
    ACTIONS(268), 2,
      anon_sym_greaterThan,
      anon_sym_GT,
    ACTIONS(270), 2,
      anon_sym_greaterThanOrEquals,
      anon_sym_GT_EQ,
    ACTIONS(272), 2,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(274), 2,
      anon_sym_lessThanOrEquals,
      anon_sym_LT_EQ,
    STATE(21), 2,
      sym_filter,
      aux_sym_capture_repeat1,
    STATE(77), 7,
      sym_regex_filter,
      sym_count_filter,
      sym_url_encode_filter,
      sym_url_decode_filter,
      sym_html_encode_filter,
      sym_html_decode_filter,
      sym_to_int_filter,
    STATE(525), 17,
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
  [490] = 2,
    ACTIONS(310), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(312), 54,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
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
      anon_sym_compressed,
      anon_sym_location,
      anon_sym_insecure,
      anon_sym_max_DASHredirs,
      anon_sym_path_as_is,
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
  [552] = 2,
    ACTIONS(314), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(316), 54,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
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
      anon_sym_compressed,
      anon_sym_location,
      anon_sym_insecure,
      anon_sym_max_DASHredirs,
      anon_sym_path_as_is,
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
  [614] = 2,
    ACTIONS(318), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(320), 54,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
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
      anon_sym_compressed,
      anon_sym_location,
      anon_sym_insecure,
      anon_sym_max_DASHredirs,
      anon_sym_path_as_is,
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
  [676] = 2,
    ACTIONS(322), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(324), 54,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
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
      anon_sym_compressed,
      anon_sym_location,
      anon_sym_insecure,
      anon_sym_max_DASHredirs,
      anon_sym_path_as_is,
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
  [738] = 2,
    ACTIONS(326), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(328), 54,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
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
      anon_sym_compressed,
      anon_sym_location,
      anon_sym_insecure,
      anon_sym_max_DASHredirs,
      anon_sym_path_as_is,
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
  [800] = 2,
    ACTIONS(330), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(332), 54,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
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
      anon_sym_compressed,
      anon_sym_location,
      anon_sym_insecure,
      anon_sym_max_DASHredirs,
      anon_sym_path_as_is,
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
  [862] = 2,
    ACTIONS(334), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(336), 54,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
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
      anon_sym_compressed,
      anon_sym_location,
      anon_sym_insecure,
      anon_sym_max_DASHredirs,
      anon_sym_path_as_is,
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
  [924] = 2,
    ACTIONS(338), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(340), 54,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
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
      anon_sym_compressed,
      anon_sym_location,
      anon_sym_insecure,
      anon_sym_max_DASHredirs,
      anon_sym_path_as_is,
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
  [986] = 2,
    ACTIONS(342), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(344), 54,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
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
      anon_sym_compressed,
      anon_sym_location,
      anon_sym_insecure,
      anon_sym_max_DASHredirs,
      anon_sym_path_as_is,
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
  [1048] = 2,
    ACTIONS(346), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(348), 54,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
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
      anon_sym_compressed,
      anon_sym_location,
      anon_sym_insecure,
      anon_sym_max_DASHredirs,
      anon_sym_path_as_is,
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
  [1110] = 2,
    ACTIONS(350), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(352), 54,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
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
      anon_sym_compressed,
      anon_sym_location,
      anon_sym_insecure,
      anon_sym_max_DASHredirs,
      anon_sym_path_as_is,
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
  [1172] = 2,
    ACTIONS(354), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(356), 54,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
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
      anon_sym_compressed,
      anon_sym_location,
      anon_sym_insecure,
      anon_sym_max_DASHredirs,
      anon_sym_path_as_is,
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
  [1234] = 2,
    ACTIONS(358), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(360), 54,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
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
      anon_sym_compressed,
      anon_sym_location,
      anon_sym_insecure,
      anon_sym_max_DASHredirs,
      anon_sym_path_as_is,
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
  [1296] = 2,
    ACTIONS(362), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(364), 54,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
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
      anon_sym_compressed,
      anon_sym_location,
      anon_sym_insecure,
      anon_sym_max_DASHredirs,
      anon_sym_path_as_is,
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
  [1358] = 10,
    ACTIONS(43), 1,
      sym_key_string_text,
    ACTIONS(45), 1,
      anon_sym_BSLASH2,
    ACTIONS(370), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(442), 1,
      sym_key_string,
    STATE(563), 1,
      sym_multipart_form_data_param,
    ACTIONS(366), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(235), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(585), 2,
      sym_key_value,
      sym_file_param,
    STATE(155), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
    ACTIONS(368), 42,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
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
  [1435] = 10,
    ACTIONS(43), 1,
      sym_key_string_text,
    ACTIONS(45), 1,
      anon_sym_BSLASH2,
    ACTIONS(370), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(442), 1,
      sym_key_string,
    STATE(563), 1,
      sym_multipart_form_data_param,
    ACTIONS(372), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(235), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(585), 2,
      sym_key_value,
      sym_file_param,
    STATE(155), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
    ACTIONS(374), 42,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
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
  [1512] = 10,
    ACTIONS(43), 1,
      sym_key_string_text,
    ACTIONS(45), 1,
      anon_sym_BSLASH2,
    ACTIONS(370), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(442), 1,
      sym_key_string,
    STATE(563), 1,
      sym_multipart_form_data_param,
    ACTIONS(376), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(235), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(585), 2,
      sym_key_value,
      sym_file_param,
    STATE(155), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
    ACTIONS(378), 42,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
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
  [1589] = 10,
    ACTIONS(384), 1,
      sym_key_string_text,
    ACTIONS(387), 1,
      anon_sym_BSLASH2,
    ACTIONS(390), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(399), 1,
      sym_key_value,
    STATE(520), 1,
      sym_key_string,
    ACTIONS(380), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(40), 2,
      sym_header,
      aux_sym_request_repeat1,
    STATE(235), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(155), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
    ACTIONS(382), 42,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
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
  [1666] = 9,
    ACTIONS(43), 1,
      sym_key_string_text,
    ACTIONS(45), 1,
      anon_sym_BSLASH2,
    ACTIONS(370), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(520), 1,
      sym_key_string,
    STATE(579), 1,
      sym_key_value,
    ACTIONS(393), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(235), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(155), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
    ACTIONS(395), 42,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
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
  [1739] = 9,
    ACTIONS(43), 1,
      sym_key_string_text,
    ACTIONS(45), 1,
      anon_sym_BSLASH2,
    ACTIONS(370), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(520), 1,
      sym_key_string,
    STATE(579), 1,
      sym_key_value,
    ACTIONS(397), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(235), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(155), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
    ACTIONS(399), 42,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
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
  [1812] = 9,
    ACTIONS(43), 1,
      sym_key_string_text,
    ACTIONS(45), 1,
      anon_sym_BSLASH2,
    ACTIONS(370), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(520), 1,
      sym_key_string,
    STATE(579), 1,
      sym_key_value,
    ACTIONS(401), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(235), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(155), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
    ACTIONS(403), 42,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
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
  [1885] = 9,
    ACTIONS(43), 1,
      sym_key_string_text,
    ACTIONS(45), 1,
      anon_sym_BSLASH2,
    ACTIONS(370), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(520), 1,
      sym_key_string,
    STATE(579), 1,
      sym_key_value,
    ACTIONS(405), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(235), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(155), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
    ACTIONS(407), 42,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
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
  [1958] = 9,
    ACTIONS(43), 1,
      sym_key_string_text,
    ACTIONS(45), 1,
      anon_sym_BSLASH2,
    ACTIONS(370), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(520), 1,
      sym_key_string,
    STATE(579), 1,
      sym_key_value,
    ACTIONS(409), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(235), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(155), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
    ACTIONS(411), 42,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
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
  [2031] = 9,
    ACTIONS(43), 1,
      sym_key_string_text,
    ACTIONS(45), 1,
      anon_sym_BSLASH2,
    ACTIONS(370), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(520), 1,
      sym_key_string,
    STATE(579), 1,
      sym_key_value,
    ACTIONS(413), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(235), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(155), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
    ACTIONS(415), 42,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
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
  [2104] = 9,
    ACTIONS(43), 1,
      sym_key_string_text,
    ACTIONS(45), 1,
      anon_sym_BSLASH2,
    ACTIONS(370), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(520), 1,
      sym_key_string,
    STATE(579), 1,
      sym_key_value,
    ACTIONS(417), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(235), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(155), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
    ACTIONS(419), 42,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
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
  [2177] = 9,
    ACTIONS(43), 1,
      sym_key_string_text,
    ACTIONS(45), 1,
      anon_sym_BSLASH2,
    ACTIONS(370), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(520), 1,
      sym_key_string,
    STATE(579), 1,
      sym_key_value,
    ACTIONS(421), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(235), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(155), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
    ACTIONS(423), 42,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
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
  [2250] = 9,
    ACTIONS(43), 1,
      sym_key_string_text,
    ACTIONS(45), 1,
      anon_sym_BSLASH2,
    ACTIONS(370), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(520), 1,
      sym_key_string,
    STATE(579), 1,
      sym_key_value,
    ACTIONS(425), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(235), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(155), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
    ACTIONS(427), 42,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
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
  [2323] = 10,
    ACTIONS(433), 1,
      anon_sym_LBRACKBasicAuth_RBRACK,
    ACTIONS(436), 1,
      anon_sym_LBRACKQueryStringParams_RBRACK,
    ACTIONS(439), 1,
      anon_sym_LBRACKFormParams_RBRACK,
    ACTIONS(442), 1,
      anon_sym_LBRACKMultipartFormData_RBRACK,
    ACTIONS(445), 1,
      anon_sym_LBRACKCookies_RBRACK,
    ACTIONS(448), 1,
      anon_sym_LBRACKOptions_RBRACK,
    STATE(50), 2,
      sym_request_section,
      aux_sym_request_repeat2,
    ACTIONS(429), 3,
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
    ACTIONS(431), 36,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
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
  [2397] = 6,
    ACTIONS(453), 1,
      anon_sym_LF,
    ACTIONS(458), 1,
      sym_comment,
    STATE(55), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(51), 2,
      sym__comment_or_new_line,
      aux_sym_hurl_file_repeat2,
    ACTIONS(451), 3,
      ts_builtin_sym_end,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(456), 42,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
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
  [2460] = 2,
    ACTIONS(461), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(463), 46,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
  [2514] = 2,
    ACTIONS(465), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(467), 46,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
  [2568] = 5,
    ACTIONS(469), 1,
      anon_sym_LF,
    ACTIONS(472), 1,
      sym_comment,
    STATE(54), 1,
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
  [2627] = 5,
    ACTIONS(475), 1,
      anon_sym_LF,
    ACTIONS(477), 1,
      sym_comment,
    STATE(54), 1,
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
  [2686] = 2,
    ACTIONS(479), 4,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(481), 43,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
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
  [2738] = 10,
    ACTIONS(384), 1,
      sym_key_string_text,
    ACTIONS(387), 1,
      anon_sym_BSLASH2,
    ACTIONS(390), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(354), 1,
      sym_key_value,
    STATE(520), 1,
      sym_key_string,
    ACTIONS(380), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(57), 2,
      sym_header,
      aux_sym_request_repeat1,
    STATE(235), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(155), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
    ACTIONS(382), 33,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
  [2806] = 9,
    ACTIONS(487), 1,
      sym_key_string_text,
    ACTIONS(489), 1,
      anon_sym_BSLASH2,
    ACTIONS(491), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(554), 1,
      sym_key_string,
    ACTIONS(483), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(59), 2,
      sym_capture,
      aux_sym_captures_section_repeat1,
    STATE(267), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(175), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
    ACTIONS(485), 33,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
  [2871] = 9,
    ACTIONS(497), 1,
      sym_key_string_text,
    ACTIONS(500), 1,
      anon_sym_BSLASH2,
    ACTIONS(503), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(554), 1,
      sym_key_string,
    ACTIONS(493), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(59), 2,
      sym_capture,
      aux_sym_captures_section_repeat1,
    STATE(267), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(175), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
    ACTIONS(495), 33,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
  [2936] = 9,
    ACTIONS(487), 1,
      sym_key_string_text,
    ACTIONS(489), 1,
      anon_sym_BSLASH2,
    ACTIONS(491), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(554), 1,
      sym_key_string,
    ACTIONS(506), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(58), 2,
      sym_capture,
      aux_sym_captures_section_repeat1,
    STATE(267), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(175), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
    ACTIONS(508), 33,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
  [3001] = 2,
    ACTIONS(510), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(512), 42,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
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
  [3051] = 2,
    ACTIONS(514), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(516), 42,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
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
  [3101] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(276), 1,
      anon_sym_startsWith,
    ACTIONS(278), 1,
      anon_sym_endsWith,
    ACTIONS(280), 1,
      anon_sym_contains,
    ACTIONS(282), 1,
      anon_sym_matches,
    ACTIONS(284), 1,
      anon_sym_exists,
    ACTIONS(286), 1,
      anon_sym_includes,
    ACTIONS(288), 1,
      anon_sym_isInteger,
    ACTIONS(290), 1,
      anon_sym_isFloat,
    ACTIONS(292), 1,
      anon_sym_isBoolean,
    ACTIONS(294), 1,
      anon_sym_isString,
    ACTIONS(296), 1,
      anon_sym_isCollection,
    STATE(516), 1,
      sym_predicate_func,
    ACTIONS(264), 2,
      anon_sym_equals,
      anon_sym_EQ_EQ,
    ACTIONS(266), 2,
      anon_sym_notEquals,
      anon_sym_BANG_EQ,
    ACTIONS(268), 2,
      anon_sym_greaterThan,
      anon_sym_GT,
    ACTIONS(270), 2,
      anon_sym_greaterThanOrEquals,
      anon_sym_GT_EQ,
    ACTIONS(272), 2,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(274), 2,
      anon_sym_lessThanOrEquals,
      anon_sym_LT_EQ,
    STATE(525), 17,
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
  [3184] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(518), 1,
      anon_sym_regex,
    ACTIONS(525), 1,
      anon_sym_count,
    ACTIONS(528), 1,
      anon_sym_urlEncode,
    ACTIONS(531), 1,
      anon_sym_urlDecode,
    ACTIONS(534), 1,
      anon_sym_htmlEscape,
    ACTIONS(537), 1,
      anon_sym_htmlUnescape,
    ACTIONS(540), 1,
      anon_sym_toInt,
    STATE(64), 2,
      sym_filter,
      aux_sym_capture_repeat1,
    ACTIONS(521), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    STATE(77), 7,
      sym_regex_filter,
      sym_count_filter,
      sym_url_encode_filter,
      sym_url_decode_filter,
      sym_html_encode_filter,
      sym_html_decode_filter,
      sym_to_int_filter,
    ACTIONS(523), 20,
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
  [3251] = 6,
    ACTIONS(547), 1,
      anon_sym_LBRACKCaptures_RBRACK,
    ACTIONS(550), 1,
      anon_sym_LBRACKAsserts_RBRACK,
    STATE(65), 2,
      sym_response_section,
      aux_sym_response_repeat1,
    STATE(71), 2,
      sym_captures_section,
      sym_asserts_section,
    ACTIONS(543), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(545), 31,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
  [3304] = 5,
    ACTIONS(553), 1,
      anon_sym_LF,
    ACTIONS(556), 1,
      sym_comment,
    STATE(66), 1,
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
  [3354] = 5,
    ACTIONS(559), 1,
      anon_sym_LF,
    ACTIONS(561), 1,
      sym_comment,
    STATE(66), 1,
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
  [3404] = 2,
    ACTIONS(563), 4,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(565), 34,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
  [3447] = 2,
    ACTIONS(567), 4,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(569), 34,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
  [3490] = 2,
    ACTIONS(479), 4,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(481), 34,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
  [3533] = 2,
    ACTIONS(571), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(573), 33,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
  [3574] = 3,
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
  [3614] = 3,
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
  [3654] = 3,
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
  [3694] = 3,
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
  [3734] = 3,
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
  [3774] = 3,
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
  [3814] = 3,
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
  [3854] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(605), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(603), 27,
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
  [3894] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(609), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(607), 27,
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
  [3934] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(613), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(611), 27,
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
  [3974] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(617), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(615), 27,
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
  [4014] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(621), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(619), 27,
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
  [4054] = 3,
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
  [4093] = 3,
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
  [4132] = 3,
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
  [4171] = 3,
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
  [4210] = 3,
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
  [4249] = 3,
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
  [4288] = 3,
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
  [4327] = 3,
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
  [4366] = 3,
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
  [4405] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(661), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(659), 26,
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
  [4444] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(665), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(663), 26,
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
  [4483] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(669), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(667), 26,
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
  [4522] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(673), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(671), 26,
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
  [4561] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(677), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(675), 26,
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
  [4600] = 9,
    ACTIONS(7), 1,
      anon_sym_LF,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(679), 1,
      ts_builtin_sym_end,
    STATE(11), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(112), 1,
      sym_response,
    STATE(125), 1,
      sym__comment_or_new_line,
    STATE(386), 1,
      sym_version,
    ACTIONS(683), 5,
      anon_sym_HTTP_SLASH1_DOT0,
      anon_sym_HTTP_SLASH1_DOT1,
      anon_sym_HTTP_SLASH2,
      anon_sym_HTTP_SLASH_STAR,
      anon_sym_HTTP,
    ACTIONS(681), 16,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
  [4647] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(685), 1,
      anon_sym_variable,
    ACTIONS(687), 1,
      anon_sym_status,
    ACTIONS(689), 1,
      anon_sym_url,
    ACTIONS(691), 1,
      anon_sym_header,
    ACTIONS(693), 1,
      anon_sym_cookie,
    ACTIONS(695), 1,
      anon_sym_body,
    ACTIONS(697), 1,
      anon_sym_xpath,
    ACTIONS(699), 1,
      anon_sym_jsonpath,
    ACTIONS(701), 1,
      anon_sym_regex,
    ACTIONS(703), 1,
      anon_sym_duration,
    ACTIONS(705), 1,
      anon_sym_sha256,
    ACTIONS(707), 1,
      anon_sym_md5,
    ACTIONS(709), 1,
      anon_sym_bytes,
    STATE(119), 1,
      sym_query,
    STATE(184), 13,
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
  [4708] = 9,
    ACTIONS(7), 1,
      anon_sym_LF,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(711), 1,
      ts_builtin_sym_end,
    STATE(11), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(98), 1,
      sym_request,
    STATE(133), 1,
      sym_method,
    STATE(111), 2,
      sym_entry,
      aux_sym_hurl_file_repeat1,
    STATE(287), 2,
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
  [4753] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(713), 1,
      anon_sym_file_COMMA,
    ACTIONS(715), 1,
      anon_sym_base64_COMMA,
    ACTIONS(717), 1,
      anon_sym_hex_COMMA,
    ACTIONS(719), 1,
      anon_sym_DQUOTE,
    ACTIONS(721), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(725), 1,
      anon_sym_null,
    ACTIONS(727), 1,
      aux_sym_digit_token1,
    STATE(403), 1,
      sym_integer,
    STATE(504), 1,
      sym_predicate_value,
    ACTIONS(723), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(234), 2,
      sym_digit,
      aux_sym_integer_repeat1,
    STATE(514), 9,
      sym_oneline_base64,
      sym_oneline_file,
      sym_oneline_hex,
      sym_quoted_string,
      sym_multiline_string,
      sym_template,
      sym_boolean,
      sym_null,
      sym_float,
  [4806] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(713), 1,
      anon_sym_file_COMMA,
    ACTIONS(715), 1,
      anon_sym_base64_COMMA,
    ACTIONS(717), 1,
      anon_sym_hex_COMMA,
    ACTIONS(719), 1,
      anon_sym_DQUOTE,
    ACTIONS(721), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(725), 1,
      anon_sym_null,
    ACTIONS(727), 1,
      aux_sym_digit_token1,
    STATE(403), 1,
      sym_integer,
    STATE(515), 1,
      sym_predicate_value,
    ACTIONS(723), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(234), 2,
      sym_digit,
      aux_sym_integer_repeat1,
    STATE(514), 9,
      sym_oneline_base64,
      sym_oneline_file,
      sym_oneline_hex,
      sym_quoted_string,
      sym_multiline_string,
      sym_template,
      sym_boolean,
      sym_null,
      sym_float,
  [4859] = 2,
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
  [4888] = 2,
    ACTIONS(729), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(731), 22,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
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
  [4917] = 2,
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
  [4946] = 2,
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
  [4975] = 2,
    ACTIONS(733), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(735), 22,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
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
  [5004] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(713), 1,
      anon_sym_file_COMMA,
    ACTIONS(715), 1,
      anon_sym_base64_COMMA,
    ACTIONS(717), 1,
      anon_sym_hex_COMMA,
    ACTIONS(719), 1,
      anon_sym_DQUOTE,
    ACTIONS(721), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(725), 1,
      anon_sym_null,
    ACTIONS(727), 1,
      aux_sym_digit_token1,
    STATE(403), 1,
      sym_integer,
    STATE(513), 1,
      sym_predicate_value,
    ACTIONS(723), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(234), 2,
      sym_digit,
      aux_sym_integer_repeat1,
    STATE(514), 9,
      sym_oneline_base64,
      sym_oneline_file,
      sym_oneline_hex,
      sym_quoted_string,
      sym_multiline_string,
      sym_template,
      sym_boolean,
      sym_null,
      sym_float,
  [5057] = 13,
    ACTIONS(59), 1,
      anon_sym_null,
    ACTIONS(61), 1,
      aux_sym_digit_token1,
    ACTIONS(739), 1,
      anon_sym_BSLASH,
    ACTIONS(741), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(743), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(288), 1,
      aux_sym_value_string_text_repeat1,
    STATE(433), 1,
      sym_integer,
    ACTIONS(57), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(737), 2,
      anon_sym_LF,
      sym_comment,
    STATE(234), 2,
      sym_digit,
      aux_sym_integer_repeat1,
    STATE(146), 3,
      sym_value_string_content,
      sym_template,
      aux_sym_value_string_repeat1,
    STATE(210), 3,
      sym_value_string_text,
      sym_value_string_escaped_char,
      aux_sym_value_string_content_repeat1,
    STATE(587), 4,
      sym_value_string,
      sym_boolean,
      sym_null,
      sym_float,
  [5107] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(59), 1,
      anon_sym_null,
    ACTIONS(61), 1,
      aux_sym_digit_token1,
    ACTIONS(719), 1,
      anon_sym_DQUOTE,
    ACTIONS(745), 1,
      sym_key_string_text,
    ACTIONS(747), 1,
      anon_sym_BSLASH2,
    STATE(426), 1,
      sym_integer,
    STATE(501), 1,
      sym_variable_value,
    ACTIONS(57), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(234), 2,
      sym_digit,
      aux_sym_integer_repeat1,
    STATE(248), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(171), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
    STATE(500), 5,
      sym_quoted_string,
      sym_key_string,
      sym_boolean,
      sym_null,
      sym_float,
  [5159] = 6,
    ACTIONS(754), 1,
      sym_comment,
    STATE(98), 1,
      sym_request,
    STATE(133), 1,
      sym_method,
    ACTIONS(749), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(111), 2,
      sym_entry,
      aux_sym_hurl_file_repeat1,
    ACTIONS(751), 16,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
  [5195] = 6,
    ACTIONS(7), 1,
      anon_sym_LF,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(756), 1,
      ts_builtin_sym_end,
    STATE(11), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(127), 1,
      sym__comment_or_new_line,
    ACTIONS(758), 16,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
  [5229] = 13,
    ACTIONS(33), 1,
      anon_sym_LT,
    ACTIONS(760), 1,
      anon_sym_LT_QMARK,
    ACTIONS(762), 1,
      anon_sym_LT_SLASH,
    ACTIONS(764), 1,
      anon_sym_BSLASH,
    ACTIONS(766), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(768), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(770), 1,
      sym_comment,
    STATE(114), 1,
      sym_xml_open_tag,
    STATE(229), 1,
      aux_sym_value_string_text_repeat1,
    STATE(552), 1,
      sym_xml_close_tag,
    STATE(138), 3,
      sym_value_string_content,
      sym_template,
      aux_sym_value_string_repeat1,
    STATE(159), 3,
      sym_value_string_text,
      sym_value_string_escaped_char,
      aux_sym_value_string_content_repeat1,
    STATE(118), 4,
      sym_xml_prolog_tag,
      sym_xml_tag,
      sym_value_string,
      aux_sym_xml_tag_repeat1,
  [5276] = 13,
    ACTIONS(33), 1,
      anon_sym_LT,
    ACTIONS(760), 1,
      anon_sym_LT_QMARK,
    ACTIONS(764), 1,
      anon_sym_BSLASH,
    ACTIONS(766), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(768), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(770), 1,
      sym_comment,
    ACTIONS(772), 1,
      anon_sym_LT_SLASH,
    STATE(114), 1,
      sym_xml_open_tag,
    STATE(229), 1,
      aux_sym_value_string_text_repeat1,
    STATE(265), 1,
      sym_xml_close_tag,
    STATE(138), 3,
      sym_value_string_content,
      sym_template,
      aux_sym_value_string_repeat1,
    STATE(159), 3,
      sym_value_string_text,
      sym_value_string_escaped_char,
      aux_sym_value_string_content_repeat1,
    STATE(122), 4,
      sym_xml_prolog_tag,
      sym_xml_tag,
      sym_value_string,
      aux_sym_xml_tag_repeat1,
  [5323] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(774), 1,
      anon_sym_DQUOTE,
    ACTIONS(776), 1,
      anon_sym_LBRACE,
    ACTIONS(778), 1,
      anon_sym_LBRACK,
    ACTIONS(780), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(784), 1,
      anon_sym_null,
    ACTIONS(786), 1,
      aux_sym_digit_token1,
    STATE(182), 1,
      sym_integer,
    STATE(456), 1,
      sym_json_value,
    ACTIONS(782), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(166), 2,
      sym_digit,
      aux_sym_integer_repeat1,
    STATE(435), 7,
      sym_json_object,
      sym_json_array,
      sym_json_string,
      sym_json_number,
      sym_template,
      sym_boolean,
      sym_null,
  [5368] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(774), 1,
      anon_sym_DQUOTE,
    ACTIONS(776), 1,
      anon_sym_LBRACE,
    ACTIONS(778), 1,
      anon_sym_LBRACK,
    ACTIONS(780), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(784), 1,
      anon_sym_null,
    ACTIONS(786), 1,
      aux_sym_digit_token1,
    STATE(182), 1,
      sym_integer,
    STATE(385), 1,
      sym_json_value,
    ACTIONS(782), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(166), 2,
      sym_digit,
      aux_sym_integer_repeat1,
    STATE(435), 7,
      sym_json_object,
      sym_json_array,
      sym_json_string,
      sym_json_number,
      sym_template,
      sym_boolean,
      sym_null,
  [5413] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(774), 1,
      anon_sym_DQUOTE,
    ACTIONS(776), 1,
      anon_sym_LBRACE,
    ACTIONS(778), 1,
      anon_sym_LBRACK,
    ACTIONS(780), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(784), 1,
      anon_sym_null,
    ACTIONS(786), 1,
      aux_sym_digit_token1,
    STATE(182), 1,
      sym_integer,
    STATE(455), 1,
      sym_json_value,
    ACTIONS(782), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(166), 2,
      sym_digit,
      aux_sym_integer_repeat1,
    STATE(435), 7,
      sym_json_object,
      sym_json_array,
      sym_json_string,
      sym_json_number,
      sym_template,
      sym_boolean,
      sym_null,
  [5458] = 13,
    ACTIONS(33), 1,
      anon_sym_LT,
    ACTIONS(760), 1,
      anon_sym_LT_QMARK,
    ACTIONS(762), 1,
      anon_sym_LT_SLASH,
    ACTIONS(764), 1,
      anon_sym_BSLASH,
    ACTIONS(766), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(768), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(770), 1,
      sym_comment,
    STATE(114), 1,
      sym_xml_open_tag,
    STATE(229), 1,
      aux_sym_value_string_text_repeat1,
    STATE(589), 1,
      sym_xml_close_tag,
    STATE(138), 3,
      sym_value_string_content,
      sym_template,
      aux_sym_value_string_repeat1,
    STATE(159), 3,
      sym_value_string_text,
      sym_value_string_escaped_char,
      aux_sym_value_string_content_repeat1,
    STATE(123), 4,
      sym_xml_prolog_tag,
      sym_xml_tag,
      sym_value_string,
      aux_sym_xml_tag_repeat1,
  [5505] = 13,
    ACTIONS(788), 1,
      anon_sym_LF,
    ACTIONS(790), 1,
      anon_sym_regex,
    ACTIONS(792), 1,
      anon_sym_count,
    ACTIONS(794), 1,
      anon_sym_urlEncode,
    ACTIONS(796), 1,
      anon_sym_urlDecode,
    ACTIONS(798), 1,
      anon_sym_htmlEscape,
    ACTIONS(800), 1,
      anon_sym_htmlUnescape,
    ACTIONS(802), 1,
      anon_sym_toInt,
    ACTIONS(804), 1,
      sym_comment,
    STATE(67), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(68), 1,
      sym__comment_or_new_line,
    STATE(121), 2,
      sym_filter,
      aux_sym_capture_repeat1,
    STATE(213), 7,
      sym_regex_filter,
      sym_count_filter,
      sym_url_encode_filter,
      sym_url_decode_filter,
      sym_html_encode_filter,
      sym_html_decode_filter,
      sym_to_int_filter,
  [5552] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(774), 1,
      anon_sym_DQUOTE,
    ACTIONS(776), 1,
      anon_sym_LBRACE,
    ACTIONS(778), 1,
      anon_sym_LBRACK,
    ACTIONS(780), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(784), 1,
      anon_sym_null,
    ACTIONS(786), 1,
      aux_sym_digit_token1,
    STATE(182), 1,
      sym_integer,
    STATE(388), 1,
      sym_json_value,
    ACTIONS(782), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(166), 2,
      sym_digit,
      aux_sym_integer_repeat1,
    STATE(435), 7,
      sym_json_object,
      sym_json_array,
      sym_json_string,
      sym_json_number,
      sym_template,
      sym_boolean,
      sym_null,
  [5597] = 13,
    ACTIONS(788), 1,
      anon_sym_LF,
    ACTIONS(790), 1,
      anon_sym_regex,
    ACTIONS(792), 1,
      anon_sym_count,
    ACTIONS(794), 1,
      anon_sym_urlEncode,
    ACTIONS(796), 1,
      anon_sym_urlDecode,
    ACTIONS(798), 1,
      anon_sym_htmlEscape,
    ACTIONS(800), 1,
      anon_sym_htmlUnescape,
    ACTIONS(802), 1,
      anon_sym_toInt,
    ACTIONS(804), 1,
      sym_comment,
    STATE(67), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(69), 1,
      sym__comment_or_new_line,
    STATE(131), 2,
      sym_filter,
      aux_sym_capture_repeat1,
    STATE(213), 7,
      sym_regex_filter,
      sym_count_filter,
      sym_url_encode_filter,
      sym_url_decode_filter,
      sym_html_encode_filter,
      sym_html_decode_filter,
      sym_to_int_filter,
  [5644] = 13,
    ACTIONS(33), 1,
      anon_sym_LT,
    ACTIONS(760), 1,
      anon_sym_LT_QMARK,
    ACTIONS(764), 1,
      anon_sym_BSLASH,
    ACTIONS(766), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(768), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(770), 1,
      sym_comment,
    ACTIONS(772), 1,
      anon_sym_LT_SLASH,
    STATE(114), 1,
      sym_xml_open_tag,
    STATE(229), 1,
      aux_sym_value_string_text_repeat1,
    STATE(257), 1,
      sym_xml_close_tag,
    STATE(138), 3,
      sym_value_string_content,
      sym_template,
      aux_sym_value_string_repeat1,
    STATE(159), 3,
      sym_value_string_text,
      sym_value_string_escaped_char,
      aux_sym_value_string_content_repeat1,
    STATE(123), 4,
      sym_xml_prolog_tag,
      sym_xml_tag,
      sym_value_string,
      aux_sym_xml_tag_repeat1,
  [5691] = 12,
    ACTIONS(770), 1,
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
    STATE(114), 1,
      sym_xml_open_tag,
    STATE(229), 1,
      aux_sym_value_string_text_repeat1,
    STATE(138), 3,
      sym_value_string_content,
      sym_template,
      aux_sym_value_string_repeat1,
    STATE(159), 3,
      sym_value_string_text,
      sym_value_string_escaped_char,
      aux_sym_value_string_content_repeat1,
    STATE(123), 4,
      sym_xml_prolog_tag,
      sym_xml_tag,
      sym_value_string,
      aux_sym_xml_tag_repeat1,
  [5735] = 2,
    ACTIONS(823), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(825), 17,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
  [5759] = 2,
    ACTIONS(756), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(758), 17,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
  [5783] = 2,
    ACTIONS(256), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(258), 17,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
  [5807] = 2,
    ACTIONS(827), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(829), 17,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
  [5831] = 2,
    ACTIONS(77), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(79), 17,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
  [5855] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(260), 1,
      anon_sym_regex,
    ACTIONS(298), 1,
      anon_sym_count,
    ACTIONS(300), 1,
      anon_sym_urlEncode,
    ACTIONS(302), 1,
      anon_sym_urlDecode,
    ACTIONS(304), 1,
      anon_sym_htmlEscape,
    ACTIONS(306), 1,
      anon_sym_htmlUnescape,
    ACTIONS(308), 1,
      anon_sym_toInt,
    ACTIONS(831), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(64), 2,
      sym_filter,
      aux_sym_capture_repeat1,
    STATE(77), 7,
      sym_regex_filter,
      sym_count_filter,
      sym_url_encode_filter,
      sym_url_decode_filter,
      sym_html_encode_filter,
      sym_html_decode_filter,
      sym_to_int_filter,
  [5896] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(260), 1,
      anon_sym_regex,
    ACTIONS(298), 1,
      anon_sym_count,
    ACTIONS(300), 1,
      anon_sym_urlEncode,
    ACTIONS(302), 1,
      anon_sym_urlDecode,
    ACTIONS(304), 1,
      anon_sym_htmlEscape,
    ACTIONS(306), 1,
      anon_sym_htmlUnescape,
    ACTIONS(308), 1,
      anon_sym_toInt,
    ACTIONS(833), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(129), 2,
      sym_filter,
      aux_sym_capture_repeat1,
    STATE(77), 7,
      sym_regex_filter,
      sym_count_filter,
      sym_url_encode_filter,
      sym_url_decode_filter,
      sym_html_encode_filter,
      sym_html_decode_filter,
      sym_to_int_filter,
  [5937] = 11,
    ACTIONS(521), 1,
      sym_comment,
    ACTIONS(523), 1,
      anon_sym_LF,
    ACTIONS(835), 1,
      anon_sym_regex,
    ACTIONS(838), 1,
      anon_sym_count,
    ACTIONS(841), 1,
      anon_sym_urlEncode,
    ACTIONS(844), 1,
      anon_sym_urlDecode,
    ACTIONS(847), 1,
      anon_sym_htmlEscape,
    ACTIONS(850), 1,
      anon_sym_htmlUnescape,
    ACTIONS(853), 1,
      anon_sym_toInt,
    STATE(131), 2,
      sym_filter,
      aux_sym_capture_repeat1,
    STATE(213), 7,
      sym_regex_filter,
      sym_count_filter,
      sym_url_encode_filter,
      sym_url_decode_filter,
      sym_html_encode_filter,
      sym_html_decode_filter,
      sym_to_int_filter,
  [5978] = 13,
    ACTIONS(15), 1,
      anon_sym_LF,
    ACTIONS(45), 1,
      anon_sym_BSLASH2,
    ACTIONS(63), 1,
      sym_comment,
    ACTIONS(370), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(856), 1,
      sym_key_string_text,
    STATE(39), 1,
      sym__comment_or_new_line,
    STATE(55), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(289), 1,
      aux_sym_multipart_form_data_section_repeat1,
    STATE(307), 1,
      sym_multipart_form_data_param,
    STATE(442), 1,
      sym_key_string,
    STATE(235), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(585), 2,
      sym_key_value,
      sym_file_param,
    STATE(155), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
  [6022] = 10,
    ACTIONS(739), 1,
      anon_sym_BSLASH,
    ACTIONS(741), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(743), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(55), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(288), 1,
      aux_sym_value_string_text_repeat1,
    STATE(344), 1,
      sym_value_string,
    ACTIONS(63), 2,
      anon_sym_LF,
      sym_comment,
    STATE(3), 2,
      sym__comment_or_new_line,
      aux_sym_hurl_file_repeat2,
    STATE(146), 3,
      sym_value_string_content,
      sym_template,
      aux_sym_value_string_repeat1,
    STATE(210), 3,
      sym_value_string_text,
      sym_value_string_escaped_char,
      aux_sym_value_string_content_repeat1,
  [6059] = 12,
    ACTIONS(15), 1,
      anon_sym_LF,
    ACTIONS(45), 1,
      anon_sym_BSLASH2,
    ACTIONS(63), 1,
      sym_comment,
    ACTIONS(370), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(856), 1,
      sym_key_string_text,
    STATE(41), 1,
      sym__comment_or_new_line,
    STATE(55), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(299), 1,
      sym_key_value,
    STATE(300), 1,
      aux_sym_query_string_params_section_repeat1,
    STATE(520), 1,
      sym_key_string,
    STATE(235), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(155), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
  [6099] = 12,
    ACTIONS(15), 1,
      anon_sym_LF,
    ACTIONS(45), 1,
      anon_sym_BSLASH2,
    ACTIONS(63), 1,
      sym_comment,
    ACTIONS(370), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(856), 1,
      sym_key_string_text,
    STATE(42), 1,
      sym__comment_or_new_line,
    STATE(55), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(301), 1,
      sym_key_value,
    STATE(302), 1,
      aux_sym_query_string_params_section_repeat1,
    STATE(520), 1,
      sym_key_string,
    STATE(235), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(155), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
  [6139] = 12,
    ACTIONS(15), 1,
      anon_sym_LF,
    ACTIONS(45), 1,
      anon_sym_BSLASH2,
    ACTIONS(63), 1,
      sym_comment,
    ACTIONS(370), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(856), 1,
      sym_key_string_text,
    STATE(46), 1,
      sym__comment_or_new_line,
    STATE(55), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(317), 1,
      sym_key_value,
    STATE(319), 1,
      aux_sym_query_string_params_section_repeat1,
    STATE(520), 1,
      sym_key_string,
    STATE(235), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(155), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
  [6179] = 8,
    ACTIONS(770), 1,
      sym_comment,
    ACTIONS(860), 1,
      anon_sym_BSLASH,
    ACTIONS(863), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(866), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(229), 1,
      aux_sym_value_string_text_repeat1,
    ACTIONS(858), 3,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
    STATE(137), 3,
      sym_value_string_content,
      sym_template,
      aux_sym_value_string_repeat1,
    STATE(159), 3,
      sym_value_string_text,
      sym_value_string_escaped_char,
      aux_sym_value_string_content_repeat1,
  [6210] = 6,
    ACTIONS(770), 1,
      sym_comment,
    ACTIONS(871), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(229), 1,
      aux_sym_value_string_text_repeat1,
    STATE(137), 3,
      sym_value_string_content,
      sym_template,
      aux_sym_value_string_repeat1,
    STATE(159), 3,
      sym_value_string_text,
      sym_value_string_escaped_char,
      aux_sym_value_string_content_repeat1,
    ACTIONS(869), 5,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      anon_sym_BSLASH,
      aux_sym_value_string_text_token1,
  [6237] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      anon_sym_BSLASH2,
    ACTIONS(370), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(856), 1,
      sym_key_string_text,
    STATE(442), 1,
      sym_key_string,
    STATE(563), 1,
      sym_multipart_form_data_param,
    STATE(235), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(585), 2,
      sym_key_value,
      sym_file_param,
    STATE(155), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
  [6269] = 9,
    ACTIONS(873), 1,
      anon_sym_BSLASH,
    ACTIONS(875), 1,
      sym_filename_text,
    ACTIONS(877), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(11), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(25), 1,
      sym__comment_or_new_line,
    STATE(372), 1,
      sym_filename,
    ACTIONS(11), 2,
      anon_sym_LF,
      sym_comment,
    STATE(242), 2,
      sym_filename_escaped_char,
      aux_sym_filename_content_repeat1,
    STATE(167), 3,
      sym_filename_content,
      sym_template,
      aux_sym_filename_repeat1,
  [6301] = 8,
    ACTIONS(770), 1,
      sym_comment,
    ACTIONS(879), 1,
      anon_sym_LF,
    ACTIONS(881), 1,
      anon_sym_BSLASH,
    ACTIONS(883), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(885), 1,
      aux_sym__multiline_string_text_token1,
    ACTIONS(887), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(142), 3,
      sym_multiline_string_content,
      sym_template,
      aux_sym_multiline_string_repeat1,
    STATE(211), 3,
      sym__multiline_string_text,
      sym_multiline_string_escaped_char,
      aux_sym_multiline_string_content_repeat1,
  [6330] = 8,
    ACTIONS(770), 1,
      sym_comment,
    ACTIONS(881), 1,
      anon_sym_BSLASH,
    ACTIONS(885), 1,
      aux_sym__multiline_string_text_token1,
    ACTIONS(887), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(889), 1,
      anon_sym_LF,
    ACTIONS(891), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(144), 3,
      sym_multiline_string_content,
      sym_template,
      aux_sym_multiline_string_repeat1,
    STATE(211), 3,
      sym__multiline_string_text,
      sym_multiline_string_escaped_char,
      aux_sym_multiline_string_content_repeat1,
  [6359] = 8,
    ACTIONS(770), 1,
      sym_comment,
    ACTIONS(881), 1,
      anon_sym_BSLASH,
    ACTIONS(885), 1,
      aux_sym__multiline_string_text_token1,
    ACTIONS(887), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(893), 1,
      anon_sym_LF,
    ACTIONS(895), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(151), 3,
      sym_multiline_string_content,
      sym_template,
      aux_sym_multiline_string_repeat1,
    STATE(211), 3,
      sym__multiline_string_text,
      sym_multiline_string_escaped_char,
      aux_sym_multiline_string_content_repeat1,
  [6388] = 8,
    ACTIONS(770), 1,
      sym_comment,
    ACTIONS(897), 1,
      anon_sym_LF,
    ACTIONS(900), 1,
      anon_sym_BSLASH,
    ACTIONS(903), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(905), 1,
      aux_sym__multiline_string_text_token1,
    ACTIONS(908), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(144), 3,
      sym_multiline_string_content,
      sym_template,
      aux_sym_multiline_string_repeat1,
    STATE(211), 3,
      sym__multiline_string_text,
      sym_multiline_string_escaped_char,
      aux_sym_multiline_string_content_repeat1,
  [6417] = 7,
    ACTIONS(770), 1,
      sym_comment,
    ACTIONS(911), 1,
      anon_sym_DQUOTE,
    ACTIONS(913), 1,
      aux_sym_quoted_string_text_token1,
    ACTIONS(916), 1,
      anon_sym_BSLASH,
    ACTIONS(919), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(145), 3,
      sym_quoted_string_content,
      sym_template,
      aux_sym_quoted_string_repeat1,
    STATE(212), 4,
      sym_quoted_string_text,
      sym_invalid_quoted_string_escaped_char,
      sym_quoted_string_escaped_char,
      aux_sym_quoted_string_content_repeat1,
  [6444] = 7,
    ACTIONS(739), 1,
      anon_sym_BSLASH,
    ACTIONS(741), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(743), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(288), 1,
      aux_sym_value_string_text_repeat1,
    ACTIONS(869), 2,
      anon_sym_LF,
      sym_comment,
    STATE(152), 3,
      sym_value_string_content,
      sym_template,
      aux_sym_value_string_repeat1,
    STATE(210), 3,
      sym_value_string_text,
      sym_value_string_escaped_char,
      aux_sym_value_string_content_repeat1,
  [6471] = 7,
    ACTIONS(770), 1,
      sym_comment,
    ACTIONS(922), 1,
      anon_sym_DQUOTE,
    ACTIONS(924), 1,
      aux_sym_quoted_string_text_token1,
    ACTIONS(926), 1,
      anon_sym_BSLASH,
    ACTIONS(928), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(145), 3,
      sym_quoted_string_content,
      sym_template,
      aux_sym_quoted_string_repeat1,
    STATE(212), 4,
      sym_quoted_string_text,
      sym_invalid_quoted_string_escaped_char,
      sym_quoted_string_escaped_char,
      aux_sym_quoted_string_content_repeat1,
  [6498] = 7,
    ACTIONS(770), 1,
      sym_comment,
    ACTIONS(924), 1,
      aux_sym_quoted_string_text_token1,
    ACTIONS(926), 1,
      anon_sym_BSLASH,
    ACTIONS(928), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(930), 1,
      anon_sym_DQUOTE,
    STATE(149), 3,
      sym_quoted_string_content,
      sym_template,
      aux_sym_quoted_string_repeat1,
    STATE(212), 4,
      sym_quoted_string_text,
      sym_invalid_quoted_string_escaped_char,
      sym_quoted_string_escaped_char,
      aux_sym_quoted_string_content_repeat1,
  [6525] = 7,
    ACTIONS(770), 1,
      sym_comment,
    ACTIONS(924), 1,
      aux_sym_quoted_string_text_token1,
    ACTIONS(926), 1,
      anon_sym_BSLASH,
    ACTIONS(928), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(932), 1,
      anon_sym_DQUOTE,
    STATE(145), 3,
      sym_quoted_string_content,
      sym_template,
      aux_sym_quoted_string_repeat1,
    STATE(212), 4,
      sym_quoted_string_text,
      sym_invalid_quoted_string_escaped_char,
      sym_quoted_string_escaped_char,
      aux_sym_quoted_string_content_repeat1,
  [6552] = 7,
    ACTIONS(770), 1,
      sym_comment,
    ACTIONS(924), 1,
      aux_sym_quoted_string_text_token1,
    ACTIONS(926), 1,
      anon_sym_BSLASH,
    ACTIONS(928), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(934), 1,
      anon_sym_DQUOTE,
    STATE(147), 3,
      sym_quoted_string_content,
      sym_template,
      aux_sym_quoted_string_repeat1,
    STATE(212), 4,
      sym_quoted_string_text,
      sym_invalid_quoted_string_escaped_char,
      sym_quoted_string_escaped_char,
      aux_sym_quoted_string_content_repeat1,
  [6579] = 8,
    ACTIONS(770), 1,
      sym_comment,
    ACTIONS(879), 1,
      anon_sym_LF,
    ACTIONS(881), 1,
      anon_sym_BSLASH,
    ACTIONS(883), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(885), 1,
      aux_sym__multiline_string_text_token1,
    ACTIONS(887), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(144), 3,
      sym_multiline_string_content,
      sym_template,
      aux_sym_multiline_string_repeat1,
    STATE(211), 3,
      sym__multiline_string_text,
      sym_multiline_string_escaped_char,
      aux_sym_multiline_string_content_repeat1,
  [6608] = 7,
    ACTIONS(936), 1,
      anon_sym_BSLASH,
    ACTIONS(939), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(942), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(288), 1,
      aux_sym_value_string_text_repeat1,
    ACTIONS(858), 2,
      anon_sym_LF,
      sym_comment,
    STATE(152), 3,
      sym_value_string_content,
      sym_template,
      aux_sym_value_string_repeat1,
    STATE(210), 3,
      sym_value_string_text,
      sym_value_string_escaped_char,
      aux_sym_value_string_content_repeat1,
  [6635] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(945), 1,
      anon_sym_COLON,
    ACTIONS(947), 1,
      anon_sym_COLON2,
    ACTIONS(949), 1,
      sym_key_string_text,
    ACTIONS(952), 1,
      anon_sym_BSLASH2,
    ACTIONS(955), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(235), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(153), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
  [6663] = 7,
    ACTIONS(770), 1,
      sym_comment,
    ACTIONS(958), 1,
      anon_sym_BSLASH,
    ACTIONS(961), 1,
      anon_sym_BQUOTE,
    ACTIONS(963), 1,
      aux_sym_oneline_string_text_token1,
    ACTIONS(966), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(154), 3,
      sym_oneline_string_content,
      sym_template,
      aux_sym_oneline_string_repeat1,
    STATE(239), 3,
      sym_oneline_string_text,
      sym_oneline_string_escaped_char,
      aux_sym_oneline_string_content_repeat1,
  [6689] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      anon_sym_BSLASH2,
    ACTIONS(370), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(856), 1,
      sym_key_string_text,
    ACTIONS(969), 1,
      anon_sym_COLON,
    ACTIONS(971), 1,
      anon_sym_COLON2,
    STATE(235), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(153), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
  [6717] = 7,
    ACTIONS(770), 1,
      sym_comment,
    ACTIONS(973), 1,
      anon_sym_BSLASH,
    ACTIONS(975), 1,
      anon_sym_BQUOTE,
    ACTIONS(977), 1,
      aux_sym_oneline_string_text_token1,
    ACTIONS(979), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(158), 3,
      sym_oneline_string_content,
      sym_template,
      aux_sym_oneline_string_repeat1,
    STATE(239), 3,
      sym_oneline_string_text,
      sym_oneline_string_escaped_char,
      aux_sym_oneline_string_content_repeat1,
  [6743] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      anon_sym_BSLASH2,
    ACTIONS(370), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(856), 1,
      sym_key_string_text,
    STATE(430), 1,
      sym_key_value,
    STATE(520), 1,
      sym_key_string,
    STATE(235), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(155), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
  [6771] = 7,
    ACTIONS(770), 1,
      sym_comment,
    ACTIONS(973), 1,
      anon_sym_BSLASH,
    ACTIONS(977), 1,
      aux_sym_oneline_string_text_token1,
    ACTIONS(979), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(981), 1,
      anon_sym_BQUOTE,
    STATE(154), 3,
      sym_oneline_string_content,
      sym_template,
      aux_sym_oneline_string_repeat1,
    STATE(239), 3,
      sym_oneline_string_text,
      sym_oneline_string_escaped_char,
      aux_sym_oneline_string_content_repeat1,
  [6797] = 7,
    ACTIONS(764), 1,
      anon_sym_BSLASH,
    ACTIONS(766), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(770), 1,
      sym_comment,
    ACTIONS(985), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(229), 1,
      aux_sym_value_string_text_repeat1,
    ACTIONS(983), 3,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
    STATE(163), 3,
      sym_value_string_text,
      sym_value_string_escaped_char,
      aux_sym_value_string_content_repeat1,
  [6823] = 8,
    ACTIONS(770), 1,
      sym_comment,
    ACTIONS(987), 1,
      anon_sym_SEMI,
    ACTIONS(989), 1,
      anon_sym_BSLASH,
    ACTIONS(991), 1,
      sym_filename_text,
    ACTIONS(993), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(534), 1,
      sym_filename,
    STATE(263), 2,
      sym_filename_escaped_char,
      aux_sym_filename_content_repeat1,
    STATE(176), 3,
      sym_filename_content,
      sym_template,
      aux_sym_filename_repeat1,
  [6851] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      anon_sym_BSLASH2,
    ACTIONS(370), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(856), 1,
      sym_key_string_text,
    STATE(520), 1,
      sym_key_string,
    STATE(579), 1,
      sym_key_value,
    STATE(235), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(155), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
  [6879] = 8,
    ACTIONS(770), 1,
      sym_comment,
    ACTIONS(989), 1,
      anon_sym_BSLASH,
    ACTIONS(991), 1,
      sym_filename_text,
    ACTIONS(993), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(995), 1,
      anon_sym_SEMI,
    STATE(523), 1,
      sym_filename,
    STATE(263), 2,
      sym_filename_escaped_char,
      aux_sym_filename_content_repeat1,
    STATE(176), 3,
      sym_filename_content,
      sym_template,
      aux_sym_filename_repeat1,
  [6907] = 7,
    ACTIONS(770), 1,
      sym_comment,
    ACTIONS(999), 1,
      anon_sym_BSLASH,
    ACTIONS(1002), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(1005), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(229), 1,
      aux_sym_value_string_text_repeat1,
    ACTIONS(997), 3,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
    STATE(163), 3,
      sym_value_string_text,
      sym_value_string_escaped_char,
      aux_sym_value_string_content_repeat1,
  [6933] = 7,
    ACTIONS(770), 1,
      sym_comment,
    ACTIONS(1007), 1,
      anon_sym_DQUOTE,
    ACTIONS(1009), 1,
      anon_sym_BSLASH,
    ACTIONS(1011), 1,
      aux_sym_json_string_text_token1,
    ACTIONS(1013), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(305), 2,
      sym_json_string_text,
      sym_json_string_escaped_char,
    STATE(172), 3,
      sym_json_string_content,
      sym_template,
      aux_sym_json_string_repeat1,
  [6958] = 4,
    ACTIONS(770), 1,
      sym_comment,
    ACTIONS(1017), 1,
      aux_sym_invalid_quoted_string_escaped_char_token1,
    ACTIONS(1019), 1,
      anon_sym_u,
    ACTIONS(1015), 7,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
      anon_sym_b,
      anon_sym_f,
      anon_sym_n,
      anon_sym_r,
      anon_sym_t,
  [6977] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(786), 1,
      aux_sym_digit_token1,
    STATE(169), 2,
      sym_digit,
      aux_sym_integer_repeat1,
    ACTIONS(1021), 6,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DOT,
      anon_sym_e,
      anon_sym_E,
  [6996] = 6,
    ACTIONS(873), 1,
      anon_sym_BSLASH,
    ACTIONS(875), 1,
      sym_filename_text,
    ACTIONS(877), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1023), 2,
      anon_sym_LF,
      sym_comment,
    STATE(242), 2,
      sym_filename_escaped_char,
      aux_sym_filename_content_repeat1,
    STATE(170), 3,
      sym_filename_content,
      sym_template,
      aux_sym_filename_repeat1,
  [7019] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(945), 1,
      anon_sym_COLON2,
    ACTIONS(1025), 1,
      sym_key_string_text,
    ACTIONS(1028), 1,
      anon_sym_BSLASH2,
    ACTIONS(1031), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(267), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(168), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
  [7044] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1036), 1,
      aux_sym_digit_token1,
    STATE(169), 2,
      sym_digit,
      aux_sym_integer_repeat1,
    ACTIONS(1034), 6,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DOT,
      anon_sym_e,
      anon_sym_E,
  [7063] = 6,
    ACTIONS(1041), 1,
      anon_sym_BSLASH,
    ACTIONS(1044), 1,
      sym_filename_text,
    ACTIONS(1047), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1039), 2,
      anon_sym_LF,
      sym_comment,
    STATE(242), 2,
      sym_filename_escaped_char,
      aux_sym_filename_content_repeat1,
    STATE(170), 3,
      sym_filename_content,
      sym_template,
      aux_sym_filename_repeat1,
  [7086] = 7,
    ACTIONS(55), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(747), 1,
      anon_sym_BSLASH2,
    ACTIONS(969), 1,
      anon_sym_LF,
    ACTIONS(971), 1,
      sym_comment,
    ACTIONS(1050), 1,
      sym_key_string_text,
    STATE(248), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(173), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
  [7111] = 7,
    ACTIONS(770), 1,
      sym_comment,
    ACTIONS(1009), 1,
      anon_sym_BSLASH,
    ACTIONS(1011), 1,
      aux_sym_json_string_text_token1,
    ACTIONS(1013), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1052), 1,
      anon_sym_DQUOTE,
    STATE(305), 2,
      sym_json_string_text,
      sym_json_string_escaped_char,
    STATE(178), 3,
      sym_json_string_content,
      sym_template,
      aux_sym_json_string_repeat1,
  [7136] = 7,
    ACTIONS(945), 1,
      anon_sym_LF,
    ACTIONS(947), 1,
      sym_comment,
    ACTIONS(1054), 1,
      sym_key_string_text,
    ACTIONS(1057), 1,
      anon_sym_BSLASH2,
    ACTIONS(1060), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(248), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(173), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
  [7161] = 7,
    ACTIONS(770), 1,
      sym_comment,
    ACTIONS(1009), 1,
      anon_sym_BSLASH,
    ACTIONS(1011), 1,
      aux_sym_json_string_text_token1,
    ACTIONS(1013), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1063), 1,
      anon_sym_DQUOTE,
    STATE(305), 2,
      sym_json_string_text,
      sym_json_string_escaped_char,
    STATE(179), 3,
      sym_json_string_content,
      sym_template,
      aux_sym_json_string_repeat1,
  [7186] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(489), 1,
      anon_sym_BSLASH2,
    ACTIONS(491), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(969), 1,
      anon_sym_COLON2,
    ACTIONS(1065), 1,
      sym_key_string_text,
    STATE(267), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(168), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
  [7211] = 7,
    ACTIONS(770), 1,
      sym_comment,
    ACTIONS(989), 1,
      anon_sym_BSLASH,
    ACTIONS(991), 1,
      sym_filename_text,
    ACTIONS(993), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1023), 1,
      anon_sym_SEMI,
    STATE(263), 2,
      sym_filename_escaped_char,
      aux_sym_filename_content_repeat1,
    STATE(180), 3,
      sym_filename_content,
      sym_template,
      aux_sym_filename_repeat1,
  [7236] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1067), 9,
      anon_sym_EQ,
      anon_sym_regex,
      anon_sym_RBRACE_RBRACE,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
  [7251] = 7,
    ACTIONS(770), 1,
      sym_comment,
    ACTIONS(1069), 1,
      anon_sym_DQUOTE,
    ACTIONS(1071), 1,
      anon_sym_BSLASH,
    ACTIONS(1074), 1,
      aux_sym_json_string_text_token1,
    ACTIONS(1077), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(305), 2,
      sym_json_string_text,
      sym_json_string_escaped_char,
    STATE(178), 3,
      sym_json_string_content,
      sym_template,
      aux_sym_json_string_repeat1,
  [7276] = 7,
    ACTIONS(770), 1,
      sym_comment,
    ACTIONS(1009), 1,
      anon_sym_BSLASH,
    ACTIONS(1011), 1,
      aux_sym_json_string_text_token1,
    ACTIONS(1013), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1080), 1,
      anon_sym_DQUOTE,
    STATE(305), 2,
      sym_json_string_text,
      sym_json_string_escaped_char,
    STATE(178), 3,
      sym_json_string_content,
      sym_template,
      aux_sym_json_string_repeat1,
  [7301] = 7,
    ACTIONS(770), 1,
      sym_comment,
    ACTIONS(1039), 1,
      anon_sym_SEMI,
    ACTIONS(1082), 1,
      anon_sym_BSLASH,
    ACTIONS(1085), 1,
      sym_filename_text,
    ACTIONS(1088), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(263), 2,
      sym_filename_escaped_char,
      aux_sym_filename_content_repeat1,
    STATE(180), 3,
      sym_filename_content,
      sym_template,
      aux_sym_filename_repeat1,
  [7326] = 2,
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
  [7340] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1093), 1,
      anon_sym_DOT,
    STATE(255), 1,
      sym_fraction,
    STATE(382), 1,
      sym_exponent,
    ACTIONS(1095), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(1091), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [7362] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(786), 1,
      aux_sym_digit_token1,
    STATE(169), 2,
      sym_digit,
      aux_sym_integer_repeat1,
    ACTIONS(1097), 5,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_e,
      anon_sym_E,
  [7380] = 2,
    ACTIONS(659), 1,
      anon_sym_LF,
    ACTIONS(661), 8,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
      sym_comment,
  [7394] = 2,
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
  [7408] = 2,
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
  [7422] = 2,
    ACTIONS(671), 1,
      anon_sym_LF,
    ACTIONS(673), 8,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
      sym_comment,
  [7436] = 2,
    ACTIONS(675), 1,
      anon_sym_LF,
    ACTIONS(677), 8,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
      sym_comment,
  [7450] = 5,
    ACTIONS(770), 1,
      sym_comment,
    ACTIONS(1104), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(189), 1,
      aux_sym__multiline_string_text_repeat1,
    ACTIONS(1101), 2,
      anon_sym_BQUOTE,
      anon_sym_LBRACE,
    ACTIONS(1099), 4,
      anon_sym_LF,
      anon_sym_BSLASH,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      aux_sym__multiline_string_text_token1,
  [7470] = 2,
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
  [7484] = 2,
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
  [7498] = 2,
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
  [7512] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1108), 1,
      anon_sym_u,
    ACTIONS(1110), 1,
      anon_sym_POUND,
    ACTIONS(1106), 6,
      anon_sym_BSLASH,
      anon_sym_b,
      anon_sym_f,
      anon_sym_n,
      anon_sym_r,
      anon_sym_t,
  [7530] = 2,
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
  [7544] = 2,
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
  [7558] = 2,
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
  [7572] = 2,
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
  [7586] = 5,
    ACTIONS(770), 1,
      sym_comment,
    ACTIONS(1116), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(189), 1,
      aux_sym__multiline_string_text_repeat1,
    ACTIONS(1114), 2,
      anon_sym_BQUOTE,
      anon_sym_LBRACE,
    ACTIONS(1112), 4,
      anon_sym_LF,
      anon_sym_BSLASH,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      aux_sym__multiline_string_text_token1,
  [7606] = 7,
    ACTIONS(770), 1,
      sym_comment,
    ACTIONS(1118), 1,
      anon_sym_LF,
    ACTIONS(1121), 1,
      anon_sym_BSLASH,
    ACTIONS(1124), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(1126), 1,
      aux_sym__multiline_string_text_token1,
    ACTIONS(1129), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(199), 3,
      sym__multiline_string_text,
      sym_multiline_string_escaped_char,
      aux_sym_multiline_string_content_repeat1,
  [7630] = 2,
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
  [7644] = 2,
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
  [7658] = 2,
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
  [7672] = 2,
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
  [7686] = 2,
    ACTIONS(663), 1,
      anon_sym_LF,
    ACTIONS(665), 8,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
      sym_comment,
  [7700] = 2,
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
  [7714] = 2,
    ACTIONS(667), 1,
      anon_sym_LF,
    ACTIONS(669), 8,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
      sym_comment,
  [7728] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1133), 1,
      anon_sym_u,
    ACTIONS(1131), 7,
      anon_sym_BSLASH,
      anon_sym_b,
      anon_sym_f,
      anon_sym_n,
      anon_sym_r,
      anon_sym_t,
      anon_sym_BQUOTE,
  [7744] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1137), 1,
      anon_sym_u,
    ACTIONS(1135), 7,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
      anon_sym_b,
      anon_sym_f,
      anon_sym_n,
      anon_sym_r,
      anon_sym_t,
  [7760] = 5,
    ACTIONS(770), 1,
      sym_comment,
    ACTIONS(1143), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(198), 1,
      aux_sym__multiline_string_text_repeat1,
    ACTIONS(1141), 2,
      anon_sym_BQUOTE,
      anon_sym_LBRACE,
    ACTIONS(1139), 4,
      anon_sym_LF,
      anon_sym_BSLASH,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      aux_sym__multiline_string_text_token1,
  [7780] = 6,
    ACTIONS(739), 1,
      anon_sym_BSLASH,
    ACTIONS(741), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(985), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(288), 1,
      aux_sym_value_string_text_repeat1,
    ACTIONS(983), 2,
      anon_sym_LF,
      sym_comment,
    STATE(216), 3,
      sym_value_string_text,
      sym_value_string_escaped_char,
      aux_sym_value_string_content_repeat1,
  [7802] = 7,
    ACTIONS(770), 1,
      sym_comment,
    ACTIONS(881), 1,
      anon_sym_BSLASH,
    ACTIONS(885), 1,
      aux_sym__multiline_string_text_token1,
    ACTIONS(1145), 1,
      anon_sym_LF,
    ACTIONS(1147), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(1149), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(199), 3,
      sym__multiline_string_text,
      sym_multiline_string_escaped_char,
      aux_sym_multiline_string_content_repeat1,
  [7826] = 5,
    ACTIONS(770), 1,
      sym_comment,
    ACTIONS(924), 1,
      aux_sym_quoted_string_text_token1,
    ACTIONS(926), 1,
      anon_sym_BSLASH,
    ACTIONS(1151), 2,
      anon_sym_DQUOTE,
      anon_sym_LBRACE_LBRACE,
    STATE(220), 4,
      sym_quoted_string_text,
      sym_invalid_quoted_string_escaped_char,
      sym_quoted_string_escaped_char,
      aux_sym_quoted_string_content_repeat1,
  [7846] = 2,
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
  [7860] = 2,
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
  [7874] = 2,
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
  [7888] = 6,
    ACTIONS(1005), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1153), 1,
      anon_sym_BSLASH,
    ACTIONS(1156), 1,
      aux_sym_value_string_text_token1,
    STATE(288), 1,
      aux_sym_value_string_text_repeat1,
    ACTIONS(997), 2,
      anon_sym_LF,
      sym_comment,
    STATE(216), 3,
      sym_value_string_text,
      sym_value_string_escaped_char,
      aux_sym_value_string_content_repeat1,
  [7910] = 2,
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
  [7924] = 2,
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
  [7938] = 2,
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
  [7952] = 5,
    ACTIONS(770), 1,
      sym_comment,
    ACTIONS(1161), 1,
      aux_sym_quoted_string_text_token1,
    ACTIONS(1164), 1,
      anon_sym_BSLASH,
    ACTIONS(1159), 2,
      anon_sym_DQUOTE,
      anon_sym_LBRACE_LBRACE,
    STATE(220), 4,
      sym_quoted_string_text,
      sym_invalid_quoted_string_escaped_char,
      sym_quoted_string_escaped_char,
      aux_sym_quoted_string_content_repeat1,
  [7972] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1169), 1,
      anon_sym_u,
    ACTIONS(1171), 1,
      anon_sym_POUND,
    ACTIONS(1167), 6,
      anon_sym_BSLASH,
      anon_sym_b,
      anon_sym_f,
      anon_sym_n,
      anon_sym_r,
      anon_sym_t,
  [7990] = 6,
    ACTIONS(770), 1,
      sym_comment,
    ACTIONS(1173), 1,
      anon_sym_BSLASH,
    ACTIONS(1175), 1,
      anon_sym_SLASH,
    ACTIONS(1177), 1,
      aux_sym_regex_text_token1,
    STATE(557), 1,
      sym_regex_content,
    STATE(245), 3,
      sym_regex_text,
      sym_regex_escaped_char,
      aux_sym_regex_content_repeat1,
  [8011] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(719), 1,
      anon_sym_DQUOTE,
    ACTIONS(727), 1,
      aux_sym_digit_token1,
    STATE(408), 1,
      sym_integer,
    STATE(234), 2,
      sym_digit,
      aux_sym_integer_repeat1,
    STATE(511), 2,
      sym_quoted_string,
      sym_float,
  [8032] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(774), 1,
      anon_sym_DQUOTE,
    ACTIONS(1179), 1,
      anon_sym_RBRACE,
    ACTIONS(1181), 1,
      anon_sym_COMMA,
    STATE(378), 1,
      sym_json_key_value,
    STATE(379), 1,
      aux_sym_json_object_repeat1,
    STATE(550), 1,
      sym_json_key_string,
    STATE(551), 1,
      sym_json_string,
  [8057] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1183), 7,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      aux_sym_digit_token1,
      anon_sym_DOT,
      anon_sym_e,
      anon_sym_E,
  [8070] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1187), 1,
      anon_sym_COLON2,
    ACTIONS(1189), 1,
      sym_key_string_text,
    ACTIONS(1192), 1,
      anon_sym_BSLASH2,
    ACTIONS(1185), 2,
      anon_sym_COLON,
      anon_sym_LBRACE_LBRACE,
    STATE(226), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
  [8091] = 4,
    ACTIONS(1034), 1,
      anon_sym_LF,
    ACTIONS(1195), 1,
      aux_sym_digit_token1,
    STATE(227), 2,
      sym_digit,
      aux_sym_integer_repeat1,
    ACTIONS(1198), 4,
      anon_sym_DOT,
      anon_sym_e,
      anon_sym_E,
      sym_comment,
  [8108] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(719), 1,
      anon_sym_DQUOTE,
    ACTIONS(727), 1,
      aux_sym_digit_token1,
    STATE(406), 1,
      sym_integer,
    STATE(234), 2,
      sym_digit,
      aux_sym_integer_repeat1,
    STATE(512), 2,
      sym_quoted_string,
      sym_float,
  [8129] = 5,
    ACTIONS(770), 1,
      sym_comment,
    ACTIONS(1202), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(1204), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(230), 1,
      aux_sym_value_string_text_repeat1,
    ACTIONS(1200), 4,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      anon_sym_BSLASH,
  [8148] = 5,
    ACTIONS(770), 1,
      sym_comment,
    ACTIONS(1208), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(1211), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(230), 1,
      aux_sym_value_string_text_repeat1,
    ACTIONS(1206), 4,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      anon_sym_BSLASH,
  [8167] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(719), 1,
      anon_sym_DQUOTE,
    ACTIONS(727), 1,
      aux_sym_digit_token1,
    STATE(410), 1,
      sym_integer,
    STATE(234), 2,
      sym_digit,
      aux_sym_integer_repeat1,
    STATE(510), 2,
      sym_quoted_string,
      sym_float,
  [8188] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(719), 1,
      anon_sym_DQUOTE,
    ACTIONS(727), 1,
      aux_sym_digit_token1,
    STATE(412), 1,
      sym_integer,
    STATE(234), 2,
      sym_digit,
      aux_sym_integer_repeat1,
    STATE(509), 2,
      sym_quoted_string,
      sym_float,
  [8209] = 6,
    ACTIONS(770), 1,
      sym_comment,
    ACTIONS(1173), 1,
      anon_sym_BSLASH,
    ACTIONS(1177), 1,
      aux_sym_regex_text_token1,
    ACTIONS(1213), 1,
      anon_sym_SLASH,
    STATE(583), 1,
      sym_regex_content,
    STATE(245), 3,
      sym_regex_text,
      sym_regex_escaped_char,
      aux_sym_regex_content_repeat1,
  [8230] = 4,
    ACTIONS(61), 1,
      aux_sym_digit_token1,
    ACTIONS(1021), 1,
      anon_sym_LF,
    STATE(227), 2,
      sym_digit,
      aux_sym_integer_repeat1,
    ACTIONS(1215), 4,
      anon_sym_DOT,
      anon_sym_e,
      anon_sym_E,
      sym_comment,
  [8247] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1219), 1,
      anon_sym_COLON2,
    STATE(226), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    ACTIONS(1217), 4,
      anon_sym_COLON,
      sym_key_string_text,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
  [8264] = 6,
    ACTIONS(770), 1,
      sym_comment,
    ACTIONS(1221), 1,
      anon_sym_BSLASH,
    ACTIONS(1224), 1,
      anon_sym_BQUOTE,
    ACTIONS(1226), 1,
      aux_sym_oneline_string_text_token1,
    ACTIONS(1229), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(236), 3,
      sym_oneline_string_text,
      sym_oneline_string_escaped_char,
      aux_sym_oneline_string_content_repeat1,
  [8285] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(774), 1,
      anon_sym_DQUOTE,
    ACTIONS(1181), 1,
      anon_sym_COMMA,
    ACTIONS(1231), 1,
      anon_sym_RBRACE,
    STATE(383), 1,
      sym_json_key_value,
    STATE(387), 1,
      aux_sym_json_object_repeat1,
    STATE(550), 1,
      sym_json_key_string,
    STATE(551), 1,
      sym_json_string,
  [8310] = 4,
    ACTIONS(770), 1,
      sym_comment,
    ACTIONS(1233), 1,
      anon_sym_LF,
    STATE(548), 1,
      sym_multiline_string_type,
    ACTIONS(1235), 5,
      anon_sym_base64,
      anon_sym_hex,
      anon_sym_json,
      anon_sym_xml,
      anon_sym_graphql,
  [8327] = 4,
    ACTIONS(770), 1,
      sym_comment,
    ACTIONS(1239), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1237), 3,
      anon_sym_BSLASH,
      anon_sym_BQUOTE,
      aux_sym_oneline_string_text_token1,
    STATE(236), 3,
      sym_oneline_string_text,
      sym_oneline_string_escaped_char,
      aux_sym_oneline_string_content_repeat1,
  [8344] = 3,
    ACTIONS(770), 1,
      sym_comment,
    ACTIONS(1243), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1241), 5,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      anon_sym_BSLASH,
      aux_sym_value_string_text_token1,
  [8358] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(715), 1,
      anon_sym_base64_COMMA,
    ACTIONS(717), 1,
      anon_sym_hex_COMMA,
    ACTIONS(719), 1,
      anon_sym_DQUOTE,
    STATE(507), 3,
      sym_oneline_base64,
      sym_oneline_hex,
      sym_quoted_string,
  [8376] = 2,
    STATE(252), 2,
      sym_filename_escaped_char,
      aux_sym_filename_content_repeat1,
    ACTIONS(1245), 5,
      anon_sym_LF,
      anon_sym_BSLASH,
      sym_filename_text,
      anon_sym_LBRACE_LBRACE,
      sym_comment,
  [8388] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1249), 1,
      anon_sym_u,
    ACTIONS(1251), 1,
      anon_sym_POUND,
    ACTIONS(1247), 4,
      anon_sym_BSLASH,
      anon_sym_b,
      anon_sym_f,
      anon_sym_BQUOTE,
  [8404] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_LT,
    ACTIONS(1253), 1,
      anon_sym_LT_QMARK,
    STATE(113), 1,
      sym_xml_open_tag,
    STATE(561), 1,
      sym_xml_tag,
    STATE(321), 2,
      sym_xml_prolog_tag,
      aux_sym_xml_repeat1,
  [8424] = 5,
    ACTIONS(770), 1,
      sym_comment,
    ACTIONS(1173), 1,
      anon_sym_BSLASH,
    ACTIONS(1177), 1,
      aux_sym_regex_text_token1,
    ACTIONS(1255), 1,
      anon_sym_SLASH,
    STATE(250), 3,
      sym_regex_text,
      sym_regex_escaped_char,
      aux_sym_regex_content_repeat1,
  [8442] = 3,
    ACTIONS(770), 1,
      sym_comment,
    ACTIONS(1259), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1257), 5,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      anon_sym_BSLASH,
      aux_sym_value_string_text_token1,
  [8456] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(786), 1,
      aux_sym_digit_token1,
    STATE(169), 2,
      sym_digit,
      aux_sym_integer_repeat1,
    ACTIONS(1261), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [8472] = 3,
    ACTIONS(1219), 1,
      sym_comment,
    STATE(253), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    ACTIONS(1217), 4,
      anon_sym_LF,
      sym_key_string_text,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
  [8486] = 3,
    ACTIONS(770), 1,
      sym_comment,
    ACTIONS(1265), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1263), 5,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      anon_sym_BSLASH,
      aux_sym_value_string_text_token1,
  [8500] = 5,
    ACTIONS(770), 1,
      sym_comment,
    ACTIONS(1267), 1,
      anon_sym_BSLASH,
    ACTIONS(1270), 1,
      anon_sym_SLASH,
    ACTIONS(1272), 1,
      aux_sym_regex_text_token1,
    STATE(250), 3,
      sym_regex_text,
      sym_regex_escaped_char,
      aux_sym_regex_content_repeat1,
  [8518] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(715), 1,
      anon_sym_base64_COMMA,
    ACTIONS(717), 1,
      anon_sym_hex_COMMA,
    ACTIONS(719), 1,
      anon_sym_DQUOTE,
    STATE(508), 3,
      sym_oneline_base64,
      sym_oneline_hex,
      sym_quoted_string,
  [8536] = 4,
    ACTIONS(1277), 1,
      anon_sym_BSLASH,
    ACTIONS(1280), 1,
      sym_filename_text,
    STATE(252), 2,
      sym_filename_escaped_char,
      aux_sym_filename_content_repeat1,
    ACTIONS(1275), 3,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
      sym_comment,
  [8552] = 5,
    ACTIONS(1187), 1,
      sym_comment,
    ACTIONS(1283), 1,
      sym_key_string_text,
    ACTIONS(1286), 1,
      anon_sym_BSLASH2,
    ACTIONS(1185), 2,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    STATE(253), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
  [8570] = 6,
    ACTIONS(1091), 1,
      anon_sym_LF,
    ACTIONS(1289), 1,
      anon_sym_DOT,
    ACTIONS(1293), 1,
      sym_comment,
    STATE(298), 1,
      sym_fraction,
    STATE(553), 1,
      sym_exponent,
    ACTIONS(1291), 2,
      anon_sym_e,
      anon_sym_E,
  [8590] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(365), 1,
      sym_exponent,
    ACTIONS(1095), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(1295), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [8606] = 3,
    ACTIONS(770), 1,
      sym_comment,
    ACTIONS(1299), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1297), 5,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      anon_sym_BSLASH,
      aux_sym_value_string_text_token1,
  [8620] = 3,
    ACTIONS(770), 1,
      sym_comment,
    ACTIONS(1303), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1301), 5,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      anon_sym_BSLASH,
      aux_sym_value_string_text_token1,
  [8634] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1305), 1,
      sym_key_string_text,
    ACTIONS(1308), 1,
      anon_sym_BSLASH2,
    ACTIONS(1185), 2,
      anon_sym_COLON2,
      anon_sym_LBRACE_LBRACE,
    STATE(258), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
  [8652] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(786), 1,
      aux_sym_digit_token1,
    STATE(169), 2,
      sym_digit,
      aux_sym_integer_repeat1,
    ACTIONS(1311), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [8668] = 3,
    ACTIONS(770), 1,
      sym_comment,
    ACTIONS(1315), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1313), 5,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      anon_sym_BSLASH,
      aux_sym_value_string_text_token1,
  [8682] = 3,
    ACTIONS(770), 1,
      sym_comment,
    ACTIONS(1319), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1317), 5,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      anon_sym_BSLASH,
      aux_sym_value_string_text_token1,
  [8696] = 5,
    ACTIONS(770), 1,
      sym_comment,
    ACTIONS(1321), 1,
      anon_sym_BSLASH,
    ACTIONS(1324), 1,
      sym_filename_text,
    ACTIONS(1275), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE_LBRACE,
    STATE(262), 2,
      sym_filename_escaped_char,
      aux_sym_filename_content_repeat1,
  [8714] = 3,
    ACTIONS(770), 1,
      sym_comment,
    STATE(262), 2,
      sym_filename_escaped_char,
      aux_sym_filename_content_repeat1,
    ACTIONS(1245), 4,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      sym_filename_text,
      anon_sym_LBRACE_LBRACE,
  [8728] = 4,
    ACTIONS(61), 1,
      aux_sym_digit_token1,
    ACTIONS(1097), 1,
      anon_sym_LF,
    STATE(227), 2,
      sym_digit,
      aux_sym_integer_repeat1,
    ACTIONS(1327), 3,
      anon_sym_e,
      anon_sym_E,
      sym_comment,
  [8744] = 3,
    ACTIONS(770), 1,
      sym_comment,
    ACTIONS(1331), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1329), 5,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      anon_sym_BSLASH,
      aux_sym_value_string_text_token1,
  [8758] = 3,
    ACTIONS(770), 1,
      sym_comment,
    ACTIONS(1335), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1333), 5,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      anon_sym_BSLASH,
      aux_sym_value_string_text_token1,
  [8772] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(258), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    ACTIONS(1217), 4,
      anon_sym_COLON2,
      sym_key_string_text,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
  [8786] = 2,
    ACTIONS(1183), 1,
      anon_sym_LF,
    ACTIONS(1337), 5,
      aux_sym_digit_token1,
      anon_sym_DOT,
      anon_sym_e,
      anon_sym_E,
      sym_comment,
  [8797] = 5,
    ACTIONS(7), 1,
      anon_sym_LF,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(711), 1,
      ts_builtin_sym_end,
    STATE(11), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(286), 2,
      sym__comment_or_new_line,
      aux_sym_hurl_file_repeat2,
  [8814] = 4,
    ACTIONS(770), 1,
      sym_comment,
    ACTIONS(1341), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(1343), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1339), 3,
      anon_sym_LF,
      anon_sym_BSLASH,
      aux_sym__multiline_string_text_token1,
  [8829] = 3,
    ACTIONS(770), 1,
      sym_comment,
    ACTIONS(1347), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1345), 4,
      anon_sym_LF,
      anon_sym_BSLASH,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      aux_sym__multiline_string_text_token1,
  [8842] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(786), 1,
      aux_sym_digit_token1,
    ACTIONS(1349), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(259), 2,
      sym_digit,
      aux_sym_integer_repeat1,
  [8857] = 4,
    ACTIONS(770), 1,
      sym_comment,
    ACTIONS(883), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(1343), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1339), 3,
      anon_sym_LF,
      anon_sym_BSLASH,
      aux_sym__multiline_string_text_token1,
  [8872] = 3,
    ACTIONS(770), 1,
      sym_comment,
    ACTIONS(1259), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1257), 4,
      anon_sym_LF,
      anon_sym_BSLASH,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      aux_sym__multiline_string_text_token1,
  [8885] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1257), 1,
      anon_sym_COLON2,
    ACTIONS(1259), 4,
      anon_sym_COLON,
      sym_key_string_text,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
  [8898] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1353), 1,
      anon_sym_COLON2,
    ACTIONS(1351), 4,
      anon_sym_COLON,
      sym_key_string_text,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
  [8911] = 3,
    ACTIONS(770), 1,
      sym_comment,
    ACTIONS(1357), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1355), 4,
      anon_sym_LF,
      anon_sym_BSLASH,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      aux_sym__multiline_string_text_token1,
  [8924] = 3,
    ACTIONS(770), 1,
      sym_comment,
    ACTIONS(1243), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1241), 4,
      anon_sym_LF,
      anon_sym_BSLASH,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      aux_sym__multiline_string_text_token1,
  [8937] = 2,
    ACTIONS(1257), 1,
      sym_comment,
    ACTIONS(1259), 5,
      anon_sym_LF,
      anon_sym_COLON,
      sym_key_string_text,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
  [8948] = 4,
    ACTIONS(770), 1,
      sym_comment,
    ACTIONS(891), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(1343), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1339), 3,
      anon_sym_LF,
      anon_sym_BSLASH,
      aux_sym__multiline_string_text_token1,
  [8963] = 4,
    ACTIONS(1359), 1,
      anon_sym_LF,
    ACTIONS(1362), 1,
      sym_comment,
    STATE(281), 1,
      aux_sym__comment_or_new_line_repeat1,
    ACTIONS(97), 3,
      sym_key_string_text,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
  [8978] = 4,
    ACTIONS(1365), 1,
      anon_sym_LF,
    ACTIONS(1367), 1,
      sym_comment,
    STATE(281), 1,
      aux_sym__comment_or_new_line_repeat1,
    ACTIONS(89), 3,
      sym_key_string_text,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
  [8993] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(727), 1,
      aux_sym_digit_token1,
    ACTIONS(1369), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(290), 2,
      sym_digit,
      aux_sym_integer_repeat1,
  [9008] = 3,
    ACTIONS(1371), 1,
      anon_sym_LF,
    ACTIONS(1375), 1,
      sym_comment,
    ACTIONS(1373), 4,
      anon_sym_COLON,
      sym_key_string_text,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
  [9021] = 4,
    ACTIONS(1211), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1377), 1,
      aux_sym_value_string_text_token1,
    STATE(285), 1,
      aux_sym_value_string_text_repeat1,
    ACTIONS(1206), 3,
      anon_sym_LF,
      anon_sym_BSLASH,
      sym_comment,
  [9036] = 5,
    ACTIONS(451), 1,
      ts_builtin_sym_end,
    ACTIONS(1380), 1,
      anon_sym_LF,
    ACTIONS(1383), 1,
      sym_comment,
    STATE(11), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(286), 2,
      sym__comment_or_new_line,
      aux_sym_hurl_file_repeat2,
  [9053] = 5,
    ACTIONS(7), 1,
      anon_sym_LF,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1386), 1,
      ts_builtin_sym_end,
    STATE(11), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(286), 2,
      sym__comment_or_new_line,
      aux_sym_hurl_file_repeat2,
  [9070] = 4,
    ACTIONS(1204), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1388), 1,
      aux_sym_value_string_text_token1,
    STATE(285), 1,
      aux_sym_value_string_text_repeat1,
    ACTIONS(1200), 3,
      anon_sym_LF,
      anon_sym_BSLASH,
      sym_comment,
  [9085] = 5,
    ACTIONS(15), 1,
      anon_sym_LF,
    ACTIONS(63), 1,
      sym_comment,
    STATE(38), 1,
      sym__comment_or_new_line,
    STATE(55), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(325), 1,
      aux_sym_multipart_form_data_section_repeat1,
  [9101] = 4,
    ACTIONS(61), 1,
      aux_sym_digit_token1,
    ACTIONS(1311), 1,
      anon_sym_LF,
    ACTIONS(1390), 1,
      sym_comment,
    STATE(227), 2,
      sym_digit,
      aux_sym_integer_repeat1,
  [9115] = 5,
    ACTIONS(1392), 1,
      anon_sym_LF,
    ACTIONS(1395), 1,
      sym_comment,
    STATE(161), 1,
      sym__comment_or_new_line,
    STATE(282), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(291), 1,
      aux_sym_query_string_params_section_repeat1,
  [9131] = 3,
    ACTIONS(770), 1,
      sym_comment,
    ACTIONS(1243), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1241), 3,
      anon_sym_BSLASH,
      anon_sym_BQUOTE,
      aux_sym_oneline_string_text_token1,
  [9143] = 5,
    ACTIONS(15), 1,
      anon_sym_LF,
    ACTIONS(63), 1,
      sym_comment,
    STATE(43), 1,
      sym__comment_or_new_line,
    STATE(55), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(291), 1,
      aux_sym_query_string_params_section_repeat1,
  [9159] = 4,
    ACTIONS(61), 1,
      aux_sym_digit_token1,
    ACTIONS(1261), 1,
      anon_sym_LF,
    ACTIONS(1398), 1,
      sym_comment,
    STATE(227), 2,
      sym_digit,
      aux_sym_integer_repeat1,
  [9173] = 2,
    ACTIONS(770), 1,
      sym_comment,
    ACTIONS(1257), 4,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      sym_filename_text,
      anon_sym_LBRACE_LBRACE,
  [9183] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(719), 1,
      anon_sym_DQUOTE,
    ACTIONS(1400), 1,
      anon_sym_SLASH,
    STATE(202), 2,
      sym_quoted_string,
      sym_regex,
  [9197] = 2,
    ACTIONS(1353), 1,
      sym_comment,
    ACTIONS(1351), 4,
      anon_sym_LF,
      sym_key_string_text,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
  [9207] = 4,
    ACTIONS(1295), 1,
      anon_sym_LF,
    ACTIONS(1402), 1,
      sym_comment,
    STATE(586), 1,
      sym_exponent,
    ACTIONS(1291), 2,
      anon_sym_e,
      anon_sym_E,
  [9221] = 5,
    ACTIONS(15), 1,
      anon_sym_LF,
    ACTIONS(63), 1,
      sym_comment,
    STATE(48), 1,
      sym__comment_or_new_line,
    STATE(55), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(293), 1,
      aux_sym_query_string_params_section_repeat1,
  [9237] = 5,
    ACTIONS(15), 1,
      anon_sym_LF,
    ACTIONS(63), 1,
      sym_comment,
    STATE(48), 1,
      sym__comment_or_new_line,
    STATE(55), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(291), 1,
      aux_sym_query_string_params_section_repeat1,
  [9253] = 5,
    ACTIONS(15), 1,
      anon_sym_LF,
    ACTIONS(63), 1,
      sym_comment,
    STATE(49), 1,
      sym__comment_or_new_line,
    STATE(55), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(320), 1,
      aux_sym_query_string_params_section_repeat1,
  [9269] = 5,
    ACTIONS(15), 1,
      anon_sym_LF,
    ACTIONS(63), 1,
      sym_comment,
    STATE(49), 1,
      sym__comment_or_new_line,
    STATE(55), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(291), 1,
      aux_sym_query_string_params_section_repeat1,
  [9285] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1404), 1,
      anon_sym_DQUOTE,
    ACTIONS(1406), 1,
      anon_sym_SLASH,
    STATE(87), 2,
      sym_quoted_string,
      sym_regex,
  [9299] = 2,
    ACTIONS(770), 1,
      sym_comment,
    ACTIONS(1408), 4,
      anon_sym_DQUOTE,
      aux_sym_quoted_string_text_token1,
      anon_sym_BSLASH,
      anon_sym_LBRACE_LBRACE,
  [9309] = 3,
    ACTIONS(770), 1,
      sym_comment,
    ACTIONS(1412), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1410), 3,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
      aux_sym_json_string_text_token1,
  [9321] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1414), 1,
      anon_sym_SEMI,
    ACTIONS(1416), 1,
      aux_sym_hexdigit_token1,
    STATE(349), 2,
      sym_hexdigit,
      aux_sym_oneline_hex_repeat1,
  [9335] = 5,
    ACTIONS(15), 1,
      anon_sym_LF,
    ACTIONS(63), 1,
      sym_comment,
    STATE(38), 1,
      sym__comment_or_new_line,
    STATE(55), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(322), 1,
      aux_sym_multipart_form_data_section_repeat1,
  [9351] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(727), 1,
      aux_sym_digit_token1,
    STATE(359), 1,
      sym_integer,
    STATE(234), 2,
      sym_digit,
      aux_sym_integer_repeat1,
  [9365] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(727), 1,
      aux_sym_digit_token1,
    STATE(360), 1,
      sym_integer,
    STATE(234), 2,
      sym_digit,
      aux_sym_integer_repeat1,
  [9379] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(774), 1,
      anon_sym_DQUOTE,
    STATE(461), 1,
      sym_json_key_value,
    STATE(550), 1,
      sym_json_key_string,
    STATE(551), 1,
      sym_json_string,
  [9395] = 2,
    ACTIONS(770), 1,
      sym_comment,
    ACTIONS(1418), 4,
      anon_sym_DQUOTE,
      aux_sym_quoted_string_text_token1,
      anon_sym_BSLASH,
      anon_sym_LBRACE_LBRACE,
  [9405] = 2,
    ACTIONS(770), 1,
      sym_comment,
    ACTIONS(1420), 4,
      anon_sym_DQUOTE,
      aux_sym_quoted_string_text_token1,
      anon_sym_BSLASH,
      anon_sym_LBRACE_LBRACE,
  [9415] = 2,
    ACTIONS(770), 1,
      sym_comment,
    ACTIONS(1422), 4,
      anon_sym_DQUOTE,
      aux_sym_quoted_string_text_token1,
      anon_sym_BSLASH,
      anon_sym_LBRACE_LBRACE,
  [9425] = 3,
    ACTIONS(770), 1,
      sym_comment,
    ACTIONS(1426), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1424), 3,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
      aux_sym_json_string_text_token1,
  [9437] = 2,
    ACTIONS(1299), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1297), 4,
      anon_sym_LF,
      anon_sym_BSLASH,
      aux_sym_value_string_text_token1,
      sym_comment,
  [9447] = 2,
    ACTIONS(1259), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1257), 4,
      anon_sym_LF,
      anon_sym_BSLASH,
      aux_sym_value_string_text_token1,
      sym_comment,
  [9457] = 5,
    ACTIONS(15), 1,
      anon_sym_LF,
    ACTIONS(63), 1,
      sym_comment,
    STATE(45), 1,
      sym__comment_or_new_line,
    STATE(55), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(331), 1,
      aux_sym_query_string_params_section_repeat1,
  [9473] = 3,
    ACTIONS(770), 1,
      sym_comment,
    ACTIONS(1259), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1257), 3,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
      aux_sym_json_string_text_token1,
  [9485] = 5,
    ACTIONS(15), 1,
      anon_sym_LF,
    ACTIONS(63), 1,
      sym_comment,
    STATE(45), 1,
      sym__comment_or_new_line,
    STATE(55), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(291), 1,
      aux_sym_query_string_params_section_repeat1,
  [9501] = 5,
    ACTIONS(15), 1,
      anon_sym_LF,
    ACTIONS(63), 1,
      sym_comment,
    STATE(44), 1,
      sym__comment_or_new_line,
    STATE(55), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(291), 1,
      aux_sym_query_string_params_section_repeat1,
  [9517] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1428), 1,
      anon_sym_LT,
    ACTIONS(1430), 1,
      anon_sym_LT_QMARK,
    STATE(321), 2,
      sym_xml_prolog_tag,
      aux_sym_xml_repeat1,
  [9531] = 5,
    ACTIONS(15), 1,
      anon_sym_LF,
    ACTIONS(63), 1,
      sym_comment,
    STATE(37), 1,
      sym__comment_or_new_line,
    STATE(55), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(325), 1,
      aux_sym_multipart_form_data_section_repeat1,
  [9547] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(719), 1,
      anon_sym_DQUOTE,
    ACTIONS(1400), 1,
      anon_sym_SLASH,
    STATE(192), 2,
      sym_quoted_string,
      sym_regex,
  [9561] = 2,
    ACTIONS(1435), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1433), 4,
      anon_sym_LF,
      anon_sym_BSLASH,
      aux_sym_value_string_text_token1,
      sym_comment,
  [9571] = 5,
    ACTIONS(1437), 1,
      anon_sym_LF,
    ACTIONS(1440), 1,
      sym_comment,
    STATE(139), 1,
      sym__comment_or_new_line,
    STATE(282), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(325), 1,
      aux_sym_multipart_form_data_section_repeat1,
  [9587] = 3,
    ACTIONS(770), 1,
      sym_comment,
    ACTIONS(1259), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1257), 3,
      anon_sym_BSLASH,
      anon_sym_BQUOTE,
      aux_sym_oneline_string_text_token1,
  [9599] = 2,
    ACTIONS(770), 1,
      sym_comment,
    ACTIONS(1241), 4,
      anon_sym_DQUOTE,
      aux_sym_quoted_string_text_token1,
      anon_sym_BSLASH,
      anon_sym_LBRACE_LBRACE,
  [9609] = 3,
    ACTIONS(770), 1,
      sym_comment,
    ACTIONS(1445), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1443), 3,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
      aux_sym_json_string_text_token1,
  [9621] = 3,
    ACTIONS(770), 1,
      sym_comment,
    ACTIONS(1449), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1447), 3,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
      aux_sym_json_string_text_token1,
  [9633] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1451), 4,
      anon_sym_COLON2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [9643] = 5,
    ACTIONS(15), 1,
      anon_sym_LF,
    ACTIONS(63), 1,
      sym_comment,
    STATE(47), 1,
      sym__comment_or_new_line,
    STATE(55), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(291), 1,
      aux_sym_query_string_params_section_repeat1,
  [9659] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1404), 1,
      anon_sym_DQUOTE,
    ACTIONS(1406), 1,
      anon_sym_SLASH,
    STATE(73), 2,
      sym_quoted_string,
      sym_regex,
  [9673] = 3,
    ACTIONS(770), 1,
      sym_comment,
    ACTIONS(1455), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1453), 3,
      anon_sym_BSLASH,
      anon_sym_BQUOTE,
      aux_sym_oneline_string_text_token1,
  [9685] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(719), 1,
      anon_sym_DQUOTE,
    ACTIONS(1400), 1,
      anon_sym_SLASH,
    STATE(505), 2,
      sym_quoted_string,
      sym_regex,
  [9699] = 2,
    ACTIONS(1243), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1241), 4,
      anon_sym_LF,
      anon_sym_BSLASH,
      aux_sym_value_string_text_token1,
      sym_comment,
  [9709] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1351), 4,
      anon_sym_COLON2,
      sym_key_string_text,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
  [9719] = 3,
    ACTIONS(770), 1,
      sym_comment,
    ACTIONS(1459), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1457), 3,
      anon_sym_BSLASH,
      anon_sym_BQUOTE,
      aux_sym_oneline_string_text_token1,
  [9731] = 3,
    ACTIONS(770), 1,
      sym_comment,
    ACTIONS(1463), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1461), 3,
      anon_sym_BSLASH,
      anon_sym_BQUOTE,
      aux_sym_oneline_string_text_token1,
  [9743] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(727), 1,
      aux_sym_digit_token1,
    STATE(367), 1,
      sym_integer,
    STATE(234), 2,
      sym_digit,
      aux_sym_integer_repeat1,
  [9757] = 3,
    ACTIONS(770), 1,
      sym_comment,
    ACTIONS(1467), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1465), 3,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
      aux_sym_json_string_text_token1,
  [9769] = 2,
    ACTIONS(770), 1,
      sym_comment,
    ACTIONS(1257), 4,
      anon_sym_DQUOTE,
      aux_sym_quoted_string_text_token1,
      anon_sym_BSLASH,
      anon_sym_LBRACE_LBRACE,
  [9779] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1469), 1,
      anon_sym_SEMI,
    ACTIONS(1471), 1,
      aux_sym_hexdigit_token1,
    STATE(342), 2,
      sym_hexdigit,
      aux_sym_oneline_hex_repeat1,
  [9793] = 1,
    ACTIONS(1257), 5,
      anon_sym_LF,
      anon_sym_BSLASH,
      sym_filename_text,
      anon_sym_LBRACE_LBRACE,
      sym_comment,
  [9801] = 4,
    ACTIONS(15), 1,
      anon_sym_LF,
    ACTIONS(63), 1,
      sym_comment,
    STATE(55), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(2), 2,
      sym__comment_or_new_line,
      aux_sym_hurl_file_repeat2,
  [9815] = 2,
    ACTIONS(1319), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1317), 4,
      anon_sym_LF,
      anon_sym_BSLASH,
      aux_sym_value_string_text_token1,
      sym_comment,
  [9825] = 1,
    ACTIONS(1474), 5,
      anon_sym_LF,
      anon_sym_BSLASH,
      sym_filename_text,
      anon_sym_LBRACE_LBRACE,
      sym_comment,
  [9833] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1476), 4,
      anon_sym_COLON2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [9843] = 2,
    ACTIONS(770), 1,
      sym_comment,
    ACTIONS(1474), 4,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      sym_filename_text,
      anon_sym_LBRACE_LBRACE,
  [9853] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1416), 1,
      aux_sym_hexdigit_token1,
    ACTIONS(1478), 1,
      anon_sym_SEMI,
    STATE(342), 2,
      sym_hexdigit,
      aux_sym_oneline_hex_repeat1,
  [9867] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1259), 4,
      anon_sym_COLON2,
      sym_key_string_text,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
  [9877] = 4,
    ACTIONS(788), 1,
      anon_sym_LF,
    ACTIONS(804), 1,
      sym_comment,
    STATE(60), 1,
      sym__comment_or_new_line,
    STATE(67), 1,
      aux_sym__comment_or_new_line_repeat1,
  [9890] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(366), 1,
      sym_boolean,
    ACTIONS(723), 2,
      anon_sym_true,
      anon_sym_false,
  [9901] = 4,
    ACTIONS(7), 1,
      anon_sym_LF,
    ACTIONS(11), 1,
      sym_comment,
    STATE(11), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(24), 1,
      sym__comment_or_new_line,
  [9914] = 4,
    ACTIONS(788), 1,
      anon_sym_LF,
    ACTIONS(804), 1,
      sym_comment,
    STATE(67), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(70), 1,
      sym__comment_or_new_line,
  [9927] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1449), 3,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      aux_sym_hexdigit_token1,
  [9936] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1482), 1,
      anon_sym_POUND,
    ACTIONS(1480), 2,
      anon_sym_SEMI,
      aux_sym_filename_escaped_char_token1,
  [9947] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1484), 1,
      aux_sym_variable_name_token1,
    STATE(130), 1,
      sym_variable_name,
    STATE(489), 1,
      sym_expr,
  [9960] = 4,
    ACTIONS(7), 1,
      anon_sym_LF,
    ACTIONS(11), 1,
      sym_comment,
    STATE(11), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(36), 1,
      sym__comment_or_new_line,
  [9973] = 4,
    ACTIONS(7), 1,
      anon_sym_LF,
    ACTIONS(11), 1,
      sym_comment,
    STATE(11), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(34), 1,
      sym__comment_or_new_line,
  [9986] = 4,
    ACTIONS(7), 1,
      anon_sym_LF,
    ACTIONS(11), 1,
      sym_comment,
    STATE(11), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(33), 1,
      sym__comment_or_new_line,
  [9999] = 4,
    ACTIONS(7), 1,
      anon_sym_LF,
    ACTIONS(11), 1,
      sym_comment,
    STATE(11), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(32), 1,
      sym__comment_or_new_line,
  [10012] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(786), 1,
      aux_sym_digit_token1,
    STATE(247), 2,
      sym_digit,
      aux_sym_integer_repeat1,
  [10023] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1486), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [10032] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1488), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [10041] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1490), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [10050] = 4,
    ACTIONS(7), 1,
      anon_sym_LF,
    ACTIONS(11), 1,
      sym_comment,
    STATE(11), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(31), 1,
      sym__comment_or_new_line,
  [10063] = 4,
    ACTIONS(7), 1,
      anon_sym_LF,
    ACTIONS(11), 1,
      sym_comment,
    STATE(11), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(23), 1,
      sym__comment_or_new_line,
  [10076] = 4,
    ACTIONS(7), 1,
      anon_sym_LF,
    ACTIONS(11), 1,
      sym_comment,
    STATE(11), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(30), 1,
      sym__comment_or_new_line,
  [10089] = 4,
    ACTIONS(7), 1,
      anon_sym_LF,
    ACTIONS(11), 1,
      sym_comment,
    STATE(11), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(29), 1,
      sym__comment_or_new_line,
  [10102] = 4,
    ACTIONS(7), 1,
      anon_sym_LF,
    ACTIONS(11), 1,
      sym_comment,
    STATE(11), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(28), 1,
      sym__comment_or_new_line,
  [10115] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1259), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [10124] = 4,
    ACTIONS(7), 1,
      anon_sym_LF,
    ACTIONS(11), 1,
      sym_comment,
    STATE(11), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(27), 1,
      sym__comment_or_new_line,
  [10137] = 4,
    ACTIONS(1492), 1,
      anon_sym_LF,
    ACTIONS(1494), 1,
      sym_comment,
    STATE(134), 1,
      sym__comment_or_new_line,
    STATE(282), 1,
      aux_sym__comment_or_new_line_repeat1,
  [10150] = 4,
    ACTIONS(7), 1,
      anon_sym_LF,
    ACTIONS(11), 1,
      sym_comment,
    STATE(11), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(52), 1,
      sym__comment_or_new_line,
  [10163] = 4,
    ACTIONS(1492), 1,
      anon_sym_LF,
    ACTIONS(1494), 1,
      sym_comment,
    STATE(282), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(522), 1,
      sym__comment_or_new_line,
  [10176] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1498), 1,
      anon_sym_POUND,
    ACTIONS(1496), 2,
      anon_sym_SEMI,
      aux_sym_filename_escaped_char_token1,
  [10187] = 2,
    ACTIONS(770), 1,
      sym_comment,
    ACTIONS(1500), 3,
      anon_sym_BSLASH,
      anon_sym_SLASH,
      aux_sym_regex_text_token1,
  [10196] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1181), 1,
      anon_sym_COMMA,
    ACTIONS(1502), 1,
      anon_sym_RBRACE,
    STATE(398), 1,
      aux_sym_json_object_repeat1,
  [10209] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1181), 1,
      anon_sym_COMMA,
    ACTIONS(1502), 1,
      anon_sym_RBRACE,
    STATE(404), 1,
      aux_sym_json_object_repeat1,
  [10222] = 4,
    ACTIONS(788), 1,
      anon_sym_LF,
    ACTIONS(804), 1,
      sym_comment,
    STATE(10), 1,
      sym__comment_or_new_line,
    STATE(67), 1,
      aux_sym__comment_or_new_line_repeat1,
  [10235] = 4,
    ACTIONS(1504), 1,
      anon_sym_LF,
    ACTIONS(1506), 1,
      aux_sym_file_contenttype_token1,
    ACTIONS(1508), 1,
      sym_comment,
    STATE(502), 1,
      sym_file_contenttype,
  [10248] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1295), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [10257] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1181), 1,
      anon_sym_COMMA,
    ACTIONS(1510), 1,
      anon_sym_RBRACE,
    STATE(397), 1,
      aux_sym_json_object_repeat1,
  [10270] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(786), 1,
      aux_sym_digit_token1,
    STATE(183), 2,
      sym_digit,
      aux_sym_integer_repeat1,
  [10281] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1512), 1,
      anon_sym_COMMA,
    ACTIONS(1514), 1,
      anon_sym_RBRACK,
    STATE(400), 1,
      aux_sym_json_array_repeat1,
  [10294] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(380), 1,
      sym_status,
    ACTIONS(1516), 2,
      aux_sym_status_token1,
      anon_sym_STAR,
  [10305] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1181), 1,
      anon_sym_COMMA,
    ACTIONS(1510), 1,
      anon_sym_RBRACE,
    STATE(404), 1,
      aux_sym_json_object_repeat1,
  [10318] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1512), 1,
      anon_sym_COMMA,
    ACTIONS(1518), 1,
      anon_sym_RBRACK,
    STATE(409), 1,
      aux_sym_json_array_repeat1,
  [10331] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1520), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [10340] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1484), 1,
      aux_sym_variable_name_token1,
    STATE(130), 1,
      sym_variable_name,
    STATE(578), 1,
      sym_expr,
  [10353] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1484), 1,
      aux_sym_variable_name_token1,
    STATE(130), 1,
      sym_variable_name,
    STATE(577), 1,
      sym_expr,
  [10366] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(727), 1,
      aux_sym_digit_token1,
    STATE(264), 2,
      sym_digit,
      aux_sym_integer_repeat1,
  [10377] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1484), 1,
      aux_sym_variable_name_token1,
    STATE(130), 1,
      sym_variable_name,
    STATE(576), 1,
      sym_expr,
  [10390] = 4,
    ACTIONS(1492), 1,
      anon_sym_LF,
    ACTIONS(1494), 1,
      sym_comment,
    STATE(157), 1,
      sym__comment_or_new_line,
    STATE(282), 1,
      aux_sym__comment_or_new_line_repeat1,
  [10403] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1484), 1,
      aux_sym_variable_name_token1,
    STATE(130), 1,
      sym_variable_name,
    STATE(575), 1,
      sym_expr,
  [10416] = 4,
    ACTIONS(7), 1,
      anon_sym_LF,
    ACTIONS(11), 1,
      sym_comment,
    STATE(11), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(107), 1,
      sym__comment_or_new_line,
  [10429] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1181), 1,
      anon_sym_COMMA,
    ACTIONS(1522), 1,
      anon_sym_RBRACE,
    STATE(404), 1,
      aux_sym_json_object_repeat1,
  [10442] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1181), 1,
      anon_sym_COMMA,
    ACTIONS(1524), 1,
      anon_sym_RBRACE,
    STATE(404), 1,
      aux_sym_json_object_repeat1,
  [10455] = 4,
    ACTIONS(15), 1,
      anon_sym_LF,
    ACTIONS(63), 1,
      sym_comment,
    STATE(55), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(56), 1,
      sym__comment_or_new_line,
  [10468] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1512), 1,
      anon_sym_COMMA,
    ACTIONS(1526), 1,
      anon_sym_RBRACK,
    STATE(401), 1,
      aux_sym_json_array_repeat1,
  [10481] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1528), 1,
      anon_sym_COMMA,
    ACTIONS(1531), 1,
      anon_sym_RBRACK,
    STATE(401), 1,
      aux_sym_json_array_repeat1,
  [10494] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1484), 1,
      aux_sym_variable_name_token1,
    STATE(130), 1,
      sym_variable_name,
    STATE(574), 1,
      sym_expr,
  [10507] = 4,
    ACTIONS(1289), 1,
      anon_sym_DOT,
    ACTIONS(1533), 1,
      anon_sym_LF,
    ACTIONS(1535), 1,
      sym_comment,
    STATE(556), 1,
      sym_fraction,
  [10520] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1537), 1,
      anon_sym_RBRACE,
    ACTIONS(1539), 1,
      anon_sym_COMMA,
    STATE(404), 1,
      aux_sym_json_object_repeat1,
  [10533] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1484), 1,
      aux_sym_variable_name_token1,
    STATE(130), 1,
      sym_variable_name,
    STATE(573), 1,
      sym_expr,
  [10546] = 4,
    ACTIONS(1289), 1,
      anon_sym_DOT,
    ACTIONS(1542), 1,
      anon_sym_LF,
    ACTIONS(1544), 1,
      sym_comment,
    STATE(556), 1,
      sym_fraction,
  [10559] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1484), 1,
      aux_sym_variable_name_token1,
    STATE(130), 1,
      sym_variable_name,
    STATE(572), 1,
      sym_expr,
  [10572] = 4,
    ACTIONS(1289), 1,
      anon_sym_DOT,
    ACTIONS(1546), 1,
      anon_sym_LF,
    ACTIONS(1548), 1,
      sym_comment,
    STATE(556), 1,
      sym_fraction,
  [10585] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1512), 1,
      anon_sym_COMMA,
    ACTIONS(1550), 1,
      anon_sym_RBRACK,
    STATE(401), 1,
      aux_sym_json_array_repeat1,
  [10598] = 4,
    ACTIONS(1289), 1,
      anon_sym_DOT,
    ACTIONS(1552), 1,
      anon_sym_LF,
    ACTIONS(1554), 1,
      sym_comment,
    STATE(556), 1,
      sym_fraction,
  [10611] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1484), 1,
      aux_sym_variable_name_token1,
    STATE(130), 1,
      sym_variable_name,
    STATE(570), 1,
      sym_expr,
  [10624] = 4,
    ACTIONS(1289), 1,
      anon_sym_DOT,
    ACTIONS(1556), 1,
      anon_sym_LF,
    ACTIONS(1558), 1,
      sym_comment,
    STATE(556), 1,
      sym_fraction,
  [10637] = 4,
    ACTIONS(1492), 1,
      anon_sym_LF,
    ACTIONS(1494), 1,
      sym_comment,
    STATE(135), 1,
      sym__comment_or_new_line,
    STATE(282), 1,
      aux_sym__comment_or_new_line_repeat1,
  [10650] = 4,
    ACTIONS(1492), 1,
      anon_sym_LF,
    ACTIONS(1494), 1,
      sym_comment,
    STATE(132), 1,
      sym__comment_or_new_line,
    STATE(282), 1,
      aux_sym__comment_or_new_line_repeat1,
  [10663] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(353), 1,
      sym_boolean,
    ACTIONS(723), 2,
      anon_sym_true,
      anon_sym_false,
  [10674] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(420), 1,
      sym_boolean,
    ACTIONS(723), 2,
      anon_sym_true,
      anon_sym_false,
  [10685] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1484), 1,
      aux_sym_variable_name_token1,
    STATE(358), 1,
      sym_variable_definition,
    STATE(543), 1,
      sym_variable_name,
  [10698] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(361), 1,
      sym_boolean,
    ACTIONS(723), 2,
      anon_sym_true,
      anon_sym_false,
  [10709] = 4,
    ACTIONS(7), 1,
      anon_sym_LF,
    ACTIONS(11), 1,
      sym_comment,
    STATE(11), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(53), 1,
      sym__comment_or_new_line,
  [10722] = 4,
    ACTIONS(7), 1,
      anon_sym_LF,
    ACTIONS(11), 1,
      sym_comment,
    STATE(11), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(35), 1,
      sym__comment_or_new_line,
  [10735] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(368), 1,
      sym_boolean,
    ACTIONS(723), 2,
      anon_sym_true,
      anon_sym_false,
  [10746] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(369), 1,
      sym_boolean,
    ACTIONS(723), 2,
      anon_sym_true,
      anon_sym_false,
  [10757] = 4,
    ACTIONS(1506), 1,
      aux_sym_file_contenttype_token1,
    ACTIONS(1560), 1,
      anon_sym_LF,
    ACTIONS(1562), 1,
      sym_comment,
    STATE(497), 1,
      sym_file_contenttype,
  [10770] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(370), 1,
      sym_boolean,
    ACTIONS(723), 2,
      anon_sym_true,
      anon_sym_false,
  [10781] = 4,
    ACTIONS(1492), 1,
      anon_sym_LF,
    ACTIONS(1494), 1,
      sym_comment,
    STATE(136), 1,
      sym__comment_or_new_line,
    STATE(282), 1,
      aux_sym__comment_or_new_line_repeat1,
  [10794] = 4,
    ACTIONS(1289), 1,
      anon_sym_DOT,
    ACTIONS(1564), 1,
      anon_sym_LF,
    ACTIONS(1566), 1,
      sym_comment,
    STATE(556), 1,
      sym_fraction,
  [10807] = 4,
    ACTIONS(7), 1,
      anon_sym_LF,
    ACTIONS(11), 1,
      sym_comment,
    STATE(11), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(18), 1,
      sym__comment_or_new_line,
  [10820] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1484), 1,
      aux_sym_variable_name_token1,
    STATE(130), 1,
      sym_variable_name,
    STATE(568), 1,
      sym_expr,
  [10833] = 4,
    ACTIONS(7), 1,
      anon_sym_LF,
    ACTIONS(11), 1,
      sym_comment,
    STATE(11), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(14), 1,
      sym__comment_or_new_line,
  [10846] = 4,
    ACTIONS(7), 1,
      anon_sym_LF,
    ACTIONS(11), 1,
      sym_comment,
    STATE(11), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(62), 1,
      sym__comment_or_new_line,
  [10859] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1484), 1,
      aux_sym_variable_name_token1,
    STATE(130), 1,
      sym_variable_name,
    STATE(537), 1,
      sym_expr,
  [10872] = 2,
    ACTIONS(770), 1,
      sym_comment,
    ACTIONS(1568), 3,
      anon_sym_BSLASH,
      anon_sym_SLASH,
      aux_sym_regex_text_token1,
  [10881] = 4,
    ACTIONS(1289), 1,
      anon_sym_DOT,
    ACTIONS(1570), 1,
      anon_sym_LF,
    ACTIONS(1572), 1,
      sym_comment,
    STATE(556), 1,
      sym_fraction,
  [10894] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1484), 1,
      aux_sym_variable_name_token1,
    STATE(130), 1,
      sym_variable_name,
    STATE(565), 1,
      sym_expr,
  [10907] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1371), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [10916] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(727), 1,
      aux_sym_digit_token1,
    STATE(294), 2,
      sym_digit,
      aux_sym_integer_repeat1,
  [10927] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1574), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [10936] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1576), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [10945] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1578), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [10954] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1580), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [10963] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1416), 1,
      aux_sym_hexdigit_token1,
    STATE(567), 1,
      sym_hexdigit,
  [10973] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1582), 1,
      anon_sym_COLON,
    ACTIONS(1584), 1,
      anon_sym_COLON2,
  [10983] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1416), 1,
      aux_sym_hexdigit_token1,
    STATE(483), 1,
      sym_hexdigit,
  [10993] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1416), 1,
      aux_sym_hexdigit_token1,
    STATE(564), 1,
      sym_hexdigit,
  [11003] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1416), 1,
      aux_sym_hexdigit_token1,
    STATE(443), 1,
      sym_hexdigit,
  [11013] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(719), 1,
      anon_sym_DQUOTE,
    STATE(201), 1,
      sym_quoted_string,
  [11023] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1586), 1,
      anon_sym_file_COMMA,
    STATE(375), 1,
      sym_file_value,
  [11033] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1416), 1,
      aux_sym_hexdigit_token1,
    STATE(487), 1,
      sym_hexdigit,
  [11043] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(719), 1,
      anon_sym_DQUOTE,
    STATE(195), 1,
      sym_quoted_string,
  [11053] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1416), 1,
      aux_sym_hexdigit_token1,
    STATE(569), 1,
      sym_hexdigit,
  [11063] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1588), 1,
      anon_sym_LBRACE,
    STATE(271), 1,
      sym_unicode_char,
  [11073] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1416), 1,
      aux_sym_hexdigit_token1,
    STATE(571), 1,
      sym_hexdigit,
  [11083] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(719), 1,
      anon_sym_DQUOTE,
    STATE(191), 1,
      sym_quoted_string,
  [11093] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(719), 1,
      anon_sym_DQUOTE,
    STATE(190), 1,
      sym_quoted_string,
  [11103] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1590), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [11111] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1531), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [11119] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(719), 1,
      anon_sym_DQUOTE,
    STATE(186), 1,
      sym_quoted_string,
  [11129] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1592), 1,
      aux_sym_hexdigit_token1,
    STATE(314), 1,
      sym_hexdigit,
  [11139] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1404), 1,
      anon_sym_DQUOTE,
    STATE(84), 1,
      sym_quoted_string,
  [11149] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1404), 1,
      anon_sym_DQUOTE,
    STATE(91), 1,
      sym_quoted_string,
  [11159] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1537), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [11167] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1404), 1,
      anon_sym_DQUOTE,
    STATE(90), 1,
      sym_quoted_string,
  [11177] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1404), 1,
      anon_sym_DQUOTE,
    STATE(89), 1,
      sym_quoted_string,
  [11187] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1404), 1,
      anon_sym_DQUOTE,
    STATE(88), 1,
      sym_quoted_string,
  [11197] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1594), 2,
      aux_sym_status_token1,
      anon_sym_STAR,
  [11205] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1416), 1,
      aux_sym_hexdigit_token1,
    STATE(444), 1,
      sym_hexdigit,
  [11215] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1416), 1,
      aux_sym_hexdigit_token1,
    STATE(441), 1,
      sym_hexdigit,
  [11225] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1416), 1,
      aux_sym_hexdigit_token1,
    STATE(445), 1,
      sym_hexdigit,
  [11235] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1596), 1,
      anon_sym_LBRACE,
    STATE(333), 1,
      sym_unicode_char,
  [11245] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1416), 1,
      aux_sym_hexdigit_token1,
    STATE(450), 1,
      sym_hexdigit,
  [11255] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1416), 1,
      aux_sym_hexdigit_token1,
    STATE(481), 1,
      sym_hexdigit,
  [11265] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1416), 1,
      aux_sym_hexdigit_token1,
    STATE(452), 1,
      sym_hexdigit,
  [11275] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1598), 1,
      anon_sym_LBRACE,
    STATE(315), 1,
      sym_unicode_char,
  [11285] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1416), 1,
      aux_sym_hexdigit_token1,
    STATE(448), 1,
      sym_hexdigit,
  [11295] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1416), 1,
      aux_sym_hexdigit_token1,
    STATE(466), 1,
      sym_hexdigit,
  [11305] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1416), 1,
      aux_sym_hexdigit_token1,
    STATE(467), 1,
      sym_hexdigit,
  [11315] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1600), 1,
      anon_sym_LBRACE,
    STATE(311), 1,
      sym_unicode_char,
  [11325] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1333), 1,
      anon_sym_LT,
    ACTIONS(1335), 1,
      anon_sym_LT_QMARK,
  [11335] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(719), 1,
      anon_sym_DQUOTE,
    STATE(506), 1,
      sym_quoted_string,
  [11345] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1416), 1,
      aux_sym_hexdigit_token1,
    STATE(470), 1,
      sym_hexdigit,
  [11355] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1416), 1,
      aux_sym_hexdigit_token1,
    STATE(472), 1,
      sym_hexdigit,
  [11365] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1416), 1,
      aux_sym_hexdigit_token1,
    STATE(475), 1,
      sym_hexdigit,
  [11375] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1416), 1,
      aux_sym_hexdigit_token1,
    STATE(524), 1,
      sym_hexdigit,
  [11385] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1602), 1,
      anon_sym_LBRACE,
    STATE(256), 1,
      sym_unicode_char,
  [11395] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1416), 1,
      aux_sym_hexdigit_token1,
    STATE(476), 1,
      sym_hexdigit,
  [11405] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1416), 1,
      aux_sym_hexdigit_token1,
    STATE(480), 1,
      sym_hexdigit,
  [11415] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1416), 1,
      aux_sym_hexdigit_token1,
    STATE(458), 1,
      sym_hexdigit,
  [11425] = 2,
    ACTIONS(1574), 1,
      anon_sym_LF,
    ACTIONS(1604), 1,
      sym_comment,
  [11432] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1606), 1,
      anon_sym_RBRACE_RBRACE,
  [11439] = 2,
    ACTIONS(1608), 1,
      anon_sym_LF,
    ACTIONS(1610), 1,
      sym_comment,
  [11446] = 2,
    ACTIONS(770), 1,
      sym_comment,
    ACTIONS(1612), 1,
      aux_sym_variable_name_token2,
  [11453] = 2,
    ACTIONS(1520), 1,
      anon_sym_LF,
    ACTIONS(1614), 1,
      sym_comment,
  [11460] = 2,
    ACTIONS(770), 1,
      sym_comment,
    ACTIONS(1616), 1,
      aux_sym_xml_open_tag_token1,
  [11467] = 2,
    ACTIONS(770), 1,
      sym_comment,
    ACTIONS(1618), 1,
      aux_sym_xml_prolog_tag_token1,
  [11474] = 2,
    ACTIONS(770), 1,
      sym_comment,
    ACTIONS(1620), 1,
      aux_sym_oneline_base64_token1,
  [11481] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1622), 1,
      aux_sym_key_string_escaped_char_token1,
  [11488] = 2,
    ACTIONS(1624), 1,
      anon_sym_LF,
    ACTIONS(1626), 1,
      sym_comment,
  [11495] = 2,
    ACTIONS(1580), 1,
      anon_sym_LF,
    ACTIONS(1628), 1,
      sym_comment,
  [11502] = 2,
    ACTIONS(1578), 1,
      anon_sym_LF,
    ACTIONS(1630), 1,
      sym_comment,
  [11509] = 2,
    ACTIONS(1564), 1,
      anon_sym_LF,
    ACTIONS(1566), 1,
      sym_comment,
  [11516] = 2,
    ACTIONS(1632), 1,
      anon_sym_LF,
    ACTIONS(1634), 1,
      sym_comment,
  [11523] = 2,
    ACTIONS(1560), 1,
      anon_sym_LF,
    ACTIONS(1562), 1,
      sym_comment,
  [11530] = 2,
    ACTIONS(1636), 1,
      anon_sym_LF,
    ACTIONS(1638), 1,
      sym_comment,
  [11537] = 2,
    ACTIONS(1640), 1,
      anon_sym_LF,
    ACTIONS(1642), 1,
      sym_comment,
  [11544] = 2,
    ACTIONS(1644), 1,
      anon_sym_LF,
    ACTIONS(1646), 1,
      sym_comment,
  [11551] = 2,
    ACTIONS(1648), 1,
      anon_sym_LF,
    ACTIONS(1650), 1,
      sym_comment,
  [11558] = 2,
    ACTIONS(1652), 1,
      anon_sym_LF,
    ACTIONS(1654), 1,
      sym_comment,
  [11565] = 2,
    ACTIONS(1656), 1,
      anon_sym_LF,
    ACTIONS(1658), 1,
      sym_comment,
  [11572] = 2,
    ACTIONS(1556), 1,
      anon_sym_LF,
    ACTIONS(1558), 1,
      sym_comment,
  [11579] = 2,
    ACTIONS(1552), 1,
      anon_sym_LF,
    ACTIONS(1554), 1,
      sym_comment,
  [11586] = 2,
    ACTIONS(1546), 1,
      anon_sym_LF,
    ACTIONS(1548), 1,
      sym_comment,
  [11593] = 2,
    ACTIONS(1542), 1,
      anon_sym_LF,
    ACTIONS(1544), 1,
      sym_comment,
  [11600] = 2,
    ACTIONS(1660), 1,
      anon_sym_LF,
    ACTIONS(1662), 1,
      sym_comment,
  [11607] = 2,
    ACTIONS(1533), 1,
      anon_sym_LF,
    ACTIONS(1535), 1,
      sym_comment,
  [11614] = 2,
    ACTIONS(1664), 1,
      anon_sym_LF,
    ACTIONS(1666), 1,
      sym_comment,
  [11621] = 2,
    ACTIONS(1668), 1,
      anon_sym_LF,
    ACTIONS(1670), 1,
      sym_comment,
  [11628] = 2,
    ACTIONS(1672), 1,
      anon_sym_LF,
    ACTIONS(1674), 1,
      sym_comment,
  [11635] = 2,
    ACTIONS(1676), 1,
      anon_sym_LF,
    ACTIONS(1678), 1,
      sym_comment,
  [11642] = 2,
    ACTIONS(1680), 1,
      anon_sym_LF,
    ACTIONS(1682), 1,
      sym_comment,
  [11649] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1582), 1,
      anon_sym_COLON,
  [11656] = 2,
    ACTIONS(1371), 1,
      anon_sym_LF,
    ACTIONS(1375), 1,
      sym_comment,
  [11663] = 2,
    ACTIONS(1684), 1,
      anon_sym_LF,
    ACTIONS(1686), 1,
      sym_comment,
  [11670] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1688), 1,
      anon_sym_SEMI,
  [11677] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1690), 1,
      anon_sym_RBRACE,
  [11684] = 2,
    ACTIONS(1692), 1,
      anon_sym_LF,
    ACTIONS(1694), 1,
      sym_comment,
  [11691] = 2,
    ACTIONS(1696), 1,
      anon_sym_LF,
    ACTIONS(1698), 1,
      sym_comment,
  [11698] = 2,
    ACTIONS(1700), 1,
      anon_sym_LF,
    ACTIONS(1702), 1,
      sym_comment,
  [11705] = 2,
    ACTIONS(1704), 1,
      anon_sym_LF,
    ACTIONS(1706), 1,
      sym_comment,
  [11712] = 2,
    ACTIONS(1708), 1,
      anon_sym_LF,
    ACTIONS(1710), 1,
      sym_comment,
  [11719] = 2,
    ACTIONS(1712), 1,
      anon_sym_LF,
    ACTIONS(1714), 1,
      sym_comment,
  [11726] = 2,
    ACTIONS(1716), 1,
      anon_sym_LF,
    ACTIONS(1718), 1,
      sym_comment,
  [11733] = 2,
    ACTIONS(1720), 1,
      anon_sym_LF,
    ACTIONS(1722), 1,
      sym_comment,
  [11740] = 2,
    ACTIONS(1724), 1,
      anon_sym_LF,
    ACTIONS(1726), 1,
      sym_comment,
  [11747] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1728), 1,
      anon_sym_SEMI,
  [11754] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1730), 1,
      anon_sym_GT,
  [11761] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1732), 1,
      anon_sym_QMARK_GT,
  [11768] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1734), 1,
      anon_sym_RBRACE_RBRACE,
  [11775] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1736), 1,
      anon_sym_SEMI,
  [11782] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1738), 1,
      aux_sym_key_string_escaped_char_token1,
  [11789] = 2,
    ACTIONS(1740), 1,
      anon_sym_LF,
    ACTIONS(1742), 1,
      sym_comment,
  [11796] = 2,
    ACTIONS(1451), 1,
      anon_sym_LF,
    ACTIONS(1744), 1,
      sym_comment,
  [11803] = 2,
    ACTIONS(1746), 1,
      anon_sym_LF,
    ACTIONS(1748), 1,
      sym_comment,
  [11810] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1750), 1,
      anon_sym_EQ,
  [11817] = 2,
    ACTIONS(1752), 1,
      anon_sym_LF,
    ACTIONS(1754), 1,
      sym_comment,
  [11824] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1756), 1,
      anon_sym_QMARK_GT,
  [11831] = 2,
    ACTIONS(770), 1,
      sym_comment,
    ACTIONS(1758), 1,
      aux_sym_oneline_string_text_token2,
  [11838] = 2,
    ACTIONS(770), 1,
      sym_comment,
    ACTIONS(1760), 1,
      anon_sym_LF,
  [11845] = 2,
    ACTIONS(770), 1,
      sym_comment,
    ACTIONS(1762), 1,
      anon_sym_LF,
  [11852] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1764), 1,
      anon_sym_COLON2,
  [11859] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1766), 1,
      anon_sym_COLON2,
  [11866] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1768), 1,
      anon_sym_COLON2,
  [11873] = 2,
    ACTIONS(1329), 1,
      sym_comment,
    ACTIONS(1331), 1,
      anon_sym_LF,
  [11880] = 2,
    ACTIONS(1295), 1,
      anon_sym_LF,
    ACTIONS(1402), 1,
      sym_comment,
  [11887] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1770), 1,
      anon_sym_COLON2,
  [11894] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1772), 1,
      anon_sym_GT,
  [11901] = 2,
    ACTIONS(1774), 1,
      anon_sym_LF,
    ACTIONS(1776), 1,
      sym_comment,
  [11908] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1778), 1,
      anon_sym_SLASH,
  [11915] = 2,
    ACTIONS(1263), 1,
      sym_comment,
    ACTIONS(1265), 1,
      anon_sym_LF,
  [11922] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1780), 1,
      anon_sym_COLON2,
  [11929] = 2,
    ACTIONS(1576), 1,
      anon_sym_LF,
    ACTIONS(1782), 1,
      sym_comment,
  [11936] = 2,
    ACTIONS(1784), 1,
      anon_sym_LF,
    ACTIONS(1786), 1,
      sym_comment,
  [11943] = 2,
    ACTIONS(1788), 1,
      anon_sym_LF,
    ACTIONS(1790), 1,
      sym_comment,
  [11950] = 2,
    ACTIONS(1792), 1,
      anon_sym_LF,
    ACTIONS(1794), 1,
      sym_comment,
  [11957] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1796), 1,
      anon_sym_RBRACE,
  [11964] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1798), 1,
      anon_sym_RBRACE_RBRACE,
  [11971] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1800), 1,
      aux_sym_key_string_escaped_char_token1,
  [11978] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1802), 1,
      anon_sym_RBRACE,
  [11985] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1804), 1,
      anon_sym_RBRACE_RBRACE,
  [11992] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1806), 1,
      anon_sym_RBRACE,
  [11999] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1808), 1,
      anon_sym_RBRACE_RBRACE,
  [12006] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1810), 1,
      anon_sym_RBRACE,
  [12013] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1812), 1,
      anon_sym_RBRACE_RBRACE,
  [12020] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1814), 1,
      anon_sym_RBRACE_RBRACE,
  [12027] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1816), 1,
      anon_sym_RBRACE_RBRACE,
  [12034] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1818), 1,
      anon_sym_RBRACE_RBRACE,
  [12041] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1820), 1,
      anon_sym_RBRACE_RBRACE,
  [12048] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1822), 1,
      anon_sym_RBRACE_RBRACE,
  [12055] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1824), 1,
      anon_sym_RBRACE_RBRACE,
  [12062] = 2,
    ACTIONS(1826), 1,
      anon_sym_LF,
    ACTIONS(1828), 1,
      sym_comment,
  [12069] = 2,
    ACTIONS(770), 1,
      sym_comment,
    ACTIONS(1830), 1,
      aux_sym_xml_prolog_tag_token1,
  [12076] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1832), 1,
      ts_builtin_sym_end,
  [12083] = 2,
    ACTIONS(770), 1,
      sym_comment,
    ACTIONS(1834), 1,
      aux_sym_xml_close_tag_token1,
  [12090] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1836), 1,
      anon_sym_SLASH,
  [12097] = 2,
    ACTIONS(770), 1,
      sym_comment,
    ACTIONS(1838), 1,
      aux_sym_regex_escaped_char_token1,
  [12104] = 2,
    ACTIONS(1840), 1,
      anon_sym_LF,
    ACTIONS(1842), 1,
      sym_comment,
  [12111] = 2,
    ACTIONS(1490), 1,
      anon_sym_LF,
    ACTIONS(1844), 1,
      sym_comment,
  [12118] = 2,
    ACTIONS(1570), 1,
      anon_sym_LF,
    ACTIONS(1572), 1,
      sym_comment,
  [12125] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1846), 1,
      anon_sym_COLON2,
  [12132] = 2,
    ACTIONS(1301), 1,
      sym_comment,
    ACTIONS(1303), 1,
      anon_sym_LF,
  [12139] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1848), 1,
      anon_sym_GT,
  [12146] = 2,
    ACTIONS(1486), 1,
      anon_sym_LF,
    ACTIONS(1850), 1,
      sym_comment,
  [12153] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1852), 1,
      anon_sym_COLON2,
  [12160] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1854), 1,
      anon_sym_COLON2,
  [12167] = 2,
    ACTIONS(1488), 1,
      anon_sym_LF,
    ACTIONS(1856), 1,
      sym_comment,
  [12174] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1858), 1,
      anon_sym_COLON2,
  [12181] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1860), 1,
      anon_sym_COLON2,
  [12188] = 2,
    ACTIONS(1862), 1,
      anon_sym_LF,
    ACTIONS(1864), 1,
      sym_comment,
  [12195] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1866), 1,
      anon_sym_COLON2,
  [12202] = 2,
    ACTIONS(1868), 1,
      anon_sym_LF,
    ACTIONS(1870), 1,
      sym_comment,
  [12209] = 2,
    ACTIONS(770), 1,
      sym_comment,
    ACTIONS(1872), 1,
      aux_sym_xml_close_tag_token1,
  [12216] = 2,
    ACTIONS(1476), 1,
      anon_sym_LF,
    ACTIONS(1874), 1,
      sym_comment,
  [12223] = 2,
    ACTIONS(1876), 1,
      anon_sym_LF,
    ACTIONS(1878), 1,
      sym_comment,
  [12230] = 2,
    ACTIONS(1880), 1,
      anon_sym_LF,
    ACTIONS(1882), 1,
      sym_comment,
  [12237] = 2,
    ACTIONS(1884), 1,
      anon_sym_LF,
    ACTIONS(1886), 1,
      sym_comment,
  [12244] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1888), 1,
      anon_sym_COLON2,
  [12251] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1890), 1,
      anon_sym_COLON2,
  [12258] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1892), 1,
      anon_sym_COLON2,
  [12265] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1894), 1,
      anon_sym_COLON2,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(19)] = 0,
  [SMALL_STATE(20)] = 122,
  [SMALL_STATE(21)] = 244,
  [SMALL_STATE(22)] = 367,
  [SMALL_STATE(23)] = 490,
  [SMALL_STATE(24)] = 552,
  [SMALL_STATE(25)] = 614,
  [SMALL_STATE(26)] = 676,
  [SMALL_STATE(27)] = 738,
  [SMALL_STATE(28)] = 800,
  [SMALL_STATE(29)] = 862,
  [SMALL_STATE(30)] = 924,
  [SMALL_STATE(31)] = 986,
  [SMALL_STATE(32)] = 1048,
  [SMALL_STATE(33)] = 1110,
  [SMALL_STATE(34)] = 1172,
  [SMALL_STATE(35)] = 1234,
  [SMALL_STATE(36)] = 1296,
  [SMALL_STATE(37)] = 1358,
  [SMALL_STATE(38)] = 1435,
  [SMALL_STATE(39)] = 1512,
  [SMALL_STATE(40)] = 1589,
  [SMALL_STATE(41)] = 1666,
  [SMALL_STATE(42)] = 1739,
  [SMALL_STATE(43)] = 1812,
  [SMALL_STATE(44)] = 1885,
  [SMALL_STATE(45)] = 1958,
  [SMALL_STATE(46)] = 2031,
  [SMALL_STATE(47)] = 2104,
  [SMALL_STATE(48)] = 2177,
  [SMALL_STATE(49)] = 2250,
  [SMALL_STATE(50)] = 2323,
  [SMALL_STATE(51)] = 2397,
  [SMALL_STATE(52)] = 2460,
  [SMALL_STATE(53)] = 2514,
  [SMALL_STATE(54)] = 2568,
  [SMALL_STATE(55)] = 2627,
  [SMALL_STATE(56)] = 2686,
  [SMALL_STATE(57)] = 2738,
  [SMALL_STATE(58)] = 2806,
  [SMALL_STATE(59)] = 2871,
  [SMALL_STATE(60)] = 2936,
  [SMALL_STATE(61)] = 3001,
  [SMALL_STATE(62)] = 3051,
  [SMALL_STATE(63)] = 3101,
  [SMALL_STATE(64)] = 3184,
  [SMALL_STATE(65)] = 3251,
  [SMALL_STATE(66)] = 3304,
  [SMALL_STATE(67)] = 3354,
  [SMALL_STATE(68)] = 3404,
  [SMALL_STATE(69)] = 3447,
  [SMALL_STATE(70)] = 3490,
  [SMALL_STATE(71)] = 3533,
  [SMALL_STATE(72)] = 3574,
  [SMALL_STATE(73)] = 3614,
  [SMALL_STATE(74)] = 3654,
  [SMALL_STATE(75)] = 3694,
  [SMALL_STATE(76)] = 3734,
  [SMALL_STATE(77)] = 3774,
  [SMALL_STATE(78)] = 3814,
  [SMALL_STATE(79)] = 3854,
  [SMALL_STATE(80)] = 3894,
  [SMALL_STATE(81)] = 3934,
  [SMALL_STATE(82)] = 3974,
  [SMALL_STATE(83)] = 4014,
  [SMALL_STATE(84)] = 4054,
  [SMALL_STATE(85)] = 4093,
  [SMALL_STATE(86)] = 4132,
  [SMALL_STATE(87)] = 4171,
  [SMALL_STATE(88)] = 4210,
  [SMALL_STATE(89)] = 4249,
  [SMALL_STATE(90)] = 4288,
  [SMALL_STATE(91)] = 4327,
  [SMALL_STATE(92)] = 4366,
  [SMALL_STATE(93)] = 4405,
  [SMALL_STATE(94)] = 4444,
  [SMALL_STATE(95)] = 4483,
  [SMALL_STATE(96)] = 4522,
  [SMALL_STATE(97)] = 4561,
  [SMALL_STATE(98)] = 4600,
  [SMALL_STATE(99)] = 4647,
  [SMALL_STATE(100)] = 4708,
  [SMALL_STATE(101)] = 4753,
  [SMALL_STATE(102)] = 4806,
  [SMALL_STATE(103)] = 4859,
  [SMALL_STATE(104)] = 4888,
  [SMALL_STATE(105)] = 4917,
  [SMALL_STATE(106)] = 4946,
  [SMALL_STATE(107)] = 4975,
  [SMALL_STATE(108)] = 5004,
  [SMALL_STATE(109)] = 5057,
  [SMALL_STATE(110)] = 5107,
  [SMALL_STATE(111)] = 5159,
  [SMALL_STATE(112)] = 5195,
  [SMALL_STATE(113)] = 5229,
  [SMALL_STATE(114)] = 5276,
  [SMALL_STATE(115)] = 5323,
  [SMALL_STATE(116)] = 5368,
  [SMALL_STATE(117)] = 5413,
  [SMALL_STATE(118)] = 5458,
  [SMALL_STATE(119)] = 5505,
  [SMALL_STATE(120)] = 5552,
  [SMALL_STATE(121)] = 5597,
  [SMALL_STATE(122)] = 5644,
  [SMALL_STATE(123)] = 5691,
  [SMALL_STATE(124)] = 5735,
  [SMALL_STATE(125)] = 5759,
  [SMALL_STATE(126)] = 5783,
  [SMALL_STATE(127)] = 5807,
  [SMALL_STATE(128)] = 5831,
  [SMALL_STATE(129)] = 5855,
  [SMALL_STATE(130)] = 5896,
  [SMALL_STATE(131)] = 5937,
  [SMALL_STATE(132)] = 5978,
  [SMALL_STATE(133)] = 6022,
  [SMALL_STATE(134)] = 6059,
  [SMALL_STATE(135)] = 6099,
  [SMALL_STATE(136)] = 6139,
  [SMALL_STATE(137)] = 6179,
  [SMALL_STATE(138)] = 6210,
  [SMALL_STATE(139)] = 6237,
  [SMALL_STATE(140)] = 6269,
  [SMALL_STATE(141)] = 6301,
  [SMALL_STATE(142)] = 6330,
  [SMALL_STATE(143)] = 6359,
  [SMALL_STATE(144)] = 6388,
  [SMALL_STATE(145)] = 6417,
  [SMALL_STATE(146)] = 6444,
  [SMALL_STATE(147)] = 6471,
  [SMALL_STATE(148)] = 6498,
  [SMALL_STATE(149)] = 6525,
  [SMALL_STATE(150)] = 6552,
  [SMALL_STATE(151)] = 6579,
  [SMALL_STATE(152)] = 6608,
  [SMALL_STATE(153)] = 6635,
  [SMALL_STATE(154)] = 6663,
  [SMALL_STATE(155)] = 6689,
  [SMALL_STATE(156)] = 6717,
  [SMALL_STATE(157)] = 6743,
  [SMALL_STATE(158)] = 6771,
  [SMALL_STATE(159)] = 6797,
  [SMALL_STATE(160)] = 6823,
  [SMALL_STATE(161)] = 6851,
  [SMALL_STATE(162)] = 6879,
  [SMALL_STATE(163)] = 6907,
  [SMALL_STATE(164)] = 6933,
  [SMALL_STATE(165)] = 6958,
  [SMALL_STATE(166)] = 6977,
  [SMALL_STATE(167)] = 6996,
  [SMALL_STATE(168)] = 7019,
  [SMALL_STATE(169)] = 7044,
  [SMALL_STATE(170)] = 7063,
  [SMALL_STATE(171)] = 7086,
  [SMALL_STATE(172)] = 7111,
  [SMALL_STATE(173)] = 7136,
  [SMALL_STATE(174)] = 7161,
  [SMALL_STATE(175)] = 7186,
  [SMALL_STATE(176)] = 7211,
  [SMALL_STATE(177)] = 7236,
  [SMALL_STATE(178)] = 7251,
  [SMALL_STATE(179)] = 7276,
  [SMALL_STATE(180)] = 7301,
  [SMALL_STATE(181)] = 7326,
  [SMALL_STATE(182)] = 7340,
  [SMALL_STATE(183)] = 7362,
  [SMALL_STATE(184)] = 7380,
  [SMALL_STATE(185)] = 7394,
  [SMALL_STATE(186)] = 7408,
  [SMALL_STATE(187)] = 7422,
  [SMALL_STATE(188)] = 7436,
  [SMALL_STATE(189)] = 7450,
  [SMALL_STATE(190)] = 7470,
  [SMALL_STATE(191)] = 7484,
  [SMALL_STATE(192)] = 7498,
  [SMALL_STATE(193)] = 7512,
  [SMALL_STATE(194)] = 7530,
  [SMALL_STATE(195)] = 7544,
  [SMALL_STATE(196)] = 7558,
  [SMALL_STATE(197)] = 7572,
  [SMALL_STATE(198)] = 7586,
  [SMALL_STATE(199)] = 7606,
  [SMALL_STATE(200)] = 7630,
  [SMALL_STATE(201)] = 7644,
  [SMALL_STATE(202)] = 7658,
  [SMALL_STATE(203)] = 7672,
  [SMALL_STATE(204)] = 7686,
  [SMALL_STATE(205)] = 7700,
  [SMALL_STATE(206)] = 7714,
  [SMALL_STATE(207)] = 7728,
  [SMALL_STATE(208)] = 7744,
  [SMALL_STATE(209)] = 7760,
  [SMALL_STATE(210)] = 7780,
  [SMALL_STATE(211)] = 7802,
  [SMALL_STATE(212)] = 7826,
  [SMALL_STATE(213)] = 7846,
  [SMALL_STATE(214)] = 7860,
  [SMALL_STATE(215)] = 7874,
  [SMALL_STATE(216)] = 7888,
  [SMALL_STATE(217)] = 7910,
  [SMALL_STATE(218)] = 7924,
  [SMALL_STATE(219)] = 7938,
  [SMALL_STATE(220)] = 7952,
  [SMALL_STATE(221)] = 7972,
  [SMALL_STATE(222)] = 7990,
  [SMALL_STATE(223)] = 8011,
  [SMALL_STATE(224)] = 8032,
  [SMALL_STATE(225)] = 8057,
  [SMALL_STATE(226)] = 8070,
  [SMALL_STATE(227)] = 8091,
  [SMALL_STATE(228)] = 8108,
  [SMALL_STATE(229)] = 8129,
  [SMALL_STATE(230)] = 8148,
  [SMALL_STATE(231)] = 8167,
  [SMALL_STATE(232)] = 8188,
  [SMALL_STATE(233)] = 8209,
  [SMALL_STATE(234)] = 8230,
  [SMALL_STATE(235)] = 8247,
  [SMALL_STATE(236)] = 8264,
  [SMALL_STATE(237)] = 8285,
  [SMALL_STATE(238)] = 8310,
  [SMALL_STATE(239)] = 8327,
  [SMALL_STATE(240)] = 8344,
  [SMALL_STATE(241)] = 8358,
  [SMALL_STATE(242)] = 8376,
  [SMALL_STATE(243)] = 8388,
  [SMALL_STATE(244)] = 8404,
  [SMALL_STATE(245)] = 8424,
  [SMALL_STATE(246)] = 8442,
  [SMALL_STATE(247)] = 8456,
  [SMALL_STATE(248)] = 8472,
  [SMALL_STATE(249)] = 8486,
  [SMALL_STATE(250)] = 8500,
  [SMALL_STATE(251)] = 8518,
  [SMALL_STATE(252)] = 8536,
  [SMALL_STATE(253)] = 8552,
  [SMALL_STATE(254)] = 8570,
  [SMALL_STATE(255)] = 8590,
  [SMALL_STATE(256)] = 8606,
  [SMALL_STATE(257)] = 8620,
  [SMALL_STATE(258)] = 8634,
  [SMALL_STATE(259)] = 8652,
  [SMALL_STATE(260)] = 8668,
  [SMALL_STATE(261)] = 8682,
  [SMALL_STATE(262)] = 8696,
  [SMALL_STATE(263)] = 8714,
  [SMALL_STATE(264)] = 8728,
  [SMALL_STATE(265)] = 8744,
  [SMALL_STATE(266)] = 8758,
  [SMALL_STATE(267)] = 8772,
  [SMALL_STATE(268)] = 8786,
  [SMALL_STATE(269)] = 8797,
  [SMALL_STATE(270)] = 8814,
  [SMALL_STATE(271)] = 8829,
  [SMALL_STATE(272)] = 8842,
  [SMALL_STATE(273)] = 8857,
  [SMALL_STATE(274)] = 8872,
  [SMALL_STATE(275)] = 8885,
  [SMALL_STATE(276)] = 8898,
  [SMALL_STATE(277)] = 8911,
  [SMALL_STATE(278)] = 8924,
  [SMALL_STATE(279)] = 8937,
  [SMALL_STATE(280)] = 8948,
  [SMALL_STATE(281)] = 8963,
  [SMALL_STATE(282)] = 8978,
  [SMALL_STATE(283)] = 8993,
  [SMALL_STATE(284)] = 9008,
  [SMALL_STATE(285)] = 9021,
  [SMALL_STATE(286)] = 9036,
  [SMALL_STATE(287)] = 9053,
  [SMALL_STATE(288)] = 9070,
  [SMALL_STATE(289)] = 9085,
  [SMALL_STATE(290)] = 9101,
  [SMALL_STATE(291)] = 9115,
  [SMALL_STATE(292)] = 9131,
  [SMALL_STATE(293)] = 9143,
  [SMALL_STATE(294)] = 9159,
  [SMALL_STATE(295)] = 9173,
  [SMALL_STATE(296)] = 9183,
  [SMALL_STATE(297)] = 9197,
  [SMALL_STATE(298)] = 9207,
  [SMALL_STATE(299)] = 9221,
  [SMALL_STATE(300)] = 9237,
  [SMALL_STATE(301)] = 9253,
  [SMALL_STATE(302)] = 9269,
  [SMALL_STATE(303)] = 9285,
  [SMALL_STATE(304)] = 9299,
  [SMALL_STATE(305)] = 9309,
  [SMALL_STATE(306)] = 9321,
  [SMALL_STATE(307)] = 9335,
  [SMALL_STATE(308)] = 9351,
  [SMALL_STATE(309)] = 9365,
  [SMALL_STATE(310)] = 9379,
  [SMALL_STATE(311)] = 9395,
  [SMALL_STATE(312)] = 9405,
  [SMALL_STATE(313)] = 9415,
  [SMALL_STATE(314)] = 9425,
  [SMALL_STATE(315)] = 9437,
  [SMALL_STATE(316)] = 9447,
  [SMALL_STATE(317)] = 9457,
  [SMALL_STATE(318)] = 9473,
  [SMALL_STATE(319)] = 9485,
  [SMALL_STATE(320)] = 9501,
  [SMALL_STATE(321)] = 9517,
  [SMALL_STATE(322)] = 9531,
  [SMALL_STATE(323)] = 9547,
  [SMALL_STATE(324)] = 9561,
  [SMALL_STATE(325)] = 9571,
  [SMALL_STATE(326)] = 9587,
  [SMALL_STATE(327)] = 9599,
  [SMALL_STATE(328)] = 9609,
  [SMALL_STATE(329)] = 9621,
  [SMALL_STATE(330)] = 9633,
  [SMALL_STATE(331)] = 9643,
  [SMALL_STATE(332)] = 9659,
  [SMALL_STATE(333)] = 9673,
  [SMALL_STATE(334)] = 9685,
  [SMALL_STATE(335)] = 9699,
  [SMALL_STATE(336)] = 9709,
  [SMALL_STATE(337)] = 9719,
  [SMALL_STATE(338)] = 9731,
  [SMALL_STATE(339)] = 9743,
  [SMALL_STATE(340)] = 9757,
  [SMALL_STATE(341)] = 9769,
  [SMALL_STATE(342)] = 9779,
  [SMALL_STATE(343)] = 9793,
  [SMALL_STATE(344)] = 9801,
  [SMALL_STATE(345)] = 9815,
  [SMALL_STATE(346)] = 9825,
  [SMALL_STATE(347)] = 9833,
  [SMALL_STATE(348)] = 9843,
  [SMALL_STATE(349)] = 9853,
  [SMALL_STATE(350)] = 9867,
  [SMALL_STATE(351)] = 9877,
  [SMALL_STATE(352)] = 9890,
  [SMALL_STATE(353)] = 9901,
  [SMALL_STATE(354)] = 9914,
  [SMALL_STATE(355)] = 9927,
  [SMALL_STATE(356)] = 9936,
  [SMALL_STATE(357)] = 9947,
  [SMALL_STATE(358)] = 9960,
  [SMALL_STATE(359)] = 9973,
  [SMALL_STATE(360)] = 9986,
  [SMALL_STATE(361)] = 9999,
  [SMALL_STATE(362)] = 10012,
  [SMALL_STATE(363)] = 10023,
  [SMALL_STATE(364)] = 10032,
  [SMALL_STATE(365)] = 10041,
  [SMALL_STATE(366)] = 10050,
  [SMALL_STATE(367)] = 10063,
  [SMALL_STATE(368)] = 10076,
  [SMALL_STATE(369)] = 10089,
  [SMALL_STATE(370)] = 10102,
  [SMALL_STATE(371)] = 10115,
  [SMALL_STATE(372)] = 10124,
  [SMALL_STATE(373)] = 10137,
  [SMALL_STATE(374)] = 10150,
  [SMALL_STATE(375)] = 10163,
  [SMALL_STATE(376)] = 10176,
  [SMALL_STATE(377)] = 10187,
  [SMALL_STATE(378)] = 10196,
  [SMALL_STATE(379)] = 10209,
  [SMALL_STATE(380)] = 10222,
  [SMALL_STATE(381)] = 10235,
  [SMALL_STATE(382)] = 10248,
  [SMALL_STATE(383)] = 10257,
  [SMALL_STATE(384)] = 10270,
  [SMALL_STATE(385)] = 10281,
  [SMALL_STATE(386)] = 10294,
  [SMALL_STATE(387)] = 10305,
  [SMALL_STATE(388)] = 10318,
  [SMALL_STATE(389)] = 10331,
  [SMALL_STATE(390)] = 10340,
  [SMALL_STATE(391)] = 10353,
  [SMALL_STATE(392)] = 10366,
  [SMALL_STATE(393)] = 10377,
  [SMALL_STATE(394)] = 10390,
  [SMALL_STATE(395)] = 10403,
  [SMALL_STATE(396)] = 10416,
  [SMALL_STATE(397)] = 10429,
  [SMALL_STATE(398)] = 10442,
  [SMALL_STATE(399)] = 10455,
  [SMALL_STATE(400)] = 10468,
  [SMALL_STATE(401)] = 10481,
  [SMALL_STATE(402)] = 10494,
  [SMALL_STATE(403)] = 10507,
  [SMALL_STATE(404)] = 10520,
  [SMALL_STATE(405)] = 10533,
  [SMALL_STATE(406)] = 10546,
  [SMALL_STATE(407)] = 10559,
  [SMALL_STATE(408)] = 10572,
  [SMALL_STATE(409)] = 10585,
  [SMALL_STATE(410)] = 10598,
  [SMALL_STATE(411)] = 10611,
  [SMALL_STATE(412)] = 10624,
  [SMALL_STATE(413)] = 10637,
  [SMALL_STATE(414)] = 10650,
  [SMALL_STATE(415)] = 10663,
  [SMALL_STATE(416)] = 10674,
  [SMALL_STATE(417)] = 10685,
  [SMALL_STATE(418)] = 10698,
  [SMALL_STATE(419)] = 10709,
  [SMALL_STATE(420)] = 10722,
  [SMALL_STATE(421)] = 10735,
  [SMALL_STATE(422)] = 10746,
  [SMALL_STATE(423)] = 10757,
  [SMALL_STATE(424)] = 10770,
  [SMALL_STATE(425)] = 10781,
  [SMALL_STATE(426)] = 10794,
  [SMALL_STATE(427)] = 10807,
  [SMALL_STATE(428)] = 10820,
  [SMALL_STATE(429)] = 10833,
  [SMALL_STATE(430)] = 10846,
  [SMALL_STATE(431)] = 10859,
  [SMALL_STATE(432)] = 10872,
  [SMALL_STATE(433)] = 10881,
  [SMALL_STATE(434)] = 10894,
  [SMALL_STATE(435)] = 10907,
  [SMALL_STATE(436)] = 10916,
  [SMALL_STATE(437)] = 10927,
  [SMALL_STATE(438)] = 10936,
  [SMALL_STATE(439)] = 10945,
  [SMALL_STATE(440)] = 10954,
  [SMALL_STATE(441)] = 10963,
  [SMALL_STATE(442)] = 10973,
  [SMALL_STATE(443)] = 10983,
  [SMALL_STATE(444)] = 10993,
  [SMALL_STATE(445)] = 11003,
  [SMALL_STATE(446)] = 11013,
  [SMALL_STATE(447)] = 11023,
  [SMALL_STATE(448)] = 11033,
  [SMALL_STATE(449)] = 11043,
  [SMALL_STATE(450)] = 11053,
  [SMALL_STATE(451)] = 11063,
  [SMALL_STATE(452)] = 11073,
  [SMALL_STATE(453)] = 11083,
  [SMALL_STATE(454)] = 11093,
  [SMALL_STATE(455)] = 11103,
  [SMALL_STATE(456)] = 11111,
  [SMALL_STATE(457)] = 11119,
  [SMALL_STATE(458)] = 11129,
  [SMALL_STATE(459)] = 11139,
  [SMALL_STATE(460)] = 11149,
  [SMALL_STATE(461)] = 11159,
  [SMALL_STATE(462)] = 11167,
  [SMALL_STATE(463)] = 11177,
  [SMALL_STATE(464)] = 11187,
  [SMALL_STATE(465)] = 11197,
  [SMALL_STATE(466)] = 11205,
  [SMALL_STATE(467)] = 11215,
  [SMALL_STATE(468)] = 11225,
  [SMALL_STATE(469)] = 11235,
  [SMALL_STATE(470)] = 11245,
  [SMALL_STATE(471)] = 11255,
  [SMALL_STATE(472)] = 11265,
  [SMALL_STATE(473)] = 11275,
  [SMALL_STATE(474)] = 11285,
  [SMALL_STATE(475)] = 11295,
  [SMALL_STATE(476)] = 11305,
  [SMALL_STATE(477)] = 11315,
  [SMALL_STATE(478)] = 11325,
  [SMALL_STATE(479)] = 11335,
  [SMALL_STATE(480)] = 11345,
  [SMALL_STATE(481)] = 11355,
  [SMALL_STATE(482)] = 11365,
  [SMALL_STATE(483)] = 11375,
  [SMALL_STATE(484)] = 11385,
  [SMALL_STATE(485)] = 11395,
  [SMALL_STATE(486)] = 11405,
  [SMALL_STATE(487)] = 11415,
  [SMALL_STATE(488)] = 11425,
  [SMALL_STATE(489)] = 11432,
  [SMALL_STATE(490)] = 11439,
  [SMALL_STATE(491)] = 11446,
  [SMALL_STATE(492)] = 11453,
  [SMALL_STATE(493)] = 11460,
  [SMALL_STATE(494)] = 11467,
  [SMALL_STATE(495)] = 11474,
  [SMALL_STATE(496)] = 11481,
  [SMALL_STATE(497)] = 11488,
  [SMALL_STATE(498)] = 11495,
  [SMALL_STATE(499)] = 11502,
  [SMALL_STATE(500)] = 11509,
  [SMALL_STATE(501)] = 11516,
  [SMALL_STATE(502)] = 11523,
  [SMALL_STATE(503)] = 11530,
  [SMALL_STATE(504)] = 11537,
  [SMALL_STATE(505)] = 11544,
  [SMALL_STATE(506)] = 11551,
  [SMALL_STATE(507)] = 11558,
  [SMALL_STATE(508)] = 11565,
  [SMALL_STATE(509)] = 11572,
  [SMALL_STATE(510)] = 11579,
  [SMALL_STATE(511)] = 11586,
  [SMALL_STATE(512)] = 11593,
  [SMALL_STATE(513)] = 11600,
  [SMALL_STATE(514)] = 11607,
  [SMALL_STATE(515)] = 11614,
  [SMALL_STATE(516)] = 11621,
  [SMALL_STATE(517)] = 11628,
  [SMALL_STATE(518)] = 11635,
  [SMALL_STATE(519)] = 11642,
  [SMALL_STATE(520)] = 11649,
  [SMALL_STATE(521)] = 11656,
  [SMALL_STATE(522)] = 11663,
  [SMALL_STATE(523)] = 11670,
  [SMALL_STATE(524)] = 11677,
  [SMALL_STATE(525)] = 11684,
  [SMALL_STATE(526)] = 11691,
  [SMALL_STATE(527)] = 11698,
  [SMALL_STATE(528)] = 11705,
  [SMALL_STATE(529)] = 11712,
  [SMALL_STATE(530)] = 11719,
  [SMALL_STATE(531)] = 11726,
  [SMALL_STATE(532)] = 11733,
  [SMALL_STATE(533)] = 11740,
  [SMALL_STATE(534)] = 11747,
  [SMALL_STATE(535)] = 11754,
  [SMALL_STATE(536)] = 11761,
  [SMALL_STATE(537)] = 11768,
  [SMALL_STATE(538)] = 11775,
  [SMALL_STATE(539)] = 11782,
  [SMALL_STATE(540)] = 11789,
  [SMALL_STATE(541)] = 11796,
  [SMALL_STATE(542)] = 11803,
  [SMALL_STATE(543)] = 11810,
  [SMALL_STATE(544)] = 11817,
  [SMALL_STATE(545)] = 11824,
  [SMALL_STATE(546)] = 11831,
  [SMALL_STATE(547)] = 11838,
  [SMALL_STATE(548)] = 11845,
  [SMALL_STATE(549)] = 11852,
  [SMALL_STATE(550)] = 11859,
  [SMALL_STATE(551)] = 11866,
  [SMALL_STATE(552)] = 11873,
  [SMALL_STATE(553)] = 11880,
  [SMALL_STATE(554)] = 11887,
  [SMALL_STATE(555)] = 11894,
  [SMALL_STATE(556)] = 11901,
  [SMALL_STATE(557)] = 11908,
  [SMALL_STATE(558)] = 11915,
  [SMALL_STATE(559)] = 11922,
  [SMALL_STATE(560)] = 11929,
  [SMALL_STATE(561)] = 11936,
  [SMALL_STATE(562)] = 11943,
  [SMALL_STATE(563)] = 11950,
  [SMALL_STATE(564)] = 11957,
  [SMALL_STATE(565)] = 11964,
  [SMALL_STATE(566)] = 11971,
  [SMALL_STATE(567)] = 11978,
  [SMALL_STATE(568)] = 11985,
  [SMALL_STATE(569)] = 11992,
  [SMALL_STATE(570)] = 11999,
  [SMALL_STATE(571)] = 12006,
  [SMALL_STATE(572)] = 12013,
  [SMALL_STATE(573)] = 12020,
  [SMALL_STATE(574)] = 12027,
  [SMALL_STATE(575)] = 12034,
  [SMALL_STATE(576)] = 12041,
  [SMALL_STATE(577)] = 12048,
  [SMALL_STATE(578)] = 12055,
  [SMALL_STATE(579)] = 12062,
  [SMALL_STATE(580)] = 12069,
  [SMALL_STATE(581)] = 12076,
  [SMALL_STATE(582)] = 12083,
  [SMALL_STATE(583)] = 12090,
  [SMALL_STATE(584)] = 12097,
  [SMALL_STATE(585)] = 12104,
  [SMALL_STATE(586)] = 12111,
  [SMALL_STATE(587)] = 12118,
  [SMALL_STATE(588)] = 12125,
  [SMALL_STATE(589)] = 12132,
  [SMALL_STATE(590)] = 12139,
  [SMALL_STATE(591)] = 12146,
  [SMALL_STATE(592)] = 12153,
  [SMALL_STATE(593)] = 12160,
  [SMALL_STATE(594)] = 12167,
  [SMALL_STATE(595)] = 12174,
  [SMALL_STATE(596)] = 12181,
  [SMALL_STATE(597)] = 12188,
  [SMALL_STATE(598)] = 12195,
  [SMALL_STATE(599)] = 12202,
  [SMALL_STATE(600)] = 12209,
  [SMALL_STATE(601)] = 12216,
  [SMALL_STATE(602)] = 12223,
  [SMALL_STATE(603)] = 12230,
  [SMALL_STATE(604)] = 12237,
  [SMALL_STATE(605)] = 12244,
  [SMALL_STATE(606)] = 12251,
  [SMALL_STATE(607)] = 12258,
  [SMALL_STATE(608)] = 12265,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hurl_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(324),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 3),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [17] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 3),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(394),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(373),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(413),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(414),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(425),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(429),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(493),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(494),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(495),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(306),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(235),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(496),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(238),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(237),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(431),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(498),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(499),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(268),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 2),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 2),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 4),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 4),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 5),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 5),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response, 4),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_response, 4),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(351),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(427),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response, 3),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_response, 3),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__comment_or_new_line, 1),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__comment_or_new_line, 1),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__comment_or_new_line_repeat1, 2),
  [99] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__comment_or_new_line_repeat1, 2), SHIFT_REPEAT(12),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__comment_or_new_line_repeat1, 2),
  [104] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__comment_or_new_line_repeat1, 2), SHIFT_REPEAT(12),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_options_section_repeat1, 2),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_options_section_repeat1, 2),
  [111] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_options_section_repeat1, 2), SHIFT_REPEAT(588),
  [114] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_options_section_repeat1, 2), SHIFT_REPEAT(592),
  [117] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_options_section_repeat1, 2), SHIFT_REPEAT(593),
  [120] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_options_section_repeat1, 2), SHIFT_REPEAT(595),
  [123] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_options_section_repeat1, 2), SHIFT_REPEAT(596),
  [126] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_options_section_repeat1, 2), SHIFT_REPEAT(598),
  [129] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_options_section_repeat1, 2), SHIFT_REPEAT(559),
  [132] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_options_section_repeat1, 2), SHIFT_REPEAT(549),
  [135] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_options_section_repeat1, 2), SHIFT_REPEAT(608),
  [138] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_options_section_repeat1, 2), SHIFT_REPEAT(607),
  [141] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_options_section_repeat1, 2), SHIFT_REPEAT(606),
  [144] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_options_section_repeat1, 2), SHIFT_REPEAT(605),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_options_section, 2),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_options_section, 2),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(588),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(592),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(593),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(595),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(596),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(598),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(559),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(549),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(608),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(607),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(606),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(605),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_options_section, 3),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_options_section, 3),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_asserts_section_repeat1, 2),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_asserts_section_repeat1, 2),
  [183] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_asserts_section_repeat1, 2), SHIFT_REPEAT(459),
  [186] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_asserts_section_repeat1, 2), SHIFT_REPEAT(95),
  [189] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_asserts_section_repeat1, 2), SHIFT_REPEAT(94),
  [192] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_asserts_section_repeat1, 2), SHIFT_REPEAT(460),
  [195] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_asserts_section_repeat1, 2), SHIFT_REPEAT(462),
  [198] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_asserts_section_repeat1, 2), SHIFT_REPEAT(92),
  [201] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_asserts_section_repeat1, 2), SHIFT_REPEAT(463),
  [204] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_asserts_section_repeat1, 2), SHIFT_REPEAT(464),
  [207] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_asserts_section_repeat1, 2), SHIFT_REPEAT(303),
  [210] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_asserts_section_repeat1, 2), SHIFT_REPEAT(86),
  [213] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_asserts_section_repeat1, 2), SHIFT_REPEAT(85),
  [216] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_asserts_section_repeat1, 2), SHIFT_REPEAT(97),
  [219] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_asserts_section_repeat1, 2), SHIFT_REPEAT(96),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_asserts_section, 3),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_asserts_section, 3),
  [226] = {.entry = {.count = 1, .reusable = false}}, SHIFT(459),
  [228] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [230] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [232] = {.entry = {.count = 1, .reusable = false}}, SHIFT(460),
  [234] = {.entry = {.count = 1, .reusable = false}}, SHIFT(462),
  [236] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [238] = {.entry = {.count = 1, .reusable = false}}, SHIFT(463),
  [240] = {.entry = {.count = 1, .reusable = false}}, SHIFT(464),
  [242] = {.entry = {.count = 1, .reusable = false}}, SHIFT(303),
  [244] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [246] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [248] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [250] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_asserts_section, 2),
  [254] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_asserts_section, 2),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response, 5),
  [258] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_response, 5),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [262] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [268] = {.entry = {.count = 1, .reusable = false}}, SHIFT(228),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [272] = {.entry = {.count = 1, .reusable = false}}, SHIFT(231),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(479),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(532),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(531),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(530),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(529),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(528),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(527),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_max_redirs_option, 4),
  [312] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_max_redirs_option, 4),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_very_verbose_option, 4),
  [316] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_very_verbose_option, 4),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ca_certificate_option, 3),
  [320] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ca_certificate_option, 3),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option, 1),
  [324] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_option, 1),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ca_certificate_option, 4),
  [328] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ca_certificate_option, 4),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compressed_option, 4),
  [332] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_compressed_option, 4),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_follow_redirect_option, 4),
  [336] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_follow_redirect_option, 4),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insecure_option, 4),
  [340] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_insecure_option, 4),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path_as_is_option, 4),
  [344] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path_as_is_option, 4),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_retry_option, 4),
  [348] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_retry_option, 4),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_retry_interval_option, 4),
  [352] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_retry_interval_option, 4),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_retry_max_count_option, 4),
  [356] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_retry_max_count_option, 4),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_verbose_option, 4),
  [360] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_verbose_option, 4),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_option, 4),
  [364] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_option, 4),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multipart_form_data_section, 5),
  [368] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multipart_form_data_section, 5),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multipart_form_data_section, 4),
  [374] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multipart_form_data_section, 4),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multipart_form_data_section, 3),
  [378] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multipart_form_data_section, 3),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_request_repeat1, 2),
  [382] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_request_repeat1, 2),
  [384] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat1, 2), SHIFT_REPEAT(235),
  [387] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_request_repeat1, 2), SHIFT_REPEAT(496),
  [390] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_request_repeat1, 2), SHIFT_REPEAT(402),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_string_params_section, 3),
  [395] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query_string_params_section, 3),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_form_params_section, 3),
  [399] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_form_params_section, 3),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_string_params_section, 5),
  [403] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query_string_params_section, 5),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_form_params_section, 5),
  [407] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_form_params_section, 5),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cookies_section, 4),
  [411] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cookies_section, 4),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cookies_section, 3),
  [415] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cookies_section, 3),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cookies_section, 5),
  [419] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cookies_section, 5),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_string_params_section, 4),
  [423] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query_string_params_section, 4),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_form_params_section, 4),
  [427] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_form_params_section, 4),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_request_repeat2, 2),
  [431] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_request_repeat2, 2),
  [433] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat2, 2), SHIFT_REPEAT(394),
  [436] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat2, 2), SHIFT_REPEAT(373),
  [439] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat2, 2), SHIFT_REPEAT(413),
  [442] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat2, 2), SHIFT_REPEAT(414),
  [445] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat2, 2), SHIFT_REPEAT(425),
  [448] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat2, 2), SHIFT_REPEAT(429),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_hurl_file_repeat2, 2),
  [453] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_hurl_file_repeat2, 2), SHIFT_REPEAT(55),
  [456] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_hurl_file_repeat2, 2),
  [458] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_hurl_file_repeat2, 2), SHIFT_REPEAT(55),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assert, 3),
  [463] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assert, 3),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assert, 4),
  [467] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assert, 4),
  [469] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__comment_or_new_line_repeat1, 2), SHIFT_REPEAT(54),
  [472] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__comment_or_new_line_repeat1, 2), SHIFT_REPEAT(54),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [477] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 2),
  [481] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 2),
  [483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_captures_section, 3),
  [485] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_captures_section, 3),
  [487] = {.entry = {.count = 1, .reusable = false}}, SHIFT(267),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(539),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_captures_section_repeat1, 2),
  [495] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_captures_section_repeat1, 2),
  [497] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_captures_section_repeat1, 2), SHIFT_REPEAT(267),
  [500] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_captures_section_repeat1, 2), SHIFT_REPEAT(539),
  [503] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_captures_section_repeat1, 2), SHIFT_REPEAT(391),
  [506] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_captures_section, 2),
  [508] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_captures_section, 2),
  [510] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request_section, 1),
  [512] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request_section, 1),
  [514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_basic_auth_section, 4),
  [516] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_basic_auth_section, 4),
  [518] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_capture_repeat1, 2), SHIFT_REPEAT(332),
  [521] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_capture_repeat1, 2),
  [523] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_capture_repeat1, 2),
  [525] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_capture_repeat1, 2), SHIFT_REPEAT(79),
  [528] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_capture_repeat1, 2), SHIFT_REPEAT(80),
  [531] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_capture_repeat1, 2), SHIFT_REPEAT(81),
  [534] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_capture_repeat1, 2), SHIFT_REPEAT(82),
  [537] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_capture_repeat1, 2), SHIFT_REPEAT(83),
  [540] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_capture_repeat1, 2), SHIFT_REPEAT(72),
  [543] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_response_repeat1, 2),
  [545] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_response_repeat1, 2),
  [547] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_response_repeat1, 2), SHIFT_REPEAT(351),
  [550] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_response_repeat1, 2), SHIFT_REPEAT(427),
  [553] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__comment_or_new_line_repeat1, 2), SHIFT_REPEAT(66),
  [556] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__comment_or_new_line_repeat1, 2), SHIFT_REPEAT(66),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [561] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [563] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_capture, 4),
  [565] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_capture, 4),
  [567] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_capture, 5),
  [569] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_capture, 5),
  [571] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response_section, 1),
  [573] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_response_section, 1),
  [575] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_to_int_filter, 1),
  [577] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_to_int_filter, 1),
  [579] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regex_filter, 2),
  [581] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_regex_filter, 2),
  [583] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regex, 3),
  [585] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_regex, 3),
  [587] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regex, 2),
  [589] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_regex, 2),
  [591] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_string, 2),
  [593] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_string, 2),
  [595] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filter, 1),
  [597] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_filter, 1),
  [599] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_string, 3),
  [601] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_string, 3),
  [603] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_count_filter, 1),
  [605] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_count_filter, 1),
  [607] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url_encode_filter, 1),
  [609] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_url_encode_filter, 1),
  [611] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url_decode_filter, 1),
  [613] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_url_decode_filter, 1),
  [615] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_html_encode_filter, 1),
  [617] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_html_encode_filter, 1),
  [619] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_html_decode_filter, 1),
  [621] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_html_decode_filter, 1),
  [623] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_query, 2),
  [625] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_query, 2),
  [627] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sha256_query, 1),
  [629] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sha256_query, 1),
  [631] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_duration_query, 1),
  [633] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_duration_query, 1),
  [635] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regex_query, 2),
  [637] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_regex_query, 2),
  [639] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jsonpath_query, 2),
  [641] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_jsonpath_query, 2),
  [643] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xpath_query, 2),
  [645] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xpath_query, 2),
  [647] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cookie_query, 2),
  [649] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cookie_query, 2),
  [651] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_query, 2),
  [653] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header_query, 2),
  [655] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body_query, 1),
  [657] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_body_query, 1),
  [659] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query, 1),
  [661] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query, 1),
  [663] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url_query, 1),
  [665] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_url_query, 1),
  [667] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_status_query, 1),
  [669] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_status_query, 1),
  [671] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bytes_query, 1),
  [673] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bytes_query, 1),
  [675] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_md5_query, 1),
  [677] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_md5_query, 1),
  [679] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entry, 1),
  [681] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_entry, 1),
  [683] = {.entry = {.count = 1, .reusable = false}}, SHIFT(465),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(457),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(454),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(453),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(449),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(446),
  [701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [711] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hurl_file, 1),
  [713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(495),
  [717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(498),
  [725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(499),
  [727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [729] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 6),
  [731] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 6),
  [733] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 2),
  [735] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_body, 2),
  [737] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_key_value, 2),
  [739] = {.entry = {.count = 1, .reusable = false}}, SHIFT(221),
  [741] = {.entry = {.count = 1, .reusable = false}}, SHIFT(288),
  [743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [745] = {.entry = {.count = 1, .reusable = false}}, SHIFT(248),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(566),
  [749] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_hurl_file_repeat1, 2),
  [751] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_hurl_file_repeat1, 2), SHIFT_REPEAT(324),
  [754] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_hurl_file_repeat1, 2),
  [756] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entry, 2),
  [758] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_entry, 2),
  [760] = {.entry = {.count = 1, .reusable = false}}, SHIFT(580),
  [762] = {.entry = {.count = 1, .reusable = false}}, SHIFT(600),
  [764] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [766] = {.entry = {.count = 1, .reusable = false}}, SHIFT(229),
  [768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [770] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [772] = {.entry = {.count = 1, .reusable = false}}, SHIFT(582),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [776] = {.entry = {.count = 1, .reusable = false}}, SHIFT(224),
  [778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(440),
  [784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
  [786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [790] = {.entry = {.count = 1, .reusable = false}}, SHIFT(323),
  [792] = {.entry = {.count = 1, .reusable = false}}, SHIFT(219),
  [794] = {.entry = {.count = 1, .reusable = false}}, SHIFT(218),
  [796] = {.entry = {.count = 1, .reusable = false}}, SHIFT(217),
  [798] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [800] = {.entry = {.count = 1, .reusable = false}}, SHIFT(215),
  [802] = {.entry = {.count = 1, .reusable = false}}, SHIFT(214),
  [804] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [806] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_xml_tag_repeat1, 2), SHIFT_REPEAT(493),
  [809] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_xml_tag_repeat1, 2), SHIFT_REPEAT(580),
  [812] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_xml_tag_repeat1, 2),
  [814] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_xml_tag_repeat1, 2), SHIFT_REPEAT(193),
  [817] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_xml_tag_repeat1, 2), SHIFT_REPEAT(229),
  [820] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_xml_tag_repeat1, 2), SHIFT_REPEAT(405),
  [823] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response, 6),
  [825] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_response, 6),
  [827] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entry, 3),
  [829] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_entry, 3),
  [831] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 2),
  [833] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 1),
  [835] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_capture_repeat1, 2), SHIFT_REPEAT(323),
  [838] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_capture_repeat1, 2), SHIFT_REPEAT(219),
  [841] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_capture_repeat1, 2), SHIFT_REPEAT(218),
  [844] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_capture_repeat1, 2), SHIFT_REPEAT(217),
  [847] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_capture_repeat1, 2), SHIFT_REPEAT(181),
  [850] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_capture_repeat1, 2), SHIFT_REPEAT(215),
  [853] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_capture_repeat1, 2), SHIFT_REPEAT(214),
  [856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [858] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_value_string_repeat1, 2),
  [860] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_string_repeat1, 2), SHIFT_REPEAT(193),
  [863] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_string_repeat1, 2), SHIFT_REPEAT(229),
  [866] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_value_string_repeat1, 2), SHIFT_REPEAT(405),
  [869] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_string, 1),
  [871] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_string, 1),
  [873] = {.entry = {.count = 1, .reusable = false}}, SHIFT(376),
  [875] = {.entry = {.count = 1, .reusable = false}}, SHIFT(242),
  [877] = {.entry = {.count = 1, .reusable = false}}, SHIFT(390),
  [879] = {.entry = {.count = 1, .reusable = false}}, SHIFT(280),
  [881] = {.entry = {.count = 1, .reusable = false}}, SHIFT(207),
  [883] = {.entry = {.count = 1, .reusable = false}}, SHIFT(562),
  [885] = {.entry = {.count = 1, .reusable = false}}, SHIFT(209),
  [887] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [889] = {.entry = {.count = 1, .reusable = false}}, SHIFT(270),
  [891] = {.entry = {.count = 1, .reusable = false}}, SHIFT(542),
  [893] = {.entry = {.count = 1, .reusable = false}}, SHIFT(273),
  [895] = {.entry = {.count = 1, .reusable = false}}, SHIFT(597),
  [897] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multiline_string_repeat1, 2), SHIFT_REPEAT(211),
  [900] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multiline_string_repeat1, 2), SHIFT_REPEAT(207),
  [903] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_multiline_string_repeat1, 2),
  [905] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multiline_string_repeat1, 2), SHIFT_REPEAT(209),
  [908] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_multiline_string_repeat1, 2), SHIFT_REPEAT(395),
  [911] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_quoted_string_repeat1, 2),
  [913] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_string_repeat1, 2), SHIFT_REPEAT(304),
  [916] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_string_repeat1, 2), SHIFT_REPEAT(165),
  [919] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_string_repeat1, 2), SHIFT_REPEAT(393),
  [922] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [924] = {.entry = {.count = 1, .reusable = false}}, SHIFT(304),
  [926] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [928] = {.entry = {.count = 1, .reusable = false}}, SHIFT(393),
  [930] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [932] = {.entry = {.count = 1, .reusable = false}}, SHIFT(205),
  [934] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [936] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_string_repeat1, 2), SHIFT_REPEAT(221),
  [939] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_string_repeat1, 2), SHIFT_REPEAT(288),
  [942] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_value_string_repeat1, 2), SHIFT_REPEAT(357),
  [945] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_key_string_repeat1, 2),
  [947] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_key_string_repeat1, 2),
  [949] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_string_repeat1, 2), SHIFT_REPEAT(235),
  [952] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_string_repeat1, 2), SHIFT_REPEAT(496),
  [955] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_string_repeat1, 2), SHIFT_REPEAT(402),
  [958] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_oneline_string_repeat1, 2), SHIFT_REPEAT(243),
  [961] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_oneline_string_repeat1, 2),
  [963] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_oneline_string_repeat1, 2), SHIFT_REPEAT(546),
  [966] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_oneline_string_repeat1, 2), SHIFT_REPEAT(411),
  [969] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_string, 1),
  [971] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_key_string, 1),
  [973] = {.entry = {.count = 1, .reusable = false}}, SHIFT(243),
  [975] = {.entry = {.count = 1, .reusable = false}}, SHIFT(544),
  [977] = {.entry = {.count = 1, .reusable = false}}, SHIFT(546),
  [979] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [981] = {.entry = {.count = 1, .reusable = false}}, SHIFT(599),
  [983] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_string_content, 1),
  [985] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_string_content, 1),
  [987] = {.entry = {.count = 1, .reusable = false}}, SHIFT(533),
  [989] = {.entry = {.count = 1, .reusable = false}}, SHIFT(356),
  [991] = {.entry = {.count = 1, .reusable = false}}, SHIFT(263),
  [993] = {.entry = {.count = 1, .reusable = false}}, SHIFT(434),
  [995] = {.entry = {.count = 1, .reusable = false}}, SHIFT(381),
  [997] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_value_string_content_repeat1, 2),
  [999] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_string_content_repeat1, 2), SHIFT_REPEAT(193),
  [1002] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_string_content_repeat1, 2), SHIFT_REPEAT(229),
  [1005] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_value_string_content_repeat1, 2),
  [1007] = {.entry = {.count = 1, .reusable = false}}, SHIFT(541),
  [1009] = {.entry = {.count = 1, .reusable = false}}, SHIFT(208),
  [1011] = {.entry = {.count = 1, .reusable = false}}, SHIFT(328),
  [1013] = {.entry = {.count = 1, .reusable = true}}, SHIFT(428),
  [1015] = {.entry = {.count = 1, .reusable = false}}, SHIFT(312),
  [1017] = {.entry = {.count = 1, .reusable = false}}, SHIFT(313),
  [1019] = {.entry = {.count = 1, .reusable = false}}, SHIFT(477),
  [1021] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer, 1),
  [1023] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_filename, 1),
  [1025] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_string_repeat1, 2), SHIFT_REPEAT(267),
  [1028] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_string_repeat1, 2), SHIFT_REPEAT(539),
  [1031] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_string_repeat1, 2), SHIFT_REPEAT(391),
  [1034] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_integer_repeat1, 2),
  [1036] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_integer_repeat1, 2), SHIFT_REPEAT(225),
  [1039] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_filename_repeat1, 2),
  [1041] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_filename_repeat1, 2), SHIFT_REPEAT(376),
  [1044] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_filename_repeat1, 2), SHIFT_REPEAT(242),
  [1047] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_filename_repeat1, 2), SHIFT_REPEAT(390),
  [1050] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [1052] = {.entry = {.count = 1, .reusable = false}}, SHIFT(601),
  [1054] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_string_repeat1, 2), SHIFT_REPEAT(248),
  [1057] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_string_repeat1, 2), SHIFT_REPEAT(566),
  [1060] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_string_repeat1, 2), SHIFT_REPEAT(431),
  [1063] = {.entry = {.count = 1, .reusable = false}}, SHIFT(330),
  [1065] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [1067] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_name, 2),
  [1069] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_json_string_repeat1, 2),
  [1071] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_string_repeat1, 2), SHIFT_REPEAT(208),
  [1074] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_string_repeat1, 2), SHIFT_REPEAT(328),
  [1077] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_json_string_repeat1, 2), SHIFT_REPEAT(428),
  [1080] = {.entry = {.count = 1, .reusable = false}}, SHIFT(347),
  [1082] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_filename_repeat1, 2), SHIFT_REPEAT(356),
  [1085] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_filename_repeat1, 2), SHIFT_REPEAT(263),
  [1088] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_filename_repeat1, 2), SHIFT_REPEAT(434),
  [1091] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_number, 1),
  [1093] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [1095] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [1097] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fraction, 2),
  [1099] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__multiline_string_text_repeat1, 2),
  [1101] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__multiline_string_text_repeat1, 2), SHIFT_REPEAT(189),
  [1104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__multiline_string_text_repeat1, 2),
  [1106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [1108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(484),
  [1110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(261),
  [1112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__multiline_string_text, 2),
  [1114] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [1116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multiline_string_text, 2),
  [1118] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multiline_string_content_repeat1, 2), SHIFT_REPEAT(199),
  [1121] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multiline_string_content_repeat1, 2), SHIFT_REPEAT(207),
  [1124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_multiline_string_content_repeat1, 2),
  [1126] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multiline_string_content_repeat1, 2), SHIFT_REPEAT(209),
  [1129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_multiline_string_content_repeat1, 2),
  [1131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [1133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(451),
  [1135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [1137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(474),
  [1139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__multiline_string_text, 1),
  [1141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(198),
  [1143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multiline_string_text, 1),
  [1145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [1147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline_string_content, 1),
  [1149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_string_content, 1),
  [1151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_string_content, 1),
  [1153] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_string_content_repeat1, 2), SHIFT_REPEAT(221),
  [1156] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_string_content_repeat1, 2), SHIFT_REPEAT(288),
  [1159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_quoted_string_content_repeat1, 2),
  [1161] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_string_content_repeat1, 2), SHIFT_REPEAT(304),
  [1164] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_string_content_repeat1, 2), SHIFT_REPEAT(165),
  [1167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [1169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(473),
  [1171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(345),
  [1173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(584),
  [1175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [1177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(432),
  [1179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [1181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [1183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_digit, 1),
  [1185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_key_string_content_repeat1, 2),
  [1187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_key_string_content_repeat1, 2),
  [1189] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_string_content_repeat1, 2), SHIFT_REPEAT(226),
  [1192] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_string_content_repeat1, 2), SHIFT_REPEAT(496),
  [1195] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_integer_repeat1, 2), SHIFT_REPEAT(268),
  [1198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_integer_repeat1, 2),
  [1200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_string_text, 1),
  [1202] = {.entry = {.count = 1, .reusable = false}}, SHIFT(230),
  [1204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_string_text, 1),
  [1206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_value_string_text_repeat1, 2),
  [1208] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_string_text_repeat1, 2), SHIFT_REPEAT(230),
  [1211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_value_string_text_repeat1, 2),
  [1213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [1215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer, 1),
  [1217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_string_content, 1),
  [1219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_key_string_content, 1),
  [1221] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_oneline_string_content_repeat1, 2), SHIFT_REPEAT(243),
  [1224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_oneline_string_content_repeat1, 2),
  [1226] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_oneline_string_content_repeat1, 2), SHIFT_REPEAT(546),
  [1229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_oneline_string_content_repeat1, 2),
  [1231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(492),
  [1233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [1235] = {.entry = {.count = 1, .reusable = false}}, SHIFT(547),
  [1237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneline_string_content, 1),
  [1239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneline_string_content, 1),
  [1241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unicode_char, 6),
  [1243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unicode_char, 6),
  [1245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_filename_content, 1),
  [1247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [1249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(469),
  [1251] = {.entry = {.count = 1, .reusable = false}}, SHIFT(338),
  [1253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(494),
  [1255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_regex_content, 1),
  [1257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_template, 3),
  [1259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template, 3),
  [1261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exponent, 3),
  [1263] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xml_close_tag, 3),
  [1265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xml_close_tag, 3),
  [1267] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_regex_content_repeat1, 2), SHIFT_REPEAT(584),
  [1270] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_regex_content_repeat1, 2),
  [1272] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_regex_content_repeat1, 2), SHIFT_REPEAT(432),
  [1275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_filename_content_repeat1, 2),
  [1277] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_filename_content_repeat1, 2), SHIFT_REPEAT(376),
  [1280] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_filename_content_repeat1, 2), SHIFT_REPEAT(252),
  [1283] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_string_content_repeat1, 2), SHIFT_REPEAT(253),
  [1286] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_string_content_repeat1, 2), SHIFT_REPEAT(566),
  [1289] = {.entry = {.count = 1, .reusable = false}}, SHIFT(392),
  [1291] = {.entry = {.count = 1, .reusable = false}}, SHIFT(283),
  [1293] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_number, 1),
  [1295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_number, 2),
  [1297] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_string_escaped_char, 3),
  [1299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_string_escaped_char, 3),
  [1301] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xml_tag, 3),
  [1303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xml_tag, 3),
  [1305] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_string_content_repeat1, 2), SHIFT_REPEAT(258),
  [1308] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_string_content_repeat1, 2), SHIFT_REPEAT(539),
  [1311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exponent, 2),
  [1313] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xml_open_tag, 3),
  [1315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xml_open_tag, 3),
  [1317] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_string_escaped_char, 2),
  [1319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_string_escaped_char, 2),
  [1321] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_filename_content_repeat1, 2), SHIFT_REPEAT(356),
  [1324] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_filename_content_repeat1, 2), SHIFT_REPEAT(262),
  [1327] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fraction, 2),
  [1329] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xml_tag, 2),
  [1331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xml_tag, 2),
  [1333] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xml_prolog_tag, 3),
  [1335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xml_prolog_tag, 3),
  [1337] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_digit, 1),
  [1339] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_multiline_string_content_repeat1, 1),
  [1341] = {.entry = {.count = 1, .reusable = false}}, SHIFT(517),
  [1343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_multiline_string_content_repeat1, 1),
  [1345] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline_string_escaped_char, 3),
  [1347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_string_escaped_char, 3),
  [1349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [1351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_string_escaped_char, 2),
  [1353] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_key_string_escaped_char, 2),
  [1355] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline_string_escaped_char, 2),
  [1357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_string_escaped_char, 2),
  [1359] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__comment_or_new_line_repeat1, 2), SHIFT_REPEAT(281),
  [1362] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__comment_or_new_line_repeat1, 2), SHIFT_REPEAT(281),
  [1365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [1367] = {.entry = {.count = 1, .reusable = false}}, SHIFT(281),
  [1369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [1371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_value, 1),
  [1373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_key_string_repeat1, 1),
  [1375] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_value, 1),
  [1377] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_string_text_repeat1, 2), SHIFT_REPEAT(285),
  [1380] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_hurl_file_repeat2, 2), SHIFT_REPEAT(11),
  [1383] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_hurl_file_repeat2, 2), SHIFT_REPEAT(11),
  [1386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hurl_file, 2),
  [1388] = {.entry = {.count = 1, .reusable = false}}, SHIFT(285),
  [1390] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_exponent, 2),
  [1392] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_query_string_params_section_repeat1, 2), SHIFT_REPEAT(282),
  [1395] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_string_params_section_repeat1, 2), SHIFT_REPEAT(282),
  [1398] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_exponent, 3),
  [1400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [1402] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_number, 2),
  [1404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [1406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [1408] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_string_text, 1),
  [1410] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_string_content, 1),
  [1412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_string_content, 1),
  [1414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(540),
  [1416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [1418] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_string_escaped_char, 3),
  [1420] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_string_escaped_char, 2),
  [1422] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_invalid_quoted_string_escaped_char, 2),
  [1424] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_string_escaped_char, 6),
  [1426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_string_escaped_char, 6),
  [1428] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_xml_repeat1, 2),
  [1430] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_xml_repeat1, 2), SHIFT_REPEAT(494),
  [1433] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_method, 1),
  [1435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method, 1),
  [1437] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_multipart_form_data_section_repeat1, 2), SHIFT_REPEAT(282),
  [1440] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multipart_form_data_section_repeat1, 2), SHIFT_REPEAT(282),
  [1443] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_string_text, 1),
  [1445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_string_text, 1),
  [1447] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hexdigit, 1),
  [1449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hexdigit, 1),
  [1451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_string, 2),
  [1453] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneline_string_escaped_char, 3),
  [1455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneline_string_escaped_char, 3),
  [1457] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneline_string_text, 2),
  [1459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneline_string_text, 2),
  [1461] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneline_string_escaped_char, 2),
  [1463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneline_string_escaped_char, 2),
  [1465] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_string_escaped_char, 2),
  [1467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_string_escaped_char, 2),
  [1469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_oneline_hex_repeat1, 2),
  [1471] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_oneline_hex_repeat1, 2), SHIFT_REPEAT(355),
  [1474] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_filename_escaped_char, 2),
  [1476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_string, 3),
  [1478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(602),
  [1480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [1482] = {.entry = {.count = 1, .reusable = false}}, SHIFT(348),
  [1484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(491),
  [1486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_array, 3),
  [1488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_object, 3),
  [1490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_number, 3),
  [1492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [1494] = {.entry = {.count = 1, .reusable = false}}, SHIFT(282),
  [1496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [1498] = {.entry = {.count = 1, .reusable = false}}, SHIFT(346),
  [1500] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_regex_escaped_char, 2),
  [1502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [1504] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_value, 2),
  [1506] = {.entry = {.count = 1, .reusable = false}}, SHIFT(503),
  [1508] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_file_value, 2),
  [1510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(594),
  [1512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [1514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [1516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(490),
  [1518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(591),
  [1520] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_object, 2),
  [1522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(560),
  [1524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [1526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(437),
  [1528] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_json_array_repeat1, 2), SHIFT_REPEAT(115),
  [1531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_json_array_repeat1, 2),
  [1533] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_predicate_value, 1),
  [1535] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_predicate_value, 1),
  [1537] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_json_object_repeat1, 2),
  [1539] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_json_object_repeat1, 2), SHIFT_REPEAT(310),
  [1542] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_greater_predicate, 2),
  [1544] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_greater_predicate, 2),
  [1546] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_greater_or_equal_predicate, 2),
  [1548] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_greater_or_equal_predicate, 2),
  [1550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(488),
  [1552] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_less_predicate, 2),
  [1554] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_less_predicate, 2),
  [1556] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_less_or_equal_predicate, 2),
  [1558] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_less_or_equal_predicate, 2),
  [1560] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_value, 3),
  [1562] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_file_value, 3),
  [1564] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_value, 1),
  [1566] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_value, 1),
  [1568] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_regex_text, 1),
  [1570] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_value, 3),
  [1572] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_key_value, 3),
  [1574] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_array, 4),
  [1576] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_object, 4),
  [1578] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_null, 1),
  [1580] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [1582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [1584] = {.entry = {.count = 1, .reusable = false}}, SHIFT(447),
  [1586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [1588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(486),
  [1590] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_key_value, 3),
  [1592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [1594] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version, 1),
  [1596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(482),
  [1598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(468),
  [1600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(471),
  [1602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(485),
  [1604] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_array, 4),
  [1606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [1608] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_status, 1),
  [1610] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_status, 1),
  [1612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [1614] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_object, 2),
  [1616] = {.entry = {.count = 1, .reusable = false}}, SHIFT(535),
  [1618] = {.entry = {.count = 1, .reusable = false}}, SHIFT(536),
  [1620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(538),
  [1622] = {.entry = {.count = 1, .reusable = false}}, SHIFT(276),
  [1624] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_value, 4),
  [1626] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_file_value, 4),
  [1628] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1),
  [1630] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_null, 1),
  [1632] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 3),
  [1634] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_definition, 3),
  [1636] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_contenttype, 1),
  [1638] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_file_contenttype, 1),
  [1640] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_predicate, 2),
  [1642] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_include_predicate, 2),
  [1644] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_match_predicate, 2),
  [1646] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_match_predicate, 2),
  [1648] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contain_predicate, 2),
  [1650] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_contain_predicate, 2),
  [1652] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_end_with_predicate, 2),
  [1654] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_end_with_predicate, 2),
  [1656] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_with_predicate, 2),
  [1658] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_with_predicate, 2),
  [1660] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_not_equal_predicate, 2),
  [1662] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_not_equal_predicate, 2),
  [1664] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_equal_predicate, 2),
  [1666] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_equal_predicate, 2),
  [1668] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_predicate, 2),
  [1670] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_predicate, 2),
  [1672] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_string, 6),
  [1674] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline_string, 6),
  [1676] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bytes, 1),
  [1678] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bytes, 1),
  [1680] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xml, 1),
  [1682] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xml, 1),
  [1684] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_param, 4),
  [1686] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_file_param, 4),
  [1688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [1690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [1692] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_predicate_func, 1),
  [1694] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_predicate_func, 1),
  [1696] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_predicate, 1),
  [1698] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_predicate, 1),
  [1700] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_collection_predicate, 1),
  [1702] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_collection_predicate, 1),
  [1704] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_predicate, 1),
  [1706] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_predicate, 1),
  [1708] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_predicate, 1),
  [1710] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean_predicate, 1),
  [1712] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float_predicate, 1),
  [1714] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float_predicate, 1),
  [1716] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_predicate, 1),
  [1718] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer_predicate, 1),
  [1720] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exist_predicate, 1),
  [1722] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_exist_predicate, 1),
  [1724] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneline_file, 2),
  [1726] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneline_file, 2),
  [1728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(604),
  [1730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [1732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(478),
  [1734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [1736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(603),
  [1738] = {.entry = {.count = 1, .reusable = false}}, SHIFT(336),
  [1740] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneline_hex, 2),
  [1742] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneline_hex, 2),
  [1744] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_string, 2),
  [1746] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_string, 5),
  [1748] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline_string, 5),
  [1750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [1752] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneline_string, 2),
  [1754] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneline_string, 2),
  [1756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [1758] = {.entry = {.count = 1, .reusable = false}}, SHIFT(337),
  [1760] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_string_type, 1),
  [1762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [1764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [1766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [1768] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_key_string, 1, .production_id = 1),
  [1770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [1772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [1774] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float, 2),
  [1776] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float, 2),
  [1778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [1780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [1782] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_object, 4),
  [1784] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xml, 2),
  [1786] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xml, 2),
  [1788] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_string, 4),
  [1790] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline_string, 4),
  [1792] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_multipart_form_data_section_repeat1, 2),
  [1794] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_multipart_form_data_section_repeat1, 2),
  [1796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [1798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [1800] = {.entry = {.count = 1, .reusable = false}}, SHIFT(297),
  [1802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [1804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [1806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [1808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [1810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [1812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [1814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [1816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [1818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [1820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [1822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [1824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [1826] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_query_string_params_section_repeat1, 2),
  [1828] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_query_string_params_section_repeat1, 2),
  [1830] = {.entry = {.count = 1, .reusable = false}}, SHIFT(545),
  [1832] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1834] = {.entry = {.count = 1, .reusable = false}}, SHIFT(555),
  [1836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [1838] = {.entry = {.count = 1, .reusable = false}}, SHIFT(377),
  [1840] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multipart_form_data_param, 1),
  [1842] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multipart_form_data_param, 1),
  [1844] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_number, 3),
  [1846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [1848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(558),
  [1850] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_array, 3),
  [1852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(424),
  [1854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [1856] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_object, 3),
  [1858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [1860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [1862] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_string, 3),
  [1864] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline_string, 3),
  [1866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [1868] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneline_string, 3),
  [1870] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneline_string, 3),
  [1872] = {.entry = {.count = 1, .reusable = false}}, SHIFT(590),
  [1874] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_string, 3),
  [1876] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneline_hex, 3),
  [1878] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneline_hex, 3),
  [1880] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneline_base64, 3),
  [1882] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneline_base64, 3),
  [1884] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneline_file, 3),
  [1886] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneline_file, 3),
  [1888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [1890] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [1892] = {.entry = {.count = 1, .reusable = true}}, SHIFT(417),
  [1894] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
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
