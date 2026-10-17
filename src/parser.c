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
#define STATE_COUNT 588
#define LARGE_STATE_COUNT 46
#define SYMBOL_COUNT 421
#define ALIAS_COUNT 1
#define TOKEN_COUNT 248
#define EXTERNAL_TOKEN_COUNT 4
#define FIELD_COUNT 8
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 16

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
  anon_sym_redact = 43,
  anon_sym_cacert = 44,
  anon_sym_cert = 45,
  sym_filename_password_text = 46,
  anon_sym_BSLASH = 47,
  anon_sym_b = 48,
  anon_sym_f = 49,
  anon_sym_n = 50,
  anon_sym_r = 51,
  anon_sym_t = 52,
  anon_sym_u = 53,
  anon_sym_POUND = 54,
  anon_sym_LBRACE = 55,
  anon_sym_RBRACE = 56,
  anon_sym_digest = 57,
  anon_sym_http1_DOT1 = 58,
  anon_sym_negotiate = 59,
  anon_sym_ntlm = 60,
  anon_sym_compressed = 61,
  anon_sym_location = 62,
  anon_sym_location_DASHtrusted = 63,
  anon_sym_http1_DOT0 = 64,
  anon_sym_http2 = 65,
  anon_sym_http3 = 66,
  anon_sym_insecure = 67,
  anon_sym_ipv4 = 68,
  anon_sym_ipv6 = 69,
  anon_sym_netrc = 70,
  anon_sym_netrc_DASHoptional = 71,
  anon_sym_path_DASHas_DASHis = 72,
  anon_sym_skip = 73,
  anon_sym_verbose = 74,
  anon_sym_very_DASHverbose = 75,
  anon_sym_retry_DASHmax_DASHcount = 76,
  anon_sym_limit_DASHrate = 77,
  aux_sym_count_option_token1 = 78,
  anon_sym_max_DASHredirs = 79,
  anon_sym_repeat = 80,
  anon_sym_retry = 81,
  anon_sym_verbosity = 82,
  anon_sym_brief = 83,
  anon_sym_debug = 84,
  anon_sym_connect_DASHtimeout = 85,
  anon_sym_delay = 86,
  anon_sym_retry_DASHinterval = 87,
  anon_sym_max_DASHtime = 88,
  anon_sym_ms = 89,
  anon_sym_s = 90,
  anon_sym_m = 91,
  anon_sym_h = 92,
  anon_sym_resolve = 93,
  anon_sym_aws_DASHsigv4 = 94,
  anon_sym_key = 95,
  anon_sym_connect_DASHto = 96,
  anon_sym_header = 97,
  anon_sym_netrc_DASHfile = 98,
  anon_sym_output = 99,
  anon_sym_pinnedpubkey = 100,
  anon_sym_proxy = 101,
  anon_sym_unix_DASHsocket = 102,
  anon_sym_user = 103,
  anon_sym_variable = 104,
  anon_sym_EQ = 105,
  anon_sym_status = 106,
  anon_sym_version = 107,
  anon_sym_rawbytes = 108,
  anon_sym_ip = 109,
  anon_sym_redirects = 110,
  anon_sym_url = 111,
  anon_sym_body = 112,
  anon_sym_duration = 113,
  anon_sym_bytes = 114,
  anon_sym_sha256 = 115,
  anon_sym_md5 = 116,
  anon_sym_cookie = 117,
  anon_sym_xpath = 118,
  anon_sym_jsonpath = 119,
  anon_sym_regex = 120,
  anon_sym_certificate = 121,
  anon_sym_DQUOTE = 122,
  anon_sym_Subject = 123,
  anon_sym_Issuer = 124,
  anon_sym_Start_DASHDate = 125,
  anon_sym_Expire_DASHDate = 126,
  anon_sym_Serial_DASHNumber = 127,
  anon_sym_not = 128,
  anon_sym_isDate = 129,
  anon_sym_isList = 130,
  anon_sym_isObject = 131,
  anon_sym_exists = 132,
  anon_sym_isInteger = 133,
  anon_sym_isFloat = 134,
  anon_sym_isBoolean = 135,
  anon_sym_isString = 136,
  anon_sym_isCollection = 137,
  anon_sym_isNumber = 138,
  anon_sym_isIsoDate = 139,
  anon_sym_isEmpty = 140,
  anon_sym_isIpv4 = 141,
  anon_sym_isIpv6 = 142,
  anon_sym_isUuid = 143,
  anon_sym_equals = 144,
  anon_sym_EQ_EQ = 145,
  anon_sym_notEquals = 146,
  anon_sym_BANG_EQ = 147,
  anon_sym_greaterThan = 148,
  anon_sym_GT = 149,
  anon_sym_greaterThanOrEquals = 150,
  anon_sym_GT_EQ = 151,
  anon_sym_lessThan = 152,
  anon_sym_LT = 153,
  anon_sym_lessThanOrEquals = 154,
  anon_sym_LT_EQ = 155,
  anon_sym_startsWith = 156,
  anon_sym_endsWith = 157,
  anon_sym_contains = 158,
  anon_sym_matches = 159,
  anon_sym_includes = 160,
  anon_sym_LT_QMARK = 161,
  aux_sym_xml_prolog_tag_token1 = 162,
  anon_sym_QMARK_GT = 163,
  aux_sym_xml_self_closing_tag_token1 = 164,
  aux_sym_xml_open_tag_token1 = 165,
  anon_sym_LT_SLASH = 166,
  aux_sym_xml_close_tag_token1 = 167,
  anon_sym_base64_COMMA = 168,
  aux_sym_oneline_base64_token1 = 169,
  anon_sym_hex_COMMA = 170,
  sym_quoted_string_text = 171,
  aux_sym_invalid_quoted_string_escaped_char_token1 = 172,
  anon_sym_LBRACE_LBRACE = 173,
  anon_sym_RBRACE_RBRACE = 174,
  sym_key_string_text = 175,
  sym_key_string_escaped_char = 176,
  aux_sym_value_string_text_token1 = 177,
  anon_sym_BQUOTE = 178,
  aux_sym_oneline_string_text_token1 = 179,
  anon_sym_LBRACE2 = 180,
  sym_oneline_string_escaped_char = 181,
  anon_sym_BQUOTE_BQUOTE_BQUOTE = 182,
  anon_sym_base64 = 183,
  anon_sym_hex = 184,
  anon_sym_json = 185,
  anon_sym_xml = 186,
  anon_sym_graphql = 187,
  aux_sym_multiline_string_type_token1 = 188,
  sym__multiline_string_text = 189,
  sym_filename_text = 190,
  aux_sym_filename_escaped_char_token1 = 191,
  anon_sym_COMMA = 192,
  anon_sym_RBRACK = 193,
  aux_sym_json_string_text_token1 = 194,
  sym__json_number = 195,
  anon_sym_true = 196,
  anon_sym_false = 197,
  anon_sym_LBRACE_LBRACE2 = 198,
  aux_sym_variable_name_token1 = 199,
  aux_sym_variable_name_token2 = 200,
  anon_sym_base64Decode = 201,
  anon_sym_base64Encode = 202,
  anon_sym_base64UrlSafeDecode = 203,
  anon_sym_base64UrlSafeEncode = 204,
  anon_sym_first = 205,
  anon_sym_last = 206,
  anon_sym_toFloat = 207,
  anon_sym_toHex = 208,
  anon_sym_toString = 209,
  anon_sym_utf8Decode = 210,
  anon_sym_utf8Encode = 211,
  anon_sym_count = 212,
  anon_sym_urlEncode = 213,
  anon_sym_urlDecode = 214,
  anon_sym_toInt = 215,
  anon_sym_htmlEscape = 216,
  anon_sym_htmlUnescape = 217,
  anon_sym_daysAfterNow = 218,
  anon_sym_daysBeforeNow = 219,
  anon_sym_charsetDecode = 220,
  anon_sym_dateFormat = 221,
  anon_sym_urlQueryParam = 222,
  anon_sym_decode = 223,
  anon_sym_format = 224,
  anon_sym_toDate = 225,
  anon_sym_nth = 226,
  anon_sym_replace = 227,
  anon_sym_replaceRegex = 228,
  anon_sym_split = 229,
  sym__alphanum = 230,
  sym_integer = 231,
  sym_float = 232,
  aux_sym_digit_token1 = 233,
  aux_sym_hexdigit_token1 = 234,
  anon_sym_DOT = 235,
  anon_sym_e = 236,
  anon_sym_E = 237,
  anon_sym_PLUS = 238,
  anon_sym_DASH = 239,
  sym_comment = 240,
  anon_sym_SLASH = 241,
  sym_regex_text = 242,
  aux_sym_regex_escaped_char_token1 = 243,
  sym__eof = 244,
  sym__json_array_start = 245,
  sym__bracketed_key_start = 246,
  sym__error_sentinel = 247,
  sym_hurl_file = 248,
  sym_entry = 249,
  sym__comment_or_new_line = 250,
  sym__line_ending = 251,
  sym_request = 252,
  sym_response = 253,
  sym_method = 254,
  sym_version = 255,
  sym_status = 256,
  sym_header = 257,
  sym_body = 258,
  sym_request_section = 259,
  sym_response_section = 260,
  sym_basic_auth_section = 261,
  sym_query_string_params_section = 262,
  sym_form_params_section = 263,
  sym_multipart_form_data_section = 264,
  sym_cookies_section = 265,
  sym_captures_section = 266,
  sym_asserts_section = 267,
  sym_options_section = 268,
  sym_key_value = 269,
  sym_multipart_form_data_param = 270,
  sym_file_param = 271,
  sym_file_value = 272,
  sym_capture = 273,
  sym_assert = 274,
  sym_option = 275,
  sym_ca_certificate_option = 276,
  sym_cert_option = 277,
  sym_filename_password = 278,
  sym_filename_password_escaped_char = 279,
  sym_boolean_option = 280,
  sym_boolean_option_key = 281,
  sym_integer_option = 282,
  sym_integer_option_key = 283,
  sym_count_option = 284,
  sym_count_option_key = 285,
  sym_verbosity_option = 286,
  sym_duration_option = 287,
  sym_duration_option_key = 288,
  sym_duration_unit = 289,
  sym_string_option = 290,
  sym_string_option_key = 291,
  sym_variable_option = 292,
  sym_variable_definition = 293,
  sym_variable_value = 294,
  sym_query = 295,
  sym_simple_query = 296,
  sym_header_query = 297,
  sym_cookie_query = 298,
  sym_xpath_query = 299,
  sym_jsonpath_query = 300,
  sym_regex_query = 301,
  sym_variable_query = 302,
  sym_certificate_query = 303,
  sym_certificate_attribute = 304,
  sym_predicate = 305,
  sym_predicate_func = 306,
  sym_simple_predicate = 307,
  sym_equal_predicate = 308,
  sym_not_equal_predicate = 309,
  sym_greater_predicate = 310,
  sym_greater_or_equal_predicate = 311,
  sym_less_predicate = 312,
  sym_less_or_equal_predicate = 313,
  sym_start_with_predicate = 314,
  sym_end_with_predicate = 315,
  sym_contain_predicate = 316,
  sym_match_predicate = 317,
  sym_include_predicate = 318,
  sym__predicate_string = 319,
  sym_predicate_value = 320,
  sym_bytes = 321,
  sym_xml = 322,
  sym_xml_prolog_tag = 323,
  sym_xml_tag = 324,
  sym_xml_self_closing_tag = 325,
  sym_xml_open_tag = 326,
  sym_xml_close_tag = 327,
  sym_oneline_base64 = 328,
  sym_oneline_file = 329,
  sym_oneline_hex = 330,
  sym_quoted_string = 331,
  sym_quoted_string_content = 332,
  sym_invalid_quoted_string_escaped_char = 333,
  sym_quoted_string_escaped_char = 334,
  sym_key_string = 335,
  sym__bracketed_key_content = 336,
  sym__key_template = 337,
  sym_key_string_content = 338,
  sym_xml_value_string = 339,
  sym_value_string = 340,
  sym_value_string_content = 341,
  sym_value_string_text = 342,
  sym_value_string_escaped_char = 343,
  sym_oneline_string = 344,
  sym_oneline_string_content = 345,
  sym_oneline_string_text = 346,
  sym_multiline_string = 347,
  sym_multiline_string_type = 348,
  sym_multiline_string_content = 349,
  sym_multiline_string_escaped_char = 350,
  sym_filename = 351,
  sym_filename_content = 352,
  sym_filename_escaped_char = 353,
  sym_unicode_char = 354,
  sym_json_value = 355,
  sym_json_object = 356,
  sym_json_key_value = 357,
  sym_json_key_string = 358,
  sym_json_array = 359,
  sym_json_string = 360,
  sym_json_string_content = 361,
  sym_json_string_text = 362,
  sym_json_string_escaped_char = 363,
  sym_json_number = 364,
  sym_json_boolean = 365,
  sym_template = 366,
  sym_expr = 367,
  sym_variable_name = 368,
  sym_filter = 369,
  sym_simple_filter_key = 370,
  sym_argument_filter = 371,
  sym_regex_filter = 372,
  sym_nth_filter = 373,
  sym_replace_filter = 374,
  sym_replace_regex_filter = 375,
  sym_split_filter = 376,
  sym_xpath_filter = 377,
  sym_boolean = 378,
  sym__unsigned_integer = 379,
  sym_hexdigit = 380,
  sym_json_hexdigit = 381,
  sym_regex = 382,
  sym_regex_content = 383,
  sym_regex_escaped_char = 384,
  aux_sym_hurl_file_repeat1 = 385,
  aux_sym_hurl_file_repeat2 = 386,
  aux_sym__comment_or_new_line_repeat1 = 387,
  aux_sym_request_repeat1 = 388,
  aux_sym_request_repeat2 = 389,
  aux_sym_response_repeat1 = 390,
  aux_sym_basic_auth_section_repeat1 = 391,
  aux_sym_query_string_params_section_repeat1 = 392,
  aux_sym_multipart_form_data_section_repeat1 = 393,
  aux_sym_captures_section_repeat1 = 394,
  aux_sym_asserts_section_repeat1 = 395,
  aux_sym_options_section_repeat1 = 396,
  aux_sym_capture_repeat1 = 397,
  aux_sym_filename_password_repeat1 = 398,
  aux_sym_xml_repeat1 = 399,
  aux_sym_xml_tag_repeat1 = 400,
  aux_sym_oneline_hex_repeat1 = 401,
  aux_sym_quoted_string_repeat1 = 402,
  aux_sym_quoted_string_content_repeat1 = 403,
  aux_sym_key_string_repeat1 = 404,
  aux_sym_key_string_content_repeat1 = 405,
  aux_sym_xml_value_string_repeat1 = 406,
  aux_sym_value_string_repeat1 = 407,
  aux_sym_value_string_content_repeat1 = 408,
  aux_sym_value_string_text_repeat1 = 409,
  aux_sym_oneline_string_repeat1 = 410,
  aux_sym_oneline_string_content_repeat1 = 411,
  aux_sym_multiline_string_repeat1 = 412,
  aux_sym_multiline_string_content_repeat1 = 413,
  aux_sym_filename_repeat1 = 414,
  aux_sym_filename_content_repeat1 = 415,
  aux_sym_json_object_repeat1 = 416,
  aux_sym_json_array_repeat1 = 417,
  aux_sym_json_string_repeat1 = 418,
  aux_sym_json_string_text_repeat1 = 419,
  aux_sym_regex_content_repeat1 = 420,
  anon_alias_sym_json_key_string = 421,
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
  [anon_sym_redact] = "redact",
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
  [anon_sym_digest] = "digest",
  [anon_sym_http1_DOT1] = "http1.1",
  [anon_sym_negotiate] = "negotiate",
  [anon_sym_ntlm] = "ntlm",
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
  [anon_sym_retry_DASHmax_DASHcount] = "retry-max-count",
  [anon_sym_limit_DASHrate] = "limit-rate",
  [aux_sym_count_option_token1] = "integer",
  [anon_sym_max_DASHredirs] = "max-redirs",
  [anon_sym_repeat] = "repeat",
  [anon_sym_retry] = "retry",
  [anon_sym_verbosity] = "verbosity",
  [anon_sym_brief] = "brief",
  [anon_sym_debug] = "debug",
  [anon_sym_connect_DASHtimeout] = "connect-timeout",
  [anon_sym_delay] = "delay",
  [anon_sym_retry_DASHinterval] = "retry-interval",
  [anon_sym_max_DASHtime] = "max-time",
  [anon_sym_ms] = "ms",
  [anon_sym_s] = "s",
  [anon_sym_m] = "m",
  [anon_sym_h] = "h",
  [anon_sym_resolve] = "resolve",
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
  [anon_sym_version] = "version",
  [anon_sym_rawbytes] = "rawbytes",
  [anon_sym_ip] = "ip",
  [anon_sym_redirects] = "redirects",
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
  [anon_sym_certificate] = "certificate",
  [anon_sym_DQUOTE] = "\"",
  [anon_sym_Subject] = "Subject",
  [anon_sym_Issuer] = "Issuer",
  [anon_sym_Start_DASHDate] = "Start-Date",
  [anon_sym_Expire_DASHDate] = "Expire-Date",
  [anon_sym_Serial_DASHNumber] = "Serial-Number",
  [anon_sym_not] = "not",
  [anon_sym_isDate] = "isDate",
  [anon_sym_isList] = "isList",
  [anon_sym_isObject] = "isObject",
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
  [anon_sym_base64Decode] = "base64Decode",
  [anon_sym_base64Encode] = "base64Encode",
  [anon_sym_base64UrlSafeDecode] = "base64UrlSafeDecode",
  [anon_sym_base64UrlSafeEncode] = "base64UrlSafeEncode",
  [anon_sym_first] = "first",
  [anon_sym_last] = "last",
  [anon_sym_toFloat] = "toFloat",
  [anon_sym_toHex] = "toHex",
  [anon_sym_toString] = "toString",
  [anon_sym_utf8Decode] = "utf8Decode",
  [anon_sym_utf8Encode] = "utf8Encode",
  [anon_sym_count] = "count",
  [anon_sym_urlEncode] = "urlEncode",
  [anon_sym_urlDecode] = "urlDecode",
  [anon_sym_toInt] = "toInt",
  [anon_sym_htmlEscape] = "htmlEscape",
  [anon_sym_htmlUnescape] = "htmlUnescape",
  [anon_sym_daysAfterNow] = "daysAfterNow",
  [anon_sym_daysBeforeNow] = "daysBeforeNow",
  [anon_sym_charsetDecode] = "charsetDecode",
  [anon_sym_dateFormat] = "dateFormat",
  [anon_sym_urlQueryParam] = "urlQueryParam",
  [anon_sym_decode] = "decode",
  [anon_sym_format] = "format",
  [anon_sym_toDate] = "toDate",
  [anon_sym_nth] = "nth",
  [anon_sym_replace] = "replace",
  [anon_sym_replaceRegex] = "replaceRegex",
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
  [sym_count_option] = "count_option",
  [sym_count_option_key] = "count_option_key",
  [sym_verbosity_option] = "verbosity_option",
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
  [sym_certificate_query] = "certificate_query",
  [sym_certificate_attribute] = "certificate_attribute",
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
  [sym__predicate_string] = "_predicate_string",
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
  [sym_replace_regex_filter] = "replace_regex_filter",
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
  [aux_sym_basic_auth_section_repeat1] = "basic_auth_section_repeat1",
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
  [anon_sym_redact] = anon_sym_redact,
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
  [anon_sym_digest] = anon_sym_digest,
  [anon_sym_http1_DOT1] = anon_sym_http1_DOT1,
  [anon_sym_negotiate] = anon_sym_negotiate,
  [anon_sym_ntlm] = anon_sym_ntlm,
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
  [anon_sym_retry_DASHmax_DASHcount] = anon_sym_retry_DASHmax_DASHcount,
  [anon_sym_limit_DASHrate] = anon_sym_limit_DASHrate,
  [aux_sym_count_option_token1] = sym_integer,
  [anon_sym_max_DASHredirs] = anon_sym_max_DASHredirs,
  [anon_sym_repeat] = anon_sym_repeat,
  [anon_sym_retry] = anon_sym_retry,
  [anon_sym_verbosity] = anon_sym_verbosity,
  [anon_sym_brief] = anon_sym_brief,
  [anon_sym_debug] = anon_sym_debug,
  [anon_sym_connect_DASHtimeout] = anon_sym_connect_DASHtimeout,
  [anon_sym_delay] = anon_sym_delay,
  [anon_sym_retry_DASHinterval] = anon_sym_retry_DASHinterval,
  [anon_sym_max_DASHtime] = anon_sym_max_DASHtime,
  [anon_sym_ms] = anon_sym_ms,
  [anon_sym_s] = anon_sym_s,
  [anon_sym_m] = anon_sym_m,
  [anon_sym_h] = anon_sym_h,
  [anon_sym_resolve] = anon_sym_resolve,
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
  [anon_sym_version] = anon_sym_version,
  [anon_sym_rawbytes] = anon_sym_rawbytes,
  [anon_sym_ip] = anon_sym_ip,
  [anon_sym_redirects] = anon_sym_redirects,
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
  [anon_sym_certificate] = anon_sym_certificate,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [anon_sym_Subject] = anon_sym_Subject,
  [anon_sym_Issuer] = anon_sym_Issuer,
  [anon_sym_Start_DASHDate] = anon_sym_Start_DASHDate,
  [anon_sym_Expire_DASHDate] = anon_sym_Expire_DASHDate,
  [anon_sym_Serial_DASHNumber] = anon_sym_Serial_DASHNumber,
  [anon_sym_not] = anon_sym_not,
  [anon_sym_isDate] = anon_sym_isDate,
  [anon_sym_isList] = anon_sym_isList,
  [anon_sym_isObject] = anon_sym_isObject,
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
  [anon_sym_base64Decode] = anon_sym_base64Decode,
  [anon_sym_base64Encode] = anon_sym_base64Encode,
  [anon_sym_base64UrlSafeDecode] = anon_sym_base64UrlSafeDecode,
  [anon_sym_base64UrlSafeEncode] = anon_sym_base64UrlSafeEncode,
  [anon_sym_first] = anon_sym_first,
  [anon_sym_last] = anon_sym_last,
  [anon_sym_toFloat] = anon_sym_toFloat,
  [anon_sym_toHex] = anon_sym_toHex,
  [anon_sym_toString] = anon_sym_toString,
  [anon_sym_utf8Decode] = anon_sym_utf8Decode,
  [anon_sym_utf8Encode] = anon_sym_utf8Encode,
  [anon_sym_count] = anon_sym_count,
  [anon_sym_urlEncode] = anon_sym_urlEncode,
  [anon_sym_urlDecode] = anon_sym_urlDecode,
  [anon_sym_toInt] = anon_sym_toInt,
  [anon_sym_htmlEscape] = anon_sym_htmlEscape,
  [anon_sym_htmlUnescape] = anon_sym_htmlUnescape,
  [anon_sym_daysAfterNow] = anon_sym_daysAfterNow,
  [anon_sym_daysBeforeNow] = anon_sym_daysBeforeNow,
  [anon_sym_charsetDecode] = anon_sym_charsetDecode,
  [anon_sym_dateFormat] = anon_sym_dateFormat,
  [anon_sym_urlQueryParam] = anon_sym_urlQueryParam,
  [anon_sym_decode] = anon_sym_decode,
  [anon_sym_format] = anon_sym_format,
  [anon_sym_toDate] = anon_sym_toDate,
  [anon_sym_nth] = anon_sym_nth,
  [anon_sym_replace] = anon_sym_replace,
  [anon_sym_replaceRegex] = anon_sym_replaceRegex,
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
  [sym_count_option] = sym_count_option,
  [sym_count_option_key] = sym_count_option_key,
  [sym_verbosity_option] = sym_verbosity_option,
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
  [sym_certificate_query] = sym_certificate_query,
  [sym_certificate_attribute] = sym_certificate_attribute,
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
  [sym__predicate_string] = sym__predicate_string,
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
  [sym_replace_regex_filter] = sym_replace_regex_filter,
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
  [aux_sym_basic_auth_section_repeat1] = aux_sym_basic_auth_section_repeat1,
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
  [anon_sym_redact] = {
    .visible = true,
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
  [anon_sym_digest] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_http1_DOT1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_negotiate] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ntlm] = {
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
  [anon_sym_retry_DASHmax_DASHcount] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_limit_DASHrate] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_count_option_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_max_DASHredirs] = {
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
  [anon_sym_verbosity] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_brief] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_debug] = {
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
  [anon_sym_max_DASHtime] = {
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
  [anon_sym_h] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_resolve] = {
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
  [anon_sym_version] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rawbytes] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ip] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_redirects] = {
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
  [anon_sym_certificate] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Subject] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Issuer] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Start_DASHDate] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Expire_DASHDate] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Serial_DASHNumber] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_not] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_isDate] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_isList] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_isObject] = {
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
  [anon_sym_base64Decode] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_base64Encode] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_base64UrlSafeDecode] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_base64UrlSafeEncode] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_first] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_last] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_toFloat] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_toHex] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_toString] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_utf8Decode] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_utf8Encode] = {
    .visible = true,
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
  [anon_sym_charsetDecode] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dateFormat] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_urlQueryParam] = {
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
  [anon_sym_replaceRegex] = {
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
  [sym_count_option] = {
    .visible = true,
    .named = true,
  },
  [sym_count_option_key] = {
    .visible = true,
    .named = true,
  },
  [sym_verbosity_option] = {
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
  [sym_certificate_query] = {
    .visible = true,
    .named = true,
  },
  [sym_certificate_attribute] = {
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
  [sym__predicate_string] = {
    .visible = false,
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
  [sym_replace_regex_filter] = {
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
  [aux_sym_basic_auth_section_repeat1] = {
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
  field_level = 2,
  field_modifier = 3,
  field_option_key = 4,
  field_predicate_name = 5,
  field_query_name = 6,
  field_section_header = 7,
  field_template = 8,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_filter_key] = "filter_key",
  [field_level] = "level",
  [field_modifier] = "modifier",
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
  [11] = {.index = 11, .length = 2},
  [13] = {.index = 13, .length = 1},
  [14] = {.index = 14, .length = 1},
  [15] = {.index = 15, .length = 1},
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
    {field_level, 2},
    {field_option_key, 0},
  [13] =
    {field_predicate_name, 0},
  [14] =
    {field_modifier, 3},
  [15] =
    {field_modifier, 4},
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
  [12] = {
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
  [65] = 6,
  [66] = 5,
  [67] = 67,
  [68] = 6,
  [69] = 69,
  [70] = 5,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 49,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 15,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 5,
  [86] = 6,
  [87] = 87,
  [88] = 71,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 22,
  [94] = 29,
  [95] = 41,
  [96] = 35,
  [97] = 36,
  [98] = 38,
  [99] = 21,
  [100] = 24,
  [101] = 40,
  [102] = 34,
  [103] = 39,
  [104] = 37,
  [105] = 42,
  [106] = 26,
  [107] = 25,
  [108] = 108,
  [109] = 23,
  [110] = 20,
  [111] = 27,
  [112] = 28,
  [113] = 33,
  [114] = 32,
  [115] = 31,
  [116] = 30,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 5,
  [123] = 123,
  [124] = 6,
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
  [137] = 134,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 6,
  [146] = 5,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 5,
  [154] = 6,
  [155] = 128,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 157,
  [163] = 163,
  [164] = 159,
  [165] = 165,
  [166] = 158,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
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
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 186,
  [201] = 201,
  [202] = 202,
  [203] = 189,
  [204] = 204,
  [205] = 198,
  [206] = 194,
  [207] = 207,
  [208] = 195,
  [209] = 209,
  [210] = 210,
  [211] = 211,
  [212] = 212,
  [213] = 213,
  [214] = 185,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 221,
  [222] = 222,
  [223] = 223,
  [224] = 224,
  [225] = 225,
  [226] = 226,
  [227] = 227,
  [228] = 228,
  [229] = 229,
  [230] = 230,
  [231] = 231,
  [232] = 6,
  [233] = 233,
  [234] = 5,
  [235] = 235,
  [236] = 236,
  [237] = 233,
  [238] = 238,
  [239] = 239,
  [240] = 240,
  [241] = 241,
  [242] = 227,
  [243] = 243,
  [244] = 241,
  [245] = 245,
  [246] = 246,
  [247] = 247,
  [248] = 248,
  [249] = 240,
  [250] = 250,
  [251] = 251,
  [252] = 6,
  [253] = 253,
  [254] = 254,
  [255] = 5,
  [256] = 256,
  [257] = 257,
  [258] = 258,
  [259] = 259,
  [260] = 243,
  [261] = 225,
  [262] = 262,
  [263] = 254,
  [264] = 264,
  [265] = 20,
  [266] = 266,
  [267] = 267,
  [268] = 268,
  [269] = 269,
  [270] = 270,
  [271] = 271,
  [272] = 272,
  [273] = 273,
  [274] = 274,
  [275] = 275,
  [276] = 276,
  [277] = 277,
  [278] = 278,
  [279] = 279,
  [280] = 280,
  [281] = 281,
  [282] = 282,
  [283] = 20,
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
  [294] = 277,
  [295] = 295,
  [296] = 274,
  [297] = 297,
  [298] = 298,
  [299] = 299,
  [300] = 300,
  [301] = 301,
  [302] = 302,
  [303] = 20,
  [304] = 304,
  [305] = 305,
  [306] = 306,
  [307] = 307,
  [308] = 20,
  [309] = 309,
  [310] = 310,
  [311] = 311,
  [312] = 268,
  [313] = 313,
  [314] = 314,
  [315] = 315,
  [316] = 20,
  [317] = 317,
  [318] = 318,
  [319] = 319,
  [320] = 320,
  [321] = 321,
  [322] = 322,
  [323] = 323,
  [324] = 324,
  [325] = 325,
  [326] = 326,
  [327] = 327,
  [328] = 20,
  [329] = 20,
  [330] = 330,
  [331] = 331,
  [332] = 332,
  [333] = 333,
  [334] = 334,
  [335] = 335,
  [336] = 336,
  [337] = 337,
  [338] = 338,
  [339] = 339,
  [340] = 268,
  [341] = 341,
  [342] = 342,
  [343] = 338,
  [344] = 268,
  [345] = 20,
  [346] = 346,
  [347] = 326,
  [348] = 323,
  [349] = 305,
  [350] = 337,
  [351] = 351,
  [352] = 352,
  [353] = 353,
  [354] = 354,
  [355] = 355,
  [356] = 356,
  [357] = 356,
  [358] = 356,
  [359] = 356,
  [360] = 360,
  [361] = 361,
  [362] = 362,
  [363] = 363,
  [364] = 364,
  [365] = 356,
  [366] = 366,
  [367] = 367,
  [368] = 368,
  [369] = 356,
  [370] = 356,
  [371] = 371,
  [372] = 372,
  [373] = 373,
  [374] = 374,
  [375] = 375,
  [376] = 371,
  [377] = 364,
  [378] = 378,
  [379] = 379,
  [380] = 380,
  [381] = 381,
  [382] = 381,
  [383] = 383,
  [384] = 356,
  [385] = 385,
  [386] = 380,
  [387] = 387,
  [388] = 388,
  [389] = 355,
  [390] = 367,
  [391] = 391,
  [392] = 391,
  [393] = 393,
  [394] = 356,
  [395] = 356,
  [396] = 356,
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
  [408] = 408,
  [409] = 409,
  [410] = 410,
  [411] = 411,
  [412] = 412,
  [413] = 413,
  [414] = 414,
  [415] = 415,
  [416] = 363,
  [417] = 417,
  [418] = 418,
  [419] = 419,
  [420] = 420,
  [421] = 421,
  [422] = 301,
  [423] = 423,
  [424] = 424,
  [425] = 425,
  [426] = 426,
  [427] = 427,
  [428] = 428,
  [429] = 353,
  [430] = 373,
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
  [442] = 368,
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
  [456] = 374,
  [457] = 457,
  [458] = 458,
  [459] = 459,
  [460] = 460,
  [461] = 461,
  [462] = 462,
  [463] = 463,
  [464] = 461,
  [465] = 354,
  [466] = 460,
  [467] = 449,
  [468] = 463,
  [469] = 273,
  [470] = 470,
  [471] = 471,
  [472] = 472,
  [473] = 462,
  [474] = 474,
  [475] = 437,
  [476] = 331,
  [477] = 477,
  [478] = 478,
  [479] = 452,
  [480] = 360,
  [481] = 481,
  [482] = 482,
  [483] = 483,
  [484] = 459,
  [485] = 485,
  [486] = 486,
  [487] = 487,
  [488] = 488,
  [489] = 297,
  [490] = 490,
  [491] = 491,
  [492] = 492,
  [493] = 493,
  [494] = 299,
  [495] = 300,
  [496] = 351,
  [497] = 497,
  [498] = 361,
  [499] = 499,
  [500] = 500,
  [501] = 501,
  [502] = 459,
  [503] = 459,
  [504] = 504,
  [505] = 485,
  [506] = 485,
  [507] = 485,
  [508] = 508,
  [509] = 20,
  [510] = 508,
  [511] = 508,
  [512] = 437,
  [513] = 513,
  [514] = 439,
  [515] = 440,
  [516] = 437,
  [517] = 366,
  [518] = 441,
  [519] = 427,
  [520] = 411,
  [521] = 521,
  [522] = 313,
  [523] = 508,
  [524] = 524,
  [525] = 525,
  [526] = 525,
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
  [537] = 537,
  [538] = 538,
  [539] = 539,
  [540] = 540,
  [541] = 541,
  [542] = 542,
  [543] = 543,
  [544] = 544,
  [545] = 341,
  [546] = 540,
  [547] = 535,
  [548] = 525,
  [549] = 540,
  [550] = 525,
  [551] = 540,
  [552] = 525,
  [553] = 525,
  [554] = 525,
  [555] = 525,
  [556] = 525,
  [557] = 525,
  [558] = 525,
  [559] = 559,
  [560] = 560,
  [561] = 532,
  [562] = 528,
  [563] = 529,
  [564] = 559,
  [565] = 539,
  [566] = 566,
  [567] = 567,
  [568] = 537,
  [569] = 569,
  [570] = 570,
  [571] = 571,
  [572] = 572,
  [573] = 573,
  [574] = 574,
  [575] = 575,
  [576] = 576,
  [577] = 577,
  [578] = 578,
  [579] = 543,
  [580] = 580,
  [581] = 581,
  [582] = 582,
  [583] = 583,
  [584] = 584,
  [585] = 585,
  [586] = 586,
  [587] = 587,
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
      if (eof) ADVANCE(854);
      ADVANCE_MAP(
        '!', 73,
        '"', 1079,
        '#', 1006,
        '*', 964,
        '+', 1433,
        ',', 1379,
        '-', 1434,
        '.', 1430,
        '/', 1438,
        ':', 987,
        ';', 991,
        '<', 1111,
        '=', 1062,
        '>', 1107,
        '?', 75,
        'E', 1432,
        '[', 76,
        '\\', 999,
        ']', 1380,
        '`', 1339,
        'b', 1000,
        'e', 1431,
        'f', 1001,
        'h', 1049,
        'm', 1047,
        'n', 1002,
        'r', 1003,
        's', 1046,
        't', 1004,
        'u', 1005,
        '{', 1008,
        '}', 1010,
        'a', 1396,
        'c', 1396,
        'd', 1396,
      );
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(955);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(963);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(1396);
      if (('G' <= lookahead && lookahead <= 'Z')) ADVANCE(955);
      if (set_contains(extras_character_set_2, 9, lookahead)) SKIP(0);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(855);
      if (lookahead == '#') ADVANCE(1437);
      if (lookahead == '\\') ADVANCE(838);
      if (lookahead == '{') ADVANCE(833);
      if (set_contains(extras_character_set_2, 9, lookahead)) SKIP(3);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= ']') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1322);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(855);
      if (lookahead == '#') ADVANCE(1437);
      if (lookahead == 'h') ADVANCE(1049);
      if (lookahead == 'm') ADVANCE(1048);
      if (lookahead == 's') ADVANCE(1046);
      if (set_contains(extras_character_set_2, 9, lookahead)) SKIP(2);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(855);
      if (lookahead == '#') ADVANCE(1437);
      if (set_contains(extras_character_set_2, 9, lookahead)) SKIP(3);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(855);
      if (lookahead == '#') ADVANCE(1437);
      if (set_contains(extras_character_set_2, 9, lookahead)) SKIP(4);
      if (lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 5:
      ADVANCE_MAP(
        '\n', 856,
        '"', 1079,
        '#', 1437,
        '-', 1337,
        '\\', 999,
        'f', 1331,
        'n', 1334,
        't', 1333,
        '{', 1335,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1329);
      if (set_contains(extras_character_set_2, 9, lookahead)) ADVANCE(1325);
      if (lookahead != 0) ADVANCE(1324);
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(6);
      if (lookahead == '#') ADVANCE(1437);
      if (lookahead == '<') ADVANCE(1112);
      if (lookahead == '{') ADVANCE(1335);
      if (set_contains(extras_character_set_2, 9, lookahead)) ADVANCE(1330);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(1324);
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(7);
      if (lookahead == '#') ADVANCE(1437);
      if (lookahead == '\\') ADVANCE(999);
      if (lookahead == '{') ADVANCE(1335);
      if (set_contains(extras_character_set_2, 9, lookahead)) ADVANCE(1336);
      if (lookahead != 0) ADVANCE(1324);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(857);
      if (lookahead == ' ') SKIP(8);
      if (lookahead == '#') ADVANCE(1437);
      if (lookahead == '\\') ADVANCE(999);
      if (lookahead == '{') ADVANCE(1376);
      if (set_contains(extras_character_set_2, 9, lookahead)) ADVANCE(1374);
      if (lookahead != 0 &&
          lookahead != ';') ADVANCE(1377);
      END_STATE();
    case 9:
      if (lookahead == '\n') SKIP(9);
      if (lookahead == '#') ADVANCE(1341);
      if (lookahead == '\\') ADVANCE(777);
      if (lookahead == '`') ADVANCE(1338);
      if (lookahead == '{') ADVANCE(1342);
      if (set_contains(extras_character_set_2, 9, lookahead)) ADVANCE(1340);
      if (lookahead != 0) ADVANCE(1341);
      END_STATE();
    case 10:
      if (lookahead == '\n') SKIP(10);
      if (lookahead == '#') ADVANCE(1435);
      if (lookahead == '/') ADVANCE(1438);
      if (lookahead == '\\') ADVANCE(999);
      if (set_contains(extras_character_set_2, 9, lookahead)) ADVANCE(1439);
      if (lookahead != 0) ADVANCE(1440);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(858);
      if (lookahead == '\r') SKIP(11);
      if (lookahead == '#') ADVANCE(1437);
      if (lookahead == '\\') ADVANCE(999);
      if (set_contains(extras_character_set_2, 9, lookahead)) ADVANCE(996);
      if (lookahead != 0 &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(998);
      END_STATE();
    case 12:
      if (lookahead == '\n') SKIP(12);
      if (lookahead == '#') ADVANCE(1437);
      if (set_contains(extras_character_set_2, 9, lookahead)) ADVANCE(1442);
      if (lookahead != 0) ADVANCE(1441);
      END_STATE();
    case 13:
      ADVANCE_MAP(
        '\n', 859,
        '#', 1437,
        '-', 1337,
        '\\', 999,
        'f', 1332,
        'n', 1334,
        't', 1333,
        '{', 1335,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1329);
      if (set_contains(extras_character_set_2, 9, lookahead)) ADVANCE(1326);
      if (lookahead != 0) ADVANCE(1324);
      END_STATE();
    case 14:
      ADVANCE_MAP(
        '\n', 860,
        '#', 1437,
        '-', 1337,
        '\\', 999,
        'f', 1331,
        'n', 1334,
        't', 1333,
        '{', 1335,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1329);
      if (set_contains(extras_character_set_2, 9, lookahead)) ADVANCE(1327);
      if (lookahead != 0) ADVANCE(1324);
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(861);
      if (lookahead == '#') ADVANCE(1437);
      if (lookahead == '\\') ADVANCE(999);
      if (lookahead == '{') ADVANCE(1335);
      if (set_contains(extras_character_set_2, 9, lookahead)) ADVANCE(1328);
      if (lookahead != 0) ADVANCE(1324);
      END_STATE();
    case 16:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '#') ADVANCE(1436);
      if (lookahead == '\\') ADVANCE(999);
      if (lookahead == '`') ADVANCE(1371);
      if (lookahead == '{') ADVANCE(1372);
      if (set_contains(extras_character_set_2, 9, lookahead)) ADVANCE(1370);
      if (lookahead != 0) ADVANCE(1373);
      END_STATE();
    case 17:
      if (lookahead == '\n') ADVANCE(863);
      if (lookahead == '#') ADVANCE(1369);
      if (lookahead == 'b') ADVANCE(1354);
      if (lookahead == 'g') ADVANCE(1365);
      if (lookahead == 'h') ADVANCE(1355);
      if (lookahead == 'j') ADVANCE(1366);
      if (lookahead == 'x') ADVANCE(1360);
      if (set_contains(extras_character_set_2, 9, lookahead)) ADVANCE(1350);
      if (lookahead != 0) ADVANCE(1369);
      END_STATE();
    case 18:
      ADVANCE_MAP(
        '"', 1079,
        '#', 1437,
        '*', 964,
        ',', 1379,
        ':', 987,
        ']', 1380,
        'b', 525,
        'c', 322,
        'd', 784,
        'h', 335,
        'i', 566,
        'j', 666,
        'm', 239,
        'r', 118,
        's', 390,
        'u', 602,
        'v', 145,
        'x', 578,
        '{', 832,
        '}', 1010,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(963);
      if (set_contains(extras_character_set_2, 9, lookahead)) SKIP(18);
      END_STATE();
    case 19:
      ADVANCE_MAP(
        '"', 1079,
        '#', 1437,
        '-', 54,
        '0', 1385,
        '<', 1114,
        '=', 1062,
        '>', 1106,
        ']', 1380,
        'b', 182,
        'c', 394,
        'd', 122,
        'f', 125,
        'h', 739,
        'j', 666,
        'l', 157,
        'n', 731,
        'r', 296,
        's', 571,
        't', 523,
        'u', 610,
        'x', 578,
        '{', 1008,
        '}', 835,
      );
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1386);
      if (set_contains(extras_character_set_2, 9, lookahead)) SKIP(19);
      END_STATE();
    case 20:
      ADVANCE_MAP(
        '"', 1079,
        '#', 1437,
        '-', 58,
        '\\', 999,
        '`', 1338,
        'b', 1000,
        'f', 1001,
        'n', 1002,
        'r', 1003,
        't', 1004,
        'u', 1005,
        '{', 832,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1034);
      if (set_contains(extras_character_set_2, 9, lookahead)) SKIP(20);
      END_STATE();
    case 21:
      if (lookahead == '"') ADVANCE(1079);
      if (lookahead == '#') ADVANCE(1384);
      if (lookahead == '\\') ADVANCE(999);
      if (lookahead == '{') ADVANCE(1383);
      if (set_contains(extras_character_set_2, 9, lookahead)) ADVANCE(1382);
      if (lookahead != 0) ADVANCE(1381);
      END_STATE();
    case 22:
      if (lookahead == '"') ADVANCE(1079);
      if (lookahead == '#') ADVANCE(1140);
      if (lookahead == '\\') ADVANCE(999);
      if (lookahead == '{') ADVANCE(1142);
      if (set_contains(extras_character_set_2, 9, lookahead)) ADVANCE(1141);
      if (lookahead != 0) ADVANCE(1143);
      END_STATE();
    case 23:
      ADVANCE_MAP(
        '"', 1079,
        '#', 1146,
        '\\', 999,
        'b', 1000,
        'f', 1001,
        'n', 1002,
        'r', 1003,
        't', 1004,
        'u', 1005,
      );
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == '\r') SKIP(23);
      if (set_contains(extras_character_set_2, 9, lookahead)) ADVANCE(1145);
      if (lookahead != 0) ADVANCE(1144);
      END_STATE();
    case 24:
      ADVANCE_MAP(
        '#', 1006,
        ',', 1378,
        ':', 987,
        ';', 991,
        '\\', 999,
        'b', 1000,
        'f', 1001,
        'n', 1002,
        'r', 1003,
        't', 1004,
        'u', 1005,
        '{', 1007,
        '}', 1010,
      );
      if (set_contains(extras_character_set_2, 9, lookahead)) SKIP(24);
      END_STATE();
    case 25:
      if (lookahead == '#') ADVANCE(1437);
      if (lookahead == ':') ADVANCE(987);
      if (lookahead == '\\') ADVANCE(838);
      if (lookahead == '{') ADVANCE(833);
      if (set_contains(extras_character_set_2, 9, lookahead)) SKIP(26);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= ']') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1322);
      END_STATE();
    case 26:
      if (lookahead == '#') ADVANCE(1437);
      if (lookahead == ':') ADVANCE(987);
      if (set_contains(extras_character_set_2, 9, lookahead)) SKIP(26);
      END_STATE();
    case 27:
      if (lookahead == '#') ADVANCE(1437);
      if (lookahead == ';') ADVANCE(991);
      if (lookahead == '\\') ADVANCE(999);
      if (lookahead == '{') ADVANCE(1376);
      if (lookahead == '\n' ||
          lookahead == ' ') SKIP(27);
      if (set_contains(extras_character_set_2, 9, lookahead)) ADVANCE(1375);
      if (lookahead != 0) ADVANCE(1377);
      END_STATE();
    case 28:
      if (lookahead == '#') ADVANCE(1437);
      if (lookahead == ';') ADVANCE(991);
      if (lookahead == '}') ADVANCE(1010);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1429);
      if (set_contains(extras_character_set_2, 9, lookahead)) SKIP(28);
      END_STATE();
    case 29:
      if (lookahead == '#') ADVANCE(1437);
      if (lookahead == '\\') ADVANCE(999);
      if (lookahead == '{') ADVANCE(832);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(29);
      if (set_contains(extras_character_set_2, 9, lookahead)) ADVANCE(997);
      if (lookahead != 0 &&
          lookahead != ';' &&
          lookahead != '}') ADVANCE(998);
      END_STATE();
    case 30:
      if (lookahead == '#') ADVANCE(1437);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1137);
      if (set_contains(extras_character_set_2, 9, lookahead)) SKIP(30);
      if (lookahead == '+' ||
          ('/' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1138);
      END_STATE();
    case 31:
      if (lookahead == '#') ADVANCE(1437);
      if (set_contains(extras_character_set_2, 9, lookahead)) SKIP(31);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1396);
      END_STATE();
    case 32:
      if (lookahead == '#') ADVANCE(1129);
      if (set_contains(extras_character_set_2, 9, lookahead)) ADVANCE(1130);
      if (lookahead != 0 &&
          lookahead != '/' &&
          lookahead != '?') ADVANCE(1131);
      END_STATE();
    case 33:
      if (lookahead == '#') ADVANCE(1123);
      if (set_contains(extras_character_set_2, 9, lookahead)) ADVANCE(1124);
      if (lookahead != 0 &&
          lookahead != '?') ADVANCE(1125);
      END_STATE();
    case 34:
      if (lookahead == '#') ADVANCE(1133);
      if (set_contains(extras_character_set_2, 9, lookahead)) ADVANCE(1134);
      if (lookahead != 0 &&
          lookahead != '/' &&
          lookahead != '>') ADVANCE(1135);
      END_STATE();
    case 35:
      if (lookahead == '*') ADVANCE(960);
      if (lookahead == '1') ADVANCE(53);
      if (lookahead == '2') ADVANCE(958);
      if (lookahead == '3') ADVANCE(959);
      END_STATE();
    case 36:
      if (lookahead == ',') ADVANCE(1139);
      END_STATE();
    case 37:
      if (lookahead == ',') ADVANCE(990);
      END_STATE();
    case 38:
      if (lookahead == ',') ADVANCE(1136);
      END_STATE();
    case 39:
      if (lookahead == ',') ADVANCE(1136);
      if (lookahead == 'D') ADVANCE(359);
      if (lookahead == 'E') ADVANCE(518);
      if (lookahead == 'U') ADVANCE(614);
      END_STATE();
    case 40:
      if (lookahead == '-') ADVANCE(624);
      END_STATE();
    case 41:
      if (lookahead == '-') ADVANCE(99);
      END_STATE();
    case 42:
      if (lookahead == '-') ADVANCE(807);
      END_STATE();
    case 43:
      if (lookahead == '-') ADVANCE(422);
      END_STATE();
    case 44:
      if (lookahead == '-') ADVANCE(637);
      END_STATE();
    case 45:
      if (lookahead == '-') ADVANCE(673);
      END_STATE();
    case 46:
      if (lookahead == '-') ADVANCE(674);
      END_STATE();
    case 47:
      if (lookahead == '-') ADVANCE(712);
      END_STATE();
    case 48:
      if (lookahead == '-') ADVANCE(216);
      END_STATE();
    case 49:
      if (lookahead == '-') ADVANCE(162);
      END_STATE();
    case 50:
      if (lookahead == '-') ADVANCE(86);
      END_STATE();
    case 51:
      if (lookahead == '-') ADVANCE(87);
      END_STATE();
    case 52:
      if (lookahead == '.') ADVANCE(55);
      END_STATE();
    case 53:
      if (lookahead == '.') ADVANCE(56);
      END_STATE();
    case 54:
      if (lookahead == '0') ADVANCE(1385);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1386);
      END_STATE();
    case 55:
      if (lookahead == '0') ADVANCE(1019);
      if (lookahead == '1') ADVANCE(1012);
      END_STATE();
    case 56:
      if (lookahead == '0') ADVANCE(956);
      if (lookahead == '1') ADVANCE(957);
      END_STATE();
    case 57:
      if (lookahead == '1') ADVANCE(52);
      if (lookahead == '2') ADVANCE(1020);
      if (lookahead == '3') ADVANCE(1021);
      END_STATE();
    case 58:
      if (lookahead == '1') ADVANCE(1033);
      END_STATE();
    case 59:
      if (lookahead == '2') ADVANCE(67);
      END_STATE();
    case 60:
      if (lookahead == '4') ADVANCE(1023);
      if (lookahead == '6') ADVANCE(1024);
      END_STATE();
    case 61:
      if (lookahead == '4') ADVANCE(39);
      END_STATE();
    case 62:
      if (lookahead == '4') ADVANCE(1051);
      END_STATE();
    case 63:
      if (lookahead == '4') ADVANCE(1098);
      if (lookahead == '6') ADVANCE(1099);
      END_STATE();
    case 64:
      if (lookahead == '4') ADVANCE(89);
      END_STATE();
    case 65:
      if (lookahead == '4') ADVANCE(38);
      END_STATE();
    case 66:
      if (lookahead == '5') ADVANCE(1073);
      END_STATE();
    case 67:
      if (lookahead == '5') ADVANCE(69);
      END_STATE();
    case 68:
      if (lookahead == '6') ADVANCE(65);
      END_STATE();
    case 69:
      if (lookahead == '6') ADVANCE(1072);
      END_STATE();
    case 70:
      if (lookahead == '6') ADVANCE(61);
      END_STATE();
    case 71:
      if (lookahead == '6') ADVANCE(64);
      END_STATE();
    case 72:
      if (lookahead == '8') ADVANCE(88);
      END_STATE();
    case 73:
      if (lookahead == '=') ADVANCE(1104);
      END_STATE();
    case 74:
      if (lookahead == '=') ADVANCE(1102);
      END_STATE();
    case 75:
      if (lookahead == '>') ADVANCE(1126);
      END_STATE();
    case 76:
      if (lookahead == 'A') ADVANCE(663);
      if (lookahead == 'B') ADVANCE(129);
      if (lookahead == 'C') ADVANCE(168);
      if (lookahead == 'F') ADVANCE(520);
      if (lookahead == 'M') ADVANCE(774);
      if (lookahead == 'O') ADVANCE(565);
      if (lookahead == 'Q') ADVANCE(775);
      END_STATE();
    case 77:
      if (lookahead == 'A') ADVANCE(663);
      if (lookahead == 'C') ADVANCE(167);
      END_STATE();
    case 78:
      if (lookahead == 'A') ADVANCE(368);
      if (lookahead == 'B') ADVANCE(306);
      END_STATE();
    case 79:
      if (lookahead == 'A') ADVANCE(780);
      END_STATE();
    case 80:
      if (lookahead == 'B') ADVANCE(129);
      if (lookahead == 'C') ADVANCE(524);
      if (lookahead == 'F') ADVANCE(520);
      if (lookahead == 'M') ADVANCE(774);
      if (lookahead == 'O') ADVANCE(565);
      if (lookahead == 'Q') ADVANCE(775);
      END_STATE();
    case 81:
      ADVANCE_MAP(
        'B', 541,
        'C', 539,
        'D', 188,
        'E', 483,
        'F', 469,
        'I', 513,
        'L', 424,
        'N', 786,
        'O', 207,
        'S', 753,
        'U', 790,
      );
      END_STATE();
    case 82:
      if (lookahead == 'D') ADVANCE(136);
      END_STATE();
    case 83:
      if (lookahead == 'D') ADVANCE(318);
      if (lookahead == 'E') ADVANCE(515);
      if (lookahead == 'Q') ADVANCE(796);
      END_STATE();
    case 84:
      if (lookahead == 'D') ADVANCE(179);
      if (lookahead == 'F') ADVANCE(456);
      if (lookahead == 'H') ADVANCE(311);
      if (lookahead == 'I') ADVANCE(506);
      if (lookahead == 'S') ADVANCE(749);
      END_STATE();
    case 85:
      if (lookahead == 'D') ADVANCE(189);
      END_STATE();
    case 86:
      if (lookahead == 'D') ADVANCE(190);
      END_STATE();
    case 87:
      if (lookahead == 'D') ADVANCE(191);
      END_STATE();
    case 88:
      if (lookahead == 'D') ADVANCE(358);
      if (lookahead == 'E') ADVANCE(517);
      END_STATE();
    case 89:
      if (lookahead == 'D') ADVANCE(359);
      if (lookahead == 'E') ADVANCE(518);
      if (lookahead == 'U') ADVANCE(614);
      END_STATE();
    case 90:
      if (lookahead == 'D') ADVANCE(360);
      END_STATE();
    case 91:
      if (lookahead == 'D') ADVANCE(361);
      if (lookahead == 'E') ADVANCE(519);
      END_STATE();
    case 92:
      if (lookahead == 'E') ADVANCE(691);
      if (lookahead == 'U') ADVANCE(512);
      END_STATE();
    case 93:
      if (lookahead == 'E') ADVANCE(584);
      END_STATE();
    case 94:
      if (lookahead == 'E') ADVANCE(585);
      END_STATE();
    case 95:
      if (lookahead == 'F') ADVANCE(544);
      if (lookahead == ']') ADVANCE(975);
      END_STATE();
    case 96:
      if (lookahead == 'F') ADVANCE(564);
      END_STATE();
    case 97:
      if (lookahead == 'N') ADVANCE(527);
      END_STATE();
    case 98:
      if (lookahead == 'N') ADVANCE(531);
      END_STATE();
    case 99:
      if (lookahead == 'N') ADVANCE(798);
      END_STATE();
    case 100:
      if (lookahead == 'P') ADVANCE(133);
      if (lookahead == ']') ADVANCE(971);
      END_STATE();
    case 101:
      if (lookahead == 'P') ADVANCE(161);
      END_STATE();
    case 102:
      if (lookahead == 'P') ADVANCE(175);
      END_STATE();
    case 103:
      if (lookahead == 'S') ADVANCE(734);
      if (lookahead == ']') ADVANCE(967);
      END_STATE();
    case 104:
      if (lookahead == 'S') ADVANCE(135);
      END_STATE();
    case 105:
      if (lookahead == 'T') ADVANCE(391);
      END_STATE();
    case 106:
      if (lookahead == 'T') ADVANCE(392);
      END_STATE();
    case 107:
      if (lookahead == 'W') ADVANCE(425);
      END_STATE();
    case 108:
      if (lookahead == 'W') ADVANCE(426);
      END_STATE();
    case 109:
      if (lookahead == ']') ADVANCE(983);
      END_STATE();
    case 110:
      if (lookahead == ']') ADVANCE(979);
      END_STATE();
    case 111:
      if (lookahead == ']') ADVANCE(985);
      END_STATE();
    case 112:
      if (lookahead == ']') ADVANCE(981);
      END_STATE();
    case 113:
      if (lookahead == ']') ADVANCE(965);
      END_STATE();
    case 114:
      if (lookahead == ']') ADVANCE(973);
      END_STATE();
    case 115:
      if (lookahead == ']') ADVANCE(977);
      END_STATE();
    case 116:
      if (lookahead == ']') ADVANCE(969);
      END_STATE();
    case 117:
      if (lookahead == '`') ADVANCE(1344);
      END_STATE();
    case 118:
      if (lookahead == 'a') ADVANCE(808);
      if (lookahead == 'e') ADVANCE(244);
      END_STATE();
    case 119:
      if (lookahead == 'a') ADVANCE(59);
      END_STATE();
    case 120:
      if (lookahead == 'a') ADVANCE(746);
      if (lookahead == 'e') ADVANCE(213);
      if (lookahead == 'i') ADVANCE(380);
      END_STATE();
    case 121:
      if (lookahead == 'a') ADVANCE(746);
      if (lookahead == 'e') ADVANCE(199);
      END_STATE();
    case 122:
      if (lookahead == 'a') ADVANCE(746);
      if (lookahead == 'e') ADVANCE(212);
      END_STATE();
    case 123:
      if (lookahead == 'a') ADVANCE(455);
      if (lookahead == 'i') ADVANCE(451);
      if (lookahead == 'o') ADVANCE(604);
      END_STATE();
    case 124:
      if (lookahead == 'a') ADVANCE(455);
      if (lookahead == 'i') ADVANCE(450);
      END_STATE();
    case 125:
      if (lookahead == 'a') ADVANCE(455);
      if (lookahead == 'i') ADVANCE(621);
      if (lookahead == 'o') ADVANCE(604);
      END_STATE();
    case 126:
      if (lookahead == 'a') ADVANCE(476);
      END_STATE();
    case 127:
      if (lookahead == 'a') ADVANCE(202);
      END_STATE();
    case 128:
      if (lookahead == 'a') ADVANCE(816);
      END_STATE();
    case 129:
      if (lookahead == 'a') ADVANCE(642);
      END_STATE();
    case 130:
      if (lookahead == 'a') ADVANCE(259);
      END_STATE();
    case 131:
      if (lookahead == 'a') ADVANCE(259);
      if (lookahead == 'x') ADVANCE(36);
      END_STATE();
    case 132:
      if (lookahead == 'a') ADVANCE(229);
      if (lookahead == 'e') ADVANCE(616);
      if (lookahead == 'h') ADVANCE(180);
      if (lookahead == 'o') ADVANCE(474);
      END_STATE();
    case 133:
      if (lookahead == 'a') ADVANCE(597);
      END_STATE();
    case 134:
      if (lookahead == 'a') ADVANCE(824);
      END_STATE();
    case 135:
      if (lookahead == 'a') ADVANCE(369);
      END_STATE();
    case 136:
      if (lookahead == 'a') ADVANCE(730);
      END_STATE();
    case 137:
      if (lookahead == 'a') ADVANCE(218);
      END_STATE();
    case 138:
      if (lookahead == 'a') ADVANCE(115);
      END_STATE();
    case 139:
      if (lookahead == 'a') ADVANCE(473);
      END_STATE();
    case 140:
      if (lookahead == 'a') ADVANCE(723);
      END_STATE();
    case 141:
      if (lookahead == 'a') ADVANCE(574);
      END_STATE();
    case 142:
      if (lookahead == 'a') ADVANCE(726);
      END_STATE();
    case 143:
      if (lookahead == 'a') ADVANCE(667);
      END_STATE();
    case 144:
      if (lookahead == 'a') ADVANCE(667);
      if (lookahead == 'o') ADVANCE(243);
      if (lookahead == 'y') ADVANCE(763);
      END_STATE();
    case 145:
      if (lookahead == 'a') ADVANCE(608);
      if (lookahead == 'e') ADVANCE(615);
      END_STATE();
    case 146:
      if (lookahead == 'a') ADVANCE(608);
      if (lookahead == 'e') ADVANCE(589);
      END_STATE();
    case 147:
      if (lookahead == 'a') ADVANCE(745);
      END_STATE();
    case 148:
      if (lookahead == 'a') ADVANCE(447);
      END_STATE();
    case 149:
      if (lookahead == 'a') ADVANCE(729);
      if (lookahead == 'i') ADVANCE(510);
      if (lookahead == 'r') ADVANCE(528);
      END_STATE();
    case 150:
      if (lookahead == 'a') ADVANCE(448);
      END_STATE();
    case 151:
      if (lookahead == 'a') ADVANCE(491);
      END_STATE();
    case 152:
      if (lookahead == 'a') ADVANCE(493);
      END_STATE();
    case 153:
      if (lookahead == 'a') ADVANCE(453);
      END_STATE();
    case 154:
      if (lookahead == 'a') ADVANCE(494);
      END_STATE();
    case 155:
      if (lookahead == 'a') ADVANCE(675);
      if (lookahead == 'e') ADVANCE(683);
      if (lookahead == 'o') ADVANCE(238);
      END_STATE();
    case 156:
      if (lookahead == 'a') ADVANCE(675);
      if (lookahead == 'i') ADVANCE(480);
      if (lookahead == 'o') ADVANCE(237);
      END_STATE();
    case 157:
      if (lookahead == 'a') ADVANCE(675);
      if (lookahead == 'o') ADVANCE(238);
      END_STATE();
    case 158:
      if (lookahead == 'a') ADVANCE(428);
      END_STATE();
    case 159:
      if (lookahead == 'a') ADVANCE(707);
      END_STATE();
    case 160:
      if (lookahead == 'a') ADVANCE(710);
      END_STATE();
    case 161:
      if (lookahead == 'a') ADVANCE(618);
      END_STATE();
    case 162:
      if (lookahead == 'a') ADVANCE(670);
      END_STATE();
    case 163:
      if (lookahead == 'a') ADVANCE(711);
      END_STATE();
    case 164:
      if (lookahead == 'a') ADVANCE(713);
      END_STATE();
    case 165:
      if (lookahead == 'a') ADVANCE(743);
      END_STATE();
    case 166:
      if (lookahead == 'a') ADVANCE(720);
      END_STATE();
    case 167:
      if (lookahead == 'a') ADVANCE(569);
      END_STATE();
    case 168:
      if (lookahead == 'a') ADVANCE(569);
      if (lookahead == 'o') ADVANCE(521);
      END_STATE();
    case 169:
      if (lookahead == 'a') ADVANCE(460);
      END_STATE();
    case 170:
      if (lookahead == 'a') ADVANCE(733);
      END_STATE();
    case 171:
      if (lookahead == 'a') ADVANCE(477);
      END_STATE();
    case 172:
      if (lookahead == 'a') ADVANCE(217);
      END_STATE();
    case 173:
      if (lookahead == 'a') ADVANCE(818);
      END_STATE();
    case 174:
      if (lookahead == 'a') ADVANCE(606);
      END_STATE();
    case 175:
      if (lookahead == 'a') ADVANCE(632);
      END_STATE();
    case 176:
      if (lookahead == 'a') ADVANCE(576);
      END_STATE();
    case 177:
      if (lookahead == 'a') ADVANCE(689);
      END_STATE();
    case 178:
      if (lookahead == 'a') ADVANCE(689);
      if (lookahead == 'r') ADVANCE(427);
      END_STATE();
    case 179:
      if (lookahead == 'a') ADVANCE(751);
      END_STATE();
    case 180:
      if (lookahead == 'a') ADVANCE(623);
      END_STATE();
    case 181:
      if (lookahead == 'a') ADVANCE(461);
      END_STATE();
    case 182:
      if (lookahead == 'a') ADVANCE(692);
      END_STATE();
    case 183:
      if (lookahead == 'a') ADVANCE(754);
      END_STATE();
    case 184:
      if (lookahead == 'a') ADVANCE(462);
      END_STATE();
    case 185:
      if (lookahead == 'a') ADVANCE(755);
      END_STATE();
    case 186:
      if (lookahead == 'a') ADVANCE(463);
      END_STATE();
    case 187:
      if (lookahead == 'a') ADVANCE(628);
      END_STATE();
    case 188:
      if (lookahead == 'a') ADVANCE(758);
      END_STATE();
    case 189:
      if (lookahead == 'a') ADVANCE(760);
      END_STATE();
    case 190:
      if (lookahead == 'a') ADVANCE(761);
      END_STATE();
    case 191:
      if (lookahead == 'a') ADVANCE(762);
      END_STATE();
    case 192:
      if (lookahead == 'a') ADVANCE(764);
      END_STATE();
    case 193:
      if (lookahead == 'a') ADVANCE(636);
      END_STATE();
    case 194:
      if (lookahead == 'a') ADVANCE(766);
      END_STATE();
    case 195:
      if (lookahead == 'a') ADVANCE(772);
      END_STATE();
    case 196:
      if (lookahead == 'a') ADVANCE(768);
      END_STATE();
    case 197:
      if (lookahead == 'b') ADVANCE(435);
      END_STATE();
    case 198:
      if (lookahead == 'b') ADVANCE(831);
      END_STATE();
    case 199:
      if (lookahead == 'b') ADVANCE(781);
      if (lookahead == 'c') ADVANCE(530);
      END_STATE();
    case 200:
      if (lookahead == 'b') ADVANCE(542);
      if (lookahead == 'y') ADVANCE(42);
      END_STATE();
    case 201:
      if (lookahead == 'b') ADVANCE(440);
      END_STATE();
    case 202:
      if (lookahead == 'b') ADVANCE(454);
      END_STATE();
    case 203:
      if (lookahead == 'b') ADVANCE(547);
      END_STATE();
    case 204:
      if (lookahead == 'b') ADVANCE(340);
      END_STATE();
    case 205:
      if (lookahead == 'b') ADVANCE(343);
      END_STATE();
    case 206:
      if (lookahead == 'b') ADVANCE(550);
      END_STATE();
    case 207:
      if (lookahead == 'b') ADVANCE(436);
      END_STATE();
    case 208:
      if (lookahead == 'c') ADVANCE(79);
      END_STATE();
    case 209:
      if (lookahead == 'c') ADVANCE(1025);
      END_STATE();
    case 210:
      if (lookahead == 'c') ADVANCE(441);
      END_STATE();
    case 211:
      if (lookahead == 'c') ADVANCE(395);
      END_STATE();
    case 212:
      if (lookahead == 'c') ADVANCE(530);
      END_STATE();
    case 213:
      if (lookahead == 'c') ADVANCE(530);
      if (lookahead == 'l') ADVANCE(134);
      END_STATE();
    case 214:
      if (lookahead == 'c') ADVANCE(141);
      END_STATE();
    case 215:
      if (lookahead == 'c') ADVANCE(457);
      END_STATE();
    case 216:
      if (lookahead == 'c') ADVANCE(533);
      END_STATE();
    case 217:
      if (lookahead == 'c') ADVANCE(709);
      END_STATE();
    case 218:
      if (lookahead == 'c') ADVANCE(275);
      END_STATE();
    case 219:
      if (lookahead == 'c') ADVANCE(735);
      END_STATE();
    case 220:
      if (lookahead == 'c') ADVANCE(719);
      END_STATE();
    case 221:
      if (lookahead == 'c') ADVANCE(721);
      END_STATE();
    case 222:
      if (lookahead == 'c') ADVANCE(748);
      END_STATE();
    case 223:
      if (lookahead == 'c') ADVANCE(546);
      END_STATE();
    case 224:
      if (lookahead == 'c') ADVANCE(176);
      END_STATE();
    case 225:
      if (lookahead == 'c') ADVANCE(794);
      END_STATE();
    case 226:
      if (lookahead == 'c') ADVANCE(548);
      END_STATE();
    case 227:
      if (lookahead == 'c') ADVANCE(147);
      END_STATE();
    case 228:
      if (lookahead == 'c') ADVANCE(554);
      END_STATE();
    case 229:
      if (lookahead == 'c') ADVANCE(353);
      END_STATE();
    case 230:
      if (lookahead == 'c') ADVANCE(555);
      END_STATE();
    case 231:
      if (lookahead == 'c') ADVANCE(556);
      END_STATE();
    case 232:
      if (lookahead == 'c') ADVANCE(557);
      END_STATE();
    case 233:
      if (lookahead == 'c') ADVANCE(559);
      END_STATE();
    case 234:
      if (lookahead == 'c') ADVANCE(560);
      END_STATE();
    case 235:
      if (lookahead == 'c') ADVANCE(561);
      END_STATE();
    case 236:
      if (lookahead == 'c') ADVANCE(769);
      END_STATE();
    case 237:
      if (lookahead == 'c') ADVANCE(194);
      END_STATE();
    case 238:
      if (lookahead == 'c') ADVANCE(196);
      END_STATE();
    case 239:
      if (lookahead == 'd') ADVANCE(66);
      END_STATE();
    case 240:
      if (lookahead == 'd') ADVANCE(1015);
      END_STATE();
    case 241:
      if (lookahead == 'd') ADVANCE(1018);
      END_STATE();
    case 242:
      if (lookahead == 'd') ADVANCE(1100);
      END_STATE();
    case 243:
      if (lookahead == 'd') ADVANCE(822);
      END_STATE();
    case 244:
      if (lookahead == 'd') ADVANCE(413);
      if (lookahead == 'g') ADVANCE(264);
      END_STATE();
    case 245:
      if (lookahead == 'd') ADVANCE(570);
      END_STATE();
    case 246:
      if (lookahead == 'd') ADVANCE(172);
      if (lookahead == 'g') ADVANCE(264);
      if (lookahead == 'p') ADVANCE(355);
      if (lookahead == 's') ADVANCE(535);
      if (lookahead == 't') ADVANCE(609);
      END_STATE();
    case 247:
      if (lookahead == 'd') ADVANCE(273);
      END_STATE();
    case 248:
      if (lookahead == 'd') ADVANCE(282);
      END_STATE();
    case 249:
      if (lookahead == 'd') ADVANCE(283);
      END_STATE();
    case 250:
      if (lookahead == 'd') ADVANCE(653);
      END_STATE();
    case 251:
      if (lookahead == 'd') ADVANCE(287);
      END_STATE();
    case 252:
      if (lookahead == 'd') ADVANCE(288);
      END_STATE();
    case 253:
      if (lookahead == 'd') ADVANCE(289);
      END_STATE();
    case 254:
      if (lookahead == 'd') ADVANCE(290);
      END_STATE();
    case 255:
      if (lookahead == 'd') ADVANCE(293);
      END_STATE();
    case 256:
      if (lookahead == 'd') ADVANCE(294);
      END_STATE();
    case 257:
      if (lookahead == 'd') ADVANCE(295);
      END_STATE();
    case 258:
      if (lookahead == 'd') ADVANCE(432);
      END_STATE();
    case 259:
      if (lookahead == 'd') ADVANCE(326);
      END_STATE();
    case 260:
      if (lookahead == 'd') ADVANCE(345);
      END_STATE();
    case 261:
      if (lookahead == 'e') ADVANCE(131);
      END_STATE();
    case 262:
      if (lookahead == 'e') ADVANCE(131);
      if (lookahead == 't') ADVANCE(479);
      END_STATE();
    case 263:
      if (lookahead == 'e') ADVANCE(68);
      END_STATE();
    case 264:
      if (lookahead == 'e') ADVANCE(813);
      END_STATE();
    case 265:
      if (lookahead == 'e') ADVANCE(1389);
      END_STATE();
    case 266:
      if (lookahead == 'e') ADVANCE(1391);
      END_STATE();
    case 267:
      if (lookahead == 'e') ADVANCE(1074);
      END_STATE();
    case 268:
      if (lookahead == 'e') ADVANCE(1061);
      END_STATE();
    case 269:
      if (lookahead == 'e') ADVANCE(1078);
      END_STATE();
    case 270:
      if (lookahead == 'e') ADVANCE(378);
      if (lookahead == 't') ADVANCE(385);
      if (lookahead == 'u') ADVANCE(452);
      END_STATE();
    case 271:
      if (lookahead == 'e') ADVANCE(246);
      END_STATE();
    case 272:
      if (lookahead == 'e') ADVANCE(96);
      END_STATE();
    case 273:
      if (lookahead == 'e') ADVANCE(1420);
      END_STATE();
    case 274:
      if (lookahead == 'e') ADVANCE(1422);
      END_STATE();
    case 275:
      if (lookahead == 'e') ADVANCE(1424);
      END_STATE();
    case 276:
      if (lookahead == 'e') ADVANCE(1050);
      END_STATE();
    case 277:
      if (lookahead == 'e') ADVANCE(1029);
      END_STATE();
    case 278:
      if (lookahead == 'e') ADVANCE(1029);
      if (lookahead == 'i') ADVANCE(740);
      END_STATE();
    case 279:
      if (lookahead == 'e') ADVANCE(1022);
      END_STATE();
    case 280:
      if (lookahead == 'e') ADVANCE(1044);
      END_STATE();
    case 281:
      if (lookahead == 'e') ADVANCE(1013);
      END_STATE();
    case 282:
      if (lookahead == 'e') ADVANCE(1411);
      END_STATE();
    case 283:
      if (lookahead == 'e') ADVANCE(1410);
      END_STATE();
    case 284:
      if (lookahead == 'e') ADVANCE(1413);
      END_STATE();
    case 285:
      if (lookahead == 'e') ADVANCE(1032);
      END_STATE();
    case 286:
      if (lookahead == 'e') ADVANCE(1055);
      END_STATE();
    case 287:
      if (lookahead == 'e') ADVANCE(1407);
      END_STATE();
    case 288:
      if (lookahead == 'e') ADVANCE(1408);
      END_STATE();
    case 289:
      if (lookahead == 'e') ADVANCE(1398);
      END_STATE();
    case 290:
      if (lookahead == 'e') ADVANCE(1399);
      END_STATE();
    case 291:
      if (lookahead == 'e') ADVANCE(1414);
      END_STATE();
    case 292:
      if (lookahead == 'e') ADVANCE(1030);
      END_STATE();
    case 293:
      if (lookahead == 'e') ADVANCE(1417);
      END_STATE();
    case 294:
      if (lookahead == 'e') ADVANCE(1400);
      END_STATE();
    case 295:
      if (lookahead == 'e') ADVANCE(1401);
      END_STATE();
    case 296:
      if (lookahead == 'e') ADVANCE(377);
      END_STATE();
    case 297:
      if (lookahead == 'e') ADVANCE(1086);
      END_STATE();
    case 298:
      if (lookahead == 'e') ADVANCE(1096);
      END_STATE();
    case 299:
      if (lookahead == 'e') ADVANCE(1082);
      END_STATE();
    case 300:
      if (lookahead == 'e') ADVANCE(1083);
      END_STATE();
    case 301:
      if (lookahead == 'e') ADVANCE(587);
      END_STATE();
    case 302:
      if (lookahead == 'e') ADVANCE(222);
      END_STATE();
    case 303:
      if (lookahead == 'e') ADVANCE(37);
      END_STATE();
    case 304:
      if (lookahead == 'e') ADVANCE(598);
      END_STATE();
    case 305:
      if (lookahead == 'e') ADVANCE(823);
      END_STATE();
    case 306:
      if (lookahead == 'e') ADVANCE(370);
      END_STATE();
    case 307:
      if (lookahead == 'e') ADVANCE(664);
      END_STATE();
    case 308:
      if (lookahead == 'e') ADVANCE(225);
      END_STATE();
    case 309:
      if (lookahead == 'e') ADVANCE(379);
      END_STATE();
    case 310:
      if (lookahead == 'e') ADVANCE(245);
      END_STATE();
    case 311:
      if (lookahead == 'e') ADVANCE(814);
      END_STATE();
    case 312:
      if (lookahead == 'e') ADVANCE(258);
      END_STATE();
    case 313:
      if (lookahead == 'e') ADVANCE(815);
      END_STATE();
    case 314:
      if (lookahead == 'e') ADVANCE(366);
      END_STATE();
    case 315:
      if (lookahead == 'e') ADVANCE(668);
      END_STATE();
    case 316:
      if (lookahead == 'e') ADVANCE(381);
      END_STATE();
    case 317:
      if (lookahead == 'e') ADVANCE(240);
      END_STATE();
    case 318:
      if (lookahead == 'e') ADVANCE(223);
      END_STATE();
    case 319:
      if (lookahead == 'e') ADVANCE(241);
      END_STATE();
    case 320:
      if (lookahead == 'e') ADVANCE(812);
      END_STATE();
    case 321:
      if (lookahead == 'e') ADVANCE(812);
      if (lookahead == 't') ADVANCE(478);
      END_STATE();
    case 322:
      if (lookahead == 'e') ADVANCE(635);
      if (lookahead == 'o') ADVANCE(545);
      END_STATE();
    case 323:
      if (lookahead == 'e') ADVANCE(828);
      END_STATE();
    case 324:
      if (lookahead == 'e') ADVANCE(236);
      END_STATE();
    case 325:
      if (lookahead == 'e') ADVANCE(644);
      END_STATE();
    case 326:
      if (lookahead == 'e') ADVANCE(588);
      END_STATE();
    case 327:
      if (lookahead == 'e') ADVANCE(646);
      END_STATE();
    case 328:
      if (lookahead == 'e') ADVANCE(590);
      END_STATE();
    case 329:
      if (lookahead == 'e') ADVANCE(553);
      END_STATE();
    case 330:
      if (lookahead == 'e') ADVANCE(611);
      END_STATE();
    case 331:
      if (lookahead == 'e') ADVANCE(152);
      END_STATE();
    case 332:
      if (lookahead == 'e') ADVANCE(600);
      END_STATE();
    case 333:
      if (lookahead == 'e') ADVANCE(679);
      END_STATE();
    case 334:
      if (lookahead == 'e') ADVANCE(591);
      END_STATE();
    case 335:
      if (lookahead == 'e') ADVANCE(130);
      END_STATE();
    case 336:
      if (lookahead == 'e') ADVANCE(605);
      END_STATE();
    case 337:
      if (lookahead == 'e') ADVANCE(724);
      END_STATE();
    case 338:
      if (lookahead == 'e') ADVANCE(592);
      END_STATE();
    case 339:
      if (lookahead == 'e') ADVANCE(638);
      END_STATE();
    case 340:
      if (lookahead == 'e') ADVANCE(593);
      END_STATE();
    case 341:
      if (lookahead == 'e') ADVANCE(594);
      END_STATE();
    case 342:
      if (lookahead == 'e') ADVANCE(714);
      END_STATE();
    case 343:
      if (lookahead == 'e') ADVANCE(596);
      END_STATE();
    case 344:
      if (lookahead == 'e') ADVANCE(657);
      END_STATE();
    case 345:
      if (lookahead == 'e') ADVANCE(659);
      END_STATE();
    case 346:
      if (lookahead == 'e') ADVANCE(680);
      END_STATE();
    case 347:
      if (lookahead == 'e') ADVANCE(70);
      END_STATE();
    case 348:
      if (lookahead == 'e') ADVANCE(98);
      END_STATE();
    case 349:
      if (lookahead == 'e') ADVANCE(634);
      if (lookahead == 't') ADVANCE(187);
      if (lookahead == 'u') ADVANCE(197);
      END_STATE();
    case 350:
      if (lookahead == 'e') ADVANCE(71);
      END_STATE();
    case 351:
      if (lookahead == 'e') ADVANCE(219);
      END_STATE();
    case 352:
      if (lookahead == 'e') ADVANCE(220);
      END_STATE();
    case 353:
      if (lookahead == 'e') ADVANCE(619);
      END_STATE();
    case 354:
      if (lookahead == 'e') ADVANCE(221);
      END_STATE();
    case 355:
      if (lookahead == 'e') ADVANCE(160);
      if (lookahead == 'l') ADVANCE(137);
      END_STATE();
    case 356:
      if (lookahead == 'e') ADVANCE(195);
      END_STATE();
    case 357:
      if (lookahead == 'e') ADVANCE(693);
      END_STATE();
    case 358:
      if (lookahead == 'e') ADVANCE(228);
      END_STATE();
    case 359:
      if (lookahead == 'e') ADVANCE(231);
      END_STATE();
    case 360:
      if (lookahead == 'e') ADVANCE(233);
      END_STATE();
    case 361:
      if (lookahead == 'e') ADVANCE(234);
      END_STATE();
    case 362:
      if (lookahead == 'e') ADVANCE(51);
      END_STATE();
    case 363:
      if (lookahead == 'e') ADVANCE(640);
      END_STATE();
    case 364:
      if (lookahead == 'e') ADVANCE(91);
      END_STATE();
    case 365:
      if (lookahead == 'f') ADVANCE(72);
      END_STATE();
    case 366:
      if (lookahead == 'f') ADVANCE(1039);
      END_STATE();
    case 367:
      if (lookahead == 'f') ADVANCE(430);
      if (lookahead == 'o') ADVANCE(582);
      END_STATE();
    case 368:
      if (lookahead == 'f') ADVANCE(770);
      END_STATE();
    case 369:
      if (lookahead == 'f') ADVANCE(364);
      END_STATE();
    case 370:
      if (lookahead == 'f') ADVANCE(549);
      END_STATE();
    case 371:
      if (lookahead == 'f') ADVANCE(402);
      END_STATE();
    case 372:
      if (lookahead == 'g') ADVANCE(102);
      END_STATE();
    case 373:
      if (lookahead == 'g') ADVANCE(1406);
      END_STATE();
    case 374:
      if (lookahead == 'g') ADVANCE(1040);
      END_STATE();
    case 375:
      if (lookahead == 'g') ADVANCE(1093);
      END_STATE();
    case 376:
      if (lookahead == 'g') ADVANCE(804);
      END_STATE();
    case 377:
      if (lookahead == 'g') ADVANCE(264);
      if (lookahead == 'p') ADVANCE(458);
      END_STATE();
    case 378:
      if (lookahead == 'g') ADVANCE(551);
      if (lookahead == 't') ADVANCE(607);
      END_STATE();
    case 379:
      if (lookahead == 'g') ADVANCE(313);
      END_STATE();
    case 380:
      if (lookahead == 'g') ADVANCE(333);
      END_STATE();
    case 381:
      if (lookahead == 'g') ADVANCE(341);
      END_STATE();
    case 382:
      if (lookahead == 'h') ADVANCE(1075);
      END_STATE();
    case 383:
      if (lookahead == 'h') ADVANCE(1076);
      END_STATE();
    case 384:
      if (lookahead == 'h') ADVANCE(1423);
      END_STATE();
    case 385:
      if (lookahead == 'h') ADVANCE(1423);
      if (lookahead == 'l') ADVANCE(472);
      END_STATE();
    case 386:
      if (lookahead == 'h') ADVANCE(1118);
      END_STATE();
    case 387:
      if (lookahead == 'h') ADVANCE(1117);
      END_STATE();
    case 388:
      if (lookahead == 'h') ADVANCE(49);
      END_STATE();
    case 389:
      if (lookahead == 'h') ADVANCE(113);
      END_STATE();
    case 390:
      if (lookahead == 'h') ADVANCE(119);
      if (lookahead == 't') ADVANCE(170);
      END_STATE();
    case 391:
      if (lookahead == 'h') ADVANCE(151);
      END_STATE();
    case 392:
      if (lookahead == 'h') ADVANCE(154);
      END_STATE();
    case 393:
      if (lookahead == 'h') ADVANCE(180);
      if (lookahead == 'o') ADVANCE(508);
      END_STATE();
    case 394:
      if (lookahead == 'h') ADVANCE(180);
      if (lookahead == 'o') ADVANCE(783);
      END_STATE();
    case 395:
      if (lookahead == 'h') ADVANCE(344);
      END_STATE();
    case 396:
      if (lookahead == 'i') ADVANCE(208);
      END_STATE();
    case 397:
      if (lookahead == 'i') ADVANCE(371);
      END_STATE();
    case 398:
      if (lookahead == 'i') ADVANCE(577);
      END_STATE();
    case 399:
      if (lookahead == 'i') ADVANCE(307);
      END_STATE();
    case 400:
      if (lookahead == 'i') ADVANCE(487);
      END_STATE();
    case 401:
      if (lookahead == 'i') ADVANCE(522);
      END_STATE();
    case 402:
      if (lookahead == 'i') ADVANCE(227);
      END_STATE();
    case 403:
      if (lookahead == 'i') ADVANCE(376);
      END_STATE();
    case 404:
      if (lookahead == 'i') ADVANCE(820);
      END_STATE();
    case 405:
      if (lookahead == 'i') ADVANCE(529);
      END_STATE();
    case 406:
      if (lookahead == 'i') ADVANCE(532);
      END_STATE();
    case 407:
      if (lookahead == 'i') ADVANCE(481);
      END_STATE();
    case 408:
      if (lookahead == 'i') ADVANCE(568);
      END_STATE();
    case 409:
      if (lookahead == 'i') ADVANCE(267);
      END_STATE();
    case 410:
      if (lookahead == 'i') ADVANCE(127);
      END_STATE();
    case 411:
      if (lookahead == 'i') ADVANCE(496);
      END_STATE();
    case 412:
      if (lookahead == 'i') ADVANCE(242);
      END_STATE();
    case 413:
      if (lookahead == 'i') ADVANCE(613);
      END_STATE();
    case 414:
      if (lookahead == 'i') ADVANCE(536);
      END_STATE();
    case 415:
      if (lookahead == 'i') ADVANCE(498);
      END_STATE();
    case 416:
      if (lookahead == 'i') ADVANCE(537);
      END_STATE();
    case 417:
      if (lookahead == 'i') ADVANCE(732);
      END_STATE();
    case 418:
      if (lookahead == 'i') ADVANCE(703);
      END_STATE();
    case 419:
      if (lookahead == 'i') ADVANCE(153);
      END_STATE();
    case 420:
      if (lookahead == 'i') ADVANCE(538);
      END_STATE();
    case 421:
      if (lookahead == 'i') ADVANCE(540);
      END_STATE();
    case 422:
      if (lookahead == 'i') ADVANCE(652);
      END_STATE();
    case 423:
      if (lookahead == 'i') ADVANCE(690);
      END_STATE();
    case 424:
      if (lookahead == 'i') ADVANCE(684);
      END_STATE();
    case 425:
      if (lookahead == 'i') ADVANCE(738);
      END_STATE();
    case 426:
      if (lookahead == 'i') ADVANCE(741);
      END_STATE();
    case 427:
      if (lookahead == 'i') ADVANCE(314);
      END_STATE();
    case 428:
      if (lookahead == 'i') ADVANCE(509);
      END_STATE();
    case 429:
      if (lookahead == 'i') ADVANCE(482);
      if (lookahead == 'o') ADVANCE(1053);
      END_STATE();
    case 430:
      if (lookahead == 'i') ADVANCE(459);
      END_STATE();
    case 431:
      if (lookahead == 'i') ADVANCE(516);
      if (lookahead == 'm') ADVANCE(173);
      END_STATE();
    case 432:
      if (lookahead == 'i') ADVANCE(626);
      END_STATE();
    case 433:
      if (lookahead == 'i') ADVANCE(630);
      END_STATE();
    case 434:
      if (lookahead == 'i') ADVANCE(183);
      END_STATE();
    case 435:
      if (lookahead == 'j') ADVANCE(352);
      END_STATE();
    case 436:
      if (lookahead == 'j') ADVANCE(354);
      END_STATE();
    case 437:
      if (lookahead == 'k') ADVANCE(399);
      END_STATE();
    case 438:
      if (lookahead == 'k') ADVANCE(409);
      END_STATE();
    case 439:
      if (lookahead == 'k') ADVANCE(408);
      if (lookahead == 'p') ADVANCE(467);
      END_STATE();
    case 440:
      if (lookahead == 'k') ADVANCE(323);
      END_STATE();
    case 441:
      if (lookahead == 'k') ADVANCE(342);
      END_STATE();
    case 442:
      if (lookahead == 'l') ADVANCE(1068);
      END_STATE();
    case 443:
      if (lookahead == 'l') ADVANCE(988);
      END_STATE();
    case 444:
      if (lookahead == 'l') ADVANCE(83);
      END_STATE();
    case 445:
      if (lookahead == 'l') ADVANCE(92);
      END_STATE();
    case 446:
      if (lookahead == 'l') ADVANCE(104);
      END_STATE();
    case 447:
      if (lookahead == 'l') ADVANCE(1026);
      END_STATE();
    case 448:
      if (lookahead == 'l') ADVANCE(1043);
      END_STATE();
    case 449:
      if (lookahead == 'l') ADVANCE(806);
      END_STATE();
    case 450:
      if (lookahead == 'l') ADVANCE(303);
      END_STATE();
    case 451:
      if (lookahead == 'l') ADVANCE(303);
      if (lookahead == 'r') ADVANCE(677);
      END_STATE();
    case 452:
      if (lookahead == 'l') ADVANCE(443);
      END_STATE();
    case 453:
      if (lookahead == 'l') ADVANCE(41);
      END_STATE();
    case 454:
      if (lookahead == 'l') ADVANCE(268);
      END_STATE();
    case 455:
      if (lookahead == 'l') ADVANCE(671);
      END_STATE();
    case 456:
      if (lookahead == 'l') ADVANCE(558);
      END_STATE();
    case 457:
      if (lookahead == 'l') ADVANCE(785);
      END_STATE();
    case 458:
      if (lookahead == 'l') ADVANCE(137);
      END_STATE();
    case 459:
      if (lookahead == 'l') ADVANCE(286);
      END_STATE();
    case 460:
      if (lookahead == 'l') ADVANCE(655);
      END_STATE();
    case 461:
      if (lookahead == 'l') ADVANCE(660);
      END_STATE();
    case 462:
      if (lookahead == 'l') ADVANCE(661);
      END_STATE();
    case 463:
      if (lookahead == 'l') ADVANCE(662);
      END_STATE();
    case 464:
      if (lookahead == 'l') ADVANCE(331);
      END_STATE();
    case 465:
      if (lookahead == 'l') ADVANCE(324);
      END_STATE();
    case 466:
      if (lookahead == 'l') ADVANCE(728);
      END_STATE();
    case 467:
      if (lookahead == 'l') ADVANCE(418);
      END_STATE();
    case 468:
      if (lookahead == 'l') ADVANCE(465);
      END_STATE();
    case 469:
      if (lookahead == 'l') ADVANCE(562);
      END_STATE();
    case 470:
      if (lookahead == 'm') ADVANCE(100);
      END_STATE();
    case 471:
      if (lookahead == 'm') ADVANCE(82);
      END_STATE();
    case 472:
      if (lookahead == 'm') ADVANCE(1014);
      END_STATE();
    case 473:
      if (lookahead == 'm') ADVANCE(1419);
      END_STATE();
    case 474:
      if (lookahead == 'm') ADVANCE(573);
      if (lookahead == 'n') ADVANCE(511);
      if (lookahead == 'u') ADVANCE(502);
      END_STATE();
    case 475:
      if (lookahead == 'm') ADVANCE(204);
      END_STATE();
    case 476:
      if (lookahead == 'm') ADVANCE(669);
      END_STATE();
    case 477:
      if (lookahead == 'm') ADVANCE(672);
      END_STATE();
    case 478:
      if (lookahead == 'm') ADVANCE(445);
      END_STATE();
    case 479:
      if (lookahead == 'm') ADVANCE(445);
      if (lookahead == 't') ADVANCE(567);
      END_STATE();
    case 480:
      if (lookahead == 'm') ADVANCE(417);
      END_STATE();
    case 481:
      if (lookahead == 'm') ADVANCE(280);
      END_STATE();
    case 482:
      if (lookahead == 'm') ADVANCE(329);
      END_STATE();
    case 483:
      if (lookahead == 'm') ADVANCE(575);
      END_STATE();
    case 484:
      if (lookahead == 'm') ADVANCE(159);
      END_STATE();
    case 485:
      if (lookahead == 'm') ADVANCE(164);
      END_STATE();
    case 486:
      if (lookahead == 'm') ADVANCE(205);
      END_STATE();
    case 487:
      if (lookahead == 'n') ADVANCE(372);
      END_STATE();
    case 488:
      if (lookahead == 'n') ADVANCE(1064);
      END_STATE();
    case 489:
      if (lookahead == 'n') ADVANCE(1070);
      END_STATE();
    case 490:
      if (lookahead == 'n') ADVANCE(1017);
      END_STATE();
    case 491:
      if (lookahead == 'n') ADVANCE(1110);
      END_STATE();
    case 492:
      if (lookahead == 'n') ADVANCE(1016);
      END_STATE();
    case 493:
      if (lookahead == 'n') ADVANCE(1092);
      END_STATE();
    case 494:
      if (lookahead == 'n') ADVANCE(1105);
      END_STATE();
    case 495:
      if (lookahead == 'n') ADVANCE(1094);
      END_STATE();
    case 496:
      if (lookahead == 'n') ADVANCE(373);
      END_STATE();
    case 497:
      if (lookahead == 'n') ADVANCE(665);
      END_STATE();
    case 498:
      if (lookahead == 'n') ADVANCE(375);
      END_STATE();
    case 499:
      if (lookahead == 'n') ADVANCE(250);
      if (lookahead == 'q') ADVANCE(789);
      if (lookahead == 'x') ADVANCE(423);
      END_STATE();
    case 500:
      if (lookahead == 'n') ADVANCE(215);
      if (lookahead == 's') ADVANCE(81);
      END_STATE();
    case 501:
      if (lookahead == 'n') ADVANCE(404);
      if (lookahead == 'r') ADVANCE(444);
      if (lookahead == 's') ADVANCE(328);
      if (lookahead == 't') ADVANCE(365);
      END_STATE();
    case 502:
      if (lookahead == 'n') ADVANCE(701);
      END_STATE();
    case 503:
      if (lookahead == 'n') ADVANCE(148);
      END_STATE();
    case 504:
      if (lookahead == 'n') ADVANCE(310);
      END_STATE();
    case 505:
      if (lookahead == 'n') ADVANCE(676);
      if (lookahead == 'p') ADVANCE(802);
      END_STATE();
    case 506:
      if (lookahead == 'n') ADVANCE(704);
      END_STATE();
    case 507:
      if (lookahead == 'n') ADVANCE(716);
      END_STATE();
    case 508:
      if (lookahead == 'n') ADVANCE(750);
      if (lookahead == 'u') ADVANCE(502);
      END_STATE();
    case 509:
      if (lookahead == 'n') ADVANCE(658);
      END_STATE();
    case 510:
      if (lookahead == 'n') ADVANCE(504);
      END_STATE();
    case 511:
      if (lookahead == 'n') ADVANCE(351);
      END_STATE();
    case 512:
      if (lookahead == 'n') ADVANCE(357);
      END_STATE();
    case 513:
      if (lookahead == 'n') ADVANCE(759);
      if (lookahead == 'p') ADVANCE(803);
      if (lookahead == 's') ADVANCE(563);
      END_STATE();
    case 514:
      if (lookahead == 'n') ADVANCE(579);
      END_STATE();
    case 515:
      if (lookahead == 'n') ADVANCE(226);
      END_STATE();
    case 516:
      if (lookahead == 'n') ADVANCE(771);
      END_STATE();
    case 517:
      if (lookahead == 'n') ADVANCE(230);
      END_STATE();
    case 518:
      if (lookahead == 'n') ADVANCE(232);
      END_STATE();
    case 519:
      if (lookahead == 'n') ADVANCE(235);
      END_STATE();
    case 520:
      if (lookahead == 'o') ADVANCE(586);
      END_STATE();
    case 521:
      if (lookahead == 'o') ADVANCE(437);
      END_STATE();
    case 522:
      if (lookahead == 'o') ADVANCE(497);
      END_STATE();
    case 523:
      if (lookahead == 'o') ADVANCE(84);
      if (lookahead == 'r') ADVANCE(782);
      END_STATE();
    case 524:
      if (lookahead == 'o') ADVANCE(521);
      END_STATE();
    case 525:
      if (lookahead == 'o') ADVANCE(243);
      if (lookahead == 'y') ADVANCE(763);
      END_STATE();
    case 526:
      if (lookahead == 'o') ADVANCE(514);
      END_STATE();
    case 527:
      if (lookahead == 'o') ADVANCE(809);
      END_STATE();
    case 528:
      if (lookahead == 'o') ADVANCE(817);
      END_STATE();
    case 529:
      if (lookahead == 'o') ADVANCE(488);
      END_STATE();
    case 530:
      if (lookahead == 'o') ADVANCE(247);
      END_STATE();
    case 531:
      if (lookahead == 'o') ADVANCE(810);
      END_STATE();
    case 532:
      if (lookahead == 'o') ADVANCE(489);
      END_STATE();
    case 533:
      if (lookahead == 'o') ADVANCE(795);
      END_STATE();
    case 534:
      if (lookahead == 'o') ADVANCE(210);
      END_STATE();
    case 535:
      if (lookahead == 'o') ADVANCE(449);
      END_STATE();
    case 536:
      if (lookahead == 'o') ADVANCE(490);
      END_STATE();
    case 537:
      if (lookahead == 'o') ADVANCE(503);
      END_STATE();
    case 538:
      if (lookahead == 'o') ADVANCE(492);
      END_STATE();
    case 539:
      if (lookahead == 'o') ADVANCE(468);
      END_STATE();
    case 540:
      if (lookahead == 'o') ADVANCE(495);
      END_STATE();
    case 541:
      if (lookahead == 'o') ADVANCE(552);
      END_STATE();
    case 542:
      if (lookahead == 'o') ADVANCE(650);
      END_STATE();
    case 543:
      if (lookahead == 'o') ADVANCE(717);
      if (lookahead == 't') ADVANCE(384);
      if (lookahead == 'u') ADVANCE(452);
      END_STATE();
    case 544:
      if (lookahead == 'o') ADVANCE(599);
      END_STATE();
    case 545:
      if (lookahead == 'o') ADVANCE(438);
      END_STATE();
    case 546:
      if (lookahead == 'o') ADVANCE(248);
      END_STATE();
    case 547:
      if (lookahead == 'o') ADVANCE(685);
      END_STATE();
    case 548:
      if (lookahead == 'o') ADVANCE(249);
      END_STATE();
    case 549:
      if (lookahead == 'o') ADVANCE(627);
      END_STATE();
    case 550:
      if (lookahead == 'o') ADVANCE(686);
      END_STATE();
    case 551:
      if (lookahead == 'o') ADVANCE(747);
      END_STATE();
    case 552:
      if (lookahead == 'o') ADVANCE(464);
      END_STATE();
    case 553:
      if (lookahead == 'o') ADVANCE(793);
      END_STATE();
    case 554:
      if (lookahead == 'o') ADVANCE(251);
      END_STATE();
    case 555:
      if (lookahead == 'o') ADVANCE(252);
      END_STATE();
    case 556:
      if (lookahead == 'o') ADVANCE(253);
      END_STATE();
    case 557:
      if (lookahead == 'o') ADVANCE(254);
      END_STATE();
    case 558:
      if (lookahead == 'o') ADVANCE(163);
      END_STATE();
    case 559:
      if (lookahead == 'o') ADVANCE(255);
      END_STATE();
    case 560:
      if (lookahead == 'o') ADVANCE(256);
      END_STATE();
    case 561:
      if (lookahead == 'o') ADVANCE(257);
      END_STATE();
    case 562:
      if (lookahead == 'o') ADVANCE(166);
      END_STATE();
    case 563:
      if (lookahead == 'o') ADVANCE(85);
      END_STATE();
    case 564:
      if (lookahead == 'o') ADVANCE(639);
      END_STATE();
    case 565:
      if (lookahead == 'p') ADVANCE(722);
      END_STATE();
    case 566:
      if (lookahead == 'p') ADVANCE(1066);
      END_STATE();
    case 567:
      if (lookahead == 'p') ADVANCE(57);
      END_STATE();
    case 568:
      if (lookahead == 'p') ADVANCE(1028);
      END_STATE();
    case 569:
      if (lookahead == 'p') ADVANCE(725);
      END_STATE();
    case 570:
      if (lookahead == 'p') ADVANCE(776);
      END_STATE();
    case 571:
      if (lookahead == 'p') ADVANCE(467);
      END_STATE();
    case 572:
      if (lookahead == 'p') ADVANCE(467);
      if (lookahead == 't') ADVANCE(193);
      END_STATE();
    case 573:
      if (lookahead == 'p') ADVANCE(620);
      END_STATE();
    case 574:
      if (lookahead == 'p') ADVANCE(284);
      END_STATE();
    case 575:
      if (lookahead == 'p') ADVANCE(744);
      END_STATE();
    case 576:
      if (lookahead == 'p') ADVANCE(291);
      END_STATE();
    case 577:
      if (lookahead == 'p') ADVANCE(174);
      END_STATE();
    case 578:
      if (lookahead == 'p') ADVANCE(140);
      END_STATE();
    case 579:
      if (lookahead == 'p') ADVANCE(142);
      END_STATE();
    case 580:
      if (lookahead == 'p') ADVANCE(791);
      END_STATE();
    case 581:
      if (lookahead == 'p') ADVANCE(433);
      END_STATE();
    case 582:
      if (lookahead == 'p') ADVANCE(767);
      END_STATE();
    case 583:
      if (lookahead == 'q') ADVANCE(799);
      END_STATE();
    case 584:
      if (lookahead == 'q') ADVANCE(800);
      END_STATE();
    case 585:
      if (lookahead == 'q') ADVANCE(801);
      END_STATE();
    case 586:
      if (lookahead == 'r') ADVANCE(470);
      END_STATE();
    case 587:
      if (lookahead == 'r') ADVANCE(821);
      END_STATE();
    case 588:
      if (lookahead == 'r') ADVANCE(1054);
      END_STATE();
    case 589:
      if (lookahead == 'r') ADVANCE(200);
      END_STATE();
    case 590:
      if (lookahead == 'r') ADVANCE(1060);
      END_STATE();
    case 591:
      if (lookahead == 'r') ADVANCE(97);
      END_STATE();
    case 592:
      if (lookahead == 'r') ADVANCE(1081);
      END_STATE();
    case 593:
      if (lookahead == 'r') ADVANCE(1095);
      END_STATE();
    case 594:
      if (lookahead == 'r') ADVANCE(1090);
      END_STATE();
    case 595:
      if (lookahead == 'r') ADVANCE(93);
      END_STATE();
    case 596:
      if (lookahead == 'r') ADVANCE(1084);
      END_STATE();
    case 597:
      if (lookahead == 'r') ADVANCE(126);
      END_STATE();
    case 598:
      if (lookahead == 'r') ADVANCE(727);
      END_STATE();
    case 599:
      if (lookahead == 'r') ADVANCE(471);
      END_STATE();
    case 600:
      if (lookahead == 'r') ADVANCE(203);
      END_STATE();
    case 601:
      if (lookahead == 'r') ADVANCE(782);
      END_STATE();
    case 602:
      if (lookahead == 'r') ADVANCE(442);
      END_STATE();
    case 603:
      if (lookahead == 'r') ADVANCE(400);
      END_STATE();
    case 604:
      if (lookahead == 'r') ADVANCE(484);
      END_STATE();
    case 605:
      if (lookahead == 'r') ADVANCE(805);
      END_STATE();
    case 606:
      if (lookahead == 'r') ADVANCE(698);
      END_STATE();
    case 607:
      if (lookahead == 'r') ADVANCE(209);
      END_STATE();
    case 608:
      if (lookahead == 'r') ADVANCE(410);
      END_STATE();
    case 609:
      if (lookahead == 'r') ADVANCE(826);
      END_STATE();
    case 610:
      if (lookahead == 'r') ADVANCE(444);
      if (lookahead == 't') ADVANCE(365);
      END_STATE();
    case 611:
      if (lookahead == 'r') ADVANCE(830);
      END_STATE();
    case 612:
      if (lookahead == 'r') ADVANCE(192);
      END_STATE();
    case 613:
      if (lookahead == 'r') ADVANCE(302);
      END_STATE();
    case 614:
      if (lookahead == 'r') ADVANCE(446);
      END_STATE();
    case 615:
      if (lookahead == 'r') ADVANCE(688);
      END_STATE();
    case 616:
      if (lookahead == 'r') ADVANCE(699);
      END_STATE();
    case 617:
      if (lookahead == 'r') ADVANCE(411);
      END_STATE();
    case 618:
      if (lookahead == 'r') ADVANCE(139);
      END_STATE();
    case 619:
      if (lookahead == 'r') ADVANCE(705);
      END_STATE();
    case 620:
      if (lookahead == 'r') ADVANCE(346);
      END_STATE();
    case 621:
      if (lookahead == 'r') ADVANCE(677);
      END_STATE();
    case 622:
      if (lookahead == 'r') ADVANCE(415);
      END_STATE();
    case 623:
      if (lookahead == 'r') ADVANCE(678);
      END_STATE();
    case 624:
      if (lookahead == 'r') ADVANCE(312);
      if (lookahead == 't') ADVANCE(407);
      END_STATE();
    case 625:
      if (lookahead == 'r') ADVANCE(279);
      END_STATE();
    case 626:
      if (lookahead == 'r') ADVANCE(651);
      END_STATE();
    case 627:
      if (lookahead == 'r') ADVANCE(348);
      END_STATE();
    case 628:
      if (lookahead == 'r') ADVANCE(742);
      END_STATE();
    case 629:
      if (lookahead == 'r') ADVANCE(356);
      END_STATE();
    case 630:
      if (lookahead == 'r') ADVANCE(362);
      END_STATE();
    case 631:
      if (lookahead == 'r') ADVANCE(315);
      END_STATE();
    case 632:
      if (lookahead == 'r') ADVANCE(171);
      END_STATE();
    case 633:
      if (lookahead == 'r') ADVANCE(792);
      END_STATE();
    case 634:
      if (lookahead == 'r') ADVANCE(419);
      END_STATE();
    case 635:
      if (lookahead == 'r') ADVANCE(737);
      END_STATE();
    case 636:
      if (lookahead == 'r') ADVANCE(773);
      END_STATE();
    case 637:
      if (lookahead == 'r') ADVANCE(185);
      END_STATE();
    case 638:
      if (lookahead == 'r') ADVANCE(106);
      END_STATE();
    case 639:
      if (lookahead == 'r') ADVANCE(485);
      END_STATE();
    case 640:
      if (lookahead == 'r') ADVANCE(206);
      END_STATE();
    case 641:
      if (lookahead == 'r') ADVANCE(94);
      END_STATE();
    case 642:
      if (lookahead == 's') ADVANCE(396);
      END_STATE();
    case 643:
      if (lookahead == 's') ADVANCE(109);
      END_STATE();
    case 644:
      if (lookahead == 's') ADVANCE(1071);
      END_STATE();
    case 645:
      if (lookahead == 's') ADVANCE(1063);
      END_STATE();
    case 646:
      if (lookahead == 's') ADVANCE(1065);
      END_STATE();
    case 647:
      if (lookahead == 's') ADVANCE(1067);
      END_STATE();
    case 648:
      if (lookahead == 's') ADVANCE(45);
      END_STATE();
    case 649:
      if (lookahead == 's') ADVANCE(78);
      END_STATE();
    case 650:
      if (lookahead == 's') ADVANCE(278);
      END_STATE();
    case 651:
      if (lookahead == 's') ADVANCE(1035);
      END_STATE();
    case 652:
      if (lookahead == 's') ADVANCE(1027);
      END_STATE();
    case 653:
      if (lookahead == 's') ADVANCE(107);
      END_STATE();
    case 654:
      if (lookahead == 's') ADVANCE(105);
      END_STATE();
    case 655:
      if (lookahead == 's') ADVANCE(1101);
      END_STATE();
    case 656:
      if (lookahead == 's') ADVANCE(1089);
      END_STATE();
    case 657:
      if (lookahead == 's') ADVANCE(1120);
      END_STATE();
    case 658:
      if (lookahead == 's') ADVANCE(1119);
      END_STATE();
    case 659:
      if (lookahead == 's') ADVANCE(1121);
      END_STATE();
    case 660:
      if (lookahead == 's') ADVANCE(1103);
      END_STATE();
    case 661:
      if (lookahead == 's') ADVANCE(1115);
      END_STATE();
    case 662:
      if (lookahead == 's') ADVANCE(1108);
      END_STATE();
    case 663:
      if (lookahead == 's') ADVANCE(687);
      END_STATE();
    case 664:
      if (lookahead == 's') ADVANCE(110);
      END_STATE();
    case 665:
      if (lookahead == 's') ADVANCE(111);
      END_STATE();
    case 666:
      if (lookahead == 's') ADVANCE(526);
      END_STATE();
    case 667:
      if (lookahead == 's') ADVANCE(263);
      END_STATE();
    case 668:
      if (lookahead == 's') ADVANCE(112);
      END_STATE();
    case 669:
      if (lookahead == 's') ADVANCE(114);
      END_STATE();
    case 670:
      if (lookahead == 's') ADVANCE(43);
      END_STATE();
    case 671:
      if (lookahead == 's') ADVANCE(266);
      END_STATE();
    case 672:
      if (lookahead == 's') ADVANCE(116);
      END_STATE();
    case 673:
      if (lookahead == 's') ADVANCE(403);
      END_STATE();
    case 674:
      if (lookahead == 's') ADVANCE(534);
      END_STATE();
    case 675:
      if (lookahead == 's') ADVANCE(700);
      END_STATE();
    case 676:
      if (lookahead == 's') ADVANCE(308);
      END_STATE();
    case 677:
      if (lookahead == 's') ADVANCE(702);
      END_STATE();
    case 678:
      if (lookahead == 's') ADVANCE(337);
      END_STATE();
    case 679:
      if (lookahead == 's') ADVANCE(706);
      END_STATE();
    case 680:
      if (lookahead == 's') ADVANCE(681);
      END_STATE();
    case 681:
      if (lookahead == 's') ADVANCE(317);
      END_STATE();
    case 682:
      if (lookahead == 's') ADVANCE(696);
      END_STATE();
    case 683:
      if (lookahead == 's') ADVANCE(654);
      END_STATE();
    case 684:
      if (lookahead == 's') ADVANCE(718);
      END_STATE();
    case 685:
      if (lookahead == 's') ADVANCE(292);
      END_STATE();
    case 686:
      if (lookahead == 's') ADVANCE(277);
      END_STATE();
    case 687:
      if (lookahead == 's') ADVANCE(304);
      END_STATE();
    case 688:
      if (lookahead == 's') ADVANCE(405);
      END_STATE();
    case 689:
      if (lookahead == 's') ADVANCE(347);
      END_STATE();
    case 690:
      if (lookahead == 's') ADVANCE(756);
      END_STATE();
    case 691:
      if (lookahead == 's') ADVANCE(214);
      END_STATE();
    case 692:
      if (lookahead == 's') ADVANCE(350);
      END_STATE();
    case 693:
      if (lookahead == 's') ADVANCE(224);
      END_STATE();
    case 694:
      if (lookahead == 's') ADVANCE(757);
      END_STATE();
    case 695:
      if (lookahead == 's') ADVANCE(108);
      END_STATE();
    case 696:
      if (lookahead == 's') ADVANCE(797);
      END_STATE();
    case 697:
      if (lookahead == 't') ADVANCE(389);
      END_STATE();
    case 698:
      if (lookahead == 't') ADVANCE(95);
      END_STATE();
    case 699:
      if (lookahead == 't') ADVANCE(995);
      END_STATE();
    case 700:
      if (lookahead == 't') ADVANCE(1403);
      END_STATE();
    case 701:
      if (lookahead == 't') ADVANCE(1409);
      END_STATE();
    case 702:
      if (lookahead == 't') ADVANCE(1402);
      END_STATE();
    case 703:
      if (lookahead == 't') ADVANCE(1426);
      END_STATE();
    case 704:
      if (lookahead == 't') ADVANCE(1412);
      END_STATE();
    case 705:
      if (lookahead == 't') ADVANCE(994);
      END_STATE();
    case 706:
      if (lookahead == 't') ADVANCE(1011);
      END_STATE();
    case 707:
      if (lookahead == 't') ADVANCE(1421);
      END_STATE();
    case 708:
      if (lookahead == 't') ADVANCE(1056);
      END_STATE();
    case 709:
      if (lookahead == 't') ADVANCE(993);
      END_STATE();
    case 710:
      if (lookahead == 't') ADVANCE(1036);
      END_STATE();
    case 711:
      if (lookahead == 't') ADVANCE(1404);
      END_STATE();
    case 712:
      if (lookahead == 't') ADVANCE(429);
      END_STATE();
    case 713:
      if (lookahead == 't') ADVANCE(1418);
      END_STATE();
    case 714:
      if (lookahead == 't') ADVANCE(1059);
      END_STATE();
    case 715:
      if (lookahead == 't') ADVANCE(1041);
      END_STATE();
    case 716:
      if (lookahead == 't') ADVANCE(1031);
      END_STATE();
    case 717:
      if (lookahead == 't') ADVANCE(1085);
      END_STATE();
    case 718:
      if (lookahead == 't') ADVANCE(1087);
      END_STATE();
    case 719:
      if (lookahead == 't') ADVANCE(1080);
      END_STATE();
    case 720:
      if (lookahead == 't') ADVANCE(1091);
      END_STATE();
    case 721:
      if (lookahead == 't') ADVANCE(1088);
      END_STATE();
    case 722:
      if (lookahead == 't') ADVANCE(401);
      END_STATE();
    case 723:
      if (lookahead == 't') ADVANCE(382);
      END_STATE();
    case 724:
      if (lookahead == 't') ADVANCE(90);
      END_STATE();
    case 725:
      if (lookahead == 't') ADVANCE(778);
      END_STATE();
    case 726:
      if (lookahead == 't') ADVANCE(383);
      END_STATE();
    case 727:
      if (lookahead == 't') ADVANCE(643);
      END_STATE();
    case 728:
      if (lookahead == 't') ADVANCE(398);
      END_STATE();
    case 729:
      if (lookahead == 't') ADVANCE(388);
      END_STATE();
    case 730:
      if (lookahead == 't') ADVANCE(138);
      END_STATE();
    case 731:
      if (lookahead == 't') ADVANCE(384);
      if (lookahead == 'u') ADVANCE(452);
      END_STATE();
    case 732:
      if (lookahead == 't') ADVANCE(44);
      END_STATE();
    case 733:
      if (lookahead == 't') ADVANCE(788);
      END_STATE();
    case 734:
      if (lookahead == 't') ADVANCE(603);
      END_STATE();
    case 735:
      if (lookahead == 't') ADVANCE(47);
      END_STATE();
    case 736:
      if (lookahead == 't') ADVANCE(580);
      END_STATE();
    case 737:
      if (lookahead == 't') ADVANCE(397);
      END_STATE();
    case 738:
      if (lookahead == 't') ADVANCE(386);
      END_STATE();
    case 739:
      if (lookahead == 't') ADVANCE(478);
      END_STATE();
    case 740:
      if (lookahead == 't') ADVANCE(827);
      END_STATE();
    case 741:
      if (lookahead == 't') ADVANCE(387);
      END_STATE();
    case 742:
      if (lookahead == 't') ADVANCE(50);
      END_STATE();
    case 743:
      if (lookahead == 't') ADVANCE(211);
      END_STATE();
    case 744:
      if (lookahead == 't') ADVANCE(829);
      END_STATE();
    case 745:
      if (lookahead == 't') ADVANCE(269);
      END_STATE();
    case 746:
      if (lookahead == 't') ADVANCE(272);
      if (lookahead == 'y') ADVANCE(649);
      END_STATE();
    case 747:
      if (lookahead == 't') ADVANCE(434);
      END_STATE();
    case 748:
      if (lookahead == 't') ADVANCE(647);
      END_STATE();
    case 749:
      if (lookahead == 't') ADVANCE(617);
      END_STATE();
    case 750:
      if (lookahead == 't') ADVANCE(158);
      END_STATE();
    case 751:
      if (lookahead == 't') ADVANCE(274);
      END_STATE();
    case 752:
      if (lookahead == 't') ADVANCE(633);
      END_STATE();
    case 753:
      if (lookahead == 't') ADVANCE(622);
      END_STATE();
    case 754:
      if (lookahead == 't') ADVANCE(281);
      END_STATE();
    case 755:
      if (lookahead == 't') ADVANCE(285);
      END_STATE();
    case 756:
      if (lookahead == 't') ADVANCE(656);
      END_STATE();
    case 757:
      if (lookahead == 't') ADVANCE(319);
      END_STATE();
    case 758:
      if (lookahead == 't') ADVANCE(297);
      END_STATE();
    case 759:
      if (lookahead == 't') ADVANCE(316);
      END_STATE();
    case 760:
      if (lookahead == 't') ADVANCE(298);
      END_STATE();
    case 761:
      if (lookahead == 't') ADVANCE(299);
      END_STATE();
    case 762:
      if (lookahead == 't') ADVANCE(300);
      END_STATE();
    case 763:
      if (lookahead == 't') ADVANCE(325);
      END_STATE();
    case 764:
      if (lookahead == 't') ADVANCE(406);
      END_STATE();
    case 765:
      if (lookahead == 't') ADVANCE(327);
      END_STATE();
    case 766:
      if (lookahead == 't') ADVANCE(414);
      END_STATE();
    case 767:
      if (lookahead == 't') ADVANCE(416);
      END_STATE();
    case 768:
      if (lookahead == 't') ADVANCE(420);
      END_STATE();
    case 769:
      if (lookahead == 't') ADVANCE(421);
      END_STATE();
    case 770:
      if (lookahead == 't') ADVANCE(334);
      END_STATE();
    case 771:
      if (lookahead == 't') ADVANCE(336);
      END_STATE();
    case 772:
      if (lookahead == 't') ADVANCE(339);
      END_STATE();
    case 773:
      if (lookahead == 't') ADVANCE(695);
      END_STATE();
    case 774:
      if (lookahead == 'u') ADVANCE(466);
      END_STATE();
    case 775:
      if (lookahead == 'u') ADVANCE(301);
      END_STATE();
    case 776:
      if (lookahead == 'u') ADVANCE(201);
      END_STATE();
    case 777:
      if (lookahead == 'u') ADVANCE(834);
      if (lookahead == '#' ||
          lookahead == '\\' ||
          lookahead == '`' ||
          lookahead == 'b' ||
          lookahead == 'f') ADVANCE(1343);
      END_STATE();
    case 778:
      if (lookahead == 'u') ADVANCE(631);
      END_STATE();
    case 779:
      if (lookahead == 'u') ADVANCE(452);
      END_STATE();
    case 780:
      if (lookahead == 'u') ADVANCE(697);
      END_STATE();
    case 781:
      if (lookahead == 'u') ADVANCE(374);
      END_STATE();
    case 782:
      if (lookahead == 'u') ADVANCE(265);
      END_STATE();
    case 783:
      if (lookahead == 'u') ADVANCE(502);
      END_STATE();
    case 784:
      if (lookahead == 'u') ADVANCE(612);
      END_STATE();
    case 785:
      if (lookahead == 'u') ADVANCE(260);
      END_STATE();
    case 786:
      if (lookahead == 'u') ADVANCE(475);
      END_STATE();
    case 787:
      if (lookahead == 'u') ADVANCE(736);
      END_STATE();
    case 788:
      if (lookahead == 'u') ADVANCE(645);
      END_STATE();
    case 789:
      if (lookahead == 'u') ADVANCE(169);
      END_STATE();
    case 790:
      if (lookahead == 'u') ADVANCE(412);
      END_STATE();
    case 791:
      if (lookahead == 'u') ADVANCE(708);
      END_STATE();
    case 792:
      if (lookahead == 'u') ADVANCE(694);
      END_STATE();
    case 793:
      if (lookahead == 'u') ADVANCE(715);
      END_STATE();
    case 794:
      if (lookahead == 'u') ADVANCE(625);
      END_STATE();
    case 795:
      if (lookahead == 'u') ADVANCE(507);
      END_STATE();
    case 796:
      if (lookahead == 'u') ADVANCE(330);
      END_STATE();
    case 797:
      if (lookahead == 'u') ADVANCE(338);
      END_STATE();
    case 798:
      if (lookahead == 'u') ADVANCE(486);
      END_STATE();
    case 799:
      if (lookahead == 'u') ADVANCE(181);
      END_STATE();
    case 800:
      if (lookahead == 'u') ADVANCE(184);
      END_STATE();
    case 801:
      if (lookahead == 'u') ADVANCE(186);
      END_STATE();
    case 802:
      if (lookahead == 'v') ADVANCE(60);
      END_STATE();
    case 803:
      if (lookahead == 'v') ADVANCE(63);
      END_STATE();
    case 804:
      if (lookahead == 'v') ADVANCE(62);
      END_STATE();
    case 805:
      if (lookahead == 'v') ADVANCE(150);
      END_STATE();
    case 806:
      if (lookahead == 'v') ADVANCE(276);
      END_STATE();
    case 807:
      if (lookahead == 'v') ADVANCE(332);
      END_STATE();
    case 808:
      if (lookahead == 'w') ADVANCE(198);
      END_STATE();
    case 809:
      if (lookahead == 'w') ADVANCE(1415);
      END_STATE();
    case 810:
      if (lookahead == 'w') ADVANCE(1416);
      END_STATE();
    case 811:
      if (lookahead == 'w') ADVANCE(648);
      END_STATE();
    case 812:
      if (lookahead == 'x') ADVANCE(36);
      END_STATE();
    case 813:
      if (lookahead == 'x') ADVANCE(1077);
      END_STATE();
    case 814:
      if (lookahead == 'x') ADVANCE(1405);
      END_STATE();
    case 815:
      if (lookahead == 'x') ADVANCE(1425);
      END_STATE();
    case 816:
      if (lookahead == 'x') ADVANCE(40);
      END_STATE();
    case 817:
      if (lookahead == 'x') ADVANCE(825);
      END_STATE();
    case 818:
      if (lookahead == 'x') ADVANCE(48);
      END_STATE();
    case 819:
      if (lookahead == 'x') ADVANCE(581);
      END_STATE();
    case 820:
      if (lookahead == 'x') ADVANCE(46);
      END_STATE();
    case 821:
      if (lookahead == 'y') ADVANCE(103);
      END_STATE();
    case 822:
      if (lookahead == 'y') ADVANCE(1069);
      END_STATE();
    case 823:
      if (lookahead == 'y') ADVANCE(1052);
      END_STATE();
    case 824:
      if (lookahead == 'y') ADVANCE(1042);
      END_STATE();
    case 825:
      if (lookahead == 'y') ADVANCE(1058);
      END_STATE();
    case 826:
      if (lookahead == 'y') ADVANCE(1037);
      END_STATE();
    case 827:
      if (lookahead == 'y') ADVANCE(1038);
      END_STATE();
    case 828:
      if (lookahead == 'y') ADVANCE(1057);
      END_STATE();
    case 829:
      if (lookahead == 'y') ADVANCE(1097);
      END_STATE();
    case 830:
      if (lookahead == 'y') ADVANCE(101);
      END_STATE();
    case 831:
      if (lookahead == 'y') ADVANCE(765);
      END_STATE();
    case 832:
      if (lookahead == '{') ADVANCE(1393);
      END_STATE();
    case 833:
      if (lookahead == '{') ADVANCE(1147);
      END_STATE();
    case 834:
      if (lookahead == '{') ADVANCE(846);
      END_STATE();
    case 835:
      if (lookahead == '}') ADVANCE(1148);
      END_STATE();
    case 836:
      if (lookahead == '}') ADVANCE(1343);
      END_STATE();
    case 837:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(840);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1388);
      END_STATE();
    case 838:
      if (lookahead == '"' ||
          lookahead == '#') ADVANCE(1323);
      END_STATE();
    case 839:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1387);
      END_STATE();
    case 840:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1388);
      END_STATE();
    case 841:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1427);
      END_STATE();
    case 842:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1428);
      END_STATE();
    case 843:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(836);
      END_STATE();
    case 844:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(843);
      END_STATE();
    case 845:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(844);
      END_STATE();
    case 846:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(845);
      END_STATE();
    case 847:
      if (eof) ADVANCE(854);
      ADVANCE_MAP(
        '\n', 855,
        '"', 1079,
        '#', 1437,
        '-', 54,
        '0', 1385,
        '<', 1114,
        'C', 938,
        'D', 906,
        'G', 907,
        'H', 908,
        'L', 919,
        'O', 942,
        'P', 897,
        'T', 944,
        'U', 931,
        'V', 920,
        '[', 80,
        '`', 1339,
        'a', 811,
        'b', 177,
        'c', 132,
        'd', 120,
        'f', 123,
        'h', 262,
        'i', 505,
        'j', 666,
        'k', 305,
        'l', 156,
        'm', 128,
        'n', 270,
        'o', 787,
        'p', 149,
        'r', 271,
        's', 439,
        't', 523,
        'u', 501,
        'v', 146,
        'x', 578,
        '{', 1008,
      );
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1386);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(955);
      if (set_contains(extras_character_set_2, 9, lookahead)) SKIP(847);
      END_STATE();
    case 848:
      if (eof) ADVANCE(854);
      ADVANCE_MAP(
        '\n', 855,
        '"', 1079,
        '#', 1437,
        '-', 54,
        '0', 1385,
        '<', 1114,
        'C', 938,
        'D', 906,
        'G', 907,
        'H', 908,
        'L', 919,
        'O', 942,
        'P', 897,
        'T', 944,
        'U', 931,
        'V', 920,
        '[', 80,
        '`', 1339,
        'b', 143,
        'f', 124,
        'h', 320,
        'n', 779,
        't', 601,
        '{', 1008,
      );
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1386);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(955);
      if (set_contains(extras_character_set_2, 9, lookahead)) SKIP(848);
      END_STATE();
    case 849:
      if (eof) ADVANCE(854);
      ADVANCE_MAP(
        '\n', 855,
        '"', 1079,
        '#', 1437,
        '-', 54,
        '0', 1385,
        '<', 1114,
        'C', 938,
        'D', 906,
        'G', 907,
        'H', 909,
        'L', 919,
        'O', 942,
        'P', 897,
        'T', 944,
        'U', 931,
        'V', 920,
        '[', 77,
        '`', 1339,
        'b', 144,
        'c', 322,
        'd', 784,
        'f', 124,
        'h', 261,
        'i', 566,
        'j', 666,
        'm', 239,
        'n', 779,
        'r', 118,
        's', 390,
        't', 601,
        'u', 602,
        'v', 145,
        'x', 578,
        '{', 1008,
      );
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1386);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(955);
      if (set_contains(extras_character_set_2, 9, lookahead)) SKIP(849);
      END_STATE();
    case 850:
      if (eof) ADVANCE(854);
      ADVANCE_MAP(
        '\n', 855,
        '"', 1079,
        '#', 1437,
        '-', 54,
        '0', 1385,
        '<', 1114,
        'C', 938,
        'D', 906,
        'G', 907,
        'H', 909,
        'L', 919,
        'O', 942,
        'P', 897,
        'T', 944,
        'U', 931,
        'V', 920,
        '[', 77,
        '`', 1339,
        'b', 143,
        'f', 124,
        'h', 320,
        'n', 779,
        't', 601,
        '{', 1008,
      );
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1386);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(955);
      if (set_contains(extras_character_set_2, 9, lookahead)) SKIP(850);
      END_STATE();
    case 851:
      if (eof) ADVANCE(854);
      ADVANCE_MAP(
        '\n', 855,
        '"', 1079,
        '#', 1437,
        '-', 1155,
        '0', 1154,
        '<', 1114,
        'C', 1204,
        'D', 1172,
        'G', 1173,
        'H', 1174,
        'L', 1187,
        'O', 1210,
        'P', 1161,
        'T', 1213,
        'U', 1198,
        'V', 1186,
        '[', 1163,
        '\\', 838,
        '`', 1339,
        'b', 1233,
        'f', 1234,
        'h', 1245,
        'n', 1311,
        't', 1284,
        '{', 1009,
      );
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1153);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1321);
      if (set_contains(extras_character_set_2, 9, lookahead)) SKIP(848);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1322);
      END_STATE();
    case 852:
      if (eof) ADVANCE(854);
      ADVANCE_MAP(
        '\n', 855,
        '"', 1079,
        '#', 1437,
        '-', 1155,
        '0', 1154,
        '<', 1114,
        'C', 1204,
        'D', 1172,
        'G', 1173,
        'H', 1175,
        'L', 1187,
        'O', 1210,
        'P', 1161,
        'T', 1213,
        'U', 1198,
        'V', 1186,
        '[', 1162,
        '\\', 838,
        '`', 1339,
        'b', 1233,
        'f', 1234,
        'h', 1245,
        'n', 1311,
        't', 1284,
        '{', 1009,
      );
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1153);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1321);
      if (set_contains(extras_character_set_2, 9, lookahead)) SKIP(850);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1322);
      END_STATE();
    case 853:
      if (eof) ADVANCE(854);
      ADVANCE_MAP(
        '!', 73,
        '"', 1079,
        '#', 1437,
        ',', 1379,
        '-', 841,
        '/', 1438,
        ':', 987,
        ';', 991,
        '<', 1113,
        '=', 74,
        '>', 1107,
        '?', 75,
        'E', 819,
        'I', 682,
        'S', 349,
        ']', 1380,
        '`', 1339,
        'b', 178,
        'c', 393,
        'd', 121,
        'e', 499,
        'f', 123,
        'g', 629,
        'h', 321,
        'i', 500,
        'j', 666,
        'l', 155,
        'm', 165,
        'n', 543,
        'r', 296,
        's', 572,
        't', 523,
        'u', 610,
        'v', 363,
        'x', 578,
        '{', 1008,
        '}', 835,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1427);
      if (set_contains(extras_character_set_2, 9, lookahead)) SKIP(853);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(855);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(856);
      if (set_contains(extras_character_set_2, 9, lookahead)) ADVANCE(1325);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(857);
      if ((set_contains(extras_character_set_2, 9, lookahead)) &&
          lookahead != ' ') ADVANCE(1374);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(858);
      if ((set_contains(extras_character_set_2, 9, lookahead)) &&
          lookahead != '\r') ADVANCE(996);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(859);
      if (set_contains(extras_character_set_2, 9, lookahead)) ADVANCE(1326);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(860);
      if (set_contains(extras_character_set_2, 9, lookahead)) ADVANCE(1327);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(861);
      if (set_contains(extras_character_set_2, 9, lookahead)) ADVANCE(1328);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(862);
      if (set_contains(extras_character_set_2, 9, lookahead)) ADVANCE(1370);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(863);
      if (set_contains(extras_character_set_2, 9, lookahead)) ADVANCE(1350);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(anon_sym_GET);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(955);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(anon_sym_GET);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1321);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1322);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(anon_sym_HEAD);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(955);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(anon_sym_HEAD);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1321);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1322);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(anon_sym_POST);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(955);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(anon_sym_POST);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1321);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1322);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(anon_sym_PUT);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(955);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(anon_sym_PUT);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1321);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1322);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(anon_sym_DELETE);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(955);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(anon_sym_DELETE);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1321);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1322);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(anon_sym_CONNECT);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(955);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(anon_sym_CONNECT);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1321);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1322);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(anon_sym_OPTIONS);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(955);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(anon_sym_OPTIONS);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1321);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1322);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(anon_sym_TRACE);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(955);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(anon_sym_TRACE);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1321);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1322);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(anon_sym_PATCH);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(955);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(anon_sym_PATCH);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1321);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1322);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(anon_sym_LINK);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(955);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(anon_sym_LINK);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1321);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1322);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(anon_sym_UNLINK);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(955);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(anon_sym_UNLINK);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1321);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1322);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(anon_sym_PURGE);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(955);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(anon_sym_PURGE);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1321);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1322);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(anon_sym_LOCK);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(955);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(anon_sym_LOCK);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1321);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1322);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(anon_sym_UNLOCK);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(955);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(anon_sym_UNLOCK);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1321);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1322);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(anon_sym_PROPFIND);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(955);
      END_STATE();
    case 893:
      ACCEPT_TOKEN(anon_sym_PROPFIND);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1321);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1322);
      END_STATE();
    case 894:
      ACCEPT_TOKEN(anon_sym_VIEW);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(955);
      END_STATE();
    case 895:
      ACCEPT_TOKEN(anon_sym_VIEW);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1321);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1322);
      END_STATE();
    case 896:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'A') ADVANCE(904);
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(955);
      END_STATE();
    case 897:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'A') ADVANCE(951);
      if (lookahead == 'O') ADVANCE(946);
      if (lookahead == 'R') ADVANCE(937);
      if (lookahead == 'U') ADVANCE(943);
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(955);
      END_STATE();
    case 898:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'A') ADVANCE(903);
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(955);
      END_STATE();
    case 899:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'C') ADVANCE(918);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(955);
      END_STATE();
    case 900:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'C') ADVANCE(925);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(955);
      END_STATE();
    case 901:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'C') ADVANCE(927);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(955);
      END_STATE();
    case 902:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'C') ADVANCE(949);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(955);
      END_STATE();
    case 903:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'C') ADVANCE(912);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(955);
      END_STATE();
    case 904:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'D') ADVANCE(866);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(955);
      END_STATE();
    case 905:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'D') ADVANCE(892);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(955);
      END_STATE();
    case 906:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'E') ADVANCE(928);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(955);
      END_STATE();
    case 907:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'E') ADVANCE(947);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(955);
      END_STATE();
    case 908:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'E') ADVANCE(896);
      if (lookahead == 'T') ADVANCE(952);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(955);
      END_STATE();
    case 909:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'E') ADVANCE(896);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(955);
      END_STATE();
    case 910:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'E') ADVANCE(954);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(955);
      END_STATE();
    case 911:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'E') ADVANCE(886);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(955);
      END_STATE();
    case 912:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'E') ADVANCE(878);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(955);
      END_STATE();
    case 913:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'E') ADVANCE(872);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(955);
      END_STATE();
    case 914:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'E') ADVANCE(902);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(955);
      END_STATE();
    case 915:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'E') ADVANCE(953);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(955);
      END_STATE();
    case 916:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'F') ADVANCE(922);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(955);
      END_STATE();
    case 917:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'G') ADVANCE(911);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(955);
      END_STATE();
    case 918:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'H') ADVANCE(880);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(955);
      END_STATE();
    case 919:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'I') ADVANCE(930);
      if (lookahead == 'O') ADVANCE(900);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(955);
      END_STATE();
    case 920:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'I') ADVANCE(910);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(955);
      END_STATE();
    case 921:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'I') ADVANCE(934);
      if (lookahead == 'O') ADVANCE(901);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(955);
      END_STATE();
    case 922:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'I') ADVANCE(933);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(955);
      END_STATE();
    case 923:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'I') ADVANCE(939);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(955);
      END_STATE();
    case 924:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'K') ADVANCE(882);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(955);
      END_STATE();
    case 925:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'K') ADVANCE(888);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(955);
      END_STATE();
    case 926:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'K') ADVANCE(884);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(955);
      END_STATE();
    case 927:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'K') ADVANCE(890);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(955);
      END_STATE();
    case 928:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'L') ADVANCE(915);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(955);
      END_STATE();
    case 929:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'L') ADVANCE(921);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(955);
      END_STATE();
    case 930:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'N') ADVANCE(924);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(955);
      END_STATE();
    case 931:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'N') ADVANCE(929);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(955);
      END_STATE();
    case 932:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'N') ADVANCE(945);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(955);
      END_STATE();
    case 933:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'N') ADVANCE(905);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(955);
      END_STATE();
    case 934:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'N') ADVANCE(926);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(955);
      END_STATE();
    case 935:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'N') ADVANCE(936);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(955);
      END_STATE();
    case 936:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'N') ADVANCE(914);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(955);
      END_STATE();
    case 937:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'O') ADVANCE(940);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(955);
      END_STATE();
    case 938:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'O') ADVANCE(935);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(955);
      END_STATE();
    case 939:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'O') ADVANCE(932);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(955);
      END_STATE();
    case 940:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'P') ADVANCE(916);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(955);
      END_STATE();
    case 941:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'P') ADVANCE(961);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(955);
      END_STATE();
    case 942:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'P') ADVANCE(950);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(955);
      END_STATE();
    case 943:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'R') ADVANCE(917);
      if (lookahead == 'T') ADVANCE(870);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(955);
      END_STATE();
    case 944:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'R') ADVANCE(898);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(955);
      END_STATE();
    case 945:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'S') ADVANCE(876);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(955);
      END_STATE();
    case 946:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'S') ADVANCE(948);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(955);
      END_STATE();
    case 947:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'T') ADVANCE(864);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(955);
      END_STATE();
    case 948:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'T') ADVANCE(868);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(955);
      END_STATE();
    case 949:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'T') ADVANCE(874);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(955);
      END_STATE();
    case 950:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'T') ADVANCE(923);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(955);
      END_STATE();
    case 951:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'T') ADVANCE(899);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(955);
      END_STATE();
    case 952:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'T') ADVANCE(941);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(955);
      END_STATE();
    case 953:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'T') ADVANCE(913);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(955);
      END_STATE();
    case 954:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'W') ADVANCE(894);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(955);
      END_STATE();
    case 955:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(955);
      END_STATE();
    case 956:
      ACCEPT_TOKEN(anon_sym_HTTP_SLASH1_DOT0);
      END_STATE();
    case 957:
      ACCEPT_TOKEN(anon_sym_HTTP_SLASH1_DOT1);
      END_STATE();
    case 958:
      ACCEPT_TOKEN(anon_sym_HTTP_SLASH2);
      END_STATE();
    case 959:
      ACCEPT_TOKEN(anon_sym_HTTP_SLASH3);
      END_STATE();
    case 960:
      ACCEPT_TOKEN(anon_sym_HTTP_SLASH_STAR);
      END_STATE();
    case 961:
      ACCEPT_TOKEN(anon_sym_HTTP);
      if (lookahead == '/') ADVANCE(35);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(955);
      END_STATE();
    case 962:
      ACCEPT_TOKEN(anon_sym_HTTP);
      if (lookahead == '/') ADVANCE(35);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1321);
      if (lookahead == '$' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1322);
      END_STATE();
    case 963:
      ACCEPT_TOKEN(aux_sym_status_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(963);
      END_STATE();
    case 964:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 965:
      ACCEPT_TOKEN(anon_sym_LBRACKBasicAuth_RBRACK);
      END_STATE();
    case 966:
      ACCEPT_TOKEN(anon_sym_LBRACKBasicAuth_RBRACK);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1322);
      END_STATE();
    case 967:
      ACCEPT_TOKEN(anon_sym_LBRACKQuery_RBRACK);
      END_STATE();
    case 968:
      ACCEPT_TOKEN(anon_sym_LBRACKQuery_RBRACK);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1322);
      END_STATE();
    case 969:
      ACCEPT_TOKEN(anon_sym_LBRACKQueryStringParams_RBRACK);
      END_STATE();
    case 970:
      ACCEPT_TOKEN(anon_sym_LBRACKQueryStringParams_RBRACK);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1322);
      END_STATE();
    case 971:
      ACCEPT_TOKEN(anon_sym_LBRACKForm_RBRACK);
      END_STATE();
    case 972:
      ACCEPT_TOKEN(anon_sym_LBRACKForm_RBRACK);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1322);
      END_STATE();
    case 973:
      ACCEPT_TOKEN(anon_sym_LBRACKFormParams_RBRACK);
      END_STATE();
    case 974:
      ACCEPT_TOKEN(anon_sym_LBRACKFormParams_RBRACK);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1322);
      END_STATE();
    case 975:
      ACCEPT_TOKEN(anon_sym_LBRACKMultipart_RBRACK);
      END_STATE();
    case 976:
      ACCEPT_TOKEN(anon_sym_LBRACKMultipart_RBRACK);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1322);
      END_STATE();
    case 977:
      ACCEPT_TOKEN(anon_sym_LBRACKMultipartFormData_RBRACK);
      END_STATE();
    case 978:
      ACCEPT_TOKEN(anon_sym_LBRACKMultipartFormData_RBRACK);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1322);
      END_STATE();
    case 979:
      ACCEPT_TOKEN(anon_sym_LBRACKCookies_RBRACK);
      END_STATE();
    case 980:
      ACCEPT_TOKEN(anon_sym_LBRACKCookies_RBRACK);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1322);
      END_STATE();
    case 981:
      ACCEPT_TOKEN(anon_sym_LBRACKCaptures_RBRACK);
      END_STATE();
    case 982:
      ACCEPT_TOKEN(anon_sym_LBRACKCaptures_RBRACK);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1322);
      END_STATE();
    case 983:
      ACCEPT_TOKEN(anon_sym_LBRACKAsserts_RBRACK);
      END_STATE();
    case 984:
      ACCEPT_TOKEN(anon_sym_LBRACKAsserts_RBRACK);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1322);
      END_STATE();
    case 985:
      ACCEPT_TOKEN(anon_sym_LBRACKOptions_RBRACK);
      END_STATE();
    case 986:
      ACCEPT_TOKEN(anon_sym_LBRACKOptions_RBRACK);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1322);
      END_STATE();
    case 987:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 988:
      ACCEPT_TOKEN(anon_sym_null);
      END_STATE();
    case 989:
      ACCEPT_TOKEN(anon_sym_null);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1322);
      END_STATE();
    case 990:
      ACCEPT_TOKEN(anon_sym_file_COMMA);
      END_STATE();
    case 991:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 992:
      ACCEPT_TOKEN(aux_sym_file_value_token1);
      if (lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 993:
      ACCEPT_TOKEN(anon_sym_redact);
      END_STATE();
    case 994:
      ACCEPT_TOKEN(anon_sym_cacert);
      END_STATE();
    case 995:
      ACCEPT_TOKEN(anon_sym_cert);
      END_STATE();
    case 996:
      ACCEPT_TOKEN(sym_filename_password_text);
      if (lookahead == '\n') ADVANCE(858);
      if ((set_contains(extras_character_set_2, 9, lookahead)) &&
          lookahead != '\r') ADVANCE(996);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(998);
      END_STATE();
    case 997:
      ACCEPT_TOKEN(sym_filename_password_text);
      if ((set_contains(extras_character_set_1, 10, lookahead)) &&
          lookahead != '\r') ADVANCE(997);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(998);
      END_STATE();
    case 998:
      ACCEPT_TOKEN(sym_filename_password_text);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(998);
      END_STATE();
    case 999:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 1000:
      ACCEPT_TOKEN(anon_sym_b);
      END_STATE();
    case 1001:
      ACCEPT_TOKEN(anon_sym_f);
      END_STATE();
    case 1002:
      ACCEPT_TOKEN(anon_sym_n);
      END_STATE();
    case 1003:
      ACCEPT_TOKEN(anon_sym_r);
      END_STATE();
    case 1004:
      ACCEPT_TOKEN(anon_sym_t);
      END_STATE();
    case 1005:
      ACCEPT_TOKEN(anon_sym_u);
      END_STATE();
    case 1006:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1437);
      END_STATE();
    case 1007:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 1008:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '{') ADVANCE(1393);
      END_STATE();
    case 1009:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '{') ADVANCE(1147);
      END_STATE();
    case 1010:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 1011:
      ACCEPT_TOKEN(anon_sym_digest);
      END_STATE();
    case 1012:
      ACCEPT_TOKEN(anon_sym_http1_DOT1);
      END_STATE();
    case 1013:
      ACCEPT_TOKEN(anon_sym_negotiate);
      END_STATE();
    case 1014:
      ACCEPT_TOKEN(anon_sym_ntlm);
      END_STATE();
    case 1015:
      ACCEPT_TOKEN(anon_sym_compressed);
      END_STATE();
    case 1016:
      ACCEPT_TOKEN(anon_sym_location);
      END_STATE();
    case 1017:
      ACCEPT_TOKEN(anon_sym_location);
      if (lookahead == '-') ADVANCE(752);
      END_STATE();
    case 1018:
      ACCEPT_TOKEN(anon_sym_location_DASHtrusted);
      END_STATE();
    case 1019:
      ACCEPT_TOKEN(anon_sym_http1_DOT0);
      END_STATE();
    case 1020:
      ACCEPT_TOKEN(anon_sym_http2);
      END_STATE();
    case 1021:
      ACCEPT_TOKEN(anon_sym_http3);
      END_STATE();
    case 1022:
      ACCEPT_TOKEN(anon_sym_insecure);
      END_STATE();
    case 1023:
      ACCEPT_TOKEN(anon_sym_ipv4);
      END_STATE();
    case 1024:
      ACCEPT_TOKEN(anon_sym_ipv6);
      END_STATE();
    case 1025:
      ACCEPT_TOKEN(anon_sym_netrc);
      if (lookahead == '-') ADVANCE(367);
      END_STATE();
    case 1026:
      ACCEPT_TOKEN(anon_sym_netrc_DASHoptional);
      END_STATE();
    case 1027:
      ACCEPT_TOKEN(anon_sym_path_DASHas_DASHis);
      END_STATE();
    case 1028:
      ACCEPT_TOKEN(anon_sym_skip);
      END_STATE();
    case 1029:
      ACCEPT_TOKEN(anon_sym_verbose);
      END_STATE();
    case 1030:
      ACCEPT_TOKEN(anon_sym_very_DASHverbose);
      END_STATE();
    case 1031:
      ACCEPT_TOKEN(anon_sym_retry_DASHmax_DASHcount);
      END_STATE();
    case 1032:
      ACCEPT_TOKEN(anon_sym_limit_DASHrate);
      END_STATE();
    case 1033:
      ACCEPT_TOKEN(aux_sym_count_option_token1);
      END_STATE();
    case 1034:
      ACCEPT_TOKEN(aux_sym_count_option_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1034);
      END_STATE();
    case 1035:
      ACCEPT_TOKEN(anon_sym_max_DASHredirs);
      END_STATE();
    case 1036:
      ACCEPT_TOKEN(anon_sym_repeat);
      END_STATE();
    case 1037:
      ACCEPT_TOKEN(anon_sym_retry);
      if (lookahead == '-') ADVANCE(431);
      END_STATE();
    case 1038:
      ACCEPT_TOKEN(anon_sym_verbosity);
      END_STATE();
    case 1039:
      ACCEPT_TOKEN(anon_sym_brief);
      END_STATE();
    case 1040:
      ACCEPT_TOKEN(anon_sym_debug);
      END_STATE();
    case 1041:
      ACCEPT_TOKEN(anon_sym_connect_DASHtimeout);
      END_STATE();
    case 1042:
      ACCEPT_TOKEN(anon_sym_delay);
      END_STATE();
    case 1043:
      ACCEPT_TOKEN(anon_sym_retry_DASHinterval);
      END_STATE();
    case 1044:
      ACCEPT_TOKEN(anon_sym_max_DASHtime);
      END_STATE();
    case 1045:
      ACCEPT_TOKEN(anon_sym_ms);
      END_STATE();
    case 1046:
      ACCEPT_TOKEN(anon_sym_s);
      END_STATE();
    case 1047:
      ACCEPT_TOKEN(anon_sym_m);
      END_STATE();
    case 1048:
      ACCEPT_TOKEN(anon_sym_m);
      if (lookahead == 's') ADVANCE(1045);
      END_STATE();
    case 1049:
      ACCEPT_TOKEN(anon_sym_h);
      END_STATE();
    case 1050:
      ACCEPT_TOKEN(anon_sym_resolve);
      END_STATE();
    case 1051:
      ACCEPT_TOKEN(anon_sym_aws_DASHsigv4);
      END_STATE();
    case 1052:
      ACCEPT_TOKEN(anon_sym_key);
      END_STATE();
    case 1053:
      ACCEPT_TOKEN(anon_sym_connect_DASHto);
      END_STATE();
    case 1054:
      ACCEPT_TOKEN(anon_sym_header);
      END_STATE();
    case 1055:
      ACCEPT_TOKEN(anon_sym_netrc_DASHfile);
      END_STATE();
    case 1056:
      ACCEPT_TOKEN(anon_sym_output);
      END_STATE();
    case 1057:
      ACCEPT_TOKEN(anon_sym_pinnedpubkey);
      END_STATE();
    case 1058:
      ACCEPT_TOKEN(anon_sym_proxy);
      END_STATE();
    case 1059:
      ACCEPT_TOKEN(anon_sym_unix_DASHsocket);
      END_STATE();
    case 1060:
      ACCEPT_TOKEN(anon_sym_user);
      END_STATE();
    case 1061:
      ACCEPT_TOKEN(anon_sym_variable);
      END_STATE();
    case 1062:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 1063:
      ACCEPT_TOKEN(anon_sym_status);
      END_STATE();
    case 1064:
      ACCEPT_TOKEN(anon_sym_version);
      END_STATE();
    case 1065:
      ACCEPT_TOKEN(anon_sym_rawbytes);
      END_STATE();
    case 1066:
      ACCEPT_TOKEN(anon_sym_ip);
      END_STATE();
    case 1067:
      ACCEPT_TOKEN(anon_sym_redirects);
      END_STATE();
    case 1068:
      ACCEPT_TOKEN(anon_sym_url);
      END_STATE();
    case 1069:
      ACCEPT_TOKEN(anon_sym_body);
      END_STATE();
    case 1070:
      ACCEPT_TOKEN(anon_sym_duration);
      END_STATE();
    case 1071:
      ACCEPT_TOKEN(anon_sym_bytes);
      END_STATE();
    case 1072:
      ACCEPT_TOKEN(anon_sym_sha256);
      END_STATE();
    case 1073:
      ACCEPT_TOKEN(anon_sym_md5);
      END_STATE();
    case 1074:
      ACCEPT_TOKEN(anon_sym_cookie);
      END_STATE();
    case 1075:
      ACCEPT_TOKEN(anon_sym_xpath);
      END_STATE();
    case 1076:
      ACCEPT_TOKEN(anon_sym_jsonpath);
      END_STATE();
    case 1077:
      ACCEPT_TOKEN(anon_sym_regex);
      END_STATE();
    case 1078:
      ACCEPT_TOKEN(anon_sym_certificate);
      END_STATE();
    case 1079:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 1080:
      ACCEPT_TOKEN(anon_sym_Subject);
      END_STATE();
    case 1081:
      ACCEPT_TOKEN(anon_sym_Issuer);
      END_STATE();
    case 1082:
      ACCEPT_TOKEN(anon_sym_Start_DASHDate);
      END_STATE();
    case 1083:
      ACCEPT_TOKEN(anon_sym_Expire_DASHDate);
      END_STATE();
    case 1084:
      ACCEPT_TOKEN(anon_sym_Serial_DASHNumber);
      END_STATE();
    case 1085:
      ACCEPT_TOKEN(anon_sym_not);
      if (lookahead == 'E') ADVANCE(583);
      END_STATE();
    case 1086:
      ACCEPT_TOKEN(anon_sym_isDate);
      END_STATE();
    case 1087:
      ACCEPT_TOKEN(anon_sym_isList);
      END_STATE();
    case 1088:
      ACCEPT_TOKEN(anon_sym_isObject);
      END_STATE();
    case 1089:
      ACCEPT_TOKEN(anon_sym_exists);
      END_STATE();
    case 1090:
      ACCEPT_TOKEN(anon_sym_isInteger);
      END_STATE();
    case 1091:
      ACCEPT_TOKEN(anon_sym_isFloat);
      END_STATE();
    case 1092:
      ACCEPT_TOKEN(anon_sym_isBoolean);
      END_STATE();
    case 1093:
      ACCEPT_TOKEN(anon_sym_isString);
      END_STATE();
    case 1094:
      ACCEPT_TOKEN(anon_sym_isCollection);
      END_STATE();
    case 1095:
      ACCEPT_TOKEN(anon_sym_isNumber);
      END_STATE();
    case 1096:
      ACCEPT_TOKEN(anon_sym_isIsoDate);
      END_STATE();
    case 1097:
      ACCEPT_TOKEN(anon_sym_isEmpty);
      END_STATE();
    case 1098:
      ACCEPT_TOKEN(anon_sym_isIpv4);
      END_STATE();
    case 1099:
      ACCEPT_TOKEN(anon_sym_isIpv6);
      END_STATE();
    case 1100:
      ACCEPT_TOKEN(anon_sym_isUuid);
      END_STATE();
    case 1101:
      ACCEPT_TOKEN(anon_sym_equals);
      END_STATE();
    case 1102:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 1103:
      ACCEPT_TOKEN(anon_sym_notEquals);
      END_STATE();
    case 1104:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 1105:
      ACCEPT_TOKEN(anon_sym_greaterThan);
      if (lookahead == 'O') ADVANCE(641);
      END_STATE();
    case 1106:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 1107:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(1109);
      END_STATE();
    case 1108:
      ACCEPT_TOKEN(anon_sym_greaterThanOrEquals);
      END_STATE();
    case 1109:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 1110:
      ACCEPT_TOKEN(anon_sym_lessThan);
      if (lookahead == 'O') ADVANCE(595);
      END_STATE();
    case 1111:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '/') ADVANCE(1132);
      if (lookahead == '=') ADVANCE(1116);
      if (lookahead == '?') ADVANCE(1122);
      END_STATE();
    case 1112:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '/') ADVANCE(1132);
      if (lookahead == '?') ADVANCE(1122);
      END_STATE();
    case 1113:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(1116);
      END_STATE();
    case 1114:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '?') ADVANCE(1122);
      END_STATE();
    case 1115:
      ACCEPT_TOKEN(anon_sym_lessThanOrEquals);
      END_STATE();
    case 1116:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 1117:
      ACCEPT_TOKEN(anon_sym_startsWith);
      END_STATE();
    case 1118:
      ACCEPT_TOKEN(anon_sym_endsWith);
      END_STATE();
    case 1119:
      ACCEPT_TOKEN(anon_sym_contains);
      END_STATE();
    case 1120:
      ACCEPT_TOKEN(anon_sym_matches);
      END_STATE();
    case 1121:
      ACCEPT_TOKEN(anon_sym_includes);
      END_STATE();
    case 1122:
      ACCEPT_TOKEN(anon_sym_LT_QMARK);
      END_STATE();
    case 1123:
      ACCEPT_TOKEN(aux_sym_xml_prolog_tag_token1);
      if (lookahead == '\n') ADVANCE(1125);
      if (lookahead == '?') ADVANCE(1437);
      if (lookahead != 0) ADVANCE(1123);
      END_STATE();
    case 1124:
      ACCEPT_TOKEN(aux_sym_xml_prolog_tag_token1);
      if (lookahead == '#') ADVANCE(1123);
      if (set_contains(extras_character_set_2, 9, lookahead)) ADVANCE(1124);
      if (lookahead != 0 &&
          lookahead != '?') ADVANCE(1125);
      END_STATE();
    case 1125:
      ACCEPT_TOKEN(aux_sym_xml_prolog_tag_token1);
      if (lookahead != 0 &&
          lookahead != '?') ADVANCE(1125);
      END_STATE();
    case 1126:
      ACCEPT_TOKEN(anon_sym_QMARK_GT);
      END_STATE();
    case 1127:
      ACCEPT_TOKEN(aux_sym_xml_self_closing_tag_token1);
      if (lookahead == '\n') ADVANCE(1131);
      if (lookahead == '/') ADVANCE(1127);
      if (lookahead == '>') ADVANCE(1437);
      if (lookahead != 0) ADVANCE(1129);
      END_STATE();
    case 1128:
      ACCEPT_TOKEN(aux_sym_xml_self_closing_tag_token1);
      if (lookahead == '/') ADVANCE(1128);
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(1131);
      END_STATE();
    case 1129:
      ACCEPT_TOKEN(aux_sym_xml_open_tag_token1);
      if (lookahead == '\n') ADVANCE(1131);
      if (lookahead == '/') ADVANCE(1127);
      if (lookahead == '>') ADVANCE(1437);
      if (lookahead != 0) ADVANCE(1129);
      END_STATE();
    case 1130:
      ACCEPT_TOKEN(aux_sym_xml_open_tag_token1);
      if (lookahead == '#') ADVANCE(1129);
      if (lookahead == '/') ADVANCE(1128);
      if (lookahead == '>') ADVANCE(1131);
      if (lookahead == '?') ADVANCE(1131);
      if (set_contains(extras_character_set_2, 9, lookahead)) ADVANCE(1130);
      if (lookahead != 0) ADVANCE(1131);
      END_STATE();
    case 1131:
      ACCEPT_TOKEN(aux_sym_xml_open_tag_token1);
      if (lookahead == '/') ADVANCE(1128);
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(1131);
      END_STATE();
    case 1132:
      ACCEPT_TOKEN(anon_sym_LT_SLASH);
      END_STATE();
    case 1133:
      ACCEPT_TOKEN(aux_sym_xml_close_tag_token1);
      if (lookahead == '\n') ADVANCE(1135);
      if (lookahead == '/' ||
          lookahead == '>') ADVANCE(1437);
      if (lookahead != 0) ADVANCE(1133);
      END_STATE();
    case 1134:
      ACCEPT_TOKEN(aux_sym_xml_close_tag_token1);
      if (lookahead == '#') ADVANCE(1133);
      if (set_contains(extras_character_set_2, 9, lookahead)) ADVANCE(1134);
      if (lookahead != 0 &&
          lookahead != '/' &&
          lookahead != '>') ADVANCE(1135);
      END_STATE();
    case 1135:
      ACCEPT_TOKEN(aux_sym_xml_close_tag_token1);
      if (lookahead != 0 &&
          lookahead != '/' &&
          lookahead != '>') ADVANCE(1135);
      END_STATE();
    case 1136:
      ACCEPT_TOKEN(anon_sym_base64_COMMA);
      END_STATE();
    case 1137:
      ACCEPT_TOKEN(aux_sym_oneline_base64_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1137);
      if (lookahead == '+' ||
          ('/' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1138);
      END_STATE();
    case 1138:
      ACCEPT_TOKEN(aux_sym_oneline_base64_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '+' ||
          ('/' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1138);
      END_STATE();
    case 1139:
      ACCEPT_TOKEN(anon_sym_hex_COMMA);
      END_STATE();
    case 1140:
      ACCEPT_TOKEN(sym_quoted_string_text);
      if (lookahead == '\n') ADVANCE(1143);
      if (lookahead == '"' ||
          lookahead == '\\') ADVANCE(1437);
      if (lookahead != 0) ADVANCE(1140);
      END_STATE();
    case 1141:
      ACCEPT_TOKEN(sym_quoted_string_text);
      if (lookahead == '#') ADVANCE(1140);
      if (lookahead == '{') ADVANCE(1142);
      if (set_contains(extras_character_set_2, 9, lookahead)) ADVANCE(1141);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(1143);
      END_STATE();
    case 1142:
      ACCEPT_TOKEN(sym_quoted_string_text);
      if (lookahead == '{') ADVANCE(1395);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(1143);
      END_STATE();
    case 1143:
      ACCEPT_TOKEN(sym_quoted_string_text);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(1143);
      END_STATE();
    case 1144:
      ACCEPT_TOKEN(aux_sym_invalid_quoted_string_escaped_char_token1);
      END_STATE();
    case 1145:
      ACCEPT_TOKEN(aux_sym_invalid_quoted_string_escaped_char_token1);
      if (lookahead == '#') ADVANCE(1146);
      if (lookahead == 'b') ADVANCE(1000);
      if (lookahead == 'f') ADVANCE(1001);
      if (lookahead == 'n') ADVANCE(1002);
      if (lookahead == 'r') ADVANCE(1003);
      if (lookahead == 't') ADVANCE(1004);
      if ((set_contains(extras_character_set_2, 9, lookahead)) &&
          lookahead != '\t' &&
          lookahead != '\f' &&
          lookahead != '\r') ADVANCE(1145);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '\\' &&
          lookahead != 't' &&
          lookahead != 'u') ADVANCE(1144);
      END_STATE();
    case 1146:
      ACCEPT_TOKEN(aux_sym_invalid_quoted_string_escaped_char_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1437);
      END_STATE();
    case 1147:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      END_STATE();
    case 1148:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 1149:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '+') ADVANCE(840);
      if (lookahead == '-') ADVANCE(1320);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1320);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1322);
      END_STATE();
    case 1150:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == ',') ADVANCE(1139);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1322);
      END_STATE();
    case 1151:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == ',') ADVANCE(990);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1322);
      END_STATE();
    case 1152:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == ',') ADVANCE(1136);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1322);
      END_STATE();
    case 1153:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '.') ADVANCE(1319);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1149);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1153);
      if (lookahead == '$' ||
          lookahead == '-' ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1322);
      END_STATE();
    case 1154:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '.') ADVANCE(1319);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1149);
      if (lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1322);
      END_STATE();
    case 1155:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '0') ADVANCE(1154);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1153);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1322);
      END_STATE();
    case 1156:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '4') ADVANCE(1152);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1322);
      END_STATE();
    case 1157:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '6') ADVANCE(1156);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1322);
      END_STATE();
    case 1158:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'A') ADVANCE(1169);
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(1321);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1322);
      END_STATE();
    case 1159:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'A') ADVANCE(1167);
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(1321);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1322);
      END_STATE();
    case 1160:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'A') ADVANCE(1312);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1322);
      END_STATE();
    case 1161:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'A') ADVANCE(1222);
      if (lookahead == 'O') ADVANCE(1216);
      if (lookahead == 'R') ADVANCE(1205);
      if (lookahead == 'U') ADVANCE(1212);
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(1321);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1322);
      END_STATE();
    case 1162:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'A') ADVANCE(1301);
      if (lookahead == 'C') ADVANCE(1241);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1322);
      END_STATE();
    case 1163:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'B') ADVANCE(1235);
      if (lookahead == 'C') ADVANCE(1276);
      if (lookahead == 'F') ADVANCE(1275);
      if (lookahead == 'M') ADVANCE(1313);
      if (lookahead == 'O') ADVANCE(1278);
      if (lookahead == 'Q') ADVANCE(1310);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1322);
      END_STATE();
    case 1164:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'C') ADVANCE(1185);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1321);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1322);
      END_STATE();
    case 1165:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'C') ADVANCE(1192);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1321);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1322);
      END_STATE();
    case 1166:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'C') ADVANCE(1194);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1321);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1322);
      END_STATE();
    case 1167:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'C') ADVANCE(1178);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1321);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1322);
      END_STATE();
    case 1168:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'C') ADVANCE(1219);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1321);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1322);
      END_STATE();
    case 1169:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'D') ADVANCE(867);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1321);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1322);
      END_STATE();
    case 1170:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'D') ADVANCE(893);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1321);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1322);
      END_STATE();
    case 1171:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'D') ADVANCE(1239);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1322);
      END_STATE();
    case 1172:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'E') ADVANCE(1195);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1321);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1322);
      END_STATE();
    case 1173:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'E') ADVANCE(1217);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1321);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1322);
      END_STATE();
    case 1174:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'E') ADVANCE(1158);
      if (lookahead == 'T') ADVANCE(1220);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1321);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1322);
      END_STATE();
    case 1175:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'E') ADVANCE(1158);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1321);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1322);
      END_STATE();
    case 1176:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'E') ADVANCE(1224);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1321);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1322);
      END_STATE();
    case 1177:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'E') ADVANCE(887);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1321);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1322);
      END_STATE();
    case 1178:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'E') ADVANCE(879);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1321);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1322);
      END_STATE();
    case 1179:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'E') ADVANCE(873);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1321);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1322);
      END_STATE();
    case 1180:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'E') ADVANCE(1168);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1321);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1322);
      END_STATE();
    case 1181:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'E') ADVANCE(1223);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1321);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1322);
      END_STATE();
    case 1182:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'F') ADVANCE(1189);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1321);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1322);
      END_STATE();
    case 1183:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'F') ADVANCE(1277);
      if (lookahead == ']') ADVANCE(976);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1322);
      END_STATE();
    case 1184:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'G') ADVANCE(1177);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1321);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1322);
      END_STATE();
    case 1185:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'H') ADVANCE(881);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1321);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1322);
      END_STATE();
    case 1186:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'I') ADVANCE(1176);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1321);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1322);
      END_STATE();
    case 1187:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'I') ADVANCE(1197);
      if (lookahead == 'O') ADVANCE(1165);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1321);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1322);
      END_STATE();
    case 1188:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'I') ADVANCE(1201);
      if (lookahead == 'O') ADVANCE(1166);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1321);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1322);
      END_STATE();
    case 1189:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'I') ADVANCE(1200);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1321);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1322);
      END_STATE();
    case 1190:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'I') ADVANCE(1206);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1321);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1322);
      END_STATE();
    case 1191:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'K') ADVANCE(883);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1321);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1322);
      END_STATE();
    case 1192:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'K') ADVANCE(889);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1321);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1322);
      END_STATE();
    case 1193:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'K') ADVANCE(885);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1321);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1322);
      END_STATE();
    case 1194:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'K') ADVANCE(891);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1321);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1322);
      END_STATE();
    case 1195:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'L') ADVANCE(1181);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1321);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1322);
      END_STATE();
    case 1196:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'L') ADVANCE(1188);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1321);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1322);
      END_STATE();
    case 1197:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'N') ADVANCE(1191);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1321);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1322);
      END_STATE();
    case 1198:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'N') ADVANCE(1196);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1321);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1322);
      END_STATE();
    case 1199:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'N') ADVANCE(1214);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1321);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1322);
      END_STATE();
    case 1200:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'N') ADVANCE(1170);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1321);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1322);
      END_STATE();
    case 1201:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'N') ADVANCE(1193);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1321);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1322);
      END_STATE();
    case 1202:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'N') ADVANCE(1203);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1321);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1322);
      END_STATE();
    case 1203:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'N') ADVANCE(1180);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1321);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1322);
      END_STATE();
    case 1204:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'O') ADVANCE(1202);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1321);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1322);
      END_STATE();
    case 1205:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'O') ADVANCE(1208);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1321);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1322);
      END_STATE();
    case 1206:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'O') ADVANCE(1199);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1321);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1322);
      END_STATE();
    case 1207:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'P') ADVANCE(962);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1321);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1322);
      END_STATE();
    case 1208:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'P') ADVANCE(1182);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1321);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1322);
      END_STATE();
    case 1209:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'P') ADVANCE(1237);
      if (lookahead == ']') ADVANCE(972);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1322);
      END_STATE();
    case 1210:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'P') ADVANCE(1221);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1321);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1322);
      END_STATE();
    case 1211:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'P') ADVANCE(1243);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1322);
      END_STATE();
    case 1212:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'R') ADVANCE(1184);
      if (lookahead == 'T') ADVANCE(871);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1321);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1322);
      END_STATE();
    case 1213:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'R') ADVANCE(1159);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1321);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1322);
      END_STATE();
    case 1214:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'S') ADVANCE(877);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1321);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1322);
      END_STATE();
    case 1215:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'S') ADVANCE(1308);
      if (lookahead == ']') ADVANCE(968);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1322);
      END_STATE();
    case 1216:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'S') ADVANCE(1218);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1321);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1322);
      END_STATE();
    case 1217:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'T') ADVANCE(865);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1321);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1322);
      END_STATE();
    case 1218:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'T') ADVANCE(869);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1321);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1322);
      END_STATE();
    case 1219:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'T') ADVANCE(875);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1321);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1322);
      END_STATE();
    case 1220:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'T') ADVANCE(1207);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1321);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1322);
      END_STATE();
    case 1221:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'T') ADVANCE(1190);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1321);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1322);
      END_STATE();
    case 1222:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'T') ADVANCE(1164);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1321);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1322);
      END_STATE();
    case 1223:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'T') ADVANCE(1179);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1321);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1322);
      END_STATE();
    case 1224:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'W') ADVANCE(895);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1321);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1322);
      END_STATE();
    case 1225:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == ']') ADVANCE(980);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1322);
      END_STATE();
    case 1226:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == ']') ADVANCE(986);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1322);
      END_STATE();
    case 1227:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == ']') ADVANCE(966);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1322);
      END_STATE();
    case 1228:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == ']') ADVANCE(974);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1322);
      END_STATE();
    case 1229:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == ']') ADVANCE(978);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1322);
      END_STATE();
    case 1230:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == ']') ADVANCE(970);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1322);
      END_STATE();
    case 1231:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == ']') ADVANCE(984);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1322);
      END_STATE();
    case 1232:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == ']') ADVANCE(982);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1322);
      END_STATE();
    case 1233:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'a') ADVANCE(1294);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1322);
      END_STATE();
    case 1234:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'a') ADVANCE(1265);
      if (lookahead == 'i') ADVANCE(1263);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1322);
      END_STATE();
    case 1235:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'a') ADVANCE(1291);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1322);
      END_STATE();
    case 1236:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'a') ADVANCE(1269);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1322);
      END_STATE();
    case 1237:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'a') ADVANCE(1283);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1322);
      END_STATE();
    case 1238:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'a') ADVANCE(1286);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1322);
      END_STATE();
    case 1239:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'a') ADVANCE(1306);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1322);
      END_STATE();
    case 1240:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'a') ADVANCE(1229);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1322);
      END_STATE();
    case 1241:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'a') ADVANCE(1279);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1322);
      END_STATE();
    case 1242:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'a') ADVANCE(1270);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1322);
      END_STATE();
    case 1243:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'a') ADVANCE(1290);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1322);
      END_STATE();
    case 1244:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'c') ADVANCE(1160);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1322);
      END_STATE();
    case 1245:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'e') ADVANCE(1316);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1322);
      END_STATE();
    case 1246:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'e') ADVANCE(1157);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1322);
      END_STATE();
    case 1247:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'e') ADVANCE(1390);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1322);
      END_STATE();
    case 1248:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'e') ADVANCE(1392);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1322);
      END_STATE();
    case 1249:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'e') ADVANCE(1151);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1322);
      END_STATE();
    case 1250:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'e') ADVANCE(1282);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1322);
      END_STATE();
    case 1251:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'e') ADVANCE(1292);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1322);
      END_STATE();
    case 1252:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'e') ADVANCE(1288);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1322);
      END_STATE();
    case 1253:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'e') ADVANCE(1299);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1322);
      END_STATE();
    case 1254:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'g') ADVANCE(1211);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1322);
      END_STATE();
    case 1255:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'h') ADVANCE(1227);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1322);
      END_STATE();
    case 1256:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'i') ADVANCE(1244);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1322);
      END_STATE();
    case 1257:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'i') ADVANCE(1280);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1322);
      END_STATE();
    case 1258:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'i') ADVANCE(1271);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1322);
      END_STATE();
    case 1259:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'i') ADVANCE(1274);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1322);
      END_STATE();
    case 1260:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'i') ADVANCE(1251);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1322);
      END_STATE();
    case 1261:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'k') ADVANCE(1260);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1322);
      END_STATE();
    case 1262:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'l') ADVANCE(989);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1322);
      END_STATE();
    case 1263:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'l') ADVANCE(1249);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1322);
      END_STATE();
    case 1264:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'l') ADVANCE(1262);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1322);
      END_STATE();
    case 1265:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'l') ADVANCE(1296);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1322);
      END_STATE();
    case 1266:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'l') ADVANCE(1305);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1322);
      END_STATE();
    case 1267:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'm') ADVANCE(1209);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1322);
      END_STATE();
    case 1268:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'm') ADVANCE(1171);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1322);
      END_STATE();
    case 1269:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'm') ADVANCE(1295);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1322);
      END_STATE();
    case 1270:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'm') ADVANCE(1297);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1322);
      END_STATE();
    case 1271:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'n') ADVANCE(1254);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1322);
      END_STATE();
    case 1272:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'n') ADVANCE(1293);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1322);
      END_STATE();
    case 1273:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'o') ADVANCE(1261);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1322);
      END_STATE();
    case 1274:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'o') ADVANCE(1272);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1322);
      END_STATE();
    case 1275:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'o') ADVANCE(1281);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1322);
      END_STATE();
    case 1276:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'o') ADVANCE(1273);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1322);
      END_STATE();
    case 1277:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'o') ADVANCE(1285);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1322);
      END_STATE();
    case 1278:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'p') ADVANCE(1304);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1322);
      END_STATE();
    case 1279:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'p') ADVANCE(1307);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1322);
      END_STATE();
    case 1280:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'p') ADVANCE(1238);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1322);
      END_STATE();
    case 1281:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'r') ADVANCE(1267);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1322);
      END_STATE();
    case 1282:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'r') ADVANCE(1317);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1322);
      END_STATE();
    case 1283:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'r') ADVANCE(1236);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1322);
      END_STATE();
    case 1284:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'r') ADVANCE(1314);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1322);
      END_STATE();
    case 1285:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'r') ADVANCE(1268);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1322);
      END_STATE();
    case 1286:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'r') ADVANCE(1303);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1322);
      END_STATE();
    case 1287:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'r') ADVANCE(1258);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1322);
      END_STATE();
    case 1288:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'r') ADVANCE(1309);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1322);
      END_STATE();
    case 1289:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'r') ADVANCE(1253);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1322);
      END_STATE();
    case 1290:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'r') ADVANCE(1242);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1322);
      END_STATE();
    case 1291:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 's') ADVANCE(1256);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1322);
      END_STATE();
    case 1292:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 's') ADVANCE(1225);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1322);
      END_STATE();
    case 1293:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 's') ADVANCE(1226);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1322);
      END_STATE();
    case 1294:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 's') ADVANCE(1246);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1322);
      END_STATE();
    case 1295:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 's') ADVANCE(1228);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1322);
      END_STATE();
    case 1296:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 's') ADVANCE(1248);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1322);
      END_STATE();
    case 1297:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 's') ADVANCE(1230);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1322);
      END_STATE();
    case 1298:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 's') ADVANCE(1231);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1322);
      END_STATE();
    case 1299:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 's') ADVANCE(1232);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1322);
      END_STATE();
    case 1300:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 's') ADVANCE(1252);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1322);
      END_STATE();
    case 1301:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 's') ADVANCE(1300);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1322);
      END_STATE();
    case 1302:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 't') ADVANCE(1255);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1322);
      END_STATE();
    case 1303:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 't') ADVANCE(1183);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1322);
      END_STATE();
    case 1304:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 't') ADVANCE(1259);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1322);
      END_STATE();
    case 1305:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 't') ADVANCE(1257);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1322);
      END_STATE();
    case 1306:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 't') ADVANCE(1240);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1322);
      END_STATE();
    case 1307:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 't') ADVANCE(1315);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1322);
      END_STATE();
    case 1308:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 't') ADVANCE(1287);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1322);
      END_STATE();
    case 1309:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 't') ADVANCE(1298);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1322);
      END_STATE();
    case 1310:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'u') ADVANCE(1250);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1322);
      END_STATE();
    case 1311:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'u') ADVANCE(1264);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1322);
      END_STATE();
    case 1312:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'u') ADVANCE(1302);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1322);
      END_STATE();
    case 1313:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'u') ADVANCE(1266);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1322);
      END_STATE();
    case 1314:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'u') ADVANCE(1247);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1322);
      END_STATE();
    case 1315:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'u') ADVANCE(1289);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1322);
      END_STATE();
    case 1316:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'x') ADVANCE(1150);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1322);
      END_STATE();
    case 1317:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'y') ADVANCE(1215);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1322);
      END_STATE();
    case 1318:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1149);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1318);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1322);
      END_STATE();
    case 1319:
      ACCEPT_TOKEN(sym_key_string_text);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1318);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1322);
      END_STATE();
    case 1320:
      ACCEPT_TOKEN(sym_key_string_text);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1320);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1322);
      END_STATE();
    case 1321:
      ACCEPT_TOKEN(sym_key_string_text);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1321);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1322);
      END_STATE();
    case 1322:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1322);
      END_STATE();
    case 1323:
      ACCEPT_TOKEN(sym_key_string_escaped_char);
      END_STATE();
    case 1324:
      ACCEPT_TOKEN(aux_sym_value_string_text_token1);
      END_STATE();
    case 1325:
      ACCEPT_TOKEN(aux_sym_value_string_text_token1);
      if (lookahead == '\n') ADVANCE(856);
      if (lookahead == '"') ADVANCE(1079);
      if (lookahead == '-') ADVANCE(1337);
      if (lookahead == 'f') ADVANCE(1331);
      if (lookahead == 'n') ADVANCE(1334);
      if (lookahead == 't') ADVANCE(1333);
      if (lookahead == '{') ADVANCE(1335);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1329);
      if (set_contains(extras_character_set_2, 9, lookahead)) ADVANCE(1325);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(1324);
      END_STATE();
    case 1326:
      ACCEPT_TOKEN(aux_sym_value_string_text_token1);
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '-') ADVANCE(1337);
      if (lookahead == 'f') ADVANCE(1332);
      if (lookahead == 'n') ADVANCE(1334);
      if (lookahead == 't') ADVANCE(1333);
      if (lookahead == '{') ADVANCE(1335);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1329);
      if (set_contains(extras_character_set_2, 9, lookahead)) ADVANCE(1326);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(1324);
      END_STATE();
    case 1327:
      ACCEPT_TOKEN(aux_sym_value_string_text_token1);
      if (lookahead == '\n') ADVANCE(860);
      if (lookahead == '-') ADVANCE(1337);
      if (lookahead == 'f') ADVANCE(1331);
      if (lookahead == 'n') ADVANCE(1334);
      if (lookahead == 't') ADVANCE(1333);
      if (lookahead == '{') ADVANCE(1335);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1329);
      if (set_contains(extras_character_set_2, 9, lookahead)) ADVANCE(1327);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(1324);
      END_STATE();
    case 1328:
      ACCEPT_TOKEN(aux_sym_value_string_text_token1);
      if (lookahead == '\n') ADVANCE(861);
      if (lookahead == '{') ADVANCE(1335);
      if (set_contains(extras_character_set_2, 9, lookahead)) ADVANCE(1328);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(1324);
      END_STATE();
    case 1329:
      ACCEPT_TOKEN(aux_sym_value_string_text_token1);
      if (lookahead == '.') ADVANCE(842);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1427);
      END_STATE();
    case 1330:
      ACCEPT_TOKEN(aux_sym_value_string_text_token1);
      if (lookahead == '<') ADVANCE(1112);
      if (lookahead == '{') ADVANCE(1335);
      if (set_contains(extras_character_set_1, 10, lookahead)) ADVANCE(1330);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(1324);
      END_STATE();
    case 1331:
      ACCEPT_TOKEN(aux_sym_value_string_text_token1);
      if (lookahead == 'a') ADVANCE(455);
      END_STATE();
    case 1332:
      ACCEPT_TOKEN(aux_sym_value_string_text_token1);
      if (lookahead == 'a') ADVANCE(455);
      if (lookahead == 'i') ADVANCE(450);
      END_STATE();
    case 1333:
      ACCEPT_TOKEN(aux_sym_value_string_text_token1);
      if (lookahead == 'r') ADVANCE(782);
      END_STATE();
    case 1334:
      ACCEPT_TOKEN(aux_sym_value_string_text_token1);
      if (lookahead == 'u') ADVANCE(452);
      END_STATE();
    case 1335:
      ACCEPT_TOKEN(aux_sym_value_string_text_token1);
      if (lookahead == '{') ADVANCE(1393);
      END_STATE();
    case 1336:
      ACCEPT_TOKEN(aux_sym_value_string_text_token1);
      if (lookahead == '{') ADVANCE(1335);
      if (set_contains(extras_character_set_1, 10, lookahead)) ADVANCE(1336);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(1324);
      END_STATE();
    case 1337:
      ACCEPT_TOKEN(aux_sym_value_string_text_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1427);
      END_STATE();
    case 1338:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 1339:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      if (lookahead == '`') ADVANCE(117);
      END_STATE();
    case 1340:
      ACCEPT_TOKEN(aux_sym_oneline_string_text_token1);
      if (lookahead == '#') ADVANCE(1341);
      if (set_contains(extras_character_set_1, 10, lookahead)) ADVANCE(1340);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != '{') ADVANCE(1341);
      END_STATE();
    case 1341:
      ACCEPT_TOKEN(aux_sym_oneline_string_text_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != '{') ADVANCE(1341);
      END_STATE();
    case 1342:
      ACCEPT_TOKEN(anon_sym_LBRACE2);
      if (lookahead == '{') ADVANCE(1393);
      END_STATE();
    case 1343:
      ACCEPT_TOKEN(sym_oneline_string_escaped_char);
      END_STATE();
    case 1344:
      ACCEPT_TOKEN(anon_sym_BQUOTE_BQUOTE_BQUOTE);
      END_STATE();
    case 1345:
      ACCEPT_TOKEN(anon_sym_base64);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1369);
      END_STATE();
    case 1346:
      ACCEPT_TOKEN(anon_sym_hex);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1369);
      END_STATE();
    case 1347:
      ACCEPT_TOKEN(anon_sym_json);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1369);
      END_STATE();
    case 1348:
      ACCEPT_TOKEN(anon_sym_xml);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1369);
      END_STATE();
    case 1349:
      ACCEPT_TOKEN(anon_sym_graphql);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1369);
      END_STATE();
    case 1350:
      ACCEPT_TOKEN(aux_sym_multiline_string_type_token1);
      if (lookahead == '\n') ADVANCE(863);
      if (lookahead == '#') ADVANCE(1369);
      if (lookahead == 'b') ADVANCE(1354);
      if (lookahead == 'g') ADVANCE(1365);
      if (lookahead == 'h') ADVANCE(1355);
      if (lookahead == 'j') ADVANCE(1366);
      if (lookahead == 'x') ADVANCE(1360);
      if (set_contains(extras_character_set_2, 9, lookahead)) ADVANCE(1350);
      if (lookahead != 0) ADVANCE(1369);
      END_STATE();
    case 1351:
      ACCEPT_TOKEN(aux_sym_multiline_string_type_token1);
      if (lookahead == '4') ADVANCE(1345);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1369);
      END_STATE();
    case 1352:
      ACCEPT_TOKEN(aux_sym_multiline_string_type_token1);
      if (lookahead == '6') ADVANCE(1351);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1369);
      END_STATE();
    case 1353:
      ACCEPT_TOKEN(aux_sym_multiline_string_type_token1);
      if (lookahead == 'a') ADVANCE(1363);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1369);
      END_STATE();
    case 1354:
      ACCEPT_TOKEN(aux_sym_multiline_string_type_token1);
      if (lookahead == 'a') ADVANCE(1367);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1369);
      END_STATE();
    case 1355:
      ACCEPT_TOKEN(aux_sym_multiline_string_type_token1);
      if (lookahead == 'e') ADVANCE(1368);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1369);
      END_STATE();
    case 1356:
      ACCEPT_TOKEN(aux_sym_multiline_string_type_token1);
      if (lookahead == 'e') ADVANCE(1352);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1369);
      END_STATE();
    case 1357:
      ACCEPT_TOKEN(aux_sym_multiline_string_type_token1);
      if (lookahead == 'h') ADVANCE(1364);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1369);
      END_STATE();
    case 1358:
      ACCEPT_TOKEN(aux_sym_multiline_string_type_token1);
      if (lookahead == 'l') ADVANCE(1348);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1369);
      END_STATE();
    case 1359:
      ACCEPT_TOKEN(aux_sym_multiline_string_type_token1);
      if (lookahead == 'l') ADVANCE(1349);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1369);
      END_STATE();
    case 1360:
      ACCEPT_TOKEN(aux_sym_multiline_string_type_token1);
      if (lookahead == 'm') ADVANCE(1358);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1369);
      END_STATE();
    case 1361:
      ACCEPT_TOKEN(aux_sym_multiline_string_type_token1);
      if (lookahead == 'n') ADVANCE(1347);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1369);
      END_STATE();
    case 1362:
      ACCEPT_TOKEN(aux_sym_multiline_string_type_token1);
      if (lookahead == 'o') ADVANCE(1361);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1369);
      END_STATE();
    case 1363:
      ACCEPT_TOKEN(aux_sym_multiline_string_type_token1);
      if (lookahead == 'p') ADVANCE(1357);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1369);
      END_STATE();
    case 1364:
      ACCEPT_TOKEN(aux_sym_multiline_string_type_token1);
      if (lookahead == 'q') ADVANCE(1359);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1369);
      END_STATE();
    case 1365:
      ACCEPT_TOKEN(aux_sym_multiline_string_type_token1);
      if (lookahead == 'r') ADVANCE(1353);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1369);
      END_STATE();
    case 1366:
      ACCEPT_TOKEN(aux_sym_multiline_string_type_token1);
      if (lookahead == 's') ADVANCE(1362);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1369);
      END_STATE();
    case 1367:
      ACCEPT_TOKEN(aux_sym_multiline_string_type_token1);
      if (lookahead == 's') ADVANCE(1356);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1369);
      END_STATE();
    case 1368:
      ACCEPT_TOKEN(aux_sym_multiline_string_type_token1);
      if (lookahead == 'x') ADVANCE(1346);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1369);
      END_STATE();
    case 1369:
      ACCEPT_TOKEN(aux_sym_multiline_string_type_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1369);
      END_STATE();
    case 1370:
      ACCEPT_TOKEN(sym__multiline_string_text);
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '#') ADVANCE(1436);
      if (lookahead == '\\') ADVANCE(999);
      if (lookahead == '`') ADVANCE(1371);
      if (lookahead == '{') ADVANCE(1372);
      if (set_contains(extras_character_set_2, 9, lookahead)) ADVANCE(1370);
      if (lookahead != 0) ADVANCE(1373);
      END_STATE();
    case 1371:
      ACCEPT_TOKEN(sym__multiline_string_text);
      if (lookahead == '`') ADVANCE(117);
      END_STATE();
    case 1372:
      ACCEPT_TOKEN(sym__multiline_string_text);
      if (lookahead == '{') ADVANCE(1393);
      END_STATE();
    case 1373:
      ACCEPT_TOKEN(sym__multiline_string_text);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != '{') ADVANCE(1373);
      END_STATE();
    case 1374:
      ACCEPT_TOKEN(sym_filename_text);
      if (lookahead == '\n') ADVANCE(857);
      if (lookahead == '{') ADVANCE(1376);
      if ((set_contains(extras_character_set_2, 9, lookahead)) &&
          lookahead != ' ') ADVANCE(1374);
      if (lookahead != 0 &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '\\') ADVANCE(1377);
      END_STATE();
    case 1375:
      ACCEPT_TOKEN(sym_filename_text);
      if (lookahead == '{') ADVANCE(1376);
      if ((set_contains(extras_character_set_1, 10, lookahead)) &&
          lookahead != ' ') ADVANCE(1375);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '\\') ADVANCE(1377);
      END_STATE();
    case 1376:
      ACCEPT_TOKEN(sym_filename_text);
      if (lookahead == '{') ADVANCE(1394);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '\\') ADVANCE(1377);
      END_STATE();
    case 1377:
      ACCEPT_TOKEN(sym_filename_text);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '\\') ADVANCE(1377);
      END_STATE();
    case 1378:
      ACCEPT_TOKEN(aux_sym_filename_escaped_char_token1);
      END_STATE();
    case 1379:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 1380:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 1381:
      ACCEPT_TOKEN(aux_sym_json_string_text_token1);
      END_STATE();
    case 1382:
      ACCEPT_TOKEN(aux_sym_json_string_text_token1);
      if (lookahead == '#') ADVANCE(1384);
      if (lookahead == '{') ADVANCE(1383);
      if (set_contains(extras_character_set_2, 9, lookahead)) ADVANCE(1382);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(1381);
      END_STATE();
    case 1383:
      ACCEPT_TOKEN(aux_sym_json_string_text_token1);
      if (lookahead == '{') ADVANCE(1393);
      END_STATE();
    case 1384:
      ACCEPT_TOKEN(aux_sym_json_string_text_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1437);
      END_STATE();
    case 1385:
      ACCEPT_TOKEN(sym__json_number);
      if (lookahead == '.') ADVANCE(839);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(837);
      END_STATE();
    case 1386:
      ACCEPT_TOKEN(sym__json_number);
      if (lookahead == '.') ADVANCE(839);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(837);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1386);
      END_STATE();
    case 1387:
      ACCEPT_TOKEN(sym__json_number);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(837);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1387);
      END_STATE();
    case 1388:
      ACCEPT_TOKEN(sym__json_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1388);
      END_STATE();
    case 1389:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 1390:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1322);
      END_STATE();
    case 1391:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 1392:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1322);
      END_STATE();
    case 1393:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE2);
      END_STATE();
    case 1394:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '\\') ADVANCE(1377);
      END_STATE();
    case 1395:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE2);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(1143);
      END_STATE();
    case 1396:
      ACCEPT_TOKEN(aux_sym_variable_name_token1);
      END_STATE();
    case 1397:
      ACCEPT_TOKEN(aux_sym_variable_name_token2);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1397);
      END_STATE();
    case 1398:
      ACCEPT_TOKEN(anon_sym_base64Decode);
      END_STATE();
    case 1399:
      ACCEPT_TOKEN(anon_sym_base64Encode);
      END_STATE();
    case 1400:
      ACCEPT_TOKEN(anon_sym_base64UrlSafeDecode);
      END_STATE();
    case 1401:
      ACCEPT_TOKEN(anon_sym_base64UrlSafeEncode);
      END_STATE();
    case 1402:
      ACCEPT_TOKEN(anon_sym_first);
      END_STATE();
    case 1403:
      ACCEPT_TOKEN(anon_sym_last);
      END_STATE();
    case 1404:
      ACCEPT_TOKEN(anon_sym_toFloat);
      END_STATE();
    case 1405:
      ACCEPT_TOKEN(anon_sym_toHex);
      END_STATE();
    case 1406:
      ACCEPT_TOKEN(anon_sym_toString);
      END_STATE();
    case 1407:
      ACCEPT_TOKEN(anon_sym_utf8Decode);
      END_STATE();
    case 1408:
      ACCEPT_TOKEN(anon_sym_utf8Encode);
      END_STATE();
    case 1409:
      ACCEPT_TOKEN(anon_sym_count);
      END_STATE();
    case 1410:
      ACCEPT_TOKEN(anon_sym_urlEncode);
      END_STATE();
    case 1411:
      ACCEPT_TOKEN(anon_sym_urlDecode);
      END_STATE();
    case 1412:
      ACCEPT_TOKEN(anon_sym_toInt);
      END_STATE();
    case 1413:
      ACCEPT_TOKEN(anon_sym_htmlEscape);
      END_STATE();
    case 1414:
      ACCEPT_TOKEN(anon_sym_htmlUnescape);
      END_STATE();
    case 1415:
      ACCEPT_TOKEN(anon_sym_daysAfterNow);
      END_STATE();
    case 1416:
      ACCEPT_TOKEN(anon_sym_daysBeforeNow);
      END_STATE();
    case 1417:
      ACCEPT_TOKEN(anon_sym_charsetDecode);
      END_STATE();
    case 1418:
      ACCEPT_TOKEN(anon_sym_dateFormat);
      END_STATE();
    case 1419:
      ACCEPT_TOKEN(anon_sym_urlQueryParam);
      END_STATE();
    case 1420:
      ACCEPT_TOKEN(anon_sym_decode);
      END_STATE();
    case 1421:
      ACCEPT_TOKEN(anon_sym_format);
      END_STATE();
    case 1422:
      ACCEPT_TOKEN(anon_sym_toDate);
      END_STATE();
    case 1423:
      ACCEPT_TOKEN(anon_sym_nth);
      END_STATE();
    case 1424:
      ACCEPT_TOKEN(anon_sym_replace);
      if (lookahead == 'R') ADVANCE(309);
      END_STATE();
    case 1425:
      ACCEPT_TOKEN(anon_sym_replaceRegex);
      END_STATE();
    case 1426:
      ACCEPT_TOKEN(anon_sym_split);
      END_STATE();
    case 1427:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(842);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1427);
      END_STATE();
    case 1428:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1428);
      END_STATE();
    case 1429:
      ACCEPT_TOKEN(aux_sym_hexdigit_token1);
      END_STATE();
    case 1430:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 1431:
      ACCEPT_TOKEN(anon_sym_e);
      END_STATE();
    case 1432:
      ACCEPT_TOKEN(anon_sym_E);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(955);
      END_STATE();
    case 1433:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 1434:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 1435:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '/' ||
          lookahead == '\\') ADVANCE(1437);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1435);
      END_STATE();
    case 1436:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\' ||
          lookahead == '`' ||
          lookahead == '{') ADVANCE(1437);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1436);
      END_STATE();
    case 1437:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1437);
      END_STATE();
    case 1438:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 1439:
      ACCEPT_TOKEN(sym_regex_text);
      if (lookahead == '#') ADVANCE(1435);
      if (set_contains(extras_character_set_1, 10, lookahead)) ADVANCE(1439);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '/' &&
          lookahead != '\\') ADVANCE(1440);
      END_STATE();
    case 1440:
      ACCEPT_TOKEN(sym_regex_text);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '/' &&
          lookahead != '\\') ADVANCE(1440);
      END_STATE();
    case 1441:
      ACCEPT_TOKEN(aux_sym_regex_escaped_char_token1);
      END_STATE();
    case 1442:
      ACCEPT_TOKEN(aux_sym_regex_escaped_char_token1);
      if (lookahead == '#') ADVANCE(1437);
      if (set_contains(extras_character_set_1, 10, lookahead)) ADVANCE(1442);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(1441);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 849},
  [2] = {.lex_state = 847, .external_lex_state = 2},
  [3] = {.lex_state = 847, .external_lex_state = 2},
  [4] = {.lex_state = 847, .external_lex_state = 2},
  [5] = {.lex_state = 847, .external_lex_state = 2},
  [6] = {.lex_state = 847, .external_lex_state = 2},
  [7] = {.lex_state = 847, .external_lex_state = 2},
  [8] = {.lex_state = 853},
  [9] = {.lex_state = 853},
  [10] = {.lex_state = 851, .external_lex_state = 3},
  [11] = {.lex_state = 851, .external_lex_state = 3},
  [12] = {.lex_state = 851, .external_lex_state = 3},
  [13] = {.lex_state = 851, .external_lex_state = 3},
  [14] = {.lex_state = 847, .external_lex_state = 2},
  [15] = {.lex_state = 853},
  [16] = {.lex_state = 847, .external_lex_state = 2},
  [17] = {.lex_state = 847, .external_lex_state = 2},
  [18] = {.lex_state = 852, .external_lex_state = 3},
  [19] = {.lex_state = 852, .external_lex_state = 3},
  [20] = {.lex_state = 853},
  [21] = {.lex_state = 853},
  [22] = {.lex_state = 853},
  [23] = {.lex_state = 853},
  [24] = {.lex_state = 853},
  [25] = {.lex_state = 853},
  [26] = {.lex_state = 853},
  [27] = {.lex_state = 853},
  [28] = {.lex_state = 853},
  [29] = {.lex_state = 853},
  [30] = {.lex_state = 853},
  [31] = {.lex_state = 853},
  [32] = {.lex_state = 853},
  [33] = {.lex_state = 853},
  [34] = {.lex_state = 853},
  [35] = {.lex_state = 853},
  [36] = {.lex_state = 853},
  [37] = {.lex_state = 853},
  [38] = {.lex_state = 853},
  [39] = {.lex_state = 853},
  [40] = {.lex_state = 853},
  [41] = {.lex_state = 853},
  [42] = {.lex_state = 853},
  [43] = {.lex_state = 849, .external_lex_state = 2},
  [44] = {.lex_state = 849, .external_lex_state = 2},
  [45] = {.lex_state = 849, .external_lex_state = 2},
  [46] = {.lex_state = 851, .external_lex_state = 3},
  [47] = {.lex_state = 851, .external_lex_state = 3},
  [48] = {.lex_state = 851, .external_lex_state = 3},
  [49] = {.lex_state = 851, .external_lex_state = 3},
  [50] = {.lex_state = 849, .external_lex_state = 2},
  [51] = {.lex_state = 849, .external_lex_state = 2},
  [52] = {.lex_state = 851, .external_lex_state = 3},
  [53] = {.lex_state = 851, .external_lex_state = 3},
  [54] = {.lex_state = 851, .external_lex_state = 3},
  [55] = {.lex_state = 851, .external_lex_state = 3},
  [56] = {.lex_state = 851, .external_lex_state = 3},
  [57] = {.lex_state = 851, .external_lex_state = 3},
  [58] = {.lex_state = 851, .external_lex_state = 3},
  [59] = {.lex_state = 851, .external_lex_state = 3},
  [60] = {.lex_state = 851, .external_lex_state = 3},
  [61] = {.lex_state = 851, .external_lex_state = 3},
  [62] = {.lex_state = 851, .external_lex_state = 3},
  [63] = {.lex_state = 851, .external_lex_state = 3},
  [64] = {.lex_state = 847, .external_lex_state = 2},
  [65] = {.lex_state = 849, .external_lex_state = 2},
  [66] = {.lex_state = 849, .external_lex_state = 2},
  [67] = {.lex_state = 849, .external_lex_state = 2},
  [68] = {.lex_state = 851, .external_lex_state = 3},
  [69] = {.lex_state = 849, .external_lex_state = 2},
  [70] = {.lex_state = 851, .external_lex_state = 3},
  [71] = {.lex_state = 851, .external_lex_state = 3},
  [72] = {.lex_state = 851, .external_lex_state = 3},
  [73] = {.lex_state = 851, .external_lex_state = 3},
  [74] = {.lex_state = 847, .external_lex_state = 2},
  [75] = {.lex_state = 847, .external_lex_state = 4},
  [76] = {.lex_state = 847, .external_lex_state = 4},
  [77] = {.lex_state = 852, .external_lex_state = 3},
  [78] = {.lex_state = 852, .external_lex_state = 3},
  [79] = {.lex_state = 852, .external_lex_state = 3},
  [80] = {.lex_state = 852, .external_lex_state = 3},
  [81] = {.lex_state = 847, .external_lex_state = 4},
  [82] = {.lex_state = 853},
  [83] = {.lex_state = 853},
  [84] = {.lex_state = 853},
  [85] = {.lex_state = 852, .external_lex_state = 3},
  [86] = {.lex_state = 852, .external_lex_state = 3},
  [87] = {.lex_state = 852, .external_lex_state = 3},
  [88] = {.lex_state = 852, .external_lex_state = 3},
  [89] = {.lex_state = 849, .external_lex_state = 2},
  [90] = {.lex_state = 852, .external_lex_state = 3},
  [91] = {.lex_state = 852, .external_lex_state = 3},
  [92] = {.lex_state = 852, .external_lex_state = 3},
  [93] = {.lex_state = 847, .external_lex_state = 4},
  [94] = {.lex_state = 847, .external_lex_state = 4},
  [95] = {.lex_state = 847, .external_lex_state = 4},
  [96] = {.lex_state = 847, .external_lex_state = 4},
  [97] = {.lex_state = 847, .external_lex_state = 4},
  [98] = {.lex_state = 847, .external_lex_state = 4},
  [99] = {.lex_state = 847, .external_lex_state = 4},
  [100] = {.lex_state = 847, .external_lex_state = 4},
  [101] = {.lex_state = 847, .external_lex_state = 4},
  [102] = {.lex_state = 847, .external_lex_state = 4},
  [103] = {.lex_state = 847, .external_lex_state = 4},
  [104] = {.lex_state = 847, .external_lex_state = 4},
  [105] = {.lex_state = 847, .external_lex_state = 4},
  [106] = {.lex_state = 847, .external_lex_state = 4},
  [107] = {.lex_state = 847, .external_lex_state = 4},
  [108] = {.lex_state = 849, .external_lex_state = 2},
  [109] = {.lex_state = 847, .external_lex_state = 4},
  [110] = {.lex_state = 847, .external_lex_state = 4},
  [111] = {.lex_state = 847, .external_lex_state = 4},
  [112] = {.lex_state = 847, .external_lex_state = 4},
  [113] = {.lex_state = 847, .external_lex_state = 4},
  [114] = {.lex_state = 847, .external_lex_state = 4},
  [115] = {.lex_state = 847, .external_lex_state = 4},
  [116] = {.lex_state = 847, .external_lex_state = 4},
  [117] = {.lex_state = 19},
  [118] = {.lex_state = 847},
  [119] = {.lex_state = 847},
  [120] = {.lex_state = 18},
  [121] = {.lex_state = 849},
  [122] = {.lex_state = 847},
  [123] = {.lex_state = 849},
  [124] = {.lex_state = 847},
  [125] = {.lex_state = 847},
  [126] = {.lex_state = 847},
  [127] = {.lex_state = 847},
  [128] = {.lex_state = 847},
  [129] = {.lex_state = 847},
  [130] = {.lex_state = 849},
  [131] = {.lex_state = 849},
  [132] = {.lex_state = 849},
  [133] = {.lex_state = 5, .external_lex_state = 4},
  [134] = {.lex_state = 849},
  [135] = {.lex_state = 853},
  [136] = {.lex_state = 13, .external_lex_state = 4},
  [137] = {.lex_state = 849},
  [138] = {.lex_state = 853},
  [139] = {.lex_state = 853},
  [140] = {.lex_state = 849},
  [141] = {.lex_state = 853},
  [142] = {.lex_state = 853},
  [143] = {.lex_state = 849},
  [144] = {.lex_state = 853},
  [145] = {.lex_state = 849},
  [146] = {.lex_state = 849},
  [147] = {.lex_state = 849},
  [148] = {.lex_state = 849},
  [149] = {.lex_state = 14, .external_lex_state = 4},
  [150] = {.lex_state = 849},
  [151] = {.lex_state = 849},
  [152] = {.lex_state = 849},
  [153] = {.lex_state = 849},
  [154] = {.lex_state = 849},
  [155] = {.lex_state = 849},
  [156] = {.lex_state = 849},
  [157] = {.lex_state = 6},
  [158] = {.lex_state = 19, .external_lex_state = 2},
  [159] = {.lex_state = 6},
  [160] = {.lex_state = 15, .external_lex_state = 4},
  [161] = {.lex_state = 1, .external_lex_state = 5},
  [162] = {.lex_state = 6},
  [163] = {.lex_state = 1, .external_lex_state = 5},
  [164] = {.lex_state = 6},
  [165] = {.lex_state = 1, .external_lex_state = 5},
  [166] = {.lex_state = 19, .external_lex_state = 2},
  [167] = {.lex_state = 19, .external_lex_state = 2},
  [168] = {.lex_state = 19, .external_lex_state = 2},
  [169] = {.lex_state = 6},
  [170] = {.lex_state = 15, .external_lex_state = 4},
  [171] = {.lex_state = 15, .external_lex_state = 4},
  [172] = {.lex_state = 24},
  [173] = {.lex_state = 853},
  [174] = {.lex_state = 853},
  [175] = {.lex_state = 7},
  [176] = {.lex_state = 853},
  [177] = {.lex_state = 853},
  [178] = {.lex_state = 853},
  [179] = {.lex_state = 853},
  [180] = {.lex_state = 853},
  [181] = {.lex_state = 853},
  [182] = {.lex_state = 853},
  [183] = {.lex_state = 853},
  [184] = {.lex_state = 16},
  [185] = {.lex_state = 8, .external_lex_state = 4},
  [186] = {.lex_state = 21},
  [187] = {.lex_state = 27},
  [188] = {.lex_state = 25, .external_lex_state = 6},
  [189] = {.lex_state = 21},
  [190] = {.lex_state = 27},
  [191] = {.lex_state = 22},
  [192] = {.lex_state = 9},
  [193] = {.lex_state = 9},
  [194] = {.lex_state = 22},
  [195] = {.lex_state = 8, .external_lex_state = 4},
  [196] = {.lex_state = 16},
  [197] = {.lex_state = 16},
  [198] = {.lex_state = 22},
  [199] = {.lex_state = 21},
  [200] = {.lex_state = 21},
  [201] = {.lex_state = 9},
  [202] = {.lex_state = 16},
  [203] = {.lex_state = 21},
  [204] = {.lex_state = 16},
  [205] = {.lex_state = 22},
  [206] = {.lex_state = 22},
  [207] = {.lex_state = 23},
  [208] = {.lex_state = 27},
  [209] = {.lex_state = 6},
  [210] = {.lex_state = 27},
  [211] = {.lex_state = 15, .external_lex_state = 4},
  [212] = {.lex_state = 6},
  [213] = {.lex_state = 853},
  [214] = {.lex_state = 27},
  [215] = {.lex_state = 15, .external_lex_state = 4},
  [216] = {.lex_state = 24},
  [217] = {.lex_state = 17},
  [218] = {.lex_state = 25},
  [219] = {.lex_state = 25},
  [220] = {.lex_state = 25},
  [221] = {.lex_state = 25},
  [222] = {.lex_state = 20},
  [223] = {.lex_state = 20},
  [224] = {.lex_state = 25},
  [225] = {.lex_state = 8, .external_lex_state = 4},
  [226] = {.lex_state = 22},
  [227] = {.lex_state = 8, .external_lex_state = 4},
  [228] = {.lex_state = 16},
  [229] = {.lex_state = 29},
  [230] = {.lex_state = 19},
  [231] = {.lex_state = 22},
  [232] = {.lex_state = 1, .external_lex_state = 5},
  [233] = {.lex_state = 18},
  [234] = {.lex_state = 1, .external_lex_state = 5},
  [235] = {.lex_state = 9},
  [236] = {.lex_state = 16},
  [237] = {.lex_state = 18},
  [238] = {.lex_state = 2, .external_lex_state = 4},
  [239] = {.lex_state = 9},
  [240] = {.lex_state = 853},
  [241] = {.lex_state = 6},
  [242] = {.lex_state = 27},
  [243] = {.lex_state = 10},
  [244] = {.lex_state = 15, .external_lex_state = 4},
  [245] = {.lex_state = 849, .external_lex_state = 4},
  [246] = {.lex_state = 849, .external_lex_state = 4},
  [247] = {.lex_state = 849, .external_lex_state = 4},
  [248] = {.lex_state = 2, .external_lex_state = 4},
  [249] = {.lex_state = 853},
  [250] = {.lex_state = 849, .external_lex_state = 4},
  [251] = {.lex_state = 11, .external_lex_state = 4},
  [252] = {.lex_state = 1, .external_lex_state = 6},
  [253] = {.lex_state = 849, .external_lex_state = 4},
  [254] = {.lex_state = 15, .external_lex_state = 4},
  [255] = {.lex_state = 1, .external_lex_state = 6},
  [256] = {.lex_state = 849, .external_lex_state = 4},
  [257] = {.lex_state = 849, .external_lex_state = 4},
  [258] = {.lex_state = 849, .external_lex_state = 4},
  [259] = {.lex_state = 11, .external_lex_state = 4},
  [260] = {.lex_state = 10},
  [261] = {.lex_state = 27},
  [262] = {.lex_state = 849, .external_lex_state = 4},
  [263] = {.lex_state = 6},
  [264] = {.lex_state = 849, .external_lex_state = 4},
  [265] = {.lex_state = 15, .external_lex_state = 4},
  [266] = {.lex_state = 849, .external_lex_state = 4},
  [267] = {.lex_state = 15, .external_lex_state = 4},
  [268] = {.lex_state = 15, .external_lex_state = 4},
  [269] = {.lex_state = 849, .external_lex_state = 4},
  [270] = {.lex_state = 849, .external_lex_state = 4},
  [271] = {.lex_state = 21},
  [272] = {.lex_state = 849, .external_lex_state = 4},
  [273] = {.lex_state = 6},
  [274] = {.lex_state = 849, .external_lex_state = 4},
  [275] = {.lex_state = 849, .external_lex_state = 4},
  [276] = {.lex_state = 849, .external_lex_state = 4},
  [277] = {.lex_state = 849, .external_lex_state = 4},
  [278] = {.lex_state = 15, .external_lex_state = 4},
  [279] = {.lex_state = 853},
  [280] = {.lex_state = 25},
  [281] = {.lex_state = 849, .external_lex_state = 4},
  [282] = {.lex_state = 25},
  [283] = {.lex_state = 9},
  [284] = {.lex_state = 849, .external_lex_state = 4},
  [285] = {.lex_state = 21},
  [286] = {.lex_state = 6},
  [287] = {.lex_state = 849, .external_lex_state = 4},
  [288] = {.lex_state = 849, .external_lex_state = 4},
  [289] = {.lex_state = 849, .external_lex_state = 4},
  [290] = {.lex_state = 16},
  [291] = {.lex_state = 849, .external_lex_state = 4},
  [292] = {.lex_state = 16},
  [293] = {.lex_state = 15, .external_lex_state = 4},
  [294] = {.lex_state = 849, .external_lex_state = 4},
  [295] = {.lex_state = 849, .external_lex_state = 4},
  [296] = {.lex_state = 849, .external_lex_state = 4},
  [297] = {.lex_state = 6},
  [298] = {.lex_state = 849, .external_lex_state = 4},
  [299] = {.lex_state = 6},
  [300] = {.lex_state = 6},
  [301] = {.lex_state = 6},
  [302] = {.lex_state = 16},
  [303] = {.lex_state = 6},
  [304] = {.lex_state = 16},
  [305] = {.lex_state = 8, .external_lex_state = 4},
  [306] = {.lex_state = 16},
  [307] = {.lex_state = 15, .external_lex_state = 4},
  [308] = {.lex_state = 8, .external_lex_state = 4},
  [309] = {.lex_state = 849, .external_lex_state = 4},
  [310] = {.lex_state = 9},
  [311] = {.lex_state = 849, .external_lex_state = 4},
  [312] = {.lex_state = 16},
  [313] = {.lex_state = 6},
  [314] = {.lex_state = 849, .external_lex_state = 4},
  [315] = {.lex_state = 10},
  [316] = {.lex_state = 16},
  [317] = {.lex_state = 10},
  [318] = {.lex_state = 25},
  [319] = {.lex_state = 25},
  [320] = {.lex_state = 11, .external_lex_state = 4},
  [321] = {.lex_state = 21},
  [322] = {.lex_state = 21},
  [323] = {.lex_state = 853},
  [324] = {.lex_state = 21},
  [325] = {.lex_state = 11, .external_lex_state = 4},
  [326] = {.lex_state = 853},
  [327] = {.lex_state = 22},
  [328] = {.lex_state = 21},
  [329] = {.lex_state = 22},
  [330] = {.lex_state = 22},
  [331] = {.lex_state = 18},
  [332] = {.lex_state = 18},
  [333] = {.lex_state = 28},
  [334] = {.lex_state = 19},
  [335] = {.lex_state = 22},
  [336] = {.lex_state = 18},
  [337] = {.lex_state = 853},
  [338] = {.lex_state = 853},
  [339] = {.lex_state = 25},
  [340] = {.lex_state = 22},
  [341] = {.lex_state = 21},
  [342] = {.lex_state = 28},
  [343] = {.lex_state = 853},
  [344] = {.lex_state = 11, .external_lex_state = 4},
  [345] = {.lex_state = 27},
  [346] = {.lex_state = 28},
  [347] = {.lex_state = 853},
  [348] = {.lex_state = 853},
  [349] = {.lex_state = 27},
  [350] = {.lex_state = 853},
  [351] = {.lex_state = 18},
  [352] = {.lex_state = 853},
  [353] = {.lex_state = 18},
  [354] = {.lex_state = 18},
  [355] = {.lex_state = 18},
  [356] = {.lex_state = 31},
  [357] = {.lex_state = 31},
  [358] = {.lex_state = 31},
  [359] = {.lex_state = 31},
  [360] = {.lex_state = 18},
  [361] = {.lex_state = 18},
  [362] = {.lex_state = 31},
  [363] = {.lex_state = 18},
  [364] = {.lex_state = 853},
  [365] = {.lex_state = 31},
  [366] = {.lex_state = 18},
  [367] = {.lex_state = 853},
  [368] = {.lex_state = 18},
  [369] = {.lex_state = 31},
  [370] = {.lex_state = 31},
  [371] = {.lex_state = 853},
  [372] = {.lex_state = 20},
  [373] = {.lex_state = 18},
  [374] = {.lex_state = 18},
  [375] = {.lex_state = 4, .external_lex_state = 4},
  [376] = {.lex_state = 853},
  [377] = {.lex_state = 853},
  [378] = {.lex_state = 28},
  [379] = {.lex_state = 4, .external_lex_state = 4},
  [380] = {.lex_state = 18},
  [381] = {.lex_state = 24},
  [382] = {.lex_state = 24},
  [383] = {.lex_state = 18},
  [384] = {.lex_state = 31},
  [385] = {.lex_state = 18},
  [386] = {.lex_state = 18},
  [387] = {.lex_state = 31},
  [388] = {.lex_state = 853},
  [389] = {.lex_state = 18},
  [390] = {.lex_state = 853},
  [391] = {.lex_state = 18},
  [392] = {.lex_state = 18},
  [393] = {.lex_state = 10},
  [394] = {.lex_state = 31},
  [395] = {.lex_state = 31},
  [396] = {.lex_state = 31},
  [397] = {.lex_state = 853},
  [398] = {.lex_state = 849, .external_lex_state = 4},
  [399] = {.lex_state = 849, .external_lex_state = 4},
  [400] = {.lex_state = 849, .external_lex_state = 4},
  [401] = {.lex_state = 849, .external_lex_state = 4},
  [402] = {.lex_state = 849, .external_lex_state = 4},
  [403] = {.lex_state = 849, .external_lex_state = 4},
  [404] = {.lex_state = 849, .external_lex_state = 4},
  [405] = {.lex_state = 849, .external_lex_state = 4},
  [406] = {.lex_state = 849, .external_lex_state = 4},
  [407] = {.lex_state = 849, .external_lex_state = 4},
  [408] = {.lex_state = 849, .external_lex_state = 4},
  [409] = {.lex_state = 849, .external_lex_state = 4},
  [410] = {.lex_state = 849, .external_lex_state = 4},
  [411] = {.lex_state = 853},
  [412] = {.lex_state = 849, .external_lex_state = 4},
  [413] = {.lex_state = 849, .external_lex_state = 4},
  [414] = {.lex_state = 849, .external_lex_state = 4},
  [415] = {.lex_state = 849, .external_lex_state = 4},
  [416] = {.lex_state = 849, .external_lex_state = 4},
  [417] = {.lex_state = 849, .external_lex_state = 4},
  [418] = {.lex_state = 849, .external_lex_state = 4},
  [419] = {.lex_state = 849, .external_lex_state = 4},
  [420] = {.lex_state = 849, .external_lex_state = 4},
  [421] = {.lex_state = 849, .external_lex_state = 4},
  [422] = {.lex_state = 849, .external_lex_state = 4},
  [423] = {.lex_state = 849, .external_lex_state = 4},
  [424] = {.lex_state = 849, .external_lex_state = 4},
  [425] = {.lex_state = 849, .external_lex_state = 4},
  [426] = {.lex_state = 849, .external_lex_state = 4},
  [427] = {.lex_state = 853},
  [428] = {.lex_state = 849, .external_lex_state = 4},
  [429] = {.lex_state = 849, .external_lex_state = 4},
  [430] = {.lex_state = 849, .external_lex_state = 4},
  [431] = {.lex_state = 28},
  [432] = {.lex_state = 849, .external_lex_state = 4},
  [433] = {.lex_state = 849, .external_lex_state = 4},
  [434] = {.lex_state = 853},
  [435] = {.lex_state = 849, .external_lex_state = 4},
  [436] = {.lex_state = 849, .external_lex_state = 4},
  [437] = {.lex_state = 28},
  [438] = {.lex_state = 849, .external_lex_state = 4},
  [439] = {.lex_state = 853},
  [440] = {.lex_state = 853},
  [441] = {.lex_state = 853},
  [442] = {.lex_state = 849, .external_lex_state = 4},
  [443] = {.lex_state = 849, .external_lex_state = 4},
  [444] = {.lex_state = 28},
  [445] = {.lex_state = 849, .external_lex_state = 4},
  [446] = {.lex_state = 849, .external_lex_state = 4},
  [447] = {.lex_state = 849, .external_lex_state = 4},
  [448] = {.lex_state = 849, .external_lex_state = 4},
  [449] = {.lex_state = 853},
  [450] = {.lex_state = 849, .external_lex_state = 4},
  [451] = {.lex_state = 849, .external_lex_state = 4},
  [452] = {.lex_state = 32},
  [453] = {.lex_state = 849, .external_lex_state = 4},
  [454] = {.lex_state = 849, .external_lex_state = 4},
  [455] = {.lex_state = 849, .external_lex_state = 4},
  [456] = {.lex_state = 849, .external_lex_state = 4},
  [457] = {.lex_state = 849, .external_lex_state = 4},
  [458] = {.lex_state = 853},
  [459] = {.lex_state = 28},
  [460] = {.lex_state = 853},
  [461] = {.lex_state = 853},
  [462] = {.lex_state = 853},
  [463] = {.lex_state = 853},
  [464] = {.lex_state = 853},
  [465] = {.lex_state = 849, .external_lex_state = 4},
  [466] = {.lex_state = 853},
  [467] = {.lex_state = 853},
  [468] = {.lex_state = 853},
  [469] = {.lex_state = 849, .external_lex_state = 4},
  [470] = {.lex_state = 853},
  [471] = {.lex_state = 849, .external_lex_state = 4},
  [472] = {.lex_state = 28},
  [473] = {.lex_state = 853},
  [474] = {.lex_state = 18},
  [475] = {.lex_state = 28},
  [476] = {.lex_state = 849, .external_lex_state = 4},
  [477] = {.lex_state = 849, .external_lex_state = 4},
  [478] = {.lex_state = 853},
  [479] = {.lex_state = 32},
  [480] = {.lex_state = 849, .external_lex_state = 4},
  [481] = {.lex_state = 849, .external_lex_state = 4},
  [482] = {.lex_state = 853},
  [483] = {.lex_state = 849, .external_lex_state = 4},
  [484] = {.lex_state = 28},
  [485] = {.lex_state = 28},
  [486] = {.lex_state = 849, .external_lex_state = 4},
  [487] = {.lex_state = 849, .external_lex_state = 4},
  [488] = {.lex_state = 849, .external_lex_state = 4},
  [489] = {.lex_state = 849, .external_lex_state = 4},
  [490] = {.lex_state = 849, .external_lex_state = 4},
  [491] = {.lex_state = 849, .external_lex_state = 4},
  [492] = {.lex_state = 849, .external_lex_state = 4},
  [493] = {.lex_state = 849, .external_lex_state = 4},
  [494] = {.lex_state = 19},
  [495] = {.lex_state = 849, .external_lex_state = 4},
  [496] = {.lex_state = 849, .external_lex_state = 4},
  [497] = {.lex_state = 28},
  [498] = {.lex_state = 849, .external_lex_state = 4},
  [499] = {.lex_state = 18},
  [500] = {.lex_state = 849, .external_lex_state = 4},
  [501] = {.lex_state = 18},
  [502] = {.lex_state = 28},
  [503] = {.lex_state = 28},
  [504] = {.lex_state = 849, .external_lex_state = 4},
  [505] = {.lex_state = 28},
  [506] = {.lex_state = 28},
  [507] = {.lex_state = 28},
  [508] = {.lex_state = 28},
  [509] = {.lex_state = 18},
  [510] = {.lex_state = 28},
  [511] = {.lex_state = 28},
  [512] = {.lex_state = 28},
  [513] = {.lex_state = 849, .external_lex_state = 4},
  [514] = {.lex_state = 853},
  [515] = {.lex_state = 853},
  [516] = {.lex_state = 28},
  [517] = {.lex_state = 849, .external_lex_state = 4},
  [518] = {.lex_state = 853},
  [519] = {.lex_state = 853},
  [520] = {.lex_state = 853},
  [521] = {.lex_state = 849, .external_lex_state = 4},
  [522] = {.lex_state = 849, .external_lex_state = 4},
  [523] = {.lex_state = 28},
  [524] = {.lex_state = 19},
  [525] = {.lex_state = 853},
  [526] = {.lex_state = 853},
  [527] = {.lex_state = 1397},
  [528] = {.lex_state = 19},
  [529] = {.lex_state = 853},
  [530] = {.lex_state = 853},
  [531] = {.lex_state = 853},
  [532] = {.lex_state = 33},
  [533] = {.lex_state = 30},
  [534] = {.lex_state = 853},
  [535] = {.lex_state = 853},
  [536] = {.lex_state = 853},
  [537] = {.lex_state = 19},
  [538] = {.lex_state = 853},
  [539] = {.lex_state = 853},
  [540] = {.lex_state = 18},
  [541] = {.lex_state = 19},
  [542] = {.lex_state = 853},
  [543] = {.lex_state = 853},
  [544] = {.lex_state = 853},
  [545] = {.lex_state = 28},
  [546] = {.lex_state = 18},
  [547] = {.lex_state = 853},
  [548] = {.lex_state = 853},
  [549] = {.lex_state = 18},
  [550] = {.lex_state = 853},
  [551] = {.lex_state = 18},
  [552] = {.lex_state = 853},
  [553] = {.lex_state = 853},
  [554] = {.lex_state = 853},
  [555] = {.lex_state = 853},
  [556] = {.lex_state = 853},
  [557] = {.lex_state = 853},
  [558] = {.lex_state = 853},
  [559] = {.lex_state = 34},
  [560] = {.lex_state = 853},
  [561] = {.lex_state = 33},
  [562] = {.lex_state = 19},
  [563] = {.lex_state = 853},
  [564] = {.lex_state = 34},
  [565] = {.lex_state = 853},
  [566] = {.lex_state = 12},
  [567] = {.lex_state = 853},
  [568] = {.lex_state = 19},
  [569] = {.lex_state = 853},
  [570] = {.lex_state = 853},
  [571] = {.lex_state = 853},
  [572] = {.lex_state = 853},
  [573] = {.lex_state = 853},
  [574] = {.lex_state = 853},
  [575] = {.lex_state = 853},
  [576] = {.lex_state = 853},
  [577] = {.lex_state = 853},
  [578] = {.lex_state = 853},
  [579] = {.lex_state = 853},
  [580] = {.lex_state = 853},
  [581] = {.lex_state = 853},
  [582] = {.lex_state = 853},
  [583] = {.lex_state = 853},
  [584] = {.lex_state = 849},
  [585] = {.lex_state = 849},
  [586] = {.lex_state = 853},
  [587] = {.lex_state = 853},
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
    [anon_sym_h] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_LT_QMARK] = ACTIONS(1),
    [anon_sym_QMARK_GT] = ACTIONS(1),
    [anon_sym_LT_SLASH] = ACTIONS(1),
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
    [sym_hurl_file] = STATE(530),
    [sym_entry] = STATE(123),
    [sym__comment_or_new_line] = STATE(131),
    [sym_request] = STATE(118),
    [sym_method] = STATE(160),
    [aux_sym_hurl_file_repeat1] = STATE(123),
    [aux_sym_hurl_file_repeat2] = STATE(131),
    [aux_sym__comment_or_new_line_repeat1] = STATE(146),
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
    [sym_option] = STATE(314),
    [sym_ca_certificate_option] = STATE(504),
    [sym_cert_option] = STATE(504),
    [sym_boolean_option] = STATE(504),
    [sym_boolean_option_key] = STATE(573),
    [sym_integer_option] = STATE(504),
    [sym_integer_option_key] = STATE(572),
    [sym_count_option] = STATE(504),
    [sym_count_option_key] = STATE(571),
    [sym_verbosity_option] = STATE(504),
    [sym_duration_option] = STATE(504),
    [sym_duration_option_key] = STATE(570),
    [sym_string_option] = STATE(504),
    [sym_string_option_key] = STATE(569),
    [sym_variable_option] = STATE(504),
    [aux_sym_options_section_repeat1] = STATE(2),
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
    [anon_sym_cert] = ACTIONS(20),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_digest] = ACTIONS(23),
    [anon_sym_http1_DOT1] = ACTIONS(23),
    [anon_sym_negotiate] = ACTIONS(23),
    [anon_sym_ntlm] = ACTIONS(23),
    [anon_sym_compressed] = ACTIONS(23),
    [anon_sym_location] = ACTIONS(23),
    [anon_sym_location_DASHtrusted] = ACTIONS(23),
    [anon_sym_http1_DOT0] = ACTIONS(23),
    [anon_sym_http2] = ACTIONS(23),
    [anon_sym_http3] = ACTIONS(23),
    [anon_sym_insecure] = ACTIONS(23),
    [anon_sym_ipv4] = ACTIONS(23),
    [anon_sym_ipv6] = ACTIONS(23),
    [anon_sym_netrc] = ACTIONS(23),
    [anon_sym_netrc_DASHoptional] = ACTIONS(23),
    [anon_sym_path_DASHas_DASHis] = ACTIONS(23),
    [anon_sym_skip] = ACTIONS(23),
    [anon_sym_verbose] = ACTIONS(23),
    [anon_sym_very_DASHverbose] = ACTIONS(23),
    [anon_sym_retry_DASHmax_DASHcount] = ACTIONS(26),
    [anon_sym_limit_DASHrate] = ACTIONS(26),
    [anon_sym_max_DASHredirs] = ACTIONS(29),
    [anon_sym_repeat] = ACTIONS(29),
    [anon_sym_retry] = ACTIONS(29),
    [anon_sym_verbosity] = ACTIONS(32),
    [anon_sym_connect_DASHtimeout] = ACTIONS(35),
    [anon_sym_delay] = ACTIONS(35),
    [anon_sym_retry_DASHinterval] = ACTIONS(35),
    [anon_sym_max_DASHtime] = ACTIONS(35),
    [anon_sym_resolve] = ACTIONS(38),
    [anon_sym_aws_DASHsigv4] = ACTIONS(38),
    [anon_sym_key] = ACTIONS(38),
    [anon_sym_connect_DASHto] = ACTIONS(38),
    [anon_sym_header] = ACTIONS(38),
    [anon_sym_netrc_DASHfile] = ACTIONS(38),
    [anon_sym_output] = ACTIONS(38),
    [anon_sym_pinnedpubkey] = ACTIONS(38),
    [anon_sym_proxy] = ACTIONS(38),
    [anon_sym_unix_DASHsocket] = ACTIONS(38),
    [anon_sym_user] = ACTIONS(38),
    [anon_sym_variable] = ACTIONS(41),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [anon_sym_LT] = ACTIONS(15),
    [anon_sym_LT_QMARK] = ACTIONS(15),
    [anon_sym_base64_COMMA] = ACTIONS(15),
    [anon_sym_hex_COMMA] = ACTIONS(15),
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
    [sym_option] = STATE(314),
    [sym_ca_certificate_option] = STATE(504),
    [sym_cert_option] = STATE(504),
    [sym_boolean_option] = STATE(504),
    [sym_boolean_option_key] = STATE(573),
    [sym_integer_option] = STATE(504),
    [sym_integer_option_key] = STATE(572),
    [sym_count_option] = STATE(504),
    [sym_count_option_key] = STATE(571),
    [sym_verbosity_option] = STATE(504),
    [sym_duration_option] = STATE(504),
    [sym_duration_option_key] = STATE(570),
    [sym_string_option] = STATE(504),
    [sym_string_option_key] = STATE(569),
    [sym_variable_option] = STATE(504),
    [aux_sym_options_section_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(44),
    [anon_sym_LF] = ACTIONS(44),
    [anon_sym_GET] = ACTIONS(46),
    [anon_sym_HEAD] = ACTIONS(46),
    [anon_sym_POST] = ACTIONS(46),
    [anon_sym_PUT] = ACTIONS(46),
    [anon_sym_DELETE] = ACTIONS(46),
    [anon_sym_CONNECT] = ACTIONS(46),
    [anon_sym_OPTIONS] = ACTIONS(46),
    [anon_sym_TRACE] = ACTIONS(46),
    [anon_sym_PATCH] = ACTIONS(46),
    [anon_sym_LINK] = ACTIONS(46),
    [anon_sym_UNLINK] = ACTIONS(46),
    [anon_sym_PURGE] = ACTIONS(46),
    [anon_sym_LOCK] = ACTIONS(46),
    [anon_sym_UNLOCK] = ACTIONS(46),
    [anon_sym_PROPFIND] = ACTIONS(46),
    [anon_sym_VIEW] = ACTIONS(46),
    [aux_sym_method_token1] = ACTIONS(46),
    [anon_sym_HTTP_SLASH1_DOT0] = ACTIONS(46),
    [anon_sym_HTTP_SLASH1_DOT1] = ACTIONS(46),
    [anon_sym_HTTP_SLASH2] = ACTIONS(46),
    [anon_sym_HTTP_SLASH3] = ACTIONS(46),
    [anon_sym_HTTP_SLASH_STAR] = ACTIONS(46),
    [anon_sym_HTTP] = ACTIONS(46),
    [anon_sym_LBRACKBasicAuth_RBRACK] = ACTIONS(46),
    [anon_sym_LBRACKQuery_RBRACK] = ACTIONS(46),
    [anon_sym_LBRACKQueryStringParams_RBRACK] = ACTIONS(46),
    [anon_sym_LBRACKForm_RBRACK] = ACTIONS(46),
    [anon_sym_LBRACKFormParams_RBRACK] = ACTIONS(46),
    [anon_sym_LBRACKMultipart_RBRACK] = ACTIONS(46),
    [anon_sym_LBRACKMultipartFormData_RBRACK] = ACTIONS(46),
    [anon_sym_LBRACKCookies_RBRACK] = ACTIONS(46),
    [anon_sym_LBRACKOptions_RBRACK] = ACTIONS(46),
    [anon_sym_null] = ACTIONS(46),
    [anon_sym_file_COMMA] = ACTIONS(46),
    [anon_sym_cacert] = ACTIONS(48),
    [anon_sym_cert] = ACTIONS(50),
    [anon_sym_LBRACE] = ACTIONS(46),
    [anon_sym_digest] = ACTIONS(52),
    [anon_sym_http1_DOT1] = ACTIONS(52),
    [anon_sym_negotiate] = ACTIONS(52),
    [anon_sym_ntlm] = ACTIONS(52),
    [anon_sym_compressed] = ACTIONS(52),
    [anon_sym_location] = ACTIONS(52),
    [anon_sym_location_DASHtrusted] = ACTIONS(52),
    [anon_sym_http1_DOT0] = ACTIONS(52),
    [anon_sym_http2] = ACTIONS(52),
    [anon_sym_http3] = ACTIONS(52),
    [anon_sym_insecure] = ACTIONS(52),
    [anon_sym_ipv4] = ACTIONS(52),
    [anon_sym_ipv6] = ACTIONS(52),
    [anon_sym_netrc] = ACTIONS(52),
    [anon_sym_netrc_DASHoptional] = ACTIONS(52),
    [anon_sym_path_DASHas_DASHis] = ACTIONS(52),
    [anon_sym_skip] = ACTIONS(52),
    [anon_sym_verbose] = ACTIONS(52),
    [anon_sym_very_DASHverbose] = ACTIONS(52),
    [anon_sym_retry_DASHmax_DASHcount] = ACTIONS(54),
    [anon_sym_limit_DASHrate] = ACTIONS(54),
    [anon_sym_max_DASHredirs] = ACTIONS(56),
    [anon_sym_repeat] = ACTIONS(56),
    [anon_sym_retry] = ACTIONS(56),
    [anon_sym_verbosity] = ACTIONS(58),
    [anon_sym_connect_DASHtimeout] = ACTIONS(60),
    [anon_sym_delay] = ACTIONS(60),
    [anon_sym_retry_DASHinterval] = ACTIONS(60),
    [anon_sym_max_DASHtime] = ACTIONS(60),
    [anon_sym_resolve] = ACTIONS(62),
    [anon_sym_aws_DASHsigv4] = ACTIONS(62),
    [anon_sym_key] = ACTIONS(62),
    [anon_sym_connect_DASHto] = ACTIONS(62),
    [anon_sym_header] = ACTIONS(62),
    [anon_sym_netrc_DASHfile] = ACTIONS(62),
    [anon_sym_output] = ACTIONS(62),
    [anon_sym_pinnedpubkey] = ACTIONS(62),
    [anon_sym_proxy] = ACTIONS(62),
    [anon_sym_unix_DASHsocket] = ACTIONS(62),
    [anon_sym_user] = ACTIONS(62),
    [anon_sym_variable] = ACTIONS(64),
    [anon_sym_DQUOTE] = ACTIONS(46),
    [anon_sym_LT] = ACTIONS(46),
    [anon_sym_LT_QMARK] = ACTIONS(46),
    [anon_sym_base64_COMMA] = ACTIONS(46),
    [anon_sym_hex_COMMA] = ACTIONS(46),
    [anon_sym_BQUOTE] = ACTIONS(46),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(46),
    [sym__json_number] = ACTIONS(46),
    [anon_sym_true] = ACTIONS(46),
    [anon_sym_false] = ACTIONS(46),
    [anon_sym_LBRACE_LBRACE2] = ACTIONS(46),
    [sym_comment] = ACTIONS(46),
    [sym__json_array_start] = ACTIONS(44),
  },
  [4] = {
    [sym_option] = STATE(314),
    [sym_ca_certificate_option] = STATE(504),
    [sym_cert_option] = STATE(504),
    [sym_boolean_option] = STATE(504),
    [sym_boolean_option_key] = STATE(573),
    [sym_integer_option] = STATE(504),
    [sym_integer_option_key] = STATE(572),
    [sym_count_option] = STATE(504),
    [sym_count_option_key] = STATE(571),
    [sym_verbosity_option] = STATE(504),
    [sym_duration_option] = STATE(504),
    [sym_duration_option_key] = STATE(570),
    [sym_string_option] = STATE(504),
    [sym_string_option_key] = STATE(569),
    [sym_variable_option] = STATE(504),
    [aux_sym_options_section_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(66),
    [anon_sym_LF] = ACTIONS(66),
    [anon_sym_GET] = ACTIONS(68),
    [anon_sym_HEAD] = ACTIONS(68),
    [anon_sym_POST] = ACTIONS(68),
    [anon_sym_PUT] = ACTIONS(68),
    [anon_sym_DELETE] = ACTIONS(68),
    [anon_sym_CONNECT] = ACTIONS(68),
    [anon_sym_OPTIONS] = ACTIONS(68),
    [anon_sym_TRACE] = ACTIONS(68),
    [anon_sym_PATCH] = ACTIONS(68),
    [anon_sym_LINK] = ACTIONS(68),
    [anon_sym_UNLINK] = ACTIONS(68),
    [anon_sym_PURGE] = ACTIONS(68),
    [anon_sym_LOCK] = ACTIONS(68),
    [anon_sym_UNLOCK] = ACTIONS(68),
    [anon_sym_PROPFIND] = ACTIONS(68),
    [anon_sym_VIEW] = ACTIONS(68),
    [aux_sym_method_token1] = ACTIONS(68),
    [anon_sym_HTTP_SLASH1_DOT0] = ACTIONS(68),
    [anon_sym_HTTP_SLASH1_DOT1] = ACTIONS(68),
    [anon_sym_HTTP_SLASH2] = ACTIONS(68),
    [anon_sym_HTTP_SLASH3] = ACTIONS(68),
    [anon_sym_HTTP_SLASH_STAR] = ACTIONS(68),
    [anon_sym_HTTP] = ACTIONS(68),
    [anon_sym_LBRACKBasicAuth_RBRACK] = ACTIONS(68),
    [anon_sym_LBRACKQuery_RBRACK] = ACTIONS(68),
    [anon_sym_LBRACKQueryStringParams_RBRACK] = ACTIONS(68),
    [anon_sym_LBRACKForm_RBRACK] = ACTIONS(68),
    [anon_sym_LBRACKFormParams_RBRACK] = ACTIONS(68),
    [anon_sym_LBRACKMultipart_RBRACK] = ACTIONS(68),
    [anon_sym_LBRACKMultipartFormData_RBRACK] = ACTIONS(68),
    [anon_sym_LBRACKCookies_RBRACK] = ACTIONS(68),
    [anon_sym_LBRACKOptions_RBRACK] = ACTIONS(68),
    [anon_sym_null] = ACTIONS(68),
    [anon_sym_file_COMMA] = ACTIONS(68),
    [anon_sym_cacert] = ACTIONS(48),
    [anon_sym_cert] = ACTIONS(50),
    [anon_sym_LBRACE] = ACTIONS(68),
    [anon_sym_digest] = ACTIONS(52),
    [anon_sym_http1_DOT1] = ACTIONS(52),
    [anon_sym_negotiate] = ACTIONS(52),
    [anon_sym_ntlm] = ACTIONS(52),
    [anon_sym_compressed] = ACTIONS(52),
    [anon_sym_location] = ACTIONS(52),
    [anon_sym_location_DASHtrusted] = ACTIONS(52),
    [anon_sym_http1_DOT0] = ACTIONS(52),
    [anon_sym_http2] = ACTIONS(52),
    [anon_sym_http3] = ACTIONS(52),
    [anon_sym_insecure] = ACTIONS(52),
    [anon_sym_ipv4] = ACTIONS(52),
    [anon_sym_ipv6] = ACTIONS(52),
    [anon_sym_netrc] = ACTIONS(52),
    [anon_sym_netrc_DASHoptional] = ACTIONS(52),
    [anon_sym_path_DASHas_DASHis] = ACTIONS(52),
    [anon_sym_skip] = ACTIONS(52),
    [anon_sym_verbose] = ACTIONS(52),
    [anon_sym_very_DASHverbose] = ACTIONS(52),
    [anon_sym_retry_DASHmax_DASHcount] = ACTIONS(54),
    [anon_sym_limit_DASHrate] = ACTIONS(54),
    [anon_sym_max_DASHredirs] = ACTIONS(56),
    [anon_sym_repeat] = ACTIONS(56),
    [anon_sym_retry] = ACTIONS(56),
    [anon_sym_verbosity] = ACTIONS(58),
    [anon_sym_connect_DASHtimeout] = ACTIONS(60),
    [anon_sym_delay] = ACTIONS(60),
    [anon_sym_retry_DASHinterval] = ACTIONS(60),
    [anon_sym_max_DASHtime] = ACTIONS(60),
    [anon_sym_resolve] = ACTIONS(62),
    [anon_sym_aws_DASHsigv4] = ACTIONS(62),
    [anon_sym_key] = ACTIONS(62),
    [anon_sym_connect_DASHto] = ACTIONS(62),
    [anon_sym_header] = ACTIONS(62),
    [anon_sym_netrc_DASHfile] = ACTIONS(62),
    [anon_sym_output] = ACTIONS(62),
    [anon_sym_pinnedpubkey] = ACTIONS(62),
    [anon_sym_proxy] = ACTIONS(62),
    [anon_sym_unix_DASHsocket] = ACTIONS(62),
    [anon_sym_user] = ACTIONS(62),
    [anon_sym_variable] = ACTIONS(64),
    [anon_sym_DQUOTE] = ACTIONS(68),
    [anon_sym_LT] = ACTIONS(68),
    [anon_sym_LT_QMARK] = ACTIONS(68),
    [anon_sym_base64_COMMA] = ACTIONS(68),
    [anon_sym_hex_COMMA] = ACTIONS(68),
    [anon_sym_BQUOTE] = ACTIONS(68),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(68),
    [sym__json_number] = ACTIONS(68),
    [anon_sym_true] = ACTIONS(68),
    [anon_sym_false] = ACTIONS(68),
    [anon_sym_LBRACE_LBRACE2] = ACTIONS(68),
    [sym_comment] = ACTIONS(68),
    [sym__json_array_start] = ACTIONS(66),
  },
  [5] = {
    [aux_sym__comment_or_new_line_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(70),
    [anon_sym_LF] = ACTIONS(72),
    [anon_sym_GET] = ACTIONS(74),
    [anon_sym_HEAD] = ACTIONS(74),
    [anon_sym_POST] = ACTIONS(74),
    [anon_sym_PUT] = ACTIONS(74),
    [anon_sym_DELETE] = ACTIONS(74),
    [anon_sym_CONNECT] = ACTIONS(74),
    [anon_sym_OPTIONS] = ACTIONS(74),
    [anon_sym_TRACE] = ACTIONS(74),
    [anon_sym_PATCH] = ACTIONS(74),
    [anon_sym_LINK] = ACTIONS(74),
    [anon_sym_UNLINK] = ACTIONS(74),
    [anon_sym_PURGE] = ACTIONS(74),
    [anon_sym_LOCK] = ACTIONS(74),
    [anon_sym_UNLOCK] = ACTIONS(74),
    [anon_sym_PROPFIND] = ACTIONS(74),
    [anon_sym_VIEW] = ACTIONS(74),
    [aux_sym_method_token1] = ACTIONS(74),
    [anon_sym_HTTP_SLASH1_DOT0] = ACTIONS(74),
    [anon_sym_HTTP_SLASH1_DOT1] = ACTIONS(74),
    [anon_sym_HTTP_SLASH2] = ACTIONS(74),
    [anon_sym_HTTP_SLASH3] = ACTIONS(74),
    [anon_sym_HTTP_SLASH_STAR] = ACTIONS(74),
    [anon_sym_HTTP] = ACTIONS(74),
    [anon_sym_LBRACKBasicAuth_RBRACK] = ACTIONS(74),
    [anon_sym_LBRACKQuery_RBRACK] = ACTIONS(74),
    [anon_sym_LBRACKQueryStringParams_RBRACK] = ACTIONS(74),
    [anon_sym_LBRACKForm_RBRACK] = ACTIONS(74),
    [anon_sym_LBRACKFormParams_RBRACK] = ACTIONS(74),
    [anon_sym_LBRACKMultipart_RBRACK] = ACTIONS(74),
    [anon_sym_LBRACKMultipartFormData_RBRACK] = ACTIONS(74),
    [anon_sym_LBRACKCookies_RBRACK] = ACTIONS(74),
    [anon_sym_LBRACKOptions_RBRACK] = ACTIONS(74),
    [anon_sym_null] = ACTIONS(74),
    [anon_sym_file_COMMA] = ACTIONS(74),
    [anon_sym_cacert] = ACTIONS(74),
    [anon_sym_cert] = ACTIONS(74),
    [anon_sym_LBRACE] = ACTIONS(74),
    [anon_sym_digest] = ACTIONS(74),
    [anon_sym_http1_DOT1] = ACTIONS(74),
    [anon_sym_negotiate] = ACTIONS(74),
    [anon_sym_ntlm] = ACTIONS(74),
    [anon_sym_compressed] = ACTIONS(74),
    [anon_sym_location] = ACTIONS(74),
    [anon_sym_location_DASHtrusted] = ACTIONS(74),
    [anon_sym_http1_DOT0] = ACTIONS(74),
    [anon_sym_http2] = ACTIONS(74),
    [anon_sym_http3] = ACTIONS(74),
    [anon_sym_insecure] = ACTIONS(74),
    [anon_sym_ipv4] = ACTIONS(74),
    [anon_sym_ipv6] = ACTIONS(74),
    [anon_sym_netrc] = ACTIONS(74),
    [anon_sym_netrc_DASHoptional] = ACTIONS(74),
    [anon_sym_path_DASHas_DASHis] = ACTIONS(74),
    [anon_sym_skip] = ACTIONS(74),
    [anon_sym_verbose] = ACTIONS(74),
    [anon_sym_very_DASHverbose] = ACTIONS(74),
    [anon_sym_retry_DASHmax_DASHcount] = ACTIONS(74),
    [anon_sym_limit_DASHrate] = ACTIONS(74),
    [anon_sym_max_DASHredirs] = ACTIONS(74),
    [anon_sym_repeat] = ACTIONS(74),
    [anon_sym_retry] = ACTIONS(74),
    [anon_sym_verbosity] = ACTIONS(74),
    [anon_sym_connect_DASHtimeout] = ACTIONS(74),
    [anon_sym_delay] = ACTIONS(74),
    [anon_sym_retry_DASHinterval] = ACTIONS(74),
    [anon_sym_max_DASHtime] = ACTIONS(74),
    [anon_sym_resolve] = ACTIONS(74),
    [anon_sym_aws_DASHsigv4] = ACTIONS(74),
    [anon_sym_key] = ACTIONS(74),
    [anon_sym_connect_DASHto] = ACTIONS(74),
    [anon_sym_header] = ACTIONS(74),
    [anon_sym_netrc_DASHfile] = ACTIONS(74),
    [anon_sym_output] = ACTIONS(74),
    [anon_sym_pinnedpubkey] = ACTIONS(74),
    [anon_sym_proxy] = ACTIONS(74),
    [anon_sym_unix_DASHsocket] = ACTIONS(74),
    [anon_sym_user] = ACTIONS(74),
    [anon_sym_variable] = ACTIONS(74),
    [anon_sym_DQUOTE] = ACTIONS(74),
    [anon_sym_LT] = ACTIONS(74),
    [anon_sym_LT_QMARK] = ACTIONS(74),
    [anon_sym_base64_COMMA] = ACTIONS(74),
    [anon_sym_hex_COMMA] = ACTIONS(74),
    [anon_sym_BQUOTE] = ACTIONS(74),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(74),
    [sym__json_number] = ACTIONS(74),
    [anon_sym_true] = ACTIONS(74),
    [anon_sym_false] = ACTIONS(74),
    [anon_sym_LBRACE_LBRACE2] = ACTIONS(74),
    [sym_comment] = ACTIONS(76),
    [sym__json_array_start] = ACTIONS(70),
  },
  [6] = {
    [aux_sym__comment_or_new_line_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(78),
    [anon_sym_LF] = ACTIONS(80),
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
    [aux_sym_method_token1] = ACTIONS(83),
    [anon_sym_HTTP_SLASH1_DOT0] = ACTIONS(83),
    [anon_sym_HTTP_SLASH1_DOT1] = ACTIONS(83),
    [anon_sym_HTTP_SLASH2] = ACTIONS(83),
    [anon_sym_HTTP_SLASH3] = ACTIONS(83),
    [anon_sym_HTTP_SLASH_STAR] = ACTIONS(83),
    [anon_sym_HTTP] = ACTIONS(83),
    [anon_sym_LBRACKBasicAuth_RBRACK] = ACTIONS(83),
    [anon_sym_LBRACKQuery_RBRACK] = ACTIONS(83),
    [anon_sym_LBRACKQueryStringParams_RBRACK] = ACTIONS(83),
    [anon_sym_LBRACKForm_RBRACK] = ACTIONS(83),
    [anon_sym_LBRACKFormParams_RBRACK] = ACTIONS(83),
    [anon_sym_LBRACKMultipart_RBRACK] = ACTIONS(83),
    [anon_sym_LBRACKMultipartFormData_RBRACK] = ACTIONS(83),
    [anon_sym_LBRACKCookies_RBRACK] = ACTIONS(83),
    [anon_sym_LBRACKOptions_RBRACK] = ACTIONS(83),
    [anon_sym_null] = ACTIONS(83),
    [anon_sym_file_COMMA] = ACTIONS(83),
    [anon_sym_cacert] = ACTIONS(83),
    [anon_sym_cert] = ACTIONS(83),
    [anon_sym_LBRACE] = ACTIONS(83),
    [anon_sym_digest] = ACTIONS(83),
    [anon_sym_http1_DOT1] = ACTIONS(83),
    [anon_sym_negotiate] = ACTIONS(83),
    [anon_sym_ntlm] = ACTIONS(83),
    [anon_sym_compressed] = ACTIONS(83),
    [anon_sym_location] = ACTIONS(83),
    [anon_sym_location_DASHtrusted] = ACTIONS(83),
    [anon_sym_http1_DOT0] = ACTIONS(83),
    [anon_sym_http2] = ACTIONS(83),
    [anon_sym_http3] = ACTIONS(83),
    [anon_sym_insecure] = ACTIONS(83),
    [anon_sym_ipv4] = ACTIONS(83),
    [anon_sym_ipv6] = ACTIONS(83),
    [anon_sym_netrc] = ACTIONS(83),
    [anon_sym_netrc_DASHoptional] = ACTIONS(83),
    [anon_sym_path_DASHas_DASHis] = ACTIONS(83),
    [anon_sym_skip] = ACTIONS(83),
    [anon_sym_verbose] = ACTIONS(83),
    [anon_sym_very_DASHverbose] = ACTIONS(83),
    [anon_sym_retry_DASHmax_DASHcount] = ACTIONS(83),
    [anon_sym_limit_DASHrate] = ACTIONS(83),
    [anon_sym_max_DASHredirs] = ACTIONS(83),
    [anon_sym_repeat] = ACTIONS(83),
    [anon_sym_retry] = ACTIONS(83),
    [anon_sym_verbosity] = ACTIONS(83),
    [anon_sym_connect_DASHtimeout] = ACTIONS(83),
    [anon_sym_delay] = ACTIONS(83),
    [anon_sym_retry_DASHinterval] = ACTIONS(83),
    [anon_sym_max_DASHtime] = ACTIONS(83),
    [anon_sym_resolve] = ACTIONS(83),
    [anon_sym_aws_DASHsigv4] = ACTIONS(83),
    [anon_sym_key] = ACTIONS(83),
    [anon_sym_connect_DASHto] = ACTIONS(83),
    [anon_sym_header] = ACTIONS(83),
    [anon_sym_netrc_DASHfile] = ACTIONS(83),
    [anon_sym_output] = ACTIONS(83),
    [anon_sym_pinnedpubkey] = ACTIONS(83),
    [anon_sym_proxy] = ACTIONS(83),
    [anon_sym_unix_DASHsocket] = ACTIONS(83),
    [anon_sym_user] = ACTIONS(83),
    [anon_sym_variable] = ACTIONS(83),
    [anon_sym_DQUOTE] = ACTIONS(83),
    [anon_sym_LT] = ACTIONS(83),
    [anon_sym_LT_QMARK] = ACTIONS(83),
    [anon_sym_base64_COMMA] = ACTIONS(83),
    [anon_sym_hex_COMMA] = ACTIONS(83),
    [anon_sym_BQUOTE] = ACTIONS(83),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(83),
    [sym__json_number] = ACTIONS(83),
    [anon_sym_true] = ACTIONS(83),
    [anon_sym_false] = ACTIONS(83),
    [anon_sym_LBRACE_LBRACE2] = ACTIONS(83),
    [sym_comment] = ACTIONS(85),
    [sym__json_array_start] = ACTIONS(78),
  },
  [7] = {
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
    [anon_sym_cacert] = ACTIONS(15),
    [anon_sym_cert] = ACTIONS(15),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_digest] = ACTIONS(15),
    [anon_sym_http1_DOT1] = ACTIONS(15),
    [anon_sym_negotiate] = ACTIONS(15),
    [anon_sym_ntlm] = ACTIONS(15),
    [anon_sym_compressed] = ACTIONS(15),
    [anon_sym_location] = ACTIONS(15),
    [anon_sym_location_DASHtrusted] = ACTIONS(15),
    [anon_sym_http1_DOT0] = ACTIONS(15),
    [anon_sym_http2] = ACTIONS(15),
    [anon_sym_http3] = ACTIONS(15),
    [anon_sym_insecure] = ACTIONS(15),
    [anon_sym_ipv4] = ACTIONS(15),
    [anon_sym_ipv6] = ACTIONS(15),
    [anon_sym_netrc] = ACTIONS(15),
    [anon_sym_netrc_DASHoptional] = ACTIONS(15),
    [anon_sym_path_DASHas_DASHis] = ACTIONS(15),
    [anon_sym_skip] = ACTIONS(15),
    [anon_sym_verbose] = ACTIONS(15),
    [anon_sym_very_DASHverbose] = ACTIONS(15),
    [anon_sym_retry_DASHmax_DASHcount] = ACTIONS(15),
    [anon_sym_limit_DASHrate] = ACTIONS(15),
    [anon_sym_max_DASHredirs] = ACTIONS(15),
    [anon_sym_repeat] = ACTIONS(15),
    [anon_sym_retry] = ACTIONS(15),
    [anon_sym_verbosity] = ACTIONS(15),
    [anon_sym_connect_DASHtimeout] = ACTIONS(15),
    [anon_sym_delay] = ACTIONS(15),
    [anon_sym_retry_DASHinterval] = ACTIONS(15),
    [anon_sym_max_DASHtime] = ACTIONS(15),
    [anon_sym_resolve] = ACTIONS(15),
    [anon_sym_aws_DASHsigv4] = ACTIONS(15),
    [anon_sym_key] = ACTIONS(15),
    [anon_sym_connect_DASHto] = ACTIONS(15),
    [anon_sym_header] = ACTIONS(15),
    [anon_sym_netrc_DASHfile] = ACTIONS(15),
    [anon_sym_output] = ACTIONS(15),
    [anon_sym_pinnedpubkey] = ACTIONS(15),
    [anon_sym_proxy] = ACTIONS(15),
    [anon_sym_unix_DASHsocket] = ACTIONS(15),
    [anon_sym_user] = ACTIONS(15),
    [anon_sym_variable] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [anon_sym_LT] = ACTIONS(15),
    [anon_sym_LT_QMARK] = ACTIONS(15),
    [anon_sym_base64_COMMA] = ACTIONS(15),
    [anon_sym_hex_COMMA] = ACTIONS(15),
    [anon_sym_BQUOTE] = ACTIONS(15),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(15),
    [sym__json_number] = ACTIONS(15),
    [anon_sym_true] = ACTIONS(15),
    [anon_sym_false] = ACTIONS(15),
    [anon_sym_LBRACE_LBRACE2] = ACTIONS(15),
    [sym_comment] = ACTIONS(15),
    [sym__json_array_start] = ACTIONS(13),
  },
  [8] = {
    [sym_predicate] = STATE(281),
    [sym_predicate_func] = STATE(436),
    [sym_simple_predicate] = STATE(435),
    [sym_equal_predicate] = STATE(435),
    [sym_not_equal_predicate] = STATE(435),
    [sym_greater_predicate] = STATE(435),
    [sym_greater_or_equal_predicate] = STATE(435),
    [sym_less_predicate] = STATE(435),
    [sym_less_or_equal_predicate] = STATE(435),
    [sym_start_with_predicate] = STATE(435),
    [sym_end_with_predicate] = STATE(435),
    [sym_contain_predicate] = STATE(435),
    [sym_match_predicate] = STATE(435),
    [sym_include_predicate] = STATE(435),
    [sym_filter] = STATE(9),
    [sym_simple_filter_key] = STATE(29),
    [sym_argument_filter] = STATE(29),
    [sym_regex_filter] = STATE(29),
    [sym_nth_filter] = STATE(29),
    [sym_replace_filter] = STATE(29),
    [sym_replace_regex_filter] = STATE(29),
    [sym_split_filter] = STATE(29),
    [sym_xpath_filter] = STATE(29),
    [aux_sym_capture_repeat1] = STATE(9),
    [anon_sym_location] = ACTIONS(88),
    [anon_sym_xpath] = ACTIONS(90),
    [anon_sym_jsonpath] = ACTIONS(92),
    [anon_sym_regex] = ACTIONS(94),
    [anon_sym_not] = ACTIONS(96),
    [anon_sym_isDate] = ACTIONS(98),
    [anon_sym_isList] = ACTIONS(98),
    [anon_sym_isObject] = ACTIONS(98),
    [anon_sym_exists] = ACTIONS(98),
    [anon_sym_isInteger] = ACTIONS(98),
    [anon_sym_isFloat] = ACTIONS(98),
    [anon_sym_isBoolean] = ACTIONS(98),
    [anon_sym_isString] = ACTIONS(98),
    [anon_sym_isCollection] = ACTIONS(98),
    [anon_sym_isNumber] = ACTIONS(98),
    [anon_sym_isIsoDate] = ACTIONS(98),
    [anon_sym_isEmpty] = ACTIONS(98),
    [anon_sym_isIpv4] = ACTIONS(98),
    [anon_sym_isIpv6] = ACTIONS(98),
    [anon_sym_isUuid] = ACTIONS(98),
    [anon_sym_equals] = ACTIONS(100),
    [anon_sym_EQ_EQ] = ACTIONS(102),
    [anon_sym_notEquals] = ACTIONS(104),
    [anon_sym_BANG_EQ] = ACTIONS(106),
    [anon_sym_greaterThan] = ACTIONS(108),
    [anon_sym_GT] = ACTIONS(110),
    [anon_sym_greaterThanOrEquals] = ACTIONS(112),
    [anon_sym_GT_EQ] = ACTIONS(114),
    [anon_sym_lessThan] = ACTIONS(116),
    [anon_sym_LT] = ACTIONS(118),
    [anon_sym_lessThanOrEquals] = ACTIONS(120),
    [anon_sym_LT_EQ] = ACTIONS(122),
    [anon_sym_startsWith] = ACTIONS(124),
    [anon_sym_endsWith] = ACTIONS(126),
    [anon_sym_contains] = ACTIONS(128),
    [anon_sym_matches] = ACTIONS(130),
    [anon_sym_includes] = ACTIONS(132),
    [anon_sym_base64Decode] = ACTIONS(88),
    [anon_sym_base64Encode] = ACTIONS(88),
    [anon_sym_base64UrlSafeDecode] = ACTIONS(88),
    [anon_sym_base64UrlSafeEncode] = ACTIONS(88),
    [anon_sym_first] = ACTIONS(88),
    [anon_sym_last] = ACTIONS(88),
    [anon_sym_toFloat] = ACTIONS(88),
    [anon_sym_toHex] = ACTIONS(88),
    [anon_sym_toString] = ACTIONS(88),
    [anon_sym_utf8Decode] = ACTIONS(88),
    [anon_sym_utf8Encode] = ACTIONS(88),
    [anon_sym_count] = ACTIONS(88),
    [anon_sym_urlEncode] = ACTIONS(88),
    [anon_sym_urlDecode] = ACTIONS(88),
    [anon_sym_toInt] = ACTIONS(88),
    [anon_sym_htmlEscape] = ACTIONS(88),
    [anon_sym_htmlUnescape] = ACTIONS(88),
    [anon_sym_daysAfterNow] = ACTIONS(88),
    [anon_sym_daysBeforeNow] = ACTIONS(88),
    [anon_sym_charsetDecode] = ACTIONS(92),
    [anon_sym_dateFormat] = ACTIONS(92),
    [anon_sym_urlQueryParam] = ACTIONS(92),
    [anon_sym_decode] = ACTIONS(92),
    [anon_sym_format] = ACTIONS(92),
    [anon_sym_toDate] = ACTIONS(92),
    [anon_sym_nth] = ACTIONS(134),
    [anon_sym_replace] = ACTIONS(136),
    [anon_sym_replaceRegex] = ACTIONS(138),
    [anon_sym_split] = ACTIONS(140),
    [sym_comment] = ACTIONS(142),
  },
  [9] = {
    [sym_predicate] = STATE(270),
    [sym_predicate_func] = STATE(436),
    [sym_simple_predicate] = STATE(435),
    [sym_equal_predicate] = STATE(435),
    [sym_not_equal_predicate] = STATE(435),
    [sym_greater_predicate] = STATE(435),
    [sym_greater_or_equal_predicate] = STATE(435),
    [sym_less_predicate] = STATE(435),
    [sym_less_or_equal_predicate] = STATE(435),
    [sym_start_with_predicate] = STATE(435),
    [sym_end_with_predicate] = STATE(435),
    [sym_contain_predicate] = STATE(435),
    [sym_match_predicate] = STATE(435),
    [sym_include_predicate] = STATE(435),
    [sym_filter] = STATE(15),
    [sym_simple_filter_key] = STATE(29),
    [sym_argument_filter] = STATE(29),
    [sym_regex_filter] = STATE(29),
    [sym_nth_filter] = STATE(29),
    [sym_replace_filter] = STATE(29),
    [sym_replace_regex_filter] = STATE(29),
    [sym_split_filter] = STATE(29),
    [sym_xpath_filter] = STATE(29),
    [aux_sym_capture_repeat1] = STATE(15),
    [anon_sym_location] = ACTIONS(88),
    [anon_sym_xpath] = ACTIONS(90),
    [anon_sym_jsonpath] = ACTIONS(92),
    [anon_sym_regex] = ACTIONS(94),
    [anon_sym_not] = ACTIONS(96),
    [anon_sym_isDate] = ACTIONS(98),
    [anon_sym_isList] = ACTIONS(98),
    [anon_sym_isObject] = ACTIONS(98),
    [anon_sym_exists] = ACTIONS(98),
    [anon_sym_isInteger] = ACTIONS(98),
    [anon_sym_isFloat] = ACTIONS(98),
    [anon_sym_isBoolean] = ACTIONS(98),
    [anon_sym_isString] = ACTIONS(98),
    [anon_sym_isCollection] = ACTIONS(98),
    [anon_sym_isNumber] = ACTIONS(98),
    [anon_sym_isIsoDate] = ACTIONS(98),
    [anon_sym_isEmpty] = ACTIONS(98),
    [anon_sym_isIpv4] = ACTIONS(98),
    [anon_sym_isIpv6] = ACTIONS(98),
    [anon_sym_isUuid] = ACTIONS(98),
    [anon_sym_equals] = ACTIONS(100),
    [anon_sym_EQ_EQ] = ACTIONS(102),
    [anon_sym_notEquals] = ACTIONS(104),
    [anon_sym_BANG_EQ] = ACTIONS(106),
    [anon_sym_greaterThan] = ACTIONS(108),
    [anon_sym_GT] = ACTIONS(110),
    [anon_sym_greaterThanOrEquals] = ACTIONS(112),
    [anon_sym_GT_EQ] = ACTIONS(114),
    [anon_sym_lessThan] = ACTIONS(116),
    [anon_sym_LT] = ACTIONS(118),
    [anon_sym_lessThanOrEquals] = ACTIONS(120),
    [anon_sym_LT_EQ] = ACTIONS(122),
    [anon_sym_startsWith] = ACTIONS(124),
    [anon_sym_endsWith] = ACTIONS(126),
    [anon_sym_contains] = ACTIONS(128),
    [anon_sym_matches] = ACTIONS(130),
    [anon_sym_includes] = ACTIONS(132),
    [anon_sym_base64Decode] = ACTIONS(88),
    [anon_sym_base64Encode] = ACTIONS(88),
    [anon_sym_base64UrlSafeDecode] = ACTIONS(88),
    [anon_sym_base64UrlSafeEncode] = ACTIONS(88),
    [anon_sym_first] = ACTIONS(88),
    [anon_sym_last] = ACTIONS(88),
    [anon_sym_toFloat] = ACTIONS(88),
    [anon_sym_toHex] = ACTIONS(88),
    [anon_sym_toString] = ACTIONS(88),
    [anon_sym_utf8Decode] = ACTIONS(88),
    [anon_sym_utf8Encode] = ACTIONS(88),
    [anon_sym_count] = ACTIONS(88),
    [anon_sym_urlEncode] = ACTIONS(88),
    [anon_sym_urlDecode] = ACTIONS(88),
    [anon_sym_toInt] = ACTIONS(88),
    [anon_sym_htmlEscape] = ACTIONS(88),
    [anon_sym_htmlUnescape] = ACTIONS(88),
    [anon_sym_daysAfterNow] = ACTIONS(88),
    [anon_sym_daysBeforeNow] = ACTIONS(88),
    [anon_sym_charsetDecode] = ACTIONS(92),
    [anon_sym_dateFormat] = ACTIONS(92),
    [anon_sym_urlQueryParam] = ACTIONS(92),
    [anon_sym_decode] = ACTIONS(92),
    [anon_sym_format] = ACTIONS(92),
    [anon_sym_toDate] = ACTIONS(92),
    [anon_sym_nth] = ACTIONS(134),
    [anon_sym_replace] = ACTIONS(136),
    [anon_sym_replaceRegex] = ACTIONS(138),
    [anon_sym_split] = ACTIONS(140),
    [sym_comment] = ACTIONS(142),
  },
  [10] = {
    [sym_header] = STATE(49),
    [sym_body] = STATE(129),
    [sym_request_section] = STATE(16),
    [sym_basic_auth_section] = STATE(74),
    [sym_query_string_params_section] = STATE(74),
    [sym_form_params_section] = STATE(74),
    [sym_multipart_form_data_section] = STATE(74),
    [sym_cookies_section] = STATE(74),
    [sym_options_section] = STATE(74),
    [sym_key_value] = STATE(277),
    [sym_bytes] = STATE(274),
    [sym_xml] = STATE(424),
    [sym_xml_prolog_tag] = STATE(230),
    [sym_xml_tag] = STATE(423),
    [sym_xml_self_closing_tag] = STATE(422),
    [sym_xml_open_tag] = STATE(164),
    [sym_oneline_base64] = STATE(424),
    [sym_oneline_file] = STATE(424),
    [sym_oneline_hex] = STATE(424),
    [sym_key_string] = STATE(531),
    [sym__bracketed_key_content] = STATE(218),
    [sym__key_template] = STATE(219),
    [sym_key_string_content] = STATE(218),
    [sym_oneline_string] = STATE(424),
    [sym_multiline_string] = STATE(424),
    [sym_json_value] = STATE(424),
    [sym_json_object] = STATE(456),
    [sym_json_array] = STATE(456),
    [sym_json_string] = STATE(456),
    [sym_json_number] = STATE(456),
    [sym_json_boolean] = STATE(456),
    [sym_template] = STATE(456),
    [aux_sym_request_repeat1] = STATE(49),
    [aux_sym_request_repeat2] = STATE(16),
    [aux_sym_xml_repeat1] = STATE(230),
    [aux_sym_key_string_content_repeat1] = STATE(280),
    [ts_builtin_sym_end] = ACTIONS(144),
    [anon_sym_LF] = ACTIONS(144),
    [anon_sym_GET] = ACTIONS(146),
    [anon_sym_HEAD] = ACTIONS(146),
    [anon_sym_POST] = ACTIONS(146),
    [anon_sym_PUT] = ACTIONS(146),
    [anon_sym_DELETE] = ACTIONS(146),
    [anon_sym_CONNECT] = ACTIONS(146),
    [anon_sym_OPTIONS] = ACTIONS(146),
    [anon_sym_TRACE] = ACTIONS(146),
    [anon_sym_PATCH] = ACTIONS(146),
    [anon_sym_LINK] = ACTIONS(146),
    [anon_sym_UNLINK] = ACTIONS(146),
    [anon_sym_PURGE] = ACTIONS(146),
    [anon_sym_LOCK] = ACTIONS(146),
    [anon_sym_UNLOCK] = ACTIONS(146),
    [anon_sym_PROPFIND] = ACTIONS(146),
    [anon_sym_VIEW] = ACTIONS(146),
    [aux_sym_method_token1] = ACTIONS(146),
    [anon_sym_HTTP_SLASH1_DOT0] = ACTIONS(146),
    [anon_sym_HTTP_SLASH1_DOT1] = ACTIONS(146),
    [anon_sym_HTTP_SLASH2] = ACTIONS(146),
    [anon_sym_HTTP_SLASH3] = ACTIONS(146),
    [anon_sym_HTTP_SLASH_STAR] = ACTIONS(146),
    [anon_sym_HTTP] = ACTIONS(146),
    [anon_sym_LBRACKBasicAuth_RBRACK] = ACTIONS(148),
    [anon_sym_LBRACKQuery_RBRACK] = ACTIONS(150),
    [anon_sym_LBRACKQueryStringParams_RBRACK] = ACTIONS(150),
    [anon_sym_LBRACKForm_RBRACK] = ACTIONS(152),
    [anon_sym_LBRACKFormParams_RBRACK] = ACTIONS(152),
    [anon_sym_LBRACKMultipart_RBRACK] = ACTIONS(154),
    [anon_sym_LBRACKMultipartFormData_RBRACK] = ACTIONS(154),
    [anon_sym_LBRACKCookies_RBRACK] = ACTIONS(156),
    [anon_sym_LBRACKOptions_RBRACK] = ACTIONS(158),
    [anon_sym_null] = ACTIONS(160),
    [anon_sym_file_COMMA] = ACTIONS(162),
    [anon_sym_LBRACE] = ACTIONS(164),
    [anon_sym_DQUOTE] = ACTIONS(166),
    [anon_sym_LT] = ACTIONS(168),
    [anon_sym_LT_QMARK] = ACTIONS(170),
    [anon_sym_base64_COMMA] = ACTIONS(172),
    [anon_sym_hex_COMMA] = ACTIONS(174),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(176),
    [sym_key_string_text] = ACTIONS(178),
    [sym_key_string_escaped_char] = ACTIONS(180),
    [anon_sym_BQUOTE] = ACTIONS(182),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(184),
    [sym__json_number] = ACTIONS(186),
    [anon_sym_true] = ACTIONS(188),
    [anon_sym_false] = ACTIONS(188),
    [anon_sym_LBRACE_LBRACE2] = ACTIONS(190),
    [sym_comment] = ACTIONS(146),
    [sym__json_array_start] = ACTIONS(192),
    [sym__bracketed_key_start] = ACTIONS(194),
  },
  [11] = {
    [sym_header] = STATE(13),
    [sym_body] = STATE(129),
    [sym_request_section] = STATE(16),
    [sym_basic_auth_section] = STATE(74),
    [sym_query_string_params_section] = STATE(74),
    [sym_form_params_section] = STATE(74),
    [sym_multipart_form_data_section] = STATE(74),
    [sym_cookies_section] = STATE(74),
    [sym_options_section] = STATE(74),
    [sym_key_value] = STATE(277),
    [sym_bytes] = STATE(274),
    [sym_xml] = STATE(424),
    [sym_xml_prolog_tag] = STATE(230),
    [sym_xml_tag] = STATE(423),
    [sym_xml_self_closing_tag] = STATE(422),
    [sym_xml_open_tag] = STATE(164),
    [sym_oneline_base64] = STATE(424),
    [sym_oneline_file] = STATE(424),
    [sym_oneline_hex] = STATE(424),
    [sym_key_string] = STATE(531),
    [sym__bracketed_key_content] = STATE(218),
    [sym__key_template] = STATE(219),
    [sym_key_string_content] = STATE(218),
    [sym_oneline_string] = STATE(424),
    [sym_multiline_string] = STATE(424),
    [sym_json_value] = STATE(424),
    [sym_json_object] = STATE(456),
    [sym_json_array] = STATE(456),
    [sym_json_string] = STATE(456),
    [sym_json_number] = STATE(456),
    [sym_json_boolean] = STATE(456),
    [sym_template] = STATE(456),
    [aux_sym_request_repeat1] = STATE(13),
    [aux_sym_request_repeat2] = STATE(16),
    [aux_sym_xml_repeat1] = STATE(230),
    [aux_sym_key_string_content_repeat1] = STATE(280),
    [ts_builtin_sym_end] = ACTIONS(144),
    [anon_sym_LF] = ACTIONS(144),
    [anon_sym_GET] = ACTIONS(146),
    [anon_sym_HEAD] = ACTIONS(146),
    [anon_sym_POST] = ACTIONS(146),
    [anon_sym_PUT] = ACTIONS(146),
    [anon_sym_DELETE] = ACTIONS(146),
    [anon_sym_CONNECT] = ACTIONS(146),
    [anon_sym_OPTIONS] = ACTIONS(146),
    [anon_sym_TRACE] = ACTIONS(146),
    [anon_sym_PATCH] = ACTIONS(146),
    [anon_sym_LINK] = ACTIONS(146),
    [anon_sym_UNLINK] = ACTIONS(146),
    [anon_sym_PURGE] = ACTIONS(146),
    [anon_sym_LOCK] = ACTIONS(146),
    [anon_sym_UNLOCK] = ACTIONS(146),
    [anon_sym_PROPFIND] = ACTIONS(146),
    [anon_sym_VIEW] = ACTIONS(146),
    [aux_sym_method_token1] = ACTIONS(146),
    [anon_sym_HTTP_SLASH1_DOT0] = ACTIONS(146),
    [anon_sym_HTTP_SLASH1_DOT1] = ACTIONS(146),
    [anon_sym_HTTP_SLASH2] = ACTIONS(146),
    [anon_sym_HTTP_SLASH3] = ACTIONS(146),
    [anon_sym_HTTP_SLASH_STAR] = ACTIONS(146),
    [anon_sym_HTTP] = ACTIONS(146),
    [anon_sym_LBRACKBasicAuth_RBRACK] = ACTIONS(148),
    [anon_sym_LBRACKQuery_RBRACK] = ACTIONS(150),
    [anon_sym_LBRACKQueryStringParams_RBRACK] = ACTIONS(150),
    [anon_sym_LBRACKForm_RBRACK] = ACTIONS(152),
    [anon_sym_LBRACKFormParams_RBRACK] = ACTIONS(152),
    [anon_sym_LBRACKMultipart_RBRACK] = ACTIONS(154),
    [anon_sym_LBRACKMultipartFormData_RBRACK] = ACTIONS(154),
    [anon_sym_LBRACKCookies_RBRACK] = ACTIONS(156),
    [anon_sym_LBRACKOptions_RBRACK] = ACTIONS(158),
    [anon_sym_null] = ACTIONS(160),
    [anon_sym_file_COMMA] = ACTIONS(162),
    [anon_sym_LBRACE] = ACTIONS(164),
    [anon_sym_DQUOTE] = ACTIONS(166),
    [anon_sym_LT] = ACTIONS(168),
    [anon_sym_LT_QMARK] = ACTIONS(170),
    [anon_sym_base64_COMMA] = ACTIONS(172),
    [anon_sym_hex_COMMA] = ACTIONS(174),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(176),
    [sym_key_string_text] = ACTIONS(178),
    [sym_key_string_escaped_char] = ACTIONS(180),
    [anon_sym_BQUOTE] = ACTIONS(182),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(184),
    [sym__json_number] = ACTIONS(186),
    [anon_sym_true] = ACTIONS(188),
    [anon_sym_false] = ACTIONS(188),
    [anon_sym_LBRACE_LBRACE2] = ACTIONS(190),
    [sym_comment] = ACTIONS(146),
    [sym__json_array_start] = ACTIONS(192),
    [sym__bracketed_key_start] = ACTIONS(194),
  },
  [12] = {
    [sym_header] = STATE(10),
    [sym_body] = STATE(125),
    [sym_request_section] = STATE(14),
    [sym_basic_auth_section] = STATE(74),
    [sym_query_string_params_section] = STATE(74),
    [sym_form_params_section] = STATE(74),
    [sym_multipart_form_data_section] = STATE(74),
    [sym_cookies_section] = STATE(74),
    [sym_options_section] = STATE(74),
    [sym_key_value] = STATE(277),
    [sym_bytes] = STATE(274),
    [sym_xml] = STATE(424),
    [sym_xml_prolog_tag] = STATE(230),
    [sym_xml_tag] = STATE(423),
    [sym_xml_self_closing_tag] = STATE(422),
    [sym_xml_open_tag] = STATE(164),
    [sym_oneline_base64] = STATE(424),
    [sym_oneline_file] = STATE(424),
    [sym_oneline_hex] = STATE(424),
    [sym_key_string] = STATE(531),
    [sym__bracketed_key_content] = STATE(218),
    [sym__key_template] = STATE(219),
    [sym_key_string_content] = STATE(218),
    [sym_oneline_string] = STATE(424),
    [sym_multiline_string] = STATE(424),
    [sym_json_value] = STATE(424),
    [sym_json_object] = STATE(456),
    [sym_json_array] = STATE(456),
    [sym_json_string] = STATE(456),
    [sym_json_number] = STATE(456),
    [sym_json_boolean] = STATE(456),
    [sym_template] = STATE(456),
    [aux_sym_request_repeat1] = STATE(10),
    [aux_sym_request_repeat2] = STATE(14),
    [aux_sym_xml_repeat1] = STATE(230),
    [aux_sym_key_string_content_repeat1] = STATE(280),
    [ts_builtin_sym_end] = ACTIONS(196),
    [anon_sym_LF] = ACTIONS(196),
    [anon_sym_GET] = ACTIONS(198),
    [anon_sym_HEAD] = ACTIONS(198),
    [anon_sym_POST] = ACTIONS(198),
    [anon_sym_PUT] = ACTIONS(198),
    [anon_sym_DELETE] = ACTIONS(198),
    [anon_sym_CONNECT] = ACTIONS(198),
    [anon_sym_OPTIONS] = ACTIONS(198),
    [anon_sym_TRACE] = ACTIONS(198),
    [anon_sym_PATCH] = ACTIONS(198),
    [anon_sym_LINK] = ACTIONS(198),
    [anon_sym_UNLINK] = ACTIONS(198),
    [anon_sym_PURGE] = ACTIONS(198),
    [anon_sym_LOCK] = ACTIONS(198),
    [anon_sym_UNLOCK] = ACTIONS(198),
    [anon_sym_PROPFIND] = ACTIONS(198),
    [anon_sym_VIEW] = ACTIONS(198),
    [aux_sym_method_token1] = ACTIONS(198),
    [anon_sym_HTTP_SLASH1_DOT0] = ACTIONS(198),
    [anon_sym_HTTP_SLASH1_DOT1] = ACTIONS(198),
    [anon_sym_HTTP_SLASH2] = ACTIONS(198),
    [anon_sym_HTTP_SLASH3] = ACTIONS(198),
    [anon_sym_HTTP_SLASH_STAR] = ACTIONS(198),
    [anon_sym_HTTP] = ACTIONS(198),
    [anon_sym_LBRACKBasicAuth_RBRACK] = ACTIONS(148),
    [anon_sym_LBRACKQuery_RBRACK] = ACTIONS(150),
    [anon_sym_LBRACKQueryStringParams_RBRACK] = ACTIONS(150),
    [anon_sym_LBRACKForm_RBRACK] = ACTIONS(152),
    [anon_sym_LBRACKFormParams_RBRACK] = ACTIONS(152),
    [anon_sym_LBRACKMultipart_RBRACK] = ACTIONS(154),
    [anon_sym_LBRACKMultipartFormData_RBRACK] = ACTIONS(154),
    [anon_sym_LBRACKCookies_RBRACK] = ACTIONS(156),
    [anon_sym_LBRACKOptions_RBRACK] = ACTIONS(158),
    [anon_sym_null] = ACTIONS(160),
    [anon_sym_file_COMMA] = ACTIONS(162),
    [anon_sym_LBRACE] = ACTIONS(164),
    [anon_sym_DQUOTE] = ACTIONS(166),
    [anon_sym_LT] = ACTIONS(168),
    [anon_sym_LT_QMARK] = ACTIONS(170),
    [anon_sym_base64_COMMA] = ACTIONS(172),
    [anon_sym_hex_COMMA] = ACTIONS(174),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(176),
    [sym_key_string_text] = ACTIONS(178),
    [sym_key_string_escaped_char] = ACTIONS(180),
    [anon_sym_BQUOTE] = ACTIONS(182),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(184),
    [sym__json_number] = ACTIONS(186),
    [anon_sym_true] = ACTIONS(188),
    [anon_sym_false] = ACTIONS(188),
    [anon_sym_LBRACE_LBRACE2] = ACTIONS(190),
    [sym_comment] = ACTIONS(198),
    [sym__json_array_start] = ACTIONS(192),
    [sym__bracketed_key_start] = ACTIONS(194),
  },
  [13] = {
    [sym_header] = STATE(49),
    [sym_body] = STATE(127),
    [sym_request_section] = STATE(17),
    [sym_basic_auth_section] = STATE(74),
    [sym_query_string_params_section] = STATE(74),
    [sym_form_params_section] = STATE(74),
    [sym_multipart_form_data_section] = STATE(74),
    [sym_cookies_section] = STATE(74),
    [sym_options_section] = STATE(74),
    [sym_key_value] = STATE(277),
    [sym_bytes] = STATE(274),
    [sym_xml] = STATE(424),
    [sym_xml_prolog_tag] = STATE(230),
    [sym_xml_tag] = STATE(423),
    [sym_xml_self_closing_tag] = STATE(422),
    [sym_xml_open_tag] = STATE(164),
    [sym_oneline_base64] = STATE(424),
    [sym_oneline_file] = STATE(424),
    [sym_oneline_hex] = STATE(424),
    [sym_key_string] = STATE(531),
    [sym__bracketed_key_content] = STATE(218),
    [sym__key_template] = STATE(219),
    [sym_key_string_content] = STATE(218),
    [sym_oneline_string] = STATE(424),
    [sym_multiline_string] = STATE(424),
    [sym_json_value] = STATE(424),
    [sym_json_object] = STATE(456),
    [sym_json_array] = STATE(456),
    [sym_json_string] = STATE(456),
    [sym_json_number] = STATE(456),
    [sym_json_boolean] = STATE(456),
    [sym_template] = STATE(456),
    [aux_sym_request_repeat1] = STATE(49),
    [aux_sym_request_repeat2] = STATE(17),
    [aux_sym_xml_repeat1] = STATE(230),
    [aux_sym_key_string_content_repeat1] = STATE(280),
    [ts_builtin_sym_end] = ACTIONS(200),
    [anon_sym_LF] = ACTIONS(200),
    [anon_sym_GET] = ACTIONS(202),
    [anon_sym_HEAD] = ACTIONS(202),
    [anon_sym_POST] = ACTIONS(202),
    [anon_sym_PUT] = ACTIONS(202),
    [anon_sym_DELETE] = ACTIONS(202),
    [anon_sym_CONNECT] = ACTIONS(202),
    [anon_sym_OPTIONS] = ACTIONS(202),
    [anon_sym_TRACE] = ACTIONS(202),
    [anon_sym_PATCH] = ACTIONS(202),
    [anon_sym_LINK] = ACTIONS(202),
    [anon_sym_UNLINK] = ACTIONS(202),
    [anon_sym_PURGE] = ACTIONS(202),
    [anon_sym_LOCK] = ACTIONS(202),
    [anon_sym_UNLOCK] = ACTIONS(202),
    [anon_sym_PROPFIND] = ACTIONS(202),
    [anon_sym_VIEW] = ACTIONS(202),
    [aux_sym_method_token1] = ACTIONS(202),
    [anon_sym_HTTP_SLASH1_DOT0] = ACTIONS(202),
    [anon_sym_HTTP_SLASH1_DOT1] = ACTIONS(202),
    [anon_sym_HTTP_SLASH2] = ACTIONS(202),
    [anon_sym_HTTP_SLASH3] = ACTIONS(202),
    [anon_sym_HTTP_SLASH_STAR] = ACTIONS(202),
    [anon_sym_HTTP] = ACTIONS(202),
    [anon_sym_LBRACKBasicAuth_RBRACK] = ACTIONS(148),
    [anon_sym_LBRACKQuery_RBRACK] = ACTIONS(150),
    [anon_sym_LBRACKQueryStringParams_RBRACK] = ACTIONS(150),
    [anon_sym_LBRACKForm_RBRACK] = ACTIONS(152),
    [anon_sym_LBRACKFormParams_RBRACK] = ACTIONS(152),
    [anon_sym_LBRACKMultipart_RBRACK] = ACTIONS(154),
    [anon_sym_LBRACKMultipartFormData_RBRACK] = ACTIONS(154),
    [anon_sym_LBRACKCookies_RBRACK] = ACTIONS(156),
    [anon_sym_LBRACKOptions_RBRACK] = ACTIONS(158),
    [anon_sym_null] = ACTIONS(160),
    [anon_sym_file_COMMA] = ACTIONS(162),
    [anon_sym_LBRACE] = ACTIONS(164),
    [anon_sym_DQUOTE] = ACTIONS(166),
    [anon_sym_LT] = ACTIONS(168),
    [anon_sym_LT_QMARK] = ACTIONS(170),
    [anon_sym_base64_COMMA] = ACTIONS(172),
    [anon_sym_hex_COMMA] = ACTIONS(174),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(176),
    [sym_key_string_text] = ACTIONS(178),
    [sym_key_string_escaped_char] = ACTIONS(180),
    [anon_sym_BQUOTE] = ACTIONS(182),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(184),
    [sym__json_number] = ACTIONS(186),
    [anon_sym_true] = ACTIONS(188),
    [anon_sym_false] = ACTIONS(188),
    [anon_sym_LBRACE_LBRACE2] = ACTIONS(190),
    [sym_comment] = ACTIONS(202),
    [sym__json_array_start] = ACTIONS(192),
    [sym__bracketed_key_start] = ACTIONS(194),
  },
  [14] = {
    [sym_body] = STATE(129),
    [sym_request_section] = STATE(64),
    [sym_basic_auth_section] = STATE(74),
    [sym_query_string_params_section] = STATE(74),
    [sym_form_params_section] = STATE(74),
    [sym_multipart_form_data_section] = STATE(74),
    [sym_cookies_section] = STATE(74),
    [sym_options_section] = STATE(74),
    [sym_bytes] = STATE(274),
    [sym_xml] = STATE(424),
    [sym_xml_prolog_tag] = STATE(230),
    [sym_xml_tag] = STATE(423),
    [sym_xml_self_closing_tag] = STATE(422),
    [sym_xml_open_tag] = STATE(164),
    [sym_oneline_base64] = STATE(424),
    [sym_oneline_file] = STATE(424),
    [sym_oneline_hex] = STATE(424),
    [sym_oneline_string] = STATE(424),
    [sym_multiline_string] = STATE(424),
    [sym_json_value] = STATE(424),
    [sym_json_object] = STATE(456),
    [sym_json_array] = STATE(456),
    [sym_json_string] = STATE(456),
    [sym_json_number] = STATE(456),
    [sym_json_boolean] = STATE(456),
    [sym_template] = STATE(456),
    [aux_sym_request_repeat2] = STATE(64),
    [aux_sym_xml_repeat1] = STATE(230),
    [ts_builtin_sym_end] = ACTIONS(144),
    [anon_sym_LF] = ACTIONS(144),
    [anon_sym_GET] = ACTIONS(146),
    [anon_sym_HEAD] = ACTIONS(146),
    [anon_sym_POST] = ACTIONS(146),
    [anon_sym_PUT] = ACTIONS(146),
    [anon_sym_DELETE] = ACTIONS(146),
    [anon_sym_CONNECT] = ACTIONS(146),
    [anon_sym_OPTIONS] = ACTIONS(146),
    [anon_sym_TRACE] = ACTIONS(146),
    [anon_sym_PATCH] = ACTIONS(146),
    [anon_sym_LINK] = ACTIONS(146),
    [anon_sym_UNLINK] = ACTIONS(146),
    [anon_sym_PURGE] = ACTIONS(146),
    [anon_sym_LOCK] = ACTIONS(146),
    [anon_sym_UNLOCK] = ACTIONS(146),
    [anon_sym_PROPFIND] = ACTIONS(146),
    [anon_sym_VIEW] = ACTIONS(146),
    [aux_sym_method_token1] = ACTIONS(146),
    [anon_sym_HTTP_SLASH1_DOT0] = ACTIONS(146),
    [anon_sym_HTTP_SLASH1_DOT1] = ACTIONS(146),
    [anon_sym_HTTP_SLASH2] = ACTIONS(146),
    [anon_sym_HTTP_SLASH3] = ACTIONS(146),
    [anon_sym_HTTP_SLASH_STAR] = ACTIONS(146),
    [anon_sym_HTTP] = ACTIONS(146),
    [anon_sym_LBRACKBasicAuth_RBRACK] = ACTIONS(148),
    [anon_sym_LBRACKQuery_RBRACK] = ACTIONS(150),
    [anon_sym_LBRACKQueryStringParams_RBRACK] = ACTIONS(150),
    [anon_sym_LBRACKForm_RBRACK] = ACTIONS(152),
    [anon_sym_LBRACKFormParams_RBRACK] = ACTIONS(152),
    [anon_sym_LBRACKMultipart_RBRACK] = ACTIONS(154),
    [anon_sym_LBRACKMultipartFormData_RBRACK] = ACTIONS(154),
    [anon_sym_LBRACKCookies_RBRACK] = ACTIONS(156),
    [anon_sym_LBRACKOptions_RBRACK] = ACTIONS(158),
    [anon_sym_null] = ACTIONS(160),
    [anon_sym_file_COMMA] = ACTIONS(162),
    [anon_sym_LBRACE] = ACTIONS(164),
    [anon_sym_DQUOTE] = ACTIONS(166),
    [anon_sym_LT] = ACTIONS(168),
    [anon_sym_LT_QMARK] = ACTIONS(170),
    [anon_sym_base64_COMMA] = ACTIONS(172),
    [anon_sym_hex_COMMA] = ACTIONS(174),
    [anon_sym_BQUOTE] = ACTIONS(182),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(184),
    [sym__json_number] = ACTIONS(186),
    [anon_sym_true] = ACTIONS(188),
    [anon_sym_false] = ACTIONS(188),
    [anon_sym_LBRACE_LBRACE2] = ACTIONS(190),
    [sym_comment] = ACTIONS(146),
    [sym__json_array_start] = ACTIONS(192),
  },
  [15] = {
    [sym_filter] = STATE(15),
    [sym_simple_filter_key] = STATE(29),
    [sym_argument_filter] = STATE(29),
    [sym_regex_filter] = STATE(29),
    [sym_nth_filter] = STATE(29),
    [sym_replace_filter] = STATE(29),
    [sym_replace_regex_filter] = STATE(29),
    [sym_split_filter] = STATE(29),
    [sym_xpath_filter] = STATE(29),
    [aux_sym_capture_repeat1] = STATE(15),
    [anon_sym_location] = ACTIONS(204),
    [anon_sym_xpath] = ACTIONS(207),
    [anon_sym_jsonpath] = ACTIONS(210),
    [anon_sym_regex] = ACTIONS(213),
    [anon_sym_not] = ACTIONS(216),
    [anon_sym_isDate] = ACTIONS(218),
    [anon_sym_isList] = ACTIONS(218),
    [anon_sym_isObject] = ACTIONS(218),
    [anon_sym_exists] = ACTIONS(218),
    [anon_sym_isInteger] = ACTIONS(218),
    [anon_sym_isFloat] = ACTIONS(218),
    [anon_sym_isBoolean] = ACTIONS(218),
    [anon_sym_isString] = ACTIONS(218),
    [anon_sym_isCollection] = ACTIONS(218),
    [anon_sym_isNumber] = ACTIONS(218),
    [anon_sym_isIsoDate] = ACTIONS(218),
    [anon_sym_isEmpty] = ACTIONS(218),
    [anon_sym_isIpv4] = ACTIONS(218),
    [anon_sym_isIpv6] = ACTIONS(218),
    [anon_sym_isUuid] = ACTIONS(218),
    [anon_sym_equals] = ACTIONS(218),
    [anon_sym_EQ_EQ] = ACTIONS(218),
    [anon_sym_notEquals] = ACTIONS(218),
    [anon_sym_BANG_EQ] = ACTIONS(218),
    [anon_sym_greaterThan] = ACTIONS(216),
    [anon_sym_GT] = ACTIONS(216),
    [anon_sym_greaterThanOrEquals] = ACTIONS(218),
    [anon_sym_GT_EQ] = ACTIONS(218),
    [anon_sym_lessThan] = ACTIONS(216),
    [anon_sym_LT] = ACTIONS(216),
    [anon_sym_lessThanOrEquals] = ACTIONS(218),
    [anon_sym_LT_EQ] = ACTIONS(218),
    [anon_sym_startsWith] = ACTIONS(218),
    [anon_sym_endsWith] = ACTIONS(218),
    [anon_sym_contains] = ACTIONS(218),
    [anon_sym_matches] = ACTIONS(218),
    [anon_sym_includes] = ACTIONS(218),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(218),
    [anon_sym_base64Decode] = ACTIONS(204),
    [anon_sym_base64Encode] = ACTIONS(204),
    [anon_sym_base64UrlSafeDecode] = ACTIONS(204),
    [anon_sym_base64UrlSafeEncode] = ACTIONS(204),
    [anon_sym_first] = ACTIONS(204),
    [anon_sym_last] = ACTIONS(204),
    [anon_sym_toFloat] = ACTIONS(204),
    [anon_sym_toHex] = ACTIONS(204),
    [anon_sym_toString] = ACTIONS(204),
    [anon_sym_utf8Decode] = ACTIONS(204),
    [anon_sym_utf8Encode] = ACTIONS(204),
    [anon_sym_count] = ACTIONS(204),
    [anon_sym_urlEncode] = ACTIONS(204),
    [anon_sym_urlDecode] = ACTIONS(204),
    [anon_sym_toInt] = ACTIONS(204),
    [anon_sym_htmlEscape] = ACTIONS(204),
    [anon_sym_htmlUnescape] = ACTIONS(204),
    [anon_sym_daysAfterNow] = ACTIONS(204),
    [anon_sym_daysBeforeNow] = ACTIONS(204),
    [anon_sym_charsetDecode] = ACTIONS(210),
    [anon_sym_dateFormat] = ACTIONS(210),
    [anon_sym_urlQueryParam] = ACTIONS(210),
    [anon_sym_decode] = ACTIONS(210),
    [anon_sym_format] = ACTIONS(210),
    [anon_sym_toDate] = ACTIONS(210),
    [anon_sym_nth] = ACTIONS(220),
    [anon_sym_replace] = ACTIONS(223),
    [anon_sym_replaceRegex] = ACTIONS(226),
    [anon_sym_split] = ACTIONS(229),
    [sym_comment] = ACTIONS(142),
  },
  [16] = {
    [sym_body] = STATE(127),
    [sym_request_section] = STATE(64),
    [sym_basic_auth_section] = STATE(74),
    [sym_query_string_params_section] = STATE(74),
    [sym_form_params_section] = STATE(74),
    [sym_multipart_form_data_section] = STATE(74),
    [sym_cookies_section] = STATE(74),
    [sym_options_section] = STATE(74),
    [sym_bytes] = STATE(274),
    [sym_xml] = STATE(424),
    [sym_xml_prolog_tag] = STATE(230),
    [sym_xml_tag] = STATE(423),
    [sym_xml_self_closing_tag] = STATE(422),
    [sym_xml_open_tag] = STATE(164),
    [sym_oneline_base64] = STATE(424),
    [sym_oneline_file] = STATE(424),
    [sym_oneline_hex] = STATE(424),
    [sym_oneline_string] = STATE(424),
    [sym_multiline_string] = STATE(424),
    [sym_json_value] = STATE(424),
    [sym_json_object] = STATE(456),
    [sym_json_array] = STATE(456),
    [sym_json_string] = STATE(456),
    [sym_json_number] = STATE(456),
    [sym_json_boolean] = STATE(456),
    [sym_template] = STATE(456),
    [aux_sym_request_repeat2] = STATE(64),
    [aux_sym_xml_repeat1] = STATE(230),
    [ts_builtin_sym_end] = ACTIONS(200),
    [anon_sym_LF] = ACTIONS(200),
    [anon_sym_GET] = ACTIONS(202),
    [anon_sym_HEAD] = ACTIONS(202),
    [anon_sym_POST] = ACTIONS(202),
    [anon_sym_PUT] = ACTIONS(202),
    [anon_sym_DELETE] = ACTIONS(202),
    [anon_sym_CONNECT] = ACTIONS(202),
    [anon_sym_OPTIONS] = ACTIONS(202),
    [anon_sym_TRACE] = ACTIONS(202),
    [anon_sym_PATCH] = ACTIONS(202),
    [anon_sym_LINK] = ACTIONS(202),
    [anon_sym_UNLINK] = ACTIONS(202),
    [anon_sym_PURGE] = ACTIONS(202),
    [anon_sym_LOCK] = ACTIONS(202),
    [anon_sym_UNLOCK] = ACTIONS(202),
    [anon_sym_PROPFIND] = ACTIONS(202),
    [anon_sym_VIEW] = ACTIONS(202),
    [aux_sym_method_token1] = ACTIONS(202),
    [anon_sym_HTTP_SLASH1_DOT0] = ACTIONS(202),
    [anon_sym_HTTP_SLASH1_DOT1] = ACTIONS(202),
    [anon_sym_HTTP_SLASH2] = ACTIONS(202),
    [anon_sym_HTTP_SLASH3] = ACTIONS(202),
    [anon_sym_HTTP_SLASH_STAR] = ACTIONS(202),
    [anon_sym_HTTP] = ACTIONS(202),
    [anon_sym_LBRACKBasicAuth_RBRACK] = ACTIONS(148),
    [anon_sym_LBRACKQuery_RBRACK] = ACTIONS(150),
    [anon_sym_LBRACKQueryStringParams_RBRACK] = ACTIONS(150),
    [anon_sym_LBRACKForm_RBRACK] = ACTIONS(152),
    [anon_sym_LBRACKFormParams_RBRACK] = ACTIONS(152),
    [anon_sym_LBRACKMultipart_RBRACK] = ACTIONS(154),
    [anon_sym_LBRACKMultipartFormData_RBRACK] = ACTIONS(154),
    [anon_sym_LBRACKCookies_RBRACK] = ACTIONS(156),
    [anon_sym_LBRACKOptions_RBRACK] = ACTIONS(158),
    [anon_sym_null] = ACTIONS(160),
    [anon_sym_file_COMMA] = ACTIONS(162),
    [anon_sym_LBRACE] = ACTIONS(164),
    [anon_sym_DQUOTE] = ACTIONS(166),
    [anon_sym_LT] = ACTIONS(168),
    [anon_sym_LT_QMARK] = ACTIONS(170),
    [anon_sym_base64_COMMA] = ACTIONS(172),
    [anon_sym_hex_COMMA] = ACTIONS(174),
    [anon_sym_BQUOTE] = ACTIONS(182),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(184),
    [sym__json_number] = ACTIONS(186),
    [anon_sym_true] = ACTIONS(188),
    [anon_sym_false] = ACTIONS(188),
    [anon_sym_LBRACE_LBRACE2] = ACTIONS(190),
    [sym_comment] = ACTIONS(202),
    [sym__json_array_start] = ACTIONS(192),
  },
  [17] = {
    [sym_body] = STATE(126),
    [sym_request_section] = STATE(64),
    [sym_basic_auth_section] = STATE(74),
    [sym_query_string_params_section] = STATE(74),
    [sym_form_params_section] = STATE(74),
    [sym_multipart_form_data_section] = STATE(74),
    [sym_cookies_section] = STATE(74),
    [sym_options_section] = STATE(74),
    [sym_bytes] = STATE(274),
    [sym_xml] = STATE(424),
    [sym_xml_prolog_tag] = STATE(230),
    [sym_xml_tag] = STATE(423),
    [sym_xml_self_closing_tag] = STATE(422),
    [sym_xml_open_tag] = STATE(164),
    [sym_oneline_base64] = STATE(424),
    [sym_oneline_file] = STATE(424),
    [sym_oneline_hex] = STATE(424),
    [sym_oneline_string] = STATE(424),
    [sym_multiline_string] = STATE(424),
    [sym_json_value] = STATE(424),
    [sym_json_object] = STATE(456),
    [sym_json_array] = STATE(456),
    [sym_json_string] = STATE(456),
    [sym_json_number] = STATE(456),
    [sym_json_boolean] = STATE(456),
    [sym_template] = STATE(456),
    [aux_sym_request_repeat2] = STATE(64),
    [aux_sym_xml_repeat1] = STATE(230),
    [ts_builtin_sym_end] = ACTIONS(232),
    [anon_sym_LF] = ACTIONS(232),
    [anon_sym_GET] = ACTIONS(234),
    [anon_sym_HEAD] = ACTIONS(234),
    [anon_sym_POST] = ACTIONS(234),
    [anon_sym_PUT] = ACTIONS(234),
    [anon_sym_DELETE] = ACTIONS(234),
    [anon_sym_CONNECT] = ACTIONS(234),
    [anon_sym_OPTIONS] = ACTIONS(234),
    [anon_sym_TRACE] = ACTIONS(234),
    [anon_sym_PATCH] = ACTIONS(234),
    [anon_sym_LINK] = ACTIONS(234),
    [anon_sym_UNLINK] = ACTIONS(234),
    [anon_sym_PURGE] = ACTIONS(234),
    [anon_sym_LOCK] = ACTIONS(234),
    [anon_sym_UNLOCK] = ACTIONS(234),
    [anon_sym_PROPFIND] = ACTIONS(234),
    [anon_sym_VIEW] = ACTIONS(234),
    [aux_sym_method_token1] = ACTIONS(234),
    [anon_sym_HTTP_SLASH1_DOT0] = ACTIONS(234),
    [anon_sym_HTTP_SLASH1_DOT1] = ACTIONS(234),
    [anon_sym_HTTP_SLASH2] = ACTIONS(234),
    [anon_sym_HTTP_SLASH3] = ACTIONS(234),
    [anon_sym_HTTP_SLASH_STAR] = ACTIONS(234),
    [anon_sym_HTTP] = ACTIONS(234),
    [anon_sym_LBRACKBasicAuth_RBRACK] = ACTIONS(148),
    [anon_sym_LBRACKQuery_RBRACK] = ACTIONS(150),
    [anon_sym_LBRACKQueryStringParams_RBRACK] = ACTIONS(150),
    [anon_sym_LBRACKForm_RBRACK] = ACTIONS(152),
    [anon_sym_LBRACKFormParams_RBRACK] = ACTIONS(152),
    [anon_sym_LBRACKMultipart_RBRACK] = ACTIONS(154),
    [anon_sym_LBRACKMultipartFormData_RBRACK] = ACTIONS(154),
    [anon_sym_LBRACKCookies_RBRACK] = ACTIONS(156),
    [anon_sym_LBRACKOptions_RBRACK] = ACTIONS(158),
    [anon_sym_null] = ACTIONS(160),
    [anon_sym_file_COMMA] = ACTIONS(162),
    [anon_sym_LBRACE] = ACTIONS(164),
    [anon_sym_DQUOTE] = ACTIONS(166),
    [anon_sym_LT] = ACTIONS(168),
    [anon_sym_LT_QMARK] = ACTIONS(170),
    [anon_sym_base64_COMMA] = ACTIONS(172),
    [anon_sym_hex_COMMA] = ACTIONS(174),
    [anon_sym_BQUOTE] = ACTIONS(182),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(184),
    [sym__json_number] = ACTIONS(186),
    [anon_sym_true] = ACTIONS(188),
    [anon_sym_false] = ACTIONS(188),
    [anon_sym_LBRACE_LBRACE2] = ACTIONS(190),
    [sym_comment] = ACTIONS(234),
    [sym__json_array_start] = ACTIONS(192),
  },
  [18] = {
    [sym_header] = STATE(77),
    [sym_body] = STATE(152),
    [sym_response_section] = STATE(51),
    [sym_captures_section] = STATE(108),
    [sym_asserts_section] = STATE(108),
    [sym_key_value] = STATE(294),
    [sym_bytes] = STATE(296),
    [sym_xml] = STATE(424),
    [sym_xml_prolog_tag] = STATE(230),
    [sym_xml_tag] = STATE(423),
    [sym_xml_self_closing_tag] = STATE(422),
    [sym_xml_open_tag] = STATE(164),
    [sym_oneline_base64] = STATE(424),
    [sym_oneline_file] = STATE(424),
    [sym_oneline_hex] = STATE(424),
    [sym_key_string] = STATE(531),
    [sym__bracketed_key_content] = STATE(218),
    [sym__key_template] = STATE(219),
    [sym_key_string_content] = STATE(218),
    [sym_oneline_string] = STATE(424),
    [sym_multiline_string] = STATE(424),
    [sym_json_value] = STATE(424),
    [sym_json_object] = STATE(456),
    [sym_json_array] = STATE(456),
    [sym_json_string] = STATE(456),
    [sym_json_number] = STATE(456),
    [sym_json_boolean] = STATE(456),
    [sym_template] = STATE(456),
    [aux_sym_request_repeat1] = STATE(77),
    [aux_sym_response_repeat1] = STATE(51),
    [aux_sym_xml_repeat1] = STATE(230),
    [aux_sym_key_string_content_repeat1] = STATE(280),
    [ts_builtin_sym_end] = ACTIONS(236),
    [anon_sym_LF] = ACTIONS(236),
    [anon_sym_GET] = ACTIONS(238),
    [anon_sym_HEAD] = ACTIONS(238),
    [anon_sym_POST] = ACTIONS(238),
    [anon_sym_PUT] = ACTIONS(238),
    [anon_sym_DELETE] = ACTIONS(238),
    [anon_sym_CONNECT] = ACTIONS(238),
    [anon_sym_OPTIONS] = ACTIONS(238),
    [anon_sym_TRACE] = ACTIONS(238),
    [anon_sym_PATCH] = ACTIONS(238),
    [anon_sym_LINK] = ACTIONS(238),
    [anon_sym_UNLINK] = ACTIONS(238),
    [anon_sym_PURGE] = ACTIONS(238),
    [anon_sym_LOCK] = ACTIONS(238),
    [anon_sym_UNLOCK] = ACTIONS(238),
    [anon_sym_PROPFIND] = ACTIONS(238),
    [anon_sym_VIEW] = ACTIONS(238),
    [aux_sym_method_token1] = ACTIONS(238),
    [anon_sym_LBRACKCaptures_RBRACK] = ACTIONS(240),
    [anon_sym_LBRACKAsserts_RBRACK] = ACTIONS(242),
    [anon_sym_null] = ACTIONS(160),
    [anon_sym_file_COMMA] = ACTIONS(162),
    [anon_sym_LBRACE] = ACTIONS(164),
    [anon_sym_DQUOTE] = ACTIONS(166),
    [anon_sym_LT] = ACTIONS(168),
    [anon_sym_LT_QMARK] = ACTIONS(170),
    [anon_sym_base64_COMMA] = ACTIONS(172),
    [anon_sym_hex_COMMA] = ACTIONS(174),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(176),
    [sym_key_string_text] = ACTIONS(178),
    [sym_key_string_escaped_char] = ACTIONS(180),
    [anon_sym_BQUOTE] = ACTIONS(182),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(184),
    [sym__json_number] = ACTIONS(186),
    [anon_sym_true] = ACTIONS(188),
    [anon_sym_false] = ACTIONS(188),
    [anon_sym_LBRACE_LBRACE2] = ACTIONS(190),
    [sym_comment] = ACTIONS(238),
    [sym__json_array_start] = ACTIONS(192),
    [sym__bracketed_key_start] = ACTIONS(194),
  },
  [19] = {
    [sym_header] = STATE(18),
    [sym_body] = STATE(150),
    [sym_response_section] = STATE(50),
    [sym_captures_section] = STATE(108),
    [sym_asserts_section] = STATE(108),
    [sym_key_value] = STATE(294),
    [sym_bytes] = STATE(296),
    [sym_xml] = STATE(424),
    [sym_xml_prolog_tag] = STATE(230),
    [sym_xml_tag] = STATE(423),
    [sym_xml_self_closing_tag] = STATE(422),
    [sym_xml_open_tag] = STATE(164),
    [sym_oneline_base64] = STATE(424),
    [sym_oneline_file] = STATE(424),
    [sym_oneline_hex] = STATE(424),
    [sym_key_string] = STATE(531),
    [sym__bracketed_key_content] = STATE(218),
    [sym__key_template] = STATE(219),
    [sym_key_string_content] = STATE(218),
    [sym_oneline_string] = STATE(424),
    [sym_multiline_string] = STATE(424),
    [sym_json_value] = STATE(424),
    [sym_json_object] = STATE(456),
    [sym_json_array] = STATE(456),
    [sym_json_string] = STATE(456),
    [sym_json_number] = STATE(456),
    [sym_json_boolean] = STATE(456),
    [sym_template] = STATE(456),
    [aux_sym_request_repeat1] = STATE(18),
    [aux_sym_response_repeat1] = STATE(50),
    [aux_sym_xml_repeat1] = STATE(230),
    [aux_sym_key_string_content_repeat1] = STATE(280),
    [ts_builtin_sym_end] = ACTIONS(244),
    [anon_sym_LF] = ACTIONS(244),
    [anon_sym_GET] = ACTIONS(246),
    [anon_sym_HEAD] = ACTIONS(246),
    [anon_sym_POST] = ACTIONS(246),
    [anon_sym_PUT] = ACTIONS(246),
    [anon_sym_DELETE] = ACTIONS(246),
    [anon_sym_CONNECT] = ACTIONS(246),
    [anon_sym_OPTIONS] = ACTIONS(246),
    [anon_sym_TRACE] = ACTIONS(246),
    [anon_sym_PATCH] = ACTIONS(246),
    [anon_sym_LINK] = ACTIONS(246),
    [anon_sym_UNLINK] = ACTIONS(246),
    [anon_sym_PURGE] = ACTIONS(246),
    [anon_sym_LOCK] = ACTIONS(246),
    [anon_sym_UNLOCK] = ACTIONS(246),
    [anon_sym_PROPFIND] = ACTIONS(246),
    [anon_sym_VIEW] = ACTIONS(246),
    [aux_sym_method_token1] = ACTIONS(246),
    [anon_sym_LBRACKCaptures_RBRACK] = ACTIONS(240),
    [anon_sym_LBRACKAsserts_RBRACK] = ACTIONS(242),
    [anon_sym_null] = ACTIONS(160),
    [anon_sym_file_COMMA] = ACTIONS(162),
    [anon_sym_LBRACE] = ACTIONS(164),
    [anon_sym_DQUOTE] = ACTIONS(166),
    [anon_sym_LT] = ACTIONS(168),
    [anon_sym_LT_QMARK] = ACTIONS(170),
    [anon_sym_base64_COMMA] = ACTIONS(172),
    [anon_sym_hex_COMMA] = ACTIONS(174),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(176),
    [sym_key_string_text] = ACTIONS(178),
    [sym_key_string_escaped_char] = ACTIONS(180),
    [anon_sym_BQUOTE] = ACTIONS(182),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(184),
    [sym__json_number] = ACTIONS(186),
    [anon_sym_true] = ACTIONS(188),
    [anon_sym_false] = ACTIONS(188),
    [anon_sym_LBRACE_LBRACE2] = ACTIONS(190),
    [sym_comment] = ACTIONS(246),
    [sym__json_array_start] = ACTIONS(192),
    [sym__bracketed_key_start] = ACTIONS(194),
  },
  [20] = {
    [anon_sym_location] = ACTIONS(248),
    [anon_sym_xpath] = ACTIONS(248),
    [anon_sym_jsonpath] = ACTIONS(248),
    [anon_sym_regex] = ACTIONS(248),
    [anon_sym_not] = ACTIONS(250),
    [anon_sym_isDate] = ACTIONS(248),
    [anon_sym_isList] = ACTIONS(248),
    [anon_sym_isObject] = ACTIONS(248),
    [anon_sym_exists] = ACTIONS(248),
    [anon_sym_isInteger] = ACTIONS(248),
    [anon_sym_isFloat] = ACTIONS(248),
    [anon_sym_isBoolean] = ACTIONS(248),
    [anon_sym_isString] = ACTIONS(248),
    [anon_sym_isCollection] = ACTIONS(248),
    [anon_sym_isNumber] = ACTIONS(248),
    [anon_sym_isIsoDate] = ACTIONS(248),
    [anon_sym_isEmpty] = ACTIONS(248),
    [anon_sym_isIpv4] = ACTIONS(248),
    [anon_sym_isIpv6] = ACTIONS(248),
    [anon_sym_isUuid] = ACTIONS(248),
    [anon_sym_equals] = ACTIONS(248),
    [anon_sym_EQ_EQ] = ACTIONS(248),
    [anon_sym_notEquals] = ACTIONS(248),
    [anon_sym_BANG_EQ] = ACTIONS(248),
    [anon_sym_greaterThan] = ACTIONS(250),
    [anon_sym_GT] = ACTIONS(250),
    [anon_sym_greaterThanOrEquals] = ACTIONS(248),
    [anon_sym_GT_EQ] = ACTIONS(248),
    [anon_sym_lessThan] = ACTIONS(250),
    [anon_sym_LT] = ACTIONS(250),
    [anon_sym_lessThanOrEquals] = ACTIONS(248),
    [anon_sym_LT_EQ] = ACTIONS(248),
    [anon_sym_startsWith] = ACTIONS(248),
    [anon_sym_endsWith] = ACTIONS(248),
    [anon_sym_contains] = ACTIONS(248),
    [anon_sym_matches] = ACTIONS(248),
    [anon_sym_includes] = ACTIONS(248),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(248),
    [anon_sym_COMMA] = ACTIONS(248),
    [anon_sym_RBRACK] = ACTIONS(248),
    [anon_sym_base64Decode] = ACTIONS(248),
    [anon_sym_base64Encode] = ACTIONS(248),
    [anon_sym_base64UrlSafeDecode] = ACTIONS(248),
    [anon_sym_base64UrlSafeEncode] = ACTIONS(248),
    [anon_sym_first] = ACTIONS(248),
    [anon_sym_last] = ACTIONS(248),
    [anon_sym_toFloat] = ACTIONS(248),
    [anon_sym_toHex] = ACTIONS(248),
    [anon_sym_toString] = ACTIONS(248),
    [anon_sym_utf8Decode] = ACTIONS(248),
    [anon_sym_utf8Encode] = ACTIONS(248),
    [anon_sym_count] = ACTIONS(248),
    [anon_sym_urlEncode] = ACTIONS(248),
    [anon_sym_urlDecode] = ACTIONS(248),
    [anon_sym_toInt] = ACTIONS(248),
    [anon_sym_htmlEscape] = ACTIONS(248),
    [anon_sym_htmlUnescape] = ACTIONS(248),
    [anon_sym_daysAfterNow] = ACTIONS(248),
    [anon_sym_daysBeforeNow] = ACTIONS(248),
    [anon_sym_charsetDecode] = ACTIONS(248),
    [anon_sym_dateFormat] = ACTIONS(248),
    [anon_sym_urlQueryParam] = ACTIONS(248),
    [anon_sym_decode] = ACTIONS(248),
    [anon_sym_format] = ACTIONS(248),
    [anon_sym_toDate] = ACTIONS(248),
    [anon_sym_nth] = ACTIONS(248),
    [anon_sym_replace] = ACTIONS(250),
    [anon_sym_replaceRegex] = ACTIONS(248),
    [anon_sym_split] = ACTIONS(248),
    [sym_comment] = ACTIONS(142),
  },
  [21] = {
    [anon_sym_location] = ACTIONS(252),
    [anon_sym_xpath] = ACTIONS(252),
    [anon_sym_jsonpath] = ACTIONS(252),
    [anon_sym_regex] = ACTIONS(252),
    [anon_sym_DQUOTE] = ACTIONS(252),
    [anon_sym_not] = ACTIONS(254),
    [anon_sym_isDate] = ACTIONS(252),
    [anon_sym_isList] = ACTIONS(252),
    [anon_sym_isObject] = ACTIONS(252),
    [anon_sym_exists] = ACTIONS(252),
    [anon_sym_isInteger] = ACTIONS(252),
    [anon_sym_isFloat] = ACTIONS(252),
    [anon_sym_isBoolean] = ACTIONS(252),
    [anon_sym_isString] = ACTIONS(252),
    [anon_sym_isCollection] = ACTIONS(252),
    [anon_sym_isNumber] = ACTIONS(252),
    [anon_sym_isIsoDate] = ACTIONS(252),
    [anon_sym_isEmpty] = ACTIONS(252),
    [anon_sym_isIpv4] = ACTIONS(252),
    [anon_sym_isIpv6] = ACTIONS(252),
    [anon_sym_isUuid] = ACTIONS(252),
    [anon_sym_equals] = ACTIONS(252),
    [anon_sym_EQ_EQ] = ACTIONS(252),
    [anon_sym_notEquals] = ACTIONS(252),
    [anon_sym_BANG_EQ] = ACTIONS(252),
    [anon_sym_greaterThan] = ACTIONS(254),
    [anon_sym_GT] = ACTIONS(254),
    [anon_sym_greaterThanOrEquals] = ACTIONS(252),
    [anon_sym_GT_EQ] = ACTIONS(252),
    [anon_sym_lessThan] = ACTIONS(254),
    [anon_sym_LT] = ACTIONS(254),
    [anon_sym_lessThanOrEquals] = ACTIONS(252),
    [anon_sym_LT_EQ] = ACTIONS(252),
    [anon_sym_startsWith] = ACTIONS(252),
    [anon_sym_endsWith] = ACTIONS(252),
    [anon_sym_contains] = ACTIONS(252),
    [anon_sym_matches] = ACTIONS(252),
    [anon_sym_includes] = ACTIONS(252),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(252),
    [anon_sym_base64Decode] = ACTIONS(252),
    [anon_sym_base64Encode] = ACTIONS(252),
    [anon_sym_base64UrlSafeDecode] = ACTIONS(252),
    [anon_sym_base64UrlSafeEncode] = ACTIONS(252),
    [anon_sym_first] = ACTIONS(252),
    [anon_sym_last] = ACTIONS(252),
    [anon_sym_toFloat] = ACTIONS(252),
    [anon_sym_toHex] = ACTIONS(252),
    [anon_sym_toString] = ACTIONS(252),
    [anon_sym_utf8Decode] = ACTIONS(252),
    [anon_sym_utf8Encode] = ACTIONS(252),
    [anon_sym_count] = ACTIONS(252),
    [anon_sym_urlEncode] = ACTIONS(252),
    [anon_sym_urlDecode] = ACTIONS(252),
    [anon_sym_toInt] = ACTIONS(252),
    [anon_sym_htmlEscape] = ACTIONS(252),
    [anon_sym_htmlUnescape] = ACTIONS(252),
    [anon_sym_daysAfterNow] = ACTIONS(252),
    [anon_sym_daysBeforeNow] = ACTIONS(252),
    [anon_sym_charsetDecode] = ACTIONS(252),
    [anon_sym_dateFormat] = ACTIONS(252),
    [anon_sym_urlQueryParam] = ACTIONS(252),
    [anon_sym_decode] = ACTIONS(252),
    [anon_sym_format] = ACTIONS(252),
    [anon_sym_toDate] = ACTIONS(252),
    [anon_sym_nth] = ACTIONS(252),
    [anon_sym_replace] = ACTIONS(254),
    [anon_sym_replaceRegex] = ACTIONS(252),
    [anon_sym_split] = ACTIONS(252),
    [sym_comment] = ACTIONS(142),
  },
  [22] = {
    [anon_sym_location] = ACTIONS(256),
    [anon_sym_xpath] = ACTIONS(256),
    [anon_sym_jsonpath] = ACTIONS(256),
    [anon_sym_regex] = ACTIONS(256),
    [anon_sym_DQUOTE] = ACTIONS(256),
    [anon_sym_not] = ACTIONS(258),
    [anon_sym_isDate] = ACTIONS(256),
    [anon_sym_isList] = ACTIONS(256),
    [anon_sym_isObject] = ACTIONS(256),
    [anon_sym_exists] = ACTIONS(256),
    [anon_sym_isInteger] = ACTIONS(256),
    [anon_sym_isFloat] = ACTIONS(256),
    [anon_sym_isBoolean] = ACTIONS(256),
    [anon_sym_isString] = ACTIONS(256),
    [anon_sym_isCollection] = ACTIONS(256),
    [anon_sym_isNumber] = ACTIONS(256),
    [anon_sym_isIsoDate] = ACTIONS(256),
    [anon_sym_isEmpty] = ACTIONS(256),
    [anon_sym_isIpv4] = ACTIONS(256),
    [anon_sym_isIpv6] = ACTIONS(256),
    [anon_sym_isUuid] = ACTIONS(256),
    [anon_sym_equals] = ACTIONS(256),
    [anon_sym_EQ_EQ] = ACTIONS(256),
    [anon_sym_notEquals] = ACTIONS(256),
    [anon_sym_BANG_EQ] = ACTIONS(256),
    [anon_sym_greaterThan] = ACTIONS(258),
    [anon_sym_GT] = ACTIONS(258),
    [anon_sym_greaterThanOrEquals] = ACTIONS(256),
    [anon_sym_GT_EQ] = ACTIONS(256),
    [anon_sym_lessThan] = ACTIONS(258),
    [anon_sym_LT] = ACTIONS(258),
    [anon_sym_lessThanOrEquals] = ACTIONS(256),
    [anon_sym_LT_EQ] = ACTIONS(256),
    [anon_sym_startsWith] = ACTIONS(256),
    [anon_sym_endsWith] = ACTIONS(256),
    [anon_sym_contains] = ACTIONS(256),
    [anon_sym_matches] = ACTIONS(256),
    [anon_sym_includes] = ACTIONS(256),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(256),
    [anon_sym_base64Decode] = ACTIONS(256),
    [anon_sym_base64Encode] = ACTIONS(256),
    [anon_sym_base64UrlSafeDecode] = ACTIONS(256),
    [anon_sym_base64UrlSafeEncode] = ACTIONS(256),
    [anon_sym_first] = ACTIONS(256),
    [anon_sym_last] = ACTIONS(256),
    [anon_sym_toFloat] = ACTIONS(256),
    [anon_sym_toHex] = ACTIONS(256),
    [anon_sym_toString] = ACTIONS(256),
    [anon_sym_utf8Decode] = ACTIONS(256),
    [anon_sym_utf8Encode] = ACTIONS(256),
    [anon_sym_count] = ACTIONS(256),
    [anon_sym_urlEncode] = ACTIONS(256),
    [anon_sym_urlDecode] = ACTIONS(256),
    [anon_sym_toInt] = ACTIONS(256),
    [anon_sym_htmlEscape] = ACTIONS(256),
    [anon_sym_htmlUnescape] = ACTIONS(256),
    [anon_sym_daysAfterNow] = ACTIONS(256),
    [anon_sym_daysBeforeNow] = ACTIONS(256),
    [anon_sym_charsetDecode] = ACTIONS(256),
    [anon_sym_dateFormat] = ACTIONS(256),
    [anon_sym_urlQueryParam] = ACTIONS(256),
    [anon_sym_decode] = ACTIONS(256),
    [anon_sym_format] = ACTIONS(256),
    [anon_sym_toDate] = ACTIONS(256),
    [anon_sym_nth] = ACTIONS(256),
    [anon_sym_replace] = ACTIONS(258),
    [anon_sym_replaceRegex] = ACTIONS(256),
    [anon_sym_split] = ACTIONS(256),
    [sym_comment] = ACTIONS(142),
  },
  [23] = {
    [anon_sym_location] = ACTIONS(260),
    [anon_sym_xpath] = ACTIONS(260),
    [anon_sym_jsonpath] = ACTIONS(260),
    [anon_sym_regex] = ACTIONS(260),
    [anon_sym_DQUOTE] = ACTIONS(260),
    [anon_sym_not] = ACTIONS(262),
    [anon_sym_isDate] = ACTIONS(260),
    [anon_sym_isList] = ACTIONS(260),
    [anon_sym_isObject] = ACTIONS(260),
    [anon_sym_exists] = ACTIONS(260),
    [anon_sym_isInteger] = ACTIONS(260),
    [anon_sym_isFloat] = ACTIONS(260),
    [anon_sym_isBoolean] = ACTIONS(260),
    [anon_sym_isString] = ACTIONS(260),
    [anon_sym_isCollection] = ACTIONS(260),
    [anon_sym_isNumber] = ACTIONS(260),
    [anon_sym_isIsoDate] = ACTIONS(260),
    [anon_sym_isEmpty] = ACTIONS(260),
    [anon_sym_isIpv4] = ACTIONS(260),
    [anon_sym_isIpv6] = ACTIONS(260),
    [anon_sym_isUuid] = ACTIONS(260),
    [anon_sym_equals] = ACTIONS(260),
    [anon_sym_EQ_EQ] = ACTIONS(260),
    [anon_sym_notEquals] = ACTIONS(260),
    [anon_sym_BANG_EQ] = ACTIONS(260),
    [anon_sym_greaterThan] = ACTIONS(262),
    [anon_sym_GT] = ACTIONS(262),
    [anon_sym_greaterThanOrEquals] = ACTIONS(260),
    [anon_sym_GT_EQ] = ACTIONS(260),
    [anon_sym_lessThan] = ACTIONS(262),
    [anon_sym_LT] = ACTIONS(262),
    [anon_sym_lessThanOrEquals] = ACTIONS(260),
    [anon_sym_LT_EQ] = ACTIONS(260),
    [anon_sym_startsWith] = ACTIONS(260),
    [anon_sym_endsWith] = ACTIONS(260),
    [anon_sym_contains] = ACTIONS(260),
    [anon_sym_matches] = ACTIONS(260),
    [anon_sym_includes] = ACTIONS(260),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(260),
    [anon_sym_base64Decode] = ACTIONS(260),
    [anon_sym_base64Encode] = ACTIONS(260),
    [anon_sym_base64UrlSafeDecode] = ACTIONS(260),
    [anon_sym_base64UrlSafeEncode] = ACTIONS(260),
    [anon_sym_first] = ACTIONS(260),
    [anon_sym_last] = ACTIONS(260),
    [anon_sym_toFloat] = ACTIONS(260),
    [anon_sym_toHex] = ACTIONS(260),
    [anon_sym_toString] = ACTIONS(260),
    [anon_sym_utf8Decode] = ACTIONS(260),
    [anon_sym_utf8Encode] = ACTIONS(260),
    [anon_sym_count] = ACTIONS(260),
    [anon_sym_urlEncode] = ACTIONS(260),
    [anon_sym_urlDecode] = ACTIONS(260),
    [anon_sym_toInt] = ACTIONS(260),
    [anon_sym_htmlEscape] = ACTIONS(260),
    [anon_sym_htmlUnescape] = ACTIONS(260),
    [anon_sym_daysAfterNow] = ACTIONS(260),
    [anon_sym_daysBeforeNow] = ACTIONS(260),
    [anon_sym_charsetDecode] = ACTIONS(260),
    [anon_sym_dateFormat] = ACTIONS(260),
    [anon_sym_urlQueryParam] = ACTIONS(260),
    [anon_sym_decode] = ACTIONS(260),
    [anon_sym_format] = ACTIONS(260),
    [anon_sym_toDate] = ACTIONS(260),
    [anon_sym_nth] = ACTIONS(260),
    [anon_sym_replace] = ACTIONS(262),
    [anon_sym_replaceRegex] = ACTIONS(260),
    [anon_sym_split] = ACTIONS(260),
    [sym_comment] = ACTIONS(142),
  },
  [24] = {
    [anon_sym_location] = ACTIONS(264),
    [anon_sym_xpath] = ACTIONS(264),
    [anon_sym_jsonpath] = ACTIONS(264),
    [anon_sym_regex] = ACTIONS(264),
    [anon_sym_DQUOTE] = ACTIONS(264),
    [anon_sym_not] = ACTIONS(266),
    [anon_sym_isDate] = ACTIONS(264),
    [anon_sym_isList] = ACTIONS(264),
    [anon_sym_isObject] = ACTIONS(264),
    [anon_sym_exists] = ACTIONS(264),
    [anon_sym_isInteger] = ACTIONS(264),
    [anon_sym_isFloat] = ACTIONS(264),
    [anon_sym_isBoolean] = ACTIONS(264),
    [anon_sym_isString] = ACTIONS(264),
    [anon_sym_isCollection] = ACTIONS(264),
    [anon_sym_isNumber] = ACTIONS(264),
    [anon_sym_isIsoDate] = ACTIONS(264),
    [anon_sym_isEmpty] = ACTIONS(264),
    [anon_sym_isIpv4] = ACTIONS(264),
    [anon_sym_isIpv6] = ACTIONS(264),
    [anon_sym_isUuid] = ACTIONS(264),
    [anon_sym_equals] = ACTIONS(264),
    [anon_sym_EQ_EQ] = ACTIONS(264),
    [anon_sym_notEquals] = ACTIONS(264),
    [anon_sym_BANG_EQ] = ACTIONS(264),
    [anon_sym_greaterThan] = ACTIONS(266),
    [anon_sym_GT] = ACTIONS(266),
    [anon_sym_greaterThanOrEquals] = ACTIONS(264),
    [anon_sym_GT_EQ] = ACTIONS(264),
    [anon_sym_lessThan] = ACTIONS(266),
    [anon_sym_LT] = ACTIONS(266),
    [anon_sym_lessThanOrEquals] = ACTIONS(264),
    [anon_sym_LT_EQ] = ACTIONS(264),
    [anon_sym_startsWith] = ACTIONS(264),
    [anon_sym_endsWith] = ACTIONS(264),
    [anon_sym_contains] = ACTIONS(264),
    [anon_sym_matches] = ACTIONS(264),
    [anon_sym_includes] = ACTIONS(264),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(264),
    [anon_sym_base64Decode] = ACTIONS(264),
    [anon_sym_base64Encode] = ACTIONS(264),
    [anon_sym_base64UrlSafeDecode] = ACTIONS(264),
    [anon_sym_base64UrlSafeEncode] = ACTIONS(264),
    [anon_sym_first] = ACTIONS(264),
    [anon_sym_last] = ACTIONS(264),
    [anon_sym_toFloat] = ACTIONS(264),
    [anon_sym_toHex] = ACTIONS(264),
    [anon_sym_toString] = ACTIONS(264),
    [anon_sym_utf8Decode] = ACTIONS(264),
    [anon_sym_utf8Encode] = ACTIONS(264),
    [anon_sym_count] = ACTIONS(264),
    [anon_sym_urlEncode] = ACTIONS(264),
    [anon_sym_urlDecode] = ACTIONS(264),
    [anon_sym_toInt] = ACTIONS(264),
    [anon_sym_htmlEscape] = ACTIONS(264),
    [anon_sym_htmlUnescape] = ACTIONS(264),
    [anon_sym_daysAfterNow] = ACTIONS(264),
    [anon_sym_daysBeforeNow] = ACTIONS(264),
    [anon_sym_charsetDecode] = ACTIONS(264),
    [anon_sym_dateFormat] = ACTIONS(264),
    [anon_sym_urlQueryParam] = ACTIONS(264),
    [anon_sym_decode] = ACTIONS(264),
    [anon_sym_format] = ACTIONS(264),
    [anon_sym_toDate] = ACTIONS(264),
    [anon_sym_nth] = ACTIONS(264),
    [anon_sym_replace] = ACTIONS(266),
    [anon_sym_replaceRegex] = ACTIONS(264),
    [anon_sym_split] = ACTIONS(264),
    [sym_comment] = ACTIONS(142),
  },
  [25] = {
    [anon_sym_location] = ACTIONS(268),
    [anon_sym_xpath] = ACTIONS(268),
    [anon_sym_jsonpath] = ACTIONS(268),
    [anon_sym_regex] = ACTIONS(268),
    [anon_sym_not] = ACTIONS(270),
    [anon_sym_isDate] = ACTIONS(268),
    [anon_sym_isList] = ACTIONS(268),
    [anon_sym_isObject] = ACTIONS(268),
    [anon_sym_exists] = ACTIONS(268),
    [anon_sym_isInteger] = ACTIONS(268),
    [anon_sym_isFloat] = ACTIONS(268),
    [anon_sym_isBoolean] = ACTIONS(268),
    [anon_sym_isString] = ACTIONS(268),
    [anon_sym_isCollection] = ACTIONS(268),
    [anon_sym_isNumber] = ACTIONS(268),
    [anon_sym_isIsoDate] = ACTIONS(268),
    [anon_sym_isEmpty] = ACTIONS(268),
    [anon_sym_isIpv4] = ACTIONS(268),
    [anon_sym_isIpv6] = ACTIONS(268),
    [anon_sym_isUuid] = ACTIONS(268),
    [anon_sym_equals] = ACTIONS(268),
    [anon_sym_EQ_EQ] = ACTIONS(268),
    [anon_sym_notEquals] = ACTIONS(268),
    [anon_sym_BANG_EQ] = ACTIONS(268),
    [anon_sym_greaterThan] = ACTIONS(270),
    [anon_sym_GT] = ACTIONS(270),
    [anon_sym_greaterThanOrEquals] = ACTIONS(268),
    [anon_sym_GT_EQ] = ACTIONS(268),
    [anon_sym_lessThan] = ACTIONS(270),
    [anon_sym_LT] = ACTIONS(270),
    [anon_sym_lessThanOrEquals] = ACTIONS(268),
    [anon_sym_LT_EQ] = ACTIONS(268),
    [anon_sym_startsWith] = ACTIONS(268),
    [anon_sym_endsWith] = ACTIONS(268),
    [anon_sym_contains] = ACTIONS(268),
    [anon_sym_matches] = ACTIONS(268),
    [anon_sym_includes] = ACTIONS(268),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(268),
    [anon_sym_base64Decode] = ACTIONS(268),
    [anon_sym_base64Encode] = ACTIONS(268),
    [anon_sym_base64UrlSafeDecode] = ACTIONS(268),
    [anon_sym_base64UrlSafeEncode] = ACTIONS(268),
    [anon_sym_first] = ACTIONS(268),
    [anon_sym_last] = ACTIONS(268),
    [anon_sym_toFloat] = ACTIONS(268),
    [anon_sym_toHex] = ACTIONS(268),
    [anon_sym_toString] = ACTIONS(268),
    [anon_sym_utf8Decode] = ACTIONS(268),
    [anon_sym_utf8Encode] = ACTIONS(268),
    [anon_sym_count] = ACTIONS(268),
    [anon_sym_urlEncode] = ACTIONS(268),
    [anon_sym_urlDecode] = ACTIONS(268),
    [anon_sym_toInt] = ACTIONS(268),
    [anon_sym_htmlEscape] = ACTIONS(268),
    [anon_sym_htmlUnescape] = ACTIONS(268),
    [anon_sym_daysAfterNow] = ACTIONS(268),
    [anon_sym_daysBeforeNow] = ACTIONS(268),
    [anon_sym_charsetDecode] = ACTIONS(268),
    [anon_sym_dateFormat] = ACTIONS(268),
    [anon_sym_urlQueryParam] = ACTIONS(268),
    [anon_sym_decode] = ACTIONS(268),
    [anon_sym_format] = ACTIONS(268),
    [anon_sym_toDate] = ACTIONS(268),
    [anon_sym_nth] = ACTIONS(268),
    [anon_sym_replace] = ACTIONS(270),
    [anon_sym_replaceRegex] = ACTIONS(268),
    [anon_sym_split] = ACTIONS(268),
    [sym_comment] = ACTIONS(142),
  },
  [26] = {
    [anon_sym_location] = ACTIONS(272),
    [anon_sym_xpath] = ACTIONS(272),
    [anon_sym_jsonpath] = ACTIONS(272),
    [anon_sym_regex] = ACTIONS(272),
    [anon_sym_not] = ACTIONS(274),
    [anon_sym_isDate] = ACTIONS(272),
    [anon_sym_isList] = ACTIONS(272),
    [anon_sym_isObject] = ACTIONS(272),
    [anon_sym_exists] = ACTIONS(272),
    [anon_sym_isInteger] = ACTIONS(272),
    [anon_sym_isFloat] = ACTIONS(272),
    [anon_sym_isBoolean] = ACTIONS(272),
    [anon_sym_isString] = ACTIONS(272),
    [anon_sym_isCollection] = ACTIONS(272),
    [anon_sym_isNumber] = ACTIONS(272),
    [anon_sym_isIsoDate] = ACTIONS(272),
    [anon_sym_isEmpty] = ACTIONS(272),
    [anon_sym_isIpv4] = ACTIONS(272),
    [anon_sym_isIpv6] = ACTIONS(272),
    [anon_sym_isUuid] = ACTIONS(272),
    [anon_sym_equals] = ACTIONS(272),
    [anon_sym_EQ_EQ] = ACTIONS(272),
    [anon_sym_notEquals] = ACTIONS(272),
    [anon_sym_BANG_EQ] = ACTIONS(272),
    [anon_sym_greaterThan] = ACTIONS(274),
    [anon_sym_GT] = ACTIONS(274),
    [anon_sym_greaterThanOrEquals] = ACTIONS(272),
    [anon_sym_GT_EQ] = ACTIONS(272),
    [anon_sym_lessThan] = ACTIONS(274),
    [anon_sym_LT] = ACTIONS(274),
    [anon_sym_lessThanOrEquals] = ACTIONS(272),
    [anon_sym_LT_EQ] = ACTIONS(272),
    [anon_sym_startsWith] = ACTIONS(272),
    [anon_sym_endsWith] = ACTIONS(272),
    [anon_sym_contains] = ACTIONS(272),
    [anon_sym_matches] = ACTIONS(272),
    [anon_sym_includes] = ACTIONS(272),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(272),
    [anon_sym_base64Decode] = ACTIONS(272),
    [anon_sym_base64Encode] = ACTIONS(272),
    [anon_sym_base64UrlSafeDecode] = ACTIONS(272),
    [anon_sym_base64UrlSafeEncode] = ACTIONS(272),
    [anon_sym_first] = ACTIONS(272),
    [anon_sym_last] = ACTIONS(272),
    [anon_sym_toFloat] = ACTIONS(272),
    [anon_sym_toHex] = ACTIONS(272),
    [anon_sym_toString] = ACTIONS(272),
    [anon_sym_utf8Decode] = ACTIONS(272),
    [anon_sym_utf8Encode] = ACTIONS(272),
    [anon_sym_count] = ACTIONS(272),
    [anon_sym_urlEncode] = ACTIONS(272),
    [anon_sym_urlDecode] = ACTIONS(272),
    [anon_sym_toInt] = ACTIONS(272),
    [anon_sym_htmlEscape] = ACTIONS(272),
    [anon_sym_htmlUnescape] = ACTIONS(272),
    [anon_sym_daysAfterNow] = ACTIONS(272),
    [anon_sym_daysBeforeNow] = ACTIONS(272),
    [anon_sym_charsetDecode] = ACTIONS(272),
    [anon_sym_dateFormat] = ACTIONS(272),
    [anon_sym_urlQueryParam] = ACTIONS(272),
    [anon_sym_decode] = ACTIONS(272),
    [anon_sym_format] = ACTIONS(272),
    [anon_sym_toDate] = ACTIONS(272),
    [anon_sym_nth] = ACTIONS(272),
    [anon_sym_replace] = ACTIONS(274),
    [anon_sym_replaceRegex] = ACTIONS(272),
    [anon_sym_split] = ACTIONS(272),
    [sym_comment] = ACTIONS(142),
  },
  [27] = {
    [anon_sym_location] = ACTIONS(276),
    [anon_sym_xpath] = ACTIONS(276),
    [anon_sym_jsonpath] = ACTIONS(276),
    [anon_sym_regex] = ACTIONS(276),
    [anon_sym_not] = ACTIONS(278),
    [anon_sym_isDate] = ACTIONS(276),
    [anon_sym_isList] = ACTIONS(276),
    [anon_sym_isObject] = ACTIONS(276),
    [anon_sym_exists] = ACTIONS(276),
    [anon_sym_isInteger] = ACTIONS(276),
    [anon_sym_isFloat] = ACTIONS(276),
    [anon_sym_isBoolean] = ACTIONS(276),
    [anon_sym_isString] = ACTIONS(276),
    [anon_sym_isCollection] = ACTIONS(276),
    [anon_sym_isNumber] = ACTIONS(276),
    [anon_sym_isIsoDate] = ACTIONS(276),
    [anon_sym_isEmpty] = ACTIONS(276),
    [anon_sym_isIpv4] = ACTIONS(276),
    [anon_sym_isIpv6] = ACTIONS(276),
    [anon_sym_isUuid] = ACTIONS(276),
    [anon_sym_equals] = ACTIONS(276),
    [anon_sym_EQ_EQ] = ACTIONS(276),
    [anon_sym_notEquals] = ACTIONS(276),
    [anon_sym_BANG_EQ] = ACTIONS(276),
    [anon_sym_greaterThan] = ACTIONS(278),
    [anon_sym_GT] = ACTIONS(278),
    [anon_sym_greaterThanOrEquals] = ACTIONS(276),
    [anon_sym_GT_EQ] = ACTIONS(276),
    [anon_sym_lessThan] = ACTIONS(278),
    [anon_sym_LT] = ACTIONS(278),
    [anon_sym_lessThanOrEquals] = ACTIONS(276),
    [anon_sym_LT_EQ] = ACTIONS(276),
    [anon_sym_startsWith] = ACTIONS(276),
    [anon_sym_endsWith] = ACTIONS(276),
    [anon_sym_contains] = ACTIONS(276),
    [anon_sym_matches] = ACTIONS(276),
    [anon_sym_includes] = ACTIONS(276),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(276),
    [anon_sym_base64Decode] = ACTIONS(276),
    [anon_sym_base64Encode] = ACTIONS(276),
    [anon_sym_base64UrlSafeDecode] = ACTIONS(276),
    [anon_sym_base64UrlSafeEncode] = ACTIONS(276),
    [anon_sym_first] = ACTIONS(276),
    [anon_sym_last] = ACTIONS(276),
    [anon_sym_toFloat] = ACTIONS(276),
    [anon_sym_toHex] = ACTIONS(276),
    [anon_sym_toString] = ACTIONS(276),
    [anon_sym_utf8Decode] = ACTIONS(276),
    [anon_sym_utf8Encode] = ACTIONS(276),
    [anon_sym_count] = ACTIONS(276),
    [anon_sym_urlEncode] = ACTIONS(276),
    [anon_sym_urlDecode] = ACTIONS(276),
    [anon_sym_toInt] = ACTIONS(276),
    [anon_sym_htmlEscape] = ACTIONS(276),
    [anon_sym_htmlUnescape] = ACTIONS(276),
    [anon_sym_daysAfterNow] = ACTIONS(276),
    [anon_sym_daysBeforeNow] = ACTIONS(276),
    [anon_sym_charsetDecode] = ACTIONS(276),
    [anon_sym_dateFormat] = ACTIONS(276),
    [anon_sym_urlQueryParam] = ACTIONS(276),
    [anon_sym_decode] = ACTIONS(276),
    [anon_sym_format] = ACTIONS(276),
    [anon_sym_toDate] = ACTIONS(276),
    [anon_sym_nth] = ACTIONS(276),
    [anon_sym_replace] = ACTIONS(278),
    [anon_sym_replaceRegex] = ACTIONS(276),
    [anon_sym_split] = ACTIONS(276),
    [sym_comment] = ACTIONS(142),
  },
  [28] = {
    [anon_sym_location] = ACTIONS(280),
    [anon_sym_xpath] = ACTIONS(280),
    [anon_sym_jsonpath] = ACTIONS(280),
    [anon_sym_regex] = ACTIONS(280),
    [anon_sym_not] = ACTIONS(282),
    [anon_sym_isDate] = ACTIONS(280),
    [anon_sym_isList] = ACTIONS(280),
    [anon_sym_isObject] = ACTIONS(280),
    [anon_sym_exists] = ACTIONS(280),
    [anon_sym_isInteger] = ACTIONS(280),
    [anon_sym_isFloat] = ACTIONS(280),
    [anon_sym_isBoolean] = ACTIONS(280),
    [anon_sym_isString] = ACTIONS(280),
    [anon_sym_isCollection] = ACTIONS(280),
    [anon_sym_isNumber] = ACTIONS(280),
    [anon_sym_isIsoDate] = ACTIONS(280),
    [anon_sym_isEmpty] = ACTIONS(280),
    [anon_sym_isIpv4] = ACTIONS(280),
    [anon_sym_isIpv6] = ACTIONS(280),
    [anon_sym_isUuid] = ACTIONS(280),
    [anon_sym_equals] = ACTIONS(280),
    [anon_sym_EQ_EQ] = ACTIONS(280),
    [anon_sym_notEquals] = ACTIONS(280),
    [anon_sym_BANG_EQ] = ACTIONS(280),
    [anon_sym_greaterThan] = ACTIONS(282),
    [anon_sym_GT] = ACTIONS(282),
    [anon_sym_greaterThanOrEquals] = ACTIONS(280),
    [anon_sym_GT_EQ] = ACTIONS(280),
    [anon_sym_lessThan] = ACTIONS(282),
    [anon_sym_LT] = ACTIONS(282),
    [anon_sym_lessThanOrEquals] = ACTIONS(280),
    [anon_sym_LT_EQ] = ACTIONS(280),
    [anon_sym_startsWith] = ACTIONS(280),
    [anon_sym_endsWith] = ACTIONS(280),
    [anon_sym_contains] = ACTIONS(280),
    [anon_sym_matches] = ACTIONS(280),
    [anon_sym_includes] = ACTIONS(280),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(280),
    [anon_sym_base64Decode] = ACTIONS(280),
    [anon_sym_base64Encode] = ACTIONS(280),
    [anon_sym_base64UrlSafeDecode] = ACTIONS(280),
    [anon_sym_base64UrlSafeEncode] = ACTIONS(280),
    [anon_sym_first] = ACTIONS(280),
    [anon_sym_last] = ACTIONS(280),
    [anon_sym_toFloat] = ACTIONS(280),
    [anon_sym_toHex] = ACTIONS(280),
    [anon_sym_toString] = ACTIONS(280),
    [anon_sym_utf8Decode] = ACTIONS(280),
    [anon_sym_utf8Encode] = ACTIONS(280),
    [anon_sym_count] = ACTIONS(280),
    [anon_sym_urlEncode] = ACTIONS(280),
    [anon_sym_urlDecode] = ACTIONS(280),
    [anon_sym_toInt] = ACTIONS(280),
    [anon_sym_htmlEscape] = ACTIONS(280),
    [anon_sym_htmlUnescape] = ACTIONS(280),
    [anon_sym_daysAfterNow] = ACTIONS(280),
    [anon_sym_daysBeforeNow] = ACTIONS(280),
    [anon_sym_charsetDecode] = ACTIONS(280),
    [anon_sym_dateFormat] = ACTIONS(280),
    [anon_sym_urlQueryParam] = ACTIONS(280),
    [anon_sym_decode] = ACTIONS(280),
    [anon_sym_format] = ACTIONS(280),
    [anon_sym_toDate] = ACTIONS(280),
    [anon_sym_nth] = ACTIONS(280),
    [anon_sym_replace] = ACTIONS(282),
    [anon_sym_replaceRegex] = ACTIONS(280),
    [anon_sym_split] = ACTIONS(280),
    [sym_comment] = ACTIONS(142),
  },
  [29] = {
    [anon_sym_location] = ACTIONS(284),
    [anon_sym_xpath] = ACTIONS(284),
    [anon_sym_jsonpath] = ACTIONS(284),
    [anon_sym_regex] = ACTIONS(284),
    [anon_sym_not] = ACTIONS(286),
    [anon_sym_isDate] = ACTIONS(284),
    [anon_sym_isList] = ACTIONS(284),
    [anon_sym_isObject] = ACTIONS(284),
    [anon_sym_exists] = ACTIONS(284),
    [anon_sym_isInteger] = ACTIONS(284),
    [anon_sym_isFloat] = ACTIONS(284),
    [anon_sym_isBoolean] = ACTIONS(284),
    [anon_sym_isString] = ACTIONS(284),
    [anon_sym_isCollection] = ACTIONS(284),
    [anon_sym_isNumber] = ACTIONS(284),
    [anon_sym_isIsoDate] = ACTIONS(284),
    [anon_sym_isEmpty] = ACTIONS(284),
    [anon_sym_isIpv4] = ACTIONS(284),
    [anon_sym_isIpv6] = ACTIONS(284),
    [anon_sym_isUuid] = ACTIONS(284),
    [anon_sym_equals] = ACTIONS(284),
    [anon_sym_EQ_EQ] = ACTIONS(284),
    [anon_sym_notEquals] = ACTIONS(284),
    [anon_sym_BANG_EQ] = ACTIONS(284),
    [anon_sym_greaterThan] = ACTIONS(286),
    [anon_sym_GT] = ACTIONS(286),
    [anon_sym_greaterThanOrEquals] = ACTIONS(284),
    [anon_sym_GT_EQ] = ACTIONS(284),
    [anon_sym_lessThan] = ACTIONS(286),
    [anon_sym_LT] = ACTIONS(286),
    [anon_sym_lessThanOrEquals] = ACTIONS(284),
    [anon_sym_LT_EQ] = ACTIONS(284),
    [anon_sym_startsWith] = ACTIONS(284),
    [anon_sym_endsWith] = ACTIONS(284),
    [anon_sym_contains] = ACTIONS(284),
    [anon_sym_matches] = ACTIONS(284),
    [anon_sym_includes] = ACTIONS(284),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(284),
    [anon_sym_base64Decode] = ACTIONS(284),
    [anon_sym_base64Encode] = ACTIONS(284),
    [anon_sym_base64UrlSafeDecode] = ACTIONS(284),
    [anon_sym_base64UrlSafeEncode] = ACTIONS(284),
    [anon_sym_first] = ACTIONS(284),
    [anon_sym_last] = ACTIONS(284),
    [anon_sym_toFloat] = ACTIONS(284),
    [anon_sym_toHex] = ACTIONS(284),
    [anon_sym_toString] = ACTIONS(284),
    [anon_sym_utf8Decode] = ACTIONS(284),
    [anon_sym_utf8Encode] = ACTIONS(284),
    [anon_sym_count] = ACTIONS(284),
    [anon_sym_urlEncode] = ACTIONS(284),
    [anon_sym_urlDecode] = ACTIONS(284),
    [anon_sym_toInt] = ACTIONS(284),
    [anon_sym_htmlEscape] = ACTIONS(284),
    [anon_sym_htmlUnescape] = ACTIONS(284),
    [anon_sym_daysAfterNow] = ACTIONS(284),
    [anon_sym_daysBeforeNow] = ACTIONS(284),
    [anon_sym_charsetDecode] = ACTIONS(284),
    [anon_sym_dateFormat] = ACTIONS(284),
    [anon_sym_urlQueryParam] = ACTIONS(284),
    [anon_sym_decode] = ACTIONS(284),
    [anon_sym_format] = ACTIONS(284),
    [anon_sym_toDate] = ACTIONS(284),
    [anon_sym_nth] = ACTIONS(284),
    [anon_sym_replace] = ACTIONS(286),
    [anon_sym_replaceRegex] = ACTIONS(284),
    [anon_sym_split] = ACTIONS(284),
    [sym_comment] = ACTIONS(142),
  },
  [30] = {
    [anon_sym_location] = ACTIONS(288),
    [anon_sym_xpath] = ACTIONS(288),
    [anon_sym_jsonpath] = ACTIONS(288),
    [anon_sym_regex] = ACTIONS(288),
    [anon_sym_not] = ACTIONS(290),
    [anon_sym_isDate] = ACTIONS(288),
    [anon_sym_isList] = ACTIONS(288),
    [anon_sym_isObject] = ACTIONS(288),
    [anon_sym_exists] = ACTIONS(288),
    [anon_sym_isInteger] = ACTIONS(288),
    [anon_sym_isFloat] = ACTIONS(288),
    [anon_sym_isBoolean] = ACTIONS(288),
    [anon_sym_isString] = ACTIONS(288),
    [anon_sym_isCollection] = ACTIONS(288),
    [anon_sym_isNumber] = ACTIONS(288),
    [anon_sym_isIsoDate] = ACTIONS(288),
    [anon_sym_isEmpty] = ACTIONS(288),
    [anon_sym_isIpv4] = ACTIONS(288),
    [anon_sym_isIpv6] = ACTIONS(288),
    [anon_sym_isUuid] = ACTIONS(288),
    [anon_sym_equals] = ACTIONS(288),
    [anon_sym_EQ_EQ] = ACTIONS(288),
    [anon_sym_notEquals] = ACTIONS(288),
    [anon_sym_BANG_EQ] = ACTIONS(288),
    [anon_sym_greaterThan] = ACTIONS(290),
    [anon_sym_GT] = ACTIONS(290),
    [anon_sym_greaterThanOrEquals] = ACTIONS(288),
    [anon_sym_GT_EQ] = ACTIONS(288),
    [anon_sym_lessThan] = ACTIONS(290),
    [anon_sym_LT] = ACTIONS(290),
    [anon_sym_lessThanOrEquals] = ACTIONS(288),
    [anon_sym_LT_EQ] = ACTIONS(288),
    [anon_sym_startsWith] = ACTIONS(288),
    [anon_sym_endsWith] = ACTIONS(288),
    [anon_sym_contains] = ACTIONS(288),
    [anon_sym_matches] = ACTIONS(288),
    [anon_sym_includes] = ACTIONS(288),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(288),
    [anon_sym_base64Decode] = ACTIONS(288),
    [anon_sym_base64Encode] = ACTIONS(288),
    [anon_sym_base64UrlSafeDecode] = ACTIONS(288),
    [anon_sym_base64UrlSafeEncode] = ACTIONS(288),
    [anon_sym_first] = ACTIONS(288),
    [anon_sym_last] = ACTIONS(288),
    [anon_sym_toFloat] = ACTIONS(288),
    [anon_sym_toHex] = ACTIONS(288),
    [anon_sym_toString] = ACTIONS(288),
    [anon_sym_utf8Decode] = ACTIONS(288),
    [anon_sym_utf8Encode] = ACTIONS(288),
    [anon_sym_count] = ACTIONS(288),
    [anon_sym_urlEncode] = ACTIONS(288),
    [anon_sym_urlDecode] = ACTIONS(288),
    [anon_sym_toInt] = ACTIONS(288),
    [anon_sym_htmlEscape] = ACTIONS(288),
    [anon_sym_htmlUnescape] = ACTIONS(288),
    [anon_sym_daysAfterNow] = ACTIONS(288),
    [anon_sym_daysBeforeNow] = ACTIONS(288),
    [anon_sym_charsetDecode] = ACTIONS(288),
    [anon_sym_dateFormat] = ACTIONS(288),
    [anon_sym_urlQueryParam] = ACTIONS(288),
    [anon_sym_decode] = ACTIONS(288),
    [anon_sym_format] = ACTIONS(288),
    [anon_sym_toDate] = ACTIONS(288),
    [anon_sym_nth] = ACTIONS(288),
    [anon_sym_replace] = ACTIONS(290),
    [anon_sym_replaceRegex] = ACTIONS(288),
    [anon_sym_split] = ACTIONS(288),
    [sym_comment] = ACTIONS(142),
  },
  [31] = {
    [anon_sym_location] = ACTIONS(292),
    [anon_sym_xpath] = ACTIONS(292),
    [anon_sym_jsonpath] = ACTIONS(292),
    [anon_sym_regex] = ACTIONS(292),
    [anon_sym_not] = ACTIONS(294),
    [anon_sym_isDate] = ACTIONS(292),
    [anon_sym_isList] = ACTIONS(292),
    [anon_sym_isObject] = ACTIONS(292),
    [anon_sym_exists] = ACTIONS(292),
    [anon_sym_isInteger] = ACTIONS(292),
    [anon_sym_isFloat] = ACTIONS(292),
    [anon_sym_isBoolean] = ACTIONS(292),
    [anon_sym_isString] = ACTIONS(292),
    [anon_sym_isCollection] = ACTIONS(292),
    [anon_sym_isNumber] = ACTIONS(292),
    [anon_sym_isIsoDate] = ACTIONS(292),
    [anon_sym_isEmpty] = ACTIONS(292),
    [anon_sym_isIpv4] = ACTIONS(292),
    [anon_sym_isIpv6] = ACTIONS(292),
    [anon_sym_isUuid] = ACTIONS(292),
    [anon_sym_equals] = ACTIONS(292),
    [anon_sym_EQ_EQ] = ACTIONS(292),
    [anon_sym_notEquals] = ACTIONS(292),
    [anon_sym_BANG_EQ] = ACTIONS(292),
    [anon_sym_greaterThan] = ACTIONS(294),
    [anon_sym_GT] = ACTIONS(294),
    [anon_sym_greaterThanOrEquals] = ACTIONS(292),
    [anon_sym_GT_EQ] = ACTIONS(292),
    [anon_sym_lessThan] = ACTIONS(294),
    [anon_sym_LT] = ACTIONS(294),
    [anon_sym_lessThanOrEquals] = ACTIONS(292),
    [anon_sym_LT_EQ] = ACTIONS(292),
    [anon_sym_startsWith] = ACTIONS(292),
    [anon_sym_endsWith] = ACTIONS(292),
    [anon_sym_contains] = ACTIONS(292),
    [anon_sym_matches] = ACTIONS(292),
    [anon_sym_includes] = ACTIONS(292),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(292),
    [anon_sym_base64Decode] = ACTIONS(292),
    [anon_sym_base64Encode] = ACTIONS(292),
    [anon_sym_base64UrlSafeDecode] = ACTIONS(292),
    [anon_sym_base64UrlSafeEncode] = ACTIONS(292),
    [anon_sym_first] = ACTIONS(292),
    [anon_sym_last] = ACTIONS(292),
    [anon_sym_toFloat] = ACTIONS(292),
    [anon_sym_toHex] = ACTIONS(292),
    [anon_sym_toString] = ACTIONS(292),
    [anon_sym_utf8Decode] = ACTIONS(292),
    [anon_sym_utf8Encode] = ACTIONS(292),
    [anon_sym_count] = ACTIONS(292),
    [anon_sym_urlEncode] = ACTIONS(292),
    [anon_sym_urlDecode] = ACTIONS(292),
    [anon_sym_toInt] = ACTIONS(292),
    [anon_sym_htmlEscape] = ACTIONS(292),
    [anon_sym_htmlUnescape] = ACTIONS(292),
    [anon_sym_daysAfterNow] = ACTIONS(292),
    [anon_sym_daysBeforeNow] = ACTIONS(292),
    [anon_sym_charsetDecode] = ACTIONS(292),
    [anon_sym_dateFormat] = ACTIONS(292),
    [anon_sym_urlQueryParam] = ACTIONS(292),
    [anon_sym_decode] = ACTIONS(292),
    [anon_sym_format] = ACTIONS(292),
    [anon_sym_toDate] = ACTIONS(292),
    [anon_sym_nth] = ACTIONS(292),
    [anon_sym_replace] = ACTIONS(294),
    [anon_sym_replaceRegex] = ACTIONS(292),
    [anon_sym_split] = ACTIONS(292),
    [sym_comment] = ACTIONS(142),
  },
  [32] = {
    [anon_sym_location] = ACTIONS(296),
    [anon_sym_xpath] = ACTIONS(296),
    [anon_sym_jsonpath] = ACTIONS(296),
    [anon_sym_regex] = ACTIONS(296),
    [anon_sym_not] = ACTIONS(298),
    [anon_sym_isDate] = ACTIONS(296),
    [anon_sym_isList] = ACTIONS(296),
    [anon_sym_isObject] = ACTIONS(296),
    [anon_sym_exists] = ACTIONS(296),
    [anon_sym_isInteger] = ACTIONS(296),
    [anon_sym_isFloat] = ACTIONS(296),
    [anon_sym_isBoolean] = ACTIONS(296),
    [anon_sym_isString] = ACTIONS(296),
    [anon_sym_isCollection] = ACTIONS(296),
    [anon_sym_isNumber] = ACTIONS(296),
    [anon_sym_isIsoDate] = ACTIONS(296),
    [anon_sym_isEmpty] = ACTIONS(296),
    [anon_sym_isIpv4] = ACTIONS(296),
    [anon_sym_isIpv6] = ACTIONS(296),
    [anon_sym_isUuid] = ACTIONS(296),
    [anon_sym_equals] = ACTIONS(296),
    [anon_sym_EQ_EQ] = ACTIONS(296),
    [anon_sym_notEquals] = ACTIONS(296),
    [anon_sym_BANG_EQ] = ACTIONS(296),
    [anon_sym_greaterThan] = ACTIONS(298),
    [anon_sym_GT] = ACTIONS(298),
    [anon_sym_greaterThanOrEquals] = ACTIONS(296),
    [anon_sym_GT_EQ] = ACTIONS(296),
    [anon_sym_lessThan] = ACTIONS(298),
    [anon_sym_LT] = ACTIONS(298),
    [anon_sym_lessThanOrEquals] = ACTIONS(296),
    [anon_sym_LT_EQ] = ACTIONS(296),
    [anon_sym_startsWith] = ACTIONS(296),
    [anon_sym_endsWith] = ACTIONS(296),
    [anon_sym_contains] = ACTIONS(296),
    [anon_sym_matches] = ACTIONS(296),
    [anon_sym_includes] = ACTIONS(296),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(296),
    [anon_sym_base64Decode] = ACTIONS(296),
    [anon_sym_base64Encode] = ACTIONS(296),
    [anon_sym_base64UrlSafeDecode] = ACTIONS(296),
    [anon_sym_base64UrlSafeEncode] = ACTIONS(296),
    [anon_sym_first] = ACTIONS(296),
    [anon_sym_last] = ACTIONS(296),
    [anon_sym_toFloat] = ACTIONS(296),
    [anon_sym_toHex] = ACTIONS(296),
    [anon_sym_toString] = ACTIONS(296),
    [anon_sym_utf8Decode] = ACTIONS(296),
    [anon_sym_utf8Encode] = ACTIONS(296),
    [anon_sym_count] = ACTIONS(296),
    [anon_sym_urlEncode] = ACTIONS(296),
    [anon_sym_urlDecode] = ACTIONS(296),
    [anon_sym_toInt] = ACTIONS(296),
    [anon_sym_htmlEscape] = ACTIONS(296),
    [anon_sym_htmlUnescape] = ACTIONS(296),
    [anon_sym_daysAfterNow] = ACTIONS(296),
    [anon_sym_daysBeforeNow] = ACTIONS(296),
    [anon_sym_charsetDecode] = ACTIONS(296),
    [anon_sym_dateFormat] = ACTIONS(296),
    [anon_sym_urlQueryParam] = ACTIONS(296),
    [anon_sym_decode] = ACTIONS(296),
    [anon_sym_format] = ACTIONS(296),
    [anon_sym_toDate] = ACTIONS(296),
    [anon_sym_nth] = ACTIONS(296),
    [anon_sym_replace] = ACTIONS(298),
    [anon_sym_replaceRegex] = ACTIONS(296),
    [anon_sym_split] = ACTIONS(296),
    [sym_comment] = ACTIONS(142),
  },
  [33] = {
    [anon_sym_location] = ACTIONS(300),
    [anon_sym_xpath] = ACTIONS(300),
    [anon_sym_jsonpath] = ACTIONS(300),
    [anon_sym_regex] = ACTIONS(300),
    [anon_sym_not] = ACTIONS(302),
    [anon_sym_isDate] = ACTIONS(300),
    [anon_sym_isList] = ACTIONS(300),
    [anon_sym_isObject] = ACTIONS(300),
    [anon_sym_exists] = ACTIONS(300),
    [anon_sym_isInteger] = ACTIONS(300),
    [anon_sym_isFloat] = ACTIONS(300),
    [anon_sym_isBoolean] = ACTIONS(300),
    [anon_sym_isString] = ACTIONS(300),
    [anon_sym_isCollection] = ACTIONS(300),
    [anon_sym_isNumber] = ACTIONS(300),
    [anon_sym_isIsoDate] = ACTIONS(300),
    [anon_sym_isEmpty] = ACTIONS(300),
    [anon_sym_isIpv4] = ACTIONS(300),
    [anon_sym_isIpv6] = ACTIONS(300),
    [anon_sym_isUuid] = ACTIONS(300),
    [anon_sym_equals] = ACTIONS(300),
    [anon_sym_EQ_EQ] = ACTIONS(300),
    [anon_sym_notEquals] = ACTIONS(300),
    [anon_sym_BANG_EQ] = ACTIONS(300),
    [anon_sym_greaterThan] = ACTIONS(302),
    [anon_sym_GT] = ACTIONS(302),
    [anon_sym_greaterThanOrEquals] = ACTIONS(300),
    [anon_sym_GT_EQ] = ACTIONS(300),
    [anon_sym_lessThan] = ACTIONS(302),
    [anon_sym_LT] = ACTIONS(302),
    [anon_sym_lessThanOrEquals] = ACTIONS(300),
    [anon_sym_LT_EQ] = ACTIONS(300),
    [anon_sym_startsWith] = ACTIONS(300),
    [anon_sym_endsWith] = ACTIONS(300),
    [anon_sym_contains] = ACTIONS(300),
    [anon_sym_matches] = ACTIONS(300),
    [anon_sym_includes] = ACTIONS(300),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(300),
    [anon_sym_base64Decode] = ACTIONS(300),
    [anon_sym_base64Encode] = ACTIONS(300),
    [anon_sym_base64UrlSafeDecode] = ACTIONS(300),
    [anon_sym_base64UrlSafeEncode] = ACTIONS(300),
    [anon_sym_first] = ACTIONS(300),
    [anon_sym_last] = ACTIONS(300),
    [anon_sym_toFloat] = ACTIONS(300),
    [anon_sym_toHex] = ACTIONS(300),
    [anon_sym_toString] = ACTIONS(300),
    [anon_sym_utf8Decode] = ACTIONS(300),
    [anon_sym_utf8Encode] = ACTIONS(300),
    [anon_sym_count] = ACTIONS(300),
    [anon_sym_urlEncode] = ACTIONS(300),
    [anon_sym_urlDecode] = ACTIONS(300),
    [anon_sym_toInt] = ACTIONS(300),
    [anon_sym_htmlEscape] = ACTIONS(300),
    [anon_sym_htmlUnescape] = ACTIONS(300),
    [anon_sym_daysAfterNow] = ACTIONS(300),
    [anon_sym_daysBeforeNow] = ACTIONS(300),
    [anon_sym_charsetDecode] = ACTIONS(300),
    [anon_sym_dateFormat] = ACTIONS(300),
    [anon_sym_urlQueryParam] = ACTIONS(300),
    [anon_sym_decode] = ACTIONS(300),
    [anon_sym_format] = ACTIONS(300),
    [anon_sym_toDate] = ACTIONS(300),
    [anon_sym_nth] = ACTIONS(300),
    [anon_sym_replace] = ACTIONS(302),
    [anon_sym_replaceRegex] = ACTIONS(300),
    [anon_sym_split] = ACTIONS(300),
    [sym_comment] = ACTIONS(142),
  },
  [34] = {
    [anon_sym_location] = ACTIONS(304),
    [anon_sym_xpath] = ACTIONS(304),
    [anon_sym_jsonpath] = ACTIONS(304),
    [anon_sym_regex] = ACTIONS(304),
    [anon_sym_not] = ACTIONS(306),
    [anon_sym_isDate] = ACTIONS(304),
    [anon_sym_isList] = ACTIONS(304),
    [anon_sym_isObject] = ACTIONS(304),
    [anon_sym_exists] = ACTIONS(304),
    [anon_sym_isInteger] = ACTIONS(304),
    [anon_sym_isFloat] = ACTIONS(304),
    [anon_sym_isBoolean] = ACTIONS(304),
    [anon_sym_isString] = ACTIONS(304),
    [anon_sym_isCollection] = ACTIONS(304),
    [anon_sym_isNumber] = ACTIONS(304),
    [anon_sym_isIsoDate] = ACTIONS(304),
    [anon_sym_isEmpty] = ACTIONS(304),
    [anon_sym_isIpv4] = ACTIONS(304),
    [anon_sym_isIpv6] = ACTIONS(304),
    [anon_sym_isUuid] = ACTIONS(304),
    [anon_sym_equals] = ACTIONS(304),
    [anon_sym_EQ_EQ] = ACTIONS(304),
    [anon_sym_notEquals] = ACTIONS(304),
    [anon_sym_BANG_EQ] = ACTIONS(304),
    [anon_sym_greaterThan] = ACTIONS(306),
    [anon_sym_GT] = ACTIONS(306),
    [anon_sym_greaterThanOrEquals] = ACTIONS(304),
    [anon_sym_GT_EQ] = ACTIONS(304),
    [anon_sym_lessThan] = ACTIONS(306),
    [anon_sym_LT] = ACTIONS(306),
    [anon_sym_lessThanOrEquals] = ACTIONS(304),
    [anon_sym_LT_EQ] = ACTIONS(304),
    [anon_sym_startsWith] = ACTIONS(304),
    [anon_sym_endsWith] = ACTIONS(304),
    [anon_sym_contains] = ACTIONS(304),
    [anon_sym_matches] = ACTIONS(304),
    [anon_sym_includes] = ACTIONS(304),
    [anon_sym_base64Decode] = ACTIONS(304),
    [anon_sym_base64Encode] = ACTIONS(304),
    [anon_sym_base64UrlSafeDecode] = ACTIONS(304),
    [anon_sym_base64UrlSafeEncode] = ACTIONS(304),
    [anon_sym_first] = ACTIONS(304),
    [anon_sym_last] = ACTIONS(304),
    [anon_sym_toFloat] = ACTIONS(304),
    [anon_sym_toHex] = ACTIONS(304),
    [anon_sym_toString] = ACTIONS(304),
    [anon_sym_utf8Decode] = ACTIONS(304),
    [anon_sym_utf8Encode] = ACTIONS(304),
    [anon_sym_count] = ACTIONS(304),
    [anon_sym_urlEncode] = ACTIONS(304),
    [anon_sym_urlDecode] = ACTIONS(304),
    [anon_sym_toInt] = ACTIONS(304),
    [anon_sym_htmlEscape] = ACTIONS(304),
    [anon_sym_htmlUnescape] = ACTIONS(304),
    [anon_sym_daysAfterNow] = ACTIONS(304),
    [anon_sym_daysBeforeNow] = ACTIONS(304),
    [anon_sym_charsetDecode] = ACTIONS(304),
    [anon_sym_dateFormat] = ACTIONS(304),
    [anon_sym_urlQueryParam] = ACTIONS(304),
    [anon_sym_decode] = ACTIONS(304),
    [anon_sym_format] = ACTIONS(304),
    [anon_sym_toDate] = ACTIONS(304),
    [anon_sym_nth] = ACTIONS(304),
    [anon_sym_replace] = ACTIONS(306),
    [anon_sym_replaceRegex] = ACTIONS(304),
    [anon_sym_split] = ACTIONS(304),
    [sym_comment] = ACTIONS(142),
  },
  [35] = {
    [anon_sym_location] = ACTIONS(308),
    [anon_sym_xpath] = ACTIONS(308),
    [anon_sym_jsonpath] = ACTIONS(308),
    [anon_sym_regex] = ACTIONS(308),
    [anon_sym_not] = ACTIONS(310),
    [anon_sym_isDate] = ACTIONS(308),
    [anon_sym_isList] = ACTIONS(308),
    [anon_sym_isObject] = ACTIONS(308),
    [anon_sym_exists] = ACTIONS(308),
    [anon_sym_isInteger] = ACTIONS(308),
    [anon_sym_isFloat] = ACTIONS(308),
    [anon_sym_isBoolean] = ACTIONS(308),
    [anon_sym_isString] = ACTIONS(308),
    [anon_sym_isCollection] = ACTIONS(308),
    [anon_sym_isNumber] = ACTIONS(308),
    [anon_sym_isIsoDate] = ACTIONS(308),
    [anon_sym_isEmpty] = ACTIONS(308),
    [anon_sym_isIpv4] = ACTIONS(308),
    [anon_sym_isIpv6] = ACTIONS(308),
    [anon_sym_isUuid] = ACTIONS(308),
    [anon_sym_equals] = ACTIONS(308),
    [anon_sym_EQ_EQ] = ACTIONS(308),
    [anon_sym_notEquals] = ACTIONS(308),
    [anon_sym_BANG_EQ] = ACTIONS(308),
    [anon_sym_greaterThan] = ACTIONS(310),
    [anon_sym_GT] = ACTIONS(310),
    [anon_sym_greaterThanOrEquals] = ACTIONS(308),
    [anon_sym_GT_EQ] = ACTIONS(308),
    [anon_sym_lessThan] = ACTIONS(310),
    [anon_sym_LT] = ACTIONS(310),
    [anon_sym_lessThanOrEquals] = ACTIONS(308),
    [anon_sym_LT_EQ] = ACTIONS(308),
    [anon_sym_startsWith] = ACTIONS(308),
    [anon_sym_endsWith] = ACTIONS(308),
    [anon_sym_contains] = ACTIONS(308),
    [anon_sym_matches] = ACTIONS(308),
    [anon_sym_includes] = ACTIONS(308),
    [anon_sym_base64Decode] = ACTIONS(308),
    [anon_sym_base64Encode] = ACTIONS(308),
    [anon_sym_base64UrlSafeDecode] = ACTIONS(308),
    [anon_sym_base64UrlSafeEncode] = ACTIONS(308),
    [anon_sym_first] = ACTIONS(308),
    [anon_sym_last] = ACTIONS(308),
    [anon_sym_toFloat] = ACTIONS(308),
    [anon_sym_toHex] = ACTIONS(308),
    [anon_sym_toString] = ACTIONS(308),
    [anon_sym_utf8Decode] = ACTIONS(308),
    [anon_sym_utf8Encode] = ACTIONS(308),
    [anon_sym_count] = ACTIONS(308),
    [anon_sym_urlEncode] = ACTIONS(308),
    [anon_sym_urlDecode] = ACTIONS(308),
    [anon_sym_toInt] = ACTIONS(308),
    [anon_sym_htmlEscape] = ACTIONS(308),
    [anon_sym_htmlUnescape] = ACTIONS(308),
    [anon_sym_daysAfterNow] = ACTIONS(308),
    [anon_sym_daysBeforeNow] = ACTIONS(308),
    [anon_sym_charsetDecode] = ACTIONS(308),
    [anon_sym_dateFormat] = ACTIONS(308),
    [anon_sym_urlQueryParam] = ACTIONS(308),
    [anon_sym_decode] = ACTIONS(308),
    [anon_sym_format] = ACTIONS(308),
    [anon_sym_toDate] = ACTIONS(308),
    [anon_sym_nth] = ACTIONS(308),
    [anon_sym_replace] = ACTIONS(310),
    [anon_sym_replaceRegex] = ACTIONS(308),
    [anon_sym_split] = ACTIONS(308),
    [sym_comment] = ACTIONS(142),
  },
  [36] = {
    [anon_sym_location] = ACTIONS(312),
    [anon_sym_xpath] = ACTIONS(312),
    [anon_sym_jsonpath] = ACTIONS(312),
    [anon_sym_regex] = ACTIONS(312),
    [anon_sym_not] = ACTIONS(314),
    [anon_sym_isDate] = ACTIONS(312),
    [anon_sym_isList] = ACTIONS(312),
    [anon_sym_isObject] = ACTIONS(312),
    [anon_sym_exists] = ACTIONS(312),
    [anon_sym_isInteger] = ACTIONS(312),
    [anon_sym_isFloat] = ACTIONS(312),
    [anon_sym_isBoolean] = ACTIONS(312),
    [anon_sym_isString] = ACTIONS(312),
    [anon_sym_isCollection] = ACTIONS(312),
    [anon_sym_isNumber] = ACTIONS(312),
    [anon_sym_isIsoDate] = ACTIONS(312),
    [anon_sym_isEmpty] = ACTIONS(312),
    [anon_sym_isIpv4] = ACTIONS(312),
    [anon_sym_isIpv6] = ACTIONS(312),
    [anon_sym_isUuid] = ACTIONS(312),
    [anon_sym_equals] = ACTIONS(312),
    [anon_sym_EQ_EQ] = ACTIONS(312),
    [anon_sym_notEquals] = ACTIONS(312),
    [anon_sym_BANG_EQ] = ACTIONS(312),
    [anon_sym_greaterThan] = ACTIONS(314),
    [anon_sym_GT] = ACTIONS(314),
    [anon_sym_greaterThanOrEquals] = ACTIONS(312),
    [anon_sym_GT_EQ] = ACTIONS(312),
    [anon_sym_lessThan] = ACTIONS(314),
    [anon_sym_LT] = ACTIONS(314),
    [anon_sym_lessThanOrEquals] = ACTIONS(312),
    [anon_sym_LT_EQ] = ACTIONS(312),
    [anon_sym_startsWith] = ACTIONS(312),
    [anon_sym_endsWith] = ACTIONS(312),
    [anon_sym_contains] = ACTIONS(312),
    [anon_sym_matches] = ACTIONS(312),
    [anon_sym_includes] = ACTIONS(312),
    [anon_sym_base64Decode] = ACTIONS(312),
    [anon_sym_base64Encode] = ACTIONS(312),
    [anon_sym_base64UrlSafeDecode] = ACTIONS(312),
    [anon_sym_base64UrlSafeEncode] = ACTIONS(312),
    [anon_sym_first] = ACTIONS(312),
    [anon_sym_last] = ACTIONS(312),
    [anon_sym_toFloat] = ACTIONS(312),
    [anon_sym_toHex] = ACTIONS(312),
    [anon_sym_toString] = ACTIONS(312),
    [anon_sym_utf8Decode] = ACTIONS(312),
    [anon_sym_utf8Encode] = ACTIONS(312),
    [anon_sym_count] = ACTIONS(312),
    [anon_sym_urlEncode] = ACTIONS(312),
    [anon_sym_urlDecode] = ACTIONS(312),
    [anon_sym_toInt] = ACTIONS(312),
    [anon_sym_htmlEscape] = ACTIONS(312),
    [anon_sym_htmlUnescape] = ACTIONS(312),
    [anon_sym_daysAfterNow] = ACTIONS(312),
    [anon_sym_daysBeforeNow] = ACTIONS(312),
    [anon_sym_charsetDecode] = ACTIONS(312),
    [anon_sym_dateFormat] = ACTIONS(312),
    [anon_sym_urlQueryParam] = ACTIONS(312),
    [anon_sym_decode] = ACTIONS(312),
    [anon_sym_format] = ACTIONS(312),
    [anon_sym_toDate] = ACTIONS(312),
    [anon_sym_nth] = ACTIONS(312),
    [anon_sym_replace] = ACTIONS(314),
    [anon_sym_replaceRegex] = ACTIONS(312),
    [anon_sym_split] = ACTIONS(312),
    [sym_comment] = ACTIONS(142),
  },
  [37] = {
    [anon_sym_location] = ACTIONS(316),
    [anon_sym_xpath] = ACTIONS(316),
    [anon_sym_jsonpath] = ACTIONS(316),
    [anon_sym_regex] = ACTIONS(316),
    [anon_sym_not] = ACTIONS(318),
    [anon_sym_isDate] = ACTIONS(316),
    [anon_sym_isList] = ACTIONS(316),
    [anon_sym_isObject] = ACTIONS(316),
    [anon_sym_exists] = ACTIONS(316),
    [anon_sym_isInteger] = ACTIONS(316),
    [anon_sym_isFloat] = ACTIONS(316),
    [anon_sym_isBoolean] = ACTIONS(316),
    [anon_sym_isString] = ACTIONS(316),
    [anon_sym_isCollection] = ACTIONS(316),
    [anon_sym_isNumber] = ACTIONS(316),
    [anon_sym_isIsoDate] = ACTIONS(316),
    [anon_sym_isEmpty] = ACTIONS(316),
    [anon_sym_isIpv4] = ACTIONS(316),
    [anon_sym_isIpv6] = ACTIONS(316),
    [anon_sym_isUuid] = ACTIONS(316),
    [anon_sym_equals] = ACTIONS(316),
    [anon_sym_EQ_EQ] = ACTIONS(316),
    [anon_sym_notEquals] = ACTIONS(316),
    [anon_sym_BANG_EQ] = ACTIONS(316),
    [anon_sym_greaterThan] = ACTIONS(318),
    [anon_sym_GT] = ACTIONS(318),
    [anon_sym_greaterThanOrEquals] = ACTIONS(316),
    [anon_sym_GT_EQ] = ACTIONS(316),
    [anon_sym_lessThan] = ACTIONS(318),
    [anon_sym_LT] = ACTIONS(318),
    [anon_sym_lessThanOrEquals] = ACTIONS(316),
    [anon_sym_LT_EQ] = ACTIONS(316),
    [anon_sym_startsWith] = ACTIONS(316),
    [anon_sym_endsWith] = ACTIONS(316),
    [anon_sym_contains] = ACTIONS(316),
    [anon_sym_matches] = ACTIONS(316),
    [anon_sym_includes] = ACTIONS(316),
    [anon_sym_base64Decode] = ACTIONS(316),
    [anon_sym_base64Encode] = ACTIONS(316),
    [anon_sym_base64UrlSafeDecode] = ACTIONS(316),
    [anon_sym_base64UrlSafeEncode] = ACTIONS(316),
    [anon_sym_first] = ACTIONS(316),
    [anon_sym_last] = ACTIONS(316),
    [anon_sym_toFloat] = ACTIONS(316),
    [anon_sym_toHex] = ACTIONS(316),
    [anon_sym_toString] = ACTIONS(316),
    [anon_sym_utf8Decode] = ACTIONS(316),
    [anon_sym_utf8Encode] = ACTIONS(316),
    [anon_sym_count] = ACTIONS(316),
    [anon_sym_urlEncode] = ACTIONS(316),
    [anon_sym_urlDecode] = ACTIONS(316),
    [anon_sym_toInt] = ACTIONS(316),
    [anon_sym_htmlEscape] = ACTIONS(316),
    [anon_sym_htmlUnescape] = ACTIONS(316),
    [anon_sym_daysAfterNow] = ACTIONS(316),
    [anon_sym_daysBeforeNow] = ACTIONS(316),
    [anon_sym_charsetDecode] = ACTIONS(316),
    [anon_sym_dateFormat] = ACTIONS(316),
    [anon_sym_urlQueryParam] = ACTIONS(316),
    [anon_sym_decode] = ACTIONS(316),
    [anon_sym_format] = ACTIONS(316),
    [anon_sym_toDate] = ACTIONS(316),
    [anon_sym_nth] = ACTIONS(316),
    [anon_sym_replace] = ACTIONS(318),
    [anon_sym_replaceRegex] = ACTIONS(316),
    [anon_sym_split] = ACTIONS(316),
    [sym_comment] = ACTIONS(142),
  },
  [38] = {
    [anon_sym_location] = ACTIONS(320),
    [anon_sym_xpath] = ACTIONS(320),
    [anon_sym_jsonpath] = ACTIONS(320),
    [anon_sym_regex] = ACTIONS(320),
    [anon_sym_not] = ACTIONS(322),
    [anon_sym_isDate] = ACTIONS(320),
    [anon_sym_isList] = ACTIONS(320),
    [anon_sym_isObject] = ACTIONS(320),
    [anon_sym_exists] = ACTIONS(320),
    [anon_sym_isInteger] = ACTIONS(320),
    [anon_sym_isFloat] = ACTIONS(320),
    [anon_sym_isBoolean] = ACTIONS(320),
    [anon_sym_isString] = ACTIONS(320),
    [anon_sym_isCollection] = ACTIONS(320),
    [anon_sym_isNumber] = ACTIONS(320),
    [anon_sym_isIsoDate] = ACTIONS(320),
    [anon_sym_isEmpty] = ACTIONS(320),
    [anon_sym_isIpv4] = ACTIONS(320),
    [anon_sym_isIpv6] = ACTIONS(320),
    [anon_sym_isUuid] = ACTIONS(320),
    [anon_sym_equals] = ACTIONS(320),
    [anon_sym_EQ_EQ] = ACTIONS(320),
    [anon_sym_notEquals] = ACTIONS(320),
    [anon_sym_BANG_EQ] = ACTIONS(320),
    [anon_sym_greaterThan] = ACTIONS(322),
    [anon_sym_GT] = ACTIONS(322),
    [anon_sym_greaterThanOrEquals] = ACTIONS(320),
    [anon_sym_GT_EQ] = ACTIONS(320),
    [anon_sym_lessThan] = ACTIONS(322),
    [anon_sym_LT] = ACTIONS(322),
    [anon_sym_lessThanOrEquals] = ACTIONS(320),
    [anon_sym_LT_EQ] = ACTIONS(320),
    [anon_sym_startsWith] = ACTIONS(320),
    [anon_sym_endsWith] = ACTIONS(320),
    [anon_sym_contains] = ACTIONS(320),
    [anon_sym_matches] = ACTIONS(320),
    [anon_sym_includes] = ACTIONS(320),
    [anon_sym_base64Decode] = ACTIONS(320),
    [anon_sym_base64Encode] = ACTIONS(320),
    [anon_sym_base64UrlSafeDecode] = ACTIONS(320),
    [anon_sym_base64UrlSafeEncode] = ACTIONS(320),
    [anon_sym_first] = ACTIONS(320),
    [anon_sym_last] = ACTIONS(320),
    [anon_sym_toFloat] = ACTIONS(320),
    [anon_sym_toHex] = ACTIONS(320),
    [anon_sym_toString] = ACTIONS(320),
    [anon_sym_utf8Decode] = ACTIONS(320),
    [anon_sym_utf8Encode] = ACTIONS(320),
    [anon_sym_count] = ACTIONS(320),
    [anon_sym_urlEncode] = ACTIONS(320),
    [anon_sym_urlDecode] = ACTIONS(320),
    [anon_sym_toInt] = ACTIONS(320),
    [anon_sym_htmlEscape] = ACTIONS(320),
    [anon_sym_htmlUnescape] = ACTIONS(320),
    [anon_sym_daysAfterNow] = ACTIONS(320),
    [anon_sym_daysBeforeNow] = ACTIONS(320),
    [anon_sym_charsetDecode] = ACTIONS(320),
    [anon_sym_dateFormat] = ACTIONS(320),
    [anon_sym_urlQueryParam] = ACTIONS(320),
    [anon_sym_decode] = ACTIONS(320),
    [anon_sym_format] = ACTIONS(320),
    [anon_sym_toDate] = ACTIONS(320),
    [anon_sym_nth] = ACTIONS(320),
    [anon_sym_replace] = ACTIONS(322),
    [anon_sym_replaceRegex] = ACTIONS(320),
    [anon_sym_split] = ACTIONS(320),
    [sym_comment] = ACTIONS(142),
  },
  [39] = {
    [anon_sym_location] = ACTIONS(324),
    [anon_sym_xpath] = ACTIONS(324),
    [anon_sym_jsonpath] = ACTIONS(324),
    [anon_sym_regex] = ACTIONS(324),
    [anon_sym_not] = ACTIONS(326),
    [anon_sym_isDate] = ACTIONS(324),
    [anon_sym_isList] = ACTIONS(324),
    [anon_sym_isObject] = ACTIONS(324),
    [anon_sym_exists] = ACTIONS(324),
    [anon_sym_isInteger] = ACTIONS(324),
    [anon_sym_isFloat] = ACTIONS(324),
    [anon_sym_isBoolean] = ACTIONS(324),
    [anon_sym_isString] = ACTIONS(324),
    [anon_sym_isCollection] = ACTIONS(324),
    [anon_sym_isNumber] = ACTIONS(324),
    [anon_sym_isIsoDate] = ACTIONS(324),
    [anon_sym_isEmpty] = ACTIONS(324),
    [anon_sym_isIpv4] = ACTIONS(324),
    [anon_sym_isIpv6] = ACTIONS(324),
    [anon_sym_isUuid] = ACTIONS(324),
    [anon_sym_equals] = ACTIONS(324),
    [anon_sym_EQ_EQ] = ACTIONS(324),
    [anon_sym_notEquals] = ACTIONS(324),
    [anon_sym_BANG_EQ] = ACTIONS(324),
    [anon_sym_greaterThan] = ACTIONS(326),
    [anon_sym_GT] = ACTIONS(326),
    [anon_sym_greaterThanOrEquals] = ACTIONS(324),
    [anon_sym_GT_EQ] = ACTIONS(324),
    [anon_sym_lessThan] = ACTIONS(326),
    [anon_sym_LT] = ACTIONS(326),
    [anon_sym_lessThanOrEquals] = ACTIONS(324),
    [anon_sym_LT_EQ] = ACTIONS(324),
    [anon_sym_startsWith] = ACTIONS(324),
    [anon_sym_endsWith] = ACTIONS(324),
    [anon_sym_contains] = ACTIONS(324),
    [anon_sym_matches] = ACTIONS(324),
    [anon_sym_includes] = ACTIONS(324),
    [anon_sym_base64Decode] = ACTIONS(324),
    [anon_sym_base64Encode] = ACTIONS(324),
    [anon_sym_base64UrlSafeDecode] = ACTIONS(324),
    [anon_sym_base64UrlSafeEncode] = ACTIONS(324),
    [anon_sym_first] = ACTIONS(324),
    [anon_sym_last] = ACTIONS(324),
    [anon_sym_toFloat] = ACTIONS(324),
    [anon_sym_toHex] = ACTIONS(324),
    [anon_sym_toString] = ACTIONS(324),
    [anon_sym_utf8Decode] = ACTIONS(324),
    [anon_sym_utf8Encode] = ACTIONS(324),
    [anon_sym_count] = ACTIONS(324),
    [anon_sym_urlEncode] = ACTIONS(324),
    [anon_sym_urlDecode] = ACTIONS(324),
    [anon_sym_toInt] = ACTIONS(324),
    [anon_sym_htmlEscape] = ACTIONS(324),
    [anon_sym_htmlUnescape] = ACTIONS(324),
    [anon_sym_daysAfterNow] = ACTIONS(324),
    [anon_sym_daysBeforeNow] = ACTIONS(324),
    [anon_sym_charsetDecode] = ACTIONS(324),
    [anon_sym_dateFormat] = ACTIONS(324),
    [anon_sym_urlQueryParam] = ACTIONS(324),
    [anon_sym_decode] = ACTIONS(324),
    [anon_sym_format] = ACTIONS(324),
    [anon_sym_toDate] = ACTIONS(324),
    [anon_sym_nth] = ACTIONS(324),
    [anon_sym_replace] = ACTIONS(326),
    [anon_sym_replaceRegex] = ACTIONS(324),
    [anon_sym_split] = ACTIONS(324),
    [sym_comment] = ACTIONS(142),
  },
  [40] = {
    [anon_sym_location] = ACTIONS(328),
    [anon_sym_xpath] = ACTIONS(328),
    [anon_sym_jsonpath] = ACTIONS(328),
    [anon_sym_regex] = ACTIONS(328),
    [anon_sym_not] = ACTIONS(330),
    [anon_sym_isDate] = ACTIONS(328),
    [anon_sym_isList] = ACTIONS(328),
    [anon_sym_isObject] = ACTIONS(328),
    [anon_sym_exists] = ACTIONS(328),
    [anon_sym_isInteger] = ACTIONS(328),
    [anon_sym_isFloat] = ACTIONS(328),
    [anon_sym_isBoolean] = ACTIONS(328),
    [anon_sym_isString] = ACTIONS(328),
    [anon_sym_isCollection] = ACTIONS(328),
    [anon_sym_isNumber] = ACTIONS(328),
    [anon_sym_isIsoDate] = ACTIONS(328),
    [anon_sym_isEmpty] = ACTIONS(328),
    [anon_sym_isIpv4] = ACTIONS(328),
    [anon_sym_isIpv6] = ACTIONS(328),
    [anon_sym_isUuid] = ACTIONS(328),
    [anon_sym_equals] = ACTIONS(328),
    [anon_sym_EQ_EQ] = ACTIONS(328),
    [anon_sym_notEquals] = ACTIONS(328),
    [anon_sym_BANG_EQ] = ACTIONS(328),
    [anon_sym_greaterThan] = ACTIONS(330),
    [anon_sym_GT] = ACTIONS(330),
    [anon_sym_greaterThanOrEquals] = ACTIONS(328),
    [anon_sym_GT_EQ] = ACTIONS(328),
    [anon_sym_lessThan] = ACTIONS(330),
    [anon_sym_LT] = ACTIONS(330),
    [anon_sym_lessThanOrEquals] = ACTIONS(328),
    [anon_sym_LT_EQ] = ACTIONS(328),
    [anon_sym_startsWith] = ACTIONS(328),
    [anon_sym_endsWith] = ACTIONS(328),
    [anon_sym_contains] = ACTIONS(328),
    [anon_sym_matches] = ACTIONS(328),
    [anon_sym_includes] = ACTIONS(328),
    [anon_sym_base64Decode] = ACTIONS(328),
    [anon_sym_base64Encode] = ACTIONS(328),
    [anon_sym_base64UrlSafeDecode] = ACTIONS(328),
    [anon_sym_base64UrlSafeEncode] = ACTIONS(328),
    [anon_sym_first] = ACTIONS(328),
    [anon_sym_last] = ACTIONS(328),
    [anon_sym_toFloat] = ACTIONS(328),
    [anon_sym_toHex] = ACTIONS(328),
    [anon_sym_toString] = ACTIONS(328),
    [anon_sym_utf8Decode] = ACTIONS(328),
    [anon_sym_utf8Encode] = ACTIONS(328),
    [anon_sym_count] = ACTIONS(328),
    [anon_sym_urlEncode] = ACTIONS(328),
    [anon_sym_urlDecode] = ACTIONS(328),
    [anon_sym_toInt] = ACTIONS(328),
    [anon_sym_htmlEscape] = ACTIONS(328),
    [anon_sym_htmlUnescape] = ACTIONS(328),
    [anon_sym_daysAfterNow] = ACTIONS(328),
    [anon_sym_daysBeforeNow] = ACTIONS(328),
    [anon_sym_charsetDecode] = ACTIONS(328),
    [anon_sym_dateFormat] = ACTIONS(328),
    [anon_sym_urlQueryParam] = ACTIONS(328),
    [anon_sym_decode] = ACTIONS(328),
    [anon_sym_format] = ACTIONS(328),
    [anon_sym_toDate] = ACTIONS(328),
    [anon_sym_nth] = ACTIONS(328),
    [anon_sym_replace] = ACTIONS(330),
    [anon_sym_replaceRegex] = ACTIONS(328),
    [anon_sym_split] = ACTIONS(328),
    [sym_comment] = ACTIONS(142),
  },
  [41] = {
    [anon_sym_location] = ACTIONS(332),
    [anon_sym_xpath] = ACTIONS(332),
    [anon_sym_jsonpath] = ACTIONS(332),
    [anon_sym_regex] = ACTIONS(332),
    [anon_sym_not] = ACTIONS(334),
    [anon_sym_isDate] = ACTIONS(332),
    [anon_sym_isList] = ACTIONS(332),
    [anon_sym_isObject] = ACTIONS(332),
    [anon_sym_exists] = ACTIONS(332),
    [anon_sym_isInteger] = ACTIONS(332),
    [anon_sym_isFloat] = ACTIONS(332),
    [anon_sym_isBoolean] = ACTIONS(332),
    [anon_sym_isString] = ACTIONS(332),
    [anon_sym_isCollection] = ACTIONS(332),
    [anon_sym_isNumber] = ACTIONS(332),
    [anon_sym_isIsoDate] = ACTIONS(332),
    [anon_sym_isEmpty] = ACTIONS(332),
    [anon_sym_isIpv4] = ACTIONS(332),
    [anon_sym_isIpv6] = ACTIONS(332),
    [anon_sym_isUuid] = ACTIONS(332),
    [anon_sym_equals] = ACTIONS(332),
    [anon_sym_EQ_EQ] = ACTIONS(332),
    [anon_sym_notEquals] = ACTIONS(332),
    [anon_sym_BANG_EQ] = ACTIONS(332),
    [anon_sym_greaterThan] = ACTIONS(334),
    [anon_sym_GT] = ACTIONS(334),
    [anon_sym_greaterThanOrEquals] = ACTIONS(332),
    [anon_sym_GT_EQ] = ACTIONS(332),
    [anon_sym_lessThan] = ACTIONS(334),
    [anon_sym_LT] = ACTIONS(334),
    [anon_sym_lessThanOrEquals] = ACTIONS(332),
    [anon_sym_LT_EQ] = ACTIONS(332),
    [anon_sym_startsWith] = ACTIONS(332),
    [anon_sym_endsWith] = ACTIONS(332),
    [anon_sym_contains] = ACTIONS(332),
    [anon_sym_matches] = ACTIONS(332),
    [anon_sym_includes] = ACTIONS(332),
    [anon_sym_base64Decode] = ACTIONS(332),
    [anon_sym_base64Encode] = ACTIONS(332),
    [anon_sym_base64UrlSafeDecode] = ACTIONS(332),
    [anon_sym_base64UrlSafeEncode] = ACTIONS(332),
    [anon_sym_first] = ACTIONS(332),
    [anon_sym_last] = ACTIONS(332),
    [anon_sym_toFloat] = ACTIONS(332),
    [anon_sym_toHex] = ACTIONS(332),
    [anon_sym_toString] = ACTIONS(332),
    [anon_sym_utf8Decode] = ACTIONS(332),
    [anon_sym_utf8Encode] = ACTIONS(332),
    [anon_sym_count] = ACTIONS(332),
    [anon_sym_urlEncode] = ACTIONS(332),
    [anon_sym_urlDecode] = ACTIONS(332),
    [anon_sym_toInt] = ACTIONS(332),
    [anon_sym_htmlEscape] = ACTIONS(332),
    [anon_sym_htmlUnescape] = ACTIONS(332),
    [anon_sym_daysAfterNow] = ACTIONS(332),
    [anon_sym_daysBeforeNow] = ACTIONS(332),
    [anon_sym_charsetDecode] = ACTIONS(332),
    [anon_sym_dateFormat] = ACTIONS(332),
    [anon_sym_urlQueryParam] = ACTIONS(332),
    [anon_sym_decode] = ACTIONS(332),
    [anon_sym_format] = ACTIONS(332),
    [anon_sym_toDate] = ACTIONS(332),
    [anon_sym_nth] = ACTIONS(332),
    [anon_sym_replace] = ACTIONS(334),
    [anon_sym_replaceRegex] = ACTIONS(332),
    [anon_sym_split] = ACTIONS(332),
    [sym_comment] = ACTIONS(142),
  },
  [42] = {
    [anon_sym_location] = ACTIONS(336),
    [anon_sym_xpath] = ACTIONS(336),
    [anon_sym_jsonpath] = ACTIONS(336),
    [anon_sym_regex] = ACTIONS(336),
    [anon_sym_not] = ACTIONS(338),
    [anon_sym_isDate] = ACTIONS(336),
    [anon_sym_isList] = ACTIONS(336),
    [anon_sym_isObject] = ACTIONS(336),
    [anon_sym_exists] = ACTIONS(336),
    [anon_sym_isInteger] = ACTIONS(336),
    [anon_sym_isFloat] = ACTIONS(336),
    [anon_sym_isBoolean] = ACTIONS(336),
    [anon_sym_isString] = ACTIONS(336),
    [anon_sym_isCollection] = ACTIONS(336),
    [anon_sym_isNumber] = ACTIONS(336),
    [anon_sym_isIsoDate] = ACTIONS(336),
    [anon_sym_isEmpty] = ACTIONS(336),
    [anon_sym_isIpv4] = ACTIONS(336),
    [anon_sym_isIpv6] = ACTIONS(336),
    [anon_sym_isUuid] = ACTIONS(336),
    [anon_sym_equals] = ACTIONS(336),
    [anon_sym_EQ_EQ] = ACTIONS(336),
    [anon_sym_notEquals] = ACTIONS(336),
    [anon_sym_BANG_EQ] = ACTIONS(336),
    [anon_sym_greaterThan] = ACTIONS(338),
    [anon_sym_GT] = ACTIONS(338),
    [anon_sym_greaterThanOrEquals] = ACTIONS(336),
    [anon_sym_GT_EQ] = ACTIONS(336),
    [anon_sym_lessThan] = ACTIONS(338),
    [anon_sym_LT] = ACTIONS(338),
    [anon_sym_lessThanOrEquals] = ACTIONS(336),
    [anon_sym_LT_EQ] = ACTIONS(336),
    [anon_sym_startsWith] = ACTIONS(336),
    [anon_sym_endsWith] = ACTIONS(336),
    [anon_sym_contains] = ACTIONS(336),
    [anon_sym_matches] = ACTIONS(336),
    [anon_sym_includes] = ACTIONS(336),
    [anon_sym_base64Decode] = ACTIONS(336),
    [anon_sym_base64Encode] = ACTIONS(336),
    [anon_sym_base64UrlSafeDecode] = ACTIONS(336),
    [anon_sym_base64UrlSafeEncode] = ACTIONS(336),
    [anon_sym_first] = ACTIONS(336),
    [anon_sym_last] = ACTIONS(336),
    [anon_sym_toFloat] = ACTIONS(336),
    [anon_sym_toHex] = ACTIONS(336),
    [anon_sym_toString] = ACTIONS(336),
    [anon_sym_utf8Decode] = ACTIONS(336),
    [anon_sym_utf8Encode] = ACTIONS(336),
    [anon_sym_count] = ACTIONS(336),
    [anon_sym_urlEncode] = ACTIONS(336),
    [anon_sym_urlDecode] = ACTIONS(336),
    [anon_sym_toInt] = ACTIONS(336),
    [anon_sym_htmlEscape] = ACTIONS(336),
    [anon_sym_htmlUnescape] = ACTIONS(336),
    [anon_sym_daysAfterNow] = ACTIONS(336),
    [anon_sym_daysBeforeNow] = ACTIONS(336),
    [anon_sym_charsetDecode] = ACTIONS(336),
    [anon_sym_dateFormat] = ACTIONS(336),
    [anon_sym_urlQueryParam] = ACTIONS(336),
    [anon_sym_decode] = ACTIONS(336),
    [anon_sym_format] = ACTIONS(336),
    [anon_sym_toDate] = ACTIONS(336),
    [anon_sym_nth] = ACTIONS(336),
    [anon_sym_replace] = ACTIONS(338),
    [anon_sym_replaceRegex] = ACTIONS(336),
    [anon_sym_split] = ACTIONS(336),
    [sym_comment] = ACTIONS(142),
  },
  [43] = {
    [sym_assert] = STATE(45),
    [sym_query] = STATE(8),
    [sym_simple_query] = STATE(40),
    [sym_header_query] = STATE(40),
    [sym_cookie_query] = STATE(40),
    [sym_xpath_query] = STATE(40),
    [sym_jsonpath_query] = STATE(40),
    [sym_regex_query] = STATE(40),
    [sym_variable_query] = STATE(40),
    [sym_certificate_query] = STATE(40),
    [aux_sym_asserts_section_repeat1] = STATE(45),
    [ts_builtin_sym_end] = ACTIONS(340),
    [anon_sym_LF] = ACTIONS(340),
    [anon_sym_GET] = ACTIONS(342),
    [anon_sym_HEAD] = ACTIONS(342),
    [anon_sym_POST] = ACTIONS(342),
    [anon_sym_PUT] = ACTIONS(342),
    [anon_sym_DELETE] = ACTIONS(342),
    [anon_sym_CONNECT] = ACTIONS(342),
    [anon_sym_OPTIONS] = ACTIONS(342),
    [anon_sym_TRACE] = ACTIONS(342),
    [anon_sym_PATCH] = ACTIONS(342),
    [anon_sym_LINK] = ACTIONS(342),
    [anon_sym_UNLINK] = ACTIONS(342),
    [anon_sym_PURGE] = ACTIONS(342),
    [anon_sym_LOCK] = ACTIONS(342),
    [anon_sym_UNLOCK] = ACTIONS(342),
    [anon_sym_PROPFIND] = ACTIONS(342),
    [anon_sym_VIEW] = ACTIONS(342),
    [aux_sym_method_token1] = ACTIONS(342),
    [anon_sym_LBRACKCaptures_RBRACK] = ACTIONS(342),
    [anon_sym_LBRACKAsserts_RBRACK] = ACTIONS(342),
    [anon_sym_null] = ACTIONS(342),
    [anon_sym_file_COMMA] = ACTIONS(342),
    [anon_sym_LBRACE] = ACTIONS(342),
    [anon_sym_header] = ACTIONS(344),
    [anon_sym_variable] = ACTIONS(346),
    [anon_sym_status] = ACTIONS(348),
    [anon_sym_version] = ACTIONS(348),
    [anon_sym_rawbytes] = ACTIONS(348),
    [anon_sym_ip] = ACTIONS(348),
    [anon_sym_redirects] = ACTIONS(348),
    [anon_sym_url] = ACTIONS(348),
    [anon_sym_body] = ACTIONS(348),
    [anon_sym_duration] = ACTIONS(348),
    [anon_sym_bytes] = ACTIONS(348),
    [anon_sym_sha256] = ACTIONS(348),
    [anon_sym_md5] = ACTIONS(348),
    [anon_sym_cookie] = ACTIONS(350),
    [anon_sym_xpath] = ACTIONS(352),
    [anon_sym_jsonpath] = ACTIONS(354),
    [anon_sym_regex] = ACTIONS(356),
    [anon_sym_certificate] = ACTIONS(358),
    [anon_sym_DQUOTE] = ACTIONS(342),
    [anon_sym_LT] = ACTIONS(342),
    [anon_sym_LT_QMARK] = ACTIONS(342),
    [anon_sym_base64_COMMA] = ACTIONS(342),
    [anon_sym_hex_COMMA] = ACTIONS(342),
    [anon_sym_BQUOTE] = ACTIONS(342),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(342),
    [sym__json_number] = ACTIONS(342),
    [anon_sym_true] = ACTIONS(342),
    [anon_sym_false] = ACTIONS(342),
    [anon_sym_LBRACE_LBRACE2] = ACTIONS(342),
    [sym_comment] = ACTIONS(342),
    [sym__json_array_start] = ACTIONS(340),
  },
  [44] = {
    [sym_assert] = STATE(43),
    [sym_query] = STATE(8),
    [sym_simple_query] = STATE(40),
    [sym_header_query] = STATE(40),
    [sym_cookie_query] = STATE(40),
    [sym_xpath_query] = STATE(40),
    [sym_jsonpath_query] = STATE(40),
    [sym_regex_query] = STATE(40),
    [sym_variable_query] = STATE(40),
    [sym_certificate_query] = STATE(40),
    [aux_sym_asserts_section_repeat1] = STATE(43),
    [ts_builtin_sym_end] = ACTIONS(360),
    [anon_sym_LF] = ACTIONS(360),
    [anon_sym_GET] = ACTIONS(362),
    [anon_sym_HEAD] = ACTIONS(362),
    [anon_sym_POST] = ACTIONS(362),
    [anon_sym_PUT] = ACTIONS(362),
    [anon_sym_DELETE] = ACTIONS(362),
    [anon_sym_CONNECT] = ACTIONS(362),
    [anon_sym_OPTIONS] = ACTIONS(362),
    [anon_sym_TRACE] = ACTIONS(362),
    [anon_sym_PATCH] = ACTIONS(362),
    [anon_sym_LINK] = ACTIONS(362),
    [anon_sym_UNLINK] = ACTIONS(362),
    [anon_sym_PURGE] = ACTIONS(362),
    [anon_sym_LOCK] = ACTIONS(362),
    [anon_sym_UNLOCK] = ACTIONS(362),
    [anon_sym_PROPFIND] = ACTIONS(362),
    [anon_sym_VIEW] = ACTIONS(362),
    [aux_sym_method_token1] = ACTIONS(362),
    [anon_sym_LBRACKCaptures_RBRACK] = ACTIONS(362),
    [anon_sym_LBRACKAsserts_RBRACK] = ACTIONS(362),
    [anon_sym_null] = ACTIONS(362),
    [anon_sym_file_COMMA] = ACTIONS(362),
    [anon_sym_LBRACE] = ACTIONS(362),
    [anon_sym_header] = ACTIONS(344),
    [anon_sym_variable] = ACTIONS(346),
    [anon_sym_status] = ACTIONS(348),
    [anon_sym_version] = ACTIONS(348),
    [anon_sym_rawbytes] = ACTIONS(348),
    [anon_sym_ip] = ACTIONS(348),
    [anon_sym_redirects] = ACTIONS(348),
    [anon_sym_url] = ACTIONS(348),
    [anon_sym_body] = ACTIONS(348),
    [anon_sym_duration] = ACTIONS(348),
    [anon_sym_bytes] = ACTIONS(348),
    [anon_sym_sha256] = ACTIONS(348),
    [anon_sym_md5] = ACTIONS(348),
    [anon_sym_cookie] = ACTIONS(350),
    [anon_sym_xpath] = ACTIONS(352),
    [anon_sym_jsonpath] = ACTIONS(354),
    [anon_sym_regex] = ACTIONS(356),
    [anon_sym_certificate] = ACTIONS(358),
    [anon_sym_DQUOTE] = ACTIONS(362),
    [anon_sym_LT] = ACTIONS(362),
    [anon_sym_LT_QMARK] = ACTIONS(362),
    [anon_sym_base64_COMMA] = ACTIONS(362),
    [anon_sym_hex_COMMA] = ACTIONS(362),
    [anon_sym_BQUOTE] = ACTIONS(362),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(362),
    [sym__json_number] = ACTIONS(362),
    [anon_sym_true] = ACTIONS(362),
    [anon_sym_false] = ACTIONS(362),
    [anon_sym_LBRACE_LBRACE2] = ACTIONS(362),
    [sym_comment] = ACTIONS(362),
    [sym__json_array_start] = ACTIONS(360),
  },
  [45] = {
    [sym_assert] = STATE(45),
    [sym_query] = STATE(8),
    [sym_simple_query] = STATE(40),
    [sym_header_query] = STATE(40),
    [sym_cookie_query] = STATE(40),
    [sym_xpath_query] = STATE(40),
    [sym_jsonpath_query] = STATE(40),
    [sym_regex_query] = STATE(40),
    [sym_variable_query] = STATE(40),
    [sym_certificate_query] = STATE(40),
    [aux_sym_asserts_section_repeat1] = STATE(45),
    [ts_builtin_sym_end] = ACTIONS(364),
    [anon_sym_LF] = ACTIONS(364),
    [anon_sym_GET] = ACTIONS(366),
    [anon_sym_HEAD] = ACTIONS(366),
    [anon_sym_POST] = ACTIONS(366),
    [anon_sym_PUT] = ACTIONS(366),
    [anon_sym_DELETE] = ACTIONS(366),
    [anon_sym_CONNECT] = ACTIONS(366),
    [anon_sym_OPTIONS] = ACTIONS(366),
    [anon_sym_TRACE] = ACTIONS(366),
    [anon_sym_PATCH] = ACTIONS(366),
    [anon_sym_LINK] = ACTIONS(366),
    [anon_sym_UNLINK] = ACTIONS(366),
    [anon_sym_PURGE] = ACTIONS(366),
    [anon_sym_LOCK] = ACTIONS(366),
    [anon_sym_UNLOCK] = ACTIONS(366),
    [anon_sym_PROPFIND] = ACTIONS(366),
    [anon_sym_VIEW] = ACTIONS(366),
    [aux_sym_method_token1] = ACTIONS(366),
    [anon_sym_LBRACKCaptures_RBRACK] = ACTIONS(366),
    [anon_sym_LBRACKAsserts_RBRACK] = ACTIONS(366),
    [anon_sym_null] = ACTIONS(366),
    [anon_sym_file_COMMA] = ACTIONS(366),
    [anon_sym_LBRACE] = ACTIONS(366),
    [anon_sym_header] = ACTIONS(368),
    [anon_sym_variable] = ACTIONS(371),
    [anon_sym_status] = ACTIONS(374),
    [anon_sym_version] = ACTIONS(374),
    [anon_sym_rawbytes] = ACTIONS(374),
    [anon_sym_ip] = ACTIONS(374),
    [anon_sym_redirects] = ACTIONS(374),
    [anon_sym_url] = ACTIONS(374),
    [anon_sym_body] = ACTIONS(374),
    [anon_sym_duration] = ACTIONS(374),
    [anon_sym_bytes] = ACTIONS(374),
    [anon_sym_sha256] = ACTIONS(374),
    [anon_sym_md5] = ACTIONS(374),
    [anon_sym_cookie] = ACTIONS(377),
    [anon_sym_xpath] = ACTIONS(380),
    [anon_sym_jsonpath] = ACTIONS(383),
    [anon_sym_regex] = ACTIONS(386),
    [anon_sym_certificate] = ACTIONS(389),
    [anon_sym_DQUOTE] = ACTIONS(366),
    [anon_sym_LT] = ACTIONS(366),
    [anon_sym_LT_QMARK] = ACTIONS(366),
    [anon_sym_base64_COMMA] = ACTIONS(366),
    [anon_sym_hex_COMMA] = ACTIONS(366),
    [anon_sym_BQUOTE] = ACTIONS(366),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(366),
    [sym__json_number] = ACTIONS(366),
    [anon_sym_true] = ACTIONS(366),
    [anon_sym_false] = ACTIONS(366),
    [anon_sym_LBRACE_LBRACE2] = ACTIONS(366),
    [sym_comment] = ACTIONS(366),
    [sym__json_array_start] = ACTIONS(364),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 13,
    ACTIONS(176), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(178), 1,
      sym_key_string_text,
    ACTIONS(180), 1,
      sym_key_string_escaped_char,
    ACTIONS(194), 1,
      sym__bracketed_key_start,
    STATE(47), 1,
      aux_sym_multipart_form_data_section_repeat1,
    STATE(219), 1,
      sym__key_template,
    STATE(280), 1,
      aux_sym_key_string_content_repeat1,
    STATE(287), 1,
      sym_multipart_form_data_param,
    STATE(586), 1,
      sym_key_string,
    STATE(218), 2,
      sym__bracketed_key_content,
      sym_key_string_content,
    STATE(513), 2,
      sym_key_value,
      sym_file_param,
    ACTIONS(392), 3,
      sym__json_array_start,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(394), 47,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
      anon_sym_DQUOTE,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__json_number,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LBRACE_LBRACE2,
      sym_comment,
  [90] = 13,
    ACTIONS(400), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(403), 1,
      sym_key_string_text,
    ACTIONS(406), 1,
      sym_key_string_escaped_char,
    ACTIONS(409), 1,
      sym__bracketed_key_start,
    STATE(47), 1,
      aux_sym_multipart_form_data_section_repeat1,
    STATE(219), 1,
      sym__key_template,
    STATE(280), 1,
      aux_sym_key_string_content_repeat1,
    STATE(287), 1,
      sym_multipart_form_data_param,
    STATE(586), 1,
      sym_key_string,
    STATE(218), 2,
      sym__bracketed_key_content,
      sym_key_string_content,
    STATE(513), 2,
      sym_key_value,
      sym_file_param,
    ACTIONS(396), 3,
      sym__json_array_start,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(398), 47,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
      anon_sym_DQUOTE,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__json_number,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LBRACE_LBRACE2,
      sym_comment,
  [180] = 13,
    ACTIONS(176), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(178), 1,
      sym_key_string_text,
    ACTIONS(180), 1,
      sym_key_string_escaped_char,
    ACTIONS(194), 1,
      sym__bracketed_key_start,
    STATE(46), 1,
      aux_sym_multipart_form_data_section_repeat1,
    STATE(219), 1,
      sym__key_template,
    STATE(280), 1,
      aux_sym_key_string_content_repeat1,
    STATE(287), 1,
      sym_multipart_form_data_param,
    STATE(586), 1,
      sym_key_string,
    STATE(218), 2,
      sym__bracketed_key_content,
      sym_key_string_content,
    STATE(513), 2,
      sym_key_value,
      sym_file_param,
    ACTIONS(412), 3,
      sym__json_array_start,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(414), 47,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
      anon_sym_DQUOTE,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__json_number,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LBRACE_LBRACE2,
      sym_comment,
  [270] = 12,
    ACTIONS(420), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(423), 1,
      sym_key_string_text,
    ACTIONS(426), 1,
      sym_key_string_escaped_char,
    ACTIONS(429), 1,
      sym__bracketed_key_start,
    STATE(219), 1,
      sym__key_template,
    STATE(277), 1,
      sym_key_value,
    STATE(280), 1,
      aux_sym_key_string_content_repeat1,
    STATE(531), 1,
      sym_key_string,
    STATE(49), 2,
      sym_header,
      aux_sym_request_repeat1,
    STATE(218), 2,
      sym__bracketed_key_content,
      sym_key_string_content,
    ACTIONS(416), 3,
      sym__json_array_start,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(418), 47,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
      anon_sym_DQUOTE,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__json_number,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LBRACE_LBRACE2,
      sym_comment,
  [357] = 28,
    ACTIONS(160), 1,
      anon_sym_null,
    ACTIONS(162), 1,
      anon_sym_file_COMMA,
    ACTIONS(164), 1,
      anon_sym_LBRACE,
    ACTIONS(166), 1,
      anon_sym_DQUOTE,
    ACTIONS(168), 1,
      anon_sym_LT,
    ACTIONS(170), 1,
      anon_sym_LT_QMARK,
    ACTIONS(172), 1,
      anon_sym_base64_COMMA,
    ACTIONS(174), 1,
      anon_sym_hex_COMMA,
    ACTIONS(182), 1,
      anon_sym_BQUOTE,
    ACTIONS(184), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(186), 1,
      sym__json_number,
    ACTIONS(190), 1,
      anon_sym_LBRACE_LBRACE2,
    ACTIONS(192), 1,
      sym__json_array_start,
    ACTIONS(240), 1,
      anon_sym_LBRACKCaptures_RBRACK,
    ACTIONS(242), 1,
      anon_sym_LBRACKAsserts_RBRACK,
    STATE(152), 1,
      sym_body,
    STATE(164), 1,
      sym_xml_open_tag,
    STATE(296), 1,
      sym_bytes,
    STATE(422), 1,
      sym_xml_self_closing_tag,
    STATE(423), 1,
      sym_xml_tag,
    ACTIONS(188), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(236), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(89), 2,
      sym_response_section,
      aux_sym_response_repeat1,
    STATE(108), 2,
      sym_captures_section,
      sym_asserts_section,
    STATE(230), 2,
      sym_xml_prolog_tag,
      aux_sym_xml_repeat1,
    STATE(456), 6,
      sym_json_object,
      sym_json_array,
      sym_json_string,
      sym_json_number,
      sym_json_boolean,
      sym_template,
    STATE(424), 7,
      sym_xml,
      sym_oneline_base64,
      sym_oneline_file,
      sym_oneline_hex,
      sym_oneline_string,
      sym_multiline_string,
      sym_json_value,
    ACTIONS(238), 18,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
    ACTIONS(160), 1,
      anon_sym_null,
    ACTIONS(162), 1,
      anon_sym_file_COMMA,
    ACTIONS(164), 1,
      anon_sym_LBRACE,
    ACTIONS(166), 1,
      anon_sym_DQUOTE,
    ACTIONS(168), 1,
      anon_sym_LT,
    ACTIONS(170), 1,
      anon_sym_LT_QMARK,
    ACTIONS(172), 1,
      anon_sym_base64_COMMA,
    ACTIONS(174), 1,
      anon_sym_hex_COMMA,
    ACTIONS(182), 1,
      anon_sym_BQUOTE,
    ACTIONS(184), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(186), 1,
      sym__json_number,
    ACTIONS(190), 1,
      anon_sym_LBRACE_LBRACE2,
    ACTIONS(192), 1,
      sym__json_array_start,
    ACTIONS(240), 1,
      anon_sym_LBRACKCaptures_RBRACK,
    ACTIONS(242), 1,
      anon_sym_LBRACKAsserts_RBRACK,
    STATE(156), 1,
      sym_body,
    STATE(164), 1,
      sym_xml_open_tag,
    STATE(296), 1,
      sym_bytes,
    STATE(422), 1,
      sym_xml_self_closing_tag,
    STATE(423), 1,
      sym_xml_tag,
    ACTIONS(188), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(432), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(89), 2,
      sym_response_section,
      aux_sym_response_repeat1,
    STATE(108), 2,
      sym_captures_section,
      sym_asserts_section,
    STATE(230), 2,
      sym_xml_prolog_tag,
      aux_sym_xml_repeat1,
    STATE(456), 6,
      sym_json_object,
      sym_json_array,
      sym_json_string,
      sym_json_number,
      sym_json_boolean,
      sym_template,
    STATE(424), 7,
      sym_xml,
      sym_oneline_base64,
      sym_oneline_file,
      sym_oneline_hex,
      sym_oneline_string,
      sym_multiline_string,
      sym_json_value,
    ACTIONS(434), 18,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
  [593] = 12,
    ACTIONS(440), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(443), 1,
      sym_key_string_text,
    ACTIONS(446), 1,
      sym_key_string_escaped_char,
    ACTIONS(449), 1,
      sym__bracketed_key_start,
    STATE(52), 1,
      aux_sym_basic_auth_section_repeat1,
    STATE(219), 1,
      sym__key_template,
    STATE(266), 1,
      sym_key_value,
    STATE(280), 1,
      aux_sym_key_string_content_repeat1,
    STATE(531), 1,
      sym_key_string,
    STATE(218), 2,
      sym__bracketed_key_content,
      sym_key_string_content,
    ACTIONS(436), 3,
      sym__json_array_start,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(438), 47,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
      anon_sym_DQUOTE,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__json_number,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LBRACE_LBRACE2,
      sym_comment,
  [679] = 12,
    ACTIONS(176), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(178), 1,
      sym_key_string_text,
    ACTIONS(180), 1,
      sym_key_string_escaped_char,
    ACTIONS(194), 1,
      sym__bracketed_key_start,
    STATE(52), 1,
      aux_sym_basic_auth_section_repeat1,
    STATE(219), 1,
      sym__key_template,
    STATE(266), 1,
      sym_key_value,
    STATE(280), 1,
      aux_sym_key_string_content_repeat1,
    STATE(531), 1,
      sym_key_string,
    STATE(218), 2,
      sym__bracketed_key_content,
      sym_key_string_content,
    ACTIONS(452), 3,
      sym__json_array_start,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(454), 47,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
      anon_sym_DQUOTE,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__json_number,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LBRACE_LBRACE2,
      sym_comment,
  [765] = 12,
    ACTIONS(176), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(178), 1,
      sym_key_string_text,
    ACTIONS(180), 1,
      sym_key_string_escaped_char,
    ACTIONS(194), 1,
      sym__bracketed_key_start,
    STATE(53), 1,
      aux_sym_basic_auth_section_repeat1,
    STATE(219), 1,
      sym__key_template,
    STATE(266), 1,
      sym_key_value,
    STATE(280), 1,
      aux_sym_key_string_content_repeat1,
    STATE(531), 1,
      sym_key_string,
    STATE(218), 2,
      sym__bracketed_key_content,
      sym_key_string_content,
    ACTIONS(456), 3,
      sym__json_array_start,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(458), 47,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
      anon_sym_DQUOTE,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__json_number,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LBRACE_LBRACE2,
      sym_comment,
  [851] = 11,
    ACTIONS(176), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(178), 1,
      sym_key_string_text,
    ACTIONS(180), 1,
      sym_key_string_escaped_char,
    ACTIONS(194), 1,
      sym__bracketed_key_start,
    STATE(219), 1,
      sym__key_template,
    STATE(280), 1,
      aux_sym_key_string_content_repeat1,
    STATE(477), 1,
      sym_key_value,
    STATE(531), 1,
      sym_key_string,
    STATE(218), 2,
      sym__bracketed_key_content,
      sym_key_string_content,
    ACTIONS(460), 3,
      sym__json_array_start,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(462), 47,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
      anon_sym_DQUOTE,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__json_number,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LBRACE_LBRACE2,
      sym_comment,
  [934] = 11,
    ACTIONS(176), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(178), 1,
      sym_key_string_text,
    ACTIONS(180), 1,
      sym_key_string_escaped_char,
    ACTIONS(194), 1,
      sym__bracketed_key_start,
    STATE(219), 1,
      sym__key_template,
    STATE(280), 1,
      aux_sym_key_string_content_repeat1,
    STATE(477), 1,
      sym_key_value,
    STATE(531), 1,
      sym_key_string,
    STATE(218), 2,
      sym__bracketed_key_content,
      sym_key_string_content,
    ACTIONS(464), 3,
      sym__json_array_start,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(466), 47,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
      anon_sym_DQUOTE,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__json_number,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LBRACE_LBRACE2,
      sym_comment,
  [1017] = 11,
    ACTIONS(176), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(178), 1,
      sym_key_string_text,
    ACTIONS(180), 1,
      sym_key_string_escaped_char,
    ACTIONS(194), 1,
      sym__bracketed_key_start,
    STATE(219), 1,
      sym__key_template,
    STATE(280), 1,
      aux_sym_key_string_content_repeat1,
    STATE(477), 1,
      sym_key_value,
    STATE(531), 1,
      sym_key_string,
    STATE(218), 2,
      sym__bracketed_key_content,
      sym_key_string_content,
    ACTIONS(468), 3,
      sym__json_array_start,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(470), 47,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
      anon_sym_DQUOTE,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__json_number,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LBRACE_LBRACE2,
      sym_comment,
  [1100] = 11,
    ACTIONS(176), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(178), 1,
      sym_key_string_text,
    ACTIONS(180), 1,
      sym_key_string_escaped_char,
    ACTIONS(194), 1,
      sym__bracketed_key_start,
    STATE(219), 1,
      sym__key_template,
    STATE(280), 1,
      aux_sym_key_string_content_repeat1,
    STATE(477), 1,
      sym_key_value,
    STATE(531), 1,
      sym_key_string,
    STATE(218), 2,
      sym__bracketed_key_content,
      sym_key_string_content,
    ACTIONS(472), 3,
      sym__json_array_start,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(474), 47,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
      anon_sym_DQUOTE,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__json_number,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LBRACE_LBRACE2,
      sym_comment,
  [1183] = 11,
    ACTIONS(176), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(178), 1,
      sym_key_string_text,
    ACTIONS(180), 1,
      sym_key_string_escaped_char,
    ACTIONS(194), 1,
      sym__bracketed_key_start,
    STATE(219), 1,
      sym__key_template,
    STATE(280), 1,
      aux_sym_key_string_content_repeat1,
    STATE(477), 1,
      sym_key_value,
    STATE(531), 1,
      sym_key_string,
    STATE(218), 2,
      sym__bracketed_key_content,
      sym_key_string_content,
    ACTIONS(476), 3,
      sym__json_array_start,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(478), 47,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
      anon_sym_DQUOTE,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__json_number,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LBRACE_LBRACE2,
      sym_comment,
  [1266] = 11,
    ACTIONS(176), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(178), 1,
      sym_key_string_text,
    ACTIONS(180), 1,
      sym_key_string_escaped_char,
    ACTIONS(194), 1,
      sym__bracketed_key_start,
    STATE(219), 1,
      sym__key_template,
    STATE(280), 1,
      aux_sym_key_string_content_repeat1,
    STATE(477), 1,
      sym_key_value,
    STATE(531), 1,
      sym_key_string,
    STATE(218), 2,
      sym__bracketed_key_content,
      sym_key_string_content,
    ACTIONS(480), 3,
      sym__json_array_start,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(482), 47,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
      anon_sym_DQUOTE,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__json_number,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LBRACE_LBRACE2,
      sym_comment,
  [1349] = 11,
    ACTIONS(176), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(178), 1,
      sym_key_string_text,
    ACTIONS(180), 1,
      sym_key_string_escaped_char,
    ACTIONS(194), 1,
      sym__bracketed_key_start,
    STATE(219), 1,
      sym__key_template,
    STATE(280), 1,
      aux_sym_key_string_content_repeat1,
    STATE(477), 1,
      sym_key_value,
    STATE(531), 1,
      sym_key_string,
    STATE(218), 2,
      sym__bracketed_key_content,
      sym_key_string_content,
    ACTIONS(484), 3,
      sym__json_array_start,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(486), 47,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
      anon_sym_DQUOTE,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__json_number,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LBRACE_LBRACE2,
      sym_comment,
  [1432] = 11,
    ACTIONS(176), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(178), 1,
      sym_key_string_text,
    ACTIONS(180), 1,
      sym_key_string_escaped_char,
    ACTIONS(194), 1,
      sym__bracketed_key_start,
    STATE(219), 1,
      sym__key_template,
    STATE(280), 1,
      aux_sym_key_string_content_repeat1,
    STATE(477), 1,
      sym_key_value,
    STATE(531), 1,
      sym_key_string,
    STATE(218), 2,
      sym__bracketed_key_content,
      sym_key_string_content,
    ACTIONS(488), 3,
      sym__json_array_start,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(490), 47,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
      anon_sym_DQUOTE,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__json_number,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LBRACE_LBRACE2,
      sym_comment,
  [1515] = 11,
    ACTIONS(176), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(178), 1,
      sym_key_string_text,
    ACTIONS(180), 1,
      sym_key_string_escaped_char,
    ACTIONS(194), 1,
      sym__bracketed_key_start,
    STATE(219), 1,
      sym__key_template,
    STATE(280), 1,
      aux_sym_key_string_content_repeat1,
    STATE(477), 1,
      sym_key_value,
    STATE(531), 1,
      sym_key_string,
    STATE(218), 2,
      sym__bracketed_key_content,
      sym_key_string_content,
    ACTIONS(492), 3,
      sym__json_array_start,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(494), 47,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
      anon_sym_DQUOTE,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__json_number,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LBRACE_LBRACE2,
      sym_comment,
  [1598] = 10,
    ACTIONS(500), 1,
      anon_sym_LBRACKBasicAuth_RBRACK,
    ACTIONS(512), 1,
      anon_sym_LBRACKCookies_RBRACK,
    ACTIONS(515), 1,
      anon_sym_LBRACKOptions_RBRACK,
    ACTIONS(503), 2,
      anon_sym_LBRACKQuery_RBRACK,
      anon_sym_LBRACKQueryStringParams_RBRACK,
    ACTIONS(506), 2,
      anon_sym_LBRACKForm_RBRACK,
      anon_sym_LBRACKFormParams_RBRACK,
    ACTIONS(509), 2,
      anon_sym_LBRACKMultipart_RBRACK,
      anon_sym_LBRACKMultipartFormData_RBRACK,
    STATE(64), 2,
      sym_request_section,
      aux_sym_request_repeat2,
    ACTIONS(496), 3,
      sym__json_array_start,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(74), 6,
      sym_basic_auth_section,
      sym_query_string_params_section,
      sym_form_params_section,
      sym_multipart_form_data_section,
      sym_cookies_section,
      sym_options_section,
    ACTIONS(498), 38,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
      anon_sym_DQUOTE,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__json_number,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LBRACE_LBRACE2,
      sym_comment,
  [1677] = 5,
    ACTIONS(518), 1,
      anon_sym_LF,
    ACTIONS(521), 1,
      sym_comment,
    STATE(65), 1,
      aux_sym__comment_or_new_line_repeat1,
    ACTIONS(78), 2,
      sym__json_array_start,
      ts_builtin_sym_end,
    ACTIONS(83), 51,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
      anon_sym_version,
      anon_sym_rawbytes,
      anon_sym_ip,
      anon_sym_redirects,
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
      anon_sym_certificate,
      anon_sym_DQUOTE,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__json_number,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LBRACE_LBRACE2,
  [1744] = 5,
    ACTIONS(524), 1,
      anon_sym_LF,
    ACTIONS(526), 1,
      sym_comment,
    STATE(65), 1,
      aux_sym__comment_or_new_line_repeat1,
    ACTIONS(70), 2,
      sym__json_array_start,
      ts_builtin_sym_end,
    ACTIONS(74), 51,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
      anon_sym_version,
      anon_sym_rawbytes,
      anon_sym_ip,
      anon_sym_redirects,
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
      anon_sym_certificate,
      anon_sym_DQUOTE,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__json_number,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LBRACE_LBRACE2,
  [1811] = 2,
    ACTIONS(528), 3,
      sym__json_array_start,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(530), 52,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
      anon_sym_version,
      anon_sym_rawbytes,
      anon_sym_ip,
      anon_sym_redirects,
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
      anon_sym_certificate,
      anon_sym_DQUOTE,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__json_number,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LBRACE_LBRACE2,
      sym_comment,
  [1871] = 5,
    ACTIONS(532), 1,
      anon_sym_LF,
    ACTIONS(535), 1,
      sym_comment,
    STATE(68), 1,
      aux_sym__comment_or_new_line_repeat1,
    ACTIONS(78), 5,
      sym__json_array_start,
      sym__bracketed_key_start,
      ts_builtin_sym_end,
      anon_sym_LBRACE_LBRACE,
      sym_key_string_escaped_char,
    ACTIONS(83), 47,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
      anon_sym_DQUOTE,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      sym_key_string_text,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__json_number,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LBRACE_LBRACE2,
  [1937] = 2,
    ACTIONS(538), 3,
      sym__json_array_start,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(540), 52,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
      anon_sym_version,
      anon_sym_rawbytes,
      anon_sym_ip,
      anon_sym_redirects,
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
      anon_sym_certificate,
      anon_sym_DQUOTE,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__json_number,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LBRACE_LBRACE2,
      sym_comment,
  [1997] = 5,
    ACTIONS(542), 1,
      anon_sym_LF,
    ACTIONS(544), 1,
      sym_comment,
    STATE(68), 1,
      aux_sym__comment_or_new_line_repeat1,
    ACTIONS(70), 5,
      sym__json_array_start,
      sym__bracketed_key_start,
      ts_builtin_sym_end,
      anon_sym_LBRACE_LBRACE,
      sym_key_string_escaped_char,
    ACTIONS(74), 47,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
      anon_sym_DQUOTE,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      sym_key_string_text,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__json_number,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LBRACE_LBRACE2,
  [2063] = 2,
    ACTIONS(546), 6,
      sym__json_array_start,
      sym__bracketed_key_start,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
      sym_key_string_escaped_char,
    ACTIONS(548), 48,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
      anon_sym_DQUOTE,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      sym_key_string_text,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__json_number,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LBRACE_LBRACE2,
      sym_comment,
  [2122] = 2,
    ACTIONS(436), 6,
      sym__json_array_start,
      sym__bracketed_key_start,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
      sym_key_string_escaped_char,
    ACTIONS(438), 48,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
      anon_sym_DQUOTE,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      sym_key_string_text,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__json_number,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LBRACE_LBRACE2,
      sym_comment,
  [2181] = 2,
    ACTIONS(396), 6,
      sym__json_array_start,
      sym__bracketed_key_start,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
      sym_key_string_escaped_char,
    ACTIONS(398), 48,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
      anon_sym_DQUOTE,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      sym_key_string_text,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__json_number,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LBRACE_LBRACE2,
      sym_comment,
  [2240] = 2,
    ACTIONS(550), 3,
      sym__json_array_start,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(552), 47,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
      anon_sym_DQUOTE,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__json_number,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LBRACE_LBRACE2,
      sym_comment,
  [2295] = 16,
    ACTIONS(554), 1,
      anon_sym_LF,
    ACTIONS(556), 1,
      anon_sym_redact,
    ACTIONS(560), 1,
      anon_sym_xpath,
    ACTIONS(564), 1,
      anon_sym_regex,
    ACTIONS(566), 1,
      anon_sym_nth,
    ACTIONS(568), 1,
      anon_sym_replace,
    ACTIONS(570), 1,
      anon_sym_replaceRegex,
    ACTIONS(572), 1,
      anon_sym_split,
    ACTIONS(574), 1,
      sym_comment,
    ACTIONS(576), 1,
      sym__eof,
    STATE(85), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(81), 2,
      sym_filter,
      aux_sym_capture_repeat1,
    STATE(92), 2,
      sym__comment_or_new_line,
      sym__line_ending,
    ACTIONS(562), 7,
      anon_sym_jsonpath,
      anon_sym_charsetDecode,
      anon_sym_dateFormat,
      anon_sym_urlQueryParam,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_toDate,
    STATE(94), 8,
      sym_simple_filter_key,
      sym_argument_filter,
      sym_regex_filter,
      sym_nth_filter,
      sym_replace_filter,
      sym_replace_regex_filter,
      sym_split_filter,
      sym_xpath_filter,
    ACTIONS(558), 20,
      anon_sym_location,
      anon_sym_base64Decode,
      anon_sym_base64Encode,
      anon_sym_base64UrlSafeDecode,
      anon_sym_base64UrlSafeEncode,
      anon_sym_first,
      anon_sym_last,
      anon_sym_toFloat,
      anon_sym_toHex,
      anon_sym_toString,
      anon_sym_utf8Decode,
      anon_sym_utf8Encode,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_toInt,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
  [2378] = 16,
    ACTIONS(554), 1,
      anon_sym_LF,
    ACTIONS(560), 1,
      anon_sym_xpath,
    ACTIONS(564), 1,
      anon_sym_regex,
    ACTIONS(566), 1,
      anon_sym_nth,
    ACTIONS(568), 1,
      anon_sym_replace,
    ACTIONS(570), 1,
      anon_sym_replaceRegex,
    ACTIONS(572), 1,
      anon_sym_split,
    ACTIONS(574), 1,
      sym_comment,
    ACTIONS(578), 1,
      anon_sym_redact,
    ACTIONS(580), 1,
      sym__eof,
    STATE(85), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(75), 2,
      sym_filter,
      aux_sym_capture_repeat1,
    STATE(90), 2,
      sym__comment_or_new_line,
      sym__line_ending,
    ACTIONS(562), 7,
      anon_sym_jsonpath,
      anon_sym_charsetDecode,
      anon_sym_dateFormat,
      anon_sym_urlQueryParam,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_toDate,
    STATE(94), 8,
      sym_simple_filter_key,
      sym_argument_filter,
      sym_regex_filter,
      sym_nth_filter,
      sym_replace_filter,
      sym_replace_regex_filter,
      sym_split_filter,
      sym_xpath_filter,
    ACTIONS(558), 20,
      anon_sym_location,
      anon_sym_base64Decode,
      anon_sym_base64Encode,
      anon_sym_base64UrlSafeDecode,
      anon_sym_base64UrlSafeEncode,
      anon_sym_first,
      anon_sym_last,
      anon_sym_toFloat,
      anon_sym_toHex,
      anon_sym_toString,
      anon_sym_utf8Decode,
      anon_sym_utf8Encode,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_toInt,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
  [2461] = 12,
    ACTIONS(420), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(423), 1,
      sym_key_string_text,
    ACTIONS(426), 1,
      sym_key_string_escaped_char,
    ACTIONS(429), 1,
      sym__bracketed_key_start,
    STATE(219), 1,
      sym__key_template,
    STATE(280), 1,
      aux_sym_key_string_content_repeat1,
    STATE(294), 1,
      sym_key_value,
    STATE(531), 1,
      sym_key_string,
    STATE(77), 2,
      sym_header,
      aux_sym_request_repeat1,
    STATE(218), 2,
      sym__bracketed_key_content,
      sym_key_string_content,
    ACTIONS(416), 3,
      sym__json_array_start,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(418), 34,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
      anon_sym_DQUOTE,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__json_number,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LBRACE_LBRACE2,
      sym_comment,
  [2535] = 11,
    ACTIONS(176), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(178), 1,
      sym_key_string_text,
    ACTIONS(180), 1,
      sym_key_string_escaped_char,
    ACTIONS(194), 1,
      sym__bracketed_key_start,
    STATE(219), 1,
      sym__key_template,
    STATE(280), 1,
      aux_sym_key_string_content_repeat1,
    STATE(544), 1,
      sym_key_string,
    STATE(79), 2,
      sym_capture,
      aux_sym_captures_section_repeat1,
    STATE(218), 2,
      sym__bracketed_key_content,
      sym_key_string_content,
    ACTIONS(582), 3,
      sym__json_array_start,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(584), 34,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
      anon_sym_DQUOTE,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__json_number,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LBRACE_LBRACE2,
      sym_comment,
  [2606] = 11,
    ACTIONS(176), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(178), 1,
      sym_key_string_text,
    ACTIONS(180), 1,
      sym_key_string_escaped_char,
    ACTIONS(194), 1,
      sym__bracketed_key_start,
    STATE(219), 1,
      sym__key_template,
    STATE(280), 1,
      aux_sym_key_string_content_repeat1,
    STATE(544), 1,
      sym_key_string,
    STATE(80), 2,
      sym_capture,
      aux_sym_captures_section_repeat1,
    STATE(218), 2,
      sym__bracketed_key_content,
      sym_key_string_content,
    ACTIONS(586), 3,
      sym__json_array_start,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(588), 34,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
      anon_sym_DQUOTE,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__json_number,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LBRACE_LBRACE2,
      sym_comment,
  [2677] = 11,
    ACTIONS(594), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(597), 1,
      sym_key_string_text,
    ACTIONS(600), 1,
      sym_key_string_escaped_char,
    ACTIONS(603), 1,
      sym__bracketed_key_start,
    STATE(219), 1,
      sym__key_template,
    STATE(280), 1,
      aux_sym_key_string_content_repeat1,
    STATE(544), 1,
      sym_key_string,
    STATE(80), 2,
      sym_capture,
      aux_sym_captures_section_repeat1,
    STATE(218), 2,
      sym__bracketed_key_content,
      sym_key_string_content,
    ACTIONS(590), 3,
      sym__json_array_start,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(592), 34,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
      anon_sym_DQUOTE,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__json_number,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LBRACE_LBRACE2,
      sym_comment,
  [2748] = 12,
    ACTIONS(609), 1,
      anon_sym_xpath,
    ACTIONS(615), 1,
      anon_sym_regex,
    ACTIONS(618), 1,
      anon_sym_nth,
    ACTIONS(621), 1,
      anon_sym_replace,
    ACTIONS(624), 1,
      anon_sym_replaceRegex,
    ACTIONS(627), 1,
      anon_sym_split,
    ACTIONS(216), 2,
      anon_sym_redact,
      sym_comment,
    ACTIONS(218), 2,
      sym__eof,
      anon_sym_LF,
    STATE(81), 2,
      sym_filter,
      aux_sym_capture_repeat1,
    ACTIONS(612), 7,
      anon_sym_jsonpath,
      anon_sym_charsetDecode,
      anon_sym_dateFormat,
      anon_sym_urlQueryParam,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_toDate,
    STATE(94), 8,
      sym_simple_filter_key,
      sym_argument_filter,
      sym_regex_filter,
      sym_nth_filter,
      sym_replace_filter,
      sym_replace_regex_filter,
      sym_split_filter,
      sym_xpath_filter,
    ACTIONS(606), 20,
      anon_sym_location,
      anon_sym_base64Decode,
      anon_sym_base64Encode,
      anon_sym_base64UrlSafeDecode,
      anon_sym_base64UrlSafeEncode,
      anon_sym_first,
      anon_sym_last,
      anon_sym_toFloat,
      anon_sym_toHex,
      anon_sym_toString,
      anon_sym_utf8Decode,
      anon_sym_utf8Encode,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_toInt,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
  [2820] = 21,
    ACTIONS(100), 1,
      anon_sym_equals,
    ACTIONS(102), 1,
      anon_sym_EQ_EQ,
    ACTIONS(104), 1,
      anon_sym_notEquals,
    ACTIONS(106), 1,
      anon_sym_BANG_EQ,
    ACTIONS(108), 1,
      anon_sym_greaterThan,
    ACTIONS(110), 1,
      anon_sym_GT,
    ACTIONS(112), 1,
      anon_sym_greaterThanOrEquals,
    ACTIONS(114), 1,
      anon_sym_GT_EQ,
    ACTIONS(116), 1,
      anon_sym_lessThan,
    ACTIONS(118), 1,
      anon_sym_LT,
    ACTIONS(120), 1,
      anon_sym_lessThanOrEquals,
    ACTIONS(122), 1,
      anon_sym_LT_EQ,
    ACTIONS(124), 1,
      anon_sym_startsWith,
    ACTIONS(126), 1,
      anon_sym_endsWith,
    ACTIONS(128), 1,
      anon_sym_contains,
    ACTIONS(130), 1,
      anon_sym_matches,
    ACTIONS(132), 1,
      anon_sym_includes,
    ACTIONS(142), 1,
      sym_comment,
    STATE(426), 1,
      sym_predicate_func,
    STATE(435), 12,
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
    ACTIONS(98), 15,
      anon_sym_isDate,
      anon_sym_isList,
      anon_sym_isObject,
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
  [2909] = 12,
    ACTIONS(90), 1,
      anon_sym_xpath,
    ACTIONS(94), 1,
      anon_sym_regex,
    ACTIONS(134), 1,
      anon_sym_nth,
    ACTIONS(136), 1,
      anon_sym_replace,
    ACTIONS(138), 1,
      anon_sym_replaceRegex,
    ACTIONS(140), 1,
      anon_sym_split,
    ACTIONS(142), 1,
      sym_comment,
    ACTIONS(630), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(15), 2,
      sym_filter,
      aux_sym_capture_repeat1,
    ACTIONS(92), 7,
      anon_sym_jsonpath,
      anon_sym_charsetDecode,
      anon_sym_dateFormat,
      anon_sym_urlQueryParam,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_toDate,
    STATE(29), 8,
      sym_simple_filter_key,
      sym_argument_filter,
      sym_regex_filter,
      sym_nth_filter,
      sym_replace_filter,
      sym_replace_regex_filter,
      sym_split_filter,
      sym_xpath_filter,
    ACTIONS(88), 20,
      anon_sym_location,
      anon_sym_base64Decode,
      anon_sym_base64Encode,
      anon_sym_base64UrlSafeDecode,
      anon_sym_base64UrlSafeEncode,
      anon_sym_first,
      anon_sym_last,
      anon_sym_toFloat,
      anon_sym_toHex,
      anon_sym_toString,
      anon_sym_utf8Decode,
      anon_sym_utf8Encode,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_toInt,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
  [2979] = 12,
    ACTIONS(90), 1,
      anon_sym_xpath,
    ACTIONS(94), 1,
      anon_sym_regex,
    ACTIONS(134), 1,
      anon_sym_nth,
    ACTIONS(136), 1,
      anon_sym_replace,
    ACTIONS(138), 1,
      anon_sym_replaceRegex,
    ACTIONS(140), 1,
      anon_sym_split,
    ACTIONS(142), 1,
      sym_comment,
    ACTIONS(632), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(83), 2,
      sym_filter,
      aux_sym_capture_repeat1,
    ACTIONS(92), 7,
      anon_sym_jsonpath,
      anon_sym_charsetDecode,
      anon_sym_dateFormat,
      anon_sym_urlQueryParam,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_toDate,
    STATE(29), 8,
      sym_simple_filter_key,
      sym_argument_filter,
      sym_regex_filter,
      sym_nth_filter,
      sym_replace_filter,
      sym_replace_regex_filter,
      sym_split_filter,
      sym_xpath_filter,
    ACTIONS(88), 20,
      anon_sym_location,
      anon_sym_base64Decode,
      anon_sym_base64Encode,
      anon_sym_base64UrlSafeDecode,
      anon_sym_base64UrlSafeEncode,
      anon_sym_first,
      anon_sym_last,
      anon_sym_toFloat,
      anon_sym_toHex,
      anon_sym_toString,
      anon_sym_utf8Decode,
      anon_sym_utf8Encode,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_toInt,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
  [3049] = 5,
    ACTIONS(634), 1,
      anon_sym_LF,
    ACTIONS(636), 1,
      sym_comment,
    STATE(86), 1,
      aux_sym__comment_or_new_line_repeat1,
    ACTIONS(70), 5,
      sym__json_array_start,
      sym__bracketed_key_start,
      ts_builtin_sym_end,
      anon_sym_LBRACE_LBRACE,
      sym_key_string_escaped_char,
    ACTIONS(74), 34,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
      anon_sym_DQUOTE,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      sym_key_string_text,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__json_number,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LBRACE_LBRACE2,
  [3102] = 5,
    ACTIONS(638), 1,
      anon_sym_LF,
    ACTIONS(641), 1,
      sym_comment,
    STATE(86), 1,
      aux_sym__comment_or_new_line_repeat1,
    ACTIONS(78), 5,
      sym__json_array_start,
      sym__bracketed_key_start,
      ts_builtin_sym_end,
      anon_sym_LBRACE_LBRACE,
      sym_key_string_escaped_char,
    ACTIONS(83), 34,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
      anon_sym_DQUOTE,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      sym_key_string_text,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__json_number,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LBRACE_LBRACE2,
  [3155] = 2,
    ACTIONS(644), 6,
      sym__json_array_start,
      sym__bracketed_key_start,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
      sym_key_string_escaped_char,
    ACTIONS(646), 35,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
      anon_sym_DQUOTE,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      sym_key_string_text,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__json_number,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LBRACE_LBRACE2,
      sym_comment,
  [3201] = 2,
    ACTIONS(546), 6,
      sym__json_array_start,
      sym__bracketed_key_start,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
      sym_key_string_escaped_char,
    ACTIONS(548), 35,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
      anon_sym_DQUOTE,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      sym_key_string_text,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__json_number,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LBRACE_LBRACE2,
      sym_comment,
  [3247] = 6,
    ACTIONS(652), 1,
      anon_sym_LBRACKCaptures_RBRACK,
    ACTIONS(655), 1,
      anon_sym_LBRACKAsserts_RBRACK,
    STATE(89), 2,
      sym_response_section,
      aux_sym_response_repeat1,
    STATE(108), 2,
      sym_captures_section,
      sym_asserts_section,
    ACTIONS(648), 3,
      sym__json_array_start,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(650), 32,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
      anon_sym_DQUOTE,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__json_number,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LBRACE_LBRACE2,
      sym_comment,
  [3301] = 2,
    ACTIONS(658), 6,
      sym__json_array_start,
      sym__bracketed_key_start,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
      sym_key_string_escaped_char,
    ACTIONS(660), 35,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
      anon_sym_DQUOTE,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      sym_key_string_text,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__json_number,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LBRACE_LBRACE2,
      sym_comment,
  [3347] = 2,
    ACTIONS(662), 6,
      sym__json_array_start,
      sym__bracketed_key_start,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
      sym_key_string_escaped_char,
    ACTIONS(664), 35,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
      anon_sym_DQUOTE,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      sym_key_string_text,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__json_number,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LBRACE_LBRACE2,
      sym_comment,
  [3393] = 2,
    ACTIONS(666), 6,
      sym__json_array_start,
      sym__bracketed_key_start,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
      sym_key_string_escaped_char,
    ACTIONS(668), 35,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
      anon_sym_DQUOTE,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      sym_key_string_text,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__json_number,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LBRACE_LBRACE2,
      sym_comment,
  [3439] = 2,
    ACTIONS(256), 2,
      sym__eof,
      anon_sym_LF,
    ACTIONS(258), 35,
      anon_sym_redact,
      anon_sym_location,
      anon_sym_xpath,
      anon_sym_jsonpath,
      anon_sym_regex,
      anon_sym_base64Decode,
      anon_sym_base64Encode,
      anon_sym_base64UrlSafeDecode,
      anon_sym_base64UrlSafeEncode,
      anon_sym_first,
      anon_sym_last,
      anon_sym_toFloat,
      anon_sym_toHex,
      anon_sym_toString,
      anon_sym_utf8Decode,
      anon_sym_utf8Encode,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_toInt,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
      anon_sym_charsetDecode,
      anon_sym_dateFormat,
      anon_sym_urlQueryParam,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_toDate,
      anon_sym_nth,
      anon_sym_replace,
      anon_sym_replaceRegex,
      anon_sym_split,
      sym_comment,
  [3481] = 2,
    ACTIONS(284), 2,
      sym__eof,
      anon_sym_LF,
    ACTIONS(286), 35,
      anon_sym_redact,
      anon_sym_location,
      anon_sym_xpath,
      anon_sym_jsonpath,
      anon_sym_regex,
      anon_sym_base64Decode,
      anon_sym_base64Encode,
      anon_sym_base64UrlSafeDecode,
      anon_sym_base64UrlSafeEncode,
      anon_sym_first,
      anon_sym_last,
      anon_sym_toFloat,
      anon_sym_toHex,
      anon_sym_toString,
      anon_sym_utf8Decode,
      anon_sym_utf8Encode,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_toInt,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
      anon_sym_charsetDecode,
      anon_sym_dateFormat,
      anon_sym_urlQueryParam,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_toDate,
      anon_sym_nth,
      anon_sym_replace,
      anon_sym_replaceRegex,
      anon_sym_split,
      sym_comment,
  [3523] = 2,
    ACTIONS(332), 2,
      sym__eof,
      anon_sym_LF,
    ACTIONS(334), 35,
      anon_sym_redact,
      anon_sym_location,
      anon_sym_xpath,
      anon_sym_jsonpath,
      anon_sym_regex,
      anon_sym_base64Decode,
      anon_sym_base64Encode,
      anon_sym_base64UrlSafeDecode,
      anon_sym_base64UrlSafeEncode,
      anon_sym_first,
      anon_sym_last,
      anon_sym_toFloat,
      anon_sym_toHex,
      anon_sym_toString,
      anon_sym_utf8Decode,
      anon_sym_utf8Encode,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_toInt,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
      anon_sym_charsetDecode,
      anon_sym_dateFormat,
      anon_sym_urlQueryParam,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_toDate,
      anon_sym_nth,
      anon_sym_replace,
      anon_sym_replaceRegex,
      anon_sym_split,
      sym_comment,
  [3565] = 2,
    ACTIONS(308), 2,
      sym__eof,
      anon_sym_LF,
    ACTIONS(310), 35,
      anon_sym_redact,
      anon_sym_location,
      anon_sym_xpath,
      anon_sym_jsonpath,
      anon_sym_regex,
      anon_sym_base64Decode,
      anon_sym_base64Encode,
      anon_sym_base64UrlSafeDecode,
      anon_sym_base64UrlSafeEncode,
      anon_sym_first,
      anon_sym_last,
      anon_sym_toFloat,
      anon_sym_toHex,
      anon_sym_toString,
      anon_sym_utf8Decode,
      anon_sym_utf8Encode,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_toInt,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
      anon_sym_charsetDecode,
      anon_sym_dateFormat,
      anon_sym_urlQueryParam,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_toDate,
      anon_sym_nth,
      anon_sym_replace,
      anon_sym_replaceRegex,
      anon_sym_split,
      sym_comment,
  [3607] = 2,
    ACTIONS(312), 2,
      sym__eof,
      anon_sym_LF,
    ACTIONS(314), 35,
      anon_sym_redact,
      anon_sym_location,
      anon_sym_xpath,
      anon_sym_jsonpath,
      anon_sym_regex,
      anon_sym_base64Decode,
      anon_sym_base64Encode,
      anon_sym_base64UrlSafeDecode,
      anon_sym_base64UrlSafeEncode,
      anon_sym_first,
      anon_sym_last,
      anon_sym_toFloat,
      anon_sym_toHex,
      anon_sym_toString,
      anon_sym_utf8Decode,
      anon_sym_utf8Encode,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_toInt,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
      anon_sym_charsetDecode,
      anon_sym_dateFormat,
      anon_sym_urlQueryParam,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_toDate,
      anon_sym_nth,
      anon_sym_replace,
      anon_sym_replaceRegex,
      anon_sym_split,
      sym_comment,
  [3649] = 2,
    ACTIONS(320), 2,
      sym__eof,
      anon_sym_LF,
    ACTIONS(322), 35,
      anon_sym_redact,
      anon_sym_location,
      anon_sym_xpath,
      anon_sym_jsonpath,
      anon_sym_regex,
      anon_sym_base64Decode,
      anon_sym_base64Encode,
      anon_sym_base64UrlSafeDecode,
      anon_sym_base64UrlSafeEncode,
      anon_sym_first,
      anon_sym_last,
      anon_sym_toFloat,
      anon_sym_toHex,
      anon_sym_toString,
      anon_sym_utf8Decode,
      anon_sym_utf8Encode,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_toInt,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
      anon_sym_charsetDecode,
      anon_sym_dateFormat,
      anon_sym_urlQueryParam,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_toDate,
      anon_sym_nth,
      anon_sym_replace,
      anon_sym_replaceRegex,
      anon_sym_split,
      sym_comment,
  [3691] = 2,
    ACTIONS(252), 2,
      sym__eof,
      anon_sym_LF,
    ACTIONS(254), 35,
      anon_sym_redact,
      anon_sym_location,
      anon_sym_xpath,
      anon_sym_jsonpath,
      anon_sym_regex,
      anon_sym_base64Decode,
      anon_sym_base64Encode,
      anon_sym_base64UrlSafeDecode,
      anon_sym_base64UrlSafeEncode,
      anon_sym_first,
      anon_sym_last,
      anon_sym_toFloat,
      anon_sym_toHex,
      anon_sym_toString,
      anon_sym_utf8Decode,
      anon_sym_utf8Encode,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_toInt,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
      anon_sym_charsetDecode,
      anon_sym_dateFormat,
      anon_sym_urlQueryParam,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_toDate,
      anon_sym_nth,
      anon_sym_replace,
      anon_sym_replaceRegex,
      anon_sym_split,
      sym_comment,
  [3733] = 2,
    ACTIONS(264), 2,
      sym__eof,
      anon_sym_LF,
    ACTIONS(266), 35,
      anon_sym_redact,
      anon_sym_location,
      anon_sym_xpath,
      anon_sym_jsonpath,
      anon_sym_regex,
      anon_sym_base64Decode,
      anon_sym_base64Encode,
      anon_sym_base64UrlSafeDecode,
      anon_sym_base64UrlSafeEncode,
      anon_sym_first,
      anon_sym_last,
      anon_sym_toFloat,
      anon_sym_toHex,
      anon_sym_toString,
      anon_sym_utf8Decode,
      anon_sym_utf8Encode,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_toInt,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
      anon_sym_charsetDecode,
      anon_sym_dateFormat,
      anon_sym_urlQueryParam,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_toDate,
      anon_sym_nth,
      anon_sym_replace,
      anon_sym_replaceRegex,
      anon_sym_split,
      sym_comment,
  [3775] = 2,
    ACTIONS(328), 2,
      sym__eof,
      anon_sym_LF,
    ACTIONS(330), 35,
      anon_sym_redact,
      anon_sym_location,
      anon_sym_xpath,
      anon_sym_jsonpath,
      anon_sym_regex,
      anon_sym_base64Decode,
      anon_sym_base64Encode,
      anon_sym_base64UrlSafeDecode,
      anon_sym_base64UrlSafeEncode,
      anon_sym_first,
      anon_sym_last,
      anon_sym_toFloat,
      anon_sym_toHex,
      anon_sym_toString,
      anon_sym_utf8Decode,
      anon_sym_utf8Encode,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_toInt,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
      anon_sym_charsetDecode,
      anon_sym_dateFormat,
      anon_sym_urlQueryParam,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_toDate,
      anon_sym_nth,
      anon_sym_replace,
      anon_sym_replaceRegex,
      anon_sym_split,
      sym_comment,
  [3817] = 2,
    ACTIONS(304), 2,
      sym__eof,
      anon_sym_LF,
    ACTIONS(306), 35,
      anon_sym_redact,
      anon_sym_location,
      anon_sym_xpath,
      anon_sym_jsonpath,
      anon_sym_regex,
      anon_sym_base64Decode,
      anon_sym_base64Encode,
      anon_sym_base64UrlSafeDecode,
      anon_sym_base64UrlSafeEncode,
      anon_sym_first,
      anon_sym_last,
      anon_sym_toFloat,
      anon_sym_toHex,
      anon_sym_toString,
      anon_sym_utf8Decode,
      anon_sym_utf8Encode,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_toInt,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
      anon_sym_charsetDecode,
      anon_sym_dateFormat,
      anon_sym_urlQueryParam,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_toDate,
      anon_sym_nth,
      anon_sym_replace,
      anon_sym_replaceRegex,
      anon_sym_split,
      sym_comment,
  [3859] = 2,
    ACTIONS(324), 2,
      sym__eof,
      anon_sym_LF,
    ACTIONS(326), 35,
      anon_sym_redact,
      anon_sym_location,
      anon_sym_xpath,
      anon_sym_jsonpath,
      anon_sym_regex,
      anon_sym_base64Decode,
      anon_sym_base64Encode,
      anon_sym_base64UrlSafeDecode,
      anon_sym_base64UrlSafeEncode,
      anon_sym_first,
      anon_sym_last,
      anon_sym_toFloat,
      anon_sym_toHex,
      anon_sym_toString,
      anon_sym_utf8Decode,
      anon_sym_utf8Encode,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_toInt,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
      anon_sym_charsetDecode,
      anon_sym_dateFormat,
      anon_sym_urlQueryParam,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_toDate,
      anon_sym_nth,
      anon_sym_replace,
      anon_sym_replaceRegex,
      anon_sym_split,
      sym_comment,
  [3901] = 2,
    ACTIONS(316), 2,
      sym__eof,
      anon_sym_LF,
    ACTIONS(318), 35,
      anon_sym_redact,
      anon_sym_location,
      anon_sym_xpath,
      anon_sym_jsonpath,
      anon_sym_regex,
      anon_sym_base64Decode,
      anon_sym_base64Encode,
      anon_sym_base64UrlSafeDecode,
      anon_sym_base64UrlSafeEncode,
      anon_sym_first,
      anon_sym_last,
      anon_sym_toFloat,
      anon_sym_toHex,
      anon_sym_toString,
      anon_sym_utf8Decode,
      anon_sym_utf8Encode,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_toInt,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
      anon_sym_charsetDecode,
      anon_sym_dateFormat,
      anon_sym_urlQueryParam,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_toDate,
      anon_sym_nth,
      anon_sym_replace,
      anon_sym_replaceRegex,
      anon_sym_split,
      sym_comment,
  [3943] = 2,
    ACTIONS(336), 2,
      sym__eof,
      anon_sym_LF,
    ACTIONS(338), 35,
      anon_sym_redact,
      anon_sym_location,
      anon_sym_xpath,
      anon_sym_jsonpath,
      anon_sym_regex,
      anon_sym_base64Decode,
      anon_sym_base64Encode,
      anon_sym_base64UrlSafeDecode,
      anon_sym_base64UrlSafeEncode,
      anon_sym_first,
      anon_sym_last,
      anon_sym_toFloat,
      anon_sym_toHex,
      anon_sym_toString,
      anon_sym_utf8Decode,
      anon_sym_utf8Encode,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_toInt,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
      anon_sym_charsetDecode,
      anon_sym_dateFormat,
      anon_sym_urlQueryParam,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_toDate,
      anon_sym_nth,
      anon_sym_replace,
      anon_sym_replaceRegex,
      anon_sym_split,
      sym_comment,
  [3985] = 2,
    ACTIONS(272), 2,
      sym__eof,
      anon_sym_LF,
    ACTIONS(274), 35,
      anon_sym_redact,
      anon_sym_location,
      anon_sym_xpath,
      anon_sym_jsonpath,
      anon_sym_regex,
      anon_sym_base64Decode,
      anon_sym_base64Encode,
      anon_sym_base64UrlSafeDecode,
      anon_sym_base64UrlSafeEncode,
      anon_sym_first,
      anon_sym_last,
      anon_sym_toFloat,
      anon_sym_toHex,
      anon_sym_toString,
      anon_sym_utf8Decode,
      anon_sym_utf8Encode,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_toInt,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
      anon_sym_charsetDecode,
      anon_sym_dateFormat,
      anon_sym_urlQueryParam,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_toDate,
      anon_sym_nth,
      anon_sym_replace,
      anon_sym_replaceRegex,
      anon_sym_split,
      sym_comment,
  [4027] = 2,
    ACTIONS(268), 2,
      sym__eof,
      anon_sym_LF,
    ACTIONS(270), 35,
      anon_sym_redact,
      anon_sym_location,
      anon_sym_xpath,
      anon_sym_jsonpath,
      anon_sym_regex,
      anon_sym_base64Decode,
      anon_sym_base64Encode,
      anon_sym_base64UrlSafeDecode,
      anon_sym_base64UrlSafeEncode,
      anon_sym_first,
      anon_sym_last,
      anon_sym_toFloat,
      anon_sym_toHex,
      anon_sym_toString,
      anon_sym_utf8Decode,
      anon_sym_utf8Encode,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_toInt,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
      anon_sym_charsetDecode,
      anon_sym_dateFormat,
      anon_sym_urlQueryParam,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_toDate,
      anon_sym_nth,
      anon_sym_replace,
      anon_sym_replaceRegex,
      anon_sym_split,
      sym_comment,
  [4069] = 2,
    ACTIONS(670), 3,
      sym__json_array_start,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(672), 34,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
      anon_sym_DQUOTE,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__json_number,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LBRACE_LBRACE2,
      sym_comment,
  [4111] = 2,
    ACTIONS(260), 2,
      sym__eof,
      anon_sym_LF,
    ACTIONS(262), 35,
      anon_sym_redact,
      anon_sym_location,
      anon_sym_xpath,
      anon_sym_jsonpath,
      anon_sym_regex,
      anon_sym_base64Decode,
      anon_sym_base64Encode,
      anon_sym_base64UrlSafeDecode,
      anon_sym_base64UrlSafeEncode,
      anon_sym_first,
      anon_sym_last,
      anon_sym_toFloat,
      anon_sym_toHex,
      anon_sym_toString,
      anon_sym_utf8Decode,
      anon_sym_utf8Encode,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_toInt,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
      anon_sym_charsetDecode,
      anon_sym_dateFormat,
      anon_sym_urlQueryParam,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_toDate,
      anon_sym_nth,
      anon_sym_replace,
      anon_sym_replaceRegex,
      anon_sym_split,
      sym_comment,
  [4153] = 2,
    ACTIONS(248), 2,
      sym__eof,
      anon_sym_LF,
    ACTIONS(250), 35,
      anon_sym_redact,
      anon_sym_location,
      anon_sym_xpath,
      anon_sym_jsonpath,
      anon_sym_regex,
      anon_sym_base64Decode,
      anon_sym_base64Encode,
      anon_sym_base64UrlSafeDecode,
      anon_sym_base64UrlSafeEncode,
      anon_sym_first,
      anon_sym_last,
      anon_sym_toFloat,
      anon_sym_toHex,
      anon_sym_toString,
      anon_sym_utf8Decode,
      anon_sym_utf8Encode,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_toInt,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
      anon_sym_charsetDecode,
      anon_sym_dateFormat,
      anon_sym_urlQueryParam,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_toDate,
      anon_sym_nth,
      anon_sym_replace,
      anon_sym_replaceRegex,
      anon_sym_split,
      sym_comment,
  [4195] = 2,
    ACTIONS(276), 2,
      sym__eof,
      anon_sym_LF,
    ACTIONS(278), 35,
      anon_sym_redact,
      anon_sym_location,
      anon_sym_xpath,
      anon_sym_jsonpath,
      anon_sym_regex,
      anon_sym_base64Decode,
      anon_sym_base64Encode,
      anon_sym_base64UrlSafeDecode,
      anon_sym_base64UrlSafeEncode,
      anon_sym_first,
      anon_sym_last,
      anon_sym_toFloat,
      anon_sym_toHex,
      anon_sym_toString,
      anon_sym_utf8Decode,
      anon_sym_utf8Encode,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_toInt,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
      anon_sym_charsetDecode,
      anon_sym_dateFormat,
      anon_sym_urlQueryParam,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_toDate,
      anon_sym_nth,
      anon_sym_replace,
      anon_sym_replaceRegex,
      anon_sym_split,
      sym_comment,
  [4237] = 2,
    ACTIONS(280), 2,
      sym__eof,
      anon_sym_LF,
    ACTIONS(282), 35,
      anon_sym_redact,
      anon_sym_location,
      anon_sym_xpath,
      anon_sym_jsonpath,
      anon_sym_regex,
      anon_sym_base64Decode,
      anon_sym_base64Encode,
      anon_sym_base64UrlSafeDecode,
      anon_sym_base64UrlSafeEncode,
      anon_sym_first,
      anon_sym_last,
      anon_sym_toFloat,
      anon_sym_toHex,
      anon_sym_toString,
      anon_sym_utf8Decode,
      anon_sym_utf8Encode,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_toInt,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
      anon_sym_charsetDecode,
      anon_sym_dateFormat,
      anon_sym_urlQueryParam,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_toDate,
      anon_sym_nth,
      anon_sym_replace,
      anon_sym_replaceRegex,
      anon_sym_split,
      sym_comment,
  [4279] = 2,
    ACTIONS(300), 2,
      sym__eof,
      anon_sym_LF,
    ACTIONS(302), 35,
      anon_sym_redact,
      anon_sym_location,
      anon_sym_xpath,
      anon_sym_jsonpath,
      anon_sym_regex,
      anon_sym_base64Decode,
      anon_sym_base64Encode,
      anon_sym_base64UrlSafeDecode,
      anon_sym_base64UrlSafeEncode,
      anon_sym_first,
      anon_sym_last,
      anon_sym_toFloat,
      anon_sym_toHex,
      anon_sym_toString,
      anon_sym_utf8Decode,
      anon_sym_utf8Encode,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_toInt,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
      anon_sym_charsetDecode,
      anon_sym_dateFormat,
      anon_sym_urlQueryParam,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_toDate,
      anon_sym_nth,
      anon_sym_replace,
      anon_sym_replaceRegex,
      anon_sym_split,
      sym_comment,
  [4321] = 2,
    ACTIONS(296), 2,
      sym__eof,
      anon_sym_LF,
    ACTIONS(298), 35,
      anon_sym_redact,
      anon_sym_location,
      anon_sym_xpath,
      anon_sym_jsonpath,
      anon_sym_regex,
      anon_sym_base64Decode,
      anon_sym_base64Encode,
      anon_sym_base64UrlSafeDecode,
      anon_sym_base64UrlSafeEncode,
      anon_sym_first,
      anon_sym_last,
      anon_sym_toFloat,
      anon_sym_toHex,
      anon_sym_toString,
      anon_sym_utf8Decode,
      anon_sym_utf8Encode,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_toInt,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
      anon_sym_charsetDecode,
      anon_sym_dateFormat,
      anon_sym_urlQueryParam,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_toDate,
      anon_sym_nth,
      anon_sym_replace,
      anon_sym_replaceRegex,
      anon_sym_split,
      sym_comment,
  [4363] = 2,
    ACTIONS(292), 2,
      sym__eof,
      anon_sym_LF,
    ACTIONS(294), 35,
      anon_sym_redact,
      anon_sym_location,
      anon_sym_xpath,
      anon_sym_jsonpath,
      anon_sym_regex,
      anon_sym_base64Decode,
      anon_sym_base64Encode,
      anon_sym_base64UrlSafeDecode,
      anon_sym_base64UrlSafeEncode,
      anon_sym_first,
      anon_sym_last,
      anon_sym_toFloat,
      anon_sym_toHex,
      anon_sym_toString,
      anon_sym_utf8Decode,
      anon_sym_utf8Encode,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_toInt,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
      anon_sym_charsetDecode,
      anon_sym_dateFormat,
      anon_sym_urlQueryParam,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_toDate,
      anon_sym_nth,
      anon_sym_replace,
      anon_sym_replaceRegex,
      anon_sym_split,
      sym_comment,
  [4405] = 2,
    ACTIONS(288), 2,
      sym__eof,
      anon_sym_LF,
    ACTIONS(290), 35,
      anon_sym_redact,
      anon_sym_location,
      anon_sym_xpath,
      anon_sym_jsonpath,
      anon_sym_regex,
      anon_sym_base64Decode,
      anon_sym_base64Encode,
      anon_sym_base64UrlSafeDecode,
      anon_sym_base64UrlSafeEncode,
      anon_sym_first,
      anon_sym_last,
      anon_sym_toFloat,
      anon_sym_toHex,
      anon_sym_toString,
      anon_sym_utf8Decode,
      anon_sym_utf8Encode,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_toInt,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
      anon_sym_charsetDecode,
      anon_sym_dateFormat,
      anon_sym_urlQueryParam,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_toDate,
      anon_sym_nth,
      anon_sym_replace,
      anon_sym_replaceRegex,
      anon_sym_split,
      sym_comment,
  [4447] = 3,
    ACTIONS(142), 1,
      sym_comment,
    ACTIONS(676), 1,
      anon_sym_replace,
    ACTIONS(674), 34,
      anon_sym_location,
      anon_sym_EQ,
      anon_sym_xpath,
      anon_sym_jsonpath,
      anon_sym_regex,
      anon_sym_RBRACE_RBRACE,
      anon_sym_base64Decode,
      anon_sym_base64Encode,
      anon_sym_base64UrlSafeDecode,
      anon_sym_base64UrlSafeEncode,
      anon_sym_first,
      anon_sym_last,
      anon_sym_toFloat,
      anon_sym_toHex,
      anon_sym_toString,
      anon_sym_utf8Decode,
      anon_sym_utf8Encode,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_toInt,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
      anon_sym_charsetDecode,
      anon_sym_dateFormat,
      anon_sym_urlQueryParam,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_toDate,
      anon_sym_nth,
      anon_sym_replaceRegex,
      anon_sym_split,
  [4490] = 9,
    ACTIONS(7), 1,
      anon_sym_LF,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(678), 1,
      ts_builtin_sym_end,
    STATE(140), 1,
      sym_response,
    STATE(146), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(148), 1,
      sym__comment_or_new_line,
    STATE(383), 1,
      sym_version,
    ACTIONS(682), 6,
      anon_sym_HTTP_SLASH1_DOT0,
      anon_sym_HTTP_SLASH1_DOT1,
      anon_sym_HTTP_SLASH2,
      anon_sym_HTTP_SLASH3,
      anon_sym_HTTP_SLASH_STAR,
      anon_sym_HTTP,
    ACTIONS(680), 17,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
  [4539] = 9,
    ACTIONS(7), 1,
      anon_sym_LF,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(684), 1,
      ts_builtin_sym_end,
    STATE(143), 1,
      sym_response,
    STATE(146), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(151), 1,
      sym__comment_or_new_line,
    STATE(383), 1,
      sym_version,
    ACTIONS(682), 6,
      anon_sym_HTTP_SLASH1_DOT0,
      anon_sym_HTTP_SLASH1_DOT1,
      anon_sym_HTTP_SLASH2,
      anon_sym_HTTP_SLASH3,
      anon_sym_HTTP_SLASH_STAR,
      anon_sym_HTTP,
    ACTIONS(686), 17,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
  [4588] = 11,
    ACTIONS(142), 1,
      sym_comment,
    ACTIONS(688), 1,
      anon_sym_header,
    ACTIONS(690), 1,
      anon_sym_variable,
    ACTIONS(694), 1,
      anon_sym_cookie,
    ACTIONS(696), 1,
      anon_sym_xpath,
    ACTIONS(698), 1,
      anon_sym_jsonpath,
    ACTIONS(700), 1,
      anon_sym_regex,
    ACTIONS(702), 1,
      anon_sym_certificate,
    STATE(76), 1,
      sym_query,
    STATE(101), 8,
      sym_simple_query,
      sym_header_query,
      sym_cookie_query,
      sym_xpath_query,
      sym_jsonpath_query,
      sym_regex_query,
      sym_variable_query,
      sym_certificate_query,
    ACTIONS(692), 11,
      anon_sym_status,
      anon_sym_version,
      anon_sym_rawbytes,
      anon_sym_ip,
      anon_sym_redirects,
      anon_sym_url,
      anon_sym_body,
      anon_sym_duration,
      anon_sym_bytes,
      anon_sym_sha256,
      anon_sym_md5,
  [4639] = 9,
    ACTIONS(704), 1,
      ts_builtin_sym_end,
    ACTIONS(706), 1,
      anon_sym_LF,
    ACTIONS(712), 1,
      sym_comment,
    STATE(118), 1,
      sym_request,
    STATE(153), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(160), 1,
      sym_method,
    STATE(121), 2,
      sym_entry,
      aux_sym_hurl_file_repeat1,
    STATE(132), 2,
      sym__comment_or_new_line,
      aux_sym_hurl_file_repeat2,
    ACTIONS(709), 17,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
  [4685] = 5,
    ACTIONS(70), 1,
      ts_builtin_sym_end,
    ACTIONS(715), 1,
      anon_sym_LF,
    ACTIONS(717), 1,
      sym_comment,
    STATE(124), 1,
      aux_sym__comment_or_new_line_repeat1,
    ACTIONS(74), 23,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
  [4723] = 9,
    ACTIONS(7), 1,
      anon_sym_LF,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(719), 1,
      ts_builtin_sym_end,
    STATE(118), 1,
      sym_request,
    STATE(146), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(160), 1,
      sym_method,
    STATE(121), 2,
      sym_entry,
      aux_sym_hurl_file_repeat1,
    STATE(130), 2,
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
  [4769] = 5,
    ACTIONS(78), 1,
      ts_builtin_sym_end,
    ACTIONS(721), 1,
      anon_sym_LF,
    ACTIONS(724), 1,
      sym_comment,
    STATE(124), 1,
      aux_sym__comment_or_new_line_repeat1,
    ACTIONS(83), 23,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
  [4807] = 2,
    ACTIONS(144), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(146), 24,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
  [4838] = 2,
    ACTIONS(727), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(729), 24,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
  [4869] = 2,
    ACTIONS(232), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(234), 24,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
  [4900] = 2,
    ACTIONS(731), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(733), 24,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
  [4931] = 2,
    ACTIONS(200), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(202), 24,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
  [4962] = 8,
    ACTIONS(7), 1,
      anon_sym_LF,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(735), 1,
      ts_builtin_sym_end,
    STATE(119), 1,
      sym_request,
    STATE(146), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(160), 1,
      sym_method,
    STATE(134), 2,
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
  [5004] = 8,
    ACTIONS(7), 1,
      anon_sym_LF,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(719), 1,
      ts_builtin_sym_end,
    STATE(119), 1,
      sym_request,
    STATE(146), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(160), 1,
      sym_method,
    STATE(134), 2,
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
  [5046] = 7,
    ACTIONS(737), 1,
      anon_sym_LF,
    ACTIONS(739), 1,
      sym_comment,
    STATE(119), 1,
      sym_request,
    STATE(153), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(160), 1,
      sym_method,
    STATE(137), 2,
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
  [5085] = 13,
    ACTIONS(745), 1,
      anon_sym_BSLASH,
    ACTIONS(747), 1,
      anon_sym_DQUOTE,
    ACTIONS(749), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(753), 1,
      anon_sym_LBRACE_LBRACE2,
    ACTIONS(755), 1,
      sym__eof,
    STATE(254), 1,
      aux_sym_value_string_text_repeat1,
    STATE(418), 1,
      sym_variable_value,
    ACTIONS(741), 2,
      anon_sym_LF,
      sym_comment,
    ACTIONS(751), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(743), 3,
      anon_sym_null,
      sym_integer,
      sym_float,
    STATE(171), 3,
      sym_value_string_content,
      sym_template,
      aux_sym_value_string_repeat1,
    STATE(211), 3,
      sym_value_string_text,
      sym_value_string_escaped_char,
      aux_sym_value_string_content_repeat1,
    STATE(417), 3,
      sym_quoted_string,
      sym_value_string,
      sym_boolean,
  [5135] = 6,
    ACTIONS(757), 1,
      ts_builtin_sym_end,
    ACTIONS(759), 1,
      anon_sym_LF,
    ACTIONS(764), 1,
      sym_comment,
    STATE(146), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(134), 2,
      sym__comment_or_new_line,
      aux_sym_hurl_file_repeat2,
    ACTIONS(762), 17,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
  [5171] = 13,
    ACTIONS(142), 1,
      sym_comment,
    ACTIONS(182), 1,
      anon_sym_BQUOTE,
    ACTIONS(769), 1,
      anon_sym_file_COMMA,
    ACTIONS(771), 1,
      anon_sym_DQUOTE,
    ACTIONS(773), 1,
      anon_sym_base64_COMMA,
    ACTIONS(775), 1,
      anon_sym_hex_COMMA,
    ACTIONS(777), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(781), 1,
      anon_sym_LBRACE_LBRACE2,
    ACTIONS(783), 1,
      sym_integer,
    STATE(419), 1,
      sym_predicate_value,
    ACTIONS(767), 2,
      anon_sym_null,
      sym_float,
    ACTIONS(779), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(421), 8,
      sym_oneline_base64,
      sym_oneline_file,
      sym_oneline_hex,
      sym_quoted_string,
      sym_oneline_string,
      sym_multiline_string,
      sym_template,
      sym_boolean,
  [5220] = 13,
    ACTIONS(745), 1,
      anon_sym_BSLASH,
    ACTIONS(749), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(753), 1,
      anon_sym_LBRACE_LBRACE2,
    ACTIONS(789), 1,
      anon_sym_file_COMMA,
    ACTIONS(791), 1,
      sym__eof,
    STATE(254), 1,
      aux_sym_value_string_text_repeat1,
    STATE(455), 1,
      sym_file_value,
    ACTIONS(751), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(785), 2,
      anon_sym_LF,
      sym_comment,
    STATE(488), 2,
      sym_value_string,
      sym_boolean,
    ACTIONS(787), 3,
      anon_sym_null,
      sym_integer,
      sym_float,
    STATE(171), 3,
      sym_value_string_content,
      sym_template,
      aux_sym_value_string_repeat1,
    STATE(211), 3,
      sym_value_string_text,
      sym_value_string_escaped_char,
      aux_sym_value_string_content_repeat1,
  [5269] = 5,
    ACTIONS(793), 1,
      anon_sym_LF,
    ACTIONS(796), 1,
      sym_comment,
    STATE(153), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(137), 2,
      sym__comment_or_new_line,
      aux_sym_hurl_file_repeat2,
    ACTIONS(762), 17,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
  [5302] = 13,
    ACTIONS(142), 1,
      sym_comment,
    ACTIONS(182), 1,
      anon_sym_BQUOTE,
    ACTIONS(769), 1,
      anon_sym_file_COMMA,
    ACTIONS(771), 1,
      anon_sym_DQUOTE,
    ACTIONS(773), 1,
      anon_sym_base64_COMMA,
    ACTIONS(775), 1,
      anon_sym_hex_COMMA,
    ACTIONS(777), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(781), 1,
      anon_sym_LBRACE_LBRACE2,
    ACTIONS(783), 1,
      sym_integer,
    STATE(410), 1,
      sym_predicate_value,
    ACTIONS(767), 2,
      anon_sym_null,
      sym_float,
    ACTIONS(779), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(421), 8,
      sym_oneline_base64,
      sym_oneline_file,
      sym_oneline_hex,
      sym_quoted_string,
      sym_oneline_string,
      sym_multiline_string,
      sym_template,
      sym_boolean,
  [5351] = 13,
    ACTIONS(142), 1,
      sym_comment,
    ACTIONS(182), 1,
      anon_sym_BQUOTE,
    ACTIONS(769), 1,
      anon_sym_file_COMMA,
    ACTIONS(771), 1,
      anon_sym_DQUOTE,
    ACTIONS(773), 1,
      anon_sym_base64_COMMA,
    ACTIONS(775), 1,
      anon_sym_hex_COMMA,
    ACTIONS(777), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(781), 1,
      anon_sym_LBRACE_LBRACE2,
    ACTIONS(783), 1,
      sym_integer,
    STATE(408), 1,
      sym_predicate_value,
    ACTIONS(767), 2,
      anon_sym_null,
      sym_float,
    ACTIONS(779), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(421), 8,
      sym_oneline_base64,
      sym_oneline_file,
      sym_oneline_hex,
      sym_quoted_string,
      sym_oneline_string,
      sym_multiline_string,
      sym_template,
      sym_boolean,
  [5400] = 6,
    ACTIONS(7), 1,
      anon_sym_LF,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(684), 1,
      ts_builtin_sym_end,
    STATE(146), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(151), 1,
      sym__comment_or_new_line,
    ACTIONS(686), 17,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
  [5435] = 13,
    ACTIONS(142), 1,
      sym_comment,
    ACTIONS(182), 1,
      anon_sym_BQUOTE,
    ACTIONS(769), 1,
      anon_sym_file_COMMA,
    ACTIONS(771), 1,
      anon_sym_DQUOTE,
    ACTIONS(773), 1,
      anon_sym_base64_COMMA,
    ACTIONS(775), 1,
      anon_sym_hex_COMMA,
    ACTIONS(777), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(781), 1,
      anon_sym_LBRACE_LBRACE2,
    ACTIONS(783), 1,
      sym_integer,
    STATE(413), 1,
      sym_predicate_value,
    ACTIONS(767), 2,
      anon_sym_null,
      sym_float,
    ACTIONS(779), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(421), 8,
      sym_oneline_base64,
      sym_oneline_file,
      sym_oneline_hex,
      sym_quoted_string,
      sym_oneline_string,
      sym_multiline_string,
      sym_template,
      sym_boolean,
  [5484] = 13,
    ACTIONS(142), 1,
      sym_comment,
    ACTIONS(182), 1,
      anon_sym_BQUOTE,
    ACTIONS(769), 1,
      anon_sym_file_COMMA,
    ACTIONS(771), 1,
      anon_sym_DQUOTE,
    ACTIONS(773), 1,
      anon_sym_base64_COMMA,
    ACTIONS(775), 1,
      anon_sym_hex_COMMA,
    ACTIONS(777), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(781), 1,
      anon_sym_LBRACE_LBRACE2,
    ACTIONS(783), 1,
      sym_integer,
    STATE(412), 1,
      sym_predicate_value,
    ACTIONS(767), 2,
      anon_sym_null,
      sym_float,
    ACTIONS(779), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(421), 8,
      sym_oneline_base64,
      sym_oneline_file,
      sym_oneline_hex,
      sym_quoted_string,
      sym_oneline_string,
      sym_multiline_string,
      sym_template,
      sym_boolean,
  [5533] = 6,
    ACTIONS(7), 1,
      anon_sym_LF,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(799), 1,
      ts_builtin_sym_end,
    STATE(146), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(147), 1,
      sym__comment_or_new_line,
    ACTIONS(801), 17,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
  [5568] = 13,
    ACTIONS(142), 1,
      sym_comment,
    ACTIONS(182), 1,
      anon_sym_BQUOTE,
    ACTIONS(769), 1,
      anon_sym_file_COMMA,
    ACTIONS(771), 1,
      anon_sym_DQUOTE,
    ACTIONS(773), 1,
      anon_sym_base64_COMMA,
    ACTIONS(775), 1,
      anon_sym_hex_COMMA,
    ACTIONS(777), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(781), 1,
      anon_sym_LBRACE_LBRACE2,
    ACTIONS(783), 1,
      sym_integer,
    STATE(420), 1,
      sym_predicate_value,
    ACTIONS(767), 2,
      anon_sym_null,
      sym_float,
    ACTIONS(779), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(421), 8,
      sym_oneline_base64,
      sym_oneline_file,
      sym_oneline_hex,
      sym_quoted_string,
      sym_oneline_string,
      sym_multiline_string,
      sym_template,
      sym_boolean,
  [5617] = 5,
    ACTIONS(78), 1,
      ts_builtin_sym_end,
    ACTIONS(803), 1,
      anon_sym_LF,
    ACTIONS(806), 1,
      sym_comment,
    STATE(145), 1,
      aux_sym__comment_or_new_line_repeat1,
    ACTIONS(83), 17,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
  [5649] = 5,
    ACTIONS(70), 1,
      ts_builtin_sym_end,
    ACTIONS(809), 1,
      anon_sym_LF,
    ACTIONS(811), 1,
      sym_comment,
    STATE(145), 1,
      aux_sym__comment_or_new_line_repeat1,
    ACTIONS(74), 17,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
  [5681] = 2,
    ACTIONS(813), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(815), 18,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
  [5706] = 2,
    ACTIONS(684), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(686), 18,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
  [5731] = 11,
    ACTIONS(745), 1,
      anon_sym_BSLASH,
    ACTIONS(749), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(753), 1,
      anon_sym_LBRACE_LBRACE2,
    ACTIONS(791), 1,
      sym__eof,
    STATE(254), 1,
      aux_sym_value_string_text_repeat1,
    ACTIONS(751), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(785), 2,
      anon_sym_LF,
      sym_comment,
    STATE(488), 2,
      sym_value_string,
      sym_boolean,
    ACTIONS(787), 3,
      anon_sym_null,
      sym_integer,
      sym_float,
    STATE(171), 3,
      sym_value_string_content,
      sym_template,
      aux_sym_value_string_repeat1,
    STATE(211), 3,
      sym_value_string_text,
      sym_value_string_escaped_char,
      aux_sym_value_string_content_repeat1,
  [5774] = 2,
    ACTIONS(236), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(238), 18,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
  [5799] = 2,
    ACTIONS(799), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(801), 18,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
  [5824] = 2,
    ACTIONS(432), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(434), 18,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
  [5849] = 4,
    ACTIONS(817), 1,
      anon_sym_LF,
    ACTIONS(819), 1,
      sym_comment,
    STATE(154), 1,
      aux_sym__comment_or_new_line_repeat1,
    ACTIONS(74), 17,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
  [5878] = 4,
    ACTIONS(821), 1,
      anon_sym_LF,
    ACTIONS(824), 1,
      sym_comment,
    STATE(154), 1,
      aux_sym__comment_or_new_line_repeat1,
    ACTIONS(83), 17,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
  [5907] = 2,
    ACTIONS(731), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(733), 18,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
  [5932] = 2,
    ACTIONS(827), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(829), 18,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
  [5957] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(831), 1,
      anon_sym_LT,
    ACTIONS(833), 1,
      anon_sym_LT_QMARK,
    ACTIONS(835), 1,
      anon_sym_LT_SLASH,
    ACTIONS(837), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(839), 1,
      anon_sym_LBRACE_LBRACE2,
    STATE(159), 1,
      sym_xml_open_tag,
    STATE(263), 1,
      aux_sym_value_string_text_repeat1,
    STATE(301), 1,
      sym_xml_self_closing_tag,
    STATE(489), 1,
      sym_xml_close_tag,
    STATE(209), 3,
      sym_value_string_text,
      sym_template,
      aux_sym_xml_value_string_repeat1,
    STATE(169), 4,
      sym_xml_prolog_tag,
      sym_xml_tag,
      sym_xml_value_string,
      aux_sym_xml_tag_repeat1,
  [5999] = 11,
    ACTIONS(142), 1,
      sym_comment,
    ACTIONS(841), 1,
      anon_sym_null,
    ACTIONS(843), 1,
      anon_sym_LBRACE,
    ACTIONS(845), 1,
      anon_sym_DQUOTE,
    ACTIONS(847), 1,
      anon_sym_RBRACK,
    ACTIONS(849), 1,
      sym__json_number,
    ACTIONS(853), 1,
      anon_sym_LBRACE_LBRACE2,
    ACTIONS(855), 1,
      sym__json_array_start,
    STATE(364), 1,
      sym_json_value,
    ACTIONS(851), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(374), 6,
      sym_json_object,
      sym_json_array,
      sym_json_string,
      sym_json_number,
      sym_json_boolean,
      sym_template,
  [6039] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(831), 1,
      anon_sym_LT,
    ACTIONS(833), 1,
      anon_sym_LT_QMARK,
    ACTIONS(837), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(839), 1,
      anon_sym_LBRACE_LBRACE2,
    ACTIONS(857), 1,
      anon_sym_LT_SLASH,
    STATE(159), 1,
      sym_xml_open_tag,
    STATE(263), 1,
      aux_sym_value_string_text_repeat1,
    STATE(301), 1,
      sym_xml_self_closing_tag,
    STATE(313), 1,
      sym_xml_close_tag,
    STATE(209), 3,
      sym_value_string_text,
      sym_template,
      aux_sym_xml_value_string_repeat1,
    STATE(162), 4,
      sym_xml_prolog_tag,
      sym_xml_tag,
      sym_xml_value_string,
      aux_sym_xml_tag_repeat1,
  [6081] = 11,
    ACTIONS(745), 1,
      anon_sym_BSLASH,
    ACTIONS(749), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(753), 1,
      anon_sym_LBRACE_LBRACE2,
    ACTIONS(861), 1,
      sym__eof,
    STATE(70), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(254), 1,
      aux_sym_value_string_text_repeat1,
    STATE(298), 1,
      sym_value_string,
    ACTIONS(859), 2,
      anon_sym_LF,
      sym_comment,
    STATE(12), 2,
      sym__comment_or_new_line,
      sym__line_ending,
    STATE(171), 3,
      sym_value_string_content,
      sym_template,
      aux_sym_value_string_repeat1,
    STATE(211), 3,
      sym_value_string_text,
      sym_value_string_escaped_char,
      aux_sym_value_string_content_repeat1,
  [6121] = 14,
    ACTIONS(176), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(194), 1,
      sym__bracketed_key_start,
    ACTIONS(859), 1,
      sym_comment,
    ACTIONS(863), 1,
      anon_sym_LF,
    ACTIONS(865), 1,
      sym__eof,
    STATE(70), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(219), 1,
      sym__key_template,
    STATE(246), 1,
      sym_key_value,
    STATE(250), 1,
      aux_sym_query_string_params_section_repeat1,
    STATE(280), 1,
      aux_sym_key_string_content_repeat1,
    STATE(531), 1,
      sym_key_string,
    ACTIONS(180), 2,
      sym_key_string_text,
      sym_key_string_escaped_char,
    STATE(63), 2,
      sym__comment_or_new_line,
      sym__line_ending,
    STATE(218), 2,
      sym__bracketed_key_content,
      sym_key_string_content,
  [6167] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(831), 1,
      anon_sym_LT,
    ACTIONS(833), 1,
      anon_sym_LT_QMARK,
    ACTIONS(837), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(839), 1,
      anon_sym_LBRACE_LBRACE2,
    ACTIONS(857), 1,
      anon_sym_LT_SLASH,
    STATE(159), 1,
      sym_xml_open_tag,
    STATE(263), 1,
      aux_sym_value_string_text_repeat1,
    STATE(297), 1,
      sym_xml_close_tag,
    STATE(301), 1,
      sym_xml_self_closing_tag,
    STATE(209), 3,
      sym_value_string_text,
      sym_template,
      aux_sym_xml_value_string_repeat1,
    STATE(169), 4,
      sym_xml_prolog_tag,
      sym_xml_tag,
      sym_xml_value_string,
      aux_sym_xml_tag_repeat1,
  [6209] = 14,
    ACTIONS(176), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(194), 1,
      sym__bracketed_key_start,
    ACTIONS(859), 1,
      sym_comment,
    ACTIONS(863), 1,
      anon_sym_LF,
    ACTIONS(867), 1,
      sym__eof,
    STATE(70), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(219), 1,
      sym__key_template,
    STATE(256), 1,
      aux_sym_query_string_params_section_repeat1,
    STATE(257), 1,
      sym_key_value,
    STATE(280), 1,
      aux_sym_key_string_content_repeat1,
    STATE(531), 1,
      sym_key_string,
    ACTIONS(180), 2,
      sym_key_string_text,
      sym_key_string_escaped_char,
    STATE(57), 2,
      sym__comment_or_new_line,
      sym__line_ending,
    STATE(218), 2,
      sym__bracketed_key_content,
      sym_key_string_content,
  [6255] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(831), 1,
      anon_sym_LT,
    ACTIONS(833), 1,
      anon_sym_LT_QMARK,
    ACTIONS(835), 1,
      anon_sym_LT_SLASH,
    ACTIONS(837), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(839), 1,
      anon_sym_LBRACE_LBRACE2,
    STATE(159), 1,
      sym_xml_open_tag,
    STATE(263), 1,
      aux_sym_value_string_text_repeat1,
    STATE(301), 1,
      sym_xml_self_closing_tag,
    STATE(522), 1,
      sym_xml_close_tag,
    STATE(209), 3,
      sym_value_string_text,
      sym_template,
      aux_sym_xml_value_string_repeat1,
    STATE(157), 4,
      sym_xml_prolog_tag,
      sym_xml_tag,
      sym_xml_value_string,
      aux_sym_xml_tag_repeat1,
  [6297] = 14,
    ACTIONS(176), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(194), 1,
      sym__bracketed_key_start,
    ACTIONS(859), 1,
      sym_comment,
    ACTIONS(863), 1,
      anon_sym_LF,
    ACTIONS(869), 1,
      sym__eof,
    STATE(70), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(219), 1,
      sym__key_template,
    STATE(245), 1,
      aux_sym_query_string_params_section_repeat1,
    STATE(247), 1,
      sym_key_value,
    STATE(280), 1,
      aux_sym_key_string_content_repeat1,
    STATE(531), 1,
      sym_key_string,
    ACTIONS(180), 2,
      sym_key_string_text,
      sym_key_string_escaped_char,
    STATE(61), 2,
      sym__comment_or_new_line,
      sym__line_ending,
    STATE(218), 2,
      sym__bracketed_key_content,
      sym_key_string_content,
  [6343] = 11,
    ACTIONS(142), 1,
      sym_comment,
    ACTIONS(841), 1,
      anon_sym_null,
    ACTIONS(843), 1,
      anon_sym_LBRACE,
    ACTIONS(845), 1,
      anon_sym_DQUOTE,
    ACTIONS(849), 1,
      sym__json_number,
    ACTIONS(853), 1,
      anon_sym_LBRACE_LBRACE2,
    ACTIONS(855), 1,
      sym__json_array_start,
    ACTIONS(871), 1,
      anon_sym_RBRACK,
    STATE(377), 1,
      sym_json_value,
    ACTIONS(851), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(374), 6,
      sym_json_object,
      sym_json_array,
      sym_json_string,
      sym_json_number,
      sym_json_boolean,
      sym_template,
  [6383] = 10,
    ACTIONS(142), 1,
      sym_comment,
    ACTIONS(841), 1,
      anon_sym_null,
    ACTIONS(843), 1,
      anon_sym_LBRACE,
    ACTIONS(845), 1,
      anon_sym_DQUOTE,
    ACTIONS(849), 1,
      sym__json_number,
    ACTIONS(855), 1,
      sym__json_array_start,
    ACTIONS(873), 1,
      anon_sym_LBRACE_LBRACE2,
    STATE(474), 1,
      sym_json_value,
    ACTIONS(851), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(374), 6,
      sym_json_object,
      sym_json_array,
      sym_json_string,
      sym_json_number,
      sym_json_boolean,
      sym_template,
  [6420] = 10,
    ACTIONS(142), 1,
      sym_comment,
    ACTIONS(841), 1,
      anon_sym_null,
    ACTIONS(843), 1,
      anon_sym_LBRACE,
    ACTIONS(845), 1,
      anon_sym_DQUOTE,
    ACTIONS(849), 1,
      sym__json_number,
    ACTIONS(853), 1,
      anon_sym_LBRACE_LBRACE2,
    ACTIONS(855), 1,
      sym__json_array_start,
    STATE(482), 1,
      sym_json_value,
    ACTIONS(851), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(374), 6,
      sym_json_object,
      sym_json_array,
      sym_json_string,
      sym_json_number,
      sym_json_boolean,
      sym_template,
  [6457] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(875), 1,
      anon_sym_LT,
    ACTIONS(878), 1,
      anon_sym_LT_QMARK,
    ACTIONS(881), 1,
      anon_sym_LT_SLASH,
    ACTIONS(883), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(886), 1,
      anon_sym_LBRACE_LBRACE2,
    STATE(159), 1,
      sym_xml_open_tag,
    STATE(263), 1,
      aux_sym_value_string_text_repeat1,
    STATE(301), 1,
      sym_xml_self_closing_tag,
    STATE(209), 3,
      sym_value_string_text,
      sym_template,
      aux_sym_xml_value_string_repeat1,
    STATE(169), 4,
      sym_xml_prolog_tag,
      sym_xml_tag,
      sym_xml_value_string,
      aux_sym_xml_tag_repeat1,
  [6496] = 8,
    ACTIONS(891), 1,
      anon_sym_BSLASH,
    ACTIONS(894), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(897), 1,
      anon_sym_LBRACE_LBRACE2,
    ACTIONS(900), 1,
      sym__eof,
    STATE(254), 1,
      aux_sym_value_string_text_repeat1,
    ACTIONS(889), 2,
      anon_sym_LF,
      sym_comment,
    STATE(170), 3,
      sym_value_string_content,
      sym_template,
      aux_sym_value_string_repeat1,
    STATE(211), 3,
      sym_value_string_text,
      sym_value_string_escaped_char,
      aux_sym_value_string_content_repeat1,
  [6526] = 8,
    ACTIONS(745), 1,
      anon_sym_BSLASH,
    ACTIONS(749), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(753), 1,
      anon_sym_LBRACE_LBRACE2,
    ACTIONS(904), 1,
      sym__eof,
    STATE(254), 1,
      aux_sym_value_string_text_repeat1,
    ACTIONS(902), 2,
      anon_sym_LF,
      sym_comment,
    STATE(170), 3,
      sym_value_string_content,
      sym_template,
      aux_sym_value_string_repeat1,
    STATE(211), 3,
      sym_value_string_text,
      sym_value_string_escaped_char,
      aux_sym_value_string_content_repeat1,
  [6556] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(908), 1,
      anon_sym_u,
    ACTIONS(910), 1,
      anon_sym_POUND,
    ACTIONS(906), 10,
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
  [6578] = 8,
    ACTIONS(142), 1,
      sym_comment,
    ACTIONS(182), 1,
      anon_sym_BQUOTE,
    ACTIONS(771), 1,
      anon_sym_DQUOTE,
    ACTIONS(777), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(781), 1,
      anon_sym_LBRACE_LBRACE2,
    ACTIONS(912), 1,
      sym_integer,
    ACTIONS(914), 1,
      sym_float,
    STATE(405), 5,
      sym__predicate_string,
      sym_quoted_string,
      sym_oneline_string,
      sym_multiline_string,
      sym_template,
  [6607] = 7,
    ACTIONS(142), 1,
      sym_comment,
    ACTIONS(182), 1,
      anon_sym_BQUOTE,
    ACTIONS(771), 1,
      anon_sym_DQUOTE,
    ACTIONS(773), 1,
      anon_sym_base64_COMMA,
    ACTIONS(775), 1,
      anon_sym_hex_COMMA,
    ACTIONS(777), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(407), 6,
      sym__predicate_string,
      sym_oneline_base64,
      sym_oneline_hex,
      sym_quoted_string,
      sym_oneline_string,
      sym_multiline_string,
  [6634] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(745), 1,
      anon_sym_BSLASH,
    ACTIONS(749), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(753), 1,
      anon_sym_LBRACE_LBRACE2,
    STATE(254), 1,
      aux_sym_value_string_text_repeat1,
    STATE(307), 1,
      sym_template,
    STATE(445), 1,
      sym_value_string,
    STATE(171), 2,
      sym_value_string_content,
      aux_sym_value_string_repeat1,
    STATE(211), 3,
      sym_value_string_text,
      sym_value_string_escaped_char,
      aux_sym_value_string_content_repeat1,
  [6665] = 8,
    ACTIONS(142), 1,
      sym_comment,
    ACTIONS(182), 1,
      anon_sym_BQUOTE,
    ACTIONS(771), 1,
      anon_sym_DQUOTE,
    ACTIONS(777), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(781), 1,
      anon_sym_LBRACE_LBRACE2,
    ACTIONS(916), 1,
      sym_integer,
    ACTIONS(918), 1,
      sym_float,
    STATE(404), 5,
      sym__predicate_string,
      sym_quoted_string,
      sym_oneline_string,
      sym_multiline_string,
      sym_template,
  [6694] = 8,
    ACTIONS(142), 1,
      sym_comment,
    ACTIONS(182), 1,
      anon_sym_BQUOTE,
    ACTIONS(771), 1,
      anon_sym_DQUOTE,
    ACTIONS(777), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(781), 1,
      anon_sym_LBRACE_LBRACE2,
    ACTIONS(920), 1,
      sym_integer,
    ACTIONS(922), 1,
      sym_float,
    STATE(403), 5,
      sym__predicate_string,
      sym_quoted_string,
      sym_oneline_string,
      sym_multiline_string,
      sym_template,
  [6723] = 8,
    ACTIONS(142), 1,
      sym_comment,
    ACTIONS(182), 1,
      anon_sym_BQUOTE,
    ACTIONS(771), 1,
      anon_sym_DQUOTE,
    ACTIONS(777), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(781), 1,
      anon_sym_LBRACE_LBRACE2,
    ACTIONS(924), 1,
      sym_integer,
    ACTIONS(926), 1,
      sym_float,
    STATE(402), 5,
      sym__predicate_string,
      sym_quoted_string,
      sym_oneline_string,
      sym_multiline_string,
      sym_template,
  [6752] = 8,
    ACTIONS(142), 1,
      sym_comment,
    ACTIONS(182), 1,
      anon_sym_BQUOTE,
    ACTIONS(771), 1,
      anon_sym_DQUOTE,
    ACTIONS(777), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(781), 1,
      anon_sym_LBRACE_LBRACE2,
    ACTIONS(928), 1,
      sym_integer,
    ACTIONS(930), 1,
      sym_float,
    STATE(401), 5,
      sym__predicate_string,
      sym_quoted_string,
      sym_oneline_string,
      sym_multiline_string,
      sym_template,
  [6781] = 8,
    ACTIONS(142), 1,
      sym_comment,
    ACTIONS(182), 1,
      anon_sym_BQUOTE,
    ACTIONS(771), 1,
      anon_sym_DQUOTE,
    ACTIONS(777), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(781), 1,
      anon_sym_LBRACE_LBRACE2,
    ACTIONS(932), 1,
      sym_integer,
    ACTIONS(934), 1,
      sym_float,
    STATE(400), 5,
      sym__predicate_string,
      sym_quoted_string,
      sym_oneline_string,
      sym_multiline_string,
      sym_template,
  [6810] = 8,
    ACTIONS(142), 1,
      sym_comment,
    ACTIONS(182), 1,
      anon_sym_BQUOTE,
    ACTIONS(771), 1,
      anon_sym_DQUOTE,
    ACTIONS(777), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(781), 1,
      anon_sym_LBRACE_LBRACE2,
    ACTIONS(936), 1,
      sym_integer,
    ACTIONS(938), 1,
      sym_float,
    STATE(399), 5,
      sym__predicate_string,
      sym_quoted_string,
      sym_oneline_string,
      sym_multiline_string,
      sym_template,
  [6839] = 7,
    ACTIONS(142), 1,
      sym_comment,
    ACTIONS(182), 1,
      anon_sym_BQUOTE,
    ACTIONS(771), 1,
      anon_sym_DQUOTE,
    ACTIONS(773), 1,
      anon_sym_base64_COMMA,
    ACTIONS(775), 1,
      anon_sym_hex_COMMA,
    ACTIONS(777), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(406), 6,
      sym__predicate_string,
      sym_oneline_base64,
      sym_oneline_hex,
      sym_quoted_string,
      sym_oneline_string,
      sym_multiline_string,
  [6866] = 8,
    ACTIONS(142), 1,
      sym_comment,
    ACTIONS(182), 1,
      anon_sym_BQUOTE,
    ACTIONS(771), 1,
      anon_sym_DQUOTE,
    ACTIONS(777), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(781), 1,
      anon_sym_LBRACE_LBRACE2,
    ACTIONS(940), 1,
      sym_integer,
    ACTIONS(942), 1,
      sym_float,
    STATE(415), 5,
      sym__predicate_string,
      sym_quoted_string,
      sym_oneline_string,
      sym_multiline_string,
      sym_template,
  [6895] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(944), 1,
      anon_sym_LF,
    ACTIONS(946), 1,
      anon_sym_BSLASH,
    ACTIONS(948), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(950), 1,
      sym__multiline_string_text,
    ACTIONS(952), 1,
      anon_sym_LBRACE_LBRACE2,
    STATE(236), 2,
      sym_multiline_string_escaped_char,
      aux_sym_multiline_string_content_repeat1,
    STATE(204), 3,
      sym_multiline_string_content,
      sym_template,
      aux_sym_multiline_string_repeat1,
  [6923] = 7,
    ACTIONS(956), 1,
      anon_sym_BSLASH,
    ACTIONS(958), 1,
      sym_filename_text,
    ACTIONS(960), 1,
      anon_sym_LBRACE_LBRACE2,
    ACTIONS(962), 1,
      sym__eof,
    ACTIONS(954), 2,
      anon_sym_LF,
      sym_comment,
    STATE(225), 2,
      sym_filename_escaped_char,
      aux_sym_filename_content_repeat1,
    STATE(195), 3,
      sym_filename_content,
      sym_template,
      aux_sym_filename_repeat1,
  [6949] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(964), 1,
      anon_sym_BSLASH,
    ACTIONS(966), 1,
      anon_sym_DQUOTE,
    ACTIONS(968), 1,
      aux_sym_json_string_text_token1,
    ACTIONS(970), 1,
      anon_sym_LBRACE_LBRACE2,
    STATE(271), 1,
      aux_sym_json_string_text_repeat1,
    STATE(189), 2,
      sym_json_string_content,
      aux_sym_json_string_repeat1,
    STATE(322), 3,
      sym_json_string_text,
      sym_json_string_escaped_char,
      sym_template,
  [6977] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(972), 1,
      anon_sym_SEMI,
    ACTIONS(974), 1,
      anon_sym_BSLASH,
    ACTIONS(976), 1,
      sym_filename_text,
    ACTIONS(978), 1,
      anon_sym_LBRACE_LBRACE2,
    STATE(538), 1,
      sym_filename,
    STATE(261), 2,
      sym_filename_escaped_char,
      aux_sym_filename_content_repeat1,
    STATE(214), 3,
      sym_filename_content,
      sym_template,
      aux_sym_filename_repeat1,
  [7005] = 9,
    ACTIONS(142), 1,
      sym_comment,
    ACTIONS(176), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(194), 1,
      sym__bracketed_key_start,
    STATE(219), 1,
      sym__key_template,
    STATE(280), 1,
      aux_sym_key_string_content_repeat1,
    STATE(477), 1,
      sym_key_value,
    STATE(531), 1,
      sym_key_string,
    ACTIONS(180), 2,
      sym_key_string_text,
      sym_key_string_escaped_char,
    STATE(218), 2,
      sym__bracketed_key_content,
      sym_key_string_content,
  [7035] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(964), 1,
      anon_sym_BSLASH,
    ACTIONS(968), 1,
      aux_sym_json_string_text_token1,
    ACTIONS(970), 1,
      anon_sym_LBRACE_LBRACE2,
    ACTIONS(980), 1,
      anon_sym_DQUOTE,
    STATE(271), 1,
      aux_sym_json_string_text_repeat1,
    STATE(199), 2,
      sym_json_string_content,
      aux_sym_json_string_repeat1,
    STATE(322), 3,
      sym_json_string_text,
      sym_json_string_escaped_char,
      sym_template,
  [7063] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(974), 1,
      anon_sym_BSLASH,
    ACTIONS(976), 1,
      sym_filename_text,
    ACTIONS(978), 1,
      anon_sym_LBRACE_LBRACE2,
    ACTIONS(982), 1,
      anon_sym_SEMI,
    STATE(542), 1,
      sym_filename,
    STATE(261), 2,
      sym_filename_escaped_char,
      aux_sym_filename_content_repeat1,
    STATE(214), 3,
      sym_filename_content,
      sym_template,
      aux_sym_filename_repeat1,
  [7091] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(984), 1,
      anon_sym_BSLASH,
    ACTIONS(987), 1,
      anon_sym_DQUOTE,
    ACTIONS(989), 1,
      sym_quoted_string_text,
    ACTIONS(992), 1,
      anon_sym_LBRACE_LBRACE2,
    STATE(191), 3,
      sym_quoted_string_content,
      sym_template,
      aux_sym_quoted_string_repeat1,
    STATE(226), 3,
      sym_invalid_quoted_string_escaped_char,
      sym_quoted_string_escaped_char,
      aux_sym_quoted_string_content_repeat1,
  [7117] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(995), 1,
      anon_sym_BQUOTE,
    ACTIONS(997), 1,
      aux_sym_oneline_string_text_token1,
    ACTIONS(1000), 1,
      anon_sym_LBRACE2,
    ACTIONS(1003), 1,
      sym_oneline_string_escaped_char,
    ACTIONS(1006), 1,
      anon_sym_LBRACE_LBRACE2,
    STATE(235), 2,
      sym_oneline_string_text,
      aux_sym_oneline_string_content_repeat1,
    STATE(192), 3,
      sym_oneline_string_content,
      sym_template,
      aux_sym_oneline_string_repeat1,
  [7145] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1009), 1,
      anon_sym_BQUOTE,
    ACTIONS(1011), 1,
      aux_sym_oneline_string_text_token1,
    ACTIONS(1013), 1,
      anon_sym_LBRACE2,
    ACTIONS(1015), 1,
      sym_oneline_string_escaped_char,
    ACTIONS(1017), 1,
      anon_sym_LBRACE_LBRACE2,
    STATE(235), 2,
      sym_oneline_string_text,
      aux_sym_oneline_string_content_repeat1,
    STATE(192), 3,
      sym_oneline_string_content,
      sym_template,
      aux_sym_oneline_string_repeat1,
  [7173] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1019), 1,
      anon_sym_BSLASH,
    ACTIONS(1021), 1,
      anon_sym_DQUOTE,
    ACTIONS(1023), 1,
      sym_quoted_string_text,
    ACTIONS(1025), 1,
      anon_sym_LBRACE_LBRACE2,
    STATE(191), 3,
      sym_quoted_string_content,
      sym_template,
      aux_sym_quoted_string_repeat1,
    STATE(226), 3,
      sym_invalid_quoted_string_escaped_char,
      sym_quoted_string_escaped_char,
      aux_sym_quoted_string_content_repeat1,
  [7199] = 7,
    ACTIONS(1029), 1,
      anon_sym_BSLASH,
    ACTIONS(1032), 1,
      sym_filename_text,
    ACTIONS(1035), 1,
      anon_sym_LBRACE_LBRACE2,
    ACTIONS(1038), 1,
      sym__eof,
    ACTIONS(1027), 2,
      anon_sym_LF,
      sym_comment,
    STATE(225), 2,
      sym_filename_escaped_char,
      aux_sym_filename_content_repeat1,
    STATE(195), 3,
      sym_filename_content,
      sym_template,
      aux_sym_filename_repeat1,
  [7225] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(946), 1,
      anon_sym_BSLASH,
    ACTIONS(950), 1,
      sym__multiline_string_text,
    ACTIONS(952), 1,
      anon_sym_LBRACE_LBRACE2,
    ACTIONS(1040), 1,
      anon_sym_LF,
    ACTIONS(1042), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(236), 2,
      sym_multiline_string_escaped_char,
      aux_sym_multiline_string_content_repeat1,
    STATE(197), 3,
      sym_multiline_string_content,
      sym_template,
      aux_sym_multiline_string_repeat1,
  [7253] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1047), 1,
      anon_sym_BSLASH,
    ACTIONS(1050), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(1052), 1,
      anon_sym_LBRACE_LBRACE2,
    ACTIONS(1044), 2,
      anon_sym_LF,
      sym__multiline_string_text,
    STATE(236), 2,
      sym_multiline_string_escaped_char,
      aux_sym_multiline_string_content_repeat1,
    STATE(197), 3,
      sym_multiline_string_content,
      sym_template,
      aux_sym_multiline_string_repeat1,
  [7279] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1019), 1,
      anon_sym_BSLASH,
    ACTIONS(1023), 1,
      sym_quoted_string_text,
    ACTIONS(1025), 1,
      anon_sym_LBRACE_LBRACE2,
    ACTIONS(1055), 1,
      anon_sym_DQUOTE,
    STATE(194), 3,
      sym_quoted_string_content,
      sym_template,
      aux_sym_quoted_string_repeat1,
    STATE(226), 3,
      sym_invalid_quoted_string_escaped_char,
      sym_quoted_string_escaped_char,
      aux_sym_quoted_string_content_repeat1,
  [7305] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1057), 1,
      anon_sym_BSLASH,
    ACTIONS(1060), 1,
      anon_sym_DQUOTE,
    ACTIONS(1062), 1,
      aux_sym_json_string_text_token1,
    ACTIONS(1065), 1,
      anon_sym_LBRACE_LBRACE2,
    STATE(271), 1,
      aux_sym_json_string_text_repeat1,
    STATE(199), 2,
      sym_json_string_content,
      aux_sym_json_string_repeat1,
    STATE(322), 3,
      sym_json_string_text,
      sym_json_string_escaped_char,
      sym_template,
  [7333] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(964), 1,
      anon_sym_BSLASH,
    ACTIONS(968), 1,
      aux_sym_json_string_text_token1,
    ACTIONS(970), 1,
      anon_sym_LBRACE_LBRACE2,
    ACTIONS(1068), 1,
      anon_sym_DQUOTE,
    STATE(271), 1,
      aux_sym_json_string_text_repeat1,
    STATE(203), 2,
      sym_json_string_content,
      aux_sym_json_string_repeat1,
    STATE(322), 3,
      sym_json_string_text,
      sym_json_string_escaped_char,
      sym_template,
  [7361] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1011), 1,
      aux_sym_oneline_string_text_token1,
    ACTIONS(1013), 1,
      anon_sym_LBRACE2,
    ACTIONS(1015), 1,
      sym_oneline_string_escaped_char,
    ACTIONS(1017), 1,
      anon_sym_LBRACE_LBRACE2,
    ACTIONS(1070), 1,
      anon_sym_BQUOTE,
    STATE(235), 2,
      sym_oneline_string_text,
      aux_sym_oneline_string_content_repeat1,
    STATE(193), 3,
      sym_oneline_string_content,
      sym_template,
      aux_sym_oneline_string_repeat1,
  [7389] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(946), 1,
      anon_sym_BSLASH,
    ACTIONS(950), 1,
      sym__multiline_string_text,
    ACTIONS(952), 1,
      anon_sym_LBRACE_LBRACE2,
    ACTIONS(1072), 1,
      anon_sym_LF,
    ACTIONS(1074), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(236), 2,
      sym_multiline_string_escaped_char,
      aux_sym_multiline_string_content_repeat1,
    STATE(196), 3,
      sym_multiline_string_content,
      sym_template,
      aux_sym_multiline_string_repeat1,
  [7417] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(964), 1,
      anon_sym_BSLASH,
    ACTIONS(968), 1,
      aux_sym_json_string_text_token1,
    ACTIONS(970), 1,
      anon_sym_LBRACE_LBRACE2,
    ACTIONS(1076), 1,
      anon_sym_DQUOTE,
    STATE(271), 1,
      aux_sym_json_string_text_repeat1,
    STATE(199), 2,
      sym_json_string_content,
      aux_sym_json_string_repeat1,
    STATE(322), 3,
      sym_json_string_text,
      sym_json_string_escaped_char,
      sym_template,
  [7445] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(946), 1,
      anon_sym_BSLASH,
    ACTIONS(950), 1,
      sym__multiline_string_text,
    ACTIONS(952), 1,
      anon_sym_LBRACE_LBRACE2,
    ACTIONS(1072), 1,
      anon_sym_LF,
    ACTIONS(1074), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(236), 2,
      sym_multiline_string_escaped_char,
      aux_sym_multiline_string_content_repeat1,
    STATE(197), 3,
      sym_multiline_string_content,
      sym_template,
      aux_sym_multiline_string_repeat1,
  [7473] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1019), 1,
      anon_sym_BSLASH,
    ACTIONS(1023), 1,
      sym_quoted_string_text,
    ACTIONS(1025), 1,
      anon_sym_LBRACE_LBRACE2,
    ACTIONS(1078), 1,
      anon_sym_DQUOTE,
    STATE(206), 3,
      sym_quoted_string_content,
      sym_template,
      aux_sym_quoted_string_repeat1,
    STATE(226), 3,
      sym_invalid_quoted_string_escaped_char,
      sym_quoted_string_escaped_char,
      aux_sym_quoted_string_content_repeat1,
  [7499] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1019), 1,
      anon_sym_BSLASH,
    ACTIONS(1023), 1,
      sym_quoted_string_text,
    ACTIONS(1025), 1,
      anon_sym_LBRACE_LBRACE2,
    ACTIONS(1080), 1,
      anon_sym_DQUOTE,
    STATE(191), 3,
      sym_quoted_string_content,
      sym_template,
      aux_sym_quoted_string_repeat1,
    STATE(226), 3,
      sym_invalid_quoted_string_escaped_char,
      sym_quoted_string_escaped_char,
      aux_sym_quoted_string_content_repeat1,
  [7525] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1084), 1,
      anon_sym_u,
    ACTIONS(1086), 1,
      aux_sym_invalid_quoted_string_escaped_char_token1,
    ACTIONS(1082), 7,
      anon_sym_BSLASH,
      anon_sym_b,
      anon_sym_f,
      anon_sym_n,
      anon_sym_r,
      anon_sym_t,
      anon_sym_DQUOTE,
  [7544] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1027), 1,
      anon_sym_SEMI,
    ACTIONS(1088), 1,
      anon_sym_BSLASH,
    ACTIONS(1091), 1,
      sym_filename_text,
    ACTIONS(1094), 1,
      anon_sym_LBRACE_LBRACE2,
    STATE(261), 2,
      sym_filename_escaped_char,
      aux_sym_filename_content_repeat1,
    STATE(208), 3,
      sym_filename_content,
      sym_template,
      aux_sym_filename_repeat1,
  [7569] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(837), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(839), 1,
      anon_sym_LBRACE_LBRACE2,
    STATE(263), 1,
      aux_sym_value_string_text_repeat1,
    ACTIONS(1097), 3,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
    STATE(212), 3,
      sym_value_string_text,
      sym_template,
      aux_sym_xml_value_string_repeat1,
  [7592] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(956), 1,
      anon_sym_BSLASH,
    ACTIONS(958), 1,
      sym_filename_text,
    ACTIONS(960), 1,
      anon_sym_LBRACE_LBRACE2,
    STATE(454), 1,
      sym_filename,
    STATE(225), 2,
      sym_filename_escaped_char,
      aux_sym_filename_content_repeat1,
    STATE(185), 3,
      sym_filename_content,
      sym_template,
      aux_sym_filename_repeat1,
  [7617] = 6,
    ACTIONS(745), 1,
      anon_sym_BSLASH,
    ACTIONS(749), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(1101), 1,
      sym__eof,
    STATE(254), 1,
      aux_sym_value_string_text_repeat1,
    ACTIONS(1099), 3,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE2,
      sym_comment,
    STATE(215), 3,
      sym_value_string_text,
      sym_value_string_escaped_char,
      aux_sym_value_string_content_repeat1,
  [7640] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1105), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(1108), 1,
      anon_sym_LBRACE_LBRACE2,
    STATE(263), 1,
      aux_sym_value_string_text_repeat1,
    ACTIONS(1103), 3,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
    STATE(212), 3,
      sym_value_string_text,
      sym_template,
      aux_sym_xml_value_string_repeat1,
  [7663] = 6,
    ACTIONS(142), 1,
      sym_comment,
    ACTIONS(182), 1,
      anon_sym_BQUOTE,
    ACTIONS(771), 1,
      anon_sym_DQUOTE,
    ACTIONS(777), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(1111), 1,
      anon_sym_SLASH,
    STATE(409), 5,
      sym__predicate_string,
      sym_quoted_string,
      sym_oneline_string,
      sym_multiline_string,
      sym_regex,
  [7686] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(954), 1,
      anon_sym_SEMI,
    ACTIONS(974), 1,
      anon_sym_BSLASH,
    ACTIONS(976), 1,
      sym_filename_text,
    ACTIONS(978), 1,
      anon_sym_LBRACE_LBRACE2,
    STATE(261), 2,
      sym_filename_escaped_char,
      aux_sym_filename_content_repeat1,
    STATE(208), 3,
      sym_filename_content,
      sym_template,
      aux_sym_filename_repeat1,
  [7711] = 6,
    ACTIONS(1115), 1,
      anon_sym_BSLASH,
    ACTIONS(1118), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(1121), 1,
      sym__eof,
    STATE(254), 1,
      aux_sym_value_string_text_repeat1,
    ACTIONS(1113), 3,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE2,
      sym_comment,
    STATE(215), 3,
      sym_value_string_text,
      sym_value_string_escaped_char,
      aux_sym_value_string_content_repeat1,
  [7734] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1125), 1,
      anon_sym_u,
    ACTIONS(1127), 1,
      anon_sym_POUND,
    ACTIONS(1123), 6,
      anon_sym_BSLASH,
      anon_sym_b,
      anon_sym_f,
      anon_sym_n,
      anon_sym_r,
      anon_sym_t,
  [7752] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1129), 1,
      anon_sym_LF,
    STATE(585), 1,
      sym_multiline_string_type,
    ACTIONS(1131), 6,
      anon_sym_base64,
      anon_sym_hex,
      anon_sym_json,
      anon_sym_xml,
      anon_sym_graphql,
      aux_sym_multiline_string_type_token1,
  [7770] = 7,
    ACTIONS(142), 1,
      sym_comment,
    ACTIONS(176), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1133), 1,
      anon_sym_COLON,
    STATE(280), 1,
      aux_sym_key_string_content_repeat1,
    STATE(339), 1,
      sym__key_template,
    ACTIONS(180), 2,
      sym_key_string_text,
      sym_key_string_escaped_char,
    STATE(221), 2,
      sym_key_string_content,
      aux_sym_key_string_repeat1,
  [7794] = 7,
    ACTIONS(142), 1,
      sym_comment,
    ACTIONS(176), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1135), 1,
      anon_sym_COLON,
    STATE(280), 1,
      aux_sym_key_string_content_repeat1,
    STATE(339), 1,
      sym__key_template,
    ACTIONS(180), 2,
      sym_key_string_text,
      sym_key_string_escaped_char,
    STATE(224), 2,
      sym_key_string_content,
      aux_sym_key_string_repeat1,
  [7818] = 7,
    ACTIONS(142), 1,
      sym_comment,
    ACTIONS(1137), 1,
      anon_sym_COLON,
    ACTIONS(1139), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(280), 1,
      aux_sym_key_string_content_repeat1,
    STATE(339), 1,
      sym__key_template,
    ACTIONS(1142), 2,
      sym_key_string_text,
      sym_key_string_escaped_char,
    STATE(220), 2,
      sym_key_string_content,
      aux_sym_key_string_repeat1,
  [7842] = 7,
    ACTIONS(142), 1,
      sym_comment,
    ACTIONS(176), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1145), 1,
      anon_sym_COLON,
    STATE(280), 1,
      aux_sym_key_string_content_repeat1,
    STATE(339), 1,
      sym__key_template,
    ACTIONS(180), 2,
      sym_key_string_text,
      sym_key_string_escaped_char,
    STATE(220), 2,
      sym_key_string_content,
      aux_sym_key_string_repeat1,
  [7866] = 3,
    ACTIONS(142), 1,
      sym_comment,
    ACTIONS(1149), 1,
      anon_sym_u,
    ACTIONS(1147), 7,
      anon_sym_BSLASH,
      anon_sym_b,
      anon_sym_f,
      anon_sym_n,
      anon_sym_r,
      anon_sym_t,
      anon_sym_DQUOTE,
  [7882] = 3,
    ACTIONS(142), 1,
      sym_comment,
    ACTIONS(1153), 1,
      anon_sym_u,
    ACTIONS(1151), 7,
      anon_sym_BSLASH,
      anon_sym_b,
      anon_sym_f,
      anon_sym_n,
      anon_sym_r,
      anon_sym_t,
      anon_sym_BQUOTE,
  [7898] = 7,
    ACTIONS(142), 1,
      sym_comment,
    ACTIONS(176), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1155), 1,
      anon_sym_COLON,
    STATE(280), 1,
      aux_sym_key_string_content_repeat1,
    STATE(339), 1,
      sym__key_template,
    ACTIONS(180), 2,
      sym_key_string_text,
      sym_key_string_escaped_char,
    STATE(220), 2,
      sym_key_string_content,
      aux_sym_key_string_repeat1,
  [7922] = 3,
    ACTIONS(1159), 1,
      sym__eof,
    STATE(227), 2,
      sym_filename_escaped_char,
      aux_sym_filename_content_repeat1,
    ACTIONS(1157), 5,
      anon_sym_LF,
      anon_sym_BSLASH,
      sym_filename_text,
      anon_sym_LBRACE_LBRACE2,
      sym_comment,
  [7937] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1019), 1,
      anon_sym_BSLASH,
    ACTIONS(1163), 1,
      sym_quoted_string_text,
    ACTIONS(1161), 2,
      anon_sym_DQUOTE,
      anon_sym_LBRACE_LBRACE2,
    STATE(231), 3,
      sym_invalid_quoted_string_escaped_char,
      sym_quoted_string_escaped_char,
      aux_sym_quoted_string_content_repeat1,
  [7956] = 5,
    ACTIONS(1167), 1,
      anon_sym_BSLASH,
    ACTIONS(1170), 1,
      sym_filename_text,
    ACTIONS(1173), 1,
      sym__eof,
    STATE(227), 2,
      sym_filename_escaped_char,
      aux_sym_filename_content_repeat1,
    ACTIONS(1165), 3,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE2,
      sym_comment,
  [7975] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1178), 1,
      anon_sym_BSLASH,
    ACTIONS(1175), 2,
      anon_sym_LF,
      sym__multiline_string_text,
    ACTIONS(1181), 2,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE_LBRACE2,
    STATE(228), 2,
      sym_multiline_string_escaped_char,
      aux_sym_multiline_string_content_repeat1,
  [7994] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(190), 1,
      anon_sym_LBRACE_LBRACE2,
    ACTIONS(1183), 1,
      sym_filename_password_text,
    ACTIONS(1185), 1,
      anon_sym_BSLASH,
    STATE(251), 2,
      sym_filename_password_escaped_char,
      aux_sym_filename_password_repeat1,
    STATE(453), 2,
      sym_filename_password,
      sym_template,
  [8015] = 7,
    ACTIONS(142), 1,
      sym_comment,
    ACTIONS(168), 1,
      anon_sym_LT,
    ACTIONS(1187), 1,
      anon_sym_LT_QMARK,
    STATE(164), 1,
      sym_xml_open_tag,
    STATE(422), 1,
      sym_xml_self_closing_tag,
    STATE(521), 1,
      sym_xml_tag,
    STATE(334), 2,
      sym_xml_prolog_tag,
      aux_sym_xml_repeat1,
  [8038] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1189), 1,
      anon_sym_BSLASH,
    ACTIONS(1194), 1,
      sym_quoted_string_text,
    ACTIONS(1192), 2,
      anon_sym_DQUOTE,
      anon_sym_LBRACE_LBRACE2,
    STATE(231), 3,
      sym_invalid_quoted_string_escaped_char,
      sym_quoted_string_escaped_char,
      aux_sym_quoted_string_content_repeat1,
  [8057] = 4,
    ACTIONS(1197), 1,
      anon_sym_LF,
    ACTIONS(1200), 1,
      sym_comment,
    STATE(232), 1,
      aux_sym__comment_or_new_line_repeat1,
    ACTIONS(78), 5,
      sym__eof,
      sym__bracketed_key_start,
      anon_sym_LBRACE_LBRACE,
      sym_key_string_text,
      sym_key_string_escaped_char,
  [8074] = 8,
    ACTIONS(142), 1,
      sym_comment,
    ACTIONS(845), 1,
      anon_sym_DQUOTE,
    ACTIONS(1203), 1,
      anon_sym_RBRACE,
    ACTIONS(1205), 1,
      anon_sym_COMMA,
    STATE(355), 1,
      sym_json_key_value,
    STATE(391), 1,
      aux_sym_json_object_repeat1,
    STATE(534), 1,
      sym_json_key_string,
    STATE(560), 1,
      sym_json_string,
  [8099] = 4,
    ACTIONS(1207), 1,
      anon_sym_LF,
    ACTIONS(1209), 1,
      sym_comment,
    STATE(232), 1,
      aux_sym__comment_or_new_line_repeat1,
    ACTIONS(70), 5,
      sym__eof,
      sym__bracketed_key_start,
      anon_sym_LBRACE_LBRACE,
      sym_key_string_text,
      sym_key_string_escaped_char,
  [8116] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1213), 1,
      aux_sym_oneline_string_text_token1,
    STATE(239), 2,
      sym_oneline_string_text,
      aux_sym_oneline_string_content_repeat1,
    ACTIONS(1211), 4,
      anon_sym_BQUOTE,
      anon_sym_LBRACE2,
      sym_oneline_string_escaped_char,
      anon_sym_LBRACE_LBRACE2,
  [8133] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(228), 2,
      sym_multiline_string_escaped_char,
      aux_sym_multiline_string_content_repeat1,
    ACTIONS(1215), 5,
      anon_sym_LF,
      anon_sym_BSLASH,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__multiline_string_text,
      anon_sym_LBRACE_LBRACE2,
  [8148] = 8,
    ACTIONS(142), 1,
      sym_comment,
    ACTIONS(845), 1,
      anon_sym_DQUOTE,
    ACTIONS(1205), 1,
      anon_sym_COMMA,
    ACTIONS(1217), 1,
      anon_sym_RBRACE,
    STATE(389), 1,
      sym_json_key_value,
    STATE(392), 1,
      aux_sym_json_object_repeat1,
    STATE(534), 1,
      sym_json_key_string,
    STATE(560), 1,
      sym_json_string,
  [8173] = 4,
    ACTIONS(1223), 1,
      sym_comment,
    STATE(432), 1,
      sym_duration_unit,
    ACTIONS(1219), 2,
      sym__eof,
      anon_sym_LF,
    ACTIONS(1221), 4,
      anon_sym_ms,
      anon_sym_s,
      anon_sym_m,
      anon_sym_h,
  [8190] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1227), 1,
      aux_sym_oneline_string_text_token1,
    ACTIONS(1230), 1,
      anon_sym_LBRACE2,
    ACTIONS(1233), 1,
      sym_oneline_string_escaped_char,
    ACTIONS(1225), 2,
      anon_sym_BQUOTE,
      anon_sym_LBRACE_LBRACE2,
    STATE(239), 2,
      sym_oneline_string_text,
      aux_sym_oneline_string_content_repeat1,
  [8211] = 3,
    ACTIONS(142), 1,
      sym_comment,
    STATE(535), 1,
      sym_certificate_attribute,
    ACTIONS(1236), 5,
      anon_sym_Subject,
      anon_sym_Issuer,
      anon_sym_Start_DASHDate,
      anon_sym_Expire_DASHDate,
      anon_sym_Serial_DASHNumber,
  [8225] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1240), 1,
      aux_sym_value_string_text_token1,
    STATE(241), 1,
      aux_sym_value_string_text_repeat1,
    ACTIONS(1238), 4,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE_LBRACE2,
  [8241] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1243), 1,
      anon_sym_BSLASH,
    ACTIONS(1246), 1,
      sym_filename_text,
    ACTIONS(1165), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE_LBRACE2,
    STATE(242), 2,
      sym_filename_escaped_char,
      aux_sym_filename_content_repeat1,
  [8259] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1249), 1,
      anon_sym_BSLASH,
    ACTIONS(1251), 1,
      anon_sym_SLASH,
    ACTIONS(1253), 1,
      sym_regex_text,
    STATE(539), 1,
      sym_regex_content,
    STATE(315), 2,
      sym_regex_escaped_char,
      aux_sym_regex_content_repeat1,
  [8279] = 4,
    ACTIONS(1255), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(1258), 1,
      sym__eof,
    STATE(244), 1,
      aux_sym_value_string_text_repeat1,
    ACTIONS(1238), 4,
      anon_sym_LF,
      anon_sym_BSLASH,
      anon_sym_LBRACE_LBRACE2,
      sym_comment,
  [8295] = 6,
    ACTIONS(859), 1,
      sym_comment,
    ACTIONS(863), 1,
      anon_sym_LF,
    ACTIONS(1260), 1,
      sym__eof,
    STATE(70), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(253), 1,
      aux_sym_query_string_params_section_repeat1,
    STATE(59), 2,
      sym__comment_or_new_line,
      sym__line_ending,
  [8315] = 6,
    ACTIONS(859), 1,
      sym_comment,
    ACTIONS(863), 1,
      anon_sym_LF,
    ACTIONS(1262), 1,
      sym__eof,
    STATE(70), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(262), 1,
      aux_sym_query_string_params_section_repeat1,
    STATE(60), 2,
      sym__comment_or_new_line,
      sym__line_ending,
  [8335] = 6,
    ACTIONS(859), 1,
      sym_comment,
    ACTIONS(863), 1,
      anon_sym_LF,
    ACTIONS(1260), 1,
      sym__eof,
    STATE(70), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(258), 1,
      aux_sym_query_string_params_section_repeat1,
    STATE(59), 2,
      sym__comment_or_new_line,
      sym__line_ending,
  [8355] = 2,
    ACTIONS(1264), 2,
      sym__eof,
      anon_sym_LF,
    ACTIONS(1266), 5,
      anon_sym_ms,
      anon_sym_s,
      anon_sym_m,
      anon_sym_h,
      sym_comment,
  [8367] = 3,
    ACTIONS(142), 1,
      sym_comment,
    STATE(547), 1,
      sym_certificate_attribute,
    ACTIONS(1236), 5,
      anon_sym_Subject,
      anon_sym_Issuer,
      anon_sym_Start_DASHDate,
      anon_sym_Expire_DASHDate,
      anon_sym_Serial_DASHNumber,
  [8381] = 6,
    ACTIONS(859), 1,
      sym_comment,
    ACTIONS(863), 1,
      anon_sym_LF,
    ACTIONS(1262), 1,
      sym__eof,
    STATE(70), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(253), 1,
      aux_sym_query_string_params_section_repeat1,
    STATE(60), 2,
      sym__comment_or_new_line,
      sym__line_ending,
  [8401] = 5,
    ACTIONS(1185), 1,
      anon_sym_BSLASH,
    ACTIONS(1270), 1,
      sym_filename_password_text,
    ACTIONS(1272), 1,
      sym__eof,
    ACTIONS(1268), 2,
      anon_sym_LF,
      sym_comment,
    STATE(259), 2,
      sym_filename_password_escaped_char,
      aux_sym_filename_password_repeat1,
  [8419] = 4,
    ACTIONS(1274), 1,
      anon_sym_LF,
    ACTIONS(1277), 1,
      sym_comment,
    STATE(252), 1,
      aux_sym__comment_or_new_line_repeat1,
    ACTIONS(78), 4,
      sym__bracketed_key_start,
      anon_sym_LBRACE_LBRACE,
      sym_key_string_text,
      sym_key_string_escaped_char,
  [8435] = 6,
    ACTIONS(1280), 1,
      anon_sym_LF,
    ACTIONS(1283), 1,
      sym_comment,
    ACTIONS(1286), 1,
      sym__eof,
    STATE(253), 1,
      aux_sym_query_string_params_section_repeat1,
    STATE(255), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(188), 2,
      sym__comment_or_new_line,
      sym__line_ending,
  [8455] = 4,
    ACTIONS(1291), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(1293), 1,
      sym__eof,
    STATE(244), 1,
      aux_sym_value_string_text_repeat1,
    ACTIONS(1289), 4,
      anon_sym_LF,
      anon_sym_BSLASH,
      anon_sym_LBRACE_LBRACE2,
      sym_comment,
  [8471] = 4,
    ACTIONS(1295), 1,
      anon_sym_LF,
    ACTIONS(1297), 1,
      sym_comment,
    STATE(252), 1,
      aux_sym__comment_or_new_line_repeat1,
    ACTIONS(70), 4,
      sym__bracketed_key_start,
      anon_sym_LBRACE_LBRACE,
      sym_key_string_text,
      sym_key_string_escaped_char,
  [8487] = 6,
    ACTIONS(859), 1,
      sym_comment,
    ACTIONS(863), 1,
      anon_sym_LF,
    ACTIONS(1299), 1,
      sym__eof,
    STATE(70), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(253), 1,
      aux_sym_query_string_params_section_repeat1,
    STATE(62), 2,
      sym__comment_or_new_line,
      sym__line_ending,
  [8507] = 6,
    ACTIONS(859), 1,
      sym_comment,
    ACTIONS(863), 1,
      anon_sym_LF,
    ACTIONS(1299), 1,
      sym__eof,
    STATE(70), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(264), 1,
      aux_sym_query_string_params_section_repeat1,
    STATE(62), 2,
      sym__comment_or_new_line,
      sym__line_ending,
  [8527] = 6,
    ACTIONS(859), 1,
      sym_comment,
    ACTIONS(863), 1,
      anon_sym_LF,
    ACTIONS(1301), 1,
      sym__eof,
    STATE(70), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(253), 1,
      aux_sym_query_string_params_section_repeat1,
    STATE(55), 2,
      sym__comment_or_new_line,
      sym__line_ending,
  [8547] = 5,
    ACTIONS(1305), 1,
      sym_filename_password_text,
    ACTIONS(1308), 1,
      anon_sym_BSLASH,
    ACTIONS(1311), 1,
      sym__eof,
    ACTIONS(1303), 2,
      anon_sym_LF,
      sym_comment,
    STATE(259), 2,
      sym_filename_password_escaped_char,
      aux_sym_filename_password_repeat1,
  [8565] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1249), 1,
      anon_sym_BSLASH,
    ACTIONS(1253), 1,
      sym_regex_text,
    ACTIONS(1313), 1,
      anon_sym_SLASH,
    STATE(565), 1,
      sym_regex_content,
    STATE(315), 2,
      sym_regex_escaped_char,
      aux_sym_regex_content_repeat1,
  [8585] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(242), 2,
      sym_filename_escaped_char,
      aux_sym_filename_content_repeat1,
    ACTIONS(1157), 4,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      sym_filename_text,
      anon_sym_LBRACE_LBRACE2,
  [8599] = 6,
    ACTIONS(859), 1,
      sym_comment,
    ACTIONS(863), 1,
      anon_sym_LF,
    ACTIONS(1315), 1,
      sym__eof,
    STATE(70), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(253), 1,
      aux_sym_query_string_params_section_repeat1,
    STATE(58), 2,
      sym__comment_or_new_line,
      sym__line_ending,
  [8619] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1317), 1,
      aux_sym_value_string_text_token1,
    STATE(241), 1,
      aux_sym_value_string_text_repeat1,
    ACTIONS(1289), 4,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE_LBRACE2,
  [8635] = 6,
    ACTIONS(859), 1,
      sym_comment,
    ACTIONS(863), 1,
      anon_sym_LF,
    ACTIONS(1319), 1,
      sym__eof,
    STATE(70), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(253), 1,
      aux_sym_query_string_params_section_repeat1,
    STATE(56), 2,
      sym__comment_or_new_line,
      sym__line_ending,
  [8655] = 2,
    ACTIONS(248), 1,
      sym__eof,
    ACTIONS(250), 5,
      anon_sym_LF,
      anon_sym_BSLASH,
      aux_sym_value_string_text_token1,
      anon_sym_LBRACE_LBRACE2,
      sym_comment,
  [8666] = 5,
    ACTIONS(859), 1,
      sym_comment,
    ACTIONS(863), 1,
      anon_sym_LF,
    ACTIONS(1321), 1,
      sym__eof,
    STATE(70), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(72), 2,
      sym__comment_or_new_line,
      sym__line_ending,
  [8683] = 2,
    ACTIONS(1325), 1,
      sym__eof,
    ACTIONS(1323), 5,
      anon_sym_LF,
      anon_sym_BSLASH,
      aux_sym_value_string_text_token1,
      anon_sym_LBRACE_LBRACE2,
      sym_comment,
  [8694] = 2,
    ACTIONS(1329), 1,
      sym__eof,
    ACTIONS(1327), 5,
      anon_sym_LF,
      anon_sym_BSLASH,
      aux_sym_value_string_text_token1,
      anon_sym_LBRACE_LBRACE2,
      sym_comment,
  [8705] = 5,
    ACTIONS(554), 1,
      anon_sym_LF,
    ACTIONS(574), 1,
      sym_comment,
    ACTIONS(1331), 1,
      sym__eof,
    STATE(85), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(78), 2,
      sym__comment_or_new_line,
      sym__line_ending,
  [8722] = 5,
    ACTIONS(1333), 1,
      anon_sym_LF,
    ACTIONS(1335), 1,
      sym_comment,
    ACTIONS(1337), 1,
      sym__eof,
    STATE(66), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(67), 2,
      sym__comment_or_new_line,
      sym__line_ending,
  [8739] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1341), 1,
      aux_sym_json_string_text_token1,
    STATE(285), 1,
      aux_sym_json_string_text_repeat1,
    ACTIONS(1339), 3,
      anon_sym_BSLASH,
      anon_sym_DQUOTE,
      anon_sym_LBRACE_LBRACE2,
  [8754] = 5,
    ACTIONS(554), 1,
      anon_sym_LF,
    ACTIONS(574), 1,
      sym_comment,
    ACTIONS(1343), 1,
      sym__eof,
    STATE(85), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(91), 2,
      sym__comment_or_new_line,
      sym__line_ending,
  [8771] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1345), 5,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      aux_sym_value_string_text_token1,
      anon_sym_LBRACE_LBRACE2,
  [8782] = 5,
    ACTIONS(1347), 1,
      anon_sym_LF,
    ACTIONS(1349), 1,
      sym_comment,
    ACTIONS(1351), 1,
      sym__eof,
    STATE(122), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(128), 2,
      sym__comment_or_new_line,
      sym__line_ending,
  [8799] = 5,
    ACTIONS(1333), 1,
      anon_sym_LF,
    ACTIONS(1335), 1,
      sym_comment,
    ACTIONS(1353), 1,
      sym__eof,
    STATE(66), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(44), 2,
      sym__comment_or_new_line,
      sym__line_ending,
  [8816] = 5,
    ACTIONS(554), 1,
      anon_sym_LF,
    ACTIONS(574), 1,
      sym_comment,
    ACTIONS(1355), 1,
      sym__eof,
    STATE(85), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(87), 2,
      sym__comment_or_new_line,
      sym__line_ending,
  [8833] = 5,
    ACTIONS(859), 1,
      sym_comment,
    ACTIONS(863), 1,
      anon_sym_LF,
    ACTIONS(1357), 1,
      sym__eof,
    STATE(70), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(71), 2,
      sym__comment_or_new_line,
      sym__line_ending,
  [8850] = 2,
    ACTIONS(1361), 1,
      sym__eof,
    ACTIONS(1359), 5,
      anon_sym_LF,
      anon_sym_BSLASH,
      aux_sym_value_string_text_token1,
      anon_sym_LBRACE_LBRACE2,
      sym_comment,
  [8861] = 4,
    ACTIONS(142), 1,
      sym_comment,
    ACTIONS(781), 1,
      anon_sym_LBRACE_LBRACE2,
    ACTIONS(779), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(448), 2,
      sym_template,
      sym_boolean,
  [8876] = 3,
    ACTIONS(142), 1,
      sym_comment,
    STATE(282), 1,
      aux_sym_key_string_content_repeat1,
    ACTIONS(1363), 4,
      anon_sym_COLON,
      anon_sym_LBRACE_LBRACE,
      sym_key_string_text,
      sym_key_string_escaped_char,
  [8889] = 5,
    ACTIONS(1333), 1,
      anon_sym_LF,
    ACTIONS(1335), 1,
      sym_comment,
    ACTIONS(1365), 1,
      sym__eof,
    STATE(66), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(69), 2,
      sym__comment_or_new_line,
      sym__line_ending,
  [8906] = 4,
    ACTIONS(142), 1,
      sym_comment,
    STATE(282), 1,
      aux_sym_key_string_content_repeat1,
    ACTIONS(1367), 2,
      anon_sym_COLON,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1369), 2,
      sym_key_string_text,
      sym_key_string_escaped_char,
  [8921] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(248), 1,
      aux_sym_oneline_string_text_token1,
    ACTIONS(250), 4,
      anon_sym_BQUOTE,
      anon_sym_LBRACE2,
      sym_oneline_string_escaped_char,
      anon_sym_LBRACE_LBRACE2,
  [8934] = 5,
    ACTIONS(554), 1,
      anon_sym_LF,
    ACTIONS(574), 1,
      sym_comment,
    ACTIONS(1372), 1,
      sym__eof,
    STATE(85), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(19), 2,
      sym__comment_or_new_line,
      sym__line_ending,
  [8951] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1376), 1,
      aux_sym_json_string_text_token1,
    STATE(285), 1,
      aux_sym_json_string_text_repeat1,
    ACTIONS(1374), 3,
      anon_sym_BSLASH,
      anon_sym_DQUOTE,
      anon_sym_LBRACE_LBRACE2,
  [8966] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1379), 5,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      aux_sym_value_string_text_token1,
      anon_sym_LBRACE_LBRACE2,
  [8977] = 5,
    ACTIONS(859), 1,
      sym_comment,
    ACTIONS(863), 1,
      anon_sym_LF,
    ACTIONS(1381), 1,
      sym__eof,
    STATE(70), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(73), 2,
      sym__comment_or_new_line,
      sym__line_ending,
  [8994] = 5,
    ACTIONS(859), 1,
      sym_comment,
    ACTIONS(863), 1,
      anon_sym_LF,
    ACTIONS(1383), 1,
      sym__eof,
    STATE(70), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(54), 2,
      sym__comment_or_new_line,
      sym__line_ending,
  [9011] = 5,
    ACTIONS(1385), 1,
      anon_sym_LF,
    ACTIONS(1387), 1,
      sym_comment,
    ACTIONS(1389), 1,
      sym__eof,
    STATE(234), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(163), 2,
      sym__comment_or_new_line,
      sym__line_ending,
  [9028] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1391), 5,
      anon_sym_LF,
      anon_sym_BSLASH,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__multiline_string_text,
      anon_sym_LBRACE_LBRACE2,
  [9039] = 5,
    ACTIONS(1385), 1,
      anon_sym_LF,
    ACTIONS(1387), 1,
      sym_comment,
    ACTIONS(1393), 1,
      sym__eof,
    STATE(234), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(165), 2,
      sym__comment_or_new_line,
      sym__line_ending,
  [9056] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1042), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(1395), 4,
      anon_sym_LF,
      anon_sym_BSLASH,
      sym__multiline_string_text,
      anon_sym_LBRACE_LBRACE2,
  [9069] = 2,
    ACTIONS(1399), 1,
      sym__eof,
    ACTIONS(1397), 5,
      anon_sym_LF,
      anon_sym_BSLASH,
      aux_sym_value_string_text_token1,
      anon_sym_LBRACE_LBRACE2,
      sym_comment,
  [9080] = 5,
    ACTIONS(554), 1,
      anon_sym_LF,
    ACTIONS(574), 1,
      sym_comment,
    ACTIONS(1401), 1,
      sym__eof,
    STATE(85), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(88), 2,
      sym__comment_or_new_line,
      sym__line_ending,
  [9097] = 5,
    ACTIONS(859), 1,
      sym_comment,
    ACTIONS(863), 1,
      anon_sym_LF,
    ACTIONS(1403), 1,
      sym__eof,
    STATE(70), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(48), 2,
      sym__comment_or_new_line,
      sym__line_ending,
  [9114] = 5,
    ACTIONS(7), 1,
      anon_sym_LF,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1405), 1,
      sym__eof,
    STATE(146), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(155), 2,
      sym__comment_or_new_line,
      sym__line_ending,
  [9131] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1407), 5,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      aux_sym_value_string_text_token1,
      anon_sym_LBRACE_LBRACE2,
  [9142] = 5,
    ACTIONS(859), 1,
      sym_comment,
    ACTIONS(863), 1,
      anon_sym_LF,
    ACTIONS(1409), 1,
      sym__eof,
    STATE(70), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(11), 2,
      sym__comment_or_new_line,
      sym__line_ending,
  [9159] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1411), 5,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      aux_sym_value_string_text_token1,
      anon_sym_LBRACE_LBRACE2,
  [9170] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1413), 5,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      aux_sym_value_string_text_token1,
      anon_sym_LBRACE_LBRACE2,
  [9181] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1415), 5,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      aux_sym_value_string_text_token1,
      anon_sym_LBRACE_LBRACE2,
  [9192] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1074), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(1395), 4,
      anon_sym_LF,
      anon_sym_BSLASH,
      sym__multiline_string_text,
      anon_sym_LBRACE_LBRACE2,
  [9205] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(250), 5,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      aux_sym_value_string_text_token1,
      anon_sym_LBRACE_LBRACE2,
  [9216] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1417), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(1395), 4,
      anon_sym_LF,
      anon_sym_BSLASH,
      sym__multiline_string_text,
      anon_sym_LBRACE_LBRACE2,
  [9229] = 2,
    ACTIONS(1421), 1,
      sym__eof,
    ACTIONS(1419), 5,
      anon_sym_LF,
      anon_sym_BSLASH,
      sym_filename_text,
      anon_sym_LBRACE_LBRACE2,
      sym_comment,
  [9240] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1423), 5,
      anon_sym_LF,
      anon_sym_BSLASH,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__multiline_string_text,
      anon_sym_LBRACE_LBRACE2,
  [9251] = 3,
    ACTIONS(1429), 1,
      sym__eof,
    ACTIONS(1425), 2,
      anon_sym_LF,
      sym_comment,
    ACTIONS(1427), 3,
      anon_sym_BSLASH,
      aux_sym_value_string_text_token1,
      anon_sym_LBRACE_LBRACE2,
  [9264] = 2,
    ACTIONS(248), 1,
      sym__eof,
    ACTIONS(250), 5,
      anon_sym_LF,
      anon_sym_BSLASH,
      sym_filename_text,
      anon_sym_LBRACE_LBRACE2,
      sym_comment,
  [9275] = 5,
    ACTIONS(1385), 1,
      anon_sym_LF,
    ACTIONS(1387), 1,
      sym_comment,
    ACTIONS(1431), 1,
      sym__eof,
    STATE(234), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(161), 2,
      sym__comment_or_new_line,
      sym__line_ending,
  [9292] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1435), 1,
      aux_sym_oneline_string_text_token1,
    ACTIONS(1433), 4,
      anon_sym_BQUOTE,
      anon_sym_LBRACE2,
      sym_oneline_string_escaped_char,
      anon_sym_LBRACE_LBRACE2,
  [9305] = 5,
    ACTIONS(1437), 1,
      anon_sym_LF,
    ACTIONS(1439), 1,
      sym_comment,
    ACTIONS(1441), 1,
      sym__eof,
    STATE(5), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(4), 2,
      sym__comment_or_new_line,
      sym__line_ending,
  [9322] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1327), 5,
      anon_sym_LF,
      anon_sym_BSLASH,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__multiline_string_text,
      anon_sym_LBRACE_LBRACE2,
  [9333] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1443), 5,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      aux_sym_value_string_text_token1,
      anon_sym_LBRACE_LBRACE2,
  [9344] = 5,
    ACTIONS(1437), 1,
      anon_sym_LF,
    ACTIONS(1439), 1,
      sym_comment,
    ACTIONS(1445), 1,
      sym__eof,
    STATE(5), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(7), 2,
      sym__comment_or_new_line,
      sym__line_ending,
  [9361] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1249), 1,
      anon_sym_BSLASH,
    ACTIONS(1447), 1,
      anon_sym_SLASH,
    ACTIONS(1449), 1,
      sym_regex_text,
    STATE(317), 2,
      sym_regex_escaped_char,
      aux_sym_regex_content_repeat1,
  [9378] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(250), 5,
      anon_sym_LF,
      anon_sym_BSLASH,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__multiline_string_text,
      anon_sym_LBRACE_LBRACE2,
  [9389] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1451), 1,
      anon_sym_BSLASH,
    ACTIONS(1454), 1,
      anon_sym_SLASH,
    ACTIONS(1456), 1,
      sym_regex_text,
    STATE(317), 2,
      sym_regex_escaped_char,
      aux_sym_regex_content_repeat1,
  [9406] = 2,
    ACTIONS(142), 1,
      sym_comment,
    ACTIONS(1459), 4,
      anon_sym_COLON,
      anon_sym_LBRACE_LBRACE,
      sym_key_string_text,
      sym_key_string_escaped_char,
  [9416] = 2,
    ACTIONS(142), 1,
      sym_comment,
    ACTIONS(1461), 4,
      anon_sym_COLON,
      anon_sym_LBRACE_LBRACE,
      sym_key_string_text,
      sym_key_string_escaped_char,
  [9426] = 2,
    ACTIONS(1465), 1,
      sym__eof,
    ACTIONS(1463), 4,
      anon_sym_LF,
      sym_filename_password_text,
      anon_sym_BSLASH,
      sym_comment,
  [9436] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1467), 4,
      anon_sym_BSLASH,
      anon_sym_DQUOTE,
      aux_sym_json_string_text_token1,
      anon_sym_LBRACE_LBRACE2,
  [9446] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1469), 4,
      anon_sym_BSLASH,
      anon_sym_DQUOTE,
      aux_sym_json_string_text_token1,
      anon_sym_LBRACE_LBRACE2,
  [9456] = 4,
    ACTIONS(142), 1,
      sym_comment,
    ACTIONS(1471), 1,
      anon_sym_DQUOTE,
    ACTIONS(1473), 1,
      anon_sym_SLASH,
    STATE(411), 2,
      sym_quoted_string,
      sym_regex,
  [9470] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1475), 4,
      anon_sym_BSLASH,
      anon_sym_DQUOTE,
      aux_sym_json_string_text_token1,
      anon_sym_LBRACE_LBRACE2,
  [9480] = 2,
    ACTIONS(1479), 1,
      sym__eof,
    ACTIONS(1477), 4,
      anon_sym_LF,
      sym_filename_password_text,
      anon_sym_BSLASH,
      sym_comment,
  [9490] = 4,
    ACTIONS(142), 1,
      sym_comment,
    ACTIONS(1471), 1,
      anon_sym_DQUOTE,
    ACTIONS(1473), 1,
      anon_sym_SLASH,
    STATE(427), 2,
      sym_quoted_string,
      sym_regex,
  [9504] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1481), 4,
      anon_sym_BSLASH,
      anon_sym_DQUOTE,
      sym_quoted_string_text,
      anon_sym_LBRACE_LBRACE2,
  [9514] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(250), 4,
      anon_sym_BSLASH,
      anon_sym_DQUOTE,
      aux_sym_json_string_text_token1,
      anon_sym_LBRACE_LBRACE2,
  [9524] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(250), 4,
      anon_sym_BSLASH,
      anon_sym_DQUOTE,
      sym_quoted_string_text,
      anon_sym_LBRACE_LBRACE2,
  [9534] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1483), 4,
      anon_sym_BSLASH,
      anon_sym_DQUOTE,
      sym_quoted_string_text,
      anon_sym_LBRACE_LBRACE2,
  [9544] = 2,
    ACTIONS(142), 1,
      sym_comment,
    ACTIONS(1485), 4,
      anon_sym_COLON,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [9554] = 4,
    ACTIONS(142), 1,
      sym_comment,
    ACTIONS(781), 1,
      anon_sym_LBRACE_LBRACE2,
    ACTIONS(1487), 1,
      aux_sym_status_token1,
    STATE(447), 2,
      sym_template,
      sym__unsigned_integer,
  [9568] = 4,
    ACTIONS(142), 1,
      sym_comment,
    ACTIONS(1489), 1,
      anon_sym_SEMI,
    ACTIONS(1491), 1,
      aux_sym_hexdigit_token1,
    STATE(346), 2,
      sym_hexdigit,
      aux_sym_oneline_hex_repeat1,
  [9582] = 4,
    ACTIONS(142), 1,
      sym_comment,
    ACTIONS(1493), 1,
      anon_sym_LT,
    ACTIONS(1495), 1,
      anon_sym_LT_QMARK,
    STATE(334), 2,
      sym_xml_prolog_tag,
      aux_sym_xml_repeat1,
  [9596] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1498), 4,
      anon_sym_BSLASH,
      anon_sym_DQUOTE,
      sym_quoted_string_text,
      anon_sym_LBRACE_LBRACE2,
  [9606] = 5,
    ACTIONS(142), 1,
      sym_comment,
    ACTIONS(781), 1,
      anon_sym_LBRACE_LBRACE2,
    ACTIONS(1487), 1,
      aux_sym_status_token1,
    STATE(238), 1,
      sym__unsigned_integer,
    STATE(446), 1,
      sym_template,
  [9622] = 4,
    ACTIONS(142), 1,
      sym_comment,
    ACTIONS(771), 1,
      anon_sym_DQUOTE,
    ACTIONS(1111), 1,
      anon_sym_SLASH,
    STATE(115), 2,
      sym_quoted_string,
      sym_regex,
  [9636] = 4,
    ACTIONS(142), 1,
      sym_comment,
    ACTIONS(771), 1,
      anon_sym_DQUOTE,
    ACTIONS(1111), 1,
      anon_sym_SLASH,
    STATE(103), 2,
      sym_quoted_string,
      sym_regex,
  [9650] = 2,
    ACTIONS(142), 1,
      sym_comment,
    ACTIONS(1500), 4,
      anon_sym_COLON,
      anon_sym_LBRACE_LBRACE,
      sym_key_string_text,
      sym_key_string_escaped_char,
  [9660] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1327), 4,
      anon_sym_BSLASH,
      anon_sym_DQUOTE,
      sym_quoted_string_text,
      anon_sym_LBRACE_LBRACE2,
  [9670] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1502), 4,
      anon_sym_BSLASH,
      anon_sym_DQUOTE,
      aux_sym_json_string_text_token1,
      anon_sym_LBRACE_LBRACE2,
  [9680] = 4,
    ACTIONS(142), 1,
      sym_comment,
    ACTIONS(1491), 1,
      aux_sym_hexdigit_token1,
    ACTIONS(1504), 1,
      anon_sym_SEMI,
    STATE(333), 2,
      sym_hexdigit,
      aux_sym_oneline_hex_repeat1,
  [9694] = 4,
    ACTIONS(142), 1,
      sym_comment,
    ACTIONS(1471), 1,
      anon_sym_DQUOTE,
    ACTIONS(1473), 1,
      anon_sym_SLASH,
    STATE(39), 2,
      sym_quoted_string,
      sym_regex,
  [9708] = 2,
    ACTIONS(1329), 1,
      sym__eof,
    ACTIONS(1327), 4,
      anon_sym_LF,
      sym_filename_password_text,
      anon_sym_BSLASH,
      sym_comment,
  [9718] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(250), 4,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      sym_filename_text,
      anon_sym_LBRACE_LBRACE2,
  [9728] = 4,
    ACTIONS(142), 1,
      sym_comment,
    ACTIONS(1506), 1,
      anon_sym_SEMI,
    ACTIONS(1508), 1,
      aux_sym_hexdigit_token1,
    STATE(346), 2,
      sym_hexdigit,
      aux_sym_oneline_hex_repeat1,
  [9742] = 4,
    ACTIONS(142), 1,
      sym_comment,
    ACTIONS(1471), 1,
      anon_sym_DQUOTE,
    ACTIONS(1473), 1,
      anon_sym_SLASH,
    STATE(519), 2,
      sym_quoted_string,
      sym_regex,
  [9756] = 4,
    ACTIONS(142), 1,
      sym_comment,
    ACTIONS(1471), 1,
      anon_sym_DQUOTE,
    ACTIONS(1473), 1,
      anon_sym_SLASH,
    STATE(520), 2,
      sym_quoted_string,
      sym_regex,
  [9770] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1419), 4,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      sym_filename_text,
      anon_sym_LBRACE_LBRACE2,
  [9780] = 4,
    ACTIONS(142), 1,
      sym_comment,
    ACTIONS(1471), 1,
      anon_sym_DQUOTE,
    ACTIONS(1473), 1,
      anon_sym_SLASH,
    STATE(31), 2,
      sym_quoted_string,
      sym_regex,
  [9794] = 2,
    ACTIONS(142), 1,
      sym_comment,
    ACTIONS(1511), 4,
      anon_sym_COLON,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [9804] = 5,
    ACTIONS(142), 1,
      sym_comment,
    ACTIONS(845), 1,
      anon_sym_DQUOTE,
    STATE(499), 1,
      sym_json_key_value,
    STATE(534), 1,
      sym_json_key_string,
    STATE(560), 1,
      sym_json_string,
  [9820] = 2,
    ACTIONS(142), 1,
      sym_comment,
    ACTIONS(1513), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [9829] = 2,
    ACTIONS(142), 1,
      sym_comment,
    ACTIONS(1515), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [9838] = 4,
    ACTIONS(142), 1,
      sym_comment,
    ACTIONS(1205), 1,
      anon_sym_COMMA,
    ACTIONS(1517), 1,
      anon_sym_RBRACE,
    STATE(386), 1,
      aux_sym_json_object_repeat1,
  [9851] = 4,
    ACTIONS(142), 1,
      sym_comment,
    ACTIONS(1519), 1,
      aux_sym_variable_name_token1,
    STATE(84), 1,
      sym_variable_name,
    STATE(550), 1,
      sym_expr,
  [9864] = 4,
    ACTIONS(142), 1,
      sym_comment,
    ACTIONS(1519), 1,
      aux_sym_variable_name_token1,
    STATE(84), 1,
      sym_variable_name,
    STATE(554), 1,
      sym_expr,
  [9877] = 4,
    ACTIONS(142), 1,
      sym_comment,
    ACTIONS(1519), 1,
      aux_sym_variable_name_token1,
    STATE(84), 1,
      sym_variable_name,
    STATE(555), 1,
      sym_expr,
  [9890] = 4,
    ACTIONS(142), 1,
      sym_comment,
    ACTIONS(1519), 1,
      aux_sym_variable_name_token1,
    STATE(84), 1,
      sym_variable_name,
    STATE(526), 1,
      sym_expr,
  [9903] = 2,
    ACTIONS(142), 1,
      sym_comment,
    ACTIONS(1521), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [9912] = 2,
    ACTIONS(142), 1,
      sym_comment,
    ACTIONS(1523), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [9921] = 4,
    ACTIONS(142), 1,
      sym_comment,
    ACTIONS(1519), 1,
      aux_sym_variable_name_token1,
    STATE(84), 1,
      sym_variable_name,
    STATE(567), 1,
      sym_expr,
  [9934] = 2,
    ACTIONS(142), 1,
      sym_comment,
    ACTIONS(1525), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [9943] = 4,
    ACTIONS(142), 1,
      sym_comment,
    ACTIONS(1527), 1,
      anon_sym_COMMA,
    ACTIONS(1529), 1,
      anon_sym_RBRACK,
    STATE(367), 1,
      aux_sym_json_array_repeat1,
  [9956] = 4,
    ACTIONS(142), 1,
      sym_comment,
    ACTIONS(1519), 1,
      aux_sym_variable_name_token1,
    STATE(84), 1,
      sym_variable_name,
    STATE(552), 1,
      sym_expr,
  [9969] = 2,
    ACTIONS(142), 1,
      sym_comment,
    ACTIONS(1531), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [9978] = 4,
    ACTIONS(142), 1,
      sym_comment,
    ACTIONS(1527), 1,
      anon_sym_COMMA,
    ACTIONS(1533), 1,
      anon_sym_RBRACK,
    STATE(397), 1,
      aux_sym_json_array_repeat1,
  [9991] = 2,
    ACTIONS(142), 1,
      sym_comment,
    ACTIONS(1535), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [10000] = 4,
    ACTIONS(142), 1,
      sym_comment,
    ACTIONS(1519), 1,
      aux_sym_variable_name_token1,
    STATE(84), 1,
      sym_variable_name,
    STATE(548), 1,
      sym_expr,
  [10013] = 4,
    ACTIONS(142), 1,
      sym_comment,
    ACTIONS(1519), 1,
      aux_sym_variable_name_token1,
    STATE(84), 1,
      sym_variable_name,
    STATE(553), 1,
      sym_expr,
  [10026] = 4,
    ACTIONS(142), 1,
      sym_comment,
    ACTIONS(781), 1,
      anon_sym_LBRACE_LBRACE2,
    ACTIONS(1537), 1,
      sym_integer,
    STATE(116), 1,
      sym_template,
  [10039] = 4,
    ACTIONS(142), 1,
      sym_comment,
    ACTIONS(781), 1,
      anon_sym_LBRACE_LBRACE2,
    ACTIONS(1539), 1,
      aux_sym_count_option_token1,
    STATE(398), 1,
      sym_template,
  [10052] = 2,
    ACTIONS(142), 1,
      sym_comment,
    ACTIONS(1541), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [10061] = 2,
    ACTIONS(142), 1,
      sym_comment,
    ACTIONS(1543), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [10070] = 3,
    ACTIONS(1547), 1,
      aux_sym_file_value_token1,
    ACTIONS(1549), 1,
      sym_comment,
    ACTIONS(1545), 2,
      sym__eof,
      anon_sym_LF,
  [10081] = 4,
    ACTIONS(142), 1,
      sym_comment,
    ACTIONS(853), 1,
      anon_sym_LBRACE_LBRACE2,
    ACTIONS(1551), 1,
      sym_integer,
    STATE(30), 1,
      sym_template,
  [10094] = 4,
    ACTIONS(142), 1,
      sym_comment,
    ACTIONS(1527), 1,
      anon_sym_COMMA,
    ACTIONS(1553), 1,
      anon_sym_RBRACK,
    STATE(390), 1,
      aux_sym_json_array_repeat1,
  [10107] = 2,
    ACTIONS(142), 1,
      sym_comment,
    ACTIONS(1555), 3,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      aux_sym_hexdigit_token1,
  [10116] = 3,
    ACTIONS(1559), 1,
      aux_sym_file_value_token1,
    ACTIONS(1561), 1,
      sym_comment,
    ACTIONS(1557), 2,
      sym__eof,
      anon_sym_LF,
  [10127] = 4,
    ACTIONS(142), 1,
      sym_comment,
    ACTIONS(1205), 1,
      anon_sym_COMMA,
    ACTIONS(1563), 1,
      anon_sym_RBRACE,
    STATE(385), 1,
      aux_sym_json_object_repeat1,
  [10140] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1567), 1,
      anon_sym_POUND,
    ACTIONS(1565), 2,
      anon_sym_SEMI,
      aux_sym_filename_escaped_char_token1,
  [10151] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1571), 1,
      anon_sym_POUND,
    ACTIONS(1569), 2,
      anon_sym_SEMI,
      aux_sym_filename_escaped_char_token1,
  [10162] = 3,
    ACTIONS(142), 1,
      sym_comment,
    STATE(284), 1,
      sym_status,
    ACTIONS(1573), 2,
      aux_sym_status_token1,
      anon_sym_STAR,
  [10173] = 4,
    ACTIONS(142), 1,
      sym_comment,
    ACTIONS(1519), 1,
      aux_sym_variable_name_token1,
    STATE(84), 1,
      sym_variable_name,
    STATE(525), 1,
      sym_expr,
  [10186] = 4,
    ACTIONS(142), 1,
      sym_comment,
    ACTIONS(1575), 1,
      anon_sym_RBRACE,
    ACTIONS(1577), 1,
      anon_sym_COMMA,
    STATE(385), 1,
      aux_sym_json_object_repeat1,
  [10199] = 4,
    ACTIONS(142), 1,
      sym_comment,
    ACTIONS(1205), 1,
      anon_sym_COMMA,
    ACTIONS(1580), 1,
      anon_sym_RBRACE,
    STATE(385), 1,
      aux_sym_json_object_repeat1,
  [10212] = 4,
    ACTIONS(142), 1,
      sym_comment,
    ACTIONS(1519), 1,
      aux_sym_variable_name_token1,
    STATE(450), 1,
      sym_variable_definition,
    STATE(541), 1,
      sym_variable_name,
  [10225] = 2,
    ACTIONS(142), 1,
      sym_comment,
    ACTIONS(1582), 3,
      anon_sym_verbose,
      anon_sym_brief,
      anon_sym_debug,
  [10234] = 4,
    ACTIONS(142), 1,
      sym_comment,
    ACTIONS(1205), 1,
      anon_sym_COMMA,
    ACTIONS(1584), 1,
      anon_sym_RBRACE,
    STATE(380), 1,
      aux_sym_json_object_repeat1,
  [10247] = 4,
    ACTIONS(142), 1,
      sym_comment,
    ACTIONS(1527), 1,
      anon_sym_COMMA,
    ACTIONS(1586), 1,
      anon_sym_RBRACK,
    STATE(397), 1,
      aux_sym_json_array_repeat1,
  [10260] = 4,
    ACTIONS(142), 1,
      sym_comment,
    ACTIONS(1205), 1,
      anon_sym_COMMA,
    ACTIONS(1517), 1,
      anon_sym_RBRACE,
    STATE(385), 1,
      aux_sym_json_object_repeat1,
  [10273] = 4,
    ACTIONS(142), 1,
      sym_comment,
    ACTIONS(1205), 1,
      anon_sym_COMMA,
    ACTIONS(1584), 1,
      anon_sym_RBRACE,
    STATE(385), 1,
      aux_sym_json_object_repeat1,
  [10286] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1588), 3,
      anon_sym_BSLASH,
      anon_sym_SLASH,
      sym_regex_text,
  [10295] = 4,
    ACTIONS(142), 1,
      sym_comment,
    ACTIONS(1519), 1,
      aux_sym_variable_name_token1,
    STATE(84), 1,
      sym_variable_name,
    STATE(558), 1,
      sym_expr,
  [10308] = 4,
    ACTIONS(142), 1,
      sym_comment,
    ACTIONS(1519), 1,
      aux_sym_variable_name_token1,
    STATE(84), 1,
      sym_variable_name,
    STATE(557), 1,
      sym_expr,
  [10321] = 4,
    ACTIONS(142), 1,
      sym_comment,
    ACTIONS(1519), 1,
      aux_sym_variable_name_token1,
    STATE(84), 1,
      sym_variable_name,
    STATE(556), 1,
      sym_expr,
  [10334] = 4,
    ACTIONS(142), 1,
      sym_comment,
    ACTIONS(1590), 1,
      anon_sym_COMMA,
    ACTIONS(1593), 1,
      anon_sym_RBRACK,
    STATE(397), 1,
      aux_sym_json_array_repeat1,
  [10347] = 2,
    ACTIONS(1597), 1,
      sym_comment,
    ACTIONS(1595), 2,
      sym__eof,
      anon_sym_LF,
  [10355] = 2,
    ACTIONS(1601), 1,
      sym_comment,
    ACTIONS(1599), 2,
      sym__eof,
      anon_sym_LF,
  [10363] = 2,
    ACTIONS(1605), 1,
      sym_comment,
    ACTIONS(1603), 2,
      sym__eof,
      anon_sym_LF,
  [10371] = 2,
    ACTIONS(1609), 1,
      sym_comment,
    ACTIONS(1607), 2,
      sym__eof,
      anon_sym_LF,
  [10379] = 2,
    ACTIONS(1613), 1,
      sym_comment,
    ACTIONS(1611), 2,
      sym__eof,
      anon_sym_LF,
  [10387] = 2,
    ACTIONS(1617), 1,
      sym_comment,
    ACTIONS(1615), 2,
      sym__eof,
      anon_sym_LF,
  [10395] = 2,
    ACTIONS(1621), 1,
      sym_comment,
    ACTIONS(1619), 2,
      sym__eof,
      anon_sym_LF,
  [10403] = 2,
    ACTIONS(1625), 1,
      sym_comment,
    ACTIONS(1623), 2,
      sym__eof,
      anon_sym_LF,
  [10411] = 2,
    ACTIONS(1629), 1,
      sym_comment,
    ACTIONS(1627), 2,
      sym__eof,
      anon_sym_LF,
  [10419] = 2,
    ACTIONS(1633), 1,
      sym_comment,
    ACTIONS(1631), 2,
      sym__eof,
      anon_sym_LF,
  [10427] = 2,
    ACTIONS(1637), 1,
      sym_comment,
    ACTIONS(1635), 2,
      sym__eof,
      anon_sym_LF,
  [10435] = 2,
    ACTIONS(1641), 1,
      sym_comment,
    ACTIONS(1639), 2,
      sym__eof,
      anon_sym_LF,
  [10443] = 2,
    ACTIONS(1645), 1,
      sym_comment,
    ACTIONS(1643), 2,
      sym__eof,
      anon_sym_LF,
  [10451] = 3,
    ACTIONS(142), 1,
      sym_comment,
    ACTIONS(771), 1,
      anon_sym_DQUOTE,
    STATE(107), 1,
      sym_quoted_string,
  [10461] = 2,
    ACTIONS(1649), 1,
      sym_comment,
    ACTIONS(1647), 2,
      sym__eof,
      anon_sym_LF,
  [10469] = 2,
    ACTIONS(1653), 1,
      sym_comment,
    ACTIONS(1651), 2,
      sym__eof,
      anon_sym_LF,
  [10477] = 2,
    ACTIONS(1549), 1,
      sym_comment,
    ACTIONS(1545), 2,
      sym__eof,
      anon_sym_LF,
  [10485] = 2,
    ACTIONS(1657), 1,
      sym_comment,
    ACTIONS(1655), 2,
      sym__eof,
      anon_sym_LF,
  [10493] = 2,
    ACTIONS(1659), 1,
      sym_comment,
    ACTIONS(1525), 2,
      sym__eof,
      anon_sym_LF,
  [10501] = 2,
    ACTIONS(1663), 1,
      sym_comment,
    ACTIONS(1661), 2,
      sym__eof,
      anon_sym_LF,
  [10509] = 2,
    ACTIONS(1667), 1,
      sym_comment,
    ACTIONS(1665), 2,
      sym__eof,
      anon_sym_LF,
  [10517] = 2,
    ACTIONS(1671), 1,
      sym_comment,
    ACTIONS(1669), 2,
      sym__eof,
      anon_sym_LF,
  [10525] = 2,
    ACTIONS(1675), 1,
      sym_comment,
    ACTIONS(1673), 2,
      sym__eof,
      anon_sym_LF,
  [10533] = 2,
    ACTIONS(1679), 1,
      sym_comment,
    ACTIONS(1677), 2,
      sym__eof,
      anon_sym_LF,
  [10541] = 2,
    ACTIONS(1415), 1,
      sym_comment,
    ACTIONS(1681), 2,
      sym__eof,
      anon_sym_LF,
  [10549] = 2,
    ACTIONS(1685), 1,
      sym_comment,
    ACTIONS(1683), 2,
      sym__eof,
      anon_sym_LF,
  [10557] = 2,
    ACTIONS(1689), 1,
      sym_comment,
    ACTIONS(1687), 2,
      sym__eof,
      anon_sym_LF,
  [10565] = 2,
    ACTIONS(1693), 1,
      sym_comment,
    ACTIONS(1691), 2,
      sym__eof,
      anon_sym_LF,
  [10573] = 2,
    ACTIONS(1697), 1,
      sym_comment,
    ACTIONS(1695), 2,
      sym__eof,
      anon_sym_LF,
  [10581] = 3,
    ACTIONS(142), 1,
      sym_comment,
    ACTIONS(771), 1,
      anon_sym_DQUOTE,
    STATE(106), 1,
      sym_quoted_string,
  [10591] = 2,
    ACTIONS(1701), 1,
      sym_comment,
    ACTIONS(1699), 2,
      sym__eof,
      anon_sym_LF,
  [10599] = 2,
    ACTIONS(1703), 1,
      sym_comment,
    ACTIONS(1513), 2,
      sym__eof,
      anon_sym_LF,
  [10607] = 2,
    ACTIONS(1705), 1,
      sym_comment,
    ACTIONS(1541), 2,
      sym__eof,
      anon_sym_LF,
  [10615] = 3,
    ACTIONS(142), 1,
      sym_comment,
    ACTIONS(1707), 1,
      aux_sym_hexdigit_token1,
    STATE(321), 1,
      sym_json_hexdigit,
  [10625] = 2,
    ACTIONS(1711), 1,
      sym_comment,
    ACTIONS(1709), 2,
      sym__eof,
      anon_sym_LF,
  [10633] = 2,
    ACTIONS(1715), 1,
      sym_comment,
    ACTIONS(1713), 2,
      sym__eof,
      anon_sym_LF,
  [10641] = 3,
    ACTIONS(142), 1,
      sym_comment,
    ACTIONS(1717), 1,
      anon_sym_LBRACE,
    STATE(320), 1,
      sym_unicode_char,
  [10651] = 2,
    ACTIONS(1721), 1,
      sym_comment,
    ACTIONS(1719), 2,
      sym__eof,
      anon_sym_LF,
  [10659] = 2,
    ACTIONS(1725), 1,
      sym_comment,
    ACTIONS(1723), 2,
      sym__eof,
      anon_sym_LF,
  [10667] = 3,
    ACTIONS(142), 1,
      sym_comment,
    ACTIONS(1491), 1,
      aux_sym_hexdigit_token1,
    STATE(523), 1,
      sym_hexdigit,
  [10677] = 2,
    ACTIONS(1729), 1,
      sym_comment,
    ACTIONS(1727), 2,
      sym__eof,
      anon_sym_LF,
  [10685] = 3,
    ACTIONS(142), 1,
      sym_comment,
    ACTIONS(1471), 1,
      anon_sym_DQUOTE,
    STATE(33), 1,
      sym_quoted_string,
  [10695] = 3,
    ACTIONS(142), 1,
      sym_comment,
    ACTIONS(1471), 1,
      anon_sym_DQUOTE,
    STATE(32), 1,
      sym_quoted_string,
  [10705] = 3,
    ACTIONS(142), 1,
      sym_comment,
    ACTIONS(1471), 1,
      anon_sym_DQUOTE,
    STATE(28), 1,
      sym_quoted_string,
  [10715] = 2,
    ACTIONS(1731), 1,
      sym_comment,
    ACTIONS(1535), 2,
      sym__eof,
      anon_sym_LF,
  [10723] = 2,
    ACTIONS(1735), 1,
      sym_comment,
    ACTIONS(1733), 2,
      sym__eof,
      anon_sym_LF,
  [10731] = 3,
    ACTIONS(142), 1,
      sym_comment,
    ACTIONS(1737), 1,
      aux_sym_hexdigit_token1,
    STATE(431), 1,
      sym_json_hexdigit,
  [10741] = 2,
    ACTIONS(1425), 1,
      sym_comment,
    ACTIONS(1429), 2,
      sym__eof,
      anon_sym_LF,
  [10749] = 2,
    ACTIONS(1223), 1,
      sym_comment,
    ACTIONS(1219), 2,
      sym__eof,
      anon_sym_LF,
  [10757] = 2,
    ACTIONS(1741), 1,
      sym_comment,
    ACTIONS(1739), 2,
      sym__eof,
      anon_sym_LF,
  [10765] = 2,
    ACTIONS(1745), 1,
      sym_comment,
    ACTIONS(1743), 2,
      sym__eof,
      anon_sym_LF,
  [10773] = 3,
    ACTIONS(142), 1,
      sym_comment,
    ACTIONS(771), 1,
      anon_sym_DQUOTE,
    STATE(98), 1,
      sym_quoted_string,
  [10783] = 2,
    ACTIONS(1749), 1,
      sym_comment,
    ACTIONS(1747), 2,
      sym__eof,
      anon_sym_LF,
  [10791] = 2,
    ACTIONS(1753), 1,
      sym_comment,
    ACTIONS(1751), 2,
      sym__eof,
      anon_sym_LF,
  [10799] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1755), 1,
      aux_sym_xml_self_closing_tag_token1,
    ACTIONS(1757), 1,
      aux_sym_xml_open_tag_token1,
  [10809] = 2,
    ACTIONS(1761), 1,
      sym_comment,
    ACTIONS(1759), 2,
      sym__eof,
      anon_sym_LF,
  [10817] = 2,
    ACTIONS(1765), 1,
      sym_comment,
    ACTIONS(1763), 2,
      sym__eof,
      anon_sym_LF,
  [10825] = 2,
    ACTIONS(1769), 1,
      sym_comment,
    ACTIONS(1767), 2,
      sym__eof,
      anon_sym_LF,
  [10833] = 2,
    ACTIONS(1771), 1,
      sym_comment,
    ACTIONS(1543), 2,
      sym__eof,
      anon_sym_LF,
  [10841] = 2,
    ACTIONS(1775), 1,
      sym_comment,
    ACTIONS(1773), 2,
      sym__eof,
      anon_sym_LF,
  [10849] = 3,
    ACTIONS(142), 1,
      sym_comment,
    ACTIONS(1777), 1,
      anon_sym_LBRACE,
    STATE(327), 1,
      sym_unicode_char,
  [10859] = 3,
    ACTIONS(142), 1,
      sym_comment,
    ACTIONS(1491), 1,
      aux_sym_hexdigit_token1,
    STATE(540), 1,
      sym_hexdigit,
  [10869] = 3,
    ACTIONS(142), 1,
      sym_comment,
    ACTIONS(771), 1,
      anon_sym_DQUOTE,
    STATE(97), 1,
      sym_quoted_string,
  [10879] = 3,
    ACTIONS(142), 1,
      sym_comment,
    ACTIONS(771), 1,
      anon_sym_DQUOTE,
    STATE(96), 1,
      sym_quoted_string,
  [10889] = 3,
    ACTIONS(142), 1,
      sym_comment,
    ACTIONS(1471), 1,
      anon_sym_DQUOTE,
    STATE(42), 1,
      sym_quoted_string,
  [10899] = 3,
    ACTIONS(142), 1,
      sym_comment,
    ACTIONS(1471), 1,
      anon_sym_DQUOTE,
    STATE(41), 1,
      sym_quoted_string,
  [10909] = 3,
    ACTIONS(142), 1,
      sym_comment,
    ACTIONS(1471), 1,
      anon_sym_DQUOTE,
    STATE(35), 1,
      sym_quoted_string,
  [10919] = 2,
    ACTIONS(1779), 1,
      sym_comment,
    ACTIONS(1515), 2,
      sym__eof,
      anon_sym_LF,
  [10927] = 3,
    ACTIONS(142), 1,
      sym_comment,
    ACTIONS(1471), 1,
      anon_sym_DQUOTE,
    STATE(36), 1,
      sym_quoted_string,
  [10937] = 3,
    ACTIONS(142), 1,
      sym_comment,
    ACTIONS(1471), 1,
      anon_sym_DQUOTE,
    STATE(38), 1,
      sym_quoted_string,
  [10947] = 3,
    ACTIONS(142), 1,
      sym_comment,
    ACTIONS(771), 1,
      anon_sym_DQUOTE,
    STATE(95), 1,
      sym_quoted_string,
  [10957] = 2,
    ACTIONS(1345), 1,
      sym_comment,
    ACTIONS(1781), 2,
      sym__eof,
      anon_sym_LF,
  [10965] = 3,
    ACTIONS(142), 1,
      sym_comment,
    ACTIONS(1783), 1,
      anon_sym_LBRACE,
    STATE(306), 1,
      sym_unicode_char,
  [10975] = 2,
    ACTIONS(1787), 1,
      sym_comment,
    ACTIONS(1785), 2,
      sym__eof,
      anon_sym_LF,
  [10983] = 3,
    ACTIONS(142), 1,
      sym_comment,
    ACTIONS(1737), 1,
      aux_sym_hexdigit_token1,
    STATE(444), 1,
      sym_json_hexdigit,
  [10993] = 3,
    ACTIONS(142), 1,
      sym_comment,
    ACTIONS(771), 1,
      anon_sym_DQUOTE,
    STATE(105), 1,
      sym_quoted_string,
  [11003] = 2,
    ACTIONS(142), 1,
      sym_comment,
    ACTIONS(1789), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [11011] = 3,
    ACTIONS(142), 1,
      sym_comment,
    ACTIONS(1491), 1,
      aux_sym_hexdigit_token1,
    STATE(511), 1,
      sym_hexdigit,
  [11021] = 2,
    ACTIONS(1791), 1,
      sym_comment,
    ACTIONS(1485), 2,
      sym__eof,
      anon_sym_LF,
  [11029] = 2,
    ACTIONS(1795), 1,
      sym_comment,
    ACTIONS(1793), 2,
      sym__eof,
      anon_sym_LF,
  [11037] = 3,
    ACTIONS(142), 1,
      sym_comment,
    ACTIONS(1797), 1,
      anon_sym_LBRACE,
    STATE(293), 1,
      sym_unicode_char,
  [11047] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1757), 1,
      aux_sym_xml_open_tag_token1,
    ACTIONS(1799), 1,
      aux_sym_xml_self_closing_tag_token1,
  [11057] = 2,
    ACTIONS(1801), 1,
      sym_comment,
    ACTIONS(1521), 2,
      sym__eof,
      anon_sym_LF,
  [11065] = 2,
    ACTIONS(1805), 1,
      sym_comment,
    ACTIONS(1803), 2,
      sym__eof,
      anon_sym_LF,
  [11073] = 2,
    ACTIONS(142), 1,
      sym_comment,
    ACTIONS(1593), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [11081] = 2,
    ACTIONS(1809), 1,
      sym_comment,
    ACTIONS(1807), 2,
      sym__eof,
      anon_sym_LF,
  [11089] = 3,
    ACTIONS(142), 1,
      sym_comment,
    ACTIONS(1491), 1,
      aux_sym_hexdigit_token1,
    STATE(546), 1,
      sym_hexdigit,
  [11099] = 3,
    ACTIONS(142), 1,
      sym_comment,
    ACTIONS(1491), 1,
      aux_sym_hexdigit_token1,
    STATE(459), 1,
      sym_hexdigit,
  [11109] = 2,
    ACTIONS(1813), 1,
      sym_comment,
    ACTIONS(1811), 2,
      sym__eof,
      anon_sym_LF,
  [11117] = 2,
    ACTIONS(1817), 1,
      sym_comment,
    ACTIONS(1815), 2,
      sym__eof,
      anon_sym_LF,
  [11125] = 2,
    ACTIONS(1821), 1,
      sym_comment,
    ACTIONS(1819), 2,
      sym__eof,
      anon_sym_LF,
  [11133] = 2,
    ACTIONS(1407), 1,
      sym_comment,
    ACTIONS(1823), 2,
      sym__eof,
      anon_sym_LF,
  [11141] = 2,
    ACTIONS(1827), 1,
      sym_comment,
    ACTIONS(1825), 2,
      sym__eof,
      anon_sym_LF,
  [11149] = 2,
    ACTIONS(1831), 1,
      sym_comment,
    ACTIONS(1829), 2,
      sym__eof,
      anon_sym_LF,
  [11157] = 2,
    ACTIONS(1835), 1,
      sym_comment,
    ACTIONS(1833), 2,
      sym__eof,
      anon_sym_LF,
  [11165] = 2,
    ACTIONS(1839), 1,
      sym_comment,
    ACTIONS(1837), 2,
      sym__eof,
      anon_sym_LF,
  [11173] = 3,
    ACTIONS(142), 1,
      sym_comment,
    ACTIONS(1411), 1,
      anon_sym_LT,
    ACTIONS(1841), 1,
      anon_sym_LT_QMARK,
  [11183] = 2,
    ACTIONS(1413), 1,
      sym_comment,
    ACTIONS(1843), 2,
      sym__eof,
      anon_sym_LF,
  [11191] = 2,
    ACTIONS(1845), 1,
      sym_comment,
    ACTIONS(1511), 2,
      sym__eof,
      anon_sym_LF,
  [11199] = 3,
    ACTIONS(142), 1,
      sym_comment,
    ACTIONS(1737), 1,
      aux_sym_hexdigit_token1,
    STATE(472), 1,
      sym_json_hexdigit,
  [11209] = 2,
    ACTIONS(1847), 1,
      sym_comment,
    ACTIONS(1523), 2,
      sym__eof,
      anon_sym_LF,
  [11217] = 2,
    ACTIONS(142), 1,
      sym_comment,
    ACTIONS(1575), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [11225] = 2,
    ACTIONS(1851), 1,
      sym_comment,
    ACTIONS(1849), 2,
      sym__eof,
      anon_sym_LF,
  [11233] = 2,
    ACTIONS(142), 1,
      sym_comment,
    ACTIONS(1853), 2,
      aux_sym_status_token1,
      anon_sym_STAR,
  [11241] = 3,
    ACTIONS(142), 1,
      sym_comment,
    ACTIONS(1491), 1,
      aux_sym_hexdigit_token1,
    STATE(549), 1,
      sym_hexdigit,
  [11251] = 3,
    ACTIONS(142), 1,
      sym_comment,
    ACTIONS(1491), 1,
      aux_sym_hexdigit_token1,
    STATE(551), 1,
      sym_hexdigit,
  [11261] = 2,
    ACTIONS(1857), 1,
      sym_comment,
    ACTIONS(1855), 2,
      sym__eof,
      anon_sym_LF,
  [11269] = 3,
    ACTIONS(142), 1,
      sym_comment,
    ACTIONS(1491), 1,
      aux_sym_hexdigit_token1,
    STATE(484), 1,
      sym_hexdigit,
  [11279] = 3,
    ACTIONS(142), 1,
      sym_comment,
    ACTIONS(1491), 1,
      aux_sym_hexdigit_token1,
    STATE(502), 1,
      sym_hexdigit,
  [11289] = 3,
    ACTIONS(142), 1,
      sym_comment,
    ACTIONS(1491), 1,
      aux_sym_hexdigit_token1,
    STATE(503), 1,
      sym_hexdigit,
  [11299] = 3,
    ACTIONS(142), 1,
      sym_comment,
    ACTIONS(1491), 1,
      aux_sym_hexdigit_token1,
    STATE(505), 1,
      sym_hexdigit,
  [11309] = 2,
    ACTIONS(142), 1,
      sym_comment,
    ACTIONS(248), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [11317] = 3,
    ACTIONS(142), 1,
      sym_comment,
    ACTIONS(1491), 1,
      aux_sym_hexdigit_token1,
    STATE(506), 1,
      sym_hexdigit,
  [11327] = 3,
    ACTIONS(142), 1,
      sym_comment,
    ACTIONS(1491), 1,
      aux_sym_hexdigit_token1,
    STATE(507), 1,
      sym_hexdigit,
  [11337] = 3,
    ACTIONS(142), 1,
      sym_comment,
    ACTIONS(1491), 1,
      aux_sym_hexdigit_token1,
    STATE(508), 1,
      sym_hexdigit,
  [11347] = 2,
    ACTIONS(1861), 1,
      sym_comment,
    ACTIONS(1859), 2,
      sym__eof,
      anon_sym_LF,
  [11355] = 3,
    ACTIONS(142), 1,
      sym_comment,
    ACTIONS(771), 1,
      anon_sym_DQUOTE,
    STATE(113), 1,
      sym_quoted_string,
  [11365] = 3,
    ACTIONS(142), 1,
      sym_comment,
    ACTIONS(771), 1,
      anon_sym_DQUOTE,
    STATE(114), 1,
      sym_quoted_string,
  [11375] = 3,
    ACTIONS(142), 1,
      sym_comment,
    ACTIONS(1491), 1,
      aux_sym_hexdigit_token1,
    STATE(510), 1,
      sym_hexdigit,
  [11385] = 2,
    ACTIONS(1863), 1,
      sym_comment,
    ACTIONS(1531), 2,
      sym__eof,
      anon_sym_LF,
  [11393] = 3,
    ACTIONS(142), 1,
      sym_comment,
    ACTIONS(771), 1,
      anon_sym_DQUOTE,
    STATE(112), 1,
      sym_quoted_string,
  [11403] = 3,
    ACTIONS(142), 1,
      sym_comment,
    ACTIONS(1471), 1,
      anon_sym_DQUOTE,
    STATE(26), 1,
      sym_quoted_string,
  [11413] = 3,
    ACTIONS(142), 1,
      sym_comment,
    ACTIONS(1471), 1,
      anon_sym_DQUOTE,
    STATE(25), 1,
      sym_quoted_string,
  [11423] = 2,
    ACTIONS(1867), 1,
      sym_comment,
    ACTIONS(1865), 2,
      sym__eof,
      anon_sym_LF,
  [11431] = 2,
    ACTIONS(1443), 1,
      sym_comment,
    ACTIONS(1869), 2,
      sym__eof,
      anon_sym_LF,
  [11439] = 3,
    ACTIONS(142), 1,
      sym_comment,
    ACTIONS(1491), 1,
      aux_sym_hexdigit_token1,
    STATE(485), 1,
      sym_hexdigit,
  [11449] = 2,
    ACTIONS(142), 1,
      sym_comment,
    ACTIONS(1871), 1,
      anon_sym_GT,
  [11456] = 2,
    ACTIONS(142), 1,
      sym_comment,
    ACTIONS(1873), 1,
      anon_sym_RBRACE_RBRACE,
  [11463] = 2,
    ACTIONS(142), 1,
      sym_comment,
    ACTIONS(1875), 1,
      anon_sym_RBRACE_RBRACE,
  [11470] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1877), 1,
      aux_sym_variable_name_token2,
  [11477] = 2,
    ACTIONS(142), 1,
      sym_comment,
    ACTIONS(1879), 1,
      anon_sym_GT,
  [11484] = 2,
    ACTIONS(142), 1,
      sym_comment,
    ACTIONS(1881), 1,
      anon_sym_QMARK_GT,
  [11491] = 2,
    ACTIONS(142), 1,
      sym_comment,
    ACTIONS(1883), 1,
      ts_builtin_sym_end,
  [11498] = 2,
    ACTIONS(142), 1,
      sym_comment,
    ACTIONS(1885), 1,
      anon_sym_COLON,
  [11505] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1887), 1,
      aux_sym_xml_prolog_tag_token1,
  [11512] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1889), 1,
      aux_sym_oneline_base64_token1,
  [11519] = 2,
    ACTIONS(142), 1,
      sym_comment,
    ACTIONS(1891), 1,
      anon_sym_COLON,
  [11526] = 2,
    ACTIONS(142), 1,
      sym_comment,
    ACTIONS(1893), 1,
      anon_sym_DQUOTE,
  [11533] = 2,
    ACTIONS(142), 1,
      sym_comment,
    ACTIONS(1895), 1,
      anon_sym_DQUOTE,
  [11540] = 2,
    ACTIONS(142), 1,
      sym_comment,
    ACTIONS(1897), 1,
      anon_sym_GT,
  [11547] = 2,
    ACTIONS(142), 1,
      sym_comment,
    ACTIONS(1899), 1,
      anon_sym_SEMI,
  [11554] = 2,
    ACTIONS(142), 1,
      sym_comment,
    ACTIONS(1901), 1,
      anon_sym_SLASH,
  [11561] = 2,
    ACTIONS(142), 1,
      sym_comment,
    ACTIONS(1903), 1,
      anon_sym_RBRACE,
  [11568] = 2,
    ACTIONS(142), 1,
      sym_comment,
    ACTIONS(1905), 1,
      anon_sym_EQ,
  [11575] = 2,
    ACTIONS(142), 1,
      sym_comment,
    ACTIONS(1907), 1,
      anon_sym_SEMI,
  [11582] = 2,
    ACTIONS(142), 1,
      sym_comment,
    ACTIONS(1909), 1,
      anon_sym_DQUOTE,
  [11589] = 2,
    ACTIONS(142), 1,
      sym_comment,
    ACTIONS(1911), 1,
      anon_sym_COLON,
  [11596] = 2,
    ACTIONS(142), 1,
      sym_comment,
    ACTIONS(1913), 1,
      aux_sym_hexdigit_token1,
  [11603] = 2,
    ACTIONS(142), 1,
      sym_comment,
    ACTIONS(1915), 1,
      anon_sym_RBRACE,
  [11610] = 2,
    ACTIONS(142), 1,
      sym_comment,
    ACTIONS(1917), 1,
      anon_sym_DQUOTE,
  [11617] = 2,
    ACTIONS(142), 1,
      sym_comment,
    ACTIONS(1919), 1,
      anon_sym_RBRACE_RBRACE,
  [11624] = 2,
    ACTIONS(142), 1,
      sym_comment,
    ACTIONS(1921), 1,
      anon_sym_RBRACE,
  [11631] = 2,
    ACTIONS(142), 1,
      sym_comment,
    ACTIONS(1923), 1,
      anon_sym_RBRACE_RBRACE,
  [11638] = 2,
    ACTIONS(142), 1,
      sym_comment,
    ACTIONS(1925), 1,
      anon_sym_RBRACE,
  [11645] = 2,
    ACTIONS(142), 1,
      sym_comment,
    ACTIONS(1927), 1,
      anon_sym_RBRACE_RBRACE,
  [11652] = 2,
    ACTIONS(142), 1,
      sym_comment,
    ACTIONS(1929), 1,
      anon_sym_RBRACE_RBRACE,
  [11659] = 2,
    ACTIONS(142), 1,
      sym_comment,
    ACTIONS(1931), 1,
      anon_sym_RBRACE_RBRACE,
  [11666] = 2,
    ACTIONS(142), 1,
      sym_comment,
    ACTIONS(1933), 1,
      anon_sym_RBRACE_RBRACE,
  [11673] = 2,
    ACTIONS(142), 1,
      sym_comment,
    ACTIONS(1935), 1,
      anon_sym_RBRACE_RBRACE,
  [11680] = 2,
    ACTIONS(142), 1,
      sym_comment,
    ACTIONS(1937), 1,
      anon_sym_RBRACE_RBRACE,
  [11687] = 2,
    ACTIONS(142), 1,
      sym_comment,
    ACTIONS(1939), 1,
      anon_sym_RBRACE_RBRACE,
  [11694] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1941), 1,
      aux_sym_xml_close_tag_token1,
  [11701] = 2,
    ACTIONS(142), 1,
      sym_comment,
    ACTIONS(1943), 1,
      anon_sym_COLON,
  [11708] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1945), 1,
      aux_sym_xml_prolog_tag_token1,
  [11715] = 2,
    ACTIONS(142), 1,
      sym_comment,
    ACTIONS(1947), 1,
      anon_sym_GT,
  [11722] = 2,
    ACTIONS(142), 1,
      sym_comment,
    ACTIONS(1949), 1,
      anon_sym_QMARK_GT,
  [11729] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1951), 1,
      aux_sym_xml_close_tag_token1,
  [11736] = 2,
    ACTIONS(142), 1,
      sym_comment,
    ACTIONS(1953), 1,
      anon_sym_SLASH,
  [11743] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1955), 1,
      aux_sym_regex_escaped_char_token1,
  [11750] = 2,
    ACTIONS(142), 1,
      sym_comment,
    ACTIONS(1957), 1,
      anon_sym_RBRACE_RBRACE,
  [11757] = 2,
    ACTIONS(142), 1,
      sym_comment,
    ACTIONS(1959), 1,
      anon_sym_GT,
  [11764] = 2,
    ACTIONS(142), 1,
      sym_comment,
    ACTIONS(1961), 1,
      anon_sym_COLON,
  [11771] = 2,
    ACTIONS(142), 1,
      sym_comment,
    ACTIONS(1963), 1,
      anon_sym_COLON,
  [11778] = 2,
    ACTIONS(142), 1,
      sym_comment,
    ACTIONS(1965), 1,
      anon_sym_COLON,
  [11785] = 2,
    ACTIONS(142), 1,
      sym_comment,
    ACTIONS(1967), 1,
      anon_sym_COLON,
  [11792] = 2,
    ACTIONS(142), 1,
      sym_comment,
    ACTIONS(1969), 1,
      anon_sym_COLON,
  [11799] = 2,
    ACTIONS(142), 1,
      sym_comment,
    ACTIONS(1971), 1,
      anon_sym_COLON,
  [11806] = 2,
    ACTIONS(142), 1,
      sym_comment,
    ACTIONS(1973), 1,
      anon_sym_COLON,
  [11813] = 2,
    ACTIONS(142), 1,
      sym_comment,
    ACTIONS(1975), 1,
      anon_sym_COLON,
  [11820] = 2,
    ACTIONS(142), 1,
      sym_comment,
    ACTIONS(1977), 1,
      anon_sym_COLON,
  [11827] = 2,
    ACTIONS(142), 1,
      sym_comment,
    ACTIONS(1979), 1,
      anon_sym_COLON,
  [11834] = 2,
    ACTIONS(142), 1,
      sym_comment,
    ACTIONS(1981), 1,
      anon_sym_DQUOTE,
  [11841] = 2,
    ACTIONS(142), 1,
      sym_comment,
    ACTIONS(1983), 1,
      anon_sym_COLON,
  [11848] = 2,
    ACTIONS(142), 1,
      sym_comment,
    ACTIONS(1985), 1,
      anon_sym_COLON,
  [11855] = 2,
    ACTIONS(142), 1,
      sym_comment,
    ACTIONS(1987), 1,
      anon_sym_COLON,
  [11862] = 2,
    ACTIONS(142), 1,
      sym_comment,
    ACTIONS(1989), 1,
      anon_sym_COLON,
  [11869] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1991), 1,
      anon_sym_LF,
  [11876] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1993), 1,
      anon_sym_LF,
  [11883] = 2,
    ACTIONS(142), 1,
      sym_comment,
    ACTIONS(1995), 1,
      anon_sym_COLON,
  [11890] = 2,
    ACTIONS(142), 1,
      sym_comment,
    ACTIONS(1997), 1,
      anon_sym_SEMI,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(46)] = 0,
  [SMALL_STATE(47)] = 90,
  [SMALL_STATE(48)] = 180,
  [SMALL_STATE(49)] = 270,
  [SMALL_STATE(50)] = 357,
  [SMALL_STATE(51)] = 475,
  [SMALL_STATE(52)] = 593,
  [SMALL_STATE(53)] = 679,
  [SMALL_STATE(54)] = 765,
  [SMALL_STATE(55)] = 851,
  [SMALL_STATE(56)] = 934,
  [SMALL_STATE(57)] = 1017,
  [SMALL_STATE(58)] = 1100,
  [SMALL_STATE(59)] = 1183,
  [SMALL_STATE(60)] = 1266,
  [SMALL_STATE(61)] = 1349,
  [SMALL_STATE(62)] = 1432,
  [SMALL_STATE(63)] = 1515,
  [SMALL_STATE(64)] = 1598,
  [SMALL_STATE(65)] = 1677,
  [SMALL_STATE(66)] = 1744,
  [SMALL_STATE(67)] = 1811,
  [SMALL_STATE(68)] = 1871,
  [SMALL_STATE(69)] = 1937,
  [SMALL_STATE(70)] = 1997,
  [SMALL_STATE(71)] = 2063,
  [SMALL_STATE(72)] = 2122,
  [SMALL_STATE(73)] = 2181,
  [SMALL_STATE(74)] = 2240,
  [SMALL_STATE(75)] = 2295,
  [SMALL_STATE(76)] = 2378,
  [SMALL_STATE(77)] = 2461,
  [SMALL_STATE(78)] = 2535,
  [SMALL_STATE(79)] = 2606,
  [SMALL_STATE(80)] = 2677,
  [SMALL_STATE(81)] = 2748,
  [SMALL_STATE(82)] = 2820,
  [SMALL_STATE(83)] = 2909,
  [SMALL_STATE(84)] = 2979,
  [SMALL_STATE(85)] = 3049,
  [SMALL_STATE(86)] = 3102,
  [SMALL_STATE(87)] = 3155,
  [SMALL_STATE(88)] = 3201,
  [SMALL_STATE(89)] = 3247,
  [SMALL_STATE(90)] = 3301,
  [SMALL_STATE(91)] = 3347,
  [SMALL_STATE(92)] = 3393,
  [SMALL_STATE(93)] = 3439,
  [SMALL_STATE(94)] = 3481,
  [SMALL_STATE(95)] = 3523,
  [SMALL_STATE(96)] = 3565,
  [SMALL_STATE(97)] = 3607,
  [SMALL_STATE(98)] = 3649,
  [SMALL_STATE(99)] = 3691,
  [SMALL_STATE(100)] = 3733,
  [SMALL_STATE(101)] = 3775,
  [SMALL_STATE(102)] = 3817,
  [SMALL_STATE(103)] = 3859,
  [SMALL_STATE(104)] = 3901,
  [SMALL_STATE(105)] = 3943,
  [SMALL_STATE(106)] = 3985,
  [SMALL_STATE(107)] = 4027,
  [SMALL_STATE(108)] = 4069,
  [SMALL_STATE(109)] = 4111,
  [SMALL_STATE(110)] = 4153,
  [SMALL_STATE(111)] = 4195,
  [SMALL_STATE(112)] = 4237,
  [SMALL_STATE(113)] = 4279,
  [SMALL_STATE(114)] = 4321,
  [SMALL_STATE(115)] = 4363,
  [SMALL_STATE(116)] = 4405,
  [SMALL_STATE(117)] = 4447,
  [SMALL_STATE(118)] = 4490,
  [SMALL_STATE(119)] = 4539,
  [SMALL_STATE(120)] = 4588,
  [SMALL_STATE(121)] = 4639,
  [SMALL_STATE(122)] = 4685,
  [SMALL_STATE(123)] = 4723,
  [SMALL_STATE(124)] = 4769,
  [SMALL_STATE(125)] = 4807,
  [SMALL_STATE(126)] = 4838,
  [SMALL_STATE(127)] = 4869,
  [SMALL_STATE(128)] = 4900,
  [SMALL_STATE(129)] = 4931,
  [SMALL_STATE(130)] = 4962,
  [SMALL_STATE(131)] = 5004,
  [SMALL_STATE(132)] = 5046,
  [SMALL_STATE(133)] = 5085,
  [SMALL_STATE(134)] = 5135,
  [SMALL_STATE(135)] = 5171,
  [SMALL_STATE(136)] = 5220,
  [SMALL_STATE(137)] = 5269,
  [SMALL_STATE(138)] = 5302,
  [SMALL_STATE(139)] = 5351,
  [SMALL_STATE(140)] = 5400,
  [SMALL_STATE(141)] = 5435,
  [SMALL_STATE(142)] = 5484,
  [SMALL_STATE(143)] = 5533,
  [SMALL_STATE(144)] = 5568,
  [SMALL_STATE(145)] = 5617,
  [SMALL_STATE(146)] = 5649,
  [SMALL_STATE(147)] = 5681,
  [SMALL_STATE(148)] = 5706,
  [SMALL_STATE(149)] = 5731,
  [SMALL_STATE(150)] = 5774,
  [SMALL_STATE(151)] = 5799,
  [SMALL_STATE(152)] = 5824,
  [SMALL_STATE(153)] = 5849,
  [SMALL_STATE(154)] = 5878,
  [SMALL_STATE(155)] = 5907,
  [SMALL_STATE(156)] = 5932,
  [SMALL_STATE(157)] = 5957,
  [SMALL_STATE(158)] = 5999,
  [SMALL_STATE(159)] = 6039,
  [SMALL_STATE(160)] = 6081,
  [SMALL_STATE(161)] = 6121,
  [SMALL_STATE(162)] = 6167,
  [SMALL_STATE(163)] = 6209,
  [SMALL_STATE(164)] = 6255,
  [SMALL_STATE(165)] = 6297,
  [SMALL_STATE(166)] = 6343,
  [SMALL_STATE(167)] = 6383,
  [SMALL_STATE(168)] = 6420,
  [SMALL_STATE(169)] = 6457,
  [SMALL_STATE(170)] = 6496,
  [SMALL_STATE(171)] = 6526,
  [SMALL_STATE(172)] = 6556,
  [SMALL_STATE(173)] = 6578,
  [SMALL_STATE(174)] = 6607,
  [SMALL_STATE(175)] = 6634,
  [SMALL_STATE(176)] = 6665,
  [SMALL_STATE(177)] = 6694,
  [SMALL_STATE(178)] = 6723,
  [SMALL_STATE(179)] = 6752,
  [SMALL_STATE(180)] = 6781,
  [SMALL_STATE(181)] = 6810,
  [SMALL_STATE(182)] = 6839,
  [SMALL_STATE(183)] = 6866,
  [SMALL_STATE(184)] = 6895,
  [SMALL_STATE(185)] = 6923,
  [SMALL_STATE(186)] = 6949,
  [SMALL_STATE(187)] = 6977,
  [SMALL_STATE(188)] = 7005,
  [SMALL_STATE(189)] = 7035,
  [SMALL_STATE(190)] = 7063,
  [SMALL_STATE(191)] = 7091,
  [SMALL_STATE(192)] = 7117,
  [SMALL_STATE(193)] = 7145,
  [SMALL_STATE(194)] = 7173,
  [SMALL_STATE(195)] = 7199,
  [SMALL_STATE(196)] = 7225,
  [SMALL_STATE(197)] = 7253,
  [SMALL_STATE(198)] = 7279,
  [SMALL_STATE(199)] = 7305,
  [SMALL_STATE(200)] = 7333,
  [SMALL_STATE(201)] = 7361,
  [SMALL_STATE(202)] = 7389,
  [SMALL_STATE(203)] = 7417,
  [SMALL_STATE(204)] = 7445,
  [SMALL_STATE(205)] = 7473,
  [SMALL_STATE(206)] = 7499,
  [SMALL_STATE(207)] = 7525,
  [SMALL_STATE(208)] = 7544,
  [SMALL_STATE(209)] = 7569,
  [SMALL_STATE(210)] = 7592,
  [SMALL_STATE(211)] = 7617,
  [SMALL_STATE(212)] = 7640,
  [SMALL_STATE(213)] = 7663,
  [SMALL_STATE(214)] = 7686,
  [SMALL_STATE(215)] = 7711,
  [SMALL_STATE(216)] = 7734,
  [SMALL_STATE(217)] = 7752,
  [SMALL_STATE(218)] = 7770,
  [SMALL_STATE(219)] = 7794,
  [SMALL_STATE(220)] = 7818,
  [SMALL_STATE(221)] = 7842,
  [SMALL_STATE(222)] = 7866,
  [SMALL_STATE(223)] = 7882,
  [SMALL_STATE(224)] = 7898,
  [SMALL_STATE(225)] = 7922,
  [SMALL_STATE(226)] = 7937,
  [SMALL_STATE(227)] = 7956,
  [SMALL_STATE(228)] = 7975,
  [SMALL_STATE(229)] = 7994,
  [SMALL_STATE(230)] = 8015,
  [SMALL_STATE(231)] = 8038,
  [SMALL_STATE(232)] = 8057,
  [SMALL_STATE(233)] = 8074,
  [SMALL_STATE(234)] = 8099,
  [SMALL_STATE(235)] = 8116,
  [SMALL_STATE(236)] = 8133,
  [SMALL_STATE(237)] = 8148,
  [SMALL_STATE(238)] = 8173,
  [SMALL_STATE(239)] = 8190,
  [SMALL_STATE(240)] = 8211,
  [SMALL_STATE(241)] = 8225,
  [SMALL_STATE(242)] = 8241,
  [SMALL_STATE(243)] = 8259,
  [SMALL_STATE(244)] = 8279,
  [SMALL_STATE(245)] = 8295,
  [SMALL_STATE(246)] = 8315,
  [SMALL_STATE(247)] = 8335,
  [SMALL_STATE(248)] = 8355,
  [SMALL_STATE(249)] = 8367,
  [SMALL_STATE(250)] = 8381,
  [SMALL_STATE(251)] = 8401,
  [SMALL_STATE(252)] = 8419,
  [SMALL_STATE(253)] = 8435,
  [SMALL_STATE(254)] = 8455,
  [SMALL_STATE(255)] = 8471,
  [SMALL_STATE(256)] = 8487,
  [SMALL_STATE(257)] = 8507,
  [SMALL_STATE(258)] = 8527,
  [SMALL_STATE(259)] = 8547,
  [SMALL_STATE(260)] = 8565,
  [SMALL_STATE(261)] = 8585,
  [SMALL_STATE(262)] = 8599,
  [SMALL_STATE(263)] = 8619,
  [SMALL_STATE(264)] = 8635,
  [SMALL_STATE(265)] = 8655,
  [SMALL_STATE(266)] = 8666,
  [SMALL_STATE(267)] = 8683,
  [SMALL_STATE(268)] = 8694,
  [SMALL_STATE(269)] = 8705,
  [SMALL_STATE(270)] = 8722,
  [SMALL_STATE(271)] = 8739,
  [SMALL_STATE(272)] = 8754,
  [SMALL_STATE(273)] = 8771,
  [SMALL_STATE(274)] = 8782,
  [SMALL_STATE(275)] = 8799,
  [SMALL_STATE(276)] = 8816,
  [SMALL_STATE(277)] = 8833,
  [SMALL_STATE(278)] = 8850,
  [SMALL_STATE(279)] = 8861,
  [SMALL_STATE(280)] = 8876,
  [SMALL_STATE(281)] = 8889,
  [SMALL_STATE(282)] = 8906,
  [SMALL_STATE(283)] = 8921,
  [SMALL_STATE(284)] = 8934,
  [SMALL_STATE(285)] = 8951,
  [SMALL_STATE(286)] = 8966,
  [SMALL_STATE(287)] = 8977,
  [SMALL_STATE(288)] = 8994,
  [SMALL_STATE(289)] = 9011,
  [SMALL_STATE(290)] = 9028,
  [SMALL_STATE(291)] = 9039,
  [SMALL_STATE(292)] = 9056,
  [SMALL_STATE(293)] = 9069,
  [SMALL_STATE(294)] = 9080,
  [SMALL_STATE(295)] = 9097,
  [SMALL_STATE(296)] = 9114,
  [SMALL_STATE(297)] = 9131,
  [SMALL_STATE(298)] = 9142,
  [SMALL_STATE(299)] = 9159,
  [SMALL_STATE(300)] = 9170,
  [SMALL_STATE(301)] = 9181,
  [SMALL_STATE(302)] = 9192,
  [SMALL_STATE(303)] = 9205,
  [SMALL_STATE(304)] = 9216,
  [SMALL_STATE(305)] = 9229,
  [SMALL_STATE(306)] = 9240,
  [SMALL_STATE(307)] = 9251,
  [SMALL_STATE(308)] = 9264,
  [SMALL_STATE(309)] = 9275,
  [SMALL_STATE(310)] = 9292,
  [SMALL_STATE(311)] = 9305,
  [SMALL_STATE(312)] = 9322,
  [SMALL_STATE(313)] = 9333,
  [SMALL_STATE(314)] = 9344,
  [SMALL_STATE(315)] = 9361,
  [SMALL_STATE(316)] = 9378,
  [SMALL_STATE(317)] = 9389,
  [SMALL_STATE(318)] = 9406,
  [SMALL_STATE(319)] = 9416,
  [SMALL_STATE(320)] = 9426,
  [SMALL_STATE(321)] = 9436,
  [SMALL_STATE(322)] = 9446,
  [SMALL_STATE(323)] = 9456,
  [SMALL_STATE(324)] = 9470,
  [SMALL_STATE(325)] = 9480,
  [SMALL_STATE(326)] = 9490,
  [SMALL_STATE(327)] = 9504,
  [SMALL_STATE(328)] = 9514,
  [SMALL_STATE(329)] = 9524,
  [SMALL_STATE(330)] = 9534,
  [SMALL_STATE(331)] = 9544,
  [SMALL_STATE(332)] = 9554,
  [SMALL_STATE(333)] = 9568,
  [SMALL_STATE(334)] = 9582,
  [SMALL_STATE(335)] = 9596,
  [SMALL_STATE(336)] = 9606,
  [SMALL_STATE(337)] = 9622,
  [SMALL_STATE(338)] = 9636,
  [SMALL_STATE(339)] = 9650,
  [SMALL_STATE(340)] = 9660,
  [SMALL_STATE(341)] = 9670,
  [SMALL_STATE(342)] = 9680,
  [SMALL_STATE(343)] = 9694,
  [SMALL_STATE(344)] = 9708,
  [SMALL_STATE(345)] = 9718,
  [SMALL_STATE(346)] = 9728,
  [SMALL_STATE(347)] = 9742,
  [SMALL_STATE(348)] = 9756,
  [SMALL_STATE(349)] = 9770,
  [SMALL_STATE(350)] = 9780,
  [SMALL_STATE(351)] = 9794,
  [SMALL_STATE(352)] = 9804,
  [SMALL_STATE(353)] = 9820,
  [SMALL_STATE(354)] = 9829,
  [SMALL_STATE(355)] = 9838,
  [SMALL_STATE(356)] = 9851,
  [SMALL_STATE(357)] = 9864,
  [SMALL_STATE(358)] = 9877,
  [SMALL_STATE(359)] = 9890,
  [SMALL_STATE(360)] = 9903,
  [SMALL_STATE(361)] = 9912,
  [SMALL_STATE(362)] = 9921,
  [SMALL_STATE(363)] = 9934,
  [SMALL_STATE(364)] = 9943,
  [SMALL_STATE(365)] = 9956,
  [SMALL_STATE(366)] = 9969,
  [SMALL_STATE(367)] = 9978,
  [SMALL_STATE(368)] = 9991,
  [SMALL_STATE(369)] = 10000,
  [SMALL_STATE(370)] = 10013,
  [SMALL_STATE(371)] = 10026,
  [SMALL_STATE(372)] = 10039,
  [SMALL_STATE(373)] = 10052,
  [SMALL_STATE(374)] = 10061,
  [SMALL_STATE(375)] = 10070,
  [SMALL_STATE(376)] = 10081,
  [SMALL_STATE(377)] = 10094,
  [SMALL_STATE(378)] = 10107,
  [SMALL_STATE(379)] = 10116,
  [SMALL_STATE(380)] = 10127,
  [SMALL_STATE(381)] = 10140,
  [SMALL_STATE(382)] = 10151,
  [SMALL_STATE(383)] = 10162,
  [SMALL_STATE(384)] = 10173,
  [SMALL_STATE(385)] = 10186,
  [SMALL_STATE(386)] = 10199,
  [SMALL_STATE(387)] = 10212,
  [SMALL_STATE(388)] = 10225,
  [SMALL_STATE(389)] = 10234,
  [SMALL_STATE(390)] = 10247,
  [SMALL_STATE(391)] = 10260,
  [SMALL_STATE(392)] = 10273,
  [SMALL_STATE(393)] = 10286,
  [SMALL_STATE(394)] = 10295,
  [SMALL_STATE(395)] = 10308,
  [SMALL_STATE(396)] = 10321,
  [SMALL_STATE(397)] = 10334,
  [SMALL_STATE(398)] = 10347,
  [SMALL_STATE(399)] = 10355,
  [SMALL_STATE(400)] = 10363,
  [SMALL_STATE(401)] = 10371,
  [SMALL_STATE(402)] = 10379,
  [SMALL_STATE(403)] = 10387,
  [SMALL_STATE(404)] = 10395,
  [SMALL_STATE(405)] = 10403,
  [SMALL_STATE(406)] = 10411,
  [SMALL_STATE(407)] = 10419,
  [SMALL_STATE(408)] = 10427,
  [SMALL_STATE(409)] = 10435,
  [SMALL_STATE(410)] = 10443,
  [SMALL_STATE(411)] = 10451,
  [SMALL_STATE(412)] = 10461,
  [SMALL_STATE(413)] = 10469,
  [SMALL_STATE(414)] = 10477,
  [SMALL_STATE(415)] = 10485,
  [SMALL_STATE(416)] = 10493,
  [SMALL_STATE(417)] = 10501,
  [SMALL_STATE(418)] = 10509,
  [SMALL_STATE(419)] = 10517,
  [SMALL_STATE(420)] = 10525,
  [SMALL_STATE(421)] = 10533,
  [SMALL_STATE(422)] = 10541,
  [SMALL_STATE(423)] = 10549,
  [SMALL_STATE(424)] = 10557,
  [SMALL_STATE(425)] = 10565,
  [SMALL_STATE(426)] = 10573,
  [SMALL_STATE(427)] = 10581,
  [SMALL_STATE(428)] = 10591,
  [SMALL_STATE(429)] = 10599,
  [SMALL_STATE(430)] = 10607,
  [SMALL_STATE(431)] = 10615,
  [SMALL_STATE(432)] = 10625,
  [SMALL_STATE(433)] = 10633,
  [SMALL_STATE(434)] = 10641,
  [SMALL_STATE(435)] = 10651,
  [SMALL_STATE(436)] = 10659,
  [SMALL_STATE(437)] = 10667,
  [SMALL_STATE(438)] = 10677,
  [SMALL_STATE(439)] = 10685,
  [SMALL_STATE(440)] = 10695,
  [SMALL_STATE(441)] = 10705,
  [SMALL_STATE(442)] = 10715,
  [SMALL_STATE(443)] = 10723,
  [SMALL_STATE(444)] = 10731,
  [SMALL_STATE(445)] = 10741,
  [SMALL_STATE(446)] = 10749,
  [SMALL_STATE(447)] = 10757,
  [SMALL_STATE(448)] = 10765,
  [SMALL_STATE(449)] = 10773,
  [SMALL_STATE(450)] = 10783,
  [SMALL_STATE(451)] = 10791,
  [SMALL_STATE(452)] = 10799,
  [SMALL_STATE(453)] = 10809,
  [SMALL_STATE(454)] = 10817,
  [SMALL_STATE(455)] = 10825,
  [SMALL_STATE(456)] = 10833,
  [SMALL_STATE(457)] = 10841,
  [SMALL_STATE(458)] = 10849,
  [SMALL_STATE(459)] = 10859,
  [SMALL_STATE(460)] = 10869,
  [SMALL_STATE(461)] = 10879,
  [SMALL_STATE(462)] = 10889,
  [SMALL_STATE(463)] = 10899,
  [SMALL_STATE(464)] = 10909,
  [SMALL_STATE(465)] = 10919,
  [SMALL_STATE(466)] = 10927,
  [SMALL_STATE(467)] = 10937,
  [SMALL_STATE(468)] = 10947,
  [SMALL_STATE(469)] = 10957,
  [SMALL_STATE(470)] = 10965,
  [SMALL_STATE(471)] = 10975,
  [SMALL_STATE(472)] = 10983,
  [SMALL_STATE(473)] = 10993,
  [SMALL_STATE(474)] = 11003,
  [SMALL_STATE(475)] = 11011,
  [SMALL_STATE(476)] = 11021,
  [SMALL_STATE(477)] = 11029,
  [SMALL_STATE(478)] = 11037,
  [SMALL_STATE(479)] = 11047,
  [SMALL_STATE(480)] = 11057,
  [SMALL_STATE(481)] = 11065,
  [SMALL_STATE(482)] = 11073,
  [SMALL_STATE(483)] = 11081,
  [SMALL_STATE(484)] = 11089,
  [SMALL_STATE(485)] = 11099,
  [SMALL_STATE(486)] = 11109,
  [SMALL_STATE(487)] = 11117,
  [SMALL_STATE(488)] = 11125,
  [SMALL_STATE(489)] = 11133,
  [SMALL_STATE(490)] = 11141,
  [SMALL_STATE(491)] = 11149,
  [SMALL_STATE(492)] = 11157,
  [SMALL_STATE(493)] = 11165,
  [SMALL_STATE(494)] = 11173,
  [SMALL_STATE(495)] = 11183,
  [SMALL_STATE(496)] = 11191,
  [SMALL_STATE(497)] = 11199,
  [SMALL_STATE(498)] = 11209,
  [SMALL_STATE(499)] = 11217,
  [SMALL_STATE(500)] = 11225,
  [SMALL_STATE(501)] = 11233,
  [SMALL_STATE(502)] = 11241,
  [SMALL_STATE(503)] = 11251,
  [SMALL_STATE(504)] = 11261,
  [SMALL_STATE(505)] = 11269,
  [SMALL_STATE(506)] = 11279,
  [SMALL_STATE(507)] = 11289,
  [SMALL_STATE(508)] = 11299,
  [SMALL_STATE(509)] = 11309,
  [SMALL_STATE(510)] = 11317,
  [SMALL_STATE(511)] = 11327,
  [SMALL_STATE(512)] = 11337,
  [SMALL_STATE(513)] = 11347,
  [SMALL_STATE(514)] = 11355,
  [SMALL_STATE(515)] = 11365,
  [SMALL_STATE(516)] = 11375,
  [SMALL_STATE(517)] = 11385,
  [SMALL_STATE(518)] = 11393,
  [SMALL_STATE(519)] = 11403,
  [SMALL_STATE(520)] = 11413,
  [SMALL_STATE(521)] = 11423,
  [SMALL_STATE(522)] = 11431,
  [SMALL_STATE(523)] = 11439,
  [SMALL_STATE(524)] = 11449,
  [SMALL_STATE(525)] = 11456,
  [SMALL_STATE(526)] = 11463,
  [SMALL_STATE(527)] = 11470,
  [SMALL_STATE(528)] = 11477,
  [SMALL_STATE(529)] = 11484,
  [SMALL_STATE(530)] = 11491,
  [SMALL_STATE(531)] = 11498,
  [SMALL_STATE(532)] = 11505,
  [SMALL_STATE(533)] = 11512,
  [SMALL_STATE(534)] = 11519,
  [SMALL_STATE(535)] = 11526,
  [SMALL_STATE(536)] = 11533,
  [SMALL_STATE(537)] = 11540,
  [SMALL_STATE(538)] = 11547,
  [SMALL_STATE(539)] = 11554,
  [SMALL_STATE(540)] = 11561,
  [SMALL_STATE(541)] = 11568,
  [SMALL_STATE(542)] = 11575,
  [SMALL_STATE(543)] = 11582,
  [SMALL_STATE(544)] = 11589,
  [SMALL_STATE(545)] = 11596,
  [SMALL_STATE(546)] = 11603,
  [SMALL_STATE(547)] = 11610,
  [SMALL_STATE(548)] = 11617,
  [SMALL_STATE(549)] = 11624,
  [SMALL_STATE(550)] = 11631,
  [SMALL_STATE(551)] = 11638,
  [SMALL_STATE(552)] = 11645,
  [SMALL_STATE(553)] = 11652,
  [SMALL_STATE(554)] = 11659,
  [SMALL_STATE(555)] = 11666,
  [SMALL_STATE(556)] = 11673,
  [SMALL_STATE(557)] = 11680,
  [SMALL_STATE(558)] = 11687,
  [SMALL_STATE(559)] = 11694,
  [SMALL_STATE(560)] = 11701,
  [SMALL_STATE(561)] = 11708,
  [SMALL_STATE(562)] = 11715,
  [SMALL_STATE(563)] = 11722,
  [SMALL_STATE(564)] = 11729,
  [SMALL_STATE(565)] = 11736,
  [SMALL_STATE(566)] = 11743,
  [SMALL_STATE(567)] = 11750,
  [SMALL_STATE(568)] = 11757,
  [SMALL_STATE(569)] = 11764,
  [SMALL_STATE(570)] = 11771,
  [SMALL_STATE(571)] = 11778,
  [SMALL_STATE(572)] = 11785,
  [SMALL_STATE(573)] = 11792,
  [SMALL_STATE(574)] = 11799,
  [SMALL_STATE(575)] = 11806,
  [SMALL_STATE(576)] = 11813,
  [SMALL_STATE(577)] = 11820,
  [SMALL_STATE(578)] = 11827,
  [SMALL_STATE(579)] = 11834,
  [SMALL_STATE(580)] = 11841,
  [SMALL_STATE(581)] = 11848,
  [SMALL_STATE(582)] = 11855,
  [SMALL_STATE(583)] = 11862,
  [SMALL_STATE(584)] = 11869,
  [SMALL_STATE(585)] = 11876,
  [SMALL_STATE(586)] = 11883,
  [SMALL_STATE(587)] = 11890,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hurl_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(278),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_options_section_repeat1, 2, 0, 0),
  [15] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_options_section_repeat1, 2, 0, 0),
  [17] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_options_section_repeat1, 2, 0, 0), SHIFT_REPEAT(583),
  [20] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_options_section_repeat1, 2, 0, 0), SHIFT_REPEAT(582),
  [23] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_options_section_repeat1, 2, 0, 0), SHIFT_REPEAT(581),
  [26] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_options_section_repeat1, 2, 0, 0), SHIFT_REPEAT(580),
  [29] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_options_section_repeat1, 2, 0, 0), SHIFT_REPEAT(578),
  [32] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_options_section_repeat1, 2, 0, 0), SHIFT_REPEAT(577),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_options_section_repeat1, 2, 0, 0), SHIFT_REPEAT(576),
  [38] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_options_section_repeat1, 2, 0, 0), SHIFT_REPEAT(575),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_options_section_repeat1, 2, 0, 0), SHIFT_REPEAT(574),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_options_section, 3, 0, 4),
  [46] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_options_section, 3, 0, 4),
  [48] = {.entry = {.count = 1, .reusable = false}}, SHIFT(583),
  [50] = {.entry = {.count = 1, .reusable = false}}, SHIFT(582),
  [52] = {.entry = {.count = 1, .reusable = false}}, SHIFT(581),
  [54] = {.entry = {.count = 1, .reusable = false}}, SHIFT(580),
  [56] = {.entry = {.count = 1, .reusable = false}}, SHIFT(578),
  [58] = {.entry = {.count = 1, .reusable = false}}, SHIFT(577),
  [60] = {.entry = {.count = 1, .reusable = false}}, SHIFT(576),
  [62] = {.entry = {.count = 1, .reusable = false}}, SHIFT(575),
  [64] = {.entry = {.count = 1, .reusable = false}}, SHIFT(574),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_options_section, 2, 0, 4),
  [68] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_options_section, 2, 0, 4),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__comment_or_new_line, 1, 0, 0),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__comment_or_new_line, 1, 0, 0),
  [76] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__comment_or_new_line_repeat1, 2, 0, 0),
  [80] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__comment_or_new_line_repeat1, 2, 0, 0), SHIFT_REPEAT(6),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__comment_or_new_line_repeat1, 2, 0, 0),
  [85] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__comment_or_new_line_repeat1, 2, 0, 0), SHIFT_REPEAT(6),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(440),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [96] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [116] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [136] = {.entry = {.count = 1, .reusable = false}}, SHIFT(348),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(441),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 3, 0, 0),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 3, 0, 0),
  [148] = {.entry = {.count = 1, .reusable = false}}, SHIFT(288),
  [150] = {.entry = {.count = 1, .reusable = false}}, SHIFT(289),
  [152] = {.entry = {.count = 1, .reusable = false}}, SHIFT(291),
  [154] = {.entry = {.count = 1, .reusable = false}}, SHIFT(295),
  [156] = {.entry = {.count = 1, .reusable = false}}, SHIFT(309),
  [158] = {.entry = {.count = 1, .reusable = false}}, SHIFT(311),
  [160] = {.entry = {.count = 1, .reusable = false}}, SHIFT(456),
  [162] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [164] = {.entry = {.count = 1, .reusable = false}}, SHIFT(233),
  [166] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [168] = {.entry = {.count = 1, .reusable = false}}, SHIFT(452),
  [170] = {.entry = {.count = 1, .reusable = false}}, SHIFT(532),
  [172] = {.entry = {.count = 1, .reusable = false}}, SHIFT(533),
  [174] = {.entry = {.count = 1, .reusable = false}}, SHIFT(342),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [178] = {.entry = {.count = 1, .reusable = false}}, SHIFT(280),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [182] = {.entry = {.count = 1, .reusable = false}}, SHIFT(201),
  [184] = {.entry = {.count = 1, .reusable = false}}, SHIFT(217),
  [186] = {.entry = {.count = 1, .reusable = false}}, SHIFT(430),
  [188] = {.entry = {.count = 1, .reusable = false}}, SHIFT(429),
  [190] = {.entry = {.count = 1, .reusable = false}}, SHIFT(384),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 2, 0, 0),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 2, 0, 0),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 4, 0, 0),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 4, 0, 0),
  [204] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_capture_repeat1, 2, 0, 0), SHIFT_REPEAT(27),
  [207] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_capture_repeat1, 2, 0, 0), SHIFT_REPEAT(439),
  [210] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_capture_repeat1, 2, 0, 0), SHIFT_REPEAT(440),
  [213] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_capture_repeat1, 2, 0, 0), SHIFT_REPEAT(350),
  [216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_capture_repeat1, 2, 0, 0),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_capture_repeat1, 2, 0, 0),
  [220] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_capture_repeat1, 2, 0, 0), SHIFT_REPEAT(376),
  [223] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_capture_repeat1, 2, 0, 0), SHIFT_REPEAT(348),
  [226] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_capture_repeat1, 2, 0, 0), SHIFT_REPEAT(347),
  [229] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_capture_repeat1, 2, 0, 0), SHIFT_REPEAT(441),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 5, 0, 0),
  [234] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 5, 0, 0),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response, 4, 0, 0),
  [238] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_response, 4, 0, 0),
  [240] = {.entry = {.count = 1, .reusable = false}}, SHIFT(269),
  [242] = {.entry = {.count = 1, .reusable = false}}, SHIFT(275),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response, 3, 0, 0),
  [246] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_response, 3, 0, 0),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template, 3, 0, 2),
  [250] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_template, 3, 0, 2),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regex, 3, 0, 0),
  [254] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_regex, 3, 0, 0),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regex, 2, 0, 0),
  [258] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_regex, 2, 0, 0),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_string, 2, 0, 0),
  [262] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_string, 2, 0, 0),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_string, 3, 0, 0),
  [266] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_string, 3, 0, 0),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_replace_filter, 3, 0, 3),
  [270] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_replace_filter, 3, 0, 3),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_replace_regex_filter, 3, 0, 3),
  [274] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_replace_regex_filter, 3, 0, 3),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_filter_key, 1, 0, 3),
  [278] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_filter_key, 1, 0, 3),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_split_filter, 2, 0, 3),
  [282] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_split_filter, 2, 0, 3),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filter, 1, 0, 0),
  [286] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_filter, 1, 0, 0),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nth_filter, 2, 0, 3),
  [290] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nth_filter, 2, 0, 3),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regex_filter, 2, 0, 3),
  [294] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_regex_filter, 2, 0, 3),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_filter, 2, 0, 3),
  [298] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_filter, 2, 0, 3),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xpath_filter, 2, 0, 3),
  [302] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xpath_filter, 2, 0, 3),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_certificate_query, 4, 0, 9),
  [306] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_certificate_query, 4, 0, 9),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cookie_query, 2, 0, 9),
  [310] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cookie_query, 2, 0, 9),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_query, 2, 0, 9),
  [314] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_query, 2, 0, 9),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_query, 1, 0, 9),
  [318] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_query, 1, 0, 9),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_query, 2, 0, 9),
  [322] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header_query, 2, 0, 9),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regex_query, 2, 0, 9),
  [326] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_regex_query, 2, 0, 9),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query, 1, 0, 0),
  [330] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query, 1, 0, 0),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xpath_query, 2, 0, 9),
  [334] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xpath_query, 2, 0, 9),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jsonpath_query, 2, 0, 9),
  [338] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_jsonpath_query, 2, 0, 9),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_asserts_section, 3, 0, 4),
  [342] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_asserts_section, 3, 0, 4),
  [344] = {.entry = {.count = 1, .reusable = false}}, SHIFT(467),
  [346] = {.entry = {.count = 1, .reusable = false}}, SHIFT(466),
  [348] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [350] = {.entry = {.count = 1, .reusable = false}}, SHIFT(464),
  [352] = {.entry = {.count = 1, .reusable = false}}, SHIFT(463),
  [354] = {.entry = {.count = 1, .reusable = false}}, SHIFT(462),
  [356] = {.entry = {.count = 1, .reusable = false}}, SHIFT(343),
  [358] = {.entry = {.count = 1, .reusable = false}}, SHIFT(543),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_asserts_section, 2, 0, 4),
  [362] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_asserts_section, 2, 0, 4),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_asserts_section_repeat1, 2, 0, 0),
  [366] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_asserts_section_repeat1, 2, 0, 0),
  [368] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_asserts_section_repeat1, 2, 0, 0), SHIFT_REPEAT(467),
  [371] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_asserts_section_repeat1, 2, 0, 0), SHIFT_REPEAT(466),
  [374] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_asserts_section_repeat1, 2, 0, 0), SHIFT_REPEAT(37),
  [377] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_asserts_section_repeat1, 2, 0, 0), SHIFT_REPEAT(464),
  [380] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_asserts_section_repeat1, 2, 0, 0), SHIFT_REPEAT(463),
  [383] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_asserts_section_repeat1, 2, 0, 0), SHIFT_REPEAT(462),
  [386] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_asserts_section_repeat1, 2, 0, 0), SHIFT_REPEAT(343),
  [389] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_asserts_section_repeat1, 2, 0, 0), SHIFT_REPEAT(543),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multipart_form_data_section, 3, 0, 4),
  [394] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multipart_form_data_section, 3, 0, 4),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_multipart_form_data_section_repeat1, 2, 0, 0),
  [398] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_multipart_form_data_section_repeat1, 2, 0, 0),
  [400] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_multipart_form_data_section_repeat1, 2, 0, 0), SHIFT_REPEAT(362),
  [403] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multipart_form_data_section_repeat1, 2, 0, 0), SHIFT_REPEAT(280),
  [406] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_multipart_form_data_section_repeat1, 2, 0, 0), SHIFT_REPEAT(280),
  [409] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_multipart_form_data_section_repeat1, 2, 0, 0), SHIFT_REPEAT(319),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multipart_form_data_section, 2, 0, 4),
  [414] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multipart_form_data_section, 2, 0, 4),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_request_repeat1, 2, 0, 0),
  [418] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_request_repeat1, 2, 0, 0),
  [420] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_request_repeat1, 2, 0, 0), SHIFT_REPEAT(362),
  [423] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat1, 2, 0, 0), SHIFT_REPEAT(280),
  [426] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_request_repeat1, 2, 0, 0), SHIFT_REPEAT(280),
  [429] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_request_repeat1, 2, 0, 0), SHIFT_REPEAT(319),
  [432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response, 5, 0, 0),
  [434] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_response, 5, 0, 0),
  [436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_basic_auth_section_repeat1, 2, 0, 0),
  [438] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_basic_auth_section_repeat1, 2, 0, 0),
  [440] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_basic_auth_section_repeat1, 2, 0, 0), SHIFT_REPEAT(362),
  [443] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_basic_auth_section_repeat1, 2, 0, 0), SHIFT_REPEAT(280),
  [446] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_basic_auth_section_repeat1, 2, 0, 0), SHIFT_REPEAT(280),
  [449] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_basic_auth_section_repeat1, 2, 0, 0), SHIFT_REPEAT(319),
  [452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_basic_auth_section, 3, 0, 4),
  [454] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_basic_auth_section, 3, 0, 4),
  [456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_basic_auth_section, 2, 0, 4),
  [458] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_basic_auth_section, 2, 0, 4),
  [460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_form_params_section, 5, 0, 4),
  [462] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_form_params_section, 5, 0, 4),
  [464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_string_params_section, 5, 0, 4),
  [466] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query_string_params_section, 5, 0, 4),
  [468] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_string_params_section, 3, 0, 4),
  [470] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query_string_params_section, 3, 0, 4),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cookies_section, 5, 0, 4),
  [474] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cookies_section, 5, 0, 4),
  [476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_form_params_section, 4, 0, 4),
  [478] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_form_params_section, 4, 0, 4),
  [480] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cookies_section, 4, 0, 4),
  [482] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cookies_section, 4, 0, 4),
  [484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_form_params_section, 3, 0, 4),
  [486] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_form_params_section, 3, 0, 4),
  [488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_string_params_section, 4, 0, 4),
  [490] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query_string_params_section, 4, 0, 4),
  [492] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cookies_section, 3, 0, 4),
  [494] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cookies_section, 3, 0, 4),
  [496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_request_repeat2, 2, 0, 0),
  [498] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_request_repeat2, 2, 0, 0),
  [500] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat2, 2, 0, 0), SHIFT_REPEAT(288),
  [503] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat2, 2, 0, 0), SHIFT_REPEAT(289),
  [506] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat2, 2, 0, 0), SHIFT_REPEAT(291),
  [509] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat2, 2, 0, 0), SHIFT_REPEAT(295),
  [512] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat2, 2, 0, 0), SHIFT_REPEAT(309),
  [515] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat2, 2, 0, 0), SHIFT_REPEAT(311),
  [518] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__comment_or_new_line_repeat1, 2, 0, 0), SHIFT_REPEAT(65),
  [521] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__comment_or_new_line_repeat1, 2, 0, 0), SHIFT_REPEAT(65),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [526] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assert, 4, 0, 0),
  [530] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assert, 4, 0, 0),
  [532] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__comment_or_new_line_repeat1, 2, 0, 0), SHIFT_REPEAT(68),
  [535] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__comment_or_new_line_repeat1, 2, 0, 0), SHIFT_REPEAT(68),
  [538] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assert, 3, 0, 0),
  [540] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assert, 3, 0, 0),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [544] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [546] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 2, 0, 0),
  [548] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 2, 0, 0),
  [550] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request_section, 1, 0, 0),
  [552] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request_section, 1, 0, 0),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [556] = {.entry = {.count = 1, .reusable = false}}, SHIFT(276),
  [558] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [560] = {.entry = {.count = 1, .reusable = false}}, SHIFT(514),
  [562] = {.entry = {.count = 1, .reusable = false}}, SHIFT(515),
  [564] = {.entry = {.count = 1, .reusable = false}}, SHIFT(337),
  [566] = {.entry = {.count = 1, .reusable = false}}, SHIFT(371),
  [568] = {.entry = {.count = 1, .reusable = false}}, SHIFT(323),
  [570] = {.entry = {.count = 1, .reusable = false}}, SHIFT(326),
  [572] = {.entry = {.count = 1, .reusable = false}}, SHIFT(518),
  [574] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [578] = {.entry = {.count = 1, .reusable = false}}, SHIFT(272),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [582] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_captures_section, 2, 0, 4),
  [584] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_captures_section, 2, 0, 4),
  [586] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_captures_section, 3, 0, 4),
  [588] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_captures_section, 3, 0, 4),
  [590] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_captures_section_repeat1, 2, 0, 0),
  [592] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_captures_section_repeat1, 2, 0, 0),
  [594] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_captures_section_repeat1, 2, 0, 0), SHIFT_REPEAT(362),
  [597] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_captures_section_repeat1, 2, 0, 0), SHIFT_REPEAT(280),
  [600] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_captures_section_repeat1, 2, 0, 0), SHIFT_REPEAT(280),
  [603] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_captures_section_repeat1, 2, 0, 0), SHIFT_REPEAT(319),
  [606] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_capture_repeat1, 2, 0, 0), SHIFT_REPEAT(111),
  [609] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_capture_repeat1, 2, 0, 0), SHIFT_REPEAT(514),
  [612] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_capture_repeat1, 2, 0, 0), SHIFT_REPEAT(515),
  [615] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_capture_repeat1, 2, 0, 0), SHIFT_REPEAT(337),
  [618] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_capture_repeat1, 2, 0, 0), SHIFT_REPEAT(371),
  [621] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_capture_repeat1, 2, 0, 0), SHIFT_REPEAT(323),
  [624] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_capture_repeat1, 2, 0, 0), SHIFT_REPEAT(326),
  [627] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_capture_repeat1, 2, 0, 0), SHIFT_REPEAT(518),
  [630] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 2, 0, 0),
  [632] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 1, 0, 0),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [636] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [638] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__comment_or_new_line_repeat1, 2, 0, 0), SHIFT_REPEAT(86),
  [641] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__comment_or_new_line_repeat1, 2, 0, 0), SHIFT_REPEAT(86),
  [644] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_capture, 6, 0, 15),
  [646] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_capture, 6, 0, 15),
  [648] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_response_repeat1, 2, 0, 0),
  [650] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_response_repeat1, 2, 0, 0),
  [652] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_response_repeat1, 2, 0, 0), SHIFT_REPEAT(269),
  [655] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_response_repeat1, 2, 0, 0), SHIFT_REPEAT(275),
  [658] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_capture, 4, 0, 0),
  [660] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_capture, 4, 0, 0),
  [662] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_capture, 5, 0, 14),
  [664] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_capture, 5, 0, 14),
  [666] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_capture, 5, 0, 0),
  [668] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_capture, 5, 0, 0),
  [670] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response_section, 1, 0, 0),
  [672] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_response_section, 1, 0, 0),
  [674] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_name, 2, 0, 0),
  [676] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_name, 2, 0, 0),
  [678] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entry, 1, 0, 0),
  [680] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_entry, 1, 0, 0),
  [682] = {.entry = {.count = 1, .reusable = false}}, SHIFT(501),
  [684] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entry, 2, 0, 0),
  [686] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_entry, 2, 0, 0),
  [688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(449),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(460),
  [692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(461),
  [696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(468),
  [698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(473),
  [700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(579),
  [704] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_hurl_file_repeat1, 2, 0, 0),
  [706] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_hurl_file_repeat1, 2, 0, 0), SHIFT_REPEAT(153),
  [709] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_hurl_file_repeat1, 2, 0, 0), SHIFT_REPEAT(278),
  [712] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_hurl_file_repeat1, 2, 0, 0), SHIFT_REPEAT(153),
  [715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [717] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [719] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hurl_file, 1, 0, 0),
  [721] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__comment_or_new_line_repeat1, 2, 0, 0), SHIFT_REPEAT(124),
  [724] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__comment_or_new_line_repeat1, 2, 0, 0), SHIFT_REPEAT(124),
  [727] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 6, 0, 0),
  [729] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 6, 0, 0),
  [731] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 2, 0, 0),
  [733] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_body, 2, 0, 0),
  [735] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hurl_file, 2, 0, 0),
  [737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [739] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [741] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_definition, 2, 0, 0),
  [743] = {.entry = {.count = 1, .reusable = false}}, SHIFT(417),
  [745] = {.entry = {.count = 1, .reusable = false}}, SHIFT(216),
  [747] = {.entry = {.count = 1, .reusable = false}}, SHIFT(205),
  [749] = {.entry = {.count = 1, .reusable = false}}, SHIFT(254),
  [751] = {.entry = {.count = 1, .reusable = false}}, SHIFT(487),
  [753] = {.entry = {.count = 1, .reusable = false}}, SHIFT(359),
  [755] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 2, 0, 0),
  [757] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_hurl_file_repeat2, 2, 0, 0),
  [759] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_hurl_file_repeat2, 2, 0, 0), SHIFT_REPEAT(146),
  [762] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_hurl_file_repeat2, 2, 0, 0),
  [764] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_hurl_file_repeat2, 2, 0, 0), SHIFT_REPEAT(146),
  [767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(533),
  [775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(487),
  [781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [783] = {.entry = {.count = 1, .reusable = false}}, SHIFT(421),
  [785] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_key_value, 2, 0, 0),
  [787] = {.entry = {.count = 1, .reusable = false}}, SHIFT(488),
  [789] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [791] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_value, 2, 0, 0),
  [793] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_hurl_file_repeat2, 2, 0, 0), SHIFT_REPEAT(153),
  [796] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_hurl_file_repeat2, 2, 0, 0), SHIFT_REPEAT(153),
  [799] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entry, 3, 0, 0),
  [801] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_entry, 3, 0, 0),
  [803] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__comment_or_new_line_repeat1, 2, 0, 0), SHIFT_REPEAT(145),
  [806] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__comment_or_new_line_repeat1, 2, 0, 0), SHIFT_REPEAT(145),
  [809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [811] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [813] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entry, 4, 0, 0),
  [815] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_entry, 4, 0, 0),
  [817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [819] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [821] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__comment_or_new_line_repeat1, 2, 0, 0), SHIFT_REPEAT(154),
  [824] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__comment_or_new_line_repeat1, 2, 0, 0), SHIFT_REPEAT(154),
  [827] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response, 6, 0, 0),
  [829] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_response, 6, 0, 0),
  [831] = {.entry = {.count = 1, .reusable = false}}, SHIFT(479),
  [833] = {.entry = {.count = 1, .reusable = false}}, SHIFT(561),
  [835] = {.entry = {.count = 1, .reusable = false}}, SHIFT(559),
  [837] = {.entry = {.count = 1, .reusable = false}}, SHIFT(263),
  [839] = {.entry = {.count = 1, .reusable = false}}, SHIFT(357),
  [841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [843] = {.entry = {.count = 1, .reusable = false}}, SHIFT(237),
  [845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(442),
  [849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [857] = {.entry = {.count = 1, .reusable = false}}, SHIFT(564),
  [859] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [863] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [875] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_xml_tag_repeat1, 2, 0, 0), SHIFT_REPEAT(479),
  [878] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_xml_tag_repeat1, 2, 0, 0), SHIFT_REPEAT(561),
  [881] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_xml_tag_repeat1, 2, 0, 0),
  [883] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_xml_tag_repeat1, 2, 0, 0), SHIFT_REPEAT(263),
  [886] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_xml_tag_repeat1, 2, 0, 0), SHIFT_REPEAT(357),
  [889] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_value_string_repeat1, 2, 0, 0),
  [891] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_string_repeat1, 2, 0, 0), SHIFT_REPEAT(216),
  [894] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_string_repeat1, 2, 0, 0), SHIFT_REPEAT(254),
  [897] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_string_repeat1, 2, 0, 0), SHIFT_REPEAT(359),
  [900] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_value_string_repeat1, 2, 0, 0),
  [902] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_string, 1, 0, 0),
  [904] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_string, 1, 0, 0),
  [906] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [908] = {.entry = {.count = 1, .reusable = true}}, SHIFT(434),
  [910] = {.entry = {.count = 1, .reusable = false}}, SHIFT(325),
  [912] = {.entry = {.count = 1, .reusable = false}}, SHIFT(405),
  [914] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [916] = {.entry = {.count = 1, .reusable = false}}, SHIFT(404),
  [918] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [920] = {.entry = {.count = 1, .reusable = false}}, SHIFT(403),
  [922] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [924] = {.entry = {.count = 1, .reusable = false}}, SHIFT(402),
  [926] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [928] = {.entry = {.count = 1, .reusable = false}}, SHIFT(401),
  [930] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [932] = {.entry = {.count = 1, .reusable = false}}, SHIFT(400),
  [934] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [936] = {.entry = {.count = 1, .reusable = false}}, SHIFT(399),
  [938] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [940] = {.entry = {.count = 1, .reusable = false}}, SHIFT(415),
  [942] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [944] = {.entry = {.count = 1, .reusable = false}}, SHIFT(302),
  [946] = {.entry = {.count = 1, .reusable = false}}, SHIFT(223),
  [948] = {.entry = {.count = 1, .reusable = false}}, SHIFT(490),
  [950] = {.entry = {.count = 1, .reusable = false}}, SHIFT(236),
  [952] = {.entry = {.count = 1, .reusable = false}}, SHIFT(358),
  [954] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_filename, 1, 0, 0),
  [956] = {.entry = {.count = 1, .reusable = false}}, SHIFT(382),
  [958] = {.entry = {.count = 1, .reusable = false}}, SHIFT(225),
  [960] = {.entry = {.count = 1, .reusable = false}}, SHIFT(394),
  [962] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filename, 1, 0, 0),
  [964] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [966] = {.entry = {.count = 1, .reusable = false}}, SHIFT(476),
  [968] = {.entry = {.count = 1, .reusable = false}}, SHIFT(271),
  [970] = {.entry = {.count = 1, .reusable = false}}, SHIFT(365),
  [972] = {.entry = {.count = 1, .reusable = false}}, SHIFT(379),
  [974] = {.entry = {.count = 1, .reusable = false}}, SHIFT(381),
  [976] = {.entry = {.count = 1, .reusable = false}}, SHIFT(261),
  [978] = {.entry = {.count = 1, .reusable = false}}, SHIFT(356),
  [980] = {.entry = {.count = 1, .reusable = false}}, SHIFT(496),
  [982] = {.entry = {.count = 1, .reusable = false}}, SHIFT(457),
  [984] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_string_repeat1, 2, 0, 0), SHIFT_REPEAT(207),
  [987] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_quoted_string_repeat1, 2, 0, 0),
  [989] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_string_repeat1, 2, 0, 0), SHIFT_REPEAT(226),
  [992] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_string_repeat1, 2, 0, 0), SHIFT_REPEAT(396),
  [995] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_oneline_string_repeat1, 2, 0, 0),
  [997] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_oneline_string_repeat1, 2, 0, 0), SHIFT_REPEAT(310),
  [1000] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_oneline_string_repeat1, 2, 0, 0), SHIFT_REPEAT(310),
  [1003] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_oneline_string_repeat1, 2, 0, 0), SHIFT_REPEAT(235),
  [1006] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_oneline_string_repeat1, 2, 0, 0), SHIFT_REPEAT(370),
  [1009] = {.entry = {.count = 1, .reusable = false}}, SHIFT(491),
  [1011] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [1013] = {.entry = {.count = 1, .reusable = false}}, SHIFT(310),
  [1015] = {.entry = {.count = 1, .reusable = false}}, SHIFT(235),
  [1017] = {.entry = {.count = 1, .reusable = false}}, SHIFT(370),
  [1019] = {.entry = {.count = 1, .reusable = false}}, SHIFT(207),
  [1021] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [1023] = {.entry = {.count = 1, .reusable = false}}, SHIFT(226),
  [1025] = {.entry = {.count = 1, .reusable = false}}, SHIFT(396),
  [1027] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_filename_repeat1, 2, 0, 0),
  [1029] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_filename_repeat1, 2, 0, 0), SHIFT_REPEAT(382),
  [1032] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_filename_repeat1, 2, 0, 0), SHIFT_REPEAT(225),
  [1035] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_filename_repeat1, 2, 0, 0), SHIFT_REPEAT(394),
  [1038] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_filename_repeat1, 2, 0, 0),
  [1040] = {.entry = {.count = 1, .reusable = false}}, SHIFT(304),
  [1042] = {.entry = {.count = 1, .reusable = false}}, SHIFT(443),
  [1044] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multiline_string_repeat1, 2, 0, 0), SHIFT_REPEAT(236),
  [1047] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multiline_string_repeat1, 2, 0, 0), SHIFT_REPEAT(223),
  [1050] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_multiline_string_repeat1, 2, 0, 0),
  [1052] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multiline_string_repeat1, 2, 0, 0), SHIFT_REPEAT(358),
  [1055] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [1057] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_string_repeat1, 2, 0, 0), SHIFT_REPEAT(222),
  [1060] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_json_string_repeat1, 2, 0, 0),
  [1062] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_string_repeat1, 2, 0, 0), SHIFT_REPEAT(271),
  [1065] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_string_repeat1, 2, 0, 0), SHIFT_REPEAT(365),
  [1068] = {.entry = {.count = 1, .reusable = false}}, SHIFT(331),
  [1070] = {.entry = {.count = 1, .reusable = false}}, SHIFT(486),
  [1072] = {.entry = {.count = 1, .reusable = false}}, SHIFT(292),
  [1074] = {.entry = {.count = 1, .reusable = false}}, SHIFT(471),
  [1076] = {.entry = {.count = 1, .reusable = false}}, SHIFT(351),
  [1078] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [1080] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [1082] = {.entry = {.count = 1, .reusable = false}}, SHIFT(335),
  [1084] = {.entry = {.count = 1, .reusable = false}}, SHIFT(458),
  [1086] = {.entry = {.count = 1, .reusable = false}}, SHIFT(330),
  [1088] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_filename_repeat1, 2, 0, 0), SHIFT_REPEAT(381),
  [1091] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_filename_repeat1, 2, 0, 0), SHIFT_REPEAT(261),
  [1094] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_filename_repeat1, 2, 0, 0), SHIFT_REPEAT(356),
  [1097] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xml_value_string, 1, 0, 0),
  [1099] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_string_content, 1, 0, 0),
  [1101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_string_content, 1, 0, 0),
  [1103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_xml_value_string_repeat1, 2, 0, 0),
  [1105] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_xml_value_string_repeat1, 2, 0, 0), SHIFT_REPEAT(263),
  [1108] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_xml_value_string_repeat1, 2, 0, 0), SHIFT_REPEAT(357),
  [1111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [1113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_value_string_content_repeat1, 2, 0, 0),
  [1115] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_string_content_repeat1, 2, 0, 0), SHIFT_REPEAT(216),
  [1118] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_string_content_repeat1, 2, 0, 0), SHIFT_REPEAT(254),
  [1121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_value_string_content_repeat1, 2, 0, 0),
  [1123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [1125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(478),
  [1127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(267),
  [1129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [1131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(584),
  [1133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_string, 1, 0, 0),
  [1135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_string, 1, 0, 1),
  [1137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_key_string_repeat1, 2, 0, 7),
  [1139] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_string_repeat1, 2, 0, 7), SHIFT_REPEAT(362),
  [1142] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_string_repeat1, 2, 0, 7), SHIFT_REPEAT(280),
  [1145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_string, 2, 0, 6),
  [1147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [1149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(497),
  [1151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [1153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(470),
  [1155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_string, 2, 0, 7),
  [1157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_filename_content, 1, 0, 0),
  [1159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filename_content, 1, 0, 0),
  [1161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_string_content, 1, 0, 0),
  [1163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(231),
  [1165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_filename_content_repeat1, 2, 0, 0),
  [1167] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_filename_content_repeat1, 2, 0, 0), SHIFT_REPEAT(382),
  [1170] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_filename_content_repeat1, 2, 0, 0), SHIFT_REPEAT(227),
  [1173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_filename_content_repeat1, 2, 0, 0),
  [1175] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multiline_string_content_repeat1, 2, 0, 0), SHIFT_REPEAT(228),
  [1178] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multiline_string_content_repeat1, 2, 0, 0), SHIFT_REPEAT(223),
  [1181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_multiline_string_content_repeat1, 2, 0, 0),
  [1183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [1185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [1187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(532),
  [1189] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_string_content_repeat1, 2, 0, 0), SHIFT_REPEAT(207),
  [1192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_quoted_string_content_repeat1, 2, 0, 0),
  [1194] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_string_content_repeat1, 2, 0, 0), SHIFT_REPEAT(231),
  [1197] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__comment_or_new_line_repeat1, 2, 0, 0), SHIFT_REPEAT(232),
  [1200] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__comment_or_new_line_repeat1, 2, 0, 0), SHIFT_REPEAT(232),
  [1203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(465),
  [1205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [1207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [1209] = {.entry = {.count = 1, .reusable = false}}, SHIFT(232),
  [1211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneline_string_content, 1, 0, 0),
  [1213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneline_string_content, 1, 0, 0),
  [1215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline_string_content, 1, 0, 0),
  [1217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [1219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_duration_option, 3, 0, 10),
  [1221] = {.entry = {.count = 1, .reusable = false}}, SHIFT(433),
  [1223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_duration_option, 3, 0, 10),
  [1225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_oneline_string_content_repeat1, 2, 0, 0),
  [1227] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_oneline_string_content_repeat1, 2, 0, 0), SHIFT_REPEAT(310),
  [1230] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_oneline_string_content_repeat1, 2, 0, 0), SHIFT_REPEAT(310),
  [1233] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_oneline_string_content_repeat1, 2, 0, 0), SHIFT_REPEAT(239),
  [1236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(536),
  [1238] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_value_string_text_repeat1, 2, 0, 0),
  [1240] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_string_text_repeat1, 2, 0, 0), SHIFT_REPEAT(241),
  [1243] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_filename_content_repeat1, 2, 0, 0), SHIFT_REPEAT(381),
  [1246] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_filename_content_repeat1, 2, 0, 0), SHIFT_REPEAT(242),
  [1249] = {.entry = {.count = 1, .reusable = false}}, SHIFT(566),
  [1251] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [1253] = {.entry = {.count = 1, .reusable = false}}, SHIFT(315),
  [1255] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_string_text_repeat1, 2, 0, 0), SHIFT_REPEAT(244),
  [1258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_value_string_text_repeat1, 2, 0, 0),
  [1260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [1262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [1264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__unsigned_integer, 1, 0, 12),
  [1266] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__unsigned_integer, 1, 0, 12),
  [1268] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_filename_password, 1, 0, 0),
  [1270] = {.entry = {.count = 1, .reusable = false}}, SHIFT(259),
  [1272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filename_password, 1, 0, 0),
  [1274] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__comment_or_new_line_repeat1, 2, 0, 0), SHIFT_REPEAT(252),
  [1277] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__comment_or_new_line_repeat1, 2, 0, 0), SHIFT_REPEAT(252),
  [1280] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_query_string_params_section_repeat1, 2, 0, 0), SHIFT_REPEAT(255),
  [1283] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_string_params_section_repeat1, 2, 0, 0), SHIFT_REPEAT(255),
  [1286] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_query_string_params_section_repeat1, 2, 0, 0), SHIFT_REPEAT(188),
  [1289] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_string_text, 1, 0, 0),
  [1291] = {.entry = {.count = 1, .reusable = false}}, SHIFT(244),
  [1293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_string_text, 1, 0, 0),
  [1295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [1297] = {.entry = {.count = 1, .reusable = false}}, SHIFT(252),
  [1299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [1301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [1303] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_filename_password_repeat1, 2, 0, 0),
  [1305] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_filename_password_repeat1, 2, 0, 0), SHIFT_REPEAT(259),
  [1308] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_filename_password_repeat1, 2, 0, 0), SHIFT_REPEAT(172),
  [1311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_filename_password_repeat1, 2, 0, 0),
  [1313] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [1315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [1317] = {.entry = {.count = 1, .reusable = false}}, SHIFT(241),
  [1319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [1321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [1323] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_string_escaped_char, 2, 0, 0),
  [1325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_string_escaped_char, 2, 0, 0),
  [1327] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unicode_char, 6, 0, 0),
  [1329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unicode_char, 6, 0, 0),
  [1331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [1333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [1335] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [1337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [1339] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_string_text, 1, 0, 0),
  [1341] = {.entry = {.count = 1, .reusable = false}}, SHIFT(285),
  [1343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [1345] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xml_close_tag, 3, 0, 0),
  [1347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [1349] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [1351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [1353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [1355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [1357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [1359] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_method, 1, 0, 0),
  [1361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method, 1, 0, 0),
  [1363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_string_content, 1, 0, 0),
  [1365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [1367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_key_string_content_repeat1, 2, 0, 0),
  [1369] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_string_content_repeat1, 2, 0, 0), SHIFT_REPEAT(282),
  [1372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [1374] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_json_string_text_repeat1, 2, 0, 0),
  [1376] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_string_text_repeat1, 2, 0, 0), SHIFT_REPEAT(285),
  [1379] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xml_open_tag, 3, 0, 0),
  [1381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [1383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [1385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [1387] = {.entry = {.count = 1, .reusable = false}}, SHIFT(234),
  [1389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [1391] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline_string_escaped_char, 2, 0, 0),
  [1393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [1395] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_multiline_string_content_repeat1, 1, 0, 0),
  [1397] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_string_escaped_char, 3, 0, 0),
  [1399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_string_escaped_char, 3, 0, 0),
  [1401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [1403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [1405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [1407] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xml_tag, 3, 0, 0),
  [1409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [1411] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xml_prolog_tag, 3, 0, 0),
  [1413] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xml_self_closing_tag, 3, 0, 0),
  [1415] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xml_tag, 1, 0, 0),
  [1417] = {.entry = {.count = 1, .reusable = false}}, SHIFT(428),
  [1419] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_filename_escaped_char, 2, 0, 0),
  [1421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filename_escaped_char, 2, 0, 0),
  [1423] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline_string_escaped_char, 3, 0, 0),
  [1425] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_option, 3, 0, 10),
  [1427] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_value_string_repeat1, 1, 0, 0),
  [1429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_option, 3, 0, 10),
  [1431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [1433] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneline_string_text, 1, 0, 0),
  [1435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneline_string_text, 1, 0, 0),
  [1437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [1439] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [1441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [1443] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xml_tag, 2, 0, 0),
  [1445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [1447] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_regex_content, 1, 0, 0),
  [1449] = {.entry = {.count = 1, .reusable = false}}, SHIFT(317),
  [1451] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_regex_content_repeat1, 2, 0, 0), SHIFT_REPEAT(566),
  [1454] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_regex_content_repeat1, 2, 0, 0),
  [1456] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_regex_content_repeat1, 2, 0, 0), SHIFT_REPEAT(317),
  [1459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__key_template, 3, 0, 8),
  [1461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bracketed_key_content, 1, 0, 0),
  [1463] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_filename_password_escaped_char, 3, 0, 0),
  [1465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filename_password_escaped_char, 3, 0, 0),
  [1467] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_string_escaped_char, 6, 0, 0),
  [1469] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_string_content, 1, 0, 0),
  [1471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [1473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [1475] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_string_escaped_char, 2, 0, 0),
  [1477] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_filename_password_escaped_char, 2, 0, 0),
  [1479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filename_password_escaped_char, 2, 0, 0),
  [1481] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_string_escaped_char, 3, 0, 0),
  [1483] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_invalid_quoted_string_escaped_char, 2, 0, 0),
  [1485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_string, 2, 0, 0),
  [1487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [1489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(492),
  [1491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [1493] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_xml_repeat1, 2, 0, 0),
  [1495] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_xml_repeat1, 2, 0, 0), SHIFT_REPEAT(532),
  [1498] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_string_escaped_char, 2, 0, 0),
  [1500] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_key_string_repeat1, 1, 0, 1),
  [1502] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_hexdigit, 1, 0, 0),
  [1504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(483),
  [1506] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_oneline_hex_repeat1, 2, 0, 0),
  [1508] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_oneline_hex_repeat1, 2, 0, 0), SHIFT_REPEAT(378),
  [1511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_string, 3, 0, 0),
  [1513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_boolean, 1, 0, 0),
  [1515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_object, 2, 0, 0),
  [1517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(498),
  [1519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(527),
  [1521] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_array, 4, 0, 0),
  [1523] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_object, 3, 0, 0),
  [1525] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_object, 4, 0, 0),
  [1527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [1529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(517),
  [1531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_array, 3, 0, 0),
  [1533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(480),
  [1535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_array, 2, 0, 0),
  [1537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [1539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [1541] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_number, 1, 0, 0),
  [1543] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_value, 1, 0, 0),
  [1545] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_value, 3, 0, 0),
  [1547] = {.entry = {.count = 1, .reusable = false}}, SHIFT(425),
  [1549] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_file_value, 3, 0, 0),
  [1551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [1553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [1555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hexdigit, 1, 0, 0),
  [1557] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_value, 2, 0, 0),
  [1559] = {.entry = {.count = 1, .reusable = false}}, SHIFT(414),
  [1561] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_file_value, 2, 0, 0),
  [1563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [1565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [1567] = {.entry = {.count = 1, .reusable = false}}, SHIFT(349),
  [1569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [1571] = {.entry = {.count = 1, .reusable = false}}, SHIFT(305),
  [1573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(481),
  [1575] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_json_object_repeat1, 2, 0, 0),
  [1577] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_json_object_repeat1, 2, 0, 0), SHIFT_REPEAT(352),
  [1580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [1582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(451),
  [1584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [1586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [1588] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_regex_escaped_char, 2, 0, 0),
  [1590] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_json_array_repeat1, 2, 0, 0), SHIFT_REPEAT(168),
  [1593] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_json_array_repeat1, 2, 0, 0),
  [1595] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_count_option, 3, 0, 10),
  [1597] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_count_option, 3, 0, 10),
  [1599] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_greater_predicate, 2, 0, 0),
  [1601] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_greater_predicate, 2, 0, 0),
  [1603] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_greater_or_equal_predicate, 2, 0, 13),
  [1605] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_greater_or_equal_predicate, 2, 0, 13),
  [1607] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_greater_or_equal_predicate, 2, 0, 0),
  [1609] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_greater_or_equal_predicate, 2, 0, 0),
  [1611] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_less_predicate, 2, 0, 13),
  [1613] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_less_predicate, 2, 0, 13),
  [1615] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_less_predicate, 2, 0, 0),
  [1617] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_less_predicate, 2, 0, 0),
  [1619] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_less_or_equal_predicate, 2, 0, 13),
  [1621] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_less_or_equal_predicate, 2, 0, 13),
  [1623] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_less_or_equal_predicate, 2, 0, 0),
  [1625] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_less_or_equal_predicate, 2, 0, 0),
  [1627] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_with_predicate, 2, 0, 13),
  [1629] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_with_predicate, 2, 0, 13),
  [1631] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_end_with_predicate, 2, 0, 13),
  [1633] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_end_with_predicate, 2, 0, 13),
  [1635] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contain_predicate, 2, 0, 13),
  [1637] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_contain_predicate, 2, 0, 13),
  [1639] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_match_predicate, 2, 0, 13),
  [1641] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_match_predicate, 2, 0, 13),
  [1643] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_predicate, 2, 0, 13),
  [1645] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_include_predicate, 2, 0, 13),
  [1647] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_not_equal_predicate, 2, 0, 13),
  [1649] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_not_equal_predicate, 2, 0, 13),
  [1651] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_not_equal_predicate, 2, 0, 0),
  [1653] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_not_equal_predicate, 2, 0, 0),
  [1655] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_greater_predicate, 2, 0, 13),
  [1657] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_greater_predicate, 2, 0, 13),
  [1659] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_object, 4, 0, 0),
  [1661] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_value, 1, 0, 0),
  [1663] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_value, 1, 0, 0),
  [1665] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 3, 0, 0),
  [1667] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_definition, 3, 0, 0),
  [1669] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_equal_predicate, 2, 0, 0),
  [1671] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_equal_predicate, 2, 0, 0),
  [1673] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_equal_predicate, 2, 0, 13),
  [1675] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_equal_predicate, 2, 0, 13),
  [1677] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_predicate_value, 1, 0, 0),
  [1679] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_predicate_value, 1, 0, 0),
  [1681] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xml_tag, 1, 0, 0),
  [1683] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xml, 1, 0, 0),
  [1685] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xml, 1, 0, 0),
  [1687] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bytes, 1, 0, 0),
  [1689] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bytes, 1, 0, 0),
  [1691] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_value, 4, 0, 0),
  [1693] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_file_value, 4, 0, 0),
  [1695] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_predicate, 2, 0, 0),
  [1697] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_predicate, 2, 0, 0),
  [1699] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_string, 6, 0, 0),
  [1701] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline_string, 6, 0, 0),
  [1703] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_boolean, 1, 0, 0),
  [1705] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_number, 1, 0, 0),
  [1707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [1709] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_duration_option, 4, 0, 10),
  [1711] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_duration_option, 4, 0, 10),
  [1713] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_duration_unit, 1, 0, 0),
  [1715] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_duration_unit, 1, 0, 0),
  [1717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(475),
  [1719] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_predicate_func, 1, 0, 0),
  [1721] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_predicate_func, 1, 0, 0),
  [1723] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_predicate, 1, 0, 0),
  [1725] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_predicate, 1, 0, 0),
  [1727] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_predicate, 1, 0, 13),
  [1729] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_predicate, 1, 0, 13),
  [1731] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_array, 2, 0, 0),
  [1733] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_string, 5, 0, 0),
  [1735] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline_string, 5, 0, 0),
  [1737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(545),
  [1739] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_option, 3, 0, 10),
  [1741] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer_option, 3, 0, 10),
  [1743] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_option, 3, 0, 10),
  [1745] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean_option, 3, 0, 10),
  [1747] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_option, 3, 0, 10),
  [1749] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_option, 3, 0, 10),
  [1751] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_verbosity_option, 3, 0, 11),
  [1753] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_verbosity_option, 3, 0, 11),
  [1755] = {.entry = {.count = 1, .reusable = false}}, SHIFT(562),
  [1757] = {.entry = {.count = 1, .reusable = false}}, SHIFT(524),
  [1759] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cert_option, 3, 0, 10),
  [1761] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cert_option, 3, 0, 10),
  [1763] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ca_certificate_option, 3, 0, 10),
  [1765] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ca_certificate_option, 3, 0, 10),
  [1767] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_param, 3, 0, 0),
  [1769] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_file_param, 3, 0, 0),
  [1771] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_value, 1, 0, 0),
  [1773] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneline_file, 2, 0, 0),
  [1775] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneline_file, 2, 0, 0),
  [1777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(516),
  [1779] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_object, 2, 0, 0),
  [1781] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xml_close_tag, 3, 0, 0),
  [1783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(512),
  [1785] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_string, 4, 0, 0),
  [1787] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline_string, 4, 0, 0),
  [1789] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_key_value, 3, 0, 0),
  [1791] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_string, 2, 0, 0),
  [1793] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_query_string_params_section_repeat1, 2, 0, 0),
  [1795] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_query_string_params_section_repeat1, 2, 0, 0),
  [1797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(437),
  [1799] = {.entry = {.count = 1, .reusable = false}}, SHIFT(528),
  [1801] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_array, 4, 0, 0),
  [1803] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_status, 1, 0, 0),
  [1805] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_status, 1, 0, 0),
  [1807] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneline_hex, 2, 0, 0),
  [1809] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneline_hex, 2, 0, 0),
  [1811] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneline_string, 2, 0, 0),
  [1813] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneline_string, 2, 0, 0),
  [1815] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1, 0, 0),
  [1817] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1, 0, 0),
  [1819] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_value, 3, 0, 0),
  [1821] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_key_value, 3, 0, 0),
  [1823] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xml_tag, 3, 0, 0),
  [1825] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_string, 3, 0, 0),
  [1827] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline_string, 3, 0, 0),
  [1829] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneline_string, 3, 0, 0),
  [1831] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneline_string, 3, 0, 0),
  [1833] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneline_hex, 3, 0, 0),
  [1835] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneline_hex, 3, 0, 0),
  [1837] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneline_base64, 3, 0, 0),
  [1839] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneline_base64, 3, 0, 0),
  [1841] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xml_prolog_tag, 3, 0, 0),
  [1843] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xml_self_closing_tag, 3, 0, 0),
  [1845] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_string, 3, 0, 0),
  [1847] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_object, 3, 0, 0),
  [1849] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneline_file, 3, 0, 0),
  [1851] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneline_file, 3, 0, 0),
  [1853] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version, 1, 0, 0),
  [1855] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option, 1, 0, 0),
  [1857] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_option, 1, 0, 0),
  [1859] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multipart_form_data_param, 1, 0, 0),
  [1861] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multipart_form_data_param, 1, 0, 0),
  [1863] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_array, 3, 0, 0),
  [1865] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xml, 2, 0, 0),
  [1867] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xml, 2, 0, 0),
  [1869] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xml_tag, 2, 0, 0),
  [1871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [1873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [1875] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [1877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [1879] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [1881] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [1883] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [1887] = {.entry = {.count = 1, .reusable = false}}, SHIFT(563),
  [1889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(587),
  [1891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [1893] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [1895] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_certificate_attribute, 1, 0, 0),
  [1897] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [1899] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [1901] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [1903] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [1905] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [1907] = {.entry = {.count = 1, .reusable = true}}, SHIFT(500),
  [1909] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [1911] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [1913] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_hexdigit, 1, 0, 0),
  [1915] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [1917] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [1919] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [1921] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [1923] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [1925] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [1927] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [1929] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [1931] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [1933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [1935] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [1937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(509),
  [1939] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [1941] = {.entry = {.count = 1, .reusable = false}}, SHIFT(568),
  [1943] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_key_string, 1, 0, 5),
  [1945] = {.entry = {.count = 1, .reusable = false}}, SHIFT(529),
  [1947] = {.entry = {.count = 1, .reusable = true}}, SHIFT(495),
  [1949] = {.entry = {.count = 1, .reusable = true}}, SHIFT(494),
  [1951] = {.entry = {.count = 1, .reusable = false}}, SHIFT(537),
  [1953] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [1955] = {.entry = {.count = 1, .reusable = false}}, SHIFT(393),
  [1957] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [1959] = {.entry = {.count = 1, .reusable = true}}, SHIFT(469),
  [1961] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [1963] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [1965] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [1967] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [1969] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [1971] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [1973] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_option_key, 1, 0, 0),
  [1975] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_duration_option_key, 1, 0, 0),
  [1977] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [1979] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_count_option_key, 1, 0, 0),
  [1981] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [1983] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_option_key, 1, 0, 0),
  [1985] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_option_key, 1, 0, 0),
  [1987] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [1989] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [1991] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_string_type, 1, 0, 0),
  [1993] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [1995] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [1997] = {.entry = {.count = 1, .reusable = true}}, SHIFT(493),
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
    [ts_external_token__eof] = true,
    [ts_external_token__bracketed_key_start] = true,
  },
  [6] = {
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
