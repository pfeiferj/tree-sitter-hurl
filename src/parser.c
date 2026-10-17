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
#define STATE_COUNT 589
#define LARGE_STATE_COUNT 22
#define SYMBOL_COUNT 372
#define ALIAS_COUNT 1
#define TOKEN_COUNT 202
#define EXTERNAL_TOKEN_COUNT 1
#define FIELD_COUNT 6
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 9

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
  anon_sym_file_COMMA = 40,
  anon_sym_SEMI = 41,
  aux_sym_file_value_token1 = 42,
  anon_sym_cacert = 43,
  anon_sym_cert = 44,
  sym_filename_password_text = 45,
  anon_sym_BSLASH = 46,
  anon_sym_b = 47,
  anon_sym_f = 48,
  anon_sym_n = 49,
  anon_sym_r = 50,
  anon_sym_t = 51,
  anon_sym_u = 52,
  anon_sym_POUND = 53,
  anon_sym_LBRACE = 54,
  anon_sym_RBRACE = 55,
  anon_sym_compressed = 56,
  anon_sym_location = 57,
  anon_sym_location_DASHtrusted = 58,
  anon_sym_http1_DOT0 = 59,
  anon_sym_http2 = 60,
  anon_sym_http3 = 61,
  anon_sym_insecure = 62,
  anon_sym_ipv4 = 63,
  anon_sym_ipv6 = 64,
  anon_sym_netrc = 65,
  anon_sym_netrc_DASHoptional = 66,
  anon_sym_path_DASHas_DASHis = 67,
  anon_sym_skip = 68,
  anon_sym_verbose = 69,
  anon_sym_very_DASHverbose = 70,
  anon_sym_max_DASHredirs = 71,
  anon_sym_retry_DASHmax_DASHcount = 72,
  anon_sym_limit_DASHrate = 73,
  anon_sym_max_DASHtime = 74,
  anon_sym_repeat = 75,
  anon_sym_retry = 76,
  anon_sym_connect_DASHtimeout = 77,
  anon_sym_delay = 78,
  anon_sym_retry_DASHinterval = 79,
  anon_sym_ms = 80,
  anon_sym_s = 81,
  anon_sym_m = 82,
  anon_sym_aws_DASHsigv4 = 83,
  anon_sym_key = 84,
  anon_sym_connect_DASHto = 85,
  anon_sym_header = 86,
  anon_sym_netrc_DASHfile = 87,
  anon_sym_output = 88,
  anon_sym_pinnedpubkey = 89,
  anon_sym_proxy = 90,
  anon_sym_unix_DASHsocket = 91,
  anon_sym_user = 92,
  anon_sym_variable = 93,
  anon_sym_EQ = 94,
  anon_sym_status = 95,
  anon_sym_url = 96,
  anon_sym_body = 97,
  anon_sym_duration = 98,
  anon_sym_bytes = 99,
  anon_sym_sha256 = 100,
  anon_sym_md5 = 101,
  anon_sym_cookie = 102,
  anon_sym_xpath = 103,
  anon_sym_jsonpath = 104,
  anon_sym_regex = 105,
  anon_sym_not = 106,
  anon_sym_exists = 107,
  anon_sym_isInteger = 108,
  anon_sym_isFloat = 109,
  anon_sym_isBoolean = 110,
  anon_sym_isString = 111,
  anon_sym_isCollection = 112,
  anon_sym_isNumber = 113,
  anon_sym_isIsoDate = 114,
  anon_sym_isEmpty = 115,
  anon_sym_isIpv4 = 116,
  anon_sym_isIpv6 = 117,
  anon_sym_isUuid = 118,
  anon_sym_equals = 119,
  anon_sym_EQ_EQ = 120,
  anon_sym_notEquals = 121,
  anon_sym_BANG_EQ = 122,
  anon_sym_greaterThan = 123,
  anon_sym_GT = 124,
  anon_sym_greaterThanOrEquals = 125,
  anon_sym_GT_EQ = 126,
  anon_sym_lessThan = 127,
  anon_sym_LT = 128,
  anon_sym_lessThanOrEquals = 129,
  anon_sym_LT_EQ = 130,
  anon_sym_startsWith = 131,
  anon_sym_endsWith = 132,
  anon_sym_contains = 133,
  anon_sym_matches = 134,
  anon_sym_includes = 135,
  anon_sym_LT_QMARK = 136,
  aux_sym_xml_prolog_tag_token1 = 137,
  anon_sym_QMARK_GT = 138,
  aux_sym_xml_self_closing_tag_token1 = 139,
  aux_sym_xml_open_tag_token1 = 140,
  anon_sym_LT_SLASH = 141,
  aux_sym_xml_close_tag_token1 = 142,
  anon_sym_base64_COMMA = 143,
  aux_sym_oneline_base64_token1 = 144,
  anon_sym_hex_COMMA = 145,
  anon_sym_DQUOTE = 146,
  sym_quoted_string_text = 147,
  aux_sym_invalid_quoted_string_escaped_char_token1 = 148,
  aux_sym_key_string_text_token1 = 149,
  anon_sym_true = 150,
  anon_sym_false = 151,
  anon_sym_LBRACK = 152,
  anon_sym_RBRACK = 153,
  aux_sym_value_string_text_token1 = 154,
  anon_sym_BQUOTE = 155,
  sym_oneline_string_text = 156,
  sym_oneline_string_escaped_char = 157,
  anon_sym_BQUOTE_BQUOTE_BQUOTE = 158,
  anon_sym_base64 = 159,
  anon_sym_hex = 160,
  anon_sym_json = 161,
  anon_sym_xml = 162,
  anon_sym_graphql = 163,
  aux_sym_multiline_string_type_token1 = 164,
  sym__multiline_string_text = 165,
  sym_filename_text = 166,
  aux_sym_filename_escaped_char_token1 = 167,
  anon_sym_COMMA = 168,
  aux_sym_json_string_text_token1 = 169,
  sym__json_number = 170,
  anon_sym_LBRACE_LBRACE = 171,
  anon_sym_RBRACE_RBRACE = 172,
  aux_sym_variable_name_token1 = 173,
  aux_sym_variable_name_token2 = 174,
  anon_sym_count = 175,
  anon_sym_urlEncode = 176,
  anon_sym_urlDecode = 177,
  anon_sym_toInt = 178,
  anon_sym_htmlEscape = 179,
  anon_sym_htmlUnescape = 180,
  anon_sym_daysAfterNow = 181,
  anon_sym_daysBeforeNow = 182,
  anon_sym_decode = 183,
  anon_sym_format = 184,
  anon_sym_toDate = 185,
  anon_sym_nth = 186,
  anon_sym_replace = 187,
  anon_sym_split = 188,
  sym__alphanum = 189,
  anon_sym_DASH = 190,
  aux_sym_digit_token1 = 191,
  aux_sym_hexdigit_token1 = 192,
  anon_sym_DOT = 193,
  anon_sym_e = 194,
  anon_sym_E = 195,
  anon_sym_PLUS = 196,
  sym_comment = 197,
  anon_sym_SLASH = 198,
  sym_regex_text = 199,
  aux_sym_regex_escaped_char_token1 = 200,
  sym__eof = 201,
  sym_hurl_file = 202,
  sym_entry = 203,
  sym__comment_or_new_line = 204,
  sym__line_ending = 205,
  sym_request = 206,
  sym_response = 207,
  sym_method = 208,
  sym_version = 209,
  sym_status = 210,
  sym_header = 211,
  sym_body = 212,
  sym_request_section = 213,
  sym_response_section = 214,
  sym_basic_auth_section = 215,
  sym_query_string_params_section = 216,
  sym_form_params_section = 217,
  sym_multipart_form_data_section = 218,
  sym_cookies_section = 219,
  sym_captures_section = 220,
  sym_asserts_section = 221,
  sym_options_section = 222,
  sym_key_value = 223,
  sym_multipart_form_data_param = 224,
  sym_file_param = 225,
  sym_file_value = 226,
  sym_capture = 227,
  sym_assert = 228,
  sym_option = 229,
  sym_ca_certificate_option = 230,
  sym_cert_option = 231,
  sym_filename_password = 232,
  sym_filename_password_escaped_char = 233,
  sym_boolean_option = 234,
  sym_boolean_option_key = 235,
  sym_integer_option = 236,
  sym_integer_option_key = 237,
  sym_duration_option = 238,
  sym_duration_option_key = 239,
  sym_duration_unit = 240,
  sym_string_option = 241,
  sym_string_option_key = 242,
  sym_variable_option = 243,
  sym_variable_definition = 244,
  sym_variable_value = 245,
  sym_query = 246,
  sym_simple_query = 247,
  sym_header_query = 248,
  sym_cookie_query = 249,
  sym_xpath_query = 250,
  sym_jsonpath_query = 251,
  sym_regex_query = 252,
  sym_variable_query = 253,
  sym_predicate = 254,
  sym_predicate_func = 255,
  sym_simple_predicate = 256,
  sym_equal_predicate = 257,
  sym_not_equal_predicate = 258,
  sym_greater_predicate = 259,
  sym_greater_or_equal_predicate = 260,
  sym_less_predicate = 261,
  sym_less_or_equal_predicate = 262,
  sym_start_with_predicate = 263,
  sym_end_with_predicate = 264,
  sym_contain_predicate = 265,
  sym_match_predicate = 266,
  sym_include_predicate = 267,
  sym_predicate_value = 268,
  sym_bytes = 269,
  sym_xml = 270,
  sym_xml_prolog_tag = 271,
  sym_xml_tag = 272,
  sym_xml_self_closing_tag = 273,
  sym_xml_open_tag = 274,
  sym_xml_close_tag = 275,
  sym_oneline_base64 = 276,
  sym_oneline_file = 277,
  sym_oneline_hex = 278,
  sym_quoted_string = 279,
  sym_quoted_string_content = 280,
  sym_invalid_quoted_string_escaped_char = 281,
  sym_quoted_string_escaped_char = 282,
  sym_key_string = 283,
  sym_key_string_content = 284,
  sym_key_string_text = 285,
  sym_key_string_escaped_char = 286,
  sym_xml_value_string = 287,
  sym_value_string = 288,
  sym_value_string_content = 289,
  sym_value_string_text = 290,
  sym_value_string_escaped_char = 291,
  sym_oneline_string = 292,
  sym_oneline_string_content = 293,
  sym_multiline_string = 294,
  sym_multiline_string_type = 295,
  sym_multiline_string_content = 296,
  sym_multiline_string_escaped_char = 297,
  sym_filename = 298,
  sym_filename_content = 299,
  sym_filename_escaped_char = 300,
  sym_unicode_char = 301,
  sym_json_value = 302,
  sym_json_object = 303,
  sym_json_key_value = 304,
  sym_json_key_string = 305,
  sym_json_array = 306,
  sym_json_string = 307,
  sym_json_string_content = 308,
  sym_json_string_text = 309,
  sym_json_string_escaped_char = 310,
  sym_json_number = 311,
  sym_json_boolean = 312,
  sym_template = 313,
  sym_expr = 314,
  sym_variable_name = 315,
  sym_filter = 316,
  sym_simple_filter_key = 317,
  sym_argument_filter = 318,
  sym_regex_filter = 319,
  sym_nth_filter = 320,
  sym_replace_filter = 321,
  sym_split_filter = 322,
  sym_xpath_filter = 323,
  sym_boolean = 324,
  sym_integer = 325,
  sym__unsigned_integer = 326,
  sym_float = 327,
  sym_digit = 328,
  sym_hexdigit = 329,
  sym_json_hexdigit = 330,
  sym_fraction = 331,
  sym_regex = 332,
  sym_regex_content = 333,
  sym_regex_escaped_char = 334,
  aux_sym_hurl_file_repeat1 = 335,
  aux_sym_hurl_file_repeat2 = 336,
  aux_sym__comment_or_new_line_repeat1 = 337,
  aux_sym_request_repeat1 = 338,
  aux_sym_request_repeat2 = 339,
  aux_sym_response_repeat1 = 340,
  aux_sym_query_string_params_section_repeat1 = 341,
  aux_sym_multipart_form_data_section_repeat1 = 342,
  aux_sym_captures_section_repeat1 = 343,
  aux_sym_asserts_section_repeat1 = 344,
  aux_sym_options_section_repeat1 = 345,
  aux_sym_capture_repeat1 = 346,
  aux_sym_filename_password_repeat1 = 347,
  aux_sym_xml_repeat1 = 348,
  aux_sym_xml_tag_repeat1 = 349,
  aux_sym_oneline_hex_repeat1 = 350,
  aux_sym_quoted_string_repeat1 = 351,
  aux_sym_quoted_string_content_repeat1 = 352,
  aux_sym_key_string_repeat1 = 353,
  aux_sym_key_string_content_repeat1 = 354,
  aux_sym_key_string_text_repeat1 = 355,
  aux_sym_xml_value_string_repeat1 = 356,
  aux_sym_value_string_repeat1 = 357,
  aux_sym_value_string_content_repeat1 = 358,
  aux_sym_value_string_text_repeat1 = 359,
  aux_sym_oneline_string_repeat1 = 360,
  aux_sym_oneline_string_content_repeat1 = 361,
  aux_sym_multiline_string_repeat1 = 362,
  aux_sym_multiline_string_content_repeat1 = 363,
  aux_sym_filename_repeat1 = 364,
  aux_sym_filename_content_repeat1 = 365,
  aux_sym_json_object_repeat1 = 366,
  aux_sym_json_array_repeat1 = 367,
  aux_sym_json_string_repeat1 = 368,
  aux_sym_json_string_text_repeat1 = 369,
  aux_sym_integer_repeat1 = 370,
  aux_sym_regex_content_repeat1 = 371,
  anon_alias_sym_json_key_string = 372,
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
  [anon_sym_file_COMMA] = "file,",
  [anon_sym_SEMI] = ";",
  [aux_sym_file_value_token1] = "file_value_token1",
  [anon_sym_cacert] = "cacert",
  [anon_sym_cert] = "cert",
  [sym_filename_password_text] = "filename_password_text",
  [anon_sym_BSLASH] = "\\",
  [anon_sym_b] = "b",
  [anon_sym_f] = "f",
  [anon_sym_n] = "n",
  [anon_sym_r] = "r",
  [anon_sym_t] = "t",
  [anon_sym_u] = "u",
  [anon_sym_POUND] = "#",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_compressed] = "compressed",
  [anon_sym_location] = "location",
  [anon_sym_location_DASHtrusted] = "location-trusted",
  [anon_sym_http1_DOT0] = "http1.0",
  [anon_sym_http2] = "http2",
  [anon_sym_http3] = "http3",
  [anon_sym_insecure] = "insecure",
  [anon_sym_ipv4] = "ipv4",
  [anon_sym_ipv6] = "ipv6",
  [anon_sym_netrc] = "netrc",
  [anon_sym_netrc_DASHoptional] = "netrc-optional",
  [anon_sym_path_DASHas_DASHis] = "path-as-is",
  [anon_sym_skip] = "skip",
  [anon_sym_verbose] = "verbose",
  [anon_sym_very_DASHverbose] = "very-verbose",
  [anon_sym_max_DASHredirs] = "max-redirs",
  [anon_sym_retry_DASHmax_DASHcount] = "retry-max-count",
  [anon_sym_limit_DASHrate] = "limit-rate",
  [anon_sym_max_DASHtime] = "max-time",
  [anon_sym_repeat] = "repeat",
  [anon_sym_retry] = "retry",
  [anon_sym_connect_DASHtimeout] = "connect-timeout",
  [anon_sym_delay] = "delay",
  [anon_sym_retry_DASHinterval] = "retry-interval",
  [anon_sym_ms] = "ms",
  [anon_sym_s] = "s",
  [anon_sym_m] = "m",
  [anon_sym_aws_DASHsigv4] = "aws-sigv4",
  [anon_sym_key] = "key",
  [anon_sym_connect_DASHto] = "connect-to",
  [anon_sym_header] = "header",
  [anon_sym_netrc_DASHfile] = "netrc-file",
  [anon_sym_output] = "output",
  [anon_sym_pinnedpubkey] = "pinnedpubkey",
  [anon_sym_proxy] = "proxy",
  [anon_sym_unix_DASHsocket] = "unix-socket",
  [anon_sym_user] = "user",
  [anon_sym_variable] = "variable",
  [anon_sym_EQ] = "=",
  [anon_sym_status] = "status",
  [anon_sym_url] = "url",
  [anon_sym_body] = "body",
  [anon_sym_duration] = "duration",
  [anon_sym_bytes] = "bytes",
  [anon_sym_sha256] = "sha256",
  [anon_sym_md5] = "md5",
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
  [anon_sym_isIpv4] = "isIpv4",
  [anon_sym_isIpv6] = "isIpv6",
  [anon_sym_isUuid] = "isUuid",
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
  [aux_sym_xml_self_closing_tag_token1] = "xml_self_closing_tag_token1",
  [aux_sym_xml_open_tag_token1] = "xml_open_tag_token1",
  [anon_sym_LT_SLASH] = "</",
  [aux_sym_xml_close_tag_token1] = "xml_close_tag_token1",
  [anon_sym_base64_COMMA] = "base64,",
  [aux_sym_oneline_base64_token1] = "oneline_base64_token1",
  [anon_sym_hex_COMMA] = "hex,",
  [anon_sym_DQUOTE] = "\"",
  [sym_quoted_string_text] = "quoted_string_text",
  [aux_sym_invalid_quoted_string_escaped_char_token1] = "invalid_quoted_string_escaped_char_token1",
  [aux_sym_key_string_text_token1] = "key_string_text_token1",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [aux_sym_value_string_text_token1] = "value_string_text_token1",
  [anon_sym_BQUOTE] = "`",
  [sym_oneline_string_text] = "oneline_string_text",
  [sym_oneline_string_escaped_char] = "oneline_string_escaped_char",
  [anon_sym_BQUOTE_BQUOTE_BQUOTE] = "```",
  [anon_sym_base64] = "base64",
  [anon_sym_hex] = "hex",
  [anon_sym_json] = "json",
  [anon_sym_xml] = "xml",
  [anon_sym_graphql] = "graphql",
  [aux_sym_multiline_string_type_token1] = "multiline_string_type_token1",
  [sym__multiline_string_text] = "_multiline_string_text",
  [sym_filename_text] = "filename_text",
  [aux_sym_filename_escaped_char_token1] = "filename_escaped_char_token1",
  [anon_sym_COMMA] = ",",
  [aux_sym_json_string_text_token1] = "json_string_text_token1",
  [sym__json_number] = "_json_number",
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
  [sym__alphanum] = "_alphanum",
  [anon_sym_DASH] = "-",
  [aux_sym_digit_token1] = "digit_token1",
  [aux_sym_hexdigit_token1] = "hexdigit_token1",
  [anon_sym_DOT] = ".",
  [anon_sym_e] = "e",
  [anon_sym_E] = "E",
  [anon_sym_PLUS] = "+",
  [sym_comment] = "comment",
  [anon_sym_SLASH] = "/",
  [sym_regex_text] = "regex_text",
  [aux_sym_regex_escaped_char_token1] = "regex_escaped_char_token1",
  [sym__eof] = "_eof",
  [sym_hurl_file] = "hurl_file",
  [sym_entry] = "entry",
  [sym__comment_or_new_line] = "_comment_or_new_line",
  [sym__line_ending] = "_line_ending",
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
  [sym_cert_option] = "cert_option",
  [sym_filename_password] = "filename_password",
  [sym_filename_password_escaped_char] = "filename_password_escaped_char",
  [sym_boolean_option] = "boolean_option",
  [sym_boolean_option_key] = "boolean_option_key",
  [sym_integer_option] = "integer_option",
  [sym_integer_option_key] = "integer_option_key",
  [sym_duration_option] = "duration_option",
  [sym_duration_option_key] = "duration_option_key",
  [sym_duration_unit] = "duration_unit",
  [sym_string_option] = "string_option",
  [sym_string_option_key] = "string_option_key",
  [sym_variable_option] = "variable_option",
  [sym_variable_definition] = "variable_definition",
  [sym_variable_value] = "variable_value",
  [sym_query] = "query",
  [sym_simple_query] = "simple_query",
  [sym_header_query] = "header_query",
  [sym_cookie_query] = "cookie_query",
  [sym_xpath_query] = "xpath_query",
  [sym_jsonpath_query] = "jsonpath_query",
  [sym_regex_query] = "regex_query",
  [sym_variable_query] = "variable_query",
  [sym_predicate] = "predicate",
  [sym_predicate_func] = "predicate_func",
  [sym_simple_predicate] = "simple_predicate",
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
  [sym_xml_self_closing_tag] = "xml_self_closing_tag",
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
  [sym_key_string_text] = "key_string_text",
  [sym_key_string_escaped_char] = "key_string_escaped_char",
  [sym_xml_value_string] = "xml_value_string",
  [sym_value_string] = "value_string",
  [sym_value_string_content] = "value_string_content",
  [sym_value_string_text] = "value_string_text",
  [sym_value_string_escaped_char] = "value_string_escaped_char",
  [sym_oneline_string] = "oneline_string",
  [sym_oneline_string_content] = "oneline_string_content",
  [sym_multiline_string] = "multiline_string",
  [sym_multiline_string_type] = "multiline_string_type",
  [sym_multiline_string_content] = "multiline_string_content",
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
  [sym_json_boolean] = "json_boolean",
  [sym_template] = "template",
  [sym_expr] = "expr",
  [sym_variable_name] = "variable_name",
  [sym_filter] = "filter",
  [sym_simple_filter_key] = "simple_filter_key",
  [sym_argument_filter] = "argument_filter",
  [sym_regex_filter] = "regex_filter",
  [sym_nth_filter] = "nth_filter",
  [sym_replace_filter] = "replace_filter",
  [sym_split_filter] = "split_filter",
  [sym_xpath_filter] = "xpath_filter",
  [sym_boolean] = "boolean",
  [sym_integer] = "integer",
  [sym__unsigned_integer] = "_unsigned_integer",
  [sym_float] = "float",
  [sym_digit] = "digit",
  [sym_hexdigit] = "hexdigit",
  [sym_json_hexdigit] = "json_hexdigit",
  [sym_fraction] = "fraction",
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
  [aux_sym_filename_password_repeat1] = "filename_password_repeat1",
  [aux_sym_xml_repeat1] = "xml_repeat1",
  [aux_sym_xml_tag_repeat1] = "xml_tag_repeat1",
  [aux_sym_oneline_hex_repeat1] = "oneline_hex_repeat1",
  [aux_sym_quoted_string_repeat1] = "quoted_string_repeat1",
  [aux_sym_quoted_string_content_repeat1] = "quoted_string_content_repeat1",
  [aux_sym_key_string_repeat1] = "key_string_repeat1",
  [aux_sym_key_string_content_repeat1] = "key_string_content_repeat1",
  [aux_sym_key_string_text_repeat1] = "key_string_text_repeat1",
  [aux_sym_xml_value_string_repeat1] = "xml_value_string_repeat1",
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
  [aux_sym_json_string_text_repeat1] = "json_string_text_repeat1",
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
  [anon_sym_file_COMMA] = anon_sym_file_COMMA,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [aux_sym_file_value_token1] = aux_sym_file_value_token1,
  [anon_sym_cacert] = anon_sym_cacert,
  [anon_sym_cert] = anon_sym_cert,
  [sym_filename_password_text] = sym_filename_password_text,
  [anon_sym_BSLASH] = anon_sym_BSLASH,
  [anon_sym_b] = anon_sym_b,
  [anon_sym_f] = anon_sym_f,
  [anon_sym_n] = anon_sym_n,
  [anon_sym_r] = anon_sym_r,
  [anon_sym_t] = anon_sym_t,
  [anon_sym_u] = anon_sym_u,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_compressed] = anon_sym_compressed,
  [anon_sym_location] = anon_sym_location,
  [anon_sym_location_DASHtrusted] = anon_sym_location_DASHtrusted,
  [anon_sym_http1_DOT0] = anon_sym_http1_DOT0,
  [anon_sym_http2] = anon_sym_http2,
  [anon_sym_http3] = anon_sym_http3,
  [anon_sym_insecure] = anon_sym_insecure,
  [anon_sym_ipv4] = anon_sym_ipv4,
  [anon_sym_ipv6] = anon_sym_ipv6,
  [anon_sym_netrc] = anon_sym_netrc,
  [anon_sym_netrc_DASHoptional] = anon_sym_netrc_DASHoptional,
  [anon_sym_path_DASHas_DASHis] = anon_sym_path_DASHas_DASHis,
  [anon_sym_skip] = anon_sym_skip,
  [anon_sym_verbose] = anon_sym_verbose,
  [anon_sym_very_DASHverbose] = anon_sym_very_DASHverbose,
  [anon_sym_max_DASHredirs] = anon_sym_max_DASHredirs,
  [anon_sym_retry_DASHmax_DASHcount] = anon_sym_retry_DASHmax_DASHcount,
  [anon_sym_limit_DASHrate] = anon_sym_limit_DASHrate,
  [anon_sym_max_DASHtime] = anon_sym_max_DASHtime,
  [anon_sym_repeat] = anon_sym_repeat,
  [anon_sym_retry] = anon_sym_retry,
  [anon_sym_connect_DASHtimeout] = anon_sym_connect_DASHtimeout,
  [anon_sym_delay] = anon_sym_delay,
  [anon_sym_retry_DASHinterval] = anon_sym_retry_DASHinterval,
  [anon_sym_ms] = anon_sym_ms,
  [anon_sym_s] = anon_sym_s,
  [anon_sym_m] = anon_sym_m,
  [anon_sym_aws_DASHsigv4] = anon_sym_aws_DASHsigv4,
  [anon_sym_key] = anon_sym_key,
  [anon_sym_connect_DASHto] = anon_sym_connect_DASHto,
  [anon_sym_header] = anon_sym_header,
  [anon_sym_netrc_DASHfile] = anon_sym_netrc_DASHfile,
  [anon_sym_output] = anon_sym_output,
  [anon_sym_pinnedpubkey] = anon_sym_pinnedpubkey,
  [anon_sym_proxy] = anon_sym_proxy,
  [anon_sym_unix_DASHsocket] = anon_sym_unix_DASHsocket,
  [anon_sym_user] = anon_sym_user,
  [anon_sym_variable] = anon_sym_variable,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_status] = anon_sym_status,
  [anon_sym_url] = anon_sym_url,
  [anon_sym_body] = anon_sym_body,
  [anon_sym_duration] = anon_sym_duration,
  [anon_sym_bytes] = anon_sym_bytes,
  [anon_sym_sha256] = anon_sym_sha256,
  [anon_sym_md5] = anon_sym_md5,
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
  [anon_sym_isIpv4] = anon_sym_isIpv4,
  [anon_sym_isIpv6] = anon_sym_isIpv6,
  [anon_sym_isUuid] = anon_sym_isUuid,
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
  [aux_sym_xml_self_closing_tag_token1] = aux_sym_xml_self_closing_tag_token1,
  [aux_sym_xml_open_tag_token1] = aux_sym_xml_open_tag_token1,
  [anon_sym_LT_SLASH] = anon_sym_LT_SLASH,
  [aux_sym_xml_close_tag_token1] = aux_sym_xml_close_tag_token1,
  [anon_sym_base64_COMMA] = anon_sym_base64_COMMA,
  [aux_sym_oneline_base64_token1] = aux_sym_oneline_base64_token1,
  [anon_sym_hex_COMMA] = anon_sym_hex_COMMA,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [sym_quoted_string_text] = sym_quoted_string_text,
  [aux_sym_invalid_quoted_string_escaped_char_token1] = aux_sym_invalid_quoted_string_escaped_char_token1,
  [aux_sym_key_string_text_token1] = aux_sym_key_string_text_token1,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [aux_sym_value_string_text_token1] = aux_sym_value_string_text_token1,
  [anon_sym_BQUOTE] = anon_sym_BQUOTE,
  [sym_oneline_string_text] = sym_oneline_string_text,
  [sym_oneline_string_escaped_char] = sym_oneline_string_escaped_char,
  [anon_sym_BQUOTE_BQUOTE_BQUOTE] = anon_sym_BQUOTE_BQUOTE_BQUOTE,
  [anon_sym_base64] = anon_sym_base64,
  [anon_sym_hex] = anon_sym_hex,
  [anon_sym_json] = anon_sym_json,
  [anon_sym_xml] = anon_sym_xml,
  [anon_sym_graphql] = anon_sym_graphql,
  [aux_sym_multiline_string_type_token1] = aux_sym_multiline_string_type_token1,
  [sym__multiline_string_text] = sym__multiline_string_text,
  [sym_filename_text] = sym_filename_text,
  [aux_sym_filename_escaped_char_token1] = aux_sym_filename_escaped_char_token1,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [aux_sym_json_string_text_token1] = aux_sym_json_string_text_token1,
  [sym__json_number] = sym__json_number,
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
  [sym__alphanum] = sym__alphanum,
  [anon_sym_DASH] = anon_sym_DASH,
  [aux_sym_digit_token1] = aux_sym_digit_token1,
  [aux_sym_hexdigit_token1] = aux_sym_hexdigit_token1,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_e] = anon_sym_e,
  [anon_sym_E] = anon_sym_E,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [sym_comment] = sym_comment,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [sym_regex_text] = sym_regex_text,
  [aux_sym_regex_escaped_char_token1] = aux_sym_regex_escaped_char_token1,
  [sym__eof] = sym__eof,
  [sym_hurl_file] = sym_hurl_file,
  [sym_entry] = sym_entry,
  [sym__comment_or_new_line] = sym__comment_or_new_line,
  [sym__line_ending] = sym__line_ending,
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
  [sym_cert_option] = sym_cert_option,
  [sym_filename_password] = sym_filename_password,
  [sym_filename_password_escaped_char] = sym_filename_password_escaped_char,
  [sym_boolean_option] = sym_boolean_option,
  [sym_boolean_option_key] = sym_boolean_option_key,
  [sym_integer_option] = sym_integer_option,
  [sym_integer_option_key] = sym_integer_option_key,
  [sym_duration_option] = sym_duration_option,
  [sym_duration_option_key] = sym_duration_option_key,
  [sym_duration_unit] = sym_duration_unit,
  [sym_string_option] = sym_string_option,
  [sym_string_option_key] = sym_string_option_key,
  [sym_variable_option] = sym_variable_option,
  [sym_variable_definition] = sym_variable_definition,
  [sym_variable_value] = sym_variable_value,
  [sym_query] = sym_query,
  [sym_simple_query] = sym_simple_query,
  [sym_header_query] = sym_header_query,
  [sym_cookie_query] = sym_cookie_query,
  [sym_xpath_query] = sym_xpath_query,
  [sym_jsonpath_query] = sym_jsonpath_query,
  [sym_regex_query] = sym_regex_query,
  [sym_variable_query] = sym_variable_query,
  [sym_predicate] = sym_predicate,
  [sym_predicate_func] = sym_predicate_func,
  [sym_simple_predicate] = sym_simple_predicate,
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
  [sym_xml_self_closing_tag] = sym_xml_self_closing_tag,
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
  [sym_key_string_text] = sym_key_string_text,
  [sym_key_string_escaped_char] = sym_key_string_escaped_char,
  [sym_xml_value_string] = sym_xml_value_string,
  [sym_value_string] = sym_value_string,
  [sym_value_string_content] = sym_value_string_content,
  [sym_value_string_text] = sym_value_string_text,
  [sym_value_string_escaped_char] = sym_value_string_escaped_char,
  [sym_oneline_string] = sym_oneline_string,
  [sym_oneline_string_content] = sym_oneline_string_content,
  [sym_multiline_string] = sym_multiline_string,
  [sym_multiline_string_type] = sym_multiline_string_type,
  [sym_multiline_string_content] = sym_multiline_string_content,
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
  [sym_json_boolean] = sym_json_boolean,
  [sym_template] = sym_template,
  [sym_expr] = sym_expr,
  [sym_variable_name] = sym_variable_name,
  [sym_filter] = sym_filter,
  [sym_simple_filter_key] = sym_simple_filter_key,
  [sym_argument_filter] = sym_argument_filter,
  [sym_regex_filter] = sym_regex_filter,
  [sym_nth_filter] = sym_nth_filter,
  [sym_replace_filter] = sym_replace_filter,
  [sym_split_filter] = sym_split_filter,
  [sym_xpath_filter] = sym_xpath_filter,
  [sym_boolean] = sym_boolean,
  [sym_integer] = sym_integer,
  [sym__unsigned_integer] = sym__unsigned_integer,
  [sym_float] = sym_float,
  [sym_digit] = sym_digit,
  [sym_hexdigit] = sym_hexdigit,
  [sym_json_hexdigit] = sym_json_hexdigit,
  [sym_fraction] = sym_fraction,
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
  [aux_sym_filename_password_repeat1] = aux_sym_filename_password_repeat1,
  [aux_sym_xml_repeat1] = aux_sym_xml_repeat1,
  [aux_sym_xml_tag_repeat1] = aux_sym_xml_tag_repeat1,
  [aux_sym_oneline_hex_repeat1] = aux_sym_oneline_hex_repeat1,
  [aux_sym_quoted_string_repeat1] = aux_sym_quoted_string_repeat1,
  [aux_sym_quoted_string_content_repeat1] = aux_sym_quoted_string_content_repeat1,
  [aux_sym_key_string_repeat1] = aux_sym_key_string_repeat1,
  [aux_sym_key_string_content_repeat1] = aux_sym_key_string_content_repeat1,
  [aux_sym_key_string_text_repeat1] = aux_sym_key_string_text_repeat1,
  [aux_sym_xml_value_string_repeat1] = aux_sym_xml_value_string_repeat1,
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
  [aux_sym_json_string_text_repeat1] = aux_sym_json_string_text_repeat1,
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
  [anon_sym_cert] = {
    .visible = true,
    .named = false,
  },
  [sym_filename_password_text] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH] = {
    .visible = true,
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
  [anon_sym_POUND] = {
    .visible = true,
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
  [anon_sym_compressed] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_location] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_location_DASHtrusted] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_http1_DOT0] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_http2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_http3] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_insecure] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ipv4] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ipv6] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_netrc] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_netrc_DASHoptional] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_path_DASHas_DASHis] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_skip] = {
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
  [anon_sym_max_DASHredirs] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_retry_DASHmax_DASHcount] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_limit_DASHrate] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_max_DASHtime] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_repeat] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_retry] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_connect_DASHtimeout] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_delay] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_retry_DASHinterval] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ms] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_s] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_m] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_aws_DASHsigv4] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_key] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_connect_DASHto] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_header] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_netrc_DASHfile] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_output] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pinnedpubkey] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_proxy] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_unix_DASHsocket] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_user] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_variable] = {
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
  [anon_sym_isIpv4] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_isIpv6] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_isUuid] = {
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
  [aux_sym_xml_self_closing_tag_token1] = {
    .visible = false,
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
  [aux_sym_invalid_quoted_string_escaped_char_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_key_string_text_token1] = {
    .visible = false,
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
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
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
  [sym_oneline_string_text] = {
    .visible = true,
    .named = true,
  },
  [sym_oneline_string_escaped_char] = {
    .visible = true,
    .named = true,
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
  [sym__multiline_string_text] = {
    .visible = false,
    .named = true,
  },
  [sym_filename_text] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_filename_escaped_char_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_json_string_text_token1] = {
    .visible = false,
    .named = false,
  },
  [sym__json_number] = {
    .visible = false,
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
  [sym__alphanum] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_DASH] = {
    .visible = true,
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
  [sym__eof] = {
    .visible = false,
    .named = true,
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
  [sym__line_ending] = {
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
  [sym_cert_option] = {
    .visible = true,
    .named = true,
  },
  [sym_filename_password] = {
    .visible = true,
    .named = true,
  },
  [sym_filename_password_escaped_char] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean_option] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean_option_key] = {
    .visible = true,
    .named = true,
  },
  [sym_integer_option] = {
    .visible = true,
    .named = true,
  },
  [sym_integer_option_key] = {
    .visible = true,
    .named = true,
  },
  [sym_duration_option] = {
    .visible = true,
    .named = true,
  },
  [sym_duration_option_key] = {
    .visible = true,
    .named = true,
  },
  [sym_duration_unit] = {
    .visible = true,
    .named = true,
  },
  [sym_string_option] = {
    .visible = true,
    .named = true,
  },
  [sym_string_option_key] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_option] = {
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
  [sym_simple_query] = {
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
  [sym_simple_predicate] = {
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
  [sym_xml_self_closing_tag] = {
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
  [sym_key_string_text] = {
    .visible = true,
    .named = true,
  },
  [sym_key_string_escaped_char] = {
    .visible = true,
    .named = true,
  },
  [sym_xml_value_string] = {
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
  [sym_json_boolean] = {
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
  [sym_simple_filter_key] = {
    .visible = true,
    .named = true,
  },
  [sym_argument_filter] = {
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
  [sym__unsigned_integer] = {
    .visible = false,
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
  [sym_json_hexdigit] = {
    .visible = true,
    .named = true,
  },
  [sym_fraction] = {
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
  [aux_sym_filename_password_repeat1] = {
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
  [aux_sym_key_string_text_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_xml_value_string_repeat1] = {
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
  [aux_sym_json_string_text_repeat1] = {
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

enum ts_field_identifiers {
  field_filter_key = 1,
  field_option_key = 2,
  field_predicate_name = 3,
  field_query_name = 4,
  field_section_header = 5,
  field_template = 6,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_filter_key] = "filter_key",
  [field_option_key] = "option_key",
  [field_predicate_name] = "predicate_name",
  [field_query_name] = "query_name",
  [field_section_header] = "section_header",
  [field_template] = "template",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 3},
  [2] = {.index = 3, .length = 1},
  [3] = {.index = 4, .length = 1},
  [5] = {.index = 5, .length = 1},
  [6] = {.index = 6, .length = 1},
  [8] = {.index = 7, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_template, 0},
    {field_template, 1},
    {field_template, 2},
  [3] =
    {field_filter_key, 0},
  [4] =
    {field_section_header, 0},
  [5] =
    {field_query_name, 0},
  [6] =
    {field_option_key, 0},
  [7] =
    {field_predicate_name, 0},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [4] = {
    [0] = anon_alias_sym_json_key_string,
  },
  [7] = {
    [0] = sym_integer,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym_json_string, 2,
    sym_json_string,
    anon_alias_sym_json_key_string,
  aux_sym_integer_repeat1, 2,
    aux_sym_integer_repeat1,
    sym_integer,
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
  [39] = 9,
  [40] = 10,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 10,
  [45] = 45,
  [46] = 9,
  [47] = 22,
  [48] = 48,
  [49] = 49,
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
  [61] = 61,
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
  [79] = 9,
  [80] = 80,
  [81] = 10,
  [82] = 82,
  [83] = 42,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 38,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 48,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 60,
  [112] = 61,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 45,
  [119] = 43,
  [120] = 117,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 10,
  [129] = 9,
  [130] = 98,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 73,
  [135] = 135,
  [136] = 62,
  [137] = 66,
  [138] = 138,
  [139] = 68,
  [140] = 140,
  [141] = 65,
  [142] = 64,
  [143] = 143,
  [144] = 56,
  [145] = 57,
  [146] = 67,
  [147] = 147,
  [148] = 74,
  [149] = 70,
  [150] = 77,
  [151] = 59,
  [152] = 71,
  [153] = 76,
  [154] = 75,
  [155] = 69,
  [156] = 63,
  [157] = 72,
  [158] = 58,
  [159] = 140,
  [160] = 147,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 161,
  [165] = 163,
  [166] = 162,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 168,
  [174] = 172,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 9,
  [182] = 182,
  [183] = 183,
  [184] = 176,
  [185] = 185,
  [186] = 10,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 10,
  [191] = 9,
  [192] = 192,
  [193] = 179,
  [194] = 185,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 197,
  [204] = 204,
  [205] = 189,
  [206] = 206,
  [207] = 207,
  [208] = 201,
  [209] = 209,
  [210] = 210,
  [211] = 211,
  [212] = 212,
  [213] = 199,
  [214] = 200,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 218,
  [219] = 219,
  [220] = 202,
  [221] = 221,
  [222] = 204,
  [223] = 223,
  [224] = 224,
  [225] = 225,
  [226] = 226,
  [227] = 227,
  [228] = 228,
  [229] = 229,
  [230] = 230,
  [231] = 231,
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
  [243] = 243,
  [244] = 244,
  [245] = 242,
  [246] = 246,
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
  [258] = 258,
  [259] = 259,
  [260] = 251,
  [261] = 261,
  [262] = 262,
  [263] = 257,
  [264] = 264,
  [265] = 265,
  [266] = 266,
  [267] = 267,
  [268] = 241,
  [269] = 269,
  [270] = 250,
  [271] = 271,
  [272] = 272,
  [273] = 273,
  [274] = 246,
  [275] = 275,
  [276] = 276,
  [277] = 277,
  [278] = 278,
  [279] = 279,
  [280] = 280,
  [281] = 281,
  [282] = 282,
  [283] = 283,
  [284] = 284,
  [285] = 285,
  [286] = 286,
  [287] = 287,
  [288] = 288,
  [289] = 289,
  [290] = 290,
  [291] = 291,
  [292] = 292,
  [293] = 293,
  [294] = 294,
  [295] = 176,
  [296] = 296,
  [297] = 297,
  [298] = 298,
  [299] = 299,
  [300] = 300,
  [301] = 301,
  [302] = 302,
  [303] = 303,
  [304] = 304,
  [305] = 305,
  [306] = 306,
  [307] = 307,
  [308] = 292,
  [309] = 309,
  [310] = 310,
  [311] = 311,
  [312] = 176,
  [313] = 176,
  [314] = 314,
  [315] = 176,
  [316] = 316,
  [317] = 317,
  [318] = 306,
  [319] = 281,
  [320] = 320,
  [321] = 321,
  [322] = 282,
  [323] = 323,
  [324] = 324,
  [325] = 325,
  [326] = 326,
  [327] = 327,
  [328] = 328,
  [329] = 329,
  [330] = 330,
  [331] = 331,
  [332] = 291,
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
  [343] = 343,
  [344] = 344,
  [345] = 345,
  [346] = 346,
  [347] = 347,
  [348] = 348,
  [349] = 349,
  [350] = 350,
  [351] = 346,
  [352] = 176,
  [353] = 353,
  [354] = 354,
  [355] = 176,
  [356] = 338,
  [357] = 357,
  [358] = 358,
  [359] = 292,
  [360] = 360,
  [361] = 176,
  [362] = 362,
  [363] = 292,
  [364] = 176,
  [365] = 340,
  [366] = 366,
  [367] = 367,
  [368] = 368,
  [369] = 369,
  [370] = 370,
  [371] = 371,
  [372] = 372,
  [373] = 373,
  [374] = 368,
  [375] = 375,
  [376] = 376,
  [377] = 377,
  [378] = 378,
  [379] = 379,
  [380] = 380,
  [381] = 381,
  [382] = 379,
  [383] = 383,
  [384] = 384,
  [385] = 385,
  [386] = 386,
  [387] = 377,
  [388] = 383,
  [389] = 389,
  [390] = 371,
  [391] = 380,
  [392] = 392,
  [393] = 393,
  [394] = 394,
  [395] = 395,
  [396] = 394,
  [397] = 397,
  [398] = 386,
  [399] = 399,
  [400] = 386,
  [401] = 386,
  [402] = 386,
  [403] = 386,
  [404] = 386,
  [405] = 405,
  [406] = 386,
  [407] = 386,
  [408] = 408,
  [409] = 386,
  [410] = 410,
  [411] = 411,
  [412] = 412,
  [413] = 413,
  [414] = 414,
  [415] = 415,
  [416] = 416,
  [417] = 417,
  [418] = 347,
  [419] = 419,
  [420] = 420,
  [421] = 421,
  [422] = 422,
  [423] = 423,
  [424] = 424,
  [425] = 425,
  [426] = 425,
  [427] = 427,
  [428] = 381,
  [429] = 425,
  [430] = 430,
  [431] = 431,
  [432] = 432,
  [433] = 432,
  [434] = 434,
  [435] = 435,
  [436] = 307,
  [437] = 298,
  [438] = 438,
  [439] = 439,
  [440] = 440,
  [441] = 372,
  [442] = 432,
  [443] = 443,
  [444] = 443,
  [445] = 445,
  [446] = 443,
  [447] = 447,
  [448] = 448,
  [449] = 449,
  [450] = 450,
  [451] = 397,
  [452] = 370,
  [453] = 373,
  [454] = 454,
  [455] = 376,
  [456] = 303,
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
  [467] = 425,
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
  [478] = 478,
  [479] = 479,
  [480] = 480,
  [481] = 481,
  [482] = 482,
  [483] = 481,
  [484] = 484,
  [485] = 485,
  [486] = 481,
  [487] = 487,
  [488] = 488,
  [489] = 489,
  [490] = 490,
  [491] = 491,
  [492] = 492,
  [493] = 493,
  [494] = 432,
  [495] = 495,
  [496] = 443,
  [497] = 330,
  [498] = 498,
  [499] = 499,
  [500] = 389,
  [501] = 501,
  [502] = 502,
  [503] = 384,
  [504] = 504,
  [505] = 505,
  [506] = 481,
  [507] = 507,
  [508] = 508,
  [509] = 492,
  [510] = 510,
  [511] = 395,
  [512] = 280,
  [513] = 513,
  [514] = 489,
  [515] = 515,
  [516] = 516,
  [517] = 517,
  [518] = 518,
  [519] = 482,
  [520] = 517,
  [521] = 305,
  [522] = 275,
  [523] = 473,
  [524] = 474,
  [525] = 488,
  [526] = 478,
  [527] = 424,
  [528] = 498,
  [529] = 529,
  [530] = 530,
  [531] = 531,
  [532] = 471,
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
  [544] = 535,
  [545] = 545,
  [546] = 546,
  [547] = 547,
  [548] = 548,
  [549] = 535,
  [550] = 550,
  [551] = 551,
  [552] = 552,
  [553] = 553,
  [554] = 535,
  [555] = 553,
  [556] = 535,
  [557] = 553,
  [558] = 535,
  [559] = 535,
  [560] = 535,
  [561] = 561,
  [562] = 562,
  [563] = 547,
  [564] = 564,
  [565] = 539,
  [566] = 545,
  [567] = 567,
  [568] = 548,
  [569] = 553,
  [570] = 570,
  [571] = 571,
  [572] = 572,
  [573] = 546,
  [574] = 541,
  [575] = 575,
  [576] = 576,
  [577] = 577,
  [578] = 354,
  [579] = 579,
  [580] = 580,
  [581] = 581,
  [582] = 582,
  [583] = 535,
  [584] = 584,
  [585] = 535,
  [586] = 586,
  [587] = 587,
  [588] = 588,
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
      if (eof) ADVANCE(626);
      ADVANCE_MAP(
        '!', 63,
        '"', 936,
        '#', 827,
        '*', 797,
        '+', 1067,
        ',', 1031,
        '-', 1061,
        '.', 1064,
        '/', 1071,
        '0', 794,
        ':', 809,
        ';', 813,
        '<', 907,
        '=', 872,
        '>', 903,
        '?', 65,
        'E', 1066,
        '[', 975,
        '\\', 820,
        ']', 978,
        '`', 991,
        'b', 821,
        'e', 1065,
        'f', 822,
        'm', 858,
        'n', 823,
        'r', 824,
        's', 856,
        't', 825,
        'u', 826,
        '{', 829,
        '}', 830,
        'a', 1044,
        'c', 1044,
        'd', 1044,
      );
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(785);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(795);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      if (('G' <= lookahead && lookahead <= 'Z')) ADVANCE(785);
      if (set_contains(extras_character_set_2, 9, lookahead)) SKIP(0);
      END_STATE();
    case 1:
      ADVANCE_MAP(
        '\n', 627,
        '#', 1070,
        '-', 948,
        '.', 944,
        '0', 1036,
        ':', 809,
        '[', 974,
        '\\', 820,
        ']', 978,
        'f', 953,
        'n', 966,
        't', 963,
        '{', 610,
      );
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1037);
      if (set_contains(extras_character_set_2, 9, lookahead)) SKIP(1);
      if (lookahead == '$' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(969);
      END_STATE();
    case 2:
      ADVANCE_MAP(
        '\n', 627,
        '#', 1070,
        '.', 1064,
        'c', 399,
        'd', 106,
        'f', 400,
        'h', 539,
        'm', 859,
        'n', 531,
        'r', 210,
        's', 857,
        't', 375,
        'u', 449,
        'x', 420,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1062);
      if (set_contains(extras_character_set_2, 9, lookahead)) SKIP(2);
      END_STATE();
    case 3:
      ADVANCE_MAP(
        '\n', 627,
        '#', 1070,
        '.', 1064,
        'c', 399,
        'd', 106,
        'f', 400,
        'h', 539,
        'n', 531,
        'r', 210,
        's', 413,
        't', 375,
        'u', 449,
        'x', 420,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1062);
      if (set_contains(extras_character_set_2, 9, lookahead)) SKIP(3);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(627);
      if (lookahead == '#') ADVANCE(1070);
      if (lookahead == 'm') ADVANCE(859);
      if (lookahead == 's') ADVANCE(856);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1062);
      if (set_contains(extras_character_set_2, 9, lookahead)) SKIP(4);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(627);
      if (lookahead == '#') ADVANCE(1070);
      if (set_contains(extras_character_set_2, 9, lookahead)) SKIP(5);
      if (lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(814);
      END_STATE();
    case 6:
      ADVANCE_MAP(
        '\n', 628,
        '#', 1070,
        '-', 1060,
        '\\', 820,
        'f', 985,
        'n', 987,
        't', 986,
        '{', 988,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(979);
      if (set_contains(extras_character_set_2, 9, lookahead)) ADVANCE(980);
      if (lookahead != 0) ADVANCE(979);
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(7);
      if (lookahead == '#') ADVANCE(1070);
      if (lookahead == '<') ADVANCE(908);
      if (lookahead == '{') ADVANCE(988);
      if (set_contains(extras_character_set_2, 9, lookahead)) ADVANCE(983);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(979);
      END_STATE();
    case 8:
      if (lookahead == '\n') SKIP(8);
      if (lookahead == '#') ADVANCE(1070);
      if (lookahead == '\\') ADVANCE(820);
      if (lookahead == '{') ADVANCE(988);
      if (set_contains(extras_character_set_2, 9, lookahead)) ADVANCE(989);
      if (lookahead != 0) ADVANCE(979);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(629);
      if (lookahead == ' ') SKIP(9);
      if (lookahead == '#') ADVANCE(1070);
      if (lookahead == '\\') ADVANCE(820);
      if (lookahead == '{') ADVANCE(1028);
      if (set_contains(extras_character_set_2, 9, lookahead)) ADVANCE(1026);
      if (lookahead != 0 &&
          lookahead != ';') ADVANCE(1029);
      END_STATE();
    case 10:
      if (lookahead == '\n') SKIP(10);
      if (lookahead == '#') ADVANCE(1070);
      if (lookahead == '\\') ADVANCE(566);
      if (lookahead == '`') ADVANCE(990);
      if (lookahead == '{') ADVANCE(993);
      if (set_contains(extras_character_set_2, 9, lookahead)) ADVANCE(992);
      if (lookahead != 0) ADVANCE(994);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(630);
      if (lookahead == '\r') SKIP(11);
      if (lookahead == '#') ADVANCE(1070);
      if (lookahead == '\\') ADVANCE(820);
      if (set_contains(extras_character_set_2, 9, lookahead)) ADVANCE(817);
      if (lookahead != 0 &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(819);
      END_STATE();
    case 12:
      if (lookahead == '\n') SKIP(12);
      if (lookahead == '#') ADVANCE(1068);
      if (lookahead == '/') ADVANCE(1071);
      if (lookahead == '\\') ADVANCE(820);
      if (set_contains(extras_character_set_2, 9, lookahead)) ADVANCE(1072);
      if (lookahead != 0) ADVANCE(1073);
      END_STATE();
    case 13:
      if (lookahead == '\n') SKIP(13);
      if (lookahead == '#') ADVANCE(1070);
      if (set_contains(extras_character_set_2, 9, lookahead)) ADVANCE(1075);
      if (lookahead != 0) ADVANCE(1074);
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(631);
      if (lookahead == '#') ADVANCE(1070);
      if (lookahead == '\\') ADVANCE(820);
      if (lookahead == '{') ADVANCE(988);
      if (set_contains(extras_character_set_2, 9, lookahead)) ADVANCE(981);
      if (lookahead != 0) ADVANCE(979);
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(632);
      if (lookahead == '#') ADVANCE(1069);
      if (lookahead == '\\') ADVANCE(820);
      if (lookahead == '`') ADVANCE(1023);
      if (lookahead == '{') ADVANCE(1024);
      if (set_contains(extras_character_set_2, 9, lookahead)) ADVANCE(1022);
      if (lookahead != 0) ADVANCE(1025);
      END_STATE();
    case 16:
      if (lookahead == '\n') ADVANCE(633);
      if (lookahead == '#') ADVANCE(1021);
      if (lookahead == 'b') ADVANCE(1006);
      if (lookahead == 'g') ADVANCE(1017);
      if (lookahead == 'h') ADVANCE(1007);
      if (lookahead == 'j') ADVANCE(1018);
      if (lookahead == 'x') ADVANCE(1012);
      if (set_contains(extras_character_set_2, 9, lookahead)) ADVANCE(1002);
      if (lookahead != 0) ADVANCE(1021);
      END_STATE();
    case 17:
      ADVANCE_MAP(
        '\n', 634,
        '#', 1070,
        '-', 1060,
        '\\', 820,
        'f', 984,
        'n', 987,
        't', 986,
        '{', 988,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(979);
      if (set_contains(extras_character_set_2, 9, lookahead)) ADVANCE(982);
      if (lookahead != 0) ADVANCE(979);
      END_STATE();
    case 18:
      ADVANCE_MAP(
        '"', 936,
        '#', 1070,
        ',', 1031,
        '-', 1061,
        '.', 944,
        '0', 1036,
        ':', 809,
        '<', 910,
        '=', 871,
        '>', 902,
        '[', 974,
        '\\', 820,
        ']', 978,
        'f', 953,
        'n', 966,
        't', 963,
        '{', 610,
        '}', 830,
      );
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1037);
      if (set_contains(extras_character_set_2, 9, lookahead)) SKIP(18);
      if (lookahead == '$' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(969);
      END_STATE();
    case 19:
      ADVANCE_MAP(
        '"', 936,
        '#', 1070,
        ',', 1031,
        '-', 948,
        '.', 944,
        '0', 1036,
        ':', 809,
        '[', 974,
        '\\', 820,
        ']', 978,
        'f', 953,
        'n', 966,
        't', 963,
        '{', 829,
        '}', 830,
      );
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1037);
      if (set_contains(extras_character_set_2, 9, lookahead)) SKIP(19);
      if (lookahead == '$' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(969);
      END_STATE();
    case 20:
      ADVANCE_MAP(
        '"', 936,
        '#', 1070,
        '-', 50,
        '0', 1036,
        '[', 974,
        ']', 978,
        'b', 379,
        'c', 397,
        'd', 572,
        'f', 98,
        'h', 238,
        'j', 489,
        'm', 175,
        'n', 568,
        'r', 213,
        's', 271,
        't', 441,
        'u', 442,
        'v', 116,
        'x', 420,
        '{', 829,
      );
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1037);
      if (set_contains(extras_character_set_2, 9, lookahead)) SKIP(20);
      END_STATE();
    case 21:
      ADVANCE_MAP(
        '"', 936,
        '#', 1070,
        '\\', 820,
        '`', 990,
        'b', 821,
        'f', 822,
        'n', 823,
        'r', 824,
        't', 825,
        'u', 826,
      );
      if (set_contains(extras_character_set_2, 9, lookahead)) SKIP(21);
      END_STATE();
    case 22:
      if (lookahead == '"') ADVANCE(936);
      if (lookahead == '#') ADVANCE(1035);
      if (lookahead == '\\') ADVANCE(820);
      if (lookahead == '{') ADVANCE(1034);
      if (set_contains(extras_character_set_2, 9, lookahead)) ADVANCE(1033);
      if (lookahead != 0) ADVANCE(1032);
      END_STATE();
    case 23:
      if (lookahead == '"') ADVANCE(936);
      if (lookahead == '#') ADVANCE(937);
      if (lookahead == '\\') ADVANCE(820);
      if (lookahead == '{') ADVANCE(939);
      if (set_contains(extras_character_set_2, 9, lookahead)) ADVANCE(938);
      if (lookahead != 0) ADVANCE(940);
      END_STATE();
    case 24:
      ADVANCE_MAP(
        '"', 936,
        '#', 943,
        '\\', 820,
        'b', 821,
        'f', 822,
        'n', 823,
        'r', 824,
        't', 825,
        'u', 826,
      );
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == '\r') SKIP(24);
      if (set_contains(extras_character_set_2, 9, lookahead)) ADVANCE(942);
      if (lookahead != 0) ADVANCE(941);
      END_STATE();
    case 25:
      ADVANCE_MAP(
        '#', 827,
        ',', 1030,
        ':', 809,
        ';', 813,
        '\\', 820,
        'b', 821,
        'f', 822,
        'n', 823,
        'r', 824,
        't', 825,
        'u', 826,
        '{', 828,
        '}', 830,
      );
      if (set_contains(extras_character_set_2, 9, lookahead)) SKIP(25);
      END_STATE();
    case 26:
      ADVANCE_MAP(
        '#', 1070,
        '*', 797,
        '=', 871,
        'c', 399,
        'd', 106,
        'f', 400,
        'h', 539,
        'n', 531,
        'r', 210,
        's', 413,
        't', 375,
        'u', 449,
        'x', 420,
        '}', 612,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(796);
      if (set_contains(extras_character_set_2, 9, lookahead)) SKIP(26);
      END_STATE();
    case 27:
      if (lookahead == '#') ADVANCE(1070);
      if (lookahead == ';') ADVANCE(813);
      if (lookahead == '\\') ADVANCE(820);
      if (lookahead == '{') ADVANCE(1028);
      if (lookahead == '\n' ||
          lookahead == ' ') SKIP(27);
      if (set_contains(extras_character_set_2, 9, lookahead)) ADVANCE(1027);
      if (lookahead != 0) ADVANCE(1029);
      END_STATE();
    case 28:
      if (lookahead == '#') ADVANCE(1070);
      if (lookahead == ';') ADVANCE(813);
      if (lookahead == '}') ADVANCE(830);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1063);
      if (set_contains(extras_character_set_2, 9, lookahead)) SKIP(28);
      END_STATE();
    case 29:
      if (lookahead == '#') ADVANCE(1070);
      if (lookahead == '\\') ADVANCE(820);
      if (lookahead == '{') ADVANCE(610);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(29);
      if (set_contains(extras_character_set_2, 9, lookahead)) ADVANCE(818);
      if (lookahead != 0 &&
          lookahead != ';' &&
          lookahead != '}') ADVANCE(819);
      END_STATE();
    case 30:
      if (lookahead == '#') ADVANCE(1070);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(933);
      if (set_contains(extras_character_set_2, 9, lookahead)) SKIP(30);
      if (lookahead == '+' ||
          ('/' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 31:
      if (lookahead == '#') ADVANCE(1070);
      if (set_contains(extras_character_set_2, 9, lookahead)) SKIP(31);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 32:
      if (lookahead == '#') ADVANCE(925);
      if (set_contains(extras_character_set_2, 9, lookahead)) ADVANCE(926);
      if (lookahead != 0 &&
          lookahead != '/' &&
          lookahead != '?') ADVANCE(927);
      END_STATE();
    case 33:
      if (lookahead == '#') ADVANCE(919);
      if (set_contains(extras_character_set_2, 9, lookahead)) ADVANCE(920);
      if (lookahead != 0 &&
          lookahead != '?') ADVANCE(921);
      END_STATE();
    case 34:
      if (lookahead == '#') ADVANCE(929);
      if (set_contains(extras_character_set_2, 9, lookahead)) ADVANCE(930);
      if (lookahead != 0 &&
          lookahead != '/' &&
          lookahead != '>') ADVANCE(931);
      END_STATE();
    case 35:
      if (lookahead == '*') ADVANCE(791);
      if (lookahead == '1') ADVANCE(49);
      if (lookahead == '2') ADVANCE(789);
      if (lookahead == '3') ADVANCE(790);
      END_STATE();
    case 36:
      if (lookahead == ',') ADVANCE(935);
      END_STATE();
    case 37:
      if (lookahead == ',') ADVANCE(812);
      END_STATE();
    case 38:
      if (lookahead == ',') ADVANCE(932);
      END_STATE();
    case 39:
      if (lookahead == '-') ADVANCE(455);
      END_STATE();
    case 40:
      if (lookahead == '-') ADVANCE(591);
      END_STATE();
    case 41:
      if (lookahead == '-') ADVANCE(165);
      END_STATE();
    case 42:
      if (lookahead == '-') ADVANCE(294);
      END_STATE();
    case 43:
      if (lookahead == '-') ADVANCE(464);
      END_STATE();
    case 44:
      if (lookahead == '-') ADVANCE(496);
      END_STATE();
    case 45:
      if (lookahead == '-') ADVANCE(495);
      END_STATE();
    case 46:
      if (lookahead == '-') ADVANCE(526);
      END_STATE();
    case 47:
      if (lookahead == '-') ADVANCE(130);
      END_STATE();
    case 48:
      if (lookahead == '.') ADVANCE(51);
      END_STATE();
    case 49:
      if (lookahead == '.') ADVANCE(52);
      END_STATE();
    case 50:
      if (lookahead == '0') ADVANCE(1036);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1037);
      END_STATE();
    case 51:
      if (lookahead == '0') ADVANCE(834);
      END_STATE();
    case 52:
      if (lookahead == '0') ADVANCE(787);
      if (lookahead == '1') ADVANCE(788);
      END_STATE();
    case 53:
      if (lookahead == '1') ADVANCE(48);
      if (lookahead == '2') ADVANCE(835);
      if (lookahead == '3') ADVANCE(836);
      END_STATE();
    case 54:
      if (lookahead == '2') ADVANCE(60);
      END_STATE();
    case 55:
      if (lookahead == '4') ADVANCE(838);
      if (lookahead == '6') ADVANCE(839);
      END_STATE();
    case 56:
      if (lookahead == '4') ADVANCE(860);
      END_STATE();
    case 57:
      if (lookahead == '4') ADVANCE(894);
      if (lookahead == '6') ADVANCE(895);
      END_STATE();
    case 58:
      if (lookahead == '4') ADVANCE(38);
      END_STATE();
    case 59:
      if (lookahead == '5') ADVANCE(879);
      END_STATE();
    case 60:
      if (lookahead == '5') ADVANCE(62);
      END_STATE();
    case 61:
      if (lookahead == '6') ADVANCE(58);
      END_STATE();
    case 62:
      if (lookahead == '6') ADVANCE(878);
      END_STATE();
    case 63:
      if (lookahead == '=') ADVANCE(900);
      END_STATE();
    case 64:
      if (lookahead == '=') ADVANCE(898);
      END_STATE();
    case 65:
      if (lookahead == '>') ADVANCE(922);
      END_STATE();
    case 66:
      if (lookahead == 'A') ADVANCE(255);
      if (lookahead == 'B') ADVANCE(215);
      END_STATE();
    case 67:
      if (lookahead == 'A') ADVANCE(569);
      END_STATE();
    case 68:
      ADVANCE_MAP(
        'B', 392,
        'C', 390,
        'E', 343,
        'F', 321,
        'I', 368,
        'N', 573,
        'S', 548,
        'U', 577,
      );
      END_STATE();
    case 69:
      if (lookahead == 'D') ADVANCE(111);
      END_STATE();
    case 70:
      if (lookahead == 'D') ADVANCE(227);
      if (lookahead == 'E') ADVANCE(370);
      END_STATE();
    case 71:
      if (lookahead == 'D') ADVANCE(127);
      if (lookahead == 'I') ADVANCE(362);
      END_STATE();
    case 72:
      if (lookahead == 'D') ADVANCE(147);
      END_STATE();
    case 73:
      if (lookahead == 'E') ADVANCE(504);
      if (lookahead == 'U') ADVANCE(367);
      END_STATE();
    case 74:
      if (lookahead == 'E') ADVANCE(425);
      END_STATE();
    case 75:
      if (lookahead == 'E') ADVANCE(426);
      END_STATE();
    case 76:
      if (lookahead == 'F') ADVANCE(395);
      if (lookahead == ']') ADVANCE(803);
      END_STATE();
    case 77:
      if (lookahead == 'N') ADVANCE(380);
      END_STATE();
    case 78:
      if (lookahead == 'N') ADVANCE(383);
      END_STATE();
    case 79:
      if (lookahead == 'P') ADVANCE(109);
      if (lookahead == ']') ADVANCE(801);
      END_STATE();
    case 80:
      if (lookahead == 'P') ADVANCE(141);
      END_STATE();
    case 81:
      if (lookahead == 'S') ADVANCE(537);
      if (lookahead == ']') ADVANCE(799);
      END_STATE();
    case 82:
      if (lookahead == 'T') ADVANCE(272);
      END_STATE();
    case 83:
      if (lookahead == 'T') ADVANCE(273);
      END_STATE();
    case 84:
      if (lookahead == 'W') ADVANCE(296);
      END_STATE();
    case 85:
      if (lookahead == 'W') ADVANCE(297);
      END_STATE();
    case 86:
      if (lookahead == ']') ADVANCE(807);
      END_STATE();
    case 87:
      if (lookahead == ']') ADVANCE(805);
      END_STATE();
    case 88:
      if (lookahead == ']') ADVANCE(808);
      END_STATE();
    case 89:
      if (lookahead == ']') ADVANCE(806);
      END_STATE();
    case 90:
      if (lookahead == ']') ADVANCE(798);
      END_STATE();
    case 91:
      if (lookahead == ']') ADVANCE(802);
      END_STATE();
    case 92:
      if (lookahead == ']') ADVANCE(804);
      END_STATE();
    case 93:
      if (lookahead == ']') ADVANCE(800);
      END_STATE();
    case 94:
      if (lookahead == '`') ADVANCE(95);
      END_STATE();
    case 95:
      if (lookahead == '`') ADVANCE(996);
      END_STATE();
    case 96:
      if (lookahead == 'a') ADVANCE(54);
      END_STATE();
    case 97:
      if (lookahead == 'a') ADVANCE(154);
      END_STATE();
    case 98:
      if (lookahead == 'a') ADVANCE(318);
      END_STATE();
    case 99:
      if (lookahead == 'a') ADVANCE(318);
      if (lookahead == 'i') ADVANCE(316);
      END_STATE();
    case 100:
      if (lookahead == 'a') ADVANCE(318);
      if (lookahead == 'i') ADVANCE(316);
      if (lookahead == 'o') ADVANCE(444);
      END_STATE();
    case 101:
      if (lookahead == 'a') ADVANCE(336);
      END_STATE();
    case 102:
      if (lookahead == 'a') ADVANCE(172);
      if (lookahead == 'e') ADVANCE(451);
      if (lookahead == 'o') ADVANCE(334);
      END_STATE();
    case 103:
      if (lookahead == 'a') ADVANCE(597);
      END_STATE();
    case 104:
      if (lookahead == 'a') ADVANCE(467);
      END_STATE();
    case 105:
      if (lookahead == 'a') ADVANCE(609);
      if (lookahead == 'e') ADVANCE(162);
      END_STATE();
    case 106:
      if (lookahead == 'a') ADVANCE(609);
      if (lookahead == 'e') ADVANCE(161);
      END_STATE();
    case 107:
      if (lookahead == 'a') ADVANCE(186);
      END_STATE();
    case 108:
      if (lookahead == 'a') ADVANCE(186);
      if (lookahead == 'x') ADVANCE(36);
      END_STATE();
    case 109:
      if (lookahead == 'a') ADVANCE(436);
      END_STATE();
    case 110:
      if (lookahead == 'a') ADVANCE(604);
      END_STATE();
    case 111:
      if (lookahead == 'a') ADVANCE(532);
      END_STATE();
    case 112:
      if (lookahead == 'a') ADVANCE(167);
      END_STATE();
    case 113:
      if (lookahead == 'a') ADVANCE(92);
      END_STATE();
    case 114:
      if (lookahead == 'a') ADVANCE(416);
      END_STATE();
    case 115:
      if (lookahead == 'a') ADVANCE(525);
      END_STATE();
    case 116:
      if (lookahead == 'a') ADVANCE(447);
      END_STATE();
    case 117:
      if (lookahead == 'a') ADVANCE(447);
      if (lookahead == 'e') ADVANCE(430);
      END_STATE();
    case 118:
      if (lookahead == 'a') ADVANCE(313);
      END_STATE();
    case 119:
      if (lookahead == 'a') ADVANCE(528);
      END_STATE();
    case 120:
      if (lookahead == 'a') ADVANCE(490);
      END_STATE();
    case 121:
      if (lookahead == 'a') ADVANCE(490);
      if (lookahead == 'o') ADVANCE(179);
      if (lookahead == 'y') ADVANCE(555);
      END_STATE();
    case 122:
      if (lookahead == 'a') ADVANCE(314);
      END_STATE();
    case 123:
      if (lookahead == 'a') ADVANCE(533);
      if (lookahead == 'i') ADVANCE(366);
      if (lookahead == 'r') ADVANCE(382);
      END_STATE();
    case 124:
      if (lookahead == 'a') ADVANCE(348);
      END_STATE();
    case 125:
      if (lookahead == 'a') ADVANCE(349);
      END_STATE();
    case 126:
      if (lookahead == 'a') ADVANCE(350);
      END_STATE();
    case 127:
      if (lookahead == 'a') ADVANCE(547);
      END_STATE();
    case 128:
      if (lookahead == 'a') ADVANCE(298);
      END_STATE();
    case 129:
      if (lookahead == 'a') ADVANCE(516);
      END_STATE();
    case 130:
      if (lookahead == 'a') ADVANCE(492);
      END_STATE();
    case 131:
      if (lookahead == 'a') ADVANCE(518);
      END_STATE();
    case 132:
      if (lookahead == 'a') ADVANCE(543);
      END_STATE();
    case 133:
      if (lookahead == 'a') ADVANCE(523);
      END_STATE();
    case 134:
      if (lookahead == 'a') ADVANCE(411);
      END_STATE();
    case 135:
      if (lookahead == 'a') ADVANCE(411);
      if (lookahead == 'o') ADVANCE(373);
      END_STATE();
    case 136:
      if (lookahead == 'a') ADVANCE(322);
      END_STATE();
    case 137:
      if (lookahead == 'a') ADVANCE(535);
      END_STATE();
    case 138:
      if (lookahead == 'a') ADVANCE(337);
      END_STATE();
    case 139:
      if (lookahead == 'a') ADVANCE(599);
      END_STATE();
    case 140:
      if (lookahead == 'a') ADVANCE(446);
      END_STATE();
    case 141:
      if (lookahead == 'a') ADVANCE(461);
      END_STATE();
    case 142:
      if (lookahead == 'a') ADVANCE(418);
      END_STATE();
    case 143:
      if (lookahead == 'a') ADVANCE(550);
      END_STATE();
    case 144:
      if (lookahead == 'a') ADVANCE(324);
      END_STATE();
    case 145:
      if (lookahead == 'a') ADVANCE(325);
      END_STATE();
    case 146:
      if (lookahead == 'a') ADVANCE(326);
      END_STATE();
    case 147:
      if (lookahead == 'a') ADVANCE(553);
      END_STATE();
    case 148:
      if (lookahead == 'a') ADVANCE(554);
      END_STATE();
    case 149:
      if (lookahead == 'a') ADVANCE(463);
      END_STATE();
    case 150:
      if (lookahead == 'a') ADVANCE(556);
      END_STATE();
    case 151:
      if (lookahead == 'a') ADVANCE(561);
      END_STATE();
    case 152:
      if (lookahead == 'b') ADVANCE(393);
      if (lookahead == 'y') ADVANCE(40);
      END_STATE();
    case 153:
      if (lookahead == 'b') ADVANCE(308);
      END_STATE();
    case 154:
      if (lookahead == 'b') ADVANCE(317);
      END_STATE();
    case 155:
      if (lookahead == 'b') ADVANCE(241);
      END_STATE();
    case 156:
      if (lookahead == 'b') ADVANCE(403);
      END_STATE();
    case 157:
      if (lookahead == 'c') ADVANCE(67);
      END_STATE();
    case 158:
      if (lookahead == 'c') ADVANCE(840);
      END_STATE();
    case 159:
      if (lookahead == 'c') ADVANCE(307);
      END_STATE();
    case 160:
      if (lookahead == 'c') ADVANCE(274);
      END_STATE();
    case 161:
      if (lookahead == 'c') ADVANCE(385);
      END_STATE();
    case 162:
      if (lookahead == 'c') ADVANCE(385);
      if (lookahead == 'l') ADVANCE(110);
      END_STATE();
    case 163:
      if (lookahead == 'c') ADVANCE(319);
      END_STATE();
    case 164:
      if (lookahead == 'c') ADVANCE(114);
      END_STATE();
    case 165:
      if (lookahead == 'c') ADVANCE(386);
      END_STATE();
    case 166:
      if (lookahead == 'c') ADVANCE(538);
      END_STATE();
    case 167:
      if (lookahead == 'c') ADVANCE(199);
      END_STATE();
    case 168:
      if (lookahead == 'c') ADVANCE(398);
      END_STATE();
    case 169:
      if (lookahead == 'c') ADVANCE(142);
      END_STATE();
    case 170:
      if (lookahead == 'c') ADVANCE(582);
      END_STATE();
    case 171:
      if (lookahead == 'c') ADVANCE(401);
      END_STATE();
    case 172:
      if (lookahead == 'c') ADVANCE(250);
      END_STATE();
    case 173:
      if (lookahead == 'c') ADVANCE(558);
      END_STATE();
    case 174:
      if (lookahead == 'c') ADVANCE(150);
      END_STATE();
    case 175:
      if (lookahead == 'd') ADVANCE(59);
      END_STATE();
    case 176:
      if (lookahead == 'd') ADVANCE(831);
      END_STATE();
    case 177:
      if (lookahead == 'd') ADVANCE(833);
      END_STATE();
    case 178:
      if (lookahead == 'd') ADVANCE(896);
      END_STATE();
    case 179:
      if (lookahead == 'd') ADVANCE(602);
      END_STATE();
    case 180:
      if (lookahead == 'd') ADVANCE(412);
      END_STATE();
    case 181:
      if (lookahead == 'd') ADVANCE(293);
      END_STATE();
    case 182:
      if (lookahead == 'd') ADVANCE(197);
      END_STATE();
    case 183:
      if (lookahead == 'd') ADVANCE(475);
      END_STATE();
    case 184:
      if (lookahead == 'd') ADVANCE(203);
      END_STATE();
    case 185:
      if (lookahead == 'd') ADVANCE(204);
      END_STATE();
    case 186:
      if (lookahead == 'd') ADVANCE(230);
      END_STATE();
    case 187:
      if (lookahead == 'd') ADVANCE(245);
      END_STATE();
    case 188:
      if (lookahead == 'e') ADVANCE(108);
      END_STATE();
    case 189:
      if (lookahead == 'e') ADVANCE(108);
      if (lookahead == 't') ADVANCE(339);
      END_STATE();
    case 190:
      if (lookahead == 'e') ADVANCE(61);
      END_STATE();
    case 191:
      if (lookahead == 'e') ADVANCE(596);
      END_STATE();
    case 192:
      if (lookahead == 'e') ADVANCE(970);
      END_STATE();
    case 193:
      if (lookahead == 'e') ADVANCE(972);
      END_STATE();
    case 194:
      if (lookahead == 'e') ADVANCE(880);
      END_STATE();
    case 195:
      if (lookahead == 'e') ADVANCE(870);
      END_STATE();
    case 196:
      if (lookahead == 'e') ADVANCE(261);
      END_STATE();
    case 197:
      if (lookahead == 'e') ADVANCE(1054);
      END_STATE();
    case 198:
      if (lookahead == 'e') ADVANCE(1056);
      END_STATE();
    case 199:
      if (lookahead == 'e') ADVANCE(1058);
      END_STATE();
    case 200:
      if (lookahead == 'e') ADVANCE(844);
      END_STATE();
    case 201:
      if (lookahead == 'e') ADVANCE(837);
      END_STATE();
    case 202:
      if (lookahead == 'e') ADVANCE(849);
      END_STATE();
    case 203:
      if (lookahead == 'e') ADVANCE(1048);
      END_STATE();
    case 204:
      if (lookahead == 'e') ADVANCE(1047);
      END_STATE();
    case 205:
      if (lookahead == 'e') ADVANCE(1050);
      END_STATE();
    case 206:
      if (lookahead == 'e') ADVANCE(848);
      END_STATE();
    case 207:
      if (lookahead == 'e') ADVANCE(864);
      END_STATE();
    case 208:
      if (lookahead == 'e') ADVANCE(1051);
      END_STATE();
    case 209:
      if (lookahead == 'e') ADVANCE(845);
      END_STATE();
    case 210:
      if (lookahead == 'e') ADVANCE(262);
      END_STATE();
    case 211:
      if (lookahead == 'e') ADVANCE(892);
      END_STATE();
    case 212:
      if (lookahead == 'e') ADVANCE(428);
      END_STATE();
    case 213:
      if (lookahead == 'e') ADVANCE(260);
      END_STATE();
    case 214:
      if (lookahead == 'e') ADVANCE(37);
      END_STATE();
    case 215:
      if (lookahead == 'e') ADVANCE(256);
      END_STATE();
    case 216:
      if (lookahead == 'e') ADVANCE(437);
      END_STATE();
    case 217:
      if (lookahead == 'e') ADVANCE(170);
      END_STATE();
    case 218:
      if (lookahead == 'e') ADVANCE(603);
      END_STATE();
    case 219:
      if (lookahead == 'e') ADVANCE(263);
      END_STATE();
    case 220:
      if (lookahead == 'e') ADVANCE(486);
      END_STATE();
    case 221:
      if (lookahead == 'e') ADVANCE(180);
      END_STATE();
    case 222:
      if (lookahead == 'e') ADVANCE(595);
      if (lookahead == 't') ADVANCE(338);
      END_STATE();
    case 223:
      if (lookahead == 'e') ADVANCE(166);
      END_STATE();
    case 224:
      if (lookahead == 'e') ADVANCE(181);
      END_STATE();
    case 225:
      if (lookahead == 'e') ADVANCE(488);
      END_STATE();
    case 226:
      if (lookahead == 'e') ADVANCE(176);
      END_STATE();
    case 227:
      if (lookahead == 'e') ADVANCE(168);
      END_STATE();
    case 228:
      if (lookahead == 'e') ADVANCE(607);
      END_STATE();
    case 229:
      if (lookahead == 'e') ADVANCE(177);
      END_STATE();
    case 230:
      if (lookahead == 'e') ADVANCE(429);
      END_STATE();
    case 231:
      if (lookahead == 'e') ADVANCE(469);
      END_STATE();
    case 232:
      if (lookahead == 'e') ADVANCE(173);
      END_STATE();
    case 233:
      if (lookahead == 'e') ADVANCE(405);
      END_STATE();
    case 234:
      if (lookahead == 'e') ADVANCE(431);
      END_STATE();
    case 235:
      if (lookahead == 'e') ADVANCE(439);
      END_STATE();
    case 236:
      if (lookahead == 'e') ADVANCE(432);
      END_STATE();
    case 237:
      if (lookahead == 'e') ADVANCE(125);
      END_STATE();
    case 238:
      if (lookahead == 'e') ADVANCE(107);
      END_STATE();
    case 239:
      if (lookahead == 'e') ADVANCE(440);
      END_STATE();
    case 240:
      if (lookahead == 'e') ADVANCE(465);
      END_STATE();
    case 241:
      if (lookahead == 'e') ADVANCE(433);
      END_STATE();
    case 242:
      if (lookahead == 'e') ADVANCE(519);
      END_STATE();
    case 243:
      if (lookahead == 'e') ADVANCE(434);
      END_STATE();
    case 244:
      if (lookahead == 'e') ADVANCE(479);
      END_STATE();
    case 245:
      if (lookahead == 'e') ADVANCE(481);
      END_STATE();
    case 246:
      if (lookahead == 'e') ADVANCE(505);
      END_STATE();
    case 247:
      if (lookahead == 'e') ADVANCE(78);
      END_STATE();
    case 248:
      if (lookahead == 'e') ADVANCE(544);
      if (lookahead == 't') ADVANCE(266);
      if (lookahead == 'u') ADVANCE(315);
      END_STATE();
    case 249:
      if (lookahead == 'e') ADVANCE(500);
      END_STATE();
    case 250:
      if (lookahead == 'e') ADVANCE(454);
      END_STATE();
    case 251:
      if (lookahead == 'e') ADVANCE(131);
      if (lookahead == 'l') ADVANCE(112);
      END_STATE();
    case 252:
      if (lookahead == 'e') ADVANCE(151);
      END_STATE();
    case 253:
      if (lookahead == 'e') ADVANCE(506);
      END_STATE();
    case 254:
      if (lookahead == 'f') ADVANCE(301);
      if (lookahead == 'o') ADVANCE(423);
      END_STATE();
    case 255:
      if (lookahead == 'f') ADVANCE(559);
      END_STATE();
    case 256:
      if (lookahead == 'f') ADVANCE(402);
      END_STATE();
    case 257:
      if (lookahead == 'g') ADVANCE(80);
      END_STATE();
    case 258:
      if (lookahead == 'g') ADVANCE(889);
      END_STATE();
    case 259:
      if (lookahead == 'g') ADVANCE(588);
      END_STATE();
    case 260:
      if (lookahead == 'g') ADVANCE(191);
      END_STATE();
    case 261:
      if (lookahead == 'g') ADVANCE(191);
      if (lookahead == 'p') ADVANCE(251);
      if (lookahead == 't') ADVANCE(448);
      END_STATE();
    case 262:
      if (lookahead == 'g') ADVANCE(191);
      if (lookahead == 'p') ADVANCE(320);
      END_STATE();
    case 263:
      if (lookahead == 'g') ADVANCE(243);
      END_STATE();
    case 264:
      if (lookahead == 'h') ADVANCE(881);
      END_STATE();
    case 265:
      if (lookahead == 'h') ADVANCE(882);
      END_STATE();
    case 266:
      if (lookahead == 'h') ADVANCE(1057);
      END_STATE();
    case 267:
      if (lookahead == 'h') ADVANCE(914);
      END_STATE();
    case 268:
      if (lookahead == 'h') ADVANCE(913);
      END_STATE();
    case 269:
      if (lookahead == 'h') ADVANCE(47);
      END_STATE();
    case 270:
      if (lookahead == 'h') ADVANCE(90);
      END_STATE();
    case 271:
      if (lookahead == 'h') ADVANCE(96);
      if (lookahead == 't') ADVANCE(137);
      END_STATE();
    case 272:
      if (lookahead == 'h') ADVANCE(124);
      END_STATE();
    case 273:
      if (lookahead == 'h') ADVANCE(126);
      END_STATE();
    case 274:
      if (lookahead == 'h') ADVANCE(244);
      END_STATE();
    case 275:
      if (lookahead == 'i') ADVANCE(157);
      END_STATE();
    case 276:
      if (lookahead == 'i') ADVANCE(419);
      END_STATE();
    case 277:
      if (lookahead == 'i') ADVANCE(220);
      END_STATE();
    case 278:
      if (lookahead == 'i') ADVANCE(345);
      END_STATE();
    case 279:
      if (lookahead == 'i') ADVANCE(374);
      END_STATE();
    case 280:
      if (lookahead == 'i') ADVANCE(259);
      END_STATE();
    case 281:
      if (lookahead == 'i') ADVANCE(340);
      if (lookahead == 'o') ADVANCE(174);
      END_STATE();
    case 282:
      if (lookahead == 'i') ADVANCE(600);
      END_STATE();
    case 283:
      if (lookahead == 'i') ADVANCE(384);
      END_STATE();
    case 284:
      if (lookahead == 'i') ADVANCE(341);
      END_STATE();
    case 285:
      if (lookahead == 'i') ADVANCE(410);
      END_STATE();
    case 286:
      if (lookahead == 'i') ADVANCE(97);
      END_STATE();
    case 287:
      if (lookahead == 'i') ADVANCE(388);
      END_STATE();
    case 288:
      if (lookahead == 'i') ADVANCE(194);
      END_STATE();
    case 289:
      if (lookahead == 'i') ADVANCE(178);
      END_STATE();
    case 290:
      if (lookahead == 'i') ADVANCE(352);
      END_STATE();
    case 291:
      if (lookahead == 'i') ADVANCE(534);
      END_STATE();
    case 292:
      if (lookahead == 'i') ADVANCE(513);
      END_STATE();
    case 293:
      if (lookahead == 'i') ADVANCE(456);
      END_STATE();
    case 294:
      if (lookahead == 'i') ADVANCE(474);
      END_STATE();
    case 295:
      if (lookahead == 'i') ADVANCE(503);
      END_STATE();
    case 296:
      if (lookahead == 'i') ADVANCE(540);
      END_STATE();
    case 297:
      if (lookahead == 'i') ADVANCE(542);
      END_STATE();
    case 298:
      if (lookahead == 'i') ADVANCE(365);
      END_STATE();
    case 299:
      if (lookahead == 'i') ADVANCE(342);
      if (lookahead == 'o') ADVANCE(862);
      END_STATE();
    case 300:
      if (lookahead == 'i') ADVANCE(389);
      END_STATE();
    case 301:
      if (lookahead == 'i') ADVANCE(323);
      END_STATE();
    case 302:
      if (lookahead == 'i') ADVANCE(371);
      if (lookahead == 'm') ADVANCE(139);
      END_STATE();
    case 303:
      if (lookahead == 'i') ADVANCE(391);
      END_STATE();
    case 304:
      if (lookahead == 'k') ADVANCE(277);
      END_STATE();
    case 305:
      if (lookahead == 'k') ADVANCE(288);
      END_STATE();
    case 306:
      if (lookahead == 'k') ADVANCE(285);
      if (lookahead == 'p') ADVANCE(330);
      END_STATE();
    case 307:
      if (lookahead == 'k') ADVANCE(242);
      END_STATE();
    case 308:
      if (lookahead == 'k') ADVANCE(228);
      END_STATE();
    case 309:
      if (lookahead == 'l') ADVANCE(874);
      END_STATE();
    case 310:
      if (lookahead == 'l') ADVANCE(810);
      END_STATE();
    case 311:
      if (lookahead == 'l') ADVANCE(70);
      END_STATE();
    case 312:
      if (lookahead == 'l') ADVANCE(73);
      END_STATE();
    case 313:
      if (lookahead == 'l') ADVANCE(841);
      END_STATE();
    case 314:
      if (lookahead == 'l') ADVANCE(854);
      END_STATE();
    case 315:
      if (lookahead == 'l') ADVANCE(310);
      END_STATE();
    case 316:
      if (lookahead == 'l') ADVANCE(214);
      END_STATE();
    case 317:
      if (lookahead == 'l') ADVANCE(195);
      END_STATE();
    case 318:
      if (lookahead == 'l') ADVANCE(494);
      END_STATE();
    case 319:
      if (lookahead == 'l') ADVANCE(574);
      END_STATE();
    case 320:
      if (lookahead == 'l') ADVANCE(112);
      END_STATE();
    case 321:
      if (lookahead == 'l') ADVANCE(406);
      END_STATE();
    case 322:
      if (lookahead == 'l') ADVANCE(477);
      END_STATE();
    case 323:
      if (lookahead == 'l') ADVANCE(207);
      END_STATE();
    case 324:
      if (lookahead == 'l') ADVANCE(482);
      END_STATE();
    case 325:
      if (lookahead == 'l') ADVANCE(483);
      END_STATE();
    case 326:
      if (lookahead == 'l') ADVANCE(484);
      END_STATE();
    case 327:
      if (lookahead == 'l') ADVANCE(237);
      END_STATE();
    case 328:
      if (lookahead == 'l') ADVANCE(232);
      END_STATE();
    case 329:
      if (lookahead == 'l') ADVANCE(530);
      END_STATE();
    case 330:
      if (lookahead == 'l') ADVANCE(292);
      END_STATE();
    case 331:
      if (lookahead == 'l') ADVANCE(328);
      END_STATE();
    case 332:
      if (lookahead == 'm') ADVANCE(79);
      END_STATE();
    case 333:
      if (lookahead == 'm') ADVANCE(69);
      END_STATE();
    case 334:
      if (lookahead == 'm') ADVANCE(415);
      if (lookahead == 'n') ADVANCE(359);
      if (lookahead == 'u') ADVANCE(357);
      END_STATE();
    case 335:
      if (lookahead == 'm') ADVANCE(155);
      END_STATE();
    case 336:
      if (lookahead == 'm') ADVANCE(491);
      END_STATE();
    case 337:
      if (lookahead == 'm') ADVANCE(493);
      END_STATE();
    case 338:
      if (lookahead == 'm') ADVANCE(312);
      END_STATE();
    case 339:
      if (lookahead == 'm') ADVANCE(312);
      if (lookahead == 't') ADVANCE(409);
      END_STATE();
    case 340:
      if (lookahead == 'm') ADVANCE(291);
      END_STATE();
    case 341:
      if (lookahead == 'm') ADVANCE(202);
      END_STATE();
    case 342:
      if (lookahead == 'm') ADVANCE(233);
      END_STATE();
    case 343:
      if (lookahead == 'm') ADVANCE(417);
      END_STATE();
    case 344:
      if (lookahead == 'm') ADVANCE(129);
      END_STATE();
    case 345:
      if (lookahead == 'n') ADVANCE(257);
      END_STATE();
    case 346:
      if (lookahead == 'n') ADVANCE(876);
      END_STATE();
    case 347:
      if (lookahead == 'n') ADVANCE(832);
      END_STATE();
    case 348:
      if (lookahead == 'n') ADVANCE(906);
      END_STATE();
    case 349:
      if (lookahead == 'n') ADVANCE(888);
      END_STATE();
    case 350:
      if (lookahead == 'n') ADVANCE(901);
      END_STATE();
    case 351:
      if (lookahead == 'n') ADVANCE(890);
      END_STATE();
    case 352:
      if (lookahead == 'n') ADVANCE(258);
      END_STATE();
    case 353:
      if (lookahead == 'n') ADVANCE(487);
      END_STATE();
    case 354:
      if (lookahead == 'n') ADVANCE(282);
      if (lookahead == 'r') ADVANCE(311);
      if (lookahead == 's') ADVANCE(234);
      END_STATE();
    case 355:
      if (lookahead == 'n') ADVANCE(183);
      if (lookahead == 'q') ADVANCE(578);
      if (lookahead == 'x') ADVANCE(295);
      END_STATE();
    case 356:
      if (lookahead == 'n') ADVANCE(163);
      if (lookahead == 's') ADVANCE(68);
      END_STATE();
    case 357:
      if (lookahead == 'n') ADVANCE(512);
      END_STATE();
    case 358:
      if (lookahead == 'n') ADVANCE(118);
      END_STATE();
    case 359:
      if (lookahead == 'n') ADVANCE(223);
      END_STATE();
    case 360:
      if (lookahead == 'n') ADVANCE(497);
      if (lookahead == 'p') ADVANCE(587);
      END_STATE();
    case 361:
      if (lookahead == 'n') ADVANCE(221);
      END_STATE();
    case 362:
      if (lookahead == 'n') ADVANCE(514);
      END_STATE();
    case 363:
      if (lookahead == 'n') ADVANCE(521);
      END_STATE();
    case 364:
      if (lookahead == 'n') ADVANCE(545);
      if (lookahead == 'u') ADVANCE(357);
      END_STATE();
    case 365:
      if (lookahead == 'n') ADVANCE(480);
      END_STATE();
    case 366:
      if (lookahead == 'n') ADVANCE(361);
      END_STATE();
    case 367:
      if (lookahead == 'n') ADVANCE(253);
      END_STATE();
    case 368:
      if (lookahead == 'n') ADVANCE(552);
      if (lookahead == 'p') ADVANCE(589);
      if (lookahead == 's') ADVANCE(407);
      END_STATE();
    case 369:
      if (lookahead == 'n') ADVANCE(421);
      END_STATE();
    case 370:
      if (lookahead == 'n') ADVANCE(171);
      END_STATE();
    case 371:
      if (lookahead == 'n') ADVANCE(560);
      END_STATE();
    case 372:
      if (lookahead == 'o') ADVANCE(427);
      END_STATE();
    case 373:
      if (lookahead == 'o') ADVANCE(304);
      END_STATE();
    case 374:
      if (lookahead == 'o') ADVANCE(353);
      END_STATE();
    case 375:
      if (lookahead == 'o') ADVANCE(71);
      END_STATE();
    case 376:
      if (lookahead == 'o') ADVANCE(71);
      if (lookahead == 'r') ADVANCE(571);
      END_STATE();
    case 377:
      if (lookahead == 'o') ADVANCE(364);
      END_STATE();
    case 378:
      if (lookahead == 'o') ADVANCE(373);
      END_STATE();
    case 379:
      if (lookahead == 'o') ADVANCE(179);
      if (lookahead == 'y') ADVANCE(555);
      END_STATE();
    case 380:
      if (lookahead == 'o') ADVANCE(592);
      END_STATE();
    case 381:
      if (lookahead == 'o') ADVANCE(369);
      END_STATE();
    case 382:
      if (lookahead == 'o') ADVANCE(598);
      END_STATE();
    case 383:
      if (lookahead == 'o') ADVANCE(593);
      END_STATE();
    case 384:
      if (lookahead == 'o') ADVANCE(346);
      END_STATE();
    case 385:
      if (lookahead == 'o') ADVANCE(182);
      END_STATE();
    case 386:
      if (lookahead == 'o') ADVANCE(583);
      END_STATE();
    case 387:
      if (lookahead == 'o') ADVANCE(159);
      END_STATE();
    case 388:
      if (lookahead == 'o') ADVANCE(347);
      END_STATE();
    case 389:
      if (lookahead == 'o') ADVANCE(358);
      END_STATE();
    case 390:
      if (lookahead == 'o') ADVANCE(331);
      END_STATE();
    case 391:
      if (lookahead == 'o') ADVANCE(351);
      END_STATE();
    case 392:
      if (lookahead == 'o') ADVANCE(404);
      END_STATE();
    case 393:
      if (lookahead == 'o') ADVANCE(498);
      END_STATE();
    case 394:
      if (lookahead == 'o') ADVANCE(522);
      if (lookahead == 't') ADVANCE(266);
      if (lookahead == 'u') ADVANCE(315);
      END_STATE();
    case 395:
      if (lookahead == 'o') ADVANCE(438);
      END_STATE();
    case 396:
      if (lookahead == 'o') ADVANCE(305);
      END_STATE();
    case 397:
      if (lookahead == 'o') ADVANCE(396);
      END_STATE();
    case 398:
      if (lookahead == 'o') ADVANCE(184);
      END_STATE();
    case 399:
      if (lookahead == 'o') ADVANCE(570);
      END_STATE();
    case 400:
      if (lookahead == 'o') ADVANCE(444);
      END_STATE();
    case 401:
      if (lookahead == 'o') ADVANCE(185);
      END_STATE();
    case 402:
      if (lookahead == 'o') ADVANCE(458);
      END_STATE();
    case 403:
      if (lookahead == 'o') ADVANCE(501);
      END_STATE();
    case 404:
      if (lookahead == 'o') ADVANCE(327);
      END_STATE();
    case 405:
      if (lookahead == 'o') ADVANCE(581);
      END_STATE();
    case 406:
      if (lookahead == 'o') ADVANCE(133);
      END_STATE();
    case 407:
      if (lookahead == 'o') ADVANCE(72);
      END_STATE();
    case 408:
      if (lookahead == 'p') ADVANCE(524);
      END_STATE();
    case 409:
      if (lookahead == 'p') ADVANCE(53);
      END_STATE();
    case 410:
      if (lookahead == 'p') ADVANCE(843);
      END_STATE();
    case 411:
      if (lookahead == 'p') ADVANCE(527);
      END_STATE();
    case 412:
      if (lookahead == 'p') ADVANCE(565);
      END_STATE();
    case 413:
      if (lookahead == 'p') ADVANCE(330);
      END_STATE();
    case 414:
      if (lookahead == 'p') ADVANCE(330);
      if (lookahead == 't') ADVANCE(149);
      END_STATE();
    case 415:
      if (lookahead == 'p') ADVANCE(452);
      END_STATE();
    case 416:
      if (lookahead == 'p') ADVANCE(205);
      END_STATE();
    case 417:
      if (lookahead == 'p') ADVANCE(541);
      END_STATE();
    case 418:
      if (lookahead == 'p') ADVANCE(208);
      END_STATE();
    case 419:
      if (lookahead == 'p') ADVANCE(140);
      END_STATE();
    case 420:
      if (lookahead == 'p') ADVANCE(115);
      END_STATE();
    case 421:
      if (lookahead == 'p') ADVANCE(119);
      END_STATE();
    case 422:
      if (lookahead == 'p') ADVANCE(579);
      END_STATE();
    case 423:
      if (lookahead == 'p') ADVANCE(557);
      END_STATE();
    case 424:
      if (lookahead == 'q') ADVANCE(584);
      END_STATE();
    case 425:
      if (lookahead == 'q') ADVANCE(585);
      END_STATE();
    case 426:
      if (lookahead == 'q') ADVANCE(586);
      END_STATE();
    case 427:
      if (lookahead == 'r') ADVANCE(332);
      END_STATE();
    case 428:
      if (lookahead == 'r') ADVANCE(601);
      END_STATE();
    case 429:
      if (lookahead == 'r') ADVANCE(863);
      END_STATE();
    case 430:
      if (lookahead == 'r') ADVANCE(152);
      END_STATE();
    case 431:
      if (lookahead == 'r') ADVANCE(869);
      END_STATE();
    case 432:
      if (lookahead == 'r') ADVANCE(77);
      END_STATE();
    case 433:
      if (lookahead == 'r') ADVANCE(891);
      END_STATE();
    case 434:
      if (lookahead == 'r') ADVANCE(886);
      END_STATE();
    case 435:
      if (lookahead == 'r') ADVANCE(74);
      END_STATE();
    case 436:
      if (lookahead == 'r') ADVANCE(101);
      END_STATE();
    case 437:
      if (lookahead == 'r') ADVANCE(529);
      END_STATE();
    case 438:
      if (lookahead == 'r') ADVANCE(333);
      END_STATE();
    case 439:
      if (lookahead == 'r') ADVANCE(156);
      END_STATE();
    case 440:
      if (lookahead == 'r') ADVANCE(590);
      END_STATE();
    case 441:
      if (lookahead == 'r') ADVANCE(571);
      END_STATE();
    case 442:
      if (lookahead == 'r') ADVANCE(309);
      END_STATE();
    case 443:
      if (lookahead == 'r') ADVANCE(278);
      END_STATE();
    case 444:
      if (lookahead == 'r') ADVANCE(344);
      END_STATE();
    case 445:
      if (lookahead == 'r') ADVANCE(158);
      END_STATE();
    case 446:
      if (lookahead == 'r') ADVANCE(510);
      END_STATE();
    case 447:
      if (lookahead == 'r') ADVANCE(286);
      END_STATE();
    case 448:
      if (lookahead == 'r') ADVANCE(606);
      END_STATE();
    case 449:
      if (lookahead == 'r') ADVANCE(311);
      END_STATE();
    case 450:
      if (lookahead == 'r') ADVANCE(148);
      END_STATE();
    case 451:
      if (lookahead == 'r') ADVANCE(511);
      END_STATE();
    case 452:
      if (lookahead == 'r') ADVANCE(246);
      END_STATE();
    case 453:
      if (lookahead == 'r') ADVANCE(290);
      END_STATE();
    case 454:
      if (lookahead == 'r') ADVANCE(515);
      END_STATE();
    case 455:
      if (lookahead == 'r') ADVANCE(224);
      if (lookahead == 't') ADVANCE(284);
      END_STATE();
    case 456:
      if (lookahead == 'r') ADVANCE(473);
      END_STATE();
    case 457:
      if (lookahead == 'r') ADVANCE(201);
      END_STATE();
    case 458:
      if (lookahead == 'r') ADVANCE(247);
      END_STATE();
    case 459:
      if (lookahead == 'r') ADVANCE(252);
      END_STATE();
    case 460:
      if (lookahead == 'r') ADVANCE(225);
      END_STATE();
    case 461:
      if (lookahead == 'r') ADVANCE(138);
      END_STATE();
    case 462:
      if (lookahead == 'r') ADVANCE(580);
      END_STATE();
    case 463:
      if (lookahead == 'r') ADVANCE(562);
      END_STATE();
    case 464:
      if (lookahead == 'r') ADVANCE(143);
      END_STATE();
    case 465:
      if (lookahead == 'r') ADVANCE(83);
      END_STATE();
    case 466:
      if (lookahead == 'r') ADVANCE(75);
      END_STATE();
    case 467:
      if (lookahead == 's') ADVANCE(275);
      END_STATE();
    case 468:
      if (lookahead == 's') ADVANCE(86);
      END_STATE();
    case 469:
      if (lookahead == 's') ADVANCE(877);
      END_STATE();
    case 470:
      if (lookahead == 's') ADVANCE(873);
      END_STATE();
    case 471:
      if (lookahead == 's') ADVANCE(44);
      END_STATE();
    case 472:
      if (lookahead == 's') ADVANCE(66);
      END_STATE();
    case 473:
      if (lookahead == 's') ADVANCE(846);
      END_STATE();
    case 474:
      if (lookahead == 's') ADVANCE(842);
      END_STATE();
    case 475:
      if (lookahead == 's') ADVANCE(84);
      END_STATE();
    case 476:
      if (lookahead == 's') ADVANCE(82);
      END_STATE();
    case 477:
      if (lookahead == 's') ADVANCE(897);
      END_STATE();
    case 478:
      if (lookahead == 's') ADVANCE(885);
      END_STATE();
    case 479:
      if (lookahead == 's') ADVANCE(916);
      END_STATE();
    case 480:
      if (lookahead == 's') ADVANCE(915);
      END_STATE();
    case 481:
      if (lookahead == 's') ADVANCE(917);
      END_STATE();
    case 482:
      if (lookahead == 's') ADVANCE(899);
      END_STATE();
    case 483:
      if (lookahead == 's') ADVANCE(911);
      END_STATE();
    case 484:
      if (lookahead == 's') ADVANCE(904);
      END_STATE();
    case 485:
      if (lookahead == 's') ADVANCE(502);
      END_STATE();
    case 486:
      if (lookahead == 's') ADVANCE(87);
      END_STATE();
    case 487:
      if (lookahead == 's') ADVANCE(88);
      END_STATE();
    case 488:
      if (lookahead == 's') ADVANCE(89);
      END_STATE();
    case 489:
      if (lookahead == 's') ADVANCE(381);
      END_STATE();
    case 490:
      if (lookahead == 's') ADVANCE(190);
      END_STATE();
    case 491:
      if (lookahead == 's') ADVANCE(91);
      END_STATE();
    case 492:
      if (lookahead == 's') ADVANCE(42);
      END_STATE();
    case 493:
      if (lookahead == 's') ADVANCE(93);
      END_STATE();
    case 494:
      if (lookahead == 's') ADVANCE(193);
      END_STATE();
    case 495:
      if (lookahead == 's') ADVANCE(387);
      END_STATE();
    case 496:
      if (lookahead == 's') ADVANCE(280);
      END_STATE();
    case 497:
      if (lookahead == 's') ADVANCE(217);
      END_STATE();
    case 498:
      if (lookahead == 's') ADVANCE(200);
      END_STATE();
    case 499:
      if (lookahead == 's') ADVANCE(226);
      END_STATE();
    case 500:
      if (lookahead == 's') ADVANCE(476);
      END_STATE();
    case 501:
      if (lookahead == 's') ADVANCE(209);
      END_STATE();
    case 502:
      if (lookahead == 's') ADVANCE(216);
      END_STATE();
    case 503:
      if (lookahead == 's') ADVANCE(549);
      END_STATE();
    case 504:
      if (lookahead == 's') ADVANCE(164);
      END_STATE();
    case 505:
      if (lookahead == 's') ADVANCE(499);
      END_STATE();
    case 506:
      if (lookahead == 's') ADVANCE(169);
      END_STATE();
    case 507:
      if (lookahead == 's') ADVANCE(551);
      END_STATE();
    case 508:
      if (lookahead == 's') ADVANCE(85);
      END_STATE();
    case 509:
      if (lookahead == 't') ADVANCE(270);
      END_STATE();
    case 510:
      if (lookahead == 't') ADVANCE(76);
      END_STATE();
    case 511:
      if (lookahead == 't') ADVANCE(816);
      END_STATE();
    case 512:
      if (lookahead == 't') ADVANCE(1046);
      END_STATE();
    case 513:
      if (lookahead == 't') ADVANCE(1059);
      END_STATE();
    case 514:
      if (lookahead == 't') ADVANCE(1049);
      END_STATE();
    case 515:
      if (lookahead == 't') ADVANCE(815);
      END_STATE();
    case 516:
      if (lookahead == 't') ADVANCE(1055);
      END_STATE();
    case 517:
      if (lookahead == 't') ADVANCE(865);
      END_STATE();
    case 518:
      if (lookahead == 't') ADVANCE(850);
      END_STATE();
    case 519:
      if (lookahead == 't') ADVANCE(868);
      END_STATE();
    case 520:
      if (lookahead == 't') ADVANCE(852);
      END_STATE();
    case 521:
      if (lookahead == 't') ADVANCE(847);
      END_STATE();
    case 522:
      if (lookahead == 't') ADVANCE(884);
      END_STATE();
    case 523:
      if (lookahead == 't') ADVANCE(887);
      END_STATE();
    case 524:
      if (lookahead == 't') ADVANCE(279);
      END_STATE();
    case 525:
      if (lookahead == 't') ADVANCE(264);
      END_STATE();
    case 526:
      if (lookahead == 't') ADVANCE(299);
      END_STATE();
    case 527:
      if (lookahead == 't') ADVANCE(567);
      END_STATE();
    case 528:
      if (lookahead == 't') ADVANCE(265);
      END_STATE();
    case 529:
      if (lookahead == 't') ADVANCE(468);
      END_STATE();
    case 530:
      if (lookahead == 't') ADVANCE(276);
      END_STATE();
    case 531:
      if (lookahead == 't') ADVANCE(266);
      END_STATE();
    case 532:
      if (lookahead == 't') ADVANCE(113);
      END_STATE();
    case 533:
      if (lookahead == 't') ADVANCE(269);
      END_STATE();
    case 534:
      if (lookahead == 't') ADVANCE(43);
      END_STATE();
    case 535:
      if (lookahead == 't') ADVANCE(576);
      END_STATE();
    case 536:
      if (lookahead == 't') ADVANCE(422);
      END_STATE();
    case 537:
      if (lookahead == 't') ADVANCE(443);
      END_STATE();
    case 538:
      if (lookahead == 't') ADVANCE(46);
      END_STATE();
    case 539:
      if (lookahead == 't') ADVANCE(338);
      END_STATE();
    case 540:
      if (lookahead == 't') ADVANCE(267);
      END_STATE();
    case 541:
      if (lookahead == 't') ADVANCE(608);
      END_STATE();
    case 542:
      if (lookahead == 't') ADVANCE(268);
      END_STATE();
    case 543:
      if (lookahead == 't') ADVANCE(160);
      END_STATE();
    case 544:
      if (lookahead == 't') ADVANCE(445);
      END_STATE();
    case 545:
      if (lookahead == 't') ADVANCE(128);
      END_STATE();
    case 546:
      if (lookahead == 't') ADVANCE(462);
      END_STATE();
    case 547:
      if (lookahead == 't') ADVANCE(198);
      END_STATE();
    case 548:
      if (lookahead == 't') ADVANCE(453);
      END_STATE();
    case 549:
      if (lookahead == 't') ADVANCE(478);
      END_STATE();
    case 550:
      if (lookahead == 't') ADVANCE(206);
      END_STATE();
    case 551:
      if (lookahead == 't') ADVANCE(229);
      END_STATE();
    case 552:
      if (lookahead == 't') ADVANCE(219);
      END_STATE();
    case 553:
      if (lookahead == 't') ADVANCE(211);
      END_STATE();
    case 554:
      if (lookahead == 't') ADVANCE(283);
      END_STATE();
    case 555:
      if (lookahead == 't') ADVANCE(231);
      END_STATE();
    case 556:
      if (lookahead == 't') ADVANCE(287);
      END_STATE();
    case 557:
      if (lookahead == 't') ADVANCE(300);
      END_STATE();
    case 558:
      if (lookahead == 't') ADVANCE(303);
      END_STATE();
    case 559:
      if (lookahead == 't') ADVANCE(236);
      END_STATE();
    case 560:
      if (lookahead == 't') ADVANCE(239);
      END_STATE();
    case 561:
      if (lookahead == 't') ADVANCE(240);
      END_STATE();
    case 562:
      if (lookahead == 't') ADVANCE(508);
      END_STATE();
    case 563:
      if (lookahead == 'u') ADVANCE(329);
      END_STATE();
    case 564:
      if (lookahead == 'u') ADVANCE(212);
      END_STATE();
    case 565:
      if (lookahead == 'u') ADVANCE(153);
      END_STATE();
    case 566:
      if (lookahead == 'u') ADVANCE(611);
      if (lookahead == '#' ||
          lookahead == '\\' ||
          lookahead == '`' ||
          lookahead == 'b' ||
          lookahead == 'f') ADVANCE(995);
      END_STATE();
    case 567:
      if (lookahead == 'u') ADVANCE(460);
      END_STATE();
    case 568:
      if (lookahead == 'u') ADVANCE(315);
      END_STATE();
    case 569:
      if (lookahead == 'u') ADVANCE(509);
      END_STATE();
    case 570:
      if (lookahead == 'u') ADVANCE(357);
      END_STATE();
    case 571:
      if (lookahead == 'u') ADVANCE(192);
      END_STATE();
    case 572:
      if (lookahead == 'u') ADVANCE(450);
      END_STATE();
    case 573:
      if (lookahead == 'u') ADVANCE(335);
      END_STATE();
    case 574:
      if (lookahead == 'u') ADVANCE(187);
      END_STATE();
    case 575:
      if (lookahead == 'u') ADVANCE(536);
      END_STATE();
    case 576:
      if (lookahead == 'u') ADVANCE(470);
      END_STATE();
    case 577:
      if (lookahead == 'u') ADVANCE(289);
      END_STATE();
    case 578:
      if (lookahead == 'u') ADVANCE(136);
      END_STATE();
    case 579:
      if (lookahead == 'u') ADVANCE(517);
      END_STATE();
    case 580:
      if (lookahead == 'u') ADVANCE(507);
      END_STATE();
    case 581:
      if (lookahead == 'u') ADVANCE(520);
      END_STATE();
    case 582:
      if (lookahead == 'u') ADVANCE(457);
      END_STATE();
    case 583:
      if (lookahead == 'u') ADVANCE(363);
      END_STATE();
    case 584:
      if (lookahead == 'u') ADVANCE(144);
      END_STATE();
    case 585:
      if (lookahead == 'u') ADVANCE(145);
      END_STATE();
    case 586:
      if (lookahead == 'u') ADVANCE(146);
      END_STATE();
    case 587:
      if (lookahead == 'v') ADVANCE(55);
      END_STATE();
    case 588:
      if (lookahead == 'v') ADVANCE(56);
      END_STATE();
    case 589:
      if (lookahead == 'v') ADVANCE(57);
      END_STATE();
    case 590:
      if (lookahead == 'v') ADVANCE(122);
      END_STATE();
    case 591:
      if (lookahead == 'v') ADVANCE(235);
      END_STATE();
    case 592:
      if (lookahead == 'w') ADVANCE(1052);
      END_STATE();
    case 593:
      if (lookahead == 'w') ADVANCE(1053);
      END_STATE();
    case 594:
      if (lookahead == 'w') ADVANCE(471);
      END_STATE();
    case 595:
      if (lookahead == 'x') ADVANCE(36);
      END_STATE();
    case 596:
      if (lookahead == 'x') ADVANCE(883);
      END_STATE();
    case 597:
      if (lookahead == 'x') ADVANCE(39);
      END_STATE();
    case 598:
      if (lookahead == 'x') ADVANCE(605);
      END_STATE();
    case 599:
      if (lookahead == 'x') ADVANCE(41);
      END_STATE();
    case 600:
      if (lookahead == 'x') ADVANCE(45);
      END_STATE();
    case 601:
      if (lookahead == 'y') ADVANCE(81);
      END_STATE();
    case 602:
      if (lookahead == 'y') ADVANCE(875);
      END_STATE();
    case 603:
      if (lookahead == 'y') ADVANCE(861);
      END_STATE();
    case 604:
      if (lookahead == 'y') ADVANCE(853);
      END_STATE();
    case 605:
      if (lookahead == 'y') ADVANCE(867);
      END_STATE();
    case 606:
      if (lookahead == 'y') ADVANCE(851);
      END_STATE();
    case 607:
      if (lookahead == 'y') ADVANCE(866);
      END_STATE();
    case 608:
      if (lookahead == 'y') ADVANCE(893);
      END_STATE();
    case 609:
      if (lookahead == 'y') ADVANCE(472);
      END_STATE();
    case 610:
      if (lookahead == '{') ADVANCE(1040);
      END_STATE();
    case 611:
      if (lookahead == '{') ADVANCE(620);
      END_STATE();
    case 612:
      if (lookahead == '}') ADVANCE(1043);
      END_STATE();
    case 613:
      if (lookahead == '}') ADVANCE(995);
      END_STATE();
    case 614:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(616);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1039);
      END_STATE();
    case 615:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1038);
      END_STATE();
    case 616:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1039);
      END_STATE();
    case 617:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(613);
      END_STATE();
    case 618:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(617);
      END_STATE();
    case 619:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(618);
      END_STATE();
    case 620:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(619);
      END_STATE();
    case 621:
      if (eof) ADVANCE(626);
      ADVANCE_MAP(
        '\n', 627,
        '"', 936,
        '#', 1070,
        '-', 50,
        '.', 1064,
        '0', 1036,
        '<', 910,
        'C', 750,
        'D', 687,
        'G', 688,
        'H', 690,
        'L', 713,
        'O', 759,
        'P', 669,
        'T', 763,
        'U', 737,
        'V', 716,
        '[', 976,
        '`', 991,
        'b', 121,
        'c', 397,
        'd', 572,
        'f', 99,
        'h', 188,
        'j', 489,
        'm', 175,
        'n', 568,
        'r', 213,
        's', 271,
        't', 441,
        'u', 442,
        'v', 116,
        'x', 420,
        '{', 829,
      );
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1037);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(785);
      if (set_contains(extras_character_set_2, 9, lookahead)) SKIP(621);
      END_STATE();
    case 622:
      if (eof) ADVANCE(626);
      ADVANCE_MAP(
        '\n', 627,
        '"', 936,
        '#', 1070,
        '-', 50,
        '0', 1036,
        '<', 910,
        'C', 750,
        'D', 687,
        'G', 688,
        'H', 689,
        'L', 713,
        'O', 759,
        'P', 669,
        'T', 763,
        'U', 737,
        'V', 716,
        '[', 977,
        '`', 991,
        'a', 594,
        'b', 120,
        'c', 102,
        'd', 105,
        'f', 100,
        'h', 189,
        'i', 360,
        'k', 218,
        'l', 281,
        'm', 103,
        'n', 248,
        'o', 575,
        'p', 123,
        'r', 196,
        's', 306,
        't', 376,
        'u', 354,
        'v', 117,
        'x', 420,
        '{', 829,
      );
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1037);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(785);
      if (set_contains(extras_character_set_2, 9, lookahead)) SKIP(622);
      END_STATE();
    case 623:
      if (eof) ADVANCE(626);
      ADVANCE_MAP(
        '\n', 627,
        '"', 936,
        '#', 1070,
        '-', 948,
        '.', 944,
        '0', 1036,
        '<', 910,
        'C', 751,
        'D', 695,
        'G', 696,
        'H', 697,
        'L', 715,
        'O', 760,
        'P', 672,
        'T', 764,
        'U', 740,
        'V', 714,
        '[', 977,
        '\\', 820,
        ']', 978,
        '`', 991,
        'b', 951,
        'f', 952,
        'h', 954,
        'n', 966,
        't', 963,
        '{', 829,
      );
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1037);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(786);
      if (set_contains(extras_character_set_2, 9, lookahead)) SKIP(623);
      if (lookahead == '$' ||
          lookahead == '@' ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(969);
      END_STATE();
    case 624:
      if (eof) ADVANCE(626);
      ADVANCE_MAP(
        '\n', 627,
        '"', 936,
        '#', 1070,
        '-', 948,
        '.', 944,
        '0', 1036,
        '<', 910,
        'C', 751,
        'D', 695,
        'G', 696,
        'H', 698,
        'L', 715,
        'O', 760,
        'P', 672,
        'T', 764,
        'U', 740,
        'V', 714,
        '[', 976,
        '\\', 820,
        ']', 978,
        '`', 991,
        'b', 951,
        'f', 952,
        'h', 954,
        'n', 966,
        't', 963,
        '{', 829,
      );
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1037);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(786);
      if (set_contains(extras_character_set_2, 9, lookahead)) SKIP(624);
      if (lookahead == '$' ||
          lookahead == '@' ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(969);
      END_STATE();
    case 625:
      if (eof) ADVANCE(626);
      ADVANCE_MAP(
        '!', 63,
        '"', 936,
        '#', 1070,
        ',', 1031,
        '-', 1060,
        '/', 1071,
        ':', 809,
        ';', 813,
        '<', 909,
        '=', 64,
        '>', 903,
        '?', 65,
        ']', 978,
        '`', 94,
        'b', 120,
        'c', 377,
        'd', 106,
        'e', 355,
        'f', 100,
        'g', 459,
        'h', 222,
        'i', 356,
        'l', 249,
        'm', 132,
        'n', 394,
        'r', 210,
        's', 414,
        't', 376,
        'u', 449,
        'x', 420,
        '{', 829,
        '}', 612,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1062);
      if (set_contains(extras_character_set_2, 9, lookahead)) SKIP(625);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(627);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(628);
      if (set_contains(extras_character_set_2, 9, lookahead)) ADVANCE(980);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(629);
      if ((set_contains(extras_character_set_2, 9, lookahead)) &&
          lookahead != ' ') ADVANCE(1026);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(630);
      if ((set_contains(extras_character_set_2, 9, lookahead)) &&
          lookahead != '\r') ADVANCE(817);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(631);
      if (set_contains(extras_character_set_2, 9, lookahead)) ADVANCE(981);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(632);
      if (set_contains(extras_character_set_2, 9, lookahead)) ADVANCE(1022);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(633);
      if (set_contains(extras_character_set_2, 9, lookahead)) ADVANCE(1002);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(634);
      if (set_contains(extras_character_set_2, 9, lookahead)) ADVANCE(982);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(anon_sym_GET);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(785);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(anon_sym_GET);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(786);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '@' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(969);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(anon_sym_HEAD);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(785);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(anon_sym_HEAD);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(786);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '@' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(969);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(anon_sym_POST);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(785);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(anon_sym_POST);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(786);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '@' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(969);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(anon_sym_PUT);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(785);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(anon_sym_PUT);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(786);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '@' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(969);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(anon_sym_DELETE);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(785);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(anon_sym_DELETE);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(786);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '@' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(969);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(anon_sym_CONNECT);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(785);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(anon_sym_CONNECT);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(786);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '@' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(969);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(anon_sym_OPTIONS);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(785);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(anon_sym_OPTIONS);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(786);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '@' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(969);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(anon_sym_TRACE);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(785);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(anon_sym_TRACE);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(786);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '@' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(969);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(anon_sym_PATCH);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(785);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(anon_sym_PATCH);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(786);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '@' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(969);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(anon_sym_LINK);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(785);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(anon_sym_LINK);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(786);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '@' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(969);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(anon_sym_UNLINK);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(785);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(anon_sym_UNLINK);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(786);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '@' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(969);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(anon_sym_PURGE);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(785);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(anon_sym_PURGE);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(786);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '@' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(969);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(anon_sym_LOCK);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(785);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(anon_sym_LOCK);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(786);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '@' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(969);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(anon_sym_UNLOCK);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(785);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(anon_sym_UNLOCK);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(786);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '@' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(969);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(anon_sym_PROPFIND);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(785);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(anon_sym_PROPFIND);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(786);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '@' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(969);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(anon_sym_VIEW);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(785);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(anon_sym_VIEW);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(786);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '@' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(969);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'A') ADVANCE(683);
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(785);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'A') ADVANCE(685);
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(786);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '@' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(969);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'A') ADVANCE(776);
      if (lookahead == 'O') ADVANCE(767);
      if (lookahead == 'R') ADVANCE(749);
      if (lookahead == 'U') ADVANCE(761);
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(785);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'A') ADVANCE(682);
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(785);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'A') ADVANCE(680);
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(786);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '@' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(969);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'A') ADVANCE(779);
      if (lookahead == 'O') ADVANCE(768);
      if (lookahead == 'R') ADVANCE(752);
      if (lookahead == 'U') ADVANCE(762);
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(786);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '@' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(969);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'C') ADVANCE(711);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(785);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'C') ADVANCE(712);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(786);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '@' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(969);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'C') ADVANCE(724);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(785);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'C') ADVANCE(728);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(786);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '@' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(969);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'C') ADVANCE(726);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(785);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'C') ADVANCE(730);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(786);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '@' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(969);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'C') ADVANCE(771);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(785);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'C') ADVANCE(701);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(786);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '@' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(969);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'C') ADVANCE(774);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(786);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '@' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(969);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'C') ADVANCE(693);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(785);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'D') ADVANCE(637);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(785);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'D') ADVANCE(663);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(785);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'D') ADVANCE(638);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(786);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '@' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(969);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'D') ADVANCE(664);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(786);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '@' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(969);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'E') ADVANCE(732);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(785);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'E') ADVANCE(769);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(785);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'E') ADVANCE(667);
      if (lookahead == 'T') ADVANCE(780);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(785);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'E') ADVANCE(667);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(785);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'E') ADVANCE(783);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(785);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'E') ADVANCE(657);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(785);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'E') ADVANCE(649);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(785);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'E') ADVANCE(643);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(785);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'E') ADVANCE(731);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(786);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '@' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(969);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'E') ADVANCE(772);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(786);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '@' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(969);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'E') ADVANCE(668);
      if (lookahead == 'T') ADVANCE(777);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(786);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '@' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(969);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'E') ADVANCE(668);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(786);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '@' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(969);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'E') ADVANCE(784);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(786);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '@' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(969);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'E') ADVANCE(658);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(786);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '@' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(969);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'E') ADVANCE(650);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(786);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '@' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(969);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'E') ADVANCE(644);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(786);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '@' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(969);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'E') ADVANCE(679);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(785);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'E') ADVANCE(681);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(786);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '@' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(969);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'E') ADVANCE(782);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(785);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'E') ADVANCE(781);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(786);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '@' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(969);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'F') ADVANCE(719);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(785);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'F') ADVANCE(720);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(786);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '@' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(969);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'G') ADVANCE(700);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(786);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '@' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(969);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'G') ADVANCE(692);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(785);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'H') ADVANCE(651);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(785);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'H') ADVANCE(652);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(786);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '@' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(969);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'I') ADVANCE(735);
      if (lookahead == 'O') ADVANCE(675);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(785);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'I') ADVANCE(699);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(786);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '@' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(969);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'I') ADVANCE(736);
      if (lookahead == 'O') ADVANCE(676);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(786);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '@' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(969);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'I') ADVANCE(691);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(785);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'I') ADVANCE(743);
      if (lookahead == 'O') ADVANCE(677);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(785);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'I') ADVANCE(744);
      if (lookahead == 'O') ADVANCE(678);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(786);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '@' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(969);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'I') ADVANCE(739);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(785);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'I') ADVANCE(742);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(786);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '@' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(969);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'I') ADVANCE(753);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(785);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'I') ADVANCE(754);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(786);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '@' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(969);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'K') ADVANCE(653);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(785);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'K') ADVANCE(659);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(785);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'K') ADVANCE(655);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(785);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'K') ADVANCE(661);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(785);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'K') ADVANCE(654);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(786);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '@' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(969);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'K') ADVANCE(660);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(786);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '@' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(969);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'K') ADVANCE(656);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(786);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '@' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(969);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'K') ADVANCE(662);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(786);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '@' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(969);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'L') ADVANCE(706);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(786);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '@' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(969);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'L') ADVANCE(705);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(785);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'L') ADVANCE(717);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(785);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'L') ADVANCE(718);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(786);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '@' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(969);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'N') ADVANCE(723);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(785);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'N') ADVANCE(727);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(786);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '@' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(969);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'N') ADVANCE(733);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(785);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'N') ADVANCE(765);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(785);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'N') ADVANCE(684);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(785);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'N') ADVANCE(734);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(786);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '@' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(969);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'N') ADVANCE(766);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(786);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '@' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(969);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'N') ADVANCE(686);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(786);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '@' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(969);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'N') ADVANCE(725);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(785);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'N') ADVANCE(729);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(786);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '@' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(969);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'N') ADVANCE(748);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(785);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'N') ADVANCE(747);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(786);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '@' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(969);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'N') ADVANCE(704);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(786);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '@' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(969);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'N') ADVANCE(703);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(785);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'O') ADVANCE(755);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(785);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'O') ADVANCE(745);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(785);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'O') ADVANCE(746);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(786);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '@' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(969);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'O') ADVANCE(758);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(786);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '@' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(969);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'O') ADVANCE(738);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(785);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'O') ADVANCE(741);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(786);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '@' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(969);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'P') ADVANCE(707);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(785);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'P') ADVANCE(792);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(785);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'P') ADVANCE(793);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(786);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '@' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(969);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'P') ADVANCE(708);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(786);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '@' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(969);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'P') ADVANCE(775);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(785);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'P') ADVANCE(778);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(786);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '@' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(969);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'R') ADVANCE(710);
      if (lookahead == 'T') ADVANCE(641);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(785);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'R') ADVANCE(709);
      if (lookahead == 'T') ADVANCE(642);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(786);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '@' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(969);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'R') ADVANCE(670);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(785);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'R') ADVANCE(671);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(786);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '@' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(969);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'S') ADVANCE(647);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(785);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'S') ADVANCE(648);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(786);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '@' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(969);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'S') ADVANCE(770);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(785);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'S') ADVANCE(773);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(786);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '@' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(969);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'T') ADVANCE(635);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(785);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'T') ADVANCE(639);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(785);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'T') ADVANCE(645);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(785);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'T') ADVANCE(636);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(786);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '@' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(969);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'T') ADVANCE(640);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(786);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '@' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(969);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'T') ADVANCE(646);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(786);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '@' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(969);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'T') ADVANCE(721);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(785);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'T') ADVANCE(673);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(785);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'T') ADVANCE(757);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(786);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '@' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(969);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'T') ADVANCE(722);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(786);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '@' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(969);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'T') ADVANCE(674);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(786);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '@' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(969);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'T') ADVANCE(756);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(785);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'T') ADVANCE(702);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(786);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '@' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(969);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'T') ADVANCE(694);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(785);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'W') ADVANCE(665);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(785);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'W') ADVANCE(666);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(786);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '@' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(969);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(785);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(786);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '@' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(969);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(anon_sym_HTTP_SLASH1_DOT0);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(anon_sym_HTTP_SLASH1_DOT1);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(anon_sym_HTTP_SLASH2);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(anon_sym_HTTP_SLASH3);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(anon_sym_HTTP_SLASH_STAR);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(anon_sym_HTTP);
      if (lookahead == '/') ADVANCE(35);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(785);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(anon_sym_HTTP);
      if (lookahead == '/') ADVANCE(35);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(786);
      if (lookahead == '$' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '@' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(969);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(aux_sym_status_token1);
      if (lookahead == '.') ADVANCE(615);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(614);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(796);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(aux_sym_status_token1);
      if (lookahead == '.') ADVANCE(615);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(614);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(795);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(aux_sym_status_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(796);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(anon_sym_LBRACKBasicAuth_RBRACK);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(anon_sym_LBRACKQuery_RBRACK);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(anon_sym_LBRACKQueryStringParams_RBRACK);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(anon_sym_LBRACKForm_RBRACK);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(anon_sym_LBRACKFormParams_RBRACK);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(anon_sym_LBRACKMultipart_RBRACK);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(anon_sym_LBRACKMultipartFormData_RBRACK);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(anon_sym_LBRACKCookies_RBRACK);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(anon_sym_LBRACKCaptures_RBRACK);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(anon_sym_LBRACKAsserts_RBRACK);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(anon_sym_LBRACKOptions_RBRACK);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(anon_sym_null);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(anon_sym_null);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(969);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(anon_sym_file_COMMA);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(aux_sym_file_value_token1);
      if (lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(814);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(anon_sym_cacert);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(anon_sym_cert);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(sym_filename_password_text);
      if (lookahead == '\n') ADVANCE(630);
      if ((set_contains(extras_character_set_2, 9, lookahead)) &&
          lookahead != '\r') ADVANCE(817);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(819);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(sym_filename_password_text);
      if ((set_contains(extras_character_set_1, 10, lookahead)) &&
          lookahead != '\r') ADVANCE(818);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(819);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(sym_filename_password_text);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(819);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(anon_sym_b);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(anon_sym_f);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(anon_sym_n);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(anon_sym_r);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(anon_sym_t);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(anon_sym_u);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1070);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '{') ADVANCE(1040);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(anon_sym_compressed);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(anon_sym_location);
      if (lookahead == '-') ADVANCE(546);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(anon_sym_location_DASHtrusted);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(anon_sym_http1_DOT0);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(anon_sym_http2);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(anon_sym_http3);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(anon_sym_insecure);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(anon_sym_ipv4);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(anon_sym_ipv6);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(anon_sym_netrc);
      if (lookahead == '-') ADVANCE(254);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(anon_sym_netrc_DASHoptional);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(anon_sym_path_DASHas_DASHis);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(anon_sym_skip);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(anon_sym_verbose);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(anon_sym_very_DASHverbose);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(anon_sym_max_DASHredirs);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(anon_sym_retry_DASHmax_DASHcount);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(anon_sym_limit_DASHrate);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(anon_sym_max_DASHtime);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(anon_sym_repeat);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(anon_sym_retry);
      if (lookahead == '-') ADVANCE(302);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(anon_sym_connect_DASHtimeout);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(anon_sym_delay);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(anon_sym_retry_DASHinterval);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(anon_sym_ms);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(anon_sym_s);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(anon_sym_s);
      if (lookahead == 'p') ADVANCE(330);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(anon_sym_m);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(anon_sym_m);
      if (lookahead == 's') ADVANCE(855);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(anon_sym_aws_DASHsigv4);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(anon_sym_key);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(anon_sym_connect_DASHto);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(anon_sym_header);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(anon_sym_netrc_DASHfile);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(anon_sym_output);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(anon_sym_pinnedpubkey);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(anon_sym_proxy);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(anon_sym_unix_DASHsocket);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(anon_sym_user);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(anon_sym_variable);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(898);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(anon_sym_status);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(anon_sym_url);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(anon_sym_body);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(anon_sym_duration);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(anon_sym_bytes);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(anon_sym_sha256);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(anon_sym_md5);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(anon_sym_cookie);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(anon_sym_xpath);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(anon_sym_jsonpath);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(anon_sym_regex);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(anon_sym_not);
      if (lookahead == 'E') ADVANCE(424);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(anon_sym_exists);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(anon_sym_isInteger);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(anon_sym_isFloat);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(anon_sym_isBoolean);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(anon_sym_isString);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(anon_sym_isCollection);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(anon_sym_isNumber);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(anon_sym_isIsoDate);
      END_STATE();
    case 893:
      ACCEPT_TOKEN(anon_sym_isEmpty);
      END_STATE();
    case 894:
      ACCEPT_TOKEN(anon_sym_isIpv4);
      END_STATE();
    case 895:
      ACCEPT_TOKEN(anon_sym_isIpv6);
      END_STATE();
    case 896:
      ACCEPT_TOKEN(anon_sym_isUuid);
      END_STATE();
    case 897:
      ACCEPT_TOKEN(anon_sym_equals);
      END_STATE();
    case 898:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 899:
      ACCEPT_TOKEN(anon_sym_notEquals);
      END_STATE();
    case 900:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 901:
      ACCEPT_TOKEN(anon_sym_greaterThan);
      if (lookahead == 'O') ADVANCE(466);
      END_STATE();
    case 902:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 903:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(905);
      END_STATE();
    case 904:
      ACCEPT_TOKEN(anon_sym_greaterThanOrEquals);
      END_STATE();
    case 905:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 906:
      ACCEPT_TOKEN(anon_sym_lessThan);
      if (lookahead == 'O') ADVANCE(435);
      END_STATE();
    case 907:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '/') ADVANCE(928);
      if (lookahead == '=') ADVANCE(912);
      if (lookahead == '?') ADVANCE(918);
      END_STATE();
    case 908:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '/') ADVANCE(928);
      if (lookahead == '?') ADVANCE(918);
      END_STATE();
    case 909:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(912);
      END_STATE();
    case 910:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '?') ADVANCE(918);
      END_STATE();
    case 911:
      ACCEPT_TOKEN(anon_sym_lessThanOrEquals);
      END_STATE();
    case 912:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 913:
      ACCEPT_TOKEN(anon_sym_startsWith);
      END_STATE();
    case 914:
      ACCEPT_TOKEN(anon_sym_endsWith);
      END_STATE();
    case 915:
      ACCEPT_TOKEN(anon_sym_contains);
      END_STATE();
    case 916:
      ACCEPT_TOKEN(anon_sym_matches);
      END_STATE();
    case 917:
      ACCEPT_TOKEN(anon_sym_includes);
      END_STATE();
    case 918:
      ACCEPT_TOKEN(anon_sym_LT_QMARK);
      END_STATE();
    case 919:
      ACCEPT_TOKEN(aux_sym_xml_prolog_tag_token1);
      if (lookahead == '\n') ADVANCE(921);
      if (lookahead == '?') ADVANCE(1070);
      if (lookahead != 0) ADVANCE(919);
      END_STATE();
    case 920:
      ACCEPT_TOKEN(aux_sym_xml_prolog_tag_token1);
      if (lookahead == '#') ADVANCE(919);
      if (set_contains(extras_character_set_2, 9, lookahead)) ADVANCE(920);
      if (lookahead != 0 &&
          lookahead != '?') ADVANCE(921);
      END_STATE();
    case 921:
      ACCEPT_TOKEN(aux_sym_xml_prolog_tag_token1);
      if (lookahead != 0 &&
          lookahead != '?') ADVANCE(921);
      END_STATE();
    case 922:
      ACCEPT_TOKEN(anon_sym_QMARK_GT);
      END_STATE();
    case 923:
      ACCEPT_TOKEN(aux_sym_xml_self_closing_tag_token1);
      if (lookahead == '\n') ADVANCE(927);
      if (lookahead == '/') ADVANCE(923);
      if (lookahead == '>') ADVANCE(1070);
      if (lookahead != 0) ADVANCE(925);
      END_STATE();
    case 924:
      ACCEPT_TOKEN(aux_sym_xml_self_closing_tag_token1);
      if (lookahead == '/') ADVANCE(924);
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(927);
      END_STATE();
    case 925:
      ACCEPT_TOKEN(aux_sym_xml_open_tag_token1);
      if (lookahead == '\n') ADVANCE(927);
      if (lookahead == '/') ADVANCE(923);
      if (lookahead == '>') ADVANCE(1070);
      if (lookahead != 0) ADVANCE(925);
      END_STATE();
    case 926:
      ACCEPT_TOKEN(aux_sym_xml_open_tag_token1);
      if (lookahead == '#') ADVANCE(925);
      if (lookahead == '/') ADVANCE(924);
      if (lookahead == '>') ADVANCE(927);
      if (lookahead == '?') ADVANCE(927);
      if (set_contains(extras_character_set_2, 9, lookahead)) ADVANCE(926);
      if (lookahead != 0) ADVANCE(927);
      END_STATE();
    case 927:
      ACCEPT_TOKEN(aux_sym_xml_open_tag_token1);
      if (lookahead == '/') ADVANCE(924);
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(927);
      END_STATE();
    case 928:
      ACCEPT_TOKEN(anon_sym_LT_SLASH);
      END_STATE();
    case 929:
      ACCEPT_TOKEN(aux_sym_xml_close_tag_token1);
      if (lookahead == '\n') ADVANCE(931);
      if (lookahead == '/' ||
          lookahead == '>') ADVANCE(1070);
      if (lookahead != 0) ADVANCE(929);
      END_STATE();
    case 930:
      ACCEPT_TOKEN(aux_sym_xml_close_tag_token1);
      if (lookahead == '#') ADVANCE(929);
      if (set_contains(extras_character_set_2, 9, lookahead)) ADVANCE(930);
      if (lookahead != 0 &&
          lookahead != '/' &&
          lookahead != '>') ADVANCE(931);
      END_STATE();
    case 931:
      ACCEPT_TOKEN(aux_sym_xml_close_tag_token1);
      if (lookahead != 0 &&
          lookahead != '/' &&
          lookahead != '>') ADVANCE(931);
      END_STATE();
    case 932:
      ACCEPT_TOKEN(anon_sym_base64_COMMA);
      END_STATE();
    case 933:
      ACCEPT_TOKEN(aux_sym_oneline_base64_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(933);
      if (lookahead == '+' ||
          ('/' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 934:
      ACCEPT_TOKEN(aux_sym_oneline_base64_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '+' ||
          ('/' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 935:
      ACCEPT_TOKEN(anon_sym_hex_COMMA);
      END_STATE();
    case 936:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 937:
      ACCEPT_TOKEN(sym_quoted_string_text);
      if (lookahead == '\n') ADVANCE(940);
      if (lookahead == '"' ||
          lookahead == '\\') ADVANCE(1070);
      if (lookahead != 0) ADVANCE(937);
      END_STATE();
    case 938:
      ACCEPT_TOKEN(sym_quoted_string_text);
      if (lookahead == '#') ADVANCE(937);
      if (lookahead == '{') ADVANCE(939);
      if (set_contains(extras_character_set_2, 9, lookahead)) ADVANCE(938);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(940);
      END_STATE();
    case 939:
      ACCEPT_TOKEN(sym_quoted_string_text);
      if (lookahead == '{') ADVANCE(1042);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(940);
      END_STATE();
    case 940:
      ACCEPT_TOKEN(sym_quoted_string_text);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(940);
      END_STATE();
    case 941:
      ACCEPT_TOKEN(aux_sym_invalid_quoted_string_escaped_char_token1);
      END_STATE();
    case 942:
      ACCEPT_TOKEN(aux_sym_invalid_quoted_string_escaped_char_token1);
      if (lookahead == '#') ADVANCE(943);
      if (lookahead == 'b') ADVANCE(821);
      if (lookahead == 'f') ADVANCE(822);
      if (lookahead == 'n') ADVANCE(823);
      if (lookahead == 'r') ADVANCE(824);
      if (lookahead == 't') ADVANCE(825);
      if ((set_contains(extras_character_set_2, 9, lookahead)) &&
          lookahead != '\t' &&
          lookahead != '\f' &&
          lookahead != '\r') ADVANCE(942);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '\\' &&
          lookahead != 't' &&
          lookahead != 'u') ADVANCE(941);
      END_STATE();
    case 943:
      ACCEPT_TOKEN(aux_sym_invalid_quoted_string_escaped_char_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1070);
      END_STATE();
    case 944:
      ACCEPT_TOKEN(aux_sym_key_string_text_token1);
      END_STATE();
    case 945:
      ACCEPT_TOKEN(aux_sym_key_string_text_token1);
      if (lookahead == ',') ADVANCE(935);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(969);
      END_STATE();
    case 946:
      ACCEPT_TOKEN(aux_sym_key_string_text_token1);
      if (lookahead == ',') ADVANCE(812);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(969);
      END_STATE();
    case 947:
      ACCEPT_TOKEN(aux_sym_key_string_text_token1);
      if (lookahead == ',') ADVANCE(932);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(969);
      END_STATE();
    case 948:
      ACCEPT_TOKEN(aux_sym_key_string_text_token1);
      if (lookahead == '0') ADVANCE(1036);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1037);
      END_STATE();
    case 949:
      ACCEPT_TOKEN(aux_sym_key_string_text_token1);
      if (lookahead == '4') ADVANCE(947);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(969);
      END_STATE();
    case 950:
      ACCEPT_TOKEN(aux_sym_key_string_text_token1);
      if (lookahead == '6') ADVANCE(949);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(969);
      END_STATE();
    case 951:
      ACCEPT_TOKEN(aux_sym_key_string_text_token1);
      if (lookahead == 'a') ADVANCE(964);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(969);
      END_STATE();
    case 952:
      ACCEPT_TOKEN(aux_sym_key_string_text_token1);
      if (lookahead == 'a') ADVANCE(962);
      if (lookahead == 'i') ADVANCE(960);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(969);
      END_STATE();
    case 953:
      ACCEPT_TOKEN(aux_sym_key_string_text_token1);
      if (lookahead == 'a') ADVANCE(962);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(969);
      END_STATE();
    case 954:
      ACCEPT_TOKEN(aux_sym_key_string_text_token1);
      if (lookahead == 'e') ADVANCE(968);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(969);
      END_STATE();
    case 955:
      ACCEPT_TOKEN(aux_sym_key_string_text_token1);
      if (lookahead == 'e') ADVANCE(950);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(969);
      END_STATE();
    case 956:
      ACCEPT_TOKEN(aux_sym_key_string_text_token1);
      if (lookahead == 'e') ADVANCE(971);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(969);
      END_STATE();
    case 957:
      ACCEPT_TOKEN(aux_sym_key_string_text_token1);
      if (lookahead == 'e') ADVANCE(973);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(969);
      END_STATE();
    case 958:
      ACCEPT_TOKEN(aux_sym_key_string_text_token1);
      if (lookahead == 'e') ADVANCE(946);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(969);
      END_STATE();
    case 959:
      ACCEPT_TOKEN(aux_sym_key_string_text_token1);
      if (lookahead == 'l') ADVANCE(811);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(969);
      END_STATE();
    case 960:
      ACCEPT_TOKEN(aux_sym_key_string_text_token1);
      if (lookahead == 'l') ADVANCE(958);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(969);
      END_STATE();
    case 961:
      ACCEPT_TOKEN(aux_sym_key_string_text_token1);
      if (lookahead == 'l') ADVANCE(959);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(969);
      END_STATE();
    case 962:
      ACCEPT_TOKEN(aux_sym_key_string_text_token1);
      if (lookahead == 'l') ADVANCE(965);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(969);
      END_STATE();
    case 963:
      ACCEPT_TOKEN(aux_sym_key_string_text_token1);
      if (lookahead == 'r') ADVANCE(967);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(969);
      END_STATE();
    case 964:
      ACCEPT_TOKEN(aux_sym_key_string_text_token1);
      if (lookahead == 's') ADVANCE(955);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(969);
      END_STATE();
    case 965:
      ACCEPT_TOKEN(aux_sym_key_string_text_token1);
      if (lookahead == 's') ADVANCE(957);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(969);
      END_STATE();
    case 966:
      ACCEPT_TOKEN(aux_sym_key_string_text_token1);
      if (lookahead == 'u') ADVANCE(961);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(969);
      END_STATE();
    case 967:
      ACCEPT_TOKEN(aux_sym_key_string_text_token1);
      if (lookahead == 'u') ADVANCE(956);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(969);
      END_STATE();
    case 968:
      ACCEPT_TOKEN(aux_sym_key_string_text_token1);
      if (lookahead == 'x') ADVANCE(945);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(969);
      END_STATE();
    case 969:
      ACCEPT_TOKEN(aux_sym_key_string_text_token1);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(969);
      END_STATE();
    case 970:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 971:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(969);
      END_STATE();
    case 972:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 973:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(969);
      END_STATE();
    case 974:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 975:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == 'A') ADVANCE(485);
      if (lookahead == 'B') ADVANCE(104);
      if (lookahead == 'C') ADVANCE(135);
      if (lookahead == 'F') ADVANCE(372);
      if (lookahead == 'M') ADVANCE(563);
      if (lookahead == 'O') ADVANCE(408);
      if (lookahead == 'Q') ADVANCE(564);
      END_STATE();
    case 976:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == 'A') ADVANCE(485);
      if (lookahead == 'C') ADVANCE(134);
      END_STATE();
    case 977:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == 'B') ADVANCE(104);
      if (lookahead == 'C') ADVANCE(378);
      if (lookahead == 'F') ADVANCE(372);
      if (lookahead == 'M') ADVANCE(563);
      if (lookahead == 'O') ADVANCE(408);
      if (lookahead == 'Q') ADVANCE(564);
      END_STATE();
    case 978:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 979:
      ACCEPT_TOKEN(aux_sym_value_string_text_token1);
      END_STATE();
    case 980:
      ACCEPT_TOKEN(aux_sym_value_string_text_token1);
      if (lookahead == '\n') ADVANCE(628);
      if (lookahead == '-') ADVANCE(1060);
      if (lookahead == 'f') ADVANCE(985);
      if (lookahead == 'n') ADVANCE(987);
      if (lookahead == 't') ADVANCE(986);
      if (lookahead == '{') ADVANCE(988);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(979);
      if (set_contains(extras_character_set_2, 9, lookahead)) ADVANCE(980);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(979);
      END_STATE();
    case 981:
      ACCEPT_TOKEN(aux_sym_value_string_text_token1);
      if (lookahead == '\n') ADVANCE(631);
      if (lookahead == '{') ADVANCE(988);
      if (set_contains(extras_character_set_2, 9, lookahead)) ADVANCE(981);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(979);
      END_STATE();
    case 982:
      ACCEPT_TOKEN(aux_sym_value_string_text_token1);
      if (lookahead == '\n') ADVANCE(634);
      if (lookahead == '-') ADVANCE(1060);
      if (lookahead == 'f') ADVANCE(984);
      if (lookahead == 'n') ADVANCE(987);
      if (lookahead == 't') ADVANCE(986);
      if (lookahead == '{') ADVANCE(988);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(979);
      if (set_contains(extras_character_set_2, 9, lookahead)) ADVANCE(982);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(979);
      END_STATE();
    case 983:
      ACCEPT_TOKEN(aux_sym_value_string_text_token1);
      if (lookahead == '<') ADVANCE(908);
      if (lookahead == '{') ADVANCE(988);
      if (set_contains(extras_character_set_1, 10, lookahead)) ADVANCE(983);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(979);
      END_STATE();
    case 984:
      ACCEPT_TOKEN(aux_sym_value_string_text_token1);
      if (lookahead == 'a') ADVANCE(318);
      END_STATE();
    case 985:
      ACCEPT_TOKEN(aux_sym_value_string_text_token1);
      if (lookahead == 'a') ADVANCE(318);
      if (lookahead == 'i') ADVANCE(316);
      END_STATE();
    case 986:
      ACCEPT_TOKEN(aux_sym_value_string_text_token1);
      if (lookahead == 'r') ADVANCE(571);
      END_STATE();
    case 987:
      ACCEPT_TOKEN(aux_sym_value_string_text_token1);
      if (lookahead == 'u') ADVANCE(315);
      END_STATE();
    case 988:
      ACCEPT_TOKEN(aux_sym_value_string_text_token1);
      if (lookahead == '{') ADVANCE(1040);
      END_STATE();
    case 989:
      ACCEPT_TOKEN(aux_sym_value_string_text_token1);
      if (lookahead == '{') ADVANCE(988);
      if (set_contains(extras_character_set_1, 10, lookahead)) ADVANCE(989);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(979);
      END_STATE();
    case 990:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 991:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      if (lookahead == '`') ADVANCE(95);
      END_STATE();
    case 992:
      ACCEPT_TOKEN(sym_oneline_string_text);
      if (lookahead == '\n') SKIP(10);
      if (lookahead == '#') ADVANCE(1070);
      if (lookahead == '\\') ADVANCE(566);
      if (lookahead == '`') ADVANCE(990);
      if (lookahead == '{') ADVANCE(993);
      if (set_contains(extras_character_set_2, 9, lookahead)) ADVANCE(992);
      if (lookahead != 0) ADVANCE(994);
      END_STATE();
    case 993:
      ACCEPT_TOKEN(sym_oneline_string_text);
      if (lookahead == '{') ADVANCE(1040);
      END_STATE();
    case 994:
      ACCEPT_TOKEN(sym_oneline_string_text);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != '{') ADVANCE(994);
      END_STATE();
    case 995:
      ACCEPT_TOKEN(sym_oneline_string_escaped_char);
      END_STATE();
    case 996:
      ACCEPT_TOKEN(anon_sym_BQUOTE_BQUOTE_BQUOTE);
      END_STATE();
    case 997:
      ACCEPT_TOKEN(anon_sym_base64);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1021);
      END_STATE();
    case 998:
      ACCEPT_TOKEN(anon_sym_hex);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1021);
      END_STATE();
    case 999:
      ACCEPT_TOKEN(anon_sym_json);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1021);
      END_STATE();
    case 1000:
      ACCEPT_TOKEN(anon_sym_xml);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1021);
      END_STATE();
    case 1001:
      ACCEPT_TOKEN(anon_sym_graphql);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1021);
      END_STATE();
    case 1002:
      ACCEPT_TOKEN(aux_sym_multiline_string_type_token1);
      if (lookahead == '\n') ADVANCE(633);
      if (lookahead == '#') ADVANCE(1021);
      if (lookahead == 'b') ADVANCE(1006);
      if (lookahead == 'g') ADVANCE(1017);
      if (lookahead == 'h') ADVANCE(1007);
      if (lookahead == 'j') ADVANCE(1018);
      if (lookahead == 'x') ADVANCE(1012);
      if (set_contains(extras_character_set_2, 9, lookahead)) ADVANCE(1002);
      if (lookahead != 0) ADVANCE(1021);
      END_STATE();
    case 1003:
      ACCEPT_TOKEN(aux_sym_multiline_string_type_token1);
      if (lookahead == '4') ADVANCE(997);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1021);
      END_STATE();
    case 1004:
      ACCEPT_TOKEN(aux_sym_multiline_string_type_token1);
      if (lookahead == '6') ADVANCE(1003);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1021);
      END_STATE();
    case 1005:
      ACCEPT_TOKEN(aux_sym_multiline_string_type_token1);
      if (lookahead == 'a') ADVANCE(1015);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1021);
      END_STATE();
    case 1006:
      ACCEPT_TOKEN(aux_sym_multiline_string_type_token1);
      if (lookahead == 'a') ADVANCE(1019);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1021);
      END_STATE();
    case 1007:
      ACCEPT_TOKEN(aux_sym_multiline_string_type_token1);
      if (lookahead == 'e') ADVANCE(1020);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1021);
      END_STATE();
    case 1008:
      ACCEPT_TOKEN(aux_sym_multiline_string_type_token1);
      if (lookahead == 'e') ADVANCE(1004);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1021);
      END_STATE();
    case 1009:
      ACCEPT_TOKEN(aux_sym_multiline_string_type_token1);
      if (lookahead == 'h') ADVANCE(1016);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1021);
      END_STATE();
    case 1010:
      ACCEPT_TOKEN(aux_sym_multiline_string_type_token1);
      if (lookahead == 'l') ADVANCE(1000);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1021);
      END_STATE();
    case 1011:
      ACCEPT_TOKEN(aux_sym_multiline_string_type_token1);
      if (lookahead == 'l') ADVANCE(1001);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1021);
      END_STATE();
    case 1012:
      ACCEPT_TOKEN(aux_sym_multiline_string_type_token1);
      if (lookahead == 'm') ADVANCE(1010);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1021);
      END_STATE();
    case 1013:
      ACCEPT_TOKEN(aux_sym_multiline_string_type_token1);
      if (lookahead == 'n') ADVANCE(999);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1021);
      END_STATE();
    case 1014:
      ACCEPT_TOKEN(aux_sym_multiline_string_type_token1);
      if (lookahead == 'o') ADVANCE(1013);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1021);
      END_STATE();
    case 1015:
      ACCEPT_TOKEN(aux_sym_multiline_string_type_token1);
      if (lookahead == 'p') ADVANCE(1009);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1021);
      END_STATE();
    case 1016:
      ACCEPT_TOKEN(aux_sym_multiline_string_type_token1);
      if (lookahead == 'q') ADVANCE(1011);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1021);
      END_STATE();
    case 1017:
      ACCEPT_TOKEN(aux_sym_multiline_string_type_token1);
      if (lookahead == 'r') ADVANCE(1005);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1021);
      END_STATE();
    case 1018:
      ACCEPT_TOKEN(aux_sym_multiline_string_type_token1);
      if (lookahead == 's') ADVANCE(1014);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1021);
      END_STATE();
    case 1019:
      ACCEPT_TOKEN(aux_sym_multiline_string_type_token1);
      if (lookahead == 's') ADVANCE(1008);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1021);
      END_STATE();
    case 1020:
      ACCEPT_TOKEN(aux_sym_multiline_string_type_token1);
      if (lookahead == 'x') ADVANCE(998);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1021);
      END_STATE();
    case 1021:
      ACCEPT_TOKEN(aux_sym_multiline_string_type_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1021);
      END_STATE();
    case 1022:
      ACCEPT_TOKEN(sym__multiline_string_text);
      if (lookahead == '\n') ADVANCE(632);
      if (lookahead == '#') ADVANCE(1069);
      if (lookahead == '\\') ADVANCE(820);
      if (lookahead == '`') ADVANCE(1023);
      if (lookahead == '{') ADVANCE(1024);
      if (set_contains(extras_character_set_2, 9, lookahead)) ADVANCE(1022);
      if (lookahead != 0) ADVANCE(1025);
      END_STATE();
    case 1023:
      ACCEPT_TOKEN(sym__multiline_string_text);
      if (lookahead == '`') ADVANCE(95);
      END_STATE();
    case 1024:
      ACCEPT_TOKEN(sym__multiline_string_text);
      if (lookahead == '{') ADVANCE(1040);
      END_STATE();
    case 1025:
      ACCEPT_TOKEN(sym__multiline_string_text);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != '{') ADVANCE(1025);
      END_STATE();
    case 1026:
      ACCEPT_TOKEN(sym_filename_text);
      if (lookahead == '\n') ADVANCE(629);
      if (lookahead == '{') ADVANCE(1028);
      if ((set_contains(extras_character_set_2, 9, lookahead)) &&
          lookahead != ' ') ADVANCE(1026);
      if (lookahead != 0 &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '\\') ADVANCE(1029);
      END_STATE();
    case 1027:
      ACCEPT_TOKEN(sym_filename_text);
      if (lookahead == '{') ADVANCE(1028);
      if ((set_contains(extras_character_set_1, 10, lookahead)) &&
          lookahead != ' ') ADVANCE(1027);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '\\') ADVANCE(1029);
      END_STATE();
    case 1028:
      ACCEPT_TOKEN(sym_filename_text);
      if (lookahead == '{') ADVANCE(1041);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '\\') ADVANCE(1029);
      END_STATE();
    case 1029:
      ACCEPT_TOKEN(sym_filename_text);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '\\') ADVANCE(1029);
      END_STATE();
    case 1030:
      ACCEPT_TOKEN(aux_sym_filename_escaped_char_token1);
      END_STATE();
    case 1031:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 1032:
      ACCEPT_TOKEN(aux_sym_json_string_text_token1);
      END_STATE();
    case 1033:
      ACCEPT_TOKEN(aux_sym_json_string_text_token1);
      if (lookahead == '#') ADVANCE(1035);
      if (lookahead == '{') ADVANCE(1034);
      if (set_contains(extras_character_set_2, 9, lookahead)) ADVANCE(1033);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(1032);
      END_STATE();
    case 1034:
      ACCEPT_TOKEN(aux_sym_json_string_text_token1);
      if (lookahead == '{') ADVANCE(1040);
      END_STATE();
    case 1035:
      ACCEPT_TOKEN(aux_sym_json_string_text_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1070);
      END_STATE();
    case 1036:
      ACCEPT_TOKEN(sym__json_number);
      if (lookahead == '.') ADVANCE(615);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(614);
      END_STATE();
    case 1037:
      ACCEPT_TOKEN(sym__json_number);
      if (lookahead == '.') ADVANCE(615);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(614);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1037);
      END_STATE();
    case 1038:
      ACCEPT_TOKEN(sym__json_number);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(614);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1038);
      END_STATE();
    case 1039:
      ACCEPT_TOKEN(sym__json_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1039);
      END_STATE();
    case 1040:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      END_STATE();
    case 1041:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '\\') ADVANCE(1029);
      END_STATE();
    case 1042:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(940);
      END_STATE();
    case 1043:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 1044:
      ACCEPT_TOKEN(aux_sym_variable_name_token1);
      END_STATE();
    case 1045:
      ACCEPT_TOKEN(aux_sym_variable_name_token2);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1045);
      END_STATE();
    case 1046:
      ACCEPT_TOKEN(anon_sym_count);
      END_STATE();
    case 1047:
      ACCEPT_TOKEN(anon_sym_urlEncode);
      END_STATE();
    case 1048:
      ACCEPT_TOKEN(anon_sym_urlDecode);
      END_STATE();
    case 1049:
      ACCEPT_TOKEN(anon_sym_toInt);
      END_STATE();
    case 1050:
      ACCEPT_TOKEN(anon_sym_htmlEscape);
      END_STATE();
    case 1051:
      ACCEPT_TOKEN(anon_sym_htmlUnescape);
      END_STATE();
    case 1052:
      ACCEPT_TOKEN(anon_sym_daysAfterNow);
      END_STATE();
    case 1053:
      ACCEPT_TOKEN(anon_sym_daysBeforeNow);
      END_STATE();
    case 1054:
      ACCEPT_TOKEN(anon_sym_decode);
      END_STATE();
    case 1055:
      ACCEPT_TOKEN(anon_sym_format);
      END_STATE();
    case 1056:
      ACCEPT_TOKEN(anon_sym_toDate);
      END_STATE();
    case 1057:
      ACCEPT_TOKEN(anon_sym_nth);
      END_STATE();
    case 1058:
      ACCEPT_TOKEN(anon_sym_replace);
      END_STATE();
    case 1059:
      ACCEPT_TOKEN(anon_sym_split);
      END_STATE();
    case 1060:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 1061:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '0') ADVANCE(1036);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1037);
      END_STATE();
    case 1062:
      ACCEPT_TOKEN(aux_sym_digit_token1);
      END_STATE();
    case 1063:
      ACCEPT_TOKEN(aux_sym_hexdigit_token1);
      END_STATE();
    case 1064:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 1065:
      ACCEPT_TOKEN(anon_sym_e);
      END_STATE();
    case 1066:
      ACCEPT_TOKEN(anon_sym_E);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(785);
      END_STATE();
    case 1067:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 1068:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '/' ||
          lookahead == '\\') ADVANCE(1070);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1068);
      END_STATE();
    case 1069:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\' ||
          lookahead == '`' ||
          lookahead == '{') ADVANCE(1070);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1069);
      END_STATE();
    case 1070:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1070);
      END_STATE();
    case 1071:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 1072:
      ACCEPT_TOKEN(sym_regex_text);
      if (lookahead == '#') ADVANCE(1068);
      if (set_contains(extras_character_set_1, 10, lookahead)) ADVANCE(1072);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '/' &&
          lookahead != '\\') ADVANCE(1073);
      END_STATE();
    case 1073:
      ACCEPT_TOKEN(sym_regex_text);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '/' &&
          lookahead != '\\') ADVANCE(1073);
      END_STATE();
    case 1074:
      ACCEPT_TOKEN(aux_sym_regex_escaped_char_token1);
      END_STATE();
    case 1075:
      ACCEPT_TOKEN(aux_sym_regex_escaped_char_token1);
      if (lookahead == '#') ADVANCE(1070);
      if (set_contains(extras_character_set_1, 10, lookahead)) ADVANCE(1075);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(1074);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 621},
  [2] = {.lex_state = 622},
  [3] = {.lex_state = 622},
  [4] = {.lex_state = 622},
  [5] = {.lex_state = 623},
  [6] = {.lex_state = 623},
  [7] = {.lex_state = 623},
  [8] = {.lex_state = 623},
  [9] = {.lex_state = 622},
  [10] = {.lex_state = 622},
  [11] = {.lex_state = 622},
  [12] = {.lex_state = 622},
  [13] = {.lex_state = 622},
  [14] = {.lex_state = 622},
  [15] = {.lex_state = 624},
  [16] = {.lex_state = 624},
  [17] = {.lex_state = 625},
  [18] = {.lex_state = 625},
  [19] = {.lex_state = 623},
  [20] = {.lex_state = 623},
  [21] = {.lex_state = 623},
  [22] = {.lex_state = 623},
  [23] = {.lex_state = 623},
  [24] = {.lex_state = 623},
  [25] = {.lex_state = 623},
  [26] = {.lex_state = 623},
  [27] = {.lex_state = 623},
  [28] = {.lex_state = 623},
  [29] = {.lex_state = 623},
  [30] = {.lex_state = 623},
  [31] = {.lex_state = 623},
  [32] = {.lex_state = 621},
  [33] = {.lex_state = 621},
  [34] = {.lex_state = 621},
  [35] = {.lex_state = 621},
  [36] = {.lex_state = 621},
  [37] = {.lex_state = 622},
  [38] = {.lex_state = 625},
  [39] = {.lex_state = 623},
  [40] = {.lex_state = 623},
  [41] = {.lex_state = 623},
  [42] = {.lex_state = 623},
  [43] = {.lex_state = 625},
  [44] = {.lex_state = 621},
  [45] = {.lex_state = 625},
  [46] = {.lex_state = 621},
  [47] = {.lex_state = 624},
  [48] = {.lex_state = 625},
  [49] = {.lex_state = 624},
  [50] = {.lex_state = 621},
  [51] = {.lex_state = 624},
  [52] = {.lex_state = 622},
  [53] = {.lex_state = 624},
  [54] = {.lex_state = 622},
  [55] = {.lex_state = 621},
  [56] = {.lex_state = 625},
  [57] = {.lex_state = 625},
  [58] = {.lex_state = 625},
  [59] = {.lex_state = 625},
  [60] = {.lex_state = 625},
  [61] = {.lex_state = 625},
  [62] = {.lex_state = 625},
  [63] = {.lex_state = 625},
  [64] = {.lex_state = 625},
  [65] = {.lex_state = 625},
  [66] = {.lex_state = 625},
  [67] = {.lex_state = 625},
  [68] = {.lex_state = 625},
  [69] = {.lex_state = 625},
  [70] = {.lex_state = 625},
  [71] = {.lex_state = 625},
  [72] = {.lex_state = 625},
  [73] = {.lex_state = 625},
  [74] = {.lex_state = 625},
  [75] = {.lex_state = 625},
  [76] = {.lex_state = 625},
  [77] = {.lex_state = 625},
  [78] = {.lex_state = 625},
  [79] = {.lex_state = 624},
  [80] = {.lex_state = 621},
  [81] = {.lex_state = 624},
  [82] = {.lex_state = 624},
  [83] = {.lex_state = 624},
  [84] = {.lex_state = 624},
  [85] = {.lex_state = 621},
  [86] = {.lex_state = 622, .external_lex_state = 1},
  [87] = {.lex_state = 622, .external_lex_state = 1},
  [88] = {.lex_state = 622},
  [89] = {.lex_state = 622},
  [90] = {.lex_state = 18},
  [91] = {.lex_state = 622, .external_lex_state = 1},
  [92] = {.lex_state = 621},
  [93] = {.lex_state = 625},
  [94] = {.lex_state = 621},
  [95] = {.lex_state = 625},
  [96] = {.lex_state = 622},
  [97] = {.lex_state = 622},
  [98] = {.lex_state = 622},
  [99] = {.lex_state = 622},
  [100] = {.lex_state = 622},
  [101] = {.lex_state = 2, .external_lex_state = 1},
  [102] = {.lex_state = 6, .external_lex_state = 1},
  [103] = {.lex_state = 621},
  [104] = {.lex_state = 621},
  [105] = {.lex_state = 1, .external_lex_state = 1},
  [106] = {.lex_state = 1, .external_lex_state = 1},
  [107] = {.lex_state = 1, .external_lex_state = 1},
  [108] = {.lex_state = 625},
  [109] = {.lex_state = 621},
  [110] = {.lex_state = 625},
  [111] = {.lex_state = 2, .external_lex_state = 1},
  [112] = {.lex_state = 2, .external_lex_state = 1},
  [113] = {.lex_state = 625},
  [114] = {.lex_state = 625},
  [115] = {.lex_state = 17, .external_lex_state = 1},
  [116] = {.lex_state = 625},
  [117] = {.lex_state = 621},
  [118] = {.lex_state = 3, .external_lex_state = 1},
  [119] = {.lex_state = 3, .external_lex_state = 1},
  [120] = {.lex_state = 621},
  [121] = {.lex_state = 621},
  [122] = {.lex_state = 621},
  [123] = {.lex_state = 20},
  [124] = {.lex_state = 621},
  [125] = {.lex_state = 621},
  [126] = {.lex_state = 621},
  [127] = {.lex_state = 621},
  [128] = {.lex_state = 621},
  [129] = {.lex_state = 621},
  [130] = {.lex_state = 621},
  [131] = {.lex_state = 621},
  [132] = {.lex_state = 621},
  [133] = {.lex_state = 19},
  [134] = {.lex_state = 622, .external_lex_state = 1},
  [135] = {.lex_state = 26},
  [136] = {.lex_state = 622, .external_lex_state = 1},
  [137] = {.lex_state = 622, .external_lex_state = 1},
  [138] = {.lex_state = 19},
  [139] = {.lex_state = 622, .external_lex_state = 1},
  [140] = {.lex_state = 1, .external_lex_state = 1},
  [141] = {.lex_state = 622, .external_lex_state = 1},
  [142] = {.lex_state = 622, .external_lex_state = 1},
  [143] = {.lex_state = 19},
  [144] = {.lex_state = 622, .external_lex_state = 1},
  [145] = {.lex_state = 622, .external_lex_state = 1},
  [146] = {.lex_state = 622, .external_lex_state = 1},
  [147] = {.lex_state = 1, .external_lex_state = 1},
  [148] = {.lex_state = 622, .external_lex_state = 1},
  [149] = {.lex_state = 622, .external_lex_state = 1},
  [150] = {.lex_state = 622, .external_lex_state = 1},
  [151] = {.lex_state = 622, .external_lex_state = 1},
  [152] = {.lex_state = 622, .external_lex_state = 1},
  [153] = {.lex_state = 622, .external_lex_state = 1},
  [154] = {.lex_state = 622, .external_lex_state = 1},
  [155] = {.lex_state = 622, .external_lex_state = 1},
  [156] = {.lex_state = 622, .external_lex_state = 1},
  [157] = {.lex_state = 622, .external_lex_state = 1},
  [158] = {.lex_state = 622, .external_lex_state = 1},
  [159] = {.lex_state = 19},
  [160] = {.lex_state = 19},
  [161] = {.lex_state = 7},
  [162] = {.lex_state = 7},
  [163] = {.lex_state = 20},
  [164] = {.lex_state = 7},
  [165] = {.lex_state = 20},
  [166] = {.lex_state = 7},
  [167] = {.lex_state = 14, .external_lex_state = 1},
  [168] = {.lex_state = 1, .external_lex_state = 1},
  [169] = {.lex_state = 7},
  [170] = {.lex_state = 20},
  [171] = {.lex_state = 20},
  [172] = {.lex_state = 1, .external_lex_state = 1},
  [173] = {.lex_state = 19},
  [174] = {.lex_state = 19},
  [175] = {.lex_state = 25},
  [176] = {.lex_state = 19},
  [177] = {.lex_state = 14, .external_lex_state = 1},
  [178] = {.lex_state = 14, .external_lex_state = 1},
  [179] = {.lex_state = 1, .external_lex_state = 1},
  [180] = {.lex_state = 1, .external_lex_state = 1},
  [181] = {.lex_state = 1, .external_lex_state = 1},
  [182] = {.lex_state = 1, .external_lex_state = 1},
  [183] = {.lex_state = 1, .external_lex_state = 1},
  [184] = {.lex_state = 1, .external_lex_state = 1},
  [185] = {.lex_state = 1, .external_lex_state = 1},
  [186] = {.lex_state = 1, .external_lex_state = 1},
  [187] = {.lex_state = 1, .external_lex_state = 1},
  [188] = {.lex_state = 1, .external_lex_state = 1},
  [189] = {.lex_state = 1, .external_lex_state = 1},
  [190] = {.lex_state = 1},
  [191] = {.lex_state = 1},
  [192] = {.lex_state = 1, .external_lex_state = 1},
  [193] = {.lex_state = 19},
  [194] = {.lex_state = 19},
  [195] = {.lex_state = 8},
  [196] = {.lex_state = 15},
  [197] = {.lex_state = 22},
  [198] = {.lex_state = 23},
  [199] = {.lex_state = 22},
  [200] = {.lex_state = 23},
  [201] = {.lex_state = 23},
  [202] = {.lex_state = 9, .external_lex_state = 1},
  [203] = {.lex_state = 22},
  [204] = {.lex_state = 9, .external_lex_state = 1},
  [205] = {.lex_state = 19},
  [206] = {.lex_state = 15},
  [207] = {.lex_state = 15},
  [208] = {.lex_state = 23},
  [209] = {.lex_state = 27},
  [210] = {.lex_state = 15},
  [211] = {.lex_state = 27},
  [212] = {.lex_state = 15},
  [213] = {.lex_state = 22},
  [214] = {.lex_state = 23},
  [215] = {.lex_state = 22},
  [216] = {.lex_state = 14, .external_lex_state = 1},
  [217] = {.lex_state = 27},
  [218] = {.lex_state = 14, .external_lex_state = 1},
  [219] = {.lex_state = 24},
  [220] = {.lex_state = 27},
  [221] = {.lex_state = 7},
  [222] = {.lex_state = 27},
  [223] = {.lex_state = 7},
  [224] = {.lex_state = 625},
  [225] = {.lex_state = 625},
  [226] = {.lex_state = 16},
  [227] = {.lex_state = 10},
  [228] = {.lex_state = 625},
  [229] = {.lex_state = 625},
  [230] = {.lex_state = 10},
  [231] = {.lex_state = 625},
  [232] = {.lex_state = 4, .external_lex_state = 1},
  [233] = {.lex_state = 21},
  [234] = {.lex_state = 10},
  [235] = {.lex_state = 21},
  [236] = {.lex_state = 25},
  [237] = {.lex_state = 625},
  [238] = {.lex_state = 625},
  [239] = {.lex_state = 625},
  [240] = {.lex_state = 23},
  [241] = {.lex_state = 9, .external_lex_state = 1},
  [242] = {.lex_state = 18},
  [243] = {.lex_state = 29},
  [244] = {.lex_state = 15},
  [245] = {.lex_state = 18},
  [246] = {.lex_state = 9, .external_lex_state = 1},
  [247] = {.lex_state = 15},
  [248] = {.lex_state = 18},
  [249] = {.lex_state = 23},
  [250] = {.lex_state = 7},
  [251] = {.lex_state = 14, .external_lex_state = 1},
  [252] = {.lex_state = 625},
  [253] = {.lex_state = 625},
  [254] = {.lex_state = 11, .external_lex_state = 1},
  [255] = {.lex_state = 11, .external_lex_state = 1},
  [256] = {.lex_state = 4, .external_lex_state = 1},
  [257] = {.lex_state = 12},
  [258] = {.lex_state = 621, .external_lex_state = 1},
  [259] = {.lex_state = 621, .external_lex_state = 1},
  [260] = {.lex_state = 7},
  [261] = {.lex_state = 621, .external_lex_state = 1},
  [262] = {.lex_state = 621, .external_lex_state = 1},
  [263] = {.lex_state = 12},
  [264] = {.lex_state = 621, .external_lex_state = 1},
  [265] = {.lex_state = 621, .external_lex_state = 1},
  [266] = {.lex_state = 621, .external_lex_state = 1},
  [267] = {.lex_state = 621, .external_lex_state = 1},
  [268] = {.lex_state = 27},
  [269] = {.lex_state = 621, .external_lex_state = 1},
  [270] = {.lex_state = 14, .external_lex_state = 1},
  [271] = {.lex_state = 621, .external_lex_state = 1},
  [272] = {.lex_state = 625},
  [273] = {.lex_state = 625},
  [274] = {.lex_state = 27},
  [275] = {.lex_state = 7},
  [276] = {.lex_state = 621, .external_lex_state = 1},
  [277] = {.lex_state = 621, .external_lex_state = 1},
  [278] = {.lex_state = 625},
  [279] = {.lex_state = 621, .external_lex_state = 1},
  [280] = {.lex_state = 7},
  [281] = {.lex_state = 621, .external_lex_state = 1},
  [282] = {.lex_state = 621, .external_lex_state = 1},
  [283] = {.lex_state = 621, .external_lex_state = 1},
  [284] = {.lex_state = 15},
  [285] = {.lex_state = 621, .external_lex_state = 1},
  [286] = {.lex_state = 15},
  [287] = {.lex_state = 7},
  [288] = {.lex_state = 621, .external_lex_state = 1},
  [289] = {.lex_state = 14, .external_lex_state = 1},
  [290] = {.lex_state = 621, .external_lex_state = 1},
  [291] = {.lex_state = 9, .external_lex_state = 1},
  [292] = {.lex_state = 14, .external_lex_state = 1},
  [293] = {.lex_state = 621, .external_lex_state = 1},
  [294] = {.lex_state = 14, .external_lex_state = 1},
  [295] = {.lex_state = 14, .external_lex_state = 1},
  [296] = {.lex_state = 621, .external_lex_state = 1},
  [297] = {.lex_state = 621, .external_lex_state = 1},
  [298] = {.lex_state = 7},
  [299] = {.lex_state = 621, .external_lex_state = 1},
  [300] = {.lex_state = 22},
  [301] = {.lex_state = 621, .external_lex_state = 1},
  [302] = {.lex_state = 621, .external_lex_state = 1},
  [303] = {.lex_state = 7},
  [304] = {.lex_state = 12},
  [305] = {.lex_state = 7},
  [306] = {.lex_state = 625},
  [307] = {.lex_state = 7},
  [308] = {.lex_state = 15},
  [309] = {.lex_state = 621, .external_lex_state = 1},
  [310] = {.lex_state = 621, .external_lex_state = 1},
  [311] = {.lex_state = 22},
  [312] = {.lex_state = 7},
  [313] = {.lex_state = 15},
  [314] = {.lex_state = 15},
  [315] = {.lex_state = 9, .external_lex_state = 1},
  [316] = {.lex_state = 12},
  [317] = {.lex_state = 15},
  [318] = {.lex_state = 625},
  [319] = {.lex_state = 621, .external_lex_state = 1},
  [320] = {.lex_state = 2, .external_lex_state = 1},
  [321] = {.lex_state = 15},
  [322] = {.lex_state = 621, .external_lex_state = 1},
  [323] = {.lex_state = 10},
  [324] = {.lex_state = 14, .external_lex_state = 1},
  [325] = {.lex_state = 14, .external_lex_state = 1},
  [326] = {.lex_state = 10},
  [327] = {.lex_state = 621, .external_lex_state = 1},
  [328] = {.lex_state = 621, .external_lex_state = 1},
  [329] = {.lex_state = 11, .external_lex_state = 1},
  [330] = {.lex_state = 18},
  [331] = {.lex_state = 621, .external_lex_state = 1},
  [332] = {.lex_state = 27},
  [333] = {.lex_state = 621, .external_lex_state = 1},
  [334] = {.lex_state = 22},
  [335] = {.lex_state = 621, .external_lex_state = 1},
  [336] = {.lex_state = 621, .external_lex_state = 1},
  [337] = {.lex_state = 621, .external_lex_state = 1},
  [338] = {.lex_state = 625},
  [339] = {.lex_state = 621, .external_lex_state = 1},
  [340] = {.lex_state = 625},
  [341] = {.lex_state = 621, .external_lex_state = 1},
  [342] = {.lex_state = 621, .external_lex_state = 1},
  [343] = {.lex_state = 625},
  [344] = {.lex_state = 28},
  [345] = {.lex_state = 22},
  [346] = {.lex_state = 625},
  [347] = {.lex_state = 18},
  [348] = {.lex_state = 28},
  [349] = {.lex_state = 11, .external_lex_state = 1},
  [350] = {.lex_state = 23},
  [351] = {.lex_state = 625},
  [352] = {.lex_state = 23},
  [353] = {.lex_state = 621, .external_lex_state = 1},
  [354] = {.lex_state = 22},
  [355] = {.lex_state = 10},
  [356] = {.lex_state = 625},
  [357] = {.lex_state = 18},
  [358] = {.lex_state = 23},
  [359] = {.lex_state = 11, .external_lex_state = 1},
  [360] = {.lex_state = 23},
  [361] = {.lex_state = 22},
  [362] = {.lex_state = 22},
  [363] = {.lex_state = 23},
  [364] = {.lex_state = 27},
  [365] = {.lex_state = 625},
  [366] = {.lex_state = 625},
  [367] = {.lex_state = 28},
  [368] = {.lex_state = 25},
  [369] = {.lex_state = 28},
  [370] = {.lex_state = 18},
  [371] = {.lex_state = 625},
  [372] = {.lex_state = 18},
  [373] = {.lex_state = 18},
  [374] = {.lex_state = 25},
  [375] = {.lex_state = 5, .external_lex_state = 1},
  [376] = {.lex_state = 18},
  [377] = {.lex_state = 18},
  [378] = {.lex_state = 26},
  [379] = {.lex_state = 18},
  [380] = {.lex_state = 18},
  [381] = {.lex_state = 18},
  [382] = {.lex_state = 18},
  [383] = {.lex_state = 625},
  [384] = {.lex_state = 18},
  [385] = {.lex_state = 18},
  [386] = {.lex_state = 31},
  [387] = {.lex_state = 18},
  [388] = {.lex_state = 625},
  [389] = {.lex_state = 18},
  [390] = {.lex_state = 625},
  [391] = {.lex_state = 18},
  [392] = {.lex_state = 31},
  [393] = {.lex_state = 12},
  [394] = {.lex_state = 625},
  [395] = {.lex_state = 18},
  [396] = {.lex_state = 625},
  [397] = {.lex_state = 18},
  [398] = {.lex_state = 31},
  [399] = {.lex_state = 625},
  [400] = {.lex_state = 31},
  [401] = {.lex_state = 31},
  [402] = {.lex_state = 31},
  [403] = {.lex_state = 31},
  [404] = {.lex_state = 31},
  [405] = {.lex_state = 625},
  [406] = {.lex_state = 31},
  [407] = {.lex_state = 31},
  [408] = {.lex_state = 5, .external_lex_state = 1},
  [409] = {.lex_state = 31},
  [410] = {.lex_state = 621, .external_lex_state = 1},
  [411] = {.lex_state = 621, .external_lex_state = 1},
  [412] = {.lex_state = 621, .external_lex_state = 1},
  [413] = {.lex_state = 621, .external_lex_state = 1},
  [414] = {.lex_state = 621, .external_lex_state = 1},
  [415] = {.lex_state = 621, .external_lex_state = 1},
  [416] = {.lex_state = 621, .external_lex_state = 1},
  [417] = {.lex_state = 621, .external_lex_state = 1},
  [418] = {.lex_state = 621, .external_lex_state = 1},
  [419] = {.lex_state = 621, .external_lex_state = 1},
  [420] = {.lex_state = 621, .external_lex_state = 1},
  [421] = {.lex_state = 621, .external_lex_state = 1},
  [422] = {.lex_state = 621, .external_lex_state = 1},
  [423] = {.lex_state = 621, .external_lex_state = 1},
  [424] = {.lex_state = 625},
  [425] = {.lex_state = 28},
  [426] = {.lex_state = 28},
  [427] = {.lex_state = 621, .external_lex_state = 1},
  [428] = {.lex_state = 621, .external_lex_state = 1},
  [429] = {.lex_state = 28},
  [430] = {.lex_state = 621, .external_lex_state = 1},
  [431] = {.lex_state = 621, .external_lex_state = 1},
  [432] = {.lex_state = 28},
  [433] = {.lex_state = 28},
  [434] = {.lex_state = 621, .external_lex_state = 1},
  [435] = {.lex_state = 625},
  [436] = {.lex_state = 621, .external_lex_state = 1},
  [437] = {.lex_state = 621, .external_lex_state = 1},
  [438] = {.lex_state = 625},
  [439] = {.lex_state = 621, .external_lex_state = 1},
  [440] = {.lex_state = 621, .external_lex_state = 1},
  [441] = {.lex_state = 621, .external_lex_state = 1},
  [442] = {.lex_state = 28},
  [443] = {.lex_state = 28},
  [444] = {.lex_state = 28},
  [445] = {.lex_state = 625},
  [446] = {.lex_state = 28},
  [447] = {.lex_state = 621, .external_lex_state = 1},
  [448] = {.lex_state = 28},
  [449] = {.lex_state = 621, .external_lex_state = 1},
  [450] = {.lex_state = 18},
  [451] = {.lex_state = 621, .external_lex_state = 1},
  [452] = {.lex_state = 621, .external_lex_state = 1},
  [453] = {.lex_state = 621, .external_lex_state = 1},
  [454] = {.lex_state = 621, .external_lex_state = 1},
  [455] = {.lex_state = 621, .external_lex_state = 1},
  [456] = {.lex_state = 18},
  [457] = {.lex_state = 621, .external_lex_state = 1},
  [458] = {.lex_state = 621, .external_lex_state = 1},
  [459] = {.lex_state = 621, .external_lex_state = 1},
  [460] = {.lex_state = 621, .external_lex_state = 1},
  [461] = {.lex_state = 621, .external_lex_state = 1},
  [462] = {.lex_state = 621, .external_lex_state = 1},
  [463] = {.lex_state = 621, .external_lex_state = 1},
  [464] = {.lex_state = 621, .external_lex_state = 1},
  [465] = {.lex_state = 28},
  [466] = {.lex_state = 621, .external_lex_state = 1},
  [467] = {.lex_state = 28},
  [468] = {.lex_state = 621, .external_lex_state = 1},
  [469] = {.lex_state = 621, .external_lex_state = 1},
  [470] = {.lex_state = 621, .external_lex_state = 1},
  [471] = {.lex_state = 625},
  [472] = {.lex_state = 621, .external_lex_state = 1},
  [473] = {.lex_state = 625},
  [474] = {.lex_state = 625},
  [475] = {.lex_state = 621, .external_lex_state = 1},
  [476] = {.lex_state = 28},
  [477] = {.lex_state = 621, .external_lex_state = 1},
  [478] = {.lex_state = 625},
  [479] = {.lex_state = 621, .external_lex_state = 1},
  [480] = {.lex_state = 621, .external_lex_state = 1},
  [481] = {.lex_state = 28},
  [482] = {.lex_state = 625},
  [483] = {.lex_state = 28},
  [484] = {.lex_state = 625},
  [485] = {.lex_state = 621, .external_lex_state = 1},
  [486] = {.lex_state = 28},
  [487] = {.lex_state = 621, .external_lex_state = 1},
  [488] = {.lex_state = 32},
  [489] = {.lex_state = 625},
  [490] = {.lex_state = 621, .external_lex_state = 1},
  [491] = {.lex_state = 621, .external_lex_state = 1},
  [492] = {.lex_state = 625},
  [493] = {.lex_state = 621, .external_lex_state = 1},
  [494] = {.lex_state = 28},
  [495] = {.lex_state = 621, .external_lex_state = 1},
  [496] = {.lex_state = 28},
  [497] = {.lex_state = 621, .external_lex_state = 1},
  [498] = {.lex_state = 625},
  [499] = {.lex_state = 621, .external_lex_state = 1},
  [500] = {.lex_state = 621, .external_lex_state = 1},
  [501] = {.lex_state = 625},
  [502] = {.lex_state = 621, .external_lex_state = 1},
  [503] = {.lex_state = 621, .external_lex_state = 1},
  [504] = {.lex_state = 26},
  [505] = {.lex_state = 18},
  [506] = {.lex_state = 28},
  [507] = {.lex_state = 625},
  [508] = {.lex_state = 621, .external_lex_state = 1},
  [509] = {.lex_state = 625},
  [510] = {.lex_state = 621, .external_lex_state = 1},
  [511] = {.lex_state = 621, .external_lex_state = 1},
  [512] = {.lex_state = 621, .external_lex_state = 1},
  [513] = {.lex_state = 621, .external_lex_state = 1},
  [514] = {.lex_state = 625},
  [515] = {.lex_state = 621, .external_lex_state = 1},
  [516] = {.lex_state = 621, .external_lex_state = 1},
  [517] = {.lex_state = 0},
  [518] = {.lex_state = 621, .external_lex_state = 1},
  [519] = {.lex_state = 625},
  [520] = {.lex_state = 0},
  [521] = {.lex_state = 621, .external_lex_state = 1},
  [522] = {.lex_state = 621, .external_lex_state = 1},
  [523] = {.lex_state = 625},
  [524] = {.lex_state = 625},
  [525] = {.lex_state = 32},
  [526] = {.lex_state = 625},
  [527] = {.lex_state = 625},
  [528] = {.lex_state = 625},
  [529] = {.lex_state = 621, .external_lex_state = 1},
  [530] = {.lex_state = 28},
  [531] = {.lex_state = 621, .external_lex_state = 1},
  [532] = {.lex_state = 625},
  [533] = {.lex_state = 621, .external_lex_state = 1},
  [534] = {.lex_state = 621, .external_lex_state = 1},
  [535] = {.lex_state = 625},
  [536] = {.lex_state = 625},
  [537] = {.lex_state = 621},
  [538] = {.lex_state = 621},
  [539] = {.lex_state = 625},
  [540] = {.lex_state = 625},
  [541] = {.lex_state = 18},
  [542] = {.lex_state = 625},
  [543] = {.lex_state = 30},
  [544] = {.lex_state = 625},
  [545] = {.lex_state = 33},
  [546] = {.lex_state = 625},
  [547] = {.lex_state = 18},
  [548] = {.lex_state = 34},
  [549] = {.lex_state = 625},
  [550] = {.lex_state = 625},
  [551] = {.lex_state = 625},
  [552] = {.lex_state = 625},
  [553] = {.lex_state = 18},
  [554] = {.lex_state = 625},
  [555] = {.lex_state = 18},
  [556] = {.lex_state = 625},
  [557] = {.lex_state = 18},
  [558] = {.lex_state = 625},
  [559] = {.lex_state = 625},
  [560] = {.lex_state = 625},
  [561] = {.lex_state = 625},
  [562] = {.lex_state = 625},
  [563] = {.lex_state = 18},
  [564] = {.lex_state = 625},
  [565] = {.lex_state = 625},
  [566] = {.lex_state = 33},
  [567] = {.lex_state = 13},
  [568] = {.lex_state = 34},
  [569] = {.lex_state = 18},
  [570] = {.lex_state = 625},
  [571] = {.lex_state = 18},
  [572] = {.lex_state = 18},
  [573] = {.lex_state = 625},
  [574] = {.lex_state = 18},
  [575] = {.lex_state = 625},
  [576] = {.lex_state = 625},
  [577] = {.lex_state = 625},
  [578] = {.lex_state = 28},
  [579] = {.lex_state = 625},
  [580] = {.lex_state = 625},
  [581] = {.lex_state = 625},
  [582] = {.lex_state = 625},
  [583] = {.lex_state = 625},
  [584] = {.lex_state = 1045},
  [585] = {.lex_state = 625},
  [586] = {.lex_state = 625},
  [587] = {.lex_state = 625},
  [588] = {.lex_state = 625},
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
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_BSLASH] = ACTIONS(1),
    [anon_sym_b] = ACTIONS(1),
    [anon_sym_f] = ACTIONS(1),
    [anon_sym_n] = ACTIONS(1),
    [anon_sym_r] = ACTIONS(1),
    [anon_sym_t] = ACTIONS(1),
    [anon_sym_u] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_s] = ACTIONS(1),
    [anon_sym_m] = ACTIONS(1),
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
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_BQUOTE] = ACTIONS(1),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(1),
    [aux_sym_filename_escaped_char_token1] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [sym__json_number] = ACTIONS(1),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(1),
    [aux_sym_variable_name_token1] = ACTIONS(1),
    [sym__alphanum] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [aux_sym_digit_token1] = ACTIONS(1),
    [aux_sym_hexdigit_token1] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_e] = ACTIONS(1),
    [anon_sym_E] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [anon_sym_SLASH] = ACTIONS(1),
    [sym__eof] = ACTIONS(1),
  },
  [1] = {
    [sym_hurl_file] = STATE(550),
    [sym_entry] = STATE(92),
    [sym__comment_or_new_line] = STATE(104),
    [sym_request] = STATE(89),
    [sym_method] = STATE(167),
    [aux_sym_hurl_file_repeat1] = STATE(92),
    [aux_sym_hurl_file_repeat2] = STATE(104),
    [aux_sym__comment_or_new_line_repeat1] = STATE(44),
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
    [sym_option] = STATE(302),
    [sym_ca_certificate_option] = STATE(515),
    [sym_cert_option] = STATE(515),
    [sym_boolean_option] = STATE(515),
    [sym_boolean_option_key] = STATE(562),
    [sym_integer_option] = STATE(515),
    [sym_integer_option_key] = STATE(561),
    [sym_duration_option] = STATE(515),
    [sym_duration_option_key] = STATE(540),
    [sym_string_option] = STATE(515),
    [sym_string_option_key] = STATE(542),
    [sym_variable_option] = STATE(515),
    [aux_sym_options_section_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(13),
    [anon_sym_LF] = ACTIONS(13),
    [anon_sym_GET] = ACTIONS(15),
    [anon_sym_HEAD] = ACTIONS(15),
    [anon_sym_POST] = ACTIONS(15),
    [anon_sym_PUT] = ACTIONS(15),
    [anon_sym_DELETE] = ACTIONS(15),
    [anon_sym_CONNECT] = ACTIONS(15),
    [anon_sym_OPTIONS] = ACTIONS(15),
    [anon_sym_TRACE] = ACTIONS(15),
    [anon_sym_PATCH] = ACTIONS(15),
    [anon_sym_LINK] = ACTIONS(15),
    [anon_sym_UNLINK] = ACTIONS(15),
    [anon_sym_PURGE] = ACTIONS(15),
    [anon_sym_LOCK] = ACTIONS(15),
    [anon_sym_UNLOCK] = ACTIONS(15),
    [anon_sym_PROPFIND] = ACTIONS(15),
    [anon_sym_VIEW] = ACTIONS(15),
    [aux_sym_method_token1] = ACTIONS(15),
    [anon_sym_HTTP_SLASH1_DOT0] = ACTIONS(15),
    [anon_sym_HTTP_SLASH1_DOT1] = ACTIONS(15),
    [anon_sym_HTTP_SLASH2] = ACTIONS(15),
    [anon_sym_HTTP_SLASH3] = ACTIONS(15),
    [anon_sym_HTTP_SLASH_STAR] = ACTIONS(15),
    [anon_sym_HTTP] = ACTIONS(15),
    [anon_sym_LBRACKBasicAuth_RBRACK] = ACTIONS(15),
    [anon_sym_LBRACKQuery_RBRACK] = ACTIONS(15),
    [anon_sym_LBRACKQueryStringParams_RBRACK] = ACTIONS(15),
    [anon_sym_LBRACKForm_RBRACK] = ACTIONS(15),
    [anon_sym_LBRACKFormParams_RBRACK] = ACTIONS(15),
    [anon_sym_LBRACKMultipart_RBRACK] = ACTIONS(15),
    [anon_sym_LBRACKMultipartFormData_RBRACK] = ACTIONS(15),
    [anon_sym_LBRACKCookies_RBRACK] = ACTIONS(15),
    [anon_sym_LBRACKOptions_RBRACK] = ACTIONS(15),
    [anon_sym_null] = ACTIONS(15),
    [anon_sym_file_COMMA] = ACTIONS(15),
    [anon_sym_cacert] = ACTIONS(17),
    [anon_sym_cert] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_compressed] = ACTIONS(21),
    [anon_sym_location] = ACTIONS(21),
    [anon_sym_location_DASHtrusted] = ACTIONS(21),
    [anon_sym_http1_DOT0] = ACTIONS(21),
    [anon_sym_http2] = ACTIONS(21),
    [anon_sym_http3] = ACTIONS(21),
    [anon_sym_insecure] = ACTIONS(21),
    [anon_sym_ipv4] = ACTIONS(21),
    [anon_sym_ipv6] = ACTIONS(21),
    [anon_sym_netrc] = ACTIONS(21),
    [anon_sym_netrc_DASHoptional] = ACTIONS(21),
    [anon_sym_path_DASHas_DASHis] = ACTIONS(21),
    [anon_sym_skip] = ACTIONS(21),
    [anon_sym_verbose] = ACTIONS(21),
    [anon_sym_very_DASHverbose] = ACTIONS(21),
    [anon_sym_max_DASHredirs] = ACTIONS(23),
    [anon_sym_retry_DASHmax_DASHcount] = ACTIONS(23),
    [anon_sym_limit_DASHrate] = ACTIONS(23),
    [anon_sym_max_DASHtime] = ACTIONS(23),
    [anon_sym_repeat] = ACTIONS(23),
    [anon_sym_retry] = ACTIONS(23),
    [anon_sym_connect_DASHtimeout] = ACTIONS(25),
    [anon_sym_delay] = ACTIONS(25),
    [anon_sym_retry_DASHinterval] = ACTIONS(25),
    [anon_sym_aws_DASHsigv4] = ACTIONS(27),
    [anon_sym_key] = ACTIONS(27),
    [anon_sym_connect_DASHto] = ACTIONS(27),
    [anon_sym_header] = ACTIONS(27),
    [anon_sym_netrc_DASHfile] = ACTIONS(27),
    [anon_sym_output] = ACTIONS(27),
    [anon_sym_pinnedpubkey] = ACTIONS(27),
    [anon_sym_proxy] = ACTIONS(27),
    [anon_sym_unix_DASHsocket] = ACTIONS(27),
    [anon_sym_user] = ACTIONS(27),
    [anon_sym_variable] = ACTIONS(29),
    [anon_sym_LT] = ACTIONS(15),
    [anon_sym_LT_QMARK] = ACTIONS(15),
    [anon_sym_base64_COMMA] = ACTIONS(15),
    [anon_sym_hex_COMMA] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [anon_sym_true] = ACTIONS(15),
    [anon_sym_false] = ACTIONS(15),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_BQUOTE] = ACTIONS(15),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(15),
    [sym__json_number] = ACTIONS(15),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(15),
    [sym_comment] = ACTIONS(15),
  },
  [3] = {
    [sym_option] = STATE(302),
    [sym_ca_certificate_option] = STATE(515),
    [sym_cert_option] = STATE(515),
    [sym_boolean_option] = STATE(515),
    [sym_boolean_option_key] = STATE(562),
    [sym_integer_option] = STATE(515),
    [sym_integer_option_key] = STATE(561),
    [sym_duration_option] = STATE(515),
    [sym_duration_option_key] = STATE(540),
    [sym_string_option] = STATE(515),
    [sym_string_option_key] = STATE(542),
    [sym_variable_option] = STATE(515),
    [aux_sym_options_section_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(31),
    [anon_sym_LF] = ACTIONS(31),
    [anon_sym_GET] = ACTIONS(33),
    [anon_sym_HEAD] = ACTIONS(33),
    [anon_sym_POST] = ACTIONS(33),
    [anon_sym_PUT] = ACTIONS(33),
    [anon_sym_DELETE] = ACTIONS(33),
    [anon_sym_CONNECT] = ACTIONS(33),
    [anon_sym_OPTIONS] = ACTIONS(33),
    [anon_sym_TRACE] = ACTIONS(33),
    [anon_sym_PATCH] = ACTIONS(33),
    [anon_sym_LINK] = ACTIONS(33),
    [anon_sym_UNLINK] = ACTIONS(33),
    [anon_sym_PURGE] = ACTIONS(33),
    [anon_sym_LOCK] = ACTIONS(33),
    [anon_sym_UNLOCK] = ACTIONS(33),
    [anon_sym_PROPFIND] = ACTIONS(33),
    [anon_sym_VIEW] = ACTIONS(33),
    [aux_sym_method_token1] = ACTIONS(33),
    [anon_sym_HTTP_SLASH1_DOT0] = ACTIONS(33),
    [anon_sym_HTTP_SLASH1_DOT1] = ACTIONS(33),
    [anon_sym_HTTP_SLASH2] = ACTIONS(33),
    [anon_sym_HTTP_SLASH3] = ACTIONS(33),
    [anon_sym_HTTP_SLASH_STAR] = ACTIONS(33),
    [anon_sym_HTTP] = ACTIONS(33),
    [anon_sym_LBRACKBasicAuth_RBRACK] = ACTIONS(33),
    [anon_sym_LBRACKQuery_RBRACK] = ACTIONS(33),
    [anon_sym_LBRACKQueryStringParams_RBRACK] = ACTIONS(33),
    [anon_sym_LBRACKForm_RBRACK] = ACTIONS(33),
    [anon_sym_LBRACKFormParams_RBRACK] = ACTIONS(33),
    [anon_sym_LBRACKMultipart_RBRACK] = ACTIONS(33),
    [anon_sym_LBRACKMultipartFormData_RBRACK] = ACTIONS(33),
    [anon_sym_LBRACKCookies_RBRACK] = ACTIONS(33),
    [anon_sym_LBRACKOptions_RBRACK] = ACTIONS(33),
    [anon_sym_null] = ACTIONS(33),
    [anon_sym_file_COMMA] = ACTIONS(33),
    [anon_sym_cacert] = ACTIONS(35),
    [anon_sym_cert] = ACTIONS(38),
    [anon_sym_LBRACE] = ACTIONS(33),
    [anon_sym_compressed] = ACTIONS(41),
    [anon_sym_location] = ACTIONS(41),
    [anon_sym_location_DASHtrusted] = ACTIONS(41),
    [anon_sym_http1_DOT0] = ACTIONS(41),
    [anon_sym_http2] = ACTIONS(41),
    [anon_sym_http3] = ACTIONS(41),
    [anon_sym_insecure] = ACTIONS(41),
    [anon_sym_ipv4] = ACTIONS(41),
    [anon_sym_ipv6] = ACTIONS(41),
    [anon_sym_netrc] = ACTIONS(41),
    [anon_sym_netrc_DASHoptional] = ACTIONS(41),
    [anon_sym_path_DASHas_DASHis] = ACTIONS(41),
    [anon_sym_skip] = ACTIONS(41),
    [anon_sym_verbose] = ACTIONS(41),
    [anon_sym_very_DASHverbose] = ACTIONS(41),
    [anon_sym_max_DASHredirs] = ACTIONS(44),
    [anon_sym_retry_DASHmax_DASHcount] = ACTIONS(44),
    [anon_sym_limit_DASHrate] = ACTIONS(44),
    [anon_sym_max_DASHtime] = ACTIONS(44),
    [anon_sym_repeat] = ACTIONS(44),
    [anon_sym_retry] = ACTIONS(44),
    [anon_sym_connect_DASHtimeout] = ACTIONS(47),
    [anon_sym_delay] = ACTIONS(47),
    [anon_sym_retry_DASHinterval] = ACTIONS(47),
    [anon_sym_aws_DASHsigv4] = ACTIONS(50),
    [anon_sym_key] = ACTIONS(50),
    [anon_sym_connect_DASHto] = ACTIONS(50),
    [anon_sym_header] = ACTIONS(50),
    [anon_sym_netrc_DASHfile] = ACTIONS(50),
    [anon_sym_output] = ACTIONS(50),
    [anon_sym_pinnedpubkey] = ACTIONS(50),
    [anon_sym_proxy] = ACTIONS(50),
    [anon_sym_unix_DASHsocket] = ACTIONS(50),
    [anon_sym_user] = ACTIONS(50),
    [anon_sym_variable] = ACTIONS(53),
    [anon_sym_LT] = ACTIONS(33),
    [anon_sym_LT_QMARK] = ACTIONS(33),
    [anon_sym_base64_COMMA] = ACTIONS(33),
    [anon_sym_hex_COMMA] = ACTIONS(33),
    [anon_sym_DQUOTE] = ACTIONS(33),
    [anon_sym_true] = ACTIONS(33),
    [anon_sym_false] = ACTIONS(33),
    [anon_sym_LBRACK] = ACTIONS(33),
    [anon_sym_BQUOTE] = ACTIONS(33),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(33),
    [sym__json_number] = ACTIONS(33),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(33),
    [sym_comment] = ACTIONS(33),
  },
  [4] = {
    [sym_option] = STATE(302),
    [sym_ca_certificate_option] = STATE(515),
    [sym_cert_option] = STATE(515),
    [sym_boolean_option] = STATE(515),
    [sym_boolean_option_key] = STATE(562),
    [sym_integer_option] = STATE(515),
    [sym_integer_option_key] = STATE(561),
    [sym_duration_option] = STATE(515),
    [sym_duration_option_key] = STATE(540),
    [sym_string_option] = STATE(515),
    [sym_string_option_key] = STATE(542),
    [sym_variable_option] = STATE(515),
    [aux_sym_options_section_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(56),
    [anon_sym_LF] = ACTIONS(56),
    [anon_sym_GET] = ACTIONS(58),
    [anon_sym_HEAD] = ACTIONS(58),
    [anon_sym_POST] = ACTIONS(58),
    [anon_sym_PUT] = ACTIONS(58),
    [anon_sym_DELETE] = ACTIONS(58),
    [anon_sym_CONNECT] = ACTIONS(58),
    [anon_sym_OPTIONS] = ACTIONS(58),
    [anon_sym_TRACE] = ACTIONS(58),
    [anon_sym_PATCH] = ACTIONS(58),
    [anon_sym_LINK] = ACTIONS(58),
    [anon_sym_UNLINK] = ACTIONS(58),
    [anon_sym_PURGE] = ACTIONS(58),
    [anon_sym_LOCK] = ACTIONS(58),
    [anon_sym_UNLOCK] = ACTIONS(58),
    [anon_sym_PROPFIND] = ACTIONS(58),
    [anon_sym_VIEW] = ACTIONS(58),
    [aux_sym_method_token1] = ACTIONS(58),
    [anon_sym_HTTP_SLASH1_DOT0] = ACTIONS(58),
    [anon_sym_HTTP_SLASH1_DOT1] = ACTIONS(58),
    [anon_sym_HTTP_SLASH2] = ACTIONS(58),
    [anon_sym_HTTP_SLASH3] = ACTIONS(58),
    [anon_sym_HTTP_SLASH_STAR] = ACTIONS(58),
    [anon_sym_HTTP] = ACTIONS(58),
    [anon_sym_LBRACKBasicAuth_RBRACK] = ACTIONS(58),
    [anon_sym_LBRACKQuery_RBRACK] = ACTIONS(58),
    [anon_sym_LBRACKQueryStringParams_RBRACK] = ACTIONS(58),
    [anon_sym_LBRACKForm_RBRACK] = ACTIONS(58),
    [anon_sym_LBRACKFormParams_RBRACK] = ACTIONS(58),
    [anon_sym_LBRACKMultipart_RBRACK] = ACTIONS(58),
    [anon_sym_LBRACKMultipartFormData_RBRACK] = ACTIONS(58),
    [anon_sym_LBRACKCookies_RBRACK] = ACTIONS(58),
    [anon_sym_LBRACKOptions_RBRACK] = ACTIONS(58),
    [anon_sym_null] = ACTIONS(58),
    [anon_sym_file_COMMA] = ACTIONS(58),
    [anon_sym_cacert] = ACTIONS(17),
    [anon_sym_cert] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(58),
    [anon_sym_compressed] = ACTIONS(21),
    [anon_sym_location] = ACTIONS(21),
    [anon_sym_location_DASHtrusted] = ACTIONS(21),
    [anon_sym_http1_DOT0] = ACTIONS(21),
    [anon_sym_http2] = ACTIONS(21),
    [anon_sym_http3] = ACTIONS(21),
    [anon_sym_insecure] = ACTIONS(21),
    [anon_sym_ipv4] = ACTIONS(21),
    [anon_sym_ipv6] = ACTIONS(21),
    [anon_sym_netrc] = ACTIONS(21),
    [anon_sym_netrc_DASHoptional] = ACTIONS(21),
    [anon_sym_path_DASHas_DASHis] = ACTIONS(21),
    [anon_sym_skip] = ACTIONS(21),
    [anon_sym_verbose] = ACTIONS(21),
    [anon_sym_very_DASHverbose] = ACTIONS(21),
    [anon_sym_max_DASHredirs] = ACTIONS(23),
    [anon_sym_retry_DASHmax_DASHcount] = ACTIONS(23),
    [anon_sym_limit_DASHrate] = ACTIONS(23),
    [anon_sym_max_DASHtime] = ACTIONS(23),
    [anon_sym_repeat] = ACTIONS(23),
    [anon_sym_retry] = ACTIONS(23),
    [anon_sym_connect_DASHtimeout] = ACTIONS(25),
    [anon_sym_delay] = ACTIONS(25),
    [anon_sym_retry_DASHinterval] = ACTIONS(25),
    [anon_sym_aws_DASHsigv4] = ACTIONS(27),
    [anon_sym_key] = ACTIONS(27),
    [anon_sym_connect_DASHto] = ACTIONS(27),
    [anon_sym_header] = ACTIONS(27),
    [anon_sym_netrc_DASHfile] = ACTIONS(27),
    [anon_sym_output] = ACTIONS(27),
    [anon_sym_pinnedpubkey] = ACTIONS(27),
    [anon_sym_proxy] = ACTIONS(27),
    [anon_sym_unix_DASHsocket] = ACTIONS(27),
    [anon_sym_user] = ACTIONS(27),
    [anon_sym_variable] = ACTIONS(29),
    [anon_sym_LT] = ACTIONS(58),
    [anon_sym_LT_QMARK] = ACTIONS(58),
    [anon_sym_base64_COMMA] = ACTIONS(58),
    [anon_sym_hex_COMMA] = ACTIONS(58),
    [anon_sym_DQUOTE] = ACTIONS(58),
    [anon_sym_true] = ACTIONS(58),
    [anon_sym_false] = ACTIONS(58),
    [anon_sym_LBRACK] = ACTIONS(58),
    [anon_sym_BQUOTE] = ACTIONS(58),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(58),
    [sym__json_number] = ACTIONS(58),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(58),
    [sym_comment] = ACTIONS(58),
  },
  [5] = {
    [sym_header] = STATE(6),
    [sym_body] = STATE(96),
    [sym_request_section] = STATE(14),
    [sym_basic_auth_section] = STATE(52),
    [sym_query_string_params_section] = STATE(52),
    [sym_form_params_section] = STATE(52),
    [sym_multipart_form_data_section] = STATE(52),
    [sym_cookies_section] = STATE(52),
    [sym_options_section] = STATE(52),
    [sym_key_value] = STATE(322),
    [sym_bytes] = STATE(319),
    [sym_xml] = STATE(447),
    [sym_xml_prolog_tag] = STATE(248),
    [sym_xml_tag] = STATE(458),
    [sym_xml_self_closing_tag] = STATE(512),
    [sym_xml_open_tag] = STATE(161),
    [sym_oneline_base64] = STATE(447),
    [sym_oneline_file] = STATE(447),
    [sym_oneline_hex] = STATE(447),
    [sym_key_string] = STATE(552),
    [sym_key_string_content] = STATE(159),
    [sym_key_string_text] = STATE(174),
    [sym_key_string_escaped_char] = STATE(174),
    [sym_oneline_string] = STATE(447),
    [sym_multiline_string] = STATE(447),
    [sym_json_value] = STATE(447),
    [sym_json_object] = STATE(500),
    [sym_json_array] = STATE(500),
    [sym_json_string] = STATE(500),
    [sym_json_number] = STATE(500),
    [sym_json_boolean] = STATE(500),
    [sym_template] = STATE(180),
    [aux_sym_request_repeat1] = STATE(6),
    [aux_sym_request_repeat2] = STATE(14),
    [aux_sym_xml_repeat1] = STATE(248),
    [aux_sym_key_string_repeat1] = STATE(159),
    [aux_sym_key_string_content_repeat1] = STATE(174),
    [aux_sym_key_string_text_repeat1] = STATE(194),
    [ts_builtin_sym_end] = ACTIONS(60),
    [anon_sym_LF] = ACTIONS(60),
    [anon_sym_GET] = ACTIONS(62),
    [anon_sym_HEAD] = ACTIONS(62),
    [anon_sym_POST] = ACTIONS(62),
    [anon_sym_PUT] = ACTIONS(62),
    [anon_sym_DELETE] = ACTIONS(62),
    [anon_sym_CONNECT] = ACTIONS(62),
    [anon_sym_OPTIONS] = ACTIONS(62),
    [anon_sym_TRACE] = ACTIONS(62),
    [anon_sym_PATCH] = ACTIONS(62),
    [anon_sym_LINK] = ACTIONS(62),
    [anon_sym_UNLINK] = ACTIONS(62),
    [anon_sym_PURGE] = ACTIONS(62),
    [anon_sym_LOCK] = ACTIONS(62),
    [anon_sym_UNLOCK] = ACTIONS(62),
    [anon_sym_PROPFIND] = ACTIONS(62),
    [anon_sym_VIEW] = ACTIONS(62),
    [aux_sym_method_token1] = ACTIONS(62),
    [anon_sym_HTTP_SLASH1_DOT0] = ACTIONS(62),
    [anon_sym_HTTP_SLASH1_DOT1] = ACTIONS(62),
    [anon_sym_HTTP_SLASH2] = ACTIONS(62),
    [anon_sym_HTTP_SLASH3] = ACTIONS(62),
    [anon_sym_HTTP_SLASH_STAR] = ACTIONS(62),
    [anon_sym_HTTP] = ACTIONS(62),
    [anon_sym_LBRACKBasicAuth_RBRACK] = ACTIONS(64),
    [anon_sym_LBRACKQuery_RBRACK] = ACTIONS(66),
    [anon_sym_LBRACKQueryStringParams_RBRACK] = ACTIONS(66),
    [anon_sym_LBRACKForm_RBRACK] = ACTIONS(68),
    [anon_sym_LBRACKFormParams_RBRACK] = ACTIONS(68),
    [anon_sym_LBRACKMultipart_RBRACK] = ACTIONS(70),
    [anon_sym_LBRACKMultipartFormData_RBRACK] = ACTIONS(70),
    [anon_sym_LBRACKCookies_RBRACK] = ACTIONS(72),
    [anon_sym_LBRACKOptions_RBRACK] = ACTIONS(74),
    [anon_sym_null] = ACTIONS(76),
    [anon_sym_file_COMMA] = ACTIONS(78),
    [anon_sym_BSLASH] = ACTIONS(80),
    [anon_sym_LBRACE] = ACTIONS(82),
    [anon_sym_LT] = ACTIONS(84),
    [anon_sym_LT_QMARK] = ACTIONS(86),
    [anon_sym_base64_COMMA] = ACTIONS(88),
    [anon_sym_hex_COMMA] = ACTIONS(90),
    [anon_sym_DQUOTE] = ACTIONS(92),
    [aux_sym_key_string_text_token1] = ACTIONS(94),
    [anon_sym_true] = ACTIONS(96),
    [anon_sym_false] = ACTIONS(96),
    [anon_sym_LBRACK] = ACTIONS(98),
    [anon_sym_RBRACK] = ACTIONS(94),
    [anon_sym_BQUOTE] = ACTIONS(100),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(102),
    [sym__json_number] = ACTIONS(104),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(106),
    [sym_comment] = ACTIONS(62),
  },
  [6] = {
    [sym_header] = STATE(22),
    [sym_body] = STATE(99),
    [sym_request_section] = STATE(13),
    [sym_basic_auth_section] = STATE(52),
    [sym_query_string_params_section] = STATE(52),
    [sym_form_params_section] = STATE(52),
    [sym_multipart_form_data_section] = STATE(52),
    [sym_cookies_section] = STATE(52),
    [sym_options_section] = STATE(52),
    [sym_key_value] = STATE(322),
    [sym_bytes] = STATE(319),
    [sym_xml] = STATE(447),
    [sym_xml_prolog_tag] = STATE(248),
    [sym_xml_tag] = STATE(458),
    [sym_xml_self_closing_tag] = STATE(512),
    [sym_xml_open_tag] = STATE(161),
    [sym_oneline_base64] = STATE(447),
    [sym_oneline_file] = STATE(447),
    [sym_oneline_hex] = STATE(447),
    [sym_key_string] = STATE(552),
    [sym_key_string_content] = STATE(159),
    [sym_key_string_text] = STATE(174),
    [sym_key_string_escaped_char] = STATE(174),
    [sym_oneline_string] = STATE(447),
    [sym_multiline_string] = STATE(447),
    [sym_json_value] = STATE(447),
    [sym_json_object] = STATE(500),
    [sym_json_array] = STATE(500),
    [sym_json_string] = STATE(500),
    [sym_json_number] = STATE(500),
    [sym_json_boolean] = STATE(500),
    [sym_template] = STATE(180),
    [aux_sym_request_repeat1] = STATE(22),
    [aux_sym_request_repeat2] = STATE(13),
    [aux_sym_xml_repeat1] = STATE(248),
    [aux_sym_key_string_repeat1] = STATE(159),
    [aux_sym_key_string_content_repeat1] = STATE(174),
    [aux_sym_key_string_text_repeat1] = STATE(194),
    [ts_builtin_sym_end] = ACTIONS(108),
    [anon_sym_LF] = ACTIONS(108),
    [anon_sym_GET] = ACTIONS(110),
    [anon_sym_HEAD] = ACTIONS(110),
    [anon_sym_POST] = ACTIONS(110),
    [anon_sym_PUT] = ACTIONS(110),
    [anon_sym_DELETE] = ACTIONS(110),
    [anon_sym_CONNECT] = ACTIONS(110),
    [anon_sym_OPTIONS] = ACTIONS(110),
    [anon_sym_TRACE] = ACTIONS(110),
    [anon_sym_PATCH] = ACTIONS(110),
    [anon_sym_LINK] = ACTIONS(110),
    [anon_sym_UNLINK] = ACTIONS(110),
    [anon_sym_PURGE] = ACTIONS(110),
    [anon_sym_LOCK] = ACTIONS(110),
    [anon_sym_UNLOCK] = ACTIONS(110),
    [anon_sym_PROPFIND] = ACTIONS(110),
    [anon_sym_VIEW] = ACTIONS(110),
    [aux_sym_method_token1] = ACTIONS(110),
    [anon_sym_HTTP_SLASH1_DOT0] = ACTIONS(110),
    [anon_sym_HTTP_SLASH1_DOT1] = ACTIONS(110),
    [anon_sym_HTTP_SLASH2] = ACTIONS(110),
    [anon_sym_HTTP_SLASH3] = ACTIONS(110),
    [anon_sym_HTTP_SLASH_STAR] = ACTIONS(110),
    [anon_sym_HTTP] = ACTIONS(110),
    [anon_sym_LBRACKBasicAuth_RBRACK] = ACTIONS(64),
    [anon_sym_LBRACKQuery_RBRACK] = ACTIONS(66),
    [anon_sym_LBRACKQueryStringParams_RBRACK] = ACTIONS(66),
    [anon_sym_LBRACKForm_RBRACK] = ACTIONS(68),
    [anon_sym_LBRACKFormParams_RBRACK] = ACTIONS(68),
    [anon_sym_LBRACKMultipart_RBRACK] = ACTIONS(70),
    [anon_sym_LBRACKMultipartFormData_RBRACK] = ACTIONS(70),
    [anon_sym_LBRACKCookies_RBRACK] = ACTIONS(72),
    [anon_sym_LBRACKOptions_RBRACK] = ACTIONS(74),
    [anon_sym_null] = ACTIONS(76),
    [anon_sym_file_COMMA] = ACTIONS(78),
    [anon_sym_BSLASH] = ACTIONS(80),
    [anon_sym_LBRACE] = ACTIONS(82),
    [anon_sym_LT] = ACTIONS(84),
    [anon_sym_LT_QMARK] = ACTIONS(86),
    [anon_sym_base64_COMMA] = ACTIONS(88),
    [anon_sym_hex_COMMA] = ACTIONS(90),
    [anon_sym_DQUOTE] = ACTIONS(92),
    [aux_sym_key_string_text_token1] = ACTIONS(94),
    [anon_sym_true] = ACTIONS(96),
    [anon_sym_false] = ACTIONS(96),
    [anon_sym_LBRACK] = ACTIONS(98),
    [anon_sym_RBRACK] = ACTIONS(94),
    [anon_sym_BQUOTE] = ACTIONS(100),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(102),
    [sym__json_number] = ACTIONS(104),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(106),
    [sym_comment] = ACTIONS(110),
  },
  [7] = {
    [sym_header] = STATE(22),
    [sym_body] = STATE(97),
    [sym_request_section] = STATE(12),
    [sym_basic_auth_section] = STATE(52),
    [sym_query_string_params_section] = STATE(52),
    [sym_form_params_section] = STATE(52),
    [sym_multipart_form_data_section] = STATE(52),
    [sym_cookies_section] = STATE(52),
    [sym_options_section] = STATE(52),
    [sym_key_value] = STATE(322),
    [sym_bytes] = STATE(319),
    [sym_xml] = STATE(447),
    [sym_xml_prolog_tag] = STATE(248),
    [sym_xml_tag] = STATE(458),
    [sym_xml_self_closing_tag] = STATE(512),
    [sym_xml_open_tag] = STATE(161),
    [sym_oneline_base64] = STATE(447),
    [sym_oneline_file] = STATE(447),
    [sym_oneline_hex] = STATE(447),
    [sym_key_string] = STATE(552),
    [sym_key_string_content] = STATE(159),
    [sym_key_string_text] = STATE(174),
    [sym_key_string_escaped_char] = STATE(174),
    [sym_oneline_string] = STATE(447),
    [sym_multiline_string] = STATE(447),
    [sym_json_value] = STATE(447),
    [sym_json_object] = STATE(500),
    [sym_json_array] = STATE(500),
    [sym_json_string] = STATE(500),
    [sym_json_number] = STATE(500),
    [sym_json_boolean] = STATE(500),
    [sym_template] = STATE(180),
    [aux_sym_request_repeat1] = STATE(22),
    [aux_sym_request_repeat2] = STATE(12),
    [aux_sym_xml_repeat1] = STATE(248),
    [aux_sym_key_string_repeat1] = STATE(159),
    [aux_sym_key_string_content_repeat1] = STATE(174),
    [aux_sym_key_string_text_repeat1] = STATE(194),
    [ts_builtin_sym_end] = ACTIONS(112),
    [anon_sym_LF] = ACTIONS(112),
    [anon_sym_GET] = ACTIONS(114),
    [anon_sym_HEAD] = ACTIONS(114),
    [anon_sym_POST] = ACTIONS(114),
    [anon_sym_PUT] = ACTIONS(114),
    [anon_sym_DELETE] = ACTIONS(114),
    [anon_sym_CONNECT] = ACTIONS(114),
    [anon_sym_OPTIONS] = ACTIONS(114),
    [anon_sym_TRACE] = ACTIONS(114),
    [anon_sym_PATCH] = ACTIONS(114),
    [anon_sym_LINK] = ACTIONS(114),
    [anon_sym_UNLINK] = ACTIONS(114),
    [anon_sym_PURGE] = ACTIONS(114),
    [anon_sym_LOCK] = ACTIONS(114),
    [anon_sym_UNLOCK] = ACTIONS(114),
    [anon_sym_PROPFIND] = ACTIONS(114),
    [anon_sym_VIEW] = ACTIONS(114),
    [aux_sym_method_token1] = ACTIONS(114),
    [anon_sym_HTTP_SLASH1_DOT0] = ACTIONS(114),
    [anon_sym_HTTP_SLASH1_DOT1] = ACTIONS(114),
    [anon_sym_HTTP_SLASH2] = ACTIONS(114),
    [anon_sym_HTTP_SLASH3] = ACTIONS(114),
    [anon_sym_HTTP_SLASH_STAR] = ACTIONS(114),
    [anon_sym_HTTP] = ACTIONS(114),
    [anon_sym_LBRACKBasicAuth_RBRACK] = ACTIONS(64),
    [anon_sym_LBRACKQuery_RBRACK] = ACTIONS(66),
    [anon_sym_LBRACKQueryStringParams_RBRACK] = ACTIONS(66),
    [anon_sym_LBRACKForm_RBRACK] = ACTIONS(68),
    [anon_sym_LBRACKFormParams_RBRACK] = ACTIONS(68),
    [anon_sym_LBRACKMultipart_RBRACK] = ACTIONS(70),
    [anon_sym_LBRACKMultipartFormData_RBRACK] = ACTIONS(70),
    [anon_sym_LBRACKCookies_RBRACK] = ACTIONS(72),
    [anon_sym_LBRACKOptions_RBRACK] = ACTIONS(74),
    [anon_sym_null] = ACTIONS(76),
    [anon_sym_file_COMMA] = ACTIONS(78),
    [anon_sym_BSLASH] = ACTIONS(80),
    [anon_sym_LBRACE] = ACTIONS(82),
    [anon_sym_LT] = ACTIONS(84),
    [anon_sym_LT_QMARK] = ACTIONS(86),
    [anon_sym_base64_COMMA] = ACTIONS(88),
    [anon_sym_hex_COMMA] = ACTIONS(90),
    [anon_sym_DQUOTE] = ACTIONS(92),
    [aux_sym_key_string_text_token1] = ACTIONS(94),
    [anon_sym_true] = ACTIONS(96),
    [anon_sym_false] = ACTIONS(96),
    [anon_sym_LBRACK] = ACTIONS(98),
    [anon_sym_RBRACK] = ACTIONS(94),
    [anon_sym_BQUOTE] = ACTIONS(100),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(102),
    [sym__json_number] = ACTIONS(104),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(106),
    [sym_comment] = ACTIONS(114),
  },
  [8] = {
    [sym_header] = STATE(7),
    [sym_body] = STATE(99),
    [sym_request_section] = STATE(13),
    [sym_basic_auth_section] = STATE(52),
    [sym_query_string_params_section] = STATE(52),
    [sym_form_params_section] = STATE(52),
    [sym_multipart_form_data_section] = STATE(52),
    [sym_cookies_section] = STATE(52),
    [sym_options_section] = STATE(52),
    [sym_key_value] = STATE(322),
    [sym_bytes] = STATE(319),
    [sym_xml] = STATE(447),
    [sym_xml_prolog_tag] = STATE(248),
    [sym_xml_tag] = STATE(458),
    [sym_xml_self_closing_tag] = STATE(512),
    [sym_xml_open_tag] = STATE(161),
    [sym_oneline_base64] = STATE(447),
    [sym_oneline_file] = STATE(447),
    [sym_oneline_hex] = STATE(447),
    [sym_key_string] = STATE(552),
    [sym_key_string_content] = STATE(159),
    [sym_key_string_text] = STATE(174),
    [sym_key_string_escaped_char] = STATE(174),
    [sym_oneline_string] = STATE(447),
    [sym_multiline_string] = STATE(447),
    [sym_json_value] = STATE(447),
    [sym_json_object] = STATE(500),
    [sym_json_array] = STATE(500),
    [sym_json_string] = STATE(500),
    [sym_json_number] = STATE(500),
    [sym_json_boolean] = STATE(500),
    [sym_template] = STATE(180),
    [aux_sym_request_repeat1] = STATE(7),
    [aux_sym_request_repeat2] = STATE(13),
    [aux_sym_xml_repeat1] = STATE(248),
    [aux_sym_key_string_repeat1] = STATE(159),
    [aux_sym_key_string_content_repeat1] = STATE(174),
    [aux_sym_key_string_text_repeat1] = STATE(194),
    [ts_builtin_sym_end] = ACTIONS(108),
    [anon_sym_LF] = ACTIONS(108),
    [anon_sym_GET] = ACTIONS(110),
    [anon_sym_HEAD] = ACTIONS(110),
    [anon_sym_POST] = ACTIONS(110),
    [anon_sym_PUT] = ACTIONS(110),
    [anon_sym_DELETE] = ACTIONS(110),
    [anon_sym_CONNECT] = ACTIONS(110),
    [anon_sym_OPTIONS] = ACTIONS(110),
    [anon_sym_TRACE] = ACTIONS(110),
    [anon_sym_PATCH] = ACTIONS(110),
    [anon_sym_LINK] = ACTIONS(110),
    [anon_sym_UNLINK] = ACTIONS(110),
    [anon_sym_PURGE] = ACTIONS(110),
    [anon_sym_LOCK] = ACTIONS(110),
    [anon_sym_UNLOCK] = ACTIONS(110),
    [anon_sym_PROPFIND] = ACTIONS(110),
    [anon_sym_VIEW] = ACTIONS(110),
    [aux_sym_method_token1] = ACTIONS(110),
    [anon_sym_HTTP_SLASH1_DOT0] = ACTIONS(110),
    [anon_sym_HTTP_SLASH1_DOT1] = ACTIONS(110),
    [anon_sym_HTTP_SLASH2] = ACTIONS(110),
    [anon_sym_HTTP_SLASH3] = ACTIONS(110),
    [anon_sym_HTTP_SLASH_STAR] = ACTIONS(110),
    [anon_sym_HTTP] = ACTIONS(110),
    [anon_sym_LBRACKBasicAuth_RBRACK] = ACTIONS(64),
    [anon_sym_LBRACKQuery_RBRACK] = ACTIONS(66),
    [anon_sym_LBRACKQueryStringParams_RBRACK] = ACTIONS(66),
    [anon_sym_LBRACKForm_RBRACK] = ACTIONS(68),
    [anon_sym_LBRACKFormParams_RBRACK] = ACTIONS(68),
    [anon_sym_LBRACKMultipart_RBRACK] = ACTIONS(70),
    [anon_sym_LBRACKMultipartFormData_RBRACK] = ACTIONS(70),
    [anon_sym_LBRACKCookies_RBRACK] = ACTIONS(72),
    [anon_sym_LBRACKOptions_RBRACK] = ACTIONS(74),
    [anon_sym_null] = ACTIONS(76),
    [anon_sym_file_COMMA] = ACTIONS(78),
    [anon_sym_BSLASH] = ACTIONS(80),
    [anon_sym_LBRACE] = ACTIONS(82),
    [anon_sym_LT] = ACTIONS(84),
    [anon_sym_LT_QMARK] = ACTIONS(86),
    [anon_sym_base64_COMMA] = ACTIONS(88),
    [anon_sym_hex_COMMA] = ACTIONS(90),
    [anon_sym_DQUOTE] = ACTIONS(92),
    [aux_sym_key_string_text_token1] = ACTIONS(94),
    [anon_sym_true] = ACTIONS(96),
    [anon_sym_false] = ACTIONS(96),
    [anon_sym_LBRACK] = ACTIONS(98),
    [anon_sym_RBRACK] = ACTIONS(94),
    [anon_sym_BQUOTE] = ACTIONS(100),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(102),
    [sym__json_number] = ACTIONS(104),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(106),
    [sym_comment] = ACTIONS(110),
  },
  [9] = {
    [aux_sym__comment_or_new_line_repeat1] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(116),
    [anon_sym_LF] = ACTIONS(118),
    [anon_sym_GET] = ACTIONS(121),
    [anon_sym_HEAD] = ACTIONS(121),
    [anon_sym_POST] = ACTIONS(121),
    [anon_sym_PUT] = ACTIONS(121),
    [anon_sym_DELETE] = ACTIONS(121),
    [anon_sym_CONNECT] = ACTIONS(121),
    [anon_sym_OPTIONS] = ACTIONS(121),
    [anon_sym_TRACE] = ACTIONS(121),
    [anon_sym_PATCH] = ACTIONS(121),
    [anon_sym_LINK] = ACTIONS(121),
    [anon_sym_UNLINK] = ACTIONS(121),
    [anon_sym_PURGE] = ACTIONS(121),
    [anon_sym_LOCK] = ACTIONS(121),
    [anon_sym_UNLOCK] = ACTIONS(121),
    [anon_sym_PROPFIND] = ACTIONS(121),
    [anon_sym_VIEW] = ACTIONS(121),
    [aux_sym_method_token1] = ACTIONS(121),
    [anon_sym_HTTP_SLASH1_DOT0] = ACTIONS(121),
    [anon_sym_HTTP_SLASH1_DOT1] = ACTIONS(121),
    [anon_sym_HTTP_SLASH2] = ACTIONS(121),
    [anon_sym_HTTP_SLASH3] = ACTIONS(121),
    [anon_sym_HTTP_SLASH_STAR] = ACTIONS(121),
    [anon_sym_HTTP] = ACTIONS(121),
    [anon_sym_LBRACKBasicAuth_RBRACK] = ACTIONS(121),
    [anon_sym_LBRACKQuery_RBRACK] = ACTIONS(121),
    [anon_sym_LBRACKQueryStringParams_RBRACK] = ACTIONS(121),
    [anon_sym_LBRACKForm_RBRACK] = ACTIONS(121),
    [anon_sym_LBRACKFormParams_RBRACK] = ACTIONS(121),
    [anon_sym_LBRACKMultipart_RBRACK] = ACTIONS(121),
    [anon_sym_LBRACKMultipartFormData_RBRACK] = ACTIONS(121),
    [anon_sym_LBRACKCookies_RBRACK] = ACTIONS(121),
    [anon_sym_LBRACKOptions_RBRACK] = ACTIONS(121),
    [anon_sym_null] = ACTIONS(121),
    [anon_sym_file_COMMA] = ACTIONS(121),
    [anon_sym_cacert] = ACTIONS(121),
    [anon_sym_cert] = ACTIONS(121),
    [anon_sym_LBRACE] = ACTIONS(121),
    [anon_sym_compressed] = ACTIONS(121),
    [anon_sym_location] = ACTIONS(121),
    [anon_sym_location_DASHtrusted] = ACTIONS(121),
    [anon_sym_http1_DOT0] = ACTIONS(121),
    [anon_sym_http2] = ACTIONS(121),
    [anon_sym_http3] = ACTIONS(121),
    [anon_sym_insecure] = ACTIONS(121),
    [anon_sym_ipv4] = ACTIONS(121),
    [anon_sym_ipv6] = ACTIONS(121),
    [anon_sym_netrc] = ACTIONS(121),
    [anon_sym_netrc_DASHoptional] = ACTIONS(121),
    [anon_sym_path_DASHas_DASHis] = ACTIONS(121),
    [anon_sym_skip] = ACTIONS(121),
    [anon_sym_verbose] = ACTIONS(121),
    [anon_sym_very_DASHverbose] = ACTIONS(121),
    [anon_sym_max_DASHredirs] = ACTIONS(121),
    [anon_sym_retry_DASHmax_DASHcount] = ACTIONS(121),
    [anon_sym_limit_DASHrate] = ACTIONS(121),
    [anon_sym_max_DASHtime] = ACTIONS(121),
    [anon_sym_repeat] = ACTIONS(121),
    [anon_sym_retry] = ACTIONS(121),
    [anon_sym_connect_DASHtimeout] = ACTIONS(121),
    [anon_sym_delay] = ACTIONS(121),
    [anon_sym_retry_DASHinterval] = ACTIONS(121),
    [anon_sym_aws_DASHsigv4] = ACTIONS(121),
    [anon_sym_key] = ACTIONS(121),
    [anon_sym_connect_DASHto] = ACTIONS(121),
    [anon_sym_header] = ACTIONS(121),
    [anon_sym_netrc_DASHfile] = ACTIONS(121),
    [anon_sym_output] = ACTIONS(121),
    [anon_sym_pinnedpubkey] = ACTIONS(121),
    [anon_sym_proxy] = ACTIONS(121),
    [anon_sym_unix_DASHsocket] = ACTIONS(121),
    [anon_sym_user] = ACTIONS(121),
    [anon_sym_variable] = ACTIONS(121),
    [anon_sym_LT] = ACTIONS(121),
    [anon_sym_LT_QMARK] = ACTIONS(121),
    [anon_sym_base64_COMMA] = ACTIONS(121),
    [anon_sym_hex_COMMA] = ACTIONS(121),
    [anon_sym_DQUOTE] = ACTIONS(121),
    [anon_sym_true] = ACTIONS(121),
    [anon_sym_false] = ACTIONS(121),
    [anon_sym_LBRACK] = ACTIONS(121),
    [anon_sym_BQUOTE] = ACTIONS(121),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(121),
    [sym__json_number] = ACTIONS(121),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(121),
    [sym_comment] = ACTIONS(123),
  },
  [10] = {
    [aux_sym__comment_or_new_line_repeat1] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(126),
    [anon_sym_LF] = ACTIONS(128),
    [anon_sym_GET] = ACTIONS(130),
    [anon_sym_HEAD] = ACTIONS(130),
    [anon_sym_POST] = ACTIONS(130),
    [anon_sym_PUT] = ACTIONS(130),
    [anon_sym_DELETE] = ACTIONS(130),
    [anon_sym_CONNECT] = ACTIONS(130),
    [anon_sym_OPTIONS] = ACTIONS(130),
    [anon_sym_TRACE] = ACTIONS(130),
    [anon_sym_PATCH] = ACTIONS(130),
    [anon_sym_LINK] = ACTIONS(130),
    [anon_sym_UNLINK] = ACTIONS(130),
    [anon_sym_PURGE] = ACTIONS(130),
    [anon_sym_LOCK] = ACTIONS(130),
    [anon_sym_UNLOCK] = ACTIONS(130),
    [anon_sym_PROPFIND] = ACTIONS(130),
    [anon_sym_VIEW] = ACTIONS(130),
    [aux_sym_method_token1] = ACTIONS(130),
    [anon_sym_HTTP_SLASH1_DOT0] = ACTIONS(130),
    [anon_sym_HTTP_SLASH1_DOT1] = ACTIONS(130),
    [anon_sym_HTTP_SLASH2] = ACTIONS(130),
    [anon_sym_HTTP_SLASH3] = ACTIONS(130),
    [anon_sym_HTTP_SLASH_STAR] = ACTIONS(130),
    [anon_sym_HTTP] = ACTIONS(130),
    [anon_sym_LBRACKBasicAuth_RBRACK] = ACTIONS(130),
    [anon_sym_LBRACKQuery_RBRACK] = ACTIONS(130),
    [anon_sym_LBRACKQueryStringParams_RBRACK] = ACTIONS(130),
    [anon_sym_LBRACKForm_RBRACK] = ACTIONS(130),
    [anon_sym_LBRACKFormParams_RBRACK] = ACTIONS(130),
    [anon_sym_LBRACKMultipart_RBRACK] = ACTIONS(130),
    [anon_sym_LBRACKMultipartFormData_RBRACK] = ACTIONS(130),
    [anon_sym_LBRACKCookies_RBRACK] = ACTIONS(130),
    [anon_sym_LBRACKOptions_RBRACK] = ACTIONS(130),
    [anon_sym_null] = ACTIONS(130),
    [anon_sym_file_COMMA] = ACTIONS(130),
    [anon_sym_cacert] = ACTIONS(130),
    [anon_sym_cert] = ACTIONS(130),
    [anon_sym_LBRACE] = ACTIONS(130),
    [anon_sym_compressed] = ACTIONS(130),
    [anon_sym_location] = ACTIONS(130),
    [anon_sym_location_DASHtrusted] = ACTIONS(130),
    [anon_sym_http1_DOT0] = ACTIONS(130),
    [anon_sym_http2] = ACTIONS(130),
    [anon_sym_http3] = ACTIONS(130),
    [anon_sym_insecure] = ACTIONS(130),
    [anon_sym_ipv4] = ACTIONS(130),
    [anon_sym_ipv6] = ACTIONS(130),
    [anon_sym_netrc] = ACTIONS(130),
    [anon_sym_netrc_DASHoptional] = ACTIONS(130),
    [anon_sym_path_DASHas_DASHis] = ACTIONS(130),
    [anon_sym_skip] = ACTIONS(130),
    [anon_sym_verbose] = ACTIONS(130),
    [anon_sym_very_DASHverbose] = ACTIONS(130),
    [anon_sym_max_DASHredirs] = ACTIONS(130),
    [anon_sym_retry_DASHmax_DASHcount] = ACTIONS(130),
    [anon_sym_limit_DASHrate] = ACTIONS(130),
    [anon_sym_max_DASHtime] = ACTIONS(130),
    [anon_sym_repeat] = ACTIONS(130),
    [anon_sym_retry] = ACTIONS(130),
    [anon_sym_connect_DASHtimeout] = ACTIONS(130),
    [anon_sym_delay] = ACTIONS(130),
    [anon_sym_retry_DASHinterval] = ACTIONS(130),
    [anon_sym_aws_DASHsigv4] = ACTIONS(130),
    [anon_sym_key] = ACTIONS(130),
    [anon_sym_connect_DASHto] = ACTIONS(130),
    [anon_sym_header] = ACTIONS(130),
    [anon_sym_netrc_DASHfile] = ACTIONS(130),
    [anon_sym_output] = ACTIONS(130),
    [anon_sym_pinnedpubkey] = ACTIONS(130),
    [anon_sym_proxy] = ACTIONS(130),
    [anon_sym_unix_DASHsocket] = ACTIONS(130),
    [anon_sym_user] = ACTIONS(130),
    [anon_sym_variable] = ACTIONS(130),
    [anon_sym_LT] = ACTIONS(130),
    [anon_sym_LT_QMARK] = ACTIONS(130),
    [anon_sym_base64_COMMA] = ACTIONS(130),
    [anon_sym_hex_COMMA] = ACTIONS(130),
    [anon_sym_DQUOTE] = ACTIONS(130),
    [anon_sym_true] = ACTIONS(130),
    [anon_sym_false] = ACTIONS(130),
    [anon_sym_LBRACK] = ACTIONS(130),
    [anon_sym_BQUOTE] = ACTIONS(130),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(130),
    [sym__json_number] = ACTIONS(130),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(130),
    [sym_comment] = ACTIONS(132),
  },
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(31),
    [anon_sym_LF] = ACTIONS(31),
    [anon_sym_GET] = ACTIONS(33),
    [anon_sym_HEAD] = ACTIONS(33),
    [anon_sym_POST] = ACTIONS(33),
    [anon_sym_PUT] = ACTIONS(33),
    [anon_sym_DELETE] = ACTIONS(33),
    [anon_sym_CONNECT] = ACTIONS(33),
    [anon_sym_OPTIONS] = ACTIONS(33),
    [anon_sym_TRACE] = ACTIONS(33),
    [anon_sym_PATCH] = ACTIONS(33),
    [anon_sym_LINK] = ACTIONS(33),
    [anon_sym_UNLINK] = ACTIONS(33),
    [anon_sym_PURGE] = ACTIONS(33),
    [anon_sym_LOCK] = ACTIONS(33),
    [anon_sym_UNLOCK] = ACTIONS(33),
    [anon_sym_PROPFIND] = ACTIONS(33),
    [anon_sym_VIEW] = ACTIONS(33),
    [aux_sym_method_token1] = ACTIONS(33),
    [anon_sym_HTTP_SLASH1_DOT0] = ACTIONS(33),
    [anon_sym_HTTP_SLASH1_DOT1] = ACTIONS(33),
    [anon_sym_HTTP_SLASH2] = ACTIONS(33),
    [anon_sym_HTTP_SLASH3] = ACTIONS(33),
    [anon_sym_HTTP_SLASH_STAR] = ACTIONS(33),
    [anon_sym_HTTP] = ACTIONS(33),
    [anon_sym_LBRACKBasicAuth_RBRACK] = ACTIONS(33),
    [anon_sym_LBRACKQuery_RBRACK] = ACTIONS(33),
    [anon_sym_LBRACKQueryStringParams_RBRACK] = ACTIONS(33),
    [anon_sym_LBRACKForm_RBRACK] = ACTIONS(33),
    [anon_sym_LBRACKFormParams_RBRACK] = ACTIONS(33),
    [anon_sym_LBRACKMultipart_RBRACK] = ACTIONS(33),
    [anon_sym_LBRACKMultipartFormData_RBRACK] = ACTIONS(33),
    [anon_sym_LBRACKCookies_RBRACK] = ACTIONS(33),
    [anon_sym_LBRACKOptions_RBRACK] = ACTIONS(33),
    [anon_sym_null] = ACTIONS(33),
    [anon_sym_file_COMMA] = ACTIONS(33),
    [anon_sym_cacert] = ACTIONS(33),
    [anon_sym_cert] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(33),
    [anon_sym_compressed] = ACTIONS(33),
    [anon_sym_location] = ACTIONS(33),
    [anon_sym_location_DASHtrusted] = ACTIONS(33),
    [anon_sym_http1_DOT0] = ACTIONS(33),
    [anon_sym_http2] = ACTIONS(33),
    [anon_sym_http3] = ACTIONS(33),
    [anon_sym_insecure] = ACTIONS(33),
    [anon_sym_ipv4] = ACTIONS(33),
    [anon_sym_ipv6] = ACTIONS(33),
    [anon_sym_netrc] = ACTIONS(33),
    [anon_sym_netrc_DASHoptional] = ACTIONS(33),
    [anon_sym_path_DASHas_DASHis] = ACTIONS(33),
    [anon_sym_skip] = ACTIONS(33),
    [anon_sym_verbose] = ACTIONS(33),
    [anon_sym_very_DASHverbose] = ACTIONS(33),
    [anon_sym_max_DASHredirs] = ACTIONS(33),
    [anon_sym_retry_DASHmax_DASHcount] = ACTIONS(33),
    [anon_sym_limit_DASHrate] = ACTIONS(33),
    [anon_sym_max_DASHtime] = ACTIONS(33),
    [anon_sym_repeat] = ACTIONS(33),
    [anon_sym_retry] = ACTIONS(33),
    [anon_sym_connect_DASHtimeout] = ACTIONS(33),
    [anon_sym_delay] = ACTIONS(33),
    [anon_sym_retry_DASHinterval] = ACTIONS(33),
    [anon_sym_aws_DASHsigv4] = ACTIONS(33),
    [anon_sym_key] = ACTIONS(33),
    [anon_sym_connect_DASHto] = ACTIONS(33),
    [anon_sym_header] = ACTIONS(33),
    [anon_sym_netrc_DASHfile] = ACTIONS(33),
    [anon_sym_output] = ACTIONS(33),
    [anon_sym_pinnedpubkey] = ACTIONS(33),
    [anon_sym_proxy] = ACTIONS(33),
    [anon_sym_unix_DASHsocket] = ACTIONS(33),
    [anon_sym_user] = ACTIONS(33),
    [anon_sym_variable] = ACTIONS(33),
    [anon_sym_LT] = ACTIONS(33),
    [anon_sym_LT_QMARK] = ACTIONS(33),
    [anon_sym_base64_COMMA] = ACTIONS(33),
    [anon_sym_hex_COMMA] = ACTIONS(33),
    [anon_sym_DQUOTE] = ACTIONS(33),
    [anon_sym_true] = ACTIONS(33),
    [anon_sym_false] = ACTIONS(33),
    [anon_sym_LBRACK] = ACTIONS(33),
    [anon_sym_BQUOTE] = ACTIONS(33),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(33),
    [sym__json_number] = ACTIONS(33),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(33),
    [sym_comment] = ACTIONS(33),
  },
  [12] = {
    [sym_body] = STATE(100),
    [sym_request_section] = STATE(37),
    [sym_basic_auth_section] = STATE(52),
    [sym_query_string_params_section] = STATE(52),
    [sym_form_params_section] = STATE(52),
    [sym_multipart_form_data_section] = STATE(52),
    [sym_cookies_section] = STATE(52),
    [sym_options_section] = STATE(52),
    [sym_bytes] = STATE(319),
    [sym_xml] = STATE(447),
    [sym_xml_prolog_tag] = STATE(248),
    [sym_xml_tag] = STATE(458),
    [sym_xml_self_closing_tag] = STATE(512),
    [sym_xml_open_tag] = STATE(161),
    [sym_oneline_base64] = STATE(447),
    [sym_oneline_file] = STATE(447),
    [sym_oneline_hex] = STATE(447),
    [sym_oneline_string] = STATE(447),
    [sym_multiline_string] = STATE(447),
    [sym_json_value] = STATE(447),
    [sym_json_object] = STATE(500),
    [sym_json_array] = STATE(500),
    [sym_json_string] = STATE(500),
    [sym_json_number] = STATE(500),
    [sym_json_boolean] = STATE(500),
    [sym_template] = STATE(500),
    [aux_sym_request_repeat2] = STATE(37),
    [aux_sym_xml_repeat1] = STATE(248),
    [ts_builtin_sym_end] = ACTIONS(134),
    [anon_sym_LF] = ACTIONS(134),
    [anon_sym_GET] = ACTIONS(136),
    [anon_sym_HEAD] = ACTIONS(136),
    [anon_sym_POST] = ACTIONS(136),
    [anon_sym_PUT] = ACTIONS(136),
    [anon_sym_DELETE] = ACTIONS(136),
    [anon_sym_CONNECT] = ACTIONS(136),
    [anon_sym_OPTIONS] = ACTIONS(136),
    [anon_sym_TRACE] = ACTIONS(136),
    [anon_sym_PATCH] = ACTIONS(136),
    [anon_sym_LINK] = ACTIONS(136),
    [anon_sym_UNLINK] = ACTIONS(136),
    [anon_sym_PURGE] = ACTIONS(136),
    [anon_sym_LOCK] = ACTIONS(136),
    [anon_sym_UNLOCK] = ACTIONS(136),
    [anon_sym_PROPFIND] = ACTIONS(136),
    [anon_sym_VIEW] = ACTIONS(136),
    [aux_sym_method_token1] = ACTIONS(136),
    [anon_sym_HTTP_SLASH1_DOT0] = ACTIONS(136),
    [anon_sym_HTTP_SLASH1_DOT1] = ACTIONS(136),
    [anon_sym_HTTP_SLASH2] = ACTIONS(136),
    [anon_sym_HTTP_SLASH3] = ACTIONS(136),
    [anon_sym_HTTP_SLASH_STAR] = ACTIONS(136),
    [anon_sym_HTTP] = ACTIONS(136),
    [anon_sym_LBRACKBasicAuth_RBRACK] = ACTIONS(64),
    [anon_sym_LBRACKQuery_RBRACK] = ACTIONS(66),
    [anon_sym_LBRACKQueryStringParams_RBRACK] = ACTIONS(66),
    [anon_sym_LBRACKForm_RBRACK] = ACTIONS(68),
    [anon_sym_LBRACKFormParams_RBRACK] = ACTIONS(68),
    [anon_sym_LBRACKMultipart_RBRACK] = ACTIONS(70),
    [anon_sym_LBRACKMultipartFormData_RBRACK] = ACTIONS(70),
    [anon_sym_LBRACKCookies_RBRACK] = ACTIONS(72),
    [anon_sym_LBRACKOptions_RBRACK] = ACTIONS(74),
    [anon_sym_null] = ACTIONS(138),
    [anon_sym_file_COMMA] = ACTIONS(78),
    [anon_sym_LBRACE] = ACTIONS(82),
    [anon_sym_LT] = ACTIONS(84),
    [anon_sym_LT_QMARK] = ACTIONS(86),
    [anon_sym_base64_COMMA] = ACTIONS(88),
    [anon_sym_hex_COMMA] = ACTIONS(90),
    [anon_sym_DQUOTE] = ACTIONS(92),
    [anon_sym_true] = ACTIONS(140),
    [anon_sym_false] = ACTIONS(140),
    [anon_sym_LBRACK] = ACTIONS(142),
    [anon_sym_BQUOTE] = ACTIONS(100),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(102),
    [sym__json_number] = ACTIONS(144),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(106),
    [sym_comment] = ACTIONS(136),
  },
  [13] = {
    [sym_body] = STATE(97),
    [sym_request_section] = STATE(37),
    [sym_basic_auth_section] = STATE(52),
    [sym_query_string_params_section] = STATE(52),
    [sym_form_params_section] = STATE(52),
    [sym_multipart_form_data_section] = STATE(52),
    [sym_cookies_section] = STATE(52),
    [sym_options_section] = STATE(52),
    [sym_bytes] = STATE(319),
    [sym_xml] = STATE(447),
    [sym_xml_prolog_tag] = STATE(248),
    [sym_xml_tag] = STATE(458),
    [sym_xml_self_closing_tag] = STATE(512),
    [sym_xml_open_tag] = STATE(161),
    [sym_oneline_base64] = STATE(447),
    [sym_oneline_file] = STATE(447),
    [sym_oneline_hex] = STATE(447),
    [sym_oneline_string] = STATE(447),
    [sym_multiline_string] = STATE(447),
    [sym_json_value] = STATE(447),
    [sym_json_object] = STATE(500),
    [sym_json_array] = STATE(500),
    [sym_json_string] = STATE(500),
    [sym_json_number] = STATE(500),
    [sym_json_boolean] = STATE(500),
    [sym_template] = STATE(500),
    [aux_sym_request_repeat2] = STATE(37),
    [aux_sym_xml_repeat1] = STATE(248),
    [ts_builtin_sym_end] = ACTIONS(112),
    [anon_sym_LF] = ACTIONS(112),
    [anon_sym_GET] = ACTIONS(114),
    [anon_sym_HEAD] = ACTIONS(114),
    [anon_sym_POST] = ACTIONS(114),
    [anon_sym_PUT] = ACTIONS(114),
    [anon_sym_DELETE] = ACTIONS(114),
    [anon_sym_CONNECT] = ACTIONS(114),
    [anon_sym_OPTIONS] = ACTIONS(114),
    [anon_sym_TRACE] = ACTIONS(114),
    [anon_sym_PATCH] = ACTIONS(114),
    [anon_sym_LINK] = ACTIONS(114),
    [anon_sym_UNLINK] = ACTIONS(114),
    [anon_sym_PURGE] = ACTIONS(114),
    [anon_sym_LOCK] = ACTIONS(114),
    [anon_sym_UNLOCK] = ACTIONS(114),
    [anon_sym_PROPFIND] = ACTIONS(114),
    [anon_sym_VIEW] = ACTIONS(114),
    [aux_sym_method_token1] = ACTIONS(114),
    [anon_sym_HTTP_SLASH1_DOT0] = ACTIONS(114),
    [anon_sym_HTTP_SLASH1_DOT1] = ACTIONS(114),
    [anon_sym_HTTP_SLASH2] = ACTIONS(114),
    [anon_sym_HTTP_SLASH3] = ACTIONS(114),
    [anon_sym_HTTP_SLASH_STAR] = ACTIONS(114),
    [anon_sym_HTTP] = ACTIONS(114),
    [anon_sym_LBRACKBasicAuth_RBRACK] = ACTIONS(64),
    [anon_sym_LBRACKQuery_RBRACK] = ACTIONS(66),
    [anon_sym_LBRACKQueryStringParams_RBRACK] = ACTIONS(66),
    [anon_sym_LBRACKForm_RBRACK] = ACTIONS(68),
    [anon_sym_LBRACKFormParams_RBRACK] = ACTIONS(68),
    [anon_sym_LBRACKMultipart_RBRACK] = ACTIONS(70),
    [anon_sym_LBRACKMultipartFormData_RBRACK] = ACTIONS(70),
    [anon_sym_LBRACKCookies_RBRACK] = ACTIONS(72),
    [anon_sym_LBRACKOptions_RBRACK] = ACTIONS(74),
    [anon_sym_null] = ACTIONS(138),
    [anon_sym_file_COMMA] = ACTIONS(78),
    [anon_sym_LBRACE] = ACTIONS(82),
    [anon_sym_LT] = ACTIONS(84),
    [anon_sym_LT_QMARK] = ACTIONS(86),
    [anon_sym_base64_COMMA] = ACTIONS(88),
    [anon_sym_hex_COMMA] = ACTIONS(90),
    [anon_sym_DQUOTE] = ACTIONS(92),
    [anon_sym_true] = ACTIONS(140),
    [anon_sym_false] = ACTIONS(140),
    [anon_sym_LBRACK] = ACTIONS(142),
    [anon_sym_BQUOTE] = ACTIONS(100),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(102),
    [sym__json_number] = ACTIONS(144),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(106),
    [sym_comment] = ACTIONS(114),
  },
  [14] = {
    [sym_body] = STATE(99),
    [sym_request_section] = STATE(37),
    [sym_basic_auth_section] = STATE(52),
    [sym_query_string_params_section] = STATE(52),
    [sym_form_params_section] = STATE(52),
    [sym_multipart_form_data_section] = STATE(52),
    [sym_cookies_section] = STATE(52),
    [sym_options_section] = STATE(52),
    [sym_bytes] = STATE(319),
    [sym_xml] = STATE(447),
    [sym_xml_prolog_tag] = STATE(248),
    [sym_xml_tag] = STATE(458),
    [sym_xml_self_closing_tag] = STATE(512),
    [sym_xml_open_tag] = STATE(161),
    [sym_oneline_base64] = STATE(447),
    [sym_oneline_file] = STATE(447),
    [sym_oneline_hex] = STATE(447),
    [sym_oneline_string] = STATE(447),
    [sym_multiline_string] = STATE(447),
    [sym_json_value] = STATE(447),
    [sym_json_object] = STATE(500),
    [sym_json_array] = STATE(500),
    [sym_json_string] = STATE(500),
    [sym_json_number] = STATE(500),
    [sym_json_boolean] = STATE(500),
    [sym_template] = STATE(500),
    [aux_sym_request_repeat2] = STATE(37),
    [aux_sym_xml_repeat1] = STATE(248),
    [ts_builtin_sym_end] = ACTIONS(108),
    [anon_sym_LF] = ACTIONS(108),
    [anon_sym_GET] = ACTIONS(110),
    [anon_sym_HEAD] = ACTIONS(110),
    [anon_sym_POST] = ACTIONS(110),
    [anon_sym_PUT] = ACTIONS(110),
    [anon_sym_DELETE] = ACTIONS(110),
    [anon_sym_CONNECT] = ACTIONS(110),
    [anon_sym_OPTIONS] = ACTIONS(110),
    [anon_sym_TRACE] = ACTIONS(110),
    [anon_sym_PATCH] = ACTIONS(110),
    [anon_sym_LINK] = ACTIONS(110),
    [anon_sym_UNLINK] = ACTIONS(110),
    [anon_sym_PURGE] = ACTIONS(110),
    [anon_sym_LOCK] = ACTIONS(110),
    [anon_sym_UNLOCK] = ACTIONS(110),
    [anon_sym_PROPFIND] = ACTIONS(110),
    [anon_sym_VIEW] = ACTIONS(110),
    [aux_sym_method_token1] = ACTIONS(110),
    [anon_sym_HTTP_SLASH1_DOT0] = ACTIONS(110),
    [anon_sym_HTTP_SLASH1_DOT1] = ACTIONS(110),
    [anon_sym_HTTP_SLASH2] = ACTIONS(110),
    [anon_sym_HTTP_SLASH3] = ACTIONS(110),
    [anon_sym_HTTP_SLASH_STAR] = ACTIONS(110),
    [anon_sym_HTTP] = ACTIONS(110),
    [anon_sym_LBRACKBasicAuth_RBRACK] = ACTIONS(64),
    [anon_sym_LBRACKQuery_RBRACK] = ACTIONS(66),
    [anon_sym_LBRACKQueryStringParams_RBRACK] = ACTIONS(66),
    [anon_sym_LBRACKForm_RBRACK] = ACTIONS(68),
    [anon_sym_LBRACKFormParams_RBRACK] = ACTIONS(68),
    [anon_sym_LBRACKMultipart_RBRACK] = ACTIONS(70),
    [anon_sym_LBRACKMultipartFormData_RBRACK] = ACTIONS(70),
    [anon_sym_LBRACKCookies_RBRACK] = ACTIONS(72),
    [anon_sym_LBRACKOptions_RBRACK] = ACTIONS(74),
    [anon_sym_null] = ACTIONS(138),
    [anon_sym_file_COMMA] = ACTIONS(78),
    [anon_sym_LBRACE] = ACTIONS(82),
    [anon_sym_LT] = ACTIONS(84),
    [anon_sym_LT_QMARK] = ACTIONS(86),
    [anon_sym_base64_COMMA] = ACTIONS(88),
    [anon_sym_hex_COMMA] = ACTIONS(90),
    [anon_sym_DQUOTE] = ACTIONS(92),
    [anon_sym_true] = ACTIONS(140),
    [anon_sym_false] = ACTIONS(140),
    [anon_sym_LBRACK] = ACTIONS(142),
    [anon_sym_BQUOTE] = ACTIONS(100),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(102),
    [sym__json_number] = ACTIONS(144),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(106),
    [sym_comment] = ACTIONS(110),
  },
  [15] = {
    [sym_header] = STATE(16),
    [sym_body] = STATE(126),
    [sym_response_section] = STATE(32),
    [sym_captures_section] = STATE(85),
    [sym_asserts_section] = STATE(85),
    [sym_key_value] = STATE(282),
    [sym_bytes] = STATE(281),
    [sym_xml] = STATE(447),
    [sym_xml_prolog_tag] = STATE(248),
    [sym_xml_tag] = STATE(458),
    [sym_xml_self_closing_tag] = STATE(512),
    [sym_xml_open_tag] = STATE(161),
    [sym_oneline_base64] = STATE(447),
    [sym_oneline_file] = STATE(447),
    [sym_oneline_hex] = STATE(447),
    [sym_key_string] = STATE(552),
    [sym_key_string_content] = STATE(159),
    [sym_key_string_text] = STATE(174),
    [sym_key_string_escaped_char] = STATE(174),
    [sym_oneline_string] = STATE(447),
    [sym_multiline_string] = STATE(447),
    [sym_json_value] = STATE(447),
    [sym_json_object] = STATE(500),
    [sym_json_array] = STATE(500),
    [sym_json_string] = STATE(500),
    [sym_json_number] = STATE(500),
    [sym_json_boolean] = STATE(500),
    [sym_template] = STATE(180),
    [aux_sym_request_repeat1] = STATE(16),
    [aux_sym_response_repeat1] = STATE(32),
    [aux_sym_xml_repeat1] = STATE(248),
    [aux_sym_key_string_repeat1] = STATE(159),
    [aux_sym_key_string_content_repeat1] = STATE(174),
    [aux_sym_key_string_text_repeat1] = STATE(194),
    [ts_builtin_sym_end] = ACTIONS(146),
    [anon_sym_LF] = ACTIONS(146),
    [anon_sym_GET] = ACTIONS(148),
    [anon_sym_HEAD] = ACTIONS(148),
    [anon_sym_POST] = ACTIONS(148),
    [anon_sym_PUT] = ACTIONS(148),
    [anon_sym_DELETE] = ACTIONS(148),
    [anon_sym_CONNECT] = ACTIONS(148),
    [anon_sym_OPTIONS] = ACTIONS(148),
    [anon_sym_TRACE] = ACTIONS(148),
    [anon_sym_PATCH] = ACTIONS(148),
    [anon_sym_LINK] = ACTIONS(148),
    [anon_sym_UNLINK] = ACTIONS(148),
    [anon_sym_PURGE] = ACTIONS(148),
    [anon_sym_LOCK] = ACTIONS(148),
    [anon_sym_UNLOCK] = ACTIONS(148),
    [anon_sym_PROPFIND] = ACTIONS(148),
    [anon_sym_VIEW] = ACTIONS(148),
    [aux_sym_method_token1] = ACTIONS(148),
    [anon_sym_LBRACKCaptures_RBRACK] = ACTIONS(150),
    [anon_sym_LBRACKAsserts_RBRACK] = ACTIONS(152),
    [anon_sym_null] = ACTIONS(76),
    [anon_sym_file_COMMA] = ACTIONS(78),
    [anon_sym_BSLASH] = ACTIONS(80),
    [anon_sym_LBRACE] = ACTIONS(82),
    [anon_sym_LT] = ACTIONS(84),
    [anon_sym_LT_QMARK] = ACTIONS(86),
    [anon_sym_base64_COMMA] = ACTIONS(88),
    [anon_sym_hex_COMMA] = ACTIONS(90),
    [anon_sym_DQUOTE] = ACTIONS(92),
    [aux_sym_key_string_text_token1] = ACTIONS(94),
    [anon_sym_true] = ACTIONS(96),
    [anon_sym_false] = ACTIONS(96),
    [anon_sym_LBRACK] = ACTIONS(98),
    [anon_sym_RBRACK] = ACTIONS(94),
    [anon_sym_BQUOTE] = ACTIONS(100),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(102),
    [sym__json_number] = ACTIONS(104),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(106),
    [sym_comment] = ACTIONS(148),
  },
  [16] = {
    [sym_header] = STATE(47),
    [sym_body] = STATE(127),
    [sym_response_section] = STATE(33),
    [sym_captures_section] = STATE(85),
    [sym_asserts_section] = STATE(85),
    [sym_key_value] = STATE(282),
    [sym_bytes] = STATE(281),
    [sym_xml] = STATE(447),
    [sym_xml_prolog_tag] = STATE(248),
    [sym_xml_tag] = STATE(458),
    [sym_xml_self_closing_tag] = STATE(512),
    [sym_xml_open_tag] = STATE(161),
    [sym_oneline_base64] = STATE(447),
    [sym_oneline_file] = STATE(447),
    [sym_oneline_hex] = STATE(447),
    [sym_key_string] = STATE(552),
    [sym_key_string_content] = STATE(159),
    [sym_key_string_text] = STATE(174),
    [sym_key_string_escaped_char] = STATE(174),
    [sym_oneline_string] = STATE(447),
    [sym_multiline_string] = STATE(447),
    [sym_json_value] = STATE(447),
    [sym_json_object] = STATE(500),
    [sym_json_array] = STATE(500),
    [sym_json_string] = STATE(500),
    [sym_json_number] = STATE(500),
    [sym_json_boolean] = STATE(500),
    [sym_template] = STATE(180),
    [aux_sym_request_repeat1] = STATE(47),
    [aux_sym_response_repeat1] = STATE(33),
    [aux_sym_xml_repeat1] = STATE(248),
    [aux_sym_key_string_repeat1] = STATE(159),
    [aux_sym_key_string_content_repeat1] = STATE(174),
    [aux_sym_key_string_text_repeat1] = STATE(194),
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
    [anon_sym_LBRACKCaptures_RBRACK] = ACTIONS(150),
    [anon_sym_LBRACKAsserts_RBRACK] = ACTIONS(152),
    [anon_sym_null] = ACTIONS(76),
    [anon_sym_file_COMMA] = ACTIONS(78),
    [anon_sym_BSLASH] = ACTIONS(80),
    [anon_sym_LBRACE] = ACTIONS(82),
    [anon_sym_LT] = ACTIONS(84),
    [anon_sym_LT_QMARK] = ACTIONS(86),
    [anon_sym_base64_COMMA] = ACTIONS(88),
    [anon_sym_hex_COMMA] = ACTIONS(90),
    [anon_sym_DQUOTE] = ACTIONS(92),
    [aux_sym_key_string_text_token1] = ACTIONS(94),
    [anon_sym_true] = ACTIONS(96),
    [anon_sym_false] = ACTIONS(96),
    [anon_sym_LBRACK] = ACTIONS(98),
    [anon_sym_RBRACK] = ACTIONS(94),
    [anon_sym_BQUOTE] = ACTIONS(100),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(102),
    [sym__json_number] = ACTIONS(104),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(106),
    [sym_comment] = ACTIONS(156),
  },
  [17] = {
    [sym_predicate] = STATE(293),
    [sym_predicate_func] = STATE(495),
    [sym_simple_predicate] = STATE(493),
    [sym_equal_predicate] = STATE(493),
    [sym_not_equal_predicate] = STATE(493),
    [sym_greater_predicate] = STATE(493),
    [sym_greater_or_equal_predicate] = STATE(493),
    [sym_less_predicate] = STATE(493),
    [sym_less_or_equal_predicate] = STATE(493),
    [sym_start_with_predicate] = STATE(493),
    [sym_end_with_predicate] = STATE(493),
    [sym_contain_predicate] = STATE(493),
    [sym_match_predicate] = STATE(493),
    [sym_include_predicate] = STATE(493),
    [sym_filter] = STATE(38),
    [sym_simple_filter_key] = STATE(64),
    [sym_argument_filter] = STATE(64),
    [sym_regex_filter] = STATE(64),
    [sym_nth_filter] = STATE(64),
    [sym_replace_filter] = STATE(64),
    [sym_split_filter] = STATE(64),
    [sym_xpath_filter] = STATE(64),
    [aux_sym_capture_repeat1] = STATE(38),
    [anon_sym_xpath] = ACTIONS(158),
    [anon_sym_regex] = ACTIONS(160),
    [anon_sym_not] = ACTIONS(162),
    [anon_sym_exists] = ACTIONS(164),
    [anon_sym_isInteger] = ACTIONS(164),
    [anon_sym_isFloat] = ACTIONS(164),
    [anon_sym_isBoolean] = ACTIONS(164),
    [anon_sym_isString] = ACTIONS(164),
    [anon_sym_isCollection] = ACTIONS(164),
    [anon_sym_isNumber] = ACTIONS(164),
    [anon_sym_isIsoDate] = ACTIONS(164),
    [anon_sym_isEmpty] = ACTIONS(164),
    [anon_sym_isIpv4] = ACTIONS(164),
    [anon_sym_isIpv6] = ACTIONS(164),
    [anon_sym_isUuid] = ACTIONS(164),
    [anon_sym_equals] = ACTIONS(166),
    [anon_sym_EQ_EQ] = ACTIONS(168),
    [anon_sym_notEquals] = ACTIONS(170),
    [anon_sym_BANG_EQ] = ACTIONS(172),
    [anon_sym_greaterThan] = ACTIONS(174),
    [anon_sym_GT] = ACTIONS(176),
    [anon_sym_greaterThanOrEquals] = ACTIONS(178),
    [anon_sym_GT_EQ] = ACTIONS(180),
    [anon_sym_lessThan] = ACTIONS(182),
    [anon_sym_LT] = ACTIONS(184),
    [anon_sym_lessThanOrEquals] = ACTIONS(186),
    [anon_sym_LT_EQ] = ACTIONS(188),
    [anon_sym_startsWith] = ACTIONS(190),
    [anon_sym_endsWith] = ACTIONS(192),
    [anon_sym_contains] = ACTIONS(194),
    [anon_sym_matches] = ACTIONS(196),
    [anon_sym_includes] = ACTIONS(198),
    [anon_sym_count] = ACTIONS(200),
    [anon_sym_urlEncode] = ACTIONS(200),
    [anon_sym_urlDecode] = ACTIONS(200),
    [anon_sym_toInt] = ACTIONS(200),
    [anon_sym_htmlEscape] = ACTIONS(200),
    [anon_sym_htmlUnescape] = ACTIONS(200),
    [anon_sym_daysAfterNow] = ACTIONS(200),
    [anon_sym_daysBeforeNow] = ACTIONS(200),
    [anon_sym_decode] = ACTIONS(202),
    [anon_sym_format] = ACTIONS(202),
    [anon_sym_toDate] = ACTIONS(202),
    [anon_sym_nth] = ACTIONS(204),
    [anon_sym_replace] = ACTIONS(206),
    [anon_sym_split] = ACTIONS(208),
    [sym_comment] = ACTIONS(210),
  },
  [18] = {
    [sym_predicate] = STATE(301),
    [sym_predicate_func] = STATE(495),
    [sym_simple_predicate] = STATE(493),
    [sym_equal_predicate] = STATE(493),
    [sym_not_equal_predicate] = STATE(493),
    [sym_greater_predicate] = STATE(493),
    [sym_greater_or_equal_predicate] = STATE(493),
    [sym_less_predicate] = STATE(493),
    [sym_less_or_equal_predicate] = STATE(493),
    [sym_start_with_predicate] = STATE(493),
    [sym_end_with_predicate] = STATE(493),
    [sym_contain_predicate] = STATE(493),
    [sym_match_predicate] = STATE(493),
    [sym_include_predicate] = STATE(493),
    [sym_filter] = STATE(17),
    [sym_simple_filter_key] = STATE(64),
    [sym_argument_filter] = STATE(64),
    [sym_regex_filter] = STATE(64),
    [sym_nth_filter] = STATE(64),
    [sym_replace_filter] = STATE(64),
    [sym_split_filter] = STATE(64),
    [sym_xpath_filter] = STATE(64),
    [aux_sym_capture_repeat1] = STATE(17),
    [anon_sym_xpath] = ACTIONS(158),
    [anon_sym_regex] = ACTIONS(160),
    [anon_sym_not] = ACTIONS(162),
    [anon_sym_exists] = ACTIONS(164),
    [anon_sym_isInteger] = ACTIONS(164),
    [anon_sym_isFloat] = ACTIONS(164),
    [anon_sym_isBoolean] = ACTIONS(164),
    [anon_sym_isString] = ACTIONS(164),
    [anon_sym_isCollection] = ACTIONS(164),
    [anon_sym_isNumber] = ACTIONS(164),
    [anon_sym_isIsoDate] = ACTIONS(164),
    [anon_sym_isEmpty] = ACTIONS(164),
    [anon_sym_isIpv4] = ACTIONS(164),
    [anon_sym_isIpv6] = ACTIONS(164),
    [anon_sym_isUuid] = ACTIONS(164),
    [anon_sym_equals] = ACTIONS(166),
    [anon_sym_EQ_EQ] = ACTIONS(168),
    [anon_sym_notEquals] = ACTIONS(170),
    [anon_sym_BANG_EQ] = ACTIONS(172),
    [anon_sym_greaterThan] = ACTIONS(174),
    [anon_sym_GT] = ACTIONS(176),
    [anon_sym_greaterThanOrEquals] = ACTIONS(178),
    [anon_sym_GT_EQ] = ACTIONS(180),
    [anon_sym_lessThan] = ACTIONS(182),
    [anon_sym_LT] = ACTIONS(184),
    [anon_sym_lessThanOrEquals] = ACTIONS(186),
    [anon_sym_LT_EQ] = ACTIONS(188),
    [anon_sym_startsWith] = ACTIONS(190),
    [anon_sym_endsWith] = ACTIONS(192),
    [anon_sym_contains] = ACTIONS(194),
    [anon_sym_matches] = ACTIONS(196),
    [anon_sym_includes] = ACTIONS(198),
    [anon_sym_count] = ACTIONS(200),
    [anon_sym_urlEncode] = ACTIONS(200),
    [anon_sym_urlDecode] = ACTIONS(200),
    [anon_sym_toInt] = ACTIONS(200),
    [anon_sym_htmlEscape] = ACTIONS(200),
    [anon_sym_htmlUnescape] = ACTIONS(200),
    [anon_sym_daysAfterNow] = ACTIONS(200),
    [anon_sym_daysBeforeNow] = ACTIONS(200),
    [anon_sym_decode] = ACTIONS(202),
    [anon_sym_format] = ACTIONS(202),
    [anon_sym_toDate] = ACTIONS(202),
    [anon_sym_nth] = ACTIONS(204),
    [anon_sym_replace] = ACTIONS(206),
    [anon_sym_split] = ACTIONS(208),
    [sym_comment] = ACTIONS(210),
  },
  [19] = {
    [sym_key_value] = STATE(410),
    [sym_multipart_form_data_param] = STATE(277),
    [sym_file_param] = STATE(410),
    [sym_key_string] = STATE(577),
    [sym_key_string_content] = STATE(159),
    [sym_key_string_text] = STATE(174),
    [sym_key_string_escaped_char] = STATE(174),
    [sym_template] = STATE(159),
    [aux_sym_multipart_form_data_section_repeat1] = STATE(21),
    [aux_sym_key_string_repeat1] = STATE(159),
    [aux_sym_key_string_content_repeat1] = STATE(174),
    [aux_sym_key_string_text_repeat1] = STATE(194),
    [ts_builtin_sym_end] = ACTIONS(212),
    [anon_sym_LF] = ACTIONS(212),
    [anon_sym_GET] = ACTIONS(214),
    [anon_sym_HEAD] = ACTIONS(214),
    [anon_sym_POST] = ACTIONS(214),
    [anon_sym_PUT] = ACTIONS(214),
    [anon_sym_DELETE] = ACTIONS(214),
    [anon_sym_CONNECT] = ACTIONS(214),
    [anon_sym_OPTIONS] = ACTIONS(214),
    [anon_sym_TRACE] = ACTIONS(214),
    [anon_sym_PATCH] = ACTIONS(214),
    [anon_sym_LINK] = ACTIONS(214),
    [anon_sym_UNLINK] = ACTIONS(214),
    [anon_sym_PURGE] = ACTIONS(214),
    [anon_sym_LOCK] = ACTIONS(214),
    [anon_sym_UNLOCK] = ACTIONS(214),
    [anon_sym_PROPFIND] = ACTIONS(214),
    [anon_sym_VIEW] = ACTIONS(214),
    [aux_sym_method_token1] = ACTIONS(214),
    [anon_sym_HTTP_SLASH1_DOT0] = ACTIONS(214),
    [anon_sym_HTTP_SLASH1_DOT1] = ACTIONS(214),
    [anon_sym_HTTP_SLASH2] = ACTIONS(214),
    [anon_sym_HTTP_SLASH3] = ACTIONS(214),
    [anon_sym_HTTP_SLASH_STAR] = ACTIONS(214),
    [anon_sym_HTTP] = ACTIONS(214),
    [anon_sym_LBRACKBasicAuth_RBRACK] = ACTIONS(214),
    [anon_sym_LBRACKQuery_RBRACK] = ACTIONS(214),
    [anon_sym_LBRACKQueryStringParams_RBRACK] = ACTIONS(214),
    [anon_sym_LBRACKForm_RBRACK] = ACTIONS(214),
    [anon_sym_LBRACKFormParams_RBRACK] = ACTIONS(214),
    [anon_sym_LBRACKMultipart_RBRACK] = ACTIONS(214),
    [anon_sym_LBRACKMultipartFormData_RBRACK] = ACTIONS(214),
    [anon_sym_LBRACKCookies_RBRACK] = ACTIONS(214),
    [anon_sym_LBRACKOptions_RBRACK] = ACTIONS(214),
    [anon_sym_null] = ACTIONS(214),
    [anon_sym_file_COMMA] = ACTIONS(214),
    [anon_sym_BSLASH] = ACTIONS(80),
    [anon_sym_LBRACE] = ACTIONS(214),
    [anon_sym_LT] = ACTIONS(214),
    [anon_sym_LT_QMARK] = ACTIONS(214),
    [anon_sym_base64_COMMA] = ACTIONS(214),
    [anon_sym_hex_COMMA] = ACTIONS(214),
    [anon_sym_DQUOTE] = ACTIONS(214),
    [aux_sym_key_string_text_token1] = ACTIONS(94),
    [anon_sym_true] = ACTIONS(214),
    [anon_sym_false] = ACTIONS(214),
    [anon_sym_LBRACK] = ACTIONS(214),
    [anon_sym_RBRACK] = ACTIONS(94),
    [anon_sym_BQUOTE] = ACTIONS(214),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(214),
    [sym__json_number] = ACTIONS(214),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(214),
    [sym_comment] = ACTIONS(214),
  },
  [20] = {
    [sym_key_value] = STATE(410),
    [sym_multipart_form_data_param] = STATE(277),
    [sym_file_param] = STATE(410),
    [sym_key_string] = STATE(577),
    [sym_key_string_content] = STATE(159),
    [sym_key_string_text] = STATE(174),
    [sym_key_string_escaped_char] = STATE(174),
    [sym_template] = STATE(159),
    [aux_sym_multipart_form_data_section_repeat1] = STATE(19),
    [aux_sym_key_string_repeat1] = STATE(159),
    [aux_sym_key_string_content_repeat1] = STATE(174),
    [aux_sym_key_string_text_repeat1] = STATE(194),
    [ts_builtin_sym_end] = ACTIONS(216),
    [anon_sym_LF] = ACTIONS(216),
    [anon_sym_GET] = ACTIONS(218),
    [anon_sym_HEAD] = ACTIONS(218),
    [anon_sym_POST] = ACTIONS(218),
    [anon_sym_PUT] = ACTIONS(218),
    [anon_sym_DELETE] = ACTIONS(218),
    [anon_sym_CONNECT] = ACTIONS(218),
    [anon_sym_OPTIONS] = ACTIONS(218),
    [anon_sym_TRACE] = ACTIONS(218),
    [anon_sym_PATCH] = ACTIONS(218),
    [anon_sym_LINK] = ACTIONS(218),
    [anon_sym_UNLINK] = ACTIONS(218),
    [anon_sym_PURGE] = ACTIONS(218),
    [anon_sym_LOCK] = ACTIONS(218),
    [anon_sym_UNLOCK] = ACTIONS(218),
    [anon_sym_PROPFIND] = ACTIONS(218),
    [anon_sym_VIEW] = ACTIONS(218),
    [aux_sym_method_token1] = ACTIONS(218),
    [anon_sym_HTTP_SLASH1_DOT0] = ACTIONS(218),
    [anon_sym_HTTP_SLASH1_DOT1] = ACTIONS(218),
    [anon_sym_HTTP_SLASH2] = ACTIONS(218),
    [anon_sym_HTTP_SLASH3] = ACTIONS(218),
    [anon_sym_HTTP_SLASH_STAR] = ACTIONS(218),
    [anon_sym_HTTP] = ACTIONS(218),
    [anon_sym_LBRACKBasicAuth_RBRACK] = ACTIONS(218),
    [anon_sym_LBRACKQuery_RBRACK] = ACTIONS(218),
    [anon_sym_LBRACKQueryStringParams_RBRACK] = ACTIONS(218),
    [anon_sym_LBRACKForm_RBRACK] = ACTIONS(218),
    [anon_sym_LBRACKFormParams_RBRACK] = ACTIONS(218),
    [anon_sym_LBRACKMultipart_RBRACK] = ACTIONS(218),
    [anon_sym_LBRACKMultipartFormData_RBRACK] = ACTIONS(218),
    [anon_sym_LBRACKCookies_RBRACK] = ACTIONS(218),
    [anon_sym_LBRACKOptions_RBRACK] = ACTIONS(218),
    [anon_sym_null] = ACTIONS(218),
    [anon_sym_file_COMMA] = ACTIONS(218),
    [anon_sym_BSLASH] = ACTIONS(80),
    [anon_sym_LBRACE] = ACTIONS(218),
    [anon_sym_LT] = ACTIONS(218),
    [anon_sym_LT_QMARK] = ACTIONS(218),
    [anon_sym_base64_COMMA] = ACTIONS(218),
    [anon_sym_hex_COMMA] = ACTIONS(218),
    [anon_sym_DQUOTE] = ACTIONS(218),
    [aux_sym_key_string_text_token1] = ACTIONS(94),
    [anon_sym_true] = ACTIONS(218),
    [anon_sym_false] = ACTIONS(218),
    [anon_sym_LBRACK] = ACTIONS(218),
    [anon_sym_RBRACK] = ACTIONS(94),
    [anon_sym_BQUOTE] = ACTIONS(218),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(218),
    [sym__json_number] = ACTIONS(218),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(218),
    [sym_comment] = ACTIONS(218),
  },
  [21] = {
    [sym_key_value] = STATE(410),
    [sym_multipart_form_data_param] = STATE(277),
    [sym_file_param] = STATE(410),
    [sym_key_string] = STATE(577),
    [sym_key_string_content] = STATE(159),
    [sym_key_string_text] = STATE(174),
    [sym_key_string_escaped_char] = STATE(174),
    [sym_template] = STATE(159),
    [aux_sym_multipart_form_data_section_repeat1] = STATE(21),
    [aux_sym_key_string_repeat1] = STATE(159),
    [aux_sym_key_string_content_repeat1] = STATE(174),
    [aux_sym_key_string_text_repeat1] = STATE(194),
    [ts_builtin_sym_end] = ACTIONS(220),
    [anon_sym_LF] = ACTIONS(220),
    [anon_sym_GET] = ACTIONS(222),
    [anon_sym_HEAD] = ACTIONS(222),
    [anon_sym_POST] = ACTIONS(222),
    [anon_sym_PUT] = ACTIONS(222),
    [anon_sym_DELETE] = ACTIONS(222),
    [anon_sym_CONNECT] = ACTIONS(222),
    [anon_sym_OPTIONS] = ACTIONS(222),
    [anon_sym_TRACE] = ACTIONS(222),
    [anon_sym_PATCH] = ACTIONS(222),
    [anon_sym_LINK] = ACTIONS(222),
    [anon_sym_UNLINK] = ACTIONS(222),
    [anon_sym_PURGE] = ACTIONS(222),
    [anon_sym_LOCK] = ACTIONS(222),
    [anon_sym_UNLOCK] = ACTIONS(222),
    [anon_sym_PROPFIND] = ACTIONS(222),
    [anon_sym_VIEW] = ACTIONS(222),
    [aux_sym_method_token1] = ACTIONS(222),
    [anon_sym_HTTP_SLASH1_DOT0] = ACTIONS(222),
    [anon_sym_HTTP_SLASH1_DOT1] = ACTIONS(222),
    [anon_sym_HTTP_SLASH2] = ACTIONS(222),
    [anon_sym_HTTP_SLASH3] = ACTIONS(222),
    [anon_sym_HTTP_SLASH_STAR] = ACTIONS(222),
    [anon_sym_HTTP] = ACTIONS(222),
    [anon_sym_LBRACKBasicAuth_RBRACK] = ACTIONS(222),
    [anon_sym_LBRACKQuery_RBRACK] = ACTIONS(222),
    [anon_sym_LBRACKQueryStringParams_RBRACK] = ACTIONS(222),
    [anon_sym_LBRACKForm_RBRACK] = ACTIONS(222),
    [anon_sym_LBRACKFormParams_RBRACK] = ACTIONS(222),
    [anon_sym_LBRACKMultipart_RBRACK] = ACTIONS(222),
    [anon_sym_LBRACKMultipartFormData_RBRACK] = ACTIONS(222),
    [anon_sym_LBRACKCookies_RBRACK] = ACTIONS(222),
    [anon_sym_LBRACKOptions_RBRACK] = ACTIONS(222),
    [anon_sym_null] = ACTIONS(224),
    [anon_sym_file_COMMA] = ACTIONS(222),
    [anon_sym_BSLASH] = ACTIONS(227),
    [anon_sym_LBRACE] = ACTIONS(222),
    [anon_sym_LT] = ACTIONS(222),
    [anon_sym_LT_QMARK] = ACTIONS(222),
    [anon_sym_base64_COMMA] = ACTIONS(222),
    [anon_sym_hex_COMMA] = ACTIONS(222),
    [anon_sym_DQUOTE] = ACTIONS(222),
    [aux_sym_key_string_text_token1] = ACTIONS(224),
    [anon_sym_true] = ACTIONS(224),
    [anon_sym_false] = ACTIONS(224),
    [anon_sym_LBRACK] = ACTIONS(224),
    [anon_sym_RBRACK] = ACTIONS(224),
    [anon_sym_BQUOTE] = ACTIONS(222),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(222),
    [sym__json_number] = ACTIONS(224),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(230),
    [sym_comment] = ACTIONS(222),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 11,
    ACTIONS(240), 1,
      anon_sym_BSLASH,
    ACTIONS(243), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(194), 1,
      aux_sym_key_string_text_repeat1,
    STATE(322), 1,
      sym_key_value,
    STATE(552), 1,
      sym_key_string,
    ACTIONS(233), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(22), 2,
      sym_header,
      aux_sym_request_repeat1,
    STATE(159), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
    STATE(174), 3,
      sym_key_string_text,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    ACTIONS(237), 7,
      anon_sym_null,
      aux_sym_key_string_text_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym__json_number,
    ACTIONS(235), 42,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
      anon_sym_file_COMMA,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_comment,
  [87] = 10,
    ACTIONS(80), 1,
      anon_sym_BSLASH,
    ACTIONS(250), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(194), 1,
      aux_sym_key_string_text_repeat1,
    STATE(472), 1,
      sym_key_value,
    STATE(552), 1,
      sym_key_string,
    ACTIONS(246), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(159), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
    STATE(174), 3,
      sym_key_string_text,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    ACTIONS(94), 7,
      anon_sym_null,
      aux_sym_key_string_text_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym__json_number,
    ACTIONS(248), 42,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
      anon_sym_file_COMMA,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_comment,
  [170] = 10,
    ACTIONS(80), 1,
      anon_sym_BSLASH,
    ACTIONS(250), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(194), 1,
      aux_sym_key_string_text_repeat1,
    STATE(472), 1,
      sym_key_value,
    STATE(552), 1,
      sym_key_string,
    ACTIONS(252), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(159), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
    STATE(174), 3,
      sym_key_string_text,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    ACTIONS(94), 7,
      anon_sym_null,
      aux_sym_key_string_text_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym__json_number,
    ACTIONS(254), 42,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
      anon_sym_file_COMMA,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_comment,
  [253] = 10,
    ACTIONS(80), 1,
      anon_sym_BSLASH,
    ACTIONS(250), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(194), 1,
      aux_sym_key_string_text_repeat1,
    STATE(472), 1,
      sym_key_value,
    STATE(552), 1,
      sym_key_string,
    ACTIONS(256), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(159), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
    STATE(174), 3,
      sym_key_string_text,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    ACTIONS(94), 7,
      anon_sym_null,
      aux_sym_key_string_text_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym__json_number,
    ACTIONS(258), 42,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
      anon_sym_file_COMMA,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_comment,
  [336] = 10,
    ACTIONS(80), 1,
      anon_sym_BSLASH,
    ACTIONS(250), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(194), 1,
      aux_sym_key_string_text_repeat1,
    STATE(472), 1,
      sym_key_value,
    STATE(552), 1,
      sym_key_string,
    ACTIONS(260), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(159), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
    STATE(174), 3,
      sym_key_string_text,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    ACTIONS(94), 7,
      anon_sym_null,
      aux_sym_key_string_text_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym__json_number,
    ACTIONS(262), 42,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
      anon_sym_file_COMMA,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_comment,
  [419] = 10,
    ACTIONS(80), 1,
      anon_sym_BSLASH,
    ACTIONS(250), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(194), 1,
      aux_sym_key_string_text_repeat1,
    STATE(472), 1,
      sym_key_value,
    STATE(552), 1,
      sym_key_string,
    ACTIONS(264), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(159), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
    STATE(174), 3,
      sym_key_string_text,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    ACTIONS(94), 7,
      anon_sym_null,
      aux_sym_key_string_text_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym__json_number,
    ACTIONS(266), 42,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
      anon_sym_file_COMMA,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_comment,
  [502] = 10,
    ACTIONS(80), 1,
      anon_sym_BSLASH,
    ACTIONS(250), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(194), 1,
      aux_sym_key_string_text_repeat1,
    STATE(472), 1,
      sym_key_value,
    STATE(552), 1,
      sym_key_string,
    ACTIONS(268), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(159), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
    STATE(174), 3,
      sym_key_string_text,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    ACTIONS(94), 7,
      anon_sym_null,
      aux_sym_key_string_text_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym__json_number,
    ACTIONS(270), 42,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
      anon_sym_file_COMMA,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_comment,
  [585] = 10,
    ACTIONS(80), 1,
      anon_sym_BSLASH,
    ACTIONS(250), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(194), 1,
      aux_sym_key_string_text_repeat1,
    STATE(472), 1,
      sym_key_value,
    STATE(552), 1,
      sym_key_string,
    ACTIONS(272), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(159), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
    STATE(174), 3,
      sym_key_string_text,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    ACTIONS(94), 7,
      anon_sym_null,
      aux_sym_key_string_text_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym__json_number,
    ACTIONS(274), 42,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
      anon_sym_file_COMMA,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_comment,
  [668] = 10,
    ACTIONS(80), 1,
      anon_sym_BSLASH,
    ACTIONS(250), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(194), 1,
      aux_sym_key_string_text_repeat1,
    STATE(472), 1,
      sym_key_value,
    STATE(552), 1,
      sym_key_string,
    ACTIONS(276), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(159), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
    STATE(174), 3,
      sym_key_string_text,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    ACTIONS(94), 7,
      anon_sym_null,
      aux_sym_key_string_text_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym__json_number,
    ACTIONS(278), 42,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
      anon_sym_file_COMMA,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_comment,
  [751] = 10,
    ACTIONS(80), 1,
      anon_sym_BSLASH,
    ACTIONS(250), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(194), 1,
      aux_sym_key_string_text_repeat1,
    STATE(472), 1,
      sym_key_value,
    STATE(552), 1,
      sym_key_string,
    ACTIONS(280), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(159), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
    STATE(174), 3,
      sym_key_string_text,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    ACTIONS(94), 7,
      anon_sym_null,
      aux_sym_key_string_text_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym__json_number,
    ACTIONS(282), 42,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
      anon_sym_file_COMMA,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_comment,
  [834] = 28,
    ACTIONS(78), 1,
      anon_sym_file_COMMA,
    ACTIONS(82), 1,
      anon_sym_LBRACE,
    ACTIONS(84), 1,
      anon_sym_LT,
    ACTIONS(86), 1,
      anon_sym_LT_QMARK,
    ACTIONS(88), 1,
      anon_sym_base64_COMMA,
    ACTIONS(90), 1,
      anon_sym_hex_COMMA,
    ACTIONS(92), 1,
      anon_sym_DQUOTE,
    ACTIONS(100), 1,
      anon_sym_BQUOTE,
    ACTIONS(102), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(106), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(138), 1,
      anon_sym_null,
    ACTIONS(142), 1,
      anon_sym_LBRACK,
    ACTIONS(144), 1,
      sym__json_number,
    ACTIONS(150), 1,
      anon_sym_LBRACKCaptures_RBRACK,
    ACTIONS(152), 1,
      anon_sym_LBRACKAsserts_RBRACK,
    STATE(127), 1,
      sym_body,
    STATE(161), 1,
      sym_xml_open_tag,
    STATE(281), 1,
      sym_bytes,
    STATE(458), 1,
      sym_xml_tag,
    STATE(512), 1,
      sym_xml_self_closing_tag,
    ACTIONS(140), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(154), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(80), 2,
      sym_response_section,
      aux_sym_response_repeat1,
    STATE(85), 2,
      sym_captures_section,
      sym_asserts_section,
    STATE(248), 2,
      sym_xml_prolog_tag,
      aux_sym_xml_repeat1,
    STATE(500), 6,
      sym_json_object,
      sym_json_array,
      sym_json_string,
      sym_json_number,
      sym_json_boolean,
      sym_template,
    STATE(447), 7,
      sym_xml,
      sym_oneline_base64,
      sym_oneline_file,
      sym_oneline_hex,
      sym_oneline_string,
      sym_multiline_string,
      sym_json_value,
    ACTIONS(156), 18,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
  [952] = 28,
    ACTIONS(78), 1,
      anon_sym_file_COMMA,
    ACTIONS(82), 1,
      anon_sym_LBRACE,
    ACTIONS(84), 1,
      anon_sym_LT,
    ACTIONS(86), 1,
      anon_sym_LT_QMARK,
    ACTIONS(88), 1,
      anon_sym_base64_COMMA,
    ACTIONS(90), 1,
      anon_sym_hex_COMMA,
    ACTIONS(92), 1,
      anon_sym_DQUOTE,
    ACTIONS(100), 1,
      anon_sym_BQUOTE,
    ACTIONS(102), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(106), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(138), 1,
      anon_sym_null,
    ACTIONS(142), 1,
      anon_sym_LBRACK,
    ACTIONS(144), 1,
      sym__json_number,
    ACTIONS(150), 1,
      anon_sym_LBRACKCaptures_RBRACK,
    ACTIONS(152), 1,
      anon_sym_LBRACKAsserts_RBRACK,
    STATE(125), 1,
      sym_body,
    STATE(161), 1,
      sym_xml_open_tag,
    STATE(281), 1,
      sym_bytes,
    STATE(458), 1,
      sym_xml_tag,
    STATE(512), 1,
      sym_xml_self_closing_tag,
    ACTIONS(140), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(284), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(80), 2,
      sym_response_section,
      aux_sym_response_repeat1,
    STATE(85), 2,
      sym_captures_section,
      sym_asserts_section,
    STATE(248), 2,
      sym_xml_prolog_tag,
      aux_sym_xml_repeat1,
    STATE(500), 6,
      sym_json_object,
      sym_json_array,
      sym_json_string,
      sym_json_number,
      sym_json_boolean,
      sym_template,
    STATE(447), 7,
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
  [1070] = 12,
    ACTIONS(292), 1,
      anon_sym_header,
    ACTIONS(294), 1,
      anon_sym_variable,
    ACTIONS(298), 1,
      anon_sym_cookie,
    ACTIONS(300), 1,
      anon_sym_xpath,
    ACTIONS(302), 1,
      anon_sym_jsonpath,
    ACTIONS(304), 1,
      anon_sym_regex,
    STATE(18), 1,
      sym_query,
    ACTIONS(288), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(35), 2,
      sym_assert,
      aux_sym_asserts_section_repeat1,
    ACTIONS(296), 7,
      anon_sym_status,
      anon_sym_url,
      anon_sym_body,
      anon_sym_duration,
      anon_sym_bytes,
      anon_sym_sha256,
      anon_sym_md5,
    STATE(70), 7,
      sym_simple_query,
      sym_header_query,
      sym_cookie_query,
      sym_xpath_query,
      sym_jsonpath_query,
      sym_regex_query,
      sym_variable_query,
    ACTIONS(290), 35,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LBRACK,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__json_number,
      anon_sym_LBRACE_LBRACE,
      sym_comment,
  [1155] = 12,
    ACTIONS(310), 1,
      anon_sym_header,
    ACTIONS(313), 1,
      anon_sym_variable,
    ACTIONS(319), 1,
      anon_sym_cookie,
    ACTIONS(322), 1,
      anon_sym_xpath,
    ACTIONS(325), 1,
      anon_sym_jsonpath,
    ACTIONS(328), 1,
      anon_sym_regex,
    STATE(18), 1,
      sym_query,
    ACTIONS(306), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(35), 2,
      sym_assert,
      aux_sym_asserts_section_repeat1,
    ACTIONS(316), 7,
      anon_sym_status,
      anon_sym_url,
      anon_sym_body,
      anon_sym_duration,
      anon_sym_bytes,
      anon_sym_sha256,
      anon_sym_md5,
    STATE(70), 7,
      sym_simple_query,
      sym_header_query,
      sym_cookie_query,
      sym_xpath_query,
      sym_jsonpath_query,
      sym_regex_query,
      sym_variable_query,
    ACTIONS(308), 35,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LBRACK,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__json_number,
      anon_sym_LBRACE_LBRACE,
      sym_comment,
  [1240] = 12,
    ACTIONS(292), 1,
      anon_sym_header,
    ACTIONS(294), 1,
      anon_sym_variable,
    ACTIONS(298), 1,
      anon_sym_cookie,
    ACTIONS(300), 1,
      anon_sym_xpath,
    ACTIONS(302), 1,
      anon_sym_jsonpath,
    ACTIONS(304), 1,
      anon_sym_regex,
    STATE(18), 1,
      sym_query,
    ACTIONS(331), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(34), 2,
      sym_assert,
      aux_sym_asserts_section_repeat1,
    ACTIONS(296), 7,
      anon_sym_status,
      anon_sym_url,
      anon_sym_body,
      anon_sym_duration,
      anon_sym_bytes,
      anon_sym_sha256,
      anon_sym_md5,
    STATE(70), 7,
      sym_simple_query,
      sym_header_query,
      sym_cookie_query,
      sym_xpath_query,
      sym_jsonpath_query,
      sym_regex_query,
      sym_variable_query,
    ACTIONS(333), 35,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LBRACK,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__json_number,
      anon_sym_LBRACE_LBRACE,
      sym_comment,
  [1325] = 10,
    ACTIONS(339), 1,
      anon_sym_LBRACKBasicAuth_RBRACK,
    ACTIONS(351), 1,
      anon_sym_LBRACKCookies_RBRACK,
    ACTIONS(354), 1,
      anon_sym_LBRACKOptions_RBRACK,
    ACTIONS(335), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(342), 2,
      anon_sym_LBRACKQuery_RBRACK,
      anon_sym_LBRACKQueryStringParams_RBRACK,
    ACTIONS(345), 2,
      anon_sym_LBRACKForm_RBRACK,
      anon_sym_LBRACKFormParams_RBRACK,
    ACTIONS(348), 2,
      anon_sym_LBRACKMultipart_RBRACK,
      anon_sym_LBRACKMultipartFormData_RBRACK,
    STATE(37), 2,
      sym_request_section,
      aux_sym_request_repeat2,
    STATE(52), 6,
      sym_basic_auth_section,
      sym_query_string_params_section,
      sym_form_params_section,
      sym_multipart_form_data_section,
      sym_cookies_section,
      sym_options_section,
    ACTIONS(337), 39,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LBRACK,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__json_number,
      anon_sym_LBRACE_LBRACE,
      sym_comment,
  [1404] = 12,
    ACTIONS(210), 1,
      sym_comment,
    ACTIONS(357), 1,
      anon_sym_xpath,
    ACTIONS(360), 1,
      anon_sym_regex,
    ACTIONS(373), 1,
      anon_sym_nth,
    ACTIONS(376), 1,
      anon_sym_replace,
    ACTIONS(379), 1,
      anon_sym_split,
    STATE(38), 2,
      sym_filter,
      aux_sym_capture_repeat1,
    ACTIONS(370), 3,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_toDate,
    ACTIONS(363), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    STATE(64), 7,
      sym_simple_filter_key,
      sym_argument_filter,
      sym_regex_filter,
      sym_nth_filter,
      sym_replace_filter,
      sym_split_filter,
      sym_xpath_filter,
    ACTIONS(367), 8,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_toInt,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
    ACTIONS(365), 26,
      anon_sym_exists,
      anon_sym_isInteger,
      anon_sym_isFloat,
      anon_sym_isBoolean,
      anon_sym_isString,
      anon_sym_isCollection,
      anon_sym_isNumber,
      anon_sym_isIsoDate,
      anon_sym_isEmpty,
      anon_sym_isIpv4,
      anon_sym_isIpv6,
      anon_sym_isUuid,
      anon_sym_equals,
      anon_sym_EQ_EQ,
      anon_sym_notEquals,
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
  [1486] = 5,
    ACTIONS(116), 1,
      ts_builtin_sym_end,
    ACTIONS(382), 1,
      anon_sym_LF,
    ACTIONS(385), 1,
      sym_comment,
    STATE(39), 1,
      aux_sym__comment_or_new_line_repeat1,
    ACTIONS(121), 50,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
      anon_sym_BSLASH,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      aux_sym_key_string_text_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__json_number,
      anon_sym_LBRACE_LBRACE,
  [1551] = 5,
    ACTIONS(126), 1,
      ts_builtin_sym_end,
    ACTIONS(388), 1,
      anon_sym_LF,
    ACTIONS(390), 1,
      sym_comment,
    STATE(39), 1,
      aux_sym__comment_or_new_line_repeat1,
    ACTIONS(130), 50,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
      anon_sym_BSLASH,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      aux_sym_key_string_text_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__json_number,
      anon_sym_LBRACE_LBRACE,
  [1616] = 2,
    ACTIONS(220), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(222), 51,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
      anon_sym_BSLASH,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      aux_sym_key_string_text_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__json_number,
      anon_sym_LBRACE_LBRACE,
      sym_comment,
  [1674] = 2,
    ACTIONS(392), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(394), 51,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
      anon_sym_BSLASH,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      aux_sym_key_string_text_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__json_number,
      anon_sym_LBRACE_LBRACE,
      sym_comment,
  [1732] = 6,
    ACTIONS(210), 1,
      sym_comment,
    ACTIONS(400), 1,
      aux_sym_digit_token1,
    STATE(48), 1,
      aux_sym_integer_repeat1,
    STATE(61), 1,
      sym_digit,
    ACTIONS(398), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(396), 42,
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
      anon_sym_isIpv4,
      anon_sym_isIpv6,
      anon_sym_isUuid,
      anon_sym_equals,
      anon_sym_EQ_EQ,
      anon_sym_notEquals,
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
  [1796] = 5,
    ACTIONS(126), 1,
      ts_builtin_sym_end,
    ACTIONS(402), 1,
      anon_sym_LF,
    ACTIONS(404), 1,
      sym_comment,
    STATE(46), 1,
      aux_sym__comment_or_new_line_repeat1,
    ACTIONS(130), 47,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
      anon_sym_LBRACE,
      anon_sym_header,
      anon_sym_variable,
      anon_sym_status,
      anon_sym_url,
      anon_sym_body,
      anon_sym_duration,
      anon_sym_bytes,
      anon_sym_sha256,
      anon_sym_md5,
      anon_sym_cookie,
      anon_sym_xpath,
      anon_sym_jsonpath,
      anon_sym_regex,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LBRACK,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__json_number,
      anon_sym_LBRACE_LBRACE,
  [1858] = 6,
    ACTIONS(210), 1,
      sym_comment,
    ACTIONS(400), 1,
      aux_sym_digit_token1,
    STATE(48), 1,
      aux_sym_integer_repeat1,
    STATE(61), 1,
      sym_digit,
    ACTIONS(408), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(406), 42,
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
      anon_sym_isIpv4,
      anon_sym_isIpv6,
      anon_sym_isUuid,
      anon_sym_equals,
      anon_sym_EQ_EQ,
      anon_sym_notEquals,
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
  [1922] = 5,
    ACTIONS(116), 1,
      ts_builtin_sym_end,
    ACTIONS(410), 1,
      anon_sym_LF,
    ACTIONS(413), 1,
      sym_comment,
    STATE(46), 1,
      aux_sym__comment_or_new_line_repeat1,
    ACTIONS(121), 47,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
      anon_sym_LBRACE,
      anon_sym_header,
      anon_sym_variable,
      anon_sym_status,
      anon_sym_url,
      anon_sym_body,
      anon_sym_duration,
      anon_sym_bytes,
      anon_sym_sha256,
      anon_sym_md5,
      anon_sym_cookie,
      anon_sym_xpath,
      anon_sym_jsonpath,
      anon_sym_regex,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LBRACK,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__json_number,
      anon_sym_LBRACE_LBRACE,
  [1984] = 11,
    ACTIONS(240), 1,
      anon_sym_BSLASH,
    ACTIONS(243), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(194), 1,
      aux_sym_key_string_text_repeat1,
    STATE(282), 1,
      sym_key_value,
    STATE(552), 1,
      sym_key_string,
    ACTIONS(233), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(47), 2,
      sym_header,
      aux_sym_request_repeat1,
    STATE(159), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
    STATE(174), 3,
      sym_key_string_text,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    ACTIONS(237), 7,
      anon_sym_null,
      aux_sym_key_string_text_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym__json_number,
    ACTIONS(235), 29,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
      anon_sym_file_COMMA,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_comment,
  [2058] = 6,
    ACTIONS(210), 1,
      sym_comment,
    ACTIONS(420), 1,
      aux_sym_digit_token1,
    STATE(48), 1,
      aux_sym_integer_repeat1,
    STATE(61), 1,
      sym_digit,
    ACTIONS(418), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(416), 42,
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
      anon_sym_isIpv4,
      anon_sym_isIpv6,
      anon_sym_isUuid,
      anon_sym_equals,
      anon_sym_EQ_EQ,
      anon_sym_notEquals,
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
  [2122] = 10,
    ACTIONS(80), 1,
      anon_sym_BSLASH,
    ACTIONS(250), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(194), 1,
      aux_sym_key_string_text_repeat1,
    STATE(588), 1,
      sym_key_string,
    ACTIONS(423), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(53), 2,
      sym_capture,
      aux_sym_captures_section_repeat1,
    STATE(159), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
    STATE(174), 3,
      sym_key_string_text,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    ACTIONS(94), 7,
      anon_sym_null,
      aux_sym_key_string_text_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym__json_number,
    ACTIONS(425), 29,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
      anon_sym_file_COMMA,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_comment,
  [2193] = 2,
    ACTIONS(427), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(429), 48,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
      anon_sym_LBRACE,
      anon_sym_header,
      anon_sym_variable,
      anon_sym_status,
      anon_sym_url,
      anon_sym_body,
      anon_sym_duration,
      anon_sym_bytes,
      anon_sym_sha256,
      anon_sym_md5,
      anon_sym_cookie,
      anon_sym_xpath,
      anon_sym_jsonpath,
      anon_sym_regex,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LBRACK,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__json_number,
      anon_sym_LBRACE_LBRACE,
      sym_comment,
  [2248] = 10,
    ACTIONS(80), 1,
      anon_sym_BSLASH,
    ACTIONS(250), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(194), 1,
      aux_sym_key_string_text_repeat1,
    STATE(588), 1,
      sym_key_string,
    ACTIONS(431), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(49), 2,
      sym_capture,
      aux_sym_captures_section_repeat1,
    STATE(159), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
    STATE(174), 3,
      sym_key_string_text,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    ACTIONS(94), 7,
      anon_sym_null,
      aux_sym_key_string_text_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym__json_number,
    ACTIONS(433), 29,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
      anon_sym_file_COMMA,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_comment,
  [2319] = 2,
    ACTIONS(435), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(437), 48,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LBRACK,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__json_number,
      anon_sym_LBRACE_LBRACE,
      sym_comment,
  [2374] = 10,
    ACTIONS(446), 1,
      anon_sym_BSLASH,
    ACTIONS(449), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(194), 1,
      aux_sym_key_string_text_repeat1,
    STATE(588), 1,
      sym_key_string,
    ACTIONS(439), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(53), 2,
      sym_capture,
      aux_sym_captures_section_repeat1,
    STATE(159), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
    STATE(174), 3,
      sym_key_string_text,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    ACTIONS(443), 7,
      anon_sym_null,
      aux_sym_key_string_text_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym__json_number,
    ACTIONS(441), 29,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
      anon_sym_file_COMMA,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_comment,
  [2445] = 2,
    ACTIONS(452), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(454), 48,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LBRACK,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__json_number,
      anon_sym_LBRACE_LBRACE,
      sym_comment,
  [2500] = 2,
    ACTIONS(456), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(458), 48,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
      anon_sym_LBRACE,
      anon_sym_header,
      anon_sym_variable,
      anon_sym_status,
      anon_sym_url,
      anon_sym_body,
      anon_sym_duration,
      anon_sym_bytes,
      anon_sym_sha256,
      anon_sym_md5,
      anon_sym_cookie,
      anon_sym_xpath,
      anon_sym_jsonpath,
      anon_sym_regex,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LBRACK,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__json_number,
      anon_sym_LBRACE_LBRACE,
      sym_comment,
  [2555] = 3,
    ACTIONS(210), 1,
      sym_comment,
    ACTIONS(462), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(460), 43,
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
      anon_sym_isIpv4,
      anon_sym_isIpv6,
      anon_sym_isUuid,
      anon_sym_equals,
      anon_sym_EQ_EQ,
      anon_sym_notEquals,
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
  [2611] = 3,
    ACTIONS(210), 1,
      sym_comment,
    ACTIONS(466), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(464), 43,
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
      anon_sym_isIpv4,
      anon_sym_isIpv6,
      anon_sym_isUuid,
      anon_sym_equals,
      anon_sym_EQ_EQ,
      anon_sym_notEquals,
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
  [2667] = 3,
    ACTIONS(210), 1,
      sym_comment,
    ACTIONS(470), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(468), 43,
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
      anon_sym_isIpv4,
      anon_sym_isIpv6,
      anon_sym_isUuid,
      anon_sym_equals,
      anon_sym_EQ_EQ,
      anon_sym_notEquals,
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
  [2723] = 3,
    ACTIONS(210), 1,
      sym_comment,
    ACTIONS(474), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(472), 43,
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
      anon_sym_isIpv4,
      anon_sym_isIpv6,
      anon_sym_isUuid,
      anon_sym_equals,
      anon_sym_EQ_EQ,
      anon_sym_notEquals,
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
  [2779] = 3,
    ACTIONS(210), 1,
      sym_comment,
    ACTIONS(478), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(476), 43,
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
      anon_sym_isIpv4,
      anon_sym_isIpv6,
      anon_sym_isUuid,
      anon_sym_equals,
      anon_sym_EQ_EQ,
      anon_sym_notEquals,
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
      aux_sym_digit_token1,
  [2835] = 3,
    ACTIONS(210), 1,
      sym_comment,
    ACTIONS(482), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(480), 43,
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
      anon_sym_isIpv4,
      anon_sym_isIpv6,
      anon_sym_isUuid,
      anon_sym_equals,
      anon_sym_EQ_EQ,
      anon_sym_notEquals,
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
      aux_sym_digit_token1,
  [2891] = 3,
    ACTIONS(210), 1,
      sym_comment,
    ACTIONS(486), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(484), 42,
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
      anon_sym_isIpv4,
      anon_sym_isIpv6,
      anon_sym_isUuid,
      anon_sym_equals,
      anon_sym_EQ_EQ,
      anon_sym_notEquals,
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
  [2946] = 3,
    ACTIONS(210), 1,
      sym_comment,
    ACTIONS(490), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(488), 42,
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
      anon_sym_isIpv4,
      anon_sym_isIpv6,
      anon_sym_isUuid,
      anon_sym_equals,
      anon_sym_EQ_EQ,
      anon_sym_notEquals,
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
  [3001] = 3,
    ACTIONS(210), 1,
      sym_comment,
    ACTIONS(494), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(492), 42,
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
      anon_sym_isIpv4,
      anon_sym_isIpv6,
      anon_sym_isUuid,
      anon_sym_equals,
      anon_sym_EQ_EQ,
      anon_sym_notEquals,
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
  [3056] = 3,
    ACTIONS(210), 1,
      sym_comment,
    ACTIONS(498), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(496), 42,
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
      anon_sym_isIpv4,
      anon_sym_isIpv6,
      anon_sym_isUuid,
      anon_sym_equals,
      anon_sym_EQ_EQ,
      anon_sym_notEquals,
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
  [3111] = 3,
    ACTIONS(210), 1,
      sym_comment,
    ACTIONS(502), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(500), 42,
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
      anon_sym_isIpv4,
      anon_sym_isIpv6,
      anon_sym_isUuid,
      anon_sym_equals,
      anon_sym_EQ_EQ,
      anon_sym_notEquals,
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
  [3166] = 3,
    ACTIONS(210), 1,
      sym_comment,
    ACTIONS(506), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(504), 42,
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
      anon_sym_isIpv4,
      anon_sym_isIpv6,
      anon_sym_isUuid,
      anon_sym_equals,
      anon_sym_EQ_EQ,
      anon_sym_notEquals,
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
  [3221] = 3,
    ACTIONS(210), 1,
      sym_comment,
    ACTIONS(510), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(508), 42,
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
      anon_sym_isIpv4,
      anon_sym_isIpv6,
      anon_sym_isUuid,
      anon_sym_equals,
      anon_sym_EQ_EQ,
      anon_sym_notEquals,
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
  [3276] = 3,
    ACTIONS(210), 1,
      sym_comment,
    ACTIONS(514), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(512), 42,
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
      anon_sym_isIpv4,
      anon_sym_isIpv6,
      anon_sym_isUuid,
      anon_sym_equals,
      anon_sym_EQ_EQ,
      anon_sym_notEquals,
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
  [3331] = 3,
    ACTIONS(210), 1,
      sym_comment,
    ACTIONS(518), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(516), 41,
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
      anon_sym_isIpv4,
      anon_sym_isIpv6,
      anon_sym_isUuid,
      anon_sym_equals,
      anon_sym_EQ_EQ,
      anon_sym_notEquals,
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
  [3385] = 3,
    ACTIONS(210), 1,
      sym_comment,
    ACTIONS(522), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(520), 41,
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
      anon_sym_isIpv4,
      anon_sym_isIpv6,
      anon_sym_isUuid,
      anon_sym_equals,
      anon_sym_EQ_EQ,
      anon_sym_notEquals,
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
  [3439] = 3,
    ACTIONS(210), 1,
      sym_comment,
    ACTIONS(526), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(524), 41,
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
      anon_sym_isIpv4,
      anon_sym_isIpv6,
      anon_sym_isUuid,
      anon_sym_equals,
      anon_sym_EQ_EQ,
      anon_sym_notEquals,
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
  [3493] = 3,
    ACTIONS(210), 1,
      sym_comment,
    ACTIONS(530), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(528), 41,
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
      anon_sym_isIpv4,
      anon_sym_isIpv6,
      anon_sym_isUuid,
      anon_sym_equals,
      anon_sym_EQ_EQ,
      anon_sym_notEquals,
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
  [3547] = 3,
    ACTIONS(210), 1,
      sym_comment,
    ACTIONS(534), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(532), 41,
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
      anon_sym_isIpv4,
      anon_sym_isIpv6,
      anon_sym_isUuid,
      anon_sym_equals,
      anon_sym_EQ_EQ,
      anon_sym_notEquals,
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
  [3601] = 3,
    ACTIONS(210), 1,
      sym_comment,
    ACTIONS(538), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(536), 41,
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
      anon_sym_isIpv4,
      anon_sym_isIpv6,
      anon_sym_isUuid,
      anon_sym_equals,
      anon_sym_EQ_EQ,
      anon_sym_notEquals,
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
  [3655] = 3,
    ACTIONS(210), 1,
      sym_comment,
    ACTIONS(542), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(540), 41,
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
      anon_sym_isIpv4,
      anon_sym_isIpv6,
      anon_sym_isUuid,
      anon_sym_equals,
      anon_sym_EQ_EQ,
      anon_sym_notEquals,
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
  [3709] = 3,
    ACTIONS(210), 1,
      sym_comment,
    ACTIONS(546), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(544), 41,
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
      anon_sym_isIpv4,
      anon_sym_isIpv6,
      anon_sym_isUuid,
      anon_sym_equals,
      anon_sym_EQ_EQ,
      anon_sym_notEquals,
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
  [3763] = 21,
    ACTIONS(166), 1,
      anon_sym_equals,
    ACTIONS(168), 1,
      anon_sym_EQ_EQ,
    ACTIONS(170), 1,
      anon_sym_notEquals,
    ACTIONS(172), 1,
      anon_sym_BANG_EQ,
    ACTIONS(174), 1,
      anon_sym_greaterThan,
    ACTIONS(176), 1,
      anon_sym_GT,
    ACTIONS(178), 1,
      anon_sym_greaterThanOrEquals,
    ACTIONS(180), 1,
      anon_sym_GT_EQ,
    ACTIONS(182), 1,
      anon_sym_lessThan,
    ACTIONS(184), 1,
      anon_sym_LT,
    ACTIONS(186), 1,
      anon_sym_lessThanOrEquals,
    ACTIONS(188), 1,
      anon_sym_LT_EQ,
    ACTIONS(190), 1,
      anon_sym_startsWith,
    ACTIONS(192), 1,
      anon_sym_endsWith,
    ACTIONS(194), 1,
      anon_sym_contains,
    ACTIONS(196), 1,
      anon_sym_matches,
    ACTIONS(198), 1,
      anon_sym_includes,
    ACTIONS(210), 1,
      sym_comment,
    STATE(470), 1,
      sym_predicate_func,
    ACTIONS(164), 12,
      anon_sym_exists,
      anon_sym_isInteger,
      anon_sym_isFloat,
      anon_sym_isBoolean,
      anon_sym_isString,
      anon_sym_isCollection,
      anon_sym_isNumber,
      anon_sym_isIsoDate,
      anon_sym_isEmpty,
      anon_sym_isIpv4,
      anon_sym_isIpv6,
      anon_sym_isUuid,
    STATE(493), 12,
      sym_simple_predicate,
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
  [3849] = 5,
    ACTIONS(116), 1,
      ts_builtin_sym_end,
    ACTIONS(548), 1,
      anon_sym_LF,
    ACTIONS(551), 1,
      sym_comment,
    STATE(79), 1,
      aux_sym__comment_or_new_line_repeat1,
    ACTIONS(121), 37,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
      anon_sym_BSLASH,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      aux_sym_key_string_text_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__json_number,
      anon_sym_LBRACE_LBRACE,
  [3901] = 6,
    ACTIONS(558), 1,
      anon_sym_LBRACKCaptures_RBRACK,
    ACTIONS(561), 1,
      anon_sym_LBRACKAsserts_RBRACK,
    ACTIONS(554), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(80), 2,
      sym_response_section,
      aux_sym_response_repeat1,
    STATE(85), 2,
      sym_captures_section,
      sym_asserts_section,
    ACTIONS(556), 33,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LBRACK,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__json_number,
      anon_sym_LBRACE_LBRACE,
      sym_comment,
  [3955] = 5,
    ACTIONS(126), 1,
      ts_builtin_sym_end,
    ACTIONS(564), 1,
      anon_sym_LF,
    ACTIONS(566), 1,
      sym_comment,
    STATE(79), 1,
      aux_sym__comment_or_new_line_repeat1,
    ACTIONS(130), 37,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
      anon_sym_BSLASH,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      aux_sym_key_string_text_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__json_number,
      anon_sym_LBRACE_LBRACE,
  [4007] = 2,
    ACTIONS(568), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(570), 38,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
      anon_sym_BSLASH,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      aux_sym_key_string_text_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__json_number,
      anon_sym_LBRACE_LBRACE,
      sym_comment,
  [4052] = 2,
    ACTIONS(392), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(394), 38,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
      anon_sym_BSLASH,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      aux_sym_key_string_text_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__json_number,
      anon_sym_LBRACE_LBRACE,
      sym_comment,
  [4097] = 2,
    ACTIONS(572), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(574), 38,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
      anon_sym_BSLASH,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      aux_sym_key_string_text_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__json_number,
      anon_sym_LBRACE_LBRACE,
      sym_comment,
  [4142] = 2,
    ACTIONS(576), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(578), 35,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LBRACK,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__json_number,
      anon_sym_LBRACE_LBRACE,
      sym_comment,
  [4184] = 14,
    ACTIONS(580), 1,
      anon_sym_LF,
    ACTIONS(582), 1,
      anon_sym_xpath,
    ACTIONS(584), 1,
      anon_sym_regex,
    ACTIONS(590), 1,
      anon_sym_nth,
    ACTIONS(592), 1,
      anon_sym_replace,
    ACTIONS(594), 1,
      anon_sym_split,
    ACTIONS(596), 1,
      sym_comment,
    ACTIONS(598), 1,
      sym__eof,
    STATE(81), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(82), 2,
      sym__comment_or_new_line,
      sym__line_ending,
    STATE(91), 2,
      sym_filter,
      aux_sym_capture_repeat1,
    ACTIONS(588), 3,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_toDate,
    STATE(142), 7,
      sym_simple_filter_key,
      sym_argument_filter,
      sym_regex_filter,
      sym_nth_filter,
      sym_replace_filter,
      sym_split_filter,
      sym_xpath_filter,
    ACTIONS(586), 8,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_toInt,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
  [4244] = 14,
    ACTIONS(580), 1,
      anon_sym_LF,
    ACTIONS(582), 1,
      anon_sym_xpath,
    ACTIONS(584), 1,
      anon_sym_regex,
    ACTIONS(590), 1,
      anon_sym_nth,
    ACTIONS(592), 1,
      anon_sym_replace,
    ACTIONS(594), 1,
      anon_sym_split,
    ACTIONS(596), 1,
      sym_comment,
    ACTIONS(600), 1,
      sym__eof,
    STATE(81), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(84), 2,
      sym__comment_or_new_line,
      sym__line_ending,
    STATE(86), 2,
      sym_filter,
      aux_sym_capture_repeat1,
    ACTIONS(588), 3,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_toDate,
    STATE(142), 7,
      sym_simple_filter_key,
      sym_argument_filter,
      sym_regex_filter,
      sym_nth_filter,
      sym_replace_filter,
      sym_split_filter,
      sym_xpath_filter,
    ACTIONS(586), 8,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_toInt,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
  [4304] = 9,
    ACTIONS(7), 1,
      anon_sym_LF,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(602), 1,
      ts_builtin_sym_end,
    STATE(44), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(122), 1,
      sym_response,
    STATE(131), 1,
      sym__comment_or_new_line,
    STATE(378), 1,
      sym_version,
    ACTIONS(606), 6,
      anon_sym_HTTP_SLASH1_DOT0,
      anon_sym_HTTP_SLASH1_DOT1,
      anon_sym_HTTP_SLASH2,
      anon_sym_HTTP_SLASH3,
      anon_sym_HTTP_SLASH_STAR,
      anon_sym_HTTP,
    ACTIONS(604), 17,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
  [4353] = 9,
    ACTIONS(7), 1,
      anon_sym_LF,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(608), 1,
      ts_builtin_sym_end,
    STATE(44), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(121), 1,
      sym_response,
    STATE(132), 1,
      sym__comment_or_new_line,
    STATE(378), 1,
      sym_version,
    ACTIONS(606), 6,
      anon_sym_HTTP_SLASH1_DOT0,
      anon_sym_HTTP_SLASH1_DOT1,
      anon_sym_HTTP_SLASH2,
      anon_sym_HTTP_SLASH3,
      anon_sym_HTTP_SLASH_STAR,
      anon_sym_HTTP,
    ACTIONS(610), 17,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
  [4402] = 18,
    ACTIONS(210), 1,
      sym_comment,
    ACTIONS(612), 1,
      anon_sym_null,
    ACTIONS(614), 1,
      anon_sym_BSLASH,
    ACTIONS(616), 1,
      anon_sym_DQUOTE,
    ACTIONS(618), 1,
      aux_sym_key_string_text_token1,
    ACTIONS(624), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(626), 1,
      anon_sym_DASH,
    ACTIONS(628), 1,
      aux_sym_digit_token1,
    STATE(112), 1,
      sym_digit,
    STATE(118), 1,
      aux_sym_integer_repeat1,
    STATE(185), 1,
      aux_sym_key_string_text_repeat1,
    STATE(336), 1,
      sym_integer,
    STATE(430), 1,
      sym_variable_value,
    ACTIONS(620), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(622), 3,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym__json_number,
    STATE(140), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
    STATE(172), 3,
      sym_key_string_text,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(431), 4,
      sym_quoted_string,
      sym_key_string,
      sym_boolean,
      sym_float,
  [4467] = 11,
    ACTIONS(363), 1,
      sym_comment,
    ACTIONS(630), 1,
      anon_sym_xpath,
    ACTIONS(633), 1,
      anon_sym_regex,
    ACTIONS(642), 1,
      anon_sym_nth,
    ACTIONS(645), 1,
      anon_sym_replace,
    ACTIONS(648), 1,
      anon_sym_split,
    ACTIONS(365), 2,
      sym__eof,
      anon_sym_LF,
    STATE(91), 2,
      sym_filter,
      aux_sym_capture_repeat1,
    ACTIONS(639), 3,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_toDate,
    STATE(142), 7,
      sym_simple_filter_key,
      sym_argument_filter,
      sym_regex_filter,
      sym_nth_filter,
      sym_replace_filter,
      sym_split_filter,
      sym_xpath_filter,
    ACTIONS(636), 8,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_toInt,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
  [4518] = 9,
    ACTIONS(7), 1,
      anon_sym_LF,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(651), 1,
      ts_builtin_sym_end,
    STATE(44), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(89), 1,
      sym_request,
    STATE(167), 1,
      sym_method,
    STATE(94), 2,
      sym_entry,
      aux_sym_hurl_file_repeat1,
    STATE(103), 2,
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
  [4564] = 11,
    ACTIONS(158), 1,
      anon_sym_xpath,
    ACTIONS(160), 1,
      anon_sym_regex,
    ACTIONS(204), 1,
      anon_sym_nth,
    ACTIONS(206), 1,
      anon_sym_replace,
    ACTIONS(208), 1,
      anon_sym_split,
    ACTIONS(210), 1,
      sym_comment,
    ACTIONS(653), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(38), 2,
      sym_filter,
      aux_sym_capture_repeat1,
    ACTIONS(202), 3,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_toDate,
    STATE(64), 7,
      sym_simple_filter_key,
      sym_argument_filter,
      sym_regex_filter,
      sym_nth_filter,
      sym_replace_filter,
      sym_split_filter,
      sym_xpath_filter,
    ACTIONS(200), 8,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_toInt,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
  [4614] = 9,
    ACTIONS(655), 1,
      ts_builtin_sym_end,
    ACTIONS(657), 1,
      anon_sym_LF,
    ACTIONS(663), 1,
      sym_comment,
    STATE(89), 1,
      sym_request,
    STATE(128), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(167), 1,
      sym_method,
    STATE(94), 2,
      sym_entry,
      aux_sym_hurl_file_repeat1,
    STATE(109), 2,
      sym__comment_or_new_line,
      aux_sym_hurl_file_repeat2,
    ACTIONS(660), 17,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
  [4660] = 11,
    ACTIONS(158), 1,
      anon_sym_xpath,
    ACTIONS(160), 1,
      anon_sym_regex,
    ACTIONS(204), 1,
      anon_sym_nth,
    ACTIONS(206), 1,
      anon_sym_replace,
    ACTIONS(208), 1,
      anon_sym_split,
    ACTIONS(210), 1,
      sym_comment,
    ACTIONS(666), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(93), 2,
      sym_filter,
      aux_sym_capture_repeat1,
    ACTIONS(202), 3,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_toDate,
    STATE(64), 7,
      sym_simple_filter_key,
      sym_argument_filter,
      sym_regex_filter,
      sym_nth_filter,
      sym_replace_filter,
      sym_split_filter,
      sym_xpath_filter,
    ACTIONS(200), 8,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_toInt,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
  [4710] = 2,
    ACTIONS(108), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(110), 24,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
  [4741] = 2,
    ACTIONS(134), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(136), 24,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
  [4772] = 2,
    ACTIONS(668), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(670), 24,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
  [4803] = 2,
    ACTIONS(112), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(114), 24,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
  [4834] = 2,
    ACTIONS(672), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(674), 24,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
  [4865] = 5,
    ACTIONS(676), 1,
      aux_sym_digit_token1,
    STATE(101), 1,
      aux_sym_integer_repeat1,
    STATE(112), 1,
      sym_digit,
    ACTIONS(416), 2,
      sym__eof,
      anon_sym_LF,
    ACTIONS(418), 21,
      anon_sym_ms,
      anon_sym_s,
      anon_sym_m,
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
      sym_comment,
  [4902] = 18,
    ACTIONS(626), 1,
      anon_sym_DASH,
    ACTIONS(628), 1,
      aux_sym_digit_token1,
    ACTIONS(681), 1,
      anon_sym_null,
    ACTIONS(683), 1,
      anon_sym_file_COMMA,
    ACTIONS(685), 1,
      anon_sym_BSLASH,
    ACTIONS(689), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(691), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(693), 1,
      sym__eof,
    STATE(112), 1,
      sym_digit,
    STATE(118), 1,
      aux_sym_integer_repeat1,
    STATE(270), 1,
      aux_sym_value_string_text_repeat1,
    STATE(353), 1,
      sym_integer,
    STATE(454), 1,
      sym_file_value,
    ACTIONS(679), 2,
      anon_sym_LF,
      sym_comment,
    ACTIONS(687), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(177), 3,
      sym_value_string_content,
      sym_template,
      aux_sym_value_string_repeat1,
    STATE(218), 3,
      sym_value_string_text,
      sym_value_string_escaped_char,
      aux_sym_value_string_content_repeat1,
    STATE(518), 3,
      sym_value_string,
      sym_boolean,
      sym_float,
  [4965] = 8,
    ACTIONS(7), 1,
      anon_sym_LF,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(695), 1,
      ts_builtin_sym_end,
    STATE(44), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(88), 1,
      sym_request,
    STATE(167), 1,
      sym_method,
    STATE(117), 2,
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
  [5007] = 8,
    ACTIONS(7), 1,
      anon_sym_LF,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(651), 1,
      ts_builtin_sym_end,
    STATE(44), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(88), 1,
      sym_request,
    STATE(167), 1,
      sym_method,
    STATE(117), 2,
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
  [5049] = 14,
    ACTIONS(80), 1,
      anon_sym_BSLASH,
    ACTIONS(250), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(697), 1,
      anon_sym_LF,
    ACTIONS(699), 1,
      sym_comment,
    ACTIONS(701), 1,
      sym__eof,
    STATE(40), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(194), 1,
      aux_sym_key_string_text_repeat1,
    STATE(264), 1,
      sym_key_value,
    STATE(265), 1,
      aux_sym_query_string_params_section_repeat1,
    STATE(552), 1,
      sym_key_string,
    STATE(27), 2,
      sym__comment_or_new_line,
      sym__line_ending,
    STATE(159), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
    STATE(174), 3,
      sym_key_string_text,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    ACTIONS(94), 7,
      anon_sym_null,
      aux_sym_key_string_text_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym__json_number,
  [5103] = 14,
    ACTIONS(80), 1,
      anon_sym_BSLASH,
    ACTIONS(250), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(697), 1,
      anon_sym_LF,
    ACTIONS(699), 1,
      sym_comment,
    ACTIONS(703), 1,
      sym__eof,
    STATE(40), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(194), 1,
      aux_sym_key_string_text_repeat1,
    STATE(262), 1,
      aux_sym_query_string_params_section_repeat1,
    STATE(271), 1,
      sym_key_value,
    STATE(552), 1,
      sym_key_string,
    STATE(31), 2,
      sym__comment_or_new_line,
      sym__line_ending,
    STATE(159), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
    STATE(174), 3,
      sym_key_string_text,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    ACTIONS(94), 7,
      anon_sym_null,
      aux_sym_key_string_text_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym__json_number,
  [5157] = 14,
    ACTIONS(80), 1,
      anon_sym_BSLASH,
    ACTIONS(250), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(697), 1,
      anon_sym_LF,
    ACTIONS(699), 1,
      sym_comment,
    ACTIONS(705), 1,
      sym__eof,
    STATE(40), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(194), 1,
      aux_sym_key_string_text_repeat1,
    STATE(267), 1,
      sym_key_value,
    STATE(269), 1,
      aux_sym_query_string_params_section_repeat1,
    STATE(552), 1,
      sym_key_string,
    STATE(29), 2,
      sym__comment_or_new_line,
      sym__line_ending,
    STATE(159), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
    STATE(174), 3,
      sym_key_string_text,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    ACTIONS(94), 7,
      anon_sym_null,
      aux_sym_key_string_text_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym__json_number,
  [5211] = 16,
    ACTIONS(210), 1,
      sym_comment,
    ACTIONS(616), 1,
      anon_sym_DQUOTE,
    ACTIONS(624), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(707), 1,
      anon_sym_null,
    ACTIONS(709), 1,
      anon_sym_file_COMMA,
    ACTIONS(711), 1,
      anon_sym_base64_COMMA,
    ACTIONS(713), 1,
      anon_sym_hex_COMMA,
    ACTIONS(717), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(719), 1,
      anon_sym_DASH,
    ACTIONS(721), 1,
      aux_sym_digit_token1,
    STATE(112), 1,
      sym_digit,
    STATE(118), 1,
      aux_sym_integer_repeat1,
    STATE(328), 1,
      sym_integer,
    STATE(423), 1,
      sym_predicate_value,
    ACTIONS(715), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(469), 8,
      sym_oneline_base64,
      sym_oneline_file,
      sym_oneline_hex,
      sym_quoted_string,
      sym_multiline_string,
      sym_template,
      sym_boolean,
      sym_float,
  [5268] = 7,
    ACTIONS(723), 1,
      anon_sym_LF,
    ACTIONS(725), 1,
      sym_comment,
    STATE(88), 1,
      sym_request,
    STATE(128), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(167), 1,
      sym_method,
    STATE(120), 2,
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
  [5307] = 16,
    ACTIONS(210), 1,
      sym_comment,
    ACTIONS(616), 1,
      anon_sym_DQUOTE,
    ACTIONS(624), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(707), 1,
      anon_sym_null,
    ACTIONS(709), 1,
      anon_sym_file_COMMA,
    ACTIONS(711), 1,
      anon_sym_base64_COMMA,
    ACTIONS(713), 1,
      anon_sym_hex_COMMA,
    ACTIONS(717), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(719), 1,
      anon_sym_DASH,
    ACTIONS(721), 1,
      aux_sym_digit_token1,
    STATE(112), 1,
      sym_digit,
    STATE(118), 1,
      aux_sym_integer_repeat1,
    STATE(328), 1,
      sym_integer,
    STATE(464), 1,
      sym_predicate_value,
    ACTIONS(715), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(469), 8,
      sym_oneline_base64,
      sym_oneline_file,
      sym_oneline_hex,
      sym_quoted_string,
      sym_multiline_string,
      sym_template,
      sym_boolean,
      sym_float,
  [5364] = 2,
    ACTIONS(476), 2,
      sym__eof,
      anon_sym_LF,
    ACTIONS(478), 22,
      anon_sym_ms,
      anon_sym_s,
      anon_sym_m,
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
      aux_sym_digit_token1,
      anon_sym_DOT,
      sym_comment,
  [5393] = 2,
    ACTIONS(480), 2,
      sym__eof,
      anon_sym_LF,
    ACTIONS(482), 22,
      anon_sym_ms,
      anon_sym_s,
      anon_sym_m,
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
      aux_sym_digit_token1,
      anon_sym_DOT,
      sym_comment,
  [5422] = 16,
    ACTIONS(210), 1,
      sym_comment,
    ACTIONS(616), 1,
      anon_sym_DQUOTE,
    ACTIONS(624), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(707), 1,
      anon_sym_null,
    ACTIONS(709), 1,
      anon_sym_file_COMMA,
    ACTIONS(711), 1,
      anon_sym_base64_COMMA,
    ACTIONS(713), 1,
      anon_sym_hex_COMMA,
    ACTIONS(717), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(719), 1,
      anon_sym_DASH,
    ACTIONS(721), 1,
      aux_sym_digit_token1,
    STATE(112), 1,
      sym_digit,
    STATE(118), 1,
      aux_sym_integer_repeat1,
    STATE(328), 1,
      sym_integer,
    STATE(461), 1,
      sym_predicate_value,
    ACTIONS(715), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(469), 8,
      sym_oneline_base64,
      sym_oneline_file,
      sym_oneline_hex,
      sym_quoted_string,
      sym_multiline_string,
      sym_template,
      sym_boolean,
      sym_float,
  [5479] = 16,
    ACTIONS(210), 1,
      sym_comment,
    ACTIONS(616), 1,
      anon_sym_DQUOTE,
    ACTIONS(624), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(707), 1,
      anon_sym_null,
    ACTIONS(709), 1,
      anon_sym_file_COMMA,
    ACTIONS(711), 1,
      anon_sym_base64_COMMA,
    ACTIONS(713), 1,
      anon_sym_hex_COMMA,
    ACTIONS(717), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(719), 1,
      anon_sym_DASH,
    ACTIONS(721), 1,
      aux_sym_digit_token1,
    STATE(112), 1,
      sym_digit,
    STATE(118), 1,
      aux_sym_integer_repeat1,
    STATE(328), 1,
      sym_integer,
    STATE(462), 1,
      sym_predicate_value,
    ACTIONS(715), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(469), 8,
      sym_oneline_base64,
      sym_oneline_file,
      sym_oneline_hex,
      sym_quoted_string,
      sym_multiline_string,
      sym_template,
      sym_boolean,
      sym_float,
  [5536] = 16,
    ACTIONS(626), 1,
      anon_sym_DASH,
    ACTIONS(628), 1,
      aux_sym_digit_token1,
    ACTIONS(681), 1,
      anon_sym_null,
    ACTIONS(685), 1,
      anon_sym_BSLASH,
    ACTIONS(689), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(691), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(693), 1,
      sym__eof,
    STATE(112), 1,
      sym_digit,
    STATE(118), 1,
      aux_sym_integer_repeat1,
    STATE(270), 1,
      aux_sym_value_string_text_repeat1,
    STATE(353), 1,
      sym_integer,
    ACTIONS(679), 2,
      anon_sym_LF,
      sym_comment,
    ACTIONS(687), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(177), 3,
      sym_value_string_content,
      sym_template,
      aux_sym_value_string_repeat1,
    STATE(218), 3,
      sym_value_string_text,
      sym_value_string_escaped_char,
      aux_sym_value_string_content_repeat1,
    STATE(518), 3,
      sym_value_string,
      sym_boolean,
      sym_float,
  [5593] = 16,
    ACTIONS(210), 1,
      sym_comment,
    ACTIONS(616), 1,
      anon_sym_DQUOTE,
    ACTIONS(624), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(707), 1,
      anon_sym_null,
    ACTIONS(709), 1,
      anon_sym_file_COMMA,
    ACTIONS(711), 1,
      anon_sym_base64_COMMA,
    ACTIONS(713), 1,
      anon_sym_hex_COMMA,
    ACTIONS(717), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(719), 1,
      anon_sym_DASH,
    ACTIONS(721), 1,
      aux_sym_digit_token1,
    STATE(112), 1,
      sym_digit,
    STATE(118), 1,
      aux_sym_integer_repeat1,
    STATE(328), 1,
      sym_integer,
    STATE(463), 1,
      sym_predicate_value,
    ACTIONS(715), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(469), 8,
      sym_oneline_base64,
      sym_oneline_file,
      sym_oneline_hex,
      sym_quoted_string,
      sym_multiline_string,
      sym_template,
      sym_boolean,
      sym_float,
  [5650] = 6,
    ACTIONS(727), 1,
      ts_builtin_sym_end,
    ACTIONS(729), 1,
      anon_sym_LF,
    ACTIONS(734), 1,
      sym_comment,
    STATE(44), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(117), 2,
      sym__comment_or_new_line,
      aux_sym_hurl_file_repeat2,
    ACTIONS(732), 17,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
  [5686] = 5,
    ACTIONS(628), 1,
      aux_sym_digit_token1,
    STATE(101), 1,
      aux_sym_integer_repeat1,
    STATE(112), 1,
      sym_digit,
    ACTIONS(406), 2,
      sym__eof,
      anon_sym_LF,
    ACTIONS(408), 18,
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
      sym_comment,
  [5720] = 5,
    ACTIONS(628), 1,
      aux_sym_digit_token1,
    STATE(101), 1,
      aux_sym_integer_repeat1,
    STATE(112), 1,
      sym_digit,
    ACTIONS(396), 2,
      sym__eof,
      anon_sym_LF,
    ACTIONS(398), 18,
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
      sym_comment,
  [5754] = 5,
    ACTIONS(737), 1,
      anon_sym_LF,
    ACTIONS(740), 1,
      sym_comment,
    STATE(128), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(120), 2,
      sym__comment_or_new_line,
      aux_sym_hurl_file_repeat2,
    ACTIONS(732), 17,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
  [5787] = 6,
    ACTIONS(7), 1,
      anon_sym_LF,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(602), 1,
      ts_builtin_sym_end,
    STATE(44), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(131), 1,
      sym__comment_or_new_line,
    ACTIONS(604), 17,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
  [5822] = 6,
    ACTIONS(7), 1,
      anon_sym_LF,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(743), 1,
      ts_builtin_sym_end,
    STATE(44), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(124), 1,
      sym__comment_or_new_line,
    ACTIONS(745), 17,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
  [5857] = 10,
    ACTIONS(210), 1,
      sym_comment,
    ACTIONS(747), 1,
      anon_sym_header,
    ACTIONS(749), 1,
      anon_sym_variable,
    ACTIONS(753), 1,
      anon_sym_cookie,
    ACTIONS(755), 1,
      anon_sym_xpath,
    ACTIONS(757), 1,
      anon_sym_jsonpath,
    ACTIONS(759), 1,
      anon_sym_regex,
    STATE(87), 1,
      sym_query,
    ACTIONS(751), 7,
      anon_sym_status,
      anon_sym_url,
      anon_sym_body,
      anon_sym_duration,
      anon_sym_bytes,
      anon_sym_sha256,
      anon_sym_md5,
    STATE(149), 7,
      sym_simple_query,
      sym_header_query,
      sym_cookie_query,
      sym_xpath_query,
      sym_jsonpath_query,
      sym_regex_query,
      sym_variable_query,
  [5900] = 2,
    ACTIONS(761), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(763), 18,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
  [5925] = 2,
    ACTIONS(765), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(767), 18,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
  [5950] = 2,
    ACTIONS(154), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(156), 18,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
  [5975] = 2,
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
  [6000] = 4,
    ACTIONS(769), 1,
      anon_sym_LF,
    ACTIONS(771), 1,
      sym_comment,
    STATE(129), 1,
      aux_sym__comment_or_new_line_repeat1,
    ACTIONS(130), 17,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
  [6029] = 4,
    ACTIONS(773), 1,
      anon_sym_LF,
    ACTIONS(776), 1,
      sym_comment,
    STATE(129), 1,
      aux_sym__comment_or_new_line_repeat1,
    ACTIONS(121), 17,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
  [6058] = 2,
    ACTIONS(668), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(670), 18,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
  [6083] = 2,
    ACTIONS(743), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(745), 18,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
  [6108] = 2,
    ACTIONS(602), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(604), 18,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
  [6133] = 13,
    ACTIONS(210), 1,
      sym_comment,
    ACTIONS(781), 1,
      anon_sym_null,
    ACTIONS(784), 1,
      anon_sym_LBRACE,
    ACTIONS(786), 1,
      anon_sym_DQUOTE,
    ACTIONS(788), 1,
      aux_sym_key_string_text_token1,
    ACTIONS(793), 1,
      anon_sym_LBRACK,
    ACTIONS(796), 1,
      anon_sym_RBRACK,
    ACTIONS(799), 1,
      sym__json_number,
    ACTIONS(802), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(383), 1,
      sym_json_value,
    ACTIONS(779), 2,
      anon_sym_COLON,
      anon_sym_BSLASH,
    ACTIONS(790), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(389), 6,
      sym_json_object,
      sym_json_array,
      sym_json_string,
      sym_json_number,
      sym_json_boolean,
      sym_template,
  [6180] = 2,
    ACTIONS(528), 2,
      sym__eof,
      anon_sym_LF,
    ACTIONS(530), 17,
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
  [6204] = 2,
    ACTIONS(210), 1,
      sym_comment,
    ACTIONS(805), 18,
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
  [6228] = 2,
    ACTIONS(484), 2,
      sym__eof,
      anon_sym_LF,
    ACTIONS(486), 17,
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
  [6252] = 2,
    ACTIONS(500), 2,
      sym__eof,
      anon_sym_LF,
    ACTIONS(502), 17,
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
  [6276] = 10,
    ACTIONS(210), 1,
      sym_comment,
    ACTIONS(807), 1,
      anon_sym_BSLASH,
    ACTIONS(811), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(194), 1,
      aux_sym_key_string_text_repeat1,
    STATE(472), 1,
      sym_key_value,
    STATE(552), 1,
      sym_key_string,
    ACTIONS(809), 3,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym__json_number,
    STATE(159), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
    STATE(174), 3,
      sym_key_string_text,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    ACTIONS(94), 4,
      anon_sym_null,
      aux_sym_key_string_text_token1,
      anon_sym_true,
      anon_sym_false,
  [6316] = 2,
    ACTIONS(508), 2,
      sym__eof,
      anon_sym_LF,
    ACTIONS(510), 17,
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
  [6340] = 8,
    ACTIONS(106), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(815), 1,
      anon_sym_BSLASH,
    ACTIONS(817), 1,
      sym_comment,
    STATE(185), 1,
      aux_sym_key_string_text_repeat1,
    ACTIONS(813), 2,
      sym__eof,
      anon_sym_LF,
    STATE(147), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
    STATE(172), 3,
      sym_key_string_text,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    ACTIONS(618), 7,
      anon_sym_null,
      aux_sym_key_string_text_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym__json_number,
  [6376] = 2,
    ACTIONS(496), 2,
      sym__eof,
      anon_sym_LF,
    ACTIONS(498), 17,
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
  [6400] = 2,
    ACTIONS(492), 2,
      sym__eof,
      anon_sym_LF,
    ACTIONS(494), 17,
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
  [6424] = 10,
    ACTIONS(210), 1,
      sym_comment,
    ACTIONS(807), 1,
      anon_sym_BSLASH,
    ACTIONS(811), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(194), 1,
      aux_sym_key_string_text_repeat1,
    STATE(279), 1,
      sym_key_value,
    STATE(552), 1,
      sym_key_string,
    ACTIONS(809), 3,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym__json_number,
    STATE(159), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
    STATE(174), 3,
      sym_key_string_text,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    ACTIONS(94), 4,
      anon_sym_null,
      aux_sym_key_string_text_token1,
      anon_sym_true,
      anon_sym_false,
  [6464] = 2,
    ACTIONS(460), 2,
      sym__eof,
      anon_sym_LF,
    ACTIONS(462), 17,
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
  [6488] = 2,
    ACTIONS(464), 2,
      sym__eof,
      anon_sym_LF,
    ACTIONS(466), 17,
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
  [6512] = 2,
    ACTIONS(504), 2,
      sym__eof,
      anon_sym_LF,
    ACTIONS(506), 17,
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
  [6536] = 8,
    ACTIONS(824), 1,
      anon_sym_BSLASH,
    ACTIONS(827), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(830), 1,
      sym_comment,
    STATE(185), 1,
      aux_sym_key_string_text_repeat1,
    ACTIONS(819), 2,
      sym__eof,
      anon_sym_LF,
    STATE(147), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
    STATE(172), 3,
      sym_key_string_text,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    ACTIONS(821), 7,
      anon_sym_null,
      aux_sym_key_string_text_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym__json_number,
  [6572] = 2,
    ACTIONS(532), 2,
      sym__eof,
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
  [6596] = 2,
    ACTIONS(516), 2,
      sym__eof,
      anon_sym_LF,
    ACTIONS(518), 17,
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
  [6620] = 2,
    ACTIONS(544), 2,
      sym__eof,
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
  [6644] = 2,
    ACTIONS(472), 2,
      sym__eof,
      anon_sym_LF,
    ACTIONS(474), 17,
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
  [6668] = 2,
    ACTIONS(520), 2,
      sym__eof,
      anon_sym_LF,
    ACTIONS(522), 17,
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
  [6692] = 2,
    ACTIONS(540), 2,
      sym__eof,
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
  [6716] = 2,
    ACTIONS(536), 2,
      sym__eof,
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
  [6740] = 2,
    ACTIONS(512), 2,
      sym__eof,
      anon_sym_LF,
    ACTIONS(514), 17,
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
  [6764] = 2,
    ACTIONS(488), 2,
      sym__eof,
      anon_sym_LF,
    ACTIONS(490), 17,
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
  [6788] = 2,
    ACTIONS(524), 2,
      sym__eof,
      anon_sym_LF,
    ACTIONS(526), 17,
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
  [6812] = 2,
    ACTIONS(468), 2,
      sym__eof,
      anon_sym_LF,
    ACTIONS(470), 17,
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
  [6836] = 9,
    ACTIONS(210), 1,
      sym_comment,
    ACTIONS(807), 1,
      anon_sym_BSLASH,
    ACTIONS(811), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(813), 1,
      anon_sym_COLON,
    STATE(194), 1,
      aux_sym_key_string_text_repeat1,
    ACTIONS(809), 3,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym__json_number,
    STATE(160), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
    STATE(174), 3,
      sym_key_string_text,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    ACTIONS(94), 4,
      anon_sym_null,
      aux_sym_key_string_text_token1,
      anon_sym_true,
      anon_sym_false,
  [6873] = 9,
    ACTIONS(210), 1,
      sym_comment,
    ACTIONS(819), 1,
      anon_sym_COLON,
    ACTIONS(835), 1,
      anon_sym_BSLASH,
    ACTIONS(841), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(194), 1,
      aux_sym_key_string_text_repeat1,
    ACTIONS(838), 3,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym__json_number,
    STATE(160), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
    STATE(174), 3,
      sym_key_string_text,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    ACTIONS(832), 4,
      anon_sym_null,
      aux_sym_key_string_text_token1,
      anon_sym_true,
      anon_sym_false,
  [6910] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(844), 1,
      anon_sym_LT,
    ACTIONS(846), 1,
      anon_sym_LT_QMARK,
    ACTIONS(848), 1,
      anon_sym_LT_SLASH,
    ACTIONS(850), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(852), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(164), 1,
      sym_xml_open_tag,
    STATE(250), 1,
      aux_sym_value_string_text_repeat1,
    STATE(280), 1,
      sym_xml_self_closing_tag,
    STATE(522), 1,
      sym_xml_close_tag,
    STATE(221), 3,
      sym_value_string_text,
      sym_template,
      aux_sym_xml_value_string_repeat1,
    STATE(166), 4,
      sym_xml_prolog_tag,
      sym_xml_tag,
      sym_xml_value_string,
      aux_sym_xml_tag_repeat1,
  [6952] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(844), 1,
      anon_sym_LT,
    ACTIONS(846), 1,
      anon_sym_LT_QMARK,
    ACTIONS(850), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(852), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(854), 1,
      anon_sym_LT_SLASH,
    STATE(164), 1,
      sym_xml_open_tag,
    STATE(250), 1,
      aux_sym_value_string_text_repeat1,
    STATE(280), 1,
      sym_xml_self_closing_tag,
    STATE(305), 1,
      sym_xml_close_tag,
    STATE(221), 3,
      sym_value_string_text,
      sym_template,
      aux_sym_xml_value_string_repeat1,
    STATE(169), 4,
      sym_xml_prolog_tag,
      sym_xml_tag,
      sym_xml_value_string,
      aux_sym_xml_tag_repeat1,
  [6994] = 11,
    ACTIONS(210), 1,
      sym_comment,
    ACTIONS(784), 1,
      anon_sym_LBRACE,
    ACTIONS(786), 1,
      anon_sym_DQUOTE,
    ACTIONS(811), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(856), 1,
      anon_sym_null,
    ACTIONS(860), 1,
      anon_sym_LBRACK,
    ACTIONS(862), 1,
      anon_sym_RBRACK,
    ACTIONS(864), 1,
      sym__json_number,
    STATE(383), 1,
      sym_json_value,
    ACTIONS(858), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(389), 6,
      sym_json_object,
      sym_json_array,
      sym_json_string,
      sym_json_number,
      sym_json_boolean,
      sym_template,
  [7034] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(844), 1,
      anon_sym_LT,
    ACTIONS(846), 1,
      anon_sym_LT_QMARK,
    ACTIONS(850), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(852), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(854), 1,
      anon_sym_LT_SLASH,
    STATE(164), 1,
      sym_xml_open_tag,
    STATE(250), 1,
      aux_sym_value_string_text_repeat1,
    STATE(275), 1,
      sym_xml_close_tag,
    STATE(280), 1,
      sym_xml_self_closing_tag,
    STATE(221), 3,
      sym_value_string_text,
      sym_template,
      aux_sym_xml_value_string_repeat1,
    STATE(162), 4,
      sym_xml_prolog_tag,
      sym_xml_tag,
      sym_xml_value_string,
      aux_sym_xml_tag_repeat1,
  [7076] = 11,
    ACTIONS(210), 1,
      sym_comment,
    ACTIONS(784), 1,
      anon_sym_LBRACE,
    ACTIONS(786), 1,
      anon_sym_DQUOTE,
    ACTIONS(811), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(856), 1,
      anon_sym_null,
    ACTIONS(860), 1,
      anon_sym_LBRACK,
    ACTIONS(864), 1,
      sym__json_number,
    ACTIONS(866), 1,
      anon_sym_RBRACK,
    STATE(388), 1,
      sym_json_value,
    ACTIONS(858), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(389), 6,
      sym_json_object,
      sym_json_array,
      sym_json_string,
      sym_json_number,
      sym_json_boolean,
      sym_template,
  [7116] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(844), 1,
      anon_sym_LT,
    ACTIONS(846), 1,
      anon_sym_LT_QMARK,
    ACTIONS(848), 1,
      anon_sym_LT_SLASH,
    ACTIONS(850), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(852), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(164), 1,
      sym_xml_open_tag,
    STATE(250), 1,
      aux_sym_value_string_text_repeat1,
    STATE(280), 1,
      sym_xml_self_closing_tag,
    STATE(521), 1,
      sym_xml_close_tag,
    STATE(221), 3,
      sym_value_string_text,
      sym_template,
      aux_sym_xml_value_string_repeat1,
    STATE(169), 4,
      sym_xml_prolog_tag,
      sym_xml_tag,
      sym_xml_value_string,
      aux_sym_xml_tag_repeat1,
  [7158] = 11,
    ACTIONS(685), 1,
      anon_sym_BSLASH,
    ACTIONS(689), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(691), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(868), 1,
      sym__eof,
    STATE(40), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(270), 1,
      aux_sym_value_string_text_repeat1,
    STATE(288), 1,
      sym_value_string,
    ACTIONS(699), 2,
      anon_sym_LF,
      sym_comment,
    STATE(5), 2,
      sym__comment_or_new_line,
      sym__line_ending,
    STATE(177), 3,
      sym_value_string_content,
      sym_template,
      aux_sym_value_string_repeat1,
    STATE(218), 3,
      sym_value_string_text,
      sym_value_string_escaped_char,
      aux_sym_value_string_content_repeat1,
  [7198] = 6,
    ACTIONS(875), 1,
      anon_sym_BSLASH,
    STATE(185), 1,
      aux_sym_key_string_text_repeat1,
    ACTIONS(870), 2,
      sym__eof,
      anon_sym_LF,
    ACTIONS(878), 2,
      anon_sym_LBRACE_LBRACE,
      sym_comment,
    STATE(168), 3,
      sym_key_string_text,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    ACTIONS(872), 7,
      anon_sym_null,
      aux_sym_key_string_text_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym__json_number,
  [7227] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(880), 1,
      anon_sym_LT,
    ACTIONS(883), 1,
      anon_sym_LT_QMARK,
    ACTIONS(886), 1,
      anon_sym_LT_SLASH,
    ACTIONS(888), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(891), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(164), 1,
      sym_xml_open_tag,
    STATE(250), 1,
      aux_sym_value_string_text_repeat1,
    STATE(280), 1,
      sym_xml_self_closing_tag,
    STATE(221), 3,
      sym_value_string_text,
      sym_template,
      aux_sym_xml_value_string_repeat1,
    STATE(169), 4,
      sym_xml_prolog_tag,
      sym_xml_tag,
      sym_xml_value_string,
      aux_sym_xml_tag_repeat1,
  [7266] = 10,
    ACTIONS(210), 1,
      sym_comment,
    ACTIONS(784), 1,
      anon_sym_LBRACE,
    ACTIONS(786), 1,
      anon_sym_DQUOTE,
    ACTIONS(811), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(856), 1,
      anon_sym_null,
    ACTIONS(860), 1,
      anon_sym_LBRACK,
    ACTIONS(864), 1,
      sym__json_number,
    STATE(445), 1,
      sym_json_value,
    ACTIONS(858), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(389), 6,
      sym_json_object,
      sym_json_array,
      sym_json_string,
      sym_json_number,
      sym_json_boolean,
      sym_template,
  [7303] = 10,
    ACTIONS(210), 1,
      sym_comment,
    ACTIONS(784), 1,
      anon_sym_LBRACE,
    ACTIONS(786), 1,
      anon_sym_DQUOTE,
    ACTIONS(811), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(856), 1,
      anon_sym_null,
    ACTIONS(860), 1,
      anon_sym_LBRACK,
    ACTIONS(864), 1,
      sym__json_number,
    STATE(450), 1,
      sym_json_value,
    ACTIONS(858), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(389), 6,
      sym_json_object,
      sym_json_array,
      sym_json_string,
      sym_json_number,
      sym_json_boolean,
      sym_template,
  [7340] = 4,
    STATE(185), 1,
      aux_sym_key_string_text_repeat1,
    ACTIONS(894), 2,
      sym__eof,
      anon_sym_LF,
    STATE(168), 3,
      sym_key_string_text,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    ACTIONS(896), 10,
      anon_sym_null,
      anon_sym_BSLASH,
      aux_sym_key_string_text_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym__json_number,
      anon_sym_LBRACE_LBRACE,
      sym_comment,
  [7365] = 7,
    ACTIONS(210), 1,
      sym_comment,
    ACTIONS(901), 1,
      anon_sym_BSLASH,
    STATE(194), 1,
      aux_sym_key_string_text_repeat1,
    ACTIONS(870), 2,
      anon_sym_COLON,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(904), 3,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym__json_number,
    STATE(173), 3,
      sym_key_string_text,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    ACTIONS(898), 4,
      anon_sym_null,
      aux_sym_key_string_text_token1,
      anon_sym_true,
      anon_sym_false,
  [7395] = 5,
    ACTIONS(210), 1,
      sym_comment,
    STATE(194), 1,
      aux_sym_key_string_text_repeat1,
    STATE(173), 3,
      sym_key_string_text,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    ACTIONS(896), 4,
      anon_sym_null,
      aux_sym_key_string_text_token1,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(894), 6,
      anon_sym_COLON,
      anon_sym_BSLASH,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym__json_number,
      anon_sym_LBRACE_LBRACE,
  [7421] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(909), 1,
      anon_sym_u,
    ACTIONS(911), 1,
      anon_sym_POUND,
    ACTIONS(907), 10,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      anon_sym_b,
      anon_sym_f,
      anon_sym_n,
      anon_sym_r,
      anon_sym_t,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [7443] = 3,
    ACTIONS(210), 1,
      sym_comment,
    ACTIONS(915), 4,
      anon_sym_null,
      aux_sym_key_string_text_token1,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(913), 8,
      anon_sym_COLON,
      anon_sym_BSLASH,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      sym__json_number,
      anon_sym_LBRACE_LBRACE,
  [7463] = 8,
    ACTIONS(685), 1,
      anon_sym_BSLASH,
    ACTIONS(689), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(691), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(919), 1,
      sym__eof,
    STATE(270), 1,
      aux_sym_value_string_text_repeat1,
    ACTIONS(917), 2,
      anon_sym_LF,
      sym_comment,
    STATE(178), 3,
      sym_value_string_content,
      sym_template,
      aux_sym_value_string_repeat1,
    STATE(218), 3,
      sym_value_string_text,
      sym_value_string_escaped_char,
      aux_sym_value_string_content_repeat1,
  [7493] = 8,
    ACTIONS(923), 1,
      anon_sym_BSLASH,
    ACTIONS(926), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(929), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(932), 1,
      sym__eof,
    STATE(270), 1,
      aux_sym_value_string_text_repeat1,
    ACTIONS(921), 2,
      anon_sym_LF,
      sym_comment,
    STATE(178), 3,
      sym_value_string_content,
      sym_template,
      aux_sym_value_string_repeat1,
    STATE(218), 3,
      sym_value_string_text,
      sym_value_string_escaped_char,
      aux_sym_value_string_content_repeat1,
  [7523] = 4,
    STATE(179), 1,
      aux_sym_key_string_text_repeat1,
    ACTIONS(934), 2,
      sym__eof,
      anon_sym_LF,
    ACTIONS(939), 3,
      anon_sym_BSLASH,
      anon_sym_LBRACE_LBRACE,
      sym_comment,
    ACTIONS(936), 7,
      anon_sym_null,
      aux_sym_key_string_text_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym__json_number,
  [7545] = 3,
    ACTIONS(945), 1,
      sym_comment,
    ACTIONS(941), 2,
      sym__eof,
      anon_sym_LF,
    ACTIONS(943), 10,
      anon_sym_COLON,
      anon_sym_null,
      anon_sym_BSLASH,
      aux_sym_key_string_text_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym__json_number,
      anon_sym_LBRACE_LBRACE,
  [7565] = 5,
    ACTIONS(116), 1,
      sym__eof,
    ACTIONS(947), 1,
      anon_sym_LF,
    ACTIONS(950), 1,
      sym_comment,
    STATE(181), 1,
      aux_sym__comment_or_new_line_repeat1,
    ACTIONS(121), 9,
      anon_sym_null,
      anon_sym_BSLASH,
      aux_sym_key_string_text_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym__json_number,
      anon_sym_LBRACE_LBRACE,
  [7589] = 3,
    ACTIONS(945), 1,
      sym_comment,
    ACTIONS(941), 2,
      sym__eof,
      anon_sym_LF,
    ACTIONS(788), 10,
      anon_sym_COLON,
      anon_sym_null,
      anon_sym_BSLASH,
      aux_sym_key_string_text_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym__json_number,
      anon_sym_LBRACE_LBRACE,
  [7609] = 3,
    ACTIONS(955), 1,
      sym_comment,
    ACTIONS(953), 2,
      sym__eof,
      anon_sym_LF,
    ACTIONS(788), 10,
      anon_sym_COLON,
      anon_sym_null,
      anon_sym_BSLASH,
      aux_sym_key_string_text_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym__json_number,
      anon_sym_LBRACE_LBRACE,
  [7629] = 2,
    ACTIONS(913), 2,
      sym__eof,
      anon_sym_LF,
    ACTIONS(915), 11,
      anon_sym_COLON,
      anon_sym_null,
      anon_sym_BSLASH,
      aux_sym_key_string_text_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym__json_number,
      anon_sym_LBRACE_LBRACE,
      sym_comment,
  [7647] = 3,
    STATE(179), 1,
      aux_sym_key_string_text_repeat1,
    ACTIONS(957), 2,
      sym__eof,
      anon_sym_LF,
    ACTIONS(959), 10,
      anon_sym_null,
      anon_sym_BSLASH,
      aux_sym_key_string_text_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym__json_number,
      anon_sym_LBRACE_LBRACE,
      sym_comment,
  [7667] = 5,
    ACTIONS(126), 1,
      sym__eof,
    ACTIONS(961), 1,
      anon_sym_LF,
    ACTIONS(963), 1,
      sym_comment,
    STATE(181), 1,
      aux_sym__comment_or_new_line_repeat1,
    ACTIONS(130), 9,
      anon_sym_null,
      anon_sym_BSLASH,
      aux_sym_key_string_text_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym__json_number,
      anon_sym_LBRACE_LBRACE,
  [7691] = 3,
    ACTIONS(967), 1,
      sym_comment,
    ACTIONS(965), 2,
      sym__eof,
      anon_sym_LF,
    ACTIONS(788), 10,
      anon_sym_COLON,
      anon_sym_null,
      anon_sym_BSLASH,
      aux_sym_key_string_text_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym__json_number,
      anon_sym_LBRACE_LBRACE,
  [7711] = 3,
    ACTIONS(972), 1,
      sym_comment,
    ACTIONS(969), 2,
      sym__eof,
      anon_sym_LF,
    ACTIONS(788), 9,
      anon_sym_null,
      anon_sym_BSLASH,
      aux_sym_key_string_text_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym__json_number,
      anon_sym_LBRACE_LBRACE,
  [7730] = 2,
    ACTIONS(975), 2,
      sym__eof,
      anon_sym_LF,
    ACTIONS(977), 10,
      anon_sym_null,
      anon_sym_BSLASH,
      aux_sym_key_string_text_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym__json_number,
      anon_sym_LBRACE_LBRACE,
      sym_comment,
  [7747] = 4,
    ACTIONS(979), 1,
      anon_sym_LF,
    ACTIONS(981), 1,
      sym_comment,
    STATE(191), 1,
      aux_sym__comment_or_new_line_repeat1,
    ACTIONS(130), 9,
      anon_sym_null,
      anon_sym_BSLASH,
      aux_sym_key_string_text_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym__json_number,
      anon_sym_LBRACE_LBRACE,
  [7768] = 4,
    ACTIONS(983), 1,
      anon_sym_LF,
    ACTIONS(986), 1,
      sym_comment,
    STATE(191), 1,
      aux_sym__comment_or_new_line_repeat1,
    ACTIONS(121), 9,
      anon_sym_null,
      anon_sym_BSLASH,
      aux_sym_key_string_text_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym__json_number,
      anon_sym_LBRACE_LBRACE,
  [7789] = 3,
    ACTIONS(992), 1,
      sym_comment,
    ACTIONS(989), 2,
      sym__eof,
      anon_sym_LF,
    ACTIONS(788), 9,
      anon_sym_null,
      anon_sym_BSLASH,
      aux_sym_key_string_text_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym__json_number,
      anon_sym_LBRACE_LBRACE,
  [7808] = 5,
    ACTIONS(210), 1,
      sym_comment,
    STATE(193), 1,
      aux_sym_key_string_text_repeat1,
    ACTIONS(934), 3,
      anon_sym_COLON,
      anon_sym_BSLASH,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(998), 3,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym__json_number,
    ACTIONS(995), 4,
      anon_sym_null,
      aux_sym_key_string_text_token1,
      anon_sym_true,
      anon_sym_false,
  [7831] = 4,
    ACTIONS(210), 1,
      sym_comment,
    STATE(193), 1,
      aux_sym_key_string_text_repeat1,
    ACTIONS(959), 4,
      anon_sym_null,
      aux_sym_key_string_text_token1,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(957), 6,
      anon_sym_COLON,
      anon_sym_BSLASH,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym__json_number,
      anon_sym_LBRACE_LBRACE,
  [7852] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(685), 1,
      anon_sym_BSLASH,
    ACTIONS(689), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(691), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(270), 1,
      aux_sym_value_string_text_repeat1,
    STATE(325), 1,
      sym_template,
    STATE(502), 1,
      sym_value_string,
    STATE(177), 2,
      sym_value_string_content,
      aux_sym_value_string_repeat1,
    STATE(218), 3,
      sym_value_string_text,
      sym_value_string_escaped_char,
      aux_sym_value_string_content_repeat1,
  [7883] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1001), 1,
      anon_sym_LF,
    ACTIONS(1003), 1,
      anon_sym_BSLASH,
    ACTIONS(1005), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(1007), 1,
      sym__multiline_string_text,
    ACTIONS(1009), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(244), 2,
      sym_multiline_string_escaped_char,
      aux_sym_multiline_string_content_repeat1,
    STATE(206), 3,
      sym_multiline_string_content,
      sym_template,
      aux_sym_multiline_string_repeat1,
  [7911] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1011), 1,
      anon_sym_BSLASH,
    ACTIONS(1013), 1,
      anon_sym_DQUOTE,
    ACTIONS(1015), 1,
      aux_sym_json_string_text_token1,
    ACTIONS(1017), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(311), 1,
      aux_sym_json_string_text_repeat1,
    STATE(199), 2,
      sym_json_string_content,
      aux_sym_json_string_repeat1,
    STATE(362), 3,
      sym_json_string_text,
      sym_json_string_escaped_char,
      sym_template,
  [7939] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1019), 1,
      anon_sym_BSLASH,
    ACTIONS(1022), 1,
      anon_sym_DQUOTE,
    ACTIONS(1024), 1,
      sym_quoted_string_text,
    ACTIONS(1027), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(198), 3,
      sym_quoted_string_content,
      sym_template,
      aux_sym_quoted_string_repeat1,
    STATE(249), 3,
      sym_invalid_quoted_string_escaped_char,
      sym_quoted_string_escaped_char,
      aux_sym_quoted_string_content_repeat1,
  [7965] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1011), 1,
      anon_sym_BSLASH,
    ACTIONS(1015), 1,
      aux_sym_json_string_text_token1,
    ACTIONS(1017), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1030), 1,
      anon_sym_DQUOTE,
    STATE(311), 1,
      aux_sym_json_string_text_repeat1,
    STATE(215), 2,
      sym_json_string_content,
      aux_sym_json_string_repeat1,
    STATE(362), 3,
      sym_json_string_text,
      sym_json_string_escaped_char,
      sym_template,
  [7993] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1032), 1,
      anon_sym_BSLASH,
    ACTIONS(1034), 1,
      anon_sym_DQUOTE,
    ACTIONS(1036), 1,
      sym_quoted_string_text,
    ACTIONS(1038), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(198), 3,
      sym_quoted_string_content,
      sym_template,
      aux_sym_quoted_string_repeat1,
    STATE(249), 3,
      sym_invalid_quoted_string_escaped_char,
      sym_quoted_string_escaped_char,
      aux_sym_quoted_string_content_repeat1,
  [8019] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1032), 1,
      anon_sym_BSLASH,
    ACTIONS(1036), 1,
      sym_quoted_string_text,
    ACTIONS(1038), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1040), 1,
      anon_sym_DQUOTE,
    STATE(200), 3,
      sym_quoted_string_content,
      sym_template,
      aux_sym_quoted_string_repeat1,
    STATE(249), 3,
      sym_invalid_quoted_string_escaped_char,
      sym_quoted_string_escaped_char,
      aux_sym_quoted_string_content_repeat1,
  [8045] = 7,
    ACTIONS(1044), 1,
      anon_sym_BSLASH,
    ACTIONS(1046), 1,
      sym_filename_text,
    ACTIONS(1048), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1050), 1,
      sym__eof,
    ACTIONS(1042), 2,
      anon_sym_LF,
      sym_comment,
    STATE(246), 2,
      sym_filename_escaped_char,
      aux_sym_filename_content_repeat1,
    STATE(204), 3,
      sym_filename_content,
      sym_template,
      aux_sym_filename_repeat1,
  [8071] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1011), 1,
      anon_sym_BSLASH,
    ACTIONS(1015), 1,
      aux_sym_json_string_text_token1,
    ACTIONS(1017), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1052), 1,
      anon_sym_DQUOTE,
    STATE(311), 1,
      aux_sym_json_string_text_repeat1,
    STATE(213), 2,
      sym_json_string_content,
      aux_sym_json_string_repeat1,
    STATE(362), 3,
      sym_json_string_text,
      sym_json_string_escaped_char,
      sym_template,
  [8099] = 7,
    ACTIONS(1056), 1,
      anon_sym_BSLASH,
    ACTIONS(1059), 1,
      sym_filename_text,
    ACTIONS(1062), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1065), 1,
      sym__eof,
    ACTIONS(1054), 2,
      anon_sym_LF,
      sym_comment,
    STATE(246), 2,
      sym_filename_escaped_char,
      aux_sym_filename_content_repeat1,
    STATE(204), 3,
      sym_filename_content,
      sym_template,
      aux_sym_filename_repeat1,
  [8125] = 3,
    ACTIONS(210), 1,
      sym_comment,
    ACTIONS(977), 4,
      anon_sym_null,
      aux_sym_key_string_text_token1,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(975), 6,
      anon_sym_COLON,
      anon_sym_BSLASH,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym__json_number,
      anon_sym_LBRACE_LBRACE,
  [8143] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1070), 1,
      anon_sym_BSLASH,
    ACTIONS(1073), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(1075), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1067), 2,
      anon_sym_LF,
      sym__multiline_string_text,
    STATE(244), 2,
      sym_multiline_string_escaped_char,
      aux_sym_multiline_string_content_repeat1,
    STATE(206), 3,
      sym_multiline_string_content,
      sym_template,
      aux_sym_multiline_string_repeat1,
  [8169] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1003), 1,
      anon_sym_BSLASH,
    ACTIONS(1007), 1,
      sym__multiline_string_text,
    ACTIONS(1009), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1078), 1,
      anon_sym_LF,
    ACTIONS(1080), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(244), 2,
      sym_multiline_string_escaped_char,
      aux_sym_multiline_string_content_repeat1,
    STATE(196), 3,
      sym_multiline_string_content,
      sym_template,
      aux_sym_multiline_string_repeat1,
  [8197] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1032), 1,
      anon_sym_BSLASH,
    ACTIONS(1036), 1,
      sym_quoted_string_text,
    ACTIONS(1038), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1082), 1,
      anon_sym_DQUOTE,
    STATE(214), 3,
      sym_quoted_string_content,
      sym_template,
      aux_sym_quoted_string_repeat1,
    STATE(249), 3,
      sym_invalid_quoted_string_escaped_char,
      sym_quoted_string_escaped_char,
      aux_sym_quoted_string_content_repeat1,
  [8223] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1084), 1,
      anon_sym_SEMI,
    ACTIONS(1086), 1,
      anon_sym_BSLASH,
    ACTIONS(1088), 1,
      sym_filename_text,
    ACTIONS(1090), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(570), 1,
      sym_filename,
    STATE(274), 2,
      sym_filename_escaped_char,
      aux_sym_filename_content_repeat1,
    STATE(220), 3,
      sym_filename_content,
      sym_template,
      aux_sym_filename_repeat1,
  [8251] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1003), 1,
      anon_sym_BSLASH,
    ACTIONS(1007), 1,
      sym__multiline_string_text,
    ACTIONS(1009), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1092), 1,
      anon_sym_LF,
    ACTIONS(1094), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(244), 2,
      sym_multiline_string_escaped_char,
      aux_sym_multiline_string_content_repeat1,
    STATE(212), 3,
      sym_multiline_string_content,
      sym_template,
      aux_sym_multiline_string_repeat1,
  [8279] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1086), 1,
      anon_sym_BSLASH,
    ACTIONS(1088), 1,
      sym_filename_text,
    ACTIONS(1090), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1096), 1,
      anon_sym_SEMI,
    STATE(551), 1,
      sym_filename,
    STATE(274), 2,
      sym_filename_escaped_char,
      aux_sym_filename_content_repeat1,
    STATE(220), 3,
      sym_filename_content,
      sym_template,
      aux_sym_filename_repeat1,
  [8307] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1003), 1,
      anon_sym_BSLASH,
    ACTIONS(1007), 1,
      sym__multiline_string_text,
    ACTIONS(1009), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1078), 1,
      anon_sym_LF,
    ACTIONS(1080), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(244), 2,
      sym_multiline_string_escaped_char,
      aux_sym_multiline_string_content_repeat1,
    STATE(206), 3,
      sym_multiline_string_content,
      sym_template,
      aux_sym_multiline_string_repeat1,
  [8335] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1011), 1,
      anon_sym_BSLASH,
    ACTIONS(1015), 1,
      aux_sym_json_string_text_token1,
    ACTIONS(1017), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1098), 1,
      anon_sym_DQUOTE,
    STATE(311), 1,
      aux_sym_json_string_text_repeat1,
    STATE(215), 2,
      sym_json_string_content,
      aux_sym_json_string_repeat1,
    STATE(362), 3,
      sym_json_string_text,
      sym_json_string_escaped_char,
      sym_template,
  [8363] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1032), 1,
      anon_sym_BSLASH,
    ACTIONS(1036), 1,
      sym_quoted_string_text,
    ACTIONS(1038), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1100), 1,
      anon_sym_DQUOTE,
    STATE(198), 3,
      sym_quoted_string_content,
      sym_template,
      aux_sym_quoted_string_repeat1,
    STATE(249), 3,
      sym_invalid_quoted_string_escaped_char,
      sym_quoted_string_escaped_char,
      aux_sym_quoted_string_content_repeat1,
  [8389] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1102), 1,
      anon_sym_BSLASH,
    ACTIONS(1105), 1,
      anon_sym_DQUOTE,
    ACTIONS(1107), 1,
      aux_sym_json_string_text_token1,
    ACTIONS(1110), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(311), 1,
      aux_sym_json_string_text_repeat1,
    STATE(215), 2,
      sym_json_string_content,
      aux_sym_json_string_repeat1,
    STATE(362), 3,
      sym_json_string_text,
      sym_json_string_escaped_char,
      sym_template,
  [8417] = 6,
    ACTIONS(1115), 1,
      anon_sym_BSLASH,
    ACTIONS(1118), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(1121), 1,
      sym__eof,
    STATE(270), 1,
      aux_sym_value_string_text_repeat1,
    ACTIONS(1113), 3,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
      sym_comment,
    STATE(216), 3,
      sym_value_string_text,
      sym_value_string_escaped_char,
      aux_sym_value_string_content_repeat1,
  [8440] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1044), 1,
      anon_sym_BSLASH,
    ACTIONS(1046), 1,
      sym_filename_text,
    ACTIONS(1048), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(466), 1,
      sym_filename,
    STATE(246), 2,
      sym_filename_escaped_char,
      aux_sym_filename_content_repeat1,
    STATE(202), 3,
      sym_filename_content,
      sym_template,
      aux_sym_filename_repeat1,
  [8465] = 6,
    ACTIONS(685), 1,
      anon_sym_BSLASH,
    ACTIONS(689), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(1125), 1,
      sym__eof,
    STATE(270), 1,
      aux_sym_value_string_text_repeat1,
    ACTIONS(1123), 3,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
      sym_comment,
    STATE(216), 3,
      sym_value_string_text,
      sym_value_string_escaped_char,
      aux_sym_value_string_content_repeat1,
  [8488] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1129), 1,
      anon_sym_u,
    ACTIONS(1131), 1,
      aux_sym_invalid_quoted_string_escaped_char_token1,
    ACTIONS(1127), 7,
      anon_sym_BSLASH,
      anon_sym_b,
      anon_sym_f,
      anon_sym_n,
      anon_sym_r,
      anon_sym_t,
      anon_sym_DQUOTE,
  [8507] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1042), 1,
      anon_sym_SEMI,
    ACTIONS(1086), 1,
      anon_sym_BSLASH,
    ACTIONS(1088), 1,
      sym_filename_text,
    ACTIONS(1090), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(274), 2,
      sym_filename_escaped_char,
      aux_sym_filename_content_repeat1,
    STATE(222), 3,
      sym_filename_content,
      sym_template,
      aux_sym_filename_repeat1,
  [8532] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(850), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(852), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(250), 1,
      aux_sym_value_string_text_repeat1,
    ACTIONS(1133), 3,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
    STATE(223), 3,
      sym_value_string_text,
      sym_template,
      aux_sym_xml_value_string_repeat1,
  [8555] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1054), 1,
      anon_sym_SEMI,
    ACTIONS(1135), 1,
      anon_sym_BSLASH,
    ACTIONS(1138), 1,
      sym_filename_text,
    ACTIONS(1141), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(274), 2,
      sym_filename_escaped_char,
      aux_sym_filename_content_repeat1,
    STATE(222), 3,
      sym_filename_content,
      sym_template,
      aux_sym_filename_repeat1,
  [8580] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1146), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(1149), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(250), 1,
      aux_sym_value_string_text_repeat1,
    ACTIONS(1144), 3,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
    STATE(223), 3,
      sym_value_string_text,
      sym_template,
      aux_sym_xml_value_string_repeat1,
  [8603] = 8,
    ACTIONS(210), 1,
      sym_comment,
    ACTIONS(616), 1,
      anon_sym_DQUOTE,
    ACTIONS(719), 1,
      anon_sym_DASH,
    ACTIONS(721), 1,
      aux_sym_digit_token1,
    STATE(112), 1,
      sym_digit,
    STATE(118), 1,
      aux_sym_integer_repeat1,
    STATE(339), 1,
      sym_integer,
    STATE(412), 2,
      sym_quoted_string,
      sym_float,
  [8629] = 8,
    ACTIONS(210), 1,
      sym_comment,
    ACTIONS(616), 1,
      anon_sym_DQUOTE,
    ACTIONS(719), 1,
      anon_sym_DASH,
    ACTIONS(721), 1,
      aux_sym_digit_token1,
    STATE(112), 1,
      sym_digit,
    STATE(118), 1,
      aux_sym_integer_repeat1,
    STATE(341), 1,
      sym_integer,
    STATE(499), 2,
      sym_quoted_string,
      sym_float,
  [8655] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1152), 1,
      anon_sym_LF,
    STATE(537), 1,
      sym_multiline_string_type,
    ACTIONS(1154), 6,
      anon_sym_base64,
      anon_sym_hex,
      anon_sym_json,
      anon_sym_xml,
      anon_sym_graphql,
      aux_sym_multiline_string_type_token1,
  [8673] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1156), 1,
      anon_sym_BQUOTE,
    ACTIONS(1160), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(326), 1,
      aux_sym_oneline_string_content_repeat1,
    ACTIONS(1158), 2,
      sym_oneline_string_text,
      sym_oneline_string_escaped_char,
    STATE(230), 3,
      sym_oneline_string_content,
      sym_template,
      aux_sym_oneline_string_repeat1,
  [8695] = 8,
    ACTIONS(210), 1,
      sym_comment,
    ACTIONS(616), 1,
      anon_sym_DQUOTE,
    ACTIONS(719), 1,
      anon_sym_DASH,
    ACTIONS(721), 1,
      aux_sym_digit_token1,
    STATE(112), 1,
      sym_digit,
    STATE(118), 1,
      aux_sym_integer_repeat1,
    STATE(337), 1,
      sym_integer,
    STATE(413), 2,
      sym_quoted_string,
      sym_float,
  [8721] = 8,
    ACTIONS(210), 1,
      sym_comment,
    ACTIONS(616), 1,
      anon_sym_DQUOTE,
    ACTIONS(719), 1,
      anon_sym_DASH,
    ACTIONS(721), 1,
      aux_sym_digit_token1,
    STATE(112), 1,
      sym_digit,
    STATE(118), 1,
      aux_sym_integer_repeat1,
    STATE(335), 1,
      sym_integer,
    STATE(414), 2,
      sym_quoted_string,
      sym_float,
  [8747] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1162), 1,
      anon_sym_BQUOTE,
    ACTIONS(1167), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(326), 1,
      aux_sym_oneline_string_content_repeat1,
    ACTIONS(1164), 2,
      sym_oneline_string_text,
      sym_oneline_string_escaped_char,
    STATE(230), 3,
      sym_oneline_string_content,
      sym_template,
      aux_sym_oneline_string_repeat1,
  [8769] = 8,
    ACTIONS(210), 1,
      sym_comment,
    ACTIONS(616), 1,
      anon_sym_DQUOTE,
    ACTIONS(719), 1,
      anon_sym_DASH,
    ACTIONS(721), 1,
      aux_sym_digit_token1,
    STATE(112), 1,
      sym_digit,
    STATE(118), 1,
      aux_sym_integer_repeat1,
    STATE(333), 1,
      sym_integer,
    STATE(415), 2,
      sym_quoted_string,
      sym_float,
  [8795] = 5,
    ACTIONS(628), 1,
      aux_sym_digit_token1,
    STATE(101), 1,
      aux_sym_integer_repeat1,
    STATE(112), 1,
      sym_digit,
    ACTIONS(1170), 2,
      sym__eof,
      anon_sym_LF,
    ACTIONS(1172), 4,
      anon_sym_ms,
      anon_sym_s,
      anon_sym_m,
      sym_comment,
  [8815] = 3,
    ACTIONS(210), 1,
      sym_comment,
    ACTIONS(1176), 1,
      anon_sym_u,
    ACTIONS(1174), 7,
      anon_sym_BSLASH,
      anon_sym_b,
      anon_sym_f,
      anon_sym_n,
      anon_sym_r,
      anon_sym_t,
      anon_sym_BQUOTE,
  [8831] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1160), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1178), 1,
      anon_sym_BQUOTE,
    STATE(326), 1,
      aux_sym_oneline_string_content_repeat1,
    ACTIONS(1158), 2,
      sym_oneline_string_text,
      sym_oneline_string_escaped_char,
    STATE(227), 3,
      sym_oneline_string_content,
      sym_template,
      aux_sym_oneline_string_repeat1,
  [8853] = 3,
    ACTIONS(210), 1,
      sym_comment,
    ACTIONS(1182), 1,
      anon_sym_u,
    ACTIONS(1180), 7,
      anon_sym_BSLASH,
      anon_sym_b,
      anon_sym_f,
      anon_sym_n,
      anon_sym_r,
      anon_sym_t,
      anon_sym_DQUOTE,
  [8869] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1186), 1,
      anon_sym_u,
    ACTIONS(1188), 1,
      anon_sym_POUND,
    ACTIONS(1184), 6,
      anon_sym_BSLASH,
      anon_sym_b,
      anon_sym_f,
      anon_sym_n,
      anon_sym_r,
      anon_sym_t,
  [8887] = 8,
    ACTIONS(210), 1,
      sym_comment,
    ACTIONS(616), 1,
      anon_sym_DQUOTE,
    ACTIONS(719), 1,
      anon_sym_DASH,
    ACTIONS(721), 1,
      aux_sym_digit_token1,
    STATE(112), 1,
      sym_digit,
    STATE(118), 1,
      aux_sym_integer_repeat1,
    STATE(331), 1,
      sym_integer,
    STATE(416), 2,
      sym_quoted_string,
      sym_float,
  [8913] = 8,
    ACTIONS(210), 1,
      sym_comment,
    ACTIONS(616), 1,
      anon_sym_DQUOTE,
    ACTIONS(719), 1,
      anon_sym_DASH,
    ACTIONS(721), 1,
      aux_sym_digit_token1,
    STATE(112), 1,
      sym_digit,
    STATE(118), 1,
      aux_sym_integer_repeat1,
    STATE(327), 1,
      sym_integer,
    STATE(417), 2,
      sym_quoted_string,
      sym_float,
  [8939] = 8,
    ACTIONS(210), 1,
      sym_comment,
    ACTIONS(616), 1,
      anon_sym_DQUOTE,
    ACTIONS(719), 1,
      anon_sym_DASH,
    ACTIONS(721), 1,
      aux_sym_digit_token1,
    STATE(112), 1,
      sym_digit,
    STATE(118), 1,
      aux_sym_integer_repeat1,
    STATE(342), 1,
      sym_integer,
    STATE(460), 2,
      sym_quoted_string,
      sym_float,
  [8965] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1190), 1,
      anon_sym_BSLASH,
    ACTIONS(1195), 1,
      sym_quoted_string_text,
    ACTIONS(1193), 2,
      anon_sym_DQUOTE,
      anon_sym_LBRACE_LBRACE,
    STATE(240), 3,
      sym_invalid_quoted_string_escaped_char,
      sym_quoted_string_escaped_char,
      aux_sym_quoted_string_content_repeat1,
  [8984] = 5,
    ACTIONS(1200), 1,
      anon_sym_BSLASH,
    ACTIONS(1203), 1,
      sym_filename_text,
    ACTIONS(1206), 1,
      sym__eof,
    STATE(241), 2,
      sym_filename_escaped_char,
      aux_sym_filename_content_repeat1,
    ACTIONS(1198), 3,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
      sym_comment,
  [9003] = 8,
    ACTIONS(210), 1,
      sym_comment,
    ACTIONS(786), 1,
      anon_sym_DQUOTE,
    ACTIONS(1208), 1,
      anon_sym_RBRACE,
    ACTIONS(1210), 1,
      anon_sym_COMMA,
    STATE(379), 1,
      aux_sym_json_object_repeat1,
    STATE(387), 1,
      sym_json_key_value,
    STATE(575), 1,
      sym_json_string,
    STATE(576), 1,
      sym_json_key_string,
  [9028] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1212), 1,
      sym_filename_password_text,
    ACTIONS(1214), 1,
      anon_sym_BSLASH,
    STATE(255), 2,
      sym_filename_password_escaped_char,
      aux_sym_filename_password_repeat1,
    STATE(468), 2,
      sym_filename_password,
      sym_template,
  [9049] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(247), 2,
      sym_multiline_string_escaped_char,
      aux_sym_multiline_string_content_repeat1,
    ACTIONS(1216), 5,
      anon_sym_LF,
      anon_sym_BSLASH,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__multiline_string_text,
      anon_sym_LBRACE_LBRACE,
  [9064] = 8,
    ACTIONS(210), 1,
      sym_comment,
    ACTIONS(786), 1,
      anon_sym_DQUOTE,
    ACTIONS(1210), 1,
      anon_sym_COMMA,
    ACTIONS(1218), 1,
      anon_sym_RBRACE,
    STATE(377), 1,
      sym_json_key_value,
    STATE(382), 1,
      aux_sym_json_object_repeat1,
    STATE(575), 1,
      sym_json_string,
    STATE(576), 1,
      sym_json_key_string,
  [9089] = 3,
    ACTIONS(1222), 1,
      sym__eof,
    STATE(241), 2,
      sym_filename_escaped_char,
      aux_sym_filename_content_repeat1,
    ACTIONS(1220), 5,
      anon_sym_LF,
      anon_sym_BSLASH,
      sym_filename_text,
      anon_sym_LBRACE_LBRACE,
      sym_comment,
  [9104] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1227), 1,
      anon_sym_BSLASH,
    ACTIONS(1224), 2,
      anon_sym_LF,
      sym__multiline_string_text,
    ACTIONS(1230), 2,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE_LBRACE,
    STATE(247), 2,
      sym_multiline_string_escaped_char,
      aux_sym_multiline_string_content_repeat1,
  [9123] = 7,
    ACTIONS(84), 1,
      anon_sym_LT,
    ACTIONS(210), 1,
      sym_comment,
    ACTIONS(1232), 1,
      anon_sym_LT_QMARK,
    STATE(161), 1,
      sym_xml_open_tag,
    STATE(508), 1,
      sym_xml_tag,
    STATE(512), 1,
      sym_xml_self_closing_tag,
    STATE(357), 2,
      sym_xml_prolog_tag,
      aux_sym_xml_repeat1,
  [9146] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1032), 1,
      anon_sym_BSLASH,
    ACTIONS(1236), 1,
      sym_quoted_string_text,
    ACTIONS(1234), 2,
      anon_sym_DQUOTE,
      anon_sym_LBRACE_LBRACE,
    STATE(240), 3,
      sym_invalid_quoted_string_escaped_char,
      sym_quoted_string_escaped_char,
      aux_sym_quoted_string_content_repeat1,
  [9165] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1240), 1,
      aux_sym_value_string_text_token1,
    STATE(260), 1,
      aux_sym_value_string_text_repeat1,
    ACTIONS(1238), 4,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE_LBRACE,
  [9181] = 4,
    ACTIONS(1244), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(1247), 1,
      sym__eof,
    STATE(251), 1,
      aux_sym_value_string_text_repeat1,
    ACTIONS(1242), 4,
      anon_sym_LF,
      anon_sym_BSLASH,
      anon_sym_LBRACE_LBRACE,
      sym_comment,
  [9197] = 5,
    ACTIONS(210), 1,
      sym_comment,
    ACTIONS(616), 1,
      anon_sym_DQUOTE,
    ACTIONS(711), 1,
      anon_sym_base64_COMMA,
    ACTIONS(713), 1,
      anon_sym_hex_COMMA,
    STATE(419), 3,
      sym_oneline_base64,
      sym_oneline_hex,
      sym_quoted_string,
  [9215] = 5,
    ACTIONS(210), 1,
      sym_comment,
    ACTIONS(616), 1,
      anon_sym_DQUOTE,
    ACTIONS(711), 1,
      anon_sym_base64_COMMA,
    ACTIONS(713), 1,
      anon_sym_hex_COMMA,
    STATE(420), 3,
      sym_oneline_base64,
      sym_oneline_hex,
      sym_quoted_string,
  [9233] = 5,
    ACTIONS(1251), 1,
      sym_filename_password_text,
    ACTIONS(1254), 1,
      anon_sym_BSLASH,
    ACTIONS(1257), 1,
      sym__eof,
    ACTIONS(1249), 2,
      anon_sym_LF,
      sym_comment,
    STATE(254), 2,
      sym_filename_password_escaped_char,
      aux_sym_filename_password_repeat1,
  [9251] = 5,
    ACTIONS(1214), 1,
      anon_sym_BSLASH,
    ACTIONS(1261), 1,
      sym_filename_password_text,
    ACTIONS(1263), 1,
      sym__eof,
    ACTIONS(1259), 2,
      anon_sym_LF,
      sym_comment,
    STATE(254), 2,
      sym_filename_password_escaped_char,
      aux_sym_filename_password_repeat1,
  [9269] = 4,
    ACTIONS(1269), 1,
      sym_comment,
    STATE(477), 1,
      sym_duration_unit,
    ACTIONS(1265), 2,
      sym__eof,
      anon_sym_LF,
    ACTIONS(1267), 3,
      anon_sym_ms,
      anon_sym_s,
      anon_sym_m,
  [9285] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1271), 1,
      anon_sym_BSLASH,
    ACTIONS(1273), 1,
      anon_sym_SLASH,
    ACTIONS(1275), 1,
      sym_regex_text,
    STATE(546), 1,
      sym_regex_content,
    STATE(304), 2,
      sym_regex_escaped_char,
      aux_sym_regex_content_repeat1,
  [9305] = 6,
    ACTIONS(697), 1,
      anon_sym_LF,
    ACTIONS(699), 1,
      sym_comment,
    ACTIONS(1277), 1,
      sym__eof,
    STATE(40), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(259), 1,
      aux_sym_query_string_params_section_repeat1,
    STATE(26), 2,
      sym__comment_or_new_line,
      sym__line_ending,
  [9325] = 6,
    ACTIONS(1279), 1,
      anon_sym_LF,
    ACTIONS(1282), 1,
      sym_comment,
    ACTIONS(1285), 1,
      sym__eof,
    STATE(190), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(259), 1,
      aux_sym_query_string_params_section_repeat1,
    STATE(138), 2,
      sym__comment_or_new_line,
      sym__line_ending,
  [9345] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1288), 1,
      aux_sym_value_string_text_token1,
    STATE(260), 1,
      aux_sym_value_string_text_repeat1,
    ACTIONS(1242), 4,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE_LBRACE,
  [9361] = 6,
    ACTIONS(697), 1,
      anon_sym_LF,
    ACTIONS(699), 1,
      sym_comment,
    ACTIONS(1291), 1,
      sym__eof,
    STATE(40), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(259), 1,
      aux_sym_query_string_params_section_repeat1,
    STATE(25), 2,
      sym__comment_or_new_line,
      sym__line_ending,
  [9381] = 6,
    ACTIONS(697), 1,
      anon_sym_LF,
    ACTIONS(699), 1,
      sym_comment,
    ACTIONS(1293), 1,
      sym__eof,
    STATE(40), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(259), 1,
      aux_sym_query_string_params_section_repeat1,
    STATE(23), 2,
      sym__comment_or_new_line,
      sym__line_ending,
  [9401] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1271), 1,
      anon_sym_BSLASH,
    ACTIONS(1275), 1,
      sym_regex_text,
    ACTIONS(1295), 1,
      anon_sym_SLASH,
    STATE(573), 1,
      sym_regex_content,
    STATE(304), 2,
      sym_regex_escaped_char,
      aux_sym_regex_content_repeat1,
  [9421] = 6,
    ACTIONS(697), 1,
      anon_sym_LF,
    ACTIONS(699), 1,
      sym_comment,
    ACTIONS(1297), 1,
      sym__eof,
    STATE(40), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(258), 1,
      aux_sym_query_string_params_section_repeat1,
    STATE(30), 2,
      sym__comment_or_new_line,
      sym__line_ending,
  [9441] = 6,
    ACTIONS(697), 1,
      anon_sym_LF,
    ACTIONS(699), 1,
      sym_comment,
    ACTIONS(1297), 1,
      sym__eof,
    STATE(40), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(259), 1,
      aux_sym_query_string_params_section_repeat1,
    STATE(30), 2,
      sym__comment_or_new_line,
      sym__line_ending,
  [9461] = 6,
    ACTIONS(697), 1,
      anon_sym_LF,
    ACTIONS(699), 1,
      sym_comment,
    ACTIONS(1299), 1,
      sym__eof,
    STATE(40), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(259), 1,
      aux_sym_query_string_params_section_repeat1,
    STATE(24), 2,
      sym__comment_or_new_line,
      sym__line_ending,
  [9481] = 6,
    ACTIONS(697), 1,
      anon_sym_LF,
    ACTIONS(699), 1,
      sym_comment,
    ACTIONS(1301), 1,
      sym__eof,
    STATE(40), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(261), 1,
      aux_sym_query_string_params_section_repeat1,
    STATE(28), 2,
      sym__comment_or_new_line,
      sym__line_ending,
  [9501] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1303), 1,
      anon_sym_BSLASH,
    ACTIONS(1306), 1,
      sym_filename_text,
    ACTIONS(1198), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE_LBRACE,
    STATE(268), 2,
      sym_filename_escaped_char,
      aux_sym_filename_content_repeat1,
  [9519] = 6,
    ACTIONS(697), 1,
      anon_sym_LF,
    ACTIONS(699), 1,
      sym_comment,
    ACTIONS(1301), 1,
      sym__eof,
    STATE(40), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(259), 1,
      aux_sym_query_string_params_section_repeat1,
    STATE(28), 2,
      sym__comment_or_new_line,
      sym__line_ending,
  [9539] = 4,
    ACTIONS(1309), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(1311), 1,
      sym__eof,
    STATE(251), 1,
      aux_sym_value_string_text_repeat1,
    ACTIONS(1238), 4,
      anon_sym_LF,
      anon_sym_BSLASH,
      anon_sym_LBRACE_LBRACE,
      sym_comment,
  [9555] = 6,
    ACTIONS(697), 1,
      anon_sym_LF,
    ACTIONS(699), 1,
      sym_comment,
    ACTIONS(1293), 1,
      sym__eof,
    STATE(40), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(266), 1,
      aux_sym_query_string_params_section_repeat1,
    STATE(23), 2,
      sym__comment_or_new_line,
      sym__line_ending,
  [9575] = 6,
    ACTIONS(210), 1,
      sym_comment,
    ACTIONS(624), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(721), 1,
      aux_sym_digit_token1,
    STATE(112), 1,
      sym_digit,
    STATE(232), 1,
      aux_sym_integer_repeat1,
    STATE(487), 2,
      sym_template,
      sym__unsigned_integer,
  [9595] = 7,
    ACTIONS(210), 1,
      sym_comment,
    ACTIONS(624), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(721), 1,
      aux_sym_digit_token1,
    STATE(112), 1,
      sym_digit,
    STATE(232), 1,
      aux_sym_integer_repeat1,
    STATE(256), 1,
      sym__unsigned_integer,
    STATE(490), 1,
      sym_template,
  [9617] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(268), 2,
      sym_filename_escaped_char,
      aux_sym_filename_content_repeat1,
    ACTIONS(1220), 4,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      sym_filename_text,
      anon_sym_LBRACE_LBRACE,
  [9631] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1313), 5,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      aux_sym_value_string_text_token1,
      anon_sym_LBRACE_LBRACE,
  [9642] = 5,
    ACTIONS(1315), 1,
      anon_sym_LF,
    ACTIONS(1317), 1,
      sym_comment,
    ACTIONS(1319), 1,
      sym__eof,
    STATE(10), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(4), 2,
      sym__comment_or_new_line,
      sym__line_ending,
  [9659] = 5,
    ACTIONS(697), 1,
      anon_sym_LF,
    ACTIONS(699), 1,
      sym_comment,
    ACTIONS(1321), 1,
      sym__eof,
    STATE(40), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(41), 2,
      sym__comment_or_new_line,
      sym__line_ending,
  [9676] = 4,
    ACTIONS(210), 1,
      sym_comment,
    ACTIONS(624), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(715), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(485), 2,
      sym_template,
      sym_boolean,
  [9691] = 5,
    ACTIONS(1315), 1,
      anon_sym_LF,
    ACTIONS(1317), 1,
      sym_comment,
    ACTIONS(1323), 1,
      sym__eof,
    STATE(10), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(54), 2,
      sym__comment_or_new_line,
      sym__line_ending,
  [9708] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1325), 5,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      aux_sym_value_string_text_token1,
      anon_sym_LBRACE_LBRACE,
  [9719] = 5,
    ACTIONS(7), 1,
      anon_sym_LF,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1327), 1,
      sym__eof,
    STATE(44), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(130), 2,
      sym__comment_or_new_line,
      sym__line_ending,
  [9736] = 5,
    ACTIONS(580), 1,
      anon_sym_LF,
    ACTIONS(596), 1,
      sym_comment,
    ACTIONS(1329), 1,
      sym__eof,
    STATE(81), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(83), 2,
      sym__comment_or_new_line,
      sym__line_ending,
  [9753] = 5,
    ACTIONS(580), 1,
      anon_sym_LF,
    ACTIONS(596), 1,
      sym_comment,
    ACTIONS(1331), 1,
      sym__eof,
    STATE(81), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(15), 2,
      sym__comment_or_new_line,
      sym__line_ending,
  [9770] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1333), 5,
      anon_sym_LF,
      anon_sym_BSLASH,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__multiline_string_text,
      anon_sym_LBRACE_LBRACE,
  [9781] = 5,
    ACTIONS(1335), 1,
      anon_sym_LF,
    ACTIONS(1337), 1,
      sym_comment,
    ACTIONS(1339), 1,
      sym__eof,
    STATE(186), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(105), 2,
      sym__comment_or_new_line,
      sym__line_ending,
  [9798] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1005), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(1341), 4,
      anon_sym_LF,
      anon_sym_BSLASH,
      sym__multiline_string_text,
      anon_sym_LBRACE_LBRACE,
  [9811] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1343), 5,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      aux_sym_value_string_text_token1,
      anon_sym_LBRACE_LBRACE,
  [9822] = 5,
    ACTIONS(697), 1,
      anon_sym_LF,
    ACTIONS(699), 1,
      sym_comment,
    ACTIONS(1345), 1,
      sym__eof,
    STATE(40), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(8), 2,
      sym__comment_or_new_line,
      sym__line_ending,
  [9839] = 2,
    ACTIONS(1349), 1,
      sym__eof,
    ACTIONS(1347), 5,
      anon_sym_LF,
      anon_sym_BSLASH,
      aux_sym_value_string_text_token1,
      anon_sym_LBRACE_LBRACE,
      sym_comment,
  [9850] = 5,
    ACTIONS(1351), 1,
      anon_sym_LF,
    ACTIONS(1353), 1,
      sym_comment,
    ACTIONS(1355), 1,
      sym__eof,
    STATE(190), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(143), 2,
      sym__comment_or_new_line,
      sym__line_ending,
  [9867] = 2,
    ACTIONS(1359), 1,
      sym__eof,
    ACTIONS(1357), 5,
      anon_sym_LF,
      anon_sym_BSLASH,
      sym_filename_text,
      anon_sym_LBRACE_LBRACE,
      sym_comment,
  [9878] = 2,
    ACTIONS(1363), 1,
      sym__eof,
    ACTIONS(1361), 5,
      anon_sym_LF,
      anon_sym_BSLASH,
      aux_sym_value_string_text_token1,
      anon_sym_LBRACE_LBRACE,
      sym_comment,
  [9889] = 5,
    ACTIONS(7), 1,
      anon_sym_LF,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1365), 1,
      sym__eof,
    STATE(44), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(55), 2,
      sym__comment_or_new_line,
      sym__line_ending,
  [9906] = 2,
    ACTIONS(1369), 1,
      sym__eof,
    ACTIONS(1367), 5,
      anon_sym_LF,
      anon_sym_BSLASH,
      aux_sym_value_string_text_token1,
      anon_sym_LBRACE_LBRACE,
      sym_comment,
  [9917] = 2,
    ACTIONS(913), 1,
      sym__eof,
    ACTIONS(915), 5,
      anon_sym_LF,
      anon_sym_BSLASH,
      aux_sym_value_string_text_token1,
      anon_sym_LBRACE_LBRACE,
      sym_comment,
  [9928] = 5,
    ACTIONS(1335), 1,
      anon_sym_LF,
    ACTIONS(1337), 1,
      sym_comment,
    ACTIONS(1371), 1,
      sym__eof,
    STATE(186), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(107), 2,
      sym__comment_or_new_line,
      sym__line_ending,
  [9945] = 5,
    ACTIONS(697), 1,
      anon_sym_LF,
    ACTIONS(699), 1,
      sym_comment,
    ACTIONS(1373), 1,
      sym__eof,
    STATE(40), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(20), 2,
      sym__comment_or_new_line,
      sym__line_ending,
  [9962] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1375), 5,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      aux_sym_value_string_text_token1,
      anon_sym_LBRACE_LBRACE,
  [9973] = 5,
    ACTIONS(1335), 1,
      anon_sym_LF,
    ACTIONS(1337), 1,
      sym_comment,
    ACTIONS(1377), 1,
      sym__eof,
    STATE(186), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(106), 2,
      sym__comment_or_new_line,
      sym__line_ending,
  [9990] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1381), 1,
      aux_sym_json_string_text_token1,
    STATE(300), 1,
      aux_sym_json_string_text_repeat1,
    ACTIONS(1379), 3,
      anon_sym_BSLASH,
      anon_sym_DQUOTE,
      anon_sym_LBRACE_LBRACE,
  [10005] = 5,
    ACTIONS(7), 1,
      anon_sym_LF,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1384), 1,
      sym__eof,
    STATE(44), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(50), 2,
      sym__comment_or_new_line,
      sym__line_ending,
  [10022] = 5,
    ACTIONS(1315), 1,
      anon_sym_LF,
    ACTIONS(1317), 1,
      sym_comment,
    ACTIONS(1386), 1,
      sym__eof,
    STATE(10), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(11), 2,
      sym__comment_or_new_line,
      sym__line_ending,
  [10039] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1388), 5,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      aux_sym_value_string_text_token1,
      anon_sym_LBRACE_LBRACE,
  [10050] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1271), 1,
      anon_sym_BSLASH,
    ACTIONS(1390), 1,
      anon_sym_SLASH,
    ACTIONS(1392), 1,
      sym_regex_text,
    STATE(316), 2,
      sym_regex_escaped_char,
      aux_sym_regex_content_repeat1,
  [10067] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1394), 5,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      aux_sym_value_string_text_token1,
      anon_sym_LBRACE_LBRACE,
  [10078] = 6,
    ACTIONS(210), 1,
      sym_comment,
    ACTIONS(400), 1,
      aux_sym_digit_token1,
    ACTIONS(1396), 1,
      anon_sym_DASH,
    STATE(45), 1,
      aux_sym_integer_repeat1,
    STATE(61), 1,
      sym_digit,
    STATE(69), 1,
      sym_integer,
  [10097] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1398), 5,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      aux_sym_value_string_text_token1,
      anon_sym_LBRACE_LBRACE,
  [10108] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1361), 5,
      anon_sym_LF,
      anon_sym_BSLASH,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__multiline_string_text,
      anon_sym_LBRACE_LBRACE,
  [10119] = 5,
    ACTIONS(7), 1,
      anon_sym_LF,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1400), 1,
      sym__eof,
    STATE(44), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(36), 2,
      sym__comment_or_new_line,
      sym__line_ending,
  [10136] = 5,
    ACTIONS(580), 1,
      anon_sym_LF,
    ACTIONS(596), 1,
      sym_comment,
    ACTIONS(1402), 1,
      sym__eof,
    STATE(81), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(51), 2,
      sym__comment_or_new_line,
      sym__line_ending,
  [10153] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1406), 1,
      aux_sym_json_string_text_token1,
    STATE(300), 1,
      aux_sym_json_string_text_repeat1,
    ACTIONS(1404), 3,
      anon_sym_BSLASH,
      anon_sym_DQUOTE,
      anon_sym_LBRACE_LBRACE,
  [10168] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(915), 5,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      aux_sym_value_string_text_token1,
      anon_sym_LBRACE_LBRACE,
  [10179] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(915), 5,
      anon_sym_LF,
      anon_sym_BSLASH,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__multiline_string_text,
      anon_sym_LBRACE_LBRACE,
  [10190] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1408), 5,
      anon_sym_LF,
      anon_sym_BSLASH,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__multiline_string_text,
      anon_sym_LBRACE_LBRACE,
  [10201] = 2,
    ACTIONS(913), 1,
      sym__eof,
    ACTIONS(915), 5,
      anon_sym_LF,
      anon_sym_BSLASH,
      sym_filename_text,
      anon_sym_LBRACE_LBRACE,
      sym_comment,
  [10212] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1410), 1,
      anon_sym_BSLASH,
    ACTIONS(1413), 1,
      anon_sym_SLASH,
    ACTIONS(1415), 1,
      sym_regex_text,
    STATE(316), 2,
      sym_regex_escaped_char,
      aux_sym_regex_content_repeat1,
  [10229] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1418), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(1341), 4,
      anon_sym_LF,
      anon_sym_BSLASH,
      sym__multiline_string_text,
      anon_sym_LBRACE_LBRACE,
  [10242] = 6,
    ACTIONS(210), 1,
      sym_comment,
    ACTIONS(719), 1,
      anon_sym_DASH,
    ACTIONS(721), 1,
      aux_sym_digit_token1,
    STATE(112), 1,
      sym_digit,
    STATE(118), 1,
      aux_sym_integer_repeat1,
    STATE(155), 1,
      sym_integer,
  [10261] = 5,
    ACTIONS(1315), 1,
      anon_sym_LF,
    ACTIONS(1317), 1,
      sym_comment,
    ACTIONS(1420), 1,
      sym__eof,
    STATE(10), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(98), 2,
      sym__comment_or_new_line,
      sym__line_ending,
  [10278] = 5,
    ACTIONS(628), 1,
      aux_sym_digit_token1,
    ACTIONS(1424), 1,
      sym_comment,
    STATE(101), 1,
      aux_sym_integer_repeat1,
    STATE(112), 1,
      sym_digit,
    ACTIONS(1422), 2,
      sym__eof,
      anon_sym_LF,
  [10295] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1080), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(1341), 4,
      anon_sym_LF,
      anon_sym_BSLASH,
      sym__multiline_string_text,
      anon_sym_LBRACE_LBRACE,
  [10308] = 5,
    ACTIONS(697), 1,
      anon_sym_LF,
    ACTIONS(699), 1,
      sym_comment,
    ACTIONS(1426), 1,
      sym__eof,
    STATE(40), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(42), 2,
      sym__comment_or_new_line,
      sym__line_ending,
  [10325] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(323), 1,
      aux_sym_oneline_string_content_repeat1,
    ACTIONS(1428), 2,
      anon_sym_BQUOTE,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1430), 2,
      sym_oneline_string_text,
      sym_oneline_string_escaped_char,
  [10340] = 2,
    ACTIONS(1435), 1,
      sym__eof,
    ACTIONS(1433), 5,
      anon_sym_LF,
      anon_sym_BSLASH,
      aux_sym_value_string_text_token1,
      anon_sym_LBRACE_LBRACE,
      sym_comment,
  [10351] = 3,
    ACTIONS(1441), 1,
      sym__eof,
    ACTIONS(1437), 2,
      anon_sym_LF,
      sym_comment,
    ACTIONS(1439), 3,
      anon_sym_BSLASH,
      aux_sym_value_string_text_token1,
      anon_sym_LBRACE_LBRACE,
  [10364] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(323), 1,
      aux_sym_oneline_string_content_repeat1,
    ACTIONS(1443), 4,
      anon_sym_BQUOTE,
      sym_oneline_string_text,
      sym_oneline_string_escaped_char,
      anon_sym_LBRACE_LBRACE,
  [10377] = 4,
    ACTIONS(1447), 1,
      anon_sym_DOT,
    ACTIONS(1449), 1,
      sym_comment,
    STATE(513), 1,
      sym_fraction,
    ACTIONS(1445), 2,
      sym__eof,
      anon_sym_LF,
  [10391] = 4,
    ACTIONS(1447), 1,
      anon_sym_DOT,
    ACTIONS(1453), 1,
      sym_comment,
    STATE(513), 1,
      sym_fraction,
    ACTIONS(1451), 2,
      sym__eof,
      anon_sym_LF,
  [10405] = 2,
    ACTIONS(1457), 1,
      sym__eof,
    ACTIONS(1455), 4,
      anon_sym_LF,
      sym_filename_password_text,
      anon_sym_BSLASH,
      sym_comment,
  [10415] = 2,
    ACTIONS(210), 1,
      sym_comment,
    ACTIONS(1459), 4,
      anon_sym_COLON,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [10425] = 4,
    ACTIONS(1447), 1,
      anon_sym_DOT,
    ACTIONS(1463), 1,
      sym_comment,
    STATE(513), 1,
      sym_fraction,
    ACTIONS(1461), 2,
      sym__eof,
      anon_sym_LF,
  [10439] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1357), 4,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      sym_filename_text,
      anon_sym_LBRACE_LBRACE,
  [10449] = 4,
    ACTIONS(1447), 1,
      anon_sym_DOT,
    ACTIONS(1467), 1,
      sym_comment,
    STATE(513), 1,
      sym_fraction,
    ACTIONS(1465), 2,
      sym__eof,
      anon_sym_LF,
  [10463] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1469), 4,
      anon_sym_BSLASH,
      anon_sym_DQUOTE,
      aux_sym_json_string_text_token1,
      anon_sym_LBRACE_LBRACE,
  [10473] = 4,
    ACTIONS(1447), 1,
      anon_sym_DOT,
    ACTIONS(1473), 1,
      sym_comment,
    STATE(513), 1,
      sym_fraction,
    ACTIONS(1471), 2,
      sym__eof,
      anon_sym_LF,
  [10487] = 4,
    ACTIONS(1447), 1,
      anon_sym_DOT,
    ACTIONS(1477), 1,
      sym_comment,
    STATE(513), 1,
      sym_fraction,
    ACTIONS(1475), 2,
      sym__eof,
      anon_sym_LF,
  [10501] = 4,
    ACTIONS(1447), 1,
      anon_sym_DOT,
    ACTIONS(1481), 1,
      sym_comment,
    STATE(513), 1,
      sym_fraction,
    ACTIONS(1479), 2,
      sym__eof,
      anon_sym_LF,
  [10515] = 4,
    ACTIONS(210), 1,
      sym_comment,
    ACTIONS(1483), 1,
      anon_sym_DQUOTE,
    ACTIONS(1485), 1,
      anon_sym_SLASH,
    STATE(532), 2,
      sym_quoted_string,
      sym_regex,
  [10529] = 4,
    ACTIONS(1447), 1,
      anon_sym_DOT,
    ACTIONS(1489), 1,
      sym_comment,
    STATE(513), 1,
      sym_fraction,
    ACTIONS(1487), 2,
      sym__eof,
      anon_sym_LF,
  [10543] = 4,
    ACTIONS(210), 1,
      sym_comment,
    ACTIONS(616), 1,
      anon_sym_DQUOTE,
    ACTIONS(1491), 1,
      anon_sym_SLASH,
    STATE(150), 2,
      sym_quoted_string,
      sym_regex,
  [10557] = 4,
    ACTIONS(1447), 1,
      anon_sym_DOT,
    ACTIONS(1495), 1,
      sym_comment,
    STATE(513), 1,
      sym_fraction,
    ACTIONS(1493), 2,
      sym__eof,
      anon_sym_LF,
  [10571] = 4,
    ACTIONS(1447), 1,
      anon_sym_DOT,
    ACTIONS(1499), 1,
      sym_comment,
    STATE(513), 1,
      sym_fraction,
    ACTIONS(1497), 2,
      sym__eof,
      anon_sym_LF,
  [10585] = 5,
    ACTIONS(210), 1,
      sym_comment,
    ACTIONS(786), 1,
      anon_sym_DQUOTE,
    STATE(505), 1,
      sym_json_key_value,
    STATE(575), 1,
      sym_json_string,
    STATE(576), 1,
      sym_json_key_string,
  [10601] = 4,
    ACTIONS(210), 1,
      sym_comment,
    ACTIONS(1501), 1,
      anon_sym_SEMI,
    ACTIONS(1503), 1,
      aux_sym_hexdigit_token1,
    STATE(344), 2,
      sym_hexdigit,
      aux_sym_oneline_hex_repeat1,
  [10615] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1506), 4,
      anon_sym_BSLASH,
      anon_sym_DQUOTE,
      aux_sym_json_string_text_token1,
      anon_sym_LBRACE_LBRACE,
  [10625] = 4,
    ACTIONS(210), 1,
      sym_comment,
    ACTIONS(1483), 1,
      anon_sym_DQUOTE,
    ACTIONS(1485), 1,
      anon_sym_SLASH,
    STATE(62), 2,
      sym_quoted_string,
      sym_regex,
  [10639] = 2,
    ACTIONS(210), 1,
      sym_comment,
    ACTIONS(1508), 4,
      anon_sym_COLON,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [10649] = 4,
    ACTIONS(210), 1,
      sym_comment,
    ACTIONS(1510), 1,
      anon_sym_SEMI,
    ACTIONS(1512), 1,
      aux_sym_hexdigit_token1,
    STATE(367), 2,
      sym_hexdigit,
      aux_sym_oneline_hex_repeat1,
  [10663] = 2,
    ACTIONS(1516), 1,
      sym__eof,
    ACTIONS(1514), 4,
      anon_sym_LF,
      sym_filename_password_text,
      anon_sym_BSLASH,
      sym_comment,
  [10673] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1518), 4,
      anon_sym_BSLASH,
      anon_sym_DQUOTE,
      sym_quoted_string_text,
      anon_sym_LBRACE_LBRACE,
  [10683] = 4,
    ACTIONS(210), 1,
      sym_comment,
    ACTIONS(616), 1,
      anon_sym_DQUOTE,
    ACTIONS(1491), 1,
      anon_sym_SLASH,
    STATE(136), 2,
      sym_quoted_string,
      sym_regex,
  [10697] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(915), 4,
      anon_sym_BSLASH,
      anon_sym_DQUOTE,
      sym_quoted_string_text,
      anon_sym_LBRACE_LBRACE,
  [10707] = 4,
    ACTIONS(1447), 1,
      anon_sym_DOT,
    ACTIONS(1522), 1,
      sym_comment,
    STATE(513), 1,
      sym_fraction,
    ACTIONS(1520), 2,
      sym__eof,
      anon_sym_LF,
  [10721] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1524), 4,
      anon_sym_BSLASH,
      anon_sym_DQUOTE,
      aux_sym_json_string_text_token1,
      anon_sym_LBRACE_LBRACE,
  [10731] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(915), 4,
      anon_sym_BQUOTE,
      sym_oneline_string_text,
      sym_oneline_string_escaped_char,
      anon_sym_LBRACE_LBRACE,
  [10741] = 4,
    ACTIONS(210), 1,
      sym_comment,
    ACTIONS(1483), 1,
      anon_sym_DQUOTE,
    ACTIONS(1485), 1,
      anon_sym_SLASH,
    STATE(471), 2,
      sym_quoted_string,
      sym_regex,
  [10755] = 4,
    ACTIONS(210), 1,
      sym_comment,
    ACTIONS(1526), 1,
      anon_sym_LT,
    ACTIONS(1528), 1,
      anon_sym_LT_QMARK,
    STATE(357), 2,
      sym_xml_prolog_tag,
      aux_sym_xml_repeat1,
  [10769] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1531), 4,
      anon_sym_BSLASH,
      anon_sym_DQUOTE,
      sym_quoted_string_text,
      anon_sym_LBRACE_LBRACE,
  [10779] = 2,
    ACTIONS(1363), 1,
      sym__eof,
    ACTIONS(1361), 4,
      anon_sym_LF,
      sym_filename_password_text,
      anon_sym_BSLASH,
      sym_comment,
  [10789] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1533), 4,
      anon_sym_BSLASH,
      anon_sym_DQUOTE,
      sym_quoted_string_text,
      anon_sym_LBRACE_LBRACE,
  [10799] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(915), 4,
      anon_sym_BSLASH,
      anon_sym_DQUOTE,
      aux_sym_json_string_text_token1,
      anon_sym_LBRACE_LBRACE,
  [10809] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1535), 4,
      anon_sym_BSLASH,
      anon_sym_DQUOTE,
      aux_sym_json_string_text_token1,
      anon_sym_LBRACE_LBRACE,
  [10819] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1361), 4,
      anon_sym_BSLASH,
      anon_sym_DQUOTE,
      sym_quoted_string_text,
      anon_sym_LBRACE_LBRACE,
  [10829] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(915), 4,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      sym_filename_text,
      anon_sym_LBRACE_LBRACE,
  [10839] = 4,
    ACTIONS(210), 1,
      sym_comment,
    ACTIONS(1483), 1,
      anon_sym_DQUOTE,
    ACTIONS(1485), 1,
      anon_sym_SLASH,
    STATE(77), 2,
      sym_quoted_string,
      sym_regex,
  [10853] = 4,
    ACTIONS(210), 1,
      sym_comment,
    ACTIONS(616), 1,
      anon_sym_DQUOTE,
    ACTIONS(1491), 1,
      anon_sym_SLASH,
    STATE(422), 2,
      sym_quoted_string,
      sym_regex,
  [10867] = 4,
    ACTIONS(210), 1,
      sym_comment,
    ACTIONS(1512), 1,
      aux_sym_hexdigit_token1,
    ACTIONS(1537), 1,
      anon_sym_SEMI,
    STATE(344), 2,
      sym_hexdigit,
      aux_sym_oneline_hex_repeat1,
  [10881] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1541), 1,
      anon_sym_POUND,
    ACTIONS(1539), 2,
      anon_sym_SEMI,
      aux_sym_filename_escaped_char_token1,
  [10892] = 2,
    ACTIONS(210), 1,
      sym_comment,
    ACTIONS(1543), 3,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      aux_sym_hexdigit_token1,
  [10901] = 2,
    ACTIONS(210), 1,
      sym_comment,
    ACTIONS(965), 3,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [10910] = 4,
    ACTIONS(210), 1,
      sym_comment,
    ACTIONS(400), 1,
      aux_sym_digit_token1,
    STATE(43), 1,
      aux_sym_integer_repeat1,
    STATE(61), 1,
      sym_digit,
  [10923] = 2,
    ACTIONS(210), 1,
      sym_comment,
    ACTIONS(1545), 3,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [10932] = 2,
    ACTIONS(210), 1,
      sym_comment,
    ACTIONS(953), 3,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [10941] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1549), 1,
      anon_sym_POUND,
    ACTIONS(1547), 2,
      anon_sym_SEMI,
      aux_sym_filename_escaped_char_token1,
  [10952] = 3,
    ACTIONS(1553), 1,
      aux_sym_file_value_token1,
    ACTIONS(1555), 1,
      sym_comment,
    ACTIONS(1551), 2,
      sym__eof,
      anon_sym_LF,
  [10963] = 2,
    ACTIONS(210), 1,
      sym_comment,
    ACTIONS(1557), 3,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [10972] = 4,
    ACTIONS(210), 1,
      sym_comment,
    ACTIONS(1210), 1,
      anon_sym_COMMA,
    ACTIONS(1559), 1,
      anon_sym_RBRACE,
    STATE(391), 1,
      aux_sym_json_object_repeat1,
  [10985] = 3,
    ACTIONS(210), 1,
      sym_comment,
    STATE(283), 1,
      sym_status,
    ACTIONS(1561), 2,
      aux_sym_status_token1,
      anon_sym_STAR,
  [10996] = 4,
    ACTIONS(210), 1,
      sym_comment,
    ACTIONS(1210), 1,
      anon_sym_COMMA,
    ACTIONS(1563), 1,
      anon_sym_RBRACE,
    STATE(385), 1,
      aux_sym_json_object_repeat1,
  [11009] = 4,
    ACTIONS(210), 1,
      sym_comment,
    ACTIONS(1210), 1,
      anon_sym_COMMA,
    ACTIONS(1565), 1,
      anon_sym_RBRACE,
    STATE(385), 1,
      aux_sym_json_object_repeat1,
  [11022] = 2,
    ACTIONS(210), 1,
      sym_comment,
    ACTIONS(1567), 3,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [11031] = 4,
    ACTIONS(210), 1,
      sym_comment,
    ACTIONS(1210), 1,
      anon_sym_COMMA,
    ACTIONS(1559), 1,
      anon_sym_RBRACE,
    STATE(385), 1,
      aux_sym_json_object_repeat1,
  [11044] = 4,
    ACTIONS(210), 1,
      sym_comment,
    ACTIONS(1569), 1,
      anon_sym_RBRACK,
    ACTIONS(1571), 1,
      anon_sym_COMMA,
    STATE(396), 1,
      aux_sym_json_array_repeat1,
  [11057] = 2,
    ACTIONS(210), 1,
      sym_comment,
    ACTIONS(1573), 3,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [11066] = 4,
    ACTIONS(210), 1,
      sym_comment,
    ACTIONS(1575), 1,
      anon_sym_RBRACE,
    ACTIONS(1577), 1,
      anon_sym_COMMA,
    STATE(385), 1,
      aux_sym_json_object_repeat1,
  [11079] = 4,
    ACTIONS(210), 1,
      sym_comment,
    ACTIONS(1580), 1,
      aux_sym_variable_name_token1,
    STATE(95), 1,
      sym_variable_name,
    STATE(585), 1,
      sym_expr,
  [11092] = 4,
    ACTIONS(210), 1,
      sym_comment,
    ACTIONS(1210), 1,
      anon_sym_COMMA,
    ACTIONS(1563), 1,
      anon_sym_RBRACE,
    STATE(380), 1,
      aux_sym_json_object_repeat1,
  [11105] = 4,
    ACTIONS(210), 1,
      sym_comment,
    ACTIONS(1571), 1,
      anon_sym_COMMA,
    ACTIONS(1582), 1,
      anon_sym_RBRACK,
    STATE(394), 1,
      aux_sym_json_array_repeat1,
  [11118] = 2,
    ACTIONS(210), 1,
      sym_comment,
    ACTIONS(941), 3,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [11127] = 4,
    ACTIONS(210), 1,
      sym_comment,
    ACTIONS(721), 1,
      aux_sym_digit_token1,
    STATE(112), 1,
      sym_digit,
    STATE(119), 1,
      aux_sym_integer_repeat1,
  [11140] = 4,
    ACTIONS(210), 1,
      sym_comment,
    ACTIONS(1210), 1,
      anon_sym_COMMA,
    ACTIONS(1584), 1,
      anon_sym_RBRACE,
    STATE(385), 1,
      aux_sym_json_object_repeat1,
  [11153] = 4,
    ACTIONS(210), 1,
      sym_comment,
    ACTIONS(1580), 1,
      aux_sym_variable_name_token1,
    STATE(480), 1,
      sym_variable_definition,
    STATE(572), 1,
      sym_variable_name,
  [11166] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1586), 3,
      anon_sym_BSLASH,
      anon_sym_SLASH,
      sym_regex_text,
  [11175] = 4,
    ACTIONS(210), 1,
      sym_comment,
    ACTIONS(1571), 1,
      anon_sym_COMMA,
    ACTIONS(1588), 1,
      anon_sym_RBRACK,
    STATE(399), 1,
      aux_sym_json_array_repeat1,
  [11188] = 2,
    ACTIONS(210), 1,
      sym_comment,
    ACTIONS(1590), 3,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [11197] = 4,
    ACTIONS(210), 1,
      sym_comment,
    ACTIONS(1571), 1,
      anon_sym_COMMA,
    ACTIONS(1592), 1,
      anon_sym_RBRACK,
    STATE(399), 1,
      aux_sym_json_array_repeat1,
  [11210] = 2,
    ACTIONS(210), 1,
      sym_comment,
    ACTIONS(1594), 3,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [11219] = 4,
    ACTIONS(210), 1,
      sym_comment,
    ACTIONS(1580), 1,
      aux_sym_variable_name_token1,
    STATE(95), 1,
      sym_variable_name,
    STATE(549), 1,
      sym_expr,
  [11232] = 4,
    ACTIONS(210), 1,
      sym_comment,
    ACTIONS(1596), 1,
      anon_sym_RBRACK,
    ACTIONS(1598), 1,
      anon_sym_COMMA,
    STATE(399), 1,
      aux_sym_json_array_repeat1,
  [11245] = 4,
    ACTIONS(210), 1,
      sym_comment,
    ACTIONS(1580), 1,
      aux_sym_variable_name_token1,
    STATE(95), 1,
      sym_variable_name,
    STATE(554), 1,
      sym_expr,
  [11258] = 4,
    ACTIONS(210), 1,
      sym_comment,
    ACTIONS(1580), 1,
      aux_sym_variable_name_token1,
    STATE(95), 1,
      sym_variable_name,
    STATE(556), 1,
      sym_expr,
  [11271] = 4,
    ACTIONS(210), 1,
      sym_comment,
    ACTIONS(1580), 1,
      aux_sym_variable_name_token1,
    STATE(95), 1,
      sym_variable_name,
    STATE(558), 1,
      sym_expr,
  [11284] = 4,
    ACTIONS(210), 1,
      sym_comment,
    ACTIONS(1580), 1,
      aux_sym_variable_name_token1,
    STATE(95), 1,
      sym_variable_name,
    STATE(559), 1,
      sym_expr,
  [11297] = 4,
    ACTIONS(210), 1,
      sym_comment,
    ACTIONS(1580), 1,
      aux_sym_variable_name_token1,
    STATE(95), 1,
      sym_variable_name,
    STATE(560), 1,
      sym_expr,
  [11310] = 4,
    ACTIONS(210), 1,
      sym_comment,
    ACTIONS(721), 1,
      aux_sym_digit_token1,
    STATE(112), 1,
      sym_digit,
    STATE(320), 1,
      aux_sym_integer_repeat1,
  [11323] = 4,
    ACTIONS(210), 1,
      sym_comment,
    ACTIONS(1580), 1,
      aux_sym_variable_name_token1,
    STATE(95), 1,
      sym_variable_name,
    STATE(535), 1,
      sym_expr,
  [11336] = 4,
    ACTIONS(210), 1,
      sym_comment,
    ACTIONS(1580), 1,
      aux_sym_variable_name_token1,
    STATE(95), 1,
      sym_variable_name,
    STATE(583), 1,
      sym_expr,
  [11349] = 3,
    ACTIONS(1603), 1,
      aux_sym_file_value_token1,
    ACTIONS(1605), 1,
      sym_comment,
    ACTIONS(1601), 2,
      sym__eof,
      anon_sym_LF,
  [11360] = 4,
    ACTIONS(210), 1,
      sym_comment,
    ACTIONS(1580), 1,
      aux_sym_variable_name_token1,
    STATE(95), 1,
      sym_variable_name,
    STATE(544), 1,
      sym_expr,
  [11373] = 2,
    ACTIONS(1609), 1,
      sym_comment,
    ACTIONS(1607), 2,
      sym__eof,
      anon_sym_LF,
  [11381] = 2,
    ACTIONS(1613), 1,
      sym_comment,
    ACTIONS(1611), 2,
      sym__eof,
      anon_sym_LF,
  [11389] = 2,
    ACTIONS(1489), 1,
      sym_comment,
    ACTIONS(1487), 2,
      sym__eof,
      anon_sym_LF,
  [11397] = 2,
    ACTIONS(1481), 1,
      sym_comment,
    ACTIONS(1479), 2,
      sym__eof,
      anon_sym_LF,
  [11405] = 2,
    ACTIONS(1473), 1,
      sym_comment,
    ACTIONS(1471), 2,
      sym__eof,
      anon_sym_LF,
  [11413] = 2,
    ACTIONS(1467), 1,
      sym_comment,
    ACTIONS(1465), 2,
      sym__eof,
      anon_sym_LF,
  [11421] = 2,
    ACTIONS(1463), 1,
      sym_comment,
    ACTIONS(1461), 2,
      sym__eof,
      anon_sym_LF,
  [11429] = 2,
    ACTIONS(1449), 1,
      sym_comment,
    ACTIONS(1445), 2,
      sym__eof,
      anon_sym_LF,
  [11437] = 2,
    ACTIONS(1615), 1,
      sym_comment,
    ACTIONS(1508), 2,
      sym__eof,
      anon_sym_LF,
  [11445] = 2,
    ACTIONS(1619), 1,
      sym_comment,
    ACTIONS(1617), 2,
      sym__eof,
      anon_sym_LF,
  [11453] = 2,
    ACTIONS(1623), 1,
      sym_comment,
    ACTIONS(1621), 2,
      sym__eof,
      anon_sym_LF,
  [11461] = 2,
    ACTIONS(1627), 1,
      sym_comment,
    ACTIONS(1625), 2,
      sym__eof,
      anon_sym_LF,
  [11469] = 2,
    ACTIONS(1631), 1,
      sym_comment,
    ACTIONS(1629), 2,
      sym__eof,
      anon_sym_LF,
  [11477] = 2,
    ACTIONS(1635), 1,
      sym_comment,
    ACTIONS(1633), 2,
      sym__eof,
      anon_sym_LF,
  [11485] = 3,
    ACTIONS(210), 1,
      sym_comment,
    ACTIONS(1483), 1,
      anon_sym_DQUOTE,
    STATE(72), 1,
      sym_quoted_string,
  [11495] = 3,
    ACTIONS(210), 1,
      sym_comment,
    ACTIONS(1512), 1,
      aux_sym_hexdigit_token1,
    STATE(432), 1,
      sym_hexdigit,
  [11505] = 3,
    ACTIONS(210), 1,
      sym_comment,
    ACTIONS(1512), 1,
      aux_sym_hexdigit_token1,
    STATE(433), 1,
      sym_hexdigit,
  [11515] = 2,
    ACTIONS(1605), 1,
      sym_comment,
    ACTIONS(1601), 2,
      sym__eof,
      anon_sym_LF,
  [11523] = 2,
    ACTIONS(1637), 1,
      sym_comment,
    ACTIONS(1567), 2,
      sym__eof,
      anon_sym_LF,
  [11531] = 3,
    ACTIONS(210), 1,
      sym_comment,
    ACTIONS(1512), 1,
      aux_sym_hexdigit_token1,
    STATE(442), 1,
      sym_hexdigit,
  [11541] = 2,
    ACTIONS(1641), 1,
      sym_comment,
    ACTIONS(1639), 2,
      sym__eof,
      anon_sym_LF,
  [11549] = 2,
    ACTIONS(1477), 1,
      sym_comment,
    ACTIONS(1475), 2,
      sym__eof,
      anon_sym_LF,
  [11557] = 3,
    ACTIONS(210), 1,
      sym_comment,
    ACTIONS(1512), 1,
      aux_sym_hexdigit_token1,
    STATE(443), 1,
      sym_hexdigit,
  [11567] = 3,
    ACTIONS(210), 1,
      sym_comment,
    ACTIONS(1512), 1,
      aux_sym_hexdigit_token1,
    STATE(444), 1,
      sym_hexdigit,
  [11577] = 2,
    ACTIONS(1645), 1,
      sym_comment,
    ACTIONS(1643), 2,
      sym__eof,
      anon_sym_LF,
  [11585] = 3,
    ACTIONS(210), 1,
      sym_comment,
    ACTIONS(1647), 1,
      anon_sym_LBRACE,
    STATE(324), 1,
      sym_unicode_char,
  [11595] = 2,
    ACTIONS(1398), 1,
      sym_comment,
    ACTIONS(1649), 2,
      sym__eof,
      anon_sym_LF,
  [11603] = 2,
    ACTIONS(1375), 1,
      sym_comment,
    ACTIONS(1651), 2,
      sym__eof,
      anon_sym_LF,
  [11611] = 3,
    ACTIONS(210), 1,
      sym_comment,
    ACTIONS(1653), 1,
      anon_sym_LBRACE,
    STATE(314), 1,
      sym_unicode_char,
  [11621] = 2,
    ACTIONS(1657), 1,
      sym_comment,
    ACTIONS(1655), 2,
      sym__eof,
      anon_sym_LF,
  [11629] = 2,
    ACTIONS(1661), 1,
      sym_comment,
    ACTIONS(1659), 2,
      sym__eof,
      anon_sym_LF,
  [11637] = 2,
    ACTIONS(1663), 1,
      sym_comment,
    ACTIONS(1545), 2,
      sym__eof,
      anon_sym_LF,
  [11645] = 3,
    ACTIONS(210), 1,
      sym_comment,
    ACTIONS(1512), 1,
      aux_sym_hexdigit_token1,
    STATE(446), 1,
      sym_hexdigit,
  [11655] = 3,
    ACTIONS(210), 1,
      sym_comment,
    ACTIONS(1512), 1,
      aux_sym_hexdigit_token1,
    STATE(481), 1,
      sym_hexdigit,
  [11665] = 3,
    ACTIONS(210), 1,
      sym_comment,
    ACTIONS(1512), 1,
      aux_sym_hexdigit_token1,
    STATE(483), 1,
      sym_hexdigit,
  [11675] = 2,
    ACTIONS(210), 1,
      sym_comment,
    ACTIONS(1596), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [11683] = 3,
    ACTIONS(210), 1,
      sym_comment,
    ACTIONS(1512), 1,
      aux_sym_hexdigit_token1,
    STATE(486), 1,
      sym_hexdigit,
  [11693] = 2,
    ACTIONS(1667), 1,
      sym_comment,
    ACTIONS(1665), 2,
      sym__eof,
      anon_sym_LF,
  [11701] = 3,
    ACTIONS(210), 1,
      sym_comment,
    ACTIONS(1669), 1,
      aux_sym_hexdigit_token1,
    STATE(530), 1,
      sym_json_hexdigit,
  [11711] = 2,
    ACTIONS(1673), 1,
      sym_comment,
    ACTIONS(1671), 2,
      sym__eof,
      anon_sym_LF,
  [11719] = 2,
    ACTIONS(210), 1,
      sym_comment,
    ACTIONS(1675), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [11727] = 2,
    ACTIONS(1677), 1,
      sym_comment,
    ACTIONS(1594), 2,
      sym__eof,
      anon_sym_LF,
  [11735] = 2,
    ACTIONS(967), 1,
      sym_comment,
    ACTIONS(965), 2,
      sym__eof,
      anon_sym_LF,
  [11743] = 2,
    ACTIONS(955), 1,
      sym_comment,
    ACTIONS(953), 2,
      sym__eof,
      anon_sym_LF,
  [11751] = 2,
    ACTIONS(1681), 1,
      sym_comment,
    ACTIONS(1679), 2,
      sym__eof,
      anon_sym_LF,
  [11759] = 2,
    ACTIONS(1683), 1,
      sym_comment,
    ACTIONS(1557), 2,
      sym__eof,
      anon_sym_LF,
  [11767] = 3,
    ACTIONS(210), 1,
      sym_comment,
    ACTIONS(1388), 1,
      anon_sym_LT,
    ACTIONS(1685), 1,
      anon_sym_LT_QMARK,
  [11777] = 2,
    ACTIONS(1689), 1,
      sym_comment,
    ACTIONS(1687), 2,
      sym__eof,
      anon_sym_LF,
  [11785] = 2,
    ACTIONS(1693), 1,
      sym_comment,
    ACTIONS(1691), 2,
      sym__eof,
      anon_sym_LF,
  [11793] = 2,
    ACTIONS(1697), 1,
      sym_comment,
    ACTIONS(1695), 2,
      sym__eof,
      anon_sym_LF,
  [11801] = 2,
    ACTIONS(1499), 1,
      sym_comment,
    ACTIONS(1497), 2,
      sym__eof,
      anon_sym_LF,
  [11809] = 2,
    ACTIONS(1701), 1,
      sym_comment,
    ACTIONS(1699), 2,
      sym__eof,
      anon_sym_LF,
  [11817] = 2,
    ACTIONS(1705), 1,
      sym_comment,
    ACTIONS(1703), 2,
      sym__eof,
      anon_sym_LF,
  [11825] = 2,
    ACTIONS(1709), 1,
      sym_comment,
    ACTIONS(1707), 2,
      sym__eof,
      anon_sym_LF,
  [11833] = 2,
    ACTIONS(1713), 1,
      sym_comment,
    ACTIONS(1711), 2,
      sym__eof,
      anon_sym_LF,
  [11841] = 3,
    ACTIONS(210), 1,
      sym_comment,
    ACTIONS(1669), 1,
      aux_sym_hexdigit_token1,
    STATE(448), 1,
      sym_json_hexdigit,
  [11851] = 2,
    ACTIONS(1717), 1,
      sym_comment,
    ACTIONS(1715), 2,
      sym__eof,
      anon_sym_LF,
  [11859] = 3,
    ACTIONS(210), 1,
      sym_comment,
    ACTIONS(1512), 1,
      aux_sym_hexdigit_token1,
    STATE(494), 1,
      sym_hexdigit,
  [11869] = 2,
    ACTIONS(1721), 1,
      sym_comment,
    ACTIONS(1719), 2,
      sym__eof,
      anon_sym_LF,
  [11877] = 2,
    ACTIONS(1453), 1,
      sym_comment,
    ACTIONS(1451), 2,
      sym__eof,
      anon_sym_LF,
  [11885] = 2,
    ACTIONS(1725), 1,
      sym_comment,
    ACTIONS(1723), 2,
      sym__eof,
      anon_sym_LF,
  [11893] = 3,
    ACTIONS(210), 1,
      sym_comment,
    ACTIONS(1483), 1,
      anon_sym_DQUOTE,
    STATE(67), 1,
      sym_quoted_string,
  [11903] = 2,
    ACTIONS(1729), 1,
      sym_comment,
    ACTIONS(1727), 2,
      sym__eof,
      anon_sym_LF,
  [11911] = 3,
    ACTIONS(210), 1,
      sym_comment,
    ACTIONS(1483), 1,
      anon_sym_DQUOTE,
    STATE(73), 1,
      sym_quoted_string,
  [11921] = 3,
    ACTIONS(210), 1,
      sym_comment,
    ACTIONS(1483), 1,
      anon_sym_DQUOTE,
    STATE(63), 1,
      sym_quoted_string,
  [11931] = 2,
    ACTIONS(1733), 1,
      sym_comment,
    ACTIONS(1731), 2,
      sym__eof,
      anon_sym_LF,
  [11939] = 3,
    ACTIONS(210), 1,
      sym_comment,
    ACTIONS(1735), 1,
      aux_sym_hexdigit_token1,
    STATE(334), 1,
      sym_json_hexdigit,
  [11949] = 2,
    ACTIONS(1739), 1,
      sym_comment,
    ACTIONS(1737), 2,
      sym__eof,
      anon_sym_LF,
  [11957] = 3,
    ACTIONS(210), 1,
      sym_comment,
    ACTIONS(1483), 1,
      anon_sym_DQUOTE,
    STATE(68), 1,
      sym_quoted_string,
  [11967] = 2,
    ACTIONS(1743), 1,
      sym_comment,
    ACTIONS(1741), 2,
      sym__eof,
      anon_sym_LF,
  [11975] = 2,
    ACTIONS(1747), 1,
      sym_comment,
    ACTIONS(1745), 2,
      sym__eof,
      anon_sym_LF,
  [11983] = 3,
    ACTIONS(210), 1,
      sym_comment,
    ACTIONS(1512), 1,
      aux_sym_hexdigit_token1,
    STATE(557), 1,
      sym_hexdigit,
  [11993] = 3,
    ACTIONS(210), 1,
      sym_comment,
    ACTIONS(1483), 1,
      anon_sym_DQUOTE,
    STATE(75), 1,
      sym_quoted_string,
  [12003] = 3,
    ACTIONS(210), 1,
      sym_comment,
    ACTIONS(1512), 1,
      aux_sym_hexdigit_token1,
    STATE(555), 1,
      sym_hexdigit,
  [12013] = 3,
    ACTIONS(210), 1,
      sym_comment,
    ACTIONS(1749), 1,
      anon_sym_LBRACE,
    STATE(329), 1,
      sym_unicode_char,
  [12023] = 2,
    ACTIONS(1753), 1,
      sym_comment,
    ACTIONS(1751), 2,
      sym__eof,
      anon_sym_LF,
  [12031] = 3,
    ACTIONS(210), 1,
      sym_comment,
    ACTIONS(1512), 1,
      aux_sym_hexdigit_token1,
    STATE(553), 1,
      sym_hexdigit,
  [12041] = 2,
    ACTIONS(1757), 1,
      sym_comment,
    ACTIONS(1755), 2,
      sym__eof,
      anon_sym_LF,
  [12049] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1759), 1,
      aux_sym_xml_self_closing_tag_token1,
    ACTIONS(1761), 1,
      aux_sym_xml_open_tag_token1,
  [12059] = 3,
    ACTIONS(210), 1,
      sym_comment,
    ACTIONS(1483), 1,
      anon_sym_DQUOTE,
    STATE(76), 1,
      sym_quoted_string,
  [12069] = 2,
    ACTIONS(1269), 1,
      sym_comment,
    ACTIONS(1265), 2,
      sym__eof,
      anon_sym_LF,
  [12077] = 2,
    ACTIONS(1765), 1,
      sym_comment,
    ACTIONS(1763), 2,
      sym__eof,
      anon_sym_LF,
  [12085] = 3,
    ACTIONS(210), 1,
      sym_comment,
    ACTIONS(1483), 1,
      anon_sym_DQUOTE,
    STATE(71), 1,
      sym_quoted_string,
  [12095] = 2,
    ACTIONS(1769), 1,
      sym_comment,
    ACTIONS(1767), 2,
      sym__eof,
      anon_sym_LF,
  [12103] = 3,
    ACTIONS(210), 1,
      sym_comment,
    ACTIONS(1512), 1,
      aux_sym_hexdigit_token1,
    STATE(496), 1,
      sym_hexdigit,
  [12113] = 2,
    ACTIONS(1773), 1,
      sym_comment,
    ACTIONS(1771), 2,
      sym__eof,
      anon_sym_LF,
  [12121] = 3,
    ACTIONS(210), 1,
      sym_comment,
    ACTIONS(1512), 1,
      aux_sym_hexdigit_token1,
    STATE(506), 1,
      sym_hexdigit,
  [12131] = 2,
    ACTIONS(1775), 1,
      sym_comment,
    ACTIONS(1459), 2,
      sym__eof,
      anon_sym_LF,
  [12139] = 3,
    ACTIONS(210), 1,
      sym_comment,
    ACTIONS(1483), 1,
      anon_sym_DQUOTE,
    STATE(66), 1,
      sym_quoted_string,
  [12149] = 2,
    ACTIONS(1495), 1,
      sym_comment,
    ACTIONS(1493), 2,
      sym__eof,
      anon_sym_LF,
  [12157] = 2,
    ACTIONS(945), 1,
      sym_comment,
    ACTIONS(941), 2,
      sym__eof,
      anon_sym_LF,
  [12165] = 3,
    ACTIONS(210), 1,
      sym_comment,
    ACTIONS(616), 1,
      anon_sym_DQUOTE,
    STATE(421), 1,
      sym_quoted_string,
  [12175] = 2,
    ACTIONS(1437), 1,
      sym_comment,
    ACTIONS(1441), 2,
      sym__eof,
      anon_sym_LF,
  [12183] = 2,
    ACTIONS(1777), 1,
      sym_comment,
    ACTIONS(1573), 2,
      sym__eof,
      anon_sym_LF,
  [12191] = 2,
    ACTIONS(210), 1,
      sym_comment,
    ACTIONS(1779), 2,
      aux_sym_status_token1,
      anon_sym_STAR,
  [12199] = 2,
    ACTIONS(210), 1,
      sym_comment,
    ACTIONS(1575), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [12207] = 3,
    ACTIONS(210), 1,
      sym_comment,
    ACTIONS(1512), 1,
      aux_sym_hexdigit_token1,
    STATE(569), 1,
      sym_hexdigit,
  [12217] = 3,
    ACTIONS(210), 1,
      sym_comment,
    ACTIONS(1781), 1,
      anon_sym_LBRACE,
    STATE(350), 1,
      sym_unicode_char,
  [12227] = 2,
    ACTIONS(1785), 1,
      sym_comment,
    ACTIONS(1783), 2,
      sym__eof,
      anon_sym_LF,
  [12235] = 3,
    ACTIONS(210), 1,
      sym_comment,
    ACTIONS(616), 1,
      anon_sym_DQUOTE,
    STATE(152), 1,
      sym_quoted_string,
  [12245] = 2,
    ACTIONS(1789), 1,
      sym_comment,
    ACTIONS(1787), 2,
      sym__eof,
      anon_sym_LF,
  [12253] = 2,
    ACTIONS(1791), 1,
      sym_comment,
    ACTIONS(1590), 2,
      sym__eof,
      anon_sym_LF,
  [12261] = 2,
    ACTIONS(1325), 1,
      sym_comment,
    ACTIONS(1793), 2,
      sym__eof,
      anon_sym_LF,
  [12269] = 2,
    ACTIONS(1797), 1,
      sym_comment,
    ACTIONS(1795), 2,
      sym__eof,
      anon_sym_LF,
  [12277] = 3,
    ACTIONS(210), 1,
      sym_comment,
    ACTIONS(616), 1,
      anon_sym_DQUOTE,
    STATE(153), 1,
      sym_quoted_string,
  [12287] = 2,
    ACTIONS(1801), 1,
      sym_comment,
    ACTIONS(1799), 2,
      sym__eof,
      anon_sym_LF,
  [12295] = 2,
    ACTIONS(1805), 1,
      sym_comment,
    ACTIONS(1803), 2,
      sym__eof,
      anon_sym_LF,
  [12303] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1807), 1,
      anon_sym_POUND,
    ACTIONS(1809), 1,
      anon_sym_DQUOTE,
  [12313] = 2,
    ACTIONS(1522), 1,
      sym_comment,
    ACTIONS(1520), 2,
      sym__eof,
      anon_sym_LF,
  [12321] = 3,
    ACTIONS(210), 1,
      sym_comment,
    ACTIONS(616), 1,
      anon_sym_DQUOTE,
    STATE(154), 1,
      sym_quoted_string,
  [12331] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1811), 1,
      anon_sym_POUND,
    ACTIONS(1813), 1,
      anon_sym_DQUOTE,
  [12341] = 2,
    ACTIONS(1394), 1,
      sym_comment,
    ACTIONS(1815), 2,
      sym__eof,
      anon_sym_LF,
  [12349] = 2,
    ACTIONS(1313), 1,
      sym_comment,
    ACTIONS(1817), 2,
      sym__eof,
      anon_sym_LF,
  [12357] = 3,
    ACTIONS(210), 1,
      sym_comment,
    ACTIONS(616), 1,
      anon_sym_DQUOTE,
    STATE(134), 1,
      sym_quoted_string,
  [12367] = 3,
    ACTIONS(210), 1,
      sym_comment,
    ACTIONS(616), 1,
      anon_sym_DQUOTE,
    STATE(156), 1,
      sym_quoted_string,
  [12377] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1761), 1,
      aux_sym_xml_open_tag_token1,
    ACTIONS(1819), 1,
      aux_sym_xml_self_closing_tag_token1,
  [12387] = 3,
    ACTIONS(210), 1,
      sym_comment,
    ACTIONS(616), 1,
      anon_sym_DQUOTE,
    STATE(139), 1,
      sym_quoted_string,
  [12397] = 3,
    ACTIONS(210), 1,
      sym_comment,
    ACTIONS(616), 1,
      anon_sym_DQUOTE,
    STATE(157), 1,
      sym_quoted_string,
  [12407] = 3,
    ACTIONS(210), 1,
      sym_comment,
    ACTIONS(616), 1,
      anon_sym_DQUOTE,
    STATE(137), 1,
      sym_quoted_string,
  [12417] = 2,
    ACTIONS(1823), 1,
      sym_comment,
    ACTIONS(1821), 2,
      sym__eof,
      anon_sym_LF,
  [12425] = 3,
    ACTIONS(210), 1,
      sym_comment,
    ACTIONS(1669), 1,
      aux_sym_hexdigit_token1,
    STATE(476), 1,
      sym_json_hexdigit,
  [12435] = 2,
    ACTIONS(1827), 1,
      sym_comment,
    ACTIONS(1825), 2,
      sym__eof,
      anon_sym_LF,
  [12443] = 3,
    ACTIONS(210), 1,
      sym_comment,
    ACTIONS(616), 1,
      anon_sym_DQUOTE,
    STATE(146), 1,
      sym_quoted_string,
  [12453] = 2,
    ACTIONS(1831), 1,
      sym_comment,
    ACTIONS(1829), 2,
      sym__eof,
      anon_sym_LF,
  [12461] = 2,
    ACTIONS(1835), 1,
      sym_comment,
    ACTIONS(1833), 2,
      sym__eof,
      anon_sym_LF,
  [12469] = 2,
    ACTIONS(210), 1,
      sym_comment,
    ACTIONS(1837), 1,
      anon_sym_RBRACE_RBRACE,
  [12476] = 2,
    ACTIONS(210), 1,
      sym_comment,
    ACTIONS(1839), 1,
      anon_sym_COLON,
  [12483] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1841), 1,
      anon_sym_LF,
  [12490] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1843), 1,
      anon_sym_LF,
  [12497] = 2,
    ACTIONS(210), 1,
      sym_comment,
    ACTIONS(1845), 1,
      anon_sym_QMARK_GT,
  [12504] = 2,
    ACTIONS(210), 1,
      sym_comment,
    ACTIONS(1847), 1,
      anon_sym_COLON,
  [12511] = 2,
    ACTIONS(210), 1,
      sym_comment,
    ACTIONS(1849), 1,
      anon_sym_GT,
  [12518] = 2,
    ACTIONS(210), 1,
      sym_comment,
    ACTIONS(1851), 1,
      anon_sym_COLON,
  [12525] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1853), 1,
      aux_sym_oneline_base64_token1,
  [12532] = 2,
    ACTIONS(210), 1,
      sym_comment,
    ACTIONS(1855), 1,
      anon_sym_RBRACE_RBRACE,
  [12539] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1857), 1,
      aux_sym_xml_prolog_tag_token1,
  [12546] = 2,
    ACTIONS(210), 1,
      sym_comment,
    ACTIONS(1859), 1,
      anon_sym_SLASH,
  [12553] = 2,
    ACTIONS(210), 1,
      sym_comment,
    ACTIONS(1861), 1,
      anon_sym_GT,
  [12560] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1863), 1,
      aux_sym_xml_close_tag_token1,
  [12567] = 2,
    ACTIONS(210), 1,
      sym_comment,
    ACTIONS(1865), 1,
      anon_sym_RBRACE_RBRACE,
  [12574] = 2,
    ACTIONS(210), 1,
      sym_comment,
    ACTIONS(1867), 1,
      ts_builtin_sym_end,
  [12581] = 2,
    ACTIONS(210), 1,
      sym_comment,
    ACTIONS(1869), 1,
      anon_sym_SEMI,
  [12588] = 2,
    ACTIONS(210), 1,
      sym_comment,
    ACTIONS(1871), 1,
      anon_sym_COLON,
  [12595] = 2,
    ACTIONS(210), 1,
      sym_comment,
    ACTIONS(1873), 1,
      anon_sym_RBRACE,
  [12602] = 2,
    ACTIONS(210), 1,
      sym_comment,
    ACTIONS(1875), 1,
      anon_sym_RBRACE_RBRACE,
  [12609] = 2,
    ACTIONS(210), 1,
      sym_comment,
    ACTIONS(1877), 1,
      anon_sym_RBRACE,
  [12616] = 2,
    ACTIONS(210), 1,
      sym_comment,
    ACTIONS(1879), 1,
      anon_sym_RBRACE_RBRACE,
  [12623] = 2,
    ACTIONS(210), 1,
      sym_comment,
    ACTIONS(1881), 1,
      anon_sym_RBRACE,
  [12630] = 2,
    ACTIONS(210), 1,
      sym_comment,
    ACTIONS(1883), 1,
      anon_sym_RBRACE_RBRACE,
  [12637] = 2,
    ACTIONS(210), 1,
      sym_comment,
    ACTIONS(1885), 1,
      anon_sym_RBRACE_RBRACE,
  [12644] = 2,
    ACTIONS(210), 1,
      sym_comment,
    ACTIONS(1887), 1,
      anon_sym_RBRACE_RBRACE,
  [12651] = 2,
    ACTIONS(210), 1,
      sym_comment,
    ACTIONS(1889), 1,
      anon_sym_COLON,
  [12658] = 2,
    ACTIONS(210), 1,
      sym_comment,
    ACTIONS(1891), 1,
      anon_sym_COLON,
  [12665] = 2,
    ACTIONS(210), 1,
      sym_comment,
    ACTIONS(1893), 1,
      anon_sym_GT,
  [12672] = 2,
    ACTIONS(210), 1,
      sym_comment,
    ACTIONS(1895), 1,
      anon_sym_SEMI,
  [12679] = 2,
    ACTIONS(210), 1,
      sym_comment,
    ACTIONS(1897), 1,
      anon_sym_QMARK_GT,
  [12686] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1899), 1,
      aux_sym_xml_prolog_tag_token1,
  [12693] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1901), 1,
      aux_sym_regex_escaped_char_token1,
  [12700] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1903), 1,
      aux_sym_xml_close_tag_token1,
  [12707] = 2,
    ACTIONS(210), 1,
      sym_comment,
    ACTIONS(1905), 1,
      anon_sym_RBRACE,
  [12714] = 2,
    ACTIONS(210), 1,
      sym_comment,
    ACTIONS(1907), 1,
      anon_sym_SEMI,
  [12721] = 2,
    ACTIONS(210), 1,
      sym_comment,
    ACTIONS(1909), 1,
      anon_sym_GT,
  [12728] = 2,
    ACTIONS(210), 1,
      sym_comment,
    ACTIONS(1911), 1,
      anon_sym_EQ,
  [12735] = 2,
    ACTIONS(210), 1,
      sym_comment,
    ACTIONS(1913), 1,
      anon_sym_SLASH,
  [12742] = 2,
    ACTIONS(210), 1,
      sym_comment,
    ACTIONS(1915), 1,
      anon_sym_GT,
  [12749] = 2,
    ACTIONS(210), 1,
      sym_comment,
    ACTIONS(1917), 1,
      anon_sym_COLON,
  [12756] = 2,
    ACTIONS(210), 1,
      sym_comment,
    ACTIONS(1919), 1,
      anon_sym_COLON,
  [12763] = 2,
    ACTIONS(210), 1,
      sym_comment,
    ACTIONS(1921), 1,
      anon_sym_COLON,
  [12770] = 2,
    ACTIONS(210), 1,
      sym_comment,
    ACTIONS(1923), 1,
      aux_sym_hexdigit_token1,
  [12777] = 2,
    ACTIONS(210), 1,
      sym_comment,
    ACTIONS(1925), 1,
      anon_sym_COLON,
  [12784] = 2,
    ACTIONS(210), 1,
      sym_comment,
    ACTIONS(1927), 1,
      anon_sym_COLON,
  [12791] = 2,
    ACTIONS(210), 1,
      sym_comment,
    ACTIONS(1929), 1,
      anon_sym_COLON,
  [12798] = 2,
    ACTIONS(210), 1,
      sym_comment,
    ACTIONS(1931), 1,
      anon_sym_COLON,
  [12805] = 2,
    ACTIONS(210), 1,
      sym_comment,
    ACTIONS(1933), 1,
      anon_sym_RBRACE_RBRACE,
  [12812] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1935), 1,
      aux_sym_variable_name_token2,
  [12819] = 2,
    ACTIONS(210), 1,
      sym_comment,
    ACTIONS(1937), 1,
      anon_sym_RBRACE_RBRACE,
  [12826] = 2,
    ACTIONS(210), 1,
      sym_comment,
    ACTIONS(1939), 1,
      anon_sym_COLON,
  [12833] = 2,
    ACTIONS(210), 1,
      sym_comment,
    ACTIONS(1941), 1,
      anon_sym_COLON,
  [12840] = 2,
    ACTIONS(210), 1,
      sym_comment,
    ACTIONS(1943), 1,
      anon_sym_COLON,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(22)] = 0,
  [SMALL_STATE(23)] = 87,
  [SMALL_STATE(24)] = 170,
  [SMALL_STATE(25)] = 253,
  [SMALL_STATE(26)] = 336,
  [SMALL_STATE(27)] = 419,
  [SMALL_STATE(28)] = 502,
  [SMALL_STATE(29)] = 585,
  [SMALL_STATE(30)] = 668,
  [SMALL_STATE(31)] = 751,
  [SMALL_STATE(32)] = 834,
  [SMALL_STATE(33)] = 952,
  [SMALL_STATE(34)] = 1070,
  [SMALL_STATE(35)] = 1155,
  [SMALL_STATE(36)] = 1240,
  [SMALL_STATE(37)] = 1325,
  [SMALL_STATE(38)] = 1404,
  [SMALL_STATE(39)] = 1486,
  [SMALL_STATE(40)] = 1551,
  [SMALL_STATE(41)] = 1616,
  [SMALL_STATE(42)] = 1674,
  [SMALL_STATE(43)] = 1732,
  [SMALL_STATE(44)] = 1796,
  [SMALL_STATE(45)] = 1858,
  [SMALL_STATE(46)] = 1922,
  [SMALL_STATE(47)] = 1984,
  [SMALL_STATE(48)] = 2058,
  [SMALL_STATE(49)] = 2122,
  [SMALL_STATE(50)] = 2193,
  [SMALL_STATE(51)] = 2248,
  [SMALL_STATE(52)] = 2319,
  [SMALL_STATE(53)] = 2374,
  [SMALL_STATE(54)] = 2445,
  [SMALL_STATE(55)] = 2500,
  [SMALL_STATE(56)] = 2555,
  [SMALL_STATE(57)] = 2611,
  [SMALL_STATE(58)] = 2667,
  [SMALL_STATE(59)] = 2723,
  [SMALL_STATE(60)] = 2779,
  [SMALL_STATE(61)] = 2835,
  [SMALL_STATE(62)] = 2891,
  [SMALL_STATE(63)] = 2946,
  [SMALL_STATE(64)] = 3001,
  [SMALL_STATE(65)] = 3056,
  [SMALL_STATE(66)] = 3111,
  [SMALL_STATE(67)] = 3166,
  [SMALL_STATE(68)] = 3221,
  [SMALL_STATE(69)] = 3276,
  [SMALL_STATE(70)] = 3331,
  [SMALL_STATE(71)] = 3385,
  [SMALL_STATE(72)] = 3439,
  [SMALL_STATE(73)] = 3493,
  [SMALL_STATE(74)] = 3547,
  [SMALL_STATE(75)] = 3601,
  [SMALL_STATE(76)] = 3655,
  [SMALL_STATE(77)] = 3709,
  [SMALL_STATE(78)] = 3763,
  [SMALL_STATE(79)] = 3849,
  [SMALL_STATE(80)] = 3901,
  [SMALL_STATE(81)] = 3955,
  [SMALL_STATE(82)] = 4007,
  [SMALL_STATE(83)] = 4052,
  [SMALL_STATE(84)] = 4097,
  [SMALL_STATE(85)] = 4142,
  [SMALL_STATE(86)] = 4184,
  [SMALL_STATE(87)] = 4244,
  [SMALL_STATE(88)] = 4304,
  [SMALL_STATE(89)] = 4353,
  [SMALL_STATE(90)] = 4402,
  [SMALL_STATE(91)] = 4467,
  [SMALL_STATE(92)] = 4518,
  [SMALL_STATE(93)] = 4564,
  [SMALL_STATE(94)] = 4614,
  [SMALL_STATE(95)] = 4660,
  [SMALL_STATE(96)] = 4710,
  [SMALL_STATE(97)] = 4741,
  [SMALL_STATE(98)] = 4772,
  [SMALL_STATE(99)] = 4803,
  [SMALL_STATE(100)] = 4834,
  [SMALL_STATE(101)] = 4865,
  [SMALL_STATE(102)] = 4902,
  [SMALL_STATE(103)] = 4965,
  [SMALL_STATE(104)] = 5007,
  [SMALL_STATE(105)] = 5049,
  [SMALL_STATE(106)] = 5103,
  [SMALL_STATE(107)] = 5157,
  [SMALL_STATE(108)] = 5211,
  [SMALL_STATE(109)] = 5268,
  [SMALL_STATE(110)] = 5307,
  [SMALL_STATE(111)] = 5364,
  [SMALL_STATE(112)] = 5393,
  [SMALL_STATE(113)] = 5422,
  [SMALL_STATE(114)] = 5479,
  [SMALL_STATE(115)] = 5536,
  [SMALL_STATE(116)] = 5593,
  [SMALL_STATE(117)] = 5650,
  [SMALL_STATE(118)] = 5686,
  [SMALL_STATE(119)] = 5720,
  [SMALL_STATE(120)] = 5754,
  [SMALL_STATE(121)] = 5787,
  [SMALL_STATE(122)] = 5822,
  [SMALL_STATE(123)] = 5857,
  [SMALL_STATE(124)] = 5900,
  [SMALL_STATE(125)] = 5925,
  [SMALL_STATE(126)] = 5950,
  [SMALL_STATE(127)] = 5975,
  [SMALL_STATE(128)] = 6000,
  [SMALL_STATE(129)] = 6029,
  [SMALL_STATE(130)] = 6058,
  [SMALL_STATE(131)] = 6083,
  [SMALL_STATE(132)] = 6108,
  [SMALL_STATE(133)] = 6133,
  [SMALL_STATE(134)] = 6180,
  [SMALL_STATE(135)] = 6204,
  [SMALL_STATE(136)] = 6228,
  [SMALL_STATE(137)] = 6252,
  [SMALL_STATE(138)] = 6276,
  [SMALL_STATE(139)] = 6316,
  [SMALL_STATE(140)] = 6340,
  [SMALL_STATE(141)] = 6376,
  [SMALL_STATE(142)] = 6400,
  [SMALL_STATE(143)] = 6424,
  [SMALL_STATE(144)] = 6464,
  [SMALL_STATE(145)] = 6488,
  [SMALL_STATE(146)] = 6512,
  [SMALL_STATE(147)] = 6536,
  [SMALL_STATE(148)] = 6572,
  [SMALL_STATE(149)] = 6596,
  [SMALL_STATE(150)] = 6620,
  [SMALL_STATE(151)] = 6644,
  [SMALL_STATE(152)] = 6668,
  [SMALL_STATE(153)] = 6692,
  [SMALL_STATE(154)] = 6716,
  [SMALL_STATE(155)] = 6740,
  [SMALL_STATE(156)] = 6764,
  [SMALL_STATE(157)] = 6788,
  [SMALL_STATE(158)] = 6812,
  [SMALL_STATE(159)] = 6836,
  [SMALL_STATE(160)] = 6873,
  [SMALL_STATE(161)] = 6910,
  [SMALL_STATE(162)] = 6952,
  [SMALL_STATE(163)] = 6994,
  [SMALL_STATE(164)] = 7034,
  [SMALL_STATE(165)] = 7076,
  [SMALL_STATE(166)] = 7116,
  [SMALL_STATE(167)] = 7158,
  [SMALL_STATE(168)] = 7198,
  [SMALL_STATE(169)] = 7227,
  [SMALL_STATE(170)] = 7266,
  [SMALL_STATE(171)] = 7303,
  [SMALL_STATE(172)] = 7340,
  [SMALL_STATE(173)] = 7365,
  [SMALL_STATE(174)] = 7395,
  [SMALL_STATE(175)] = 7421,
  [SMALL_STATE(176)] = 7443,
  [SMALL_STATE(177)] = 7463,
  [SMALL_STATE(178)] = 7493,
  [SMALL_STATE(179)] = 7523,
  [SMALL_STATE(180)] = 7545,
  [SMALL_STATE(181)] = 7565,
  [SMALL_STATE(182)] = 7589,
  [SMALL_STATE(183)] = 7609,
  [SMALL_STATE(184)] = 7629,
  [SMALL_STATE(185)] = 7647,
  [SMALL_STATE(186)] = 7667,
  [SMALL_STATE(187)] = 7691,
  [SMALL_STATE(188)] = 7711,
  [SMALL_STATE(189)] = 7730,
  [SMALL_STATE(190)] = 7747,
  [SMALL_STATE(191)] = 7768,
  [SMALL_STATE(192)] = 7789,
  [SMALL_STATE(193)] = 7808,
  [SMALL_STATE(194)] = 7831,
  [SMALL_STATE(195)] = 7852,
  [SMALL_STATE(196)] = 7883,
  [SMALL_STATE(197)] = 7911,
  [SMALL_STATE(198)] = 7939,
  [SMALL_STATE(199)] = 7965,
  [SMALL_STATE(200)] = 7993,
  [SMALL_STATE(201)] = 8019,
  [SMALL_STATE(202)] = 8045,
  [SMALL_STATE(203)] = 8071,
  [SMALL_STATE(204)] = 8099,
  [SMALL_STATE(205)] = 8125,
  [SMALL_STATE(206)] = 8143,
  [SMALL_STATE(207)] = 8169,
  [SMALL_STATE(208)] = 8197,
  [SMALL_STATE(209)] = 8223,
  [SMALL_STATE(210)] = 8251,
  [SMALL_STATE(211)] = 8279,
  [SMALL_STATE(212)] = 8307,
  [SMALL_STATE(213)] = 8335,
  [SMALL_STATE(214)] = 8363,
  [SMALL_STATE(215)] = 8389,
  [SMALL_STATE(216)] = 8417,
  [SMALL_STATE(217)] = 8440,
  [SMALL_STATE(218)] = 8465,
  [SMALL_STATE(219)] = 8488,
  [SMALL_STATE(220)] = 8507,
  [SMALL_STATE(221)] = 8532,
  [SMALL_STATE(222)] = 8555,
  [SMALL_STATE(223)] = 8580,
  [SMALL_STATE(224)] = 8603,
  [SMALL_STATE(225)] = 8629,
  [SMALL_STATE(226)] = 8655,
  [SMALL_STATE(227)] = 8673,
  [SMALL_STATE(228)] = 8695,
  [SMALL_STATE(229)] = 8721,
  [SMALL_STATE(230)] = 8747,
  [SMALL_STATE(231)] = 8769,
  [SMALL_STATE(232)] = 8795,
  [SMALL_STATE(233)] = 8815,
  [SMALL_STATE(234)] = 8831,
  [SMALL_STATE(235)] = 8853,
  [SMALL_STATE(236)] = 8869,
  [SMALL_STATE(237)] = 8887,
  [SMALL_STATE(238)] = 8913,
  [SMALL_STATE(239)] = 8939,
  [SMALL_STATE(240)] = 8965,
  [SMALL_STATE(241)] = 8984,
  [SMALL_STATE(242)] = 9003,
  [SMALL_STATE(243)] = 9028,
  [SMALL_STATE(244)] = 9049,
  [SMALL_STATE(245)] = 9064,
  [SMALL_STATE(246)] = 9089,
  [SMALL_STATE(247)] = 9104,
  [SMALL_STATE(248)] = 9123,
  [SMALL_STATE(249)] = 9146,
  [SMALL_STATE(250)] = 9165,
  [SMALL_STATE(251)] = 9181,
  [SMALL_STATE(252)] = 9197,
  [SMALL_STATE(253)] = 9215,
  [SMALL_STATE(254)] = 9233,
  [SMALL_STATE(255)] = 9251,
  [SMALL_STATE(256)] = 9269,
  [SMALL_STATE(257)] = 9285,
  [SMALL_STATE(258)] = 9305,
  [SMALL_STATE(259)] = 9325,
  [SMALL_STATE(260)] = 9345,
  [SMALL_STATE(261)] = 9361,
  [SMALL_STATE(262)] = 9381,
  [SMALL_STATE(263)] = 9401,
  [SMALL_STATE(264)] = 9421,
  [SMALL_STATE(265)] = 9441,
  [SMALL_STATE(266)] = 9461,
  [SMALL_STATE(267)] = 9481,
  [SMALL_STATE(268)] = 9501,
  [SMALL_STATE(269)] = 9519,
  [SMALL_STATE(270)] = 9539,
  [SMALL_STATE(271)] = 9555,
  [SMALL_STATE(272)] = 9575,
  [SMALL_STATE(273)] = 9595,
  [SMALL_STATE(274)] = 9617,
  [SMALL_STATE(275)] = 9631,
  [SMALL_STATE(276)] = 9642,
  [SMALL_STATE(277)] = 9659,
  [SMALL_STATE(278)] = 9676,
  [SMALL_STATE(279)] = 9691,
  [SMALL_STATE(280)] = 9708,
  [SMALL_STATE(281)] = 9719,
  [SMALL_STATE(282)] = 9736,
  [SMALL_STATE(283)] = 9753,
  [SMALL_STATE(284)] = 9770,
  [SMALL_STATE(285)] = 9781,
  [SMALL_STATE(286)] = 9798,
  [SMALL_STATE(287)] = 9811,
  [SMALL_STATE(288)] = 9822,
  [SMALL_STATE(289)] = 9839,
  [SMALL_STATE(290)] = 9850,
  [SMALL_STATE(291)] = 9867,
  [SMALL_STATE(292)] = 9878,
  [SMALL_STATE(293)] = 9889,
  [SMALL_STATE(294)] = 9906,
  [SMALL_STATE(295)] = 9917,
  [SMALL_STATE(296)] = 9928,
  [SMALL_STATE(297)] = 9945,
  [SMALL_STATE(298)] = 9962,
  [SMALL_STATE(299)] = 9973,
  [SMALL_STATE(300)] = 9990,
  [SMALL_STATE(301)] = 10005,
  [SMALL_STATE(302)] = 10022,
  [SMALL_STATE(303)] = 10039,
  [SMALL_STATE(304)] = 10050,
  [SMALL_STATE(305)] = 10067,
  [SMALL_STATE(306)] = 10078,
  [SMALL_STATE(307)] = 10097,
  [SMALL_STATE(308)] = 10108,
  [SMALL_STATE(309)] = 10119,
  [SMALL_STATE(310)] = 10136,
  [SMALL_STATE(311)] = 10153,
  [SMALL_STATE(312)] = 10168,
  [SMALL_STATE(313)] = 10179,
  [SMALL_STATE(314)] = 10190,
  [SMALL_STATE(315)] = 10201,
  [SMALL_STATE(316)] = 10212,
  [SMALL_STATE(317)] = 10229,
  [SMALL_STATE(318)] = 10242,
  [SMALL_STATE(319)] = 10261,
  [SMALL_STATE(320)] = 10278,
  [SMALL_STATE(321)] = 10295,
  [SMALL_STATE(322)] = 10308,
  [SMALL_STATE(323)] = 10325,
  [SMALL_STATE(324)] = 10340,
  [SMALL_STATE(325)] = 10351,
  [SMALL_STATE(326)] = 10364,
  [SMALL_STATE(327)] = 10377,
  [SMALL_STATE(328)] = 10391,
  [SMALL_STATE(329)] = 10405,
  [SMALL_STATE(330)] = 10415,
  [SMALL_STATE(331)] = 10425,
  [SMALL_STATE(332)] = 10439,
  [SMALL_STATE(333)] = 10449,
  [SMALL_STATE(334)] = 10463,
  [SMALL_STATE(335)] = 10473,
  [SMALL_STATE(336)] = 10487,
  [SMALL_STATE(337)] = 10501,
  [SMALL_STATE(338)] = 10515,
  [SMALL_STATE(339)] = 10529,
  [SMALL_STATE(340)] = 10543,
  [SMALL_STATE(341)] = 10557,
  [SMALL_STATE(342)] = 10571,
  [SMALL_STATE(343)] = 10585,
  [SMALL_STATE(344)] = 10601,
  [SMALL_STATE(345)] = 10615,
  [SMALL_STATE(346)] = 10625,
  [SMALL_STATE(347)] = 10639,
  [SMALL_STATE(348)] = 10649,
  [SMALL_STATE(349)] = 10663,
  [SMALL_STATE(350)] = 10673,
  [SMALL_STATE(351)] = 10683,
  [SMALL_STATE(352)] = 10697,
  [SMALL_STATE(353)] = 10707,
  [SMALL_STATE(354)] = 10721,
  [SMALL_STATE(355)] = 10731,
  [SMALL_STATE(356)] = 10741,
  [SMALL_STATE(357)] = 10755,
  [SMALL_STATE(358)] = 10769,
  [SMALL_STATE(359)] = 10779,
  [SMALL_STATE(360)] = 10789,
  [SMALL_STATE(361)] = 10799,
  [SMALL_STATE(362)] = 10809,
  [SMALL_STATE(363)] = 10819,
  [SMALL_STATE(364)] = 10829,
  [SMALL_STATE(365)] = 10839,
  [SMALL_STATE(366)] = 10853,
  [SMALL_STATE(367)] = 10867,
  [SMALL_STATE(368)] = 10881,
  [SMALL_STATE(369)] = 10892,
  [SMALL_STATE(370)] = 10901,
  [SMALL_STATE(371)] = 10910,
  [SMALL_STATE(372)] = 10923,
  [SMALL_STATE(373)] = 10932,
  [SMALL_STATE(374)] = 10941,
  [SMALL_STATE(375)] = 10952,
  [SMALL_STATE(376)] = 10963,
  [SMALL_STATE(377)] = 10972,
  [SMALL_STATE(378)] = 10985,
  [SMALL_STATE(379)] = 10996,
  [SMALL_STATE(380)] = 11009,
  [SMALL_STATE(381)] = 11022,
  [SMALL_STATE(382)] = 11031,
  [SMALL_STATE(383)] = 11044,
  [SMALL_STATE(384)] = 11057,
  [SMALL_STATE(385)] = 11066,
  [SMALL_STATE(386)] = 11079,
  [SMALL_STATE(387)] = 11092,
  [SMALL_STATE(388)] = 11105,
  [SMALL_STATE(389)] = 11118,
  [SMALL_STATE(390)] = 11127,
  [SMALL_STATE(391)] = 11140,
  [SMALL_STATE(392)] = 11153,
  [SMALL_STATE(393)] = 11166,
  [SMALL_STATE(394)] = 11175,
  [SMALL_STATE(395)] = 11188,
  [SMALL_STATE(396)] = 11197,
  [SMALL_STATE(397)] = 11210,
  [SMALL_STATE(398)] = 11219,
  [SMALL_STATE(399)] = 11232,
  [SMALL_STATE(400)] = 11245,
  [SMALL_STATE(401)] = 11258,
  [SMALL_STATE(402)] = 11271,
  [SMALL_STATE(403)] = 11284,
  [SMALL_STATE(404)] = 11297,
  [SMALL_STATE(405)] = 11310,
  [SMALL_STATE(406)] = 11323,
  [SMALL_STATE(407)] = 11336,
  [SMALL_STATE(408)] = 11349,
  [SMALL_STATE(409)] = 11360,
  [SMALL_STATE(410)] = 11373,
  [SMALL_STATE(411)] = 11381,
  [SMALL_STATE(412)] = 11389,
  [SMALL_STATE(413)] = 11397,
  [SMALL_STATE(414)] = 11405,
  [SMALL_STATE(415)] = 11413,
  [SMALL_STATE(416)] = 11421,
  [SMALL_STATE(417)] = 11429,
  [SMALL_STATE(418)] = 11437,
  [SMALL_STATE(419)] = 11445,
  [SMALL_STATE(420)] = 11453,
  [SMALL_STATE(421)] = 11461,
  [SMALL_STATE(422)] = 11469,
  [SMALL_STATE(423)] = 11477,
  [SMALL_STATE(424)] = 11485,
  [SMALL_STATE(425)] = 11495,
  [SMALL_STATE(426)] = 11505,
  [SMALL_STATE(427)] = 11515,
  [SMALL_STATE(428)] = 11523,
  [SMALL_STATE(429)] = 11531,
  [SMALL_STATE(430)] = 11541,
  [SMALL_STATE(431)] = 11549,
  [SMALL_STATE(432)] = 11557,
  [SMALL_STATE(433)] = 11567,
  [SMALL_STATE(434)] = 11577,
  [SMALL_STATE(435)] = 11585,
  [SMALL_STATE(436)] = 11595,
  [SMALL_STATE(437)] = 11603,
  [SMALL_STATE(438)] = 11611,
  [SMALL_STATE(439)] = 11621,
  [SMALL_STATE(440)] = 11629,
  [SMALL_STATE(441)] = 11637,
  [SMALL_STATE(442)] = 11645,
  [SMALL_STATE(443)] = 11655,
  [SMALL_STATE(444)] = 11665,
  [SMALL_STATE(445)] = 11675,
  [SMALL_STATE(446)] = 11683,
  [SMALL_STATE(447)] = 11693,
  [SMALL_STATE(448)] = 11701,
  [SMALL_STATE(449)] = 11711,
  [SMALL_STATE(450)] = 11719,
  [SMALL_STATE(451)] = 11727,
  [SMALL_STATE(452)] = 11735,
  [SMALL_STATE(453)] = 11743,
  [SMALL_STATE(454)] = 11751,
  [SMALL_STATE(455)] = 11759,
  [SMALL_STATE(456)] = 11767,
  [SMALL_STATE(457)] = 11777,
  [SMALL_STATE(458)] = 11785,
  [SMALL_STATE(459)] = 11793,
  [SMALL_STATE(460)] = 11801,
  [SMALL_STATE(461)] = 11809,
  [SMALL_STATE(462)] = 11817,
  [SMALL_STATE(463)] = 11825,
  [SMALL_STATE(464)] = 11833,
  [SMALL_STATE(465)] = 11841,
  [SMALL_STATE(466)] = 11851,
  [SMALL_STATE(467)] = 11859,
  [SMALL_STATE(468)] = 11869,
  [SMALL_STATE(469)] = 11877,
  [SMALL_STATE(470)] = 11885,
  [SMALL_STATE(471)] = 11893,
  [SMALL_STATE(472)] = 11903,
  [SMALL_STATE(473)] = 11911,
  [SMALL_STATE(474)] = 11921,
  [SMALL_STATE(475)] = 11931,
  [SMALL_STATE(476)] = 11939,
  [SMALL_STATE(477)] = 11949,
  [SMALL_STATE(478)] = 11957,
  [SMALL_STATE(479)] = 11967,
  [SMALL_STATE(480)] = 11975,
  [SMALL_STATE(481)] = 11983,
  [SMALL_STATE(482)] = 11993,
  [SMALL_STATE(483)] = 12003,
  [SMALL_STATE(484)] = 12013,
  [SMALL_STATE(485)] = 12023,
  [SMALL_STATE(486)] = 12031,
  [SMALL_STATE(487)] = 12041,
  [SMALL_STATE(488)] = 12049,
  [SMALL_STATE(489)] = 12059,
  [SMALL_STATE(490)] = 12069,
  [SMALL_STATE(491)] = 12077,
  [SMALL_STATE(492)] = 12085,
  [SMALL_STATE(493)] = 12095,
  [SMALL_STATE(494)] = 12103,
  [SMALL_STATE(495)] = 12113,
  [SMALL_STATE(496)] = 12121,
  [SMALL_STATE(497)] = 12131,
  [SMALL_STATE(498)] = 12139,
  [SMALL_STATE(499)] = 12149,
  [SMALL_STATE(500)] = 12157,
  [SMALL_STATE(501)] = 12165,
  [SMALL_STATE(502)] = 12175,
  [SMALL_STATE(503)] = 12183,
  [SMALL_STATE(504)] = 12191,
  [SMALL_STATE(505)] = 12199,
  [SMALL_STATE(506)] = 12207,
  [SMALL_STATE(507)] = 12217,
  [SMALL_STATE(508)] = 12227,
  [SMALL_STATE(509)] = 12235,
  [SMALL_STATE(510)] = 12245,
  [SMALL_STATE(511)] = 12253,
  [SMALL_STATE(512)] = 12261,
  [SMALL_STATE(513)] = 12269,
  [SMALL_STATE(514)] = 12277,
  [SMALL_STATE(515)] = 12287,
  [SMALL_STATE(516)] = 12295,
  [SMALL_STATE(517)] = 12303,
  [SMALL_STATE(518)] = 12313,
  [SMALL_STATE(519)] = 12321,
  [SMALL_STATE(520)] = 12331,
  [SMALL_STATE(521)] = 12341,
  [SMALL_STATE(522)] = 12349,
  [SMALL_STATE(523)] = 12357,
  [SMALL_STATE(524)] = 12367,
  [SMALL_STATE(525)] = 12377,
  [SMALL_STATE(526)] = 12387,
  [SMALL_STATE(527)] = 12397,
  [SMALL_STATE(528)] = 12407,
  [SMALL_STATE(529)] = 12417,
  [SMALL_STATE(530)] = 12425,
  [SMALL_STATE(531)] = 12435,
  [SMALL_STATE(532)] = 12443,
  [SMALL_STATE(533)] = 12453,
  [SMALL_STATE(534)] = 12461,
  [SMALL_STATE(535)] = 12469,
  [SMALL_STATE(536)] = 12476,
  [SMALL_STATE(537)] = 12483,
  [SMALL_STATE(538)] = 12490,
  [SMALL_STATE(539)] = 12497,
  [SMALL_STATE(540)] = 12504,
  [SMALL_STATE(541)] = 12511,
  [SMALL_STATE(542)] = 12518,
  [SMALL_STATE(543)] = 12525,
  [SMALL_STATE(544)] = 12532,
  [SMALL_STATE(545)] = 12539,
  [SMALL_STATE(546)] = 12546,
  [SMALL_STATE(547)] = 12553,
  [SMALL_STATE(548)] = 12560,
  [SMALL_STATE(549)] = 12567,
  [SMALL_STATE(550)] = 12574,
  [SMALL_STATE(551)] = 12581,
  [SMALL_STATE(552)] = 12588,
  [SMALL_STATE(553)] = 12595,
  [SMALL_STATE(554)] = 12602,
  [SMALL_STATE(555)] = 12609,
  [SMALL_STATE(556)] = 12616,
  [SMALL_STATE(557)] = 12623,
  [SMALL_STATE(558)] = 12630,
  [SMALL_STATE(559)] = 12637,
  [SMALL_STATE(560)] = 12644,
  [SMALL_STATE(561)] = 12651,
  [SMALL_STATE(562)] = 12658,
  [SMALL_STATE(563)] = 12665,
  [SMALL_STATE(564)] = 12672,
  [SMALL_STATE(565)] = 12679,
  [SMALL_STATE(566)] = 12686,
  [SMALL_STATE(567)] = 12693,
  [SMALL_STATE(568)] = 12700,
  [SMALL_STATE(569)] = 12707,
  [SMALL_STATE(570)] = 12714,
  [SMALL_STATE(571)] = 12721,
  [SMALL_STATE(572)] = 12728,
  [SMALL_STATE(573)] = 12735,
  [SMALL_STATE(574)] = 12742,
  [SMALL_STATE(575)] = 12749,
  [SMALL_STATE(576)] = 12756,
  [SMALL_STATE(577)] = 12763,
  [SMALL_STATE(578)] = 12770,
  [SMALL_STATE(579)] = 12777,
  [SMALL_STATE(580)] = 12784,
  [SMALL_STATE(581)] = 12791,
  [SMALL_STATE(582)] = 12798,
  [SMALL_STATE(583)] = 12805,
  [SMALL_STATE(584)] = 12812,
  [SMALL_STATE(585)] = 12819,
  [SMALL_STATE(586)] = 12826,
  [SMALL_STATE(587)] = 12833,
  [SMALL_STATE(588)] = 12840,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hurl_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(294),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_options_section, 3, 0, 3),
  [15] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_options_section, 3, 0, 3),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(579),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(580),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(581),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(582),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(536),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(586),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(587),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_options_section_repeat1, 2, 0, 0),
  [33] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_options_section_repeat1, 2, 0, 0),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_options_section_repeat1, 2, 0, 0), SHIFT_REPEAT(579),
  [38] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_options_section_repeat1, 2, 0, 0), SHIFT_REPEAT(580),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_options_section_repeat1, 2, 0, 0), SHIFT_REPEAT(581),
  [44] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_options_section_repeat1, 2, 0, 0), SHIFT_REPEAT(582),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_options_section_repeat1, 2, 0, 0), SHIFT_REPEAT(536),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_options_section_repeat1, 2, 0, 0), SHIFT_REPEAT(586),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_options_section_repeat1, 2, 0, 0), SHIFT_REPEAT(587),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_options_section, 2, 0, 3),
  [58] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_options_section, 2, 0, 3),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 2, 0, 0),
  [62] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 2, 0, 0),
  [64] = {.entry = {.count = 1, .reusable = false}}, SHIFT(290),
  [66] = {.entry = {.count = 1, .reusable = false}}, SHIFT(285),
  [68] = {.entry = {.count = 1, .reusable = false}}, SHIFT(296),
  [70] = {.entry = {.count = 1, .reusable = false}}, SHIFT(297),
  [72] = {.entry = {.count = 1, .reusable = false}}, SHIFT(299),
  [74] = {.entry = {.count = 1, .reusable = false}}, SHIFT(276),
  [76] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [78] = {.entry = {.count = 1, .reusable = false}}, SHIFT(211),
  [80] = {.entry = {.count = 1, .reusable = false}}, SHIFT(517),
  [82] = {.entry = {.count = 1, .reusable = false}}, SHIFT(242),
  [84] = {.entry = {.count = 1, .reusable = false}}, SHIFT(525),
  [86] = {.entry = {.count = 1, .reusable = false}}, SHIFT(545),
  [88] = {.entry = {.count = 1, .reusable = false}}, SHIFT(543),
  [90] = {.entry = {.count = 1, .reusable = false}}, SHIFT(348),
  [92] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [94] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [96] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [98] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(234),
  [102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(226),
  [104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(398),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 3, 0, 0),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 3, 0, 0),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 4, 0, 0),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 4, 0, 0),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__comment_or_new_line_repeat1, 2, 0, 0),
  [118] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__comment_or_new_line_repeat1, 2, 0, 0), SHIFT_REPEAT(9),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__comment_or_new_line_repeat1, 2, 0, 0),
  [123] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__comment_or_new_line_repeat1, 2, 0, 0), SHIFT_REPEAT(9),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__comment_or_new_line, 1, 0, 0),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__comment_or_new_line, 1, 0, 0),
  [132] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 5, 0, 0),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 5, 0, 0),
  [138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(500),
  [140] = {.entry = {.count = 1, .reusable = false}}, SHIFT(452),
  [142] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [144] = {.entry = {.count = 1, .reusable = false}}, SHIFT(453),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response, 3, 0, 0),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_response, 3, 0, 0),
  [150] = {.entry = {.count = 1, .reusable = false}}, SHIFT(310),
  [152] = {.entry = {.count = 1, .reusable = false}}, SHIFT(309),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response, 4, 0, 0),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_response, 4, 0, 0),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(474),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [162] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(529),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [174] = {.entry = {.count = 1, .reusable = false}}, SHIFT(239),
  [176] = {.entry = {.count = 1, .reusable = false}}, SHIFT(225),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [182] = {.entry = {.count = 1, .reusable = false}}, SHIFT(229),
  [184] = {.entry = {.count = 1, .reusable = false}}, SHIFT(231),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(501),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(478),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(498),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multipart_form_data_section, 3, 0, 3),
  [214] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multipart_form_data_section, 3, 0, 3),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multipart_form_data_section, 2, 0, 3),
  [218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multipart_form_data_section, 2, 0, 3),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_multipart_form_data_section_repeat1, 2, 0, 0),
  [222] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_multipart_form_data_section_repeat1, 2, 0, 0),
  [224] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multipart_form_data_section_repeat1, 2, 0, 0), SHIFT_REPEAT(194),
  [227] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multipart_form_data_section_repeat1, 2, 0, 0), SHIFT_REPEAT(517),
  [230] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multipart_form_data_section_repeat1, 2, 0, 0), SHIFT_REPEAT(402),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_request_repeat1, 2, 0, 0),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_request_repeat1, 2, 0, 0),
  [237] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat1, 2, 0, 0), SHIFT_REPEAT(194),
  [240] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat1, 2, 0, 0), SHIFT_REPEAT(517),
  [243] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat1, 2, 0, 0), SHIFT_REPEAT(402),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cookies_section, 4, 0, 3),
  [248] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cookies_section, 4, 0, 3),
  [250] = {.entry = {.count = 1, .reusable = false}}, SHIFT(402),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cookies_section, 5, 0, 3),
  [254] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cookies_section, 5, 0, 3),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_form_params_section, 5, 0, 3),
  [258] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_form_params_section, 5, 0, 3),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_string_params_section, 5, 0, 3),
  [262] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query_string_params_section, 5, 0, 3),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_string_params_section, 3, 0, 3),
  [266] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query_string_params_section, 3, 0, 3),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_form_params_section, 4, 0, 3),
  [270] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_form_params_section, 4, 0, 3),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_form_params_section, 3, 0, 3),
  [274] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_form_params_section, 3, 0, 3),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_string_params_section, 4, 0, 3),
  [278] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query_string_params_section, 4, 0, 3),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cookies_section, 3, 0, 3),
  [282] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cookies_section, 3, 0, 3),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response, 5, 0, 0),
  [286] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_response, 5, 0, 0),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_asserts_section, 3, 0, 3),
  [290] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_asserts_section, 3, 0, 3),
  [292] = {.entry = {.count = 1, .reusable = false}}, SHIFT(424),
  [294] = {.entry = {.count = 1, .reusable = false}}, SHIFT(473),
  [296] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [298] = {.entry = {.count = 1, .reusable = false}}, SHIFT(482),
  [300] = {.entry = {.count = 1, .reusable = false}}, SHIFT(489),
  [302] = {.entry = {.count = 1, .reusable = false}}, SHIFT(492),
  [304] = {.entry = {.count = 1, .reusable = false}}, SHIFT(365),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_asserts_section_repeat1, 2, 0, 0),
  [308] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_asserts_section_repeat1, 2, 0, 0),
  [310] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_asserts_section_repeat1, 2, 0, 0), SHIFT_REPEAT(424),
  [313] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_asserts_section_repeat1, 2, 0, 0), SHIFT_REPEAT(473),
  [316] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_asserts_section_repeat1, 2, 0, 0), SHIFT_REPEAT(74),
  [319] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_asserts_section_repeat1, 2, 0, 0), SHIFT_REPEAT(482),
  [322] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_asserts_section_repeat1, 2, 0, 0), SHIFT_REPEAT(489),
  [325] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_asserts_section_repeat1, 2, 0, 0), SHIFT_REPEAT(492),
  [328] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_asserts_section_repeat1, 2, 0, 0), SHIFT_REPEAT(365),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_asserts_section, 2, 0, 3),
  [333] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_asserts_section, 2, 0, 3),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_request_repeat2, 2, 0, 0),
  [337] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_request_repeat2, 2, 0, 0),
  [339] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat2, 2, 0, 0), SHIFT_REPEAT(290),
  [342] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat2, 2, 0, 0), SHIFT_REPEAT(285),
  [345] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat2, 2, 0, 0), SHIFT_REPEAT(296),
  [348] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat2, 2, 0, 0), SHIFT_REPEAT(297),
  [351] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat2, 2, 0, 0), SHIFT_REPEAT(299),
  [354] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat2, 2, 0, 0), SHIFT_REPEAT(276),
  [357] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_capture_repeat1, 2, 0, 0), SHIFT_REPEAT(474),
  [360] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_capture_repeat1, 2, 0, 0), SHIFT_REPEAT(346),
  [363] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_capture_repeat1, 2, 0, 0),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_capture_repeat1, 2, 0, 0),
  [367] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_capture_repeat1, 2, 0, 0), SHIFT_REPEAT(65),
  [370] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_capture_repeat1, 2, 0, 0), SHIFT_REPEAT(478),
  [373] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_capture_repeat1, 2, 0, 0), SHIFT_REPEAT(306),
  [376] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_capture_repeat1, 2, 0, 0), SHIFT_REPEAT(356),
  [379] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_capture_repeat1, 2, 0, 0), SHIFT_REPEAT(498),
  [382] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__comment_or_new_line_repeat1, 2, 0, 0), SHIFT_REPEAT(39),
  [385] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__comment_or_new_line_repeat1, 2, 0, 0), SHIFT_REPEAT(39),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [390] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 2, 0, 0),
  [394] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 2, 0, 0),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer, 2, 0, 0),
  [398] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer, 2, 0, 0),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [404] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer, 1, 0, 0),
  [408] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer, 1, 0, 0),
  [410] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__comment_or_new_line_repeat1, 2, 0, 0), SHIFT_REPEAT(46),
  [413] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__comment_or_new_line_repeat1, 2, 0, 0), SHIFT_REPEAT(46),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_integer_repeat1, 2, 0, 0),
  [418] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_integer_repeat1, 2, 0, 0),
  [420] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_integer_repeat1, 2, 0, 0), SHIFT_REPEAT(60),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_captures_section, 3, 0, 3),
  [425] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_captures_section, 3, 0, 3),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assert, 3, 0, 0),
  [429] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assert, 3, 0, 0),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_captures_section, 2, 0, 3),
  [433] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_captures_section, 2, 0, 3),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request_section, 1, 0, 0),
  [437] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request_section, 1, 0, 0),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_captures_section_repeat1, 2, 0, 0),
  [441] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_captures_section_repeat1, 2, 0, 0),
  [443] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_captures_section_repeat1, 2, 0, 0), SHIFT_REPEAT(194),
  [446] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_captures_section_repeat1, 2, 0, 0), SHIFT_REPEAT(517),
  [449] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_captures_section_repeat1, 2, 0, 0), SHIFT_REPEAT(402),
  [452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_basic_auth_section, 4, 0, 3),
  [454] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_basic_auth_section, 4, 0, 3),
  [456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assert, 4, 0, 0),
  [458] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assert, 4, 0, 0),
  [460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_string, 2, 0, 0),
  [462] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_string, 2, 0, 0),
  [464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regex, 2, 0, 0),
  [466] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_regex, 2, 0, 0),
  [468] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regex, 3, 0, 0),
  [470] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_regex, 3, 0, 0),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_string, 3, 0, 0),
  [474] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_string, 3, 0, 0),
  [476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_digit, 1, 0, 0),
  [478] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_digit, 1, 0, 0),
  [480] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_integer_repeat1, 1, 0, 0),
  [482] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_integer_repeat1, 1, 0, 0),
  [484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regex_filter, 2, 0, 2),
  [486] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_regex_filter, 2, 0, 2),
  [488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xpath_filter, 2, 0, 2),
  [490] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xpath_filter, 2, 0, 2),
  [492] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filter, 1, 0, 0),
  [494] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_filter, 1, 0, 0),
  [496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_filter_key, 1, 0, 2),
  [498] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_filter_key, 1, 0, 2),
  [500] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_split_filter, 2, 0, 2),
  [502] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_split_filter, 2, 0, 2),
  [504] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_replace_filter, 3, 0, 2),
  [506] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_replace_filter, 3, 0, 2),
  [508] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_filter, 2, 0, 2),
  [510] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_filter, 2, 0, 2),
  [512] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nth_filter, 2, 0, 2),
  [514] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nth_filter, 2, 0, 2),
  [516] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query, 1, 0, 0),
  [518] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query, 1, 0, 0),
  [520] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jsonpath_query, 2, 0, 5),
  [522] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_jsonpath_query, 2, 0, 5),
  [524] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_query, 2, 0, 5),
  [526] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header_query, 2, 0, 5),
  [528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_query, 2, 0, 5),
  [530] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_query, 2, 0, 5),
  [532] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_query, 1, 0, 5),
  [534] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_query, 1, 0, 5),
  [536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cookie_query, 2, 0, 5),
  [538] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cookie_query, 2, 0, 5),
  [540] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xpath_query, 2, 0, 5),
  [542] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xpath_query, 2, 0, 5),
  [544] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regex_query, 2, 0, 5),
  [546] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_regex_query, 2, 0, 5),
  [548] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__comment_or_new_line_repeat1, 2, 0, 0), SHIFT_REPEAT(79),
  [551] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__comment_or_new_line_repeat1, 2, 0, 0), SHIFT_REPEAT(79),
  [554] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_response_repeat1, 2, 0, 0),
  [556] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_response_repeat1, 2, 0, 0),
  [558] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_response_repeat1, 2, 0, 0), SHIFT_REPEAT(310),
  [561] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_response_repeat1, 2, 0, 0), SHIFT_REPEAT(309),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [566] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [568] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_capture, 5, 0, 0),
  [570] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_capture, 5, 0, 0),
  [572] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_capture, 4, 0, 0),
  [574] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_capture, 4, 0, 0),
  [576] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response_section, 1, 0, 0),
  [578] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_response_section, 1, 0, 0),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [582] = {.entry = {.count = 1, .reusable = false}}, SHIFT(524),
  [584] = {.entry = {.count = 1, .reusable = false}}, SHIFT(351),
  [586] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [588] = {.entry = {.count = 1, .reusable = false}}, SHIFT(526),
  [590] = {.entry = {.count = 1, .reusable = false}}, SHIFT(318),
  [592] = {.entry = {.count = 1, .reusable = false}}, SHIFT(338),
  [594] = {.entry = {.count = 1, .reusable = false}}, SHIFT(528),
  [596] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [602] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entry, 2, 0, 0),
  [604] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_entry, 2, 0, 0),
  [606] = {.entry = {.count = 1, .reusable = false}}, SHIFT(504),
  [608] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entry, 1, 0, 0),
  [610] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_entry, 1, 0, 0),
  [612] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(520),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [618] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [620] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [626] = {.entry = {.count = 1, .reusable = false}}, SHIFT(390),
  [628] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [630] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_capture_repeat1, 2, 0, 0), SHIFT_REPEAT(524),
  [633] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_capture_repeat1, 2, 0, 0), SHIFT_REPEAT(351),
  [636] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_capture_repeat1, 2, 0, 0), SHIFT_REPEAT(141),
  [639] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_capture_repeat1, 2, 0, 0), SHIFT_REPEAT(526),
  [642] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_capture_repeat1, 2, 0, 0), SHIFT_REPEAT(318),
  [645] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_capture_repeat1, 2, 0, 0), SHIFT_REPEAT(338),
  [648] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_capture_repeat1, 2, 0, 0), SHIFT_REPEAT(528),
  [651] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hurl_file, 1, 0, 0),
  [653] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 2, 0, 0),
  [655] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_hurl_file_repeat1, 2, 0, 0),
  [657] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_hurl_file_repeat1, 2, 0, 0), SHIFT_REPEAT(128),
  [660] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_hurl_file_repeat1, 2, 0, 0), SHIFT_REPEAT(294),
  [663] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_hurl_file_repeat1, 2, 0, 0), SHIFT_REPEAT(128),
  [666] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 1, 0, 0),
  [668] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 2, 0, 0),
  [670] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_body, 2, 0, 0),
  [672] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 6, 0, 0),
  [674] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 6, 0, 0),
  [676] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_integer_repeat1, 2, 0, 0), SHIFT_REPEAT(111),
  [679] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_key_value, 2, 0, 0),
  [681] = {.entry = {.count = 1, .reusable = false}}, SHIFT(518),
  [683] = {.entry = {.count = 1, .reusable = false}}, SHIFT(209),
  [685] = {.entry = {.count = 1, .reusable = false}}, SHIFT(236),
  [687] = {.entry = {.count = 1, .reusable = false}}, SHIFT(516),
  [689] = {.entry = {.count = 1, .reusable = false}}, SHIFT(270),
  [691] = {.entry = {.count = 1, .reusable = false}}, SHIFT(386),
  [693] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_value, 2, 0, 0),
  [695] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hurl_file, 2, 0, 0),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [699] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(469),
  [709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(543),
  [713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(516),
  [717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [725] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [727] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_hurl_file_repeat2, 2, 0, 0),
  [729] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_hurl_file_repeat2, 2, 0, 0), SHIFT_REPEAT(44),
  [732] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_hurl_file_repeat2, 2, 0, 0),
  [734] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_hurl_file_repeat2, 2, 0, 0), SHIFT_REPEAT(44),
  [737] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_hurl_file_repeat2, 2, 0, 0), SHIFT_REPEAT(128),
  [740] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_hurl_file_repeat2, 2, 0, 0), SHIFT_REPEAT(128),
  [743] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entry, 3, 0, 0),
  [745] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_entry, 3, 0, 0),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(527),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(523),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(519),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(514),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(509),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [761] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entry, 4, 0, 0),
  [763] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_entry, 4, 0, 0),
  [765] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response, 6, 0, 0),
  [767] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_response, 6, 0, 0),
  [769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [771] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [773] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__comment_or_new_line_repeat1, 2, 0, 0), SHIFT_REPEAT(129),
  [776] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__comment_or_new_line_repeat1, 2, 0, 0), SHIFT_REPEAT(129),
  [779] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_key_string_text_repeat1, 1, 0, 0),
  [781] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_key_string_text_repeat1, 1, 0, 0), SHIFT(389),
  [784] = {.entry = {.count = 1, .reusable = false}}, SHIFT(245),
  [786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [788] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_key_string_text_repeat1, 1, 0, 0),
  [790] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_key_string_text_repeat1, 1, 0, 0), SHIFT(370),
  [793] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_string_text_repeat1, 1, 0, 0), SHIFT(165),
  [796] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_string_text_repeat1, 1, 0, 0), SHIFT(511),
  [799] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_string_text_repeat1, 1, 0, 0), SHIFT(373),
  [802] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_string_text_repeat1, 1, 0, 0), SHIFT(402),
  [805] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_name, 2, 0, 0),
  [807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(517),
  [809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [813] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_string, 1, 0, 0),
  [815] = {.entry = {.count = 1, .reusable = false}}, SHIFT(520),
  [817] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_key_string, 1, 0, 0),
  [819] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_key_string_repeat1, 2, 0, 0),
  [821] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_key_string_repeat1, 2, 0, 0), SHIFT_REPEAT(185),
  [824] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_key_string_repeat1, 2, 0, 0), SHIFT_REPEAT(520),
  [827] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_key_string_repeat1, 2, 0, 0), SHIFT_REPEAT(398),
  [830] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_key_string_repeat1, 2, 0, 0),
  [832] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_key_string_repeat1, 2, 0, 0), SHIFT_REPEAT(194),
  [835] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_string_repeat1, 2, 0, 0), SHIFT_REPEAT(517),
  [838] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_string_repeat1, 2, 0, 0), SHIFT_REPEAT(194),
  [841] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_string_repeat1, 2, 0, 0), SHIFT_REPEAT(402),
  [844] = {.entry = {.count = 1, .reusable = false}}, SHIFT(488),
  [846] = {.entry = {.count = 1, .reusable = false}}, SHIFT(566),
  [848] = {.entry = {.count = 1, .reusable = false}}, SHIFT(548),
  [850] = {.entry = {.count = 1, .reusable = false}}, SHIFT(250),
  [852] = {.entry = {.count = 1, .reusable = false}}, SHIFT(404),
  [854] = {.entry = {.count = 1, .reusable = false}}, SHIFT(568),
  [856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(511),
  [864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [870] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_key_string_content_repeat1, 2, 0, 0),
  [872] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_key_string_content_repeat1, 2, 0, 0), SHIFT_REPEAT(185),
  [875] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_key_string_content_repeat1, 2, 0, 0), SHIFT_REPEAT(520),
  [878] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_key_string_content_repeat1, 2, 0, 0),
  [880] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_xml_tag_repeat1, 2, 0, 0), SHIFT_REPEAT(488),
  [883] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_xml_tag_repeat1, 2, 0, 0), SHIFT_REPEAT(566),
  [886] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_xml_tag_repeat1, 2, 0, 0),
  [888] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_xml_tag_repeat1, 2, 0, 0), SHIFT_REPEAT(250),
  [891] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_xml_tag_repeat1, 2, 0, 0), SHIFT_REPEAT(404),
  [894] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_string_content, 1, 0, 0),
  [896] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_key_string_content, 1, 0, 0),
  [898] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_key_string_content_repeat1, 2, 0, 0), SHIFT_REPEAT(194),
  [901] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_string_content_repeat1, 2, 0, 0), SHIFT_REPEAT(517),
  [904] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_string_content_repeat1, 2, 0, 0), SHIFT_REPEAT(194),
  [907] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [909] = {.entry = {.count = 1, .reusable = true}}, SHIFT(484),
  [911] = {.entry = {.count = 1, .reusable = false}}, SHIFT(349),
  [913] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template, 3, 0, 1),
  [915] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_template, 3, 0, 1),
  [917] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_string, 1, 0, 0),
  [919] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_string, 1, 0, 0),
  [921] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_value_string_repeat1, 2, 0, 0),
  [923] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_string_repeat1, 2, 0, 0), SHIFT_REPEAT(236),
  [926] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_string_repeat1, 2, 0, 0), SHIFT_REPEAT(270),
  [929] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_string_repeat1, 2, 0, 0), SHIFT_REPEAT(386),
  [932] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_value_string_repeat1, 2, 0, 0),
  [934] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_key_string_text_repeat1, 2, 0, 0),
  [936] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_key_string_text_repeat1, 2, 0, 0), SHIFT_REPEAT(179),
  [939] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_key_string_text_repeat1, 2, 0, 0),
  [941] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_value, 1, 0, 0),
  [943] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_key_string_repeat1, 1, 0, 0),
  [945] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_value, 1, 0, 0),
  [947] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__comment_or_new_line_repeat1, 2, 0, 0), SHIFT_REPEAT(181),
  [950] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__comment_or_new_line_repeat1, 2, 0, 0), SHIFT_REPEAT(181),
  [953] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_number, 1, 0, 0),
  [955] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_number, 1, 0, 0),
  [957] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_string_text, 1, 0, 0),
  [959] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_key_string_text, 1, 0, 0),
  [961] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [963] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [965] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_boolean, 1, 0, 0),
  [967] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_boolean, 1, 0, 0),
  [969] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_variable_value, 1, 0, 0), REDUCE(aux_sym_key_string_text_repeat1, 1, 0, 0),
  [972] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_variable_value, 1, 0, 0), REDUCE(aux_sym_key_string_text_repeat1, 1, 0, 0),
  [975] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_string_escaped_char, 2, 0, 0),
  [977] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_key_string_escaped_char, 2, 0, 0),
  [979] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [981] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [983] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__comment_or_new_line_repeat1, 2, 0, 0), SHIFT_REPEAT(191),
  [986] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__comment_or_new_line_repeat1, 2, 0, 0), SHIFT_REPEAT(191),
  [989] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_boolean, 1, 0, 0), REDUCE(aux_sym_key_string_text_repeat1, 1, 0, 0),
  [992] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_boolean, 1, 0, 0), REDUCE(aux_sym_key_string_text_repeat1, 1, 0, 0),
  [995] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_key_string_text_repeat1, 2, 0, 0), SHIFT_REPEAT(193),
  [998] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_string_text_repeat1, 2, 0, 0), SHIFT_REPEAT(193),
  [1001] = {.entry = {.count = 1, .reusable = false}}, SHIFT(317),
  [1003] = {.entry = {.count = 1, .reusable = false}}, SHIFT(233),
  [1005] = {.entry = {.count = 1, .reusable = false}}, SHIFT(531),
  [1007] = {.entry = {.count = 1, .reusable = false}}, SHIFT(244),
  [1009] = {.entry = {.count = 1, .reusable = false}}, SHIFT(406),
  [1011] = {.entry = {.count = 1, .reusable = false}}, SHIFT(235),
  [1013] = {.entry = {.count = 1, .reusable = false}}, SHIFT(497),
  [1015] = {.entry = {.count = 1, .reusable = false}}, SHIFT(311),
  [1017] = {.entry = {.count = 1, .reusable = false}}, SHIFT(401),
  [1019] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_string_repeat1, 2, 0, 0), SHIFT_REPEAT(219),
  [1022] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_quoted_string_repeat1, 2, 0, 0),
  [1024] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_string_repeat1, 2, 0, 0), SHIFT_REPEAT(249),
  [1027] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_string_repeat1, 2, 0, 0), SHIFT_REPEAT(407),
  [1030] = {.entry = {.count = 1, .reusable = false}}, SHIFT(418),
  [1032] = {.entry = {.count = 1, .reusable = false}}, SHIFT(219),
  [1034] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [1036] = {.entry = {.count = 1, .reusable = false}}, SHIFT(249),
  [1038] = {.entry = {.count = 1, .reusable = false}}, SHIFT(407),
  [1040] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [1042] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_filename, 1, 0, 0),
  [1044] = {.entry = {.count = 1, .reusable = false}}, SHIFT(374),
  [1046] = {.entry = {.count = 1, .reusable = false}}, SHIFT(246),
  [1048] = {.entry = {.count = 1, .reusable = false}}, SHIFT(409),
  [1050] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filename, 1, 0, 0),
  [1052] = {.entry = {.count = 1, .reusable = false}}, SHIFT(330),
  [1054] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_filename_repeat1, 2, 0, 0),
  [1056] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_filename_repeat1, 2, 0, 0), SHIFT_REPEAT(374),
  [1059] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_filename_repeat1, 2, 0, 0), SHIFT_REPEAT(246),
  [1062] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_filename_repeat1, 2, 0, 0), SHIFT_REPEAT(409),
  [1065] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_filename_repeat1, 2, 0, 0),
  [1067] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multiline_string_repeat1, 2, 0, 0), SHIFT_REPEAT(244),
  [1070] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multiline_string_repeat1, 2, 0, 0), SHIFT_REPEAT(233),
  [1073] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_multiline_string_repeat1, 2, 0, 0),
  [1075] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multiline_string_repeat1, 2, 0, 0), SHIFT_REPEAT(406),
  [1078] = {.entry = {.count = 1, .reusable = false}}, SHIFT(286),
  [1080] = {.entry = {.count = 1, .reusable = false}}, SHIFT(440),
  [1082] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [1084] = {.entry = {.count = 1, .reusable = false}}, SHIFT(375),
  [1086] = {.entry = {.count = 1, .reusable = false}}, SHIFT(368),
  [1088] = {.entry = {.count = 1, .reusable = false}}, SHIFT(274),
  [1090] = {.entry = {.count = 1, .reusable = false}}, SHIFT(400),
  [1092] = {.entry = {.count = 1, .reusable = false}}, SHIFT(321),
  [1094] = {.entry = {.count = 1, .reusable = false}}, SHIFT(534),
  [1096] = {.entry = {.count = 1, .reusable = false}}, SHIFT(411),
  [1098] = {.entry = {.count = 1, .reusable = false}}, SHIFT(347),
  [1100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [1102] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_string_repeat1, 2, 0, 0), SHIFT_REPEAT(235),
  [1105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_json_string_repeat1, 2, 0, 0),
  [1107] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_string_repeat1, 2, 0, 0), SHIFT_REPEAT(311),
  [1110] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_string_repeat1, 2, 0, 0), SHIFT_REPEAT(401),
  [1113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_value_string_content_repeat1, 2, 0, 0),
  [1115] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_string_content_repeat1, 2, 0, 0), SHIFT_REPEAT(236),
  [1118] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_string_content_repeat1, 2, 0, 0), SHIFT_REPEAT(270),
  [1121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_value_string_content_repeat1, 2, 0, 0),
  [1123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_string_content, 1, 0, 0),
  [1125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_string_content, 1, 0, 0),
  [1127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(360),
  [1129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(507),
  [1131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(358),
  [1133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xml_value_string, 1, 0, 0),
  [1135] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_filename_repeat1, 2, 0, 0), SHIFT_REPEAT(368),
  [1138] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_filename_repeat1, 2, 0, 0), SHIFT_REPEAT(274),
  [1141] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_filename_repeat1, 2, 0, 0), SHIFT_REPEAT(400),
  [1144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_xml_value_string_repeat1, 2, 0, 0),
  [1146] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_xml_value_string_repeat1, 2, 0, 0), SHIFT_REPEAT(250),
  [1149] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_xml_value_string_repeat1, 2, 0, 0), SHIFT_REPEAT(404),
  [1152] = {.entry = {.count = 1, .reusable = false}}, SHIFT(210),
  [1154] = {.entry = {.count = 1, .reusable = false}}, SHIFT(538),
  [1156] = {.entry = {.count = 1, .reusable = false}}, SHIFT(533),
  [1158] = {.entry = {.count = 1, .reusable = false}}, SHIFT(326),
  [1160] = {.entry = {.count = 1, .reusable = false}}, SHIFT(403),
  [1162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_oneline_string_repeat1, 2, 0, 0),
  [1164] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_oneline_string_repeat1, 2, 0, 0), SHIFT_REPEAT(326),
  [1167] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_oneline_string_repeat1, 2, 0, 0), SHIFT_REPEAT(403),
  [1170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__unsigned_integer, 1, 0, 7),
  [1172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__unsigned_integer, 1, 0, 7),
  [1174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [1176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [1178] = {.entry = {.count = 1, .reusable = false}}, SHIFT(510),
  [1180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [1182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(465),
  [1184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [1186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(435),
  [1188] = {.entry = {.count = 1, .reusable = false}}, SHIFT(289),
  [1190] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_string_content_repeat1, 2, 0, 0), SHIFT_REPEAT(219),
  [1193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_quoted_string_content_repeat1, 2, 0, 0),
  [1195] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_string_content_repeat1, 2, 0, 0), SHIFT_REPEAT(240),
  [1198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_filename_content_repeat1, 2, 0, 0),
  [1200] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_filename_content_repeat1, 2, 0, 0), SHIFT_REPEAT(374),
  [1203] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_filename_content_repeat1, 2, 0, 0), SHIFT_REPEAT(241),
  [1206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_filename_content_repeat1, 2, 0, 0),
  [1208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(451),
  [1210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [1212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [1214] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [1216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline_string_content, 1, 0, 0),
  [1218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [1220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_filename_content, 1, 0, 0),
  [1222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filename_content, 1, 0, 0),
  [1224] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multiline_string_content_repeat1, 2, 0, 0), SHIFT_REPEAT(247),
  [1227] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multiline_string_content_repeat1, 2, 0, 0), SHIFT_REPEAT(233),
  [1230] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_multiline_string_content_repeat1, 2, 0, 0),
  [1232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(545),
  [1234] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_string_content, 1, 0, 0),
  [1236] = {.entry = {.count = 1, .reusable = false}}, SHIFT(240),
  [1238] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_string_text, 1, 0, 0),
  [1240] = {.entry = {.count = 1, .reusable = false}}, SHIFT(260),
  [1242] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_value_string_text_repeat1, 2, 0, 0),
  [1244] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_string_text_repeat1, 2, 0, 0), SHIFT_REPEAT(251),
  [1247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_value_string_text_repeat1, 2, 0, 0),
  [1249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_filename_password_repeat1, 2, 0, 0),
  [1251] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_filename_password_repeat1, 2, 0, 0), SHIFT_REPEAT(254),
  [1254] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_filename_password_repeat1, 2, 0, 0), SHIFT_REPEAT(175),
  [1257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_filename_password_repeat1, 2, 0, 0),
  [1259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_filename_password, 1, 0, 0),
  [1261] = {.entry = {.count = 1, .reusable = false}}, SHIFT(254),
  [1263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filename_password, 1, 0, 0),
  [1265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_duration_option, 3, 0, 6),
  [1267] = {.entry = {.count = 1, .reusable = false}}, SHIFT(479),
  [1269] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_duration_option, 3, 0, 6),
  [1271] = {.entry = {.count = 1, .reusable = false}}, SHIFT(567),
  [1273] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [1275] = {.entry = {.count = 1, .reusable = false}}, SHIFT(304),
  [1277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [1279] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_query_string_params_section_repeat1, 2, 0, 0), SHIFT_REPEAT(190),
  [1282] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_string_params_section_repeat1, 2, 0, 0), SHIFT_REPEAT(190),
  [1285] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_query_string_params_section_repeat1, 2, 0, 0), SHIFT_REPEAT(138),
  [1288] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_string_text_repeat1, 2, 0, 0), SHIFT_REPEAT(260),
  [1291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [1293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [1295] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [1297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [1299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [1301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [1303] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_filename_content_repeat1, 2, 0, 0), SHIFT_REPEAT(368),
  [1306] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_filename_content_repeat1, 2, 0, 0), SHIFT_REPEAT(268),
  [1309] = {.entry = {.count = 1, .reusable = false}}, SHIFT(251),
  [1311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_string_text, 1, 0, 0),
  [1313] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xml_tag, 2, 0, 0),
  [1315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [1317] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [1319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [1321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [1323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [1325] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xml_tag, 1, 0, 0),
  [1327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [1329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [1331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [1333] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline_string_escaped_char, 2, 0, 0),
  [1335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [1337] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [1339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [1341] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_multiline_string_content_repeat1, 1, 0, 0),
  [1343] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xml_open_tag, 3, 0, 0),
  [1345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [1347] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_string_escaped_char, 2, 0, 0),
  [1349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_string_escaped_char, 2, 0, 0),
  [1351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [1353] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [1355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [1357] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_filename_escaped_char, 2, 0, 0),
  [1359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filename_escaped_char, 2, 0, 0),
  [1361] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unicode_char, 6, 0, 0),
  [1363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unicode_char, 6, 0, 0),
  [1365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [1367] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_method, 1, 0, 0),
  [1369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method, 1, 0, 0),
  [1371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [1373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [1375] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xml_self_closing_tag, 3, 0, 0),
  [1377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [1379] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_json_string_text_repeat1, 2, 0, 0),
  [1381] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_string_text_repeat1, 2, 0, 0), SHIFT_REPEAT(300),
  [1384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [1386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [1388] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xml_prolog_tag, 3, 0, 0),
  [1390] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_regex_content, 1, 0, 0),
  [1392] = {.entry = {.count = 1, .reusable = false}}, SHIFT(316),
  [1394] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xml_tag, 3, 0, 0),
  [1396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [1398] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xml_close_tag, 3, 0, 0),
  [1400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [1402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [1404] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_string_text, 1, 0, 0),
  [1406] = {.entry = {.count = 1, .reusable = false}}, SHIFT(300),
  [1408] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline_string_escaped_char, 3, 0, 0),
  [1410] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_regex_content_repeat1, 2, 0, 0), SHIFT_REPEAT(567),
  [1413] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_regex_content_repeat1, 2, 0, 0),
  [1415] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_regex_content_repeat1, 2, 0, 0), SHIFT_REPEAT(316),
  [1418] = {.entry = {.count = 1, .reusable = false}}, SHIFT(475),
  [1420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [1422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fraction, 2, 0, 0),
  [1424] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fraction, 2, 0, 0),
  [1426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [1428] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_oneline_string_content_repeat1, 2, 0, 0),
  [1430] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_oneline_string_content_repeat1, 2, 0, 0), SHIFT_REPEAT(323),
  [1433] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_string_escaped_char, 3, 0, 0),
  [1435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_string_escaped_char, 3, 0, 0),
  [1437] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_option, 3, 0, 6),
  [1439] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_value_string_repeat1, 1, 0, 0),
  [1441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_option, 3, 0, 6),
  [1443] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneline_string_content, 1, 0, 0),
  [1445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_less_or_equal_predicate, 2, 0, 0),
  [1447] = {.entry = {.count = 1, .reusable = false}}, SHIFT(405),
  [1449] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_less_or_equal_predicate, 2, 0, 0),
  [1451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_predicate_value, 1, 0, 0),
  [1453] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_predicate_value, 1, 0, 0),
  [1455] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_filename_password_escaped_char, 3, 0, 0),
  [1457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filename_password_escaped_char, 3, 0, 0),
  [1459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_string, 2, 0, 0),
  [1461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_less_or_equal_predicate, 2, 0, 8),
  [1463] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_less_or_equal_predicate, 2, 0, 8),
  [1465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_less_predicate, 2, 0, 0),
  [1467] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_less_predicate, 2, 0, 0),
  [1469] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_string_escaped_char, 6, 0, 0),
  [1471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_less_predicate, 2, 0, 8),
  [1473] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_less_predicate, 2, 0, 8),
  [1475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_value, 1, 0, 0),
  [1477] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_value, 1, 0, 0),
  [1479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_greater_or_equal_predicate, 2, 0, 0),
  [1481] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_greater_or_equal_predicate, 2, 0, 0),
  [1483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [1485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [1487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_greater_or_equal_predicate, 2, 0, 8),
  [1489] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_greater_or_equal_predicate, 2, 0, 8),
  [1491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [1493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_greater_predicate, 2, 0, 0),
  [1495] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_greater_predicate, 2, 0, 0),
  [1497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_greater_predicate, 2, 0, 8),
  [1499] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_greater_predicate, 2, 0, 8),
  [1501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_oneline_hex_repeat1, 2, 0, 0),
  [1503] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_oneline_hex_repeat1, 2, 0, 0), SHIFT_REPEAT(369),
  [1506] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_string_escaped_char, 2, 0, 0),
  [1508] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_string, 3, 0, 0),
  [1510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(491),
  [1512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [1514] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_filename_password_escaped_char, 2, 0, 0),
  [1516] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filename_password_escaped_char, 2, 0, 0),
  [1518] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_string_escaped_char, 3, 0, 0),
  [1520] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_value, 3, 0, 0),
  [1522] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_key_value, 3, 0, 0),
  [1524] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_hexdigit, 1, 0, 0),
  [1526] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_xml_repeat1, 2, 0, 0),
  [1528] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_xml_repeat1, 2, 0, 0), SHIFT_REPEAT(545),
  [1531] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_invalid_quoted_string_escaped_char, 2, 0, 0),
  [1533] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_string_escaped_char, 2, 0, 0),
  [1535] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_string_content, 1, 0, 0),
  [1537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(459),
  [1539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [1541] = {.entry = {.count = 1, .reusable = false}}, SHIFT(332),
  [1543] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hexdigit, 1, 0, 0),
  [1545] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_array, 4, 0, 0),
  [1547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [1549] = {.entry = {.count = 1, .reusable = false}}, SHIFT(291),
  [1551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_value, 2, 0, 0),
  [1553] = {.entry = {.count = 1, .reusable = false}}, SHIFT(427),
  [1555] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_file_value, 2, 0, 0),
  [1557] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_object, 4, 0, 0),
  [1559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [1561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
  [1563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(503),
  [1565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(455),
  [1567] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_array, 3, 0, 0),
  [1569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(428),
  [1571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [1573] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_object, 3, 0, 0),
  [1575] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_json_object_repeat1, 2, 0, 0),
  [1577] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_json_object_repeat1, 2, 0, 0), SHIFT_REPEAT(343),
  [1580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(584),
  [1582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [1584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [1586] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_regex_escaped_char, 2, 0, 0),
  [1588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [1590] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_array, 2, 0, 0),
  [1592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(441),
  [1594] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_object, 2, 0, 0),
  [1596] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_json_array_repeat1, 2, 0, 0),
  [1598] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_json_array_repeat1, 2, 0, 0), SHIFT_REPEAT(170),
  [1601] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_value, 3, 0, 0),
  [1603] = {.entry = {.count = 1, .reusable = false}}, SHIFT(434),
  [1605] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_file_value, 3, 0, 0),
  [1607] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multipart_form_data_param, 1, 0, 0),
  [1609] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multipart_form_data_param, 1, 0, 0),
  [1611] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneline_file, 2, 0, 0),
  [1613] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneline_file, 2, 0, 0),
  [1615] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_string, 3, 0, 0),
  [1617] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_with_predicate, 2, 0, 8),
  [1619] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_with_predicate, 2, 0, 8),
  [1621] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_end_with_predicate, 2, 0, 8),
  [1623] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_end_with_predicate, 2, 0, 8),
  [1625] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contain_predicate, 2, 0, 8),
  [1627] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_contain_predicate, 2, 0, 8),
  [1629] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_match_predicate, 2, 0, 8),
  [1631] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_match_predicate, 2, 0, 8),
  [1633] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_predicate, 2, 0, 8),
  [1635] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_include_predicate, 2, 0, 8),
  [1637] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_array, 3, 0, 0),
  [1639] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 3, 0, 0),
  [1641] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_definition, 3, 0, 0),
  [1643] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_value, 4, 0, 0),
  [1645] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_file_value, 4, 0, 0),
  [1647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(467),
  [1649] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xml_close_tag, 3, 0, 0),
  [1651] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xml_self_closing_tag, 3, 0, 0),
  [1653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [1655] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_status, 1, 0, 0),
  [1657] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_status, 1, 0, 0),
  [1659] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_string, 4, 0, 0),
  [1661] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline_string, 4, 0, 0),
  [1663] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_array, 4, 0, 0),
  [1665] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bytes, 1, 0, 0),
  [1667] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bytes, 1, 0, 0),
  [1669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(578),
  [1671] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneline_file, 3, 0, 0),
  [1673] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneline_file, 3, 0, 0),
  [1675] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_key_value, 3, 0, 0),
  [1677] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_object, 2, 0, 0),
  [1679] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_param, 3, 0, 0),
  [1681] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_file_param, 3, 0, 0),
  [1683] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_object, 4, 0, 0),
  [1685] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xml_prolog_tag, 3, 0, 0),
  [1687] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneline_base64, 3, 0, 0),
  [1689] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneline_base64, 3, 0, 0),
  [1691] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xml, 1, 0, 0),
  [1693] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xml, 1, 0, 0),
  [1695] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneline_hex, 3, 0, 0),
  [1697] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneline_hex, 3, 0, 0),
  [1699] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_not_equal_predicate, 2, 0, 0),
  [1701] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_not_equal_predicate, 2, 0, 0),
  [1703] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_not_equal_predicate, 2, 0, 8),
  [1705] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_not_equal_predicate, 2, 0, 8),
  [1707] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_equal_predicate, 2, 0, 0),
  [1709] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_equal_predicate, 2, 0, 0),
  [1711] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_equal_predicate, 2, 0, 8),
  [1713] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_equal_predicate, 2, 0, 8),
  [1715] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ca_certificate_option, 3, 0, 6),
  [1717] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ca_certificate_option, 3, 0, 6),
  [1719] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cert_option, 3, 0, 6),
  [1721] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cert_option, 3, 0, 6),
  [1723] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_predicate, 2, 0, 0),
  [1725] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_predicate, 2, 0, 0),
  [1727] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_query_string_params_section_repeat1, 2, 0, 0),
  [1729] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_query_string_params_section_repeat1, 2, 0, 0),
  [1731] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_string, 6, 0, 0),
  [1733] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline_string, 6, 0, 0),
  [1735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [1737] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_duration_option, 4, 0, 6),
  [1739] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_duration_option, 4, 0, 6),
  [1741] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_duration_unit, 1, 0, 0),
  [1743] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_duration_unit, 1, 0, 0),
  [1745] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_option, 3, 0, 6),
  [1747] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_option, 3, 0, 6),
  [1749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [1751] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_option, 3, 0, 6),
  [1753] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean_option, 3, 0, 6),
  [1755] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_option, 3, 0, 6),
  [1757] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer_option, 3, 0, 6),
  [1759] = {.entry = {.count = 1, .reusable = false}}, SHIFT(541),
  [1761] = {.entry = {.count = 1, .reusable = false}}, SHIFT(571),
  [1763] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneline_hex, 2, 0, 0),
  [1765] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneline_hex, 2, 0, 0),
  [1767] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_predicate_func, 1, 0, 0),
  [1769] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_predicate_func, 1, 0, 0),
  [1771] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_predicate, 1, 0, 0),
  [1773] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_predicate, 1, 0, 0),
  [1775] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_string, 2, 0, 0),
  [1777] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_object, 3, 0, 0),
  [1779] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version, 1, 0, 0),
  [1781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(426),
  [1783] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xml, 2, 0, 0),
  [1785] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xml, 2, 0, 0),
  [1787] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneline_string, 2, 0, 0),
  [1789] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneline_string, 2, 0, 0),
  [1791] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_array, 2, 0, 0),
  [1793] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xml_tag, 1, 0, 0),
  [1795] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float, 2, 0, 0),
  [1797] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float, 2, 0, 0),
  [1799] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option, 1, 0, 0),
  [1801] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_option, 1, 0, 0),
  [1803] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1, 0, 0),
  [1805] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1, 0, 0),
  [1807] = {.entry = {.count = 1, .reusable = false}}, SHIFT(205),
  [1809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [1811] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [1813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [1815] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xml_tag, 3, 0, 0),
  [1817] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xml_tag, 2, 0, 0),
  [1819] = {.entry = {.count = 1, .reusable = false}}, SHIFT(574),
  [1821] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_predicate, 1, 0, 8),
  [1823] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_predicate, 1, 0, 8),
  [1825] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_string, 5, 0, 0),
  [1827] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline_string, 5, 0, 0),
  [1829] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneline_string, 3, 0, 0),
  [1831] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneline_string, 3, 0, 0),
  [1833] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_string, 3, 0, 0),
  [1835] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline_string, 3, 0, 0),
  [1837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [1839] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_duration_option_key, 1, 0, 0),
  [1841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [1843] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_string_type, 1, 0, 0),
  [1845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [1847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [1849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [1851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [1853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(564),
  [1855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [1857] = {.entry = {.count = 1, .reusable = false}}, SHIFT(565),
  [1859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [1861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [1863] = {.entry = {.count = 1, .reusable = false}}, SHIFT(547),
  [1865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [1867] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(449),
  [1871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [1873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [1875] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [1877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [1879] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [1881] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [1883] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [1885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [1887] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [1889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [1891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [1893] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [1895] = {.entry = {.count = 1, .reusable = true}}, SHIFT(457),
  [1897] = {.entry = {.count = 1, .reusable = true}}, SHIFT(456),
  [1899] = {.entry = {.count = 1, .reusable = false}}, SHIFT(539),
  [1901] = {.entry = {.count = 1, .reusable = false}}, SHIFT(393),
  [1903] = {.entry = {.count = 1, .reusable = false}}, SHIFT(563),
  [1905] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [1907] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [1909] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [1911] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [1913] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [1915] = {.entry = {.count = 1, .reusable = true}}, SHIFT(437),
  [1917] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_key_string, 1, 0, 4),
  [1919] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [1921] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [1923] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_hexdigit, 1, 0, 0),
  [1925] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [1927] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [1929] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_option_key, 1, 0, 0),
  [1931] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_option_key, 1, 0, 0),
  [1933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [1935] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [1937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [1939] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_option_key, 1, 0, 0),
  [1941] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [1943] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
};

enum ts_external_scanner_symbol_identifiers {
  ts_external_token__eof = 0,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__eof] = sym__eof,
};

static const bool ts_external_scanner_states[2][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__eof] = true,
  },
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_hurl_external_scanner_create(void);
void tree_sitter_hurl_external_scanner_destroy(void *);
bool tree_sitter_hurl_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_hurl_external_scanner_serialize(void *, char *);
void tree_sitter_hurl_external_scanner_deserialize(void *, const char *, unsigned);

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
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_hurl_external_scanner_create,
      tree_sitter_hurl_external_scanner_destroy,
      tree_sitter_hurl_external_scanner_scan,
      tree_sitter_hurl_external_scanner_serialize,
      tree_sitter_hurl_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
