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
#define STATE_COUNT 535
#define LARGE_STATE_COUNT 46
#define SYMBOL_COUNT 419
#define ALIAS_COUNT 1
#define TOKEN_COUNT 249
#define EXTERNAL_TOKEN_COUNT 5
#define FIELD_COUNT 9
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
  anon_sym_file_COMMA = 39,
  anon_sym_SEMI = 40,
  anon_sym_redact = 41,
  anon_sym_cacert = 42,
  anon_sym_key = 43,
  anon_sym_cert = 44,
  aux_sym_filename_password_text_token1 = 45,
  sym_filename_password_escaped_char = 46,
  aux_sym__filename_password_continue_token1 = 47,
  aux_sym__filename_password_continue_token2 = 48,
  anon_sym_digest = 49,
  anon_sym_http1_DOT1 = 50,
  anon_sym_negotiate = 51,
  anon_sym_ntlm = 52,
  anon_sym_compressed = 53,
  anon_sym_location = 54,
  anon_sym_location_DASHtrusted = 55,
  anon_sym_http1_DOT0 = 56,
  anon_sym_http2 = 57,
  anon_sym_http3 = 58,
  anon_sym_insecure = 59,
  anon_sym_ipv4 = 60,
  anon_sym_ipv6 = 61,
  anon_sym_netrc = 62,
  anon_sym_netrc_DASHoptional = 63,
  anon_sym_path_DASHas_DASHis = 64,
  anon_sym_skip = 65,
  anon_sym_verbose = 66,
  anon_sym_very_DASHverbose = 67,
  anon_sym_retry_DASHmax_DASHcount = 68,
  anon_sym_limit_DASHrate = 69,
  aux_sym_count_option_token1 = 70,
  anon_sym_max_DASHredirs = 71,
  anon_sym_repeat = 72,
  anon_sym_retry = 73,
  anon_sym_verbosity = 74,
  anon_sym_brief = 75,
  anon_sym_debug = 76,
  anon_sym_connect_DASHtimeout = 77,
  anon_sym_delay = 78,
  anon_sym_retry_DASHinterval = 79,
  anon_sym_max_DASHtime = 80,
  sym_duration_unit = 81,
  anon_sym_resolve = 82,
  anon_sym_aws_DASHsigv4 = 83,
  anon_sym_connect_DASHto = 84,
  anon_sym_header = 85,
  anon_sym_netrc_DASHfile = 86,
  anon_sym_output = 87,
  anon_sym_pinnedpubkey = 88,
  anon_sym_proxy = 89,
  anon_sym_unix_DASHsocket = 90,
  anon_sym_user = 91,
  anon_sym_variable = 92,
  anon_sym_EQ = 93,
  anon_sym_null = 94,
  anon_sym_status = 95,
  anon_sym_version = 96,
  anon_sym_rawbytes = 97,
  anon_sym_ip = 98,
  anon_sym_redirects = 99,
  anon_sym_url = 100,
  anon_sym_body = 101,
  anon_sym_duration = 102,
  anon_sym_bytes = 103,
  anon_sym_sha256 = 104,
  anon_sym_md5 = 105,
  anon_sym_cookie = 106,
  anon_sym_xpath = 107,
  anon_sym_jsonpath = 108,
  anon_sym_regex = 109,
  anon_sym_certificate = 110,
  anon_sym_DQUOTE = 111,
  anon_sym_Subject = 112,
  anon_sym_Issuer = 113,
  anon_sym_Start_DASHDate = 114,
  anon_sym_Expire_DASHDate = 115,
  anon_sym_Serial_DASHNumber = 116,
  anon_sym_not = 117,
  anon_sym_isDate = 118,
  anon_sym_isList = 119,
  anon_sym_isObject = 120,
  anon_sym_exists = 121,
  anon_sym_isInteger = 122,
  anon_sym_isFloat = 123,
  anon_sym_isBoolean = 124,
  anon_sym_isString = 125,
  anon_sym_isCollection = 126,
  anon_sym_isNumber = 127,
  anon_sym_isIsoDate = 128,
  anon_sym_isEmpty = 129,
  anon_sym_isIpv4 = 130,
  anon_sym_isIpv6 = 131,
  anon_sym_isUuid = 132,
  anon_sym_equals = 133,
  anon_sym_EQ_EQ = 134,
  anon_sym_notEquals = 135,
  anon_sym_BANG_EQ = 136,
  anon_sym_greaterThan = 137,
  anon_sym_GT = 138,
  anon_sym_greaterThanOrEquals = 139,
  anon_sym_GT_EQ = 140,
  anon_sym_lessThan = 141,
  anon_sym_LT = 142,
  anon_sym_lessThanOrEquals = 143,
  anon_sym_LT_EQ = 144,
  anon_sym_startsWith = 145,
  anon_sym_endsWith = 146,
  anon_sym_contains = 147,
  anon_sym_matches = 148,
  anon_sym_includes = 149,
  sym_xml_prolog_tag = 150,
  sym_xml_comment = 151,
  sym_xml_cdata = 152,
  sym_xml_name = 153,
  sym_xml_attribute_value = 154,
  anon_sym_SLASH_GT = 155,
  anon_sym_LT_SLASH = 156,
  anon_sym_base64_COMMA = 157,
  aux_sym_oneline_base64_token1 = 158,
  anon_sym_hex_COMMA = 159,
  aux_sym_quoted_string_text_token1 = 160,
  anon_sym_LBRACE = 161,
  sym_invalid_quoted_string_escaped_char = 162,
  sym_quoted_string_escaped_char = 163,
  anon_sym_LBRACE_LBRACE = 164,
  anon_sym_RBRACE_RBRACE = 165,
  sym_key_string_text = 166,
  sym_key_string_escaped_char = 167,
  sym_xml_value_string_text = 168,
  aux_sym_value_string_text_token1 = 169,
  sym_value_string_escaped_char = 170,
  anon_sym_BQUOTE = 171,
  aux_sym_oneline_string_text_token1 = 172,
  sym_oneline_string_escaped_char = 173,
  anon_sym_BQUOTE_BQUOTE_BQUOTE = 174,
  anon_sym_raw = 175,
  anon_sym_base64 = 176,
  anon_sym_hex = 177,
  anon_sym_json = 178,
  anon_sym_xml = 179,
  anon_sym_graphql = 180,
  aux_sym_multiline_string_type_token1 = 181,
  aux_sym_multiline_string_content_token1 = 182,
  aux_sym_multiline_string_content_token2 = 183,
  aux_sym_raw_multiline_string_content_token1 = 184,
  anon_sym_BQUOTE2 = 185,
  sym_filename_escaped_char = 186,
  aux_sym__filename_continue_token1 = 187,
  anon_sym_LBRACE2 = 188,
  anon_sym_RBRACE = 189,
  anon_sym_COMMA = 190,
  anon_sym_RBRACK = 191,
  sym_json_string_escaped_char = 192,
  anon_sym_true = 193,
  anon_sym_false = 194,
  anon_sym_LBRACE_LBRACE2 = 195,
  anon_sym_newDate = 196,
  anon_sym_newUuid = 197,
  sym_variable_name = 198,
  anon_sym_base64Decode = 199,
  anon_sym_base64Encode = 200,
  anon_sym_base64UrlSafeDecode = 201,
  anon_sym_base64UrlSafeEncode = 202,
  anon_sym_first = 203,
  anon_sym_last = 204,
  anon_sym_toFloat = 205,
  anon_sym_toHex = 206,
  anon_sym_toString = 207,
  anon_sym_utf8Decode = 208,
  anon_sym_utf8Encode = 209,
  anon_sym_count = 210,
  anon_sym_urlEncode = 211,
  anon_sym_urlDecode = 212,
  anon_sym_toInt = 213,
  anon_sym_htmlEscape = 214,
  anon_sym_htmlUnescape = 215,
  anon_sym_daysAfterNow = 216,
  anon_sym_daysBeforeNow = 217,
  anon_sym_charsetDecode = 218,
  anon_sym_dateFormat = 219,
  anon_sym_urlQueryParam = 220,
  anon_sym_decode = 221,
  anon_sym_format = 222,
  anon_sym_toDate = 223,
  anon_sym_nth = 224,
  anon_sym_replace = 225,
  anon_sym_replaceRegex = 226,
  anon_sym_split = 227,
  sym__alphanum = 228,
  sym_integer = 229,
  aux_sym__unsigned_integer_token1 = 230,
  sym_float = 231,
  aux_sym_digit_token1 = 232,
  aux_sym_hexdigit_token1 = 233,
  anon_sym_DOT = 234,
  anon_sym_e = 235,
  anon_sym_E = 236,
  anon_sym_PLUS = 237,
  anon_sym_DASH = 238,
  sym_comment = 239,
  anon_sym_SLASH = 240,
  sym_regex_text = 241,
  anon_sym_BSLASH = 242,
  aux_sym_regex_escaped_char_token1 = 243,
  sym__eof = 244,
  sym__json_array_start = 245,
  sym__bracketed_key_start = 246,
  sym__json_number = 247,
  sym__error_sentinel = 248,
  sym_hurl_file = 249,
  sym_entry = 250,
  sym__comment_or_new_line = 251,
  sym__line_ending = 252,
  sym_request = 253,
  sym_response = 254,
  sym_method = 255,
  sym_version = 256,
  sym_status = 257,
  sym_header = 258,
  sym_body = 259,
  sym_request_section = 260,
  sym_response_section = 261,
  sym_basic_auth_section = 262,
  sym_query_string_params_section = 263,
  sym_form_params_section = 264,
  sym_multipart_form_data_section = 265,
  sym_cookies_section = 266,
  sym_captures_section = 267,
  sym_asserts_section = 268,
  sym_options_section = 269,
  sym_key_value = 270,
  sym_multipart_form_data_param = 271,
  sym_file_param = 272,
  sym_file_value = 273,
  sym_capture = 274,
  sym_assert = 275,
  sym_option = 276,
  sym_ca_certificate_option = 277,
  sym_client_key_option = 278,
  sym_cert_option = 279,
  sym_filename_password = 280,
  sym_filename_password_content = 281,
  sym_filename_password_text = 282,
  sym__filename_password_continue = 283,
  sym_boolean_option = 284,
  sym_boolean_option_key = 285,
  sym_integer_option = 286,
  sym_integer_option_key = 287,
  sym_count_option = 288,
  sym_count_option_key = 289,
  sym_verbosity_option = 290,
  sym_duration_option = 291,
  sym_duration_option_key = 292,
  sym_string_option = 293,
  sym_string_option_key = 294,
  sym_variable_option = 295,
  sym_variable_definition = 296,
  sym_variable_value = 297,
  sym_query = 298,
  sym_simple_query = 299,
  sym_header_query = 300,
  sym_cookie_query = 301,
  sym_xpath_query = 302,
  sym_jsonpath_query = 303,
  sym_regex_query = 304,
  sym_variable_query = 305,
  sym_certificate_query = 306,
  sym_certificate_attribute = 307,
  sym_predicate = 308,
  sym_predicate_func = 309,
  sym_simple_predicate = 310,
  sym_equal_predicate = 311,
  sym_not_equal_predicate = 312,
  sym_greater_predicate = 313,
  sym_greater_or_equal_predicate = 314,
  sym_less_predicate = 315,
  sym_less_or_equal_predicate = 316,
  sym_start_with_predicate = 317,
  sym_end_with_predicate = 318,
  sym_contain_predicate = 319,
  sym_match_predicate = 320,
  sym_include_predicate = 321,
  sym__predicate_string = 322,
  sym_predicate_value = 323,
  sym_bytes = 324,
  sym_xml = 325,
  sym_xml_tag = 326,
  sym_xml_attribute = 327,
  sym_xml_self_closing_tag = 328,
  sym_xml_open_tag = 329,
  sym_xml_close_tag = 330,
  sym_oneline_base64 = 331,
  sym_oneline_file = 332,
  sym_oneline_hex = 333,
  sym_quoted_string = 334,
  sym_quoted_string_content = 335,
  sym_quoted_string_text = 336,
  sym_key_string = 337,
  sym__bracketed_key_content = 338,
  sym__key_template = 339,
  sym_key_string_content = 340,
  sym_xml_value_string = 341,
  sym_value_string = 342,
  sym_value_string_content = 343,
  sym_value_string_text = 344,
  sym_oneline_string = 345,
  sym_oneline_string_content = 346,
  sym_oneline_string_text = 347,
  sym_multiline_string = 348,
  sym_multiline_string_type = 349,
  sym_multiline_string_content = 350,
  sym_raw_multiline_string_content = 351,
  sym_filename = 352,
  sym_filename_content = 353,
  sym_filename_text = 354,
  sym__filename_continue = 355,
  sym_json_value = 356,
  sym_json_object = 357,
  sym_json_key_value = 358,
  sym_json_key_string = 359,
  sym_json_array = 360,
  sym_json_string = 361,
  sym_json_string_content = 362,
  sym_json_string_text = 363,
  sym_json_number = 364,
  sym_json_boolean = 365,
  sym_template = 366,
  sym_expr = 367,
  sym_function = 368,
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
  sym_regex = 381,
  sym_regex_content = 382,
  sym_regex_escaped_char = 383,
  aux_sym_hurl_file_repeat1 = 384,
  aux_sym_hurl_file_repeat2 = 385,
  aux_sym__comment_or_new_line_repeat1 = 386,
  aux_sym_request_repeat1 = 387,
  aux_sym_request_repeat2 = 388,
  aux_sym_response_repeat1 = 389,
  aux_sym_basic_auth_section_repeat1 = 390,
  aux_sym_multipart_form_data_section_repeat1 = 391,
  aux_sym_captures_section_repeat1 = 392,
  aux_sym_asserts_section_repeat1 = 393,
  aux_sym_options_section_repeat1 = 394,
  aux_sym_capture_repeat1 = 395,
  aux_sym_filename_password_repeat1 = 396,
  aux_sym_xml_repeat1 = 397,
  aux_sym_xml_tag_repeat1 = 398,
  aux_sym_xml_self_closing_tag_repeat1 = 399,
  aux_sym_oneline_hex_repeat1 = 400,
  aux_sym_quoted_string_repeat1 = 401,
  aux_sym_quoted_string_content_repeat1 = 402,
  aux_sym_key_string_repeat1 = 403,
  aux_sym_key_string_content_repeat1 = 404,
  aux_sym_value_string_repeat1 = 405,
  aux_sym_value_string_content_repeat1 = 406,
  aux_sym_value_string_text_repeat1 = 407,
  aux_sym_oneline_string_repeat1 = 408,
  aux_sym_oneline_string_content_repeat1 = 409,
  aux_sym_multiline_string_repeat1 = 410,
  aux_sym_multiline_string_repeat2 = 411,
  aux_sym_multiline_string_content_repeat1 = 412,
  aux_sym_raw_multiline_string_content_repeat1 = 413,
  aux_sym_filename_repeat1 = 414,
  aux_sym_json_object_repeat1 = 415,
  aux_sym_json_array_repeat1 = 416,
  aux_sym_json_string_repeat1 = 417,
  aux_sym_regex_content_repeat1 = 418,
  anon_alias_sym_json_key_string = 419,
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
  [anon_sym_file_COMMA] = "file,",
  [anon_sym_SEMI] = ";",
  [anon_sym_redact] = "redact",
  [anon_sym_cacert] = "cacert",
  [anon_sym_key] = "key",
  [anon_sym_cert] = "cert",
  [aux_sym_filename_password_text_token1] = "filename_password_text_token1",
  [sym_filename_password_escaped_char] = "filename_password_escaped_char",
  [aux_sym__filename_password_continue_token1] = "filename_password_text",
  [aux_sym__filename_password_continue_token2] = "filename_password_escaped_char",
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
  [sym_duration_unit] = "duration_unit",
  [anon_sym_resolve] = "resolve",
  [anon_sym_aws_DASHsigv4] = "aws-sigv4",
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
  [anon_sym_null] = "null",
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
  [sym_xml_prolog_tag] = "xml_prolog_tag",
  [sym_xml_comment] = "xml_comment",
  [sym_xml_cdata] = "xml_cdata",
  [sym_xml_name] = "xml_name",
  [sym_xml_attribute_value] = "xml_attribute_value",
  [anon_sym_SLASH_GT] = "/>",
  [anon_sym_LT_SLASH] = "</",
  [anon_sym_base64_COMMA] = "base64,",
  [aux_sym_oneline_base64_token1] = "oneline_base64_token1",
  [anon_sym_hex_COMMA] = "hex,",
  [aux_sym_quoted_string_text_token1] = "quoted_string_text_token1",
  [anon_sym_LBRACE] = "{",
  [sym_invalid_quoted_string_escaped_char] = "invalid_quoted_string_escaped_char",
  [sym_quoted_string_escaped_char] = "quoted_string_escaped_char",
  [anon_sym_LBRACE_LBRACE] = "{{",
  [anon_sym_RBRACE_RBRACE] = "}}",
  [sym_key_string_text] = "key_string_text",
  [sym_key_string_escaped_char] = "key_string_escaped_char",
  [sym_xml_value_string_text] = "xml_value_string_text",
  [aux_sym_value_string_text_token1] = "value_string_text_token1",
  [sym_value_string_escaped_char] = "value_string_escaped_char",
  [anon_sym_BQUOTE] = "`",
  [aux_sym_oneline_string_text_token1] = "oneline_string_text_token1",
  [sym_oneline_string_escaped_char] = "oneline_string_escaped_char",
  [anon_sym_BQUOTE_BQUOTE_BQUOTE] = "```",
  [anon_sym_raw] = "multiline_string_type",
  [anon_sym_base64] = "base64",
  [anon_sym_hex] = "hex",
  [anon_sym_json] = "json",
  [anon_sym_xml] = "xml",
  [anon_sym_graphql] = "graphql",
  [aux_sym_multiline_string_type_token1] = "multiline_string_type_token1",
  [aux_sym_multiline_string_content_token1] = "multiline_string_content_token1",
  [aux_sym_multiline_string_content_token2] = "multiline_string_content_token2",
  [aux_sym_raw_multiline_string_content_token1] = "raw_multiline_string_content_token1",
  [anon_sym_BQUOTE2] = "`",
  [sym_filename_escaped_char] = "filename_escaped_char",
  [aux_sym__filename_continue_token1] = "filename_escaped_char",
  [anon_sym_LBRACE2] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACK] = "]",
  [sym_json_string_escaped_char] = "json_string_escaped_char",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [anon_sym_LBRACE_LBRACE2] = "{{",
  [anon_sym_newDate] = "newDate",
  [anon_sym_newUuid] = "newUuid",
  [sym_variable_name] = "variable_name",
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
  [aux_sym__unsigned_integer_token1] = "integer",
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
  [anon_sym_BSLASH] = "\\",
  [aux_sym_regex_escaped_char_token1] = "regex_escaped_char_token1",
  [sym__eof] = "_eof",
  [sym__json_array_start] = "[",
  [sym__bracketed_key_start] = "key_string_text",
  [sym__json_number] = "_json_number",
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
  [sym_client_key_option] = "client_key_option",
  [sym_cert_option] = "cert_option",
  [sym_filename_password] = "filename_password",
  [sym_filename_password_content] = "filename_password_content",
  [sym_filename_password_text] = "filename_password_text",
  [sym__filename_password_continue] = "filename_password_content",
  [sym_boolean_option] = "boolean_option",
  [sym_boolean_option_key] = "boolean_option_key",
  [sym_integer_option] = "integer_option",
  [sym_integer_option_key] = "integer_option_key",
  [sym_count_option] = "count_option",
  [sym_count_option_key] = "count_option_key",
  [sym_verbosity_option] = "verbosity_option",
  [sym_duration_option] = "duration_option",
  [sym_duration_option_key] = "duration_option_key",
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
  [sym_xml_tag] = "xml_tag",
  [sym_xml_attribute] = "xml_attribute",
  [sym_xml_self_closing_tag] = "xml_self_closing_tag",
  [sym_xml_open_tag] = "xml_open_tag",
  [sym_xml_close_tag] = "xml_close_tag",
  [sym_oneline_base64] = "oneline_base64",
  [sym_oneline_file] = "oneline_file",
  [sym_oneline_hex] = "oneline_hex",
  [sym_quoted_string] = "quoted_string",
  [sym_quoted_string_content] = "quoted_string_content",
  [sym_quoted_string_text] = "quoted_string_text",
  [sym_key_string] = "key_string",
  [sym__bracketed_key_content] = "key_string_content",
  [sym__key_template] = "template",
  [sym_key_string_content] = "key_string_content",
  [sym_xml_value_string] = "xml_value_string",
  [sym_value_string] = "value_string",
  [sym_value_string_content] = "value_string_content",
  [sym_value_string_text] = "value_string_text",
  [sym_oneline_string] = "oneline_string",
  [sym_oneline_string_content] = "oneline_string_content",
  [sym_oneline_string_text] = "oneline_string_text",
  [sym_multiline_string] = "multiline_string",
  [sym_multiline_string_type] = "multiline_string_type",
  [sym_multiline_string_content] = "multiline_string_content",
  [sym_raw_multiline_string_content] = "multiline_string_content",
  [sym_filename] = "filename",
  [sym_filename_content] = "filename_content",
  [sym_filename_text] = "filename_text",
  [sym__filename_continue] = "filename_content",
  [sym_json_value] = "json_value",
  [sym_json_object] = "json_object",
  [sym_json_key_value] = "json_key_value",
  [sym_json_key_string] = "json_key_string",
  [sym_json_array] = "json_array",
  [sym_json_string] = "json_string",
  [sym_json_string_content] = "json_string_content",
  [sym_json_string_text] = "json_string_text",
  [sym_json_number] = "json_number",
  [sym_json_boolean] = "json_boolean",
  [sym_template] = "template",
  [sym_expr] = "expr",
  [sym_function] = "function",
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
  [aux_sym_multipart_form_data_section_repeat1] = "multipart_form_data_section_repeat1",
  [aux_sym_captures_section_repeat1] = "captures_section_repeat1",
  [aux_sym_asserts_section_repeat1] = "asserts_section_repeat1",
  [aux_sym_options_section_repeat1] = "options_section_repeat1",
  [aux_sym_capture_repeat1] = "capture_repeat1",
  [aux_sym_filename_password_repeat1] = "filename_password_repeat1",
  [aux_sym_xml_repeat1] = "xml_repeat1",
  [aux_sym_xml_tag_repeat1] = "xml_tag_repeat1",
  [aux_sym_xml_self_closing_tag_repeat1] = "xml_self_closing_tag_repeat1",
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
  [aux_sym_multiline_string_repeat2] = "multiline_string_repeat2",
  [aux_sym_multiline_string_content_repeat1] = "multiline_string_content_repeat1",
  [aux_sym_raw_multiline_string_content_repeat1] = "raw_multiline_string_content_repeat1",
  [aux_sym_filename_repeat1] = "filename_repeat1",
  [aux_sym_json_object_repeat1] = "json_object_repeat1",
  [aux_sym_json_array_repeat1] = "json_array_repeat1",
  [aux_sym_json_string_repeat1] = "json_string_repeat1",
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
  [anon_sym_file_COMMA] = anon_sym_file_COMMA,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_redact] = anon_sym_redact,
  [anon_sym_cacert] = anon_sym_cacert,
  [anon_sym_key] = anon_sym_key,
  [anon_sym_cert] = anon_sym_cert,
  [aux_sym_filename_password_text_token1] = aux_sym_filename_password_text_token1,
  [sym_filename_password_escaped_char] = sym_filename_password_escaped_char,
  [aux_sym__filename_password_continue_token1] = sym_filename_password_text,
  [aux_sym__filename_password_continue_token2] = sym_filename_password_escaped_char,
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
  [sym_duration_unit] = sym_duration_unit,
  [anon_sym_resolve] = anon_sym_resolve,
  [anon_sym_aws_DASHsigv4] = anon_sym_aws_DASHsigv4,
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
  [anon_sym_null] = anon_sym_null,
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
  [sym_xml_prolog_tag] = sym_xml_prolog_tag,
  [sym_xml_comment] = sym_xml_comment,
  [sym_xml_cdata] = sym_xml_cdata,
  [sym_xml_name] = sym_xml_name,
  [sym_xml_attribute_value] = sym_xml_attribute_value,
  [anon_sym_SLASH_GT] = anon_sym_SLASH_GT,
  [anon_sym_LT_SLASH] = anon_sym_LT_SLASH,
  [anon_sym_base64_COMMA] = anon_sym_base64_COMMA,
  [aux_sym_oneline_base64_token1] = aux_sym_oneline_base64_token1,
  [anon_sym_hex_COMMA] = anon_sym_hex_COMMA,
  [aux_sym_quoted_string_text_token1] = aux_sym_quoted_string_text_token1,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [sym_invalid_quoted_string_escaped_char] = sym_invalid_quoted_string_escaped_char,
  [sym_quoted_string_escaped_char] = sym_quoted_string_escaped_char,
  [anon_sym_LBRACE_LBRACE] = anon_sym_LBRACE_LBRACE,
  [anon_sym_RBRACE_RBRACE] = anon_sym_RBRACE_RBRACE,
  [sym_key_string_text] = sym_key_string_text,
  [sym_key_string_escaped_char] = sym_key_string_escaped_char,
  [sym_xml_value_string_text] = sym_xml_value_string_text,
  [aux_sym_value_string_text_token1] = aux_sym_value_string_text_token1,
  [sym_value_string_escaped_char] = sym_value_string_escaped_char,
  [anon_sym_BQUOTE] = anon_sym_BQUOTE,
  [aux_sym_oneline_string_text_token1] = aux_sym_oneline_string_text_token1,
  [sym_oneline_string_escaped_char] = sym_oneline_string_escaped_char,
  [anon_sym_BQUOTE_BQUOTE_BQUOTE] = anon_sym_BQUOTE_BQUOTE_BQUOTE,
  [anon_sym_raw] = sym_multiline_string_type,
  [anon_sym_base64] = anon_sym_base64,
  [anon_sym_hex] = anon_sym_hex,
  [anon_sym_json] = anon_sym_json,
  [anon_sym_xml] = anon_sym_xml,
  [anon_sym_graphql] = anon_sym_graphql,
  [aux_sym_multiline_string_type_token1] = aux_sym_multiline_string_type_token1,
  [aux_sym_multiline_string_content_token1] = aux_sym_multiline_string_content_token1,
  [aux_sym_multiline_string_content_token2] = aux_sym_multiline_string_content_token2,
  [aux_sym_raw_multiline_string_content_token1] = aux_sym_raw_multiline_string_content_token1,
  [anon_sym_BQUOTE2] = anon_sym_BQUOTE,
  [sym_filename_escaped_char] = sym_filename_escaped_char,
  [aux_sym__filename_continue_token1] = sym_filename_escaped_char,
  [anon_sym_LBRACE2] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [sym_json_string_escaped_char] = sym_json_string_escaped_char,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [anon_sym_LBRACE_LBRACE2] = anon_sym_LBRACE_LBRACE,
  [anon_sym_newDate] = anon_sym_newDate,
  [anon_sym_newUuid] = anon_sym_newUuid,
  [sym_variable_name] = sym_variable_name,
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
  [aux_sym__unsigned_integer_token1] = sym_integer,
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
  [anon_sym_BSLASH] = anon_sym_BSLASH,
  [aux_sym_regex_escaped_char_token1] = aux_sym_regex_escaped_char_token1,
  [sym__eof] = sym__eof,
  [sym__json_array_start] = sym__json_array_start,
  [sym__bracketed_key_start] = sym_key_string_text,
  [sym__json_number] = sym__json_number,
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
  [sym_client_key_option] = sym_client_key_option,
  [sym_cert_option] = sym_cert_option,
  [sym_filename_password] = sym_filename_password,
  [sym_filename_password_content] = sym_filename_password_content,
  [sym_filename_password_text] = sym_filename_password_text,
  [sym__filename_password_continue] = sym_filename_password_content,
  [sym_boolean_option] = sym_boolean_option,
  [sym_boolean_option_key] = sym_boolean_option_key,
  [sym_integer_option] = sym_integer_option,
  [sym_integer_option_key] = sym_integer_option_key,
  [sym_count_option] = sym_count_option,
  [sym_count_option_key] = sym_count_option_key,
  [sym_verbosity_option] = sym_verbosity_option,
  [sym_duration_option] = sym_duration_option,
  [sym_duration_option_key] = sym_duration_option_key,
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
  [sym_xml_tag] = sym_xml_tag,
  [sym_xml_attribute] = sym_xml_attribute,
  [sym_xml_self_closing_tag] = sym_xml_self_closing_tag,
  [sym_xml_open_tag] = sym_xml_open_tag,
  [sym_xml_close_tag] = sym_xml_close_tag,
  [sym_oneline_base64] = sym_oneline_base64,
  [sym_oneline_file] = sym_oneline_file,
  [sym_oneline_hex] = sym_oneline_hex,
  [sym_quoted_string] = sym_quoted_string,
  [sym_quoted_string_content] = sym_quoted_string_content,
  [sym_quoted_string_text] = sym_quoted_string_text,
  [sym_key_string] = sym_key_string,
  [sym__bracketed_key_content] = sym_key_string_content,
  [sym__key_template] = sym_template,
  [sym_key_string_content] = sym_key_string_content,
  [sym_xml_value_string] = sym_xml_value_string,
  [sym_value_string] = sym_value_string,
  [sym_value_string_content] = sym_value_string_content,
  [sym_value_string_text] = sym_value_string_text,
  [sym_oneline_string] = sym_oneline_string,
  [sym_oneline_string_content] = sym_oneline_string_content,
  [sym_oneline_string_text] = sym_oneline_string_text,
  [sym_multiline_string] = sym_multiline_string,
  [sym_multiline_string_type] = sym_multiline_string_type,
  [sym_multiline_string_content] = sym_multiline_string_content,
  [sym_raw_multiline_string_content] = sym_multiline_string_content,
  [sym_filename] = sym_filename,
  [sym_filename_content] = sym_filename_content,
  [sym_filename_text] = sym_filename_text,
  [sym__filename_continue] = sym_filename_content,
  [sym_json_value] = sym_json_value,
  [sym_json_object] = sym_json_object,
  [sym_json_key_value] = sym_json_key_value,
  [sym_json_key_string] = sym_json_key_string,
  [sym_json_array] = sym_json_array,
  [sym_json_string] = sym_json_string,
  [sym_json_string_content] = sym_json_string_content,
  [sym_json_string_text] = sym_json_string_text,
  [sym_json_number] = sym_json_number,
  [sym_json_boolean] = sym_json_boolean,
  [sym_template] = sym_template,
  [sym_expr] = sym_expr,
  [sym_function] = sym_function,
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
  [aux_sym_multipart_form_data_section_repeat1] = aux_sym_multipart_form_data_section_repeat1,
  [aux_sym_captures_section_repeat1] = aux_sym_captures_section_repeat1,
  [aux_sym_asserts_section_repeat1] = aux_sym_asserts_section_repeat1,
  [aux_sym_options_section_repeat1] = aux_sym_options_section_repeat1,
  [aux_sym_capture_repeat1] = aux_sym_capture_repeat1,
  [aux_sym_filename_password_repeat1] = aux_sym_filename_password_repeat1,
  [aux_sym_xml_repeat1] = aux_sym_xml_repeat1,
  [aux_sym_xml_tag_repeat1] = aux_sym_xml_tag_repeat1,
  [aux_sym_xml_self_closing_tag_repeat1] = aux_sym_xml_self_closing_tag_repeat1,
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
  [aux_sym_multiline_string_repeat2] = aux_sym_multiline_string_repeat2,
  [aux_sym_multiline_string_content_repeat1] = aux_sym_multiline_string_content_repeat1,
  [aux_sym_raw_multiline_string_content_repeat1] = aux_sym_raw_multiline_string_content_repeat1,
  [aux_sym_filename_repeat1] = aux_sym_filename_repeat1,
  [aux_sym_json_object_repeat1] = aux_sym_json_object_repeat1,
  [aux_sym_json_array_repeat1] = aux_sym_json_array_repeat1,
  [aux_sym_json_string_repeat1] = aux_sym_json_string_repeat1,
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
  [anon_sym_file_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
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
  [anon_sym_key] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cert] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_filename_password_text_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_filename_password_escaped_char] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__filename_password_continue_token1] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__filename_password_continue_token2] = {
    .visible = true,
    .named = true,
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
  [sym_duration_unit] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_resolve] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_aws_DASHsigv4] = {
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
  [anon_sym_null] = {
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
  [sym_xml_prolog_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_xml_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_xml_cdata] = {
    .visible = true,
    .named = true,
  },
  [sym_xml_name] = {
    .visible = true,
    .named = true,
  },
  [sym_xml_attribute_value] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_SLASH] = {
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
  [aux_sym_quoted_string_text_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym_invalid_quoted_string_escaped_char] = {
    .visible = true,
    .named = true,
  },
  [sym_quoted_string_escaped_char] = {
    .visible = true,
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
  [sym_key_string_text] = {
    .visible = true,
    .named = true,
  },
  [sym_key_string_escaped_char] = {
    .visible = true,
    .named = true,
  },
  [sym_xml_value_string_text] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_value_string_text_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_value_string_escaped_char] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_oneline_string_text_token1] = {
    .visible = false,
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
  [anon_sym_raw] = {
    .visible = true,
    .named = true,
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
  [aux_sym_multiline_string_content_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_multiline_string_content_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_raw_multiline_string_content_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_BQUOTE2] = {
    .visible = true,
    .named = false,
  },
  [sym_filename_escaped_char] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__filename_continue_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACE2] = {
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
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [sym_json_string_escaped_char] = {
    .visible = true,
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
  [anon_sym_newDate] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_newUuid] = {
    .visible = true,
    .named = false,
  },
  [sym_variable_name] = {
    .visible = true,
    .named = true,
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
  [aux_sym__unsigned_integer_token1] = {
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
  [anon_sym_BSLASH] = {
    .visible = true,
    .named = false,
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
  [sym__json_number] = {
    .visible = false,
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
  [sym_client_key_option] = {
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
  [sym_filename_password_content] = {
    .visible = true,
    .named = true,
  },
  [sym_filename_password_text] = {
    .visible = true,
    .named = true,
  },
  [sym__filename_password_continue] = {
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
  [sym_xml_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_xml_attribute] = {
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
  [sym_quoted_string_text] = {
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
    .visible = true,
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
  [sym_raw_multiline_string_content] = {
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
  [sym_filename_text] = {
    .visible = true,
    .named = true,
  },
  [sym__filename_continue] = {
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
  [sym_function] = {
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
  [aux_sym_xml_self_closing_tag_repeat1] = {
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
  [aux_sym_multiline_string_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_multiline_string_content_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_raw_multiline_string_content_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_filename_repeat1] = {
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
  field_content_type = 1,
  field_filter_key = 2,
  field_level = 3,
  field_modifier = 4,
  field_option_key = 5,
  field_predicate_name = 6,
  field_query_name = 7,
  field_section_header = 8,
  field_template = 9,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_content_type] = "content_type",
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
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 3},
  [4] = {.index = 5, .length = 1},
  [7] = {.index = 6, .length = 1},
  [8] = {.index = 7, .length = 1},
  [9] = {.index = 8, .length = 1},
  [10] = {.index = 9, .length = 2},
  [11] = {.index = 11, .length = 1},
  [12] = {.index = 12, .length = 1},
  [13] = {.index = 13, .length = 1},
  [14] = {.index = 14, .length = 1},
  [15] = {.index = 15, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_template, 0, .inherited = true},
  [1] =
    {field_filter_key, 0},
  [2] =
    {field_template, 0},
    {field_template, 1},
    {field_template, 2},
  [5] =
    {field_section_header, 0},
  [6] =
    {field_template, 1},
  [7] =
    {field_option_key, 0},
  [8] =
    {field_query_name, 0},
  [9] =
    {field_level, 2},
    {field_option_key, 0},
  [11] =
    {field_predicate_name, 0},
  [12] =
    {field_content_type, 2},
  [13] =
    {field_content_type, 3},
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
  [6] = {
    [0] = sym_filename_text,
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
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 6,
  [63] = 5,
  [64] = 6,
  [65] = 5,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 49,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 17,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 6,
  [83] = 5,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 68,
  [90] = 90,
  [91] = 31,
  [92] = 23,
  [93] = 41,
  [94] = 25,
  [95] = 33,
  [96] = 22,
  [97] = 21,
  [98] = 44,
  [99] = 35,
  [100] = 37,
  [101] = 28,
  [102] = 27,
  [103] = 26,
  [104] = 45,
  [105] = 30,
  [106] = 29,
  [107] = 40,
  [108] = 24,
  [109] = 38,
  [110] = 32,
  [111] = 20,
  [112] = 43,
  [113] = 34,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 6,
  [119] = 5,
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
  [138] = 136,
  [139] = 139,
  [140] = 140,
  [141] = 5,
  [142] = 6,
  [143] = 143,
  [144] = 6,
  [145] = 125,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 5,
  [151] = 151,
  [152] = 152,
  [153] = 152,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 159,
  [163] = 160,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 169,
  [173] = 168,
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
  [185] = 177,
  [186] = 186,
  [187] = 186,
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
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 203,
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
  [216] = 193,
  [217] = 217,
  [218] = 218,
  [219] = 197,
  [220] = 220,
  [221] = 221,
  [222] = 222,
  [223] = 221,
  [224] = 209,
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
  [236] = 234,
  [237] = 237,
  [238] = 238,
  [239] = 239,
  [240] = 237,
  [241] = 241,
  [242] = 242,
  [243] = 20,
  [244] = 244,
  [245] = 245,
  [246] = 246,
  [247] = 247,
  [248] = 248,
  [249] = 249,
  [250] = 249,
  [251] = 249,
  [252] = 249,
  [253] = 253,
  [254] = 249,
  [255] = 249,
  [256] = 249,
  [257] = 257,
  [258] = 249,
  [259] = 259,
  [260] = 257,
  [261] = 249,
  [262] = 262,
  [263] = 263,
  [264] = 257,
  [265] = 249,
  [266] = 266,
  [267] = 249,
  [268] = 268,
  [269] = 269,
  [270] = 270,
  [271] = 20,
  [272] = 20,
  [273] = 273,
  [274] = 274,
  [275] = 275,
  [276] = 20,
  [277] = 277,
  [278] = 278,
  [279] = 20,
  [280] = 280,
  [281] = 281,
  [282] = 281,
  [283] = 257,
  [284] = 247,
  [285] = 285,
  [286] = 286,
  [287] = 287,
  [288] = 20,
  [289] = 289,
  [290] = 290,
  [291] = 291,
  [292] = 292,
  [293] = 293,
  [294] = 294,
  [295] = 295,
  [296] = 296,
  [297] = 269,
  [298] = 298,
  [299] = 299,
  [300] = 300,
  [301] = 286,
  [302] = 302,
  [303] = 303,
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
  [314] = 266,
  [315] = 315,
  [316] = 291,
  [317] = 317,
  [318] = 318,
  [319] = 319,
  [320] = 320,
  [321] = 321,
  [322] = 322,
  [323] = 323,
  [324] = 324,
  [325] = 290,
  [326] = 326,
  [327] = 292,
  [328] = 328,
  [329] = 20,
  [330] = 324,
  [331] = 20,
  [332] = 332,
  [333] = 326,
  [334] = 323,
  [335] = 322,
  [336] = 281,
  [337] = 300,
  [338] = 281,
  [339] = 299,
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
  [351] = 351,
  [352] = 352,
  [353] = 353,
  [354] = 354,
  [355] = 355,
  [356] = 356,
  [357] = 352,
  [358] = 358,
  [359] = 359,
  [360] = 351,
  [361] = 361,
  [362] = 362,
  [363] = 346,
  [364] = 364,
  [365] = 365,
  [366] = 354,
  [367] = 367,
  [368] = 356,
  [369] = 355,
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
  [384] = 384,
  [385] = 385,
  [386] = 386,
  [387] = 387,
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
  [404] = 229,
  [405] = 405,
  [406] = 406,
  [407] = 407,
  [408] = 408,
  [409] = 409,
  [410] = 410,
  [411] = 362,
  [412] = 231,
  [413] = 413,
  [414] = 233,
  [415] = 415,
  [416] = 364,
  [417] = 417,
  [418] = 340,
  [419] = 373,
  [420] = 420,
  [421] = 421,
  [422] = 422,
  [423] = 423,
  [424] = 424,
  [425] = 345,
  [426] = 426,
  [427] = 427,
  [428] = 428,
  [429] = 429,
  [430] = 430,
  [431] = 431,
  [432] = 432,
  [433] = 433,
  [434] = 434,
  [435] = 367,
  [436] = 436,
  [437] = 437,
  [438] = 438,
  [439] = 439,
  [440] = 440,
  [441] = 441,
  [442] = 442,
  [443] = 443,
  [444] = 444,
  [445] = 241,
  [446] = 446,
  [447] = 447,
  [448] = 396,
  [449] = 449,
  [450] = 372,
  [451] = 451,
  [452] = 452,
  [453] = 347,
  [454] = 245,
  [455] = 455,
  [456] = 456,
  [457] = 365,
  [458] = 371,
  [459] = 444,
  [460] = 437,
  [461] = 461,
  [462] = 462,
  [463] = 429,
  [464] = 431,
  [465] = 432,
  [466] = 466,
  [467] = 244,
  [468] = 433,
  [469] = 436,
  [470] = 20,
  [471] = 441,
  [472] = 370,
  [473] = 442,
  [474] = 474,
  [475] = 475,
  [476] = 475,
  [477] = 475,
  [478] = 478,
  [479] = 475,
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
  [494] = 494,
  [495] = 480,
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
  [506] = 484,
  [507] = 475,
  [508] = 484,
  [509] = 475,
  [510] = 475,
  [511] = 475,
  [512] = 475,
  [513] = 475,
  [514] = 493,
  [515] = 475,
  [516] = 484,
  [517] = 486,
  [518] = 497,
  [519] = 519,
  [520] = 520,
  [521] = 521,
  [522] = 522,
  [523] = 523,
  [524] = 524,
  [525] = 525,
  [526] = 526,
  [527] = 527,
  [528] = 528,
  [529] = 529,
  [530] = 530,
  [531] = 521,
  [532] = 532,
  [533] = 533,
  [534] = 505,
};

static TSCharacterRange extras_character_set_1[] = {
  {'\t', '\t'}, {0x0b, '\r'}, {' ', ' '}, {0xa0, 0xa0}, {0x1680, 0x1680}, {0x2000, 0x200b}, {0x202f, 0x202f}, {0x205f, 0x2060},
  {0x3000, 0x3000}, {0xfeff, 0xfeff},
};

static TSCharacterRange extras_character_set_2[] = {
  {'\t', '\r'}, {' ', ' '}, {0xa0, 0xa0}, {0x1680, 0x1680}, {0x2000, 0x200b}, {0x202f, 0x202f}, {0x205f, 0x2060}, {0x3000, 0x3000},
  {0xfeff, 0xfeff},
};

static TSCharacterRange sym_xml_name_character_set_1[] = {
  {':', ':'}, {'A', 'Z'}, {'_', '_'}, {'a', 'z'}, {0xaa, 0xaa}, {0xb5, 0xb5}, {0xba, 0xba}, {0xc0, 0xd6},
  {0xd8, 0xf6}, {0xf8, 0x2c1}, {0x2c6, 0x2d1}, {0x2e0, 0x2e4}, {0x2ec, 0x2ec}, {0x2ee, 0x2ee}, {0x345, 0x345}, {0x370, 0x374},
  {0x376, 0x377}, {0x37a, 0x37d}, {0x37f, 0x37f}, {0x386, 0x386}, {0x388, 0x38a}, {0x38c, 0x38c}, {0x38e, 0x3a1}, {0x3a3, 0x3f5},
  {0x3f7, 0x481}, {0x48a, 0x52f}, {0x531, 0x556}, {0x559, 0x559}, {0x560, 0x588}, {0x5b0, 0x5bd}, {0x5bf, 0x5bf}, {0x5c1, 0x5c2},
  {0x5c4, 0x5c5}, {0x5c7, 0x5c7}, {0x5d0, 0x5ea}, {0x5ef, 0x5f2}, {0x610, 0x61a}, {0x620, 0x657}, {0x659, 0x65f}, {0x66e, 0x6d3},
  {0x6d5, 0x6dc}, {0x6e1, 0x6e8}, {0x6ed, 0x6ef}, {0x6fa, 0x6fc}, {0x6ff, 0x6ff}, {0x710, 0x73f}, {0x74d, 0x7b1}, {0x7ca, 0x7ea},
  {0x7f4, 0x7f5}, {0x7fa, 0x7fa}, {0x800, 0x817}, {0x81a, 0x82c}, {0x840, 0x858}, {0x860, 0x86a}, {0x870, 0x887}, {0x889, 0x88e},
  {0x8a0, 0x8c9}, {0x8d4, 0x8df}, {0x8e3, 0x8e9}, {0x8f0, 0x93b}, {0x93d, 0x94c}, {0x94e, 0x950}, {0x955, 0x963}, {0x971, 0x983},
  {0x985, 0x98c}, {0x98f, 0x990}, {0x993, 0x9a8}, {0x9aa, 0x9b0}, {0x9b2, 0x9b2}, {0x9b6, 0x9b9}, {0x9bd, 0x9c4}, {0x9c7, 0x9c8},
  {0x9cb, 0x9cc}, {0x9ce, 0x9ce}, {0x9d7, 0x9d7}, {0x9dc, 0x9dd}, {0x9df, 0x9e3}, {0x9f0, 0x9f1}, {0x9fc, 0x9fc}, {0xa01, 0xa03},
  {0xa05, 0xa0a}, {0xa0f, 0xa10}, {0xa13, 0xa28}, {0xa2a, 0xa30}, {0xa32, 0xa33}, {0xa35, 0xa36}, {0xa38, 0xa39}, {0xa3e, 0xa42},
  {0xa47, 0xa48}, {0xa4b, 0xa4c}, {0xa51, 0xa51}, {0xa59, 0xa5c}, {0xa5e, 0xa5e}, {0xa70, 0xa75}, {0xa81, 0xa83}, {0xa85, 0xa8d},
  {0xa8f, 0xa91}, {0xa93, 0xaa8}, {0xaaa, 0xab0}, {0xab2, 0xab3}, {0xab5, 0xab9}, {0xabd, 0xac5}, {0xac7, 0xac9}, {0xacb, 0xacc},
  {0xad0, 0xad0}, {0xae0, 0xae3}, {0xaf9, 0xafc}, {0xb01, 0xb03}, {0xb05, 0xb0c}, {0xb0f, 0xb10}, {0xb13, 0xb28}, {0xb2a, 0xb30},
  {0xb32, 0xb33}, {0xb35, 0xb39}, {0xb3d, 0xb44}, {0xb47, 0xb48}, {0xb4b, 0xb4c}, {0xb56, 0xb57}, {0xb5c, 0xb5d}, {0xb5f, 0xb63},
  {0xb71, 0xb71}, {0xb82, 0xb83}, {0xb85, 0xb8a}, {0xb8e, 0xb90}, {0xb92, 0xb95}, {0xb99, 0xb9a}, {0xb9c, 0xb9c}, {0xb9e, 0xb9f},
  {0xba3, 0xba4}, {0xba8, 0xbaa}, {0xbae, 0xbb9}, {0xbbe, 0xbc2}, {0xbc6, 0xbc8}, {0xbca, 0xbcc}, {0xbd0, 0xbd0}, {0xbd7, 0xbd7},
  {0xc00, 0xc03}, {0xc05, 0xc0c}, {0xc0e, 0xc10}, {0xc12, 0xc28}, {0xc2a, 0xc39}, {0xc3d, 0xc44}, {0xc46, 0xc48}, {0xc4a, 0xc4c},
  {0xc55, 0xc56}, {0xc58, 0xc5a}, {0xc5d, 0xc5d}, {0xc60, 0xc63}, {0xc80, 0xc83}, {0xc85, 0xc8c}, {0xc8e, 0xc90}, {0xc92, 0xca8},
  {0xcaa, 0xcb3}, {0xcb5, 0xcb9}, {0xcbd, 0xcc4}, {0xcc6, 0xcc8}, {0xcca, 0xccc}, {0xcd5, 0xcd6}, {0xcdd, 0xcde}, {0xce0, 0xce3},
  {0xcf1, 0xcf2}, {0xd00, 0xd0c}, {0xd0e, 0xd10}, {0xd12, 0xd3a}, {0xd3d, 0xd44}, {0xd46, 0xd48}, {0xd4a, 0xd4c}, {0xd4e, 0xd4e},
  {0xd54, 0xd57}, {0xd5f, 0xd63}, {0xd7a, 0xd7f}, {0xd81, 0xd83}, {0xd85, 0xd96}, {0xd9a, 0xdb1}, {0xdb3, 0xdbb}, {0xdbd, 0xdbd},
  {0xdc0, 0xdc6}, {0xdcf, 0xdd4}, {0xdd6, 0xdd6}, {0xdd8, 0xddf}, {0xdf2, 0xdf3}, {0xe01, 0xe3a}, {0xe40, 0xe46}, {0xe4d, 0xe4d},
  {0xe81, 0xe82}, {0xe84, 0xe84}, {0xe86, 0xe8a}, {0xe8c, 0xea3}, {0xea5, 0xea5}, {0xea7, 0xeb9}, {0xebb, 0xebd}, {0xec0, 0xec4},
  {0xec6, 0xec6}, {0xecd, 0xecd}, {0xedc, 0xedf}, {0xf00, 0xf00}, {0xf40, 0xf47}, {0xf49, 0xf6c}, {0xf71, 0xf81}, {0xf88, 0xf97},
  {0xf99, 0xfbc}, {0x1000, 0x1036}, {0x1038, 0x1038}, {0x103b, 0x103f}, {0x1050, 0x108f}, {0x109a, 0x109d}, {0x10a0, 0x10c5}, {0x10c7, 0x10c7},
  {0x10cd, 0x10cd}, {0x10d0, 0x10fa}, {0x10fc, 0x1248}, {0x124a, 0x124d}, {0x1250, 0x1256}, {0x1258, 0x1258}, {0x125a, 0x125d}, {0x1260, 0x1288},
  {0x128a, 0x128d}, {0x1290, 0x12b0}, {0x12b2, 0x12b5}, {0x12b8, 0x12be}, {0x12c0, 0x12c0}, {0x12c2, 0x12c5}, {0x12c8, 0x12d6}, {0x12d8, 0x1310},
  {0x1312, 0x1315}, {0x1318, 0x135a}, {0x1380, 0x138f}, {0x13a0, 0x13f5}, {0x13f8, 0x13fd}, {0x1401, 0x166c}, {0x166f, 0x167f}, {0x1681, 0x169a},
  {0x16a0, 0x16ea}, {0x16ee, 0x16f8}, {0x1700, 0x1713}, {0x171f, 0x1733}, {0x1740, 0x1753}, {0x1760, 0x176c}, {0x176e, 0x1770}, {0x1772, 0x1773},
  {0x1780, 0x17b3}, {0x17b6, 0x17c8}, {0x17d7, 0x17d7}, {0x17dc, 0x17dc}, {0x1820, 0x1878}, {0x1880, 0x18aa}, {0x18b0, 0x18f5}, {0x1900, 0x191e},
  {0x1920, 0x192b}, {0x1930, 0x1938}, {0x1950, 0x196d}, {0x1970, 0x1974}, {0x1980, 0x19ab}, {0x19b0, 0x19c9}, {0x1a00, 0x1a1b}, {0x1a20, 0x1a5e},
  {0x1a61, 0x1a74}, {0x1aa7, 0x1aa7}, {0x1abf, 0x1ac0}, {0x1acc, 0x1ace}, {0x1b00, 0x1b33}, {0x1b35, 0x1b43}, {0x1b45, 0x1b4c}, {0x1b80, 0x1ba9},
  {0x1bac, 0x1baf}, {0x1bba, 0x1be5}, {0x1be7, 0x1bf1}, {0x1c00, 0x1c36}, {0x1c4d, 0x1c4f}, {0x1c5a, 0x1c7d}, {0x1c80, 0x1c88}, {0x1c90, 0x1cba},
  {0x1cbd, 0x1cbf}, {0x1ce9, 0x1cec}, {0x1cee, 0x1cf3}, {0x1cf5, 0x1cf6}, {0x1cfa, 0x1cfa}, {0x1d00, 0x1dbf}, {0x1de7, 0x1df4}, {0x1e00, 0x1f15},
  {0x1f18, 0x1f1d}, {0x1f20, 0x1f45}, {0x1f48, 0x1f4d}, {0x1f50, 0x1f57}, {0x1f59, 0x1f59}, {0x1f5b, 0x1f5b}, {0x1f5d, 0x1f5d}, {0x1f5f, 0x1f7d},
  {0x1f80, 0x1fb4}, {0x1fb6, 0x1fbc}, {0x1fbe, 0x1fbe}, {0x1fc2, 0x1fc4}, {0x1fc6, 0x1fcc}, {0x1fd0, 0x1fd3}, {0x1fd6, 0x1fdb}, {0x1fe0, 0x1fec},
  {0x1ff2, 0x1ff4}, {0x1ff6, 0x1ffc}, {0x2071, 0x2071}, {0x207f, 0x207f}, {0x2090, 0x209c}, {0x2102, 0x2102}, {0x2107, 0x2107}, {0x210a, 0x2113},
  {0x2115, 0x2115}, {0x2119, 0x211d}, {0x2124, 0x2124}, {0x2126, 0x2126}, {0x2128, 0x2128}, {0x212a, 0x212d}, {0x212f, 0x2139}, {0x213c, 0x213f},
  {0x2145, 0x2149}, {0x214e, 0x214e}, {0x2160, 0x2188}, {0x24b6, 0x24e9}, {0x2c00, 0x2ce4}, {0x2ceb, 0x2cee}, {0x2cf2, 0x2cf3}, {0x2d00, 0x2d25},
  {0x2d27, 0x2d27}, {0x2d2d, 0x2d2d}, {0x2d30, 0x2d67}, {0x2d6f, 0x2d6f}, {0x2d80, 0x2d96}, {0x2da0, 0x2da6}, {0x2da8, 0x2dae}, {0x2db0, 0x2db6},
  {0x2db8, 0x2dbe}, {0x2dc0, 0x2dc6}, {0x2dc8, 0x2dce}, {0x2dd0, 0x2dd6}, {0x2dd8, 0x2dde}, {0x2de0, 0x2dff}, {0x2e2f, 0x2e2f}, {0x3005, 0x3007},
  {0x3021, 0x3029}, {0x3031, 0x3035}, {0x3038, 0x303c}, {0x3041, 0x3096}, {0x309d, 0x309f}, {0x30a1, 0x30fa}, {0x30fc, 0x30ff}, {0x3105, 0x312f},
  {0x3131, 0x318e}, {0x31a0, 0x31bf}, {0x31f0, 0x31ff}, {0x3400, 0x4dbf}, {0x4e00, 0xa48c}, {0xa4d0, 0xa4fd}, {0xa500, 0xa60c}, {0xa610, 0xa61f},
  {0xa62a, 0xa62b}, {0xa640, 0xa66e}, {0xa674, 0xa67b}, {0xa67f, 0xa6ef}, {0xa717, 0xa71f}, {0xa722, 0xa788}, {0xa78b, 0xa7ca}, {0xa7d0, 0xa7d1},
  {0xa7d3, 0xa7d3}, {0xa7d5, 0xa7d9}, {0xa7f2, 0xa805}, {0xa807, 0xa827}, {0xa840, 0xa873}, {0xa880, 0xa8c3}, {0xa8c5, 0xa8c5}, {0xa8f2, 0xa8f7},
  {0xa8fb, 0xa8fb}, {0xa8fd, 0xa8ff}, {0xa90a, 0xa92a}, {0xa930, 0xa952}, {0xa960, 0xa97c}, {0xa980, 0xa9b2}, {0xa9b4, 0xa9bf}, {0xa9cf, 0xa9cf},
  {0xa9e0, 0xa9ef}, {0xa9fa, 0xa9fe}, {0xaa00, 0xaa36}, {0xaa40, 0xaa4d}, {0xaa60, 0xaa76}, {0xaa7a, 0xaabe}, {0xaac0, 0xaac0}, {0xaac2, 0xaac2},
  {0xaadb, 0xaadd}, {0xaae0, 0xaaef}, {0xaaf2, 0xaaf5}, {0xab01, 0xab06}, {0xab09, 0xab0e}, {0xab11, 0xab16}, {0xab20, 0xab26}, {0xab28, 0xab2e},
  {0xab30, 0xab5a}, {0xab5c, 0xab69}, {0xab70, 0xabea}, {0xac00, 0xd7a3}, {0xd7b0, 0xd7c6}, {0xd7cb, 0xd7fb}, {0xf900, 0xfa6d}, {0xfa70, 0xfad9},
  {0xfb00, 0xfb06}, {0xfb13, 0xfb17}, {0xfb1d, 0xfb28}, {0xfb2a, 0xfb36}, {0xfb38, 0xfb3c}, {0xfb3e, 0xfb3e}, {0xfb40, 0xfb41}, {0xfb43, 0xfb44},
  {0xfb46, 0xfbb1}, {0xfbd3, 0xfd3d}, {0xfd50, 0xfd8f}, {0xfd92, 0xfdc7}, {0xfdf0, 0xfdfb}, {0xfe70, 0xfe74}, {0xfe76, 0xfefc}, {0xff21, 0xff3a},
  {0xff41, 0xff5a}, {0xff66, 0xffbe}, {0xffc2, 0xffc7}, {0xffca, 0xffcf}, {0xffd2, 0xffd7}, {0xffda, 0xffdc}, {0x10000, 0x1000b}, {0x1000d, 0x10026},
  {0x10028, 0x1003a}, {0x1003c, 0x1003d}, {0x1003f, 0x1004d}, {0x10050, 0x1005d}, {0x10080, 0x100fa}, {0x10140, 0x10174}, {0x10280, 0x1029c}, {0x102a0, 0x102d0},
  {0x10300, 0x1031f}, {0x1032d, 0x1034a}, {0x10350, 0x1037a}, {0x10380, 0x1039d}, {0x103a0, 0x103c3}, {0x103c8, 0x103cf}, {0x103d1, 0x103d5}, {0x10400, 0x1049d},
  {0x104b0, 0x104d3}, {0x104d8, 0x104fb}, {0x10500, 0x10527}, {0x10530, 0x10563}, {0x10570, 0x1057a}, {0x1057c, 0x1058a}, {0x1058c, 0x10592}, {0x10594, 0x10595},
  {0x10597, 0x105a1}, {0x105a3, 0x105b1}, {0x105b3, 0x105b9}, {0x105bb, 0x105bc}, {0x10600, 0x10736}, {0x10740, 0x10755}, {0x10760, 0x10767}, {0x10780, 0x10785},
  {0x10787, 0x107b0}, {0x107b2, 0x107ba}, {0x10800, 0x10805}, {0x10808, 0x10808}, {0x1080a, 0x10835}, {0x10837, 0x10838}, {0x1083c, 0x1083c}, {0x1083f, 0x10855},
  {0x10860, 0x10876}, {0x10880, 0x1089e}, {0x108e0, 0x108f2}, {0x108f4, 0x108f5}, {0x10900, 0x10915}, {0x10920, 0x10939}, {0x10980, 0x109b7}, {0x109be, 0x109bf},
  {0x10a00, 0x10a03}, {0x10a05, 0x10a06}, {0x10a0c, 0x10a13}, {0x10a15, 0x10a17}, {0x10a19, 0x10a35}, {0x10a60, 0x10a7c}, {0x10a80, 0x10a9c}, {0x10ac0, 0x10ac7},
  {0x10ac9, 0x10ae4}, {0x10b00, 0x10b35}, {0x10b40, 0x10b55}, {0x10b60, 0x10b72}, {0x10b80, 0x10b91}, {0x10c00, 0x10c48}, {0x10c80, 0x10cb2}, {0x10cc0, 0x10cf2},
  {0x10d00, 0x10d27}, {0x10e80, 0x10ea9}, {0x10eab, 0x10eac}, {0x10eb0, 0x10eb1}, {0x10f00, 0x10f1c}, {0x10f27, 0x10f27}, {0x10f30, 0x10f45}, {0x10f70, 0x10f81},
  {0x10fb0, 0x10fc4}, {0x10fe0, 0x10ff6}, {0x11000, 0x11045}, {0x11071, 0x11075}, {0x11082, 0x110b8}, {0x110c2, 0x110c2}, {0x110d0, 0x110e8}, {0x11100, 0x11132},
  {0x11144, 0x11147}, {0x11150, 0x11172}, {0x11176, 0x11176}, {0x11180, 0x111bf}, {0x111c1, 0x111c4}, {0x111ce, 0x111cf}, {0x111da, 0x111da}, {0x111dc, 0x111dc},
  {0x11200, 0x11211}, {0x11213, 0x11234}, {0x11237, 0x11237}, {0x1123e, 0x1123e}, {0x11280, 0x11286}, {0x11288, 0x11288}, {0x1128a, 0x1128d}, {0x1128f, 0x1129d},
  {0x1129f, 0x112a8}, {0x112b0, 0x112e8}, {0x11300, 0x11303}, {0x11305, 0x1130c}, {0x1130f, 0x11310}, {0x11313, 0x11328}, {0x1132a, 0x11330}, {0x11332, 0x11333},
  {0x11335, 0x11339}, {0x1133d, 0x11344}, {0x11347, 0x11348}, {0x1134b, 0x1134c}, {0x11350, 0x11350}, {0x11357, 0x11357}, {0x1135d, 0x11363}, {0x11400, 0x11441},
  {0x11443, 0x11445}, {0x11447, 0x1144a}, {0x1145f, 0x11461}, {0x11480, 0x114c1}, {0x114c4, 0x114c5}, {0x114c7, 0x114c7}, {0x11580, 0x115b5}, {0x115b8, 0x115be},
  {0x115d8, 0x115dd}, {0x11600, 0x1163e}, {0x11640, 0x11640}, {0x11644, 0x11644}, {0x11680, 0x116b5}, {0x116b8, 0x116b8}, {0x11700, 0x1171a}, {0x1171d, 0x1172a},
  {0x11740, 0x11746}, {0x11800, 0x11838}, {0x118a0, 0x118df}, {0x118ff, 0x11906}, {0x11909, 0x11909}, {0x1190c, 0x11913}, {0x11915, 0x11916}, {0x11918, 0x11935},
  {0x11937, 0x11938}, {0x1193b, 0x1193c}, {0x1193f, 0x11942}, {0x119a0, 0x119a7}, {0x119aa, 0x119d7}, {0x119da, 0x119df}, {0x119e1, 0x119e1}, {0x119e3, 0x119e4},
  {0x11a00, 0x11a32}, {0x11a35, 0x11a3e}, {0x11a50, 0x11a97}, {0x11a9d, 0x11a9d}, {0x11ab0, 0x11af8}, {0x11c00, 0x11c08}, {0x11c0a, 0x11c36}, {0x11c38, 0x11c3e},
  {0x11c40, 0x11c40}, {0x11c72, 0x11c8f}, {0x11c92, 0x11ca7}, {0x11ca9, 0x11cb6}, {0x11d00, 0x11d06}, {0x11d08, 0x11d09}, {0x11d0b, 0x11d36}, {0x11d3a, 0x11d3a},
  {0x11d3c, 0x11d3d}, {0x11d3f, 0x11d41}, {0x11d43, 0x11d43}, {0x11d46, 0x11d47}, {0x11d60, 0x11d65}, {0x11d67, 0x11d68}, {0x11d6a, 0x11d8e}, {0x11d90, 0x11d91},
  {0x11d93, 0x11d96}, {0x11d98, 0x11d98}, {0x11ee0, 0x11ef6}, {0x11fb0, 0x11fb0}, {0x12000, 0x12399}, {0x12400, 0x1246e}, {0x12480, 0x12543}, {0x12f90, 0x12ff0},
  {0x13000, 0x1342e}, {0x14400, 0x14646}, {0x16800, 0x16a38}, {0x16a40, 0x16a5e}, {0x16a70, 0x16abe}, {0x16ad0, 0x16aed}, {0x16b00, 0x16b2f}, {0x16b40, 0x16b43},
  {0x16b63, 0x16b77}, {0x16b7d, 0x16b8f}, {0x16e40, 0x16e7f}, {0x16f00, 0x16f4a}, {0x16f4f, 0x16f87}, {0x16f8f, 0x16f9f}, {0x16fe0, 0x16fe1}, {0x16fe3, 0x16fe3},
  {0x16ff0, 0x16ff1}, {0x17000, 0x187f7}, {0x18800, 0x18cd5}, {0x18d00, 0x18d08}, {0x1aff0, 0x1aff3}, {0x1aff5, 0x1affb}, {0x1affd, 0x1affe}, {0x1b000, 0x1b122},
  {0x1b150, 0x1b152}, {0x1b164, 0x1b167}, {0x1b170, 0x1b2fb}, {0x1bc00, 0x1bc6a}, {0x1bc70, 0x1bc7c}, {0x1bc80, 0x1bc88}, {0x1bc90, 0x1bc99}, {0x1bc9e, 0x1bc9e},
  {0x1d400, 0x1d454}, {0x1d456, 0x1d49c}, {0x1d49e, 0x1d49f}, {0x1d4a2, 0x1d4a2}, {0x1d4a5, 0x1d4a6}, {0x1d4a9, 0x1d4ac}, {0x1d4ae, 0x1d4b9}, {0x1d4bb, 0x1d4bb},
  {0x1d4bd, 0x1d4c3}, {0x1d4c5, 0x1d505}, {0x1d507, 0x1d50a}, {0x1d50d, 0x1d514}, {0x1d516, 0x1d51c}, {0x1d51e, 0x1d539}, {0x1d53b, 0x1d53e}, {0x1d540, 0x1d544},
  {0x1d546, 0x1d546}, {0x1d54a, 0x1d550}, {0x1d552, 0x1d6a5}, {0x1d6a8, 0x1d6c0}, {0x1d6c2, 0x1d6da}, {0x1d6dc, 0x1d6fa}, {0x1d6fc, 0x1d714}, {0x1d716, 0x1d734},
  {0x1d736, 0x1d74e}, {0x1d750, 0x1d76e}, {0x1d770, 0x1d788}, {0x1d78a, 0x1d7a8}, {0x1d7aa, 0x1d7c2}, {0x1d7c4, 0x1d7cb}, {0x1df00, 0x1df1e}, {0x1e000, 0x1e006},
  {0x1e008, 0x1e018}, {0x1e01b, 0x1e021}, {0x1e023, 0x1e024}, {0x1e026, 0x1e02a}, {0x1e100, 0x1e12c}, {0x1e137, 0x1e13d}, {0x1e14e, 0x1e14e}, {0x1e290, 0x1e2ad},
  {0x1e2c0, 0x1e2eb}, {0x1e7e0, 0x1e7e6}, {0x1e7e8, 0x1e7eb}, {0x1e7ed, 0x1e7ee}, {0x1e7f0, 0x1e7fe}, {0x1e800, 0x1e8c4}, {0x1e900, 0x1e943}, {0x1e947, 0x1e947},
  {0x1e94b, 0x1e94b}, {0x1ee00, 0x1ee03}, {0x1ee05, 0x1ee1f}, {0x1ee21, 0x1ee22}, {0x1ee24, 0x1ee24}, {0x1ee27, 0x1ee27}, {0x1ee29, 0x1ee32}, {0x1ee34, 0x1ee37},
  {0x1ee39, 0x1ee39}, {0x1ee3b, 0x1ee3b}, {0x1ee42, 0x1ee42}, {0x1ee47, 0x1ee47}, {0x1ee49, 0x1ee49}, {0x1ee4b, 0x1ee4b}, {0x1ee4d, 0x1ee4f}, {0x1ee51, 0x1ee52},
  {0x1ee54, 0x1ee54}, {0x1ee57, 0x1ee57}, {0x1ee59, 0x1ee59}, {0x1ee5b, 0x1ee5b}, {0x1ee5d, 0x1ee5d}, {0x1ee5f, 0x1ee5f}, {0x1ee61, 0x1ee62}, {0x1ee64, 0x1ee64},
  {0x1ee67, 0x1ee6a}, {0x1ee6c, 0x1ee72}, {0x1ee74, 0x1ee77}, {0x1ee79, 0x1ee7c}, {0x1ee7e, 0x1ee7e}, {0x1ee80, 0x1ee89}, {0x1ee8b, 0x1ee9b}, {0x1eea1, 0x1eea3},
  {0x1eea5, 0x1eea9}, {0x1eeab, 0x1eebb}, {0x1f130, 0x1f149}, {0x1f150, 0x1f169}, {0x1f170, 0x1f189}, {0x20000, 0x2a6df}, {0x2a700, 0x2b738}, {0x2b740, 0x2b81d},
  {0x2b820, 0x2cea1}, {0x2ceb0, 0x2ebe0}, {0x2f800, 0x2fa1d}, {0x30000, 0x3134a},
};

static TSCharacterRange sym_xml_name_character_set_2[] = {
  {'-', '.'}, {'0', ':'}, {'A', 'Z'}, {'_', '_'}, {'a', 'z'}, {0xaa, 0xaa}, {0xb2, 0xb3}, {0xb5, 0xb5},
  {0xb9, 0xba}, {0xbc, 0xbe}, {0xc0, 0xd6}, {0xd8, 0xf6}, {0xf8, 0x2c1}, {0x2c6, 0x2d1}, {0x2e0, 0x2e4}, {0x2ec, 0x2ec},
  {0x2ee, 0x2ee}, {0x345, 0x345}, {0x370, 0x374}, {0x376, 0x377}, {0x37a, 0x37d}, {0x37f, 0x37f}, {0x386, 0x386}, {0x388, 0x38a},
  {0x38c, 0x38c}, {0x38e, 0x3a1}, {0x3a3, 0x3f5}, {0x3f7, 0x481}, {0x48a, 0x52f}, {0x531, 0x556}, {0x559, 0x559}, {0x560, 0x588},
  {0x5b0, 0x5bd}, {0x5bf, 0x5bf}, {0x5c1, 0x5c2}, {0x5c4, 0x5c5}, {0x5c7, 0x5c7}, {0x5d0, 0x5ea}, {0x5ef, 0x5f2}, {0x610, 0x61a},
  {0x620, 0x657}, {0x659, 0x669}, {0x66e, 0x6d3}, {0x6d5, 0x6dc}, {0x6e1, 0x6e8}, {0x6ed, 0x6fc}, {0x6ff, 0x6ff}, {0x710, 0x73f},
  {0x74d, 0x7b1}, {0x7c0, 0x7ea}, {0x7f4, 0x7f5}, {0x7fa, 0x7fa}, {0x800, 0x817}, {0x81a, 0x82c}, {0x840, 0x858}, {0x860, 0x86a},
  {0x870, 0x887}, {0x889, 0x88e}, {0x8a0, 0x8c9}, {0x8d4, 0x8df}, {0x8e3, 0x8e9}, {0x8f0, 0x93b}, {0x93d, 0x94c}, {0x94e, 0x950},
  {0x955, 0x963}, {0x966, 0x96f}, {0x971, 0x983}, {0x985, 0x98c}, {0x98f, 0x990}, {0x993, 0x9a8}, {0x9aa, 0x9b0}, {0x9b2, 0x9b2},
  {0x9b6, 0x9b9}, {0x9bd, 0x9c4}, {0x9c7, 0x9c8}, {0x9cb, 0x9cc}, {0x9ce, 0x9ce}, {0x9d7, 0x9d7}, {0x9dc, 0x9dd}, {0x9df, 0x9e3},
  {0x9e6, 0x9f1}, {0x9f4, 0x9f9}, {0x9fc, 0x9fc}, {0xa01, 0xa03}, {0xa05, 0xa0a}, {0xa0f, 0xa10}, {0xa13, 0xa28}, {0xa2a, 0xa30},
  {0xa32, 0xa33}, {0xa35, 0xa36}, {0xa38, 0xa39}, {0xa3e, 0xa42}, {0xa47, 0xa48}, {0xa4b, 0xa4c}, {0xa51, 0xa51}, {0xa59, 0xa5c},
  {0xa5e, 0xa5e}, {0xa66, 0xa75}, {0xa81, 0xa83}, {0xa85, 0xa8d}, {0xa8f, 0xa91}, {0xa93, 0xaa8}, {0xaaa, 0xab0}, {0xab2, 0xab3},
  {0xab5, 0xab9}, {0xabd, 0xac5}, {0xac7, 0xac9}, {0xacb, 0xacc}, {0xad0, 0xad0}, {0xae0, 0xae3}, {0xae6, 0xaef}, {0xaf9, 0xafc},
  {0xb01, 0xb03}, {0xb05, 0xb0c}, {0xb0f, 0xb10}, {0xb13, 0xb28}, {0xb2a, 0xb30}, {0xb32, 0xb33}, {0xb35, 0xb39}, {0xb3d, 0xb44},
  {0xb47, 0xb48}, {0xb4b, 0xb4c}, {0xb56, 0xb57}, {0xb5c, 0xb5d}, {0xb5f, 0xb63}, {0xb66, 0xb6f}, {0xb71, 0xb77}, {0xb82, 0xb83},
  {0xb85, 0xb8a}, {0xb8e, 0xb90}, {0xb92, 0xb95}, {0xb99, 0xb9a}, {0xb9c, 0xb9c}, {0xb9e, 0xb9f}, {0xba3, 0xba4}, {0xba8, 0xbaa},
  {0xbae, 0xbb9}, {0xbbe, 0xbc2}, {0xbc6, 0xbc8}, {0xbca, 0xbcc}, {0xbd0, 0xbd0}, {0xbd7, 0xbd7}, {0xbe6, 0xbf2}, {0xc00, 0xc03},
  {0xc05, 0xc0c}, {0xc0e, 0xc10}, {0xc12, 0xc28}, {0xc2a, 0xc39}, {0xc3d, 0xc44}, {0xc46, 0xc48}, {0xc4a, 0xc4c}, {0xc55, 0xc56},
  {0xc58, 0xc5a}, {0xc5d, 0xc5d}, {0xc60, 0xc63}, {0xc66, 0xc6f}, {0xc78, 0xc7e}, {0xc80, 0xc83}, {0xc85, 0xc8c}, {0xc8e, 0xc90},
  {0xc92, 0xca8}, {0xcaa, 0xcb3}, {0xcb5, 0xcb9}, {0xcbd, 0xcc4}, {0xcc6, 0xcc8}, {0xcca, 0xccc}, {0xcd5, 0xcd6}, {0xcdd, 0xcde},
  {0xce0, 0xce3}, {0xce6, 0xcef}, {0xcf1, 0xcf2}, {0xd00, 0xd0c}, {0xd0e, 0xd10}, {0xd12, 0xd3a}, {0xd3d, 0xd44}, {0xd46, 0xd48},
  {0xd4a, 0xd4c}, {0xd4e, 0xd4e}, {0xd54, 0xd63}, {0xd66, 0xd78}, {0xd7a, 0xd7f}, {0xd81, 0xd83}, {0xd85, 0xd96}, {0xd9a, 0xdb1},
  {0xdb3, 0xdbb}, {0xdbd, 0xdbd}, {0xdc0, 0xdc6}, {0xdcf, 0xdd4}, {0xdd6, 0xdd6}, {0xdd8, 0xddf}, {0xde6, 0xdef}, {0xdf2, 0xdf3},
  {0xe01, 0xe3a}, {0xe40, 0xe46}, {0xe4d, 0xe4d}, {0xe50, 0xe59}, {0xe81, 0xe82}, {0xe84, 0xe84}, {0xe86, 0xe8a}, {0xe8c, 0xea3},
  {0xea5, 0xea5}, {0xea7, 0xeb9}, {0xebb, 0xebd}, {0xec0, 0xec4}, {0xec6, 0xec6}, {0xecd, 0xecd}, {0xed0, 0xed9}, {0xedc, 0xedf},
  {0xf00, 0xf00}, {0xf20, 0xf33}, {0xf40, 0xf47}, {0xf49, 0xf6c}, {0xf71, 0xf81}, {0xf88, 0xf97}, {0xf99, 0xfbc}, {0x1000, 0x1036},
  {0x1038, 0x1038}, {0x103b, 0x1049}, {0x1050, 0x109d}, {0x10a0, 0x10c5}, {0x10c7, 0x10c7}, {0x10cd, 0x10cd}, {0x10d0, 0x10fa}, {0x10fc, 0x1248},
  {0x124a, 0x124d}, {0x1250, 0x1256}, {0x1258, 0x1258}, {0x125a, 0x125d}, {0x1260, 0x1288}, {0x128a, 0x128d}, {0x1290, 0x12b0}, {0x12b2, 0x12b5},
  {0x12b8, 0x12be}, {0x12c0, 0x12c0}, {0x12c2, 0x12c5}, {0x12c8, 0x12d6}, {0x12d8, 0x1310}, {0x1312, 0x1315}, {0x1318, 0x135a}, {0x1369, 0x137c},
  {0x1380, 0x138f}, {0x13a0, 0x13f5}, {0x13f8, 0x13fd}, {0x1401, 0x166c}, {0x166f, 0x167f}, {0x1681, 0x169a}, {0x16a0, 0x16ea}, {0x16ee, 0x16f8},
  {0x1700, 0x1713}, {0x171f, 0x1733}, {0x1740, 0x1753}, {0x1760, 0x176c}, {0x176e, 0x1770}, {0x1772, 0x1773}, {0x1780, 0x17b3}, {0x17b6, 0x17c8},
  {0x17d7, 0x17d7}, {0x17dc, 0x17dc}, {0x17e0, 0x17e9}, {0x17f0, 0x17f9}, {0x1810, 0x1819}, {0x1820, 0x1878}, {0x1880, 0x18aa}, {0x18b0, 0x18f5},
  {0x1900, 0x191e}, {0x1920, 0x192b}, {0x1930, 0x1938}, {0x1946, 0x196d}, {0x1970, 0x1974}, {0x1980, 0x19ab}, {0x19b0, 0x19c9}, {0x19d0, 0x19da},
  {0x1a00, 0x1a1b}, {0x1a20, 0x1a5e}, {0x1a61, 0x1a74}, {0x1a80, 0x1a89}, {0x1a90, 0x1a99}, {0x1aa7, 0x1aa7}, {0x1abf, 0x1ac0}, {0x1acc, 0x1ace},
  {0x1b00, 0x1b33}, {0x1b35, 0x1b43}, {0x1b45, 0x1b4c}, {0x1b50, 0x1b59}, {0x1b80, 0x1ba9}, {0x1bac, 0x1be5}, {0x1be7, 0x1bf1}, {0x1c00, 0x1c36},
  {0x1c40, 0x1c49}, {0x1c4d, 0x1c7d}, {0x1c80, 0x1c88}, {0x1c90, 0x1cba}, {0x1cbd, 0x1cbf}, {0x1ce9, 0x1cec}, {0x1cee, 0x1cf3}, {0x1cf5, 0x1cf6},
  {0x1cfa, 0x1cfa}, {0x1d00, 0x1dbf}, {0x1de7, 0x1df4}, {0x1e00, 0x1f15}, {0x1f18, 0x1f1d}, {0x1f20, 0x1f45}, {0x1f48, 0x1f4d}, {0x1f50, 0x1f57},
  {0x1f59, 0x1f59}, {0x1f5b, 0x1f5b}, {0x1f5d, 0x1f5d}, {0x1f5f, 0x1f7d}, {0x1f80, 0x1fb4}, {0x1fb6, 0x1fbc}, {0x1fbe, 0x1fbe}, {0x1fc2, 0x1fc4},
  {0x1fc6, 0x1fcc}, {0x1fd0, 0x1fd3}, {0x1fd6, 0x1fdb}, {0x1fe0, 0x1fec}, {0x1ff2, 0x1ff4}, {0x1ff6, 0x1ffc}, {0x2070, 0x2071}, {0x2074, 0x2079},
  {0x207f, 0x2089}, {0x2090, 0x209c}, {0x2102, 0x2102}, {0x2107, 0x2107}, {0x210a, 0x2113}, {0x2115, 0x2115}, {0x2119, 0x211d}, {0x2124, 0x2124},
  {0x2126, 0x2126}, {0x2128, 0x2128}, {0x212a, 0x212d}, {0x212f, 0x2139}, {0x213c, 0x213f}, {0x2145, 0x2149}, {0x214e, 0x214e}, {0x2150, 0x2189},
  {0x2460, 0x249b}, {0x24b6, 0x24ff}, {0x2776, 0x2793}, {0x2c00, 0x2ce4}, {0x2ceb, 0x2cee}, {0x2cf2, 0x2cf3}, {0x2cfd, 0x2cfd}, {0x2d00, 0x2d25},
  {0x2d27, 0x2d27}, {0x2d2d, 0x2d2d}, {0x2d30, 0x2d67}, {0x2d6f, 0x2d6f}, {0x2d80, 0x2d96}, {0x2da0, 0x2da6}, {0x2da8, 0x2dae}, {0x2db0, 0x2db6},
  {0x2db8, 0x2dbe}, {0x2dc0, 0x2dc6}, {0x2dc8, 0x2dce}, {0x2dd0, 0x2dd6}, {0x2dd8, 0x2dde}, {0x2de0, 0x2dff}, {0x2e2f, 0x2e2f}, {0x3005, 0x3007},
  {0x3021, 0x3029}, {0x3031, 0x3035}, {0x3038, 0x303c}, {0x3041, 0x3096}, {0x309d, 0x309f}, {0x30a1, 0x30fa}, {0x30fc, 0x30ff}, {0x3105, 0x312f},
  {0x3131, 0x318e}, {0x3192, 0x3195}, {0x31a0, 0x31bf}, {0x31f0, 0x31ff}, {0x3220, 0x3229}, {0x3248, 0x324f}, {0x3251, 0x325f}, {0x3280, 0x3289},
  {0x32b1, 0x32bf}, {0x3400, 0x4dbf}, {0x4e00, 0xa48c}, {0xa4d0, 0xa4fd}, {0xa500, 0xa60c}, {0xa610, 0xa62b}, {0xa640, 0xa66e}, {0xa674, 0xa67b},
  {0xa67f, 0xa6ef}, {0xa717, 0xa71f}, {0xa722, 0xa788}, {0xa78b, 0xa7ca}, {0xa7d0, 0xa7d1}, {0xa7d3, 0xa7d3}, {0xa7d5, 0xa7d9}, {0xa7f2, 0xa805},
  {0xa807, 0xa827}, {0xa830, 0xa835}, {0xa840, 0xa873}, {0xa880, 0xa8c3}, {0xa8c5, 0xa8c5}, {0xa8d0, 0xa8d9}, {0xa8f2, 0xa8f7}, {0xa8fb, 0xa8fb},
  {0xa8fd, 0xa92a}, {0xa930, 0xa952}, {0xa960, 0xa97c}, {0xa980, 0xa9b2}, {0xa9b4, 0xa9bf}, {0xa9cf, 0xa9d9}, {0xa9e0, 0xa9fe}, {0xaa00, 0xaa36},
  {0xaa40, 0xaa4d}, {0xaa50, 0xaa59}, {0xaa60, 0xaa76}, {0xaa7a, 0xaabe}, {0xaac0, 0xaac0}, {0xaac2, 0xaac2}, {0xaadb, 0xaadd}, {0xaae0, 0xaaef},
  {0xaaf2, 0xaaf5}, {0xab01, 0xab06}, {0xab09, 0xab0e}, {0xab11, 0xab16}, {0xab20, 0xab26}, {0xab28, 0xab2e}, {0xab30, 0xab5a}, {0xab5c, 0xab69},
  {0xab70, 0xabea}, {0xabf0, 0xabf9}, {0xac00, 0xd7a3}, {0xd7b0, 0xd7c6}, {0xd7cb, 0xd7fb}, {0xf900, 0xfa6d}, {0xfa70, 0xfad9}, {0xfb00, 0xfb06},
  {0xfb13, 0xfb17}, {0xfb1d, 0xfb28}, {0xfb2a, 0xfb36}, {0xfb38, 0xfb3c}, {0xfb3e, 0xfb3e}, {0xfb40, 0xfb41}, {0xfb43, 0xfb44}, {0xfb46, 0xfbb1},
  {0xfbd3, 0xfd3d}, {0xfd50, 0xfd8f}, {0xfd92, 0xfdc7}, {0xfdf0, 0xfdfb}, {0xfe70, 0xfe74}, {0xfe76, 0xfefc}, {0xff10, 0xff19}, {0xff21, 0xff3a},
  {0xff41, 0xff5a}, {0xff66, 0xffbe}, {0xffc2, 0xffc7}, {0xffca, 0xffcf}, {0xffd2, 0xffd7}, {0xffda, 0xffdc}, {0x10000, 0x1000b}, {0x1000d, 0x10026},
  {0x10028, 0x1003a}, {0x1003c, 0x1003d}, {0x1003f, 0x1004d}, {0x10050, 0x1005d}, {0x10080, 0x100fa}, {0x10107, 0x10133}, {0x10140, 0x10178}, {0x1018a, 0x1018b},
  {0x10280, 0x1029c}, {0x102a0, 0x102d0}, {0x102e1, 0x102fb}, {0x10300, 0x10323}, {0x1032d, 0x1034a}, {0x10350, 0x1037a}, {0x10380, 0x1039d}, {0x103a0, 0x103c3},
  {0x103c8, 0x103cf}, {0x103d1, 0x103d5}, {0x10400, 0x1049d}, {0x104a0, 0x104a9}, {0x104b0, 0x104d3}, {0x104d8, 0x104fb}, {0x10500, 0x10527}, {0x10530, 0x10563},
  {0x10570, 0x1057a}, {0x1057c, 0x1058a}, {0x1058c, 0x10592}, {0x10594, 0x10595}, {0x10597, 0x105a1}, {0x105a3, 0x105b1}, {0x105b3, 0x105b9}, {0x105bb, 0x105bc},
  {0x10600, 0x10736}, {0x10740, 0x10755}, {0x10760, 0x10767}, {0x10780, 0x10785}, {0x10787, 0x107b0}, {0x107b2, 0x107ba}, {0x10800, 0x10805}, {0x10808, 0x10808},
  {0x1080a, 0x10835}, {0x10837, 0x10838}, {0x1083c, 0x1083c}, {0x1083f, 0x10855}, {0x10858, 0x10876}, {0x10879, 0x1089e}, {0x108a7, 0x108af}, {0x108e0, 0x108f2},
  {0x108f4, 0x108f5}, {0x108fb, 0x1091b}, {0x10920, 0x10939}, {0x10980, 0x109b7}, {0x109be, 0x109bf}, {0x10a00, 0x10a03}, {0x10a05, 0x10a06}, {0x10a0c, 0x10a13},
  {0x10a15, 0x10a17}, {0x10a19, 0x10a35}, {0x10a60, 0x10a7c}, {0x10a80, 0x10a9c}, {0x10ac0, 0x10ac7}, {0x10ac9, 0x10ae4}, {0x10b00, 0x10b35}, {0x10b40, 0x10b55},
  {0x10b60, 0x10b72}, {0x10b80, 0x10b91}, {0x10c00, 0x10c48}, {0x10c80, 0x10cb2}, {0x10cc0, 0x10cf2}, {0x10d00, 0x10d27}, {0x10e80, 0x10ea9}, {0x10eab, 0x10eac},
  {0x10eb0, 0x10eb1}, {0x10f00, 0x10f1c}, {0x10f27, 0x10f27}, {0x10f30, 0x10f45}, {0x10f70, 0x10f81}, {0x10fb0, 0x10fc4}, {0x10fe0, 0x10ff6}, {0x11000, 0x11045},
  {0x11071, 0x11075}, {0x11082, 0x110b8}, {0x110c2, 0x110c2}, {0x110d0, 0x110e8}, {0x11100, 0x11132}, {0x11144, 0x11147}, {0x11150, 0x11172}, {0x11176, 0x11176},
  {0x11180, 0x111bf}, {0x111c1, 0x111c4}, {0x111ce, 0x111cf}, {0x111da, 0x111da}, {0x111dc, 0x111dc}, {0x11200, 0x11211}, {0x11213, 0x11234}, {0x11237, 0x11237},
  {0x1123e, 0x1123e}, {0x11280, 0x11286}, {0x11288, 0x11288}, {0x1128a, 0x1128d}, {0x1128f, 0x1129d}, {0x1129f, 0x112a8}, {0x112b0, 0x112e8}, {0x11300, 0x11303},
  {0x11305, 0x1130c}, {0x1130f, 0x11310}, {0x11313, 0x11328}, {0x1132a, 0x11330}, {0x11332, 0x11333}, {0x11335, 0x11339}, {0x1133d, 0x11344}, {0x11347, 0x11348},
  {0x1134b, 0x1134c}, {0x11350, 0x11350}, {0x11357, 0x11357}, {0x1135d, 0x11363}, {0x11400, 0x11441}, {0x11443, 0x11445}, {0x11447, 0x1144a}, {0x1145f, 0x11461},
  {0x11480, 0x114c1}, {0x114c4, 0x114c5}, {0x114c7, 0x114c7}, {0x11580, 0x115b5}, {0x115b8, 0x115be}, {0x115d8, 0x115dd}, {0x11600, 0x1163e}, {0x11640, 0x11640},
  {0x11644, 0x11644}, {0x11680, 0x116b5}, {0x116b8, 0x116b8}, {0x11700, 0x1171a}, {0x1171d, 0x1172a}, {0x11740, 0x11746}, {0x11800, 0x11838}, {0x118a0, 0x118df},
  {0x118ff, 0x11906}, {0x11909, 0x11909}, {0x1190c, 0x11913}, {0x11915, 0x11916}, {0x11918, 0x11935}, {0x11937, 0x11938}, {0x1193b, 0x1193c}, {0x1193f, 0x11942},
  {0x119a0, 0x119a7}, {0x119aa, 0x119d7}, {0x119da, 0x119df}, {0x119e1, 0x119e1}, {0x119e3, 0x119e4}, {0x11a00, 0x11a32}, {0x11a35, 0x11a3e}, {0x11a50, 0x11a97},
  {0x11a9d, 0x11a9d}, {0x11ab0, 0x11af8}, {0x11c00, 0x11c08}, {0x11c0a, 0x11c36}, {0x11c38, 0x11c3e}, {0x11c40, 0x11c40}, {0x11c72, 0x11c8f}, {0x11c92, 0x11ca7},
  {0x11ca9, 0x11cb6}, {0x11d00, 0x11d06}, {0x11d08, 0x11d09}, {0x11d0b, 0x11d36}, {0x11d3a, 0x11d3a}, {0x11d3c, 0x11d3d}, {0x11d3f, 0x11d41}, {0x11d43, 0x11d43},
  {0x11d46, 0x11d47}, {0x11d60, 0x11d65}, {0x11d67, 0x11d68}, {0x11d6a, 0x11d8e}, {0x11d90, 0x11d91}, {0x11d93, 0x11d96}, {0x11d98, 0x11d98}, {0x11ee0, 0x11ef6},
  {0x11fb0, 0x11fb0}, {0x12000, 0x12399}, {0x12400, 0x1246e}, {0x12480, 0x12543}, {0x12f90, 0x12ff0}, {0x13000, 0x1342e}, {0x14400, 0x14646}, {0x16800, 0x16a38},
  {0x16a40, 0x16a5e}, {0x16a70, 0x16abe}, {0x16ad0, 0x16aed}, {0x16b00, 0x16b2f}, {0x16b40, 0x16b43}, {0x16b63, 0x16b77}, {0x16b7d, 0x16b8f}, {0x16e40, 0x16e7f},
  {0x16f00, 0x16f4a}, {0x16f4f, 0x16f87}, {0x16f8f, 0x16f9f}, {0x16fe0, 0x16fe1}, {0x16fe3, 0x16fe3}, {0x16ff0, 0x16ff1}, {0x17000, 0x187f7}, {0x18800, 0x18cd5},
  {0x18d00, 0x18d08}, {0x1aff0, 0x1aff3}, {0x1aff5, 0x1affb}, {0x1affd, 0x1affe}, {0x1b000, 0x1b122}, {0x1b150, 0x1b152}, {0x1b164, 0x1b167}, {0x1b170, 0x1b2fb},
  {0x1bc00, 0x1bc6a}, {0x1bc70, 0x1bc7c}, {0x1bc80, 0x1bc88}, {0x1bc90, 0x1bc99}, {0x1bc9e, 0x1bc9e}, {0x1d400, 0x1d454}, {0x1d456, 0x1d49c}, {0x1d49e, 0x1d49f},
  {0x1d4a2, 0x1d4a2}, {0x1d4a5, 0x1d4a6}, {0x1d4a9, 0x1d4ac}, {0x1d4ae, 0x1d4b9}, {0x1d4bb, 0x1d4bb}, {0x1d4bd, 0x1d4c3}, {0x1d4c5, 0x1d505}, {0x1d507, 0x1d50a},
  {0x1d50d, 0x1d514}, {0x1d516, 0x1d51c}, {0x1d51e, 0x1d539}, {0x1d53b, 0x1d53e}, {0x1d540, 0x1d544}, {0x1d546, 0x1d546}, {0x1d54a, 0x1d550}, {0x1d552, 0x1d6a5},
  {0x1d6a8, 0x1d6c0}, {0x1d6c2, 0x1d6da}, {0x1d6dc, 0x1d6fa}, {0x1d6fc, 0x1d714}, {0x1d716, 0x1d734}, {0x1d736, 0x1d74e}, {0x1d750, 0x1d76e}, {0x1d770, 0x1d788},
  {0x1d78a, 0x1d7a8}, {0x1d7aa, 0x1d7c2}, {0x1d7c4, 0x1d7cb}, {0x1df00, 0x1df1e}, {0x1e000, 0x1e006}, {0x1e008, 0x1e018}, {0x1e01b, 0x1e021}, {0x1e023, 0x1e024},
  {0x1e026, 0x1e02a}, {0x1e100, 0x1e12c}, {0x1e137, 0x1e13d}, {0x1e14e, 0x1e14e}, {0x1e290, 0x1e2ad}, {0x1e2c0, 0x1e2eb}, {0x1e7e0, 0x1e7e6}, {0x1e7e8, 0x1e7eb},
  {0x1e7ed, 0x1e7ee}, {0x1e7f0, 0x1e7fe}, {0x1e800, 0x1e8c4}, {0x1e900, 0x1e943}, {0x1e947, 0x1e947}, {0x1e94b, 0x1e94b}, {0x1ee00, 0x1ee03}, {0x1ee05, 0x1ee1f},
  {0x1ee21, 0x1ee22}, {0x1ee24, 0x1ee24}, {0x1ee27, 0x1ee27}, {0x1ee29, 0x1ee32}, {0x1ee34, 0x1ee37}, {0x1ee39, 0x1ee39}, {0x1ee3b, 0x1ee3b}, {0x1ee42, 0x1ee42},
  {0x1ee47, 0x1ee47}, {0x1ee49, 0x1ee49}, {0x1ee4b, 0x1ee4b}, {0x1ee4d, 0x1ee4f}, {0x1ee51, 0x1ee52}, {0x1ee54, 0x1ee54}, {0x1ee57, 0x1ee57}, {0x1ee59, 0x1ee59},
  {0x1ee5b, 0x1ee5b}, {0x1ee5d, 0x1ee5d}, {0x1ee5f, 0x1ee5f}, {0x1ee61, 0x1ee62}, {0x1ee64, 0x1ee64}, {0x1ee67, 0x1ee6a}, {0x1ee6c, 0x1ee72}, {0x1ee74, 0x1ee77},
  {0x1ee79, 0x1ee7c}, {0x1ee7e, 0x1ee7e}, {0x1ee80, 0x1ee89}, {0x1ee8b, 0x1ee9b}, {0x1eea1, 0x1eea3}, {0x1eea5, 0x1eea9}, {0x1eeab, 0x1eebb}, {0x1f130, 0x1f149},
  {0x1f150, 0x1f169}, {0x1f170, 0x1f189}, {0x20000, 0x2a6df}, {0x2a700, 0x2b738}, {0x2b740, 0x2b81d}, {0x2b820, 0x2cea1}, {0x2ceb0, 0x2ebe0}, {0x2f800, 0x2fa1d},
  {0x30000, 0x3134a},
};

static TSCharacterRange sym_key_string_text_character_set_1[] = {
  {'$', '$'}, {'-', '.'}, {'0', '9'}, {'@', '['}, {']', ']'}, {'_', '_'}, {'a', 'z'}, {0xaa, 0xaa},
  {0xb2, 0xb3}, {0xb5, 0xb5}, {0xb9, 0xba}, {0xbc, 0xbe}, {0xc0, 0xd6}, {0xd8, 0xf6}, {0xf8, 0x2c1}, {0x2c6, 0x2d1},
  {0x2e0, 0x2e4}, {0x2ec, 0x2ec}, {0x2ee, 0x2ee}, {0x345, 0x345}, {0x370, 0x374}, {0x376, 0x377}, {0x37a, 0x37d}, {0x37f, 0x37f},
  {0x386, 0x386}, {0x388, 0x38a}, {0x38c, 0x38c}, {0x38e, 0x3a1}, {0x3a3, 0x3f5}, {0x3f7, 0x481}, {0x48a, 0x52f}, {0x531, 0x556},
  {0x559, 0x559}, {0x560, 0x588}, {0x5b0, 0x5bd}, {0x5bf, 0x5bf}, {0x5c1, 0x5c2}, {0x5c4, 0x5c5}, {0x5c7, 0x5c7}, {0x5d0, 0x5ea},
  {0x5ef, 0x5f2}, {0x610, 0x61a}, {0x620, 0x657}, {0x659, 0x669}, {0x66e, 0x6d3}, {0x6d5, 0x6dc}, {0x6e1, 0x6e8}, {0x6ed, 0x6fc},
  {0x6ff, 0x6ff}, {0x710, 0x73f}, {0x74d, 0x7b1}, {0x7c0, 0x7ea}, {0x7f4, 0x7f5}, {0x7fa, 0x7fa}, {0x800, 0x817}, {0x81a, 0x82c},
  {0x840, 0x858}, {0x860, 0x86a}, {0x870, 0x887}, {0x889, 0x88e}, {0x8a0, 0x8c9}, {0x8d4, 0x8df}, {0x8e3, 0x8e9}, {0x8f0, 0x93b},
  {0x93d, 0x94c}, {0x94e, 0x950}, {0x955, 0x963}, {0x966, 0x96f}, {0x971, 0x983}, {0x985, 0x98c}, {0x98f, 0x990}, {0x993, 0x9a8},
  {0x9aa, 0x9b0}, {0x9b2, 0x9b2}, {0x9b6, 0x9b9}, {0x9bd, 0x9c4}, {0x9c7, 0x9c8}, {0x9cb, 0x9cc}, {0x9ce, 0x9ce}, {0x9d7, 0x9d7},
  {0x9dc, 0x9dd}, {0x9df, 0x9e3}, {0x9e6, 0x9f1}, {0x9f4, 0x9f9}, {0x9fc, 0x9fc}, {0xa01, 0xa03}, {0xa05, 0xa0a}, {0xa0f, 0xa10},
  {0xa13, 0xa28}, {0xa2a, 0xa30}, {0xa32, 0xa33}, {0xa35, 0xa36}, {0xa38, 0xa39}, {0xa3e, 0xa42}, {0xa47, 0xa48}, {0xa4b, 0xa4c},
  {0xa51, 0xa51}, {0xa59, 0xa5c}, {0xa5e, 0xa5e}, {0xa66, 0xa75}, {0xa81, 0xa83}, {0xa85, 0xa8d}, {0xa8f, 0xa91}, {0xa93, 0xaa8},
  {0xaaa, 0xab0}, {0xab2, 0xab3}, {0xab5, 0xab9}, {0xabd, 0xac5}, {0xac7, 0xac9}, {0xacb, 0xacc}, {0xad0, 0xad0}, {0xae0, 0xae3},
  {0xae6, 0xaef}, {0xaf9, 0xafc}, {0xb01, 0xb03}, {0xb05, 0xb0c}, {0xb0f, 0xb10}, {0xb13, 0xb28}, {0xb2a, 0xb30}, {0xb32, 0xb33},
  {0xb35, 0xb39}, {0xb3d, 0xb44}, {0xb47, 0xb48}, {0xb4b, 0xb4c}, {0xb56, 0xb57}, {0xb5c, 0xb5d}, {0xb5f, 0xb63}, {0xb66, 0xb6f},
  {0xb71, 0xb77}, {0xb82, 0xb83}, {0xb85, 0xb8a}, {0xb8e, 0xb90}, {0xb92, 0xb95}, {0xb99, 0xb9a}, {0xb9c, 0xb9c}, {0xb9e, 0xb9f},
  {0xba3, 0xba4}, {0xba8, 0xbaa}, {0xbae, 0xbb9}, {0xbbe, 0xbc2}, {0xbc6, 0xbc8}, {0xbca, 0xbcc}, {0xbd0, 0xbd0}, {0xbd7, 0xbd7},
  {0xbe6, 0xbf2}, {0xc00, 0xc03}, {0xc05, 0xc0c}, {0xc0e, 0xc10}, {0xc12, 0xc28}, {0xc2a, 0xc39}, {0xc3d, 0xc44}, {0xc46, 0xc48},
  {0xc4a, 0xc4c}, {0xc55, 0xc56}, {0xc58, 0xc5a}, {0xc5d, 0xc5d}, {0xc60, 0xc63}, {0xc66, 0xc6f}, {0xc78, 0xc7e}, {0xc80, 0xc83},
  {0xc85, 0xc8c}, {0xc8e, 0xc90}, {0xc92, 0xca8}, {0xcaa, 0xcb3}, {0xcb5, 0xcb9}, {0xcbd, 0xcc4}, {0xcc6, 0xcc8}, {0xcca, 0xccc},
  {0xcd5, 0xcd6}, {0xcdd, 0xcde}, {0xce0, 0xce3}, {0xce6, 0xcef}, {0xcf1, 0xcf2}, {0xd00, 0xd0c}, {0xd0e, 0xd10}, {0xd12, 0xd3a},
  {0xd3d, 0xd44}, {0xd46, 0xd48}, {0xd4a, 0xd4c}, {0xd4e, 0xd4e}, {0xd54, 0xd63}, {0xd66, 0xd78}, {0xd7a, 0xd7f}, {0xd81, 0xd83},
  {0xd85, 0xd96}, {0xd9a, 0xdb1}, {0xdb3, 0xdbb}, {0xdbd, 0xdbd}, {0xdc0, 0xdc6}, {0xdcf, 0xdd4}, {0xdd6, 0xdd6}, {0xdd8, 0xddf},
  {0xde6, 0xdef}, {0xdf2, 0xdf3}, {0xe01, 0xe3a}, {0xe40, 0xe46}, {0xe4d, 0xe4d}, {0xe50, 0xe59}, {0xe81, 0xe82}, {0xe84, 0xe84},
  {0xe86, 0xe8a}, {0xe8c, 0xea3}, {0xea5, 0xea5}, {0xea7, 0xeb9}, {0xebb, 0xebd}, {0xec0, 0xec4}, {0xec6, 0xec6}, {0xecd, 0xecd},
  {0xed0, 0xed9}, {0xedc, 0xedf}, {0xf00, 0xf00}, {0xf20, 0xf33}, {0xf40, 0xf47}, {0xf49, 0xf6c}, {0xf71, 0xf81}, {0xf88, 0xf97},
  {0xf99, 0xfbc}, {0x1000, 0x1036}, {0x1038, 0x1038}, {0x103b, 0x1049}, {0x1050, 0x109d}, {0x10a0, 0x10c5}, {0x10c7, 0x10c7}, {0x10cd, 0x10cd},
  {0x10d0, 0x10fa}, {0x10fc, 0x1248}, {0x124a, 0x124d}, {0x1250, 0x1256}, {0x1258, 0x1258}, {0x125a, 0x125d}, {0x1260, 0x1288}, {0x128a, 0x128d},
  {0x1290, 0x12b0}, {0x12b2, 0x12b5}, {0x12b8, 0x12be}, {0x12c0, 0x12c0}, {0x12c2, 0x12c5}, {0x12c8, 0x12d6}, {0x12d8, 0x1310}, {0x1312, 0x1315},
  {0x1318, 0x135a}, {0x1369, 0x137c}, {0x1380, 0x138f}, {0x13a0, 0x13f5}, {0x13f8, 0x13fd}, {0x1401, 0x166c}, {0x166f, 0x167f}, {0x1681, 0x169a},
  {0x16a0, 0x16ea}, {0x16ee, 0x16f8}, {0x1700, 0x1713}, {0x171f, 0x1733}, {0x1740, 0x1753}, {0x1760, 0x176c}, {0x176e, 0x1770}, {0x1772, 0x1773},
  {0x1780, 0x17b3}, {0x17b6, 0x17c8}, {0x17d7, 0x17d7}, {0x17dc, 0x17dc}, {0x17e0, 0x17e9}, {0x17f0, 0x17f9}, {0x1810, 0x1819}, {0x1820, 0x1878},
  {0x1880, 0x18aa}, {0x18b0, 0x18f5}, {0x1900, 0x191e}, {0x1920, 0x192b}, {0x1930, 0x1938}, {0x1946, 0x196d}, {0x1970, 0x1974}, {0x1980, 0x19ab},
  {0x19b0, 0x19c9}, {0x19d0, 0x19da}, {0x1a00, 0x1a1b}, {0x1a20, 0x1a5e}, {0x1a61, 0x1a74}, {0x1a80, 0x1a89}, {0x1a90, 0x1a99}, {0x1aa7, 0x1aa7},
  {0x1abf, 0x1ac0}, {0x1acc, 0x1ace}, {0x1b00, 0x1b33}, {0x1b35, 0x1b43}, {0x1b45, 0x1b4c}, {0x1b50, 0x1b59}, {0x1b80, 0x1ba9}, {0x1bac, 0x1be5},
  {0x1be7, 0x1bf1}, {0x1c00, 0x1c36}, {0x1c40, 0x1c49}, {0x1c4d, 0x1c7d}, {0x1c80, 0x1c88}, {0x1c90, 0x1cba}, {0x1cbd, 0x1cbf}, {0x1ce9, 0x1cec},
  {0x1cee, 0x1cf3}, {0x1cf5, 0x1cf6}, {0x1cfa, 0x1cfa}, {0x1d00, 0x1dbf}, {0x1de7, 0x1df4}, {0x1e00, 0x1f15}, {0x1f18, 0x1f1d}, {0x1f20, 0x1f45},
  {0x1f48, 0x1f4d}, {0x1f50, 0x1f57}, {0x1f59, 0x1f59}, {0x1f5b, 0x1f5b}, {0x1f5d, 0x1f5d}, {0x1f5f, 0x1f7d}, {0x1f80, 0x1fb4}, {0x1fb6, 0x1fbc},
  {0x1fbe, 0x1fbe}, {0x1fc2, 0x1fc4}, {0x1fc6, 0x1fcc}, {0x1fd0, 0x1fd3}, {0x1fd6, 0x1fdb}, {0x1fe0, 0x1fec}, {0x1ff2, 0x1ff4}, {0x1ff6, 0x1ffc},
  {0x2070, 0x2071}, {0x2074, 0x2079}, {0x207f, 0x2089}, {0x2090, 0x209c}, {0x2102, 0x2102}, {0x2107, 0x2107}, {0x210a, 0x2113}, {0x2115, 0x2115},
  {0x2119, 0x211d}, {0x2124, 0x2124}, {0x2126, 0x2126}, {0x2128, 0x2128}, {0x212a, 0x212d}, {0x212f, 0x2139}, {0x213c, 0x213f}, {0x2145, 0x2149},
  {0x214e, 0x214e}, {0x2150, 0x2189}, {0x2460, 0x249b}, {0x24b6, 0x24ff}, {0x2776, 0x2793}, {0x2c00, 0x2ce4}, {0x2ceb, 0x2cee}, {0x2cf2, 0x2cf3},
  {0x2cfd, 0x2cfd}, {0x2d00, 0x2d25}, {0x2d27, 0x2d27}, {0x2d2d, 0x2d2d}, {0x2d30, 0x2d67}, {0x2d6f, 0x2d6f}, {0x2d80, 0x2d96}, {0x2da0, 0x2da6},
  {0x2da8, 0x2dae}, {0x2db0, 0x2db6}, {0x2db8, 0x2dbe}, {0x2dc0, 0x2dc6}, {0x2dc8, 0x2dce}, {0x2dd0, 0x2dd6}, {0x2dd8, 0x2dde}, {0x2de0, 0x2dff},
  {0x2e2f, 0x2e2f}, {0x3005, 0x3007}, {0x3021, 0x3029}, {0x3031, 0x3035}, {0x3038, 0x303c}, {0x3041, 0x3096}, {0x309d, 0x309f}, {0x30a1, 0x30fa},
  {0x30fc, 0x30ff}, {0x3105, 0x312f}, {0x3131, 0x318e}, {0x3192, 0x3195}, {0x31a0, 0x31bf}, {0x31f0, 0x31ff}, {0x3220, 0x3229}, {0x3248, 0x324f},
  {0x3251, 0x325f}, {0x3280, 0x3289}, {0x32b1, 0x32bf}, {0x3400, 0x4dbf}, {0x4e00, 0xa48c}, {0xa4d0, 0xa4fd}, {0xa500, 0xa60c}, {0xa610, 0xa62b},
  {0xa640, 0xa66e}, {0xa674, 0xa67b}, {0xa67f, 0xa6ef}, {0xa717, 0xa71f}, {0xa722, 0xa788}, {0xa78b, 0xa7ca}, {0xa7d0, 0xa7d1}, {0xa7d3, 0xa7d3},
  {0xa7d5, 0xa7d9}, {0xa7f2, 0xa805}, {0xa807, 0xa827}, {0xa830, 0xa835}, {0xa840, 0xa873}, {0xa880, 0xa8c3}, {0xa8c5, 0xa8c5}, {0xa8d0, 0xa8d9},
  {0xa8f2, 0xa8f7}, {0xa8fb, 0xa8fb}, {0xa8fd, 0xa92a}, {0xa930, 0xa952}, {0xa960, 0xa97c}, {0xa980, 0xa9b2}, {0xa9b4, 0xa9bf}, {0xa9cf, 0xa9d9},
  {0xa9e0, 0xa9fe}, {0xaa00, 0xaa36}, {0xaa40, 0xaa4d}, {0xaa50, 0xaa59}, {0xaa60, 0xaa76}, {0xaa7a, 0xaabe}, {0xaac0, 0xaac0}, {0xaac2, 0xaac2},
  {0xaadb, 0xaadd}, {0xaae0, 0xaaef}, {0xaaf2, 0xaaf5}, {0xab01, 0xab06}, {0xab09, 0xab0e}, {0xab11, 0xab16}, {0xab20, 0xab26}, {0xab28, 0xab2e},
  {0xab30, 0xab5a}, {0xab5c, 0xab69}, {0xab70, 0xabea}, {0xabf0, 0xabf9}, {0xac00, 0xd7a3}, {0xd7b0, 0xd7c6}, {0xd7cb, 0xd7fb}, {0xf900, 0xfa6d},
  {0xfa70, 0xfad9}, {0xfb00, 0xfb06}, {0xfb13, 0xfb17}, {0xfb1d, 0xfb28}, {0xfb2a, 0xfb36}, {0xfb38, 0xfb3c}, {0xfb3e, 0xfb3e}, {0xfb40, 0xfb41},
  {0xfb43, 0xfb44}, {0xfb46, 0xfbb1}, {0xfbd3, 0xfd3d}, {0xfd50, 0xfd8f}, {0xfd92, 0xfdc7}, {0xfdf0, 0xfdfb}, {0xfe70, 0xfe74}, {0xfe76, 0xfefc},
  {0xff10, 0xff19}, {0xff21, 0xff3a}, {0xff41, 0xff5a}, {0xff66, 0xffbe}, {0xffc2, 0xffc7}, {0xffca, 0xffcf}, {0xffd2, 0xffd7}, {0xffda, 0xffdc},
  {0x10000, 0x1000b}, {0x1000d, 0x10026}, {0x10028, 0x1003a}, {0x1003c, 0x1003d}, {0x1003f, 0x1004d}, {0x10050, 0x1005d}, {0x10080, 0x100fa}, {0x10107, 0x10133},
  {0x10140, 0x10178}, {0x1018a, 0x1018b}, {0x10280, 0x1029c}, {0x102a0, 0x102d0}, {0x102e1, 0x102fb}, {0x10300, 0x10323}, {0x1032d, 0x1034a}, {0x10350, 0x1037a},
  {0x10380, 0x1039d}, {0x103a0, 0x103c3}, {0x103c8, 0x103cf}, {0x103d1, 0x103d5}, {0x10400, 0x1049d}, {0x104a0, 0x104a9}, {0x104b0, 0x104d3}, {0x104d8, 0x104fb},
  {0x10500, 0x10527}, {0x10530, 0x10563}, {0x10570, 0x1057a}, {0x1057c, 0x1058a}, {0x1058c, 0x10592}, {0x10594, 0x10595}, {0x10597, 0x105a1}, {0x105a3, 0x105b1},
  {0x105b3, 0x105b9}, {0x105bb, 0x105bc}, {0x10600, 0x10736}, {0x10740, 0x10755}, {0x10760, 0x10767}, {0x10780, 0x10785}, {0x10787, 0x107b0}, {0x107b2, 0x107ba},
  {0x10800, 0x10805}, {0x10808, 0x10808}, {0x1080a, 0x10835}, {0x10837, 0x10838}, {0x1083c, 0x1083c}, {0x1083f, 0x10855}, {0x10858, 0x10876}, {0x10879, 0x1089e},
  {0x108a7, 0x108af}, {0x108e0, 0x108f2}, {0x108f4, 0x108f5}, {0x108fb, 0x1091b}, {0x10920, 0x10939}, {0x10980, 0x109b7}, {0x109be, 0x109bf}, {0x10a00, 0x10a03},
  {0x10a05, 0x10a06}, {0x10a0c, 0x10a13}, {0x10a15, 0x10a17}, {0x10a19, 0x10a35}, {0x10a60, 0x10a7c}, {0x10a80, 0x10a9c}, {0x10ac0, 0x10ac7}, {0x10ac9, 0x10ae4},
  {0x10b00, 0x10b35}, {0x10b40, 0x10b55}, {0x10b60, 0x10b72}, {0x10b80, 0x10b91}, {0x10c00, 0x10c48}, {0x10c80, 0x10cb2}, {0x10cc0, 0x10cf2}, {0x10d00, 0x10d27},
  {0x10e80, 0x10ea9}, {0x10eab, 0x10eac}, {0x10eb0, 0x10eb1}, {0x10f00, 0x10f1c}, {0x10f27, 0x10f27}, {0x10f30, 0x10f45}, {0x10f70, 0x10f81}, {0x10fb0, 0x10fc4},
  {0x10fe0, 0x10ff6}, {0x11000, 0x11045}, {0x11071, 0x11075}, {0x11082, 0x110b8}, {0x110c2, 0x110c2}, {0x110d0, 0x110e8}, {0x11100, 0x11132}, {0x11144, 0x11147},
  {0x11150, 0x11172}, {0x11176, 0x11176}, {0x11180, 0x111bf}, {0x111c1, 0x111c4}, {0x111ce, 0x111cf}, {0x111da, 0x111da}, {0x111dc, 0x111dc}, {0x11200, 0x11211},
  {0x11213, 0x11234}, {0x11237, 0x11237}, {0x1123e, 0x1123e}, {0x11280, 0x11286}, {0x11288, 0x11288}, {0x1128a, 0x1128d}, {0x1128f, 0x1129d}, {0x1129f, 0x112a8},
  {0x112b0, 0x112e8}, {0x11300, 0x11303}, {0x11305, 0x1130c}, {0x1130f, 0x11310}, {0x11313, 0x11328}, {0x1132a, 0x11330}, {0x11332, 0x11333}, {0x11335, 0x11339},
  {0x1133d, 0x11344}, {0x11347, 0x11348}, {0x1134b, 0x1134c}, {0x11350, 0x11350}, {0x11357, 0x11357}, {0x1135d, 0x11363}, {0x11400, 0x11441}, {0x11443, 0x11445},
  {0x11447, 0x1144a}, {0x1145f, 0x11461}, {0x11480, 0x114c1}, {0x114c4, 0x114c5}, {0x114c7, 0x114c7}, {0x11580, 0x115b5}, {0x115b8, 0x115be}, {0x115d8, 0x115dd},
  {0x11600, 0x1163e}, {0x11640, 0x11640}, {0x11644, 0x11644}, {0x11680, 0x116b5}, {0x116b8, 0x116b8}, {0x11700, 0x1171a}, {0x1171d, 0x1172a}, {0x11740, 0x11746},
  {0x11800, 0x11838}, {0x118a0, 0x118df}, {0x118ff, 0x11906}, {0x11909, 0x11909}, {0x1190c, 0x11913}, {0x11915, 0x11916}, {0x11918, 0x11935}, {0x11937, 0x11938},
  {0x1193b, 0x1193c}, {0x1193f, 0x11942}, {0x119a0, 0x119a7}, {0x119aa, 0x119d7}, {0x119da, 0x119df}, {0x119e1, 0x119e1}, {0x119e3, 0x119e4}, {0x11a00, 0x11a32},
  {0x11a35, 0x11a3e}, {0x11a50, 0x11a97}, {0x11a9d, 0x11a9d}, {0x11ab0, 0x11af8}, {0x11c00, 0x11c08}, {0x11c0a, 0x11c36}, {0x11c38, 0x11c3e}, {0x11c40, 0x11c40},
  {0x11c72, 0x11c8f}, {0x11c92, 0x11ca7}, {0x11ca9, 0x11cb6}, {0x11d00, 0x11d06}, {0x11d08, 0x11d09}, {0x11d0b, 0x11d36}, {0x11d3a, 0x11d3a}, {0x11d3c, 0x11d3d},
  {0x11d3f, 0x11d41}, {0x11d43, 0x11d43}, {0x11d46, 0x11d47}, {0x11d60, 0x11d65}, {0x11d67, 0x11d68}, {0x11d6a, 0x11d8e}, {0x11d90, 0x11d91}, {0x11d93, 0x11d96},
  {0x11d98, 0x11d98}, {0x11ee0, 0x11ef6}, {0x11fb0, 0x11fb0}, {0x12000, 0x12399}, {0x12400, 0x1246e}, {0x12480, 0x12543}, {0x12f90, 0x12ff0}, {0x13000, 0x1342e},
  {0x14400, 0x14646}, {0x16800, 0x16a38}, {0x16a40, 0x16a5e}, {0x16a70, 0x16abe}, {0x16ad0, 0x16aed}, {0x16b00, 0x16b2f}, {0x16b40, 0x16b43}, {0x16b63, 0x16b77},
  {0x16b7d, 0x16b8f}, {0x16e40, 0x16e7f}, {0x16f00, 0x16f4a}, {0x16f4f, 0x16f87}, {0x16f8f, 0x16f9f}, {0x16fe0, 0x16fe1}, {0x16fe3, 0x16fe3}, {0x16ff0, 0x16ff1},
  {0x17000, 0x187f7}, {0x18800, 0x18cd5}, {0x18d00, 0x18d08}, {0x1aff0, 0x1aff3}, {0x1aff5, 0x1affb}, {0x1affd, 0x1affe}, {0x1b000, 0x1b122}, {0x1b150, 0x1b152},
  {0x1b164, 0x1b167}, {0x1b170, 0x1b2fb}, {0x1bc00, 0x1bc6a}, {0x1bc70, 0x1bc7c}, {0x1bc80, 0x1bc88}, {0x1bc90, 0x1bc99}, {0x1bc9e, 0x1bc9e}, {0x1d400, 0x1d454},
  {0x1d456, 0x1d49c}, {0x1d49e, 0x1d49f}, {0x1d4a2, 0x1d4a2}, {0x1d4a5, 0x1d4a6}, {0x1d4a9, 0x1d4ac}, {0x1d4ae, 0x1d4b9}, {0x1d4bb, 0x1d4bb}, {0x1d4bd, 0x1d4c3},
  {0x1d4c5, 0x1d505}, {0x1d507, 0x1d50a}, {0x1d50d, 0x1d514}, {0x1d516, 0x1d51c}, {0x1d51e, 0x1d539}, {0x1d53b, 0x1d53e}, {0x1d540, 0x1d544}, {0x1d546, 0x1d546},
  {0x1d54a, 0x1d550}, {0x1d552, 0x1d6a5}, {0x1d6a8, 0x1d6c0}, {0x1d6c2, 0x1d6da}, {0x1d6dc, 0x1d6fa}, {0x1d6fc, 0x1d714}, {0x1d716, 0x1d734}, {0x1d736, 0x1d74e},
  {0x1d750, 0x1d76e}, {0x1d770, 0x1d788}, {0x1d78a, 0x1d7a8}, {0x1d7aa, 0x1d7c2}, {0x1d7c4, 0x1d7cb}, {0x1df00, 0x1df1e}, {0x1e000, 0x1e006}, {0x1e008, 0x1e018},
  {0x1e01b, 0x1e021}, {0x1e023, 0x1e024}, {0x1e026, 0x1e02a}, {0x1e100, 0x1e12c}, {0x1e137, 0x1e13d}, {0x1e14e, 0x1e14e}, {0x1e290, 0x1e2ad}, {0x1e2c0, 0x1e2eb},
  {0x1e7e0, 0x1e7e6}, {0x1e7e8, 0x1e7eb}, {0x1e7ed, 0x1e7ee}, {0x1e7f0, 0x1e7fe}, {0x1e800, 0x1e8c4}, {0x1e900, 0x1e943}, {0x1e947, 0x1e947}, {0x1e94b, 0x1e94b},
  {0x1ee00, 0x1ee03}, {0x1ee05, 0x1ee1f}, {0x1ee21, 0x1ee22}, {0x1ee24, 0x1ee24}, {0x1ee27, 0x1ee27}, {0x1ee29, 0x1ee32}, {0x1ee34, 0x1ee37}, {0x1ee39, 0x1ee39},
  {0x1ee3b, 0x1ee3b}, {0x1ee42, 0x1ee42}, {0x1ee47, 0x1ee47}, {0x1ee49, 0x1ee49}, {0x1ee4b, 0x1ee4b}, {0x1ee4d, 0x1ee4f}, {0x1ee51, 0x1ee52}, {0x1ee54, 0x1ee54},
  {0x1ee57, 0x1ee57}, {0x1ee59, 0x1ee59}, {0x1ee5b, 0x1ee5b}, {0x1ee5d, 0x1ee5d}, {0x1ee5f, 0x1ee5f}, {0x1ee61, 0x1ee62}, {0x1ee64, 0x1ee64}, {0x1ee67, 0x1ee6a},
  {0x1ee6c, 0x1ee72}, {0x1ee74, 0x1ee77}, {0x1ee79, 0x1ee7c}, {0x1ee7e, 0x1ee7e}, {0x1ee80, 0x1ee89}, {0x1ee8b, 0x1ee9b}, {0x1eea1, 0x1eea3}, {0x1eea5, 0x1eea9},
  {0x1eeab, 0x1eebb}, {0x1f130, 0x1f149}, {0x1f150, 0x1f169}, {0x1f170, 0x1f189}, {0x20000, 0x2a6df}, {0x2a700, 0x2b738}, {0x2b740, 0x2b81d}, {0x2b820, 0x2cea1},
  {0x2ceb0, 0x2ebe0}, {0x2f800, 0x2fa1d}, {0x30000, 0x3134a},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(983);
      ADVANCE_MAP(
        '!', 96,
        '"', 1196,
        '#', 1579,
        '*', 1089,
        '+', 1576,
        ',', 1495,
        '-', 1577,
        '.', 1573,
        '/', 1580,
        '0', 1088,
        ':', 1112,
        ';', 1114,
        '<', 1228,
        '=', 1175,
        '>', 1224,
        'C', 1062,
        'E', 1575,
        'G', 1031,
        'H', 1032,
        'L', 1045,
        'O', 1067,
        'P', 1023,
        'T', 1069,
        'U', 1055,
        'V', 1044,
        '[', 103,
        '\\', 1583,
        ']', 1496,
        '`', 1442,
        'a', 1567,
        'b', 1562,
        'c', 1555,
        'd', 1557,
        'e', 1574,
        'f', 1558,
        'g', 1564,
        'h', 1161,
        'i', 1560,
        'j', 1565,
        'k', 1553,
        'l', 1549,
        'm', 1160,
        'n', 1554,
        'o', 1566,
        'p', 1551,
        'r', 1548,
        's', 1162,
        't', 1563,
        'u', 1561,
        'v', 1550,
        'x', 1559,
        '{', 1492,
        '}', 1494,
        'q', 1546,
        'w', 1546,
        'y', 1546,
        'z', 1546,
        'A', 1080,
        'B', 1080,
        'D', 1080,
        'F', 1080,
      );
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1088);
      if (('I' <= lookahead && lookahead <= 'Z')) ADVANCE(1080);
      if (set_contains(extras_character_set_2, 9, lookahead)) SKIP(982);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(984);
      if (lookahead == '#') ADVANCE(1579);
      if (lookahead == '\\') ADVANCE(852);
      if (lookahead == '{') ADVANCE(888);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      if (lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200b) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x2060 ||
          lookahead == 0x3000 ||
          lookahead == 0xfeff) ADVANCE(1122);
      if (lookahead != 0 &&
          lookahead != ';' &&
          lookahead != '}') ADVANCE(1123);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(984);
      if (lookahead == '#') ADVANCE(1579);
      if (lookahead == '\\') ADVANCE(853);
      if (lookahead == '{') ADVANCE(888);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      if (lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200b) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x2060 ||
          lookahead == 0x3000 ||
          lookahead == 0xfeff) ADVANCE(1122);
      if (lookahead != 0 &&
          lookahead != ';' &&
          lookahead != '}') ADVANCE(1123);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(984);
      if (lookahead == '#') ADVANCE(1579);
      if (lookahead == 'm') ADVANCE(1163);
      if (lookahead == 'h' ||
          lookahead == 's') ADVANCE(1159);
      if (set_contains(extras_character_set_2, 9, lookahead)) SKIP(4);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(984);
      if (lookahead == '#') ADVANCE(1579);
      if (set_contains(extras_character_set_2, 9, lookahead)) SKIP(4);
      END_STATE();
    case 5:
      ADVANCE_MAP(
        '\n', 985,
        '"', 1196,
        '#', 1579,
        '-', 1439,
        '\\', 848,
        'f', 1434,
        'n', 1437,
        't', 1436,
        '{', 1438,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1433);
      if (set_contains(extras_character_set_2, 9, lookahead)) ADVANCE(1430);
      if (lookahead != 0) ADVANCE(1429);
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(6);
      if (lookahead == '#') ADVANCE(1444);
      if (lookahead == '\\') ADVANCE(851);
      if (lookahead == '`') ADVANCE(1441);
      if (lookahead == '{') ADVANCE(1253);
      if (set_contains(extras_character_set_2, 9, lookahead)) ADVANCE(1443);
      if (lookahead != 0) ADVANCE(1444);
      END_STATE();
    case 7:
      ADVANCE_MAP(
        '\n', 986,
        '#', 1479,
        'b', 1463,
        'g', 1474,
        'h', 1464,
        'j', 1475,
        'r', 1461,
        'x', 1469,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(7);
      if (lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200b) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x2060 ||
          lookahead == 0x3000 ||
          lookahead == 0xfeff) ADVANCE(1458);
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(1480);
      END_STATE();
    case 8:
      if (lookahead == '\n') SKIP(8);
      if (lookahead == '#') ADVANCE(1578);
      if (lookahead == '/') ADVANCE(1580);
      if (lookahead == '\\') ADVANCE(1583);
      if (set_contains(extras_character_set_2, 9, lookahead)) ADVANCE(1581);
      if (lookahead != 0) ADVANCE(1582);
      END_STATE();
    case 9:
      if (lookahead == '\n') SKIP(9);
      if (lookahead == '#') ADVANCE(1579);
      if (set_contains(extras_character_set_2, 9, lookahead)) ADVANCE(1585);
      if (lookahead != 0) ADVANCE(1584);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(987);
      if (lookahead == '#') ADVANCE(1579);
      if (lookahead == '\\') ADVANCE(848);
      if (lookahead == '{') ADVANCE(1438);
      if (set_contains(extras_character_set_2, 9, lookahead)) ADVANCE(1431);
      if (lookahead != 0) ADVANCE(1429);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(988);
      if (lookahead == '#') ADVANCE(1579);
      if (lookahead == '\\') ADVANCE(848);
      if (lookahead == 'f') ADVANCE(1435);
      if (lookahead == '{') ADVANCE(1438);
      if (set_contains(extras_character_set_2, 9, lookahead)) ADVANCE(1432);
      if (lookahead != 0) ADVANCE(1429);
      END_STATE();
    case 12:
      ADVANCE_MAP(
        '!', 96,
        '"', 1196,
        '#', 1579,
        ',', 1495,
        '-', 962,
        '/', 1580,
        '<', 1231,
        '=', 97,
        '>', 1224,
        'E', 874,
        'I', 728,
        'S', 392,
        ']', 1496,
        '`', 1442,
        'b', 221,
        'c', 426,
        'd', 156,
        'e', 539,
        'f', 189,
        'g', 675,
        'h', 356,
        'i', 549,
        'j', 738,
        'l', 158,
        'm', 201,
        'n', 568,
        'r', 334,
        's', 613,
        't', 565,
        'u', 664,
        'v', 399,
        'x', 615,
        '{', 1492,
        '}', 897,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1568);
      if (set_contains(extras_character_set_2, 9, lookahead)) SKIP(12);
      END_STATE();
    case 13:
      ADVANCE_MAP(
        '"', 1196,
        '#', 1579,
        '-', 962,
        '/', 1580,
        '>', 1223,
        '`', 1441,
        'b', 215,
        'c', 374,
        'd', 820,
        'h', 337,
        'i', 612,
        'j', 738,
        'm', 275,
        'r', 157,
        's', 428,
        'u', 663,
        'v', 163,
        'x', 615,
        '{', 887,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1568);
      if (set_contains(extras_character_set_2, 9, lookahead)) SKIP(13);
      END_STATE();
    case 14:
      if (lookahead == '"') ADVANCE(1196);
      if (lookahead == '#') ADVANCE(1250);
      if (lookahead == '\\') ADVANCE(850);
      if (lookahead == '{') ADVANCE(1253);
      if (set_contains(extras_character_set_2, 9, lookahead)) ADVANCE(1251);
      if (lookahead != 0) ADVANCE(1252);
      END_STATE();
    case 15:
      if (lookahead == '"') ADVANCE(1196);
      if (lookahead == '#') ADVANCE(1250);
      if (lookahead == '\\') ADVANCE(823);
      if (lookahead == '{') ADVANCE(1253);
      if (set_contains(extras_character_set_2, 9, lookahead)) ADVANCE(1251);
      if (lookahead != 0) ADVANCE(1252);
      END_STATE();
    case 16:
      if (lookahead == '"') ADVANCE(18);
      if (lookahead == '#') ADVANCE(1579);
      if (lookahead == '\'') ADVANCE(31);
      if (lookahead == ':') ADVANCE(1112);
      if (lookahead == '\\') ADVANCE(822);
      if (lookahead == '{') ADVANCE(888);
      if (set_contains(extras_character_set_2, 9, lookahead)) SKIP(17);
      if (set_contains(sym_key_string_text_character_set_1, 763, lookahead)) ADVANCE(1424);
      END_STATE();
    case 17:
      if (lookahead == '"') ADVANCE(18);
      if (lookahead == '#') ADVANCE(1579);
      if (lookahead == '\'') ADVANCE(31);
      if (lookahead == ':') ADVANCE(1112);
      if (set_contains(extras_character_set_2, 9, lookahead)) SKIP(17);
      END_STATE();
    case 18:
      if (lookahead == '"') ADVANCE(1243);
      if (lookahead != 0) ADVANCE(18);
      END_STATE();
    case 19:
      if (lookahead == '#') ADVANCE(1579);
      if (lookahead == '*') ADVANCE(1089);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1088);
      if (set_contains(extras_character_set_2, 9, lookahead)) SKIP(19);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1516);
      END_STATE();
    case 20:
      if (lookahead == '#') ADVANCE(1579);
      if (lookahead == '-') ADVANCE(83);
      if (lookahead == '/') ADVANCE(101);
      if (lookahead == '0') ADVANCE(1147);
      if (lookahead == '>') ADVANCE(1223);
      if (lookahead == '{') ADVANCE(887);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1148);
      if (set_contains(extras_character_set_2, 9, lookahead)) SKIP(20);
      if (set_contains(sym_xml_name_character_set_1, 724, lookahead)) ADVANCE(1242);
      END_STATE();
    case 21:
      if (lookahead == '#') ADVANCE(1579);
      if (lookahead == '0') ADVANCE(1569);
      if (lookahead == 'n') ADVANCE(1510);
      if (lookahead == '{') ADVANCE(887);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1570);
      if (set_contains(extras_character_set_2, 9, lookahead)) SKIP(21);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1516);
      END_STATE();
    case 22:
      if (lookahead == '#') ADVANCE(1579);
      if (lookahead == ';') ADVANCE(1114);
      if (lookahead == '\\') ADVANCE(852);
      if (lookahead == '{') ADVANCE(888);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(25);
      if (lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200b) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x2060 ||
          lookahead == 0x3000 ||
          lookahead == 0xfeff) ADVANCE(1122);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(1123);
      END_STATE();
    case 23:
      if (lookahead == '#') ADVANCE(1579);
      if (lookahead == ';') ADVANCE(1114);
      if (lookahead == '\\') ADVANCE(854);
      if (lookahead == '{') ADVANCE(887);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(23);
      if (lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200b) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x2060 ||
          lookahead == 0x3000 ||
          lookahead == 0xfeff) ADVANCE(1119);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(1120);
      END_STATE();
    case 24:
      if (lookahead == '#') ADVANCE(1579);
      if (lookahead == ';') ADVANCE(1114);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1572);
      if (set_contains(extras_character_set_2, 9, lookahead)) SKIP(24);
      END_STATE();
    case 25:
      if (lookahead == '#') ADVANCE(1579);
      if (lookahead == ';') ADVANCE(1114);
      if (set_contains(extras_character_set_2, 9, lookahead)) SKIP(25);
      END_STATE();
    case 26:
      if (lookahead == '#') ADVANCE(1579);
      if (lookahead == '\\') ADVANCE(855);
      if (lookahead == '{') ADVANCE(887);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(26);
      if (lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200b) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x2060 ||
          lookahead == 0x3000 ||
          lookahead == 0xfeff) ADVANCE(1119);
      if (lookahead != 0 &&
          lookahead != ';' &&
          lookahead != '}') ADVANCE(1120);
      END_STATE();
    case 27:
      if (lookahead == '#') ADVANCE(1579);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1247);
      if (set_contains(extras_character_set_2, 9, lookahead)) SKIP(27);
      if (lookahead == '+' ||
          ('/' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1248);
      END_STATE();
    case 28:
      if (lookahead == '#') ADVANCE(1426);
      if (lookahead == '<') ADVANCE(1229);
      if (set_contains(extras_character_set_2, 9, lookahead)) ADVANCE(1427);
      if (lookahead != 0) ADVANCE(1428);
      END_STATE();
    case 29:
      if (lookahead == '#') ADVANCE(1481);
      if (lookahead == '`') ADVANCE(1484);
      if (lookahead == '{') ADVANCE(1485);
      if (set_contains(extras_character_set_2, 9, lookahead)) ADVANCE(1482);
      if (lookahead != 0) ADVANCE(1483);
      END_STATE();
    case 30:
      if (lookahead == '#') ADVANCE(1486);
      if (lookahead == '`') ADVANCE(1489);
      if (set_contains(extras_character_set_2, 9, lookahead)) ADVANCE(1487);
      if (lookahead != 0) ADVANCE(1488);
      END_STATE();
    case 31:
      if (lookahead == '\'') ADVANCE(1243);
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    case 32:
      if (lookahead == '*') ADVANCE(1085);
      if (lookahead == '1') ADVANCE(55);
      if (lookahead == '2') ADVANCE(1083);
      if (lookahead == '3') ADVANCE(1084);
      END_STATE();
    case 33:
      if (lookahead == ',') ADVANCE(1249);
      END_STATE();
    case 34:
      if (lookahead == ',') ADVANCE(1113);
      END_STATE();
    case 35:
      if (lookahead == ',') ADVANCE(1246);
      END_STATE();
    case 36:
      if (lookahead == ',') ADVANCE(1246);
      if (lookahead == 'D') ADVANCE(397);
      if (lookahead == 'E') ADVANCE(563);
      if (lookahead == 'U') ADVANCE(665);
      END_STATE();
    case 37:
      if (lookahead == '-') ADVANCE(39);
      END_STATE();
    case 38:
      if (lookahead == '-') ADVANCE(39);
      if (lookahead == '[') ADVANCE(111);
      END_STATE();
    case 39:
      if (lookahead == '-') ADVANCE(42);
      END_STATE();
    case 40:
      if (lookahead == '-') ADVANCE(99);
      if (lookahead != 0) ADVANCE(42);
      END_STATE();
    case 41:
      if (lookahead == '-') ADVANCE(662);
      END_STATE();
    case 42:
      if (lookahead == '-') ADVANCE(40);
      if (lookahead != 0) ADVANCE(42);
      END_STATE();
    case 43:
      if (lookahead == '-') ADVANCE(130);
      END_STATE();
    case 44:
      if (lookahead == '-') ADVANCE(861);
      END_STATE();
    case 45:
      if (lookahead == '-') ADVANCE(721);
      END_STATE();
    case 46:
      if (lookahead == '-') ADVANCE(759);
      END_STATE();
    case 47:
      if (lookahead == '-') ADVANCE(205);
      END_STATE();
    case 48:
      if (lookahead == '-') ADVANCE(685);
      END_STATE();
    case 49:
      if (lookahead == '-') ADVANCE(452);
      END_STATE();
    case 50:
      if (lookahead == '-') ADVANCE(720);
      END_STATE();
    case 51:
      if (lookahead == '-') ADVANCE(252);
      END_STATE();
    case 52:
      if (lookahead == '-') ADVANCE(119);
      END_STATE();
    case 53:
      if (lookahead == '-') ADVANCE(120);
      END_STATE();
    case 54:
      if (lookahead == '.') ADVANCE(56);
      END_STATE();
    case 55:
      if (lookahead == '.') ADVANCE(57);
      END_STATE();
    case 56:
      if (lookahead == '0') ADVANCE(1133);
      if (lookahead == '1') ADVANCE(1126);
      END_STATE();
    case 57:
      if (lookahead == '0') ADVANCE(1081);
      if (lookahead == '1') ADVANCE(1082);
      END_STATE();
    case 58:
      if (lookahead == '0') ADVANCE(58);
      if (lookahead == '1') ADVANCE(60);
      if (lookahead == '}') ADVANCE(1425);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(899);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(905);
      END_STATE();
    case 59:
      if (lookahead == '0') ADVANCE(58);
      if (lookahead == '1') ADVANCE(60);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(899);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(905);
      END_STATE();
    case 60:
      if (lookahead == '0') ADVANCE(905);
      if (lookahead == '}') ADVANCE(1425);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(904);
      END_STATE();
    case 61:
      if (lookahead == '0') ADVANCE(61);
      if (lookahead == '1') ADVANCE(67);
      if (lookahead == '}') ADVANCE(1440);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(907);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(913);
      END_STATE();
    case 62:
      if (lookahead == '0') ADVANCE(61);
      if (lookahead == '1') ADVANCE(67);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(907);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(913);
      END_STATE();
    case 63:
      if (lookahead == '0') ADVANCE(63);
      if (lookahead == '1') ADVANCE(74);
      if (lookahead == '}') ADVANCE(1255);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(915);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(921);
      END_STATE();
    case 64:
      if (lookahead == '0') ADVANCE(63);
      if (lookahead == '1') ADVANCE(74);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(915);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(921);
      END_STATE();
    case 65:
      if (lookahead == '0') ADVANCE(65);
      if (lookahead == '1') ADVANCE(77);
      if (lookahead == '}') ADVANCE(1445);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(923);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(929);
      END_STATE();
    case 66:
      if (lookahead == '0') ADVANCE(65);
      if (lookahead == '1') ADVANCE(77);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(923);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(929);
      END_STATE();
    case 67:
      if (lookahead == '0') ADVANCE(913);
      if (lookahead == '}') ADVANCE(1440);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(912);
      END_STATE();
    case 68:
      if (lookahead == '0') ADVANCE(68);
      if (lookahead == '1') ADVANCE(78);
      if (lookahead == '}') ADVANCE(1491);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(931);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(937);
      END_STATE();
    case 69:
      if (lookahead == '0') ADVANCE(68);
      if (lookahead == '1') ADVANCE(78);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(931);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(937);
      END_STATE();
    case 70:
      if (lookahead == '0') ADVANCE(70);
      if (lookahead == '1') ADVANCE(79);
      if (lookahead == '}') ADVANCE(1124);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(939);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(945);
      END_STATE();
    case 71:
      if (lookahead == '0') ADVANCE(70);
      if (lookahead == '1') ADVANCE(79);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(939);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(945);
      END_STATE();
    case 72:
      if (lookahead == '0') ADVANCE(72);
      if (lookahead == '1') ADVANCE(80);
      if (lookahead == '}') ADVANCE(1490);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(947);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(953);
      END_STATE();
    case 73:
      if (lookahead == '0') ADVANCE(72);
      if (lookahead == '1') ADVANCE(80);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(947);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(953);
      END_STATE();
    case 74:
      if (lookahead == '0') ADVANCE(921);
      if (lookahead == '}') ADVANCE(1255);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(920);
      END_STATE();
    case 75:
      if (lookahead == '0') ADVANCE(75);
      if (lookahead == '1') ADVANCE(81);
      if (lookahead == '}') ADVANCE(1121);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(955);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(961);
      END_STATE();
    case 76:
      if (lookahead == '0') ADVANCE(75);
      if (lookahead == '1') ADVANCE(81);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(955);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(961);
      END_STATE();
    case 77:
      if (lookahead == '0') ADVANCE(929);
      if (lookahead == '}') ADVANCE(1445);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(927);
      END_STATE();
    case 78:
      if (lookahead == '0') ADVANCE(937);
      if (lookahead == '}') ADVANCE(1491);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(935);
      END_STATE();
    case 79:
      if (lookahead == '0') ADVANCE(945);
      if (lookahead == '}') ADVANCE(1124);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(943);
      END_STATE();
    case 80:
      if (lookahead == '0') ADVANCE(953);
      if (lookahead == '}') ADVANCE(1490);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(951);
      END_STATE();
    case 81:
      if (lookahead == '0') ADVANCE(961);
      if (lookahead == '}') ADVANCE(1121);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(959);
      END_STATE();
    case 82:
      if (lookahead == '1') ADVANCE(54);
      if (lookahead == '2') ADVANCE(1134);
      if (lookahead == '3') ADVANCE(1135);
      END_STATE();
    case 83:
      if (lookahead == '1') ADVANCE(1147);
      END_STATE();
    case 84:
      if (lookahead == '2') ADVANCE(91);
      END_STATE();
    case 85:
      if (lookahead == '4') ADVANCE(1137);
      if (lookahead == '6') ADVANCE(1138);
      END_STATE();
    case 86:
      if (lookahead == '4') ADVANCE(1215);
      if (lookahead == '6') ADVANCE(1216);
      END_STATE();
    case 87:
      if (lookahead == '4') ADVANCE(1165);
      END_STATE();
    case 88:
      if (lookahead == '4') ADVANCE(36);
      END_STATE();
    case 89:
      if (lookahead == '4') ADVANCE(35);
      END_STATE();
    case 90:
      if (lookahead == '5') ADVANCE(1190);
      END_STATE();
    case 91:
      if (lookahead == '5') ADVANCE(92);
      END_STATE();
    case 92:
      if (lookahead == '6') ADVANCE(1189);
      END_STATE();
    case 93:
      if (lookahead == '6') ADVANCE(89);
      END_STATE();
    case 94:
      if (lookahead == '6') ADVANCE(88);
      END_STATE();
    case 95:
      if (lookahead == '8') ADVANCE(115);
      END_STATE();
    case 96:
      if (lookahead == '=') ADVANCE(1221);
      END_STATE();
    case 97:
      if (lookahead == '=') ADVANCE(1219);
      END_STATE();
    case 98:
      if (lookahead == '>') ADVANCE(1239);
      if (lookahead != 0) ADVANCE(102);
      END_STATE();
    case 99:
      if (lookahead == '>') ADVANCE(1240);
      END_STATE();
    case 100:
      if (lookahead == '>') ADVANCE(1241);
      if (lookahead != 0) ADVANCE(151);
      END_STATE();
    case 101:
      if (lookahead == '>') ADVANCE(1244);
      END_STATE();
    case 102:
      if (lookahead == '?') ADVANCE(98);
      if (lookahead != 0) ADVANCE(102);
      END_STATE();
    case 103:
      if (lookahead == 'A') ADVANCE(711);
      if (lookahead == 'B') ADVANCE(167);
      if (lookahead == 'C') ADVANCE(203);
      if (lookahead == 'F') ADVANCE(589);
      if (lookahead == 'M') ADVANCE(827);
      if (lookahead == 'O') ADVANCE(616);
      if (lookahead == 'Q') ADVANCE(840);
      END_STATE();
    case 104:
      if (lookahead == 'A') ADVANCE(711);
      if (lookahead == 'C') ADVANCE(202);
      END_STATE();
    case 105:
      if (lookahead == 'A') ADVANCE(141);
      END_STATE();
    case 106:
      if (lookahead == 'A') ADVANCE(136);
      END_STATE();
    case 107:
      if (lookahead == 'A') ADVANCE(408);
      if (lookahead == 'B') ADVANCE(345);
      END_STATE();
    case 108:
      if (lookahead == 'A') ADVANCE(838);
      END_STATE();
    case 109:
      if (lookahead == 'B') ADVANCE(167);
      if (lookahead == 'C') ADVANCE(571);
      if (lookahead == 'F') ADVANCE(589);
      if (lookahead == 'M') ADVANCE(827);
      if (lookahead == 'O') ADVANCE(616);
      if (lookahead == 'Q') ADVANCE(840);
      END_STATE();
    case 110:
      ADVANCE_MAP(
        'B', 591,
        'C', 588,
        'D', 210,
        'E', 526,
        'F', 496,
        'I', 558,
        'L', 467,
        'N', 830,
        'O', 232,
        'S', 806,
        'U', 831,
      );
      END_STATE();
    case 111:
      if (lookahead == 'C') ADVANCE(112);
      END_STATE();
    case 112:
      if (lookahead == 'D') ADVANCE(106);
      END_STATE();
    case 113:
      if (lookahead == 'D') ADVANCE(352);
      if (lookahead == 'E') ADVANCE(560);
      if (lookahead == 'Q') ADVANCE(845);
      END_STATE();
    case 114:
      if (lookahead == 'D') ADVANCE(198);
      END_STATE();
    case 115:
      if (lookahead == 'D') ADVANCE(395);
      if (lookahead == 'E') ADVANCE(562);
      END_STATE();
    case 116:
      if (lookahead == 'D') ADVANCE(216);
      if (lookahead == 'F') ADVANCE(511);
      if (lookahead == 'H') ADVANCE(344);
      if (lookahead == 'I') ADVANCE(550);
      if (lookahead == 'S') ADVANCE(808);
      END_STATE();
    case 117:
      if (lookahead == 'D') ADVANCE(219);
      if (lookahead == 'U') ADVANCE(835);
      END_STATE();
    case 118:
      if (lookahead == 'D') ADVANCE(223);
      END_STATE();
    case 119:
      if (lookahead == 'D') ADVANCE(227);
      END_STATE();
    case 120:
      if (lookahead == 'D') ADVANCE(228);
      END_STATE();
    case 121:
      if (lookahead == 'D') ADVANCE(396);
      END_STATE();
    case 122:
      if (lookahead == 'D') ADVANCE(398);
      if (lookahead == 'E') ADVANCE(564);
      END_STATE();
    case 123:
      if (lookahead == 'E') ADVANCE(733);
      if (lookahead == 'U') ADVANCE(559);
      END_STATE();
    case 124:
      if (lookahead == 'E') ADVANCE(630);
      END_STATE();
    case 125:
      if (lookahead == 'E') ADVANCE(631);
      END_STATE();
    case 126:
      if (lookahead == 'F') ADVANCE(593);
      if (lookahead == ']') ADVANCE(1100);
      END_STATE();
    case 127:
      if (lookahead == 'F') ADVANCE(609);
      END_STATE();
    case 128:
      if (lookahead == 'N') ADVANCE(572);
      END_STATE();
    case 129:
      if (lookahead == 'N') ADVANCE(573);
      END_STATE();
    case 130:
      if (lookahead == 'N') ADVANCE(849);
      END_STATE();
    case 131:
      if (lookahead == 'P') ADVANCE(211);
      if (lookahead == ']') ADVANCE(1096);
      END_STATE();
    case 132:
      if (lookahead == 'P') ADVANCE(213);
      END_STATE();
    case 133:
      if (lookahead == 'P') ADVANCE(217);
      END_STATE();
    case 134:
      if (lookahead == 'S') ADVANCE(172);
      END_STATE();
    case 135:
      if (lookahead == 'S') ADVANCE(809);
      if (lookahead == ']') ADVANCE(1092);
      END_STATE();
    case 136:
      if (lookahead == 'T') ADVANCE(105);
      END_STATE();
    case 137:
      if (lookahead == 'T') ADVANCE(431);
      END_STATE();
    case 138:
      if (lookahead == 'T') ADVANCE(433);
      END_STATE();
    case 139:
      if (lookahead == 'W') ADVANCE(453);
      END_STATE();
    case 140:
      if (lookahead == 'W') ADVANCE(454);
      END_STATE();
    case 141:
      if (lookahead == '[') ADVANCE(151);
      END_STATE();
    case 142:
      if (lookahead == ']') ADVANCE(1108);
      END_STATE();
    case 143:
      if (lookahead == ']') ADVANCE(1104);
      END_STATE();
    case 144:
      if (lookahead == ']') ADVANCE(1110);
      END_STATE();
    case 145:
      if (lookahead == ']') ADVANCE(1106);
      END_STATE();
    case 146:
      if (lookahead == ']') ADVANCE(1090);
      END_STATE();
    case 147:
      if (lookahead == ']') ADVANCE(1098);
      END_STATE();
    case 148:
      if (lookahead == ']') ADVANCE(1102);
      END_STATE();
    case 149:
      if (lookahead == ']') ADVANCE(1094);
      END_STATE();
    case 150:
      if (lookahead == ']') ADVANCE(100);
      if (lookahead != 0) ADVANCE(151);
      END_STATE();
    case 151:
      if (lookahead == ']') ADVANCE(150);
      if (lookahead != 0) ADVANCE(151);
      END_STATE();
    case 152:
      if (lookahead == '`') ADVANCE(1446);
      END_STATE();
    case 153:
      if (lookahead == 'a') ADVANCE(84);
      END_STATE();
    case 154:
      if (lookahead == 'a') ADVANCE(660);
      END_STATE();
    case 155:
      if (lookahead == 'a') ADVANCE(802);
      if (lookahead == 'e') ADVANCE(265);
      if (lookahead == 'i') ADVANCE(412);
      END_STATE();
    case 156:
      if (lookahead == 'a') ADVANCE(802);
      if (lookahead == 'e') ADVANCE(237);
      END_STATE();
    case 157:
      if (lookahead == 'a') ADVANCE(866);
      if (lookahead == 'e') ADVANCE(284);
      END_STATE();
    case 158:
      if (lookahead == 'a') ADVANCE(717);
      if (lookahead == 'e') ADVANCE(715);
      if (lookahead == 'o') ADVANCE(274);
      END_STATE();
    case 159:
      if (lookahead == 'a') ADVANCE(717);
      if (lookahead == 'i') ADVANCE(518);
      if (lookahead == 'o') ADVANCE(273);
      END_STATE();
    case 160:
      if (lookahead == 'a') ADVANCE(614);
      if (lookahead == 'e') ADVANCE(204);
      END_STATE();
    case 161:
      if (lookahead == 'a') ADVANCE(297);
      if (lookahead == 'x') ADVANCE(1450);
      END_STATE();
    case 162:
      if (lookahead == 'a') ADVANCE(297);
      if (lookahead == 'x') ADVANCE(33);
      END_STATE();
    case 163:
      if (lookahead == 'a') ADVANCE(649);
      if (lookahead == 'e') ADVANCE(680);
      END_STATE();
    case 164:
      if (lookahead == 'a') ADVANCE(649);
      if (lookahead == 'e') ADVANCE(638);
      END_STATE();
    case 165:
      if (lookahead == 'a') ADVANCE(239);
      END_STATE();
    case 166:
      if (lookahead == 'a') ADVANCE(744);
      if (lookahead == 'i') ADVANCE(543);
      if (lookahead == 'r') ADVANCE(567);
      END_STATE();
    case 167:
      if (lookahead == 'a') ADVANCE(716);
      END_STATE();
    case 168:
      if (lookahead == 'a') ADVANCE(652);
      END_STATE();
    case 169:
      if (lookahead == 'a') ADVANCE(253);
      END_STATE();
    case 170:
      if (lookahead == 'a') ADVANCE(253);
      if (lookahead == 'i') ADVANCE(684);
      END_STATE();
    case 171:
      if (lookahead == 'a') ADVANCE(873);
      END_STATE();
    case 172:
      if (lookahead == 'a') ADVANCE(406);
      END_STATE();
    case 173:
      if (lookahead == 'a') ADVANCE(254);
      END_STATE();
    case 174:
      if (lookahead == 'a') ADVANCE(872);
      END_STATE();
    case 175:
      if (lookahead == 'a') ADVANCE(148);
      END_STATE();
    case 176:
      if (lookahead == 'a') ADVANCE(622);
      END_STATE();
    case 177:
      if (lookahead == 'a') ADVANCE(772);
      END_STATE();
    case 178:
      if (lookahead == 'a') ADVANCE(522);
      END_STATE();
    case 179:
      if (lookahead == 'a') ADVANCE(514);
      END_STATE();
    case 180:
      if (lookahead == 'a') ADVANCE(498);
      END_STATE();
    case 181:
      if (lookahead == 'a') ADVANCE(459);
      END_STATE();
    case 182:
      if (lookahead == 'a') ADVANCE(885);
      END_STATE();
    case 183:
      if (lookahead == 'a') ADVANCE(270);
      if (lookahead == 'e') ADVANCE(671);
      if (lookahead == 'h') ADVANCE(168);
      if (lookahead == 'o') ADVANCE(516);
      END_STATE();
    case 184:
      if (lookahead == 'a') ADVANCE(533);
      END_STATE();
    case 185:
      if (lookahead == 'a') ADVANCE(503);
      END_STATE();
    case 186:
      if (lookahead == 'a') ADVANCE(486);
      END_STATE();
    case 187:
      if (lookahead == 'a') ADVANCE(535);
      END_STATE();
    case 188:
      if (lookahead == 'a') ADVANCE(487);
      END_STATE();
    case 189:
      if (lookahead == 'a') ADVANCE(510);
      if (lookahead == 'i') ADVANCE(493);
      if (lookahead == 'o') ADVANCE(642);
      END_STATE();
    case 190:
      if (lookahead == 'a') ADVANCE(510);
      if (lookahead == 'i') ADVANCE(492);
      END_STATE();
    case 191:
      if (lookahead == 'a') ADVANCE(536);
      END_STATE();
    case 192:
      if (lookahead == 'a') ADVANCE(751);
      END_STATE();
    case 193:
      if (lookahead == 'a') ADVANCE(500);
      END_STATE();
    case 194:
      if (lookahead == 'a') ADVANCE(755);
      END_STATE();
    case 195:
      if (lookahead == 'a') ADVANCE(756);
      END_STATE();
    case 196:
      if (lookahead == 'a') ADVANCE(778);
      END_STATE();
    case 197:
      if (lookahead == 'a') ADVANCE(757);
      END_STATE();
    case 198:
      if (lookahead == 'a') ADVANCE(790);
      END_STATE();
    case 199:
      if (lookahead == 'a') ADVANCE(782);
      END_STATE();
    case 200:
      if (lookahead == 'a') ADVANCE(766);
      END_STATE();
    case 201:
      if (lookahead == 'a') ADVANCE(768);
      END_STATE();
    case 202:
      if (lookahead == 'a') ADVANCE(618);
      END_STATE();
    case 203:
      if (lookahead == 'a') ADVANCE(618);
      if (lookahead == 'o') ADVANCE(608);
      END_STATE();
    case 204:
      if (lookahead == 'a') ADVANCE(810);
      END_STATE();
    case 205:
      if (lookahead == 'a') ADVANCE(718);
      END_STATE();
    case 206:
      if (lookahead == 'a') ADVANCE(623);
      END_STATE();
    case 207:
      if (lookahead == 'a') ADVANCE(523);
      END_STATE();
    case 208:
      if (lookahead == 'a') ADVANCE(670);
      END_STATE();
    case 209:
      if (lookahead == 'a') ADVANCE(505);
      END_STATE();
    case 210:
      if (lookahead == 'a') ADVANCE(788);
      END_STATE();
    case 211:
      if (lookahead == 'a') ADVANCE(656);
      END_STATE();
    case 212:
      if (lookahead == 'a') ADVANCE(506);
      END_STATE();
    case 213:
      if (lookahead == 'a') ADVANCE(658);
      END_STATE();
    case 214:
      if (lookahead == 'a') ADVANCE(730);
      END_STATE();
    case 215:
      if (lookahead == 'a') ADVANCE(730);
      if (lookahead == 'o') ADVANCE(281);
      if (lookahead == 'y') ADVANCE(770);
      END_STATE();
    case 216:
      if (lookahead == 'a') ADVANCE(792);
      END_STATE();
    case 217:
      if (lookahead == 'a') ADVANCE(679);
      END_STATE();
    case 218:
      if (lookahead == 'a') ADVANCE(673);
      END_STATE();
    case 219:
      if (lookahead == 'a') ADVANCE(795);
      END_STATE();
    case 220:
      if (lookahead == 'a') ADVANCE(735);
      END_STATE();
    case 221:
      if (lookahead == 'a') ADVANCE(735);
      if (lookahead == 'r') ADVANCE(435);
      END_STATE();
    case 222:
      if (lookahead == 'a') ADVANCE(659);
      END_STATE();
    case 223:
      if (lookahead == 'a') ADVANCE(797);
      END_STATE();
    case 224:
      if (lookahead == 'a') ADVANCE(798);
      END_STATE();
    case 225:
      if (lookahead == 'a') ADVANCE(799);
      END_STATE();
    case 226:
      if (lookahead == 'a') ADVANCE(801);
      END_STATE();
    case 227:
      if (lookahead == 'a') ADVANCE(803);
      END_STATE();
    case 228:
      if (lookahead == 'a') ADVANCE(804);
      END_STATE();
    case 229:
      if (lookahead == 'a') ADVANCE(815);
      END_STATE();
    case 230:
      if (lookahead == 'a') ADVANCE(816);
      END_STATE();
    case 231:
      if (lookahead == 'a') ADVANCE(819);
      END_STATE();
    case 232:
      if (lookahead == 'b') ADVANCE(474);
      END_STATE();
    case 233:
      if (lookahead == 'b') ADVANCE(886);
      END_STATE();
    case 234:
      if (lookahead == 'b') ADVANCE(583);
      if (lookahead == 's') ADVANCE(461);
      if (lookahead == 'y') ADVANCE(44);
      END_STATE();
    case 235:
      if (lookahead == 'b') ADVANCE(583);
      if (lookahead == 'y') ADVANCE(44);
      END_STATE();
    case 236:
      if (lookahead == 'b') ADVANCE(595);
      END_STATE();
    case 237:
      if (lookahead == 'b') ADVANCE(829);
      if (lookahead == 'c') ADVANCE(601);
      END_STATE();
    case 238:
      if (lookahead == 'b') ADVANCE(477);
      END_STATE();
    case 239:
      if (lookahead == 'b') ADVANCE(504);
      END_STATE();
    case 240:
      if (lookahead == 'b') ADVANCE(366);
      END_STATE();
    case 241:
      if (lookahead == 'b') ADVANCE(378);
      END_STATE();
    case 242:
      if (lookahead == 'b') ADVANCE(603);
      END_STATE();
    case 243:
      if (lookahead == 'b') ADVANCE(475);
      END_STATE();
    case 244:
      if (lookahead == 'c') ADVANCE(1139);
      END_STATE();
    case 245:
      if (lookahead == 'c') ADVANCE(479);
      END_STATE();
    case 246:
      if (lookahead == 'c') ADVANCE(108);
      END_STATE();
    case 247:
      if (lookahead == 'c') ADVANCE(432);
      END_STATE();
    case 248:
      if (lookahead == 'c') ADVANCE(494);
      END_STATE();
    case 249:
      if (lookahead == 'c') ADVANCE(494);
      if (lookahead == 's') ADVANCE(342);
      END_STATE();
    case 250:
      if (lookahead == 'c') ADVANCE(176);
      END_STATE();
    case 251:
      if (lookahead == 'c') ADVANCE(575);
      END_STATE();
    case 252:
      if (lookahead == 'c') ADVANCE(580);
      END_STATE();
    case 253:
      if (lookahead == 'c') ADVANCE(754);
      END_STATE();
    case 254:
      if (lookahead == 'c') ADVANCE(306);
      END_STATE();
    case 255:
      if (lookahead == 'c') ADVANCE(777);
      END_STATE();
    case 256:
      if (lookahead == 'c') ADVANCE(758);
      END_STATE();
    case 257:
      if (lookahead == 'c') ADVANCE(796);
      END_STATE();
    case 258:
      if (lookahead == 'c') ADVANCE(767);
      END_STATE();
    case 259:
      if (lookahead == 'c') ADVANCE(843);
      END_STATE();
    case 260:
      if (lookahead == 'c') ADVANCE(206);
      END_STATE();
    case 261:
      if (lookahead == 'c') ADVANCE(592);
      END_STATE();
    case 262:
      if (lookahead == 'c') ADVANCE(596);
      END_STATE();
    case 263:
      if (lookahead == 'c') ADVANCE(597);
      END_STATE();
    case 264:
      if (lookahead == 'c') ADVANCE(600);
      END_STATE();
    case 265:
      if (lookahead == 'c') ADVANCE(601);
      if (lookahead == 'l') ADVANCE(182);
      END_STATE();
    case 266:
      if (lookahead == 'c') ADVANCE(604);
      END_STATE();
    case 267:
      if (lookahead == 'c') ADVANCE(605);
      END_STATE();
    case 268:
      if (lookahead == 'c') ADVANCE(606);
      END_STATE();
    case 269:
      if (lookahead == 'c') ADVANCE(607);
      END_STATE();
    case 270:
      if (lookahead == 'c') ADVANCE(391);
      END_STATE();
    case 271:
      if (lookahead == 'c') ADVANCE(226);
      END_STATE();
    case 272:
      if (lookahead == 'c') ADVANCE(817);
      END_STATE();
    case 273:
      if (lookahead == 'c') ADVANCE(230);
      END_STATE();
    case 274:
      if (lookahead == 'c') ADVANCE(231);
      END_STATE();
    case 275:
      if (lookahead == 'd') ADVANCE(90);
      END_STATE();
    case 276:
      if (lookahead == 'd') ADVANCE(170);
      if (lookahead == 'g') ADVANCE(343);
      if (lookahead == 'p') ADVANCE(389);
      if (lookahead == 's') ADVANCE(578);
      if (lookahead == 't') ADVANCE(645);
      END_STATE();
    case 277:
      if (lookahead == 'd') ADVANCE(1217);
      END_STATE();
    case 278:
      if (lookahead == 'd') ADVANCE(1505);
      END_STATE();
    case 279:
      if (lookahead == 'd') ADVANCE(1129);
      END_STATE();
    case 280:
      if (lookahead == 'd') ADVANCE(1132);
      END_STATE();
    case 281:
      if (lookahead == 'd') ADVANCE(877);
      END_STATE();
    case 282:
      if (lookahead == 'd') ADVANCE(689);
      END_STATE();
    case 283:
      if (lookahead == 'd') ADVANCE(457);
      END_STATE();
    case 284:
      if (lookahead == 'd') ADVANCE(460);
      if (lookahead == 'g') ADVANCE(343);
      END_STATE();
    case 285:
      if (lookahead == 'd') ADVANCE(169);
      if (lookahead == 'g') ADVANCE(343);
      if (lookahead == 'p') ADVANCE(389);
      if (lookahead == 's') ADVANCE(578);
      if (lookahead == 't') ADVANCE(645);
      END_STATE();
    case 286:
      if (lookahead == 'd') ADVANCE(315);
      END_STATE();
    case 287:
      if (lookahead == 'd') ADVANCE(316);
      END_STATE();
    case 288:
      if (lookahead == 'd') ADVANCE(320);
      END_STATE();
    case 289:
      if (lookahead == 'd') ADVANCE(321);
      END_STATE();
    case 290:
      if (lookahead == 'd') ADVANCE(324);
      END_STATE();
    case 291:
      if (lookahead == 'd') ADVANCE(329);
      END_STATE();
    case 292:
      if (lookahead == 'd') ADVANCE(330);
      END_STATE();
    case 293:
      if (lookahead == 'd') ADVANCE(331);
      END_STATE();
    case 294:
      if (lookahead == 'd') ADVANCE(332);
      END_STATE();
    case 295:
      if (lookahead == 'd') ADVANCE(333);
      END_STATE();
    case 296:
      if (lookahead == 'd') ADVANCE(620);
      END_STATE();
    case 297:
      if (lookahead == 'd') ADVANCE(361);
      END_STATE();
    case 298:
      if (lookahead == 'd') ADVANCE(370);
      END_STATE();
    case 299:
      if (lookahead == 'e') ADVANCE(876);
      END_STATE();
    case 300:
      if (lookahead == 'e') ADVANCE(34);
      END_STATE();
    case 301:
      if (lookahead == 'e') ADVANCE(1498);
      END_STATE();
    case 302:
      if (lookahead == 'e') ADVANCE(1191);
      END_STATE();
    case 303:
      if (lookahead == 'e') ADVANCE(1203);
      END_STATE();
    case 304:
      if (lookahead == 'e') ADVANCE(1541);
      END_STATE();
    case 305:
      if (lookahead == 'e') ADVANCE(1503);
      END_STATE();
    case 306:
      if (lookahead == 'e') ADVANCE(1543);
      END_STATE();
    case 307:
      if (lookahead == 'e') ADVANCE(1164);
      END_STATE();
    case 308:
      if (lookahead == 'e') ADVANCE(1143);
      END_STATE();
    case 309:
      if (lookahead == 'e') ADVANCE(1143);
      if (lookahead == 'i') ADVANCE(783);
      END_STATE();
    case 310:
      if (lookahead == 'e') ADVANCE(1136);
      END_STATE();
    case 311:
      if (lookahead == 'e') ADVANCE(1158);
      END_STATE();
    case 312:
      if (lookahead == 'e') ADVANCE(1174);
      END_STATE();
    case 313:
      if (lookahead == 'e') ADVANCE(1213);
      END_STATE();
    case 314:
      if (lookahead == 'e') ADVANCE(1127);
      END_STATE();
    case 315:
      if (lookahead == 'e') ADVANCE(1530);
      END_STATE();
    case 316:
      if (lookahead == 'e') ADVANCE(1529);
      END_STATE();
    case 317:
      if (lookahead == 'e') ADVANCE(1532);
      END_STATE();
    case 318:
      if (lookahead == 'e') ADVANCE(1146);
      END_STATE();
    case 319:
      if (lookahead == 'e') ADVANCE(1168);
      END_STATE();
    case 320:
      if (lookahead == 'e') ADVANCE(1526);
      END_STATE();
    case 321:
      if (lookahead == 'e') ADVANCE(1527);
      END_STATE();
    case 322:
      if (lookahead == 'e') ADVANCE(1533);
      END_STATE();
    case 323:
      if (lookahead == 'e') ADVANCE(1144);
      END_STATE();
    case 324:
      if (lookahead == 'e') ADVANCE(1536);
      END_STATE();
    case 325:
      if (lookahead == 'e') ADVANCE(1500);
      END_STATE();
    case 326:
      if (lookahead == 'e') ADVANCE(1195);
      END_STATE();
    case 327:
      if (lookahead == 'e') ADVANCE(414);
      if (lookahead == 't') ADVANCE(421);
      if (lookahead == 'u') ADVANCE(497);
      END_STATE();
    case 328:
      if (lookahead == 'e') ADVANCE(127);
      END_STATE();
    case 329:
      if (lookahead == 'e') ADVANCE(1539);
      END_STATE();
    case 330:
      if (lookahead == 'e') ADVANCE(1517);
      END_STATE();
    case 331:
      if (lookahead == 'e') ADVANCE(1518);
      END_STATE();
    case 332:
      if (lookahead == 'e') ADVANCE(1519);
      END_STATE();
    case 333:
      if (lookahead == 'e') ADVANCE(1520);
      END_STATE();
    case 334:
      if (lookahead == 'e') ADVANCE(416);
      END_STATE();
    case 335:
      if (lookahead == 'e') ADVANCE(1199);
      END_STATE();
    case 336:
      if (lookahead == 'e') ADVANCE(1200);
      END_STATE();
    case 337:
      if (lookahead == 'e') ADVANCE(162);
      END_STATE();
    case 338:
      if (lookahead == 'e') ADVANCE(162);
      if (lookahead == 't') ADVANCE(520);
      END_STATE();
    case 339:
      if (lookahead == 'e') ADVANCE(285);
      END_STATE();
    case 340:
      if (lookahead == 'e') ADVANCE(403);
      END_STATE();
    case 341:
      if (lookahead == 'e') ADVANCE(93);
      END_STATE();
    case 342:
      if (lookahead == 'e') ADVANCE(259);
      END_STATE();
    case 343:
      if (lookahead == 'e') ADVANCE(867);
      END_STATE();
    case 344:
      if (lookahead == 'e') ADVANCE(868);
      END_STATE();
    case 345:
      if (lookahead == 'e') ADVANCE(407);
      END_STATE();
    case 346:
      if (lookahead == 'e') ADVANCE(296);
      END_STATE();
    case 347:
      if (lookahead == 'e') ADVANCE(869);
      END_STATE();
    case 348:
      if (lookahead == 'e') ADVANCE(204);
      END_STATE();
    case 349:
      if (lookahead == 'e') ADVANCE(283);
      END_STATE();
    case 350:
      if (lookahead == 'e') ADVANCE(691);
      END_STATE();
    case 351:
      if (lookahead == 'e') ADVANCE(633);
      END_STATE();
    case 352:
      if (lookahead == 'e') ADVANCE(251);
      END_STATE();
    case 353:
      if (lookahead == 'e') ADVANCE(650);
      END_STATE();
    case 354:
      if (lookahead == 'e') ADVANCE(272);
      END_STATE();
    case 355:
      if (lookahead == 'e') ADVANCE(870);
      END_STATE();
    case 356:
      if (lookahead == 'e') ADVANCE(870);
      if (lookahead == 't') ADVANCE(519);
      END_STATE();
    case 357:
      if (lookahead == 'e') ADVANCE(279);
      END_STATE();
    case 358:
      if (lookahead == 'e') ADVANCE(884);
      END_STATE();
    case 359:
      if (lookahead == 'e') ADVANCE(280);
      END_STATE();
    case 360:
      if (lookahead == 'e') ADVANCE(667);
      END_STATE();
    case 361:
      if (lookahead == 'e') ADVANCE(634);
      END_STATE();
    case 362:
      if (lookahead == 'e') ADVANCE(686);
      END_STATE();
    case 363:
      if (lookahead == 'e') ADVANCE(651);
      END_STATE();
    case 364:
      if (lookahead == 'e') ADVANCE(696);
      END_STATE();
    case 365:
      if (lookahead == 'e') ADVANCE(594);
      END_STATE();
    case 366:
      if (lookahead == 'e') ADVANCE(635);
      END_STATE();
    case 367:
      if (lookahead == 'e') ADVANCE(647);
      END_STATE();
    case 368:
      if (lookahead == 'e') ADVANCE(709);
      END_STATE();
    case 369:
      if (lookahead == 'e') ADVANCE(636);
      END_STATE();
    case 370:
      if (lookahead == 'e') ADVANCE(699);
      END_STATE();
    case 371:
      if (lookahead == 'e') ADVANCE(648);
      END_STATE();
    case 372:
      if (lookahead == 'e') ADVANCE(700);
      END_STATE();
    case 373:
      if (lookahead == 'e') ADVANCE(712);
      END_STATE();
    case 374:
      if (lookahead == 'e') ADVANCE(681);
      if (lookahead == 'o') ADVANCE(566);
      END_STATE();
    case 375:
      if (lookahead == 'e') ADVANCE(771);
      END_STATE();
    case 376:
      if (lookahead == 'e') ADVANCE(639);
      END_STATE();
    case 377:
      if (lookahead == 'e') ADVANCE(640);
      END_STATE();
    case 378:
      if (lookahead == 'e') ADVANCE(641);
      END_STATE();
    case 379:
      if (lookahead == 'e') ADVANCE(761);
      END_STATE();
    case 380:
      if (lookahead == 'e') ADVANCE(418);
      END_STATE();
    case 381:
      if (lookahead == 'e') ADVANCE(129);
      END_STATE();
    case 382:
      if (lookahead == 'e') ADVANCE(94);
      END_STATE();
    case 383:
      if (lookahead == 'e') ADVANCE(255);
      END_STATE();
    case 384:
      if (lookahead == 'e') ADVANCE(187);
      END_STATE();
    case 385:
      if (lookahead == 'e') ADVANCE(734);
      END_STATE();
    case 386:
      if (lookahead == 'e') ADVANCE(417);
      END_STATE();
    case 387:
      if (lookahead == 'e') ADVANCE(256);
      END_STATE();
    case 388:
      if (lookahead == 'e') ADVANCE(725);
      END_STATE();
    case 389:
      if (lookahead == 'e') ADVANCE(194);
      if (lookahead == 'l') ADVANCE(173);
      END_STATE();
    case 390:
      if (lookahead == 'e') ADVANCE(257);
      END_STATE();
    case 391:
      if (lookahead == 'e') ADVANCE(672);
      END_STATE();
    case 392:
      if (lookahead == 'e') ADVANCE(666);
      if (lookahead == 't') ADVANCE(218);
      if (lookahead == 'u') ADVANCE(243);
      END_STATE();
    case 393:
      if (lookahead == 'e') ADVANCE(258);
      END_STATE();
    case 394:
      if (lookahead == 'e') ADVANCE(736);
      END_STATE();
    case 395:
      if (lookahead == 'e') ADVANCE(262);
      END_STATE();
    case 396:
      if (lookahead == 'e') ADVANCE(264);
      END_STATE();
    case 397:
      if (lookahead == 'e') ADVANCE(266);
      END_STATE();
    case 398:
      if (lookahead == 'e') ADVANCE(268);
      END_STATE();
    case 399:
      if (lookahead == 'e') ADVANCE(687);
      END_STATE();
    case 400:
      if (lookahead == 'e') ADVANCE(122);
      END_STATE();
    case 401:
      if (lookahead == 'e') ADVANCE(53);
      END_STATE();
    case 402:
      if (lookahead == 'f') ADVANCE(95);
      END_STATE();
    case 403:
      if (lookahead == 'f') ADVANCE(1153);
      END_STATE();
    case 404:
      if (lookahead == 'f') ADVANCE(465);
      if (lookahead == 'o') ADVANCE(627);
      END_STATE();
    case 405:
      if (lookahead == 'f') ADVANCE(463);
      END_STATE();
    case 406:
      if (lookahead == 'f') ADVANCE(400);
      END_STATE();
    case 407:
      if (lookahead == 'f') ADVANCE(598);
      END_STATE();
    case 408:
      if (lookahead == 'f') ADVANCE(813);
      END_STATE();
    case 409:
      if (lookahead == 'g') ADVANCE(1210);
      END_STATE();
    case 410:
      if (lookahead == 'g') ADVANCE(1525);
      END_STATE();
    case 411:
      if (lookahead == 'g') ADVANCE(1154);
      END_STATE();
    case 412:
      if (lookahead == 'g') ADVANCE(388);
      END_STATE();
    case 413:
      if (lookahead == 'g') ADVANCE(857);
      END_STATE();
    case 414:
      if (lookahead == 'g') ADVANCE(590);
      if (lookahead == 't') ADVANCE(644);
      END_STATE();
    case 415:
      if (lookahead == 'g') ADVANCE(590);
      if (lookahead == 't') ADVANCE(644);
      if (lookahead == 'w') ADVANCE(117);
      END_STATE();
    case 416:
      if (lookahead == 'g') ADVANCE(343);
      if (lookahead == 'p') ADVANCE(495);
      END_STATE();
    case 417:
      if (lookahead == 'g') ADVANCE(347);
      END_STATE();
    case 418:
      if (lookahead == 'g') ADVANCE(369);
      END_STATE();
    case 419:
      if (lookahead == 'g') ADVANCE(133);
      END_STATE();
    case 420:
      if (lookahead == 'h') ADVANCE(1542);
      END_STATE();
    case 421:
      if (lookahead == 'h') ADVANCE(1542);
      if (lookahead == 'l') ADVANCE(512);
      END_STATE();
    case 422:
      if (lookahead == 'h') ADVANCE(1192);
      END_STATE();
    case 423:
      if (lookahead == 'h') ADVANCE(1235);
      END_STATE();
    case 424:
      if (lookahead == 'h') ADVANCE(1193);
      END_STATE();
    case 425:
      if (lookahead == 'h') ADVANCE(1234);
      END_STATE();
    case 426:
      if (lookahead == 'h') ADVANCE(168);
      if (lookahead == 'o') ADVANCE(555);
      END_STATE();
    case 427:
      if (lookahead == 'h') ADVANCE(628);
      END_STATE();
    case 428:
      if (lookahead == 'h') ADVANCE(153);
      if (lookahead == 't') ADVANCE(199);
      END_STATE();
    case 429:
      if (lookahead == 'h') ADVANCE(47);
      END_STATE();
    case 430:
      if (lookahead == 'h') ADVANCE(146);
      END_STATE();
    case 431:
      if (lookahead == 'h') ADVANCE(184);
      END_STATE();
    case 432:
      if (lookahead == 'h') ADVANCE(364);
      END_STATE();
    case 433:
      if (lookahead == 'h') ADVANCE(191);
      END_STATE();
    case 434:
      if (lookahead == 'i') ADVANCE(413);
      END_STATE();
    case 435:
      if (lookahead == 'i') ADVANCE(340);
      END_STATE();
    case 436:
      if (lookahead == 'i') ADVANCE(875);
      END_STATE();
    case 437:
      if (lookahead == 'i') ADVANCE(405);
      END_STATE();
    case 438:
      if (lookahead == 'i') ADVANCE(277);
      END_STATE();
    case 439:
      if (lookahead == 'i') ADVANCE(611);
      END_STATE();
    case 440:
      if (lookahead == 'i') ADVANCE(246);
      END_STATE();
    case 441:
      if (lookahead == 'i') ADVANCE(624);
      END_STATE();
    case 442:
      if (lookahead == 'i') ADVANCE(521);
      END_STATE();
    case 443:
      if (lookahead == 'i') ADVANCE(278);
      END_STATE();
    case 444:
      if (lookahead == 'i') ADVANCE(540);
      END_STATE();
    case 445:
      if (lookahead == 'i') ADVANCE(542);
      END_STATE();
    case 446:
      if (lookahead == 'i') ADVANCE(165);
      END_STATE();
    case 447:
      if (lookahead == 'i') ADVANCE(774);
      END_STATE();
    case 448:
      if (lookahead == 'i') ADVANCE(561);
      if (lookahead == 'm') ADVANCE(171);
      END_STATE();
    case 449:
      if (lookahead == 'i') ADVANCE(748);
      END_STATE();
    case 450:
      if (lookahead == 'i') ADVANCE(302);
      END_STATE();
    case 451:
      if (lookahead == 'i') ADVANCE(544);
      END_STATE();
    case 452:
      if (lookahead == 'i') ADVANCE(704);
      END_STATE();
    case 453:
      if (lookahead == 'i') ADVANCE(775);
      END_STATE();
    case 454:
      if (lookahead == 'i') ADVANCE(784);
      END_STATE();
    case 455:
      if (lookahead == 'i') ADVANCE(574);
      END_STATE();
    case 456:
      if (lookahead == 'i') ADVANCE(722);
      END_STATE();
    case 457:
      if (lookahead == 'i') ADVANCE(669);
      END_STATE();
    case 458:
      if (lookahead == 'i') ADVANCE(524);
      if (lookahead == 'o') ADVANCE(1166);
      END_STATE();
    case 459:
      if (lookahead == 'i') ADVANCE(552);
      END_STATE();
    case 460:
      if (lookahead == 'i') ADVANCE(684);
      END_STATE();
    case 461:
      if (lookahead == 'i') ADVANCE(577);
      END_STATE();
    case 462:
      if (lookahead == 'i') ADVANCE(368);
      END_STATE();
    case 463:
      if (lookahead == 'i') ADVANCE(271);
      END_STATE();
    case 464:
      if (lookahead == 'i') ADVANCE(579);
      END_STATE();
    case 465:
      if (lookahead == 'i') ADVANCE(507);
      END_STATE();
    case 466:
      if (lookahead == 'i') ADVANCE(582);
      END_STATE();
    case 467:
      if (lookahead == 'i') ADVANCE(726);
      END_STATE();
    case 468:
      if (lookahead == 'i') ADVANCE(584);
      END_STATE();
    case 469:
      if (lookahead == 'i') ADVANCE(676);
      END_STATE();
    case 470:
      if (lookahead == 'i') ADVANCE(585);
      END_STATE();
    case 471:
      if (lookahead == 'i') ADVANCE(193);
      END_STATE();
    case 472:
      if (lookahead == 'i') ADVANCE(587);
      END_STATE();
    case 473:
      if (lookahead == 'i') ADVANCE(224);
      END_STATE();
    case 474:
      if (lookahead == 'j') ADVANCE(387);
      END_STATE();
    case 475:
      if (lookahead == 'j') ADVANCE(393);
      END_STATE();
    case 476:
      if (lookahead == 'k') ADVANCE(439);
      if (lookahead == 'p') ADVANCE(508);
      END_STATE();
    case 477:
      if (lookahead == 'k') ADVANCE(358);
      END_STATE();
    case 478:
      if (lookahead == 'k') ADVANCE(450);
      END_STATE();
    case 479:
      if (lookahead == 'k') ADVANCE(379);
      END_STATE();
    case 480:
      if (lookahead == 'k') ADVANCE(462);
      END_STATE();
    case 481:
      if (lookahead == 'l') ADVANCE(1185);
      END_STATE();
    case 482:
      if (lookahead == 'l') ADVANCE(1454);
      END_STATE();
    case 483:
      if (lookahead == 'l') ADVANCE(123);
      END_STATE();
    case 484:
      if (lookahead == 'l') ADVANCE(1176);
      END_STATE();
    case 485:
      if (lookahead == 'l') ADVANCE(1456);
      END_STATE();
    case 486:
      if (lookahead == 'l') ADVANCE(1140);
      END_STATE();
    case 487:
      if (lookahead == 'l') ADVANCE(1157);
      END_STATE();
    case 488:
      if (lookahead == 'l') ADVANCE(1184);
      END_STATE();
    case 489:
      if (lookahead == 'l') ADVANCE(113);
      END_STATE();
    case 490:
      if (lookahead == 'l') ADVANCE(134);
      END_STATE();
    case 491:
      if (lookahead == 'l') ADVANCE(859);
      END_STATE();
    case 492:
      if (lookahead == 'l') ADVANCE(300);
      END_STATE();
    case 493:
      if (lookahead == 'l') ADVANCE(300);
      if (lookahead == 'r') ADVANCE(723);
      END_STATE();
    case 494:
      if (lookahead == 'l') ADVANCE(825);
      END_STATE();
    case 495:
      if (lookahead == 'l') ADVANCE(173);
      END_STATE();
    case 496:
      if (lookahead == 'l') ADVANCE(599);
      END_STATE();
    case 497:
      if (lookahead == 'l') ADVANCE(484);
      END_STATE();
    case 498:
      if (lookahead == 'l') ADVANCE(692);
      END_STATE();
    case 499:
      if (lookahead == 'l') ADVANCE(805);
      END_STATE();
    case 500:
      if (lookahead == 'l') ADVANCE(43);
      END_STATE();
    case 501:
      if (lookahead == 'l') ADVANCE(384);
      END_STATE();
    case 502:
      if (lookahead == 'l') ADVANCE(354);
      END_STATE();
    case 503:
      if (lookahead == 'l') ADVANCE(701);
      END_STATE();
    case 504:
      if (lookahead == 'l') ADVANCE(312);
      END_STATE();
    case 505:
      if (lookahead == 'l') ADVANCE(705);
      END_STATE();
    case 506:
      if (lookahead == 'l') ADVANCE(706);
      END_STATE();
    case 507:
      if (lookahead == 'l') ADVANCE(319);
      END_STATE();
    case 508:
      if (lookahead == 'l') ADVANCE(449);
      END_STATE();
    case 509:
      if (lookahead == 'l') ADVANCE(502);
      END_STATE();
    case 510:
      if (lookahead == 'l') ADVANCE(731);
      END_STATE();
    case 511:
      if (lookahead == 'l') ADVANCE(602);
      END_STATE();
    case 512:
      if (lookahead == 'm') ADVANCE(1128);
      END_STATE();
    case 513:
      if (lookahead == 'm') ADVANCE(131);
      END_STATE();
    case 514:
      if (lookahead == 'm') ADVANCE(1538);
      END_STATE();
    case 515:
      if (lookahead == 'm') ADVANCE(619);
      if (lookahead == 'n') ADVANCE(546);
      if (lookahead == 'o') ADVANCE(478);
      if (lookahead == 'u') ADVANCE(547);
      END_STATE();
    case 516:
      if (lookahead == 'm') ADVANCE(619);
      if (lookahead == 'n') ADVANCE(545);
      if (lookahead == 'u') ADVANCE(547);
      END_STATE();
    case 517:
      if (lookahead == 'm') ADVANCE(240);
      END_STATE();
    case 518:
      if (lookahead == 'm') ADVANCE(447);
      END_STATE();
    case 519:
      if (lookahead == 'm') ADVANCE(483);
      END_STATE();
    case 520:
      if (lookahead == 'm') ADVANCE(483);
      if (lookahead == 't') ADVANCE(610);
      END_STATE();
    case 521:
      if (lookahead == 'm') ADVANCE(311);
      END_STATE();
    case 522:
      if (lookahead == 'm') ADVANCE(714);
      END_STATE();
    case 523:
      if (lookahead == 'm') ADVANCE(719);
      END_STATE();
    case 524:
      if (lookahead == 'm') ADVANCE(365);
      END_STATE();
    case 525:
      if (lookahead == 'm') ADVANCE(114);
      END_STATE();
    case 526:
      if (lookahead == 'm') ADVANCE(621);
      END_STATE();
    case 527:
      if (lookahead == 'm') ADVANCE(192);
      END_STATE();
    case 528:
      if (lookahead == 'm') ADVANCE(200);
      END_STATE();
    case 529:
      if (lookahead == 'm') ADVANCE(241);
      END_STATE();
    case 530:
      if (lookahead == 'n') ADVANCE(1452);
      END_STATE();
    case 531:
      if (lookahead == 'n') ADVANCE(1179);
      END_STATE();
    case 532:
      if (lookahead == 'n') ADVANCE(1187);
      END_STATE();
    case 533:
      if (lookahead == 'n') ADVANCE(1227);
      END_STATE();
    case 534:
      if (lookahead == 'n') ADVANCE(1131);
      END_STATE();
    case 535:
      if (lookahead == 'n') ADVANCE(1209);
      END_STATE();
    case 536:
      if (lookahead == 'n') ADVANCE(1222);
      END_STATE();
    case 537:
      if (lookahead == 'n') ADVANCE(1211);
      END_STATE();
    case 538:
      if (lookahead == 'n') ADVANCE(1130);
      END_STATE();
    case 539:
      if (lookahead == 'n') ADVANCE(282);
      if (lookahead == 'q') ADVANCE(828);
      if (lookahead == 'x') ADVANCE(456);
      END_STATE();
    case 540:
      if (lookahead == 'n') ADVANCE(409);
      END_STATE();
    case 541:
      if (lookahead == 'n') ADVANCE(436);
      if (lookahead == 'r') ADVANCE(489);
      if (lookahead == 's') ADVANCE(351);
      if (lookahead == 't') ADVANCE(402);
      END_STATE();
    case 542:
      if (lookahead == 'n') ADVANCE(410);
      END_STATE();
    case 543:
      if (lookahead == 'n') ADVANCE(548);
      END_STATE();
    case 544:
      if (lookahead == 'n') ADVANCE(419);
      END_STATE();
    case 545:
      if (lookahead == 'n') ADVANCE(383);
      END_STATE();
    case 546:
      if (lookahead == 'n') ADVANCE(383);
      if (lookahead == 't') ADVANCE(181);
      END_STATE();
    case 547:
      if (lookahead == 'n') ADVANCE(746);
      END_STATE();
    case 548:
      if (lookahead == 'n') ADVANCE(346);
      END_STATE();
    case 549:
      if (lookahead == 'n') ADVANCE(248);
      if (lookahead == 's') ADVANCE(110);
      END_STATE();
    case 550:
      if (lookahead == 'n') ADVANCE(749);
      END_STATE();
    case 551:
      if (lookahead == 'n') ADVANCE(710);
      END_STATE();
    case 552:
      if (lookahead == 'n') ADVANCE(698);
      END_STATE();
    case 553:
      if (lookahead == 'n') ADVANCE(713);
      if (lookahead == 'p') ADVANCE(856);
      END_STATE();
    case 554:
      if (lookahead == 'n') ADVANCE(763);
      END_STATE();
    case 555:
      if (lookahead == 'n') ADVANCE(779);
      if (lookahead == 'u') ADVANCE(547);
      END_STATE();
    case 556:
      if (lookahead == 'n') ADVANCE(625);
      END_STATE();
    case 557:
      if (lookahead == 'n') ADVANCE(186);
      END_STATE();
    case 558:
      if (lookahead == 'n') ADVANCE(791);
      if (lookahead == 'p') ADVANCE(858);
      if (lookahead == 's') ADVANCE(569);
      END_STATE();
    case 559:
      if (lookahead == 'n') ADVANCE(394);
      END_STATE();
    case 560:
      if (lookahead == 'n') ADVANCE(261);
      END_STATE();
    case 561:
      if (lookahead == 'n') ADVANCE(812);
      END_STATE();
    case 562:
      if (lookahead == 'n') ADVANCE(263);
      END_STATE();
    case 563:
      if (lookahead == 'n') ADVANCE(267);
      END_STATE();
    case 564:
      if (lookahead == 'n') ADVANCE(269);
      END_STATE();
    case 565:
      if (lookahead == 'o') ADVANCE(116);
      if (lookahead == 'r') ADVANCE(832);
      END_STATE();
    case 566:
      if (lookahead == 'o') ADVANCE(478);
      END_STATE();
    case 567:
      if (lookahead == 'o') ADVANCE(871);
      END_STATE();
    case 568:
      if (lookahead == 'o') ADVANCE(743);
      if (lookahead == 't') ADVANCE(420);
      if (lookahead == 'u') ADVANCE(497);
      END_STATE();
    case 569:
      if (lookahead == 'o') ADVANCE(118);
      END_STATE();
    case 570:
      if (lookahead == 'o') ADVANCE(530);
      END_STATE();
    case 571:
      if (lookahead == 'o') ADVANCE(608);
      END_STATE();
    case 572:
      if (lookahead == 'o') ADVANCE(863);
      END_STATE();
    case 573:
      if (lookahead == 'o') ADVANCE(864);
      END_STATE();
    case 574:
      if (lookahead == 'o') ADVANCE(551);
      END_STATE();
    case 575:
      if (lookahead == 'o') ADVANCE(286);
      END_STATE();
    case 576:
      if (lookahead == 'o') ADVANCE(245);
      END_STATE();
    case 577:
      if (lookahead == 'o') ADVANCE(531);
      END_STATE();
    case 578:
      if (lookahead == 'o') ADVANCE(491);
      END_STATE();
    case 579:
      if (lookahead == 'o') ADVANCE(532);
      END_STATE();
    case 580:
      if (lookahead == 'o') ADVANCE(842);
      END_STATE();
    case 581:
      if (lookahead == 'o') ADVANCE(501);
      END_STATE();
    case 582:
      if (lookahead == 'o') ADVANCE(534);
      END_STATE();
    case 583:
      if (lookahead == 'o') ADVANCE(695);
      END_STATE();
    case 584:
      if (lookahead == 'o') ADVANCE(537);
      END_STATE();
    case 585:
      if (lookahead == 'o') ADVANCE(557);
      END_STATE();
    case 586:
      if (lookahead == 'o') ADVANCE(556);
      END_STATE();
    case 587:
      if (lookahead == 'o') ADVANCE(538);
      END_STATE();
    case 588:
      if (lookahead == 'o') ADVANCE(509);
      END_STATE();
    case 589:
      if (lookahead == 'o') ADVANCE(646);
      END_STATE();
    case 590:
      if (lookahead == 'o') ADVANCE(807);
      END_STATE();
    case 591:
      if (lookahead == 'o') ADVANCE(581);
      END_STATE();
    case 592:
      if (lookahead == 'o') ADVANCE(287);
      END_STATE();
    case 593:
      if (lookahead == 'o') ADVANCE(653);
      END_STATE();
    case 594:
      if (lookahead == 'o') ADVANCE(839);
      END_STATE();
    case 595:
      if (lookahead == 'o') ADVANCE(729);
      END_STATE();
    case 596:
      if (lookahead == 'o') ADVANCE(288);
      END_STATE();
    case 597:
      if (lookahead == 'o') ADVANCE(289);
      END_STATE();
    case 598:
      if (lookahead == 'o') ADVANCE(674);
      END_STATE();
    case 599:
      if (lookahead == 'o') ADVANCE(195);
      END_STATE();
    case 600:
      if (lookahead == 'o') ADVANCE(290);
      END_STATE();
    case 601:
      if (lookahead == 'o') ADVANCE(291);
      END_STATE();
    case 602:
      if (lookahead == 'o') ADVANCE(197);
      END_STATE();
    case 603:
      if (lookahead == 'o') ADVANCE(732);
      END_STATE();
    case 604:
      if (lookahead == 'o') ADVANCE(292);
      END_STATE();
    case 605:
      if (lookahead == 'o') ADVANCE(293);
      END_STATE();
    case 606:
      if (lookahead == 'o') ADVANCE(294);
      END_STATE();
    case 607:
      if (lookahead == 'o') ADVANCE(295);
      END_STATE();
    case 608:
      if (lookahead == 'o') ADVANCE(480);
      END_STATE();
    case 609:
      if (lookahead == 'o') ADVANCE(683);
      END_STATE();
    case 610:
      if (lookahead == 'p') ADVANCE(82);
      END_STATE();
    case 611:
      if (lookahead == 'p') ADVANCE(1142);
      END_STATE();
    case 612:
      if (lookahead == 'p') ADVANCE(1181);
      END_STATE();
    case 613:
      if (lookahead == 'p') ADVANCE(508);
      if (lookahead == 't') ADVANCE(222);
      END_STATE();
    case 614:
      if (lookahead == 'p') ADVANCE(427);
      END_STATE();
    case 615:
      if (lookahead == 'p') ADVANCE(177);
      END_STATE();
    case 616:
      if (lookahead == 'p') ADVANCE(780);
      END_STATE();
    case 617:
      if (lookahead == 'p') ADVANCE(836);
      END_STATE();
    case 618:
      if (lookahead == 'p') ADVANCE(785);
      END_STATE();
    case 619:
      if (lookahead == 'p') ADVANCE(655);
      END_STATE();
    case 620:
      if (lookahead == 'p') ADVANCE(826);
      END_STATE();
    case 621:
      if (lookahead == 'p') ADVANCE(776);
      END_STATE();
    case 622:
      if (lookahead == 'p') ADVANCE(317);
      END_STATE();
    case 623:
      if (lookahead == 'p') ADVANCE(322);
      END_STATE();
    case 624:
      if (lookahead == 'p') ADVANCE(208);
      END_STATE();
    case 625:
      if (lookahead == 'p') ADVANCE(196);
      END_STATE();
    case 626:
      if (lookahead == 'p') ADVANCE(469);
      END_STATE();
    case 627:
      if (lookahead == 'p') ADVANCE(818);
      END_STATE();
    case 628:
      if (lookahead == 'q') ADVANCE(485);
      END_STATE();
    case 629:
      if (lookahead == 'q') ADVANCE(841);
      END_STATE();
    case 630:
      if (lookahead == 'q') ADVANCE(844);
      END_STATE();
    case 631:
      if (lookahead == 'q') ADVANCE(846);
      END_STATE();
    case 632:
      if (lookahead == 'r') ADVANCE(234);
      END_STATE();
    case 633:
      if (lookahead == 'r') ADVANCE(1173);
      END_STATE();
    case 634:
      if (lookahead == 'r') ADVANCE(1167);
      END_STATE();
    case 635:
      if (lookahead == 'r') ADVANCE(1212);
      END_STATE();
    case 636:
      if (lookahead == 'r') ADVANCE(1207);
      END_STATE();
    case 637:
      if (lookahead == 'r') ADVANCE(124);
      END_STATE();
    case 638:
      if (lookahead == 'r') ADVANCE(235);
      END_STATE();
    case 639:
      if (lookahead == 'r') ADVANCE(128);
      END_STATE();
    case 640:
      if (lookahead == 'r') ADVANCE(1198);
      END_STATE();
    case 641:
      if (lookahead == 'r') ADVANCE(1201);
      END_STATE();
    case 642:
      if (lookahead == 'r') ADVANCE(527);
      END_STATE();
    case 643:
      if (lookahead == 'r') ADVANCE(832);
      END_STATE();
    case 644:
      if (lookahead == 'r') ADVANCE(244);
      END_STATE();
    case 645:
      if (lookahead == 'r') ADVANCE(879);
      END_STATE();
    case 646:
      if (lookahead == 'r') ADVANCE(513);
      END_STATE();
    case 647:
      if (lookahead == 'r') ADVANCE(236);
      END_STATE();
    case 648:
      if (lookahead == 'r') ADVANCE(860);
      END_STATE();
    case 649:
      if (lookahead == 'r') ADVANCE(446);
      END_STATE();
    case 650:
      if (lookahead == 'r') ADVANCE(880);
      END_STATE();
    case 651:
      if (lookahead == 'r') ADVANCE(882);
      END_STATE();
    case 652:
      if (lookahead == 'r') ADVANCE(724);
      END_STATE();
    case 653:
      if (lookahead == 'r') ADVANCE(525);
      END_STATE();
    case 654:
      if (lookahead == 'r') ADVANCE(444);
      END_STATE();
    case 655:
      if (lookahead == 'r') ADVANCE(385);
      END_STATE();
    case 656:
      if (lookahead == 'r') ADVANCE(178);
      END_STATE();
    case 657:
      if (lookahead == 'r') ADVANCE(445);
      END_STATE();
    case 658:
      if (lookahead == 'r') ADVANCE(179);
      END_STATE();
    case 659:
      if (lookahead == 'r') ADVANCE(814);
      END_STATE();
    case 660:
      if (lookahead == 'r') ADVANCE(814);
      if (lookahead == 't') ADVANCE(833);
      END_STATE();
    case 661:
      if (lookahead == 'r') ADVANCE(451);
      END_STATE();
    case 662:
      if (lookahead == 'r') ADVANCE(349);
      if (lookahead == 't') ADVANCE(442);
      END_STATE();
    case 663:
      if (lookahead == 'r') ADVANCE(488);
      END_STATE();
    case 664:
      if (lookahead == 'r') ADVANCE(489);
      if (lookahead == 't') ADVANCE(402);
      END_STATE();
    case 665:
      if (lookahead == 'r') ADVANCE(490);
      END_STATE();
    case 666:
      if (lookahead == 'r') ADVANCE(471);
      END_STATE();
    case 667:
      if (lookahead == 'r') ADVANCE(789);
      END_STATE();
    case 668:
      if (lookahead == 'r') ADVANCE(310);
      END_STATE();
    case 669:
      if (lookahead == 'r') ADVANCE(703);
      END_STATE();
    case 670:
      if (lookahead == 'r') ADVANCE(760);
      END_STATE();
    case 671:
      if (lookahead == 'r') ADVANCE(764);
      END_STATE();
    case 672:
      if (lookahead == 'r') ADVANCE(765);
      END_STATE();
    case 673:
      if (lookahead == 'r') ADVANCE(787);
      END_STATE();
    case 674:
      if (lookahead == 'r') ADVANCE(381);
      END_STATE();
    case 675:
      if (lookahead == 'r') ADVANCE(348);
      END_STATE();
    case 676:
      if (lookahead == 'r') ADVANCE(401);
      END_STATE();
    case 677:
      if (lookahead == 'r') ADVANCE(229);
      END_STATE();
    case 678:
      if (lookahead == 'r') ADVANCE(837);
      END_STATE();
    case 679:
      if (lookahead == 'r') ADVANCE(207);
      END_STATE();
    case 680:
      if (lookahead == 'r') ADVANCE(741);
      END_STATE();
    case 681:
      if (lookahead == 'r') ADVANCE(793);
      END_STATE();
    case 682:
      if (lookahead == 'r') ADVANCE(373);
      END_STATE();
    case 683:
      if (lookahead == 'r') ADVANCE(528);
      END_STATE();
    case 684:
      if (lookahead == 'r') ADVANCE(390);
      END_STATE();
    case 685:
      if (lookahead == 'r') ADVANCE(225);
      END_STATE();
    case 686:
      if (lookahead == 'r') ADVANCE(138);
      END_STATE();
    case 687:
      if (lookahead == 'r') ADVANCE(242);
      END_STATE();
    case 688:
      if (lookahead == 'r') ADVANCE(125);
      END_STATE();
    case 689:
      if (lookahead == 's') ADVANCE(139);
      END_STATE();
    case 690:
      if (lookahead == 's') ADVANCE(137);
      END_STATE();
    case 691:
      if (lookahead == 's') ADVANCE(1188);
      END_STATE();
    case 692:
      if (lookahead == 's') ADVANCE(1218);
      END_STATE();
    case 693:
      if (lookahead == 's') ADVANCE(1206);
      END_STATE();
    case 694:
      if (lookahead == 's') ADVANCE(1178);
      END_STATE();
    case 695:
      if (lookahead == 's') ADVANCE(309);
      END_STATE();
    case 696:
      if (lookahead == 's') ADVANCE(1237);
      END_STATE();
    case 697:
      if (lookahead == 's') ADVANCE(142);
      END_STATE();
    case 698:
      if (lookahead == 's') ADVANCE(1236);
      END_STATE();
    case 699:
      if (lookahead == 's') ADVANCE(1238);
      END_STATE();
    case 700:
      if (lookahead == 's') ADVANCE(1180);
      END_STATE();
    case 701:
      if (lookahead == 's') ADVANCE(1220);
      END_STATE();
    case 702:
      if (lookahead == 's') ADVANCE(1183);
      END_STATE();
    case 703:
      if (lookahead == 's') ADVANCE(1149);
      END_STATE();
    case 704:
      if (lookahead == 's') ADVANCE(1141);
      END_STATE();
    case 705:
      if (lookahead == 's') ADVANCE(1232);
      END_STATE();
    case 706:
      if (lookahead == 's') ADVANCE(1225);
      END_STATE();
    case 707:
      if (lookahead == 's') ADVANCE(107);
      END_STATE();
    case 708:
      if (lookahead == 's') ADVANCE(50);
      END_STATE();
    case 709:
      if (lookahead == 's') ADVANCE(143);
      END_STATE();
    case 710:
      if (lookahead == 's') ADVANCE(144);
      END_STATE();
    case 711:
      if (lookahead == 's') ADVANCE(737);
      END_STATE();
    case 712:
      if (lookahead == 's') ADVANCE(145);
      END_STATE();
    case 713:
      if (lookahead == 's') ADVANCE(342);
      END_STATE();
    case 714:
      if (lookahead == 's') ADVANCE(147);
      END_STATE();
    case 715:
      if (lookahead == 's') ADVANCE(690);
      END_STATE();
    case 716:
      if (lookahead == 's') ADVANCE(440);
      END_STATE();
    case 717:
      if (lookahead == 's') ADVANCE(745);
      END_STATE();
    case 718:
      if (lookahead == 's') ADVANCE(49);
      END_STATE();
    case 719:
      if (lookahead == 's') ADVANCE(149);
      END_STATE();
    case 720:
      if (lookahead == 's') ADVANCE(434);
      END_STATE();
    case 721:
      if (lookahead == 's') ADVANCE(576);
      END_STATE();
    case 722:
      if (lookahead == 's') ADVANCE(786);
      END_STATE();
    case 723:
      if (lookahead == 's') ADVANCE(747);
      END_STATE();
    case 724:
      if (lookahead == 's') ADVANCE(375);
      END_STATE();
    case 725:
      if (lookahead == 's') ADVANCE(750);
      END_STATE();
    case 726:
      if (lookahead == 's') ADVANCE(752);
      END_STATE();
    case 727:
      if (lookahead == 's') ADVANCE(357);
      END_STATE();
    case 728:
      if (lookahead == 's') ADVANCE(742);
      END_STATE();
    case 729:
      if (lookahead == 's') ADVANCE(323);
      END_STATE();
    case 730:
      if (lookahead == 's') ADVANCE(341);
      END_STATE();
    case 731:
      if (lookahead == 's') ADVANCE(325);
      END_STATE();
    case 732:
      if (lookahead == 's') ADVANCE(308);
      END_STATE();
    case 733:
      if (lookahead == 's') ADVANCE(250);
      END_STATE();
    case 734:
      if (lookahead == 's') ADVANCE(727);
      END_STATE();
    case 735:
      if (lookahead == 's') ADVANCE(382);
      END_STATE();
    case 736:
      if (lookahead == 's') ADVANCE(260);
      END_STATE();
    case 737:
      if (lookahead == 's') ADVANCE(360);
      END_STATE();
    case 738:
      if (lookahead == 's') ADVANCE(586);
      END_STATE();
    case 739:
      if (lookahead == 's') ADVANCE(800);
      END_STATE();
    case 740:
      if (lookahead == 's') ADVANCE(140);
      END_STATE();
    case 741:
      if (lookahead == 's') ADVANCE(461);
      END_STATE();
    case 742:
      if (lookahead == 's') ADVANCE(847);
      END_STATE();
    case 743:
      if (lookahead == 't') ADVANCE(1202);
      END_STATE();
    case 744:
      if (lookahead == 't') ADVANCE(429);
      END_STATE();
    case 745:
      if (lookahead == 't') ADVANCE(1522);
      END_STATE();
    case 746:
      if (lookahead == 't') ADVANCE(1528);
      END_STATE();
    case 747:
      if (lookahead == 't') ADVANCE(1521);
      END_STATE();
    case 748:
      if (lookahead == 't') ADVANCE(1545);
      END_STATE();
    case 749:
      if (lookahead == 't') ADVANCE(1531);
      END_STATE();
    case 750:
      if (lookahead == 't') ADVANCE(1125);
      END_STATE();
    case 751:
      if (lookahead == 't') ADVANCE(1540);
      END_STATE();
    case 752:
      if (lookahead == 't') ADVANCE(1204);
      END_STATE();
    case 753:
      if (lookahead == 't') ADVANCE(1169);
      END_STATE();
    case 754:
      if (lookahead == 't') ADVANCE(1115);
      END_STATE();
    case 755:
      if (lookahead == 't') ADVANCE(1150);
      END_STATE();
    case 756:
      if (lookahead == 't') ADVANCE(1208);
      END_STATE();
    case 757:
      if (lookahead == 't') ADVANCE(1523);
      END_STATE();
    case 758:
      if (lookahead == 't') ADVANCE(1205);
      END_STATE();
    case 759:
      if (lookahead == 't') ADVANCE(458);
      END_STATE();
    case 760:
      if (lookahead == 't') ADVANCE(126);
      END_STATE();
    case 761:
      if (lookahead == 't') ADVANCE(1172);
      END_STATE();
    case 762:
      if (lookahead == 't') ADVANCE(1155);
      END_STATE();
    case 763:
      if (lookahead == 't') ADVANCE(1145);
      END_STATE();
    case 764:
      if (lookahead == 't') ADVANCE(1118);
      END_STATE();
    case 765:
      if (lookahead == 't') ADVANCE(1116);
      END_STATE();
    case 766:
      if (lookahead == 't') ADVANCE(1537);
      END_STATE();
    case 767:
      if (lookahead == 't') ADVANCE(1197);
      END_STATE();
    case 768:
      if (lookahead == 't') ADVANCE(247);
      END_STATE();
    case 769:
      if (lookahead == 't') ADVANCE(247);
      if (lookahead == 'x') ADVANCE(41);
      END_STATE();
    case 770:
      if (lookahead == 't') ADVANCE(350);
      END_STATE();
    case 771:
      if (lookahead == 't') ADVANCE(121);
      END_STATE();
    case 772:
      if (lookahead == 't') ADVANCE(422);
      END_STATE();
    case 773:
      if (lookahead == 't') ADVANCE(617);
      END_STATE();
    case 774:
      if (lookahead == 't') ADVANCE(48);
      END_STATE();
    case 775:
      if (lookahead == 't') ADVANCE(423);
      END_STATE();
    case 776:
      if (lookahead == 't') ADVANCE(881);
      END_STATE();
    case 777:
      if (lookahead == 't') ADVANCE(46);
      END_STATE();
    case 778:
      if (lookahead == 't') ADVANCE(424);
      END_STATE();
    case 779:
      if (lookahead == 't') ADVANCE(181);
      END_STATE();
    case 780:
      if (lookahead == 't') ADVANCE(455);
      END_STATE();
    case 781:
      if (lookahead == 't') ADVANCE(430);
      END_STATE();
    case 782:
      if (lookahead == 't') ADVANCE(833);
      END_STATE();
    case 783:
      if (lookahead == 't') ADVANCE(883);
      END_STATE();
    case 784:
      if (lookahead == 't') ADVANCE(425);
      END_STATE();
    case 785:
      if (lookahead == 't') ADVANCE(834);
      END_STATE();
    case 786:
      if (lookahead == 't') ADVANCE(693);
      END_STATE();
    case 787:
      if (lookahead == 't') ADVANCE(52);
      END_STATE();
    case 788:
      if (lookahead == 't') ADVANCE(303);
      END_STATE();
    case 789:
      if (lookahead == 't') ADVANCE(697);
      END_STATE();
    case 790:
      if (lookahead == 't') ADVANCE(175);
      END_STATE();
    case 791:
      if (lookahead == 't') ADVANCE(380);
      END_STATE();
    case 792:
      if (lookahead == 't') ADVANCE(304);
      END_STATE();
    case 793:
      if (lookahead == 't') ADVANCE(437);
      END_STATE();
    case 794:
      if (lookahead == 't') ADVANCE(678);
      END_STATE();
    case 795:
      if (lookahead == 't') ADVANCE(305);
      END_STATE();
    case 796:
      if (lookahead == 't') ADVANCE(702);
      END_STATE();
    case 797:
      if (lookahead == 't') ADVANCE(313);
      END_STATE();
    case 798:
      if (lookahead == 't') ADVANCE(314);
      END_STATE();
    case 799:
      if (lookahead == 't') ADVANCE(318);
      END_STATE();
    case 800:
      if (lookahead == 't') ADVANCE(359);
      END_STATE();
    case 801:
      if (lookahead == 't') ADVANCE(326);
      END_STATE();
    case 802:
      if (lookahead == 't') ADVANCE(328);
      if (lookahead == 'y') ADVANCE(707);
      END_STATE();
    case 803:
      if (lookahead == 't') ADVANCE(335);
      END_STATE();
    case 804:
      if (lookahead == 't') ADVANCE(336);
      END_STATE();
    case 805:
      if (lookahead == 't') ADVANCE(441);
      END_STATE();
    case 806:
      if (lookahead == 't') ADVANCE(654);
      END_STATE();
    case 807:
      if (lookahead == 't') ADVANCE(473);
      END_STATE();
    case 808:
      if (lookahead == 't') ADVANCE(657);
      END_STATE();
    case 809:
      if (lookahead == 't') ADVANCE(661);
      END_STATE();
    case 810:
      if (lookahead == 't') ADVANCE(362);
      END_STATE();
    case 811:
      if (lookahead == 't') ADVANCE(372);
      END_STATE();
    case 812:
      if (lookahead == 't') ADVANCE(371);
      END_STATE();
    case 813:
      if (lookahead == 't') ADVANCE(376);
      END_STATE();
    case 814:
      if (lookahead == 't') ADVANCE(740);
      END_STATE();
    case 815:
      if (lookahead == 't') ADVANCE(464);
      END_STATE();
    case 816:
      if (lookahead == 't') ADVANCE(466);
      END_STATE();
    case 817:
      if (lookahead == 't') ADVANCE(468);
      END_STATE();
    case 818:
      if (lookahead == 't') ADVANCE(470);
      END_STATE();
    case 819:
      if (lookahead == 't') ADVANCE(472);
      END_STATE();
    case 820:
      if (lookahead == 'u') ADVANCE(677);
      END_STATE();
    case 821:
      if (lookahead == 'u') ADVANCE(497);
      END_STATE();
    case 822:
      ADVANCE_MAP(
        'u', 889,
        '"', 1425,
        '#', 1425,
        '/', 1425,
        ':', 1425,
        '\\', 1425,
        'b', 1425,
        'f', 1425,
        'n', 1425,
        'r', 1425,
        't', 1425,
      );
      END_STATE();
    case 823:
      ADVANCE_MAP(
        'u', 975,
        '"', 1497,
        '/', 1497,
        '\\', 1497,
        'b', 1497,
        'f', 1497,
        'n', 1497,
        'r', 1497,
        't', 1497,
      );
      END_STATE();
    case 824:
      if (lookahead == 'u') ADVANCE(773);
      END_STATE();
    case 825:
      if (lookahead == 'u') ADVANCE(298);
      END_STATE();
    case 826:
      if (lookahead == 'u') ADVANCE(238);
      END_STATE();
    case 827:
      if (lookahead == 'u') ADVANCE(499);
      END_STATE();
    case 828:
      if (lookahead == 'u') ADVANCE(180);
      END_STATE();
    case 829:
      if (lookahead == 'u') ADVANCE(411);
      END_STATE();
    case 830:
      if (lookahead == 'u') ADVANCE(517);
      END_STATE();
    case 831:
      if (lookahead == 'u') ADVANCE(438);
      END_STATE();
    case 832:
      if (lookahead == 'u') ADVANCE(301);
      END_STATE();
    case 833:
      if (lookahead == 'u') ADVANCE(694);
      END_STATE();
    case 834:
      if (lookahead == 'u') ADVANCE(682);
      END_STATE();
    case 835:
      if (lookahead == 'u') ADVANCE(443);
      END_STATE();
    case 836:
      if (lookahead == 'u') ADVANCE(753);
      END_STATE();
    case 837:
      if (lookahead == 'u') ADVANCE(739);
      END_STATE();
    case 838:
      if (lookahead == 'u') ADVANCE(781);
      END_STATE();
    case 839:
      if (lookahead == 'u') ADVANCE(762);
      END_STATE();
    case 840:
      if (lookahead == 'u') ADVANCE(353);
      END_STATE();
    case 841:
      if (lookahead == 'u') ADVANCE(185);
      END_STATE();
    case 842:
      if (lookahead == 'u') ADVANCE(554);
      END_STATE();
    case 843:
      if (lookahead == 'u') ADVANCE(668);
      END_STATE();
    case 844:
      if (lookahead == 'u') ADVANCE(209);
      END_STATE();
    case 845:
      if (lookahead == 'u') ADVANCE(363);
      END_STATE();
    case 846:
      if (lookahead == 'u') ADVANCE(212);
      END_STATE();
    case 847:
      if (lookahead == 'u') ADVANCE(377);
      END_STATE();
    case 848:
      ADVANCE_MAP(
        'u', 890,
        '#', 1440,
        '\\', 1440,
        'b', 1440,
        'f', 1440,
        'n', 1440,
        'r', 1440,
        't', 1440,
        '{', 1440,
        '}', 1440,
      );
      END_STATE();
    case 849:
      if (lookahead == 'u') ADVANCE(529);
      END_STATE();
    case 850:
      ADVANCE_MAP(
        'u', 891,
        '{', 1254,
        '}', 1254,
        '"', 1255,
        '\\', 1255,
        'b', 1255,
        'f', 1255,
        'n', 1255,
        'r', 1255,
        't', 1255,
      );
      if (lookahead != 0) ADVANCE(1254);
      END_STATE();
    case 851:
      ADVANCE_MAP(
        'u', 892,
        '#', 1445,
        '\\', 1445,
        '`', 1445,
        'b', 1445,
        'f', 1445,
        'n', 1445,
        'r', 1445,
        't', 1445,
        '{', 1445,
        '}', 1445,
      );
      END_STATE();
    case 852:
      ADVANCE_MAP(
        'u', 893,
        ' ', 1491,
        '#', 1491,
        ',', 1491,
        ';', 1491,
        '\\', 1491,
        'b', 1491,
        'f', 1491,
        'n', 1491,
        'r', 1491,
        't', 1491,
        '{', 1491,
        '}', 1491,
      );
      END_STATE();
    case 853:
      ADVANCE_MAP(
        'u', 894,
        ' ', 1124,
        '#', 1124,
        ':', 1124,
        ';', 1124,
        '\\', 1124,
        'b', 1124,
        'f', 1124,
        'n', 1124,
        'r', 1124,
        't', 1124,
        '{', 1124,
        '}', 1124,
      );
      END_STATE();
    case 854:
      ADVANCE_MAP(
        'u', 895,
        ' ', 1490,
        '#', 1490,
        ',', 1490,
        ';', 1490,
        '\\', 1490,
        'b', 1490,
        'f', 1490,
        'n', 1490,
        'r', 1490,
        't', 1490,
        '{', 1490,
        '}', 1490,
      );
      END_STATE();
    case 855:
      ADVANCE_MAP(
        'u', 896,
        ' ', 1121,
        '#', 1121,
        ':', 1121,
        ';', 1121,
        '\\', 1121,
        'b', 1121,
        'f', 1121,
        'n', 1121,
        'r', 1121,
        't', 1121,
        '{', 1121,
        '}', 1121,
      );
      END_STATE();
    case 856:
      if (lookahead == 'v') ADVANCE(85);
      END_STATE();
    case 857:
      if (lookahead == 'v') ADVANCE(87);
      END_STATE();
    case 858:
      if (lookahead == 'v') ADVANCE(86);
      END_STATE();
    case 859:
      if (lookahead == 'v') ADVANCE(307);
      END_STATE();
    case 860:
      if (lookahead == 'v') ADVANCE(188);
      END_STATE();
    case 861:
      if (lookahead == 'v') ADVANCE(367);
      END_STATE();
    case 862:
      if (lookahead == 'w') ADVANCE(1447);
      END_STATE();
    case 863:
      if (lookahead == 'w') ADVANCE(1534);
      END_STATE();
    case 864:
      if (lookahead == 'w') ADVANCE(1535);
      END_STATE();
    case 865:
      if (lookahead == 'w') ADVANCE(708);
      END_STATE();
    case 866:
      if (lookahead == 'w') ADVANCE(233);
      END_STATE();
    case 867:
      if (lookahead == 'x') ADVANCE(1194);
      END_STATE();
    case 868:
      if (lookahead == 'x') ADVANCE(1524);
      END_STATE();
    case 869:
      if (lookahead == 'x') ADVANCE(1544);
      END_STATE();
    case 870:
      if (lookahead == 'x') ADVANCE(33);
      END_STATE();
    case 871:
      if (lookahead == 'x') ADVANCE(878);
      END_STATE();
    case 872:
      if (lookahead == 'x') ADVANCE(41);
      END_STATE();
    case 873:
      if (lookahead == 'x') ADVANCE(51);
      END_STATE();
    case 874:
      if (lookahead == 'x') ADVANCE(626);
      END_STATE();
    case 875:
      if (lookahead == 'x') ADVANCE(45);
      END_STATE();
    case 876:
      if (lookahead == 'y') ADVANCE(1117);
      END_STATE();
    case 877:
      if (lookahead == 'y') ADVANCE(1186);
      END_STATE();
    case 878:
      if (lookahead == 'y') ADVANCE(1171);
      END_STATE();
    case 879:
      if (lookahead == 'y') ADVANCE(1151);
      END_STATE();
    case 880:
      if (lookahead == 'y') ADVANCE(135);
      END_STATE();
    case 881:
      if (lookahead == 'y') ADVANCE(1214);
      END_STATE();
    case 882:
      if (lookahead == 'y') ADVANCE(132);
      END_STATE();
    case 883:
      if (lookahead == 'y') ADVANCE(1152);
      END_STATE();
    case 884:
      if (lookahead == 'y') ADVANCE(1170);
      END_STATE();
    case 885:
      if (lookahead == 'y') ADVANCE(1156);
      END_STATE();
    case 886:
      if (lookahead == 'y') ADVANCE(811);
      END_STATE();
    case 887:
      if (lookahead == '{') ADVANCE(1502);
      END_STATE();
    case 888:
      if (lookahead == '{') ADVANCE(1256);
      END_STATE();
    case 889:
      if (lookahead == '{') ADVANCE(59);
      END_STATE();
    case 890:
      if (lookahead == '{') ADVANCE(62);
      END_STATE();
    case 891:
      if (lookahead == '{') ADVANCE(64);
      END_STATE();
    case 892:
      if (lookahead == '{') ADVANCE(66);
      END_STATE();
    case 893:
      if (lookahead == '{') ADVANCE(69);
      END_STATE();
    case 894:
      if (lookahead == '{') ADVANCE(71);
      END_STATE();
    case 895:
      if (lookahead == '{') ADVANCE(73);
      END_STATE();
    case 896:
      if (lookahead == '{') ADVANCE(76);
      END_STATE();
    case 897:
      if (lookahead == '}') ADVANCE(1257);
      END_STATE();
    case 898:
      if (lookahead == '}') ADVANCE(1425);
      END_STATE();
    case 899:
      if (lookahead == '}') ADVANCE(1425);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(904);
      if (lookahead == '8' ||
          lookahead == '9' ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(902);
      END_STATE();
    case 900:
      if (lookahead == '}') ADVANCE(1425);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(965);
      END_STATE();
    case 901:
      if (lookahead == '}') ADVANCE(1425);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(898);
      END_STATE();
    case 902:
      if (lookahead == '}') ADVANCE(1425);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(900);
      END_STATE();
    case 903:
      if (lookahead == '}') ADVANCE(1425);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(901);
      END_STATE();
    case 904:
      if (lookahead == '}') ADVANCE(1425);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(903);
      END_STATE();
    case 905:
      if (lookahead == '}') ADVANCE(1425);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(904);
      END_STATE();
    case 906:
      if (lookahead == '}') ADVANCE(1440);
      END_STATE();
    case 907:
      if (lookahead == '}') ADVANCE(1440);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(912);
      if (lookahead == '8' ||
          lookahead == '9' ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(909);
      END_STATE();
    case 908:
      if (lookahead == '}') ADVANCE(1440);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(906);
      END_STATE();
    case 909:
      if (lookahead == '}') ADVANCE(1440);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(911);
      END_STATE();
    case 910:
      if (lookahead == '}') ADVANCE(1440);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(908);
      END_STATE();
    case 911:
      if (lookahead == '}') ADVANCE(1440);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(966);
      END_STATE();
    case 912:
      if (lookahead == '}') ADVANCE(1440);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(910);
      END_STATE();
    case 913:
      if (lookahead == '}') ADVANCE(1440);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(912);
      END_STATE();
    case 914:
      if (lookahead == '}') ADVANCE(1255);
      END_STATE();
    case 915:
      if (lookahead == '}') ADVANCE(1255);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(920);
      if (lookahead == '8' ||
          lookahead == '9' ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(917);
      END_STATE();
    case 916:
      if (lookahead == '}') ADVANCE(1255);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(914);
      END_STATE();
    case 917:
      if (lookahead == '}') ADVANCE(1255);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(919);
      END_STATE();
    case 918:
      if (lookahead == '}') ADVANCE(1255);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(916);
      END_STATE();
    case 919:
      if (lookahead == '}') ADVANCE(1255);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(968);
      END_STATE();
    case 920:
      if (lookahead == '}') ADVANCE(1255);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(918);
      END_STATE();
    case 921:
      if (lookahead == '}') ADVANCE(1255);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(920);
      END_STATE();
    case 922:
      if (lookahead == '}') ADVANCE(1445);
      END_STATE();
    case 923:
      if (lookahead == '}') ADVANCE(1445);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(927);
      if (lookahead == '8' ||
          lookahead == '9' ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(925);
      END_STATE();
    case 924:
      if (lookahead == '}') ADVANCE(1445);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(922);
      END_STATE();
    case 925:
      if (lookahead == '}') ADVANCE(1445);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(928);
      END_STATE();
    case 926:
      if (lookahead == '}') ADVANCE(1445);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(924);
      END_STATE();
    case 927:
      if (lookahead == '}') ADVANCE(1445);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(926);
      END_STATE();
    case 928:
      if (lookahead == '}') ADVANCE(1445);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(969);
      END_STATE();
    case 929:
      if (lookahead == '}') ADVANCE(1445);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(927);
      END_STATE();
    case 930:
      if (lookahead == '}') ADVANCE(1491);
      END_STATE();
    case 931:
      if (lookahead == '}') ADVANCE(1491);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(935);
      if (lookahead == '8' ||
          lookahead == '9' ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(933);
      END_STATE();
    case 932:
      if (lookahead == '}') ADVANCE(1491);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(930);
      END_STATE();
    case 933:
      if (lookahead == '}') ADVANCE(1491);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(936);
      END_STATE();
    case 934:
      if (lookahead == '}') ADVANCE(1491);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(932);
      END_STATE();
    case 935:
      if (lookahead == '}') ADVANCE(1491);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(934);
      END_STATE();
    case 936:
      if (lookahead == '}') ADVANCE(1491);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(970);
      END_STATE();
    case 937:
      if (lookahead == '}') ADVANCE(1491);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(935);
      END_STATE();
    case 938:
      if (lookahead == '}') ADVANCE(1124);
      END_STATE();
    case 939:
      if (lookahead == '}') ADVANCE(1124);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(943);
      if (lookahead == '8' ||
          lookahead == '9' ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(941);
      END_STATE();
    case 940:
      if (lookahead == '}') ADVANCE(1124);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(938);
      END_STATE();
    case 941:
      if (lookahead == '}') ADVANCE(1124);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(944);
      END_STATE();
    case 942:
      if (lookahead == '}') ADVANCE(1124);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(940);
      END_STATE();
    case 943:
      if (lookahead == '}') ADVANCE(1124);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(942);
      END_STATE();
    case 944:
      if (lookahead == '}') ADVANCE(1124);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(971);
      END_STATE();
    case 945:
      if (lookahead == '}') ADVANCE(1124);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(943);
      END_STATE();
    case 946:
      if (lookahead == '}') ADVANCE(1490);
      END_STATE();
    case 947:
      if (lookahead == '}') ADVANCE(1490);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(951);
      if (lookahead == '8' ||
          lookahead == '9' ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(949);
      END_STATE();
    case 948:
      if (lookahead == '}') ADVANCE(1490);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(946);
      END_STATE();
    case 949:
      if (lookahead == '}') ADVANCE(1490);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(952);
      END_STATE();
    case 950:
      if (lookahead == '}') ADVANCE(1490);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(948);
      END_STATE();
    case 951:
      if (lookahead == '}') ADVANCE(1490);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(950);
      END_STATE();
    case 952:
      if (lookahead == '}') ADVANCE(1490);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(972);
      END_STATE();
    case 953:
      if (lookahead == '}') ADVANCE(1490);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(951);
      END_STATE();
    case 954:
      if (lookahead == '}') ADVANCE(1121);
      END_STATE();
    case 955:
      if (lookahead == '}') ADVANCE(1121);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(959);
      if (lookahead == '8' ||
          lookahead == '9' ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(957);
      END_STATE();
    case 956:
      if (lookahead == '}') ADVANCE(1121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(954);
      END_STATE();
    case 957:
      if (lookahead == '}') ADVANCE(1121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(960);
      END_STATE();
    case 958:
      if (lookahead == '}') ADVANCE(1121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(956);
      END_STATE();
    case 959:
      if (lookahead == '}') ADVANCE(1121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(958);
      END_STATE();
    case 960:
      if (lookahead == '}') ADVANCE(1121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(973);
      END_STATE();
    case 961:
      if (lookahead == '}') ADVANCE(1121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(959);
      END_STATE();
    case 962:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1568);
      END_STATE();
    case 963:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1571);
      END_STATE();
    case 964:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1497);
      END_STATE();
    case 965:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(898);
      END_STATE();
    case 966:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(906);
      END_STATE();
    case 967:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(964);
      END_STATE();
    case 968:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(914);
      END_STATE();
    case 969:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(922);
      END_STATE();
    case 970:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(930);
      END_STATE();
    case 971:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(938);
      END_STATE();
    case 972:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(946);
      END_STATE();
    case 973:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(954);
      END_STATE();
    case 974:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(967);
      END_STATE();
    case 975:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(974);
      END_STATE();
    case 976:
      if (eof) ADVANCE(983);
      ADVANCE_MAP(
        '\n', 984,
        '"', 1196,
        '#', 1579,
        '<', 1230,
        'C', 1062,
        'D', 1038,
        'G', 1031,
        'H', 1032,
        'L', 1045,
        'O', 1067,
        'P', 1023,
        'T', 1069,
        'U', 1055,
        'V', 1044,
        '[', 109,
        '`', 1442,
        'a', 865,
        'b', 220,
        'c', 183,
        'd', 155,
        'f', 189,
        'h', 338,
        'i', 553,
        'j', 738,
        'k', 299,
        'l', 159,
        'm', 174,
        'n', 327,
        'o', 824,
        'p', 166,
        'r', 339,
        's', 476,
        't', 565,
        'u', 541,
        'v', 164,
        'x', 615,
        '{', 1492,
      );
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1080);
      if (set_contains(extras_character_set_2, 9, lookahead)) SKIP(976);
      END_STATE();
    case 977:
      if (eof) ADVANCE(983);
      ADVANCE_MAP(
        '\n', 984,
        '"', 1196,
        '#', 1579,
        '<', 1230,
        'C', 1062,
        'D', 1038,
        'G', 1031,
        'H', 1032,
        'L', 1045,
        'O', 1067,
        'P', 1023,
        'T', 1069,
        'U', 1055,
        'V', 1044,
        '[', 109,
        '`', 1442,
        'b', 214,
        'f', 190,
        'h', 355,
        'n', 821,
        't', 643,
        '{', 1492,
      );
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1080);
      if (set_contains(extras_character_set_2, 9, lookahead)) SKIP(977);
      END_STATE();
    case 978:
      if (eof) ADVANCE(983);
      ADVANCE_MAP(
        '\n', 984,
        '"', 1196,
        '#', 1579,
        '<', 1230,
        'C', 1062,
        'D', 1038,
        'G', 1031,
        'H', 1033,
        'L', 1045,
        'O', 1067,
        'P', 1023,
        'T', 1069,
        'U', 1055,
        'V', 1044,
        '[', 104,
        '`', 1442,
        'b', 215,
        'c', 374,
        'd', 820,
        'f', 190,
        'h', 337,
        'i', 612,
        'j', 738,
        'm', 275,
        'n', 821,
        'r', 157,
        's', 428,
        't', 643,
        'u', 663,
        'v', 163,
        'x', 615,
        '{', 1492,
      );
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1080);
      if (set_contains(extras_character_set_2, 9, lookahead)) SKIP(978);
      END_STATE();
    case 979:
      if (eof) ADVANCE(983);
      ADVANCE_MAP(
        '\n', 984,
        '"', 1196,
        '#', 1579,
        '<', 1230,
        'C', 1062,
        'D', 1038,
        'G', 1031,
        'H', 1033,
        'L', 1045,
        'O', 1067,
        'P', 1023,
        'T', 1069,
        'U', 1055,
        'V', 1044,
        '[', 104,
        '`', 1442,
        'b', 214,
        'f', 190,
        'h', 355,
        'n', 821,
        't', 643,
        '{', 1492,
      );
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1080);
      if (set_contains(extras_character_set_2, 9, lookahead)) SKIP(979);
      END_STATE();
    case 980:
      if (eof) ADVANCE(983);
      ADVANCE_MAP(
        '\n', 984,
        '"', 1196,
        '#', 1579,
        '<', 1230,
        'C', 1309,
        'D', 1277,
        'G', 1278,
        'H', 1279,
        'L', 1292,
        'O', 1315,
        'P', 1266,
        'T', 1318,
        'U', 1303,
        'V', 1291,
        '[', 1268,
        '\\', 822,
        '`', 1442,
        'b', 1338,
        'f', 1339,
        'h', 1350,
        'n', 1416,
        't', 1389,
        '{', 1493,
      );
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1423);
      if (set_contains(extras_character_set_2, 9, lookahead)) SKIP(977);
      if (set_contains(sym_key_string_text_character_set_1, 763, lookahead)) ADVANCE(1424);
      END_STATE();
    case 981:
      if (eof) ADVANCE(983);
      ADVANCE_MAP(
        '\n', 984,
        '"', 1196,
        '#', 1579,
        '<', 1230,
        'C', 1309,
        'D', 1277,
        'G', 1278,
        'H', 1280,
        'L', 1292,
        'O', 1315,
        'P', 1266,
        'T', 1318,
        'U', 1303,
        'V', 1291,
        '[', 1267,
        '\\', 822,
        '`', 1442,
        'b', 1338,
        'f', 1339,
        'h', 1350,
        'n', 1416,
        't', 1389,
        '{', 1493,
      );
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1423);
      if (set_contains(extras_character_set_2, 9, lookahead)) SKIP(979);
      if (set_contains(sym_key_string_text_character_set_1, 763, lookahead)) ADVANCE(1424);
      END_STATE();
    case 982:
      if (eof) ADVANCE(983);
      ADVANCE_MAP(
        '!', 96,
        '"', 1196,
        '#', 1579,
        '*', 1089,
        '+', 1576,
        ',', 1495,
        '-', 1577,
        '.', 1573,
        '/', 1580,
        '0', 1088,
        ':', 1112,
        ';', 1114,
        '<', 1228,
        '=', 1175,
        '>', 1224,
        'C', 1062,
        'E', 1575,
        'G', 1031,
        'H', 1032,
        'L', 1045,
        'O', 1067,
        'P', 1023,
        'T', 1069,
        'U', 1055,
        'V', 1044,
        '[', 103,
        '\\', 1583,
        ']', 1496,
        '`', 1442,
        'a', 1567,
        'b', 1562,
        'c', 1555,
        'd', 1557,
        'e', 1574,
        'f', 1558,
        'g', 1564,
        'h', 1552,
        'i', 1560,
        'j', 1565,
        'k', 1553,
        'l', 1549,
        'm', 1547,
        'n', 1554,
        'o', 1566,
        'p', 1551,
        'r', 1548,
        's', 1556,
        't', 1563,
        'u', 1561,
        'v', 1550,
        'x', 1559,
        '{', 1492,
        '}', 1494,
        'q', 1546,
        'w', 1546,
        'y', 1546,
        'z', 1546,
        'A', 1080,
        'B', 1080,
        'D', 1080,
        'F', 1080,
      );
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1088);
      if (('I' <= lookahead && lookahead <= 'Z')) ADVANCE(1080);
      if (set_contains(extras_character_set_2, 9, lookahead)) SKIP(982);
      END_STATE();
    case 983:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 984:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(984);
      END_STATE();
    case 985:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(985);
      if (set_contains(extras_character_set_2, 9, lookahead)) ADVANCE(1430);
      END_STATE();
    case 986:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(986);
      if (lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200b) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x2060 ||
          lookahead == 0x3000 ||
          lookahead == 0xfeff) ADVANCE(1458);
      END_STATE();
    case 987:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(987);
      if (set_contains(extras_character_set_2, 9, lookahead)) ADVANCE(1431);
      END_STATE();
    case 988:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(988);
      if (set_contains(extras_character_set_2, 9, lookahead)) ADVANCE(1432);
      END_STATE();
    case 989:
      ACCEPT_TOKEN(anon_sym_GET);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1080);
      END_STATE();
    case 990:
      ACCEPT_TOKEN(anon_sym_GET);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1423);
      if (set_contains(sym_key_string_text_character_set_1, 763, lookahead)) ADVANCE(1424);
      END_STATE();
    case 991:
      ACCEPT_TOKEN(anon_sym_HEAD);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1080);
      END_STATE();
    case 992:
      ACCEPT_TOKEN(anon_sym_HEAD);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1423);
      if (set_contains(sym_key_string_text_character_set_1, 763, lookahead)) ADVANCE(1424);
      END_STATE();
    case 993:
      ACCEPT_TOKEN(anon_sym_POST);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1080);
      END_STATE();
    case 994:
      ACCEPT_TOKEN(anon_sym_POST);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1423);
      if (set_contains(sym_key_string_text_character_set_1, 763, lookahead)) ADVANCE(1424);
      END_STATE();
    case 995:
      ACCEPT_TOKEN(anon_sym_PUT);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1080);
      END_STATE();
    case 996:
      ACCEPT_TOKEN(anon_sym_PUT);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1423);
      if (set_contains(sym_key_string_text_character_set_1, 763, lookahead)) ADVANCE(1424);
      END_STATE();
    case 997:
      ACCEPT_TOKEN(anon_sym_DELETE);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1080);
      END_STATE();
    case 998:
      ACCEPT_TOKEN(anon_sym_DELETE);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1423);
      if (set_contains(sym_key_string_text_character_set_1, 763, lookahead)) ADVANCE(1424);
      END_STATE();
    case 999:
      ACCEPT_TOKEN(anon_sym_CONNECT);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1080);
      END_STATE();
    case 1000:
      ACCEPT_TOKEN(anon_sym_CONNECT);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1423);
      if (set_contains(sym_key_string_text_character_set_1, 763, lookahead)) ADVANCE(1424);
      END_STATE();
    case 1001:
      ACCEPT_TOKEN(anon_sym_OPTIONS);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1080);
      END_STATE();
    case 1002:
      ACCEPT_TOKEN(anon_sym_OPTIONS);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1423);
      if (set_contains(sym_key_string_text_character_set_1, 763, lookahead)) ADVANCE(1424);
      END_STATE();
    case 1003:
      ACCEPT_TOKEN(anon_sym_TRACE);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1080);
      END_STATE();
    case 1004:
      ACCEPT_TOKEN(anon_sym_TRACE);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1423);
      if (set_contains(sym_key_string_text_character_set_1, 763, lookahead)) ADVANCE(1424);
      END_STATE();
    case 1005:
      ACCEPT_TOKEN(anon_sym_PATCH);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1080);
      END_STATE();
    case 1006:
      ACCEPT_TOKEN(anon_sym_PATCH);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1423);
      if (set_contains(sym_key_string_text_character_set_1, 763, lookahead)) ADVANCE(1424);
      END_STATE();
    case 1007:
      ACCEPT_TOKEN(anon_sym_LINK);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1080);
      END_STATE();
    case 1008:
      ACCEPT_TOKEN(anon_sym_LINK);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1423);
      if (set_contains(sym_key_string_text_character_set_1, 763, lookahead)) ADVANCE(1424);
      END_STATE();
    case 1009:
      ACCEPT_TOKEN(anon_sym_UNLINK);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1080);
      END_STATE();
    case 1010:
      ACCEPT_TOKEN(anon_sym_UNLINK);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1423);
      if (set_contains(sym_key_string_text_character_set_1, 763, lookahead)) ADVANCE(1424);
      END_STATE();
    case 1011:
      ACCEPT_TOKEN(anon_sym_PURGE);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1080);
      END_STATE();
    case 1012:
      ACCEPT_TOKEN(anon_sym_PURGE);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1423);
      if (set_contains(sym_key_string_text_character_set_1, 763, lookahead)) ADVANCE(1424);
      END_STATE();
    case 1013:
      ACCEPT_TOKEN(anon_sym_LOCK);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1080);
      END_STATE();
    case 1014:
      ACCEPT_TOKEN(anon_sym_LOCK);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1423);
      if (set_contains(sym_key_string_text_character_set_1, 763, lookahead)) ADVANCE(1424);
      END_STATE();
    case 1015:
      ACCEPT_TOKEN(anon_sym_UNLOCK);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1080);
      END_STATE();
    case 1016:
      ACCEPT_TOKEN(anon_sym_UNLOCK);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1423);
      if (set_contains(sym_key_string_text_character_set_1, 763, lookahead)) ADVANCE(1424);
      END_STATE();
    case 1017:
      ACCEPT_TOKEN(anon_sym_PROPFIND);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1080);
      END_STATE();
    case 1018:
      ACCEPT_TOKEN(anon_sym_PROPFIND);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1423);
      if (set_contains(sym_key_string_text_character_set_1, 763, lookahead)) ADVANCE(1424);
      END_STATE();
    case 1019:
      ACCEPT_TOKEN(anon_sym_VIEW);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1080);
      END_STATE();
    case 1020:
      ACCEPT_TOKEN(anon_sym_VIEW);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1423);
      if (set_contains(sym_key_string_text_character_set_1, 763, lookahead)) ADVANCE(1424);
      END_STATE();
    case 1021:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'A') ADVANCE(1029);
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(1080);
      END_STATE();
    case 1022:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'A') ADVANCE(1027);
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(1080);
      END_STATE();
    case 1023:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'A') ADVANCE(1077);
      if (lookahead == 'O') ADVANCE(1071);
      if (lookahead == 'R') ADVANCE(1063);
      if (lookahead == 'U') ADVANCE(1068);
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(1080);
      END_STATE();
    case 1024:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'C') ADVANCE(1043);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1080);
      END_STATE();
    case 1025:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'C') ADVANCE(1050);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1080);
      END_STATE();
    case 1026:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'C') ADVANCE(1052);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1080);
      END_STATE();
    case 1027:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'C') ADVANCE(1036);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1080);
      END_STATE();
    case 1028:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'C') ADVANCE(1074);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1080);
      END_STATE();
    case 1029:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'D') ADVANCE(991);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1080);
      END_STATE();
    case 1030:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'D') ADVANCE(1017);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1080);
      END_STATE();
    case 1031:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'E') ADVANCE(1072);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1080);
      END_STATE();
    case 1032:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'E') ADVANCE(1021);
      if (lookahead == 'T') ADVANCE(1075);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1080);
      END_STATE();
    case 1033:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'E') ADVANCE(1021);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1080);
      END_STATE();
    case 1034:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'E') ADVANCE(1079);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1080);
      END_STATE();
    case 1035:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'E') ADVANCE(1011);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1080);
      END_STATE();
    case 1036:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'E') ADVANCE(1003);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1080);
      END_STATE();
    case 1037:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'E') ADVANCE(997);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1080);
      END_STATE();
    case 1038:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'E') ADVANCE(1053);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1080);
      END_STATE();
    case 1039:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'E') ADVANCE(1028);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1080);
      END_STATE();
    case 1040:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'E') ADVANCE(1078);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1080);
      END_STATE();
    case 1041:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'F') ADVANCE(1047);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1080);
      END_STATE();
    case 1042:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'G') ADVANCE(1035);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1080);
      END_STATE();
    case 1043:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'H') ADVANCE(1005);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1080);
      END_STATE();
    case 1044:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'I') ADVANCE(1034);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1080);
      END_STATE();
    case 1045:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'I') ADVANCE(1056);
      if (lookahead == 'O') ADVANCE(1025);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1080);
      END_STATE();
    case 1046:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'I') ADVANCE(1060);
      if (lookahead == 'O') ADVANCE(1026);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1080);
      END_STATE();
    case 1047:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'I') ADVANCE(1058);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1080);
      END_STATE();
    case 1048:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'I') ADVANCE(1064);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1080);
      END_STATE();
    case 1049:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'K') ADVANCE(1007);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1080);
      END_STATE();
    case 1050:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'K') ADVANCE(1013);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1080);
      END_STATE();
    case 1051:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'K') ADVANCE(1009);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1080);
      END_STATE();
    case 1052:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'K') ADVANCE(1015);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1080);
      END_STATE();
    case 1053:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'L') ADVANCE(1040);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1080);
      END_STATE();
    case 1054:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'L') ADVANCE(1046);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1080);
      END_STATE();
    case 1055:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'N') ADVANCE(1054);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1080);
      END_STATE();
    case 1056:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'N') ADVANCE(1049);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1080);
      END_STATE();
    case 1057:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'N') ADVANCE(1070);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1080);
      END_STATE();
    case 1058:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'N') ADVANCE(1030);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1080);
      END_STATE();
    case 1059:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'N') ADVANCE(1039);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1080);
      END_STATE();
    case 1060:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'N') ADVANCE(1051);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1080);
      END_STATE();
    case 1061:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'N') ADVANCE(1059);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1080);
      END_STATE();
    case 1062:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'O') ADVANCE(1061);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1080);
      END_STATE();
    case 1063:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'O') ADVANCE(1066);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1080);
      END_STATE();
    case 1064:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'O') ADVANCE(1057);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1080);
      END_STATE();
    case 1065:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'P') ADVANCE(1086);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1080);
      END_STATE();
    case 1066:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'P') ADVANCE(1041);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1080);
      END_STATE();
    case 1067:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'P') ADVANCE(1076);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1080);
      END_STATE();
    case 1068:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'R') ADVANCE(1042);
      if (lookahead == 'T') ADVANCE(995);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1080);
      END_STATE();
    case 1069:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'R') ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1080);
      END_STATE();
    case 1070:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'S') ADVANCE(1001);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1080);
      END_STATE();
    case 1071:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'S') ADVANCE(1073);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1080);
      END_STATE();
    case 1072:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'T') ADVANCE(989);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1080);
      END_STATE();
    case 1073:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'T') ADVANCE(993);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1080);
      END_STATE();
    case 1074:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'T') ADVANCE(999);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1080);
      END_STATE();
    case 1075:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'T') ADVANCE(1065);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1080);
      END_STATE();
    case 1076:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'T') ADVANCE(1048);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1080);
      END_STATE();
    case 1077:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'T') ADVANCE(1024);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1080);
      END_STATE();
    case 1078:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'T') ADVANCE(1037);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1080);
      END_STATE();
    case 1079:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'W') ADVANCE(1019);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1080);
      END_STATE();
    case 1080:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1080);
      END_STATE();
    case 1081:
      ACCEPT_TOKEN(anon_sym_HTTP_SLASH1_DOT0);
      END_STATE();
    case 1082:
      ACCEPT_TOKEN(anon_sym_HTTP_SLASH1_DOT1);
      END_STATE();
    case 1083:
      ACCEPT_TOKEN(anon_sym_HTTP_SLASH2);
      END_STATE();
    case 1084:
      ACCEPT_TOKEN(anon_sym_HTTP_SLASH3);
      END_STATE();
    case 1085:
      ACCEPT_TOKEN(anon_sym_HTTP_SLASH_STAR);
      END_STATE();
    case 1086:
      ACCEPT_TOKEN(anon_sym_HTTP);
      if (lookahead == '/') ADVANCE(32);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1080);
      END_STATE();
    case 1087:
      ACCEPT_TOKEN(anon_sym_HTTP);
      if (lookahead == '/') ADVANCE(32);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1423);
      if (set_contains(sym_key_string_text_character_set_1, 763, lookahead)) ADVANCE(1424);
      END_STATE();
    case 1088:
      ACCEPT_TOKEN(aux_sym_status_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1088);
      END_STATE();
    case 1089:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 1090:
      ACCEPT_TOKEN(anon_sym_LBRACKBasicAuth_RBRACK);
      END_STATE();
    case 1091:
      ACCEPT_TOKEN(anon_sym_LBRACKBasicAuth_RBRACK);
      if (set_contains(sym_key_string_text_character_set_1, 763, lookahead)) ADVANCE(1424);
      END_STATE();
    case 1092:
      ACCEPT_TOKEN(anon_sym_LBRACKQuery_RBRACK);
      END_STATE();
    case 1093:
      ACCEPT_TOKEN(anon_sym_LBRACKQuery_RBRACK);
      if (set_contains(sym_key_string_text_character_set_1, 763, lookahead)) ADVANCE(1424);
      END_STATE();
    case 1094:
      ACCEPT_TOKEN(anon_sym_LBRACKQueryStringParams_RBRACK);
      END_STATE();
    case 1095:
      ACCEPT_TOKEN(anon_sym_LBRACKQueryStringParams_RBRACK);
      if (set_contains(sym_key_string_text_character_set_1, 763, lookahead)) ADVANCE(1424);
      END_STATE();
    case 1096:
      ACCEPT_TOKEN(anon_sym_LBRACKForm_RBRACK);
      END_STATE();
    case 1097:
      ACCEPT_TOKEN(anon_sym_LBRACKForm_RBRACK);
      if (set_contains(sym_key_string_text_character_set_1, 763, lookahead)) ADVANCE(1424);
      END_STATE();
    case 1098:
      ACCEPT_TOKEN(anon_sym_LBRACKFormParams_RBRACK);
      END_STATE();
    case 1099:
      ACCEPT_TOKEN(anon_sym_LBRACKFormParams_RBRACK);
      if (set_contains(sym_key_string_text_character_set_1, 763, lookahead)) ADVANCE(1424);
      END_STATE();
    case 1100:
      ACCEPT_TOKEN(anon_sym_LBRACKMultipart_RBRACK);
      END_STATE();
    case 1101:
      ACCEPT_TOKEN(anon_sym_LBRACKMultipart_RBRACK);
      if (set_contains(sym_key_string_text_character_set_1, 763, lookahead)) ADVANCE(1424);
      END_STATE();
    case 1102:
      ACCEPT_TOKEN(anon_sym_LBRACKMultipartFormData_RBRACK);
      END_STATE();
    case 1103:
      ACCEPT_TOKEN(anon_sym_LBRACKMultipartFormData_RBRACK);
      if (set_contains(sym_key_string_text_character_set_1, 763, lookahead)) ADVANCE(1424);
      END_STATE();
    case 1104:
      ACCEPT_TOKEN(anon_sym_LBRACKCookies_RBRACK);
      END_STATE();
    case 1105:
      ACCEPT_TOKEN(anon_sym_LBRACKCookies_RBRACK);
      if (set_contains(sym_key_string_text_character_set_1, 763, lookahead)) ADVANCE(1424);
      END_STATE();
    case 1106:
      ACCEPT_TOKEN(anon_sym_LBRACKCaptures_RBRACK);
      END_STATE();
    case 1107:
      ACCEPT_TOKEN(anon_sym_LBRACKCaptures_RBRACK);
      if (set_contains(sym_key_string_text_character_set_1, 763, lookahead)) ADVANCE(1424);
      END_STATE();
    case 1108:
      ACCEPT_TOKEN(anon_sym_LBRACKAsserts_RBRACK);
      END_STATE();
    case 1109:
      ACCEPT_TOKEN(anon_sym_LBRACKAsserts_RBRACK);
      if (set_contains(sym_key_string_text_character_set_1, 763, lookahead)) ADVANCE(1424);
      END_STATE();
    case 1110:
      ACCEPT_TOKEN(anon_sym_LBRACKOptions_RBRACK);
      END_STATE();
    case 1111:
      ACCEPT_TOKEN(anon_sym_LBRACKOptions_RBRACK);
      if (set_contains(sym_key_string_text_character_set_1, 763, lookahead)) ADVANCE(1424);
      END_STATE();
    case 1112:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 1113:
      ACCEPT_TOKEN(anon_sym_file_COMMA);
      END_STATE();
    case 1114:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 1115:
      ACCEPT_TOKEN(anon_sym_redact);
      END_STATE();
    case 1116:
      ACCEPT_TOKEN(anon_sym_cacert);
      END_STATE();
    case 1117:
      ACCEPT_TOKEN(anon_sym_key);
      END_STATE();
    case 1118:
      ACCEPT_TOKEN(anon_sym_cert);
      END_STATE();
    case 1119:
      ACCEPT_TOKEN(aux_sym_filename_password_text_token1);
      if (lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200b) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x2060 ||
          lookahead == 0x3000 ||
          lookahead == 0xfeff) ADVANCE(1119);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1120);
      END_STATE();
    case 1120:
      ACCEPT_TOKEN(aux_sym_filename_password_text_token1);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1120);
      END_STATE();
    case 1121:
      ACCEPT_TOKEN(sym_filename_password_escaped_char);
      END_STATE();
    case 1122:
      ACCEPT_TOKEN(aux_sym__filename_password_continue_token1);
      if (lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200b) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x2060 ||
          lookahead == 0x3000 ||
          lookahead == 0xfeff) ADVANCE(1122);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1123);
      END_STATE();
    case 1123:
      ACCEPT_TOKEN(aux_sym__filename_password_continue_token1);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1123);
      END_STATE();
    case 1124:
      ACCEPT_TOKEN(aux_sym__filename_password_continue_token2);
      END_STATE();
    case 1125:
      ACCEPT_TOKEN(anon_sym_digest);
      END_STATE();
    case 1126:
      ACCEPT_TOKEN(anon_sym_http1_DOT1);
      END_STATE();
    case 1127:
      ACCEPT_TOKEN(anon_sym_negotiate);
      END_STATE();
    case 1128:
      ACCEPT_TOKEN(anon_sym_ntlm);
      END_STATE();
    case 1129:
      ACCEPT_TOKEN(anon_sym_compressed);
      END_STATE();
    case 1130:
      ACCEPT_TOKEN(anon_sym_location);
      END_STATE();
    case 1131:
      ACCEPT_TOKEN(anon_sym_location);
      if (lookahead == '-') ADVANCE(794);
      END_STATE();
    case 1132:
      ACCEPT_TOKEN(anon_sym_location_DASHtrusted);
      END_STATE();
    case 1133:
      ACCEPT_TOKEN(anon_sym_http1_DOT0);
      END_STATE();
    case 1134:
      ACCEPT_TOKEN(anon_sym_http2);
      END_STATE();
    case 1135:
      ACCEPT_TOKEN(anon_sym_http3);
      END_STATE();
    case 1136:
      ACCEPT_TOKEN(anon_sym_insecure);
      END_STATE();
    case 1137:
      ACCEPT_TOKEN(anon_sym_ipv4);
      END_STATE();
    case 1138:
      ACCEPT_TOKEN(anon_sym_ipv6);
      END_STATE();
    case 1139:
      ACCEPT_TOKEN(anon_sym_netrc);
      if (lookahead == '-') ADVANCE(404);
      END_STATE();
    case 1140:
      ACCEPT_TOKEN(anon_sym_netrc_DASHoptional);
      END_STATE();
    case 1141:
      ACCEPT_TOKEN(anon_sym_path_DASHas_DASHis);
      END_STATE();
    case 1142:
      ACCEPT_TOKEN(anon_sym_skip);
      END_STATE();
    case 1143:
      ACCEPT_TOKEN(anon_sym_verbose);
      END_STATE();
    case 1144:
      ACCEPT_TOKEN(anon_sym_very_DASHverbose);
      END_STATE();
    case 1145:
      ACCEPT_TOKEN(anon_sym_retry_DASHmax_DASHcount);
      END_STATE();
    case 1146:
      ACCEPT_TOKEN(anon_sym_limit_DASHrate);
      END_STATE();
    case 1147:
      ACCEPT_TOKEN(aux_sym_count_option_token1);
      END_STATE();
    case 1148:
      ACCEPT_TOKEN(aux_sym_count_option_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1148);
      END_STATE();
    case 1149:
      ACCEPT_TOKEN(anon_sym_max_DASHredirs);
      END_STATE();
    case 1150:
      ACCEPT_TOKEN(anon_sym_repeat);
      END_STATE();
    case 1151:
      ACCEPT_TOKEN(anon_sym_retry);
      if (lookahead == '-') ADVANCE(448);
      END_STATE();
    case 1152:
      ACCEPT_TOKEN(anon_sym_verbosity);
      END_STATE();
    case 1153:
      ACCEPT_TOKEN(anon_sym_brief);
      END_STATE();
    case 1154:
      ACCEPT_TOKEN(anon_sym_debug);
      END_STATE();
    case 1155:
      ACCEPT_TOKEN(anon_sym_connect_DASHtimeout);
      END_STATE();
    case 1156:
      ACCEPT_TOKEN(anon_sym_delay);
      END_STATE();
    case 1157:
      ACCEPT_TOKEN(anon_sym_retry_DASHinterval);
      END_STATE();
    case 1158:
      ACCEPT_TOKEN(anon_sym_max_DASHtime);
      END_STATE();
    case 1159:
      ACCEPT_TOKEN(sym_duration_unit);
      END_STATE();
    case 1160:
      ACCEPT_TOKEN(sym_duration_unit);
      if (lookahead == 'a') ADVANCE(769);
      if (lookahead == 'd') ADVANCE(90);
      if (lookahead == 's') ADVANCE(1159);
      END_STATE();
    case 1161:
      ACCEPT_TOKEN(sym_duration_unit);
      if (lookahead == 'e') ADVANCE(161);
      if (lookahead == 't') ADVANCE(520);
      END_STATE();
    case 1162:
      ACCEPT_TOKEN(sym_duration_unit);
      if (lookahead == 'h') ADVANCE(153);
      if (lookahead == 'k') ADVANCE(439);
      if (lookahead == 'p') ADVANCE(508);
      if (lookahead == 't') ADVANCE(154);
      END_STATE();
    case 1163:
      ACCEPT_TOKEN(sym_duration_unit);
      if (lookahead == 's') ADVANCE(1159);
      END_STATE();
    case 1164:
      ACCEPT_TOKEN(anon_sym_resolve);
      END_STATE();
    case 1165:
      ACCEPT_TOKEN(anon_sym_aws_DASHsigv4);
      END_STATE();
    case 1166:
      ACCEPT_TOKEN(anon_sym_connect_DASHto);
      END_STATE();
    case 1167:
      ACCEPT_TOKEN(anon_sym_header);
      END_STATE();
    case 1168:
      ACCEPT_TOKEN(anon_sym_netrc_DASHfile);
      END_STATE();
    case 1169:
      ACCEPT_TOKEN(anon_sym_output);
      END_STATE();
    case 1170:
      ACCEPT_TOKEN(anon_sym_pinnedpubkey);
      END_STATE();
    case 1171:
      ACCEPT_TOKEN(anon_sym_proxy);
      END_STATE();
    case 1172:
      ACCEPT_TOKEN(anon_sym_unix_DASHsocket);
      END_STATE();
    case 1173:
      ACCEPT_TOKEN(anon_sym_user);
      END_STATE();
    case 1174:
      ACCEPT_TOKEN(anon_sym_variable);
      END_STATE();
    case 1175:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 1176:
      ACCEPT_TOKEN(anon_sym_null);
      END_STATE();
    case 1177:
      ACCEPT_TOKEN(anon_sym_null);
      if (set_contains(sym_key_string_text_character_set_1, 763, lookahead)) ADVANCE(1424);
      END_STATE();
    case 1178:
      ACCEPT_TOKEN(anon_sym_status);
      END_STATE();
    case 1179:
      ACCEPT_TOKEN(anon_sym_version);
      END_STATE();
    case 1180:
      ACCEPT_TOKEN(anon_sym_rawbytes);
      END_STATE();
    case 1181:
      ACCEPT_TOKEN(anon_sym_ip);
      END_STATE();
    case 1182:
      ACCEPT_TOKEN(anon_sym_ip);
      if (lookahead == 'v') ADVANCE(85);
      END_STATE();
    case 1183:
      ACCEPT_TOKEN(anon_sym_redirects);
      END_STATE();
    case 1184:
      ACCEPT_TOKEN(anon_sym_url);
      END_STATE();
    case 1185:
      ACCEPT_TOKEN(anon_sym_url);
      if (lookahead == 'D') ADVANCE(352);
      if (lookahead == 'E') ADVANCE(560);
      if (lookahead == 'Q') ADVANCE(845);
      END_STATE();
    case 1186:
      ACCEPT_TOKEN(anon_sym_body);
      END_STATE();
    case 1187:
      ACCEPT_TOKEN(anon_sym_duration);
      END_STATE();
    case 1188:
      ACCEPT_TOKEN(anon_sym_bytes);
      END_STATE();
    case 1189:
      ACCEPT_TOKEN(anon_sym_sha256);
      END_STATE();
    case 1190:
      ACCEPT_TOKEN(anon_sym_md5);
      END_STATE();
    case 1191:
      ACCEPT_TOKEN(anon_sym_cookie);
      END_STATE();
    case 1192:
      ACCEPT_TOKEN(anon_sym_xpath);
      END_STATE();
    case 1193:
      ACCEPT_TOKEN(anon_sym_jsonpath);
      END_STATE();
    case 1194:
      ACCEPT_TOKEN(anon_sym_regex);
      END_STATE();
    case 1195:
      ACCEPT_TOKEN(anon_sym_certificate);
      END_STATE();
    case 1196:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 1197:
      ACCEPT_TOKEN(anon_sym_Subject);
      END_STATE();
    case 1198:
      ACCEPT_TOKEN(anon_sym_Issuer);
      END_STATE();
    case 1199:
      ACCEPT_TOKEN(anon_sym_Start_DASHDate);
      END_STATE();
    case 1200:
      ACCEPT_TOKEN(anon_sym_Expire_DASHDate);
      END_STATE();
    case 1201:
      ACCEPT_TOKEN(anon_sym_Serial_DASHNumber);
      END_STATE();
    case 1202:
      ACCEPT_TOKEN(anon_sym_not);
      if (lookahead == 'E') ADVANCE(629);
      END_STATE();
    case 1203:
      ACCEPT_TOKEN(anon_sym_isDate);
      END_STATE();
    case 1204:
      ACCEPT_TOKEN(anon_sym_isList);
      END_STATE();
    case 1205:
      ACCEPT_TOKEN(anon_sym_isObject);
      END_STATE();
    case 1206:
      ACCEPT_TOKEN(anon_sym_exists);
      END_STATE();
    case 1207:
      ACCEPT_TOKEN(anon_sym_isInteger);
      END_STATE();
    case 1208:
      ACCEPT_TOKEN(anon_sym_isFloat);
      END_STATE();
    case 1209:
      ACCEPT_TOKEN(anon_sym_isBoolean);
      END_STATE();
    case 1210:
      ACCEPT_TOKEN(anon_sym_isString);
      END_STATE();
    case 1211:
      ACCEPT_TOKEN(anon_sym_isCollection);
      END_STATE();
    case 1212:
      ACCEPT_TOKEN(anon_sym_isNumber);
      END_STATE();
    case 1213:
      ACCEPT_TOKEN(anon_sym_isIsoDate);
      END_STATE();
    case 1214:
      ACCEPT_TOKEN(anon_sym_isEmpty);
      END_STATE();
    case 1215:
      ACCEPT_TOKEN(anon_sym_isIpv4);
      END_STATE();
    case 1216:
      ACCEPT_TOKEN(anon_sym_isIpv6);
      END_STATE();
    case 1217:
      ACCEPT_TOKEN(anon_sym_isUuid);
      END_STATE();
    case 1218:
      ACCEPT_TOKEN(anon_sym_equals);
      END_STATE();
    case 1219:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 1220:
      ACCEPT_TOKEN(anon_sym_notEquals);
      END_STATE();
    case 1221:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 1222:
      ACCEPT_TOKEN(anon_sym_greaterThan);
      if (lookahead == 'O') ADVANCE(688);
      END_STATE();
    case 1223:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 1224:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(1226);
      END_STATE();
    case 1225:
      ACCEPT_TOKEN(anon_sym_greaterThanOrEquals);
      END_STATE();
    case 1226:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 1227:
      ACCEPT_TOKEN(anon_sym_lessThan);
      if (lookahead == 'O') ADVANCE(637);
      END_STATE();
    case 1228:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '!') ADVANCE(38);
      if (lookahead == '/') ADVANCE(1245);
      if (lookahead == '=') ADVANCE(1233);
      if (lookahead == '?') ADVANCE(102);
      END_STATE();
    case 1229:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '!') ADVANCE(38);
      if (lookahead == '/') ADVANCE(1245);
      if (lookahead == '?') ADVANCE(102);
      END_STATE();
    case 1230:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '!') ADVANCE(37);
      if (lookahead == '?') ADVANCE(102);
      END_STATE();
    case 1231:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(1233);
      END_STATE();
    case 1232:
      ACCEPT_TOKEN(anon_sym_lessThanOrEquals);
      END_STATE();
    case 1233:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 1234:
      ACCEPT_TOKEN(anon_sym_startsWith);
      END_STATE();
    case 1235:
      ACCEPT_TOKEN(anon_sym_endsWith);
      END_STATE();
    case 1236:
      ACCEPT_TOKEN(anon_sym_contains);
      END_STATE();
    case 1237:
      ACCEPT_TOKEN(anon_sym_matches);
      END_STATE();
    case 1238:
      ACCEPT_TOKEN(anon_sym_includes);
      END_STATE();
    case 1239:
      ACCEPT_TOKEN(sym_xml_prolog_tag);
      END_STATE();
    case 1240:
      ACCEPT_TOKEN(sym_xml_comment);
      END_STATE();
    case 1241:
      ACCEPT_TOKEN(sym_xml_cdata);
      END_STATE();
    case 1242:
      ACCEPT_TOKEN(sym_xml_name);
      if (set_contains(sym_xml_name_character_set_2, 761, lookahead)) ADVANCE(1242);
      END_STATE();
    case 1243:
      ACCEPT_TOKEN(sym_xml_attribute_value);
      END_STATE();
    case 1244:
      ACCEPT_TOKEN(anon_sym_SLASH_GT);
      END_STATE();
    case 1245:
      ACCEPT_TOKEN(anon_sym_LT_SLASH);
      END_STATE();
    case 1246:
      ACCEPT_TOKEN(anon_sym_base64_COMMA);
      END_STATE();
    case 1247:
      ACCEPT_TOKEN(aux_sym_oneline_base64_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1247);
      if (lookahead == '+' ||
          ('/' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1248);
      END_STATE();
    case 1248:
      ACCEPT_TOKEN(aux_sym_oneline_base64_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '+' ||
          ('/' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1248);
      END_STATE();
    case 1249:
      ACCEPT_TOKEN(anon_sym_hex_COMMA);
      END_STATE();
    case 1250:
      ACCEPT_TOKEN(aux_sym_quoted_string_text_token1);
      if (lookahead == '\n') ADVANCE(1252);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\' &&
          lookahead != '{') ADVANCE(1250);
      END_STATE();
    case 1251:
      ACCEPT_TOKEN(aux_sym_quoted_string_text_token1);
      if (lookahead == '#') ADVANCE(1250);
      if (set_contains(extras_character_set_2, 9, lookahead)) ADVANCE(1251);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '\\' &&
          lookahead != '{') ADVANCE(1252);
      END_STATE();
    case 1252:
      ACCEPT_TOKEN(aux_sym_quoted_string_text_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\' &&
          lookahead != '{') ADVANCE(1252);
      END_STATE();
    case 1253:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '{') ADVANCE(1502);
      END_STATE();
    case 1254:
      ACCEPT_TOKEN(sym_invalid_quoted_string_escaped_char);
      END_STATE();
    case 1255:
      ACCEPT_TOKEN(sym_quoted_string_escaped_char);
      END_STATE();
    case 1256:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      END_STATE();
    case 1257:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 1258:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == ',') ADVANCE(1249);
      if (set_contains(sym_key_string_text_character_set_1, 763, lookahead)) ADVANCE(1424);
      END_STATE();
    case 1259:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == ',') ADVANCE(1113);
      if (set_contains(sym_key_string_text_character_set_1, 763, lookahead)) ADVANCE(1424);
      END_STATE();
    case 1260:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == ',') ADVANCE(1246);
      if (set_contains(sym_key_string_text_character_set_1, 763, lookahead)) ADVANCE(1424);
      END_STATE();
    case 1261:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '4') ADVANCE(1260);
      if (set_contains(sym_key_string_text_character_set_1, 763, lookahead)) ADVANCE(1424);
      END_STATE();
    case 1262:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '6') ADVANCE(1261);
      if (set_contains(sym_key_string_text_character_set_1, 763, lookahead)) ADVANCE(1424);
      END_STATE();
    case 1263:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'A') ADVANCE(1274);
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(1423);
      if (set_contains(sym_key_string_text_character_set_1, 763, lookahead)) ADVANCE(1424);
      END_STATE();
    case 1264:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'A') ADVANCE(1272);
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(1423);
      if (set_contains(sym_key_string_text_character_set_1, 763, lookahead)) ADVANCE(1424);
      END_STATE();
    case 1265:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'A') ADVANCE(1417);
      if (set_contains(sym_key_string_text_character_set_1, 763, lookahead)) ADVANCE(1424);
      END_STATE();
    case 1266:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'A') ADVANCE(1327);
      if (lookahead == 'O') ADVANCE(1321);
      if (lookahead == 'R') ADVANCE(1310);
      if (lookahead == 'U') ADVANCE(1317);
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(1423);
      if (set_contains(sym_key_string_text_character_set_1, 763, lookahead)) ADVANCE(1424);
      END_STATE();
    case 1267:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'A') ADVANCE(1406);
      if (lookahead == 'C') ADVANCE(1346);
      if (set_contains(sym_key_string_text_character_set_1, 763, lookahead)) ADVANCE(1424);
      END_STATE();
    case 1268:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'B') ADVANCE(1340);
      if (lookahead == 'C') ADVANCE(1381);
      if (lookahead == 'F') ADVANCE(1380);
      if (lookahead == 'M') ADVANCE(1418);
      if (lookahead == 'O') ADVANCE(1383);
      if (lookahead == 'Q') ADVANCE(1415);
      if (set_contains(sym_key_string_text_character_set_1, 763, lookahead)) ADVANCE(1424);
      END_STATE();
    case 1269:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'C') ADVANCE(1290);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1423);
      if (set_contains(sym_key_string_text_character_set_1, 763, lookahead)) ADVANCE(1424);
      END_STATE();
    case 1270:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'C') ADVANCE(1297);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1423);
      if (set_contains(sym_key_string_text_character_set_1, 763, lookahead)) ADVANCE(1424);
      END_STATE();
    case 1271:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'C') ADVANCE(1299);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1423);
      if (set_contains(sym_key_string_text_character_set_1, 763, lookahead)) ADVANCE(1424);
      END_STATE();
    case 1272:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'C') ADVANCE(1283);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1423);
      if (set_contains(sym_key_string_text_character_set_1, 763, lookahead)) ADVANCE(1424);
      END_STATE();
    case 1273:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'C') ADVANCE(1324);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1423);
      if (set_contains(sym_key_string_text_character_set_1, 763, lookahead)) ADVANCE(1424);
      END_STATE();
    case 1274:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'D') ADVANCE(992);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1423);
      if (set_contains(sym_key_string_text_character_set_1, 763, lookahead)) ADVANCE(1424);
      END_STATE();
    case 1275:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'D') ADVANCE(1018);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1423);
      if (set_contains(sym_key_string_text_character_set_1, 763, lookahead)) ADVANCE(1424);
      END_STATE();
    case 1276:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'D') ADVANCE(1344);
      if (set_contains(sym_key_string_text_character_set_1, 763, lookahead)) ADVANCE(1424);
      END_STATE();
    case 1277:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'E') ADVANCE(1300);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1423);
      if (set_contains(sym_key_string_text_character_set_1, 763, lookahead)) ADVANCE(1424);
      END_STATE();
    case 1278:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'E') ADVANCE(1322);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1423);
      if (set_contains(sym_key_string_text_character_set_1, 763, lookahead)) ADVANCE(1424);
      END_STATE();
    case 1279:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'E') ADVANCE(1263);
      if (lookahead == 'T') ADVANCE(1325);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1423);
      if (set_contains(sym_key_string_text_character_set_1, 763, lookahead)) ADVANCE(1424);
      END_STATE();
    case 1280:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'E') ADVANCE(1263);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1423);
      if (set_contains(sym_key_string_text_character_set_1, 763, lookahead)) ADVANCE(1424);
      END_STATE();
    case 1281:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'E') ADVANCE(1329);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1423);
      if (set_contains(sym_key_string_text_character_set_1, 763, lookahead)) ADVANCE(1424);
      END_STATE();
    case 1282:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'E') ADVANCE(1012);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1423);
      if (set_contains(sym_key_string_text_character_set_1, 763, lookahead)) ADVANCE(1424);
      END_STATE();
    case 1283:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'E') ADVANCE(1004);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1423);
      if (set_contains(sym_key_string_text_character_set_1, 763, lookahead)) ADVANCE(1424);
      END_STATE();
    case 1284:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'E') ADVANCE(998);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1423);
      if (set_contains(sym_key_string_text_character_set_1, 763, lookahead)) ADVANCE(1424);
      END_STATE();
    case 1285:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'E') ADVANCE(1273);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1423);
      if (set_contains(sym_key_string_text_character_set_1, 763, lookahead)) ADVANCE(1424);
      END_STATE();
    case 1286:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'E') ADVANCE(1328);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1423);
      if (set_contains(sym_key_string_text_character_set_1, 763, lookahead)) ADVANCE(1424);
      END_STATE();
    case 1287:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'F') ADVANCE(1294);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1423);
      if (set_contains(sym_key_string_text_character_set_1, 763, lookahead)) ADVANCE(1424);
      END_STATE();
    case 1288:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'F') ADVANCE(1382);
      if (lookahead == ']') ADVANCE(1101);
      if (set_contains(sym_key_string_text_character_set_1, 763, lookahead)) ADVANCE(1424);
      END_STATE();
    case 1289:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'G') ADVANCE(1282);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1423);
      if (set_contains(sym_key_string_text_character_set_1, 763, lookahead)) ADVANCE(1424);
      END_STATE();
    case 1290:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'H') ADVANCE(1006);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1423);
      if (set_contains(sym_key_string_text_character_set_1, 763, lookahead)) ADVANCE(1424);
      END_STATE();
    case 1291:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'I') ADVANCE(1281);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1423);
      if (set_contains(sym_key_string_text_character_set_1, 763, lookahead)) ADVANCE(1424);
      END_STATE();
    case 1292:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'I') ADVANCE(1302);
      if (lookahead == 'O') ADVANCE(1270);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1423);
      if (set_contains(sym_key_string_text_character_set_1, 763, lookahead)) ADVANCE(1424);
      END_STATE();
    case 1293:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'I') ADVANCE(1306);
      if (lookahead == 'O') ADVANCE(1271);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1423);
      if (set_contains(sym_key_string_text_character_set_1, 763, lookahead)) ADVANCE(1424);
      END_STATE();
    case 1294:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'I') ADVANCE(1305);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1423);
      if (set_contains(sym_key_string_text_character_set_1, 763, lookahead)) ADVANCE(1424);
      END_STATE();
    case 1295:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'I') ADVANCE(1311);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1423);
      if (set_contains(sym_key_string_text_character_set_1, 763, lookahead)) ADVANCE(1424);
      END_STATE();
    case 1296:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'K') ADVANCE(1008);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1423);
      if (set_contains(sym_key_string_text_character_set_1, 763, lookahead)) ADVANCE(1424);
      END_STATE();
    case 1297:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'K') ADVANCE(1014);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1423);
      if (set_contains(sym_key_string_text_character_set_1, 763, lookahead)) ADVANCE(1424);
      END_STATE();
    case 1298:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'K') ADVANCE(1010);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1423);
      if (set_contains(sym_key_string_text_character_set_1, 763, lookahead)) ADVANCE(1424);
      END_STATE();
    case 1299:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'K') ADVANCE(1016);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1423);
      if (set_contains(sym_key_string_text_character_set_1, 763, lookahead)) ADVANCE(1424);
      END_STATE();
    case 1300:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'L') ADVANCE(1286);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1423);
      if (set_contains(sym_key_string_text_character_set_1, 763, lookahead)) ADVANCE(1424);
      END_STATE();
    case 1301:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'L') ADVANCE(1293);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1423);
      if (set_contains(sym_key_string_text_character_set_1, 763, lookahead)) ADVANCE(1424);
      END_STATE();
    case 1302:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'N') ADVANCE(1296);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1423);
      if (set_contains(sym_key_string_text_character_set_1, 763, lookahead)) ADVANCE(1424);
      END_STATE();
    case 1303:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'N') ADVANCE(1301);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1423);
      if (set_contains(sym_key_string_text_character_set_1, 763, lookahead)) ADVANCE(1424);
      END_STATE();
    case 1304:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'N') ADVANCE(1319);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1423);
      if (set_contains(sym_key_string_text_character_set_1, 763, lookahead)) ADVANCE(1424);
      END_STATE();
    case 1305:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'N') ADVANCE(1275);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1423);
      if (set_contains(sym_key_string_text_character_set_1, 763, lookahead)) ADVANCE(1424);
      END_STATE();
    case 1306:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'N') ADVANCE(1298);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1423);
      if (set_contains(sym_key_string_text_character_set_1, 763, lookahead)) ADVANCE(1424);
      END_STATE();
    case 1307:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'N') ADVANCE(1308);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1423);
      if (set_contains(sym_key_string_text_character_set_1, 763, lookahead)) ADVANCE(1424);
      END_STATE();
    case 1308:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'N') ADVANCE(1285);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1423);
      if (set_contains(sym_key_string_text_character_set_1, 763, lookahead)) ADVANCE(1424);
      END_STATE();
    case 1309:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'O') ADVANCE(1307);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1423);
      if (set_contains(sym_key_string_text_character_set_1, 763, lookahead)) ADVANCE(1424);
      END_STATE();
    case 1310:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'O') ADVANCE(1313);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1423);
      if (set_contains(sym_key_string_text_character_set_1, 763, lookahead)) ADVANCE(1424);
      END_STATE();
    case 1311:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'O') ADVANCE(1304);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1423);
      if (set_contains(sym_key_string_text_character_set_1, 763, lookahead)) ADVANCE(1424);
      END_STATE();
    case 1312:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'P') ADVANCE(1087);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1423);
      if (set_contains(sym_key_string_text_character_set_1, 763, lookahead)) ADVANCE(1424);
      END_STATE();
    case 1313:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'P') ADVANCE(1287);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1423);
      if (set_contains(sym_key_string_text_character_set_1, 763, lookahead)) ADVANCE(1424);
      END_STATE();
    case 1314:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'P') ADVANCE(1342);
      if (lookahead == ']') ADVANCE(1097);
      if (set_contains(sym_key_string_text_character_set_1, 763, lookahead)) ADVANCE(1424);
      END_STATE();
    case 1315:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'P') ADVANCE(1326);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1423);
      if (set_contains(sym_key_string_text_character_set_1, 763, lookahead)) ADVANCE(1424);
      END_STATE();
    case 1316:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'P') ADVANCE(1348);
      if (set_contains(sym_key_string_text_character_set_1, 763, lookahead)) ADVANCE(1424);
      END_STATE();
    case 1317:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'R') ADVANCE(1289);
      if (lookahead == 'T') ADVANCE(996);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1423);
      if (set_contains(sym_key_string_text_character_set_1, 763, lookahead)) ADVANCE(1424);
      END_STATE();
    case 1318:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'R') ADVANCE(1264);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1423);
      if (set_contains(sym_key_string_text_character_set_1, 763, lookahead)) ADVANCE(1424);
      END_STATE();
    case 1319:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'S') ADVANCE(1002);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1423);
      if (set_contains(sym_key_string_text_character_set_1, 763, lookahead)) ADVANCE(1424);
      END_STATE();
    case 1320:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'S') ADVANCE(1413);
      if (lookahead == ']') ADVANCE(1093);
      if (set_contains(sym_key_string_text_character_set_1, 763, lookahead)) ADVANCE(1424);
      END_STATE();
    case 1321:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'S') ADVANCE(1323);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1423);
      if (set_contains(sym_key_string_text_character_set_1, 763, lookahead)) ADVANCE(1424);
      END_STATE();
    case 1322:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'T') ADVANCE(990);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1423);
      if (set_contains(sym_key_string_text_character_set_1, 763, lookahead)) ADVANCE(1424);
      END_STATE();
    case 1323:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'T') ADVANCE(994);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1423);
      if (set_contains(sym_key_string_text_character_set_1, 763, lookahead)) ADVANCE(1424);
      END_STATE();
    case 1324:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'T') ADVANCE(1000);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1423);
      if (set_contains(sym_key_string_text_character_set_1, 763, lookahead)) ADVANCE(1424);
      END_STATE();
    case 1325:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'T') ADVANCE(1312);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1423);
      if (set_contains(sym_key_string_text_character_set_1, 763, lookahead)) ADVANCE(1424);
      END_STATE();
    case 1326:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'T') ADVANCE(1295);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1423);
      if (set_contains(sym_key_string_text_character_set_1, 763, lookahead)) ADVANCE(1424);
      END_STATE();
    case 1327:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'T') ADVANCE(1269);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1423);
      if (set_contains(sym_key_string_text_character_set_1, 763, lookahead)) ADVANCE(1424);
      END_STATE();
    case 1328:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'T') ADVANCE(1284);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1423);
      if (set_contains(sym_key_string_text_character_set_1, 763, lookahead)) ADVANCE(1424);
      END_STATE();
    case 1329:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'W') ADVANCE(1020);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1423);
      if (set_contains(sym_key_string_text_character_set_1, 763, lookahead)) ADVANCE(1424);
      END_STATE();
    case 1330:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == ']') ADVANCE(1105);
      if (set_contains(sym_key_string_text_character_set_1, 763, lookahead)) ADVANCE(1424);
      END_STATE();
    case 1331:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == ']') ADVANCE(1111);
      if (set_contains(sym_key_string_text_character_set_1, 763, lookahead)) ADVANCE(1424);
      END_STATE();
    case 1332:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == ']') ADVANCE(1091);
      if (set_contains(sym_key_string_text_character_set_1, 763, lookahead)) ADVANCE(1424);
      END_STATE();
    case 1333:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == ']') ADVANCE(1099);
      if (set_contains(sym_key_string_text_character_set_1, 763, lookahead)) ADVANCE(1424);
      END_STATE();
    case 1334:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == ']') ADVANCE(1103);
      if (set_contains(sym_key_string_text_character_set_1, 763, lookahead)) ADVANCE(1424);
      END_STATE();
    case 1335:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == ']') ADVANCE(1095);
      if (set_contains(sym_key_string_text_character_set_1, 763, lookahead)) ADVANCE(1424);
      END_STATE();
    case 1336:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == ']') ADVANCE(1109);
      if (set_contains(sym_key_string_text_character_set_1, 763, lookahead)) ADVANCE(1424);
      END_STATE();
    case 1337:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == ']') ADVANCE(1107);
      if (set_contains(sym_key_string_text_character_set_1, 763, lookahead)) ADVANCE(1424);
      END_STATE();
    case 1338:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'a') ADVANCE(1399);
      if (set_contains(sym_key_string_text_character_set_1, 763, lookahead)) ADVANCE(1424);
      END_STATE();
    case 1339:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'a') ADVANCE(1370);
      if (lookahead == 'i') ADVANCE(1368);
      if (set_contains(sym_key_string_text_character_set_1, 763, lookahead)) ADVANCE(1424);
      END_STATE();
    case 1340:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'a') ADVANCE(1396);
      if (set_contains(sym_key_string_text_character_set_1, 763, lookahead)) ADVANCE(1424);
      END_STATE();
    case 1341:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'a') ADVANCE(1374);
      if (set_contains(sym_key_string_text_character_set_1, 763, lookahead)) ADVANCE(1424);
      END_STATE();
    case 1342:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'a') ADVANCE(1388);
      if (set_contains(sym_key_string_text_character_set_1, 763, lookahead)) ADVANCE(1424);
      END_STATE();
    case 1343:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'a') ADVANCE(1391);
      if (set_contains(sym_key_string_text_character_set_1, 763, lookahead)) ADVANCE(1424);
      END_STATE();
    case 1344:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'a') ADVANCE(1411);
      if (set_contains(sym_key_string_text_character_set_1, 763, lookahead)) ADVANCE(1424);
      END_STATE();
    case 1345:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'a') ADVANCE(1334);
      if (set_contains(sym_key_string_text_character_set_1, 763, lookahead)) ADVANCE(1424);
      END_STATE();
    case 1346:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'a') ADVANCE(1384);
      if (set_contains(sym_key_string_text_character_set_1, 763, lookahead)) ADVANCE(1424);
      END_STATE();
    case 1347:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'a') ADVANCE(1375);
      if (set_contains(sym_key_string_text_character_set_1, 763, lookahead)) ADVANCE(1424);
      END_STATE();
    case 1348:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'a') ADVANCE(1395);
      if (set_contains(sym_key_string_text_character_set_1, 763, lookahead)) ADVANCE(1424);
      END_STATE();
    case 1349:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'c') ADVANCE(1265);
      if (set_contains(sym_key_string_text_character_set_1, 763, lookahead)) ADVANCE(1424);
      END_STATE();
    case 1350:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'e') ADVANCE(1421);
      if (set_contains(sym_key_string_text_character_set_1, 763, lookahead)) ADVANCE(1424);
      END_STATE();
    case 1351:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'e') ADVANCE(1262);
      if (set_contains(sym_key_string_text_character_set_1, 763, lookahead)) ADVANCE(1424);
      END_STATE();
    case 1352:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'e') ADVANCE(1499);
      if (set_contains(sym_key_string_text_character_set_1, 763, lookahead)) ADVANCE(1424);
      END_STATE();
    case 1353:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'e') ADVANCE(1501);
      if (set_contains(sym_key_string_text_character_set_1, 763, lookahead)) ADVANCE(1424);
      END_STATE();
    case 1354:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'e') ADVANCE(1259);
      if (set_contains(sym_key_string_text_character_set_1, 763, lookahead)) ADVANCE(1424);
      END_STATE();
    case 1355:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'e') ADVANCE(1387);
      if (set_contains(sym_key_string_text_character_set_1, 763, lookahead)) ADVANCE(1424);
      END_STATE();
    case 1356:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'e') ADVANCE(1397);
      if (set_contains(sym_key_string_text_character_set_1, 763, lookahead)) ADVANCE(1424);
      END_STATE();
    case 1357:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'e') ADVANCE(1393);
      if (set_contains(sym_key_string_text_character_set_1, 763, lookahead)) ADVANCE(1424);
      END_STATE();
    case 1358:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'e') ADVANCE(1404);
      if (set_contains(sym_key_string_text_character_set_1, 763, lookahead)) ADVANCE(1424);
      END_STATE();
    case 1359:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'g') ADVANCE(1316);
      if (set_contains(sym_key_string_text_character_set_1, 763, lookahead)) ADVANCE(1424);
      END_STATE();
    case 1360:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'h') ADVANCE(1332);
      if (set_contains(sym_key_string_text_character_set_1, 763, lookahead)) ADVANCE(1424);
      END_STATE();
    case 1361:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'i') ADVANCE(1349);
      if (set_contains(sym_key_string_text_character_set_1, 763, lookahead)) ADVANCE(1424);
      END_STATE();
    case 1362:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'i') ADVANCE(1385);
      if (set_contains(sym_key_string_text_character_set_1, 763, lookahead)) ADVANCE(1424);
      END_STATE();
    case 1363:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'i') ADVANCE(1376);
      if (set_contains(sym_key_string_text_character_set_1, 763, lookahead)) ADVANCE(1424);
      END_STATE();
    case 1364:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'i') ADVANCE(1379);
      if (set_contains(sym_key_string_text_character_set_1, 763, lookahead)) ADVANCE(1424);
      END_STATE();
    case 1365:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'i') ADVANCE(1356);
      if (set_contains(sym_key_string_text_character_set_1, 763, lookahead)) ADVANCE(1424);
      END_STATE();
    case 1366:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'k') ADVANCE(1365);
      if (set_contains(sym_key_string_text_character_set_1, 763, lookahead)) ADVANCE(1424);
      END_STATE();
    case 1367:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'l') ADVANCE(1177);
      if (set_contains(sym_key_string_text_character_set_1, 763, lookahead)) ADVANCE(1424);
      END_STATE();
    case 1368:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'l') ADVANCE(1354);
      if (set_contains(sym_key_string_text_character_set_1, 763, lookahead)) ADVANCE(1424);
      END_STATE();
    case 1369:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'l') ADVANCE(1367);
      if (set_contains(sym_key_string_text_character_set_1, 763, lookahead)) ADVANCE(1424);
      END_STATE();
    case 1370:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'l') ADVANCE(1401);
      if (set_contains(sym_key_string_text_character_set_1, 763, lookahead)) ADVANCE(1424);
      END_STATE();
    case 1371:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'l') ADVANCE(1410);
      if (set_contains(sym_key_string_text_character_set_1, 763, lookahead)) ADVANCE(1424);
      END_STATE();
    case 1372:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'm') ADVANCE(1314);
      if (set_contains(sym_key_string_text_character_set_1, 763, lookahead)) ADVANCE(1424);
      END_STATE();
    case 1373:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'm') ADVANCE(1276);
      if (set_contains(sym_key_string_text_character_set_1, 763, lookahead)) ADVANCE(1424);
      END_STATE();
    case 1374:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'm') ADVANCE(1400);
      if (set_contains(sym_key_string_text_character_set_1, 763, lookahead)) ADVANCE(1424);
      END_STATE();
    case 1375:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'm') ADVANCE(1402);
      if (set_contains(sym_key_string_text_character_set_1, 763, lookahead)) ADVANCE(1424);
      END_STATE();
    case 1376:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'n') ADVANCE(1359);
      if (set_contains(sym_key_string_text_character_set_1, 763, lookahead)) ADVANCE(1424);
      END_STATE();
    case 1377:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'n') ADVANCE(1398);
      if (set_contains(sym_key_string_text_character_set_1, 763, lookahead)) ADVANCE(1424);
      END_STATE();
    case 1378:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'o') ADVANCE(1366);
      if (set_contains(sym_key_string_text_character_set_1, 763, lookahead)) ADVANCE(1424);
      END_STATE();
    case 1379:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'o') ADVANCE(1377);
      if (set_contains(sym_key_string_text_character_set_1, 763, lookahead)) ADVANCE(1424);
      END_STATE();
    case 1380:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'o') ADVANCE(1386);
      if (set_contains(sym_key_string_text_character_set_1, 763, lookahead)) ADVANCE(1424);
      END_STATE();
    case 1381:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'o') ADVANCE(1378);
      if (set_contains(sym_key_string_text_character_set_1, 763, lookahead)) ADVANCE(1424);
      END_STATE();
    case 1382:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'o') ADVANCE(1390);
      if (set_contains(sym_key_string_text_character_set_1, 763, lookahead)) ADVANCE(1424);
      END_STATE();
    case 1383:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'p') ADVANCE(1409);
      if (set_contains(sym_key_string_text_character_set_1, 763, lookahead)) ADVANCE(1424);
      END_STATE();
    case 1384:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'p') ADVANCE(1412);
      if (set_contains(sym_key_string_text_character_set_1, 763, lookahead)) ADVANCE(1424);
      END_STATE();
    case 1385:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'p') ADVANCE(1343);
      if (set_contains(sym_key_string_text_character_set_1, 763, lookahead)) ADVANCE(1424);
      END_STATE();
    case 1386:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'r') ADVANCE(1372);
      if (set_contains(sym_key_string_text_character_set_1, 763, lookahead)) ADVANCE(1424);
      END_STATE();
    case 1387:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'r') ADVANCE(1422);
      if (set_contains(sym_key_string_text_character_set_1, 763, lookahead)) ADVANCE(1424);
      END_STATE();
    case 1388:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'r') ADVANCE(1341);
      if (set_contains(sym_key_string_text_character_set_1, 763, lookahead)) ADVANCE(1424);
      END_STATE();
    case 1389:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'r') ADVANCE(1419);
      if (set_contains(sym_key_string_text_character_set_1, 763, lookahead)) ADVANCE(1424);
      END_STATE();
    case 1390:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'r') ADVANCE(1373);
      if (set_contains(sym_key_string_text_character_set_1, 763, lookahead)) ADVANCE(1424);
      END_STATE();
    case 1391:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'r') ADVANCE(1408);
      if (set_contains(sym_key_string_text_character_set_1, 763, lookahead)) ADVANCE(1424);
      END_STATE();
    case 1392:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'r') ADVANCE(1363);
      if (set_contains(sym_key_string_text_character_set_1, 763, lookahead)) ADVANCE(1424);
      END_STATE();
    case 1393:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'r') ADVANCE(1414);
      if (set_contains(sym_key_string_text_character_set_1, 763, lookahead)) ADVANCE(1424);
      END_STATE();
    case 1394:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'r') ADVANCE(1358);
      if (set_contains(sym_key_string_text_character_set_1, 763, lookahead)) ADVANCE(1424);
      END_STATE();
    case 1395:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'r') ADVANCE(1347);
      if (set_contains(sym_key_string_text_character_set_1, 763, lookahead)) ADVANCE(1424);
      END_STATE();
    case 1396:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 's') ADVANCE(1361);
      if (set_contains(sym_key_string_text_character_set_1, 763, lookahead)) ADVANCE(1424);
      END_STATE();
    case 1397:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 's') ADVANCE(1330);
      if (set_contains(sym_key_string_text_character_set_1, 763, lookahead)) ADVANCE(1424);
      END_STATE();
    case 1398:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 's') ADVANCE(1331);
      if (set_contains(sym_key_string_text_character_set_1, 763, lookahead)) ADVANCE(1424);
      END_STATE();
    case 1399:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 's') ADVANCE(1351);
      if (set_contains(sym_key_string_text_character_set_1, 763, lookahead)) ADVANCE(1424);
      END_STATE();
    case 1400:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 's') ADVANCE(1333);
      if (set_contains(sym_key_string_text_character_set_1, 763, lookahead)) ADVANCE(1424);
      END_STATE();
    case 1401:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 's') ADVANCE(1353);
      if (set_contains(sym_key_string_text_character_set_1, 763, lookahead)) ADVANCE(1424);
      END_STATE();
    case 1402:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 's') ADVANCE(1335);
      if (set_contains(sym_key_string_text_character_set_1, 763, lookahead)) ADVANCE(1424);
      END_STATE();
    case 1403:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 's') ADVANCE(1336);
      if (set_contains(sym_key_string_text_character_set_1, 763, lookahead)) ADVANCE(1424);
      END_STATE();
    case 1404:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 's') ADVANCE(1337);
      if (set_contains(sym_key_string_text_character_set_1, 763, lookahead)) ADVANCE(1424);
      END_STATE();
    case 1405:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 's') ADVANCE(1357);
      if (set_contains(sym_key_string_text_character_set_1, 763, lookahead)) ADVANCE(1424);
      END_STATE();
    case 1406:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 's') ADVANCE(1405);
      if (set_contains(sym_key_string_text_character_set_1, 763, lookahead)) ADVANCE(1424);
      END_STATE();
    case 1407:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 't') ADVANCE(1360);
      if (set_contains(sym_key_string_text_character_set_1, 763, lookahead)) ADVANCE(1424);
      END_STATE();
    case 1408:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 't') ADVANCE(1288);
      if (set_contains(sym_key_string_text_character_set_1, 763, lookahead)) ADVANCE(1424);
      END_STATE();
    case 1409:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 't') ADVANCE(1364);
      if (set_contains(sym_key_string_text_character_set_1, 763, lookahead)) ADVANCE(1424);
      END_STATE();
    case 1410:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 't') ADVANCE(1362);
      if (set_contains(sym_key_string_text_character_set_1, 763, lookahead)) ADVANCE(1424);
      END_STATE();
    case 1411:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 't') ADVANCE(1345);
      if (set_contains(sym_key_string_text_character_set_1, 763, lookahead)) ADVANCE(1424);
      END_STATE();
    case 1412:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 't') ADVANCE(1420);
      if (set_contains(sym_key_string_text_character_set_1, 763, lookahead)) ADVANCE(1424);
      END_STATE();
    case 1413:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 't') ADVANCE(1392);
      if (set_contains(sym_key_string_text_character_set_1, 763, lookahead)) ADVANCE(1424);
      END_STATE();
    case 1414:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 't') ADVANCE(1403);
      if (set_contains(sym_key_string_text_character_set_1, 763, lookahead)) ADVANCE(1424);
      END_STATE();
    case 1415:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'u') ADVANCE(1355);
      if (set_contains(sym_key_string_text_character_set_1, 763, lookahead)) ADVANCE(1424);
      END_STATE();
    case 1416:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'u') ADVANCE(1369);
      if (set_contains(sym_key_string_text_character_set_1, 763, lookahead)) ADVANCE(1424);
      END_STATE();
    case 1417:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'u') ADVANCE(1407);
      if (set_contains(sym_key_string_text_character_set_1, 763, lookahead)) ADVANCE(1424);
      END_STATE();
    case 1418:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'u') ADVANCE(1371);
      if (set_contains(sym_key_string_text_character_set_1, 763, lookahead)) ADVANCE(1424);
      END_STATE();
    case 1419:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'u') ADVANCE(1352);
      if (set_contains(sym_key_string_text_character_set_1, 763, lookahead)) ADVANCE(1424);
      END_STATE();
    case 1420:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'u') ADVANCE(1394);
      if (set_contains(sym_key_string_text_character_set_1, 763, lookahead)) ADVANCE(1424);
      END_STATE();
    case 1421:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'x') ADVANCE(1258);
      if (set_contains(sym_key_string_text_character_set_1, 763, lookahead)) ADVANCE(1424);
      END_STATE();
    case 1422:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'y') ADVANCE(1320);
      if (set_contains(sym_key_string_text_character_set_1, 763, lookahead)) ADVANCE(1424);
      END_STATE();
    case 1423:
      ACCEPT_TOKEN(sym_key_string_text);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1423);
      if (set_contains(sym_key_string_text_character_set_1, 763, lookahead)) ADVANCE(1424);
      END_STATE();
    case 1424:
      ACCEPT_TOKEN(sym_key_string_text);
      if (set_contains(sym_key_string_text_character_set_1, 763, lookahead)) ADVANCE(1424);
      END_STATE();
    case 1425:
      ACCEPT_TOKEN(sym_key_string_escaped_char);
      END_STATE();
    case 1426:
      ACCEPT_TOKEN(sym_xml_value_string_text);
      if (lookahead == '\n') ADVANCE(1428);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(1426);
      END_STATE();
    case 1427:
      ACCEPT_TOKEN(sym_xml_value_string_text);
      if (lookahead == '#') ADVANCE(1426);
      if (set_contains(extras_character_set_2, 9, lookahead)) ADVANCE(1427);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(1428);
      END_STATE();
    case 1428:
      ACCEPT_TOKEN(sym_xml_value_string_text);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(1428);
      END_STATE();
    case 1429:
      ACCEPT_TOKEN(aux_sym_value_string_text_token1);
      END_STATE();
    case 1430:
      ACCEPT_TOKEN(aux_sym_value_string_text_token1);
      if (lookahead == '\n') ADVANCE(985);
      if (lookahead == '"') ADVANCE(1196);
      if (lookahead == '-') ADVANCE(1439);
      if (lookahead == 'f') ADVANCE(1434);
      if (lookahead == 'n') ADVANCE(1437);
      if (lookahead == 't') ADVANCE(1436);
      if (lookahead == '{') ADVANCE(1438);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1433);
      if (set_contains(extras_character_set_2, 9, lookahead)) ADVANCE(1430);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(1429);
      END_STATE();
    case 1431:
      ACCEPT_TOKEN(aux_sym_value_string_text_token1);
      if (lookahead == '\n') ADVANCE(987);
      if (lookahead == '{') ADVANCE(1438);
      if (set_contains(extras_character_set_2, 9, lookahead)) ADVANCE(1431);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(1429);
      END_STATE();
    case 1432:
      ACCEPT_TOKEN(aux_sym_value_string_text_token1);
      if (lookahead == '\n') ADVANCE(988);
      if (lookahead == 'f') ADVANCE(1435);
      if (lookahead == '{') ADVANCE(1438);
      if (set_contains(extras_character_set_2, 9, lookahead)) ADVANCE(1432);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(1429);
      END_STATE();
    case 1433:
      ACCEPT_TOKEN(aux_sym_value_string_text_token1);
      if (lookahead == '.') ADVANCE(963);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1568);
      END_STATE();
    case 1434:
      ACCEPT_TOKEN(aux_sym_value_string_text_token1);
      if (lookahead == 'a') ADVANCE(510);
      END_STATE();
    case 1435:
      ACCEPT_TOKEN(aux_sym_value_string_text_token1);
      if (lookahead == 'i') ADVANCE(492);
      END_STATE();
    case 1436:
      ACCEPT_TOKEN(aux_sym_value_string_text_token1);
      if (lookahead == 'r') ADVANCE(832);
      END_STATE();
    case 1437:
      ACCEPT_TOKEN(aux_sym_value_string_text_token1);
      if (lookahead == 'u') ADVANCE(497);
      END_STATE();
    case 1438:
      ACCEPT_TOKEN(aux_sym_value_string_text_token1);
      if (lookahead == '{') ADVANCE(1502);
      END_STATE();
    case 1439:
      ACCEPT_TOKEN(aux_sym_value_string_text_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1568);
      END_STATE();
    case 1440:
      ACCEPT_TOKEN(sym_value_string_escaped_char);
      END_STATE();
    case 1441:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 1442:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      if (lookahead == '`') ADVANCE(152);
      END_STATE();
    case 1443:
      ACCEPT_TOKEN(aux_sym_oneline_string_text_token1);
      if (lookahead == '#') ADVANCE(1444);
      if (set_contains(extras_character_set_1, 10, lookahead)) ADVANCE(1443);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != '{') ADVANCE(1444);
      END_STATE();
    case 1444:
      ACCEPT_TOKEN(aux_sym_oneline_string_text_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != '{') ADVANCE(1444);
      END_STATE();
    case 1445:
      ACCEPT_TOKEN(sym_oneline_string_escaped_char);
      END_STATE();
    case 1446:
      ACCEPT_TOKEN(anon_sym_BQUOTE_BQUOTE_BQUOTE);
      END_STATE();
    case 1447:
      ACCEPT_TOKEN(anon_sym_raw);
      if (lookahead == 'b') ADVANCE(886);
      END_STATE();
    case 1448:
      ACCEPT_TOKEN(anon_sym_raw);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '`') ADVANCE(1480);
      END_STATE();
    case 1449:
      ACCEPT_TOKEN(anon_sym_base64);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '`') ADVANCE(1480);
      END_STATE();
    case 1450:
      ACCEPT_TOKEN(anon_sym_hex);
      if (lookahead == ',') ADVANCE(1249);
      END_STATE();
    case 1451:
      ACCEPT_TOKEN(anon_sym_hex);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '`') ADVANCE(1480);
      END_STATE();
    case 1452:
      ACCEPT_TOKEN(anon_sym_json);
      if (lookahead == 'p') ADVANCE(196);
      END_STATE();
    case 1453:
      ACCEPT_TOKEN(anon_sym_json);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '`') ADVANCE(1480);
      END_STATE();
    case 1454:
      ACCEPT_TOKEN(anon_sym_xml);
      END_STATE();
    case 1455:
      ACCEPT_TOKEN(anon_sym_xml);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '`') ADVANCE(1480);
      END_STATE();
    case 1456:
      ACCEPT_TOKEN(anon_sym_graphql);
      END_STATE();
    case 1457:
      ACCEPT_TOKEN(anon_sym_graphql);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '`') ADVANCE(1480);
      END_STATE();
    case 1458:
      ACCEPT_TOKEN(aux_sym_multiline_string_type_token1);
      ADVANCE_MAP(
        '\n', 986,
        '#', 1479,
        'b', 1463,
        'g', 1474,
        'h', 1464,
        'j', 1475,
        'r', 1461,
        'x', 1469,
      );
      if (lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200b) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x2060 ||
          lookahead == 0x3000 ||
          lookahead == 0xfeff) ADVANCE(1458);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '`') ADVANCE(1480);
      END_STATE();
    case 1459:
      ACCEPT_TOKEN(aux_sym_multiline_string_type_token1);
      if (lookahead == '4') ADVANCE(1449);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '`') ADVANCE(1480);
      END_STATE();
    case 1460:
      ACCEPT_TOKEN(aux_sym_multiline_string_type_token1);
      if (lookahead == '6') ADVANCE(1459);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '`') ADVANCE(1480);
      END_STATE();
    case 1461:
      ACCEPT_TOKEN(aux_sym_multiline_string_type_token1);
      if (lookahead == 'a') ADVANCE(1477);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '`' &&
          lookahead != 'a') ADVANCE(1480);
      END_STATE();
    case 1462:
      ACCEPT_TOKEN(aux_sym_multiline_string_type_token1);
      if (lookahead == 'a') ADVANCE(1472);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '`' &&
          lookahead != 'a') ADVANCE(1480);
      END_STATE();
    case 1463:
      ACCEPT_TOKEN(aux_sym_multiline_string_type_token1);
      if (lookahead == 'a') ADVANCE(1476);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '`' &&
          lookahead != 'a') ADVANCE(1480);
      END_STATE();
    case 1464:
      ACCEPT_TOKEN(aux_sym_multiline_string_type_token1);
      if (lookahead == 'e') ADVANCE(1478);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '`') ADVANCE(1480);
      END_STATE();
    case 1465:
      ACCEPT_TOKEN(aux_sym_multiline_string_type_token1);
      if (lookahead == 'e') ADVANCE(1460);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '`') ADVANCE(1480);
      END_STATE();
    case 1466:
      ACCEPT_TOKEN(aux_sym_multiline_string_type_token1);
      if (lookahead == 'h') ADVANCE(1473);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '`') ADVANCE(1480);
      END_STATE();
    case 1467:
      ACCEPT_TOKEN(aux_sym_multiline_string_type_token1);
      if (lookahead == 'l') ADVANCE(1455);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '`') ADVANCE(1480);
      END_STATE();
    case 1468:
      ACCEPT_TOKEN(aux_sym_multiline_string_type_token1);
      if (lookahead == 'l') ADVANCE(1457);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '`') ADVANCE(1480);
      END_STATE();
    case 1469:
      ACCEPT_TOKEN(aux_sym_multiline_string_type_token1);
      if (lookahead == 'm') ADVANCE(1467);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '`') ADVANCE(1480);
      END_STATE();
    case 1470:
      ACCEPT_TOKEN(aux_sym_multiline_string_type_token1);
      if (lookahead == 'n') ADVANCE(1453);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '`') ADVANCE(1480);
      END_STATE();
    case 1471:
      ACCEPT_TOKEN(aux_sym_multiline_string_type_token1);
      if (lookahead == 'o') ADVANCE(1470);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '`') ADVANCE(1480);
      END_STATE();
    case 1472:
      ACCEPT_TOKEN(aux_sym_multiline_string_type_token1);
      if (lookahead == 'p') ADVANCE(1466);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '`') ADVANCE(1480);
      END_STATE();
    case 1473:
      ACCEPT_TOKEN(aux_sym_multiline_string_type_token1);
      if (lookahead == 'q') ADVANCE(1468);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '`') ADVANCE(1480);
      END_STATE();
    case 1474:
      ACCEPT_TOKEN(aux_sym_multiline_string_type_token1);
      if (lookahead == 'r') ADVANCE(1462);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '`') ADVANCE(1480);
      END_STATE();
    case 1475:
      ACCEPT_TOKEN(aux_sym_multiline_string_type_token1);
      if (lookahead == 's') ADVANCE(1471);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '`') ADVANCE(1480);
      END_STATE();
    case 1476:
      ACCEPT_TOKEN(aux_sym_multiline_string_type_token1);
      if (lookahead == 's') ADVANCE(1465);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '`') ADVANCE(1480);
      END_STATE();
    case 1477:
      ACCEPT_TOKEN(aux_sym_multiline_string_type_token1);
      if (lookahead == 'w') ADVANCE(1448);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '`') ADVANCE(1480);
      END_STATE();
    case 1478:
      ACCEPT_TOKEN(aux_sym_multiline_string_type_token1);
      if (lookahead == 'x') ADVANCE(1451);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '`') ADVANCE(1480);
      END_STATE();
    case 1479:
      ACCEPT_TOKEN(aux_sym_multiline_string_type_token1);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == '`') ADVANCE(1579);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(1479);
      END_STATE();
    case 1480:
      ACCEPT_TOKEN(aux_sym_multiline_string_type_token1);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '`') ADVANCE(1480);
      END_STATE();
    case 1481:
      ACCEPT_TOKEN(aux_sym_multiline_string_content_token1);
      if (lookahead == '\n') ADVANCE(1483);
      if (lookahead != 0 &&
          lookahead != '`' &&
          lookahead != '{') ADVANCE(1481);
      END_STATE();
    case 1482:
      ACCEPT_TOKEN(aux_sym_multiline_string_content_token1);
      if (lookahead == '#') ADVANCE(1481);
      if (set_contains(extras_character_set_2, 9, lookahead)) ADVANCE(1482);
      if (lookahead != 0 &&
          lookahead != '`' &&
          lookahead != '{') ADVANCE(1483);
      END_STATE();
    case 1483:
      ACCEPT_TOKEN(aux_sym_multiline_string_content_token1);
      if (lookahead != 0 &&
          lookahead != '`' &&
          lookahead != '{') ADVANCE(1483);
      END_STATE();
    case 1484:
      ACCEPT_TOKEN(aux_sym_multiline_string_content_token2);
      if (lookahead == '`') ADVANCE(152);
      END_STATE();
    case 1485:
      ACCEPT_TOKEN(aux_sym_multiline_string_content_token2);
      if (lookahead == '{') ADVANCE(1502);
      END_STATE();
    case 1486:
      ACCEPT_TOKEN(aux_sym_raw_multiline_string_content_token1);
      if (lookahead == '\n') ADVANCE(1488);
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(1486);
      END_STATE();
    case 1487:
      ACCEPT_TOKEN(aux_sym_raw_multiline_string_content_token1);
      if (lookahead == '#') ADVANCE(1486);
      if (set_contains(extras_character_set_2, 9, lookahead)) ADVANCE(1487);
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(1488);
      END_STATE();
    case 1488:
      ACCEPT_TOKEN(aux_sym_raw_multiline_string_content_token1);
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(1488);
      END_STATE();
    case 1489:
      ACCEPT_TOKEN(anon_sym_BQUOTE2);
      if (lookahead == '`') ADVANCE(152);
      END_STATE();
    case 1490:
      ACCEPT_TOKEN(sym_filename_escaped_char);
      END_STATE();
    case 1491:
      ACCEPT_TOKEN(aux_sym__filename_continue_token1);
      END_STATE();
    case 1492:
      ACCEPT_TOKEN(anon_sym_LBRACE2);
      if (lookahead == '{') ADVANCE(1502);
      END_STATE();
    case 1493:
      ACCEPT_TOKEN(anon_sym_LBRACE2);
      if (lookahead == '{') ADVANCE(1256);
      END_STATE();
    case 1494:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 1495:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 1496:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 1497:
      ACCEPT_TOKEN(sym_json_string_escaped_char);
      END_STATE();
    case 1498:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 1499:
      ACCEPT_TOKEN(anon_sym_true);
      if (set_contains(sym_key_string_text_character_set_1, 763, lookahead)) ADVANCE(1424);
      END_STATE();
    case 1500:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 1501:
      ACCEPT_TOKEN(anon_sym_false);
      if (set_contains(sym_key_string_text_character_set_1, 763, lookahead)) ADVANCE(1424);
      END_STATE();
    case 1502:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE2);
      END_STATE();
    case 1503:
      ACCEPT_TOKEN(anon_sym_newDate);
      END_STATE();
    case 1504:
      ACCEPT_TOKEN(anon_sym_newDate);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1516);
      END_STATE();
    case 1505:
      ACCEPT_TOKEN(anon_sym_newUuid);
      END_STATE();
    case 1506:
      ACCEPT_TOKEN(anon_sym_newUuid);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1516);
      END_STATE();
    case 1507:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'D') ADVANCE(1508);
      if (lookahead == 'U') ADVANCE(1514);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1516);
      END_STATE();
    case 1508:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'a') ADVANCE(1513);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1516);
      END_STATE();
    case 1509:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'd') ADVANCE(1506);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1516);
      END_STATE();
    case 1510:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'e') ADVANCE(1515);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1516);
      END_STATE();
    case 1511:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'e') ADVANCE(1504);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1516);
      END_STATE();
    case 1512:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'i') ADVANCE(1509);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1516);
      END_STATE();
    case 1513:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 't') ADVANCE(1511);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1516);
      END_STATE();
    case 1514:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'u') ADVANCE(1512);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1516);
      END_STATE();
    case 1515:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'w') ADVANCE(1507);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1516);
      END_STATE();
    case 1516:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1516);
      END_STATE();
    case 1517:
      ACCEPT_TOKEN(anon_sym_base64Decode);
      END_STATE();
    case 1518:
      ACCEPT_TOKEN(anon_sym_base64Encode);
      END_STATE();
    case 1519:
      ACCEPT_TOKEN(anon_sym_base64UrlSafeDecode);
      END_STATE();
    case 1520:
      ACCEPT_TOKEN(anon_sym_base64UrlSafeEncode);
      END_STATE();
    case 1521:
      ACCEPT_TOKEN(anon_sym_first);
      END_STATE();
    case 1522:
      ACCEPT_TOKEN(anon_sym_last);
      END_STATE();
    case 1523:
      ACCEPT_TOKEN(anon_sym_toFloat);
      END_STATE();
    case 1524:
      ACCEPT_TOKEN(anon_sym_toHex);
      END_STATE();
    case 1525:
      ACCEPT_TOKEN(anon_sym_toString);
      END_STATE();
    case 1526:
      ACCEPT_TOKEN(anon_sym_utf8Decode);
      END_STATE();
    case 1527:
      ACCEPT_TOKEN(anon_sym_utf8Encode);
      END_STATE();
    case 1528:
      ACCEPT_TOKEN(anon_sym_count);
      END_STATE();
    case 1529:
      ACCEPT_TOKEN(anon_sym_urlEncode);
      END_STATE();
    case 1530:
      ACCEPT_TOKEN(anon_sym_urlDecode);
      END_STATE();
    case 1531:
      ACCEPT_TOKEN(anon_sym_toInt);
      END_STATE();
    case 1532:
      ACCEPT_TOKEN(anon_sym_htmlEscape);
      END_STATE();
    case 1533:
      ACCEPT_TOKEN(anon_sym_htmlUnescape);
      END_STATE();
    case 1534:
      ACCEPT_TOKEN(anon_sym_daysAfterNow);
      END_STATE();
    case 1535:
      ACCEPT_TOKEN(anon_sym_daysBeforeNow);
      END_STATE();
    case 1536:
      ACCEPT_TOKEN(anon_sym_charsetDecode);
      END_STATE();
    case 1537:
      ACCEPT_TOKEN(anon_sym_dateFormat);
      END_STATE();
    case 1538:
      ACCEPT_TOKEN(anon_sym_urlQueryParam);
      END_STATE();
    case 1539:
      ACCEPT_TOKEN(anon_sym_decode);
      END_STATE();
    case 1540:
      ACCEPT_TOKEN(anon_sym_format);
      END_STATE();
    case 1541:
      ACCEPT_TOKEN(anon_sym_toDate);
      END_STATE();
    case 1542:
      ACCEPT_TOKEN(anon_sym_nth);
      END_STATE();
    case 1543:
      ACCEPT_TOKEN(anon_sym_replace);
      if (lookahead == 'R') ADVANCE(386);
      END_STATE();
    case 1544:
      ACCEPT_TOKEN(anon_sym_replaceRegex);
      END_STATE();
    case 1545:
      ACCEPT_TOKEN(anon_sym_split);
      END_STATE();
    case 1546:
      ACCEPT_TOKEN(sym__alphanum);
      END_STATE();
    case 1547:
      ACCEPT_TOKEN(sym__alphanum);
      if (lookahead == 'a') ADVANCE(769);
      if (lookahead == 'd') ADVANCE(90);
      END_STATE();
    case 1548:
      ACCEPT_TOKEN(sym__alphanum);
      if (lookahead == 'a') ADVANCE(862);
      if (lookahead == 'e') ADVANCE(276);
      END_STATE();
    case 1549:
      ACCEPT_TOKEN(sym__alphanum);
      if (lookahead == 'a') ADVANCE(717);
      if (lookahead == 'e') ADVANCE(715);
      if (lookahead == 'i') ADVANCE(518);
      if (lookahead == 'o') ADVANCE(273);
      END_STATE();
    case 1550:
      ACCEPT_TOKEN(sym__alphanum);
      if (lookahead == 'a') ADVANCE(649);
      if (lookahead == 'e') ADVANCE(632);
      END_STATE();
    case 1551:
      ACCEPT_TOKEN(sym__alphanum);
      if (lookahead == 'a') ADVANCE(744);
      if (lookahead == 'i') ADVANCE(543);
      if (lookahead == 'r') ADVANCE(567);
      END_STATE();
    case 1552:
      ACCEPT_TOKEN(sym__alphanum);
      if (lookahead == 'e') ADVANCE(161);
      if (lookahead == 't') ADVANCE(520);
      END_STATE();
    case 1553:
      ACCEPT_TOKEN(sym__alphanum);
      if (lookahead == 'e') ADVANCE(876);
      END_STATE();
    case 1554:
      ACCEPT_TOKEN(sym__alphanum);
      if (lookahead == 'e') ADVANCE(415);
      if (lookahead == 'o') ADVANCE(743);
      if (lookahead == 't') ADVANCE(421);
      if (lookahead == 'u') ADVANCE(497);
      END_STATE();
    case 1555:
      ACCEPT_TOKEN(sym__alphanum);
      if (lookahead == 'h') ADVANCE(168);
      if (lookahead == 'o') ADVANCE(515);
      END_STATE();
    case 1556:
      ACCEPT_TOKEN(sym__alphanum);
      if (lookahead == 'h') ADVANCE(153);
      if (lookahead == 'k') ADVANCE(439);
      if (lookahead == 'p') ADVANCE(508);
      if (lookahead == 't') ADVANCE(154);
      END_STATE();
    case 1557:
      ACCEPT_TOKEN(sym__alphanum);
      if (lookahead == 'i') ADVANCE(412);
      if (lookahead == 'u') ADVANCE(677);
      END_STATE();
    case 1558:
      ACCEPT_TOKEN(sym__alphanum);
      if (lookahead == 'i') ADVANCE(493);
      if (lookahead == 'o') ADVANCE(642);
      END_STATE();
    case 1559:
      ACCEPT_TOKEN(sym__alphanum);
      if (lookahead == 'm') ADVANCE(482);
      if (lookahead == 'p') ADVANCE(177);
      END_STATE();
    case 1560:
      ACCEPT_TOKEN(sym__alphanum);
      if (lookahead == 'n') ADVANCE(249);
      if (lookahead == 'p') ADVANCE(1182);
      if (lookahead == 's') ADVANCE(110);
      END_STATE();
    case 1561:
      ACCEPT_TOKEN(sym__alphanum);
      if (lookahead == 'n') ADVANCE(436);
      if (lookahead == 'r') ADVANCE(481);
      if (lookahead == 's') ADVANCE(351);
      if (lookahead == 't') ADVANCE(402);
      END_STATE();
    case 1562:
      ACCEPT_TOKEN(sym__alphanum);
      if (lookahead == 'o') ADVANCE(281);
      if (lookahead == 'r') ADVANCE(435);
      if (lookahead == 'y') ADVANCE(770);
      END_STATE();
    case 1563:
      ACCEPT_TOKEN(sym__alphanum);
      if (lookahead == 'o') ADVANCE(116);
      if (lookahead == 'r') ADVANCE(832);
      END_STATE();
    case 1564:
      ACCEPT_TOKEN(sym__alphanum);
      if (lookahead == 'r') ADVANCE(160);
      END_STATE();
    case 1565:
      ACCEPT_TOKEN(sym__alphanum);
      if (lookahead == 's') ADVANCE(570);
      END_STATE();
    case 1566:
      ACCEPT_TOKEN(sym__alphanum);
      if (lookahead == 'u') ADVANCE(773);
      END_STATE();
    case 1567:
      ACCEPT_TOKEN(sym__alphanum);
      if (lookahead == 'w') ADVANCE(708);
      END_STATE();
    case 1568:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(963);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1568);
      END_STATE();
    case 1569:
      ACCEPT_TOKEN(aux_sym__unsigned_integer_token1);
      END_STATE();
    case 1570:
      ACCEPT_TOKEN(aux_sym__unsigned_integer_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1570);
      END_STATE();
    case 1571:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1571);
      END_STATE();
    case 1572:
      ACCEPT_TOKEN(aux_sym_hexdigit_token1);
      END_STATE();
    case 1573:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 1574:
      ACCEPT_TOKEN(anon_sym_e);
      if (lookahead == 'n') ADVANCE(282);
      if (lookahead == 'q') ADVANCE(828);
      if (lookahead == 'x') ADVANCE(456);
      END_STATE();
    case 1575:
      ACCEPT_TOKEN(anon_sym_E);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1080);
      END_STATE();
    case 1576:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 1577:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 1578:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '/' ||
          lookahead == '\\') ADVANCE(1579);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1578);
      END_STATE();
    case 1579:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1579);
      END_STATE();
    case 1580:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 1581:
      ACCEPT_TOKEN(sym_regex_text);
      if (lookahead == '#') ADVANCE(1578);
      if (set_contains(extras_character_set_1, 10, lookahead)) ADVANCE(1581);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '/' &&
          lookahead != '\\') ADVANCE(1582);
      END_STATE();
    case 1582:
      ACCEPT_TOKEN(sym_regex_text);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '/' &&
          lookahead != '\\') ADVANCE(1582);
      END_STATE();
    case 1583:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 1584:
      ACCEPT_TOKEN(aux_sym_regex_escaped_char_token1);
      END_STATE();
    case 1585:
      ACCEPT_TOKEN(aux_sym_regex_escaped_char_token1);
      if (lookahead == '#') ADVANCE(1579);
      if (set_contains(extras_character_set_1, 10, lookahead)) ADVANCE(1585);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(1584);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 978},
  [2] = {.lex_state = 976, .external_lex_state = 2},
  [3] = {.lex_state = 976, .external_lex_state = 2},
  [4] = {.lex_state = 976, .external_lex_state = 2},
  [5] = {.lex_state = 976, .external_lex_state = 2},
  [6] = {.lex_state = 976, .external_lex_state = 2},
  [7] = {.lex_state = 976, .external_lex_state = 2},
  [8] = {.lex_state = 12},
  [9] = {.lex_state = 12},
  [10] = {.lex_state = 980, .external_lex_state = 3},
  [11] = {.lex_state = 980, .external_lex_state = 3},
  [12] = {.lex_state = 980, .external_lex_state = 3},
  [13] = {.lex_state = 980, .external_lex_state = 3},
  [14] = {.lex_state = 976, .external_lex_state = 2},
  [15] = {.lex_state = 976, .external_lex_state = 2},
  [16] = {.lex_state = 976, .external_lex_state = 2},
  [17] = {.lex_state = 12},
  [18] = {.lex_state = 981, .external_lex_state = 3},
  [19] = {.lex_state = 981, .external_lex_state = 3},
  [20] = {.lex_state = 12},
  [21] = {.lex_state = 12},
  [22] = {.lex_state = 12},
  [23] = {.lex_state = 12},
  [24] = {.lex_state = 12},
  [25] = {.lex_state = 12},
  [26] = {.lex_state = 12},
  [27] = {.lex_state = 12},
  [28] = {.lex_state = 12},
  [29] = {.lex_state = 12},
  [30] = {.lex_state = 12},
  [31] = {.lex_state = 12},
  [32] = {.lex_state = 12},
  [33] = {.lex_state = 12},
  [34] = {.lex_state = 12},
  [35] = {.lex_state = 12},
  [36] = {.lex_state = 978, .external_lex_state = 2},
  [37] = {.lex_state = 12},
  [38] = {.lex_state = 12},
  [39] = {.lex_state = 978, .external_lex_state = 2},
  [40] = {.lex_state = 12},
  [41] = {.lex_state = 12},
  [42] = {.lex_state = 978, .external_lex_state = 2},
  [43] = {.lex_state = 12},
  [44] = {.lex_state = 12},
  [45] = {.lex_state = 12},
  [46] = {.lex_state = 980, .external_lex_state = 3},
  [47] = {.lex_state = 980, .external_lex_state = 3},
  [48] = {.lex_state = 980, .external_lex_state = 3},
  [49] = {.lex_state = 980, .external_lex_state = 3},
  [50] = {.lex_state = 980, .external_lex_state = 3},
  [51] = {.lex_state = 980, .external_lex_state = 3},
  [52] = {.lex_state = 980, .external_lex_state = 3},
  [53] = {.lex_state = 980, .external_lex_state = 3},
  [54] = {.lex_state = 980, .external_lex_state = 3},
  [55] = {.lex_state = 980, .external_lex_state = 3},
  [56] = {.lex_state = 980, .external_lex_state = 3},
  [57] = {.lex_state = 980, .external_lex_state = 3},
  [58] = {.lex_state = 980, .external_lex_state = 3},
  [59] = {.lex_state = 978, .external_lex_state = 2},
  [60] = {.lex_state = 978, .external_lex_state = 2},
  [61] = {.lex_state = 976, .external_lex_state = 2},
  [62] = {.lex_state = 978, .external_lex_state = 2},
  [63] = {.lex_state = 978, .external_lex_state = 2},
  [64] = {.lex_state = 980, .external_lex_state = 3},
  [65] = {.lex_state = 980, .external_lex_state = 3},
  [66] = {.lex_state = 978, .external_lex_state = 2},
  [67] = {.lex_state = 978, .external_lex_state = 2},
  [68] = {.lex_state = 980, .external_lex_state = 3},
  [69] = {.lex_state = 980, .external_lex_state = 3},
  [70] = {.lex_state = 980, .external_lex_state = 3},
  [71] = {.lex_state = 976, .external_lex_state = 2},
  [72] = {.lex_state = 976, .external_lex_state = 4},
  [73] = {.lex_state = 976, .external_lex_state = 4},
  [74] = {.lex_state = 981, .external_lex_state = 3},
  [75] = {.lex_state = 981, .external_lex_state = 3},
  [76] = {.lex_state = 981, .external_lex_state = 3},
  [77] = {.lex_state = 981, .external_lex_state = 3},
  [78] = {.lex_state = 976, .external_lex_state = 4},
  [79] = {.lex_state = 12},
  [80] = {.lex_state = 12},
  [81] = {.lex_state = 12},
  [82] = {.lex_state = 981, .external_lex_state = 3},
  [83] = {.lex_state = 981, .external_lex_state = 3},
  [84] = {.lex_state = 981, .external_lex_state = 3},
  [85] = {.lex_state = 981, .external_lex_state = 3},
  [86] = {.lex_state = 981, .external_lex_state = 3},
  [87] = {.lex_state = 978, .external_lex_state = 2},
  [88] = {.lex_state = 981, .external_lex_state = 3},
  [89] = {.lex_state = 981, .external_lex_state = 3},
  [90] = {.lex_state = 978, .external_lex_state = 2},
  [91] = {.lex_state = 976, .external_lex_state = 4},
  [92] = {.lex_state = 976, .external_lex_state = 4},
  [93] = {.lex_state = 976, .external_lex_state = 4},
  [94] = {.lex_state = 976, .external_lex_state = 4},
  [95] = {.lex_state = 976, .external_lex_state = 4},
  [96] = {.lex_state = 976, .external_lex_state = 4},
  [97] = {.lex_state = 976, .external_lex_state = 4},
  [98] = {.lex_state = 976, .external_lex_state = 4},
  [99] = {.lex_state = 976, .external_lex_state = 4},
  [100] = {.lex_state = 976, .external_lex_state = 4},
  [101] = {.lex_state = 976, .external_lex_state = 4},
  [102] = {.lex_state = 976, .external_lex_state = 4},
  [103] = {.lex_state = 976, .external_lex_state = 4},
  [104] = {.lex_state = 976, .external_lex_state = 4},
  [105] = {.lex_state = 976, .external_lex_state = 4},
  [106] = {.lex_state = 976, .external_lex_state = 4},
  [107] = {.lex_state = 976, .external_lex_state = 4},
  [108] = {.lex_state = 976, .external_lex_state = 4},
  [109] = {.lex_state = 976, .external_lex_state = 4},
  [110] = {.lex_state = 976, .external_lex_state = 4},
  [111] = {.lex_state = 976, .external_lex_state = 4},
  [112] = {.lex_state = 976, .external_lex_state = 4},
  [113] = {.lex_state = 976, .external_lex_state = 4},
  [114] = {.lex_state = 12},
  [115] = {.lex_state = 976},
  [116] = {.lex_state = 976},
  [117] = {.lex_state = 13},
  [118] = {.lex_state = 976},
  [119] = {.lex_state = 976},
  [120] = {.lex_state = 978},
  [121] = {.lex_state = 978},
  [122] = {.lex_state = 976},
  [123] = {.lex_state = 976},
  [124] = {.lex_state = 976},
  [125] = {.lex_state = 976},
  [126] = {.lex_state = 976},
  [127] = {.lex_state = 978},
  [128] = {.lex_state = 978},
  [129] = {.lex_state = 12},
  [130] = {.lex_state = 12},
  [131] = {.lex_state = 12},
  [132] = {.lex_state = 12},
  [133] = {.lex_state = 978},
  [134] = {.lex_state = 12},
  [135] = {.lex_state = 12},
  [136] = {.lex_state = 978},
  [137] = {.lex_state = 978},
  [138] = {.lex_state = 978},
  [139] = {.lex_state = 978},
  [140] = {.lex_state = 5, .external_lex_state = 4},
  [141] = {.lex_state = 978},
  [142] = {.lex_state = 978},
  [143] = {.lex_state = 978},
  [144] = {.lex_state = 978},
  [145] = {.lex_state = 978},
  [146] = {.lex_state = 978},
  [147] = {.lex_state = 978},
  [148] = {.lex_state = 978},
  [149] = {.lex_state = 978},
  [150] = {.lex_state = 978},
  [151] = {.lex_state = 978},
  [152] = {.lex_state = 12, .external_lex_state = 2},
  [153] = {.lex_state = 12, .external_lex_state = 2},
  [154] = {.lex_state = 10, .external_lex_state = 4},
  [155] = {.lex_state = 12, .external_lex_state = 2},
  [156] = {.lex_state = 12, .external_lex_state = 2},
  [157] = {.lex_state = 11, .external_lex_state = 4},
  [158] = {.lex_state = 10, .external_lex_state = 4},
  [159] = {.lex_state = 28},
  [160] = {.lex_state = 28},
  [161] = {.lex_state = 10, .external_lex_state = 4},
  [162] = {.lex_state = 28},
  [163] = {.lex_state = 28},
  [164] = {.lex_state = 10, .external_lex_state = 4},
  [165] = {.lex_state = 10, .external_lex_state = 4},
  [166] = {.lex_state = 10, .external_lex_state = 4},
  [167] = {.lex_state = 14},
  [168] = {.lex_state = 14},
  [169] = {.lex_state = 14},
  [170] = {.lex_state = 10, .external_lex_state = 4},
  [171] = {.lex_state = 28},
  [172] = {.lex_state = 14},
  [173] = {.lex_state = 14},
  [174] = {.lex_state = 6},
  [175] = {.lex_state = 6},
  [176] = {.lex_state = 6},
  [177] = {.lex_state = 15},
  [178] = {.lex_state = 13},
  [179] = {.lex_state = 13},
  [180] = {.lex_state = 13},
  [181] = {.lex_state = 13},
  [182] = {.lex_state = 13},
  [183] = {.lex_state = 13},
  [184] = {.lex_state = 7},
  [185] = {.lex_state = 15},
  [186] = {.lex_state = 15},
  [187] = {.lex_state = 15},
  [188] = {.lex_state = 13},
  [189] = {.lex_state = 13},
  [190] = {.lex_state = 13},
  [191] = {.lex_state = 15},
  [192] = {.lex_state = 13},
  [193] = {.lex_state = 1, .external_lex_state = 4},
  [194] = {.lex_state = 16},
  [195] = {.lex_state = 29},
  [196] = {.lex_state = 10, .external_lex_state = 4},
  [197] = {.lex_state = 1, .external_lex_state = 4},
  [198] = {.lex_state = 16},
  [199] = {.lex_state = 2, .external_lex_state = 4},
  [200] = {.lex_state = 23},
  [201] = {.lex_state = 14},
  [202] = {.lex_state = 29},
  [203] = {.lex_state = 29},
  [204] = {.lex_state = 29},
  [205] = {.lex_state = 16},
  [206] = {.lex_state = 14},
  [207] = {.lex_state = 29},
  [208] = {.lex_state = 16},
  [209] = {.lex_state = 1, .external_lex_state = 4},
  [210] = {.lex_state = 2, .external_lex_state = 4},
  [211] = {.lex_state = 23},
  [212] = {.lex_state = 2, .external_lex_state = 4},
  [213] = {.lex_state = 10, .external_lex_state = 4},
  [214] = {.lex_state = 16},
  [215] = {.lex_state = 13},
  [216] = {.lex_state = 22},
  [217] = {.lex_state = 26},
  [218] = {.lex_state = 23},
  [219] = {.lex_state = 22},
  [220] = {.lex_state = 23},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 22},
  [225] = {.lex_state = 6},
  [226] = {.lex_state = 6},
  [227] = {.lex_state = 30},
  [228] = {.lex_state = 30},
  [229] = {.lex_state = 28},
  [230] = {.lex_state = 28},
  [231] = {.lex_state = 28},
  [232] = {.lex_state = 14},
  [233] = {.lex_state = 28},
  [234] = {.lex_state = 8},
  [235] = {.lex_state = 30},
  [236] = {.lex_state = 8},
  [237] = {.lex_state = 12},
  [238] = {.lex_state = 10, .external_lex_state = 4},
  [239] = {.lex_state = 28},
  [240] = {.lex_state = 12},
  [241] = {.lex_state = 28},
  [242] = {.lex_state = 28},
  [243] = {.lex_state = 14},
  [244] = {.lex_state = 28},
  [245] = {.lex_state = 28},
  [246] = {.lex_state = 10, .external_lex_state = 4},
  [247] = {.lex_state = 978, .external_lex_state = 4},
  [248] = {.lex_state = 978, .external_lex_state = 4},
  [249] = {.lex_state = 21},
  [250] = {.lex_state = 21},
  [251] = {.lex_state = 21},
  [252] = {.lex_state = 21},
  [253] = {.lex_state = 12},
  [254] = {.lex_state = 21},
  [255] = {.lex_state = 21},
  [256] = {.lex_state = 21},
  [257] = {.lex_state = 21},
  [258] = {.lex_state = 21},
  [259] = {.lex_state = 20},
  [260] = {.lex_state = 21},
  [261] = {.lex_state = 21},
  [262] = {.lex_state = 29},
  [263] = {.lex_state = 8},
  [264] = {.lex_state = 21},
  [265] = {.lex_state = 21},
  [266] = {.lex_state = 20},
  [267] = {.lex_state = 21},
  [268] = {.lex_state = 978, .external_lex_state = 4},
  [269] = {.lex_state = 20},
  [270] = {.lex_state = 978, .external_lex_state = 4},
  [271] = {.lex_state = 2, .external_lex_state = 4},
  [272] = {.lex_state = 1, .external_lex_state = 4},
  [273] = {.lex_state = 978, .external_lex_state = 4},
  [274] = {.lex_state = 978, .external_lex_state = 4},
  [275] = {.lex_state = 978, .external_lex_state = 4},
  [276] = {.lex_state = 6},
  [277] = {.lex_state = 978, .external_lex_state = 4},
  [278] = {.lex_state = 978, .external_lex_state = 4},
  [279] = {.lex_state = 15},
  [280] = {.lex_state = 978, .external_lex_state = 4},
  [281] = {.lex_state = 2, .external_lex_state = 4},
  [282] = {.lex_state = 1, .external_lex_state = 4},
  [283] = {.lex_state = 21},
  [284] = {.lex_state = 978, .external_lex_state = 4},
  [285] = {.lex_state = 29},
  [286] = {.lex_state = 978, .external_lex_state = 4},
  [287] = {.lex_state = 16},
  [288] = {.lex_state = 10, .external_lex_state = 4},
  [289] = {.lex_state = 8},
  [290] = {.lex_state = 1, .external_lex_state = 4},
  [291] = {.lex_state = 1, .external_lex_state = 4},
  [292] = {.lex_state = 1, .external_lex_state = 4},
  [293] = {.lex_state = 15},
  [294] = {.lex_state = 2, .external_lex_state = 4},
  [295] = {.lex_state = 2, .external_lex_state = 4},
  [296] = {.lex_state = 15},
  [297] = {.lex_state = 20},
  [298] = {.lex_state = 6},
  [299] = {.lex_state = 1, .external_lex_state = 4},
  [300] = {.lex_state = 1, .external_lex_state = 4},
  [301] = {.lex_state = 978, .external_lex_state = 4},
  [302] = {.lex_state = 10, .external_lex_state = 4},
  [303] = {.lex_state = 978, .external_lex_state = 4},
  [304] = {.lex_state = 16},
  [305] = {.lex_state = 978, .external_lex_state = 4},
  [306] = {.lex_state = 978, .external_lex_state = 4},
  [307] = {.lex_state = 978, .external_lex_state = 4},
  [308] = {.lex_state = 10, .external_lex_state = 4},
  [309] = {.lex_state = 2, .external_lex_state = 4},
  [310] = {.lex_state = 978, .external_lex_state = 4},
  [311] = {.lex_state = 2, .external_lex_state = 4},
  [312] = {.lex_state = 978, .external_lex_state = 4},
  [313] = {.lex_state = 978, .external_lex_state = 4},
  [314] = {.lex_state = 20},
  [315] = {.lex_state = 978, .external_lex_state = 4},
  [316] = {.lex_state = 22},
  [317] = {.lex_state = 24},
  [318] = {.lex_state = 21},
  [319] = {.lex_state = 21},
  [320] = {.lex_state = 30},
  [321] = {.lex_state = 30},
  [322] = {.lex_state = 0},
  [323] = {.lex_state = 0},
  [324] = {.lex_state = 0},
  [325] = {.lex_state = 22},
  [326] = {.lex_state = 0},
  [327] = {.lex_state = 22},
  [328] = {.lex_state = 16},
  [329] = {.lex_state = 29},
  [330] = {.lex_state = 0},
  [331] = {.lex_state = 22},
  [332] = {.lex_state = 24},
  [333] = {.lex_state = 0},
  [334] = {.lex_state = 0},
  [335] = {.lex_state = 0},
  [336] = {.lex_state = 16},
  [337] = {.lex_state = 22},
  [338] = {.lex_state = 22},
  [339] = {.lex_state = 22},
  [340] = {.lex_state = 0},
  [341] = {.lex_state = 24},
  [342] = {.lex_state = 0},
  [343] = {.lex_state = 0},
  [344] = {.lex_state = 16},
  [345] = {.lex_state = 0},
  [346] = {.lex_state = 12},
  [347] = {.lex_state = 0},
  [348] = {.lex_state = 0},
  [349] = {.lex_state = 12},
  [350] = {.lex_state = 20},
  [351] = {.lex_state = 0},
  [352] = {.lex_state = 0},
  [353] = {.lex_state = 19},
  [354] = {.lex_state = 0},
  [355] = {.lex_state = 0},
  [356] = {.lex_state = 0},
  [357] = {.lex_state = 0},
  [358] = {.lex_state = 20},
  [359] = {.lex_state = 0},
  [360] = {.lex_state = 0},
  [361] = {.lex_state = 8},
  [362] = {.lex_state = 0},
  [363] = {.lex_state = 12},
  [364] = {.lex_state = 0},
  [365] = {.lex_state = 0},
  [366] = {.lex_state = 0},
  [367] = {.lex_state = 0},
  [368] = {.lex_state = 0},
  [369] = {.lex_state = 0},
  [370] = {.lex_state = 0},
  [371] = {.lex_state = 0},
  [372] = {.lex_state = 0},
  [373] = {.lex_state = 0},
  [374] = {.lex_state = 3, .external_lex_state = 4},
  [375] = {.lex_state = 978, .external_lex_state = 4},
  [376] = {.lex_state = 0},
  [377] = {.lex_state = 978, .external_lex_state = 4},
  [378] = {.lex_state = 978, .external_lex_state = 4},
  [379] = {.lex_state = 978, .external_lex_state = 4},
  [380] = {.lex_state = 978, .external_lex_state = 4},
  [381] = {.lex_state = 978, .external_lex_state = 4},
  [382] = {.lex_state = 978, .external_lex_state = 4},
  [383] = {.lex_state = 978, .external_lex_state = 4},
  [384] = {.lex_state = 978, .external_lex_state = 4},
  [385] = {.lex_state = 978, .external_lex_state = 4},
  [386] = {.lex_state = 978, .external_lex_state = 4},
  [387] = {.lex_state = 978, .external_lex_state = 4},
  [388] = {.lex_state = 978, .external_lex_state = 4},
  [389] = {.lex_state = 978, .external_lex_state = 4},
  [390] = {.lex_state = 978, .external_lex_state = 4},
  [391] = {.lex_state = 978, .external_lex_state = 4},
  [392] = {.lex_state = 978, .external_lex_state = 4},
  [393] = {.lex_state = 978, .external_lex_state = 4},
  [394] = {.lex_state = 978, .external_lex_state = 4},
  [395] = {.lex_state = 978, .external_lex_state = 4},
  [396] = {.lex_state = 0},
  [397] = {.lex_state = 978, .external_lex_state = 4},
  [398] = {.lex_state = 978, .external_lex_state = 4},
  [399] = {.lex_state = 978, .external_lex_state = 4},
  [400] = {.lex_state = 978, .external_lex_state = 4},
  [401] = {.lex_state = 978, .external_lex_state = 4},
  [402] = {.lex_state = 978, .external_lex_state = 4},
  [403] = {.lex_state = 978, .external_lex_state = 4},
  [404] = {.lex_state = 978, .external_lex_state = 4},
  [405] = {.lex_state = 978, .external_lex_state = 4},
  [406] = {.lex_state = 19},
  [407] = {.lex_state = 978, .external_lex_state = 4},
  [408] = {.lex_state = 978, .external_lex_state = 4},
  [409] = {.lex_state = 978, .external_lex_state = 4},
  [410] = {.lex_state = 978, .external_lex_state = 4},
  [411] = {.lex_state = 978, .external_lex_state = 4},
  [412] = {.lex_state = 978, .external_lex_state = 4},
  [413] = {.lex_state = 978, .external_lex_state = 4},
  [414] = {.lex_state = 978, .external_lex_state = 4},
  [415] = {.lex_state = 978, .external_lex_state = 4},
  [416] = {.lex_state = 978, .external_lex_state = 4},
  [417] = {.lex_state = 978, .external_lex_state = 4},
  [418] = {.lex_state = 978, .external_lex_state = 4},
  [419] = {.lex_state = 978, .external_lex_state = 4},
  [420] = {.lex_state = 24},
  [421] = {.lex_state = 978, .external_lex_state = 4},
  [422] = {.lex_state = 0},
  [423] = {.lex_state = 978, .external_lex_state = 4},
  [424] = {.lex_state = 978, .external_lex_state = 4},
  [425] = {.lex_state = 978, .external_lex_state = 4},
  [426] = {.lex_state = 978, .external_lex_state = 4},
  [427] = {.lex_state = 978, .external_lex_state = 4},
  [428] = {.lex_state = 978, .external_lex_state = 4},
  [429] = {.lex_state = 0},
  [430] = {.lex_state = 978, .external_lex_state = 4},
  [431] = {.lex_state = 0},
  [432] = {.lex_state = 0},
  [433] = {.lex_state = 0},
  [434] = {.lex_state = 978, .external_lex_state = 4},
  [435] = {.lex_state = 978, .external_lex_state = 4},
  [436] = {.lex_state = 0},
  [437] = {.lex_state = 0},
  [438] = {.lex_state = 19},
  [439] = {.lex_state = 978, .external_lex_state = 4},
  [440] = {.lex_state = 978, .external_lex_state = 4},
  [441] = {.lex_state = 0},
  [442] = {.lex_state = 0},
  [443] = {.lex_state = 978, .external_lex_state = 4},
  [444] = {.lex_state = 0},
  [445] = {.lex_state = 978, .external_lex_state = 4},
  [446] = {.lex_state = 978, .external_lex_state = 4},
  [447] = {.lex_state = 978, .external_lex_state = 4},
  [448] = {.lex_state = 0},
  [449] = {.lex_state = 978, .external_lex_state = 4},
  [450] = {.lex_state = 978, .external_lex_state = 4},
  [451] = {.lex_state = 0},
  [452] = {.lex_state = 978, .external_lex_state = 4},
  [453] = {.lex_state = 978, .external_lex_state = 4},
  [454] = {.lex_state = 978, .external_lex_state = 4},
  [455] = {.lex_state = 978, .external_lex_state = 4},
  [456] = {.lex_state = 978, .external_lex_state = 4},
  [457] = {.lex_state = 978, .external_lex_state = 4},
  [458] = {.lex_state = 978, .external_lex_state = 4},
  [459] = {.lex_state = 0},
  [460] = {.lex_state = 0},
  [461] = {.lex_state = 978, .external_lex_state = 4},
  [462] = {.lex_state = 978, .external_lex_state = 4},
  [463] = {.lex_state = 0},
  [464] = {.lex_state = 0},
  [465] = {.lex_state = 0},
  [466] = {.lex_state = 978, .external_lex_state = 4},
  [467] = {.lex_state = 978, .external_lex_state = 4},
  [468] = {.lex_state = 0},
  [469] = {.lex_state = 0},
  [470] = {.lex_state = 0},
  [471] = {.lex_state = 0},
  [472] = {.lex_state = 978, .external_lex_state = 4},
  [473] = {.lex_state = 0},
  [474] = {.lex_state = 978, .external_lex_state = 4},
  [475] = {.lex_state = 12},
  [476] = {.lex_state = 12},
  [477] = {.lex_state = 12},
  [478] = {.lex_state = 0},
  [479] = {.lex_state = 12},
  [480] = {.lex_state = 13},
  [481] = {.lex_state = 0},
  [482] = {.lex_state = 0},
  [483] = {.lex_state = 0},
  [484] = {.lex_state = 12},
  [485] = {.lex_state = 0},
  [486] = {.lex_state = 20},
  [487] = {.lex_state = 0},
  [488] = {.lex_state = 27},
  [489] = {.lex_state = 0},
  [490] = {.lex_state = 0},
  [491] = {.lex_state = 0},
  [492] = {.lex_state = 0},
  [493] = {.lex_state = 0},
  [494] = {.lex_state = 0},
  [495] = {.lex_state = 13},
  [496] = {.lex_state = 0},
  [497] = {.lex_state = 0},
  [498] = {.lex_state = 0},
  [499] = {.lex_state = 0},
  [500] = {.lex_state = 0},
  [501] = {.lex_state = 0},
  [502] = {.lex_state = 0},
  [503] = {.lex_state = 0},
  [504] = {.lex_state = 0},
  [505] = {.lex_state = 0},
  [506] = {.lex_state = 12},
  [507] = {.lex_state = 12},
  [508] = {.lex_state = 12},
  [509] = {.lex_state = 12},
  [510] = {.lex_state = 12},
  [511] = {.lex_state = 12},
  [512] = {.lex_state = 12},
  [513] = {.lex_state = 12},
  [514] = {.lex_state = 0},
  [515] = {.lex_state = 12},
  [516] = {.lex_state = 12},
  [517] = {.lex_state = 20},
  [518] = {.lex_state = 0},
  [519] = {.lex_state = 0},
  [520] = {.lex_state = 0},
  [521] = {.lex_state = 20},
  [522] = {.lex_state = 0},
  [523] = {.lex_state = 978},
  [524] = {.lex_state = 9},
  [525] = {.lex_state = 978},
  [526] = {.lex_state = 978},
  [527] = {.lex_state = 16},
  [528] = {.lex_state = 0},
  [529] = {.lex_state = 0},
  [530] = {.lex_state = 0},
  [531] = {.lex_state = 20},
  [532] = {.lex_state = 0},
  [533] = {.lex_state = 0},
  [534] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_GET] = ACTIONS(1),
    [anon_sym_HEAD] = ACTIONS(1),
    [anon_sym_POST] = ACTIONS(1),
    [anon_sym_PUT] = ACTIONS(1),
    [anon_sym_CONNECT] = ACTIONS(1),
    [anon_sym_OPTIONS] = ACTIONS(1),
    [anon_sym_TRACE] = ACTIONS(1),
    [anon_sym_PATCH] = ACTIONS(1),
    [anon_sym_LINK] = ACTIONS(1),
    [anon_sym_UNLINK] = ACTIONS(1),
    [anon_sym_PURGE] = ACTIONS(1),
    [anon_sym_LOCK] = ACTIONS(1),
    [anon_sym_UNLOCK] = ACTIONS(1),
    [anon_sym_PROPFIND] = ACTIONS(1),
    [anon_sym_VIEW] = ACTIONS(1),
    [aux_sym_method_token1] = ACTIONS(1),
    [anon_sym_HTTP_SLASH1_DOT0] = ACTIONS(1),
    [anon_sym_HTTP_SLASH1_DOT1] = ACTIONS(1),
    [anon_sym_HTTP_SLASH2] = ACTIONS(1),
    [anon_sym_HTTP_SLASH3] = ACTIONS(1),
    [anon_sym_HTTP_SLASH_STAR] = ACTIONS(1),
    [anon_sym_HTTP] = ACTIONS(1),
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
    [anon_sym_file_COMMA] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_redact] = ACTIONS(1),
    [anon_sym_key] = ACTIONS(1),
    [anon_sym_digest] = ACTIONS(1),
    [anon_sym_http1_DOT1] = ACTIONS(1),
    [anon_sym_negotiate] = ACTIONS(1),
    [anon_sym_ntlm] = ACTIONS(1),
    [anon_sym_compressed] = ACTIONS(1),
    [anon_sym_location] = ACTIONS(1),
    [anon_sym_location_DASHtrusted] = ACTIONS(1),
    [anon_sym_http1_DOT0] = ACTIONS(1),
    [anon_sym_http2] = ACTIONS(1),
    [anon_sym_http3] = ACTIONS(1),
    [anon_sym_insecure] = ACTIONS(1),
    [anon_sym_ipv4] = ACTIONS(1),
    [anon_sym_ipv6] = ACTIONS(1),
    [anon_sym_netrc] = ACTIONS(1),
    [anon_sym_netrc_DASHoptional] = ACTIONS(1),
    [anon_sym_path_DASHas_DASHis] = ACTIONS(1),
    [anon_sym_skip] = ACTIONS(1),
    [anon_sym_verbose] = ACTIONS(1),
    [anon_sym_very_DASHverbose] = ACTIONS(1),
    [anon_sym_retry_DASHmax_DASHcount] = ACTIONS(1),
    [anon_sym_limit_DASHrate] = ACTIONS(1),
    [anon_sym_max_DASHredirs] = ACTIONS(1),
    [anon_sym_repeat] = ACTIONS(1),
    [anon_sym_retry] = ACTIONS(1),
    [anon_sym_verbosity] = ACTIONS(1),
    [anon_sym_brief] = ACTIONS(1),
    [anon_sym_connect_DASHtimeout] = ACTIONS(1),
    [anon_sym_retry_DASHinterval] = ACTIONS(1),
    [anon_sym_max_DASHtime] = ACTIONS(1),
    [sym_duration_unit] = ACTIONS(1),
    [anon_sym_resolve] = ACTIONS(1),
    [anon_sym_aws_DASHsigv4] = ACTIONS(1),
    [anon_sym_connect_DASHto] = ACTIONS(1),
    [anon_sym_header] = ACTIONS(1),
    [anon_sym_netrc_DASHfile] = ACTIONS(1),
    [anon_sym_output] = ACTIONS(1),
    [anon_sym_pinnedpubkey] = ACTIONS(1),
    [anon_sym_proxy] = ACTIONS(1),
    [anon_sym_unix_DASHsocket] = ACTIONS(1),
    [anon_sym_user] = ACTIONS(1),
    [anon_sym_variable] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_null] = ACTIONS(1),
    [anon_sym_status] = ACTIONS(1),
    [anon_sym_version] = ACTIONS(1),
    [anon_sym_rawbytes] = ACTIONS(1),
    [anon_sym_ip] = ACTIONS(1),
    [anon_sym_redirects] = ACTIONS(1),
    [anon_sym_url] = ACTIONS(1),
    [anon_sym_body] = ACTIONS(1),
    [anon_sym_duration] = ACTIONS(1),
    [anon_sym_bytes] = ACTIONS(1),
    [anon_sym_sha256] = ACTIONS(1),
    [anon_sym_md5] = ACTIONS(1),
    [anon_sym_cookie] = ACTIONS(1),
    [anon_sym_xpath] = ACTIONS(1),
    [anon_sym_jsonpath] = ACTIONS(1),
    [anon_sym_regex] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_not] = ACTIONS(1),
    [anon_sym_isDate] = ACTIONS(1),
    [anon_sym_isList] = ACTIONS(1),
    [anon_sym_isObject] = ACTIONS(1),
    [anon_sym_exists] = ACTIONS(1),
    [anon_sym_isInteger] = ACTIONS(1),
    [anon_sym_isFloat] = ACTIONS(1),
    [anon_sym_isBoolean] = ACTIONS(1),
    [anon_sym_isString] = ACTIONS(1),
    [anon_sym_isCollection] = ACTIONS(1),
    [anon_sym_isNumber] = ACTIONS(1),
    [anon_sym_isIsoDate] = ACTIONS(1),
    [anon_sym_isEmpty] = ACTIONS(1),
    [anon_sym_isIpv4] = ACTIONS(1),
    [anon_sym_isIpv6] = ACTIONS(1),
    [anon_sym_isUuid] = ACTIONS(1),
    [anon_sym_equals] = ACTIONS(1),
    [anon_sym_notEquals] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_greaterThan] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_greaterThanOrEquals] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_lessThan] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_lessThanOrEquals] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_startsWith] = ACTIONS(1),
    [anon_sym_endsWith] = ACTIONS(1),
    [anon_sym_contains] = ACTIONS(1),
    [anon_sym_matches] = ACTIONS(1),
    [anon_sym_includes] = ACTIONS(1),
    [sym_xml_prolog_tag] = ACTIONS(1),
    [sym_xml_comment] = ACTIONS(1),
    [sym_xml_cdata] = ACTIONS(1),
    [anon_sym_LT_SLASH] = ACTIONS(1),
    [anon_sym_hex_COMMA] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_BQUOTE] = ACTIONS(1),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(1),
    [anon_sym_raw] = ACTIONS(1),
    [anon_sym_hex] = ACTIONS(1),
    [anon_sym_json] = ACTIONS(1),
    [anon_sym_xml] = ACTIONS(1),
    [anon_sym_graphql] = ACTIONS(1),
    [aux_sym_multiline_string_content_token2] = ACTIONS(1),
    [anon_sym_BQUOTE2] = ACTIONS(1),
    [anon_sym_LBRACE2] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_LBRACE_LBRACE2] = ACTIONS(1),
    [anon_sym_newDate] = ACTIONS(1),
    [anon_sym_newUuid] = ACTIONS(1),
    [anon_sym_first] = ACTIONS(1),
    [anon_sym_last] = ACTIONS(1),
    [anon_sym_toFloat] = ACTIONS(1),
    [anon_sym_toHex] = ACTIONS(1),
    [anon_sym_toString] = ACTIONS(1),
    [anon_sym_utf8Decode] = ACTIONS(1),
    [anon_sym_utf8Encode] = ACTIONS(1),
    [anon_sym_count] = ACTIONS(1),
    [anon_sym_urlEncode] = ACTIONS(1),
    [anon_sym_urlDecode] = ACTIONS(1),
    [anon_sym_toInt] = ACTIONS(1),
    [anon_sym_htmlEscape] = ACTIONS(1),
    [anon_sym_htmlUnescape] = ACTIONS(1),
    [anon_sym_charsetDecode] = ACTIONS(1),
    [anon_sym_urlQueryParam] = ACTIONS(1),
    [anon_sym_format] = ACTIONS(1),
    [anon_sym_toDate] = ACTIONS(1),
    [anon_sym_nth] = ACTIONS(1),
    [anon_sym_replace] = ACTIONS(1),
    [anon_sym_replaceRegex] = ACTIONS(1),
    [anon_sym_split] = ACTIONS(1),
    [sym__alphanum] = ACTIONS(1),
    [aux_sym__unsigned_integer_token1] = ACTIONS(1),
    [aux_sym_digit_token1] = ACTIONS(1),
    [aux_sym_hexdigit_token1] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_e] = ACTIONS(1),
    [anon_sym_E] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_BSLASH] = ACTIONS(1),
    [sym__eof] = ACTIONS(1),
    [sym__json_array_start] = ACTIONS(1),
    [sym__bracketed_key_start] = ACTIONS(1),
    [sym__json_number] = ACTIONS(1),
    [sym__error_sentinel] = ACTIONS(1),
  },
  [1] = {
    [sym_hurl_file] = STATE(522),
    [sym_entry] = STATE(121),
    [sym__comment_or_new_line] = STATE(127),
    [sym_request] = STATE(115),
    [sym_method] = STATE(154),
    [aux_sym_hurl_file_repeat1] = STATE(121),
    [aux_sym_hurl_file_repeat2] = STATE(127),
    [aux_sym__comment_or_new_line_repeat1] = STATE(142),
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
    [sym_option] = STATE(315),
    [sym_ca_certificate_option] = STATE(439),
    [sym_client_key_option] = STATE(439),
    [sym_cert_option] = STATE(439),
    [sym_boolean_option] = STATE(439),
    [sym_boolean_option_key] = STATE(492),
    [sym_integer_option] = STATE(439),
    [sym_integer_option_key] = STATE(489),
    [sym_count_option] = STATE(439),
    [sym_count_option_key] = STATE(482),
    [sym_verbosity_option] = STATE(439),
    [sym_duration_option] = STATE(439),
    [sym_duration_option_key] = STATE(478),
    [sym_string_option] = STATE(439),
    [sym_string_option_key] = STATE(503),
    [sym_variable_option] = STATE(439),
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
    [anon_sym_file_COMMA] = ACTIONS(15),
    [anon_sym_cacert] = ACTIONS(17),
    [anon_sym_key] = ACTIONS(19),
    [anon_sym_cert] = ACTIONS(21),
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
    [anon_sym_retry_DASHmax_DASHcount] = ACTIONS(25),
    [anon_sym_limit_DASHrate] = ACTIONS(25),
    [anon_sym_max_DASHredirs] = ACTIONS(27),
    [anon_sym_repeat] = ACTIONS(27),
    [anon_sym_retry] = ACTIONS(27),
    [anon_sym_verbosity] = ACTIONS(29),
    [anon_sym_connect_DASHtimeout] = ACTIONS(31),
    [anon_sym_delay] = ACTIONS(31),
    [anon_sym_retry_DASHinterval] = ACTIONS(31),
    [anon_sym_max_DASHtime] = ACTIONS(31),
    [anon_sym_resolve] = ACTIONS(33),
    [anon_sym_aws_DASHsigv4] = ACTIONS(33),
    [anon_sym_connect_DASHto] = ACTIONS(33),
    [anon_sym_header] = ACTIONS(33),
    [anon_sym_netrc_DASHfile] = ACTIONS(33),
    [anon_sym_output] = ACTIONS(33),
    [anon_sym_pinnedpubkey] = ACTIONS(33),
    [anon_sym_proxy] = ACTIONS(33),
    [anon_sym_unix_DASHsocket] = ACTIONS(33),
    [anon_sym_user] = ACTIONS(33),
    [anon_sym_variable] = ACTIONS(35),
    [anon_sym_null] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [anon_sym_LT] = ACTIONS(15),
    [sym_xml_prolog_tag] = ACTIONS(15),
    [sym_xml_comment] = ACTIONS(15),
    [anon_sym_base64_COMMA] = ACTIONS(15),
    [anon_sym_hex_COMMA] = ACTIONS(15),
    [anon_sym_BQUOTE] = ACTIONS(15),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(15),
    [anon_sym_LBRACE2] = ACTIONS(15),
    [anon_sym_true] = ACTIONS(15),
    [anon_sym_false] = ACTIONS(15),
    [anon_sym_LBRACE_LBRACE2] = ACTIONS(15),
    [sym_comment] = ACTIONS(15),
    [sym__json_array_start] = ACTIONS(13),
    [sym__json_number] = ACTIONS(13),
  },
  [3] = {
    [sym_option] = STATE(315),
    [sym_ca_certificate_option] = STATE(439),
    [sym_client_key_option] = STATE(439),
    [sym_cert_option] = STATE(439),
    [sym_boolean_option] = STATE(439),
    [sym_boolean_option_key] = STATE(492),
    [sym_integer_option] = STATE(439),
    [sym_integer_option_key] = STATE(489),
    [sym_count_option] = STATE(439),
    [sym_count_option_key] = STATE(482),
    [sym_verbosity_option] = STATE(439),
    [sym_duration_option] = STATE(439),
    [sym_duration_option_key] = STATE(478),
    [sym_string_option] = STATE(439),
    [sym_string_option_key] = STATE(503),
    [sym_variable_option] = STATE(439),
    [aux_sym_options_section_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(37),
    [anon_sym_LF] = ACTIONS(37),
    [anon_sym_GET] = ACTIONS(39),
    [anon_sym_HEAD] = ACTIONS(39),
    [anon_sym_POST] = ACTIONS(39),
    [anon_sym_PUT] = ACTIONS(39),
    [anon_sym_DELETE] = ACTIONS(39),
    [anon_sym_CONNECT] = ACTIONS(39),
    [anon_sym_OPTIONS] = ACTIONS(39),
    [anon_sym_TRACE] = ACTIONS(39),
    [anon_sym_PATCH] = ACTIONS(39),
    [anon_sym_LINK] = ACTIONS(39),
    [anon_sym_UNLINK] = ACTIONS(39),
    [anon_sym_PURGE] = ACTIONS(39),
    [anon_sym_LOCK] = ACTIONS(39),
    [anon_sym_UNLOCK] = ACTIONS(39),
    [anon_sym_PROPFIND] = ACTIONS(39),
    [anon_sym_VIEW] = ACTIONS(39),
    [aux_sym_method_token1] = ACTIONS(39),
    [anon_sym_HTTP_SLASH1_DOT0] = ACTIONS(39),
    [anon_sym_HTTP_SLASH1_DOT1] = ACTIONS(39),
    [anon_sym_HTTP_SLASH2] = ACTIONS(39),
    [anon_sym_HTTP_SLASH3] = ACTIONS(39),
    [anon_sym_HTTP_SLASH_STAR] = ACTIONS(39),
    [anon_sym_HTTP] = ACTIONS(39),
    [anon_sym_LBRACKBasicAuth_RBRACK] = ACTIONS(39),
    [anon_sym_LBRACKQuery_RBRACK] = ACTIONS(39),
    [anon_sym_LBRACKQueryStringParams_RBRACK] = ACTIONS(39),
    [anon_sym_LBRACKForm_RBRACK] = ACTIONS(39),
    [anon_sym_LBRACKFormParams_RBRACK] = ACTIONS(39),
    [anon_sym_LBRACKMultipart_RBRACK] = ACTIONS(39),
    [anon_sym_LBRACKMultipartFormData_RBRACK] = ACTIONS(39),
    [anon_sym_LBRACKCookies_RBRACK] = ACTIONS(39),
    [anon_sym_LBRACKOptions_RBRACK] = ACTIONS(39),
    [anon_sym_file_COMMA] = ACTIONS(39),
    [anon_sym_cacert] = ACTIONS(17),
    [anon_sym_key] = ACTIONS(19),
    [anon_sym_cert] = ACTIONS(21),
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
    [anon_sym_retry_DASHmax_DASHcount] = ACTIONS(25),
    [anon_sym_limit_DASHrate] = ACTIONS(25),
    [anon_sym_max_DASHredirs] = ACTIONS(27),
    [anon_sym_repeat] = ACTIONS(27),
    [anon_sym_retry] = ACTIONS(27),
    [anon_sym_verbosity] = ACTIONS(29),
    [anon_sym_connect_DASHtimeout] = ACTIONS(31),
    [anon_sym_delay] = ACTIONS(31),
    [anon_sym_retry_DASHinterval] = ACTIONS(31),
    [anon_sym_max_DASHtime] = ACTIONS(31),
    [anon_sym_resolve] = ACTIONS(33),
    [anon_sym_aws_DASHsigv4] = ACTIONS(33),
    [anon_sym_connect_DASHto] = ACTIONS(33),
    [anon_sym_header] = ACTIONS(33),
    [anon_sym_netrc_DASHfile] = ACTIONS(33),
    [anon_sym_output] = ACTIONS(33),
    [anon_sym_pinnedpubkey] = ACTIONS(33),
    [anon_sym_proxy] = ACTIONS(33),
    [anon_sym_unix_DASHsocket] = ACTIONS(33),
    [anon_sym_user] = ACTIONS(33),
    [anon_sym_variable] = ACTIONS(35),
    [anon_sym_null] = ACTIONS(39),
    [anon_sym_DQUOTE] = ACTIONS(39),
    [anon_sym_LT] = ACTIONS(39),
    [sym_xml_prolog_tag] = ACTIONS(39),
    [sym_xml_comment] = ACTIONS(39),
    [anon_sym_base64_COMMA] = ACTIONS(39),
    [anon_sym_hex_COMMA] = ACTIONS(39),
    [anon_sym_BQUOTE] = ACTIONS(39),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(39),
    [anon_sym_LBRACE2] = ACTIONS(39),
    [anon_sym_true] = ACTIONS(39),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_LBRACE_LBRACE2] = ACTIONS(39),
    [sym_comment] = ACTIONS(39),
    [sym__json_array_start] = ACTIONS(37),
    [sym__json_number] = ACTIONS(37),
  },
  [4] = {
    [sym_option] = STATE(315),
    [sym_ca_certificate_option] = STATE(439),
    [sym_client_key_option] = STATE(439),
    [sym_cert_option] = STATE(439),
    [sym_boolean_option] = STATE(439),
    [sym_boolean_option_key] = STATE(492),
    [sym_integer_option] = STATE(439),
    [sym_integer_option_key] = STATE(489),
    [sym_count_option] = STATE(439),
    [sym_count_option_key] = STATE(482),
    [sym_verbosity_option] = STATE(439),
    [sym_duration_option] = STATE(439),
    [sym_duration_option_key] = STATE(478),
    [sym_string_option] = STATE(439),
    [sym_string_option_key] = STATE(503),
    [sym_variable_option] = STATE(439),
    [aux_sym_options_section_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(41),
    [anon_sym_LF] = ACTIONS(41),
    [anon_sym_GET] = ACTIONS(43),
    [anon_sym_HEAD] = ACTIONS(43),
    [anon_sym_POST] = ACTIONS(43),
    [anon_sym_PUT] = ACTIONS(43),
    [anon_sym_DELETE] = ACTIONS(43),
    [anon_sym_CONNECT] = ACTIONS(43),
    [anon_sym_OPTIONS] = ACTIONS(43),
    [anon_sym_TRACE] = ACTIONS(43),
    [anon_sym_PATCH] = ACTIONS(43),
    [anon_sym_LINK] = ACTIONS(43),
    [anon_sym_UNLINK] = ACTIONS(43),
    [anon_sym_PURGE] = ACTIONS(43),
    [anon_sym_LOCK] = ACTIONS(43),
    [anon_sym_UNLOCK] = ACTIONS(43),
    [anon_sym_PROPFIND] = ACTIONS(43),
    [anon_sym_VIEW] = ACTIONS(43),
    [aux_sym_method_token1] = ACTIONS(43),
    [anon_sym_HTTP_SLASH1_DOT0] = ACTIONS(43),
    [anon_sym_HTTP_SLASH1_DOT1] = ACTIONS(43),
    [anon_sym_HTTP_SLASH2] = ACTIONS(43),
    [anon_sym_HTTP_SLASH3] = ACTIONS(43),
    [anon_sym_HTTP_SLASH_STAR] = ACTIONS(43),
    [anon_sym_HTTP] = ACTIONS(43),
    [anon_sym_LBRACKBasicAuth_RBRACK] = ACTIONS(43),
    [anon_sym_LBRACKQuery_RBRACK] = ACTIONS(43),
    [anon_sym_LBRACKQueryStringParams_RBRACK] = ACTIONS(43),
    [anon_sym_LBRACKForm_RBRACK] = ACTIONS(43),
    [anon_sym_LBRACKFormParams_RBRACK] = ACTIONS(43),
    [anon_sym_LBRACKMultipart_RBRACK] = ACTIONS(43),
    [anon_sym_LBRACKMultipartFormData_RBRACK] = ACTIONS(43),
    [anon_sym_LBRACKCookies_RBRACK] = ACTIONS(43),
    [anon_sym_LBRACKOptions_RBRACK] = ACTIONS(43),
    [anon_sym_file_COMMA] = ACTIONS(43),
    [anon_sym_cacert] = ACTIONS(45),
    [anon_sym_key] = ACTIONS(48),
    [anon_sym_cert] = ACTIONS(51),
    [anon_sym_digest] = ACTIONS(54),
    [anon_sym_http1_DOT1] = ACTIONS(54),
    [anon_sym_negotiate] = ACTIONS(54),
    [anon_sym_ntlm] = ACTIONS(54),
    [anon_sym_compressed] = ACTIONS(54),
    [anon_sym_location] = ACTIONS(54),
    [anon_sym_location_DASHtrusted] = ACTIONS(54),
    [anon_sym_http1_DOT0] = ACTIONS(54),
    [anon_sym_http2] = ACTIONS(54),
    [anon_sym_http3] = ACTIONS(54),
    [anon_sym_insecure] = ACTIONS(54),
    [anon_sym_ipv4] = ACTIONS(54),
    [anon_sym_ipv6] = ACTIONS(54),
    [anon_sym_netrc] = ACTIONS(54),
    [anon_sym_netrc_DASHoptional] = ACTIONS(54),
    [anon_sym_path_DASHas_DASHis] = ACTIONS(54),
    [anon_sym_skip] = ACTIONS(54),
    [anon_sym_verbose] = ACTIONS(54),
    [anon_sym_very_DASHverbose] = ACTIONS(54),
    [anon_sym_retry_DASHmax_DASHcount] = ACTIONS(57),
    [anon_sym_limit_DASHrate] = ACTIONS(57),
    [anon_sym_max_DASHredirs] = ACTIONS(60),
    [anon_sym_repeat] = ACTIONS(60),
    [anon_sym_retry] = ACTIONS(60),
    [anon_sym_verbosity] = ACTIONS(63),
    [anon_sym_connect_DASHtimeout] = ACTIONS(66),
    [anon_sym_delay] = ACTIONS(66),
    [anon_sym_retry_DASHinterval] = ACTIONS(66),
    [anon_sym_max_DASHtime] = ACTIONS(66),
    [anon_sym_resolve] = ACTIONS(69),
    [anon_sym_aws_DASHsigv4] = ACTIONS(69),
    [anon_sym_connect_DASHto] = ACTIONS(69),
    [anon_sym_header] = ACTIONS(69),
    [anon_sym_netrc_DASHfile] = ACTIONS(69),
    [anon_sym_output] = ACTIONS(69),
    [anon_sym_pinnedpubkey] = ACTIONS(69),
    [anon_sym_proxy] = ACTIONS(69),
    [anon_sym_unix_DASHsocket] = ACTIONS(69),
    [anon_sym_user] = ACTIONS(69),
    [anon_sym_variable] = ACTIONS(72),
    [anon_sym_null] = ACTIONS(43),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [anon_sym_LT] = ACTIONS(43),
    [sym_xml_prolog_tag] = ACTIONS(43),
    [sym_xml_comment] = ACTIONS(43),
    [anon_sym_base64_COMMA] = ACTIONS(43),
    [anon_sym_hex_COMMA] = ACTIONS(43),
    [anon_sym_BQUOTE] = ACTIONS(43),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(43),
    [anon_sym_LBRACE2] = ACTIONS(43),
    [anon_sym_true] = ACTIONS(43),
    [anon_sym_false] = ACTIONS(43),
    [anon_sym_LBRACE_LBRACE2] = ACTIONS(43),
    [sym_comment] = ACTIONS(43),
    [sym__json_array_start] = ACTIONS(41),
    [sym__json_number] = ACTIONS(41),
  },
  [5] = {
    [aux_sym__comment_or_new_line_repeat1] = STATE(5),
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
    [aux_sym_method_token1] = ACTIONS(80),
    [anon_sym_HTTP_SLASH1_DOT0] = ACTIONS(80),
    [anon_sym_HTTP_SLASH1_DOT1] = ACTIONS(80),
    [anon_sym_HTTP_SLASH2] = ACTIONS(80),
    [anon_sym_HTTP_SLASH3] = ACTIONS(80),
    [anon_sym_HTTP_SLASH_STAR] = ACTIONS(80),
    [anon_sym_HTTP] = ACTIONS(80),
    [anon_sym_LBRACKBasicAuth_RBRACK] = ACTIONS(80),
    [anon_sym_LBRACKQuery_RBRACK] = ACTIONS(80),
    [anon_sym_LBRACKQueryStringParams_RBRACK] = ACTIONS(80),
    [anon_sym_LBRACKForm_RBRACK] = ACTIONS(80),
    [anon_sym_LBRACKFormParams_RBRACK] = ACTIONS(80),
    [anon_sym_LBRACKMultipart_RBRACK] = ACTIONS(80),
    [anon_sym_LBRACKMultipartFormData_RBRACK] = ACTIONS(80),
    [anon_sym_LBRACKCookies_RBRACK] = ACTIONS(80),
    [anon_sym_LBRACKOptions_RBRACK] = ACTIONS(80),
    [anon_sym_file_COMMA] = ACTIONS(80),
    [anon_sym_cacert] = ACTIONS(80),
    [anon_sym_key] = ACTIONS(80),
    [anon_sym_cert] = ACTIONS(80),
    [anon_sym_digest] = ACTIONS(80),
    [anon_sym_http1_DOT1] = ACTIONS(80),
    [anon_sym_negotiate] = ACTIONS(80),
    [anon_sym_ntlm] = ACTIONS(80),
    [anon_sym_compressed] = ACTIONS(80),
    [anon_sym_location] = ACTIONS(80),
    [anon_sym_location_DASHtrusted] = ACTIONS(80),
    [anon_sym_http1_DOT0] = ACTIONS(80),
    [anon_sym_http2] = ACTIONS(80),
    [anon_sym_http3] = ACTIONS(80),
    [anon_sym_insecure] = ACTIONS(80),
    [anon_sym_ipv4] = ACTIONS(80),
    [anon_sym_ipv6] = ACTIONS(80),
    [anon_sym_netrc] = ACTIONS(80),
    [anon_sym_netrc_DASHoptional] = ACTIONS(80),
    [anon_sym_path_DASHas_DASHis] = ACTIONS(80),
    [anon_sym_skip] = ACTIONS(80),
    [anon_sym_verbose] = ACTIONS(80),
    [anon_sym_very_DASHverbose] = ACTIONS(80),
    [anon_sym_retry_DASHmax_DASHcount] = ACTIONS(80),
    [anon_sym_limit_DASHrate] = ACTIONS(80),
    [anon_sym_max_DASHredirs] = ACTIONS(80),
    [anon_sym_repeat] = ACTIONS(80),
    [anon_sym_retry] = ACTIONS(80),
    [anon_sym_verbosity] = ACTIONS(80),
    [anon_sym_connect_DASHtimeout] = ACTIONS(80),
    [anon_sym_delay] = ACTIONS(80),
    [anon_sym_retry_DASHinterval] = ACTIONS(80),
    [anon_sym_max_DASHtime] = ACTIONS(80),
    [anon_sym_resolve] = ACTIONS(80),
    [anon_sym_aws_DASHsigv4] = ACTIONS(80),
    [anon_sym_connect_DASHto] = ACTIONS(80),
    [anon_sym_header] = ACTIONS(80),
    [anon_sym_netrc_DASHfile] = ACTIONS(80),
    [anon_sym_output] = ACTIONS(80),
    [anon_sym_pinnedpubkey] = ACTIONS(80),
    [anon_sym_proxy] = ACTIONS(80),
    [anon_sym_unix_DASHsocket] = ACTIONS(80),
    [anon_sym_user] = ACTIONS(80),
    [anon_sym_variable] = ACTIONS(80),
    [anon_sym_null] = ACTIONS(80),
    [anon_sym_DQUOTE] = ACTIONS(80),
    [anon_sym_LT] = ACTIONS(80),
    [sym_xml_prolog_tag] = ACTIONS(80),
    [sym_xml_comment] = ACTIONS(80),
    [anon_sym_base64_COMMA] = ACTIONS(80),
    [anon_sym_hex_COMMA] = ACTIONS(80),
    [anon_sym_BQUOTE] = ACTIONS(80),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(80),
    [anon_sym_LBRACE2] = ACTIONS(80),
    [anon_sym_true] = ACTIONS(80),
    [anon_sym_false] = ACTIONS(80),
    [anon_sym_LBRACE_LBRACE2] = ACTIONS(80),
    [sym_comment] = ACTIONS(82),
    [sym__json_array_start] = ACTIONS(75),
    [sym__json_number] = ACTIONS(75),
  },
  [6] = {
    [aux_sym__comment_or_new_line_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(85),
    [anon_sym_LF] = ACTIONS(87),
    [anon_sym_GET] = ACTIONS(89),
    [anon_sym_HEAD] = ACTIONS(89),
    [anon_sym_POST] = ACTIONS(89),
    [anon_sym_PUT] = ACTIONS(89),
    [anon_sym_DELETE] = ACTIONS(89),
    [anon_sym_CONNECT] = ACTIONS(89),
    [anon_sym_OPTIONS] = ACTIONS(89),
    [anon_sym_TRACE] = ACTIONS(89),
    [anon_sym_PATCH] = ACTIONS(89),
    [anon_sym_LINK] = ACTIONS(89),
    [anon_sym_UNLINK] = ACTIONS(89),
    [anon_sym_PURGE] = ACTIONS(89),
    [anon_sym_LOCK] = ACTIONS(89),
    [anon_sym_UNLOCK] = ACTIONS(89),
    [anon_sym_PROPFIND] = ACTIONS(89),
    [anon_sym_VIEW] = ACTIONS(89),
    [aux_sym_method_token1] = ACTIONS(89),
    [anon_sym_HTTP_SLASH1_DOT0] = ACTIONS(89),
    [anon_sym_HTTP_SLASH1_DOT1] = ACTIONS(89),
    [anon_sym_HTTP_SLASH2] = ACTIONS(89),
    [anon_sym_HTTP_SLASH3] = ACTIONS(89),
    [anon_sym_HTTP_SLASH_STAR] = ACTIONS(89),
    [anon_sym_HTTP] = ACTIONS(89),
    [anon_sym_LBRACKBasicAuth_RBRACK] = ACTIONS(89),
    [anon_sym_LBRACKQuery_RBRACK] = ACTIONS(89),
    [anon_sym_LBRACKQueryStringParams_RBRACK] = ACTIONS(89),
    [anon_sym_LBRACKForm_RBRACK] = ACTIONS(89),
    [anon_sym_LBRACKFormParams_RBRACK] = ACTIONS(89),
    [anon_sym_LBRACKMultipart_RBRACK] = ACTIONS(89),
    [anon_sym_LBRACKMultipartFormData_RBRACK] = ACTIONS(89),
    [anon_sym_LBRACKCookies_RBRACK] = ACTIONS(89),
    [anon_sym_LBRACKOptions_RBRACK] = ACTIONS(89),
    [anon_sym_file_COMMA] = ACTIONS(89),
    [anon_sym_cacert] = ACTIONS(89),
    [anon_sym_key] = ACTIONS(89),
    [anon_sym_cert] = ACTIONS(89),
    [anon_sym_digest] = ACTIONS(89),
    [anon_sym_http1_DOT1] = ACTIONS(89),
    [anon_sym_negotiate] = ACTIONS(89),
    [anon_sym_ntlm] = ACTIONS(89),
    [anon_sym_compressed] = ACTIONS(89),
    [anon_sym_location] = ACTIONS(89),
    [anon_sym_location_DASHtrusted] = ACTIONS(89),
    [anon_sym_http1_DOT0] = ACTIONS(89),
    [anon_sym_http2] = ACTIONS(89),
    [anon_sym_http3] = ACTIONS(89),
    [anon_sym_insecure] = ACTIONS(89),
    [anon_sym_ipv4] = ACTIONS(89),
    [anon_sym_ipv6] = ACTIONS(89),
    [anon_sym_netrc] = ACTIONS(89),
    [anon_sym_netrc_DASHoptional] = ACTIONS(89),
    [anon_sym_path_DASHas_DASHis] = ACTIONS(89),
    [anon_sym_skip] = ACTIONS(89),
    [anon_sym_verbose] = ACTIONS(89),
    [anon_sym_very_DASHverbose] = ACTIONS(89),
    [anon_sym_retry_DASHmax_DASHcount] = ACTIONS(89),
    [anon_sym_limit_DASHrate] = ACTIONS(89),
    [anon_sym_max_DASHredirs] = ACTIONS(89),
    [anon_sym_repeat] = ACTIONS(89),
    [anon_sym_retry] = ACTIONS(89),
    [anon_sym_verbosity] = ACTIONS(89),
    [anon_sym_connect_DASHtimeout] = ACTIONS(89),
    [anon_sym_delay] = ACTIONS(89),
    [anon_sym_retry_DASHinterval] = ACTIONS(89),
    [anon_sym_max_DASHtime] = ACTIONS(89),
    [anon_sym_resolve] = ACTIONS(89),
    [anon_sym_aws_DASHsigv4] = ACTIONS(89),
    [anon_sym_connect_DASHto] = ACTIONS(89),
    [anon_sym_header] = ACTIONS(89),
    [anon_sym_netrc_DASHfile] = ACTIONS(89),
    [anon_sym_output] = ACTIONS(89),
    [anon_sym_pinnedpubkey] = ACTIONS(89),
    [anon_sym_proxy] = ACTIONS(89),
    [anon_sym_unix_DASHsocket] = ACTIONS(89),
    [anon_sym_user] = ACTIONS(89),
    [anon_sym_variable] = ACTIONS(89),
    [anon_sym_null] = ACTIONS(89),
    [anon_sym_DQUOTE] = ACTIONS(89),
    [anon_sym_LT] = ACTIONS(89),
    [sym_xml_prolog_tag] = ACTIONS(89),
    [sym_xml_comment] = ACTIONS(89),
    [anon_sym_base64_COMMA] = ACTIONS(89),
    [anon_sym_hex_COMMA] = ACTIONS(89),
    [anon_sym_BQUOTE] = ACTIONS(89),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(89),
    [anon_sym_LBRACE2] = ACTIONS(89),
    [anon_sym_true] = ACTIONS(89),
    [anon_sym_false] = ACTIONS(89),
    [anon_sym_LBRACE_LBRACE2] = ACTIONS(89),
    [sym_comment] = ACTIONS(91),
    [sym__json_array_start] = ACTIONS(85),
    [sym__json_number] = ACTIONS(85),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(41),
    [anon_sym_LF] = ACTIONS(41),
    [anon_sym_GET] = ACTIONS(43),
    [anon_sym_HEAD] = ACTIONS(43),
    [anon_sym_POST] = ACTIONS(43),
    [anon_sym_PUT] = ACTIONS(43),
    [anon_sym_DELETE] = ACTIONS(43),
    [anon_sym_CONNECT] = ACTIONS(43),
    [anon_sym_OPTIONS] = ACTIONS(43),
    [anon_sym_TRACE] = ACTIONS(43),
    [anon_sym_PATCH] = ACTIONS(43),
    [anon_sym_LINK] = ACTIONS(43),
    [anon_sym_UNLINK] = ACTIONS(43),
    [anon_sym_PURGE] = ACTIONS(43),
    [anon_sym_LOCK] = ACTIONS(43),
    [anon_sym_UNLOCK] = ACTIONS(43),
    [anon_sym_PROPFIND] = ACTIONS(43),
    [anon_sym_VIEW] = ACTIONS(43),
    [aux_sym_method_token1] = ACTIONS(43),
    [anon_sym_HTTP_SLASH1_DOT0] = ACTIONS(43),
    [anon_sym_HTTP_SLASH1_DOT1] = ACTIONS(43),
    [anon_sym_HTTP_SLASH2] = ACTIONS(43),
    [anon_sym_HTTP_SLASH3] = ACTIONS(43),
    [anon_sym_HTTP_SLASH_STAR] = ACTIONS(43),
    [anon_sym_HTTP] = ACTIONS(43),
    [anon_sym_LBRACKBasicAuth_RBRACK] = ACTIONS(43),
    [anon_sym_LBRACKQuery_RBRACK] = ACTIONS(43),
    [anon_sym_LBRACKQueryStringParams_RBRACK] = ACTIONS(43),
    [anon_sym_LBRACKForm_RBRACK] = ACTIONS(43),
    [anon_sym_LBRACKFormParams_RBRACK] = ACTIONS(43),
    [anon_sym_LBRACKMultipart_RBRACK] = ACTIONS(43),
    [anon_sym_LBRACKMultipartFormData_RBRACK] = ACTIONS(43),
    [anon_sym_LBRACKCookies_RBRACK] = ACTIONS(43),
    [anon_sym_LBRACKOptions_RBRACK] = ACTIONS(43),
    [anon_sym_file_COMMA] = ACTIONS(43),
    [anon_sym_cacert] = ACTIONS(43),
    [anon_sym_key] = ACTIONS(43),
    [anon_sym_cert] = ACTIONS(43),
    [anon_sym_digest] = ACTIONS(43),
    [anon_sym_http1_DOT1] = ACTIONS(43),
    [anon_sym_negotiate] = ACTIONS(43),
    [anon_sym_ntlm] = ACTIONS(43),
    [anon_sym_compressed] = ACTIONS(43),
    [anon_sym_location] = ACTIONS(43),
    [anon_sym_location_DASHtrusted] = ACTIONS(43),
    [anon_sym_http1_DOT0] = ACTIONS(43),
    [anon_sym_http2] = ACTIONS(43),
    [anon_sym_http3] = ACTIONS(43),
    [anon_sym_insecure] = ACTIONS(43),
    [anon_sym_ipv4] = ACTIONS(43),
    [anon_sym_ipv6] = ACTIONS(43),
    [anon_sym_netrc] = ACTIONS(43),
    [anon_sym_netrc_DASHoptional] = ACTIONS(43),
    [anon_sym_path_DASHas_DASHis] = ACTIONS(43),
    [anon_sym_skip] = ACTIONS(43),
    [anon_sym_verbose] = ACTIONS(43),
    [anon_sym_very_DASHverbose] = ACTIONS(43),
    [anon_sym_retry_DASHmax_DASHcount] = ACTIONS(43),
    [anon_sym_limit_DASHrate] = ACTIONS(43),
    [anon_sym_max_DASHredirs] = ACTIONS(43),
    [anon_sym_repeat] = ACTIONS(43),
    [anon_sym_retry] = ACTIONS(43),
    [anon_sym_verbosity] = ACTIONS(43),
    [anon_sym_connect_DASHtimeout] = ACTIONS(43),
    [anon_sym_delay] = ACTIONS(43),
    [anon_sym_retry_DASHinterval] = ACTIONS(43),
    [anon_sym_max_DASHtime] = ACTIONS(43),
    [anon_sym_resolve] = ACTIONS(43),
    [anon_sym_aws_DASHsigv4] = ACTIONS(43),
    [anon_sym_connect_DASHto] = ACTIONS(43),
    [anon_sym_header] = ACTIONS(43),
    [anon_sym_netrc_DASHfile] = ACTIONS(43),
    [anon_sym_output] = ACTIONS(43),
    [anon_sym_pinnedpubkey] = ACTIONS(43),
    [anon_sym_proxy] = ACTIONS(43),
    [anon_sym_unix_DASHsocket] = ACTIONS(43),
    [anon_sym_user] = ACTIONS(43),
    [anon_sym_variable] = ACTIONS(43),
    [anon_sym_null] = ACTIONS(43),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [anon_sym_LT] = ACTIONS(43),
    [sym_xml_prolog_tag] = ACTIONS(43),
    [sym_xml_comment] = ACTIONS(43),
    [anon_sym_base64_COMMA] = ACTIONS(43),
    [anon_sym_hex_COMMA] = ACTIONS(43),
    [anon_sym_BQUOTE] = ACTIONS(43),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(43),
    [anon_sym_LBRACE2] = ACTIONS(43),
    [anon_sym_true] = ACTIONS(43),
    [anon_sym_false] = ACTIONS(43),
    [anon_sym_LBRACE_LBRACE2] = ACTIONS(43),
    [sym_comment] = ACTIONS(43),
    [sym__json_array_start] = ACTIONS(41),
    [sym__json_number] = ACTIONS(41),
  },
  [8] = {
    [sym_predicate] = STATE(248),
    [sym_predicate_func] = STATE(440),
    [sym_simple_predicate] = STATE(452),
    [sym_equal_predicate] = STATE(452),
    [sym_not_equal_predicate] = STATE(452),
    [sym_greater_predicate] = STATE(452),
    [sym_greater_or_equal_predicate] = STATE(452),
    [sym_less_predicate] = STATE(452),
    [sym_less_or_equal_predicate] = STATE(452),
    [sym_start_with_predicate] = STATE(452),
    [sym_end_with_predicate] = STATE(452),
    [sym_contain_predicate] = STATE(452),
    [sym_match_predicate] = STATE(452),
    [sym_include_predicate] = STATE(452),
    [sym_filter] = STATE(17),
    [sym_simple_filter_key] = STATE(32),
    [sym_argument_filter] = STATE(32),
    [sym_regex_filter] = STATE(32),
    [sym_nth_filter] = STATE(32),
    [sym_replace_filter] = STATE(32),
    [sym_replace_regex_filter] = STATE(32),
    [sym_split_filter] = STATE(32),
    [sym_xpath_filter] = STATE(32),
    [aux_sym_capture_repeat1] = STATE(17),
    [anon_sym_location] = ACTIONS(93),
    [anon_sym_xpath] = ACTIONS(95),
    [anon_sym_jsonpath] = ACTIONS(97),
    [anon_sym_regex] = ACTIONS(99),
    [anon_sym_not] = ACTIONS(101),
    [anon_sym_isDate] = ACTIONS(103),
    [anon_sym_isList] = ACTIONS(103),
    [anon_sym_isObject] = ACTIONS(103),
    [anon_sym_exists] = ACTIONS(103),
    [anon_sym_isInteger] = ACTIONS(103),
    [anon_sym_isFloat] = ACTIONS(103),
    [anon_sym_isBoolean] = ACTIONS(103),
    [anon_sym_isString] = ACTIONS(103),
    [anon_sym_isCollection] = ACTIONS(103),
    [anon_sym_isNumber] = ACTIONS(103),
    [anon_sym_isIsoDate] = ACTIONS(103),
    [anon_sym_isEmpty] = ACTIONS(103),
    [anon_sym_isIpv4] = ACTIONS(103),
    [anon_sym_isIpv6] = ACTIONS(103),
    [anon_sym_isUuid] = ACTIONS(103),
    [anon_sym_equals] = ACTIONS(105),
    [anon_sym_EQ_EQ] = ACTIONS(107),
    [anon_sym_notEquals] = ACTIONS(109),
    [anon_sym_BANG_EQ] = ACTIONS(111),
    [anon_sym_greaterThan] = ACTIONS(113),
    [anon_sym_GT] = ACTIONS(115),
    [anon_sym_greaterThanOrEquals] = ACTIONS(117),
    [anon_sym_GT_EQ] = ACTIONS(119),
    [anon_sym_lessThan] = ACTIONS(121),
    [anon_sym_LT] = ACTIONS(123),
    [anon_sym_lessThanOrEquals] = ACTIONS(125),
    [anon_sym_LT_EQ] = ACTIONS(127),
    [anon_sym_startsWith] = ACTIONS(129),
    [anon_sym_endsWith] = ACTIONS(131),
    [anon_sym_contains] = ACTIONS(133),
    [anon_sym_matches] = ACTIONS(135),
    [anon_sym_includes] = ACTIONS(137),
    [anon_sym_base64Decode] = ACTIONS(93),
    [anon_sym_base64Encode] = ACTIONS(93),
    [anon_sym_base64UrlSafeDecode] = ACTIONS(93),
    [anon_sym_base64UrlSafeEncode] = ACTIONS(93),
    [anon_sym_first] = ACTIONS(93),
    [anon_sym_last] = ACTIONS(93),
    [anon_sym_toFloat] = ACTIONS(93),
    [anon_sym_toHex] = ACTIONS(93),
    [anon_sym_toString] = ACTIONS(93),
    [anon_sym_utf8Decode] = ACTIONS(93),
    [anon_sym_utf8Encode] = ACTIONS(93),
    [anon_sym_count] = ACTIONS(93),
    [anon_sym_urlEncode] = ACTIONS(93),
    [anon_sym_urlDecode] = ACTIONS(93),
    [anon_sym_toInt] = ACTIONS(93),
    [anon_sym_htmlEscape] = ACTIONS(93),
    [anon_sym_htmlUnescape] = ACTIONS(93),
    [anon_sym_daysAfterNow] = ACTIONS(93),
    [anon_sym_daysBeforeNow] = ACTIONS(93),
    [anon_sym_charsetDecode] = ACTIONS(97),
    [anon_sym_dateFormat] = ACTIONS(97),
    [anon_sym_urlQueryParam] = ACTIONS(97),
    [anon_sym_decode] = ACTIONS(97),
    [anon_sym_format] = ACTIONS(97),
    [anon_sym_toDate] = ACTIONS(97),
    [anon_sym_nth] = ACTIONS(139),
    [anon_sym_replace] = ACTIONS(141),
    [anon_sym_replaceRegex] = ACTIONS(143),
    [anon_sym_split] = ACTIONS(145),
    [sym_comment] = ACTIONS(3),
  },
  [9] = {
    [sym_predicate] = STATE(313),
    [sym_predicate_func] = STATE(440),
    [sym_simple_predicate] = STATE(452),
    [sym_equal_predicate] = STATE(452),
    [sym_not_equal_predicate] = STATE(452),
    [sym_greater_predicate] = STATE(452),
    [sym_greater_or_equal_predicate] = STATE(452),
    [sym_less_predicate] = STATE(452),
    [sym_less_or_equal_predicate] = STATE(452),
    [sym_start_with_predicate] = STATE(452),
    [sym_end_with_predicate] = STATE(452),
    [sym_contain_predicate] = STATE(452),
    [sym_match_predicate] = STATE(452),
    [sym_include_predicate] = STATE(452),
    [sym_filter] = STATE(8),
    [sym_simple_filter_key] = STATE(32),
    [sym_argument_filter] = STATE(32),
    [sym_regex_filter] = STATE(32),
    [sym_nth_filter] = STATE(32),
    [sym_replace_filter] = STATE(32),
    [sym_replace_regex_filter] = STATE(32),
    [sym_split_filter] = STATE(32),
    [sym_xpath_filter] = STATE(32),
    [aux_sym_capture_repeat1] = STATE(8),
    [anon_sym_location] = ACTIONS(93),
    [anon_sym_xpath] = ACTIONS(95),
    [anon_sym_jsonpath] = ACTIONS(97),
    [anon_sym_regex] = ACTIONS(99),
    [anon_sym_not] = ACTIONS(101),
    [anon_sym_isDate] = ACTIONS(103),
    [anon_sym_isList] = ACTIONS(103),
    [anon_sym_isObject] = ACTIONS(103),
    [anon_sym_exists] = ACTIONS(103),
    [anon_sym_isInteger] = ACTIONS(103),
    [anon_sym_isFloat] = ACTIONS(103),
    [anon_sym_isBoolean] = ACTIONS(103),
    [anon_sym_isString] = ACTIONS(103),
    [anon_sym_isCollection] = ACTIONS(103),
    [anon_sym_isNumber] = ACTIONS(103),
    [anon_sym_isIsoDate] = ACTIONS(103),
    [anon_sym_isEmpty] = ACTIONS(103),
    [anon_sym_isIpv4] = ACTIONS(103),
    [anon_sym_isIpv6] = ACTIONS(103),
    [anon_sym_isUuid] = ACTIONS(103),
    [anon_sym_equals] = ACTIONS(105),
    [anon_sym_EQ_EQ] = ACTIONS(107),
    [anon_sym_notEquals] = ACTIONS(109),
    [anon_sym_BANG_EQ] = ACTIONS(111),
    [anon_sym_greaterThan] = ACTIONS(113),
    [anon_sym_GT] = ACTIONS(115),
    [anon_sym_greaterThanOrEquals] = ACTIONS(117),
    [anon_sym_GT_EQ] = ACTIONS(119),
    [anon_sym_lessThan] = ACTIONS(121),
    [anon_sym_LT] = ACTIONS(123),
    [anon_sym_lessThanOrEquals] = ACTIONS(125),
    [anon_sym_LT_EQ] = ACTIONS(127),
    [anon_sym_startsWith] = ACTIONS(129),
    [anon_sym_endsWith] = ACTIONS(131),
    [anon_sym_contains] = ACTIONS(133),
    [anon_sym_matches] = ACTIONS(135),
    [anon_sym_includes] = ACTIONS(137),
    [anon_sym_base64Decode] = ACTIONS(93),
    [anon_sym_base64Encode] = ACTIONS(93),
    [anon_sym_base64UrlSafeDecode] = ACTIONS(93),
    [anon_sym_base64UrlSafeEncode] = ACTIONS(93),
    [anon_sym_first] = ACTIONS(93),
    [anon_sym_last] = ACTIONS(93),
    [anon_sym_toFloat] = ACTIONS(93),
    [anon_sym_toHex] = ACTIONS(93),
    [anon_sym_toString] = ACTIONS(93),
    [anon_sym_utf8Decode] = ACTIONS(93),
    [anon_sym_utf8Encode] = ACTIONS(93),
    [anon_sym_count] = ACTIONS(93),
    [anon_sym_urlEncode] = ACTIONS(93),
    [anon_sym_urlDecode] = ACTIONS(93),
    [anon_sym_toInt] = ACTIONS(93),
    [anon_sym_htmlEscape] = ACTIONS(93),
    [anon_sym_htmlUnescape] = ACTIONS(93),
    [anon_sym_daysAfterNow] = ACTIONS(93),
    [anon_sym_daysBeforeNow] = ACTIONS(93),
    [anon_sym_charsetDecode] = ACTIONS(97),
    [anon_sym_dateFormat] = ACTIONS(97),
    [anon_sym_urlQueryParam] = ACTIONS(97),
    [anon_sym_decode] = ACTIONS(97),
    [anon_sym_format] = ACTIONS(97),
    [anon_sym_toDate] = ACTIONS(97),
    [anon_sym_nth] = ACTIONS(139),
    [anon_sym_replace] = ACTIONS(141),
    [anon_sym_replaceRegex] = ACTIONS(143),
    [anon_sym_split] = ACTIONS(145),
    [sym_comment] = ACTIONS(3),
  },
  [10] = {
    [sym_header] = STATE(13),
    [sym_body] = STATE(122),
    [sym_request_section] = STATE(16),
    [sym_basic_auth_section] = STATE(71),
    [sym_query_string_params_section] = STATE(71),
    [sym_form_params_section] = STATE(71),
    [sym_multipart_form_data_section] = STATE(71),
    [sym_cookies_section] = STATE(71),
    [sym_options_section] = STATE(71),
    [sym_key_value] = STATE(284),
    [sym_bytes] = STATE(286),
    [sym_xml] = STATE(447),
    [sym_xml_tag] = STATE(446),
    [sym_xml_self_closing_tag] = STATE(445),
    [sym_xml_open_tag] = STATE(159),
    [sym_oneline_base64] = STATE(447),
    [sym_oneline_file] = STATE(447),
    [sym_oneline_hex] = STATE(447),
    [sym_key_string] = STATE(491),
    [sym__bracketed_key_content] = STATE(208),
    [sym__key_template] = STATE(205),
    [sym_key_string_content] = STATE(208),
    [sym_oneline_string] = STATE(447),
    [sym_multiline_string] = STATE(447),
    [sym_json_value] = STATE(447),
    [sym_json_object] = STATE(458),
    [sym_json_array] = STATE(458),
    [sym_json_string] = STATE(458),
    [sym_json_number] = STATE(458),
    [sym_json_boolean] = STATE(458),
    [sym_template] = STATE(458),
    [aux_sym_request_repeat1] = STATE(13),
    [aux_sym_request_repeat2] = STATE(16),
    [aux_sym_xml_repeat1] = STATE(222),
    [aux_sym_key_string_content_repeat1] = STATE(287),
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
    [aux_sym_method_token1] = ACTIONS(149),
    [anon_sym_HTTP_SLASH1_DOT0] = ACTIONS(149),
    [anon_sym_HTTP_SLASH1_DOT1] = ACTIONS(149),
    [anon_sym_HTTP_SLASH2] = ACTIONS(149),
    [anon_sym_HTTP_SLASH3] = ACTIONS(149),
    [anon_sym_HTTP_SLASH_STAR] = ACTIONS(149),
    [anon_sym_HTTP] = ACTIONS(149),
    [anon_sym_LBRACKBasicAuth_RBRACK] = ACTIONS(151),
    [anon_sym_LBRACKQuery_RBRACK] = ACTIONS(153),
    [anon_sym_LBRACKQueryStringParams_RBRACK] = ACTIONS(153),
    [anon_sym_LBRACKForm_RBRACK] = ACTIONS(155),
    [anon_sym_LBRACKFormParams_RBRACK] = ACTIONS(155),
    [anon_sym_LBRACKMultipart_RBRACK] = ACTIONS(157),
    [anon_sym_LBRACKMultipartFormData_RBRACK] = ACTIONS(157),
    [anon_sym_LBRACKCookies_RBRACK] = ACTIONS(159),
    [anon_sym_LBRACKOptions_RBRACK] = ACTIONS(161),
    [anon_sym_file_COMMA] = ACTIONS(163),
    [anon_sym_null] = ACTIONS(165),
    [anon_sym_DQUOTE] = ACTIONS(167),
    [anon_sym_LT] = ACTIONS(169),
    [sym_xml_prolog_tag] = ACTIONS(171),
    [sym_xml_comment] = ACTIONS(171),
    [anon_sym_base64_COMMA] = ACTIONS(173),
    [anon_sym_hex_COMMA] = ACTIONS(175),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(177),
    [sym_key_string_text] = ACTIONS(179),
    [sym_key_string_escaped_char] = ACTIONS(181),
    [anon_sym_BQUOTE] = ACTIONS(183),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(185),
    [anon_sym_LBRACE2] = ACTIONS(187),
    [anon_sym_true] = ACTIONS(189),
    [anon_sym_false] = ACTIONS(189),
    [anon_sym_LBRACE_LBRACE2] = ACTIONS(191),
    [sym_comment] = ACTIONS(149),
    [sym__json_array_start] = ACTIONS(193),
    [sym__bracketed_key_start] = ACTIONS(195),
    [sym__json_number] = ACTIONS(197),
  },
  [11] = {
    [sym_header] = STATE(12),
    [sym_body] = STATE(126),
    [sym_request_section] = STATE(14),
    [sym_basic_auth_section] = STATE(71),
    [sym_query_string_params_section] = STATE(71),
    [sym_form_params_section] = STATE(71),
    [sym_multipart_form_data_section] = STATE(71),
    [sym_cookies_section] = STATE(71),
    [sym_options_section] = STATE(71),
    [sym_key_value] = STATE(284),
    [sym_bytes] = STATE(286),
    [sym_xml] = STATE(447),
    [sym_xml_tag] = STATE(446),
    [sym_xml_self_closing_tag] = STATE(445),
    [sym_xml_open_tag] = STATE(159),
    [sym_oneline_base64] = STATE(447),
    [sym_oneline_file] = STATE(447),
    [sym_oneline_hex] = STATE(447),
    [sym_key_string] = STATE(491),
    [sym__bracketed_key_content] = STATE(208),
    [sym__key_template] = STATE(205),
    [sym_key_string_content] = STATE(208),
    [sym_oneline_string] = STATE(447),
    [sym_multiline_string] = STATE(447),
    [sym_json_value] = STATE(447),
    [sym_json_object] = STATE(458),
    [sym_json_array] = STATE(458),
    [sym_json_string] = STATE(458),
    [sym_json_number] = STATE(458),
    [sym_json_boolean] = STATE(458),
    [sym_template] = STATE(458),
    [aux_sym_request_repeat1] = STATE(12),
    [aux_sym_request_repeat2] = STATE(14),
    [aux_sym_xml_repeat1] = STATE(222),
    [aux_sym_key_string_content_repeat1] = STATE(287),
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
    [aux_sym_method_token1] = ACTIONS(201),
    [anon_sym_HTTP_SLASH1_DOT0] = ACTIONS(201),
    [anon_sym_HTTP_SLASH1_DOT1] = ACTIONS(201),
    [anon_sym_HTTP_SLASH2] = ACTIONS(201),
    [anon_sym_HTTP_SLASH3] = ACTIONS(201),
    [anon_sym_HTTP_SLASH_STAR] = ACTIONS(201),
    [anon_sym_HTTP] = ACTIONS(201),
    [anon_sym_LBRACKBasicAuth_RBRACK] = ACTIONS(151),
    [anon_sym_LBRACKQuery_RBRACK] = ACTIONS(153),
    [anon_sym_LBRACKQueryStringParams_RBRACK] = ACTIONS(153),
    [anon_sym_LBRACKForm_RBRACK] = ACTIONS(155),
    [anon_sym_LBRACKFormParams_RBRACK] = ACTIONS(155),
    [anon_sym_LBRACKMultipart_RBRACK] = ACTIONS(157),
    [anon_sym_LBRACKMultipartFormData_RBRACK] = ACTIONS(157),
    [anon_sym_LBRACKCookies_RBRACK] = ACTIONS(159),
    [anon_sym_LBRACKOptions_RBRACK] = ACTIONS(161),
    [anon_sym_file_COMMA] = ACTIONS(163),
    [anon_sym_null] = ACTIONS(165),
    [anon_sym_DQUOTE] = ACTIONS(167),
    [anon_sym_LT] = ACTIONS(169),
    [sym_xml_prolog_tag] = ACTIONS(171),
    [sym_xml_comment] = ACTIONS(171),
    [anon_sym_base64_COMMA] = ACTIONS(173),
    [anon_sym_hex_COMMA] = ACTIONS(175),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(177),
    [sym_key_string_text] = ACTIONS(179),
    [sym_key_string_escaped_char] = ACTIONS(181),
    [anon_sym_BQUOTE] = ACTIONS(183),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(185),
    [anon_sym_LBRACE2] = ACTIONS(187),
    [anon_sym_true] = ACTIONS(189),
    [anon_sym_false] = ACTIONS(189),
    [anon_sym_LBRACE_LBRACE2] = ACTIONS(191),
    [sym_comment] = ACTIONS(201),
    [sym__json_array_start] = ACTIONS(193),
    [sym__bracketed_key_start] = ACTIONS(195),
    [sym__json_number] = ACTIONS(197),
  },
  [12] = {
    [sym_header] = STATE(49),
    [sym_body] = STATE(122),
    [sym_request_section] = STATE(16),
    [sym_basic_auth_section] = STATE(71),
    [sym_query_string_params_section] = STATE(71),
    [sym_form_params_section] = STATE(71),
    [sym_multipart_form_data_section] = STATE(71),
    [sym_cookies_section] = STATE(71),
    [sym_options_section] = STATE(71),
    [sym_key_value] = STATE(284),
    [sym_bytes] = STATE(286),
    [sym_xml] = STATE(447),
    [sym_xml_tag] = STATE(446),
    [sym_xml_self_closing_tag] = STATE(445),
    [sym_xml_open_tag] = STATE(159),
    [sym_oneline_base64] = STATE(447),
    [sym_oneline_file] = STATE(447),
    [sym_oneline_hex] = STATE(447),
    [sym_key_string] = STATE(491),
    [sym__bracketed_key_content] = STATE(208),
    [sym__key_template] = STATE(205),
    [sym_key_string_content] = STATE(208),
    [sym_oneline_string] = STATE(447),
    [sym_multiline_string] = STATE(447),
    [sym_json_value] = STATE(447),
    [sym_json_object] = STATE(458),
    [sym_json_array] = STATE(458),
    [sym_json_string] = STATE(458),
    [sym_json_number] = STATE(458),
    [sym_json_boolean] = STATE(458),
    [sym_template] = STATE(458),
    [aux_sym_request_repeat1] = STATE(49),
    [aux_sym_request_repeat2] = STATE(16),
    [aux_sym_xml_repeat1] = STATE(222),
    [aux_sym_key_string_content_repeat1] = STATE(287),
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
    [aux_sym_method_token1] = ACTIONS(149),
    [anon_sym_HTTP_SLASH1_DOT0] = ACTIONS(149),
    [anon_sym_HTTP_SLASH1_DOT1] = ACTIONS(149),
    [anon_sym_HTTP_SLASH2] = ACTIONS(149),
    [anon_sym_HTTP_SLASH3] = ACTIONS(149),
    [anon_sym_HTTP_SLASH_STAR] = ACTIONS(149),
    [anon_sym_HTTP] = ACTIONS(149),
    [anon_sym_LBRACKBasicAuth_RBRACK] = ACTIONS(151),
    [anon_sym_LBRACKQuery_RBRACK] = ACTIONS(153),
    [anon_sym_LBRACKQueryStringParams_RBRACK] = ACTIONS(153),
    [anon_sym_LBRACKForm_RBRACK] = ACTIONS(155),
    [anon_sym_LBRACKFormParams_RBRACK] = ACTIONS(155),
    [anon_sym_LBRACKMultipart_RBRACK] = ACTIONS(157),
    [anon_sym_LBRACKMultipartFormData_RBRACK] = ACTIONS(157),
    [anon_sym_LBRACKCookies_RBRACK] = ACTIONS(159),
    [anon_sym_LBRACKOptions_RBRACK] = ACTIONS(161),
    [anon_sym_file_COMMA] = ACTIONS(163),
    [anon_sym_null] = ACTIONS(165),
    [anon_sym_DQUOTE] = ACTIONS(167),
    [anon_sym_LT] = ACTIONS(169),
    [sym_xml_prolog_tag] = ACTIONS(171),
    [sym_xml_comment] = ACTIONS(171),
    [anon_sym_base64_COMMA] = ACTIONS(173),
    [anon_sym_hex_COMMA] = ACTIONS(175),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(177),
    [sym_key_string_text] = ACTIONS(179),
    [sym_key_string_escaped_char] = ACTIONS(181),
    [anon_sym_BQUOTE] = ACTIONS(183),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(185),
    [anon_sym_LBRACE2] = ACTIONS(187),
    [anon_sym_true] = ACTIONS(189),
    [anon_sym_false] = ACTIONS(189),
    [anon_sym_LBRACE_LBRACE2] = ACTIONS(191),
    [sym_comment] = ACTIONS(149),
    [sym__json_array_start] = ACTIONS(193),
    [sym__bracketed_key_start] = ACTIONS(195),
    [sym__json_number] = ACTIONS(197),
  },
  [13] = {
    [sym_header] = STATE(49),
    [sym_body] = STATE(124),
    [sym_request_section] = STATE(15),
    [sym_basic_auth_section] = STATE(71),
    [sym_query_string_params_section] = STATE(71),
    [sym_form_params_section] = STATE(71),
    [sym_multipart_form_data_section] = STATE(71),
    [sym_cookies_section] = STATE(71),
    [sym_options_section] = STATE(71),
    [sym_key_value] = STATE(284),
    [sym_bytes] = STATE(286),
    [sym_xml] = STATE(447),
    [sym_xml_tag] = STATE(446),
    [sym_xml_self_closing_tag] = STATE(445),
    [sym_xml_open_tag] = STATE(159),
    [sym_oneline_base64] = STATE(447),
    [sym_oneline_file] = STATE(447),
    [sym_oneline_hex] = STATE(447),
    [sym_key_string] = STATE(491),
    [sym__bracketed_key_content] = STATE(208),
    [sym__key_template] = STATE(205),
    [sym_key_string_content] = STATE(208),
    [sym_oneline_string] = STATE(447),
    [sym_multiline_string] = STATE(447),
    [sym_json_value] = STATE(447),
    [sym_json_object] = STATE(458),
    [sym_json_array] = STATE(458),
    [sym_json_string] = STATE(458),
    [sym_json_number] = STATE(458),
    [sym_json_boolean] = STATE(458),
    [sym_template] = STATE(458),
    [aux_sym_request_repeat1] = STATE(49),
    [aux_sym_request_repeat2] = STATE(15),
    [aux_sym_xml_repeat1] = STATE(222),
    [aux_sym_key_string_content_repeat1] = STATE(287),
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
    [aux_sym_method_token1] = ACTIONS(205),
    [anon_sym_HTTP_SLASH1_DOT0] = ACTIONS(205),
    [anon_sym_HTTP_SLASH1_DOT1] = ACTIONS(205),
    [anon_sym_HTTP_SLASH2] = ACTIONS(205),
    [anon_sym_HTTP_SLASH3] = ACTIONS(205),
    [anon_sym_HTTP_SLASH_STAR] = ACTIONS(205),
    [anon_sym_HTTP] = ACTIONS(205),
    [anon_sym_LBRACKBasicAuth_RBRACK] = ACTIONS(151),
    [anon_sym_LBRACKQuery_RBRACK] = ACTIONS(153),
    [anon_sym_LBRACKQueryStringParams_RBRACK] = ACTIONS(153),
    [anon_sym_LBRACKForm_RBRACK] = ACTIONS(155),
    [anon_sym_LBRACKFormParams_RBRACK] = ACTIONS(155),
    [anon_sym_LBRACKMultipart_RBRACK] = ACTIONS(157),
    [anon_sym_LBRACKMultipartFormData_RBRACK] = ACTIONS(157),
    [anon_sym_LBRACKCookies_RBRACK] = ACTIONS(159),
    [anon_sym_LBRACKOptions_RBRACK] = ACTIONS(161),
    [anon_sym_file_COMMA] = ACTIONS(163),
    [anon_sym_null] = ACTIONS(165),
    [anon_sym_DQUOTE] = ACTIONS(167),
    [anon_sym_LT] = ACTIONS(169),
    [sym_xml_prolog_tag] = ACTIONS(171),
    [sym_xml_comment] = ACTIONS(171),
    [anon_sym_base64_COMMA] = ACTIONS(173),
    [anon_sym_hex_COMMA] = ACTIONS(175),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(177),
    [sym_key_string_text] = ACTIONS(179),
    [sym_key_string_escaped_char] = ACTIONS(181),
    [anon_sym_BQUOTE] = ACTIONS(183),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(185),
    [anon_sym_LBRACE2] = ACTIONS(187),
    [anon_sym_true] = ACTIONS(189),
    [anon_sym_false] = ACTIONS(189),
    [anon_sym_LBRACE_LBRACE2] = ACTIONS(191),
    [sym_comment] = ACTIONS(205),
    [sym__json_array_start] = ACTIONS(193),
    [sym__bracketed_key_start] = ACTIONS(195),
    [sym__json_number] = ACTIONS(197),
  },
  [14] = {
    [sym_body] = STATE(122),
    [sym_request_section] = STATE(61),
    [sym_basic_auth_section] = STATE(71),
    [sym_query_string_params_section] = STATE(71),
    [sym_form_params_section] = STATE(71),
    [sym_multipart_form_data_section] = STATE(71),
    [sym_cookies_section] = STATE(71),
    [sym_options_section] = STATE(71),
    [sym_bytes] = STATE(286),
    [sym_xml] = STATE(447),
    [sym_xml_tag] = STATE(446),
    [sym_xml_self_closing_tag] = STATE(445),
    [sym_xml_open_tag] = STATE(159),
    [sym_oneline_base64] = STATE(447),
    [sym_oneline_file] = STATE(447),
    [sym_oneline_hex] = STATE(447),
    [sym_oneline_string] = STATE(447),
    [sym_multiline_string] = STATE(447),
    [sym_json_value] = STATE(447),
    [sym_json_object] = STATE(458),
    [sym_json_array] = STATE(458),
    [sym_json_string] = STATE(458),
    [sym_json_number] = STATE(458),
    [sym_json_boolean] = STATE(458),
    [sym_template] = STATE(458),
    [aux_sym_request_repeat2] = STATE(61),
    [aux_sym_xml_repeat1] = STATE(222),
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
    [aux_sym_method_token1] = ACTIONS(149),
    [anon_sym_HTTP_SLASH1_DOT0] = ACTIONS(149),
    [anon_sym_HTTP_SLASH1_DOT1] = ACTIONS(149),
    [anon_sym_HTTP_SLASH2] = ACTIONS(149),
    [anon_sym_HTTP_SLASH3] = ACTIONS(149),
    [anon_sym_HTTP_SLASH_STAR] = ACTIONS(149),
    [anon_sym_HTTP] = ACTIONS(149),
    [anon_sym_LBRACKBasicAuth_RBRACK] = ACTIONS(151),
    [anon_sym_LBRACKQuery_RBRACK] = ACTIONS(153),
    [anon_sym_LBRACKQueryStringParams_RBRACK] = ACTIONS(153),
    [anon_sym_LBRACKForm_RBRACK] = ACTIONS(155),
    [anon_sym_LBRACKFormParams_RBRACK] = ACTIONS(155),
    [anon_sym_LBRACKMultipart_RBRACK] = ACTIONS(157),
    [anon_sym_LBRACKMultipartFormData_RBRACK] = ACTIONS(157),
    [anon_sym_LBRACKCookies_RBRACK] = ACTIONS(159),
    [anon_sym_LBRACKOptions_RBRACK] = ACTIONS(161),
    [anon_sym_file_COMMA] = ACTIONS(163),
    [anon_sym_null] = ACTIONS(165),
    [anon_sym_DQUOTE] = ACTIONS(167),
    [anon_sym_LT] = ACTIONS(169),
    [sym_xml_prolog_tag] = ACTIONS(171),
    [sym_xml_comment] = ACTIONS(171),
    [anon_sym_base64_COMMA] = ACTIONS(173),
    [anon_sym_hex_COMMA] = ACTIONS(175),
    [anon_sym_BQUOTE] = ACTIONS(183),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(185),
    [anon_sym_LBRACE2] = ACTIONS(187),
    [anon_sym_true] = ACTIONS(189),
    [anon_sym_false] = ACTIONS(189),
    [anon_sym_LBRACE_LBRACE2] = ACTIONS(191),
    [sym_comment] = ACTIONS(149),
    [sym__json_array_start] = ACTIONS(193),
    [sym__json_number] = ACTIONS(197),
  },
  [15] = {
    [sym_body] = STATE(123),
    [sym_request_section] = STATE(61),
    [sym_basic_auth_section] = STATE(71),
    [sym_query_string_params_section] = STATE(71),
    [sym_form_params_section] = STATE(71),
    [sym_multipart_form_data_section] = STATE(71),
    [sym_cookies_section] = STATE(71),
    [sym_options_section] = STATE(71),
    [sym_bytes] = STATE(286),
    [sym_xml] = STATE(447),
    [sym_xml_tag] = STATE(446),
    [sym_xml_self_closing_tag] = STATE(445),
    [sym_xml_open_tag] = STATE(159),
    [sym_oneline_base64] = STATE(447),
    [sym_oneline_file] = STATE(447),
    [sym_oneline_hex] = STATE(447),
    [sym_oneline_string] = STATE(447),
    [sym_multiline_string] = STATE(447),
    [sym_json_value] = STATE(447),
    [sym_json_object] = STATE(458),
    [sym_json_array] = STATE(458),
    [sym_json_string] = STATE(458),
    [sym_json_number] = STATE(458),
    [sym_json_boolean] = STATE(458),
    [sym_template] = STATE(458),
    [aux_sym_request_repeat2] = STATE(61),
    [aux_sym_xml_repeat1] = STATE(222),
    [ts_builtin_sym_end] = ACTIONS(207),
    [anon_sym_LF] = ACTIONS(207),
    [anon_sym_GET] = ACTIONS(209),
    [anon_sym_HEAD] = ACTIONS(209),
    [anon_sym_POST] = ACTIONS(209),
    [anon_sym_PUT] = ACTIONS(209),
    [anon_sym_DELETE] = ACTIONS(209),
    [anon_sym_CONNECT] = ACTIONS(209),
    [anon_sym_OPTIONS] = ACTIONS(209),
    [anon_sym_TRACE] = ACTIONS(209),
    [anon_sym_PATCH] = ACTIONS(209),
    [anon_sym_LINK] = ACTIONS(209),
    [anon_sym_UNLINK] = ACTIONS(209),
    [anon_sym_PURGE] = ACTIONS(209),
    [anon_sym_LOCK] = ACTIONS(209),
    [anon_sym_UNLOCK] = ACTIONS(209),
    [anon_sym_PROPFIND] = ACTIONS(209),
    [anon_sym_VIEW] = ACTIONS(209),
    [aux_sym_method_token1] = ACTIONS(209),
    [anon_sym_HTTP_SLASH1_DOT0] = ACTIONS(209),
    [anon_sym_HTTP_SLASH1_DOT1] = ACTIONS(209),
    [anon_sym_HTTP_SLASH2] = ACTIONS(209),
    [anon_sym_HTTP_SLASH3] = ACTIONS(209),
    [anon_sym_HTTP_SLASH_STAR] = ACTIONS(209),
    [anon_sym_HTTP] = ACTIONS(209),
    [anon_sym_LBRACKBasicAuth_RBRACK] = ACTIONS(151),
    [anon_sym_LBRACKQuery_RBRACK] = ACTIONS(153),
    [anon_sym_LBRACKQueryStringParams_RBRACK] = ACTIONS(153),
    [anon_sym_LBRACKForm_RBRACK] = ACTIONS(155),
    [anon_sym_LBRACKFormParams_RBRACK] = ACTIONS(155),
    [anon_sym_LBRACKMultipart_RBRACK] = ACTIONS(157),
    [anon_sym_LBRACKMultipartFormData_RBRACK] = ACTIONS(157),
    [anon_sym_LBRACKCookies_RBRACK] = ACTIONS(159),
    [anon_sym_LBRACKOptions_RBRACK] = ACTIONS(161),
    [anon_sym_file_COMMA] = ACTIONS(163),
    [anon_sym_null] = ACTIONS(165),
    [anon_sym_DQUOTE] = ACTIONS(167),
    [anon_sym_LT] = ACTIONS(169),
    [sym_xml_prolog_tag] = ACTIONS(171),
    [sym_xml_comment] = ACTIONS(171),
    [anon_sym_base64_COMMA] = ACTIONS(173),
    [anon_sym_hex_COMMA] = ACTIONS(175),
    [anon_sym_BQUOTE] = ACTIONS(183),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(185),
    [anon_sym_LBRACE2] = ACTIONS(187),
    [anon_sym_true] = ACTIONS(189),
    [anon_sym_false] = ACTIONS(189),
    [anon_sym_LBRACE_LBRACE2] = ACTIONS(191),
    [sym_comment] = ACTIONS(209),
    [sym__json_array_start] = ACTIONS(193),
    [sym__json_number] = ACTIONS(197),
  },
  [16] = {
    [sym_body] = STATE(124),
    [sym_request_section] = STATE(61),
    [sym_basic_auth_section] = STATE(71),
    [sym_query_string_params_section] = STATE(71),
    [sym_form_params_section] = STATE(71),
    [sym_multipart_form_data_section] = STATE(71),
    [sym_cookies_section] = STATE(71),
    [sym_options_section] = STATE(71),
    [sym_bytes] = STATE(286),
    [sym_xml] = STATE(447),
    [sym_xml_tag] = STATE(446),
    [sym_xml_self_closing_tag] = STATE(445),
    [sym_xml_open_tag] = STATE(159),
    [sym_oneline_base64] = STATE(447),
    [sym_oneline_file] = STATE(447),
    [sym_oneline_hex] = STATE(447),
    [sym_oneline_string] = STATE(447),
    [sym_multiline_string] = STATE(447),
    [sym_json_value] = STATE(447),
    [sym_json_object] = STATE(458),
    [sym_json_array] = STATE(458),
    [sym_json_string] = STATE(458),
    [sym_json_number] = STATE(458),
    [sym_json_boolean] = STATE(458),
    [sym_template] = STATE(458),
    [aux_sym_request_repeat2] = STATE(61),
    [aux_sym_xml_repeat1] = STATE(222),
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
    [aux_sym_method_token1] = ACTIONS(205),
    [anon_sym_HTTP_SLASH1_DOT0] = ACTIONS(205),
    [anon_sym_HTTP_SLASH1_DOT1] = ACTIONS(205),
    [anon_sym_HTTP_SLASH2] = ACTIONS(205),
    [anon_sym_HTTP_SLASH3] = ACTIONS(205),
    [anon_sym_HTTP_SLASH_STAR] = ACTIONS(205),
    [anon_sym_HTTP] = ACTIONS(205),
    [anon_sym_LBRACKBasicAuth_RBRACK] = ACTIONS(151),
    [anon_sym_LBRACKQuery_RBRACK] = ACTIONS(153),
    [anon_sym_LBRACKQueryStringParams_RBRACK] = ACTIONS(153),
    [anon_sym_LBRACKForm_RBRACK] = ACTIONS(155),
    [anon_sym_LBRACKFormParams_RBRACK] = ACTIONS(155),
    [anon_sym_LBRACKMultipart_RBRACK] = ACTIONS(157),
    [anon_sym_LBRACKMultipartFormData_RBRACK] = ACTIONS(157),
    [anon_sym_LBRACKCookies_RBRACK] = ACTIONS(159),
    [anon_sym_LBRACKOptions_RBRACK] = ACTIONS(161),
    [anon_sym_file_COMMA] = ACTIONS(163),
    [anon_sym_null] = ACTIONS(165),
    [anon_sym_DQUOTE] = ACTIONS(167),
    [anon_sym_LT] = ACTIONS(169),
    [sym_xml_prolog_tag] = ACTIONS(171),
    [sym_xml_comment] = ACTIONS(171),
    [anon_sym_base64_COMMA] = ACTIONS(173),
    [anon_sym_hex_COMMA] = ACTIONS(175),
    [anon_sym_BQUOTE] = ACTIONS(183),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(185),
    [anon_sym_LBRACE2] = ACTIONS(187),
    [anon_sym_true] = ACTIONS(189),
    [anon_sym_false] = ACTIONS(189),
    [anon_sym_LBRACE_LBRACE2] = ACTIONS(191),
    [sym_comment] = ACTIONS(205),
    [sym__json_array_start] = ACTIONS(193),
    [sym__json_number] = ACTIONS(197),
  },
  [17] = {
    [sym_filter] = STATE(17),
    [sym_simple_filter_key] = STATE(32),
    [sym_argument_filter] = STATE(32),
    [sym_regex_filter] = STATE(32),
    [sym_nth_filter] = STATE(32),
    [sym_replace_filter] = STATE(32),
    [sym_replace_regex_filter] = STATE(32),
    [sym_split_filter] = STATE(32),
    [sym_xpath_filter] = STATE(32),
    [aux_sym_capture_repeat1] = STATE(17),
    [anon_sym_location] = ACTIONS(211),
    [anon_sym_xpath] = ACTIONS(214),
    [anon_sym_jsonpath] = ACTIONS(217),
    [anon_sym_regex] = ACTIONS(220),
    [anon_sym_not] = ACTIONS(223),
    [anon_sym_isDate] = ACTIONS(225),
    [anon_sym_isList] = ACTIONS(225),
    [anon_sym_isObject] = ACTIONS(225),
    [anon_sym_exists] = ACTIONS(225),
    [anon_sym_isInteger] = ACTIONS(225),
    [anon_sym_isFloat] = ACTIONS(225),
    [anon_sym_isBoolean] = ACTIONS(225),
    [anon_sym_isString] = ACTIONS(225),
    [anon_sym_isCollection] = ACTIONS(225),
    [anon_sym_isNumber] = ACTIONS(225),
    [anon_sym_isIsoDate] = ACTIONS(225),
    [anon_sym_isEmpty] = ACTIONS(225),
    [anon_sym_isIpv4] = ACTIONS(225),
    [anon_sym_isIpv6] = ACTIONS(225),
    [anon_sym_isUuid] = ACTIONS(225),
    [anon_sym_equals] = ACTIONS(225),
    [anon_sym_EQ_EQ] = ACTIONS(225),
    [anon_sym_notEquals] = ACTIONS(225),
    [anon_sym_BANG_EQ] = ACTIONS(225),
    [anon_sym_greaterThan] = ACTIONS(223),
    [anon_sym_GT] = ACTIONS(223),
    [anon_sym_greaterThanOrEquals] = ACTIONS(225),
    [anon_sym_GT_EQ] = ACTIONS(225),
    [anon_sym_lessThan] = ACTIONS(223),
    [anon_sym_LT] = ACTIONS(223),
    [anon_sym_lessThanOrEquals] = ACTIONS(225),
    [anon_sym_LT_EQ] = ACTIONS(225),
    [anon_sym_startsWith] = ACTIONS(225),
    [anon_sym_endsWith] = ACTIONS(225),
    [anon_sym_contains] = ACTIONS(225),
    [anon_sym_matches] = ACTIONS(225),
    [anon_sym_includes] = ACTIONS(225),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(225),
    [anon_sym_base64Decode] = ACTIONS(211),
    [anon_sym_base64Encode] = ACTIONS(211),
    [anon_sym_base64UrlSafeDecode] = ACTIONS(211),
    [anon_sym_base64UrlSafeEncode] = ACTIONS(211),
    [anon_sym_first] = ACTIONS(211),
    [anon_sym_last] = ACTIONS(211),
    [anon_sym_toFloat] = ACTIONS(211),
    [anon_sym_toHex] = ACTIONS(211),
    [anon_sym_toString] = ACTIONS(211),
    [anon_sym_utf8Decode] = ACTIONS(211),
    [anon_sym_utf8Encode] = ACTIONS(211),
    [anon_sym_count] = ACTIONS(211),
    [anon_sym_urlEncode] = ACTIONS(211),
    [anon_sym_urlDecode] = ACTIONS(211),
    [anon_sym_toInt] = ACTIONS(211),
    [anon_sym_htmlEscape] = ACTIONS(211),
    [anon_sym_htmlUnescape] = ACTIONS(211),
    [anon_sym_daysAfterNow] = ACTIONS(211),
    [anon_sym_daysBeforeNow] = ACTIONS(211),
    [anon_sym_charsetDecode] = ACTIONS(217),
    [anon_sym_dateFormat] = ACTIONS(217),
    [anon_sym_urlQueryParam] = ACTIONS(217),
    [anon_sym_decode] = ACTIONS(217),
    [anon_sym_format] = ACTIONS(217),
    [anon_sym_toDate] = ACTIONS(217),
    [anon_sym_nth] = ACTIONS(227),
    [anon_sym_replace] = ACTIONS(230),
    [anon_sym_replaceRegex] = ACTIONS(233),
    [anon_sym_split] = ACTIONS(236),
    [sym_comment] = ACTIONS(3),
  },
  [18] = {
    [sym_header] = STATE(19),
    [sym_body] = STATE(148),
    [sym_response_section] = STATE(59),
    [sym_captures_section] = STATE(90),
    [sym_asserts_section] = STATE(90),
    [sym_key_value] = STATE(247),
    [sym_bytes] = STATE(301),
    [sym_xml] = STATE(447),
    [sym_xml_tag] = STATE(446),
    [sym_xml_self_closing_tag] = STATE(445),
    [sym_xml_open_tag] = STATE(159),
    [sym_oneline_base64] = STATE(447),
    [sym_oneline_file] = STATE(447),
    [sym_oneline_hex] = STATE(447),
    [sym_key_string] = STATE(491),
    [sym__bracketed_key_content] = STATE(208),
    [sym__key_template] = STATE(205),
    [sym_key_string_content] = STATE(208),
    [sym_oneline_string] = STATE(447),
    [sym_multiline_string] = STATE(447),
    [sym_json_value] = STATE(447),
    [sym_json_object] = STATE(458),
    [sym_json_array] = STATE(458),
    [sym_json_string] = STATE(458),
    [sym_json_number] = STATE(458),
    [sym_json_boolean] = STATE(458),
    [sym_template] = STATE(458),
    [aux_sym_request_repeat1] = STATE(19),
    [aux_sym_response_repeat1] = STATE(59),
    [aux_sym_xml_repeat1] = STATE(222),
    [aux_sym_key_string_content_repeat1] = STATE(287),
    [ts_builtin_sym_end] = ACTIONS(239),
    [anon_sym_LF] = ACTIONS(239),
    [anon_sym_GET] = ACTIONS(241),
    [anon_sym_HEAD] = ACTIONS(241),
    [anon_sym_POST] = ACTIONS(241),
    [anon_sym_PUT] = ACTIONS(241),
    [anon_sym_DELETE] = ACTIONS(241),
    [anon_sym_CONNECT] = ACTIONS(241),
    [anon_sym_OPTIONS] = ACTIONS(241),
    [anon_sym_TRACE] = ACTIONS(241),
    [anon_sym_PATCH] = ACTIONS(241),
    [anon_sym_LINK] = ACTIONS(241),
    [anon_sym_UNLINK] = ACTIONS(241),
    [anon_sym_PURGE] = ACTIONS(241),
    [anon_sym_LOCK] = ACTIONS(241),
    [anon_sym_UNLOCK] = ACTIONS(241),
    [anon_sym_PROPFIND] = ACTIONS(241),
    [anon_sym_VIEW] = ACTIONS(241),
    [aux_sym_method_token1] = ACTIONS(241),
    [anon_sym_LBRACKCaptures_RBRACK] = ACTIONS(243),
    [anon_sym_LBRACKAsserts_RBRACK] = ACTIONS(245),
    [anon_sym_file_COMMA] = ACTIONS(163),
    [anon_sym_null] = ACTIONS(165),
    [anon_sym_DQUOTE] = ACTIONS(167),
    [anon_sym_LT] = ACTIONS(169),
    [sym_xml_prolog_tag] = ACTIONS(171),
    [sym_xml_comment] = ACTIONS(171),
    [anon_sym_base64_COMMA] = ACTIONS(173),
    [anon_sym_hex_COMMA] = ACTIONS(175),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(177),
    [sym_key_string_text] = ACTIONS(179),
    [sym_key_string_escaped_char] = ACTIONS(181),
    [anon_sym_BQUOTE] = ACTIONS(183),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(185),
    [anon_sym_LBRACE2] = ACTIONS(187),
    [anon_sym_true] = ACTIONS(189),
    [anon_sym_false] = ACTIONS(189),
    [anon_sym_LBRACE_LBRACE2] = ACTIONS(191),
    [sym_comment] = ACTIONS(241),
    [sym__json_array_start] = ACTIONS(193),
    [sym__bracketed_key_start] = ACTIONS(195),
    [sym__json_number] = ACTIONS(197),
  },
  [19] = {
    [sym_header] = STATE(74),
    [sym_body] = STATE(151),
    [sym_response_section] = STATE(60),
    [sym_captures_section] = STATE(90),
    [sym_asserts_section] = STATE(90),
    [sym_key_value] = STATE(247),
    [sym_bytes] = STATE(301),
    [sym_xml] = STATE(447),
    [sym_xml_tag] = STATE(446),
    [sym_xml_self_closing_tag] = STATE(445),
    [sym_xml_open_tag] = STATE(159),
    [sym_oneline_base64] = STATE(447),
    [sym_oneline_file] = STATE(447),
    [sym_oneline_hex] = STATE(447),
    [sym_key_string] = STATE(491),
    [sym__bracketed_key_content] = STATE(208),
    [sym__key_template] = STATE(205),
    [sym_key_string_content] = STATE(208),
    [sym_oneline_string] = STATE(447),
    [sym_multiline_string] = STATE(447),
    [sym_json_value] = STATE(447),
    [sym_json_object] = STATE(458),
    [sym_json_array] = STATE(458),
    [sym_json_string] = STATE(458),
    [sym_json_number] = STATE(458),
    [sym_json_boolean] = STATE(458),
    [sym_template] = STATE(458),
    [aux_sym_request_repeat1] = STATE(74),
    [aux_sym_response_repeat1] = STATE(60),
    [aux_sym_xml_repeat1] = STATE(222),
    [aux_sym_key_string_content_repeat1] = STATE(287),
    [ts_builtin_sym_end] = ACTIONS(247),
    [anon_sym_LF] = ACTIONS(247),
    [anon_sym_GET] = ACTIONS(249),
    [anon_sym_HEAD] = ACTIONS(249),
    [anon_sym_POST] = ACTIONS(249),
    [anon_sym_PUT] = ACTIONS(249),
    [anon_sym_DELETE] = ACTIONS(249),
    [anon_sym_CONNECT] = ACTIONS(249),
    [anon_sym_OPTIONS] = ACTIONS(249),
    [anon_sym_TRACE] = ACTIONS(249),
    [anon_sym_PATCH] = ACTIONS(249),
    [anon_sym_LINK] = ACTIONS(249),
    [anon_sym_UNLINK] = ACTIONS(249),
    [anon_sym_PURGE] = ACTIONS(249),
    [anon_sym_LOCK] = ACTIONS(249),
    [anon_sym_UNLOCK] = ACTIONS(249),
    [anon_sym_PROPFIND] = ACTIONS(249),
    [anon_sym_VIEW] = ACTIONS(249),
    [aux_sym_method_token1] = ACTIONS(249),
    [anon_sym_LBRACKCaptures_RBRACK] = ACTIONS(243),
    [anon_sym_LBRACKAsserts_RBRACK] = ACTIONS(245),
    [anon_sym_file_COMMA] = ACTIONS(163),
    [anon_sym_null] = ACTIONS(165),
    [anon_sym_DQUOTE] = ACTIONS(167),
    [anon_sym_LT] = ACTIONS(169),
    [sym_xml_prolog_tag] = ACTIONS(171),
    [sym_xml_comment] = ACTIONS(171),
    [anon_sym_base64_COMMA] = ACTIONS(173),
    [anon_sym_hex_COMMA] = ACTIONS(175),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(177),
    [sym_key_string_text] = ACTIONS(179),
    [sym_key_string_escaped_char] = ACTIONS(181),
    [anon_sym_BQUOTE] = ACTIONS(183),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(185),
    [anon_sym_LBRACE2] = ACTIONS(187),
    [anon_sym_true] = ACTIONS(189),
    [anon_sym_false] = ACTIONS(189),
    [anon_sym_LBRACE_LBRACE2] = ACTIONS(191),
    [sym_comment] = ACTIONS(249),
    [sym__json_array_start] = ACTIONS(193),
    [sym__bracketed_key_start] = ACTIONS(195),
    [sym__json_number] = ACTIONS(197),
  },
  [20] = {
    [anon_sym_location] = ACTIONS(251),
    [anon_sym_xpath] = ACTIONS(251),
    [anon_sym_jsonpath] = ACTIONS(251),
    [anon_sym_regex] = ACTIONS(251),
    [anon_sym_not] = ACTIONS(253),
    [anon_sym_isDate] = ACTIONS(251),
    [anon_sym_isList] = ACTIONS(251),
    [anon_sym_isObject] = ACTIONS(251),
    [anon_sym_exists] = ACTIONS(251),
    [anon_sym_isInteger] = ACTIONS(251),
    [anon_sym_isFloat] = ACTIONS(251),
    [anon_sym_isBoolean] = ACTIONS(251),
    [anon_sym_isString] = ACTIONS(251),
    [anon_sym_isCollection] = ACTIONS(251),
    [anon_sym_isNumber] = ACTIONS(251),
    [anon_sym_isIsoDate] = ACTIONS(251),
    [anon_sym_isEmpty] = ACTIONS(251),
    [anon_sym_isIpv4] = ACTIONS(251),
    [anon_sym_isIpv6] = ACTIONS(251),
    [anon_sym_isUuid] = ACTIONS(251),
    [anon_sym_equals] = ACTIONS(251),
    [anon_sym_EQ_EQ] = ACTIONS(251),
    [anon_sym_notEquals] = ACTIONS(251),
    [anon_sym_BANG_EQ] = ACTIONS(251),
    [anon_sym_greaterThan] = ACTIONS(253),
    [anon_sym_GT] = ACTIONS(253),
    [anon_sym_greaterThanOrEquals] = ACTIONS(251),
    [anon_sym_GT_EQ] = ACTIONS(251),
    [anon_sym_lessThan] = ACTIONS(253),
    [anon_sym_LT] = ACTIONS(253),
    [anon_sym_lessThanOrEquals] = ACTIONS(251),
    [anon_sym_LT_EQ] = ACTIONS(251),
    [anon_sym_startsWith] = ACTIONS(251),
    [anon_sym_endsWith] = ACTIONS(251),
    [anon_sym_contains] = ACTIONS(251),
    [anon_sym_matches] = ACTIONS(251),
    [anon_sym_includes] = ACTIONS(251),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(251),
    [anon_sym_COMMA] = ACTIONS(251),
    [anon_sym_RBRACK] = ACTIONS(251),
    [anon_sym_base64Decode] = ACTIONS(251),
    [anon_sym_base64Encode] = ACTIONS(251),
    [anon_sym_base64UrlSafeDecode] = ACTIONS(251),
    [anon_sym_base64UrlSafeEncode] = ACTIONS(251),
    [anon_sym_first] = ACTIONS(251),
    [anon_sym_last] = ACTIONS(251),
    [anon_sym_toFloat] = ACTIONS(251),
    [anon_sym_toHex] = ACTIONS(251),
    [anon_sym_toString] = ACTIONS(251),
    [anon_sym_utf8Decode] = ACTIONS(251),
    [anon_sym_utf8Encode] = ACTIONS(251),
    [anon_sym_count] = ACTIONS(251),
    [anon_sym_urlEncode] = ACTIONS(251),
    [anon_sym_urlDecode] = ACTIONS(251),
    [anon_sym_toInt] = ACTIONS(251),
    [anon_sym_htmlEscape] = ACTIONS(251),
    [anon_sym_htmlUnescape] = ACTIONS(251),
    [anon_sym_daysAfterNow] = ACTIONS(251),
    [anon_sym_daysBeforeNow] = ACTIONS(251),
    [anon_sym_charsetDecode] = ACTIONS(251),
    [anon_sym_dateFormat] = ACTIONS(251),
    [anon_sym_urlQueryParam] = ACTIONS(251),
    [anon_sym_decode] = ACTIONS(251),
    [anon_sym_format] = ACTIONS(251),
    [anon_sym_toDate] = ACTIONS(251),
    [anon_sym_nth] = ACTIONS(251),
    [anon_sym_replace] = ACTIONS(253),
    [anon_sym_replaceRegex] = ACTIONS(251),
    [anon_sym_split] = ACTIONS(251),
    [sym_comment] = ACTIONS(3),
  },
  [21] = {
    [anon_sym_location] = ACTIONS(255),
    [anon_sym_xpath] = ACTIONS(255),
    [anon_sym_jsonpath] = ACTIONS(255),
    [anon_sym_regex] = ACTIONS(255),
    [anon_sym_DQUOTE] = ACTIONS(255),
    [anon_sym_not] = ACTIONS(257),
    [anon_sym_isDate] = ACTIONS(255),
    [anon_sym_isList] = ACTIONS(255),
    [anon_sym_isObject] = ACTIONS(255),
    [anon_sym_exists] = ACTIONS(255),
    [anon_sym_isInteger] = ACTIONS(255),
    [anon_sym_isFloat] = ACTIONS(255),
    [anon_sym_isBoolean] = ACTIONS(255),
    [anon_sym_isString] = ACTIONS(255),
    [anon_sym_isCollection] = ACTIONS(255),
    [anon_sym_isNumber] = ACTIONS(255),
    [anon_sym_isIsoDate] = ACTIONS(255),
    [anon_sym_isEmpty] = ACTIONS(255),
    [anon_sym_isIpv4] = ACTIONS(255),
    [anon_sym_isIpv6] = ACTIONS(255),
    [anon_sym_isUuid] = ACTIONS(255),
    [anon_sym_equals] = ACTIONS(255),
    [anon_sym_EQ_EQ] = ACTIONS(255),
    [anon_sym_notEquals] = ACTIONS(255),
    [anon_sym_BANG_EQ] = ACTIONS(255),
    [anon_sym_greaterThan] = ACTIONS(257),
    [anon_sym_GT] = ACTIONS(257),
    [anon_sym_greaterThanOrEquals] = ACTIONS(255),
    [anon_sym_GT_EQ] = ACTIONS(255),
    [anon_sym_lessThan] = ACTIONS(257),
    [anon_sym_LT] = ACTIONS(257),
    [anon_sym_lessThanOrEquals] = ACTIONS(255),
    [anon_sym_LT_EQ] = ACTIONS(255),
    [anon_sym_startsWith] = ACTIONS(255),
    [anon_sym_endsWith] = ACTIONS(255),
    [anon_sym_contains] = ACTIONS(255),
    [anon_sym_matches] = ACTIONS(255),
    [anon_sym_includes] = ACTIONS(255),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(255),
    [anon_sym_base64Decode] = ACTIONS(255),
    [anon_sym_base64Encode] = ACTIONS(255),
    [anon_sym_base64UrlSafeDecode] = ACTIONS(255),
    [anon_sym_base64UrlSafeEncode] = ACTIONS(255),
    [anon_sym_first] = ACTIONS(255),
    [anon_sym_last] = ACTIONS(255),
    [anon_sym_toFloat] = ACTIONS(255),
    [anon_sym_toHex] = ACTIONS(255),
    [anon_sym_toString] = ACTIONS(255),
    [anon_sym_utf8Decode] = ACTIONS(255),
    [anon_sym_utf8Encode] = ACTIONS(255),
    [anon_sym_count] = ACTIONS(255),
    [anon_sym_urlEncode] = ACTIONS(255),
    [anon_sym_urlDecode] = ACTIONS(255),
    [anon_sym_toInt] = ACTIONS(255),
    [anon_sym_htmlEscape] = ACTIONS(255),
    [anon_sym_htmlUnescape] = ACTIONS(255),
    [anon_sym_daysAfterNow] = ACTIONS(255),
    [anon_sym_daysBeforeNow] = ACTIONS(255),
    [anon_sym_charsetDecode] = ACTIONS(255),
    [anon_sym_dateFormat] = ACTIONS(255),
    [anon_sym_urlQueryParam] = ACTIONS(255),
    [anon_sym_decode] = ACTIONS(255),
    [anon_sym_format] = ACTIONS(255),
    [anon_sym_toDate] = ACTIONS(255),
    [anon_sym_nth] = ACTIONS(255),
    [anon_sym_replace] = ACTIONS(257),
    [anon_sym_replaceRegex] = ACTIONS(255),
    [anon_sym_split] = ACTIONS(255),
    [sym_comment] = ACTIONS(3),
  },
  [22] = {
    [anon_sym_location] = ACTIONS(259),
    [anon_sym_xpath] = ACTIONS(259),
    [anon_sym_jsonpath] = ACTIONS(259),
    [anon_sym_regex] = ACTIONS(259),
    [anon_sym_DQUOTE] = ACTIONS(259),
    [anon_sym_not] = ACTIONS(261),
    [anon_sym_isDate] = ACTIONS(259),
    [anon_sym_isList] = ACTIONS(259),
    [anon_sym_isObject] = ACTIONS(259),
    [anon_sym_exists] = ACTIONS(259),
    [anon_sym_isInteger] = ACTIONS(259),
    [anon_sym_isFloat] = ACTIONS(259),
    [anon_sym_isBoolean] = ACTIONS(259),
    [anon_sym_isString] = ACTIONS(259),
    [anon_sym_isCollection] = ACTIONS(259),
    [anon_sym_isNumber] = ACTIONS(259),
    [anon_sym_isIsoDate] = ACTIONS(259),
    [anon_sym_isEmpty] = ACTIONS(259),
    [anon_sym_isIpv4] = ACTIONS(259),
    [anon_sym_isIpv6] = ACTIONS(259),
    [anon_sym_isUuid] = ACTIONS(259),
    [anon_sym_equals] = ACTIONS(259),
    [anon_sym_EQ_EQ] = ACTIONS(259),
    [anon_sym_notEquals] = ACTIONS(259),
    [anon_sym_BANG_EQ] = ACTIONS(259),
    [anon_sym_greaterThan] = ACTIONS(261),
    [anon_sym_GT] = ACTIONS(261),
    [anon_sym_greaterThanOrEquals] = ACTIONS(259),
    [anon_sym_GT_EQ] = ACTIONS(259),
    [anon_sym_lessThan] = ACTIONS(261),
    [anon_sym_LT] = ACTIONS(261),
    [anon_sym_lessThanOrEquals] = ACTIONS(259),
    [anon_sym_LT_EQ] = ACTIONS(259),
    [anon_sym_startsWith] = ACTIONS(259),
    [anon_sym_endsWith] = ACTIONS(259),
    [anon_sym_contains] = ACTIONS(259),
    [anon_sym_matches] = ACTIONS(259),
    [anon_sym_includes] = ACTIONS(259),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(259),
    [anon_sym_base64Decode] = ACTIONS(259),
    [anon_sym_base64Encode] = ACTIONS(259),
    [anon_sym_base64UrlSafeDecode] = ACTIONS(259),
    [anon_sym_base64UrlSafeEncode] = ACTIONS(259),
    [anon_sym_first] = ACTIONS(259),
    [anon_sym_last] = ACTIONS(259),
    [anon_sym_toFloat] = ACTIONS(259),
    [anon_sym_toHex] = ACTIONS(259),
    [anon_sym_toString] = ACTIONS(259),
    [anon_sym_utf8Decode] = ACTIONS(259),
    [anon_sym_utf8Encode] = ACTIONS(259),
    [anon_sym_count] = ACTIONS(259),
    [anon_sym_urlEncode] = ACTIONS(259),
    [anon_sym_urlDecode] = ACTIONS(259),
    [anon_sym_toInt] = ACTIONS(259),
    [anon_sym_htmlEscape] = ACTIONS(259),
    [anon_sym_htmlUnescape] = ACTIONS(259),
    [anon_sym_daysAfterNow] = ACTIONS(259),
    [anon_sym_daysBeforeNow] = ACTIONS(259),
    [anon_sym_charsetDecode] = ACTIONS(259),
    [anon_sym_dateFormat] = ACTIONS(259),
    [anon_sym_urlQueryParam] = ACTIONS(259),
    [anon_sym_decode] = ACTIONS(259),
    [anon_sym_format] = ACTIONS(259),
    [anon_sym_toDate] = ACTIONS(259),
    [anon_sym_nth] = ACTIONS(259),
    [anon_sym_replace] = ACTIONS(261),
    [anon_sym_replaceRegex] = ACTIONS(259),
    [anon_sym_split] = ACTIONS(259),
    [sym_comment] = ACTIONS(3),
  },
  [23] = {
    [anon_sym_location] = ACTIONS(263),
    [anon_sym_xpath] = ACTIONS(263),
    [anon_sym_jsonpath] = ACTIONS(263),
    [anon_sym_regex] = ACTIONS(263),
    [anon_sym_DQUOTE] = ACTIONS(263),
    [anon_sym_not] = ACTIONS(265),
    [anon_sym_isDate] = ACTIONS(263),
    [anon_sym_isList] = ACTIONS(263),
    [anon_sym_isObject] = ACTIONS(263),
    [anon_sym_exists] = ACTIONS(263),
    [anon_sym_isInteger] = ACTIONS(263),
    [anon_sym_isFloat] = ACTIONS(263),
    [anon_sym_isBoolean] = ACTIONS(263),
    [anon_sym_isString] = ACTIONS(263),
    [anon_sym_isCollection] = ACTIONS(263),
    [anon_sym_isNumber] = ACTIONS(263),
    [anon_sym_isIsoDate] = ACTIONS(263),
    [anon_sym_isEmpty] = ACTIONS(263),
    [anon_sym_isIpv4] = ACTIONS(263),
    [anon_sym_isIpv6] = ACTIONS(263),
    [anon_sym_isUuid] = ACTIONS(263),
    [anon_sym_equals] = ACTIONS(263),
    [anon_sym_EQ_EQ] = ACTIONS(263),
    [anon_sym_notEquals] = ACTIONS(263),
    [anon_sym_BANG_EQ] = ACTIONS(263),
    [anon_sym_greaterThan] = ACTIONS(265),
    [anon_sym_GT] = ACTIONS(265),
    [anon_sym_greaterThanOrEquals] = ACTIONS(263),
    [anon_sym_GT_EQ] = ACTIONS(263),
    [anon_sym_lessThan] = ACTIONS(265),
    [anon_sym_LT] = ACTIONS(265),
    [anon_sym_lessThanOrEquals] = ACTIONS(263),
    [anon_sym_LT_EQ] = ACTIONS(263),
    [anon_sym_startsWith] = ACTIONS(263),
    [anon_sym_endsWith] = ACTIONS(263),
    [anon_sym_contains] = ACTIONS(263),
    [anon_sym_matches] = ACTIONS(263),
    [anon_sym_includes] = ACTIONS(263),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(263),
    [anon_sym_base64Decode] = ACTIONS(263),
    [anon_sym_base64Encode] = ACTIONS(263),
    [anon_sym_base64UrlSafeDecode] = ACTIONS(263),
    [anon_sym_base64UrlSafeEncode] = ACTIONS(263),
    [anon_sym_first] = ACTIONS(263),
    [anon_sym_last] = ACTIONS(263),
    [anon_sym_toFloat] = ACTIONS(263),
    [anon_sym_toHex] = ACTIONS(263),
    [anon_sym_toString] = ACTIONS(263),
    [anon_sym_utf8Decode] = ACTIONS(263),
    [anon_sym_utf8Encode] = ACTIONS(263),
    [anon_sym_count] = ACTIONS(263),
    [anon_sym_urlEncode] = ACTIONS(263),
    [anon_sym_urlDecode] = ACTIONS(263),
    [anon_sym_toInt] = ACTIONS(263),
    [anon_sym_htmlEscape] = ACTIONS(263),
    [anon_sym_htmlUnescape] = ACTIONS(263),
    [anon_sym_daysAfterNow] = ACTIONS(263),
    [anon_sym_daysBeforeNow] = ACTIONS(263),
    [anon_sym_charsetDecode] = ACTIONS(263),
    [anon_sym_dateFormat] = ACTIONS(263),
    [anon_sym_urlQueryParam] = ACTIONS(263),
    [anon_sym_decode] = ACTIONS(263),
    [anon_sym_format] = ACTIONS(263),
    [anon_sym_toDate] = ACTIONS(263),
    [anon_sym_nth] = ACTIONS(263),
    [anon_sym_replace] = ACTIONS(265),
    [anon_sym_replaceRegex] = ACTIONS(263),
    [anon_sym_split] = ACTIONS(263),
    [sym_comment] = ACTIONS(3),
  },
  [24] = {
    [anon_sym_location] = ACTIONS(267),
    [anon_sym_xpath] = ACTIONS(267),
    [anon_sym_jsonpath] = ACTIONS(267),
    [anon_sym_regex] = ACTIONS(267),
    [anon_sym_DQUOTE] = ACTIONS(267),
    [anon_sym_not] = ACTIONS(269),
    [anon_sym_isDate] = ACTIONS(267),
    [anon_sym_isList] = ACTIONS(267),
    [anon_sym_isObject] = ACTIONS(267),
    [anon_sym_exists] = ACTIONS(267),
    [anon_sym_isInteger] = ACTIONS(267),
    [anon_sym_isFloat] = ACTIONS(267),
    [anon_sym_isBoolean] = ACTIONS(267),
    [anon_sym_isString] = ACTIONS(267),
    [anon_sym_isCollection] = ACTIONS(267),
    [anon_sym_isNumber] = ACTIONS(267),
    [anon_sym_isIsoDate] = ACTIONS(267),
    [anon_sym_isEmpty] = ACTIONS(267),
    [anon_sym_isIpv4] = ACTIONS(267),
    [anon_sym_isIpv6] = ACTIONS(267),
    [anon_sym_isUuid] = ACTIONS(267),
    [anon_sym_equals] = ACTIONS(267),
    [anon_sym_EQ_EQ] = ACTIONS(267),
    [anon_sym_notEquals] = ACTIONS(267),
    [anon_sym_BANG_EQ] = ACTIONS(267),
    [anon_sym_greaterThan] = ACTIONS(269),
    [anon_sym_GT] = ACTIONS(269),
    [anon_sym_greaterThanOrEquals] = ACTIONS(267),
    [anon_sym_GT_EQ] = ACTIONS(267),
    [anon_sym_lessThan] = ACTIONS(269),
    [anon_sym_LT] = ACTIONS(269),
    [anon_sym_lessThanOrEquals] = ACTIONS(267),
    [anon_sym_LT_EQ] = ACTIONS(267),
    [anon_sym_startsWith] = ACTIONS(267),
    [anon_sym_endsWith] = ACTIONS(267),
    [anon_sym_contains] = ACTIONS(267),
    [anon_sym_matches] = ACTIONS(267),
    [anon_sym_includes] = ACTIONS(267),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(267),
    [anon_sym_base64Decode] = ACTIONS(267),
    [anon_sym_base64Encode] = ACTIONS(267),
    [anon_sym_base64UrlSafeDecode] = ACTIONS(267),
    [anon_sym_base64UrlSafeEncode] = ACTIONS(267),
    [anon_sym_first] = ACTIONS(267),
    [anon_sym_last] = ACTIONS(267),
    [anon_sym_toFloat] = ACTIONS(267),
    [anon_sym_toHex] = ACTIONS(267),
    [anon_sym_toString] = ACTIONS(267),
    [anon_sym_utf8Decode] = ACTIONS(267),
    [anon_sym_utf8Encode] = ACTIONS(267),
    [anon_sym_count] = ACTIONS(267),
    [anon_sym_urlEncode] = ACTIONS(267),
    [anon_sym_urlDecode] = ACTIONS(267),
    [anon_sym_toInt] = ACTIONS(267),
    [anon_sym_htmlEscape] = ACTIONS(267),
    [anon_sym_htmlUnescape] = ACTIONS(267),
    [anon_sym_daysAfterNow] = ACTIONS(267),
    [anon_sym_daysBeforeNow] = ACTIONS(267),
    [anon_sym_charsetDecode] = ACTIONS(267),
    [anon_sym_dateFormat] = ACTIONS(267),
    [anon_sym_urlQueryParam] = ACTIONS(267),
    [anon_sym_decode] = ACTIONS(267),
    [anon_sym_format] = ACTIONS(267),
    [anon_sym_toDate] = ACTIONS(267),
    [anon_sym_nth] = ACTIONS(267),
    [anon_sym_replace] = ACTIONS(269),
    [anon_sym_replaceRegex] = ACTIONS(267),
    [anon_sym_split] = ACTIONS(267),
    [sym_comment] = ACTIONS(3),
  },
  [25] = {
    [anon_sym_location] = ACTIONS(271),
    [anon_sym_xpath] = ACTIONS(271),
    [anon_sym_jsonpath] = ACTIONS(271),
    [anon_sym_regex] = ACTIONS(271),
    [anon_sym_not] = ACTIONS(273),
    [anon_sym_isDate] = ACTIONS(271),
    [anon_sym_isList] = ACTIONS(271),
    [anon_sym_isObject] = ACTIONS(271),
    [anon_sym_exists] = ACTIONS(271),
    [anon_sym_isInteger] = ACTIONS(271),
    [anon_sym_isFloat] = ACTIONS(271),
    [anon_sym_isBoolean] = ACTIONS(271),
    [anon_sym_isString] = ACTIONS(271),
    [anon_sym_isCollection] = ACTIONS(271),
    [anon_sym_isNumber] = ACTIONS(271),
    [anon_sym_isIsoDate] = ACTIONS(271),
    [anon_sym_isEmpty] = ACTIONS(271),
    [anon_sym_isIpv4] = ACTIONS(271),
    [anon_sym_isIpv6] = ACTIONS(271),
    [anon_sym_isUuid] = ACTIONS(271),
    [anon_sym_equals] = ACTIONS(271),
    [anon_sym_EQ_EQ] = ACTIONS(271),
    [anon_sym_notEquals] = ACTIONS(271),
    [anon_sym_BANG_EQ] = ACTIONS(271),
    [anon_sym_greaterThan] = ACTIONS(273),
    [anon_sym_GT] = ACTIONS(273),
    [anon_sym_greaterThanOrEquals] = ACTIONS(271),
    [anon_sym_GT_EQ] = ACTIONS(271),
    [anon_sym_lessThan] = ACTIONS(273),
    [anon_sym_LT] = ACTIONS(273),
    [anon_sym_lessThanOrEquals] = ACTIONS(271),
    [anon_sym_LT_EQ] = ACTIONS(271),
    [anon_sym_startsWith] = ACTIONS(271),
    [anon_sym_endsWith] = ACTIONS(271),
    [anon_sym_contains] = ACTIONS(271),
    [anon_sym_matches] = ACTIONS(271),
    [anon_sym_includes] = ACTIONS(271),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(271),
    [anon_sym_base64Decode] = ACTIONS(271),
    [anon_sym_base64Encode] = ACTIONS(271),
    [anon_sym_base64UrlSafeDecode] = ACTIONS(271),
    [anon_sym_base64UrlSafeEncode] = ACTIONS(271),
    [anon_sym_first] = ACTIONS(271),
    [anon_sym_last] = ACTIONS(271),
    [anon_sym_toFloat] = ACTIONS(271),
    [anon_sym_toHex] = ACTIONS(271),
    [anon_sym_toString] = ACTIONS(271),
    [anon_sym_utf8Decode] = ACTIONS(271),
    [anon_sym_utf8Encode] = ACTIONS(271),
    [anon_sym_count] = ACTIONS(271),
    [anon_sym_urlEncode] = ACTIONS(271),
    [anon_sym_urlDecode] = ACTIONS(271),
    [anon_sym_toInt] = ACTIONS(271),
    [anon_sym_htmlEscape] = ACTIONS(271),
    [anon_sym_htmlUnescape] = ACTIONS(271),
    [anon_sym_daysAfterNow] = ACTIONS(271),
    [anon_sym_daysBeforeNow] = ACTIONS(271),
    [anon_sym_charsetDecode] = ACTIONS(271),
    [anon_sym_dateFormat] = ACTIONS(271),
    [anon_sym_urlQueryParam] = ACTIONS(271),
    [anon_sym_decode] = ACTIONS(271),
    [anon_sym_format] = ACTIONS(271),
    [anon_sym_toDate] = ACTIONS(271),
    [anon_sym_nth] = ACTIONS(271),
    [anon_sym_replace] = ACTIONS(273),
    [anon_sym_replaceRegex] = ACTIONS(271),
    [anon_sym_split] = ACTIONS(271),
    [sym_comment] = ACTIONS(3),
  },
  [26] = {
    [anon_sym_location] = ACTIONS(275),
    [anon_sym_xpath] = ACTIONS(275),
    [anon_sym_jsonpath] = ACTIONS(275),
    [anon_sym_regex] = ACTIONS(275),
    [anon_sym_not] = ACTIONS(277),
    [anon_sym_isDate] = ACTIONS(275),
    [anon_sym_isList] = ACTIONS(275),
    [anon_sym_isObject] = ACTIONS(275),
    [anon_sym_exists] = ACTIONS(275),
    [anon_sym_isInteger] = ACTIONS(275),
    [anon_sym_isFloat] = ACTIONS(275),
    [anon_sym_isBoolean] = ACTIONS(275),
    [anon_sym_isString] = ACTIONS(275),
    [anon_sym_isCollection] = ACTIONS(275),
    [anon_sym_isNumber] = ACTIONS(275),
    [anon_sym_isIsoDate] = ACTIONS(275),
    [anon_sym_isEmpty] = ACTIONS(275),
    [anon_sym_isIpv4] = ACTIONS(275),
    [anon_sym_isIpv6] = ACTIONS(275),
    [anon_sym_isUuid] = ACTIONS(275),
    [anon_sym_equals] = ACTIONS(275),
    [anon_sym_EQ_EQ] = ACTIONS(275),
    [anon_sym_notEquals] = ACTIONS(275),
    [anon_sym_BANG_EQ] = ACTIONS(275),
    [anon_sym_greaterThan] = ACTIONS(277),
    [anon_sym_GT] = ACTIONS(277),
    [anon_sym_greaterThanOrEquals] = ACTIONS(275),
    [anon_sym_GT_EQ] = ACTIONS(275),
    [anon_sym_lessThan] = ACTIONS(277),
    [anon_sym_LT] = ACTIONS(277),
    [anon_sym_lessThanOrEquals] = ACTIONS(275),
    [anon_sym_LT_EQ] = ACTIONS(275),
    [anon_sym_startsWith] = ACTIONS(275),
    [anon_sym_endsWith] = ACTIONS(275),
    [anon_sym_contains] = ACTIONS(275),
    [anon_sym_matches] = ACTIONS(275),
    [anon_sym_includes] = ACTIONS(275),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(275),
    [anon_sym_base64Decode] = ACTIONS(275),
    [anon_sym_base64Encode] = ACTIONS(275),
    [anon_sym_base64UrlSafeDecode] = ACTIONS(275),
    [anon_sym_base64UrlSafeEncode] = ACTIONS(275),
    [anon_sym_first] = ACTIONS(275),
    [anon_sym_last] = ACTIONS(275),
    [anon_sym_toFloat] = ACTIONS(275),
    [anon_sym_toHex] = ACTIONS(275),
    [anon_sym_toString] = ACTIONS(275),
    [anon_sym_utf8Decode] = ACTIONS(275),
    [anon_sym_utf8Encode] = ACTIONS(275),
    [anon_sym_count] = ACTIONS(275),
    [anon_sym_urlEncode] = ACTIONS(275),
    [anon_sym_urlDecode] = ACTIONS(275),
    [anon_sym_toInt] = ACTIONS(275),
    [anon_sym_htmlEscape] = ACTIONS(275),
    [anon_sym_htmlUnescape] = ACTIONS(275),
    [anon_sym_daysAfterNow] = ACTIONS(275),
    [anon_sym_daysBeforeNow] = ACTIONS(275),
    [anon_sym_charsetDecode] = ACTIONS(275),
    [anon_sym_dateFormat] = ACTIONS(275),
    [anon_sym_urlQueryParam] = ACTIONS(275),
    [anon_sym_decode] = ACTIONS(275),
    [anon_sym_format] = ACTIONS(275),
    [anon_sym_toDate] = ACTIONS(275),
    [anon_sym_nth] = ACTIONS(275),
    [anon_sym_replace] = ACTIONS(277),
    [anon_sym_replaceRegex] = ACTIONS(275),
    [anon_sym_split] = ACTIONS(275),
    [sym_comment] = ACTIONS(3),
  },
  [27] = {
    [anon_sym_location] = ACTIONS(279),
    [anon_sym_xpath] = ACTIONS(279),
    [anon_sym_jsonpath] = ACTIONS(279),
    [anon_sym_regex] = ACTIONS(279),
    [anon_sym_not] = ACTIONS(281),
    [anon_sym_isDate] = ACTIONS(279),
    [anon_sym_isList] = ACTIONS(279),
    [anon_sym_isObject] = ACTIONS(279),
    [anon_sym_exists] = ACTIONS(279),
    [anon_sym_isInteger] = ACTIONS(279),
    [anon_sym_isFloat] = ACTIONS(279),
    [anon_sym_isBoolean] = ACTIONS(279),
    [anon_sym_isString] = ACTIONS(279),
    [anon_sym_isCollection] = ACTIONS(279),
    [anon_sym_isNumber] = ACTIONS(279),
    [anon_sym_isIsoDate] = ACTIONS(279),
    [anon_sym_isEmpty] = ACTIONS(279),
    [anon_sym_isIpv4] = ACTIONS(279),
    [anon_sym_isIpv6] = ACTIONS(279),
    [anon_sym_isUuid] = ACTIONS(279),
    [anon_sym_equals] = ACTIONS(279),
    [anon_sym_EQ_EQ] = ACTIONS(279),
    [anon_sym_notEquals] = ACTIONS(279),
    [anon_sym_BANG_EQ] = ACTIONS(279),
    [anon_sym_greaterThan] = ACTIONS(281),
    [anon_sym_GT] = ACTIONS(281),
    [anon_sym_greaterThanOrEquals] = ACTIONS(279),
    [anon_sym_GT_EQ] = ACTIONS(279),
    [anon_sym_lessThan] = ACTIONS(281),
    [anon_sym_LT] = ACTIONS(281),
    [anon_sym_lessThanOrEquals] = ACTIONS(279),
    [anon_sym_LT_EQ] = ACTIONS(279),
    [anon_sym_startsWith] = ACTIONS(279),
    [anon_sym_endsWith] = ACTIONS(279),
    [anon_sym_contains] = ACTIONS(279),
    [anon_sym_matches] = ACTIONS(279),
    [anon_sym_includes] = ACTIONS(279),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(279),
    [anon_sym_base64Decode] = ACTIONS(279),
    [anon_sym_base64Encode] = ACTIONS(279),
    [anon_sym_base64UrlSafeDecode] = ACTIONS(279),
    [anon_sym_base64UrlSafeEncode] = ACTIONS(279),
    [anon_sym_first] = ACTIONS(279),
    [anon_sym_last] = ACTIONS(279),
    [anon_sym_toFloat] = ACTIONS(279),
    [anon_sym_toHex] = ACTIONS(279),
    [anon_sym_toString] = ACTIONS(279),
    [anon_sym_utf8Decode] = ACTIONS(279),
    [anon_sym_utf8Encode] = ACTIONS(279),
    [anon_sym_count] = ACTIONS(279),
    [anon_sym_urlEncode] = ACTIONS(279),
    [anon_sym_urlDecode] = ACTIONS(279),
    [anon_sym_toInt] = ACTIONS(279),
    [anon_sym_htmlEscape] = ACTIONS(279),
    [anon_sym_htmlUnescape] = ACTIONS(279),
    [anon_sym_daysAfterNow] = ACTIONS(279),
    [anon_sym_daysBeforeNow] = ACTIONS(279),
    [anon_sym_charsetDecode] = ACTIONS(279),
    [anon_sym_dateFormat] = ACTIONS(279),
    [anon_sym_urlQueryParam] = ACTIONS(279),
    [anon_sym_decode] = ACTIONS(279),
    [anon_sym_format] = ACTIONS(279),
    [anon_sym_toDate] = ACTIONS(279),
    [anon_sym_nth] = ACTIONS(279),
    [anon_sym_replace] = ACTIONS(281),
    [anon_sym_replaceRegex] = ACTIONS(279),
    [anon_sym_split] = ACTIONS(279),
    [sym_comment] = ACTIONS(3),
  },
  [28] = {
    [anon_sym_location] = ACTIONS(283),
    [anon_sym_xpath] = ACTIONS(283),
    [anon_sym_jsonpath] = ACTIONS(283),
    [anon_sym_regex] = ACTIONS(283),
    [anon_sym_not] = ACTIONS(285),
    [anon_sym_isDate] = ACTIONS(283),
    [anon_sym_isList] = ACTIONS(283),
    [anon_sym_isObject] = ACTIONS(283),
    [anon_sym_exists] = ACTIONS(283),
    [anon_sym_isInteger] = ACTIONS(283),
    [anon_sym_isFloat] = ACTIONS(283),
    [anon_sym_isBoolean] = ACTIONS(283),
    [anon_sym_isString] = ACTIONS(283),
    [anon_sym_isCollection] = ACTIONS(283),
    [anon_sym_isNumber] = ACTIONS(283),
    [anon_sym_isIsoDate] = ACTIONS(283),
    [anon_sym_isEmpty] = ACTIONS(283),
    [anon_sym_isIpv4] = ACTIONS(283),
    [anon_sym_isIpv6] = ACTIONS(283),
    [anon_sym_isUuid] = ACTIONS(283),
    [anon_sym_equals] = ACTIONS(283),
    [anon_sym_EQ_EQ] = ACTIONS(283),
    [anon_sym_notEquals] = ACTIONS(283),
    [anon_sym_BANG_EQ] = ACTIONS(283),
    [anon_sym_greaterThan] = ACTIONS(285),
    [anon_sym_GT] = ACTIONS(285),
    [anon_sym_greaterThanOrEquals] = ACTIONS(283),
    [anon_sym_GT_EQ] = ACTIONS(283),
    [anon_sym_lessThan] = ACTIONS(285),
    [anon_sym_LT] = ACTIONS(285),
    [anon_sym_lessThanOrEquals] = ACTIONS(283),
    [anon_sym_LT_EQ] = ACTIONS(283),
    [anon_sym_startsWith] = ACTIONS(283),
    [anon_sym_endsWith] = ACTIONS(283),
    [anon_sym_contains] = ACTIONS(283),
    [anon_sym_matches] = ACTIONS(283),
    [anon_sym_includes] = ACTIONS(283),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(283),
    [anon_sym_base64Decode] = ACTIONS(283),
    [anon_sym_base64Encode] = ACTIONS(283),
    [anon_sym_base64UrlSafeDecode] = ACTIONS(283),
    [anon_sym_base64UrlSafeEncode] = ACTIONS(283),
    [anon_sym_first] = ACTIONS(283),
    [anon_sym_last] = ACTIONS(283),
    [anon_sym_toFloat] = ACTIONS(283),
    [anon_sym_toHex] = ACTIONS(283),
    [anon_sym_toString] = ACTIONS(283),
    [anon_sym_utf8Decode] = ACTIONS(283),
    [anon_sym_utf8Encode] = ACTIONS(283),
    [anon_sym_count] = ACTIONS(283),
    [anon_sym_urlEncode] = ACTIONS(283),
    [anon_sym_urlDecode] = ACTIONS(283),
    [anon_sym_toInt] = ACTIONS(283),
    [anon_sym_htmlEscape] = ACTIONS(283),
    [anon_sym_htmlUnescape] = ACTIONS(283),
    [anon_sym_daysAfterNow] = ACTIONS(283),
    [anon_sym_daysBeforeNow] = ACTIONS(283),
    [anon_sym_charsetDecode] = ACTIONS(283),
    [anon_sym_dateFormat] = ACTIONS(283),
    [anon_sym_urlQueryParam] = ACTIONS(283),
    [anon_sym_decode] = ACTIONS(283),
    [anon_sym_format] = ACTIONS(283),
    [anon_sym_toDate] = ACTIONS(283),
    [anon_sym_nth] = ACTIONS(283),
    [anon_sym_replace] = ACTIONS(285),
    [anon_sym_replaceRegex] = ACTIONS(283),
    [anon_sym_split] = ACTIONS(283),
    [sym_comment] = ACTIONS(3),
  },
  [29] = {
    [anon_sym_location] = ACTIONS(287),
    [anon_sym_xpath] = ACTIONS(287),
    [anon_sym_jsonpath] = ACTIONS(287),
    [anon_sym_regex] = ACTIONS(287),
    [anon_sym_not] = ACTIONS(289),
    [anon_sym_isDate] = ACTIONS(287),
    [anon_sym_isList] = ACTIONS(287),
    [anon_sym_isObject] = ACTIONS(287),
    [anon_sym_exists] = ACTIONS(287),
    [anon_sym_isInteger] = ACTIONS(287),
    [anon_sym_isFloat] = ACTIONS(287),
    [anon_sym_isBoolean] = ACTIONS(287),
    [anon_sym_isString] = ACTIONS(287),
    [anon_sym_isCollection] = ACTIONS(287),
    [anon_sym_isNumber] = ACTIONS(287),
    [anon_sym_isIsoDate] = ACTIONS(287),
    [anon_sym_isEmpty] = ACTIONS(287),
    [anon_sym_isIpv4] = ACTIONS(287),
    [anon_sym_isIpv6] = ACTIONS(287),
    [anon_sym_isUuid] = ACTIONS(287),
    [anon_sym_equals] = ACTIONS(287),
    [anon_sym_EQ_EQ] = ACTIONS(287),
    [anon_sym_notEquals] = ACTIONS(287),
    [anon_sym_BANG_EQ] = ACTIONS(287),
    [anon_sym_greaterThan] = ACTIONS(289),
    [anon_sym_GT] = ACTIONS(289),
    [anon_sym_greaterThanOrEquals] = ACTIONS(287),
    [anon_sym_GT_EQ] = ACTIONS(287),
    [anon_sym_lessThan] = ACTIONS(289),
    [anon_sym_LT] = ACTIONS(289),
    [anon_sym_lessThanOrEquals] = ACTIONS(287),
    [anon_sym_LT_EQ] = ACTIONS(287),
    [anon_sym_startsWith] = ACTIONS(287),
    [anon_sym_endsWith] = ACTIONS(287),
    [anon_sym_contains] = ACTIONS(287),
    [anon_sym_matches] = ACTIONS(287),
    [anon_sym_includes] = ACTIONS(287),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(287),
    [anon_sym_base64Decode] = ACTIONS(287),
    [anon_sym_base64Encode] = ACTIONS(287),
    [anon_sym_base64UrlSafeDecode] = ACTIONS(287),
    [anon_sym_base64UrlSafeEncode] = ACTIONS(287),
    [anon_sym_first] = ACTIONS(287),
    [anon_sym_last] = ACTIONS(287),
    [anon_sym_toFloat] = ACTIONS(287),
    [anon_sym_toHex] = ACTIONS(287),
    [anon_sym_toString] = ACTIONS(287),
    [anon_sym_utf8Decode] = ACTIONS(287),
    [anon_sym_utf8Encode] = ACTIONS(287),
    [anon_sym_count] = ACTIONS(287),
    [anon_sym_urlEncode] = ACTIONS(287),
    [anon_sym_urlDecode] = ACTIONS(287),
    [anon_sym_toInt] = ACTIONS(287),
    [anon_sym_htmlEscape] = ACTIONS(287),
    [anon_sym_htmlUnescape] = ACTIONS(287),
    [anon_sym_daysAfterNow] = ACTIONS(287),
    [anon_sym_daysBeforeNow] = ACTIONS(287),
    [anon_sym_charsetDecode] = ACTIONS(287),
    [anon_sym_dateFormat] = ACTIONS(287),
    [anon_sym_urlQueryParam] = ACTIONS(287),
    [anon_sym_decode] = ACTIONS(287),
    [anon_sym_format] = ACTIONS(287),
    [anon_sym_toDate] = ACTIONS(287),
    [anon_sym_nth] = ACTIONS(287),
    [anon_sym_replace] = ACTIONS(289),
    [anon_sym_replaceRegex] = ACTIONS(287),
    [anon_sym_split] = ACTIONS(287),
    [sym_comment] = ACTIONS(3),
  },
  [30] = {
    [anon_sym_location] = ACTIONS(291),
    [anon_sym_xpath] = ACTIONS(291),
    [anon_sym_jsonpath] = ACTIONS(291),
    [anon_sym_regex] = ACTIONS(291),
    [anon_sym_not] = ACTIONS(293),
    [anon_sym_isDate] = ACTIONS(291),
    [anon_sym_isList] = ACTIONS(291),
    [anon_sym_isObject] = ACTIONS(291),
    [anon_sym_exists] = ACTIONS(291),
    [anon_sym_isInteger] = ACTIONS(291),
    [anon_sym_isFloat] = ACTIONS(291),
    [anon_sym_isBoolean] = ACTIONS(291),
    [anon_sym_isString] = ACTIONS(291),
    [anon_sym_isCollection] = ACTIONS(291),
    [anon_sym_isNumber] = ACTIONS(291),
    [anon_sym_isIsoDate] = ACTIONS(291),
    [anon_sym_isEmpty] = ACTIONS(291),
    [anon_sym_isIpv4] = ACTIONS(291),
    [anon_sym_isIpv6] = ACTIONS(291),
    [anon_sym_isUuid] = ACTIONS(291),
    [anon_sym_equals] = ACTIONS(291),
    [anon_sym_EQ_EQ] = ACTIONS(291),
    [anon_sym_notEquals] = ACTIONS(291),
    [anon_sym_BANG_EQ] = ACTIONS(291),
    [anon_sym_greaterThan] = ACTIONS(293),
    [anon_sym_GT] = ACTIONS(293),
    [anon_sym_greaterThanOrEquals] = ACTIONS(291),
    [anon_sym_GT_EQ] = ACTIONS(291),
    [anon_sym_lessThan] = ACTIONS(293),
    [anon_sym_LT] = ACTIONS(293),
    [anon_sym_lessThanOrEquals] = ACTIONS(291),
    [anon_sym_LT_EQ] = ACTIONS(291),
    [anon_sym_startsWith] = ACTIONS(291),
    [anon_sym_endsWith] = ACTIONS(291),
    [anon_sym_contains] = ACTIONS(291),
    [anon_sym_matches] = ACTIONS(291),
    [anon_sym_includes] = ACTIONS(291),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(291),
    [anon_sym_base64Decode] = ACTIONS(291),
    [anon_sym_base64Encode] = ACTIONS(291),
    [anon_sym_base64UrlSafeDecode] = ACTIONS(291),
    [anon_sym_base64UrlSafeEncode] = ACTIONS(291),
    [anon_sym_first] = ACTIONS(291),
    [anon_sym_last] = ACTIONS(291),
    [anon_sym_toFloat] = ACTIONS(291),
    [anon_sym_toHex] = ACTIONS(291),
    [anon_sym_toString] = ACTIONS(291),
    [anon_sym_utf8Decode] = ACTIONS(291),
    [anon_sym_utf8Encode] = ACTIONS(291),
    [anon_sym_count] = ACTIONS(291),
    [anon_sym_urlEncode] = ACTIONS(291),
    [anon_sym_urlDecode] = ACTIONS(291),
    [anon_sym_toInt] = ACTIONS(291),
    [anon_sym_htmlEscape] = ACTIONS(291),
    [anon_sym_htmlUnescape] = ACTIONS(291),
    [anon_sym_daysAfterNow] = ACTIONS(291),
    [anon_sym_daysBeforeNow] = ACTIONS(291),
    [anon_sym_charsetDecode] = ACTIONS(291),
    [anon_sym_dateFormat] = ACTIONS(291),
    [anon_sym_urlQueryParam] = ACTIONS(291),
    [anon_sym_decode] = ACTIONS(291),
    [anon_sym_format] = ACTIONS(291),
    [anon_sym_toDate] = ACTIONS(291),
    [anon_sym_nth] = ACTIONS(291),
    [anon_sym_replace] = ACTIONS(293),
    [anon_sym_replaceRegex] = ACTIONS(291),
    [anon_sym_split] = ACTIONS(291),
    [sym_comment] = ACTIONS(3),
  },
  [31] = {
    [anon_sym_location] = ACTIONS(295),
    [anon_sym_xpath] = ACTIONS(295),
    [anon_sym_jsonpath] = ACTIONS(295),
    [anon_sym_regex] = ACTIONS(295),
    [anon_sym_not] = ACTIONS(297),
    [anon_sym_isDate] = ACTIONS(295),
    [anon_sym_isList] = ACTIONS(295),
    [anon_sym_isObject] = ACTIONS(295),
    [anon_sym_exists] = ACTIONS(295),
    [anon_sym_isInteger] = ACTIONS(295),
    [anon_sym_isFloat] = ACTIONS(295),
    [anon_sym_isBoolean] = ACTIONS(295),
    [anon_sym_isString] = ACTIONS(295),
    [anon_sym_isCollection] = ACTIONS(295),
    [anon_sym_isNumber] = ACTIONS(295),
    [anon_sym_isIsoDate] = ACTIONS(295),
    [anon_sym_isEmpty] = ACTIONS(295),
    [anon_sym_isIpv4] = ACTIONS(295),
    [anon_sym_isIpv6] = ACTIONS(295),
    [anon_sym_isUuid] = ACTIONS(295),
    [anon_sym_equals] = ACTIONS(295),
    [anon_sym_EQ_EQ] = ACTIONS(295),
    [anon_sym_notEquals] = ACTIONS(295),
    [anon_sym_BANG_EQ] = ACTIONS(295),
    [anon_sym_greaterThan] = ACTIONS(297),
    [anon_sym_GT] = ACTIONS(297),
    [anon_sym_greaterThanOrEquals] = ACTIONS(295),
    [anon_sym_GT_EQ] = ACTIONS(295),
    [anon_sym_lessThan] = ACTIONS(297),
    [anon_sym_LT] = ACTIONS(297),
    [anon_sym_lessThanOrEquals] = ACTIONS(295),
    [anon_sym_LT_EQ] = ACTIONS(295),
    [anon_sym_startsWith] = ACTIONS(295),
    [anon_sym_endsWith] = ACTIONS(295),
    [anon_sym_contains] = ACTIONS(295),
    [anon_sym_matches] = ACTIONS(295),
    [anon_sym_includes] = ACTIONS(295),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(295),
    [anon_sym_base64Decode] = ACTIONS(295),
    [anon_sym_base64Encode] = ACTIONS(295),
    [anon_sym_base64UrlSafeDecode] = ACTIONS(295),
    [anon_sym_base64UrlSafeEncode] = ACTIONS(295),
    [anon_sym_first] = ACTIONS(295),
    [anon_sym_last] = ACTIONS(295),
    [anon_sym_toFloat] = ACTIONS(295),
    [anon_sym_toHex] = ACTIONS(295),
    [anon_sym_toString] = ACTIONS(295),
    [anon_sym_utf8Decode] = ACTIONS(295),
    [anon_sym_utf8Encode] = ACTIONS(295),
    [anon_sym_count] = ACTIONS(295),
    [anon_sym_urlEncode] = ACTIONS(295),
    [anon_sym_urlDecode] = ACTIONS(295),
    [anon_sym_toInt] = ACTIONS(295),
    [anon_sym_htmlEscape] = ACTIONS(295),
    [anon_sym_htmlUnescape] = ACTIONS(295),
    [anon_sym_daysAfterNow] = ACTIONS(295),
    [anon_sym_daysBeforeNow] = ACTIONS(295),
    [anon_sym_charsetDecode] = ACTIONS(295),
    [anon_sym_dateFormat] = ACTIONS(295),
    [anon_sym_urlQueryParam] = ACTIONS(295),
    [anon_sym_decode] = ACTIONS(295),
    [anon_sym_format] = ACTIONS(295),
    [anon_sym_toDate] = ACTIONS(295),
    [anon_sym_nth] = ACTIONS(295),
    [anon_sym_replace] = ACTIONS(297),
    [anon_sym_replaceRegex] = ACTIONS(295),
    [anon_sym_split] = ACTIONS(295),
    [sym_comment] = ACTIONS(3),
  },
  [32] = {
    [anon_sym_location] = ACTIONS(299),
    [anon_sym_xpath] = ACTIONS(299),
    [anon_sym_jsonpath] = ACTIONS(299),
    [anon_sym_regex] = ACTIONS(299),
    [anon_sym_not] = ACTIONS(301),
    [anon_sym_isDate] = ACTIONS(299),
    [anon_sym_isList] = ACTIONS(299),
    [anon_sym_isObject] = ACTIONS(299),
    [anon_sym_exists] = ACTIONS(299),
    [anon_sym_isInteger] = ACTIONS(299),
    [anon_sym_isFloat] = ACTIONS(299),
    [anon_sym_isBoolean] = ACTIONS(299),
    [anon_sym_isString] = ACTIONS(299),
    [anon_sym_isCollection] = ACTIONS(299),
    [anon_sym_isNumber] = ACTIONS(299),
    [anon_sym_isIsoDate] = ACTIONS(299),
    [anon_sym_isEmpty] = ACTIONS(299),
    [anon_sym_isIpv4] = ACTIONS(299),
    [anon_sym_isIpv6] = ACTIONS(299),
    [anon_sym_isUuid] = ACTIONS(299),
    [anon_sym_equals] = ACTIONS(299),
    [anon_sym_EQ_EQ] = ACTIONS(299),
    [anon_sym_notEquals] = ACTIONS(299),
    [anon_sym_BANG_EQ] = ACTIONS(299),
    [anon_sym_greaterThan] = ACTIONS(301),
    [anon_sym_GT] = ACTIONS(301),
    [anon_sym_greaterThanOrEquals] = ACTIONS(299),
    [anon_sym_GT_EQ] = ACTIONS(299),
    [anon_sym_lessThan] = ACTIONS(301),
    [anon_sym_LT] = ACTIONS(301),
    [anon_sym_lessThanOrEquals] = ACTIONS(299),
    [anon_sym_LT_EQ] = ACTIONS(299),
    [anon_sym_startsWith] = ACTIONS(299),
    [anon_sym_endsWith] = ACTIONS(299),
    [anon_sym_contains] = ACTIONS(299),
    [anon_sym_matches] = ACTIONS(299),
    [anon_sym_includes] = ACTIONS(299),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(299),
    [anon_sym_base64Decode] = ACTIONS(299),
    [anon_sym_base64Encode] = ACTIONS(299),
    [anon_sym_base64UrlSafeDecode] = ACTIONS(299),
    [anon_sym_base64UrlSafeEncode] = ACTIONS(299),
    [anon_sym_first] = ACTIONS(299),
    [anon_sym_last] = ACTIONS(299),
    [anon_sym_toFloat] = ACTIONS(299),
    [anon_sym_toHex] = ACTIONS(299),
    [anon_sym_toString] = ACTIONS(299),
    [anon_sym_utf8Decode] = ACTIONS(299),
    [anon_sym_utf8Encode] = ACTIONS(299),
    [anon_sym_count] = ACTIONS(299),
    [anon_sym_urlEncode] = ACTIONS(299),
    [anon_sym_urlDecode] = ACTIONS(299),
    [anon_sym_toInt] = ACTIONS(299),
    [anon_sym_htmlEscape] = ACTIONS(299),
    [anon_sym_htmlUnescape] = ACTIONS(299),
    [anon_sym_daysAfterNow] = ACTIONS(299),
    [anon_sym_daysBeforeNow] = ACTIONS(299),
    [anon_sym_charsetDecode] = ACTIONS(299),
    [anon_sym_dateFormat] = ACTIONS(299),
    [anon_sym_urlQueryParam] = ACTIONS(299),
    [anon_sym_decode] = ACTIONS(299),
    [anon_sym_format] = ACTIONS(299),
    [anon_sym_toDate] = ACTIONS(299),
    [anon_sym_nth] = ACTIONS(299),
    [anon_sym_replace] = ACTIONS(301),
    [anon_sym_replaceRegex] = ACTIONS(299),
    [anon_sym_split] = ACTIONS(299),
    [sym_comment] = ACTIONS(3),
  },
  [33] = {
    [anon_sym_location] = ACTIONS(303),
    [anon_sym_xpath] = ACTIONS(303),
    [anon_sym_jsonpath] = ACTIONS(303),
    [anon_sym_regex] = ACTIONS(303),
    [anon_sym_not] = ACTIONS(305),
    [anon_sym_isDate] = ACTIONS(303),
    [anon_sym_isList] = ACTIONS(303),
    [anon_sym_isObject] = ACTIONS(303),
    [anon_sym_exists] = ACTIONS(303),
    [anon_sym_isInteger] = ACTIONS(303),
    [anon_sym_isFloat] = ACTIONS(303),
    [anon_sym_isBoolean] = ACTIONS(303),
    [anon_sym_isString] = ACTIONS(303),
    [anon_sym_isCollection] = ACTIONS(303),
    [anon_sym_isNumber] = ACTIONS(303),
    [anon_sym_isIsoDate] = ACTIONS(303),
    [anon_sym_isEmpty] = ACTIONS(303),
    [anon_sym_isIpv4] = ACTIONS(303),
    [anon_sym_isIpv6] = ACTIONS(303),
    [anon_sym_isUuid] = ACTIONS(303),
    [anon_sym_equals] = ACTIONS(303),
    [anon_sym_EQ_EQ] = ACTIONS(303),
    [anon_sym_notEquals] = ACTIONS(303),
    [anon_sym_BANG_EQ] = ACTIONS(303),
    [anon_sym_greaterThan] = ACTIONS(305),
    [anon_sym_GT] = ACTIONS(305),
    [anon_sym_greaterThanOrEquals] = ACTIONS(303),
    [anon_sym_GT_EQ] = ACTIONS(303),
    [anon_sym_lessThan] = ACTIONS(305),
    [anon_sym_LT] = ACTIONS(305),
    [anon_sym_lessThanOrEquals] = ACTIONS(303),
    [anon_sym_LT_EQ] = ACTIONS(303),
    [anon_sym_startsWith] = ACTIONS(303),
    [anon_sym_endsWith] = ACTIONS(303),
    [anon_sym_contains] = ACTIONS(303),
    [anon_sym_matches] = ACTIONS(303),
    [anon_sym_includes] = ACTIONS(303),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(303),
    [anon_sym_base64Decode] = ACTIONS(303),
    [anon_sym_base64Encode] = ACTIONS(303),
    [anon_sym_base64UrlSafeDecode] = ACTIONS(303),
    [anon_sym_base64UrlSafeEncode] = ACTIONS(303),
    [anon_sym_first] = ACTIONS(303),
    [anon_sym_last] = ACTIONS(303),
    [anon_sym_toFloat] = ACTIONS(303),
    [anon_sym_toHex] = ACTIONS(303),
    [anon_sym_toString] = ACTIONS(303),
    [anon_sym_utf8Decode] = ACTIONS(303),
    [anon_sym_utf8Encode] = ACTIONS(303),
    [anon_sym_count] = ACTIONS(303),
    [anon_sym_urlEncode] = ACTIONS(303),
    [anon_sym_urlDecode] = ACTIONS(303),
    [anon_sym_toInt] = ACTIONS(303),
    [anon_sym_htmlEscape] = ACTIONS(303),
    [anon_sym_htmlUnescape] = ACTIONS(303),
    [anon_sym_daysAfterNow] = ACTIONS(303),
    [anon_sym_daysBeforeNow] = ACTIONS(303),
    [anon_sym_charsetDecode] = ACTIONS(303),
    [anon_sym_dateFormat] = ACTIONS(303),
    [anon_sym_urlQueryParam] = ACTIONS(303),
    [anon_sym_decode] = ACTIONS(303),
    [anon_sym_format] = ACTIONS(303),
    [anon_sym_toDate] = ACTIONS(303),
    [anon_sym_nth] = ACTIONS(303),
    [anon_sym_replace] = ACTIONS(305),
    [anon_sym_replaceRegex] = ACTIONS(303),
    [anon_sym_split] = ACTIONS(303),
    [sym_comment] = ACTIONS(3),
  },
  [34] = {
    [anon_sym_location] = ACTIONS(307),
    [anon_sym_xpath] = ACTIONS(307),
    [anon_sym_jsonpath] = ACTIONS(307),
    [anon_sym_regex] = ACTIONS(307),
    [anon_sym_not] = ACTIONS(309),
    [anon_sym_isDate] = ACTIONS(307),
    [anon_sym_isList] = ACTIONS(307),
    [anon_sym_isObject] = ACTIONS(307),
    [anon_sym_exists] = ACTIONS(307),
    [anon_sym_isInteger] = ACTIONS(307),
    [anon_sym_isFloat] = ACTIONS(307),
    [anon_sym_isBoolean] = ACTIONS(307),
    [anon_sym_isString] = ACTIONS(307),
    [anon_sym_isCollection] = ACTIONS(307),
    [anon_sym_isNumber] = ACTIONS(307),
    [anon_sym_isIsoDate] = ACTIONS(307),
    [anon_sym_isEmpty] = ACTIONS(307),
    [anon_sym_isIpv4] = ACTIONS(307),
    [anon_sym_isIpv6] = ACTIONS(307),
    [anon_sym_isUuid] = ACTIONS(307),
    [anon_sym_equals] = ACTIONS(307),
    [anon_sym_EQ_EQ] = ACTIONS(307),
    [anon_sym_notEquals] = ACTIONS(307),
    [anon_sym_BANG_EQ] = ACTIONS(307),
    [anon_sym_greaterThan] = ACTIONS(309),
    [anon_sym_GT] = ACTIONS(309),
    [anon_sym_greaterThanOrEquals] = ACTIONS(307),
    [anon_sym_GT_EQ] = ACTIONS(307),
    [anon_sym_lessThan] = ACTIONS(309),
    [anon_sym_LT] = ACTIONS(309),
    [anon_sym_lessThanOrEquals] = ACTIONS(307),
    [anon_sym_LT_EQ] = ACTIONS(307),
    [anon_sym_startsWith] = ACTIONS(307),
    [anon_sym_endsWith] = ACTIONS(307),
    [anon_sym_contains] = ACTIONS(307),
    [anon_sym_matches] = ACTIONS(307),
    [anon_sym_includes] = ACTIONS(307),
    [anon_sym_base64Decode] = ACTIONS(307),
    [anon_sym_base64Encode] = ACTIONS(307),
    [anon_sym_base64UrlSafeDecode] = ACTIONS(307),
    [anon_sym_base64UrlSafeEncode] = ACTIONS(307),
    [anon_sym_first] = ACTIONS(307),
    [anon_sym_last] = ACTIONS(307),
    [anon_sym_toFloat] = ACTIONS(307),
    [anon_sym_toHex] = ACTIONS(307),
    [anon_sym_toString] = ACTIONS(307),
    [anon_sym_utf8Decode] = ACTIONS(307),
    [anon_sym_utf8Encode] = ACTIONS(307),
    [anon_sym_count] = ACTIONS(307),
    [anon_sym_urlEncode] = ACTIONS(307),
    [anon_sym_urlDecode] = ACTIONS(307),
    [anon_sym_toInt] = ACTIONS(307),
    [anon_sym_htmlEscape] = ACTIONS(307),
    [anon_sym_htmlUnescape] = ACTIONS(307),
    [anon_sym_daysAfterNow] = ACTIONS(307),
    [anon_sym_daysBeforeNow] = ACTIONS(307),
    [anon_sym_charsetDecode] = ACTIONS(307),
    [anon_sym_dateFormat] = ACTIONS(307),
    [anon_sym_urlQueryParam] = ACTIONS(307),
    [anon_sym_decode] = ACTIONS(307),
    [anon_sym_format] = ACTIONS(307),
    [anon_sym_toDate] = ACTIONS(307),
    [anon_sym_nth] = ACTIONS(307),
    [anon_sym_replace] = ACTIONS(309),
    [anon_sym_replaceRegex] = ACTIONS(307),
    [anon_sym_split] = ACTIONS(307),
    [sym_comment] = ACTIONS(3),
  },
  [35] = {
    [anon_sym_location] = ACTIONS(311),
    [anon_sym_xpath] = ACTIONS(311),
    [anon_sym_jsonpath] = ACTIONS(311),
    [anon_sym_regex] = ACTIONS(311),
    [anon_sym_not] = ACTIONS(313),
    [anon_sym_isDate] = ACTIONS(311),
    [anon_sym_isList] = ACTIONS(311),
    [anon_sym_isObject] = ACTIONS(311),
    [anon_sym_exists] = ACTIONS(311),
    [anon_sym_isInteger] = ACTIONS(311),
    [anon_sym_isFloat] = ACTIONS(311),
    [anon_sym_isBoolean] = ACTIONS(311),
    [anon_sym_isString] = ACTIONS(311),
    [anon_sym_isCollection] = ACTIONS(311),
    [anon_sym_isNumber] = ACTIONS(311),
    [anon_sym_isIsoDate] = ACTIONS(311),
    [anon_sym_isEmpty] = ACTIONS(311),
    [anon_sym_isIpv4] = ACTIONS(311),
    [anon_sym_isIpv6] = ACTIONS(311),
    [anon_sym_isUuid] = ACTIONS(311),
    [anon_sym_equals] = ACTIONS(311),
    [anon_sym_EQ_EQ] = ACTIONS(311),
    [anon_sym_notEquals] = ACTIONS(311),
    [anon_sym_BANG_EQ] = ACTIONS(311),
    [anon_sym_greaterThan] = ACTIONS(313),
    [anon_sym_GT] = ACTIONS(313),
    [anon_sym_greaterThanOrEquals] = ACTIONS(311),
    [anon_sym_GT_EQ] = ACTIONS(311),
    [anon_sym_lessThan] = ACTIONS(313),
    [anon_sym_LT] = ACTIONS(313),
    [anon_sym_lessThanOrEquals] = ACTIONS(311),
    [anon_sym_LT_EQ] = ACTIONS(311),
    [anon_sym_startsWith] = ACTIONS(311),
    [anon_sym_endsWith] = ACTIONS(311),
    [anon_sym_contains] = ACTIONS(311),
    [anon_sym_matches] = ACTIONS(311),
    [anon_sym_includes] = ACTIONS(311),
    [anon_sym_base64Decode] = ACTIONS(311),
    [anon_sym_base64Encode] = ACTIONS(311),
    [anon_sym_base64UrlSafeDecode] = ACTIONS(311),
    [anon_sym_base64UrlSafeEncode] = ACTIONS(311),
    [anon_sym_first] = ACTIONS(311),
    [anon_sym_last] = ACTIONS(311),
    [anon_sym_toFloat] = ACTIONS(311),
    [anon_sym_toHex] = ACTIONS(311),
    [anon_sym_toString] = ACTIONS(311),
    [anon_sym_utf8Decode] = ACTIONS(311),
    [anon_sym_utf8Encode] = ACTIONS(311),
    [anon_sym_count] = ACTIONS(311),
    [anon_sym_urlEncode] = ACTIONS(311),
    [anon_sym_urlDecode] = ACTIONS(311),
    [anon_sym_toInt] = ACTIONS(311),
    [anon_sym_htmlEscape] = ACTIONS(311),
    [anon_sym_htmlUnescape] = ACTIONS(311),
    [anon_sym_daysAfterNow] = ACTIONS(311),
    [anon_sym_daysBeforeNow] = ACTIONS(311),
    [anon_sym_charsetDecode] = ACTIONS(311),
    [anon_sym_dateFormat] = ACTIONS(311),
    [anon_sym_urlQueryParam] = ACTIONS(311),
    [anon_sym_decode] = ACTIONS(311),
    [anon_sym_format] = ACTIONS(311),
    [anon_sym_toDate] = ACTIONS(311),
    [anon_sym_nth] = ACTIONS(311),
    [anon_sym_replace] = ACTIONS(313),
    [anon_sym_replaceRegex] = ACTIONS(311),
    [anon_sym_split] = ACTIONS(311),
    [sym_comment] = ACTIONS(3),
  },
  [36] = {
    [sym_assert] = STATE(39),
    [sym_query] = STATE(9),
    [sym_simple_query] = STATE(38),
    [sym_header_query] = STATE(38),
    [sym_cookie_query] = STATE(38),
    [sym_xpath_query] = STATE(38),
    [sym_jsonpath_query] = STATE(38),
    [sym_regex_query] = STATE(38),
    [sym_variable_query] = STATE(38),
    [sym_certificate_query] = STATE(38),
    [aux_sym_asserts_section_repeat1] = STATE(39),
    [ts_builtin_sym_end] = ACTIONS(315),
    [anon_sym_LF] = ACTIONS(315),
    [anon_sym_GET] = ACTIONS(317),
    [anon_sym_HEAD] = ACTIONS(317),
    [anon_sym_POST] = ACTIONS(317),
    [anon_sym_PUT] = ACTIONS(317),
    [anon_sym_DELETE] = ACTIONS(317),
    [anon_sym_CONNECT] = ACTIONS(317),
    [anon_sym_OPTIONS] = ACTIONS(317),
    [anon_sym_TRACE] = ACTIONS(317),
    [anon_sym_PATCH] = ACTIONS(317),
    [anon_sym_LINK] = ACTIONS(317),
    [anon_sym_UNLINK] = ACTIONS(317),
    [anon_sym_PURGE] = ACTIONS(317),
    [anon_sym_LOCK] = ACTIONS(317),
    [anon_sym_UNLOCK] = ACTIONS(317),
    [anon_sym_PROPFIND] = ACTIONS(317),
    [anon_sym_VIEW] = ACTIONS(317),
    [aux_sym_method_token1] = ACTIONS(317),
    [anon_sym_LBRACKCaptures_RBRACK] = ACTIONS(317),
    [anon_sym_LBRACKAsserts_RBRACK] = ACTIONS(317),
    [anon_sym_file_COMMA] = ACTIONS(317),
    [anon_sym_header] = ACTIONS(319),
    [anon_sym_variable] = ACTIONS(321),
    [anon_sym_null] = ACTIONS(317),
    [anon_sym_status] = ACTIONS(323),
    [anon_sym_version] = ACTIONS(323),
    [anon_sym_rawbytes] = ACTIONS(323),
    [anon_sym_ip] = ACTIONS(323),
    [anon_sym_redirects] = ACTIONS(323),
    [anon_sym_url] = ACTIONS(323),
    [anon_sym_body] = ACTIONS(323),
    [anon_sym_duration] = ACTIONS(323),
    [anon_sym_bytes] = ACTIONS(323),
    [anon_sym_sha256] = ACTIONS(323),
    [anon_sym_md5] = ACTIONS(323),
    [anon_sym_cookie] = ACTIONS(325),
    [anon_sym_xpath] = ACTIONS(327),
    [anon_sym_jsonpath] = ACTIONS(329),
    [anon_sym_regex] = ACTIONS(331),
    [anon_sym_certificate] = ACTIONS(333),
    [anon_sym_DQUOTE] = ACTIONS(317),
    [anon_sym_LT] = ACTIONS(317),
    [sym_xml_prolog_tag] = ACTIONS(317),
    [sym_xml_comment] = ACTIONS(317),
    [anon_sym_base64_COMMA] = ACTIONS(317),
    [anon_sym_hex_COMMA] = ACTIONS(317),
    [anon_sym_BQUOTE] = ACTIONS(317),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(317),
    [anon_sym_LBRACE2] = ACTIONS(317),
    [anon_sym_true] = ACTIONS(317),
    [anon_sym_false] = ACTIONS(317),
    [anon_sym_LBRACE_LBRACE2] = ACTIONS(317),
    [sym_comment] = ACTIONS(317),
    [sym__json_array_start] = ACTIONS(315),
    [sym__json_number] = ACTIONS(315),
  },
  [37] = {
    [anon_sym_location] = ACTIONS(335),
    [anon_sym_xpath] = ACTIONS(335),
    [anon_sym_jsonpath] = ACTIONS(335),
    [anon_sym_regex] = ACTIONS(335),
    [anon_sym_not] = ACTIONS(337),
    [anon_sym_isDate] = ACTIONS(335),
    [anon_sym_isList] = ACTIONS(335),
    [anon_sym_isObject] = ACTIONS(335),
    [anon_sym_exists] = ACTIONS(335),
    [anon_sym_isInteger] = ACTIONS(335),
    [anon_sym_isFloat] = ACTIONS(335),
    [anon_sym_isBoolean] = ACTIONS(335),
    [anon_sym_isString] = ACTIONS(335),
    [anon_sym_isCollection] = ACTIONS(335),
    [anon_sym_isNumber] = ACTIONS(335),
    [anon_sym_isIsoDate] = ACTIONS(335),
    [anon_sym_isEmpty] = ACTIONS(335),
    [anon_sym_isIpv4] = ACTIONS(335),
    [anon_sym_isIpv6] = ACTIONS(335),
    [anon_sym_isUuid] = ACTIONS(335),
    [anon_sym_equals] = ACTIONS(335),
    [anon_sym_EQ_EQ] = ACTIONS(335),
    [anon_sym_notEquals] = ACTIONS(335),
    [anon_sym_BANG_EQ] = ACTIONS(335),
    [anon_sym_greaterThan] = ACTIONS(337),
    [anon_sym_GT] = ACTIONS(337),
    [anon_sym_greaterThanOrEquals] = ACTIONS(335),
    [anon_sym_GT_EQ] = ACTIONS(335),
    [anon_sym_lessThan] = ACTIONS(337),
    [anon_sym_LT] = ACTIONS(337),
    [anon_sym_lessThanOrEquals] = ACTIONS(335),
    [anon_sym_LT_EQ] = ACTIONS(335),
    [anon_sym_startsWith] = ACTIONS(335),
    [anon_sym_endsWith] = ACTIONS(335),
    [anon_sym_contains] = ACTIONS(335),
    [anon_sym_matches] = ACTIONS(335),
    [anon_sym_includes] = ACTIONS(335),
    [anon_sym_base64Decode] = ACTIONS(335),
    [anon_sym_base64Encode] = ACTIONS(335),
    [anon_sym_base64UrlSafeDecode] = ACTIONS(335),
    [anon_sym_base64UrlSafeEncode] = ACTIONS(335),
    [anon_sym_first] = ACTIONS(335),
    [anon_sym_last] = ACTIONS(335),
    [anon_sym_toFloat] = ACTIONS(335),
    [anon_sym_toHex] = ACTIONS(335),
    [anon_sym_toString] = ACTIONS(335),
    [anon_sym_utf8Decode] = ACTIONS(335),
    [anon_sym_utf8Encode] = ACTIONS(335),
    [anon_sym_count] = ACTIONS(335),
    [anon_sym_urlEncode] = ACTIONS(335),
    [anon_sym_urlDecode] = ACTIONS(335),
    [anon_sym_toInt] = ACTIONS(335),
    [anon_sym_htmlEscape] = ACTIONS(335),
    [anon_sym_htmlUnescape] = ACTIONS(335),
    [anon_sym_daysAfterNow] = ACTIONS(335),
    [anon_sym_daysBeforeNow] = ACTIONS(335),
    [anon_sym_charsetDecode] = ACTIONS(335),
    [anon_sym_dateFormat] = ACTIONS(335),
    [anon_sym_urlQueryParam] = ACTIONS(335),
    [anon_sym_decode] = ACTIONS(335),
    [anon_sym_format] = ACTIONS(335),
    [anon_sym_toDate] = ACTIONS(335),
    [anon_sym_nth] = ACTIONS(335),
    [anon_sym_replace] = ACTIONS(337),
    [anon_sym_replaceRegex] = ACTIONS(335),
    [anon_sym_split] = ACTIONS(335),
    [sym_comment] = ACTIONS(3),
  },
  [38] = {
    [anon_sym_location] = ACTIONS(339),
    [anon_sym_xpath] = ACTIONS(339),
    [anon_sym_jsonpath] = ACTIONS(339),
    [anon_sym_regex] = ACTIONS(339),
    [anon_sym_not] = ACTIONS(341),
    [anon_sym_isDate] = ACTIONS(339),
    [anon_sym_isList] = ACTIONS(339),
    [anon_sym_isObject] = ACTIONS(339),
    [anon_sym_exists] = ACTIONS(339),
    [anon_sym_isInteger] = ACTIONS(339),
    [anon_sym_isFloat] = ACTIONS(339),
    [anon_sym_isBoolean] = ACTIONS(339),
    [anon_sym_isString] = ACTIONS(339),
    [anon_sym_isCollection] = ACTIONS(339),
    [anon_sym_isNumber] = ACTIONS(339),
    [anon_sym_isIsoDate] = ACTIONS(339),
    [anon_sym_isEmpty] = ACTIONS(339),
    [anon_sym_isIpv4] = ACTIONS(339),
    [anon_sym_isIpv6] = ACTIONS(339),
    [anon_sym_isUuid] = ACTIONS(339),
    [anon_sym_equals] = ACTIONS(339),
    [anon_sym_EQ_EQ] = ACTIONS(339),
    [anon_sym_notEquals] = ACTIONS(339),
    [anon_sym_BANG_EQ] = ACTIONS(339),
    [anon_sym_greaterThan] = ACTIONS(341),
    [anon_sym_GT] = ACTIONS(341),
    [anon_sym_greaterThanOrEquals] = ACTIONS(339),
    [anon_sym_GT_EQ] = ACTIONS(339),
    [anon_sym_lessThan] = ACTIONS(341),
    [anon_sym_LT] = ACTIONS(341),
    [anon_sym_lessThanOrEquals] = ACTIONS(339),
    [anon_sym_LT_EQ] = ACTIONS(339),
    [anon_sym_startsWith] = ACTIONS(339),
    [anon_sym_endsWith] = ACTIONS(339),
    [anon_sym_contains] = ACTIONS(339),
    [anon_sym_matches] = ACTIONS(339),
    [anon_sym_includes] = ACTIONS(339),
    [anon_sym_base64Decode] = ACTIONS(339),
    [anon_sym_base64Encode] = ACTIONS(339),
    [anon_sym_base64UrlSafeDecode] = ACTIONS(339),
    [anon_sym_base64UrlSafeEncode] = ACTIONS(339),
    [anon_sym_first] = ACTIONS(339),
    [anon_sym_last] = ACTIONS(339),
    [anon_sym_toFloat] = ACTIONS(339),
    [anon_sym_toHex] = ACTIONS(339),
    [anon_sym_toString] = ACTIONS(339),
    [anon_sym_utf8Decode] = ACTIONS(339),
    [anon_sym_utf8Encode] = ACTIONS(339),
    [anon_sym_count] = ACTIONS(339),
    [anon_sym_urlEncode] = ACTIONS(339),
    [anon_sym_urlDecode] = ACTIONS(339),
    [anon_sym_toInt] = ACTIONS(339),
    [anon_sym_htmlEscape] = ACTIONS(339),
    [anon_sym_htmlUnescape] = ACTIONS(339),
    [anon_sym_daysAfterNow] = ACTIONS(339),
    [anon_sym_daysBeforeNow] = ACTIONS(339),
    [anon_sym_charsetDecode] = ACTIONS(339),
    [anon_sym_dateFormat] = ACTIONS(339),
    [anon_sym_urlQueryParam] = ACTIONS(339),
    [anon_sym_decode] = ACTIONS(339),
    [anon_sym_format] = ACTIONS(339),
    [anon_sym_toDate] = ACTIONS(339),
    [anon_sym_nth] = ACTIONS(339),
    [anon_sym_replace] = ACTIONS(341),
    [anon_sym_replaceRegex] = ACTIONS(339),
    [anon_sym_split] = ACTIONS(339),
    [sym_comment] = ACTIONS(3),
  },
  [39] = {
    [sym_assert] = STATE(42),
    [sym_query] = STATE(9),
    [sym_simple_query] = STATE(38),
    [sym_header_query] = STATE(38),
    [sym_cookie_query] = STATE(38),
    [sym_xpath_query] = STATE(38),
    [sym_jsonpath_query] = STATE(38),
    [sym_regex_query] = STATE(38),
    [sym_variable_query] = STATE(38),
    [sym_certificate_query] = STATE(38),
    [aux_sym_asserts_section_repeat1] = STATE(42),
    [ts_builtin_sym_end] = ACTIONS(343),
    [anon_sym_LF] = ACTIONS(343),
    [anon_sym_GET] = ACTIONS(345),
    [anon_sym_HEAD] = ACTIONS(345),
    [anon_sym_POST] = ACTIONS(345),
    [anon_sym_PUT] = ACTIONS(345),
    [anon_sym_DELETE] = ACTIONS(345),
    [anon_sym_CONNECT] = ACTIONS(345),
    [anon_sym_OPTIONS] = ACTIONS(345),
    [anon_sym_TRACE] = ACTIONS(345),
    [anon_sym_PATCH] = ACTIONS(345),
    [anon_sym_LINK] = ACTIONS(345),
    [anon_sym_UNLINK] = ACTIONS(345),
    [anon_sym_PURGE] = ACTIONS(345),
    [anon_sym_LOCK] = ACTIONS(345),
    [anon_sym_UNLOCK] = ACTIONS(345),
    [anon_sym_PROPFIND] = ACTIONS(345),
    [anon_sym_VIEW] = ACTIONS(345),
    [aux_sym_method_token1] = ACTIONS(345),
    [anon_sym_LBRACKCaptures_RBRACK] = ACTIONS(345),
    [anon_sym_LBRACKAsserts_RBRACK] = ACTIONS(345),
    [anon_sym_file_COMMA] = ACTIONS(345),
    [anon_sym_header] = ACTIONS(319),
    [anon_sym_variable] = ACTIONS(321),
    [anon_sym_null] = ACTIONS(345),
    [anon_sym_status] = ACTIONS(323),
    [anon_sym_version] = ACTIONS(323),
    [anon_sym_rawbytes] = ACTIONS(323),
    [anon_sym_ip] = ACTIONS(323),
    [anon_sym_redirects] = ACTIONS(323),
    [anon_sym_url] = ACTIONS(323),
    [anon_sym_body] = ACTIONS(323),
    [anon_sym_duration] = ACTIONS(323),
    [anon_sym_bytes] = ACTIONS(323),
    [anon_sym_sha256] = ACTIONS(323),
    [anon_sym_md5] = ACTIONS(323),
    [anon_sym_cookie] = ACTIONS(325),
    [anon_sym_xpath] = ACTIONS(327),
    [anon_sym_jsonpath] = ACTIONS(329),
    [anon_sym_regex] = ACTIONS(331),
    [anon_sym_certificate] = ACTIONS(333),
    [anon_sym_DQUOTE] = ACTIONS(345),
    [anon_sym_LT] = ACTIONS(345),
    [sym_xml_prolog_tag] = ACTIONS(345),
    [sym_xml_comment] = ACTIONS(345),
    [anon_sym_base64_COMMA] = ACTIONS(345),
    [anon_sym_hex_COMMA] = ACTIONS(345),
    [anon_sym_BQUOTE] = ACTIONS(345),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(345),
    [anon_sym_LBRACE2] = ACTIONS(345),
    [anon_sym_true] = ACTIONS(345),
    [anon_sym_false] = ACTIONS(345),
    [anon_sym_LBRACE_LBRACE2] = ACTIONS(345),
    [sym_comment] = ACTIONS(345),
    [sym__json_array_start] = ACTIONS(343),
    [sym__json_number] = ACTIONS(343),
  },
  [40] = {
    [anon_sym_location] = ACTIONS(347),
    [anon_sym_xpath] = ACTIONS(347),
    [anon_sym_jsonpath] = ACTIONS(347),
    [anon_sym_regex] = ACTIONS(347),
    [anon_sym_not] = ACTIONS(349),
    [anon_sym_isDate] = ACTIONS(347),
    [anon_sym_isList] = ACTIONS(347),
    [anon_sym_isObject] = ACTIONS(347),
    [anon_sym_exists] = ACTIONS(347),
    [anon_sym_isInteger] = ACTIONS(347),
    [anon_sym_isFloat] = ACTIONS(347),
    [anon_sym_isBoolean] = ACTIONS(347),
    [anon_sym_isString] = ACTIONS(347),
    [anon_sym_isCollection] = ACTIONS(347),
    [anon_sym_isNumber] = ACTIONS(347),
    [anon_sym_isIsoDate] = ACTIONS(347),
    [anon_sym_isEmpty] = ACTIONS(347),
    [anon_sym_isIpv4] = ACTIONS(347),
    [anon_sym_isIpv6] = ACTIONS(347),
    [anon_sym_isUuid] = ACTIONS(347),
    [anon_sym_equals] = ACTIONS(347),
    [anon_sym_EQ_EQ] = ACTIONS(347),
    [anon_sym_notEquals] = ACTIONS(347),
    [anon_sym_BANG_EQ] = ACTIONS(347),
    [anon_sym_greaterThan] = ACTIONS(349),
    [anon_sym_GT] = ACTIONS(349),
    [anon_sym_greaterThanOrEquals] = ACTIONS(347),
    [anon_sym_GT_EQ] = ACTIONS(347),
    [anon_sym_lessThan] = ACTIONS(349),
    [anon_sym_LT] = ACTIONS(349),
    [anon_sym_lessThanOrEquals] = ACTIONS(347),
    [anon_sym_LT_EQ] = ACTIONS(347),
    [anon_sym_startsWith] = ACTIONS(347),
    [anon_sym_endsWith] = ACTIONS(347),
    [anon_sym_contains] = ACTIONS(347),
    [anon_sym_matches] = ACTIONS(347),
    [anon_sym_includes] = ACTIONS(347),
    [anon_sym_base64Decode] = ACTIONS(347),
    [anon_sym_base64Encode] = ACTIONS(347),
    [anon_sym_base64UrlSafeDecode] = ACTIONS(347),
    [anon_sym_base64UrlSafeEncode] = ACTIONS(347),
    [anon_sym_first] = ACTIONS(347),
    [anon_sym_last] = ACTIONS(347),
    [anon_sym_toFloat] = ACTIONS(347),
    [anon_sym_toHex] = ACTIONS(347),
    [anon_sym_toString] = ACTIONS(347),
    [anon_sym_utf8Decode] = ACTIONS(347),
    [anon_sym_utf8Encode] = ACTIONS(347),
    [anon_sym_count] = ACTIONS(347),
    [anon_sym_urlEncode] = ACTIONS(347),
    [anon_sym_urlDecode] = ACTIONS(347),
    [anon_sym_toInt] = ACTIONS(347),
    [anon_sym_htmlEscape] = ACTIONS(347),
    [anon_sym_htmlUnescape] = ACTIONS(347),
    [anon_sym_daysAfterNow] = ACTIONS(347),
    [anon_sym_daysBeforeNow] = ACTIONS(347),
    [anon_sym_charsetDecode] = ACTIONS(347),
    [anon_sym_dateFormat] = ACTIONS(347),
    [anon_sym_urlQueryParam] = ACTIONS(347),
    [anon_sym_decode] = ACTIONS(347),
    [anon_sym_format] = ACTIONS(347),
    [anon_sym_toDate] = ACTIONS(347),
    [anon_sym_nth] = ACTIONS(347),
    [anon_sym_replace] = ACTIONS(349),
    [anon_sym_replaceRegex] = ACTIONS(347),
    [anon_sym_split] = ACTIONS(347),
    [sym_comment] = ACTIONS(3),
  },
  [41] = {
    [anon_sym_location] = ACTIONS(351),
    [anon_sym_xpath] = ACTIONS(351),
    [anon_sym_jsonpath] = ACTIONS(351),
    [anon_sym_regex] = ACTIONS(351),
    [anon_sym_not] = ACTIONS(353),
    [anon_sym_isDate] = ACTIONS(351),
    [anon_sym_isList] = ACTIONS(351),
    [anon_sym_isObject] = ACTIONS(351),
    [anon_sym_exists] = ACTIONS(351),
    [anon_sym_isInteger] = ACTIONS(351),
    [anon_sym_isFloat] = ACTIONS(351),
    [anon_sym_isBoolean] = ACTIONS(351),
    [anon_sym_isString] = ACTIONS(351),
    [anon_sym_isCollection] = ACTIONS(351),
    [anon_sym_isNumber] = ACTIONS(351),
    [anon_sym_isIsoDate] = ACTIONS(351),
    [anon_sym_isEmpty] = ACTIONS(351),
    [anon_sym_isIpv4] = ACTIONS(351),
    [anon_sym_isIpv6] = ACTIONS(351),
    [anon_sym_isUuid] = ACTIONS(351),
    [anon_sym_equals] = ACTIONS(351),
    [anon_sym_EQ_EQ] = ACTIONS(351),
    [anon_sym_notEquals] = ACTIONS(351),
    [anon_sym_BANG_EQ] = ACTIONS(351),
    [anon_sym_greaterThan] = ACTIONS(353),
    [anon_sym_GT] = ACTIONS(353),
    [anon_sym_greaterThanOrEquals] = ACTIONS(351),
    [anon_sym_GT_EQ] = ACTIONS(351),
    [anon_sym_lessThan] = ACTIONS(353),
    [anon_sym_LT] = ACTIONS(353),
    [anon_sym_lessThanOrEquals] = ACTIONS(351),
    [anon_sym_LT_EQ] = ACTIONS(351),
    [anon_sym_startsWith] = ACTIONS(351),
    [anon_sym_endsWith] = ACTIONS(351),
    [anon_sym_contains] = ACTIONS(351),
    [anon_sym_matches] = ACTIONS(351),
    [anon_sym_includes] = ACTIONS(351),
    [anon_sym_base64Decode] = ACTIONS(351),
    [anon_sym_base64Encode] = ACTIONS(351),
    [anon_sym_base64UrlSafeDecode] = ACTIONS(351),
    [anon_sym_base64UrlSafeEncode] = ACTIONS(351),
    [anon_sym_first] = ACTIONS(351),
    [anon_sym_last] = ACTIONS(351),
    [anon_sym_toFloat] = ACTIONS(351),
    [anon_sym_toHex] = ACTIONS(351),
    [anon_sym_toString] = ACTIONS(351),
    [anon_sym_utf8Decode] = ACTIONS(351),
    [anon_sym_utf8Encode] = ACTIONS(351),
    [anon_sym_count] = ACTIONS(351),
    [anon_sym_urlEncode] = ACTIONS(351),
    [anon_sym_urlDecode] = ACTIONS(351),
    [anon_sym_toInt] = ACTIONS(351),
    [anon_sym_htmlEscape] = ACTIONS(351),
    [anon_sym_htmlUnescape] = ACTIONS(351),
    [anon_sym_daysAfterNow] = ACTIONS(351),
    [anon_sym_daysBeforeNow] = ACTIONS(351),
    [anon_sym_charsetDecode] = ACTIONS(351),
    [anon_sym_dateFormat] = ACTIONS(351),
    [anon_sym_urlQueryParam] = ACTIONS(351),
    [anon_sym_decode] = ACTIONS(351),
    [anon_sym_format] = ACTIONS(351),
    [anon_sym_toDate] = ACTIONS(351),
    [anon_sym_nth] = ACTIONS(351),
    [anon_sym_replace] = ACTIONS(353),
    [anon_sym_replaceRegex] = ACTIONS(351),
    [anon_sym_split] = ACTIONS(351),
    [sym_comment] = ACTIONS(3),
  },
  [42] = {
    [sym_assert] = STATE(42),
    [sym_query] = STATE(9),
    [sym_simple_query] = STATE(38),
    [sym_header_query] = STATE(38),
    [sym_cookie_query] = STATE(38),
    [sym_xpath_query] = STATE(38),
    [sym_jsonpath_query] = STATE(38),
    [sym_regex_query] = STATE(38),
    [sym_variable_query] = STATE(38),
    [sym_certificate_query] = STATE(38),
    [aux_sym_asserts_section_repeat1] = STATE(42),
    [ts_builtin_sym_end] = ACTIONS(355),
    [anon_sym_LF] = ACTIONS(355),
    [anon_sym_GET] = ACTIONS(357),
    [anon_sym_HEAD] = ACTIONS(357),
    [anon_sym_POST] = ACTIONS(357),
    [anon_sym_PUT] = ACTIONS(357),
    [anon_sym_DELETE] = ACTIONS(357),
    [anon_sym_CONNECT] = ACTIONS(357),
    [anon_sym_OPTIONS] = ACTIONS(357),
    [anon_sym_TRACE] = ACTIONS(357),
    [anon_sym_PATCH] = ACTIONS(357),
    [anon_sym_LINK] = ACTIONS(357),
    [anon_sym_UNLINK] = ACTIONS(357),
    [anon_sym_PURGE] = ACTIONS(357),
    [anon_sym_LOCK] = ACTIONS(357),
    [anon_sym_UNLOCK] = ACTIONS(357),
    [anon_sym_PROPFIND] = ACTIONS(357),
    [anon_sym_VIEW] = ACTIONS(357),
    [aux_sym_method_token1] = ACTIONS(357),
    [anon_sym_LBRACKCaptures_RBRACK] = ACTIONS(357),
    [anon_sym_LBRACKAsserts_RBRACK] = ACTIONS(357),
    [anon_sym_file_COMMA] = ACTIONS(357),
    [anon_sym_header] = ACTIONS(359),
    [anon_sym_variable] = ACTIONS(362),
    [anon_sym_null] = ACTIONS(357),
    [anon_sym_status] = ACTIONS(365),
    [anon_sym_version] = ACTIONS(365),
    [anon_sym_rawbytes] = ACTIONS(365),
    [anon_sym_ip] = ACTIONS(365),
    [anon_sym_redirects] = ACTIONS(365),
    [anon_sym_url] = ACTIONS(365),
    [anon_sym_body] = ACTIONS(365),
    [anon_sym_duration] = ACTIONS(365),
    [anon_sym_bytes] = ACTIONS(365),
    [anon_sym_sha256] = ACTIONS(365),
    [anon_sym_md5] = ACTIONS(365),
    [anon_sym_cookie] = ACTIONS(368),
    [anon_sym_xpath] = ACTIONS(371),
    [anon_sym_jsonpath] = ACTIONS(374),
    [anon_sym_regex] = ACTIONS(377),
    [anon_sym_certificate] = ACTIONS(380),
    [anon_sym_DQUOTE] = ACTIONS(357),
    [anon_sym_LT] = ACTIONS(357),
    [sym_xml_prolog_tag] = ACTIONS(357),
    [sym_xml_comment] = ACTIONS(357),
    [anon_sym_base64_COMMA] = ACTIONS(357),
    [anon_sym_hex_COMMA] = ACTIONS(357),
    [anon_sym_BQUOTE] = ACTIONS(357),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(357),
    [anon_sym_LBRACE2] = ACTIONS(357),
    [anon_sym_true] = ACTIONS(357),
    [anon_sym_false] = ACTIONS(357),
    [anon_sym_LBRACE_LBRACE2] = ACTIONS(357),
    [sym_comment] = ACTIONS(357),
    [sym__json_array_start] = ACTIONS(355),
    [sym__json_number] = ACTIONS(355),
  },
  [43] = {
    [anon_sym_location] = ACTIONS(383),
    [anon_sym_xpath] = ACTIONS(383),
    [anon_sym_jsonpath] = ACTIONS(383),
    [anon_sym_regex] = ACTIONS(383),
    [anon_sym_not] = ACTIONS(385),
    [anon_sym_isDate] = ACTIONS(383),
    [anon_sym_isList] = ACTIONS(383),
    [anon_sym_isObject] = ACTIONS(383),
    [anon_sym_exists] = ACTIONS(383),
    [anon_sym_isInteger] = ACTIONS(383),
    [anon_sym_isFloat] = ACTIONS(383),
    [anon_sym_isBoolean] = ACTIONS(383),
    [anon_sym_isString] = ACTIONS(383),
    [anon_sym_isCollection] = ACTIONS(383),
    [anon_sym_isNumber] = ACTIONS(383),
    [anon_sym_isIsoDate] = ACTIONS(383),
    [anon_sym_isEmpty] = ACTIONS(383),
    [anon_sym_isIpv4] = ACTIONS(383),
    [anon_sym_isIpv6] = ACTIONS(383),
    [anon_sym_isUuid] = ACTIONS(383),
    [anon_sym_equals] = ACTIONS(383),
    [anon_sym_EQ_EQ] = ACTIONS(383),
    [anon_sym_notEquals] = ACTIONS(383),
    [anon_sym_BANG_EQ] = ACTIONS(383),
    [anon_sym_greaterThan] = ACTIONS(385),
    [anon_sym_GT] = ACTIONS(385),
    [anon_sym_greaterThanOrEquals] = ACTIONS(383),
    [anon_sym_GT_EQ] = ACTIONS(383),
    [anon_sym_lessThan] = ACTIONS(385),
    [anon_sym_LT] = ACTIONS(385),
    [anon_sym_lessThanOrEquals] = ACTIONS(383),
    [anon_sym_LT_EQ] = ACTIONS(383),
    [anon_sym_startsWith] = ACTIONS(383),
    [anon_sym_endsWith] = ACTIONS(383),
    [anon_sym_contains] = ACTIONS(383),
    [anon_sym_matches] = ACTIONS(383),
    [anon_sym_includes] = ACTIONS(383),
    [anon_sym_base64Decode] = ACTIONS(383),
    [anon_sym_base64Encode] = ACTIONS(383),
    [anon_sym_base64UrlSafeDecode] = ACTIONS(383),
    [anon_sym_base64UrlSafeEncode] = ACTIONS(383),
    [anon_sym_first] = ACTIONS(383),
    [anon_sym_last] = ACTIONS(383),
    [anon_sym_toFloat] = ACTIONS(383),
    [anon_sym_toHex] = ACTIONS(383),
    [anon_sym_toString] = ACTIONS(383),
    [anon_sym_utf8Decode] = ACTIONS(383),
    [anon_sym_utf8Encode] = ACTIONS(383),
    [anon_sym_count] = ACTIONS(383),
    [anon_sym_urlEncode] = ACTIONS(383),
    [anon_sym_urlDecode] = ACTIONS(383),
    [anon_sym_toInt] = ACTIONS(383),
    [anon_sym_htmlEscape] = ACTIONS(383),
    [anon_sym_htmlUnescape] = ACTIONS(383),
    [anon_sym_daysAfterNow] = ACTIONS(383),
    [anon_sym_daysBeforeNow] = ACTIONS(383),
    [anon_sym_charsetDecode] = ACTIONS(383),
    [anon_sym_dateFormat] = ACTIONS(383),
    [anon_sym_urlQueryParam] = ACTIONS(383),
    [anon_sym_decode] = ACTIONS(383),
    [anon_sym_format] = ACTIONS(383),
    [anon_sym_toDate] = ACTIONS(383),
    [anon_sym_nth] = ACTIONS(383),
    [anon_sym_replace] = ACTIONS(385),
    [anon_sym_replaceRegex] = ACTIONS(383),
    [anon_sym_split] = ACTIONS(383),
    [sym_comment] = ACTIONS(3),
  },
  [44] = {
    [anon_sym_location] = ACTIONS(387),
    [anon_sym_xpath] = ACTIONS(387),
    [anon_sym_jsonpath] = ACTIONS(387),
    [anon_sym_regex] = ACTIONS(387),
    [anon_sym_not] = ACTIONS(389),
    [anon_sym_isDate] = ACTIONS(387),
    [anon_sym_isList] = ACTIONS(387),
    [anon_sym_isObject] = ACTIONS(387),
    [anon_sym_exists] = ACTIONS(387),
    [anon_sym_isInteger] = ACTIONS(387),
    [anon_sym_isFloat] = ACTIONS(387),
    [anon_sym_isBoolean] = ACTIONS(387),
    [anon_sym_isString] = ACTIONS(387),
    [anon_sym_isCollection] = ACTIONS(387),
    [anon_sym_isNumber] = ACTIONS(387),
    [anon_sym_isIsoDate] = ACTIONS(387),
    [anon_sym_isEmpty] = ACTIONS(387),
    [anon_sym_isIpv4] = ACTIONS(387),
    [anon_sym_isIpv6] = ACTIONS(387),
    [anon_sym_isUuid] = ACTIONS(387),
    [anon_sym_equals] = ACTIONS(387),
    [anon_sym_EQ_EQ] = ACTIONS(387),
    [anon_sym_notEquals] = ACTIONS(387),
    [anon_sym_BANG_EQ] = ACTIONS(387),
    [anon_sym_greaterThan] = ACTIONS(389),
    [anon_sym_GT] = ACTIONS(389),
    [anon_sym_greaterThanOrEquals] = ACTIONS(387),
    [anon_sym_GT_EQ] = ACTIONS(387),
    [anon_sym_lessThan] = ACTIONS(389),
    [anon_sym_LT] = ACTIONS(389),
    [anon_sym_lessThanOrEquals] = ACTIONS(387),
    [anon_sym_LT_EQ] = ACTIONS(387),
    [anon_sym_startsWith] = ACTIONS(387),
    [anon_sym_endsWith] = ACTIONS(387),
    [anon_sym_contains] = ACTIONS(387),
    [anon_sym_matches] = ACTIONS(387),
    [anon_sym_includes] = ACTIONS(387),
    [anon_sym_base64Decode] = ACTIONS(387),
    [anon_sym_base64Encode] = ACTIONS(387),
    [anon_sym_base64UrlSafeDecode] = ACTIONS(387),
    [anon_sym_base64UrlSafeEncode] = ACTIONS(387),
    [anon_sym_first] = ACTIONS(387),
    [anon_sym_last] = ACTIONS(387),
    [anon_sym_toFloat] = ACTIONS(387),
    [anon_sym_toHex] = ACTIONS(387),
    [anon_sym_toString] = ACTIONS(387),
    [anon_sym_utf8Decode] = ACTIONS(387),
    [anon_sym_utf8Encode] = ACTIONS(387),
    [anon_sym_count] = ACTIONS(387),
    [anon_sym_urlEncode] = ACTIONS(387),
    [anon_sym_urlDecode] = ACTIONS(387),
    [anon_sym_toInt] = ACTIONS(387),
    [anon_sym_htmlEscape] = ACTIONS(387),
    [anon_sym_htmlUnescape] = ACTIONS(387),
    [anon_sym_daysAfterNow] = ACTIONS(387),
    [anon_sym_daysBeforeNow] = ACTIONS(387),
    [anon_sym_charsetDecode] = ACTIONS(387),
    [anon_sym_dateFormat] = ACTIONS(387),
    [anon_sym_urlQueryParam] = ACTIONS(387),
    [anon_sym_decode] = ACTIONS(387),
    [anon_sym_format] = ACTIONS(387),
    [anon_sym_toDate] = ACTIONS(387),
    [anon_sym_nth] = ACTIONS(387),
    [anon_sym_replace] = ACTIONS(389),
    [anon_sym_replaceRegex] = ACTIONS(387),
    [anon_sym_split] = ACTIONS(387),
    [sym_comment] = ACTIONS(3),
  },
  [45] = {
    [anon_sym_location] = ACTIONS(391),
    [anon_sym_xpath] = ACTIONS(391),
    [anon_sym_jsonpath] = ACTIONS(391),
    [anon_sym_regex] = ACTIONS(391),
    [anon_sym_not] = ACTIONS(393),
    [anon_sym_isDate] = ACTIONS(391),
    [anon_sym_isList] = ACTIONS(391),
    [anon_sym_isObject] = ACTIONS(391),
    [anon_sym_exists] = ACTIONS(391),
    [anon_sym_isInteger] = ACTIONS(391),
    [anon_sym_isFloat] = ACTIONS(391),
    [anon_sym_isBoolean] = ACTIONS(391),
    [anon_sym_isString] = ACTIONS(391),
    [anon_sym_isCollection] = ACTIONS(391),
    [anon_sym_isNumber] = ACTIONS(391),
    [anon_sym_isIsoDate] = ACTIONS(391),
    [anon_sym_isEmpty] = ACTIONS(391),
    [anon_sym_isIpv4] = ACTIONS(391),
    [anon_sym_isIpv6] = ACTIONS(391),
    [anon_sym_isUuid] = ACTIONS(391),
    [anon_sym_equals] = ACTIONS(391),
    [anon_sym_EQ_EQ] = ACTIONS(391),
    [anon_sym_notEquals] = ACTIONS(391),
    [anon_sym_BANG_EQ] = ACTIONS(391),
    [anon_sym_greaterThan] = ACTIONS(393),
    [anon_sym_GT] = ACTIONS(393),
    [anon_sym_greaterThanOrEquals] = ACTIONS(391),
    [anon_sym_GT_EQ] = ACTIONS(391),
    [anon_sym_lessThan] = ACTIONS(393),
    [anon_sym_LT] = ACTIONS(393),
    [anon_sym_lessThanOrEquals] = ACTIONS(391),
    [anon_sym_LT_EQ] = ACTIONS(391),
    [anon_sym_startsWith] = ACTIONS(391),
    [anon_sym_endsWith] = ACTIONS(391),
    [anon_sym_contains] = ACTIONS(391),
    [anon_sym_matches] = ACTIONS(391),
    [anon_sym_includes] = ACTIONS(391),
    [anon_sym_base64Decode] = ACTIONS(391),
    [anon_sym_base64Encode] = ACTIONS(391),
    [anon_sym_base64UrlSafeDecode] = ACTIONS(391),
    [anon_sym_base64UrlSafeEncode] = ACTIONS(391),
    [anon_sym_first] = ACTIONS(391),
    [anon_sym_last] = ACTIONS(391),
    [anon_sym_toFloat] = ACTIONS(391),
    [anon_sym_toHex] = ACTIONS(391),
    [anon_sym_toString] = ACTIONS(391),
    [anon_sym_utf8Decode] = ACTIONS(391),
    [anon_sym_utf8Encode] = ACTIONS(391),
    [anon_sym_count] = ACTIONS(391),
    [anon_sym_urlEncode] = ACTIONS(391),
    [anon_sym_urlDecode] = ACTIONS(391),
    [anon_sym_toInt] = ACTIONS(391),
    [anon_sym_htmlEscape] = ACTIONS(391),
    [anon_sym_htmlUnescape] = ACTIONS(391),
    [anon_sym_daysAfterNow] = ACTIONS(391),
    [anon_sym_daysBeforeNow] = ACTIONS(391),
    [anon_sym_charsetDecode] = ACTIONS(391),
    [anon_sym_dateFormat] = ACTIONS(391),
    [anon_sym_urlQueryParam] = ACTIONS(391),
    [anon_sym_decode] = ACTIONS(391),
    [anon_sym_format] = ACTIONS(391),
    [anon_sym_toDate] = ACTIONS(391),
    [anon_sym_nth] = ACTIONS(391),
    [anon_sym_replace] = ACTIONS(393),
    [anon_sym_replaceRegex] = ACTIONS(391),
    [anon_sym_split] = ACTIONS(391),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 13,
    ACTIONS(399), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(402), 1,
      sym_key_string_text,
    ACTIONS(405), 1,
      sym_key_string_escaped_char,
    ACTIONS(408), 1,
      sym__bracketed_key_start,
    STATE(46), 1,
      aux_sym_multipart_form_data_section_repeat1,
    STATE(205), 1,
      sym__key_template,
    STATE(287), 1,
      aux_sym_key_string_content_repeat1,
    STATE(310), 1,
      sym_multipart_form_data_param,
    STATE(494), 1,
      sym_key_string,
    STATE(208), 2,
      sym__bracketed_key_content,
      sym_key_string_content,
    STATE(455), 2,
      sym_key_value,
      sym_file_param,
    ACTIONS(395), 4,
      sym__json_array_start,
      sym__json_number,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(397), 47,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
      anon_sym_null,
      anon_sym_DQUOTE,
      anon_sym_LT,
      sym_xml_prolog_tag,
      sym_xml_comment,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE2,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LBRACE_LBRACE2,
      sym_comment,
  [91] = 13,
    ACTIONS(177), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(179), 1,
      sym_key_string_text,
    ACTIONS(181), 1,
      sym_key_string_escaped_char,
    ACTIONS(195), 1,
      sym__bracketed_key_start,
    STATE(48), 1,
      aux_sym_multipart_form_data_section_repeat1,
    STATE(205), 1,
      sym__key_template,
    STATE(287), 1,
      aux_sym_key_string_content_repeat1,
    STATE(310), 1,
      sym_multipart_form_data_param,
    STATE(494), 1,
      sym_key_string,
    STATE(208), 2,
      sym__bracketed_key_content,
      sym_key_string_content,
    STATE(455), 2,
      sym_key_value,
      sym_file_param,
    ACTIONS(411), 4,
      sym__json_array_start,
      sym__json_number,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(413), 47,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
      anon_sym_null,
      anon_sym_DQUOTE,
      anon_sym_LT,
      sym_xml_prolog_tag,
      sym_xml_comment,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE2,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LBRACE_LBRACE2,
      sym_comment,
  [182] = 13,
    ACTIONS(177), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(179), 1,
      sym_key_string_text,
    ACTIONS(181), 1,
      sym_key_string_escaped_char,
    ACTIONS(195), 1,
      sym__bracketed_key_start,
    STATE(46), 1,
      aux_sym_multipart_form_data_section_repeat1,
    STATE(205), 1,
      sym__key_template,
    STATE(287), 1,
      aux_sym_key_string_content_repeat1,
    STATE(310), 1,
      sym_multipart_form_data_param,
    STATE(494), 1,
      sym_key_string,
    STATE(208), 2,
      sym__bracketed_key_content,
      sym_key_string_content,
    STATE(455), 2,
      sym_key_value,
      sym_file_param,
    ACTIONS(415), 4,
      sym__json_array_start,
      sym__json_number,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(417), 47,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
      anon_sym_null,
      anon_sym_DQUOTE,
      anon_sym_LT,
      sym_xml_prolog_tag,
      sym_xml_comment,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE2,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LBRACE_LBRACE2,
      sym_comment,
  [273] = 12,
    ACTIONS(423), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(426), 1,
      sym_key_string_text,
    ACTIONS(429), 1,
      sym_key_string_escaped_char,
    ACTIONS(432), 1,
      sym__bracketed_key_start,
    STATE(205), 1,
      sym__key_template,
    STATE(284), 1,
      sym_key_value,
    STATE(287), 1,
      aux_sym_key_string_content_repeat1,
    STATE(491), 1,
      sym_key_string,
    STATE(49), 2,
      sym_header,
      aux_sym_request_repeat1,
    STATE(208), 2,
      sym__bracketed_key_content,
      sym_key_string_content,
    ACTIONS(419), 4,
      sym__json_array_start,
      sym__json_number,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(421), 47,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
      anon_sym_null,
      anon_sym_DQUOTE,
      anon_sym_LT,
      sym_xml_prolog_tag,
      sym_xml_comment,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE2,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LBRACE_LBRACE2,
      sym_comment,
  [361] = 12,
    ACTIONS(177), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(179), 1,
      sym_key_string_text,
    ACTIONS(181), 1,
      sym_key_string_escaped_char,
    ACTIONS(195), 1,
      sym__bracketed_key_start,
    STATE(58), 1,
      aux_sym_basic_auth_section_repeat1,
    STATE(205), 1,
      sym__key_template,
    STATE(287), 1,
      aux_sym_key_string_content_repeat1,
    STATE(312), 1,
      sym_key_value,
    STATE(491), 1,
      sym_key_string,
    STATE(208), 2,
      sym__bracketed_key_content,
      sym_key_string_content,
    ACTIONS(435), 4,
      sym__json_array_start,
      sym__json_number,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(437), 47,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
      anon_sym_null,
      anon_sym_DQUOTE,
      anon_sym_LT,
      sym_xml_prolog_tag,
      sym_xml_comment,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE2,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LBRACE_LBRACE2,
      sym_comment,
  [448] = 12,
    ACTIONS(177), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(179), 1,
      sym_key_string_text,
    ACTIONS(181), 1,
      sym_key_string_escaped_char,
    ACTIONS(195), 1,
      sym__bracketed_key_start,
    STATE(57), 1,
      aux_sym_basic_auth_section_repeat1,
    STATE(205), 1,
      sym__key_template,
    STATE(287), 1,
      aux_sym_key_string_content_repeat1,
    STATE(312), 1,
      sym_key_value,
    STATE(491), 1,
      sym_key_string,
    STATE(208), 2,
      sym__bracketed_key_content,
      sym_key_string_content,
    ACTIONS(439), 4,
      sym__json_array_start,
      sym__json_number,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(441), 47,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
      anon_sym_null,
      anon_sym_DQUOTE,
      anon_sym_LT,
      sym_xml_prolog_tag,
      sym_xml_comment,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE2,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LBRACE_LBRACE2,
      sym_comment,
  [535] = 12,
    ACTIONS(177), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(179), 1,
      sym_key_string_text,
    ACTIONS(181), 1,
      sym_key_string_escaped_char,
    ACTIONS(195), 1,
      sym__bracketed_key_start,
    STATE(51), 1,
      aux_sym_basic_auth_section_repeat1,
    STATE(205), 1,
      sym__key_template,
    STATE(287), 1,
      aux_sym_key_string_content_repeat1,
    STATE(312), 1,
      sym_key_value,
    STATE(491), 1,
      sym_key_string,
    STATE(208), 2,
      sym__bracketed_key_content,
      sym_key_string_content,
    ACTIONS(443), 4,
      sym__json_array_start,
      sym__json_number,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(445), 47,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
      anon_sym_null,
      anon_sym_DQUOTE,
      anon_sym_LT,
      sym_xml_prolog_tag,
      sym_xml_comment,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE2,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LBRACE_LBRACE2,
      sym_comment,
  [622] = 12,
    ACTIONS(177), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(179), 1,
      sym_key_string_text,
    ACTIONS(181), 1,
      sym_key_string_escaped_char,
    ACTIONS(195), 1,
      sym__bracketed_key_start,
    STATE(57), 1,
      aux_sym_basic_auth_section_repeat1,
    STATE(205), 1,
      sym__key_template,
    STATE(287), 1,
      aux_sym_key_string_content_repeat1,
    STATE(312), 1,
      sym_key_value,
    STATE(491), 1,
      sym_key_string,
    STATE(208), 2,
      sym__bracketed_key_content,
      sym_key_string_content,
    ACTIONS(447), 4,
      sym__json_array_start,
      sym__json_number,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(449), 47,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
      anon_sym_null,
      anon_sym_DQUOTE,
      anon_sym_LT,
      sym_xml_prolog_tag,
      sym_xml_comment,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE2,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LBRACE_LBRACE2,
      sym_comment,
  [709] = 12,
    ACTIONS(177), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(179), 1,
      sym_key_string_text,
    ACTIONS(181), 1,
      sym_key_string_escaped_char,
    ACTIONS(195), 1,
      sym__bracketed_key_start,
    STATE(56), 1,
      aux_sym_basic_auth_section_repeat1,
    STATE(205), 1,
      sym__key_template,
    STATE(287), 1,
      aux_sym_key_string_content_repeat1,
    STATE(312), 1,
      sym_key_value,
    STATE(491), 1,
      sym_key_string,
    STATE(208), 2,
      sym__bracketed_key_content,
      sym_key_string_content,
    ACTIONS(451), 4,
      sym__json_array_start,
      sym__json_number,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(453), 47,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
      anon_sym_null,
      anon_sym_DQUOTE,
      anon_sym_LT,
      sym_xml_prolog_tag,
      sym_xml_comment,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE2,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LBRACE_LBRACE2,
      sym_comment,
  [796] = 12,
    ACTIONS(177), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(179), 1,
      sym_key_string_text,
    ACTIONS(181), 1,
      sym_key_string_escaped_char,
    ACTIONS(195), 1,
      sym__bracketed_key_start,
    STATE(53), 1,
      aux_sym_basic_auth_section_repeat1,
    STATE(205), 1,
      sym__key_template,
    STATE(287), 1,
      aux_sym_key_string_content_repeat1,
    STATE(312), 1,
      sym_key_value,
    STATE(491), 1,
      sym_key_string,
    STATE(208), 2,
      sym__bracketed_key_content,
      sym_key_string_content,
    ACTIONS(455), 4,
      sym__json_array_start,
      sym__json_number,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(457), 47,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
      anon_sym_null,
      anon_sym_DQUOTE,
      anon_sym_LT,
      sym_xml_prolog_tag,
      sym_xml_comment,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE2,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LBRACE_LBRACE2,
      sym_comment,
  [883] = 12,
    ACTIONS(177), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(179), 1,
      sym_key_string_text,
    ACTIONS(181), 1,
      sym_key_string_escaped_char,
    ACTIONS(195), 1,
      sym__bracketed_key_start,
    STATE(57), 1,
      aux_sym_basic_auth_section_repeat1,
    STATE(205), 1,
      sym__key_template,
    STATE(287), 1,
      aux_sym_key_string_content_repeat1,
    STATE(312), 1,
      sym_key_value,
    STATE(491), 1,
      sym_key_string,
    STATE(208), 2,
      sym__bracketed_key_content,
      sym_key_string_content,
    ACTIONS(459), 4,
      sym__json_array_start,
      sym__json_number,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(461), 47,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
      anon_sym_null,
      anon_sym_DQUOTE,
      anon_sym_LT,
      sym_xml_prolog_tag,
      sym_xml_comment,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE2,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LBRACE_LBRACE2,
      sym_comment,
  [970] = 12,
    ACTIONS(467), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(470), 1,
      sym_key_string_text,
    ACTIONS(473), 1,
      sym_key_string_escaped_char,
    ACTIONS(476), 1,
      sym__bracketed_key_start,
    STATE(57), 1,
      aux_sym_basic_auth_section_repeat1,
    STATE(205), 1,
      sym__key_template,
    STATE(287), 1,
      aux_sym_key_string_content_repeat1,
    STATE(312), 1,
      sym_key_value,
    STATE(491), 1,
      sym_key_string,
    STATE(208), 2,
      sym__bracketed_key_content,
      sym_key_string_content,
    ACTIONS(463), 4,
      sym__json_array_start,
      sym__json_number,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(465), 47,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
      anon_sym_null,
      anon_sym_DQUOTE,
      anon_sym_LT,
      sym_xml_prolog_tag,
      sym_xml_comment,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE2,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LBRACE_LBRACE2,
      sym_comment,
  [1057] = 12,
    ACTIONS(177), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(179), 1,
      sym_key_string_text,
    ACTIONS(181), 1,
      sym_key_string_escaped_char,
    ACTIONS(195), 1,
      sym__bracketed_key_start,
    STATE(57), 1,
      aux_sym_basic_auth_section_repeat1,
    STATE(205), 1,
      sym__key_template,
    STATE(287), 1,
      aux_sym_key_string_content_repeat1,
    STATE(312), 1,
      sym_key_value,
    STATE(491), 1,
      sym_key_string,
    STATE(208), 2,
      sym__bracketed_key_content,
      sym_key_string_content,
    ACTIONS(479), 4,
      sym__json_array_start,
      sym__json_number,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(481), 47,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
      anon_sym_null,
      anon_sym_DQUOTE,
      anon_sym_LT,
      sym_xml_prolog_tag,
      sym_xml_comment,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE2,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LBRACE_LBRACE2,
      sym_comment,
  [1144] = 28,
    ACTIONS(163), 1,
      anon_sym_file_COMMA,
    ACTIONS(165), 1,
      anon_sym_null,
    ACTIONS(167), 1,
      anon_sym_DQUOTE,
    ACTIONS(169), 1,
      anon_sym_LT,
    ACTIONS(173), 1,
      anon_sym_base64_COMMA,
    ACTIONS(175), 1,
      anon_sym_hex_COMMA,
    ACTIONS(183), 1,
      anon_sym_BQUOTE,
    ACTIONS(185), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(187), 1,
      anon_sym_LBRACE2,
    ACTIONS(191), 1,
      anon_sym_LBRACE_LBRACE2,
    ACTIONS(193), 1,
      sym__json_array_start,
    ACTIONS(197), 1,
      sym__json_number,
    ACTIONS(243), 1,
      anon_sym_LBRACKCaptures_RBRACK,
    ACTIONS(245), 1,
      anon_sym_LBRACKAsserts_RBRACK,
    STATE(151), 1,
      sym_body,
    STATE(159), 1,
      sym_xml_open_tag,
    STATE(222), 1,
      aux_sym_xml_repeat1,
    STATE(301), 1,
      sym_bytes,
    STATE(445), 1,
      sym_xml_self_closing_tag,
    STATE(446), 1,
      sym_xml_tag,
    ACTIONS(171), 2,
      sym_xml_prolog_tag,
      sym_xml_comment,
    ACTIONS(189), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(247), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(87), 2,
      sym_response_section,
      aux_sym_response_repeat1,
    STATE(90), 2,
      sym_captures_section,
      sym_asserts_section,
    STATE(458), 6,
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
    ACTIONS(249), 18,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
  [1262] = 28,
    ACTIONS(163), 1,
      anon_sym_file_COMMA,
    ACTIONS(165), 1,
      anon_sym_null,
    ACTIONS(167), 1,
      anon_sym_DQUOTE,
    ACTIONS(169), 1,
      anon_sym_LT,
    ACTIONS(173), 1,
      anon_sym_base64_COMMA,
    ACTIONS(175), 1,
      anon_sym_hex_COMMA,
    ACTIONS(183), 1,
      anon_sym_BQUOTE,
    ACTIONS(185), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(187), 1,
      anon_sym_LBRACE2,
    ACTIONS(191), 1,
      anon_sym_LBRACE_LBRACE2,
    ACTIONS(193), 1,
      sym__json_array_start,
    ACTIONS(197), 1,
      sym__json_number,
    ACTIONS(243), 1,
      anon_sym_LBRACKCaptures_RBRACK,
    ACTIONS(245), 1,
      anon_sym_LBRACKAsserts_RBRACK,
    STATE(143), 1,
      sym_body,
    STATE(159), 1,
      sym_xml_open_tag,
    STATE(222), 1,
      aux_sym_xml_repeat1,
    STATE(301), 1,
      sym_bytes,
    STATE(445), 1,
      sym_xml_self_closing_tag,
    STATE(446), 1,
      sym_xml_tag,
    ACTIONS(171), 2,
      sym_xml_prolog_tag,
      sym_xml_comment,
    ACTIONS(189), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(483), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(87), 2,
      sym_response_section,
      aux_sym_response_repeat1,
    STATE(90), 2,
      sym_captures_section,
      sym_asserts_section,
    STATE(458), 6,
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
    ACTIONS(485), 18,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
  [1380] = 10,
    ACTIONS(491), 1,
      anon_sym_LBRACKBasicAuth_RBRACK,
    ACTIONS(503), 1,
      anon_sym_LBRACKCookies_RBRACK,
    ACTIONS(506), 1,
      anon_sym_LBRACKOptions_RBRACK,
    ACTIONS(494), 2,
      anon_sym_LBRACKQuery_RBRACK,
      anon_sym_LBRACKQueryStringParams_RBRACK,
    ACTIONS(497), 2,
      anon_sym_LBRACKForm_RBRACK,
      anon_sym_LBRACKFormParams_RBRACK,
    ACTIONS(500), 2,
      anon_sym_LBRACKMultipart_RBRACK,
      anon_sym_LBRACKMultipartFormData_RBRACK,
    STATE(61), 2,
      sym_request_section,
      aux_sym_request_repeat2,
    ACTIONS(487), 4,
      sym__json_array_start,
      sym__json_number,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(71), 6,
      sym_basic_auth_section,
      sym_query_string_params_section,
      sym_form_params_section,
      sym_multipart_form_data_section,
      sym_cookies_section,
      sym_options_section,
    ACTIONS(489), 38,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
      anon_sym_file_COMMA,
      anon_sym_null,
      anon_sym_DQUOTE,
      anon_sym_LT,
      sym_xml_prolog_tag,
      sym_xml_comment,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE2,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LBRACE_LBRACE2,
      sym_comment,
  [1460] = 5,
    ACTIONS(509), 1,
      anon_sym_LF,
    ACTIONS(511), 1,
      sym_comment,
    STATE(63), 1,
      aux_sym__comment_or_new_line_repeat1,
    ACTIONS(85), 3,
      sym__json_array_start,
      sym__json_number,
      ts_builtin_sym_end,
    ACTIONS(89), 51,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
      anon_sym_header,
      anon_sym_variable,
      anon_sym_null,
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
      sym_xml_prolog_tag,
      sym_xml_comment,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE2,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LBRACE_LBRACE2,
  [1528] = 5,
    ACTIONS(513), 1,
      anon_sym_LF,
    ACTIONS(516), 1,
      sym_comment,
    STATE(63), 1,
      aux_sym__comment_or_new_line_repeat1,
    ACTIONS(75), 3,
      sym__json_array_start,
      sym__json_number,
      ts_builtin_sym_end,
    ACTIONS(80), 51,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
      anon_sym_header,
      anon_sym_variable,
      anon_sym_null,
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
      sym_xml_prolog_tag,
      sym_xml_comment,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE2,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LBRACE_LBRACE2,
  [1596] = 5,
    ACTIONS(519), 1,
      anon_sym_LF,
    ACTIONS(521), 1,
      sym_comment,
    STATE(65), 1,
      aux_sym__comment_or_new_line_repeat1,
    ACTIONS(85), 6,
      sym__json_array_start,
      sym__bracketed_key_start,
      sym__json_number,
      ts_builtin_sym_end,
      anon_sym_LBRACE_LBRACE,
      sym_key_string_escaped_char,
    ACTIONS(89), 47,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
      anon_sym_null,
      anon_sym_DQUOTE,
      anon_sym_LT,
      sym_xml_prolog_tag,
      sym_xml_comment,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      sym_key_string_text,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE2,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LBRACE_LBRACE2,
  [1663] = 5,
    ACTIONS(523), 1,
      anon_sym_LF,
    ACTIONS(526), 1,
      sym_comment,
    STATE(65), 1,
      aux_sym__comment_or_new_line_repeat1,
    ACTIONS(75), 6,
      sym__json_array_start,
      sym__bracketed_key_start,
      sym__json_number,
      ts_builtin_sym_end,
      anon_sym_LBRACE_LBRACE,
      sym_key_string_escaped_char,
    ACTIONS(80), 47,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
      anon_sym_null,
      anon_sym_DQUOTE,
      anon_sym_LT,
      sym_xml_prolog_tag,
      sym_xml_comment,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      sym_key_string_text,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE2,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LBRACE_LBRACE2,
  [1730] = 2,
    ACTIONS(529), 4,
      sym__json_array_start,
      sym__json_number,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(531), 52,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
      anon_sym_header,
      anon_sym_variable,
      anon_sym_null,
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
      sym_xml_prolog_tag,
      sym_xml_comment,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE2,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LBRACE_LBRACE2,
      sym_comment,
  [1791] = 2,
    ACTIONS(533), 4,
      sym__json_array_start,
      sym__json_number,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(535), 52,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
      anon_sym_header,
      anon_sym_variable,
      anon_sym_null,
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
      sym_xml_prolog_tag,
      sym_xml_comment,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE2,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LBRACE_LBRACE2,
      sym_comment,
  [1852] = 2,
    ACTIONS(537), 7,
      sym__json_array_start,
      sym__bracketed_key_start,
      sym__json_number,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
      sym_key_string_escaped_char,
    ACTIONS(539), 48,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
      anon_sym_null,
      anon_sym_DQUOTE,
      anon_sym_LT,
      sym_xml_prolog_tag,
      sym_xml_comment,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      sym_key_string_text,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE2,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LBRACE_LBRACE2,
      sym_comment,
  [1912] = 2,
    ACTIONS(463), 7,
      sym__json_array_start,
      sym__bracketed_key_start,
      sym__json_number,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
      sym_key_string_escaped_char,
    ACTIONS(465), 48,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
      anon_sym_null,
      anon_sym_DQUOTE,
      anon_sym_LT,
      sym_xml_prolog_tag,
      sym_xml_comment,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      sym_key_string_text,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE2,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LBRACE_LBRACE2,
      sym_comment,
  [1972] = 2,
    ACTIONS(395), 7,
      sym__json_array_start,
      sym__bracketed_key_start,
      sym__json_number,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
      sym_key_string_escaped_char,
    ACTIONS(397), 48,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
      anon_sym_null,
      anon_sym_DQUOTE,
      anon_sym_LT,
      sym_xml_prolog_tag,
      sym_xml_comment,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      sym_key_string_text,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE2,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LBRACE_LBRACE2,
      sym_comment,
  [2032] = 2,
    ACTIONS(541), 4,
      sym__json_array_start,
      sym__json_number,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(543), 47,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
      anon_sym_null,
      anon_sym_DQUOTE,
      anon_sym_LT,
      sym_xml_prolog_tag,
      sym_xml_comment,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE2,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LBRACE_LBRACE2,
      sym_comment,
  [2088] = 16,
    ACTIONS(545), 1,
      anon_sym_LF,
    ACTIONS(547), 1,
      anon_sym_redact,
    ACTIONS(551), 1,
      anon_sym_xpath,
    ACTIONS(555), 1,
      anon_sym_regex,
    ACTIONS(557), 1,
      anon_sym_nth,
    ACTIONS(559), 1,
      anon_sym_replace,
    ACTIONS(561), 1,
      anon_sym_replaceRegex,
    ACTIONS(563), 1,
      anon_sym_split,
    ACTIONS(565), 1,
      sym_comment,
    ACTIONS(567), 1,
      sym__eof,
    STATE(82), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(73), 2,
      sym_filter,
      aux_sym_capture_repeat1,
    STATE(84), 2,
      sym__comment_or_new_line,
      sym__line_ending,
    ACTIONS(553), 7,
      anon_sym_jsonpath,
      anon_sym_charsetDecode,
      anon_sym_dateFormat,
      anon_sym_urlQueryParam,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_toDate,
    STATE(110), 8,
      sym_simple_filter_key,
      sym_argument_filter,
      sym_regex_filter,
      sym_nth_filter,
      sym_replace_filter,
      sym_replace_regex_filter,
      sym_split_filter,
      sym_xpath_filter,
    ACTIONS(549), 20,
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
  [2171] = 16,
    ACTIONS(545), 1,
      anon_sym_LF,
    ACTIONS(551), 1,
      anon_sym_xpath,
    ACTIONS(555), 1,
      anon_sym_regex,
    ACTIONS(557), 1,
      anon_sym_nth,
    ACTIONS(559), 1,
      anon_sym_replace,
    ACTIONS(561), 1,
      anon_sym_replaceRegex,
    ACTIONS(563), 1,
      anon_sym_split,
    ACTIONS(565), 1,
      sym_comment,
    ACTIONS(569), 1,
      anon_sym_redact,
    ACTIONS(571), 1,
      sym__eof,
    STATE(82), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(78), 2,
      sym_filter,
      aux_sym_capture_repeat1,
    STATE(86), 2,
      sym__comment_or_new_line,
      sym__line_ending,
    ACTIONS(553), 7,
      anon_sym_jsonpath,
      anon_sym_charsetDecode,
      anon_sym_dateFormat,
      anon_sym_urlQueryParam,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_toDate,
    STATE(110), 8,
      sym_simple_filter_key,
      sym_argument_filter,
      sym_regex_filter,
      sym_nth_filter,
      sym_replace_filter,
      sym_replace_regex_filter,
      sym_split_filter,
      sym_xpath_filter,
    ACTIONS(549), 20,
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
  [2254] = 12,
    ACTIONS(423), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(426), 1,
      sym_key_string_text,
    ACTIONS(429), 1,
      sym_key_string_escaped_char,
    ACTIONS(432), 1,
      sym__bracketed_key_start,
    STATE(205), 1,
      sym__key_template,
    STATE(247), 1,
      sym_key_value,
    STATE(287), 1,
      aux_sym_key_string_content_repeat1,
    STATE(491), 1,
      sym_key_string,
    STATE(74), 2,
      sym_header,
      aux_sym_request_repeat1,
    STATE(208), 2,
      sym__bracketed_key_content,
      sym_key_string_content,
    ACTIONS(419), 4,
      sym__json_array_start,
      sym__json_number,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(421), 34,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
      anon_sym_null,
      anon_sym_DQUOTE,
      anon_sym_LT,
      sym_xml_prolog_tag,
      sym_xml_comment,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE2,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LBRACE_LBRACE2,
      sym_comment,
  [2329] = 11,
    ACTIONS(177), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(179), 1,
      sym_key_string_text,
    ACTIONS(181), 1,
      sym_key_string_escaped_char,
    ACTIONS(195), 1,
      sym__bracketed_key_start,
    STATE(205), 1,
      sym__key_template,
    STATE(287), 1,
      aux_sym_key_string_content_repeat1,
    STATE(483), 1,
      sym_key_string,
    STATE(77), 2,
      sym_capture,
      aux_sym_captures_section_repeat1,
    STATE(208), 2,
      sym__bracketed_key_content,
      sym_key_string_content,
    ACTIONS(573), 4,
      sym__json_array_start,
      sym__json_number,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(575), 34,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
      anon_sym_null,
      anon_sym_DQUOTE,
      anon_sym_LT,
      sym_xml_prolog_tag,
      sym_xml_comment,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE2,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LBRACE_LBRACE2,
      sym_comment,
  [2401] = 11,
    ACTIONS(177), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(179), 1,
      sym_key_string_text,
    ACTIONS(181), 1,
      sym_key_string_escaped_char,
    ACTIONS(195), 1,
      sym__bracketed_key_start,
    STATE(205), 1,
      sym__key_template,
    STATE(287), 1,
      aux_sym_key_string_content_repeat1,
    STATE(483), 1,
      sym_key_string,
    STATE(75), 2,
      sym_capture,
      aux_sym_captures_section_repeat1,
    STATE(208), 2,
      sym__bracketed_key_content,
      sym_key_string_content,
    ACTIONS(577), 4,
      sym__json_array_start,
      sym__json_number,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(579), 34,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
      anon_sym_null,
      anon_sym_DQUOTE,
      anon_sym_LT,
      sym_xml_prolog_tag,
      sym_xml_comment,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE2,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LBRACE_LBRACE2,
      sym_comment,
  [2473] = 11,
    ACTIONS(585), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(588), 1,
      sym_key_string_text,
    ACTIONS(591), 1,
      sym_key_string_escaped_char,
    ACTIONS(594), 1,
      sym__bracketed_key_start,
    STATE(205), 1,
      sym__key_template,
    STATE(287), 1,
      aux_sym_key_string_content_repeat1,
    STATE(483), 1,
      sym_key_string,
    STATE(77), 2,
      sym_capture,
      aux_sym_captures_section_repeat1,
    STATE(208), 2,
      sym__bracketed_key_content,
      sym_key_string_content,
    ACTIONS(581), 4,
      sym__json_array_start,
      sym__json_number,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(583), 34,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
      anon_sym_null,
      anon_sym_DQUOTE,
      anon_sym_LT,
      sym_xml_prolog_tag,
      sym_xml_comment,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE2,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LBRACE_LBRACE2,
      sym_comment,
  [2545] = 12,
    ACTIONS(600), 1,
      anon_sym_xpath,
    ACTIONS(606), 1,
      anon_sym_regex,
    ACTIONS(609), 1,
      anon_sym_nth,
    ACTIONS(612), 1,
      anon_sym_replace,
    ACTIONS(615), 1,
      anon_sym_replaceRegex,
    ACTIONS(618), 1,
      anon_sym_split,
    ACTIONS(223), 2,
      anon_sym_redact,
      sym_comment,
    ACTIONS(225), 2,
      sym__eof,
      anon_sym_LF,
    STATE(78), 2,
      sym_filter,
      aux_sym_capture_repeat1,
    ACTIONS(603), 7,
      anon_sym_jsonpath,
      anon_sym_charsetDecode,
      anon_sym_dateFormat,
      anon_sym_urlQueryParam,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_toDate,
    STATE(110), 8,
      sym_simple_filter_key,
      sym_argument_filter,
      sym_regex_filter,
      sym_nth_filter,
      sym_replace_filter,
      sym_replace_regex_filter,
      sym_split_filter,
      sym_xpath_filter,
    ACTIONS(597), 20,
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
  [2617] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 1,
      anon_sym_equals,
    ACTIONS(107), 1,
      anon_sym_EQ_EQ,
    ACTIONS(109), 1,
      anon_sym_notEquals,
    ACTIONS(111), 1,
      anon_sym_BANG_EQ,
    ACTIONS(113), 1,
      anon_sym_greaterThan,
    ACTIONS(115), 1,
      anon_sym_GT,
    ACTIONS(117), 1,
      anon_sym_greaterThanOrEquals,
    ACTIONS(119), 1,
      anon_sym_GT_EQ,
    ACTIONS(121), 1,
      anon_sym_lessThan,
    ACTIONS(123), 1,
      anon_sym_LT,
    ACTIONS(125), 1,
      anon_sym_lessThanOrEquals,
    ACTIONS(127), 1,
      anon_sym_LT_EQ,
    ACTIONS(129), 1,
      anon_sym_startsWith,
    ACTIONS(131), 1,
      anon_sym_endsWith,
    ACTIONS(133), 1,
      anon_sym_contains,
    ACTIONS(135), 1,
      anon_sym_matches,
    ACTIONS(137), 1,
      anon_sym_includes,
    STATE(377), 1,
      sym_predicate_func,
    STATE(452), 12,
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
    ACTIONS(103), 15,
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
  [2706] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 1,
      anon_sym_xpath,
    ACTIONS(99), 1,
      anon_sym_regex,
    ACTIONS(139), 1,
      anon_sym_nth,
    ACTIONS(141), 1,
      anon_sym_replace,
    ACTIONS(143), 1,
      anon_sym_replaceRegex,
    ACTIONS(145), 1,
      anon_sym_split,
    ACTIONS(621), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(17), 2,
      sym_filter,
      aux_sym_capture_repeat1,
    ACTIONS(97), 7,
      anon_sym_jsonpath,
      anon_sym_charsetDecode,
      anon_sym_dateFormat,
      anon_sym_urlQueryParam,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_toDate,
    STATE(32), 8,
      sym_simple_filter_key,
      sym_argument_filter,
      sym_regex_filter,
      sym_nth_filter,
      sym_replace_filter,
      sym_replace_regex_filter,
      sym_split_filter,
      sym_xpath_filter,
    ACTIONS(93), 20,
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
  [2776] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 1,
      anon_sym_xpath,
    ACTIONS(99), 1,
      anon_sym_regex,
    ACTIONS(139), 1,
      anon_sym_nth,
    ACTIONS(141), 1,
      anon_sym_replace,
    ACTIONS(143), 1,
      anon_sym_replaceRegex,
    ACTIONS(145), 1,
      anon_sym_split,
    ACTIONS(623), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(80), 2,
      sym_filter,
      aux_sym_capture_repeat1,
    ACTIONS(97), 7,
      anon_sym_jsonpath,
      anon_sym_charsetDecode,
      anon_sym_dateFormat,
      anon_sym_urlQueryParam,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_toDate,
    STATE(32), 8,
      sym_simple_filter_key,
      sym_argument_filter,
      sym_regex_filter,
      sym_nth_filter,
      sym_replace_filter,
      sym_replace_regex_filter,
      sym_split_filter,
      sym_xpath_filter,
    ACTIONS(93), 20,
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
  [2846] = 5,
    ACTIONS(625), 1,
      anon_sym_LF,
    ACTIONS(627), 1,
      sym_comment,
    STATE(83), 1,
      aux_sym__comment_or_new_line_repeat1,
    ACTIONS(85), 6,
      sym__json_array_start,
      sym__bracketed_key_start,
      sym__json_number,
      ts_builtin_sym_end,
      anon_sym_LBRACE_LBRACE,
      sym_key_string_escaped_char,
    ACTIONS(89), 34,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
      anon_sym_null,
      anon_sym_DQUOTE,
      anon_sym_LT,
      sym_xml_prolog_tag,
      sym_xml_comment,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      sym_key_string_text,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE2,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LBRACE_LBRACE2,
  [2900] = 5,
    ACTIONS(629), 1,
      anon_sym_LF,
    ACTIONS(632), 1,
      sym_comment,
    STATE(83), 1,
      aux_sym__comment_or_new_line_repeat1,
    ACTIONS(75), 6,
      sym__json_array_start,
      sym__bracketed_key_start,
      sym__json_number,
      ts_builtin_sym_end,
      anon_sym_LBRACE_LBRACE,
      sym_key_string_escaped_char,
    ACTIONS(80), 34,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
      anon_sym_null,
      anon_sym_DQUOTE,
      anon_sym_LT,
      sym_xml_prolog_tag,
      sym_xml_comment,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      sym_key_string_text,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE2,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LBRACE_LBRACE2,
  [2954] = 2,
    ACTIONS(635), 7,
      sym__json_array_start,
      sym__bracketed_key_start,
      sym__json_number,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
      sym_key_string_escaped_char,
    ACTIONS(637), 35,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
      anon_sym_null,
      anon_sym_DQUOTE,
      anon_sym_LT,
      sym_xml_prolog_tag,
      sym_xml_comment,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      sym_key_string_text,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE2,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LBRACE_LBRACE2,
      sym_comment,
  [3001] = 2,
    ACTIONS(639), 7,
      sym__json_array_start,
      sym__bracketed_key_start,
      sym__json_number,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
      sym_key_string_escaped_char,
    ACTIONS(641), 35,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
      anon_sym_null,
      anon_sym_DQUOTE,
      anon_sym_LT,
      sym_xml_prolog_tag,
      sym_xml_comment,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      sym_key_string_text,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE2,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LBRACE_LBRACE2,
      sym_comment,
  [3048] = 2,
    ACTIONS(643), 7,
      sym__json_array_start,
      sym__bracketed_key_start,
      sym__json_number,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
      sym_key_string_escaped_char,
    ACTIONS(645), 35,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
      anon_sym_null,
      anon_sym_DQUOTE,
      anon_sym_LT,
      sym_xml_prolog_tag,
      sym_xml_comment,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      sym_key_string_text,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE2,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LBRACE_LBRACE2,
      sym_comment,
  [3095] = 6,
    ACTIONS(651), 1,
      anon_sym_LBRACKCaptures_RBRACK,
    ACTIONS(654), 1,
      anon_sym_LBRACKAsserts_RBRACK,
    STATE(87), 2,
      sym_response_section,
      aux_sym_response_repeat1,
    STATE(90), 2,
      sym_captures_section,
      sym_asserts_section,
    ACTIONS(647), 4,
      sym__json_array_start,
      sym__json_number,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(649), 32,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
      anon_sym_file_COMMA,
      anon_sym_null,
      anon_sym_DQUOTE,
      anon_sym_LT,
      sym_xml_prolog_tag,
      sym_xml_comment,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE2,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LBRACE_LBRACE2,
      sym_comment,
  [3150] = 2,
    ACTIONS(657), 7,
      sym__json_array_start,
      sym__bracketed_key_start,
      sym__json_number,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
      sym_key_string_escaped_char,
    ACTIONS(659), 35,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
      anon_sym_null,
      anon_sym_DQUOTE,
      anon_sym_LT,
      sym_xml_prolog_tag,
      sym_xml_comment,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      sym_key_string_text,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE2,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LBRACE_LBRACE2,
      sym_comment,
  [3197] = 2,
    ACTIONS(537), 7,
      sym__json_array_start,
      sym__bracketed_key_start,
      sym__json_number,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
      sym_key_string_escaped_char,
    ACTIONS(539), 35,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
      anon_sym_null,
      anon_sym_DQUOTE,
      anon_sym_LT,
      sym_xml_prolog_tag,
      sym_xml_comment,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      sym_key_string_text,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE2,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LBRACE_LBRACE2,
      sym_comment,
  [3244] = 2,
    ACTIONS(661), 4,
      sym__json_array_start,
      sym__json_number,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(663), 34,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
      anon_sym_null,
      anon_sym_DQUOTE,
      anon_sym_LT,
      sym_xml_prolog_tag,
      sym_xml_comment,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE2,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LBRACE_LBRACE2,
      sym_comment,
  [3287] = 2,
    ACTIONS(295), 2,
      sym__eof,
      anon_sym_LF,
    ACTIONS(297), 35,
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
  [3329] = 2,
    ACTIONS(263), 2,
      sym__eof,
      anon_sym_LF,
    ACTIONS(265), 35,
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
  [3371] = 2,
    ACTIONS(351), 2,
      sym__eof,
      anon_sym_LF,
    ACTIONS(353), 35,
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
  [3413] = 2,
    ACTIONS(271), 2,
      sym__eof,
      anon_sym_LF,
    ACTIONS(273), 35,
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
  [3455] = 2,
    ACTIONS(303), 2,
      sym__eof,
      anon_sym_LF,
    ACTIONS(305), 35,
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
  [3497] = 2,
    ACTIONS(259), 2,
      sym__eof,
      anon_sym_LF,
    ACTIONS(261), 35,
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
  [3539] = 2,
    ACTIONS(255), 2,
      sym__eof,
      anon_sym_LF,
    ACTIONS(257), 35,
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
  [3581] = 2,
    ACTIONS(387), 2,
      sym__eof,
      anon_sym_LF,
    ACTIONS(389), 35,
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
  [3623] = 2,
    ACTIONS(311), 2,
      sym__eof,
      anon_sym_LF,
    ACTIONS(313), 35,
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
  [3665] = 2,
    ACTIONS(335), 2,
      sym__eof,
      anon_sym_LF,
    ACTIONS(337), 35,
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
  [3707] = 2,
    ACTIONS(283), 2,
      sym__eof,
      anon_sym_LF,
    ACTIONS(285), 35,
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
  [3749] = 2,
    ACTIONS(279), 2,
      sym__eof,
      anon_sym_LF,
    ACTIONS(281), 35,
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
  [3791] = 2,
    ACTIONS(275), 2,
      sym__eof,
      anon_sym_LF,
    ACTIONS(277), 35,
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
  [3833] = 2,
    ACTIONS(391), 2,
      sym__eof,
      anon_sym_LF,
    ACTIONS(393), 35,
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
  [3875] = 2,
    ACTIONS(291), 2,
      sym__eof,
      anon_sym_LF,
    ACTIONS(293), 35,
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
  [3917] = 2,
    ACTIONS(287), 2,
      sym__eof,
      anon_sym_LF,
    ACTIONS(289), 35,
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
  [3959] = 2,
    ACTIONS(347), 2,
      sym__eof,
      anon_sym_LF,
    ACTIONS(349), 35,
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
  [4001] = 2,
    ACTIONS(267), 2,
      sym__eof,
      anon_sym_LF,
    ACTIONS(269), 35,
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
  [4043] = 2,
    ACTIONS(339), 2,
      sym__eof,
      anon_sym_LF,
    ACTIONS(341), 35,
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
  [4085] = 2,
    ACTIONS(299), 2,
      sym__eof,
      anon_sym_LF,
    ACTIONS(301), 35,
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
  [4127] = 2,
    ACTIONS(251), 2,
      sym__eof,
      anon_sym_LF,
    ACTIONS(253), 35,
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
  [4169] = 2,
    ACTIONS(383), 2,
      sym__eof,
      anon_sym_LF,
    ACTIONS(385), 35,
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
  [4211] = 2,
    ACTIONS(307), 2,
      sym__eof,
      anon_sym_LF,
    ACTIONS(309), 35,
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
  [4253] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(667), 1,
      anon_sym_replace,
    ACTIONS(665), 33,
      anon_sym_location,
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
  [4295] = 9,
    ACTIONS(7), 1,
      anon_sym_LF,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(669), 1,
      ts_builtin_sym_end,
    STATE(139), 1,
      sym_response,
    STATE(142), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(147), 1,
      sym__comment_or_new_line,
    STATE(353), 1,
      sym_version,
    ACTIONS(673), 6,
      anon_sym_HTTP_SLASH1_DOT0,
      anon_sym_HTTP_SLASH1_DOT1,
      anon_sym_HTTP_SLASH2,
      anon_sym_HTTP_SLASH3,
      anon_sym_HTTP_SLASH_STAR,
      anon_sym_HTTP,
    ACTIONS(671), 17,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
  [4344] = 9,
    ACTIONS(7), 1,
      anon_sym_LF,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(675), 1,
      ts_builtin_sym_end,
    STATE(137), 1,
      sym_response,
    STATE(142), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(149), 1,
      sym__comment_or_new_line,
    STATE(353), 1,
      sym_version,
    ACTIONS(673), 6,
      anon_sym_HTTP_SLASH1_DOT0,
      anon_sym_HTTP_SLASH1_DOT1,
      anon_sym_HTTP_SLASH2,
      anon_sym_HTTP_SLASH3,
      anon_sym_HTTP_SLASH_STAR,
      anon_sym_HTTP,
    ACTIONS(677), 17,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
  [4393] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(679), 1,
      anon_sym_header,
    ACTIONS(681), 1,
      anon_sym_variable,
    ACTIONS(685), 1,
      anon_sym_cookie,
    ACTIONS(687), 1,
      anon_sym_xpath,
    ACTIONS(689), 1,
      anon_sym_jsonpath,
    ACTIONS(691), 1,
      anon_sym_regex,
    ACTIONS(693), 1,
      anon_sym_certificate,
    STATE(72), 1,
      sym_query,
    STATE(109), 8,
      sym_simple_query,
      sym_header_query,
      sym_cookie_query,
      sym_xpath_query,
      sym_jsonpath_query,
      sym_regex_query,
      sym_variable_query,
      sym_certificate_query,
    ACTIONS(683), 11,
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
  [4444] = 5,
    ACTIONS(85), 1,
      ts_builtin_sym_end,
    ACTIONS(695), 1,
      anon_sym_LF,
    ACTIONS(697), 1,
      sym_comment,
    STATE(119), 1,
      aux_sym__comment_or_new_line_repeat1,
    ACTIONS(89), 23,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
  [4482] = 5,
    ACTIONS(75), 1,
      ts_builtin_sym_end,
    ACTIONS(699), 1,
      anon_sym_LF,
    ACTIONS(702), 1,
      sym_comment,
    STATE(119), 1,
      aux_sym__comment_or_new_line_repeat1,
    ACTIONS(80), 23,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
  [4520] = 9,
    ACTIONS(705), 1,
      ts_builtin_sym_end,
    ACTIONS(707), 1,
      anon_sym_LF,
    ACTIONS(713), 1,
      sym_comment,
    STATE(115), 1,
      sym_request,
    STATE(144), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(154), 1,
      sym_method,
    STATE(120), 2,
      sym_entry,
      aux_sym_hurl_file_repeat1,
    STATE(133), 2,
      sym__comment_or_new_line,
      aux_sym_hurl_file_repeat2,
    ACTIONS(710), 17,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
  [4566] = 9,
    ACTIONS(7), 1,
      anon_sym_LF,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(716), 1,
      ts_builtin_sym_end,
    STATE(115), 1,
      sym_request,
    STATE(142), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(154), 1,
      sym_method,
    STATE(120), 2,
      sym_entry,
      aux_sym_hurl_file_repeat1,
    STATE(128), 2,
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
  [4612] = 2,
    ACTIONS(203), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(205), 24,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
  [4643] = 2,
    ACTIONS(718), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(720), 24,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
  [4674] = 2,
    ACTIONS(207), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(209), 24,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
  [4705] = 2,
    ACTIONS(722), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(724), 24,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
  [4736] = 2,
    ACTIONS(147), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(149), 24,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
  [4767] = 8,
    ACTIONS(7), 1,
      anon_sym_LF,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(716), 1,
      ts_builtin_sym_end,
    STATE(116), 1,
      sym_request,
    STATE(142), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(154), 1,
      sym_method,
    STATE(136), 2,
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
  [4809] = 8,
    ACTIONS(7), 1,
      anon_sym_LF,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(726), 1,
      ts_builtin_sym_end,
    STATE(116), 1,
      sym_request,
    STATE(142), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(154), 1,
      sym_method,
    STATE(136), 2,
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
  [4851] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 1,
      anon_sym_BQUOTE,
    ACTIONS(728), 1,
      anon_sym_file_COMMA,
    ACTIONS(732), 1,
      anon_sym_DQUOTE,
    ACTIONS(734), 1,
      anon_sym_base64_COMMA,
    ACTIONS(736), 1,
      anon_sym_hex_COMMA,
    ACTIONS(738), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(742), 1,
      anon_sym_LBRACE_LBRACE2,
    ACTIONS(744), 1,
      sym_integer,
    ACTIONS(746), 1,
      anon_sym_SLASH,
    STATE(395), 1,
      sym_predicate_value,
    ACTIONS(730), 2,
      anon_sym_null,
      sym_float,
    ACTIONS(740), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(378), 9,
      sym_oneline_base64,
      sym_oneline_file,
      sym_oneline_hex,
      sym_quoted_string,
      sym_oneline_string,
      sym_multiline_string,
      sym_template,
      sym_boolean,
      sym_regex,
  [4904] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 1,
      anon_sym_BQUOTE,
    ACTIONS(728), 1,
      anon_sym_file_COMMA,
    ACTIONS(732), 1,
      anon_sym_DQUOTE,
    ACTIONS(734), 1,
      anon_sym_base64_COMMA,
    ACTIONS(736), 1,
      anon_sym_hex_COMMA,
    ACTIONS(738), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(742), 1,
      anon_sym_LBRACE_LBRACE2,
    ACTIONS(744), 1,
      sym_integer,
    ACTIONS(746), 1,
      anon_sym_SLASH,
    STATE(379), 1,
      sym_predicate_value,
    ACTIONS(730), 2,
      anon_sym_null,
      sym_float,
    ACTIONS(740), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(378), 9,
      sym_oneline_base64,
      sym_oneline_file,
      sym_oneline_hex,
      sym_quoted_string,
      sym_oneline_string,
      sym_multiline_string,
      sym_template,
      sym_boolean,
      sym_regex,
  [4957] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 1,
      anon_sym_BQUOTE,
    ACTIONS(728), 1,
      anon_sym_file_COMMA,
    ACTIONS(732), 1,
      anon_sym_DQUOTE,
    ACTIONS(734), 1,
      anon_sym_base64_COMMA,
    ACTIONS(736), 1,
      anon_sym_hex_COMMA,
    ACTIONS(738), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(742), 1,
      anon_sym_LBRACE_LBRACE2,
    ACTIONS(744), 1,
      sym_integer,
    ACTIONS(746), 1,
      anon_sym_SLASH,
    STATE(380), 1,
      sym_predicate_value,
    ACTIONS(730), 2,
      anon_sym_null,
      sym_float,
    ACTIONS(740), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(378), 9,
      sym_oneline_base64,
      sym_oneline_file,
      sym_oneline_hex,
      sym_quoted_string,
      sym_oneline_string,
      sym_multiline_string,
      sym_template,
      sym_boolean,
      sym_regex,
  [5010] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 1,
      anon_sym_BQUOTE,
    ACTIONS(728), 1,
      anon_sym_file_COMMA,
    ACTIONS(732), 1,
      anon_sym_DQUOTE,
    ACTIONS(734), 1,
      anon_sym_base64_COMMA,
    ACTIONS(736), 1,
      anon_sym_hex_COMMA,
    ACTIONS(738), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(742), 1,
      anon_sym_LBRACE_LBRACE2,
    ACTIONS(744), 1,
      sym_integer,
    ACTIONS(746), 1,
      anon_sym_SLASH,
    STATE(381), 1,
      sym_predicate_value,
    ACTIONS(730), 2,
      anon_sym_null,
      sym_float,
    ACTIONS(740), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(378), 9,
      sym_oneline_base64,
      sym_oneline_file,
      sym_oneline_hex,
      sym_quoted_string,
      sym_oneline_string,
      sym_multiline_string,
      sym_template,
      sym_boolean,
      sym_regex,
  [5063] = 7,
    ACTIONS(748), 1,
      anon_sym_LF,
    ACTIONS(750), 1,
      sym_comment,
    STATE(116), 1,
      sym_request,
    STATE(144), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(154), 1,
      sym_method,
    STATE(138), 2,
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
  [5102] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 1,
      anon_sym_BQUOTE,
    ACTIONS(728), 1,
      anon_sym_file_COMMA,
    ACTIONS(732), 1,
      anon_sym_DQUOTE,
    ACTIONS(734), 1,
      anon_sym_base64_COMMA,
    ACTIONS(736), 1,
      anon_sym_hex_COMMA,
    ACTIONS(738), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(742), 1,
      anon_sym_LBRACE_LBRACE2,
    ACTIONS(744), 1,
      sym_integer,
    ACTIONS(746), 1,
      anon_sym_SLASH,
    STATE(382), 1,
      sym_predicate_value,
    ACTIONS(730), 2,
      anon_sym_null,
      sym_float,
    ACTIONS(740), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(378), 9,
      sym_oneline_base64,
      sym_oneline_file,
      sym_oneline_hex,
      sym_quoted_string,
      sym_oneline_string,
      sym_multiline_string,
      sym_template,
      sym_boolean,
      sym_regex,
  [5155] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 1,
      anon_sym_BQUOTE,
    ACTIONS(728), 1,
      anon_sym_file_COMMA,
    ACTIONS(732), 1,
      anon_sym_DQUOTE,
    ACTIONS(734), 1,
      anon_sym_base64_COMMA,
    ACTIONS(736), 1,
      anon_sym_hex_COMMA,
    ACTIONS(738), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(742), 1,
      anon_sym_LBRACE_LBRACE2,
    ACTIONS(744), 1,
      sym_integer,
    ACTIONS(746), 1,
      anon_sym_SLASH,
    STATE(393), 1,
      sym_predicate_value,
    ACTIONS(730), 2,
      anon_sym_null,
      sym_float,
    ACTIONS(740), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(378), 9,
      sym_oneline_base64,
      sym_oneline_file,
      sym_oneline_hex,
      sym_quoted_string,
      sym_oneline_string,
      sym_multiline_string,
      sym_template,
      sym_boolean,
      sym_regex,
  [5208] = 6,
    ACTIONS(752), 1,
      ts_builtin_sym_end,
    ACTIONS(754), 1,
      anon_sym_LF,
    ACTIONS(759), 1,
      sym_comment,
    STATE(142), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(136), 2,
      sym__comment_or_new_line,
      aux_sym_hurl_file_repeat2,
    ACTIONS(757), 17,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
  [5244] = 6,
    ACTIONS(7), 1,
      anon_sym_LF,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(762), 1,
      ts_builtin_sym_end,
    STATE(142), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(146), 1,
      sym__comment_or_new_line,
    ACTIONS(764), 17,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
  [5279] = 5,
    ACTIONS(766), 1,
      anon_sym_LF,
    ACTIONS(769), 1,
      sym_comment,
    STATE(144), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(138), 2,
      sym__comment_or_new_line,
      aux_sym_hurl_file_repeat2,
    ACTIONS(757), 17,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
  [5312] = 6,
    ACTIONS(7), 1,
      anon_sym_LF,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(675), 1,
      ts_builtin_sym_end,
    STATE(142), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(149), 1,
      sym__comment_or_new_line,
    ACTIONS(677), 17,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
  [5347] = 13,
    ACTIONS(776), 1,
      anon_sym_DQUOTE,
    ACTIONS(778), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(780), 1,
      sym_value_string_escaped_char,
    ACTIONS(784), 1,
      anon_sym_LBRACE_LBRACE2,
    ACTIONS(786), 1,
      sym__eof,
    STATE(246), 1,
      aux_sym_value_string_text_repeat1,
    STATE(401), 1,
      sym_variable_value,
    ACTIONS(772), 2,
      anon_sym_LF,
      sym_comment,
    ACTIONS(782), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(213), 2,
      sym_value_string_text,
      aux_sym_value_string_content_repeat1,
    ACTIONS(774), 3,
      anon_sym_null,
      sym_integer,
      sym_float,
    STATE(166), 3,
      sym_value_string_content,
      sym_template,
      aux_sym_value_string_repeat1,
    STATE(400), 3,
      sym_quoted_string,
      sym_value_string,
      sym_boolean,
  [5396] = 5,
    ACTIONS(75), 1,
      ts_builtin_sym_end,
    ACTIONS(788), 1,
      anon_sym_LF,
    ACTIONS(791), 1,
      sym_comment,
    STATE(141), 1,
      aux_sym__comment_or_new_line_repeat1,
    ACTIONS(80), 17,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
  [5428] = 5,
    ACTIONS(85), 1,
      ts_builtin_sym_end,
    ACTIONS(794), 1,
      anon_sym_LF,
    ACTIONS(796), 1,
      sym_comment,
    STATE(141), 1,
      aux_sym__comment_or_new_line_repeat1,
    ACTIONS(89), 17,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
  [5460] = 2,
    ACTIONS(798), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(800), 18,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
  [5485] = 4,
    ACTIONS(802), 1,
      anon_sym_LF,
    ACTIONS(804), 1,
      sym_comment,
    STATE(150), 1,
      aux_sym__comment_or_new_line_repeat1,
    ACTIONS(89), 17,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
  [5514] = 2,
    ACTIONS(722), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(724), 18,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
  [5539] = 2,
    ACTIONS(806), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(808), 18,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
  [5564] = 2,
    ACTIONS(675), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(677), 18,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
  [5589] = 2,
    ACTIONS(247), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(249), 18,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
  [5614] = 2,
    ACTIONS(762), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(764), 18,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
  [5639] = 4,
    ACTIONS(810), 1,
      anon_sym_LF,
    ACTIONS(813), 1,
      sym_comment,
    STATE(150), 1,
      aux_sym__comment_or_new_line_repeat1,
    ACTIONS(80), 17,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
  [5668] = 2,
    ACTIONS(483), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(485), 18,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
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
  [5693] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(816), 1,
      anon_sym_null,
    ACTIONS(818), 1,
      anon_sym_DQUOTE,
    ACTIONS(820), 1,
      anon_sym_LBRACE2,
    ACTIONS(822), 1,
      anon_sym_RBRACK,
    ACTIONS(826), 1,
      anon_sym_LBRACE_LBRACE2,
    ACTIONS(828), 1,
      sym__json_array_start,
    ACTIONS(830), 1,
      sym__json_number,
    STATE(368), 1,
      sym_json_value,
    ACTIONS(824), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(371), 6,
      sym_json_object,
      sym_json_array,
      sym_json_string,
      sym_json_number,
      sym_json_boolean,
      sym_template,
  [5733] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(816), 1,
      anon_sym_null,
    ACTIONS(818), 1,
      anon_sym_DQUOTE,
    ACTIONS(820), 1,
      anon_sym_LBRACE2,
    ACTIONS(826), 1,
      anon_sym_LBRACE_LBRACE2,
    ACTIONS(828), 1,
      sym__json_array_start,
    ACTIONS(830), 1,
      sym__json_number,
    ACTIONS(832), 1,
      anon_sym_RBRACK,
    STATE(356), 1,
      sym_json_value,
    ACTIONS(824), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(371), 6,
      sym_json_object,
      sym_json_array,
      sym_json_string,
      sym_json_number,
      sym_json_boolean,
      sym_template,
  [5773] = 11,
    ACTIONS(778), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(780), 1,
      sym_value_string_escaped_char,
    ACTIONS(784), 1,
      anon_sym_LBRACE_LBRACE2,
    ACTIONS(836), 1,
      sym__eof,
    STATE(64), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(246), 1,
      aux_sym_value_string_text_repeat1,
    STATE(268), 1,
      sym_value_string,
    ACTIONS(834), 2,
      anon_sym_LF,
      sym_comment,
    STATE(11), 2,
      sym__comment_or_new_line,
      sym__line_ending,
    STATE(213), 2,
      sym_value_string_text,
      aux_sym_value_string_content_repeat1,
    STATE(166), 3,
      sym_value_string_content,
      sym_template,
      aux_sym_value_string_repeat1,
  [5812] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(816), 1,
      anon_sym_null,
    ACTIONS(818), 1,
      anon_sym_DQUOTE,
    ACTIONS(820), 1,
      anon_sym_LBRACE2,
    ACTIONS(826), 1,
      anon_sym_LBRACE_LBRACE2,
    ACTIONS(828), 1,
      sym__json_array_start,
    ACTIONS(830), 1,
      sym__json_number,
    STATE(422), 1,
      sym_json_value,
    ACTIONS(824), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(371), 6,
      sym_json_object,
      sym_json_array,
      sym_json_string,
      sym_json_number,
      sym_json_boolean,
      sym_template,
  [5849] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(816), 1,
      anon_sym_null,
    ACTIONS(818), 1,
      anon_sym_DQUOTE,
    ACTIONS(820), 1,
      anon_sym_LBRACE2,
    ACTIONS(828), 1,
      sym__json_array_start,
    ACTIONS(830), 1,
      sym__json_number,
    ACTIONS(838), 1,
      anon_sym_LBRACE_LBRACE2,
    STATE(376), 1,
      sym_json_value,
    ACTIONS(824), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(371), 6,
      sym_json_object,
      sym_json_array,
      sym_json_string,
      sym_json_number,
      sym_json_boolean,
      sym_template,
  [5886] = 11,
    ACTIONS(778), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(780), 1,
      sym_value_string_escaped_char,
    ACTIONS(784), 1,
      anon_sym_LBRACE_LBRACE2,
    ACTIONS(842), 1,
      anon_sym_file_COMMA,
    ACTIONS(844), 1,
      sym__eof,
    STATE(246), 1,
      aux_sym_value_string_text_repeat1,
    STATE(428), 1,
      sym_file_value,
    STATE(474), 1,
      sym_value_string,
    ACTIONS(840), 2,
      anon_sym_LF,
      sym_comment,
    STATE(213), 2,
      sym_value_string_text,
      aux_sym_value_string_content_repeat1,
    STATE(166), 3,
      sym_value_string_content,
      sym_template,
      aux_sym_value_string_repeat1,
  [5924] = 10,
    ACTIONS(778), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(780), 1,
      sym_value_string_escaped_char,
    ACTIONS(784), 1,
      anon_sym_LBRACE_LBRACE2,
    ACTIONS(848), 1,
      sym__eof,
    STATE(246), 1,
      aux_sym_value_string_text_repeat1,
    STATE(308), 1,
      sym_template,
    STATE(399), 1,
      sym_value_string,
    ACTIONS(846), 2,
      anon_sym_LF,
      sym_comment,
    STATE(166), 2,
      sym_value_string_content,
      aux_sym_value_string_repeat1,
    STATE(213), 2,
      sym_value_string_text,
      aux_sym_value_string_content_repeat1,
  [5958] = 9,
    ACTIONS(850), 1,
      anon_sym_LT,
    ACTIONS(854), 1,
      anon_sym_LT_SLASH,
    ACTIONS(856), 1,
      sym_xml_value_string_text,
    ACTIONS(858), 1,
      sym_comment,
    STATE(162), 1,
      sym_xml_open_tag,
    STATE(241), 1,
      sym_xml_self_closing_tag,
    STATE(404), 1,
      sym_xml_close_tag,
    ACTIONS(852), 3,
      sym_xml_prolog_tag,
      sym_xml_comment,
      sym_xml_cdata,
    STATE(160), 3,
      sym_xml_tag,
      sym_xml_value_string,
      aux_sym_xml_tag_repeat1,
  [5990] = 9,
    ACTIONS(850), 1,
      anon_sym_LT,
    ACTIONS(854), 1,
      anon_sym_LT_SLASH,
    ACTIONS(856), 1,
      sym_xml_value_string_text,
    ACTIONS(858), 1,
      sym_comment,
    STATE(162), 1,
      sym_xml_open_tag,
    STATE(241), 1,
      sym_xml_self_closing_tag,
    STATE(467), 1,
      sym_xml_close_tag,
    ACTIONS(860), 3,
      sym_xml_prolog_tag,
      sym_xml_comment,
      sym_xml_cdata,
    STATE(171), 3,
      sym_xml_tag,
      sym_xml_value_string,
      aux_sym_xml_tag_repeat1,
  [6022] = 9,
    ACTIONS(778), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(780), 1,
      sym_value_string_escaped_char,
    ACTIONS(784), 1,
      anon_sym_LBRACE_LBRACE2,
    ACTIONS(864), 1,
      sym__eof,
    STATE(246), 1,
      aux_sym_value_string_text_repeat1,
    STATE(397), 1,
      sym_value_string,
    ACTIONS(862), 2,
      anon_sym_LF,
      sym_comment,
    STATE(213), 2,
      sym_value_string_text,
      aux_sym_value_string_content_repeat1,
    STATE(166), 3,
      sym_value_string_content,
      sym_template,
      aux_sym_value_string_repeat1,
  [6054] = 9,
    ACTIONS(850), 1,
      anon_sym_LT,
    ACTIONS(856), 1,
      sym_xml_value_string_text,
    ACTIONS(858), 1,
      sym_comment,
    ACTIONS(868), 1,
      anon_sym_LT_SLASH,
    STATE(162), 1,
      sym_xml_open_tag,
    STATE(229), 1,
      sym_xml_close_tag,
    STATE(241), 1,
      sym_xml_self_closing_tag,
    ACTIONS(866), 3,
      sym_xml_prolog_tag,
      sym_xml_comment,
      sym_xml_cdata,
    STATE(163), 3,
      sym_xml_tag,
      sym_xml_value_string,
      aux_sym_xml_tag_repeat1,
  [6086] = 9,
    ACTIONS(850), 1,
      anon_sym_LT,
    ACTIONS(856), 1,
      sym_xml_value_string_text,
    ACTIONS(858), 1,
      sym_comment,
    ACTIONS(868), 1,
      anon_sym_LT_SLASH,
    STATE(162), 1,
      sym_xml_open_tag,
    STATE(241), 1,
      sym_xml_self_closing_tag,
    STATE(244), 1,
      sym_xml_close_tag,
    ACTIONS(860), 3,
      sym_xml_prolog_tag,
      sym_xml_comment,
      sym_xml_cdata,
    STATE(171), 3,
      sym_xml_tag,
      sym_xml_value_string,
      aux_sym_xml_tag_repeat1,
  [6118] = 9,
    ACTIONS(778), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(780), 1,
      sym_value_string_escaped_char,
    ACTIONS(784), 1,
      anon_sym_LBRACE_LBRACE2,
    ACTIONS(844), 1,
      sym__eof,
    STATE(246), 1,
      aux_sym_value_string_text_repeat1,
    STATE(474), 1,
      sym_value_string,
    ACTIONS(840), 2,
      anon_sym_LF,
      sym_comment,
    STATE(213), 2,
      sym_value_string_text,
      aux_sym_value_string_content_repeat1,
    STATE(166), 3,
      sym_value_string_content,
      sym_template,
      aux_sym_value_string_repeat1,
  [6150] = 9,
    ACTIONS(778), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(780), 1,
      sym_value_string_escaped_char,
    ACTIONS(784), 1,
      anon_sym_LBRACE_LBRACE2,
    ACTIONS(872), 1,
      sym__eof,
    STATE(246), 1,
      aux_sym_value_string_text_repeat1,
    STATE(403), 1,
      sym_value_string,
    ACTIONS(870), 2,
      anon_sym_LF,
      sym_comment,
    STATE(213), 2,
      sym_value_string_text,
      aux_sym_value_string_content_repeat1,
    STATE(166), 3,
      sym_value_string_content,
      sym_template,
      aux_sym_value_string_repeat1,
  [6182] = 8,
    ACTIONS(778), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(780), 1,
      sym_value_string_escaped_char,
    ACTIONS(784), 1,
      anon_sym_LBRACE_LBRACE2,
    ACTIONS(876), 1,
      sym__eof,
    STATE(246), 1,
      aux_sym_value_string_text_repeat1,
    ACTIONS(874), 2,
      anon_sym_LF,
      sym_comment,
    STATE(213), 2,
      sym_value_string_text,
      aux_sym_value_string_content_repeat1,
    STATE(170), 3,
      sym_value_string_content,
      sym_template,
      aux_sym_value_string_repeat1,
  [6211] = 8,
    ACTIONS(858), 1,
      sym_comment,
    ACTIONS(878), 1,
      anon_sym_DQUOTE,
    ACTIONS(880), 1,
      aux_sym_quoted_string_text_token1,
    ACTIONS(883), 1,
      anon_sym_LBRACE,
    ACTIONS(889), 1,
      anon_sym_LBRACE_LBRACE2,
    ACTIONS(886), 2,
      sym_invalid_quoted_string_escaped_char,
      sym_quoted_string_escaped_char,
    STATE(206), 2,
      sym_quoted_string_text,
      aux_sym_quoted_string_content_repeat1,
    STATE(167), 3,
      sym_quoted_string_content,
      sym_template,
      aux_sym_quoted_string_repeat1,
  [6240] = 8,
    ACTIONS(858), 1,
      sym_comment,
    ACTIONS(892), 1,
      anon_sym_DQUOTE,
    ACTIONS(894), 1,
      aux_sym_quoted_string_text_token1,
    ACTIONS(896), 1,
      anon_sym_LBRACE,
    ACTIONS(900), 1,
      anon_sym_LBRACE_LBRACE2,
    ACTIONS(898), 2,
      sym_invalid_quoted_string_escaped_char,
      sym_quoted_string_escaped_char,
    STATE(206), 2,
      sym_quoted_string_text,
      aux_sym_quoted_string_content_repeat1,
    STATE(169), 3,
      sym_quoted_string_content,
      sym_template,
      aux_sym_quoted_string_repeat1,
  [6269] = 8,
    ACTIONS(858), 1,
      sym_comment,
    ACTIONS(894), 1,
      aux_sym_quoted_string_text_token1,
    ACTIONS(896), 1,
      anon_sym_LBRACE,
    ACTIONS(900), 1,
      anon_sym_LBRACE_LBRACE2,
    ACTIONS(902), 1,
      anon_sym_DQUOTE,
    ACTIONS(898), 2,
      sym_invalid_quoted_string_escaped_char,
      sym_quoted_string_escaped_char,
    STATE(206), 2,
      sym_quoted_string_text,
      aux_sym_quoted_string_content_repeat1,
    STATE(167), 3,
      sym_quoted_string_content,
      sym_template,
      aux_sym_quoted_string_repeat1,
  [6298] = 8,
    ACTIONS(906), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(909), 1,
      sym_value_string_escaped_char,
    ACTIONS(912), 1,
      anon_sym_LBRACE_LBRACE2,
    ACTIONS(915), 1,
      sym__eof,
    STATE(246), 1,
      aux_sym_value_string_text_repeat1,
    ACTIONS(904), 2,
      anon_sym_LF,
      sym_comment,
    STATE(213), 2,
      sym_value_string_text,
      aux_sym_value_string_content_repeat1,
    STATE(170), 3,
      sym_value_string_content,
      sym_template,
      aux_sym_value_string_repeat1,
  [6327] = 8,
    ACTIONS(858), 1,
      sym_comment,
    ACTIONS(917), 1,
      anon_sym_LT,
    ACTIONS(923), 1,
      anon_sym_LT_SLASH,
    ACTIONS(925), 1,
      sym_xml_value_string_text,
    STATE(162), 1,
      sym_xml_open_tag,
    STATE(241), 1,
      sym_xml_self_closing_tag,
    ACTIONS(920), 3,
      sym_xml_prolog_tag,
      sym_xml_comment,
      sym_xml_cdata,
    STATE(171), 3,
      sym_xml_tag,
      sym_xml_value_string,
      aux_sym_xml_tag_repeat1,
  [6356] = 8,
    ACTIONS(858), 1,
      sym_comment,
    ACTIONS(894), 1,
      aux_sym_quoted_string_text_token1,
    ACTIONS(896), 1,
      anon_sym_LBRACE,
    ACTIONS(900), 1,
      anon_sym_LBRACE_LBRACE2,
    ACTIONS(928), 1,
      anon_sym_DQUOTE,
    ACTIONS(898), 2,
      sym_invalid_quoted_string_escaped_char,
      sym_quoted_string_escaped_char,
    STATE(206), 2,
      sym_quoted_string_text,
      aux_sym_quoted_string_content_repeat1,
    STATE(167), 3,
      sym_quoted_string_content,
      sym_template,
      aux_sym_quoted_string_repeat1,
  [6385] = 8,
    ACTIONS(858), 1,
      sym_comment,
    ACTIONS(894), 1,
      aux_sym_quoted_string_text_token1,
    ACTIONS(896), 1,
      anon_sym_LBRACE,
    ACTIONS(900), 1,
      anon_sym_LBRACE_LBRACE2,
    ACTIONS(930), 1,
      anon_sym_DQUOTE,
    ACTIONS(898), 2,
      sym_invalid_quoted_string_escaped_char,
      sym_quoted_string_escaped_char,
    STATE(206), 2,
      sym_quoted_string_text,
      aux_sym_quoted_string_content_repeat1,
    STATE(172), 3,
      sym_quoted_string_content,
      sym_template,
      aux_sym_quoted_string_repeat1,
  [6414] = 8,
    ACTIONS(858), 1,
      sym_comment,
    ACTIONS(932), 1,
      anon_sym_LBRACE,
    ACTIONS(935), 1,
      anon_sym_BQUOTE,
    ACTIONS(937), 1,
      aux_sym_oneline_string_text_token1,
    ACTIONS(940), 1,
      sym_oneline_string_escaped_char,
    ACTIONS(943), 1,
      anon_sym_LBRACE_LBRACE2,
    STATE(226), 2,
      sym_oneline_string_text,
      aux_sym_oneline_string_content_repeat1,
    STATE(174), 3,
      sym_oneline_string_content,
      sym_template,
      aux_sym_oneline_string_repeat1,
  [6442] = 8,
    ACTIONS(858), 1,
      sym_comment,
    ACTIONS(946), 1,
      anon_sym_LBRACE,
    ACTIONS(948), 1,
      anon_sym_BQUOTE,
    ACTIONS(950), 1,
      aux_sym_oneline_string_text_token1,
    ACTIONS(952), 1,
      sym_oneline_string_escaped_char,
    ACTIONS(954), 1,
      anon_sym_LBRACE_LBRACE2,
    STATE(226), 2,
      sym_oneline_string_text,
      aux_sym_oneline_string_content_repeat1,
    STATE(174), 3,
      sym_oneline_string_content,
      sym_template,
      aux_sym_oneline_string_repeat1,
  [6470] = 8,
    ACTIONS(858), 1,
      sym_comment,
    ACTIONS(946), 1,
      anon_sym_LBRACE,
    ACTIONS(950), 1,
      aux_sym_oneline_string_text_token1,
    ACTIONS(952), 1,
      sym_oneline_string_escaped_char,
    ACTIONS(954), 1,
      anon_sym_LBRACE_LBRACE2,
    ACTIONS(956), 1,
      anon_sym_BQUOTE,
    STATE(226), 2,
      sym_oneline_string_text,
      aux_sym_oneline_string_content_repeat1,
    STATE(175), 3,
      sym_oneline_string_content,
      sym_template,
      aux_sym_oneline_string_repeat1,
  [6498] = 8,
    ACTIONS(858), 1,
      sym_comment,
    ACTIONS(958), 1,
      anon_sym_DQUOTE,
    ACTIONS(960), 1,
      aux_sym_quoted_string_text_token1,
    ACTIONS(962), 1,
      anon_sym_LBRACE,
    ACTIONS(964), 1,
      sym_json_string_escaped_char,
    ACTIONS(966), 1,
      anon_sym_LBRACE_LBRACE2,
    STATE(191), 2,
      sym_json_string_content,
      aux_sym_json_string_repeat1,
    STATE(296), 2,
      sym_json_string_text,
      sym_template,
  [6525] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(732), 1,
      anon_sym_DQUOTE,
    ACTIONS(734), 1,
      anon_sym_base64_COMMA,
    ACTIONS(736), 1,
      anon_sym_hex_COMMA,
    ACTIONS(968), 1,
      anon_sym_BQUOTE,
    STATE(391), 5,
      sym__predicate_string,
      sym_oneline_base64,
      sym_oneline_hex,
      sym_quoted_string,
      sym_oneline_string,
  [6548] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(732), 1,
      anon_sym_DQUOTE,
    ACTIONS(742), 1,
      anon_sym_LBRACE_LBRACE2,
    ACTIONS(968), 1,
      anon_sym_BQUOTE,
    ACTIONS(970), 1,
      sym_integer,
    ACTIONS(972), 1,
      sym_float,
    STATE(387), 4,
      sym__predicate_string,
      sym_quoted_string,
      sym_oneline_string,
      sym_template,
  [6573] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(732), 1,
      anon_sym_DQUOTE,
    ACTIONS(742), 1,
      anon_sym_LBRACE_LBRACE2,
    ACTIONS(968), 1,
      anon_sym_BQUOTE,
    ACTIONS(974), 1,
      sym_integer,
    ACTIONS(976), 1,
      sym_float,
    STATE(386), 4,
      sym__predicate_string,
      sym_quoted_string,
      sym_oneline_string,
      sym_template,
  [6598] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(732), 1,
      anon_sym_DQUOTE,
    ACTIONS(742), 1,
      anon_sym_LBRACE_LBRACE2,
    ACTIONS(968), 1,
      anon_sym_BQUOTE,
    ACTIONS(978), 1,
      sym_integer,
    ACTIONS(980), 1,
      sym_float,
    STATE(385), 4,
      sym__predicate_string,
      sym_quoted_string,
      sym_oneline_string,
      sym_template,
  [6623] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(732), 1,
      anon_sym_DQUOTE,
    ACTIONS(742), 1,
      anon_sym_LBRACE_LBRACE2,
    ACTIONS(968), 1,
      anon_sym_BQUOTE,
    ACTIONS(982), 1,
      sym_integer,
    ACTIONS(984), 1,
      sym_float,
    STATE(384), 4,
      sym__predicate_string,
      sym_quoted_string,
      sym_oneline_string,
      sym_template,
  [6648] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(732), 1,
      anon_sym_DQUOTE,
    ACTIONS(742), 1,
      anon_sym_LBRACE_LBRACE2,
    ACTIONS(968), 1,
      anon_sym_BQUOTE,
    ACTIONS(986), 1,
      sym_integer,
    ACTIONS(988), 1,
      sym_float,
    STATE(383), 4,
      sym__predicate_string,
      sym_quoted_string,
      sym_oneline_string,
      sym_template,
  [6673] = 5,
    ACTIONS(858), 1,
      sym_comment,
    ACTIONS(990), 1,
      anon_sym_LF,
    ACTIONS(992), 1,
      anon_sym_raw,
    STATE(526), 1,
      sym_multiline_string_type,
    ACTIONS(994), 6,
      anon_sym_base64,
      anon_sym_hex,
      anon_sym_json,
      anon_sym_xml,
      anon_sym_graphql,
      aux_sym_multiline_string_type_token1,
  [6694] = 8,
    ACTIONS(858), 1,
      sym_comment,
    ACTIONS(960), 1,
      aux_sym_quoted_string_text_token1,
    ACTIONS(962), 1,
      anon_sym_LBRACE,
    ACTIONS(964), 1,
      sym_json_string_escaped_char,
    ACTIONS(966), 1,
      anon_sym_LBRACE_LBRACE2,
    ACTIONS(996), 1,
      anon_sym_DQUOTE,
    STATE(191), 2,
      sym_json_string_content,
      aux_sym_json_string_repeat1,
    STATE(296), 2,
      sym_json_string_text,
      sym_template,
  [6721] = 8,
    ACTIONS(858), 1,
      sym_comment,
    ACTIONS(960), 1,
      aux_sym_quoted_string_text_token1,
    ACTIONS(962), 1,
      anon_sym_LBRACE,
    ACTIONS(964), 1,
      sym_json_string_escaped_char,
    ACTIONS(966), 1,
      anon_sym_LBRACE_LBRACE2,
    ACTIONS(998), 1,
      anon_sym_DQUOTE,
    STATE(177), 2,
      sym_json_string_content,
      aux_sym_json_string_repeat1,
    STATE(296), 2,
      sym_json_string_text,
      sym_template,
  [6748] = 8,
    ACTIONS(858), 1,
      sym_comment,
    ACTIONS(960), 1,
      aux_sym_quoted_string_text_token1,
    ACTIONS(962), 1,
      anon_sym_LBRACE,
    ACTIONS(964), 1,
      sym_json_string_escaped_char,
    ACTIONS(966), 1,
      anon_sym_LBRACE_LBRACE2,
    ACTIONS(1000), 1,
      anon_sym_DQUOTE,
    STATE(185), 2,
      sym_json_string_content,
      aux_sym_json_string_repeat1,
    STATE(296), 2,
      sym_json_string_text,
      sym_template,
  [6775] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(732), 1,
      anon_sym_DQUOTE,
    ACTIONS(742), 1,
      anon_sym_LBRACE_LBRACE2,
    ACTIONS(968), 1,
      anon_sym_BQUOTE,
    ACTIONS(1002), 1,
      sym_integer,
    ACTIONS(1004), 1,
      sym_float,
    STATE(388), 4,
      sym__predicate_string,
      sym_quoted_string,
      sym_oneline_string,
      sym_template,
  [6800] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(732), 1,
      anon_sym_DQUOTE,
    ACTIONS(734), 1,
      anon_sym_base64_COMMA,
    ACTIONS(736), 1,
      anon_sym_hex_COMMA,
    ACTIONS(968), 1,
      anon_sym_BQUOTE,
    STATE(392), 5,
      sym__predicate_string,
      sym_oneline_base64,
      sym_oneline_hex,
      sym_quoted_string,
      sym_oneline_string,
  [6823] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(732), 1,
      anon_sym_DQUOTE,
    ACTIONS(742), 1,
      anon_sym_LBRACE_LBRACE2,
    ACTIONS(968), 1,
      anon_sym_BQUOTE,
    ACTIONS(1006), 1,
      sym_integer,
    ACTIONS(1008), 1,
      sym_float,
    STATE(389), 4,
      sym__predicate_string,
      sym_quoted_string,
      sym_oneline_string,
      sym_template,
  [6848] = 8,
    ACTIONS(858), 1,
      sym_comment,
    ACTIONS(1010), 1,
      anon_sym_DQUOTE,
    ACTIONS(1012), 1,
      aux_sym_quoted_string_text_token1,
    ACTIONS(1015), 1,
      anon_sym_LBRACE,
    ACTIONS(1018), 1,
      sym_json_string_escaped_char,
    ACTIONS(1021), 1,
      anon_sym_LBRACE_LBRACE2,
    STATE(191), 2,
      sym_json_string_content,
      aux_sym_json_string_repeat1,
    STATE(296), 2,
      sym_json_string_text,
      sym_template,
  [6875] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(732), 1,
      anon_sym_DQUOTE,
    ACTIONS(742), 1,
      anon_sym_LBRACE_LBRACE2,
    ACTIONS(968), 1,
      anon_sym_BQUOTE,
    ACTIONS(1024), 1,
      sym_integer,
    ACTIONS(1026), 1,
      sym_float,
    STATE(390), 4,
      sym__predicate_string,
      sym_quoted_string,
      sym_oneline_string,
      sym_template,
  [6900] = 7,
    ACTIONS(1030), 1,
      aux_sym__filename_password_continue_token1,
    ACTIONS(1033), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1036), 1,
      aux_sym__filename_continue_token1,
    ACTIONS(1039), 1,
      sym__eof,
    STATE(290), 1,
      sym__key_template,
    ACTIONS(1028), 2,
      anon_sym_LF,
      sym_comment,
    STATE(193), 2,
      sym__filename_continue,
      aux_sym_filename_repeat1,
  [6924] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1041), 1,
      anon_sym_COLON,
    STATE(287), 1,
      aux_sym_key_string_content_repeat1,
    STATE(344), 1,
      sym__key_template,
    ACTIONS(181), 2,
      sym_key_string_text,
      sym_key_string_escaped_char,
    STATE(214), 2,
      sym_key_string_content,
      aux_sym_key_string_repeat1,
  [6948] = 7,
    ACTIONS(858), 1,
      sym_comment,
    ACTIONS(1043), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(1045), 1,
      aux_sym_multiline_string_content_token1,
    ACTIONS(1047), 1,
      aux_sym_multiline_string_content_token2,
    ACTIONS(1049), 1,
      anon_sym_LBRACE_LBRACE2,
    STATE(285), 1,
      aux_sym_multiline_string_content_repeat1,
    STATE(204), 3,
      sym_multiline_string_content,
      sym_template,
      aux_sym_multiline_string_repeat2,
  [6972] = 6,
    ACTIONS(1053), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(1056), 1,
      sym_value_string_escaped_char,
    ACTIONS(1059), 1,
      sym__eof,
    STATE(246), 1,
      aux_sym_value_string_text_repeat1,
    STATE(196), 2,
      sym_value_string_text,
      aux_sym_value_string_content_repeat1,
    ACTIONS(1051), 3,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE2,
      sym_comment,
  [6994] = 7,
    ACTIONS(1063), 1,
      aux_sym__filename_password_continue_token1,
    ACTIONS(1065), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1067), 1,
      aux_sym__filename_continue_token1,
    ACTIONS(1069), 1,
      sym__eof,
    STATE(290), 1,
      sym__key_template,
    ACTIONS(1061), 2,
      anon_sym_LF,
      sym_comment,
    STATE(193), 2,
      sym__filename_continue,
      aux_sym_filename_repeat1,
  [7018] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1071), 1,
      anon_sym_COLON,
    STATE(287), 1,
      aux_sym_key_string_content_repeat1,
    STATE(344), 1,
      sym__key_template,
    ACTIONS(181), 2,
      sym_key_string_text,
      sym_key_string_escaped_char,
    STATE(214), 2,
      sym_key_string_content,
      aux_sym_key_string_repeat1,
  [7042] = 6,
    ACTIONS(1077), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1079), 1,
      sym__eof,
    STATE(311), 1,
      sym__key_template,
    ACTIONS(1073), 2,
      anon_sym_LF,
      sym_comment,
    ACTIONS(1075), 2,
      aux_sym__filename_password_continue_token1,
      aux_sym__filename_password_continue_token2,
    STATE(212), 2,
      sym__filename_password_continue,
      aux_sym_filename_password_repeat1,
  [7064] = 8,
    ACTIONS(858), 1,
      sym_comment,
    ACTIONS(1081), 1,
      anon_sym_SEMI,
    ACTIONS(1083), 1,
      aux_sym_filename_password_text_token1,
    ACTIONS(1085), 1,
      sym_filename_escaped_char,
    ACTIONS(1087), 1,
      anon_sym_LBRACE_LBRACE2,
    STATE(339), 1,
      sym_filename_text,
    STATE(485), 1,
      sym_filename,
    STATE(224), 2,
      sym_filename_content,
      sym_template,
  [7090] = 6,
    ACTIONS(858), 1,
      sym_comment,
    ACTIONS(1091), 1,
      aux_sym_quoted_string_text_token1,
    ACTIONS(1094), 1,
      anon_sym_LBRACE,
    ACTIONS(1089), 2,
      anon_sym_DQUOTE,
      anon_sym_LBRACE_LBRACE2,
    ACTIONS(1097), 2,
      sym_invalid_quoted_string_escaped_char,
      sym_quoted_string_escaped_char,
    STATE(201), 2,
      sym_quoted_string_text,
      aux_sym_quoted_string_content_repeat1,
  [7112] = 7,
    ACTIONS(858), 1,
      sym_comment,
    ACTIONS(1100), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(1102), 1,
      aux_sym_multiline_string_content_token1,
    ACTIONS(1105), 1,
      aux_sym_multiline_string_content_token2,
    ACTIONS(1108), 1,
      anon_sym_LBRACE_LBRACE2,
    STATE(285), 1,
      aux_sym_multiline_string_content_repeat1,
    STATE(202), 3,
      sym_multiline_string_content,
      sym_template,
      aux_sym_multiline_string_repeat2,
  [7136] = 7,
    ACTIONS(858), 1,
      sym_comment,
    ACTIONS(1045), 1,
      aux_sym_multiline_string_content_token1,
    ACTIONS(1047), 1,
      aux_sym_multiline_string_content_token2,
    ACTIONS(1049), 1,
      anon_sym_LBRACE_LBRACE2,
    ACTIONS(1111), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(285), 1,
      aux_sym_multiline_string_content_repeat1,
    STATE(202), 3,
      sym_multiline_string_content,
      sym_template,
      aux_sym_multiline_string_repeat2,
  [7160] = 7,
    ACTIONS(858), 1,
      sym_comment,
    ACTIONS(1045), 1,
      aux_sym_multiline_string_content_token1,
    ACTIONS(1047), 1,
      aux_sym_multiline_string_content_token2,
    ACTIONS(1049), 1,
      anon_sym_LBRACE_LBRACE2,
    ACTIONS(1113), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(285), 1,
      aux_sym_multiline_string_content_repeat1,
    STATE(202), 3,
      sym_multiline_string_content,
      sym_template,
      aux_sym_multiline_string_repeat2,
  [7184] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1115), 1,
      anon_sym_COLON,
    STATE(287), 1,
      aux_sym_key_string_content_repeat1,
    STATE(344), 1,
      sym__key_template,
    ACTIONS(181), 2,
      sym_key_string_text,
      sym_key_string_escaped_char,
    STATE(194), 2,
      sym_key_string_content,
      aux_sym_key_string_repeat1,
  [7208] = 6,
    ACTIONS(858), 1,
      sym_comment,
    ACTIONS(894), 1,
      aux_sym_quoted_string_text_token1,
    ACTIONS(896), 1,
      anon_sym_LBRACE,
    ACTIONS(1117), 2,
      anon_sym_DQUOTE,
      anon_sym_LBRACE_LBRACE2,
    ACTIONS(1119), 2,
      sym_invalid_quoted_string_escaped_char,
      sym_quoted_string_escaped_char,
    STATE(201), 2,
      sym_quoted_string_text,
      aux_sym_quoted_string_content_repeat1,
  [7230] = 7,
    ACTIONS(858), 1,
      sym_comment,
    ACTIONS(1045), 1,
      aux_sym_multiline_string_content_token1,
    ACTIONS(1047), 1,
      aux_sym_multiline_string_content_token2,
    ACTIONS(1049), 1,
      anon_sym_LBRACE_LBRACE2,
    ACTIONS(1113), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(285), 1,
      aux_sym_multiline_string_content_repeat1,
    STATE(203), 3,
      sym_multiline_string_content,
      sym_template,
      aux_sym_multiline_string_repeat2,
  [7254] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1121), 1,
      anon_sym_COLON,
    STATE(287), 1,
      aux_sym_key_string_content_repeat1,
    STATE(344), 1,
      sym__key_template,
    ACTIONS(181), 2,
      sym_key_string_text,
      sym_key_string_escaped_char,
    STATE(198), 2,
      sym_key_string_content,
      aux_sym_key_string_repeat1,
  [7278] = 7,
    ACTIONS(1063), 1,
      aux_sym__filename_password_continue_token1,
    ACTIONS(1065), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1067), 1,
      aux_sym__filename_continue_token1,
    ACTIONS(1125), 1,
      sym__eof,
    STATE(290), 1,
      sym__key_template,
    ACTIONS(1123), 2,
      anon_sym_LF,
      sym_comment,
    STATE(197), 2,
      sym__filename_continue,
      aux_sym_filename_repeat1,
  [7302] = 6,
    ACTIONS(1132), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1135), 1,
      sym__eof,
    STATE(311), 1,
      sym__key_template,
    ACTIONS(1127), 2,
      anon_sym_LF,
      sym_comment,
    ACTIONS(1129), 2,
      aux_sym__filename_password_continue_token1,
      aux_sym__filename_password_continue_token2,
    STATE(210), 2,
      sym__filename_password_continue,
      aux_sym_filename_password_repeat1,
  [7324] = 8,
    ACTIONS(858), 1,
      sym_comment,
    ACTIONS(1083), 1,
      aux_sym_filename_password_text_token1,
    ACTIONS(1085), 1,
      sym_filename_escaped_char,
    ACTIONS(1087), 1,
      anon_sym_LBRACE_LBRACE2,
    ACTIONS(1137), 1,
      anon_sym_SEMI,
    STATE(339), 1,
      sym_filename_text,
    STATE(502), 1,
      sym_filename,
    STATE(224), 2,
      sym_filename_content,
      sym_template,
  [7350] = 6,
    ACTIONS(1077), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1141), 1,
      sym__eof,
    STATE(311), 1,
      sym__key_template,
    ACTIONS(1075), 2,
      aux_sym__filename_password_continue_token1,
      aux_sym__filename_password_continue_token2,
    ACTIONS(1139), 2,
      anon_sym_LF,
      sym_comment,
    STATE(210), 2,
      sym__filename_password_continue,
      aux_sym_filename_password_repeat1,
  [7372] = 6,
    ACTIONS(778), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(1145), 1,
      sym_value_string_escaped_char,
    ACTIONS(1147), 1,
      sym__eof,
    STATE(246), 1,
      aux_sym_value_string_text_repeat1,
    STATE(196), 2,
      sym_value_string_text,
      aux_sym_value_string_content_repeat1,
    ACTIONS(1143), 3,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE2,
      sym_comment,
  [7394] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1149), 1,
      anon_sym_COLON,
    ACTIONS(1151), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(287), 1,
      aux_sym_key_string_content_repeat1,
    STATE(344), 1,
      sym__key_template,
    ACTIONS(1154), 2,
      sym_key_string_text,
      sym_key_string_escaped_char,
    STATE(214), 2,
      sym_key_string_content,
      aux_sym_key_string_repeat1,
  [7418] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(732), 1,
      anon_sym_DQUOTE,
    ACTIONS(746), 1,
      anon_sym_SLASH,
    ACTIONS(968), 1,
      anon_sym_BQUOTE,
    STATE(394), 4,
      sym__predicate_string,
      sym_quoted_string,
      sym_oneline_string,
      sym_regex,
  [7437] = 7,
    ACTIONS(858), 1,
      sym_comment,
    ACTIONS(1028), 1,
      anon_sym_SEMI,
    ACTIONS(1157), 1,
      aux_sym__filename_password_continue_token1,
    ACTIONS(1160), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1163), 1,
      aux_sym__filename_continue_token1,
    STATE(325), 1,
      sym__key_template,
    STATE(216), 2,
      sym__filename_continue,
      aux_sym_filename_repeat1,
  [7460] = 7,
    ACTIONS(858), 1,
      sym_comment,
    ACTIONS(1166), 1,
      aux_sym_filename_password_text_token1,
    ACTIONS(1168), 1,
      sym_filename_password_escaped_char,
    ACTIONS(1170), 1,
      anon_sym_LBRACE_LBRACE2,
    STATE(295), 1,
      sym_filename_password_text,
    STATE(424), 1,
      sym_filename_password,
    STATE(199), 2,
      sym_filename_password_content,
      sym_template,
  [7483] = 7,
    ACTIONS(858), 1,
      sym_comment,
    ACTIONS(1172), 1,
      aux_sym_filename_password_text_token1,
    ACTIONS(1174), 1,
      sym_filename_escaped_char,
    ACTIONS(1176), 1,
      anon_sym_LBRACE_LBRACE2,
    STATE(299), 1,
      sym_filename_text,
    STATE(426), 1,
      sym_filename,
    STATE(209), 2,
      sym_filename_content,
      sym_template,
  [7506] = 7,
    ACTIONS(858), 1,
      sym_comment,
    ACTIONS(1061), 1,
      anon_sym_SEMI,
    ACTIONS(1178), 1,
      aux_sym__filename_password_continue_token1,
    ACTIONS(1180), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1182), 1,
      aux_sym__filename_continue_token1,
    STATE(325), 1,
      sym__key_template,
    STATE(216), 2,
      sym__filename_continue,
      aux_sym_filename_repeat1,
  [7529] = 7,
    ACTIONS(858), 1,
      sym_comment,
    ACTIONS(1172), 1,
      aux_sym_filename_password_text_token1,
    ACTIONS(1174), 1,
      sym_filename_escaped_char,
    ACTIONS(1176), 1,
      anon_sym_LBRACE_LBRACE2,
    STATE(299), 1,
      sym_filename_text,
    STATE(427), 1,
      sym_filename,
    STATE(209), 2,
      sym_filename_content,
      sym_template,
  [7552] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(818), 1,
      anon_sym_DQUOTE,
    ACTIONS(1184), 1,
      anon_sym_RBRACE,
    ACTIONS(1186), 1,
      anon_sym_COMMA,
    STATE(354), 1,
      aux_sym_json_object_repeat1,
    STATE(355), 1,
      sym_json_key_value,
    STATE(528), 1,
      sym_json_key_string,
    STATE(530), 1,
      sym_json_string,
  [7577] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(169), 1,
      anon_sym_LT,
    STATE(159), 1,
      sym_xml_open_tag,
    STATE(342), 1,
      aux_sym_xml_repeat1,
    STATE(375), 1,
      sym_xml_tag,
    STATE(445), 1,
      sym_xml_self_closing_tag,
    ACTIONS(1188), 2,
      sym_xml_prolog_tag,
      sym_xml_comment,
  [7600] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(818), 1,
      anon_sym_DQUOTE,
    ACTIONS(1186), 1,
      anon_sym_COMMA,
    ACTIONS(1190), 1,
      anon_sym_RBRACE,
    STATE(366), 1,
      aux_sym_json_object_repeat1,
    STATE(369), 1,
      sym_json_key_value,
    STATE(528), 1,
      sym_json_key_string,
    STATE(530), 1,
      sym_json_string,
  [7625] = 7,
    ACTIONS(858), 1,
      sym_comment,
    ACTIONS(1123), 1,
      anon_sym_SEMI,
    ACTIONS(1178), 1,
      aux_sym__filename_password_continue_token1,
    ACTIONS(1180), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1182), 1,
      aux_sym__filename_continue_token1,
    STATE(325), 1,
      sym__key_template,
    STATE(219), 2,
      sym__filename_continue,
      aux_sym_filename_repeat1,
  [7648] = 6,
    ACTIONS(858), 1,
      sym_comment,
    ACTIONS(1192), 1,
      anon_sym_LBRACE,
    ACTIONS(1197), 1,
      aux_sym_oneline_string_text_token1,
    ACTIONS(1200), 1,
      sym_oneline_string_escaped_char,
    ACTIONS(1195), 2,
      anon_sym_BQUOTE,
      anon_sym_LBRACE_LBRACE2,
    STATE(225), 2,
      sym_oneline_string_text,
      aux_sym_oneline_string_content_repeat1,
  [7669] = 4,
    ACTIONS(858), 1,
      sym_comment,
    ACTIONS(1205), 1,
      aux_sym_oneline_string_text_token1,
    STATE(225), 2,
      sym_oneline_string_text,
      aux_sym_oneline_string_content_repeat1,
    ACTIONS(1203), 4,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      sym_oneline_string_escaped_char,
      anon_sym_LBRACE_LBRACE2,
  [7686] = 6,
    ACTIONS(858), 1,
      sym_comment,
    ACTIONS(1111), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(1207), 1,
      aux_sym_raw_multiline_string_content_token1,
    ACTIONS(1209), 1,
      anon_sym_BQUOTE2,
    STATE(321), 1,
      aux_sym_raw_multiline_string_content_repeat1,
    STATE(235), 2,
      sym_raw_multiline_string_content,
      aux_sym_multiline_string_repeat1,
  [7706] = 6,
    ACTIONS(858), 1,
      sym_comment,
    ACTIONS(1113), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(1207), 1,
      aux_sym_raw_multiline_string_content_token1,
    ACTIONS(1209), 1,
      anon_sym_BQUOTE2,
    STATE(321), 1,
      aux_sym_raw_multiline_string_content_repeat1,
    STATE(227), 2,
      sym_raw_multiline_string_content,
      aux_sym_multiline_string_repeat1,
  [7726] = 3,
    ACTIONS(858), 1,
      sym_comment,
    ACTIONS(1213), 1,
      sym_xml_value_string_text,
    ACTIONS(1211), 5,
      anon_sym_LT,
      sym_xml_prolog_tag,
      sym_xml_comment,
      sym_xml_cdata,
      anon_sym_LT_SLASH,
  [7740] = 3,
    ACTIONS(858), 1,
      sym_comment,
    ACTIONS(1217), 1,
      sym_xml_value_string_text,
    ACTIONS(1215), 5,
      anon_sym_LT,
      sym_xml_prolog_tag,
      sym_xml_comment,
      sym_xml_cdata,
      anon_sym_LT_SLASH,
  [7754] = 3,
    ACTIONS(858), 1,
      sym_comment,
    ACTIONS(1221), 1,
      sym_xml_value_string_text,
    ACTIONS(1219), 5,
      anon_sym_LT,
      sym_xml_prolog_tag,
      sym_xml_comment,
      sym_xml_cdata,
      anon_sym_LT_SLASH,
  [7768] = 3,
    ACTIONS(858), 1,
      sym_comment,
    ACTIONS(1225), 1,
      aux_sym_quoted_string_text_token1,
    ACTIONS(1223), 5,
      anon_sym_DQUOTE,
      anon_sym_LBRACE,
      sym_invalid_quoted_string_escaped_char,
      sym_quoted_string_escaped_char,
      anon_sym_LBRACE_LBRACE2,
  [7782] = 3,
    ACTIONS(858), 1,
      sym_comment,
    ACTIONS(1229), 1,
      sym_xml_value_string_text,
    ACTIONS(1227), 5,
      anon_sym_LT,
      sym_xml_prolog_tag,
      sym_xml_comment,
      sym_xml_cdata,
      anon_sym_LT_SLASH,
  [7796] = 6,
    ACTIONS(858), 1,
      sym_comment,
    ACTIONS(1231), 1,
      anon_sym_SLASH,
    ACTIONS(1233), 1,
      sym_regex_text,
    ACTIONS(1235), 1,
      anon_sym_BSLASH,
    STATE(497), 1,
      sym_regex_content,
    STATE(263), 2,
      sym_regex_escaped_char,
      aux_sym_regex_content_repeat1,
  [7816] = 6,
    ACTIONS(858), 1,
      sym_comment,
    ACTIONS(1237), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(1239), 1,
      aux_sym_raw_multiline_string_content_token1,
    ACTIONS(1242), 1,
      anon_sym_BQUOTE2,
    STATE(321), 1,
      aux_sym_raw_multiline_string_content_repeat1,
    STATE(235), 2,
      sym_raw_multiline_string_content,
      aux_sym_multiline_string_repeat1,
  [7836] = 6,
    ACTIONS(858), 1,
      sym_comment,
    ACTIONS(1233), 1,
      sym_regex_text,
    ACTIONS(1235), 1,
      anon_sym_BSLASH,
    ACTIONS(1245), 1,
      anon_sym_SLASH,
    STATE(518), 1,
      sym_regex_content,
    STATE(263), 2,
      sym_regex_escaped_char,
      aux_sym_regex_content_repeat1,
  [7856] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(514), 1,
      sym_certificate_attribute,
    ACTIONS(1247), 5,
      anon_sym_Subject,
      anon_sym_Issuer,
      anon_sym_Start_DASHDate,
      anon_sym_Expire_DASHDate,
      anon_sym_Serial_DASHNumber,
  [7870] = 4,
    ACTIONS(1251), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(1254), 1,
      sym__eof,
    STATE(238), 1,
      aux_sym_value_string_text_repeat1,
    ACTIONS(1249), 4,
      anon_sym_LF,
      sym_value_string_escaped_char,
      anon_sym_LBRACE_LBRACE2,
      sym_comment,
  [7886] = 3,
    ACTIONS(858), 1,
      sym_comment,
    ACTIONS(1258), 1,
      sym_xml_value_string_text,
    ACTIONS(1256), 5,
      anon_sym_LT,
      sym_xml_prolog_tag,
      sym_xml_comment,
      sym_xml_cdata,
      anon_sym_LT_SLASH,
  [7900] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(493), 1,
      sym_certificate_attribute,
    ACTIONS(1247), 5,
      anon_sym_Subject,
      anon_sym_Issuer,
      anon_sym_Start_DASHDate,
      anon_sym_Expire_DASHDate,
      anon_sym_Serial_DASHNumber,
  [7914] = 3,
    ACTIONS(858), 1,
      sym_comment,
    ACTIONS(1262), 1,
      sym_xml_value_string_text,
    ACTIONS(1260), 5,
      anon_sym_LT,
      sym_xml_prolog_tag,
      sym_xml_comment,
      sym_xml_cdata,
      anon_sym_LT_SLASH,
  [7928] = 3,
    ACTIONS(858), 1,
      sym_comment,
    ACTIONS(1266), 1,
      sym_xml_value_string_text,
    ACTIONS(1264), 5,
      anon_sym_LT,
      sym_xml_prolog_tag,
      sym_xml_comment,
      sym_xml_cdata,
      anon_sym_LT_SLASH,
  [7942] = 3,
    ACTIONS(251), 1,
      aux_sym_quoted_string_text_token1,
    ACTIONS(858), 1,
      sym_comment,
    ACTIONS(253), 5,
      anon_sym_DQUOTE,
      anon_sym_LBRACE,
      sym_invalid_quoted_string_escaped_char,
      sym_quoted_string_escaped_char,
      anon_sym_LBRACE_LBRACE2,
  [7956] = 3,
    ACTIONS(858), 1,
      sym_comment,
    ACTIONS(1270), 1,
      sym_xml_value_string_text,
    ACTIONS(1268), 5,
      anon_sym_LT,
      sym_xml_prolog_tag,
      sym_xml_comment,
      sym_xml_cdata,
      anon_sym_LT_SLASH,
  [7970] = 3,
    ACTIONS(858), 1,
      sym_comment,
    ACTIONS(1274), 1,
      sym_xml_value_string_text,
    ACTIONS(1272), 5,
      anon_sym_LT,
      sym_xml_prolog_tag,
      sym_xml_comment,
      sym_xml_cdata,
      anon_sym_LT_SLASH,
  [7984] = 4,
    ACTIONS(1278), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(1280), 1,
      sym__eof,
    STATE(238), 1,
      aux_sym_value_string_text_repeat1,
    ACTIONS(1276), 4,
      anon_sym_LF,
      sym_value_string_escaped_char,
      anon_sym_LBRACE_LBRACE2,
      sym_comment,
  [8000] = 5,
    ACTIONS(545), 1,
      anon_sym_LF,
    ACTIONS(565), 1,
      sym_comment,
    ACTIONS(1282), 1,
      sym__eof,
    STATE(82), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(89), 2,
      sym__comment_or_new_line,
      sym__line_ending,
  [8017] = 5,
    ACTIONS(1284), 1,
      anon_sym_LF,
    ACTIONS(1286), 1,
      sym_comment,
    ACTIONS(1288), 1,
      sym__eof,
    STATE(62), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(66), 2,
      sym__comment_or_new_line,
      sym__line_ending,
  [8034] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1292), 1,
      sym_variable_name,
    STATE(81), 1,
      sym_function,
    STATE(515), 1,
      sym_expr,
    ACTIONS(1290), 2,
      anon_sym_newDate,
      anon_sym_newUuid,
  [8051] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1292), 1,
      sym_variable_name,
    STATE(81), 1,
      sym_function,
    STATE(476), 1,
      sym_expr,
    ACTIONS(1290), 2,
      anon_sym_newDate,
      anon_sym_newUuid,
  [8068] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1292), 1,
      sym_variable_name,
    STATE(81), 1,
      sym_function,
    STATE(513), 1,
      sym_expr,
    ACTIONS(1290), 2,
      anon_sym_newDate,
      anon_sym_newUuid,
  [8085] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1292), 1,
      sym_variable_name,
    STATE(81), 1,
      sym_function,
    STATE(512), 1,
      sym_expr,
    ACTIONS(1290), 2,
      anon_sym_newDate,
      anon_sym_newUuid,
  [8102] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(742), 1,
      anon_sym_LBRACE_LBRACE2,
    ACTIONS(740), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(410), 2,
      sym_template,
      sym_boolean,
  [8117] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1292), 1,
      sym_variable_name,
    STATE(81), 1,
      sym_function,
    STATE(511), 1,
      sym_expr,
    ACTIONS(1290), 2,
      anon_sym_newDate,
      anon_sym_newUuid,
  [8134] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1292), 1,
      sym_variable_name,
    STATE(81), 1,
      sym_function,
    STATE(510), 1,
      sym_expr,
    ACTIONS(1290), 2,
      anon_sym_newDate,
      anon_sym_newUuid,
  [8151] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1292), 1,
      sym_variable_name,
    STATE(81), 1,
      sym_function,
    STATE(509), 1,
      sym_expr,
    ACTIONS(1290), 2,
      anon_sym_newDate,
      anon_sym_newUuid,
  [8168] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1292), 1,
      sym_variable_name,
    STATE(81), 1,
      sym_function,
    STATE(508), 1,
      sym_expr,
    ACTIONS(1290), 2,
      anon_sym_newDate,
      anon_sym_newUuid,
  [8185] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1292), 1,
      sym_variable_name,
    STATE(81), 1,
      sym_function,
    STATE(507), 1,
      sym_expr,
    ACTIONS(1290), 2,
      anon_sym_newDate,
      anon_sym_newUuid,
  [8202] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1296), 1,
      sym_xml_name,
    ACTIONS(1294), 2,
      anon_sym_GT,
      anon_sym_SLASH_GT,
    STATE(259), 2,
      sym_xml_attribute,
      aux_sym_xml_self_closing_tag_repeat1,
  [8217] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1292), 1,
      sym_variable_name,
    STATE(81), 1,
      sym_function,
    STATE(506), 1,
      sym_expr,
    ACTIONS(1290), 2,
      anon_sym_newDate,
      anon_sym_newUuid,
  [8234] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1292), 1,
      sym_variable_name,
    STATE(81), 1,
      sym_function,
    STATE(475), 1,
      sym_expr,
    ACTIONS(1290), 2,
      anon_sym_newDate,
      anon_sym_newUuid,
  [8251] = 5,
    ACTIONS(858), 1,
      sym_comment,
    ACTIONS(1301), 1,
      aux_sym_multiline_string_content_token1,
    ACTIONS(1304), 1,
      aux_sym_multiline_string_content_token2,
    STATE(262), 1,
      aux_sym_multiline_string_content_repeat1,
    ACTIONS(1299), 2,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE_LBRACE2,
  [8268] = 5,
    ACTIONS(858), 1,
      sym_comment,
    ACTIONS(1235), 1,
      anon_sym_BSLASH,
    ACTIONS(1307), 1,
      anon_sym_SLASH,
    ACTIONS(1309), 1,
      sym_regex_text,
    STATE(289), 2,
      sym_regex_escaped_char,
      aux_sym_regex_content_repeat1,
  [8285] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1292), 1,
      sym_variable_name,
    STATE(81), 1,
      sym_function,
    STATE(484), 1,
      sym_expr,
    ACTIONS(1290), 2,
      anon_sym_newDate,
      anon_sym_newUuid,
  [8302] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1292), 1,
      sym_variable_name,
    STATE(81), 1,
      sym_function,
    STATE(477), 1,
      sym_expr,
    ACTIONS(1290), 2,
      anon_sym_newDate,
      anon_sym_newUuid,
  [8319] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1311), 1,
      anon_sym_GT,
    ACTIONS(1313), 1,
      sym_xml_name,
    ACTIONS(1315), 1,
      anon_sym_SLASH_GT,
    STATE(259), 2,
      sym_xml_attribute,
      aux_sym_xml_self_closing_tag_repeat1,
  [8336] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1292), 1,
      sym_variable_name,
    STATE(81), 1,
      sym_function,
    STATE(479), 1,
      sym_expr,
    ACTIONS(1290), 2,
      anon_sym_newDate,
      anon_sym_newUuid,
  [8353] = 5,
    ACTIONS(834), 1,
      sym_comment,
    ACTIONS(1317), 1,
      anon_sym_LF,
    ACTIONS(1319), 1,
      sym__eof,
    STATE(64), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(10), 2,
      sym__comment_or_new_line,
      sym__line_ending,
  [8370] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1313), 1,
      sym_xml_name,
    ACTIONS(1321), 1,
      anon_sym_GT,
    ACTIONS(1323), 1,
      anon_sym_SLASH_GT,
    STATE(266), 2,
      sym_xml_attribute,
      aux_sym_xml_self_closing_tag_repeat1,
  [8387] = 5,
    ACTIONS(545), 1,
      anon_sym_LF,
    ACTIONS(565), 1,
      sym_comment,
    ACTIONS(1325), 1,
      sym__eof,
    STATE(82), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(18), 2,
      sym__comment_or_new_line,
      sym__line_ending,
  [8404] = 2,
    ACTIONS(253), 2,
      anon_sym_LF,
      sym_comment,
    ACTIONS(251), 4,
      sym__eof,
      aux_sym__filename_password_continue_token1,
      aux_sym__filename_password_continue_token2,
      anon_sym_LBRACE_LBRACE,
  [8415] = 2,
    ACTIONS(253), 2,
      anon_sym_LF,
      sym_comment,
    ACTIONS(251), 4,
      sym__eof,
      aux_sym__filename_password_continue_token1,
      anon_sym_LBRACE_LBRACE,
      aux_sym__filename_continue_token1,
  [8426] = 5,
    ACTIONS(834), 1,
      sym_comment,
    ACTIONS(1317), 1,
      anon_sym_LF,
    ACTIONS(1327), 1,
      sym__eof,
    STATE(64), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(52), 2,
      sym__comment_or_new_line,
      sym__line_ending,
  [8443] = 5,
    ACTIONS(834), 1,
      sym_comment,
    ACTIONS(1317), 1,
      anon_sym_LF,
    ACTIONS(1329), 1,
      sym__eof,
    STATE(64), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(55), 2,
      sym__comment_or_new_line,
      sym__line_ending,
  [8460] = 5,
    ACTIONS(834), 1,
      sym_comment,
    ACTIONS(1317), 1,
      anon_sym_LF,
    ACTIONS(1331), 1,
      sym__eof,
    STATE(64), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(54), 2,
      sym__comment_or_new_line,
      sym__line_ending,
  [8477] = 3,
    ACTIONS(251), 1,
      aux_sym_oneline_string_text_token1,
    ACTIONS(858), 1,
      sym_comment,
    ACTIONS(253), 4,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      sym_oneline_string_escaped_char,
      anon_sym_LBRACE_LBRACE2,
  [8490] = 5,
    ACTIONS(834), 1,
      sym_comment,
    ACTIONS(1317), 1,
      anon_sym_LF,
    ACTIONS(1333), 1,
      sym__eof,
    STATE(64), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(47), 2,
      sym__comment_or_new_line,
      sym__line_ending,
  [8507] = 5,
    ACTIONS(834), 1,
      sym_comment,
    ACTIONS(1317), 1,
      anon_sym_LF,
    ACTIONS(1335), 1,
      sym__eof,
    STATE(64), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(50), 2,
      sym__comment_or_new_line,
      sym__line_ending,
  [8524] = 3,
    ACTIONS(251), 1,
      aux_sym_quoted_string_text_token1,
    ACTIONS(858), 1,
      sym_comment,
    ACTIONS(253), 4,
      anon_sym_DQUOTE,
      anon_sym_LBRACE,
      sym_json_string_escaped_char,
      anon_sym_LBRACE_LBRACE2,
  [8537] = 5,
    ACTIONS(1337), 1,
      anon_sym_LF,
    ACTIONS(1339), 1,
      sym_comment,
    ACTIONS(1341), 1,
      sym__eof,
    STATE(6), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(3), 2,
      sym__comment_or_new_line,
      sym__line_ending,
  [8554] = 2,
    ACTIONS(1343), 2,
      anon_sym_LF,
      sym_comment,
    ACTIONS(1345), 4,
      sym__eof,
      aux_sym__filename_password_continue_token1,
      aux_sym__filename_password_continue_token2,
      anon_sym_LBRACE_LBRACE,
  [8565] = 2,
    ACTIONS(1343), 2,
      anon_sym_LF,
      sym_comment,
    ACTIONS(1345), 4,
      sym__eof,
      aux_sym__filename_password_continue_token1,
      anon_sym_LBRACE_LBRACE,
      aux_sym__filename_continue_token1,
  [8576] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1292), 1,
      sym_variable_name,
    STATE(81), 1,
      sym_function,
    STATE(516), 1,
      sym_expr,
    ACTIONS(1290), 2,
      anon_sym_newDate,
      anon_sym_newUuid,
  [8593] = 5,
    ACTIONS(834), 1,
      sym_comment,
    ACTIONS(1317), 1,
      anon_sym_LF,
    ACTIONS(1347), 1,
      sym__eof,
    STATE(64), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(68), 2,
      sym__comment_or_new_line,
      sym__line_ending,
  [8610] = 4,
    ACTIONS(858), 1,
      sym_comment,
    ACTIONS(1351), 1,
      aux_sym_multiline_string_content_token1,
    STATE(262), 1,
      aux_sym_multiline_string_content_repeat1,
    ACTIONS(1349), 3,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      aux_sym_multiline_string_content_token2,
      anon_sym_LBRACE_LBRACE2,
  [8625] = 5,
    ACTIONS(1353), 1,
      anon_sym_LF,
    ACTIONS(1355), 1,
      sym_comment,
    ACTIONS(1357), 1,
      sym__eof,
    STATE(118), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(125), 2,
      sym__comment_or_new_line,
      sym__line_ending,
  [8642] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(304), 1,
      aux_sym_key_string_content_repeat1,
    ACTIONS(1359), 4,
      anon_sym_COLON,
      anon_sym_LBRACE_LBRACE,
      sym_key_string_text,
      sym_key_string_escaped_char,
  [8655] = 2,
    ACTIONS(251), 1,
      sym__eof,
    ACTIONS(253), 5,
      anon_sym_LF,
      aux_sym_value_string_text_token1,
      sym_value_string_escaped_char,
      anon_sym_LBRACE_LBRACE2,
      sym_comment,
  [8666] = 5,
    ACTIONS(858), 1,
      sym_comment,
    ACTIONS(1361), 1,
      anon_sym_SLASH,
    ACTIONS(1363), 1,
      sym_regex_text,
    ACTIONS(1366), 1,
      anon_sym_BSLASH,
    STATE(289), 2,
      sym_regex_escaped_char,
      aux_sym_regex_content_repeat1,
  [8683] = 2,
    ACTIONS(1369), 2,
      anon_sym_LF,
      sym_comment,
    ACTIONS(1371), 4,
      sym__eof,
      aux_sym__filename_password_continue_token1,
      anon_sym_LBRACE_LBRACE,
      aux_sym__filename_continue_token1,
  [8694] = 2,
    ACTIONS(1373), 2,
      anon_sym_LF,
      sym_comment,
    ACTIONS(1375), 4,
      sym__eof,
      aux_sym__filename_password_continue_token1,
      anon_sym_LBRACE_LBRACE,
      aux_sym__filename_continue_token1,
  [8705] = 2,
    ACTIONS(1377), 2,
      anon_sym_LF,
      sym_comment,
    ACTIONS(1379), 4,
      sym__eof,
      aux_sym__filename_password_continue_token1,
      anon_sym_LBRACE_LBRACE,
      aux_sym__filename_continue_token1,
  [8716] = 3,
    ACTIONS(858), 1,
      sym_comment,
    ACTIONS(1383), 1,
      aux_sym_quoted_string_text_token1,
    ACTIONS(1381), 4,
      anon_sym_DQUOTE,
      anon_sym_LBRACE,
      sym_json_string_escaped_char,
      anon_sym_LBRACE_LBRACE2,
  [8729] = 2,
    ACTIONS(1385), 2,
      anon_sym_LF,
      sym_comment,
    ACTIONS(1387), 4,
      sym__eof,
      aux_sym__filename_password_continue_token1,
      aux_sym__filename_password_continue_token2,
      anon_sym_LBRACE_LBRACE,
  [8740] = 2,
    ACTIONS(1389), 2,
      anon_sym_LF,
      sym_comment,
    ACTIONS(1391), 4,
      sym__eof,
      aux_sym__filename_password_continue_token1,
      aux_sym__filename_password_continue_token2,
      anon_sym_LBRACE_LBRACE,
  [8751] = 3,
    ACTIONS(858), 1,
      sym_comment,
    ACTIONS(1395), 1,
      aux_sym_quoted_string_text_token1,
    ACTIONS(1393), 4,
      anon_sym_DQUOTE,
      anon_sym_LBRACE,
      sym_json_string_escaped_char,
      anon_sym_LBRACE_LBRACE2,
  [8764] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1313), 1,
      sym_xml_name,
    ACTIONS(1321), 1,
      anon_sym_GT,
    ACTIONS(1397), 1,
      anon_sym_SLASH_GT,
    STATE(314), 2,
      sym_xml_attribute,
      aux_sym_xml_self_closing_tag_repeat1,
  [8781] = 3,
    ACTIONS(858), 1,
      sym_comment,
    ACTIONS(1401), 1,
      aux_sym_oneline_string_text_token1,
    ACTIONS(1399), 4,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      sym_oneline_string_escaped_char,
      anon_sym_LBRACE_LBRACE2,
  [8794] = 2,
    ACTIONS(1403), 2,
      anon_sym_LF,
      sym_comment,
    ACTIONS(1405), 4,
      sym__eof,
      aux_sym__filename_password_continue_token1,
      anon_sym_LBRACE_LBRACE,
      aux_sym__filename_continue_token1,
  [8805] = 2,
    ACTIONS(1407), 2,
      anon_sym_LF,
      sym_comment,
    ACTIONS(1409), 4,
      sym__eof,
      aux_sym__filename_password_continue_token1,
      anon_sym_LBRACE_LBRACE,
      aux_sym__filename_continue_token1,
  [8816] = 5,
    ACTIONS(7), 1,
      anon_sym_LF,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1411), 1,
      sym__eof,
    STATE(142), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(145), 2,
      sym__comment_or_new_line,
      sym__line_ending,
  [8833] = 2,
    ACTIONS(1415), 1,
      sym__eof,
    ACTIONS(1413), 5,
      anon_sym_LF,
      aux_sym_value_string_text_token1,
      sym_value_string_escaped_char,
      anon_sym_LBRACE_LBRACE2,
      sym_comment,
  [8844] = 5,
    ACTIONS(545), 1,
      anon_sym_LF,
    ACTIONS(565), 1,
      sym_comment,
    ACTIONS(1417), 1,
      sym__eof,
    STATE(82), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(88), 2,
      sym__comment_or_new_line,
      sym__line_ending,
  [8861] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(304), 1,
      aux_sym_key_string_content_repeat1,
    ACTIONS(1419), 2,
      anon_sym_COLON,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1421), 2,
      sym_key_string_text,
      sym_key_string_escaped_char,
  [8876] = 5,
    ACTIONS(545), 1,
      anon_sym_LF,
    ACTIONS(565), 1,
      sym_comment,
    ACTIONS(1424), 1,
      sym__eof,
    STATE(82), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(85), 2,
      sym__comment_or_new_line,
      sym__line_ending,
  [8893] = 5,
    ACTIONS(545), 1,
      anon_sym_LF,
    ACTIONS(565), 1,
      sym_comment,
    ACTIONS(1426), 1,
      sym__eof,
    STATE(82), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(76), 2,
      sym__comment_or_new_line,
      sym__line_ending,
  [8910] = 5,
    ACTIONS(1284), 1,
      anon_sym_LF,
    ACTIONS(1286), 1,
      sym_comment,
    ACTIONS(1428), 1,
      sym__eof,
    STATE(62), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(36), 2,
      sym__comment_or_new_line,
      sym__line_ending,
  [8927] = 3,
    ACTIONS(1434), 1,
      sym__eof,
    ACTIONS(1430), 2,
      anon_sym_LF,
      sym_comment,
    ACTIONS(1432), 3,
      aux_sym_value_string_text_token1,
      sym_value_string_escaped_char,
      anon_sym_LBRACE_LBRACE2,
  [8940] = 2,
    ACTIONS(1436), 2,
      anon_sym_LF,
      sym_comment,
    ACTIONS(1438), 4,
      sym__eof,
      aux_sym__filename_password_continue_token1,
      aux_sym__filename_password_continue_token2,
      anon_sym_LBRACE_LBRACE,
  [8951] = 5,
    ACTIONS(834), 1,
      sym_comment,
    ACTIONS(1317), 1,
      anon_sym_LF,
    ACTIONS(1440), 1,
      sym__eof,
    STATE(64), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(70), 2,
      sym__comment_or_new_line,
      sym__line_ending,
  [8968] = 2,
    ACTIONS(1442), 2,
      anon_sym_LF,
      sym_comment,
    ACTIONS(1444), 4,
      sym__eof,
      aux_sym__filename_password_continue_token1,
      aux_sym__filename_password_continue_token2,
      anon_sym_LBRACE_LBRACE,
  [8979] = 5,
    ACTIONS(834), 1,
      sym_comment,
    ACTIONS(1317), 1,
      anon_sym_LF,
    ACTIONS(1446), 1,
      sym__eof,
    STATE(64), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(69), 2,
      sym__comment_or_new_line,
      sym__line_ending,
  [8996] = 5,
    ACTIONS(1284), 1,
      anon_sym_LF,
    ACTIONS(1286), 1,
      sym_comment,
    ACTIONS(1448), 1,
      sym__eof,
    STATE(62), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(67), 2,
      sym__comment_or_new_line,
      sym__line_ending,
  [9013] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1311), 1,
      anon_sym_GT,
    ACTIONS(1313), 1,
      sym_xml_name,
    ACTIONS(1450), 1,
      anon_sym_SLASH_GT,
    STATE(259), 2,
      sym_xml_attribute,
      aux_sym_xml_self_closing_tag_repeat1,
  [9030] = 5,
    ACTIONS(1337), 1,
      anon_sym_LF,
    ACTIONS(1339), 1,
      sym_comment,
    ACTIONS(1452), 1,
      sym__eof,
    STATE(6), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(7), 2,
      sym__comment_or_new_line,
      sym__line_ending,
  [9047] = 3,
    ACTIONS(858), 1,
      sym_comment,
    ACTIONS(1373), 1,
      anon_sym_SEMI,
    ACTIONS(1375), 3,
      aux_sym__filename_password_continue_token1,
      anon_sym_LBRACE_LBRACE,
      aux_sym__filename_continue_token1,
  [9059] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1454), 1,
      anon_sym_SEMI,
    ACTIONS(1456), 1,
      aux_sym_hexdigit_token1,
    STATE(317), 2,
      sym_hexdigit,
      aux_sym_oneline_hex_repeat1,
  [9073] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(742), 1,
      anon_sym_LBRACE_LBRACE2,
    ACTIONS(1459), 1,
      aux_sym__unsigned_integer_token1,
    STATE(409), 2,
      sym_template,
      sym__unsigned_integer,
  [9087] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(742), 1,
      anon_sym_LBRACE_LBRACE2,
    ACTIONS(1461), 1,
      aux_sym__unsigned_integer_token1,
    STATE(374), 1,
      sym__unsigned_integer,
    STATE(402), 1,
      sym_template,
  [9103] = 5,
    ACTIONS(858), 1,
      sym_comment,
    ACTIONS(1463), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(1465), 1,
      aux_sym_raw_multiline_string_content_token1,
    ACTIONS(1468), 1,
      anon_sym_BQUOTE2,
    STATE(320), 1,
      aux_sym_raw_multiline_string_content_repeat1,
  [9119] = 4,
    ACTIONS(858), 1,
      sym_comment,
    ACTIONS(1473), 1,
      aux_sym_raw_multiline_string_content_token1,
    STATE(320), 1,
      aux_sym_raw_multiline_string_content_repeat1,
    ACTIONS(1471), 2,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_BQUOTE2,
  [9133] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1475), 1,
      anon_sym_DQUOTE,
    ACTIONS(1477), 1,
      anon_sym_SLASH,
    STATE(444), 2,
      sym_quoted_string,
      sym_regex,
  [9147] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1475), 1,
      anon_sym_DQUOTE,
    ACTIONS(1477), 1,
      anon_sym_SLASH,
    STATE(448), 2,
      sym_quoted_string,
      sym_regex,
  [9161] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(732), 1,
      anon_sym_DQUOTE,
    ACTIONS(746), 1,
      anon_sym_SLASH,
    STATE(98), 2,
      sym_quoted_string,
      sym_regex,
  [9175] = 3,
    ACTIONS(858), 1,
      sym_comment,
    ACTIONS(1369), 1,
      anon_sym_SEMI,
    ACTIONS(1371), 3,
      aux_sym__filename_password_continue_token1,
      anon_sym_LBRACE_LBRACE,
      aux_sym__filename_continue_token1,
  [9187] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(732), 1,
      anon_sym_DQUOTE,
    ACTIONS(746), 1,
      anon_sym_SLASH,
    STATE(103), 2,
      sym_quoted_string,
      sym_regex,
  [9201] = 3,
    ACTIONS(858), 1,
      sym_comment,
    ACTIONS(1377), 1,
      anon_sym_SEMI,
    ACTIONS(1379), 3,
      aux_sym__filename_password_continue_token1,
      anon_sym_LBRACE_LBRACE,
      aux_sym__filename_continue_token1,
  [9213] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1479), 4,
      anon_sym_COLON,
      anon_sym_LBRACE_LBRACE,
      sym_key_string_text,
      sym_key_string_escaped_char,
  [9223] = 3,
    ACTIONS(251), 1,
      aux_sym_multiline_string_content_token1,
    ACTIONS(858), 1,
      sym_comment,
    ACTIONS(253), 3,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      aux_sym_multiline_string_content_token2,
      anon_sym_LBRACE_LBRACE2,
  [9235] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1475), 1,
      anon_sym_DQUOTE,
    ACTIONS(1477), 1,
      anon_sym_SLASH,
    STATE(44), 2,
      sym_quoted_string,
      sym_regex,
  [9249] = 3,
    ACTIONS(253), 1,
      anon_sym_SEMI,
    ACTIONS(858), 1,
      sym_comment,
    ACTIONS(251), 3,
      aux_sym__filename_password_continue_token1,
      anon_sym_LBRACE_LBRACE,
      aux_sym__filename_continue_token1,
  [9261] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1481), 1,
      anon_sym_SEMI,
    ACTIONS(1483), 1,
      aux_sym_hexdigit_token1,
    STATE(341), 2,
      sym_hexdigit,
      aux_sym_oneline_hex_repeat1,
  [9275] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1475), 1,
      anon_sym_DQUOTE,
    ACTIONS(1477), 1,
      anon_sym_SLASH,
    STATE(26), 2,
      sym_quoted_string,
      sym_regex,
  [9289] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1475), 1,
      anon_sym_DQUOTE,
    ACTIONS(1477), 1,
      anon_sym_SLASH,
    STATE(396), 2,
      sym_quoted_string,
      sym_regex,
  [9303] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1475), 1,
      anon_sym_DQUOTE,
    ACTIONS(1477), 1,
      anon_sym_SLASH,
    STATE(459), 2,
      sym_quoted_string,
      sym_regex,
  [9317] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1345), 4,
      anon_sym_COLON,
      anon_sym_LBRACE_LBRACE,
      sym_key_string_text,
      sym_key_string_escaped_char,
  [9327] = 3,
    ACTIONS(858), 1,
      sym_comment,
    ACTIONS(1407), 1,
      anon_sym_SEMI,
    ACTIONS(1409), 3,
      aux_sym__filename_password_continue_token1,
      anon_sym_LBRACE_LBRACE,
      aux_sym__filename_continue_token1,
  [9339] = 3,
    ACTIONS(858), 1,
      sym_comment,
    ACTIONS(1343), 1,
      anon_sym_SEMI,
    ACTIONS(1345), 3,
      aux_sym__filename_password_continue_token1,
      anon_sym_LBRACE_LBRACE,
      aux_sym__filename_continue_token1,
  [9351] = 3,
    ACTIONS(858), 1,
      sym_comment,
    ACTIONS(1403), 1,
      anon_sym_SEMI,
    ACTIONS(1405), 3,
      aux_sym__filename_password_continue_token1,
      anon_sym_LBRACE_LBRACE,
      aux_sym__filename_continue_token1,
  [9363] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1485), 4,
      anon_sym_COLON,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [9373] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1483), 1,
      aux_sym_hexdigit_token1,
    ACTIONS(1487), 1,
      anon_sym_SEMI,
    STATE(317), 2,
      sym_hexdigit,
      aux_sym_oneline_hex_repeat1,
  [9387] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1489), 1,
      anon_sym_LT,
    STATE(342), 1,
      aux_sym_xml_repeat1,
    ACTIONS(1491), 2,
      sym_xml_prolog_tag,
      sym_xml_comment,
  [9401] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(818), 1,
      anon_sym_DQUOTE,
    STATE(451), 1,
      sym_json_key_value,
    STATE(528), 1,
      sym_json_key_string,
    STATE(530), 1,
      sym_json_string,
  [9417] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1494), 4,
      anon_sym_COLON,
      anon_sym_LBRACE_LBRACE,
      sym_key_string_text,
      sym_key_string_escaped_char,
  [9427] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1496), 4,
      anon_sym_COLON,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [9437] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(742), 1,
      anon_sym_LBRACE_LBRACE2,
    ACTIONS(1498), 1,
      sym_integer,
    STATE(102), 1,
      sym_template,
  [9450] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1500), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [9459] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1502), 1,
      anon_sym_COMMA,
    ACTIONS(1505), 1,
      anon_sym_RBRACK,
    STATE(348), 1,
      aux_sym_json_array_repeat1,
  [9472] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1507), 3,
      anon_sym_verbose,
      anon_sym_brief,
      anon_sym_debug,
  [9481] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(742), 1,
      anon_sym_LBRACE_LBRACE2,
    ACTIONS(1509), 1,
      aux_sym_count_option_token1,
    STATE(405), 1,
      sym_template,
  [9494] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1186), 1,
      anon_sym_COMMA,
    ACTIONS(1511), 1,
      anon_sym_RBRACE,
    STATE(359), 1,
      aux_sym_json_object_repeat1,
  [9507] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1513), 1,
      anon_sym_COMMA,
    ACTIONS(1515), 1,
      anon_sym_RBRACK,
    STATE(348), 1,
      aux_sym_json_array_repeat1,
  [9520] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(270), 1,
      sym_status,
    ACTIONS(1517), 2,
      aux_sym_status_token1,
      anon_sym_STAR,
  [9531] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1186), 1,
      anon_sym_COMMA,
    ACTIONS(1519), 1,
      anon_sym_RBRACE,
    STATE(359), 1,
      aux_sym_json_object_repeat1,
  [9544] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1186), 1,
      anon_sym_COMMA,
    ACTIONS(1519), 1,
      anon_sym_RBRACE,
    STATE(351), 1,
      aux_sym_json_object_repeat1,
  [9557] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1513), 1,
      anon_sym_COMMA,
    ACTIONS(1521), 1,
      anon_sym_RBRACK,
    STATE(352), 1,
      aux_sym_json_array_repeat1,
  [9570] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1513), 1,
      anon_sym_COMMA,
    ACTIONS(1523), 1,
      anon_sym_RBRACK,
    STATE(348), 1,
      aux_sym_json_array_repeat1,
  [9583] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1525), 3,
      anon_sym_GT,
      sym_xml_name,
      anon_sym_SLASH_GT,
  [9592] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1527), 1,
      anon_sym_RBRACE,
    ACTIONS(1529), 1,
      anon_sym_COMMA,
    STATE(359), 1,
      aux_sym_json_object_repeat1,
  [9605] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1186), 1,
      anon_sym_COMMA,
    ACTIONS(1532), 1,
      anon_sym_RBRACE,
    STATE(359), 1,
      aux_sym_json_object_repeat1,
  [9618] = 2,
    ACTIONS(858), 1,
      sym_comment,
    ACTIONS(1534), 3,
      anon_sym_SLASH,
      sym_regex_text,
      anon_sym_BSLASH,
  [9627] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1536), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [9636] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(826), 1,
      anon_sym_LBRACE_LBRACE2,
    ACTIONS(1538), 1,
      sym_integer,
    STATE(27), 1,
      sym_template,
  [9649] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1540), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [9658] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1542), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [9667] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1186), 1,
      anon_sym_COMMA,
    ACTIONS(1544), 1,
      anon_sym_RBRACE,
    STATE(359), 1,
      aux_sym_json_object_repeat1,
  [9680] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1546), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [9689] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1513), 1,
      anon_sym_COMMA,
    ACTIONS(1548), 1,
      anon_sym_RBRACK,
    STATE(357), 1,
      aux_sym_json_array_repeat1,
  [9702] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1186), 1,
      anon_sym_COMMA,
    ACTIONS(1544), 1,
      anon_sym_RBRACE,
    STATE(360), 1,
      aux_sym_json_object_repeat1,
  [9715] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1550), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [9724] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1552), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [9733] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1554), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [9742] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1556), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [9751] = 3,
    ACTIONS(1560), 1,
      sym_duration_unit,
    ACTIONS(1562), 1,
      sym_comment,
    ACTIONS(1558), 2,
      sym__eof,
      anon_sym_LF,
  [9762] = 2,
    ACTIONS(1566), 1,
      sym_comment,
    ACTIONS(1564), 2,
      sym__eof,
      anon_sym_LF,
  [9770] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1568), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [9778] = 2,
    ACTIONS(1572), 1,
      sym_comment,
    ACTIONS(1570), 2,
      sym__eof,
      anon_sym_LF,
  [9786] = 2,
    ACTIONS(1576), 1,
      sym_comment,
    ACTIONS(1574), 2,
      sym__eof,
      anon_sym_LF,
  [9794] = 2,
    ACTIONS(1580), 1,
      sym_comment,
    ACTIONS(1578), 2,
      sym__eof,
      anon_sym_LF,
  [9802] = 2,
    ACTIONS(1584), 1,
      sym_comment,
    ACTIONS(1582), 2,
      sym__eof,
      anon_sym_LF,
  [9810] = 2,
    ACTIONS(1588), 1,
      sym_comment,
    ACTIONS(1586), 2,
      sym__eof,
      anon_sym_LF,
  [9818] = 2,
    ACTIONS(1592), 1,
      sym_comment,
    ACTIONS(1590), 2,
      sym__eof,
      anon_sym_LF,
  [9826] = 2,
    ACTIONS(1596), 1,
      sym_comment,
    ACTIONS(1594), 2,
      sym__eof,
      anon_sym_LF,
  [9834] = 2,
    ACTIONS(1600), 1,
      sym_comment,
    ACTIONS(1598), 2,
      sym__eof,
      anon_sym_LF,
  [9842] = 2,
    ACTIONS(1604), 1,
      sym_comment,
    ACTIONS(1602), 2,
      sym__eof,
      anon_sym_LF,
  [9850] = 2,
    ACTIONS(1608), 1,
      sym_comment,
    ACTIONS(1606), 2,
      sym__eof,
      anon_sym_LF,
  [9858] = 2,
    ACTIONS(1612), 1,
      sym_comment,
    ACTIONS(1610), 2,
      sym__eof,
      anon_sym_LF,
  [9866] = 2,
    ACTIONS(1616), 1,
      sym_comment,
    ACTIONS(1614), 2,
      sym__eof,
      anon_sym_LF,
  [9874] = 2,
    ACTIONS(1620), 1,
      sym_comment,
    ACTIONS(1618), 2,
      sym__eof,
      anon_sym_LF,
  [9882] = 2,
    ACTIONS(1624), 1,
      sym_comment,
    ACTIONS(1622), 2,
      sym__eof,
      anon_sym_LF,
  [9890] = 2,
    ACTIONS(1628), 1,
      sym_comment,
    ACTIONS(1626), 2,
      sym__eof,
      anon_sym_LF,
  [9898] = 2,
    ACTIONS(1632), 1,
      sym_comment,
    ACTIONS(1630), 2,
      sym__eof,
      anon_sym_LF,
  [9906] = 2,
    ACTIONS(1636), 1,
      sym_comment,
    ACTIONS(1634), 2,
      sym__eof,
      anon_sym_LF,
  [9914] = 2,
    ACTIONS(1640), 1,
      sym_comment,
    ACTIONS(1638), 2,
      sym__eof,
      anon_sym_LF,
  [9922] = 2,
    ACTIONS(1644), 1,
      sym_comment,
    ACTIONS(1642), 2,
      sym__eof,
      anon_sym_LF,
  [9930] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1475), 1,
      anon_sym_DQUOTE,
    STATE(33), 1,
      sym_quoted_string,
  [9940] = 2,
    ACTIONS(1648), 1,
      sym_comment,
    ACTIONS(1646), 2,
      sym__eof,
      anon_sym_LF,
  [9948] = 2,
    ACTIONS(1652), 1,
      sym_comment,
    ACTIONS(1650), 2,
      sym__eof,
      anon_sym_LF,
  [9956] = 2,
    ACTIONS(1430), 1,
      sym_comment,
    ACTIONS(1434), 2,
      sym__eof,
      anon_sym_LF,
  [9964] = 2,
    ACTIONS(1656), 1,
      sym_comment,
    ACTIONS(1654), 2,
      sym__eof,
      anon_sym_LF,
  [9972] = 2,
    ACTIONS(1660), 1,
      sym_comment,
    ACTIONS(1658), 2,
      sym__eof,
      anon_sym_LF,
  [9980] = 2,
    ACTIONS(1562), 1,
      sym_comment,
    ACTIONS(1558), 2,
      sym__eof,
      anon_sym_LF,
  [9988] = 2,
    ACTIONS(1664), 1,
      sym_comment,
    ACTIONS(1662), 2,
      sym__eof,
      anon_sym_LF,
  [9996] = 2,
    ACTIONS(1211), 1,
      sym_comment,
    ACTIONS(1213), 2,
      sym__eof,
      anon_sym_LF,
  [10004] = 2,
    ACTIONS(1668), 1,
      sym_comment,
    ACTIONS(1666), 2,
      sym__eof,
      anon_sym_LF,
  [10012] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1670), 1,
      sym_variable_name,
    STATE(398), 1,
      sym_variable_definition,
  [10022] = 2,
    ACTIONS(1674), 1,
      sym_comment,
    ACTIONS(1672), 2,
      sym__eof,
      anon_sym_LF,
  [10030] = 2,
    ACTIONS(1678), 1,
      sym_comment,
    ACTIONS(1676), 2,
      sym__eof,
      anon_sym_LF,
  [10038] = 2,
    ACTIONS(1682), 1,
      sym_comment,
    ACTIONS(1680), 2,
      sym__eof,
      anon_sym_LF,
  [10046] = 2,
    ACTIONS(1686), 1,
      sym_comment,
    ACTIONS(1684), 2,
      sym__eof,
      anon_sym_LF,
  [10054] = 2,
    ACTIONS(1688), 1,
      sym_comment,
    ACTIONS(1536), 2,
      sym__eof,
      anon_sym_LF,
  [10062] = 2,
    ACTIONS(1219), 1,
      sym_comment,
    ACTIONS(1221), 2,
      sym__eof,
      anon_sym_LF,
  [10070] = 2,
    ACTIONS(1692), 1,
      sym_comment,
    ACTIONS(1690), 2,
      sym__eof,
      anon_sym_LF,
  [10078] = 2,
    ACTIONS(1227), 1,
      sym_comment,
    ACTIONS(1229), 2,
      sym__eof,
      anon_sym_LF,
  [10086] = 2,
    ACTIONS(1696), 1,
      sym_comment,
    ACTIONS(1694), 2,
      sym__eof,
      anon_sym_LF,
  [10094] = 2,
    ACTIONS(1698), 1,
      sym_comment,
    ACTIONS(1540), 2,
      sym__eof,
      anon_sym_LF,
  [10102] = 2,
    ACTIONS(1702), 1,
      sym_comment,
    ACTIONS(1700), 2,
      sym__eof,
      anon_sym_LF,
  [10110] = 2,
    ACTIONS(1704), 1,
      sym_comment,
    ACTIONS(1485), 2,
      sym__eof,
      anon_sym_LF,
  [10118] = 2,
    ACTIONS(1706), 1,
      sym_comment,
    ACTIONS(1556), 2,
      sym__eof,
      anon_sym_LF,
  [10126] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1708), 2,
      anon_sym_SEMI,
      aux_sym_hexdigit_token1,
  [10134] = 2,
    ACTIONS(1712), 1,
      sym_comment,
    ACTIONS(1710), 2,
      sym__eof,
      anon_sym_LF,
  [10142] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1505), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [10150] = 2,
    ACTIONS(1716), 1,
      sym_comment,
    ACTIONS(1714), 2,
      sym__eof,
      anon_sym_LF,
  [10158] = 2,
    ACTIONS(1720), 1,
      sym_comment,
    ACTIONS(1718), 2,
      sym__eof,
      anon_sym_LF,
  [10166] = 2,
    ACTIONS(1722), 1,
      sym_comment,
    ACTIONS(1496), 2,
      sym__eof,
      anon_sym_LF,
  [10174] = 2,
    ACTIONS(1726), 1,
      sym_comment,
    ACTIONS(1724), 2,
      sym__eof,
      anon_sym_LF,
  [10182] = 2,
    ACTIONS(1730), 1,
      sym_comment,
    ACTIONS(1728), 2,
      sym__eof,
      anon_sym_LF,
  [10190] = 2,
    ACTIONS(1734), 1,
      sym_comment,
    ACTIONS(1732), 2,
      sym__eof,
      anon_sym_LF,
  [10198] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(732), 1,
      anon_sym_DQUOTE,
    STATE(104), 1,
      sym_quoted_string,
  [10208] = 2,
    ACTIONS(1738), 1,
      sym_comment,
    ACTIONS(1736), 2,
      sym__eof,
      anon_sym_LF,
  [10216] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(732), 1,
      anon_sym_DQUOTE,
    STATE(112), 1,
      sym_quoted_string,
  [10226] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(732), 1,
      anon_sym_DQUOTE,
    STATE(93), 1,
      sym_quoted_string,
  [10236] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(732), 1,
      anon_sym_DQUOTE,
    STATE(99), 1,
      sym_quoted_string,
  [10246] = 2,
    ACTIONS(1742), 1,
      sym_comment,
    ACTIONS(1740), 2,
      sym__eof,
      anon_sym_LF,
  [10254] = 2,
    ACTIONS(1744), 1,
      sym_comment,
    ACTIONS(1546), 2,
      sym__eof,
      anon_sym_LF,
  [10262] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(732), 1,
      anon_sym_DQUOTE,
    STATE(107), 1,
      sym_quoted_string,
  [10272] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1475), 1,
      anon_sym_DQUOTE,
    STATE(28), 1,
      sym_quoted_string,
  [10282] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1746), 2,
      aux_sym_status_token1,
      anon_sym_STAR,
  [10290] = 2,
    ACTIONS(1750), 1,
      sym_comment,
    ACTIONS(1748), 2,
      sym__eof,
      anon_sym_LF,
  [10298] = 2,
    ACTIONS(1754), 1,
      sym_comment,
    ACTIONS(1752), 2,
      sym__eof,
      anon_sym_LF,
  [10306] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1475), 1,
      anon_sym_DQUOTE,
    STATE(30), 1,
      sym_quoted_string,
  [10316] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1475), 1,
      anon_sym_DQUOTE,
    STATE(29), 1,
      sym_quoted_string,
  [10326] = 2,
    ACTIONS(1758), 1,
      sym_comment,
    ACTIONS(1756), 2,
      sym__eof,
      anon_sym_LF,
  [10334] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(732), 1,
      anon_sym_DQUOTE,
    STATE(94), 1,
      sym_quoted_string,
  [10344] = 2,
    ACTIONS(1260), 1,
      sym_comment,
    ACTIONS(1262), 2,
      sym__eof,
      anon_sym_LF,
  [10352] = 2,
    ACTIONS(1762), 1,
      sym_comment,
    ACTIONS(1760), 2,
      sym__eof,
      anon_sym_LF,
  [10360] = 2,
    ACTIONS(1766), 1,
      sym_comment,
    ACTIONS(1764), 2,
      sym__eof,
      anon_sym_LF,
  [10368] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(732), 1,
      anon_sym_DQUOTE,
    STATE(95), 1,
      sym_quoted_string,
  [10378] = 2,
    ACTIONS(1770), 1,
      sym_comment,
    ACTIONS(1768), 2,
      sym__eof,
      anon_sym_LF,
  [10386] = 2,
    ACTIONS(1772), 1,
      sym_comment,
    ACTIONS(1554), 2,
      sym__eof,
      anon_sym_LF,
  [10394] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1527), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [10402] = 2,
    ACTIONS(1776), 1,
      sym_comment,
    ACTIONS(1774), 2,
      sym__eof,
      anon_sym_LF,
  [10410] = 2,
    ACTIONS(1778), 1,
      sym_comment,
    ACTIONS(1500), 2,
      sym__eof,
      anon_sym_LF,
  [10418] = 2,
    ACTIONS(1272), 1,
      sym_comment,
    ACTIONS(1274), 2,
      sym__eof,
      anon_sym_LF,
  [10426] = 2,
    ACTIONS(1782), 1,
      sym_comment,
    ACTIONS(1780), 2,
      sym__eof,
      anon_sym_LF,
  [10434] = 2,
    ACTIONS(1786), 1,
      sym_comment,
    ACTIONS(1784), 2,
      sym__eof,
      anon_sym_LF,
  [10442] = 2,
    ACTIONS(1788), 1,
      sym_comment,
    ACTIONS(1542), 2,
      sym__eof,
      anon_sym_LF,
  [10450] = 2,
    ACTIONS(1790), 1,
      sym_comment,
    ACTIONS(1552), 2,
      sym__eof,
      anon_sym_LF,
  [10458] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1475), 1,
      anon_sym_DQUOTE,
    STATE(25), 1,
      sym_quoted_string,
  [10468] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(732), 1,
      anon_sym_DQUOTE,
    STATE(101), 1,
      sym_quoted_string,
  [10478] = 2,
    ACTIONS(1794), 1,
      sym_comment,
    ACTIONS(1792), 2,
      sym__eof,
      anon_sym_LF,
  [10486] = 2,
    ACTIONS(1798), 1,
      sym_comment,
    ACTIONS(1796), 2,
      sym__eof,
      anon_sym_LF,
  [10494] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1475), 1,
      anon_sym_DQUOTE,
    STATE(45), 1,
      sym_quoted_string,
  [10504] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1475), 1,
      anon_sym_DQUOTE,
    STATE(43), 1,
      sym_quoted_string,
  [10514] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1475), 1,
      anon_sym_DQUOTE,
    STATE(41), 1,
      sym_quoted_string,
  [10524] = 2,
    ACTIONS(1802), 1,
      sym_comment,
    ACTIONS(1800), 2,
      sym__eof,
      anon_sym_LF,
  [10532] = 2,
    ACTIONS(1268), 1,
      sym_comment,
    ACTIONS(1270), 2,
      sym__eof,
      anon_sym_LF,
  [10540] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1475), 1,
      anon_sym_DQUOTE,
    STATE(35), 1,
      sym_quoted_string,
  [10550] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1475), 1,
      anon_sym_DQUOTE,
    STATE(40), 1,
      sym_quoted_string,
  [10560] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(251), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [10568] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(732), 1,
      anon_sym_DQUOTE,
    STATE(105), 1,
      sym_quoted_string,
  [10578] = 2,
    ACTIONS(1804), 1,
      sym_comment,
    ACTIONS(1550), 2,
      sym__eof,
      anon_sym_LF,
  [10586] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(732), 1,
      anon_sym_DQUOTE,
    STATE(106), 1,
      sym_quoted_string,
  [10596] = 2,
    ACTIONS(1808), 1,
      sym_comment,
    ACTIONS(1806), 2,
      sym__eof,
      anon_sym_LF,
  [10604] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1810), 1,
      anon_sym_RBRACE_RBRACE,
  [10611] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1812), 1,
      anon_sym_RBRACE_RBRACE,
  [10618] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1814), 1,
      anon_sym_RBRACE_RBRACE,
  [10625] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1816), 1,
      anon_sym_COLON,
  [10632] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1818), 1,
      anon_sym_RBRACE_RBRACE,
  [10639] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1820), 1,
      anon_sym_GT,
  [10646] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1822), 1,
      anon_sym_DQUOTE,
  [10653] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1824), 1,
      anon_sym_COLON,
  [10660] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1826), 1,
      anon_sym_COLON,
  [10667] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1828), 1,
      anon_sym_RBRACE_RBRACE,
  [10674] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1830), 1,
      anon_sym_SEMI,
  [10681] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1832), 1,
      sym_xml_name,
  [10688] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1834), 1,
      anon_sym_COLON,
  [10695] = 2,
    ACTIONS(858), 1,
      sym_comment,
    ACTIONS(1836), 1,
      aux_sym_oneline_base64_token1,
  [10702] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1838), 1,
      anon_sym_COLON,
  [10709] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1840), 1,
      anon_sym_COLON,
  [10716] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1842), 1,
      anon_sym_COLON,
  [10723] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1844), 1,
      anon_sym_COLON,
  [10730] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1846), 1,
      anon_sym_DQUOTE,
  [10737] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1848), 1,
      anon_sym_COLON,
  [10744] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1850), 1,
      anon_sym_GT,
  [10751] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1852), 1,
      anon_sym_COLON,
  [10758] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1854), 1,
      anon_sym_SLASH,
  [10765] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1856), 1,
      anon_sym_COLON,
  [10772] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1858), 1,
      anon_sym_COLON,
  [10779] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1860), 1,
      anon_sym_COLON,
  [10786] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1862), 1,
      anon_sym_COLON,
  [10793] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1864), 1,
      anon_sym_SEMI,
  [10800] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1866), 1,
      anon_sym_COLON,
  [10807] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1868), 1,
      anon_sym_SEMI,
  [10814] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1870), 1,
      anon_sym_DQUOTE,
  [10821] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1872), 1,
      anon_sym_RBRACE_RBRACE,
  [10828] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1874), 1,
      anon_sym_RBRACE_RBRACE,
  [10835] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1876), 1,
      anon_sym_RBRACE_RBRACE,
  [10842] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1878), 1,
      anon_sym_RBRACE_RBRACE,
  [10849] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1880), 1,
      anon_sym_RBRACE_RBRACE,
  [10856] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1882), 1,
      anon_sym_RBRACE_RBRACE,
  [10863] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1884), 1,
      anon_sym_RBRACE_RBRACE,
  [10870] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1886), 1,
      anon_sym_RBRACE_RBRACE,
  [10877] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1888), 1,
      anon_sym_DQUOTE,
  [10884] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1890), 1,
      anon_sym_RBRACE_RBRACE,
  [10891] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1892), 1,
      anon_sym_RBRACE_RBRACE,
  [10898] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1894), 1,
      sym_xml_name,
  [10905] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1896), 1,
      anon_sym_SLASH,
  [10912] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1898), 1,
      anon_sym_EQ,
  [10919] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1900), 1,
      anon_sym_EQ,
  [10926] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1902), 1,
      sym_xml_name,
  [10933] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1904), 1,
      ts_builtin_sym_end,
  [10940] = 2,
    ACTIONS(858), 1,
      sym_comment,
    ACTIONS(1906), 1,
      anon_sym_LF,
  [10947] = 2,
    ACTIONS(858), 1,
      sym_comment,
    ACTIONS(1908), 1,
      aux_sym_regex_escaped_char_token1,
  [10954] = 2,
    ACTIONS(858), 1,
      sym_comment,
    ACTIONS(1910), 1,
      anon_sym_LF,
  [10961] = 2,
    ACTIONS(858), 1,
      sym_comment,
    ACTIONS(1912), 1,
      anon_sym_LF,
  [10968] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1914), 1,
      sym_xml_attribute_value,
  [10975] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1916), 1,
      anon_sym_COLON,
  [10982] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1918), 1,
      anon_sym_COLON,
  [10989] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1920), 1,
      anon_sym_COLON,
  [10996] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1922), 1,
      sym_xml_name,
  [11003] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1924), 1,
      anon_sym_COLON,
  [11010] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1926), 1,
      anon_sym_COLON,
  [11017] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1928), 1,
      anon_sym_DQUOTE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(46)] = 0,
  [SMALL_STATE(47)] = 91,
  [SMALL_STATE(48)] = 182,
  [SMALL_STATE(49)] = 273,
  [SMALL_STATE(50)] = 361,
  [SMALL_STATE(51)] = 448,
  [SMALL_STATE(52)] = 535,
  [SMALL_STATE(53)] = 622,
  [SMALL_STATE(54)] = 709,
  [SMALL_STATE(55)] = 796,
  [SMALL_STATE(56)] = 883,
  [SMALL_STATE(57)] = 970,
  [SMALL_STATE(58)] = 1057,
  [SMALL_STATE(59)] = 1144,
  [SMALL_STATE(60)] = 1262,
  [SMALL_STATE(61)] = 1380,
  [SMALL_STATE(62)] = 1460,
  [SMALL_STATE(63)] = 1528,
  [SMALL_STATE(64)] = 1596,
  [SMALL_STATE(65)] = 1663,
  [SMALL_STATE(66)] = 1730,
  [SMALL_STATE(67)] = 1791,
  [SMALL_STATE(68)] = 1852,
  [SMALL_STATE(69)] = 1912,
  [SMALL_STATE(70)] = 1972,
  [SMALL_STATE(71)] = 2032,
  [SMALL_STATE(72)] = 2088,
  [SMALL_STATE(73)] = 2171,
  [SMALL_STATE(74)] = 2254,
  [SMALL_STATE(75)] = 2329,
  [SMALL_STATE(76)] = 2401,
  [SMALL_STATE(77)] = 2473,
  [SMALL_STATE(78)] = 2545,
  [SMALL_STATE(79)] = 2617,
  [SMALL_STATE(80)] = 2706,
  [SMALL_STATE(81)] = 2776,
  [SMALL_STATE(82)] = 2846,
  [SMALL_STATE(83)] = 2900,
  [SMALL_STATE(84)] = 2954,
  [SMALL_STATE(85)] = 3001,
  [SMALL_STATE(86)] = 3048,
  [SMALL_STATE(87)] = 3095,
  [SMALL_STATE(88)] = 3150,
  [SMALL_STATE(89)] = 3197,
  [SMALL_STATE(90)] = 3244,
  [SMALL_STATE(91)] = 3287,
  [SMALL_STATE(92)] = 3329,
  [SMALL_STATE(93)] = 3371,
  [SMALL_STATE(94)] = 3413,
  [SMALL_STATE(95)] = 3455,
  [SMALL_STATE(96)] = 3497,
  [SMALL_STATE(97)] = 3539,
  [SMALL_STATE(98)] = 3581,
  [SMALL_STATE(99)] = 3623,
  [SMALL_STATE(100)] = 3665,
  [SMALL_STATE(101)] = 3707,
  [SMALL_STATE(102)] = 3749,
  [SMALL_STATE(103)] = 3791,
  [SMALL_STATE(104)] = 3833,
  [SMALL_STATE(105)] = 3875,
  [SMALL_STATE(106)] = 3917,
  [SMALL_STATE(107)] = 3959,
  [SMALL_STATE(108)] = 4001,
  [SMALL_STATE(109)] = 4043,
  [SMALL_STATE(110)] = 4085,
  [SMALL_STATE(111)] = 4127,
  [SMALL_STATE(112)] = 4169,
  [SMALL_STATE(113)] = 4211,
  [SMALL_STATE(114)] = 4253,
  [SMALL_STATE(115)] = 4295,
  [SMALL_STATE(116)] = 4344,
  [SMALL_STATE(117)] = 4393,
  [SMALL_STATE(118)] = 4444,
  [SMALL_STATE(119)] = 4482,
  [SMALL_STATE(120)] = 4520,
  [SMALL_STATE(121)] = 4566,
  [SMALL_STATE(122)] = 4612,
  [SMALL_STATE(123)] = 4643,
  [SMALL_STATE(124)] = 4674,
  [SMALL_STATE(125)] = 4705,
  [SMALL_STATE(126)] = 4736,
  [SMALL_STATE(127)] = 4767,
  [SMALL_STATE(128)] = 4809,
  [SMALL_STATE(129)] = 4851,
  [SMALL_STATE(130)] = 4904,
  [SMALL_STATE(131)] = 4957,
  [SMALL_STATE(132)] = 5010,
  [SMALL_STATE(133)] = 5063,
  [SMALL_STATE(134)] = 5102,
  [SMALL_STATE(135)] = 5155,
  [SMALL_STATE(136)] = 5208,
  [SMALL_STATE(137)] = 5244,
  [SMALL_STATE(138)] = 5279,
  [SMALL_STATE(139)] = 5312,
  [SMALL_STATE(140)] = 5347,
  [SMALL_STATE(141)] = 5396,
  [SMALL_STATE(142)] = 5428,
  [SMALL_STATE(143)] = 5460,
  [SMALL_STATE(144)] = 5485,
  [SMALL_STATE(145)] = 5514,
  [SMALL_STATE(146)] = 5539,
  [SMALL_STATE(147)] = 5564,
  [SMALL_STATE(148)] = 5589,
  [SMALL_STATE(149)] = 5614,
  [SMALL_STATE(150)] = 5639,
  [SMALL_STATE(151)] = 5668,
  [SMALL_STATE(152)] = 5693,
  [SMALL_STATE(153)] = 5733,
  [SMALL_STATE(154)] = 5773,
  [SMALL_STATE(155)] = 5812,
  [SMALL_STATE(156)] = 5849,
  [SMALL_STATE(157)] = 5886,
  [SMALL_STATE(158)] = 5924,
  [SMALL_STATE(159)] = 5958,
  [SMALL_STATE(160)] = 5990,
  [SMALL_STATE(161)] = 6022,
  [SMALL_STATE(162)] = 6054,
  [SMALL_STATE(163)] = 6086,
  [SMALL_STATE(164)] = 6118,
  [SMALL_STATE(165)] = 6150,
  [SMALL_STATE(166)] = 6182,
  [SMALL_STATE(167)] = 6211,
  [SMALL_STATE(168)] = 6240,
  [SMALL_STATE(169)] = 6269,
  [SMALL_STATE(170)] = 6298,
  [SMALL_STATE(171)] = 6327,
  [SMALL_STATE(172)] = 6356,
  [SMALL_STATE(173)] = 6385,
  [SMALL_STATE(174)] = 6414,
  [SMALL_STATE(175)] = 6442,
  [SMALL_STATE(176)] = 6470,
  [SMALL_STATE(177)] = 6498,
  [SMALL_STATE(178)] = 6525,
  [SMALL_STATE(179)] = 6548,
  [SMALL_STATE(180)] = 6573,
  [SMALL_STATE(181)] = 6598,
  [SMALL_STATE(182)] = 6623,
  [SMALL_STATE(183)] = 6648,
  [SMALL_STATE(184)] = 6673,
  [SMALL_STATE(185)] = 6694,
  [SMALL_STATE(186)] = 6721,
  [SMALL_STATE(187)] = 6748,
  [SMALL_STATE(188)] = 6775,
  [SMALL_STATE(189)] = 6800,
  [SMALL_STATE(190)] = 6823,
  [SMALL_STATE(191)] = 6848,
  [SMALL_STATE(192)] = 6875,
  [SMALL_STATE(193)] = 6900,
  [SMALL_STATE(194)] = 6924,
  [SMALL_STATE(195)] = 6948,
  [SMALL_STATE(196)] = 6972,
  [SMALL_STATE(197)] = 6994,
  [SMALL_STATE(198)] = 7018,
  [SMALL_STATE(199)] = 7042,
  [SMALL_STATE(200)] = 7064,
  [SMALL_STATE(201)] = 7090,
  [SMALL_STATE(202)] = 7112,
  [SMALL_STATE(203)] = 7136,
  [SMALL_STATE(204)] = 7160,
  [SMALL_STATE(205)] = 7184,
  [SMALL_STATE(206)] = 7208,
  [SMALL_STATE(207)] = 7230,
  [SMALL_STATE(208)] = 7254,
  [SMALL_STATE(209)] = 7278,
  [SMALL_STATE(210)] = 7302,
  [SMALL_STATE(211)] = 7324,
  [SMALL_STATE(212)] = 7350,
  [SMALL_STATE(213)] = 7372,
  [SMALL_STATE(214)] = 7394,
  [SMALL_STATE(215)] = 7418,
  [SMALL_STATE(216)] = 7437,
  [SMALL_STATE(217)] = 7460,
  [SMALL_STATE(218)] = 7483,
  [SMALL_STATE(219)] = 7506,
  [SMALL_STATE(220)] = 7529,
  [SMALL_STATE(221)] = 7552,
  [SMALL_STATE(222)] = 7577,
  [SMALL_STATE(223)] = 7600,
  [SMALL_STATE(224)] = 7625,
  [SMALL_STATE(225)] = 7648,
  [SMALL_STATE(226)] = 7669,
  [SMALL_STATE(227)] = 7686,
  [SMALL_STATE(228)] = 7706,
  [SMALL_STATE(229)] = 7726,
  [SMALL_STATE(230)] = 7740,
  [SMALL_STATE(231)] = 7754,
  [SMALL_STATE(232)] = 7768,
  [SMALL_STATE(233)] = 7782,
  [SMALL_STATE(234)] = 7796,
  [SMALL_STATE(235)] = 7816,
  [SMALL_STATE(236)] = 7836,
  [SMALL_STATE(237)] = 7856,
  [SMALL_STATE(238)] = 7870,
  [SMALL_STATE(239)] = 7886,
  [SMALL_STATE(240)] = 7900,
  [SMALL_STATE(241)] = 7914,
  [SMALL_STATE(242)] = 7928,
  [SMALL_STATE(243)] = 7942,
  [SMALL_STATE(244)] = 7956,
  [SMALL_STATE(245)] = 7970,
  [SMALL_STATE(246)] = 7984,
  [SMALL_STATE(247)] = 8000,
  [SMALL_STATE(248)] = 8017,
  [SMALL_STATE(249)] = 8034,
  [SMALL_STATE(250)] = 8051,
  [SMALL_STATE(251)] = 8068,
  [SMALL_STATE(252)] = 8085,
  [SMALL_STATE(253)] = 8102,
  [SMALL_STATE(254)] = 8117,
  [SMALL_STATE(255)] = 8134,
  [SMALL_STATE(256)] = 8151,
  [SMALL_STATE(257)] = 8168,
  [SMALL_STATE(258)] = 8185,
  [SMALL_STATE(259)] = 8202,
  [SMALL_STATE(260)] = 8217,
  [SMALL_STATE(261)] = 8234,
  [SMALL_STATE(262)] = 8251,
  [SMALL_STATE(263)] = 8268,
  [SMALL_STATE(264)] = 8285,
  [SMALL_STATE(265)] = 8302,
  [SMALL_STATE(266)] = 8319,
  [SMALL_STATE(267)] = 8336,
  [SMALL_STATE(268)] = 8353,
  [SMALL_STATE(269)] = 8370,
  [SMALL_STATE(270)] = 8387,
  [SMALL_STATE(271)] = 8404,
  [SMALL_STATE(272)] = 8415,
  [SMALL_STATE(273)] = 8426,
  [SMALL_STATE(274)] = 8443,
  [SMALL_STATE(275)] = 8460,
  [SMALL_STATE(276)] = 8477,
  [SMALL_STATE(277)] = 8490,
  [SMALL_STATE(278)] = 8507,
  [SMALL_STATE(279)] = 8524,
  [SMALL_STATE(280)] = 8537,
  [SMALL_STATE(281)] = 8554,
  [SMALL_STATE(282)] = 8565,
  [SMALL_STATE(283)] = 8576,
  [SMALL_STATE(284)] = 8593,
  [SMALL_STATE(285)] = 8610,
  [SMALL_STATE(286)] = 8625,
  [SMALL_STATE(287)] = 8642,
  [SMALL_STATE(288)] = 8655,
  [SMALL_STATE(289)] = 8666,
  [SMALL_STATE(290)] = 8683,
  [SMALL_STATE(291)] = 8694,
  [SMALL_STATE(292)] = 8705,
  [SMALL_STATE(293)] = 8716,
  [SMALL_STATE(294)] = 8729,
  [SMALL_STATE(295)] = 8740,
  [SMALL_STATE(296)] = 8751,
  [SMALL_STATE(297)] = 8764,
  [SMALL_STATE(298)] = 8781,
  [SMALL_STATE(299)] = 8794,
  [SMALL_STATE(300)] = 8805,
  [SMALL_STATE(301)] = 8816,
  [SMALL_STATE(302)] = 8833,
  [SMALL_STATE(303)] = 8844,
  [SMALL_STATE(304)] = 8861,
  [SMALL_STATE(305)] = 8876,
  [SMALL_STATE(306)] = 8893,
  [SMALL_STATE(307)] = 8910,
  [SMALL_STATE(308)] = 8927,
  [SMALL_STATE(309)] = 8940,
  [SMALL_STATE(310)] = 8951,
  [SMALL_STATE(311)] = 8968,
  [SMALL_STATE(312)] = 8979,
  [SMALL_STATE(313)] = 8996,
  [SMALL_STATE(314)] = 9013,
  [SMALL_STATE(315)] = 9030,
  [SMALL_STATE(316)] = 9047,
  [SMALL_STATE(317)] = 9059,
  [SMALL_STATE(318)] = 9073,
  [SMALL_STATE(319)] = 9087,
  [SMALL_STATE(320)] = 9103,
  [SMALL_STATE(321)] = 9119,
  [SMALL_STATE(322)] = 9133,
  [SMALL_STATE(323)] = 9147,
  [SMALL_STATE(324)] = 9161,
  [SMALL_STATE(325)] = 9175,
  [SMALL_STATE(326)] = 9187,
  [SMALL_STATE(327)] = 9201,
  [SMALL_STATE(328)] = 9213,
  [SMALL_STATE(329)] = 9223,
  [SMALL_STATE(330)] = 9235,
  [SMALL_STATE(331)] = 9249,
  [SMALL_STATE(332)] = 9261,
  [SMALL_STATE(333)] = 9275,
  [SMALL_STATE(334)] = 9289,
  [SMALL_STATE(335)] = 9303,
  [SMALL_STATE(336)] = 9317,
  [SMALL_STATE(337)] = 9327,
  [SMALL_STATE(338)] = 9339,
  [SMALL_STATE(339)] = 9351,
  [SMALL_STATE(340)] = 9363,
  [SMALL_STATE(341)] = 9373,
  [SMALL_STATE(342)] = 9387,
  [SMALL_STATE(343)] = 9401,
  [SMALL_STATE(344)] = 9417,
  [SMALL_STATE(345)] = 9427,
  [SMALL_STATE(346)] = 9437,
  [SMALL_STATE(347)] = 9450,
  [SMALL_STATE(348)] = 9459,
  [SMALL_STATE(349)] = 9472,
  [SMALL_STATE(350)] = 9481,
  [SMALL_STATE(351)] = 9494,
  [SMALL_STATE(352)] = 9507,
  [SMALL_STATE(353)] = 9520,
  [SMALL_STATE(354)] = 9531,
  [SMALL_STATE(355)] = 9544,
  [SMALL_STATE(356)] = 9557,
  [SMALL_STATE(357)] = 9570,
  [SMALL_STATE(358)] = 9583,
  [SMALL_STATE(359)] = 9592,
  [SMALL_STATE(360)] = 9605,
  [SMALL_STATE(361)] = 9618,
  [SMALL_STATE(362)] = 9627,
  [SMALL_STATE(363)] = 9636,
  [SMALL_STATE(364)] = 9649,
  [SMALL_STATE(365)] = 9658,
  [SMALL_STATE(366)] = 9667,
  [SMALL_STATE(367)] = 9680,
  [SMALL_STATE(368)] = 9689,
  [SMALL_STATE(369)] = 9702,
  [SMALL_STATE(370)] = 9715,
  [SMALL_STATE(371)] = 9724,
  [SMALL_STATE(372)] = 9733,
  [SMALL_STATE(373)] = 9742,
  [SMALL_STATE(374)] = 9751,
  [SMALL_STATE(375)] = 9762,
  [SMALL_STATE(376)] = 9770,
  [SMALL_STATE(377)] = 9778,
  [SMALL_STATE(378)] = 9786,
  [SMALL_STATE(379)] = 9794,
  [SMALL_STATE(380)] = 9802,
  [SMALL_STATE(381)] = 9810,
  [SMALL_STATE(382)] = 9818,
  [SMALL_STATE(383)] = 9826,
  [SMALL_STATE(384)] = 9834,
  [SMALL_STATE(385)] = 9842,
  [SMALL_STATE(386)] = 9850,
  [SMALL_STATE(387)] = 9858,
  [SMALL_STATE(388)] = 9866,
  [SMALL_STATE(389)] = 9874,
  [SMALL_STATE(390)] = 9882,
  [SMALL_STATE(391)] = 9890,
  [SMALL_STATE(392)] = 9898,
  [SMALL_STATE(393)] = 9906,
  [SMALL_STATE(394)] = 9914,
  [SMALL_STATE(395)] = 9922,
  [SMALL_STATE(396)] = 9930,
  [SMALL_STATE(397)] = 9940,
  [SMALL_STATE(398)] = 9948,
  [SMALL_STATE(399)] = 9956,
  [SMALL_STATE(400)] = 9964,
  [SMALL_STATE(401)] = 9972,
  [SMALL_STATE(402)] = 9980,
  [SMALL_STATE(403)] = 9988,
  [SMALL_STATE(404)] = 9996,
  [SMALL_STATE(405)] = 10004,
  [SMALL_STATE(406)] = 10012,
  [SMALL_STATE(407)] = 10022,
  [SMALL_STATE(408)] = 10030,
  [SMALL_STATE(409)] = 10038,
  [SMALL_STATE(410)] = 10046,
  [SMALL_STATE(411)] = 10054,
  [SMALL_STATE(412)] = 10062,
  [SMALL_STATE(413)] = 10070,
  [SMALL_STATE(414)] = 10078,
  [SMALL_STATE(415)] = 10086,
  [SMALL_STATE(416)] = 10094,
  [SMALL_STATE(417)] = 10102,
  [SMALL_STATE(418)] = 10110,
  [SMALL_STATE(419)] = 10118,
  [SMALL_STATE(420)] = 10126,
  [SMALL_STATE(421)] = 10134,
  [SMALL_STATE(422)] = 10142,
  [SMALL_STATE(423)] = 10150,
  [SMALL_STATE(424)] = 10158,
  [SMALL_STATE(425)] = 10166,
  [SMALL_STATE(426)] = 10174,
  [SMALL_STATE(427)] = 10182,
  [SMALL_STATE(428)] = 10190,
  [SMALL_STATE(429)] = 10198,
  [SMALL_STATE(430)] = 10208,
  [SMALL_STATE(431)] = 10216,
  [SMALL_STATE(432)] = 10226,
  [SMALL_STATE(433)] = 10236,
  [SMALL_STATE(434)] = 10246,
  [SMALL_STATE(435)] = 10254,
  [SMALL_STATE(436)] = 10262,
  [SMALL_STATE(437)] = 10272,
  [SMALL_STATE(438)] = 10282,
  [SMALL_STATE(439)] = 10290,
  [SMALL_STATE(440)] = 10298,
  [SMALL_STATE(441)] = 10306,
  [SMALL_STATE(442)] = 10316,
  [SMALL_STATE(443)] = 10326,
  [SMALL_STATE(444)] = 10334,
  [SMALL_STATE(445)] = 10344,
  [SMALL_STATE(446)] = 10352,
  [SMALL_STATE(447)] = 10360,
  [SMALL_STATE(448)] = 10368,
  [SMALL_STATE(449)] = 10378,
  [SMALL_STATE(450)] = 10386,
  [SMALL_STATE(451)] = 10394,
  [SMALL_STATE(452)] = 10402,
  [SMALL_STATE(453)] = 10410,
  [SMALL_STATE(454)] = 10418,
  [SMALL_STATE(455)] = 10426,
  [SMALL_STATE(456)] = 10434,
  [SMALL_STATE(457)] = 10442,
  [SMALL_STATE(458)] = 10450,
  [SMALL_STATE(459)] = 10458,
  [SMALL_STATE(460)] = 10468,
  [SMALL_STATE(461)] = 10478,
  [SMALL_STATE(462)] = 10486,
  [SMALL_STATE(463)] = 10494,
  [SMALL_STATE(464)] = 10504,
  [SMALL_STATE(465)] = 10514,
  [SMALL_STATE(466)] = 10524,
  [SMALL_STATE(467)] = 10532,
  [SMALL_STATE(468)] = 10540,
  [SMALL_STATE(469)] = 10550,
  [SMALL_STATE(470)] = 10560,
  [SMALL_STATE(471)] = 10568,
  [SMALL_STATE(472)] = 10578,
  [SMALL_STATE(473)] = 10586,
  [SMALL_STATE(474)] = 10596,
  [SMALL_STATE(475)] = 10604,
  [SMALL_STATE(476)] = 10611,
  [SMALL_STATE(477)] = 10618,
  [SMALL_STATE(478)] = 10625,
  [SMALL_STATE(479)] = 10632,
  [SMALL_STATE(480)] = 10639,
  [SMALL_STATE(481)] = 10646,
  [SMALL_STATE(482)] = 10653,
  [SMALL_STATE(483)] = 10660,
  [SMALL_STATE(484)] = 10667,
  [SMALL_STATE(485)] = 10674,
  [SMALL_STATE(486)] = 10681,
  [SMALL_STATE(487)] = 10688,
  [SMALL_STATE(488)] = 10695,
  [SMALL_STATE(489)] = 10702,
  [SMALL_STATE(490)] = 10709,
  [SMALL_STATE(491)] = 10716,
  [SMALL_STATE(492)] = 10723,
  [SMALL_STATE(493)] = 10730,
  [SMALL_STATE(494)] = 10737,
  [SMALL_STATE(495)] = 10744,
  [SMALL_STATE(496)] = 10751,
  [SMALL_STATE(497)] = 10758,
  [SMALL_STATE(498)] = 10765,
  [SMALL_STATE(499)] = 10772,
  [SMALL_STATE(500)] = 10779,
  [SMALL_STATE(501)] = 10786,
  [SMALL_STATE(502)] = 10793,
  [SMALL_STATE(503)] = 10800,
  [SMALL_STATE(504)] = 10807,
  [SMALL_STATE(505)] = 10814,
  [SMALL_STATE(506)] = 10821,
  [SMALL_STATE(507)] = 10828,
  [SMALL_STATE(508)] = 10835,
  [SMALL_STATE(509)] = 10842,
  [SMALL_STATE(510)] = 10849,
  [SMALL_STATE(511)] = 10856,
  [SMALL_STATE(512)] = 10863,
  [SMALL_STATE(513)] = 10870,
  [SMALL_STATE(514)] = 10877,
  [SMALL_STATE(515)] = 10884,
  [SMALL_STATE(516)] = 10891,
  [SMALL_STATE(517)] = 10898,
  [SMALL_STATE(518)] = 10905,
  [SMALL_STATE(519)] = 10912,
  [SMALL_STATE(520)] = 10919,
  [SMALL_STATE(521)] = 10926,
  [SMALL_STATE(522)] = 10933,
  [SMALL_STATE(523)] = 10940,
  [SMALL_STATE(524)] = 10947,
  [SMALL_STATE(525)] = 10954,
  [SMALL_STATE(526)] = 10961,
  [SMALL_STATE(527)] = 10968,
  [SMALL_STATE(528)] = 10975,
  [SMALL_STATE(529)] = 10982,
  [SMALL_STATE(530)] = 10989,
  [SMALL_STATE(531)] = 10996,
  [SMALL_STATE(532)] = 11003,
  [SMALL_STATE(533)] = 11010,
  [SMALL_STATE(534)] = 11017,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hurl_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(302),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_options_section, 3, 0, 4),
  [15] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_options_section, 3, 0, 4),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(529),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(532),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(533),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(490),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(487),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(501),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(500),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(499),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(498),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(496),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_options_section, 2, 0, 4),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_options_section, 2, 0, 4),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_options_section_repeat1, 2, 0, 0),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_options_section_repeat1, 2, 0, 0),
  [45] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_options_section_repeat1, 2, 0, 0), SHIFT_REPEAT(529),
  [48] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_options_section_repeat1, 2, 0, 0), SHIFT_REPEAT(532),
  [51] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_options_section_repeat1, 2, 0, 0), SHIFT_REPEAT(533),
  [54] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_options_section_repeat1, 2, 0, 0), SHIFT_REPEAT(490),
  [57] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_options_section_repeat1, 2, 0, 0), SHIFT_REPEAT(487),
  [60] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_options_section_repeat1, 2, 0, 0), SHIFT_REPEAT(501),
  [63] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_options_section_repeat1, 2, 0, 0), SHIFT_REPEAT(500),
  [66] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_options_section_repeat1, 2, 0, 0), SHIFT_REPEAT(499),
  [69] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_options_section_repeat1, 2, 0, 0), SHIFT_REPEAT(498),
  [72] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_options_section_repeat1, 2, 0, 0), SHIFT_REPEAT(496),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__comment_or_new_line_repeat1, 2, 0, 0),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__comment_or_new_line_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__comment_or_new_line_repeat1, 2, 0, 0),
  [82] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__comment_or_new_line_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__comment_or_new_line, 1, 0, 0),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__comment_or_new_line, 1, 0, 0),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(442),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(441),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(466),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(334),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(437),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 3, 0, 0),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 3, 0, 0),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(273),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(274),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(275),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(277),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(278),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(280),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(211),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(458),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(486),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(488),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(332),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(287),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(223),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(450),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(265),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(472),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 2, 0, 0),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 2, 0, 0),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 4, 0, 0),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 4, 0, 0),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 5, 0, 0),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 5, 0, 0),
  [211] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_capture_repeat1, 2, 0, 0), SHIFT_REPEAT(31),
  [214] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_capture_repeat1, 2, 0, 0), SHIFT_REPEAT(442),
  [217] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_capture_repeat1, 2, 0, 0), SHIFT_REPEAT(441),
  [220] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_capture_repeat1, 2, 0, 0), SHIFT_REPEAT(333),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_capture_repeat1, 2, 0, 0),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_capture_repeat1, 2, 0, 0),
  [227] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_capture_repeat1, 2, 0, 0), SHIFT_REPEAT(363),
  [230] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_capture_repeat1, 2, 0, 0), SHIFT_REPEAT(334),
  [233] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_capture_repeat1, 2, 0, 0), SHIFT_REPEAT(335),
  [236] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_capture_repeat1, 2, 0, 0), SHIFT_REPEAT(437),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response, 3, 0, 0),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_response, 3, 0, 0),
  [243] = {.entry = {.count = 1, .reusable = false}}, SHIFT(306),
  [245] = {.entry = {.count = 1, .reusable = false}}, SHIFT(307),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response, 4, 0, 0),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_response, 4, 0, 0),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template, 3, 0, 3),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_template, 3, 0, 3),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_string, 2, 0, 0),
  [257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_string, 2, 0, 0),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regex, 2, 0, 0),
  [261] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_regex, 2, 0, 0),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_string, 3, 0, 0),
  [265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_string, 3, 0, 0),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regex, 3, 0, 0),
  [269] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_regex, 3, 0, 0),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_replace_regex_filter, 3, 0, 2),
  [273] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_replace_regex_filter, 3, 0, 2),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regex_filter, 2, 0, 2),
  [277] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_regex_filter, 2, 0, 2),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nth_filter, 2, 0, 2),
  [281] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nth_filter, 2, 0, 2),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_split_filter, 2, 0, 2),
  [285] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_split_filter, 2, 0, 2),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xpath_filter, 2, 0, 2),
  [289] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xpath_filter, 2, 0, 2),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_filter, 2, 0, 2),
  [293] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_filter, 2, 0, 2),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_filter_key, 1, 0, 2),
  [297] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_filter_key, 1, 0, 2),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filter, 1, 0, 0),
  [301] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_filter, 1, 0, 0),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_replace_filter, 3, 0, 2),
  [305] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_replace_filter, 3, 0, 2),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_query, 1, 0, 9),
  [309] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_query, 1, 0, 9),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_query, 2, 0, 9),
  [313] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_query, 2, 0, 9),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_asserts_section, 2, 0, 4),
  [317] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_asserts_section, 2, 0, 4),
  [319] = {.entry = {.count = 1, .reusable = false}}, SHIFT(469),
  [321] = {.entry = {.count = 1, .reusable = false}}, SHIFT(468),
  [323] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [325] = {.entry = {.count = 1, .reusable = false}}, SHIFT(465),
  [327] = {.entry = {.count = 1, .reusable = false}}, SHIFT(464),
  [329] = {.entry = {.count = 1, .reusable = false}}, SHIFT(463),
  [331] = {.entry = {.count = 1, .reusable = false}}, SHIFT(330),
  [333] = {.entry = {.count = 1, .reusable = false}}, SHIFT(505),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_certificate_query, 4, 0, 9),
  [337] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_certificate_query, 4, 0, 9),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query, 1, 0, 0),
  [341] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query, 1, 0, 0),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_asserts_section, 3, 0, 4),
  [345] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_asserts_section, 3, 0, 4),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_query, 2, 0, 9),
  [349] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header_query, 2, 0, 9),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cookie_query, 2, 0, 9),
  [353] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cookie_query, 2, 0, 9),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_asserts_section_repeat1, 2, 0, 0),
  [357] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_asserts_section_repeat1, 2, 0, 0),
  [359] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_asserts_section_repeat1, 2, 0, 0), SHIFT_REPEAT(469),
  [362] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_asserts_section_repeat1, 2, 0, 0), SHIFT_REPEAT(468),
  [365] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_asserts_section_repeat1, 2, 0, 0), SHIFT_REPEAT(34),
  [368] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_asserts_section_repeat1, 2, 0, 0), SHIFT_REPEAT(465),
  [371] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_asserts_section_repeat1, 2, 0, 0), SHIFT_REPEAT(464),
  [374] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_asserts_section_repeat1, 2, 0, 0), SHIFT_REPEAT(463),
  [377] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_asserts_section_repeat1, 2, 0, 0), SHIFT_REPEAT(330),
  [380] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_asserts_section_repeat1, 2, 0, 0), SHIFT_REPEAT(505),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xpath_query, 2, 0, 9),
  [385] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xpath_query, 2, 0, 9),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regex_query, 2, 0, 9),
  [389] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_regex_query, 2, 0, 9),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jsonpath_query, 2, 0, 9),
  [393] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_jsonpath_query, 2, 0, 9),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_multipart_form_data_section_repeat1, 2, 0, 0),
  [397] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_multipart_form_data_section_repeat1, 2, 0, 0),
  [399] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_multipart_form_data_section_repeat1, 2, 0, 0), SHIFT_REPEAT(283),
  [402] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multipart_form_data_section_repeat1, 2, 0, 0), SHIFT_REPEAT(287),
  [405] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_multipart_form_data_section_repeat1, 2, 0, 0), SHIFT_REPEAT(287),
  [408] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_multipart_form_data_section_repeat1, 2, 0, 0), SHIFT_REPEAT(328),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multipart_form_data_section, 2, 0, 4),
  [413] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multipart_form_data_section, 2, 0, 4),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multipart_form_data_section, 3, 0, 4),
  [417] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multipart_form_data_section, 3, 0, 4),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_request_repeat1, 2, 0, 0),
  [421] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_request_repeat1, 2, 0, 0),
  [423] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_request_repeat1, 2, 0, 0), SHIFT_REPEAT(283),
  [426] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat1, 2, 0, 0), SHIFT_REPEAT(287),
  [429] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_request_repeat1, 2, 0, 0), SHIFT_REPEAT(287),
  [432] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_request_repeat1, 2, 0, 0), SHIFT_REPEAT(328),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cookies_section, 2, 0, 4),
  [437] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cookies_section, 2, 0, 4),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_basic_auth_section, 3, 0, 4),
  [441] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_basic_auth_section, 3, 0, 4),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_basic_auth_section, 2, 0, 4),
  [445] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_basic_auth_section, 2, 0, 4),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_string_params_section, 3, 0, 4),
  [449] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query_string_params_section, 3, 0, 4),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_form_params_section, 2, 0, 4),
  [453] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_form_params_section, 2, 0, 4),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_string_params_section, 2, 0, 4),
  [457] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query_string_params_section, 2, 0, 4),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_form_params_section, 3, 0, 4),
  [461] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_form_params_section, 3, 0, 4),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_basic_auth_section_repeat1, 2, 0, 0),
  [465] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_basic_auth_section_repeat1, 2, 0, 0),
  [467] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_basic_auth_section_repeat1, 2, 0, 0), SHIFT_REPEAT(283),
  [470] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_basic_auth_section_repeat1, 2, 0, 0), SHIFT_REPEAT(287),
  [473] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_basic_auth_section_repeat1, 2, 0, 0), SHIFT_REPEAT(287),
  [476] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_basic_auth_section_repeat1, 2, 0, 0), SHIFT_REPEAT(328),
  [479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cookies_section, 3, 0, 4),
  [481] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cookies_section, 3, 0, 4),
  [483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response, 5, 0, 0),
  [485] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_response, 5, 0, 0),
  [487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_request_repeat2, 2, 0, 0),
  [489] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_request_repeat2, 2, 0, 0),
  [491] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat2, 2, 0, 0), SHIFT_REPEAT(273),
  [494] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat2, 2, 0, 0), SHIFT_REPEAT(274),
  [497] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat2, 2, 0, 0), SHIFT_REPEAT(275),
  [500] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat2, 2, 0, 0), SHIFT_REPEAT(277),
  [503] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat2, 2, 0, 0), SHIFT_REPEAT(278),
  [506] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat2, 2, 0, 0), SHIFT_REPEAT(280),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [511] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [513] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__comment_or_new_line_repeat1, 2, 0, 0), SHIFT_REPEAT(63),
  [516] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__comment_or_new_line_repeat1, 2, 0, 0), SHIFT_REPEAT(63),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [521] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [523] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__comment_or_new_line_repeat1, 2, 0, 0), SHIFT_REPEAT(65),
  [526] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__comment_or_new_line_repeat1, 2, 0, 0), SHIFT_REPEAT(65),
  [529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assert, 4, 0, 0),
  [531] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assert, 4, 0, 0),
  [533] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assert, 3, 0, 0),
  [535] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assert, 3, 0, 0),
  [537] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 2, 0, 0),
  [539] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 2, 0, 0),
  [541] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request_section, 1, 0, 0),
  [543] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request_section, 1, 0, 0),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [547] = {.entry = {.count = 1, .reusable = false}}, SHIFT(305),
  [549] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [551] = {.entry = {.count = 1, .reusable = false}}, SHIFT(473),
  [553] = {.entry = {.count = 1, .reusable = false}}, SHIFT(471),
  [555] = {.entry = {.count = 1, .reusable = false}}, SHIFT(326),
  [557] = {.entry = {.count = 1, .reusable = false}}, SHIFT(346),
  [559] = {.entry = {.count = 1, .reusable = false}}, SHIFT(323),
  [561] = {.entry = {.count = 1, .reusable = false}}, SHIFT(322),
  [563] = {.entry = {.count = 1, .reusable = false}}, SHIFT(460),
  [565] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [569] = {.entry = {.count = 1, .reusable = false}}, SHIFT(303),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [573] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_captures_section, 3, 0, 4),
  [575] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_captures_section, 3, 0, 4),
  [577] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_captures_section, 2, 0, 4),
  [579] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_captures_section, 2, 0, 4),
  [581] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_captures_section_repeat1, 2, 0, 0),
  [583] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_captures_section_repeat1, 2, 0, 0),
  [585] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_captures_section_repeat1, 2, 0, 0), SHIFT_REPEAT(283),
  [588] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_captures_section_repeat1, 2, 0, 0), SHIFT_REPEAT(287),
  [591] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_captures_section_repeat1, 2, 0, 0), SHIFT_REPEAT(287),
  [594] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_captures_section_repeat1, 2, 0, 0), SHIFT_REPEAT(328),
  [597] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_capture_repeat1, 2, 0, 0), SHIFT_REPEAT(91),
  [600] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_capture_repeat1, 2, 0, 0), SHIFT_REPEAT(473),
  [603] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_capture_repeat1, 2, 0, 0), SHIFT_REPEAT(471),
  [606] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_capture_repeat1, 2, 0, 0), SHIFT_REPEAT(326),
  [609] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_capture_repeat1, 2, 0, 0), SHIFT_REPEAT(346),
  [612] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_capture_repeat1, 2, 0, 0), SHIFT_REPEAT(323),
  [615] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_capture_repeat1, 2, 0, 0), SHIFT_REPEAT(322),
  [618] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_capture_repeat1, 2, 0, 0), SHIFT_REPEAT(460),
  [621] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 2, 0, 0),
  [623] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 1, 0, 0),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [627] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [629] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__comment_or_new_line_repeat1, 2, 0, 0), SHIFT_REPEAT(83),
  [632] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__comment_or_new_line_repeat1, 2, 0, 0), SHIFT_REPEAT(83),
  [635] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_capture, 4, 0, 0),
  [637] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_capture, 4, 0, 0),
  [639] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_capture, 5, 0, 14),
  [641] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_capture, 5, 0, 14),
  [643] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_capture, 5, 0, 0),
  [645] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_capture, 5, 0, 0),
  [647] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_response_repeat1, 2, 0, 0),
  [649] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_response_repeat1, 2, 0, 0),
  [651] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_response_repeat1, 2, 0, 0), SHIFT_REPEAT(306),
  [654] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_response_repeat1, 2, 0, 0), SHIFT_REPEAT(307),
  [657] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_capture, 6, 0, 15),
  [659] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_capture, 6, 0, 15),
  [661] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response_section, 1, 0, 0),
  [663] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_response_section, 1, 0, 0),
  [665] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 1, 0, 0),
  [667] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function, 1, 0, 0),
  [669] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entry, 1, 0, 0),
  [671] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_entry, 1, 0, 0),
  [673] = {.entry = {.count = 1, .reusable = false}}, SHIFT(438),
  [675] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entry, 2, 0, 0),
  [677] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_entry, 2, 0, 0),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(431),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(534),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [697] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [699] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__comment_or_new_line_repeat1, 2, 0, 0), SHIFT_REPEAT(119),
  [702] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__comment_or_new_line_repeat1, 2, 0, 0), SHIFT_REPEAT(119),
  [705] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_hurl_file_repeat1, 2, 0, 0),
  [707] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_hurl_file_repeat1, 2, 0, 0), SHIFT_REPEAT(144),
  [710] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_hurl_file_repeat1, 2, 0, 0), SHIFT_REPEAT(302),
  [713] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_hurl_file_repeat1, 2, 0, 0), SHIFT_REPEAT(144),
  [716] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hurl_file, 1, 0, 0),
  [718] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 6, 0, 0),
  [720] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 6, 0, 0),
  [722] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 2, 0, 0),
  [724] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_body, 2, 0, 0),
  [726] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hurl_file, 2, 0, 0),
  [728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(488),
  [736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [744] = {.entry = {.count = 1, .reusable = false}}, SHIFT(378),
  [746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [750] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [752] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_hurl_file_repeat2, 2, 0, 0),
  [754] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_hurl_file_repeat2, 2, 0, 0), SHIFT_REPEAT(142),
  [757] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_hurl_file_repeat2, 2, 0, 0),
  [759] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_hurl_file_repeat2, 2, 0, 0), SHIFT_REPEAT(142),
  [762] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entry, 3, 0, 0),
  [764] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_entry, 3, 0, 0),
  [766] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_hurl_file_repeat2, 2, 0, 0), SHIFT_REPEAT(144),
  [769] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_hurl_file_repeat2, 2, 0, 0), SHIFT_REPEAT(144),
  [772] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_definition, 2, 0, 0),
  [774] = {.entry = {.count = 1, .reusable = false}}, SHIFT(400),
  [776] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [778] = {.entry = {.count = 1, .reusable = false}}, SHIFT(246),
  [780] = {.entry = {.count = 1, .reusable = false}}, SHIFT(213),
  [782] = {.entry = {.count = 1, .reusable = false}}, SHIFT(415),
  [784] = {.entry = {.count = 1, .reusable = false}}, SHIFT(267),
  [786] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 2, 0, 0),
  [788] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__comment_or_new_line_repeat1, 2, 0, 0), SHIFT_REPEAT(141),
  [791] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__comment_or_new_line_repeat1, 2, 0, 0), SHIFT_REPEAT(141),
  [794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [796] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [798] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response, 6, 0, 0),
  [800] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_response, 6, 0, 0),
  [802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [804] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [806] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entry, 4, 0, 0),
  [808] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_entry, 4, 0, 0),
  [810] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__comment_or_new_line_repeat1, 2, 0, 0), SHIFT_REPEAT(150),
  [813] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__comment_or_new_line_repeat1, 2, 0, 0), SHIFT_REPEAT(150),
  [816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [820] = {.entry = {.count = 1, .reusable = false}}, SHIFT(221),
  [822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(435),
  [824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [834] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [840] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_key_value, 2, 0, 0),
  [842] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [844] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_value, 2, 0, 0),
  [846] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_option, 2, 0, 8),
  [848] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_option, 2, 0, 8),
  [850] = {.entry = {.count = 1, .reusable = false}}, SHIFT(517),
  [852] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [854] = {.entry = {.count = 1, .reusable = false}}, SHIFT(531),
  [856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [858] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [860] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [862] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_file_value, 2, 0, 0),
  [864] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_value, 2, 0, 0),
  [866] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [868] = {.entry = {.count = 1, .reusable = false}}, SHIFT(521),
  [870] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_file_value, 3, 0, 0),
  [872] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_value, 3, 0, 0),
  [874] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_string, 1, 0, 0),
  [876] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_string, 1, 0, 0),
  [878] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_quoted_string_repeat1, 2, 0, 0),
  [880] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quoted_string_repeat1, 2, 0, 0), SHIFT_REPEAT(232),
  [883] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_string_repeat1, 2, 0, 0), SHIFT_REPEAT(232),
  [886] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_string_repeat1, 2, 0, 0), SHIFT_REPEAT(206),
  [889] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_string_repeat1, 2, 0, 0), SHIFT_REPEAT(252),
  [892] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [894] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [896] = {.entry = {.count = 1, .reusable = false}}, SHIFT(232),
  [898] = {.entry = {.count = 1, .reusable = false}}, SHIFT(206),
  [900] = {.entry = {.count = 1, .reusable = false}}, SHIFT(252),
  [902] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [904] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_value_string_repeat1, 2, 0, 0),
  [906] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_string_repeat1, 2, 0, 0), SHIFT_REPEAT(246),
  [909] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_string_repeat1, 2, 0, 0), SHIFT_REPEAT(213),
  [912] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_string_repeat1, 2, 0, 0), SHIFT_REPEAT(267),
  [915] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_value_string_repeat1, 2, 0, 0),
  [917] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_xml_tag_repeat1, 2, 0, 0), SHIFT_REPEAT(517),
  [920] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_xml_tag_repeat1, 2, 0, 0), SHIFT_REPEAT(171),
  [923] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_xml_tag_repeat1, 2, 0, 0),
  [925] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_xml_tag_repeat1, 2, 0, 0), SHIFT_REPEAT(239),
  [928] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [930] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [932] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_oneline_string_repeat1, 2, 0, 0), SHIFT_REPEAT(298),
  [935] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_oneline_string_repeat1, 2, 0, 0),
  [937] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_oneline_string_repeat1, 2, 0, 0), SHIFT_REPEAT(298),
  [940] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_oneline_string_repeat1, 2, 0, 0), SHIFT_REPEAT(226),
  [943] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_oneline_string_repeat1, 2, 0, 0), SHIFT_REPEAT(255),
  [946] = {.entry = {.count = 1, .reusable = false}}, SHIFT(298),
  [948] = {.entry = {.count = 1, .reusable = false}}, SHIFT(443),
  [950] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [952] = {.entry = {.count = 1, .reusable = false}}, SHIFT(226),
  [954] = {.entry = {.count = 1, .reusable = false}}, SHIFT(255),
  [956] = {.entry = {.count = 1, .reusable = false}}, SHIFT(417),
  [958] = {.entry = {.count = 1, .reusable = false}}, SHIFT(418),
  [960] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [962] = {.entry = {.count = 1, .reusable = false}}, SHIFT(293),
  [964] = {.entry = {.count = 1, .reusable = false}}, SHIFT(296),
  [966] = {.entry = {.count = 1, .reusable = false}}, SHIFT(256),
  [968] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [970] = {.entry = {.count = 1, .reusable = false}}, SHIFT(387),
  [972] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [974] = {.entry = {.count = 1, .reusable = false}}, SHIFT(386),
  [976] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [978] = {.entry = {.count = 1, .reusable = false}}, SHIFT(385),
  [980] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [982] = {.entry = {.count = 1, .reusable = false}}, SHIFT(384),
  [984] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [986] = {.entry = {.count = 1, .reusable = false}}, SHIFT(383),
  [988] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [990] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [992] = {.entry = {.count = 1, .reusable = false}}, SHIFT(523),
  [994] = {.entry = {.count = 1, .reusable = false}}, SHIFT(525),
  [996] = {.entry = {.count = 1, .reusable = false}}, SHIFT(340),
  [998] = {.entry = {.count = 1, .reusable = false}}, SHIFT(425),
  [1000] = {.entry = {.count = 1, .reusable = false}}, SHIFT(345),
  [1002] = {.entry = {.count = 1, .reusable = false}}, SHIFT(388),
  [1004] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [1006] = {.entry = {.count = 1, .reusable = false}}, SHIFT(389),
  [1008] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [1010] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_json_string_repeat1, 2, 0, 0),
  [1012] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_json_string_repeat1, 2, 0, 0), SHIFT_REPEAT(293),
  [1015] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_string_repeat1, 2, 0, 0), SHIFT_REPEAT(293),
  [1018] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_string_repeat1, 2, 0, 0), SHIFT_REPEAT(296),
  [1021] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_string_repeat1, 2, 0, 0), SHIFT_REPEAT(256),
  [1024] = {.entry = {.count = 1, .reusable = false}}, SHIFT(390),
  [1026] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [1028] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_filename_repeat1, 2, 0, 0),
  [1030] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_filename_repeat1, 2, 0, 0), SHIFT_REPEAT(292),
  [1033] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_filename_repeat1, 2, 0, 0), SHIFT_REPEAT(260),
  [1036] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_filename_repeat1, 2, 0, 0), SHIFT_REPEAT(291),
  [1039] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_filename_repeat1, 2, 0, 0),
  [1041] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_string, 2, 0, 1),
  [1043] = {.entry = {.count = 1, .reusable = false}}, SHIFT(449),
  [1045] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [1047] = {.entry = {.count = 1, .reusable = false}}, SHIFT(285),
  [1049] = {.entry = {.count = 1, .reusable = false}}, SHIFT(254),
  [1051] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_value_string_content_repeat1, 2, 0, 0),
  [1053] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_string_content_repeat1, 2, 0, 0), SHIFT_REPEAT(246),
  [1056] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_string_content_repeat1, 2, 0, 0), SHIFT_REPEAT(196),
  [1059] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_value_string_content_repeat1, 2, 0, 0),
  [1061] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_filename, 2, 0, 0),
  [1063] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [1065] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [1067] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [1069] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filename, 2, 0, 0),
  [1071] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_string, 2, 0, 0),
  [1073] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_filename_password, 1, 0, 0),
  [1075] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [1077] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [1079] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filename_password, 1, 0, 0),
  [1081] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [1083] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [1085] = {.entry = {.count = 1, .reusable = false}}, SHIFT(339),
  [1087] = {.entry = {.count = 1, .reusable = false}}, SHIFT(258),
  [1089] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_quoted_string_content_repeat1, 2, 0, 0),
  [1091] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quoted_string_content_repeat1, 2, 0, 0), SHIFT_REPEAT(232),
  [1094] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_string_content_repeat1, 2, 0, 0), SHIFT_REPEAT(232),
  [1097] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_string_content_repeat1, 2, 0, 0), SHIFT_REPEAT(201),
  [1100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_multiline_string_repeat2, 2, 0, 0),
  [1102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_multiline_string_repeat2, 2, 0, 0), SHIFT_REPEAT(285),
  [1105] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multiline_string_repeat2, 2, 0, 0), SHIFT_REPEAT(285),
  [1108] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multiline_string_repeat2, 2, 0, 0), SHIFT_REPEAT(254),
  [1111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(430),
  [1113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(413),
  [1115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_string, 1, 0, 1),
  [1117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_string_content, 1, 0, 0),
  [1119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(201),
  [1121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_string, 1, 0, 0),
  [1123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_filename, 1, 0, 0),
  [1125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filename, 1, 0, 0),
  [1127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_filename_password_repeat1, 2, 0, 0),
  [1129] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_filename_password_repeat1, 2, 0, 0), SHIFT_REPEAT(309),
  [1132] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_filename_password_repeat1, 2, 0, 0), SHIFT_REPEAT(257),
  [1135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_filename_password_repeat1, 2, 0, 0),
  [1137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(434),
  [1139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_filename_password, 2, 0, 0),
  [1141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filename_password, 2, 0, 0),
  [1143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_string_content, 1, 0, 0),
  [1145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [1147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_string_content, 1, 0, 0),
  [1149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_key_string_repeat1, 2, 0, 0),
  [1151] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_string_repeat1, 2, 0, 0), SHIFT_REPEAT(283),
  [1154] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_string_repeat1, 2, 0, 0), SHIFT_REPEAT(287),
  [1157] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_filename_repeat1, 2, 0, 0), SHIFT_REPEAT(327),
  [1160] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_filename_repeat1, 2, 0, 0), SHIFT_REPEAT(264),
  [1163] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_filename_repeat1, 2, 0, 0), SHIFT_REPEAT(316),
  [1166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [1168] = {.entry = {.count = 1, .reusable = false}}, SHIFT(295),
  [1170] = {.entry = {.count = 1, .reusable = false}}, SHIFT(249),
  [1172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [1174] = {.entry = {.count = 1, .reusable = false}}, SHIFT(299),
  [1176] = {.entry = {.count = 1, .reusable = false}}, SHIFT(250),
  [1178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [1180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [1182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [1184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [1186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [1188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [1190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [1192] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_oneline_string_content_repeat1, 2, 0, 0), SHIFT_REPEAT(298),
  [1195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_oneline_string_content_repeat1, 2, 0, 0),
  [1197] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_oneline_string_content_repeat1, 2, 0, 0), SHIFT_REPEAT(298),
  [1200] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_oneline_string_content_repeat1, 2, 0, 0), SHIFT_REPEAT(225),
  [1203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneline_string_content, 1, 0, 0),
  [1205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneline_string_content, 1, 0, 0),
  [1207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [1209] = {.entry = {.count = 1, .reusable = false}}, SHIFT(321),
  [1211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xml_tag, 2, 0, 0),
  [1213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xml_tag, 2, 0, 0),
  [1215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xml_open_tag, 4, 0, 0),
  [1217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xml_open_tag, 4, 0, 0),
  [1219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xml_self_closing_tag, 4, 0, 0),
  [1221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xml_self_closing_tag, 4, 0, 0),
  [1223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_string_text, 1, 0, 0),
  [1225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_string_text, 1, 0, 0),
  [1227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xml_self_closing_tag, 3, 0, 0),
  [1229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xml_self_closing_tag, 3, 0, 0),
  [1231] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [1233] = {.entry = {.count = 1, .reusable = false}}, SHIFT(263),
  [1235] = {.entry = {.count = 1, .reusable = false}}, SHIFT(524),
  [1237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_multiline_string_repeat1, 2, 0, 0),
  [1239] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_multiline_string_repeat1, 2, 0, 0), SHIFT_REPEAT(321),
  [1242] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multiline_string_repeat1, 2, 0, 0), SHIFT_REPEAT(321),
  [1245] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [1247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(481),
  [1249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_value_string_text_repeat1, 2, 0, 0),
  [1251] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_string_text_repeat1, 2, 0, 0), SHIFT_REPEAT(238),
  [1254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_value_string_text_repeat1, 2, 0, 0),
  [1256] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xml_value_string, 1, 0, 0),
  [1258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xml_value_string, 1, 0, 0),
  [1260] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xml_tag, 1, 0, 0),
  [1262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xml_tag, 1, 0, 0),
  [1264] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xml_open_tag, 3, 0, 0),
  [1266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xml_open_tag, 3, 0, 0),
  [1268] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xml_tag, 3, 0, 0),
  [1270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xml_tag, 3, 0, 0),
  [1272] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xml_close_tag, 3, 0, 0),
  [1274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xml_close_tag, 3, 0, 0),
  [1276] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_string_text, 1, 0, 0),
  [1278] = {.entry = {.count = 1, .reusable = false}}, SHIFT(238),
  [1280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_string_text, 1, 0, 0),
  [1282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [1284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [1286] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [1288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [1290] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [1292] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [1294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_xml_self_closing_tag_repeat1, 2, 0, 0),
  [1296] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_xml_self_closing_tag_repeat1, 2, 0, 0), SHIFT_REPEAT(520),
  [1299] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_multiline_string_content_repeat1, 2, 0, 0),
  [1301] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_multiline_string_content_repeat1, 2, 0, 0), SHIFT_REPEAT(262),
  [1304] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multiline_string_content_repeat1, 2, 0, 0), SHIFT_REPEAT(262),
  [1307] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_regex_content, 1, 0, 0),
  [1309] = {.entry = {.count = 1, .reusable = false}}, SHIFT(289),
  [1311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [1313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(520),
  [1315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [1317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [1319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [1321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [1323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [1325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [1327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [1329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [1331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [1333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [1335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [1337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [1339] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [1341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [1343] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__key_template, 3, 0, 7),
  [1345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__key_template, 3, 0, 7),
  [1347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [1349] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline_string_content, 1, 0, 0),
  [1351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_string_content, 1, 0, 0),
  [1353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [1355] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [1357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [1359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_string_content, 1, 0, 0),
  [1361] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_regex_content_repeat1, 2, 0, 0),
  [1363] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_regex_content_repeat1, 2, 0, 0), SHIFT_REPEAT(289),
  [1366] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_regex_content_repeat1, 2, 0, 0), SHIFT_REPEAT(524),
  [1369] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_filename_repeat1, 1, 0, 1),
  [1371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_filename_repeat1, 1, 0, 1),
  [1373] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__filename_continue, 1, 0, 0),
  [1375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__filename_continue, 1, 0, 0),
  [1377] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__filename_continue, 1, 0, 6),
  [1379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__filename_continue, 1, 0, 6),
  [1381] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_string_text, 1, 0, 0),
  [1383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_string_text, 1, 0, 0),
  [1385] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_filename_password_text, 1, 0, 0),
  [1387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filename_password_text, 1, 0, 0),
  [1389] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_filename_password_content, 1, 0, 0),
  [1391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filename_password_content, 1, 0, 0),
  [1393] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_string_content, 1, 0, 0),
  [1395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_string_content, 1, 0, 0),
  [1397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [1399] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneline_string_text, 1, 0, 0),
  [1401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneline_string_text, 1, 0, 0),
  [1403] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_filename_content, 1, 0, 0),
  [1405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filename_content, 1, 0, 0),
  [1407] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_filename_text, 1, 0, 0),
  [1409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filename_text, 1, 0, 0),
  [1411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [1413] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_method, 1, 0, 0),
  [1415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method, 1, 0, 0),
  [1417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [1419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_key_string_content_repeat1, 2, 0, 0),
  [1421] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_string_content_repeat1, 2, 0, 0), SHIFT_REPEAT(304),
  [1424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [1426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [1428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [1430] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_option, 3, 0, 8),
  [1432] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_value_string_repeat1, 1, 0, 0),
  [1434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_option, 3, 0, 8),
  [1436] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__filename_password_continue, 1, 0, 0),
  [1438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__filename_password_continue, 1, 0, 0),
  [1440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [1442] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_filename_password_repeat1, 1, 0, 1),
  [1444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_filename_password_repeat1, 1, 0, 1),
  [1446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [1448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [1450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [1452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [1454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_oneline_hex_repeat1, 2, 0, 0),
  [1456] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_oneline_hex_repeat1, 2, 0, 0), SHIFT_REPEAT(420),
  [1459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [1461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [1463] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_raw_multiline_string_content_repeat1, 2, 0, 0),
  [1465] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_raw_multiline_string_content_repeat1, 2, 0, 0), SHIFT_REPEAT(320),
  [1468] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_raw_multiline_string_content_repeat1, 2, 0, 0), SHIFT_REPEAT(320),
  [1471] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_raw_multiline_string_content, 1, 0, 0),
  [1473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_raw_multiline_string_content, 1, 0, 0),
  [1475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [1477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [1479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bracketed_key_content, 1, 0, 0),
  [1481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [1483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [1485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_string, 3, 0, 0),
  [1487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [1489] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_xml_repeat1, 2, 0, 0),
  [1491] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_xml_repeat1, 2, 0, 0), SHIFT_REPEAT(342),
  [1494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_key_string_repeat1, 1, 0, 1),
  [1496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_string, 2, 0, 0),
  [1498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [1500] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_object, 3, 0, 0),
  [1502] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_json_array_repeat1, 2, 0, 0), SHIFT_REPEAT(155),
  [1505] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_json_array_repeat1, 2, 0, 0),
  [1507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [1509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [1511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [1513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [1515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [1517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(456),
  [1519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [1521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [1523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [1525] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xml_attribute, 3, 0, 0),
  [1527] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_json_object_repeat1, 2, 0, 0),
  [1529] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_json_object_repeat1, 2, 0, 0), SHIFT_REPEAT(343),
  [1532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [1534] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_regex_escaped_char, 2, 0, 0),
  [1536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_object, 2, 0, 0),
  [1538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [1540] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_array, 4, 0, 0),
  [1542] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_array, 3, 0, 0),
  [1544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(453),
  [1546] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_array, 2, 0, 0),
  [1548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(457),
  [1550] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_number, 1, 0, 0),
  [1552] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_value, 1, 0, 0),
  [1554] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_boolean, 1, 0, 0),
  [1556] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_object, 4, 0, 0),
  [1558] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_duration_option, 3, 0, 8),
  [1560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(461),
  [1562] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_duration_option, 3, 0, 8),
  [1564] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xml, 2, 0, 0),
  [1566] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xml, 2, 0, 0),
  [1568] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_key_value, 3, 0, 0),
  [1570] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_predicate, 2, 0, 0),
  [1572] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_predicate, 2, 0, 0),
  [1574] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_predicate_value, 1, 0, 0),
  [1576] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_predicate_value, 1, 0, 0),
  [1578] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_equal_predicate, 2, 0, 11),
  [1580] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_equal_predicate, 2, 0, 11),
  [1582] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_equal_predicate, 2, 0, 0),
  [1584] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_equal_predicate, 2, 0, 0),
  [1586] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_not_equal_predicate, 2, 0, 11),
  [1588] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_not_equal_predicate, 2, 0, 11),
  [1590] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_not_equal_predicate, 2, 0, 0),
  [1592] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_not_equal_predicate, 2, 0, 0),
  [1594] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_greater_predicate, 2, 0, 11),
  [1596] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_greater_predicate, 2, 0, 11),
  [1598] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_greater_predicate, 2, 0, 0),
  [1600] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_greater_predicate, 2, 0, 0),
  [1602] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_greater_or_equal_predicate, 2, 0, 11),
  [1604] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_greater_or_equal_predicate, 2, 0, 11),
  [1606] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_greater_or_equal_predicate, 2, 0, 0),
  [1608] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_greater_or_equal_predicate, 2, 0, 0),
  [1610] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_less_predicate, 2, 0, 11),
  [1612] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_less_predicate, 2, 0, 11),
  [1614] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_less_predicate, 2, 0, 0),
  [1616] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_less_predicate, 2, 0, 0),
  [1618] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_less_or_equal_predicate, 2, 0, 11),
  [1620] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_less_or_equal_predicate, 2, 0, 11),
  [1622] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_less_or_equal_predicate, 2, 0, 0),
  [1624] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_less_or_equal_predicate, 2, 0, 0),
  [1626] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_with_predicate, 2, 0, 11),
  [1628] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_with_predicate, 2, 0, 11),
  [1630] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_end_with_predicate, 2, 0, 11),
  [1632] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_end_with_predicate, 2, 0, 11),
  [1634] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contain_predicate, 2, 0, 11),
  [1636] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_contain_predicate, 2, 0, 11),
  [1638] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_match_predicate, 2, 0, 11),
  [1640] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_match_predicate, 2, 0, 11),
  [1642] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_predicate, 2, 0, 11),
  [1644] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_include_predicate, 2, 0, 11),
  [1646] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_value, 3, 0, 12),
  [1648] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_file_value, 3, 0, 12),
  [1650] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_option, 3, 0, 8),
  [1652] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_option, 3, 0, 8),
  [1654] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_value, 1, 0, 0),
  [1656] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_value, 1, 0, 0),
  [1658] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 3, 0, 0),
  [1660] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_definition, 3, 0, 0),
  [1662] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_value, 4, 0, 13),
  [1664] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_file_value, 4, 0, 13),
  [1666] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_count_option, 3, 0, 8),
  [1668] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_count_option, 3, 0, 8),
  [1670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(519),
  [1672] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneline_hex, 3, 0, 0),
  [1674] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneline_hex, 3, 0, 0),
  [1676] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneline_base64, 3, 0, 0),
  [1678] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneline_base64, 3, 0, 0),
  [1680] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_option, 3, 0, 8),
  [1682] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer_option, 3, 0, 8),
  [1684] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_option, 3, 0, 8),
  [1686] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean_option, 3, 0, 8),
  [1688] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_object, 2, 0, 0),
  [1690] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_string, 4, 0, 0),
  [1692] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline_string, 4, 0, 0),
  [1694] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1, 0, 0),
  [1696] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1, 0, 0),
  [1698] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_array, 4, 0, 0),
  [1700] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneline_string, 2, 0, 0),
  [1702] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneline_string, 2, 0, 0),
  [1704] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_string, 3, 0, 0),
  [1706] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_object, 4, 0, 0),
  [1708] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hexdigit, 1, 0, 0),
  [1710] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneline_hex, 2, 0, 0),
  [1712] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneline_hex, 2, 0, 0),
  [1714] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_verbosity_option, 3, 0, 10),
  [1716] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_verbosity_option, 3, 0, 10),
  [1718] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cert_option, 3, 0, 8),
  [1720] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cert_option, 3, 0, 8),
  [1722] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_string, 2, 0, 0),
  [1724] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_client_key_option, 3, 0, 8),
  [1726] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_client_key_option, 3, 0, 8),
  [1728] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ca_certificate_option, 3, 0, 8),
  [1730] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ca_certificate_option, 3, 0, 8),
  [1732] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_param, 3, 0, 0),
  [1734] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_file_param, 3, 0, 0),
  [1736] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_string, 5, 0, 0),
  [1738] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline_string, 5, 0, 0),
  [1740] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneline_file, 2, 0, 0),
  [1742] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneline_file, 2, 0, 0),
  [1744] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_array, 2, 0, 0),
  [1746] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version, 1, 0, 0),
  [1748] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option, 1, 0, 0),
  [1750] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_option, 1, 0, 0),
  [1752] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_predicate, 1, 0, 0),
  [1754] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_predicate, 1, 0, 0),
  [1756] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneline_string, 3, 0, 0),
  [1758] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneline_string, 3, 0, 0),
  [1760] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xml, 1, 0, 0),
  [1762] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xml, 1, 0, 0),
  [1764] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bytes, 1, 0, 0),
  [1766] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bytes, 1, 0, 0),
  [1768] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_string, 3, 0, 0),
  [1770] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline_string, 3, 0, 0),
  [1772] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_boolean, 1, 0, 0),
  [1774] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_predicate_func, 1, 0, 0),
  [1776] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_predicate_func, 1, 0, 0),
  [1778] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_object, 3, 0, 0),
  [1780] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multipart_form_data_param, 1, 0, 0),
  [1782] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multipart_form_data_param, 1, 0, 0),
  [1784] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_status, 1, 0, 0),
  [1786] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_status, 1, 0, 0),
  [1788] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_array, 3, 0, 0),
  [1790] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_value, 1, 0, 0),
  [1792] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_duration_option, 4, 0, 8),
  [1794] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_duration_option, 4, 0, 8),
  [1796] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneline_file, 3, 0, 0),
  [1798] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneline_file, 3, 0, 0),
  [1800] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_predicate, 1, 0, 11),
  [1802] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_predicate, 1, 0, 11),
  [1804] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_number, 1, 0, 0),
  [1806] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_value, 3, 0, 0),
  [1808] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_key_value, 3, 0, 0),
  [1810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [1812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [1814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [1816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [1818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [1820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(454),
  [1822] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_certificate_attribute, 1, 0, 0),
  [1824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [1826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [1828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [1830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [1832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [1834] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_option_key, 1, 0, 0),
  [1836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(504),
  [1838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [1840] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_option_key, 1, 0, 0),
  [1842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [1844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [1846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [1848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [1850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [1852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [1854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [1856] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_option_key, 1, 0, 0),
  [1858] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_duration_option_key, 1, 0, 0),
  [1860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [1862] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_count_option_key, 1, 0, 0),
  [1864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(462),
  [1866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [1868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [1870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [1872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [1874] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [1876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [1878] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [1880] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [1882] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [1884] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [1886] = {.entry = {.count = 1, .reusable = true}}, SHIFT(470),
  [1888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [1890] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [1892] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [1894] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [1896] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [1898] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [1900] = {.entry = {.count = 1, .reusable = true}}, SHIFT(527),
  [1902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(495),
  [1904] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1906] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [1908] = {.entry = {.count = 1, .reusable = false}}, SHIFT(361),
  [1910] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_string_type, 1, 0, 0),
  [1912] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [1914] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [1916] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [1918] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [1920] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_key_string, 1, 0, 5),
  [1922] = {.entry = {.count = 1, .reusable = true}}, SHIFT(480),
  [1924] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [1926] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [1928] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
};

enum ts_external_scanner_symbol_identifiers {
  ts_external_token__eof = 0,
  ts_external_token__json_array_start = 1,
  ts_external_token__bracketed_key_start = 2,
  ts_external_token__json_number = 3,
  ts_external_token__error_sentinel = 4,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__eof] = sym__eof,
  [ts_external_token__json_array_start] = sym__json_array_start,
  [ts_external_token__bracketed_key_start] = sym__bracketed_key_start,
  [ts_external_token__json_number] = sym__json_number,
  [ts_external_token__error_sentinel] = sym__error_sentinel,
};

static const bool ts_external_scanner_states[5][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__eof] = true,
    [ts_external_token__json_array_start] = true,
    [ts_external_token__bracketed_key_start] = true,
    [ts_external_token__json_number] = true,
    [ts_external_token__error_sentinel] = true,
  },
  [2] = {
    [ts_external_token__json_array_start] = true,
    [ts_external_token__json_number] = true,
  },
  [3] = {
    [ts_external_token__json_array_start] = true,
    [ts_external_token__bracketed_key_start] = true,
    [ts_external_token__json_number] = true,
  },
  [4] = {
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
