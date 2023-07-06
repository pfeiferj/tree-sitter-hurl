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
#define SYMBOL_COUNT 335
#define ALIAS_COUNT 1
#define TOKEN_COUNT 157
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
  aux_sym_oneline_string_token1 = 112,
  anon_sym_BQUOTE = 113,
  aux_sym_oneline_string_text_token1 = 114,
  aux_sym_oneline_string_text_token2 = 115,
  anon_sym_BQUOTE_BQUOTE_BQUOTE = 116,
  anon_sym_base64 = 117,
  anon_sym_hex = 118,
  anon_sym_json = 119,
  anon_sym_xml = 120,
  anon_sym_graphql = 121,
  aux_sym_multiline_string_type_token1 = 122,
  aux_sym__multiline_string_text_token1 = 123,
  anon_sym_LBRACE = 124,
  sym_filename_text = 125,
  aux_sym_filename_escaped_char_token1 = 126,
  anon_sym_RBRACE = 127,
  anon_sym_COMMA = 128,
  anon_sym_LBRACK = 129,
  anon_sym_RBRACK = 130,
  aux_sym_json_string_text_token1 = 131,
  anon_sym_LBRACE_LBRACE = 132,
  anon_sym_RBRACE_RBRACE = 133,
  aux_sym_variable_name_token1 = 134,
  aux_sym_variable_name_token2 = 135,
  anon_sym_count = 136,
  anon_sym_urlEncode = 137,
  anon_sym_urlDecode = 138,
  anon_sym_htmlEscape = 139,
  anon_sym_htmlUnescape = 140,
  anon_sym_toInt = 141,
  anon_sym_true = 142,
  anon_sym_false = 143,
  anon_sym_null = 144,
  aux_sym__alphanum_token1 = 145,
  aux_sym_digit_token1 = 146,
  aux_sym_hexdigit_token1 = 147,
  anon_sym_DOT = 148,
  anon_sym_e = 149,
  anon_sym_E = 150,
  anon_sym_PLUS = 151,
  anon_sym_DASH = 152,
  sym_comment = 153,
  anon_sym_SLASH = 154,
  aux_sym_regex_text_token1 = 155,
  aux_sym_regex_escaped_char_token1 = 156,
  sym_hurl_file = 157,
  sym_entry = 158,
  sym__comment_or_new_line = 159,
  sym_request = 160,
  sym_response = 161,
  sym_method = 162,
  sym_version = 163,
  sym_status = 164,
  sym_header = 165,
  sym_body = 166,
  sym_request_section = 167,
  sym_response_section = 168,
  sym_basic_auth_section = 169,
  sym_query_string_params_section = 170,
  sym_form_params_section = 171,
  sym_multipart_form_data_section = 172,
  sym_cookies_section = 173,
  sym_captures_section = 174,
  sym_asserts_section = 175,
  sym_options_section = 176,
  sym_key_value = 177,
  sym_multipart_form_data_param = 178,
  sym_file_param = 179,
  sym_file_value = 180,
  sym_file_contenttype = 181,
  sym_capture = 182,
  sym_assert = 183,
  sym_option = 184,
  sym_ca_certificate_option = 185,
  sym_compressed_option = 186,
  sym_follow_redirect_option = 187,
  sym_insecure_option = 188,
  sym_max_redirs_option = 189,
  sym_path_as_is_option = 190,
  sym_proxy_option = 191,
  sym_retry_option = 192,
  sym_retry_interval_option = 193,
  sym_retry_max_count_option = 194,
  sym_variable_option = 195,
  sym_verbose_option = 196,
  sym_very_verbose_option = 197,
  sym_variable_definition = 198,
  sym_variable_value = 199,
  sym_query = 200,
  sym_status_query = 201,
  sym_url_query = 202,
  sym_header_query = 203,
  sym_cookie_query = 204,
  sym_body_query = 205,
  sym_xpath_query = 206,
  sym_jsonpath_query = 207,
  sym_regex_query = 208,
  sym_variable_query = 209,
  sym_duration_query = 210,
  sym_sha256_query = 211,
  sym_md5_query = 212,
  sym_bytes_query = 213,
  sym_predicate = 214,
  sym_predicate_func = 215,
  sym_equal_predicate = 216,
  sym_not_equal_predicate = 217,
  sym_greater_predicate = 218,
  sym_greater_or_equal_predicate = 219,
  sym_less_predicate = 220,
  sym_less_or_equal_predicate = 221,
  sym_start_with_predicate = 222,
  sym_end_with_predicate = 223,
  sym_contain_predicate = 224,
  sym_match_predicate = 225,
  sym_exist_predicate = 226,
  sym_include_predicate = 227,
  sym_integer_predicate = 228,
  sym_float_predicate = 229,
  sym_boolean_predicate = 230,
  sym_string_predicate = 231,
  sym_collection_predicate = 232,
  sym_predicate_value = 233,
  sym_bytes = 234,
  sym_xml = 235,
  sym_xml_prolog_tag = 236,
  sym_xml_tag = 237,
  sym_xml_open_tag = 238,
  sym_xml_close_tag = 239,
  sym_oneline_base64 = 240,
  sym_oneline_file = 241,
  sym_oneline_hex = 242,
  sym_quoted_string = 243,
  sym_quoted_string_content = 244,
  sym_quoted_string_text = 245,
  sym_invalid_quoted_string_escaped_char = 246,
  sym_quoted_string_escaped_char = 247,
  sym_key_string = 248,
  sym_key_string_content = 249,
  sym_key_string_escaped_char = 250,
  sym_value_string = 251,
  sym_value_string_content = 252,
  sym_value_string_text = 253,
  sym_value_string_escaped_char = 254,
  sym_oneline_string = 255,
  sym_oneline_string_content = 256,
  sym_oneline_string_text = 257,
  sym_oneline_string_escaped_char = 258,
  sym_multiline_string = 259,
  sym_multiline_string_type = 260,
  sym_multiline_string_content = 261,
  sym__multiline_string_text = 262,
  sym_multiline_string_escaped_char = 263,
  sym_filename = 264,
  sym_filename_content = 265,
  sym_filename_escaped_char = 266,
  sym_unicode_char = 267,
  sym_json_value = 268,
  sym_json_object = 269,
  sym_json_key_value = 270,
  sym_json_key_string = 271,
  sym_json_array = 272,
  sym_json_string = 273,
  sym_json_string_content = 274,
  sym_json_string_text = 275,
  sym_json_string_escaped_char = 276,
  sym_json_number = 277,
  sym_template = 278,
  sym_expr = 279,
  sym_variable_name = 280,
  sym_filter = 281,
  sym_regex_filter = 282,
  sym_count_filter = 283,
  sym_url_encode_filter = 284,
  sym_url_decode_filter = 285,
  sym_html_encode_filter = 286,
  sym_html_decode_filter = 287,
  sym_to_int_filter = 288,
  sym_boolean = 289,
  sym_null = 290,
  sym_integer = 291,
  sym_float = 292,
  sym_digit = 293,
  sym_hexdigit = 294,
  sym_fraction = 295,
  sym_exponent = 296,
  sym_regex = 297,
  sym_regex_content = 298,
  sym_regex_text = 299,
  sym_regex_escaped_char = 300,
  aux_sym_hurl_file_repeat1 = 301,
  aux_sym_hurl_file_repeat2 = 302,
  aux_sym__comment_or_new_line_repeat1 = 303,
  aux_sym_request_repeat1 = 304,
  aux_sym_request_repeat2 = 305,
  aux_sym_response_repeat1 = 306,
  aux_sym_query_string_params_section_repeat1 = 307,
  aux_sym_multipart_form_data_section_repeat1 = 308,
  aux_sym_captures_section_repeat1 = 309,
  aux_sym_asserts_section_repeat1 = 310,
  aux_sym_options_section_repeat1 = 311,
  aux_sym_capture_repeat1 = 312,
  aux_sym_xml_repeat1 = 313,
  aux_sym_xml_tag_repeat1 = 314,
  aux_sym_oneline_hex_repeat1 = 315,
  aux_sym_quoted_string_repeat1 = 316,
  aux_sym_quoted_string_content_repeat1 = 317,
  aux_sym_key_string_repeat1 = 318,
  aux_sym_key_string_content_repeat1 = 319,
  aux_sym_value_string_repeat1 = 320,
  aux_sym_value_string_content_repeat1 = 321,
  aux_sym_value_string_text_repeat1 = 322,
  aux_sym_oneline_string_repeat1 = 323,
  aux_sym_oneline_string_content_repeat1 = 324,
  aux_sym_multiline_string_repeat1 = 325,
  aux_sym_multiline_string_content_repeat1 = 326,
  aux_sym__multiline_string_text_repeat1 = 327,
  aux_sym_filename_repeat1 = 328,
  aux_sym_filename_content_repeat1 = 329,
  aux_sym_json_object_repeat1 = 330,
  aux_sym_json_array_repeat1 = 331,
  aux_sym_json_string_repeat1 = 332,
  aux_sym_integer_repeat1 = 333,
  aux_sym_regex_content_repeat1 = 334,
  anon_alias_sym_json_key_string = 335,
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
  [184] = 85,
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
  [203] = 203,
  [204] = 74,
  [205] = 197,
  [206] = 88,
  [207] = 207,
  [208] = 91,
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
  [224] = 90,
  [225] = 225,
  [226] = 226,
  [227] = 227,
  [228] = 226,
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
  [241] = 241,
  [242] = 242,
  [243] = 235,
  [244] = 244,
  [245] = 245,
  [246] = 246,
  [247] = 246,
  [248] = 248,
  [249] = 249,
  [250] = 250,
  [251] = 251,
  [252] = 231,
  [253] = 235,
  [254] = 254,
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
  [273] = 254,
  [274] = 10,
  [275] = 255,
  [276] = 276,
  [277] = 233,
  [278] = 255,
  [279] = 279,
  [280] = 240,
  [281] = 281,
  [282] = 282,
  [283] = 225,
  [284] = 284,
  [285] = 255,
  [286] = 52,
  [287] = 287,
  [288] = 288,
  [289] = 289,
  [290] = 289,
  [291] = 291,
  [292] = 292,
  [293] = 244,
  [294] = 294,
  [295] = 250,
  [296] = 296,
  [297] = 255,
  [298] = 255,
  [299] = 255,
  [300] = 300,
  [301] = 301,
  [302] = 254,
  [303] = 255,
  [304] = 294,
  [305] = 305,
  [306] = 255,
  [307] = 307,
  [308] = 308,
  [309] = 309,
  [310] = 287,
  [311] = 296,
  [312] = 255,
  [313] = 255,
  [314] = 314,
  [315] = 315,
  [316] = 316,
  [317] = 254,
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
  [336] = 251,
  [337] = 337,
  [338] = 260,
  [339] = 339,
  [340] = 254,
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
  [390] = 255,
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
  [491] = 249,
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
  [542] = 245,
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
      if (eof) ADVANCE(521);
      if (lookahead == '!') ADVANCE(59);
      if (lookahead == '"') ADVANCE(658);
      if (lookahead == '#') ADVANCE(846);
      if (lookahead == '*') ADVANCE(565);
      if (lookahead == '+') ADVANCE(930);
      if (lookahead == ',') ADVANCE(895);
      if (lookahead == '-') ADVANCE(931);
      if (lookahead == '.') ADVANCE(927);
      if (lookahead == '/') ADVANCE(933);
      if (lookahead == ':') ADVANCE(582);
      if (lookahead == ';') ADVANCE(585);
      if (lookahead == '<') ADVANCE(625);
      if (lookahead == '=') ADVANCE(601);
      if (lookahead == '>') ADVANCE(621);
      if (lookahead == '?') ADVANCE(61);
      if (lookahead == 'E') ADVANCE(929);
      if (lookahead == '[') ADVANCE(897);
      if (lookahead == '\\') ADVANCE(838);
      if (lookahead == ']') ADVANCE(902);
      if (lookahead == '`') ADVANCE(849);
      if (lookahead == 'b') ADVANCE(667);
      if (lookahead == 'e') ADVANCE(928);
      if (lookahead == 'f') ADVANCE(668);
      if (lookahead == 'n') ADVANCE(669);
      if (lookahead == 'r') ADVANCE(670);
      if (lookahead == 't') ADVANCE(671);
      if (lookahead == 'u') ADVANCE(672);
      if (lookahead == '{') ADVANCE(888);
      if (lookahead == '}') ADVANCE(894);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'd')) ADVANCE(911);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(564);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(520)
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(911);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(932);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(522);
      if (lookahead == '#') ADVANCE(513);
      if (lookahead == '\\') ADVANCE(663);
      if (lookahead == 'f') ADVANCE(842);
      if (lookahead == 'n') ADVANCE(844);
      if (lookahead == 't') ADVANCE(843);
      if (lookahead == '{') ADVANCE(845);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(841);
      if (aux_sym_value_string_text_token1_character_set_1(lookahead)) ADVANCE(841);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(522);
      if (lookahead == '#') ADVANCE(513);
      if (lookahead == '\\') ADVANCE(663);
      if (lookahead == '{') ADVANCE(845);
      if (aux_sym_value_string_text_token1_character_set_1(lookahead)) ADVANCE(841);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(522);
      if (lookahead == '#') ADVANCE(513);
      if (lookahead == 'c') ADVANCE(370);
      if (lookahead == 'h') ADVANCE(464);
      if (lookahead == 'r') ADVANCE(232);
      if (lookahead == 't') ADVANCE(353);
      if (lookahead == 'u') ADVANCE(399);
      if (aux_sym_value_string_text_token1_character_set_1(lookahead)) SKIP(4)
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(522);
      if (lookahead == '#') ADVANCE(513);
      if (aux_sym_value_string_text_token1_character_set_1(lookahead)) SKIP(5)
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(522);
      if (lookahead == '#') ADVANCE(513);
      if (aux_sym_value_string_text_token1_character_set_1(lookahead)) SKIP(6)
      if (lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(586);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(522);
      if (lookahead == '#') ADVANCE(513);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(834);
      if (lookahead == ':') ADVANCE(582);
      if (lookahead == '\\') ADVANCE(838);
      if (lookahead == '{') ADVANCE(511);
      if (aux_sym_value_string_text_token1_character_set_1(lookahead)) SKIP(5)
      END_STATE();
    case 8:
      if (lookahead == '\n') SKIP(34)
      if (lookahead == '#') ADVANCE(513);
      if (lookahead == '<') ADVANCE(626);
      if (lookahead == '\\') ADVANCE(663);
      if (lookahead == '{') ADVANCE(845);
      if (aux_sym_value_string_text_token1_character_set_1(lookahead)) ADVANCE(841);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(523);
      if (lookahead == ' ') SKIP(10)
      if (lookahead == '#') ADVANCE(513);
      if (lookahead == '\\') ADVANCE(663);
      if (lookahead == '{') ADVANCE(890);
      if (sym_filename_text_character_set_1(lookahead)) ADVANCE(889);
      if (lookahead != 0 &&
          lookahead != ';') ADVANCE(892);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(523);
      if (lookahead == ' ') SKIP(10)
      if (lookahead == '#') ADVANCE(513);
      if (lookahead == '\\') ADVANCE(663);
      if (sym_filename_text_character_set_1(lookahead)) ADVANCE(889);
      if (lookahead != 0 &&
          lookahead != ';') ADVANCE(892);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(524);
      if (lookahead == '#') ADVANCE(885);
      if (lookahead == '\\') ADVANCE(663);
      if (lookahead == '`') ADVANCE(849);
      if (lookahead == '{') ADVANCE(888);
      if (aux_sym_value_string_text_token1_character_set_1(lookahead)) ADVANCE(884);
      if (lookahead != 0) ADVANCE(886);
      END_STATE();
    case 12:
      if (lookahead == '\n') SKIP(35)
      if (lookahead == '#') ADVANCE(513);
      if (lookahead == '\\') ADVANCE(663);
      if (lookahead == '{') ADVANCE(845);
      if (aux_sym_value_string_text_token1_character_set_1(lookahead)) ADVANCE(841);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 13:
      if (lookahead == '\n') SKIP(14)
      if (lookahead == '#') ADVANCE(513);
      if (lookahead == '\\') ADVANCE(663);
      if (lookahead == '`') ADVANCE(848);
      if (lookahead == '{') ADVANCE(852);
      if (aux_sym_value_string_text_token1_character_set_1(lookahead)) ADVANCE(851);
      if (lookahead != 0) ADVANCE(850);
      END_STATE();
    case 14:
      if (lookahead == '\n') SKIP(14)
      if (lookahead == '#') ADVANCE(513);
      if (lookahead == '\\') ADVANCE(663);
      if (lookahead == '`') ADVANCE(848);
      if (aux_sym_value_string_text_token1_character_set_1(lookahead)) ADVANCE(851);
      if (lookahead != 0) ADVANCE(850);
      END_STATE();
    case 15:
      if (lookahead == '\n') SKIP(15)
      if (lookahead == '#') ADVANCE(936);
      if (lookahead == '/') ADVANCE(933);
      if (lookahead == '\\') ADVANCE(663);
      if (aux_sym_value_string_text_token1_character_set_1(lookahead)) ADVANCE(935);
      if (lookahead != 0) ADVANCE(937);
      END_STATE();
    case 16:
      if (lookahead == '\n') ADVANCE(655);
      if (lookahead == '#') ADVANCE(513);
      if (aux_sym_value_string_text_token1_character_set_1(lookahead)) SKIP(16)
      if (('+' <= lookahead && lookahead <= '-') ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(656);
      END_STATE();
    case 17:
      if (lookahead == '\n') SKIP(17)
      if (lookahead == '#') ADVANCE(940);
      if (aux_sym_value_string_text_token1_character_set_1(lookahead)) ADVANCE(939);
      if (lookahead != 0) ADVANCE(938);
      END_STATE();
    case 18:
      if (lookahead == '\n') ADVANCE(525);
      if (lookahead == '#') ADVANCE(882);
      if (lookahead == 'b') ADVANCE(867);
      if (lookahead == 'g') ADVANCE(878);
      if (lookahead == 'h') ADVANCE(868);
      if (lookahead == 'j') ADVANCE(879);
      if (lookahead == 'x') ADVANCE(873);
      if (aux_sym_value_string_text_token1_character_set_1(lookahead)) ADVANCE(863);
      if (lookahead != 0) ADVANCE(883);
      END_STATE();
    case 19:
      if (lookahead == '!') ADVANCE(59);
      if (lookahead == '"') ADVANCE(658);
      if (lookahead == '#') ADVANCE(513);
      if (lookahead == '+') ADVANCE(930);
      if (lookahead == ',') ADVANCE(895);
      if (lookahead == '-') ADVANCE(931);
      if (lookahead == '/') ADVANCE(933);
      if (lookahead == ':') ADVANCE(583);
      if (lookahead == '<') ADVANCE(627);
      if (lookahead == '=') ADVANCE(60);
      if (lookahead == '>') ADVANCE(621);
      if (lookahead == '[') ADVANCE(896);
      if (lookahead == ']') ADVANCE(902);
      if (lookahead == '`') ADVANCE(145);
      if (lookahead == 'b') ADVANCE(169);
      if (lookahead == 'c') ADVANCE(347);
      if (lookahead == 'e') ADVANCE(329);
      if (lookahead == 'f') ADVANCE(152);
      if (lookahead == 'g') ADVANCE(407);
      if (lookahead == 'h') ADVANCE(241);
      if (lookahead == 'i') ADVANCE(331);
      if (lookahead == 'l') ADVANCE(257);
      if (lookahead == 'm') ADVANCE(174);
      if (lookahead == 'n') ADVANCE(362);
      if (lookahead == 'r') ADVANCE(232);
      if (lookahead == 's') ADVANCE(477);
      if (lookahead == 't') ADVANCE(354);
      if (lookahead == 'u') ADVANCE(399);
      if (lookahead == '{') ADVANCE(888);
      if (lookahead == '}') ADVANCE(512);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(925);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(20)
      END_STATE();
    case 20:
      if (lookahead == '!') ADVANCE(59);
      if (lookahead == '"') ADVANCE(658);
      if (lookahead == '#') ADVANCE(513);
      if (lookahead == '+') ADVANCE(930);
      if (lookahead == ',') ADVANCE(895);
      if (lookahead == '-') ADVANCE(931);
      if (lookahead == '/') ADVANCE(933);
      if (lookahead == ':') ADVANCE(583);
      if (lookahead == '<') ADVANCE(627);
      if (lookahead == '=') ADVANCE(60);
      if (lookahead == '>') ADVANCE(621);
      if (lookahead == '[') ADVANCE(896);
      if (lookahead == ']') ADVANCE(902);
      if (lookahead == '`') ADVANCE(145);
      if (lookahead == 'b') ADVANCE(169);
      if (lookahead == 'c') ADVANCE(347);
      if (lookahead == 'e') ADVANCE(329);
      if (lookahead == 'f') ADVANCE(152);
      if (lookahead == 'g') ADVANCE(407);
      if (lookahead == 'h') ADVANCE(241);
      if (lookahead == 'i') ADVANCE(331);
      if (lookahead == 'l') ADVANCE(257);
      if (lookahead == 'm') ADVANCE(174);
      if (lookahead == 'n') ADVANCE(362);
      if (lookahead == 'r') ADVANCE(232);
      if (lookahead == 's') ADVANCE(477);
      if (lookahead == 't') ADVANCE(354);
      if (lookahead == 'u') ADVANCE(399);
      if (lookahead == '{') ADVANCE(887);
      if (lookahead == '}') ADVANCE(512);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(925);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(20)
      END_STATE();
    case 21:
      if (lookahead == '"') ADVANCE(658);
      if (lookahead == '#') ADVANCE(846);
      if (lookahead == ',') ADVANCE(893);
      if (lookahead == ';') ADVANCE(585);
      if (lookahead == 'f') ADVANCE(151);
      if (lookahead == 'n') ADVANCE(487);
      if (lookahead == 't') ADVANCE(393);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(925);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(21)
      END_STATE();
    case 22:
      if (lookahead == '"') ADVANCE(658);
      if (lookahead == '#') ADVANCE(846);
      if (lookahead == '\\') ADVANCE(663);
      if (lookahead == '`') ADVANCE(848);
      if (lookahead == 'b') ADVANCE(667);
      if (lookahead == 'f') ADVANCE(668);
      if (lookahead == 'n') ADVANCE(669);
      if (lookahead == 'r') ADVANCE(670);
      if (lookahead == 't') ADVANCE(671);
      if (lookahead == 'u') ADVANCE(672);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(22)
      END_STATE();
    case 23:
      if (lookahead == '"') ADVANCE(658);
      if (lookahead == '#') ADVANCE(846);
      if (sym_key_string_text_character_set_1(lookahead)) ADVANCE(834);
      if (lookahead == ',') ADVANCE(893);
      if (lookahead == ';') ADVANCE(585);
      if (lookahead == '\\') ADVANCE(838);
      if (lookahead == 'f') ADVANCE(816);
      if (lookahead == 'n') ADVANCE(808);
      if (lookahead == 't') ADVANCE(781);
      if (lookahead == '{') ADVANCE(511);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(834);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(21)
      END_STATE();
    case 24:
      if (lookahead == '"') ADVANCE(658);
      if (lookahead == '#') ADVANCE(513);
      if (lookahead == ',') ADVANCE(895);
      if (lookahead == '.') ADVANCE(927);
      if (lookahead == ':') ADVANCE(583);
      if (lookahead == '<') ADVANCE(628);
      if (lookahead == '=') ADVANCE(600);
      if (lookahead == '>') ADVANCE(620);
      if (lookahead == 'E') ADVANCE(929);
      if (lookahead == ']') ADVANCE(902);
      if (lookahead == 'b') ADVANCE(346);
      if (lookahead == 'c') ADVANCE(366);
      if (lookahead == 'd') ADVANCE(490);
      if (lookahead == 'e') ADVANCE(928);
      if (lookahead == 'h') ADVANCE(249);
      if (lookahead == 'j') ADVANCE(433);
      if (lookahead == 'm') ADVANCE(208);
      if (lookahead == 'r') ADVANCE(232);
      if (lookahead == 's') ADVANCE(272);
      if (lookahead == 'u') ADVANCE(394);
      if (lookahead == 'v') ADVANCE(164);
      if (lookahead == 'x') ADVANCE(377);
      if (lookahead == '{') ADVANCE(887);
      if (lookahead == '}') ADVANCE(894);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(925);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(24)
      END_STATE();
    case 25:
      if (lookahead == '"') ADVANCE(658);
      if (lookahead == '#') ADVANCE(659);
      if (lookahead == '\\') ADVANCE(663);
      if (lookahead == '{') ADVANCE(661);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) ADVANCE(660);
      if (lookahead != 0) ADVANCE(662);
      END_STATE();
    case 26:
      if (lookahead == '"') ADVANCE(658);
      if (lookahead == '#') ADVANCE(906);
      if (lookahead == '\\') ADVANCE(663);
      if (lookahead == '{') ADVANCE(905);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) ADVANCE(904);
      if (lookahead != 0) ADVANCE(903);
      END_STATE();
    case 27:
      if (lookahead == '"') ADVANCE(658);
      if (lookahead == '#') ADVANCE(666);
      if (lookahead == '\\') ADVANCE(663);
      if (lookahead == 'b') ADVANCE(667);
      if (lookahead == 'f') ADVANCE(668);
      if (lookahead == 'n') ADVANCE(669);
      if (lookahead == 'r') ADVANCE(670);
      if (lookahead == 't') ADVANCE(671);
      if (lookahead == 'u') ADVANCE(672);
      if (lookahead == '\t' ||
          lookahead == '\r') SKIP(27)
      if (aux_sym_invalid_quoted_string_escaped_char_token1_character_set_1(lookahead)) ADVANCE(665);
      if (lookahead != 0 &&
          lookahead != '\f') ADVANCE(664);
      END_STATE();
    case 28:
      if (lookahead == '"') ADVANCE(839);
      if (lookahead == '#') ADVANCE(840);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(834);
      if (lookahead == ':') ADVANCE(582);
      if (lookahead == '\\') ADVANCE(838);
      if (lookahead == '{') ADVANCE(511);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(30)
      END_STATE();
    case 29:
      if (lookahead == '#') ADVANCE(513);
      if (lookahead == '*') ADVANCE(565);
      if (lookahead == '=') ADVANCE(600);
      if (lookahead == 'c') ADVANCE(370);
      if (lookahead == 'h') ADVANCE(464);
      if (lookahead == 'r') ADVANCE(232);
      if (lookahead == 't') ADVANCE(353);
      if (lookahead == 'u') ADVANCE(399);
      if (lookahead == '}') ADVANCE(512);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(564);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(29)
      END_STATE();
    case 30:
      if (lookahead == '#') ADVANCE(513);
      if (lookahead == ':') ADVANCE(583);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(30)
      END_STATE();
    case 31:
      if (lookahead == '#') ADVANCE(513);
      if (lookahead == ';') ADVANCE(585);
      if (lookahead == '\\') ADVANCE(663);
      if (lookahead == '{') ADVANCE(890);
      if (lookahead == '\n' ||
          lookahead == ' ') SKIP(32)
      if (sym_filename_text_character_set_1(lookahead)) ADVANCE(891);
      if (lookahead != 0) ADVANCE(892);
      END_STATE();
    case 32:
      if (lookahead == '#') ADVANCE(513);
      if (lookahead == ';') ADVANCE(585);
      if (lookahead == '\\') ADVANCE(663);
      if (lookahead == '\n' ||
          lookahead == ' ') SKIP(32)
      if (sym_filename_text_character_set_1(lookahead)) ADVANCE(891);
      if (lookahead != 0) ADVANCE(892);
      END_STATE();
    case 33:
      if (lookahead == '#') ADVANCE(513);
      if (lookahead == ';') ADVANCE(585);
      if (lookahead == '}') ADVANCE(894);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(926);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(33)
      END_STATE();
    case 34:
      if (lookahead == '#') ADVANCE(513);
      if (lookahead == '<') ADVANCE(626);
      if (lookahead == '\\') ADVANCE(663);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(34)
      END_STATE();
    case 35:
      if (lookahead == '#') ADVANCE(513);
      if (lookahead == '\\') ADVANCE(663);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(35)
      END_STATE();
    case 36:
      if (lookahead == '#') ADVANCE(513);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(36)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(911);
      END_STATE();
    case 37:
      if (lookahead == '#') ADVANCE(513);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(834);
      if (lookahead == ':') ADVANCE(583);
      if (lookahead == '\\') ADVANCE(838);
      if (lookahead == '{') ADVANCE(511);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(30)
      END_STATE();
    case 38:
      if (lookahead == '#') ADVANCE(647);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) ADVANCE(648);
      if (lookahead != 0 &&
          lookahead != '/' &&
          lookahead != '?') ADVANCE(649);
      END_STATE();
    case 39:
      if (lookahead == '#') ADVANCE(643);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) ADVANCE(644);
      if (lookahead != 0 &&
          lookahead != '?') ADVANCE(645);
      END_STATE();
    case 40:
      if (lookahead == '#') ADVANCE(651);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) ADVANCE(652);
      if (lookahead != 0 &&
          lookahead != '/' &&
          lookahead != '>') ADVANCE(653);
      END_STATE();
    case 41:
      if (lookahead == '#') ADVANCE(855);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) ADVANCE(854);
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(853);
      END_STATE();
    case 42:
      if (lookahead == '*') ADVANCE(561);
      if (lookahead == '1') ADVANCE(51);
      if (lookahead == '2') ADVANCE(560);
      END_STATE();
    case 43:
      if (lookahead == ',') ADVANCE(657);
      END_STATE();
    case 44:
      if (lookahead == ',') ADVANCE(584);
      END_STATE();
    case 45:
      if (lookahead == ',') ADVANCE(654);
      END_STATE();
    case 46:
      if (lookahead == '-') ADVANCE(501);
      END_STATE();
    case 47:
      if (lookahead == '-') ADVANCE(198);
      END_STATE();
    case 48:
      if (lookahead == '-') ADVANCE(289);
      END_STATE();
    case 49:
      if (lookahead == '-') ADVANCE(404);
      END_STATE();
    case 50:
      if (lookahead == '-') ADVANCE(175);
      END_STATE();
    case 51:
      if (lookahead == '.') ADVANCE(52);
      END_STATE();
    case 52:
      if (lookahead == '0') ADVANCE(558);
      if (lookahead == '1') ADVANCE(559);
      END_STATE();
    case 53:
      if (lookahead == '2') ADVANCE(56);
      END_STATE();
    case 54:
      if (lookahead == '4') ADVANCE(45);
      END_STATE();
    case 55:
      if (lookahead == '5') ADVANCE(612);
      END_STATE();
    case 56:
      if (lookahead == '5') ADVANCE(58);
      END_STATE();
    case 57:
      if (lookahead == '6') ADVANCE(54);
      END_STATE();
    case 58:
      if (lookahead == '6') ADVANCE(611);
      END_STATE();
    case 59:
      if (lookahead == '=') ADVANCE(618);
      END_STATE();
    case 60:
      if (lookahead == '=') ADVANCE(616);
      END_STATE();
    case 61:
      if (lookahead == '>') ADVANCE(646);
      END_STATE();
    case 62:
      if (lookahead == 'A') ADVANCE(72);
      END_STATE();
    case 63:
      if (lookahead == 'A') ADVANCE(70);
      END_STATE();
    case 64:
      if (lookahead == 'A') ADVANCE(488);
      END_STATE();
    case 65:
      if (lookahead == 'A') ADVANCE(129);
      if (lookahead == 'O') ADVANCE(124);
      if (lookahead == 'R') ADVANCE(113);
      if (lookahead == 'U') ADVANCE(120);
      END_STATE();
    case 66:
      if (lookahead == 'B') ADVANCE(360);
      if (lookahead == 'C') ADVANCE(358);
      if (lookahead == 'F') ADVANCE(305);
      if (lookahead == 'I') ADVANCE(337);
      if (lookahead == 'S') ADVANCE(473);
      END_STATE();
    case 67:
      if (lookahead == 'C') ADVANCE(92);
      END_STATE();
    case 68:
      if (lookahead == 'C') ADVANCE(100);
      END_STATE();
    case 69:
      if (lookahead == 'C') ADVANCE(102);
      END_STATE();
    case 70:
      if (lookahead == 'C') ADVANCE(80);
      END_STATE();
    case 71:
      if (lookahead == 'C') ADVANCE(127);
      END_STATE();
    case 72:
      if (lookahead == 'D') ADVANCE(528);
      END_STATE();
    case 73:
      if (lookahead == 'D') ADVANCE(554);
      END_STATE();
    case 74:
      if (lookahead == 'D') ADVANCE(161);
      END_STATE();
    case 75:
      if (lookahead == 'D') ADVANCE(256);
      if (lookahead == 'E') ADVANCE(340);
      END_STATE();
    case 76:
      if (lookahead == 'E') ADVANCE(103);
      END_STATE();
    case 77:
      if (lookahead == 'E') ADVANCE(125);
      END_STATE();
    case 78:
      if (lookahead == 'E') ADVANCE(134);
      END_STATE();
    case 79:
      if (lookahead == 'E') ADVANCE(548);
      END_STATE();
    case 80:
      if (lookahead == 'E') ADVANCE(540);
      END_STATE();
    case 81:
      if (lookahead == 'E') ADVANCE(534);
      END_STATE();
    case 82:
      if (lookahead == 'E') ADVANCE(62);
      END_STATE();
    case 83:
      if (lookahead == 'E') ADVANCE(62);
      if (lookahead == 'T') ADVANCE(130);
      END_STATE();
    case 84:
      if (lookahead == 'E') ADVANCE(71);
      END_STATE();
    case 85:
      if (lookahead == 'E') ADVANCE(132);
      END_STATE();
    case 86:
      if (lookahead == 'E') ADVANCE(447);
      if (lookahead == 'U') ADVANCE(341);
      END_STATE();
    case 87:
      if (lookahead == 'E') ADVANCE(380);
      END_STATE();
    case 88:
      if (lookahead == 'E') ADVANCE(381);
      END_STATE();
    case 89:
      if (lookahead == 'F') ADVANCE(96);
      END_STATE();
    case 90:
      if (lookahead == 'F') ADVANCE(364);
      END_STATE();
    case 91:
      if (lookahead == 'G') ADVANCE(79);
      END_STATE();
    case 92:
      if (lookahead == 'H') ADVANCE(542);
      END_STATE();
    case 93:
      if (lookahead == 'I') ADVANCE(78);
      END_STATE();
    case 94:
      if (lookahead == 'I') ADVANCE(105);
      if (lookahead == 'O') ADVANCE(68);
      END_STATE();
    case 95:
      if (lookahead == 'I') ADVANCE(109);
      if (lookahead == 'O') ADVANCE(69);
      END_STATE();
    case 96:
      if (lookahead == 'I') ADVANCE(108);
      END_STATE();
    case 97:
      if (lookahead == 'I') ADVANCE(114);
      END_STATE();
    case 98:
      if (lookahead == 'I') ADVANCE(338);
      END_STATE();
    case 99:
      if (lookahead == 'K') ADVANCE(544);
      END_STATE();
    case 100:
      if (lookahead == 'K') ADVANCE(550);
      END_STATE();
    case 101:
      if (lookahead == 'K') ADVANCE(546);
      END_STATE();
    case 102:
      if (lookahead == 'K') ADVANCE(552);
      END_STATE();
    case 103:
      if (lookahead == 'L') ADVANCE(85);
      END_STATE();
    case 104:
      if (lookahead == 'L') ADVANCE(95);
      END_STATE();
    case 105:
      if (lookahead == 'N') ADVANCE(99);
      END_STATE();
    case 106:
      if (lookahead == 'N') ADVANCE(104);
      END_STATE();
    case 107:
      if (lookahead == 'N') ADVANCE(122);
      END_STATE();
    case 108:
      if (lookahead == 'N') ADVANCE(73);
      END_STATE();
    case 109:
      if (lookahead == 'N') ADVANCE(101);
      END_STATE();
    case 110:
      if (lookahead == 'N') ADVANCE(111);
      END_STATE();
    case 111:
      if (lookahead == 'N') ADVANCE(84);
      END_STATE();
    case 112:
      if (lookahead == 'O') ADVANCE(110);
      END_STATE();
    case 113:
      if (lookahead == 'O') ADVANCE(117);
      END_STATE();
    case 114:
      if (lookahead == 'O') ADVANCE(107);
      END_STATE();
    case 115:
      if (lookahead == 'P') ADVANCE(562);
      END_STATE();
    case 116:
      if (lookahead == 'P') ADVANCE(159);
      END_STATE();
    case 117:
      if (lookahead == 'P') ADVANCE(89);
      END_STATE();
    case 118:
      if (lookahead == 'P') ADVANCE(128);
      END_STATE();
    case 119:
      if (lookahead == 'P') ADVANCE(185);
      END_STATE();
    case 120:
      if (lookahead == 'R') ADVANCE(91);
      if (lookahead == 'T') ADVANCE(532);
      END_STATE();
    case 121:
      if (lookahead == 'R') ADVANCE(63);
      END_STATE();
    case 122:
      if (lookahead == 'S') ADVANCE(538);
      END_STATE();
    case 123:
      if (lookahead == 'S') ADVANCE(468);
      END_STATE();
    case 124:
      if (lookahead == 'S') ADVANCE(126);
      END_STATE();
    case 125:
      if (lookahead == 'T') ADVANCE(526);
      END_STATE();
    case 126:
      if (lookahead == 'T') ADVANCE(530);
      END_STATE();
    case 127:
      if (lookahead == 'T') ADVANCE(536);
      END_STATE();
    case 128:
      if (lookahead == 'T') ADVANCE(97);
      END_STATE();
    case 129:
      if (lookahead == 'T') ADVANCE(67);
      END_STATE();
    case 130:
      if (lookahead == 'T') ADVANCE(115);
      END_STATE();
    case 131:
      if (lookahead == 'T') ADVANCE(273);
      END_STATE();
    case 132:
      if (lookahead == 'T') ADVANCE(81);
      END_STATE();
    case 133:
      if (lookahead == 'T') ADVANCE(274);
      END_STATE();
    case 134:
      if (lookahead == 'W') ADVANCE(556);
      END_STATE();
    case 135:
      if (lookahead == 'W') ADVANCE(290);
      END_STATE();
    case 136:
      if (lookahead == 'W') ADVANCE(292);
      END_STATE();
    case 137:
      if (lookahead == ']') ADVANCE(578);
      END_STATE();
    case 138:
      if (lookahead == ']') ADVANCE(574);
      END_STATE();
    case 139:
      if (lookahead == ']') ADVANCE(580);
      END_STATE();
    case 140:
      if (lookahead == ']') ADVANCE(576);
      END_STATE();
    case 141:
      if (lookahead == ']') ADVANCE(566);
      END_STATE();
    case 142:
      if (lookahead == ']') ADVANCE(570);
      END_STATE();
    case 143:
      if (lookahead == ']') ADVANCE(572);
      END_STATE();
    case 144:
      if (lookahead == ']') ADVANCE(568);
      END_STATE();
    case 145:
      if (lookahead == '`') ADVANCE(147);
      END_STATE();
    case 146:
      if (lookahead == '`') ADVANCE(147);
      if (lookahead != 0) ADVANCE(847);
      END_STATE();
    case 147:
      if (lookahead == '`') ADVANCE(856);
      END_STATE();
    case 148:
      if (lookahead == 'a') ADVANCE(503);
      if (lookahead == 'd') ADVANCE(55);
      END_STATE();
    case 149:
      if (lookahead == 'a') ADVANCE(53);
      END_STATE();
    case 150:
      if (lookahead == 'a') ADVANCE(194);
      END_STATE();
    case 151:
      if (lookahead == 'a') ADVANCE(304);
      END_STATE();
    case 152:
      if (lookahead == 'a') ADVANCE(304);
      if (lookahead == 'i') ADVANCE(302);
      END_STATE();
    case 153:
      if (lookahead == 'a') ADVANCE(318);
      END_STATE();
    case 154:
      if (lookahead == 'a') ADVANCE(204);
      if (lookahead == 'o') ADVANCE(317);
      END_STATE();
    case 155:
      if (lookahead == 'a') ADVANCE(215);
      END_STATE();
    case 156:
      if (lookahead == 'a') ADVANCE(215);
      if (lookahead == 'x') ADVANCE(43);
      END_STATE();
    case 157:
      if (lookahead == 'a') ADVANCE(413);
      END_STATE();
    case 158:
      if (lookahead == 'a') ADVANCE(374);
      END_STATE();
    case 159:
      if (lookahead == 'a') ADVANCE(389);
      END_STATE();
    case 160:
      if (lookahead == 'a') ADVANCE(298);
      END_STATE();
    case 161:
      if (lookahead == 'a') ADVANCE(466);
      END_STATE();
    case 162:
      if (lookahead == 'a') ADVANCE(143);
      END_STATE();
    case 163:
      if (lookahead == 'a') ADVANCE(459);
      if (lookahead == 'r') ADVANCE(349);
      END_STATE();
    case 164:
      if (lookahead == 'a') ADVANCE(397);
      END_STATE();
    case 165:
      if (lookahead == 'a') ADVANCE(397);
      if (lookahead == 'e') ADVANCE(384);
      END_STATE();
    case 166:
      if (lookahead == 'a') ADVANCE(461);
      END_STATE();
    case 167:
      if (lookahead == 'a') ADVANCE(293);
      END_STATE();
    case 168:
      if (lookahead == 'a') ADVANCE(324);
      END_STATE();
    case 169:
      if (lookahead == 'a') ADVANCE(434);
      END_STATE();
    case 170:
      if (lookahead == 'a') ADVANCE(434);
      if (lookahead == 'o') ADVANCE(210);
      if (lookahead == 'y') ADVANCE(478);
      END_STATE();
    case 171:
      if (lookahead == 'a') ADVANCE(325);
      END_STATE();
    case 172:
      if (lookahead == 'a') ADVANCE(465);
      END_STATE();
    case 173:
      if (lookahead == 'a') ADVANCE(326);
      END_STATE();
    case 174:
      if (lookahead == 'a') ADVANCE(469);
      END_STATE();
    case 175:
      if (lookahead == 'a') ADVANCE(432);
      END_STATE();
    case 176:
      if (lookahead == 'a') ADVANCE(457);
      END_STATE();
    case 177:
      if (lookahead == 'a') ADVANCE(372);
      END_STATE();
    case 178:
      if (lookahead == 'a') ADVANCE(372);
      if (lookahead == 'o') ADVANCE(344);
      END_STATE();
    case 179:
      if (lookahead == 'a') ADVANCE(506);
      END_STATE();
    case 180:
      if (lookahead == 'a') ADVANCE(308);
      END_STATE();
    case 181:
      if (lookahead == 'a') ADVANCE(467);
      END_STATE();
    case 182:
      if (lookahead == 'a') ADVANCE(319);
      END_STATE();
    case 183:
      if (lookahead == 'a') ADVANCE(396);
      END_STATE();
    case 184:
      if (lookahead == 'a') ADVANCE(375);
      END_STATE();
    case 185:
      if (lookahead == 'a') ADVANCE(409);
      END_STATE();
    case 186:
      if (lookahead == 'a') ADVANCE(310);
      END_STATE();
    case 187:
      if (lookahead == 'a') ADVANCE(311);
      END_STATE();
    case 188:
      if (lookahead == 'a') ADVANCE(312);
      END_STATE();
    case 189:
      if (lookahead == 'a') ADVANCE(476);
      END_STATE();
    case 190:
      if (lookahead == 'a') ADVANCE(411);
      END_STATE();
    case 191:
      if (lookahead == 'a') ADVANCE(482);
      END_STATE();
    case 192:
      if (lookahead == 'a') ADVANCE(479);
      END_STATE();
    case 193:
      if (lookahead == 'b') ADVANCE(361);
      if (lookahead == 'y') ADVANCE(46);
      END_STATE();
    case 194:
      if (lookahead == 'b') ADVANCE(306);
      END_STATE();
    case 195:
      if (lookahead == 'b') ADVANCE(363);
      END_STATE();
    case 196:
      if (lookahead == 'c') ADVANCE(64);
      END_STATE();
    case 197:
      if (lookahead == 'c') ADVANCE(275);
      END_STATE();
    case 198:
      if (lookahead == 'c') ADVANCE(356);
      END_STATE();
    case 199:
      if (lookahead == 'c') ADVANCE(303);
      END_STATE();
    case 200:
      if (lookahead == 'c') ADVANCE(158);
      END_STATE();
    case 201:
      if (lookahead == 'c') ADVANCE(357);
      END_STATE();
    case 202:
      if (lookahead == 'c') ADVANCE(184);
      END_STATE();
    case 203:
      if (lookahead == 'c') ADVANCE(367);
      END_STATE();
    case 204:
      if (lookahead == 'c') ADVANCE(258);
      END_STATE();
    case 205:
      if (lookahead == 'c') ADVANCE(494);
      END_STATE();
    case 206:
      if (lookahead == 'c') ADVANCE(480);
      END_STATE();
    case 207:
      if (lookahead == 'c') ADVANCE(192);
      END_STATE();
    case 208:
      if (lookahead == 'd') ADVANCE(55);
      END_STATE();
    case 209:
      if (lookahead == 'd') ADVANCE(588);
      END_STATE();
    case 210:
      if (lookahead == 'd') ADVANCE(508);
      END_STATE();
    case 211:
      if (lookahead == 'd') ADVANCE(288);
      END_STATE();
    case 212:
      if (lookahead == 'd') ADVANCE(429);
      END_STATE();
    case 213:
      if (lookahead == 'd') ADVANCE(227);
      END_STATE();
    case 214:
      if (lookahead == 'd') ADVANCE(228);
      END_STATE();
    case 215:
      if (lookahead == 'd') ADVANCE(246);
      END_STATE();
    case 216:
      if (lookahead == 'd') ADVANCE(254);
      END_STATE();
    case 217:
      if (lookahead == 'e') ADVANCE(156);
      END_STATE();
    case 218:
      if (lookahead == 'e') ADVANCE(263);
      END_STATE();
    case 219:
      if (lookahead == 'e') ADVANCE(57);
      END_STATE();
    case 220:
      if (lookahead == 'e') ADVANCE(919);
      END_STATE();
    case 221:
      if (lookahead == 'e') ADVANCE(921);
      END_STATE();
    case 222:
      if (lookahead == 'e') ADVANCE(605);
      END_STATE();
    case 223:
      if (lookahead == 'e') ADVANCE(598);
      END_STATE();
    case 224:
      if (lookahead == 'e') ADVANCE(590);
      END_STATE();
    case 225:
      if (lookahead == 'e') ADVANCE(597);
      END_STATE();
    case 226:
      if (lookahead == 'e') ADVANCE(599);
      END_STATE();
    case 227:
      if (lookahead == 'e') ADVANCE(915);
      END_STATE();
    case 228:
      if (lookahead == 'e') ADVANCE(914);
      END_STATE();
    case 229:
      if (lookahead == 'e') ADVANCE(916);
      END_STATE();
    case 230:
      if (lookahead == 'e') ADVANCE(917);
      END_STATE();
    case 231:
      if (lookahead == 'e') ADVANCE(383);
      END_STATE();
    case 232:
      if (lookahead == 'e') ADVANCE(262);
      END_STATE();
    case 233:
      if (lookahead == 'e') ADVANCE(44);
      END_STATE();
    case 234:
      if (lookahead == 'e') ADVANCE(390);
      END_STATE();
    case 235:
      if (lookahead == 'e') ADVANCE(264);
      END_STATE();
    case 236:
      if (lookahead == 'e') ADVANCE(211);
      END_STATE();
    case 237:
      if (lookahead == 'e') ADVANCE(504);
      END_STATE();
    case 238:
      if (lookahead == 'e') ADVANCE(205);
      END_STATE();
    case 239:
      if (lookahead == 'e') ADVANCE(209);
      END_STATE();
    case 240:
      if (lookahead == 'e') ADVANCE(502);
      END_STATE();
    case 241:
      if (lookahead == 'e') ADVANCE(502);
      if (lookahead == 't') ADVANCE(320);
      END_STATE();
    case 242:
      if (lookahead == 'e') ADVANCE(428);
      END_STATE();
    case 243:
      if (lookahead == 'e') ADVANCE(431);
      END_STATE();
    case 244:
      if (lookahead == 'e') ADVANCE(206);
      END_STATE();
    case 245:
      if (lookahead == 'e') ADVANCE(415);
      END_STATE();
    case 246:
      if (lookahead == 'e') ADVANCE(385);
      END_STATE();
    case 247:
      if (lookahead == 'e') ADVANCE(171);
      END_STATE();
    case 248:
      if (lookahead == 'e') ADVANCE(387);
      END_STATE();
    case 249:
      if (lookahead == 'e') ADVANCE(155);
      END_STATE();
    case 250:
      if (lookahead == 'e') ADVANCE(388);
      END_STATE();
    case 251:
      if (lookahead == 'e') ADVANCE(410);
      END_STATE();
    case 252:
      if (lookahead == 'e') ADVANCE(386);
      END_STATE();
    case 253:
      if (lookahead == 'e') ADVANCE(421);
      END_STATE();
    case 254:
      if (lookahead == 'e') ADVANCE(423);
      END_STATE();
    case 255:
      if (lookahead == 'e') ADVANCE(442);
      END_STATE();
    case 256:
      if (lookahead == 'e') ADVANCE(201);
      END_STATE();
    case 257:
      if (lookahead == 'e') ADVANCE(444);
      END_STATE();
    case 258:
      if (lookahead == 'e') ADVANCE(401);
      END_STATE();
    case 259:
      if (lookahead == 'e') ADVANCE(191);
      END_STATE();
    case 260:
      if (lookahead == 'e') ADVANCE(448);
      END_STATE();
    case 261:
      if (lookahead == 'g') ADVANCE(640);
      END_STATE();
    case 262:
      if (lookahead == 'g') ADVANCE(237);
      END_STATE();
    case 263:
      if (lookahead == 'g') ADVANCE(237);
      if (lookahead == 't') ADVANCE(392);
      END_STATE();
    case 264:
      if (lookahead == 'g') ADVANCE(252);
      END_STATE();
    case 265:
      if (lookahead == 'g') ADVANCE(119);
      END_STATE();
    case 266:
      if (lookahead == 'h') ADVANCE(607);
      END_STATE();
    case 267:
      if (lookahead == 'h') ADVANCE(608);
      END_STATE();
    case 268:
      if (lookahead == 'h') ADVANCE(632);
      END_STATE();
    case 269:
      if (lookahead == 'h') ADVANCE(631);
      END_STATE();
    case 270:
      if (lookahead == 'h') ADVANCE(50);
      END_STATE();
    case 271:
      if (lookahead == 'h') ADVANCE(141);
      END_STATE();
    case 272:
      if (lookahead == 'h') ADVANCE(149);
      if (lookahead == 't') ADVANCE(181);
      END_STATE();
    case 273:
      if (lookahead == 'h') ADVANCE(168);
      END_STATE();
    case 274:
      if (lookahead == 'h') ADVANCE(173);
      END_STATE();
    case 275:
      if (lookahead == 'h') ADVANCE(253);
      END_STATE();
    case 276:
      if (lookahead == 'i') ADVANCE(196);
      END_STATE();
    case 277:
      if (lookahead == 'i') ADVANCE(376);
      END_STATE();
    case 278:
      if (lookahead == 'i') ADVANCE(242);
      END_STATE();
    case 279:
      if (lookahead == 'i') ADVANCE(321);
      END_STATE();
    case 280:
      if (lookahead == 'i') ADVANCE(345);
      END_STATE();
    case 281:
      if (lookahead == 'i') ADVANCE(333);
      if (lookahead == 'm') ADVANCE(179);
      END_STATE();
    case 282:
      if (lookahead == 'i') ADVANCE(352);
      END_STATE();
    case 283:
      if (lookahead == 'i') ADVANCE(150);
      END_STATE();
    case 284:
      if (lookahead == 'i') ADVANCE(355);
      END_STATE();
    case 285:
      if (lookahead == 'i') ADVANCE(328);
      END_STATE();
    case 286:
      if (lookahead == 'i') ADVANCE(222);
      END_STATE();
    case 287:
      if (lookahead == 'i') ADVANCE(359);
      END_STATE();
    case 288:
      if (lookahead == 'i') ADVANCE(406);
      END_STATE();
    case 289:
      if (lookahead == 'i') ADVANCE(418);
      END_STATE();
    case 290:
      if (lookahead == 'i') ADVANCE(470);
      END_STATE();
    case 291:
      if (lookahead == 'i') ADVANCE(446);
      END_STATE();
    case 292:
      if (lookahead == 'i') ADVANCE(471);
      END_STATE();
    case 293:
      if (lookahead == 'i') ADVANCE(339);
      END_STATE();
    case 294:
      if (lookahead == 'k') ADVANCE(278);
      END_STATE();
    case 295:
      if (lookahead == 'k') ADVANCE(286);
      END_STATE();
    case 296:
      if (lookahead == 'l') ADVANCE(603);
      END_STATE();
    case 297:
      if (lookahead == 'l') ADVANCE(923);
      END_STATE();
    case 298:
      if (lookahead == 'l') ADVANCE(595);
      END_STATE();
    case 299:
      if (lookahead == 'l') ADVANCE(75);
      END_STATE();
    case 300:
      if (lookahead == 'l') ADVANCE(86);
      END_STATE();
    case 301:
      if (lookahead == 'l') ADVANCE(297);
      END_STATE();
    case 302:
      if (lookahead == 'l') ADVANCE(233);
      END_STATE();
    case 303:
      if (lookahead == 'l') ADVANCE(489);
      END_STATE();
    case 304:
      if (lookahead == 'l') ADVANCE(439);
      END_STATE();
    case 305:
      if (lookahead == 'l') ADVANCE(369);
      END_STATE();
    case 306:
      if (lookahead == 'l') ADVANCE(225);
      END_STATE();
    case 307:
      if (lookahead == 'l') ADVANCE(247);
      END_STATE();
    case 308:
      if (lookahead == 'l') ADVANCE(419);
      END_STATE();
    case 309:
      if (lookahead == 'l') ADVANCE(244);
      END_STATE();
    case 310:
      if (lookahead == 'l') ADVANCE(424);
      END_STATE();
    case 311:
      if (lookahead == 'l') ADVANCE(425);
      END_STATE();
    case 312:
      if (lookahead == 'l') ADVANCE(426);
      END_STATE();
    case 313:
      if (lookahead == 'l') ADVANCE(463);
      END_STATE();
    case 314:
      if (lookahead == 'l') ADVANCE(309);
      END_STATE();
    case 315:
      if (lookahead == 'm') ADVANCE(116);
      END_STATE();
    case 316:
      if (lookahead == 'm') ADVANCE(74);
      END_STATE();
    case 317:
      if (lookahead == 'm') ADVANCE(373);
      if (lookahead == 'o') ADVANCE(295);
      END_STATE();
    case 318:
      if (lookahead == 'm') ADVANCE(435);
      END_STATE();
    case 319:
      if (lookahead == 'm') ADVANCE(437);
      END_STATE();
    case 320:
      if (lookahead == 'm') ADVANCE(300);
      END_STATE();
    case 321:
      if (lookahead == 'n') ADVANCE(265);
      END_STATE();
    case 322:
      if (lookahead == 'n') ADVANCE(610);
      END_STATE();
    case 323:
      if (lookahead == 'n') ADVANCE(589);
      END_STATE();
    case 324:
      if (lookahead == 'n') ADVANCE(624);
      END_STATE();
    case 325:
      if (lookahead == 'n') ADVANCE(639);
      END_STATE();
    case 326:
      if (lookahead == 'n') ADVANCE(619);
      END_STATE();
    case 327:
      if (lookahead == 'n') ADVANCE(641);
      END_STATE();
    case 328:
      if (lookahead == 'n') ADVANCE(261);
      END_STATE();
    case 329:
      if (lookahead == 'n') ADVANCE(212);
      if (lookahead == 'q') ADVANCE(492);
      if (lookahead == 'x') ADVANCE(291);
      END_STATE();
    case 330:
      if (lookahead == 'n') ADVANCE(430);
      END_STATE();
    case 331:
      if (lookahead == 'n') ADVANCE(199);
      if (lookahead == 's') ADVANCE(66);
      END_STATE();
    case 332:
      if (lookahead == 'n') ADVANCE(436);
      END_STATE();
    case 333:
      if (lookahead == 'n') ADVANCE(481);
      END_STATE();
    case 334:
      if (lookahead == 'n') ADVANCE(453);
      END_STATE();
    case 335:
      if (lookahead == 'n') ADVANCE(472);
      if (lookahead == 'u') ADVANCE(336);
      END_STATE();
    case 336:
      if (lookahead == 'n') ADVANCE(455);
      END_STATE();
    case 337:
      if (lookahead == 'n') ADVANCE(474);
      END_STATE();
    case 338:
      if (lookahead == 'n') ADVANCE(456);
      END_STATE();
    case 339:
      if (lookahead == 'n') ADVANCE(422);
      END_STATE();
    case 340:
      if (lookahead == 'n') ADVANCE(203);
      END_STATE();
    case 341:
      if (lookahead == 'n') ADVANCE(260);
      END_STATE();
    case 342:
      if (lookahead == 'n') ADVANCE(378);
      END_STATE();
    case 343:
      if (lookahead == 'o') ADVANCE(382);
      END_STATE();
    case 344:
      if (lookahead == 'o') ADVANCE(294);
      END_STATE();
    case 345:
      if (lookahead == 'o') ADVANCE(330);
      END_STATE();
    case 346:
      if (lookahead == 'o') ADVANCE(210);
      if (lookahead == 'y') ADVANCE(478);
      END_STATE();
    case 347:
      if (lookahead == 'o') ADVANCE(335);
      END_STATE();
    case 348:
      if (lookahead == 'o') ADVANCE(344);
      END_STATE();
    case 349:
      if (lookahead == 'o') ADVANCE(505);
      END_STATE();
    case 350:
      if (lookahead == 'o') ADVANCE(207);
      END_STATE();
    case 351:
      if (lookahead == 'o') ADVANCE(342);
      END_STATE();
    case 352:
      if (lookahead == 'o') ADVANCE(322);
      END_STATE();
    case 353:
      if (lookahead == 'o') ADVANCE(98);
      END_STATE();
    case 354:
      if (lookahead == 'o') ADVANCE(98);
      if (lookahead == 'r') ADVANCE(491);
      END_STATE();
    case 355:
      if (lookahead == 'o') ADVANCE(323);
      END_STATE();
    case 356:
      if (lookahead == 'o') ADVANCE(495);
      END_STATE();
    case 357:
      if (lookahead == 'o') ADVANCE(213);
      END_STATE();
    case 358:
      if (lookahead == 'o') ADVANCE(314);
      END_STATE();
    case 359:
      if (lookahead == 'o') ADVANCE(327);
      END_STATE();
    case 360:
      if (lookahead == 'o') ADVANCE(368);
      END_STATE();
    case 361:
      if (lookahead == 'o') ADVANCE(440);
      END_STATE();
    case 362:
      if (lookahead == 'o') ADVANCE(454);
      if (lookahead == 'u') ADVANCE(301);
      END_STATE();
    case 363:
      if (lookahead == 'o') ADVANCE(443);
      END_STATE();
    case 364:
      if (lookahead == 'o') ADVANCE(391);
      END_STATE();
    case 365:
      if (lookahead == 'o') ADVANCE(295);
      END_STATE();
    case 366:
      if (lookahead == 'o') ADVANCE(365);
      END_STATE();
    case 367:
      if (lookahead == 'o') ADVANCE(214);
      END_STATE();
    case 368:
      if (lookahead == 'o') ADVANCE(307);
      END_STATE();
    case 369:
      if (lookahead == 'o') ADVANCE(176);
      END_STATE();
    case 370:
      if (lookahead == 'o') ADVANCE(496);
      END_STATE();
    case 371:
      if (lookahead == 'p') ADVANCE(458);
      END_STATE();
    case 372:
      if (lookahead == 'p') ADVANCE(460);
      END_STATE();
    case 373:
      if (lookahead == 'p') ADVANCE(402);
      END_STATE();
    case 374:
      if (lookahead == 'p') ADVANCE(229);
      END_STATE();
    case 375:
      if (lookahead == 'p') ADVANCE(230);
      END_STATE();
    case 376:
      if (lookahead == 'p') ADVANCE(183);
      END_STATE();
    case 377:
      if (lookahead == 'p') ADVANCE(166);
      END_STATE();
    case 378:
      if (lookahead == 'p') ADVANCE(172);
      END_STATE();
    case 379:
      if (lookahead == 'q') ADVANCE(497);
      END_STATE();
    case 380:
      if (lookahead == 'q') ADVANCE(498);
      END_STATE();
    case 381:
      if (lookahead == 'q') ADVANCE(499);
      END_STATE();
    case 382:
      if (lookahead == 'r') ADVANCE(315);
      END_STATE();
    case 383:
      if (lookahead == 'r') ADVANCE(507);
      END_STATE();
    case 384:
      if (lookahead == 'r') ADVANCE(193);
      END_STATE();
    case 385:
      if (lookahead == 'r') ADVANCE(604);
      END_STATE();
    case 386:
      if (lookahead == 'r') ADVANCE(637);
      END_STATE();
    case 387:
      if (lookahead == 'r') ADVANCE(195);
      END_STATE();
    case 388:
      if (lookahead == 'r') ADVANCE(500);
      END_STATE();
    case 389:
      if (lookahead == 'r') ADVANCE(153);
      END_STATE();
    case 390:
      if (lookahead == 'r') ADVANCE(462);
      END_STATE();
    case 391:
      if (lookahead == 'r') ADVANCE(316);
      END_STATE();
    case 392:
      if (lookahead == 'r') ADVANCE(510);
      END_STATE();
    case 393:
      if (lookahead == 'r') ADVANCE(491);
      END_STATE();
    case 394:
      if (lookahead == 'r') ADVANCE(296);
      END_STATE();
    case 395:
      if (lookahead == 'r') ADVANCE(279);
      END_STATE();
    case 396:
      if (lookahead == 'r') ADVANCE(451);
      END_STATE();
    case 397:
      if (lookahead == 'r') ADVANCE(283);
      END_STATE();
    case 398:
      if (lookahead == 'r') ADVANCE(189);
      END_STATE();
    case 399:
      if (lookahead == 'r') ADVANCE(299);
      END_STATE();
    case 400:
      if (lookahead == 'r') ADVANCE(87);
      END_STATE();
    case 401:
      if (lookahead == 'r') ADVANCE(452);
      END_STATE();
    case 402:
      if (lookahead == 'r') ADVANCE(255);
      END_STATE();
    case 403:
      if (lookahead == 'r') ADVANCE(285);
      END_STATE();
    case 404:
      if (lookahead == 'r') ADVANCE(236);
      END_STATE();
    case 405:
      if (lookahead == 'r') ADVANCE(224);
      END_STATE();
    case 406:
      if (lookahead == 'r') ADVANCE(417);
      END_STATE();
    case 407:
      if (lookahead == 'r') ADVANCE(259);
      END_STATE();
    case 408:
      if (lookahead == 'r') ADVANCE(243);
      END_STATE();
    case 409:
      if (lookahead == 'r') ADVANCE(182);
      END_STATE();
    case 410:
      if (lookahead == 'r') ADVANCE(133);
      END_STATE();
    case 411:
      if (lookahead == 'r') ADVANCE(483);
      END_STATE();
    case 412:
      if (lookahead == 'r') ADVANCE(88);
      END_STATE();
    case 413:
      if (lookahead == 's') ADVANCE(276);
      END_STATE();
    case 414:
      if (lookahead == 's') ADVANCE(137);
      END_STATE();
    case 415:
      if (lookahead == 's') ADVANCE(613);
      END_STATE();
    case 416:
      if (lookahead == 's') ADVANCE(602);
      END_STATE();
    case 417:
      if (lookahead == 's') ADVANCE(591);
      END_STATE();
    case 418:
      if (lookahead == 's') ADVANCE(592);
      END_STATE();
    case 419:
      if (lookahead == 's') ADVANCE(615);
      END_STATE();
    case 420:
      if (lookahead == 's') ADVANCE(635);
      END_STATE();
    case 421:
      if (lookahead == 's') ADVANCE(634);
      END_STATE();
    case 422:
      if (lookahead == 's') ADVANCE(633);
      END_STATE();
    case 423:
      if (lookahead == 's') ADVANCE(636);
      END_STATE();
    case 424:
      if (lookahead == 's') ADVANCE(617);
      END_STATE();
    case 425:
      if (lookahead == 's') ADVANCE(629);
      END_STATE();
    case 426:
      if (lookahead == 's') ADVANCE(622);
      END_STATE();
    case 427:
      if (lookahead == 's') ADVANCE(445);
      END_STATE();
    case 428:
      if (lookahead == 's') ADVANCE(138);
      END_STATE();
    case 429:
      if (lookahead == 's') ADVANCE(135);
      END_STATE();
    case 430:
      if (lookahead == 's') ADVANCE(139);
      END_STATE();
    case 431:
      if (lookahead == 's') ADVANCE(140);
      END_STATE();
    case 432:
      if (lookahead == 's') ADVANCE(48);
      END_STATE();
    case 433:
      if (lookahead == 's') ADVANCE(351);
      END_STATE();
    case 434:
      if (lookahead == 's') ADVANCE(219);
      END_STATE();
    case 435:
      if (lookahead == 's') ADVANCE(142);
      END_STATE();
    case 436:
      if (lookahead == 's') ADVANCE(238);
      END_STATE();
    case 437:
      if (lookahead == 's') ADVANCE(144);
      END_STATE();
    case 438:
      if (lookahead == 's') ADVANCE(131);
      END_STATE();
    case 439:
      if (lookahead == 's') ADVANCE(221);
      END_STATE();
    case 440:
      if (lookahead == 's') ADVANCE(223);
      END_STATE();
    case 441:
      if (lookahead == 's') ADVANCE(239);
      END_STATE();
    case 442:
      if (lookahead == 's') ADVANCE(441);
      END_STATE();
    case 443:
      if (lookahead == 's') ADVANCE(226);
      END_STATE();
    case 444:
      if (lookahead == 's') ADVANCE(438);
      END_STATE();
    case 445:
      if (lookahead == 's') ADVANCE(234);
      END_STATE();
    case 446:
      if (lookahead == 's') ADVANCE(475);
      END_STATE();
    case 447:
      if (lookahead == 's') ADVANCE(200);
      END_STATE();
    case 448:
      if (lookahead == 's') ADVANCE(202);
      END_STATE();
    case 449:
      if (lookahead == 's') ADVANCE(136);
      END_STATE();
    case 450:
      if (lookahead == 't') ADVANCE(271);
      END_STATE();
    case 451:
      if (lookahead == 't') ADVANCE(90);
      END_STATE();
    case 452:
      if (lookahead == 't') ADVANCE(587);
      END_STATE();
    case 453:
      if (lookahead == 't') ADVANCE(596);
      END_STATE();
    case 454:
      if (lookahead == 't') ADVANCE(614);
      END_STATE();
    case 455:
      if (lookahead == 't') ADVANCE(913);
      END_STATE();
    case 456:
      if (lookahead == 't') ADVANCE(918);
      END_STATE();
    case 457:
      if (lookahead == 't') ADVANCE(638);
      END_STATE();
    case 458:
      if (lookahead == 't') ADVANCE(280);
      END_STATE();
    case 459:
      if (lookahead == 't') ADVANCE(270);
      END_STATE();
    case 460:
      if (lookahead == 't') ADVANCE(486);
      END_STATE();
    case 461:
      if (lookahead == 't') ADVANCE(266);
      END_STATE();
    case 462:
      if (lookahead == 't') ADVANCE(414);
      END_STATE();
    case 463:
      if (lookahead == 't') ADVANCE(277);
      END_STATE();
    case 464:
      if (lookahead == 't') ADVANCE(320);
      END_STATE();
    case 465:
      if (lookahead == 't') ADVANCE(267);
      END_STATE();
    case 466:
      if (lookahead == 't') ADVANCE(162);
      END_STATE();
    case 467:
      if (lookahead == 't') ADVANCE(493);
      END_STATE();
    case 468:
      if (lookahead == 't') ADVANCE(395);
      END_STATE();
    case 469:
      if (lookahead == 't') ADVANCE(197);
      END_STATE();
    case 470:
      if (lookahead == 't') ADVANCE(268);
      END_STATE();
    case 471:
      if (lookahead == 't') ADVANCE(269);
      END_STATE();
    case 472:
      if (lookahead == 't') ADVANCE(167);
      END_STATE();
    case 473:
      if (lookahead == 't') ADVANCE(403);
      END_STATE();
    case 474:
      if (lookahead == 't') ADVANCE(235);
      END_STATE();
    case 475:
      if (lookahead == 't') ADVANCE(420);
      END_STATE();
    case 476:
      if (lookahead == 't') ADVANCE(282);
      END_STATE();
    case 477:
      if (lookahead == 't') ADVANCE(190);
      END_STATE();
    case 478:
      if (lookahead == 't') ADVANCE(245);
      END_STATE();
    case 479:
      if (lookahead == 't') ADVANCE(284);
      END_STATE();
    case 480:
      if (lookahead == 't') ADVANCE(287);
      END_STATE();
    case 481:
      if (lookahead == 't') ADVANCE(250);
      END_STATE();
    case 482:
      if (lookahead == 't') ADVANCE(251);
      END_STATE();
    case 483:
      if (lookahead == 't') ADVANCE(449);
      END_STATE();
    case 484:
      if (lookahead == 'u') ADVANCE(313);
      END_STATE();
    case 485:
      if (lookahead == 'u') ADVANCE(231);
      END_STATE();
    case 486:
      if (lookahead == 'u') ADVANCE(408);
      END_STATE();
    case 487:
      if (lookahead == 'u') ADVANCE(301);
      END_STATE();
    case 488:
      if (lookahead == 'u') ADVANCE(450);
      END_STATE();
    case 489:
      if (lookahead == 'u') ADVANCE(216);
      END_STATE();
    case 490:
      if (lookahead == 'u') ADVANCE(398);
      END_STATE();
    case 491:
      if (lookahead == 'u') ADVANCE(220);
      END_STATE();
    case 492:
      if (lookahead == 'u') ADVANCE(180);
      END_STATE();
    case 493:
      if (lookahead == 'u') ADVANCE(416);
      END_STATE();
    case 494:
      if (lookahead == 'u') ADVANCE(405);
      END_STATE();
    case 495:
      if (lookahead == 'u') ADVANCE(334);
      END_STATE();
    case 496:
      if (lookahead == 'u') ADVANCE(336);
      END_STATE();
    case 497:
      if (lookahead == 'u') ADVANCE(186);
      END_STATE();
    case 498:
      if (lookahead == 'u') ADVANCE(187);
      END_STATE();
    case 499:
      if (lookahead == 'u') ADVANCE(188);
      END_STATE();
    case 500:
      if (lookahead == 'v') ADVANCE(160);
      END_STATE();
    case 501:
      if (lookahead == 'v') ADVANCE(248);
      END_STATE();
    case 502:
      if (lookahead == 'x') ADVANCE(43);
      END_STATE();
    case 503:
      if (lookahead == 'x') ADVANCE(49);
      END_STATE();
    case 504:
      if (lookahead == 'x') ADVANCE(609);
      END_STATE();
    case 505:
      if (lookahead == 'x') ADVANCE(509);
      END_STATE();
    case 506:
      if (lookahead == 'x') ADVANCE(47);
      END_STATE();
    case 507:
      if (lookahead == 'y') ADVANCE(123);
      END_STATE();
    case 508:
      if (lookahead == 'y') ADVANCE(606);
      END_STATE();
    case 509:
      if (lookahead == 'y') ADVANCE(593);
      END_STATE();
    case 510:
      if (lookahead == 'y') ADVANCE(594);
      END_STATE();
    case 511:
      if (lookahead == '{') ADVANCE(907);
      END_STATE();
    case 512:
      if (lookahead == '}') ADVANCE(910);
      END_STATE();
    case 513:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1);
      END_STATE();
    case 514:
      if (eof) ADVANCE(521);
      if (lookahead == '\n') ADVANCE(522);
      if (lookahead == '"') ADVANCE(658);
      if (lookahead == '#') ADVANCE(513);
      if (lookahead == '.') ADVANCE(927);
      if (lookahead == '<') ADVANCE(628);
      if (lookahead == 'C') ADVANCE(112);
      if (lookahead == 'D') ADVANCE(76);
      if (lookahead == 'E') ADVANCE(929);
      if (lookahead == 'G') ADVANCE(77);
      if (lookahead == 'H') ADVANCE(83);
      if (lookahead == 'L') ADVANCE(94);
      if (lookahead == 'O') ADVANCE(118);
      if (lookahead == 'P') ADVANCE(65);
      if (lookahead == 'T') ADVANCE(121);
      if (lookahead == 'U') ADVANCE(106);
      if (lookahead == 'V') ADVANCE(93);
      if (lookahead == '[') ADVANCE(897);
      if (lookahead == '`') ADVANCE(146);
      if (lookahead == 'b') ADVANCE(170);
      if (lookahead == 'c') ADVANCE(154);
      if (lookahead == 'd') ADVANCE(490);
      if (lookahead == 'e') ADVANCE(928);
      if (lookahead == 'f') ADVANCE(152);
      if (lookahead == 'h') ADVANCE(217);
      if (lookahead == 'i') ADVANCE(332);
      if (lookahead == 'j') ADVANCE(433);
      if (lookahead == 'l') ADVANCE(350);
      if (lookahead == 'm') ADVANCE(148);
      if (lookahead == 'n') ADVANCE(487);
      if (lookahead == 'p') ADVANCE(163);
      if (lookahead == 'r') ADVANCE(218);
      if (lookahead == 's') ADVANCE(272);
      if (lookahead == 't') ADVANCE(393);
      if (lookahead == 'u') ADVANCE(394);
      if (lookahead == 'v') ADVANCE(165);
      if (lookahead == 'x') ADVANCE(377);
      if (lookahead == '{') ADVANCE(888);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(925);
      if (aux_sym_value_string_text_token1_character_set_1(lookahead)) SKIP(515)
      END_STATE();
    case 515:
      if (eof) ADVANCE(521);
      if (lookahead == '\n') ADVANCE(522);
      if (lookahead == '"') ADVANCE(658);
      if (lookahead == '#') ADVANCE(513);
      if (lookahead == '.') ADVANCE(927);
      if (lookahead == '<') ADVANCE(628);
      if (lookahead == 'C') ADVANCE(112);
      if (lookahead == 'D') ADVANCE(76);
      if (lookahead == 'E') ADVANCE(929);
      if (lookahead == 'G') ADVANCE(77);
      if (lookahead == 'H') ADVANCE(83);
      if (lookahead == 'L') ADVANCE(94);
      if (lookahead == 'O') ADVANCE(118);
      if (lookahead == 'P') ADVANCE(65);
      if (lookahead == 'T') ADVANCE(121);
      if (lookahead == 'U') ADVANCE(106);
      if (lookahead == 'V') ADVANCE(93);
      if (lookahead == '[') ADVANCE(897);
      if (lookahead == '`') ADVANCE(146);
      if (lookahead == 'b') ADVANCE(170);
      if (lookahead == 'c') ADVANCE(154);
      if (lookahead == 'd') ADVANCE(490);
      if (lookahead == 'e') ADVANCE(928);
      if (lookahead == 'f') ADVANCE(152);
      if (lookahead == 'h') ADVANCE(217);
      if (lookahead == 'i') ADVANCE(332);
      if (lookahead == 'j') ADVANCE(433);
      if (lookahead == 'l') ADVANCE(350);
      if (lookahead == 'm') ADVANCE(148);
      if (lookahead == 'n') ADVANCE(487);
      if (lookahead == 'p') ADVANCE(163);
      if (lookahead == 'r') ADVANCE(218);
      if (lookahead == 's') ADVANCE(272);
      if (lookahead == 't') ADVANCE(393);
      if (lookahead == 'u') ADVANCE(394);
      if (lookahead == 'v') ADVANCE(165);
      if (lookahead == 'x') ADVANCE(377);
      if (lookahead == '{') ADVANCE(887);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(925);
      if (aux_sym_value_string_text_token1_character_set_1(lookahead)) SKIP(515)
      END_STATE();
    case 516:
      if (eof) ADVANCE(521);
      if (lookahead == '\n') ADVANCE(522);
      if (lookahead == '"') ADVANCE(658);
      if (lookahead == '#') ADVANCE(513);
      if (lookahead == '<') ADVANCE(628);
      if (lookahead == 'C') ADVANCE(112);
      if (lookahead == 'D') ADVANCE(76);
      if (lookahead == 'G') ADVANCE(77);
      if (lookahead == 'H') ADVANCE(83);
      if (lookahead == 'L') ADVANCE(94);
      if (lookahead == 'O') ADVANCE(118);
      if (lookahead == 'P') ADVANCE(65);
      if (lookahead == 'T') ADVANCE(121);
      if (lookahead == 'U') ADVANCE(106);
      if (lookahead == 'V') ADVANCE(93);
      if (lookahead == '[') ADVANCE(899);
      if (lookahead == '`') ADVANCE(146);
      if (lookahead == 'b') ADVANCE(169);
      if (lookahead == 'f') ADVANCE(152);
      if (lookahead == 'h') ADVANCE(240);
      if (lookahead == 'n') ADVANCE(487);
      if (lookahead == 't') ADVANCE(393);
      if (lookahead == '{') ADVANCE(887);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(925);
      if (aux_sym_value_string_text_token1_character_set_1(lookahead)) SKIP(516)
      END_STATE();
    case 517:
      if (eof) ADVANCE(521);
      if (lookahead == '\n') ADVANCE(522);
      if (lookahead == '"') ADVANCE(658);
      if (lookahead == '#') ADVANCE(513);
      if (lookahead == '<') ADVANCE(628);
      if (lookahead == 'C') ADVANCE(112);
      if (lookahead == 'D') ADVANCE(76);
      if (lookahead == 'G') ADVANCE(77);
      if (lookahead == 'H') ADVANCE(82);
      if (lookahead == 'L') ADVANCE(94);
      if (lookahead == 'O') ADVANCE(118);
      if (lookahead == 'P') ADVANCE(65);
      if (lookahead == 'T') ADVANCE(121);
      if (lookahead == 'U') ADVANCE(106);
      if (lookahead == 'V') ADVANCE(93);
      if (lookahead == '[') ADVANCE(898);
      if (lookahead == '`') ADVANCE(146);
      if (lookahead == 'b') ADVANCE(169);
      if (lookahead == 'f') ADVANCE(152);
      if (lookahead == 'h') ADVANCE(240);
      if (lookahead == 'n') ADVANCE(487);
      if (lookahead == 't') ADVANCE(393);
      if (lookahead == '{') ADVANCE(887);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(925);
      if (aux_sym_value_string_text_token1_character_set_1(lookahead)) SKIP(517)
      END_STATE();
    case 518:
      if (eof) ADVANCE(521);
      if (lookahead == '\n') ADVANCE(522);
      if (lookahead == '"') ADVANCE(658);
      if (lookahead == '#') ADVANCE(513);
      if (sym_key_string_text_character_set_2(lookahead)) ADVANCE(834);
      if (lookahead == '<') ADVANCE(628);
      if (lookahead == 'C') ADVANCE(721);
      if (lookahead == 'D') ADVANCE(692);
      if (lookahead == 'G') ADVANCE(693);
      if (lookahead == 'H') ADVANCE(674);
      if (lookahead == 'L') ADVANCE(675);
      if (lookahead == 'O') ADVANCE(727);
      if (lookahead == 'P') ADVANCE(673);
      if (lookahead == 'T') ADVANCE(729);
      if (lookahead == 'U') ADVANCE(715);
      if (lookahead == 'V') ADVANCE(705);
      if (lookahead == '[') ADVANCE(900);
      if (lookahead == '\\') ADVANCE(838);
      if (lookahead == '`') ADVANCE(146);
      if (lookahead == 'b') ADVANCE(815);
      if (lookahead == 'f') ADVANCE(678);
      if (lookahead == 'h') ADVANCE(742);
      if (lookahead == 'n') ADVANCE(808);
      if (lookahead == 't') ADVANCE(781);
      if (lookahead == '{') ADVANCE(888);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(834);
      if (aux_sym_value_string_text_token1_character_set_1(lookahead)) SKIP(516)
      END_STATE();
    case 519:
      if (eof) ADVANCE(521);
      if (lookahead == '\n') ADVANCE(522);
      if (lookahead == '"') ADVANCE(658);
      if (lookahead == '#') ADVANCE(513);
      if (sym_key_string_text_character_set_2(lookahead)) ADVANCE(834);
      if (lookahead == '<') ADVANCE(628);
      if (lookahead == 'C') ADVANCE(721);
      if (lookahead == 'D') ADVANCE(692);
      if (lookahead == 'G') ADVANCE(693);
      if (lookahead == 'H') ADVANCE(694);
      if (lookahead == 'L') ADVANCE(675);
      if (lookahead == 'O') ADVANCE(727);
      if (lookahead == 'P') ADVANCE(673);
      if (lookahead == 'T') ADVANCE(729);
      if (lookahead == 'U') ADVANCE(715);
      if (lookahead == 'V') ADVANCE(705);
      if (lookahead == '[') ADVANCE(901);
      if (lookahead == '\\') ADVANCE(838);
      if (lookahead == '`') ADVANCE(146);
      if (lookahead == 'b') ADVANCE(815);
      if (lookahead == 'f') ADVANCE(678);
      if (lookahead == 'h') ADVANCE(742);
      if (lookahead == 'n') ADVANCE(808);
      if (lookahead == 't') ADVANCE(781);
      if (lookahead == '{') ADVANCE(888);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(834);
      if (aux_sym_value_string_text_token1_character_set_1(lookahead)) SKIP(517)
      END_STATE();
    case 520:
      if (eof) ADVANCE(521);
      if (lookahead == '!') ADVANCE(59);
      if (lookahead == '"') ADVANCE(658);
      if (lookahead == '#') ADVANCE(846);
      if (lookahead == '*') ADVANCE(565);
      if (lookahead == '+') ADVANCE(930);
      if (lookahead == ',') ADVANCE(895);
      if (lookahead == '-') ADVANCE(931);
      if (lookahead == '.') ADVANCE(927);
      if (lookahead == '/') ADVANCE(933);
      if (lookahead == ':') ADVANCE(583);
      if (lookahead == ';') ADVANCE(585);
      if (lookahead == '<') ADVANCE(625);
      if (lookahead == '=') ADVANCE(601);
      if (lookahead == '>') ADVANCE(621);
      if (lookahead == '?') ADVANCE(61);
      if (lookahead == 'E') ADVANCE(929);
      if (lookahead == '[') ADVANCE(897);
      if (lookahead == '\\') ADVANCE(663);
      if (lookahead == ']') ADVANCE(902);
      if (lookahead == '`') ADVANCE(849);
      if (lookahead == 'b') ADVANCE(667);
      if (lookahead == 'e') ADVANCE(928);
      if (lookahead == 'f') ADVANCE(668);
      if (lookahead == 'n') ADVANCE(669);
      if (lookahead == 'r') ADVANCE(670);
      if (lookahead == 't') ADVANCE(671);
      if (lookahead == 'u') ADVANCE(672);
      if (lookahead == '{') ADVANCE(887);
      if (lookahead == '}') ADVANCE(894);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'd')) ADVANCE(911);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(564);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(520)
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(911);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(522);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(523);
      if (sym_filename_text_character_set_1(lookahead)) ADVANCE(889);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(524);
      if (aux_sym_value_string_text_token1_character_set_1(lookahead)) ADVANCE(884);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(525);
      if (aux_sym_value_string_text_token1_character_set_1(lookahead)) ADVANCE(863);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(834);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(834);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(834);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(834);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(834);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(834);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(834);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(834);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(834);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(834);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(834);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(834);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(834);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(834);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(834);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(834);
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
      ACCEPT_TOKEN(anon_sym_HTTP);
      if (lookahead == '/') ADVANCE(42);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(anon_sym_HTTP);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(834);
      if (lookahead == '/') ADVANCE(42);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(aux_sym_status_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(564);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(anon_sym_LBRACKBasicAuth_RBRACK);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(anon_sym_LBRACKBasicAuth_RBRACK);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(834);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(anon_sym_LBRACKQueryStringParams_RBRACK);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(anon_sym_LBRACKQueryStringParams_RBRACK);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(834);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(anon_sym_LBRACKFormParams_RBRACK);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(anon_sym_LBRACKFormParams_RBRACK);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(834);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(anon_sym_LBRACKMultipartFormData_RBRACK);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(anon_sym_LBRACKMultipartFormData_RBRACK);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(834);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(anon_sym_LBRACKCookies_RBRACK);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(anon_sym_LBRACKCookies_RBRACK);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(834);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(anon_sym_LBRACKCaptures_RBRACK);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(anon_sym_LBRACKCaptures_RBRACK);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(834);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(anon_sym_LBRACKAsserts_RBRACK);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(anon_sym_LBRACKAsserts_RBRACK);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(834);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(anon_sym_LBRACKOptions_RBRACK);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(anon_sym_LBRACKOptions_RBRACK);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(834);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(anon_sym_COLON2);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(anon_sym_file_COMMA);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(aux_sym_file_contenttype_token1);
      if (lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(586);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(anon_sym_cacert);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(anon_sym_compressed);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(anon_sym_location);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(anon_sym_insecure);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(anon_sym_max_DASHredirs);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(anon_sym_path_DASHas_DASHis);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(anon_sym_proxy);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(anon_sym_retry);
      if (lookahead == '-') ADVANCE(281);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(anon_sym_retry_DASHinterval);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(anon_sym_retry_DASHmax_DASHcount);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(anon_sym_variable);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(anon_sym_verbose);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(anon_sym_very_DASHverbose);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(616);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(anon_sym_status);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(anon_sym_url);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(anon_sym_header);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(anon_sym_cookie);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(anon_sym_body);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(anon_sym_xpath);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(anon_sym_jsonpath);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(anon_sym_regex);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(anon_sym_duration);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(anon_sym_sha256);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(anon_sym_md5);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(anon_sym_bytes);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(anon_sym_not);
      if (lookahead == 'E') ADVANCE(379);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(anon_sym_equals);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(anon_sym_notEquals);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(anon_sym_greaterThan);
      if (lookahead == 'O') ADVANCE(412);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(623);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(anon_sym_greaterThanOrEquals);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(anon_sym_lessThan);
      if (lookahead == 'O') ADVANCE(400);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '/') ADVANCE(650);
      if (lookahead == '=') ADVANCE(630);
      if (lookahead == '?') ADVANCE(642);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '/') ADVANCE(650);
      if (lookahead == '?') ADVANCE(642);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(630);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '?') ADVANCE(642);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(anon_sym_lessThanOrEquals);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(anon_sym_startsWith);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(anon_sym_endsWith);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(anon_sym_contains);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(anon_sym_matches);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(anon_sym_exists);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(anon_sym_includes);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(anon_sym_isInteger);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(anon_sym_isFloat);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(anon_sym_isBoolean);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(anon_sym_isString);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(anon_sym_isCollection);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(anon_sym_LT_QMARK);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(aux_sym_xml_prolog_tag_token1);
      if (lookahead == '\n') ADVANCE(645);
      if (lookahead == '?') ADVANCE(1);
      if (lookahead != 0) ADVANCE(643);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(aux_sym_xml_prolog_tag_token1);
      if (lookahead == '#') ADVANCE(643);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) ADVANCE(644);
      if (lookahead != 0 &&
          lookahead != '?') ADVANCE(645);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(aux_sym_xml_prolog_tag_token1);
      if (lookahead != 0 &&
          lookahead != '?') ADVANCE(645);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(anon_sym_QMARK_GT);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(aux_sym_xml_open_tag_token1);
      if (lookahead == '\n') ADVANCE(649);
      if (lookahead == '>') ADVANCE(1);
      if (lookahead != 0) ADVANCE(647);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(aux_sym_xml_open_tag_token1);
      if (lookahead == '#') ADVANCE(647);
      if (lookahead == '>') ADVANCE(649);
      if (lookahead == '/' ||
          lookahead == '?') ADVANCE(649);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) ADVANCE(648);
      if (lookahead != 0) ADVANCE(649);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(aux_sym_xml_open_tag_token1);
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(649);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(anon_sym_LT_SLASH);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(aux_sym_xml_close_tag_token1);
      if (lookahead == '\n') ADVANCE(653);
      if (lookahead == '/' ||
          lookahead == '>') ADVANCE(1);
      if (lookahead != 0) ADVANCE(651);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(aux_sym_xml_close_tag_token1);
      if (lookahead == '#') ADVANCE(651);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) ADVANCE(652);
      if (lookahead != 0 &&
          lookahead != '/' &&
          lookahead != '>') ADVANCE(653);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(aux_sym_xml_close_tag_token1);
      if (lookahead != 0 &&
          lookahead != '/' &&
          lookahead != '>') ADVANCE(653);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(anon_sym_base64_COMMA);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(aux_sym_oneline_base64_token1);
      if (lookahead == '\n') ADVANCE(655);
      if (('+' <= lookahead && lookahead <= '-') ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(656);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(aux_sym_oneline_base64_token1);
      if (lookahead == '\n' ||
          ('+' <= lookahead && lookahead <= '-') ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(656);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(anon_sym_hex_COMMA);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(aux_sym_quoted_string_text_token1);
      if (lookahead == '\n') ADVANCE(662);
      if (lookahead == '"' ||
          lookahead == '\\') ADVANCE(1);
      if (lookahead != 0) ADVANCE(659);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(aux_sym_quoted_string_text_token1);
      if (lookahead == '#') ADVANCE(659);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) ADVANCE(660);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(662);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(aux_sym_quoted_string_text_token1);
      if (lookahead == '{') ADVANCE(909);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(662);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(aux_sym_quoted_string_text_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(662);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(aux_sym_invalid_quoted_string_escaped_char_token1);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(aux_sym_invalid_quoted_string_escaped_char_token1);
      if (lookahead == '#') ADVANCE(666);
      if (lookahead == 'b') ADVANCE(667);
      if (lookahead == 'f') ADVANCE(668);
      if (lookahead == 'n') ADVANCE(669);
      if (lookahead == 'r') ADVANCE(670);
      if (lookahead == 't') ADVANCE(671);
      if (aux_sym_invalid_quoted_string_escaped_char_token1_character_set_1(lookahead)) ADVANCE(665);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\f' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\' &&
          lookahead != 'u') ADVANCE(664);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(aux_sym_invalid_quoted_string_escaped_char_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(anon_sym_b);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(anon_sym_f);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(anon_sym_n);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(anon_sym_r);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(anon_sym_t);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(anon_sym_u);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(sym_key_string_text);
      if (sym_key_string_text_character_set_3(lookahead)) ADVANCE(834);
      if (lookahead == 'A') ADVANCE(738);
      if (lookahead == 'O') ADVANCE(732);
      if (lookahead == 'R') ADVANCE(722);
      if (lookahead == 'U') ADVANCE(677);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(sym_key_string_text);
      if (sym_key_string_text_character_set_4(lookahead)) ADVANCE(834);
      if (lookahead == 'E') ADVANCE(681);
      if (lookahead == 'T') ADVANCE(736);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(sym_key_string_text);
      if (sym_key_string_text_character_set_5(lookahead)) ADVANCE(834);
      if (lookahead == 'I') ADVANCE(714);
      if (lookahead == 'O') ADVANCE(685);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(sym_key_string_text);
      if (sym_key_string_text_character_set_5(lookahead)) ADVANCE(834);
      if (lookahead == 'I') ADVANCE(718);
      if (lookahead == 'O') ADVANCE(686);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(sym_key_string_text);
      if (sym_key_string_text_character_set_6(lookahead)) ADVANCE(834);
      if (lookahead == 'R') ADVANCE(703);
      if (lookahead == 'T') ADVANCE(533);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'h') ||
          ('j' <= lookahead && lookahead <= 'z')) ADVANCE(834);
      if (lookahead == 'a') ADVANCE(762);
      if (lookahead == 'i') ADVANCE(760);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '3') ||
          ('5' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(834);
      if (lookahead == '4') ADVANCE(837);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '5') ||
          ('7' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(834);
      if (lookahead == '6') ADVANCE(679);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '@' ||
          ('B' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(834);
      if (lookahead == 'A') ADVANCE(689);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '@' ||
          ('B' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(834);
      if (lookahead == 'A') ADVANCE(687);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '@' ||
          ('B' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(834);
      if (lookahead == 'A') ADVANCE(809);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'B') ||
          ('D' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(834);
      if (lookahead == 'C') ADVANCE(704);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'B') ||
          ('D' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(834);
      if (lookahead == 'C') ADVANCE(709);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'B') ||
          ('D' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(834);
      if (lookahead == 'C') ADVANCE(711);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'B') ||
          ('D' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(834);
      if (lookahead == 'C') ADVANCE(697);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'B') ||
          ('D' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(834);
      if (lookahead == 'C') ADVANCE(735);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'C') ||
          ('E' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(834);
      if (lookahead == 'D') ADVANCE(529);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'C') ||
          ('E' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(834);
      if (lookahead == 'D') ADVANCE(555);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'C') ||
          ('E' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(834);
      if (lookahead == 'D') ADVANCE(821);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'D') ||
          ('F' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(834);
      if (lookahead == 'E') ADVANCE(712);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'D') ||
          ('F' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(834);
      if (lookahead == 'E') ADVANCE(733);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'D') ||
          ('F' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(834);
      if (lookahead == 'E') ADVANCE(681);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'D') ||
          ('F' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(834);
      if (lookahead == 'E') ADVANCE(740);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'D') ||
          ('F' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(834);
      if (lookahead == 'E') ADVANCE(549);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'D') ||
          ('F' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(834);
      if (lookahead == 'E') ADVANCE(541);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'D') ||
          ('F' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(834);
      if (lookahead == 'E') ADVANCE(535);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'D') ||
          ('F' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(834);
      if (lookahead == 'E') ADVANCE(688);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'D') ||
          ('F' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(834);
      if (lookahead == 'E') ADVANCE(739);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'E') ||
          ('G' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(834);
      if (lookahead == 'F') ADVANCE(706);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'E') ||
          ('G' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(834);
      if (lookahead == 'F') ADVANCE(774);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'F') ||
          ('H' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(834);
      if (lookahead == 'G') ADVANCE(696);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'G') ||
          ('I' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(834);
      if (lookahead == 'H') ADVANCE(543);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'H') ||
          ('J' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(834);
      if (lookahead == 'I') ADVANCE(695);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'H') ||
          ('J' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(834);
      if (lookahead == 'I') ADVANCE(717);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'H') ||
          ('J' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(834);
      if (lookahead == 'I') ADVANCE(723);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'J') ||
          ('L' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(834);
      if (lookahead == 'K') ADVANCE(545);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'J') ||
          ('L' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(834);
      if (lookahead == 'K') ADVANCE(551);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'J') ||
          ('L' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(834);
      if (lookahead == 'K') ADVANCE(547);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'J') ||
          ('L' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(834);
      if (lookahead == 'K') ADVANCE(553);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'K') ||
          ('M' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(834);
      if (lookahead == 'L') ADVANCE(700);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'K') ||
          ('M' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(834);
      if (lookahead == 'L') ADVANCE(676);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'M') ||
          ('O' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(834);
      if (lookahead == 'N') ADVANCE(708);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'M') ||
          ('O' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(834);
      if (lookahead == 'N') ADVANCE(713);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'M') ||
          ('O' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(834);
      if (lookahead == 'N') ADVANCE(730);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'M') ||
          ('O' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(834);
      if (lookahead == 'N') ADVANCE(690);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'M') ||
          ('O' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(834);
      if (lookahead == 'N') ADVANCE(710);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'M') ||
          ('O' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(834);
      if (lookahead == 'N') ADVANCE(720);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'M') ||
          ('O' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(834);
      if (lookahead == 'N') ADVANCE(699);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'N') ||
          ('P' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(834);
      if (lookahead == 'O') ADVANCE(719);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'N') ||
          ('P' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(834);
      if (lookahead == 'O') ADVANCE(725);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'N') ||
          ('P' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(834);
      if (lookahead == 'O') ADVANCE(716);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'O') ||
          ('Q' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(834);
      if (lookahead == 'P') ADVANCE(563);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'O') ||
          ('Q' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(834);
      if (lookahead == 'P') ADVANCE(701);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'O') ||
          ('Q' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(834);
      if (lookahead == 'P') ADVANCE(819);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'O') ||
          ('Q' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(834);
      if (lookahead == 'P') ADVANCE(737);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'O') ||
          ('Q' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(834);
      if (lookahead == 'P') ADVANCE(825);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Q') ||
          ('S' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(834);
      if (lookahead == 'R') ADVANCE(682);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'R') ||
          ('T' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(834);
      if (lookahead == 'S') ADVANCE(539);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'R') ||
          ('T' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(834);
      if (lookahead == 'S') ADVANCE(805);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'R') ||
          ('T' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(834);
      if (lookahead == 'S') ADVANCE(734);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'S') ||
          ('U' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(834);
      if (lookahead == 'T') ADVANCE(527);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'S') ||
          ('U' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(834);
      if (lookahead == 'T') ADVANCE(531);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'S') ||
          ('U' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(834);
      if (lookahead == 'T') ADVANCE(537);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'S') ||
          ('U' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(834);
      if (lookahead == 'T') ADVANCE(724);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'S') ||
          ('U' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(834);
      if (lookahead == 'T') ADVANCE(707);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'S') ||
          ('U' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(834);
      if (lookahead == 'T') ADVANCE(684);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'S') ||
          ('U' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(834);
      if (lookahead == 'T') ADVANCE(698);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'V') ||
          ('X' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(834);
      if (lookahead == 'W') ADVANCE(557);
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
          lookahead == 'a' ||
          lookahead == 'b' ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(834);
      if (lookahead == 'c') ADVANCE(683);
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
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(834);
      if (lookahead == 'e') ADVANCE(813);
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
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(834);
      if (lookahead == 'e') ADVANCE(680);
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
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(834);
      if (lookahead == 'e') ADVANCE(920);
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
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(834);
      if (lookahead == 'e') ADVANCE(922);
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
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(834);
      if (lookahead == 'e') ADVANCE(836);
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
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(834);
      if (lookahead == 'e') ADVANCE(779);
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
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(834);
      if (lookahead == 'e') ADVANCE(789);
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
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(834);
      if (lookahead == 'e') ADVANCE(785);
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
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(834);
      if (lookahead == 'e') ADVANCE(796);
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
          ('a' <= lookahead && lookahead <= 'f') ||
          ('h' <= lookahead && lookahead <= 'z')) ADVANCE(834);
      if (lookahead == 'g') ADVANCE(728);
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
          ('a' <= lookahead && lookahead <= 'g') ||
          ('i' <= lookahead && lookahead <= 'z')) ADVANCE(834);
      if (lookahead == 'h') ADVANCE(828);
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
          ('a' <= lookahead && lookahead <= 'h') ||
          ('j' <= lookahead && lookahead <= 'z')) ADVANCE(834);
      if (lookahead == 'i') ADVANCE(741);
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
          ('a' <= lookahead && lookahead <= 'h') ||
          ('j' <= lookahead && lookahead <= 'z')) ADVANCE(834);
      if (lookahead == 'i') ADVANCE(777);
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
          ('a' <= lookahead && lookahead <= 'h') ||
          ('j' <= lookahead && lookahead <= 'z')) ADVANCE(834);
      if (lookahead == 'i') ADVANCE(768);
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
          ('a' <= lookahead && lookahead <= 'h') ||
          ('j' <= lookahead && lookahead <= 'z')) ADVANCE(834);
      if (lookahead == 'i') ADVANCE(771);
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
          ('a' <= lookahead && lookahead <= 'h') ||
          ('j' <= lookahead && lookahead <= 'z')) ADVANCE(834);
      if (lookahead == 'i') ADVANCE(748);
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
          ('a' <= lookahead && lookahead <= 'j') ||
          ('l' <= lookahead && lookahead <= 'z')) ADVANCE(834);
      if (lookahead == 'k') ADVANCE(757);
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
          ('a' <= lookahead && lookahead <= 'k') ||
          ('m' <= lookahead && lookahead <= 'z')) ADVANCE(834);
      if (lookahead == 'l') ADVANCE(924);
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
          ('a' <= lookahead && lookahead <= 'k') ||
          ('m' <= lookahead && lookahead <= 'z')) ADVANCE(834);
      if (lookahead == 'l') ADVANCE(746);
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
          ('a' <= lookahead && lookahead <= 'k') ||
          ('m' <= lookahead && lookahead <= 'z')) ADVANCE(834);
      if (lookahead == 'l') ADVANCE(759);
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
          ('a' <= lookahead && lookahead <= 'k') ||
          ('m' <= lookahead && lookahead <= 'z')) ADVANCE(834);
      if (lookahead == 'l') ADVANCE(793);
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
          ('a' <= lookahead && lookahead <= 'k') ||
          ('m' <= lookahead && lookahead <= 'z')) ADVANCE(834);
      if (lookahead == 'l') ADVANCE(802);
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
          ('a' <= lookahead && lookahead <= 'l') ||
          ('n' <= lookahead && lookahead <= 'z')) ADVANCE(834);
      if (lookahead == 'm') ADVANCE(691);
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
          ('a' <= lookahead && lookahead <= 'l') ||
          ('n' <= lookahead && lookahead <= 'z')) ADVANCE(834);
      if (lookahead == 'm') ADVANCE(726);
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
          ('a' <= lookahead && lookahead <= 'l') ||
          ('n' <= lookahead && lookahead <= 'z')) ADVANCE(834);
      if (lookahead == 'm') ADVANCE(792);
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
          ('a' <= lookahead && lookahead <= 'l') ||
          ('n' <= lookahead && lookahead <= 'z')) ADVANCE(834);
      if (lookahead == 'm') ADVANCE(794);
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
          ('a' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'z')) ADVANCE(834);
      if (lookahead == 'n') ADVANCE(751);
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
          ('a' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'z')) ADVANCE(834);
      if (lookahead == 'n') ADVANCE(790);
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
          ('a' <= lookahead && lookahead <= 'n') ||
          ('p' <= lookahead && lookahead <= 'z')) ADVANCE(834);
      if (lookahead == 'o') ADVANCE(758);
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
          ('a' <= lookahead && lookahead <= 'n') ||
          ('p' <= lookahead && lookahead <= 'z')) ADVANCE(834);
      if (lookahead == 'o') ADVANCE(769);
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
          ('a' <= lookahead && lookahead <= 'n') ||
          ('p' <= lookahead && lookahead <= 'z')) ADVANCE(834);
      if (lookahead == 'o') ADVANCE(778);
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
          ('a' <= lookahead && lookahead <= 'n') ||
          ('p' <= lookahead && lookahead <= 'z')) ADVANCE(834);
      if (lookahead == 'o') ADVANCE(770);
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
          ('a' <= lookahead && lookahead <= 'n') ||
          ('p' <= lookahead && lookahead <= 'z')) ADVANCE(834);
      if (lookahead == 'o') ADVANCE(782);
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
          ('a' <= lookahead && lookahead <= 'o') ||
          ('q' <= lookahead && lookahead <= 'z')) ADVANCE(834);
      if (lookahead == 'p') ADVANCE(801);
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
          ('a' <= lookahead && lookahead <= 'o') ||
          ('q' <= lookahead && lookahead <= 'z')) ADVANCE(834);
      if (lookahead == 'p') ADVANCE(804);
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
          ('a' <= lookahead && lookahead <= 'o') ||
          ('q' <= lookahead && lookahead <= 'z')) ADVANCE(834);
      if (lookahead == 'p') ADVANCE(820);
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
          ('a' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(834);
      if (lookahead == 'r') ADVANCE(765);
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
          ('a' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(834);
      if (lookahead == 'r') ADVANCE(814);
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
          ('a' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(834);
      if (lookahead == 'r') ADVANCE(818);
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
          ('a' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(834);
      if (lookahead == 'r') ADVANCE(811);
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
          ('a' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(834);
      if (lookahead == 'r') ADVANCE(764);
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
          ('a' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(834);
      if (lookahead == 'r') ADVANCE(800);
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
          ('a' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(834);
      if (lookahead == 'r') ADVANCE(755);
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
          ('a' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(834);
      if (lookahead == 'r') ADVANCE(806);
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
          ('a' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(834);
      if (lookahead == 'r') ADVANCE(750);
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
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(834);
      if (lookahead == 'r') ADVANCE(824);
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
          ('t' <= lookahead && lookahead <= 'z')) ADVANCE(834);
      if (lookahead == 's') ADVANCE(753);
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
          ('a' <= lookahead && lookahead <= 'r') ||
          ('t' <= lookahead && lookahead <= 'z')) ADVANCE(834);
      if (lookahead == 's') ADVANCE(826);
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
          ('a' <= lookahead && lookahead <= 'r') ||
          ('t' <= lookahead && lookahead <= 'z')) ADVANCE(834);
      if (lookahead == 's') ADVANCE(827);
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
          ('a' <= lookahead && lookahead <= 'r') ||
          ('t' <= lookahead && lookahead <= 'z')) ADVANCE(834);
      if (lookahead == 's') ADVANCE(743);
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
          ('a' <= lookahead && lookahead <= 'r') ||
          ('t' <= lookahead && lookahead <= 'z')) ADVANCE(834);
      if (lookahead == 's') ADVANCE(829);
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
          ('a' <= lookahead && lookahead <= 'r') ||
          ('t' <= lookahead && lookahead <= 'z')) ADVANCE(834);
      if (lookahead == 's') ADVANCE(745);
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
          ('a' <= lookahead && lookahead <= 'r') ||
          ('t' <= lookahead && lookahead <= 'z')) ADVANCE(834);
      if (lookahead == 's') ADVANCE(831);
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
          ('a' <= lookahead && lookahead <= 'r') ||
          ('t' <= lookahead && lookahead <= 'z')) ADVANCE(834);
      if (lookahead == 's') ADVANCE(832);
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
          ('a' <= lookahead && lookahead <= 'r') ||
          ('t' <= lookahead && lookahead <= 'z')) ADVANCE(834);
      if (lookahead == 's') ADVANCE(833);
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
          ('t' <= lookahead && lookahead <= 'z')) ADVANCE(834);
      if (lookahead == 's') ADVANCE(749);
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
          ('t' <= lookahead && lookahead <= 'z')) ADVANCE(834);
      if (lookahead == 's') ADVANCE(797);
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
          ('a' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z')) ADVANCE(834);
      if (lookahead == 't') ADVANCE(752);
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
          ('a' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z')) ADVANCE(834);
      if (lookahead == 't') ADVANCE(702);
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
          ('a' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z')) ADVANCE(834);
      if (lookahead == 't') ADVANCE(756);
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
          ('a' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z')) ADVANCE(834);
      if (lookahead == 't') ADVANCE(754);
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
          ('a' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z')) ADVANCE(834);
      if (lookahead == 't') ADVANCE(822);
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
          ('a' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z')) ADVANCE(834);
      if (lookahead == 't') ADVANCE(812);
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
          ('a' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z')) ADVANCE(834);
      if (lookahead == 't') ADVANCE(784);
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
          ('a' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z')) ADVANCE(834);
      if (lookahead == 't') ADVANCE(795);
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
          ('a' <= lookahead && lookahead <= 't') ||
          ('v' <= lookahead && lookahead <= 'z')) ADVANCE(834);
      if (lookahead == 'u') ADVANCE(747);
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
          ('a' <= lookahead && lookahead <= 't') ||
          ('v' <= lookahead && lookahead <= 'z')) ADVANCE(834);
      if (lookahead == 'u') ADVANCE(761);
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
          ('a' <= lookahead && lookahead <= 't') ||
          ('v' <= lookahead && lookahead <= 'z')) ADVANCE(834);
      if (lookahead == 'u') ADVANCE(799);
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
          ('a' <= lookahead && lookahead <= 't') ||
          ('v' <= lookahead && lookahead <= 'z')) ADVANCE(834);
      if (lookahead == 'u') ADVANCE(763);
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
          ('a' <= lookahead && lookahead <= 't') ||
          ('v' <= lookahead && lookahead <= 'z')) ADVANCE(834);
      if (lookahead == 'u') ADVANCE(744);
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
          ('a' <= lookahead && lookahead <= 't') ||
          ('v' <= lookahead && lookahead <= 'z')) ADVANCE(834);
      if (lookahead == 'u') ADVANCE(786);
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
          ('a' <= lookahead && lookahead <= 'w') ||
          lookahead == 'y' ||
          lookahead == 'z') ADVANCE(834);
      if (lookahead == 'x') ADVANCE(835);
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
          ('a' <= lookahead && lookahead <= 'x') ||
          lookahead == 'z') ADVANCE(834);
      if (lookahead == 'y') ADVANCE(731);
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
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(834);
      if (lookahead == 'a') ADVANCE(791);
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
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(834);
      if (lookahead == 'a') ADVANCE(762);
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
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(834);
      if (lookahead == 'a') ADVANCE(788);
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
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(834);
      if (lookahead == 'a') ADVANCE(766);
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
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(834);
      if (lookahead == 'a') ADVANCE(780);
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
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(834);
      if (lookahead == 'a') ADVANCE(783);
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
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(834);
      if (lookahead == 'a') ADVANCE(803);
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
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(834);
      if (lookahead == 'a') ADVANCE(830);
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
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(834);
      if (lookahead == 'a') ADVANCE(776);
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
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(834);
      if (lookahead == 'a') ADVANCE(767);
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
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(834);
      if (lookahead == 'a') ADVANCE(787);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(834);
      if (lookahead == ']') ADVANCE(575);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(834);
      if (lookahead == ']') ADVANCE(581);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(834);
      if (lookahead == ']') ADVANCE(567);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(834);
      if (lookahead == ']') ADVANCE(571);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(834);
      if (lookahead == ']') ADVANCE(573);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(834);
      if (lookahead == ']') ADVANCE(569);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(834);
      if (lookahead == ']') ADVANCE(579);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(834);
      if (lookahead == ']') ADVANCE(577);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(834);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(834);
      if (lookahead == ',') ADVANCE(657);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(834);
      if (lookahead == ',') ADVANCE(584);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(834);
      if (lookahead == ',') ADVANCE(654);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(anon_sym_BSLASH2);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(aux_sym_key_string_escaped_char_token1);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(aux_sym_key_string_escaped_char_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(aux_sym_value_string_text_token1);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(aux_sym_value_string_text_token1);
      if (lookahead == 'a') ADVANCE(304);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(aux_sym_value_string_text_token1);
      if (lookahead == 'r') ADVANCE(491);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(aux_sym_value_string_text_token1);
      if (lookahead == 'u') ADVANCE(301);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(aux_sym_value_string_text_token1);
      if (lookahead == '{') ADVANCE(907);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(aux_sym_oneline_string_token1);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      if (lookahead == '`') ADVANCE(147);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(aux_sym_oneline_string_text_token1);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(aux_sym_oneline_string_text_token1);
      if (lookahead == '`') ADVANCE(848);
      if (aux_sym_value_string_text_token1_character_set_1(lookahead)) ADVANCE(851);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(850);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(aux_sym_oneline_string_text_token1);
      if (lookahead == '{') ADVANCE(907);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(aux_sym_oneline_string_text_token2);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(aux_sym_oneline_string_text_token2);
      if (lookahead == '#') ADVANCE(855);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) ADVANCE(854);
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(853);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(aux_sym_oneline_string_text_token2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(anon_sym_BQUOTE_BQUOTE_BQUOTE);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(anon_sym_base64);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(883);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(anon_sym_hex);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(883);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(anon_sym_json);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(883);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(anon_sym_xml);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(883);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(anon_sym_graphql);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(883);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(aux_sym_multiline_string_type_token1);
      if (lookahead == '\n') ADVANCE(932);
      if (lookahead != 0) ADVANCE(862);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(aux_sym_multiline_string_type_token1);
      if (lookahead == '\n') ADVANCE(525);
      if (lookahead == '#') ADVANCE(882);
      if (lookahead == 'b') ADVANCE(867);
      if (lookahead == 'g') ADVANCE(878);
      if (lookahead == 'h') ADVANCE(868);
      if (lookahead == 'j') ADVANCE(879);
      if (lookahead == 'x') ADVANCE(873);
      if (aux_sym_value_string_text_token1_character_set_1(lookahead)) ADVANCE(863);
      if (lookahead != 0) ADVANCE(883);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(aux_sym_multiline_string_type_token1);
      if (lookahead == '4') ADVANCE(857);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(883);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(aux_sym_multiline_string_type_token1);
      if (lookahead == '6') ADVANCE(864);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(883);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(aux_sym_multiline_string_type_token1);
      if (lookahead == 'a') ADVANCE(876);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(883);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(aux_sym_multiline_string_type_token1);
      if (lookahead == 'a') ADVANCE(880);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(883);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(aux_sym_multiline_string_type_token1);
      if (lookahead == 'e') ADVANCE(881);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(883);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(aux_sym_multiline_string_type_token1);
      if (lookahead == 'e') ADVANCE(865);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(883);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(aux_sym_multiline_string_type_token1);
      if (lookahead == 'h') ADVANCE(877);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(883);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(aux_sym_multiline_string_type_token1);
      if (lookahead == 'l') ADVANCE(860);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(883);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(aux_sym_multiline_string_type_token1);
      if (lookahead == 'l') ADVANCE(861);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(883);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(aux_sym_multiline_string_type_token1);
      if (lookahead == 'm') ADVANCE(871);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(883);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(aux_sym_multiline_string_type_token1);
      if (lookahead == 'n') ADVANCE(859);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(883);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(aux_sym_multiline_string_type_token1);
      if (lookahead == 'o') ADVANCE(874);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(883);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(aux_sym_multiline_string_type_token1);
      if (lookahead == 'p') ADVANCE(870);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(883);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(aux_sym_multiline_string_type_token1);
      if (lookahead == 'q') ADVANCE(872);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(883);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(aux_sym_multiline_string_type_token1);
      if (lookahead == 'r') ADVANCE(866);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(883);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(aux_sym_multiline_string_type_token1);
      if (lookahead == 's') ADVANCE(875);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(883);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(aux_sym_multiline_string_type_token1);
      if (lookahead == 's') ADVANCE(869);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(883);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(aux_sym_multiline_string_type_token1);
      if (lookahead == 'x') ADVANCE(858);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(883);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(aux_sym_multiline_string_type_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(862);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(aux_sym_multiline_string_type_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(883);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(aux_sym__multiline_string_text_token1);
      if (lookahead == '\n') ADVANCE(524);
      if (lookahead == '#') ADVANCE(885);
      if (aux_sym_value_string_text_token1_character_set_1(lookahead)) ADVANCE(884);
      if (lookahead != 0 &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != '{') ADVANCE(886);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(aux_sym__multiline_string_text_token1);
      if (lookahead == '\n') ADVANCE(886);
      if (lookahead == '\\' ||
          lookahead == '`' ||
          lookahead == '{') ADVANCE(1);
      if (lookahead != 0) ADVANCE(885);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(aux_sym__multiline_string_text_token1);
      if (lookahead != 0 &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != '{') ADVANCE(886);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '{') ADVANCE(907);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(sym_filename_text);
      if (lookahead == '\n') ADVANCE(523);
      if (sym_filename_text_character_set_1(lookahead)) ADVANCE(889);
      if (lookahead != 0 &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '\\') ADVANCE(892);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(sym_filename_text);
      if (lookahead == '{') ADVANCE(908);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '\\') ADVANCE(892);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(sym_filename_text);
      if (sym_filename_text_character_set_1(lookahead)) ADVANCE(891);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '\\') ADVANCE(892);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(sym_filename_text);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '\\') ADVANCE(892);
      END_STATE();
    case 893:
      ACCEPT_TOKEN(aux_sym_filename_escaped_char_token1);
      END_STATE();
    case 894:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 895:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 896:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 897:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == 'A') ADVANCE(427);
      if (lookahead == 'B') ADVANCE(157);
      if (lookahead == 'C') ADVANCE(178);
      if (lookahead == 'F') ADVANCE(343);
      if (lookahead == 'M') ADVANCE(484);
      if (lookahead == 'O') ADVANCE(371);
      if (lookahead == 'Q') ADVANCE(485);
      END_STATE();
    case 898:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == 'A') ADVANCE(427);
      if (lookahead == 'C') ADVANCE(177);
      END_STATE();
    case 899:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == 'B') ADVANCE(157);
      if (lookahead == 'C') ADVANCE(348);
      if (lookahead == 'F') ADVANCE(343);
      if (lookahead == 'M') ADVANCE(484);
      if (lookahead == 'O') ADVANCE(371);
      if (lookahead == 'Q') ADVANCE(485);
      END_STATE();
    case 900:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (sym_key_string_text_character_set_7(lookahead)) ADVANCE(834);
      if (lookahead == 'B') ADVANCE(817);
      if (lookahead == 'C') ADVANCE(773);
      if (lookahead == 'F') ADVANCE(772);
      if (lookahead == 'M') ADVANCE(810);
      if (lookahead == 'O') ADVANCE(775);
      if (lookahead == 'Q') ADVANCE(807);
      END_STATE();
    case 901:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (sym_key_string_text_character_set_8(lookahead)) ADVANCE(834);
      if (lookahead == 'A') ADVANCE(798);
      if (lookahead == 'C') ADVANCE(823);
      END_STATE();
    case 902:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 903:
      ACCEPT_TOKEN(aux_sym_json_string_text_token1);
      END_STATE();
    case 904:
      ACCEPT_TOKEN(aux_sym_json_string_text_token1);
      if (lookahead == '#') ADVANCE(906);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) ADVANCE(904);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(903);
      END_STATE();
    case 905:
      ACCEPT_TOKEN(aux_sym_json_string_text_token1);
      if (lookahead == '{') ADVANCE(907);
      END_STATE();
    case 906:
      ACCEPT_TOKEN(aux_sym_json_string_text_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1);
      END_STATE();
    case 907:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      END_STATE();
    case 908:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '\\') ADVANCE(892);
      END_STATE();
    case 909:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(662);
      END_STATE();
    case 910:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 911:
      ACCEPT_TOKEN(aux_sym_variable_name_token1);
      END_STATE();
    case 912:
      ACCEPT_TOKEN(aux_sym_variable_name_token2);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(912);
      END_STATE();
    case 913:
      ACCEPT_TOKEN(anon_sym_count);
      END_STATE();
    case 914:
      ACCEPT_TOKEN(anon_sym_urlEncode);
      END_STATE();
    case 915:
      ACCEPT_TOKEN(anon_sym_urlDecode);
      END_STATE();
    case 916:
      ACCEPT_TOKEN(anon_sym_htmlEscape);
      END_STATE();
    case 917:
      ACCEPT_TOKEN(anon_sym_htmlUnescape);
      END_STATE();
    case 918:
      ACCEPT_TOKEN(anon_sym_toInt);
      END_STATE();
    case 919:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 920:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(834);
      END_STATE();
    case 921:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 922:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(834);
      END_STATE();
    case 923:
      ACCEPT_TOKEN(anon_sym_null);
      END_STATE();
    case 924:
      ACCEPT_TOKEN(anon_sym_null);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(834);
      END_STATE();
    case 925:
      ACCEPT_TOKEN(aux_sym_digit_token1);
      END_STATE();
    case 926:
      ACCEPT_TOKEN(aux_sym_hexdigit_token1);
      END_STATE();
    case 927:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 928:
      ACCEPT_TOKEN(anon_sym_e);
      END_STATE();
    case 929:
      ACCEPT_TOKEN(anon_sym_E);
      END_STATE();
    case 930:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 931:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 932:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 933:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 934:
      ACCEPT_TOKEN(aux_sym_regex_text_token1);
      if (lookahead == '\n') ADVANCE(932);
      if (lookahead == '/' ||
          lookahead == '\\') ADVANCE(1);
      if (lookahead != 0) ADVANCE(934);
      END_STATE();
    case 935:
      ACCEPT_TOKEN(aux_sym_regex_text_token1);
      if (lookahead == '#') ADVANCE(936);
      if (aux_sym_value_string_text_token1_character_set_1(lookahead)) ADVANCE(935);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '/' &&
          lookahead != '\\') ADVANCE(937);
      END_STATE();
    case 936:
      ACCEPT_TOKEN(aux_sym_regex_text_token1);
      if (lookahead == '/' ||
          lookahead == '\\') ADVANCE(1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(934);
      END_STATE();
    case 937:
      ACCEPT_TOKEN(aux_sym_regex_text_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '/' &&
          lookahead != '\\') ADVANCE(937);
      END_STATE();
    case 938:
      ACCEPT_TOKEN(aux_sym_regex_escaped_char_token1);
      END_STATE();
    case 939:
      ACCEPT_TOKEN(aux_sym_regex_escaped_char_token1);
      if (lookahead == '#') ADVANCE(940);
      if (aux_sym_value_string_text_token1_character_set_1(lookahead)) ADVANCE(939);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(938);
      END_STATE();
    case 940:
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
  [1] = {.lex_state = 514},
  [2] = {.lex_state = 518},
  [3] = {.lex_state = 518},
  [4] = {.lex_state = 518},
  [5] = {.lex_state = 518},
  [6] = {.lex_state = 514},
  [7] = {.lex_state = 514},
  [8] = {.lex_state = 514},
  [9] = {.lex_state = 519},
  [10] = {.lex_state = 514},
  [11] = {.lex_state = 514},
  [12] = {.lex_state = 519},
  [13] = {.lex_state = 514},
  [14] = {.lex_state = 514},
  [15] = {.lex_state = 514},
  [16] = {.lex_state = 514},
  [17] = {.lex_state = 514},
  [18] = {.lex_state = 514},
  [19] = {.lex_state = 514},
  [20] = {.lex_state = 514},
  [21] = {.lex_state = 19},
  [22] = {.lex_state = 19},
  [23] = {.lex_state = 514},
  [24] = {.lex_state = 514},
  [25] = {.lex_state = 514},
  [26] = {.lex_state = 514},
  [27] = {.lex_state = 514},
  [28] = {.lex_state = 514},
  [29] = {.lex_state = 514},
  [30] = {.lex_state = 514},
  [31] = {.lex_state = 514},
  [32] = {.lex_state = 514},
  [33] = {.lex_state = 514},
  [34] = {.lex_state = 514},
  [35] = {.lex_state = 514},
  [36] = {.lex_state = 514},
  [37] = {.lex_state = 514},
  [38] = {.lex_state = 518},
  [39] = {.lex_state = 518},
  [40] = {.lex_state = 518},
  [41] = {.lex_state = 518},
  [42] = {.lex_state = 518},
  [43] = {.lex_state = 518},
  [44] = {.lex_state = 518},
  [45] = {.lex_state = 518},
  [46] = {.lex_state = 518},
  [47] = {.lex_state = 518},
  [48] = {.lex_state = 518},
  [49] = {.lex_state = 518},
  [50] = {.lex_state = 518},
  [51] = {.lex_state = 514},
  [52] = {.lex_state = 518},
  [53] = {.lex_state = 514},
  [54] = {.lex_state = 514},
  [55] = {.lex_state = 518},
  [56] = {.lex_state = 518},
  [57] = {.lex_state = 518},
  [58] = {.lex_state = 519},
  [59] = {.lex_state = 519},
  [60] = {.lex_state = 519},
  [61] = {.lex_state = 519},
  [62] = {.lex_state = 514},
  [63] = {.lex_state = 514},
  [64] = {.lex_state = 19},
  [65] = {.lex_state = 19},
  [66] = {.lex_state = 514},
  [67] = {.lex_state = 519},
  [68] = {.lex_state = 519},
  [69] = {.lex_state = 519},
  [70] = {.lex_state = 519},
  [71] = {.lex_state = 519},
  [72] = {.lex_state = 514},
  [73] = {.lex_state = 19},
  [74] = {.lex_state = 19},
  [75] = {.lex_state = 19},
  [76] = {.lex_state = 19},
  [77] = {.lex_state = 19},
  [78] = {.lex_state = 19},
  [79] = {.lex_state = 19},
  [80] = {.lex_state = 19},
  [81] = {.lex_state = 19},
  [82] = {.lex_state = 19},
  [83] = {.lex_state = 19},
  [84] = {.lex_state = 19},
  [85] = {.lex_state = 19},
  [86] = {.lex_state = 19},
  [87] = {.lex_state = 19},
  [88] = {.lex_state = 19},
  [89] = {.lex_state = 19},
  [90] = {.lex_state = 19},
  [91] = {.lex_state = 19},
  [92] = {.lex_state = 19},
  [93] = {.lex_state = 19},
  [94] = {.lex_state = 19},
  [95] = {.lex_state = 19},
  [96] = {.lex_state = 19},
  [97] = {.lex_state = 19},
  [98] = {.lex_state = 19},
  [99] = {.lex_state = 24},
  [100] = {.lex_state = 514},
  [101] = {.lex_state = 514},
  [102] = {.lex_state = 19},
  [103] = {.lex_state = 514},
  [104] = {.lex_state = 514},
  [105] = {.lex_state = 19},
  [106] = {.lex_state = 514},
  [107] = {.lex_state = 19},
  [108] = {.lex_state = 514},
  [109] = {.lex_state = 514},
  [110] = {.lex_state = 2},
  [111] = {.lex_state = 23},
  [112] = {.lex_state = 514},
  [113] = {.lex_state = 514},
  [114] = {.lex_state = 19},
  [115] = {.lex_state = 8},
  [116] = {.lex_state = 4},
  [117] = {.lex_state = 19},
  [118] = {.lex_state = 19},
  [119] = {.lex_state = 8},
  [120] = {.lex_state = 19},
  [121] = {.lex_state = 8},
  [122] = {.lex_state = 4},
  [123] = {.lex_state = 8},
  [124] = {.lex_state = 514},
  [125] = {.lex_state = 514},
  [126] = {.lex_state = 8},
  [127] = {.lex_state = 514},
  [128] = {.lex_state = 514},
  [129] = {.lex_state = 514},
  [130] = {.lex_state = 19},
  [131] = {.lex_state = 4},
  [132] = {.lex_state = 19},
  [133] = {.lex_state = 7},
  [134] = {.lex_state = 3},
  [135] = {.lex_state = 7},
  [136] = {.lex_state = 7},
  [137] = {.lex_state = 7},
  [138] = {.lex_state = 8},
  [139] = {.lex_state = 8},
  [140] = {.lex_state = 9},
  [141] = {.lex_state = 28},
  [142] = {.lex_state = 25},
  [143] = {.lex_state = 3},
  [144] = {.lex_state = 11},
  [145] = {.lex_state = 25},
  [146] = {.lex_state = 11},
  [147] = {.lex_state = 25},
  [148] = {.lex_state = 11},
  [149] = {.lex_state = 25},
  [150] = {.lex_state = 25},
  [151] = {.lex_state = 11},
  [152] = {.lex_state = 3},
  [153] = {.lex_state = 11},
  [154] = {.lex_state = 12},
  [155] = {.lex_state = 31},
  [156] = {.lex_state = 13},
  [157] = {.lex_state = 28},
  [158] = {.lex_state = 31},
  [159] = {.lex_state = 28},
  [160] = {.lex_state = 28},
  [161] = {.lex_state = 13},
  [162] = {.lex_state = 13},
  [163] = {.lex_state = 28},
  [164] = {.lex_state = 8},
  [165] = {.lex_state = 8},
  [166] = {.lex_state = 26},
  [167] = {.lex_state = 26},
  [168] = {.lex_state = 7},
  [169] = {.lex_state = 31},
  [170] = {.lex_state = 27},
  [171] = {.lex_state = 26},
  [172] = {.lex_state = 37},
  [173] = {.lex_state = 24},
  [174] = {.lex_state = 26},
  [175] = {.lex_state = 37},
  [176] = {.lex_state = 9},
  [177] = {.lex_state = 29},
  [178] = {.lex_state = 9},
  [179] = {.lex_state = 7},
  [180] = {.lex_state = 24},
  [181] = {.lex_state = 31},
  [182] = {.lex_state = 26},
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
  [193] = {.lex_state = 25},
  [194] = {.lex_state = 11},
  [195] = {.lex_state = 4},
  [196] = {.lex_state = 4},
  [197] = {.lex_state = 22},
  [198] = {.lex_state = 24},
  [199] = {.lex_state = 11},
  [200] = {.lex_state = 3},
  [201] = {.lex_state = 11},
  [202] = {.lex_state = 22},
  [203] = {.lex_state = 18},
  [204] = {.lex_state = 4},
  [205] = {.lex_state = 22},
  [206] = {.lex_state = 4},
  [207] = {.lex_state = 25},
  [208] = {.lex_state = 4},
  [209] = {.lex_state = 4},
  [210] = {.lex_state = 24},
  [211] = {.lex_state = 22},
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
  [224] = {.lex_state = 4},
  [225] = {.lex_state = 24},
  [226] = {.lex_state = 24},
  [227] = {.lex_state = 15},
  [228] = {.lex_state = 24},
  [229] = {.lex_state = 514},
  [230] = {.lex_state = 15},
  [231] = {.lex_state = 28},
  [232] = {.lex_state = 19},
  [233] = {.lex_state = 8},
  [234] = {.lex_state = 514},
  [235] = {.lex_state = 28},
  [236] = {.lex_state = 19},
  [237] = {.lex_state = 13},
  [238] = {.lex_state = 19},
  [239] = {.lex_state = 13},
  [240] = {.lex_state = 8},
  [241] = {.lex_state = 19},
  [242] = {.lex_state = 22},
  [243] = {.lex_state = 37},
  [244] = {.lex_state = 24},
  [245] = {.lex_state = 8},
  [246] = {.lex_state = 9},
  [247] = {.lex_state = 31},
  [248] = {.lex_state = 15},
  [249] = {.lex_state = 8},
  [250] = {.lex_state = 24},
  [251] = {.lex_state = 24},
  [252] = {.lex_state = 7},
  [253] = {.lex_state = 7},
  [254] = {.lex_state = 8},
  [255] = {.lex_state = 8},
  [256] = {.lex_state = 19},
  [257] = {.lex_state = 9},
  [258] = {.lex_state = 19},
  [259] = {.lex_state = 31},
  [260] = {.lex_state = 8},
  [261] = {.lex_state = 37},
  [262] = {.lex_state = 514},
  [263] = {.lex_state = 8},
  [264] = {.lex_state = 15},
  [265] = {.lex_state = 514},
  [266] = {.lex_state = 24},
  [267] = {.lex_state = 8},
  [268] = {.lex_state = 8},
  [269] = {.lex_state = 8},
  [270] = {.lex_state = 7},
  [271] = {.lex_state = 11},
  [272] = {.lex_state = 11},
  [273] = {.lex_state = 11},
  [274] = {.lex_state = 7},
  [275] = {.lex_state = 28},
  [276] = {.lex_state = 514},
  [277] = {.lex_state = 3},
  [278] = {.lex_state = 11},
  [279] = {.lex_state = 11},
  [280] = {.lex_state = 3},
  [281] = {.lex_state = 7},
  [282] = {.lex_state = 11},
  [283] = {.lex_state = 514},
  [284] = {.lex_state = 11},
  [285] = {.lex_state = 7},
  [286] = {.lex_state = 514},
  [287] = {.lex_state = 28},
  [288] = {.lex_state = 514},
  [289] = {.lex_state = 19},
  [290] = {.lex_state = 19},
  [291] = {.lex_state = 514},
  [292] = {.lex_state = 19},
  [293] = {.lex_state = 514},
  [294] = {.lex_state = 19},
  [295] = {.lex_state = 514},
  [296] = {.lex_state = 19},
  [297] = {.lex_state = 9},
  [298] = {.lex_state = 37},
  [299] = {.lex_state = 25},
  [300] = {.lex_state = 24},
  [301] = {.lex_state = 19},
  [302] = {.lex_state = 25},
  [303] = {.lex_state = 13},
  [304] = {.lex_state = 19},
  [305] = {.lex_state = 514},
  [306] = {.lex_state = 26},
  [307] = {.lex_state = 514},
  [308] = {.lex_state = 514},
  [309] = {.lex_state = 514},
  [310] = {.lex_state = 7},
  [311] = {.lex_state = 19},
  [312] = {.lex_state = 3},
  [313] = {.lex_state = 31},
  [314] = {.lex_state = 25},
  [315] = {.lex_state = 25},
  [316] = {.lex_state = 514},
  [317] = {.lex_state = 13},
  [318] = {.lex_state = 514},
  [319] = {.lex_state = 514},
  [320] = {.lex_state = 514},
  [321] = {.lex_state = 3},
  [322] = {.lex_state = 31},
  [323] = {.lex_state = 24},
  [324] = {.lex_state = 33},
  [325] = {.lex_state = 26},
  [326] = {.lex_state = 13},
  [327] = {.lex_state = 9},
  [328] = {.lex_state = 13},
  [329] = {.lex_state = 514},
  [330] = {.lex_state = 13},
  [331] = {.lex_state = 26},
  [332] = {.lex_state = 3},
  [333] = {.lex_state = 37},
  [334] = {.lex_state = 24},
  [335] = {.lex_state = 26},
  [336] = {.lex_state = 514},
  [337] = {.lex_state = 25},
  [338] = {.lex_state = 3},
  [339] = {.lex_state = 26},
  [340] = {.lex_state = 3},
  [341] = {.lex_state = 514},
  [342] = {.lex_state = 514},
  [343] = {.lex_state = 33},
  [344] = {.lex_state = 514},
  [345] = {.lex_state = 514},
  [346] = {.lex_state = 19},
  [347] = {.lex_state = 26},
  [348] = {.lex_state = 19},
  [349] = {.lex_state = 25},
  [350] = {.lex_state = 19},
  [351] = {.lex_state = 514},
  [352] = {.lex_state = 33},
  [353] = {.lex_state = 19},
  [354] = {.lex_state = 24},
  [355] = {.lex_state = 514},
  [356] = {.lex_state = 36},
  [357] = {.lex_state = 514},
  [358] = {.lex_state = 514},
  [359] = {.lex_state = 36},
  [360] = {.lex_state = 36},
  [361] = {.lex_state = 36},
  [362] = {.lex_state = 19},
  [363] = {.lex_state = 19},
  [364] = {.lex_state = 19},
  [365] = {.lex_state = 36},
  [366] = {.lex_state = 36},
  [367] = {.lex_state = 36},
  [368] = {.lex_state = 36},
  [369] = {.lex_state = 514},
  [370] = {.lex_state = 514},
  [371] = {.lex_state = 19},
  [372] = {.lex_state = 19},
  [373] = {.lex_state = 36},
  [374] = {.lex_state = 36},
  [375] = {.lex_state = 36},
  [376] = {.lex_state = 36},
  [377] = {.lex_state = 514},
  [378] = {.lex_state = 19},
  [379] = {.lex_state = 24},
  [380] = {.lex_state = 19},
  [381] = {.lex_state = 19},
  [382] = {.lex_state = 24},
  [383] = {.lex_state = 514},
  [384] = {.lex_state = 24},
  [385] = {.lex_state = 23},
  [386] = {.lex_state = 514},
  [387] = {.lex_state = 514},
  [388] = {.lex_state = 514},
  [389] = {.lex_state = 6},
  [390] = {.lex_state = 24},
  [391] = {.lex_state = 19},
  [392] = {.lex_state = 23},
  [393] = {.lex_state = 19},
  [394] = {.lex_state = 19},
  [395] = {.lex_state = 24},
  [396] = {.lex_state = 514},
  [397] = {.lex_state = 514},
  [398] = {.lex_state = 514},
  [399] = {.lex_state = 514},
  [400] = {.lex_state = 514},
  [401] = {.lex_state = 29},
  [402] = {.lex_state = 15},
  [403] = {.lex_state = 514},
  [404] = {.lex_state = 24},
  [405] = {.lex_state = 24},
  [406] = {.lex_state = 24},
  [407] = {.lex_state = 514},
  [408] = {.lex_state = 24},
  [409] = {.lex_state = 19},
  [410] = {.lex_state = 514},
  [411] = {.lex_state = 24},
  [412] = {.lex_state = 514},
  [413] = {.lex_state = 24},
  [414] = {.lex_state = 514},
  [415] = {.lex_state = 514},
  [416] = {.lex_state = 514},
  [417] = {.lex_state = 36},
  [418] = {.lex_state = 33},
  [419] = {.lex_state = 24},
  [420] = {.lex_state = 19},
  [421] = {.lex_state = 24},
  [422] = {.lex_state = 24},
  [423] = {.lex_state = 514},
  [424] = {.lex_state = 514},
  [425] = {.lex_state = 24},
  [426] = {.lex_state = 19},
  [427] = {.lex_state = 6},
  [428] = {.lex_state = 514},
  [429] = {.lex_state = 514},
  [430] = {.lex_state = 514},
  [431] = {.lex_state = 514},
  [432] = {.lex_state = 514},
  [433] = {.lex_state = 514},
  [434] = {.lex_state = 514},
  [435] = {.lex_state = 514},
  [436] = {.lex_state = 514},
  [437] = {.lex_state = 514},
  [438] = {.lex_state = 514},
  [439] = {.lex_state = 24},
  [440] = {.lex_state = 514},
  [441] = {.lex_state = 15},
  [442] = {.lex_state = 19},
  [443] = {.lex_state = 24},
  [444] = {.lex_state = 29},
  [445] = {.lex_state = 19},
  [446] = {.lex_state = 33},
  [447] = {.lex_state = 33},
  [448] = {.lex_state = 33},
  [449] = {.lex_state = 33},
  [450] = {.lex_state = 33},
  [451] = {.lex_state = 33},
  [452] = {.lex_state = 33},
  [453] = {.lex_state = 33},
  [454] = {.lex_state = 24},
  [455] = {.lex_state = 33},
  [456] = {.lex_state = 33},
  [457] = {.lex_state = 33},
  [458] = {.lex_state = 33},
  [459] = {.lex_state = 33},
  [460] = {.lex_state = 33},
  [461] = {.lex_state = 19},
  [462] = {.lex_state = 33},
  [463] = {.lex_state = 33},
  [464] = {.lex_state = 19},
  [465] = {.lex_state = 33},
  [466] = {.lex_state = 33},
  [467] = {.lex_state = 19},
  [468] = {.lex_state = 19},
  [469] = {.lex_state = 19},
  [470] = {.lex_state = 19},
  [471] = {.lex_state = 19},
  [472] = {.lex_state = 19},
  [473] = {.lex_state = 33},
  [474] = {.lex_state = 24},
  [475] = {.lex_state = 24},
  [476] = {.lex_state = 19},
  [477] = {.lex_state = 24},
  [478] = {.lex_state = 19},
  [479] = {.lex_state = 19},
  [480] = {.lex_state = 33},
  [481] = {.lex_state = 19},
  [482] = {.lex_state = 0},
  [483] = {.lex_state = 33},
  [484] = {.lex_state = 24},
  [485] = {.lex_state = 33},
  [486] = {.lex_state = 24},
  [487] = {.lex_state = 33},
  [488] = {.lex_state = 33},
  [489] = {.lex_state = 24},
  [490] = {.lex_state = 24},
  [491] = {.lex_state = 514},
  [492] = {.lex_state = 514},
  [493] = {.lex_state = 514},
  [494] = {.lex_state = 514},
  [495] = {.lex_state = 514},
  [496] = {.lex_state = 514},
  [497] = {.lex_state = 514},
  [498] = {.lex_state = 514},
  [499] = {.lex_state = 514},
  [500] = {.lex_state = 514},
  [501] = {.lex_state = 514},
  [502] = {.lex_state = 514},
  [503] = {.lex_state = 514},
  [504] = {.lex_state = 19},
  [505] = {.lex_state = 19},
  [506] = {.lex_state = 19},
  [507] = {.lex_state = 19},
  [508] = {.lex_state = 19},
  [509] = {.lex_state = 19},
  [510] = {.lex_state = 19},
  [511] = {.lex_state = 19},
  [512] = {.lex_state = 19},
  [513] = {.lex_state = 19},
  [514] = {.lex_state = 19},
  [515] = {.lex_state = 19},
  [516] = {.lex_state = 19},
  [517] = {.lex_state = 19},
  [518] = {.lex_state = 514},
  [519] = {.lex_state = 514},
  [520] = {.lex_state = 19},
  [521] = {.lex_state = 514},
  [522] = {.lex_state = 514},
  [523] = {.lex_state = 514},
  [524] = {.lex_state = 38},
  [525] = {.lex_state = 514},
  [526] = {.lex_state = 39},
  [527] = {.lex_state = 16},
  [528] = {.lex_state = 0},
  [529] = {.lex_state = 514},
  [530] = {.lex_state = 28},
  [531] = {.lex_state = 514},
  [532] = {.lex_state = 514},
  [533] = {.lex_state = 514},
  [534] = {.lex_state = 0},
  [535] = {.lex_state = 24},
  [536] = {.lex_state = 514},
  [537] = {.lex_state = 24},
  [538] = {.lex_state = 0},
  [539] = {.lex_state = 514},
  [540] = {.lex_state = 514},
  [541] = {.lex_state = 19},
  [542] = {.lex_state = 514},
  [543] = {.lex_state = 28},
  [544] = {.lex_state = 40},
  [545] = {.lex_state = 0},
  [546] = {.lex_state = 514},
  [547] = {.lex_state = 0},
  [548] = {.lex_state = 514},
  [549] = {.lex_state = 0},
  [550] = {.lex_state = 514},
  [551] = {.lex_state = 514},
  [552] = {.lex_state = 514},
  [553] = {.lex_state = 514},
  [554] = {.lex_state = 514},
  [555] = {.lex_state = 514},
  [556] = {.lex_state = 514},
  [557] = {.lex_state = 514},
  [558] = {.lex_state = 514},
  [559] = {.lex_state = 24},
  [560] = {.lex_state = 514},
  [561] = {.lex_state = 0},
  [562] = {.lex_state = 514},
  [563] = {.lex_state = 514},
  [564] = {.lex_state = 24},
  [565] = {.lex_state = 514},
  [566] = {.lex_state = 514},
  [567] = {.lex_state = 514},
  [568] = {.lex_state = 0},
  [569] = {.lex_state = 19},
  [570] = {.lex_state = 28},
  [571] = {.lex_state = 0},
  [572] = {.lex_state = 19},
  [573] = {.lex_state = 0},
  [574] = {.lex_state = 19},
  [575] = {.lex_state = 0},
  [576] = {.lex_state = 19},
  [577] = {.lex_state = 19},
  [578] = {.lex_state = 19},
  [579] = {.lex_state = 19},
  [580] = {.lex_state = 19},
  [581] = {.lex_state = 19},
  [582] = {.lex_state = 19},
  [583] = {.lex_state = 514},
  [584] = {.lex_state = 39},
  [585] = {.lex_state = 0},
  [586] = {.lex_state = 40},
  [587] = {.lex_state = 514},
  [588] = {.lex_state = 514},
  [589] = {.lex_state = 514},
  [590] = {.lex_state = 514},
  [591] = {.lex_state = 514},
  [592] = {.lex_state = 41},
  [593] = {.lex_state = 514},
  [594] = {.lex_state = 514},
  [595] = {.lex_state = 514},
  [596] = {.lex_state = 514},
  [597] = {.lex_state = 0},
  [598] = {.lex_state = 514},
  [599] = {.lex_state = 514},
  [600] = {.lex_state = 19},
  [601] = {.lex_state = 17},
  [602] = {.lex_state = 0},
  [603] = {.lex_state = 514},
  [604] = {.lex_state = 514},
  [605] = {.lex_state = 514},
  [606] = {.lex_state = 912},
  [607] = {.lex_state = 514},
  [608] = {.lex_state = 514},
  [609] = {.lex_state = 514},
  [610] = {.lex_state = 514},
  [611] = {.lex_state = 19},
  [612] = {.lex_state = 514},
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
    [aux_sym_oneline_string_token1] = ACTIONS(47),
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
    [aux_sym_oneline_string_token1] = ACTIONS(47),
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
    [aux_sym_oneline_string_token1] = ACTIONS(47),
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
    [aux_sym_oneline_string_token1] = ACTIONS(47),
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
    [aux_sym_oneline_string_token1] = ACTIONS(47),
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
    [aux_sym_oneline_string_token1] = ACTIONS(47),
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
    [aux_sym_oneline_string_token1] = ACTIONS(47),
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
    [aux_sym_oneline_string_token1] = ACTIONS(47),
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
    [aux_sym_oneline_string_token1] = ACTIONS(90),
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
    [aux_sym_oneline_string_token1] = ACTIONS(97),
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
    [aux_sym_oneline_string_token1] = ACTIONS(47),
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
    [aux_sym_oneline_string_token1] = ACTIONS(131),
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
    [aux_sym_oneline_string_token1] = ACTIONS(174),
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
    [aux_sym_oneline_string_token1] = ACTIONS(180),
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
    [aux_sym_oneline_string_token1] = ACTIONS(186),
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
    [aux_sym_oneline_string_token1] = ACTIONS(216),
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
    [aux_sym_oneline_string_token1] = ACTIONS(220),
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
      aux_sym_oneline_string_token1,
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
      aux_sym_oneline_string_token1,
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
      aux_sym_oneline_string_token1,
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
      aux_sym_oneline_string_token1,
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
      aux_sym_oneline_string_token1,
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
      aux_sym_oneline_string_token1,
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
      aux_sym_oneline_string_token1,
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
      aux_sym_oneline_string_token1,
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
      aux_sym_oneline_string_token1,
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
      aux_sym_oneline_string_token1,
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
      aux_sym_oneline_string_token1,
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
      aux_sym_oneline_string_token1,
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
      aux_sym_oneline_string_token1,
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
      aux_sym_oneline_string_token1,
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
      aux_sym_oneline_string_token1,
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
      aux_sym_oneline_string_token1,
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
      aux_sym_oneline_string_token1,
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
      aux_sym_oneline_string_token1,
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
      aux_sym_oneline_string_token1,
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
      aux_sym_oneline_string_token1,
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
      aux_sym_oneline_string_token1,
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
      aux_sym_oneline_string_token1,
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
      aux_sym_oneline_string_token1,
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
      aux_sym_oneline_string_token1,
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
      aux_sym_oneline_string_token1,
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
      aux_sym_oneline_string_token1,
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
      aux_sym_oneline_string_token1,
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
      aux_sym_oneline_string_token1,
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
      aux_sym_oneline_string_token1,
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
      aux_sym_oneline_string_token1,
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
      aux_sym_oneline_string_token1,
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
      aux_sym_oneline_string_token1,
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
      aux_sym_oneline_string_token1,
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
      aux_sym_oneline_string_token1,
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
      aux_sym_oneline_string_token1,
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
      aux_sym_oneline_string_token1,
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
      aux_sym_oneline_string_token1,
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
      aux_sym_oneline_string_token1,
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
      aux_sym_oneline_string_token1,
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
      aux_sym_oneline_string_token1,
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
      aux_sym_oneline_string_token1,
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
      aux_sym_oneline_string_token1,
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
      aux_sym_oneline_string_token1,
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
      aux_sym_oneline_string_token1,
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
      aux_sym_oneline_string_token1,
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
      aux_sym_oneline_string_token1,
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
      aux_sym_oneline_string_token1,
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
      aux_sym_oneline_string_token1,
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
      aux_sym_oneline_string_token1,
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
      aux_sym_oneline_string_token1,
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
    STATE(276), 2,
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
    STATE(252), 2,
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
    STATE(245), 1,
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
    STATE(246), 2,
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
    STATE(207), 4,
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
    STATE(207), 4,
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
    STATE(207), 4,
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
    STATE(207), 4,
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
    STATE(207), 4,
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
    STATE(247), 2,
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
    STATE(247), 2,
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
    STATE(252), 2,
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
    STATE(247), 2,
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
    STATE(246), 2,
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
    STATE(246), 2,
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
    STATE(252), 2,
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
    STATE(247), 2,
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
    ACTIONS(793), 1,
      sym_comment,
    ACTIONS(1152), 1,
      anon_sym_LF,
    STATE(566), 1,
      sym_multiline_string_type,
    ACTIONS(1154), 6,
      anon_sym_base64,
      anon_sym_hex,
      anon_sym_json,
      anon_sym_xml,
      anon_sym_graphql,
      aux_sym_multiline_string_type_token1,
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
  [7790] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1158), 1,
      anon_sym_u,
    ACTIONS(1160), 1,
      anon_sym_POUND,
    ACTIONS(1156), 6,
      anon_sym_BSLASH,
      anon_sym_b,
      anon_sym_f,
      anon_sym_n,
      anon_sym_r,
      anon_sym_t,
  [7808] = 2,
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
  [7822] = 5,
    ACTIONS(793), 1,
      sym_comment,
    ACTIONS(890), 1,
      aux_sym_quoted_string_text_token1,
    ACTIONS(892), 1,
      anon_sym_BSLASH,
    ACTIONS(1162), 2,
      anon_sym_DQUOTE,
      anon_sym_LBRACE_LBRACE,
    STATE(193), 4,
      sym_quoted_string_text,
      sym_invalid_quoted_string_escaped_char,
      sym_quoted_string_escaped_char,
      aux_sym_quoted_string_content_repeat1,
  [7842] = 2,
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
  [7856] = 2,
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
  [7870] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1166), 1,
      anon_sym_DOT,
    STATE(250), 1,
      sym_fraction,
    STATE(443), 1,
      sym_exponent,
    ACTIONS(1168), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(1164), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [7892] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1172), 1,
      anon_sym_u,
    ACTIONS(1170), 7,
      anon_sym_BSLASH,
      anon_sym_b,
      anon_sym_f,
      anon_sym_n,
      anon_sym_r,
      anon_sym_t,
      anon_sym_BQUOTE,
  [7908] = 6,
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
  [7930] = 5,
    ACTIONS(793), 1,
      sym_comment,
    ACTIONS(1178), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(199), 1,
      aux_sym__multiline_string_text_repeat1,
    ACTIONS(1176), 2,
      anon_sym_BQUOTE,
      anon_sym_LBRACE,
    ACTIONS(1174), 4,
      anon_sym_LF,
      anon_sym_BSLASH,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      aux_sym__multiline_string_text_token1,
  [7950] = 7,
    ACTIONS(793), 1,
      sym_comment,
    ACTIONS(898), 1,
      anon_sym_BSLASH,
    ACTIONS(902), 1,
      aux_sym__multiline_string_text_token1,
    ACTIONS(1180), 1,
      anon_sym_LF,
    ACTIONS(1182), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(1184), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(194), 3,
      sym__multiline_string_text,
      sym_multiline_string_escaped_char,
      aux_sym_multiline_string_content_repeat1,
  [7974] = 2,
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
  [7988] = 2,
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
  [8002] = 2,
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
  [8016] = 2,
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
  [8030] = 2,
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
  [8044] = 2,
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
  [8058] = 2,
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
  [8072] = 2,
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
  [8086] = 2,
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
  [8100] = 2,
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
  [8114] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1186), 7,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      aux_sym_digit_token1,
      anon_sym_DOT,
      anon_sym_e,
      anon_sym_E,
  [8127] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(769), 1,
      anon_sym_DQUOTE,
    ACTIONS(1188), 1,
      anon_sym_RBRACE,
    ACTIONS(1190), 1,
      anon_sym_COMMA,
    STATE(395), 1,
      aux_sym_json_object_repeat1,
    STATE(406), 1,
      sym_json_key_value,
    STATE(504), 1,
      sym_json_key_string,
    STATE(520), 1,
      sym_json_string,
  [8152] = 6,
    ACTIONS(793), 1,
      sym_comment,
    ACTIONS(1192), 1,
      anon_sym_BSLASH,
    ACTIONS(1194), 1,
      anon_sym_SLASH,
    ACTIONS(1196), 1,
      aux_sym_regex_text_token1,
    STATE(561), 1,
      sym_regex_content,
    STATE(248), 3,
      sym_regex_text,
      sym_regex_escaped_char,
      aux_sym_regex_content_repeat1,
  [8173] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(769), 1,
      anon_sym_DQUOTE,
    ACTIONS(1190), 1,
      anon_sym_COMMA,
    ACTIONS(1198), 1,
      anon_sym_RBRACE,
    STATE(382), 1,
      aux_sym_json_object_repeat1,
    STATE(384), 1,
      sym_json_key_value,
    STATE(504), 1,
      sym_json_key_string,
    STATE(520), 1,
      sym_json_string,
  [8198] = 4,
    ACTIONS(61), 1,
      aux_sym_digit_token1,
    ACTIONS(1040), 1,
      anon_sym_LF,
    STATE(234), 2,
      sym_digit,
      aux_sym_integer_repeat1,
    ACTIONS(1200), 4,
      anon_sym_DOT,
      anon_sym_e,
      anon_sym_E,
      sym_comment,
  [8215] = 6,
    ACTIONS(793), 1,
      sym_comment,
    ACTIONS(1192), 1,
      anon_sym_BSLASH,
    ACTIONS(1196), 1,
      aux_sym_regex_text_token1,
    ACTIONS(1202), 1,
      anon_sym_SLASH,
    STATE(602), 1,
      sym_regex_content,
    STATE(248), 3,
      sym_regex_text,
      sym_regex_escaped_char,
      aux_sym_regex_content_repeat1,
  [8236] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1206), 1,
      anon_sym_COLON2,
    STATE(235), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    ACTIONS(1204), 4,
      anon_sym_COLON,
      sym_key_string_text,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
  [8253] = 6,
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
  [8274] = 5,
    ACTIONS(793), 1,
      sym_comment,
    ACTIONS(1210), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(1213), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(233), 1,
      aux_sym_value_string_text_repeat1,
    ACTIONS(1208), 4,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      anon_sym_BSLASH,
  [8293] = 4,
    ACTIONS(1075), 1,
      anon_sym_LF,
    ACTIONS(1215), 1,
      aux_sym_digit_token1,
    STATE(234), 2,
      sym_digit,
      aux_sym_integer_repeat1,
    ACTIONS(1218), 4,
      anon_sym_DOT,
      anon_sym_e,
      anon_sym_E,
      sym_comment,
  [8310] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1222), 1,
      anon_sym_COLON2,
    ACTIONS(1224), 1,
      sym_key_string_text,
    ACTIONS(1227), 1,
      anon_sym_BSLASH2,
    ACTIONS(1220), 2,
      anon_sym_COLON,
      anon_sym_LBRACE_LBRACE,
    STATE(235), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
  [8331] = 6,
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
  [8352] = 4,
    ACTIONS(793), 1,
      sym_comment,
    ACTIONS(1232), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1230), 3,
      anon_sym_BSLASH,
      anon_sym_BQUOTE,
      aux_sym_oneline_string_text_token1,
    STATE(239), 3,
      sym_oneline_string_text,
      sym_oneline_string_escaped_char,
      aux_sym_oneline_string_content_repeat1,
  [8369] = 6,
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
  [8390] = 6,
    ACTIONS(793), 1,
      sym_comment,
    ACTIONS(1234), 1,
      anon_sym_BSLASH,
    ACTIONS(1237), 1,
      anon_sym_BQUOTE,
    ACTIONS(1239), 1,
      aux_sym_oneline_string_text_token1,
    ACTIONS(1242), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(239), 3,
      sym_oneline_string_text,
      sym_oneline_string_escaped_char,
      aux_sym_oneline_string_content_repeat1,
  [8411] = 5,
    ACTIONS(793), 1,
      sym_comment,
    ACTIONS(1246), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(1248), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(233), 1,
      aux_sym_value_string_text_repeat1,
    ACTIONS(1244), 4,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      anon_sym_BSLASH,
  [8430] = 6,
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
  [8451] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1252), 1,
      anon_sym_u,
    ACTIONS(1254), 1,
      anon_sym_POUND,
    ACTIONS(1250), 4,
      anon_sym_BSLASH,
      anon_sym_b,
      anon_sym_f,
      anon_sym_BQUOTE,
  [8467] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1256), 1,
      sym_key_string_text,
    ACTIONS(1259), 1,
      anon_sym_BSLASH2,
    ACTIONS(1220), 2,
      anon_sym_COLON2,
      anon_sym_LBRACE_LBRACE,
    STATE(243), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
  [8485] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(781), 1,
      aux_sym_digit_token1,
    STATE(180), 2,
      sym_digit,
      aux_sym_integer_repeat1,
    ACTIONS(1262), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [8501] = 3,
    ACTIONS(793), 1,
      sym_comment,
    ACTIONS(1266), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1264), 5,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      anon_sym_BSLASH,
      aux_sym_value_string_text_token1,
  [8515] = 2,
    STATE(257), 2,
      sym_filename_escaped_char,
      aux_sym_filename_content_repeat1,
    ACTIONS(1268), 5,
      anon_sym_LF,
      anon_sym_BSLASH,
      sym_filename_text,
      anon_sym_LBRACE_LBRACE,
      sym_comment,
  [8527] = 3,
    ACTIONS(793), 1,
      sym_comment,
    STATE(259), 2,
      sym_filename_escaped_char,
      aux_sym_filename_content_repeat1,
    ACTIONS(1268), 4,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      sym_filename_text,
      anon_sym_LBRACE_LBRACE,
  [8541] = 5,
    ACTIONS(793), 1,
      sym_comment,
    ACTIONS(1192), 1,
      anon_sym_BSLASH,
    ACTIONS(1196), 1,
      aux_sym_regex_text_token1,
    ACTIONS(1270), 1,
      anon_sym_SLASH,
    STATE(264), 3,
      sym_regex_text,
      sym_regex_escaped_char,
      aux_sym_regex_content_repeat1,
  [8559] = 3,
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
  [8573] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(408), 1,
      sym_exponent,
    ACTIONS(1168), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(1276), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [8589] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(781), 1,
      aux_sym_digit_token1,
    STATE(180), 2,
      sym_digit,
      aux_sym_integer_repeat1,
    ACTIONS(1278), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [8605] = 3,
    ACTIONS(1206), 1,
      sym_comment,
    STATE(253), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    ACTIONS(1204), 4,
      anon_sym_LF,
      sym_key_string_text,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
  [8619] = 5,
    ACTIONS(1222), 1,
      sym_comment,
    ACTIONS(1280), 1,
      sym_key_string_text,
    ACTIONS(1283), 1,
      anon_sym_BSLASH2,
    ACTIONS(1220), 2,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    STATE(253), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
  [8637] = 3,
    ACTIONS(793), 1,
      sym_comment,
    ACTIONS(1288), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1286), 5,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      anon_sym_BSLASH,
      aux_sym_value_string_text_token1,
  [8651] = 3,
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
  [8665] = 5,
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
  [8683] = 4,
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
  [8699] = 5,
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
  [8717] = 5,
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
  [8735] = 3,
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
  [8749] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(243), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    ACTIONS(1204), 4,
      anon_sym_COLON2,
      sym_key_string_text,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
  [8763] = 4,
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
  [8779] = 3,
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
  [8793] = 5,
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
  [8811] = 6,
    ACTIONS(1164), 1,
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
  [8831] = 6,
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
  [8851] = 3,
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
  [8865] = 3,
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
  [8879] = 3,
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
  [8893] = 4,
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
  [8908] = 3,
    ACTIONS(793), 1,
      sym_comment,
    ACTIONS(1352), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1350), 4,
      anon_sym_LF,
      anon_sym_BSLASH,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      aux_sym__multiline_string_text_token1,
  [8921] = 4,
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
  [8936] = 3,
    ACTIONS(793), 1,
      sym_comment,
    ACTIONS(1288), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1286), 4,
      anon_sym_LF,
      anon_sym_BSLASH,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      aux_sym__multiline_string_text_token1,
  [8949] = 4,
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
  [8964] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1290), 1,
      anon_sym_COLON2,
    ACTIONS(1292), 4,
      anon_sym_COLON,
      sym_key_string_text,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
  [8977] = 5,
    ACTIONS(7), 1,
      anon_sym_LF,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1366), 1,
      ts_builtin_sym_end,
    STATE(15), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(286), 2,
      sym__comment_or_new_line,
      aux_sym_hurl_file_repeat2,
  [8994] = 4,
    ACTIONS(1213), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1368), 1,
      aux_sym_value_string_text_token1,
    STATE(277), 1,
      aux_sym_value_string_text_repeat1,
    ACTIONS(1208), 3,
      anon_sym_LF,
      anon_sym_BSLASH,
      sym_comment,
  [9009] = 3,
    ACTIONS(793), 1,
      sym_comment,
    ACTIONS(1292), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1290), 4,
      anon_sym_LF,
      anon_sym_BSLASH,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      aux_sym__multiline_string_text_token1,
  [9022] = 3,
    ACTIONS(793), 1,
      sym_comment,
    ACTIONS(1373), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1371), 4,
      anon_sym_LF,
      anon_sym_BSLASH,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      aux_sym__multiline_string_text_token1,
  [9035] = 4,
    ACTIONS(1248), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1375), 1,
      aux_sym_value_string_text_token1,
    STATE(277), 1,
      aux_sym_value_string_text_repeat1,
    ACTIONS(1244), 3,
      anon_sym_LF,
      anon_sym_BSLASH,
      sym_comment,
  [9050] = 3,
    ACTIONS(1377), 1,
      anon_sym_LF,
    ACTIONS(1381), 1,
      sym_comment,
    ACTIONS(1379), 4,
      anon_sym_COLON,
      sym_key_string_text,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
  [9063] = 4,
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
  [9078] = 2,
    ACTIONS(1186), 1,
      anon_sym_LF,
    ACTIONS(1383), 5,
      aux_sym_digit_token1,
      anon_sym_DOT,
      anon_sym_e,
      anon_sym_E,
      sym_comment,
  [9089] = 4,
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
  [9104] = 2,
    ACTIONS(1290), 1,
      sym_comment,
    ACTIONS(1292), 5,
      anon_sym_LF,
      anon_sym_COLON,
      sym_key_string_text,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
  [9115] = 5,
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
  [9132] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1393), 1,
      anon_sym_COLON2,
    ACTIONS(1391), 4,
      anon_sym_COLON,
      sym_key_string_text,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
  [9145] = 5,
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
  [9162] = 4,
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
  [9177] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(781), 1,
      aux_sym_digit_token1,
    ACTIONS(1397), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(251), 2,
      sym_digit,
      aux_sym_integer_repeat1,
  [9192] = 5,
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
  [9208] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(736), 1,
      aux_sym_digit_token1,
    STATE(432), 1,
      sym_integer,
    STATE(229), 2,
      sym_digit,
      aux_sym_integer_repeat1,
  [9222] = 4,
    ACTIONS(61), 1,
      aux_sym_digit_token1,
    ACTIONS(1262), 1,
      anon_sym_LF,
    ACTIONS(1399), 1,
      sym_comment,
    STATE(234), 2,
      sym_digit,
      aux_sym_integer_repeat1,
  [9236] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(728), 1,
      anon_sym_DQUOTE,
    ACTIONS(1401), 1,
      anon_sym_SLASH,
    STATE(206), 2,
      sym_quoted_string,
      sym_regex,
  [9250] = 4,
    ACTIONS(1276), 1,
      anon_sym_LF,
    ACTIONS(1403), 1,
      sym_comment,
    STATE(590), 1,
      sym_exponent,
    ACTIONS(1328), 2,
      anon_sym_e,
      anon_sym_E,
  [9264] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(728), 1,
      anon_sym_DQUOTE,
    ACTIONS(1401), 1,
      anon_sym_SLASH,
    STATE(204), 2,
      sym_quoted_string,
      sym_regex,
  [9278] = 1,
    ACTIONS(1290), 5,
      anon_sym_LF,
      anon_sym_BSLASH,
      sym_filename_text,
      anon_sym_LBRACE_LBRACE,
      sym_comment,
  [9286] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1292), 4,
      anon_sym_COLON2,
      sym_key_string_text,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
  [9296] = 2,
    ACTIONS(793), 1,
      sym_comment,
    ACTIONS(1290), 4,
      anon_sym_DQUOTE,
      aux_sym_quoted_string_text_token1,
      anon_sym_BSLASH,
      anon_sym_LBRACE_LBRACE,
  [9306] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1405), 1,
      anon_sym_LT,
    ACTIONS(1407), 1,
      anon_sym_LT_QMARK,
    STATE(300), 2,
      sym_xml_prolog_tag,
      aux_sym_xml_repeat1,
  [9320] = 5,
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
  [9336] = 2,
    ACTIONS(793), 1,
      sym_comment,
    ACTIONS(1286), 4,
      anon_sym_DQUOTE,
      aux_sym_quoted_string_text_token1,
      anon_sym_BSLASH,
      anon_sym_LBRACE_LBRACE,
  [9346] = 3,
    ACTIONS(793), 1,
      sym_comment,
    ACTIONS(1292), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1290), 3,
      anon_sym_BSLASH,
      anon_sym_BQUOTE,
      aux_sym_oneline_string_text_token1,
  [9358] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1410), 1,
      anon_sym_DQUOTE,
    ACTIONS(1412), 1,
      anon_sym_SLASH,
    STATE(88), 2,
      sym_quoted_string,
      sym_regex,
  [9372] = 5,
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
  [9388] = 3,
    ACTIONS(793), 1,
      sym_comment,
    ACTIONS(1292), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1290), 3,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
      aux_sym_json_string_text_token1,
  [9400] = 5,
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
  [9416] = 5,
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
  [9432] = 5,
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
  [9448] = 2,
    ACTIONS(1393), 1,
      sym_comment,
    ACTIONS(1391), 4,
      anon_sym_LF,
      sym_key_string_text,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
  [9458] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1410), 1,
      anon_sym_DQUOTE,
    ACTIONS(1412), 1,
      anon_sym_SLASH,
    STATE(74), 2,
      sym_quoted_string,
      sym_regex,
  [9472] = 2,
    ACTIONS(1292), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1290), 4,
      anon_sym_LF,
      anon_sym_BSLASH,
      aux_sym_value_string_text_token1,
      sym_comment,
  [9482] = 2,
    ACTIONS(793), 1,
      sym_comment,
    ACTIONS(1290), 4,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      sym_filename_text,
      anon_sym_LBRACE_LBRACE,
  [9492] = 2,
    ACTIONS(793), 1,
      sym_comment,
    ACTIONS(1414), 4,
      anon_sym_DQUOTE,
      aux_sym_quoted_string_text_token1,
      anon_sym_BSLASH,
      anon_sym_LBRACE_LBRACE,
  [9502] = 2,
    ACTIONS(793), 1,
      sym_comment,
    ACTIONS(1416), 4,
      anon_sym_DQUOTE,
      aux_sym_quoted_string_text_token1,
      anon_sym_BSLASH,
      anon_sym_LBRACE_LBRACE,
  [9512] = 5,
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
  [9528] = 3,
    ACTIONS(793), 1,
      sym_comment,
    ACTIONS(1288), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1286), 3,
      anon_sym_BSLASH,
      anon_sym_BQUOTE,
      aux_sym_oneline_string_text_token1,
  [9540] = 5,
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
  [9556] = 5,
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
  [9572] = 5,
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
  [9588] = 2,
    ACTIONS(1344), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1342), 4,
      anon_sym_LF,
      anon_sym_BSLASH,
      aux_sym_value_string_text_token1,
      sym_comment,
  [9598] = 2,
    ACTIONS(793), 1,
      sym_comment,
    ACTIONS(1418), 4,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      sym_filename_text,
      anon_sym_LBRACE_LBRACE,
  [9608] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1420), 4,
      anon_sym_COLON2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [9618] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1422), 1,
      anon_sym_SEMI,
    ACTIONS(1424), 1,
      aux_sym_hexdigit_token1,
    STATE(324), 2,
      sym_hexdigit,
      aux_sym_oneline_hex_repeat1,
  [9632] = 3,
    ACTIONS(793), 1,
      sym_comment,
    ACTIONS(1429), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1427), 3,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
      aux_sym_json_string_text_token1,
  [9644] = 3,
    ACTIONS(793), 1,
      sym_comment,
    ACTIONS(1433), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1431), 3,
      anon_sym_BSLASH,
      anon_sym_BQUOTE,
      aux_sym_oneline_string_text_token1,
  [9656] = 1,
    ACTIONS(1418), 5,
      anon_sym_LF,
      anon_sym_BSLASH,
      sym_filename_text,
      anon_sym_LBRACE_LBRACE,
      sym_comment,
  [9664] = 3,
    ACTIONS(793), 1,
      sym_comment,
    ACTIONS(1437), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1435), 3,
      anon_sym_BSLASH,
      anon_sym_BQUOTE,
      aux_sym_oneline_string_text_token1,
  [9676] = 4,
    ACTIONS(15), 1,
      anon_sym_LF,
    ACTIONS(63), 1,
      sym_comment,
    STATE(56), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(2), 2,
      sym__comment_or_new_line,
      aux_sym_hurl_file_repeat2,
  [9690] = 3,
    ACTIONS(793), 1,
      sym_comment,
    ACTIONS(1441), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1439), 3,
      anon_sym_BSLASH,
      anon_sym_BQUOTE,
      aux_sym_oneline_string_text_token1,
  [9702] = 3,
    ACTIONS(793), 1,
      sym_comment,
    ACTIONS(1445), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1443), 3,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
      aux_sym_json_string_text_token1,
  [9714] = 2,
    ACTIONS(1449), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1447), 4,
      anon_sym_LF,
      anon_sym_BSLASH,
      aux_sym_value_string_text_token1,
      sym_comment,
  [9724] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1391), 4,
      anon_sym_COLON2,
      sym_key_string_text,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
  [9734] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1451), 4,
      anon_sym_COLON2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [9744] = 3,
    ACTIONS(793), 1,
      sym_comment,
    ACTIONS(1455), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1453), 3,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
      aux_sym_json_string_text_token1,
  [9756] = 4,
    ACTIONS(61), 1,
      aux_sym_digit_token1,
    ACTIONS(1278), 1,
      anon_sym_LF,
    ACTIONS(1457), 1,
      sym_comment,
    STATE(234), 2,
      sym_digit,
      aux_sym_integer_repeat1,
  [9770] = 2,
    ACTIONS(793), 1,
      sym_comment,
    ACTIONS(1459), 4,
      anon_sym_DQUOTE,
      aux_sym_quoted_string_text_token1,
      anon_sym_BSLASH,
      anon_sym_LBRACE_LBRACE,
  [9780] = 2,
    ACTIONS(1310), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1308), 4,
      anon_sym_LF,
      anon_sym_BSLASH,
      aux_sym_value_string_text_token1,
      sym_comment,
  [9790] = 3,
    ACTIONS(793), 1,
      sym_comment,
    ACTIONS(1463), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1461), 3,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
      aux_sym_json_string_text_token1,
  [9802] = 2,
    ACTIONS(1288), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1286), 4,
      anon_sym_LF,
      anon_sym_BSLASH,
      aux_sym_value_string_text_token1,
      sym_comment,
  [9812] = 5,
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
  [9828] = 5,
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
  [9844] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1477), 1,
      anon_sym_SEMI,
    ACTIONS(1479), 1,
      aux_sym_hexdigit_token1,
    STATE(352), 2,
      sym_hexdigit,
      aux_sym_oneline_hex_repeat1,
  [9858] = 5,
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
  [9874] = 5,
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
  [9890] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(728), 1,
      anon_sym_DQUOTE,
    ACTIONS(1401), 1,
      anon_sym_SLASH,
    STATE(531), 2,
      sym_quoted_string,
      sym_regex,
  [9904] = 3,
    ACTIONS(793), 1,
      sym_comment,
    ACTIONS(1483), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1481), 3,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
      aux_sym_json_string_text_token1,
  [9916] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(736), 1,
      aux_sym_digit_token1,
    STATE(386), 1,
      sym_integer,
    STATE(229), 2,
      sym_digit,
      aux_sym_integer_repeat1,
  [9930] = 2,
    ACTIONS(793), 1,
      sym_comment,
    ACTIONS(1485), 4,
      anon_sym_DQUOTE,
      aux_sym_quoted_string_text_token1,
      anon_sym_BSLASH,
      anon_sym_LBRACE_LBRACE,
  [9940] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(736), 1,
      aux_sym_digit_token1,
    STATE(431), 1,
      sym_integer,
    STATE(229), 2,
      sym_digit,
      aux_sym_integer_repeat1,
  [9954] = 5,
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
  [9970] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1479), 1,
      aux_sym_hexdigit_token1,
    ACTIONS(1487), 1,
      anon_sym_SEMI,
    STATE(324), 2,
      sym_hexdigit,
      aux_sym_oneline_hex_repeat1,
  [9984] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(736), 1,
      aux_sym_digit_token1,
    STATE(293), 2,
      sym_digit,
      aux_sym_integer_repeat1,
  [9995] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1489), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [10004] = 4,
    ACTIONS(7), 1,
      anon_sym_LF,
    ACTIONS(11), 1,
      sym_comment,
    STATE(15), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(32), 1,
      sym__comment_or_new_line,
  [10017] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1491), 1,
      aux_sym_variable_name_token1,
    STATE(130), 1,
      sym_variable_name,
    STATE(582), 1,
      sym_expr,
  [10030] = 4,
    ACTIONS(7), 1,
      anon_sym_LF,
    ACTIONS(11), 1,
      sym_comment,
    STATE(15), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(30), 1,
      sym__comment_or_new_line,
  [10043] = 4,
    ACTIONS(7), 1,
      anon_sym_LF,
    ACTIONS(11), 1,
      sym_comment,
    STATE(15), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(29), 1,
      sym__comment_or_new_line,
  [10056] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1491), 1,
      aux_sym_variable_name_token1,
    STATE(130), 1,
      sym_variable_name,
    STATE(581), 1,
      sym_expr,
  [10069] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1491), 1,
      aux_sym_variable_name_token1,
    STATE(355), 1,
      sym_variable_definition,
    STATE(537), 1,
      sym_variable_name,
  [10082] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1491), 1,
      aux_sym_variable_name_token1,
    STATE(130), 1,
      sym_variable_name,
    STATE(580), 1,
      sym_expr,
  [10095] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(434), 1,
      sym_boolean,
    ACTIONS(732), 2,
      anon_sym_true,
      anon_sym_false,
  [10106] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(429), 1,
      sym_boolean,
    ACTIONS(732), 2,
      anon_sym_true,
      anon_sym_false,
  [10117] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(435), 1,
      sym_boolean,
    ACTIONS(732), 2,
      anon_sym_true,
      anon_sym_false,
  [10128] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1491), 1,
      aux_sym_variable_name_token1,
    STATE(130), 1,
      sym_variable_name,
    STATE(579), 1,
      sym_expr,
  [10141] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1491), 1,
      aux_sym_variable_name_token1,
    STATE(130), 1,
      sym_variable_name,
    STATE(578), 1,
      sym_expr,
  [10154] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1491), 1,
      aux_sym_variable_name_token1,
    STATE(130), 1,
      sym_variable_name,
    STATE(577), 1,
      sym_expr,
  [10167] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1491), 1,
      aux_sym_variable_name_token1,
    STATE(130), 1,
      sym_variable_name,
    STATE(576), 1,
      sym_expr,
  [10180] = 4,
    ACTIONS(7), 1,
      anon_sym_LF,
    ACTIONS(11), 1,
      sym_comment,
    STATE(15), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(103), 1,
      sym__comment_or_new_line,
  [10193] = 4,
    ACTIONS(15), 1,
      anon_sym_LF,
    ACTIONS(63), 1,
      sym_comment,
    STATE(56), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(57), 1,
      sym__comment_or_new_line,
  [10206] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(437), 1,
      sym_boolean,
    ACTIONS(732), 2,
      anon_sym_true,
      anon_sym_false,
  [10217] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(440), 1,
      sym_boolean,
    ACTIONS(732), 2,
      anon_sym_true,
      anon_sym_false,
  [10228] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1491), 1,
      aux_sym_variable_name_token1,
    STATE(130), 1,
      sym_variable_name,
    STATE(574), 1,
      sym_expr,
  [10241] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1491), 1,
      aux_sym_variable_name_token1,
    STATE(130), 1,
      sym_variable_name,
    STATE(572), 1,
      sym_expr,
  [10254] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1491), 1,
      aux_sym_variable_name_token1,
    STATE(130), 1,
      sym_variable_name,
    STATE(569), 1,
      sym_expr,
  [10267] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1491), 1,
      aux_sym_variable_name_token1,
    STATE(130), 1,
      sym_variable_name,
    STATE(541), 1,
      sym_expr,
  [10280] = 4,
    ACTIONS(7), 1,
      anon_sym_LF,
    ACTIONS(11), 1,
      sym_comment,
    STATE(15), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(16), 1,
      sym__comment_or_new_line,
  [10293] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1493), 1,
      anon_sym_COMMA,
    ACTIONS(1495), 1,
      anon_sym_RBRACK,
    STATE(394), 1,
      aux_sym_json_array_repeat1,
  [10306] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1190), 1,
      anon_sym_COMMA,
    ACTIONS(1497), 1,
      anon_sym_RBRACE,
    STATE(422), 1,
      aux_sym_json_object_repeat1,
  [10319] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(736), 1,
      aux_sym_digit_token1,
    STATE(262), 2,
      sym_digit,
      aux_sym_integer_repeat1,
  [10330] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1493), 1,
      anon_sym_COMMA,
    ACTIONS(1499), 1,
      anon_sym_RBRACK,
    STATE(378), 1,
      aux_sym_json_array_repeat1,
  [10343] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1190), 1,
      anon_sym_COMMA,
    ACTIONS(1501), 1,
      anon_sym_RBRACE,
    STATE(422), 1,
      aux_sym_json_object_repeat1,
  [10356] = 4,
    ACTIONS(7), 1,
      anon_sym_LF,
    ACTIONS(11), 1,
      sym_comment,
    STATE(15), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(53), 1,
      sym__comment_or_new_line,
  [10369] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1190), 1,
      anon_sym_COMMA,
    ACTIONS(1501), 1,
      anon_sym_RBRACE,
    STATE(379), 1,
      aux_sym_json_object_repeat1,
  [10382] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1505), 1,
      anon_sym_POUND,
    ACTIONS(1503), 2,
      anon_sym_SEMI,
      aux_sym_filename_escaped_char_token1,
  [10393] = 4,
    ACTIONS(7), 1,
      anon_sym_LF,
    ACTIONS(11), 1,
      sym_comment,
    STATE(15), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(33), 1,
      sym__comment_or_new_line,
  [10406] = 4,
    ACTIONS(795), 1,
      anon_sym_LF,
    ACTIONS(811), 1,
      sym_comment,
    STATE(67), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(71), 1,
      sym__comment_or_new_line,
  [10419] = 4,
    ACTIONS(7), 1,
      anon_sym_LF,
    ACTIONS(11), 1,
      sym_comment,
    STATE(15), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(62), 1,
      sym__comment_or_new_line,
  [10432] = 4,
    ACTIONS(1507), 1,
      anon_sym_LF,
    ACTIONS(1509), 1,
      aux_sym_file_contenttype_token1,
    ACTIONS(1511), 1,
      sym_comment,
    STATE(609), 1,
      sym_file_contenttype,
  [10445] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1292), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [10454] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(357), 1,
      sym_boolean,
    ACTIONS(732), 2,
      anon_sym_true,
      anon_sym_false,
  [10465] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1515), 1,
      anon_sym_POUND,
    ACTIONS(1513), 2,
      anon_sym_SEMI,
      aux_sym_filename_escaped_char_token1,
  [10476] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1493), 1,
      anon_sym_COMMA,
    ACTIONS(1517), 1,
      anon_sym_RBRACK,
    STATE(442), 1,
      aux_sym_json_array_repeat1,
  [10489] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1519), 1,
      anon_sym_COMMA,
    ACTIONS(1522), 1,
      anon_sym_RBRACK,
    STATE(394), 1,
      aux_sym_json_array_repeat1,
  [10502] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1190), 1,
      anon_sym_COMMA,
    ACTIONS(1524), 1,
      anon_sym_RBRACE,
    STATE(422), 1,
      aux_sym_json_object_repeat1,
  [10515] = 4,
    ACTIONS(7), 1,
      anon_sym_LF,
    ACTIONS(11), 1,
      sym_comment,
    STATE(14), 1,
      sym__comment_or_new_line,
    STATE(15), 1,
      aux_sym__comment_or_new_line_repeat1,
  [10528] = 4,
    ACTIONS(1526), 1,
      anon_sym_LF,
    ACTIONS(1528), 1,
      sym_comment,
    STATE(135), 1,
      sym__comment_or_new_line,
    STATE(270), 1,
      aux_sym__comment_or_new_line_repeat1,
  [10541] = 4,
    ACTIONS(1526), 1,
      anon_sym_LF,
    ACTIONS(1528), 1,
      sym_comment,
    STATE(133), 1,
      sym__comment_or_new_line,
    STATE(270), 1,
      aux_sym__comment_or_new_line_repeat1,
  [10554] = 4,
    ACTIONS(1526), 1,
      anon_sym_LF,
    ACTIONS(1528), 1,
      sym_comment,
    STATE(136), 1,
      sym__comment_or_new_line,
    STATE(270), 1,
      aux_sym__comment_or_new_line_repeat1,
  [10567] = 4,
    ACTIONS(1526), 1,
      anon_sym_LF,
    ACTIONS(1528), 1,
      sym_comment,
    STATE(137), 1,
      sym__comment_or_new_line,
    STATE(270), 1,
      aux_sym__comment_or_new_line_repeat1,
  [10580] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(436), 1,
      sym_status,
    ACTIONS(1530), 2,
      aux_sym_status_token1,
      anon_sym_STAR,
  [10591] = 2,
    ACTIONS(793), 1,
      sym_comment,
    ACTIONS(1532), 3,
      anon_sym_BSLASH,
      anon_sym_SLASH,
      aux_sym_regex_text_token1,
  [10600] = 4,
    ACTIONS(1526), 1,
      anon_sym_LF,
    ACTIONS(1528), 1,
      sym_comment,
    STATE(163), 1,
      sym__comment_or_new_line,
    STATE(270), 1,
      aux_sym__comment_or_new_line_repeat1,
  [10613] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1534), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [10622] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1536), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [10631] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1190), 1,
      anon_sym_COMMA,
    ACTIONS(1524), 1,
      anon_sym_RBRACE,
    STATE(425), 1,
      aux_sym_json_object_repeat1,
  [10644] = 4,
    ACTIONS(1326), 1,
      anon_sym_DOT,
    ACTIONS(1538), 1,
      anon_sym_LF,
    ACTIONS(1540), 1,
      sym_comment,
    STATE(589), 1,
      sym_fraction,
  [10657] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1542), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [10666] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(781), 1,
      aux_sym_digit_token1,
    STATE(244), 2,
      sym_digit,
      aux_sym_integer_repeat1,
  [10677] = 4,
    ACTIONS(1326), 1,
      anon_sym_DOT,
    ACTIONS(1544), 1,
      anon_sym_LF,
    ACTIONS(1546), 1,
      sym_comment,
    STATE(589), 1,
      sym_fraction,
  [10690] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1548), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [10699] = 4,
    ACTIONS(1326), 1,
      anon_sym_DOT,
    ACTIONS(1550), 1,
      anon_sym_LF,
    ACTIONS(1552), 1,
      sym_comment,
    STATE(589), 1,
      sym_fraction,
  [10712] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1554), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [10721] = 4,
    ACTIONS(1326), 1,
      anon_sym_DOT,
    ACTIONS(1556), 1,
      anon_sym_LF,
    ACTIONS(1558), 1,
      sym_comment,
    STATE(589), 1,
      sym_fraction,
  [10734] = 4,
    ACTIONS(1526), 1,
      anon_sym_LF,
    ACTIONS(1528), 1,
      sym_comment,
    STATE(270), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(532), 1,
      sym__comment_or_new_line,
  [10747] = 4,
    ACTIONS(1326), 1,
      anon_sym_DOT,
    ACTIONS(1560), 1,
      anon_sym_LF,
    ACTIONS(1562), 1,
      sym_comment,
    STATE(589), 1,
      sym_fraction,
  [10760] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1491), 1,
      aux_sym_variable_name_token1,
    STATE(130), 1,
      sym_variable_name,
    STATE(611), 1,
      sym_expr,
  [10773] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1455), 3,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      aux_sym_hexdigit_token1,
  [10782] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1564), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [10791] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(781), 1,
      aux_sym_digit_token1,
    STATE(198), 2,
      sym_digit,
      aux_sym_integer_repeat1,
  [10802] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1377), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [10811] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1566), 1,
      anon_sym_RBRACE,
    ACTIONS(1568), 1,
      anon_sym_COMMA,
    STATE(422), 1,
      aux_sym_json_object_repeat1,
  [10824] = 4,
    ACTIONS(7), 1,
      anon_sym_LF,
    ACTIONS(11), 1,
      sym_comment,
    STATE(15), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(54), 1,
      sym__comment_or_new_line,
  [10837] = 4,
    ACTIONS(7), 1,
      anon_sym_LF,
    ACTIONS(11), 1,
      sym_comment,
    STATE(15), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(36), 1,
      sym__comment_or_new_line,
  [10850] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1190), 1,
      anon_sym_COMMA,
    ACTIONS(1571), 1,
      anon_sym_RBRACE,
    STATE(422), 1,
      aux_sym_json_object_repeat1,
  [10863] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(358), 1,
      sym_boolean,
    ACTIONS(732), 2,
      anon_sym_true,
      anon_sym_false,
  [10874] = 4,
    ACTIONS(1509), 1,
      aux_sym_file_contenttype_token1,
    ACTIONS(1573), 1,
      anon_sym_LF,
    ACTIONS(1575), 1,
      sym_comment,
    STATE(605), 1,
      sym_file_contenttype,
  [10887] = 4,
    ACTIONS(7), 1,
      anon_sym_LF,
    ACTIONS(11), 1,
      sym_comment,
    STATE(15), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(26), 1,
      sym__comment_or_new_line,
  [10900] = 4,
    ACTIONS(7), 1,
      anon_sym_LF,
    ACTIONS(11), 1,
      sym_comment,
    STATE(15), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(37), 1,
      sym__comment_or_new_line,
  [10913] = 4,
    ACTIONS(1326), 1,
      anon_sym_DOT,
    ACTIONS(1577), 1,
      anon_sym_LF,
    ACTIONS(1579), 1,
      sym_comment,
    STATE(589), 1,
      sym_fraction,
  [10926] = 4,
    ACTIONS(7), 1,
      anon_sym_LF,
    ACTIONS(11), 1,
      sym_comment,
    STATE(15), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(34), 1,
      sym__comment_or_new_line,
  [10939] = 4,
    ACTIONS(7), 1,
      anon_sym_LF,
    ACTIONS(11), 1,
      sym_comment,
    STATE(15), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(28), 1,
      sym__comment_or_new_line,
  [10952] = 4,
    ACTIONS(1326), 1,
      anon_sym_DOT,
    ACTIONS(1581), 1,
      anon_sym_LF,
    ACTIONS(1583), 1,
      sym_comment,
    STATE(589), 1,
      sym_fraction,
  [10965] = 4,
    ACTIONS(7), 1,
      anon_sym_LF,
    ACTIONS(11), 1,
      sym_comment,
    STATE(15), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(35), 1,
      sym__comment_or_new_line,
  [10978] = 4,
    ACTIONS(7), 1,
      anon_sym_LF,
    ACTIONS(11), 1,
      sym_comment,
    STATE(15), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(24), 1,
      sym__comment_or_new_line,
  [10991] = 4,
    ACTIONS(795), 1,
      anon_sym_LF,
    ACTIONS(811), 1,
      sym_comment,
    STATE(9), 1,
      sym__comment_or_new_line,
    STATE(67), 1,
      aux_sym__comment_or_new_line_repeat1,
  [11004] = 4,
    ACTIONS(7), 1,
      anon_sym_LF,
    ACTIONS(11), 1,
      sym_comment,
    STATE(15), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(25), 1,
      sym__comment_or_new_line,
  [11017] = 4,
    ACTIONS(795), 1,
      anon_sym_LF,
    ACTIONS(811), 1,
      sym_comment,
    STATE(59), 1,
      sym__comment_or_new_line,
    STATE(67), 1,
      aux_sym__comment_or_new_line_repeat1,
  [11030] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1585), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [11039] = 4,
    ACTIONS(7), 1,
      anon_sym_LF,
    ACTIONS(11), 1,
      sym_comment,
    STATE(15), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(23), 1,
      sym__comment_or_new_line,
  [11052] = 2,
    ACTIONS(793), 1,
      sym_comment,
    ACTIONS(1587), 3,
      anon_sym_BSLASH,
      anon_sym_SLASH,
      aux_sym_regex_text_token1,
  [11061] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1493), 1,
      anon_sym_COMMA,
    ACTIONS(1589), 1,
      anon_sym_RBRACK,
    STATE(394), 1,
      aux_sym_json_array_repeat1,
  [11074] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1276), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [11083] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1591), 2,
      aux_sym_status_token1,
      anon_sym_STAR,
  [11091] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1522), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [11099] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1479), 1,
      aux_sym_hexdigit_token1,
    STATE(450), 1,
      sym_hexdigit,
  [11109] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1479), 1,
      aux_sym_hexdigit_token1,
    STATE(451), 1,
      sym_hexdigit,
  [11119] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1479), 1,
      aux_sym_hexdigit_token1,
    STATE(452), 1,
      sym_hexdigit,
  [11129] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1479), 1,
      aux_sym_hexdigit_token1,
    STATE(453), 1,
      sym_hexdigit,
  [11139] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1479), 1,
      aux_sym_hexdigit_token1,
    STATE(455), 1,
      sym_hexdigit,
  [11149] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1479), 1,
      aux_sym_hexdigit_token1,
    STATE(456), 1,
      sym_hexdigit,
  [11159] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1479), 1,
      aux_sym_hexdigit_token1,
    STATE(457), 1,
      sym_hexdigit,
  [11169] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1479), 1,
      aux_sym_hexdigit_token1,
    STATE(458), 1,
      sym_hexdigit,
  [11179] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1593), 1,
      anon_sym_LBRACE,
    STATE(321), 1,
      sym_unicode_char,
  [11189] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1479), 1,
      aux_sym_hexdigit_token1,
    STATE(460), 1,
      sym_hexdigit,
  [11199] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1479), 1,
      aux_sym_hexdigit_token1,
    STATE(463), 1,
      sym_hexdigit,
  [11209] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1479), 1,
      aux_sym_hexdigit_token1,
    STATE(465), 1,
      sym_hexdigit,
  [11219] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1479), 1,
      aux_sym_hexdigit_token1,
    STATE(466), 1,
      sym_hexdigit,
  [11229] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1479), 1,
      aux_sym_hexdigit_token1,
    STATE(488), 1,
      sym_hexdigit,
  [11239] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1479), 1,
      aux_sym_hexdigit_token1,
    STATE(575), 1,
      sym_hexdigit,
  [11249] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1595), 1,
      anon_sym_file_COMMA,
    STATE(415), 1,
      sym_file_value,
  [11259] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1479), 1,
      aux_sym_hexdigit_token1,
    STATE(487), 1,
      sym_hexdigit,
  [11269] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1479), 1,
      aux_sym_hexdigit_token1,
    STATE(573), 1,
      sym_hexdigit,
  [11279] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(728), 1,
      anon_sym_DQUOTE,
    STATE(529), 1,
      sym_quoted_string,
  [11289] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1479), 1,
      aux_sym_hexdigit_token1,
    STATE(571), 1,
      sym_hexdigit,
  [11299] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1479), 1,
      aux_sym_hexdigit_token1,
    STATE(568), 1,
      sym_hexdigit,
  [11309] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(728), 1,
      anon_sym_DQUOTE,
    STATE(208), 1,
      sym_quoted_string,
  [11319] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(728), 1,
      anon_sym_DQUOTE,
    STATE(184), 1,
      sym_quoted_string,
  [11329] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(728), 1,
      anon_sym_DQUOTE,
    STATE(209), 1,
      sym_quoted_string,
  [11339] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(728), 1,
      anon_sym_DQUOTE,
    STATE(224), 1,
      sym_quoted_string,
  [11349] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(728), 1,
      anon_sym_DQUOTE,
    STATE(223), 1,
      sym_quoted_string,
  [11359] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1410), 1,
      anon_sym_DQUOTE,
    STATE(93), 1,
      sym_quoted_string,
  [11369] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1479), 1,
      aux_sym_hexdigit_token1,
    STATE(462), 1,
      sym_hexdigit,
  [11379] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1566), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [11387] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1597), 1,
      anon_sym_LBRACE,
    STATE(269), 1,
      sym_unicode_char,
  [11397] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1410), 1,
      anon_sym_DQUOTE,
    STATE(90), 1,
      sym_quoted_string,
  [11407] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1599), 1,
      anon_sym_LBRACE,
    STATE(326), 1,
      sym_unicode_char,
  [11417] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1410), 1,
      anon_sym_DQUOTE,
    STATE(87), 1,
      sym_quoted_string,
  [11427] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1410), 1,
      anon_sym_DQUOTE,
    STATE(85), 1,
      sym_quoted_string,
  [11437] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1479), 1,
      aux_sym_hexdigit_token1,
    STATE(483), 1,
      sym_hexdigit,
  [11447] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1410), 1,
      anon_sym_DQUOTE,
    STATE(91), 1,
      sym_quoted_string,
  [11457] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1601), 1,
      anon_sym_COLON,
    ACTIONS(1603), 1,
      anon_sym_COLON2,
  [11467] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1479), 1,
      aux_sym_hexdigit_token1,
    STATE(459), 1,
      sym_hexdigit,
  [11477] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1605), 1,
      anon_sym_LBRACE,
    STATE(349), 1,
      sym_unicode_char,
  [11487] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1479), 1,
      aux_sym_hexdigit_token1,
    STATE(473), 1,
      sym_hexdigit,
  [11497] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1607), 1,
      anon_sym_LBRACE,
    STATE(271), 1,
      sym_unicode_char,
  [11507] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1479), 1,
      aux_sym_hexdigit_token1,
    STATE(545), 1,
      sym_hexdigit,
  [11517] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1609), 1,
      aux_sym_hexdigit_token1,
    STATE(339), 1,
      sym_hexdigit,
  [11527] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1611), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [11535] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1338), 1,
      anon_sym_LT,
    ACTIONS(1340), 1,
      anon_sym_LT_QMARK,
  [11545] = 2,
    ACTIONS(1272), 1,
      sym_comment,
    ACTIONS(1274), 1,
      anon_sym_LF,
  [11552] = 2,
    ACTIONS(1613), 1,
      anon_sym_LF,
    ACTIONS(1615), 1,
      sym_comment,
  [11559] = 2,
    ACTIONS(1617), 1,
      anon_sym_LF,
    ACTIONS(1619), 1,
      sym_comment,
  [11566] = 2,
    ACTIONS(1621), 1,
      anon_sym_LF,
    ACTIONS(1623), 1,
      sym_comment,
  [11573] = 2,
    ACTIONS(1560), 1,
      anon_sym_LF,
    ACTIONS(1562), 1,
      sym_comment,
  [11580] = 2,
    ACTIONS(1556), 1,
      anon_sym_LF,
    ACTIONS(1558), 1,
      sym_comment,
  [11587] = 2,
    ACTIONS(1625), 1,
      anon_sym_LF,
    ACTIONS(1627), 1,
      sym_comment,
  [11594] = 2,
    ACTIONS(1550), 1,
      anon_sym_LF,
    ACTIONS(1552), 1,
      sym_comment,
  [11601] = 2,
    ACTIONS(1629), 1,
      anon_sym_LF,
    ACTIONS(1631), 1,
      sym_comment,
  [11608] = 2,
    ACTIONS(1544), 1,
      anon_sym_LF,
    ACTIONS(1546), 1,
      sym_comment,
  [11615] = 2,
    ACTIONS(1633), 1,
      anon_sym_LF,
    ACTIONS(1635), 1,
      sym_comment,
  [11622] = 2,
    ACTIONS(1538), 1,
      anon_sym_LF,
    ACTIONS(1540), 1,
      sym_comment,
  [11629] = 2,
    ACTIONS(1637), 1,
      anon_sym_LF,
    ACTIONS(1639), 1,
      sym_comment,
  [11636] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1641), 1,
      anon_sym_COLON2,
  [11643] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1643), 1,
      anon_sym_COLON2,
  [11650] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1645), 1,
      anon_sym_COLON2,
  [11657] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1647), 1,
      anon_sym_COLON2,
  [11664] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1649), 1,
      anon_sym_COLON2,
  [11671] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1651), 1,
      anon_sym_COLON2,
  [11678] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1653), 1,
      anon_sym_COLON2,
  [11685] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1655), 1,
      anon_sym_COLON2,
  [11692] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1657), 1,
      anon_sym_COLON2,
  [11699] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1659), 1,
      anon_sym_COLON2,
  [11706] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1661), 1,
      anon_sym_COLON2,
  [11713] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1663), 1,
      anon_sym_COLON2,
  [11720] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1665), 1,
      anon_sym_COLON2,
  [11727] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1667), 1,
      anon_sym_COLON2,
  [11734] = 2,
    ACTIONS(1536), 1,
      anon_sym_LF,
    ACTIONS(1669), 1,
      sym_comment,
  [11741] = 2,
    ACTIONS(1671), 1,
      anon_sym_LF,
    ACTIONS(1673), 1,
      sym_comment,
  [11748] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1675), 1,
      anon_sym_COLON2,
  [11755] = 2,
    ACTIONS(1677), 1,
      anon_sym_LF,
    ACTIONS(1679), 1,
      sym_comment,
  [11762] = 2,
    ACTIONS(1534), 1,
      anon_sym_LF,
    ACTIONS(1681), 1,
      sym_comment,
  [11769] = 2,
    ACTIONS(1683), 1,
      anon_sym_LF,
    ACTIONS(1685), 1,
      sym_comment,
  [11776] = 2,
    ACTIONS(793), 1,
      sym_comment,
    ACTIONS(1687), 1,
      aux_sym_xml_open_tag_token1,
  [11783] = 2,
    ACTIONS(1689), 1,
      anon_sym_LF,
    ACTIONS(1691), 1,
      sym_comment,
  [11790] = 2,
    ACTIONS(793), 1,
      sym_comment,
    ACTIONS(1693), 1,
      aux_sym_xml_prolog_tag_token1,
  [11797] = 2,
    ACTIONS(793), 1,
      sym_comment,
    ACTIONS(1695), 1,
      aux_sym_oneline_base64_token1,
  [11804] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1697), 1,
      anon_sym_SEMI,
  [11811] = 2,
    ACTIONS(1699), 1,
      anon_sym_LF,
    ACTIONS(1701), 1,
      sym_comment,
  [11818] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1703), 1,
      aux_sym_key_string_escaped_char_token1,
  [11825] = 2,
    ACTIONS(1705), 1,
      anon_sym_LF,
    ACTIONS(1707), 1,
      sym_comment,
  [11832] = 2,
    ACTIONS(1709), 1,
      anon_sym_LF,
    ACTIONS(1711), 1,
      sym_comment,
  [11839] = 2,
    ACTIONS(1713), 1,
      anon_sym_LF,
    ACTIONS(1715), 1,
      sym_comment,
  [11846] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1717), 1,
      anon_sym_SEMI,
  [11853] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1719), 1,
      anon_sym_GT,
  [11860] = 2,
    ACTIONS(1420), 1,
      anon_sym_LF,
    ACTIONS(1721), 1,
      sym_comment,
  [11867] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1723), 1,
      anon_sym_EQ,
  [11874] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1725), 1,
      anon_sym_QMARK_GT,
  [11881] = 2,
    ACTIONS(1727), 1,
      anon_sym_LF,
    ACTIONS(1729), 1,
      sym_comment,
  [11888] = 2,
    ACTIONS(1731), 1,
      anon_sym_LF,
    ACTIONS(1733), 1,
      sym_comment,
  [11895] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1735), 1,
      anon_sym_RBRACE_RBRACE,
  [11902] = 2,
    ACTIONS(1264), 1,
      sym_comment,
    ACTIONS(1266), 1,
      anon_sym_LF,
  [11909] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1737), 1,
      aux_sym_key_string_escaped_char_token1,
  [11916] = 2,
    ACTIONS(793), 1,
      sym_comment,
    ACTIONS(1739), 1,
      aux_sym_xml_close_tag_token1,
  [11923] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1741), 1,
      anon_sym_RBRACE,
  [11930] = 2,
    ACTIONS(1743), 1,
      anon_sym_LF,
    ACTIONS(1745), 1,
      sym_comment,
  [11937] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1747), 1,
      anon_sym_SEMI,
  [11944] = 2,
    ACTIONS(1489), 1,
      anon_sym_LF,
    ACTIONS(1749), 1,
      sym_comment,
  [11951] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1751), 1,
      anon_sym_QMARK_GT,
  [11958] = 2,
    ACTIONS(1753), 1,
      anon_sym_LF,
    ACTIONS(1755), 1,
      sym_comment,
  [11965] = 2,
    ACTIONS(1757), 1,
      anon_sym_LF,
    ACTIONS(1759), 1,
      sym_comment,
  [11972] = 2,
    ACTIONS(1761), 1,
      anon_sym_LF,
    ACTIONS(1763), 1,
      sym_comment,
  [11979] = 2,
    ACTIONS(1765), 1,
      anon_sym_LF,
    ACTIONS(1767), 1,
      sym_comment,
  [11986] = 2,
    ACTIONS(1276), 1,
      anon_sym_LF,
    ACTIONS(1403), 1,
      sym_comment,
  [11993] = 2,
    ACTIONS(1554), 1,
      anon_sym_LF,
    ACTIONS(1769), 1,
      sym_comment,
  [12000] = 2,
    ACTIONS(1771), 1,
      anon_sym_LF,
    ACTIONS(1773), 1,
      sym_comment,
  [12007] = 2,
    ACTIONS(1775), 1,
      anon_sym_LF,
    ACTIONS(1777), 1,
      sym_comment,
  [12014] = 2,
    ACTIONS(1779), 1,
      anon_sym_LF,
    ACTIONS(1781), 1,
      sym_comment,
  [12021] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1783), 1,
      anon_sym_GT,
  [12028] = 2,
    ACTIONS(1785), 1,
      anon_sym_LF,
    ACTIONS(1787), 1,
      sym_comment,
  [12035] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1789), 1,
      anon_sym_SLASH,
  [12042] = 2,
    ACTIONS(1585), 1,
      anon_sym_LF,
    ACTIONS(1791), 1,
      sym_comment,
  [12049] = 2,
    ACTIONS(1548), 1,
      anon_sym_LF,
    ACTIONS(1793), 1,
      sym_comment,
  [12056] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1795), 1,
      anon_sym_GT,
  [12063] = 2,
    ACTIONS(1334), 1,
      sym_comment,
    ACTIONS(1336), 1,
      anon_sym_LF,
  [12070] = 2,
    ACTIONS(793), 1,
      sym_comment,
    ACTIONS(1797), 1,
      anon_sym_LF,
  [12077] = 2,
    ACTIONS(1799), 1,
      anon_sym_LF,
    ACTIONS(1801), 1,
      sym_comment,
  [12084] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1803), 1,
      anon_sym_RBRACE,
  [12091] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1805), 1,
      anon_sym_RBRACE_RBRACE,
  [12098] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1807), 1,
      aux_sym_key_string_escaped_char_token1,
  [12105] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1809), 1,
      anon_sym_RBRACE,
  [12112] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1811), 1,
      anon_sym_RBRACE_RBRACE,
  [12119] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1813), 1,
      anon_sym_RBRACE,
  [12126] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1815), 1,
      anon_sym_RBRACE_RBRACE,
  [12133] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1817), 1,
      anon_sym_RBRACE,
  [12140] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1819), 1,
      anon_sym_RBRACE_RBRACE,
  [12147] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1821), 1,
      anon_sym_RBRACE_RBRACE,
  [12154] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1823), 1,
      anon_sym_RBRACE_RBRACE,
  [12161] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1825), 1,
      anon_sym_RBRACE_RBRACE,
  [12168] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1827), 1,
      anon_sym_RBRACE_RBRACE,
  [12175] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1829), 1,
      anon_sym_RBRACE_RBRACE,
  [12182] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1831), 1,
      anon_sym_RBRACE_RBRACE,
  [12189] = 2,
    ACTIONS(1564), 1,
      anon_sym_LF,
    ACTIONS(1833), 1,
      sym_comment,
  [12196] = 2,
    ACTIONS(793), 1,
      sym_comment,
    ACTIONS(1835), 1,
      aux_sym_xml_prolog_tag_token1,
  [12203] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1837), 1,
      ts_builtin_sym_end,
  [12210] = 2,
    ACTIONS(793), 1,
      sym_comment,
    ACTIONS(1839), 1,
      aux_sym_xml_close_tag_token1,
  [12217] = 2,
    ACTIONS(1581), 1,
      anon_sym_LF,
    ACTIONS(1583), 1,
      sym_comment,
  [12224] = 2,
    ACTIONS(1841), 1,
      anon_sym_LF,
    ACTIONS(1843), 1,
      sym_comment,
  [12231] = 2,
    ACTIONS(1845), 1,
      anon_sym_LF,
    ACTIONS(1847), 1,
      sym_comment,
  [12238] = 2,
    ACTIONS(1542), 1,
      anon_sym_LF,
    ACTIONS(1849), 1,
      sym_comment,
  [12245] = 2,
    ACTIONS(793), 1,
      sym_comment,
    ACTIONS(1851), 1,
      anon_sym_LF,
  [12252] = 2,
    ACTIONS(793), 1,
      sym_comment,
    ACTIONS(1853), 1,
      aux_sym_oneline_string_text_token2,
  [12259] = 2,
    ACTIONS(1855), 1,
      anon_sym_LF,
    ACTIONS(1857), 1,
      sym_comment,
  [12266] = 2,
    ACTIONS(1451), 1,
      anon_sym_LF,
    ACTIONS(1859), 1,
      sym_comment,
  [12273] = 2,
    ACTIONS(1861), 1,
      anon_sym_LF,
    ACTIONS(1863), 1,
      sym_comment,
  [12280] = 2,
    ACTIONS(1865), 1,
      anon_sym_LF,
    ACTIONS(1867), 1,
      sym_comment,
  [12287] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1601), 1,
      anon_sym_COLON,
  [12294] = 2,
    ACTIONS(1377), 1,
      anon_sym_LF,
    ACTIONS(1381), 1,
      sym_comment,
  [12301] = 2,
    ACTIONS(1869), 1,
      anon_sym_LF,
    ACTIONS(1871), 1,
      sym_comment,
  [12308] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1873), 1,
      anon_sym_COLON2,
  [12315] = 2,
    ACTIONS(793), 1,
      sym_comment,
    ACTIONS(1875), 1,
      aux_sym_regex_escaped_char_token1,
  [12322] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1877), 1,
      anon_sym_SLASH,
  [12329] = 2,
    ACTIONS(1879), 1,
      anon_sym_LF,
    ACTIONS(1881), 1,
      sym_comment,
  [12336] = 2,
    ACTIONS(1883), 1,
      anon_sym_LF,
    ACTIONS(1885), 1,
      sym_comment,
  [12343] = 2,
    ACTIONS(1887), 1,
      anon_sym_LF,
    ACTIONS(1889), 1,
      sym_comment,
  [12350] = 2,
    ACTIONS(793), 1,
      sym_comment,
    ACTIONS(1891), 1,
      aux_sym_variable_name_token2,
  [12357] = 2,
    ACTIONS(1577), 1,
      anon_sym_LF,
    ACTIONS(1579), 1,
      sym_comment,
  [12364] = 2,
    ACTIONS(1893), 1,
      anon_sym_LF,
    ACTIONS(1895), 1,
      sym_comment,
  [12371] = 2,
    ACTIONS(1573), 1,
      anon_sym_LF,
    ACTIONS(1575), 1,
      sym_comment,
  [12378] = 2,
    ACTIONS(1897), 1,
      anon_sym_LF,
    ACTIONS(1899), 1,
      sym_comment,
  [12385] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1901), 1,
      anon_sym_RBRACE_RBRACE,
  [12392] = 2,
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
  [SMALL_STATE(206)] = 7808,
  [SMALL_STATE(207)] = 7822,
  [SMALL_STATE(208)] = 7842,
  [SMALL_STATE(209)] = 7856,
  [SMALL_STATE(210)] = 7870,
  [SMALL_STATE(211)] = 7892,
  [SMALL_STATE(212)] = 7908,
  [SMALL_STATE(213)] = 7930,
  [SMALL_STATE(214)] = 7950,
  [SMALL_STATE(215)] = 7974,
  [SMALL_STATE(216)] = 7988,
  [SMALL_STATE(217)] = 8002,
  [SMALL_STATE(218)] = 8016,
  [SMALL_STATE(219)] = 8030,
  [SMALL_STATE(220)] = 8044,
  [SMALL_STATE(221)] = 8058,
  [SMALL_STATE(222)] = 8072,
  [SMALL_STATE(223)] = 8086,
  [SMALL_STATE(224)] = 8100,
  [SMALL_STATE(225)] = 8114,
  [SMALL_STATE(226)] = 8127,
  [SMALL_STATE(227)] = 8152,
  [SMALL_STATE(228)] = 8173,
  [SMALL_STATE(229)] = 8198,
  [SMALL_STATE(230)] = 8215,
  [SMALL_STATE(231)] = 8236,
  [SMALL_STATE(232)] = 8253,
  [SMALL_STATE(233)] = 8274,
  [SMALL_STATE(234)] = 8293,
  [SMALL_STATE(235)] = 8310,
  [SMALL_STATE(236)] = 8331,
  [SMALL_STATE(237)] = 8352,
  [SMALL_STATE(238)] = 8369,
  [SMALL_STATE(239)] = 8390,
  [SMALL_STATE(240)] = 8411,
  [SMALL_STATE(241)] = 8430,
  [SMALL_STATE(242)] = 8451,
  [SMALL_STATE(243)] = 8467,
  [SMALL_STATE(244)] = 8485,
  [SMALL_STATE(245)] = 8501,
  [SMALL_STATE(246)] = 8515,
  [SMALL_STATE(247)] = 8527,
  [SMALL_STATE(248)] = 8541,
  [SMALL_STATE(249)] = 8559,
  [SMALL_STATE(250)] = 8573,
  [SMALL_STATE(251)] = 8589,
  [SMALL_STATE(252)] = 8605,
  [SMALL_STATE(253)] = 8619,
  [SMALL_STATE(254)] = 8637,
  [SMALL_STATE(255)] = 8651,
  [SMALL_STATE(256)] = 8665,
  [SMALL_STATE(257)] = 8683,
  [SMALL_STATE(258)] = 8699,
  [SMALL_STATE(259)] = 8717,
  [SMALL_STATE(260)] = 8735,
  [SMALL_STATE(261)] = 8749,
  [SMALL_STATE(262)] = 8763,
  [SMALL_STATE(263)] = 8779,
  [SMALL_STATE(264)] = 8793,
  [SMALL_STATE(265)] = 8811,
  [SMALL_STATE(266)] = 8831,
  [SMALL_STATE(267)] = 8851,
  [SMALL_STATE(268)] = 8865,
  [SMALL_STATE(269)] = 8879,
  [SMALL_STATE(270)] = 8893,
  [SMALL_STATE(271)] = 8908,
  [SMALL_STATE(272)] = 8921,
  [SMALL_STATE(273)] = 8936,
  [SMALL_STATE(274)] = 8949,
  [SMALL_STATE(275)] = 8964,
  [SMALL_STATE(276)] = 8977,
  [SMALL_STATE(277)] = 8994,
  [SMALL_STATE(278)] = 9009,
  [SMALL_STATE(279)] = 9022,
  [SMALL_STATE(280)] = 9035,
  [SMALL_STATE(281)] = 9050,
  [SMALL_STATE(282)] = 9063,
  [SMALL_STATE(283)] = 9078,
  [SMALL_STATE(284)] = 9089,
  [SMALL_STATE(285)] = 9104,
  [SMALL_STATE(286)] = 9115,
  [SMALL_STATE(287)] = 9132,
  [SMALL_STATE(288)] = 9145,
  [SMALL_STATE(289)] = 9162,
  [SMALL_STATE(290)] = 9177,
  [SMALL_STATE(291)] = 9192,
  [SMALL_STATE(292)] = 9208,
  [SMALL_STATE(293)] = 9222,
  [SMALL_STATE(294)] = 9236,
  [SMALL_STATE(295)] = 9250,
  [SMALL_STATE(296)] = 9264,
  [SMALL_STATE(297)] = 9278,
  [SMALL_STATE(298)] = 9286,
  [SMALL_STATE(299)] = 9296,
  [SMALL_STATE(300)] = 9306,
  [SMALL_STATE(301)] = 9320,
  [SMALL_STATE(302)] = 9336,
  [SMALL_STATE(303)] = 9346,
  [SMALL_STATE(304)] = 9358,
  [SMALL_STATE(305)] = 9372,
  [SMALL_STATE(306)] = 9388,
  [SMALL_STATE(307)] = 9400,
  [SMALL_STATE(308)] = 9416,
  [SMALL_STATE(309)] = 9432,
  [SMALL_STATE(310)] = 9448,
  [SMALL_STATE(311)] = 9458,
  [SMALL_STATE(312)] = 9472,
  [SMALL_STATE(313)] = 9482,
  [SMALL_STATE(314)] = 9492,
  [SMALL_STATE(315)] = 9502,
  [SMALL_STATE(316)] = 9512,
  [SMALL_STATE(317)] = 9528,
  [SMALL_STATE(318)] = 9540,
  [SMALL_STATE(319)] = 9556,
  [SMALL_STATE(320)] = 9572,
  [SMALL_STATE(321)] = 9588,
  [SMALL_STATE(322)] = 9598,
  [SMALL_STATE(323)] = 9608,
  [SMALL_STATE(324)] = 9618,
  [SMALL_STATE(325)] = 9632,
  [SMALL_STATE(326)] = 9644,
  [SMALL_STATE(327)] = 9656,
  [SMALL_STATE(328)] = 9664,
  [SMALL_STATE(329)] = 9676,
  [SMALL_STATE(330)] = 9690,
  [SMALL_STATE(331)] = 9702,
  [SMALL_STATE(332)] = 9714,
  [SMALL_STATE(333)] = 9724,
  [SMALL_STATE(334)] = 9734,
  [SMALL_STATE(335)] = 9744,
  [SMALL_STATE(336)] = 9756,
  [SMALL_STATE(337)] = 9770,
  [SMALL_STATE(338)] = 9780,
  [SMALL_STATE(339)] = 9790,
  [SMALL_STATE(340)] = 9802,
  [SMALL_STATE(341)] = 9812,
  [SMALL_STATE(342)] = 9828,
  [SMALL_STATE(343)] = 9844,
  [SMALL_STATE(344)] = 9858,
  [SMALL_STATE(345)] = 9874,
  [SMALL_STATE(346)] = 9890,
  [SMALL_STATE(347)] = 9904,
  [SMALL_STATE(348)] = 9916,
  [SMALL_STATE(349)] = 9930,
  [SMALL_STATE(350)] = 9940,
  [SMALL_STATE(351)] = 9954,
  [SMALL_STATE(352)] = 9970,
  [SMALL_STATE(353)] = 9984,
  [SMALL_STATE(354)] = 9995,
  [SMALL_STATE(355)] = 10004,
  [SMALL_STATE(356)] = 10017,
  [SMALL_STATE(357)] = 10030,
  [SMALL_STATE(358)] = 10043,
  [SMALL_STATE(359)] = 10056,
  [SMALL_STATE(360)] = 10069,
  [SMALL_STATE(361)] = 10082,
  [SMALL_STATE(362)] = 10095,
  [SMALL_STATE(363)] = 10106,
  [SMALL_STATE(364)] = 10117,
  [SMALL_STATE(365)] = 10128,
  [SMALL_STATE(366)] = 10141,
  [SMALL_STATE(367)] = 10154,
  [SMALL_STATE(368)] = 10167,
  [SMALL_STATE(369)] = 10180,
  [SMALL_STATE(370)] = 10193,
  [SMALL_STATE(371)] = 10206,
  [SMALL_STATE(372)] = 10217,
  [SMALL_STATE(373)] = 10228,
  [SMALL_STATE(374)] = 10241,
  [SMALL_STATE(375)] = 10254,
  [SMALL_STATE(376)] = 10267,
  [SMALL_STATE(377)] = 10280,
  [SMALL_STATE(378)] = 10293,
  [SMALL_STATE(379)] = 10306,
  [SMALL_STATE(380)] = 10319,
  [SMALL_STATE(381)] = 10330,
  [SMALL_STATE(382)] = 10343,
  [SMALL_STATE(383)] = 10356,
  [SMALL_STATE(384)] = 10369,
  [SMALL_STATE(385)] = 10382,
  [SMALL_STATE(386)] = 10393,
  [SMALL_STATE(387)] = 10406,
  [SMALL_STATE(388)] = 10419,
  [SMALL_STATE(389)] = 10432,
  [SMALL_STATE(390)] = 10445,
  [SMALL_STATE(391)] = 10454,
  [SMALL_STATE(392)] = 10465,
  [SMALL_STATE(393)] = 10476,
  [SMALL_STATE(394)] = 10489,
  [SMALL_STATE(395)] = 10502,
  [SMALL_STATE(396)] = 10515,
  [SMALL_STATE(397)] = 10528,
  [SMALL_STATE(398)] = 10541,
  [SMALL_STATE(399)] = 10554,
  [SMALL_STATE(400)] = 10567,
  [SMALL_STATE(401)] = 10580,
  [SMALL_STATE(402)] = 10591,
  [SMALL_STATE(403)] = 10600,
  [SMALL_STATE(404)] = 10613,
  [SMALL_STATE(405)] = 10622,
  [SMALL_STATE(406)] = 10631,
  [SMALL_STATE(407)] = 10644,
  [SMALL_STATE(408)] = 10657,
  [SMALL_STATE(409)] = 10666,
  [SMALL_STATE(410)] = 10677,
  [SMALL_STATE(411)] = 10690,
  [SMALL_STATE(412)] = 10699,
  [SMALL_STATE(413)] = 10712,
  [SMALL_STATE(414)] = 10721,
  [SMALL_STATE(415)] = 10734,
  [SMALL_STATE(416)] = 10747,
  [SMALL_STATE(417)] = 10760,
  [SMALL_STATE(418)] = 10773,
  [SMALL_STATE(419)] = 10782,
  [SMALL_STATE(420)] = 10791,
  [SMALL_STATE(421)] = 10802,
  [SMALL_STATE(422)] = 10811,
  [SMALL_STATE(423)] = 10824,
  [SMALL_STATE(424)] = 10837,
  [SMALL_STATE(425)] = 10850,
  [SMALL_STATE(426)] = 10863,
  [SMALL_STATE(427)] = 10874,
  [SMALL_STATE(428)] = 10887,
  [SMALL_STATE(429)] = 10900,
  [SMALL_STATE(430)] = 10913,
  [SMALL_STATE(431)] = 10926,
  [SMALL_STATE(432)] = 10939,
  [SMALL_STATE(433)] = 10952,
  [SMALL_STATE(434)] = 10965,
  [SMALL_STATE(435)] = 10978,
  [SMALL_STATE(436)] = 10991,
  [SMALL_STATE(437)] = 11004,
  [SMALL_STATE(438)] = 11017,
  [SMALL_STATE(439)] = 11030,
  [SMALL_STATE(440)] = 11039,
  [SMALL_STATE(441)] = 11052,
  [SMALL_STATE(442)] = 11061,
  [SMALL_STATE(443)] = 11074,
  [SMALL_STATE(444)] = 11083,
  [SMALL_STATE(445)] = 11091,
  [SMALL_STATE(446)] = 11099,
  [SMALL_STATE(447)] = 11109,
  [SMALL_STATE(448)] = 11119,
  [SMALL_STATE(449)] = 11129,
  [SMALL_STATE(450)] = 11139,
  [SMALL_STATE(451)] = 11149,
  [SMALL_STATE(452)] = 11159,
  [SMALL_STATE(453)] = 11169,
  [SMALL_STATE(454)] = 11179,
  [SMALL_STATE(455)] = 11189,
  [SMALL_STATE(456)] = 11199,
  [SMALL_STATE(457)] = 11209,
  [SMALL_STATE(458)] = 11219,
  [SMALL_STATE(459)] = 11229,
  [SMALL_STATE(460)] = 11239,
  [SMALL_STATE(461)] = 11249,
  [SMALL_STATE(462)] = 11259,
  [SMALL_STATE(463)] = 11269,
  [SMALL_STATE(464)] = 11279,
  [SMALL_STATE(465)] = 11289,
  [SMALL_STATE(466)] = 11299,
  [SMALL_STATE(467)] = 11309,
  [SMALL_STATE(468)] = 11319,
  [SMALL_STATE(469)] = 11329,
  [SMALL_STATE(470)] = 11339,
  [SMALL_STATE(471)] = 11349,
  [SMALL_STATE(472)] = 11359,
  [SMALL_STATE(473)] = 11369,
  [SMALL_STATE(474)] = 11379,
  [SMALL_STATE(475)] = 11387,
  [SMALL_STATE(476)] = 11397,
  [SMALL_STATE(477)] = 11407,
  [SMALL_STATE(478)] = 11417,
  [SMALL_STATE(479)] = 11427,
  [SMALL_STATE(480)] = 11437,
  [SMALL_STATE(481)] = 11447,
  [SMALL_STATE(482)] = 11457,
  [SMALL_STATE(483)] = 11467,
  [SMALL_STATE(484)] = 11477,
  [SMALL_STATE(485)] = 11487,
  [SMALL_STATE(486)] = 11497,
  [SMALL_STATE(487)] = 11507,
  [SMALL_STATE(488)] = 11517,
  [SMALL_STATE(489)] = 11527,
  [SMALL_STATE(490)] = 11535,
  [SMALL_STATE(491)] = 11545,
  [SMALL_STATE(492)] = 11552,
  [SMALL_STATE(493)] = 11559,
  [SMALL_STATE(494)] = 11566,
  [SMALL_STATE(495)] = 11573,
  [SMALL_STATE(496)] = 11580,
  [SMALL_STATE(497)] = 11587,
  [SMALL_STATE(498)] = 11594,
  [SMALL_STATE(499)] = 11601,
  [SMALL_STATE(500)] = 11608,
  [SMALL_STATE(501)] = 11615,
  [SMALL_STATE(502)] = 11622,
  [SMALL_STATE(503)] = 11629,
  [SMALL_STATE(504)] = 11636,
  [SMALL_STATE(505)] = 11643,
  [SMALL_STATE(506)] = 11650,
  [SMALL_STATE(507)] = 11657,
  [SMALL_STATE(508)] = 11664,
  [SMALL_STATE(509)] = 11671,
  [SMALL_STATE(510)] = 11678,
  [SMALL_STATE(511)] = 11685,
  [SMALL_STATE(512)] = 11692,
  [SMALL_STATE(513)] = 11699,
  [SMALL_STATE(514)] = 11706,
  [SMALL_STATE(515)] = 11713,
  [SMALL_STATE(516)] = 11720,
  [SMALL_STATE(517)] = 11727,
  [SMALL_STATE(518)] = 11734,
  [SMALL_STATE(519)] = 11741,
  [SMALL_STATE(520)] = 11748,
  [SMALL_STATE(521)] = 11755,
  [SMALL_STATE(522)] = 11762,
  [SMALL_STATE(523)] = 11769,
  [SMALL_STATE(524)] = 11776,
  [SMALL_STATE(525)] = 11783,
  [SMALL_STATE(526)] = 11790,
  [SMALL_STATE(527)] = 11797,
  [SMALL_STATE(528)] = 11804,
  [SMALL_STATE(529)] = 11811,
  [SMALL_STATE(530)] = 11818,
  [SMALL_STATE(531)] = 11825,
  [SMALL_STATE(532)] = 11832,
  [SMALL_STATE(533)] = 11839,
  [SMALL_STATE(534)] = 11846,
  [SMALL_STATE(535)] = 11853,
  [SMALL_STATE(536)] = 11860,
  [SMALL_STATE(537)] = 11867,
  [SMALL_STATE(538)] = 11874,
  [SMALL_STATE(539)] = 11881,
  [SMALL_STATE(540)] = 11888,
  [SMALL_STATE(541)] = 11895,
  [SMALL_STATE(542)] = 11902,
  [SMALL_STATE(543)] = 11909,
  [SMALL_STATE(544)] = 11916,
  [SMALL_STATE(545)] = 11923,
  [SMALL_STATE(546)] = 11930,
  [SMALL_STATE(547)] = 11937,
  [SMALL_STATE(548)] = 11944,
  [SMALL_STATE(549)] = 11951,
  [SMALL_STATE(550)] = 11958,
  [SMALL_STATE(551)] = 11965,
  [SMALL_STATE(552)] = 11972,
  [SMALL_STATE(553)] = 11979,
  [SMALL_STATE(554)] = 11986,
  [SMALL_STATE(555)] = 11993,
  [SMALL_STATE(556)] = 12000,
  [SMALL_STATE(557)] = 12007,
  [SMALL_STATE(558)] = 12014,
  [SMALL_STATE(559)] = 12021,
  [SMALL_STATE(560)] = 12028,
  [SMALL_STATE(561)] = 12035,
  [SMALL_STATE(562)] = 12042,
  [SMALL_STATE(563)] = 12049,
  [SMALL_STATE(564)] = 12056,
  [SMALL_STATE(565)] = 12063,
  [SMALL_STATE(566)] = 12070,
  [SMALL_STATE(567)] = 12077,
  [SMALL_STATE(568)] = 12084,
  [SMALL_STATE(569)] = 12091,
  [SMALL_STATE(570)] = 12098,
  [SMALL_STATE(571)] = 12105,
  [SMALL_STATE(572)] = 12112,
  [SMALL_STATE(573)] = 12119,
  [SMALL_STATE(574)] = 12126,
  [SMALL_STATE(575)] = 12133,
  [SMALL_STATE(576)] = 12140,
  [SMALL_STATE(577)] = 12147,
  [SMALL_STATE(578)] = 12154,
  [SMALL_STATE(579)] = 12161,
  [SMALL_STATE(580)] = 12168,
  [SMALL_STATE(581)] = 12175,
  [SMALL_STATE(582)] = 12182,
  [SMALL_STATE(583)] = 12189,
  [SMALL_STATE(584)] = 12196,
  [SMALL_STATE(585)] = 12203,
  [SMALL_STATE(586)] = 12210,
  [SMALL_STATE(587)] = 12217,
  [SMALL_STATE(588)] = 12224,
  [SMALL_STATE(589)] = 12231,
  [SMALL_STATE(590)] = 12238,
  [SMALL_STATE(591)] = 12245,
  [SMALL_STATE(592)] = 12252,
  [SMALL_STATE(593)] = 12259,
  [SMALL_STATE(594)] = 12266,
  [SMALL_STATE(595)] = 12273,
  [SMALL_STATE(596)] = 12280,
  [SMALL_STATE(597)] = 12287,
  [SMALL_STATE(598)] = 12294,
  [SMALL_STATE(599)] = 12301,
  [SMALL_STATE(600)] = 12308,
  [SMALL_STATE(601)] = 12315,
  [SMALL_STATE(602)] = 12322,
  [SMALL_STATE(603)] = 12329,
  [SMALL_STATE(604)] = 12336,
  [SMALL_STATE(605)] = 12343,
  [SMALL_STATE(606)] = 12350,
  [SMALL_STATE(607)] = 12357,
  [SMALL_STATE(608)] = 12364,
  [SMALL_STATE(609)] = 12371,
  [SMALL_STATE(610)] = 12378,
  [SMALL_STATE(611)] = 12385,
  [SMALL_STATE(612)] = 12392,
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
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(226),
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
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
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
  [730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(548),
  [734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(583),
  [736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [738] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 2),
  [740] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_body, 2),
  [742] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 6),
  [744] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 6),
  [746] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_key_value, 2),
  [748] = {.entry = {.count = 1, .reusable = false}}, SHIFT(205),
  [750] = {.entry = {.count = 1, .reusable = false}}, SHIFT(280),
  [752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(417),
  [754] = {.entry = {.count = 1, .reusable = false}}, SHIFT(252),
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
  [781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
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
  [884] = {.entry = {.count = 1, .reusable = false}}, SHIFT(246),
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
  [931] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_string_repeat1, 2), SHIFT_REPEAT(205),
  [934] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_string_repeat1, 2), SHIFT_REPEAT(280),
  [937] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_value_string_repeat1, 2), SHIFT_REPEAT(417),
  [940] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multiline_string_repeat1, 2), SHIFT_REPEAT(214),
  [943] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multiline_string_repeat1, 2), SHIFT_REPEAT(211),
  [946] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_multiline_string_repeat1, 2),
  [948] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multiline_string_repeat1, 2), SHIFT_REPEAT(213),
  [951] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_multiline_string_repeat1, 2), SHIFT_REPEAT(365),
  [954] = {.entry = {.count = 1, .reusable = false}}, SHIFT(525),
  [956] = {.entry = {.count = 1, .reusable = false}}, SHIFT(392),
  [958] = {.entry = {.count = 1, .reusable = false}}, SHIFT(247),
  [960] = {.entry = {.count = 1, .reusable = false}}, SHIFT(375),
  [962] = {.entry = {.count = 1, .reusable = false}}, SHIFT(242),
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
  [991] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_oneline_string_repeat1, 2), SHIFT_REPEAT(242),
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
  [1026] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
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
  [1060] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_filename_repeat1, 2), SHIFT_REPEAT(246),
  [1063] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_filename_repeat1, 2), SHIFT_REPEAT(356),
  [1066] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_string_repeat1, 2), SHIFT_REPEAT(252),
  [1069] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_string_repeat1, 2), SHIFT_REPEAT(570),
  [1072] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_string_repeat1, 2), SHIFT_REPEAT(376),
  [1075] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_integer_repeat1, 2),
  [1077] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_integer_repeat1, 2), SHIFT_REPEAT(225),
  [1080] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_filename_repeat1, 2), SHIFT_REPEAT(392),
  [1083] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_filename_repeat1, 2), SHIFT_REPEAT(247),
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
  [1135] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_string_content_repeat1, 2), SHIFT_REPEAT(205),
  [1138] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_string_content_repeat1, 2), SHIFT_REPEAT(280),
  [1141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__multiline_string_text_repeat1, 2),
  [1143] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__multiline_string_text_repeat1, 2), SHIFT_REPEAT(201),
  [1146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__multiline_string_text_repeat1, 2),
  [1148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [1150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(480),
  [1152] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [1154] = {.entry = {.count = 1, .reusable = false}}, SHIFT(591),
  [1156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [1158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(454),
  [1160] = {.entry = {.count = 1, .reusable = false}}, SHIFT(338),
  [1162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_string_content, 1),
  [1164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_number, 1),
  [1166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [1168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [1170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [1172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(486),
  [1174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__multiline_string_text, 1),
  [1176] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [1178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multiline_string_text, 1),
  [1180] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [1182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline_string_content, 1),
  [1184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_string_content, 1),
  [1186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_digit, 1),
  [1188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(562),
  [1190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [1192] = {.entry = {.count = 1, .reusable = false}}, SHIFT(601),
  [1194] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [1196] = {.entry = {.count = 1, .reusable = false}}, SHIFT(441),
  [1198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
  [1200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer, 1),
  [1202] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [1204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_string_content, 1),
  [1206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_key_string_content, 1),
  [1208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_value_string_text_repeat1, 2),
  [1210] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_string_text_repeat1, 2), SHIFT_REPEAT(233),
  [1213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_value_string_text_repeat1, 2),
  [1215] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_integer_repeat1, 2), SHIFT_REPEAT(283),
  [1218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_integer_repeat1, 2),
  [1220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_key_string_content_repeat1, 2),
  [1222] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_key_string_content_repeat1, 2),
  [1224] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_string_content_repeat1, 2), SHIFT_REPEAT(235),
  [1227] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_string_content_repeat1, 2), SHIFT_REPEAT(530),
  [1230] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneline_string_content, 1),
  [1232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneline_string_content, 1),
  [1234] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_oneline_string_content_repeat1, 2), SHIFT_REPEAT(242),
  [1237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_oneline_string_content_repeat1, 2),
  [1239] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_oneline_string_content_repeat1, 2), SHIFT_REPEAT(592),
  [1242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_oneline_string_content_repeat1, 2),
  [1244] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_string_text, 1),
  [1246] = {.entry = {.count = 1, .reusable = false}}, SHIFT(233),
  [1248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_string_text, 1),
  [1250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [1252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(477),
  [1254] = {.entry = {.count = 1, .reusable = false}}, SHIFT(328),
  [1256] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_string_content_repeat1, 2), SHIFT_REPEAT(243),
  [1259] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_string_content_repeat1, 2), SHIFT_REPEAT(543),
  [1262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exponent, 3),
  [1264] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xml_tag, 2),
  [1266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xml_tag, 2),
  [1268] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_filename_content, 1),
  [1270] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_regex_content, 1),
  [1272] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xml_close_tag, 3),
  [1274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xml_close_tag, 3),
  [1276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_number, 2),
  [1278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exponent, 2),
  [1280] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_string_content_repeat1, 2), SHIFT_REPEAT(253),
  [1283] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_string_content_repeat1, 2), SHIFT_REPEAT(570),
  [1286] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unicode_char, 6),
  [1288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unicode_char, 6),
  [1290] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_template, 3),
  [1292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template, 3),
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
  [1366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hurl_file, 2),
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
  [1397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
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
  [1783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
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
  [1809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [1811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [1813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [1815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [1817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [1819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [1821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
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
