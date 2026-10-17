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
#define STATE_COUNT 569
#define LARGE_STATE_COUNT 19
#define SYMBOL_COUNT 374
#define ALIAS_COUNT 1
#define TOKEN_COUNT 209
#define EXTERNAL_TOKEN_COUNT 4
#define FIELD_COUNT 6
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 13

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
  anon_sym_LBRACE_LBRACE = 149,
  anon_sym_RBRACE_RBRACE = 150,
  sym_key_string_text = 151,
  sym_key_string_escaped_char = 152,
  aux_sym_value_string_text_token1 = 153,
  anon_sym_BQUOTE = 154,
  aux_sym_oneline_string_text_token1 = 155,
  anon_sym_LBRACE2 = 156,
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
  anon_sym_RBRACK = 169,
  aux_sym_json_string_text_token1 = 170,
  sym__json_number = 171,
  anon_sym_true = 172,
  anon_sym_false = 173,
  anon_sym_LBRACE_LBRACE2 = 174,
  aux_sym_variable_name_token1 = 175,
  aux_sym_variable_name_token2 = 176,
  anon_sym_count = 177,
  anon_sym_urlEncode = 178,
  anon_sym_urlDecode = 179,
  anon_sym_toInt = 180,
  anon_sym_htmlEscape = 181,
  anon_sym_htmlUnescape = 182,
  anon_sym_daysAfterNow = 183,
  anon_sym_daysBeforeNow = 184,
  anon_sym_decode = 185,
  anon_sym_format = 186,
  anon_sym_toDate = 187,
  anon_sym_nth = 188,
  anon_sym_replace = 189,
  anon_sym_split = 190,
  sym__alphanum = 191,
  sym_integer = 192,
  sym_float = 193,
  aux_sym_digit_token1 = 194,
  aux_sym_hexdigit_token1 = 195,
  anon_sym_DOT = 196,
  anon_sym_e = 197,
  anon_sym_E = 198,
  anon_sym_PLUS = 199,
  anon_sym_DASH = 200,
  sym_comment = 201,
  anon_sym_SLASH = 202,
  sym_regex_text = 203,
  aux_sym_regex_escaped_char_token1 = 204,
  sym__eof = 205,
  sym__json_array_start = 206,
  sym__bracketed_key_start = 207,
  sym__error_sentinel = 208,
  sym_hurl_file = 209,
  sym_entry = 210,
  sym__comment_or_new_line = 211,
  sym__line_ending = 212,
  sym_request = 213,
  sym_response = 214,
  sym_method = 215,
  sym_version = 216,
  sym_status = 217,
  sym_header = 218,
  sym_body = 219,
  sym_request_section = 220,
  sym_response_section = 221,
  sym_basic_auth_section = 222,
  sym_query_string_params_section = 223,
  sym_form_params_section = 224,
  sym_multipart_form_data_section = 225,
  sym_cookies_section = 226,
  sym_captures_section = 227,
  sym_asserts_section = 228,
  sym_options_section = 229,
  sym_key_value = 230,
  sym_multipart_form_data_param = 231,
  sym_file_param = 232,
  sym_file_value = 233,
  sym_capture = 234,
  sym_assert = 235,
  sym_option = 236,
  sym_ca_certificate_option = 237,
  sym_cert_option = 238,
  sym_filename_password = 239,
  sym_filename_password_escaped_char = 240,
  sym_boolean_option = 241,
  sym_boolean_option_key = 242,
  sym_integer_option = 243,
  sym_integer_option_key = 244,
  sym_duration_option = 245,
  sym_duration_option_key = 246,
  sym_duration_unit = 247,
  sym_string_option = 248,
  sym_string_option_key = 249,
  sym_variable_option = 250,
  sym_variable_definition = 251,
  sym_variable_value = 252,
  sym_query = 253,
  sym_simple_query = 254,
  sym_header_query = 255,
  sym_cookie_query = 256,
  sym_xpath_query = 257,
  sym_jsonpath_query = 258,
  sym_regex_query = 259,
  sym_variable_query = 260,
  sym_predicate = 261,
  sym_predicate_func = 262,
  sym_simple_predicate = 263,
  sym_equal_predicate = 264,
  sym_not_equal_predicate = 265,
  sym_greater_predicate = 266,
  sym_greater_or_equal_predicate = 267,
  sym_less_predicate = 268,
  sym_less_or_equal_predicate = 269,
  sym_start_with_predicate = 270,
  sym_end_with_predicate = 271,
  sym_contain_predicate = 272,
  sym_match_predicate = 273,
  sym_include_predicate = 274,
  sym_predicate_value = 275,
  sym_bytes = 276,
  sym_xml = 277,
  sym_xml_prolog_tag = 278,
  sym_xml_tag = 279,
  sym_xml_self_closing_tag = 280,
  sym_xml_open_tag = 281,
  sym_xml_close_tag = 282,
  sym_oneline_base64 = 283,
  sym_oneline_file = 284,
  sym_oneline_hex = 285,
  sym_quoted_string = 286,
  sym_quoted_string_content = 287,
  sym_invalid_quoted_string_escaped_char = 288,
  sym_quoted_string_escaped_char = 289,
  sym_key_string = 290,
  sym__bracketed_key_content = 291,
  sym__key_template = 292,
  sym_key_string_content = 293,
  sym_xml_value_string = 294,
  sym_value_string = 295,
  sym_value_string_content = 296,
  sym_value_string_text = 297,
  sym_value_string_escaped_char = 298,
  sym_oneline_string = 299,
  sym_oneline_string_content = 300,
  sym_oneline_string_text = 301,
  sym_multiline_string = 302,
  sym_multiline_string_type = 303,
  sym_multiline_string_content = 304,
  sym_multiline_string_escaped_char = 305,
  sym_filename = 306,
  sym_filename_content = 307,
  sym_filename_escaped_char = 308,
  sym_unicode_char = 309,
  sym_json_value = 310,
  sym_json_object = 311,
  sym_json_key_value = 312,
  sym_json_key_string = 313,
  sym_json_array = 314,
  sym_json_string = 315,
  sym_json_string_content = 316,
  sym_json_string_text = 317,
  sym_json_string_escaped_char = 318,
  sym_json_number = 319,
  sym_json_boolean = 320,
  sym_template = 321,
  sym_expr = 322,
  sym_variable_name = 323,
  sym_filter = 324,
  sym_simple_filter_key = 325,
  sym_argument_filter = 326,
  sym_regex_filter = 327,
  sym_nth_filter = 328,
  sym_replace_filter = 329,
  sym_split_filter = 330,
  sym_xpath_filter = 331,
  sym_boolean = 332,
  sym__unsigned_integer = 333,
  sym_hexdigit = 334,
  sym_json_hexdigit = 335,
  sym_regex = 336,
  sym_regex_content = 337,
  sym_regex_escaped_char = 338,
  aux_sym_hurl_file_repeat1 = 339,
  aux_sym_hurl_file_repeat2 = 340,
  aux_sym__comment_or_new_line_repeat1 = 341,
  aux_sym_request_repeat1 = 342,
  aux_sym_request_repeat2 = 343,
  aux_sym_response_repeat1 = 344,
  aux_sym_query_string_params_section_repeat1 = 345,
  aux_sym_multipart_form_data_section_repeat1 = 346,
  aux_sym_captures_section_repeat1 = 347,
  aux_sym_asserts_section_repeat1 = 348,
  aux_sym_options_section_repeat1 = 349,
  aux_sym_capture_repeat1 = 350,
  aux_sym_filename_password_repeat1 = 351,
  aux_sym_xml_repeat1 = 352,
  aux_sym_xml_tag_repeat1 = 353,
  aux_sym_oneline_hex_repeat1 = 354,
  aux_sym_quoted_string_repeat1 = 355,
  aux_sym_quoted_string_content_repeat1 = 356,
  aux_sym_key_string_repeat1 = 357,
  aux_sym_key_string_content_repeat1 = 358,
  aux_sym_xml_value_string_repeat1 = 359,
  aux_sym_value_string_repeat1 = 360,
  aux_sym_value_string_content_repeat1 = 361,
  aux_sym_value_string_text_repeat1 = 362,
  aux_sym_oneline_string_repeat1 = 363,
  aux_sym_oneline_string_content_repeat1 = 364,
  aux_sym_multiline_string_repeat1 = 365,
  aux_sym_multiline_string_content_repeat1 = 366,
  aux_sym_filename_repeat1 = 367,
  aux_sym_filename_content_repeat1 = 368,
  aux_sym_json_object_repeat1 = 369,
  aux_sym_json_array_repeat1 = 370,
  aux_sym_json_string_repeat1 = 371,
  aux_sym_json_string_text_repeat1 = 372,
  aux_sym_regex_content_repeat1 = 373,
  anon_alias_sym_json_key_string = 374,
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
  [anon_sym_LBRACE_LBRACE] = "template",
  [anon_sym_RBRACE_RBRACE] = "}}",
  [sym_key_string_text] = "key_string_text",
  [sym_key_string_escaped_char] = "key_string_escaped_char",
  [aux_sym_value_string_text_token1] = "value_string_text_token1",
  [anon_sym_BQUOTE] = "`",
  [aux_sym_oneline_string_text_token1] = "oneline_string_text_token1",
  [anon_sym_LBRACE2] = "{",
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
  [anon_sym_RBRACK] = "]",
  [aux_sym_json_string_text_token1] = "json_string_text_token1",
  [sym__json_number] = "_json_number",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [anon_sym_LBRACE_LBRACE2] = "{{",
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
  [sym_integer] = "integer",
  [sym_float] = "float",
  [aux_sym_digit_token1] = "digit_token1",
  [aux_sym_hexdigit_token1] = "hexdigit_token1",
  [anon_sym_DOT] = ".",
  [anon_sym_e] = "e",
  [anon_sym_E] = "E",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [sym_comment] = "comment",
  [anon_sym_SLASH] = "/",
  [sym_regex_text] = "regex_text",
  [aux_sym_regex_escaped_char_token1] = "regex_escaped_char_token1",
  [sym__eof] = "_eof",
  [sym__json_array_start] = "[",
  [sym__bracketed_key_start] = "key_string_text",
  [sym__error_sentinel] = "_error_sentinel",
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
  [sym__bracketed_key_content] = "key_string_content",
  [sym__key_template] = "_key_template",
  [sym_key_string_content] = "key_string_content",
  [sym_xml_value_string] = "xml_value_string",
  [sym_value_string] = "value_string",
  [sym_value_string_content] = "value_string_content",
  [sym_value_string_text] = "value_string_text",
  [sym_value_string_escaped_char] = "value_string_escaped_char",
  [sym_oneline_string] = "oneline_string",
  [sym_oneline_string_content] = "oneline_string_content",
  [sym_oneline_string_text] = "oneline_string_text",
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
  [sym__unsigned_integer] = "_unsigned_integer",
  [sym_hexdigit] = "hexdigit",
  [sym_json_hexdigit] = "json_hexdigit",
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
  [anon_sym_LBRACE_LBRACE] = sym_template,
  [anon_sym_RBRACE_RBRACE] = anon_sym_RBRACE_RBRACE,
  [sym_key_string_text] = sym_key_string_text,
  [sym_key_string_escaped_char] = sym_key_string_escaped_char,
  [aux_sym_value_string_text_token1] = aux_sym_value_string_text_token1,
  [anon_sym_BQUOTE] = anon_sym_BQUOTE,
  [aux_sym_oneline_string_text_token1] = aux_sym_oneline_string_text_token1,
  [anon_sym_LBRACE2] = anon_sym_LBRACE,
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
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [aux_sym_json_string_text_token1] = aux_sym_json_string_text_token1,
  [sym__json_number] = sym__json_number,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [anon_sym_LBRACE_LBRACE2] = anon_sym_LBRACE_LBRACE,
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
  [sym_integer] = sym_integer,
  [sym_float] = sym_float,
  [aux_sym_digit_token1] = aux_sym_digit_token1,
  [aux_sym_hexdigit_token1] = aux_sym_hexdigit_token1,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_e] = anon_sym_e,
  [anon_sym_E] = anon_sym_E,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [sym_comment] = sym_comment,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [sym_regex_text] = sym_regex_text,
  [aux_sym_regex_escaped_char_token1] = aux_sym_regex_escaped_char_token1,
  [sym__eof] = sym__eof,
  [sym__json_array_start] = sym__json_array_start,
  [sym__bracketed_key_start] = sym_key_string_text,
  [sym__error_sentinel] = sym__error_sentinel,
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
  [sym__bracketed_key_content] = sym_key_string_content,
  [sym__key_template] = sym__key_template,
  [sym_key_string_content] = sym_key_string_content,
  [sym_xml_value_string] = sym_xml_value_string,
  [sym_value_string] = sym_value_string,
  [sym_value_string_content] = sym_value_string_content,
  [sym_value_string_text] = sym_value_string_text,
  [sym_value_string_escaped_char] = sym_value_string_escaped_char,
  [sym_oneline_string] = sym_oneline_string,
  [sym_oneline_string_content] = sym_oneline_string_content,
  [sym_oneline_string_text] = sym_oneline_string_text,
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
  [sym__unsigned_integer] = sym__unsigned_integer,
  [sym_hexdigit] = sym_hexdigit,
  [sym_json_hexdigit] = sym_json_hexdigit,
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
  [anon_sym_LBRACE_LBRACE] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_RBRACE_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym_key_string_text] = {
    .visible = true,
    .named = true,
  },
  [sym_key_string_escaped_char] = {
    .visible = true,
    .named = true,
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
  [anon_sym_LBRACE2] = {
    .visible = true,
    .named = false,
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
  [anon_sym_RBRACK] = {
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
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE_LBRACE2] = {
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
  [sym_integer] = {
    .visible = true,
    .named = true,
  },
  [sym_float] = {
    .visible = true,
    .named = true,
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
  [sym__json_array_start] = {
    .visible = true,
    .named = false,
  },
  [sym__bracketed_key_start] = {
    .visible = true,
    .named = true,
  },
  [sym__error_sentinel] = {
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
  [sym__bracketed_key_content] = {
    .visible = true,
    .named = true,
  },
  [sym__key_template] = {
    .visible = false,
    .named = true,
  },
  [sym_key_string_content] = {
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
  [sym_oneline_string_text] = {
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
  [sym__unsigned_integer] = {
    .visible = false,
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
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 3},
  [3] = {.index = 4, .length = 1},
  [4] = {.index = 5, .length = 1},
  [6] = {.index = 6, .length = 1},
  [7] = {.index = 7, .length = 2},
  [8] = {.index = 1, .length = 3},
  [9] = {.index = 9, .length = 1},
  [10] = {.index = 10, .length = 1},
  [12] = {.index = 11, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_template, 0, .inherited = true},
  [1] =
    {field_template, 0},
    {field_template, 1},
    {field_template, 2},
  [4] =
    {field_filter_key, 0},
  [5] =
    {field_section_header, 0},
  [6] =
    {field_template, 1, .inherited = true},
  [7] =
    {field_template, 0, .inherited = true},
    {field_template, 1, .inherited = true},
  [9] =
    {field_query_name, 0},
  [10] =
    {field_option_key, 0},
  [11] =
    {field_predicate_name, 0},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [5] = {
    [0] = anon_alias_sym_json_key_string,
  },
  [8] = {
    [1] = sym_template,
    [2] = sym_template,
  },
  [11] = {
    [0] = sym_integer,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym_json_string, 2,
    sym_json_string,
    anon_alias_sym_json_key_string,
  sym_expr, 2,
    sym_expr,
    sym_template,
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
  [43] = 9,
  [44] = 10,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 22,
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
  [74] = 10,
  [75] = 9,
  [76] = 76,
  [77] = 77,
  [78] = 41,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 38,
  [86] = 10,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 9,
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
  [104] = 100,
  [105] = 105,
  [106] = 10,
  [107] = 9,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 10,
  [116] = 9,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 94,
  [123] = 70,
  [124] = 68,
  [125] = 66,
  [126] = 61,
  [127] = 64,
  [128] = 59,
  [129] = 67,
  [130] = 60,
  [131] = 58,
  [132] = 49,
  [133] = 50,
  [134] = 65,
  [135] = 57,
  [136] = 69,
  [137] = 137,
  [138] = 62,
  [139] = 139,
  [140] = 72,
  [141] = 51,
  [142] = 56,
  [143] = 71,
  [144] = 53,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 148,
  [151] = 151,
  [152] = 152,
  [153] = 152,
  [154] = 151,
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
  [165] = 163,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 168,
  [176] = 176,
  [177] = 177,
  [178] = 173,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 177,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 179,
  [197] = 197,
  [198] = 180,
  [199] = 188,
  [200] = 192,
  [201] = 189,
  [202] = 191,
  [203] = 190,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 208,
  [209] = 209,
  [210] = 210,
  [211] = 211,
  [212] = 212,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 9,
  [217] = 217,
  [218] = 10,
  [219] = 219,
  [220] = 211,
  [221] = 221,
  [222] = 222,
  [223] = 212,
  [224] = 224,
  [225] = 225,
  [226] = 226,
  [227] = 227,
  [228] = 228,
  [229] = 229,
  [230] = 224,
  [231] = 231,
  [232] = 232,
  [233] = 233,
  [234] = 234,
  [235] = 235,
  [236] = 228,
  [237] = 237,
  [238] = 238,
  [239] = 239,
  [240] = 9,
  [241] = 241,
  [242] = 242,
  [243] = 243,
  [244] = 244,
  [245] = 245,
  [246] = 10,
  [247] = 227,
  [248] = 214,
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
  [261] = 229,
  [262] = 262,
  [263] = 263,
  [264] = 264,
  [265] = 235,
  [266] = 266,
  [267] = 267,
  [268] = 268,
  [269] = 269,
  [270] = 270,
  [271] = 271,
  [272] = 272,
  [273] = 253,
  [274] = 274,
  [275] = 275,
  [276] = 276,
  [277] = 253,
  [278] = 278,
  [279] = 253,
  [280] = 280,
  [281] = 253,
  [282] = 282,
  [283] = 283,
  [284] = 284,
  [285] = 251,
  [286] = 286,
  [287] = 287,
  [288] = 288,
  [289] = 289,
  [290] = 290,
  [291] = 291,
  [292] = 292,
  [293] = 293,
  [294] = 294,
  [295] = 295,
  [296] = 296,
  [297] = 297,
  [298] = 298,
  [299] = 299,
  [300] = 300,
  [301] = 301,
  [302] = 276,
  [303] = 275,
  [304] = 304,
  [305] = 305,
  [306] = 306,
  [307] = 307,
  [308] = 262,
  [309] = 309,
  [310] = 310,
  [311] = 311,
  [312] = 257,
  [313] = 290,
  [314] = 314,
  [315] = 315,
  [316] = 316,
  [317] = 317,
  [318] = 318,
  [319] = 315,
  [320] = 320,
  [321] = 321,
  [322] = 322,
  [323] = 323,
  [324] = 316,
  [325] = 325,
  [326] = 326,
  [327] = 327,
  [328] = 328,
  [329] = 300,
  [330] = 330,
  [331] = 253,
  [332] = 332,
  [333] = 333,
  [334] = 334,
  [335] = 253,
  [336] = 336,
  [337] = 337,
  [338] = 338,
  [339] = 328,
  [340] = 251,
  [341] = 341,
  [342] = 253,
  [343] = 251,
  [344] = 344,
  [345] = 345,
  [346] = 253,
  [347] = 347,
  [348] = 348,
  [349] = 349,
  [350] = 350,
  [351] = 351,
  [352] = 352,
  [353] = 353,
  [354] = 350,
  [355] = 351,
  [356] = 356,
  [357] = 357,
  [358] = 352,
  [359] = 353,
  [360] = 360,
  [361] = 361,
  [362] = 362,
  [363] = 363,
  [364] = 364,
  [365] = 365,
  [366] = 366,
  [367] = 356,
  [368] = 349,
  [369] = 356,
  [370] = 370,
  [371] = 371,
  [372] = 356,
  [373] = 360,
  [374] = 374,
  [375] = 356,
  [376] = 356,
  [377] = 356,
  [378] = 356,
  [379] = 379,
  [380] = 380,
  [381] = 381,
  [382] = 382,
  [383] = 356,
  [384] = 384,
  [385] = 364,
  [386] = 386,
  [387] = 356,
  [388] = 388,
  [389] = 389,
  [390] = 390,
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
  [402] = 402,
  [403] = 403,
  [404] = 404,
  [405] = 405,
  [406] = 406,
  [407] = 407,
  [408] = 317,
  [409] = 409,
  [410] = 296,
  [411] = 411,
  [412] = 412,
  [413] = 413,
  [414] = 414,
  [415] = 415,
  [416] = 416,
  [417] = 258,
  [418] = 259,
  [419] = 370,
  [420] = 420,
  [421] = 421,
  [422] = 422,
  [423] = 422,
  [424] = 422,
  [425] = 425,
  [426] = 426,
  [427] = 253,
  [428] = 425,
  [429] = 425,
  [430] = 430,
  [431] = 430,
  [432] = 430,
  [433] = 433,
  [434] = 434,
  [435] = 435,
  [436] = 436,
  [437] = 437,
  [438] = 371,
  [439] = 439,
  [440] = 425,
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
  [452] = 311,
  [453] = 453,
  [454] = 454,
  [455] = 447,
  [456] = 456,
  [457] = 457,
  [458] = 447,
  [459] = 361,
  [460] = 460,
  [461] = 461,
  [462] = 249,
  [463] = 463,
  [464] = 464,
  [465] = 445,
  [466] = 443,
  [467] = 467,
  [468] = 468,
  [469] = 366,
  [470] = 435,
  [471] = 471,
  [472] = 472,
  [473] = 473,
  [474] = 382,
  [475] = 475,
  [476] = 430,
  [477] = 433,
  [478] = 478,
  [479] = 436,
  [480] = 480,
  [481] = 481,
  [482] = 362,
  [483] = 483,
  [484] = 484,
  [485] = 485,
  [486] = 422,
  [487] = 487,
  [488] = 252,
  [489] = 489,
  [490] = 490,
  [491] = 381,
  [492] = 380,
  [493] = 493,
  [494] = 494,
  [495] = 250,
  [496] = 461,
  [497] = 379,
  [498] = 498,
  [499] = 484,
  [500] = 500,
  [501] = 480,
  [502] = 475,
  [503] = 447,
  [504] = 504,
  [505] = 505,
  [506] = 506,
  [507] = 507,
  [508] = 508,
  [509] = 509,
  [510] = 439,
  [511] = 511,
  [512] = 512,
  [513] = 513,
  [514] = 514,
  [515] = 515,
  [516] = 516,
  [517] = 517,
  [518] = 321,
  [519] = 519,
  [520] = 517,
  [521] = 521,
  [522] = 522,
  [523] = 523,
  [524] = 524,
  [525] = 511,
  [526] = 526,
  [527] = 515,
  [528] = 528,
  [529] = 529,
  [530] = 530,
  [531] = 531,
  [532] = 532,
  [533] = 517,
  [534] = 532,
  [535] = 517,
  [536] = 532,
  [537] = 517,
  [538] = 517,
  [539] = 517,
  [540] = 517,
  [541] = 517,
  [542] = 517,
  [543] = 543,
  [544] = 513,
  [545] = 512,
  [546] = 523,
  [547] = 532,
  [548] = 548,
  [549] = 549,
  [550] = 514,
  [551] = 551,
  [552] = 552,
  [553] = 516,
  [554] = 554,
  [555] = 555,
  [556] = 548,
  [557] = 557,
  [558] = 558,
  [559] = 559,
  [560] = 560,
  [561] = 561,
  [562] = 562,
  [563] = 563,
  [564] = 564,
  [565] = 565,
  [566] = 566,
  [567] = 567,
  [568] = 568,
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
      if (eof) ADVANCE(637);
      ADVANCE_MAP(
        '!', 64,
        '"', 896,
        '#', 787,
        '*', 746,
        '+', 1177,
        ',', 1138,
        '-', 1178,
        '.', 1174,
        '/', 1182,
        ':', 769,
        ';', 773,
        '<', 867,
        '=', 832,
        '>', 863,
        '?', 66,
        'E', 1176,
        '[', 67,
        '\\', 780,
        ']', 1139,
        '`', 1098,
        'b', 781,
        'e', 1175,
        'f', 782,
        'm', 818,
        'n', 783,
        'r', 784,
        's', 817,
        't', 785,
        'u', 786,
        '{', 789,
        '}', 791,
        'a', 1155,
        'c', 1155,
        'd', 1155,
      );
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(737);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(745);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(1155);
      if (('G' <= lookahead && lookahead <= 'Z')) ADVANCE(737);
      if (set_contains(extras_character_set_2, 9, lookahead)) SKIP(0);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(638);
      if (lookahead == '#') ADVANCE(1181);
      if (lookahead == '\\') ADVANCE(621);
      if (lookahead == '{') ADVANCE(616);
      if (set_contains(extras_character_set_2, 9, lookahead)) SKIP(3);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= ']') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1082);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(638);
      if (lookahead == '#') ADVANCE(1181);
      if (lookahead == 'm') ADVANCE(819);
      if (lookahead == 's') ADVANCE(817);
      if (set_contains(extras_character_set_2, 9, lookahead)) SKIP(2);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(638);
      if (lookahead == '#') ADVANCE(1181);
      if (set_contains(extras_character_set_2, 9, lookahead)) SKIP(3);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(638);
      if (lookahead == '#') ADVANCE(1181);
      if (set_contains(extras_character_set_2, 9, lookahead)) SKIP(4);
      if (lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(774);
      END_STATE();
    case 5:
      ADVANCE_MAP(
        '\n', 639,
        '#', 1181,
        '-', 1096,
        '\\', 780,
        'f', 1091,
        'n', 1093,
        't', 1092,
        '{', 1094,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1088);
      if (set_contains(extras_character_set_2, 9, lookahead)) ADVANCE(1085);
      if (lookahead != 0) ADVANCE(1084);
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(6);
      if (lookahead == '#') ADVANCE(1181);
      if (lookahead == '<') ADVANCE(868);
      if (lookahead == '{') ADVANCE(1094);
      if (set_contains(extras_character_set_2, 9, lookahead)) ADVANCE(1089);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(1084);
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(7);
      if (lookahead == '#') ADVANCE(1181);
      if (lookahead == '\\') ADVANCE(780);
      if (lookahead == '{') ADVANCE(1094);
      if (set_contains(extras_character_set_2, 9, lookahead)) ADVANCE(1095);
      if (lookahead != 0) ADVANCE(1084);
      END_STATE();
    case 8:
      if (lookahead == '\n') SKIP(8);
      if (lookahead == '#') ADVANCE(1100);
      if (lookahead == '\\') ADVANCE(571);
      if (lookahead == '`') ADVANCE(1097);
      if (lookahead == '{') ADVANCE(1101);
      if (set_contains(extras_character_set_2, 9, lookahead)) ADVANCE(1099);
      if (lookahead != 0) ADVANCE(1100);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(640);
      if (lookahead == ' ') SKIP(9);
      if (lookahead == '#') ADVANCE(1181);
      if (lookahead == '\\') ADVANCE(780);
      if (lookahead == '{') ADVANCE(1135);
      if (set_contains(extras_character_set_2, 9, lookahead)) ADVANCE(1133);
      if (lookahead != 0 &&
          lookahead != ';') ADVANCE(1136);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(641);
      if (lookahead == '\r') SKIP(10);
      if (lookahead == '#') ADVANCE(1181);
      if (lookahead == '\\') ADVANCE(780);
      if (set_contains(extras_character_set_2, 9, lookahead)) ADVANCE(777);
      if (lookahead != 0 &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(779);
      END_STATE();
    case 11:
      if (lookahead == '\n') SKIP(11);
      if (lookahead == '#') ADVANCE(1179);
      if (lookahead == '/') ADVANCE(1182);
      if (lookahead == '\\') ADVANCE(780);
      if (set_contains(extras_character_set_2, 9, lookahead)) ADVANCE(1183);
      if (lookahead != 0) ADVANCE(1184);
      END_STATE();
    case 12:
      if (lookahead == '\n') SKIP(12);
      if (lookahead == '#') ADVANCE(1181);
      if (set_contains(extras_character_set_2, 9, lookahead)) ADVANCE(1186);
      if (lookahead != 0) ADVANCE(1185);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(642);
      if (lookahead == '#') ADVANCE(1181);
      if (lookahead == '\\') ADVANCE(780);
      if (lookahead == '{') ADVANCE(1094);
      if (set_contains(extras_character_set_2, 9, lookahead)) ADVANCE(1086);
      if (lookahead != 0) ADVANCE(1084);
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(643);
      if (lookahead == '#') ADVANCE(1180);
      if (lookahead == '\\') ADVANCE(780);
      if (lookahead == '`') ADVANCE(1130);
      if (lookahead == '{') ADVANCE(1131);
      if (set_contains(extras_character_set_2, 9, lookahead)) ADVANCE(1129);
      if (lookahead != 0) ADVANCE(1132);
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(644);
      if (lookahead == '#') ADVANCE(1128);
      if (lookahead == 'b') ADVANCE(1113);
      if (lookahead == 'g') ADVANCE(1124);
      if (lookahead == 'h') ADVANCE(1114);
      if (lookahead == 'j') ADVANCE(1125);
      if (lookahead == 'x') ADVANCE(1119);
      if (set_contains(extras_character_set_2, 9, lookahead)) ADVANCE(1109);
      if (lookahead != 0) ADVANCE(1128);
      END_STATE();
    case 16:
      ADVANCE_MAP(
        '\n', 645,
        '#', 1181,
        '-', 1096,
        '\\', 780,
        'f', 1090,
        'n', 1093,
        't', 1092,
        '{', 1094,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1088);
      if (set_contains(extras_character_set_2, 9, lookahead)) ADVANCE(1087);
      if (lookahead != 0) ADVANCE(1084);
      END_STATE();
    case 17:
      ADVANCE_MAP(
        '"', 896,
        '#', 1181,
        ',', 1138,
        '-', 51,
        '0', 1144,
        ':', 769,
        '<', 870,
        '=', 831,
        '>', 862,
        ']', 1139,
        'b', 384,
        'c', 402,
        'd', 577,
        'f', 102,
        'h', 243,
        'j', 494,
        'm', 179,
        'n', 573,
        'r', 217,
        's', 276,
        't', 446,
        'u', 447,
        'v', 120,
        'x', 425,
        '{', 789,
        '}', 791,
      );
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1145);
      if (set_contains(extras_character_set_2, 9, lookahead)) SKIP(17);
      END_STATE();
    case 18:
      if (lookahead == '"') ADVANCE(896);
      if (lookahead == '#') ADVANCE(1181);
      if (lookahead == '-') ADVANCE(624);
      if (lookahead == 'f') ADVANCE(102);
      if (lookahead == 'n') ADVANCE(573);
      if (lookahead == 't') ADVANCE(446);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1171);
      if (set_contains(extras_character_set_2, 9, lookahead)) SKIP(18);
      END_STATE();
    case 19:
      ADVANCE_MAP(
        '"', 896,
        '#', 1181,
        '-', 1079,
        '\\', 621,
        'f', 993,
        'n', 1070,
        't', 1043,
        '{', 616,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(912);
      if (set_contains(extras_character_set_2, 9, lookahead)) SKIP(18);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= ']') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1082);
      END_STATE();
    case 20:
      ADVANCE_MAP(
        '"', 896,
        '#', 1181,
        '\\', 780,
        '`', 1097,
        'b', 781,
        'f', 782,
        'n', 783,
        'r', 784,
        't', 785,
        'u', 786,
      );
      if (set_contains(extras_character_set_2, 9, lookahead)) SKIP(20);
      END_STATE();
    case 21:
      if (lookahead == '"') ADVANCE(896);
      if (lookahead == '#') ADVANCE(897);
      if (lookahead == '\\') ADVANCE(780);
      if (lookahead == '{') ADVANCE(899);
      if (set_contains(extras_character_set_2, 9, lookahead)) ADVANCE(898);
      if (lookahead != 0) ADVANCE(900);
      END_STATE();
    case 22:
      if (lookahead == '"') ADVANCE(896);
      if (lookahead == '#') ADVANCE(1143);
      if (lookahead == '\\') ADVANCE(780);
      if (lookahead == '{') ADVANCE(1142);
      if (set_contains(extras_character_set_2, 9, lookahead)) ADVANCE(1141);
      if (lookahead != 0) ADVANCE(1140);
      END_STATE();
    case 23:
      ADVANCE_MAP(
        '"', 896,
        '#', 903,
        '\\', 780,
        'b', 781,
        'f', 782,
        'n', 783,
        'r', 784,
        't', 785,
        'u', 786,
      );
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == '\r') SKIP(23);
      if (set_contains(extras_character_set_2, 9, lookahead)) ADVANCE(902);
      if (lookahead != 0) ADVANCE(901);
      END_STATE();
    case 24:
      ADVANCE_MAP(
        '#', 787,
        ',', 1137,
        ':', 769,
        ';', 773,
        '\\', 780,
        'b', 781,
        'f', 782,
        'n', 783,
        'r', 784,
        't', 785,
        'u', 786,
        '{', 788,
        '}', 791,
      );
      if (set_contains(extras_character_set_2, 9, lookahead)) SKIP(24);
      END_STATE();
    case 25:
      ADVANCE_MAP(
        '#', 1181,
        '*', 746,
        '=', 831,
        'c', 404,
        'd', 110,
        'f', 405,
        'h', 544,
        'n', 536,
        'r', 214,
        's', 418,
        't', 380,
        'u', 454,
        'x', 425,
        '{', 615,
        '}', 618,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(745);
      if (set_contains(extras_character_set_2, 9, lookahead)) SKIP(25);
      END_STATE();
    case 26:
      if (lookahead == '#') ADVANCE(1181);
      if (lookahead == ':') ADVANCE(769);
      if (lookahead == '\\') ADVANCE(621);
      if (lookahead == '{') ADVANCE(616);
      if (set_contains(extras_character_set_2, 9, lookahead)) SKIP(27);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= ']') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1082);
      END_STATE();
    case 27:
      if (lookahead == '#') ADVANCE(1181);
      if (lookahead == ':') ADVANCE(769);
      if (set_contains(extras_character_set_2, 9, lookahead)) SKIP(27);
      END_STATE();
    case 28:
      if (lookahead == '#') ADVANCE(1181);
      if (lookahead == ';') ADVANCE(773);
      if (lookahead == '\\') ADVANCE(780);
      if (lookahead == '{') ADVANCE(1135);
      if (lookahead == '\n' ||
          lookahead == ' ') SKIP(28);
      if (set_contains(extras_character_set_2, 9, lookahead)) ADVANCE(1134);
      if (lookahead != 0) ADVANCE(1136);
      END_STATE();
    case 29:
      if (lookahead == '#') ADVANCE(1181);
      if (lookahead == ';') ADVANCE(773);
      if (lookahead == '}') ADVANCE(791);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1173);
      if (set_contains(extras_character_set_2, 9, lookahead)) SKIP(29);
      END_STATE();
    case 30:
      if (lookahead == '#') ADVANCE(1181);
      if (lookahead == '\\') ADVANCE(780);
      if (lookahead == '{') ADVANCE(615);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(30);
      if (set_contains(extras_character_set_2, 9, lookahead)) ADVANCE(778);
      if (lookahead != 0 &&
          lookahead != ';' &&
          lookahead != '}') ADVANCE(779);
      END_STATE();
    case 31:
      if (lookahead == '#') ADVANCE(1181);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(893);
      if (set_contains(extras_character_set_2, 9, lookahead)) SKIP(31);
      if (lookahead == '+' ||
          ('/' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 32:
      if (lookahead == '#') ADVANCE(1181);
      if (set_contains(extras_character_set_2, 9, lookahead)) SKIP(32);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1155);
      END_STATE();
    case 33:
      if (lookahead == '#') ADVANCE(885);
      if (set_contains(extras_character_set_2, 9, lookahead)) ADVANCE(886);
      if (lookahead != 0 &&
          lookahead != '/' &&
          lookahead != '?') ADVANCE(887);
      END_STATE();
    case 34:
      if (lookahead == '#') ADVANCE(879);
      if (set_contains(extras_character_set_2, 9, lookahead)) ADVANCE(880);
      if (lookahead != 0 &&
          lookahead != '?') ADVANCE(881);
      END_STATE();
    case 35:
      if (lookahead == '#') ADVANCE(889);
      if (set_contains(extras_character_set_2, 9, lookahead)) ADVANCE(890);
      if (lookahead != 0 &&
          lookahead != '/' &&
          lookahead != '>') ADVANCE(891);
      END_STATE();
    case 36:
      if (lookahead == '*') ADVANCE(742);
      if (lookahead == '1') ADVANCE(50);
      if (lookahead == '2') ADVANCE(740);
      if (lookahead == '3') ADVANCE(741);
      END_STATE();
    case 37:
      if (lookahead == ',') ADVANCE(895);
      END_STATE();
    case 38:
      if (lookahead == ',') ADVANCE(772);
      END_STATE();
    case 39:
      if (lookahead == ',') ADVANCE(892);
      END_STATE();
    case 40:
      if (lookahead == '-') ADVANCE(460);
      END_STATE();
    case 41:
      if (lookahead == '-') ADVANCE(596);
      END_STATE();
    case 42:
      if (lookahead == '-') ADVANCE(169);
      END_STATE();
    case 43:
      if (lookahead == '-') ADVANCE(299);
      END_STATE();
    case 44:
      if (lookahead == '-') ADVANCE(469);
      END_STATE();
    case 45:
      if (lookahead == '-') ADVANCE(501);
      END_STATE();
    case 46:
      if (lookahead == '-') ADVANCE(500);
      END_STATE();
    case 47:
      if (lookahead == '-') ADVANCE(531);
      END_STATE();
    case 48:
      if (lookahead == '-') ADVANCE(134);
      END_STATE();
    case 49:
      if (lookahead == '.') ADVANCE(52);
      END_STATE();
    case 50:
      if (lookahead == '.') ADVANCE(53);
      END_STATE();
    case 51:
      if (lookahead == '0') ADVANCE(1144);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1145);
      END_STATE();
    case 52:
      if (lookahead == '0') ADVANCE(795);
      END_STATE();
    case 53:
      if (lookahead == '0') ADVANCE(738);
      if (lookahead == '1') ADVANCE(739);
      END_STATE();
    case 54:
      if (lookahead == '1') ADVANCE(49);
      if (lookahead == '2') ADVANCE(796);
      if (lookahead == '3') ADVANCE(797);
      END_STATE();
    case 55:
      if (lookahead == '2') ADVANCE(61);
      END_STATE();
    case 56:
      if (lookahead == '4') ADVANCE(799);
      if (lookahead == '6') ADVANCE(800);
      END_STATE();
    case 57:
      if (lookahead == '4') ADVANCE(820);
      END_STATE();
    case 58:
      if (lookahead == '4') ADVANCE(854);
      if (lookahead == '6') ADVANCE(855);
      END_STATE();
    case 59:
      if (lookahead == '4') ADVANCE(39);
      END_STATE();
    case 60:
      if (lookahead == '5') ADVANCE(839);
      END_STATE();
    case 61:
      if (lookahead == '5') ADVANCE(63);
      END_STATE();
    case 62:
      if (lookahead == '6') ADVANCE(59);
      END_STATE();
    case 63:
      if (lookahead == '6') ADVANCE(838);
      END_STATE();
    case 64:
      if (lookahead == '=') ADVANCE(860);
      END_STATE();
    case 65:
      if (lookahead == '=') ADVANCE(858);
      END_STATE();
    case 66:
      if (lookahead == '>') ADVANCE(882);
      END_STATE();
    case 67:
      if (lookahead == 'A') ADVANCE(490);
      if (lookahead == 'B') ADVANCE(108);
      if (lookahead == 'C') ADVANCE(139);
      if (lookahead == 'F') ADVANCE(377);
      if (lookahead == 'M') ADVANCE(568);
      if (lookahead == 'O') ADVANCE(413);
      if (lookahead == 'Q') ADVANCE(569);
      END_STATE();
    case 68:
      if (lookahead == 'A') ADVANCE(490);
      if (lookahead == 'C') ADVANCE(138);
      END_STATE();
    case 69:
      if (lookahead == 'A') ADVANCE(260);
      if (lookahead == 'B') ADVANCE(219);
      END_STATE();
    case 70:
      if (lookahead == 'A') ADVANCE(574);
      END_STATE();
    case 71:
      if (lookahead == 'B') ADVANCE(108);
      if (lookahead == 'C') ADVANCE(383);
      if (lookahead == 'F') ADVANCE(377);
      if (lookahead == 'M') ADVANCE(568);
      if (lookahead == 'O') ADVANCE(413);
      if (lookahead == 'Q') ADVANCE(569);
      END_STATE();
    case 72:
      ADVANCE_MAP(
        'B', 397,
        'C', 395,
        'E', 348,
        'F', 326,
        'I', 373,
        'N', 578,
        'S', 553,
        'U', 582,
      );
      END_STATE();
    case 73:
      if (lookahead == 'D') ADVANCE(115);
      END_STATE();
    case 74:
      if (lookahead == 'D') ADVANCE(232);
      if (lookahead == 'E') ADVANCE(375);
      END_STATE();
    case 75:
      if (lookahead == 'D') ADVANCE(131);
      if (lookahead == 'I') ADVANCE(367);
      END_STATE();
    case 76:
      if (lookahead == 'D') ADVANCE(151);
      END_STATE();
    case 77:
      if (lookahead == 'E') ADVANCE(509);
      if (lookahead == 'U') ADVANCE(372);
      END_STATE();
    case 78:
      if (lookahead == 'E') ADVANCE(430);
      END_STATE();
    case 79:
      if (lookahead == 'E') ADVANCE(431);
      END_STATE();
    case 80:
      if (lookahead == 'F') ADVANCE(400);
      if (lookahead == ']') ADVANCE(757);
      END_STATE();
    case 81:
      if (lookahead == 'N') ADVANCE(385);
      END_STATE();
    case 82:
      if (lookahead == 'N') ADVANCE(388);
      END_STATE();
    case 83:
      if (lookahead == 'P') ADVANCE(113);
      if (lookahead == ']') ADVANCE(753);
      END_STATE();
    case 84:
      if (lookahead == 'P') ADVANCE(145);
      END_STATE();
    case 85:
      if (lookahead == 'S') ADVANCE(542);
      if (lookahead == ']') ADVANCE(749);
      END_STATE();
    case 86:
      if (lookahead == 'T') ADVANCE(277);
      END_STATE();
    case 87:
      if (lookahead == 'T') ADVANCE(278);
      END_STATE();
    case 88:
      if (lookahead == 'W') ADVANCE(301);
      END_STATE();
    case 89:
      if (lookahead == 'W') ADVANCE(302);
      END_STATE();
    case 90:
      if (lookahead == ']') ADVANCE(765);
      END_STATE();
    case 91:
      if (lookahead == ']') ADVANCE(761);
      END_STATE();
    case 92:
      if (lookahead == ']') ADVANCE(767);
      END_STATE();
    case 93:
      if (lookahead == ']') ADVANCE(763);
      END_STATE();
    case 94:
      if (lookahead == ']') ADVANCE(747);
      END_STATE();
    case 95:
      if (lookahead == ']') ADVANCE(755);
      END_STATE();
    case 96:
      if (lookahead == ']') ADVANCE(759);
      END_STATE();
    case 97:
      if (lookahead == ']') ADVANCE(751);
      END_STATE();
    case 98:
      if (lookahead == '`') ADVANCE(99);
      END_STATE();
    case 99:
      if (lookahead == '`') ADVANCE(1103);
      END_STATE();
    case 100:
      if (lookahead == 'a') ADVANCE(55);
      END_STATE();
    case 101:
      if (lookahead == 'a') ADVANCE(158);
      END_STATE();
    case 102:
      if (lookahead == 'a') ADVANCE(323);
      END_STATE();
    case 103:
      if (lookahead == 'a') ADVANCE(323);
      if (lookahead == 'i') ADVANCE(321);
      END_STATE();
    case 104:
      if (lookahead == 'a') ADVANCE(323);
      if (lookahead == 'i') ADVANCE(321);
      if (lookahead == 'o') ADVANCE(449);
      END_STATE();
    case 105:
      if (lookahead == 'a') ADVANCE(341);
      END_STATE();
    case 106:
      if (lookahead == 'a') ADVANCE(176);
      if (lookahead == 'e') ADVANCE(456);
      if (lookahead == 'o') ADVANCE(339);
      END_STATE();
    case 107:
      if (lookahead == 'a') ADVANCE(602);
      END_STATE();
    case 108:
      if (lookahead == 'a') ADVANCE(472);
      END_STATE();
    case 109:
      if (lookahead == 'a') ADVANCE(614);
      if (lookahead == 'e') ADVANCE(166);
      END_STATE();
    case 110:
      if (lookahead == 'a') ADVANCE(614);
      if (lookahead == 'e') ADVANCE(165);
      END_STATE();
    case 111:
      if (lookahead == 'a') ADVANCE(190);
      END_STATE();
    case 112:
      if (lookahead == 'a') ADVANCE(190);
      if (lookahead == 'x') ADVANCE(37);
      END_STATE();
    case 113:
      if (lookahead == 'a') ADVANCE(441);
      END_STATE();
    case 114:
      if (lookahead == 'a') ADVANCE(609);
      END_STATE();
    case 115:
      if (lookahead == 'a') ADVANCE(537);
      END_STATE();
    case 116:
      if (lookahead == 'a') ADVANCE(171);
      END_STATE();
    case 117:
      if (lookahead == 'a') ADVANCE(96);
      END_STATE();
    case 118:
      if (lookahead == 'a') ADVANCE(421);
      END_STATE();
    case 119:
      if (lookahead == 'a') ADVANCE(530);
      END_STATE();
    case 120:
      if (lookahead == 'a') ADVANCE(452);
      END_STATE();
    case 121:
      if (lookahead == 'a') ADVANCE(452);
      if (lookahead == 'e') ADVANCE(435);
      END_STATE();
    case 122:
      if (lookahead == 'a') ADVANCE(318);
      END_STATE();
    case 123:
      if (lookahead == 'a') ADVANCE(533);
      END_STATE();
    case 124:
      if (lookahead == 'a') ADVANCE(495);
      END_STATE();
    case 125:
      if (lookahead == 'a') ADVANCE(495);
      if (lookahead == 'o') ADVANCE(183);
      if (lookahead == 'y') ADVANCE(560);
      END_STATE();
    case 126:
      if (lookahead == 'a') ADVANCE(319);
      END_STATE();
    case 127:
      if (lookahead == 'a') ADVANCE(538);
      if (lookahead == 'i') ADVANCE(371);
      if (lookahead == 'r') ADVANCE(387);
      END_STATE();
    case 128:
      if (lookahead == 'a') ADVANCE(353);
      END_STATE();
    case 129:
      if (lookahead == 'a') ADVANCE(354);
      END_STATE();
    case 130:
      if (lookahead == 'a') ADVANCE(355);
      END_STATE();
    case 131:
      if (lookahead == 'a') ADVANCE(552);
      END_STATE();
    case 132:
      if (lookahead == 'a') ADVANCE(303);
      END_STATE();
    case 133:
      if (lookahead == 'a') ADVANCE(521);
      END_STATE();
    case 134:
      if (lookahead == 'a') ADVANCE(497);
      END_STATE();
    case 135:
      if (lookahead == 'a') ADVANCE(523);
      END_STATE();
    case 136:
      if (lookahead == 'a') ADVANCE(548);
      END_STATE();
    case 137:
      if (lookahead == 'a') ADVANCE(528);
      END_STATE();
    case 138:
      if (lookahead == 'a') ADVANCE(416);
      END_STATE();
    case 139:
      if (lookahead == 'a') ADVANCE(416);
      if (lookahead == 'o') ADVANCE(378);
      END_STATE();
    case 140:
      if (lookahead == 'a') ADVANCE(327);
      END_STATE();
    case 141:
      if (lookahead == 'a') ADVANCE(540);
      END_STATE();
    case 142:
      if (lookahead == 'a') ADVANCE(342);
      END_STATE();
    case 143:
      if (lookahead == 'a') ADVANCE(604);
      END_STATE();
    case 144:
      if (lookahead == 'a') ADVANCE(451);
      END_STATE();
    case 145:
      if (lookahead == 'a') ADVANCE(466);
      END_STATE();
    case 146:
      if (lookahead == 'a') ADVANCE(423);
      END_STATE();
    case 147:
      if (lookahead == 'a') ADVANCE(555);
      END_STATE();
    case 148:
      if (lookahead == 'a') ADVANCE(329);
      END_STATE();
    case 149:
      if (lookahead == 'a') ADVANCE(330);
      END_STATE();
    case 150:
      if (lookahead == 'a') ADVANCE(331);
      END_STATE();
    case 151:
      if (lookahead == 'a') ADVANCE(558);
      END_STATE();
    case 152:
      if (lookahead == 'a') ADVANCE(559);
      END_STATE();
    case 153:
      if (lookahead == 'a') ADVANCE(468);
      END_STATE();
    case 154:
      if (lookahead == 'a') ADVANCE(561);
      END_STATE();
    case 155:
      if (lookahead == 'a') ADVANCE(566);
      END_STATE();
    case 156:
      if (lookahead == 'b') ADVANCE(398);
      if (lookahead == 'y') ADVANCE(41);
      END_STATE();
    case 157:
      if (lookahead == 'b') ADVANCE(313);
      END_STATE();
    case 158:
      if (lookahead == 'b') ADVANCE(322);
      END_STATE();
    case 159:
      if (lookahead == 'b') ADVANCE(246);
      END_STATE();
    case 160:
      if (lookahead == 'b') ADVANCE(408);
      END_STATE();
    case 161:
      if (lookahead == 'c') ADVANCE(70);
      END_STATE();
    case 162:
      if (lookahead == 'c') ADVANCE(801);
      END_STATE();
    case 163:
      if (lookahead == 'c') ADVANCE(312);
      END_STATE();
    case 164:
      if (lookahead == 'c') ADVANCE(279);
      END_STATE();
    case 165:
      if (lookahead == 'c') ADVANCE(390);
      END_STATE();
    case 166:
      if (lookahead == 'c') ADVANCE(390);
      if (lookahead == 'l') ADVANCE(114);
      END_STATE();
    case 167:
      if (lookahead == 'c') ADVANCE(324);
      END_STATE();
    case 168:
      if (lookahead == 'c') ADVANCE(118);
      END_STATE();
    case 169:
      if (lookahead == 'c') ADVANCE(391);
      END_STATE();
    case 170:
      if (lookahead == 'c') ADVANCE(543);
      END_STATE();
    case 171:
      if (lookahead == 'c') ADVANCE(203);
      END_STATE();
    case 172:
      if (lookahead == 'c') ADVANCE(403);
      END_STATE();
    case 173:
      if (lookahead == 'c') ADVANCE(146);
      END_STATE();
    case 174:
      if (lookahead == 'c') ADVANCE(587);
      END_STATE();
    case 175:
      if (lookahead == 'c') ADVANCE(406);
      END_STATE();
    case 176:
      if (lookahead == 'c') ADVANCE(255);
      END_STATE();
    case 177:
      if (lookahead == 'c') ADVANCE(563);
      END_STATE();
    case 178:
      if (lookahead == 'c') ADVANCE(154);
      END_STATE();
    case 179:
      if (lookahead == 'd') ADVANCE(60);
      END_STATE();
    case 180:
      if (lookahead == 'd') ADVANCE(792);
      END_STATE();
    case 181:
      if (lookahead == 'd') ADVANCE(794);
      END_STATE();
    case 182:
      if (lookahead == 'd') ADVANCE(856);
      END_STATE();
    case 183:
      if (lookahead == 'd') ADVANCE(607);
      END_STATE();
    case 184:
      if (lookahead == 'd') ADVANCE(417);
      END_STATE();
    case 185:
      if (lookahead == 'd') ADVANCE(298);
      END_STATE();
    case 186:
      if (lookahead == 'd') ADVANCE(201);
      END_STATE();
    case 187:
      if (lookahead == 'd') ADVANCE(480);
      END_STATE();
    case 188:
      if (lookahead == 'd') ADVANCE(207);
      END_STATE();
    case 189:
      if (lookahead == 'd') ADVANCE(208);
      END_STATE();
    case 190:
      if (lookahead == 'd') ADVANCE(235);
      END_STATE();
    case 191:
      if (lookahead == 'd') ADVANCE(250);
      END_STATE();
    case 192:
      if (lookahead == 'e') ADVANCE(112);
      END_STATE();
    case 193:
      if (lookahead == 'e') ADVANCE(112);
      if (lookahead == 't') ADVANCE(344);
      END_STATE();
    case 194:
      if (lookahead == 'e') ADVANCE(62);
      END_STATE();
    case 195:
      if (lookahead == 'e') ADVANCE(601);
      END_STATE();
    case 196:
      if (lookahead == 'e') ADVANCE(1148);
      END_STATE();
    case 197:
      if (lookahead == 'e') ADVANCE(1150);
      END_STATE();
    case 198:
      if (lookahead == 'e') ADVANCE(840);
      END_STATE();
    case 199:
      if (lookahead == 'e') ADVANCE(830);
      END_STATE();
    case 200:
      if (lookahead == 'e') ADVANCE(266);
      END_STATE();
    case 201:
      if (lookahead == 'e') ADVANCE(1165);
      END_STATE();
    case 202:
      if (lookahead == 'e') ADVANCE(1167);
      END_STATE();
    case 203:
      if (lookahead == 'e') ADVANCE(1169);
      END_STATE();
    case 204:
      if (lookahead == 'e') ADVANCE(805);
      END_STATE();
    case 205:
      if (lookahead == 'e') ADVANCE(798);
      END_STATE();
    case 206:
      if (lookahead == 'e') ADVANCE(810);
      END_STATE();
    case 207:
      if (lookahead == 'e') ADVANCE(1159);
      END_STATE();
    case 208:
      if (lookahead == 'e') ADVANCE(1158);
      END_STATE();
    case 209:
      if (lookahead == 'e') ADVANCE(1161);
      END_STATE();
    case 210:
      if (lookahead == 'e') ADVANCE(809);
      END_STATE();
    case 211:
      if (lookahead == 'e') ADVANCE(824);
      END_STATE();
    case 212:
      if (lookahead == 'e') ADVANCE(1162);
      END_STATE();
    case 213:
      if (lookahead == 'e') ADVANCE(806);
      END_STATE();
    case 214:
      if (lookahead == 'e') ADVANCE(267);
      END_STATE();
    case 215:
      if (lookahead == 'e') ADVANCE(852);
      END_STATE();
    case 216:
      if (lookahead == 'e') ADVANCE(433);
      END_STATE();
    case 217:
      if (lookahead == 'e') ADVANCE(265);
      END_STATE();
    case 218:
      if (lookahead == 'e') ADVANCE(38);
      END_STATE();
    case 219:
      if (lookahead == 'e') ADVANCE(261);
      END_STATE();
    case 220:
      if (lookahead == 'e') ADVANCE(442);
      END_STATE();
    case 221:
      if (lookahead == 'e') ADVANCE(174);
      END_STATE();
    case 222:
      if (lookahead == 'e') ADVANCE(608);
      END_STATE();
    case 223:
      if (lookahead == 'e') ADVANCE(268);
      END_STATE();
    case 224:
      if (lookahead == 'e') ADVANCE(491);
      END_STATE();
    case 225:
      if (lookahead == 'e') ADVANCE(184);
      END_STATE();
    case 226:
      if (lookahead == 'e') ADVANCE(600);
      END_STATE();
    case 227:
      if (lookahead == 'e') ADVANCE(600);
      if (lookahead == 't') ADVANCE(343);
      END_STATE();
    case 228:
      if (lookahead == 'e') ADVANCE(170);
      END_STATE();
    case 229:
      if (lookahead == 'e') ADVANCE(185);
      END_STATE();
    case 230:
      if (lookahead == 'e') ADVANCE(493);
      END_STATE();
    case 231:
      if (lookahead == 'e') ADVANCE(180);
      END_STATE();
    case 232:
      if (lookahead == 'e') ADVANCE(172);
      END_STATE();
    case 233:
      if (lookahead == 'e') ADVANCE(612);
      END_STATE();
    case 234:
      if (lookahead == 'e') ADVANCE(181);
      END_STATE();
    case 235:
      if (lookahead == 'e') ADVANCE(434);
      END_STATE();
    case 236:
      if (lookahead == 'e') ADVANCE(474);
      END_STATE();
    case 237:
      if (lookahead == 'e') ADVANCE(177);
      END_STATE();
    case 238:
      if (lookahead == 'e') ADVANCE(410);
      END_STATE();
    case 239:
      if (lookahead == 'e') ADVANCE(436);
      END_STATE();
    case 240:
      if (lookahead == 'e') ADVANCE(444);
      END_STATE();
    case 241:
      if (lookahead == 'e') ADVANCE(437);
      END_STATE();
    case 242:
      if (lookahead == 'e') ADVANCE(129);
      END_STATE();
    case 243:
      if (lookahead == 'e') ADVANCE(111);
      END_STATE();
    case 244:
      if (lookahead == 'e') ADVANCE(445);
      END_STATE();
    case 245:
      if (lookahead == 'e') ADVANCE(470);
      END_STATE();
    case 246:
      if (lookahead == 'e') ADVANCE(438);
      END_STATE();
    case 247:
      if (lookahead == 'e') ADVANCE(524);
      END_STATE();
    case 248:
      if (lookahead == 'e') ADVANCE(439);
      END_STATE();
    case 249:
      if (lookahead == 'e') ADVANCE(484);
      END_STATE();
    case 250:
      if (lookahead == 'e') ADVANCE(486);
      END_STATE();
    case 251:
      if (lookahead == 'e') ADVANCE(510);
      END_STATE();
    case 252:
      if (lookahead == 'e') ADVANCE(82);
      END_STATE();
    case 253:
      if (lookahead == 'e') ADVANCE(549);
      if (lookahead == 't') ADVANCE(271);
      if (lookahead == 'u') ADVANCE(320);
      END_STATE();
    case 254:
      if (lookahead == 'e') ADVANCE(505);
      END_STATE();
    case 255:
      if (lookahead == 'e') ADVANCE(459);
      END_STATE();
    case 256:
      if (lookahead == 'e') ADVANCE(135);
      if (lookahead == 'l') ADVANCE(116);
      END_STATE();
    case 257:
      if (lookahead == 'e') ADVANCE(155);
      END_STATE();
    case 258:
      if (lookahead == 'e') ADVANCE(511);
      END_STATE();
    case 259:
      if (lookahead == 'f') ADVANCE(306);
      if (lookahead == 'o') ADVANCE(428);
      END_STATE();
    case 260:
      if (lookahead == 'f') ADVANCE(564);
      END_STATE();
    case 261:
      if (lookahead == 'f') ADVANCE(407);
      END_STATE();
    case 262:
      if (lookahead == 'g') ADVANCE(84);
      END_STATE();
    case 263:
      if (lookahead == 'g') ADVANCE(849);
      END_STATE();
    case 264:
      if (lookahead == 'g') ADVANCE(593);
      END_STATE();
    case 265:
      if (lookahead == 'g') ADVANCE(195);
      END_STATE();
    case 266:
      if (lookahead == 'g') ADVANCE(195);
      if (lookahead == 'p') ADVANCE(256);
      if (lookahead == 't') ADVANCE(453);
      END_STATE();
    case 267:
      if (lookahead == 'g') ADVANCE(195);
      if (lookahead == 'p') ADVANCE(325);
      END_STATE();
    case 268:
      if (lookahead == 'g') ADVANCE(248);
      END_STATE();
    case 269:
      if (lookahead == 'h') ADVANCE(841);
      END_STATE();
    case 270:
      if (lookahead == 'h') ADVANCE(842);
      END_STATE();
    case 271:
      if (lookahead == 'h') ADVANCE(1168);
      END_STATE();
    case 272:
      if (lookahead == 'h') ADVANCE(874);
      END_STATE();
    case 273:
      if (lookahead == 'h') ADVANCE(873);
      END_STATE();
    case 274:
      if (lookahead == 'h') ADVANCE(48);
      END_STATE();
    case 275:
      if (lookahead == 'h') ADVANCE(94);
      END_STATE();
    case 276:
      if (lookahead == 'h') ADVANCE(100);
      if (lookahead == 't') ADVANCE(141);
      END_STATE();
    case 277:
      if (lookahead == 'h') ADVANCE(128);
      END_STATE();
    case 278:
      if (lookahead == 'h') ADVANCE(130);
      END_STATE();
    case 279:
      if (lookahead == 'h') ADVANCE(249);
      END_STATE();
    case 280:
      if (lookahead == 'i') ADVANCE(161);
      END_STATE();
    case 281:
      if (lookahead == 'i') ADVANCE(424);
      END_STATE();
    case 282:
      if (lookahead == 'i') ADVANCE(224);
      END_STATE();
    case 283:
      if (lookahead == 'i') ADVANCE(350);
      END_STATE();
    case 284:
      if (lookahead == 'i') ADVANCE(379);
      END_STATE();
    case 285:
      if (lookahead == 'i') ADVANCE(264);
      END_STATE();
    case 286:
      if (lookahead == 'i') ADVANCE(345);
      if (lookahead == 'o') ADVANCE(178);
      END_STATE();
    case 287:
      if (lookahead == 'i') ADVANCE(605);
      END_STATE();
    case 288:
      if (lookahead == 'i') ADVANCE(389);
      END_STATE();
    case 289:
      if (lookahead == 'i') ADVANCE(346);
      END_STATE();
    case 290:
      if (lookahead == 'i') ADVANCE(415);
      END_STATE();
    case 291:
      if (lookahead == 'i') ADVANCE(101);
      END_STATE();
    case 292:
      if (lookahead == 'i') ADVANCE(393);
      END_STATE();
    case 293:
      if (lookahead == 'i') ADVANCE(198);
      END_STATE();
    case 294:
      if (lookahead == 'i') ADVANCE(182);
      END_STATE();
    case 295:
      if (lookahead == 'i') ADVANCE(357);
      END_STATE();
    case 296:
      if (lookahead == 'i') ADVANCE(539);
      END_STATE();
    case 297:
      if (lookahead == 'i') ADVANCE(518);
      END_STATE();
    case 298:
      if (lookahead == 'i') ADVANCE(461);
      END_STATE();
    case 299:
      if (lookahead == 'i') ADVANCE(479);
      END_STATE();
    case 300:
      if (lookahead == 'i') ADVANCE(508);
      END_STATE();
    case 301:
      if (lookahead == 'i') ADVANCE(545);
      END_STATE();
    case 302:
      if (lookahead == 'i') ADVANCE(547);
      END_STATE();
    case 303:
      if (lookahead == 'i') ADVANCE(370);
      END_STATE();
    case 304:
      if (lookahead == 'i') ADVANCE(347);
      if (lookahead == 'o') ADVANCE(822);
      END_STATE();
    case 305:
      if (lookahead == 'i') ADVANCE(394);
      END_STATE();
    case 306:
      if (lookahead == 'i') ADVANCE(328);
      END_STATE();
    case 307:
      if (lookahead == 'i') ADVANCE(376);
      if (lookahead == 'm') ADVANCE(143);
      END_STATE();
    case 308:
      if (lookahead == 'i') ADVANCE(396);
      END_STATE();
    case 309:
      if (lookahead == 'k') ADVANCE(282);
      END_STATE();
    case 310:
      if (lookahead == 'k') ADVANCE(293);
      END_STATE();
    case 311:
      if (lookahead == 'k') ADVANCE(290);
      if (lookahead == 'p') ADVANCE(335);
      END_STATE();
    case 312:
      if (lookahead == 'k') ADVANCE(247);
      END_STATE();
    case 313:
      if (lookahead == 'k') ADVANCE(233);
      END_STATE();
    case 314:
      if (lookahead == 'l') ADVANCE(834);
      END_STATE();
    case 315:
      if (lookahead == 'l') ADVANCE(770);
      END_STATE();
    case 316:
      if (lookahead == 'l') ADVANCE(74);
      END_STATE();
    case 317:
      if (lookahead == 'l') ADVANCE(77);
      END_STATE();
    case 318:
      if (lookahead == 'l') ADVANCE(802);
      END_STATE();
    case 319:
      if (lookahead == 'l') ADVANCE(815);
      END_STATE();
    case 320:
      if (lookahead == 'l') ADVANCE(315);
      END_STATE();
    case 321:
      if (lookahead == 'l') ADVANCE(218);
      END_STATE();
    case 322:
      if (lookahead == 'l') ADVANCE(199);
      END_STATE();
    case 323:
      if (lookahead == 'l') ADVANCE(499);
      END_STATE();
    case 324:
      if (lookahead == 'l') ADVANCE(579);
      END_STATE();
    case 325:
      if (lookahead == 'l') ADVANCE(116);
      END_STATE();
    case 326:
      if (lookahead == 'l') ADVANCE(411);
      END_STATE();
    case 327:
      if (lookahead == 'l') ADVANCE(482);
      END_STATE();
    case 328:
      if (lookahead == 'l') ADVANCE(211);
      END_STATE();
    case 329:
      if (lookahead == 'l') ADVANCE(487);
      END_STATE();
    case 330:
      if (lookahead == 'l') ADVANCE(488);
      END_STATE();
    case 331:
      if (lookahead == 'l') ADVANCE(489);
      END_STATE();
    case 332:
      if (lookahead == 'l') ADVANCE(242);
      END_STATE();
    case 333:
      if (lookahead == 'l') ADVANCE(237);
      END_STATE();
    case 334:
      if (lookahead == 'l') ADVANCE(535);
      END_STATE();
    case 335:
      if (lookahead == 'l') ADVANCE(297);
      END_STATE();
    case 336:
      if (lookahead == 'l') ADVANCE(333);
      END_STATE();
    case 337:
      if (lookahead == 'm') ADVANCE(83);
      END_STATE();
    case 338:
      if (lookahead == 'm') ADVANCE(73);
      END_STATE();
    case 339:
      if (lookahead == 'm') ADVANCE(420);
      if (lookahead == 'n') ADVANCE(364);
      if (lookahead == 'u') ADVANCE(362);
      END_STATE();
    case 340:
      if (lookahead == 'm') ADVANCE(159);
      END_STATE();
    case 341:
      if (lookahead == 'm') ADVANCE(496);
      END_STATE();
    case 342:
      if (lookahead == 'm') ADVANCE(498);
      END_STATE();
    case 343:
      if (lookahead == 'm') ADVANCE(317);
      END_STATE();
    case 344:
      if (lookahead == 'm') ADVANCE(317);
      if (lookahead == 't') ADVANCE(414);
      END_STATE();
    case 345:
      if (lookahead == 'm') ADVANCE(296);
      END_STATE();
    case 346:
      if (lookahead == 'm') ADVANCE(206);
      END_STATE();
    case 347:
      if (lookahead == 'm') ADVANCE(238);
      END_STATE();
    case 348:
      if (lookahead == 'm') ADVANCE(422);
      END_STATE();
    case 349:
      if (lookahead == 'm') ADVANCE(133);
      END_STATE();
    case 350:
      if (lookahead == 'n') ADVANCE(262);
      END_STATE();
    case 351:
      if (lookahead == 'n') ADVANCE(836);
      END_STATE();
    case 352:
      if (lookahead == 'n') ADVANCE(793);
      END_STATE();
    case 353:
      if (lookahead == 'n') ADVANCE(866);
      END_STATE();
    case 354:
      if (lookahead == 'n') ADVANCE(848);
      END_STATE();
    case 355:
      if (lookahead == 'n') ADVANCE(861);
      END_STATE();
    case 356:
      if (lookahead == 'n') ADVANCE(850);
      END_STATE();
    case 357:
      if (lookahead == 'n') ADVANCE(263);
      END_STATE();
    case 358:
      if (lookahead == 'n') ADVANCE(492);
      END_STATE();
    case 359:
      if (lookahead == 'n') ADVANCE(287);
      if (lookahead == 'r') ADVANCE(316);
      if (lookahead == 's') ADVANCE(239);
      END_STATE();
    case 360:
      if (lookahead == 'n') ADVANCE(187);
      if (lookahead == 'q') ADVANCE(583);
      if (lookahead == 'x') ADVANCE(300);
      END_STATE();
    case 361:
      if (lookahead == 'n') ADVANCE(167);
      if (lookahead == 's') ADVANCE(72);
      END_STATE();
    case 362:
      if (lookahead == 'n') ADVANCE(517);
      END_STATE();
    case 363:
      if (lookahead == 'n') ADVANCE(122);
      END_STATE();
    case 364:
      if (lookahead == 'n') ADVANCE(228);
      END_STATE();
    case 365:
      if (lookahead == 'n') ADVANCE(502);
      if (lookahead == 'p') ADVANCE(592);
      END_STATE();
    case 366:
      if (lookahead == 'n') ADVANCE(225);
      END_STATE();
    case 367:
      if (lookahead == 'n') ADVANCE(519);
      END_STATE();
    case 368:
      if (lookahead == 'n') ADVANCE(526);
      END_STATE();
    case 369:
      if (lookahead == 'n') ADVANCE(550);
      if (lookahead == 'u') ADVANCE(362);
      END_STATE();
    case 370:
      if (lookahead == 'n') ADVANCE(485);
      END_STATE();
    case 371:
      if (lookahead == 'n') ADVANCE(366);
      END_STATE();
    case 372:
      if (lookahead == 'n') ADVANCE(258);
      END_STATE();
    case 373:
      if (lookahead == 'n') ADVANCE(557);
      if (lookahead == 'p') ADVANCE(594);
      if (lookahead == 's') ADVANCE(412);
      END_STATE();
    case 374:
      if (lookahead == 'n') ADVANCE(426);
      END_STATE();
    case 375:
      if (lookahead == 'n') ADVANCE(175);
      END_STATE();
    case 376:
      if (lookahead == 'n') ADVANCE(565);
      END_STATE();
    case 377:
      if (lookahead == 'o') ADVANCE(432);
      END_STATE();
    case 378:
      if (lookahead == 'o') ADVANCE(309);
      END_STATE();
    case 379:
      if (lookahead == 'o') ADVANCE(358);
      END_STATE();
    case 380:
      if (lookahead == 'o') ADVANCE(75);
      END_STATE();
    case 381:
      if (lookahead == 'o') ADVANCE(75);
      if (lookahead == 'r') ADVANCE(576);
      END_STATE();
    case 382:
      if (lookahead == 'o') ADVANCE(369);
      END_STATE();
    case 383:
      if (lookahead == 'o') ADVANCE(378);
      END_STATE();
    case 384:
      if (lookahead == 'o') ADVANCE(183);
      if (lookahead == 'y') ADVANCE(560);
      END_STATE();
    case 385:
      if (lookahead == 'o') ADVANCE(597);
      END_STATE();
    case 386:
      if (lookahead == 'o') ADVANCE(374);
      END_STATE();
    case 387:
      if (lookahead == 'o') ADVANCE(603);
      END_STATE();
    case 388:
      if (lookahead == 'o') ADVANCE(598);
      END_STATE();
    case 389:
      if (lookahead == 'o') ADVANCE(351);
      END_STATE();
    case 390:
      if (lookahead == 'o') ADVANCE(186);
      END_STATE();
    case 391:
      if (lookahead == 'o') ADVANCE(588);
      END_STATE();
    case 392:
      if (lookahead == 'o') ADVANCE(163);
      END_STATE();
    case 393:
      if (lookahead == 'o') ADVANCE(352);
      END_STATE();
    case 394:
      if (lookahead == 'o') ADVANCE(363);
      END_STATE();
    case 395:
      if (lookahead == 'o') ADVANCE(336);
      END_STATE();
    case 396:
      if (lookahead == 'o') ADVANCE(356);
      END_STATE();
    case 397:
      if (lookahead == 'o') ADVANCE(409);
      END_STATE();
    case 398:
      if (lookahead == 'o') ADVANCE(503);
      END_STATE();
    case 399:
      if (lookahead == 'o') ADVANCE(527);
      if (lookahead == 't') ADVANCE(271);
      if (lookahead == 'u') ADVANCE(320);
      END_STATE();
    case 400:
      if (lookahead == 'o') ADVANCE(443);
      END_STATE();
    case 401:
      if (lookahead == 'o') ADVANCE(310);
      END_STATE();
    case 402:
      if (lookahead == 'o') ADVANCE(401);
      END_STATE();
    case 403:
      if (lookahead == 'o') ADVANCE(188);
      END_STATE();
    case 404:
      if (lookahead == 'o') ADVANCE(575);
      END_STATE();
    case 405:
      if (lookahead == 'o') ADVANCE(449);
      END_STATE();
    case 406:
      if (lookahead == 'o') ADVANCE(189);
      END_STATE();
    case 407:
      if (lookahead == 'o') ADVANCE(463);
      END_STATE();
    case 408:
      if (lookahead == 'o') ADVANCE(506);
      END_STATE();
    case 409:
      if (lookahead == 'o') ADVANCE(332);
      END_STATE();
    case 410:
      if (lookahead == 'o') ADVANCE(586);
      END_STATE();
    case 411:
      if (lookahead == 'o') ADVANCE(137);
      END_STATE();
    case 412:
      if (lookahead == 'o') ADVANCE(76);
      END_STATE();
    case 413:
      if (lookahead == 'p') ADVANCE(529);
      END_STATE();
    case 414:
      if (lookahead == 'p') ADVANCE(54);
      END_STATE();
    case 415:
      if (lookahead == 'p') ADVANCE(804);
      END_STATE();
    case 416:
      if (lookahead == 'p') ADVANCE(532);
      END_STATE();
    case 417:
      if (lookahead == 'p') ADVANCE(570);
      END_STATE();
    case 418:
      if (lookahead == 'p') ADVANCE(335);
      END_STATE();
    case 419:
      if (lookahead == 'p') ADVANCE(335);
      if (lookahead == 't') ADVANCE(153);
      END_STATE();
    case 420:
      if (lookahead == 'p') ADVANCE(457);
      END_STATE();
    case 421:
      if (lookahead == 'p') ADVANCE(209);
      END_STATE();
    case 422:
      if (lookahead == 'p') ADVANCE(546);
      END_STATE();
    case 423:
      if (lookahead == 'p') ADVANCE(212);
      END_STATE();
    case 424:
      if (lookahead == 'p') ADVANCE(144);
      END_STATE();
    case 425:
      if (lookahead == 'p') ADVANCE(119);
      END_STATE();
    case 426:
      if (lookahead == 'p') ADVANCE(123);
      END_STATE();
    case 427:
      if (lookahead == 'p') ADVANCE(584);
      END_STATE();
    case 428:
      if (lookahead == 'p') ADVANCE(562);
      END_STATE();
    case 429:
      if (lookahead == 'q') ADVANCE(589);
      END_STATE();
    case 430:
      if (lookahead == 'q') ADVANCE(590);
      END_STATE();
    case 431:
      if (lookahead == 'q') ADVANCE(591);
      END_STATE();
    case 432:
      if (lookahead == 'r') ADVANCE(337);
      END_STATE();
    case 433:
      if (lookahead == 'r') ADVANCE(606);
      END_STATE();
    case 434:
      if (lookahead == 'r') ADVANCE(823);
      END_STATE();
    case 435:
      if (lookahead == 'r') ADVANCE(156);
      END_STATE();
    case 436:
      if (lookahead == 'r') ADVANCE(829);
      END_STATE();
    case 437:
      if (lookahead == 'r') ADVANCE(81);
      END_STATE();
    case 438:
      if (lookahead == 'r') ADVANCE(851);
      END_STATE();
    case 439:
      if (lookahead == 'r') ADVANCE(846);
      END_STATE();
    case 440:
      if (lookahead == 'r') ADVANCE(78);
      END_STATE();
    case 441:
      if (lookahead == 'r') ADVANCE(105);
      END_STATE();
    case 442:
      if (lookahead == 'r') ADVANCE(534);
      END_STATE();
    case 443:
      if (lookahead == 'r') ADVANCE(338);
      END_STATE();
    case 444:
      if (lookahead == 'r') ADVANCE(160);
      END_STATE();
    case 445:
      if (lookahead == 'r') ADVANCE(595);
      END_STATE();
    case 446:
      if (lookahead == 'r') ADVANCE(576);
      END_STATE();
    case 447:
      if (lookahead == 'r') ADVANCE(314);
      END_STATE();
    case 448:
      if (lookahead == 'r') ADVANCE(283);
      END_STATE();
    case 449:
      if (lookahead == 'r') ADVANCE(349);
      END_STATE();
    case 450:
      if (lookahead == 'r') ADVANCE(162);
      END_STATE();
    case 451:
      if (lookahead == 'r') ADVANCE(515);
      END_STATE();
    case 452:
      if (lookahead == 'r') ADVANCE(291);
      END_STATE();
    case 453:
      if (lookahead == 'r') ADVANCE(611);
      END_STATE();
    case 454:
      if (lookahead == 'r') ADVANCE(316);
      END_STATE();
    case 455:
      if (lookahead == 'r') ADVANCE(152);
      END_STATE();
    case 456:
      if (lookahead == 'r') ADVANCE(516);
      END_STATE();
    case 457:
      if (lookahead == 'r') ADVANCE(251);
      END_STATE();
    case 458:
      if (lookahead == 'r') ADVANCE(295);
      END_STATE();
    case 459:
      if (lookahead == 'r') ADVANCE(520);
      END_STATE();
    case 460:
      if (lookahead == 'r') ADVANCE(229);
      if (lookahead == 't') ADVANCE(289);
      END_STATE();
    case 461:
      if (lookahead == 'r') ADVANCE(478);
      END_STATE();
    case 462:
      if (lookahead == 'r') ADVANCE(205);
      END_STATE();
    case 463:
      if (lookahead == 'r') ADVANCE(252);
      END_STATE();
    case 464:
      if (lookahead == 'r') ADVANCE(257);
      END_STATE();
    case 465:
      if (lookahead == 'r') ADVANCE(230);
      END_STATE();
    case 466:
      if (lookahead == 'r') ADVANCE(142);
      END_STATE();
    case 467:
      if (lookahead == 'r') ADVANCE(585);
      END_STATE();
    case 468:
      if (lookahead == 'r') ADVANCE(567);
      END_STATE();
    case 469:
      if (lookahead == 'r') ADVANCE(147);
      END_STATE();
    case 470:
      if (lookahead == 'r') ADVANCE(87);
      END_STATE();
    case 471:
      if (lookahead == 'r') ADVANCE(79);
      END_STATE();
    case 472:
      if (lookahead == 's') ADVANCE(280);
      END_STATE();
    case 473:
      if (lookahead == 's') ADVANCE(90);
      END_STATE();
    case 474:
      if (lookahead == 's') ADVANCE(837);
      END_STATE();
    case 475:
      if (lookahead == 's') ADVANCE(833);
      END_STATE();
    case 476:
      if (lookahead == 's') ADVANCE(45);
      END_STATE();
    case 477:
      if (lookahead == 's') ADVANCE(69);
      END_STATE();
    case 478:
      if (lookahead == 's') ADVANCE(807);
      END_STATE();
    case 479:
      if (lookahead == 's') ADVANCE(803);
      END_STATE();
    case 480:
      if (lookahead == 's') ADVANCE(88);
      END_STATE();
    case 481:
      if (lookahead == 's') ADVANCE(86);
      END_STATE();
    case 482:
      if (lookahead == 's') ADVANCE(857);
      END_STATE();
    case 483:
      if (lookahead == 's') ADVANCE(845);
      END_STATE();
    case 484:
      if (lookahead == 's') ADVANCE(876);
      END_STATE();
    case 485:
      if (lookahead == 's') ADVANCE(875);
      END_STATE();
    case 486:
      if (lookahead == 's') ADVANCE(877);
      END_STATE();
    case 487:
      if (lookahead == 's') ADVANCE(859);
      END_STATE();
    case 488:
      if (lookahead == 's') ADVANCE(871);
      END_STATE();
    case 489:
      if (lookahead == 's') ADVANCE(864);
      END_STATE();
    case 490:
      if (lookahead == 's') ADVANCE(507);
      END_STATE();
    case 491:
      if (lookahead == 's') ADVANCE(91);
      END_STATE();
    case 492:
      if (lookahead == 's') ADVANCE(92);
      END_STATE();
    case 493:
      if (lookahead == 's') ADVANCE(93);
      END_STATE();
    case 494:
      if (lookahead == 's') ADVANCE(386);
      END_STATE();
    case 495:
      if (lookahead == 's') ADVANCE(194);
      END_STATE();
    case 496:
      if (lookahead == 's') ADVANCE(95);
      END_STATE();
    case 497:
      if (lookahead == 's') ADVANCE(43);
      END_STATE();
    case 498:
      if (lookahead == 's') ADVANCE(97);
      END_STATE();
    case 499:
      if (lookahead == 's') ADVANCE(197);
      END_STATE();
    case 500:
      if (lookahead == 's') ADVANCE(392);
      END_STATE();
    case 501:
      if (lookahead == 's') ADVANCE(285);
      END_STATE();
    case 502:
      if (lookahead == 's') ADVANCE(221);
      END_STATE();
    case 503:
      if (lookahead == 's') ADVANCE(204);
      END_STATE();
    case 504:
      if (lookahead == 's') ADVANCE(231);
      END_STATE();
    case 505:
      if (lookahead == 's') ADVANCE(481);
      END_STATE();
    case 506:
      if (lookahead == 's') ADVANCE(213);
      END_STATE();
    case 507:
      if (lookahead == 's') ADVANCE(220);
      END_STATE();
    case 508:
      if (lookahead == 's') ADVANCE(554);
      END_STATE();
    case 509:
      if (lookahead == 's') ADVANCE(168);
      END_STATE();
    case 510:
      if (lookahead == 's') ADVANCE(504);
      END_STATE();
    case 511:
      if (lookahead == 's') ADVANCE(173);
      END_STATE();
    case 512:
      if (lookahead == 's') ADVANCE(556);
      END_STATE();
    case 513:
      if (lookahead == 's') ADVANCE(89);
      END_STATE();
    case 514:
      if (lookahead == 't') ADVANCE(275);
      END_STATE();
    case 515:
      if (lookahead == 't') ADVANCE(80);
      END_STATE();
    case 516:
      if (lookahead == 't') ADVANCE(776);
      END_STATE();
    case 517:
      if (lookahead == 't') ADVANCE(1157);
      END_STATE();
    case 518:
      if (lookahead == 't') ADVANCE(1170);
      END_STATE();
    case 519:
      if (lookahead == 't') ADVANCE(1160);
      END_STATE();
    case 520:
      if (lookahead == 't') ADVANCE(775);
      END_STATE();
    case 521:
      if (lookahead == 't') ADVANCE(1166);
      END_STATE();
    case 522:
      if (lookahead == 't') ADVANCE(825);
      END_STATE();
    case 523:
      if (lookahead == 't') ADVANCE(811);
      END_STATE();
    case 524:
      if (lookahead == 't') ADVANCE(828);
      END_STATE();
    case 525:
      if (lookahead == 't') ADVANCE(813);
      END_STATE();
    case 526:
      if (lookahead == 't') ADVANCE(808);
      END_STATE();
    case 527:
      if (lookahead == 't') ADVANCE(844);
      END_STATE();
    case 528:
      if (lookahead == 't') ADVANCE(847);
      END_STATE();
    case 529:
      if (lookahead == 't') ADVANCE(284);
      END_STATE();
    case 530:
      if (lookahead == 't') ADVANCE(269);
      END_STATE();
    case 531:
      if (lookahead == 't') ADVANCE(304);
      END_STATE();
    case 532:
      if (lookahead == 't') ADVANCE(572);
      END_STATE();
    case 533:
      if (lookahead == 't') ADVANCE(270);
      END_STATE();
    case 534:
      if (lookahead == 't') ADVANCE(473);
      END_STATE();
    case 535:
      if (lookahead == 't') ADVANCE(281);
      END_STATE();
    case 536:
      if (lookahead == 't') ADVANCE(271);
      END_STATE();
    case 537:
      if (lookahead == 't') ADVANCE(117);
      END_STATE();
    case 538:
      if (lookahead == 't') ADVANCE(274);
      END_STATE();
    case 539:
      if (lookahead == 't') ADVANCE(44);
      END_STATE();
    case 540:
      if (lookahead == 't') ADVANCE(581);
      END_STATE();
    case 541:
      if (lookahead == 't') ADVANCE(427);
      END_STATE();
    case 542:
      if (lookahead == 't') ADVANCE(448);
      END_STATE();
    case 543:
      if (lookahead == 't') ADVANCE(47);
      END_STATE();
    case 544:
      if (lookahead == 't') ADVANCE(343);
      END_STATE();
    case 545:
      if (lookahead == 't') ADVANCE(272);
      END_STATE();
    case 546:
      if (lookahead == 't') ADVANCE(613);
      END_STATE();
    case 547:
      if (lookahead == 't') ADVANCE(273);
      END_STATE();
    case 548:
      if (lookahead == 't') ADVANCE(164);
      END_STATE();
    case 549:
      if (lookahead == 't') ADVANCE(450);
      END_STATE();
    case 550:
      if (lookahead == 't') ADVANCE(132);
      END_STATE();
    case 551:
      if (lookahead == 't') ADVANCE(467);
      END_STATE();
    case 552:
      if (lookahead == 't') ADVANCE(202);
      END_STATE();
    case 553:
      if (lookahead == 't') ADVANCE(458);
      END_STATE();
    case 554:
      if (lookahead == 't') ADVANCE(483);
      END_STATE();
    case 555:
      if (lookahead == 't') ADVANCE(210);
      END_STATE();
    case 556:
      if (lookahead == 't') ADVANCE(234);
      END_STATE();
    case 557:
      if (lookahead == 't') ADVANCE(223);
      END_STATE();
    case 558:
      if (lookahead == 't') ADVANCE(215);
      END_STATE();
    case 559:
      if (lookahead == 't') ADVANCE(288);
      END_STATE();
    case 560:
      if (lookahead == 't') ADVANCE(236);
      END_STATE();
    case 561:
      if (lookahead == 't') ADVANCE(292);
      END_STATE();
    case 562:
      if (lookahead == 't') ADVANCE(305);
      END_STATE();
    case 563:
      if (lookahead == 't') ADVANCE(308);
      END_STATE();
    case 564:
      if (lookahead == 't') ADVANCE(241);
      END_STATE();
    case 565:
      if (lookahead == 't') ADVANCE(244);
      END_STATE();
    case 566:
      if (lookahead == 't') ADVANCE(245);
      END_STATE();
    case 567:
      if (lookahead == 't') ADVANCE(513);
      END_STATE();
    case 568:
      if (lookahead == 'u') ADVANCE(334);
      END_STATE();
    case 569:
      if (lookahead == 'u') ADVANCE(216);
      END_STATE();
    case 570:
      if (lookahead == 'u') ADVANCE(157);
      END_STATE();
    case 571:
      if (lookahead == 'u') ADVANCE(617);
      if (lookahead == '#' ||
          lookahead == '\\' ||
          lookahead == '`' ||
          lookahead == 'b' ||
          lookahead == 'f') ADVANCE(1102);
      END_STATE();
    case 572:
      if (lookahead == 'u') ADVANCE(465);
      END_STATE();
    case 573:
      if (lookahead == 'u') ADVANCE(320);
      END_STATE();
    case 574:
      if (lookahead == 'u') ADVANCE(514);
      END_STATE();
    case 575:
      if (lookahead == 'u') ADVANCE(362);
      END_STATE();
    case 576:
      if (lookahead == 'u') ADVANCE(196);
      END_STATE();
    case 577:
      if (lookahead == 'u') ADVANCE(455);
      END_STATE();
    case 578:
      if (lookahead == 'u') ADVANCE(340);
      END_STATE();
    case 579:
      if (lookahead == 'u') ADVANCE(191);
      END_STATE();
    case 580:
      if (lookahead == 'u') ADVANCE(541);
      END_STATE();
    case 581:
      if (lookahead == 'u') ADVANCE(475);
      END_STATE();
    case 582:
      if (lookahead == 'u') ADVANCE(294);
      END_STATE();
    case 583:
      if (lookahead == 'u') ADVANCE(140);
      END_STATE();
    case 584:
      if (lookahead == 'u') ADVANCE(522);
      END_STATE();
    case 585:
      if (lookahead == 'u') ADVANCE(512);
      END_STATE();
    case 586:
      if (lookahead == 'u') ADVANCE(525);
      END_STATE();
    case 587:
      if (lookahead == 'u') ADVANCE(462);
      END_STATE();
    case 588:
      if (lookahead == 'u') ADVANCE(368);
      END_STATE();
    case 589:
      if (lookahead == 'u') ADVANCE(148);
      END_STATE();
    case 590:
      if (lookahead == 'u') ADVANCE(149);
      END_STATE();
    case 591:
      if (lookahead == 'u') ADVANCE(150);
      END_STATE();
    case 592:
      if (lookahead == 'v') ADVANCE(56);
      END_STATE();
    case 593:
      if (lookahead == 'v') ADVANCE(57);
      END_STATE();
    case 594:
      if (lookahead == 'v') ADVANCE(58);
      END_STATE();
    case 595:
      if (lookahead == 'v') ADVANCE(126);
      END_STATE();
    case 596:
      if (lookahead == 'v') ADVANCE(240);
      END_STATE();
    case 597:
      if (lookahead == 'w') ADVANCE(1163);
      END_STATE();
    case 598:
      if (lookahead == 'w') ADVANCE(1164);
      END_STATE();
    case 599:
      if (lookahead == 'w') ADVANCE(476);
      END_STATE();
    case 600:
      if (lookahead == 'x') ADVANCE(37);
      END_STATE();
    case 601:
      if (lookahead == 'x') ADVANCE(843);
      END_STATE();
    case 602:
      if (lookahead == 'x') ADVANCE(40);
      END_STATE();
    case 603:
      if (lookahead == 'x') ADVANCE(610);
      END_STATE();
    case 604:
      if (lookahead == 'x') ADVANCE(42);
      END_STATE();
    case 605:
      if (lookahead == 'x') ADVANCE(46);
      END_STATE();
    case 606:
      if (lookahead == 'y') ADVANCE(85);
      END_STATE();
    case 607:
      if (lookahead == 'y') ADVANCE(835);
      END_STATE();
    case 608:
      if (lookahead == 'y') ADVANCE(821);
      END_STATE();
    case 609:
      if (lookahead == 'y') ADVANCE(814);
      END_STATE();
    case 610:
      if (lookahead == 'y') ADVANCE(827);
      END_STATE();
    case 611:
      if (lookahead == 'y') ADVANCE(812);
      END_STATE();
    case 612:
      if (lookahead == 'y') ADVANCE(826);
      END_STATE();
    case 613:
      if (lookahead == 'y') ADVANCE(853);
      END_STATE();
    case 614:
      if (lookahead == 'y') ADVANCE(477);
      END_STATE();
    case 615:
      if (lookahead == '{') ADVANCE(1152);
      END_STATE();
    case 616:
      if (lookahead == '{') ADVANCE(904);
      END_STATE();
    case 617:
      if (lookahead == '{') ADVANCE(629);
      END_STATE();
    case 618:
      if (lookahead == '}') ADVANCE(905);
      END_STATE();
    case 619:
      if (lookahead == '}') ADVANCE(1102);
      END_STATE();
    case 620:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(623);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1147);
      END_STATE();
    case 621:
      if (lookahead == '"' ||
          lookahead == '#') ADVANCE(1083);
      END_STATE();
    case 622:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1146);
      END_STATE();
    case 623:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1147);
      END_STATE();
    case 624:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1171);
      END_STATE();
    case 625:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1172);
      END_STATE();
    case 626:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(619);
      END_STATE();
    case 627:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(626);
      END_STATE();
    case 628:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(627);
      END_STATE();
    case 629:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(628);
      END_STATE();
    case 630:
      if (eof) ADVANCE(637);
      ADVANCE_MAP(
        '\n', 638,
        '"', 896,
        '#', 1181,
        '-', 51,
        '0', 1144,
        '<', 870,
        'C', 720,
        'D', 688,
        'G', 689,
        'H', 690,
        'L', 701,
        'O', 724,
        'P', 679,
        'T', 726,
        'U', 713,
        'V', 702,
        '[', 71,
        '`', 1098,
        'a', 599,
        'b', 124,
        'c', 106,
        'd', 109,
        'f', 104,
        'h', 193,
        'i', 365,
        'k', 222,
        'l', 286,
        'm', 107,
        'n', 253,
        'o', 580,
        'p', 127,
        'r', 200,
        's', 311,
        't', 381,
        'u', 359,
        'v', 121,
        'x', 425,
        '{', 789,
      );
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1145);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(737);
      if (set_contains(extras_character_set_2, 9, lookahead)) SKIP(630);
      END_STATE();
    case 631:
      if (eof) ADVANCE(637);
      ADVANCE_MAP(
        '\n', 638,
        '"', 896,
        '#', 1181,
        '-', 51,
        '0', 1144,
        '<', 870,
        'C', 720,
        'D', 688,
        'G', 689,
        'H', 690,
        'L', 701,
        'O', 724,
        'P', 679,
        'T', 726,
        'U', 713,
        'V', 702,
        '[', 71,
        '`', 1098,
        'b', 124,
        'f', 103,
        'h', 226,
        'n', 573,
        't', 446,
        '{', 789,
      );
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1145);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(737);
      if (set_contains(extras_character_set_2, 9, lookahead)) SKIP(631);
      END_STATE();
    case 632:
      if (eof) ADVANCE(637);
      ADVANCE_MAP(
        '\n', 638,
        '"', 896,
        '#', 1181,
        '-', 51,
        '0', 1144,
        '<', 870,
        'C', 720,
        'D', 688,
        'G', 689,
        'H', 691,
        'L', 701,
        'O', 724,
        'P', 679,
        'T', 726,
        'U', 713,
        'V', 702,
        '[', 68,
        '`', 1098,
        'b', 125,
        'c', 402,
        'd', 577,
        'f', 103,
        'h', 192,
        'j', 494,
        'm', 179,
        'n', 573,
        'r', 217,
        's', 276,
        't', 446,
        'u', 447,
        'v', 120,
        'x', 425,
        '{', 789,
      );
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1145);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(737);
      if (set_contains(extras_character_set_2, 9, lookahead)) SKIP(632);
      END_STATE();
    case 633:
      if (eof) ADVANCE(637);
      ADVANCE_MAP(
        '\n', 638,
        '"', 896,
        '#', 1181,
        '-', 51,
        '0', 1144,
        '<', 870,
        'C', 720,
        'D', 688,
        'G', 689,
        'H', 691,
        'L', 701,
        'O', 724,
        'P', 679,
        'T', 726,
        'U', 713,
        'V', 702,
        '[', 68,
        '`', 1098,
        'b', 124,
        'f', 103,
        'h', 226,
        'n', 573,
        't', 446,
        '{', 789,
      );
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1145);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(737);
      if (set_contains(extras_character_set_2, 9, lookahead)) SKIP(633);
      END_STATE();
    case 634:
      if (eof) ADVANCE(637);
      ADVANCE_MAP(
        '\n', 638,
        '"', 896,
        '#', 1181,
        '-', 913,
        '0', 911,
        '<', 870,
        'C', 962,
        'D', 930,
        'G', 931,
        'H', 932,
        'L', 945,
        'O', 968,
        'P', 919,
        'T', 971,
        'U', 956,
        'V', 944,
        '[', 921,
        '\\', 621,
        '`', 1098,
        'b', 991,
        'f', 992,
        'h', 1004,
        'n', 1070,
        't', 1043,
        '{', 790,
      );
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(910);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1081);
      if (set_contains(extras_character_set_2, 9, lookahead)) SKIP(631);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1082);
      END_STATE();
    case 635:
      if (eof) ADVANCE(637);
      ADVANCE_MAP(
        '\n', 638,
        '"', 896,
        '#', 1181,
        '-', 913,
        '0', 911,
        '<', 870,
        'C', 962,
        'D', 930,
        'G', 931,
        'H', 933,
        'L', 945,
        'O', 968,
        'P', 919,
        'T', 971,
        'U', 956,
        'V', 944,
        '[', 920,
        '\\', 621,
        '`', 1098,
        'b', 991,
        'f', 992,
        'h', 1004,
        'n', 1070,
        't', 1043,
        '{', 790,
      );
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(910);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1081);
      if (set_contains(extras_character_set_2, 9, lookahead)) SKIP(633);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1082);
      END_STATE();
    case 636:
      if (eof) ADVANCE(637);
      ADVANCE_MAP(
        '!', 64,
        '"', 896,
        '#', 1181,
        ',', 1138,
        '-', 624,
        '/', 1182,
        ':', 769,
        ';', 773,
        '<', 869,
        '=', 65,
        '>', 863,
        '?', 66,
        ']', 1139,
        '`', 98,
        'b', 124,
        'c', 382,
        'd', 110,
        'e', 360,
        'f', 104,
        'g', 464,
        'h', 227,
        'i', 361,
        'l', 254,
        'm', 136,
        'n', 399,
        'r', 214,
        's', 419,
        't', 381,
        'u', 454,
        'x', 425,
        '{', 789,
        '}', 618,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1171);
      if (set_contains(extras_character_set_2, 9, lookahead)) SKIP(636);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(638);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(639);
      if (set_contains(extras_character_set_2, 9, lookahead)) ADVANCE(1085);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(640);
      if ((set_contains(extras_character_set_2, 9, lookahead)) &&
          lookahead != ' ') ADVANCE(1133);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(641);
      if ((set_contains(extras_character_set_2, 9, lookahead)) &&
          lookahead != '\r') ADVANCE(777);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(642);
      if (set_contains(extras_character_set_2, 9, lookahead)) ADVANCE(1086);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(643);
      if (set_contains(extras_character_set_2, 9, lookahead)) ADVANCE(1129);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(644);
      if (set_contains(extras_character_set_2, 9, lookahead)) ADVANCE(1109);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(645);
      if (set_contains(extras_character_set_2, 9, lookahead)) ADVANCE(1087);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(anon_sym_GET);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(737);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(anon_sym_GET);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1081);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1082);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(anon_sym_HEAD);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(737);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(anon_sym_HEAD);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1081);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1082);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(anon_sym_POST);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(737);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(anon_sym_POST);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1081);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1082);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(anon_sym_PUT);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(737);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(anon_sym_PUT);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1081);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1082);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(anon_sym_DELETE);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(737);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(anon_sym_DELETE);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1081);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1082);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(anon_sym_CONNECT);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(737);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(anon_sym_CONNECT);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1081);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1082);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(anon_sym_OPTIONS);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(737);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(anon_sym_OPTIONS);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1081);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1082);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(anon_sym_TRACE);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(737);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(anon_sym_TRACE);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1081);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1082);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(anon_sym_PATCH);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(737);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(anon_sym_PATCH);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1081);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1082);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(anon_sym_LINK);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(737);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(anon_sym_LINK);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1081);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1082);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(anon_sym_UNLINK);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(737);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(anon_sym_UNLINK);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1081);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1082);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(anon_sym_PURGE);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(737);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(anon_sym_PURGE);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1081);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1082);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(anon_sym_LOCK);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(737);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(anon_sym_LOCK);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1081);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1082);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(anon_sym_UNLOCK);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(737);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(anon_sym_UNLOCK);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1081);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1082);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(anon_sym_PROPFIND);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(737);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(anon_sym_PROPFIND);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1081);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1082);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(anon_sym_VIEW);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(737);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(anon_sym_VIEW);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1081);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1082);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'A') ADVANCE(686);
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(737);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'A') ADVANCE(733);
      if (lookahead == 'O') ADVANCE(728);
      if (lookahead == 'R') ADVANCE(719);
      if (lookahead == 'U') ADVANCE(725);
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(737);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'A') ADVANCE(685);
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(737);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'C') ADVANCE(700);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(737);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'C') ADVANCE(707);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(737);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'C') ADVANCE(709);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(737);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'C') ADVANCE(731);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(737);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'C') ADVANCE(694);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(737);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'D') ADVANCE(648);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(737);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'D') ADVANCE(674);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(737);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'E') ADVANCE(710);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(737);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'E') ADVANCE(729);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(737);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'E') ADVANCE(678);
      if (lookahead == 'T') ADVANCE(734);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(737);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'E') ADVANCE(678);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(737);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'E') ADVANCE(736);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(737);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'E') ADVANCE(668);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(737);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'E') ADVANCE(660);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(737);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'E') ADVANCE(654);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(737);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'E') ADVANCE(684);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(737);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'E') ADVANCE(735);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(737);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'F') ADVANCE(704);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(737);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'G') ADVANCE(693);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(737);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'H') ADVANCE(662);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(737);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'I') ADVANCE(712);
      if (lookahead == 'O') ADVANCE(682);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(737);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'I') ADVANCE(692);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(737);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'I') ADVANCE(716);
      if (lookahead == 'O') ADVANCE(683);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(737);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'I') ADVANCE(715);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(737);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'I') ADVANCE(721);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(737);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'K') ADVANCE(664);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(737);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'K') ADVANCE(670);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(737);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'K') ADVANCE(666);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(737);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'K') ADVANCE(672);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(737);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'L') ADVANCE(697);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(737);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'L') ADVANCE(703);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(737);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'N') ADVANCE(706);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(737);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'N') ADVANCE(711);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(737);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'N') ADVANCE(727);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(737);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'N') ADVANCE(687);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(737);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'N') ADVANCE(708);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(737);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'N') ADVANCE(718);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(737);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'N') ADVANCE(696);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(737);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'O') ADVANCE(722);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(737);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'O') ADVANCE(717);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(737);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'O') ADVANCE(714);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(737);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'P') ADVANCE(698);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(737);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'P') ADVANCE(743);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(737);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'P') ADVANCE(732);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(737);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'R') ADVANCE(699);
      if (lookahead == 'T') ADVANCE(652);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(737);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'R') ADVANCE(680);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(737);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'S') ADVANCE(658);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(737);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'S') ADVANCE(730);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(737);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'T') ADVANCE(646);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(737);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'T') ADVANCE(650);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(737);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'T') ADVANCE(656);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(737);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'T') ADVANCE(705);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(737);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'T') ADVANCE(681);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(737);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'T') ADVANCE(723);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(737);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'T') ADVANCE(695);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(737);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'W') ADVANCE(676);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(737);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(737);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(anon_sym_HTTP_SLASH1_DOT0);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(anon_sym_HTTP_SLASH1_DOT1);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(anon_sym_HTTP_SLASH2);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(anon_sym_HTTP_SLASH3);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(anon_sym_HTTP_SLASH_STAR);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(anon_sym_HTTP);
      if (lookahead == '/') ADVANCE(36);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(737);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(anon_sym_HTTP);
      if (lookahead == '/') ADVANCE(36);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1081);
      if (lookahead == '$' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1082);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(aux_sym_status_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(745);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(anon_sym_LBRACKBasicAuth_RBRACK);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(anon_sym_LBRACKBasicAuth_RBRACK);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1082);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(anon_sym_LBRACKQuery_RBRACK);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(anon_sym_LBRACKQuery_RBRACK);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1082);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(anon_sym_LBRACKQueryStringParams_RBRACK);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(anon_sym_LBRACKQueryStringParams_RBRACK);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1082);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(anon_sym_LBRACKForm_RBRACK);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(anon_sym_LBRACKForm_RBRACK);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1082);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(anon_sym_LBRACKFormParams_RBRACK);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(anon_sym_LBRACKFormParams_RBRACK);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1082);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(anon_sym_LBRACKMultipart_RBRACK);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(anon_sym_LBRACKMultipart_RBRACK);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1082);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(anon_sym_LBRACKMultipartFormData_RBRACK);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(anon_sym_LBRACKMultipartFormData_RBRACK);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1082);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(anon_sym_LBRACKCookies_RBRACK);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(anon_sym_LBRACKCookies_RBRACK);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1082);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(anon_sym_LBRACKCaptures_RBRACK);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(anon_sym_LBRACKCaptures_RBRACK);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1082);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(anon_sym_LBRACKAsserts_RBRACK);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(anon_sym_LBRACKAsserts_RBRACK);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1082);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(anon_sym_LBRACKOptions_RBRACK);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(anon_sym_LBRACKOptions_RBRACK);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1082);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(anon_sym_null);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(anon_sym_null);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1082);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(anon_sym_file_COMMA);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(aux_sym_file_value_token1);
      if (lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(774);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(anon_sym_cacert);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(anon_sym_cert);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(sym_filename_password_text);
      if (lookahead == '\n') ADVANCE(641);
      if ((set_contains(extras_character_set_2, 9, lookahead)) &&
          lookahead != '\r') ADVANCE(777);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(779);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(sym_filename_password_text);
      if ((set_contains(extras_character_set_1, 10, lookahead)) &&
          lookahead != '\r') ADVANCE(778);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(779);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(sym_filename_password_text);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(779);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(anon_sym_b);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(anon_sym_f);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(anon_sym_n);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(anon_sym_r);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(anon_sym_t);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(anon_sym_u);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1181);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '{') ADVANCE(1152);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '{') ADVANCE(904);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(anon_sym_compressed);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(anon_sym_location);
      if (lookahead == '-') ADVANCE(551);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(anon_sym_location_DASHtrusted);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(anon_sym_http1_DOT0);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(anon_sym_http2);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(anon_sym_http3);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(anon_sym_insecure);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(anon_sym_ipv4);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(anon_sym_ipv6);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(anon_sym_netrc);
      if (lookahead == '-') ADVANCE(259);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(anon_sym_netrc_DASHoptional);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(anon_sym_path_DASHas_DASHis);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(anon_sym_skip);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(anon_sym_verbose);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(anon_sym_very_DASHverbose);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(anon_sym_max_DASHredirs);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(anon_sym_retry_DASHmax_DASHcount);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(anon_sym_limit_DASHrate);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(anon_sym_max_DASHtime);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(anon_sym_repeat);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(anon_sym_retry);
      if (lookahead == '-') ADVANCE(307);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(anon_sym_connect_DASHtimeout);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(anon_sym_delay);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(anon_sym_retry_DASHinterval);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(anon_sym_ms);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(anon_sym_s);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(anon_sym_m);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(anon_sym_m);
      if (lookahead == 's') ADVANCE(816);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(anon_sym_aws_DASHsigv4);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(anon_sym_key);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(anon_sym_connect_DASHto);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(anon_sym_header);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(anon_sym_netrc_DASHfile);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(anon_sym_output);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(anon_sym_pinnedpubkey);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(anon_sym_proxy);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(anon_sym_unix_DASHsocket);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(anon_sym_user);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(anon_sym_variable);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(858);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(anon_sym_status);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(anon_sym_url);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(anon_sym_body);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(anon_sym_duration);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(anon_sym_bytes);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(anon_sym_sha256);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(anon_sym_md5);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(anon_sym_cookie);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(anon_sym_xpath);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(anon_sym_jsonpath);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(anon_sym_regex);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(anon_sym_not);
      if (lookahead == 'E') ADVANCE(429);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(anon_sym_exists);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(anon_sym_isInteger);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(anon_sym_isFloat);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(anon_sym_isBoolean);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(anon_sym_isString);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(anon_sym_isCollection);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(anon_sym_isNumber);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(anon_sym_isIsoDate);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(anon_sym_isEmpty);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(anon_sym_isIpv4);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(anon_sym_isIpv6);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(anon_sym_isUuid);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(anon_sym_equals);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(anon_sym_notEquals);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(anon_sym_greaterThan);
      if (lookahead == 'O') ADVANCE(471);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(865);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(anon_sym_greaterThanOrEquals);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(anon_sym_lessThan);
      if (lookahead == 'O') ADVANCE(440);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '/') ADVANCE(888);
      if (lookahead == '=') ADVANCE(872);
      if (lookahead == '?') ADVANCE(878);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '/') ADVANCE(888);
      if (lookahead == '?') ADVANCE(878);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(872);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '?') ADVANCE(878);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(anon_sym_lessThanOrEquals);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(anon_sym_startsWith);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(anon_sym_endsWith);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(anon_sym_contains);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(anon_sym_matches);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(anon_sym_includes);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(anon_sym_LT_QMARK);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(aux_sym_xml_prolog_tag_token1);
      if (lookahead == '\n') ADVANCE(881);
      if (lookahead == '?') ADVANCE(1181);
      if (lookahead != 0) ADVANCE(879);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(aux_sym_xml_prolog_tag_token1);
      if (lookahead == '#') ADVANCE(879);
      if (set_contains(extras_character_set_2, 9, lookahead)) ADVANCE(880);
      if (lookahead != 0 &&
          lookahead != '?') ADVANCE(881);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(aux_sym_xml_prolog_tag_token1);
      if (lookahead != 0 &&
          lookahead != '?') ADVANCE(881);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(anon_sym_QMARK_GT);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(aux_sym_xml_self_closing_tag_token1);
      if (lookahead == '\n') ADVANCE(887);
      if (lookahead == '/') ADVANCE(883);
      if (lookahead == '>') ADVANCE(1181);
      if (lookahead != 0) ADVANCE(885);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(aux_sym_xml_self_closing_tag_token1);
      if (lookahead == '/') ADVANCE(884);
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(887);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(aux_sym_xml_open_tag_token1);
      if (lookahead == '\n') ADVANCE(887);
      if (lookahead == '/') ADVANCE(883);
      if (lookahead == '>') ADVANCE(1181);
      if (lookahead != 0) ADVANCE(885);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(aux_sym_xml_open_tag_token1);
      if (lookahead == '#') ADVANCE(885);
      if (lookahead == '/') ADVANCE(884);
      if (lookahead == '>') ADVANCE(887);
      if (lookahead == '?') ADVANCE(887);
      if (set_contains(extras_character_set_2, 9, lookahead)) ADVANCE(886);
      if (lookahead != 0) ADVANCE(887);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(aux_sym_xml_open_tag_token1);
      if (lookahead == '/') ADVANCE(884);
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(887);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(anon_sym_LT_SLASH);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(aux_sym_xml_close_tag_token1);
      if (lookahead == '\n') ADVANCE(891);
      if (lookahead == '/' ||
          lookahead == '>') ADVANCE(1181);
      if (lookahead != 0) ADVANCE(889);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(aux_sym_xml_close_tag_token1);
      if (lookahead == '#') ADVANCE(889);
      if (set_contains(extras_character_set_2, 9, lookahead)) ADVANCE(890);
      if (lookahead != 0 &&
          lookahead != '/' &&
          lookahead != '>') ADVANCE(891);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(aux_sym_xml_close_tag_token1);
      if (lookahead != 0 &&
          lookahead != '/' &&
          lookahead != '>') ADVANCE(891);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(anon_sym_base64_COMMA);
      END_STATE();
    case 893:
      ACCEPT_TOKEN(aux_sym_oneline_base64_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(893);
      if (lookahead == '+' ||
          ('/' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 894:
      ACCEPT_TOKEN(aux_sym_oneline_base64_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '+' ||
          ('/' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 895:
      ACCEPT_TOKEN(anon_sym_hex_COMMA);
      END_STATE();
    case 896:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 897:
      ACCEPT_TOKEN(sym_quoted_string_text);
      if (lookahead == '\n') ADVANCE(900);
      if (lookahead == '"' ||
          lookahead == '\\') ADVANCE(1181);
      if (lookahead != 0) ADVANCE(897);
      END_STATE();
    case 898:
      ACCEPT_TOKEN(sym_quoted_string_text);
      if (lookahead == '#') ADVANCE(897);
      if (lookahead == '{') ADVANCE(899);
      if (set_contains(extras_character_set_2, 9, lookahead)) ADVANCE(898);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(900);
      END_STATE();
    case 899:
      ACCEPT_TOKEN(sym_quoted_string_text);
      if (lookahead == '{') ADVANCE(1154);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(900);
      END_STATE();
    case 900:
      ACCEPT_TOKEN(sym_quoted_string_text);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(900);
      END_STATE();
    case 901:
      ACCEPT_TOKEN(aux_sym_invalid_quoted_string_escaped_char_token1);
      END_STATE();
    case 902:
      ACCEPT_TOKEN(aux_sym_invalid_quoted_string_escaped_char_token1);
      if (lookahead == '#') ADVANCE(903);
      if (lookahead == 'b') ADVANCE(781);
      if (lookahead == 'f') ADVANCE(782);
      if (lookahead == 'n') ADVANCE(783);
      if (lookahead == 'r') ADVANCE(784);
      if (lookahead == 't') ADVANCE(785);
      if ((set_contains(extras_character_set_2, 9, lookahead)) &&
          lookahead != '\t' &&
          lookahead != '\f' &&
          lookahead != '\r') ADVANCE(902);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '\\' &&
          lookahead != 't' &&
          lookahead != 'u') ADVANCE(901);
      END_STATE();
    case 903:
      ACCEPT_TOKEN(aux_sym_invalid_quoted_string_escaped_char_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1181);
      END_STATE();
    case 904:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      END_STATE();
    case 905:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 906:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '+') ADVANCE(623);
      if (lookahead == '-') ADVANCE(1080);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1080);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1082);
      END_STATE();
    case 907:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == ',') ADVANCE(895);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1082);
      END_STATE();
    case 908:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == ',') ADVANCE(772);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1082);
      END_STATE();
    case 909:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == ',') ADVANCE(892);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1082);
      END_STATE();
    case 910:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '.') ADVANCE(1078);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(906);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(910);
      if (lookahead == '$' ||
          lookahead == '-' ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1082);
      END_STATE();
    case 911:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '.') ADVANCE(1078);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(906);
      if (lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1082);
      END_STATE();
    case 912:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '.') ADVANCE(1080);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(912);
      if (lookahead == '$' ||
          lookahead == '-' ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1082);
      END_STATE();
    case 913:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '0') ADVANCE(911);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(910);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1082);
      END_STATE();
    case 914:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '4') ADVANCE(909);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1082);
      END_STATE();
    case 915:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '6') ADVANCE(914);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1082);
      END_STATE();
    case 916:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'A') ADVANCE(927);
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(1081);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1082);
      END_STATE();
    case 917:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'A') ADVANCE(925);
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(1081);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1082);
      END_STATE();
    case 918:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'A') ADVANCE(1071);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1082);
      END_STATE();
    case 919:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'A') ADVANCE(980);
      if (lookahead == 'O') ADVANCE(974);
      if (lookahead == 'R') ADVANCE(963);
      if (lookahead == 'U') ADVANCE(970);
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(1081);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1082);
      END_STATE();
    case 920:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'A') ADVANCE(1060);
      if (lookahead == 'C') ADVANCE(1000);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1082);
      END_STATE();
    case 921:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'B') ADVANCE(994);
      if (lookahead == 'C') ADVANCE(1035);
      if (lookahead == 'F') ADVANCE(1034);
      if (lookahead == 'M') ADVANCE(1072);
      if (lookahead == 'O') ADVANCE(1037);
      if (lookahead == 'Q') ADVANCE(1069);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1082);
      END_STATE();
    case 922:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'C') ADVANCE(943);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1081);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1082);
      END_STATE();
    case 923:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'C') ADVANCE(950);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1081);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1082);
      END_STATE();
    case 924:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'C') ADVANCE(952);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1081);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1082);
      END_STATE();
    case 925:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'C') ADVANCE(936);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1081);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1082);
      END_STATE();
    case 926:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'C') ADVANCE(977);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1081);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1082);
      END_STATE();
    case 927:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'D') ADVANCE(649);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1081);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1082);
      END_STATE();
    case 928:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'D') ADVANCE(675);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1081);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1082);
      END_STATE();
    case 929:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'D') ADVANCE(998);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1082);
      END_STATE();
    case 930:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'E') ADVANCE(953);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1081);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1082);
      END_STATE();
    case 931:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'E') ADVANCE(975);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1081);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1082);
      END_STATE();
    case 932:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'E') ADVANCE(916);
      if (lookahead == 'T') ADVANCE(978);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1081);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1082);
      END_STATE();
    case 933:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'E') ADVANCE(916);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1081);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1082);
      END_STATE();
    case 934:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'E') ADVANCE(982);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1081);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1082);
      END_STATE();
    case 935:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'E') ADVANCE(669);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1081);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1082);
      END_STATE();
    case 936:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'E') ADVANCE(661);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1081);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1082);
      END_STATE();
    case 937:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'E') ADVANCE(655);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1081);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1082);
      END_STATE();
    case 938:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'E') ADVANCE(926);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1081);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1082);
      END_STATE();
    case 939:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'E') ADVANCE(981);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1081);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1082);
      END_STATE();
    case 940:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'F') ADVANCE(947);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1081);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1082);
      END_STATE();
    case 941:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'F') ADVANCE(1036);
      if (lookahead == ']') ADVANCE(758);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1082);
      END_STATE();
    case 942:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'G') ADVANCE(935);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1081);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1082);
      END_STATE();
    case 943:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'H') ADVANCE(663);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1081);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1082);
      END_STATE();
    case 944:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'I') ADVANCE(934);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1081);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1082);
      END_STATE();
    case 945:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'I') ADVANCE(955);
      if (lookahead == 'O') ADVANCE(923);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1081);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1082);
      END_STATE();
    case 946:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'I') ADVANCE(959);
      if (lookahead == 'O') ADVANCE(924);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1081);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1082);
      END_STATE();
    case 947:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'I') ADVANCE(958);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1081);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1082);
      END_STATE();
    case 948:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'I') ADVANCE(964);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1081);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1082);
      END_STATE();
    case 949:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'K') ADVANCE(665);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1081);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1082);
      END_STATE();
    case 950:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'K') ADVANCE(671);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1081);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1082);
      END_STATE();
    case 951:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'K') ADVANCE(667);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1081);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1082);
      END_STATE();
    case 952:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'K') ADVANCE(673);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1081);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1082);
      END_STATE();
    case 953:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'L') ADVANCE(939);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1081);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1082);
      END_STATE();
    case 954:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'L') ADVANCE(946);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1081);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1082);
      END_STATE();
    case 955:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'N') ADVANCE(949);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1081);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1082);
      END_STATE();
    case 956:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'N') ADVANCE(954);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1081);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1082);
      END_STATE();
    case 957:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'N') ADVANCE(972);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1081);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1082);
      END_STATE();
    case 958:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'N') ADVANCE(928);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1081);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1082);
      END_STATE();
    case 959:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'N') ADVANCE(951);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1081);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1082);
      END_STATE();
    case 960:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'N') ADVANCE(961);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1081);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1082);
      END_STATE();
    case 961:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'N') ADVANCE(938);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1081);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1082);
      END_STATE();
    case 962:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'O') ADVANCE(960);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1081);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1082);
      END_STATE();
    case 963:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'O') ADVANCE(966);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1081);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1082);
      END_STATE();
    case 964:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'O') ADVANCE(957);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1081);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1082);
      END_STATE();
    case 965:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'P') ADVANCE(744);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1081);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1082);
      END_STATE();
    case 966:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'P') ADVANCE(940);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1081);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1082);
      END_STATE();
    case 967:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'P') ADVANCE(996);
      if (lookahead == ']') ADVANCE(754);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1082);
      END_STATE();
    case 968:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'P') ADVANCE(979);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1081);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1082);
      END_STATE();
    case 969:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'P') ADVANCE(1002);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1082);
      END_STATE();
    case 970:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'R') ADVANCE(942);
      if (lookahead == 'T') ADVANCE(653);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1081);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1082);
      END_STATE();
    case 971:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'R') ADVANCE(917);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1081);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1082);
      END_STATE();
    case 972:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'S') ADVANCE(659);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1081);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1082);
      END_STATE();
    case 973:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'S') ADVANCE(1067);
      if (lookahead == ']') ADVANCE(750);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1082);
      END_STATE();
    case 974:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'S') ADVANCE(976);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1081);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1082);
      END_STATE();
    case 975:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'T') ADVANCE(647);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1081);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1082);
      END_STATE();
    case 976:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'T') ADVANCE(651);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1081);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1082);
      END_STATE();
    case 977:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'T') ADVANCE(657);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1081);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1082);
      END_STATE();
    case 978:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'T') ADVANCE(965);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1081);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1082);
      END_STATE();
    case 979:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'T') ADVANCE(948);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1081);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1082);
      END_STATE();
    case 980:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'T') ADVANCE(922);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1081);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1082);
      END_STATE();
    case 981:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'T') ADVANCE(937);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1081);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1082);
      END_STATE();
    case 982:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'W') ADVANCE(677);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1081);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1082);
      END_STATE();
    case 983:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == ']') ADVANCE(762);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1082);
      END_STATE();
    case 984:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == ']') ADVANCE(768);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1082);
      END_STATE();
    case 985:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == ']') ADVANCE(748);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1082);
      END_STATE();
    case 986:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == ']') ADVANCE(756);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1082);
      END_STATE();
    case 987:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == ']') ADVANCE(760);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1082);
      END_STATE();
    case 988:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == ']') ADVANCE(752);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1082);
      END_STATE();
    case 989:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == ']') ADVANCE(766);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1082);
      END_STATE();
    case 990:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == ']') ADVANCE(764);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1082);
      END_STATE();
    case 991:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'a') ADVANCE(1053);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1082);
      END_STATE();
    case 992:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'a') ADVANCE(1024);
      if (lookahead == 'i') ADVANCE(1022);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1082);
      END_STATE();
    case 993:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'a') ADVANCE(1024);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1082);
      END_STATE();
    case 994:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'a') ADVANCE(1050);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1082);
      END_STATE();
    case 995:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'a') ADVANCE(1028);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1082);
      END_STATE();
    case 996:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'a') ADVANCE(1042);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1082);
      END_STATE();
    case 997:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'a') ADVANCE(1045);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1082);
      END_STATE();
    case 998:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'a') ADVANCE(1065);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1082);
      END_STATE();
    case 999:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'a') ADVANCE(987);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1082);
      END_STATE();
    case 1000:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'a') ADVANCE(1038);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1082);
      END_STATE();
    case 1001:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'a') ADVANCE(1029);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1082);
      END_STATE();
    case 1002:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'a') ADVANCE(1049);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1082);
      END_STATE();
    case 1003:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'c') ADVANCE(918);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1082);
      END_STATE();
    case 1004:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'e') ADVANCE(1075);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1082);
      END_STATE();
    case 1005:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'e') ADVANCE(915);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1082);
      END_STATE();
    case 1006:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'e') ADVANCE(1149);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1082);
      END_STATE();
    case 1007:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'e') ADVANCE(1151);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1082);
      END_STATE();
    case 1008:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'e') ADVANCE(908);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1082);
      END_STATE();
    case 1009:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'e') ADVANCE(1041);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1082);
      END_STATE();
    case 1010:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'e') ADVANCE(1051);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1082);
      END_STATE();
    case 1011:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'e') ADVANCE(1047);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1082);
      END_STATE();
    case 1012:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'e') ADVANCE(1058);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1082);
      END_STATE();
    case 1013:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'g') ADVANCE(969);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1082);
      END_STATE();
    case 1014:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'h') ADVANCE(985);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1082);
      END_STATE();
    case 1015:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'i') ADVANCE(1003);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1082);
      END_STATE();
    case 1016:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'i') ADVANCE(1039);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1082);
      END_STATE();
    case 1017:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'i') ADVANCE(1030);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1082);
      END_STATE();
    case 1018:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'i') ADVANCE(1033);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1082);
      END_STATE();
    case 1019:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'i') ADVANCE(1010);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1082);
      END_STATE();
    case 1020:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'k') ADVANCE(1019);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1082);
      END_STATE();
    case 1021:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'l') ADVANCE(771);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1082);
      END_STATE();
    case 1022:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'l') ADVANCE(1008);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1082);
      END_STATE();
    case 1023:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'l') ADVANCE(1021);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1082);
      END_STATE();
    case 1024:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'l') ADVANCE(1055);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1082);
      END_STATE();
    case 1025:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'l') ADVANCE(1064);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1082);
      END_STATE();
    case 1026:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'm') ADVANCE(967);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1082);
      END_STATE();
    case 1027:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'm') ADVANCE(929);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1082);
      END_STATE();
    case 1028:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'm') ADVANCE(1054);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1082);
      END_STATE();
    case 1029:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'm') ADVANCE(1056);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1082);
      END_STATE();
    case 1030:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'n') ADVANCE(1013);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1082);
      END_STATE();
    case 1031:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'n') ADVANCE(1052);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1082);
      END_STATE();
    case 1032:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'o') ADVANCE(1020);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1082);
      END_STATE();
    case 1033:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'o') ADVANCE(1031);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1082);
      END_STATE();
    case 1034:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'o') ADVANCE(1040);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1082);
      END_STATE();
    case 1035:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'o') ADVANCE(1032);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1082);
      END_STATE();
    case 1036:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'o') ADVANCE(1044);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1082);
      END_STATE();
    case 1037:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'p') ADVANCE(1063);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1082);
      END_STATE();
    case 1038:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'p') ADVANCE(1066);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1082);
      END_STATE();
    case 1039:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'p') ADVANCE(997);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1082);
      END_STATE();
    case 1040:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'r') ADVANCE(1026);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1082);
      END_STATE();
    case 1041:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'r') ADVANCE(1076);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1082);
      END_STATE();
    case 1042:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'r') ADVANCE(995);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1082);
      END_STATE();
    case 1043:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'r') ADVANCE(1073);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1082);
      END_STATE();
    case 1044:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'r') ADVANCE(1027);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1082);
      END_STATE();
    case 1045:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'r') ADVANCE(1062);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1082);
      END_STATE();
    case 1046:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'r') ADVANCE(1017);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1082);
      END_STATE();
    case 1047:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'r') ADVANCE(1068);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1082);
      END_STATE();
    case 1048:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'r') ADVANCE(1012);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1082);
      END_STATE();
    case 1049:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'r') ADVANCE(1001);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1082);
      END_STATE();
    case 1050:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 's') ADVANCE(1015);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1082);
      END_STATE();
    case 1051:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 's') ADVANCE(983);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1082);
      END_STATE();
    case 1052:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 's') ADVANCE(984);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1082);
      END_STATE();
    case 1053:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 's') ADVANCE(1005);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1082);
      END_STATE();
    case 1054:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 's') ADVANCE(986);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1082);
      END_STATE();
    case 1055:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 's') ADVANCE(1007);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1082);
      END_STATE();
    case 1056:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 's') ADVANCE(988);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1082);
      END_STATE();
    case 1057:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 's') ADVANCE(989);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1082);
      END_STATE();
    case 1058:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 's') ADVANCE(990);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1082);
      END_STATE();
    case 1059:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 's') ADVANCE(1011);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1082);
      END_STATE();
    case 1060:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 's') ADVANCE(1059);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1082);
      END_STATE();
    case 1061:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 't') ADVANCE(1014);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1082);
      END_STATE();
    case 1062:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 't') ADVANCE(941);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1082);
      END_STATE();
    case 1063:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 't') ADVANCE(1018);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1082);
      END_STATE();
    case 1064:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 't') ADVANCE(1016);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1082);
      END_STATE();
    case 1065:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 't') ADVANCE(999);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1082);
      END_STATE();
    case 1066:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 't') ADVANCE(1074);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1082);
      END_STATE();
    case 1067:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 't') ADVANCE(1046);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1082);
      END_STATE();
    case 1068:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 't') ADVANCE(1057);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1082);
      END_STATE();
    case 1069:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'u') ADVANCE(1009);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1082);
      END_STATE();
    case 1070:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'u') ADVANCE(1023);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1082);
      END_STATE();
    case 1071:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'u') ADVANCE(1061);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1082);
      END_STATE();
    case 1072:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'u') ADVANCE(1025);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1082);
      END_STATE();
    case 1073:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'u') ADVANCE(1006);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1082);
      END_STATE();
    case 1074:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'u') ADVANCE(1048);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1082);
      END_STATE();
    case 1075:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'x') ADVANCE(907);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1082);
      END_STATE();
    case 1076:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'y') ADVANCE(973);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1082);
      END_STATE();
    case 1077:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(906);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1077);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1082);
      END_STATE();
    case 1078:
      ACCEPT_TOKEN(sym_key_string_text);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1077);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1082);
      END_STATE();
    case 1079:
      ACCEPT_TOKEN(sym_key_string_text);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(912);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1082);
      END_STATE();
    case 1080:
      ACCEPT_TOKEN(sym_key_string_text);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1080);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1082);
      END_STATE();
    case 1081:
      ACCEPT_TOKEN(sym_key_string_text);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1081);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1082);
      END_STATE();
    case 1082:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1082);
      END_STATE();
    case 1083:
      ACCEPT_TOKEN(sym_key_string_escaped_char);
      END_STATE();
    case 1084:
      ACCEPT_TOKEN(aux_sym_value_string_text_token1);
      END_STATE();
    case 1085:
      ACCEPT_TOKEN(aux_sym_value_string_text_token1);
      if (lookahead == '\n') ADVANCE(639);
      if (lookahead == '-') ADVANCE(1096);
      if (lookahead == 'f') ADVANCE(1091);
      if (lookahead == 'n') ADVANCE(1093);
      if (lookahead == 't') ADVANCE(1092);
      if (lookahead == '{') ADVANCE(1094);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1088);
      if (set_contains(extras_character_set_2, 9, lookahead)) ADVANCE(1085);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(1084);
      END_STATE();
    case 1086:
      ACCEPT_TOKEN(aux_sym_value_string_text_token1);
      if (lookahead == '\n') ADVANCE(642);
      if (lookahead == '{') ADVANCE(1094);
      if (set_contains(extras_character_set_2, 9, lookahead)) ADVANCE(1086);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(1084);
      END_STATE();
    case 1087:
      ACCEPT_TOKEN(aux_sym_value_string_text_token1);
      if (lookahead == '\n') ADVANCE(645);
      if (lookahead == '-') ADVANCE(1096);
      if (lookahead == 'f') ADVANCE(1090);
      if (lookahead == 'n') ADVANCE(1093);
      if (lookahead == 't') ADVANCE(1092);
      if (lookahead == '{') ADVANCE(1094);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1088);
      if (set_contains(extras_character_set_2, 9, lookahead)) ADVANCE(1087);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(1084);
      END_STATE();
    case 1088:
      ACCEPT_TOKEN(aux_sym_value_string_text_token1);
      if (lookahead == '.') ADVANCE(625);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1171);
      END_STATE();
    case 1089:
      ACCEPT_TOKEN(aux_sym_value_string_text_token1);
      if (lookahead == '<') ADVANCE(868);
      if (lookahead == '{') ADVANCE(1094);
      if (set_contains(extras_character_set_1, 10, lookahead)) ADVANCE(1089);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(1084);
      END_STATE();
    case 1090:
      ACCEPT_TOKEN(aux_sym_value_string_text_token1);
      if (lookahead == 'a') ADVANCE(323);
      END_STATE();
    case 1091:
      ACCEPT_TOKEN(aux_sym_value_string_text_token1);
      if (lookahead == 'a') ADVANCE(323);
      if (lookahead == 'i') ADVANCE(321);
      END_STATE();
    case 1092:
      ACCEPT_TOKEN(aux_sym_value_string_text_token1);
      if (lookahead == 'r') ADVANCE(576);
      END_STATE();
    case 1093:
      ACCEPT_TOKEN(aux_sym_value_string_text_token1);
      if (lookahead == 'u') ADVANCE(320);
      END_STATE();
    case 1094:
      ACCEPT_TOKEN(aux_sym_value_string_text_token1);
      if (lookahead == '{') ADVANCE(1152);
      END_STATE();
    case 1095:
      ACCEPT_TOKEN(aux_sym_value_string_text_token1);
      if (lookahead == '{') ADVANCE(1094);
      if (set_contains(extras_character_set_1, 10, lookahead)) ADVANCE(1095);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(1084);
      END_STATE();
    case 1096:
      ACCEPT_TOKEN(aux_sym_value_string_text_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1171);
      END_STATE();
    case 1097:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 1098:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      if (lookahead == '`') ADVANCE(99);
      END_STATE();
    case 1099:
      ACCEPT_TOKEN(aux_sym_oneline_string_text_token1);
      if (lookahead == '#') ADVANCE(1100);
      if (set_contains(extras_character_set_1, 10, lookahead)) ADVANCE(1099);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != '{') ADVANCE(1100);
      END_STATE();
    case 1100:
      ACCEPT_TOKEN(aux_sym_oneline_string_text_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != '{') ADVANCE(1100);
      END_STATE();
    case 1101:
      ACCEPT_TOKEN(anon_sym_LBRACE2);
      if (lookahead == '{') ADVANCE(1152);
      END_STATE();
    case 1102:
      ACCEPT_TOKEN(sym_oneline_string_escaped_char);
      END_STATE();
    case 1103:
      ACCEPT_TOKEN(anon_sym_BQUOTE_BQUOTE_BQUOTE);
      END_STATE();
    case 1104:
      ACCEPT_TOKEN(anon_sym_base64);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1128);
      END_STATE();
    case 1105:
      ACCEPT_TOKEN(anon_sym_hex);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1128);
      END_STATE();
    case 1106:
      ACCEPT_TOKEN(anon_sym_json);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1128);
      END_STATE();
    case 1107:
      ACCEPT_TOKEN(anon_sym_xml);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1128);
      END_STATE();
    case 1108:
      ACCEPT_TOKEN(anon_sym_graphql);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1128);
      END_STATE();
    case 1109:
      ACCEPT_TOKEN(aux_sym_multiline_string_type_token1);
      if (lookahead == '\n') ADVANCE(644);
      if (lookahead == '#') ADVANCE(1128);
      if (lookahead == 'b') ADVANCE(1113);
      if (lookahead == 'g') ADVANCE(1124);
      if (lookahead == 'h') ADVANCE(1114);
      if (lookahead == 'j') ADVANCE(1125);
      if (lookahead == 'x') ADVANCE(1119);
      if (set_contains(extras_character_set_2, 9, lookahead)) ADVANCE(1109);
      if (lookahead != 0) ADVANCE(1128);
      END_STATE();
    case 1110:
      ACCEPT_TOKEN(aux_sym_multiline_string_type_token1);
      if (lookahead == '4') ADVANCE(1104);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1128);
      END_STATE();
    case 1111:
      ACCEPT_TOKEN(aux_sym_multiline_string_type_token1);
      if (lookahead == '6') ADVANCE(1110);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1128);
      END_STATE();
    case 1112:
      ACCEPT_TOKEN(aux_sym_multiline_string_type_token1);
      if (lookahead == 'a') ADVANCE(1122);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1128);
      END_STATE();
    case 1113:
      ACCEPT_TOKEN(aux_sym_multiline_string_type_token1);
      if (lookahead == 'a') ADVANCE(1126);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1128);
      END_STATE();
    case 1114:
      ACCEPT_TOKEN(aux_sym_multiline_string_type_token1);
      if (lookahead == 'e') ADVANCE(1127);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1128);
      END_STATE();
    case 1115:
      ACCEPT_TOKEN(aux_sym_multiline_string_type_token1);
      if (lookahead == 'e') ADVANCE(1111);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1128);
      END_STATE();
    case 1116:
      ACCEPT_TOKEN(aux_sym_multiline_string_type_token1);
      if (lookahead == 'h') ADVANCE(1123);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1128);
      END_STATE();
    case 1117:
      ACCEPT_TOKEN(aux_sym_multiline_string_type_token1);
      if (lookahead == 'l') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1128);
      END_STATE();
    case 1118:
      ACCEPT_TOKEN(aux_sym_multiline_string_type_token1);
      if (lookahead == 'l') ADVANCE(1108);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1128);
      END_STATE();
    case 1119:
      ACCEPT_TOKEN(aux_sym_multiline_string_type_token1);
      if (lookahead == 'm') ADVANCE(1117);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1128);
      END_STATE();
    case 1120:
      ACCEPT_TOKEN(aux_sym_multiline_string_type_token1);
      if (lookahead == 'n') ADVANCE(1106);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1128);
      END_STATE();
    case 1121:
      ACCEPT_TOKEN(aux_sym_multiline_string_type_token1);
      if (lookahead == 'o') ADVANCE(1120);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1128);
      END_STATE();
    case 1122:
      ACCEPT_TOKEN(aux_sym_multiline_string_type_token1);
      if (lookahead == 'p') ADVANCE(1116);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1128);
      END_STATE();
    case 1123:
      ACCEPT_TOKEN(aux_sym_multiline_string_type_token1);
      if (lookahead == 'q') ADVANCE(1118);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1128);
      END_STATE();
    case 1124:
      ACCEPT_TOKEN(aux_sym_multiline_string_type_token1);
      if (lookahead == 'r') ADVANCE(1112);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1128);
      END_STATE();
    case 1125:
      ACCEPT_TOKEN(aux_sym_multiline_string_type_token1);
      if (lookahead == 's') ADVANCE(1121);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1128);
      END_STATE();
    case 1126:
      ACCEPT_TOKEN(aux_sym_multiline_string_type_token1);
      if (lookahead == 's') ADVANCE(1115);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1128);
      END_STATE();
    case 1127:
      ACCEPT_TOKEN(aux_sym_multiline_string_type_token1);
      if (lookahead == 'x') ADVANCE(1105);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1128);
      END_STATE();
    case 1128:
      ACCEPT_TOKEN(aux_sym_multiline_string_type_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1128);
      END_STATE();
    case 1129:
      ACCEPT_TOKEN(sym__multiline_string_text);
      if (lookahead == '\n') ADVANCE(643);
      if (lookahead == '#') ADVANCE(1180);
      if (lookahead == '\\') ADVANCE(780);
      if (lookahead == '`') ADVANCE(1130);
      if (lookahead == '{') ADVANCE(1131);
      if (set_contains(extras_character_set_2, 9, lookahead)) ADVANCE(1129);
      if (lookahead != 0) ADVANCE(1132);
      END_STATE();
    case 1130:
      ACCEPT_TOKEN(sym__multiline_string_text);
      if (lookahead == '`') ADVANCE(99);
      END_STATE();
    case 1131:
      ACCEPT_TOKEN(sym__multiline_string_text);
      if (lookahead == '{') ADVANCE(1152);
      END_STATE();
    case 1132:
      ACCEPT_TOKEN(sym__multiline_string_text);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != '{') ADVANCE(1132);
      END_STATE();
    case 1133:
      ACCEPT_TOKEN(sym_filename_text);
      if (lookahead == '\n') ADVANCE(640);
      if (lookahead == '{') ADVANCE(1135);
      if ((set_contains(extras_character_set_2, 9, lookahead)) &&
          lookahead != ' ') ADVANCE(1133);
      if (lookahead != 0 &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '\\') ADVANCE(1136);
      END_STATE();
    case 1134:
      ACCEPT_TOKEN(sym_filename_text);
      if (lookahead == '{') ADVANCE(1135);
      if ((set_contains(extras_character_set_1, 10, lookahead)) &&
          lookahead != ' ') ADVANCE(1134);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '\\') ADVANCE(1136);
      END_STATE();
    case 1135:
      ACCEPT_TOKEN(sym_filename_text);
      if (lookahead == '{') ADVANCE(1153);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '\\') ADVANCE(1136);
      END_STATE();
    case 1136:
      ACCEPT_TOKEN(sym_filename_text);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '\\') ADVANCE(1136);
      END_STATE();
    case 1137:
      ACCEPT_TOKEN(aux_sym_filename_escaped_char_token1);
      END_STATE();
    case 1138:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 1139:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 1140:
      ACCEPT_TOKEN(aux_sym_json_string_text_token1);
      END_STATE();
    case 1141:
      ACCEPT_TOKEN(aux_sym_json_string_text_token1);
      if (lookahead == '#') ADVANCE(1143);
      if (lookahead == '{') ADVANCE(1142);
      if (set_contains(extras_character_set_2, 9, lookahead)) ADVANCE(1141);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(1140);
      END_STATE();
    case 1142:
      ACCEPT_TOKEN(aux_sym_json_string_text_token1);
      if (lookahead == '{') ADVANCE(1152);
      END_STATE();
    case 1143:
      ACCEPT_TOKEN(aux_sym_json_string_text_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1181);
      END_STATE();
    case 1144:
      ACCEPT_TOKEN(sym__json_number);
      if (lookahead == '.') ADVANCE(622);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(620);
      END_STATE();
    case 1145:
      ACCEPT_TOKEN(sym__json_number);
      if (lookahead == '.') ADVANCE(622);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(620);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1145);
      END_STATE();
    case 1146:
      ACCEPT_TOKEN(sym__json_number);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(620);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1146);
      END_STATE();
    case 1147:
      ACCEPT_TOKEN(sym__json_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1147);
      END_STATE();
    case 1148:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 1149:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1082);
      END_STATE();
    case 1150:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 1151:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1082);
      END_STATE();
    case 1152:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE2);
      END_STATE();
    case 1153:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '\\') ADVANCE(1136);
      END_STATE();
    case 1154:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE2);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(900);
      END_STATE();
    case 1155:
      ACCEPT_TOKEN(aux_sym_variable_name_token1);
      END_STATE();
    case 1156:
      ACCEPT_TOKEN(aux_sym_variable_name_token2);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1156);
      END_STATE();
    case 1157:
      ACCEPT_TOKEN(anon_sym_count);
      END_STATE();
    case 1158:
      ACCEPT_TOKEN(anon_sym_urlEncode);
      END_STATE();
    case 1159:
      ACCEPT_TOKEN(anon_sym_urlDecode);
      END_STATE();
    case 1160:
      ACCEPT_TOKEN(anon_sym_toInt);
      END_STATE();
    case 1161:
      ACCEPT_TOKEN(anon_sym_htmlEscape);
      END_STATE();
    case 1162:
      ACCEPT_TOKEN(anon_sym_htmlUnescape);
      END_STATE();
    case 1163:
      ACCEPT_TOKEN(anon_sym_daysAfterNow);
      END_STATE();
    case 1164:
      ACCEPT_TOKEN(anon_sym_daysBeforeNow);
      END_STATE();
    case 1165:
      ACCEPT_TOKEN(anon_sym_decode);
      END_STATE();
    case 1166:
      ACCEPT_TOKEN(anon_sym_format);
      END_STATE();
    case 1167:
      ACCEPT_TOKEN(anon_sym_toDate);
      END_STATE();
    case 1168:
      ACCEPT_TOKEN(anon_sym_nth);
      END_STATE();
    case 1169:
      ACCEPT_TOKEN(anon_sym_replace);
      END_STATE();
    case 1170:
      ACCEPT_TOKEN(anon_sym_split);
      END_STATE();
    case 1171:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(625);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1171);
      END_STATE();
    case 1172:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1172);
      END_STATE();
    case 1173:
      ACCEPT_TOKEN(aux_sym_hexdigit_token1);
      END_STATE();
    case 1174:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 1175:
      ACCEPT_TOKEN(anon_sym_e);
      END_STATE();
    case 1176:
      ACCEPT_TOKEN(anon_sym_E);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(737);
      END_STATE();
    case 1177:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 1178:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 1179:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '/' ||
          lookahead == '\\') ADVANCE(1181);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1179);
      END_STATE();
    case 1180:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\' ||
          lookahead == '`' ||
          lookahead == '{') ADVANCE(1181);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1180);
      END_STATE();
    case 1181:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1181);
      END_STATE();
    case 1182:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 1183:
      ACCEPT_TOKEN(sym_regex_text);
      if (lookahead == '#') ADVANCE(1179);
      if (set_contains(extras_character_set_1, 10, lookahead)) ADVANCE(1183);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '/' &&
          lookahead != '\\') ADVANCE(1184);
      END_STATE();
    case 1184:
      ACCEPT_TOKEN(sym_regex_text);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '/' &&
          lookahead != '\\') ADVANCE(1184);
      END_STATE();
    case 1185:
      ACCEPT_TOKEN(aux_sym_regex_escaped_char_token1);
      END_STATE();
    case 1186:
      ACCEPT_TOKEN(aux_sym_regex_escaped_char_token1);
      if (lookahead == '#') ADVANCE(1181);
      if (set_contains(extras_character_set_1, 10, lookahead)) ADVANCE(1186);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(1185);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 632},
  [2] = {.lex_state = 630, .external_lex_state = 2},
  [3] = {.lex_state = 630, .external_lex_state = 2},
  [4] = {.lex_state = 630, .external_lex_state = 2},
  [5] = {.lex_state = 634, .external_lex_state = 3},
  [6] = {.lex_state = 634, .external_lex_state = 3},
  [7] = {.lex_state = 634, .external_lex_state = 3},
  [8] = {.lex_state = 634, .external_lex_state = 3},
  [9] = {.lex_state = 630, .external_lex_state = 2},
  [10] = {.lex_state = 630, .external_lex_state = 2},
  [11] = {.lex_state = 630, .external_lex_state = 2},
  [12] = {.lex_state = 630, .external_lex_state = 2},
  [13] = {.lex_state = 630, .external_lex_state = 2},
  [14] = {.lex_state = 630, .external_lex_state = 2},
  [15] = {.lex_state = 635, .external_lex_state = 3},
  [16] = {.lex_state = 635, .external_lex_state = 3},
  [17] = {.lex_state = 636},
  [18] = {.lex_state = 636},
  [19] = {.lex_state = 634, .external_lex_state = 3},
  [20] = {.lex_state = 634, .external_lex_state = 3},
  [21] = {.lex_state = 634, .external_lex_state = 3},
  [22] = {.lex_state = 634, .external_lex_state = 3},
  [23] = {.lex_state = 632, .external_lex_state = 2},
  [24] = {.lex_state = 632, .external_lex_state = 2},
  [25] = {.lex_state = 634, .external_lex_state = 3},
  [26] = {.lex_state = 634, .external_lex_state = 3},
  [27] = {.lex_state = 632, .external_lex_state = 2},
  [28] = {.lex_state = 634, .external_lex_state = 3},
  [29] = {.lex_state = 634, .external_lex_state = 3},
  [30] = {.lex_state = 634, .external_lex_state = 3},
  [31] = {.lex_state = 632, .external_lex_state = 2},
  [32] = {.lex_state = 634, .external_lex_state = 3},
  [33] = {.lex_state = 634, .external_lex_state = 3},
  [34] = {.lex_state = 632, .external_lex_state = 2},
  [35] = {.lex_state = 634, .external_lex_state = 3},
  [36] = {.lex_state = 634, .external_lex_state = 3},
  [37] = {.lex_state = 630, .external_lex_state = 2},
  [38] = {.lex_state = 636},
  [39] = {.lex_state = 634, .external_lex_state = 3},
  [40] = {.lex_state = 634, .external_lex_state = 3},
  [41] = {.lex_state = 634, .external_lex_state = 3},
  [42] = {.lex_state = 634, .external_lex_state = 3},
  [43] = {.lex_state = 632, .external_lex_state = 2},
  [44] = {.lex_state = 632, .external_lex_state = 2},
  [45] = {.lex_state = 632, .external_lex_state = 2},
  [46] = {.lex_state = 632, .external_lex_state = 2},
  [47] = {.lex_state = 630, .external_lex_state = 2},
  [48] = {.lex_state = 630, .external_lex_state = 2},
  [49] = {.lex_state = 636},
  [50] = {.lex_state = 636},
  [51] = {.lex_state = 636},
  [52] = {.lex_state = 635, .external_lex_state = 3},
  [53] = {.lex_state = 636},
  [54] = {.lex_state = 635, .external_lex_state = 3},
  [55] = {.lex_state = 635, .external_lex_state = 3},
  [56] = {.lex_state = 636},
  [57] = {.lex_state = 636},
  [58] = {.lex_state = 636},
  [59] = {.lex_state = 636},
  [60] = {.lex_state = 636},
  [61] = {.lex_state = 636},
  [62] = {.lex_state = 636},
  [63] = {.lex_state = 635, .external_lex_state = 3},
  [64] = {.lex_state = 636},
  [65] = {.lex_state = 636},
  [66] = {.lex_state = 636},
  [67] = {.lex_state = 636},
  [68] = {.lex_state = 636},
  [69] = {.lex_state = 636},
  [70] = {.lex_state = 636},
  [71] = {.lex_state = 636},
  [72] = {.lex_state = 636},
  [73] = {.lex_state = 636},
  [74] = {.lex_state = 635, .external_lex_state = 3},
  [75] = {.lex_state = 635, .external_lex_state = 3},
  [76] = {.lex_state = 635, .external_lex_state = 3},
  [77] = {.lex_state = 635, .external_lex_state = 3},
  [78] = {.lex_state = 635, .external_lex_state = 3},
  [79] = {.lex_state = 632, .external_lex_state = 2},
  [80] = {.lex_state = 632, .external_lex_state = 2},
  [81] = {.lex_state = 630, .external_lex_state = 4},
  [82] = {.lex_state = 630, .external_lex_state = 4},
  [83] = {.lex_state = 630},
  [84] = {.lex_state = 630},
  [85] = {.lex_state = 630, .external_lex_state = 4},
  [86] = {.lex_state = 630},
  [87] = {.lex_state = 632},
  [88] = {.lex_state = 636},
  [89] = {.lex_state = 636},
  [90] = {.lex_state = 630},
  [91] = {.lex_state = 632},
  [92] = {.lex_state = 630},
  [93] = {.lex_state = 630},
  [94] = {.lex_state = 630},
  [95] = {.lex_state = 630},
  [96] = {.lex_state = 630},
  [97] = {.lex_state = 632},
  [98] = {.lex_state = 632},
  [99] = {.lex_state = 632},
  [100] = {.lex_state = 632},
  [101] = {.lex_state = 5, .external_lex_state = 4},
  [102] = {.lex_state = 17},
  [103] = {.lex_state = 632},
  [104] = {.lex_state = 632},
  [105] = {.lex_state = 632},
  [106] = {.lex_state = 632},
  [107] = {.lex_state = 632},
  [108] = {.lex_state = 632},
  [109] = {.lex_state = 632},
  [110] = {.lex_state = 636},
  [111] = {.lex_state = 636},
  [112] = {.lex_state = 636},
  [113] = {.lex_state = 636},
  [114] = {.lex_state = 636},
  [115] = {.lex_state = 632},
  [116] = {.lex_state = 632},
  [117] = {.lex_state = 632},
  [118] = {.lex_state = 16, .external_lex_state = 4},
  [119] = {.lex_state = 632},
  [120] = {.lex_state = 632},
  [121] = {.lex_state = 632},
  [122] = {.lex_state = 632},
  [123] = {.lex_state = 630, .external_lex_state = 4},
  [124] = {.lex_state = 630, .external_lex_state = 4},
  [125] = {.lex_state = 630, .external_lex_state = 4},
  [126] = {.lex_state = 630, .external_lex_state = 4},
  [127] = {.lex_state = 630, .external_lex_state = 4},
  [128] = {.lex_state = 630, .external_lex_state = 4},
  [129] = {.lex_state = 630, .external_lex_state = 4},
  [130] = {.lex_state = 630, .external_lex_state = 4},
  [131] = {.lex_state = 630, .external_lex_state = 4},
  [132] = {.lex_state = 630, .external_lex_state = 4},
  [133] = {.lex_state = 630, .external_lex_state = 4},
  [134] = {.lex_state = 630, .external_lex_state = 4},
  [135] = {.lex_state = 630, .external_lex_state = 4},
  [136] = {.lex_state = 630, .external_lex_state = 4},
  [137] = {.lex_state = 19, .external_lex_state = 5},
  [138] = {.lex_state = 630, .external_lex_state = 4},
  [139] = {.lex_state = 25},
  [140] = {.lex_state = 630, .external_lex_state = 4},
  [141] = {.lex_state = 630, .external_lex_state = 4},
  [142] = {.lex_state = 630, .external_lex_state = 4},
  [143] = {.lex_state = 630, .external_lex_state = 4},
  [144] = {.lex_state = 630, .external_lex_state = 4},
  [145] = {.lex_state = 1, .external_lex_state = 6},
  [146] = {.lex_state = 1, .external_lex_state = 6},
  [147] = {.lex_state = 1, .external_lex_state = 6},
  [148] = {.lex_state = 6},
  [149] = {.lex_state = 13, .external_lex_state = 4},
  [150] = {.lex_state = 6},
  [151] = {.lex_state = 6},
  [152] = {.lex_state = 17, .external_lex_state = 2},
  [153] = {.lex_state = 17, .external_lex_state = 2},
  [154] = {.lex_state = 6},
  [155] = {.lex_state = 6},
  [156] = {.lex_state = 17, .external_lex_state = 2},
  [157] = {.lex_state = 17, .external_lex_state = 2},
  [158] = {.lex_state = 13, .external_lex_state = 4},
  [159] = {.lex_state = 24},
  [160] = {.lex_state = 13, .external_lex_state = 4},
  [161] = {.lex_state = 7},
  [162] = {.lex_state = 26, .external_lex_state = 5},
  [163] = {.lex_state = 21},
  [164] = {.lex_state = 8},
  [165] = {.lex_state = 21},
  [166] = {.lex_state = 22},
  [167] = {.lex_state = 14},
  [168] = {.lex_state = 22},
  [169] = {.lex_state = 14},
  [170] = {.lex_state = 14},
  [171] = {.lex_state = 28},
  [172] = {.lex_state = 26, .external_lex_state = 5},
  [173] = {.lex_state = 22},
  [174] = {.lex_state = 28},
  [175] = {.lex_state = 22},
  [176] = {.lex_state = 8},
  [177] = {.lex_state = 21},
  [178] = {.lex_state = 22},
  [179] = {.lex_state = 9, .external_lex_state = 4},
  [180] = {.lex_state = 9, .external_lex_state = 4},
  [181] = {.lex_state = 21},
  [182] = {.lex_state = 8},
  [183] = {.lex_state = 14},
  [184] = {.lex_state = 21},
  [185] = {.lex_state = 14},
  [186] = {.lex_state = 6},
  [187] = {.lex_state = 6},
  [188] = {.lex_state = 1, .external_lex_state = 4},
  [189] = {.lex_state = 1, .external_lex_state = 4},
  [190] = {.lex_state = 1, .external_lex_state = 4},
  [191] = {.lex_state = 1, .external_lex_state = 4},
  [192] = {.lex_state = 1, .external_lex_state = 4},
  [193] = {.lex_state = 23},
  [194] = {.lex_state = 13, .external_lex_state = 4},
  [195] = {.lex_state = 13, .external_lex_state = 4},
  [196] = {.lex_state = 28},
  [197] = {.lex_state = 28},
  [198] = {.lex_state = 28},
  [199] = {.lex_state = 26},
  [200] = {.lex_state = 26},
  [201] = {.lex_state = 26},
  [202] = {.lex_state = 26},
  [203] = {.lex_state = 26},
  [204] = {.lex_state = 24},
  [205] = {.lex_state = 20},
  [206] = {.lex_state = 15},
  [207] = {.lex_state = 20},
  [208] = {.lex_state = 8},
  [209] = {.lex_state = 14},
  [210] = {.lex_state = 21},
  [211] = {.lex_state = 17},
  [212] = {.lex_state = 9, .external_lex_state = 4},
  [213] = {.lex_state = 8},
  [214] = {.lex_state = 9, .external_lex_state = 4},
  [215] = {.lex_state = 14},
  [216] = {.lex_state = 1, .external_lex_state = 6},
  [217] = {.lex_state = 21},
  [218] = {.lex_state = 1, .external_lex_state = 6},
  [219] = {.lex_state = 30},
  [220] = {.lex_state = 17},
  [221] = {.lex_state = 17},
  [222] = {.lex_state = 636},
  [223] = {.lex_state = 28},
  [224] = {.lex_state = 13, .external_lex_state = 4},
  [225] = {.lex_state = 10, .external_lex_state = 4},
  [226] = {.lex_state = 632, .external_lex_state = 4},
  [227] = {.lex_state = 11},
  [228] = {.lex_state = 6},
  [229] = {.lex_state = 1, .external_lex_state = 4},
  [230] = {.lex_state = 6},
  [231] = {.lex_state = 10, .external_lex_state = 4},
  [232] = {.lex_state = 632, .external_lex_state = 4},
  [233] = {.lex_state = 632, .external_lex_state = 4},
  [234] = {.lex_state = 632, .external_lex_state = 4},
  [235] = {.lex_state = 1, .external_lex_state = 4},
  [236] = {.lex_state = 13, .external_lex_state = 4},
  [237] = {.lex_state = 632, .external_lex_state = 4},
  [238] = {.lex_state = 636},
  [239] = {.lex_state = 2, .external_lex_state = 4},
  [240] = {.lex_state = 1, .external_lex_state = 5},
  [241] = {.lex_state = 632, .external_lex_state = 4},
  [242] = {.lex_state = 632, .external_lex_state = 4},
  [243] = {.lex_state = 632, .external_lex_state = 4},
  [244] = {.lex_state = 632, .external_lex_state = 4},
  [245] = {.lex_state = 632, .external_lex_state = 4},
  [246] = {.lex_state = 1, .external_lex_state = 5},
  [247] = {.lex_state = 11},
  [248] = {.lex_state = 28},
  [249] = {.lex_state = 6},
  [250] = {.lex_state = 6},
  [251] = {.lex_state = 14},
  [252] = {.lex_state = 6},
  [253] = {.lex_state = 13, .external_lex_state = 4},
  [254] = {.lex_state = 11},
  [255] = {.lex_state = 632, .external_lex_state = 4},
  [256] = {.lex_state = 13, .external_lex_state = 4},
  [257] = {.lex_state = 1, .external_lex_state = 4},
  [258] = {.lex_state = 6},
  [259] = {.lex_state = 6},
  [260] = {.lex_state = 22},
  [261] = {.lex_state = 26},
  [262] = {.lex_state = 9, .external_lex_state = 4},
  [263] = {.lex_state = 8},
  [264] = {.lex_state = 13, .external_lex_state = 4},
  [265] = {.lex_state = 26},
  [266] = {.lex_state = 632, .external_lex_state = 4},
  [267] = {.lex_state = 636},
  [268] = {.lex_state = 632, .external_lex_state = 4},
  [269] = {.lex_state = 632, .external_lex_state = 4},
  [270] = {.lex_state = 14},
  [271] = {.lex_state = 14},
  [272] = {.lex_state = 14},
  [273] = {.lex_state = 8},
  [274] = {.lex_state = 632, .external_lex_state = 4},
  [275] = {.lex_state = 632, .external_lex_state = 4},
  [276] = {.lex_state = 632, .external_lex_state = 4},
  [277] = {.lex_state = 6},
  [278] = {.lex_state = 22},
  [279] = {.lex_state = 14},
  [280] = {.lex_state = 632, .external_lex_state = 4},
  [281] = {.lex_state = 9, .external_lex_state = 4},
  [282] = {.lex_state = 632, .external_lex_state = 4},
  [283] = {.lex_state = 632, .external_lex_state = 4},
  [284] = {.lex_state = 632, .external_lex_state = 4},
  [285] = {.lex_state = 13, .external_lex_state = 4},
  [286] = {.lex_state = 632, .external_lex_state = 4},
  [287] = {.lex_state = 11},
  [288] = {.lex_state = 632, .external_lex_state = 4},
  [289] = {.lex_state = 632, .external_lex_state = 4},
  [290] = {.lex_state = 1, .external_lex_state = 4},
  [291] = {.lex_state = 13, .external_lex_state = 4},
  [292] = {.lex_state = 632, .external_lex_state = 4},
  [293] = {.lex_state = 632, .external_lex_state = 4},
  [294] = {.lex_state = 6},
  [295] = {.lex_state = 2, .external_lex_state = 4},
  [296] = {.lex_state = 6},
  [297] = {.lex_state = 13, .external_lex_state = 4},
  [298] = {.lex_state = 14},
  [299] = {.lex_state = 14},
  [300] = {.lex_state = 1, .external_lex_state = 4},
  [301] = {.lex_state = 632, .external_lex_state = 4},
  [302] = {.lex_state = 632, .external_lex_state = 4},
  [303] = {.lex_state = 632, .external_lex_state = 4},
  [304] = {.lex_state = 17},
  [305] = {.lex_state = 29},
  [306] = {.lex_state = 25},
  [307] = {.lex_state = 10, .external_lex_state = 4},
  [308] = {.lex_state = 28},
  [309] = {.lex_state = 29},
  [310] = {.lex_state = 22},
  [311] = {.lex_state = 17},
  [312] = {.lex_state = 26},
  [313] = {.lex_state = 26},
  [314] = {.lex_state = 22},
  [315] = {.lex_state = 636},
  [316] = {.lex_state = 636},
  [317] = {.lex_state = 17},
  [318] = {.lex_state = 10, .external_lex_state = 4},
  [319] = {.lex_state = 636},
  [320] = {.lex_state = 21},
  [321] = {.lex_state = 22},
  [322] = {.lex_state = 636},
  [323] = {.lex_state = 636},
  [324] = {.lex_state = 636},
  [325] = {.lex_state = 636},
  [326] = {.lex_state = 636},
  [327] = {.lex_state = 636},
  [328] = {.lex_state = 636},
  [329] = {.lex_state = 26},
  [330] = {.lex_state = 21},
  [331] = {.lex_state = 21},
  [332] = {.lex_state = 21},
  [333] = {.lex_state = 29},
  [334] = {.lex_state = 636},
  [335] = {.lex_state = 22},
  [336] = {.lex_state = 636},
  [337] = {.lex_state = 25},
  [338] = {.lex_state = 22},
  [339] = {.lex_state = 636},
  [340] = {.lex_state = 10, .external_lex_state = 4},
  [341] = {.lex_state = 636},
  [342] = {.lex_state = 28},
  [343] = {.lex_state = 21},
  [344] = {.lex_state = 636},
  [345] = {.lex_state = 636},
  [346] = {.lex_state = 17},
  [347] = {.lex_state = 636},
  [348] = {.lex_state = 32},
  [349] = {.lex_state = 32},
  [350] = {.lex_state = 636},
  [351] = {.lex_state = 24},
  [352] = {.lex_state = 17},
  [353] = {.lex_state = 17},
  [354] = {.lex_state = 636},
  [355] = {.lex_state = 24},
  [356] = {.lex_state = 32},
  [357] = {.lex_state = 25},
  [358] = {.lex_state = 17},
  [359] = {.lex_state = 17},
  [360] = {.lex_state = 636},
  [361] = {.lex_state = 17},
  [362] = {.lex_state = 17},
  [363] = {.lex_state = 29},
  [364] = {.lex_state = 17},
  [365] = {.lex_state = 4, .external_lex_state = 4},
  [366] = {.lex_state = 17},
  [367] = {.lex_state = 32},
  [368] = {.lex_state = 32},
  [369] = {.lex_state = 32},
  [370] = {.lex_state = 17},
  [371] = {.lex_state = 17},
  [372] = {.lex_state = 32},
  [373] = {.lex_state = 636},
  [374] = {.lex_state = 11},
  [375] = {.lex_state = 32},
  [376] = {.lex_state = 32},
  [377] = {.lex_state = 32},
  [378] = {.lex_state = 32},
  [379] = {.lex_state = 17},
  [380] = {.lex_state = 17},
  [381] = {.lex_state = 17},
  [382] = {.lex_state = 17},
  [383] = {.lex_state = 32},
  [384] = {.lex_state = 17},
  [385] = {.lex_state = 17},
  [386] = {.lex_state = 4, .external_lex_state = 4},
  [387] = {.lex_state = 32},
  [388] = {.lex_state = 632, .external_lex_state = 4},
  [389] = {.lex_state = 632, .external_lex_state = 4},
  [390] = {.lex_state = 632, .external_lex_state = 4},
  [391] = {.lex_state = 632, .external_lex_state = 4},
  [392] = {.lex_state = 632, .external_lex_state = 4},
  [393] = {.lex_state = 632, .external_lex_state = 4},
  [394] = {.lex_state = 632, .external_lex_state = 4},
  [395] = {.lex_state = 632, .external_lex_state = 4},
  [396] = {.lex_state = 632, .external_lex_state = 4},
  [397] = {.lex_state = 632, .external_lex_state = 4},
  [398] = {.lex_state = 632, .external_lex_state = 4},
  [399] = {.lex_state = 632, .external_lex_state = 4},
  [400] = {.lex_state = 632, .external_lex_state = 4},
  [401] = {.lex_state = 632, .external_lex_state = 4},
  [402] = {.lex_state = 632, .external_lex_state = 4},
  [403] = {.lex_state = 632, .external_lex_state = 4},
  [404] = {.lex_state = 632, .external_lex_state = 4},
  [405] = {.lex_state = 632, .external_lex_state = 4},
  [406] = {.lex_state = 632, .external_lex_state = 4},
  [407] = {.lex_state = 632, .external_lex_state = 4},
  [408] = {.lex_state = 632, .external_lex_state = 4},
  [409] = {.lex_state = 29},
  [410] = {.lex_state = 632, .external_lex_state = 4},
  [411] = {.lex_state = 632, .external_lex_state = 4},
  [412] = {.lex_state = 632, .external_lex_state = 4},
  [413] = {.lex_state = 632, .external_lex_state = 4},
  [414] = {.lex_state = 632, .external_lex_state = 4},
  [415] = {.lex_state = 632, .external_lex_state = 4},
  [416] = {.lex_state = 632, .external_lex_state = 4},
  [417] = {.lex_state = 17},
  [418] = {.lex_state = 632, .external_lex_state = 4},
  [419] = {.lex_state = 632, .external_lex_state = 4},
  [420] = {.lex_state = 17},
  [421] = {.lex_state = 632, .external_lex_state = 4},
  [422] = {.lex_state = 29},
  [423] = {.lex_state = 29},
  [424] = {.lex_state = 29},
  [425] = {.lex_state = 29},
  [426] = {.lex_state = 632, .external_lex_state = 4},
  [427] = {.lex_state = 632, .external_lex_state = 4},
  [428] = {.lex_state = 29},
  [429] = {.lex_state = 29},
  [430] = {.lex_state = 29},
  [431] = {.lex_state = 29},
  [432] = {.lex_state = 29},
  [433] = {.lex_state = 636},
  [434] = {.lex_state = 636},
  [435] = {.lex_state = 636},
  [436] = {.lex_state = 636},
  [437] = {.lex_state = 632, .external_lex_state = 4},
  [438] = {.lex_state = 632, .external_lex_state = 4},
  [439] = {.lex_state = 636},
  [440] = {.lex_state = 29},
  [441] = {.lex_state = 632, .external_lex_state = 4},
  [442] = {.lex_state = 29},
  [443] = {.lex_state = 636},
  [444] = {.lex_state = 632, .external_lex_state = 4},
  [445] = {.lex_state = 636},
  [446] = {.lex_state = 632, .external_lex_state = 4},
  [447] = {.lex_state = 29},
  [448] = {.lex_state = 632, .external_lex_state = 4},
  [449] = {.lex_state = 632, .external_lex_state = 4},
  [450] = {.lex_state = 632, .external_lex_state = 4},
  [451] = {.lex_state = 632, .external_lex_state = 4},
  [452] = {.lex_state = 632, .external_lex_state = 4},
  [453] = {.lex_state = 632, .external_lex_state = 4},
  [454] = {.lex_state = 636},
  [455] = {.lex_state = 29},
  [456] = {.lex_state = 632, .external_lex_state = 4},
  [457] = {.lex_state = 632, .external_lex_state = 4},
  [458] = {.lex_state = 29},
  [459] = {.lex_state = 632, .external_lex_state = 4},
  [460] = {.lex_state = 632, .external_lex_state = 4},
  [461] = {.lex_state = 33},
  [462] = {.lex_state = 632, .external_lex_state = 4},
  [463] = {.lex_state = 632, .external_lex_state = 4},
  [464] = {.lex_state = 632, .external_lex_state = 4},
  [465] = {.lex_state = 636},
  [466] = {.lex_state = 636},
  [467] = {.lex_state = 632, .external_lex_state = 4},
  [468] = {.lex_state = 632, .external_lex_state = 4},
  [469] = {.lex_state = 632, .external_lex_state = 4},
  [470] = {.lex_state = 636},
  [471] = {.lex_state = 632, .external_lex_state = 4},
  [472] = {.lex_state = 632, .external_lex_state = 4},
  [473] = {.lex_state = 636},
  [474] = {.lex_state = 632, .external_lex_state = 4},
  [475] = {.lex_state = 636},
  [476] = {.lex_state = 29},
  [477] = {.lex_state = 636},
  [478] = {.lex_state = 632, .external_lex_state = 4},
  [479] = {.lex_state = 636},
  [480] = {.lex_state = 636},
  [481] = {.lex_state = 636},
  [482] = {.lex_state = 632, .external_lex_state = 4},
  [483] = {.lex_state = 632, .external_lex_state = 4},
  [484] = {.lex_state = 636},
  [485] = {.lex_state = 632, .external_lex_state = 4},
  [486] = {.lex_state = 29},
  [487] = {.lex_state = 25},
  [488] = {.lex_state = 632, .external_lex_state = 4},
  [489] = {.lex_state = 632, .external_lex_state = 4},
  [490] = {.lex_state = 632, .external_lex_state = 4},
  [491] = {.lex_state = 632, .external_lex_state = 4},
  [492] = {.lex_state = 632, .external_lex_state = 4},
  [493] = {.lex_state = 17},
  [494] = {.lex_state = 632, .external_lex_state = 4},
  [495] = {.lex_state = 632, .external_lex_state = 4},
  [496] = {.lex_state = 33},
  [497] = {.lex_state = 632, .external_lex_state = 4},
  [498] = {.lex_state = 636},
  [499] = {.lex_state = 636},
  [500] = {.lex_state = 632, .external_lex_state = 4},
  [501] = {.lex_state = 636},
  [502] = {.lex_state = 636},
  [503] = {.lex_state = 29},
  [504] = {.lex_state = 29},
  [505] = {.lex_state = 29},
  [506] = {.lex_state = 632, .external_lex_state = 4},
  [507] = {.lex_state = 636},
  [508] = {.lex_state = 632, .external_lex_state = 4},
  [509] = {.lex_state = 632, .external_lex_state = 4},
  [510] = {.lex_state = 636},
  [511] = {.lex_state = 636},
  [512] = {.lex_state = 34},
  [513] = {.lex_state = 17},
  [514] = {.lex_state = 636},
  [515] = {.lex_state = 636},
  [516] = {.lex_state = 636},
  [517] = {.lex_state = 636},
  [518] = {.lex_state = 29},
  [519] = {.lex_state = 1156},
  [520] = {.lex_state = 636},
  [521] = {.lex_state = 31},
  [522] = {.lex_state = 636},
  [523] = {.lex_state = 17},
  [524] = {.lex_state = 636},
  [525] = {.lex_state = 636},
  [526] = {.lex_state = 636},
  [527] = {.lex_state = 636},
  [528] = {.lex_state = 12},
  [529] = {.lex_state = 636},
  [530] = {.lex_state = 636},
  [531] = {.lex_state = 636},
  [532] = {.lex_state = 17},
  [533] = {.lex_state = 636},
  [534] = {.lex_state = 17},
  [535] = {.lex_state = 636},
  [536] = {.lex_state = 17},
  [537] = {.lex_state = 636},
  [538] = {.lex_state = 636},
  [539] = {.lex_state = 636},
  [540] = {.lex_state = 636},
  [541] = {.lex_state = 636},
  [542] = {.lex_state = 636},
  [543] = {.lex_state = 17},
  [544] = {.lex_state = 17},
  [545] = {.lex_state = 34},
  [546] = {.lex_state = 17},
  [547] = {.lex_state = 17},
  [548] = {.lex_state = 35},
  [549] = {.lex_state = 17},
  [550] = {.lex_state = 636},
  [551] = {.lex_state = 636},
  [552] = {.lex_state = 636},
  [553] = {.lex_state = 636},
  [554] = {.lex_state = 632},
  [555] = {.lex_state = 632},
  [556] = {.lex_state = 35},
  [557] = {.lex_state = 636},
  [558] = {.lex_state = 636},
  [559] = {.lex_state = 636},
  [560] = {.lex_state = 636},
  [561] = {.lex_state = 636},
  [562] = {.lex_state = 636},
  [563] = {.lex_state = 636},
  [564] = {.lex_state = 636},
  [565] = {.lex_state = 636},
  [566] = {.lex_state = 636},
  [567] = {.lex_state = 636},
  [568] = {.lex_state = 636},
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
    [anon_sym_BQUOTE] = ACTIONS(1),
    [anon_sym_LBRACE2] = ACTIONS(1),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(1),
    [aux_sym_filename_escaped_char_token1] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACE_LBRACE2] = ACTIONS(1),
    [aux_sym_variable_name_token1] = ACTIONS(1),
    [sym__alphanum] = ACTIONS(1),
    [aux_sym_digit_token1] = ACTIONS(1),
    [aux_sym_hexdigit_token1] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_e] = ACTIONS(1),
    [anon_sym_E] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [anon_sym_SLASH] = ACTIONS(1),
    [sym__eof] = ACTIONS(1),
    [sym__json_array_start] = ACTIONS(1),
    [sym__bracketed_key_start] = ACTIONS(1),
    [sym__error_sentinel] = ACTIONS(1),
  },
  [1] = {
    [sym_hurl_file] = STATE(557),
    [sym_entry] = STATE(87),
    [sym__comment_or_new_line] = STATE(97),
    [sym_request] = STATE(84),
    [sym_method] = STATE(149),
    [aux_sym_hurl_file_repeat1] = STATE(87),
    [aux_sym_hurl_file_repeat2] = STATE(97),
    [aux_sym__comment_or_new_line_repeat1] = STATE(106),
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
    [sym_option] = STATE(255),
    [sym_ca_certificate_option] = STATE(426),
    [sym_cert_option] = STATE(426),
    [sym_boolean_option] = STATE(426),
    [sym_boolean_option_key] = STATE(566),
    [sym_integer_option] = STATE(426),
    [sym_integer_option_key] = STATE(567),
    [sym_duration_option] = STATE(426),
    [sym_duration_option_key] = STATE(568),
    [sym_string_option] = STATE(426),
    [sym_string_option_key] = STATE(522),
    [sym_variable_option] = STATE(426),
    [aux_sym_options_section_repeat1] = STATE(4),
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
    [anon_sym_BQUOTE] = ACTIONS(15),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(15),
    [sym__json_number] = ACTIONS(15),
    [anon_sym_true] = ACTIONS(15),
    [anon_sym_false] = ACTIONS(15),
    [anon_sym_LBRACE_LBRACE2] = ACTIONS(15),
    [sym_comment] = ACTIONS(15),
    [sym__json_array_start] = ACTIONS(13),
  },
  [3] = {
    [sym_option] = STATE(255),
    [sym_ca_certificate_option] = STATE(426),
    [sym_cert_option] = STATE(426),
    [sym_boolean_option] = STATE(426),
    [sym_boolean_option_key] = STATE(566),
    [sym_integer_option] = STATE(426),
    [sym_integer_option_key] = STATE(567),
    [sym_duration_option] = STATE(426),
    [sym_duration_option_key] = STATE(568),
    [sym_string_option] = STATE(426),
    [sym_string_option_key] = STATE(522),
    [sym_variable_option] = STATE(426),
    [aux_sym_options_section_repeat1] = STATE(2),
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
    [anon_sym_cacert] = ACTIONS(17),
    [anon_sym_cert] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(33),
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
    [anon_sym_LT] = ACTIONS(33),
    [anon_sym_LT_QMARK] = ACTIONS(33),
    [anon_sym_base64_COMMA] = ACTIONS(33),
    [anon_sym_hex_COMMA] = ACTIONS(33),
    [anon_sym_DQUOTE] = ACTIONS(33),
    [anon_sym_BQUOTE] = ACTIONS(33),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(33),
    [sym__json_number] = ACTIONS(33),
    [anon_sym_true] = ACTIONS(33),
    [anon_sym_false] = ACTIONS(33),
    [anon_sym_LBRACE_LBRACE2] = ACTIONS(33),
    [sym_comment] = ACTIONS(33),
    [sym__json_array_start] = ACTIONS(31),
  },
  [4] = {
    [sym_option] = STATE(255),
    [sym_ca_certificate_option] = STATE(426),
    [sym_cert_option] = STATE(426),
    [sym_boolean_option] = STATE(426),
    [sym_boolean_option_key] = STATE(566),
    [sym_integer_option] = STATE(426),
    [sym_integer_option_key] = STATE(567),
    [sym_duration_option] = STATE(426),
    [sym_duration_option_key] = STATE(568),
    [sym_string_option] = STATE(426),
    [sym_string_option_key] = STATE(522),
    [sym_variable_option] = STATE(426),
    [aux_sym_options_section_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(35),
    [anon_sym_LF] = ACTIONS(35),
    [anon_sym_GET] = ACTIONS(37),
    [anon_sym_HEAD] = ACTIONS(37),
    [anon_sym_POST] = ACTIONS(37),
    [anon_sym_PUT] = ACTIONS(37),
    [anon_sym_DELETE] = ACTIONS(37),
    [anon_sym_CONNECT] = ACTIONS(37),
    [anon_sym_OPTIONS] = ACTIONS(37),
    [anon_sym_TRACE] = ACTIONS(37),
    [anon_sym_PATCH] = ACTIONS(37),
    [anon_sym_LINK] = ACTIONS(37),
    [anon_sym_UNLINK] = ACTIONS(37),
    [anon_sym_PURGE] = ACTIONS(37),
    [anon_sym_LOCK] = ACTIONS(37),
    [anon_sym_UNLOCK] = ACTIONS(37),
    [anon_sym_PROPFIND] = ACTIONS(37),
    [anon_sym_VIEW] = ACTIONS(37),
    [aux_sym_method_token1] = ACTIONS(37),
    [anon_sym_HTTP_SLASH1_DOT0] = ACTIONS(37),
    [anon_sym_HTTP_SLASH1_DOT1] = ACTIONS(37),
    [anon_sym_HTTP_SLASH2] = ACTIONS(37),
    [anon_sym_HTTP_SLASH3] = ACTIONS(37),
    [anon_sym_HTTP_SLASH_STAR] = ACTIONS(37),
    [anon_sym_HTTP] = ACTIONS(37),
    [anon_sym_LBRACKBasicAuth_RBRACK] = ACTIONS(37),
    [anon_sym_LBRACKQuery_RBRACK] = ACTIONS(37),
    [anon_sym_LBRACKQueryStringParams_RBRACK] = ACTIONS(37),
    [anon_sym_LBRACKForm_RBRACK] = ACTIONS(37),
    [anon_sym_LBRACKFormParams_RBRACK] = ACTIONS(37),
    [anon_sym_LBRACKMultipart_RBRACK] = ACTIONS(37),
    [anon_sym_LBRACKMultipartFormData_RBRACK] = ACTIONS(37),
    [anon_sym_LBRACKCookies_RBRACK] = ACTIONS(37),
    [anon_sym_LBRACKOptions_RBRACK] = ACTIONS(37),
    [anon_sym_null] = ACTIONS(37),
    [anon_sym_file_COMMA] = ACTIONS(37),
    [anon_sym_cacert] = ACTIONS(39),
    [anon_sym_cert] = ACTIONS(42),
    [anon_sym_LBRACE] = ACTIONS(37),
    [anon_sym_compressed] = ACTIONS(45),
    [anon_sym_location] = ACTIONS(45),
    [anon_sym_location_DASHtrusted] = ACTIONS(45),
    [anon_sym_http1_DOT0] = ACTIONS(45),
    [anon_sym_http2] = ACTIONS(45),
    [anon_sym_http3] = ACTIONS(45),
    [anon_sym_insecure] = ACTIONS(45),
    [anon_sym_ipv4] = ACTIONS(45),
    [anon_sym_ipv6] = ACTIONS(45),
    [anon_sym_netrc] = ACTIONS(45),
    [anon_sym_netrc_DASHoptional] = ACTIONS(45),
    [anon_sym_path_DASHas_DASHis] = ACTIONS(45),
    [anon_sym_skip] = ACTIONS(45),
    [anon_sym_verbose] = ACTIONS(45),
    [anon_sym_very_DASHverbose] = ACTIONS(45),
    [anon_sym_max_DASHredirs] = ACTIONS(48),
    [anon_sym_retry_DASHmax_DASHcount] = ACTIONS(48),
    [anon_sym_limit_DASHrate] = ACTIONS(48),
    [anon_sym_max_DASHtime] = ACTIONS(48),
    [anon_sym_repeat] = ACTIONS(48),
    [anon_sym_retry] = ACTIONS(48),
    [anon_sym_connect_DASHtimeout] = ACTIONS(51),
    [anon_sym_delay] = ACTIONS(51),
    [anon_sym_retry_DASHinterval] = ACTIONS(51),
    [anon_sym_aws_DASHsigv4] = ACTIONS(54),
    [anon_sym_key] = ACTIONS(54),
    [anon_sym_connect_DASHto] = ACTIONS(54),
    [anon_sym_header] = ACTIONS(54),
    [anon_sym_netrc_DASHfile] = ACTIONS(54),
    [anon_sym_output] = ACTIONS(54),
    [anon_sym_pinnedpubkey] = ACTIONS(54),
    [anon_sym_proxy] = ACTIONS(54),
    [anon_sym_unix_DASHsocket] = ACTIONS(54),
    [anon_sym_user] = ACTIONS(54),
    [anon_sym_variable] = ACTIONS(57),
    [anon_sym_LT] = ACTIONS(37),
    [anon_sym_LT_QMARK] = ACTIONS(37),
    [anon_sym_base64_COMMA] = ACTIONS(37),
    [anon_sym_hex_COMMA] = ACTIONS(37),
    [anon_sym_DQUOTE] = ACTIONS(37),
    [anon_sym_BQUOTE] = ACTIONS(37),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(37),
    [sym__json_number] = ACTIONS(37),
    [anon_sym_true] = ACTIONS(37),
    [anon_sym_false] = ACTIONS(37),
    [anon_sym_LBRACE_LBRACE2] = ACTIONS(37),
    [sym_comment] = ACTIONS(37),
    [sym__json_array_start] = ACTIONS(35),
  },
  [5] = {
    [sym_header] = STATE(7),
    [sym_body] = STATE(95),
    [sym_request_section] = STATE(14),
    [sym_basic_auth_section] = STATE(48),
    [sym_query_string_params_section] = STATE(48),
    [sym_form_params_section] = STATE(48),
    [sym_multipart_form_data_section] = STATE(48),
    [sym_cookies_section] = STATE(48),
    [sym_options_section] = STATE(48),
    [sym_key_value] = STATE(276),
    [sym_bytes] = STATE(275),
    [sym_xml] = STATE(490),
    [sym_xml_prolog_tag] = STATE(221),
    [sym_xml_tag] = STATE(489),
    [sym_xml_self_closing_tag] = STATE(488),
    [sym_xml_open_tag] = STATE(150),
    [sym_oneline_base64] = STATE(490),
    [sym_oneline_file] = STATE(490),
    [sym_oneline_hex] = STATE(490),
    [sym_key_string] = STATE(526),
    [sym__bracketed_key_content] = STATE(203),
    [sym__key_template] = STATE(201),
    [sym_key_string_content] = STATE(203),
    [sym_oneline_string] = STATE(490),
    [sym_multiline_string] = STATE(490),
    [sym_json_value] = STATE(490),
    [sym_json_object] = STATE(497),
    [sym_json_array] = STATE(497),
    [sym_json_string] = STATE(497),
    [sym_json_number] = STATE(497),
    [sym_json_boolean] = STATE(497),
    [sym_template] = STATE(497),
    [aux_sym_request_repeat1] = STATE(7),
    [aux_sym_request_repeat2] = STATE(14),
    [aux_sym_xml_repeat1] = STATE(221),
    [aux_sym_key_string_content_repeat1] = STATE(261),
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
    [anon_sym_LBRACE] = ACTIONS(80),
    [anon_sym_LT] = ACTIONS(82),
    [anon_sym_LT_QMARK] = ACTIONS(84),
    [anon_sym_base64_COMMA] = ACTIONS(86),
    [anon_sym_hex_COMMA] = ACTIONS(88),
    [anon_sym_DQUOTE] = ACTIONS(90),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(92),
    [sym_key_string_text] = ACTIONS(94),
    [sym_key_string_escaped_char] = ACTIONS(96),
    [anon_sym_BQUOTE] = ACTIONS(98),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(100),
    [sym__json_number] = ACTIONS(102),
    [anon_sym_true] = ACTIONS(104),
    [anon_sym_false] = ACTIONS(104),
    [anon_sym_LBRACE_LBRACE2] = ACTIONS(106),
    [sym_comment] = ACTIONS(62),
    [sym__json_array_start] = ACTIONS(108),
    [sym__bracketed_key_start] = ACTIONS(110),
  },
  [6] = {
    [sym_header] = STATE(8),
    [sym_body] = STATE(93),
    [sym_request_section] = STATE(12),
    [sym_basic_auth_section] = STATE(48),
    [sym_query_string_params_section] = STATE(48),
    [sym_form_params_section] = STATE(48),
    [sym_multipart_form_data_section] = STATE(48),
    [sym_cookies_section] = STATE(48),
    [sym_options_section] = STATE(48),
    [sym_key_value] = STATE(276),
    [sym_bytes] = STATE(275),
    [sym_xml] = STATE(490),
    [sym_xml_prolog_tag] = STATE(221),
    [sym_xml_tag] = STATE(489),
    [sym_xml_self_closing_tag] = STATE(488),
    [sym_xml_open_tag] = STATE(150),
    [sym_oneline_base64] = STATE(490),
    [sym_oneline_file] = STATE(490),
    [sym_oneline_hex] = STATE(490),
    [sym_key_string] = STATE(526),
    [sym__bracketed_key_content] = STATE(203),
    [sym__key_template] = STATE(201),
    [sym_key_string_content] = STATE(203),
    [sym_oneline_string] = STATE(490),
    [sym_multiline_string] = STATE(490),
    [sym_json_value] = STATE(490),
    [sym_json_object] = STATE(497),
    [sym_json_array] = STATE(497),
    [sym_json_string] = STATE(497),
    [sym_json_number] = STATE(497),
    [sym_json_boolean] = STATE(497),
    [sym_template] = STATE(497),
    [aux_sym_request_repeat1] = STATE(8),
    [aux_sym_request_repeat2] = STATE(12),
    [aux_sym_xml_repeat1] = STATE(221),
    [aux_sym_key_string_content_repeat1] = STATE(261),
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
    [anon_sym_LBRACE] = ACTIONS(80),
    [anon_sym_LT] = ACTIONS(82),
    [anon_sym_LT_QMARK] = ACTIONS(84),
    [anon_sym_base64_COMMA] = ACTIONS(86),
    [anon_sym_hex_COMMA] = ACTIONS(88),
    [anon_sym_DQUOTE] = ACTIONS(90),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(92),
    [sym_key_string_text] = ACTIONS(94),
    [sym_key_string_escaped_char] = ACTIONS(96),
    [anon_sym_BQUOTE] = ACTIONS(98),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(100),
    [sym__json_number] = ACTIONS(102),
    [anon_sym_true] = ACTIONS(104),
    [anon_sym_false] = ACTIONS(104),
    [anon_sym_LBRACE_LBRACE2] = ACTIONS(106),
    [sym_comment] = ACTIONS(114),
    [sym__json_array_start] = ACTIONS(108),
    [sym__bracketed_key_start] = ACTIONS(110),
  },
  [7] = {
    [sym_header] = STATE(22),
    [sym_body] = STATE(93),
    [sym_request_section] = STATE(12),
    [sym_basic_auth_section] = STATE(48),
    [sym_query_string_params_section] = STATE(48),
    [sym_form_params_section] = STATE(48),
    [sym_multipart_form_data_section] = STATE(48),
    [sym_cookies_section] = STATE(48),
    [sym_options_section] = STATE(48),
    [sym_key_value] = STATE(276),
    [sym_bytes] = STATE(275),
    [sym_xml] = STATE(490),
    [sym_xml_prolog_tag] = STATE(221),
    [sym_xml_tag] = STATE(489),
    [sym_xml_self_closing_tag] = STATE(488),
    [sym_xml_open_tag] = STATE(150),
    [sym_oneline_base64] = STATE(490),
    [sym_oneline_file] = STATE(490),
    [sym_oneline_hex] = STATE(490),
    [sym_key_string] = STATE(526),
    [sym__bracketed_key_content] = STATE(203),
    [sym__key_template] = STATE(201),
    [sym_key_string_content] = STATE(203),
    [sym_oneline_string] = STATE(490),
    [sym_multiline_string] = STATE(490),
    [sym_json_value] = STATE(490),
    [sym_json_object] = STATE(497),
    [sym_json_array] = STATE(497),
    [sym_json_string] = STATE(497),
    [sym_json_number] = STATE(497),
    [sym_json_boolean] = STATE(497),
    [sym_template] = STATE(497),
    [aux_sym_request_repeat1] = STATE(22),
    [aux_sym_request_repeat2] = STATE(12),
    [aux_sym_xml_repeat1] = STATE(221),
    [aux_sym_key_string_content_repeat1] = STATE(261),
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
    [anon_sym_LBRACE] = ACTIONS(80),
    [anon_sym_LT] = ACTIONS(82),
    [anon_sym_LT_QMARK] = ACTIONS(84),
    [anon_sym_base64_COMMA] = ACTIONS(86),
    [anon_sym_hex_COMMA] = ACTIONS(88),
    [anon_sym_DQUOTE] = ACTIONS(90),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(92),
    [sym_key_string_text] = ACTIONS(94),
    [sym_key_string_escaped_char] = ACTIONS(96),
    [anon_sym_BQUOTE] = ACTIONS(98),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(100),
    [sym__json_number] = ACTIONS(102),
    [anon_sym_true] = ACTIONS(104),
    [anon_sym_false] = ACTIONS(104),
    [anon_sym_LBRACE_LBRACE2] = ACTIONS(106),
    [sym_comment] = ACTIONS(114),
    [sym__json_array_start] = ACTIONS(108),
    [sym__bracketed_key_start] = ACTIONS(110),
  },
  [8] = {
    [sym_header] = STATE(22),
    [sym_body] = STATE(92),
    [sym_request_section] = STATE(13),
    [sym_basic_auth_section] = STATE(48),
    [sym_query_string_params_section] = STATE(48),
    [sym_form_params_section] = STATE(48),
    [sym_multipart_form_data_section] = STATE(48),
    [sym_cookies_section] = STATE(48),
    [sym_options_section] = STATE(48),
    [sym_key_value] = STATE(276),
    [sym_bytes] = STATE(275),
    [sym_xml] = STATE(490),
    [sym_xml_prolog_tag] = STATE(221),
    [sym_xml_tag] = STATE(489),
    [sym_xml_self_closing_tag] = STATE(488),
    [sym_xml_open_tag] = STATE(150),
    [sym_oneline_base64] = STATE(490),
    [sym_oneline_file] = STATE(490),
    [sym_oneline_hex] = STATE(490),
    [sym_key_string] = STATE(526),
    [sym__bracketed_key_content] = STATE(203),
    [sym__key_template] = STATE(201),
    [sym_key_string_content] = STATE(203),
    [sym_oneline_string] = STATE(490),
    [sym_multiline_string] = STATE(490),
    [sym_json_value] = STATE(490),
    [sym_json_object] = STATE(497),
    [sym_json_array] = STATE(497),
    [sym_json_string] = STATE(497),
    [sym_json_number] = STATE(497),
    [sym_json_boolean] = STATE(497),
    [sym_template] = STATE(497),
    [aux_sym_request_repeat1] = STATE(22),
    [aux_sym_request_repeat2] = STATE(13),
    [aux_sym_xml_repeat1] = STATE(221),
    [aux_sym_key_string_content_repeat1] = STATE(261),
    [ts_builtin_sym_end] = ACTIONS(116),
    [anon_sym_LF] = ACTIONS(116),
    [anon_sym_GET] = ACTIONS(118),
    [anon_sym_HEAD] = ACTIONS(118),
    [anon_sym_POST] = ACTIONS(118),
    [anon_sym_PUT] = ACTIONS(118),
    [anon_sym_DELETE] = ACTIONS(118),
    [anon_sym_CONNECT] = ACTIONS(118),
    [anon_sym_OPTIONS] = ACTIONS(118),
    [anon_sym_TRACE] = ACTIONS(118),
    [anon_sym_PATCH] = ACTIONS(118),
    [anon_sym_LINK] = ACTIONS(118),
    [anon_sym_UNLINK] = ACTIONS(118),
    [anon_sym_PURGE] = ACTIONS(118),
    [anon_sym_LOCK] = ACTIONS(118),
    [anon_sym_UNLOCK] = ACTIONS(118),
    [anon_sym_PROPFIND] = ACTIONS(118),
    [anon_sym_VIEW] = ACTIONS(118),
    [aux_sym_method_token1] = ACTIONS(118),
    [anon_sym_HTTP_SLASH1_DOT0] = ACTIONS(118),
    [anon_sym_HTTP_SLASH1_DOT1] = ACTIONS(118),
    [anon_sym_HTTP_SLASH2] = ACTIONS(118),
    [anon_sym_HTTP_SLASH3] = ACTIONS(118),
    [anon_sym_HTTP_SLASH_STAR] = ACTIONS(118),
    [anon_sym_HTTP] = ACTIONS(118),
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
    [anon_sym_LBRACE] = ACTIONS(80),
    [anon_sym_LT] = ACTIONS(82),
    [anon_sym_LT_QMARK] = ACTIONS(84),
    [anon_sym_base64_COMMA] = ACTIONS(86),
    [anon_sym_hex_COMMA] = ACTIONS(88),
    [anon_sym_DQUOTE] = ACTIONS(90),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(92),
    [sym_key_string_text] = ACTIONS(94),
    [sym_key_string_escaped_char] = ACTIONS(96),
    [anon_sym_BQUOTE] = ACTIONS(98),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(100),
    [sym__json_number] = ACTIONS(102),
    [anon_sym_true] = ACTIONS(104),
    [anon_sym_false] = ACTIONS(104),
    [anon_sym_LBRACE_LBRACE2] = ACTIONS(106),
    [sym_comment] = ACTIONS(118),
    [sym__json_array_start] = ACTIONS(108),
    [sym__bracketed_key_start] = ACTIONS(110),
  },
  [9] = {
    [aux_sym__comment_or_new_line_repeat1] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(120),
    [anon_sym_LF] = ACTIONS(122),
    [anon_sym_GET] = ACTIONS(125),
    [anon_sym_HEAD] = ACTIONS(125),
    [anon_sym_POST] = ACTIONS(125),
    [anon_sym_PUT] = ACTIONS(125),
    [anon_sym_DELETE] = ACTIONS(125),
    [anon_sym_CONNECT] = ACTIONS(125),
    [anon_sym_OPTIONS] = ACTIONS(125),
    [anon_sym_TRACE] = ACTIONS(125),
    [anon_sym_PATCH] = ACTIONS(125),
    [anon_sym_LINK] = ACTIONS(125),
    [anon_sym_UNLINK] = ACTIONS(125),
    [anon_sym_PURGE] = ACTIONS(125),
    [anon_sym_LOCK] = ACTIONS(125),
    [anon_sym_UNLOCK] = ACTIONS(125),
    [anon_sym_PROPFIND] = ACTIONS(125),
    [anon_sym_VIEW] = ACTIONS(125),
    [aux_sym_method_token1] = ACTIONS(125),
    [anon_sym_HTTP_SLASH1_DOT0] = ACTIONS(125),
    [anon_sym_HTTP_SLASH1_DOT1] = ACTIONS(125),
    [anon_sym_HTTP_SLASH2] = ACTIONS(125),
    [anon_sym_HTTP_SLASH3] = ACTIONS(125),
    [anon_sym_HTTP_SLASH_STAR] = ACTIONS(125),
    [anon_sym_HTTP] = ACTIONS(125),
    [anon_sym_LBRACKBasicAuth_RBRACK] = ACTIONS(125),
    [anon_sym_LBRACKQuery_RBRACK] = ACTIONS(125),
    [anon_sym_LBRACKQueryStringParams_RBRACK] = ACTIONS(125),
    [anon_sym_LBRACKForm_RBRACK] = ACTIONS(125),
    [anon_sym_LBRACKFormParams_RBRACK] = ACTIONS(125),
    [anon_sym_LBRACKMultipart_RBRACK] = ACTIONS(125),
    [anon_sym_LBRACKMultipartFormData_RBRACK] = ACTIONS(125),
    [anon_sym_LBRACKCookies_RBRACK] = ACTIONS(125),
    [anon_sym_LBRACKOptions_RBRACK] = ACTIONS(125),
    [anon_sym_null] = ACTIONS(125),
    [anon_sym_file_COMMA] = ACTIONS(125),
    [anon_sym_cacert] = ACTIONS(125),
    [anon_sym_cert] = ACTIONS(125),
    [anon_sym_LBRACE] = ACTIONS(125),
    [anon_sym_compressed] = ACTIONS(125),
    [anon_sym_location] = ACTIONS(125),
    [anon_sym_location_DASHtrusted] = ACTIONS(125),
    [anon_sym_http1_DOT0] = ACTIONS(125),
    [anon_sym_http2] = ACTIONS(125),
    [anon_sym_http3] = ACTIONS(125),
    [anon_sym_insecure] = ACTIONS(125),
    [anon_sym_ipv4] = ACTIONS(125),
    [anon_sym_ipv6] = ACTIONS(125),
    [anon_sym_netrc] = ACTIONS(125),
    [anon_sym_netrc_DASHoptional] = ACTIONS(125),
    [anon_sym_path_DASHas_DASHis] = ACTIONS(125),
    [anon_sym_skip] = ACTIONS(125),
    [anon_sym_verbose] = ACTIONS(125),
    [anon_sym_very_DASHverbose] = ACTIONS(125),
    [anon_sym_max_DASHredirs] = ACTIONS(125),
    [anon_sym_retry_DASHmax_DASHcount] = ACTIONS(125),
    [anon_sym_limit_DASHrate] = ACTIONS(125),
    [anon_sym_max_DASHtime] = ACTIONS(125),
    [anon_sym_repeat] = ACTIONS(125),
    [anon_sym_retry] = ACTIONS(125),
    [anon_sym_connect_DASHtimeout] = ACTIONS(125),
    [anon_sym_delay] = ACTIONS(125),
    [anon_sym_retry_DASHinterval] = ACTIONS(125),
    [anon_sym_aws_DASHsigv4] = ACTIONS(125),
    [anon_sym_key] = ACTIONS(125),
    [anon_sym_connect_DASHto] = ACTIONS(125),
    [anon_sym_header] = ACTIONS(125),
    [anon_sym_netrc_DASHfile] = ACTIONS(125),
    [anon_sym_output] = ACTIONS(125),
    [anon_sym_pinnedpubkey] = ACTIONS(125),
    [anon_sym_proxy] = ACTIONS(125),
    [anon_sym_unix_DASHsocket] = ACTIONS(125),
    [anon_sym_user] = ACTIONS(125),
    [anon_sym_variable] = ACTIONS(125),
    [anon_sym_LT] = ACTIONS(125),
    [anon_sym_LT_QMARK] = ACTIONS(125),
    [anon_sym_base64_COMMA] = ACTIONS(125),
    [anon_sym_hex_COMMA] = ACTIONS(125),
    [anon_sym_DQUOTE] = ACTIONS(125),
    [anon_sym_BQUOTE] = ACTIONS(125),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(125),
    [sym__json_number] = ACTIONS(125),
    [anon_sym_true] = ACTIONS(125),
    [anon_sym_false] = ACTIONS(125),
    [anon_sym_LBRACE_LBRACE2] = ACTIONS(125),
    [sym_comment] = ACTIONS(127),
    [sym__json_array_start] = ACTIONS(120),
  },
  [10] = {
    [aux_sym__comment_or_new_line_repeat1] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(130),
    [anon_sym_LF] = ACTIONS(132),
    [anon_sym_GET] = ACTIONS(134),
    [anon_sym_HEAD] = ACTIONS(134),
    [anon_sym_POST] = ACTIONS(134),
    [anon_sym_PUT] = ACTIONS(134),
    [anon_sym_DELETE] = ACTIONS(134),
    [anon_sym_CONNECT] = ACTIONS(134),
    [anon_sym_OPTIONS] = ACTIONS(134),
    [anon_sym_TRACE] = ACTIONS(134),
    [anon_sym_PATCH] = ACTIONS(134),
    [anon_sym_LINK] = ACTIONS(134),
    [anon_sym_UNLINK] = ACTIONS(134),
    [anon_sym_PURGE] = ACTIONS(134),
    [anon_sym_LOCK] = ACTIONS(134),
    [anon_sym_UNLOCK] = ACTIONS(134),
    [anon_sym_PROPFIND] = ACTIONS(134),
    [anon_sym_VIEW] = ACTIONS(134),
    [aux_sym_method_token1] = ACTIONS(134),
    [anon_sym_HTTP_SLASH1_DOT0] = ACTIONS(134),
    [anon_sym_HTTP_SLASH1_DOT1] = ACTIONS(134),
    [anon_sym_HTTP_SLASH2] = ACTIONS(134),
    [anon_sym_HTTP_SLASH3] = ACTIONS(134),
    [anon_sym_HTTP_SLASH_STAR] = ACTIONS(134),
    [anon_sym_HTTP] = ACTIONS(134),
    [anon_sym_LBRACKBasicAuth_RBRACK] = ACTIONS(134),
    [anon_sym_LBRACKQuery_RBRACK] = ACTIONS(134),
    [anon_sym_LBRACKQueryStringParams_RBRACK] = ACTIONS(134),
    [anon_sym_LBRACKForm_RBRACK] = ACTIONS(134),
    [anon_sym_LBRACKFormParams_RBRACK] = ACTIONS(134),
    [anon_sym_LBRACKMultipart_RBRACK] = ACTIONS(134),
    [anon_sym_LBRACKMultipartFormData_RBRACK] = ACTIONS(134),
    [anon_sym_LBRACKCookies_RBRACK] = ACTIONS(134),
    [anon_sym_LBRACKOptions_RBRACK] = ACTIONS(134),
    [anon_sym_null] = ACTIONS(134),
    [anon_sym_file_COMMA] = ACTIONS(134),
    [anon_sym_cacert] = ACTIONS(134),
    [anon_sym_cert] = ACTIONS(134),
    [anon_sym_LBRACE] = ACTIONS(134),
    [anon_sym_compressed] = ACTIONS(134),
    [anon_sym_location] = ACTIONS(134),
    [anon_sym_location_DASHtrusted] = ACTIONS(134),
    [anon_sym_http1_DOT0] = ACTIONS(134),
    [anon_sym_http2] = ACTIONS(134),
    [anon_sym_http3] = ACTIONS(134),
    [anon_sym_insecure] = ACTIONS(134),
    [anon_sym_ipv4] = ACTIONS(134),
    [anon_sym_ipv6] = ACTIONS(134),
    [anon_sym_netrc] = ACTIONS(134),
    [anon_sym_netrc_DASHoptional] = ACTIONS(134),
    [anon_sym_path_DASHas_DASHis] = ACTIONS(134),
    [anon_sym_skip] = ACTIONS(134),
    [anon_sym_verbose] = ACTIONS(134),
    [anon_sym_very_DASHverbose] = ACTIONS(134),
    [anon_sym_max_DASHredirs] = ACTIONS(134),
    [anon_sym_retry_DASHmax_DASHcount] = ACTIONS(134),
    [anon_sym_limit_DASHrate] = ACTIONS(134),
    [anon_sym_max_DASHtime] = ACTIONS(134),
    [anon_sym_repeat] = ACTIONS(134),
    [anon_sym_retry] = ACTIONS(134),
    [anon_sym_connect_DASHtimeout] = ACTIONS(134),
    [anon_sym_delay] = ACTIONS(134),
    [anon_sym_retry_DASHinterval] = ACTIONS(134),
    [anon_sym_aws_DASHsigv4] = ACTIONS(134),
    [anon_sym_key] = ACTIONS(134),
    [anon_sym_connect_DASHto] = ACTIONS(134),
    [anon_sym_header] = ACTIONS(134),
    [anon_sym_netrc_DASHfile] = ACTIONS(134),
    [anon_sym_output] = ACTIONS(134),
    [anon_sym_pinnedpubkey] = ACTIONS(134),
    [anon_sym_proxy] = ACTIONS(134),
    [anon_sym_unix_DASHsocket] = ACTIONS(134),
    [anon_sym_user] = ACTIONS(134),
    [anon_sym_variable] = ACTIONS(134),
    [anon_sym_LT] = ACTIONS(134),
    [anon_sym_LT_QMARK] = ACTIONS(134),
    [anon_sym_base64_COMMA] = ACTIONS(134),
    [anon_sym_hex_COMMA] = ACTIONS(134),
    [anon_sym_DQUOTE] = ACTIONS(134),
    [anon_sym_BQUOTE] = ACTIONS(134),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(134),
    [sym__json_number] = ACTIONS(134),
    [anon_sym_true] = ACTIONS(134),
    [anon_sym_false] = ACTIONS(134),
    [anon_sym_LBRACE_LBRACE2] = ACTIONS(134),
    [sym_comment] = ACTIONS(136),
    [sym__json_array_start] = ACTIONS(130),
  },
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(35),
    [anon_sym_LF] = ACTIONS(35),
    [anon_sym_GET] = ACTIONS(37),
    [anon_sym_HEAD] = ACTIONS(37),
    [anon_sym_POST] = ACTIONS(37),
    [anon_sym_PUT] = ACTIONS(37),
    [anon_sym_DELETE] = ACTIONS(37),
    [anon_sym_CONNECT] = ACTIONS(37),
    [anon_sym_OPTIONS] = ACTIONS(37),
    [anon_sym_TRACE] = ACTIONS(37),
    [anon_sym_PATCH] = ACTIONS(37),
    [anon_sym_LINK] = ACTIONS(37),
    [anon_sym_UNLINK] = ACTIONS(37),
    [anon_sym_PURGE] = ACTIONS(37),
    [anon_sym_LOCK] = ACTIONS(37),
    [anon_sym_UNLOCK] = ACTIONS(37),
    [anon_sym_PROPFIND] = ACTIONS(37),
    [anon_sym_VIEW] = ACTIONS(37),
    [aux_sym_method_token1] = ACTIONS(37),
    [anon_sym_HTTP_SLASH1_DOT0] = ACTIONS(37),
    [anon_sym_HTTP_SLASH1_DOT1] = ACTIONS(37),
    [anon_sym_HTTP_SLASH2] = ACTIONS(37),
    [anon_sym_HTTP_SLASH3] = ACTIONS(37),
    [anon_sym_HTTP_SLASH_STAR] = ACTIONS(37),
    [anon_sym_HTTP] = ACTIONS(37),
    [anon_sym_LBRACKBasicAuth_RBRACK] = ACTIONS(37),
    [anon_sym_LBRACKQuery_RBRACK] = ACTIONS(37),
    [anon_sym_LBRACKQueryStringParams_RBRACK] = ACTIONS(37),
    [anon_sym_LBRACKForm_RBRACK] = ACTIONS(37),
    [anon_sym_LBRACKFormParams_RBRACK] = ACTIONS(37),
    [anon_sym_LBRACKMultipart_RBRACK] = ACTIONS(37),
    [anon_sym_LBRACKMultipartFormData_RBRACK] = ACTIONS(37),
    [anon_sym_LBRACKCookies_RBRACK] = ACTIONS(37),
    [anon_sym_LBRACKOptions_RBRACK] = ACTIONS(37),
    [anon_sym_null] = ACTIONS(37),
    [anon_sym_file_COMMA] = ACTIONS(37),
    [anon_sym_cacert] = ACTIONS(37),
    [anon_sym_cert] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(37),
    [anon_sym_compressed] = ACTIONS(37),
    [anon_sym_location] = ACTIONS(37),
    [anon_sym_location_DASHtrusted] = ACTIONS(37),
    [anon_sym_http1_DOT0] = ACTIONS(37),
    [anon_sym_http2] = ACTIONS(37),
    [anon_sym_http3] = ACTIONS(37),
    [anon_sym_insecure] = ACTIONS(37),
    [anon_sym_ipv4] = ACTIONS(37),
    [anon_sym_ipv6] = ACTIONS(37),
    [anon_sym_netrc] = ACTIONS(37),
    [anon_sym_netrc_DASHoptional] = ACTIONS(37),
    [anon_sym_path_DASHas_DASHis] = ACTIONS(37),
    [anon_sym_skip] = ACTIONS(37),
    [anon_sym_verbose] = ACTIONS(37),
    [anon_sym_very_DASHverbose] = ACTIONS(37),
    [anon_sym_max_DASHredirs] = ACTIONS(37),
    [anon_sym_retry_DASHmax_DASHcount] = ACTIONS(37),
    [anon_sym_limit_DASHrate] = ACTIONS(37),
    [anon_sym_max_DASHtime] = ACTIONS(37),
    [anon_sym_repeat] = ACTIONS(37),
    [anon_sym_retry] = ACTIONS(37),
    [anon_sym_connect_DASHtimeout] = ACTIONS(37),
    [anon_sym_delay] = ACTIONS(37),
    [anon_sym_retry_DASHinterval] = ACTIONS(37),
    [anon_sym_aws_DASHsigv4] = ACTIONS(37),
    [anon_sym_key] = ACTIONS(37),
    [anon_sym_connect_DASHto] = ACTIONS(37),
    [anon_sym_header] = ACTIONS(37),
    [anon_sym_netrc_DASHfile] = ACTIONS(37),
    [anon_sym_output] = ACTIONS(37),
    [anon_sym_pinnedpubkey] = ACTIONS(37),
    [anon_sym_proxy] = ACTIONS(37),
    [anon_sym_unix_DASHsocket] = ACTIONS(37),
    [anon_sym_user] = ACTIONS(37),
    [anon_sym_variable] = ACTIONS(37),
    [anon_sym_LT] = ACTIONS(37),
    [anon_sym_LT_QMARK] = ACTIONS(37),
    [anon_sym_base64_COMMA] = ACTIONS(37),
    [anon_sym_hex_COMMA] = ACTIONS(37),
    [anon_sym_DQUOTE] = ACTIONS(37),
    [anon_sym_BQUOTE] = ACTIONS(37),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(37),
    [sym__json_number] = ACTIONS(37),
    [anon_sym_true] = ACTIONS(37),
    [anon_sym_false] = ACTIONS(37),
    [anon_sym_LBRACE_LBRACE2] = ACTIONS(37),
    [sym_comment] = ACTIONS(37),
    [sym__json_array_start] = ACTIONS(35),
  },
  [12] = {
    [sym_body] = STATE(92),
    [sym_request_section] = STATE(37),
    [sym_basic_auth_section] = STATE(48),
    [sym_query_string_params_section] = STATE(48),
    [sym_form_params_section] = STATE(48),
    [sym_multipart_form_data_section] = STATE(48),
    [sym_cookies_section] = STATE(48),
    [sym_options_section] = STATE(48),
    [sym_bytes] = STATE(275),
    [sym_xml] = STATE(490),
    [sym_xml_prolog_tag] = STATE(221),
    [sym_xml_tag] = STATE(489),
    [sym_xml_self_closing_tag] = STATE(488),
    [sym_xml_open_tag] = STATE(150),
    [sym_oneline_base64] = STATE(490),
    [sym_oneline_file] = STATE(490),
    [sym_oneline_hex] = STATE(490),
    [sym_oneline_string] = STATE(490),
    [sym_multiline_string] = STATE(490),
    [sym_json_value] = STATE(490),
    [sym_json_object] = STATE(497),
    [sym_json_array] = STATE(497),
    [sym_json_string] = STATE(497),
    [sym_json_number] = STATE(497),
    [sym_json_boolean] = STATE(497),
    [sym_template] = STATE(497),
    [aux_sym_request_repeat2] = STATE(37),
    [aux_sym_xml_repeat1] = STATE(221),
    [ts_builtin_sym_end] = ACTIONS(116),
    [anon_sym_LF] = ACTIONS(116),
    [anon_sym_GET] = ACTIONS(118),
    [anon_sym_HEAD] = ACTIONS(118),
    [anon_sym_POST] = ACTIONS(118),
    [anon_sym_PUT] = ACTIONS(118),
    [anon_sym_DELETE] = ACTIONS(118),
    [anon_sym_CONNECT] = ACTIONS(118),
    [anon_sym_OPTIONS] = ACTIONS(118),
    [anon_sym_TRACE] = ACTIONS(118),
    [anon_sym_PATCH] = ACTIONS(118),
    [anon_sym_LINK] = ACTIONS(118),
    [anon_sym_UNLINK] = ACTIONS(118),
    [anon_sym_PURGE] = ACTIONS(118),
    [anon_sym_LOCK] = ACTIONS(118),
    [anon_sym_UNLOCK] = ACTIONS(118),
    [anon_sym_PROPFIND] = ACTIONS(118),
    [anon_sym_VIEW] = ACTIONS(118),
    [aux_sym_method_token1] = ACTIONS(118),
    [anon_sym_HTTP_SLASH1_DOT0] = ACTIONS(118),
    [anon_sym_HTTP_SLASH1_DOT1] = ACTIONS(118),
    [anon_sym_HTTP_SLASH2] = ACTIONS(118),
    [anon_sym_HTTP_SLASH3] = ACTIONS(118),
    [anon_sym_HTTP_SLASH_STAR] = ACTIONS(118),
    [anon_sym_HTTP] = ACTIONS(118),
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
    [anon_sym_LBRACE] = ACTIONS(80),
    [anon_sym_LT] = ACTIONS(82),
    [anon_sym_LT_QMARK] = ACTIONS(84),
    [anon_sym_base64_COMMA] = ACTIONS(86),
    [anon_sym_hex_COMMA] = ACTIONS(88),
    [anon_sym_DQUOTE] = ACTIONS(90),
    [anon_sym_BQUOTE] = ACTIONS(98),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(100),
    [sym__json_number] = ACTIONS(102),
    [anon_sym_true] = ACTIONS(104),
    [anon_sym_false] = ACTIONS(104),
    [anon_sym_LBRACE_LBRACE2] = ACTIONS(106),
    [sym_comment] = ACTIONS(118),
    [sym__json_array_start] = ACTIONS(108),
  },
  [13] = {
    [sym_body] = STATE(96),
    [sym_request_section] = STATE(37),
    [sym_basic_auth_section] = STATE(48),
    [sym_query_string_params_section] = STATE(48),
    [sym_form_params_section] = STATE(48),
    [sym_multipart_form_data_section] = STATE(48),
    [sym_cookies_section] = STATE(48),
    [sym_options_section] = STATE(48),
    [sym_bytes] = STATE(275),
    [sym_xml] = STATE(490),
    [sym_xml_prolog_tag] = STATE(221),
    [sym_xml_tag] = STATE(489),
    [sym_xml_self_closing_tag] = STATE(488),
    [sym_xml_open_tag] = STATE(150),
    [sym_oneline_base64] = STATE(490),
    [sym_oneline_file] = STATE(490),
    [sym_oneline_hex] = STATE(490),
    [sym_oneline_string] = STATE(490),
    [sym_multiline_string] = STATE(490),
    [sym_json_value] = STATE(490),
    [sym_json_object] = STATE(497),
    [sym_json_array] = STATE(497),
    [sym_json_string] = STATE(497),
    [sym_json_number] = STATE(497),
    [sym_json_boolean] = STATE(497),
    [sym_template] = STATE(497),
    [aux_sym_request_repeat2] = STATE(37),
    [aux_sym_xml_repeat1] = STATE(221),
    [ts_builtin_sym_end] = ACTIONS(138),
    [anon_sym_LF] = ACTIONS(138),
    [anon_sym_GET] = ACTIONS(140),
    [anon_sym_HEAD] = ACTIONS(140),
    [anon_sym_POST] = ACTIONS(140),
    [anon_sym_PUT] = ACTIONS(140),
    [anon_sym_DELETE] = ACTIONS(140),
    [anon_sym_CONNECT] = ACTIONS(140),
    [anon_sym_OPTIONS] = ACTIONS(140),
    [anon_sym_TRACE] = ACTIONS(140),
    [anon_sym_PATCH] = ACTIONS(140),
    [anon_sym_LINK] = ACTIONS(140),
    [anon_sym_UNLINK] = ACTIONS(140),
    [anon_sym_PURGE] = ACTIONS(140),
    [anon_sym_LOCK] = ACTIONS(140),
    [anon_sym_UNLOCK] = ACTIONS(140),
    [anon_sym_PROPFIND] = ACTIONS(140),
    [anon_sym_VIEW] = ACTIONS(140),
    [aux_sym_method_token1] = ACTIONS(140),
    [anon_sym_HTTP_SLASH1_DOT0] = ACTIONS(140),
    [anon_sym_HTTP_SLASH1_DOT1] = ACTIONS(140),
    [anon_sym_HTTP_SLASH2] = ACTIONS(140),
    [anon_sym_HTTP_SLASH3] = ACTIONS(140),
    [anon_sym_HTTP_SLASH_STAR] = ACTIONS(140),
    [anon_sym_HTTP] = ACTIONS(140),
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
    [anon_sym_LBRACE] = ACTIONS(80),
    [anon_sym_LT] = ACTIONS(82),
    [anon_sym_LT_QMARK] = ACTIONS(84),
    [anon_sym_base64_COMMA] = ACTIONS(86),
    [anon_sym_hex_COMMA] = ACTIONS(88),
    [anon_sym_DQUOTE] = ACTIONS(90),
    [anon_sym_BQUOTE] = ACTIONS(98),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(100),
    [sym__json_number] = ACTIONS(102),
    [anon_sym_true] = ACTIONS(104),
    [anon_sym_false] = ACTIONS(104),
    [anon_sym_LBRACE_LBRACE2] = ACTIONS(106),
    [sym_comment] = ACTIONS(140),
    [sym__json_array_start] = ACTIONS(108),
  },
  [14] = {
    [sym_body] = STATE(93),
    [sym_request_section] = STATE(37),
    [sym_basic_auth_section] = STATE(48),
    [sym_query_string_params_section] = STATE(48),
    [sym_form_params_section] = STATE(48),
    [sym_multipart_form_data_section] = STATE(48),
    [sym_cookies_section] = STATE(48),
    [sym_options_section] = STATE(48),
    [sym_bytes] = STATE(275),
    [sym_xml] = STATE(490),
    [sym_xml_prolog_tag] = STATE(221),
    [sym_xml_tag] = STATE(489),
    [sym_xml_self_closing_tag] = STATE(488),
    [sym_xml_open_tag] = STATE(150),
    [sym_oneline_base64] = STATE(490),
    [sym_oneline_file] = STATE(490),
    [sym_oneline_hex] = STATE(490),
    [sym_oneline_string] = STATE(490),
    [sym_multiline_string] = STATE(490),
    [sym_json_value] = STATE(490),
    [sym_json_object] = STATE(497),
    [sym_json_array] = STATE(497),
    [sym_json_string] = STATE(497),
    [sym_json_number] = STATE(497),
    [sym_json_boolean] = STATE(497),
    [sym_template] = STATE(497),
    [aux_sym_request_repeat2] = STATE(37),
    [aux_sym_xml_repeat1] = STATE(221),
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
    [anon_sym_LBRACE] = ACTIONS(80),
    [anon_sym_LT] = ACTIONS(82),
    [anon_sym_LT_QMARK] = ACTIONS(84),
    [anon_sym_base64_COMMA] = ACTIONS(86),
    [anon_sym_hex_COMMA] = ACTIONS(88),
    [anon_sym_DQUOTE] = ACTIONS(90),
    [anon_sym_BQUOTE] = ACTIONS(98),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(100),
    [sym__json_number] = ACTIONS(102),
    [anon_sym_true] = ACTIONS(104),
    [anon_sym_false] = ACTIONS(104),
    [anon_sym_LBRACE_LBRACE2] = ACTIONS(106),
    [sym_comment] = ACTIONS(114),
    [sym__json_array_start] = ACTIONS(108),
  },
  [15] = {
    [sym_header] = STATE(16),
    [sym_body] = STATE(120),
    [sym_response_section] = STATE(24),
    [sym_captures_section] = STATE(80),
    [sym_asserts_section] = STATE(80),
    [sym_key_value] = STATE(302),
    [sym_bytes] = STATE(303),
    [sym_xml] = STATE(490),
    [sym_xml_prolog_tag] = STATE(221),
    [sym_xml_tag] = STATE(489),
    [sym_xml_self_closing_tag] = STATE(488),
    [sym_xml_open_tag] = STATE(150),
    [sym_oneline_base64] = STATE(490),
    [sym_oneline_file] = STATE(490),
    [sym_oneline_hex] = STATE(490),
    [sym_key_string] = STATE(526),
    [sym__bracketed_key_content] = STATE(203),
    [sym__key_template] = STATE(201),
    [sym_key_string_content] = STATE(203),
    [sym_oneline_string] = STATE(490),
    [sym_multiline_string] = STATE(490),
    [sym_json_value] = STATE(490),
    [sym_json_object] = STATE(497),
    [sym_json_array] = STATE(497),
    [sym_json_string] = STATE(497),
    [sym_json_number] = STATE(497),
    [sym_json_boolean] = STATE(497),
    [sym_template] = STATE(497),
    [aux_sym_request_repeat1] = STATE(16),
    [aux_sym_response_repeat1] = STATE(24),
    [aux_sym_xml_repeat1] = STATE(221),
    [aux_sym_key_string_content_repeat1] = STATE(261),
    [ts_builtin_sym_end] = ACTIONS(142),
    [anon_sym_LF] = ACTIONS(142),
    [anon_sym_GET] = ACTIONS(144),
    [anon_sym_HEAD] = ACTIONS(144),
    [anon_sym_POST] = ACTIONS(144),
    [anon_sym_PUT] = ACTIONS(144),
    [anon_sym_DELETE] = ACTIONS(144),
    [anon_sym_CONNECT] = ACTIONS(144),
    [anon_sym_OPTIONS] = ACTIONS(144),
    [anon_sym_TRACE] = ACTIONS(144),
    [anon_sym_PATCH] = ACTIONS(144),
    [anon_sym_LINK] = ACTIONS(144),
    [anon_sym_UNLINK] = ACTIONS(144),
    [anon_sym_PURGE] = ACTIONS(144),
    [anon_sym_LOCK] = ACTIONS(144),
    [anon_sym_UNLOCK] = ACTIONS(144),
    [anon_sym_PROPFIND] = ACTIONS(144),
    [anon_sym_VIEW] = ACTIONS(144),
    [aux_sym_method_token1] = ACTIONS(144),
    [anon_sym_LBRACKCaptures_RBRACK] = ACTIONS(146),
    [anon_sym_LBRACKAsserts_RBRACK] = ACTIONS(148),
    [anon_sym_null] = ACTIONS(76),
    [anon_sym_file_COMMA] = ACTIONS(78),
    [anon_sym_LBRACE] = ACTIONS(80),
    [anon_sym_LT] = ACTIONS(82),
    [anon_sym_LT_QMARK] = ACTIONS(84),
    [anon_sym_base64_COMMA] = ACTIONS(86),
    [anon_sym_hex_COMMA] = ACTIONS(88),
    [anon_sym_DQUOTE] = ACTIONS(90),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(92),
    [sym_key_string_text] = ACTIONS(94),
    [sym_key_string_escaped_char] = ACTIONS(96),
    [anon_sym_BQUOTE] = ACTIONS(98),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(100),
    [sym__json_number] = ACTIONS(102),
    [anon_sym_true] = ACTIONS(104),
    [anon_sym_false] = ACTIONS(104),
    [anon_sym_LBRACE_LBRACE2] = ACTIONS(106),
    [sym_comment] = ACTIONS(144),
    [sym__json_array_start] = ACTIONS(108),
    [sym__bracketed_key_start] = ACTIONS(110),
  },
  [16] = {
    [sym_header] = STATE(52),
    [sym_body] = STATE(119),
    [sym_response_section] = STATE(23),
    [sym_captures_section] = STATE(80),
    [sym_asserts_section] = STATE(80),
    [sym_key_value] = STATE(302),
    [sym_bytes] = STATE(303),
    [sym_xml] = STATE(490),
    [sym_xml_prolog_tag] = STATE(221),
    [sym_xml_tag] = STATE(489),
    [sym_xml_self_closing_tag] = STATE(488),
    [sym_xml_open_tag] = STATE(150),
    [sym_oneline_base64] = STATE(490),
    [sym_oneline_file] = STATE(490),
    [sym_oneline_hex] = STATE(490),
    [sym_key_string] = STATE(526),
    [sym__bracketed_key_content] = STATE(203),
    [sym__key_template] = STATE(201),
    [sym_key_string_content] = STATE(203),
    [sym_oneline_string] = STATE(490),
    [sym_multiline_string] = STATE(490),
    [sym_json_value] = STATE(490),
    [sym_json_object] = STATE(497),
    [sym_json_array] = STATE(497),
    [sym_json_string] = STATE(497),
    [sym_json_number] = STATE(497),
    [sym_json_boolean] = STATE(497),
    [sym_template] = STATE(497),
    [aux_sym_request_repeat1] = STATE(52),
    [aux_sym_response_repeat1] = STATE(23),
    [aux_sym_xml_repeat1] = STATE(221),
    [aux_sym_key_string_content_repeat1] = STATE(261),
    [ts_builtin_sym_end] = ACTIONS(150),
    [anon_sym_LF] = ACTIONS(150),
    [anon_sym_GET] = ACTIONS(152),
    [anon_sym_HEAD] = ACTIONS(152),
    [anon_sym_POST] = ACTIONS(152),
    [anon_sym_PUT] = ACTIONS(152),
    [anon_sym_DELETE] = ACTIONS(152),
    [anon_sym_CONNECT] = ACTIONS(152),
    [anon_sym_OPTIONS] = ACTIONS(152),
    [anon_sym_TRACE] = ACTIONS(152),
    [anon_sym_PATCH] = ACTIONS(152),
    [anon_sym_LINK] = ACTIONS(152),
    [anon_sym_UNLINK] = ACTIONS(152),
    [anon_sym_PURGE] = ACTIONS(152),
    [anon_sym_LOCK] = ACTIONS(152),
    [anon_sym_UNLOCK] = ACTIONS(152),
    [anon_sym_PROPFIND] = ACTIONS(152),
    [anon_sym_VIEW] = ACTIONS(152),
    [aux_sym_method_token1] = ACTIONS(152),
    [anon_sym_LBRACKCaptures_RBRACK] = ACTIONS(146),
    [anon_sym_LBRACKAsserts_RBRACK] = ACTIONS(148),
    [anon_sym_null] = ACTIONS(76),
    [anon_sym_file_COMMA] = ACTIONS(78),
    [anon_sym_LBRACE] = ACTIONS(80),
    [anon_sym_LT] = ACTIONS(82),
    [anon_sym_LT_QMARK] = ACTIONS(84),
    [anon_sym_base64_COMMA] = ACTIONS(86),
    [anon_sym_hex_COMMA] = ACTIONS(88),
    [anon_sym_DQUOTE] = ACTIONS(90),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(92),
    [sym_key_string_text] = ACTIONS(94),
    [sym_key_string_escaped_char] = ACTIONS(96),
    [anon_sym_BQUOTE] = ACTIONS(98),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(100),
    [sym__json_number] = ACTIONS(102),
    [anon_sym_true] = ACTIONS(104),
    [anon_sym_false] = ACTIONS(104),
    [anon_sym_LBRACE_LBRACE2] = ACTIONS(106),
    [sym_comment] = ACTIONS(152),
    [sym__json_array_start] = ACTIONS(108),
    [sym__bracketed_key_start] = ACTIONS(110),
  },
  [17] = {
    [sym_predicate] = STATE(268),
    [sym_predicate_func] = STATE(467),
    [sym_simple_predicate] = STATE(464),
    [sym_equal_predicate] = STATE(464),
    [sym_not_equal_predicate] = STATE(464),
    [sym_greater_predicate] = STATE(464),
    [sym_greater_or_equal_predicate] = STATE(464),
    [sym_less_predicate] = STATE(464),
    [sym_less_or_equal_predicate] = STATE(464),
    [sym_start_with_predicate] = STATE(464),
    [sym_end_with_predicate] = STATE(464),
    [sym_contain_predicate] = STATE(464),
    [sym_match_predicate] = STATE(464),
    [sym_include_predicate] = STATE(464),
    [sym_filter] = STATE(18),
    [sym_simple_filter_key] = STATE(59),
    [sym_argument_filter] = STATE(59),
    [sym_regex_filter] = STATE(59),
    [sym_nth_filter] = STATE(59),
    [sym_replace_filter] = STATE(59),
    [sym_split_filter] = STATE(59),
    [sym_xpath_filter] = STATE(59),
    [aux_sym_capture_repeat1] = STATE(18),
    [anon_sym_xpath] = ACTIONS(154),
    [anon_sym_regex] = ACTIONS(156),
    [anon_sym_not] = ACTIONS(158),
    [anon_sym_exists] = ACTIONS(160),
    [anon_sym_isInteger] = ACTIONS(160),
    [anon_sym_isFloat] = ACTIONS(160),
    [anon_sym_isBoolean] = ACTIONS(160),
    [anon_sym_isString] = ACTIONS(160),
    [anon_sym_isCollection] = ACTIONS(160),
    [anon_sym_isNumber] = ACTIONS(160),
    [anon_sym_isIsoDate] = ACTIONS(160),
    [anon_sym_isEmpty] = ACTIONS(160),
    [anon_sym_isIpv4] = ACTIONS(160),
    [anon_sym_isIpv6] = ACTIONS(160),
    [anon_sym_isUuid] = ACTIONS(160),
    [anon_sym_equals] = ACTIONS(162),
    [anon_sym_EQ_EQ] = ACTIONS(164),
    [anon_sym_notEquals] = ACTIONS(166),
    [anon_sym_BANG_EQ] = ACTIONS(168),
    [anon_sym_greaterThan] = ACTIONS(170),
    [anon_sym_GT] = ACTIONS(172),
    [anon_sym_greaterThanOrEquals] = ACTIONS(174),
    [anon_sym_GT_EQ] = ACTIONS(176),
    [anon_sym_lessThan] = ACTIONS(178),
    [anon_sym_LT] = ACTIONS(180),
    [anon_sym_lessThanOrEquals] = ACTIONS(182),
    [anon_sym_LT_EQ] = ACTIONS(184),
    [anon_sym_startsWith] = ACTIONS(186),
    [anon_sym_endsWith] = ACTIONS(188),
    [anon_sym_contains] = ACTIONS(190),
    [anon_sym_matches] = ACTIONS(192),
    [anon_sym_includes] = ACTIONS(194),
    [anon_sym_count] = ACTIONS(196),
    [anon_sym_urlEncode] = ACTIONS(196),
    [anon_sym_urlDecode] = ACTIONS(196),
    [anon_sym_toInt] = ACTIONS(196),
    [anon_sym_htmlEscape] = ACTIONS(196),
    [anon_sym_htmlUnescape] = ACTIONS(196),
    [anon_sym_daysAfterNow] = ACTIONS(196),
    [anon_sym_daysBeforeNow] = ACTIONS(196),
    [anon_sym_decode] = ACTIONS(198),
    [anon_sym_format] = ACTIONS(198),
    [anon_sym_toDate] = ACTIONS(198),
    [anon_sym_nth] = ACTIONS(200),
    [anon_sym_replace] = ACTIONS(202),
    [anon_sym_split] = ACTIONS(204),
    [sym_comment] = ACTIONS(206),
  },
  [18] = {
    [sym_predicate] = STATE(280),
    [sym_predicate_func] = STATE(467),
    [sym_simple_predicate] = STATE(464),
    [sym_equal_predicate] = STATE(464),
    [sym_not_equal_predicate] = STATE(464),
    [sym_greater_predicate] = STATE(464),
    [sym_greater_or_equal_predicate] = STATE(464),
    [sym_less_predicate] = STATE(464),
    [sym_less_or_equal_predicate] = STATE(464),
    [sym_start_with_predicate] = STATE(464),
    [sym_end_with_predicate] = STATE(464),
    [sym_contain_predicate] = STATE(464),
    [sym_match_predicate] = STATE(464),
    [sym_include_predicate] = STATE(464),
    [sym_filter] = STATE(38),
    [sym_simple_filter_key] = STATE(59),
    [sym_argument_filter] = STATE(59),
    [sym_regex_filter] = STATE(59),
    [sym_nth_filter] = STATE(59),
    [sym_replace_filter] = STATE(59),
    [sym_split_filter] = STATE(59),
    [sym_xpath_filter] = STATE(59),
    [aux_sym_capture_repeat1] = STATE(38),
    [anon_sym_xpath] = ACTIONS(154),
    [anon_sym_regex] = ACTIONS(156),
    [anon_sym_not] = ACTIONS(158),
    [anon_sym_exists] = ACTIONS(160),
    [anon_sym_isInteger] = ACTIONS(160),
    [anon_sym_isFloat] = ACTIONS(160),
    [anon_sym_isBoolean] = ACTIONS(160),
    [anon_sym_isString] = ACTIONS(160),
    [anon_sym_isCollection] = ACTIONS(160),
    [anon_sym_isNumber] = ACTIONS(160),
    [anon_sym_isIsoDate] = ACTIONS(160),
    [anon_sym_isEmpty] = ACTIONS(160),
    [anon_sym_isIpv4] = ACTIONS(160),
    [anon_sym_isIpv6] = ACTIONS(160),
    [anon_sym_isUuid] = ACTIONS(160),
    [anon_sym_equals] = ACTIONS(162),
    [anon_sym_EQ_EQ] = ACTIONS(164),
    [anon_sym_notEquals] = ACTIONS(166),
    [anon_sym_BANG_EQ] = ACTIONS(168),
    [anon_sym_greaterThan] = ACTIONS(170),
    [anon_sym_GT] = ACTIONS(172),
    [anon_sym_greaterThanOrEquals] = ACTIONS(174),
    [anon_sym_GT_EQ] = ACTIONS(176),
    [anon_sym_lessThan] = ACTIONS(178),
    [anon_sym_LT] = ACTIONS(180),
    [anon_sym_lessThanOrEquals] = ACTIONS(182),
    [anon_sym_LT_EQ] = ACTIONS(184),
    [anon_sym_startsWith] = ACTIONS(186),
    [anon_sym_endsWith] = ACTIONS(188),
    [anon_sym_contains] = ACTIONS(190),
    [anon_sym_matches] = ACTIONS(192),
    [anon_sym_includes] = ACTIONS(194),
    [anon_sym_count] = ACTIONS(196),
    [anon_sym_urlEncode] = ACTIONS(196),
    [anon_sym_urlDecode] = ACTIONS(196),
    [anon_sym_toInt] = ACTIONS(196),
    [anon_sym_htmlEscape] = ACTIONS(196),
    [anon_sym_htmlUnescape] = ACTIONS(196),
    [anon_sym_daysAfterNow] = ACTIONS(196),
    [anon_sym_daysBeforeNow] = ACTIONS(196),
    [anon_sym_decode] = ACTIONS(198),
    [anon_sym_format] = ACTIONS(198),
    [anon_sym_toDate] = ACTIONS(198),
    [anon_sym_nth] = ACTIONS(200),
    [anon_sym_replace] = ACTIONS(202),
    [anon_sym_split] = ACTIONS(204),
    [sym_comment] = ACTIONS(206),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 13,
    ACTIONS(92), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(94), 1,
      sym_key_string_text,
    ACTIONS(96), 1,
      sym_key_string_escaped_char,
    ACTIONS(110), 1,
      sym__bracketed_key_start,
    STATE(20), 1,
      aux_sym_multipart_form_data_section_repeat1,
    STATE(201), 1,
      sym__key_template,
    STATE(261), 1,
      aux_sym_key_string_content_repeat1,
    STATE(293), 1,
      sym_multipart_form_data_param,
    STATE(558), 1,
      sym_key_string,
    STATE(203), 2,
      sym__bracketed_key_content,
      sym_key_string_content,
    STATE(388), 2,
      sym_key_value,
      sym_file_param,
    ACTIONS(208), 3,
      sym__json_array_start,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(210), 47,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__json_number,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LBRACE_LBRACE2,
      sym_comment,
  [90] = 13,
    ACTIONS(92), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(94), 1,
      sym_key_string_text,
    ACTIONS(96), 1,
      sym_key_string_escaped_char,
    ACTIONS(110), 1,
      sym__bracketed_key_start,
    STATE(21), 1,
      aux_sym_multipart_form_data_section_repeat1,
    STATE(201), 1,
      sym__key_template,
    STATE(261), 1,
      aux_sym_key_string_content_repeat1,
    STATE(293), 1,
      sym_multipart_form_data_param,
    STATE(558), 1,
      sym_key_string,
    STATE(203), 2,
      sym__bracketed_key_content,
      sym_key_string_content,
    STATE(388), 2,
      sym_key_value,
      sym_file_param,
    ACTIONS(212), 3,
      sym__json_array_start,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(214), 47,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__json_number,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LBRACE_LBRACE2,
      sym_comment,
  [180] = 13,
    ACTIONS(220), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(223), 1,
      sym_key_string_text,
    ACTIONS(226), 1,
      sym_key_string_escaped_char,
    ACTIONS(229), 1,
      sym__bracketed_key_start,
    STATE(21), 1,
      aux_sym_multipart_form_data_section_repeat1,
    STATE(201), 1,
      sym__key_template,
    STATE(261), 1,
      aux_sym_key_string_content_repeat1,
    STATE(293), 1,
      sym_multipart_form_data_param,
    STATE(558), 1,
      sym_key_string,
    STATE(203), 2,
      sym__bracketed_key_content,
      sym_key_string_content,
    STATE(388), 2,
      sym_key_value,
      sym_file_param,
    ACTIONS(216), 3,
      sym__json_array_start,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(218), 47,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__json_number,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LBRACE_LBRACE2,
      sym_comment,
  [270] = 12,
    ACTIONS(236), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(239), 1,
      sym_key_string_text,
    ACTIONS(242), 1,
      sym_key_string_escaped_char,
    ACTIONS(245), 1,
      sym__bracketed_key_start,
    STATE(201), 1,
      sym__key_template,
    STATE(261), 1,
      aux_sym_key_string_content_repeat1,
    STATE(276), 1,
      sym_key_value,
    STATE(526), 1,
      sym_key_string,
    STATE(22), 2,
      sym_header,
      aux_sym_request_repeat1,
    STATE(203), 2,
      sym__bracketed_key_content,
      sym_key_string_content,
    ACTIONS(232), 3,
      sym__json_array_start,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(234), 47,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__json_number,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LBRACE_LBRACE2,
      sym_comment,
  [357] = 28,
    ACTIONS(76), 1,
      anon_sym_null,
    ACTIONS(78), 1,
      anon_sym_file_COMMA,
    ACTIONS(80), 1,
      anon_sym_LBRACE,
    ACTIONS(82), 1,
      anon_sym_LT,
    ACTIONS(84), 1,
      anon_sym_LT_QMARK,
    ACTIONS(86), 1,
      anon_sym_base64_COMMA,
    ACTIONS(88), 1,
      anon_sym_hex_COMMA,
    ACTIONS(90), 1,
      anon_sym_DQUOTE,
    ACTIONS(98), 1,
      anon_sym_BQUOTE,
    ACTIONS(100), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(102), 1,
      sym__json_number,
    ACTIONS(106), 1,
      anon_sym_LBRACE_LBRACE2,
    ACTIONS(108), 1,
      sym__json_array_start,
    ACTIONS(146), 1,
      anon_sym_LBRACKCaptures_RBRACK,
    ACTIONS(148), 1,
      anon_sym_LBRACKAsserts_RBRACK,
    STATE(117), 1,
      sym_body,
    STATE(150), 1,
      sym_xml_open_tag,
    STATE(303), 1,
      sym_bytes,
    STATE(488), 1,
      sym_xml_self_closing_tag,
    STATE(489), 1,
      sym_xml_tag,
    ACTIONS(104), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(248), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(79), 2,
      sym_response_section,
      aux_sym_response_repeat1,
    STATE(80), 2,
      sym_captures_section,
      sym_asserts_section,
    STATE(221), 2,
      sym_xml_prolog_tag,
      aux_sym_xml_repeat1,
    STATE(497), 6,
      sym_json_object,
      sym_json_array,
      sym_json_string,
      sym_json_number,
      sym_json_boolean,
      sym_template,
    STATE(490), 7,
      sym_xml,
      sym_oneline_base64,
      sym_oneline_file,
      sym_oneline_hex,
      sym_oneline_string,
      sym_multiline_string,
      sym_json_value,
    ACTIONS(250), 18,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
  [475] = 28,
    ACTIONS(76), 1,
      anon_sym_null,
    ACTIONS(78), 1,
      anon_sym_file_COMMA,
    ACTIONS(80), 1,
      anon_sym_LBRACE,
    ACTIONS(82), 1,
      anon_sym_LT,
    ACTIONS(84), 1,
      anon_sym_LT_QMARK,
    ACTIONS(86), 1,
      anon_sym_base64_COMMA,
    ACTIONS(88), 1,
      anon_sym_hex_COMMA,
    ACTIONS(90), 1,
      anon_sym_DQUOTE,
    ACTIONS(98), 1,
      anon_sym_BQUOTE,
    ACTIONS(100), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(102), 1,
      sym__json_number,
    ACTIONS(106), 1,
      anon_sym_LBRACE_LBRACE2,
    ACTIONS(108), 1,
      sym__json_array_start,
    ACTIONS(146), 1,
      anon_sym_LBRACKCaptures_RBRACK,
    ACTIONS(148), 1,
      anon_sym_LBRACKAsserts_RBRACK,
    STATE(119), 1,
      sym_body,
    STATE(150), 1,
      sym_xml_open_tag,
    STATE(303), 1,
      sym_bytes,
    STATE(488), 1,
      sym_xml_self_closing_tag,
    STATE(489), 1,
      sym_xml_tag,
    ACTIONS(104), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(150), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(79), 2,
      sym_response_section,
      aux_sym_response_repeat1,
    STATE(80), 2,
      sym_captures_section,
      sym_asserts_section,
    STATE(221), 2,
      sym_xml_prolog_tag,
      aux_sym_xml_repeat1,
    STATE(497), 6,
      sym_json_object,
      sym_json_array,
      sym_json_string,
      sym_json_number,
      sym_json_boolean,
      sym_template,
    STATE(490), 7,
      sym_xml,
      sym_oneline_base64,
      sym_oneline_file,
      sym_oneline_hex,
      sym_oneline_string,
      sym_multiline_string,
      sym_json_value,
    ACTIONS(152), 18,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
  [593] = 11,
    ACTIONS(92), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(94), 1,
      sym_key_string_text,
    ACTIONS(96), 1,
      sym_key_string_escaped_char,
    ACTIONS(110), 1,
      sym__bracketed_key_start,
    STATE(201), 1,
      sym__key_template,
    STATE(261), 1,
      aux_sym_key_string_content_repeat1,
    STATE(485), 1,
      sym_key_value,
    STATE(526), 1,
      sym_key_string,
    STATE(203), 2,
      sym__bracketed_key_content,
      sym_key_string_content,
    ACTIONS(252), 3,
      sym__json_array_start,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(254), 47,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__json_number,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LBRACE_LBRACE2,
      sym_comment,
  [676] = 11,
    ACTIONS(92), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(94), 1,
      sym_key_string_text,
    ACTIONS(96), 1,
      sym_key_string_escaped_char,
    ACTIONS(110), 1,
      sym__bracketed_key_start,
    STATE(201), 1,
      sym__key_template,
    STATE(261), 1,
      aux_sym_key_string_content_repeat1,
    STATE(485), 1,
      sym_key_value,
    STATE(526), 1,
      sym_key_string,
    STATE(203), 2,
      sym__bracketed_key_content,
      sym_key_string_content,
    ACTIONS(256), 3,
      sym__json_array_start,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(258), 47,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__json_number,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LBRACE_LBRACE2,
      sym_comment,
  [759] = 12,
    ACTIONS(264), 1,
      anon_sym_header,
    ACTIONS(267), 1,
      anon_sym_variable,
    ACTIONS(273), 1,
      anon_sym_cookie,
    ACTIONS(276), 1,
      anon_sym_xpath,
    ACTIONS(279), 1,
      anon_sym_jsonpath,
    ACTIONS(282), 1,
      anon_sym_regex,
    STATE(17), 1,
      sym_query,
    STATE(27), 2,
      sym_assert,
      aux_sym_asserts_section_repeat1,
    ACTIONS(260), 3,
      sym__json_array_start,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(270), 7,
      anon_sym_status,
      anon_sym_url,
      anon_sym_body,
      anon_sym_duration,
      anon_sym_bytes,
      anon_sym_sha256,
      anon_sym_md5,
    STATE(69), 7,
      sym_simple_query,
      sym_header_query,
      sym_cookie_query,
      sym_xpath_query,
      sym_jsonpath_query,
      sym_regex_query,
      sym_variable_query,
    ACTIONS(262), 34,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__json_number,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LBRACE_LBRACE2,
      sym_comment,
  [844] = 11,
    ACTIONS(92), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(94), 1,
      sym_key_string_text,
    ACTIONS(96), 1,
      sym_key_string_escaped_char,
    ACTIONS(110), 1,
      sym__bracketed_key_start,
    STATE(201), 1,
      sym__key_template,
    STATE(261), 1,
      aux_sym_key_string_content_repeat1,
    STATE(485), 1,
      sym_key_value,
    STATE(526), 1,
      sym_key_string,
    STATE(203), 2,
      sym__bracketed_key_content,
      sym_key_string_content,
    ACTIONS(285), 3,
      sym__json_array_start,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(287), 47,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__json_number,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LBRACE_LBRACE2,
      sym_comment,
  [927] = 11,
    ACTIONS(92), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(94), 1,
      sym_key_string_text,
    ACTIONS(96), 1,
      sym_key_string_escaped_char,
    ACTIONS(110), 1,
      sym__bracketed_key_start,
    STATE(201), 1,
      sym__key_template,
    STATE(261), 1,
      aux_sym_key_string_content_repeat1,
    STATE(485), 1,
      sym_key_value,
    STATE(526), 1,
      sym_key_string,
    STATE(203), 2,
      sym__bracketed_key_content,
      sym_key_string_content,
    ACTIONS(289), 3,
      sym__json_array_start,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(291), 47,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__json_number,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LBRACE_LBRACE2,
      sym_comment,
  [1010] = 11,
    ACTIONS(92), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(94), 1,
      sym_key_string_text,
    ACTIONS(96), 1,
      sym_key_string_escaped_char,
    ACTIONS(110), 1,
      sym__bracketed_key_start,
    STATE(201), 1,
      sym__key_template,
    STATE(261), 1,
      aux_sym_key_string_content_repeat1,
    STATE(485), 1,
      sym_key_value,
    STATE(526), 1,
      sym_key_string,
    STATE(203), 2,
      sym__bracketed_key_content,
      sym_key_string_content,
    ACTIONS(293), 3,
      sym__json_array_start,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(295), 47,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__json_number,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LBRACE_LBRACE2,
      sym_comment,
  [1093] = 12,
    ACTIONS(301), 1,
      anon_sym_header,
    ACTIONS(303), 1,
      anon_sym_variable,
    ACTIONS(307), 1,
      anon_sym_cookie,
    ACTIONS(309), 1,
      anon_sym_xpath,
    ACTIONS(311), 1,
      anon_sym_jsonpath,
    ACTIONS(313), 1,
      anon_sym_regex,
    STATE(17), 1,
      sym_query,
    STATE(34), 2,
      sym_assert,
      aux_sym_asserts_section_repeat1,
    ACTIONS(297), 3,
      sym__json_array_start,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(305), 7,
      anon_sym_status,
      anon_sym_url,
      anon_sym_body,
      anon_sym_duration,
      anon_sym_bytes,
      anon_sym_sha256,
      anon_sym_md5,
    STATE(69), 7,
      sym_simple_query,
      sym_header_query,
      sym_cookie_query,
      sym_xpath_query,
      sym_jsonpath_query,
      sym_regex_query,
      sym_variable_query,
    ACTIONS(299), 34,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__json_number,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LBRACE_LBRACE2,
      sym_comment,
  [1178] = 11,
    ACTIONS(92), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(94), 1,
      sym_key_string_text,
    ACTIONS(96), 1,
      sym_key_string_escaped_char,
    ACTIONS(110), 1,
      sym__bracketed_key_start,
    STATE(201), 1,
      sym__key_template,
    STATE(261), 1,
      aux_sym_key_string_content_repeat1,
    STATE(485), 1,
      sym_key_value,
    STATE(526), 1,
      sym_key_string,
    STATE(203), 2,
      sym__bracketed_key_content,
      sym_key_string_content,
    ACTIONS(315), 3,
      sym__json_array_start,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(317), 47,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__json_number,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LBRACE_LBRACE2,
      sym_comment,
  [1261] = 11,
    ACTIONS(92), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(94), 1,
      sym_key_string_text,
    ACTIONS(96), 1,
      sym_key_string_escaped_char,
    ACTIONS(110), 1,
      sym__bracketed_key_start,
    STATE(201), 1,
      sym__key_template,
    STATE(261), 1,
      aux_sym_key_string_content_repeat1,
    STATE(485), 1,
      sym_key_value,
    STATE(526), 1,
      sym_key_string,
    STATE(203), 2,
      sym__bracketed_key_content,
      sym_key_string_content,
    ACTIONS(319), 3,
      sym__json_array_start,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(321), 47,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__json_number,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LBRACE_LBRACE2,
      sym_comment,
  [1344] = 12,
    ACTIONS(301), 1,
      anon_sym_header,
    ACTIONS(303), 1,
      anon_sym_variable,
    ACTIONS(307), 1,
      anon_sym_cookie,
    ACTIONS(309), 1,
      anon_sym_xpath,
    ACTIONS(311), 1,
      anon_sym_jsonpath,
    ACTIONS(313), 1,
      anon_sym_regex,
    STATE(17), 1,
      sym_query,
    STATE(27), 2,
      sym_assert,
      aux_sym_asserts_section_repeat1,
    ACTIONS(323), 3,
      sym__json_array_start,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(305), 7,
      anon_sym_status,
      anon_sym_url,
      anon_sym_body,
      anon_sym_duration,
      anon_sym_bytes,
      anon_sym_sha256,
      anon_sym_md5,
    STATE(69), 7,
      sym_simple_query,
      sym_header_query,
      sym_cookie_query,
      sym_xpath_query,
      sym_jsonpath_query,
      sym_regex_query,
      sym_variable_query,
    ACTIONS(325), 34,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__json_number,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LBRACE_LBRACE2,
      sym_comment,
  [1429] = 11,
    ACTIONS(92), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(94), 1,
      sym_key_string_text,
    ACTIONS(96), 1,
      sym_key_string_escaped_char,
    ACTIONS(110), 1,
      sym__bracketed_key_start,
    STATE(201), 1,
      sym__key_template,
    STATE(261), 1,
      aux_sym_key_string_content_repeat1,
    STATE(485), 1,
      sym_key_value,
    STATE(526), 1,
      sym_key_string,
    STATE(203), 2,
      sym__bracketed_key_content,
      sym_key_string_content,
    ACTIONS(327), 3,
      sym__json_array_start,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(329), 47,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__json_number,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LBRACE_LBRACE2,
      sym_comment,
  [1512] = 11,
    ACTIONS(92), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(94), 1,
      sym_key_string_text,
    ACTIONS(96), 1,
      sym_key_string_escaped_char,
    ACTIONS(110), 1,
      sym__bracketed_key_start,
    STATE(201), 1,
      sym__key_template,
    STATE(261), 1,
      aux_sym_key_string_content_repeat1,
    STATE(485), 1,
      sym_key_value,
    STATE(526), 1,
      sym_key_string,
    STATE(203), 2,
      sym__bracketed_key_content,
      sym_key_string_content,
    ACTIONS(331), 3,
      sym__json_array_start,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(333), 47,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__json_number,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LBRACE_LBRACE2,
      sym_comment,
  [1595] = 10,
    ACTIONS(339), 1,
      anon_sym_LBRACKBasicAuth_RBRACK,
    ACTIONS(351), 1,
      anon_sym_LBRACKCookies_RBRACK,
    ACTIONS(354), 1,
      anon_sym_LBRACKOptions_RBRACK,
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
    ACTIONS(335), 3,
      sym__json_array_start,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(48), 6,
      sym_basic_auth_section,
      sym_query_string_params_section,
      sym_form_params_section,
      sym_multipart_form_data_section,
      sym_cookies_section,
      sym_options_section,
    ACTIONS(337), 38,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__json_number,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LBRACE_LBRACE2,
      sym_comment,
  [1674] = 12,
    ACTIONS(206), 1,
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
    STATE(59), 7,
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
  [1756] = 5,
    ACTIONS(382), 1,
      anon_sym_LF,
    ACTIONS(385), 1,
      sym_comment,
    STATE(39), 1,
      aux_sym__comment_or_new_line_repeat1,
    ACTIONS(120), 5,
      sym__json_array_start,
      sym__bracketed_key_start,
      ts_builtin_sym_end,
      anon_sym_LBRACE_LBRACE,
      sym_key_string_escaped_char,
    ACTIONS(125), 47,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
      sym_key_string_text,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__json_number,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LBRACE_LBRACE2,
  [1822] = 5,
    ACTIONS(388), 1,
      anon_sym_LF,
    ACTIONS(390), 1,
      sym_comment,
    STATE(39), 1,
      aux_sym__comment_or_new_line_repeat1,
    ACTIONS(130), 5,
      sym__json_array_start,
      sym__bracketed_key_start,
      ts_builtin_sym_end,
      anon_sym_LBRACE_LBRACE,
      sym_key_string_escaped_char,
    ACTIONS(134), 47,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
      sym_key_string_text,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__json_number,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LBRACE_LBRACE2,
  [1888] = 2,
    ACTIONS(392), 6,
      sym__json_array_start,
      sym__bracketed_key_start,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
      sym_key_string_escaped_char,
    ACTIONS(394), 48,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
      sym_key_string_text,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__json_number,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LBRACE_LBRACE2,
      sym_comment,
  [1947] = 2,
    ACTIONS(216), 6,
      sym__json_array_start,
      sym__bracketed_key_start,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
      sym_key_string_escaped_char,
    ACTIONS(218), 48,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
      sym_key_string_text,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__json_number,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LBRACE_LBRACE2,
      sym_comment,
  [2006] = 5,
    ACTIONS(396), 1,
      anon_sym_LF,
    ACTIONS(399), 1,
      sym_comment,
    STATE(43), 1,
      aux_sym__comment_or_new_line_repeat1,
    ACTIONS(120), 2,
      sym__json_array_start,
      ts_builtin_sym_end,
    ACTIONS(125), 46,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__json_number,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LBRACE_LBRACE2,
  [2068] = 5,
    ACTIONS(402), 1,
      anon_sym_LF,
    ACTIONS(404), 1,
      sym_comment,
    STATE(43), 1,
      aux_sym__comment_or_new_line_repeat1,
    ACTIONS(130), 2,
      sym__json_array_start,
      ts_builtin_sym_end,
    ACTIONS(134), 46,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__json_number,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LBRACE_LBRACE2,
  [2130] = 2,
    ACTIONS(406), 3,
      sym__json_array_start,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(408), 47,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__json_number,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LBRACE_LBRACE2,
      sym_comment,
  [2185] = 2,
    ACTIONS(410), 3,
      sym__json_array_start,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(412), 47,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__json_number,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LBRACE_LBRACE2,
      sym_comment,
  [2240] = 2,
    ACTIONS(414), 3,
      sym__json_array_start,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(416), 47,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__json_number,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LBRACE_LBRACE2,
      sym_comment,
  [2295] = 2,
    ACTIONS(418), 3,
      sym__json_array_start,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(420), 47,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__json_number,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LBRACE_LBRACE2,
      sym_comment,
  [2350] = 3,
    ACTIONS(206), 1,
      sym_comment,
    ACTIONS(424), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(422), 43,
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
  [2406] = 3,
    ACTIONS(206), 1,
      sym_comment,
    ACTIONS(428), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(426), 43,
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
  [2462] = 3,
    ACTIONS(206), 1,
      sym_comment,
    ACTIONS(432), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(430), 43,
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
  [2518] = 12,
    ACTIONS(236), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(239), 1,
      sym_key_string_text,
    ACTIONS(242), 1,
      sym_key_string_escaped_char,
    ACTIONS(245), 1,
      sym__bracketed_key_start,
    STATE(201), 1,
      sym__key_template,
    STATE(261), 1,
      aux_sym_key_string_content_repeat1,
    STATE(302), 1,
      sym_key_value,
    STATE(526), 1,
      sym_key_string,
    STATE(52), 2,
      sym_header,
      aux_sym_request_repeat1,
    STATE(203), 2,
      sym__bracketed_key_content,
      sym_key_string_content,
    ACTIONS(232), 3,
      sym__json_array_start,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(234), 34,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__json_number,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LBRACE_LBRACE2,
      sym_comment,
  [2592] = 3,
    ACTIONS(206), 1,
      sym_comment,
    ACTIONS(436), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(434), 43,
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
  [2648] = 11,
    ACTIONS(92), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(94), 1,
      sym_key_string_text,
    ACTIONS(96), 1,
      sym_key_string_escaped_char,
    ACTIONS(110), 1,
      sym__bracketed_key_start,
    STATE(201), 1,
      sym__key_template,
    STATE(261), 1,
      aux_sym_key_string_content_repeat1,
    STATE(524), 1,
      sym_key_string,
    STATE(55), 2,
      sym_capture,
      aux_sym_captures_section_repeat1,
    STATE(203), 2,
      sym__bracketed_key_content,
      sym_key_string_content,
    ACTIONS(438), 3,
      sym__json_array_start,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(440), 34,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__json_number,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LBRACE_LBRACE2,
      sym_comment,
  [2719] = 11,
    ACTIONS(92), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(94), 1,
      sym_key_string_text,
    ACTIONS(96), 1,
      sym_key_string_escaped_char,
    ACTIONS(110), 1,
      sym__bracketed_key_start,
    STATE(201), 1,
      sym__key_template,
    STATE(261), 1,
      aux_sym_key_string_content_repeat1,
    STATE(524), 1,
      sym_key_string,
    STATE(63), 2,
      sym_capture,
      aux_sym_captures_section_repeat1,
    STATE(203), 2,
      sym__bracketed_key_content,
      sym_key_string_content,
    ACTIONS(442), 3,
      sym__json_array_start,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(444), 34,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__json_number,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LBRACE_LBRACE2,
      sym_comment,
  [2790] = 3,
    ACTIONS(206), 1,
      sym_comment,
    ACTIONS(448), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(446), 42,
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
  [2845] = 3,
    ACTIONS(206), 1,
      sym_comment,
    ACTIONS(452), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(450), 42,
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
  [2900] = 3,
    ACTIONS(206), 1,
      sym_comment,
    ACTIONS(456), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(454), 42,
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
  [2955] = 3,
    ACTIONS(206), 1,
      sym_comment,
    ACTIONS(460), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(458), 42,
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
  [3010] = 3,
    ACTIONS(206), 1,
      sym_comment,
    ACTIONS(464), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(462), 42,
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
  [3065] = 3,
    ACTIONS(206), 1,
      sym_comment,
    ACTIONS(468), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(466), 42,
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
  [3120] = 3,
    ACTIONS(206), 1,
      sym_comment,
    ACTIONS(472), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(470), 42,
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
  [3175] = 11,
    ACTIONS(478), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(481), 1,
      sym_key_string_text,
    ACTIONS(484), 1,
      sym_key_string_escaped_char,
    ACTIONS(487), 1,
      sym__bracketed_key_start,
    STATE(201), 1,
      sym__key_template,
    STATE(261), 1,
      aux_sym_key_string_content_repeat1,
    STATE(524), 1,
      sym_key_string,
    STATE(63), 2,
      sym_capture,
      aux_sym_captures_section_repeat1,
    STATE(203), 2,
      sym__bracketed_key_content,
      sym_key_string_content,
    ACTIONS(474), 3,
      sym__json_array_start,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(476), 34,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__json_number,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LBRACE_LBRACE2,
      sym_comment,
  [3246] = 3,
    ACTIONS(206), 1,
      sym_comment,
    ACTIONS(492), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(490), 42,
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
  [3301] = 3,
    ACTIONS(206), 1,
      sym_comment,
    ACTIONS(496), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(494), 41,
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
  [3355] = 3,
    ACTIONS(206), 1,
      sym_comment,
    ACTIONS(500), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(498), 41,
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
  [3409] = 3,
    ACTIONS(206), 1,
      sym_comment,
    ACTIONS(504), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(502), 41,
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
  [3463] = 3,
    ACTIONS(206), 1,
      sym_comment,
    ACTIONS(508), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(506), 41,
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
  [3517] = 3,
    ACTIONS(206), 1,
      sym_comment,
    ACTIONS(512), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(510), 41,
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
  [3571] = 3,
    ACTIONS(206), 1,
      sym_comment,
    ACTIONS(516), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(514), 41,
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
  [3625] = 3,
    ACTIONS(206), 1,
      sym_comment,
    ACTIONS(520), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(518), 41,
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
  [3679] = 3,
    ACTIONS(206), 1,
      sym_comment,
    ACTIONS(524), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(522), 41,
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
  [3733] = 21,
    ACTIONS(162), 1,
      anon_sym_equals,
    ACTIONS(164), 1,
      anon_sym_EQ_EQ,
    ACTIONS(166), 1,
      anon_sym_notEquals,
    ACTIONS(168), 1,
      anon_sym_BANG_EQ,
    ACTIONS(170), 1,
      anon_sym_greaterThan,
    ACTIONS(172), 1,
      anon_sym_GT,
    ACTIONS(174), 1,
      anon_sym_greaterThanOrEquals,
    ACTIONS(176), 1,
      anon_sym_GT_EQ,
    ACTIONS(178), 1,
      anon_sym_lessThan,
    ACTIONS(180), 1,
      anon_sym_LT,
    ACTIONS(182), 1,
      anon_sym_lessThanOrEquals,
    ACTIONS(184), 1,
      anon_sym_LT_EQ,
    ACTIONS(186), 1,
      anon_sym_startsWith,
    ACTIONS(188), 1,
      anon_sym_endsWith,
    ACTIONS(190), 1,
      anon_sym_contains,
    ACTIONS(192), 1,
      anon_sym_matches,
    ACTIONS(194), 1,
      anon_sym_includes,
    ACTIONS(206), 1,
      sym_comment,
    STATE(478), 1,
      sym_predicate_func,
    ACTIONS(160), 12,
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
    STATE(464), 12,
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
  [3819] = 5,
    ACTIONS(526), 1,
      anon_sym_LF,
    ACTIONS(528), 1,
      sym_comment,
    STATE(75), 1,
      aux_sym__comment_or_new_line_repeat1,
    ACTIONS(130), 5,
      sym__json_array_start,
      sym__bracketed_key_start,
      ts_builtin_sym_end,
      anon_sym_LBRACE_LBRACE,
      sym_key_string_escaped_char,
    ACTIONS(134), 34,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
      sym_key_string_text,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__json_number,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LBRACE_LBRACE2,
  [3872] = 5,
    ACTIONS(530), 1,
      anon_sym_LF,
    ACTIONS(533), 1,
      sym_comment,
    STATE(75), 1,
      aux_sym__comment_or_new_line_repeat1,
    ACTIONS(120), 5,
      sym__json_array_start,
      sym__bracketed_key_start,
      ts_builtin_sym_end,
      anon_sym_LBRACE_LBRACE,
      sym_key_string_escaped_char,
    ACTIONS(125), 34,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
      sym_key_string_text,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__json_number,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LBRACE_LBRACE2,
  [3925] = 2,
    ACTIONS(536), 6,
      sym__json_array_start,
      sym__bracketed_key_start,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
      sym_key_string_escaped_char,
    ACTIONS(538), 35,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
      sym_key_string_text,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__json_number,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LBRACE_LBRACE2,
      sym_comment,
  [3971] = 2,
    ACTIONS(540), 6,
      sym__json_array_start,
      sym__bracketed_key_start,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
      sym_key_string_escaped_char,
    ACTIONS(542), 35,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
      sym_key_string_text,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__json_number,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LBRACE_LBRACE2,
      sym_comment,
  [4017] = 2,
    ACTIONS(392), 6,
      sym__json_array_start,
      sym__bracketed_key_start,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
      sym_key_string_escaped_char,
    ACTIONS(394), 35,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
      sym_key_string_text,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__json_number,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LBRACE_LBRACE2,
      sym_comment,
  [4063] = 6,
    ACTIONS(548), 1,
      anon_sym_LBRACKCaptures_RBRACK,
    ACTIONS(551), 1,
      anon_sym_LBRACKAsserts_RBRACK,
    STATE(79), 2,
      sym_response_section,
      aux_sym_response_repeat1,
    STATE(80), 2,
      sym_captures_section,
      sym_asserts_section,
    ACTIONS(544), 3,
      sym__json_array_start,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(546), 32,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__json_number,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LBRACE_LBRACE2,
      sym_comment,
  [4117] = 2,
    ACTIONS(554), 3,
      sym__json_array_start,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(556), 34,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__json_number,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LBRACE_LBRACE2,
      sym_comment,
  [4159] = 14,
    ACTIONS(558), 1,
      anon_sym_LF,
    ACTIONS(560), 1,
      anon_sym_xpath,
    ACTIONS(562), 1,
      anon_sym_regex,
    ACTIONS(568), 1,
      anon_sym_nth,
    ACTIONS(570), 1,
      anon_sym_replace,
    ACTIONS(572), 1,
      anon_sym_split,
    ACTIONS(574), 1,
      sym_comment,
    ACTIONS(576), 1,
      sym__eof,
    STATE(74), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(76), 2,
      sym__comment_or_new_line,
      sym__line_ending,
    STATE(85), 2,
      sym_filter,
      aux_sym_capture_repeat1,
    ACTIONS(566), 3,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_toDate,
    STATE(128), 7,
      sym_simple_filter_key,
      sym_argument_filter,
      sym_regex_filter,
      sym_nth_filter,
      sym_replace_filter,
      sym_split_filter,
      sym_xpath_filter,
    ACTIONS(564), 8,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_toInt,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
  [4219] = 14,
    ACTIONS(558), 1,
      anon_sym_LF,
    ACTIONS(560), 1,
      anon_sym_xpath,
    ACTIONS(562), 1,
      anon_sym_regex,
    ACTIONS(568), 1,
      anon_sym_nth,
    ACTIONS(570), 1,
      anon_sym_replace,
    ACTIONS(572), 1,
      anon_sym_split,
    ACTIONS(574), 1,
      sym_comment,
    ACTIONS(578), 1,
      sym__eof,
    STATE(74), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(77), 2,
      sym__comment_or_new_line,
      sym__line_ending,
    STATE(81), 2,
      sym_filter,
      aux_sym_capture_repeat1,
    ACTIONS(566), 3,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_toDate,
    STATE(128), 7,
      sym_simple_filter_key,
      sym_argument_filter,
      sym_regex_filter,
      sym_nth_filter,
      sym_replace_filter,
      sym_split_filter,
      sym_xpath_filter,
    ACTIONS(564), 8,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_toInt,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
  [4279] = 9,
    ACTIONS(7), 1,
      anon_sym_LF,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(580), 1,
      ts_builtin_sym_end,
    STATE(105), 1,
      sym_response,
    STATE(106), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(109), 1,
      sym__comment_or_new_line,
    STATE(357), 1,
      sym_version,
    ACTIONS(584), 6,
      anon_sym_HTTP_SLASH1_DOT0,
      anon_sym_HTTP_SLASH1_DOT1,
      anon_sym_HTTP_SLASH2,
      anon_sym_HTTP_SLASH3,
      anon_sym_HTTP_SLASH_STAR,
      anon_sym_HTTP,
    ACTIONS(582), 17,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
  [4328] = 9,
    ACTIONS(7), 1,
      anon_sym_LF,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(586), 1,
      ts_builtin_sym_end,
    STATE(103), 1,
      sym_response,
    STATE(106), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(121), 1,
      sym__comment_or_new_line,
    STATE(357), 1,
      sym_version,
    ACTIONS(584), 6,
      anon_sym_HTTP_SLASH1_DOT0,
      anon_sym_HTTP_SLASH1_DOT1,
      anon_sym_HTTP_SLASH2,
      anon_sym_HTTP_SLASH3,
      anon_sym_HTTP_SLASH_STAR,
      anon_sym_HTTP,
    ACTIONS(588), 17,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
  [4377] = 11,
    ACTIONS(363), 1,
      sym_comment,
    ACTIONS(590), 1,
      anon_sym_xpath,
    ACTIONS(593), 1,
      anon_sym_regex,
    ACTIONS(602), 1,
      anon_sym_nth,
    ACTIONS(605), 1,
      anon_sym_replace,
    ACTIONS(608), 1,
      anon_sym_split,
    ACTIONS(365), 2,
      sym__eof,
      anon_sym_LF,
    STATE(85), 2,
      sym_filter,
      aux_sym_capture_repeat1,
    ACTIONS(599), 3,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_toDate,
    STATE(128), 7,
      sym_simple_filter_key,
      sym_argument_filter,
      sym_regex_filter,
      sym_nth_filter,
      sym_replace_filter,
      sym_split_filter,
      sym_xpath_filter,
    ACTIONS(596), 8,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_toInt,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
  [4428] = 5,
    ACTIONS(130), 1,
      ts_builtin_sym_end,
    ACTIONS(611), 1,
      anon_sym_LF,
    ACTIONS(613), 1,
      sym_comment,
    STATE(90), 1,
      aux_sym__comment_or_new_line_repeat1,
    ACTIONS(134), 23,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
  [4466] = 9,
    ACTIONS(7), 1,
      anon_sym_LF,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(615), 1,
      ts_builtin_sym_end,
    STATE(84), 1,
      sym_request,
    STATE(106), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(149), 1,
      sym_method,
    STATE(91), 2,
      sym_entry,
      aux_sym_hurl_file_repeat1,
    STATE(98), 2,
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
  [4512] = 11,
    ACTIONS(154), 1,
      anon_sym_xpath,
    ACTIONS(156), 1,
      anon_sym_regex,
    ACTIONS(200), 1,
      anon_sym_nth,
    ACTIONS(202), 1,
      anon_sym_replace,
    ACTIONS(204), 1,
      anon_sym_split,
    ACTIONS(206), 1,
      sym_comment,
    ACTIONS(617), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(38), 2,
      sym_filter,
      aux_sym_capture_repeat1,
    ACTIONS(198), 3,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_toDate,
    STATE(59), 7,
      sym_simple_filter_key,
      sym_argument_filter,
      sym_regex_filter,
      sym_nth_filter,
      sym_replace_filter,
      sym_split_filter,
      sym_xpath_filter,
    ACTIONS(196), 8,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_toInt,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
  [4562] = 11,
    ACTIONS(154), 1,
      anon_sym_xpath,
    ACTIONS(156), 1,
      anon_sym_regex,
    ACTIONS(200), 1,
      anon_sym_nth,
    ACTIONS(202), 1,
      anon_sym_replace,
    ACTIONS(204), 1,
      anon_sym_split,
    ACTIONS(206), 1,
      sym_comment,
    ACTIONS(619), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(88), 2,
      sym_filter,
      aux_sym_capture_repeat1,
    ACTIONS(198), 3,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_toDate,
    STATE(59), 7,
      sym_simple_filter_key,
      sym_argument_filter,
      sym_regex_filter,
      sym_nth_filter,
      sym_replace_filter,
      sym_split_filter,
      sym_xpath_filter,
    ACTIONS(196), 8,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_toInt,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
  [4612] = 5,
    ACTIONS(120), 1,
      ts_builtin_sym_end,
    ACTIONS(621), 1,
      anon_sym_LF,
    ACTIONS(624), 1,
      sym_comment,
    STATE(90), 1,
      aux_sym__comment_or_new_line_repeat1,
    ACTIONS(125), 23,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
  [4650] = 9,
    ACTIONS(627), 1,
      ts_builtin_sym_end,
    ACTIONS(629), 1,
      anon_sym_LF,
    ACTIONS(635), 1,
      sym_comment,
    STATE(84), 1,
      sym_request,
    STATE(115), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(149), 1,
      sym_method,
    STATE(91), 2,
      sym_entry,
      aux_sym_hurl_file_repeat1,
    STATE(99), 2,
      sym__comment_or_new_line,
      aux_sym_hurl_file_repeat2,
    ACTIONS(632), 17,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
  [4696] = 2,
    ACTIONS(138), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(140), 24,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
  [4727] = 2,
    ACTIONS(116), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(118), 24,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
  [4758] = 2,
    ACTIONS(638), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(640), 24,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
  [4789] = 2,
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
  [4820] = 2,
    ACTIONS(642), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(644), 24,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
  [4851] = 8,
    ACTIONS(7), 1,
      anon_sym_LF,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(615), 1,
      ts_builtin_sym_end,
    STATE(83), 1,
      sym_request,
    STATE(106), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(149), 1,
      sym_method,
    STATE(100), 2,
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
  [4893] = 8,
    ACTIONS(7), 1,
      anon_sym_LF,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(646), 1,
      ts_builtin_sym_end,
    STATE(83), 1,
      sym_request,
    STATE(106), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(149), 1,
      sym_method,
    STATE(100), 2,
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
  [4935] = 7,
    ACTIONS(648), 1,
      anon_sym_LF,
    ACTIONS(650), 1,
      sym_comment,
    STATE(83), 1,
      sym_request,
    STATE(115), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(149), 1,
      sym_method,
    STATE(104), 2,
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
  [4974] = 6,
    ACTIONS(652), 1,
      ts_builtin_sym_end,
    ACTIONS(654), 1,
      anon_sym_LF,
    ACTIONS(659), 1,
      sym_comment,
    STATE(106), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(100), 2,
      sym__comment_or_new_line,
      aux_sym_hurl_file_repeat2,
    ACTIONS(657), 17,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
  [5010] = 13,
    ACTIONS(666), 1,
      anon_sym_file_COMMA,
    ACTIONS(668), 1,
      anon_sym_BSLASH,
    ACTIONS(670), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(674), 1,
      anon_sym_LBRACE_LBRACE2,
    ACTIONS(676), 1,
      sym__eof,
    STATE(224), 1,
      aux_sym_value_string_text_repeat1,
    STATE(444), 1,
      sym_file_value,
    ACTIONS(662), 2,
      anon_sym_LF,
      sym_comment,
    ACTIONS(672), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(468), 2,
      sym_value_string,
      sym_boolean,
    ACTIONS(664), 3,
      anon_sym_null,
      sym_integer,
      sym_float,
    STATE(160), 3,
      sym_value_string_content,
      sym_template,
      aux_sym_value_string_repeat1,
    STATE(194), 3,
      sym_value_string_text,
      sym_value_string_escaped_char,
      aux_sym_value_string_content_repeat1,
  [5059] = 10,
    ACTIONS(206), 1,
      sym_comment,
    ACTIONS(678), 1,
      anon_sym_header,
    ACTIONS(680), 1,
      anon_sym_variable,
    ACTIONS(684), 1,
      anon_sym_cookie,
    ACTIONS(686), 1,
      anon_sym_xpath,
    ACTIONS(688), 1,
      anon_sym_jsonpath,
    ACTIONS(690), 1,
      anon_sym_regex,
    STATE(82), 1,
      sym_query,
    ACTIONS(682), 7,
      anon_sym_status,
      anon_sym_url,
      anon_sym_body,
      anon_sym_duration,
      anon_sym_bytes,
      anon_sym_sha256,
      anon_sym_md5,
    STATE(136), 7,
      sym_simple_query,
      sym_header_query,
      sym_cookie_query,
      sym_xpath_query,
      sym_jsonpath_query,
      sym_regex_query,
      sym_variable_query,
  [5102] = 6,
    ACTIONS(7), 1,
      anon_sym_LF,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(580), 1,
      ts_builtin_sym_end,
    STATE(106), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(109), 1,
      sym__comment_or_new_line,
    ACTIONS(582), 17,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
  [5137] = 5,
    ACTIONS(692), 1,
      anon_sym_LF,
    ACTIONS(695), 1,
      sym_comment,
    STATE(115), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(104), 2,
      sym__comment_or_new_line,
      aux_sym_hurl_file_repeat2,
    ACTIONS(657), 17,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
  [5170] = 6,
    ACTIONS(7), 1,
      anon_sym_LF,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(698), 1,
      ts_builtin_sym_end,
    STATE(106), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(108), 1,
      sym__comment_or_new_line,
    ACTIONS(700), 17,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
  [5205] = 5,
    ACTIONS(130), 1,
      ts_builtin_sym_end,
    ACTIONS(702), 1,
      anon_sym_LF,
    ACTIONS(704), 1,
      sym_comment,
    STATE(107), 1,
      aux_sym__comment_or_new_line_repeat1,
    ACTIONS(134), 17,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
  [5237] = 5,
    ACTIONS(120), 1,
      ts_builtin_sym_end,
    ACTIONS(706), 1,
      anon_sym_LF,
    ACTIONS(709), 1,
      sym_comment,
    STATE(107), 1,
      aux_sym__comment_or_new_line_repeat1,
    ACTIONS(125), 17,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
  [5269] = 2,
    ACTIONS(712), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(714), 18,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
  [5294] = 2,
    ACTIONS(698), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(700), 18,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
  [5319] = 12,
    ACTIONS(206), 1,
      sym_comment,
    ACTIONS(718), 1,
      anon_sym_file_COMMA,
    ACTIONS(720), 1,
      anon_sym_base64_COMMA,
    ACTIONS(722), 1,
      anon_sym_hex_COMMA,
    ACTIONS(724), 1,
      anon_sym_DQUOTE,
    ACTIONS(726), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(730), 1,
      anon_sym_LBRACE_LBRACE2,
    ACTIONS(732), 1,
      sym_integer,
    STATE(391), 1,
      sym_predicate_value,
    ACTIONS(716), 2,
      anon_sym_null,
      sym_float,
    ACTIONS(728), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(390), 7,
      sym_oneline_base64,
      sym_oneline_file,
      sym_oneline_hex,
      sym_quoted_string,
      sym_multiline_string,
      sym_template,
      sym_boolean,
  [5364] = 12,
    ACTIONS(206), 1,
      sym_comment,
    ACTIONS(718), 1,
      anon_sym_file_COMMA,
    ACTIONS(720), 1,
      anon_sym_base64_COMMA,
    ACTIONS(722), 1,
      anon_sym_hex_COMMA,
    ACTIONS(724), 1,
      anon_sym_DQUOTE,
    ACTIONS(726), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(730), 1,
      anon_sym_LBRACE_LBRACE2,
    ACTIONS(732), 1,
      sym_integer,
    STATE(393), 1,
      sym_predicate_value,
    ACTIONS(716), 2,
      anon_sym_null,
      sym_float,
    ACTIONS(728), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(390), 7,
      sym_oneline_base64,
      sym_oneline_file,
      sym_oneline_hex,
      sym_quoted_string,
      sym_multiline_string,
      sym_template,
      sym_boolean,
  [5409] = 12,
    ACTIONS(206), 1,
      sym_comment,
    ACTIONS(718), 1,
      anon_sym_file_COMMA,
    ACTIONS(720), 1,
      anon_sym_base64_COMMA,
    ACTIONS(722), 1,
      anon_sym_hex_COMMA,
    ACTIONS(724), 1,
      anon_sym_DQUOTE,
    ACTIONS(726), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(730), 1,
      anon_sym_LBRACE_LBRACE2,
    ACTIONS(732), 1,
      sym_integer,
    STATE(392), 1,
      sym_predicate_value,
    ACTIONS(716), 2,
      anon_sym_null,
      sym_float,
    ACTIONS(728), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(390), 7,
      sym_oneline_base64,
      sym_oneline_file,
      sym_oneline_hex,
      sym_quoted_string,
      sym_multiline_string,
      sym_template,
      sym_boolean,
  [5454] = 12,
    ACTIONS(206), 1,
      sym_comment,
    ACTIONS(718), 1,
      anon_sym_file_COMMA,
    ACTIONS(720), 1,
      anon_sym_base64_COMMA,
    ACTIONS(722), 1,
      anon_sym_hex_COMMA,
    ACTIONS(724), 1,
      anon_sym_DQUOTE,
    ACTIONS(726), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(730), 1,
      anon_sym_LBRACE_LBRACE2,
    ACTIONS(732), 1,
      sym_integer,
    STATE(394), 1,
      sym_predicate_value,
    ACTIONS(716), 2,
      anon_sym_null,
      sym_float,
    ACTIONS(728), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(390), 7,
      sym_oneline_base64,
      sym_oneline_file,
      sym_oneline_hex,
      sym_quoted_string,
      sym_multiline_string,
      sym_template,
      sym_boolean,
  [5499] = 12,
    ACTIONS(206), 1,
      sym_comment,
    ACTIONS(718), 1,
      anon_sym_file_COMMA,
    ACTIONS(720), 1,
      anon_sym_base64_COMMA,
    ACTIONS(722), 1,
      anon_sym_hex_COMMA,
    ACTIONS(724), 1,
      anon_sym_DQUOTE,
    ACTIONS(726), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(730), 1,
      anon_sym_LBRACE_LBRACE2,
    ACTIONS(732), 1,
      sym_integer,
    STATE(407), 1,
      sym_predicate_value,
    ACTIONS(716), 2,
      anon_sym_null,
      sym_float,
    ACTIONS(728), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(390), 7,
      sym_oneline_base64,
      sym_oneline_file,
      sym_oneline_hex,
      sym_quoted_string,
      sym_multiline_string,
      sym_template,
      sym_boolean,
  [5544] = 4,
    ACTIONS(734), 1,
      anon_sym_LF,
    ACTIONS(736), 1,
      sym_comment,
    STATE(116), 1,
      aux_sym__comment_or_new_line_repeat1,
    ACTIONS(134), 17,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
  [5573] = 4,
    ACTIONS(738), 1,
      anon_sym_LF,
    ACTIONS(741), 1,
      sym_comment,
    STATE(116), 1,
      aux_sym__comment_or_new_line_repeat1,
    ACTIONS(125), 17,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
  [5602] = 2,
    ACTIONS(744), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(746), 18,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
  [5627] = 11,
    ACTIONS(668), 1,
      anon_sym_BSLASH,
    ACTIONS(670), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(674), 1,
      anon_sym_LBRACE_LBRACE2,
    ACTIONS(676), 1,
      sym__eof,
    STATE(224), 1,
      aux_sym_value_string_text_repeat1,
    ACTIONS(662), 2,
      anon_sym_LF,
      sym_comment,
    ACTIONS(672), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(468), 2,
      sym_value_string,
      sym_boolean,
    ACTIONS(664), 3,
      anon_sym_null,
      sym_integer,
      sym_float,
    STATE(160), 3,
      sym_value_string_content,
      sym_template,
      aux_sym_value_string_repeat1,
    STATE(194), 3,
      sym_value_string_text,
      sym_value_string_escaped_char,
      aux_sym_value_string_content_repeat1,
  [5670] = 2,
    ACTIONS(248), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(250), 18,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
  [5695] = 2,
    ACTIONS(150), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(152), 18,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
  [5720] = 2,
    ACTIONS(580), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(582), 18,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
  [5745] = 2,
    ACTIONS(638), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(640), 18,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
  [5770] = 2,
    ACTIONS(514), 2,
      sym__eof,
      anon_sym_LF,
    ACTIONS(516), 17,
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
  [5794] = 2,
    ACTIONS(506), 2,
      sym__eof,
      anon_sym_LF,
    ACTIONS(508), 17,
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
  [5818] = 2,
    ACTIONS(498), 2,
      sym__eof,
      anon_sym_LF,
    ACTIONS(500), 17,
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
  [5842] = 2,
    ACTIONS(466), 2,
      sym__eof,
      anon_sym_LF,
    ACTIONS(468), 17,
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
  [5866] = 2,
    ACTIONS(490), 2,
      sym__eof,
      anon_sym_LF,
    ACTIONS(492), 17,
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
  [5890] = 2,
    ACTIONS(458), 2,
      sym__eof,
      anon_sym_LF,
    ACTIONS(460), 17,
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
  [5914] = 2,
    ACTIONS(502), 2,
      sym__eof,
      anon_sym_LF,
    ACTIONS(504), 17,
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
  [5938] = 2,
    ACTIONS(462), 2,
      sym__eof,
      anon_sym_LF,
    ACTIONS(464), 17,
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
  [5962] = 2,
    ACTIONS(454), 2,
      sym__eof,
      anon_sym_LF,
    ACTIONS(456), 17,
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
  [5986] = 2,
    ACTIONS(422), 2,
      sym__eof,
      anon_sym_LF,
    ACTIONS(424), 17,
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
  [6010] = 2,
    ACTIONS(426), 2,
      sym__eof,
      anon_sym_LF,
    ACTIONS(428), 17,
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
  [6034] = 2,
    ACTIONS(494), 2,
      sym__eof,
      anon_sym_LF,
    ACTIONS(496), 17,
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
  [6058] = 2,
    ACTIONS(450), 2,
      sym__eof,
      anon_sym_LF,
    ACTIONS(452), 17,
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
  [6082] = 2,
    ACTIONS(510), 2,
      sym__eof,
      anon_sym_LF,
    ACTIONS(512), 17,
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
  [6106] = 13,
    ACTIONS(206), 1,
      sym_comment,
    ACTIONS(724), 1,
      anon_sym_DQUOTE,
    ACTIONS(750), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(752), 1,
      sym_key_string_text,
    ACTIONS(754), 1,
      sym_key_string_escaped_char,
    ACTIONS(756), 1,
      sym__bracketed_key_start,
    STATE(189), 1,
      sym__key_template,
    STATE(229), 1,
      aux_sym_key_string_content_repeat1,
    STATE(413), 1,
      sym_variable_value,
    ACTIONS(672), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(190), 2,
      sym__bracketed_key_content,
      sym_key_string_content,
    ACTIONS(748), 3,
      anon_sym_null,
      sym_integer,
      sym_float,
    STATE(412), 3,
      sym_quoted_string,
      sym_key_string,
      sym_boolean,
  [6152] = 2,
    ACTIONS(470), 2,
      sym__eof,
      anon_sym_LF,
    ACTIONS(472), 17,
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
  [6176] = 2,
    ACTIONS(206), 1,
      sym_comment,
    ACTIONS(758), 18,
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
  [6200] = 2,
    ACTIONS(522), 2,
      sym__eof,
      anon_sym_LF,
    ACTIONS(524), 17,
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
  [6224] = 2,
    ACTIONS(430), 2,
      sym__eof,
      anon_sym_LF,
    ACTIONS(432), 17,
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
  [6248] = 2,
    ACTIONS(446), 2,
      sym__eof,
      anon_sym_LF,
    ACTIONS(448), 17,
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
  [6272] = 2,
    ACTIONS(518), 2,
      sym__eof,
      anon_sym_LF,
    ACTIONS(520), 17,
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
  [6296] = 2,
    ACTIONS(434), 2,
      sym__eof,
      anon_sym_LF,
    ACTIONS(436), 17,
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
  [6320] = 14,
    ACTIONS(92), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(110), 1,
      sym__bracketed_key_start,
    ACTIONS(760), 1,
      anon_sym_LF,
    ACTIONS(762), 1,
      sym_comment,
    ACTIONS(764), 1,
      sym__eof,
    STATE(40), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(201), 1,
      sym__key_template,
    STATE(233), 1,
      sym_key_value,
    STATE(237), 1,
      aux_sym_query_string_params_section_repeat1,
    STATE(261), 1,
      aux_sym_key_string_content_repeat1,
    STATE(526), 1,
      sym_key_string,
    ACTIONS(96), 2,
      sym_key_string_text,
      sym_key_string_escaped_char,
    STATE(25), 2,
      sym__comment_or_new_line,
      sym__line_ending,
    STATE(203), 2,
      sym__bracketed_key_content,
      sym_key_string_content,
  [6366] = 14,
    ACTIONS(92), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(110), 1,
      sym__bracketed_key_start,
    ACTIONS(760), 1,
      anon_sym_LF,
    ACTIONS(762), 1,
      sym_comment,
    ACTIONS(766), 1,
      sym__eof,
    STATE(40), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(201), 1,
      sym__key_template,
    STATE(226), 1,
      aux_sym_query_string_params_section_repeat1,
    STATE(242), 1,
      sym_key_value,
    STATE(261), 1,
      aux_sym_key_string_content_repeat1,
    STATE(526), 1,
      sym_key_string,
    ACTIONS(96), 2,
      sym_key_string_text,
      sym_key_string_escaped_char,
    STATE(33), 2,
      sym__comment_or_new_line,
      sym__line_ending,
    STATE(203), 2,
      sym__bracketed_key_content,
      sym_key_string_content,
  [6412] = 14,
    ACTIONS(92), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(110), 1,
      sym__bracketed_key_start,
    ACTIONS(760), 1,
      anon_sym_LF,
    ACTIONS(762), 1,
      sym_comment,
    ACTIONS(768), 1,
      sym__eof,
    STATE(40), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(201), 1,
      sym__key_template,
    STATE(232), 1,
      aux_sym_query_string_params_section_repeat1,
    STATE(241), 1,
      sym_key_value,
    STATE(261), 1,
      aux_sym_key_string_content_repeat1,
    STATE(526), 1,
      sym_key_string,
    ACTIONS(96), 2,
      sym_key_string_text,
      sym_key_string_escaped_char,
    STATE(36), 2,
      sym__comment_or_new_line,
      sym__line_ending,
    STATE(203), 2,
      sym__bracketed_key_content,
      sym_key_string_content,
  [6458] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(770), 1,
      anon_sym_LT,
    ACTIONS(772), 1,
      anon_sym_LT_QMARK,
    ACTIONS(774), 1,
      anon_sym_LT_SLASH,
    ACTIONS(776), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(778), 1,
      anon_sym_LBRACE_LBRACE2,
    STATE(148), 1,
      sym_xml_open_tag,
    STATE(230), 1,
      aux_sym_value_string_text_repeat1,
    STATE(252), 1,
      sym_xml_self_closing_tag,
    STATE(296), 1,
      sym_xml_close_tag,
    STATE(187), 3,
      sym_value_string_text,
      sym_template,
      aux_sym_xml_value_string_repeat1,
    STATE(154), 4,
      sym_xml_prolog_tag,
      sym_xml_tag,
      sym_xml_value_string,
      aux_sym_xml_tag_repeat1,
  [6500] = 11,
    ACTIONS(668), 1,
      anon_sym_BSLASH,
    ACTIONS(670), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(674), 1,
      anon_sym_LBRACE_LBRACE2,
    ACTIONS(780), 1,
      sym__eof,
    STATE(40), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(224), 1,
      aux_sym_value_string_text_repeat1,
    STATE(301), 1,
      sym_value_string,
    ACTIONS(762), 2,
      anon_sym_LF,
      sym_comment,
    STATE(5), 2,
      sym__comment_or_new_line,
      sym__line_ending,
    STATE(160), 3,
      sym_value_string_content,
      sym_template,
      aux_sym_value_string_repeat1,
    STATE(194), 3,
      sym_value_string_text,
      sym_value_string_escaped_char,
      aux_sym_value_string_content_repeat1,
  [6540] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(770), 1,
      anon_sym_LT,
    ACTIONS(772), 1,
      anon_sym_LT_QMARK,
    ACTIONS(776), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(778), 1,
      anon_sym_LBRACE_LBRACE2,
    ACTIONS(782), 1,
      anon_sym_LT_SLASH,
    STATE(148), 1,
      sym_xml_open_tag,
    STATE(230), 1,
      aux_sym_value_string_text_repeat1,
    STATE(252), 1,
      sym_xml_self_closing_tag,
    STATE(410), 1,
      sym_xml_close_tag,
    STATE(187), 3,
      sym_value_string_text,
      sym_template,
      aux_sym_xml_value_string_repeat1,
    STATE(151), 4,
      sym_xml_prolog_tag,
      sym_xml_tag,
      sym_xml_value_string,
      aux_sym_xml_tag_repeat1,
  [6582] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(770), 1,
      anon_sym_LT,
    ACTIONS(772), 1,
      anon_sym_LT_QMARK,
    ACTIONS(776), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(778), 1,
      anon_sym_LBRACE_LBRACE2,
    ACTIONS(782), 1,
      anon_sym_LT_SLASH,
    STATE(148), 1,
      sym_xml_open_tag,
    STATE(230), 1,
      aux_sym_value_string_text_repeat1,
    STATE(252), 1,
      sym_xml_self_closing_tag,
    STATE(462), 1,
      sym_xml_close_tag,
    STATE(187), 3,
      sym_value_string_text,
      sym_template,
      aux_sym_xml_value_string_repeat1,
    STATE(155), 4,
      sym_xml_prolog_tag,
      sym_xml_tag,
      sym_xml_value_string,
      aux_sym_xml_tag_repeat1,
  [6624] = 11,
    ACTIONS(206), 1,
      sym_comment,
    ACTIONS(784), 1,
      anon_sym_null,
    ACTIONS(786), 1,
      anon_sym_LBRACE,
    ACTIONS(788), 1,
      anon_sym_DQUOTE,
    ACTIONS(790), 1,
      anon_sym_RBRACK,
    ACTIONS(792), 1,
      sym__json_number,
    ACTIONS(796), 1,
      anon_sym_LBRACE_LBRACE2,
    ACTIONS(798), 1,
      sym__json_array_start,
    STATE(350), 1,
      sym_json_value,
    ACTIONS(794), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(379), 6,
      sym_json_object,
      sym_json_array,
      sym_json_string,
      sym_json_number,
      sym_json_boolean,
      sym_template,
  [6664] = 11,
    ACTIONS(206), 1,
      sym_comment,
    ACTIONS(784), 1,
      anon_sym_null,
    ACTIONS(786), 1,
      anon_sym_LBRACE,
    ACTIONS(788), 1,
      anon_sym_DQUOTE,
    ACTIONS(792), 1,
      sym__json_number,
    ACTIONS(796), 1,
      anon_sym_LBRACE_LBRACE2,
    ACTIONS(798), 1,
      sym__json_array_start,
    ACTIONS(800), 1,
      anon_sym_RBRACK,
    STATE(354), 1,
      sym_json_value,
    ACTIONS(794), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(379), 6,
      sym_json_object,
      sym_json_array,
      sym_json_string,
      sym_json_number,
      sym_json_boolean,
      sym_template,
  [6704] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(770), 1,
      anon_sym_LT,
    ACTIONS(772), 1,
      anon_sym_LT_QMARK,
    ACTIONS(774), 1,
      anon_sym_LT_SLASH,
    ACTIONS(776), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(778), 1,
      anon_sym_LBRACE_LBRACE2,
    STATE(148), 1,
      sym_xml_open_tag,
    STATE(230), 1,
      aux_sym_value_string_text_repeat1,
    STATE(249), 1,
      sym_xml_close_tag,
    STATE(252), 1,
      sym_xml_self_closing_tag,
    STATE(187), 3,
      sym_value_string_text,
      sym_template,
      aux_sym_xml_value_string_repeat1,
    STATE(155), 4,
      sym_xml_prolog_tag,
      sym_xml_tag,
      sym_xml_value_string,
      aux_sym_xml_tag_repeat1,
  [6746] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(802), 1,
      anon_sym_LT,
    ACTIONS(805), 1,
      anon_sym_LT_QMARK,
    ACTIONS(808), 1,
      anon_sym_LT_SLASH,
    ACTIONS(810), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(813), 1,
      anon_sym_LBRACE_LBRACE2,
    STATE(148), 1,
      sym_xml_open_tag,
    STATE(230), 1,
      aux_sym_value_string_text_repeat1,
    STATE(252), 1,
      sym_xml_self_closing_tag,
    STATE(187), 3,
      sym_value_string_text,
      sym_template,
      aux_sym_xml_value_string_repeat1,
    STATE(155), 4,
      sym_xml_prolog_tag,
      sym_xml_tag,
      sym_xml_value_string,
      aux_sym_xml_tag_repeat1,
  [6785] = 10,
    ACTIONS(206), 1,
      sym_comment,
    ACTIONS(784), 1,
      anon_sym_null,
    ACTIONS(786), 1,
      anon_sym_LBRACE,
    ACTIONS(788), 1,
      anon_sym_DQUOTE,
    ACTIONS(792), 1,
      sym__json_number,
    ACTIONS(796), 1,
      anon_sym_LBRACE_LBRACE2,
    ACTIONS(798), 1,
      sym__json_array_start,
    STATE(493), 1,
      sym_json_value,
    ACTIONS(794), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(379), 6,
      sym_json_object,
      sym_json_array,
      sym_json_string,
      sym_json_number,
      sym_json_boolean,
      sym_template,
  [6822] = 10,
    ACTIONS(206), 1,
      sym_comment,
    ACTIONS(784), 1,
      anon_sym_null,
    ACTIONS(786), 1,
      anon_sym_LBRACE,
    ACTIONS(788), 1,
      anon_sym_DQUOTE,
    ACTIONS(792), 1,
      sym__json_number,
    ACTIONS(796), 1,
      anon_sym_LBRACE_LBRACE2,
    ACTIONS(798), 1,
      sym__json_array_start,
    STATE(481), 1,
      sym_json_value,
    ACTIONS(794), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(379), 6,
      sym_json_object,
      sym_json_array,
      sym_json_string,
      sym_json_number,
      sym_json_boolean,
      sym_template,
  [6859] = 8,
    ACTIONS(818), 1,
      anon_sym_BSLASH,
    ACTIONS(821), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(824), 1,
      anon_sym_LBRACE_LBRACE2,
    ACTIONS(827), 1,
      sym__eof,
    STATE(224), 1,
      aux_sym_value_string_text_repeat1,
    ACTIONS(816), 2,
      anon_sym_LF,
      sym_comment,
    STATE(158), 3,
      sym_value_string_content,
      sym_template,
      aux_sym_value_string_repeat1,
    STATE(194), 3,
      sym_value_string_text,
      sym_value_string_escaped_char,
      aux_sym_value_string_content_repeat1,
  [6889] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(831), 1,
      anon_sym_u,
    ACTIONS(833), 1,
      anon_sym_POUND,
    ACTIONS(829), 10,
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
  [6911] = 8,
    ACTIONS(668), 1,
      anon_sym_BSLASH,
    ACTIONS(670), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(674), 1,
      anon_sym_LBRACE_LBRACE2,
    ACTIONS(837), 1,
      sym__eof,
    STATE(224), 1,
      aux_sym_value_string_text_repeat1,
    ACTIONS(835), 2,
      anon_sym_LF,
      sym_comment,
    STATE(158), 3,
      sym_value_string_content,
      sym_template,
      aux_sym_value_string_repeat1,
    STATE(194), 3,
      sym_value_string_text,
      sym_value_string_escaped_char,
      aux_sym_value_string_content_repeat1,
  [6941] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(668), 1,
      anon_sym_BSLASH,
    ACTIONS(670), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(674), 1,
      anon_sym_LBRACE_LBRACE2,
    STATE(224), 1,
      aux_sym_value_string_text_repeat1,
    STATE(297), 1,
      sym_template,
    STATE(506), 1,
      sym_value_string,
    STATE(160), 2,
      sym_value_string_content,
      aux_sym_value_string_repeat1,
    STATE(194), 3,
      sym_value_string_text,
      sym_value_string_escaped_char,
      aux_sym_value_string_content_repeat1,
  [6972] = 9,
    ACTIONS(92), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(110), 1,
      sym__bracketed_key_start,
    ACTIONS(206), 1,
      sym_comment,
    STATE(201), 1,
      sym__key_template,
    STATE(261), 1,
      aux_sym_key_string_content_repeat1,
    STATE(485), 1,
      sym_key_value,
    STATE(526), 1,
      sym_key_string,
    ACTIONS(96), 2,
      sym_key_string_text,
      sym_key_string_escaped_char,
    STATE(203), 2,
      sym__bracketed_key_content,
      sym_key_string_content,
  [7002] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(839), 1,
      anon_sym_BSLASH,
    ACTIONS(841), 1,
      anon_sym_DQUOTE,
    ACTIONS(843), 1,
      sym_quoted_string_text,
    ACTIONS(845), 1,
      anon_sym_LBRACE_LBRACE2,
    STATE(177), 3,
      sym_quoted_string_content,
      sym_template,
      aux_sym_quoted_string_repeat1,
    STATE(210), 3,
      sym_invalid_quoted_string_escaped_char,
      sym_quoted_string_escaped_char,
      aux_sym_quoted_string_content_repeat1,
  [7028] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(847), 1,
      anon_sym_BQUOTE,
    ACTIONS(849), 1,
      aux_sym_oneline_string_text_token1,
    ACTIONS(852), 1,
      anon_sym_LBRACE2,
    ACTIONS(855), 1,
      sym_oneline_string_escaped_char,
    ACTIONS(858), 1,
      anon_sym_LBRACE_LBRACE2,
    STATE(213), 2,
      sym_oneline_string_text,
      aux_sym_oneline_string_content_repeat1,
    STATE(164), 3,
      sym_oneline_string_content,
      sym_template,
      aux_sym_oneline_string_repeat1,
  [7056] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(839), 1,
      anon_sym_BSLASH,
    ACTIONS(843), 1,
      sym_quoted_string_text,
    ACTIONS(845), 1,
      anon_sym_LBRACE_LBRACE2,
    ACTIONS(861), 1,
      anon_sym_DQUOTE,
    STATE(184), 3,
      sym_quoted_string_content,
      sym_template,
      aux_sym_quoted_string_repeat1,
    STATE(210), 3,
      sym_invalid_quoted_string_escaped_char,
      sym_quoted_string_escaped_char,
      aux_sym_quoted_string_content_repeat1,
  [7082] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(863), 1,
      anon_sym_BSLASH,
    ACTIONS(866), 1,
      anon_sym_DQUOTE,
    ACTIONS(868), 1,
      aux_sym_json_string_text_token1,
    ACTIONS(871), 1,
      anon_sym_LBRACE_LBRACE2,
    STATE(260), 1,
      aux_sym_json_string_text_repeat1,
    STATE(166), 2,
      sym_json_string_content,
      aux_sym_json_string_repeat1,
    STATE(314), 3,
      sym_json_string_text,
      sym_json_string_escaped_char,
      sym_template,
  [7110] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(874), 1,
      anon_sym_LF,
    ACTIONS(876), 1,
      anon_sym_BSLASH,
    ACTIONS(878), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(880), 1,
      sym__multiline_string_text,
    ACTIONS(882), 1,
      anon_sym_LBRACE_LBRACE2,
    STATE(209), 2,
      sym_multiline_string_escaped_char,
      aux_sym_multiline_string_content_repeat1,
    STATE(169), 3,
      sym_multiline_string_content,
      sym_template,
      aux_sym_multiline_string_repeat1,
  [7138] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(884), 1,
      anon_sym_BSLASH,
    ACTIONS(886), 1,
      anon_sym_DQUOTE,
    ACTIONS(888), 1,
      aux_sym_json_string_text_token1,
    ACTIONS(890), 1,
      anon_sym_LBRACE_LBRACE2,
    STATE(260), 1,
      aux_sym_json_string_text_repeat1,
    STATE(178), 2,
      sym_json_string_content,
      aux_sym_json_string_repeat1,
    STATE(314), 3,
      sym_json_string_text,
      sym_json_string_escaped_char,
      sym_template,
  [7166] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(876), 1,
      anon_sym_BSLASH,
    ACTIONS(880), 1,
      sym__multiline_string_text,
    ACTIONS(882), 1,
      anon_sym_LBRACE_LBRACE2,
    ACTIONS(892), 1,
      anon_sym_LF,
    ACTIONS(894), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(209), 2,
      sym_multiline_string_escaped_char,
      aux_sym_multiline_string_content_repeat1,
    STATE(183), 3,
      sym_multiline_string_content,
      sym_template,
      aux_sym_multiline_string_repeat1,
  [7194] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(876), 1,
      anon_sym_BSLASH,
    ACTIONS(880), 1,
      sym__multiline_string_text,
    ACTIONS(882), 1,
      anon_sym_LBRACE_LBRACE2,
    ACTIONS(892), 1,
      anon_sym_LF,
    ACTIONS(894), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(209), 2,
      sym_multiline_string_escaped_char,
      aux_sym_multiline_string_content_repeat1,
    STATE(185), 3,
      sym_multiline_string_content,
      sym_template,
      aux_sym_multiline_string_repeat1,
  [7222] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(896), 1,
      anon_sym_SEMI,
    ACTIONS(898), 1,
      anon_sym_BSLASH,
    ACTIONS(900), 1,
      sym_filename_text,
    ACTIONS(902), 1,
      anon_sym_LBRACE_LBRACE2,
    STATE(529), 1,
      sym_filename,
    STATE(248), 2,
      sym_filename_escaped_char,
      aux_sym_filename_content_repeat1,
    STATE(198), 3,
      sym_filename_content,
      sym_template,
      aux_sym_filename_repeat1,
  [7250] = 9,
    ACTIONS(92), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(110), 1,
      sym__bracketed_key_start,
    ACTIONS(206), 1,
      sym_comment,
    STATE(201), 1,
      sym__key_template,
    STATE(261), 1,
      aux_sym_key_string_content_repeat1,
    STATE(274), 1,
      sym_key_value,
    STATE(526), 1,
      sym_key_string,
    ACTIONS(96), 2,
      sym_key_string_text,
      sym_key_string_escaped_char,
    STATE(203), 2,
      sym__bracketed_key_content,
      sym_key_string_content,
  [7280] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(884), 1,
      anon_sym_BSLASH,
    ACTIONS(888), 1,
      aux_sym_json_string_text_token1,
    ACTIONS(890), 1,
      anon_sym_LBRACE_LBRACE2,
    ACTIONS(904), 1,
      anon_sym_DQUOTE,
    STATE(260), 1,
      aux_sym_json_string_text_repeat1,
    STATE(166), 2,
      sym_json_string_content,
      aux_sym_json_string_repeat1,
    STATE(314), 3,
      sym_json_string_text,
      sym_json_string_escaped_char,
      sym_template,
  [7308] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(898), 1,
      anon_sym_BSLASH,
    ACTIONS(900), 1,
      sym_filename_text,
    ACTIONS(902), 1,
      anon_sym_LBRACE_LBRACE2,
    ACTIONS(906), 1,
      anon_sym_SEMI,
    STATE(552), 1,
      sym_filename,
    STATE(248), 2,
      sym_filename_escaped_char,
      aux_sym_filename_content_repeat1,
    STATE(198), 3,
      sym_filename_content,
      sym_template,
      aux_sym_filename_repeat1,
  [7336] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(884), 1,
      anon_sym_BSLASH,
    ACTIONS(888), 1,
      aux_sym_json_string_text_token1,
    ACTIONS(890), 1,
      anon_sym_LBRACE_LBRACE2,
    ACTIONS(908), 1,
      anon_sym_DQUOTE,
    STATE(260), 1,
      aux_sym_json_string_text_repeat1,
    STATE(173), 2,
      sym_json_string_content,
      aux_sym_json_string_repeat1,
    STATE(314), 3,
      sym_json_string_text,
      sym_json_string_escaped_char,
      sym_template,
  [7364] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(910), 1,
      anon_sym_BQUOTE,
    ACTIONS(912), 1,
      aux_sym_oneline_string_text_token1,
    ACTIONS(914), 1,
      anon_sym_LBRACE2,
    ACTIONS(916), 1,
      sym_oneline_string_escaped_char,
    ACTIONS(918), 1,
      anon_sym_LBRACE_LBRACE2,
    STATE(213), 2,
      sym_oneline_string_text,
      aux_sym_oneline_string_content_repeat1,
    STATE(164), 3,
      sym_oneline_string_content,
      sym_template,
      aux_sym_oneline_string_repeat1,
  [7392] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(839), 1,
      anon_sym_BSLASH,
    ACTIONS(843), 1,
      sym_quoted_string_text,
    ACTIONS(845), 1,
      anon_sym_LBRACE_LBRACE2,
    ACTIONS(920), 1,
      anon_sym_DQUOTE,
    STATE(181), 3,
      sym_quoted_string_content,
      sym_template,
      aux_sym_quoted_string_repeat1,
    STATE(210), 3,
      sym_invalid_quoted_string_escaped_char,
      sym_quoted_string_escaped_char,
      aux_sym_quoted_string_content_repeat1,
  [7418] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(884), 1,
      anon_sym_BSLASH,
    ACTIONS(888), 1,
      aux_sym_json_string_text_token1,
    ACTIONS(890), 1,
      anon_sym_LBRACE_LBRACE2,
    ACTIONS(922), 1,
      anon_sym_DQUOTE,
    STATE(260), 1,
      aux_sym_json_string_text_repeat1,
    STATE(166), 2,
      sym_json_string_content,
      aux_sym_json_string_repeat1,
    STATE(314), 3,
      sym_json_string_text,
      sym_json_string_escaped_char,
      sym_template,
  [7446] = 7,
    ACTIONS(926), 1,
      anon_sym_BSLASH,
    ACTIONS(929), 1,
      sym_filename_text,
    ACTIONS(932), 1,
      anon_sym_LBRACE_LBRACE2,
    ACTIONS(935), 1,
      sym__eof,
    ACTIONS(924), 2,
      anon_sym_LF,
      sym_comment,
    STATE(214), 2,
      sym_filename_escaped_char,
      aux_sym_filename_content_repeat1,
    STATE(179), 3,
      sym_filename_content,
      sym_template,
      aux_sym_filename_repeat1,
  [7472] = 7,
    ACTIONS(939), 1,
      anon_sym_BSLASH,
    ACTIONS(941), 1,
      sym_filename_text,
    ACTIONS(943), 1,
      anon_sym_LBRACE_LBRACE2,
    ACTIONS(945), 1,
      sym__eof,
    ACTIONS(937), 2,
      anon_sym_LF,
      sym_comment,
    STATE(214), 2,
      sym_filename_escaped_char,
      aux_sym_filename_content_repeat1,
    STATE(179), 3,
      sym_filename_content,
      sym_template,
      aux_sym_filename_repeat1,
  [7498] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(947), 1,
      anon_sym_BSLASH,
    ACTIONS(950), 1,
      anon_sym_DQUOTE,
    ACTIONS(952), 1,
      sym_quoted_string_text,
    ACTIONS(955), 1,
      anon_sym_LBRACE_LBRACE2,
    STATE(181), 3,
      sym_quoted_string_content,
      sym_template,
      aux_sym_quoted_string_repeat1,
    STATE(210), 3,
      sym_invalid_quoted_string_escaped_char,
      sym_quoted_string_escaped_char,
      aux_sym_quoted_string_content_repeat1,
  [7524] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(912), 1,
      aux_sym_oneline_string_text_token1,
    ACTIONS(914), 1,
      anon_sym_LBRACE2,
    ACTIONS(916), 1,
      sym_oneline_string_escaped_char,
    ACTIONS(918), 1,
      anon_sym_LBRACE_LBRACE2,
    ACTIONS(958), 1,
      anon_sym_BQUOTE,
    STATE(213), 2,
      sym_oneline_string_text,
      aux_sym_oneline_string_content_repeat1,
    STATE(176), 3,
      sym_oneline_string_content,
      sym_template,
      aux_sym_oneline_string_repeat1,
  [7552] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(963), 1,
      anon_sym_BSLASH,
    ACTIONS(966), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(968), 1,
      anon_sym_LBRACE_LBRACE2,
    ACTIONS(960), 2,
      anon_sym_LF,
      sym__multiline_string_text,
    STATE(209), 2,
      sym_multiline_string_escaped_char,
      aux_sym_multiline_string_content_repeat1,
    STATE(183), 3,
      sym_multiline_string_content,
      sym_template,
      aux_sym_multiline_string_repeat1,
  [7578] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(839), 1,
      anon_sym_BSLASH,
    ACTIONS(843), 1,
      sym_quoted_string_text,
    ACTIONS(845), 1,
      anon_sym_LBRACE_LBRACE2,
    ACTIONS(971), 1,
      anon_sym_DQUOTE,
    STATE(181), 3,
      sym_quoted_string_content,
      sym_template,
      aux_sym_quoted_string_repeat1,
    STATE(210), 3,
      sym_invalid_quoted_string_escaped_char,
      sym_quoted_string_escaped_char,
      aux_sym_quoted_string_content_repeat1,
  [7604] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(876), 1,
      anon_sym_BSLASH,
    ACTIONS(880), 1,
      sym__multiline_string_text,
    ACTIONS(882), 1,
      anon_sym_LBRACE_LBRACE2,
    ACTIONS(973), 1,
      anon_sym_LF,
    ACTIONS(975), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(209), 2,
      sym_multiline_string_escaped_char,
      aux_sym_multiline_string_content_repeat1,
    STATE(183), 3,
      sym_multiline_string_content,
      sym_template,
      aux_sym_multiline_string_repeat1,
  [7632] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(979), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(982), 1,
      anon_sym_LBRACE_LBRACE2,
    STATE(230), 1,
      aux_sym_value_string_text_repeat1,
    ACTIONS(977), 3,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
    STATE(186), 3,
      sym_value_string_text,
      sym_template,
      aux_sym_xml_value_string_repeat1,
  [7655] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(776), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(778), 1,
      anon_sym_LBRACE_LBRACE2,
    STATE(230), 1,
      aux_sym_value_string_text_repeat1,
    ACTIONS(985), 3,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
    STATE(186), 3,
      sym_value_string_text,
      sym_template,
      aux_sym_xml_value_string_repeat1,
  [7678] = 7,
    ACTIONS(989), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(995), 1,
      sym_comment,
    STATE(229), 1,
      aux_sym_key_string_content_repeat1,
    STATE(290), 1,
      sym__key_template,
    ACTIONS(987), 2,
      sym__eof,
      anon_sym_LF,
    ACTIONS(992), 2,
      sym_key_string_text,
      sym_key_string_escaped_char,
    STATE(188), 2,
      sym_key_string_content,
      aux_sym_key_string_repeat1,
  [7703] = 7,
    ACTIONS(750), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(999), 1,
      sym_comment,
    STATE(229), 1,
      aux_sym_key_string_content_repeat1,
    STATE(290), 1,
      sym__key_template,
    ACTIONS(754), 2,
      sym_key_string_text,
      sym_key_string_escaped_char,
    ACTIONS(997), 2,
      sym__eof,
      anon_sym_LF,
    STATE(192), 2,
      sym_key_string_content,
      aux_sym_key_string_repeat1,
  [7728] = 7,
    ACTIONS(750), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1003), 1,
      sym_comment,
    STATE(229), 1,
      aux_sym_key_string_content_repeat1,
    STATE(290), 1,
      sym__key_template,
    ACTIONS(754), 2,
      sym_key_string_text,
      sym_key_string_escaped_char,
    ACTIONS(1001), 2,
      sym__eof,
      anon_sym_LF,
    STATE(191), 2,
      sym_key_string_content,
      aux_sym_key_string_repeat1,
  [7753] = 7,
    ACTIONS(750), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1007), 1,
      sym_comment,
    STATE(229), 1,
      aux_sym_key_string_content_repeat1,
    STATE(290), 1,
      sym__key_template,
    ACTIONS(754), 2,
      sym_key_string_text,
      sym_key_string_escaped_char,
    ACTIONS(1005), 2,
      sym__eof,
      anon_sym_LF,
    STATE(188), 2,
      sym_key_string_content,
      aux_sym_key_string_repeat1,
  [7778] = 7,
    ACTIONS(750), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1011), 1,
      sym_comment,
    STATE(229), 1,
      aux_sym_key_string_content_repeat1,
    STATE(290), 1,
      sym__key_template,
    ACTIONS(754), 2,
      sym_key_string_text,
      sym_key_string_escaped_char,
    ACTIONS(1009), 2,
      sym__eof,
      anon_sym_LF,
    STATE(188), 2,
      sym_key_string_content,
      aux_sym_key_string_repeat1,
  [7803] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1015), 1,
      anon_sym_u,
    ACTIONS(1017), 1,
      aux_sym_invalid_quoted_string_escaped_char_token1,
    ACTIONS(1013), 7,
      anon_sym_BSLASH,
      anon_sym_b,
      anon_sym_f,
      anon_sym_n,
      anon_sym_r,
      anon_sym_t,
      anon_sym_DQUOTE,
  [7822] = 6,
    ACTIONS(668), 1,
      anon_sym_BSLASH,
    ACTIONS(670), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(1021), 1,
      sym__eof,
    STATE(224), 1,
      aux_sym_value_string_text_repeat1,
    ACTIONS(1019), 3,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE2,
      sym_comment,
    STATE(195), 3,
      sym_value_string_text,
      sym_value_string_escaped_char,
      aux_sym_value_string_content_repeat1,
  [7845] = 6,
    ACTIONS(1025), 1,
      anon_sym_BSLASH,
    ACTIONS(1028), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(1031), 1,
      sym__eof,
    STATE(224), 1,
      aux_sym_value_string_text_repeat1,
    ACTIONS(1023), 3,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE2,
      sym_comment,
    STATE(195), 3,
      sym_value_string_text,
      sym_value_string_escaped_char,
      aux_sym_value_string_content_repeat1,
  [7868] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(924), 1,
      anon_sym_SEMI,
    ACTIONS(1033), 1,
      anon_sym_BSLASH,
    ACTIONS(1036), 1,
      sym_filename_text,
    ACTIONS(1039), 1,
      anon_sym_LBRACE_LBRACE2,
    STATE(248), 2,
      sym_filename_escaped_char,
      aux_sym_filename_content_repeat1,
    STATE(196), 3,
      sym_filename_content,
      sym_template,
      aux_sym_filename_repeat1,
  [7893] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(939), 1,
      anon_sym_BSLASH,
    ACTIONS(941), 1,
      sym_filename_text,
    ACTIONS(943), 1,
      anon_sym_LBRACE_LBRACE2,
    STATE(389), 1,
      sym_filename,
    STATE(214), 2,
      sym_filename_escaped_char,
      aux_sym_filename_content_repeat1,
    STATE(180), 3,
      sym_filename_content,
      sym_template,
      aux_sym_filename_repeat1,
  [7918] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(898), 1,
      anon_sym_BSLASH,
    ACTIONS(900), 1,
      sym_filename_text,
    ACTIONS(902), 1,
      anon_sym_LBRACE_LBRACE2,
    ACTIONS(937), 1,
      anon_sym_SEMI,
    STATE(248), 2,
      sym_filename_escaped_char,
      aux_sym_filename_content_repeat1,
    STATE(196), 3,
      sym_filename_content,
      sym_template,
      aux_sym_filename_repeat1,
  [7943] = 7,
    ACTIONS(206), 1,
      sym_comment,
    ACTIONS(987), 1,
      anon_sym_COLON,
    ACTIONS(1042), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(261), 1,
      aux_sym_key_string_content_repeat1,
    STATE(313), 1,
      sym__key_template,
    ACTIONS(1045), 2,
      sym_key_string_text,
      sym_key_string_escaped_char,
    STATE(199), 2,
      sym_key_string_content,
      aux_sym_key_string_repeat1,
  [7967] = 7,
    ACTIONS(92), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(206), 1,
      sym_comment,
    ACTIONS(1009), 1,
      anon_sym_COLON,
    STATE(261), 1,
      aux_sym_key_string_content_repeat1,
    STATE(313), 1,
      sym__key_template,
    ACTIONS(96), 2,
      sym_key_string_text,
      sym_key_string_escaped_char,
    STATE(199), 2,
      sym_key_string_content,
      aux_sym_key_string_repeat1,
  [7991] = 7,
    ACTIONS(92), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(206), 1,
      sym_comment,
    ACTIONS(997), 1,
      anon_sym_COLON,
    STATE(261), 1,
      aux_sym_key_string_content_repeat1,
    STATE(313), 1,
      sym__key_template,
    ACTIONS(96), 2,
      sym_key_string_text,
      sym_key_string_escaped_char,
    STATE(200), 2,
      sym_key_string_content,
      aux_sym_key_string_repeat1,
  [8015] = 7,
    ACTIONS(92), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(206), 1,
      sym_comment,
    ACTIONS(1005), 1,
      anon_sym_COLON,
    STATE(261), 1,
      aux_sym_key_string_content_repeat1,
    STATE(313), 1,
      sym__key_template,
    ACTIONS(96), 2,
      sym_key_string_text,
      sym_key_string_escaped_char,
    STATE(199), 2,
      sym_key_string_content,
      aux_sym_key_string_repeat1,
  [8039] = 7,
    ACTIONS(92), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(206), 1,
      sym_comment,
    ACTIONS(1001), 1,
      anon_sym_COLON,
    STATE(261), 1,
      aux_sym_key_string_content_repeat1,
    STATE(313), 1,
      sym__key_template,
    ACTIONS(96), 2,
      sym_key_string_text,
      sym_key_string_escaped_char,
    STATE(202), 2,
      sym_key_string_content,
      aux_sym_key_string_repeat1,
  [8063] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1050), 1,
      anon_sym_u,
    ACTIONS(1052), 1,
      anon_sym_POUND,
    ACTIONS(1048), 6,
      anon_sym_BSLASH,
      anon_sym_b,
      anon_sym_f,
      anon_sym_n,
      anon_sym_r,
      anon_sym_t,
  [8081] = 3,
    ACTIONS(206), 1,
      sym_comment,
    ACTIONS(1056), 1,
      anon_sym_u,
    ACTIONS(1054), 7,
      anon_sym_BSLASH,
      anon_sym_b,
      anon_sym_f,
      anon_sym_n,
      anon_sym_r,
      anon_sym_t,
      anon_sym_BQUOTE,
  [8097] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1058), 1,
      anon_sym_LF,
    STATE(555), 1,
      sym_multiline_string_type,
    ACTIONS(1060), 6,
      anon_sym_base64,
      anon_sym_hex,
      anon_sym_json,
      anon_sym_xml,
      anon_sym_graphql,
      aux_sym_multiline_string_type_token1,
  [8115] = 3,
    ACTIONS(206), 1,
      sym_comment,
    ACTIONS(1064), 1,
      anon_sym_u,
    ACTIONS(1062), 7,
      anon_sym_BSLASH,
      anon_sym_b,
      anon_sym_f,
      anon_sym_n,
      anon_sym_r,
      anon_sym_t,
      anon_sym_DQUOTE,
  [8131] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1068), 1,
      aux_sym_oneline_string_text_token1,
    ACTIONS(1071), 1,
      anon_sym_LBRACE2,
    ACTIONS(1074), 1,
      sym_oneline_string_escaped_char,
    ACTIONS(1066), 2,
      anon_sym_BQUOTE,
      anon_sym_LBRACE_LBRACE2,
    STATE(208), 2,
      sym_oneline_string_text,
      aux_sym_oneline_string_content_repeat1,
  [8152] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(215), 2,
      sym_multiline_string_escaped_char,
      aux_sym_multiline_string_content_repeat1,
    ACTIONS(1077), 5,
      anon_sym_LF,
      anon_sym_BSLASH,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__multiline_string_text,
      anon_sym_LBRACE_LBRACE2,
  [8167] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(839), 1,
      anon_sym_BSLASH,
    ACTIONS(1081), 1,
      sym_quoted_string_text,
    ACTIONS(1079), 2,
      anon_sym_DQUOTE,
      anon_sym_LBRACE_LBRACE2,
    STATE(217), 3,
      sym_invalid_quoted_string_escaped_char,
      sym_quoted_string_escaped_char,
      aux_sym_quoted_string_content_repeat1,
  [8186] = 8,
    ACTIONS(206), 1,
      sym_comment,
    ACTIONS(788), 1,
      anon_sym_DQUOTE,
    ACTIONS(1083), 1,
      anon_sym_RBRACE,
    ACTIONS(1085), 1,
      anon_sym_COMMA,
    STATE(358), 1,
      sym_json_key_value,
    STATE(359), 1,
      aux_sym_json_object_repeat1,
    STATE(530), 1,
      sym_json_key_string,
    STATE(531), 1,
      sym_json_string,
  [8211] = 5,
    ACTIONS(1089), 1,
      anon_sym_BSLASH,
    ACTIONS(1092), 1,
      sym_filename_text,
    ACTIONS(1095), 1,
      sym__eof,
    STATE(212), 2,
      sym_filename_escaped_char,
      aux_sym_filename_content_repeat1,
    ACTIONS(1087), 3,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE2,
      sym_comment,
  [8230] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1099), 1,
      aux_sym_oneline_string_text_token1,
    STATE(208), 2,
      sym_oneline_string_text,
      aux_sym_oneline_string_content_repeat1,
    ACTIONS(1097), 4,
      anon_sym_BQUOTE,
      anon_sym_LBRACE2,
      sym_oneline_string_escaped_char,
      anon_sym_LBRACE_LBRACE2,
  [8247] = 3,
    ACTIONS(1103), 1,
      sym__eof,
    STATE(212), 2,
      sym_filename_escaped_char,
      aux_sym_filename_content_repeat1,
    ACTIONS(1101), 5,
      anon_sym_LF,
      anon_sym_BSLASH,
      sym_filename_text,
      anon_sym_LBRACE_LBRACE2,
      sym_comment,
  [8262] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1108), 1,
      anon_sym_BSLASH,
    ACTIONS(1105), 2,
      anon_sym_LF,
      sym__multiline_string_text,
    ACTIONS(1111), 2,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE_LBRACE2,
    STATE(215), 2,
      sym_multiline_string_escaped_char,
      aux_sym_multiline_string_content_repeat1,
  [8281] = 4,
    ACTIONS(1113), 1,
      anon_sym_LF,
    ACTIONS(1116), 1,
      sym_comment,
    STATE(216), 1,
      aux_sym__comment_or_new_line_repeat1,
    ACTIONS(120), 5,
      sym__eof,
      sym__bracketed_key_start,
      anon_sym_LBRACE_LBRACE,
      sym_key_string_text,
      sym_key_string_escaped_char,
  [8298] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1119), 1,
      anon_sym_BSLASH,
    ACTIONS(1124), 1,
      sym_quoted_string_text,
    ACTIONS(1122), 2,
      anon_sym_DQUOTE,
      anon_sym_LBRACE_LBRACE2,
    STATE(217), 3,
      sym_invalid_quoted_string_escaped_char,
      sym_quoted_string_escaped_char,
      aux_sym_quoted_string_content_repeat1,
  [8317] = 4,
    ACTIONS(1127), 1,
      anon_sym_LF,
    ACTIONS(1129), 1,
      sym_comment,
    STATE(216), 1,
      aux_sym__comment_or_new_line_repeat1,
    ACTIONS(130), 5,
      sym__eof,
      sym__bracketed_key_start,
      anon_sym_LBRACE_LBRACE,
      sym_key_string_text,
      sym_key_string_escaped_char,
  [8334] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_LBRACE_LBRACE2,
    ACTIONS(1131), 1,
      sym_filename_password_text,
    ACTIONS(1133), 1,
      anon_sym_BSLASH,
    STATE(225), 2,
      sym_filename_password_escaped_char,
      aux_sym_filename_password_repeat1,
    STATE(457), 2,
      sym_filename_password,
      sym_template,
  [8355] = 8,
    ACTIONS(206), 1,
      sym_comment,
    ACTIONS(788), 1,
      anon_sym_DQUOTE,
    ACTIONS(1085), 1,
      anon_sym_COMMA,
    ACTIONS(1135), 1,
      anon_sym_RBRACE,
    STATE(352), 1,
      sym_json_key_value,
    STATE(353), 1,
      aux_sym_json_object_repeat1,
    STATE(530), 1,
      sym_json_key_string,
    STATE(531), 1,
      sym_json_string,
  [8380] = 7,
    ACTIONS(82), 1,
      anon_sym_LT,
    ACTIONS(206), 1,
      sym_comment,
    ACTIONS(1137), 1,
      anon_sym_LT_QMARK,
    STATE(150), 1,
      sym_xml_open_tag,
    STATE(441), 1,
      sym_xml_tag,
    STATE(488), 1,
      sym_xml_self_closing_tag,
    STATE(304), 2,
      sym_xml_prolog_tag,
      aux_sym_xml_repeat1,
  [8403] = 5,
    ACTIONS(206), 1,
      sym_comment,
    ACTIONS(720), 1,
      anon_sym_base64_COMMA,
    ACTIONS(722), 1,
      anon_sym_hex_COMMA,
    ACTIONS(724), 1,
      anon_sym_DQUOTE,
    STATE(404), 3,
      sym_oneline_base64,
      sym_oneline_hex,
      sym_quoted_string,
  [8421] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1139), 1,
      anon_sym_BSLASH,
    ACTIONS(1142), 1,
      sym_filename_text,
    ACTIONS(1087), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE_LBRACE2,
    STATE(223), 2,
      sym_filename_escaped_char,
      aux_sym_filename_content_repeat1,
  [8439] = 4,
    ACTIONS(1147), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(1149), 1,
      sym__eof,
    STATE(236), 1,
      aux_sym_value_string_text_repeat1,
    ACTIONS(1145), 4,
      anon_sym_LF,
      anon_sym_BSLASH,
      anon_sym_LBRACE_LBRACE2,
      sym_comment,
  [8455] = 5,
    ACTIONS(1133), 1,
      anon_sym_BSLASH,
    ACTIONS(1153), 1,
      sym_filename_password_text,
    ACTIONS(1155), 1,
      sym__eof,
    ACTIONS(1151), 2,
      anon_sym_LF,
      sym_comment,
    STATE(231), 2,
      sym_filename_password_escaped_char,
      aux_sym_filename_password_repeat1,
  [8473] = 6,
    ACTIONS(760), 1,
      anon_sym_LF,
    ACTIONS(762), 1,
      sym_comment,
    ACTIONS(1157), 1,
      sym__eof,
    STATE(40), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(244), 1,
      aux_sym_query_string_params_section_repeat1,
    STATE(35), 2,
      sym__comment_or_new_line,
      sym__line_ending,
  [8493] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1159), 1,
      anon_sym_BSLASH,
    ACTIONS(1161), 1,
      anon_sym_SLASH,
    ACTIONS(1163), 1,
      sym_regex_text,
    STATE(511), 1,
      sym_regex_content,
    STATE(254), 2,
      sym_regex_escaped_char,
      aux_sym_regex_content_repeat1,
  [8513] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1167), 1,
      aux_sym_value_string_text_token1,
    STATE(228), 1,
      aux_sym_value_string_text_repeat1,
    ACTIONS(1165), 4,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE_LBRACE2,
  [8529] = 3,
    ACTIONS(1172), 1,
      sym_comment,
    STATE(235), 1,
      aux_sym_key_string_content_repeat1,
    ACTIONS(1170), 5,
      sym__eof,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
      sym_key_string_text,
      sym_key_string_escaped_char,
  [8543] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1174), 1,
      aux_sym_value_string_text_token1,
    STATE(228), 1,
      aux_sym_value_string_text_repeat1,
    ACTIONS(1145), 4,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE_LBRACE2,
  [8559] = 5,
    ACTIONS(1178), 1,
      sym_filename_password_text,
    ACTIONS(1181), 1,
      anon_sym_BSLASH,
    ACTIONS(1184), 1,
      sym__eof,
    ACTIONS(1176), 2,
      anon_sym_LF,
      sym_comment,
    STATE(231), 2,
      sym_filename_password_escaped_char,
      aux_sym_filename_password_repeat1,
  [8577] = 6,
    ACTIONS(760), 1,
      anon_sym_LF,
    ACTIONS(762), 1,
      sym_comment,
    ACTIONS(1186), 1,
      sym__eof,
    STATE(40), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(244), 1,
      aux_sym_query_string_params_section_repeat1,
    STATE(30), 2,
      sym__comment_or_new_line,
      sym__line_ending,
  [8597] = 6,
    ACTIONS(760), 1,
      anon_sym_LF,
    ACTIONS(762), 1,
      sym_comment,
    ACTIONS(1188), 1,
      sym__eof,
    STATE(40), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(245), 1,
      aux_sym_query_string_params_section_repeat1,
    STATE(29), 2,
      sym__comment_or_new_line,
      sym__line_ending,
  [8617] = 6,
    ACTIONS(760), 1,
      anon_sym_LF,
    ACTIONS(762), 1,
      sym_comment,
    ACTIONS(1190), 1,
      sym__eof,
    STATE(40), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(244), 1,
      aux_sym_query_string_params_section_repeat1,
    STATE(28), 2,
      sym__comment_or_new_line,
      sym__line_ending,
  [8637] = 4,
    ACTIONS(1197), 1,
      sym_comment,
    STATE(235), 1,
      aux_sym_key_string_content_repeat1,
    ACTIONS(1194), 2,
      sym_key_string_text,
      sym_key_string_escaped_char,
    ACTIONS(1192), 3,
      sym__eof,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
  [8653] = 4,
    ACTIONS(1199), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(1202), 1,
      sym__eof,
    STATE(236), 1,
      aux_sym_value_string_text_repeat1,
    ACTIONS(1165), 4,
      anon_sym_LF,
      anon_sym_BSLASH,
      anon_sym_LBRACE_LBRACE2,
      sym_comment,
  [8669] = 6,
    ACTIONS(760), 1,
      anon_sym_LF,
    ACTIONS(762), 1,
      sym_comment,
    ACTIONS(1188), 1,
      sym__eof,
    STATE(40), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(244), 1,
      aux_sym_query_string_params_section_repeat1,
    STATE(29), 2,
      sym__comment_or_new_line,
      sym__line_ending,
  [8689] = 5,
    ACTIONS(206), 1,
      sym_comment,
    ACTIONS(720), 1,
      anon_sym_base64_COMMA,
    ACTIONS(722), 1,
      anon_sym_hex_COMMA,
    ACTIONS(724), 1,
      anon_sym_DQUOTE,
    STATE(403), 3,
      sym_oneline_base64,
      sym_oneline_hex,
      sym_quoted_string,
  [8707] = 4,
    ACTIONS(1208), 1,
      sym_comment,
    STATE(446), 1,
      sym_duration_unit,
    ACTIONS(1204), 2,
      sym__eof,
      anon_sym_LF,
    ACTIONS(1206), 3,
      anon_sym_ms,
      anon_sym_s,
      anon_sym_m,
  [8723] = 4,
    ACTIONS(1210), 1,
      anon_sym_LF,
    ACTIONS(1213), 1,
      sym_comment,
    STATE(240), 1,
      aux_sym__comment_or_new_line_repeat1,
    ACTIONS(120), 4,
      sym__bracketed_key_start,
      anon_sym_LBRACE_LBRACE,
      sym_key_string_text,
      sym_key_string_escaped_char,
  [8739] = 6,
    ACTIONS(760), 1,
      anon_sym_LF,
    ACTIONS(762), 1,
      sym_comment,
    ACTIONS(1186), 1,
      sym__eof,
    STATE(40), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(234), 1,
      aux_sym_query_string_params_section_repeat1,
    STATE(30), 2,
      sym__comment_or_new_line,
      sym__line_ending,
  [8759] = 6,
    ACTIONS(760), 1,
      anon_sym_LF,
    ACTIONS(762), 1,
      sym_comment,
    ACTIONS(1157), 1,
      sym__eof,
    STATE(40), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(243), 1,
      aux_sym_query_string_params_section_repeat1,
    STATE(35), 2,
      sym__comment_or_new_line,
      sym__line_ending,
  [8779] = 6,
    ACTIONS(760), 1,
      anon_sym_LF,
    ACTIONS(762), 1,
      sym_comment,
    ACTIONS(1216), 1,
      sym__eof,
    STATE(40), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(244), 1,
      aux_sym_query_string_params_section_repeat1,
    STATE(26), 2,
      sym__comment_or_new_line,
      sym__line_ending,
  [8799] = 6,
    ACTIONS(1218), 1,
      anon_sym_LF,
    ACTIONS(1221), 1,
      sym_comment,
    ACTIONS(1224), 1,
      sym__eof,
    STATE(244), 1,
      aux_sym_query_string_params_section_repeat1,
    STATE(246), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(162), 2,
      sym__comment_or_new_line,
      sym__line_ending,
  [8819] = 6,
    ACTIONS(760), 1,
      anon_sym_LF,
    ACTIONS(762), 1,
      sym_comment,
    ACTIONS(1227), 1,
      sym__eof,
    STATE(40), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(244), 1,
      aux_sym_query_string_params_section_repeat1,
    STATE(32), 2,
      sym__comment_or_new_line,
      sym__line_ending,
  [8839] = 4,
    ACTIONS(1229), 1,
      anon_sym_LF,
    ACTIONS(1231), 1,
      sym_comment,
    STATE(240), 1,
      aux_sym__comment_or_new_line_repeat1,
    ACTIONS(130), 4,
      sym__bracketed_key_start,
      anon_sym_LBRACE_LBRACE,
      sym_key_string_text,
      sym_key_string_escaped_char,
  [8855] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1159), 1,
      anon_sym_BSLASH,
    ACTIONS(1163), 1,
      sym_regex_text,
    ACTIONS(1233), 1,
      anon_sym_SLASH,
    STATE(525), 1,
      sym_regex_content,
    STATE(254), 2,
      sym_regex_escaped_char,
      aux_sym_regex_content_repeat1,
  [8875] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(223), 2,
      sym_filename_escaped_char,
      aux_sym_filename_content_repeat1,
    ACTIONS(1101), 4,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      sym_filename_text,
      anon_sym_LBRACE_LBRACE2,
  [8889] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1235), 5,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      aux_sym_value_string_text_token1,
      anon_sym_LBRACE_LBRACE2,
  [8900] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1237), 5,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      aux_sym_value_string_text_token1,
      anon_sym_LBRACE_LBRACE2,
  [8911] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1239), 5,
      anon_sym_LF,
      anon_sym_BSLASH,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__multiline_string_text,
      anon_sym_LBRACE_LBRACE2,
  [8922] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1241), 5,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      aux_sym_value_string_text_token1,
      anon_sym_LBRACE_LBRACE2,
  [8933] = 2,
    ACTIONS(1245), 1,
      sym__eof,
    ACTIONS(1243), 5,
      anon_sym_LF,
      anon_sym_BSLASH,
      aux_sym_value_string_text_token1,
      anon_sym_LBRACE_LBRACE2,
      sym_comment,
  [8944] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1159), 1,
      anon_sym_BSLASH,
    ACTIONS(1247), 1,
      anon_sym_SLASH,
    ACTIONS(1249), 1,
      sym_regex_text,
    STATE(287), 2,
      sym_regex_escaped_char,
      aux_sym_regex_content_repeat1,
  [8961] = 5,
    ACTIONS(1251), 1,
      anon_sym_LF,
    ACTIONS(1253), 1,
      sym_comment,
    ACTIONS(1255), 1,
      sym__eof,
    STATE(10), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(11), 2,
      sym__comment_or_new_line,
      sym__line_ending,
  [8978] = 2,
    ACTIONS(1259), 1,
      sym__eof,
    ACTIONS(1257), 5,
      anon_sym_LF,
      anon_sym_BSLASH,
      aux_sym_value_string_text_token1,
      anon_sym_LBRACE_LBRACE2,
      sym_comment,
  [8989] = 2,
    ACTIONS(1263), 1,
      sym_comment,
    ACTIONS(1261), 5,
      sym__eof,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
      sym_key_string_text,
      sym_key_string_escaped_char,
  [9000] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1265), 5,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      aux_sym_value_string_text_token1,
      anon_sym_LBRACE_LBRACE2,
  [9011] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1267), 5,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      aux_sym_value_string_text_token1,
      anon_sym_LBRACE_LBRACE2,
  [9022] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1271), 1,
      aux_sym_json_string_text_token1,
    STATE(278), 1,
      aux_sym_json_string_text_repeat1,
    ACTIONS(1269), 3,
      anon_sym_BSLASH,
      anon_sym_DQUOTE,
      anon_sym_LBRACE_LBRACE2,
  [9037] = 3,
    ACTIONS(206), 1,
      sym_comment,
    STATE(265), 1,
      aux_sym_key_string_content_repeat1,
    ACTIONS(1170), 4,
      anon_sym_COLON,
      anon_sym_LBRACE_LBRACE,
      sym_key_string_text,
      sym_key_string_escaped_char,
  [9050] = 2,
    ACTIONS(1275), 1,
      sym__eof,
    ACTIONS(1273), 5,
      anon_sym_LF,
      anon_sym_BSLASH,
      sym_filename_text,
      anon_sym_LBRACE_LBRACE2,
      sym_comment,
  [9061] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1279), 1,
      aux_sym_oneline_string_text_token1,
    ACTIONS(1277), 4,
      anon_sym_BQUOTE,
      anon_sym_LBRACE2,
      sym_oneline_string_escaped_char,
      anon_sym_LBRACE_LBRACE2,
  [9074] = 2,
    ACTIONS(1283), 1,
      sym__eof,
    ACTIONS(1281), 5,
      anon_sym_LF,
      anon_sym_BSLASH,
      aux_sym_value_string_text_token1,
      anon_sym_LBRACE_LBRACE2,
      sym_comment,
  [9085] = 4,
    ACTIONS(206), 1,
      sym_comment,
    STATE(265), 1,
      aux_sym_key_string_content_repeat1,
    ACTIONS(1192), 2,
      anon_sym_COLON,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1285), 2,
      sym_key_string_text,
      sym_key_string_escaped_char,
  [9100] = 5,
    ACTIONS(558), 1,
      anon_sym_LF,
    ACTIONS(574), 1,
      sym_comment,
    ACTIONS(1288), 1,
      sym__eof,
    STATE(74), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(54), 2,
      sym__comment_or_new_line,
      sym__line_ending,
  [9117] = 4,
    ACTIONS(206), 1,
      sym_comment,
    ACTIONS(730), 1,
      anon_sym_LBRACE_LBRACE2,
    ACTIONS(728), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(463), 2,
      sym_template,
      sym_boolean,
  [9132] = 5,
    ACTIONS(1290), 1,
      anon_sym_LF,
    ACTIONS(1292), 1,
      sym_comment,
    ACTIONS(1294), 1,
      sym__eof,
    STATE(44), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(46), 2,
      sym__comment_or_new_line,
      sym__line_ending,
  [9149] = 5,
    ACTIONS(1290), 1,
      anon_sym_LF,
    ACTIONS(1292), 1,
      sym_comment,
    ACTIONS(1296), 1,
      sym__eof,
    STATE(44), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(31), 2,
      sym__comment_or_new_line,
      sym__line_ending,
  [9166] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(894), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(1298), 4,
      anon_sym_LF,
      anon_sym_BSLASH,
      sym__multiline_string_text,
      anon_sym_LBRACE_LBRACE2,
  [9179] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1300), 5,
      anon_sym_LF,
      anon_sym_BSLASH,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__multiline_string_text,
      anon_sym_LBRACE_LBRACE2,
  [9190] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(975), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(1298), 4,
      anon_sym_LF,
      anon_sym_BSLASH,
      sym__multiline_string_text,
      anon_sym_LBRACE_LBRACE2,
  [9203] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1245), 1,
      aux_sym_oneline_string_text_token1,
    ACTIONS(1243), 4,
      anon_sym_BQUOTE,
      anon_sym_LBRACE2,
      sym_oneline_string_escaped_char,
      anon_sym_LBRACE_LBRACE2,
  [9216] = 5,
    ACTIONS(1251), 1,
      anon_sym_LF,
    ACTIONS(1253), 1,
      sym_comment,
    ACTIONS(1302), 1,
      sym__eof,
    STATE(10), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(47), 2,
      sym__comment_or_new_line,
      sym__line_ending,
  [9233] = 5,
    ACTIONS(1304), 1,
      anon_sym_LF,
    ACTIONS(1306), 1,
      sym_comment,
    ACTIONS(1308), 1,
      sym__eof,
    STATE(86), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(94), 2,
      sym__comment_or_new_line,
      sym__line_ending,
  [9250] = 5,
    ACTIONS(760), 1,
      anon_sym_LF,
    ACTIONS(762), 1,
      sym_comment,
    ACTIONS(1310), 1,
      sym__eof,
    STATE(40), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(41), 2,
      sym__comment_or_new_line,
      sym__line_ending,
  [9267] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1243), 5,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      aux_sym_value_string_text_token1,
      anon_sym_LBRACE_LBRACE2,
  [9278] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1314), 1,
      aux_sym_json_string_text_token1,
    STATE(278), 1,
      aux_sym_json_string_text_repeat1,
    ACTIONS(1312), 3,
      anon_sym_BSLASH,
      anon_sym_DQUOTE,
      anon_sym_LBRACE_LBRACE2,
  [9293] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1243), 5,
      anon_sym_LF,
      anon_sym_BSLASH,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__multiline_string_text,
      anon_sym_LBRACE_LBRACE2,
  [9304] = 5,
    ACTIONS(1290), 1,
      anon_sym_LF,
    ACTIONS(1292), 1,
      sym_comment,
    ACTIONS(1317), 1,
      sym__eof,
    STATE(44), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(45), 2,
      sym__comment_or_new_line,
      sym__line_ending,
  [9321] = 2,
    ACTIONS(1245), 1,
      sym__eof,
    ACTIONS(1243), 5,
      anon_sym_LF,
      anon_sym_BSLASH,
      sym_filename_text,
      anon_sym_LBRACE_LBRACE2,
      sym_comment,
  [9332] = 5,
    ACTIONS(1251), 1,
      anon_sym_LF,
    ACTIONS(1253), 1,
      sym_comment,
    ACTIONS(1319), 1,
      sym__eof,
    STATE(10), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(3), 2,
      sym__comment_or_new_line,
      sym__line_ending,
  [9349] = 5,
    ACTIONS(1321), 1,
      anon_sym_LF,
    ACTIONS(1323), 1,
      sym_comment,
    ACTIONS(1325), 1,
      sym__eof,
    STATE(218), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(147), 2,
      sym__comment_or_new_line,
      sym__line_ending,
  [9366] = 5,
    ACTIONS(760), 1,
      anon_sym_LF,
    ACTIONS(762), 1,
      sym_comment,
    ACTIONS(1327), 1,
      sym__eof,
    STATE(40), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(19), 2,
      sym__comment_or_new_line,
      sym__line_ending,
  [9383] = 2,
    ACTIONS(1329), 1,
      sym__eof,
    ACTIONS(1239), 5,
      anon_sym_LF,
      anon_sym_BSLASH,
      aux_sym_value_string_text_token1,
      anon_sym_LBRACE_LBRACE2,
      sym_comment,
  [9394] = 5,
    ACTIONS(1321), 1,
      anon_sym_LF,
    ACTIONS(1323), 1,
      sym_comment,
    ACTIONS(1331), 1,
      sym__eof,
    STATE(218), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(146), 2,
      sym__comment_or_new_line,
      sym__line_ending,
  [9411] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1333), 1,
      anon_sym_BSLASH,
    ACTIONS(1336), 1,
      anon_sym_SLASH,
    ACTIONS(1338), 1,
      sym_regex_text,
    STATE(287), 2,
      sym_regex_escaped_char,
      aux_sym_regex_content_repeat1,
  [9428] = 5,
    ACTIONS(1321), 1,
      anon_sym_LF,
    ACTIONS(1323), 1,
      sym_comment,
    ACTIONS(1341), 1,
      sym__eof,
    STATE(218), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(145), 2,
      sym__comment_or_new_line,
      sym__line_ending,
  [9445] = 5,
    ACTIONS(1343), 1,
      anon_sym_LF,
    ACTIONS(1345), 1,
      sym_comment,
    ACTIONS(1347), 1,
      sym__eof,
    STATE(246), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(172), 2,
      sym__comment_or_new_line,
      sym__line_ending,
  [9462] = 2,
    ACTIONS(1351), 1,
      sym_comment,
    ACTIONS(1349), 5,
      sym__eof,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
      sym_key_string_text,
      sym_key_string_escaped_char,
  [9473] = 2,
    ACTIONS(1355), 1,
      sym__eof,
    ACTIONS(1353), 5,
      anon_sym_LF,
      anon_sym_BSLASH,
      aux_sym_value_string_text_token1,
      anon_sym_LBRACE_LBRACE2,
      sym_comment,
  [9484] = 5,
    ACTIONS(558), 1,
      anon_sym_LF,
    ACTIONS(574), 1,
      sym_comment,
    ACTIONS(1357), 1,
      sym__eof,
    STATE(74), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(15), 2,
      sym__comment_or_new_line,
      sym__line_ending,
  [9501] = 5,
    ACTIONS(760), 1,
      anon_sym_LF,
    ACTIONS(762), 1,
      sym_comment,
    ACTIONS(1359), 1,
      sym__eof,
    STATE(40), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(42), 2,
      sym__comment_or_new_line,
      sym__line_ending,
  [9518] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1361), 5,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      aux_sym_value_string_text_token1,
      anon_sym_LBRACE_LBRACE2,
  [9529] = 2,
    ACTIONS(1363), 2,
      sym__eof,
      anon_sym_LF,
    ACTIONS(1365), 4,
      anon_sym_ms,
      anon_sym_s,
      anon_sym_m,
      sym_comment,
  [9540] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1367), 5,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      aux_sym_value_string_text_token1,
      anon_sym_LBRACE_LBRACE2,
  [9551] = 3,
    ACTIONS(1373), 1,
      sym__eof,
    ACTIONS(1369), 2,
      anon_sym_LF,
      sym_comment,
    ACTIONS(1371), 3,
      anon_sym_BSLASH,
      aux_sym_value_string_text_token1,
      anon_sym_LBRACE_LBRACE2,
  [9564] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1375), 5,
      anon_sym_LF,
      anon_sym_BSLASH,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__multiline_string_text,
      anon_sym_LBRACE_LBRACE2,
  [9575] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1377), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(1298), 4,
      anon_sym_LF,
      anon_sym_BSLASH,
      sym__multiline_string_text,
      anon_sym_LBRACE_LBRACE2,
  [9588] = 2,
    ACTIONS(1381), 1,
      sym_comment,
    ACTIONS(1379), 5,
      sym__eof,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
      sym_key_string_text,
      sym_key_string_escaped_char,
  [9599] = 5,
    ACTIONS(760), 1,
      anon_sym_LF,
    ACTIONS(762), 1,
      sym_comment,
    ACTIONS(1383), 1,
      sym__eof,
    STATE(40), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(6), 2,
      sym__comment_or_new_line,
      sym__line_ending,
  [9616] = 5,
    ACTIONS(558), 1,
      anon_sym_LF,
    ACTIONS(574), 1,
      sym_comment,
    ACTIONS(1385), 1,
      sym__eof,
    STATE(74), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(78), 2,
      sym__comment_or_new_line,
      sym__line_ending,
  [9633] = 5,
    ACTIONS(7), 1,
      anon_sym_LF,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1387), 1,
      sym__eof,
    STATE(106), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(122), 2,
      sym__comment_or_new_line,
      sym__line_ending,
  [9650] = 4,
    ACTIONS(206), 1,
      sym_comment,
    ACTIONS(1389), 1,
      anon_sym_LT,
    ACTIONS(1391), 1,
      anon_sym_LT_QMARK,
    STATE(304), 2,
      sym_xml_prolog_tag,
      aux_sym_xml_repeat1,
  [9664] = 4,
    ACTIONS(206), 1,
      sym_comment,
    ACTIONS(1394), 1,
      anon_sym_SEMI,
    ACTIONS(1396), 1,
      aux_sym_hexdigit_token1,
    STATE(309), 2,
      sym_hexdigit,
      aux_sym_oneline_hex_repeat1,
  [9678] = 5,
    ACTIONS(206), 1,
      sym_comment,
    ACTIONS(730), 1,
      anon_sym_LBRACE_LBRACE2,
    ACTIONS(1398), 1,
      aux_sym_status_token1,
    STATE(239), 1,
      sym__unsigned_integer,
    STATE(509), 1,
      sym_template,
  [9694] = 2,
    ACTIONS(1402), 1,
      sym__eof,
    ACTIONS(1400), 4,
      anon_sym_LF,
      sym_filename_password_text,
      anon_sym_BSLASH,
      sym_comment,
  [9704] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1273), 4,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      sym_filename_text,
      anon_sym_LBRACE_LBRACE2,
  [9714] = 4,
    ACTIONS(206), 1,
      sym_comment,
    ACTIONS(1404), 1,
      anon_sym_SEMI,
    ACTIONS(1406), 1,
      aux_sym_hexdigit_token1,
    STATE(309), 2,
      sym_hexdigit,
      aux_sym_oneline_hex_repeat1,
  [9728] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1409), 4,
      anon_sym_BSLASH,
      anon_sym_DQUOTE,
      aux_sym_json_string_text_token1,
      anon_sym_LBRACE_LBRACE2,
  [9738] = 2,
    ACTIONS(206), 1,
      sym_comment,
    ACTIONS(1411), 4,
      anon_sym_COLON,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [9748] = 2,
    ACTIONS(206), 1,
      sym_comment,
    ACTIONS(1261), 4,
      anon_sym_COLON,
      anon_sym_LBRACE_LBRACE,
      sym_key_string_text,
      sym_key_string_escaped_char,
  [9758] = 2,
    ACTIONS(206), 1,
      sym_comment,
    ACTIONS(1349), 4,
      anon_sym_COLON,
      anon_sym_LBRACE_LBRACE,
      sym_key_string_text,
      sym_key_string_escaped_char,
  [9768] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1413), 4,
      anon_sym_BSLASH,
      anon_sym_DQUOTE,
      aux_sym_json_string_text_token1,
      anon_sym_LBRACE_LBRACE2,
  [9778] = 4,
    ACTIONS(206), 1,
      sym_comment,
    ACTIONS(1415), 1,
      anon_sym_DQUOTE,
    ACTIONS(1417), 1,
      anon_sym_SLASH,
    STATE(72), 2,
      sym_quoted_string,
      sym_regex,
  [9792] = 4,
    ACTIONS(206), 1,
      sym_comment,
    ACTIONS(1415), 1,
      anon_sym_DQUOTE,
    ACTIONS(1417), 1,
      anon_sym_SLASH,
    STATE(510), 2,
      sym_quoted_string,
      sym_regex,
  [9806] = 2,
    ACTIONS(206), 1,
      sym_comment,
    ACTIONS(1419), 4,
      anon_sym_COLON,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [9816] = 2,
    ACTIONS(1423), 1,
      sym__eof,
    ACTIONS(1421), 4,
      anon_sym_LF,
      sym_filename_password_text,
      anon_sym_BSLASH,
      sym_comment,
  [9826] = 4,
    ACTIONS(206), 1,
      sym_comment,
    ACTIONS(724), 1,
      anon_sym_DQUOTE,
    ACTIONS(1425), 1,
      anon_sym_SLASH,
    STATE(140), 2,
      sym_quoted_string,
      sym_regex,
  [9840] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1427), 4,
      anon_sym_BSLASH,
      anon_sym_DQUOTE,
      sym_quoted_string_text,
      anon_sym_LBRACE_LBRACE2,
  [9850] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1429), 4,
      anon_sym_BSLASH,
      anon_sym_DQUOTE,
      aux_sym_json_string_text_token1,
      anon_sym_LBRACE_LBRACE2,
  [9860] = 5,
    ACTIONS(206), 1,
      sym_comment,
    ACTIONS(788), 1,
      anon_sym_DQUOTE,
    STATE(420), 1,
      sym_json_key_value,
    STATE(530), 1,
      sym_json_key_string,
    STATE(531), 1,
      sym_json_string,
  [9876] = 4,
    ACTIONS(206), 1,
      sym_comment,
    ACTIONS(724), 1,
      anon_sym_DQUOTE,
    ACTIONS(1425), 1,
      anon_sym_SLASH,
    STATE(406), 2,
      sym_quoted_string,
      sym_regex,
  [9890] = 4,
    ACTIONS(206), 1,
      sym_comment,
    ACTIONS(1415), 1,
      anon_sym_DQUOTE,
    ACTIONS(1417), 1,
      anon_sym_SLASH,
    STATE(439), 2,
      sym_quoted_string,
      sym_regex,
  [9904] = 5,
    ACTIONS(206), 1,
      sym_comment,
    ACTIONS(724), 1,
      anon_sym_DQUOTE,
    ACTIONS(1431), 1,
      sym_integer,
    ACTIONS(1433), 1,
      sym_float,
    STATE(402), 1,
      sym_quoted_string,
  [9920] = 5,
    ACTIONS(206), 1,
      sym_comment,
    ACTIONS(724), 1,
      anon_sym_DQUOTE,
    ACTIONS(1435), 1,
      sym_integer,
    ACTIONS(1437), 1,
      sym_float,
    STATE(401), 1,
      sym_quoted_string,
  [9936] = 5,
    ACTIONS(206), 1,
      sym_comment,
    ACTIONS(724), 1,
      anon_sym_DQUOTE,
    ACTIONS(1439), 1,
      sym_integer,
    ACTIONS(1441), 1,
      sym_float,
    STATE(400), 1,
      sym_quoted_string,
  [9952] = 4,
    ACTIONS(206), 1,
      sym_comment,
    ACTIONS(724), 1,
      anon_sym_DQUOTE,
    ACTIONS(1425), 1,
      anon_sym_SLASH,
    STATE(135), 2,
      sym_quoted_string,
      sym_regex,
  [9966] = 2,
    ACTIONS(206), 1,
      sym_comment,
    ACTIONS(1379), 4,
      anon_sym_COLON,
      anon_sym_LBRACE_LBRACE,
      sym_key_string_text,
      sym_key_string_escaped_char,
  [9976] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1443), 4,
      anon_sym_BSLASH,
      anon_sym_DQUOTE,
      sym_quoted_string_text,
      anon_sym_LBRACE_LBRACE2,
  [9986] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1243), 4,
      anon_sym_BSLASH,
      anon_sym_DQUOTE,
      sym_quoted_string_text,
      anon_sym_LBRACE_LBRACE2,
  [9996] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1445), 4,
      anon_sym_BSLASH,
      anon_sym_DQUOTE,
      sym_quoted_string_text,
      anon_sym_LBRACE_LBRACE2,
  [10006] = 4,
    ACTIONS(206), 1,
      sym_comment,
    ACTIONS(1396), 1,
      aux_sym_hexdigit_token1,
    ACTIONS(1447), 1,
      anon_sym_SEMI,
    STATE(305), 2,
      sym_hexdigit,
      aux_sym_oneline_hex_repeat1,
  [10020] = 5,
    ACTIONS(206), 1,
      sym_comment,
    ACTIONS(724), 1,
      anon_sym_DQUOTE,
    ACTIONS(1449), 1,
      sym_integer,
    ACTIONS(1451), 1,
      sym_float,
    STATE(399), 1,
      sym_quoted_string,
  [10036] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1243), 4,
      anon_sym_BSLASH,
      anon_sym_DQUOTE,
      aux_sym_json_string_text_token1,
      anon_sym_LBRACE_LBRACE2,
  [10046] = 5,
    ACTIONS(206), 1,
      sym_comment,
    ACTIONS(724), 1,
      anon_sym_DQUOTE,
    ACTIONS(1453), 1,
      sym_integer,
    ACTIONS(1455), 1,
      sym_float,
    STATE(398), 1,
      sym_quoted_string,
  [10062] = 4,
    ACTIONS(206), 1,
      sym_comment,
    ACTIONS(730), 1,
      anon_sym_LBRACE_LBRACE2,
    ACTIONS(1398), 1,
      aux_sym_status_token1,
    STATE(449), 2,
      sym_template,
      sym__unsigned_integer,
  [10076] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1457), 4,
      anon_sym_BSLASH,
      anon_sym_DQUOTE,
      aux_sym_json_string_text_token1,
      anon_sym_LBRACE_LBRACE2,
  [10086] = 4,
    ACTIONS(206), 1,
      sym_comment,
    ACTIONS(1415), 1,
      anon_sym_DQUOTE,
    ACTIONS(1417), 1,
      anon_sym_SLASH,
    STATE(57), 2,
      sym_quoted_string,
      sym_regex,
  [10100] = 2,
    ACTIONS(1329), 1,
      sym__eof,
    ACTIONS(1239), 4,
      anon_sym_LF,
      sym_filename_password_text,
      anon_sym_BSLASH,
      sym_comment,
  [10110] = 5,
    ACTIONS(206), 1,
      sym_comment,
    ACTIONS(724), 1,
      anon_sym_DQUOTE,
    ACTIONS(1459), 1,
      sym_integer,
    ACTIONS(1461), 1,
      sym_float,
    STATE(397), 1,
      sym_quoted_string,
  [10126] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1243), 4,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      sym_filename_text,
      anon_sym_LBRACE_LBRACE2,
  [10136] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1239), 4,
      anon_sym_BSLASH,
      anon_sym_DQUOTE,
      sym_quoted_string_text,
      anon_sym_LBRACE_LBRACE2,
  [10146] = 5,
    ACTIONS(206), 1,
      sym_comment,
    ACTIONS(724), 1,
      anon_sym_DQUOTE,
    ACTIONS(1463), 1,
      sym_integer,
    ACTIONS(1465), 1,
      sym_float,
    STATE(396), 1,
      sym_quoted_string,
  [10162] = 5,
    ACTIONS(206), 1,
      sym_comment,
    ACTIONS(724), 1,
      anon_sym_DQUOTE,
    ACTIONS(1467), 1,
      sym_integer,
    ACTIONS(1469), 1,
      sym_float,
    STATE(395), 1,
      sym_quoted_string,
  [10178] = 2,
    ACTIONS(206), 1,
      sym_comment,
    ACTIONS(1245), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [10187] = 4,
    ACTIONS(206), 1,
      sym_comment,
    ACTIONS(1471), 1,
      anon_sym_COMMA,
    ACTIONS(1474), 1,
      anon_sym_RBRACK,
    STATE(347), 1,
      aux_sym_json_array_repeat1,
  [10200] = 4,
    ACTIONS(206), 1,
      sym_comment,
    ACTIONS(1476), 1,
      aux_sym_variable_name_token1,
    STATE(460), 1,
      sym_variable_definition,
    STATE(543), 1,
      sym_variable_name,
  [10213] = 4,
    ACTIONS(206), 1,
      sym_comment,
    ACTIONS(1476), 1,
      aux_sym_variable_name_token1,
    STATE(89), 1,
      sym_variable_name,
    STATE(553), 1,
      sym_expr,
  [10226] = 4,
    ACTIONS(206), 1,
      sym_comment,
    ACTIONS(1478), 1,
      anon_sym_COMMA,
    ACTIONS(1480), 1,
      anon_sym_RBRACK,
    STATE(360), 1,
      aux_sym_json_array_repeat1,
  [10239] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1484), 1,
      anon_sym_POUND,
    ACTIONS(1482), 2,
      anon_sym_SEMI,
      aux_sym_filename_escaped_char_token1,
  [10250] = 4,
    ACTIONS(206), 1,
      sym_comment,
    ACTIONS(1085), 1,
      anon_sym_COMMA,
    ACTIONS(1486), 1,
      anon_sym_RBRACE,
    STATE(364), 1,
      aux_sym_json_object_repeat1,
  [10263] = 4,
    ACTIONS(206), 1,
      sym_comment,
    ACTIONS(1085), 1,
      anon_sym_COMMA,
    ACTIONS(1486), 1,
      anon_sym_RBRACE,
    STATE(384), 1,
      aux_sym_json_object_repeat1,
  [10276] = 4,
    ACTIONS(206), 1,
      sym_comment,
    ACTIONS(1478), 1,
      anon_sym_COMMA,
    ACTIONS(1488), 1,
      anon_sym_RBRACK,
    STATE(373), 1,
      aux_sym_json_array_repeat1,
  [10289] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1492), 1,
      anon_sym_POUND,
    ACTIONS(1490), 2,
      anon_sym_SEMI,
      aux_sym_filename_escaped_char_token1,
  [10300] = 4,
    ACTIONS(206), 1,
      sym_comment,
    ACTIONS(1476), 1,
      aux_sym_variable_name_token1,
    STATE(89), 1,
      sym_variable_name,
    STATE(517), 1,
      sym_expr,
  [10313] = 3,
    ACTIONS(206), 1,
      sym_comment,
    STATE(292), 1,
      sym_status,
    ACTIONS(1494), 2,
      aux_sym_status_token1,
      anon_sym_STAR,
  [10324] = 4,
    ACTIONS(206), 1,
      sym_comment,
    ACTIONS(1085), 1,
      anon_sym_COMMA,
    ACTIONS(1496), 1,
      anon_sym_RBRACE,
    STATE(385), 1,
      aux_sym_json_object_repeat1,
  [10337] = 4,
    ACTIONS(206), 1,
      sym_comment,
    ACTIONS(1085), 1,
      anon_sym_COMMA,
    ACTIONS(1496), 1,
      anon_sym_RBRACE,
    STATE(384), 1,
      aux_sym_json_object_repeat1,
  [10350] = 4,
    ACTIONS(206), 1,
      sym_comment,
    ACTIONS(1478), 1,
      anon_sym_COMMA,
    ACTIONS(1498), 1,
      anon_sym_RBRACK,
    STATE(347), 1,
      aux_sym_json_array_repeat1,
  [10363] = 2,
    ACTIONS(206), 1,
      sym_comment,
    ACTIONS(1500), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [10372] = 2,
    ACTIONS(206), 1,
      sym_comment,
    ACTIONS(1502), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [10381] = 2,
    ACTIONS(206), 1,
      sym_comment,
    ACTIONS(1504), 3,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      aux_sym_hexdigit_token1,
  [10390] = 4,
    ACTIONS(206), 1,
      sym_comment,
    ACTIONS(1085), 1,
      anon_sym_COMMA,
    ACTIONS(1506), 1,
      anon_sym_RBRACE,
    STATE(384), 1,
      aux_sym_json_object_repeat1,
  [10403] = 3,
    ACTIONS(1510), 1,
      aux_sym_file_value_token1,
    ACTIONS(1512), 1,
      sym_comment,
    ACTIONS(1508), 2,
      sym__eof,
      anon_sym_LF,
  [10414] = 2,
    ACTIONS(206), 1,
      sym_comment,
    ACTIONS(1514), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [10423] = 4,
    ACTIONS(206), 1,
      sym_comment,
    ACTIONS(1476), 1,
      aux_sym_variable_name_token1,
    STATE(89), 1,
      sym_variable_name,
    STATE(520), 1,
      sym_expr,
  [10436] = 4,
    ACTIONS(206), 1,
      sym_comment,
    ACTIONS(1476), 1,
      aux_sym_variable_name_token1,
    STATE(89), 1,
      sym_variable_name,
    STATE(516), 1,
      sym_expr,
  [10449] = 4,
    ACTIONS(206), 1,
      sym_comment,
    ACTIONS(1476), 1,
      aux_sym_variable_name_token1,
    STATE(89), 1,
      sym_variable_name,
    STATE(533), 1,
      sym_expr,
  [10462] = 2,
    ACTIONS(206), 1,
      sym_comment,
    ACTIONS(1516), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [10471] = 2,
    ACTIONS(206), 1,
      sym_comment,
    ACTIONS(1518), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [10480] = 4,
    ACTIONS(206), 1,
      sym_comment,
    ACTIONS(1476), 1,
      aux_sym_variable_name_token1,
    STATE(89), 1,
      sym_variable_name,
    STATE(535), 1,
      sym_expr,
  [10493] = 4,
    ACTIONS(206), 1,
      sym_comment,
    ACTIONS(1478), 1,
      anon_sym_COMMA,
    ACTIONS(1520), 1,
      anon_sym_RBRACK,
    STATE(347), 1,
      aux_sym_json_array_repeat1,
  [10506] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1522), 3,
      anon_sym_BSLASH,
      anon_sym_SLASH,
      sym_regex_text,
  [10515] = 4,
    ACTIONS(206), 1,
      sym_comment,
    ACTIONS(1476), 1,
      aux_sym_variable_name_token1,
    STATE(89), 1,
      sym_variable_name,
    STATE(537), 1,
      sym_expr,
  [10528] = 4,
    ACTIONS(206), 1,
      sym_comment,
    ACTIONS(1476), 1,
      aux_sym_variable_name_token1,
    STATE(89), 1,
      sym_variable_name,
    STATE(538), 1,
      sym_expr,
  [10541] = 4,
    ACTIONS(206), 1,
      sym_comment,
    ACTIONS(1476), 1,
      aux_sym_variable_name_token1,
    STATE(89), 1,
      sym_variable_name,
    STATE(539), 1,
      sym_expr,
  [10554] = 4,
    ACTIONS(206), 1,
      sym_comment,
    ACTIONS(1476), 1,
      aux_sym_variable_name_token1,
    STATE(89), 1,
      sym_variable_name,
    STATE(540), 1,
      sym_expr,
  [10567] = 2,
    ACTIONS(206), 1,
      sym_comment,
    ACTIONS(1524), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [10576] = 2,
    ACTIONS(206), 1,
      sym_comment,
    ACTIONS(1526), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [10585] = 2,
    ACTIONS(206), 1,
      sym_comment,
    ACTIONS(1528), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [10594] = 2,
    ACTIONS(206), 1,
      sym_comment,
    ACTIONS(1530), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [10603] = 4,
    ACTIONS(206), 1,
      sym_comment,
    ACTIONS(1476), 1,
      aux_sym_variable_name_token1,
    STATE(89), 1,
      sym_variable_name,
    STATE(541), 1,
      sym_expr,
  [10616] = 4,
    ACTIONS(206), 1,
      sym_comment,
    ACTIONS(1532), 1,
      anon_sym_RBRACE,
    ACTIONS(1534), 1,
      anon_sym_COMMA,
    STATE(384), 1,
      aux_sym_json_object_repeat1,
  [10629] = 4,
    ACTIONS(206), 1,
      sym_comment,
    ACTIONS(1085), 1,
      anon_sym_COMMA,
    ACTIONS(1537), 1,
      anon_sym_RBRACE,
    STATE(384), 1,
      aux_sym_json_object_repeat1,
  [10642] = 3,
    ACTIONS(1541), 1,
      aux_sym_file_value_token1,
    ACTIONS(1543), 1,
      sym_comment,
    ACTIONS(1539), 2,
      sym__eof,
      anon_sym_LF,
  [10653] = 4,
    ACTIONS(206), 1,
      sym_comment,
    ACTIONS(1476), 1,
      aux_sym_variable_name_token1,
    STATE(89), 1,
      sym_variable_name,
    STATE(542), 1,
      sym_expr,
  [10666] = 2,
    ACTIONS(1547), 1,
      sym_comment,
    ACTIONS(1545), 2,
      sym__eof,
      anon_sym_LF,
  [10674] = 2,
    ACTIONS(1551), 1,
      sym_comment,
    ACTIONS(1549), 2,
      sym__eof,
      anon_sym_LF,
  [10682] = 2,
    ACTIONS(1555), 1,
      sym_comment,
    ACTIONS(1553), 2,
      sym__eof,
      anon_sym_LF,
  [10690] = 2,
    ACTIONS(1559), 1,
      sym_comment,
    ACTIONS(1557), 2,
      sym__eof,
      anon_sym_LF,
  [10698] = 2,
    ACTIONS(1563), 1,
      sym_comment,
    ACTIONS(1561), 2,
      sym__eof,
      anon_sym_LF,
  [10706] = 2,
    ACTIONS(1567), 1,
      sym_comment,
    ACTIONS(1565), 2,
      sym__eof,
      anon_sym_LF,
  [10714] = 2,
    ACTIONS(1571), 1,
      sym_comment,
    ACTIONS(1569), 2,
      sym__eof,
      anon_sym_LF,
  [10722] = 2,
    ACTIONS(1575), 1,
      sym_comment,
    ACTIONS(1573), 2,
      sym__eof,
      anon_sym_LF,
  [10730] = 2,
    ACTIONS(1579), 1,
      sym_comment,
    ACTIONS(1577), 2,
      sym__eof,
      anon_sym_LF,
  [10738] = 2,
    ACTIONS(1583), 1,
      sym_comment,
    ACTIONS(1581), 2,
      sym__eof,
      anon_sym_LF,
  [10746] = 2,
    ACTIONS(1587), 1,
      sym_comment,
    ACTIONS(1585), 2,
      sym__eof,
      anon_sym_LF,
  [10754] = 2,
    ACTIONS(1591), 1,
      sym_comment,
    ACTIONS(1589), 2,
      sym__eof,
      anon_sym_LF,
  [10762] = 2,
    ACTIONS(1595), 1,
      sym_comment,
    ACTIONS(1593), 2,
      sym__eof,
      anon_sym_LF,
  [10770] = 2,
    ACTIONS(1599), 1,
      sym_comment,
    ACTIONS(1597), 2,
      sym__eof,
      anon_sym_LF,
  [10778] = 2,
    ACTIONS(1603), 1,
      sym_comment,
    ACTIONS(1601), 2,
      sym__eof,
      anon_sym_LF,
  [10786] = 2,
    ACTIONS(1607), 1,
      sym_comment,
    ACTIONS(1605), 2,
      sym__eof,
      anon_sym_LF,
  [10794] = 2,
    ACTIONS(1611), 1,
      sym_comment,
    ACTIONS(1609), 2,
      sym__eof,
      anon_sym_LF,
  [10802] = 2,
    ACTIONS(1615), 1,
      sym_comment,
    ACTIONS(1613), 2,
      sym__eof,
      anon_sym_LF,
  [10810] = 2,
    ACTIONS(1619), 1,
      sym_comment,
    ACTIONS(1617), 2,
      sym__eof,
      anon_sym_LF,
  [10818] = 2,
    ACTIONS(1623), 1,
      sym_comment,
    ACTIONS(1621), 2,
      sym__eof,
      anon_sym_LF,
  [10826] = 2,
    ACTIONS(1625), 1,
      sym_comment,
    ACTIONS(1419), 2,
      sym__eof,
      anon_sym_LF,
  [10834] = 3,
    ACTIONS(206), 1,
      sym_comment,
    ACTIONS(1627), 1,
      aux_sym_hexdigit_token1,
    STATE(505), 1,
      sym_json_hexdigit,
  [10844] = 2,
    ACTIONS(1367), 1,
      sym_comment,
    ACTIONS(1629), 2,
      sym__eof,
      anon_sym_LF,
  [10852] = 2,
    ACTIONS(1543), 1,
      sym_comment,
    ACTIONS(1539), 2,
      sym__eof,
      anon_sym_LF,
  [10860] = 2,
    ACTIONS(1633), 1,
      sym_comment,
    ACTIONS(1631), 2,
      sym__eof,
      anon_sym_LF,
  [10868] = 2,
    ACTIONS(1637), 1,
      sym_comment,
    ACTIONS(1635), 2,
      sym__eof,
      anon_sym_LF,
  [10876] = 2,
    ACTIONS(1641), 1,
      sym_comment,
    ACTIONS(1639), 2,
      sym__eof,
      anon_sym_LF,
  [10884] = 2,
    ACTIONS(1645), 1,
      sym_comment,
    ACTIONS(1643), 2,
      sym__eof,
      anon_sym_LF,
  [10892] = 2,
    ACTIONS(1649), 1,
      sym_comment,
    ACTIONS(1647), 2,
      sym__eof,
      anon_sym_LF,
  [10900] = 3,
    ACTIONS(206), 1,
      sym_comment,
    ACTIONS(1265), 1,
      anon_sym_LT,
    ACTIONS(1651), 1,
      anon_sym_LT_QMARK,
  [10910] = 2,
    ACTIONS(1267), 1,
      sym_comment,
    ACTIONS(1653), 2,
      sym__eof,
      anon_sym_LF,
  [10918] = 2,
    ACTIONS(1655), 1,
      sym_comment,
    ACTIONS(1516), 2,
      sym__eof,
      anon_sym_LF,
  [10926] = 2,
    ACTIONS(206), 1,
      sym_comment,
    ACTIONS(1532), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [10934] = 2,
    ACTIONS(1659), 1,
      sym_comment,
    ACTIONS(1657), 2,
      sym__eof,
      anon_sym_LF,
  [10942] = 3,
    ACTIONS(206), 1,
      sym_comment,
    ACTIONS(1396), 1,
      aux_sym_hexdigit_token1,
    STATE(425), 1,
      sym_hexdigit,
  [10952] = 3,
    ACTIONS(206), 1,
      sym_comment,
    ACTIONS(1396), 1,
      aux_sym_hexdigit_token1,
    STATE(428), 1,
      sym_hexdigit,
  [10962] = 3,
    ACTIONS(206), 1,
      sym_comment,
    ACTIONS(1396), 1,
      aux_sym_hexdigit_token1,
    STATE(429), 1,
      sym_hexdigit,
  [10972] = 3,
    ACTIONS(206), 1,
      sym_comment,
    ACTIONS(1396), 1,
      aux_sym_hexdigit_token1,
    STATE(430), 1,
      sym_hexdigit,
  [10982] = 2,
    ACTIONS(1663), 1,
      sym_comment,
    ACTIONS(1661), 2,
      sym__eof,
      anon_sym_LF,
  [10990] = 2,
    ACTIONS(1243), 1,
      sym_comment,
    ACTIONS(1245), 2,
      sym__eof,
      anon_sym_LF,
  [10998] = 3,
    ACTIONS(206), 1,
      sym_comment,
    ACTIONS(1396), 1,
      aux_sym_hexdigit_token1,
    STATE(431), 1,
      sym_hexdigit,
  [11008] = 3,
    ACTIONS(206), 1,
      sym_comment,
    ACTIONS(1396), 1,
      aux_sym_hexdigit_token1,
    STATE(432), 1,
      sym_hexdigit,
  [11018] = 3,
    ACTIONS(206), 1,
      sym_comment,
    ACTIONS(1396), 1,
      aux_sym_hexdigit_token1,
    STATE(447), 1,
      sym_hexdigit,
  [11028] = 3,
    ACTIONS(206), 1,
      sym_comment,
    ACTIONS(1396), 1,
      aux_sym_hexdigit_token1,
    STATE(455), 1,
      sym_hexdigit,
  [11038] = 3,
    ACTIONS(206), 1,
      sym_comment,
    ACTIONS(1396), 1,
      aux_sym_hexdigit_token1,
    STATE(458), 1,
      sym_hexdigit,
  [11048] = 3,
    ACTIONS(206), 1,
      sym_comment,
    ACTIONS(1415), 1,
      anon_sym_DQUOTE,
    STATE(66), 1,
      sym_quoted_string,
  [11058] = 3,
    ACTIONS(206), 1,
      sym_comment,
    ACTIONS(1665), 1,
      anon_sym_LBRACE,
    STATE(298), 1,
      sym_unicode_char,
  [11068] = 3,
    ACTIONS(206), 1,
      sym_comment,
    ACTIONS(1415), 1,
      anon_sym_DQUOTE,
    STATE(65), 1,
      sym_quoted_string,
  [11078] = 3,
    ACTIONS(206), 1,
      sym_comment,
    ACTIONS(1415), 1,
      anon_sym_DQUOTE,
    STATE(67), 1,
      sym_quoted_string,
  [11088] = 2,
    ACTIONS(1669), 1,
      sym_comment,
    ACTIONS(1667), 2,
      sym__eof,
      anon_sym_LF,
  [11096] = 2,
    ACTIONS(1671), 1,
      sym_comment,
    ACTIONS(1518), 2,
      sym__eof,
      anon_sym_LF,
  [11104] = 3,
    ACTIONS(206), 1,
      sym_comment,
    ACTIONS(1415), 1,
      anon_sym_DQUOTE,
    STATE(62), 1,
      sym_quoted_string,
  [11114] = 3,
    ACTIONS(206), 1,
      sym_comment,
    ACTIONS(1396), 1,
      aux_sym_hexdigit_token1,
    STATE(476), 1,
      sym_hexdigit,
  [11124] = 2,
    ACTIONS(1675), 1,
      sym_comment,
    ACTIONS(1673), 2,
      sym__eof,
      anon_sym_LF,
  [11132] = 3,
    ACTIONS(206), 1,
      sym_comment,
    ACTIONS(1677), 1,
      aux_sym_hexdigit_token1,
    STATE(310), 1,
      sym_json_hexdigit,
  [11142] = 3,
    ACTIONS(206), 1,
      sym_comment,
    ACTIONS(1415), 1,
      anon_sym_DQUOTE,
    STATE(70), 1,
      sym_quoted_string,
  [11152] = 2,
    ACTIONS(1681), 1,
      sym_comment,
    ACTIONS(1679), 2,
      sym__eof,
      anon_sym_LF,
  [11160] = 3,
    ACTIONS(206), 1,
      sym_comment,
    ACTIONS(1415), 1,
      anon_sym_DQUOTE,
    STATE(71), 1,
      sym_quoted_string,
  [11170] = 2,
    ACTIONS(1685), 1,
      sym_comment,
    ACTIONS(1683), 2,
      sym__eof,
      anon_sym_LF,
  [11178] = 3,
    ACTIONS(206), 1,
      sym_comment,
    ACTIONS(1396), 1,
      aux_sym_hexdigit_token1,
    STATE(536), 1,
      sym_hexdigit,
  [11188] = 2,
    ACTIONS(1689), 1,
      sym_comment,
    ACTIONS(1687), 2,
      sym__eof,
      anon_sym_LF,
  [11196] = 2,
    ACTIONS(1693), 1,
      sym_comment,
    ACTIONS(1691), 2,
      sym__eof,
      anon_sym_LF,
  [11204] = 2,
    ACTIONS(1697), 1,
      sym_comment,
    ACTIONS(1695), 2,
      sym__eof,
      anon_sym_LF,
  [11212] = 2,
    ACTIONS(1701), 1,
      sym_comment,
    ACTIONS(1699), 2,
      sym__eof,
      anon_sym_LF,
  [11220] = 2,
    ACTIONS(1703), 1,
      sym_comment,
    ACTIONS(1411), 2,
      sym__eof,
      anon_sym_LF,
  [11228] = 2,
    ACTIONS(1707), 1,
      sym_comment,
    ACTIONS(1705), 2,
      sym__eof,
      anon_sym_LF,
  [11236] = 3,
    ACTIONS(206), 1,
      sym_comment,
    ACTIONS(1709), 1,
      anon_sym_LBRACE,
    STATE(307), 1,
      sym_unicode_char,
  [11246] = 3,
    ACTIONS(206), 1,
      sym_comment,
    ACTIONS(1396), 1,
      aux_sym_hexdigit_token1,
    STATE(534), 1,
      sym_hexdigit,
  [11256] = 2,
    ACTIONS(1713), 1,
      sym_comment,
    ACTIONS(1711), 2,
      sym__eof,
      anon_sym_LF,
  [11264] = 2,
    ACTIONS(1717), 1,
      sym_comment,
    ACTIONS(1715), 2,
      sym__eof,
      anon_sym_LF,
  [11272] = 3,
    ACTIONS(206), 1,
      sym_comment,
    ACTIONS(1396), 1,
      aux_sym_hexdigit_token1,
    STATE(532), 1,
      sym_hexdigit,
  [11282] = 2,
    ACTIONS(1719), 1,
      sym_comment,
    ACTIONS(1500), 2,
      sym__eof,
      anon_sym_LF,
  [11290] = 2,
    ACTIONS(1723), 1,
      sym_comment,
    ACTIONS(1721), 2,
      sym__eof,
      anon_sym_LF,
  [11298] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1725), 1,
      aux_sym_xml_self_closing_tag_token1,
    ACTIONS(1727), 1,
      aux_sym_xml_open_tag_token1,
  [11308] = 2,
    ACTIONS(1235), 1,
      sym_comment,
    ACTIONS(1729), 2,
      sym__eof,
      anon_sym_LF,
  [11316] = 2,
    ACTIONS(1733), 1,
      sym_comment,
    ACTIONS(1731), 2,
      sym__eof,
      anon_sym_LF,
  [11324] = 2,
    ACTIONS(1737), 1,
      sym_comment,
    ACTIONS(1735), 2,
      sym__eof,
      anon_sym_LF,
  [11332] = 3,
    ACTIONS(206), 1,
      sym_comment,
    ACTIONS(724), 1,
      anon_sym_DQUOTE,
    STATE(143), 1,
      sym_quoted_string,
  [11342] = 3,
    ACTIONS(206), 1,
      sym_comment,
    ACTIONS(724), 1,
      anon_sym_DQUOTE,
    STATE(123), 1,
      sym_quoted_string,
  [11352] = 2,
    ACTIONS(1741), 1,
      sym_comment,
    ACTIONS(1739), 2,
      sym__eof,
      anon_sym_LF,
  [11360] = 2,
    ACTIONS(1745), 1,
      sym_comment,
    ACTIONS(1743), 2,
      sym__eof,
      anon_sym_LF,
  [11368] = 2,
    ACTIONS(1747), 1,
      sym_comment,
    ACTIONS(1514), 2,
      sym__eof,
      anon_sym_LF,
  [11376] = 3,
    ACTIONS(206), 1,
      sym_comment,
    ACTIONS(724), 1,
      anon_sym_DQUOTE,
    STATE(134), 1,
      sym_quoted_string,
  [11386] = 2,
    ACTIONS(1751), 1,
      sym_comment,
    ACTIONS(1749), 2,
      sym__eof,
      anon_sym_LF,
  [11394] = 2,
    ACTIONS(1755), 1,
      sym_comment,
    ACTIONS(1753), 2,
      sym__eof,
      anon_sym_LF,
  [11402] = 3,
    ACTIONS(206), 1,
      sym_comment,
    ACTIONS(724), 1,
      anon_sym_DQUOTE,
    STATE(405), 1,
      sym_quoted_string,
  [11412] = 2,
    ACTIONS(1757), 1,
      sym_comment,
    ACTIONS(1530), 2,
      sym__eof,
      anon_sym_LF,
  [11420] = 3,
    ACTIONS(206), 1,
      sym_comment,
    ACTIONS(1415), 1,
      anon_sym_DQUOTE,
    STATE(64), 1,
      sym_quoted_string,
  [11430] = 3,
    ACTIONS(206), 1,
      sym_comment,
    ACTIONS(1396), 1,
      aux_sym_hexdigit_token1,
    STATE(503), 1,
      sym_hexdigit,
  [11440] = 3,
    ACTIONS(206), 1,
      sym_comment,
    ACTIONS(724), 1,
      anon_sym_DQUOTE,
    STATE(125), 1,
      sym_quoted_string,
  [11450] = 2,
    ACTIONS(1761), 1,
      sym_comment,
    ACTIONS(1759), 2,
      sym__eof,
      anon_sym_LF,
  [11458] = 3,
    ACTIONS(206), 1,
      sym_comment,
    ACTIONS(724), 1,
      anon_sym_DQUOTE,
    STATE(129), 1,
      sym_quoted_string,
  [11468] = 3,
    ACTIONS(206), 1,
      sym_comment,
    ACTIONS(1415), 1,
      anon_sym_DQUOTE,
    STATE(58), 1,
      sym_quoted_string,
  [11478] = 2,
    ACTIONS(206), 1,
      sym_comment,
    ACTIONS(1474), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [11486] = 2,
    ACTIONS(1763), 1,
      sym_comment,
    ACTIONS(1502), 2,
      sym__eof,
      anon_sym_LF,
  [11494] = 2,
    ACTIONS(1767), 1,
      sym_comment,
    ACTIONS(1765), 2,
      sym__eof,
      anon_sym_LF,
  [11502] = 3,
    ACTIONS(206), 1,
      sym_comment,
    ACTIONS(1415), 1,
      anon_sym_DQUOTE,
    STATE(56), 1,
      sym_quoted_string,
  [11512] = 2,
    ACTIONS(1771), 1,
      sym_comment,
    ACTIONS(1769), 2,
      sym__eof,
      anon_sym_LF,
  [11520] = 3,
    ACTIONS(206), 1,
      sym_comment,
    ACTIONS(1396), 1,
      aux_sym_hexdigit_token1,
    STATE(440), 1,
      sym_hexdigit,
  [11530] = 2,
    ACTIONS(206), 1,
      sym_comment,
    ACTIONS(1773), 2,
      aux_sym_status_token1,
      anon_sym_STAR,
  [11538] = 2,
    ACTIONS(1241), 1,
      sym_comment,
    ACTIONS(1775), 2,
      sym__eof,
      anon_sym_LF,
  [11546] = 2,
    ACTIONS(1779), 1,
      sym_comment,
    ACTIONS(1777), 2,
      sym__eof,
      anon_sym_LF,
  [11554] = 2,
    ACTIONS(1783), 1,
      sym_comment,
    ACTIONS(1781), 2,
      sym__eof,
      anon_sym_LF,
  [11562] = 2,
    ACTIONS(1785), 1,
      sym_comment,
    ACTIONS(1528), 2,
      sym__eof,
      anon_sym_LF,
  [11570] = 2,
    ACTIONS(1787), 1,
      sym_comment,
    ACTIONS(1526), 2,
      sym__eof,
      anon_sym_LF,
  [11578] = 2,
    ACTIONS(206), 1,
      sym_comment,
    ACTIONS(1789), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [11586] = 2,
    ACTIONS(1793), 1,
      sym_comment,
    ACTIONS(1791), 2,
      sym__eof,
      anon_sym_LF,
  [11594] = 2,
    ACTIONS(1237), 1,
      sym_comment,
    ACTIONS(1795), 2,
      sym__eof,
      anon_sym_LF,
  [11602] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1727), 1,
      aux_sym_xml_open_tag_token1,
    ACTIONS(1797), 1,
      aux_sym_xml_self_closing_tag_token1,
  [11612] = 2,
    ACTIONS(1799), 1,
      sym_comment,
    ACTIONS(1524), 2,
      sym__eof,
      anon_sym_LF,
  [11620] = 3,
    ACTIONS(206), 1,
      sym_comment,
    ACTIONS(1801), 1,
      anon_sym_LBRACE,
    STATE(320), 1,
      sym_unicode_char,
  [11630] = 3,
    ACTIONS(206), 1,
      sym_comment,
    ACTIONS(724), 1,
      anon_sym_DQUOTE,
    STATE(142), 1,
      sym_quoted_string,
  [11640] = 2,
    ACTIONS(1805), 1,
      sym_comment,
    ACTIONS(1803), 2,
      sym__eof,
      anon_sym_LF,
  [11648] = 3,
    ACTIONS(206), 1,
      sym_comment,
    ACTIONS(724), 1,
      anon_sym_DQUOTE,
    STATE(131), 1,
      sym_quoted_string,
  [11658] = 3,
    ACTIONS(206), 1,
      sym_comment,
    ACTIONS(724), 1,
      anon_sym_DQUOTE,
    STATE(127), 1,
      sym_quoted_string,
  [11668] = 3,
    ACTIONS(206), 1,
      sym_comment,
    ACTIONS(1396), 1,
      aux_sym_hexdigit_token1,
    STATE(547), 1,
      sym_hexdigit,
  [11678] = 3,
    ACTIONS(206), 1,
      sym_comment,
    ACTIONS(1627), 1,
      aux_sym_hexdigit_token1,
    STATE(442), 1,
      sym_json_hexdigit,
  [11688] = 3,
    ACTIONS(206), 1,
      sym_comment,
    ACTIONS(1627), 1,
      aux_sym_hexdigit_token1,
    STATE(504), 1,
      sym_json_hexdigit,
  [11698] = 2,
    ACTIONS(1369), 1,
      sym_comment,
    ACTIONS(1373), 2,
      sym__eof,
      anon_sym_LF,
  [11706] = 3,
    ACTIONS(206), 1,
      sym_comment,
    ACTIONS(1807), 1,
      anon_sym_LBRACE,
    STATE(256), 1,
      sym_unicode_char,
  [11716] = 2,
    ACTIONS(1811), 1,
      sym_comment,
    ACTIONS(1809), 2,
      sym__eof,
      anon_sym_LF,
  [11724] = 2,
    ACTIONS(1208), 1,
      sym_comment,
    ACTIONS(1204), 2,
      sym__eof,
      anon_sym_LF,
  [11732] = 3,
    ACTIONS(206), 1,
      sym_comment,
    ACTIONS(724), 1,
      anon_sym_DQUOTE,
    STATE(138), 1,
      sym_quoted_string,
  [11742] = 2,
    ACTIONS(206), 1,
      sym_comment,
    ACTIONS(1813), 1,
      anon_sym_SLASH,
  [11749] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1815), 1,
      aux_sym_xml_prolog_tag_token1,
  [11756] = 2,
    ACTIONS(206), 1,
      sym_comment,
    ACTIONS(1817), 1,
      anon_sym_GT,
  [11763] = 2,
    ACTIONS(206), 1,
      sym_comment,
    ACTIONS(1819), 1,
      anon_sym_QMARK_GT,
  [11770] = 2,
    ACTIONS(206), 1,
      sym_comment,
    ACTIONS(1821), 1,
      sym_integer,
  [11777] = 2,
    ACTIONS(206), 1,
      sym_comment,
    ACTIONS(1823), 1,
      anon_sym_RBRACE_RBRACE,
  [11784] = 2,
    ACTIONS(206), 1,
      sym_comment,
    ACTIONS(1825), 1,
      anon_sym_RBRACE_RBRACE,
  [11791] = 2,
    ACTIONS(206), 1,
      sym_comment,
    ACTIONS(1827), 1,
      aux_sym_hexdigit_token1,
  [11798] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1829), 1,
      aux_sym_variable_name_token2,
  [11805] = 2,
    ACTIONS(206), 1,
      sym_comment,
    ACTIONS(1831), 1,
      anon_sym_RBRACE_RBRACE,
  [11812] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1833), 1,
      aux_sym_oneline_base64_token1,
  [11819] = 2,
    ACTIONS(206), 1,
      sym_comment,
    ACTIONS(1835), 1,
      anon_sym_COLON,
  [11826] = 2,
    ACTIONS(206), 1,
      sym_comment,
    ACTIONS(1837), 1,
      anon_sym_GT,
  [11833] = 2,
    ACTIONS(206), 1,
      sym_comment,
    ACTIONS(1839), 1,
      anon_sym_COLON,
  [11840] = 2,
    ACTIONS(206), 1,
      sym_comment,
    ACTIONS(1841), 1,
      anon_sym_SLASH,
  [11847] = 2,
    ACTIONS(206), 1,
      sym_comment,
    ACTIONS(1843), 1,
      anon_sym_COLON,
  [11854] = 2,
    ACTIONS(206), 1,
      sym_comment,
    ACTIONS(1845), 1,
      sym_integer,
  [11861] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1847), 1,
      aux_sym_regex_escaped_char_token1,
  [11868] = 2,
    ACTIONS(206), 1,
      sym_comment,
    ACTIONS(1849), 1,
      anon_sym_SEMI,
  [11875] = 2,
    ACTIONS(206), 1,
      sym_comment,
    ACTIONS(1851), 1,
      anon_sym_COLON,
  [11882] = 2,
    ACTIONS(206), 1,
      sym_comment,
    ACTIONS(1853), 1,
      anon_sym_COLON,
  [11889] = 2,
    ACTIONS(206), 1,
      sym_comment,
    ACTIONS(1855), 1,
      anon_sym_RBRACE,
  [11896] = 2,
    ACTIONS(206), 1,
      sym_comment,
    ACTIONS(1857), 1,
      anon_sym_RBRACE_RBRACE,
  [11903] = 2,
    ACTIONS(206), 1,
      sym_comment,
    ACTIONS(1859), 1,
      anon_sym_RBRACE,
  [11910] = 2,
    ACTIONS(206), 1,
      sym_comment,
    ACTIONS(1861), 1,
      anon_sym_RBRACE_RBRACE,
  [11917] = 2,
    ACTIONS(206), 1,
      sym_comment,
    ACTIONS(1863), 1,
      anon_sym_RBRACE,
  [11924] = 2,
    ACTIONS(206), 1,
      sym_comment,
    ACTIONS(1865), 1,
      anon_sym_RBRACE_RBRACE,
  [11931] = 2,
    ACTIONS(206), 1,
      sym_comment,
    ACTIONS(1867), 1,
      anon_sym_RBRACE_RBRACE,
  [11938] = 2,
    ACTIONS(206), 1,
      sym_comment,
    ACTIONS(1869), 1,
      anon_sym_RBRACE_RBRACE,
  [11945] = 2,
    ACTIONS(206), 1,
      sym_comment,
    ACTIONS(1871), 1,
      anon_sym_RBRACE_RBRACE,
  [11952] = 2,
    ACTIONS(206), 1,
      sym_comment,
    ACTIONS(1873), 1,
      anon_sym_RBRACE_RBRACE,
  [11959] = 2,
    ACTIONS(206), 1,
      sym_comment,
    ACTIONS(1875), 1,
      anon_sym_RBRACE_RBRACE,
  [11966] = 2,
    ACTIONS(206), 1,
      sym_comment,
    ACTIONS(1877), 1,
      anon_sym_EQ,
  [11973] = 2,
    ACTIONS(206), 1,
      sym_comment,
    ACTIONS(1879), 1,
      anon_sym_GT,
  [11980] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1881), 1,
      aux_sym_xml_prolog_tag_token1,
  [11987] = 2,
    ACTIONS(206), 1,
      sym_comment,
    ACTIONS(1883), 1,
      anon_sym_GT,
  [11994] = 2,
    ACTIONS(206), 1,
      sym_comment,
    ACTIONS(1885), 1,
      anon_sym_RBRACE,
  [12001] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1887), 1,
      aux_sym_xml_close_tag_token1,
  [12008] = 2,
    ACTIONS(206), 1,
      sym_comment,
    ACTIONS(1889), 1,
      anon_sym_GT,
  [12015] = 2,
    ACTIONS(206), 1,
      sym_comment,
    ACTIONS(1891), 1,
      anon_sym_QMARK_GT,
  [12022] = 2,
    ACTIONS(206), 1,
      sym_comment,
    ACTIONS(1893), 1,
      anon_sym_SEMI,
  [12029] = 2,
    ACTIONS(206), 1,
      sym_comment,
    ACTIONS(1895), 1,
      anon_sym_SEMI,
  [12036] = 2,
    ACTIONS(206), 1,
      sym_comment,
    ACTIONS(1897), 1,
      anon_sym_RBRACE_RBRACE,
  [12043] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1899), 1,
      anon_sym_LF,
  [12050] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1901), 1,
      anon_sym_LF,
  [12057] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1903), 1,
      aux_sym_xml_close_tag_token1,
  [12064] = 2,
    ACTIONS(206), 1,
      sym_comment,
    ACTIONS(1905), 1,
      ts_builtin_sym_end,
  [12071] = 2,
    ACTIONS(206), 1,
      sym_comment,
    ACTIONS(1907), 1,
      anon_sym_COLON,
  [12078] = 2,
    ACTIONS(206), 1,
      sym_comment,
    ACTIONS(1909), 1,
      anon_sym_COLON,
  [12085] = 2,
    ACTIONS(206), 1,
      sym_comment,
    ACTIONS(1911), 1,
      anon_sym_COLON,
  [12092] = 2,
    ACTIONS(206), 1,
      sym_comment,
    ACTIONS(1913), 1,
      anon_sym_COLON,
  [12099] = 2,
    ACTIONS(206), 1,
      sym_comment,
    ACTIONS(1915), 1,
      anon_sym_COLON,
  [12106] = 2,
    ACTIONS(206), 1,
      sym_comment,
    ACTIONS(1917), 1,
      anon_sym_COLON,
  [12113] = 2,
    ACTIONS(206), 1,
      sym_comment,
    ACTIONS(1919), 1,
      anon_sym_COLON,
  [12120] = 2,
    ACTIONS(206), 1,
      sym_comment,
    ACTIONS(1921), 1,
      anon_sym_COLON,
  [12127] = 2,
    ACTIONS(206), 1,
      sym_comment,
    ACTIONS(1923), 1,
      anon_sym_COLON,
  [12134] = 2,
    ACTIONS(206), 1,
      sym_comment,
    ACTIONS(1925), 1,
      anon_sym_COLON,
  [12141] = 2,
    ACTIONS(206), 1,
      sym_comment,
    ACTIONS(1927), 1,
      anon_sym_COLON,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(19)] = 0,
  [SMALL_STATE(20)] = 90,
  [SMALL_STATE(21)] = 180,
  [SMALL_STATE(22)] = 270,
  [SMALL_STATE(23)] = 357,
  [SMALL_STATE(24)] = 475,
  [SMALL_STATE(25)] = 593,
  [SMALL_STATE(26)] = 676,
  [SMALL_STATE(27)] = 759,
  [SMALL_STATE(28)] = 844,
  [SMALL_STATE(29)] = 927,
  [SMALL_STATE(30)] = 1010,
  [SMALL_STATE(31)] = 1093,
  [SMALL_STATE(32)] = 1178,
  [SMALL_STATE(33)] = 1261,
  [SMALL_STATE(34)] = 1344,
  [SMALL_STATE(35)] = 1429,
  [SMALL_STATE(36)] = 1512,
  [SMALL_STATE(37)] = 1595,
  [SMALL_STATE(38)] = 1674,
  [SMALL_STATE(39)] = 1756,
  [SMALL_STATE(40)] = 1822,
  [SMALL_STATE(41)] = 1888,
  [SMALL_STATE(42)] = 1947,
  [SMALL_STATE(43)] = 2006,
  [SMALL_STATE(44)] = 2068,
  [SMALL_STATE(45)] = 2130,
  [SMALL_STATE(46)] = 2185,
  [SMALL_STATE(47)] = 2240,
  [SMALL_STATE(48)] = 2295,
  [SMALL_STATE(49)] = 2350,
  [SMALL_STATE(50)] = 2406,
  [SMALL_STATE(51)] = 2462,
  [SMALL_STATE(52)] = 2518,
  [SMALL_STATE(53)] = 2592,
  [SMALL_STATE(54)] = 2648,
  [SMALL_STATE(55)] = 2719,
  [SMALL_STATE(56)] = 2790,
  [SMALL_STATE(57)] = 2845,
  [SMALL_STATE(58)] = 2900,
  [SMALL_STATE(59)] = 2955,
  [SMALL_STATE(60)] = 3010,
  [SMALL_STATE(61)] = 3065,
  [SMALL_STATE(62)] = 3120,
  [SMALL_STATE(63)] = 3175,
  [SMALL_STATE(64)] = 3246,
  [SMALL_STATE(65)] = 3301,
  [SMALL_STATE(66)] = 3355,
  [SMALL_STATE(67)] = 3409,
  [SMALL_STATE(68)] = 3463,
  [SMALL_STATE(69)] = 3517,
  [SMALL_STATE(70)] = 3571,
  [SMALL_STATE(71)] = 3625,
  [SMALL_STATE(72)] = 3679,
  [SMALL_STATE(73)] = 3733,
  [SMALL_STATE(74)] = 3819,
  [SMALL_STATE(75)] = 3872,
  [SMALL_STATE(76)] = 3925,
  [SMALL_STATE(77)] = 3971,
  [SMALL_STATE(78)] = 4017,
  [SMALL_STATE(79)] = 4063,
  [SMALL_STATE(80)] = 4117,
  [SMALL_STATE(81)] = 4159,
  [SMALL_STATE(82)] = 4219,
  [SMALL_STATE(83)] = 4279,
  [SMALL_STATE(84)] = 4328,
  [SMALL_STATE(85)] = 4377,
  [SMALL_STATE(86)] = 4428,
  [SMALL_STATE(87)] = 4466,
  [SMALL_STATE(88)] = 4512,
  [SMALL_STATE(89)] = 4562,
  [SMALL_STATE(90)] = 4612,
  [SMALL_STATE(91)] = 4650,
  [SMALL_STATE(92)] = 4696,
  [SMALL_STATE(93)] = 4727,
  [SMALL_STATE(94)] = 4758,
  [SMALL_STATE(95)] = 4789,
  [SMALL_STATE(96)] = 4820,
  [SMALL_STATE(97)] = 4851,
  [SMALL_STATE(98)] = 4893,
  [SMALL_STATE(99)] = 4935,
  [SMALL_STATE(100)] = 4974,
  [SMALL_STATE(101)] = 5010,
  [SMALL_STATE(102)] = 5059,
  [SMALL_STATE(103)] = 5102,
  [SMALL_STATE(104)] = 5137,
  [SMALL_STATE(105)] = 5170,
  [SMALL_STATE(106)] = 5205,
  [SMALL_STATE(107)] = 5237,
  [SMALL_STATE(108)] = 5269,
  [SMALL_STATE(109)] = 5294,
  [SMALL_STATE(110)] = 5319,
  [SMALL_STATE(111)] = 5364,
  [SMALL_STATE(112)] = 5409,
  [SMALL_STATE(113)] = 5454,
  [SMALL_STATE(114)] = 5499,
  [SMALL_STATE(115)] = 5544,
  [SMALL_STATE(116)] = 5573,
  [SMALL_STATE(117)] = 5602,
  [SMALL_STATE(118)] = 5627,
  [SMALL_STATE(119)] = 5670,
  [SMALL_STATE(120)] = 5695,
  [SMALL_STATE(121)] = 5720,
  [SMALL_STATE(122)] = 5745,
  [SMALL_STATE(123)] = 5770,
  [SMALL_STATE(124)] = 5794,
  [SMALL_STATE(125)] = 5818,
  [SMALL_STATE(126)] = 5842,
  [SMALL_STATE(127)] = 5866,
  [SMALL_STATE(128)] = 5890,
  [SMALL_STATE(129)] = 5914,
  [SMALL_STATE(130)] = 5938,
  [SMALL_STATE(131)] = 5962,
  [SMALL_STATE(132)] = 5986,
  [SMALL_STATE(133)] = 6010,
  [SMALL_STATE(134)] = 6034,
  [SMALL_STATE(135)] = 6058,
  [SMALL_STATE(136)] = 6082,
  [SMALL_STATE(137)] = 6106,
  [SMALL_STATE(138)] = 6152,
  [SMALL_STATE(139)] = 6176,
  [SMALL_STATE(140)] = 6200,
  [SMALL_STATE(141)] = 6224,
  [SMALL_STATE(142)] = 6248,
  [SMALL_STATE(143)] = 6272,
  [SMALL_STATE(144)] = 6296,
  [SMALL_STATE(145)] = 6320,
  [SMALL_STATE(146)] = 6366,
  [SMALL_STATE(147)] = 6412,
  [SMALL_STATE(148)] = 6458,
  [SMALL_STATE(149)] = 6500,
  [SMALL_STATE(150)] = 6540,
  [SMALL_STATE(151)] = 6582,
  [SMALL_STATE(152)] = 6624,
  [SMALL_STATE(153)] = 6664,
  [SMALL_STATE(154)] = 6704,
  [SMALL_STATE(155)] = 6746,
  [SMALL_STATE(156)] = 6785,
  [SMALL_STATE(157)] = 6822,
  [SMALL_STATE(158)] = 6859,
  [SMALL_STATE(159)] = 6889,
  [SMALL_STATE(160)] = 6911,
  [SMALL_STATE(161)] = 6941,
  [SMALL_STATE(162)] = 6972,
  [SMALL_STATE(163)] = 7002,
  [SMALL_STATE(164)] = 7028,
  [SMALL_STATE(165)] = 7056,
  [SMALL_STATE(166)] = 7082,
  [SMALL_STATE(167)] = 7110,
  [SMALL_STATE(168)] = 7138,
  [SMALL_STATE(169)] = 7166,
  [SMALL_STATE(170)] = 7194,
  [SMALL_STATE(171)] = 7222,
  [SMALL_STATE(172)] = 7250,
  [SMALL_STATE(173)] = 7280,
  [SMALL_STATE(174)] = 7308,
  [SMALL_STATE(175)] = 7336,
  [SMALL_STATE(176)] = 7364,
  [SMALL_STATE(177)] = 7392,
  [SMALL_STATE(178)] = 7418,
  [SMALL_STATE(179)] = 7446,
  [SMALL_STATE(180)] = 7472,
  [SMALL_STATE(181)] = 7498,
  [SMALL_STATE(182)] = 7524,
  [SMALL_STATE(183)] = 7552,
  [SMALL_STATE(184)] = 7578,
  [SMALL_STATE(185)] = 7604,
  [SMALL_STATE(186)] = 7632,
  [SMALL_STATE(187)] = 7655,
  [SMALL_STATE(188)] = 7678,
  [SMALL_STATE(189)] = 7703,
  [SMALL_STATE(190)] = 7728,
  [SMALL_STATE(191)] = 7753,
  [SMALL_STATE(192)] = 7778,
  [SMALL_STATE(193)] = 7803,
  [SMALL_STATE(194)] = 7822,
  [SMALL_STATE(195)] = 7845,
  [SMALL_STATE(196)] = 7868,
  [SMALL_STATE(197)] = 7893,
  [SMALL_STATE(198)] = 7918,
  [SMALL_STATE(199)] = 7943,
  [SMALL_STATE(200)] = 7967,
  [SMALL_STATE(201)] = 7991,
  [SMALL_STATE(202)] = 8015,
  [SMALL_STATE(203)] = 8039,
  [SMALL_STATE(204)] = 8063,
  [SMALL_STATE(205)] = 8081,
  [SMALL_STATE(206)] = 8097,
  [SMALL_STATE(207)] = 8115,
  [SMALL_STATE(208)] = 8131,
  [SMALL_STATE(209)] = 8152,
  [SMALL_STATE(210)] = 8167,
  [SMALL_STATE(211)] = 8186,
  [SMALL_STATE(212)] = 8211,
  [SMALL_STATE(213)] = 8230,
  [SMALL_STATE(214)] = 8247,
  [SMALL_STATE(215)] = 8262,
  [SMALL_STATE(216)] = 8281,
  [SMALL_STATE(217)] = 8298,
  [SMALL_STATE(218)] = 8317,
  [SMALL_STATE(219)] = 8334,
  [SMALL_STATE(220)] = 8355,
  [SMALL_STATE(221)] = 8380,
  [SMALL_STATE(222)] = 8403,
  [SMALL_STATE(223)] = 8421,
  [SMALL_STATE(224)] = 8439,
  [SMALL_STATE(225)] = 8455,
  [SMALL_STATE(226)] = 8473,
  [SMALL_STATE(227)] = 8493,
  [SMALL_STATE(228)] = 8513,
  [SMALL_STATE(229)] = 8529,
  [SMALL_STATE(230)] = 8543,
  [SMALL_STATE(231)] = 8559,
  [SMALL_STATE(232)] = 8577,
  [SMALL_STATE(233)] = 8597,
  [SMALL_STATE(234)] = 8617,
  [SMALL_STATE(235)] = 8637,
  [SMALL_STATE(236)] = 8653,
  [SMALL_STATE(237)] = 8669,
  [SMALL_STATE(238)] = 8689,
  [SMALL_STATE(239)] = 8707,
  [SMALL_STATE(240)] = 8723,
  [SMALL_STATE(241)] = 8739,
  [SMALL_STATE(242)] = 8759,
  [SMALL_STATE(243)] = 8779,
  [SMALL_STATE(244)] = 8799,
  [SMALL_STATE(245)] = 8819,
  [SMALL_STATE(246)] = 8839,
  [SMALL_STATE(247)] = 8855,
  [SMALL_STATE(248)] = 8875,
  [SMALL_STATE(249)] = 8889,
  [SMALL_STATE(250)] = 8900,
  [SMALL_STATE(251)] = 8911,
  [SMALL_STATE(252)] = 8922,
  [SMALL_STATE(253)] = 8933,
  [SMALL_STATE(254)] = 8944,
  [SMALL_STATE(255)] = 8961,
  [SMALL_STATE(256)] = 8978,
  [SMALL_STATE(257)] = 8989,
  [SMALL_STATE(258)] = 9000,
  [SMALL_STATE(259)] = 9011,
  [SMALL_STATE(260)] = 9022,
  [SMALL_STATE(261)] = 9037,
  [SMALL_STATE(262)] = 9050,
  [SMALL_STATE(263)] = 9061,
  [SMALL_STATE(264)] = 9074,
  [SMALL_STATE(265)] = 9085,
  [SMALL_STATE(266)] = 9100,
  [SMALL_STATE(267)] = 9117,
  [SMALL_STATE(268)] = 9132,
  [SMALL_STATE(269)] = 9149,
  [SMALL_STATE(270)] = 9166,
  [SMALL_STATE(271)] = 9179,
  [SMALL_STATE(272)] = 9190,
  [SMALL_STATE(273)] = 9203,
  [SMALL_STATE(274)] = 9216,
  [SMALL_STATE(275)] = 9233,
  [SMALL_STATE(276)] = 9250,
  [SMALL_STATE(277)] = 9267,
  [SMALL_STATE(278)] = 9278,
  [SMALL_STATE(279)] = 9293,
  [SMALL_STATE(280)] = 9304,
  [SMALL_STATE(281)] = 9321,
  [SMALL_STATE(282)] = 9332,
  [SMALL_STATE(283)] = 9349,
  [SMALL_STATE(284)] = 9366,
  [SMALL_STATE(285)] = 9383,
  [SMALL_STATE(286)] = 9394,
  [SMALL_STATE(287)] = 9411,
  [SMALL_STATE(288)] = 9428,
  [SMALL_STATE(289)] = 9445,
  [SMALL_STATE(290)] = 9462,
  [SMALL_STATE(291)] = 9473,
  [SMALL_STATE(292)] = 9484,
  [SMALL_STATE(293)] = 9501,
  [SMALL_STATE(294)] = 9518,
  [SMALL_STATE(295)] = 9529,
  [SMALL_STATE(296)] = 9540,
  [SMALL_STATE(297)] = 9551,
  [SMALL_STATE(298)] = 9564,
  [SMALL_STATE(299)] = 9575,
  [SMALL_STATE(300)] = 9588,
  [SMALL_STATE(301)] = 9599,
  [SMALL_STATE(302)] = 9616,
  [SMALL_STATE(303)] = 9633,
  [SMALL_STATE(304)] = 9650,
  [SMALL_STATE(305)] = 9664,
  [SMALL_STATE(306)] = 9678,
  [SMALL_STATE(307)] = 9694,
  [SMALL_STATE(308)] = 9704,
  [SMALL_STATE(309)] = 9714,
  [SMALL_STATE(310)] = 9728,
  [SMALL_STATE(311)] = 9738,
  [SMALL_STATE(312)] = 9748,
  [SMALL_STATE(313)] = 9758,
  [SMALL_STATE(314)] = 9768,
  [SMALL_STATE(315)] = 9778,
  [SMALL_STATE(316)] = 9792,
  [SMALL_STATE(317)] = 9806,
  [SMALL_STATE(318)] = 9816,
  [SMALL_STATE(319)] = 9826,
  [SMALL_STATE(320)] = 9840,
  [SMALL_STATE(321)] = 9850,
  [SMALL_STATE(322)] = 9860,
  [SMALL_STATE(323)] = 9876,
  [SMALL_STATE(324)] = 9890,
  [SMALL_STATE(325)] = 9904,
  [SMALL_STATE(326)] = 9920,
  [SMALL_STATE(327)] = 9936,
  [SMALL_STATE(328)] = 9952,
  [SMALL_STATE(329)] = 9966,
  [SMALL_STATE(330)] = 9976,
  [SMALL_STATE(331)] = 9986,
  [SMALL_STATE(332)] = 9996,
  [SMALL_STATE(333)] = 10006,
  [SMALL_STATE(334)] = 10020,
  [SMALL_STATE(335)] = 10036,
  [SMALL_STATE(336)] = 10046,
  [SMALL_STATE(337)] = 10062,
  [SMALL_STATE(338)] = 10076,
  [SMALL_STATE(339)] = 10086,
  [SMALL_STATE(340)] = 10100,
  [SMALL_STATE(341)] = 10110,
  [SMALL_STATE(342)] = 10126,
  [SMALL_STATE(343)] = 10136,
  [SMALL_STATE(344)] = 10146,
  [SMALL_STATE(345)] = 10162,
  [SMALL_STATE(346)] = 10178,
  [SMALL_STATE(347)] = 10187,
  [SMALL_STATE(348)] = 10200,
  [SMALL_STATE(349)] = 10213,
  [SMALL_STATE(350)] = 10226,
  [SMALL_STATE(351)] = 10239,
  [SMALL_STATE(352)] = 10250,
  [SMALL_STATE(353)] = 10263,
  [SMALL_STATE(354)] = 10276,
  [SMALL_STATE(355)] = 10289,
  [SMALL_STATE(356)] = 10300,
  [SMALL_STATE(357)] = 10313,
  [SMALL_STATE(358)] = 10324,
  [SMALL_STATE(359)] = 10337,
  [SMALL_STATE(360)] = 10350,
  [SMALL_STATE(361)] = 10363,
  [SMALL_STATE(362)] = 10372,
  [SMALL_STATE(363)] = 10381,
  [SMALL_STATE(364)] = 10390,
  [SMALL_STATE(365)] = 10403,
  [SMALL_STATE(366)] = 10414,
  [SMALL_STATE(367)] = 10423,
  [SMALL_STATE(368)] = 10436,
  [SMALL_STATE(369)] = 10449,
  [SMALL_STATE(370)] = 10462,
  [SMALL_STATE(371)] = 10471,
  [SMALL_STATE(372)] = 10480,
  [SMALL_STATE(373)] = 10493,
  [SMALL_STATE(374)] = 10506,
  [SMALL_STATE(375)] = 10515,
  [SMALL_STATE(376)] = 10528,
  [SMALL_STATE(377)] = 10541,
  [SMALL_STATE(378)] = 10554,
  [SMALL_STATE(379)] = 10567,
  [SMALL_STATE(380)] = 10576,
  [SMALL_STATE(381)] = 10585,
  [SMALL_STATE(382)] = 10594,
  [SMALL_STATE(383)] = 10603,
  [SMALL_STATE(384)] = 10616,
  [SMALL_STATE(385)] = 10629,
  [SMALL_STATE(386)] = 10642,
  [SMALL_STATE(387)] = 10653,
  [SMALL_STATE(388)] = 10666,
  [SMALL_STATE(389)] = 10674,
  [SMALL_STATE(390)] = 10682,
  [SMALL_STATE(391)] = 10690,
  [SMALL_STATE(392)] = 10698,
  [SMALL_STATE(393)] = 10706,
  [SMALL_STATE(394)] = 10714,
  [SMALL_STATE(395)] = 10722,
  [SMALL_STATE(396)] = 10730,
  [SMALL_STATE(397)] = 10738,
  [SMALL_STATE(398)] = 10746,
  [SMALL_STATE(399)] = 10754,
  [SMALL_STATE(400)] = 10762,
  [SMALL_STATE(401)] = 10770,
  [SMALL_STATE(402)] = 10778,
  [SMALL_STATE(403)] = 10786,
  [SMALL_STATE(404)] = 10794,
  [SMALL_STATE(405)] = 10802,
  [SMALL_STATE(406)] = 10810,
  [SMALL_STATE(407)] = 10818,
  [SMALL_STATE(408)] = 10826,
  [SMALL_STATE(409)] = 10834,
  [SMALL_STATE(410)] = 10844,
  [SMALL_STATE(411)] = 10852,
  [SMALL_STATE(412)] = 10860,
  [SMALL_STATE(413)] = 10868,
  [SMALL_STATE(414)] = 10876,
  [SMALL_STATE(415)] = 10884,
  [SMALL_STATE(416)] = 10892,
  [SMALL_STATE(417)] = 10900,
  [SMALL_STATE(418)] = 10910,
  [SMALL_STATE(419)] = 10918,
  [SMALL_STATE(420)] = 10926,
  [SMALL_STATE(421)] = 10934,
  [SMALL_STATE(422)] = 10942,
  [SMALL_STATE(423)] = 10952,
  [SMALL_STATE(424)] = 10962,
  [SMALL_STATE(425)] = 10972,
  [SMALL_STATE(426)] = 10982,
  [SMALL_STATE(427)] = 10990,
  [SMALL_STATE(428)] = 10998,
  [SMALL_STATE(429)] = 11008,
  [SMALL_STATE(430)] = 11018,
  [SMALL_STATE(431)] = 11028,
  [SMALL_STATE(432)] = 11038,
  [SMALL_STATE(433)] = 11048,
  [SMALL_STATE(434)] = 11058,
  [SMALL_STATE(435)] = 11068,
  [SMALL_STATE(436)] = 11078,
  [SMALL_STATE(437)] = 11088,
  [SMALL_STATE(438)] = 11096,
  [SMALL_STATE(439)] = 11104,
  [SMALL_STATE(440)] = 11114,
  [SMALL_STATE(441)] = 11124,
  [SMALL_STATE(442)] = 11132,
  [SMALL_STATE(443)] = 11142,
  [SMALL_STATE(444)] = 11152,
  [SMALL_STATE(445)] = 11160,
  [SMALL_STATE(446)] = 11170,
  [SMALL_STATE(447)] = 11178,
  [SMALL_STATE(448)] = 11188,
  [SMALL_STATE(449)] = 11196,
  [SMALL_STATE(450)] = 11204,
  [SMALL_STATE(451)] = 11212,
  [SMALL_STATE(452)] = 11220,
  [SMALL_STATE(453)] = 11228,
  [SMALL_STATE(454)] = 11236,
  [SMALL_STATE(455)] = 11246,
  [SMALL_STATE(456)] = 11256,
  [SMALL_STATE(457)] = 11264,
  [SMALL_STATE(458)] = 11272,
  [SMALL_STATE(459)] = 11282,
  [SMALL_STATE(460)] = 11290,
  [SMALL_STATE(461)] = 11298,
  [SMALL_STATE(462)] = 11308,
  [SMALL_STATE(463)] = 11316,
  [SMALL_STATE(464)] = 11324,
  [SMALL_STATE(465)] = 11332,
  [SMALL_STATE(466)] = 11342,
  [SMALL_STATE(467)] = 11352,
  [SMALL_STATE(468)] = 11360,
  [SMALL_STATE(469)] = 11368,
  [SMALL_STATE(470)] = 11376,
  [SMALL_STATE(471)] = 11386,
  [SMALL_STATE(472)] = 11394,
  [SMALL_STATE(473)] = 11402,
  [SMALL_STATE(474)] = 11412,
  [SMALL_STATE(475)] = 11420,
  [SMALL_STATE(476)] = 11430,
  [SMALL_STATE(477)] = 11440,
  [SMALL_STATE(478)] = 11450,
  [SMALL_STATE(479)] = 11458,
  [SMALL_STATE(480)] = 11468,
  [SMALL_STATE(481)] = 11478,
  [SMALL_STATE(482)] = 11486,
  [SMALL_STATE(483)] = 11494,
  [SMALL_STATE(484)] = 11502,
  [SMALL_STATE(485)] = 11512,
  [SMALL_STATE(486)] = 11520,
  [SMALL_STATE(487)] = 11530,
  [SMALL_STATE(488)] = 11538,
  [SMALL_STATE(489)] = 11546,
  [SMALL_STATE(490)] = 11554,
  [SMALL_STATE(491)] = 11562,
  [SMALL_STATE(492)] = 11570,
  [SMALL_STATE(493)] = 11578,
  [SMALL_STATE(494)] = 11586,
  [SMALL_STATE(495)] = 11594,
  [SMALL_STATE(496)] = 11602,
  [SMALL_STATE(497)] = 11612,
  [SMALL_STATE(498)] = 11620,
  [SMALL_STATE(499)] = 11630,
  [SMALL_STATE(500)] = 11640,
  [SMALL_STATE(501)] = 11648,
  [SMALL_STATE(502)] = 11658,
  [SMALL_STATE(503)] = 11668,
  [SMALL_STATE(504)] = 11678,
  [SMALL_STATE(505)] = 11688,
  [SMALL_STATE(506)] = 11698,
  [SMALL_STATE(507)] = 11706,
  [SMALL_STATE(508)] = 11716,
  [SMALL_STATE(509)] = 11724,
  [SMALL_STATE(510)] = 11732,
  [SMALL_STATE(511)] = 11742,
  [SMALL_STATE(512)] = 11749,
  [SMALL_STATE(513)] = 11756,
  [SMALL_STATE(514)] = 11763,
  [SMALL_STATE(515)] = 11770,
  [SMALL_STATE(516)] = 11777,
  [SMALL_STATE(517)] = 11784,
  [SMALL_STATE(518)] = 11791,
  [SMALL_STATE(519)] = 11798,
  [SMALL_STATE(520)] = 11805,
  [SMALL_STATE(521)] = 11812,
  [SMALL_STATE(522)] = 11819,
  [SMALL_STATE(523)] = 11826,
  [SMALL_STATE(524)] = 11833,
  [SMALL_STATE(525)] = 11840,
  [SMALL_STATE(526)] = 11847,
  [SMALL_STATE(527)] = 11854,
  [SMALL_STATE(528)] = 11861,
  [SMALL_STATE(529)] = 11868,
  [SMALL_STATE(530)] = 11875,
  [SMALL_STATE(531)] = 11882,
  [SMALL_STATE(532)] = 11889,
  [SMALL_STATE(533)] = 11896,
  [SMALL_STATE(534)] = 11903,
  [SMALL_STATE(535)] = 11910,
  [SMALL_STATE(536)] = 11917,
  [SMALL_STATE(537)] = 11924,
  [SMALL_STATE(538)] = 11931,
  [SMALL_STATE(539)] = 11938,
  [SMALL_STATE(540)] = 11945,
  [SMALL_STATE(541)] = 11952,
  [SMALL_STATE(542)] = 11959,
  [SMALL_STATE(543)] = 11966,
  [SMALL_STATE(544)] = 11973,
  [SMALL_STATE(545)] = 11980,
  [SMALL_STATE(546)] = 11987,
  [SMALL_STATE(547)] = 11994,
  [SMALL_STATE(548)] = 12001,
  [SMALL_STATE(549)] = 12008,
  [SMALL_STATE(550)] = 12015,
  [SMALL_STATE(551)] = 12022,
  [SMALL_STATE(552)] = 12029,
  [SMALL_STATE(553)] = 12036,
  [SMALL_STATE(554)] = 12043,
  [SMALL_STATE(555)] = 12050,
  [SMALL_STATE(556)] = 12057,
  [SMALL_STATE(557)] = 12064,
  [SMALL_STATE(558)] = 12071,
  [SMALL_STATE(559)] = 12078,
  [SMALL_STATE(560)] = 12085,
  [SMALL_STATE(561)] = 12092,
  [SMALL_STATE(562)] = 12099,
  [SMALL_STATE(563)] = 12106,
  [SMALL_STATE(564)] = 12113,
  [SMALL_STATE(565)] = 12120,
  [SMALL_STATE(566)] = 12127,
  [SMALL_STATE(567)] = 12134,
  [SMALL_STATE(568)] = 12141,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hurl_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(264),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_options_section, 3, 0, 4),
  [15] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_options_section, 3, 0, 4),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(559),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(560),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(561),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(562),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(563),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(564),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(565),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_options_section, 2, 0, 4),
  [33] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_options_section, 2, 0, 4),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_options_section_repeat1, 2, 0, 0),
  [37] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_options_section_repeat1, 2, 0, 0),
  [39] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_options_section_repeat1, 2, 0, 0), SHIFT_REPEAT(559),
  [42] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_options_section_repeat1, 2, 0, 0), SHIFT_REPEAT(560),
  [45] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_options_section_repeat1, 2, 0, 0), SHIFT_REPEAT(561),
  [48] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_options_section_repeat1, 2, 0, 0), SHIFT_REPEAT(562),
  [51] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_options_section_repeat1, 2, 0, 0), SHIFT_REPEAT(563),
  [54] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_options_section_repeat1, 2, 0, 0), SHIFT_REPEAT(564),
  [57] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_options_section_repeat1, 2, 0, 0), SHIFT_REPEAT(565),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 2, 0, 0),
  [62] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 2, 0, 0),
  [64] = {.entry = {.count = 1, .reusable = false}}, SHIFT(289),
  [66] = {.entry = {.count = 1, .reusable = false}}, SHIFT(288),
  [68] = {.entry = {.count = 1, .reusable = false}}, SHIFT(286),
  [70] = {.entry = {.count = 1, .reusable = false}}, SHIFT(284),
  [72] = {.entry = {.count = 1, .reusable = false}}, SHIFT(283),
  [74] = {.entry = {.count = 1, .reusable = false}}, SHIFT(282),
  [76] = {.entry = {.count = 1, .reusable = false}}, SHIFT(497),
  [78] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [80] = {.entry = {.count = 1, .reusable = false}}, SHIFT(211),
  [82] = {.entry = {.count = 1, .reusable = false}}, SHIFT(496),
  [84] = {.entry = {.count = 1, .reusable = false}}, SHIFT(512),
  [86] = {.entry = {.count = 1, .reusable = false}}, SHIFT(521),
  [88] = {.entry = {.count = 1, .reusable = false}}, SHIFT(333),
  [90] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [94] = {.entry = {.count = 1, .reusable = false}}, SHIFT(261),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [98] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(206),
  [102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(492),
  [104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(491),
  [106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(367),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 3, 0, 0),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 3, 0, 0),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 4, 0, 0),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 4, 0, 0),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__comment_or_new_line_repeat1, 2, 0, 0),
  [122] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__comment_or_new_line_repeat1, 2, 0, 0), SHIFT_REPEAT(9),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__comment_or_new_line_repeat1, 2, 0, 0),
  [127] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__comment_or_new_line_repeat1, 2, 0, 0), SHIFT_REPEAT(9),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__comment_or_new_line, 1, 0, 0),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__comment_or_new_line, 1, 0, 0),
  [136] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 5, 0, 0),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 5, 0, 0),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response, 3, 0, 0),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_response, 3, 0, 0),
  [146] = {.entry = {.count = 1, .reusable = false}}, SHIFT(266),
  [148] = {.entry = {.count = 1, .reusable = false}}, SHIFT(269),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response, 4, 0, 0),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_response, 4, 0, 0),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(484),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [158] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(483),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [170] = {.entry = {.count = 1, .reusable = false}}, SHIFT(345),
  [172] = {.entry = {.count = 1, .reusable = false}}, SHIFT(344),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [178] = {.entry = {.count = 1, .reusable = false}}, SHIFT(334),
  [180] = {.entry = {.count = 1, .reusable = false}}, SHIFT(327),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(473),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(480),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(527),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(475),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multipart_form_data_section, 2, 0, 4),
  [210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multipart_form_data_section, 2, 0, 4),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multipart_form_data_section, 3, 0, 4),
  [214] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multipart_form_data_section, 3, 0, 4),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_multipart_form_data_section_repeat1, 2, 0, 0),
  [218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_multipart_form_data_section_repeat1, 2, 0, 0),
  [220] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_multipart_form_data_section_repeat1, 2, 0, 0), SHIFT_REPEAT(349),
  [223] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multipart_form_data_section_repeat1, 2, 0, 0), SHIFT_REPEAT(261),
  [226] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_multipart_form_data_section_repeat1, 2, 0, 0), SHIFT_REPEAT(261),
  [229] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_multipart_form_data_section_repeat1, 2, 0, 0), SHIFT_REPEAT(329),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_request_repeat1, 2, 0, 0),
  [234] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_request_repeat1, 2, 0, 0),
  [236] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_request_repeat1, 2, 0, 0), SHIFT_REPEAT(349),
  [239] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat1, 2, 0, 0), SHIFT_REPEAT(261),
  [242] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_request_repeat1, 2, 0, 0), SHIFT_REPEAT(261),
  [245] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_request_repeat1, 2, 0, 0), SHIFT_REPEAT(329),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response, 5, 0, 0),
  [250] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_response, 5, 0, 0),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_string_params_section, 3, 0, 4),
  [254] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query_string_params_section, 3, 0, 4),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_form_params_section, 5, 0, 4),
  [258] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_form_params_section, 5, 0, 4),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_asserts_section_repeat1, 2, 0, 0),
  [262] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_asserts_section_repeat1, 2, 0, 0),
  [264] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_asserts_section_repeat1, 2, 0, 0), SHIFT_REPEAT(436),
  [267] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_asserts_section_repeat1, 2, 0, 0), SHIFT_REPEAT(433),
  [270] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_asserts_section_repeat1, 2, 0, 0), SHIFT_REPEAT(68),
  [273] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_asserts_section_repeat1, 2, 0, 0), SHIFT_REPEAT(435),
  [276] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_asserts_section_repeat1, 2, 0, 0), SHIFT_REPEAT(443),
  [279] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_asserts_section_repeat1, 2, 0, 0), SHIFT_REPEAT(445),
  [282] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_asserts_section_repeat1, 2, 0, 0), SHIFT_REPEAT(315),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cookies_section, 5, 0, 4),
  [287] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cookies_section, 5, 0, 4),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_string_params_section, 4, 0, 4),
  [291] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query_string_params_section, 4, 0, 4),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cookies_section, 4, 0, 4),
  [295] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cookies_section, 4, 0, 4),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_asserts_section, 2, 0, 4),
  [299] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_asserts_section, 2, 0, 4),
  [301] = {.entry = {.count = 1, .reusable = false}}, SHIFT(436),
  [303] = {.entry = {.count = 1, .reusable = false}}, SHIFT(433),
  [305] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [307] = {.entry = {.count = 1, .reusable = false}}, SHIFT(435),
  [309] = {.entry = {.count = 1, .reusable = false}}, SHIFT(443),
  [311] = {.entry = {.count = 1, .reusable = false}}, SHIFT(445),
  [313] = {.entry = {.count = 1, .reusable = false}}, SHIFT(315),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_string_params_section, 5, 0, 4),
  [317] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query_string_params_section, 5, 0, 4),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_form_params_section, 3, 0, 4),
  [321] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_form_params_section, 3, 0, 4),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_asserts_section, 3, 0, 4),
  [325] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_asserts_section, 3, 0, 4),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_form_params_section, 4, 0, 4),
  [329] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_form_params_section, 4, 0, 4),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cookies_section, 3, 0, 4),
  [333] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cookies_section, 3, 0, 4),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_request_repeat2, 2, 0, 0),
  [337] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_request_repeat2, 2, 0, 0),
  [339] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat2, 2, 0, 0), SHIFT_REPEAT(289),
  [342] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat2, 2, 0, 0), SHIFT_REPEAT(288),
  [345] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat2, 2, 0, 0), SHIFT_REPEAT(286),
  [348] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat2, 2, 0, 0), SHIFT_REPEAT(284),
  [351] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat2, 2, 0, 0), SHIFT_REPEAT(283),
  [354] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat2, 2, 0, 0), SHIFT_REPEAT(282),
  [357] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_capture_repeat1, 2, 0, 0), SHIFT_REPEAT(484),
  [360] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_capture_repeat1, 2, 0, 0), SHIFT_REPEAT(339),
  [363] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_capture_repeat1, 2, 0, 0),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_capture_repeat1, 2, 0, 0),
  [367] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_capture_repeat1, 2, 0, 0), SHIFT_REPEAT(61),
  [370] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_capture_repeat1, 2, 0, 0), SHIFT_REPEAT(480),
  [373] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_capture_repeat1, 2, 0, 0), SHIFT_REPEAT(527),
  [376] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_capture_repeat1, 2, 0, 0), SHIFT_REPEAT(324),
  [379] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_capture_repeat1, 2, 0, 0), SHIFT_REPEAT(475),
  [382] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__comment_or_new_line_repeat1, 2, 0, 0), SHIFT_REPEAT(39),
  [385] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__comment_or_new_line_repeat1, 2, 0, 0), SHIFT_REPEAT(39),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [390] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 2, 0, 0),
  [394] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 2, 0, 0),
  [396] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__comment_or_new_line_repeat1, 2, 0, 0), SHIFT_REPEAT(43),
  [399] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__comment_or_new_line_repeat1, 2, 0, 0), SHIFT_REPEAT(43),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [404] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assert, 4, 0, 0),
  [408] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assert, 4, 0, 0),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assert, 3, 0, 0),
  [412] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assert, 3, 0, 0),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_basic_auth_section, 4, 0, 4),
  [416] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_basic_auth_section, 4, 0, 4),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request_section, 1, 0, 0),
  [420] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request_section, 1, 0, 0),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regex, 3, 0, 0),
  [424] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_regex, 3, 0, 0),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_string, 3, 0, 0),
  [428] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_string, 3, 0, 0),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regex, 2, 0, 0),
  [432] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_regex, 2, 0, 0),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_string, 2, 0, 0),
  [436] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_string, 2, 0, 0),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_captures_section, 2, 0, 4),
  [440] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_captures_section, 2, 0, 4),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_captures_section, 3, 0, 4),
  [444] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_captures_section, 3, 0, 4),
  [446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xpath_filter, 2, 0, 3),
  [448] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xpath_filter, 2, 0, 3),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regex_filter, 2, 0, 3),
  [452] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_regex_filter, 2, 0, 3),
  [454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_filter, 2, 0, 3),
  [456] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_filter, 2, 0, 3),
  [458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filter, 1, 0, 0),
  [460] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_filter, 1, 0, 0),
  [462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nth_filter, 2, 0, 3),
  [464] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nth_filter, 2, 0, 3),
  [466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_filter_key, 1, 0, 3),
  [468] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_filter_key, 1, 0, 3),
  [470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_replace_filter, 3, 0, 3),
  [472] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_replace_filter, 3, 0, 3),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_captures_section_repeat1, 2, 0, 0),
  [476] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_captures_section_repeat1, 2, 0, 0),
  [478] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_captures_section_repeat1, 2, 0, 0), SHIFT_REPEAT(349),
  [481] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_captures_section_repeat1, 2, 0, 0), SHIFT_REPEAT(261),
  [484] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_captures_section_repeat1, 2, 0, 0), SHIFT_REPEAT(261),
  [487] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_captures_section_repeat1, 2, 0, 0), SHIFT_REPEAT(329),
  [490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_split_filter, 2, 0, 3),
  [492] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_split_filter, 2, 0, 3),
  [494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cookie_query, 2, 0, 9),
  [496] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cookie_query, 2, 0, 9),
  [498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_query, 2, 0, 9),
  [500] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_query, 2, 0, 9),
  [502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_query, 2, 0, 9),
  [504] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header_query, 2, 0, 9),
  [506] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_query, 1, 0, 9),
  [508] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_query, 1, 0, 9),
  [510] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query, 1, 0, 0),
  [512] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query, 1, 0, 0),
  [514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xpath_query, 2, 0, 9),
  [516] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xpath_query, 2, 0, 9),
  [518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jsonpath_query, 2, 0, 9),
  [520] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_jsonpath_query, 2, 0, 9),
  [522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regex_query, 2, 0, 9),
  [524] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_regex_query, 2, 0, 9),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [528] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [530] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__comment_or_new_line_repeat1, 2, 0, 0), SHIFT_REPEAT(75),
  [533] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__comment_or_new_line_repeat1, 2, 0, 0), SHIFT_REPEAT(75),
  [536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_capture, 5, 0, 0),
  [538] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_capture, 5, 0, 0),
  [540] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_capture, 4, 0, 0),
  [542] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_capture, 4, 0, 0),
  [544] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_response_repeat1, 2, 0, 0),
  [546] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_response_repeat1, 2, 0, 0),
  [548] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_response_repeat1, 2, 0, 0), SHIFT_REPEAT(266),
  [551] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_response_repeat1, 2, 0, 0), SHIFT_REPEAT(269),
  [554] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response_section, 1, 0, 0),
  [556] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_response_section, 1, 0, 0),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [560] = {.entry = {.count = 1, .reusable = false}}, SHIFT(499),
  [562] = {.entry = {.count = 1, .reusable = false}}, SHIFT(328),
  [564] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [566] = {.entry = {.count = 1, .reusable = false}}, SHIFT(501),
  [568] = {.entry = {.count = 1, .reusable = false}}, SHIFT(515),
  [570] = {.entry = {.count = 1, .reusable = false}}, SHIFT(316),
  [572] = {.entry = {.count = 1, .reusable = false}}, SHIFT(502),
  [574] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [580] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entry, 2, 0, 0),
  [582] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_entry, 2, 0, 0),
  [584] = {.entry = {.count = 1, .reusable = false}}, SHIFT(487),
  [586] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entry, 1, 0, 0),
  [588] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_entry, 1, 0, 0),
  [590] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_capture_repeat1, 2, 0, 0), SHIFT_REPEAT(499),
  [593] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_capture_repeat1, 2, 0, 0), SHIFT_REPEAT(328),
  [596] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_capture_repeat1, 2, 0, 0), SHIFT_REPEAT(126),
  [599] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_capture_repeat1, 2, 0, 0), SHIFT_REPEAT(501),
  [602] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_capture_repeat1, 2, 0, 0), SHIFT_REPEAT(515),
  [605] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_capture_repeat1, 2, 0, 0), SHIFT_REPEAT(316),
  [608] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_capture_repeat1, 2, 0, 0), SHIFT_REPEAT(502),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [613] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [615] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hurl_file, 1, 0, 0),
  [617] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 2, 0, 0),
  [619] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 1, 0, 0),
  [621] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__comment_or_new_line_repeat1, 2, 0, 0), SHIFT_REPEAT(90),
  [624] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__comment_or_new_line_repeat1, 2, 0, 0), SHIFT_REPEAT(90),
  [627] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_hurl_file_repeat1, 2, 0, 0),
  [629] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_hurl_file_repeat1, 2, 0, 0), SHIFT_REPEAT(115),
  [632] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_hurl_file_repeat1, 2, 0, 0), SHIFT_REPEAT(264),
  [635] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_hurl_file_repeat1, 2, 0, 0), SHIFT_REPEAT(115),
  [638] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 2, 0, 0),
  [640] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_body, 2, 0, 0),
  [642] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 6, 0, 0),
  [644] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 6, 0, 0),
  [646] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hurl_file, 2, 0, 0),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [650] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [652] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_hurl_file_repeat2, 2, 0, 0),
  [654] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_hurl_file_repeat2, 2, 0, 0), SHIFT_REPEAT(106),
  [657] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_hurl_file_repeat2, 2, 0, 0),
  [659] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_hurl_file_repeat2, 2, 0, 0), SHIFT_REPEAT(106),
  [662] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_key_value, 2, 0, 0),
  [664] = {.entry = {.count = 1, .reusable = false}}, SHIFT(468),
  [666] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [668] = {.entry = {.count = 1, .reusable = false}}, SHIFT(204),
  [670] = {.entry = {.count = 1, .reusable = false}}, SHIFT(224),
  [672] = {.entry = {.count = 1, .reusable = false}}, SHIFT(471),
  [674] = {.entry = {.count = 1, .reusable = false}}, SHIFT(356),
  [676] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_value, 2, 0, 0),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(479),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(477),
  [682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(470),
  [686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(466),
  [688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(465),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [692] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_hurl_file_repeat2, 2, 0, 0), SHIFT_REPEAT(115),
  [695] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_hurl_file_repeat2, 2, 0, 0), SHIFT_REPEAT(115),
  [698] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entry, 3, 0, 0),
  [700] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_entry, 3, 0, 0),
  [702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [704] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [706] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__comment_or_new_line_repeat1, 2, 0, 0), SHIFT_REPEAT(107),
  [709] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__comment_or_new_line_repeat1, 2, 0, 0), SHIFT_REPEAT(107),
  [712] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entry, 4, 0, 0),
  [714] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_entry, 4, 0, 0),
  [716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(521),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(471),
  [730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [732] = {.entry = {.count = 1, .reusable = false}}, SHIFT(390),
  [734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [736] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [738] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__comment_or_new_line_repeat1, 2, 0, 0), SHIFT_REPEAT(116),
  [741] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__comment_or_new_line_repeat1, 2, 0, 0), SHIFT_REPEAT(116),
  [744] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response, 6, 0, 0),
  [746] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_response, 6, 0, 0),
  [748] = {.entry = {.count = 1, .reusable = false}}, SHIFT(412),
  [750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [752] = {.entry = {.count = 1, .reusable = false}}, SHIFT(229),
  [754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [758] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_name, 2, 0, 0),
  [760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [762] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [770] = {.entry = {.count = 1, .reusable = false}}, SHIFT(461),
  [772] = {.entry = {.count = 1, .reusable = false}}, SHIFT(545),
  [774] = {.entry = {.count = 1, .reusable = false}}, SHIFT(548),
  [776] = {.entry = {.count = 1, .reusable = false}}, SHIFT(230),
  [778] = {.entry = {.count = 1, .reusable = false}}, SHIFT(377),
  [780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [782] = {.entry = {.count = 1, .reusable = false}}, SHIFT(556),
  [784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [786] = {.entry = {.count = 1, .reusable = false}}, SHIFT(220),
  [788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(474),
  [802] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_xml_tag_repeat1, 2, 0, 0), SHIFT_REPEAT(461),
  [805] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_xml_tag_repeat1, 2, 0, 0), SHIFT_REPEAT(545),
  [808] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_xml_tag_repeat1, 2, 0, 0),
  [810] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_xml_tag_repeat1, 2, 0, 0), SHIFT_REPEAT(230),
  [813] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_xml_tag_repeat1, 2, 0, 0), SHIFT_REPEAT(377),
  [816] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_value_string_repeat1, 2, 0, 0),
  [818] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_string_repeat1, 2, 0, 0), SHIFT_REPEAT(204),
  [821] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_string_repeat1, 2, 0, 0), SHIFT_REPEAT(224),
  [824] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_string_repeat1, 2, 0, 0), SHIFT_REPEAT(356),
  [827] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_value_string_repeat1, 2, 0, 0),
  [829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(454),
  [833] = {.entry = {.count = 1, .reusable = false}}, SHIFT(318),
  [835] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_string, 1, 0, 0),
  [837] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_string, 1, 0, 0),
  [839] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [841] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [843] = {.entry = {.count = 1, .reusable = false}}, SHIFT(210),
  [845] = {.entry = {.count = 1, .reusable = false}}, SHIFT(383),
  [847] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_oneline_string_repeat1, 2, 0, 0),
  [849] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_oneline_string_repeat1, 2, 0, 0), SHIFT_REPEAT(263),
  [852] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_oneline_string_repeat1, 2, 0, 0), SHIFT_REPEAT(263),
  [855] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_oneline_string_repeat1, 2, 0, 0), SHIFT_REPEAT(213),
  [858] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_oneline_string_repeat1, 2, 0, 0), SHIFT_REPEAT(376),
  [861] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [863] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_string_repeat1, 2, 0, 0), SHIFT_REPEAT(207),
  [866] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_json_string_repeat1, 2, 0, 0),
  [868] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_string_repeat1, 2, 0, 0), SHIFT_REPEAT(260),
  [871] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_string_repeat1, 2, 0, 0), SHIFT_REPEAT(375),
  [874] = {.entry = {.count = 1, .reusable = false}}, SHIFT(270),
  [876] = {.entry = {.count = 1, .reusable = false}}, SHIFT(205),
  [878] = {.entry = {.count = 1, .reusable = false}}, SHIFT(453),
  [880] = {.entry = {.count = 1, .reusable = false}}, SHIFT(209),
  [882] = {.entry = {.count = 1, .reusable = false}}, SHIFT(378),
  [884] = {.entry = {.count = 1, .reusable = false}}, SHIFT(207),
  [886] = {.entry = {.count = 1, .reusable = false}}, SHIFT(452),
  [888] = {.entry = {.count = 1, .reusable = false}}, SHIFT(260),
  [890] = {.entry = {.count = 1, .reusable = false}}, SHIFT(375),
  [892] = {.entry = {.count = 1, .reusable = false}}, SHIFT(272),
  [894] = {.entry = {.count = 1, .reusable = false}}, SHIFT(494),
  [896] = {.entry = {.count = 1, .reusable = false}}, SHIFT(472),
  [898] = {.entry = {.count = 1, .reusable = false}}, SHIFT(355),
  [900] = {.entry = {.count = 1, .reusable = false}}, SHIFT(248),
  [902] = {.entry = {.count = 1, .reusable = false}}, SHIFT(372),
  [904] = {.entry = {.count = 1, .reusable = false}}, SHIFT(317),
  [906] = {.entry = {.count = 1, .reusable = false}}, SHIFT(365),
  [908] = {.entry = {.count = 1, .reusable = false}}, SHIFT(311),
  [910] = {.entry = {.count = 1, .reusable = false}}, SHIFT(451),
  [912] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [914] = {.entry = {.count = 1, .reusable = false}}, SHIFT(263),
  [916] = {.entry = {.count = 1, .reusable = false}}, SHIFT(213),
  [918] = {.entry = {.count = 1, .reusable = false}}, SHIFT(376),
  [920] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [922] = {.entry = {.count = 1, .reusable = false}}, SHIFT(408),
  [924] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_filename_repeat1, 2, 0, 0),
  [926] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_filename_repeat1, 2, 0, 0), SHIFT_REPEAT(351),
  [929] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_filename_repeat1, 2, 0, 0), SHIFT_REPEAT(214),
  [932] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_filename_repeat1, 2, 0, 0), SHIFT_REPEAT(387),
  [935] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_filename_repeat1, 2, 0, 0),
  [937] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_filename, 1, 0, 0),
  [939] = {.entry = {.count = 1, .reusable = false}}, SHIFT(351),
  [941] = {.entry = {.count = 1, .reusable = false}}, SHIFT(214),
  [943] = {.entry = {.count = 1, .reusable = false}}, SHIFT(387),
  [945] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filename, 1, 0, 0),
  [947] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_string_repeat1, 2, 0, 0), SHIFT_REPEAT(193),
  [950] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_quoted_string_repeat1, 2, 0, 0),
  [952] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_string_repeat1, 2, 0, 0), SHIFT_REPEAT(210),
  [955] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_string_repeat1, 2, 0, 0), SHIFT_REPEAT(383),
  [958] = {.entry = {.count = 1, .reusable = false}}, SHIFT(448),
  [960] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multiline_string_repeat1, 2, 0, 0), SHIFT_REPEAT(209),
  [963] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multiline_string_repeat1, 2, 0, 0), SHIFT_REPEAT(205),
  [966] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_multiline_string_repeat1, 2, 0, 0),
  [968] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multiline_string_repeat1, 2, 0, 0), SHIFT_REPEAT(378),
  [971] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [973] = {.entry = {.count = 1, .reusable = false}}, SHIFT(299),
  [975] = {.entry = {.count = 1, .reusable = false}}, SHIFT(500),
  [977] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_xml_value_string_repeat1, 2, 0, 0),
  [979] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_xml_value_string_repeat1, 2, 0, 0), SHIFT_REPEAT(230),
  [982] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_xml_value_string_repeat1, 2, 0, 0), SHIFT_REPEAT(377),
  [985] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xml_value_string, 1, 0, 0),
  [987] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_key_string_repeat1, 2, 0, 7),
  [989] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_string_repeat1, 2, 0, 7), SHIFT_REPEAT(368),
  [992] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_string_repeat1, 2, 0, 7), SHIFT_REPEAT(229),
  [995] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_key_string_repeat1, 2, 0, 7),
  [997] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_string, 1, 0, 1),
  [999] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_key_string, 1, 0, 1),
  [1001] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_string, 1, 0, 0),
  [1003] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_key_string, 1, 0, 0),
  [1005] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_string, 2, 0, 6),
  [1007] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_key_string, 2, 0, 6),
  [1009] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_string, 2, 0, 7),
  [1011] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_key_string, 2, 0, 7),
  [1013] = {.entry = {.count = 1, .reusable = false}}, SHIFT(330),
  [1015] = {.entry = {.count = 1, .reusable = false}}, SHIFT(498),
  [1017] = {.entry = {.count = 1, .reusable = false}}, SHIFT(332),
  [1019] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_string_content, 1, 0, 0),
  [1021] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_string_content, 1, 0, 0),
  [1023] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_value_string_content_repeat1, 2, 0, 0),
  [1025] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_string_content_repeat1, 2, 0, 0), SHIFT_REPEAT(204),
  [1028] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_string_content_repeat1, 2, 0, 0), SHIFT_REPEAT(224),
  [1031] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_value_string_content_repeat1, 2, 0, 0),
  [1033] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_filename_repeat1, 2, 0, 0), SHIFT_REPEAT(355),
  [1036] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_filename_repeat1, 2, 0, 0), SHIFT_REPEAT(248),
  [1039] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_filename_repeat1, 2, 0, 0), SHIFT_REPEAT(372),
  [1042] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_string_repeat1, 2, 0, 7), SHIFT_REPEAT(349),
  [1045] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_string_repeat1, 2, 0, 7), SHIFT_REPEAT(261),
  [1048] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [1050] = {.entry = {.count = 1, .reusable = true}}, SHIFT(507),
  [1052] = {.entry = {.count = 1, .reusable = false}}, SHIFT(291),
  [1054] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [1056] = {.entry = {.count = 1, .reusable = true}}, SHIFT(434),
  [1058] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [1060] = {.entry = {.count = 1, .reusable = false}}, SHIFT(554),
  [1062] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [1064] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [1066] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_oneline_string_content_repeat1, 2, 0, 0),
  [1068] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_oneline_string_content_repeat1, 2, 0, 0), SHIFT_REPEAT(263),
  [1071] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_oneline_string_content_repeat1, 2, 0, 0), SHIFT_REPEAT(263),
  [1074] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_oneline_string_content_repeat1, 2, 0, 0), SHIFT_REPEAT(208),
  [1077] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline_string_content, 1, 0, 0),
  [1079] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_string_content, 1, 0, 0),
  [1081] = {.entry = {.count = 1, .reusable = false}}, SHIFT(217),
  [1083] = {.entry = {.count = 1, .reusable = true}}, SHIFT(469),
  [1085] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [1087] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_filename_content_repeat1, 2, 0, 0),
  [1089] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_filename_content_repeat1, 2, 0, 0), SHIFT_REPEAT(351),
  [1092] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_filename_content_repeat1, 2, 0, 0), SHIFT_REPEAT(212),
  [1095] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_filename_content_repeat1, 2, 0, 0),
  [1097] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneline_string_content, 1, 0, 0),
  [1099] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneline_string_content, 1, 0, 0),
  [1101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_filename_content, 1, 0, 0),
  [1103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filename_content, 1, 0, 0),
  [1105] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multiline_string_content_repeat1, 2, 0, 0), SHIFT_REPEAT(215),
  [1108] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multiline_string_content_repeat1, 2, 0, 0), SHIFT_REPEAT(205),
  [1111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_multiline_string_content_repeat1, 2, 0, 0),
  [1113] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__comment_or_new_line_repeat1, 2, 0, 0), SHIFT_REPEAT(216),
  [1116] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__comment_or_new_line_repeat1, 2, 0, 0), SHIFT_REPEAT(216),
  [1119] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_string_content_repeat1, 2, 0, 0), SHIFT_REPEAT(193),
  [1122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_quoted_string_content_repeat1, 2, 0, 0),
  [1124] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_string_content_repeat1, 2, 0, 0), SHIFT_REPEAT(217),
  [1127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [1129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(216),
  [1131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [1133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [1135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [1137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(512),
  [1139] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_filename_content_repeat1, 2, 0, 0), SHIFT_REPEAT(355),
  [1142] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_filename_content_repeat1, 2, 0, 0), SHIFT_REPEAT(223),
  [1145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_string_text, 1, 0, 0),
  [1147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(236),
  [1149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_string_text, 1, 0, 0),
  [1151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_filename_password, 1, 0, 0),
  [1153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(231),
  [1155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filename_password, 1, 0, 0),
  [1157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [1159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(528),
  [1161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [1163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(254),
  [1165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_value_string_text_repeat1, 2, 0, 0),
  [1167] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_string_text_repeat1, 2, 0, 0), SHIFT_REPEAT(228),
  [1170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_string_content, 1, 0, 0),
  [1172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_key_string_content, 1, 0, 0),
  [1174] = {.entry = {.count = 1, .reusable = false}}, SHIFT(228),
  [1176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_filename_password_repeat1, 2, 0, 0),
  [1178] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_filename_password_repeat1, 2, 0, 0), SHIFT_REPEAT(231),
  [1181] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_filename_password_repeat1, 2, 0, 0), SHIFT_REPEAT(159),
  [1184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_filename_password_repeat1, 2, 0, 0),
  [1186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [1188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [1190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [1192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_key_string_content_repeat1, 2, 0, 0),
  [1194] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_string_content_repeat1, 2, 0, 0), SHIFT_REPEAT(235),
  [1197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_key_string_content_repeat1, 2, 0, 0),
  [1199] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_string_text_repeat1, 2, 0, 0), SHIFT_REPEAT(236),
  [1202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_value_string_text_repeat1, 2, 0, 0),
  [1204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_duration_option, 3, 0, 10),
  [1206] = {.entry = {.count = 1, .reusable = false}}, SHIFT(450),
  [1208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_duration_option, 3, 0, 10),
  [1210] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__comment_or_new_line_repeat1, 2, 0, 0), SHIFT_REPEAT(240),
  [1213] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__comment_or_new_line_repeat1, 2, 0, 0), SHIFT_REPEAT(240),
  [1216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [1218] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_query_string_params_section_repeat1, 2, 0, 0), SHIFT_REPEAT(246),
  [1221] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_string_params_section_repeat1, 2, 0, 0), SHIFT_REPEAT(246),
  [1224] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_query_string_params_section_repeat1, 2, 0, 0), SHIFT_REPEAT(162),
  [1227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [1229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [1231] = {.entry = {.count = 1, .reusable = false}}, SHIFT(240),
  [1233] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [1235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xml_tag, 3, 0, 0),
  [1237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xml_close_tag, 3, 0, 0),
  [1239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unicode_char, 6, 0, 0),
  [1241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xml_tag, 1, 0, 0),
  [1243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_template, 3, 0, 2),
  [1245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template, 3, 0, 2),
  [1247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_regex_content, 1, 0, 0),
  [1249] = {.entry = {.count = 1, .reusable = false}}, SHIFT(287),
  [1251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [1253] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [1255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [1257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_string_escaped_char, 3, 0, 0),
  [1259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_string_escaped_char, 3, 0, 0),
  [1261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__key_template, 3, 0, 8),
  [1263] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__key_template, 3, 0, 8),
  [1265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xml_prolog_tag, 3, 0, 0),
  [1267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xml_self_closing_tag, 3, 0, 0),
  [1269] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_string_text, 1, 0, 0),
  [1271] = {.entry = {.count = 1, .reusable = false}}, SHIFT(278),
  [1273] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_filename_escaped_char, 2, 0, 0),
  [1275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filename_escaped_char, 2, 0, 0),
  [1277] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneline_string_text, 1, 0, 0),
  [1279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneline_string_text, 1, 0, 0),
  [1281] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_method, 1, 0, 0),
  [1283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method, 1, 0, 0),
  [1285] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_string_content_repeat1, 2, 0, 0), SHIFT_REPEAT(265),
  [1288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [1290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [1292] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [1294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [1296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [1298] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_multiline_string_content_repeat1, 1, 0, 0),
  [1300] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline_string_escaped_char, 2, 0, 0),
  [1302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [1304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [1306] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [1308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [1310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [1312] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_json_string_text_repeat1, 2, 0, 0),
  [1314] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_string_text_repeat1, 2, 0, 0), SHIFT_REPEAT(278),
  [1317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [1319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [1321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [1323] = {.entry = {.count = 1, .reusable = false}}, SHIFT(218),
  [1325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [1327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [1329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unicode_char, 6, 0, 0),
  [1331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [1333] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_regex_content_repeat1, 2, 0, 0), SHIFT_REPEAT(528),
  [1336] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_regex_content_repeat1, 2, 0, 0),
  [1338] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_regex_content_repeat1, 2, 0, 0), SHIFT_REPEAT(287),
  [1341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [1343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [1345] = {.entry = {.count = 1, .reusable = false}}, SHIFT(246),
  [1347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [1349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_key_string_repeat1, 1, 0, 1),
  [1351] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_key_string_repeat1, 1, 0, 1),
  [1353] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_string_escaped_char, 2, 0, 0),
  [1355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_string_escaped_char, 2, 0, 0),
  [1357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [1359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [1361] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xml_open_tag, 3, 0, 0),
  [1363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__unsigned_integer, 1, 0, 11),
  [1365] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__unsigned_integer, 1, 0, 11),
  [1367] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xml_tag, 2, 0, 0),
  [1369] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_option, 3, 0, 10),
  [1371] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_value_string_repeat1, 1, 0, 0),
  [1373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_option, 3, 0, 10),
  [1375] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline_string_escaped_char, 3, 0, 0),
  [1377] = {.entry = {.count = 1, .reusable = false}}, SHIFT(437),
  [1379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bracketed_key_content, 1, 0, 0),
  [1381] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__bracketed_key_content, 1, 0, 0),
  [1383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [1385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [1387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [1389] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_xml_repeat1, 2, 0, 0),
  [1391] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_xml_repeat1, 2, 0, 0), SHIFT_REPEAT(512),
  [1394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [1396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [1398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [1400] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_filename_password_escaped_char, 3, 0, 0),
  [1402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filename_password_escaped_char, 3, 0, 0),
  [1404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_oneline_hex_repeat1, 2, 0, 0),
  [1406] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_oneline_hex_repeat1, 2, 0, 0), SHIFT_REPEAT(363),
  [1409] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_string_escaped_char, 6, 0, 0),
  [1411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_string, 2, 0, 0),
  [1413] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_string_content, 1, 0, 0),
  [1415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [1417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [1419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_string, 3, 0, 0),
  [1421] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_filename_password_escaped_char, 2, 0, 0),
  [1423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filename_password_escaped_char, 2, 0, 0),
  [1425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [1427] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_string_escaped_char, 3, 0, 0),
  [1429] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_hexdigit, 1, 0, 0),
  [1431] = {.entry = {.count = 1, .reusable = false}}, SHIFT(402),
  [1433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [1435] = {.entry = {.count = 1, .reusable = false}}, SHIFT(401),
  [1437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [1439] = {.entry = {.count = 1, .reusable = false}}, SHIFT(400),
  [1441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [1443] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_string_escaped_char, 2, 0, 0),
  [1445] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_invalid_quoted_string_escaped_char, 2, 0, 0),
  [1447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(456),
  [1449] = {.entry = {.count = 1, .reusable = false}}, SHIFT(399),
  [1451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [1453] = {.entry = {.count = 1, .reusable = false}}, SHIFT(398),
  [1455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [1457] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_string_escaped_char, 2, 0, 0),
  [1459] = {.entry = {.count = 1, .reusable = false}}, SHIFT(397),
  [1461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [1463] = {.entry = {.count = 1, .reusable = false}}, SHIFT(396),
  [1465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [1467] = {.entry = {.count = 1, .reusable = false}}, SHIFT(395),
  [1469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [1471] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_json_array_repeat1, 2, 0, 0), SHIFT_REPEAT(157),
  [1474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_json_array_repeat1, 2, 0, 0),
  [1476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(519),
  [1478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [1480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [1482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [1484] = {.entry = {.count = 1, .reusable = false}}, SHIFT(262),
  [1486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [1488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [1490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [1492] = {.entry = {.count = 1, .reusable = false}}, SHIFT(308),
  [1494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(508),
  [1496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [1498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [1500] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_object, 4, 0, 0),
  [1502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_array, 4, 0, 0),
  [1504] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hexdigit, 1, 0, 0),
  [1506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [1508] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_value, 2, 0, 0),
  [1510] = {.entry = {.count = 1, .reusable = false}}, SHIFT(411),
  [1512] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_file_value, 2, 0, 0),
  [1514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_object, 2, 0, 0),
  [1516] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_object, 3, 0, 0),
  [1518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_array, 3, 0, 0),
  [1520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(482),
  [1522] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_regex_escaped_char, 2, 0, 0),
  [1524] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_value, 1, 0, 0),
  [1526] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_number, 1, 0, 0),
  [1528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_boolean, 1, 0, 0),
  [1530] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_array, 2, 0, 0),
  [1532] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_json_object_repeat1, 2, 0, 0),
  [1534] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_json_object_repeat1, 2, 0, 0), SHIFT_REPEAT(322),
  [1537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(459),
  [1539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_value, 3, 0, 0),
  [1541] = {.entry = {.count = 1, .reusable = false}}, SHIFT(416),
  [1543] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_file_value, 3, 0, 0),
  [1545] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multipart_form_data_param, 1, 0, 0),
  [1547] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multipart_form_data_param, 1, 0, 0),
  [1549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ca_certificate_option, 3, 0, 10),
  [1551] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ca_certificate_option, 3, 0, 10),
  [1553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_predicate_value, 1, 0, 0),
  [1555] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_predicate_value, 1, 0, 0),
  [1557] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_equal_predicate, 2, 0, 12),
  [1559] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_equal_predicate, 2, 0, 12),
  [1561] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_equal_predicate, 2, 0, 0),
  [1563] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_equal_predicate, 2, 0, 0),
  [1565] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_not_equal_predicate, 2, 0, 12),
  [1567] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_not_equal_predicate, 2, 0, 12),
  [1569] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_not_equal_predicate, 2, 0, 0),
  [1571] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_not_equal_predicate, 2, 0, 0),
  [1573] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_greater_predicate, 2, 0, 12),
  [1575] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_greater_predicate, 2, 0, 12),
  [1577] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_greater_predicate, 2, 0, 0),
  [1579] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_greater_predicate, 2, 0, 0),
  [1581] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_greater_or_equal_predicate, 2, 0, 12),
  [1583] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_greater_or_equal_predicate, 2, 0, 12),
  [1585] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_greater_or_equal_predicate, 2, 0, 0),
  [1587] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_greater_or_equal_predicate, 2, 0, 0),
  [1589] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_less_predicate, 2, 0, 12),
  [1591] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_less_predicate, 2, 0, 12),
  [1593] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_less_predicate, 2, 0, 0),
  [1595] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_less_predicate, 2, 0, 0),
  [1597] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_less_or_equal_predicate, 2, 0, 12),
  [1599] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_less_or_equal_predicate, 2, 0, 12),
  [1601] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_less_or_equal_predicate, 2, 0, 0),
  [1603] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_less_or_equal_predicate, 2, 0, 0),
  [1605] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_with_predicate, 2, 0, 12),
  [1607] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_with_predicate, 2, 0, 12),
  [1609] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_end_with_predicate, 2, 0, 12),
  [1611] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_end_with_predicate, 2, 0, 12),
  [1613] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contain_predicate, 2, 0, 12),
  [1615] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_contain_predicate, 2, 0, 12),
  [1617] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_match_predicate, 2, 0, 12),
  [1619] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_match_predicate, 2, 0, 12),
  [1621] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_predicate, 2, 0, 12),
  [1623] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_include_predicate, 2, 0, 12),
  [1625] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_string, 3, 0, 0),
  [1627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(518),
  [1629] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xml_tag, 2, 0, 0),
  [1631] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_value, 1, 0, 0),
  [1633] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_value, 1, 0, 0),
  [1635] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 3, 0, 0),
  [1637] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_definition, 3, 0, 0),
  [1639] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneline_hex, 3, 0, 0),
  [1641] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneline_hex, 3, 0, 0),
  [1643] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneline_base64, 3, 0, 0),
  [1645] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneline_base64, 3, 0, 0),
  [1647] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_value, 4, 0, 0),
  [1649] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_file_value, 4, 0, 0),
  [1651] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xml_prolog_tag, 3, 0, 0),
  [1653] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xml_self_closing_tag, 3, 0, 0),
  [1655] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_object, 3, 0, 0),
  [1657] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneline_file, 3, 0, 0),
  [1659] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneline_file, 3, 0, 0),
  [1661] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option, 1, 0, 0),
  [1663] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_option, 1, 0, 0),
  [1665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(424),
  [1667] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_string, 6, 0, 0),
  [1669] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline_string, 6, 0, 0),
  [1671] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_array, 3, 0, 0),
  [1673] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xml, 2, 0, 0),
  [1675] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xml, 2, 0, 0),
  [1677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [1679] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_param, 3, 0, 0),
  [1681] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_file_param, 3, 0, 0),
  [1683] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_duration_option, 4, 0, 10),
  [1685] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_duration_option, 4, 0, 10),
  [1687] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneline_string, 2, 0, 0),
  [1689] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneline_string, 2, 0, 0),
  [1691] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_option, 3, 0, 10),
  [1693] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer_option, 3, 0, 10),
  [1695] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_duration_unit, 1, 0, 0),
  [1697] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_duration_unit, 1, 0, 0),
  [1699] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneline_string, 3, 0, 0),
  [1701] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneline_string, 3, 0, 0),
  [1703] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_string, 2, 0, 0),
  [1705] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_string, 3, 0, 0),
  [1707] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline_string, 3, 0, 0),
  [1709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [1711] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneline_hex, 2, 0, 0),
  [1713] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneline_hex, 2, 0, 0),
  [1715] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cert_option, 3, 0, 10),
  [1717] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cert_option, 3, 0, 10),
  [1719] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_object, 4, 0, 0),
  [1721] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_option, 3, 0, 10),
  [1723] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_option, 3, 0, 10),
  [1725] = {.entry = {.count = 1, .reusable = false}}, SHIFT(513),
  [1727] = {.entry = {.count = 1, .reusable = false}}, SHIFT(549),
  [1729] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xml_tag, 3, 0, 0),
  [1731] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_option, 3, 0, 10),
  [1733] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean_option, 3, 0, 10),
  [1735] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_predicate_func, 1, 0, 0),
  [1737] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_predicate_func, 1, 0, 0),
  [1739] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_predicate, 1, 0, 0),
  [1741] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_predicate, 1, 0, 0),
  [1743] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_value, 3, 0, 0),
  [1745] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_key_value, 3, 0, 0),
  [1747] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_object, 2, 0, 0),
  [1749] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1, 0, 0),
  [1751] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1, 0, 0),
  [1753] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneline_file, 2, 0, 0),
  [1755] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneline_file, 2, 0, 0),
  [1757] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_array, 2, 0, 0),
  [1759] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_predicate, 2, 0, 0),
  [1761] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_predicate, 2, 0, 0),
  [1763] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_array, 4, 0, 0),
  [1765] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_predicate, 1, 0, 12),
  [1767] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_predicate, 1, 0, 12),
  [1769] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_query_string_params_section_repeat1, 2, 0, 0),
  [1771] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_query_string_params_section_repeat1, 2, 0, 0),
  [1773] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version, 1, 0, 0),
  [1775] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xml_tag, 1, 0, 0),
  [1777] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xml, 1, 0, 0),
  [1779] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xml, 1, 0, 0),
  [1781] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bytes, 1, 0, 0),
  [1783] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bytes, 1, 0, 0),
  [1785] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_boolean, 1, 0, 0),
  [1787] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_number, 1, 0, 0),
  [1789] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_key_value, 3, 0, 0),
  [1791] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_string, 4, 0, 0),
  [1793] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline_string, 4, 0, 0),
  [1795] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xml_close_tag, 3, 0, 0),
  [1797] = {.entry = {.count = 1, .reusable = false}}, SHIFT(544),
  [1799] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_value, 1, 0, 0),
  [1801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [1803] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_string, 5, 0, 0),
  [1805] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline_string, 5, 0, 0),
  [1807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(486),
  [1809] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_status, 1, 0, 0),
  [1811] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_status, 1, 0, 0),
  [1813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [1815] = {.entry = {.count = 1, .reusable = false}}, SHIFT(550),
  [1817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [1819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [1821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [1823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [1825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [1827] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_hexdigit, 1, 0, 0),
  [1829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [1831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [1833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(551),
  [1835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [1837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [1839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [1841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [1843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [1845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [1847] = {.entry = {.count = 1, .reusable = false}}, SHIFT(374),
  [1849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [1851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [1853] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_key_string, 1, 0, 5),
  [1855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [1857] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [1859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [1861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [1863] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [1865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [1867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [1869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [1871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [1873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [1875] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [1877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [1879] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [1881] = {.entry = {.count = 1, .reusable = false}}, SHIFT(514),
  [1883] = {.entry = {.count = 1, .reusable = true}}, SHIFT(495),
  [1885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [1887] = {.entry = {.count = 1, .reusable = false}}, SHIFT(523),
  [1889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [1891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(417),
  [1893] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [1895] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [1897] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [1899] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_string_type, 1, 0, 0),
  [1901] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [1903] = {.entry = {.count = 1, .reusable = false}}, SHIFT(546),
  [1905] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1907] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [1909] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [1911] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [1913] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_option_key, 1, 0, 0),
  [1915] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_option_key, 1, 0, 0),
  [1917] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_duration_option_key, 1, 0, 0),
  [1919] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_option_key, 1, 0, 0),
  [1921] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [1923] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [1925] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [1927] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
};

enum ts_external_scanner_symbol_identifiers {
  ts_external_token__eof = 0,
  ts_external_token__json_array_start = 1,
  ts_external_token__bracketed_key_start = 2,
  ts_external_token__error_sentinel = 3,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__eof] = sym__eof,
  [ts_external_token__json_array_start] = sym__json_array_start,
  [ts_external_token__bracketed_key_start] = sym__bracketed_key_start,
  [ts_external_token__error_sentinel] = sym__error_sentinel,
};

static const bool ts_external_scanner_states[7][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__eof] = true,
    [ts_external_token__json_array_start] = true,
    [ts_external_token__bracketed_key_start] = true,
    [ts_external_token__error_sentinel] = true,
  },
  [2] = {
    [ts_external_token__json_array_start] = true,
  },
  [3] = {
    [ts_external_token__json_array_start] = true,
    [ts_external_token__bracketed_key_start] = true,
  },
  [4] = {
    [ts_external_token__eof] = true,
  },
  [5] = {
    [ts_external_token__bracketed_key_start] = true,
  },
  [6] = {
    [ts_external_token__eof] = true,
    [ts_external_token__bracketed_key_start] = true,
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
