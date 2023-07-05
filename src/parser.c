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
#define STATE_COUNT 613
#define LARGE_STATE_COUNT 19
#define SYMBOL_COUNT 333
#define ALIAS_COUNT 1
#define TOKEN_COUNT 155
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
  anon_sym_path_DASHas_DASHis = 43,
  anon_sym_proxy = 44,
  anon_sym_retry = 45,
  anon_sym_retry_DASHinterval = 46,
  anon_sym_retry_DASHmax_DASHcount = 47,
  anon_sym_variable = 48,
  anon_sym_verbose = 49,
  anon_sym_very_DASHverbose = 50,
  anon_sym_EQ = 51,
  anon_sym_status = 52,
  anon_sym_url = 53,
  anon_sym_header = 54,
  anon_sym_cookie = 55,
  anon_sym_body = 56,
  anon_sym_xpath = 57,
  anon_sym_jsonpath = 58,
  anon_sym_regex = 59,
  anon_sym_duration = 60,
  anon_sym_sha256 = 61,
  anon_sym_md5 = 62,
  anon_sym_bytes = 63,
  anon_sym_not = 64,
  anon_sym_equals = 65,
  anon_sym_EQ_EQ = 66,
  anon_sym_notEquals = 67,
  anon_sym_BANG_EQ = 68,
  anon_sym_greaterThan = 69,
  anon_sym_GT = 70,
  anon_sym_greaterThanOrEquals = 71,
  anon_sym_GT_EQ = 72,
  anon_sym_lessThan = 73,
  anon_sym_LT = 74,
  anon_sym_lessThanOrEquals = 75,
  anon_sym_LT_EQ = 76,
  anon_sym_startsWith = 77,
  anon_sym_endsWith = 78,
  anon_sym_contains = 79,
  anon_sym_matches = 80,
  anon_sym_exists = 81,
  anon_sym_includes = 82,
  anon_sym_isInteger = 83,
  anon_sym_isFloat = 84,
  anon_sym_isBoolean = 85,
  anon_sym_isString = 86,
  anon_sym_isCollection = 87,
  anon_sym_LT_QMARK = 88,
  aux_sym_xml_prolog_tag_token1 = 89,
  anon_sym_QMARK_GT = 90,
  aux_sym_xml_open_tag_token1 = 91,
  anon_sym_LT_SLASH = 92,
  aux_sym_xml_close_tag_token1 = 93,
  anon_sym_base64_COMMA = 94,
  aux_sym_oneline_base64_token1 = 95,
  anon_sym_hex_COMMA = 96,
  anon_sym_DQUOTE = 97,
  aux_sym_quoted_string_text_token1 = 98,
  anon_sym_BSLASH = 99,
  aux_sym_invalid_quoted_string_escaped_char_token1 = 100,
  anon_sym_b = 101,
  anon_sym_f = 102,
  anon_sym_n = 103,
  anon_sym_r = 104,
  anon_sym_t = 105,
  anon_sym_u = 106,
  sym_key_string_text = 107,
  anon_sym_BSLASH2 = 108,
  aux_sym_key_string_escaped_char_token1 = 109,
  aux_sym_value_string_text_token1 = 110,
  anon_sym_POUND = 111,
  anon_sym_BQUOTE = 112,
  aux_sym_oneline_string_text_token1 = 113,
  aux_sym_oneline_string_text_token2 = 114,
  anon_sym_BQUOTE_BQUOTE_BQUOTE = 115,
  anon_sym_base64 = 116,
  anon_sym_hex = 117,
  anon_sym_json = 118,
  anon_sym_xml = 119,
  anon_sym_graphql = 120,
  aux_sym__multiline_string_text_token1 = 121,
  anon_sym_LBRACE = 122,
  sym_filename_text = 123,
  aux_sym_filename_escaped_char_token1 = 124,
  anon_sym_RBRACE = 125,
  anon_sym_COMMA = 126,
  anon_sym_LBRACK = 127,
  anon_sym_RBRACK = 128,
  aux_sym_json_string_text_token1 = 129,
  anon_sym_LBRACE_LBRACE = 130,
  anon_sym_RBRACE_RBRACE = 131,
  aux_sym_variable_name_token1 = 132,
  aux_sym_variable_name_token2 = 133,
  anon_sym_count = 134,
  anon_sym_urlEncode = 135,
  anon_sym_urlDecode = 136,
  anon_sym_htmlEscape = 137,
  anon_sym_htmlUnescape = 138,
  anon_sym_toInt = 139,
  anon_sym_true = 140,
  anon_sym_false = 141,
  anon_sym_null = 142,
  aux_sym__alphanum_token1 = 143,
  aux_sym_digit_token1 = 144,
  aux_sym_hexdigit_token1 = 145,
  anon_sym_DOT = 146,
  anon_sym_e = 147,
  anon_sym_E = 148,
  anon_sym_PLUS = 149,
  anon_sym_DASH = 150,
  sym_comment = 151,
  anon_sym_SLASH = 152,
  aux_sym_regex_text_token1 = 153,
  aux_sym_regex_escaped_char_token1 = 154,
  sym_hurl_file = 155,
  sym_entry = 156,
  sym__comment_or_new_line = 157,
  sym_request = 158,
  sym_response = 159,
  sym_method = 160,
  sym_version = 161,
  sym_status = 162,
  sym_header = 163,
  sym_body = 164,
  sym_request_section = 165,
  sym_response_section = 166,
  sym_basic_auth_section = 167,
  sym_query_string_params_section = 168,
  sym_form_params_section = 169,
  sym_multipart_form_data_section = 170,
  sym_cookies_section = 171,
  sym_captures_section = 172,
  sym_asserts_section = 173,
  sym_options_section = 174,
  sym_key_value = 175,
  sym_multipart_form_data_param = 176,
  sym_file_param = 177,
  sym_file_value = 178,
  sym_file_contenttype = 179,
  sym_capture = 180,
  sym_assert = 181,
  sym_option = 182,
  sym_ca_certificate_option = 183,
  sym_compressed_option = 184,
  sym_follow_redirect_option = 185,
  sym_insecure_option = 186,
  sym_max_redirs_option = 187,
  sym_path_as_is_option = 188,
  sym_proxy_option = 189,
  sym_retry_option = 190,
  sym_retry_interval_option = 191,
  sym_retry_max_count_option = 192,
  sym_variable_option = 193,
  sym_verbose_option = 194,
  sym_very_verbose_option = 195,
  sym_variable_definition = 196,
  sym_variable_value = 197,
  sym_query = 198,
  sym_status_query = 199,
  sym_url_query = 200,
  sym_header_query = 201,
  sym_cookie_query = 202,
  sym_body_query = 203,
  sym_xpath_query = 204,
  sym_jsonpath_query = 205,
  sym_regex_query = 206,
  sym_variable_query = 207,
  sym_duration_query = 208,
  sym_sha256_query = 209,
  sym_md5_query = 210,
  sym_bytes_query = 211,
  sym_predicate = 212,
  sym_predicate_func = 213,
  sym_equal_predicate = 214,
  sym_not_equal_predicate = 215,
  sym_greater_predicate = 216,
  sym_greater_or_equal_predicate = 217,
  sym_less_predicate = 218,
  sym_less_or_equal_predicate = 219,
  sym_start_with_predicate = 220,
  sym_end_with_predicate = 221,
  sym_contain_predicate = 222,
  sym_match_predicate = 223,
  sym_exist_predicate = 224,
  sym_include_predicate = 225,
  sym_integer_predicate = 226,
  sym_float_predicate = 227,
  sym_boolean_predicate = 228,
  sym_string_predicate = 229,
  sym_collection_predicate = 230,
  sym_predicate_value = 231,
  sym_bytes = 232,
  sym_xml = 233,
  sym_xml_prolog_tag = 234,
  sym_xml_tag = 235,
  sym_xml_open_tag = 236,
  sym_xml_close_tag = 237,
  sym_oneline_base64 = 238,
  sym_oneline_file = 239,
  sym_oneline_hex = 240,
  sym_quoted_string = 241,
  sym_quoted_string_content = 242,
  sym_quoted_string_text = 243,
  sym_invalid_quoted_string_escaped_char = 244,
  sym_quoted_string_escaped_char = 245,
  sym_key_string = 246,
  sym_key_string_content = 247,
  sym_key_string_escaped_char = 248,
  sym_value_string = 249,
  sym_value_string_content = 250,
  sym_value_string_text = 251,
  sym_value_string_escaped_char = 252,
  sym_oneline_string = 253,
  sym_oneline_string_content = 254,
  sym_oneline_string_text = 255,
  sym_oneline_string_escaped_char = 256,
  sym_multiline_string = 257,
  sym_multiline_string_type = 258,
  sym_multiline_string_content = 259,
  sym__multiline_string_text = 260,
  sym_multiline_string_escaped_char = 261,
  sym_filename = 262,
  sym_filename_content = 263,
  sym_filename_escaped_char = 264,
  sym_unicode_char = 265,
  sym_json_value = 266,
  sym_json_object = 267,
  sym_json_key_value = 268,
  sym_json_key_string = 269,
  sym_json_array = 270,
  sym_json_string = 271,
  sym_json_string_content = 272,
  sym_json_string_text = 273,
  sym_json_string_escaped_char = 274,
  sym_json_number = 275,
  sym_template = 276,
  sym_expr = 277,
  sym_variable_name = 278,
  sym_filter = 279,
  sym_regex_filter = 280,
  sym_count_filter = 281,
  sym_url_encode_filter = 282,
  sym_url_decode_filter = 283,
  sym_html_encode_filter = 284,
  sym_html_decode_filter = 285,
  sym_to_int_filter = 286,
  sym_boolean = 287,
  sym_null = 288,
  sym_integer = 289,
  sym_float = 290,
  sym_digit = 291,
  sym_hexdigit = 292,
  sym_fraction = 293,
  sym_exponent = 294,
  sym_regex = 295,
  sym_regex_content = 296,
  sym_regex_text = 297,
  sym_regex_escaped_char = 298,
  aux_sym_hurl_file_repeat1 = 299,
  aux_sym_hurl_file_repeat2 = 300,
  aux_sym__comment_or_new_line_repeat1 = 301,
  aux_sym_request_repeat1 = 302,
  aux_sym_request_repeat2 = 303,
  aux_sym_response_repeat1 = 304,
  aux_sym_query_string_params_section_repeat1 = 305,
  aux_sym_multipart_form_data_section_repeat1 = 306,
  aux_sym_captures_section_repeat1 = 307,
  aux_sym_asserts_section_repeat1 = 308,
  aux_sym_options_section_repeat1 = 309,
  aux_sym_capture_repeat1 = 310,
  aux_sym_xml_repeat1 = 311,
  aux_sym_xml_tag_repeat1 = 312,
  aux_sym_oneline_hex_repeat1 = 313,
  aux_sym_quoted_string_repeat1 = 314,
  aux_sym_quoted_string_content_repeat1 = 315,
  aux_sym_key_string_repeat1 = 316,
  aux_sym_key_string_content_repeat1 = 317,
  aux_sym_value_string_repeat1 = 318,
  aux_sym_value_string_content_repeat1 = 319,
  aux_sym_value_string_text_repeat1 = 320,
  aux_sym_oneline_string_repeat1 = 321,
  aux_sym_oneline_string_content_repeat1 = 322,
  aux_sym_multiline_string_repeat1 = 323,
  aux_sym_multiline_string_content_repeat1 = 324,
  aux_sym__multiline_string_text_repeat1 = 325,
  aux_sym_filename_repeat1 = 326,
  aux_sym_filename_content_repeat1 = 327,
  aux_sym_json_object_repeat1 = 328,
  aux_sym_json_array_repeat1 = 329,
  aux_sym_json_string_repeat1 = 330,
  aux_sym_integer_repeat1 = 331,
  aux_sym_regex_content_repeat1 = 332,
  anon_alias_sym_json_key_string = 333,
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
  [54] = 54,
  [55] = 10,
  [56] = 15,
  [57] = 57,
  [58] = 41,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 15,
  [68] = 10,
  [69] = 69,
  [70] = 70,
  [71] = 57,
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
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 114,
  [121] = 115,
  [122] = 122,
  [123] = 119,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 65,
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
  [143] = 138,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 142,
  [148] = 148,
  [149] = 149,
  [150] = 145,
  [151] = 151,
  [152] = 139,
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
  [168] = 160,
  [169] = 169,
  [170] = 170,
  [171] = 167,
  [172] = 160,
  [173] = 173,
  [174] = 166,
  [175] = 159,
  [176] = 169,
  [177] = 177,
  [178] = 178,
  [179] = 159,
  [180] = 180,
  [181] = 178,
  [182] = 182,
  [183] = 73,
  [184] = 90,
  [185] = 89,
  [186] = 97,
  [187] = 98,
  [188] = 96,
  [189] = 86,
  [190] = 95,
  [191] = 94,
  [192] = 92,
  [193] = 193,
  [194] = 194,
  [195] = 76,
  [196] = 75,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 164,
  [201] = 201,
  [202] = 202,
  [203] = 197,
  [204] = 74,
  [205] = 88,
  [206] = 206,
  [207] = 91,
  [208] = 85,
  [209] = 87,
  [210] = 210,
  [211] = 211,
  [212] = 165,
  [213] = 213,
  [214] = 214,
  [215] = 80,
  [216] = 77,
  [217] = 78,
  [218] = 79,
  [219] = 84,
  [220] = 83,
  [221] = 82,
  [222] = 81,
  [223] = 93,
  [224] = 224,
  [225] = 225,
  [226] = 226,
  [227] = 227,
  [228] = 228,
  [229] = 173,
  [230] = 227,
  [231] = 231,
  [232] = 232,
  [233] = 233,
  [234] = 180,
  [235] = 235,
  [236] = 236,
  [237] = 237,
  [238] = 238,
  [239] = 239,
  [240] = 240,
  [241] = 228,
  [242] = 242,
  [243] = 243,
  [244] = 244,
  [245] = 245,
  [246] = 245,
  [247] = 247,
  [248] = 248,
  [249] = 249,
  [250] = 250,
  [251] = 235,
  [252] = 252,
  [253] = 231,
  [254] = 235,
  [255] = 255,
  [256] = 256,
  [257] = 257,
  [258] = 258,
  [259] = 257,
  [260] = 260,
  [261] = 231,
  [262] = 198,
  [263] = 263,
  [264] = 264,
  [265] = 210,
  [266] = 266,
  [267] = 267,
  [268] = 268,
  [269] = 269,
  [270] = 15,
  [271] = 271,
  [272] = 272,
  [273] = 243,
  [274] = 10,
  [275] = 242,
  [276] = 276,
  [277] = 233,
  [278] = 242,
  [279] = 279,
  [280] = 240,
  [281] = 281,
  [282] = 282,
  [283] = 224,
  [284] = 284,
  [285] = 242,
  [286] = 52,
  [287] = 287,
  [288] = 288,
  [289] = 276,
  [290] = 290,
  [291] = 291,
  [292] = 292,
  [293] = 244,
  [294] = 294,
  [295] = 248,
  [296] = 296,
  [297] = 242,
  [298] = 242,
  [299] = 242,
  [300] = 300,
  [301] = 301,
  [302] = 243,
  [303] = 242,
  [304] = 294,
  [305] = 305,
  [306] = 242,
  [307] = 307,
  [308] = 308,
  [309] = 309,
  [310] = 287,
  [311] = 296,
  [312] = 242,
  [313] = 242,
  [314] = 314,
  [315] = 315,
  [316] = 316,
  [317] = 243,
  [318] = 318,
  [319] = 319,
  [320] = 320,
  [321] = 269,
  [322] = 322,
  [323] = 323,
  [324] = 324,
  [325] = 325,
  [326] = 326,
  [327] = 322,
  [328] = 328,
  [329] = 329,
  [330] = 330,
  [331] = 331,
  [332] = 332,
  [333] = 287,
  [334] = 334,
  [335] = 335,
  [336] = 252,
  [337] = 337,
  [338] = 260,
  [339] = 339,
  [340] = 243,
  [341] = 341,
  [342] = 342,
  [343] = 343,
  [344] = 344,
  [345] = 345,
  [346] = 346,
  [347] = 347,
  [348] = 348,
  [349] = 349,
  [350] = 350,
  [351] = 351,
  [352] = 352,
  [353] = 353,
  [354] = 354,
  [355] = 355,
  [356] = 356,
  [357] = 357,
  [358] = 358,
  [359] = 356,
  [360] = 360,
  [361] = 356,
  [362] = 362,
  [363] = 363,
  [364] = 364,
  [365] = 356,
  [366] = 356,
  [367] = 356,
  [368] = 356,
  [369] = 369,
  [370] = 370,
  [371] = 371,
  [372] = 372,
  [373] = 356,
  [374] = 356,
  [375] = 356,
  [376] = 356,
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
  [387] = 370,
  [388] = 388,
  [389] = 389,
  [390] = 242,
  [391] = 391,
  [392] = 385,
  [393] = 381,
  [394] = 394,
  [395] = 382,
  [396] = 396,
  [397] = 397,
  [398] = 398,
  [399] = 399,
  [400] = 400,
  [401] = 401,
  [402] = 402,
  [403] = 403,
  [404] = 404,
  [405] = 405,
  [406] = 384,
  [407] = 407,
  [408] = 408,
  [409] = 353,
  [410] = 410,
  [411] = 411,
  [412] = 412,
  [413] = 413,
  [414] = 414,
  [415] = 415,
  [416] = 416,
  [417] = 356,
  [418] = 335,
  [419] = 419,
  [420] = 380,
  [421] = 421,
  [422] = 422,
  [423] = 423,
  [424] = 424,
  [425] = 379,
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
  [438] = 438,
  [439] = 439,
  [440] = 440,
  [441] = 441,
  [442] = 378,
  [443] = 443,
  [444] = 444,
  [445] = 445,
  [446] = 446,
  [447] = 446,
  [448] = 446,
  [449] = 446,
  [450] = 450,
  [451] = 450,
  [452] = 450,
  [453] = 450,
  [454] = 454,
  [455] = 455,
  [456] = 455,
  [457] = 455,
  [458] = 455,
  [459] = 459,
  [460] = 460,
  [461] = 461,
  [462] = 455,
  [463] = 460,
  [464] = 464,
  [465] = 460,
  [466] = 460,
  [467] = 467,
  [468] = 468,
  [469] = 469,
  [470] = 470,
  [471] = 471,
  [472] = 471,
  [473] = 450,
  [474] = 474,
  [475] = 454,
  [476] = 470,
  [477] = 477,
  [478] = 469,
  [479] = 468,
  [480] = 480,
  [481] = 467,
  [482] = 482,
  [483] = 483,
  [484] = 484,
  [485] = 446,
  [486] = 486,
  [487] = 460,
  [488] = 488,
  [489] = 489,
  [490] = 268,
  [491] = 250,
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
  [518] = 405,
  [519] = 519,
  [520] = 520,
  [521] = 521,
  [522] = 404,
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
  [536] = 323,
  [537] = 537,
  [538] = 538,
  [539] = 539,
  [540] = 540,
  [541] = 541,
  [542] = 255,
  [543] = 530,
  [544] = 544,
  [545] = 545,
  [546] = 546,
  [547] = 547,
  [548] = 354,
  [549] = 538,
  [550] = 550,
  [551] = 551,
  [552] = 552,
  [553] = 553,
  [554] = 443,
  [555] = 413,
  [556] = 556,
  [557] = 557,
  [558] = 558,
  [559] = 559,
  [560] = 560,
  [561] = 561,
  [562] = 439,
  [563] = 411,
  [564] = 559,
  [565] = 267,
  [566] = 566,
  [567] = 567,
  [568] = 545,
  [569] = 541,
  [570] = 530,
  [571] = 545,
  [572] = 541,
  [573] = 545,
  [574] = 541,
  [575] = 545,
  [576] = 541,
  [577] = 541,
  [578] = 541,
  [579] = 541,
  [580] = 541,
  [581] = 541,
  [582] = 541,
  [583] = 419,
  [584] = 526,
  [585] = 585,
  [586] = 544,
  [587] = 587,
  [588] = 588,
  [589] = 589,
  [590] = 408,
  [591] = 591,
  [592] = 592,
  [593] = 593,
  [594] = 334,
  [595] = 595,
  [596] = 596,
  [597] = 597,
  [598] = 421,
  [599] = 599,
  [600] = 600,
  [601] = 601,
  [602] = 561,
  [603] = 603,
  [604] = 604,
  [605] = 605,
  [606] = 606,
  [607] = 607,
  [608] = 608,
  [609] = 609,
  [610] = 610,
  [611] = 541,
  [612] = 612,
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
      if (eof) ADVANCE(537);
      if (lookahead == '!') ADVANCE(60);
      if (lookahead == '"') ADVANCE(673);
      if (lookahead == '#') ADVANCE(861);
      if (lookahead == '*') ADVANCE(580);
      if (lookahead == '+') ADVANCE(922);
      if (lookahead == ',') ADVANCE(887);
      if (lookahead == '-') ADVANCE(923);
      if (lookahead == '.') ADVANCE(919);
      if (lookahead == '/') ADVANCE(925);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == ';') ADVANCE(600);
      if (lookahead == '<') ADVANCE(640);
      if (lookahead == '=') ADVANCE(616);
      if (lookahead == '>') ADVANCE(636);
      if (lookahead == '?') ADVANCE(62);
      if (lookahead == 'E') ADVANCE(921);
      if (lookahead == '[') ADVANCE(889);
      if (lookahead == '\\') ADVANCE(853);
      if (lookahead == ']') ADVANCE(894);
      if (lookahead == '`') ADVANCE(863);
      if (lookahead == 'b') ADVANCE(682);
      if (lookahead == 'e') ADVANCE(920);
      if (lookahead == 'f') ADVANCE(683);
      if (lookahead == 'n') ADVANCE(684);
      if (lookahead == 'r') ADVANCE(685);
      if (lookahead == 't') ADVANCE(686);
      if (lookahead == 'u') ADVANCE(687);
      if (lookahead == '{') ADVANCE(880);
      if (lookahead == '}') ADVANCE(886);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'd')) ADVANCE(903);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(579);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(536)
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(903);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(924);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(538);
      if (lookahead == '#') ADVANCE(529);
      if (lookahead == '\\') ADVANCE(678);
      if (lookahead == 'f') ADVANCE(857);
      if (lookahead == 'n') ADVANCE(859);
      if (lookahead == 't') ADVANCE(858);
      if (lookahead == '{') ADVANCE(860);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(856);
      if (aux_sym_value_string_text_token1_character_set_1(lookahead)) ADVANCE(856);
      if (lookahead != 0) ADVANCE(856);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(538);
      if (lookahead == '#') ADVANCE(529);
      if (lookahead == '\\') ADVANCE(678);
      if (lookahead == '{') ADVANCE(860);
      if (aux_sym_value_string_text_token1_character_set_1(lookahead)) ADVANCE(856);
      if (lookahead != 0) ADVANCE(856);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(538);
      if (lookahead == '#') ADVANCE(529);
      if (lookahead == 'b') ADVANCE(187);
      if (lookahead == 'c') ADVANCE(380);
      if (lookahead == 'g') ADVANCE(419);
      if (lookahead == 'h') ADVANCE(245);
      if (lookahead == 'j') ADVANCE(457);
      if (lookahead == 'r') ADVANCE(234);
      if (lookahead == 't') ADVANCE(362);
      if (lookahead == 'u') ADVANCE(411);
      if (lookahead == 'x') ADVANCE(328);
      if (aux_sym_value_string_text_token1_character_set_1(lookahead)) SKIP(4)
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(538);
      if (lookahead == '#') ADVANCE(529);
      if (aux_sym_value_string_text_token1_character_set_1(lookahead)) SKIP(5)
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(538);
      if (lookahead == '#') ADVANCE(529);
      if (aux_sym_value_string_text_token1_character_set_1(lookahead)) SKIP(6)
      if (lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(601);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(538);
      if (lookahead == '#') ADVANCE(529);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(849);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == '\\') ADVANCE(853);
      if (lookahead == '{') ADVANCE(527);
      if (aux_sym_value_string_text_token1_character_set_1(lookahead)) SKIP(5)
      END_STATE();
    case 8:
      if (lookahead == '\n') SKIP(33)
      if (lookahead == '#') ADVANCE(529);
      if (lookahead == '<') ADVANCE(641);
      if (lookahead == '\\') ADVANCE(678);
      if (lookahead == '{') ADVANCE(860);
      if (aux_sym_value_string_text_token1_character_set_1(lookahead)) ADVANCE(856);
      if (lookahead != 0) ADVANCE(856);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(539);
      if (lookahead == ' ') SKIP(10)
      if (lookahead == '#') ADVANCE(529);
      if (lookahead == '\\') ADVANCE(678);
      if (lookahead == '{') ADVANCE(882);
      if (sym_filename_text_character_set_1(lookahead)) ADVANCE(881);
      if (lookahead != 0 &&
          lookahead != ';') ADVANCE(884);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(539);
      if (lookahead == ' ') SKIP(10)
      if (lookahead == '#') ADVANCE(529);
      if (lookahead == '\\') ADVANCE(678);
      if (sym_filename_text_character_set_1(lookahead)) ADVANCE(881);
      if (lookahead != 0 &&
          lookahead != ';') ADVANCE(884);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(540);
      if (lookahead == '#') ADVANCE(877);
      if (lookahead == '\\') ADVANCE(678);
      if (lookahead == '`') ADVANCE(863);
      if (lookahead == '{') ADVANCE(880);
      if (aux_sym_value_string_text_token1_character_set_1(lookahead)) ADVANCE(876);
      if (lookahead != 0) ADVANCE(878);
      END_STATE();
    case 12:
      if (lookahead == '\n') SKIP(34)
      if (lookahead == '#') ADVANCE(529);
      if (lookahead == '\\') ADVANCE(678);
      if (lookahead == '{') ADVANCE(860);
      if (aux_sym_value_string_text_token1_character_set_1(lookahead)) ADVANCE(856);
      if (lookahead != 0) ADVANCE(856);
      END_STATE();
    case 13:
      if (lookahead == '\n') SKIP(14)
      if (lookahead == '#') ADVANCE(529);
      if (lookahead == '\\') ADVANCE(678);
      if (lookahead == '`') ADVANCE(862);
      if (lookahead == '{') ADVANCE(866);
      if (aux_sym_value_string_text_token1_character_set_1(lookahead)) ADVANCE(865);
      if (lookahead != 0) ADVANCE(864);
      END_STATE();
    case 14:
      if (lookahead == '\n') SKIP(14)
      if (lookahead == '#') ADVANCE(529);
      if (lookahead == '\\') ADVANCE(678);
      if (lookahead == '`') ADVANCE(862);
      if (aux_sym_value_string_text_token1_character_set_1(lookahead)) ADVANCE(865);
      if (lookahead != 0) ADVANCE(864);
      END_STATE();
    case 15:
      if (lookahead == '\n') SKIP(15)
      if (lookahead == '#') ADVANCE(928);
      if (lookahead == '/') ADVANCE(925);
      if (lookahead == '\\') ADVANCE(678);
      if (aux_sym_value_string_text_token1_character_set_1(lookahead)) ADVANCE(927);
      if (lookahead != 0) ADVANCE(929);
      END_STATE();
    case 16:
      if (lookahead == '\n') ADVANCE(670);
      if (lookahead == '#') ADVANCE(529);
      if (aux_sym_value_string_text_token1_character_set_1(lookahead)) SKIP(16)
      if (('+' <= lookahead && lookahead <= '-') ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 17:
      if (lookahead == '\n') SKIP(17)
      if (lookahead == '#') ADVANCE(932);
      if (aux_sym_value_string_text_token1_character_set_1(lookahead)) ADVANCE(931);
      if (lookahead != 0) ADVANCE(930);
      END_STATE();
    case 18:
      if (lookahead == '!') ADVANCE(60);
      if (lookahead == '"') ADVANCE(673);
      if (lookahead == '#') ADVANCE(529);
      if (lookahead == '+') ADVANCE(922);
      if (lookahead == ',') ADVANCE(887);
      if (lookahead == '-') ADVANCE(923);
      if (lookahead == '/') ADVANCE(925);
      if (lookahead == ':') ADVANCE(598);
      if (lookahead == '<') ADVANCE(642);
      if (lookahead == '=') ADVANCE(61);
      if (lookahead == '>') ADVANCE(636);
      if (lookahead == '[') ADVANCE(888);
      if (lookahead == ']') ADVANCE(894);
      if (lookahead == '`') ADVANCE(146);
      if (lookahead == 'b') ADVANCE(170);
      if (lookahead == 'c') ADVANCE(356);
      if (lookahead == 'e') ADVANCE(338);
      if (lookahead == 'f') ADVANCE(152);
      if (lookahead == 'g') ADVANCE(420);
      if (lookahead == 'h') ADVANCE(243);
      if (lookahead == 'i') ADVANCE(340);
      if (lookahead == 'l') ADVANCE(261);
      if (lookahead == 'm') ADVANCE(175);
      if (lookahead == 'n') ADVANCE(372);
      if (lookahead == 'r') ADVANCE(234);
      if (lookahead == 's') ADVANCE(492);
      if (lookahead == 't') ADVANCE(363);
      if (lookahead == 'u') ADVANCE(411);
      if (lookahead == '{') ADVANCE(880);
      if (lookahead == '}') ADVANCE(528);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(917);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(19)
      END_STATE();
    case 19:
      if (lookahead == '!') ADVANCE(60);
      if (lookahead == '"') ADVANCE(673);
      if (lookahead == '#') ADVANCE(529);
      if (lookahead == '+') ADVANCE(922);
      if (lookahead == ',') ADVANCE(887);
      if (lookahead == '-') ADVANCE(923);
      if (lookahead == '/') ADVANCE(925);
      if (lookahead == ':') ADVANCE(598);
      if (lookahead == '<') ADVANCE(642);
      if (lookahead == '=') ADVANCE(61);
      if (lookahead == '>') ADVANCE(636);
      if (lookahead == '[') ADVANCE(888);
      if (lookahead == ']') ADVANCE(894);
      if (lookahead == '`') ADVANCE(146);
      if (lookahead == 'b') ADVANCE(170);
      if (lookahead == 'c') ADVANCE(356);
      if (lookahead == 'e') ADVANCE(338);
      if (lookahead == 'f') ADVANCE(152);
      if (lookahead == 'g') ADVANCE(420);
      if (lookahead == 'h') ADVANCE(243);
      if (lookahead == 'i') ADVANCE(340);
      if (lookahead == 'l') ADVANCE(261);
      if (lookahead == 'm') ADVANCE(175);
      if (lookahead == 'n') ADVANCE(372);
      if (lookahead == 'r') ADVANCE(234);
      if (lookahead == 's') ADVANCE(492);
      if (lookahead == 't') ADVANCE(363);
      if (lookahead == 'u') ADVANCE(411);
      if (lookahead == '{') ADVANCE(879);
      if (lookahead == '}') ADVANCE(528);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(917);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(19)
      END_STATE();
    case 20:
      if (lookahead == '"') ADVANCE(673);
      if (lookahead == '#') ADVANCE(861);
      if (lookahead == ',') ADVANCE(885);
      if (lookahead == ';') ADVANCE(600);
      if (lookahead == 'f') ADVANCE(151);
      if (lookahead == 'n') ADVANCE(502);
      if (lookahead == 't') ADVANCE(405);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(917);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(20)
      END_STATE();
    case 21:
      if (lookahead == '"') ADVANCE(673);
      if (lookahead == '#') ADVANCE(861);
      if (lookahead == '\\') ADVANCE(678);
      if (lookahead == '`') ADVANCE(862);
      if (lookahead == 'b') ADVANCE(682);
      if (lookahead == 'f') ADVANCE(683);
      if (lookahead == 'n') ADVANCE(684);
      if (lookahead == 'r') ADVANCE(685);
      if (lookahead == 't') ADVANCE(686);
      if (lookahead == 'u') ADVANCE(687);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(21)
      END_STATE();
    case 22:
      if (lookahead == '"') ADVANCE(673);
      if (lookahead == '#') ADVANCE(861);
      if (sym_key_string_text_character_set_1(lookahead)) ADVANCE(849);
      if (lookahead == ',') ADVANCE(885);
      if (lookahead == ';') ADVANCE(600);
      if (lookahead == '\\') ADVANCE(853);
      if (lookahead == 'f') ADVANCE(831);
      if (lookahead == 'n') ADVANCE(823);
      if (lookahead == 't') ADVANCE(796);
      if (lookahead == '{') ADVANCE(527);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(849);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(20)
      END_STATE();
    case 23:
      if (lookahead == '"') ADVANCE(673);
      if (lookahead == '#') ADVANCE(529);
      if (lookahead == ',') ADVANCE(887);
      if (lookahead == '.') ADVANCE(919);
      if (lookahead == ':') ADVANCE(598);
      if (lookahead == '<') ADVANCE(643);
      if (lookahead == '=') ADVANCE(615);
      if (lookahead == '>') ADVANCE(635);
      if (lookahead == 'E') ADVANCE(921);
      if (lookahead == ']') ADVANCE(894);
      if (lookahead == 'b') ADVANCE(355);
      if (lookahead == 'c') ADVANCE(376);
      if (lookahead == 'd') ADVANCE(505);
      if (lookahead == 'e') ADVANCE(920);
      if (lookahead == 'h') ADVANCE(252);
      if (lookahead == 'j') ADVANCE(446);
      if (lookahead == 'm') ADVANCE(210);
      if (lookahead == 'r') ADVANCE(234);
      if (lookahead == 's') ADVANCE(277);
      if (lookahead == 'u') ADVANCE(406);
      if (lookahead == 'v') ADVANCE(165);
      if (lookahead == 'x') ADVANCE(388);
      if (lookahead == '{') ADVANCE(879);
      if (lookahead == '}') ADVANCE(886);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(917);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(23)
      END_STATE();
    case 24:
      if (lookahead == '"') ADVANCE(673);
      if (lookahead == '#') ADVANCE(674);
      if (lookahead == '\\') ADVANCE(678);
      if (lookahead == '{') ADVANCE(676);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) ADVANCE(675);
      if (lookahead != 0) ADVANCE(677);
      END_STATE();
    case 25:
      if (lookahead == '"') ADVANCE(673);
      if (lookahead == '#') ADVANCE(898);
      if (lookahead == '\\') ADVANCE(678);
      if (lookahead == '{') ADVANCE(897);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) ADVANCE(896);
      if (lookahead != 0) ADVANCE(895);
      END_STATE();
    case 26:
      if (lookahead == '"') ADVANCE(673);
      if (lookahead == '#') ADVANCE(681);
      if (lookahead == '\\') ADVANCE(678);
      if (lookahead == 'b') ADVANCE(682);
      if (lookahead == 'f') ADVANCE(683);
      if (lookahead == 'n') ADVANCE(684);
      if (lookahead == 'r') ADVANCE(685);
      if (lookahead == 't') ADVANCE(686);
      if (lookahead == 'u') ADVANCE(687);
      if (lookahead == '\t' ||
          lookahead == '\r') SKIP(26)
      if (aux_sym_invalid_quoted_string_escaped_char_token1_character_set_1(lookahead)) ADVANCE(680);
      if (lookahead != 0 &&
          lookahead != '\f') ADVANCE(679);
      END_STATE();
    case 27:
      if (lookahead == '"') ADVANCE(854);
      if (lookahead == '#') ADVANCE(855);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(849);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == '\\') ADVANCE(853);
      if (lookahead == '{') ADVANCE(527);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(29)
      END_STATE();
    case 28:
      if (lookahead == '#') ADVANCE(529);
      if (lookahead == '*') ADVANCE(580);
      if (lookahead == '=') ADVANCE(615);
      if (lookahead == 'c') ADVANCE(380);
      if (lookahead == 'h') ADVANCE(479);
      if (lookahead == 'r') ADVANCE(234);
      if (lookahead == 't') ADVANCE(362);
      if (lookahead == 'u') ADVANCE(411);
      if (lookahead == '}') ADVANCE(528);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(579);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(28)
      END_STATE();
    case 29:
      if (lookahead == '#') ADVANCE(529);
      if (lookahead == ':') ADVANCE(598);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(29)
      END_STATE();
    case 30:
      if (lookahead == '#') ADVANCE(529);
      if (lookahead == ';') ADVANCE(600);
      if (lookahead == '\\') ADVANCE(678);
      if (lookahead == '{') ADVANCE(882);
      if (lookahead == '\n' ||
          lookahead == ' ') SKIP(31)
      if (sym_filename_text_character_set_1(lookahead)) ADVANCE(883);
      if (lookahead != 0) ADVANCE(884);
      END_STATE();
    case 31:
      if (lookahead == '#') ADVANCE(529);
      if (lookahead == ';') ADVANCE(600);
      if (lookahead == '\\') ADVANCE(678);
      if (lookahead == '\n' ||
          lookahead == ' ') SKIP(31)
      if (sym_filename_text_character_set_1(lookahead)) ADVANCE(883);
      if (lookahead != 0) ADVANCE(884);
      END_STATE();
    case 32:
      if (lookahead == '#') ADVANCE(529);
      if (lookahead == ';') ADVANCE(600);
      if (lookahead == '}') ADVANCE(886);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(918);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(32)
      END_STATE();
    case 33:
      if (lookahead == '#') ADVANCE(529);
      if (lookahead == '<') ADVANCE(641);
      if (lookahead == '\\') ADVANCE(678);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(33)
      END_STATE();
    case 34:
      if (lookahead == '#') ADVANCE(529);
      if (lookahead == '\\') ADVANCE(678);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(34)
      END_STATE();
    case 35:
      if (lookahead == '#') ADVANCE(529);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(35)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(903);
      END_STATE();
    case 36:
      if (lookahead == '#') ADVANCE(529);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(849);
      if (lookahead == ':') ADVANCE(598);
      if (lookahead == '\\') ADVANCE(853);
      if (lookahead == '{') ADVANCE(527);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(29)
      END_STATE();
    case 37:
      if (lookahead == '#') ADVANCE(662);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) ADVANCE(663);
      if (lookahead != 0 &&
          lookahead != '/' &&
          lookahead != '?') ADVANCE(664);
      END_STATE();
    case 38:
      if (lookahead == '#') ADVANCE(658);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) ADVANCE(659);
      if (lookahead != 0 &&
          lookahead != '?') ADVANCE(660);
      END_STATE();
    case 39:
      if (lookahead == '#') ADVANCE(666);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) ADVANCE(667);
      if (lookahead != 0 &&
          lookahead != '/' &&
          lookahead != '>') ADVANCE(668);
      END_STATE();
    case 40:
      if (lookahead == '#') ADVANCE(869);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) ADVANCE(868);
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(867);
      END_STATE();
    case 41:
      if (lookahead == '*') ADVANCE(576);
      if (lookahead == '1') ADVANCE(50);
      if (lookahead == '2') ADVANCE(575);
      END_STATE();
    case 42:
      if (lookahead == ',') ADVANCE(672);
      END_STATE();
    case 43:
      if (lookahead == ',') ADVANCE(599);
      END_STATE();
    case 44:
      if (lookahead == ',') ADVANCE(669);
      END_STATE();
    case 45:
      if (lookahead == '-') ADVANCE(516);
      END_STATE();
    case 46:
      if (lookahead == '-') ADVANCE(200);
      END_STATE();
    case 47:
      if (lookahead == '-') ADVANCE(294);
      END_STATE();
    case 48:
      if (lookahead == '-') ADVANCE(416);
      END_STATE();
    case 49:
      if (lookahead == '-') ADVANCE(176);
      END_STATE();
    case 50:
      if (lookahead == '.') ADVANCE(51);
      END_STATE();
    case 51:
      if (lookahead == '0') ADVANCE(573);
      if (lookahead == '1') ADVANCE(574);
      END_STATE();
    case 52:
      if (lookahead == '2') ADVANCE(56);
      END_STATE();
    case 53:
      if (lookahead == '4') ADVANCE(871);
      END_STATE();
    case 54:
      if (lookahead == '4') ADVANCE(44);
      END_STATE();
    case 55:
      if (lookahead == '5') ADVANCE(627);
      END_STATE();
    case 56:
      if (lookahead == '5') ADVANCE(58);
      END_STATE();
    case 57:
      if (lookahead == '6') ADVANCE(54);
      END_STATE();
    case 58:
      if (lookahead == '6') ADVANCE(626);
      END_STATE();
    case 59:
      if (lookahead == '6') ADVANCE(53);
      END_STATE();
    case 60:
      if (lookahead == '=') ADVANCE(633);
      END_STATE();
    case 61:
      if (lookahead == '=') ADVANCE(631);
      END_STATE();
    case 62:
      if (lookahead == '>') ADVANCE(661);
      END_STATE();
    case 63:
      if (lookahead == 'A') ADVANCE(73);
      END_STATE();
    case 64:
      if (lookahead == 'A') ADVANCE(71);
      END_STATE();
    case 65:
      if (lookahead == 'A') ADVANCE(503);
      END_STATE();
    case 66:
      if (lookahead == 'A') ADVANCE(130);
      if (lookahead == 'O') ADVANCE(125);
      if (lookahead == 'R') ADVANCE(114);
      if (lookahead == 'U') ADVANCE(121);
      END_STATE();
    case 67:
      if (lookahead == 'B') ADVANCE(370);
      if (lookahead == 'C') ADVANCE(367);
      if (lookahead == 'F') ADVANCE(312);
      if (lookahead == 'I') ADVANCE(346);
      if (lookahead == 'S') ADVANCE(488);
      END_STATE();
    case 68:
      if (lookahead == 'C') ADVANCE(93);
      END_STATE();
    case 69:
      if (lookahead == 'C') ADVANCE(101);
      END_STATE();
    case 70:
      if (lookahead == 'C') ADVANCE(103);
      END_STATE();
    case 71:
      if (lookahead == 'C') ADVANCE(81);
      END_STATE();
    case 72:
      if (lookahead == 'C') ADVANCE(128);
      END_STATE();
    case 73:
      if (lookahead == 'D') ADVANCE(543);
      END_STATE();
    case 74:
      if (lookahead == 'D') ADVANCE(569);
      END_STATE();
    case 75:
      if (lookahead == 'D') ADVANCE(162);
      END_STATE();
    case 76:
      if (lookahead == 'D') ADVANCE(260);
      if (lookahead == 'E') ADVANCE(349);
      END_STATE();
    case 77:
      if (lookahead == 'E') ADVANCE(104);
      END_STATE();
    case 78:
      if (lookahead == 'E') ADVANCE(126);
      END_STATE();
    case 79:
      if (lookahead == 'E') ADVANCE(135);
      END_STATE();
    case 80:
      if (lookahead == 'E') ADVANCE(563);
      END_STATE();
    case 81:
      if (lookahead == 'E') ADVANCE(555);
      END_STATE();
    case 82:
      if (lookahead == 'E') ADVANCE(549);
      END_STATE();
    case 83:
      if (lookahead == 'E') ADVANCE(63);
      END_STATE();
    case 84:
      if (lookahead == 'E') ADVANCE(63);
      if (lookahead == 'T') ADVANCE(131);
      END_STATE();
    case 85:
      if (lookahead == 'E') ADVANCE(72);
      END_STATE();
    case 86:
      if (lookahead == 'E') ADVANCE(133);
      END_STATE();
    case 87:
      if (lookahead == 'E') ADVANCE(461);
      if (lookahead == 'U') ADVANCE(350);
      END_STATE();
    case 88:
      if (lookahead == 'E') ADVANCE(392);
      END_STATE();
    case 89:
      if (lookahead == 'E') ADVANCE(393);
      END_STATE();
    case 90:
      if (lookahead == 'F') ADVANCE(97);
      END_STATE();
    case 91:
      if (lookahead == 'F') ADVANCE(374);
      END_STATE();
    case 92:
      if (lookahead == 'G') ADVANCE(80);
      END_STATE();
    case 93:
      if (lookahead == 'H') ADVANCE(557);
      END_STATE();
    case 94:
      if (lookahead == 'I') ADVANCE(79);
      END_STATE();
    case 95:
      if (lookahead == 'I') ADVANCE(106);
      if (lookahead == 'O') ADVANCE(69);
      END_STATE();
    case 96:
      if (lookahead == 'I') ADVANCE(110);
      if (lookahead == 'O') ADVANCE(70);
      END_STATE();
    case 97:
      if (lookahead == 'I') ADVANCE(109);
      END_STATE();
    case 98:
      if (lookahead == 'I') ADVANCE(115);
      END_STATE();
    case 99:
      if (lookahead == 'I') ADVANCE(347);
      END_STATE();
    case 100:
      if (lookahead == 'K') ADVANCE(559);
      END_STATE();
    case 101:
      if (lookahead == 'K') ADVANCE(565);
      END_STATE();
    case 102:
      if (lookahead == 'K') ADVANCE(561);
      END_STATE();
    case 103:
      if (lookahead == 'K') ADVANCE(567);
      END_STATE();
    case 104:
      if (lookahead == 'L') ADVANCE(86);
      END_STATE();
    case 105:
      if (lookahead == 'L') ADVANCE(96);
      END_STATE();
    case 106:
      if (lookahead == 'N') ADVANCE(100);
      END_STATE();
    case 107:
      if (lookahead == 'N') ADVANCE(105);
      END_STATE();
    case 108:
      if (lookahead == 'N') ADVANCE(123);
      END_STATE();
    case 109:
      if (lookahead == 'N') ADVANCE(74);
      END_STATE();
    case 110:
      if (lookahead == 'N') ADVANCE(102);
      END_STATE();
    case 111:
      if (lookahead == 'N') ADVANCE(112);
      END_STATE();
    case 112:
      if (lookahead == 'N') ADVANCE(85);
      END_STATE();
    case 113:
      if (lookahead == 'O') ADVANCE(111);
      END_STATE();
    case 114:
      if (lookahead == 'O') ADVANCE(118);
      END_STATE();
    case 115:
      if (lookahead == 'O') ADVANCE(108);
      END_STATE();
    case 116:
      if (lookahead == 'P') ADVANCE(577);
      END_STATE();
    case 117:
      if (lookahead == 'P') ADVANCE(159);
      END_STATE();
    case 118:
      if (lookahead == 'P') ADVANCE(90);
      END_STATE();
    case 119:
      if (lookahead == 'P') ADVANCE(129);
      END_STATE();
    case 120:
      if (lookahead == 'P') ADVANCE(186);
      END_STATE();
    case 121:
      if (lookahead == 'R') ADVANCE(92);
      if (lookahead == 'T') ADVANCE(547);
      END_STATE();
    case 122:
      if (lookahead == 'R') ADVANCE(64);
      END_STATE();
    case 123:
      if (lookahead == 'S') ADVANCE(553);
      END_STATE();
    case 124:
      if (lookahead == 'S') ADVANCE(483);
      END_STATE();
    case 125:
      if (lookahead == 'S') ADVANCE(127);
      END_STATE();
    case 126:
      if (lookahead == 'T') ADVANCE(541);
      END_STATE();
    case 127:
      if (lookahead == 'T') ADVANCE(545);
      END_STATE();
    case 128:
      if (lookahead == 'T') ADVANCE(551);
      END_STATE();
    case 129:
      if (lookahead == 'T') ADVANCE(98);
      END_STATE();
    case 130:
      if (lookahead == 'T') ADVANCE(68);
      END_STATE();
    case 131:
      if (lookahead == 'T') ADVANCE(116);
      END_STATE();
    case 132:
      if (lookahead == 'T') ADVANCE(278);
      END_STATE();
    case 133:
      if (lookahead == 'T') ADVANCE(82);
      END_STATE();
    case 134:
      if (lookahead == 'T') ADVANCE(279);
      END_STATE();
    case 135:
      if (lookahead == 'W') ADVANCE(571);
      END_STATE();
    case 136:
      if (lookahead == 'W') ADVANCE(295);
      END_STATE();
    case 137:
      if (lookahead == 'W') ADVANCE(297);
      END_STATE();
    case 138:
      if (lookahead == ']') ADVANCE(593);
      END_STATE();
    case 139:
      if (lookahead == ']') ADVANCE(589);
      END_STATE();
    case 140:
      if (lookahead == ']') ADVANCE(595);
      END_STATE();
    case 141:
      if (lookahead == ']') ADVANCE(591);
      END_STATE();
    case 142:
      if (lookahead == ']') ADVANCE(581);
      END_STATE();
    case 143:
      if (lookahead == ']') ADVANCE(585);
      END_STATE();
    case 144:
      if (lookahead == ']') ADVANCE(587);
      END_STATE();
    case 145:
      if (lookahead == ']') ADVANCE(583);
      END_STATE();
    case 146:
      if (lookahead == '`') ADVANCE(147);
      END_STATE();
    case 147:
      if (lookahead == '`') ADVANCE(870);
      END_STATE();
    case 148:
      if (lookahead == 'a') ADVANCE(518);
      if (lookahead == 'd') ADVANCE(55);
      END_STATE();
    case 149:
      if (lookahead == 'a') ADVANCE(52);
      END_STATE();
    case 150:
      if (lookahead == 'a') ADVANCE(196);
      END_STATE();
    case 151:
      if (lookahead == 'a') ADVANCE(311);
      END_STATE();
    case 152:
      if (lookahead == 'a') ADVANCE(311);
      if (lookahead == 'i') ADVANCE(309);
      END_STATE();
    case 153:
      if (lookahead == 'a') ADVANCE(325);
      END_STATE();
    case 154:
      if (lookahead == 'a') ADVANCE(206);
      if (lookahead == 'o') ADVANCE(324);
      END_STATE();
    case 155:
      if (lookahead == 'a') ADVANCE(217);
      END_STATE();
    case 156:
      if (lookahead == 'a') ADVANCE(217);
      if (lookahead == 'x') ADVANCE(42);
      END_STATE();
    case 157:
      if (lookahead == 'a') ADVANCE(426);
      END_STATE();
    case 158:
      if (lookahead == 'a') ADVANCE(385);
      END_STATE();
    case 159:
      if (lookahead == 'a') ADVANCE(401);
      END_STATE();
    case 160:
      if (lookahead == 'a') ADVANCE(383);
      END_STATE();
    case 161:
      if (lookahead == 'a') ADVANCE(303);
      END_STATE();
    case 162:
      if (lookahead == 'a') ADVANCE(481);
      END_STATE();
    case 163:
      if (lookahead == 'a') ADVANCE(144);
      END_STATE();
    case 164:
      if (lookahead == 'a') ADVANCE(474);
      if (lookahead == 'r') ADVANCE(358);
      END_STATE();
    case 165:
      if (lookahead == 'a') ADVANCE(409);
      END_STATE();
    case 166:
      if (lookahead == 'a') ADVANCE(409);
      if (lookahead == 'e') ADVANCE(396);
      END_STATE();
    case 167:
      if (lookahead == 'a') ADVANCE(476);
      END_STATE();
    case 168:
      if (lookahead == 'a') ADVANCE(298);
      END_STATE();
    case 169:
      if (lookahead == 'a') ADVANCE(332);
      END_STATE();
    case 170:
      if (lookahead == 'a') ADVANCE(447);
      END_STATE();
    case 171:
      if (lookahead == 'a') ADVANCE(447);
      if (lookahead == 'o') ADVANCE(212);
      if (lookahead == 'y') ADVANCE(493);
      END_STATE();
    case 172:
      if (lookahead == 'a') ADVANCE(333);
      END_STATE();
    case 173:
      if (lookahead == 'a') ADVANCE(480);
      END_STATE();
    case 174:
      if (lookahead == 'a') ADVANCE(334);
      END_STATE();
    case 175:
      if (lookahead == 'a') ADVANCE(484);
      END_STATE();
    case 176:
      if (lookahead == 'a') ADVANCE(445);
      END_STATE();
    case 177:
      if (lookahead == 'a') ADVANCE(472);
      END_STATE();
    case 178:
      if (lookahead == 'a') ADVANCE(382);
      END_STATE();
    case 179:
      if (lookahead == 'a') ADVANCE(382);
      if (lookahead == 'o') ADVANCE(353);
      END_STATE();
    case 180:
      if (lookahead == 'a') ADVANCE(522);
      END_STATE();
    case 181:
      if (lookahead == 'a') ADVANCE(315);
      END_STATE();
    case 182:
      if (lookahead == 'a') ADVANCE(482);
      END_STATE();
    case 183:
      if (lookahead == 'a') ADVANCE(326);
      END_STATE();
    case 184:
      if (lookahead == 'a') ADVANCE(408);
      END_STATE();
    case 185:
      if (lookahead == 'a') ADVANCE(386);
      END_STATE();
    case 186:
      if (lookahead == 'a') ADVANCE(422);
      END_STATE();
    case 187:
      if (lookahead == 'a') ADVANCE(462);
      END_STATE();
    case 188:
      if (lookahead == 'a') ADVANCE(317);
      END_STATE();
    case 189:
      if (lookahead == 'a') ADVANCE(318);
      END_STATE();
    case 190:
      if (lookahead == 'a') ADVANCE(319);
      END_STATE();
    case 191:
      if (lookahead == 'a') ADVANCE(491);
      END_STATE();
    case 192:
      if (lookahead == 'a') ADVANCE(424);
      END_STATE();
    case 193:
      if (lookahead == 'a') ADVANCE(497);
      END_STATE();
    case 194:
      if (lookahead == 'a') ADVANCE(494);
      END_STATE();
    case 195:
      if (lookahead == 'b') ADVANCE(371);
      if (lookahead == 'y') ADVANCE(45);
      END_STATE();
    case 196:
      if (lookahead == 'b') ADVANCE(313);
      END_STATE();
    case 197:
      if (lookahead == 'b') ADVANCE(373);
      END_STATE();
    case 198:
      if (lookahead == 'c') ADVANCE(65);
      END_STATE();
    case 199:
      if (lookahead == 'c') ADVANCE(280);
      END_STATE();
    case 200:
      if (lookahead == 'c') ADVANCE(365);
      END_STATE();
    case 201:
      if (lookahead == 'c') ADVANCE(310);
      END_STATE();
    case 202:
      if (lookahead == 'c') ADVANCE(158);
      END_STATE();
    case 203:
      if (lookahead == 'c') ADVANCE(366);
      END_STATE();
    case 204:
      if (lookahead == 'c') ADVANCE(185);
      END_STATE();
    case 205:
      if (lookahead == 'c') ADVANCE(377);
      END_STATE();
    case 206:
      if (lookahead == 'c') ADVANCE(262);
      END_STATE();
    case 207:
      if (lookahead == 'c') ADVANCE(509);
      END_STATE();
    case 208:
      if (lookahead == 'c') ADVANCE(495);
      END_STATE();
    case 209:
      if (lookahead == 'c') ADVANCE(194);
      END_STATE();
    case 210:
      if (lookahead == 'd') ADVANCE(55);
      END_STATE();
    case 211:
      if (lookahead == 'd') ADVANCE(603);
      END_STATE();
    case 212:
      if (lookahead == 'd') ADVANCE(524);
      END_STATE();
    case 213:
      if (lookahead == 'd') ADVANCE(293);
      END_STATE();
    case 214:
      if (lookahead == 'd') ADVANCE(442);
      END_STATE();
    case 215:
      if (lookahead == 'd') ADVANCE(229);
      END_STATE();
    case 216:
      if (lookahead == 'd') ADVANCE(230);
      END_STATE();
    case 217:
      if (lookahead == 'd') ADVANCE(249);
      END_STATE();
    case 218:
      if (lookahead == 'd') ADVANCE(257);
      END_STATE();
    case 219:
      if (lookahead == 'e') ADVANCE(156);
      END_STATE();
    case 220:
      if (lookahead == 'e') ADVANCE(267);
      END_STATE();
    case 221:
      if (lookahead == 'e') ADVANCE(57);
      END_STATE();
    case 222:
      if (lookahead == 'e') ADVANCE(911);
      END_STATE();
    case 223:
      if (lookahead == 'e') ADVANCE(913);
      END_STATE();
    case 224:
      if (lookahead == 'e') ADVANCE(620);
      END_STATE();
    case 225:
      if (lookahead == 'e') ADVANCE(613);
      END_STATE();
    case 226:
      if (lookahead == 'e') ADVANCE(605);
      END_STATE();
    case 227:
      if (lookahead == 'e') ADVANCE(612);
      END_STATE();
    case 228:
      if (lookahead == 'e') ADVANCE(614);
      END_STATE();
    case 229:
      if (lookahead == 'e') ADVANCE(907);
      END_STATE();
    case 230:
      if (lookahead == 'e') ADVANCE(906);
      END_STATE();
    case 231:
      if (lookahead == 'e') ADVANCE(908);
      END_STATE();
    case 232:
      if (lookahead == 'e') ADVANCE(909);
      END_STATE();
    case 233:
      if (lookahead == 'e') ADVANCE(395);
      END_STATE();
    case 234:
      if (lookahead == 'e') ADVANCE(266);
      END_STATE();
    case 235:
      if (lookahead == 'e') ADVANCE(43);
      END_STATE();
    case 236:
      if (lookahead == 'e') ADVANCE(402);
      END_STATE();
    case 237:
      if (lookahead == 'e') ADVANCE(268);
      END_STATE();
    case 238:
      if (lookahead == 'e') ADVANCE(213);
      END_STATE();
    case 239:
      if (lookahead == 'e') ADVANCE(519);
      END_STATE();
    case 240:
      if (lookahead == 'e') ADVANCE(207);
      END_STATE();
    case 241:
      if (lookahead == 'e') ADVANCE(211);
      END_STATE();
    case 242:
      if (lookahead == 'e') ADVANCE(517);
      END_STATE();
    case 243:
      if (lookahead == 'e') ADVANCE(517);
      if (lookahead == 't') ADVANCE(327);
      END_STATE();
    case 244:
      if (lookahead == 'e') ADVANCE(441);
      END_STATE();
    case 245:
      if (lookahead == 'e') ADVANCE(520);
      if (lookahead == 't') ADVANCE(327);
      END_STATE();
    case 246:
      if (lookahead == 'e') ADVANCE(444);
      END_STATE();
    case 247:
      if (lookahead == 'e') ADVANCE(208);
      END_STATE();
    case 248:
      if (lookahead == 'e') ADVANCE(428);
      END_STATE();
    case 249:
      if (lookahead == 'e') ADVANCE(397);
      END_STATE();
    case 250:
      if (lookahead == 'e') ADVANCE(172);
      END_STATE();
    case 251:
      if (lookahead == 'e') ADVANCE(399);
      END_STATE();
    case 252:
      if (lookahead == 'e') ADVANCE(155);
      END_STATE();
    case 253:
      if (lookahead == 'e') ADVANCE(400);
      END_STATE();
    case 254:
      if (lookahead == 'e') ADVANCE(423);
      END_STATE();
    case 255:
      if (lookahead == 'e') ADVANCE(398);
      END_STATE();
    case 256:
      if (lookahead == 'e') ADVANCE(434);
      END_STATE();
    case 257:
      if (lookahead == 'e') ADVANCE(436);
      END_STATE();
    case 258:
      if (lookahead == 'e') ADVANCE(455);
      END_STATE();
    case 259:
      if (lookahead == 'e') ADVANCE(59);
      END_STATE();
    case 260:
      if (lookahead == 'e') ADVANCE(203);
      END_STATE();
    case 261:
      if (lookahead == 'e') ADVANCE(458);
      END_STATE();
    case 262:
      if (lookahead == 'e') ADVANCE(413);
      END_STATE();
    case 263:
      if (lookahead == 'e') ADVANCE(193);
      END_STATE();
    case 264:
      if (lookahead == 'e') ADVANCE(463);
      END_STATE();
    case 265:
      if (lookahead == 'g') ADVANCE(655);
      END_STATE();
    case 266:
      if (lookahead == 'g') ADVANCE(239);
      END_STATE();
    case 267:
      if (lookahead == 'g') ADVANCE(239);
      if (lookahead == 't') ADVANCE(404);
      END_STATE();
    case 268:
      if (lookahead == 'g') ADVANCE(255);
      END_STATE();
    case 269:
      if (lookahead == 'g') ADVANCE(120);
      END_STATE();
    case 270:
      if (lookahead == 'h') ADVANCE(622);
      END_STATE();
    case 271:
      if (lookahead == 'h') ADVANCE(623);
      END_STATE();
    case 272:
      if (lookahead == 'h') ADVANCE(647);
      END_STATE();
    case 273:
      if (lookahead == 'h') ADVANCE(646);
      END_STATE();
    case 274:
      if (lookahead == 'h') ADVANCE(49);
      END_STATE();
    case 275:
      if (lookahead == 'h') ADVANCE(390);
      END_STATE();
    case 276:
      if (lookahead == 'h') ADVANCE(142);
      END_STATE();
    case 277:
      if (lookahead == 'h') ADVANCE(149);
      if (lookahead == 't') ADVANCE(182);
      END_STATE();
    case 278:
      if (lookahead == 'h') ADVANCE(169);
      END_STATE();
    case 279:
      if (lookahead == 'h') ADVANCE(174);
      END_STATE();
    case 280:
      if (lookahead == 'h') ADVANCE(256);
      END_STATE();
    case 281:
      if (lookahead == 'i') ADVANCE(198);
      END_STATE();
    case 282:
      if (lookahead == 'i') ADVANCE(387);
      END_STATE();
    case 283:
      if (lookahead == 'i') ADVANCE(244);
      END_STATE();
    case 284:
      if (lookahead == 'i') ADVANCE(329);
      END_STATE();
    case 285:
      if (lookahead == 'i') ADVANCE(354);
      END_STATE();
    case 286:
      if (lookahead == 'i') ADVANCE(342);
      if (lookahead == 'm') ADVANCE(180);
      END_STATE();
    case 287:
      if (lookahead == 'i') ADVANCE(361);
      END_STATE();
    case 288:
      if (lookahead == 'i') ADVANCE(150);
      END_STATE();
    case 289:
      if (lookahead == 'i') ADVANCE(364);
      END_STATE();
    case 290:
      if (lookahead == 'i') ADVANCE(337);
      END_STATE();
    case 291:
      if (lookahead == 'i') ADVANCE(224);
      END_STATE();
    case 292:
      if (lookahead == 'i') ADVANCE(368);
      END_STATE();
    case 293:
      if (lookahead == 'i') ADVANCE(418);
      END_STATE();
    case 294:
      if (lookahead == 'i') ADVANCE(431);
      END_STATE();
    case 295:
      if (lookahead == 'i') ADVANCE(485);
      END_STATE();
    case 296:
      if (lookahead == 'i') ADVANCE(460);
      END_STATE();
    case 297:
      if (lookahead == 'i') ADVANCE(486);
      END_STATE();
    case 298:
      if (lookahead == 'i') ADVANCE(348);
      END_STATE();
    case 299:
      if (lookahead == 'k') ADVANCE(283);
      END_STATE();
    case 300:
      if (lookahead == 'k') ADVANCE(291);
      END_STATE();
    case 301:
      if (lookahead == 'l') ADVANCE(618);
      END_STATE();
    case 302:
      if (lookahead == 'l') ADVANCE(915);
      END_STATE();
    case 303:
      if (lookahead == 'l') ADVANCE(610);
      END_STATE();
    case 304:
      if (lookahead == 'l') ADVANCE(76);
      END_STATE();
    case 305:
      if (lookahead == 'l') ADVANCE(87);
      END_STATE();
    case 306:
      if (lookahead == 'l') ADVANCE(874);
      END_STATE();
    case 307:
      if (lookahead == 'l') ADVANCE(875);
      END_STATE();
    case 308:
      if (lookahead == 'l') ADVANCE(302);
      END_STATE();
    case 309:
      if (lookahead == 'l') ADVANCE(235);
      END_STATE();
    case 310:
      if (lookahead == 'l') ADVANCE(504);
      END_STATE();
    case 311:
      if (lookahead == 'l') ADVANCE(452);
      END_STATE();
    case 312:
      if (lookahead == 'l') ADVANCE(379);
      END_STATE();
    case 313:
      if (lookahead == 'l') ADVANCE(227);
      END_STATE();
    case 314:
      if (lookahead == 'l') ADVANCE(250);
      END_STATE();
    case 315:
      if (lookahead == 'l') ADVANCE(432);
      END_STATE();
    case 316:
      if (lookahead == 'l') ADVANCE(247);
      END_STATE();
    case 317:
      if (lookahead == 'l') ADVANCE(437);
      END_STATE();
    case 318:
      if (lookahead == 'l') ADVANCE(438);
      END_STATE();
    case 319:
      if (lookahead == 'l') ADVANCE(439);
      END_STATE();
    case 320:
      if (lookahead == 'l') ADVANCE(478);
      END_STATE();
    case 321:
      if (lookahead == 'l') ADVANCE(316);
      END_STATE();
    case 322:
      if (lookahead == 'm') ADVANCE(117);
      END_STATE();
    case 323:
      if (lookahead == 'm') ADVANCE(75);
      END_STATE();
    case 324:
      if (lookahead == 'm') ADVANCE(384);
      if (lookahead == 'o') ADVANCE(300);
      END_STATE();
    case 325:
      if (lookahead == 'm') ADVANCE(448);
      END_STATE();
    case 326:
      if (lookahead == 'm') ADVANCE(450);
      END_STATE();
    case 327:
      if (lookahead == 'm') ADVANCE(305);
      END_STATE();
    case 328:
      if (lookahead == 'm') ADVANCE(306);
      END_STATE();
    case 329:
      if (lookahead == 'n') ADVANCE(269);
      END_STATE();
    case 330:
      if (lookahead == 'n') ADVANCE(625);
      END_STATE();
    case 331:
      if (lookahead == 'n') ADVANCE(604);
      END_STATE();
    case 332:
      if (lookahead == 'n') ADVANCE(639);
      END_STATE();
    case 333:
      if (lookahead == 'n') ADVANCE(654);
      END_STATE();
    case 334:
      if (lookahead == 'n') ADVANCE(634);
      END_STATE();
    case 335:
      if (lookahead == 'n') ADVANCE(656);
      END_STATE();
    case 336:
      if (lookahead == 'n') ADVANCE(873);
      END_STATE();
    case 337:
      if (lookahead == 'n') ADVANCE(265);
      END_STATE();
    case 338:
      if (lookahead == 'n') ADVANCE(214);
      if (lookahead == 'q') ADVANCE(507);
      if (lookahead == 'x') ADVANCE(296);
      END_STATE();
    case 339:
      if (lookahead == 'n') ADVANCE(443);
      END_STATE();
    case 340:
      if (lookahead == 'n') ADVANCE(201);
      if (lookahead == 's') ADVANCE(67);
      END_STATE();
    case 341:
      if (lookahead == 'n') ADVANCE(449);
      END_STATE();
    case 342:
      if (lookahead == 'n') ADVANCE(496);
      END_STATE();
    case 343:
      if (lookahead == 'n') ADVANCE(468);
      END_STATE();
    case 344:
      if (lookahead == 'n') ADVANCE(487);
      if (lookahead == 'u') ADVANCE(345);
      END_STATE();
    case 345:
      if (lookahead == 'n') ADVANCE(470);
      END_STATE();
    case 346:
      if (lookahead == 'n') ADVANCE(489);
      END_STATE();
    case 347:
      if (lookahead == 'n') ADVANCE(471);
      END_STATE();
    case 348:
      if (lookahead == 'n') ADVANCE(435);
      END_STATE();
    case 349:
      if (lookahead == 'n') ADVANCE(205);
      END_STATE();
    case 350:
      if (lookahead == 'n') ADVANCE(264);
      END_STATE();
    case 351:
      if (lookahead == 'n') ADVANCE(389);
      END_STATE();
    case 352:
      if (lookahead == 'o') ADVANCE(394);
      END_STATE();
    case 353:
      if (lookahead == 'o') ADVANCE(299);
      END_STATE();
    case 354:
      if (lookahead == 'o') ADVANCE(339);
      END_STATE();
    case 355:
      if (lookahead == 'o') ADVANCE(212);
      if (lookahead == 'y') ADVANCE(493);
      END_STATE();
    case 356:
      if (lookahead == 'o') ADVANCE(344);
      END_STATE();
    case 357:
      if (lookahead == 'o') ADVANCE(353);
      END_STATE();
    case 358:
      if (lookahead == 'o') ADVANCE(521);
      END_STATE();
    case 359:
      if (lookahead == 'o') ADVANCE(209);
      END_STATE();
    case 360:
      if (lookahead == 'o') ADVANCE(351);
      END_STATE();
    case 361:
      if (lookahead == 'o') ADVANCE(330);
      END_STATE();
    case 362:
      if (lookahead == 'o') ADVANCE(99);
      END_STATE();
    case 363:
      if (lookahead == 'o') ADVANCE(99);
      if (lookahead == 'r') ADVANCE(506);
      END_STATE();
    case 364:
      if (lookahead == 'o') ADVANCE(331);
      END_STATE();
    case 365:
      if (lookahead == 'o') ADVANCE(510);
      END_STATE();
    case 366:
      if (lookahead == 'o') ADVANCE(215);
      END_STATE();
    case 367:
      if (lookahead == 'o') ADVANCE(321);
      END_STATE();
    case 368:
      if (lookahead == 'o') ADVANCE(335);
      END_STATE();
    case 369:
      if (lookahead == 'o') ADVANCE(336);
      END_STATE();
    case 370:
      if (lookahead == 'o') ADVANCE(378);
      END_STATE();
    case 371:
      if (lookahead == 'o') ADVANCE(453);
      END_STATE();
    case 372:
      if (lookahead == 'o') ADVANCE(469);
      if (lookahead == 'u') ADVANCE(308);
      END_STATE();
    case 373:
      if (lookahead == 'o') ADVANCE(456);
      END_STATE();
    case 374:
      if (lookahead == 'o') ADVANCE(403);
      END_STATE();
    case 375:
      if (lookahead == 'o') ADVANCE(300);
      END_STATE();
    case 376:
      if (lookahead == 'o') ADVANCE(375);
      END_STATE();
    case 377:
      if (lookahead == 'o') ADVANCE(216);
      END_STATE();
    case 378:
      if (lookahead == 'o') ADVANCE(314);
      END_STATE();
    case 379:
      if (lookahead == 'o') ADVANCE(177);
      END_STATE();
    case 380:
      if (lookahead == 'o') ADVANCE(511);
      END_STATE();
    case 381:
      if (lookahead == 'p') ADVANCE(473);
      END_STATE();
    case 382:
      if (lookahead == 'p') ADVANCE(475);
      END_STATE();
    case 383:
      if (lookahead == 'p') ADVANCE(275);
      END_STATE();
    case 384:
      if (lookahead == 'p') ADVANCE(414);
      END_STATE();
    case 385:
      if (lookahead == 'p') ADVANCE(231);
      END_STATE();
    case 386:
      if (lookahead == 'p') ADVANCE(232);
      END_STATE();
    case 387:
      if (lookahead == 'p') ADVANCE(184);
      END_STATE();
    case 388:
      if (lookahead == 'p') ADVANCE(167);
      END_STATE();
    case 389:
      if (lookahead == 'p') ADVANCE(173);
      END_STATE();
    case 390:
      if (lookahead == 'q') ADVANCE(307);
      END_STATE();
    case 391:
      if (lookahead == 'q') ADVANCE(512);
      END_STATE();
    case 392:
      if (lookahead == 'q') ADVANCE(513);
      END_STATE();
    case 393:
      if (lookahead == 'q') ADVANCE(514);
      END_STATE();
    case 394:
      if (lookahead == 'r') ADVANCE(322);
      END_STATE();
    case 395:
      if (lookahead == 'r') ADVANCE(523);
      END_STATE();
    case 396:
      if (lookahead == 'r') ADVANCE(195);
      END_STATE();
    case 397:
      if (lookahead == 'r') ADVANCE(619);
      END_STATE();
    case 398:
      if (lookahead == 'r') ADVANCE(652);
      END_STATE();
    case 399:
      if (lookahead == 'r') ADVANCE(197);
      END_STATE();
    case 400:
      if (lookahead == 'r') ADVANCE(515);
      END_STATE();
    case 401:
      if (lookahead == 'r') ADVANCE(153);
      END_STATE();
    case 402:
      if (lookahead == 'r') ADVANCE(477);
      END_STATE();
    case 403:
      if (lookahead == 'r') ADVANCE(323);
      END_STATE();
    case 404:
      if (lookahead == 'r') ADVANCE(526);
      END_STATE();
    case 405:
      if (lookahead == 'r') ADVANCE(506);
      END_STATE();
    case 406:
      if (lookahead == 'r') ADVANCE(301);
      END_STATE();
    case 407:
      if (lookahead == 'r') ADVANCE(284);
      END_STATE();
    case 408:
      if (lookahead == 'r') ADVANCE(466);
      END_STATE();
    case 409:
      if (lookahead == 'r') ADVANCE(288);
      END_STATE();
    case 410:
      if (lookahead == 'r') ADVANCE(191);
      END_STATE();
    case 411:
      if (lookahead == 'r') ADVANCE(304);
      END_STATE();
    case 412:
      if (lookahead == 'r') ADVANCE(88);
      END_STATE();
    case 413:
      if (lookahead == 'r') ADVANCE(467);
      END_STATE();
    case 414:
      if (lookahead == 'r') ADVANCE(258);
      END_STATE();
    case 415:
      if (lookahead == 'r') ADVANCE(290);
      END_STATE();
    case 416:
      if (lookahead == 'r') ADVANCE(238);
      END_STATE();
    case 417:
      if (lookahead == 'r') ADVANCE(226);
      END_STATE();
    case 418:
      if (lookahead == 'r') ADVANCE(430);
      END_STATE();
    case 419:
      if (lookahead == 'r') ADVANCE(160);
      END_STATE();
    case 420:
      if (lookahead == 'r') ADVANCE(263);
      END_STATE();
    case 421:
      if (lookahead == 'r') ADVANCE(246);
      END_STATE();
    case 422:
      if (lookahead == 'r') ADVANCE(183);
      END_STATE();
    case 423:
      if (lookahead == 'r') ADVANCE(134);
      END_STATE();
    case 424:
      if (lookahead == 'r') ADVANCE(498);
      END_STATE();
    case 425:
      if (lookahead == 'r') ADVANCE(89);
      END_STATE();
    case 426:
      if (lookahead == 's') ADVANCE(281);
      END_STATE();
    case 427:
      if (lookahead == 's') ADVANCE(138);
      END_STATE();
    case 428:
      if (lookahead == 's') ADVANCE(628);
      END_STATE();
    case 429:
      if (lookahead == 's') ADVANCE(617);
      END_STATE();
    case 430:
      if (lookahead == 's') ADVANCE(606);
      END_STATE();
    case 431:
      if (lookahead == 's') ADVANCE(607);
      END_STATE();
    case 432:
      if (lookahead == 's') ADVANCE(630);
      END_STATE();
    case 433:
      if (lookahead == 's') ADVANCE(650);
      END_STATE();
    case 434:
      if (lookahead == 's') ADVANCE(649);
      END_STATE();
    case 435:
      if (lookahead == 's') ADVANCE(648);
      END_STATE();
    case 436:
      if (lookahead == 's') ADVANCE(651);
      END_STATE();
    case 437:
      if (lookahead == 's') ADVANCE(632);
      END_STATE();
    case 438:
      if (lookahead == 's') ADVANCE(644);
      END_STATE();
    case 439:
      if (lookahead == 's') ADVANCE(637);
      END_STATE();
    case 440:
      if (lookahead == 's') ADVANCE(459);
      END_STATE();
    case 441:
      if (lookahead == 's') ADVANCE(139);
      END_STATE();
    case 442:
      if (lookahead == 's') ADVANCE(136);
      END_STATE();
    case 443:
      if (lookahead == 's') ADVANCE(140);
      END_STATE();
    case 444:
      if (lookahead == 's') ADVANCE(141);
      END_STATE();
    case 445:
      if (lookahead == 's') ADVANCE(47);
      END_STATE();
    case 446:
      if (lookahead == 's') ADVANCE(360);
      END_STATE();
    case 447:
      if (lookahead == 's') ADVANCE(221);
      END_STATE();
    case 448:
      if (lookahead == 's') ADVANCE(143);
      END_STATE();
    case 449:
      if (lookahead == 's') ADVANCE(240);
      END_STATE();
    case 450:
      if (lookahead == 's') ADVANCE(145);
      END_STATE();
    case 451:
      if (lookahead == 's') ADVANCE(132);
      END_STATE();
    case 452:
      if (lookahead == 's') ADVANCE(223);
      END_STATE();
    case 453:
      if (lookahead == 's') ADVANCE(225);
      END_STATE();
    case 454:
      if (lookahead == 's') ADVANCE(241);
      END_STATE();
    case 455:
      if (lookahead == 's') ADVANCE(454);
      END_STATE();
    case 456:
      if (lookahead == 's') ADVANCE(228);
      END_STATE();
    case 457:
      if (lookahead == 's') ADVANCE(369);
      END_STATE();
    case 458:
      if (lookahead == 's') ADVANCE(451);
      END_STATE();
    case 459:
      if (lookahead == 's') ADVANCE(236);
      END_STATE();
    case 460:
      if (lookahead == 's') ADVANCE(490);
      END_STATE();
    case 461:
      if (lookahead == 's') ADVANCE(202);
      END_STATE();
    case 462:
      if (lookahead == 's') ADVANCE(259);
      END_STATE();
    case 463:
      if (lookahead == 's') ADVANCE(204);
      END_STATE();
    case 464:
      if (lookahead == 's') ADVANCE(137);
      END_STATE();
    case 465:
      if (lookahead == 't') ADVANCE(276);
      END_STATE();
    case 466:
      if (lookahead == 't') ADVANCE(91);
      END_STATE();
    case 467:
      if (lookahead == 't') ADVANCE(602);
      END_STATE();
    case 468:
      if (lookahead == 't') ADVANCE(611);
      END_STATE();
    case 469:
      if (lookahead == 't') ADVANCE(629);
      END_STATE();
    case 470:
      if (lookahead == 't') ADVANCE(905);
      END_STATE();
    case 471:
      if (lookahead == 't') ADVANCE(910);
      END_STATE();
    case 472:
      if (lookahead == 't') ADVANCE(653);
      END_STATE();
    case 473:
      if (lookahead == 't') ADVANCE(285);
      END_STATE();
    case 474:
      if (lookahead == 't') ADVANCE(274);
      END_STATE();
    case 475:
      if (lookahead == 't') ADVANCE(501);
      END_STATE();
    case 476:
      if (lookahead == 't') ADVANCE(270);
      END_STATE();
    case 477:
      if (lookahead == 't') ADVANCE(427);
      END_STATE();
    case 478:
      if (lookahead == 't') ADVANCE(282);
      END_STATE();
    case 479:
      if (lookahead == 't') ADVANCE(327);
      END_STATE();
    case 480:
      if (lookahead == 't') ADVANCE(271);
      END_STATE();
    case 481:
      if (lookahead == 't') ADVANCE(163);
      END_STATE();
    case 482:
      if (lookahead == 't') ADVANCE(508);
      END_STATE();
    case 483:
      if (lookahead == 't') ADVANCE(407);
      END_STATE();
    case 484:
      if (lookahead == 't') ADVANCE(199);
      END_STATE();
    case 485:
      if (lookahead == 't') ADVANCE(272);
      END_STATE();
    case 486:
      if (lookahead == 't') ADVANCE(273);
      END_STATE();
    case 487:
      if (lookahead == 't') ADVANCE(168);
      END_STATE();
    case 488:
      if (lookahead == 't') ADVANCE(415);
      END_STATE();
    case 489:
      if (lookahead == 't') ADVANCE(237);
      END_STATE();
    case 490:
      if (lookahead == 't') ADVANCE(433);
      END_STATE();
    case 491:
      if (lookahead == 't') ADVANCE(287);
      END_STATE();
    case 492:
      if (lookahead == 't') ADVANCE(192);
      END_STATE();
    case 493:
      if (lookahead == 't') ADVANCE(248);
      END_STATE();
    case 494:
      if (lookahead == 't') ADVANCE(289);
      END_STATE();
    case 495:
      if (lookahead == 't') ADVANCE(292);
      END_STATE();
    case 496:
      if (lookahead == 't') ADVANCE(253);
      END_STATE();
    case 497:
      if (lookahead == 't') ADVANCE(254);
      END_STATE();
    case 498:
      if (lookahead == 't') ADVANCE(464);
      END_STATE();
    case 499:
      if (lookahead == 'u') ADVANCE(320);
      END_STATE();
    case 500:
      if (lookahead == 'u') ADVANCE(233);
      END_STATE();
    case 501:
      if (lookahead == 'u') ADVANCE(421);
      END_STATE();
    case 502:
      if (lookahead == 'u') ADVANCE(308);
      END_STATE();
    case 503:
      if (lookahead == 'u') ADVANCE(465);
      END_STATE();
    case 504:
      if (lookahead == 'u') ADVANCE(218);
      END_STATE();
    case 505:
      if (lookahead == 'u') ADVANCE(410);
      END_STATE();
    case 506:
      if (lookahead == 'u') ADVANCE(222);
      END_STATE();
    case 507:
      if (lookahead == 'u') ADVANCE(181);
      END_STATE();
    case 508:
      if (lookahead == 'u') ADVANCE(429);
      END_STATE();
    case 509:
      if (lookahead == 'u') ADVANCE(417);
      END_STATE();
    case 510:
      if (lookahead == 'u') ADVANCE(343);
      END_STATE();
    case 511:
      if (lookahead == 'u') ADVANCE(345);
      END_STATE();
    case 512:
      if (lookahead == 'u') ADVANCE(188);
      END_STATE();
    case 513:
      if (lookahead == 'u') ADVANCE(189);
      END_STATE();
    case 514:
      if (lookahead == 'u') ADVANCE(190);
      END_STATE();
    case 515:
      if (lookahead == 'v') ADVANCE(161);
      END_STATE();
    case 516:
      if (lookahead == 'v') ADVANCE(251);
      END_STATE();
    case 517:
      if (lookahead == 'x') ADVANCE(42);
      END_STATE();
    case 518:
      if (lookahead == 'x') ADVANCE(48);
      END_STATE();
    case 519:
      if (lookahead == 'x') ADVANCE(624);
      END_STATE();
    case 520:
      if (lookahead == 'x') ADVANCE(872);
      END_STATE();
    case 521:
      if (lookahead == 'x') ADVANCE(525);
      END_STATE();
    case 522:
      if (lookahead == 'x') ADVANCE(46);
      END_STATE();
    case 523:
      if (lookahead == 'y') ADVANCE(124);
      END_STATE();
    case 524:
      if (lookahead == 'y') ADVANCE(621);
      END_STATE();
    case 525:
      if (lookahead == 'y') ADVANCE(608);
      END_STATE();
    case 526:
      if (lookahead == 'y') ADVANCE(609);
      END_STATE();
    case 527:
      if (lookahead == '{') ADVANCE(899);
      END_STATE();
    case 528:
      if (lookahead == '}') ADVANCE(902);
      END_STATE();
    case 529:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1);
      END_STATE();
    case 530:
      if (eof) ADVANCE(537);
      if (lookahead == '\n') ADVANCE(538);
      if (lookahead == '"') ADVANCE(673);
      if (lookahead == '#') ADVANCE(529);
      if (lookahead == '.') ADVANCE(919);
      if (lookahead == '<') ADVANCE(643);
      if (lookahead == 'C') ADVANCE(113);
      if (lookahead == 'D') ADVANCE(77);
      if (lookahead == 'E') ADVANCE(921);
      if (lookahead == 'G') ADVANCE(78);
      if (lookahead == 'H') ADVANCE(84);
      if (lookahead == 'L') ADVANCE(95);
      if (lookahead == 'O') ADVANCE(119);
      if (lookahead == 'P') ADVANCE(66);
      if (lookahead == 'T') ADVANCE(122);
      if (lookahead == 'U') ADVANCE(107);
      if (lookahead == 'V') ADVANCE(94);
      if (lookahead == '[') ADVANCE(889);
      if (lookahead == '`') ADVANCE(863);
      if (lookahead == 'b') ADVANCE(171);
      if (lookahead == 'c') ADVANCE(154);
      if (lookahead == 'd') ADVANCE(505);
      if (lookahead == 'e') ADVANCE(920);
      if (lookahead == 'f') ADVANCE(152);
      if (lookahead == 'h') ADVANCE(219);
      if (lookahead == 'i') ADVANCE(341);
      if (lookahead == 'j') ADVANCE(446);
      if (lookahead == 'l') ADVANCE(359);
      if (lookahead == 'm') ADVANCE(148);
      if (lookahead == 'n') ADVANCE(502);
      if (lookahead == 'p') ADVANCE(164);
      if (lookahead == 'r') ADVANCE(220);
      if (lookahead == 's') ADVANCE(277);
      if (lookahead == 't') ADVANCE(405);
      if (lookahead == 'u') ADVANCE(406);
      if (lookahead == 'v') ADVANCE(166);
      if (lookahead == 'x') ADVANCE(388);
      if (lookahead == '{') ADVANCE(880);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(917);
      if (aux_sym_value_string_text_token1_character_set_1(lookahead)) SKIP(531)
      END_STATE();
    case 531:
      if (eof) ADVANCE(537);
      if (lookahead == '\n') ADVANCE(538);
      if (lookahead == '"') ADVANCE(673);
      if (lookahead == '#') ADVANCE(529);
      if (lookahead == '.') ADVANCE(919);
      if (lookahead == '<') ADVANCE(643);
      if (lookahead == 'C') ADVANCE(113);
      if (lookahead == 'D') ADVANCE(77);
      if (lookahead == 'E') ADVANCE(921);
      if (lookahead == 'G') ADVANCE(78);
      if (lookahead == 'H') ADVANCE(84);
      if (lookahead == 'L') ADVANCE(95);
      if (lookahead == 'O') ADVANCE(119);
      if (lookahead == 'P') ADVANCE(66);
      if (lookahead == 'T') ADVANCE(122);
      if (lookahead == 'U') ADVANCE(107);
      if (lookahead == 'V') ADVANCE(94);
      if (lookahead == '[') ADVANCE(889);
      if (lookahead == '`') ADVANCE(863);
      if (lookahead == 'b') ADVANCE(171);
      if (lookahead == 'c') ADVANCE(154);
      if (lookahead == 'd') ADVANCE(505);
      if (lookahead == 'e') ADVANCE(920);
      if (lookahead == 'f') ADVANCE(152);
      if (lookahead == 'h') ADVANCE(219);
      if (lookahead == 'i') ADVANCE(341);
      if (lookahead == 'j') ADVANCE(446);
      if (lookahead == 'l') ADVANCE(359);
      if (lookahead == 'm') ADVANCE(148);
      if (lookahead == 'n') ADVANCE(502);
      if (lookahead == 'p') ADVANCE(164);
      if (lookahead == 'r') ADVANCE(220);
      if (lookahead == 's') ADVANCE(277);
      if (lookahead == 't') ADVANCE(405);
      if (lookahead == 'u') ADVANCE(406);
      if (lookahead == 'v') ADVANCE(166);
      if (lookahead == 'x') ADVANCE(388);
      if (lookahead == '{') ADVANCE(879);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(917);
      if (aux_sym_value_string_text_token1_character_set_1(lookahead)) SKIP(531)
      END_STATE();
    case 532:
      if (eof) ADVANCE(537);
      if (lookahead == '\n') ADVANCE(538);
      if (lookahead == '"') ADVANCE(673);
      if (lookahead == '#') ADVANCE(529);
      if (lookahead == '<') ADVANCE(643);
      if (lookahead == 'C') ADVANCE(113);
      if (lookahead == 'D') ADVANCE(77);
      if (lookahead == 'G') ADVANCE(78);
      if (lookahead == 'H') ADVANCE(84);
      if (lookahead == 'L') ADVANCE(95);
      if (lookahead == 'O') ADVANCE(119);
      if (lookahead == 'P') ADVANCE(66);
      if (lookahead == 'T') ADVANCE(122);
      if (lookahead == 'U') ADVANCE(107);
      if (lookahead == 'V') ADVANCE(94);
      if (lookahead == '[') ADVANCE(891);
      if (lookahead == '`') ADVANCE(863);
      if (lookahead == 'b') ADVANCE(170);
      if (lookahead == 'f') ADVANCE(152);
      if (lookahead == 'h') ADVANCE(242);
      if (lookahead == 'n') ADVANCE(502);
      if (lookahead == 't') ADVANCE(405);
      if (lookahead == '{') ADVANCE(879);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(917);
      if (aux_sym_value_string_text_token1_character_set_1(lookahead)) SKIP(532)
      END_STATE();
    case 533:
      if (eof) ADVANCE(537);
      if (lookahead == '\n') ADVANCE(538);
      if (lookahead == '"') ADVANCE(673);
      if (lookahead == '#') ADVANCE(529);
      if (lookahead == '<') ADVANCE(643);
      if (lookahead == 'C') ADVANCE(113);
      if (lookahead == 'D') ADVANCE(77);
      if (lookahead == 'G') ADVANCE(78);
      if (lookahead == 'H') ADVANCE(83);
      if (lookahead == 'L') ADVANCE(95);
      if (lookahead == 'O') ADVANCE(119);
      if (lookahead == 'P') ADVANCE(66);
      if (lookahead == 'T') ADVANCE(122);
      if (lookahead == 'U') ADVANCE(107);
      if (lookahead == 'V') ADVANCE(94);
      if (lookahead == '[') ADVANCE(890);
      if (lookahead == '`') ADVANCE(863);
      if (lookahead == 'b') ADVANCE(170);
      if (lookahead == 'f') ADVANCE(152);
      if (lookahead == 'h') ADVANCE(242);
      if (lookahead == 'n') ADVANCE(502);
      if (lookahead == 't') ADVANCE(405);
      if (lookahead == '{') ADVANCE(879);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(917);
      if (aux_sym_value_string_text_token1_character_set_1(lookahead)) SKIP(533)
      END_STATE();
    case 534:
      if (eof) ADVANCE(537);
      if (lookahead == '\n') ADVANCE(538);
      if (lookahead == '"') ADVANCE(673);
      if (lookahead == '#') ADVANCE(529);
      if (sym_key_string_text_character_set_2(lookahead)) ADVANCE(849);
      if (lookahead == '<') ADVANCE(643);
      if (lookahead == 'C') ADVANCE(736);
      if (lookahead == 'D') ADVANCE(707);
      if (lookahead == 'G') ADVANCE(708);
      if (lookahead == 'H') ADVANCE(689);
      if (lookahead == 'L') ADVANCE(690);
      if (lookahead == 'O') ADVANCE(742);
      if (lookahead == 'P') ADVANCE(688);
      if (lookahead == 'T') ADVANCE(744);
      if (lookahead == 'U') ADVANCE(730);
      if (lookahead == 'V') ADVANCE(720);
      if (lookahead == '[') ADVANCE(892);
      if (lookahead == '\\') ADVANCE(853);
      if (lookahead == '`') ADVANCE(863);
      if (lookahead == 'b') ADVANCE(830);
      if (lookahead == 'f') ADVANCE(693);
      if (lookahead == 'h') ADVANCE(757);
      if (lookahead == 'n') ADVANCE(823);
      if (lookahead == 't') ADVANCE(796);
      if (lookahead == '{') ADVANCE(880);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(849);
      if (aux_sym_value_string_text_token1_character_set_1(lookahead)) SKIP(532)
      END_STATE();
    case 535:
      if (eof) ADVANCE(537);
      if (lookahead == '\n') ADVANCE(538);
      if (lookahead == '"') ADVANCE(673);
      if (lookahead == '#') ADVANCE(529);
      if (sym_key_string_text_character_set_2(lookahead)) ADVANCE(849);
      if (lookahead == '<') ADVANCE(643);
      if (lookahead == 'C') ADVANCE(736);
      if (lookahead == 'D') ADVANCE(707);
      if (lookahead == 'G') ADVANCE(708);
      if (lookahead == 'H') ADVANCE(709);
      if (lookahead == 'L') ADVANCE(690);
      if (lookahead == 'O') ADVANCE(742);
      if (lookahead == 'P') ADVANCE(688);
      if (lookahead == 'T') ADVANCE(744);
      if (lookahead == 'U') ADVANCE(730);
      if (lookahead == 'V') ADVANCE(720);
      if (lookahead == '[') ADVANCE(893);
      if (lookahead == '\\') ADVANCE(853);
      if (lookahead == '`') ADVANCE(863);
      if (lookahead == 'b') ADVANCE(830);
      if (lookahead == 'f') ADVANCE(693);
      if (lookahead == 'h') ADVANCE(757);
      if (lookahead == 'n') ADVANCE(823);
      if (lookahead == 't') ADVANCE(796);
      if (lookahead == '{') ADVANCE(880);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(849);
      if (aux_sym_value_string_text_token1_character_set_1(lookahead)) SKIP(533)
      END_STATE();
    case 536:
      if (eof) ADVANCE(537);
      if (lookahead == '!') ADVANCE(60);
      if (lookahead == '"') ADVANCE(673);
      if (lookahead == '#') ADVANCE(861);
      if (lookahead == '*') ADVANCE(580);
      if (lookahead == '+') ADVANCE(922);
      if (lookahead == ',') ADVANCE(887);
      if (lookahead == '-') ADVANCE(923);
      if (lookahead == '.') ADVANCE(919);
      if (lookahead == '/') ADVANCE(925);
      if (lookahead == ':') ADVANCE(598);
      if (lookahead == ';') ADVANCE(600);
      if (lookahead == '<') ADVANCE(640);
      if (lookahead == '=') ADVANCE(616);
      if (lookahead == '>') ADVANCE(636);
      if (lookahead == '?') ADVANCE(62);
      if (lookahead == 'E') ADVANCE(921);
      if (lookahead == '[') ADVANCE(889);
      if (lookahead == '\\') ADVANCE(678);
      if (lookahead == ']') ADVANCE(894);
      if (lookahead == '`') ADVANCE(863);
      if (lookahead == 'b') ADVANCE(682);
      if (lookahead == 'e') ADVANCE(920);
      if (lookahead == 'f') ADVANCE(683);
      if (lookahead == 'n') ADVANCE(684);
      if (lookahead == 'r') ADVANCE(685);
      if (lookahead == 't') ADVANCE(686);
      if (lookahead == 'u') ADVANCE(687);
      if (lookahead == '{') ADVANCE(879);
      if (lookahead == '}') ADVANCE(886);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'd')) ADVANCE(903);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(579);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(536)
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(903);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(538);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(539);
      if (sym_filename_text_character_set_1(lookahead)) ADVANCE(881);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(540);
      if (aux_sym_value_string_text_token1_character_set_1(lookahead)) ADVANCE(876);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(anon_sym_GET);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(anon_sym_GET);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(849);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(anon_sym_HEAD);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(anon_sym_HEAD);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(849);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(anon_sym_POST);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(anon_sym_POST);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(849);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(anon_sym_PUT);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(anon_sym_PUT);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(849);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(anon_sym_DELETE);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(anon_sym_DELETE);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(849);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(anon_sym_CONNECT);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(anon_sym_CONNECT);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(849);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(anon_sym_OPTIONS);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(anon_sym_OPTIONS);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(849);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(anon_sym_TRACE);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(anon_sym_TRACE);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(849);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(anon_sym_PATCH);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(anon_sym_PATCH);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(849);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(anon_sym_LINK);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(anon_sym_LINK);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(849);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(anon_sym_UNLINK);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(anon_sym_UNLINK);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(849);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(anon_sym_PURGE);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(anon_sym_PURGE);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(849);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(anon_sym_LOCK);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(anon_sym_LOCK);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(849);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(anon_sym_UNLOCK);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(anon_sym_UNLOCK);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(849);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(anon_sym_PROPFIND);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(anon_sym_PROPFIND);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(849);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(anon_sym_VIEW);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(anon_sym_VIEW);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(849);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(anon_sym_HTTP_SLASH1_DOT0);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(anon_sym_HTTP_SLASH1_DOT1);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(anon_sym_HTTP_SLASH2);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(anon_sym_HTTP_SLASH_STAR);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(anon_sym_HTTP);
      if (lookahead == '/') ADVANCE(41);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(anon_sym_HTTP);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(849);
      if (lookahead == '/') ADVANCE(41);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(aux_sym_status_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(579);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(anon_sym_LBRACKBasicAuth_RBRACK);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(anon_sym_LBRACKBasicAuth_RBRACK);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(849);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(anon_sym_LBRACKQueryStringParams_RBRACK);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(anon_sym_LBRACKQueryStringParams_RBRACK);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(849);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(anon_sym_LBRACKFormParams_RBRACK);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(anon_sym_LBRACKFormParams_RBRACK);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(849);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(anon_sym_LBRACKMultipartFormData_RBRACK);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(anon_sym_LBRACKMultipartFormData_RBRACK);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(849);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(anon_sym_LBRACKCookies_RBRACK);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(anon_sym_LBRACKCookies_RBRACK);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(849);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(anon_sym_LBRACKCaptures_RBRACK);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(anon_sym_LBRACKCaptures_RBRACK);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(849);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(anon_sym_LBRACKAsserts_RBRACK);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(anon_sym_LBRACKAsserts_RBRACK);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(849);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(anon_sym_LBRACKOptions_RBRACK);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(anon_sym_LBRACKOptions_RBRACK);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(849);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(anon_sym_COLON2);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(anon_sym_file_COMMA);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(aux_sym_file_contenttype_token1);
      if (lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(601);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(anon_sym_cacert);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(anon_sym_compressed);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(anon_sym_location);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(anon_sym_insecure);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(anon_sym_max_DASHredirs);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(anon_sym_path_DASHas_DASHis);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(anon_sym_proxy);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(anon_sym_retry);
      if (lookahead == '-') ADVANCE(286);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(anon_sym_retry_DASHinterval);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(anon_sym_retry_DASHmax_DASHcount);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(anon_sym_variable);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(anon_sym_verbose);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(anon_sym_very_DASHverbose);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(631);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(anon_sym_status);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(anon_sym_url);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(anon_sym_header);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(anon_sym_cookie);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(anon_sym_body);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(anon_sym_xpath);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(anon_sym_jsonpath);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(anon_sym_regex);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(anon_sym_duration);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(anon_sym_sha256);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(anon_sym_md5);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(anon_sym_bytes);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(anon_sym_not);
      if (lookahead == 'E') ADVANCE(391);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(anon_sym_equals);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(anon_sym_notEquals);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(anon_sym_greaterThan);
      if (lookahead == 'O') ADVANCE(425);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(638);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(anon_sym_greaterThanOrEquals);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(anon_sym_lessThan);
      if (lookahead == 'O') ADVANCE(412);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '/') ADVANCE(665);
      if (lookahead == '=') ADVANCE(645);
      if (lookahead == '?') ADVANCE(657);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '/') ADVANCE(665);
      if (lookahead == '?') ADVANCE(657);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(645);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '?') ADVANCE(657);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(anon_sym_lessThanOrEquals);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(anon_sym_startsWith);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(anon_sym_endsWith);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(anon_sym_contains);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(anon_sym_matches);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(anon_sym_exists);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(anon_sym_includes);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(anon_sym_isInteger);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(anon_sym_isFloat);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(anon_sym_isBoolean);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(anon_sym_isString);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(anon_sym_isCollection);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(anon_sym_LT_QMARK);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(aux_sym_xml_prolog_tag_token1);
      if (lookahead == '\n') ADVANCE(660);
      if (lookahead == '?') ADVANCE(1);
      if (lookahead != 0) ADVANCE(658);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(aux_sym_xml_prolog_tag_token1);
      if (lookahead == '#') ADVANCE(658);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) ADVANCE(659);
      if (lookahead != 0 &&
          lookahead != '?') ADVANCE(660);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(aux_sym_xml_prolog_tag_token1);
      if (lookahead != 0 &&
          lookahead != '?') ADVANCE(660);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(anon_sym_QMARK_GT);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(aux_sym_xml_open_tag_token1);
      if (lookahead == '\n') ADVANCE(664);
      if (lookahead == '>') ADVANCE(1);
      if (lookahead != 0) ADVANCE(662);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(aux_sym_xml_open_tag_token1);
      if (lookahead == '#') ADVANCE(662);
      if (lookahead == '>') ADVANCE(664);
      if (lookahead == '/' ||
          lookahead == '?') ADVANCE(664);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) ADVANCE(663);
      if (lookahead != 0) ADVANCE(664);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(aux_sym_xml_open_tag_token1);
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(664);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(anon_sym_LT_SLASH);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(aux_sym_xml_close_tag_token1);
      if (lookahead == '\n') ADVANCE(668);
      if (lookahead == '/' ||
          lookahead == '>') ADVANCE(1);
      if (lookahead != 0) ADVANCE(666);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(aux_sym_xml_close_tag_token1);
      if (lookahead == '#') ADVANCE(666);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) ADVANCE(667);
      if (lookahead != 0 &&
          lookahead != '/' &&
          lookahead != '>') ADVANCE(668);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(aux_sym_xml_close_tag_token1);
      if (lookahead != 0 &&
          lookahead != '/' &&
          lookahead != '>') ADVANCE(668);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(anon_sym_base64_COMMA);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(aux_sym_oneline_base64_token1);
      if (lookahead == '\n') ADVANCE(670);
      if (('+' <= lookahead && lookahead <= '-') ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(aux_sym_oneline_base64_token1);
      if (lookahead == '\n' ||
          ('+' <= lookahead && lookahead <= '-') ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(anon_sym_hex_COMMA);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(aux_sym_quoted_string_text_token1);
      if (lookahead == '\n') ADVANCE(677);
      if (lookahead == '"' ||
          lookahead == '\\') ADVANCE(1);
      if (lookahead != 0) ADVANCE(674);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(aux_sym_quoted_string_text_token1);
      if (lookahead == '#') ADVANCE(674);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) ADVANCE(675);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(677);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(aux_sym_quoted_string_text_token1);
      if (lookahead == '{') ADVANCE(901);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(677);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(aux_sym_quoted_string_text_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(677);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(aux_sym_invalid_quoted_string_escaped_char_token1);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(aux_sym_invalid_quoted_string_escaped_char_token1);
      if (lookahead == '#') ADVANCE(681);
      if (lookahead == 'b') ADVANCE(682);
      if (lookahead == 'f') ADVANCE(683);
      if (lookahead == 'n') ADVANCE(684);
      if (lookahead == 'r') ADVANCE(685);
      if (lookahead == 't') ADVANCE(686);
      if (aux_sym_invalid_quoted_string_escaped_char_token1_character_set_1(lookahead)) ADVANCE(680);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\f' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\' &&
          lookahead != 'u') ADVANCE(679);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(aux_sym_invalid_quoted_string_escaped_char_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(anon_sym_b);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(anon_sym_f);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(anon_sym_n);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(anon_sym_r);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(anon_sym_t);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(anon_sym_u);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(sym_key_string_text);
      if (sym_key_string_text_character_set_3(lookahead)) ADVANCE(849);
      if (lookahead == 'A') ADVANCE(753);
      if (lookahead == 'O') ADVANCE(747);
      if (lookahead == 'R') ADVANCE(737);
      if (lookahead == 'U') ADVANCE(692);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(sym_key_string_text);
      if (sym_key_string_text_character_set_4(lookahead)) ADVANCE(849);
      if (lookahead == 'E') ADVANCE(696);
      if (lookahead == 'T') ADVANCE(751);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(sym_key_string_text);
      if (sym_key_string_text_character_set_5(lookahead)) ADVANCE(849);
      if (lookahead == 'I') ADVANCE(729);
      if (lookahead == 'O') ADVANCE(700);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(sym_key_string_text);
      if (sym_key_string_text_character_set_5(lookahead)) ADVANCE(849);
      if (lookahead == 'I') ADVANCE(733);
      if (lookahead == 'O') ADVANCE(701);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(sym_key_string_text);
      if (sym_key_string_text_character_set_6(lookahead)) ADVANCE(849);
      if (lookahead == 'R') ADVANCE(718);
      if (lookahead == 'T') ADVANCE(548);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'h') ||
          ('j' <= lookahead && lookahead <= 'z')) ADVANCE(849);
      if (lookahead == 'a') ADVANCE(777);
      if (lookahead == 'i') ADVANCE(775);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '3') ||
          ('5' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(849);
      if (lookahead == '4') ADVANCE(852);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '5') ||
          ('7' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(849);
      if (lookahead == '6') ADVANCE(694);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '@' ||
          ('B' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(849);
      if (lookahead == 'A') ADVANCE(704);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '@' ||
          ('B' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(849);
      if (lookahead == 'A') ADVANCE(702);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '@' ||
          ('B' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(849);
      if (lookahead == 'A') ADVANCE(824);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'B') ||
          ('D' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(849);
      if (lookahead == 'C') ADVANCE(719);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'B') ||
          ('D' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(849);
      if (lookahead == 'C') ADVANCE(724);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'B') ||
          ('D' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(849);
      if (lookahead == 'C') ADVANCE(726);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'B') ||
          ('D' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(849);
      if (lookahead == 'C') ADVANCE(712);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'B') ||
          ('D' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(849);
      if (lookahead == 'C') ADVANCE(750);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'C') ||
          ('E' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(849);
      if (lookahead == 'D') ADVANCE(544);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'C') ||
          ('E' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(849);
      if (lookahead == 'D') ADVANCE(570);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'C') ||
          ('E' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(849);
      if (lookahead == 'D') ADVANCE(836);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(849);
      if (lookahead == 'E') ADVANCE(727);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(849);
      if (lookahead == 'E') ADVANCE(748);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(849);
      if (lookahead == 'E') ADVANCE(696);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'D') ||
          ('F' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(849);
      if (lookahead == 'E') ADVANCE(755);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'D') ||
          ('F' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(849);
      if (lookahead == 'E') ADVANCE(564);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'D') ||
          ('F' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(849);
      if (lookahead == 'E') ADVANCE(556);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'D') ||
          ('F' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(849);
      if (lookahead == 'E') ADVANCE(550);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'D') ||
          ('F' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(849);
      if (lookahead == 'E') ADVANCE(703);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'D') ||
          ('F' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(849);
      if (lookahead == 'E') ADVANCE(754);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'E') ||
          ('G' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(849);
      if (lookahead == 'F') ADVANCE(721);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'E') ||
          ('G' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(849);
      if (lookahead == 'F') ADVANCE(789);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'F') ||
          ('H' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(849);
      if (lookahead == 'G') ADVANCE(711);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'G') ||
          ('I' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(849);
      if (lookahead == 'H') ADVANCE(558);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'H') ||
          ('J' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(849);
      if (lookahead == 'I') ADVANCE(710);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'H') ||
          ('J' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(849);
      if (lookahead == 'I') ADVANCE(732);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'H') ||
          ('J' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(849);
      if (lookahead == 'I') ADVANCE(738);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'J') ||
          ('L' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(849);
      if (lookahead == 'K') ADVANCE(560);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'J') ||
          ('L' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(849);
      if (lookahead == 'K') ADVANCE(566);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'J') ||
          ('L' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(849);
      if (lookahead == 'K') ADVANCE(562);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'J') ||
          ('L' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(849);
      if (lookahead == 'K') ADVANCE(568);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'K') ||
          ('M' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(849);
      if (lookahead == 'L') ADVANCE(715);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'K') ||
          ('M' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(849);
      if (lookahead == 'L') ADVANCE(691);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(849);
      if (lookahead == 'N') ADVANCE(723);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'M') ||
          ('O' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(849);
      if (lookahead == 'N') ADVANCE(728);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'M') ||
          ('O' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(849);
      if (lookahead == 'N') ADVANCE(745);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'M') ||
          ('O' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(849);
      if (lookahead == 'N') ADVANCE(705);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'M') ||
          ('O' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(849);
      if (lookahead == 'N') ADVANCE(725);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'M') ||
          ('O' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(849);
      if (lookahead == 'N') ADVANCE(735);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'M') ||
          ('O' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(849);
      if (lookahead == 'N') ADVANCE(714);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'N') ||
          ('P' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(849);
      if (lookahead == 'O') ADVANCE(734);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'N') ||
          ('P' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(849);
      if (lookahead == 'O') ADVANCE(740);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'N') ||
          ('P' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(849);
      if (lookahead == 'O') ADVANCE(731);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'O') ||
          ('Q' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(849);
      if (lookahead == 'P') ADVANCE(578);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'O') ||
          ('Q' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(849);
      if (lookahead == 'P') ADVANCE(716);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'O') ||
          ('Q' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(849);
      if (lookahead == 'P') ADVANCE(834);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'O') ||
          ('Q' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(849);
      if (lookahead == 'P') ADVANCE(752);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'O') ||
          ('Q' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(849);
      if (lookahead == 'P') ADVANCE(840);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Q') ||
          ('S' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(849);
      if (lookahead == 'R') ADVANCE(697);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'R') ||
          ('T' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(849);
      if (lookahead == 'S') ADVANCE(554);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'R') ||
          ('T' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(849);
      if (lookahead == 'S') ADVANCE(820);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'R') ||
          ('T' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(849);
      if (lookahead == 'S') ADVANCE(749);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(849);
      if (lookahead == 'T') ADVANCE(542);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'S') ||
          ('U' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(849);
      if (lookahead == 'T') ADVANCE(546);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'S') ||
          ('U' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(849);
      if (lookahead == 'T') ADVANCE(552);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'S') ||
          ('U' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(849);
      if (lookahead == 'T') ADVANCE(739);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'S') ||
          ('U' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(849);
      if (lookahead == 'T') ADVANCE(722);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'S') ||
          ('U' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(849);
      if (lookahead == 'T') ADVANCE(699);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'S') ||
          ('U' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(849);
      if (lookahead == 'T') ADVANCE(713);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'V') ||
          ('X' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(849);
      if (lookahead == 'W') ADVANCE(572);
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
          lookahead == 'a' ||
          lookahead == 'b' ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(849);
      if (lookahead == 'c') ADVANCE(698);
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
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(849);
      if (lookahead == 'e') ADVANCE(828);
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
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(849);
      if (lookahead == 'e') ADVANCE(695);
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
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(849);
      if (lookahead == 'e') ADVANCE(912);
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
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(849);
      if (lookahead == 'e') ADVANCE(914);
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
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(849);
      if (lookahead == 'e') ADVANCE(851);
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
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(849);
      if (lookahead == 'e') ADVANCE(794);
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
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(849);
      if (lookahead == 'e') ADVANCE(804);
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
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(849);
      if (lookahead == 'e') ADVANCE(800);
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
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(849);
      if (lookahead == 'e') ADVANCE(811);
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
          ('a' <= lookahead && lookahead <= 'f') ||
          ('h' <= lookahead && lookahead <= 'z')) ADVANCE(849);
      if (lookahead == 'g') ADVANCE(743);
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
          ('a' <= lookahead && lookahead <= 'g') ||
          ('i' <= lookahead && lookahead <= 'z')) ADVANCE(849);
      if (lookahead == 'h') ADVANCE(843);
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
          ('a' <= lookahead && lookahead <= 'h') ||
          ('j' <= lookahead && lookahead <= 'z')) ADVANCE(849);
      if (lookahead == 'i') ADVANCE(756);
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
          ('a' <= lookahead && lookahead <= 'h') ||
          ('j' <= lookahead && lookahead <= 'z')) ADVANCE(849);
      if (lookahead == 'i') ADVANCE(792);
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
          ('a' <= lookahead && lookahead <= 'h') ||
          ('j' <= lookahead && lookahead <= 'z')) ADVANCE(849);
      if (lookahead == 'i') ADVANCE(783);
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
          ('a' <= lookahead && lookahead <= 'h') ||
          ('j' <= lookahead && lookahead <= 'z')) ADVANCE(849);
      if (lookahead == 'i') ADVANCE(786);
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
          ('a' <= lookahead && lookahead <= 'h') ||
          ('j' <= lookahead && lookahead <= 'z')) ADVANCE(849);
      if (lookahead == 'i') ADVANCE(763);
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
          ('a' <= lookahead && lookahead <= 'j') ||
          ('l' <= lookahead && lookahead <= 'z')) ADVANCE(849);
      if (lookahead == 'k') ADVANCE(772);
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
          ('a' <= lookahead && lookahead <= 'k') ||
          ('m' <= lookahead && lookahead <= 'z')) ADVANCE(849);
      if (lookahead == 'l') ADVANCE(916);
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
          ('a' <= lookahead && lookahead <= 'k') ||
          ('m' <= lookahead && lookahead <= 'z')) ADVANCE(849);
      if (lookahead == 'l') ADVANCE(761);
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
          ('a' <= lookahead && lookahead <= 'k') ||
          ('m' <= lookahead && lookahead <= 'z')) ADVANCE(849);
      if (lookahead == 'l') ADVANCE(774);
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
          ('a' <= lookahead && lookahead <= 'k') ||
          ('m' <= lookahead && lookahead <= 'z')) ADVANCE(849);
      if (lookahead == 'l') ADVANCE(808);
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
          ('a' <= lookahead && lookahead <= 'k') ||
          ('m' <= lookahead && lookahead <= 'z')) ADVANCE(849);
      if (lookahead == 'l') ADVANCE(817);
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
          ('a' <= lookahead && lookahead <= 'l') ||
          ('n' <= lookahead && lookahead <= 'z')) ADVANCE(849);
      if (lookahead == 'm') ADVANCE(706);
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
          ('a' <= lookahead && lookahead <= 'l') ||
          ('n' <= lookahead && lookahead <= 'z')) ADVANCE(849);
      if (lookahead == 'm') ADVANCE(741);
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
          ('a' <= lookahead && lookahead <= 'l') ||
          ('n' <= lookahead && lookahead <= 'z')) ADVANCE(849);
      if (lookahead == 'm') ADVANCE(807);
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
          ('a' <= lookahead && lookahead <= 'l') ||
          ('n' <= lookahead && lookahead <= 'z')) ADVANCE(849);
      if (lookahead == 'm') ADVANCE(809);
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
          ('a' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'z')) ADVANCE(849);
      if (lookahead == 'n') ADVANCE(766);
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
          ('a' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'z')) ADVANCE(849);
      if (lookahead == 'n') ADVANCE(805);
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
          ('a' <= lookahead && lookahead <= 'n') ||
          ('p' <= lookahead && lookahead <= 'z')) ADVANCE(849);
      if (lookahead == 'o') ADVANCE(773);
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
          ('a' <= lookahead && lookahead <= 'n') ||
          ('p' <= lookahead && lookahead <= 'z')) ADVANCE(849);
      if (lookahead == 'o') ADVANCE(784);
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
          ('a' <= lookahead && lookahead <= 'n') ||
          ('p' <= lookahead && lookahead <= 'z')) ADVANCE(849);
      if (lookahead == 'o') ADVANCE(793);
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
          ('a' <= lookahead && lookahead <= 'n') ||
          ('p' <= lookahead && lookahead <= 'z')) ADVANCE(849);
      if (lookahead == 'o') ADVANCE(785);
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
          ('a' <= lookahead && lookahead <= 'n') ||
          ('p' <= lookahead && lookahead <= 'z')) ADVANCE(849);
      if (lookahead == 'o') ADVANCE(797);
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
          ('a' <= lookahead && lookahead <= 'o') ||
          ('q' <= lookahead && lookahead <= 'z')) ADVANCE(849);
      if (lookahead == 'p') ADVANCE(816);
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
          ('a' <= lookahead && lookahead <= 'o') ||
          ('q' <= lookahead && lookahead <= 'z')) ADVANCE(849);
      if (lookahead == 'p') ADVANCE(819);
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
          ('a' <= lookahead && lookahead <= 'o') ||
          ('q' <= lookahead && lookahead <= 'z')) ADVANCE(849);
      if (lookahead == 'p') ADVANCE(835);
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
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(849);
      if (lookahead == 'r') ADVANCE(780);
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
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(849);
      if (lookahead == 'r') ADVANCE(829);
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
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(849);
      if (lookahead == 'r') ADVANCE(833);
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
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(849);
      if (lookahead == 'r') ADVANCE(826);
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
          ('a' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(849);
      if (lookahead == 'r') ADVANCE(779);
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
          ('a' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(849);
      if (lookahead == 'r') ADVANCE(815);
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
          ('a' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(849);
      if (lookahead == 'r') ADVANCE(770);
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
          ('a' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(849);
      if (lookahead == 'r') ADVANCE(821);
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
          ('a' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(849);
      if (lookahead == 'r') ADVANCE(765);
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
          ('a' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(849);
      if (lookahead == 'r') ADVANCE(839);
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
          ('t' <= lookahead && lookahead <= 'z')) ADVANCE(849);
      if (lookahead == 's') ADVANCE(768);
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
          ('t' <= lookahead && lookahead <= 'z')) ADVANCE(849);
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
          ('t' <= lookahead && lookahead <= 'z')) ADVANCE(849);
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
          ('t' <= lookahead && lookahead <= 'z')) ADVANCE(849);
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
          ('t' <= lookahead && lookahead <= 'z')) ADVANCE(849);
      if (lookahead == 's') ADVANCE(844);
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
          ('a' <= lookahead && lookahead <= 'r') ||
          ('t' <= lookahead && lookahead <= 'z')) ADVANCE(849);
      if (lookahead == 's') ADVANCE(760);
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
          ('a' <= lookahead && lookahead <= 'r') ||
          ('t' <= lookahead && lookahead <= 'z')) ADVANCE(849);
      if (lookahead == 's') ADVANCE(846);
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
          ('a' <= lookahead && lookahead <= 'r') ||
          ('t' <= lookahead && lookahead <= 'z')) ADVANCE(849);
      if (lookahead == 's') ADVANCE(847);
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
          ('a' <= lookahead && lookahead <= 'r') ||
          ('t' <= lookahead && lookahead <= 'z')) ADVANCE(849);
      if (lookahead == 's') ADVANCE(848);
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
          ('a' <= lookahead && lookahead <= 'r') ||
          ('t' <= lookahead && lookahead <= 'z')) ADVANCE(849);
      if (lookahead == 's') ADVANCE(764);
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
          ('a' <= lookahead && lookahead <= 'r') ||
          ('t' <= lookahead && lookahead <= 'z')) ADVANCE(849);
      if (lookahead == 's') ADVANCE(812);
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
          ('u' <= lookahead && lookahead <= 'z')) ADVANCE(849);
      if (lookahead == 't') ADVANCE(767);
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
          ('u' <= lookahead && lookahead <= 'z')) ADVANCE(849);
      if (lookahead == 't') ADVANCE(717);
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
          ('a' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z')) ADVANCE(849);
      if (lookahead == 't') ADVANCE(771);
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
          ('a' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z')) ADVANCE(849);
      if (lookahead == 't') ADVANCE(769);
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
          ('a' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z')) ADVANCE(849);
      if (lookahead == 't') ADVANCE(837);
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
          ('a' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z')) ADVANCE(849);
      if (lookahead == 't') ADVANCE(827);
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
          ('a' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z')) ADVANCE(849);
      if (lookahead == 't') ADVANCE(799);
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
          ('a' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z')) ADVANCE(849);
      if (lookahead == 't') ADVANCE(810);
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
          ('a' <= lookahead && lookahead <= 't') ||
          ('v' <= lookahead && lookahead <= 'z')) ADVANCE(849);
      if (lookahead == 'u') ADVANCE(762);
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
          ('a' <= lookahead && lookahead <= 't') ||
          ('v' <= lookahead && lookahead <= 'z')) ADVANCE(849);
      if (lookahead == 'u') ADVANCE(776);
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
          ('a' <= lookahead && lookahead <= 't') ||
          ('v' <= lookahead && lookahead <= 'z')) ADVANCE(849);
      if (lookahead == 'u') ADVANCE(814);
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
          ('a' <= lookahead && lookahead <= 't') ||
          ('v' <= lookahead && lookahead <= 'z')) ADVANCE(849);
      if (lookahead == 'u') ADVANCE(778);
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
          ('a' <= lookahead && lookahead <= 't') ||
          ('v' <= lookahead && lookahead <= 'z')) ADVANCE(849);
      if (lookahead == 'u') ADVANCE(759);
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
          ('a' <= lookahead && lookahead <= 't') ||
          ('v' <= lookahead && lookahead <= 'z')) ADVANCE(849);
      if (lookahead == 'u') ADVANCE(801);
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
          ('a' <= lookahead && lookahead <= 'w') ||
          lookahead == 'y' ||
          lookahead == 'z') ADVANCE(849);
      if (lookahead == 'x') ADVANCE(850);
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
          ('a' <= lookahead && lookahead <= 'x') ||
          lookahead == 'z') ADVANCE(849);
      if (lookahead == 'y') ADVANCE(746);
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
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(849);
      if (lookahead == 'a') ADVANCE(806);
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
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(849);
      if (lookahead == 'a') ADVANCE(777);
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
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(849);
      if (lookahead == 'a') ADVANCE(803);
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
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(849);
      if (lookahead == 'a') ADVANCE(781);
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
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(849);
      if (lookahead == 'a') ADVANCE(795);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(849);
      if (lookahead == 'a') ADVANCE(798);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(849);
      if (lookahead == 'a') ADVANCE(818);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(849);
      if (lookahead == 'a') ADVANCE(845);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(849);
      if (lookahead == 'a') ADVANCE(791);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(849);
      if (lookahead == 'a') ADVANCE(782);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(849);
      if (lookahead == 'a') ADVANCE(802);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(849);
      if (lookahead == ']') ADVANCE(590);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(849);
      if (lookahead == ']') ADVANCE(596);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(849);
      if (lookahead == ']') ADVANCE(582);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(849);
      if (lookahead == ']') ADVANCE(586);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(849);
      if (lookahead == ']') ADVANCE(588);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(849);
      if (lookahead == ']') ADVANCE(584);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(849);
      if (lookahead == ']') ADVANCE(594);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(849);
      if (lookahead == ']') ADVANCE(592);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(849);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(849);
      if (lookahead == ',') ADVANCE(672);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(849);
      if (lookahead == ',') ADVANCE(599);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(849);
      if (lookahead == ',') ADVANCE(669);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(anon_sym_BSLASH2);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(aux_sym_key_string_escaped_char_token1);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(aux_sym_key_string_escaped_char_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(aux_sym_value_string_text_token1);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(aux_sym_value_string_text_token1);
      if (lookahead == 'a') ADVANCE(311);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(aux_sym_value_string_text_token1);
      if (lookahead == 'r') ADVANCE(506);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(aux_sym_value_string_text_token1);
      if (lookahead == 'u') ADVANCE(308);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(aux_sym_value_string_text_token1);
      if (lookahead == '{') ADVANCE(899);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      if (lookahead == '`') ADVANCE(147);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(aux_sym_oneline_string_text_token1);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(aux_sym_oneline_string_text_token1);
      if (lookahead == '`') ADVANCE(862);
      if (aux_sym_value_string_text_token1_character_set_1(lookahead)) ADVANCE(865);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(864);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(aux_sym_oneline_string_text_token1);
      if (lookahead == '{') ADVANCE(899);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(aux_sym_oneline_string_text_token2);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(aux_sym_oneline_string_text_token2);
      if (lookahead == '#') ADVANCE(869);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) ADVANCE(868);
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(867);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(aux_sym_oneline_string_text_token2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(anon_sym_BQUOTE_BQUOTE_BQUOTE);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(anon_sym_base64);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(anon_sym_hex);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(anon_sym_json);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(anon_sym_xml);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(anon_sym_graphql);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(aux_sym__multiline_string_text_token1);
      if (lookahead == '\n') ADVANCE(540);
      if (lookahead == '#') ADVANCE(877);
      if (aux_sym_value_string_text_token1_character_set_1(lookahead)) ADVANCE(876);
      if (lookahead != 0 &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != '{') ADVANCE(878);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(aux_sym__multiline_string_text_token1);
      if (lookahead == '\n') ADVANCE(878);
      if (lookahead == '\\' ||
          lookahead == '`' ||
          lookahead == '{') ADVANCE(1);
      if (lookahead != 0) ADVANCE(877);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(aux_sym__multiline_string_text_token1);
      if (lookahead != 0 &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != '{') ADVANCE(878);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '{') ADVANCE(899);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(sym_filename_text);
      if (lookahead == '\n') ADVANCE(539);
      if (sym_filename_text_character_set_1(lookahead)) ADVANCE(881);
      if (lookahead != 0 &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '\\') ADVANCE(884);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(sym_filename_text);
      if (lookahead == '{') ADVANCE(900);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '\\') ADVANCE(884);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(sym_filename_text);
      if (sym_filename_text_character_set_1(lookahead)) ADVANCE(883);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '\\') ADVANCE(884);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(sym_filename_text);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '\\') ADVANCE(884);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(aux_sym_filename_escaped_char_token1);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == 'A') ADVANCE(440);
      if (lookahead == 'B') ADVANCE(157);
      if (lookahead == 'C') ADVANCE(179);
      if (lookahead == 'F') ADVANCE(352);
      if (lookahead == 'M') ADVANCE(499);
      if (lookahead == 'O') ADVANCE(381);
      if (lookahead == 'Q') ADVANCE(500);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == 'A') ADVANCE(440);
      if (lookahead == 'C') ADVANCE(178);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == 'B') ADVANCE(157);
      if (lookahead == 'C') ADVANCE(357);
      if (lookahead == 'F') ADVANCE(352);
      if (lookahead == 'M') ADVANCE(499);
      if (lookahead == 'O') ADVANCE(381);
      if (lookahead == 'Q') ADVANCE(500);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (sym_key_string_text_character_set_7(lookahead)) ADVANCE(849);
      if (lookahead == 'B') ADVANCE(832);
      if (lookahead == 'C') ADVANCE(788);
      if (lookahead == 'F') ADVANCE(787);
      if (lookahead == 'M') ADVANCE(825);
      if (lookahead == 'O') ADVANCE(790);
      if (lookahead == 'Q') ADVANCE(822);
      END_STATE();
    case 893:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (sym_key_string_text_character_set_8(lookahead)) ADVANCE(849);
      if (lookahead == 'A') ADVANCE(813);
      if (lookahead == 'C') ADVANCE(838);
      END_STATE();
    case 894:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 895:
      ACCEPT_TOKEN(aux_sym_json_string_text_token1);
      END_STATE();
    case 896:
      ACCEPT_TOKEN(aux_sym_json_string_text_token1);
      if (lookahead == '#') ADVANCE(898);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) ADVANCE(896);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(895);
      END_STATE();
    case 897:
      ACCEPT_TOKEN(aux_sym_json_string_text_token1);
      if (lookahead == '{') ADVANCE(899);
      END_STATE();
    case 898:
      ACCEPT_TOKEN(aux_sym_json_string_text_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1);
      END_STATE();
    case 899:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      END_STATE();
    case 900:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '\\') ADVANCE(884);
      END_STATE();
    case 901:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(677);
      END_STATE();
    case 902:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 903:
      ACCEPT_TOKEN(aux_sym_variable_name_token1);
      END_STATE();
    case 904:
      ACCEPT_TOKEN(aux_sym_variable_name_token2);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(904);
      END_STATE();
    case 905:
      ACCEPT_TOKEN(anon_sym_count);
      END_STATE();
    case 906:
      ACCEPT_TOKEN(anon_sym_urlEncode);
      END_STATE();
    case 907:
      ACCEPT_TOKEN(anon_sym_urlDecode);
      END_STATE();
    case 908:
      ACCEPT_TOKEN(anon_sym_htmlEscape);
      END_STATE();
    case 909:
      ACCEPT_TOKEN(anon_sym_htmlUnescape);
      END_STATE();
    case 910:
      ACCEPT_TOKEN(anon_sym_toInt);
      END_STATE();
    case 911:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 912:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(849);
      END_STATE();
    case 913:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 914:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(849);
      END_STATE();
    case 915:
      ACCEPT_TOKEN(anon_sym_null);
      END_STATE();
    case 916:
      ACCEPT_TOKEN(anon_sym_null);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(849);
      END_STATE();
    case 917:
      ACCEPT_TOKEN(aux_sym_digit_token1);
      END_STATE();
    case 918:
      ACCEPT_TOKEN(aux_sym_hexdigit_token1);
      END_STATE();
    case 919:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 920:
      ACCEPT_TOKEN(anon_sym_e);
      END_STATE();
    case 921:
      ACCEPT_TOKEN(anon_sym_E);
      END_STATE();
    case 922:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 923:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 924:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 925:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 926:
      ACCEPT_TOKEN(aux_sym_regex_text_token1);
      if (lookahead == '\n') ADVANCE(924);
      if (lookahead == '/' ||
          lookahead == '\\') ADVANCE(1);
      if (lookahead != 0) ADVANCE(926);
      END_STATE();
    case 927:
      ACCEPT_TOKEN(aux_sym_regex_text_token1);
      if (lookahead == '#') ADVANCE(928);
      if (aux_sym_value_string_text_token1_character_set_1(lookahead)) ADVANCE(927);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '/' &&
          lookahead != '\\') ADVANCE(929);
      END_STATE();
    case 928:
      ACCEPT_TOKEN(aux_sym_regex_text_token1);
      if (lookahead == '/' ||
          lookahead == '\\') ADVANCE(1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(926);
      END_STATE();
    case 929:
      ACCEPT_TOKEN(aux_sym_regex_text_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '/' &&
          lookahead != '\\') ADVANCE(929);
      END_STATE();
    case 930:
      ACCEPT_TOKEN(aux_sym_regex_escaped_char_token1);
      END_STATE();
    case 931:
      ACCEPT_TOKEN(aux_sym_regex_escaped_char_token1);
      if (lookahead == '#') ADVANCE(932);
      if (aux_sym_value_string_text_token1_character_set_1(lookahead)) ADVANCE(931);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(930);
      END_STATE();
    case 932:
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
  [1] = {.lex_state = 530},
  [2] = {.lex_state = 534},
  [3] = {.lex_state = 534},
  [4] = {.lex_state = 534},
  [5] = {.lex_state = 534},
  [6] = {.lex_state = 530},
  [7] = {.lex_state = 530},
  [8] = {.lex_state = 530},
  [9] = {.lex_state = 535},
  [10] = {.lex_state = 530},
  [11] = {.lex_state = 530},
  [12] = {.lex_state = 535},
  [13] = {.lex_state = 530},
  [14] = {.lex_state = 530},
  [15] = {.lex_state = 530},
  [16] = {.lex_state = 530},
  [17] = {.lex_state = 530},
  [18] = {.lex_state = 530},
  [19] = {.lex_state = 530},
  [20] = {.lex_state = 530},
  [21] = {.lex_state = 18},
  [22] = {.lex_state = 18},
  [23] = {.lex_state = 530},
  [24] = {.lex_state = 530},
  [25] = {.lex_state = 530},
  [26] = {.lex_state = 530},
  [27] = {.lex_state = 530},
  [28] = {.lex_state = 530},
  [29] = {.lex_state = 530},
  [30] = {.lex_state = 530},
  [31] = {.lex_state = 530},
  [32] = {.lex_state = 530},
  [33] = {.lex_state = 530},
  [34] = {.lex_state = 530},
  [35] = {.lex_state = 530},
  [36] = {.lex_state = 530},
  [37] = {.lex_state = 530},
  [38] = {.lex_state = 534},
  [39] = {.lex_state = 534},
  [40] = {.lex_state = 534},
  [41] = {.lex_state = 534},
  [42] = {.lex_state = 534},
  [43] = {.lex_state = 534},
  [44] = {.lex_state = 534},
  [45] = {.lex_state = 534},
  [46] = {.lex_state = 534},
  [47] = {.lex_state = 534},
  [48] = {.lex_state = 534},
  [49] = {.lex_state = 534},
  [50] = {.lex_state = 534},
  [51] = {.lex_state = 530},
  [52] = {.lex_state = 534},
  [53] = {.lex_state = 530},
  [54] = {.lex_state = 530},
  [55] = {.lex_state = 534},
  [56] = {.lex_state = 534},
  [57] = {.lex_state = 534},
  [58] = {.lex_state = 535},
  [59] = {.lex_state = 535},
  [60] = {.lex_state = 535},
  [61] = {.lex_state = 535},
  [62] = {.lex_state = 530},
  [63] = {.lex_state = 530},
  [64] = {.lex_state = 18},
  [65] = {.lex_state = 18},
  [66] = {.lex_state = 530},
  [67] = {.lex_state = 535},
  [68] = {.lex_state = 535},
  [69] = {.lex_state = 535},
  [70] = {.lex_state = 535},
  [71] = {.lex_state = 535},
  [72] = {.lex_state = 530},
  [73] = {.lex_state = 18},
  [74] = {.lex_state = 18},
  [75] = {.lex_state = 18},
  [76] = {.lex_state = 18},
  [77] = {.lex_state = 18},
  [78] = {.lex_state = 18},
  [79] = {.lex_state = 18},
  [80] = {.lex_state = 18},
  [81] = {.lex_state = 18},
  [82] = {.lex_state = 18},
  [83] = {.lex_state = 18},
  [84] = {.lex_state = 18},
  [85] = {.lex_state = 18},
  [86] = {.lex_state = 18},
  [87] = {.lex_state = 18},
  [88] = {.lex_state = 18},
  [89] = {.lex_state = 18},
  [90] = {.lex_state = 18},
  [91] = {.lex_state = 18},
  [92] = {.lex_state = 18},
  [93] = {.lex_state = 18},
  [94] = {.lex_state = 18},
  [95] = {.lex_state = 18},
  [96] = {.lex_state = 18},
  [97] = {.lex_state = 18},
  [98] = {.lex_state = 18},
  [99] = {.lex_state = 23},
  [100] = {.lex_state = 530},
  [101] = {.lex_state = 530},
  [102] = {.lex_state = 18},
  [103] = {.lex_state = 530},
  [104] = {.lex_state = 530},
  [105] = {.lex_state = 18},
  [106] = {.lex_state = 530},
  [107] = {.lex_state = 18},
  [108] = {.lex_state = 530},
  [109] = {.lex_state = 530},
  [110] = {.lex_state = 2},
  [111] = {.lex_state = 22},
  [112] = {.lex_state = 530},
  [113] = {.lex_state = 530},
  [114] = {.lex_state = 18},
  [115] = {.lex_state = 8},
  [116] = {.lex_state = 4},
  [117] = {.lex_state = 18},
  [118] = {.lex_state = 18},
  [119] = {.lex_state = 8},
  [120] = {.lex_state = 18},
  [121] = {.lex_state = 8},
  [122] = {.lex_state = 4},
  [123] = {.lex_state = 8},
  [124] = {.lex_state = 530},
  [125] = {.lex_state = 530},
  [126] = {.lex_state = 8},
  [127] = {.lex_state = 530},
  [128] = {.lex_state = 530},
  [129] = {.lex_state = 530},
  [130] = {.lex_state = 18},
  [131] = {.lex_state = 4},
  [132] = {.lex_state = 18},
  [133] = {.lex_state = 7},
  [134] = {.lex_state = 3},
  [135] = {.lex_state = 7},
  [136] = {.lex_state = 7},
  [137] = {.lex_state = 7},
  [138] = {.lex_state = 8},
  [139] = {.lex_state = 8},
  [140] = {.lex_state = 9},
  [141] = {.lex_state = 27},
  [142] = {.lex_state = 24},
  [143] = {.lex_state = 3},
  [144] = {.lex_state = 11},
  [145] = {.lex_state = 24},
  [146] = {.lex_state = 11},
  [147] = {.lex_state = 24},
  [148] = {.lex_state = 11},
  [149] = {.lex_state = 24},
  [150] = {.lex_state = 24},
  [151] = {.lex_state = 11},
  [152] = {.lex_state = 3},
  [153] = {.lex_state = 11},
  [154] = {.lex_state = 12},
  [155] = {.lex_state = 30},
  [156] = {.lex_state = 13},
  [157] = {.lex_state = 27},
  [158] = {.lex_state = 30},
  [159] = {.lex_state = 27},
  [160] = {.lex_state = 27},
  [161] = {.lex_state = 13},
  [162] = {.lex_state = 13},
  [163] = {.lex_state = 27},
  [164] = {.lex_state = 8},
  [165] = {.lex_state = 8},
  [166] = {.lex_state = 25},
  [167] = {.lex_state = 25},
  [168] = {.lex_state = 7},
  [169] = {.lex_state = 30},
  [170] = {.lex_state = 26},
  [171] = {.lex_state = 25},
  [172] = {.lex_state = 36},
  [173] = {.lex_state = 23},
  [174] = {.lex_state = 25},
  [175] = {.lex_state = 36},
  [176] = {.lex_state = 9},
  [177] = {.lex_state = 28},
  [178] = {.lex_state = 9},
  [179] = {.lex_state = 7},
  [180] = {.lex_state = 23},
  [181] = {.lex_state = 30},
  [182] = {.lex_state = 25},
  [183] = {.lex_state = 4},
  [184] = {.lex_state = 4},
  [185] = {.lex_state = 4},
  [186] = {.lex_state = 4},
  [187] = {.lex_state = 4},
  [188] = {.lex_state = 4},
  [189] = {.lex_state = 4},
  [190] = {.lex_state = 4},
  [191] = {.lex_state = 4},
  [192] = {.lex_state = 4},
  [193] = {.lex_state = 24},
  [194] = {.lex_state = 11},
  [195] = {.lex_state = 4},
  [196] = {.lex_state = 4},
  [197] = {.lex_state = 21},
  [198] = {.lex_state = 23},
  [199] = {.lex_state = 11},
  [200] = {.lex_state = 3},
  [201] = {.lex_state = 11},
  [202] = {.lex_state = 21},
  [203] = {.lex_state = 21},
  [204] = {.lex_state = 4},
  [205] = {.lex_state = 4},
  [206] = {.lex_state = 24},
  [207] = {.lex_state = 4},
  [208] = {.lex_state = 4},
  [209] = {.lex_state = 4},
  [210] = {.lex_state = 23},
  [211] = {.lex_state = 21},
  [212] = {.lex_state = 3},
  [213] = {.lex_state = 11},
  [214] = {.lex_state = 11},
  [215] = {.lex_state = 4},
  [216] = {.lex_state = 4},
  [217] = {.lex_state = 4},
  [218] = {.lex_state = 4},
  [219] = {.lex_state = 4},
  [220] = {.lex_state = 4},
  [221] = {.lex_state = 4},
  [222] = {.lex_state = 4},
  [223] = {.lex_state = 4},
  [224] = {.lex_state = 23},
  [225] = {.lex_state = 18},
  [226] = {.lex_state = 13},
  [227] = {.lex_state = 15},
  [228] = {.lex_state = 23},
  [229] = {.lex_state = 530},
  [230] = {.lex_state = 15},
  [231] = {.lex_state = 27},
  [232] = {.lex_state = 18},
  [233] = {.lex_state = 8},
  [234] = {.lex_state = 530},
  [235] = {.lex_state = 27},
  [236] = {.lex_state = 18},
  [237] = {.lex_state = 13},
  [238] = {.lex_state = 18},
  [239] = {.lex_state = 4},
  [240] = {.lex_state = 8},
  [241] = {.lex_state = 23},
  [242] = {.lex_state = 8},
  [243] = {.lex_state = 8},
  [244] = {.lex_state = 23},
  [245] = {.lex_state = 9},
  [246] = {.lex_state = 30},
  [247] = {.lex_state = 21},
  [248] = {.lex_state = 23},
  [249] = {.lex_state = 15},
  [250] = {.lex_state = 8},
  [251] = {.lex_state = 36},
  [252] = {.lex_state = 23},
  [253] = {.lex_state = 7},
  [254] = {.lex_state = 7},
  [255] = {.lex_state = 8},
  [256] = {.lex_state = 18},
  [257] = {.lex_state = 9},
  [258] = {.lex_state = 18},
  [259] = {.lex_state = 30},
  [260] = {.lex_state = 8},
  [261] = {.lex_state = 36},
  [262] = {.lex_state = 530},
  [263] = {.lex_state = 8},
  [264] = {.lex_state = 15},
  [265] = {.lex_state = 530},
  [266] = {.lex_state = 23},
  [267] = {.lex_state = 8},
  [268] = {.lex_state = 8},
  [269] = {.lex_state = 8},
  [270] = {.lex_state = 7},
  [271] = {.lex_state = 11},
  [272] = {.lex_state = 11},
  [273] = {.lex_state = 11},
  [274] = {.lex_state = 7},
  [275] = {.lex_state = 27},
  [276] = {.lex_state = 18},
  [277] = {.lex_state = 3},
  [278] = {.lex_state = 11},
  [279] = {.lex_state = 11},
  [280] = {.lex_state = 3},
  [281] = {.lex_state = 7},
  [282] = {.lex_state = 11},
  [283] = {.lex_state = 530},
  [284] = {.lex_state = 11},
  [285] = {.lex_state = 7},
  [286] = {.lex_state = 530},
  [287] = {.lex_state = 27},
  [288] = {.lex_state = 530},
  [289] = {.lex_state = 18},
  [290] = {.lex_state = 530},
  [291] = {.lex_state = 530},
  [292] = {.lex_state = 18},
  [293] = {.lex_state = 530},
  [294] = {.lex_state = 18},
  [295] = {.lex_state = 530},
  [296] = {.lex_state = 18},
  [297] = {.lex_state = 9},
  [298] = {.lex_state = 36},
  [299] = {.lex_state = 24},
  [300] = {.lex_state = 23},
  [301] = {.lex_state = 18},
  [302] = {.lex_state = 24},
  [303] = {.lex_state = 13},
  [304] = {.lex_state = 18},
  [305] = {.lex_state = 530},
  [306] = {.lex_state = 25},
  [307] = {.lex_state = 530},
  [308] = {.lex_state = 530},
  [309] = {.lex_state = 530},
  [310] = {.lex_state = 7},
  [311] = {.lex_state = 18},
  [312] = {.lex_state = 3},
  [313] = {.lex_state = 30},
  [314] = {.lex_state = 24},
  [315] = {.lex_state = 24},
  [316] = {.lex_state = 530},
  [317] = {.lex_state = 13},
  [318] = {.lex_state = 530},
  [319] = {.lex_state = 530},
  [320] = {.lex_state = 530},
  [321] = {.lex_state = 3},
  [322] = {.lex_state = 30},
  [323] = {.lex_state = 23},
  [324] = {.lex_state = 32},
  [325] = {.lex_state = 25},
  [326] = {.lex_state = 13},
  [327] = {.lex_state = 9},
  [328] = {.lex_state = 13},
  [329] = {.lex_state = 530},
  [330] = {.lex_state = 13},
  [331] = {.lex_state = 25},
  [332] = {.lex_state = 3},
  [333] = {.lex_state = 36},
  [334] = {.lex_state = 23},
  [335] = {.lex_state = 25},
  [336] = {.lex_state = 530},
  [337] = {.lex_state = 24},
  [338] = {.lex_state = 3},
  [339] = {.lex_state = 25},
  [340] = {.lex_state = 3},
  [341] = {.lex_state = 530},
  [342] = {.lex_state = 530},
  [343] = {.lex_state = 32},
  [344] = {.lex_state = 530},
  [345] = {.lex_state = 530},
  [346] = {.lex_state = 18},
  [347] = {.lex_state = 25},
  [348] = {.lex_state = 18},
  [349] = {.lex_state = 24},
  [350] = {.lex_state = 18},
  [351] = {.lex_state = 530},
  [352] = {.lex_state = 32},
  [353] = {.lex_state = 18},
  [354] = {.lex_state = 23},
  [355] = {.lex_state = 530},
  [356] = {.lex_state = 35},
  [357] = {.lex_state = 530},
  [358] = {.lex_state = 530},
  [359] = {.lex_state = 35},
  [360] = {.lex_state = 35},
  [361] = {.lex_state = 35},
  [362] = {.lex_state = 18},
  [363] = {.lex_state = 18},
  [364] = {.lex_state = 18},
  [365] = {.lex_state = 35},
  [366] = {.lex_state = 35},
  [367] = {.lex_state = 35},
  [368] = {.lex_state = 35},
  [369] = {.lex_state = 530},
  [370] = {.lex_state = 530},
  [371] = {.lex_state = 18},
  [372] = {.lex_state = 18},
  [373] = {.lex_state = 35},
  [374] = {.lex_state = 35},
  [375] = {.lex_state = 35},
  [376] = {.lex_state = 35},
  [377] = {.lex_state = 530},
  [378] = {.lex_state = 18},
  [379] = {.lex_state = 23},
  [380] = {.lex_state = 18},
  [381] = {.lex_state = 18},
  [382] = {.lex_state = 23},
  [383] = {.lex_state = 530},
  [384] = {.lex_state = 23},
  [385] = {.lex_state = 22},
  [386] = {.lex_state = 530},
  [387] = {.lex_state = 530},
  [388] = {.lex_state = 530},
  [389] = {.lex_state = 6},
  [390] = {.lex_state = 23},
  [391] = {.lex_state = 18},
  [392] = {.lex_state = 22},
  [393] = {.lex_state = 18},
  [394] = {.lex_state = 18},
  [395] = {.lex_state = 23},
  [396] = {.lex_state = 530},
  [397] = {.lex_state = 530},
  [398] = {.lex_state = 530},
  [399] = {.lex_state = 530},
  [400] = {.lex_state = 530},
  [401] = {.lex_state = 28},
  [402] = {.lex_state = 15},
  [403] = {.lex_state = 530},
  [404] = {.lex_state = 23},
  [405] = {.lex_state = 23},
  [406] = {.lex_state = 23},
  [407] = {.lex_state = 530},
  [408] = {.lex_state = 23},
  [409] = {.lex_state = 18},
  [410] = {.lex_state = 530},
  [411] = {.lex_state = 23},
  [412] = {.lex_state = 530},
  [413] = {.lex_state = 23},
  [414] = {.lex_state = 530},
  [415] = {.lex_state = 530},
  [416] = {.lex_state = 530},
  [417] = {.lex_state = 35},
  [418] = {.lex_state = 32},
  [419] = {.lex_state = 23},
  [420] = {.lex_state = 18},
  [421] = {.lex_state = 23},
  [422] = {.lex_state = 23},
  [423] = {.lex_state = 530},
  [424] = {.lex_state = 530},
  [425] = {.lex_state = 23},
  [426] = {.lex_state = 18},
  [427] = {.lex_state = 6},
  [428] = {.lex_state = 530},
  [429] = {.lex_state = 530},
  [430] = {.lex_state = 530},
  [431] = {.lex_state = 530},
  [432] = {.lex_state = 530},
  [433] = {.lex_state = 530},
  [434] = {.lex_state = 530},
  [435] = {.lex_state = 530},
  [436] = {.lex_state = 530},
  [437] = {.lex_state = 530},
  [438] = {.lex_state = 530},
  [439] = {.lex_state = 23},
  [440] = {.lex_state = 530},
  [441] = {.lex_state = 15},
  [442] = {.lex_state = 18},
  [443] = {.lex_state = 23},
  [444] = {.lex_state = 28},
  [445] = {.lex_state = 18},
  [446] = {.lex_state = 32},
  [447] = {.lex_state = 32},
  [448] = {.lex_state = 32},
  [449] = {.lex_state = 32},
  [450] = {.lex_state = 32},
  [451] = {.lex_state = 32},
  [452] = {.lex_state = 32},
  [453] = {.lex_state = 32},
  [454] = {.lex_state = 23},
  [455] = {.lex_state = 32},
  [456] = {.lex_state = 32},
  [457] = {.lex_state = 32},
  [458] = {.lex_state = 32},
  [459] = {.lex_state = 32},
  [460] = {.lex_state = 32},
  [461] = {.lex_state = 18},
  [462] = {.lex_state = 32},
  [463] = {.lex_state = 32},
  [464] = {.lex_state = 18},
  [465] = {.lex_state = 32},
  [466] = {.lex_state = 32},
  [467] = {.lex_state = 18},
  [468] = {.lex_state = 18},
  [469] = {.lex_state = 18},
  [470] = {.lex_state = 18},
  [471] = {.lex_state = 18},
  [472] = {.lex_state = 18},
  [473] = {.lex_state = 32},
  [474] = {.lex_state = 23},
  [475] = {.lex_state = 23},
  [476] = {.lex_state = 18},
  [477] = {.lex_state = 23},
  [478] = {.lex_state = 18},
  [479] = {.lex_state = 18},
  [480] = {.lex_state = 32},
  [481] = {.lex_state = 18},
  [482] = {.lex_state = 0},
  [483] = {.lex_state = 32},
  [484] = {.lex_state = 23},
  [485] = {.lex_state = 32},
  [486] = {.lex_state = 23},
  [487] = {.lex_state = 32},
  [488] = {.lex_state = 32},
  [489] = {.lex_state = 23},
  [490] = {.lex_state = 23},
  [491] = {.lex_state = 530},
  [492] = {.lex_state = 530},
  [493] = {.lex_state = 530},
  [494] = {.lex_state = 530},
  [495] = {.lex_state = 530},
  [496] = {.lex_state = 530},
  [497] = {.lex_state = 530},
  [498] = {.lex_state = 530},
  [499] = {.lex_state = 530},
  [500] = {.lex_state = 530},
  [501] = {.lex_state = 530},
  [502] = {.lex_state = 530},
  [503] = {.lex_state = 530},
  [504] = {.lex_state = 18},
  [505] = {.lex_state = 18},
  [506] = {.lex_state = 18},
  [507] = {.lex_state = 18},
  [508] = {.lex_state = 18},
  [509] = {.lex_state = 18},
  [510] = {.lex_state = 18},
  [511] = {.lex_state = 18},
  [512] = {.lex_state = 18},
  [513] = {.lex_state = 18},
  [514] = {.lex_state = 18},
  [515] = {.lex_state = 18},
  [516] = {.lex_state = 18},
  [517] = {.lex_state = 18},
  [518] = {.lex_state = 530},
  [519] = {.lex_state = 530},
  [520] = {.lex_state = 18},
  [521] = {.lex_state = 530},
  [522] = {.lex_state = 530},
  [523] = {.lex_state = 530},
  [524] = {.lex_state = 37},
  [525] = {.lex_state = 530},
  [526] = {.lex_state = 38},
  [527] = {.lex_state = 16},
  [528] = {.lex_state = 0},
  [529] = {.lex_state = 530},
  [530] = {.lex_state = 27},
  [531] = {.lex_state = 530},
  [532] = {.lex_state = 530},
  [533] = {.lex_state = 530},
  [534] = {.lex_state = 0},
  [535] = {.lex_state = 23},
  [536] = {.lex_state = 530},
  [537] = {.lex_state = 23},
  [538] = {.lex_state = 0},
  [539] = {.lex_state = 530},
  [540] = {.lex_state = 530},
  [541] = {.lex_state = 18},
  [542] = {.lex_state = 530},
  [543] = {.lex_state = 27},
  [544] = {.lex_state = 39},
  [545] = {.lex_state = 0},
  [546] = {.lex_state = 530},
  [547] = {.lex_state = 0},
  [548] = {.lex_state = 530},
  [549] = {.lex_state = 0},
  [550] = {.lex_state = 530},
  [551] = {.lex_state = 530},
  [552] = {.lex_state = 530},
  [553] = {.lex_state = 530},
  [554] = {.lex_state = 530},
  [555] = {.lex_state = 530},
  [556] = {.lex_state = 530},
  [557] = {.lex_state = 530},
  [558] = {.lex_state = 530},
  [559] = {.lex_state = 23},
  [560] = {.lex_state = 530},
  [561] = {.lex_state = 0},
  [562] = {.lex_state = 530},
  [563] = {.lex_state = 530},
  [564] = {.lex_state = 23},
  [565] = {.lex_state = 530},
  [566] = {.lex_state = 530},
  [567] = {.lex_state = 530},
  [568] = {.lex_state = 0},
  [569] = {.lex_state = 18},
  [570] = {.lex_state = 27},
  [571] = {.lex_state = 0},
  [572] = {.lex_state = 18},
  [573] = {.lex_state = 0},
  [574] = {.lex_state = 18},
  [575] = {.lex_state = 0},
  [576] = {.lex_state = 18},
  [577] = {.lex_state = 18},
  [578] = {.lex_state = 18},
  [579] = {.lex_state = 18},
  [580] = {.lex_state = 18},
  [581] = {.lex_state = 18},
  [582] = {.lex_state = 18},
  [583] = {.lex_state = 530},
  [584] = {.lex_state = 38},
  [585] = {.lex_state = 0},
  [586] = {.lex_state = 39},
  [587] = {.lex_state = 530},
  [588] = {.lex_state = 530},
  [589] = {.lex_state = 530},
  [590] = {.lex_state = 530},
  [591] = {.lex_state = 530},
  [592] = {.lex_state = 40},
  [593] = {.lex_state = 530},
  [594] = {.lex_state = 530},
  [595] = {.lex_state = 530},
  [596] = {.lex_state = 530},
  [597] = {.lex_state = 0},
  [598] = {.lex_state = 530},
  [599] = {.lex_state = 530},
  [600] = {.lex_state = 18},
  [601] = {.lex_state = 17},
  [602] = {.lex_state = 0},
  [603] = {.lex_state = 530},
  [604] = {.lex_state = 530},
  [605] = {.lex_state = 530},
  [606] = {.lex_state = 904},
  [607] = {.lex_state = 530},
  [608] = {.lex_state = 530},
  [609] = {.lex_state = 530},
  [610] = {.lex_state = 530},
  [611] = {.lex_state = 18},
  [612] = {.lex_state = 530},
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
    [sym_hurl_file] = STATE(585),
    [sym_entry] = STATE(101),
    [sym__comment_or_new_line] = STATE(288),
    [sym_request] = STATE(100),
    [sym_method] = STATE(134),
    [aux_sym_hurl_file_repeat1] = STATE(101),
    [aux_sym_hurl_file_repeat2] = STATE(288),
    [aux_sym__comment_or_new_line_repeat1] = STATE(15),
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
    [sym__comment_or_new_line] = STATE(52),
    [sym_header] = STATE(5),
    [sym_body] = STATE(104),
    [sym_request_section] = STATE(6),
    [sym_basic_auth_section] = STATE(63),
    [sym_query_string_params_section] = STATE(63),
    [sym_form_params_section] = STATE(63),
    [sym_multipart_form_data_section] = STATE(63),
    [sym_cookies_section] = STATE(63),
    [sym_options_section] = STATE(63),
    [sym_key_value] = STATE(370),
    [sym_bytes] = STATE(369),
    [sym_xml] = STATE(595),
    [sym_xml_prolog_tag] = STATE(266),
    [sym_xml_tag] = STATE(596),
    [sym_xml_open_tag] = STATE(115),
    [sym_oneline_base64] = STATE(595),
    [sym_oneline_file] = STATE(595),
    [sym_oneline_hex] = STATE(595),
    [sym_key_string] = STATE(597),
    [sym_key_string_content] = STATE(160),
    [sym_key_string_escaped_char] = STATE(231),
    [sym_oneline_string] = STATE(595),
    [sym_multiline_string] = STATE(595),
    [sym_json_value] = STATE(595),
    [sym_json_object] = STATE(598),
    [sym_json_array] = STATE(598),
    [sym_json_string] = STATE(598),
    [sym_json_number] = STATE(598),
    [sym_template] = STATE(281),
    [sym_boolean] = STATE(598),
    [sym_null] = STATE(598),
    [sym_integer] = STATE(265),
    [sym_digit] = STATE(229),
    [aux_sym_hurl_file_repeat2] = STATE(52),
    [aux_sym__comment_or_new_line_repeat1] = STATE(56),
    [aux_sym_request_repeat1] = STATE(5),
    [aux_sym_request_repeat2] = STATE(6),
    [aux_sym_xml_repeat1] = STATE(266),
    [aux_sym_key_string_repeat1] = STATE(160),
    [aux_sym_key_string_content_repeat1] = STATE(231),
    [aux_sym_integer_repeat1] = STATE(229),
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
    [sym__comment_or_new_line] = STATE(52),
    [sym_header] = STATE(4),
    [sym_body] = STATE(106),
    [sym_request_section] = STATE(7),
    [sym_basic_auth_section] = STATE(63),
    [sym_query_string_params_section] = STATE(63),
    [sym_form_params_section] = STATE(63),
    [sym_multipart_form_data_section] = STATE(63),
    [sym_cookies_section] = STATE(63),
    [sym_options_section] = STATE(63),
    [sym_key_value] = STATE(370),
    [sym_bytes] = STATE(369),
    [sym_xml] = STATE(595),
    [sym_xml_prolog_tag] = STATE(266),
    [sym_xml_tag] = STATE(596),
    [sym_xml_open_tag] = STATE(115),
    [sym_oneline_base64] = STATE(595),
    [sym_oneline_file] = STATE(595),
    [sym_oneline_hex] = STATE(595),
    [sym_key_string] = STATE(597),
    [sym_key_string_content] = STATE(160),
    [sym_key_string_escaped_char] = STATE(231),
    [sym_oneline_string] = STATE(595),
    [sym_multiline_string] = STATE(595),
    [sym_json_value] = STATE(595),
    [sym_json_object] = STATE(598),
    [sym_json_array] = STATE(598),
    [sym_json_string] = STATE(598),
    [sym_json_number] = STATE(598),
    [sym_template] = STATE(281),
    [sym_boolean] = STATE(598),
    [sym_null] = STATE(598),
    [sym_integer] = STATE(265),
    [sym_digit] = STATE(229),
    [aux_sym_hurl_file_repeat2] = STATE(52),
    [aux_sym__comment_or_new_line_repeat1] = STATE(56),
    [aux_sym_request_repeat1] = STATE(4),
    [aux_sym_request_repeat2] = STATE(7),
    [aux_sym_xml_repeat1] = STATE(266),
    [aux_sym_key_string_repeat1] = STATE(160),
    [aux_sym_key_string_content_repeat1] = STATE(231),
    [aux_sym_integer_repeat1] = STATE(229),
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
    [sym_header] = STATE(41),
    [sym_body] = STATE(104),
    [sym_request_section] = STATE(6),
    [sym_basic_auth_section] = STATE(63),
    [sym_query_string_params_section] = STATE(63),
    [sym_form_params_section] = STATE(63),
    [sym_multipart_form_data_section] = STATE(63),
    [sym_cookies_section] = STATE(63),
    [sym_options_section] = STATE(63),
    [sym_key_value] = STATE(370),
    [sym_bytes] = STATE(369),
    [sym_xml] = STATE(595),
    [sym_xml_prolog_tag] = STATE(266),
    [sym_xml_tag] = STATE(596),
    [sym_xml_open_tag] = STATE(115),
    [sym_oneline_base64] = STATE(595),
    [sym_oneline_file] = STATE(595),
    [sym_oneline_hex] = STATE(595),
    [sym_key_string] = STATE(597),
    [sym_key_string_content] = STATE(160),
    [sym_key_string_escaped_char] = STATE(231),
    [sym_oneline_string] = STATE(595),
    [sym_multiline_string] = STATE(595),
    [sym_json_value] = STATE(595),
    [sym_json_object] = STATE(598),
    [sym_json_array] = STATE(598),
    [sym_json_string] = STATE(598),
    [sym_json_number] = STATE(598),
    [sym_template] = STATE(281),
    [sym_boolean] = STATE(598),
    [sym_null] = STATE(598),
    [sym_integer] = STATE(265),
    [sym_digit] = STATE(229),
    [aux_sym_request_repeat1] = STATE(41),
    [aux_sym_request_repeat2] = STATE(6),
    [aux_sym_xml_repeat1] = STATE(266),
    [aux_sym_key_string_repeat1] = STATE(160),
    [aux_sym_key_string_content_repeat1] = STATE(231),
    [aux_sym_integer_repeat1] = STATE(229),
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
  [5] = {
    [sym_header] = STATE(41),
    [sym_body] = STATE(109),
    [sym_request_section] = STATE(8),
    [sym_basic_auth_section] = STATE(63),
    [sym_query_string_params_section] = STATE(63),
    [sym_form_params_section] = STATE(63),
    [sym_multipart_form_data_section] = STATE(63),
    [sym_cookies_section] = STATE(63),
    [sym_options_section] = STATE(63),
    [sym_key_value] = STATE(370),
    [sym_bytes] = STATE(369),
    [sym_xml] = STATE(595),
    [sym_xml_prolog_tag] = STATE(266),
    [sym_xml_tag] = STATE(596),
    [sym_xml_open_tag] = STATE(115),
    [sym_oneline_base64] = STATE(595),
    [sym_oneline_file] = STATE(595),
    [sym_oneline_hex] = STATE(595),
    [sym_key_string] = STATE(597),
    [sym_key_string_content] = STATE(160),
    [sym_key_string_escaped_char] = STATE(231),
    [sym_oneline_string] = STATE(595),
    [sym_multiline_string] = STATE(595),
    [sym_json_value] = STATE(595),
    [sym_json_object] = STATE(598),
    [sym_json_array] = STATE(598),
    [sym_json_string] = STATE(598),
    [sym_json_number] = STATE(598),
    [sym_template] = STATE(281),
    [sym_boolean] = STATE(598),
    [sym_null] = STATE(598),
    [sym_integer] = STATE(265),
    [sym_digit] = STATE(229),
    [aux_sym_request_repeat1] = STATE(41),
    [aux_sym_request_repeat2] = STATE(8),
    [aux_sym_xml_repeat1] = STATE(266),
    [aux_sym_key_string_repeat1] = STATE(160),
    [aux_sym_key_string_content_repeat1] = STATE(231),
    [aux_sym_integer_repeat1] = STATE(229),
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
  [6] = {
    [sym_body] = STATE(109),
    [sym_request_section] = STATE(51),
    [sym_basic_auth_section] = STATE(63),
    [sym_query_string_params_section] = STATE(63),
    [sym_form_params_section] = STATE(63),
    [sym_multipart_form_data_section] = STATE(63),
    [sym_cookies_section] = STATE(63),
    [sym_options_section] = STATE(63),
    [sym_bytes] = STATE(369),
    [sym_xml] = STATE(595),
    [sym_xml_prolog_tag] = STATE(266),
    [sym_xml_tag] = STATE(596),
    [sym_xml_open_tag] = STATE(115),
    [sym_oneline_base64] = STATE(595),
    [sym_oneline_file] = STATE(595),
    [sym_oneline_hex] = STATE(595),
    [sym_oneline_string] = STATE(595),
    [sym_multiline_string] = STATE(595),
    [sym_json_value] = STATE(595),
    [sym_json_object] = STATE(598),
    [sym_json_array] = STATE(598),
    [sym_json_string] = STATE(598),
    [sym_json_number] = STATE(598),
    [sym_template] = STATE(598),
    [sym_boolean] = STATE(598),
    [sym_null] = STATE(598),
    [sym_integer] = STATE(265),
    [sym_digit] = STATE(229),
    [aux_sym_request_repeat2] = STATE(51),
    [aux_sym_xml_repeat1] = STATE(266),
    [aux_sym_integer_repeat1] = STATE(229),
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
    [sym_request_section] = STATE(51),
    [sym_basic_auth_section] = STATE(63),
    [sym_query_string_params_section] = STATE(63),
    [sym_form_params_section] = STATE(63),
    [sym_multipart_form_data_section] = STATE(63),
    [sym_cookies_section] = STATE(63),
    [sym_options_section] = STATE(63),
    [sym_bytes] = STATE(369),
    [sym_xml] = STATE(595),
    [sym_xml_prolog_tag] = STATE(266),
    [sym_xml_tag] = STATE(596),
    [sym_xml_open_tag] = STATE(115),
    [sym_oneline_base64] = STATE(595),
    [sym_oneline_file] = STATE(595),
    [sym_oneline_hex] = STATE(595),
    [sym_oneline_string] = STATE(595),
    [sym_multiline_string] = STATE(595),
    [sym_json_value] = STATE(595),
    [sym_json_object] = STATE(598),
    [sym_json_array] = STATE(598),
    [sym_json_string] = STATE(598),
    [sym_json_number] = STATE(598),
    [sym_template] = STATE(598),
    [sym_boolean] = STATE(598),
    [sym_null] = STATE(598),
    [sym_integer] = STATE(265),
    [sym_digit] = STATE(229),
    [aux_sym_request_repeat2] = STATE(51),
    [aux_sym_xml_repeat1] = STATE(266),
    [aux_sym_integer_repeat1] = STATE(229),
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
  [8] = {
    [sym_body] = STATE(108),
    [sym_request_section] = STATE(51),
    [sym_basic_auth_section] = STATE(63),
    [sym_query_string_params_section] = STATE(63),
    [sym_form_params_section] = STATE(63),
    [sym_multipart_form_data_section] = STATE(63),
    [sym_cookies_section] = STATE(63),
    [sym_options_section] = STATE(63),
    [sym_bytes] = STATE(369),
    [sym_xml] = STATE(595),
    [sym_xml_prolog_tag] = STATE(266),
    [sym_xml_tag] = STATE(596),
    [sym_xml_open_tag] = STATE(115),
    [sym_oneline_base64] = STATE(595),
    [sym_oneline_file] = STATE(595),
    [sym_oneline_hex] = STATE(595),
    [sym_oneline_string] = STATE(595),
    [sym_multiline_string] = STATE(595),
    [sym_json_value] = STATE(595),
    [sym_json_object] = STATE(598),
    [sym_json_array] = STATE(598),
    [sym_json_string] = STATE(598),
    [sym_json_number] = STATE(598),
    [sym_template] = STATE(598),
    [sym_boolean] = STATE(598),
    [sym_null] = STATE(598),
    [sym_integer] = STATE(265),
    [sym_digit] = STATE(229),
    [aux_sym_request_repeat2] = STATE(51),
    [aux_sym_xml_repeat1] = STATE(266),
    [aux_sym_integer_repeat1] = STATE(229),
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
  [9] = {
    [sym_header] = STATE(12),
    [sym_body] = STATE(128),
    [sym_response_section] = STATE(20),
    [sym_captures_section] = STATE(72),
    [sym_asserts_section] = STATE(72),
    [sym_key_value] = STATE(387),
    [sym_bytes] = STATE(369),
    [sym_xml] = STATE(595),
    [sym_xml_prolog_tag] = STATE(266),
    [sym_xml_tag] = STATE(596),
    [sym_xml_open_tag] = STATE(115),
    [sym_oneline_base64] = STATE(595),
    [sym_oneline_file] = STATE(595),
    [sym_oneline_hex] = STATE(595),
    [sym_key_string] = STATE(597),
    [sym_key_string_content] = STATE(160),
    [sym_key_string_escaped_char] = STATE(231),
    [sym_oneline_string] = STATE(595),
    [sym_multiline_string] = STATE(595),
    [sym_json_value] = STATE(595),
    [sym_json_object] = STATE(598),
    [sym_json_array] = STATE(598),
    [sym_json_string] = STATE(598),
    [sym_json_number] = STATE(598),
    [sym_template] = STATE(281),
    [sym_boolean] = STATE(598),
    [sym_null] = STATE(598),
    [sym_integer] = STATE(265),
    [sym_digit] = STATE(229),
    [aux_sym_request_repeat1] = STATE(12),
    [aux_sym_response_repeat1] = STATE(20),
    [aux_sym_xml_repeat1] = STATE(266),
    [aux_sym_key_string_repeat1] = STATE(160),
    [aux_sym_key_string_content_repeat1] = STATE(231),
    [aux_sym_integer_repeat1] = STATE(229),
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
    [aux_sym__comment_or_new_line_repeat1] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(85),
    [anon_sym_LF] = ACTIONS(87),
    [anon_sym_GET] = ACTIONS(90),
    [anon_sym_HEAD] = ACTIONS(90),
    [anon_sym_POST] = ACTIONS(90),
    [anon_sym_PUT] = ACTIONS(90),
    [anon_sym_DELETE] = ACTIONS(90),
    [anon_sym_CONNECT] = ACTIONS(90),
    [anon_sym_OPTIONS] = ACTIONS(90),
    [anon_sym_TRACE] = ACTIONS(90),
    [anon_sym_PATCH] = ACTIONS(90),
    [anon_sym_LINK] = ACTIONS(90),
    [anon_sym_UNLINK] = ACTIONS(90),
    [anon_sym_PURGE] = ACTIONS(90),
    [anon_sym_LOCK] = ACTIONS(90),
    [anon_sym_UNLOCK] = ACTIONS(90),
    [anon_sym_PROPFIND] = ACTIONS(90),
    [anon_sym_VIEW] = ACTIONS(90),
    [anon_sym_HTTP_SLASH1_DOT0] = ACTIONS(90),
    [anon_sym_HTTP_SLASH1_DOT1] = ACTIONS(90),
    [anon_sym_HTTP_SLASH2] = ACTIONS(90),
    [anon_sym_HTTP_SLASH_STAR] = ACTIONS(90),
    [anon_sym_HTTP] = ACTIONS(90),
    [anon_sym_LBRACKBasicAuth_RBRACK] = ACTIONS(90),
    [anon_sym_LBRACKQueryStringParams_RBRACK] = ACTIONS(90),
    [anon_sym_LBRACKFormParams_RBRACK] = ACTIONS(90),
    [anon_sym_LBRACKMultipartFormData_RBRACK] = ACTIONS(90),
    [anon_sym_LBRACKCookies_RBRACK] = ACTIONS(90),
    [anon_sym_LBRACKCaptures_RBRACK] = ACTIONS(90),
    [anon_sym_LBRACKAsserts_RBRACK] = ACTIONS(90),
    [anon_sym_LBRACKOptions_RBRACK] = ACTIONS(90),
    [anon_sym_file_COMMA] = ACTIONS(90),
    [anon_sym_cacert] = ACTIONS(90),
    [anon_sym_compressed] = ACTIONS(90),
    [anon_sym_location] = ACTIONS(90),
    [anon_sym_insecure] = ACTIONS(90),
    [anon_sym_max_DASHredirs] = ACTIONS(90),
    [anon_sym_path_DASHas_DASHis] = ACTIONS(90),
    [anon_sym_proxy] = ACTIONS(90),
    [anon_sym_retry] = ACTIONS(90),
    [anon_sym_retry_DASHinterval] = ACTIONS(90),
    [anon_sym_retry_DASHmax_DASHcount] = ACTIONS(90),
    [anon_sym_variable] = ACTIONS(90),
    [anon_sym_verbose] = ACTIONS(90),
    [anon_sym_very_DASHverbose] = ACTIONS(90),
    [anon_sym_status] = ACTIONS(90),
    [anon_sym_url] = ACTIONS(90),
    [anon_sym_header] = ACTIONS(90),
    [anon_sym_cookie] = ACTIONS(90),
    [anon_sym_body] = ACTIONS(90),
    [anon_sym_xpath] = ACTIONS(90),
    [anon_sym_jsonpath] = ACTIONS(90),
    [anon_sym_regex] = ACTIONS(90),
    [anon_sym_duration] = ACTIONS(90),
    [anon_sym_sha256] = ACTIONS(90),
    [anon_sym_md5] = ACTIONS(90),
    [anon_sym_bytes] = ACTIONS(90),
    [anon_sym_LT] = ACTIONS(90),
    [anon_sym_LT_QMARK] = ACTIONS(90),
    [anon_sym_base64_COMMA] = ACTIONS(90),
    [anon_sym_hex_COMMA] = ACTIONS(90),
    [anon_sym_DQUOTE] = ACTIONS(90),
    [anon_sym_BQUOTE] = ACTIONS(90),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(90),
    [anon_sym_LBRACE] = ACTIONS(90),
    [anon_sym_LBRACK] = ACTIONS(90),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(85),
    [anon_sym_true] = ACTIONS(90),
    [anon_sym_false] = ACTIONS(90),
    [anon_sym_null] = ACTIONS(90),
    [aux_sym_digit_token1] = ACTIONS(90),
    [sym_comment] = ACTIONS(92),
  },
  [11] = {
    [sym_option] = STATE(13),
    [sym_ca_certificate_option] = STATE(27),
    [sym_compressed_option] = STATE(27),
    [sym_follow_redirect_option] = STATE(27),
    [sym_insecure_option] = STATE(27),
    [sym_max_redirs_option] = STATE(27),
    [sym_path_as_is_option] = STATE(27),
    [sym_proxy_option] = STATE(27),
    [sym_retry_option] = STATE(27),
    [sym_retry_interval_option] = STATE(27),
    [sym_retry_max_count_option] = STATE(27),
    [sym_variable_option] = STATE(27),
    [sym_verbose_option] = STATE(27),
    [sym_very_verbose_option] = STATE(27),
    [aux_sym_options_section_repeat1] = STATE(13),
    [ts_builtin_sym_end] = ACTIONS(95),
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
    [anon_sym_HTTP] = ACTIONS(97),
    [anon_sym_LBRACKBasicAuth_RBRACK] = ACTIONS(97),
    [anon_sym_LBRACKQueryStringParams_RBRACK] = ACTIONS(97),
    [anon_sym_LBRACKFormParams_RBRACK] = ACTIONS(97),
    [anon_sym_LBRACKMultipartFormData_RBRACK] = ACTIONS(97),
    [anon_sym_LBRACKCookies_RBRACK] = ACTIONS(97),
    [anon_sym_LBRACKOptions_RBRACK] = ACTIONS(97),
    [anon_sym_file_COMMA] = ACTIONS(97),
    [anon_sym_cacert] = ACTIONS(99),
    [anon_sym_compressed] = ACTIONS(101),
    [anon_sym_location] = ACTIONS(103),
    [anon_sym_insecure] = ACTIONS(105),
    [anon_sym_max_DASHredirs] = ACTIONS(107),
    [anon_sym_path_DASHas_DASHis] = ACTIONS(109),
    [anon_sym_proxy] = ACTIONS(111),
    [anon_sym_retry] = ACTIONS(113),
    [anon_sym_retry_DASHinterval] = ACTIONS(115),
    [anon_sym_retry_DASHmax_DASHcount] = ACTIONS(117),
    [anon_sym_variable] = ACTIONS(119),
    [anon_sym_verbose] = ACTIONS(121),
    [anon_sym_very_DASHverbose] = ACTIONS(123),
    [anon_sym_LT] = ACTIONS(97),
    [anon_sym_LT_QMARK] = ACTIONS(97),
    [anon_sym_base64_COMMA] = ACTIONS(97),
    [anon_sym_hex_COMMA] = ACTIONS(97),
    [anon_sym_DQUOTE] = ACTIONS(97),
    [anon_sym_BQUOTE] = ACTIONS(97),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(97),
    [anon_sym_LBRACE] = ACTIONS(97),
    [anon_sym_LBRACK] = ACTIONS(97),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(95),
    [anon_sym_true] = ACTIONS(97),
    [anon_sym_false] = ACTIONS(97),
    [anon_sym_null] = ACTIONS(97),
    [aux_sym_digit_token1] = ACTIONS(97),
    [sym_comment] = ACTIONS(97),
  },
  [12] = {
    [sym_header] = STATE(58),
    [sym_body] = STATE(124),
    [sym_response_section] = STATE(19),
    [sym_captures_section] = STATE(72),
    [sym_asserts_section] = STATE(72),
    [sym_key_value] = STATE(387),
    [sym_bytes] = STATE(369),
    [sym_xml] = STATE(595),
    [sym_xml_prolog_tag] = STATE(266),
    [sym_xml_tag] = STATE(596),
    [sym_xml_open_tag] = STATE(115),
    [sym_oneline_base64] = STATE(595),
    [sym_oneline_file] = STATE(595),
    [sym_oneline_hex] = STATE(595),
    [sym_key_string] = STATE(597),
    [sym_key_string_content] = STATE(160),
    [sym_key_string_escaped_char] = STATE(231),
    [sym_oneline_string] = STATE(595),
    [sym_multiline_string] = STATE(595),
    [sym_json_value] = STATE(595),
    [sym_json_object] = STATE(598),
    [sym_json_array] = STATE(598),
    [sym_json_string] = STATE(598),
    [sym_json_number] = STATE(598),
    [sym_template] = STATE(281),
    [sym_boolean] = STATE(598),
    [sym_null] = STATE(598),
    [sym_integer] = STATE(265),
    [sym_digit] = STATE(229),
    [aux_sym_request_repeat1] = STATE(58),
    [aux_sym_response_repeat1] = STATE(19),
    [aux_sym_xml_repeat1] = STATE(266),
    [aux_sym_key_string_repeat1] = STATE(160),
    [aux_sym_key_string_content_repeat1] = STATE(231),
    [aux_sym_integer_repeat1] = STATE(229),
    [ts_builtin_sym_end] = ACTIONS(125),
    [anon_sym_LF] = ACTIONS(125),
    [anon_sym_GET] = ACTIONS(127),
    [anon_sym_HEAD] = ACTIONS(127),
    [anon_sym_POST] = ACTIONS(127),
    [anon_sym_PUT] = ACTIONS(127),
    [anon_sym_DELETE] = ACTIONS(127),
    [anon_sym_CONNECT] = ACTIONS(127),
    [anon_sym_OPTIONS] = ACTIONS(127),
    [anon_sym_TRACE] = ACTIONS(127),
    [anon_sym_PATCH] = ACTIONS(127),
    [anon_sym_LINK] = ACTIONS(127),
    [anon_sym_UNLINK] = ACTIONS(127),
    [anon_sym_PURGE] = ACTIONS(127),
    [anon_sym_LOCK] = ACTIONS(127),
    [anon_sym_UNLOCK] = ACTIONS(127),
    [anon_sym_PROPFIND] = ACTIONS(127),
    [anon_sym_VIEW] = ACTIONS(127),
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
    [sym_comment] = ACTIONS(127),
  },
  [13] = {
    [sym_option] = STATE(13),
    [sym_ca_certificate_option] = STATE(27),
    [sym_compressed_option] = STATE(27),
    [sym_follow_redirect_option] = STATE(27),
    [sym_insecure_option] = STATE(27),
    [sym_max_redirs_option] = STATE(27),
    [sym_path_as_is_option] = STATE(27),
    [sym_proxy_option] = STATE(27),
    [sym_retry_option] = STATE(27),
    [sym_retry_interval_option] = STATE(27),
    [sym_retry_max_count_option] = STATE(27),
    [sym_variable_option] = STATE(27),
    [sym_verbose_option] = STATE(27),
    [sym_very_verbose_option] = STATE(27),
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
    [anon_sym_HTTP] = ACTIONS(131),
    [anon_sym_LBRACKBasicAuth_RBRACK] = ACTIONS(131),
    [anon_sym_LBRACKQueryStringParams_RBRACK] = ACTIONS(131),
    [anon_sym_LBRACKFormParams_RBRACK] = ACTIONS(131),
    [anon_sym_LBRACKMultipartFormData_RBRACK] = ACTIONS(131),
    [anon_sym_LBRACKCookies_RBRACK] = ACTIONS(131),
    [anon_sym_LBRACKOptions_RBRACK] = ACTIONS(131),
    [anon_sym_file_COMMA] = ACTIONS(131),
    [anon_sym_cacert] = ACTIONS(133),
    [anon_sym_compressed] = ACTIONS(136),
    [anon_sym_location] = ACTIONS(139),
    [anon_sym_insecure] = ACTIONS(142),
    [anon_sym_max_DASHredirs] = ACTIONS(145),
    [anon_sym_path_DASHas_DASHis] = ACTIONS(148),
    [anon_sym_proxy] = ACTIONS(151),
    [anon_sym_retry] = ACTIONS(154),
    [anon_sym_retry_DASHinterval] = ACTIONS(157),
    [anon_sym_retry_DASHmax_DASHcount] = ACTIONS(160),
    [anon_sym_variable] = ACTIONS(163),
    [anon_sym_verbose] = ACTIONS(166),
    [anon_sym_very_DASHverbose] = ACTIONS(169),
    [anon_sym_LT] = ACTIONS(131),
    [anon_sym_LT_QMARK] = ACTIONS(131),
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
  [14] = {
    [sym_option] = STATE(11),
    [sym_ca_certificate_option] = STATE(27),
    [sym_compressed_option] = STATE(27),
    [sym_follow_redirect_option] = STATE(27),
    [sym_insecure_option] = STATE(27),
    [sym_max_redirs_option] = STATE(27),
    [sym_path_as_is_option] = STATE(27),
    [sym_proxy_option] = STATE(27),
    [sym_retry_option] = STATE(27),
    [sym_retry_interval_option] = STATE(27),
    [sym_retry_max_count_option] = STATE(27),
    [sym_variable_option] = STATE(27),
    [sym_verbose_option] = STATE(27),
    [sym_very_verbose_option] = STATE(27),
    [aux_sym_options_section_repeat1] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(172),
    [anon_sym_LF] = ACTIONS(172),
    [anon_sym_GET] = ACTIONS(174),
    [anon_sym_HEAD] = ACTIONS(174),
    [anon_sym_POST] = ACTIONS(174),
    [anon_sym_PUT] = ACTIONS(174),
    [anon_sym_DELETE] = ACTIONS(174),
    [anon_sym_CONNECT] = ACTIONS(174),
    [anon_sym_OPTIONS] = ACTIONS(174),
    [anon_sym_TRACE] = ACTIONS(174),
    [anon_sym_PATCH] = ACTIONS(174),
    [anon_sym_LINK] = ACTIONS(174),
    [anon_sym_UNLINK] = ACTIONS(174),
    [anon_sym_PURGE] = ACTIONS(174),
    [anon_sym_LOCK] = ACTIONS(174),
    [anon_sym_UNLOCK] = ACTIONS(174),
    [anon_sym_PROPFIND] = ACTIONS(174),
    [anon_sym_VIEW] = ACTIONS(174),
    [anon_sym_HTTP_SLASH1_DOT0] = ACTIONS(174),
    [anon_sym_HTTP_SLASH1_DOT1] = ACTIONS(174),
    [anon_sym_HTTP_SLASH2] = ACTIONS(174),
    [anon_sym_HTTP_SLASH_STAR] = ACTIONS(174),
    [anon_sym_HTTP] = ACTIONS(174),
    [anon_sym_LBRACKBasicAuth_RBRACK] = ACTIONS(174),
    [anon_sym_LBRACKQueryStringParams_RBRACK] = ACTIONS(174),
    [anon_sym_LBRACKFormParams_RBRACK] = ACTIONS(174),
    [anon_sym_LBRACKMultipartFormData_RBRACK] = ACTIONS(174),
    [anon_sym_LBRACKCookies_RBRACK] = ACTIONS(174),
    [anon_sym_LBRACKOptions_RBRACK] = ACTIONS(174),
    [anon_sym_file_COMMA] = ACTIONS(174),
    [anon_sym_cacert] = ACTIONS(99),
    [anon_sym_compressed] = ACTIONS(101),
    [anon_sym_location] = ACTIONS(103),
    [anon_sym_insecure] = ACTIONS(105),
    [anon_sym_max_DASHredirs] = ACTIONS(107),
    [anon_sym_path_DASHas_DASHis] = ACTIONS(109),
    [anon_sym_proxy] = ACTIONS(111),
    [anon_sym_retry] = ACTIONS(113),
    [anon_sym_retry_DASHinterval] = ACTIONS(115),
    [anon_sym_retry_DASHmax_DASHcount] = ACTIONS(117),
    [anon_sym_variable] = ACTIONS(119),
    [anon_sym_verbose] = ACTIONS(121),
    [anon_sym_very_DASHverbose] = ACTIONS(123),
    [anon_sym_LT] = ACTIONS(174),
    [anon_sym_LT_QMARK] = ACTIONS(174),
    [anon_sym_base64_COMMA] = ACTIONS(174),
    [anon_sym_hex_COMMA] = ACTIONS(174),
    [anon_sym_DQUOTE] = ACTIONS(174),
    [anon_sym_BQUOTE] = ACTIONS(174),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(174),
    [anon_sym_LBRACE] = ACTIONS(174),
    [anon_sym_LBRACK] = ACTIONS(174),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(172),
    [anon_sym_true] = ACTIONS(174),
    [anon_sym_false] = ACTIONS(174),
    [anon_sym_null] = ACTIONS(174),
    [aux_sym_digit_token1] = ACTIONS(174),
    [sym_comment] = ACTIONS(174),
  },
  [15] = {
    [aux_sym__comment_or_new_line_repeat1] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(176),
    [anon_sym_LF] = ACTIONS(178),
    [anon_sym_GET] = ACTIONS(180),
    [anon_sym_HEAD] = ACTIONS(180),
    [anon_sym_POST] = ACTIONS(180),
    [anon_sym_PUT] = ACTIONS(180),
    [anon_sym_DELETE] = ACTIONS(180),
    [anon_sym_CONNECT] = ACTIONS(180),
    [anon_sym_OPTIONS] = ACTIONS(180),
    [anon_sym_TRACE] = ACTIONS(180),
    [anon_sym_PATCH] = ACTIONS(180),
    [anon_sym_LINK] = ACTIONS(180),
    [anon_sym_UNLINK] = ACTIONS(180),
    [anon_sym_PURGE] = ACTIONS(180),
    [anon_sym_LOCK] = ACTIONS(180),
    [anon_sym_UNLOCK] = ACTIONS(180),
    [anon_sym_PROPFIND] = ACTIONS(180),
    [anon_sym_VIEW] = ACTIONS(180),
    [anon_sym_HTTP_SLASH1_DOT0] = ACTIONS(180),
    [anon_sym_HTTP_SLASH1_DOT1] = ACTIONS(180),
    [anon_sym_HTTP_SLASH2] = ACTIONS(180),
    [anon_sym_HTTP_SLASH_STAR] = ACTIONS(180),
    [anon_sym_HTTP] = ACTIONS(180),
    [anon_sym_LBRACKBasicAuth_RBRACK] = ACTIONS(180),
    [anon_sym_LBRACKQueryStringParams_RBRACK] = ACTIONS(180),
    [anon_sym_LBRACKFormParams_RBRACK] = ACTIONS(180),
    [anon_sym_LBRACKMultipartFormData_RBRACK] = ACTIONS(180),
    [anon_sym_LBRACKCookies_RBRACK] = ACTIONS(180),
    [anon_sym_LBRACKCaptures_RBRACK] = ACTIONS(180),
    [anon_sym_LBRACKAsserts_RBRACK] = ACTIONS(180),
    [anon_sym_LBRACKOptions_RBRACK] = ACTIONS(180),
    [anon_sym_file_COMMA] = ACTIONS(180),
    [anon_sym_cacert] = ACTIONS(180),
    [anon_sym_compressed] = ACTIONS(180),
    [anon_sym_location] = ACTIONS(180),
    [anon_sym_insecure] = ACTIONS(180),
    [anon_sym_max_DASHredirs] = ACTIONS(180),
    [anon_sym_path_DASHas_DASHis] = ACTIONS(180),
    [anon_sym_proxy] = ACTIONS(180),
    [anon_sym_retry] = ACTIONS(180),
    [anon_sym_retry_DASHinterval] = ACTIONS(180),
    [anon_sym_retry_DASHmax_DASHcount] = ACTIONS(180),
    [anon_sym_variable] = ACTIONS(180),
    [anon_sym_verbose] = ACTIONS(180),
    [anon_sym_very_DASHverbose] = ACTIONS(180),
    [anon_sym_status] = ACTIONS(180),
    [anon_sym_url] = ACTIONS(180),
    [anon_sym_header] = ACTIONS(180),
    [anon_sym_cookie] = ACTIONS(180),
    [anon_sym_body] = ACTIONS(180),
    [anon_sym_xpath] = ACTIONS(180),
    [anon_sym_jsonpath] = ACTIONS(180),
    [anon_sym_regex] = ACTIONS(180),
    [anon_sym_duration] = ACTIONS(180),
    [anon_sym_sha256] = ACTIONS(180),
    [anon_sym_md5] = ACTIONS(180),
    [anon_sym_bytes] = ACTIONS(180),
    [anon_sym_LT] = ACTIONS(180),
    [anon_sym_LT_QMARK] = ACTIONS(180),
    [anon_sym_base64_COMMA] = ACTIONS(180),
    [anon_sym_hex_COMMA] = ACTIONS(180),
    [anon_sym_DQUOTE] = ACTIONS(180),
    [anon_sym_BQUOTE] = ACTIONS(180),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(180),
    [anon_sym_LBRACE] = ACTIONS(180),
    [anon_sym_LBRACK] = ACTIONS(180),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(176),
    [anon_sym_true] = ACTIONS(180),
    [anon_sym_false] = ACTIONS(180),
    [anon_sym_null] = ACTIONS(180),
    [aux_sym_digit_token1] = ACTIONS(180),
    [sym_comment] = ACTIONS(182),
  },
  [16] = {
    [sym_assert] = STATE(17),
    [sym_query] = STATE(21),
    [sym_status_query] = STATE(89),
    [sym_url_query] = STATE(89),
    [sym_header_query] = STATE(89),
    [sym_cookie_query] = STATE(89),
    [sym_body_query] = STATE(89),
    [sym_xpath_query] = STATE(89),
    [sym_jsonpath_query] = STATE(89),
    [sym_regex_query] = STATE(89),
    [sym_variable_query] = STATE(89),
    [sym_duration_query] = STATE(89),
    [sym_sha256_query] = STATE(89),
    [sym_md5_query] = STATE(89),
    [sym_bytes_query] = STATE(89),
    [aux_sym_asserts_section_repeat1] = STATE(17),
    [ts_builtin_sym_end] = ACTIONS(184),
    [anon_sym_LF] = ACTIONS(184),
    [anon_sym_GET] = ACTIONS(186),
    [anon_sym_HEAD] = ACTIONS(186),
    [anon_sym_POST] = ACTIONS(186),
    [anon_sym_PUT] = ACTIONS(186),
    [anon_sym_DELETE] = ACTIONS(186),
    [anon_sym_CONNECT] = ACTIONS(186),
    [anon_sym_OPTIONS] = ACTIONS(186),
    [anon_sym_TRACE] = ACTIONS(186),
    [anon_sym_PATCH] = ACTIONS(186),
    [anon_sym_LINK] = ACTIONS(186),
    [anon_sym_UNLINK] = ACTIONS(186),
    [anon_sym_PURGE] = ACTIONS(186),
    [anon_sym_LOCK] = ACTIONS(186),
    [anon_sym_UNLOCK] = ACTIONS(186),
    [anon_sym_PROPFIND] = ACTIONS(186),
    [anon_sym_VIEW] = ACTIONS(186),
    [anon_sym_LBRACKCaptures_RBRACK] = ACTIONS(186),
    [anon_sym_LBRACKAsserts_RBRACK] = ACTIONS(186),
    [anon_sym_file_COMMA] = ACTIONS(186),
    [anon_sym_variable] = ACTIONS(188),
    [anon_sym_status] = ACTIONS(190),
    [anon_sym_url] = ACTIONS(192),
    [anon_sym_header] = ACTIONS(194),
    [anon_sym_cookie] = ACTIONS(196),
    [anon_sym_body] = ACTIONS(198),
    [anon_sym_xpath] = ACTIONS(200),
    [anon_sym_jsonpath] = ACTIONS(202),
    [anon_sym_regex] = ACTIONS(204),
    [anon_sym_duration] = ACTIONS(206),
    [anon_sym_sha256] = ACTIONS(208),
    [anon_sym_md5] = ACTIONS(210),
    [anon_sym_bytes] = ACTIONS(212),
    [anon_sym_LT] = ACTIONS(186),
    [anon_sym_LT_QMARK] = ACTIONS(186),
    [anon_sym_base64_COMMA] = ACTIONS(186),
    [anon_sym_hex_COMMA] = ACTIONS(186),
    [anon_sym_DQUOTE] = ACTIONS(186),
    [anon_sym_BQUOTE] = ACTIONS(186),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(186),
    [anon_sym_LBRACE] = ACTIONS(186),
    [anon_sym_LBRACK] = ACTIONS(186),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(184),
    [anon_sym_true] = ACTIONS(186),
    [anon_sym_false] = ACTIONS(186),
    [anon_sym_null] = ACTIONS(186),
    [aux_sym_digit_token1] = ACTIONS(186),
    [sym_comment] = ACTIONS(186),
  },
  [17] = {
    [sym_assert] = STATE(18),
    [sym_query] = STATE(21),
    [sym_status_query] = STATE(89),
    [sym_url_query] = STATE(89),
    [sym_header_query] = STATE(89),
    [sym_cookie_query] = STATE(89),
    [sym_body_query] = STATE(89),
    [sym_xpath_query] = STATE(89),
    [sym_jsonpath_query] = STATE(89),
    [sym_regex_query] = STATE(89),
    [sym_variable_query] = STATE(89),
    [sym_duration_query] = STATE(89),
    [sym_sha256_query] = STATE(89),
    [sym_md5_query] = STATE(89),
    [sym_bytes_query] = STATE(89),
    [aux_sym_asserts_section_repeat1] = STATE(18),
    [ts_builtin_sym_end] = ACTIONS(214),
    [anon_sym_LF] = ACTIONS(214),
    [anon_sym_GET] = ACTIONS(216),
    [anon_sym_HEAD] = ACTIONS(216),
    [anon_sym_POST] = ACTIONS(216),
    [anon_sym_PUT] = ACTIONS(216),
    [anon_sym_DELETE] = ACTIONS(216),
    [anon_sym_CONNECT] = ACTIONS(216),
    [anon_sym_OPTIONS] = ACTIONS(216),
    [anon_sym_TRACE] = ACTIONS(216),
    [anon_sym_PATCH] = ACTIONS(216),
    [anon_sym_LINK] = ACTIONS(216),
    [anon_sym_UNLINK] = ACTIONS(216),
    [anon_sym_PURGE] = ACTIONS(216),
    [anon_sym_LOCK] = ACTIONS(216),
    [anon_sym_UNLOCK] = ACTIONS(216),
    [anon_sym_PROPFIND] = ACTIONS(216),
    [anon_sym_VIEW] = ACTIONS(216),
    [anon_sym_LBRACKCaptures_RBRACK] = ACTIONS(216),
    [anon_sym_LBRACKAsserts_RBRACK] = ACTIONS(216),
    [anon_sym_file_COMMA] = ACTIONS(216),
    [anon_sym_variable] = ACTIONS(188),
    [anon_sym_status] = ACTIONS(190),
    [anon_sym_url] = ACTIONS(192),
    [anon_sym_header] = ACTIONS(194),
    [anon_sym_cookie] = ACTIONS(196),
    [anon_sym_body] = ACTIONS(198),
    [anon_sym_xpath] = ACTIONS(200),
    [anon_sym_jsonpath] = ACTIONS(202),
    [anon_sym_regex] = ACTIONS(204),
    [anon_sym_duration] = ACTIONS(206),
    [anon_sym_sha256] = ACTIONS(208),
    [anon_sym_md5] = ACTIONS(210),
    [anon_sym_bytes] = ACTIONS(212),
    [anon_sym_LT] = ACTIONS(216),
    [anon_sym_LT_QMARK] = ACTIONS(216),
    [anon_sym_base64_COMMA] = ACTIONS(216),
    [anon_sym_hex_COMMA] = ACTIONS(216),
    [anon_sym_DQUOTE] = ACTIONS(216),
    [anon_sym_BQUOTE] = ACTIONS(216),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(216),
    [anon_sym_LBRACE] = ACTIONS(216),
    [anon_sym_LBRACK] = ACTIONS(216),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(214),
    [anon_sym_true] = ACTIONS(216),
    [anon_sym_false] = ACTIONS(216),
    [anon_sym_null] = ACTIONS(216),
    [aux_sym_digit_token1] = ACTIONS(216),
    [sym_comment] = ACTIONS(216),
  },
  [18] = {
    [sym_assert] = STATE(18),
    [sym_query] = STATE(21),
    [sym_status_query] = STATE(89),
    [sym_url_query] = STATE(89),
    [sym_header_query] = STATE(89),
    [sym_cookie_query] = STATE(89),
    [sym_body_query] = STATE(89),
    [sym_xpath_query] = STATE(89),
    [sym_jsonpath_query] = STATE(89),
    [sym_regex_query] = STATE(89),
    [sym_variable_query] = STATE(89),
    [sym_duration_query] = STATE(89),
    [sym_sha256_query] = STATE(89),
    [sym_md5_query] = STATE(89),
    [sym_bytes_query] = STATE(89),
    [aux_sym_asserts_section_repeat1] = STATE(18),
    [ts_builtin_sym_end] = ACTIONS(218),
    [anon_sym_LF] = ACTIONS(218),
    [anon_sym_GET] = ACTIONS(220),
    [anon_sym_HEAD] = ACTIONS(220),
    [anon_sym_POST] = ACTIONS(220),
    [anon_sym_PUT] = ACTIONS(220),
    [anon_sym_DELETE] = ACTIONS(220),
    [anon_sym_CONNECT] = ACTIONS(220),
    [anon_sym_OPTIONS] = ACTIONS(220),
    [anon_sym_TRACE] = ACTIONS(220),
    [anon_sym_PATCH] = ACTIONS(220),
    [anon_sym_LINK] = ACTIONS(220),
    [anon_sym_UNLINK] = ACTIONS(220),
    [anon_sym_PURGE] = ACTIONS(220),
    [anon_sym_LOCK] = ACTIONS(220),
    [anon_sym_UNLOCK] = ACTIONS(220),
    [anon_sym_PROPFIND] = ACTIONS(220),
    [anon_sym_VIEW] = ACTIONS(220),
    [anon_sym_LBRACKCaptures_RBRACK] = ACTIONS(220),
    [anon_sym_LBRACKAsserts_RBRACK] = ACTIONS(220),
    [anon_sym_file_COMMA] = ACTIONS(220),
    [anon_sym_variable] = ACTIONS(222),
    [anon_sym_status] = ACTIONS(225),
    [anon_sym_url] = ACTIONS(228),
    [anon_sym_header] = ACTIONS(231),
    [anon_sym_cookie] = ACTIONS(234),
    [anon_sym_body] = ACTIONS(237),
    [anon_sym_xpath] = ACTIONS(240),
    [anon_sym_jsonpath] = ACTIONS(243),
    [anon_sym_regex] = ACTIONS(246),
    [anon_sym_duration] = ACTIONS(249),
    [anon_sym_sha256] = ACTIONS(252),
    [anon_sym_md5] = ACTIONS(255),
    [anon_sym_bytes] = ACTIONS(258),
    [anon_sym_LT] = ACTIONS(220),
    [anon_sym_LT_QMARK] = ACTIONS(220),
    [anon_sym_base64_COMMA] = ACTIONS(220),
    [anon_sym_hex_COMMA] = ACTIONS(220),
    [anon_sym_DQUOTE] = ACTIONS(220),
    [anon_sym_BQUOTE] = ACTIONS(220),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(220),
    [anon_sym_LBRACE] = ACTIONS(220),
    [anon_sym_LBRACK] = ACTIONS(220),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(218),
    [anon_sym_true] = ACTIONS(220),
    [anon_sym_false] = ACTIONS(220),
    [anon_sym_null] = ACTIONS(220),
    [aux_sym_digit_token1] = ACTIONS(220),
    [sym_comment] = ACTIONS(220),
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
    STATE(115), 1,
      sym_xml_open_tag,
    STATE(125), 1,
      sym_body,
    STATE(265), 1,
      sym_integer,
    STATE(369), 1,
      sym_bytes,
    STATE(596), 1,
      sym_xml_tag,
    ACTIONS(57), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(261), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(66), 2,
      sym_response_section,
      aux_sym_response_repeat1,
    STATE(72), 2,
      sym_captures_section,
      sym_asserts_section,
    STATE(229), 2,
      sym_digit,
      aux_sym_integer_repeat1,
    STATE(266), 2,
      sym_xml_prolog_tag,
      aux_sym_xml_repeat1,
    STATE(595), 7,
      sym_xml,
      sym_oneline_base64,
      sym_oneline_file,
      sym_oneline_hex,
      sym_oneline_string,
      sym_multiline_string,
      sym_json_value,
    STATE(598), 7,
      sym_json_object,
      sym_json_array,
      sym_json_string,
      sym_json_number,
      sym_template,
      sym_boolean,
      sym_null,
    ACTIONS(263), 17,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
    STATE(115), 1,
      sym_xml_open_tag,
    STATE(124), 1,
      sym_body,
    STATE(265), 1,
      sym_integer,
    STATE(369), 1,
      sym_bytes,
    STATE(596), 1,
      sym_xml_tag,
    ACTIONS(57), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(125), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(66), 2,
      sym_response_section,
      aux_sym_response_repeat1,
    STATE(72), 2,
      sym_captures_section,
      sym_asserts_section,
    STATE(229), 2,
      sym_digit,
      aux_sym_integer_repeat1,
    STATE(266), 2,
      sym_xml_prolog_tag,
      aux_sym_xml_repeat1,
    STATE(595), 7,
      sym_xml,
      sym_oneline_base64,
      sym_oneline_file,
      sym_oneline_hex,
      sym_oneline_string,
      sym_multiline_string,
      sym_json_value,
    STATE(598), 7,
      sym_json_object,
      sym_json_array,
      sym_json_string,
      sym_json_number,
      sym_template,
      sym_boolean,
      sym_null,
    ACTIONS(127), 17,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
    ACTIONS(265), 1,
      anon_sym_regex,
    ACTIONS(267), 1,
      anon_sym_not,
    ACTIONS(281), 1,
      anon_sym_startsWith,
    ACTIONS(283), 1,
      anon_sym_endsWith,
    ACTIONS(285), 1,
      anon_sym_contains,
    ACTIONS(287), 1,
      anon_sym_matches,
    ACTIONS(289), 1,
      anon_sym_exists,
    ACTIONS(291), 1,
      anon_sym_includes,
    ACTIONS(293), 1,
      anon_sym_isInteger,
    ACTIONS(295), 1,
      anon_sym_isFloat,
    ACTIONS(297), 1,
      anon_sym_isBoolean,
    ACTIONS(299), 1,
      anon_sym_isString,
    ACTIONS(301), 1,
      anon_sym_isCollection,
    ACTIONS(303), 1,
      anon_sym_count,
    ACTIONS(305), 1,
      anon_sym_urlEncode,
    ACTIONS(307), 1,
      anon_sym_urlDecode,
    ACTIONS(309), 1,
      anon_sym_htmlEscape,
    ACTIONS(311), 1,
      anon_sym_htmlUnescape,
    ACTIONS(313), 1,
      anon_sym_toInt,
    STATE(383), 1,
      sym_predicate,
    STATE(492), 1,
      sym_predicate_func,
    ACTIONS(269), 2,
      anon_sym_equals,
      anon_sym_EQ_EQ,
    ACTIONS(271), 2,
      anon_sym_notEquals,
      anon_sym_BANG_EQ,
    ACTIONS(273), 2,
      anon_sym_greaterThan,
      anon_sym_GT,
    ACTIONS(275), 2,
      anon_sym_greaterThanOrEquals,
      anon_sym_GT_EQ,
    ACTIONS(277), 2,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(279), 2,
      anon_sym_lessThanOrEquals,
      anon_sym_LT_EQ,
    STATE(22), 2,
      sym_filter,
      aux_sym_capture_repeat1,
    STATE(80), 7,
      sym_regex_filter,
      sym_count_filter,
      sym_url_encode_filter,
      sym_url_decode_filter,
      sym_html_encode_filter,
      sym_html_decode_filter,
      sym_to_int_filter,
    STATE(551), 17,
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
    ACTIONS(265), 1,
      anon_sym_regex,
    ACTIONS(267), 1,
      anon_sym_not,
    ACTIONS(281), 1,
      anon_sym_startsWith,
    ACTIONS(283), 1,
      anon_sym_endsWith,
    ACTIONS(285), 1,
      anon_sym_contains,
    ACTIONS(287), 1,
      anon_sym_matches,
    ACTIONS(289), 1,
      anon_sym_exists,
    ACTIONS(291), 1,
      anon_sym_includes,
    ACTIONS(293), 1,
      anon_sym_isInteger,
    ACTIONS(295), 1,
      anon_sym_isFloat,
    ACTIONS(297), 1,
      anon_sym_isBoolean,
    ACTIONS(299), 1,
      anon_sym_isString,
    ACTIONS(301), 1,
      anon_sym_isCollection,
    ACTIONS(303), 1,
      anon_sym_count,
    ACTIONS(305), 1,
      anon_sym_urlEncode,
    ACTIONS(307), 1,
      anon_sym_urlDecode,
    ACTIONS(309), 1,
      anon_sym_htmlEscape,
    ACTIONS(311), 1,
      anon_sym_htmlUnescape,
    ACTIONS(313), 1,
      anon_sym_toInt,
    STATE(423), 1,
      sym_predicate,
    STATE(492), 1,
      sym_predicate_func,
    ACTIONS(269), 2,
      anon_sym_equals,
      anon_sym_EQ_EQ,
    ACTIONS(271), 2,
      anon_sym_notEquals,
      anon_sym_BANG_EQ,
    ACTIONS(273), 2,
      anon_sym_greaterThan,
      anon_sym_GT,
    ACTIONS(275), 2,
      anon_sym_greaterThanOrEquals,
      anon_sym_GT_EQ,
    ACTIONS(277), 2,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(279), 2,
      anon_sym_lessThanOrEquals,
      anon_sym_LT_EQ,
    STATE(65), 2,
      sym_filter,
      aux_sym_capture_repeat1,
    STATE(80), 7,
      sym_regex_filter,
      sym_count_filter,
      sym_url_encode_filter,
      sym_url_decode_filter,
      sym_html_encode_filter,
      sym_html_decode_filter,
      sym_to_int_filter,
    STATE(551), 17,
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
    ACTIONS(315), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(317), 55,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
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
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      aux_sym_digit_token1,
      sym_comment,
  [553] = 2,
    ACTIONS(319), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(321), 55,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
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
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      aux_sym_digit_token1,
      sym_comment,
  [616] = 2,
    ACTIONS(323), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(325), 55,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
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
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      aux_sym_digit_token1,
      sym_comment,
  [679] = 2,
    ACTIONS(327), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(329), 55,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
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
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      aux_sym_digit_token1,
      sym_comment,
  [742] = 2,
    ACTIONS(331), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(333), 55,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
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
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      aux_sym_digit_token1,
      sym_comment,
  [805] = 2,
    ACTIONS(335), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(337), 55,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
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
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      aux_sym_digit_token1,
      sym_comment,
  [868] = 2,
    ACTIONS(339), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(341), 55,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
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
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      aux_sym_digit_token1,
      sym_comment,
  [931] = 2,
    ACTIONS(343), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(345), 55,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
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
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      aux_sym_digit_token1,
      sym_comment,
  [994] = 2,
    ACTIONS(347), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(349), 55,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
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
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      aux_sym_digit_token1,
      sym_comment,
  [1057] = 2,
    ACTIONS(351), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(353), 55,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
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
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      aux_sym_digit_token1,
      sym_comment,
  [1120] = 2,
    ACTIONS(355), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(357), 55,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
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
    ACTIONS(359), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(361), 55,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
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
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      aux_sym_digit_token1,
      sym_comment,
  [1246] = 2,
    ACTIONS(363), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(365), 55,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
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
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      aux_sym_digit_token1,
      sym_comment,
  [1309] = 2,
    ACTIONS(367), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(369), 55,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
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
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      aux_sym_digit_token1,
      sym_comment,
  [1372] = 2,
    ACTIONS(371), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(373), 55,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
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
    ACTIONS(379), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(482), 1,
      sym_key_string,
    STATE(546), 1,
      sym_multipart_form_data_param,
    ACTIONS(375), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(231), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(523), 2,
      sym_key_value,
      sym_file_param,
    STATE(160), 3,
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
  [1512] = 10,
    ACTIONS(43), 1,
      sym_key_string_text,
    ACTIONS(45), 1,
      anon_sym_BSLASH2,
    ACTIONS(379), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(482), 1,
      sym_key_string,
    STATE(546), 1,
      sym_multipart_form_data_param,
    ACTIONS(381), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(231), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(523), 2,
      sym_key_value,
      sym_file_param,
    STATE(160), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
    ACTIONS(383), 42,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
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
    ACTIONS(43), 1,
      sym_key_string_text,
    ACTIONS(45), 1,
      anon_sym_BSLASH2,
    ACTIONS(379), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(482), 1,
      sym_key_string,
    STATE(546), 1,
      sym_multipart_form_data_param,
    ACTIONS(385), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(231), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(523), 2,
      sym_key_value,
      sym_file_param,
    STATE(160), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
    ACTIONS(387), 42,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
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
  [1666] = 10,
    ACTIONS(393), 1,
      sym_key_string_text,
    ACTIONS(396), 1,
      anon_sym_BSLASH2,
    ACTIONS(399), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(370), 1,
      sym_key_value,
    STATE(597), 1,
      sym_key_string,
    ACTIONS(389), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(41), 2,
      sym_header,
      aux_sym_request_repeat1,
    STATE(231), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(160), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
    ACTIONS(391), 42,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
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
  [1743] = 9,
    ACTIONS(43), 1,
      sym_key_string_text,
    ACTIONS(45), 1,
      anon_sym_BSLASH2,
    ACTIONS(379), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(597), 1,
      sym_key_string,
    STATE(603), 1,
      sym_key_value,
    ACTIONS(402), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(231), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(160), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
    ACTIONS(404), 42,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
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
  [1816] = 9,
    ACTIONS(43), 1,
      sym_key_string_text,
    ACTIONS(45), 1,
      anon_sym_BSLASH2,
    ACTIONS(379), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(597), 1,
      sym_key_string,
    STATE(603), 1,
      sym_key_value,
    ACTIONS(406), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(231), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(160), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
    ACTIONS(408), 42,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
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
  [1889] = 9,
    ACTIONS(43), 1,
      sym_key_string_text,
    ACTIONS(45), 1,
      anon_sym_BSLASH2,
    ACTIONS(379), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(597), 1,
      sym_key_string,
    STATE(603), 1,
      sym_key_value,
    ACTIONS(410), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(231), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(160), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
    ACTIONS(412), 42,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
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
  [1962] = 9,
    ACTIONS(43), 1,
      sym_key_string_text,
    ACTIONS(45), 1,
      anon_sym_BSLASH2,
    ACTIONS(379), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(597), 1,
      sym_key_string,
    STATE(603), 1,
      sym_key_value,
    ACTIONS(414), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(231), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(160), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
    ACTIONS(416), 42,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
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
  [2035] = 9,
    ACTIONS(43), 1,
      sym_key_string_text,
    ACTIONS(45), 1,
      anon_sym_BSLASH2,
    ACTIONS(379), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(597), 1,
      sym_key_string,
    STATE(603), 1,
      sym_key_value,
    ACTIONS(418), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(231), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(160), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
    ACTIONS(420), 42,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
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
  [2108] = 9,
    ACTIONS(43), 1,
      sym_key_string_text,
    ACTIONS(45), 1,
      anon_sym_BSLASH2,
    ACTIONS(379), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(597), 1,
      sym_key_string,
    STATE(603), 1,
      sym_key_value,
    ACTIONS(422), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(231), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(160), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
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
  [2181] = 9,
    ACTIONS(43), 1,
      sym_key_string_text,
    ACTIONS(45), 1,
      anon_sym_BSLASH2,
    ACTIONS(379), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(597), 1,
      sym_key_string,
    STATE(603), 1,
      sym_key_value,
    ACTIONS(426), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(231), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(160), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
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
  [2254] = 9,
    ACTIONS(43), 1,
      sym_key_string_text,
    ACTIONS(45), 1,
      anon_sym_BSLASH2,
    ACTIONS(379), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(597), 1,
      sym_key_string,
    STATE(603), 1,
      sym_key_value,
    ACTIONS(430), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(231), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(160), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
    ACTIONS(432), 42,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
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
  [2327] = 9,
    ACTIONS(43), 1,
      sym_key_string_text,
    ACTIONS(45), 1,
      anon_sym_BSLASH2,
    ACTIONS(379), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(597), 1,
      sym_key_string,
    STATE(603), 1,
      sym_key_value,
    ACTIONS(434), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(231), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(160), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
    ACTIONS(436), 42,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
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
  [2400] = 10,
    ACTIONS(442), 1,
      anon_sym_LBRACKBasicAuth_RBRACK,
    ACTIONS(445), 1,
      anon_sym_LBRACKQueryStringParams_RBRACK,
    ACTIONS(448), 1,
      anon_sym_LBRACKFormParams_RBRACK,
    ACTIONS(451), 1,
      anon_sym_LBRACKMultipartFormData_RBRACK,
    ACTIONS(454), 1,
      anon_sym_LBRACKCookies_RBRACK,
    ACTIONS(457), 1,
      anon_sym_LBRACKOptions_RBRACK,
    STATE(51), 2,
      sym_request_section,
      aux_sym_request_repeat2,
    ACTIONS(438), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    STATE(63), 6,
      sym_basic_auth_section,
      sym_query_string_params_section,
      sym_form_params_section,
      sym_multipart_form_data_section,
      sym_cookies_section,
      sym_options_section,
    ACTIONS(440), 36,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
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
  [2474] = 6,
    ACTIONS(462), 1,
      anon_sym_LF,
    ACTIONS(467), 1,
      sym_comment,
    STATE(56), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(52), 2,
      sym__comment_or_new_line,
      aux_sym_hurl_file_repeat2,
    ACTIONS(460), 3,
      ts_builtin_sym_end,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(465), 42,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
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
  [2537] = 2,
    ACTIONS(470), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(472), 46,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
  [2591] = 2,
    ACTIONS(474), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(476), 46,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
  [2645] = 5,
    ACTIONS(478), 1,
      anon_sym_LF,
    ACTIONS(481), 1,
      sym_comment,
    STATE(55), 1,
      aux_sym__comment_or_new_line_repeat1,
    ACTIONS(85), 3,
      ts_builtin_sym_end,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(90), 42,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
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
  [2704] = 5,
    ACTIONS(484), 1,
      anon_sym_LF,
    ACTIONS(486), 1,
      sym_comment,
    STATE(55), 1,
      aux_sym__comment_or_new_line_repeat1,
    ACTIONS(176), 3,
      ts_builtin_sym_end,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(180), 42,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
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
  [2763] = 2,
    ACTIONS(488), 4,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(490), 43,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
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
  [2815] = 10,
    ACTIONS(393), 1,
      sym_key_string_text,
    ACTIONS(396), 1,
      anon_sym_BSLASH2,
    ACTIONS(399), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(387), 1,
      sym_key_value,
    STATE(597), 1,
      sym_key_string,
    ACTIONS(389), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(58), 2,
      sym_header,
      aux_sym_request_repeat1,
    STATE(231), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(160), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
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
  [2883] = 9,
    ACTIONS(496), 1,
      sym_key_string_text,
    ACTIONS(498), 1,
      anon_sym_BSLASH2,
    ACTIONS(500), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(600), 1,
      sym_key_string,
    ACTIONS(492), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(60), 2,
      sym_capture,
      aux_sym_captures_section_repeat1,
    STATE(261), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(172), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
    ACTIONS(494), 33,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
  [2948] = 9,
    ACTIONS(496), 1,
      sym_key_string_text,
    ACTIONS(498), 1,
      anon_sym_BSLASH2,
    ACTIONS(500), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(600), 1,
      sym_key_string,
    ACTIONS(502), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(61), 2,
      sym_capture,
      aux_sym_captures_section_repeat1,
    STATE(261), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(172), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
    ACTIONS(504), 33,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
  [3013] = 9,
    ACTIONS(510), 1,
      sym_key_string_text,
    ACTIONS(513), 1,
      anon_sym_BSLASH2,
    ACTIONS(516), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(600), 1,
      sym_key_string,
    ACTIONS(506), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(61), 2,
      sym_capture,
      aux_sym_captures_section_repeat1,
    STATE(261), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(172), 3,
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
  [3078] = 2,
    ACTIONS(519), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(521), 42,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
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
  [3128] = 2,
    ACTIONS(523), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(525), 42,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
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
  [3178] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(281), 1,
      anon_sym_startsWith,
    ACTIONS(283), 1,
      anon_sym_endsWith,
    ACTIONS(285), 1,
      anon_sym_contains,
    ACTIONS(287), 1,
      anon_sym_matches,
    ACTIONS(289), 1,
      anon_sym_exists,
    ACTIONS(291), 1,
      anon_sym_includes,
    ACTIONS(293), 1,
      anon_sym_isInteger,
    ACTIONS(295), 1,
      anon_sym_isFloat,
    ACTIONS(297), 1,
      anon_sym_isBoolean,
    ACTIONS(299), 1,
      anon_sym_isString,
    ACTIONS(301), 1,
      anon_sym_isCollection,
    STATE(519), 1,
      sym_predicate_func,
    ACTIONS(269), 2,
      anon_sym_equals,
      anon_sym_EQ_EQ,
    ACTIONS(271), 2,
      anon_sym_notEquals,
      anon_sym_BANG_EQ,
    ACTIONS(273), 2,
      anon_sym_greaterThan,
      anon_sym_GT,
    ACTIONS(275), 2,
      anon_sym_greaterThanOrEquals,
      anon_sym_GT_EQ,
    ACTIONS(277), 2,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(279), 2,
      anon_sym_lessThanOrEquals,
      anon_sym_LT_EQ,
    STATE(551), 17,
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
  [3261] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(527), 1,
      anon_sym_regex,
    ACTIONS(534), 1,
      anon_sym_count,
    ACTIONS(537), 1,
      anon_sym_urlEncode,
    ACTIONS(540), 1,
      anon_sym_urlDecode,
    ACTIONS(543), 1,
      anon_sym_htmlEscape,
    ACTIONS(546), 1,
      anon_sym_htmlUnescape,
    ACTIONS(549), 1,
      anon_sym_toInt,
    STATE(65), 2,
      sym_filter,
      aux_sym_capture_repeat1,
    ACTIONS(530), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    STATE(80), 7,
      sym_regex_filter,
      sym_count_filter,
      sym_url_encode_filter,
      sym_url_decode_filter,
      sym_html_encode_filter,
      sym_html_decode_filter,
      sym_to_int_filter,
    ACTIONS(532), 20,
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
  [3328] = 6,
    ACTIONS(556), 1,
      anon_sym_LBRACKCaptures_RBRACK,
    ACTIONS(559), 1,
      anon_sym_LBRACKAsserts_RBRACK,
    STATE(66), 2,
      sym_response_section,
      aux_sym_response_repeat1,
    STATE(72), 2,
      sym_captures_section,
      sym_asserts_section,
    ACTIONS(552), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(554), 31,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
  [3381] = 5,
    ACTIONS(562), 1,
      anon_sym_LF,
    ACTIONS(564), 1,
      sym_comment,
    STATE(68), 1,
      aux_sym__comment_or_new_line_repeat1,
    ACTIONS(176), 3,
      ts_builtin_sym_end,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(180), 33,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
  [3431] = 5,
    ACTIONS(566), 1,
      anon_sym_LF,
    ACTIONS(569), 1,
      sym_comment,
    STATE(68), 1,
      aux_sym__comment_or_new_line_repeat1,
    ACTIONS(85), 3,
      ts_builtin_sym_end,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(90), 33,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
  [3481] = 2,
    ACTIONS(572), 4,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(574), 34,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
  [3524] = 2,
    ACTIONS(576), 4,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(578), 34,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
  [3567] = 2,
    ACTIONS(488), 4,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(490), 34,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
  [3610] = 2,
    ACTIONS(580), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(582), 33,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
  [3651] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(586), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(584), 27,
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
  [3691] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(590), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(588), 27,
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
  [3731] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(594), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(592), 27,
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
  [3771] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(598), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(596), 27,
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
  [3811] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(602), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(600), 27,
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
  [3851] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(606), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(604), 27,
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
  [3891] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(610), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(608), 27,
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
  [3931] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(614), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(612), 27,
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
  [3971] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(618), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(616), 27,
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
  [4011] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(622), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(620), 27,
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
  [4051] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(626), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(624), 27,
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
  [4091] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(630), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(628), 27,
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
  [4131] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(634), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(632), 26,
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
  [4170] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(638), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(636), 26,
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
  [4209] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(642), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(640), 26,
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
  [4248] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(646), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(644), 26,
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
  [4287] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(650), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(648), 26,
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
  [4326] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(654), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(652), 26,
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
  [4365] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(658), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(656), 26,
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
  [4404] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(662), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(660), 26,
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
  [4443] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(666), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(664), 26,
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
  [4482] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(670), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(668), 26,
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
  [4521] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(674), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(672), 26,
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
  [4560] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(678), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(676), 26,
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
  [4599] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(682), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(680), 26,
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
  [4638] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(686), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(684), 26,
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
  [4677] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(688), 1,
      anon_sym_variable,
    ACTIONS(690), 1,
      anon_sym_status,
    ACTIONS(692), 1,
      anon_sym_url,
    ACTIONS(694), 1,
      anon_sym_header,
    ACTIONS(696), 1,
      anon_sym_cookie,
    ACTIONS(698), 1,
      anon_sym_body,
    ACTIONS(700), 1,
      anon_sym_xpath,
    ACTIONS(702), 1,
      anon_sym_jsonpath,
    ACTIONS(704), 1,
      anon_sym_regex,
    ACTIONS(706), 1,
      anon_sym_duration,
    ACTIONS(708), 1,
      anon_sym_sha256,
    ACTIONS(710), 1,
      anon_sym_md5,
    ACTIONS(712), 1,
      anon_sym_bytes,
    STATE(122), 1,
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
  [4738] = 9,
    ACTIONS(7), 1,
      anon_sym_LF,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(714), 1,
      ts_builtin_sym_end,
    STATE(15), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(113), 1,
      sym_response,
    STATE(127), 1,
      sym__comment_or_new_line,
    STATE(401), 1,
      sym_version,
    ACTIONS(718), 5,
      anon_sym_HTTP_SLASH1_DOT0,
      anon_sym_HTTP_SLASH1_DOT1,
      anon_sym_HTTP_SLASH2,
      anon_sym_HTTP_SLASH_STAR,
      anon_sym_HTTP,
    ACTIONS(716), 16,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
  [4785] = 9,
    ACTIONS(7), 1,
      anon_sym_LF,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(720), 1,
      ts_builtin_sym_end,
    STATE(15), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(100), 1,
      sym_request,
    STATE(134), 1,
      sym_method,
    STATE(112), 2,
      sym_entry,
      aux_sym_hurl_file_repeat1,
    STATE(290), 2,
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
  [4830] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(722), 1,
      anon_sym_file_COMMA,
    ACTIONS(724), 1,
      anon_sym_base64_COMMA,
    ACTIONS(726), 1,
      anon_sym_hex_COMMA,
    ACTIONS(728), 1,
      anon_sym_DQUOTE,
    ACTIONS(730), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(734), 1,
      anon_sym_null,
    ACTIONS(736), 1,
      aux_sym_digit_token1,
    STATE(407), 1,
      sym_integer,
    STATE(501), 1,
      sym_predicate_value,
    ACTIONS(732), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(229), 2,
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
  [4883] = 2,
    ACTIONS(738), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(740), 22,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
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
  [4912] = 2,
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
  [4941] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(722), 1,
      anon_sym_file_COMMA,
    ACTIONS(724), 1,
      anon_sym_base64_COMMA,
    ACTIONS(726), 1,
      anon_sym_hex_COMMA,
    ACTIONS(728), 1,
      anon_sym_DQUOTE,
    ACTIONS(730), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(734), 1,
      anon_sym_null,
    ACTIONS(736), 1,
      aux_sym_digit_token1,
    STATE(407), 1,
      sym_integer,
    STATE(612), 1,
      sym_predicate_value,
    ACTIONS(732), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(229), 2,
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
  [4994] = 2,
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
  [5023] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(722), 1,
      anon_sym_file_COMMA,
    ACTIONS(724), 1,
      anon_sym_base64_COMMA,
    ACTIONS(726), 1,
      anon_sym_hex_COMMA,
    ACTIONS(728), 1,
      anon_sym_DQUOTE,
    ACTIONS(730), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(734), 1,
      anon_sym_null,
    ACTIONS(736), 1,
      aux_sym_digit_token1,
    STATE(407), 1,
      sym_integer,
    STATE(503), 1,
      sym_predicate_value,
    ACTIONS(732), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(229), 2,
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
  [5076] = 2,
    ACTIONS(742), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(744), 22,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
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
  [5105] = 2,
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
  [5134] = 13,
    ACTIONS(59), 1,
      anon_sym_null,
    ACTIONS(61), 1,
      aux_sym_digit_token1,
    ACTIONS(748), 1,
      anon_sym_BSLASH,
    ACTIONS(750), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(752), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(280), 1,
      aux_sym_value_string_text_repeat1,
    STATE(433), 1,
      sym_integer,
    ACTIONS(57), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(746), 2,
      anon_sym_LF,
      sym_comment,
    STATE(229), 2,
      sym_digit,
      aux_sym_integer_repeat1,
    STATE(143), 3,
      sym_value_string_content,
      sym_template,
      aux_sym_value_string_repeat1,
    STATE(212), 3,
      sym_value_string_text,
      sym_value_string_escaped_char,
      aux_sym_value_string_content_repeat1,
    STATE(587), 4,
      sym_value_string,
      sym_boolean,
      sym_null,
      sym_float,
  [5184] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(59), 1,
      anon_sym_null,
    ACTIONS(61), 1,
      aux_sym_digit_token1,
    ACTIONS(728), 1,
      anon_sym_DQUOTE,
    ACTIONS(754), 1,
      sym_key_string_text,
    ACTIONS(756), 1,
      anon_sym_BSLASH2,
    STATE(430), 1,
      sym_integer,
    STATE(608), 1,
      sym_variable_value,
    ACTIONS(57), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(229), 2,
      sym_digit,
      aux_sym_integer_repeat1,
    STATE(253), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(168), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
    STATE(607), 5,
      sym_quoted_string,
      sym_key_string,
      sym_boolean,
      sym_null,
      sym_float,
  [5236] = 6,
    ACTIONS(763), 1,
      sym_comment,
    STATE(100), 1,
      sym_request,
    STATE(134), 1,
      sym_method,
    ACTIONS(758), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(112), 2,
      sym_entry,
      aux_sym_hurl_file_repeat1,
    ACTIONS(760), 16,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
  [5272] = 6,
    ACTIONS(7), 1,
      anon_sym_LF,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(765), 1,
      ts_builtin_sym_end,
    STATE(15), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(129), 1,
      sym__comment_or_new_line,
    ACTIONS(767), 16,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
  [5306] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(769), 1,
      anon_sym_DQUOTE,
    ACTIONS(771), 1,
      anon_sym_LBRACE,
    ACTIONS(773), 1,
      anon_sym_LBRACK,
    ACTIONS(775), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(779), 1,
      anon_sym_null,
    ACTIONS(781), 1,
      aux_sym_digit_token1,
    STATE(210), 1,
      sym_integer,
    STATE(381), 1,
      sym_json_value,
    ACTIONS(777), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(173), 2,
      sym_digit,
      aux_sym_integer_repeat1,
    STATE(421), 7,
      sym_json_object,
      sym_json_array,
      sym_json_string,
      sym_json_number,
      sym_template,
      sym_boolean,
      sym_null,
  [5351] = 13,
    ACTIONS(33), 1,
      anon_sym_LT,
    ACTIONS(783), 1,
      anon_sym_LT_QMARK,
    ACTIONS(785), 1,
      anon_sym_LT_SLASH,
    ACTIONS(787), 1,
      anon_sym_BSLASH,
    ACTIONS(789), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(791), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(793), 1,
      sym_comment,
    STATE(121), 1,
      sym_xml_open_tag,
    STATE(240), 1,
      aux_sym_value_string_text_repeat1,
    STATE(542), 1,
      sym_xml_close_tag,
    STATE(138), 3,
      sym_value_string_content,
      sym_template,
      aux_sym_value_string_repeat1,
    STATE(165), 3,
      sym_value_string_text,
      sym_value_string_escaped_char,
      aux_sym_value_string_content_repeat1,
    STATE(123), 4,
      sym_xml_prolog_tag,
      sym_xml_tag,
      sym_value_string,
      aux_sym_xml_tag_repeat1,
  [5398] = 13,
    ACTIONS(795), 1,
      anon_sym_LF,
    ACTIONS(797), 1,
      anon_sym_regex,
    ACTIONS(799), 1,
      anon_sym_count,
    ACTIONS(801), 1,
      anon_sym_urlEncode,
    ACTIONS(803), 1,
      anon_sym_urlDecode,
    ACTIONS(805), 1,
      anon_sym_htmlEscape,
    ACTIONS(807), 1,
      anon_sym_htmlUnescape,
    ACTIONS(809), 1,
      anon_sym_toInt,
    ACTIONS(811), 1,
      sym_comment,
    STATE(67), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(70), 1,
      sym__comment_or_new_line,
    STATE(131), 2,
      sym_filter,
      aux_sym_capture_repeat1,
    STATE(215), 7,
      sym_regex_filter,
      sym_count_filter,
      sym_url_encode_filter,
      sym_url_decode_filter,
      sym_html_encode_filter,
      sym_html_decode_filter,
      sym_to_int_filter,
  [5445] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(769), 1,
      anon_sym_DQUOTE,
    ACTIONS(771), 1,
      anon_sym_LBRACE,
    ACTIONS(773), 1,
      anon_sym_LBRACK,
    ACTIONS(775), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(779), 1,
      anon_sym_null,
    ACTIONS(781), 1,
      aux_sym_digit_token1,
    STATE(210), 1,
      sym_integer,
    STATE(445), 1,
      sym_json_value,
    ACTIONS(777), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(173), 2,
      sym_digit,
      aux_sym_integer_repeat1,
    STATE(421), 7,
      sym_json_object,
      sym_json_array,
      sym_json_string,
      sym_json_number,
      sym_template,
      sym_boolean,
      sym_null,
  [5490] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(769), 1,
      anon_sym_DQUOTE,
    ACTIONS(771), 1,
      anon_sym_LBRACE,
    ACTIONS(773), 1,
      anon_sym_LBRACK,
    ACTIONS(775), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(779), 1,
      anon_sym_null,
    ACTIONS(781), 1,
      aux_sym_digit_token1,
    STATE(210), 1,
      sym_integer,
    STATE(489), 1,
      sym_json_value,
    ACTIONS(777), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(173), 2,
      sym_digit,
      aux_sym_integer_repeat1,
    STATE(421), 7,
      sym_json_object,
      sym_json_array,
      sym_json_string,
      sym_json_number,
      sym_template,
      sym_boolean,
      sym_null,
  [5535] = 13,
    ACTIONS(33), 1,
      anon_sym_LT,
    ACTIONS(783), 1,
      anon_sym_LT_QMARK,
    ACTIONS(787), 1,
      anon_sym_BSLASH,
    ACTIONS(789), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(791), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(793), 1,
      sym_comment,
    ACTIONS(813), 1,
      anon_sym_LT_SLASH,
    STATE(121), 1,
      sym_xml_open_tag,
    STATE(240), 1,
      aux_sym_value_string_text_repeat1,
    STATE(267), 1,
      sym_xml_close_tag,
    STATE(138), 3,
      sym_value_string_content,
      sym_template,
      aux_sym_value_string_repeat1,
    STATE(165), 3,
      sym_value_string_text,
      sym_value_string_escaped_char,
      aux_sym_value_string_content_repeat1,
    STATE(126), 4,
      sym_xml_prolog_tag,
      sym_xml_tag,
      sym_value_string,
      aux_sym_xml_tag_repeat1,
  [5582] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(769), 1,
      anon_sym_DQUOTE,
    ACTIONS(771), 1,
      anon_sym_LBRACE,
    ACTIONS(773), 1,
      anon_sym_LBRACK,
    ACTIONS(775), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(779), 1,
      anon_sym_null,
    ACTIONS(781), 1,
      aux_sym_digit_token1,
    STATE(210), 1,
      sym_integer,
    STATE(393), 1,
      sym_json_value,
    ACTIONS(777), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(173), 2,
      sym_digit,
      aux_sym_integer_repeat1,
    STATE(421), 7,
      sym_json_object,
      sym_json_array,
      sym_json_string,
      sym_json_number,
      sym_template,
      sym_boolean,
      sym_null,
  [5627] = 13,
    ACTIONS(33), 1,
      anon_sym_LT,
    ACTIONS(783), 1,
      anon_sym_LT_QMARK,
    ACTIONS(787), 1,
      anon_sym_BSLASH,
    ACTIONS(789), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(791), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(793), 1,
      sym_comment,
    ACTIONS(813), 1,
      anon_sym_LT_SLASH,
    STATE(121), 1,
      sym_xml_open_tag,
    STATE(240), 1,
      aux_sym_value_string_text_repeat1,
    STATE(255), 1,
      sym_xml_close_tag,
    STATE(138), 3,
      sym_value_string_content,
      sym_template,
      aux_sym_value_string_repeat1,
    STATE(165), 3,
      sym_value_string_text,
      sym_value_string_escaped_char,
      aux_sym_value_string_content_repeat1,
    STATE(119), 4,
      sym_xml_prolog_tag,
      sym_xml_tag,
      sym_value_string,
      aux_sym_xml_tag_repeat1,
  [5674] = 13,
    ACTIONS(795), 1,
      anon_sym_LF,
    ACTIONS(797), 1,
      anon_sym_regex,
    ACTIONS(799), 1,
      anon_sym_count,
    ACTIONS(801), 1,
      anon_sym_urlEncode,
    ACTIONS(803), 1,
      anon_sym_urlDecode,
    ACTIONS(805), 1,
      anon_sym_htmlEscape,
    ACTIONS(807), 1,
      anon_sym_htmlUnescape,
    ACTIONS(809), 1,
      anon_sym_toInt,
    ACTIONS(811), 1,
      sym_comment,
    STATE(67), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(69), 1,
      sym__comment_or_new_line,
    STATE(116), 2,
      sym_filter,
      aux_sym_capture_repeat1,
    STATE(215), 7,
      sym_regex_filter,
      sym_count_filter,
      sym_url_encode_filter,
      sym_url_decode_filter,
      sym_html_encode_filter,
      sym_html_decode_filter,
      sym_to_int_filter,
  [5721] = 13,
    ACTIONS(33), 1,
      anon_sym_LT,
    ACTIONS(783), 1,
      anon_sym_LT_QMARK,
    ACTIONS(785), 1,
      anon_sym_LT_SLASH,
    ACTIONS(787), 1,
      anon_sym_BSLASH,
    ACTIONS(789), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(791), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(793), 1,
      sym_comment,
    STATE(121), 1,
      sym_xml_open_tag,
    STATE(240), 1,
      aux_sym_value_string_text_repeat1,
    STATE(565), 1,
      sym_xml_close_tag,
    STATE(138), 3,
      sym_value_string_content,
      sym_template,
      aux_sym_value_string_repeat1,
    STATE(165), 3,
      sym_value_string_text,
      sym_value_string_escaped_char,
      aux_sym_value_string_content_repeat1,
    STATE(126), 4,
      sym_xml_prolog_tag,
      sym_xml_tag,
      sym_value_string,
      aux_sym_xml_tag_repeat1,
  [5768] = 2,
    ACTIONS(261), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(263), 17,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
  [5792] = 2,
    ACTIONS(815), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(817), 17,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
  [5816] = 12,
    ACTIONS(793), 1,
      sym_comment,
    ACTIONS(819), 1,
      anon_sym_LT,
    ACTIONS(822), 1,
      anon_sym_LT_QMARK,
    ACTIONS(825), 1,
      anon_sym_LT_SLASH,
    ACTIONS(827), 1,
      anon_sym_BSLASH,
    ACTIONS(830), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(833), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(121), 1,
      sym_xml_open_tag,
    STATE(240), 1,
      aux_sym_value_string_text_repeat1,
    STATE(138), 3,
      sym_value_string_content,
      sym_template,
      aux_sym_value_string_repeat1,
    STATE(165), 3,
      sym_value_string_text,
      sym_value_string_escaped_char,
      aux_sym_value_string_content_repeat1,
    STATE(126), 4,
      sym_xml_prolog_tag,
      sym_xml_tag,
      sym_value_string,
      aux_sym_xml_tag_repeat1,
  [5860] = 2,
    ACTIONS(765), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(767), 17,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
  [5884] = 2,
    ACTIONS(125), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(127), 17,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
  [5908] = 2,
    ACTIONS(836), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(838), 17,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
  [5932] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(265), 1,
      anon_sym_regex,
    ACTIONS(303), 1,
      anon_sym_count,
    ACTIONS(305), 1,
      anon_sym_urlEncode,
    ACTIONS(307), 1,
      anon_sym_urlDecode,
    ACTIONS(309), 1,
      anon_sym_htmlEscape,
    ACTIONS(311), 1,
      anon_sym_htmlUnescape,
    ACTIONS(313), 1,
      anon_sym_toInt,
    ACTIONS(840), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(132), 2,
      sym_filter,
      aux_sym_capture_repeat1,
    STATE(80), 7,
      sym_regex_filter,
      sym_count_filter,
      sym_url_encode_filter,
      sym_url_decode_filter,
      sym_html_encode_filter,
      sym_html_decode_filter,
      sym_to_int_filter,
  [5973] = 11,
    ACTIONS(530), 1,
      sym_comment,
    ACTIONS(532), 1,
      anon_sym_LF,
    ACTIONS(842), 1,
      anon_sym_regex,
    ACTIONS(845), 1,
      anon_sym_count,
    ACTIONS(848), 1,
      anon_sym_urlEncode,
    ACTIONS(851), 1,
      anon_sym_urlDecode,
    ACTIONS(854), 1,
      anon_sym_htmlEscape,
    ACTIONS(857), 1,
      anon_sym_htmlUnescape,
    ACTIONS(860), 1,
      anon_sym_toInt,
    STATE(131), 2,
      sym_filter,
      aux_sym_capture_repeat1,
    STATE(215), 7,
      sym_regex_filter,
      sym_count_filter,
      sym_url_encode_filter,
      sym_url_decode_filter,
      sym_html_encode_filter,
      sym_html_decode_filter,
      sym_to_int_filter,
  [6014] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(265), 1,
      anon_sym_regex,
    ACTIONS(303), 1,
      anon_sym_count,
    ACTIONS(305), 1,
      anon_sym_urlEncode,
    ACTIONS(307), 1,
      anon_sym_urlDecode,
    ACTIONS(309), 1,
      anon_sym_htmlEscape,
    ACTIONS(311), 1,
      anon_sym_htmlUnescape,
    ACTIONS(313), 1,
      anon_sym_toInt,
    ACTIONS(863), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(65), 2,
      sym_filter,
      aux_sym_capture_repeat1,
    STATE(80), 7,
      sym_regex_filter,
      sym_count_filter,
      sym_url_encode_filter,
      sym_url_decode_filter,
      sym_html_encode_filter,
      sym_html_decode_filter,
      sym_to_int_filter,
  [6055] = 13,
    ACTIONS(15), 1,
      anon_sym_LF,
    ACTIONS(45), 1,
      anon_sym_BSLASH2,
    ACTIONS(63), 1,
      sym_comment,
    ACTIONS(379), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(865), 1,
      sym_key_string_text,
    STATE(40), 1,
      sym__comment_or_new_line,
    STATE(56), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(316), 1,
      sym_multipart_form_data_param,
    STATE(318), 1,
      aux_sym_multipart_form_data_section_repeat1,
    STATE(482), 1,
      sym_key_string,
    STATE(231), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(523), 2,
      sym_key_value,
      sym_file_param,
    STATE(160), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
  [6099] = 10,
    ACTIONS(748), 1,
      anon_sym_BSLASH,
    ACTIONS(750), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(752), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(56), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(280), 1,
      aux_sym_value_string_text_repeat1,
    STATE(329), 1,
      sym_value_string,
    ACTIONS(63), 2,
      anon_sym_LF,
      sym_comment,
    STATE(3), 2,
      sym__comment_or_new_line,
      aux_sym_hurl_file_repeat2,
    STATE(143), 3,
      sym_value_string_content,
      sym_template,
      aux_sym_value_string_repeat1,
    STATE(212), 3,
      sym_value_string_text,
      sym_value_string_escaped_char,
      aux_sym_value_string_content_repeat1,
  [6136] = 12,
    ACTIONS(15), 1,
      anon_sym_LF,
    ACTIONS(45), 1,
      anon_sym_BSLASH2,
    ACTIONS(63), 1,
      sym_comment,
    ACTIONS(379), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(865), 1,
      sym_key_string_text,
    STATE(48), 1,
      sym__comment_or_new_line,
    STATE(56), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(319), 1,
      sym_key_value,
    STATE(320), 1,
      aux_sym_query_string_params_section_repeat1,
    STATE(597), 1,
      sym_key_string,
    STATE(231), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(160), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
  [6176] = 12,
    ACTIONS(15), 1,
      anon_sym_LF,
    ACTIONS(45), 1,
      anon_sym_BSLASH2,
    ACTIONS(63), 1,
      sym_comment,
    ACTIONS(379), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(865), 1,
      sym_key_string_text,
    STATE(50), 1,
      sym__comment_or_new_line,
    STATE(56), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(308), 1,
      sym_key_value,
    STATE(309), 1,
      aux_sym_query_string_params_section_repeat1,
    STATE(597), 1,
      sym_key_string,
    STATE(231), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(160), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
  [6216] = 12,
    ACTIONS(15), 1,
      anon_sym_LF,
    ACTIONS(45), 1,
      anon_sym_BSLASH2,
    ACTIONS(63), 1,
      sym_comment,
    ACTIONS(379), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(865), 1,
      sym_key_string_text,
    STATE(49), 1,
      sym__comment_or_new_line,
    STATE(56), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(305), 1,
      sym_key_value,
    STATE(307), 1,
      aux_sym_query_string_params_section_repeat1,
    STATE(597), 1,
      sym_key_string,
    STATE(231), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(160), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
  [6256] = 6,
    ACTIONS(793), 1,
      sym_comment,
    ACTIONS(869), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(240), 1,
      aux_sym_value_string_text_repeat1,
    STATE(139), 3,
      sym_value_string_content,
      sym_template,
      aux_sym_value_string_repeat1,
    STATE(165), 3,
      sym_value_string_text,
      sym_value_string_escaped_char,
      aux_sym_value_string_content_repeat1,
    ACTIONS(867), 5,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      anon_sym_BSLASH,
      aux_sym_value_string_text_token1,
  [6283] = 8,
    ACTIONS(793), 1,
      sym_comment,
    ACTIONS(873), 1,
      anon_sym_BSLASH,
    ACTIONS(876), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(879), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(240), 1,
      aux_sym_value_string_text_repeat1,
    ACTIONS(871), 3,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
    STATE(139), 3,
      sym_value_string_content,
      sym_template,
      aux_sym_value_string_repeat1,
    STATE(165), 3,
      sym_value_string_text,
      sym_value_string_escaped_char,
      aux_sym_value_string_content_repeat1,
  [6314] = 9,
    ACTIONS(882), 1,
      anon_sym_BSLASH,
    ACTIONS(884), 1,
      sym_filename_text,
    ACTIONS(886), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(15), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(31), 1,
      sym__comment_or_new_line,
    STATE(428), 1,
      sym_filename,
    ACTIONS(11), 2,
      anon_sym_LF,
      sym_comment,
    STATE(245), 2,
      sym_filename_escaped_char,
      aux_sym_filename_content_repeat1,
    STATE(176), 3,
      sym_filename_content,
      sym_template,
      aux_sym_filename_repeat1,
  [6346] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      anon_sym_BSLASH2,
    ACTIONS(379), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(865), 1,
      sym_key_string_text,
    STATE(482), 1,
      sym_key_string,
    STATE(546), 1,
      sym_multipart_form_data_param,
    STATE(231), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(523), 2,
      sym_key_value,
      sym_file_param,
    STATE(160), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
  [6378] = 7,
    ACTIONS(793), 1,
      sym_comment,
    ACTIONS(888), 1,
      anon_sym_DQUOTE,
    ACTIONS(890), 1,
      aux_sym_quoted_string_text_token1,
    ACTIONS(892), 1,
      anon_sym_BSLASH,
    ACTIONS(894), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(150), 3,
      sym_quoted_string_content,
      sym_template,
      aux_sym_quoted_string_repeat1,
    STATE(206), 4,
      sym_quoted_string_text,
      sym_invalid_quoted_string_escaped_char,
      sym_quoted_string_escaped_char,
      aux_sym_quoted_string_content_repeat1,
  [6405] = 7,
    ACTIONS(748), 1,
      anon_sym_BSLASH,
    ACTIONS(750), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(752), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(280), 1,
      aux_sym_value_string_text_repeat1,
    ACTIONS(867), 2,
      anon_sym_LF,
      sym_comment,
    STATE(152), 3,
      sym_value_string_content,
      sym_template,
      aux_sym_value_string_repeat1,
    STATE(212), 3,
      sym_value_string_text,
      sym_value_string_escaped_char,
      aux_sym_value_string_content_repeat1,
  [6432] = 8,
    ACTIONS(793), 1,
      sym_comment,
    ACTIONS(896), 1,
      anon_sym_LF,
    ACTIONS(898), 1,
      anon_sym_BSLASH,
    ACTIONS(900), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(902), 1,
      aux_sym__multiline_string_text_token1,
    ACTIONS(904), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(153), 3,
      sym_multiline_string_content,
      sym_template,
      aux_sym_multiline_string_repeat1,
    STATE(214), 3,
      sym__multiline_string_text,
      sym_multiline_string_escaped_char,
      aux_sym_multiline_string_content_repeat1,
  [6461] = 7,
    ACTIONS(793), 1,
      sym_comment,
    ACTIONS(890), 1,
      aux_sym_quoted_string_text_token1,
    ACTIONS(892), 1,
      anon_sym_BSLASH,
    ACTIONS(894), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(906), 1,
      anon_sym_DQUOTE,
    STATE(149), 3,
      sym_quoted_string_content,
      sym_template,
      aux_sym_quoted_string_repeat1,
    STATE(206), 4,
      sym_quoted_string_text,
      sym_invalid_quoted_string_escaped_char,
      sym_quoted_string_escaped_char,
      aux_sym_quoted_string_content_repeat1,
  [6488] = 8,
    ACTIONS(793), 1,
      sym_comment,
    ACTIONS(896), 1,
      anon_sym_LF,
    ACTIONS(898), 1,
      anon_sym_BSLASH,
    ACTIONS(900), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(902), 1,
      aux_sym__multiline_string_text_token1,
    ACTIONS(904), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(151), 3,
      sym_multiline_string_content,
      sym_template,
      aux_sym_multiline_string_repeat1,
    STATE(214), 3,
      sym__multiline_string_text,
      sym_multiline_string_escaped_char,
      aux_sym_multiline_string_content_repeat1,
  [6517] = 7,
    ACTIONS(793), 1,
      sym_comment,
    ACTIONS(890), 1,
      aux_sym_quoted_string_text_token1,
    ACTIONS(892), 1,
      anon_sym_BSLASH,
    ACTIONS(894), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(908), 1,
      anon_sym_DQUOTE,
    STATE(145), 3,
      sym_quoted_string_content,
      sym_template,
      aux_sym_quoted_string_repeat1,
    STATE(206), 4,
      sym_quoted_string_text,
      sym_invalid_quoted_string_escaped_char,
      sym_quoted_string_escaped_char,
      aux_sym_quoted_string_content_repeat1,
  [6544] = 8,
    ACTIONS(793), 1,
      sym_comment,
    ACTIONS(898), 1,
      anon_sym_BSLASH,
    ACTIONS(902), 1,
      aux_sym__multiline_string_text_token1,
    ACTIONS(904), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(910), 1,
      anon_sym_LF,
    ACTIONS(912), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(144), 3,
      sym_multiline_string_content,
      sym_template,
      aux_sym_multiline_string_repeat1,
    STATE(214), 3,
      sym__multiline_string_text,
      sym_multiline_string_escaped_char,
      aux_sym_multiline_string_content_repeat1,
  [6573] = 7,
    ACTIONS(793), 1,
      sym_comment,
    ACTIONS(914), 1,
      anon_sym_DQUOTE,
    ACTIONS(916), 1,
      aux_sym_quoted_string_text_token1,
    ACTIONS(919), 1,
      anon_sym_BSLASH,
    ACTIONS(922), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(149), 3,
      sym_quoted_string_content,
      sym_template,
      aux_sym_quoted_string_repeat1,
    STATE(206), 4,
      sym_quoted_string_text,
      sym_invalid_quoted_string_escaped_char,
      sym_quoted_string_escaped_char,
      aux_sym_quoted_string_content_repeat1,
  [6600] = 7,
    ACTIONS(793), 1,
      sym_comment,
    ACTIONS(890), 1,
      aux_sym_quoted_string_text_token1,
    ACTIONS(892), 1,
      anon_sym_BSLASH,
    ACTIONS(894), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(925), 1,
      anon_sym_DQUOTE,
    STATE(149), 3,
      sym_quoted_string_content,
      sym_template,
      aux_sym_quoted_string_repeat1,
    STATE(206), 4,
      sym_quoted_string_text,
      sym_invalid_quoted_string_escaped_char,
      sym_quoted_string_escaped_char,
      aux_sym_quoted_string_content_repeat1,
  [6627] = 8,
    ACTIONS(793), 1,
      sym_comment,
    ACTIONS(898), 1,
      anon_sym_BSLASH,
    ACTIONS(902), 1,
      aux_sym__multiline_string_text_token1,
    ACTIONS(904), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(927), 1,
      anon_sym_LF,
    ACTIONS(929), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(153), 3,
      sym_multiline_string_content,
      sym_template,
      aux_sym_multiline_string_repeat1,
    STATE(214), 3,
      sym__multiline_string_text,
      sym_multiline_string_escaped_char,
      aux_sym_multiline_string_content_repeat1,
  [6656] = 7,
    ACTIONS(931), 1,
      anon_sym_BSLASH,
    ACTIONS(934), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(937), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(280), 1,
      aux_sym_value_string_text_repeat1,
    ACTIONS(871), 2,
      anon_sym_LF,
      sym_comment,
    STATE(152), 3,
      sym_value_string_content,
      sym_template,
      aux_sym_value_string_repeat1,
    STATE(212), 3,
      sym_value_string_text,
      sym_value_string_escaped_char,
      aux_sym_value_string_content_repeat1,
  [6683] = 8,
    ACTIONS(793), 1,
      sym_comment,
    ACTIONS(940), 1,
      anon_sym_LF,
    ACTIONS(943), 1,
      anon_sym_BSLASH,
    ACTIONS(946), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(948), 1,
      aux_sym__multiline_string_text_token1,
    ACTIONS(951), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(153), 3,
      sym_multiline_string_content,
      sym_template,
      aux_sym_multiline_string_repeat1,
    STATE(214), 3,
      sym__multiline_string_text,
      sym_multiline_string_escaped_char,
      aux_sym_multiline_string_content_repeat1,
  [6712] = 8,
    ACTIONS(748), 1,
      anon_sym_BSLASH,
    ACTIONS(750), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(752), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(793), 1,
      sym_comment,
    STATE(280), 1,
      aux_sym_value_string_text_repeat1,
    STATE(424), 1,
      sym_value_string,
    STATE(143), 3,
      sym_value_string_content,
      sym_template,
      aux_sym_value_string_repeat1,
    STATE(212), 3,
      sym_value_string_text,
      sym_value_string_escaped_char,
      aux_sym_value_string_content_repeat1,
  [6741] = 8,
    ACTIONS(793), 1,
      sym_comment,
    ACTIONS(954), 1,
      anon_sym_SEMI,
    ACTIONS(956), 1,
      anon_sym_BSLASH,
    ACTIONS(958), 1,
      sym_filename_text,
    ACTIONS(960), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(528), 1,
      sym_filename,
    STATE(246), 2,
      sym_filename_escaped_char,
      aux_sym_filename_content_repeat1,
    STATE(169), 3,
      sym_filename_content,
      sym_template,
      aux_sym_filename_repeat1,
  [6769] = 7,
    ACTIONS(793), 1,
      sym_comment,
    ACTIONS(962), 1,
      anon_sym_BSLASH,
    ACTIONS(964), 1,
      anon_sym_BQUOTE,
    ACTIONS(966), 1,
      aux_sym_oneline_string_text_token1,
    ACTIONS(968), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(162), 3,
      sym_oneline_string_content,
      sym_template,
      aux_sym_oneline_string_repeat1,
    STATE(237), 3,
      sym_oneline_string_text,
      sym_oneline_string_escaped_char,
      aux_sym_oneline_string_content_repeat1,
  [6795] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      anon_sym_BSLASH2,
    ACTIONS(379), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(865), 1,
      sym_key_string_text,
    STATE(597), 1,
      sym_key_string,
    STATE(603), 1,
      sym_key_value,
    STATE(231), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(160), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
  [6823] = 8,
    ACTIONS(793), 1,
      sym_comment,
    ACTIONS(956), 1,
      anon_sym_BSLASH,
    ACTIONS(958), 1,
      sym_filename_text,
    ACTIONS(960), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(970), 1,
      anon_sym_SEMI,
    STATE(534), 1,
      sym_filename,
    STATE(246), 2,
      sym_filename_escaped_char,
      aux_sym_filename_content_repeat1,
    STATE(169), 3,
      sym_filename_content,
      sym_template,
      aux_sym_filename_repeat1,
  [6851] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(972), 1,
      anon_sym_COLON,
    ACTIONS(974), 1,
      anon_sym_COLON2,
    ACTIONS(976), 1,
      sym_key_string_text,
    ACTIONS(979), 1,
      anon_sym_BSLASH2,
    ACTIONS(982), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(231), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(159), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
  [6879] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      anon_sym_BSLASH2,
    ACTIONS(379), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(865), 1,
      sym_key_string_text,
    ACTIONS(985), 1,
      anon_sym_COLON,
    ACTIONS(987), 1,
      anon_sym_COLON2,
    STATE(231), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(159), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
  [6907] = 7,
    ACTIONS(793), 1,
      sym_comment,
    ACTIONS(962), 1,
      anon_sym_BSLASH,
    ACTIONS(966), 1,
      aux_sym_oneline_string_text_token1,
    ACTIONS(968), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(989), 1,
      anon_sym_BQUOTE,
    STATE(156), 3,
      sym_oneline_string_content,
      sym_template,
      aux_sym_oneline_string_repeat1,
    STATE(237), 3,
      sym_oneline_string_text,
      sym_oneline_string_escaped_char,
      aux_sym_oneline_string_content_repeat1,
  [6933] = 7,
    ACTIONS(793), 1,
      sym_comment,
    ACTIONS(991), 1,
      anon_sym_BSLASH,
    ACTIONS(994), 1,
      anon_sym_BQUOTE,
    ACTIONS(996), 1,
      aux_sym_oneline_string_text_token1,
    ACTIONS(999), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(162), 3,
      sym_oneline_string_content,
      sym_template,
      aux_sym_oneline_string_repeat1,
    STATE(237), 3,
      sym_oneline_string_text,
      sym_oneline_string_escaped_char,
      aux_sym_oneline_string_content_repeat1,
  [6959] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      anon_sym_BSLASH2,
    ACTIONS(379), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(865), 1,
      sym_key_string_text,
    STATE(388), 1,
      sym_key_value,
    STATE(597), 1,
      sym_key_string,
    STATE(231), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(160), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
  [6987] = 7,
    ACTIONS(793), 1,
      sym_comment,
    ACTIONS(1004), 1,
      anon_sym_BSLASH,
    ACTIONS(1007), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(1010), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(240), 1,
      aux_sym_value_string_text_repeat1,
    ACTIONS(1002), 3,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
    STATE(164), 3,
      sym_value_string_text,
      sym_value_string_escaped_char,
      aux_sym_value_string_content_repeat1,
  [7013] = 7,
    ACTIONS(787), 1,
      anon_sym_BSLASH,
    ACTIONS(789), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(793), 1,
      sym_comment,
    ACTIONS(1014), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(240), 1,
      aux_sym_value_string_text_repeat1,
    ACTIONS(1012), 3,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
    STATE(164), 3,
      sym_value_string_text,
      sym_value_string_escaped_char,
      aux_sym_value_string_content_repeat1,
  [7039] = 7,
    ACTIONS(793), 1,
      sym_comment,
    ACTIONS(1016), 1,
      anon_sym_DQUOTE,
    ACTIONS(1018), 1,
      anon_sym_BSLASH,
    ACTIONS(1020), 1,
      aux_sym_json_string_text_token1,
    ACTIONS(1022), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(331), 2,
      sym_json_string_text,
      sym_json_string_escaped_char,
    STATE(167), 3,
      sym_json_string_content,
      sym_template,
      aux_sym_json_string_repeat1,
  [7064] = 7,
    ACTIONS(793), 1,
      sym_comment,
    ACTIONS(1018), 1,
      anon_sym_BSLASH,
    ACTIONS(1020), 1,
      aux_sym_json_string_text_token1,
    ACTIONS(1022), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1024), 1,
      anon_sym_DQUOTE,
    STATE(331), 2,
      sym_json_string_text,
      sym_json_string_escaped_char,
    STATE(182), 3,
      sym_json_string_content,
      sym_template,
      aux_sym_json_string_repeat1,
  [7089] = 7,
    ACTIONS(55), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(756), 1,
      anon_sym_BSLASH2,
    ACTIONS(985), 1,
      anon_sym_LF,
    ACTIONS(987), 1,
      sym_comment,
    ACTIONS(1026), 1,
      sym_key_string_text,
    STATE(253), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(179), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
  [7114] = 7,
    ACTIONS(793), 1,
      sym_comment,
    ACTIONS(956), 1,
      anon_sym_BSLASH,
    ACTIONS(958), 1,
      sym_filename_text,
    ACTIONS(960), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1028), 1,
      anon_sym_SEMI,
    STATE(246), 2,
      sym_filename_escaped_char,
      aux_sym_filename_content_repeat1,
    STATE(181), 3,
      sym_filename_content,
      sym_template,
      aux_sym_filename_repeat1,
  [7139] = 4,
    ACTIONS(793), 1,
      sym_comment,
    ACTIONS(1032), 1,
      aux_sym_invalid_quoted_string_escaped_char_token1,
    ACTIONS(1034), 1,
      anon_sym_u,
    ACTIONS(1030), 7,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
      anon_sym_b,
      anon_sym_f,
      anon_sym_n,
      anon_sym_r,
      anon_sym_t,
  [7158] = 7,
    ACTIONS(793), 1,
      sym_comment,
    ACTIONS(1018), 1,
      anon_sym_BSLASH,
    ACTIONS(1020), 1,
      aux_sym_json_string_text_token1,
    ACTIONS(1022), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1036), 1,
      anon_sym_DQUOTE,
    STATE(331), 2,
      sym_json_string_text,
      sym_json_string_escaped_char,
    STATE(182), 3,
      sym_json_string_content,
      sym_template,
      aux_sym_json_string_repeat1,
  [7183] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(498), 1,
      anon_sym_BSLASH2,
    ACTIONS(500), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(985), 1,
      anon_sym_COLON2,
    ACTIONS(1038), 1,
      sym_key_string_text,
    STATE(261), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(175), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
  [7208] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(781), 1,
      aux_sym_digit_token1,
    STATE(180), 2,
      sym_digit,
      aux_sym_integer_repeat1,
    ACTIONS(1040), 6,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DOT,
      anon_sym_e,
      anon_sym_E,
  [7227] = 7,
    ACTIONS(793), 1,
      sym_comment,
    ACTIONS(1018), 1,
      anon_sym_BSLASH,
    ACTIONS(1020), 1,
      aux_sym_json_string_text_token1,
    ACTIONS(1022), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1042), 1,
      anon_sym_DQUOTE,
    STATE(331), 2,
      sym_json_string_text,
      sym_json_string_escaped_char,
    STATE(171), 3,
      sym_json_string_content,
      sym_template,
      aux_sym_json_string_repeat1,
  [7252] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(972), 1,
      anon_sym_COLON2,
    ACTIONS(1044), 1,
      sym_key_string_text,
    ACTIONS(1047), 1,
      anon_sym_BSLASH2,
    ACTIONS(1050), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(261), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(175), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
  [7277] = 6,
    ACTIONS(882), 1,
      anon_sym_BSLASH,
    ACTIONS(884), 1,
      sym_filename_text,
    ACTIONS(886), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1028), 2,
      anon_sym_LF,
      sym_comment,
    STATE(245), 2,
      sym_filename_escaped_char,
      aux_sym_filename_content_repeat1,
    STATE(178), 3,
      sym_filename_content,
      sym_template,
      aux_sym_filename_repeat1,
  [7300] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1053), 9,
      anon_sym_EQ,
      anon_sym_regex,
      anon_sym_RBRACE_RBRACE,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
  [7315] = 6,
    ACTIONS(1057), 1,
      anon_sym_BSLASH,
    ACTIONS(1060), 1,
      sym_filename_text,
    ACTIONS(1063), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1055), 2,
      anon_sym_LF,
      sym_comment,
    STATE(245), 2,
      sym_filename_escaped_char,
      aux_sym_filename_content_repeat1,
    STATE(178), 3,
      sym_filename_content,
      sym_template,
      aux_sym_filename_repeat1,
  [7338] = 7,
    ACTIONS(972), 1,
      anon_sym_LF,
    ACTIONS(974), 1,
      sym_comment,
    ACTIONS(1066), 1,
      sym_key_string_text,
    ACTIONS(1069), 1,
      anon_sym_BSLASH2,
    ACTIONS(1072), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(253), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(179), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
  [7363] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1077), 1,
      aux_sym_digit_token1,
    STATE(180), 2,
      sym_digit,
      aux_sym_integer_repeat1,
    ACTIONS(1075), 6,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DOT,
      anon_sym_e,
      anon_sym_E,
  [7382] = 7,
    ACTIONS(793), 1,
      sym_comment,
    ACTIONS(1055), 1,
      anon_sym_SEMI,
    ACTIONS(1080), 1,
      anon_sym_BSLASH,
    ACTIONS(1083), 1,
      sym_filename_text,
    ACTIONS(1086), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(246), 2,
      sym_filename_escaped_char,
      aux_sym_filename_content_repeat1,
    STATE(181), 3,
      sym_filename_content,
      sym_template,
      aux_sym_filename_repeat1,
  [7407] = 7,
    ACTIONS(793), 1,
      sym_comment,
    ACTIONS(1089), 1,
      anon_sym_DQUOTE,
    ACTIONS(1091), 1,
      anon_sym_BSLASH,
    ACTIONS(1094), 1,
      aux_sym_json_string_text_token1,
    ACTIONS(1097), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(331), 2,
      sym_json_string_text,
      sym_json_string_escaped_char,
    STATE(182), 3,
      sym_json_string_content,
      sym_template,
      aux_sym_json_string_repeat1,
  [7432] = 2,
    ACTIONS(584), 1,
      anon_sym_LF,
    ACTIONS(586), 8,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
      sym_comment,
  [7446] = 2,
    ACTIONS(652), 1,
      anon_sym_LF,
    ACTIONS(654), 8,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
      sym_comment,
  [7460] = 2,
    ACTIONS(648), 1,
      anon_sym_LF,
    ACTIONS(650), 8,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
      sym_comment,
  [7474] = 2,
    ACTIONS(680), 1,
      anon_sym_LF,
    ACTIONS(682), 8,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
      sym_comment,
  [7488] = 2,
    ACTIONS(684), 1,
      anon_sym_LF,
    ACTIONS(686), 8,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
      sym_comment,
  [7502] = 2,
    ACTIONS(676), 1,
      anon_sym_LF,
    ACTIONS(678), 8,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
      sym_comment,
  [7516] = 2,
    ACTIONS(636), 1,
      anon_sym_LF,
    ACTIONS(638), 8,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
      sym_comment,
  [7530] = 2,
    ACTIONS(672), 1,
      anon_sym_LF,
    ACTIONS(674), 8,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
      sym_comment,
  [7544] = 2,
    ACTIONS(668), 1,
      anon_sym_LF,
    ACTIONS(670), 8,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
      sym_comment,
  [7558] = 2,
    ACTIONS(660), 1,
      anon_sym_LF,
    ACTIONS(662), 8,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
      sym_comment,
  [7572] = 5,
    ACTIONS(793), 1,
      sym_comment,
    ACTIONS(1102), 1,
      aux_sym_quoted_string_text_token1,
    ACTIONS(1105), 1,
      anon_sym_BSLASH,
    ACTIONS(1100), 2,
      anon_sym_DQUOTE,
      anon_sym_LBRACE_LBRACE,
    STATE(193), 4,
      sym_quoted_string_text,
      sym_invalid_quoted_string_escaped_char,
      sym_quoted_string_escaped_char,
      aux_sym_quoted_string_content_repeat1,
  [7592] = 7,
    ACTIONS(793), 1,
      sym_comment,
    ACTIONS(1108), 1,
      anon_sym_LF,
    ACTIONS(1111), 1,
      anon_sym_BSLASH,
    ACTIONS(1114), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(1116), 1,
      aux_sym__multiline_string_text_token1,
    ACTIONS(1119), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(194), 3,
      sym__multiline_string_text,
      sym_multiline_string_escaped_char,
      aux_sym_multiline_string_content_repeat1,
  [7616] = 2,
    ACTIONS(596), 1,
      anon_sym_LF,
    ACTIONS(598), 8,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
      sym_comment,
  [7630] = 2,
    ACTIONS(592), 1,
      anon_sym_LF,
    ACTIONS(594), 8,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
      sym_comment,
  [7644] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1123), 1,
      anon_sym_u,
    ACTIONS(1125), 1,
      anon_sym_POUND,
    ACTIONS(1121), 6,
      anon_sym_BSLASH,
      anon_sym_b,
      anon_sym_f,
      anon_sym_n,
      anon_sym_r,
      anon_sym_t,
  [7662] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(781), 1,
      aux_sym_digit_token1,
    STATE(180), 2,
      sym_digit,
      aux_sym_integer_repeat1,
    ACTIONS(1127), 5,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_e,
      anon_sym_E,
  [7680] = 5,
    ACTIONS(793), 1,
      sym_comment,
    ACTIONS(1133), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(201), 1,
      aux_sym__multiline_string_text_repeat1,
    ACTIONS(1131), 2,
      anon_sym_BQUOTE,
      anon_sym_LBRACE,
    ACTIONS(1129), 4,
      anon_sym_LF,
      anon_sym_BSLASH,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      aux_sym__multiline_string_text_token1,
  [7700] = 6,
    ACTIONS(1010), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1135), 1,
      anon_sym_BSLASH,
    ACTIONS(1138), 1,
      aux_sym_value_string_text_token1,
    STATE(280), 1,
      aux_sym_value_string_text_repeat1,
    ACTIONS(1002), 2,
      anon_sym_LF,
      sym_comment,
    STATE(200), 3,
      sym_value_string_text,
      sym_value_string_escaped_char,
      aux_sym_value_string_content_repeat1,
  [7722] = 5,
    ACTIONS(793), 1,
      sym_comment,
    ACTIONS(1146), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(201), 1,
      aux_sym__multiline_string_text_repeat1,
    ACTIONS(1143), 2,
      anon_sym_BQUOTE,
      anon_sym_LBRACE,
    ACTIONS(1141), 4,
      anon_sym_LF,
      anon_sym_BSLASH,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      aux_sym__multiline_string_text_token1,
  [7742] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1150), 1,
      anon_sym_u,
    ACTIONS(1148), 7,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
      anon_sym_b,
      anon_sym_f,
      anon_sym_n,
      anon_sym_r,
      anon_sym_t,
  [7758] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1154), 1,
      anon_sym_u,
    ACTIONS(1156), 1,
      anon_sym_POUND,
    ACTIONS(1152), 6,
      anon_sym_BSLASH,
      anon_sym_b,
      anon_sym_f,
      anon_sym_n,
      anon_sym_r,
      anon_sym_t,
  [7776] = 2,
    ACTIONS(588), 1,
      anon_sym_LF,
    ACTIONS(590), 8,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
      sym_comment,
  [7790] = 2,
    ACTIONS(644), 1,
      anon_sym_LF,
    ACTIONS(646), 8,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
      sym_comment,
  [7804] = 5,
    ACTIONS(793), 1,
      sym_comment,
    ACTIONS(890), 1,
      aux_sym_quoted_string_text_token1,
    ACTIONS(892), 1,
      anon_sym_BSLASH,
    ACTIONS(1158), 2,
      anon_sym_DQUOTE,
      anon_sym_LBRACE_LBRACE,
    STATE(193), 4,
      sym_quoted_string_text,
      sym_invalid_quoted_string_escaped_char,
      sym_quoted_string_escaped_char,
      aux_sym_quoted_string_content_repeat1,
  [7824] = 2,
    ACTIONS(656), 1,
      anon_sym_LF,
    ACTIONS(658), 8,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
      sym_comment,
  [7838] = 2,
    ACTIONS(632), 1,
      anon_sym_LF,
    ACTIONS(634), 8,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
      sym_comment,
  [7852] = 2,
    ACTIONS(640), 1,
      anon_sym_LF,
    ACTIONS(642), 8,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
      sym_comment,
  [7866] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1162), 1,
      anon_sym_DOT,
    STATE(248), 1,
      sym_fraction,
    STATE(443), 1,
      sym_exponent,
    ACTIONS(1164), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(1160), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [7888] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1168), 1,
      anon_sym_u,
    ACTIONS(1166), 7,
      anon_sym_BSLASH,
      anon_sym_b,
      anon_sym_f,
      anon_sym_n,
      anon_sym_r,
      anon_sym_t,
      anon_sym_BQUOTE,
  [7904] = 6,
    ACTIONS(748), 1,
      anon_sym_BSLASH,
    ACTIONS(750), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(1014), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(280), 1,
      aux_sym_value_string_text_repeat1,
    ACTIONS(1012), 2,
      anon_sym_LF,
      sym_comment,
    STATE(200), 3,
      sym_value_string_text,
      sym_value_string_escaped_char,
      aux_sym_value_string_content_repeat1,
  [7926] = 5,
    ACTIONS(793), 1,
      sym_comment,
    ACTIONS(1174), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(199), 1,
      aux_sym__multiline_string_text_repeat1,
    ACTIONS(1172), 2,
      anon_sym_BQUOTE,
      anon_sym_LBRACE,
    ACTIONS(1170), 4,
      anon_sym_LF,
      anon_sym_BSLASH,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      aux_sym__multiline_string_text_token1,
  [7946] = 7,
    ACTIONS(793), 1,
      sym_comment,
    ACTIONS(898), 1,
      anon_sym_BSLASH,
    ACTIONS(902), 1,
      aux_sym__multiline_string_text_token1,
    ACTIONS(1176), 1,
      anon_sym_LF,
    ACTIONS(1178), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(1180), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(194), 3,
      sym__multiline_string_text,
      sym_multiline_string_escaped_char,
      aux_sym_multiline_string_content_repeat1,
  [7970] = 2,
    ACTIONS(612), 1,
      anon_sym_LF,
    ACTIONS(614), 8,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
      sym_comment,
  [7984] = 2,
    ACTIONS(600), 1,
      anon_sym_LF,
    ACTIONS(602), 8,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
      sym_comment,
  [7998] = 2,
    ACTIONS(604), 1,
      anon_sym_LF,
    ACTIONS(606), 8,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
      sym_comment,
  [8012] = 2,
    ACTIONS(608), 1,
      anon_sym_LF,
    ACTIONS(610), 8,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
      sym_comment,
  [8026] = 2,
    ACTIONS(628), 1,
      anon_sym_LF,
    ACTIONS(630), 8,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
      sym_comment,
  [8040] = 2,
    ACTIONS(624), 1,
      anon_sym_LF,
    ACTIONS(626), 8,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
      sym_comment,
  [8054] = 2,
    ACTIONS(620), 1,
      anon_sym_LF,
    ACTIONS(622), 8,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
      sym_comment,
  [8068] = 2,
    ACTIONS(616), 1,
      anon_sym_LF,
    ACTIONS(618), 8,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
      sym_comment,
  [8082] = 2,
    ACTIONS(664), 1,
      anon_sym_LF,
    ACTIONS(666), 8,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
      sym_comment,
  [8096] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1182), 7,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      aux_sym_digit_token1,
      anon_sym_DOT,
      anon_sym_e,
      anon_sym_E,
  [8109] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(728), 1,
      anon_sym_DQUOTE,
    ACTIONS(736), 1,
      aux_sym_digit_token1,
    STATE(416), 1,
      sym_integer,
    STATE(229), 2,
      sym_digit,
      aux_sym_integer_repeat1,
    STATE(495), 2,
      sym_quoted_string,
      sym_float,
  [8130] = 6,
    ACTIONS(793), 1,
      sym_comment,
    ACTIONS(1184), 1,
      anon_sym_BSLASH,
    ACTIONS(1187), 1,
      anon_sym_BQUOTE,
    ACTIONS(1189), 1,
      aux_sym_oneline_string_text_token1,
    ACTIONS(1192), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(226), 3,
      sym_oneline_string_text,
      sym_oneline_string_escaped_char,
      aux_sym_oneline_string_content_repeat1,
  [8151] = 6,
    ACTIONS(793), 1,
      sym_comment,
    ACTIONS(1194), 1,
      anon_sym_BSLASH,
    ACTIONS(1196), 1,
      anon_sym_SLASH,
    ACTIONS(1198), 1,
      aux_sym_regex_text_token1,
    STATE(561), 1,
      sym_regex_content,
    STATE(249), 3,
      sym_regex_text,
      sym_regex_escaped_char,
      aux_sym_regex_content_repeat1,
  [8172] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(769), 1,
      anon_sym_DQUOTE,
    ACTIONS(1200), 1,
      anon_sym_RBRACE,
    ACTIONS(1202), 1,
      anon_sym_COMMA,
    STATE(382), 1,
      aux_sym_json_object_repeat1,
    STATE(384), 1,
      sym_json_key_value,
    STATE(504), 1,
      sym_json_key_string,
    STATE(520), 1,
      sym_json_string,
  [8197] = 4,
    ACTIONS(61), 1,
      aux_sym_digit_token1,
    ACTIONS(1040), 1,
      anon_sym_LF,
    STATE(234), 2,
      sym_digit,
      aux_sym_integer_repeat1,
    ACTIONS(1204), 4,
      anon_sym_DOT,
      anon_sym_e,
      anon_sym_E,
      sym_comment,
  [8214] = 6,
    ACTIONS(793), 1,
      sym_comment,
    ACTIONS(1194), 1,
      anon_sym_BSLASH,
    ACTIONS(1198), 1,
      aux_sym_regex_text_token1,
    ACTIONS(1206), 1,
      anon_sym_SLASH,
    STATE(602), 1,
      sym_regex_content,
    STATE(249), 3,
      sym_regex_text,
      sym_regex_escaped_char,
      aux_sym_regex_content_repeat1,
  [8235] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1210), 1,
      anon_sym_COLON2,
    STATE(235), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    ACTIONS(1208), 4,
      anon_sym_COLON,
      sym_key_string_text,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
  [8252] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(728), 1,
      anon_sym_DQUOTE,
    ACTIONS(736), 1,
      aux_sym_digit_token1,
    STATE(410), 1,
      sym_integer,
    STATE(229), 2,
      sym_digit,
      aux_sym_integer_repeat1,
    STATE(500), 2,
      sym_quoted_string,
      sym_float,
  [8273] = 5,
    ACTIONS(793), 1,
      sym_comment,
    ACTIONS(1214), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(1217), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(233), 1,
      aux_sym_value_string_text_repeat1,
    ACTIONS(1212), 4,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      anon_sym_BSLASH,
  [8292] = 4,
    ACTIONS(1075), 1,
      anon_sym_LF,
    ACTIONS(1219), 1,
      aux_sym_digit_token1,
    STATE(234), 2,
      sym_digit,
      aux_sym_integer_repeat1,
    ACTIONS(1222), 4,
      anon_sym_DOT,
      anon_sym_e,
      anon_sym_E,
      sym_comment,
  [8309] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1226), 1,
      anon_sym_COLON2,
    ACTIONS(1228), 1,
      sym_key_string_text,
    ACTIONS(1231), 1,
      anon_sym_BSLASH2,
    ACTIONS(1224), 2,
      anon_sym_COLON,
      anon_sym_LBRACE_LBRACE,
    STATE(235), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
  [8330] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(728), 1,
      anon_sym_DQUOTE,
    ACTIONS(736), 1,
      aux_sym_digit_token1,
    STATE(412), 1,
      sym_integer,
    STATE(229), 2,
      sym_digit,
      aux_sym_integer_repeat1,
    STATE(498), 2,
      sym_quoted_string,
      sym_float,
  [8351] = 4,
    ACTIONS(793), 1,
      sym_comment,
    ACTIONS(1236), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1234), 3,
      anon_sym_BSLASH,
      anon_sym_BQUOTE,
      aux_sym_oneline_string_text_token1,
    STATE(226), 3,
      sym_oneline_string_text,
      sym_oneline_string_escaped_char,
      aux_sym_oneline_string_content_repeat1,
  [8368] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(728), 1,
      anon_sym_DQUOTE,
    ACTIONS(736), 1,
      aux_sym_digit_token1,
    STATE(414), 1,
      sym_integer,
    STATE(229), 2,
      sym_digit,
      aux_sym_integer_repeat1,
    STATE(496), 2,
      sym_quoted_string,
      sym_float,
  [8389] = 4,
    ACTIONS(793), 1,
      sym_comment,
    ACTIONS(1238), 1,
      anon_sym_LF,
    STATE(566), 1,
      sym_multiline_string_type,
    ACTIONS(1240), 5,
      anon_sym_base64,
      anon_sym_hex,
      anon_sym_json,
      anon_sym_xml,
      anon_sym_graphql,
  [8406] = 5,
    ACTIONS(793), 1,
      sym_comment,
    ACTIONS(1244), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(1246), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(233), 1,
      aux_sym_value_string_text_repeat1,
    ACTIONS(1242), 4,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      anon_sym_BSLASH,
  [8425] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(769), 1,
      anon_sym_DQUOTE,
    ACTIONS(1202), 1,
      anon_sym_COMMA,
    ACTIONS(1248), 1,
      anon_sym_RBRACE,
    STATE(395), 1,
      aux_sym_json_object_repeat1,
    STATE(406), 1,
      sym_json_key_value,
    STATE(504), 1,
      sym_json_key_string,
    STATE(520), 1,
      sym_json_string,
  [8450] = 3,
    ACTIONS(793), 1,
      sym_comment,
    ACTIONS(1252), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1250), 5,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      anon_sym_BSLASH,
      aux_sym_value_string_text_token1,
  [8464] = 3,
    ACTIONS(793), 1,
      sym_comment,
    ACTIONS(1256), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1254), 5,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      anon_sym_BSLASH,
      aux_sym_value_string_text_token1,
  [8478] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(781), 1,
      aux_sym_digit_token1,
    STATE(180), 2,
      sym_digit,
      aux_sym_integer_repeat1,
    ACTIONS(1258), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [8494] = 2,
    STATE(257), 2,
      sym_filename_escaped_char,
      aux_sym_filename_content_repeat1,
    ACTIONS(1260), 5,
      anon_sym_LF,
      anon_sym_BSLASH,
      sym_filename_text,
      anon_sym_LBRACE_LBRACE,
      sym_comment,
  [8506] = 3,
    ACTIONS(793), 1,
      sym_comment,
    STATE(259), 2,
      sym_filename_escaped_char,
      aux_sym_filename_content_repeat1,
    ACTIONS(1260), 4,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      sym_filename_text,
      anon_sym_LBRACE_LBRACE,
  [8520] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1264), 1,
      anon_sym_u,
    ACTIONS(1266), 1,
      anon_sym_POUND,
    ACTIONS(1262), 4,
      anon_sym_BSLASH,
      anon_sym_b,
      anon_sym_f,
      anon_sym_BQUOTE,
  [8536] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(408), 1,
      sym_exponent,
    ACTIONS(1164), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(1268), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [8552] = 5,
    ACTIONS(793), 1,
      sym_comment,
    ACTIONS(1194), 1,
      anon_sym_BSLASH,
    ACTIONS(1198), 1,
      aux_sym_regex_text_token1,
    ACTIONS(1270), 1,
      anon_sym_SLASH,
    STATE(264), 3,
      sym_regex_text,
      sym_regex_escaped_char,
      aux_sym_regex_content_repeat1,
  [8570] = 3,
    ACTIONS(793), 1,
      sym_comment,
    ACTIONS(1274), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1272), 5,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      anon_sym_BSLASH,
      aux_sym_value_string_text_token1,
  [8584] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1276), 1,
      sym_key_string_text,
    ACTIONS(1279), 1,
      anon_sym_BSLASH2,
    ACTIONS(1224), 2,
      anon_sym_COLON2,
      anon_sym_LBRACE_LBRACE,
    STATE(251), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
  [8602] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(781), 1,
      aux_sym_digit_token1,
    STATE(180), 2,
      sym_digit,
      aux_sym_integer_repeat1,
    ACTIONS(1282), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [8618] = 3,
    ACTIONS(1210), 1,
      sym_comment,
    STATE(254), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    ACTIONS(1208), 4,
      anon_sym_LF,
      sym_key_string_text,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
  [8632] = 5,
    ACTIONS(1226), 1,
      sym_comment,
    ACTIONS(1284), 1,
      sym_key_string_text,
    ACTIONS(1287), 1,
      anon_sym_BSLASH2,
    ACTIONS(1224), 2,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    STATE(254), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
  [8650] = 3,
    ACTIONS(793), 1,
      sym_comment,
    ACTIONS(1292), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1290), 5,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      anon_sym_BSLASH,
      aux_sym_value_string_text_token1,
  [8664] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(724), 1,
      anon_sym_base64_COMMA,
    ACTIONS(726), 1,
      anon_sym_hex_COMMA,
    ACTIONS(728), 1,
      anon_sym_DQUOTE,
    STATE(533), 3,
      sym_oneline_base64,
      sym_oneline_hex,
      sym_quoted_string,
  [8682] = 4,
    ACTIONS(1296), 1,
      anon_sym_BSLASH,
    ACTIONS(1299), 1,
      sym_filename_text,
    STATE(257), 2,
      sym_filename_escaped_char,
      aux_sym_filename_content_repeat1,
    ACTIONS(1294), 3,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
      sym_comment,
  [8698] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(724), 1,
      anon_sym_base64_COMMA,
    ACTIONS(726), 1,
      anon_sym_hex_COMMA,
    ACTIONS(728), 1,
      anon_sym_DQUOTE,
    STATE(552), 3,
      sym_oneline_base64,
      sym_oneline_hex,
      sym_quoted_string,
  [8716] = 5,
    ACTIONS(793), 1,
      sym_comment,
    ACTIONS(1302), 1,
      anon_sym_BSLASH,
    ACTIONS(1305), 1,
      sym_filename_text,
    ACTIONS(1294), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE_LBRACE,
    STATE(259), 2,
      sym_filename_escaped_char,
      aux_sym_filename_content_repeat1,
  [8734] = 3,
    ACTIONS(793), 1,
      sym_comment,
    ACTIONS(1310), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1308), 5,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      anon_sym_BSLASH,
      aux_sym_value_string_text_token1,
  [8748] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(251), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    ACTIONS(1208), 4,
      anon_sym_COLON2,
      sym_key_string_text,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
  [8762] = 4,
    ACTIONS(61), 1,
      aux_sym_digit_token1,
    ACTIONS(1127), 1,
      anon_sym_LF,
    STATE(234), 2,
      sym_digit,
      aux_sym_integer_repeat1,
    ACTIONS(1312), 3,
      anon_sym_e,
      anon_sym_E,
      sym_comment,
  [8778] = 3,
    ACTIONS(793), 1,
      sym_comment,
    ACTIONS(1316), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1314), 5,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      anon_sym_BSLASH,
      aux_sym_value_string_text_token1,
  [8792] = 5,
    ACTIONS(793), 1,
      sym_comment,
    ACTIONS(1318), 1,
      anon_sym_BSLASH,
    ACTIONS(1321), 1,
      anon_sym_SLASH,
    ACTIONS(1323), 1,
      aux_sym_regex_text_token1,
    STATE(264), 3,
      sym_regex_text,
      sym_regex_escaped_char,
      aux_sym_regex_content_repeat1,
  [8810] = 6,
    ACTIONS(1160), 1,
      anon_sym_LF,
    ACTIONS(1326), 1,
      anon_sym_DOT,
    ACTIONS(1330), 1,
      sym_comment,
    STATE(295), 1,
      sym_fraction,
    STATE(554), 1,
      sym_exponent,
    ACTIONS(1328), 2,
      anon_sym_e,
      anon_sym_E,
  [8830] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_LT,
    ACTIONS(1332), 1,
      anon_sym_LT_QMARK,
    STATE(115), 1,
      sym_xml_open_tag,
    STATE(539), 1,
      sym_xml_tag,
    STATE(300), 2,
      sym_xml_prolog_tag,
      aux_sym_xml_repeat1,
  [8850] = 3,
    ACTIONS(793), 1,
      sym_comment,
    ACTIONS(1336), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1334), 5,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      anon_sym_BSLASH,
      aux_sym_value_string_text_token1,
  [8864] = 3,
    ACTIONS(793), 1,
      sym_comment,
    ACTIONS(1340), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1338), 5,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      anon_sym_BSLASH,
      aux_sym_value_string_text_token1,
  [8878] = 3,
    ACTIONS(793), 1,
      sym_comment,
    ACTIONS(1344), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1342), 5,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      anon_sym_BSLASH,
      aux_sym_value_string_text_token1,
  [8892] = 4,
    ACTIONS(1346), 1,
      anon_sym_LF,
    ACTIONS(1348), 1,
      sym_comment,
    STATE(274), 1,
      aux_sym__comment_or_new_line_repeat1,
    ACTIONS(176), 3,
      sym_key_string_text,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
  [8907] = 3,
    ACTIONS(793), 1,
      sym_comment,
    ACTIONS(1352), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1350), 4,
      anon_sym_LF,
      anon_sym_BSLASH,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      aux_sym__multiline_string_text_token1,
  [8920] = 4,
    ACTIONS(793), 1,
      sym_comment,
    ACTIONS(1356), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(1358), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1354), 3,
      anon_sym_LF,
      anon_sym_BSLASH,
      aux_sym__multiline_string_text_token1,
  [8935] = 3,
    ACTIONS(793), 1,
      sym_comment,
    ACTIONS(1256), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1254), 4,
      anon_sym_LF,
      anon_sym_BSLASH,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      aux_sym__multiline_string_text_token1,
  [8948] = 4,
    ACTIONS(1360), 1,
      anon_sym_LF,
    ACTIONS(1363), 1,
      sym_comment,
    STATE(274), 1,
      aux_sym__comment_or_new_line_repeat1,
    ACTIONS(85), 3,
      sym_key_string_text,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
  [8963] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1250), 1,
      anon_sym_COLON2,
    ACTIONS(1252), 4,
      anon_sym_COLON,
      sym_key_string_text,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
  [8976] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(781), 1,
      aux_sym_digit_token1,
    ACTIONS(1366), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(252), 2,
      sym_digit,
      aux_sym_integer_repeat1,
  [8991] = 4,
    ACTIONS(1217), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1368), 1,
      aux_sym_value_string_text_token1,
    STATE(277), 1,
      aux_sym_value_string_text_repeat1,
    ACTIONS(1212), 3,
      anon_sym_LF,
      anon_sym_BSLASH,
      sym_comment,
  [9006] = 3,
    ACTIONS(793), 1,
      sym_comment,
    ACTIONS(1252), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1250), 4,
      anon_sym_LF,
      anon_sym_BSLASH,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      aux_sym__multiline_string_text_token1,
  [9019] = 3,
    ACTIONS(793), 1,
      sym_comment,
    ACTIONS(1373), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1371), 4,
      anon_sym_LF,
      anon_sym_BSLASH,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      aux_sym__multiline_string_text_token1,
  [9032] = 4,
    ACTIONS(1246), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1375), 1,
      aux_sym_value_string_text_token1,
    STATE(277), 1,
      aux_sym_value_string_text_repeat1,
    ACTIONS(1242), 3,
      anon_sym_LF,
      anon_sym_BSLASH,
      sym_comment,
  [9047] = 3,
    ACTIONS(1377), 1,
      anon_sym_LF,
    ACTIONS(1381), 1,
      sym_comment,
    ACTIONS(1379), 4,
      anon_sym_COLON,
      sym_key_string_text,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
  [9060] = 4,
    ACTIONS(793), 1,
      sym_comment,
    ACTIONS(929), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(1358), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1354), 3,
      anon_sym_LF,
      anon_sym_BSLASH,
      aux_sym__multiline_string_text_token1,
  [9075] = 2,
    ACTIONS(1182), 1,
      anon_sym_LF,
    ACTIONS(1383), 5,
      aux_sym_digit_token1,
      anon_sym_DOT,
      anon_sym_e,
      anon_sym_E,
      sym_comment,
  [9086] = 4,
    ACTIONS(793), 1,
      sym_comment,
    ACTIONS(900), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(1358), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1354), 3,
      anon_sym_LF,
      anon_sym_BSLASH,
      aux_sym__multiline_string_text_token1,
  [9101] = 2,
    ACTIONS(1250), 1,
      sym_comment,
    ACTIONS(1252), 5,
      anon_sym_LF,
      anon_sym_COLON,
      sym_key_string_text,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
  [9112] = 5,
    ACTIONS(460), 1,
      ts_builtin_sym_end,
    ACTIONS(1385), 1,
      anon_sym_LF,
    ACTIONS(1388), 1,
      sym_comment,
    STATE(15), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(286), 2,
      sym__comment_or_new_line,
      aux_sym_hurl_file_repeat2,
  [9129] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1393), 1,
      anon_sym_COLON2,
    ACTIONS(1391), 4,
      anon_sym_COLON,
      sym_key_string_text,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
  [9142] = 5,
    ACTIONS(7), 1,
      anon_sym_LF,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(720), 1,
      ts_builtin_sym_end,
    STATE(15), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(286), 2,
      sym__comment_or_new_line,
      aux_sym_hurl_file_repeat2,
  [9159] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(736), 1,
      aux_sym_digit_token1,
    ACTIONS(1395), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(336), 2,
      sym_digit,
      aux_sym_integer_repeat1,
  [9174] = 5,
    ACTIONS(7), 1,
      anon_sym_LF,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1397), 1,
      ts_builtin_sym_end,
    STATE(15), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(286), 2,
      sym__comment_or_new_line,
      aux_sym_hurl_file_repeat2,
  [9191] = 5,
    ACTIONS(15), 1,
      anon_sym_LF,
    ACTIONS(63), 1,
      sym_comment,
    STATE(44), 1,
      sym__comment_or_new_line,
    STATE(56), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(341), 1,
      aux_sym_query_string_params_section_repeat1,
  [9207] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(736), 1,
      aux_sym_digit_token1,
    STATE(432), 1,
      sym_integer,
    STATE(229), 2,
      sym_digit,
      aux_sym_integer_repeat1,
  [9221] = 4,
    ACTIONS(61), 1,
      aux_sym_digit_token1,
    ACTIONS(1258), 1,
      anon_sym_LF,
    ACTIONS(1399), 1,
      sym_comment,
    STATE(234), 2,
      sym_digit,
      aux_sym_integer_repeat1,
  [9235] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(728), 1,
      anon_sym_DQUOTE,
    ACTIONS(1401), 1,
      anon_sym_SLASH,
    STATE(205), 2,
      sym_quoted_string,
      sym_regex,
  [9249] = 4,
    ACTIONS(1268), 1,
      anon_sym_LF,
    ACTIONS(1403), 1,
      sym_comment,
    STATE(590), 1,
      sym_exponent,
    ACTIONS(1328), 2,
      anon_sym_e,
      anon_sym_E,
  [9263] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(728), 1,
      anon_sym_DQUOTE,
    ACTIONS(1401), 1,
      anon_sym_SLASH,
    STATE(204), 2,
      sym_quoted_string,
      sym_regex,
  [9277] = 1,
    ACTIONS(1250), 5,
      anon_sym_LF,
      anon_sym_BSLASH,
      sym_filename_text,
      anon_sym_LBRACE_LBRACE,
      sym_comment,
  [9285] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1252), 4,
      anon_sym_COLON2,
      sym_key_string_text,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
  [9295] = 2,
    ACTIONS(793), 1,
      sym_comment,
    ACTIONS(1250), 4,
      anon_sym_DQUOTE,
      aux_sym_quoted_string_text_token1,
      anon_sym_BSLASH,
      anon_sym_LBRACE_LBRACE,
  [9305] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1405), 1,
      anon_sym_LT,
    ACTIONS(1407), 1,
      anon_sym_LT_QMARK,
    STATE(300), 2,
      sym_xml_prolog_tag,
      aux_sym_xml_repeat1,
  [9319] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(769), 1,
      anon_sym_DQUOTE,
    STATE(474), 1,
      sym_json_key_value,
    STATE(504), 1,
      sym_json_key_string,
    STATE(520), 1,
      sym_json_string,
  [9335] = 2,
    ACTIONS(793), 1,
      sym_comment,
    ACTIONS(1254), 4,
      anon_sym_DQUOTE,
      aux_sym_quoted_string_text_token1,
      anon_sym_BSLASH,
      anon_sym_LBRACE_LBRACE,
  [9345] = 3,
    ACTIONS(793), 1,
      sym_comment,
    ACTIONS(1252), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1250), 3,
      anon_sym_BSLASH,
      anon_sym_BQUOTE,
      aux_sym_oneline_string_text_token1,
  [9357] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1410), 1,
      anon_sym_DQUOTE,
    ACTIONS(1412), 1,
      anon_sym_SLASH,
    STATE(88), 2,
      sym_quoted_string,
      sym_regex,
  [9371] = 5,
    ACTIONS(15), 1,
      anon_sym_LF,
    ACTIONS(63), 1,
      sym_comment,
    STATE(43), 1,
      sym__comment_or_new_line,
    STATE(56), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(351), 1,
      aux_sym_query_string_params_section_repeat1,
  [9387] = 3,
    ACTIONS(793), 1,
      sym_comment,
    ACTIONS(1252), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1250), 3,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
      aux_sym_json_string_text_token1,
  [9399] = 5,
    ACTIONS(15), 1,
      anon_sym_LF,
    ACTIONS(63), 1,
      sym_comment,
    STATE(43), 1,
      sym__comment_or_new_line,
    STATE(56), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(341), 1,
      aux_sym_query_string_params_section_repeat1,
  [9415] = 5,
    ACTIONS(15), 1,
      anon_sym_LF,
    ACTIONS(63), 1,
      sym_comment,
    STATE(46), 1,
      sym__comment_or_new_line,
    STATE(56), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(345), 1,
      aux_sym_query_string_params_section_repeat1,
  [9431] = 5,
    ACTIONS(15), 1,
      anon_sym_LF,
    ACTIONS(63), 1,
      sym_comment,
    STATE(46), 1,
      sym__comment_or_new_line,
    STATE(56), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(341), 1,
      aux_sym_query_string_params_section_repeat1,
  [9447] = 2,
    ACTIONS(1393), 1,
      sym_comment,
    ACTIONS(1391), 4,
      anon_sym_LF,
      sym_key_string_text,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
  [9457] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1410), 1,
      anon_sym_DQUOTE,
    ACTIONS(1412), 1,
      anon_sym_SLASH,
    STATE(74), 2,
      sym_quoted_string,
      sym_regex,
  [9471] = 2,
    ACTIONS(1252), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1250), 4,
      anon_sym_LF,
      anon_sym_BSLASH,
      aux_sym_value_string_text_token1,
      sym_comment,
  [9481] = 2,
    ACTIONS(793), 1,
      sym_comment,
    ACTIONS(1250), 4,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      sym_filename_text,
      anon_sym_LBRACE_LBRACE,
  [9491] = 2,
    ACTIONS(793), 1,
      sym_comment,
    ACTIONS(1414), 4,
      anon_sym_DQUOTE,
      aux_sym_quoted_string_text_token1,
      anon_sym_BSLASH,
      anon_sym_LBRACE_LBRACE,
  [9501] = 2,
    ACTIONS(793), 1,
      sym_comment,
    ACTIONS(1416), 4,
      anon_sym_DQUOTE,
      aux_sym_quoted_string_text_token1,
      anon_sym_BSLASH,
      anon_sym_LBRACE_LBRACE,
  [9511] = 5,
    ACTIONS(15), 1,
      anon_sym_LF,
    ACTIONS(63), 1,
      sym_comment,
    STATE(38), 1,
      sym__comment_or_new_line,
    STATE(56), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(344), 1,
      aux_sym_multipart_form_data_section_repeat1,
  [9527] = 3,
    ACTIONS(793), 1,
      sym_comment,
    ACTIONS(1256), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1254), 3,
      anon_sym_BSLASH,
      anon_sym_BQUOTE,
      aux_sym_oneline_string_text_token1,
  [9539] = 5,
    ACTIONS(15), 1,
      anon_sym_LF,
    ACTIONS(63), 1,
      sym_comment,
    STATE(38), 1,
      sym__comment_or_new_line,
    STATE(56), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(342), 1,
      aux_sym_multipart_form_data_section_repeat1,
  [9555] = 5,
    ACTIONS(15), 1,
      anon_sym_LF,
    ACTIONS(63), 1,
      sym_comment,
    STATE(45), 1,
      sym__comment_or_new_line,
    STATE(56), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(291), 1,
      aux_sym_query_string_params_section_repeat1,
  [9571] = 5,
    ACTIONS(15), 1,
      anon_sym_LF,
    ACTIONS(63), 1,
      sym_comment,
    STATE(45), 1,
      sym__comment_or_new_line,
    STATE(56), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(341), 1,
      aux_sym_query_string_params_section_repeat1,
  [9587] = 2,
    ACTIONS(1344), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1342), 4,
      anon_sym_LF,
      anon_sym_BSLASH,
      aux_sym_value_string_text_token1,
      sym_comment,
  [9597] = 2,
    ACTIONS(793), 1,
      sym_comment,
    ACTIONS(1418), 4,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      sym_filename_text,
      anon_sym_LBRACE_LBRACE,
  [9607] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1420), 4,
      anon_sym_COLON2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [9617] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1422), 1,
      anon_sym_SEMI,
    ACTIONS(1424), 1,
      aux_sym_hexdigit_token1,
    STATE(324), 2,
      sym_hexdigit,
      aux_sym_oneline_hex_repeat1,
  [9631] = 3,
    ACTIONS(793), 1,
      sym_comment,
    ACTIONS(1429), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1427), 3,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
      aux_sym_json_string_text_token1,
  [9643] = 3,
    ACTIONS(793), 1,
      sym_comment,
    ACTIONS(1433), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1431), 3,
      anon_sym_BSLASH,
      anon_sym_BQUOTE,
      aux_sym_oneline_string_text_token1,
  [9655] = 1,
    ACTIONS(1418), 5,
      anon_sym_LF,
      anon_sym_BSLASH,
      sym_filename_text,
      anon_sym_LBRACE_LBRACE,
      sym_comment,
  [9663] = 3,
    ACTIONS(793), 1,
      sym_comment,
    ACTIONS(1437), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1435), 3,
      anon_sym_BSLASH,
      anon_sym_BQUOTE,
      aux_sym_oneline_string_text_token1,
  [9675] = 4,
    ACTIONS(15), 1,
      anon_sym_LF,
    ACTIONS(63), 1,
      sym_comment,
    STATE(56), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(2), 2,
      sym__comment_or_new_line,
      aux_sym_hurl_file_repeat2,
  [9689] = 3,
    ACTIONS(793), 1,
      sym_comment,
    ACTIONS(1441), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1439), 3,
      anon_sym_BSLASH,
      anon_sym_BQUOTE,
      aux_sym_oneline_string_text_token1,
  [9701] = 3,
    ACTIONS(793), 1,
      sym_comment,
    ACTIONS(1445), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1443), 3,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
      aux_sym_json_string_text_token1,
  [9713] = 2,
    ACTIONS(1449), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1447), 4,
      anon_sym_LF,
      anon_sym_BSLASH,
      aux_sym_value_string_text_token1,
      sym_comment,
  [9723] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1391), 4,
      anon_sym_COLON2,
      sym_key_string_text,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
  [9733] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1451), 4,
      anon_sym_COLON2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [9743] = 3,
    ACTIONS(793), 1,
      sym_comment,
    ACTIONS(1455), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1453), 3,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
      aux_sym_json_string_text_token1,
  [9755] = 4,
    ACTIONS(61), 1,
      aux_sym_digit_token1,
    ACTIONS(1282), 1,
      anon_sym_LF,
    ACTIONS(1457), 1,
      sym_comment,
    STATE(234), 2,
      sym_digit,
      aux_sym_integer_repeat1,
  [9769] = 2,
    ACTIONS(793), 1,
      sym_comment,
    ACTIONS(1459), 4,
      anon_sym_DQUOTE,
      aux_sym_quoted_string_text_token1,
      anon_sym_BSLASH,
      anon_sym_LBRACE_LBRACE,
  [9779] = 2,
    ACTIONS(1310), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1308), 4,
      anon_sym_LF,
      anon_sym_BSLASH,
      aux_sym_value_string_text_token1,
      sym_comment,
  [9789] = 3,
    ACTIONS(793), 1,
      sym_comment,
    ACTIONS(1463), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1461), 3,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
      aux_sym_json_string_text_token1,
  [9801] = 2,
    ACTIONS(1256), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1254), 4,
      anon_sym_LF,
      anon_sym_BSLASH,
      aux_sym_value_string_text_token1,
      sym_comment,
  [9811] = 5,
    ACTIONS(1465), 1,
      anon_sym_LF,
    ACTIONS(1468), 1,
      sym_comment,
    STATE(157), 1,
      sym__comment_or_new_line,
    STATE(270), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(341), 1,
      aux_sym_query_string_params_section_repeat1,
  [9827] = 5,
    ACTIONS(1471), 1,
      anon_sym_LF,
    ACTIONS(1474), 1,
      sym_comment,
    STATE(141), 1,
      sym__comment_or_new_line,
    STATE(270), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(342), 1,
      aux_sym_multipart_form_data_section_repeat1,
  [9843] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1477), 1,
      anon_sym_SEMI,
    ACTIONS(1479), 1,
      aux_sym_hexdigit_token1,
    STATE(352), 2,
      sym_hexdigit,
      aux_sym_oneline_hex_repeat1,
  [9857] = 5,
    ACTIONS(15), 1,
      anon_sym_LF,
    ACTIONS(63), 1,
      sym_comment,
    STATE(39), 1,
      sym__comment_or_new_line,
    STATE(56), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(342), 1,
      aux_sym_multipart_form_data_section_repeat1,
  [9873] = 5,
    ACTIONS(15), 1,
      anon_sym_LF,
    ACTIONS(63), 1,
      sym_comment,
    STATE(42), 1,
      sym__comment_or_new_line,
    STATE(56), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(341), 1,
      aux_sym_query_string_params_section_repeat1,
  [9889] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(728), 1,
      anon_sym_DQUOTE,
    ACTIONS(1401), 1,
      anon_sym_SLASH,
    STATE(531), 2,
      sym_quoted_string,
      sym_regex,
  [9903] = 3,
    ACTIONS(793), 1,
      sym_comment,
    ACTIONS(1483), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1481), 3,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
      aux_sym_json_string_text_token1,
  [9915] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(736), 1,
      aux_sym_digit_token1,
    STATE(386), 1,
      sym_integer,
    STATE(229), 2,
      sym_digit,
      aux_sym_integer_repeat1,
  [9929] = 2,
    ACTIONS(793), 1,
      sym_comment,
    ACTIONS(1485), 4,
      anon_sym_DQUOTE,
      aux_sym_quoted_string_text_token1,
      anon_sym_BSLASH,
      anon_sym_LBRACE_LBRACE,
  [9939] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(736), 1,
      aux_sym_digit_token1,
    STATE(431), 1,
      sym_integer,
    STATE(229), 2,
      sym_digit,
      aux_sym_integer_repeat1,
  [9953] = 5,
    ACTIONS(15), 1,
      anon_sym_LF,
    ACTIONS(63), 1,
      sym_comment,
    STATE(47), 1,
      sym__comment_or_new_line,
    STATE(56), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(341), 1,
      aux_sym_query_string_params_section_repeat1,
  [9969] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1479), 1,
      aux_sym_hexdigit_token1,
    ACTIONS(1487), 1,
      anon_sym_SEMI,
    STATE(324), 2,
      sym_hexdigit,
      aux_sym_oneline_hex_repeat1,
  [9983] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(736), 1,
      aux_sym_digit_token1,
    STATE(293), 2,
      sym_digit,
      aux_sym_integer_repeat1,
  [9994] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1489), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [10003] = 4,
    ACTIONS(7), 1,
      anon_sym_LF,
    ACTIONS(11), 1,
      sym_comment,
    STATE(15), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(32), 1,
      sym__comment_or_new_line,
  [10016] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1491), 1,
      aux_sym_variable_name_token1,
    STATE(130), 1,
      sym_variable_name,
    STATE(582), 1,
      sym_expr,
  [10029] = 4,
    ACTIONS(7), 1,
      anon_sym_LF,
    ACTIONS(11), 1,
      sym_comment,
    STATE(15), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(30), 1,
      sym__comment_or_new_line,
  [10042] = 4,
    ACTIONS(7), 1,
      anon_sym_LF,
    ACTIONS(11), 1,
      sym_comment,
    STATE(15), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(29), 1,
      sym__comment_or_new_line,
  [10055] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1491), 1,
      aux_sym_variable_name_token1,
    STATE(130), 1,
      sym_variable_name,
    STATE(581), 1,
      sym_expr,
  [10068] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1491), 1,
      aux_sym_variable_name_token1,
    STATE(355), 1,
      sym_variable_definition,
    STATE(537), 1,
      sym_variable_name,
  [10081] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1491), 1,
      aux_sym_variable_name_token1,
    STATE(130), 1,
      sym_variable_name,
    STATE(580), 1,
      sym_expr,
  [10094] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(434), 1,
      sym_boolean,
    ACTIONS(732), 2,
      anon_sym_true,
      anon_sym_false,
  [10105] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(429), 1,
      sym_boolean,
    ACTIONS(732), 2,
      anon_sym_true,
      anon_sym_false,
  [10116] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(435), 1,
      sym_boolean,
    ACTIONS(732), 2,
      anon_sym_true,
      anon_sym_false,
  [10127] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1491), 1,
      aux_sym_variable_name_token1,
    STATE(130), 1,
      sym_variable_name,
    STATE(579), 1,
      sym_expr,
  [10140] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1491), 1,
      aux_sym_variable_name_token1,
    STATE(130), 1,
      sym_variable_name,
    STATE(578), 1,
      sym_expr,
  [10153] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1491), 1,
      aux_sym_variable_name_token1,
    STATE(130), 1,
      sym_variable_name,
    STATE(577), 1,
      sym_expr,
  [10166] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1491), 1,
      aux_sym_variable_name_token1,
    STATE(130), 1,
      sym_variable_name,
    STATE(576), 1,
      sym_expr,
  [10179] = 4,
    ACTIONS(7), 1,
      anon_sym_LF,
    ACTIONS(11), 1,
      sym_comment,
    STATE(15), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(103), 1,
      sym__comment_or_new_line,
  [10192] = 4,
    ACTIONS(15), 1,
      anon_sym_LF,
    ACTIONS(63), 1,
      sym_comment,
    STATE(56), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(57), 1,
      sym__comment_or_new_line,
  [10205] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(437), 1,
      sym_boolean,
    ACTIONS(732), 2,
      anon_sym_true,
      anon_sym_false,
  [10216] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(440), 1,
      sym_boolean,
    ACTIONS(732), 2,
      anon_sym_true,
      anon_sym_false,
  [10227] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1491), 1,
      aux_sym_variable_name_token1,
    STATE(130), 1,
      sym_variable_name,
    STATE(574), 1,
      sym_expr,
  [10240] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1491), 1,
      aux_sym_variable_name_token1,
    STATE(130), 1,
      sym_variable_name,
    STATE(572), 1,
      sym_expr,
  [10253] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1491), 1,
      aux_sym_variable_name_token1,
    STATE(130), 1,
      sym_variable_name,
    STATE(569), 1,
      sym_expr,
  [10266] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1491), 1,
      aux_sym_variable_name_token1,
    STATE(130), 1,
      sym_variable_name,
    STATE(541), 1,
      sym_expr,
  [10279] = 4,
    ACTIONS(7), 1,
      anon_sym_LF,
    ACTIONS(11), 1,
      sym_comment,
    STATE(15), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(16), 1,
      sym__comment_or_new_line,
  [10292] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1493), 1,
      anon_sym_COMMA,
    ACTIONS(1495), 1,
      anon_sym_RBRACK,
    STATE(394), 1,
      aux_sym_json_array_repeat1,
  [10305] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1202), 1,
      anon_sym_COMMA,
    ACTIONS(1497), 1,
      anon_sym_RBRACE,
    STATE(422), 1,
      aux_sym_json_object_repeat1,
  [10318] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(736), 1,
      aux_sym_digit_token1,
    STATE(262), 2,
      sym_digit,
      aux_sym_integer_repeat1,
  [10329] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1493), 1,
      anon_sym_COMMA,
    ACTIONS(1499), 1,
      anon_sym_RBRACK,
    STATE(378), 1,
      aux_sym_json_array_repeat1,
  [10342] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1202), 1,
      anon_sym_COMMA,
    ACTIONS(1501), 1,
      anon_sym_RBRACE,
    STATE(422), 1,
      aux_sym_json_object_repeat1,
  [10355] = 4,
    ACTIONS(7), 1,
      anon_sym_LF,
    ACTIONS(11), 1,
      sym_comment,
    STATE(15), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(53), 1,
      sym__comment_or_new_line,
  [10368] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1202), 1,
      anon_sym_COMMA,
    ACTIONS(1501), 1,
      anon_sym_RBRACE,
    STATE(379), 1,
      aux_sym_json_object_repeat1,
  [10381] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1505), 1,
      anon_sym_POUND,
    ACTIONS(1503), 2,
      anon_sym_SEMI,
      aux_sym_filename_escaped_char_token1,
  [10392] = 4,
    ACTIONS(7), 1,
      anon_sym_LF,
    ACTIONS(11), 1,
      sym_comment,
    STATE(15), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(33), 1,
      sym__comment_or_new_line,
  [10405] = 4,
    ACTIONS(795), 1,
      anon_sym_LF,
    ACTIONS(811), 1,
      sym_comment,
    STATE(67), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(71), 1,
      sym__comment_or_new_line,
  [10418] = 4,
    ACTIONS(7), 1,
      anon_sym_LF,
    ACTIONS(11), 1,
      sym_comment,
    STATE(15), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(62), 1,
      sym__comment_or_new_line,
  [10431] = 4,
    ACTIONS(1507), 1,
      anon_sym_LF,
    ACTIONS(1509), 1,
      aux_sym_file_contenttype_token1,
    ACTIONS(1511), 1,
      sym_comment,
    STATE(609), 1,
      sym_file_contenttype,
  [10444] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1252), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [10453] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(357), 1,
      sym_boolean,
    ACTIONS(732), 2,
      anon_sym_true,
      anon_sym_false,
  [10464] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1515), 1,
      anon_sym_POUND,
    ACTIONS(1513), 2,
      anon_sym_SEMI,
      aux_sym_filename_escaped_char_token1,
  [10475] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1493), 1,
      anon_sym_COMMA,
    ACTIONS(1517), 1,
      anon_sym_RBRACK,
    STATE(442), 1,
      aux_sym_json_array_repeat1,
  [10488] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1519), 1,
      anon_sym_COMMA,
    ACTIONS(1522), 1,
      anon_sym_RBRACK,
    STATE(394), 1,
      aux_sym_json_array_repeat1,
  [10501] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1202), 1,
      anon_sym_COMMA,
    ACTIONS(1524), 1,
      anon_sym_RBRACE,
    STATE(422), 1,
      aux_sym_json_object_repeat1,
  [10514] = 4,
    ACTIONS(7), 1,
      anon_sym_LF,
    ACTIONS(11), 1,
      sym_comment,
    STATE(14), 1,
      sym__comment_or_new_line,
    STATE(15), 1,
      aux_sym__comment_or_new_line_repeat1,
  [10527] = 4,
    ACTIONS(1526), 1,
      anon_sym_LF,
    ACTIONS(1528), 1,
      sym_comment,
    STATE(135), 1,
      sym__comment_or_new_line,
    STATE(270), 1,
      aux_sym__comment_or_new_line_repeat1,
  [10540] = 4,
    ACTIONS(1526), 1,
      anon_sym_LF,
    ACTIONS(1528), 1,
      sym_comment,
    STATE(133), 1,
      sym__comment_or_new_line,
    STATE(270), 1,
      aux_sym__comment_or_new_line_repeat1,
  [10553] = 4,
    ACTIONS(1526), 1,
      anon_sym_LF,
    ACTIONS(1528), 1,
      sym_comment,
    STATE(136), 1,
      sym__comment_or_new_line,
    STATE(270), 1,
      aux_sym__comment_or_new_line_repeat1,
  [10566] = 4,
    ACTIONS(1526), 1,
      anon_sym_LF,
    ACTIONS(1528), 1,
      sym_comment,
    STATE(137), 1,
      sym__comment_or_new_line,
    STATE(270), 1,
      aux_sym__comment_or_new_line_repeat1,
  [10579] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(436), 1,
      sym_status,
    ACTIONS(1530), 2,
      aux_sym_status_token1,
      anon_sym_STAR,
  [10590] = 2,
    ACTIONS(793), 1,
      sym_comment,
    ACTIONS(1532), 3,
      anon_sym_BSLASH,
      anon_sym_SLASH,
      aux_sym_regex_text_token1,
  [10599] = 4,
    ACTIONS(1526), 1,
      anon_sym_LF,
    ACTIONS(1528), 1,
      sym_comment,
    STATE(163), 1,
      sym__comment_or_new_line,
    STATE(270), 1,
      aux_sym__comment_or_new_line_repeat1,
  [10612] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1534), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [10621] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1536), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [10630] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1202), 1,
      anon_sym_COMMA,
    ACTIONS(1524), 1,
      anon_sym_RBRACE,
    STATE(425), 1,
      aux_sym_json_object_repeat1,
  [10643] = 4,
    ACTIONS(1326), 1,
      anon_sym_DOT,
    ACTIONS(1538), 1,
      anon_sym_LF,
    ACTIONS(1540), 1,
      sym_comment,
    STATE(589), 1,
      sym_fraction,
  [10656] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1542), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [10665] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(781), 1,
      aux_sym_digit_token1,
    STATE(244), 2,
      sym_digit,
      aux_sym_integer_repeat1,
  [10676] = 4,
    ACTIONS(1326), 1,
      anon_sym_DOT,
    ACTIONS(1544), 1,
      anon_sym_LF,
    ACTIONS(1546), 1,
      sym_comment,
    STATE(589), 1,
      sym_fraction,
  [10689] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1548), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [10698] = 4,
    ACTIONS(1326), 1,
      anon_sym_DOT,
    ACTIONS(1550), 1,
      anon_sym_LF,
    ACTIONS(1552), 1,
      sym_comment,
    STATE(589), 1,
      sym_fraction,
  [10711] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1554), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [10720] = 4,
    ACTIONS(1326), 1,
      anon_sym_DOT,
    ACTIONS(1556), 1,
      anon_sym_LF,
    ACTIONS(1558), 1,
      sym_comment,
    STATE(589), 1,
      sym_fraction,
  [10733] = 4,
    ACTIONS(1526), 1,
      anon_sym_LF,
    ACTIONS(1528), 1,
      sym_comment,
    STATE(270), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(532), 1,
      sym__comment_or_new_line,
  [10746] = 4,
    ACTIONS(1326), 1,
      anon_sym_DOT,
    ACTIONS(1560), 1,
      anon_sym_LF,
    ACTIONS(1562), 1,
      sym_comment,
    STATE(589), 1,
      sym_fraction,
  [10759] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1491), 1,
      aux_sym_variable_name_token1,
    STATE(130), 1,
      sym_variable_name,
    STATE(611), 1,
      sym_expr,
  [10772] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1455), 3,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      aux_sym_hexdigit_token1,
  [10781] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1564), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [10790] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(781), 1,
      aux_sym_digit_token1,
    STATE(198), 2,
      sym_digit,
      aux_sym_integer_repeat1,
  [10801] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1377), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [10810] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1566), 1,
      anon_sym_RBRACE,
    ACTIONS(1568), 1,
      anon_sym_COMMA,
    STATE(422), 1,
      aux_sym_json_object_repeat1,
  [10823] = 4,
    ACTIONS(7), 1,
      anon_sym_LF,
    ACTIONS(11), 1,
      sym_comment,
    STATE(15), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(54), 1,
      sym__comment_or_new_line,
  [10836] = 4,
    ACTIONS(7), 1,
      anon_sym_LF,
    ACTIONS(11), 1,
      sym_comment,
    STATE(15), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(36), 1,
      sym__comment_or_new_line,
  [10849] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1202), 1,
      anon_sym_COMMA,
    ACTIONS(1571), 1,
      anon_sym_RBRACE,
    STATE(422), 1,
      aux_sym_json_object_repeat1,
  [10862] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(358), 1,
      sym_boolean,
    ACTIONS(732), 2,
      anon_sym_true,
      anon_sym_false,
  [10873] = 4,
    ACTIONS(1509), 1,
      aux_sym_file_contenttype_token1,
    ACTIONS(1573), 1,
      anon_sym_LF,
    ACTIONS(1575), 1,
      sym_comment,
    STATE(605), 1,
      sym_file_contenttype,
  [10886] = 4,
    ACTIONS(7), 1,
      anon_sym_LF,
    ACTIONS(11), 1,
      sym_comment,
    STATE(15), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(26), 1,
      sym__comment_or_new_line,
  [10899] = 4,
    ACTIONS(7), 1,
      anon_sym_LF,
    ACTIONS(11), 1,
      sym_comment,
    STATE(15), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(37), 1,
      sym__comment_or_new_line,
  [10912] = 4,
    ACTIONS(1326), 1,
      anon_sym_DOT,
    ACTIONS(1577), 1,
      anon_sym_LF,
    ACTIONS(1579), 1,
      sym_comment,
    STATE(589), 1,
      sym_fraction,
  [10925] = 4,
    ACTIONS(7), 1,
      anon_sym_LF,
    ACTIONS(11), 1,
      sym_comment,
    STATE(15), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(34), 1,
      sym__comment_or_new_line,
  [10938] = 4,
    ACTIONS(7), 1,
      anon_sym_LF,
    ACTIONS(11), 1,
      sym_comment,
    STATE(15), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(28), 1,
      sym__comment_or_new_line,
  [10951] = 4,
    ACTIONS(1326), 1,
      anon_sym_DOT,
    ACTIONS(1581), 1,
      anon_sym_LF,
    ACTIONS(1583), 1,
      sym_comment,
    STATE(589), 1,
      sym_fraction,
  [10964] = 4,
    ACTIONS(7), 1,
      anon_sym_LF,
    ACTIONS(11), 1,
      sym_comment,
    STATE(15), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(35), 1,
      sym__comment_or_new_line,
  [10977] = 4,
    ACTIONS(7), 1,
      anon_sym_LF,
    ACTIONS(11), 1,
      sym_comment,
    STATE(15), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(24), 1,
      sym__comment_or_new_line,
  [10990] = 4,
    ACTIONS(795), 1,
      anon_sym_LF,
    ACTIONS(811), 1,
      sym_comment,
    STATE(9), 1,
      sym__comment_or_new_line,
    STATE(67), 1,
      aux_sym__comment_or_new_line_repeat1,
  [11003] = 4,
    ACTIONS(7), 1,
      anon_sym_LF,
    ACTIONS(11), 1,
      sym_comment,
    STATE(15), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(25), 1,
      sym__comment_or_new_line,
  [11016] = 4,
    ACTIONS(795), 1,
      anon_sym_LF,
    ACTIONS(811), 1,
      sym_comment,
    STATE(59), 1,
      sym__comment_or_new_line,
    STATE(67), 1,
      aux_sym__comment_or_new_line_repeat1,
  [11029] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1585), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [11038] = 4,
    ACTIONS(7), 1,
      anon_sym_LF,
    ACTIONS(11), 1,
      sym_comment,
    STATE(15), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(23), 1,
      sym__comment_or_new_line,
  [11051] = 2,
    ACTIONS(793), 1,
      sym_comment,
    ACTIONS(1587), 3,
      anon_sym_BSLASH,
      anon_sym_SLASH,
      aux_sym_regex_text_token1,
  [11060] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1493), 1,
      anon_sym_COMMA,
    ACTIONS(1589), 1,
      anon_sym_RBRACK,
    STATE(394), 1,
      aux_sym_json_array_repeat1,
  [11073] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1268), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [11082] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1591), 2,
      aux_sym_status_token1,
      anon_sym_STAR,
  [11090] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1522), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [11098] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1479), 1,
      aux_sym_hexdigit_token1,
    STATE(450), 1,
      sym_hexdigit,
  [11108] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1479), 1,
      aux_sym_hexdigit_token1,
    STATE(451), 1,
      sym_hexdigit,
  [11118] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1479), 1,
      aux_sym_hexdigit_token1,
    STATE(452), 1,
      sym_hexdigit,
  [11128] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1479), 1,
      aux_sym_hexdigit_token1,
    STATE(453), 1,
      sym_hexdigit,
  [11138] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1479), 1,
      aux_sym_hexdigit_token1,
    STATE(455), 1,
      sym_hexdigit,
  [11148] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1479), 1,
      aux_sym_hexdigit_token1,
    STATE(456), 1,
      sym_hexdigit,
  [11158] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1479), 1,
      aux_sym_hexdigit_token1,
    STATE(457), 1,
      sym_hexdigit,
  [11168] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1479), 1,
      aux_sym_hexdigit_token1,
    STATE(458), 1,
      sym_hexdigit,
  [11178] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1593), 1,
      anon_sym_LBRACE,
    STATE(321), 1,
      sym_unicode_char,
  [11188] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1479), 1,
      aux_sym_hexdigit_token1,
    STATE(460), 1,
      sym_hexdigit,
  [11198] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1479), 1,
      aux_sym_hexdigit_token1,
    STATE(463), 1,
      sym_hexdigit,
  [11208] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1479), 1,
      aux_sym_hexdigit_token1,
    STATE(465), 1,
      sym_hexdigit,
  [11218] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1479), 1,
      aux_sym_hexdigit_token1,
    STATE(466), 1,
      sym_hexdigit,
  [11228] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1479), 1,
      aux_sym_hexdigit_token1,
    STATE(488), 1,
      sym_hexdigit,
  [11238] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1479), 1,
      aux_sym_hexdigit_token1,
    STATE(575), 1,
      sym_hexdigit,
  [11248] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1595), 1,
      anon_sym_file_COMMA,
    STATE(415), 1,
      sym_file_value,
  [11258] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1479), 1,
      aux_sym_hexdigit_token1,
    STATE(487), 1,
      sym_hexdigit,
  [11268] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1479), 1,
      aux_sym_hexdigit_token1,
    STATE(573), 1,
      sym_hexdigit,
  [11278] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(728), 1,
      anon_sym_DQUOTE,
    STATE(529), 1,
      sym_quoted_string,
  [11288] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1479), 1,
      aux_sym_hexdigit_token1,
    STATE(571), 1,
      sym_hexdigit,
  [11298] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1479), 1,
      aux_sym_hexdigit_token1,
    STATE(568), 1,
      sym_hexdigit,
  [11308] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(728), 1,
      anon_sym_DQUOTE,
    STATE(207), 1,
      sym_quoted_string,
  [11318] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(728), 1,
      anon_sym_DQUOTE,
    STATE(208), 1,
      sym_quoted_string,
  [11328] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(728), 1,
      anon_sym_DQUOTE,
    STATE(209), 1,
      sym_quoted_string,
  [11338] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(728), 1,
      anon_sym_DQUOTE,
    STATE(184), 1,
      sym_quoted_string,
  [11348] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(728), 1,
      anon_sym_DQUOTE,
    STATE(223), 1,
      sym_quoted_string,
  [11358] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1410), 1,
      anon_sym_DQUOTE,
    STATE(93), 1,
      sym_quoted_string,
  [11368] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1479), 1,
      aux_sym_hexdigit_token1,
    STATE(462), 1,
      sym_hexdigit,
  [11378] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1566), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [11386] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1597), 1,
      anon_sym_LBRACE,
    STATE(269), 1,
      sym_unicode_char,
  [11396] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1410), 1,
      anon_sym_DQUOTE,
    STATE(90), 1,
      sym_quoted_string,
  [11406] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1599), 1,
      anon_sym_LBRACE,
    STATE(326), 1,
      sym_unicode_char,
  [11416] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1410), 1,
      anon_sym_DQUOTE,
    STATE(87), 1,
      sym_quoted_string,
  [11426] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1410), 1,
      anon_sym_DQUOTE,
    STATE(85), 1,
      sym_quoted_string,
  [11436] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1479), 1,
      aux_sym_hexdigit_token1,
    STATE(483), 1,
      sym_hexdigit,
  [11446] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1410), 1,
      anon_sym_DQUOTE,
    STATE(91), 1,
      sym_quoted_string,
  [11456] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1601), 1,
      anon_sym_COLON,
    ACTIONS(1603), 1,
      anon_sym_COLON2,
  [11466] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1479), 1,
      aux_sym_hexdigit_token1,
    STATE(459), 1,
      sym_hexdigit,
  [11476] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1605), 1,
      anon_sym_LBRACE,
    STATE(349), 1,
      sym_unicode_char,
  [11486] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1479), 1,
      aux_sym_hexdigit_token1,
    STATE(473), 1,
      sym_hexdigit,
  [11496] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1607), 1,
      anon_sym_LBRACE,
    STATE(271), 1,
      sym_unicode_char,
  [11506] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1479), 1,
      aux_sym_hexdigit_token1,
    STATE(545), 1,
      sym_hexdigit,
  [11516] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1609), 1,
      aux_sym_hexdigit_token1,
    STATE(339), 1,
      sym_hexdigit,
  [11526] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1611), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [11534] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1338), 1,
      anon_sym_LT,
    ACTIONS(1340), 1,
      anon_sym_LT_QMARK,
  [11544] = 2,
    ACTIONS(1272), 1,
      sym_comment,
    ACTIONS(1274), 1,
      anon_sym_LF,
  [11551] = 2,
    ACTIONS(1613), 1,
      anon_sym_LF,
    ACTIONS(1615), 1,
      sym_comment,
  [11558] = 2,
    ACTIONS(1617), 1,
      anon_sym_LF,
    ACTIONS(1619), 1,
      sym_comment,
  [11565] = 2,
    ACTIONS(1621), 1,
      anon_sym_LF,
    ACTIONS(1623), 1,
      sym_comment,
  [11572] = 2,
    ACTIONS(1560), 1,
      anon_sym_LF,
    ACTIONS(1562), 1,
      sym_comment,
  [11579] = 2,
    ACTIONS(1556), 1,
      anon_sym_LF,
    ACTIONS(1558), 1,
      sym_comment,
  [11586] = 2,
    ACTIONS(1625), 1,
      anon_sym_LF,
    ACTIONS(1627), 1,
      sym_comment,
  [11593] = 2,
    ACTIONS(1550), 1,
      anon_sym_LF,
    ACTIONS(1552), 1,
      sym_comment,
  [11600] = 2,
    ACTIONS(1629), 1,
      anon_sym_LF,
    ACTIONS(1631), 1,
      sym_comment,
  [11607] = 2,
    ACTIONS(1544), 1,
      anon_sym_LF,
    ACTIONS(1546), 1,
      sym_comment,
  [11614] = 2,
    ACTIONS(1633), 1,
      anon_sym_LF,
    ACTIONS(1635), 1,
      sym_comment,
  [11621] = 2,
    ACTIONS(1538), 1,
      anon_sym_LF,
    ACTIONS(1540), 1,
      sym_comment,
  [11628] = 2,
    ACTIONS(1637), 1,
      anon_sym_LF,
    ACTIONS(1639), 1,
      sym_comment,
  [11635] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1641), 1,
      anon_sym_COLON2,
  [11642] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1643), 1,
      anon_sym_COLON2,
  [11649] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1645), 1,
      anon_sym_COLON2,
  [11656] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1647), 1,
      anon_sym_COLON2,
  [11663] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1649), 1,
      anon_sym_COLON2,
  [11670] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1651), 1,
      anon_sym_COLON2,
  [11677] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1653), 1,
      anon_sym_COLON2,
  [11684] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1655), 1,
      anon_sym_COLON2,
  [11691] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1657), 1,
      anon_sym_COLON2,
  [11698] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1659), 1,
      anon_sym_COLON2,
  [11705] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1661), 1,
      anon_sym_COLON2,
  [11712] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1663), 1,
      anon_sym_COLON2,
  [11719] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1665), 1,
      anon_sym_COLON2,
  [11726] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1667), 1,
      anon_sym_COLON2,
  [11733] = 2,
    ACTIONS(1536), 1,
      anon_sym_LF,
    ACTIONS(1669), 1,
      sym_comment,
  [11740] = 2,
    ACTIONS(1671), 1,
      anon_sym_LF,
    ACTIONS(1673), 1,
      sym_comment,
  [11747] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1675), 1,
      anon_sym_COLON2,
  [11754] = 2,
    ACTIONS(1677), 1,
      anon_sym_LF,
    ACTIONS(1679), 1,
      sym_comment,
  [11761] = 2,
    ACTIONS(1534), 1,
      anon_sym_LF,
    ACTIONS(1681), 1,
      sym_comment,
  [11768] = 2,
    ACTIONS(1683), 1,
      anon_sym_LF,
    ACTIONS(1685), 1,
      sym_comment,
  [11775] = 2,
    ACTIONS(793), 1,
      sym_comment,
    ACTIONS(1687), 1,
      aux_sym_xml_open_tag_token1,
  [11782] = 2,
    ACTIONS(1689), 1,
      anon_sym_LF,
    ACTIONS(1691), 1,
      sym_comment,
  [11789] = 2,
    ACTIONS(793), 1,
      sym_comment,
    ACTIONS(1693), 1,
      aux_sym_xml_prolog_tag_token1,
  [11796] = 2,
    ACTIONS(793), 1,
      sym_comment,
    ACTIONS(1695), 1,
      aux_sym_oneline_base64_token1,
  [11803] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1697), 1,
      anon_sym_SEMI,
  [11810] = 2,
    ACTIONS(1699), 1,
      anon_sym_LF,
    ACTIONS(1701), 1,
      sym_comment,
  [11817] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1703), 1,
      aux_sym_key_string_escaped_char_token1,
  [11824] = 2,
    ACTIONS(1705), 1,
      anon_sym_LF,
    ACTIONS(1707), 1,
      sym_comment,
  [11831] = 2,
    ACTIONS(1709), 1,
      anon_sym_LF,
    ACTIONS(1711), 1,
      sym_comment,
  [11838] = 2,
    ACTIONS(1713), 1,
      anon_sym_LF,
    ACTIONS(1715), 1,
      sym_comment,
  [11845] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1717), 1,
      anon_sym_SEMI,
  [11852] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1719), 1,
      anon_sym_GT,
  [11859] = 2,
    ACTIONS(1420), 1,
      anon_sym_LF,
    ACTIONS(1721), 1,
      sym_comment,
  [11866] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1723), 1,
      anon_sym_EQ,
  [11873] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1725), 1,
      anon_sym_QMARK_GT,
  [11880] = 2,
    ACTIONS(1727), 1,
      anon_sym_LF,
    ACTIONS(1729), 1,
      sym_comment,
  [11887] = 2,
    ACTIONS(1731), 1,
      anon_sym_LF,
    ACTIONS(1733), 1,
      sym_comment,
  [11894] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1735), 1,
      anon_sym_RBRACE_RBRACE,
  [11901] = 2,
    ACTIONS(1290), 1,
      sym_comment,
    ACTIONS(1292), 1,
      anon_sym_LF,
  [11908] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1737), 1,
      aux_sym_key_string_escaped_char_token1,
  [11915] = 2,
    ACTIONS(793), 1,
      sym_comment,
    ACTIONS(1739), 1,
      aux_sym_xml_close_tag_token1,
  [11922] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1741), 1,
      anon_sym_RBRACE,
  [11929] = 2,
    ACTIONS(1743), 1,
      anon_sym_LF,
    ACTIONS(1745), 1,
      sym_comment,
  [11936] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1747), 1,
      anon_sym_SEMI,
  [11943] = 2,
    ACTIONS(1489), 1,
      anon_sym_LF,
    ACTIONS(1749), 1,
      sym_comment,
  [11950] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1751), 1,
      anon_sym_QMARK_GT,
  [11957] = 2,
    ACTIONS(1753), 1,
      anon_sym_LF,
    ACTIONS(1755), 1,
      sym_comment,
  [11964] = 2,
    ACTIONS(1757), 1,
      anon_sym_LF,
    ACTIONS(1759), 1,
      sym_comment,
  [11971] = 2,
    ACTIONS(1761), 1,
      anon_sym_LF,
    ACTIONS(1763), 1,
      sym_comment,
  [11978] = 2,
    ACTIONS(1765), 1,
      anon_sym_LF,
    ACTIONS(1767), 1,
      sym_comment,
  [11985] = 2,
    ACTIONS(1268), 1,
      anon_sym_LF,
    ACTIONS(1403), 1,
      sym_comment,
  [11992] = 2,
    ACTIONS(1554), 1,
      anon_sym_LF,
    ACTIONS(1769), 1,
      sym_comment,
  [11999] = 2,
    ACTIONS(1771), 1,
      anon_sym_LF,
    ACTIONS(1773), 1,
      sym_comment,
  [12006] = 2,
    ACTIONS(1775), 1,
      anon_sym_LF,
    ACTIONS(1777), 1,
      sym_comment,
  [12013] = 2,
    ACTIONS(1779), 1,
      anon_sym_LF,
    ACTIONS(1781), 1,
      sym_comment,
  [12020] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1783), 1,
      anon_sym_GT,
  [12027] = 2,
    ACTIONS(1785), 1,
      anon_sym_LF,
    ACTIONS(1787), 1,
      sym_comment,
  [12034] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1789), 1,
      anon_sym_SLASH,
  [12041] = 2,
    ACTIONS(1585), 1,
      anon_sym_LF,
    ACTIONS(1791), 1,
      sym_comment,
  [12048] = 2,
    ACTIONS(1548), 1,
      anon_sym_LF,
    ACTIONS(1793), 1,
      sym_comment,
  [12055] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1795), 1,
      anon_sym_GT,
  [12062] = 2,
    ACTIONS(1334), 1,
      sym_comment,
    ACTIONS(1336), 1,
      anon_sym_LF,
  [12069] = 2,
    ACTIONS(793), 1,
      sym_comment,
    ACTIONS(1797), 1,
      anon_sym_LF,
  [12076] = 2,
    ACTIONS(1799), 1,
      anon_sym_LF,
    ACTIONS(1801), 1,
      sym_comment,
  [12083] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1803), 1,
      anon_sym_RBRACE,
  [12090] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1805), 1,
      anon_sym_RBRACE_RBRACE,
  [12097] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1807), 1,
      aux_sym_key_string_escaped_char_token1,
  [12104] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1809), 1,
      anon_sym_RBRACE,
  [12111] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1811), 1,
      anon_sym_RBRACE_RBRACE,
  [12118] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1813), 1,
      anon_sym_RBRACE,
  [12125] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1815), 1,
      anon_sym_RBRACE_RBRACE,
  [12132] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1817), 1,
      anon_sym_RBRACE,
  [12139] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1819), 1,
      anon_sym_RBRACE_RBRACE,
  [12146] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1821), 1,
      anon_sym_RBRACE_RBRACE,
  [12153] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1823), 1,
      anon_sym_RBRACE_RBRACE,
  [12160] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1825), 1,
      anon_sym_RBRACE_RBRACE,
  [12167] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1827), 1,
      anon_sym_RBRACE_RBRACE,
  [12174] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1829), 1,
      anon_sym_RBRACE_RBRACE,
  [12181] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1831), 1,
      anon_sym_RBRACE_RBRACE,
  [12188] = 2,
    ACTIONS(1564), 1,
      anon_sym_LF,
    ACTIONS(1833), 1,
      sym_comment,
  [12195] = 2,
    ACTIONS(793), 1,
      sym_comment,
    ACTIONS(1835), 1,
      aux_sym_xml_prolog_tag_token1,
  [12202] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1837), 1,
      ts_builtin_sym_end,
  [12209] = 2,
    ACTIONS(793), 1,
      sym_comment,
    ACTIONS(1839), 1,
      aux_sym_xml_close_tag_token1,
  [12216] = 2,
    ACTIONS(1581), 1,
      anon_sym_LF,
    ACTIONS(1583), 1,
      sym_comment,
  [12223] = 2,
    ACTIONS(1841), 1,
      anon_sym_LF,
    ACTIONS(1843), 1,
      sym_comment,
  [12230] = 2,
    ACTIONS(1845), 1,
      anon_sym_LF,
    ACTIONS(1847), 1,
      sym_comment,
  [12237] = 2,
    ACTIONS(1542), 1,
      anon_sym_LF,
    ACTIONS(1849), 1,
      sym_comment,
  [12244] = 2,
    ACTIONS(793), 1,
      sym_comment,
    ACTIONS(1851), 1,
      anon_sym_LF,
  [12251] = 2,
    ACTIONS(793), 1,
      sym_comment,
    ACTIONS(1853), 1,
      aux_sym_oneline_string_text_token2,
  [12258] = 2,
    ACTIONS(1855), 1,
      anon_sym_LF,
    ACTIONS(1857), 1,
      sym_comment,
  [12265] = 2,
    ACTIONS(1451), 1,
      anon_sym_LF,
    ACTIONS(1859), 1,
      sym_comment,
  [12272] = 2,
    ACTIONS(1861), 1,
      anon_sym_LF,
    ACTIONS(1863), 1,
      sym_comment,
  [12279] = 2,
    ACTIONS(1865), 1,
      anon_sym_LF,
    ACTIONS(1867), 1,
      sym_comment,
  [12286] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1601), 1,
      anon_sym_COLON,
  [12293] = 2,
    ACTIONS(1377), 1,
      anon_sym_LF,
    ACTIONS(1381), 1,
      sym_comment,
  [12300] = 2,
    ACTIONS(1869), 1,
      anon_sym_LF,
    ACTIONS(1871), 1,
      sym_comment,
  [12307] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1873), 1,
      anon_sym_COLON2,
  [12314] = 2,
    ACTIONS(793), 1,
      sym_comment,
    ACTIONS(1875), 1,
      aux_sym_regex_escaped_char_token1,
  [12321] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1877), 1,
      anon_sym_SLASH,
  [12328] = 2,
    ACTIONS(1879), 1,
      anon_sym_LF,
    ACTIONS(1881), 1,
      sym_comment,
  [12335] = 2,
    ACTIONS(1883), 1,
      anon_sym_LF,
    ACTIONS(1885), 1,
      sym_comment,
  [12342] = 2,
    ACTIONS(1887), 1,
      anon_sym_LF,
    ACTIONS(1889), 1,
      sym_comment,
  [12349] = 2,
    ACTIONS(793), 1,
      sym_comment,
    ACTIONS(1891), 1,
      aux_sym_variable_name_token2,
  [12356] = 2,
    ACTIONS(1577), 1,
      anon_sym_LF,
    ACTIONS(1579), 1,
      sym_comment,
  [12363] = 2,
    ACTIONS(1893), 1,
      anon_sym_LF,
    ACTIONS(1895), 1,
      sym_comment,
  [12370] = 2,
    ACTIONS(1573), 1,
      anon_sym_LF,
    ACTIONS(1575), 1,
      sym_comment,
  [12377] = 2,
    ACTIONS(1897), 1,
      anon_sym_LF,
    ACTIONS(1899), 1,
      sym_comment,
  [12384] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1901), 1,
      anon_sym_RBRACE_RBRACE,
  [12391] = 2,
    ACTIONS(1903), 1,
      anon_sym_LF,
    ACTIONS(1905), 1,
      sym_comment,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(19)] = 0,
  [SMALL_STATE(20)] = 122,
  [SMALL_STATE(21)] = 244,
  [SMALL_STATE(22)] = 367,
  [SMALL_STATE(23)] = 490,
  [SMALL_STATE(24)] = 553,
  [SMALL_STATE(25)] = 616,
  [SMALL_STATE(26)] = 679,
  [SMALL_STATE(27)] = 742,
  [SMALL_STATE(28)] = 805,
  [SMALL_STATE(29)] = 868,
  [SMALL_STATE(30)] = 931,
  [SMALL_STATE(31)] = 994,
  [SMALL_STATE(32)] = 1057,
  [SMALL_STATE(33)] = 1120,
  [SMALL_STATE(34)] = 1183,
  [SMALL_STATE(35)] = 1246,
  [SMALL_STATE(36)] = 1309,
  [SMALL_STATE(37)] = 1372,
  [SMALL_STATE(38)] = 1435,
  [SMALL_STATE(39)] = 1512,
  [SMALL_STATE(40)] = 1589,
  [SMALL_STATE(41)] = 1666,
  [SMALL_STATE(42)] = 1743,
  [SMALL_STATE(43)] = 1816,
  [SMALL_STATE(44)] = 1889,
  [SMALL_STATE(45)] = 1962,
  [SMALL_STATE(46)] = 2035,
  [SMALL_STATE(47)] = 2108,
  [SMALL_STATE(48)] = 2181,
  [SMALL_STATE(49)] = 2254,
  [SMALL_STATE(50)] = 2327,
  [SMALL_STATE(51)] = 2400,
  [SMALL_STATE(52)] = 2474,
  [SMALL_STATE(53)] = 2537,
  [SMALL_STATE(54)] = 2591,
  [SMALL_STATE(55)] = 2645,
  [SMALL_STATE(56)] = 2704,
  [SMALL_STATE(57)] = 2763,
  [SMALL_STATE(58)] = 2815,
  [SMALL_STATE(59)] = 2883,
  [SMALL_STATE(60)] = 2948,
  [SMALL_STATE(61)] = 3013,
  [SMALL_STATE(62)] = 3078,
  [SMALL_STATE(63)] = 3128,
  [SMALL_STATE(64)] = 3178,
  [SMALL_STATE(65)] = 3261,
  [SMALL_STATE(66)] = 3328,
  [SMALL_STATE(67)] = 3381,
  [SMALL_STATE(68)] = 3431,
  [SMALL_STATE(69)] = 3481,
  [SMALL_STATE(70)] = 3524,
  [SMALL_STATE(71)] = 3567,
  [SMALL_STATE(72)] = 3610,
  [SMALL_STATE(73)] = 3651,
  [SMALL_STATE(74)] = 3691,
  [SMALL_STATE(75)] = 3731,
  [SMALL_STATE(76)] = 3771,
  [SMALL_STATE(77)] = 3811,
  [SMALL_STATE(78)] = 3851,
  [SMALL_STATE(79)] = 3891,
  [SMALL_STATE(80)] = 3931,
  [SMALL_STATE(81)] = 3971,
  [SMALL_STATE(82)] = 4011,
  [SMALL_STATE(83)] = 4051,
  [SMALL_STATE(84)] = 4091,
  [SMALL_STATE(85)] = 4131,
  [SMALL_STATE(86)] = 4170,
  [SMALL_STATE(87)] = 4209,
  [SMALL_STATE(88)] = 4248,
  [SMALL_STATE(89)] = 4287,
  [SMALL_STATE(90)] = 4326,
  [SMALL_STATE(91)] = 4365,
  [SMALL_STATE(92)] = 4404,
  [SMALL_STATE(93)] = 4443,
  [SMALL_STATE(94)] = 4482,
  [SMALL_STATE(95)] = 4521,
  [SMALL_STATE(96)] = 4560,
  [SMALL_STATE(97)] = 4599,
  [SMALL_STATE(98)] = 4638,
  [SMALL_STATE(99)] = 4677,
  [SMALL_STATE(100)] = 4738,
  [SMALL_STATE(101)] = 4785,
  [SMALL_STATE(102)] = 4830,
  [SMALL_STATE(103)] = 4883,
  [SMALL_STATE(104)] = 4912,
  [SMALL_STATE(105)] = 4941,
  [SMALL_STATE(106)] = 4994,
  [SMALL_STATE(107)] = 5023,
  [SMALL_STATE(108)] = 5076,
  [SMALL_STATE(109)] = 5105,
  [SMALL_STATE(110)] = 5134,
  [SMALL_STATE(111)] = 5184,
  [SMALL_STATE(112)] = 5236,
  [SMALL_STATE(113)] = 5272,
  [SMALL_STATE(114)] = 5306,
  [SMALL_STATE(115)] = 5351,
  [SMALL_STATE(116)] = 5398,
  [SMALL_STATE(117)] = 5445,
  [SMALL_STATE(118)] = 5490,
  [SMALL_STATE(119)] = 5535,
  [SMALL_STATE(120)] = 5582,
  [SMALL_STATE(121)] = 5627,
  [SMALL_STATE(122)] = 5674,
  [SMALL_STATE(123)] = 5721,
  [SMALL_STATE(124)] = 5768,
  [SMALL_STATE(125)] = 5792,
  [SMALL_STATE(126)] = 5816,
  [SMALL_STATE(127)] = 5860,
  [SMALL_STATE(128)] = 5884,
  [SMALL_STATE(129)] = 5908,
  [SMALL_STATE(130)] = 5932,
  [SMALL_STATE(131)] = 5973,
  [SMALL_STATE(132)] = 6014,
  [SMALL_STATE(133)] = 6055,
  [SMALL_STATE(134)] = 6099,
  [SMALL_STATE(135)] = 6136,
  [SMALL_STATE(136)] = 6176,
  [SMALL_STATE(137)] = 6216,
  [SMALL_STATE(138)] = 6256,
  [SMALL_STATE(139)] = 6283,
  [SMALL_STATE(140)] = 6314,
  [SMALL_STATE(141)] = 6346,
  [SMALL_STATE(142)] = 6378,
  [SMALL_STATE(143)] = 6405,
  [SMALL_STATE(144)] = 6432,
  [SMALL_STATE(145)] = 6461,
  [SMALL_STATE(146)] = 6488,
  [SMALL_STATE(147)] = 6517,
  [SMALL_STATE(148)] = 6544,
  [SMALL_STATE(149)] = 6573,
  [SMALL_STATE(150)] = 6600,
  [SMALL_STATE(151)] = 6627,
  [SMALL_STATE(152)] = 6656,
  [SMALL_STATE(153)] = 6683,
  [SMALL_STATE(154)] = 6712,
  [SMALL_STATE(155)] = 6741,
  [SMALL_STATE(156)] = 6769,
  [SMALL_STATE(157)] = 6795,
  [SMALL_STATE(158)] = 6823,
  [SMALL_STATE(159)] = 6851,
  [SMALL_STATE(160)] = 6879,
  [SMALL_STATE(161)] = 6907,
  [SMALL_STATE(162)] = 6933,
  [SMALL_STATE(163)] = 6959,
  [SMALL_STATE(164)] = 6987,
  [SMALL_STATE(165)] = 7013,
  [SMALL_STATE(166)] = 7039,
  [SMALL_STATE(167)] = 7064,
  [SMALL_STATE(168)] = 7089,
  [SMALL_STATE(169)] = 7114,
  [SMALL_STATE(170)] = 7139,
  [SMALL_STATE(171)] = 7158,
  [SMALL_STATE(172)] = 7183,
  [SMALL_STATE(173)] = 7208,
  [SMALL_STATE(174)] = 7227,
  [SMALL_STATE(175)] = 7252,
  [SMALL_STATE(176)] = 7277,
  [SMALL_STATE(177)] = 7300,
  [SMALL_STATE(178)] = 7315,
  [SMALL_STATE(179)] = 7338,
  [SMALL_STATE(180)] = 7363,
  [SMALL_STATE(181)] = 7382,
  [SMALL_STATE(182)] = 7407,
  [SMALL_STATE(183)] = 7432,
  [SMALL_STATE(184)] = 7446,
  [SMALL_STATE(185)] = 7460,
  [SMALL_STATE(186)] = 7474,
  [SMALL_STATE(187)] = 7488,
  [SMALL_STATE(188)] = 7502,
  [SMALL_STATE(189)] = 7516,
  [SMALL_STATE(190)] = 7530,
  [SMALL_STATE(191)] = 7544,
  [SMALL_STATE(192)] = 7558,
  [SMALL_STATE(193)] = 7572,
  [SMALL_STATE(194)] = 7592,
  [SMALL_STATE(195)] = 7616,
  [SMALL_STATE(196)] = 7630,
  [SMALL_STATE(197)] = 7644,
  [SMALL_STATE(198)] = 7662,
  [SMALL_STATE(199)] = 7680,
  [SMALL_STATE(200)] = 7700,
  [SMALL_STATE(201)] = 7722,
  [SMALL_STATE(202)] = 7742,
  [SMALL_STATE(203)] = 7758,
  [SMALL_STATE(204)] = 7776,
  [SMALL_STATE(205)] = 7790,
  [SMALL_STATE(206)] = 7804,
  [SMALL_STATE(207)] = 7824,
  [SMALL_STATE(208)] = 7838,
  [SMALL_STATE(209)] = 7852,
  [SMALL_STATE(210)] = 7866,
  [SMALL_STATE(211)] = 7888,
  [SMALL_STATE(212)] = 7904,
  [SMALL_STATE(213)] = 7926,
  [SMALL_STATE(214)] = 7946,
  [SMALL_STATE(215)] = 7970,
  [SMALL_STATE(216)] = 7984,
  [SMALL_STATE(217)] = 7998,
  [SMALL_STATE(218)] = 8012,
  [SMALL_STATE(219)] = 8026,
  [SMALL_STATE(220)] = 8040,
  [SMALL_STATE(221)] = 8054,
  [SMALL_STATE(222)] = 8068,
  [SMALL_STATE(223)] = 8082,
  [SMALL_STATE(224)] = 8096,
  [SMALL_STATE(225)] = 8109,
  [SMALL_STATE(226)] = 8130,
  [SMALL_STATE(227)] = 8151,
  [SMALL_STATE(228)] = 8172,
  [SMALL_STATE(229)] = 8197,
  [SMALL_STATE(230)] = 8214,
  [SMALL_STATE(231)] = 8235,
  [SMALL_STATE(232)] = 8252,
  [SMALL_STATE(233)] = 8273,
  [SMALL_STATE(234)] = 8292,
  [SMALL_STATE(235)] = 8309,
  [SMALL_STATE(236)] = 8330,
  [SMALL_STATE(237)] = 8351,
  [SMALL_STATE(238)] = 8368,
  [SMALL_STATE(239)] = 8389,
  [SMALL_STATE(240)] = 8406,
  [SMALL_STATE(241)] = 8425,
  [SMALL_STATE(242)] = 8450,
  [SMALL_STATE(243)] = 8464,
  [SMALL_STATE(244)] = 8478,
  [SMALL_STATE(245)] = 8494,
  [SMALL_STATE(246)] = 8506,
  [SMALL_STATE(247)] = 8520,
  [SMALL_STATE(248)] = 8536,
  [SMALL_STATE(249)] = 8552,
  [SMALL_STATE(250)] = 8570,
  [SMALL_STATE(251)] = 8584,
  [SMALL_STATE(252)] = 8602,
  [SMALL_STATE(253)] = 8618,
  [SMALL_STATE(254)] = 8632,
  [SMALL_STATE(255)] = 8650,
  [SMALL_STATE(256)] = 8664,
  [SMALL_STATE(257)] = 8682,
  [SMALL_STATE(258)] = 8698,
  [SMALL_STATE(259)] = 8716,
  [SMALL_STATE(260)] = 8734,
  [SMALL_STATE(261)] = 8748,
  [SMALL_STATE(262)] = 8762,
  [SMALL_STATE(263)] = 8778,
  [SMALL_STATE(264)] = 8792,
  [SMALL_STATE(265)] = 8810,
  [SMALL_STATE(266)] = 8830,
  [SMALL_STATE(267)] = 8850,
  [SMALL_STATE(268)] = 8864,
  [SMALL_STATE(269)] = 8878,
  [SMALL_STATE(270)] = 8892,
  [SMALL_STATE(271)] = 8907,
  [SMALL_STATE(272)] = 8920,
  [SMALL_STATE(273)] = 8935,
  [SMALL_STATE(274)] = 8948,
  [SMALL_STATE(275)] = 8963,
  [SMALL_STATE(276)] = 8976,
  [SMALL_STATE(277)] = 8991,
  [SMALL_STATE(278)] = 9006,
  [SMALL_STATE(279)] = 9019,
  [SMALL_STATE(280)] = 9032,
  [SMALL_STATE(281)] = 9047,
  [SMALL_STATE(282)] = 9060,
  [SMALL_STATE(283)] = 9075,
  [SMALL_STATE(284)] = 9086,
  [SMALL_STATE(285)] = 9101,
  [SMALL_STATE(286)] = 9112,
  [SMALL_STATE(287)] = 9129,
  [SMALL_STATE(288)] = 9142,
  [SMALL_STATE(289)] = 9159,
  [SMALL_STATE(290)] = 9174,
  [SMALL_STATE(291)] = 9191,
  [SMALL_STATE(292)] = 9207,
  [SMALL_STATE(293)] = 9221,
  [SMALL_STATE(294)] = 9235,
  [SMALL_STATE(295)] = 9249,
  [SMALL_STATE(296)] = 9263,
  [SMALL_STATE(297)] = 9277,
  [SMALL_STATE(298)] = 9285,
  [SMALL_STATE(299)] = 9295,
  [SMALL_STATE(300)] = 9305,
  [SMALL_STATE(301)] = 9319,
  [SMALL_STATE(302)] = 9335,
  [SMALL_STATE(303)] = 9345,
  [SMALL_STATE(304)] = 9357,
  [SMALL_STATE(305)] = 9371,
  [SMALL_STATE(306)] = 9387,
  [SMALL_STATE(307)] = 9399,
  [SMALL_STATE(308)] = 9415,
  [SMALL_STATE(309)] = 9431,
  [SMALL_STATE(310)] = 9447,
  [SMALL_STATE(311)] = 9457,
  [SMALL_STATE(312)] = 9471,
  [SMALL_STATE(313)] = 9481,
  [SMALL_STATE(314)] = 9491,
  [SMALL_STATE(315)] = 9501,
  [SMALL_STATE(316)] = 9511,
  [SMALL_STATE(317)] = 9527,
  [SMALL_STATE(318)] = 9539,
  [SMALL_STATE(319)] = 9555,
  [SMALL_STATE(320)] = 9571,
  [SMALL_STATE(321)] = 9587,
  [SMALL_STATE(322)] = 9597,
  [SMALL_STATE(323)] = 9607,
  [SMALL_STATE(324)] = 9617,
  [SMALL_STATE(325)] = 9631,
  [SMALL_STATE(326)] = 9643,
  [SMALL_STATE(327)] = 9655,
  [SMALL_STATE(328)] = 9663,
  [SMALL_STATE(329)] = 9675,
  [SMALL_STATE(330)] = 9689,
  [SMALL_STATE(331)] = 9701,
  [SMALL_STATE(332)] = 9713,
  [SMALL_STATE(333)] = 9723,
  [SMALL_STATE(334)] = 9733,
  [SMALL_STATE(335)] = 9743,
  [SMALL_STATE(336)] = 9755,
  [SMALL_STATE(337)] = 9769,
  [SMALL_STATE(338)] = 9779,
  [SMALL_STATE(339)] = 9789,
  [SMALL_STATE(340)] = 9801,
  [SMALL_STATE(341)] = 9811,
  [SMALL_STATE(342)] = 9827,
  [SMALL_STATE(343)] = 9843,
  [SMALL_STATE(344)] = 9857,
  [SMALL_STATE(345)] = 9873,
  [SMALL_STATE(346)] = 9889,
  [SMALL_STATE(347)] = 9903,
  [SMALL_STATE(348)] = 9915,
  [SMALL_STATE(349)] = 9929,
  [SMALL_STATE(350)] = 9939,
  [SMALL_STATE(351)] = 9953,
  [SMALL_STATE(352)] = 9969,
  [SMALL_STATE(353)] = 9983,
  [SMALL_STATE(354)] = 9994,
  [SMALL_STATE(355)] = 10003,
  [SMALL_STATE(356)] = 10016,
  [SMALL_STATE(357)] = 10029,
  [SMALL_STATE(358)] = 10042,
  [SMALL_STATE(359)] = 10055,
  [SMALL_STATE(360)] = 10068,
  [SMALL_STATE(361)] = 10081,
  [SMALL_STATE(362)] = 10094,
  [SMALL_STATE(363)] = 10105,
  [SMALL_STATE(364)] = 10116,
  [SMALL_STATE(365)] = 10127,
  [SMALL_STATE(366)] = 10140,
  [SMALL_STATE(367)] = 10153,
  [SMALL_STATE(368)] = 10166,
  [SMALL_STATE(369)] = 10179,
  [SMALL_STATE(370)] = 10192,
  [SMALL_STATE(371)] = 10205,
  [SMALL_STATE(372)] = 10216,
  [SMALL_STATE(373)] = 10227,
  [SMALL_STATE(374)] = 10240,
  [SMALL_STATE(375)] = 10253,
  [SMALL_STATE(376)] = 10266,
  [SMALL_STATE(377)] = 10279,
  [SMALL_STATE(378)] = 10292,
  [SMALL_STATE(379)] = 10305,
  [SMALL_STATE(380)] = 10318,
  [SMALL_STATE(381)] = 10329,
  [SMALL_STATE(382)] = 10342,
  [SMALL_STATE(383)] = 10355,
  [SMALL_STATE(384)] = 10368,
  [SMALL_STATE(385)] = 10381,
  [SMALL_STATE(386)] = 10392,
  [SMALL_STATE(387)] = 10405,
  [SMALL_STATE(388)] = 10418,
  [SMALL_STATE(389)] = 10431,
  [SMALL_STATE(390)] = 10444,
  [SMALL_STATE(391)] = 10453,
  [SMALL_STATE(392)] = 10464,
  [SMALL_STATE(393)] = 10475,
  [SMALL_STATE(394)] = 10488,
  [SMALL_STATE(395)] = 10501,
  [SMALL_STATE(396)] = 10514,
  [SMALL_STATE(397)] = 10527,
  [SMALL_STATE(398)] = 10540,
  [SMALL_STATE(399)] = 10553,
  [SMALL_STATE(400)] = 10566,
  [SMALL_STATE(401)] = 10579,
  [SMALL_STATE(402)] = 10590,
  [SMALL_STATE(403)] = 10599,
  [SMALL_STATE(404)] = 10612,
  [SMALL_STATE(405)] = 10621,
  [SMALL_STATE(406)] = 10630,
  [SMALL_STATE(407)] = 10643,
  [SMALL_STATE(408)] = 10656,
  [SMALL_STATE(409)] = 10665,
  [SMALL_STATE(410)] = 10676,
  [SMALL_STATE(411)] = 10689,
  [SMALL_STATE(412)] = 10698,
  [SMALL_STATE(413)] = 10711,
  [SMALL_STATE(414)] = 10720,
  [SMALL_STATE(415)] = 10733,
  [SMALL_STATE(416)] = 10746,
  [SMALL_STATE(417)] = 10759,
  [SMALL_STATE(418)] = 10772,
  [SMALL_STATE(419)] = 10781,
  [SMALL_STATE(420)] = 10790,
  [SMALL_STATE(421)] = 10801,
  [SMALL_STATE(422)] = 10810,
  [SMALL_STATE(423)] = 10823,
  [SMALL_STATE(424)] = 10836,
  [SMALL_STATE(425)] = 10849,
  [SMALL_STATE(426)] = 10862,
  [SMALL_STATE(427)] = 10873,
  [SMALL_STATE(428)] = 10886,
  [SMALL_STATE(429)] = 10899,
  [SMALL_STATE(430)] = 10912,
  [SMALL_STATE(431)] = 10925,
  [SMALL_STATE(432)] = 10938,
  [SMALL_STATE(433)] = 10951,
  [SMALL_STATE(434)] = 10964,
  [SMALL_STATE(435)] = 10977,
  [SMALL_STATE(436)] = 10990,
  [SMALL_STATE(437)] = 11003,
  [SMALL_STATE(438)] = 11016,
  [SMALL_STATE(439)] = 11029,
  [SMALL_STATE(440)] = 11038,
  [SMALL_STATE(441)] = 11051,
  [SMALL_STATE(442)] = 11060,
  [SMALL_STATE(443)] = 11073,
  [SMALL_STATE(444)] = 11082,
  [SMALL_STATE(445)] = 11090,
  [SMALL_STATE(446)] = 11098,
  [SMALL_STATE(447)] = 11108,
  [SMALL_STATE(448)] = 11118,
  [SMALL_STATE(449)] = 11128,
  [SMALL_STATE(450)] = 11138,
  [SMALL_STATE(451)] = 11148,
  [SMALL_STATE(452)] = 11158,
  [SMALL_STATE(453)] = 11168,
  [SMALL_STATE(454)] = 11178,
  [SMALL_STATE(455)] = 11188,
  [SMALL_STATE(456)] = 11198,
  [SMALL_STATE(457)] = 11208,
  [SMALL_STATE(458)] = 11218,
  [SMALL_STATE(459)] = 11228,
  [SMALL_STATE(460)] = 11238,
  [SMALL_STATE(461)] = 11248,
  [SMALL_STATE(462)] = 11258,
  [SMALL_STATE(463)] = 11268,
  [SMALL_STATE(464)] = 11278,
  [SMALL_STATE(465)] = 11288,
  [SMALL_STATE(466)] = 11298,
  [SMALL_STATE(467)] = 11308,
  [SMALL_STATE(468)] = 11318,
  [SMALL_STATE(469)] = 11328,
  [SMALL_STATE(470)] = 11338,
  [SMALL_STATE(471)] = 11348,
  [SMALL_STATE(472)] = 11358,
  [SMALL_STATE(473)] = 11368,
  [SMALL_STATE(474)] = 11378,
  [SMALL_STATE(475)] = 11386,
  [SMALL_STATE(476)] = 11396,
  [SMALL_STATE(477)] = 11406,
  [SMALL_STATE(478)] = 11416,
  [SMALL_STATE(479)] = 11426,
  [SMALL_STATE(480)] = 11436,
  [SMALL_STATE(481)] = 11446,
  [SMALL_STATE(482)] = 11456,
  [SMALL_STATE(483)] = 11466,
  [SMALL_STATE(484)] = 11476,
  [SMALL_STATE(485)] = 11486,
  [SMALL_STATE(486)] = 11496,
  [SMALL_STATE(487)] = 11506,
  [SMALL_STATE(488)] = 11516,
  [SMALL_STATE(489)] = 11526,
  [SMALL_STATE(490)] = 11534,
  [SMALL_STATE(491)] = 11544,
  [SMALL_STATE(492)] = 11551,
  [SMALL_STATE(493)] = 11558,
  [SMALL_STATE(494)] = 11565,
  [SMALL_STATE(495)] = 11572,
  [SMALL_STATE(496)] = 11579,
  [SMALL_STATE(497)] = 11586,
  [SMALL_STATE(498)] = 11593,
  [SMALL_STATE(499)] = 11600,
  [SMALL_STATE(500)] = 11607,
  [SMALL_STATE(501)] = 11614,
  [SMALL_STATE(502)] = 11621,
  [SMALL_STATE(503)] = 11628,
  [SMALL_STATE(504)] = 11635,
  [SMALL_STATE(505)] = 11642,
  [SMALL_STATE(506)] = 11649,
  [SMALL_STATE(507)] = 11656,
  [SMALL_STATE(508)] = 11663,
  [SMALL_STATE(509)] = 11670,
  [SMALL_STATE(510)] = 11677,
  [SMALL_STATE(511)] = 11684,
  [SMALL_STATE(512)] = 11691,
  [SMALL_STATE(513)] = 11698,
  [SMALL_STATE(514)] = 11705,
  [SMALL_STATE(515)] = 11712,
  [SMALL_STATE(516)] = 11719,
  [SMALL_STATE(517)] = 11726,
  [SMALL_STATE(518)] = 11733,
  [SMALL_STATE(519)] = 11740,
  [SMALL_STATE(520)] = 11747,
  [SMALL_STATE(521)] = 11754,
  [SMALL_STATE(522)] = 11761,
  [SMALL_STATE(523)] = 11768,
  [SMALL_STATE(524)] = 11775,
  [SMALL_STATE(525)] = 11782,
  [SMALL_STATE(526)] = 11789,
  [SMALL_STATE(527)] = 11796,
  [SMALL_STATE(528)] = 11803,
  [SMALL_STATE(529)] = 11810,
  [SMALL_STATE(530)] = 11817,
  [SMALL_STATE(531)] = 11824,
  [SMALL_STATE(532)] = 11831,
  [SMALL_STATE(533)] = 11838,
  [SMALL_STATE(534)] = 11845,
  [SMALL_STATE(535)] = 11852,
  [SMALL_STATE(536)] = 11859,
  [SMALL_STATE(537)] = 11866,
  [SMALL_STATE(538)] = 11873,
  [SMALL_STATE(539)] = 11880,
  [SMALL_STATE(540)] = 11887,
  [SMALL_STATE(541)] = 11894,
  [SMALL_STATE(542)] = 11901,
  [SMALL_STATE(543)] = 11908,
  [SMALL_STATE(544)] = 11915,
  [SMALL_STATE(545)] = 11922,
  [SMALL_STATE(546)] = 11929,
  [SMALL_STATE(547)] = 11936,
  [SMALL_STATE(548)] = 11943,
  [SMALL_STATE(549)] = 11950,
  [SMALL_STATE(550)] = 11957,
  [SMALL_STATE(551)] = 11964,
  [SMALL_STATE(552)] = 11971,
  [SMALL_STATE(553)] = 11978,
  [SMALL_STATE(554)] = 11985,
  [SMALL_STATE(555)] = 11992,
  [SMALL_STATE(556)] = 11999,
  [SMALL_STATE(557)] = 12006,
  [SMALL_STATE(558)] = 12013,
  [SMALL_STATE(559)] = 12020,
  [SMALL_STATE(560)] = 12027,
  [SMALL_STATE(561)] = 12034,
  [SMALL_STATE(562)] = 12041,
  [SMALL_STATE(563)] = 12048,
  [SMALL_STATE(564)] = 12055,
  [SMALL_STATE(565)] = 12062,
  [SMALL_STATE(566)] = 12069,
  [SMALL_STATE(567)] = 12076,
  [SMALL_STATE(568)] = 12083,
  [SMALL_STATE(569)] = 12090,
  [SMALL_STATE(570)] = 12097,
  [SMALL_STATE(571)] = 12104,
  [SMALL_STATE(572)] = 12111,
  [SMALL_STATE(573)] = 12118,
  [SMALL_STATE(574)] = 12125,
  [SMALL_STATE(575)] = 12132,
  [SMALL_STATE(576)] = 12139,
  [SMALL_STATE(577)] = 12146,
  [SMALL_STATE(578)] = 12153,
  [SMALL_STATE(579)] = 12160,
  [SMALL_STATE(580)] = 12167,
  [SMALL_STATE(581)] = 12174,
  [SMALL_STATE(582)] = 12181,
  [SMALL_STATE(583)] = 12188,
  [SMALL_STATE(584)] = 12195,
  [SMALL_STATE(585)] = 12202,
  [SMALL_STATE(586)] = 12209,
  [SMALL_STATE(587)] = 12216,
  [SMALL_STATE(588)] = 12223,
  [SMALL_STATE(589)] = 12230,
  [SMALL_STATE(590)] = 12237,
  [SMALL_STATE(591)] = 12244,
  [SMALL_STATE(592)] = 12251,
  [SMALL_STATE(593)] = 12258,
  [SMALL_STATE(594)] = 12265,
  [SMALL_STATE(595)] = 12272,
  [SMALL_STATE(596)] = 12279,
  [SMALL_STATE(597)] = 12286,
  [SMALL_STATE(598)] = 12293,
  [SMALL_STATE(599)] = 12300,
  [SMALL_STATE(600)] = 12307,
  [SMALL_STATE(601)] = 12314,
  [SMALL_STATE(602)] = 12321,
  [SMALL_STATE(603)] = 12328,
  [SMALL_STATE(604)] = 12335,
  [SMALL_STATE(605)] = 12342,
  [SMALL_STATE(606)] = 12349,
  [SMALL_STATE(607)] = 12356,
  [SMALL_STATE(608)] = 12363,
  [SMALL_STATE(609)] = 12370,
  [SMALL_STATE(610)] = 12377,
  [SMALL_STATE(611)] = 12384,
  [SMALL_STATE(612)] = 12391,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hurl_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(332),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 3),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [17] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 3),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(403),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(400),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(399),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(398),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(397),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(396),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(524),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(526),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(527),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(343),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(231),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(530),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(239),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(241),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(548),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(583),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(283),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 2),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 2),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 4),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 4),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 5),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 5),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response, 3),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_response, 3),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(438),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(377),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__comment_or_new_line_repeat1, 2),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__comment_or_new_line_repeat1, 2), SHIFT_REPEAT(10),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__comment_or_new_line_repeat1, 2),
  [92] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__comment_or_new_line_repeat1, 2), SHIFT_REPEAT(10),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_options_section, 3),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_options_section, 3),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(517),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(516),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(515),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(514),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(513),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(512),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(511),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(510),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(509),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(508),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(507),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(506),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(505),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response, 4),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_response, 4),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_options_section_repeat1, 2),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_options_section_repeat1, 2),
  [133] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_options_section_repeat1, 2), SHIFT_REPEAT(517),
  [136] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_options_section_repeat1, 2), SHIFT_REPEAT(516),
  [139] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_options_section_repeat1, 2), SHIFT_REPEAT(515),
  [142] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_options_section_repeat1, 2), SHIFT_REPEAT(514),
  [145] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_options_section_repeat1, 2), SHIFT_REPEAT(513),
  [148] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_options_section_repeat1, 2), SHIFT_REPEAT(512),
  [151] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_options_section_repeat1, 2), SHIFT_REPEAT(511),
  [154] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_options_section_repeat1, 2), SHIFT_REPEAT(510),
  [157] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_options_section_repeat1, 2), SHIFT_REPEAT(509),
  [160] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_options_section_repeat1, 2), SHIFT_REPEAT(508),
  [163] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_options_section_repeat1, 2), SHIFT_REPEAT(507),
  [166] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_options_section_repeat1, 2), SHIFT_REPEAT(506),
  [169] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_options_section_repeat1, 2), SHIFT_REPEAT(505),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_options_section, 2),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_options_section, 2),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__comment_or_new_line, 1),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__comment_or_new_line, 1),
  [182] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_asserts_section, 2),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_asserts_section, 2),
  [188] = {.entry = {.count = 1, .reusable = false}}, SHIFT(472),
  [190] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [192] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [194] = {.entry = {.count = 1, .reusable = false}}, SHIFT(476),
  [196] = {.entry = {.count = 1, .reusable = false}}, SHIFT(478),
  [198] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [200] = {.entry = {.count = 1, .reusable = false}}, SHIFT(479),
  [202] = {.entry = {.count = 1, .reusable = false}}, SHIFT(481),
  [204] = {.entry = {.count = 1, .reusable = false}}, SHIFT(304),
  [206] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [208] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [210] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [212] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_asserts_section, 3),
  [216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_asserts_section, 3),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_asserts_section_repeat1, 2),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_asserts_section_repeat1, 2),
  [222] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_asserts_section_repeat1, 2), SHIFT_REPEAT(472),
  [225] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_asserts_section_repeat1, 2), SHIFT_REPEAT(92),
  [228] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_asserts_section_repeat1, 2), SHIFT_REPEAT(94),
  [231] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_asserts_section_repeat1, 2), SHIFT_REPEAT(476),
  [234] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_asserts_section_repeat1, 2), SHIFT_REPEAT(478),
  [237] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_asserts_section_repeat1, 2), SHIFT_REPEAT(95),
  [240] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_asserts_section_repeat1, 2), SHIFT_REPEAT(479),
  [243] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_asserts_section_repeat1, 2), SHIFT_REPEAT(481),
  [246] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_asserts_section_repeat1, 2), SHIFT_REPEAT(304),
  [249] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_asserts_section_repeat1, 2), SHIFT_REPEAT(86),
  [252] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_asserts_section_repeat1, 2), SHIFT_REPEAT(96),
  [255] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_asserts_section_repeat1, 2), SHIFT_REPEAT(98),
  [258] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_asserts_section_repeat1, 2), SHIFT_REPEAT(97),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response, 5),
  [263] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_response, 5),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [267] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [273] = {.entry = {.count = 1, .reusable = false}}, SHIFT(232),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [277] = {.entry = {.count = 1, .reusable = false}}, SHIFT(238),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(464),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(588),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(560),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(558),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(557),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(556),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(553),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compressed_option, 4),
  [317] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_compressed_option, 4),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insecure_option, 4),
  [321] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_insecure_option, 4),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_follow_redirect_option, 4),
  [325] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_follow_redirect_option, 4),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ca_certificate_option, 4),
  [329] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ca_certificate_option, 4),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option, 1),
  [333] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_option, 1),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_max_redirs_option, 4),
  [337] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_max_redirs_option, 4),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_very_verbose_option, 4),
  [341] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_very_verbose_option, 4),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_verbose_option, 4),
  [345] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_verbose_option, 4),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ca_certificate_option, 3),
  [349] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ca_certificate_option, 3),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_option, 4),
  [353] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_option, 4),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_retry_max_count_option, 4),
  [357] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_retry_max_count_option, 4),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_retry_interval_option, 4),
  [361] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_retry_interval_option, 4),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_retry_option, 4),
  [365] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_retry_option, 4),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_proxy_option, 4),
  [369] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_proxy_option, 4),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path_as_is_option, 4),
  [373] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path_as_is_option, 4),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multipart_form_data_section, 4),
  [377] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multipart_form_data_section, 4),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multipart_form_data_section, 5),
  [383] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multipart_form_data_section, 5),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multipart_form_data_section, 3),
  [387] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multipart_form_data_section, 3),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_request_repeat1, 2),
  [391] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_request_repeat1, 2),
  [393] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat1, 2), SHIFT_REPEAT(231),
  [396] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_request_repeat1, 2), SHIFT_REPEAT(530),
  [399] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_request_repeat1, 2), SHIFT_REPEAT(366),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_form_params_section, 5),
  [404] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_form_params_section, 5),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_string_params_section, 4),
  [408] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query_string_params_section, 4),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cookies_section, 5),
  [412] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cookies_section, 5),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cookies_section, 4),
  [416] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cookies_section, 4),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_form_params_section, 4),
  [420] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_form_params_section, 4),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_string_params_section, 5),
  [424] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query_string_params_section, 5),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cookies_section, 3),
  [428] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cookies_section, 3),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_string_params_section, 3),
  [432] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query_string_params_section, 3),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_form_params_section, 3),
  [436] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_form_params_section, 3),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_request_repeat2, 2),
  [440] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_request_repeat2, 2),
  [442] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat2, 2), SHIFT_REPEAT(403),
  [445] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat2, 2), SHIFT_REPEAT(400),
  [448] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat2, 2), SHIFT_REPEAT(399),
  [451] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat2, 2), SHIFT_REPEAT(398),
  [454] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat2, 2), SHIFT_REPEAT(397),
  [457] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat2, 2), SHIFT_REPEAT(396),
  [460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_hurl_file_repeat2, 2),
  [462] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_hurl_file_repeat2, 2), SHIFT_REPEAT(56),
  [465] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_hurl_file_repeat2, 2),
  [467] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_hurl_file_repeat2, 2), SHIFT_REPEAT(56),
  [470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assert, 3),
  [472] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assert, 3),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assert, 4),
  [476] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assert, 4),
  [478] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__comment_or_new_line_repeat1, 2), SHIFT_REPEAT(55),
  [481] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__comment_or_new_line_repeat1, 2), SHIFT_REPEAT(55),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [486] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 2),
  [490] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 2),
  [492] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_captures_section, 2),
  [494] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_captures_section, 2),
  [496] = {.entry = {.count = 1, .reusable = false}}, SHIFT(261),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(543),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_captures_section, 3),
  [504] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_captures_section, 3),
  [506] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_captures_section_repeat1, 2),
  [508] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_captures_section_repeat1, 2),
  [510] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_captures_section_repeat1, 2), SHIFT_REPEAT(261),
  [513] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_captures_section_repeat1, 2), SHIFT_REPEAT(543),
  [516] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_captures_section_repeat1, 2), SHIFT_REPEAT(359),
  [519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_basic_auth_section, 4),
  [521] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_basic_auth_section, 4),
  [523] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request_section, 1),
  [525] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request_section, 1),
  [527] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_capture_repeat1, 2), SHIFT_REPEAT(311),
  [530] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_capture_repeat1, 2),
  [532] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_capture_repeat1, 2),
  [534] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_capture_repeat1, 2), SHIFT_REPEAT(81),
  [537] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_capture_repeat1, 2), SHIFT_REPEAT(82),
  [540] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_capture_repeat1, 2), SHIFT_REPEAT(83),
  [543] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_capture_repeat1, 2), SHIFT_REPEAT(84),
  [546] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_capture_repeat1, 2), SHIFT_REPEAT(73),
  [549] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_capture_repeat1, 2), SHIFT_REPEAT(77),
  [552] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_response_repeat1, 2),
  [554] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_response_repeat1, 2),
  [556] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_response_repeat1, 2), SHIFT_REPEAT(438),
  [559] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_response_repeat1, 2), SHIFT_REPEAT(377),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [564] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [566] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__comment_or_new_line_repeat1, 2), SHIFT_REPEAT(68),
  [569] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__comment_or_new_line_repeat1, 2), SHIFT_REPEAT(68),
  [572] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_capture, 4),
  [574] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_capture, 4),
  [576] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_capture, 5),
  [578] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_capture, 5),
  [580] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response_section, 1),
  [582] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_response_section, 1),
  [584] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_html_decode_filter, 1),
  [586] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_html_decode_filter, 1),
  [588] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regex_filter, 2),
  [590] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_regex_filter, 2),
  [592] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_string, 2),
  [594] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_string, 2),
  [596] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regex, 2),
  [598] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_regex, 2),
  [600] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_to_int_filter, 1),
  [602] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_to_int_filter, 1),
  [604] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regex, 3),
  [606] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_regex, 3),
  [608] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_string, 3),
  [610] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_string, 3),
  [612] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filter, 1),
  [614] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_filter, 1),
  [616] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_count_filter, 1),
  [618] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_count_filter, 1),
  [620] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url_encode_filter, 1),
  [622] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_url_encode_filter, 1),
  [624] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url_decode_filter, 1),
  [626] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_url_decode_filter, 1),
  [628] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_html_encode_filter, 1),
  [630] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_html_encode_filter, 1),
  [632] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xpath_query, 2),
  [634] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xpath_query, 2),
  [636] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_duration_query, 1),
  [638] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_duration_query, 1),
  [640] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cookie_query, 2),
  [642] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cookie_query, 2),
  [644] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regex_query, 2),
  [646] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_regex_query, 2),
  [648] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query, 1),
  [650] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query, 1),
  [652] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_query, 2),
  [654] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header_query, 2),
  [656] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jsonpath_query, 2),
  [658] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_jsonpath_query, 2),
  [660] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_status_query, 1),
  [662] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_status_query, 1),
  [664] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_query, 2),
  [666] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_query, 2),
  [668] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url_query, 1),
  [670] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_url_query, 1),
  [672] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body_query, 1),
  [674] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_body_query, 1),
  [676] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sha256_query, 1),
  [678] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sha256_query, 1),
  [680] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bytes_query, 1),
  [682] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bytes_query, 1),
  [684] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_md5_query, 1),
  [686] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_md5_query, 1),
  [688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(471),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(470),
  [696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(469),
  [698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(468),
  [702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(467),
  [704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [714] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entry, 1),
  [716] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_entry, 1),
  [718] = {.entry = {.count = 1, .reusable = false}}, SHIFT(444),
  [720] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hurl_file, 1),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(527),
  [726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(548),
  [734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(583),
  [736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [738] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 2),
  [740] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_body, 2),
  [742] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 6),
  [744] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 6),
  [746] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_key_value, 2),
  [748] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [750] = {.entry = {.count = 1, .reusable = false}}, SHIFT(280),
  [752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(417),
  [754] = {.entry = {.count = 1, .reusable = false}}, SHIFT(253),
  [756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(570),
  [758] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_hurl_file_repeat1, 2),
  [760] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_hurl_file_repeat1, 2), SHIFT_REPEAT(332),
  [763] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_hurl_file_repeat1, 2),
  [765] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entry, 2),
  [767] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_entry, 2),
  [769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [771] = {.entry = {.count = 1, .reusable = false}}, SHIFT(228),
  [773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [783] = {.entry = {.count = 1, .reusable = false}}, SHIFT(584),
  [785] = {.entry = {.count = 1, .reusable = false}}, SHIFT(544),
  [787] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [789] = {.entry = {.count = 1, .reusable = false}}, SHIFT(240),
  [791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [793] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [797] = {.entry = {.count = 1, .reusable = false}}, SHIFT(296),
  [799] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [801] = {.entry = {.count = 1, .reusable = false}}, SHIFT(221),
  [803] = {.entry = {.count = 1, .reusable = false}}, SHIFT(220),
  [805] = {.entry = {.count = 1, .reusable = false}}, SHIFT(219),
  [807] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [809] = {.entry = {.count = 1, .reusable = false}}, SHIFT(216),
  [811] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [813] = {.entry = {.count = 1, .reusable = false}}, SHIFT(586),
  [815] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response, 6),
  [817] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_response, 6),
  [819] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_xml_tag_repeat1, 2), SHIFT_REPEAT(524),
  [822] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_xml_tag_repeat1, 2), SHIFT_REPEAT(584),
  [825] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_xml_tag_repeat1, 2),
  [827] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_xml_tag_repeat1, 2), SHIFT_REPEAT(197),
  [830] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_xml_tag_repeat1, 2), SHIFT_REPEAT(240),
  [833] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_xml_tag_repeat1, 2), SHIFT_REPEAT(367),
  [836] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entry, 3),
  [838] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_entry, 3),
  [840] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 1),
  [842] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_capture_repeat1, 2), SHIFT_REPEAT(296),
  [845] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_capture_repeat1, 2), SHIFT_REPEAT(222),
  [848] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_capture_repeat1, 2), SHIFT_REPEAT(221),
  [851] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_capture_repeat1, 2), SHIFT_REPEAT(220),
  [854] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_capture_repeat1, 2), SHIFT_REPEAT(219),
  [857] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_capture_repeat1, 2), SHIFT_REPEAT(183),
  [860] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_capture_repeat1, 2), SHIFT_REPEAT(216),
  [863] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 2),
  [865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [867] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_string, 1),
  [869] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_string, 1),
  [871] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_value_string_repeat1, 2),
  [873] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_string_repeat1, 2), SHIFT_REPEAT(197),
  [876] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_string_repeat1, 2), SHIFT_REPEAT(240),
  [879] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_value_string_repeat1, 2), SHIFT_REPEAT(367),
  [882] = {.entry = {.count = 1, .reusable = false}}, SHIFT(385),
  [884] = {.entry = {.count = 1, .reusable = false}}, SHIFT(245),
  [886] = {.entry = {.count = 1, .reusable = false}}, SHIFT(356),
  [888] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [890] = {.entry = {.count = 1, .reusable = false}}, SHIFT(337),
  [892] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [894] = {.entry = {.count = 1, .reusable = false}}, SHIFT(361),
  [896] = {.entry = {.count = 1, .reusable = false}}, SHIFT(282),
  [898] = {.entry = {.count = 1, .reusable = false}}, SHIFT(211),
  [900] = {.entry = {.count = 1, .reusable = false}}, SHIFT(493),
  [902] = {.entry = {.count = 1, .reusable = false}}, SHIFT(213),
  [904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [906] = {.entry = {.count = 1, .reusable = false}}, SHIFT(218),
  [908] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [910] = {.entry = {.count = 1, .reusable = false}}, SHIFT(284),
  [912] = {.entry = {.count = 1, .reusable = false}}, SHIFT(550),
  [914] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_quoted_string_repeat1, 2),
  [916] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_string_repeat1, 2), SHIFT_REPEAT(337),
  [919] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_string_repeat1, 2), SHIFT_REPEAT(170),
  [922] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_string_repeat1, 2), SHIFT_REPEAT(361),
  [925] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [927] = {.entry = {.count = 1, .reusable = false}}, SHIFT(272),
  [929] = {.entry = {.count = 1, .reusable = false}}, SHIFT(599),
  [931] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_string_repeat1, 2), SHIFT_REPEAT(203),
  [934] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_string_repeat1, 2), SHIFT_REPEAT(280),
  [937] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_value_string_repeat1, 2), SHIFT_REPEAT(417),
  [940] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multiline_string_repeat1, 2), SHIFT_REPEAT(214),
  [943] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multiline_string_repeat1, 2), SHIFT_REPEAT(211),
  [946] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_multiline_string_repeat1, 2),
  [948] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multiline_string_repeat1, 2), SHIFT_REPEAT(213),
  [951] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_multiline_string_repeat1, 2), SHIFT_REPEAT(365),
  [954] = {.entry = {.count = 1, .reusable = false}}, SHIFT(525),
  [956] = {.entry = {.count = 1, .reusable = false}}, SHIFT(392),
  [958] = {.entry = {.count = 1, .reusable = false}}, SHIFT(246),
  [960] = {.entry = {.count = 1, .reusable = false}}, SHIFT(375),
  [962] = {.entry = {.count = 1, .reusable = false}}, SHIFT(247),
  [964] = {.entry = {.count = 1, .reusable = false}}, SHIFT(540),
  [966] = {.entry = {.count = 1, .reusable = false}}, SHIFT(592),
  [968] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [970] = {.entry = {.count = 1, .reusable = false}}, SHIFT(389),
  [972] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_key_string_repeat1, 2),
  [974] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_key_string_repeat1, 2),
  [976] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_string_repeat1, 2), SHIFT_REPEAT(231),
  [979] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_string_repeat1, 2), SHIFT_REPEAT(530),
  [982] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_string_repeat1, 2), SHIFT_REPEAT(366),
  [985] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_string, 1),
  [987] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_key_string, 1),
  [989] = {.entry = {.count = 1, .reusable = false}}, SHIFT(593),
  [991] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_oneline_string_repeat1, 2), SHIFT_REPEAT(247),
  [994] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_oneline_string_repeat1, 2),
  [996] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_oneline_string_repeat1, 2), SHIFT_REPEAT(592),
  [999] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_oneline_string_repeat1, 2), SHIFT_REPEAT(373),
  [1002] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_value_string_content_repeat1, 2),
  [1004] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_string_content_repeat1, 2), SHIFT_REPEAT(197),
  [1007] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_string_content_repeat1, 2), SHIFT_REPEAT(240),
  [1010] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_value_string_content_repeat1, 2),
  [1012] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_string_content, 1),
  [1014] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_string_content, 1),
  [1016] = {.entry = {.count = 1, .reusable = false}}, SHIFT(594),
  [1018] = {.entry = {.count = 1, .reusable = false}}, SHIFT(202),
  [1020] = {.entry = {.count = 1, .reusable = false}}, SHIFT(347),
  [1022] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [1024] = {.entry = {.count = 1, .reusable = false}}, SHIFT(536),
  [1026] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [1028] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_filename, 1),
  [1030] = {.entry = {.count = 1, .reusable = false}}, SHIFT(314),
  [1032] = {.entry = {.count = 1, .reusable = false}}, SHIFT(315),
  [1034] = {.entry = {.count = 1, .reusable = false}}, SHIFT(484),
  [1036] = {.entry = {.count = 1, .reusable = false}}, SHIFT(323),
  [1038] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [1040] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer, 1),
  [1042] = {.entry = {.count = 1, .reusable = false}}, SHIFT(334),
  [1044] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_string_repeat1, 2), SHIFT_REPEAT(261),
  [1047] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_string_repeat1, 2), SHIFT_REPEAT(543),
  [1050] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_string_repeat1, 2), SHIFT_REPEAT(359),
  [1053] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_name, 2),
  [1055] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_filename_repeat1, 2),
  [1057] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_filename_repeat1, 2), SHIFT_REPEAT(385),
  [1060] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_filename_repeat1, 2), SHIFT_REPEAT(245),
  [1063] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_filename_repeat1, 2), SHIFT_REPEAT(356),
  [1066] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_string_repeat1, 2), SHIFT_REPEAT(253),
  [1069] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_string_repeat1, 2), SHIFT_REPEAT(570),
  [1072] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_string_repeat1, 2), SHIFT_REPEAT(376),
  [1075] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_integer_repeat1, 2),
  [1077] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_integer_repeat1, 2), SHIFT_REPEAT(224),
  [1080] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_filename_repeat1, 2), SHIFT_REPEAT(392),
  [1083] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_filename_repeat1, 2), SHIFT_REPEAT(246),
  [1086] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_filename_repeat1, 2), SHIFT_REPEAT(375),
  [1089] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_json_string_repeat1, 2),
  [1091] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_string_repeat1, 2), SHIFT_REPEAT(202),
  [1094] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_string_repeat1, 2), SHIFT_REPEAT(347),
  [1097] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_json_string_repeat1, 2), SHIFT_REPEAT(374),
  [1100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_quoted_string_content_repeat1, 2),
  [1102] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_string_content_repeat1, 2), SHIFT_REPEAT(337),
  [1105] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_string_content_repeat1, 2), SHIFT_REPEAT(170),
  [1108] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multiline_string_content_repeat1, 2), SHIFT_REPEAT(194),
  [1111] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multiline_string_content_repeat1, 2), SHIFT_REPEAT(211),
  [1114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_multiline_string_content_repeat1, 2),
  [1116] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multiline_string_content_repeat1, 2), SHIFT_REPEAT(213),
  [1119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_multiline_string_content_repeat1, 2),
  [1121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [1123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(475),
  [1125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(260),
  [1127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fraction, 2),
  [1129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__multiline_string_text, 2),
  [1131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(201),
  [1133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multiline_string_text, 2),
  [1135] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_string_content_repeat1, 2), SHIFT_REPEAT(203),
  [1138] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_string_content_repeat1, 2), SHIFT_REPEAT(280),
  [1141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__multiline_string_text_repeat1, 2),
  [1143] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__multiline_string_text_repeat1, 2), SHIFT_REPEAT(201),
  [1146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__multiline_string_text_repeat1, 2),
  [1148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [1150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(480),
  [1152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [1154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(454),
  [1156] = {.entry = {.count = 1, .reusable = false}}, SHIFT(338),
  [1158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_string_content, 1),
  [1160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_number, 1),
  [1162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [1164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [1166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [1168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(486),
  [1170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__multiline_string_text, 1),
  [1172] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [1174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multiline_string_text, 1),
  [1176] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [1178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline_string_content, 1),
  [1180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_string_content, 1),
  [1182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_digit, 1),
  [1184] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_oneline_string_content_repeat1, 2), SHIFT_REPEAT(247),
  [1187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_oneline_string_content_repeat1, 2),
  [1189] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_oneline_string_content_repeat1, 2), SHIFT_REPEAT(592),
  [1192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_oneline_string_content_repeat1, 2),
  [1194] = {.entry = {.count = 1, .reusable = false}}, SHIFT(601),
  [1196] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [1198] = {.entry = {.count = 1, .reusable = false}}, SHIFT(441),
  [1200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
  [1202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [1204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer, 1),
  [1206] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [1208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_string_content, 1),
  [1210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_key_string_content, 1),
  [1212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_value_string_text_repeat1, 2),
  [1214] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_string_text_repeat1, 2), SHIFT_REPEAT(233),
  [1217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_value_string_text_repeat1, 2),
  [1219] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_integer_repeat1, 2), SHIFT_REPEAT(283),
  [1222] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_integer_repeat1, 2),
  [1224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_key_string_content_repeat1, 2),
  [1226] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_key_string_content_repeat1, 2),
  [1228] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_string_content_repeat1, 2), SHIFT_REPEAT(235),
  [1231] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_string_content_repeat1, 2), SHIFT_REPEAT(530),
  [1234] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneline_string_content, 1),
  [1236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneline_string_content, 1),
  [1238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [1240] = {.entry = {.count = 1, .reusable = false}}, SHIFT(591),
  [1242] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_string_text, 1),
  [1244] = {.entry = {.count = 1, .reusable = false}}, SHIFT(233),
  [1246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_string_text, 1),
  [1248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(562),
  [1250] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_template, 3),
  [1252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template, 3),
  [1254] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unicode_char, 6),
  [1256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unicode_char, 6),
  [1258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exponent, 3),
  [1260] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_filename_content, 1),
  [1262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [1264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(477),
  [1266] = {.entry = {.count = 1, .reusable = false}}, SHIFT(328),
  [1268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_number, 2),
  [1270] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_regex_content, 1),
  [1272] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xml_close_tag, 3),
  [1274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xml_close_tag, 3),
  [1276] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_string_content_repeat1, 2), SHIFT_REPEAT(251),
  [1279] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_string_content_repeat1, 2), SHIFT_REPEAT(543),
  [1282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exponent, 2),
  [1284] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_string_content_repeat1, 2), SHIFT_REPEAT(254),
  [1287] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_string_content_repeat1, 2), SHIFT_REPEAT(570),
  [1290] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xml_tag, 2),
  [1292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xml_tag, 2),
  [1294] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_filename_content_repeat1, 2),
  [1296] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_filename_content_repeat1, 2), SHIFT_REPEAT(385),
  [1299] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_filename_content_repeat1, 2), SHIFT_REPEAT(257),
  [1302] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_filename_content_repeat1, 2), SHIFT_REPEAT(392),
  [1305] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_filename_content_repeat1, 2), SHIFT_REPEAT(259),
  [1308] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_string_escaped_char, 2),
  [1310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_string_escaped_char, 2),
  [1312] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fraction, 2),
  [1314] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xml_open_tag, 3),
  [1316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xml_open_tag, 3),
  [1318] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_regex_content_repeat1, 2), SHIFT_REPEAT(601),
  [1321] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_regex_content_repeat1, 2),
  [1323] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_regex_content_repeat1, 2), SHIFT_REPEAT(441),
  [1326] = {.entry = {.count = 1, .reusable = false}}, SHIFT(380),
  [1328] = {.entry = {.count = 1, .reusable = false}}, SHIFT(289),
  [1330] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_number, 1),
  [1332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(526),
  [1334] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xml_tag, 3),
  [1336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xml_tag, 3),
  [1338] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xml_prolog_tag, 3),
  [1340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xml_prolog_tag, 3),
  [1342] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_string_escaped_char, 3),
  [1344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_string_escaped_char, 3),
  [1346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [1348] = {.entry = {.count = 1, .reusable = false}}, SHIFT(274),
  [1350] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline_string_escaped_char, 3),
  [1352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_string_escaped_char, 3),
  [1354] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_multiline_string_content_repeat1, 1),
  [1356] = {.entry = {.count = 1, .reusable = false}}, SHIFT(521),
  [1358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_multiline_string_content_repeat1, 1),
  [1360] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__comment_or_new_line_repeat1, 2), SHIFT_REPEAT(274),
  [1363] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__comment_or_new_line_repeat1, 2), SHIFT_REPEAT(274),
  [1366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [1368] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_string_text_repeat1, 2), SHIFT_REPEAT(277),
  [1371] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline_string_escaped_char, 2),
  [1373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_string_escaped_char, 2),
  [1375] = {.entry = {.count = 1, .reusable = false}}, SHIFT(277),
  [1377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_value, 1),
  [1379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_key_string_repeat1, 1),
  [1381] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_value, 1),
  [1383] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_digit, 1),
  [1385] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_hurl_file_repeat2, 2), SHIFT_REPEAT(15),
  [1388] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_hurl_file_repeat2, 2), SHIFT_REPEAT(15),
  [1391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_string_escaped_char, 2),
  [1393] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_key_string_escaped_char, 2),
  [1395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [1397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hurl_file, 2),
  [1399] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_exponent, 3),
  [1401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [1403] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_number, 2),
  [1405] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_xml_repeat1, 2),
  [1407] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_xml_repeat1, 2), SHIFT_REPEAT(526),
  [1410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [1412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [1414] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_string_escaped_char, 2),
  [1416] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_invalid_quoted_string_escaped_char, 2),
  [1418] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_filename_escaped_char, 2),
  [1420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_string, 3),
  [1422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_oneline_hex_repeat1, 2),
  [1424] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_oneline_hex_repeat1, 2), SHIFT_REPEAT(418),
  [1427] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_string_escaped_char, 2),
  [1429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_string_escaped_char, 2),
  [1431] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneline_string_escaped_char, 3),
  [1433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneline_string_escaped_char, 3),
  [1435] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneline_string_escaped_char, 2),
  [1437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneline_string_escaped_char, 2),
  [1439] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneline_string_text, 2),
  [1441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneline_string_text, 2),
  [1443] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_string_content, 1),
  [1445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_string_content, 1),
  [1447] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_method, 1),
  [1449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method, 1),
  [1451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_string, 2),
  [1453] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hexdigit, 1),
  [1455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hexdigit, 1),
  [1457] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_exponent, 2),
  [1459] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_string_text, 1),
  [1461] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_string_escaped_char, 6),
  [1463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_string_escaped_char, 6),
  [1465] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_query_string_params_section_repeat1, 2), SHIFT_REPEAT(270),
  [1468] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_string_params_section_repeat1, 2), SHIFT_REPEAT(270),
  [1471] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_multipart_form_data_section_repeat1, 2), SHIFT_REPEAT(270),
  [1474] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multipart_form_data_section_repeat1, 2), SHIFT_REPEAT(270),
  [1477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(567),
  [1479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [1481] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_string_text, 1),
  [1483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_string_text, 1),
  [1485] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_string_escaped_char, 3),
  [1487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(494),
  [1489] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [1491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(606),
  [1493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [1495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [1497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [1499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [1501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [1503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [1505] = {.entry = {.count = 1, .reusable = false}}, SHIFT(327),
  [1507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_value, 2),
  [1509] = {.entry = {.count = 1, .reusable = false}}, SHIFT(610),
  [1511] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_file_value, 2),
  [1513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [1515] = {.entry = {.count = 1, .reusable = false}}, SHIFT(322),
  [1517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(563),
  [1519] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_json_array_repeat1, 2), SHIFT_REPEAT(117),
  [1522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_json_array_repeat1, 2),
  [1524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(555),
  [1526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [1528] = {.entry = {.count = 1, .reusable = false}}, SHIFT(270),
  [1530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(604),
  [1532] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_regex_escaped_char, 2),
  [1534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_array, 4),
  [1536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_object, 4),
  [1538] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_predicate_value, 1),
  [1540] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_predicate_value, 1),
  [1542] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_number, 3),
  [1544] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_greater_predicate, 2),
  [1546] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_greater_predicate, 2),
  [1548] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_array, 3),
  [1550] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_greater_or_equal_predicate, 2),
  [1552] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_greater_or_equal_predicate, 2),
  [1554] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_object, 3),
  [1556] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_less_predicate, 2),
  [1558] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_less_predicate, 2),
  [1560] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_less_or_equal_predicate, 2),
  [1562] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_less_or_equal_predicate, 2),
  [1564] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_null, 1),
  [1566] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_json_object_repeat1, 2),
  [1568] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_json_object_repeat1, 2), SHIFT_REPEAT(301),
  [1571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(518),
  [1573] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_value, 3),
  [1575] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_file_value, 3),
  [1577] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_value, 1),
  [1579] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_value, 1),
  [1581] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_value, 3),
  [1583] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_key_value, 3),
  [1585] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_object, 2),
  [1587] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_regex_text, 1),
  [1589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(522),
  [1591] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version, 1),
  [1593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(485),
  [1595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [1597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(448),
  [1599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(449),
  [1601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [1603] = {.entry = {.count = 1, .reusable = false}}, SHIFT(461),
  [1605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(446),
  [1607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(447),
  [1609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [1611] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_key_value, 3),
  [1613] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_predicate, 1),
  [1615] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_predicate, 1),
  [1617] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_string, 4),
  [1619] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline_string, 4),
  [1621] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneline_hex, 3),
  [1623] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneline_hex, 3),
  [1625] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneline_base64, 3),
  [1627] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneline_base64, 3),
  [1629] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneline_file, 3),
  [1631] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneline_file, 3),
  [1633] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_not_equal_predicate, 2),
  [1635] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_not_equal_predicate, 2),
  [1637] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_equal_predicate, 2),
  [1639] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_equal_predicate, 2),
  [1641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [1643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(426),
  [1645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [1647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [1649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [1651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [1653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [1655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [1657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [1659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [1661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [1663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [1665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [1667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [1669] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_object, 4),
  [1671] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_predicate, 2),
  [1673] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_predicate, 2),
  [1675] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_key_string, 1, .production_id = 1),
  [1677] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_string, 6),
  [1679] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline_string, 6),
  [1681] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_array, 4),
  [1683] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multipart_form_data_param, 1),
  [1685] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multipart_form_data_param, 1),
  [1687] = {.entry = {.count = 1, .reusable = false}}, SHIFT(535),
  [1689] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneline_file, 2),
  [1691] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneline_file, 2),
  [1693] = {.entry = {.count = 1, .reusable = false}}, SHIFT(538),
  [1695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(547),
  [1697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(499),
  [1699] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contain_predicate, 2),
  [1701] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_contain_predicate, 2),
  [1703] = {.entry = {.count = 1, .reusable = false}}, SHIFT(287),
  [1705] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_match_predicate, 2),
  [1707] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_match_predicate, 2),
  [1709] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_param, 4),
  [1711] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_file_param, 4),
  [1713] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_end_with_predicate, 2),
  [1715] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_end_with_predicate, 2),
  [1717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [1719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [1721] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_string, 3),
  [1723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [1725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(490),
  [1727] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xml, 2),
  [1729] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xml, 2),
  [1731] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneline_string, 3),
  [1733] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneline_string, 3),
  [1735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [1737] = {.entry = {.count = 1, .reusable = false}}, SHIFT(333),
  [1739] = {.entry = {.count = 1, .reusable = false}}, SHIFT(564),
  [1741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [1743] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_multipart_form_data_section_repeat1, 2),
  [1745] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_multipart_form_data_section_repeat1, 2),
  [1747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(497),
  [1749] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1),
  [1751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [1753] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_string, 3),
  [1755] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline_string, 3),
  [1757] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_predicate_func, 1),
  [1759] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_predicate_func, 1),
  [1761] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_with_predicate, 2),
  [1763] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_with_predicate, 2),
  [1765] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_collection_predicate, 1),
  [1767] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_collection_predicate, 1),
  [1769] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_object, 3),
  [1771] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_predicate, 1),
  [1773] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_predicate, 1),
  [1775] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_predicate, 1),
  [1777] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean_predicate, 1),
  [1779] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float_predicate, 1),
  [1781] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float_predicate, 1),
  [1783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [1785] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_predicate, 1),
  [1787] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer_predicate, 1),
  [1789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [1791] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_object, 2),
  [1793] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_array, 3),
  [1795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(491),
  [1797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [1799] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneline_hex, 2),
  [1801] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneline_hex, 2),
  [1803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [1805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [1807] = {.entry = {.count = 1, .reusable = false}}, SHIFT(310),
  [1809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [1811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [1813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [1815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [1817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [1819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [1821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [1823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [1825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [1827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [1829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [1831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [1833] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_null, 1),
  [1835] = {.entry = {.count = 1, .reusable = false}}, SHIFT(549),
  [1837] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1839] = {.entry = {.count = 1, .reusable = false}}, SHIFT(559),
  [1841] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exist_predicate, 1),
  [1843] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_exist_predicate, 1),
  [1845] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float, 2),
  [1847] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float, 2),
  [1849] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_number, 3),
  [1851] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_string_type, 1),
  [1853] = {.entry = {.count = 1, .reusable = false}}, SHIFT(330),
  [1855] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneline_string, 2),
  [1857] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneline_string, 2),
  [1859] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_string, 2),
  [1861] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bytes, 1),
  [1863] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bytes, 1),
  [1865] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xml, 1),
  [1867] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xml, 1),
  [1869] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_string, 5),
  [1871] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline_string, 5),
  [1873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [1875] = {.entry = {.count = 1, .reusable = false}}, SHIFT(402),
  [1877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [1879] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_query_string_params_section_repeat1, 2),
  [1881] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_query_string_params_section_repeat1, 2),
  [1883] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_status, 1),
  [1885] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_status, 1),
  [1887] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_value, 4),
  [1889] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_file_value, 4),
  [1891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [1893] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 3),
  [1895] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_definition, 3),
  [1897] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_contenttype, 1),
  [1899] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_file_contenttype, 1),
  [1901] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [1903] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_predicate, 2),
  [1905] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_include_predicate, 2),
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
