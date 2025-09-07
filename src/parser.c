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
#define STATE_COUNT 610
#define LARGE_STATE_COUNT 16
#define SYMBOL_COUNT 332
#define ALIAS_COUNT 1
#define TOKEN_COUNT 176
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 2

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
  anon_sym_COLON2 = 40,
  anon_sym_file_COMMA = 41,
  anon_sym_SEMI = 42,
  aux_sym_file_value_token1 = 43,
  anon_sym_cacert = 44,
  anon_sym_compressed = 45,
  anon_sym_location = 46,
  anon_sym_insecure = 47,
  anon_sym_max_DASHredirs = 48,
  anon_sym_path_DASHas_DASHis = 49,
  anon_sym_proxy = 50,
  anon_sym_retry = 51,
  anon_sym_retry_DASHinterval = 52,
  anon_sym_retry_DASHmax_DASHcount = 53,
  anon_sym_variable = 54,
  anon_sym_verbose = 55,
  anon_sym_very_DASHverbose = 56,
  anon_sym_EQ = 57,
  anon_sym_status = 58,
  anon_sym_url = 59,
  anon_sym_body = 60,
  anon_sym_duration = 61,
  anon_sym_bytes = 62,
  anon_sym_sha256 = 63,
  anon_sym_md5 = 64,
  anon_sym_header = 65,
  anon_sym_cookie = 66,
  anon_sym_xpath = 67,
  anon_sym_jsonpath = 68,
  anon_sym_regex = 69,
  anon_sym_not = 70,
  anon_sym_exists = 71,
  anon_sym_isInteger = 72,
  anon_sym_isFloat = 73,
  anon_sym_isBoolean = 74,
  anon_sym_isString = 75,
  anon_sym_isCollection = 76,
  anon_sym_isNumber = 77,
  anon_sym_isIsoDate = 78,
  anon_sym_isEmpty = 79,
  anon_sym_isIpv4 = 80,
  anon_sym_isIpv6 = 81,
  anon_sym_isUuid = 82,
  anon_sym_equals = 83,
  anon_sym_EQ_EQ = 84,
  anon_sym_notEquals = 85,
  anon_sym_BANG_EQ = 86,
  anon_sym_greaterThan = 87,
  anon_sym_GT = 88,
  anon_sym_greaterThanOrEquals = 89,
  anon_sym_GT_EQ = 90,
  anon_sym_lessThan = 91,
  anon_sym_LT = 92,
  anon_sym_lessThanOrEquals = 93,
  anon_sym_LT_EQ = 94,
  anon_sym_startsWith = 95,
  anon_sym_endsWith = 96,
  anon_sym_contains = 97,
  anon_sym_matches = 98,
  anon_sym_includes = 99,
  anon_sym_LT_QMARK = 100,
  aux_sym_xml_prolog_tag_token1 = 101,
  anon_sym_QMARK_GT = 102,
  aux_sym_xml_open_tag_token1 = 103,
  anon_sym_LT_SLASH = 104,
  aux_sym_xml_close_tag_token1 = 105,
  anon_sym_base64_COMMA = 106,
  aux_sym_oneline_base64_token1 = 107,
  anon_sym_hex_COMMA = 108,
  anon_sym_DQUOTE = 109,
  sym_quoted_string_text = 110,
  anon_sym_BSLASH = 111,
  aux_sym_invalid_quoted_string_escaped_char_token1 = 112,
  anon_sym_b = 113,
  anon_sym_f = 114,
  anon_sym_n = 115,
  anon_sym_r = 116,
  anon_sym_t = 117,
  anon_sym_u = 118,
  sym_key_string_text = 119,
  anon_sym_BSLASH2 = 120,
  aux_sym_key_string_escaped_char_token1 = 121,
  aux_sym_value_string_text_token1 = 122,
  anon_sym_POUND = 123,
  aux_sym_oneline_string_token1 = 124,
  anon_sym_BQUOTE = 125,
  aux_sym_oneline_string_text_token1 = 126,
  aux_sym_oneline_string_text_token2 = 127,
  anon_sym_BQUOTE_BQUOTE_BQUOTE = 128,
  anon_sym_base64 = 129,
  anon_sym_hex = 130,
  anon_sym_json = 131,
  anon_sym_xml = 132,
  anon_sym_graphql = 133,
  aux_sym_multiline_string_type_token1 = 134,
  aux_sym__multiline_string_text_token1 = 135,
  anon_sym_LBRACE = 136,
  sym_filename_text = 137,
  aux_sym_filename_escaped_char_token1 = 138,
  anon_sym_RBRACE = 139,
  anon_sym_COMMA = 140,
  anon_sym_LBRACK = 141,
  anon_sym_RBRACK = 142,
  sym_json_string_text = 143,
  anon_sym_LBRACE_LBRACE = 144,
  anon_sym_RBRACE_RBRACE = 145,
  aux_sym_variable_name_token1 = 146,
  aux_sym_variable_name_token2 = 147,
  anon_sym_count = 148,
  anon_sym_urlEncode = 149,
  anon_sym_urlDecode = 150,
  anon_sym_toInt = 151,
  anon_sym_htmlEscape = 152,
  anon_sym_htmlUnescape = 153,
  anon_sym_daysAfterNow = 154,
  anon_sym_daysBeforeNow = 155,
  anon_sym_decode = 156,
  anon_sym_format = 157,
  anon_sym_toDate = 158,
  anon_sym_nth = 159,
  anon_sym_replace = 160,
  anon_sym_split = 161,
  anon_sym_true = 162,
  anon_sym_false = 163,
  sym__alphanum = 164,
  sym_digit = 165,
  sym_hexdigit = 166,
  anon_sym_DOT = 167,
  anon_sym_e = 168,
  anon_sym_E = 169,
  anon_sym_PLUS = 170,
  anon_sym_DASH = 171,
  sym_comment = 172,
  anon_sym_SLASH = 173,
  sym_regex_text = 174,
  aux_sym_regex_escaped_char_token1 = 175,
  sym_hurl_file = 176,
  sym_entry = 177,
  sym__comment_or_new_line = 178,
  sym_request = 179,
  sym_response = 180,
  sym_method = 181,
  sym_version = 182,
  sym_status = 183,
  sym_header = 184,
  sym_body = 185,
  sym_request_section = 186,
  sym_response_section = 187,
  sym_basic_auth_section = 188,
  sym_query_string_params_section = 189,
  sym_form_params_section = 190,
  sym_multipart_form_data_section = 191,
  sym_cookies_section = 192,
  sym_captures_section = 193,
  sym_asserts_section = 194,
  sym_options_section = 195,
  sym_key_value = 196,
  sym_multipart_form_data_param = 197,
  sym_file_param = 198,
  sym_file_value = 199,
  sym_capture = 200,
  sym_assert = 201,
  sym_option = 202,
  sym_ca_certificate_option = 203,
  sym_compressed_option = 204,
  sym_follow_redirect_option = 205,
  sym_insecure_option = 206,
  sym_max_redirs_option = 207,
  sym_path_as_is_option = 208,
  sym_proxy_option = 209,
  sym_retry_option = 210,
  sym_retry_interval_option = 211,
  sym_retry_max_count_option = 212,
  sym_variable_option = 213,
  sym_verbose_option = 214,
  sym_very_verbose_option = 215,
  sym_variable_definition = 216,
  sym_variable_value = 217,
  sym_query = 218,
  sym_header_query = 219,
  sym_cookie_query = 220,
  sym_xpath_query = 221,
  sym_jsonpath_query = 222,
  sym_regex_query = 223,
  sym_variable_query = 224,
  sym_predicate = 225,
  sym_predicate_func = 226,
  sym_equal_predicate = 227,
  sym_not_equal_predicate = 228,
  sym_greater_predicate = 229,
  sym_greater_or_equal_predicate = 230,
  sym_less_predicate = 231,
  sym_less_or_equal_predicate = 232,
  sym_start_with_predicate = 233,
  sym_end_with_predicate = 234,
  sym_contain_predicate = 235,
  sym_match_predicate = 236,
  sym_include_predicate = 237,
  sym_predicate_value = 238,
  sym_bytes = 239,
  sym_xml = 240,
  sym_xml_prolog_tag = 241,
  sym_xml_tag = 242,
  sym_xml_open_tag = 243,
  sym_xml_close_tag = 244,
  sym_oneline_base64 = 245,
  sym_oneline_file = 246,
  sym_oneline_hex = 247,
  sym_quoted_string = 248,
  sym_quoted_string_content = 249,
  sym_invalid_quoted_string_escaped_char = 250,
  sym_quoted_string_escaped_char = 251,
  sym_key_string = 252,
  sym_key_string_content = 253,
  sym_key_string_escaped_char = 254,
  sym_value_string = 255,
  sym_value_string_content = 256,
  sym_value_string_text = 257,
  sym_value_string_escaped_char = 258,
  sym_oneline_string = 259,
  sym_oneline_string_content = 260,
  sym_oneline_string_text = 261,
  sym_oneline_string_escaped_char = 262,
  sym_multiline_string = 263,
  sym_multiline_string_type = 264,
  sym_multiline_string_content = 265,
  sym__multiline_string_text = 266,
  sym_multiline_string_escaped_char = 267,
  sym_filename = 268,
  sym_filename_content = 269,
  sym_filename_escaped_char = 270,
  sym_unicode_char = 271,
  sym_json_value = 272,
  sym_json_object = 273,
  sym_json_key_value = 274,
  sym_json_key_string = 275,
  sym_json_array = 276,
  sym_json_string = 277,
  sym_json_string_content = 278,
  sym_json_string_escaped_char = 279,
  sym_json_number = 280,
  sym_template = 281,
  sym_expr = 282,
  sym_variable_name = 283,
  sym_filter = 284,
  sym_regex_filter = 285,
  sym_nth_filter = 286,
  sym_replace_filter = 287,
  sym_split_filter = 288,
  sym_xpath_filter = 289,
  sym_boolean = 290,
  sym_integer = 291,
  sym_float = 292,
  sym_fraction = 293,
  sym_exponent = 294,
  sym_regex = 295,
  sym_regex_content = 296,
  sym_regex_escaped_char = 297,
  aux_sym_hurl_file_repeat1 = 298,
  aux_sym_hurl_file_repeat2 = 299,
  aux_sym__comment_or_new_line_repeat1 = 300,
  aux_sym_request_repeat1 = 301,
  aux_sym_request_repeat2 = 302,
  aux_sym_response_repeat1 = 303,
  aux_sym_query_string_params_section_repeat1 = 304,
  aux_sym_multipart_form_data_section_repeat1 = 305,
  aux_sym_captures_section_repeat1 = 306,
  aux_sym_asserts_section_repeat1 = 307,
  aux_sym_options_section_repeat1 = 308,
  aux_sym_capture_repeat1 = 309,
  aux_sym_xml_repeat1 = 310,
  aux_sym_xml_tag_repeat1 = 311,
  aux_sym_oneline_hex_repeat1 = 312,
  aux_sym_quoted_string_repeat1 = 313,
  aux_sym_quoted_string_content_repeat1 = 314,
  aux_sym_key_string_repeat1 = 315,
  aux_sym_key_string_content_repeat1 = 316,
  aux_sym_value_string_repeat1 = 317,
  aux_sym_value_string_content_repeat1 = 318,
  aux_sym_value_string_text_repeat1 = 319,
  aux_sym_oneline_string_repeat1 = 320,
  aux_sym_oneline_string_content_repeat1 = 321,
  aux_sym_multiline_string_repeat1 = 322,
  aux_sym_multiline_string_content_repeat1 = 323,
  aux_sym__multiline_string_text_repeat1 = 324,
  aux_sym_filename_repeat1 = 325,
  aux_sym_filename_content_repeat1 = 326,
  aux_sym_json_object_repeat1 = 327,
  aux_sym_json_array_repeat1 = 328,
  aux_sym_json_string_repeat1 = 329,
  aux_sym_integer_repeat1 = 330,
  aux_sym_regex_content_repeat1 = 331,
  anon_alias_sym_json_key_string = 332,
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
  [anon_sym_COLON2] = ":",
  [anon_sym_file_COMMA] = "file,",
  [anon_sym_SEMI] = ";",
  [aux_sym_file_value_token1] = "file_value_token1",
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
  [anon_sym_body] = "body",
  [anon_sym_duration] = "duration",
  [anon_sym_bytes] = "bytes",
  [anon_sym_sha256] = "sha256",
  [anon_sym_md5] = "md5",
  [anon_sym_header] = "header",
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
  [aux_sym_xml_open_tag_token1] = "xml_open_tag_token1",
  [anon_sym_LT_SLASH] = "</",
  [aux_sym_xml_close_tag_token1] = "xml_close_tag_token1",
  [anon_sym_base64_COMMA] = "base64,",
  [aux_sym_oneline_base64_token1] = "oneline_base64_token1",
  [anon_sym_hex_COMMA] = "hex,",
  [anon_sym_DQUOTE] = "\"",
  [sym_quoted_string_text] = "quoted_string_text",
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
  [sym_json_string_text] = "json_string_text",
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
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [sym__alphanum] = "_alphanum",
  [sym_digit] = "digit",
  [sym_hexdigit] = "hexdigit",
  [anon_sym_DOT] = ".",
  [anon_sym_e] = "e",
  [anon_sym_E] = "E",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [sym_comment] = "comment",
  [anon_sym_SLASH] = "/",
  [sym_regex_text] = "regex_text",
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
  [sym_header_query] = "header_query",
  [sym_cookie_query] = "cookie_query",
  [sym_xpath_query] = "xpath_query",
  [sym_jsonpath_query] = "jsonpath_query",
  [sym_regex_query] = "regex_query",
  [sym_variable_query] = "variable_query",
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
  [sym_include_predicate] = "include_predicate",
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
  [sym_json_string_escaped_char] = "json_string_escaped_char",
  [sym_json_number] = "json_number",
  [sym_template] = "template",
  [sym_expr] = "expr",
  [sym_variable_name] = "variable_name",
  [sym_filter] = "filter",
  [sym_regex_filter] = "regex_filter",
  [sym_nth_filter] = "nth_filter",
  [sym_replace_filter] = "replace_filter",
  [sym_split_filter] = "split_filter",
  [sym_xpath_filter] = "xpath_filter",
  [sym_boolean] = "boolean",
  [sym_integer] = "integer",
  [sym_float] = "float",
  [sym_fraction] = "fraction",
  [sym_exponent] = "exponent",
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
  [anon_sym_COLON2] = anon_sym_COLON,
  [anon_sym_file_COMMA] = anon_sym_file_COMMA,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [aux_sym_file_value_token1] = aux_sym_file_value_token1,
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
  [anon_sym_body] = anon_sym_body,
  [anon_sym_duration] = anon_sym_duration,
  [anon_sym_bytes] = anon_sym_bytes,
  [anon_sym_sha256] = anon_sym_sha256,
  [anon_sym_md5] = anon_sym_md5,
  [anon_sym_header] = anon_sym_header,
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
  [aux_sym_xml_open_tag_token1] = aux_sym_xml_open_tag_token1,
  [anon_sym_LT_SLASH] = anon_sym_LT_SLASH,
  [aux_sym_xml_close_tag_token1] = aux_sym_xml_close_tag_token1,
  [anon_sym_base64_COMMA] = anon_sym_base64_COMMA,
  [aux_sym_oneline_base64_token1] = aux_sym_oneline_base64_token1,
  [anon_sym_hex_COMMA] = anon_sym_hex_COMMA,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [sym_quoted_string_text] = sym_quoted_string_text,
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
  [sym_json_string_text] = sym_json_string_text,
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
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [sym__alphanum] = sym__alphanum,
  [sym_digit] = sym_digit,
  [sym_hexdigit] = sym_hexdigit,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_e] = anon_sym_e,
  [anon_sym_E] = anon_sym_E,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [sym_comment] = sym_comment,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [sym_regex_text] = sym_regex_text,
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
  [sym_header_query] = sym_header_query,
  [sym_cookie_query] = sym_cookie_query,
  [sym_xpath_query] = sym_xpath_query,
  [sym_jsonpath_query] = sym_jsonpath_query,
  [sym_regex_query] = sym_regex_query,
  [sym_variable_query] = sym_variable_query,
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
  [sym_include_predicate] = sym_include_predicate,
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
  [sym_json_string_escaped_char] = sym_json_string_escaped_char,
  [sym_json_number] = sym_json_number,
  [sym_template] = sym_template,
  [sym_expr] = sym_expr,
  [sym_variable_name] = sym_variable_name,
  [sym_filter] = sym_filter,
  [sym_regex_filter] = sym_regex_filter,
  [sym_nth_filter] = sym_nth_filter,
  [sym_replace_filter] = sym_replace_filter,
  [sym_split_filter] = sym_split_filter,
  [sym_xpath_filter] = sym_xpath_filter,
  [sym_boolean] = sym_boolean,
  [sym_integer] = sym_integer,
  [sym_float] = sym_float,
  [sym_fraction] = sym_fraction,
  [sym_exponent] = sym_exponent,
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
  [aux_sym_file_value_token1] = {
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
  [anon_sym_header] = {
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
  [sym_json_string_text] = {
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
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [sym__alphanum] = {
    .visible = false,
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
  [sym_float] = {
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
  [55] = 55,
  [56] = 16,
  [57] = 17,
  [58] = 58,
  [59] = 17,
  [60] = 16,
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
  [71] = 37,
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
  [88] = 17,
  [89] = 16,
  [90] = 90,
  [91] = 91,
  [92] = 58,
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
  [105] = 54,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 53,
  [112] = 55,
  [113] = 52,
  [114] = 114,
  [115] = 115,
  [116] = 52,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 103,
  [125] = 125,
  [126] = 16,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 17,
  [131] = 128,
  [132] = 129,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 74,
  [139] = 73,
  [140] = 72,
  [141] = 81,
  [142] = 76,
  [143] = 77,
  [144] = 65,
  [145] = 84,
  [146] = 83,
  [147] = 68,
  [148] = 85,
  [149] = 80,
  [150] = 69,
  [151] = 151,
  [152] = 75,
  [153] = 153,
  [154] = 154,
  [155] = 70,
  [156] = 151,
  [157] = 67,
  [158] = 66,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 165,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 164,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 181,
  [183] = 183,
  [184] = 180,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 177,
  [193] = 193,
  [194] = 185,
  [195] = 195,
  [196] = 196,
  [197] = 177,
  [198] = 196,
  [199] = 193,
  [200] = 185,
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
  [211] = 183,
  [212] = 212,
  [213] = 209,
  [214] = 176,
  [215] = 203,
  [216] = 201,
  [217] = 217,
  [218] = 218,
  [219] = 218,
  [220] = 220,
  [221] = 55,
  [222] = 222,
  [223] = 222,
  [224] = 224,
  [225] = 225,
  [226] = 53,
  [227] = 227,
  [228] = 228,
  [229] = 229,
  [230] = 230,
  [231] = 231,
  [232] = 231,
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
  [245] = 245,
  [246] = 246,
  [247] = 231,
  [248] = 248,
  [249] = 249,
  [250] = 233,
  [251] = 251,
  [252] = 228,
  [253] = 228,
  [254] = 235,
  [255] = 255,
  [256] = 256,
  [257] = 237,
  [258] = 222,
  [259] = 259,
  [260] = 234,
  [261] = 261,
  [262] = 262,
  [263] = 263,
  [264] = 264,
  [265] = 265,
  [266] = 266,
  [267] = 265,
  [268] = 225,
  [269] = 269,
  [270] = 233,
  [271] = 271,
  [272] = 246,
  [273] = 17,
  [274] = 16,
  [275] = 275,
  [276] = 240,
  [277] = 240,
  [278] = 240,
  [279] = 279,
  [280] = 280,
  [281] = 224,
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
  [295] = 295,
  [296] = 271,
  [297] = 297,
  [298] = 298,
  [299] = 299,
  [300] = 265,
  [301] = 287,
  [302] = 246,
  [303] = 295,
  [304] = 304,
  [305] = 305,
  [306] = 306,
  [307] = 240,
  [308] = 271,
  [309] = 309,
  [310] = 295,
  [311] = 311,
  [312] = 312,
  [313] = 246,
  [314] = 314,
  [315] = 315,
  [316] = 316,
  [317] = 282,
  [318] = 298,
  [319] = 240,
  [320] = 320,
  [321] = 240,
  [322] = 246,
  [323] = 240,
  [324] = 240,
  [325] = 240,
  [326] = 326,
  [327] = 283,
  [328] = 328,
  [329] = 240,
  [330] = 330,
  [331] = 331,
  [332] = 244,
  [333] = 311,
  [334] = 334,
  [335] = 335,
  [336] = 336,
  [337] = 334,
  [338] = 338,
  [339] = 241,
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
  [371] = 371,
  [372] = 355,
  [373] = 373,
  [374] = 374,
  [375] = 375,
  [376] = 376,
  [377] = 282,
  [378] = 355,
  [379] = 379,
  [380] = 380,
  [381] = 381,
  [382] = 382,
  [383] = 365,
  [384] = 384,
  [385] = 385,
  [386] = 386,
  [387] = 355,
  [388] = 366,
  [389] = 389,
  [390] = 359,
  [391] = 381,
  [392] = 392,
  [393] = 393,
  [394] = 355,
  [395] = 395,
  [396] = 355,
  [397] = 240,
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
  [412] = 355,
  [413] = 413,
  [414] = 414,
  [415] = 376,
  [416] = 416,
  [417] = 417,
  [418] = 355,
  [419] = 419,
  [420] = 370,
  [421] = 421,
  [422] = 422,
  [423] = 355,
  [424] = 424,
  [425] = 355,
  [426] = 374,
  [427] = 373,
  [428] = 355,
  [429] = 355,
  [430] = 430,
  [431] = 431,
  [432] = 432,
  [433] = 380,
  [434] = 298,
  [435] = 435,
  [436] = 436,
  [437] = 437,
  [438] = 438,
  [439] = 439,
  [440] = 440,
  [441] = 441,
  [442] = 442,
  [443] = 443,
  [444] = 435,
  [445] = 445,
  [446] = 446,
  [447] = 447,
  [448] = 448,
  [449] = 449,
  [450] = 450,
  [451] = 451,
  [452] = 452,
  [453] = 255,
  [454] = 435,
  [455] = 455,
  [456] = 456,
  [457] = 456,
  [458] = 451,
  [459] = 451,
  [460] = 460,
  [461] = 452,
  [462] = 462,
  [463] = 463,
  [464] = 446,
  [465] = 440,
  [466] = 438,
  [467] = 455,
  [468] = 441,
  [469] = 442,
  [470] = 448,
  [471] = 471,
  [472] = 472,
  [473] = 473,
  [474] = 474,
  [475] = 432,
  [476] = 476,
  [477] = 477,
  [478] = 478,
  [479] = 479,
  [480] = 480,
  [481] = 481,
  [482] = 482,
  [483] = 483,
  [484] = 484,
  [485] = 485,
  [486] = 486,
  [487] = 431,
  [488] = 488,
  [489] = 489,
  [490] = 490,
  [491] = 491,
  [492] = 382,
  [493] = 493,
  [494] = 494,
  [495] = 495,
  [496] = 496,
  [497] = 251,
  [498] = 498,
  [499] = 499,
  [500] = 500,
  [501] = 284,
  [502] = 502,
  [503] = 503,
  [504] = 504,
  [505] = 505,
  [506] = 506,
  [507] = 507,
  [508] = 508,
  [509] = 414,
  [510] = 510,
  [511] = 511,
  [512] = 512,
  [513] = 513,
  [514] = 514,
  [515] = 515,
  [516] = 516,
  [517] = 517,
  [518] = 518,
  [519] = 297,
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
  [531] = 531,
  [532] = 532,
  [533] = 533,
  [534] = 534,
  [535] = 535,
  [536] = 536,
  [537] = 356,
  [538] = 538,
  [539] = 539,
  [540] = 540,
  [541] = 345,
  [542] = 542,
  [543] = 527,
  [544] = 256,
  [545] = 545,
  [546] = 546,
  [547] = 547,
  [548] = 548,
  [549] = 549,
  [550] = 550,
  [551] = 389,
  [552] = 552,
  [553] = 535,
  [554] = 542,
  [555] = 555,
  [556] = 556,
  [557] = 556,
  [558] = 558,
  [559] = 559,
  [560] = 560,
  [561] = 561,
  [562] = 562,
  [563] = 549,
  [564] = 564,
  [565] = 533,
  [566] = 535,
  [567] = 549,
  [568] = 533,
  [569] = 549,
  [570] = 533,
  [571] = 549,
  [572] = 533,
  [573] = 533,
  [574] = 533,
  [575] = 533,
  [576] = 533,
  [577] = 533,
  [578] = 533,
  [579] = 579,
  [580] = 561,
  [581] = 581,
  [582] = 582,
  [583] = 498,
  [584] = 584,
  [585] = 585,
  [586] = 584,
  [587] = 587,
  [588] = 584,
  [589] = 533,
  [590] = 584,
  [591] = 584,
  [592] = 592,
  [593] = 593,
  [594] = 261,
  [595] = 410,
  [596] = 409,
  [597] = 597,
  [598] = 552,
  [599] = 552,
  [600] = 552,
  [601] = 552,
  [602] = 485,
  [603] = 485,
  [604] = 485,
  [605] = 485,
  [606] = 478,
  [607] = 478,
  [608] = 478,
  [609] = 478,
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
      if (eof) ADVANCE(531);
      ADVANCE_MAP(
        '!', 61,
        '"', 743,
        '#', 932,
        '*', 636,
        '+', 1022,
        ',', 979,
        '-', 1023,
        '.', 1017,
        '/', 1026,
        ':', 659,
        ';', 664,
        '<', 716,
        '=', 680,
        '>', 712,
        '?', 63,
        'E', 1021,
        '[', 981,
        '\\', 924,
        ']', 986,
        '`', 935,
        'b', 752,
        'e', 1018,
        'f', 753,
        'n', 754,
        'r', 755,
        't', 756,
        'u', 757,
        '{', 972,
        '}', 978,
        'a', 995,
        'c', 995,
        'd', 995,
      );
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(627);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(635);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(995);
      if (('G' <= lookahead && lookahead <= 'Z')) ADVANCE(627);
      if (set_contains(extras_character_set_2, 9, lookahead)) SKIP(528);
      END_STATE();
    case 1:
      ADVANCE_MAP(
        '\n', 532,
        '#', 1025,
        '.', 1017,
        'E', 1020,
        'c', 348,
        'd', 103,
        'e', 1018,
        'f', 349,
        'h', 459,
        'n', 460,
        'r', 193,
        's', 358,
        't', 324,
        'u', 390,
        'x', 365,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1015);
      if (set_contains(extras_character_set_2, 9, lookahead)) SKIP(1);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(532);
      if (lookahead == '#') ADVANCE(1025);
      if (lookahead == ':') ADVANCE(659);
      if (lookahead == '\\') ADVANCE(924);
      if (lookahead == '{') ADVANCE(518);
      if (set_contains(extras_character_set_2, 9, lookahead)) SKIP(5);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= ']') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(923);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(532);
      if (lookahead == '#') ADVANCE(1025);
      if (lookahead == '\\') ADVANCE(748);
      if (lookahead == 'f') ADVANCE(928);
      if (lookahead == 'n') ADVANCE(930);
      if (lookahead == 't') ADVANCE(929);
      if (lookahead == '{') ADVANCE(931);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(927);
      if (set_contains(extras_character_set_2, 9, lookahead)) ADVANCE(927);
      if (lookahead != 0) ADVANCE(927);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(532);
      if (lookahead == '#') ADVANCE(1025);
      if (lookahead == '\\') ADVANCE(748);
      if (lookahead == '{') ADVANCE(931);
      if (set_contains(extras_character_set_2, 9, lookahead)) ADVANCE(927);
      if (lookahead != 0) ADVANCE(927);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(532);
      if (lookahead == '#') ADVANCE(1025);
      if (set_contains(extras_character_set_2, 9, lookahead)) SKIP(5);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(532);
      if (lookahead == '#') ADVANCE(1025);
      if (set_contains(extras_character_set_2, 9, lookahead)) SKIP(6);
      if (lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(665);
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(35);
      if (lookahead == '#') ADVANCE(1025);
      if (lookahead == '<') ADVANCE(717);
      if (lookahead == '\\') ADVANCE(748);
      if (lookahead == '{') ADVANCE(931);
      if (set_contains(extras_character_set_2, 9, lookahead)) ADVANCE(927);
      if (lookahead != 0) ADVANCE(927);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(533);
      if (lookahead == ' ') SKIP(9);
      if (lookahead == '#') ADVANCE(1025);
      if (lookahead == '\\') ADVANCE(748);
      if (lookahead == '{') ADVANCE(974);
      if (set_contains(extras_character_set_2, 9, lookahead)) ADVANCE(973);
      if (lookahead != 0 &&
          lookahead != ';') ADVANCE(976);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(533);
      if (lookahead == ' ') SKIP(9);
      if (lookahead == '#') ADVANCE(1025);
      if (lookahead == '\\') ADVANCE(748);
      if (set_contains(extras_character_set_2, 9, lookahead)) ADVANCE(973);
      if (lookahead != 0 &&
          lookahead != ';') ADVANCE(976);
      END_STATE();
    case 10:
      if (lookahead == '\n') SKIP(36);
      if (lookahead == '#') ADVANCE(1025);
      if (lookahead == '\\') ADVANCE(748);
      if (lookahead == '{') ADVANCE(931);
      if (set_contains(extras_character_set_2, 9, lookahead)) ADVANCE(927);
      if (lookahead != 0) ADVANCE(927);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(534);
      if (lookahead == '#') ADVANCE(969);
      if (lookahead == '\\') ADVANCE(748);
      if (lookahead == '`') ADVANCE(935);
      if (lookahead == '{') ADVANCE(972);
      if (set_contains(extras_character_set_2, 9, lookahead)) ADVANCE(968);
      if (lookahead != 0) ADVANCE(970);
      END_STATE();
    case 12:
      if (lookahead == '\n') SKIP(13);
      if (lookahead == '#') ADVANCE(1025);
      if (lookahead == '\\') ADVANCE(748);
      if (lookahead == '`') ADVANCE(934);
      if (lookahead == '{') ADVANCE(938);
      if (set_contains(extras_character_set_2, 9, lookahead)) ADVANCE(937);
      if (lookahead != 0) ADVANCE(936);
      END_STATE();
    case 13:
      if (lookahead == '\n') SKIP(13);
      if (lookahead == '#') ADVANCE(1025);
      if (lookahead == '\\') ADVANCE(748);
      if (lookahead == '`') ADVANCE(934);
      if (set_contains(extras_character_set_2, 9, lookahead)) ADVANCE(937);
      if (lookahead != 0) ADVANCE(936);
      END_STATE();
    case 14:
      if (lookahead == '\n') SKIP(14);
      if (lookahead == '#') ADVANCE(1024);
      if (lookahead == '/') ADVANCE(1026);
      if (lookahead == '\\') ADVANCE(748);
      if (set_contains(extras_character_set_2, 9, lookahead)) ADVANCE(1027);
      if (lookahead != 0) ADVANCE(1028);
      END_STATE();
    case 15:
      if (lookahead == '\n') SKIP(15);
      if (lookahead == '#') ADVANCE(1025);
      if (set_contains(extras_character_set_2, 9, lookahead)) ADVANCE(1030);
      if (lookahead != 0) ADVANCE(1029);
      END_STATE();
    case 16:
      if (lookahead == '\n') ADVANCE(740);
      if (lookahead == '#') ADVANCE(1025);
      if (set_contains(extras_character_set_2, 9, lookahead)) SKIP(16);
      if (('+' <= lookahead && lookahead <= '-') ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(741);
      END_STATE();
    case 17:
      if (lookahead == '\n') ADVANCE(535);
      if (lookahead == '#') ADVANCE(967);
      if (lookahead == 'b') ADVANCE(952);
      if (lookahead == 'g') ADVANCE(963);
      if (lookahead == 'h') ADVANCE(953);
      if (lookahead == 'j') ADVANCE(964);
      if (lookahead == 'x') ADVANCE(958);
      if (set_contains(extras_character_set_2, 9, lookahead)) ADVANCE(948);
      if (lookahead != 0) ADVANCE(967);
      END_STATE();
    case 18:
      ADVANCE_MAP(
        '!', 61,
        '#', 1025,
        ',', 979,
        '.', 1017,
        ':', 662,
        '<', 718,
        '=', 62,
        '>', 712,
        'E', 1020,
        ']', 986,
        'c', 327,
        'd', 103,
        'e', 1019,
        'f', 349,
        'g', 399,
        'h', 459,
        'i', 308,
        'l', 223,
        'm', 128,
        'n', 342,
        'r', 193,
        's', 359,
        't', 324,
        'u', 390,
        'x', 365,
        '{', 971,
        '}', 519,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1015);
      if (set_contains(extras_character_set_2, 9, lookahead)) SKIP(18);
      END_STATE();
    case 19:
      ADVANCE_MAP(
        '"', 743,
        '#', 1025,
        ',', 979,
        '<', 719,
        '=', 679,
        '>', 711,
        '\\', 924,
        'f', 838,
        'n', 915,
        't', 888,
        '{', 518,
        '}', 978,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(923);
      if (set_contains(extras_character_set_2, 9, lookahead)) SKIP(20);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= ']') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(923);
      END_STATE();
    case 20:
      ADVANCE_MAP(
        '"', 743,
        '#', 1025,
        ',', 979,
        '<', 719,
        '=', 679,
        '>', 711,
        'f', 97,
        'n', 487,
        't', 383,
        '}', 978,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1015);
      if (set_contains(extras_character_set_2, 9, lookahead)) SKIP(20);
      END_STATE();
    case 21:
      ADVANCE_MAP(
        '"', 743,
        '#', 1025,
        '\\', 748,
        '`', 934,
        'b', 752,
        'f', 753,
        'n', 754,
        'r', 755,
        't', 756,
        'u', 757,
      );
      if (set_contains(extras_character_set_2, 9, lookahead)) SKIP(21);
      END_STATE();
    case 22:
      if (lookahead == '"') ADVANCE(743);
      if (lookahead == '#') ADVANCE(744);
      if (lookahead == '\\') ADVANCE(748);
      if (lookahead == '{') ADVANCE(746);
      if (set_contains(extras_character_set_2, 9, lookahead)) ADVANCE(745);
      if (lookahead != 0) ADVANCE(747);
      END_STATE();
    case 23:
      ADVANCE_MAP(
        '"', 743,
        '#', 751,
        '\\', 748,
        'b', 752,
        'f', 753,
        'n', 754,
        'r', 755,
        't', 756,
        'u', 757,
      );
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == '\r') SKIP(23);
      if (set_contains(extras_character_set_2, 9, lookahead)) ADVANCE(750);
      if (lookahead != 0) ADVANCE(749);
      END_STATE();
    case 24:
      if (lookahead == '"') ADVANCE(743);
      if (lookahead == '#') ADVANCE(990);
      if (lookahead == '\\') ADVANCE(748);
      if (lookahead == '{') ADVANCE(989);
      if (set_contains(extras_character_set_2, 9, lookahead)) ADVANCE(988);
      if (lookahead != 0) ADVANCE(987);
      END_STATE();
    case 25:
      if (lookahead == '"') ADVANCE(925);
      if (lookahead == '#') ADVANCE(926);
      if (set_contains(extras_character_set_2, 9, lookahead)) SKIP(38);
      END_STATE();
    case 26:
      ADVANCE_MAP(
        '#', 932,
        ',', 977,
        ';', 664,
        '\\', 748,
        '`', 934,
        'b', 752,
        'f', 753,
        'n', 754,
        'r', 755,
        't', 756,
        'u', 757,
      );
      if (set_contains(extras_character_set_2, 9, lookahead)) SKIP(26);
      END_STATE();
    case 27:
      ADVANCE_MAP(
        '#', 1025,
        '*', 636,
        '=', 679,
        'c', 348,
        'd', 103,
        'f', 349,
        'h', 459,
        'n', 460,
        'r', 193,
        's', 358,
        't', 324,
        'u', 390,
        'x', 365,
        '}', 519,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(635);
      if (set_contains(extras_character_set_2, 9, lookahead)) SKIP(27);
      END_STATE();
    case 28:
      ADVANCE_MAP(
        '#', 1025,
        ',', 979,
        '.', 1017,
        ':', 662,
        'E', 1020,
        ']', 986,
        'b', 329,
        'c', 346,
        'd', 493,
        'e', 1018,
        'h', 215,
        'j', 427,
        'm', 164,
        'r', 196,
        's', 243,
        'u', 384,
        'v', 114,
        'x', 365,
        '}', 978,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1015);
      if (set_contains(extras_character_set_2, 9, lookahead)) SKIP(28);
      END_STATE();
    case 29:
      if (lookahead == '#') ADVANCE(1025);
      if (lookahead == ':') ADVANCE(659);
      if (lookahead == '\\') ADVANCE(924);
      if (lookahead == '{') ADVANCE(518);
      if (set_contains(extras_character_set_2, 9, lookahead)) SKIP(31);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= ']') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(923);
      END_STATE();
    case 30:
      if (lookahead == '#') ADVANCE(1025);
      if (lookahead == ':') ADVANCE(662);
      if (lookahead == '\\') ADVANCE(924);
      if (lookahead == '{') ADVANCE(518);
      if (set_contains(extras_character_set_2, 9, lookahead)) SKIP(31);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= ']') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(923);
      END_STATE();
    case 31:
      if (lookahead == '#') ADVANCE(1025);
      if (lookahead == ':') ADVANCE(662);
      if (set_contains(extras_character_set_2, 9, lookahead)) SKIP(31);
      END_STATE();
    case 32:
      if (lookahead == '#') ADVANCE(1025);
      if (lookahead == ';') ADVANCE(664);
      if (lookahead == '\\') ADVANCE(748);
      if (lookahead == '{') ADVANCE(974);
      if (lookahead == '\n' ||
          lookahead == ' ') SKIP(33);
      if (set_contains(extras_character_set_2, 9, lookahead)) ADVANCE(975);
      if (lookahead != 0) ADVANCE(976);
      END_STATE();
    case 33:
      if (lookahead == '#') ADVANCE(1025);
      if (lookahead == ';') ADVANCE(664);
      if (lookahead == '\\') ADVANCE(748);
      if (lookahead == '\n' ||
          lookahead == ' ') SKIP(33);
      if (set_contains(extras_character_set_2, 9, lookahead)) ADVANCE(975);
      if (lookahead != 0) ADVANCE(976);
      END_STATE();
    case 34:
      if (lookahead == '#') ADVANCE(1025);
      if (lookahead == ';') ADVANCE(664);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1016);
      if (set_contains(extras_character_set_2, 9, lookahead)) SKIP(34);
      END_STATE();
    case 35:
      if (lookahead == '#') ADVANCE(1025);
      if (lookahead == '<') ADVANCE(717);
      if (lookahead == '\\') ADVANCE(748);
      if (set_contains(extras_character_set_2, 9, lookahead)) SKIP(35);
      END_STATE();
    case 36:
      if (lookahead == '#') ADVANCE(1025);
      if (lookahead == '\\') ADVANCE(748);
      if (set_contains(extras_character_set_2, 9, lookahead)) SKIP(36);
      END_STATE();
    case 37:
      if (lookahead == '#') ADVANCE(1025);
      if (set_contains(extras_character_set_2, 9, lookahead)) SKIP(37);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(995);
      END_STATE();
    case 38:
      if (lookahead == '#') ADVANCE(1025);
      if (set_contains(extras_character_set_2, 9, lookahead)) SKIP(38);
      END_STATE();
    case 39:
      if (lookahead == '#') ADVANCE(736);
      if (set_contains(extras_character_set_2, 9, lookahead)) ADVANCE(737);
      if (lookahead != 0 &&
          lookahead != '/' &&
          lookahead != '>') ADVANCE(738);
      END_STATE();
    case 40:
      if (lookahead == '#') ADVANCE(941);
      if (set_contains(extras_character_set_2, 9, lookahead)) ADVANCE(940);
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(939);
      END_STATE();
    case 41:
      if (lookahead == '#') ADVANCE(728);
      if (set_contains(extras_character_set_2, 9, lookahead)) ADVANCE(729);
      if (lookahead != 0 &&
          lookahead != '?') ADVANCE(730);
      END_STATE();
    case 42:
      if (lookahead == '#') ADVANCE(732);
      if (set_contains(extras_character_set_2, 9, lookahead)) ADVANCE(733);
      if (lookahead != 0 &&
          lookahead != '/' &&
          lookahead != '?') ADVANCE(734);
      END_STATE();
    case 43:
      if (lookahead == '*') ADVANCE(632);
      if (lookahead == '1') ADVANCE(52);
      if (lookahead == '2') ADVANCE(630);
      if (lookahead == '3') ADVANCE(631);
      END_STATE();
    case 44:
      if (lookahead == ',') ADVANCE(742);
      END_STATE();
    case 45:
      if (lookahead == ',') ADVANCE(663);
      END_STATE();
    case 46:
      if (lookahead == ',') ADVANCE(739);
      END_STATE();
    case 47:
      if (lookahead == '-') ADVANCE(504);
      END_STATE();
    case 48:
      if (lookahead == '-') ADVANCE(260);
      END_STATE();
    case 49:
      if (lookahead == '-') ADVANCE(155);
      END_STATE();
    case 50:
      if (lookahead == '-') ADVANCE(395);
      END_STATE();
    case 51:
      if (lookahead == '-') ADVANCE(127);
      END_STATE();
    case 52:
      if (lookahead == '.') ADVANCE(53);
      END_STATE();
    case 53:
      if (lookahead == '0') ADVANCE(628);
      if (lookahead == '1') ADVANCE(629);
      END_STATE();
    case 54:
      if (lookahead == '2') ADVANCE(58);
      END_STATE();
    case 55:
      if (lookahead == '4') ADVANCE(703);
      if (lookahead == '6') ADVANCE(704);
      END_STATE();
    case 56:
      if (lookahead == '4') ADVANCE(46);
      END_STATE();
    case 57:
      if (lookahead == '5') ADVANCE(687);
      END_STATE();
    case 58:
      if (lookahead == '5') ADVANCE(60);
      END_STATE();
    case 59:
      if (lookahead == '6') ADVANCE(56);
      END_STATE();
    case 60:
      if (lookahead == '6') ADVANCE(686);
      END_STATE();
    case 61:
      if (lookahead == '=') ADVANCE(709);
      END_STATE();
    case 62:
      if (lookahead == '=') ADVANCE(707);
      END_STATE();
    case 63:
      if (lookahead == '>') ADVANCE(731);
      END_STATE();
    case 64:
      if (lookahead == 'A') ADVANCE(228);
      if (lookahead == 'B') ADVANCE(200);
      END_STATE();
    case 65:
      if (lookahead == 'A') ADVANCE(488);
      END_STATE();
    case 66:
      ADVANCE_MAP(
        'B', 341,
        'C', 339,
        'E', 297,
        'F', 281,
        'I', 316,
        'N', 490,
        'S', 471,
        'U', 494,
      );
      END_STATE();
    case 67:
      if (lookahead == 'D') ADVANCE(111);
      END_STATE();
    case 68:
      if (lookahead == 'D') ADVANCE(226);
      if (lookahead == 'E') ADVANCE(320);
      END_STATE();
    case 69:
      if (lookahead == 'D') ADVANCE(125);
      if (lookahead == 'I') ADVANCE(312);
      END_STATE();
    case 70:
      if (lookahead == 'D') ADVANCE(139);
      END_STATE();
    case 71:
      if (lookahead == 'E') ADVANCE(439);
      if (lookahead == 'U') ADVANCE(317);
      END_STATE();
    case 72:
      if (lookahead == 'E') ADVANCE(368);
      END_STATE();
    case 73:
      if (lookahead == 'E') ADVANCE(369);
      END_STATE();
    case 74:
      if (lookahead == 'F') ADVANCE(344);
      if (lookahead == ']') ADVANCE(647);
      END_STATE();
    case 75:
      if (lookahead == 'N') ADVANCE(326);
      END_STATE();
    case 76:
      if (lookahead == 'N') ADVANCE(330);
      END_STATE();
    case 77:
      if (lookahead == 'P') ADVANCE(107);
      if (lookahead == ']') ADVANCE(643);
      END_STATE();
    case 78:
      if (lookahead == 'P') ADVANCE(136);
      END_STATE();
    case 79:
      if (lookahead == 'S') ADVANCE(465);
      if (lookahead == ']') ADVANCE(639);
      END_STATE();
    case 80:
      if (lookahead == 'T') ADVANCE(244);
      END_STATE();
    case 81:
      if (lookahead == 'T') ADVANCE(245);
      END_STATE();
    case 82:
      if (lookahead == 'W') ADVANCE(263);
      END_STATE();
    case 83:
      if (lookahead == 'W') ADVANCE(264);
      END_STATE();
    case 84:
      if (lookahead == ']') ADVANCE(655);
      END_STATE();
    case 85:
      if (lookahead == ']') ADVANCE(651);
      END_STATE();
    case 86:
      if (lookahead == ']') ADVANCE(657);
      END_STATE();
    case 87:
      if (lookahead == ']') ADVANCE(653);
      END_STATE();
    case 88:
      if (lookahead == ']') ADVANCE(637);
      END_STATE();
    case 89:
      if (lookahead == ']') ADVANCE(645);
      END_STATE();
    case 90:
      if (lookahead == ']') ADVANCE(649);
      END_STATE();
    case 91:
      if (lookahead == ']') ADVANCE(641);
      END_STATE();
    case 92:
      if (lookahead == '`') ADVANCE(94);
      END_STATE();
    case 93:
      if (lookahead == '`') ADVANCE(94);
      if (lookahead != 0) ADVANCE(933);
      END_STATE();
    case 94:
      if (lookahead == '`') ADVANCE(942);
      END_STATE();
    case 95:
      if (lookahead == 'a') ADVANCE(54);
      END_STATE();
    case 96:
      if (lookahead == 'a') ADVANCE(147);
      END_STATE();
    case 97:
      if (lookahead == 'a') ADVANCE(279);
      END_STATE();
    case 98:
      if (lookahead == 'a') ADVANCE(279);
      if (lookahead == 'i') ADVANCE(275);
      END_STATE();
    case 99:
      if (lookahead == 'a') ADVANCE(279);
      if (lookahead == 'i') ADVANCE(275);
      if (lookahead == 'o') ADVANCE(386);
      END_STATE();
    case 100:
      if (lookahead == 'a') ADVANCE(294);
      END_STATE();
    case 101:
      if (lookahead == 'a') ADVANCE(161);
      if (lookahead == 'o') ADVANCE(293);
      END_STATE();
    case 102:
      if (lookahead == 'a') ADVANCE(405);
      END_STATE();
    case 103:
      if (lookahead == 'a') ADVANCE(517);
      if (lookahead == 'e') ADVANCE(152);
      END_STATE();
    case 104:
      if (lookahead == 'a') ADVANCE(173);
      END_STATE();
    case 105:
      if (lookahead == 'a') ADVANCE(173);
      if (lookahead == 'x') ADVANCE(44);
      END_STATE();
    case 106:
      if (lookahead == 'a') ADVANCE(509);
      END_STATE();
    case 107:
      if (lookahead == 'a') ADVANCE(380);
      END_STATE();
    case 108:
      if (lookahead == 'a') ADVANCE(511);
      END_STATE();
    case 109:
      if (lookahead == 'a') ADVANCE(362);
      END_STATE();
    case 110:
      if (lookahead == 'a') ADVANCE(156);
      END_STATE();
    case 111:
      if (lookahead == 'a') ADVANCE(462);
      END_STATE();
    case 112:
      if (lookahead == 'a') ADVANCE(90);
      END_STATE();
    case 113:
      if (lookahead == 'a') ADVANCE(454);
      END_STATE();
    case 114:
      if (lookahead == 'a') ADVANCE(389);
      END_STATE();
    case 115:
      if (lookahead == 'a') ADVANCE(389);
      if (lookahead == 'e') ADVANCE(373);
      END_STATE();
    case 116:
      if (lookahead == 'a') ADVANCE(456);
      END_STATE();
    case 117:
      if (lookahead == 'a') ADVANCE(302);
      END_STATE();
    case 118:
      if (lookahead == 'a') ADVANCE(428);
      END_STATE();
    case 119:
      if (lookahead == 'a') ADVANCE(428);
      if (lookahead == 'o') ADVANCE(167);
      if (lookahead == 'y') ADVANCE(477);
      END_STATE();
    case 120:
      if (lookahead == 'a') ADVANCE(273);
      END_STATE();
    case 121:
      if (lookahead == 'a') ADVANCE(463);
      if (lookahead == 'r') ADVANCE(335);
      END_STATE();
    case 122:
      if (lookahead == 'a') ADVANCE(303);
      END_STATE();
    case 123:
      if (lookahead == 'a') ADVANCE(265);
      END_STATE();
    case 124:
      if (lookahead == 'a') ADVANCE(304);
      END_STATE();
    case 125:
      if (lookahead == 'a') ADVANCE(472);
      END_STATE();
    case 126:
      if (lookahead == 'a') ADVANCE(449);
      END_STATE();
    case 127:
      if (lookahead == 'a') ADVANCE(426);
      END_STATE();
    case 128:
      if (lookahead == 'a') ADVANCE(467);
      END_STATE();
    case 129:
      if (lookahead == 'a') ADVANCE(452);
      END_STATE();
    case 130:
      if (lookahead == 'a') ADVANCE(357);
      END_STATE();
    case 131:
      if (lookahead == 'a') ADVANCE(357);
      if (lookahead == 'o') ADVANCE(322);
      END_STATE();
    case 132:
      if (lookahead == 'a') ADVANCE(282);
      END_STATE();
    case 133:
      if (lookahead == 'a') ADVANCE(464);
      END_STATE();
    case 134:
      if (lookahead == 'a') ADVANCE(295);
      END_STATE();
    case 135:
      if (lookahead == 'a') ADVANCE(388);
      END_STATE();
    case 136:
      if (lookahead == 'a') ADVANCE(401);
      END_STATE();
    case 137:
      if (lookahead == 'a') ADVANCE(363);
      END_STATE();
    case 138:
      if (lookahead == 'a') ADVANCE(283);
      END_STATE();
    case 139:
      if (lookahead == 'a') ADVANCE(475);
      END_STATE();
    case 140:
      if (lookahead == 'a') ADVANCE(284);
      END_STATE();
    case 141:
      if (lookahead == 'a') ADVANCE(285);
      END_STATE();
    case 142:
      if (lookahead == 'a') ADVANCE(476);
      END_STATE();
    case 143:
      if (lookahead == 'a') ADVANCE(402);
      END_STATE();
    case 144:
      if (lookahead == 'a') ADVANCE(478);
      END_STATE();
    case 145:
      if (lookahead == 'a') ADVANCE(482);
      END_STATE();
    case 146:
      if (lookahead == 'b') ADVANCE(340);
      if (lookahead == 'y') ADVANCE(47);
      END_STATE();
    case 147:
      if (lookahead == 'b') ADVANCE(278);
      END_STATE();
    case 148:
      if (lookahead == 'b') ADVANCE(217);
      END_STATE();
    case 149:
      if (lookahead == 'b') ADVANCE(352);
      END_STATE();
    case 150:
      if (lookahead == 'c') ADVANCE(65);
      END_STATE();
    case 151:
      if (lookahead == 'c') ADVANCE(246);
      END_STATE();
    case 152:
      if (lookahead == 'c') ADVANCE(334);
      END_STATE();
    case 153:
      if (lookahead == 'c') ADVANCE(277);
      END_STATE();
    case 154:
      if (lookahead == 'c') ADVANCE(109);
      END_STATE();
    case 155:
      if (lookahead == 'c') ADVANCE(336);
      END_STATE();
    case 156:
      if (lookahead == 'c') ADVANCE(185);
      END_STATE();
    case 157:
      if (lookahead == 'c') ADVANCE(347);
      END_STATE();
    case 158:
      if (lookahead == 'c') ADVANCE(137);
      END_STATE();
    case 159:
      if (lookahead == 'c') ADVANCE(497);
      END_STATE();
    case 160:
      if (lookahead == 'c') ADVANCE(351);
      END_STATE();
    case 161:
      if (lookahead == 'c') ADVANCE(224);
      END_STATE();
    case 162:
      if (lookahead == 'c') ADVANCE(479);
      END_STATE();
    case 163:
      if (lookahead == 'c') ADVANCE(144);
      END_STATE();
    case 164:
      if (lookahead == 'd') ADVANCE(57);
      END_STATE();
    case 165:
      if (lookahead == 'd') ADVANCE(667);
      END_STATE();
    case 166:
      if (lookahead == 'd') ADVANCE(705);
      END_STATE();
    case 167:
      if (lookahead == 'd') ADVANCE(513);
      END_STATE();
    case 168:
      if (lookahead == 'd') ADVANCE(259);
      END_STATE();
    case 169:
      if (lookahead == 'd') ADVANCE(183);
      END_STATE();
    case 170:
      if (lookahead == 'd') ADVANCE(412);
      END_STATE();
    case 171:
      if (lookahead == 'd') ADVANCE(188);
      END_STATE();
    case 172:
      if (lookahead == 'd') ADVANCE(189);
      END_STATE();
    case 173:
      if (lookahead == 'd') ADVANCE(209);
      END_STATE();
    case 174:
      if (lookahead == 'd') ADVANCE(220);
      END_STATE();
    case 175:
      if (lookahead == 'e') ADVANCE(105);
      END_STATE();
    case 176:
      if (lookahead == 'e') ADVANCE(59);
      END_STATE();
    case 177:
      if (lookahead == 'e') ADVANCE(508);
      END_STATE();
    case 178:
      if (lookahead == 'e') ADVANCE(1011);
      END_STATE();
    case 179:
      if (lookahead == 'e') ADVANCE(1013);
      END_STATE();
    case 180:
      if (lookahead == 'e') ADVANCE(689);
      END_STATE();
    case 181:
      if (lookahead == 'e') ADVANCE(676);
      END_STATE();
    case 182:
      if (lookahead == 'e') ADVANCE(234);
      END_STATE();
    case 183:
      if (lookahead == 'e') ADVANCE(1005);
      END_STATE();
    case 184:
      if (lookahead == 'e') ADVANCE(1007);
      END_STATE();
    case 185:
      if (lookahead == 'e') ADVANCE(1009);
      END_STATE();
    case 186:
      if (lookahead == 'e') ADVANCE(677);
      END_STATE();
    case 187:
      if (lookahead == 'e') ADVANCE(669);
      END_STATE();
    case 188:
      if (lookahead == 'e') ADVANCE(999);
      END_STATE();
    case 189:
      if (lookahead == 'e') ADVANCE(998);
      END_STATE();
    case 190:
      if (lookahead == 'e') ADVANCE(1001);
      END_STATE();
    case 191:
      if (lookahead == 'e') ADVANCE(1002);
      END_STATE();
    case 192:
      if (lookahead == 'e') ADVANCE(678);
      END_STATE();
    case 193:
      if (lookahead == 'e') ADVANCE(233);
      END_STATE();
    case 194:
      if (lookahead == 'e') ADVANCE(701);
      END_STATE();
    case 195:
      if (lookahead == 'e') ADVANCE(371);
      END_STATE();
    case 196:
      if (lookahead == 'e') ADVANCE(232);
      END_STATE();
    case 197:
      if (lookahead == 'e') ADVANCE(45);
      END_STATE();
    case 198:
      if (lookahead == 'e') ADVANCE(507);
      END_STATE();
    case 199:
      if (lookahead == 'e') ADVANCE(507);
      if (lookahead == 't') ADVANCE(296);
      END_STATE();
    case 200:
      if (lookahead == 'e') ADVANCE(229);
      END_STATE();
    case 201:
      if (lookahead == 'e') ADVANCE(381);
      END_STATE();
    case 202:
      if (lookahead == 'e') ADVANCE(235);
      END_STATE();
    case 203:
      if (lookahead == 'e') ADVANCE(423);
      END_STATE();
    case 204:
      if (lookahead == 'e') ADVANCE(159);
      END_STATE();
    case 205:
      if (lookahead == 'e') ADVANCE(168);
      END_STATE();
    case 206:
      if (lookahead == 'e') ADVANCE(165);
      END_STATE();
    case 207:
      if (lookahead == 'e') ADVANCE(425);
      END_STATE();
    case 208:
      if (lookahead == 'e') ADVANCE(162);
      END_STATE();
    case 209:
      if (lookahead == 'e') ADVANCE(372);
      END_STATE();
    case 210:
      if (lookahead == 'e') ADVANCE(407);
      END_STATE();
    case 211:
      if (lookahead == 'e') ADVANCE(378);
      END_STATE();
    case 212:
      if (lookahead == 'e') ADVANCE(374);
      END_STATE();
    case 213:
      if (lookahead == 'e') ADVANCE(122);
      END_STATE();
    case 214:
      if (lookahead == 'e') ADVANCE(379);
      END_STATE();
    case 215:
      if (lookahead == 'e') ADVANCE(104);
      END_STATE();
    case 216:
      if (lookahead == 'e') ADVANCE(403);
      END_STATE();
    case 217:
      if (lookahead == 'e') ADVANCE(375);
      END_STATE();
    case 218:
      if (lookahead == 'e') ADVANCE(376);
      END_STATE();
    case 219:
      if (lookahead == 'e') ADVANCE(416);
      END_STATE();
    case 220:
      if (lookahead == 'e') ADVANCE(418);
      END_STATE();
    case 221:
      if (lookahead == 'e') ADVANCE(440);
      END_STATE();
    case 222:
      if (lookahead == 'e') ADVANCE(76);
      END_STATE();
    case 223:
      if (lookahead == 'e') ADVANCE(434);
      END_STATE();
    case 224:
      if (lookahead == 'e') ADVANCE(393);
      END_STATE();
    case 225:
      if (lookahead == 'e') ADVANCE(145);
      END_STATE();
    case 226:
      if (lookahead == 'e') ADVANCE(157);
      END_STATE();
    case 227:
      if (lookahead == 'e') ADVANCE(441);
      END_STATE();
    case 228:
      if (lookahead == 'f') ADVANCE(480);
      END_STATE();
    case 229:
      if (lookahead == 'f') ADVANCE(353);
      END_STATE();
    case 230:
      if (lookahead == 'g') ADVANCE(78);
      END_STATE();
    case 231:
      if (lookahead == 'g') ADVANCE(698);
      END_STATE();
    case 232:
      if (lookahead == 'g') ADVANCE(177);
      END_STATE();
    case 233:
      if (lookahead == 'g') ADVANCE(177);
      if (lookahead == 'p') ADVANCE(280);
      END_STATE();
    case 234:
      if (lookahead == 'g') ADVANCE(177);
      if (lookahead == 'p') ADVANCE(280);
      if (lookahead == 't') ADVANCE(387);
      END_STATE();
    case 235:
      if (lookahead == 'g') ADVANCE(218);
      END_STATE();
    case 236:
      if (lookahead == 'h') ADVANCE(690);
      END_STATE();
    case 237:
      if (lookahead == 'h') ADVANCE(691);
      END_STATE();
    case 238:
      if (lookahead == 'h') ADVANCE(1008);
      END_STATE();
    case 239:
      if (lookahead == 'h') ADVANCE(723);
      END_STATE();
    case 240:
      if (lookahead == 'h') ADVANCE(722);
      END_STATE();
    case 241:
      if (lookahead == 'h') ADVANCE(51);
      END_STATE();
    case 242:
      if (lookahead == 'h') ADVANCE(88);
      END_STATE();
    case 243:
      if (lookahead == 'h') ADVANCE(95);
      if (lookahead == 't') ADVANCE(133);
      END_STATE();
    case 244:
      if (lookahead == 'h') ADVANCE(117);
      END_STATE();
    case 245:
      if (lookahead == 'h') ADVANCE(124);
      END_STATE();
    case 246:
      if (lookahead == 'h') ADVANCE(219);
      END_STATE();
    case 247:
      if (lookahead == 'i') ADVANCE(150);
      END_STATE();
    case 248:
      if (lookahead == 'i') ADVANCE(364);
      END_STATE();
    case 249:
      if (lookahead == 'i') ADVANCE(203);
      END_STATE();
    case 250:
      if (lookahead == 'i') ADVANCE(299);
      END_STATE();
    case 251:
      if (lookahead == 'i') ADVANCE(323);
      END_STATE();
    case 252:
      if (lookahead == 'i') ADVANCE(333);
      END_STATE();
    case 253:
      if (lookahead == 'i') ADVANCE(306);
      END_STATE();
    case 254:
      if (lookahead == 'i') ADVANCE(166);
      END_STATE();
    case 255:
      if (lookahead == 'i') ADVANCE(96);
      END_STATE();
    case 256:
      if (lookahead == 'i') ADVANCE(180);
      END_STATE();
    case 257:
      if (lookahead == 'i') ADVANCE(337);
      END_STATE();
    case 258:
      if (lookahead == 'i') ADVANCE(446);
      END_STATE();
    case 259:
      if (lookahead == 'i') ADVANCE(396);
      END_STATE();
    case 260:
      if (lookahead == 'i') ADVANCE(411);
      END_STATE();
    case 261:
      if (lookahead == 'i') ADVANCE(338);
      END_STATE();
    case 262:
      if (lookahead == 'i') ADVANCE(438);
      END_STATE();
    case 263:
      if (lookahead == 'i') ADVANCE(468);
      END_STATE();
    case 264:
      if (lookahead == 'i') ADVANCE(469);
      END_STATE();
    case 265:
      if (lookahead == 'i') ADVANCE(315);
      END_STATE();
    case 266:
      if (lookahead == 'i') ADVANCE(319);
      if (lookahead == 'm') ADVANCE(108);
      END_STATE();
    case 267:
      if (lookahead == 'k') ADVANCE(249);
      END_STATE();
    case 268:
      if (lookahead == 'k') ADVANCE(256);
      END_STATE();
    case 269:
      if (lookahead == 'l') ADVANCE(682);
      END_STATE();
    case 270:
      if (lookahead == 'l') ADVANCE(660);
      END_STATE();
    case 271:
      if (lookahead == 'l') ADVANCE(68);
      END_STATE();
    case 272:
      if (lookahead == 'l') ADVANCE(71);
      END_STATE();
    case 273:
      if (lookahead == 'l') ADVANCE(674);
      END_STATE();
    case 274:
      if (lookahead == 'l') ADVANCE(270);
      END_STATE();
    case 275:
      if (lookahead == 'l') ADVANCE(197);
      END_STATE();
    case 276:
      if (lookahead == 'l') ADVANCE(258);
      END_STATE();
    case 277:
      if (lookahead == 'l') ADVANCE(492);
      END_STATE();
    case 278:
      if (lookahead == 'l') ADVANCE(181);
      END_STATE();
    case 279:
      if (lookahead == 'l') ADVANCE(431);
      END_STATE();
    case 280:
      if (lookahead == 'l') ADVANCE(110);
      END_STATE();
    case 281:
      if (lookahead == 'l') ADVANCE(354);
      END_STATE();
    case 282:
      if (lookahead == 'l') ADVANCE(414);
      END_STATE();
    case 283:
      if (lookahead == 'l') ADVANCE(419);
      END_STATE();
    case 284:
      if (lookahead == 'l') ADVANCE(420);
      END_STATE();
    case 285:
      if (lookahead == 'l') ADVANCE(421);
      END_STATE();
    case 286:
      if (lookahead == 'l') ADVANCE(213);
      END_STATE();
    case 287:
      if (lookahead == 'l') ADVANCE(208);
      END_STATE();
    case 288:
      if (lookahead == 'l') ADVANCE(458);
      END_STATE();
    case 289:
      if (lookahead == 'l') ADVANCE(287);
      END_STATE();
    case 290:
      if (lookahead == 'm') ADVANCE(77);
      END_STATE();
    case 291:
      if (lookahead == 'm') ADVANCE(67);
      END_STATE();
    case 292:
      if (lookahead == 'm') ADVANCE(148);
      END_STATE();
    case 293:
      if (lookahead == 'm') ADVANCE(360);
      if (lookahead == 'u') ADVANCE(310);
      END_STATE();
    case 294:
      if (lookahead == 'm') ADVANCE(429);
      END_STATE();
    case 295:
      if (lookahead == 'm') ADVANCE(430);
      END_STATE();
    case 296:
      if (lookahead == 'm') ADVANCE(272);
      END_STATE();
    case 297:
      if (lookahead == 'm') ADVANCE(361);
      END_STATE();
    case 298:
      if (lookahead == 'm') ADVANCE(126);
      END_STATE();
    case 299:
      if (lookahead == 'n') ADVANCE(230);
      END_STATE();
    case 300:
      if (lookahead == 'n') ADVANCE(684);
      END_STATE();
    case 301:
      if (lookahead == 'n') ADVANCE(668);
      END_STATE();
    case 302:
      if (lookahead == 'n') ADVANCE(715);
      END_STATE();
    case 303:
      if (lookahead == 'n') ADVANCE(697);
      END_STATE();
    case 304:
      if (lookahead == 'n') ADVANCE(710);
      END_STATE();
    case 305:
      if (lookahead == 'n') ADVANCE(699);
      END_STATE();
    case 306:
      if (lookahead == 'n') ADVANCE(231);
      END_STATE();
    case 307:
      if (lookahead == 'n') ADVANCE(424);
      END_STATE();
    case 308:
      if (lookahead == 'n') ADVANCE(153);
      if (lookahead == 's') ADVANCE(66);
      END_STATE();
    case 309:
      if (lookahead == 'n') ADVANCE(170);
      if (lookahead == 'q') ADVANCE(496);
      if (lookahead == 'x') ADVANCE(262);
      END_STATE();
    case 310:
      if (lookahead == 'n') ADVANCE(445);
      END_STATE();
    case 311:
      if (lookahead == 'n') ADVANCE(432);
      END_STATE();
    case 312:
      if (lookahead == 'n') ADVANCE(447);
      END_STATE();
    case 313:
      if (lookahead == 'n') ADVANCE(450);
      END_STATE();
    case 314:
      if (lookahead == 'n') ADVANCE(470);
      if (lookahead == 'u') ADVANCE(310);
      END_STATE();
    case 315:
      if (lookahead == 'n') ADVANCE(417);
      END_STATE();
    case 316:
      if (lookahead == 'n') ADVANCE(474);
      if (lookahead == 'p') ADVANCE(502);
      if (lookahead == 's') ADVANCE(355);
      END_STATE();
    case 317:
      if (lookahead == 'n') ADVANCE(227);
      END_STATE();
    case 318:
      if (lookahead == 'n') ADVANCE(366);
      END_STATE();
    case 319:
      if (lookahead == 'n') ADVANCE(481);
      END_STATE();
    case 320:
      if (lookahead == 'n') ADVANCE(160);
      END_STATE();
    case 321:
      if (lookahead == 'o') ADVANCE(370);
      END_STATE();
    case 322:
      if (lookahead == 'o') ADVANCE(267);
      END_STATE();
    case 323:
      if (lookahead == 'o') ADVANCE(307);
      END_STATE();
    case 324:
      if (lookahead == 'o') ADVANCE(69);
      END_STATE();
    case 325:
      if (lookahead == 'o') ADVANCE(69);
      if (lookahead == 'r') ADVANCE(491);
      END_STATE();
    case 326:
      if (lookahead == 'o') ADVANCE(505);
      END_STATE();
    case 327:
      if (lookahead == 'o') ADVANCE(314);
      END_STATE();
    case 328:
      if (lookahead == 'o') ADVANCE(322);
      END_STATE();
    case 329:
      if (lookahead == 'o') ADVANCE(167);
      if (lookahead == 'y') ADVANCE(477);
      END_STATE();
    case 330:
      if (lookahead == 'o') ADVANCE(506);
      END_STATE();
    case 331:
      if (lookahead == 'o') ADVANCE(318);
      END_STATE();
    case 332:
      if (lookahead == 'o') ADVANCE(163);
      END_STATE();
    case 333:
      if (lookahead == 'o') ADVANCE(300);
      END_STATE();
    case 334:
      if (lookahead == 'o') ADVANCE(169);
      END_STATE();
    case 335:
      if (lookahead == 'o') ADVANCE(510);
      END_STATE();
    case 336:
      if (lookahead == 'o') ADVANCE(498);
      END_STATE();
    case 337:
      if (lookahead == 'o') ADVANCE(301);
      END_STATE();
    case 338:
      if (lookahead == 'o') ADVANCE(305);
      END_STATE();
    case 339:
      if (lookahead == 'o') ADVANCE(289);
      END_STATE();
    case 340:
      if (lookahead == 'o') ADVANCE(433);
      END_STATE();
    case 341:
      if (lookahead == 'o') ADVANCE(350);
      END_STATE();
    case 342:
      if (lookahead == 'o') ADVANCE(451);
      if (lookahead == 't') ADVANCE(238);
      END_STATE();
    case 343:
      if (lookahead == 'o') ADVANCE(451);
      if (lookahead == 't') ADVANCE(238);
      if (lookahead == 'u') ADVANCE(274);
      END_STATE();
    case 344:
      if (lookahead == 'o') ADVANCE(382);
      END_STATE();
    case 345:
      if (lookahead == 'o') ADVANCE(268);
      END_STATE();
    case 346:
      if (lookahead == 'o') ADVANCE(345);
      END_STATE();
    case 347:
      if (lookahead == 'o') ADVANCE(171);
      END_STATE();
    case 348:
      if (lookahead == 'o') ADVANCE(489);
      END_STATE();
    case 349:
      if (lookahead == 'o') ADVANCE(386);
      END_STATE();
    case 350:
      if (lookahead == 'o') ADVANCE(286);
      END_STATE();
    case 351:
      if (lookahead == 'o') ADVANCE(172);
      END_STATE();
    case 352:
      if (lookahead == 'o') ADVANCE(436);
      END_STATE();
    case 353:
      if (lookahead == 'o') ADVANCE(398);
      END_STATE();
    case 354:
      if (lookahead == 'o') ADVANCE(129);
      END_STATE();
    case 355:
      if (lookahead == 'o') ADVANCE(70);
      END_STATE();
    case 356:
      if (lookahead == 'p') ADVANCE(453);
      END_STATE();
    case 357:
      if (lookahead == 'p') ADVANCE(455);
      END_STATE();
    case 358:
      if (lookahead == 'p') ADVANCE(276);
      END_STATE();
    case 359:
      if (lookahead == 'p') ADVANCE(276);
      if (lookahead == 't') ADVANCE(143);
      END_STATE();
    case 360:
      if (lookahead == 'p') ADVANCE(394);
      END_STATE();
    case 361:
      if (lookahead == 'p') ADVANCE(466);
      END_STATE();
    case 362:
      if (lookahead == 'p') ADVANCE(190);
      END_STATE();
    case 363:
      if (lookahead == 'p') ADVANCE(191);
      END_STATE();
    case 364:
      if (lookahead == 'p') ADVANCE(135);
      END_STATE();
    case 365:
      if (lookahead == 'p') ADVANCE(113);
      END_STATE();
    case 366:
      if (lookahead == 'p') ADVANCE(116);
      END_STATE();
    case 367:
      if (lookahead == 'q') ADVANCE(499);
      END_STATE();
    case 368:
      if (lookahead == 'q') ADVANCE(500);
      END_STATE();
    case 369:
      if (lookahead == 'q') ADVANCE(501);
      END_STATE();
    case 370:
      if (lookahead == 'r') ADVANCE(290);
      END_STATE();
    case 371:
      if (lookahead == 'r') ADVANCE(512);
      END_STATE();
    case 372:
      if (lookahead == 'r') ADVANCE(688);
      END_STATE();
    case 373:
      if (lookahead == 'r') ADVANCE(146);
      END_STATE();
    case 374:
      if (lookahead == 'r') ADVANCE(75);
      END_STATE();
    case 375:
      if (lookahead == 'r') ADVANCE(700);
      END_STATE();
    case 376:
      if (lookahead == 'r') ADVANCE(695);
      END_STATE();
    case 377:
      if (lookahead == 'r') ADVANCE(72);
      END_STATE();
    case 378:
      if (lookahead == 'r') ADVANCE(149);
      END_STATE();
    case 379:
      if (lookahead == 'r') ADVANCE(503);
      END_STATE();
    case 380:
      if (lookahead == 'r') ADVANCE(100);
      END_STATE();
    case 381:
      if (lookahead == 'r') ADVANCE(457);
      END_STATE();
    case 382:
      if (lookahead == 'r') ADVANCE(291);
      END_STATE();
    case 383:
      if (lookahead == 'r') ADVANCE(491);
      END_STATE();
    case 384:
      if (lookahead == 'r') ADVANCE(269);
      END_STATE();
    case 385:
      if (lookahead == 'r') ADVANCE(250);
      END_STATE();
    case 386:
      if (lookahead == 'r') ADVANCE(298);
      END_STATE();
    case 387:
      if (lookahead == 'r') ADVANCE(515);
      END_STATE();
    case 388:
      if (lookahead == 'r') ADVANCE(444);
      END_STATE();
    case 389:
      if (lookahead == 'r') ADVANCE(255);
      END_STATE();
    case 390:
      if (lookahead == 'r') ADVANCE(271);
      END_STATE();
    case 391:
      if (lookahead == 'r') ADVANCE(142);
      END_STATE();
    case 392:
      if (lookahead == 'r') ADVANCE(253);
      END_STATE();
    case 393:
      if (lookahead == 'r') ADVANCE(448);
      END_STATE();
    case 394:
      if (lookahead == 'r') ADVANCE(221);
      END_STATE();
    case 395:
      if (lookahead == 'r') ADVANCE(205);
      END_STATE();
    case 396:
      if (lookahead == 'r') ADVANCE(410);
      END_STATE();
    case 397:
      if (lookahead == 'r') ADVANCE(187);
      END_STATE();
    case 398:
      if (lookahead == 'r') ADVANCE(222);
      END_STATE();
    case 399:
      if (lookahead == 'r') ADVANCE(225);
      END_STATE();
    case 400:
      if (lookahead == 'r') ADVANCE(207);
      END_STATE();
    case 401:
      if (lookahead == 'r') ADVANCE(134);
      END_STATE();
    case 402:
      if (lookahead == 'r') ADVANCE(483);
      END_STATE();
    case 403:
      if (lookahead == 'r') ADVANCE(81);
      END_STATE();
    case 404:
      if (lookahead == 'r') ADVANCE(73);
      END_STATE();
    case 405:
      if (lookahead == 's') ADVANCE(247);
      END_STATE();
    case 406:
      if (lookahead == 's') ADVANCE(84);
      END_STATE();
    case 407:
      if (lookahead == 's') ADVANCE(685);
      END_STATE();
    case 408:
      if (lookahead == 's') ADVANCE(681);
      END_STATE();
    case 409:
      if (lookahead == 's') ADVANCE(64);
      END_STATE();
    case 410:
      if (lookahead == 's') ADVANCE(670);
      END_STATE();
    case 411:
      if (lookahead == 's') ADVANCE(671);
      END_STATE();
    case 412:
      if (lookahead == 's') ADVANCE(82);
      END_STATE();
    case 413:
      if (lookahead == 's') ADVANCE(80);
      END_STATE();
    case 414:
      if (lookahead == 's') ADVANCE(706);
      END_STATE();
    case 415:
      if (lookahead == 's') ADVANCE(694);
      END_STATE();
    case 416:
      if (lookahead == 's') ADVANCE(725);
      END_STATE();
    case 417:
      if (lookahead == 's') ADVANCE(724);
      END_STATE();
    case 418:
      if (lookahead == 's') ADVANCE(726);
      END_STATE();
    case 419:
      if (lookahead == 's') ADVANCE(708);
      END_STATE();
    case 420:
      if (lookahead == 's') ADVANCE(720);
      END_STATE();
    case 421:
      if (lookahead == 's') ADVANCE(713);
      END_STATE();
    case 422:
      if (lookahead == 's') ADVANCE(437);
      END_STATE();
    case 423:
      if (lookahead == 's') ADVANCE(85);
      END_STATE();
    case 424:
      if (lookahead == 's') ADVANCE(86);
      END_STATE();
    case 425:
      if (lookahead == 's') ADVANCE(87);
      END_STATE();
    case 426:
      if (lookahead == 's') ADVANCE(48);
      END_STATE();
    case 427:
      if (lookahead == 's') ADVANCE(331);
      END_STATE();
    case 428:
      if (lookahead == 's') ADVANCE(176);
      END_STATE();
    case 429:
      if (lookahead == 's') ADVANCE(89);
      END_STATE();
    case 430:
      if (lookahead == 's') ADVANCE(91);
      END_STATE();
    case 431:
      if (lookahead == 's') ADVANCE(179);
      END_STATE();
    case 432:
      if (lookahead == 's') ADVANCE(204);
      END_STATE();
    case 433:
      if (lookahead == 's') ADVANCE(186);
      END_STATE();
    case 434:
      if (lookahead == 's') ADVANCE(413);
      END_STATE();
    case 435:
      if (lookahead == 's') ADVANCE(206);
      END_STATE();
    case 436:
      if (lookahead == 's') ADVANCE(192);
      END_STATE();
    case 437:
      if (lookahead == 's') ADVANCE(201);
      END_STATE();
    case 438:
      if (lookahead == 's') ADVANCE(473);
      END_STATE();
    case 439:
      if (lookahead == 's') ADVANCE(154);
      END_STATE();
    case 440:
      if (lookahead == 's') ADVANCE(435);
      END_STATE();
    case 441:
      if (lookahead == 's') ADVANCE(158);
      END_STATE();
    case 442:
      if (lookahead == 's') ADVANCE(83);
      END_STATE();
    case 443:
      if (lookahead == 't') ADVANCE(242);
      END_STATE();
    case 444:
      if (lookahead == 't') ADVANCE(74);
      END_STATE();
    case 445:
      if (lookahead == 't') ADVANCE(997);
      END_STATE();
    case 446:
      if (lookahead == 't') ADVANCE(1010);
      END_STATE();
    case 447:
      if (lookahead == 't') ADVANCE(1000);
      END_STATE();
    case 448:
      if (lookahead == 't') ADVANCE(666);
      END_STATE();
    case 449:
      if (lookahead == 't') ADVANCE(1006);
      END_STATE();
    case 450:
      if (lookahead == 't') ADVANCE(675);
      END_STATE();
    case 451:
      if (lookahead == 't') ADVANCE(693);
      END_STATE();
    case 452:
      if (lookahead == 't') ADVANCE(696);
      END_STATE();
    case 453:
      if (lookahead == 't') ADVANCE(251);
      END_STATE();
    case 454:
      if (lookahead == 't') ADVANCE(236);
      END_STATE();
    case 455:
      if (lookahead == 't') ADVANCE(486);
      END_STATE();
    case 456:
      if (lookahead == 't') ADVANCE(237);
      END_STATE();
    case 457:
      if (lookahead == 't') ADVANCE(406);
      END_STATE();
    case 458:
      if (lookahead == 't') ADVANCE(248);
      END_STATE();
    case 459:
      if (lookahead == 't') ADVANCE(296);
      END_STATE();
    case 460:
      if (lookahead == 't') ADVANCE(238);
      END_STATE();
    case 461:
      if (lookahead == 't') ADVANCE(238);
      if (lookahead == 'u') ADVANCE(274);
      END_STATE();
    case 462:
      if (lookahead == 't') ADVANCE(112);
      END_STATE();
    case 463:
      if (lookahead == 't') ADVANCE(241);
      END_STATE();
    case 464:
      if (lookahead == 't') ADVANCE(495);
      END_STATE();
    case 465:
      if (lookahead == 't') ADVANCE(385);
      END_STATE();
    case 466:
      if (lookahead == 't') ADVANCE(516);
      END_STATE();
    case 467:
      if (lookahead == 't') ADVANCE(151);
      END_STATE();
    case 468:
      if (lookahead == 't') ADVANCE(239);
      END_STATE();
    case 469:
      if (lookahead == 't') ADVANCE(240);
      END_STATE();
    case 470:
      if (lookahead == 't') ADVANCE(123);
      END_STATE();
    case 471:
      if (lookahead == 't') ADVANCE(392);
      END_STATE();
    case 472:
      if (lookahead == 't') ADVANCE(184);
      END_STATE();
    case 473:
      if (lookahead == 't') ADVANCE(415);
      END_STATE();
    case 474:
      if (lookahead == 't') ADVANCE(202);
      END_STATE();
    case 475:
      if (lookahead == 't') ADVANCE(194);
      END_STATE();
    case 476:
      if (lookahead == 't') ADVANCE(252);
      END_STATE();
    case 477:
      if (lookahead == 't') ADVANCE(210);
      END_STATE();
    case 478:
      if (lookahead == 't') ADVANCE(257);
      END_STATE();
    case 479:
      if (lookahead == 't') ADVANCE(261);
      END_STATE();
    case 480:
      if (lookahead == 't') ADVANCE(212);
      END_STATE();
    case 481:
      if (lookahead == 't') ADVANCE(214);
      END_STATE();
    case 482:
      if (lookahead == 't') ADVANCE(216);
      END_STATE();
    case 483:
      if (lookahead == 't') ADVANCE(442);
      END_STATE();
    case 484:
      if (lookahead == 'u') ADVANCE(288);
      END_STATE();
    case 485:
      if (lookahead == 'u') ADVANCE(195);
      END_STATE();
    case 486:
      if (lookahead == 'u') ADVANCE(400);
      END_STATE();
    case 487:
      if (lookahead == 'u') ADVANCE(274);
      END_STATE();
    case 488:
      if (lookahead == 'u') ADVANCE(443);
      END_STATE();
    case 489:
      if (lookahead == 'u') ADVANCE(310);
      END_STATE();
    case 490:
      if (lookahead == 'u') ADVANCE(292);
      END_STATE();
    case 491:
      if (lookahead == 'u') ADVANCE(178);
      END_STATE();
    case 492:
      if (lookahead == 'u') ADVANCE(174);
      END_STATE();
    case 493:
      if (lookahead == 'u') ADVANCE(391);
      END_STATE();
    case 494:
      if (lookahead == 'u') ADVANCE(254);
      END_STATE();
    case 495:
      if (lookahead == 'u') ADVANCE(408);
      END_STATE();
    case 496:
      if (lookahead == 'u') ADVANCE(132);
      END_STATE();
    case 497:
      if (lookahead == 'u') ADVANCE(397);
      END_STATE();
    case 498:
      if (lookahead == 'u') ADVANCE(313);
      END_STATE();
    case 499:
      if (lookahead == 'u') ADVANCE(138);
      END_STATE();
    case 500:
      if (lookahead == 'u') ADVANCE(140);
      END_STATE();
    case 501:
      if (lookahead == 'u') ADVANCE(141);
      END_STATE();
    case 502:
      if (lookahead == 'v') ADVANCE(55);
      END_STATE();
    case 503:
      if (lookahead == 'v') ADVANCE(120);
      END_STATE();
    case 504:
      if (lookahead == 'v') ADVANCE(211);
      END_STATE();
    case 505:
      if (lookahead == 'w') ADVANCE(1003);
      END_STATE();
    case 506:
      if (lookahead == 'w') ADVANCE(1004);
      END_STATE();
    case 507:
      if (lookahead == 'x') ADVANCE(44);
      END_STATE();
    case 508:
      if (lookahead == 'x') ADVANCE(692);
      END_STATE();
    case 509:
      if (lookahead == 'x') ADVANCE(50);
      END_STATE();
    case 510:
      if (lookahead == 'x') ADVANCE(514);
      END_STATE();
    case 511:
      if (lookahead == 'x') ADVANCE(49);
      END_STATE();
    case 512:
      if (lookahead == 'y') ADVANCE(79);
      END_STATE();
    case 513:
      if (lookahead == 'y') ADVANCE(683);
      END_STATE();
    case 514:
      if (lookahead == 'y') ADVANCE(672);
      END_STATE();
    case 515:
      if (lookahead == 'y') ADVANCE(673);
      END_STATE();
    case 516:
      if (lookahead == 'y') ADVANCE(702);
      END_STATE();
    case 517:
      if (lookahead == 'y') ADVANCE(409);
      END_STATE();
    case 518:
      if (lookahead == '{') ADVANCE(991);
      END_STATE();
    case 519:
      if (lookahead == '}') ADVANCE(994);
      END_STATE();
    case 520:
      if (eof) ADVANCE(531);
      ADVANCE_MAP(
        '\n', 532,
        '"', 743,
        '#', 1025,
        '.', 1017,
        '<', 719,
        'C', 610,
        'D', 578,
        'G', 579,
        'H', 581,
        'L', 591,
        'O', 614,
        'P', 569,
        'T', 616,
        'U', 603,
        'V', 592,
        '[', 982,
        '`', 93,
        'b', 119,
        'c', 346,
        'd', 493,
        'f', 98,
        'h', 175,
        'j', 427,
        'm', 164,
        'n', 487,
        'r', 196,
        's', 243,
        't', 383,
        'u', 384,
        'v', 114,
        'x', 365,
        '{', 972,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1015);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(627);
      if (set_contains(extras_character_set_2, 9, lookahead)) SKIP(521);
      END_STATE();
    case 521:
      if (eof) ADVANCE(531);
      ADVANCE_MAP(
        '\n', 532,
        '"', 743,
        '#', 1025,
        '.', 1017,
        '<', 719,
        'C', 610,
        'D', 578,
        'G', 579,
        'H', 581,
        'L', 591,
        'O', 614,
        'P', 569,
        'T', 616,
        'U', 603,
        'V', 592,
        '[', 982,
        '`', 93,
        'b', 119,
        'c', 346,
        'd', 493,
        'f', 98,
        'h', 175,
        'j', 427,
        'm', 164,
        'n', 487,
        'r', 196,
        's', 243,
        't', 383,
        'u', 384,
        'v', 114,
        'x', 365,
        '{', 971,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1015);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(627);
      if (set_contains(extras_character_set_2, 9, lookahead)) SKIP(521);
      END_STATE();
    case 522:
      if (eof) ADVANCE(531);
      ADVANCE_MAP(
        '\n', 532,
        '"', 743,
        '#', 1025,
        '<', 719,
        'C', 610,
        'D', 578,
        'G', 579,
        'H', 580,
        'L', 591,
        'O', 614,
        'P', 569,
        'T', 616,
        'U', 603,
        'V', 592,
        '[', 984,
        '`', 93,
        'b', 118,
        'c', 101,
        'd', 103,
        'f', 99,
        'h', 199,
        'i', 311,
        'l', 332,
        'm', 106,
        'n', 461,
        'p', 121,
        'r', 182,
        's', 358,
        't', 325,
        'u', 390,
        'v', 115,
        'x', 365,
        '{', 972,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1015);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(627);
      if (set_contains(extras_character_set_2, 9, lookahead)) SKIP(523);
      END_STATE();
    case 523:
      if (eof) ADVANCE(531);
      ADVANCE_MAP(
        '\n', 532,
        '"', 743,
        '#', 1025,
        '<', 719,
        'C', 610,
        'D', 578,
        'G', 579,
        'H', 580,
        'L', 591,
        'O', 614,
        'P', 569,
        'T', 616,
        'U', 603,
        'V', 592,
        '[', 984,
        '`', 93,
        'b', 118,
        'c', 101,
        'd', 103,
        'f', 99,
        'h', 199,
        'i', 311,
        'l', 332,
        'm', 106,
        'n', 461,
        'p', 121,
        'r', 182,
        's', 358,
        't', 325,
        'u', 390,
        'v', 115,
        'x', 365,
        '{', 971,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1015);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(627);
      if (set_contains(extras_character_set_2, 9, lookahead)) SKIP(523);
      END_STATE();
    case 524:
      if (eof) ADVANCE(531);
      ADVANCE_MAP(
        '\n', 532,
        '"', 743,
        '#', 1025,
        '<', 719,
        'C', 610,
        'D', 578,
        'G', 579,
        'H', 580,
        'L', 591,
        'O', 614,
        'P', 569,
        'T', 616,
        'U', 603,
        'V', 592,
        '[', 984,
        '`', 93,
        'b', 118,
        'f', 98,
        'h', 198,
        'n', 487,
        't', 383,
        '{', 971,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1015);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(627);
      if (set_contains(extras_character_set_2, 9, lookahead)) SKIP(524);
      END_STATE();
    case 525:
      if (eof) ADVANCE(531);
      ADVANCE_MAP(
        '\n', 532,
        '"', 743,
        '#', 1025,
        '<', 719,
        'C', 610,
        'D', 578,
        'G', 579,
        'H', 581,
        'L', 591,
        'O', 614,
        'P', 569,
        'T', 616,
        'U', 603,
        'V', 592,
        '[', 982,
        '`', 93,
        'b', 118,
        'f', 98,
        'h', 198,
        'n', 487,
        't', 383,
        '{', 971,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1015);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(627);
      if (set_contains(extras_character_set_2, 9, lookahead)) SKIP(525);
      END_STATE();
    case 526:
      if (eof) ADVANCE(531);
      ADVANCE_MAP(
        '\n', 532,
        '"', 743,
        '#', 1025,
        '<', 719,
        'C', 807,
        'D', 775,
        'G', 776,
        'H', 777,
        'L', 790,
        'O', 813,
        'P', 766,
        'T', 816,
        'U', 801,
        'V', 789,
        '[', 985,
        '\\', 924,
        '`', 93,
        'b', 836,
        'f', 837,
        'h', 849,
        'n', 915,
        't', 888,
        '{', 972,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(923);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(922);
      if (set_contains(extras_character_set_2, 9, lookahead)) SKIP(524);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(923);
      END_STATE();
    case 527:
      if (eof) ADVANCE(531);
      ADVANCE_MAP(
        '\n', 532,
        '"', 743,
        '#', 1025,
        '<', 719,
        'C', 807,
        'D', 775,
        'G', 776,
        'H', 778,
        'L', 790,
        'O', 813,
        'P', 766,
        'T', 816,
        'U', 801,
        'V', 789,
        '[', 983,
        '\\', 924,
        '`', 93,
        'b', 836,
        'f', 837,
        'h', 849,
        'n', 915,
        't', 888,
        '{', 972,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(923);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(922);
      if (set_contains(extras_character_set_2, 9, lookahead)) SKIP(525);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(923);
      END_STATE();
    case 528:
      if (eof) ADVANCE(531);
      ADVANCE_MAP(
        '!', 61,
        '"', 743,
        '#', 932,
        '*', 636,
        '+', 1022,
        ',', 979,
        '-', 1023,
        '.', 1017,
        '/', 1026,
        ':', 662,
        ';', 664,
        '<', 716,
        '=', 680,
        '>', 712,
        '?', 63,
        'E', 1021,
        '[', 981,
        '\\', 748,
        ']', 986,
        '`', 935,
        'b', 752,
        'e', 1018,
        'f', 753,
        'n', 754,
        'r', 755,
        't', 756,
        'u', 757,
        '{', 971,
        '}', 978,
        'a', 995,
        'c', 995,
        'd', 995,
      );
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(627);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(635);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(995);
      if (('G' <= lookahead && lookahead <= 'Z')) ADVANCE(627);
      if (set_contains(extras_character_set_2, 9, lookahead)) SKIP(528);
      END_STATE();
    case 529:
      if (eof) ADVANCE(531);
      ADVANCE_MAP(
        '!', 61,
        '"', 743,
        '#', 1025,
        '+', 1022,
        ',', 979,
        '-', 1023,
        '/', 1026,
        ':', 659,
        ';', 664,
        '<', 718,
        '=', 62,
        '>', 712,
        '?', 63,
        '[', 980,
        ']', 986,
        '`', 92,
        'b', 118,
        'c', 327,
        'd', 103,
        'e', 309,
        'f', 99,
        'g', 399,
        'h', 199,
        'i', 308,
        'l', 223,
        'm', 128,
        'n', 343,
        'r', 193,
        's', 359,
        't', 325,
        'u', 390,
        'x', 365,
        '{', 972,
        '}', 519,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1015);
      if (set_contains(extras_character_set_2, 9, lookahead)) SKIP(530);
      END_STATE();
    case 530:
      if (eof) ADVANCE(531);
      ADVANCE_MAP(
        '!', 61,
        '"', 743,
        '#', 1025,
        '+', 1022,
        ',', 979,
        '-', 1023,
        '/', 1026,
        ':', 662,
        ';', 664,
        '<', 718,
        '=', 62,
        '>', 712,
        '?', 63,
        '[', 980,
        ']', 986,
        '`', 92,
        'b', 118,
        'c', 327,
        'd', 103,
        'e', 309,
        'f', 99,
        'g', 399,
        'h', 199,
        'i', 308,
        'l', 223,
        'm', 128,
        'n', 343,
        'r', 193,
        's', 359,
        't', 325,
        'u', 390,
        'x', 365,
        '{', 971,
        '}', 519,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1015);
      if (set_contains(extras_character_set_2, 9, lookahead)) SKIP(530);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(532);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(533);
      if ((set_contains(extras_character_set_2, 9, lookahead)) &&
          lookahead != ' ') ADVANCE(973);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(534);
      if (set_contains(extras_character_set_2, 9, lookahead)) ADVANCE(968);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(535);
      if (set_contains(extras_character_set_2, 9, lookahead)) ADVANCE(948);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(anon_sym_GET);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(627);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(anon_sym_GET);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(922);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(923);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(anon_sym_HEAD);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(627);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(anon_sym_HEAD);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(922);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(923);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(anon_sym_POST);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(627);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(anon_sym_POST);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(922);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(923);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(anon_sym_PUT);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(627);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(anon_sym_PUT);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(922);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(923);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(anon_sym_DELETE);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(627);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(anon_sym_DELETE);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(922);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(923);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(anon_sym_CONNECT);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(627);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(anon_sym_CONNECT);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(922);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(923);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(anon_sym_OPTIONS);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(627);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(anon_sym_OPTIONS);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(922);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(923);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(anon_sym_TRACE);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(627);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(anon_sym_TRACE);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(922);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(923);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(anon_sym_PATCH);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(627);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(anon_sym_PATCH);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(922);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(923);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(anon_sym_LINK);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(627);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(anon_sym_LINK);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(922);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(923);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(anon_sym_UNLINK);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(627);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(anon_sym_UNLINK);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(922);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(923);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(anon_sym_PURGE);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(627);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(anon_sym_PURGE);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(922);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(923);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(anon_sym_LOCK);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(627);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(anon_sym_LOCK);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(922);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(923);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(anon_sym_UNLOCK);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(627);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(anon_sym_UNLOCK);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(922);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(923);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(anon_sym_PROPFIND);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(627);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(anon_sym_PROPFIND);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(922);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(923);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(anon_sym_VIEW);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(627);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(anon_sym_VIEW);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(922);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(923);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'A') ADVANCE(576);
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(627);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'A') ADVANCE(623);
      if (lookahead == 'O') ADVANCE(618);
      if (lookahead == 'R') ADVANCE(609);
      if (lookahead == 'U') ADVANCE(615);
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(627);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'A') ADVANCE(575);
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(627);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'C') ADVANCE(590);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(627);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'C') ADVANCE(597);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(627);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'C') ADVANCE(599);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(627);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'C') ADVANCE(621);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(627);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'C') ADVANCE(584);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(627);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'D') ADVANCE(538);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(627);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'D') ADVANCE(564);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(627);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'E') ADVANCE(600);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(627);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'E') ADVANCE(619);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(627);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'E') ADVANCE(568);
      if (lookahead == 'T') ADVANCE(624);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(627);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'E') ADVANCE(568);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(627);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'E') ADVANCE(626);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(627);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'E') ADVANCE(558);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(627);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'E') ADVANCE(550);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(627);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'E') ADVANCE(544);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(627);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'E') ADVANCE(574);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(627);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'E') ADVANCE(625);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(627);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'F') ADVANCE(594);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(627);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'G') ADVANCE(583);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(627);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'H') ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(627);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'I') ADVANCE(602);
      if (lookahead == 'O') ADVANCE(572);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(627);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'I') ADVANCE(582);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(627);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'I') ADVANCE(606);
      if (lookahead == 'O') ADVANCE(573);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(627);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'I') ADVANCE(605);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(627);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'I') ADVANCE(611);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(627);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'K') ADVANCE(554);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(627);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'K') ADVANCE(560);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(627);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'K') ADVANCE(556);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(627);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'K') ADVANCE(562);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(627);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'L') ADVANCE(587);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(627);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'L') ADVANCE(593);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(627);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'N') ADVANCE(596);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(627);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'N') ADVANCE(601);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(627);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'N') ADVANCE(617);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(627);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'N') ADVANCE(577);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(627);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'N') ADVANCE(598);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(627);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'N') ADVANCE(608);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(627);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'N') ADVANCE(586);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(627);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'O') ADVANCE(612);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(627);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'O') ADVANCE(607);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(627);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'O') ADVANCE(604);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(627);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'P') ADVANCE(588);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(627);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'P') ADVANCE(633);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(627);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'P') ADVANCE(622);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(627);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'R') ADVANCE(589);
      if (lookahead == 'T') ADVANCE(542);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(627);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'R') ADVANCE(570);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(627);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'S') ADVANCE(548);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(627);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'S') ADVANCE(620);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(627);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'T') ADVANCE(536);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(627);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'T') ADVANCE(540);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(627);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'T') ADVANCE(546);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(627);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'T') ADVANCE(595);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(627);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'T') ADVANCE(571);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(627);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'T') ADVANCE(613);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(627);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'T') ADVANCE(585);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(627);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'W') ADVANCE(566);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(627);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(627);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(anon_sym_HTTP_SLASH1_DOT0);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(anon_sym_HTTP_SLASH1_DOT1);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(anon_sym_HTTP_SLASH2);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(anon_sym_HTTP_SLASH3);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(anon_sym_HTTP_SLASH_STAR);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(anon_sym_HTTP);
      if (lookahead == '/') ADVANCE(43);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(627);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(anon_sym_HTTP);
      if (lookahead == '/') ADVANCE(43);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(922);
      if (lookahead == '$' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(923);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(aux_sym_status_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(635);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(anon_sym_LBRACKBasicAuth_RBRACK);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(anon_sym_LBRACKBasicAuth_RBRACK);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(923);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(anon_sym_LBRACKQuery_RBRACK);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(anon_sym_LBRACKQuery_RBRACK);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(923);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(anon_sym_LBRACKQueryStringParams_RBRACK);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(anon_sym_LBRACKQueryStringParams_RBRACK);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(923);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(anon_sym_LBRACKForm_RBRACK);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(anon_sym_LBRACKForm_RBRACK);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(923);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(anon_sym_LBRACKFormParams_RBRACK);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(anon_sym_LBRACKFormParams_RBRACK);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(923);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(anon_sym_LBRACKMultipart_RBRACK);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(anon_sym_LBRACKMultipart_RBRACK);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(923);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(anon_sym_LBRACKMultipartFormData_RBRACK);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(anon_sym_LBRACKMultipartFormData_RBRACK);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(923);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(anon_sym_LBRACKCookies_RBRACK);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(anon_sym_LBRACKCookies_RBRACK);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(923);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(anon_sym_LBRACKCaptures_RBRACK);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(anon_sym_LBRACKCaptures_RBRACK);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(923);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(anon_sym_LBRACKAsserts_RBRACK);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(anon_sym_LBRACKAsserts_RBRACK);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(923);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(anon_sym_LBRACKOptions_RBRACK);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(anon_sym_LBRACKOptions_RBRACK);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(923);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(anon_sym_null);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(anon_sym_null);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(923);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(anon_sym_COLON2);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(anon_sym_file_COMMA);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(aux_sym_file_value_token1);
      if (lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(665);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(anon_sym_cacert);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(anon_sym_compressed);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(anon_sym_location);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(anon_sym_insecure);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(anon_sym_max_DASHredirs);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(anon_sym_path_DASHas_DASHis);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(anon_sym_proxy);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(anon_sym_retry);
      if (lookahead == '-') ADVANCE(266);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(anon_sym_retry_DASHinterval);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(anon_sym_retry_DASHmax_DASHcount);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(anon_sym_variable);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(anon_sym_verbose);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(anon_sym_very_DASHverbose);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(707);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(anon_sym_status);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(anon_sym_url);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(anon_sym_body);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(anon_sym_duration);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(anon_sym_bytes);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(anon_sym_sha256);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(anon_sym_md5);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(anon_sym_header);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(anon_sym_cookie);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(anon_sym_xpath);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(anon_sym_jsonpath);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(anon_sym_regex);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(anon_sym_not);
      if (lookahead == 'E') ADVANCE(367);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(anon_sym_exists);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(anon_sym_isInteger);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(anon_sym_isFloat);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(anon_sym_isBoolean);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(anon_sym_isString);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(anon_sym_isCollection);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(anon_sym_isNumber);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(anon_sym_isIsoDate);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(anon_sym_isEmpty);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(anon_sym_isIpv4);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(anon_sym_isIpv6);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(anon_sym_isUuid);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(anon_sym_equals);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(anon_sym_notEquals);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(anon_sym_greaterThan);
      if (lookahead == 'O') ADVANCE(404);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(714);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(anon_sym_greaterThanOrEquals);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(anon_sym_lessThan);
      if (lookahead == 'O') ADVANCE(377);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '/') ADVANCE(735);
      if (lookahead == '=') ADVANCE(721);
      if (lookahead == '?') ADVANCE(727);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '/') ADVANCE(735);
      if (lookahead == '?') ADVANCE(727);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(721);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '?') ADVANCE(727);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(anon_sym_lessThanOrEquals);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(anon_sym_startsWith);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(anon_sym_endsWith);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(anon_sym_contains);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(anon_sym_matches);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(anon_sym_includes);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(anon_sym_LT_QMARK);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(aux_sym_xml_prolog_tag_token1);
      if (lookahead == '\n') ADVANCE(730);
      if (lookahead == '?') ADVANCE(1025);
      if (lookahead != 0) ADVANCE(728);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(aux_sym_xml_prolog_tag_token1);
      if (lookahead == '#') ADVANCE(728);
      if (set_contains(extras_character_set_2, 9, lookahead)) ADVANCE(729);
      if (lookahead != 0 &&
          lookahead != '?') ADVANCE(730);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(aux_sym_xml_prolog_tag_token1);
      if (lookahead != 0 &&
          lookahead != '?') ADVANCE(730);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(anon_sym_QMARK_GT);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(aux_sym_xml_open_tag_token1);
      if (lookahead == '\n') ADVANCE(734);
      if (lookahead == '>') ADVANCE(1025);
      if (lookahead != 0) ADVANCE(732);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(aux_sym_xml_open_tag_token1);
      if (lookahead == '#') ADVANCE(732);
      if (lookahead == '>') ADVANCE(734);
      if (lookahead == '/' ||
          lookahead == '?') ADVANCE(734);
      if (set_contains(extras_character_set_2, 9, lookahead)) ADVANCE(733);
      if (lookahead != 0) ADVANCE(734);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(aux_sym_xml_open_tag_token1);
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(734);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(anon_sym_LT_SLASH);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(aux_sym_xml_close_tag_token1);
      if (lookahead == '\n') ADVANCE(738);
      if (lookahead == '/' ||
          lookahead == '>') ADVANCE(1025);
      if (lookahead != 0) ADVANCE(736);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(aux_sym_xml_close_tag_token1);
      if (lookahead == '#') ADVANCE(736);
      if (set_contains(extras_character_set_2, 9, lookahead)) ADVANCE(737);
      if (lookahead != 0 &&
          lookahead != '/' &&
          lookahead != '>') ADVANCE(738);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(aux_sym_xml_close_tag_token1);
      if (lookahead != 0 &&
          lookahead != '/' &&
          lookahead != '>') ADVANCE(738);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(anon_sym_base64_COMMA);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(aux_sym_oneline_base64_token1);
      if (lookahead == '\n') ADVANCE(740);
      if (('+' <= lookahead && lookahead <= '-') ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(741);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(aux_sym_oneline_base64_token1);
      if (lookahead == '\n' ||
          ('+' <= lookahead && lookahead <= '-') ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(741);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(anon_sym_hex_COMMA);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(sym_quoted_string_text);
      if (lookahead == '\n') ADVANCE(747);
      if (lookahead == '"' ||
          lookahead == '\\') ADVANCE(1025);
      if (lookahead != 0) ADVANCE(744);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(sym_quoted_string_text);
      if (lookahead == '#') ADVANCE(744);
      if (set_contains(extras_character_set_2, 9, lookahead)) ADVANCE(745);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(747);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(sym_quoted_string_text);
      if (lookahead == '{') ADVANCE(993);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(747);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(sym_quoted_string_text);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(747);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(aux_sym_invalid_quoted_string_escaped_char_token1);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(aux_sym_invalid_quoted_string_escaped_char_token1);
      if (lookahead == '#') ADVANCE(751);
      if (lookahead == 'b') ADVANCE(752);
      if (lookahead == 'f') ADVANCE(753);
      if (lookahead == 'n') ADVANCE(754);
      if (lookahead == 'r') ADVANCE(755);
      if (lookahead == 't') ADVANCE(756);
      if ((set_contains(extras_character_set_2, 9, lookahead)) &&
          lookahead != '\t' &&
          lookahead != '\f' &&
          lookahead != '\r') ADVANCE(750);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '\\' &&
          lookahead != 't' &&
          lookahead != 'u') ADVANCE(749);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(aux_sym_invalid_quoted_string_escaped_char_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1025);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(anon_sym_b);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(anon_sym_f);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(anon_sym_n);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(anon_sym_r);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(anon_sym_t);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(anon_sym_u);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == ',') ADVANCE(742);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(923);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == ',') ADVANCE(663);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(923);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == ',') ADVANCE(739);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(923);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '4') ADVANCE(760);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(923);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '6') ADVANCE(761);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(923);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'A') ADVANCE(772);
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(922);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(923);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'A') ADVANCE(770);
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(922);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(923);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'A') ADVANCE(916);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(923);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'A') ADVANCE(825);
      if (lookahead == 'O') ADVANCE(819);
      if (lookahead == 'R') ADVANCE(808);
      if (lookahead == 'U') ADVANCE(815);
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(922);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(923);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'C') ADVANCE(788);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(922);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(923);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'C') ADVANCE(795);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(922);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(923);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'C') ADVANCE(797);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(922);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(923);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'C') ADVANCE(781);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(922);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(923);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'C') ADVANCE(822);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(922);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(923);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'D') ADVANCE(539);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(922);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(923);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'D') ADVANCE(565);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(922);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(923);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'D') ADVANCE(843);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(923);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'E') ADVANCE(798);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(922);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(923);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'E') ADVANCE(820);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(922);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(923);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'E') ADVANCE(763);
      if (lookahead == 'T') ADVANCE(823);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(922);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(923);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'E') ADVANCE(763);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(922);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(923);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'E') ADVANCE(827);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(922);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(923);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'E') ADVANCE(559);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(922);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(923);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'E') ADVANCE(551);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(922);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(923);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'E') ADVANCE(545);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(922);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(923);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'E') ADVANCE(771);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(922);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(923);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'E') ADVANCE(826);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(922);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(923);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'F') ADVANCE(792);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(922);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(923);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'F') ADVANCE(881);
      if (lookahead == ']') ADVANCE(648);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(923);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'G') ADVANCE(780);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(922);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(923);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'H') ADVANCE(553);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(922);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(923);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'I') ADVANCE(779);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(922);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(923);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'I') ADVANCE(800);
      if (lookahead == 'O') ADVANCE(768);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(922);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(923);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'I') ADVANCE(804);
      if (lookahead == 'O') ADVANCE(769);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(922);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(923);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'I') ADVANCE(803);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(922);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(923);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'I') ADVANCE(809);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(922);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(923);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'K') ADVANCE(555);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(922);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(923);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'K') ADVANCE(561);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(922);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(923);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'K') ADVANCE(557);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(922);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(923);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'K') ADVANCE(563);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(922);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(923);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'L') ADVANCE(784);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(922);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(923);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'L') ADVANCE(791);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(922);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(923);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'N') ADVANCE(794);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(922);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(923);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'N') ADVANCE(799);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(922);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(923);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'N') ADVANCE(817);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(922);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(923);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'N') ADVANCE(773);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(922);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(923);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'N') ADVANCE(796);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(922);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(923);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'N') ADVANCE(806);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(922);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(923);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'N') ADVANCE(783);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(922);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(923);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'O') ADVANCE(805);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(922);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(923);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'O') ADVANCE(811);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(922);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(923);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'O') ADVANCE(802);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(922);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(923);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'P') ADVANCE(634);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(922);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(923);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'P') ADVANCE(785);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(922);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(923);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'P') ADVANCE(841);
      if (lookahead == ']') ADVANCE(644);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(923);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'P') ADVANCE(824);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(922);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(923);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'P') ADVANCE(847);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(923);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'R') ADVANCE(787);
      if (lookahead == 'T') ADVANCE(543);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(922);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(923);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'R') ADVANCE(764);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(922);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(923);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'S') ADVANCE(549);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(922);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(923);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'S') ADVANCE(912);
      if (lookahead == ']') ADVANCE(640);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(923);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'S') ADVANCE(821);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(922);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(923);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'T') ADVANCE(537);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(922);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(923);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'T') ADVANCE(541);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(922);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(923);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'T') ADVANCE(547);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(922);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(923);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'T') ADVANCE(810);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(922);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(923);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'T') ADVANCE(793);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(922);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(923);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'T') ADVANCE(767);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(922);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(923);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'T') ADVANCE(782);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(922);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(923);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'W') ADVANCE(567);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(922);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(923);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == ']') ADVANCE(652);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(923);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == ']') ADVANCE(658);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(923);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == ']') ADVANCE(638);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(923);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == ']') ADVANCE(646);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(923);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == ']') ADVANCE(650);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(923);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == ']') ADVANCE(642);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(923);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == ']') ADVANCE(656);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(923);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == ']') ADVANCE(654);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(923);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'a') ADVANCE(898);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(923);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'a') ADVANCE(869);
      if (lookahead == 'i') ADVANCE(867);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(923);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'a') ADVANCE(869);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(923);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'a') ADVANCE(895);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(923);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'a') ADVANCE(873);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(923);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'a') ADVANCE(887);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(923);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'a') ADVANCE(890);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(923);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'a') ADVANCE(910);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(923);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'a') ADVANCE(832);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(923);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'a') ADVANCE(883);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(923);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'a') ADVANCE(874);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(923);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'a') ADVANCE(894);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(923);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'c') ADVANCE(765);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(923);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'e') ADVANCE(920);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(923);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'e') ADVANCE(762);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(923);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'e') ADVANCE(1012);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(923);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'e') ADVANCE(1014);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(923);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'e') ADVANCE(759);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(923);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'e') ADVANCE(886);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(923);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'e') ADVANCE(896);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(923);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'e') ADVANCE(892);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(923);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'e') ADVANCE(903);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(923);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'g') ADVANCE(814);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(923);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'h') ADVANCE(830);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(923);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'i') ADVANCE(848);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(923);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'i') ADVANCE(884);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(923);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'i') ADVANCE(875);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(923);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'i') ADVANCE(878);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(923);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'i') ADVANCE(855);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(923);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'k') ADVANCE(864);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(923);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'l') ADVANCE(661);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(923);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'l') ADVANCE(853);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(923);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'l') ADVANCE(866);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(923);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'l') ADVANCE(900);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(923);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'l') ADVANCE(909);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(923);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'm') ADVANCE(812);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(923);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'm') ADVANCE(774);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(923);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'm') ADVANCE(899);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(923);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'm') ADVANCE(901);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(923);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'n') ADVANCE(858);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(923);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'n') ADVANCE(897);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(923);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'o') ADVANCE(865);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(923);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'o') ADVANCE(876);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(923);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'o') ADVANCE(885);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(923);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'o') ADVANCE(877);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(923);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'o') ADVANCE(889);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(923);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'p') ADVANCE(908);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(923);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'p') ADVANCE(911);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(923);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'p') ADVANCE(842);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(923);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'r') ADVANCE(871);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(923);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'r') ADVANCE(921);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(923);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'r') ADVANCE(840);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(923);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'r') ADVANCE(918);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(923);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'r') ADVANCE(872);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(923);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'r') ADVANCE(907);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(923);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'r') ADVANCE(862);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(923);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'r') ADVANCE(913);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(923);
      END_STATE();
    case 893:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'r') ADVANCE(857);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(923);
      END_STATE();
    case 894:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'r') ADVANCE(846);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(923);
      END_STATE();
    case 895:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 's') ADVANCE(860);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(923);
      END_STATE();
    case 896:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 's') ADVANCE(828);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(923);
      END_STATE();
    case 897:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 's') ADVANCE(829);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(923);
      END_STATE();
    case 898:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 's') ADVANCE(850);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(923);
      END_STATE();
    case 899:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 's') ADVANCE(831);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(923);
      END_STATE();
    case 900:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 's') ADVANCE(852);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(923);
      END_STATE();
    case 901:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 's') ADVANCE(833);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(923);
      END_STATE();
    case 902:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 's') ADVANCE(834);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(923);
      END_STATE();
    case 903:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 's') ADVANCE(835);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(923);
      END_STATE();
    case 904:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 's') ADVANCE(856);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(923);
      END_STATE();
    case 905:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 's') ADVANCE(904);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(923);
      END_STATE();
    case 906:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 't') ADVANCE(859);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(923);
      END_STATE();
    case 907:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 't') ADVANCE(786);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(923);
      END_STATE();
    case 908:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 't') ADVANCE(863);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(923);
      END_STATE();
    case 909:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 't') ADVANCE(861);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(923);
      END_STATE();
    case 910:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 't') ADVANCE(844);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(923);
      END_STATE();
    case 911:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 't') ADVANCE(919);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(923);
      END_STATE();
    case 912:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 't') ADVANCE(891);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(923);
      END_STATE();
    case 913:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 't') ADVANCE(902);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(923);
      END_STATE();
    case 914:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'u') ADVANCE(854);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(923);
      END_STATE();
    case 915:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'u') ADVANCE(868);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(923);
      END_STATE();
    case 916:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'u') ADVANCE(906);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(923);
      END_STATE();
    case 917:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'u') ADVANCE(870);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(923);
      END_STATE();
    case 918:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'u') ADVANCE(851);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(923);
      END_STATE();
    case 919:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'u') ADVANCE(893);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(923);
      END_STATE();
    case 920:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'x') ADVANCE(758);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(923);
      END_STATE();
    case 921:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'y') ADVANCE(818);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(923);
      END_STATE();
    case 922:
      ACCEPT_TOKEN(sym_key_string_text);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(922);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(923);
      END_STATE();
    case 923:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(923);
      END_STATE();
    case 924:
      ACCEPT_TOKEN(anon_sym_BSLASH2);
      END_STATE();
    case 925:
      ACCEPT_TOKEN(aux_sym_key_string_escaped_char_token1);
      END_STATE();
    case 926:
      ACCEPT_TOKEN(aux_sym_key_string_escaped_char_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1025);
      END_STATE();
    case 927:
      ACCEPT_TOKEN(aux_sym_value_string_text_token1);
      END_STATE();
    case 928:
      ACCEPT_TOKEN(aux_sym_value_string_text_token1);
      if (lookahead == 'a') ADVANCE(279);
      END_STATE();
    case 929:
      ACCEPT_TOKEN(aux_sym_value_string_text_token1);
      if (lookahead == 'r') ADVANCE(491);
      END_STATE();
    case 930:
      ACCEPT_TOKEN(aux_sym_value_string_text_token1);
      if (lookahead == 'u') ADVANCE(274);
      END_STATE();
    case 931:
      ACCEPT_TOKEN(aux_sym_value_string_text_token1);
      if (lookahead == '{') ADVANCE(991);
      END_STATE();
    case 932:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1025);
      END_STATE();
    case 933:
      ACCEPT_TOKEN(aux_sym_oneline_string_token1);
      END_STATE();
    case 934:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 935:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      if (lookahead == '`') ADVANCE(94);
      END_STATE();
    case 936:
      ACCEPT_TOKEN(aux_sym_oneline_string_text_token1);
      END_STATE();
    case 937:
      ACCEPT_TOKEN(aux_sym_oneline_string_text_token1);
      if (lookahead == '`') ADVANCE(934);
      if (set_contains(extras_character_set_1, 10, lookahead)) ADVANCE(937);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(936);
      END_STATE();
    case 938:
      ACCEPT_TOKEN(aux_sym_oneline_string_text_token1);
      if (lookahead == '{') ADVANCE(991);
      END_STATE();
    case 939:
      ACCEPT_TOKEN(aux_sym_oneline_string_text_token2);
      END_STATE();
    case 940:
      ACCEPT_TOKEN(aux_sym_oneline_string_text_token2);
      if (lookahead == '#') ADVANCE(941);
      if (set_contains(extras_character_set_2, 9, lookahead)) ADVANCE(940);
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(939);
      END_STATE();
    case 941:
      ACCEPT_TOKEN(aux_sym_oneline_string_text_token2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1025);
      END_STATE();
    case 942:
      ACCEPT_TOKEN(anon_sym_BQUOTE_BQUOTE_BQUOTE);
      END_STATE();
    case 943:
      ACCEPT_TOKEN(anon_sym_base64);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(967);
      END_STATE();
    case 944:
      ACCEPT_TOKEN(anon_sym_hex);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(967);
      END_STATE();
    case 945:
      ACCEPT_TOKEN(anon_sym_json);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(967);
      END_STATE();
    case 946:
      ACCEPT_TOKEN(anon_sym_xml);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(967);
      END_STATE();
    case 947:
      ACCEPT_TOKEN(anon_sym_graphql);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(967);
      END_STATE();
    case 948:
      ACCEPT_TOKEN(aux_sym_multiline_string_type_token1);
      if (lookahead == '\n') ADVANCE(535);
      if (lookahead == '#') ADVANCE(967);
      if (lookahead == 'b') ADVANCE(952);
      if (lookahead == 'g') ADVANCE(963);
      if (lookahead == 'h') ADVANCE(953);
      if (lookahead == 'j') ADVANCE(964);
      if (lookahead == 'x') ADVANCE(958);
      if (set_contains(extras_character_set_2, 9, lookahead)) ADVANCE(948);
      if (lookahead != 0) ADVANCE(967);
      END_STATE();
    case 949:
      ACCEPT_TOKEN(aux_sym_multiline_string_type_token1);
      if (lookahead == '4') ADVANCE(943);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(967);
      END_STATE();
    case 950:
      ACCEPT_TOKEN(aux_sym_multiline_string_type_token1);
      if (lookahead == '6') ADVANCE(949);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(967);
      END_STATE();
    case 951:
      ACCEPT_TOKEN(aux_sym_multiline_string_type_token1);
      if (lookahead == 'a') ADVANCE(961);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(967);
      END_STATE();
    case 952:
      ACCEPT_TOKEN(aux_sym_multiline_string_type_token1);
      if (lookahead == 'a') ADVANCE(965);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(967);
      END_STATE();
    case 953:
      ACCEPT_TOKEN(aux_sym_multiline_string_type_token1);
      if (lookahead == 'e') ADVANCE(966);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(967);
      END_STATE();
    case 954:
      ACCEPT_TOKEN(aux_sym_multiline_string_type_token1);
      if (lookahead == 'e') ADVANCE(950);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(967);
      END_STATE();
    case 955:
      ACCEPT_TOKEN(aux_sym_multiline_string_type_token1);
      if (lookahead == 'h') ADVANCE(962);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(967);
      END_STATE();
    case 956:
      ACCEPT_TOKEN(aux_sym_multiline_string_type_token1);
      if (lookahead == 'l') ADVANCE(946);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(967);
      END_STATE();
    case 957:
      ACCEPT_TOKEN(aux_sym_multiline_string_type_token1);
      if (lookahead == 'l') ADVANCE(947);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(967);
      END_STATE();
    case 958:
      ACCEPT_TOKEN(aux_sym_multiline_string_type_token1);
      if (lookahead == 'm') ADVANCE(956);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(967);
      END_STATE();
    case 959:
      ACCEPT_TOKEN(aux_sym_multiline_string_type_token1);
      if (lookahead == 'n') ADVANCE(945);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(967);
      END_STATE();
    case 960:
      ACCEPT_TOKEN(aux_sym_multiline_string_type_token1);
      if (lookahead == 'o') ADVANCE(959);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(967);
      END_STATE();
    case 961:
      ACCEPT_TOKEN(aux_sym_multiline_string_type_token1);
      if (lookahead == 'p') ADVANCE(955);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(967);
      END_STATE();
    case 962:
      ACCEPT_TOKEN(aux_sym_multiline_string_type_token1);
      if (lookahead == 'q') ADVANCE(957);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(967);
      END_STATE();
    case 963:
      ACCEPT_TOKEN(aux_sym_multiline_string_type_token1);
      if (lookahead == 'r') ADVANCE(951);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(967);
      END_STATE();
    case 964:
      ACCEPT_TOKEN(aux_sym_multiline_string_type_token1);
      if (lookahead == 's') ADVANCE(960);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(967);
      END_STATE();
    case 965:
      ACCEPT_TOKEN(aux_sym_multiline_string_type_token1);
      if (lookahead == 's') ADVANCE(954);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(967);
      END_STATE();
    case 966:
      ACCEPT_TOKEN(aux_sym_multiline_string_type_token1);
      if (lookahead == 'x') ADVANCE(944);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(967);
      END_STATE();
    case 967:
      ACCEPT_TOKEN(aux_sym_multiline_string_type_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(967);
      END_STATE();
    case 968:
      ACCEPT_TOKEN(aux_sym__multiline_string_text_token1);
      if (lookahead == '\n') ADVANCE(534);
      if (lookahead == '#') ADVANCE(969);
      if (set_contains(extras_character_set_2, 9, lookahead)) ADVANCE(968);
      if (lookahead != 0 &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != '{') ADVANCE(970);
      END_STATE();
    case 969:
      ACCEPT_TOKEN(aux_sym__multiline_string_text_token1);
      if (lookahead == '\\' ||
          lookahead == '`' ||
          lookahead == '{') ADVANCE(1025);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(969);
      END_STATE();
    case 970:
      ACCEPT_TOKEN(aux_sym__multiline_string_text_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != '{') ADVANCE(970);
      END_STATE();
    case 971:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 972:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '{') ADVANCE(991);
      END_STATE();
    case 973:
      ACCEPT_TOKEN(sym_filename_text);
      if (lookahead == '\n') ADVANCE(533);
      if ((set_contains(extras_character_set_2, 9, lookahead)) &&
          lookahead != ' ') ADVANCE(973);
      if (lookahead != 0 &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '\\') ADVANCE(976);
      END_STATE();
    case 974:
      ACCEPT_TOKEN(sym_filename_text);
      if (lookahead == '{') ADVANCE(992);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '\\') ADVANCE(976);
      END_STATE();
    case 975:
      ACCEPT_TOKEN(sym_filename_text);
      if ((set_contains(extras_character_set_1, 10, lookahead)) &&
          lookahead != ' ') ADVANCE(975);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '\\') ADVANCE(976);
      END_STATE();
    case 976:
      ACCEPT_TOKEN(sym_filename_text);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '\\') ADVANCE(976);
      END_STATE();
    case 977:
      ACCEPT_TOKEN(aux_sym_filename_escaped_char_token1);
      END_STATE();
    case 978:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 979:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 980:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 981:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == 'A') ADVANCE(422);
      if (lookahead == 'B') ADVANCE(102);
      if (lookahead == 'C') ADVANCE(131);
      if (lookahead == 'F') ADVANCE(321);
      if (lookahead == 'M') ADVANCE(484);
      if (lookahead == 'O') ADVANCE(356);
      if (lookahead == 'Q') ADVANCE(485);
      END_STATE();
    case 982:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == 'A') ADVANCE(422);
      if (lookahead == 'C') ADVANCE(130);
      END_STATE();
    case 983:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == 'A') ADVANCE(905);
      if (lookahead == 'C') ADVANCE(845);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(923);
      END_STATE();
    case 984:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == 'B') ADVANCE(102);
      if (lookahead == 'C') ADVANCE(328);
      if (lookahead == 'F') ADVANCE(321);
      if (lookahead == 'M') ADVANCE(484);
      if (lookahead == 'O') ADVANCE(356);
      if (lookahead == 'Q') ADVANCE(485);
      END_STATE();
    case 985:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == 'B') ADVANCE(839);
      if (lookahead == 'C') ADVANCE(880);
      if (lookahead == 'F') ADVANCE(879);
      if (lookahead == 'M') ADVANCE(917);
      if (lookahead == 'O') ADVANCE(882);
      if (lookahead == 'Q') ADVANCE(914);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(923);
      END_STATE();
    case 986:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 987:
      ACCEPT_TOKEN(sym_json_string_text);
      END_STATE();
    case 988:
      ACCEPT_TOKEN(sym_json_string_text);
      if (lookahead == '#') ADVANCE(990);
      if (set_contains(extras_character_set_2, 9, lookahead)) ADVANCE(988);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(987);
      END_STATE();
    case 989:
      ACCEPT_TOKEN(sym_json_string_text);
      if (lookahead == '{') ADVANCE(991);
      END_STATE();
    case 990:
      ACCEPT_TOKEN(sym_json_string_text);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1025);
      END_STATE();
    case 991:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      END_STATE();
    case 992:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '\\') ADVANCE(976);
      END_STATE();
    case 993:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(747);
      END_STATE();
    case 994:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 995:
      ACCEPT_TOKEN(aux_sym_variable_name_token1);
      END_STATE();
    case 996:
      ACCEPT_TOKEN(aux_sym_variable_name_token2);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 997:
      ACCEPT_TOKEN(anon_sym_count);
      END_STATE();
    case 998:
      ACCEPT_TOKEN(anon_sym_urlEncode);
      END_STATE();
    case 999:
      ACCEPT_TOKEN(anon_sym_urlDecode);
      END_STATE();
    case 1000:
      ACCEPT_TOKEN(anon_sym_toInt);
      END_STATE();
    case 1001:
      ACCEPT_TOKEN(anon_sym_htmlEscape);
      END_STATE();
    case 1002:
      ACCEPT_TOKEN(anon_sym_htmlUnescape);
      END_STATE();
    case 1003:
      ACCEPT_TOKEN(anon_sym_daysAfterNow);
      END_STATE();
    case 1004:
      ACCEPT_TOKEN(anon_sym_daysBeforeNow);
      END_STATE();
    case 1005:
      ACCEPT_TOKEN(anon_sym_decode);
      END_STATE();
    case 1006:
      ACCEPT_TOKEN(anon_sym_format);
      END_STATE();
    case 1007:
      ACCEPT_TOKEN(anon_sym_toDate);
      END_STATE();
    case 1008:
      ACCEPT_TOKEN(anon_sym_nth);
      END_STATE();
    case 1009:
      ACCEPT_TOKEN(anon_sym_replace);
      END_STATE();
    case 1010:
      ACCEPT_TOKEN(anon_sym_split);
      END_STATE();
    case 1011:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 1012:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(923);
      END_STATE();
    case 1013:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 1014:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(923);
      END_STATE();
    case 1015:
      ACCEPT_TOKEN(sym_digit);
      END_STATE();
    case 1016:
      ACCEPT_TOKEN(sym_hexdigit);
      END_STATE();
    case 1017:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 1018:
      ACCEPT_TOKEN(anon_sym_e);
      END_STATE();
    case 1019:
      ACCEPT_TOKEN(anon_sym_e);
      if (lookahead == 'n') ADVANCE(170);
      if (lookahead == 'q') ADVANCE(496);
      if (lookahead == 'x') ADVANCE(262);
      END_STATE();
    case 1020:
      ACCEPT_TOKEN(anon_sym_E);
      END_STATE();
    case 1021:
      ACCEPT_TOKEN(anon_sym_E);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(627);
      END_STATE();
    case 1022:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 1023:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 1024:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '/' ||
          lookahead == '\\') ADVANCE(1025);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1024);
      END_STATE();
    case 1025:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1025);
      END_STATE();
    case 1026:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 1027:
      ACCEPT_TOKEN(sym_regex_text);
      if (lookahead == '#') ADVANCE(1024);
      if (set_contains(extras_character_set_1, 10, lookahead)) ADVANCE(1027);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '/' &&
          lookahead != '\\') ADVANCE(1028);
      END_STATE();
    case 1028:
      ACCEPT_TOKEN(sym_regex_text);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '/' &&
          lookahead != '\\') ADVANCE(1028);
      END_STATE();
    case 1029:
      ACCEPT_TOKEN(aux_sym_regex_escaped_char_token1);
      END_STATE();
    case 1030:
      ACCEPT_TOKEN(aux_sym_regex_escaped_char_token1);
      if (lookahead == '#') ADVANCE(1025);
      if (set_contains(extras_character_set_1, 10, lookahead)) ADVANCE(1030);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(1029);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 520},
  [2] = {.lex_state = 526},
  [3] = {.lex_state = 526},
  [4] = {.lex_state = 526},
  [5] = {.lex_state = 526},
  [6] = {.lex_state = 522},
  [7] = {.lex_state = 522},
  [8] = {.lex_state = 522},
  [9] = {.lex_state = 522},
  [10] = {.lex_state = 522},
  [11] = {.lex_state = 522},
  [12] = {.lex_state = 527},
  [13] = {.lex_state = 527},
  [14] = {.lex_state = 529},
  [15] = {.lex_state = 529},
  [16] = {.lex_state = 522},
  [17] = {.lex_state = 522},
  [18] = {.lex_state = 522},
  [19] = {.lex_state = 522},
  [20] = {.lex_state = 522},
  [21] = {.lex_state = 522},
  [22] = {.lex_state = 522},
  [23] = {.lex_state = 522},
  [24] = {.lex_state = 522},
  [25] = {.lex_state = 522},
  [26] = {.lex_state = 522},
  [27] = {.lex_state = 522},
  [28] = {.lex_state = 522},
  [29] = {.lex_state = 522},
  [30] = {.lex_state = 522},
  [31] = {.lex_state = 522},
  [32] = {.lex_state = 522},
  [33] = {.lex_state = 520},
  [34] = {.lex_state = 520},
  [35] = {.lex_state = 526},
  [36] = {.lex_state = 526},
  [37] = {.lex_state = 526},
  [38] = {.lex_state = 526},
  [39] = {.lex_state = 520},
  [40] = {.lex_state = 520},
  [41] = {.lex_state = 526},
  [42] = {.lex_state = 526},
  [43] = {.lex_state = 526},
  [44] = {.lex_state = 526},
  [45] = {.lex_state = 526},
  [46] = {.lex_state = 526},
  [47] = {.lex_state = 526},
  [48] = {.lex_state = 526},
  [49] = {.lex_state = 526},
  [50] = {.lex_state = 520},
  [51] = {.lex_state = 522},
  [52] = {.lex_state = 526},
  [53] = {.lex_state = 18},
  [54] = {.lex_state = 529},
  [55] = {.lex_state = 18},
  [56] = {.lex_state = 526},
  [57] = {.lex_state = 526},
  [58] = {.lex_state = 526},
  [59] = {.lex_state = 520},
  [60] = {.lex_state = 520},
  [61] = {.lex_state = 522},
  [62] = {.lex_state = 520},
  [63] = {.lex_state = 520},
  [64] = {.lex_state = 522},
  [65] = {.lex_state = 529},
  [66] = {.lex_state = 529},
  [67] = {.lex_state = 529},
  [68] = {.lex_state = 529},
  [69] = {.lex_state = 529},
  [70] = {.lex_state = 529},
  [71] = {.lex_state = 527},
  [72] = {.lex_state = 529},
  [73] = {.lex_state = 529},
  [74] = {.lex_state = 529},
  [75] = {.lex_state = 529},
  [76] = {.lex_state = 529},
  [77] = {.lex_state = 529},
  [78] = {.lex_state = 527},
  [79] = {.lex_state = 527},
  [80] = {.lex_state = 529},
  [81] = {.lex_state = 529},
  [82] = {.lex_state = 527},
  [83] = {.lex_state = 529},
  [84] = {.lex_state = 529},
  [85] = {.lex_state = 529},
  [86] = {.lex_state = 529},
  [87] = {.lex_state = 520},
  [88] = {.lex_state = 527},
  [89] = {.lex_state = 527},
  [90] = {.lex_state = 527},
  [91] = {.lex_state = 527},
  [92] = {.lex_state = 527},
  [93] = {.lex_state = 520},
  [94] = {.lex_state = 522},
  [95] = {.lex_state = 522},
  [96] = {.lex_state = 522},
  [97] = {.lex_state = 522},
  [98] = {.lex_state = 520},
  [99] = {.lex_state = 520},
  [100] = {.lex_state = 522},
  [101] = {.lex_state = 522},
  [102] = {.lex_state = 522},
  [103] = {.lex_state = 522},
  [104] = {.lex_state = 522},
  [105] = {.lex_state = 522},
  [106] = {.lex_state = 529},
  [107] = {.lex_state = 520},
  [108] = {.lex_state = 529},
  [109] = {.lex_state = 520},
  [110] = {.lex_state = 520},
  [111] = {.lex_state = 1},
  [112] = {.lex_state = 1},
  [113] = {.lex_state = 520},
  [114] = {.lex_state = 520},
  [115] = {.lex_state = 520},
  [116] = {.lex_state = 520},
  [117] = {.lex_state = 529},
  [118] = {.lex_state = 529},
  [119] = {.lex_state = 529},
  [120] = {.lex_state = 19},
  [121] = {.lex_state = 3},
  [122] = {.lex_state = 28},
  [123] = {.lex_state = 520},
  [124] = {.lex_state = 520},
  [125] = {.lex_state = 520},
  [126] = {.lex_state = 520},
  [127] = {.lex_state = 520},
  [128] = {.lex_state = 7},
  [129] = {.lex_state = 7},
  [130] = {.lex_state = 520},
  [131] = {.lex_state = 7},
  [132] = {.lex_state = 7},
  [133] = {.lex_state = 520},
  [134] = {.lex_state = 520},
  [135] = {.lex_state = 520},
  [136] = {.lex_state = 27},
  [137] = {.lex_state = 7},
  [138] = {.lex_state = 522},
  [139] = {.lex_state = 522},
  [140] = {.lex_state = 522},
  [141] = {.lex_state = 522},
  [142] = {.lex_state = 522},
  [143] = {.lex_state = 522},
  [144] = {.lex_state = 522},
  [145] = {.lex_state = 522},
  [146] = {.lex_state = 522},
  [147] = {.lex_state = 522},
  [148] = {.lex_state = 522},
  [149] = {.lex_state = 522},
  [150] = {.lex_state = 522},
  [151] = {.lex_state = 529},
  [152] = {.lex_state = 522},
  [153] = {.lex_state = 529},
  [154] = {.lex_state = 529},
  [155] = {.lex_state = 522},
  [156] = {.lex_state = 529},
  [157] = {.lex_state = 522},
  [158] = {.lex_state = 522},
  [159] = {.lex_state = 2},
  [160] = {.lex_state = 4},
  [161] = {.lex_state = 2},
  [162] = {.lex_state = 2},
  [163] = {.lex_state = 2},
  [164] = {.lex_state = 7},
  [165] = {.lex_state = 7},
  [166] = {.lex_state = 29},
  [167] = {.lex_state = 8},
  [168] = {.lex_state = 10},
  [169] = {.lex_state = 4},
  [170] = {.lex_state = 11},
  [171] = {.lex_state = 11},
  [172] = {.lex_state = 11},
  [173] = {.lex_state = 11},
  [174] = {.lex_state = 4},
  [175] = {.lex_state = 11},
  [176] = {.lex_state = 7},
  [177] = {.lex_state = 29},
  [178] = {.lex_state = 12},
  [179] = {.lex_state = 12},
  [180] = {.lex_state = 22},
  [181] = {.lex_state = 22},
  [182] = {.lex_state = 22},
  [183] = {.lex_state = 7},
  [184] = {.lex_state = 22},
  [185] = {.lex_state = 29},
  [186] = {.lex_state = 29},
  [187] = {.lex_state = 32},
  [188] = {.lex_state = 12},
  [189] = {.lex_state = 29},
  [190] = {.lex_state = 32},
  [191] = {.lex_state = 22},
  [192] = {.lex_state = 30},
  [193] = {.lex_state = 32},
  [194] = {.lex_state = 30},
  [195] = {.lex_state = 23},
  [196] = {.lex_state = 32},
  [197] = {.lex_state = 2},
  [198] = {.lex_state = 8},
  [199] = {.lex_state = 8},
  [200] = {.lex_state = 2},
  [201] = {.lex_state = 24},
  [202] = {.lex_state = 17},
  [203] = {.lex_state = 24},
  [204] = {.lex_state = 11},
  [205] = {.lex_state = 11},
  [206] = {.lex_state = 11},
  [207] = {.lex_state = 21},
  [208] = {.lex_state = 24},
  [209] = {.lex_state = 26},
  [210] = {.lex_state = 11},
  [211] = {.lex_state = 4},
  [212] = {.lex_state = 21},
  [213] = {.lex_state = 26},
  [214] = {.lex_state = 4},
  [215] = {.lex_state = 24},
  [216] = {.lex_state = 24},
  [217] = {.lex_state = 11},
  [218] = {.lex_state = 19},
  [219] = {.lex_state = 19},
  [220] = {.lex_state = 22},
  [221] = {.lex_state = 28},
  [222] = {.lex_state = 28},
  [223] = {.lex_state = 28},
  [224] = {.lex_state = 7},
  [225] = {.lex_state = 7},
  [226] = {.lex_state = 28},
  [227] = {.lex_state = 12},
  [228] = {.lex_state = 29},
  [229] = {.lex_state = 22},
  [230] = {.lex_state = 12},
  [231] = {.lex_state = 29},
  [232] = {.lex_state = 2},
  [233] = {.lex_state = 28},
  [234] = {.lex_state = 14},
  [235] = {.lex_state = 32},
  [236] = {.lex_state = 7},
  [237] = {.lex_state = 32},
  [238] = {.lex_state = 529},
  [239] = {.lex_state = 529},
  [240] = {.lex_state = 7},
  [241] = {.lex_state = 7},
  [242] = {.lex_state = 26},
  [243] = {.lex_state = 529},
  [244] = {.lex_state = 7},
  [245] = {.lex_state = 529},
  [246] = {.lex_state = 7},
  [247] = {.lex_state = 30},
  [248] = {.lex_state = 529},
  [249] = {.lex_state = 529},
  [250] = {.lex_state = 28},
  [251] = {.lex_state = 7},
  [252] = {.lex_state = 2},
  [253] = {.lex_state = 30},
  [254] = {.lex_state = 8},
  [255] = {.lex_state = 7},
  [256] = {.lex_state = 7},
  [257] = {.lex_state = 8},
  [258] = {.lex_state = 1},
  [259] = {.lex_state = 19},
  [260] = {.lex_state = 14},
  [261] = {.lex_state = 7},
  [262] = {.lex_state = 11},
  [263] = {.lex_state = 2},
  [264] = {.lex_state = 11},
  [265] = {.lex_state = 28},
  [266] = {.lex_state = 11},
  [267] = {.lex_state = 28},
  [268] = {.lex_state = 4},
  [269] = {.lex_state = 14},
  [270] = {.lex_state = 1},
  [271] = {.lex_state = 29},
  [272] = {.lex_state = 11},
  [273] = {.lex_state = 2},
  [274] = {.lex_state = 2},
  [275] = {.lex_state = 14},
  [276] = {.lex_state = 2},
  [277] = {.lex_state = 29},
  [278] = {.lex_state = 11},
  [279] = {.lex_state = 11},
  [280] = {.lex_state = 11},
  [281] = {.lex_state = 4},
  [282] = {.lex_state = 529},
  [283] = {.lex_state = 529},
  [284] = {.lex_state = 28},
  [285] = {.lex_state = 520},
  [286] = {.lex_state = 520},
  [287] = {.lex_state = 8},
  [288] = {.lex_state = 520},
  [289] = {.lex_state = 520},
  [290] = {.lex_state = 520},
  [291] = {.lex_state = 520},
  [292] = {.lex_state = 520},
  [293] = {.lex_state = 520},
  [294] = {.lex_state = 12},
  [295] = {.lex_state = 529},
  [296] = {.lex_state = 30},
  [297] = {.lex_state = 28},
  [298] = {.lex_state = 529},
  [299] = {.lex_state = 19},
  [300] = {.lex_state = 1},
  [301] = {.lex_state = 32},
  [302] = {.lex_state = 12},
  [303] = {.lex_state = 529},
  [304] = {.lex_state = 24},
  [305] = {.lex_state = 12},
  [306] = {.lex_state = 12},
  [307] = {.lex_state = 32},
  [308] = {.lex_state = 2},
  [309] = {.lex_state = 24},
  [310] = {.lex_state = 529},
  [311] = {.lex_state = 529},
  [312] = {.lex_state = 529},
  [313] = {.lex_state = 4},
  [314] = {.lex_state = 4},
  [315] = {.lex_state = 22},
  [316] = {.lex_state = 22},
  [317] = {.lex_state = 28},
  [318] = {.lex_state = 28},
  [319] = {.lex_state = 24},
  [320] = {.lex_state = 24},
  [321] = {.lex_state = 12},
  [322] = {.lex_state = 22},
  [323] = {.lex_state = 22},
  [324] = {.lex_state = 30},
  [325] = {.lex_state = 8},
  [326] = {.lex_state = 520},
  [327] = {.lex_state = 529},
  [328] = {.lex_state = 520},
  [329] = {.lex_state = 4},
  [330] = {.lex_state = 520},
  [331] = {.lex_state = 520},
  [332] = {.lex_state = 4},
  [333] = {.lex_state = 529},
  [334] = {.lex_state = 529},
  [335] = {.lex_state = 22},
  [336] = {.lex_state = 520},
  [337] = {.lex_state = 529},
  [338] = {.lex_state = 529},
  [339] = {.lex_state = 4},
  [340] = {.lex_state = 520},
  [341] = {.lex_state = 520},
  [342] = {.lex_state = 520},
  [343] = {.lex_state = 14},
  [344] = {.lex_state = 520},
  [345] = {.lex_state = 28},
  [346] = {.lex_state = 520},
  [347] = {.lex_state = 520},
  [348] = {.lex_state = 520},
  [349] = {.lex_state = 520},
  [350] = {.lex_state = 520},
  [351] = {.lex_state = 520},
  [352] = {.lex_state = 520},
  [353] = {.lex_state = 529},
  [354] = {.lex_state = 529},
  [355] = {.lex_state = 37},
  [356] = {.lex_state = 28},
  [357] = {.lex_state = 529},
  [358] = {.lex_state = 520},
  [359] = {.lex_state = 520},
  [360] = {.lex_state = 529},
  [361] = {.lex_state = 529},
  [362] = {.lex_state = 529},
  [363] = {.lex_state = 34},
  [364] = {.lex_state = 37},
  [365] = {.lex_state = 529},
  [366] = {.lex_state = 19},
  [367] = {.lex_state = 529},
  [368] = {.lex_state = 529},
  [369] = {.lex_state = 520},
  [370] = {.lex_state = 529},
  [371] = {.lex_state = 27},
  [372] = {.lex_state = 37},
  [373] = {.lex_state = 529},
  [374] = {.lex_state = 19},
  [375] = {.lex_state = 520},
  [376] = {.lex_state = 19},
  [377] = {.lex_state = 520},
  [378] = {.lex_state = 37},
  [379] = {.lex_state = 520},
  [380] = {.lex_state = 520},
  [381] = {.lex_state = 26},
  [382] = {.lex_state = 28},
  [383] = {.lex_state = 529},
  [384] = {.lex_state = 529},
  [385] = {.lex_state = 520},
  [386] = {.lex_state = 19},
  [387] = {.lex_state = 37},
  [388] = {.lex_state = 19},
  [389] = {.lex_state = 28},
  [390] = {.lex_state = 520},
  [391] = {.lex_state = 26},
  [392] = {.lex_state = 520},
  [393] = {.lex_state = 520},
  [394] = {.lex_state = 37},
  [395] = {.lex_state = 520},
  [396] = {.lex_state = 37},
  [397] = {.lex_state = 28},
  [398] = {.lex_state = 520},
  [399] = {.lex_state = 34},
  [400] = {.lex_state = 520},
  [401] = {.lex_state = 520},
  [402] = {.lex_state = 520},
  [403] = {.lex_state = 520},
  [404] = {.lex_state = 520},
  [405] = {.lex_state = 520},
  [406] = {.lex_state = 520},
  [407] = {.lex_state = 520},
  [408] = {.lex_state = 520},
  [409] = {.lex_state = 28},
  [410] = {.lex_state = 28},
  [411] = {.lex_state = 520},
  [412] = {.lex_state = 37},
  [413] = {.lex_state = 520},
  [414] = {.lex_state = 28},
  [415] = {.lex_state = 19},
  [416] = {.lex_state = 520},
  [417] = {.lex_state = 520},
  [418] = {.lex_state = 37},
  [419] = {.lex_state = 529},
  [420] = {.lex_state = 529},
  [421] = {.lex_state = 520},
  [422] = {.lex_state = 520},
  [423] = {.lex_state = 37},
  [424] = {.lex_state = 529},
  [425] = {.lex_state = 37},
  [426] = {.lex_state = 19},
  [427] = {.lex_state = 529},
  [428] = {.lex_state = 37},
  [429] = {.lex_state = 37},
  [430] = {.lex_state = 34},
  [431] = {.lex_state = 28},
  [432] = {.lex_state = 28},
  [433] = {.lex_state = 520},
  [434] = {.lex_state = 520},
  [435] = {.lex_state = 529},
  [436] = {.lex_state = 18},
  [437] = {.lex_state = 27},
  [438] = {.lex_state = 529},
  [439] = {.lex_state = 18},
  [440] = {.lex_state = 529},
  [441] = {.lex_state = 529},
  [442] = {.lex_state = 529},
  [443] = {.lex_state = 529},
  [444] = {.lex_state = 529},
  [445] = {.lex_state = 19},
  [446] = {.lex_state = 529},
  [447] = {.lex_state = 19},
  [448] = {.lex_state = 529},
  [449] = {.lex_state = 6},
  [450] = {.lex_state = 18},
  [451] = {.lex_state = 529},
  [452] = {.lex_state = 18},
  [453] = {.lex_state = 19},
  [454] = {.lex_state = 529},
  [455] = {.lex_state = 529},
  [456] = {.lex_state = 529},
  [457] = {.lex_state = 529},
  [458] = {.lex_state = 529},
  [459] = {.lex_state = 529},
  [460] = {.lex_state = 6},
  [461] = {.lex_state = 18},
  [462] = {.lex_state = 529},
  [463] = {.lex_state = 529},
  [464] = {.lex_state = 529},
  [465] = {.lex_state = 529},
  [466] = {.lex_state = 529},
  [467] = {.lex_state = 529},
  [468] = {.lex_state = 529},
  [469] = {.lex_state = 529},
  [470] = {.lex_state = 529},
  [471] = {.lex_state = 529},
  [472] = {.lex_state = 18},
  [473] = {.lex_state = 520},
  [474] = {.lex_state = 520},
  [475] = {.lex_state = 520},
  [476] = {.lex_state = 18},
  [477] = {.lex_state = 18},
  [478] = {.lex_state = 34},
  [479] = {.lex_state = 520},
  [480] = {.lex_state = 520},
  [481] = {.lex_state = 18},
  [482] = {.lex_state = 18},
  [483] = {.lex_state = 18},
  [484] = {.lex_state = 18},
  [485] = {.lex_state = 34},
  [486] = {.lex_state = 529},
  [487] = {.lex_state = 520},
  [488] = {.lex_state = 18},
  [489] = {.lex_state = 18},
  [490] = {.lex_state = 18},
  [491] = {.lex_state = 520},
  [492] = {.lex_state = 520},
  [493] = {.lex_state = 18},
  [494] = {.lex_state = 18},
  [495] = {.lex_state = 520},
  [496] = {.lex_state = 520},
  [497] = {.lex_state = 520},
  [498] = {.lex_state = 39},
  [499] = {.lex_state = 520},
  [500] = {.lex_state = 34},
  [501] = {.lex_state = 520},
  [502] = {.lex_state = 520},
  [503] = {.lex_state = 34},
  [504] = {.lex_state = 18},
  [505] = {.lex_state = 18},
  [506] = {.lex_state = 18},
  [507] = {.lex_state = 520},
  [508] = {.lex_state = 520},
  [509] = {.lex_state = 520},
  [510] = {.lex_state = 520},
  [511] = {.lex_state = 520},
  [512] = {.lex_state = 520},
  [513] = {.lex_state = 520},
  [514] = {.lex_state = 520},
  [515] = {.lex_state = 40},
  [516] = {.lex_state = 520},
  [517] = {.lex_state = 520},
  [518] = {.lex_state = 520},
  [519] = {.lex_state = 520},
  [520] = {.lex_state = 520},
  [521] = {.lex_state = 520},
  [522] = {.lex_state = 520},
  [523] = {.lex_state = 529},
  [524] = {.lex_state = 520},
  [525] = {.lex_state = 520},
  [526] = {.lex_state = 529},
  [527] = {.lex_state = 529},
  [528] = {.lex_state = 520},
  [529] = {.lex_state = 520},
  [530] = {.lex_state = 520},
  [531] = {.lex_state = 19},
  [532] = {.lex_state = 520},
  [533] = {.lex_state = 529},
  [534] = {.lex_state = 529},
  [535] = {.lex_state = 25},
  [536] = {.lex_state = 520},
  [537] = {.lex_state = 520},
  [538] = {.lex_state = 520},
  [539] = {.lex_state = 520},
  [540] = {.lex_state = 34},
  [541] = {.lex_state = 520},
  [542] = {.lex_state = 19},
  [543] = {.lex_state = 529},
  [544] = {.lex_state = 520},
  [545] = {.lex_state = 520},
  [546] = {.lex_state = 520},
  [547] = {.lex_state = 520},
  [548] = {.lex_state = 529},
  [549] = {.lex_state = 19},
  [550] = {.lex_state = 520},
  [551] = {.lex_state = 520},
  [552] = {.lex_state = 34},
  [553] = {.lex_state = 25},
  [554] = {.lex_state = 19},
  [555] = {.lex_state = 15},
  [556] = {.lex_state = 529},
  [557] = {.lex_state = 529},
  [558] = {.lex_state = 520},
  [559] = {.lex_state = 16},
  [560] = {.lex_state = 520},
  [561] = {.lex_state = 41},
  [562] = {.lex_state = 520},
  [563] = {.lex_state = 19},
  [564] = {.lex_state = 42},
  [565] = {.lex_state = 529},
  [566] = {.lex_state = 25},
  [567] = {.lex_state = 19},
  [568] = {.lex_state = 529},
  [569] = {.lex_state = 19},
  [570] = {.lex_state = 529},
  [571] = {.lex_state = 19},
  [572] = {.lex_state = 529},
  [573] = {.lex_state = 529},
  [574] = {.lex_state = 529},
  [575] = {.lex_state = 529},
  [576] = {.lex_state = 529},
  [577] = {.lex_state = 529},
  [578] = {.lex_state = 529},
  [579] = {.lex_state = 34},
  [580] = {.lex_state = 41},
  [581] = {.lex_state = 520},
  [582] = {.lex_state = 520},
  [583] = {.lex_state = 39},
  [584] = {.lex_state = 34},
  [585] = {.lex_state = 19},
  [586] = {.lex_state = 34},
  [587] = {.lex_state = 996},
  [588] = {.lex_state = 34},
  [589] = {.lex_state = 529},
  [590] = {.lex_state = 34},
  [591] = {.lex_state = 34},
  [592] = {.lex_state = 18},
  [593] = {.lex_state = 520},
  [594] = {.lex_state = 520},
  [595] = {.lex_state = 520},
  [596] = {.lex_state = 520},
  [597] = {.lex_state = 520},
  [598] = {.lex_state = 34},
  [599] = {.lex_state = 34},
  [600] = {.lex_state = 34},
  [601] = {.lex_state = 34},
  [602] = {.lex_state = 34},
  [603] = {.lex_state = 34},
  [604] = {.lex_state = 34},
  [605] = {.lex_state = 34},
  [606] = {.lex_state = 34},
  [607] = {.lex_state = 34},
  [608] = {.lex_state = 34},
  [609] = {.lex_state = 34},
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
    [sym__alphanum] = ACTIONS(1),
    [sym_digit] = ACTIONS(1),
    [sym_hexdigit] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_e] = ACTIONS(1),
    [anon_sym_E] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [anon_sym_SLASH] = ACTIONS(1),
  },
  [1] = {
    [sym_hurl_file] = STATE(523),
    [sym_entry] = STATE(99),
    [sym__comment_or_new_line] = STATE(107),
    [sym_request] = STATE(95),
    [sym_method] = STATE(160),
    [aux_sym_hurl_file_repeat1] = STATE(99),
    [aux_sym_hurl_file_repeat2] = STATE(107),
    [aux_sym__comment_or_new_line_repeat1] = STATE(59),
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
    [sym__comment_or_new_line] = STATE(52),
    [sym_header] = STATE(4),
    [sym_body] = STATE(102),
    [sym_request_section] = STATE(8),
    [sym_basic_auth_section] = STATE(64),
    [sym_query_string_params_section] = STATE(64),
    [sym_form_params_section] = STATE(64),
    [sym_multipart_form_data_section] = STATE(64),
    [sym_cookies_section] = STATE(64),
    [sym_options_section] = STATE(64),
    [sym_key_value] = STATE(359),
    [sym_bytes] = STATE(380),
    [sym_xml] = STATE(479),
    [sym_xml_prolog_tag] = STATE(259),
    [sym_xml_tag] = STATE(480),
    [sym_xml_open_tag] = STATE(129),
    [sym_oneline_base64] = STATE(479),
    [sym_oneline_file] = STATE(479),
    [sym_oneline_hex] = STATE(479),
    [sym_key_string] = STATE(486),
    [sym_key_string_content] = STATE(185),
    [sym_key_string_escaped_char] = STATE(231),
    [sym_oneline_string] = STATE(479),
    [sym_multiline_string] = STATE(479),
    [sym_json_value] = STATE(479),
    [sym_json_object] = STATE(487),
    [sym_json_array] = STATE(487),
    [sym_json_string] = STATE(487),
    [sym_json_number] = STATE(487),
    [sym_template] = STATE(263),
    [sym_boolean] = STATE(487),
    [sym_integer] = STATE(258),
    [aux_sym_hurl_file_repeat2] = STATE(52),
    [aux_sym__comment_or_new_line_repeat1] = STATE(57),
    [aux_sym_request_repeat1] = STATE(4),
    [aux_sym_request_repeat2] = STATE(8),
    [aux_sym_xml_repeat1] = STATE(259),
    [aux_sym_key_string_repeat1] = STATE(185),
    [aux_sym_key_string_content_repeat1] = STATE(231),
    [aux_sym_integer_repeat1] = STATE(111),
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
    [aux_sym_method_token1] = ACTIONS(17),
    [anon_sym_HTTP_SLASH1_DOT0] = ACTIONS(17),
    [anon_sym_HTTP_SLASH1_DOT1] = ACTIONS(17),
    [anon_sym_HTTP_SLASH2] = ACTIONS(17),
    [anon_sym_HTTP_SLASH3] = ACTIONS(17),
    [anon_sym_HTTP_SLASH_STAR] = ACTIONS(17),
    [anon_sym_HTTP] = ACTIONS(17),
    [anon_sym_LBRACKBasicAuth_RBRACK] = ACTIONS(19),
    [anon_sym_LBRACKQuery_RBRACK] = ACTIONS(21),
    [anon_sym_LBRACKQueryStringParams_RBRACK] = ACTIONS(21),
    [anon_sym_LBRACKForm_RBRACK] = ACTIONS(23),
    [anon_sym_LBRACKFormParams_RBRACK] = ACTIONS(23),
    [anon_sym_LBRACKMultipart_RBRACK] = ACTIONS(25),
    [anon_sym_LBRACKMultipartFormData_RBRACK] = ACTIONS(25),
    [anon_sym_LBRACKCookies_RBRACK] = ACTIONS(27),
    [anon_sym_LBRACKOptions_RBRACK] = ACTIONS(29),
    [anon_sym_null] = ACTIONS(31),
    [anon_sym_file_COMMA] = ACTIONS(33),
    [anon_sym_LT] = ACTIONS(35),
    [anon_sym_LT_QMARK] = ACTIONS(37),
    [anon_sym_base64_COMMA] = ACTIONS(39),
    [anon_sym_hex_COMMA] = ACTIONS(41),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [sym_key_string_text] = ACTIONS(45),
    [anon_sym_BSLASH2] = ACTIONS(47),
    [aux_sym_oneline_string_token1] = ACTIONS(49),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(51),
    [anon_sym_LBRACE] = ACTIONS(53),
    [anon_sym_LBRACK] = ACTIONS(55),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(57),
    [anon_sym_true] = ACTIONS(59),
    [anon_sym_false] = ACTIONS(59),
    [sym_digit] = ACTIONS(61),
    [sym_comment] = ACTIONS(63),
  },
  [3] = {
    [sym__comment_or_new_line] = STATE(52),
    [sym_header] = STATE(5),
    [sym_body] = STATE(104),
    [sym_request_section] = STATE(7),
    [sym_basic_auth_section] = STATE(64),
    [sym_query_string_params_section] = STATE(64),
    [sym_form_params_section] = STATE(64),
    [sym_multipart_form_data_section] = STATE(64),
    [sym_cookies_section] = STATE(64),
    [sym_options_section] = STATE(64),
    [sym_key_value] = STATE(359),
    [sym_bytes] = STATE(380),
    [sym_xml] = STATE(479),
    [sym_xml_prolog_tag] = STATE(259),
    [sym_xml_tag] = STATE(480),
    [sym_xml_open_tag] = STATE(129),
    [sym_oneline_base64] = STATE(479),
    [sym_oneline_file] = STATE(479),
    [sym_oneline_hex] = STATE(479),
    [sym_key_string] = STATE(486),
    [sym_key_string_content] = STATE(185),
    [sym_key_string_escaped_char] = STATE(231),
    [sym_oneline_string] = STATE(479),
    [sym_multiline_string] = STATE(479),
    [sym_json_value] = STATE(479),
    [sym_json_object] = STATE(487),
    [sym_json_array] = STATE(487),
    [sym_json_string] = STATE(487),
    [sym_json_number] = STATE(487),
    [sym_template] = STATE(263),
    [sym_boolean] = STATE(487),
    [sym_integer] = STATE(258),
    [aux_sym_hurl_file_repeat2] = STATE(52),
    [aux_sym__comment_or_new_line_repeat1] = STATE(57),
    [aux_sym_request_repeat1] = STATE(5),
    [aux_sym_request_repeat2] = STATE(7),
    [aux_sym_xml_repeat1] = STATE(259),
    [aux_sym_key_string_repeat1] = STATE(185),
    [aux_sym_key_string_content_repeat1] = STATE(231),
    [aux_sym_integer_repeat1] = STATE(111),
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
    [aux_sym_method_token1] = ACTIONS(67),
    [anon_sym_HTTP_SLASH1_DOT0] = ACTIONS(67),
    [anon_sym_HTTP_SLASH1_DOT1] = ACTIONS(67),
    [anon_sym_HTTP_SLASH2] = ACTIONS(67),
    [anon_sym_HTTP_SLASH3] = ACTIONS(67),
    [anon_sym_HTTP_SLASH_STAR] = ACTIONS(67),
    [anon_sym_HTTP] = ACTIONS(67),
    [anon_sym_LBRACKBasicAuth_RBRACK] = ACTIONS(19),
    [anon_sym_LBRACKQuery_RBRACK] = ACTIONS(21),
    [anon_sym_LBRACKQueryStringParams_RBRACK] = ACTIONS(21),
    [anon_sym_LBRACKForm_RBRACK] = ACTIONS(23),
    [anon_sym_LBRACKFormParams_RBRACK] = ACTIONS(23),
    [anon_sym_LBRACKMultipart_RBRACK] = ACTIONS(25),
    [anon_sym_LBRACKMultipartFormData_RBRACK] = ACTIONS(25),
    [anon_sym_LBRACKCookies_RBRACK] = ACTIONS(27),
    [anon_sym_LBRACKOptions_RBRACK] = ACTIONS(29),
    [anon_sym_null] = ACTIONS(31),
    [anon_sym_file_COMMA] = ACTIONS(33),
    [anon_sym_LT] = ACTIONS(35),
    [anon_sym_LT_QMARK] = ACTIONS(37),
    [anon_sym_base64_COMMA] = ACTIONS(39),
    [anon_sym_hex_COMMA] = ACTIONS(41),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [sym_key_string_text] = ACTIONS(45),
    [anon_sym_BSLASH2] = ACTIONS(47),
    [aux_sym_oneline_string_token1] = ACTIONS(49),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(51),
    [anon_sym_LBRACE] = ACTIONS(53),
    [anon_sym_LBRACK] = ACTIONS(55),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(57),
    [anon_sym_true] = ACTIONS(59),
    [anon_sym_false] = ACTIONS(59),
    [sym_digit] = ACTIONS(61),
    [sym_comment] = ACTIONS(63),
  },
  [4] = {
    [sym_header] = STATE(37),
    [sym_body] = STATE(104),
    [sym_request_section] = STATE(7),
    [sym_basic_auth_section] = STATE(64),
    [sym_query_string_params_section] = STATE(64),
    [sym_form_params_section] = STATE(64),
    [sym_multipart_form_data_section] = STATE(64),
    [sym_cookies_section] = STATE(64),
    [sym_options_section] = STATE(64),
    [sym_key_value] = STATE(359),
    [sym_bytes] = STATE(380),
    [sym_xml] = STATE(479),
    [sym_xml_prolog_tag] = STATE(259),
    [sym_xml_tag] = STATE(480),
    [sym_xml_open_tag] = STATE(129),
    [sym_oneline_base64] = STATE(479),
    [sym_oneline_file] = STATE(479),
    [sym_oneline_hex] = STATE(479),
    [sym_key_string] = STATE(486),
    [sym_key_string_content] = STATE(185),
    [sym_key_string_escaped_char] = STATE(231),
    [sym_oneline_string] = STATE(479),
    [sym_multiline_string] = STATE(479),
    [sym_json_value] = STATE(479),
    [sym_json_object] = STATE(487),
    [sym_json_array] = STATE(487),
    [sym_json_string] = STATE(487),
    [sym_json_number] = STATE(487),
    [sym_template] = STATE(263),
    [sym_boolean] = STATE(487),
    [sym_integer] = STATE(258),
    [aux_sym_request_repeat1] = STATE(37),
    [aux_sym_request_repeat2] = STATE(7),
    [aux_sym_xml_repeat1] = STATE(259),
    [aux_sym_key_string_repeat1] = STATE(185),
    [aux_sym_key_string_content_repeat1] = STATE(231),
    [aux_sym_integer_repeat1] = STATE(111),
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
    [aux_sym_method_token1] = ACTIONS(67),
    [anon_sym_HTTP_SLASH1_DOT0] = ACTIONS(67),
    [anon_sym_HTTP_SLASH1_DOT1] = ACTIONS(67),
    [anon_sym_HTTP_SLASH2] = ACTIONS(67),
    [anon_sym_HTTP_SLASH3] = ACTIONS(67),
    [anon_sym_HTTP_SLASH_STAR] = ACTIONS(67),
    [anon_sym_HTTP] = ACTIONS(67),
    [anon_sym_LBRACKBasicAuth_RBRACK] = ACTIONS(19),
    [anon_sym_LBRACKQuery_RBRACK] = ACTIONS(21),
    [anon_sym_LBRACKQueryStringParams_RBRACK] = ACTIONS(21),
    [anon_sym_LBRACKForm_RBRACK] = ACTIONS(23),
    [anon_sym_LBRACKFormParams_RBRACK] = ACTIONS(23),
    [anon_sym_LBRACKMultipart_RBRACK] = ACTIONS(25),
    [anon_sym_LBRACKMultipartFormData_RBRACK] = ACTIONS(25),
    [anon_sym_LBRACKCookies_RBRACK] = ACTIONS(27),
    [anon_sym_LBRACKOptions_RBRACK] = ACTIONS(29),
    [anon_sym_null] = ACTIONS(31),
    [anon_sym_file_COMMA] = ACTIONS(33),
    [anon_sym_LT] = ACTIONS(35),
    [anon_sym_LT_QMARK] = ACTIONS(37),
    [anon_sym_base64_COMMA] = ACTIONS(39),
    [anon_sym_hex_COMMA] = ACTIONS(41),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [sym_key_string_text] = ACTIONS(45),
    [anon_sym_BSLASH2] = ACTIONS(47),
    [aux_sym_oneline_string_token1] = ACTIONS(49),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(51),
    [anon_sym_LBRACE] = ACTIONS(53),
    [anon_sym_LBRACK] = ACTIONS(55),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(57),
    [anon_sym_true] = ACTIONS(59),
    [anon_sym_false] = ACTIONS(59),
    [sym_digit] = ACTIONS(61),
    [sym_comment] = ACTIONS(67),
  },
  [5] = {
    [sym_header] = STATE(37),
    [sym_body] = STATE(100),
    [sym_request_section] = STATE(6),
    [sym_basic_auth_section] = STATE(64),
    [sym_query_string_params_section] = STATE(64),
    [sym_form_params_section] = STATE(64),
    [sym_multipart_form_data_section] = STATE(64),
    [sym_cookies_section] = STATE(64),
    [sym_options_section] = STATE(64),
    [sym_key_value] = STATE(359),
    [sym_bytes] = STATE(380),
    [sym_xml] = STATE(479),
    [sym_xml_prolog_tag] = STATE(259),
    [sym_xml_tag] = STATE(480),
    [sym_xml_open_tag] = STATE(129),
    [sym_oneline_base64] = STATE(479),
    [sym_oneline_file] = STATE(479),
    [sym_oneline_hex] = STATE(479),
    [sym_key_string] = STATE(486),
    [sym_key_string_content] = STATE(185),
    [sym_key_string_escaped_char] = STATE(231),
    [sym_oneline_string] = STATE(479),
    [sym_multiline_string] = STATE(479),
    [sym_json_value] = STATE(479),
    [sym_json_object] = STATE(487),
    [sym_json_array] = STATE(487),
    [sym_json_string] = STATE(487),
    [sym_json_number] = STATE(487),
    [sym_template] = STATE(263),
    [sym_boolean] = STATE(487),
    [sym_integer] = STATE(258),
    [aux_sym_request_repeat1] = STATE(37),
    [aux_sym_request_repeat2] = STATE(6),
    [aux_sym_xml_repeat1] = STATE(259),
    [aux_sym_key_string_repeat1] = STATE(185),
    [aux_sym_key_string_content_repeat1] = STATE(231),
    [aux_sym_integer_repeat1] = STATE(111),
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
    [aux_sym_method_token1] = ACTIONS(71),
    [anon_sym_HTTP_SLASH1_DOT0] = ACTIONS(71),
    [anon_sym_HTTP_SLASH1_DOT1] = ACTIONS(71),
    [anon_sym_HTTP_SLASH2] = ACTIONS(71),
    [anon_sym_HTTP_SLASH3] = ACTIONS(71),
    [anon_sym_HTTP_SLASH_STAR] = ACTIONS(71),
    [anon_sym_HTTP] = ACTIONS(71),
    [anon_sym_LBRACKBasicAuth_RBRACK] = ACTIONS(19),
    [anon_sym_LBRACKQuery_RBRACK] = ACTIONS(21),
    [anon_sym_LBRACKQueryStringParams_RBRACK] = ACTIONS(21),
    [anon_sym_LBRACKForm_RBRACK] = ACTIONS(23),
    [anon_sym_LBRACKFormParams_RBRACK] = ACTIONS(23),
    [anon_sym_LBRACKMultipart_RBRACK] = ACTIONS(25),
    [anon_sym_LBRACKMultipartFormData_RBRACK] = ACTIONS(25),
    [anon_sym_LBRACKCookies_RBRACK] = ACTIONS(27),
    [anon_sym_LBRACKOptions_RBRACK] = ACTIONS(29),
    [anon_sym_null] = ACTIONS(31),
    [anon_sym_file_COMMA] = ACTIONS(33),
    [anon_sym_LT] = ACTIONS(35),
    [anon_sym_LT_QMARK] = ACTIONS(37),
    [anon_sym_base64_COMMA] = ACTIONS(39),
    [anon_sym_hex_COMMA] = ACTIONS(41),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [sym_key_string_text] = ACTIONS(45),
    [anon_sym_BSLASH2] = ACTIONS(47),
    [aux_sym_oneline_string_token1] = ACTIONS(49),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(51),
    [anon_sym_LBRACE] = ACTIONS(53),
    [anon_sym_LBRACK] = ACTIONS(55),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(57),
    [anon_sym_true] = ACTIONS(59),
    [anon_sym_false] = ACTIONS(59),
    [sym_digit] = ACTIONS(61),
    [sym_comment] = ACTIONS(71),
  },
  [6] = {
    [sym_body] = STATE(101),
    [sym_request_section] = STATE(51),
    [sym_basic_auth_section] = STATE(64),
    [sym_query_string_params_section] = STATE(64),
    [sym_form_params_section] = STATE(64),
    [sym_multipart_form_data_section] = STATE(64),
    [sym_cookies_section] = STATE(64),
    [sym_options_section] = STATE(64),
    [sym_bytes] = STATE(380),
    [sym_xml] = STATE(479),
    [sym_xml_prolog_tag] = STATE(259),
    [sym_xml_tag] = STATE(480),
    [sym_xml_open_tag] = STATE(129),
    [sym_oneline_base64] = STATE(479),
    [sym_oneline_file] = STATE(479),
    [sym_oneline_hex] = STATE(479),
    [sym_oneline_string] = STATE(479),
    [sym_multiline_string] = STATE(479),
    [sym_json_value] = STATE(479),
    [sym_json_object] = STATE(487),
    [sym_json_array] = STATE(487),
    [sym_json_string] = STATE(487),
    [sym_json_number] = STATE(487),
    [sym_template] = STATE(487),
    [sym_boolean] = STATE(487),
    [sym_integer] = STATE(258),
    [aux_sym_request_repeat2] = STATE(51),
    [aux_sym_xml_repeat1] = STATE(259),
    [aux_sym_integer_repeat1] = STATE(111),
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
    [aux_sym_method_token1] = ACTIONS(75),
    [anon_sym_HTTP_SLASH1_DOT0] = ACTIONS(75),
    [anon_sym_HTTP_SLASH1_DOT1] = ACTIONS(75),
    [anon_sym_HTTP_SLASH2] = ACTIONS(75),
    [anon_sym_HTTP_SLASH3] = ACTIONS(75),
    [anon_sym_HTTP_SLASH_STAR] = ACTIONS(75),
    [anon_sym_HTTP] = ACTIONS(75),
    [anon_sym_LBRACKBasicAuth_RBRACK] = ACTIONS(19),
    [anon_sym_LBRACKQuery_RBRACK] = ACTIONS(21),
    [anon_sym_LBRACKQueryStringParams_RBRACK] = ACTIONS(21),
    [anon_sym_LBRACKForm_RBRACK] = ACTIONS(23),
    [anon_sym_LBRACKFormParams_RBRACK] = ACTIONS(23),
    [anon_sym_LBRACKMultipart_RBRACK] = ACTIONS(25),
    [anon_sym_LBRACKMultipartFormData_RBRACK] = ACTIONS(25),
    [anon_sym_LBRACKCookies_RBRACK] = ACTIONS(27),
    [anon_sym_LBRACKOptions_RBRACK] = ACTIONS(29),
    [anon_sym_null] = ACTIONS(31),
    [anon_sym_file_COMMA] = ACTIONS(33),
    [anon_sym_LT] = ACTIONS(35),
    [anon_sym_LT_QMARK] = ACTIONS(37),
    [anon_sym_base64_COMMA] = ACTIONS(39),
    [anon_sym_hex_COMMA] = ACTIONS(41),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [aux_sym_oneline_string_token1] = ACTIONS(49),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(51),
    [anon_sym_LBRACE] = ACTIONS(53),
    [anon_sym_LBRACK] = ACTIONS(55),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(57),
    [anon_sym_true] = ACTIONS(59),
    [anon_sym_false] = ACTIONS(59),
    [sym_digit] = ACTIONS(61),
    [sym_comment] = ACTIONS(75),
  },
  [7] = {
    [sym_body] = STATE(100),
    [sym_request_section] = STATE(51),
    [sym_basic_auth_section] = STATE(64),
    [sym_query_string_params_section] = STATE(64),
    [sym_form_params_section] = STATE(64),
    [sym_multipart_form_data_section] = STATE(64),
    [sym_cookies_section] = STATE(64),
    [sym_options_section] = STATE(64),
    [sym_bytes] = STATE(380),
    [sym_xml] = STATE(479),
    [sym_xml_prolog_tag] = STATE(259),
    [sym_xml_tag] = STATE(480),
    [sym_xml_open_tag] = STATE(129),
    [sym_oneline_base64] = STATE(479),
    [sym_oneline_file] = STATE(479),
    [sym_oneline_hex] = STATE(479),
    [sym_oneline_string] = STATE(479),
    [sym_multiline_string] = STATE(479),
    [sym_json_value] = STATE(479),
    [sym_json_object] = STATE(487),
    [sym_json_array] = STATE(487),
    [sym_json_string] = STATE(487),
    [sym_json_number] = STATE(487),
    [sym_template] = STATE(487),
    [sym_boolean] = STATE(487),
    [sym_integer] = STATE(258),
    [aux_sym_request_repeat2] = STATE(51),
    [aux_sym_xml_repeat1] = STATE(259),
    [aux_sym_integer_repeat1] = STATE(111),
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
    [aux_sym_method_token1] = ACTIONS(71),
    [anon_sym_HTTP_SLASH1_DOT0] = ACTIONS(71),
    [anon_sym_HTTP_SLASH1_DOT1] = ACTIONS(71),
    [anon_sym_HTTP_SLASH2] = ACTIONS(71),
    [anon_sym_HTTP_SLASH3] = ACTIONS(71),
    [anon_sym_HTTP_SLASH_STAR] = ACTIONS(71),
    [anon_sym_HTTP] = ACTIONS(71),
    [anon_sym_LBRACKBasicAuth_RBRACK] = ACTIONS(19),
    [anon_sym_LBRACKQuery_RBRACK] = ACTIONS(21),
    [anon_sym_LBRACKQueryStringParams_RBRACK] = ACTIONS(21),
    [anon_sym_LBRACKForm_RBRACK] = ACTIONS(23),
    [anon_sym_LBRACKFormParams_RBRACK] = ACTIONS(23),
    [anon_sym_LBRACKMultipart_RBRACK] = ACTIONS(25),
    [anon_sym_LBRACKMultipartFormData_RBRACK] = ACTIONS(25),
    [anon_sym_LBRACKCookies_RBRACK] = ACTIONS(27),
    [anon_sym_LBRACKOptions_RBRACK] = ACTIONS(29),
    [anon_sym_null] = ACTIONS(31),
    [anon_sym_file_COMMA] = ACTIONS(33),
    [anon_sym_LT] = ACTIONS(35),
    [anon_sym_LT_QMARK] = ACTIONS(37),
    [anon_sym_base64_COMMA] = ACTIONS(39),
    [anon_sym_hex_COMMA] = ACTIONS(41),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [aux_sym_oneline_string_token1] = ACTIONS(49),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(51),
    [anon_sym_LBRACE] = ACTIONS(53),
    [anon_sym_LBRACK] = ACTIONS(55),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(57),
    [anon_sym_true] = ACTIONS(59),
    [anon_sym_false] = ACTIONS(59),
    [sym_digit] = ACTIONS(61),
    [sym_comment] = ACTIONS(71),
  },
  [8] = {
    [sym_body] = STATE(104),
    [sym_request_section] = STATE(51),
    [sym_basic_auth_section] = STATE(64),
    [sym_query_string_params_section] = STATE(64),
    [sym_form_params_section] = STATE(64),
    [sym_multipart_form_data_section] = STATE(64),
    [sym_cookies_section] = STATE(64),
    [sym_options_section] = STATE(64),
    [sym_bytes] = STATE(380),
    [sym_xml] = STATE(479),
    [sym_xml_prolog_tag] = STATE(259),
    [sym_xml_tag] = STATE(480),
    [sym_xml_open_tag] = STATE(129),
    [sym_oneline_base64] = STATE(479),
    [sym_oneline_file] = STATE(479),
    [sym_oneline_hex] = STATE(479),
    [sym_oneline_string] = STATE(479),
    [sym_multiline_string] = STATE(479),
    [sym_json_value] = STATE(479),
    [sym_json_object] = STATE(487),
    [sym_json_array] = STATE(487),
    [sym_json_string] = STATE(487),
    [sym_json_number] = STATE(487),
    [sym_template] = STATE(487),
    [sym_boolean] = STATE(487),
    [sym_integer] = STATE(258),
    [aux_sym_request_repeat2] = STATE(51),
    [aux_sym_xml_repeat1] = STATE(259),
    [aux_sym_integer_repeat1] = STATE(111),
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
    [aux_sym_method_token1] = ACTIONS(67),
    [anon_sym_HTTP_SLASH1_DOT0] = ACTIONS(67),
    [anon_sym_HTTP_SLASH1_DOT1] = ACTIONS(67),
    [anon_sym_HTTP_SLASH2] = ACTIONS(67),
    [anon_sym_HTTP_SLASH3] = ACTIONS(67),
    [anon_sym_HTTP_SLASH_STAR] = ACTIONS(67),
    [anon_sym_HTTP] = ACTIONS(67),
    [anon_sym_LBRACKBasicAuth_RBRACK] = ACTIONS(19),
    [anon_sym_LBRACKQuery_RBRACK] = ACTIONS(21),
    [anon_sym_LBRACKQueryStringParams_RBRACK] = ACTIONS(21),
    [anon_sym_LBRACKForm_RBRACK] = ACTIONS(23),
    [anon_sym_LBRACKFormParams_RBRACK] = ACTIONS(23),
    [anon_sym_LBRACKMultipart_RBRACK] = ACTIONS(25),
    [anon_sym_LBRACKMultipartFormData_RBRACK] = ACTIONS(25),
    [anon_sym_LBRACKCookies_RBRACK] = ACTIONS(27),
    [anon_sym_LBRACKOptions_RBRACK] = ACTIONS(29),
    [anon_sym_null] = ACTIONS(31),
    [anon_sym_file_COMMA] = ACTIONS(33),
    [anon_sym_LT] = ACTIONS(35),
    [anon_sym_LT_QMARK] = ACTIONS(37),
    [anon_sym_base64_COMMA] = ACTIONS(39),
    [anon_sym_hex_COMMA] = ACTIONS(41),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [aux_sym_oneline_string_token1] = ACTIONS(49),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(51),
    [anon_sym_LBRACE] = ACTIONS(53),
    [anon_sym_LBRACK] = ACTIONS(55),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(57),
    [anon_sym_true] = ACTIONS(59),
    [anon_sym_false] = ACTIONS(59),
    [sym_digit] = ACTIONS(61),
    [sym_comment] = ACTIONS(67),
  },
  [9] = {
    [sym_option] = STATE(11),
    [sym_ca_certificate_option] = STATE(29),
    [sym_compressed_option] = STATE(29),
    [sym_follow_redirect_option] = STATE(29),
    [sym_insecure_option] = STATE(29),
    [sym_max_redirs_option] = STATE(29),
    [sym_path_as_is_option] = STATE(29),
    [sym_proxy_option] = STATE(29),
    [sym_retry_option] = STATE(29),
    [sym_retry_interval_option] = STATE(29),
    [sym_retry_max_count_option] = STATE(29),
    [sym_variable_option] = STATE(29),
    [sym_verbose_option] = STATE(29),
    [sym_very_verbose_option] = STATE(29),
    [aux_sym_options_section_repeat1] = STATE(11),
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
    [aux_sym_method_token1] = ACTIONS(79),
    [anon_sym_HTTP_SLASH1_DOT0] = ACTIONS(79),
    [anon_sym_HTTP_SLASH1_DOT1] = ACTIONS(79),
    [anon_sym_HTTP_SLASH2] = ACTIONS(79),
    [anon_sym_HTTP_SLASH3] = ACTIONS(79),
    [anon_sym_HTTP_SLASH_STAR] = ACTIONS(79),
    [anon_sym_HTTP] = ACTIONS(79),
    [anon_sym_LBRACKBasicAuth_RBRACK] = ACTIONS(79),
    [anon_sym_LBRACKQuery_RBRACK] = ACTIONS(79),
    [anon_sym_LBRACKQueryStringParams_RBRACK] = ACTIONS(79),
    [anon_sym_LBRACKForm_RBRACK] = ACTIONS(79),
    [anon_sym_LBRACKFormParams_RBRACK] = ACTIONS(79),
    [anon_sym_LBRACKMultipart_RBRACK] = ACTIONS(79),
    [anon_sym_LBRACKMultipartFormData_RBRACK] = ACTIONS(79),
    [anon_sym_LBRACKCookies_RBRACK] = ACTIONS(79),
    [anon_sym_LBRACKOptions_RBRACK] = ACTIONS(79),
    [anon_sym_null] = ACTIONS(79),
    [anon_sym_file_COMMA] = ACTIONS(79),
    [anon_sym_cacert] = ACTIONS(81),
    [anon_sym_compressed] = ACTIONS(83),
    [anon_sym_location] = ACTIONS(85),
    [anon_sym_insecure] = ACTIONS(87),
    [anon_sym_max_DASHredirs] = ACTIONS(89),
    [anon_sym_path_DASHas_DASHis] = ACTIONS(91),
    [anon_sym_proxy] = ACTIONS(93),
    [anon_sym_retry] = ACTIONS(95),
    [anon_sym_retry_DASHinterval] = ACTIONS(97),
    [anon_sym_retry_DASHmax_DASHcount] = ACTIONS(99),
    [anon_sym_variable] = ACTIONS(101),
    [anon_sym_verbose] = ACTIONS(103),
    [anon_sym_very_DASHverbose] = ACTIONS(105),
    [anon_sym_LT] = ACTIONS(79),
    [anon_sym_LT_QMARK] = ACTIONS(79),
    [anon_sym_base64_COMMA] = ACTIONS(79),
    [anon_sym_hex_COMMA] = ACTIONS(79),
    [anon_sym_DQUOTE] = ACTIONS(79),
    [aux_sym_oneline_string_token1] = ACTIONS(79),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(79),
    [anon_sym_LBRACE] = ACTIONS(79),
    [anon_sym_LBRACK] = ACTIONS(79),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(77),
    [anon_sym_true] = ACTIONS(79),
    [anon_sym_false] = ACTIONS(79),
    [sym_digit] = ACTIONS(79),
    [sym_comment] = ACTIONS(79),
  },
  [10] = {
    [sym_option] = STATE(10),
    [sym_ca_certificate_option] = STATE(29),
    [sym_compressed_option] = STATE(29),
    [sym_follow_redirect_option] = STATE(29),
    [sym_insecure_option] = STATE(29),
    [sym_max_redirs_option] = STATE(29),
    [sym_path_as_is_option] = STATE(29),
    [sym_proxy_option] = STATE(29),
    [sym_retry_option] = STATE(29),
    [sym_retry_interval_option] = STATE(29),
    [sym_retry_max_count_option] = STATE(29),
    [sym_variable_option] = STATE(29),
    [sym_verbose_option] = STATE(29),
    [sym_very_verbose_option] = STATE(29),
    [aux_sym_options_section_repeat1] = STATE(10),
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
    [aux_sym_method_token1] = ACTIONS(109),
    [anon_sym_HTTP_SLASH1_DOT0] = ACTIONS(109),
    [anon_sym_HTTP_SLASH1_DOT1] = ACTIONS(109),
    [anon_sym_HTTP_SLASH2] = ACTIONS(109),
    [anon_sym_HTTP_SLASH3] = ACTIONS(109),
    [anon_sym_HTTP_SLASH_STAR] = ACTIONS(109),
    [anon_sym_HTTP] = ACTIONS(109),
    [anon_sym_LBRACKBasicAuth_RBRACK] = ACTIONS(109),
    [anon_sym_LBRACKQuery_RBRACK] = ACTIONS(109),
    [anon_sym_LBRACKQueryStringParams_RBRACK] = ACTIONS(109),
    [anon_sym_LBRACKForm_RBRACK] = ACTIONS(109),
    [anon_sym_LBRACKFormParams_RBRACK] = ACTIONS(109),
    [anon_sym_LBRACKMultipart_RBRACK] = ACTIONS(109),
    [anon_sym_LBRACKMultipartFormData_RBRACK] = ACTIONS(109),
    [anon_sym_LBRACKCookies_RBRACK] = ACTIONS(109),
    [anon_sym_LBRACKOptions_RBRACK] = ACTIONS(109),
    [anon_sym_null] = ACTIONS(109),
    [anon_sym_file_COMMA] = ACTIONS(109),
    [anon_sym_cacert] = ACTIONS(111),
    [anon_sym_compressed] = ACTIONS(114),
    [anon_sym_location] = ACTIONS(117),
    [anon_sym_insecure] = ACTIONS(120),
    [anon_sym_max_DASHredirs] = ACTIONS(123),
    [anon_sym_path_DASHas_DASHis] = ACTIONS(126),
    [anon_sym_proxy] = ACTIONS(129),
    [anon_sym_retry] = ACTIONS(132),
    [anon_sym_retry_DASHinterval] = ACTIONS(135),
    [anon_sym_retry_DASHmax_DASHcount] = ACTIONS(138),
    [anon_sym_variable] = ACTIONS(141),
    [anon_sym_verbose] = ACTIONS(144),
    [anon_sym_very_DASHverbose] = ACTIONS(147),
    [anon_sym_LT] = ACTIONS(109),
    [anon_sym_LT_QMARK] = ACTIONS(109),
    [anon_sym_base64_COMMA] = ACTIONS(109),
    [anon_sym_hex_COMMA] = ACTIONS(109),
    [anon_sym_DQUOTE] = ACTIONS(109),
    [aux_sym_oneline_string_token1] = ACTIONS(109),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(109),
    [anon_sym_LBRACE] = ACTIONS(109),
    [anon_sym_LBRACK] = ACTIONS(109),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(107),
    [anon_sym_true] = ACTIONS(109),
    [anon_sym_false] = ACTIONS(109),
    [sym_digit] = ACTIONS(109),
    [sym_comment] = ACTIONS(109),
  },
  [11] = {
    [sym_option] = STATE(10),
    [sym_ca_certificate_option] = STATE(29),
    [sym_compressed_option] = STATE(29),
    [sym_follow_redirect_option] = STATE(29),
    [sym_insecure_option] = STATE(29),
    [sym_max_redirs_option] = STATE(29),
    [sym_path_as_is_option] = STATE(29),
    [sym_proxy_option] = STATE(29),
    [sym_retry_option] = STATE(29),
    [sym_retry_interval_option] = STATE(29),
    [sym_retry_max_count_option] = STATE(29),
    [sym_variable_option] = STATE(29),
    [sym_verbose_option] = STATE(29),
    [sym_very_verbose_option] = STATE(29),
    [aux_sym_options_section_repeat1] = STATE(10),
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
    [anon_sym_HTTP_SLASH1_DOT0] = ACTIONS(152),
    [anon_sym_HTTP_SLASH1_DOT1] = ACTIONS(152),
    [anon_sym_HTTP_SLASH2] = ACTIONS(152),
    [anon_sym_HTTP_SLASH3] = ACTIONS(152),
    [anon_sym_HTTP_SLASH_STAR] = ACTIONS(152),
    [anon_sym_HTTP] = ACTIONS(152),
    [anon_sym_LBRACKBasicAuth_RBRACK] = ACTIONS(152),
    [anon_sym_LBRACKQuery_RBRACK] = ACTIONS(152),
    [anon_sym_LBRACKQueryStringParams_RBRACK] = ACTIONS(152),
    [anon_sym_LBRACKForm_RBRACK] = ACTIONS(152),
    [anon_sym_LBRACKFormParams_RBRACK] = ACTIONS(152),
    [anon_sym_LBRACKMultipart_RBRACK] = ACTIONS(152),
    [anon_sym_LBRACKMultipartFormData_RBRACK] = ACTIONS(152),
    [anon_sym_LBRACKCookies_RBRACK] = ACTIONS(152),
    [anon_sym_LBRACKOptions_RBRACK] = ACTIONS(152),
    [anon_sym_null] = ACTIONS(152),
    [anon_sym_file_COMMA] = ACTIONS(152),
    [anon_sym_cacert] = ACTIONS(81),
    [anon_sym_compressed] = ACTIONS(83),
    [anon_sym_location] = ACTIONS(85),
    [anon_sym_insecure] = ACTIONS(87),
    [anon_sym_max_DASHredirs] = ACTIONS(89),
    [anon_sym_path_DASHas_DASHis] = ACTIONS(91),
    [anon_sym_proxy] = ACTIONS(93),
    [anon_sym_retry] = ACTIONS(95),
    [anon_sym_retry_DASHinterval] = ACTIONS(97),
    [anon_sym_retry_DASHmax_DASHcount] = ACTIONS(99),
    [anon_sym_variable] = ACTIONS(101),
    [anon_sym_verbose] = ACTIONS(103),
    [anon_sym_very_DASHverbose] = ACTIONS(105),
    [anon_sym_LT] = ACTIONS(152),
    [anon_sym_LT_QMARK] = ACTIONS(152),
    [anon_sym_base64_COMMA] = ACTIONS(152),
    [anon_sym_hex_COMMA] = ACTIONS(152),
    [anon_sym_DQUOTE] = ACTIONS(152),
    [aux_sym_oneline_string_token1] = ACTIONS(152),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(152),
    [anon_sym_LBRACE] = ACTIONS(152),
    [anon_sym_LBRACK] = ACTIONS(152),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(150),
    [anon_sym_true] = ACTIONS(152),
    [anon_sym_false] = ACTIONS(152),
    [sym_digit] = ACTIONS(152),
    [sym_comment] = ACTIONS(152),
  },
  [12] = {
    [sym_header] = STATE(71),
    [sym_body] = STATE(135),
    [sym_response_section] = STATE(34),
    [sym_captures_section] = STATE(93),
    [sym_asserts_section] = STATE(93),
    [sym_key_value] = STATE(390),
    [sym_bytes] = STATE(433),
    [sym_xml] = STATE(479),
    [sym_xml_prolog_tag] = STATE(259),
    [sym_xml_tag] = STATE(480),
    [sym_xml_open_tag] = STATE(129),
    [sym_oneline_base64] = STATE(479),
    [sym_oneline_file] = STATE(479),
    [sym_oneline_hex] = STATE(479),
    [sym_key_string] = STATE(486),
    [sym_key_string_content] = STATE(185),
    [sym_key_string_escaped_char] = STATE(231),
    [sym_oneline_string] = STATE(479),
    [sym_multiline_string] = STATE(479),
    [sym_json_value] = STATE(479),
    [sym_json_object] = STATE(487),
    [sym_json_array] = STATE(487),
    [sym_json_string] = STATE(487),
    [sym_json_number] = STATE(487),
    [sym_template] = STATE(263),
    [sym_boolean] = STATE(487),
    [sym_integer] = STATE(258),
    [aux_sym_request_repeat1] = STATE(71),
    [aux_sym_response_repeat1] = STATE(34),
    [aux_sym_xml_repeat1] = STATE(259),
    [aux_sym_key_string_repeat1] = STATE(185),
    [aux_sym_key_string_content_repeat1] = STATE(231),
    [aux_sym_integer_repeat1] = STATE(111),
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
    [anon_sym_LBRACKCaptures_RBRACK] = ACTIONS(158),
    [anon_sym_LBRACKAsserts_RBRACK] = ACTIONS(160),
    [anon_sym_null] = ACTIONS(31),
    [anon_sym_file_COMMA] = ACTIONS(33),
    [anon_sym_LT] = ACTIONS(35),
    [anon_sym_LT_QMARK] = ACTIONS(37),
    [anon_sym_base64_COMMA] = ACTIONS(39),
    [anon_sym_hex_COMMA] = ACTIONS(41),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [sym_key_string_text] = ACTIONS(45),
    [anon_sym_BSLASH2] = ACTIONS(47),
    [aux_sym_oneline_string_token1] = ACTIONS(49),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(51),
    [anon_sym_LBRACE] = ACTIONS(53),
    [anon_sym_LBRACK] = ACTIONS(55),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(57),
    [anon_sym_true] = ACTIONS(59),
    [anon_sym_false] = ACTIONS(59),
    [sym_digit] = ACTIONS(61),
    [sym_comment] = ACTIONS(156),
  },
  [13] = {
    [sym_header] = STATE(12),
    [sym_body] = STATE(134),
    [sym_response_section] = STATE(33),
    [sym_captures_section] = STATE(93),
    [sym_asserts_section] = STATE(93),
    [sym_key_value] = STATE(390),
    [sym_bytes] = STATE(433),
    [sym_xml] = STATE(479),
    [sym_xml_prolog_tag] = STATE(259),
    [sym_xml_tag] = STATE(480),
    [sym_xml_open_tag] = STATE(129),
    [sym_oneline_base64] = STATE(479),
    [sym_oneline_file] = STATE(479),
    [sym_oneline_hex] = STATE(479),
    [sym_key_string] = STATE(486),
    [sym_key_string_content] = STATE(185),
    [sym_key_string_escaped_char] = STATE(231),
    [sym_oneline_string] = STATE(479),
    [sym_multiline_string] = STATE(479),
    [sym_json_value] = STATE(479),
    [sym_json_object] = STATE(487),
    [sym_json_array] = STATE(487),
    [sym_json_string] = STATE(487),
    [sym_json_number] = STATE(487),
    [sym_template] = STATE(263),
    [sym_boolean] = STATE(487),
    [sym_integer] = STATE(258),
    [aux_sym_request_repeat1] = STATE(12),
    [aux_sym_response_repeat1] = STATE(33),
    [aux_sym_xml_repeat1] = STATE(259),
    [aux_sym_key_string_repeat1] = STATE(185),
    [aux_sym_key_string_content_repeat1] = STATE(231),
    [aux_sym_integer_repeat1] = STATE(111),
    [ts_builtin_sym_end] = ACTIONS(162),
    [anon_sym_LF] = ACTIONS(162),
    [anon_sym_GET] = ACTIONS(164),
    [anon_sym_HEAD] = ACTIONS(164),
    [anon_sym_POST] = ACTIONS(164),
    [anon_sym_PUT] = ACTIONS(164),
    [anon_sym_DELETE] = ACTIONS(164),
    [anon_sym_CONNECT] = ACTIONS(164),
    [anon_sym_OPTIONS] = ACTIONS(164),
    [anon_sym_TRACE] = ACTIONS(164),
    [anon_sym_PATCH] = ACTIONS(164),
    [anon_sym_LINK] = ACTIONS(164),
    [anon_sym_UNLINK] = ACTIONS(164),
    [anon_sym_PURGE] = ACTIONS(164),
    [anon_sym_LOCK] = ACTIONS(164),
    [anon_sym_UNLOCK] = ACTIONS(164),
    [anon_sym_PROPFIND] = ACTIONS(164),
    [anon_sym_VIEW] = ACTIONS(164),
    [aux_sym_method_token1] = ACTIONS(164),
    [anon_sym_LBRACKCaptures_RBRACK] = ACTIONS(158),
    [anon_sym_LBRACKAsserts_RBRACK] = ACTIONS(160),
    [anon_sym_null] = ACTIONS(31),
    [anon_sym_file_COMMA] = ACTIONS(33),
    [anon_sym_LT] = ACTIONS(35),
    [anon_sym_LT_QMARK] = ACTIONS(37),
    [anon_sym_base64_COMMA] = ACTIONS(39),
    [anon_sym_hex_COMMA] = ACTIONS(41),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [sym_key_string_text] = ACTIONS(45),
    [anon_sym_BSLASH2] = ACTIONS(47),
    [aux_sym_oneline_string_token1] = ACTIONS(49),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(51),
    [anon_sym_LBRACE] = ACTIONS(53),
    [anon_sym_LBRACK] = ACTIONS(55),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(57),
    [anon_sym_true] = ACTIONS(59),
    [anon_sym_false] = ACTIONS(59),
    [sym_digit] = ACTIONS(61),
    [sym_comment] = ACTIONS(164),
  },
  [14] = {
    [sym_predicate] = STATE(369),
    [sym_predicate_func] = STATE(550),
    [sym_equal_predicate] = STATE(560),
    [sym_not_equal_predicate] = STATE(560),
    [sym_greater_predicate] = STATE(560),
    [sym_greater_or_equal_predicate] = STATE(560),
    [sym_less_predicate] = STATE(560),
    [sym_less_or_equal_predicate] = STATE(560),
    [sym_start_with_predicate] = STATE(560),
    [sym_end_with_predicate] = STATE(560),
    [sym_contain_predicate] = STATE(560),
    [sym_match_predicate] = STATE(560),
    [sym_include_predicate] = STATE(560),
    [sym_filter] = STATE(15),
    [sym_regex_filter] = STATE(74),
    [sym_nth_filter] = STATE(74),
    [sym_replace_filter] = STATE(74),
    [sym_split_filter] = STATE(74),
    [sym_xpath_filter] = STATE(74),
    [aux_sym_capture_repeat1] = STATE(15),
    [anon_sym_xpath] = ACTIONS(166),
    [anon_sym_regex] = ACTIONS(168),
    [anon_sym_not] = ACTIONS(170),
    [anon_sym_exists] = ACTIONS(172),
    [anon_sym_isInteger] = ACTIONS(172),
    [anon_sym_isFloat] = ACTIONS(172),
    [anon_sym_isBoolean] = ACTIONS(172),
    [anon_sym_isString] = ACTIONS(172),
    [anon_sym_isCollection] = ACTIONS(172),
    [anon_sym_isNumber] = ACTIONS(172),
    [anon_sym_isIsoDate] = ACTIONS(172),
    [anon_sym_isEmpty] = ACTIONS(172),
    [anon_sym_isIpv4] = ACTIONS(172),
    [anon_sym_isIpv6] = ACTIONS(172),
    [anon_sym_isUuid] = ACTIONS(172),
    [anon_sym_equals] = ACTIONS(174),
    [anon_sym_EQ_EQ] = ACTIONS(174),
    [anon_sym_notEquals] = ACTIONS(176),
    [anon_sym_BANG_EQ] = ACTIONS(176),
    [anon_sym_greaterThan] = ACTIONS(178),
    [anon_sym_GT] = ACTIONS(178),
    [anon_sym_greaterThanOrEquals] = ACTIONS(180),
    [anon_sym_GT_EQ] = ACTIONS(180),
    [anon_sym_lessThan] = ACTIONS(182),
    [anon_sym_LT] = ACTIONS(182),
    [anon_sym_lessThanOrEquals] = ACTIONS(184),
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
    [anon_sym_decode] = ACTIONS(196),
    [anon_sym_format] = ACTIONS(196),
    [anon_sym_toDate] = ACTIONS(196),
    [anon_sym_nth] = ACTIONS(198),
    [anon_sym_replace] = ACTIONS(200),
    [anon_sym_split] = ACTIONS(202),
    [sym_comment] = ACTIONS(204),
  },
  [15] = {
    [sym_predicate] = STATE(411),
    [sym_predicate_func] = STATE(550),
    [sym_equal_predicate] = STATE(560),
    [sym_not_equal_predicate] = STATE(560),
    [sym_greater_predicate] = STATE(560),
    [sym_greater_or_equal_predicate] = STATE(560),
    [sym_less_predicate] = STATE(560),
    [sym_less_or_equal_predicate] = STATE(560),
    [sym_start_with_predicate] = STATE(560),
    [sym_end_with_predicate] = STATE(560),
    [sym_contain_predicate] = STATE(560),
    [sym_match_predicate] = STATE(560),
    [sym_include_predicate] = STATE(560),
    [sym_filter] = STATE(54),
    [sym_regex_filter] = STATE(74),
    [sym_nth_filter] = STATE(74),
    [sym_replace_filter] = STATE(74),
    [sym_split_filter] = STATE(74),
    [sym_xpath_filter] = STATE(74),
    [aux_sym_capture_repeat1] = STATE(54),
    [anon_sym_xpath] = ACTIONS(166),
    [anon_sym_regex] = ACTIONS(168),
    [anon_sym_not] = ACTIONS(170),
    [anon_sym_exists] = ACTIONS(172),
    [anon_sym_isInteger] = ACTIONS(172),
    [anon_sym_isFloat] = ACTIONS(172),
    [anon_sym_isBoolean] = ACTIONS(172),
    [anon_sym_isString] = ACTIONS(172),
    [anon_sym_isCollection] = ACTIONS(172),
    [anon_sym_isNumber] = ACTIONS(172),
    [anon_sym_isIsoDate] = ACTIONS(172),
    [anon_sym_isEmpty] = ACTIONS(172),
    [anon_sym_isIpv4] = ACTIONS(172),
    [anon_sym_isIpv6] = ACTIONS(172),
    [anon_sym_isUuid] = ACTIONS(172),
    [anon_sym_equals] = ACTIONS(174),
    [anon_sym_EQ_EQ] = ACTIONS(174),
    [anon_sym_notEquals] = ACTIONS(176),
    [anon_sym_BANG_EQ] = ACTIONS(176),
    [anon_sym_greaterThan] = ACTIONS(178),
    [anon_sym_GT] = ACTIONS(178),
    [anon_sym_greaterThanOrEquals] = ACTIONS(180),
    [anon_sym_GT_EQ] = ACTIONS(180),
    [anon_sym_lessThan] = ACTIONS(182),
    [anon_sym_LT] = ACTIONS(182),
    [anon_sym_lessThanOrEquals] = ACTIONS(184),
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
    [anon_sym_decode] = ACTIONS(196),
    [anon_sym_format] = ACTIONS(196),
    [anon_sym_toDate] = ACTIONS(196),
    [anon_sym_nth] = ACTIONS(198),
    [anon_sym_replace] = ACTIONS(200),
    [anon_sym_split] = ACTIONS(202),
    [sym_comment] = ACTIONS(204),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(208), 1,
      anon_sym_LF,
    ACTIONS(213), 1,
      sym_comment,
    STATE(16), 1,
      aux_sym__comment_or_new_line_repeat1,
    ACTIONS(206), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(211), 59,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
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
      sym_digit,
  [75] = 5,
    ACTIONS(218), 1,
      anon_sym_LF,
    ACTIONS(222), 1,
      sym_comment,
    STATE(16), 1,
      aux_sym__comment_or_new_line_repeat1,
    ACTIONS(216), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(220), 59,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
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
      sym_digit,
  [150] = 2,
    ACTIONS(224), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(226), 60,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
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
      sym_digit,
      sym_comment,
  [218] = 2,
    ACTIONS(228), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(230), 60,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
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
      sym_digit,
      sym_comment,
  [286] = 2,
    ACTIONS(232), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(234), 60,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
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
      sym_digit,
      sym_comment,
  [354] = 2,
    ACTIONS(236), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(238), 60,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
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
      sym_digit,
      sym_comment,
  [422] = 2,
    ACTIONS(240), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(242), 60,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
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
      sym_digit,
      sym_comment,
  [490] = 2,
    ACTIONS(244), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(246), 60,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
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
      sym_digit,
      sym_comment,
  [558] = 2,
    ACTIONS(248), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(250), 60,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
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
      sym_digit,
      sym_comment,
  [626] = 2,
    ACTIONS(252), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(254), 60,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
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
      sym_digit,
      sym_comment,
  [694] = 2,
    ACTIONS(256), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(258), 60,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
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
      sym_digit,
      sym_comment,
  [762] = 2,
    ACTIONS(260), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(262), 60,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
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
      sym_digit,
      sym_comment,
  [830] = 2,
    ACTIONS(264), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(266), 60,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
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
      sym_digit,
      sym_comment,
  [898] = 2,
    ACTIONS(268), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(270), 60,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
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
      sym_digit,
      sym_comment,
  [966] = 2,
    ACTIONS(272), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(274), 60,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
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
      sym_digit,
      sym_comment,
  [1034] = 2,
    ACTIONS(276), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(278), 60,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
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
      sym_digit,
      sym_comment,
  [1102] = 2,
    ACTIONS(280), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(282), 60,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
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
      sym_digit,
      sym_comment,
  [1170] = 29,
    ACTIONS(31), 1,
      anon_sym_null,
    ACTIONS(33), 1,
      anon_sym_file_COMMA,
    ACTIONS(35), 1,
      anon_sym_LT,
    ACTIONS(37), 1,
      anon_sym_LT_QMARK,
    ACTIONS(39), 1,
      anon_sym_base64_COMMA,
    ACTIONS(41), 1,
      anon_sym_hex_COMMA,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(49), 1,
      aux_sym_oneline_string_token1,
    ACTIONS(51), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(53), 1,
      anon_sym_LBRACE,
    ACTIONS(55), 1,
      anon_sym_LBRACK,
    ACTIONS(57), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(61), 1,
      sym_digit,
    ACTIONS(158), 1,
      anon_sym_LBRACKCaptures_RBRACK,
    ACTIONS(160), 1,
      anon_sym_LBRACKAsserts_RBRACK,
    STATE(111), 1,
      aux_sym_integer_repeat1,
    STATE(129), 1,
      sym_xml_open_tag,
    STATE(135), 1,
      sym_body,
    STATE(258), 1,
      sym_integer,
    STATE(433), 1,
      sym_bytes,
    STATE(480), 1,
      sym_xml_tag,
    ACTIONS(59), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(154), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(87), 2,
      sym_response_section,
      aux_sym_response_repeat1,
    STATE(93), 2,
      sym_captures_section,
      sym_asserts_section,
    STATE(259), 2,
      sym_xml_prolog_tag,
      aux_sym_xml_repeat1,
    STATE(487), 6,
      sym_json_object,
      sym_json_array,
      sym_json_string,
      sym_json_number,
      sym_template,
      sym_boolean,
    STATE(479), 7,
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
  [1291] = 29,
    ACTIONS(31), 1,
      anon_sym_null,
    ACTIONS(33), 1,
      anon_sym_file_COMMA,
    ACTIONS(35), 1,
      anon_sym_LT,
    ACTIONS(37), 1,
      anon_sym_LT_QMARK,
    ACTIONS(39), 1,
      anon_sym_base64_COMMA,
    ACTIONS(41), 1,
      anon_sym_hex_COMMA,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(49), 1,
      aux_sym_oneline_string_token1,
    ACTIONS(51), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(53), 1,
      anon_sym_LBRACE,
    ACTIONS(55), 1,
      anon_sym_LBRACK,
    ACTIONS(57), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(61), 1,
      sym_digit,
    ACTIONS(158), 1,
      anon_sym_LBRACKCaptures_RBRACK,
    ACTIONS(160), 1,
      anon_sym_LBRACKAsserts_RBRACK,
    STATE(111), 1,
      aux_sym_integer_repeat1,
    STATE(125), 1,
      sym_body,
    STATE(129), 1,
      sym_xml_open_tag,
    STATE(258), 1,
      sym_integer,
    STATE(433), 1,
      sym_bytes,
    STATE(480), 1,
      sym_xml_tag,
    ACTIONS(59), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(284), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(87), 2,
      sym_response_section,
      aux_sym_response_repeat1,
    STATE(93), 2,
      sym_captures_section,
      sym_asserts_section,
    STATE(259), 2,
      sym_xml_prolog_tag,
      aux_sym_xml_repeat1,
    STATE(487), 6,
      sym_json_object,
      sym_json_array,
      sym_json_string,
      sym_json_number,
      sym_template,
      sym_boolean,
    STATE(479), 7,
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
  [1412] = 10,
    ACTIONS(45), 1,
      sym_key_string_text,
    ACTIONS(47), 1,
      anon_sym_BSLASH2,
    ACTIONS(292), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(463), 1,
      sym_key_string,
    STATE(562), 1,
      sym_multipart_form_data_param,
    ACTIONS(288), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(231), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(474), 2,
      sym_key_value,
      sym_file_param,
    STATE(185), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
    ACTIONS(290), 47,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
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
      sym_digit,
      sym_comment,
  [1494] = 10,
    ACTIONS(45), 1,
      sym_key_string_text,
    ACTIONS(47), 1,
      anon_sym_BSLASH2,
    ACTIONS(292), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(463), 1,
      sym_key_string,
    STATE(562), 1,
      sym_multipart_form_data_param,
    ACTIONS(294), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(231), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(474), 2,
      sym_key_value,
      sym_file_param,
    STATE(185), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
    ACTIONS(296), 47,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
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
      sym_digit,
      sym_comment,
  [1576] = 10,
    ACTIONS(302), 1,
      sym_key_string_text,
    ACTIONS(305), 1,
      anon_sym_BSLASH2,
    ACTIONS(308), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(359), 1,
      sym_key_value,
    STATE(486), 1,
      sym_key_string,
    ACTIONS(298), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(37), 2,
      sym_header,
      aux_sym_request_repeat1,
    STATE(231), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(185), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
    ACTIONS(300), 47,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
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
      sym_digit,
      sym_comment,
  [1658] = 10,
    ACTIONS(45), 1,
      sym_key_string_text,
    ACTIONS(47), 1,
      anon_sym_BSLASH2,
    ACTIONS(292), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(463), 1,
      sym_key_string,
    STATE(562), 1,
      sym_multipart_form_data_param,
    ACTIONS(311), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(231), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(474), 2,
      sym_key_value,
      sym_file_param,
    STATE(185), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
    ACTIONS(313), 47,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
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
      sym_digit,
      sym_comment,
  [1740] = 12,
    ACTIONS(319), 1,
      anon_sym_variable,
    ACTIONS(323), 1,
      anon_sym_header,
    ACTIONS(325), 1,
      anon_sym_cookie,
    ACTIONS(327), 1,
      anon_sym_xpath,
    ACTIONS(329), 1,
      anon_sym_jsonpath,
    ACTIONS(331), 1,
      anon_sym_regex,
    STATE(14), 1,
      sym_query,
    STATE(50), 2,
      sym_assert,
      aux_sym_asserts_section_repeat1,
    ACTIONS(315), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    STATE(85), 6,
      sym_header_query,
      sym_cookie_query,
      sym_xpath_query,
      sym_jsonpath_query,
      sym_regex_query,
      sym_variable_query,
    ACTIONS(321), 7,
      anon_sym_status,
      anon_sym_url,
      anon_sym_body,
      anon_sym_duration,
      anon_sym_bytes,
      anon_sym_sha256,
      anon_sym_md5,
    ACTIONS(317), 34,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
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
      sym_digit,
      sym_comment,
  [1824] = 12,
    ACTIONS(337), 1,
      anon_sym_variable,
    ACTIONS(343), 1,
      anon_sym_header,
    ACTIONS(346), 1,
      anon_sym_cookie,
    ACTIONS(349), 1,
      anon_sym_xpath,
    ACTIONS(352), 1,
      anon_sym_jsonpath,
    ACTIONS(355), 1,
      anon_sym_regex,
    STATE(14), 1,
      sym_query,
    STATE(40), 2,
      sym_assert,
      aux_sym_asserts_section_repeat1,
    ACTIONS(333), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    STATE(85), 6,
      sym_header_query,
      sym_cookie_query,
      sym_xpath_query,
      sym_jsonpath_query,
      sym_regex_query,
      sym_variable_query,
    ACTIONS(340), 7,
      anon_sym_status,
      anon_sym_url,
      anon_sym_body,
      anon_sym_duration,
      anon_sym_bytes,
      anon_sym_sha256,
      anon_sym_md5,
    ACTIONS(335), 34,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
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
      sym_digit,
      sym_comment,
  [1908] = 9,
    ACTIONS(45), 1,
      sym_key_string_text,
    ACTIONS(47), 1,
      anon_sym_BSLASH2,
    ACTIONS(292), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(486), 1,
      sym_key_string,
    STATE(558), 1,
      sym_key_value,
    ACTIONS(358), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(231), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(185), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
    ACTIONS(360), 47,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
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
      sym_digit,
      sym_comment,
  [1986] = 9,
    ACTIONS(45), 1,
      sym_key_string_text,
    ACTIONS(47), 1,
      anon_sym_BSLASH2,
    ACTIONS(292), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(486), 1,
      sym_key_string,
    STATE(558), 1,
      sym_key_value,
    ACTIONS(362), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(231), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(185), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
    ACTIONS(364), 47,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
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
      sym_digit,
      sym_comment,
  [2064] = 9,
    ACTIONS(45), 1,
      sym_key_string_text,
    ACTIONS(47), 1,
      anon_sym_BSLASH2,
    ACTIONS(292), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(486), 1,
      sym_key_string,
    STATE(558), 1,
      sym_key_value,
    ACTIONS(366), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(231), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(185), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
    ACTIONS(368), 47,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
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
      sym_digit,
      sym_comment,
  [2142] = 9,
    ACTIONS(45), 1,
      sym_key_string_text,
    ACTIONS(47), 1,
      anon_sym_BSLASH2,
    ACTIONS(292), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(486), 1,
      sym_key_string,
    STATE(558), 1,
      sym_key_value,
    ACTIONS(370), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(231), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(185), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
    ACTIONS(372), 47,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
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
      sym_digit,
      sym_comment,
  [2220] = 9,
    ACTIONS(45), 1,
      sym_key_string_text,
    ACTIONS(47), 1,
      anon_sym_BSLASH2,
    ACTIONS(292), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(486), 1,
      sym_key_string,
    STATE(558), 1,
      sym_key_value,
    ACTIONS(374), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(231), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(185), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
    ACTIONS(376), 47,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
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
      sym_digit,
      sym_comment,
  [2298] = 9,
    ACTIONS(45), 1,
      sym_key_string_text,
    ACTIONS(47), 1,
      anon_sym_BSLASH2,
    ACTIONS(292), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(486), 1,
      sym_key_string,
    STATE(558), 1,
      sym_key_value,
    ACTIONS(378), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(231), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(185), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
    ACTIONS(380), 47,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
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
      sym_digit,
      sym_comment,
  [2376] = 9,
    ACTIONS(45), 1,
      sym_key_string_text,
    ACTIONS(47), 1,
      anon_sym_BSLASH2,
    ACTIONS(292), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(486), 1,
      sym_key_string,
    STATE(558), 1,
      sym_key_value,
    ACTIONS(382), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(231), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(185), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
    ACTIONS(384), 47,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
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
      sym_digit,
      sym_comment,
  [2454] = 9,
    ACTIONS(45), 1,
      sym_key_string_text,
    ACTIONS(47), 1,
      anon_sym_BSLASH2,
    ACTIONS(292), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(486), 1,
      sym_key_string,
    STATE(558), 1,
      sym_key_value,
    ACTIONS(386), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(231), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(185), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
    ACTIONS(388), 47,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
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
      sym_digit,
      sym_comment,
  [2532] = 9,
    ACTIONS(45), 1,
      sym_key_string_text,
    ACTIONS(47), 1,
      anon_sym_BSLASH2,
    ACTIONS(292), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(486), 1,
      sym_key_string,
    STATE(558), 1,
      sym_key_value,
    ACTIONS(390), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(231), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(185), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
    ACTIONS(392), 47,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
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
      sym_digit,
      sym_comment,
  [2610] = 12,
    ACTIONS(319), 1,
      anon_sym_variable,
    ACTIONS(323), 1,
      anon_sym_header,
    ACTIONS(325), 1,
      anon_sym_cookie,
    ACTIONS(327), 1,
      anon_sym_xpath,
    ACTIONS(329), 1,
      anon_sym_jsonpath,
    ACTIONS(331), 1,
      anon_sym_regex,
    STATE(14), 1,
      sym_query,
    STATE(40), 2,
      sym_assert,
      aux_sym_asserts_section_repeat1,
    ACTIONS(394), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    STATE(85), 6,
      sym_header_query,
      sym_cookie_query,
      sym_xpath_query,
      sym_jsonpath_query,
      sym_regex_query,
      sym_variable_query,
    ACTIONS(321), 7,
      anon_sym_status,
      anon_sym_url,
      anon_sym_body,
      anon_sym_duration,
      anon_sym_bytes,
      anon_sym_sha256,
      anon_sym_md5,
    ACTIONS(396), 34,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
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
      sym_digit,
      sym_comment,
  [2694] = 10,
    ACTIONS(402), 1,
      anon_sym_LBRACKBasicAuth_RBRACK,
    ACTIONS(414), 1,
      anon_sym_LBRACKCookies_RBRACK,
    ACTIONS(417), 1,
      anon_sym_LBRACKOptions_RBRACK,
    ACTIONS(405), 2,
      anon_sym_LBRACKQuery_RBRACK,
      anon_sym_LBRACKQueryStringParams_RBRACK,
    ACTIONS(408), 2,
      anon_sym_LBRACKForm_RBRACK,
      anon_sym_LBRACKFormParams_RBRACK,
    ACTIONS(411), 2,
      anon_sym_LBRACKMultipart_RBRACK,
      anon_sym_LBRACKMultipartFormData_RBRACK,
    STATE(51), 2,
      sym_request_section,
      aux_sym_request_repeat2,
    ACTIONS(398), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    STATE(64), 6,
      sym_basic_auth_section,
      sym_query_string_params_section,
      sym_form_params_section,
      sym_multipart_form_data_section,
      sym_cookies_section,
      sym_options_section,
    ACTIONS(400), 38,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
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
      sym_digit,
      sym_comment,
  [2773] = 6,
    ACTIONS(422), 1,
      anon_sym_LF,
    ACTIONS(427), 1,
      sym_comment,
    STATE(57), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(52), 2,
      sym__comment_or_new_line,
      aux_sym_hurl_file_repeat2,
    ACTIONS(420), 3,
      ts_builtin_sym_end,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(425), 47,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
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
      sym_digit,
  [2841] = 5,
    ACTIONS(204), 1,
      sym_comment,
    ACTIONS(434), 1,
      sym_digit,
    STATE(55), 1,
      aux_sym_integer_repeat1,
    ACTIONS(432), 6,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
      anon_sym_e,
    ACTIONS(430), 46,
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
      anon_sym_COMMA,
      anon_sym_RBRACK,
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
      anon_sym_DOT,
      anon_sym_E,
  [2907] = 11,
    ACTIONS(204), 1,
      sym_comment,
    ACTIONS(436), 1,
      anon_sym_xpath,
    ACTIONS(439), 1,
      anon_sym_regex,
    ACTIONS(449), 1,
      anon_sym_nth,
    ACTIONS(452), 1,
      anon_sym_replace,
    ACTIONS(455), 1,
      anon_sym_split,
    STATE(54), 2,
      sym_filter,
      aux_sym_capture_repeat1,
    ACTIONS(442), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    STATE(74), 5,
      sym_regex_filter,
      sym_nth_filter,
      sym_replace_filter,
      sym_split_filter,
      sym_xpath_filter,
    ACTIONS(446), 11,
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
    ACTIONS(444), 26,
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
  [2985] = 5,
    ACTIONS(204), 1,
      sym_comment,
    ACTIONS(462), 1,
      sym_digit,
    STATE(55), 1,
      aux_sym_integer_repeat1,
    ACTIONS(460), 6,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
      anon_sym_e,
    ACTIONS(458), 46,
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
      anon_sym_COMMA,
      anon_sym_RBRACK,
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
      anon_sym_DOT,
      anon_sym_E,
  [3051] = 5,
    ACTIONS(465), 1,
      anon_sym_LF,
    ACTIONS(468), 1,
      sym_comment,
    STATE(56), 1,
      aux_sym__comment_or_new_line_repeat1,
    ACTIONS(206), 3,
      ts_builtin_sym_end,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(211), 47,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
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
      sym_digit,
  [3115] = 5,
    ACTIONS(471), 1,
      anon_sym_LF,
    ACTIONS(473), 1,
      sym_comment,
    STATE(56), 1,
      aux_sym__comment_or_new_line_repeat1,
    ACTIONS(216), 3,
      ts_builtin_sym_end,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(220), 47,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
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
      sym_digit,
  [3179] = 2,
    ACTIONS(475), 4,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(477), 48,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
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
      sym_digit,
      sym_comment,
  [3236] = 5,
    ACTIONS(479), 1,
      anon_sym_LF,
    ACTIONS(481), 1,
      sym_comment,
    STATE(60), 1,
      aux_sym__comment_or_new_line_repeat1,
    ACTIONS(216), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(220), 46,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
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
      anon_sym_variable,
      anon_sym_status,
      anon_sym_url,
      anon_sym_body,
      anon_sym_duration,
      anon_sym_bytes,
      anon_sym_sha256,
      anon_sym_md5,
      anon_sym_header,
      anon_sym_cookie,
      anon_sym_xpath,
      anon_sym_jsonpath,
      anon_sym_regex,
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
      sym_digit,
  [3298] = 5,
    ACTIONS(483), 1,
      anon_sym_LF,
    ACTIONS(486), 1,
      sym_comment,
    STATE(60), 1,
      aux_sym__comment_or_new_line_repeat1,
    ACTIONS(206), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(211), 46,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
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
      anon_sym_variable,
      anon_sym_status,
      anon_sym_url,
      anon_sym_body,
      anon_sym_duration,
      anon_sym_bytes,
      anon_sym_sha256,
      anon_sym_md5,
      anon_sym_header,
      anon_sym_cookie,
      anon_sym_xpath,
      anon_sym_jsonpath,
      anon_sym_regex,
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
      sym_digit,
  [3360] = 2,
    ACTIONS(489), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(491), 47,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
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
      sym_digit,
      sym_comment,
  [3415] = 2,
    ACTIONS(493), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(495), 47,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
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
      anon_sym_variable,
      anon_sym_status,
      anon_sym_url,
      anon_sym_body,
      anon_sym_duration,
      anon_sym_bytes,
      anon_sym_sha256,
      anon_sym_md5,
      anon_sym_header,
      anon_sym_cookie,
      anon_sym_xpath,
      anon_sym_jsonpath,
      anon_sym_regex,
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
      sym_digit,
      sym_comment,
  [3470] = 2,
    ACTIONS(497), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(499), 47,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
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
      anon_sym_variable,
      anon_sym_status,
      anon_sym_url,
      anon_sym_body,
      anon_sym_duration,
      anon_sym_bytes,
      anon_sym_sha256,
      anon_sym_md5,
      anon_sym_header,
      anon_sym_cookie,
      anon_sym_xpath,
      anon_sym_jsonpath,
      anon_sym_regex,
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
      sym_digit,
      sym_comment,
  [3525] = 2,
    ACTIONS(501), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(503), 47,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
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
      sym_digit,
      sym_comment,
  [3580] = 3,
    ACTIONS(204), 1,
      sym_comment,
    ACTIONS(507), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(505), 43,
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
  [3636] = 3,
    ACTIONS(204), 1,
      sym_comment,
    ACTIONS(511), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(509), 43,
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
  [3692] = 3,
    ACTIONS(204), 1,
      sym_comment,
    ACTIONS(515), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(513), 43,
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
  [3748] = 3,
    ACTIONS(204), 1,
      sym_comment,
    ACTIONS(519), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(517), 43,
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
  [3804] = 3,
    ACTIONS(204), 1,
      sym_comment,
    ACTIONS(523), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(521), 42,
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
  [3859] = 3,
    ACTIONS(204), 1,
      sym_comment,
    ACTIONS(527), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(525), 42,
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
  [3914] = 10,
    ACTIONS(302), 1,
      sym_key_string_text,
    ACTIONS(305), 1,
      anon_sym_BSLASH2,
    ACTIONS(308), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(390), 1,
      sym_key_value,
    STATE(486), 1,
      sym_key_string,
    ACTIONS(298), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(71), 2,
      sym_header,
      aux_sym_request_repeat1,
    STATE(231), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(185), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
    ACTIONS(300), 34,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
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
      sym_digit,
      sym_comment,
  [3983] = 3,
    ACTIONS(204), 1,
      sym_comment,
    ACTIONS(531), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(529), 42,
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
  [4038] = 3,
    ACTIONS(204), 1,
      sym_comment,
    ACTIONS(535), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(533), 42,
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
  [4093] = 3,
    ACTIONS(204), 1,
      sym_comment,
    ACTIONS(539), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(537), 42,
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
  [4148] = 3,
    ACTIONS(204), 1,
      sym_comment,
    ACTIONS(543), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(541), 42,
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
  [4203] = 3,
    ACTIONS(204), 1,
      sym_comment,
    ACTIONS(547), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(545), 41,
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
  [4257] = 3,
    ACTIONS(204), 1,
      sym_comment,
    ACTIONS(551), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(549), 41,
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
  [4311] = 9,
    ACTIONS(557), 1,
      sym_key_string_text,
    ACTIONS(559), 1,
      anon_sym_BSLASH2,
    ACTIONS(561), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(592), 1,
      sym_key_string,
    ACTIONS(553), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(79), 2,
      sym_capture,
      aux_sym_captures_section_repeat1,
    STATE(247), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(194), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
    ACTIONS(555), 34,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
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
      sym_digit,
      sym_comment,
  [4377] = 9,
    ACTIONS(557), 1,
      sym_key_string_text,
    ACTIONS(559), 1,
      anon_sym_BSLASH2,
    ACTIONS(561), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(592), 1,
      sym_key_string,
    ACTIONS(563), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(82), 2,
      sym_capture,
      aux_sym_captures_section_repeat1,
    STATE(247), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(194), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
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
      aux_sym_method_token1,
      anon_sym_LBRACKCaptures_RBRACK,
      anon_sym_LBRACKAsserts_RBRACK,
      anon_sym_null,
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
      sym_digit,
      sym_comment,
  [4443] = 3,
    ACTIONS(204), 1,
      sym_comment,
    ACTIONS(569), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(567), 41,
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
  [4497] = 3,
    ACTIONS(204), 1,
      sym_comment,
    ACTIONS(573), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(571), 41,
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
  [4551] = 9,
    ACTIONS(579), 1,
      sym_key_string_text,
    ACTIONS(582), 1,
      anon_sym_BSLASH2,
    ACTIONS(585), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(592), 1,
      sym_key_string,
    ACTIONS(575), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(82), 2,
      sym_capture,
      aux_sym_captures_section_repeat1,
    STATE(247), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(194), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
    ACTIONS(577), 34,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
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
      sym_digit,
      sym_comment,
  [4617] = 3,
    ACTIONS(204), 1,
      sym_comment,
    ACTIONS(590), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(588), 41,
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
  [4671] = 3,
    ACTIONS(204), 1,
      sym_comment,
    ACTIONS(594), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(592), 41,
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
  [4725] = 3,
    ACTIONS(204), 1,
      sym_comment,
    ACTIONS(598), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(596), 41,
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
  [4779] = 15,
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
    ACTIONS(204), 1,
      sym_comment,
    STATE(536), 1,
      sym_predicate_func,
    ACTIONS(174), 2,
      anon_sym_equals,
      anon_sym_EQ_EQ,
    ACTIONS(176), 2,
      anon_sym_notEquals,
      anon_sym_BANG_EQ,
    ACTIONS(178), 2,
      anon_sym_greaterThan,
      anon_sym_GT,
    ACTIONS(180), 2,
      anon_sym_greaterThanOrEquals,
      anon_sym_GT_EQ,
    ACTIONS(182), 2,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(184), 2,
      anon_sym_lessThanOrEquals,
      anon_sym_LT_EQ,
    STATE(560), 11,
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
    ACTIONS(172), 12,
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
  [4852] = 6,
    ACTIONS(604), 1,
      anon_sym_LBRACKCaptures_RBRACK,
    ACTIONS(607), 1,
      anon_sym_LBRACKAsserts_RBRACK,
    STATE(87), 2,
      sym_response_section,
      aux_sym_response_repeat1,
    STATE(93), 2,
      sym_captures_section,
      sym_asserts_section,
    ACTIONS(600), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(602), 32,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
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
      sym_digit,
      sym_comment,
  [4906] = 5,
    ACTIONS(610), 1,
      anon_sym_LF,
    ACTIONS(612), 1,
      sym_comment,
    STATE(89), 1,
      aux_sym__comment_or_new_line_repeat1,
    ACTIONS(216), 3,
      ts_builtin_sym_end,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(220), 34,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
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
      sym_digit,
  [4957] = 5,
    ACTIONS(614), 1,
      anon_sym_LF,
    ACTIONS(617), 1,
      sym_comment,
    STATE(89), 1,
      aux_sym__comment_or_new_line_repeat1,
    ACTIONS(206), 3,
      ts_builtin_sym_end,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(211), 34,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
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
      sym_digit,
  [5008] = 2,
    ACTIONS(620), 4,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(622), 35,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
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
      sym_digit,
      sym_comment,
  [5052] = 2,
    ACTIONS(624), 4,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(626), 35,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
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
      sym_digit,
      sym_comment,
  [5096] = 2,
    ACTIONS(475), 4,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(477), 35,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
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
      sym_digit,
      sym_comment,
  [5140] = 2,
    ACTIONS(628), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(630), 34,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
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
      sym_digit,
      sym_comment,
  [5182] = 9,
    ACTIONS(7), 1,
      anon_sym_LF,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(632), 1,
      ts_builtin_sym_end,
    STATE(59), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(114), 1,
      sym_response,
    STATE(127), 1,
      sym__comment_or_new_line,
    STATE(371), 1,
      sym_version,
    ACTIONS(636), 6,
      anon_sym_HTTP_SLASH1_DOT0,
      anon_sym_HTTP_SLASH1_DOT1,
      anon_sym_HTTP_SLASH2,
      anon_sym_HTTP_SLASH3,
      anon_sym_HTTP_SLASH_STAR,
      anon_sym_HTTP,
    ACTIONS(634), 17,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
      aux_sym_method_token1,
  [5231] = 9,
    ACTIONS(7), 1,
      anon_sym_LF,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(638), 1,
      ts_builtin_sym_end,
    STATE(59), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(115), 1,
      sym_response,
    STATE(123), 1,
      sym__comment_or_new_line,
    STATE(371), 1,
      sym_version,
    ACTIONS(636), 6,
      anon_sym_HTTP_SLASH1_DOT0,
      anon_sym_HTTP_SLASH1_DOT1,
      anon_sym_HTTP_SLASH2,
      anon_sym_HTTP_SLASH3,
      anon_sym_HTTP_SLASH_STAR,
      anon_sym_HTTP,
    ACTIONS(640), 17,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
      aux_sym_method_token1,
  [5280] = 12,
    ACTIONS(642), 1,
      anon_sym_LF,
    ACTIONS(644), 1,
      anon_sym_xpath,
    ACTIONS(646), 1,
      anon_sym_regex,
    ACTIONS(650), 1,
      anon_sym_nth,
    ACTIONS(652), 1,
      anon_sym_replace,
    ACTIONS(654), 1,
      anon_sym_split,
    ACTIONS(656), 1,
      sym_comment,
    STATE(88), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(90), 1,
      sym__comment_or_new_line,
    STATE(97), 2,
      sym_filter,
      aux_sym_capture_repeat1,
    STATE(138), 5,
      sym_regex_filter,
      sym_nth_filter,
      sym_replace_filter,
      sym_split_filter,
      sym_xpath_filter,
    ACTIONS(648), 11,
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
  [5332] = 12,
    ACTIONS(642), 1,
      anon_sym_LF,
    ACTIONS(644), 1,
      anon_sym_xpath,
    ACTIONS(646), 1,
      anon_sym_regex,
    ACTIONS(650), 1,
      anon_sym_nth,
    ACTIONS(652), 1,
      anon_sym_replace,
    ACTIONS(654), 1,
      anon_sym_split,
    ACTIONS(656), 1,
      sym_comment,
    STATE(88), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(91), 1,
      sym__comment_or_new_line,
    STATE(105), 2,
      sym_filter,
      aux_sym_capture_repeat1,
    STATE(138), 5,
      sym_regex_filter,
      sym_nth_filter,
      sym_replace_filter,
      sym_split_filter,
      sym_xpath_filter,
    ACTIONS(648), 11,
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
  [5384] = 9,
    ACTIONS(658), 1,
      ts_builtin_sym_end,
    ACTIONS(660), 1,
      anon_sym_LF,
    ACTIONS(666), 1,
      sym_comment,
    STATE(95), 1,
      sym_request,
    STATE(130), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(160), 1,
      sym_method,
    STATE(98), 2,
      sym_entry,
      aux_sym_hurl_file_repeat1,
    STATE(110), 2,
      sym__comment_or_new_line,
      aux_sym_hurl_file_repeat2,
    ACTIONS(663), 17,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
      aux_sym_method_token1,
  [5430] = 9,
    ACTIONS(7), 1,
      anon_sym_LF,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(669), 1,
      ts_builtin_sym_end,
    STATE(59), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(95), 1,
      sym_request,
    STATE(160), 1,
      sym_method,
    STATE(98), 2,
      sym_entry,
      aux_sym_hurl_file_repeat1,
    STATE(109), 2,
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
  [5476] = 2,
    ACTIONS(73), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(75), 24,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
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
  [5507] = 2,
    ACTIONS(671), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(673), 24,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
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
  [5538] = 2,
    ACTIONS(65), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(67), 24,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
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
  [5569] = 2,
    ACTIONS(675), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(677), 24,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
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
  [5600] = 2,
    ACTIONS(69), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(71), 24,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
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
  [5631] = 10,
    ACTIONS(442), 1,
      sym_comment,
    ACTIONS(444), 1,
      anon_sym_LF,
    ACTIONS(679), 1,
      anon_sym_xpath,
    ACTIONS(682), 1,
      anon_sym_regex,
    ACTIONS(688), 1,
      anon_sym_nth,
    ACTIONS(691), 1,
      anon_sym_replace,
    ACTIONS(694), 1,
      anon_sym_split,
    STATE(105), 2,
      sym_filter,
      aux_sym_capture_repeat1,
    STATE(138), 5,
      sym_regex_filter,
      sym_nth_filter,
      sym_replace_filter,
      sym_split_filter,
      sym_xpath_filter,
    ACTIONS(685), 11,
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
  [5677] = 10,
    ACTIONS(166), 1,
      anon_sym_xpath,
    ACTIONS(168), 1,
      anon_sym_regex,
    ACTIONS(198), 1,
      anon_sym_nth,
    ACTIONS(200), 1,
      anon_sym_replace,
    ACTIONS(202), 1,
      anon_sym_split,
    ACTIONS(204), 1,
      sym_comment,
    ACTIONS(697), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(108), 2,
      sym_filter,
      aux_sym_capture_repeat1,
    STATE(74), 5,
      sym_regex_filter,
      sym_nth_filter,
      sym_replace_filter,
      sym_split_filter,
      sym_xpath_filter,
    ACTIONS(196), 11,
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
  [5723] = 8,
    ACTIONS(7), 1,
      anon_sym_LF,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(669), 1,
      ts_builtin_sym_end,
    STATE(59), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(94), 1,
      sym_request,
    STATE(160), 1,
      sym_method,
    STATE(113), 2,
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
  [5765] = 10,
    ACTIONS(166), 1,
      anon_sym_xpath,
    ACTIONS(168), 1,
      anon_sym_regex,
    ACTIONS(198), 1,
      anon_sym_nth,
    ACTIONS(200), 1,
      anon_sym_replace,
    ACTIONS(202), 1,
      anon_sym_split,
    ACTIONS(204), 1,
      sym_comment,
    ACTIONS(699), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(54), 2,
      sym_filter,
      aux_sym_capture_repeat1,
    STATE(74), 5,
      sym_regex_filter,
      sym_nth_filter,
      sym_replace_filter,
      sym_split_filter,
      sym_xpath_filter,
    ACTIONS(196), 11,
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
  [5811] = 8,
    ACTIONS(7), 1,
      anon_sym_LF,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(701), 1,
      ts_builtin_sym_end,
    STATE(59), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(94), 1,
      sym_request,
    STATE(160), 1,
      sym_method,
    STATE(113), 2,
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
  [5853] = 7,
    ACTIONS(703), 1,
      anon_sym_LF,
    ACTIONS(705), 1,
      sym_comment,
    STATE(94), 1,
      sym_request,
    STATE(130), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(160), 1,
      sym_method,
    STATE(116), 2,
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
  [5892] = 4,
    ACTIONS(430), 1,
      anon_sym_LF,
    ACTIONS(707), 1,
      sym_digit,
    STATE(112), 1,
      aux_sym_integer_repeat1,
    ACTIONS(432), 20,
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
      anon_sym_e,
      anon_sym_E,
      sym_comment,
  [5924] = 4,
    ACTIONS(458), 1,
      anon_sym_LF,
    ACTIONS(709), 1,
      sym_digit,
    STATE(112), 1,
      aux_sym_integer_repeat1,
    ACTIONS(460), 20,
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
      anon_sym_e,
      anon_sym_E,
      sym_comment,
  [5956] = 6,
    ACTIONS(420), 1,
      ts_builtin_sym_end,
    ACTIONS(712), 1,
      anon_sym_LF,
    ACTIONS(715), 1,
      sym_comment,
    STATE(59), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(113), 2,
      sym__comment_or_new_line,
      aux_sym_hurl_file_repeat2,
    ACTIONS(425), 17,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
      aux_sym_method_token1,
  [5992] = 6,
    ACTIONS(7), 1,
      anon_sym_LF,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(718), 1,
      ts_builtin_sym_end,
    STATE(59), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(133), 1,
      sym__comment_or_new_line,
    ACTIONS(720), 17,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
      aux_sym_method_token1,
  [6027] = 6,
    ACTIONS(7), 1,
      anon_sym_LF,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(632), 1,
      ts_builtin_sym_end,
    STATE(59), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(127), 1,
      sym__comment_or_new_line,
    ACTIONS(634), 17,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
      aux_sym_method_token1,
  [6062] = 5,
    ACTIONS(722), 1,
      anon_sym_LF,
    ACTIONS(725), 1,
      sym_comment,
    STATE(130), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(116), 2,
      sym__comment_or_new_line,
      aux_sym_hurl_file_repeat2,
    ACTIONS(425), 17,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
      aux_sym_method_token1,
  [6095] = 14,
    ACTIONS(57), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(204), 1,
      sym_comment,
    ACTIONS(728), 1,
      anon_sym_null,
    ACTIONS(730), 1,
      anon_sym_file_COMMA,
    ACTIONS(732), 1,
      anon_sym_base64_COMMA,
    ACTIONS(734), 1,
      anon_sym_hex_COMMA,
    ACTIONS(736), 1,
      anon_sym_DQUOTE,
    ACTIONS(738), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(742), 1,
      sym_digit,
    STATE(111), 1,
      aux_sym_integer_repeat1,
    STATE(395), 1,
      sym_integer,
    STATE(529), 1,
      sym_predicate_value,
    ACTIONS(740), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(532), 8,
      sym_oneline_base64,
      sym_oneline_file,
      sym_oneline_hex,
      sym_quoted_string,
      sym_multiline_string,
      sym_template,
      sym_boolean,
      sym_float,
  [6146] = 14,
    ACTIONS(57), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(204), 1,
      sym_comment,
    ACTIONS(728), 1,
      anon_sym_null,
    ACTIONS(730), 1,
      anon_sym_file_COMMA,
    ACTIONS(732), 1,
      anon_sym_base64_COMMA,
    ACTIONS(734), 1,
      anon_sym_hex_COMMA,
    ACTIONS(736), 1,
      anon_sym_DQUOTE,
    ACTIONS(738), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(742), 1,
      sym_digit,
    STATE(111), 1,
      aux_sym_integer_repeat1,
    STATE(395), 1,
      sym_integer,
    STATE(530), 1,
      sym_predicate_value,
    ACTIONS(740), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(532), 8,
      sym_oneline_base64,
      sym_oneline_file,
      sym_oneline_hex,
      sym_quoted_string,
      sym_multiline_string,
      sym_template,
      sym_boolean,
      sym_float,
  [6197] = 14,
    ACTIONS(57), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(204), 1,
      sym_comment,
    ACTIONS(728), 1,
      anon_sym_null,
    ACTIONS(730), 1,
      anon_sym_file_COMMA,
    ACTIONS(732), 1,
      anon_sym_base64_COMMA,
    ACTIONS(734), 1,
      anon_sym_hex_COMMA,
    ACTIONS(736), 1,
      anon_sym_DQUOTE,
    ACTIONS(738), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(742), 1,
      sym_digit,
    STATE(111), 1,
      aux_sym_integer_repeat1,
    STATE(395), 1,
      sym_integer,
    STATE(511), 1,
      sym_predicate_value,
    ACTIONS(740), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(532), 8,
      sym_oneline_base64,
      sym_oneline_file,
      sym_oneline_hex,
      sym_quoted_string,
      sym_multiline_string,
      sym_template,
      sym_boolean,
      sym_float,
  [6248] = 14,
    ACTIONS(57), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(61), 1,
      sym_digit,
    ACTIONS(204), 1,
      sym_comment,
    ACTIONS(736), 1,
      anon_sym_DQUOTE,
    ACTIONS(744), 1,
      anon_sym_null,
    ACTIONS(746), 1,
      sym_key_string_text,
    ACTIONS(748), 1,
      anon_sym_BSLASH2,
    STATE(111), 1,
      aux_sym_integer_repeat1,
    STATE(417), 1,
      sym_integer,
    STATE(507), 1,
      sym_variable_value,
    ACTIONS(59), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(232), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(200), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
    STATE(508), 4,
      sym_quoted_string,
      sym_key_string,
      sym_boolean,
      sym_float,
  [6298] = 13,
    ACTIONS(61), 1,
      sym_digit,
    ACTIONS(752), 1,
      anon_sym_null,
    ACTIONS(754), 1,
      anon_sym_BSLASH,
    ACTIONS(756), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(758), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(111), 1,
      aux_sym_integer_repeat1,
    STATE(281), 1,
      aux_sym_value_string_text_repeat1,
    STATE(379), 1,
      sym_integer,
    ACTIONS(59), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(750), 2,
      anon_sym_LF,
      sym_comment,
    STATE(174), 3,
      sym_value_string_content,
      sym_template,
      aux_sym_value_string_repeat1,
    STATE(214), 3,
      sym_value_string_text,
      sym_value_string_escaped_char,
      aux_sym_value_string_content_repeat1,
    STATE(545), 3,
      sym_value_string,
      sym_boolean,
      sym_float,
  [6346] = 10,
    ACTIONS(204), 1,
      sym_comment,
    ACTIONS(760), 1,
      anon_sym_variable,
    ACTIONS(764), 1,
      anon_sym_header,
    ACTIONS(766), 1,
      anon_sym_cookie,
    ACTIONS(768), 1,
      anon_sym_xpath,
    ACTIONS(770), 1,
      anon_sym_jsonpath,
    ACTIONS(772), 1,
      anon_sym_regex,
    STATE(96), 1,
      sym_query,
    STATE(148), 6,
      sym_header_query,
      sym_cookie_query,
      sym_xpath_query,
      sym_jsonpath_query,
      sym_regex_query,
      sym_variable_query,
    ACTIONS(762), 7,
      anon_sym_status,
      anon_sym_url,
      anon_sym_body,
      anon_sym_duration,
      anon_sym_bytes,
      anon_sym_sha256,
      anon_sym_md5,
  [6388] = 2,
    ACTIONS(632), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(634), 18,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
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
  [6413] = 2,
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
  [6438] = 2,
    ACTIONS(774), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(776), 18,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
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
  [6463] = 4,
    ACTIONS(778), 1,
      anon_sym_LF,
    ACTIONS(781), 1,
      sym_comment,
    STATE(126), 1,
      aux_sym__comment_or_new_line_repeat1,
    ACTIONS(211), 17,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
      aux_sym_method_token1,
  [6492] = 2,
    ACTIONS(718), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(720), 18,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
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
  [6517] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_LT,
    ACTIONS(784), 1,
      anon_sym_LT_QMARK,
    ACTIONS(786), 1,
      anon_sym_LT_SLASH,
    ACTIONS(788), 1,
      anon_sym_BSLASH,
    ACTIONS(790), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(792), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(132), 1,
      sym_xml_open_tag,
    STATE(224), 1,
      aux_sym_value_string_text_repeat1,
    STATE(544), 1,
      sym_xml_close_tag,
    STATE(164), 3,
      sym_value_string_content,
      sym_template,
      aux_sym_value_string_repeat1,
    STATE(176), 3,
      sym_value_string_text,
      sym_value_string_escaped_char,
      aux_sym_value_string_content_repeat1,
    STATE(137), 4,
      sym_xml_prolog_tag,
      sym_xml_tag,
      sym_value_string,
      aux_sym_xml_tag_repeat1,
  [6564] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_LT,
    ACTIONS(784), 1,
      anon_sym_LT_QMARK,
    ACTIONS(786), 1,
      anon_sym_LT_SLASH,
    ACTIONS(788), 1,
      anon_sym_BSLASH,
    ACTIONS(790), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(792), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(132), 1,
      sym_xml_open_tag,
    STATE(224), 1,
      aux_sym_value_string_text_repeat1,
    STATE(497), 1,
      sym_xml_close_tag,
    STATE(164), 3,
      sym_value_string_content,
      sym_template,
      aux_sym_value_string_repeat1,
    STATE(176), 3,
      sym_value_string_text,
      sym_value_string_escaped_char,
      aux_sym_value_string_content_repeat1,
    STATE(128), 4,
      sym_xml_prolog_tag,
      sym_xml_tag,
      sym_value_string,
      aux_sym_xml_tag_repeat1,
  [6611] = 4,
    ACTIONS(794), 1,
      anon_sym_LF,
    ACTIONS(796), 1,
      sym_comment,
    STATE(126), 1,
      aux_sym__comment_or_new_line_repeat1,
    ACTIONS(220), 17,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
      aux_sym_method_token1,
  [6640] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_LT,
    ACTIONS(784), 1,
      anon_sym_LT_QMARK,
    ACTIONS(788), 1,
      anon_sym_BSLASH,
    ACTIONS(790), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(792), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(798), 1,
      anon_sym_LT_SLASH,
    STATE(132), 1,
      sym_xml_open_tag,
    STATE(224), 1,
      aux_sym_value_string_text_repeat1,
    STATE(256), 1,
      sym_xml_close_tag,
    STATE(164), 3,
      sym_value_string_content,
      sym_template,
      aux_sym_value_string_repeat1,
    STATE(176), 3,
      sym_value_string_text,
      sym_value_string_escaped_char,
      aux_sym_value_string_content_repeat1,
    STATE(137), 4,
      sym_xml_prolog_tag,
      sym_xml_tag,
      sym_value_string,
      aux_sym_xml_tag_repeat1,
  [6687] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_LT,
    ACTIONS(784), 1,
      anon_sym_LT_QMARK,
    ACTIONS(788), 1,
      anon_sym_BSLASH,
    ACTIONS(790), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(792), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(798), 1,
      anon_sym_LT_SLASH,
    STATE(132), 1,
      sym_xml_open_tag,
    STATE(224), 1,
      aux_sym_value_string_text_repeat1,
    STATE(251), 1,
      sym_xml_close_tag,
    STATE(164), 3,
      sym_value_string_content,
      sym_template,
      aux_sym_value_string_repeat1,
    STATE(176), 3,
      sym_value_string_text,
      sym_value_string_escaped_char,
      aux_sym_value_string_content_repeat1,
    STATE(131), 4,
      sym_xml_prolog_tag,
      sym_xml_tag,
      sym_value_string,
      aux_sym_xml_tag_repeat1,
  [6734] = 2,
    ACTIONS(800), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(802), 18,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
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
  [6759] = 2,
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
  [6784] = 2,
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
  [6809] = 2,
    ACTIONS(204), 1,
      sym_comment,
    ACTIONS(804), 18,
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
  [6833] = 12,
    ACTIONS(3), 1,
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
    STATE(132), 1,
      sym_xml_open_tag,
    STATE(224), 1,
      aux_sym_value_string_text_repeat1,
    STATE(164), 3,
      sym_value_string_content,
      sym_template,
      aux_sym_value_string_repeat1,
    STATE(176), 3,
      sym_value_string_text,
      sym_value_string_escaped_char,
      aux_sym_value_string_content_repeat1,
    STATE(137), 4,
      sym_xml_prolog_tag,
      sym_xml_tag,
      sym_value_string,
      aux_sym_xml_tag_repeat1,
  [6877] = 2,
    ACTIONS(537), 1,
      anon_sym_LF,
    ACTIONS(539), 17,
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
  [6900] = 2,
    ACTIONS(533), 1,
      anon_sym_LF,
    ACTIONS(535), 17,
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
  [6923] = 2,
    ACTIONS(529), 1,
      anon_sym_LF,
    ACTIONS(531), 17,
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
  [6946] = 2,
    ACTIONS(571), 1,
      anon_sym_LF,
    ACTIONS(573), 17,
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
  [6969] = 2,
    ACTIONS(545), 1,
      anon_sym_LF,
    ACTIONS(547), 17,
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
  [6992] = 2,
    ACTIONS(549), 1,
      anon_sym_LF,
    ACTIONS(551), 17,
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
  [7015] = 2,
    ACTIONS(505), 1,
      anon_sym_LF,
    ACTIONS(507), 17,
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
  [7038] = 2,
    ACTIONS(592), 1,
      anon_sym_LF,
    ACTIONS(594), 17,
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
  [7061] = 2,
    ACTIONS(588), 1,
      anon_sym_LF,
    ACTIONS(590), 17,
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
  [7084] = 2,
    ACTIONS(517), 1,
      anon_sym_LF,
    ACTIONS(519), 17,
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
  [7107] = 2,
    ACTIONS(596), 1,
      anon_sym_LF,
    ACTIONS(598), 17,
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
  [7130] = 2,
    ACTIONS(567), 1,
      anon_sym_LF,
    ACTIONS(569), 17,
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
  [7153] = 2,
    ACTIONS(521), 1,
      anon_sym_LF,
    ACTIONS(523), 17,
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
  [7176] = 12,
    ACTIONS(204), 1,
      sym_comment,
    ACTIONS(823), 1,
      anon_sym_null,
    ACTIONS(825), 1,
      anon_sym_DQUOTE,
    ACTIONS(827), 1,
      anon_sym_LBRACE,
    ACTIONS(829), 1,
      anon_sym_LBRACK,
    ACTIONS(831), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(835), 1,
      sym_digit,
    STATE(53), 1,
      aux_sym_integer_repeat1,
    STATE(223), 1,
      sym_integer,
    STATE(373), 1,
      sym_json_value,
    ACTIONS(833), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(431), 6,
      sym_json_object,
      sym_json_array,
      sym_json_string,
      sym_json_number,
      sym_template,
      sym_boolean,
  [7219] = 2,
    ACTIONS(541), 1,
      anon_sym_LF,
    ACTIONS(543), 17,
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
  [7242] = 12,
    ACTIONS(204), 1,
      sym_comment,
    ACTIONS(823), 1,
      anon_sym_null,
    ACTIONS(825), 1,
      anon_sym_DQUOTE,
    ACTIONS(827), 1,
      anon_sym_LBRACE,
    ACTIONS(829), 1,
      anon_sym_LBRACK,
    ACTIONS(831), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(835), 1,
      sym_digit,
    STATE(53), 1,
      aux_sym_integer_repeat1,
    STATE(223), 1,
      sym_integer,
    STATE(443), 1,
      sym_json_value,
    ACTIONS(833), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(431), 6,
      sym_json_object,
      sym_json_array,
      sym_json_string,
      sym_json_number,
      sym_template,
      sym_boolean,
  [7285] = 12,
    ACTIONS(204), 1,
      sym_comment,
    ACTIONS(823), 1,
      anon_sym_null,
    ACTIONS(825), 1,
      anon_sym_DQUOTE,
    ACTIONS(827), 1,
      anon_sym_LBRACE,
    ACTIONS(829), 1,
      anon_sym_LBRACK,
    ACTIONS(831), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(837), 1,
      sym_digit,
    STATE(222), 1,
      sym_integer,
    STATE(226), 1,
      aux_sym_integer_repeat1,
    STATE(447), 1,
      sym_json_value,
    ACTIONS(833), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(431), 6,
      sym_json_object,
      sym_json_array,
      sym_json_string,
      sym_json_number,
      sym_template,
      sym_boolean,
  [7328] = 2,
    ACTIONS(525), 1,
      anon_sym_LF,
    ACTIONS(527), 17,
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
  [7351] = 12,
    ACTIONS(204), 1,
      sym_comment,
    ACTIONS(823), 1,
      anon_sym_null,
    ACTIONS(825), 1,
      anon_sym_DQUOTE,
    ACTIONS(827), 1,
      anon_sym_LBRACE,
    ACTIONS(829), 1,
      anon_sym_LBRACK,
    ACTIONS(831), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(835), 1,
      sym_digit,
    STATE(53), 1,
      aux_sym_integer_repeat1,
    STATE(223), 1,
      sym_integer,
    STATE(427), 1,
      sym_json_value,
    ACTIONS(833), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(431), 6,
      sym_json_object,
      sym_json_array,
      sym_json_string,
      sym_json_number,
      sym_template,
      sym_boolean,
  [7394] = 2,
    ACTIONS(513), 1,
      anon_sym_LF,
    ACTIONS(515), 17,
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
  [7417] = 2,
    ACTIONS(509), 1,
      anon_sym_LF,
    ACTIONS(511), 17,
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
  [7440] = 13,
    ACTIONS(15), 1,
      anon_sym_LF,
    ACTIONS(47), 1,
      anon_sym_BSLASH2,
    ACTIONS(63), 1,
      sym_comment,
    ACTIONS(292), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(839), 1,
      sym_key_string_text,
    STATE(35), 1,
      sym__comment_or_new_line,
    STATE(57), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(289), 1,
      sym_multipart_form_data_param,
    STATE(290), 1,
      aux_sym_multipart_form_data_section_repeat1,
    STATE(463), 1,
      sym_key_string,
    STATE(231), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(474), 2,
      sym_key_value,
      sym_file_param,
    STATE(185), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
  [7484] = 10,
    ACTIONS(754), 1,
      anon_sym_BSLASH,
    ACTIONS(756), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(758), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(57), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(281), 1,
      aux_sym_value_string_text_repeat1,
    STATE(326), 1,
      sym_value_string,
    ACTIONS(63), 2,
      anon_sym_LF,
      sym_comment,
    STATE(2), 2,
      sym__comment_or_new_line,
      aux_sym_hurl_file_repeat2,
    STATE(174), 3,
      sym_value_string_content,
      sym_template,
      aux_sym_value_string_repeat1,
    STATE(214), 3,
      sym_value_string_text,
      sym_value_string_escaped_char,
      aux_sym_value_string_content_repeat1,
  [7521] = 12,
    ACTIONS(15), 1,
      anon_sym_LF,
    ACTIONS(47), 1,
      anon_sym_BSLASH2,
    ACTIONS(63), 1,
      sym_comment,
    ACTIONS(292), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(839), 1,
      sym_key_string_text,
    STATE(48), 1,
      sym__comment_or_new_line,
    STATE(57), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(292), 1,
      sym_key_value,
    STATE(293), 1,
      aux_sym_query_string_params_section_repeat1,
    STATE(486), 1,
      sym_key_string,
    STATE(231), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(185), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
  [7561] = 12,
    ACTIONS(15), 1,
      anon_sym_LF,
    ACTIONS(47), 1,
      anon_sym_BSLASH2,
    ACTIONS(63), 1,
      sym_comment,
    ACTIONS(292), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(839), 1,
      sym_key_string_text,
    STATE(45), 1,
      sym__comment_or_new_line,
    STATE(57), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(285), 1,
      sym_key_value,
    STATE(286), 1,
      aux_sym_query_string_params_section_repeat1,
    STATE(486), 1,
      sym_key_string,
    STATE(231), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(185), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
  [7601] = 12,
    ACTIONS(15), 1,
      anon_sym_LF,
    ACTIONS(47), 1,
      anon_sym_BSLASH2,
    ACTIONS(63), 1,
      sym_comment,
    ACTIONS(292), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(839), 1,
      sym_key_string_text,
    STATE(44), 1,
      sym__comment_or_new_line,
    STATE(57), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(288), 1,
      aux_sym_query_string_params_section_repeat1,
    STATE(291), 1,
      sym_key_value,
    STATE(486), 1,
      sym_key_string,
    STATE(231), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(185), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
  [7641] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(843), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(224), 1,
      aux_sym_value_string_text_repeat1,
    STATE(165), 3,
      sym_value_string_content,
      sym_template,
      aux_sym_value_string_repeat1,
    STATE(176), 3,
      sym_value_string_text,
      sym_value_string_escaped_char,
      aux_sym_value_string_content_repeat1,
    ACTIONS(841), 5,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      anon_sym_BSLASH,
      aux_sym_value_string_text_token1,
  [7668] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(847), 1,
      anon_sym_BSLASH,
    ACTIONS(850), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(853), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(224), 1,
      aux_sym_value_string_text_repeat1,
    ACTIONS(845), 3,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
    STATE(165), 3,
      sym_value_string_content,
      sym_template,
      aux_sym_value_string_repeat1,
    STATE(176), 3,
      sym_value_string_text,
      sym_value_string_escaped_char,
      aux_sym_value_string_content_repeat1,
  [7699] = 9,
    ACTIONS(47), 1,
      anon_sym_BSLASH2,
    ACTIONS(204), 1,
      sym_comment,
    ACTIONS(292), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(839), 1,
      sym_key_string_text,
    STATE(463), 1,
      sym_key_string,
    STATE(562), 1,
      sym_multipart_form_data_param,
    STATE(231), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(474), 2,
      sym_key_value,
      sym_file_param,
    STATE(185), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
  [7731] = 9,
    ACTIONS(858), 1,
      anon_sym_BSLASH,
    ACTIONS(860), 1,
      sym_filename_text,
    ACTIONS(862), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(17), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(28), 1,
      sym__comment_or_new_line,
    STATE(393), 1,
      sym_filename,
    ACTIONS(856), 2,
      anon_sym_LF,
      sym_comment,
    STATE(257), 2,
      sym_filename_escaped_char,
      aux_sym_filename_content_repeat1,
    STATE(199), 3,
      sym_filename_content,
      sym_template,
      aux_sym_filename_repeat1,
  [7763] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(754), 1,
      anon_sym_BSLASH,
    ACTIONS(756), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(758), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(281), 1,
      aux_sym_value_string_text_repeat1,
    STATE(347), 1,
      sym_value_string,
    STATE(174), 3,
      sym_value_string_content,
      sym_template,
      aux_sym_value_string_repeat1,
    STATE(214), 3,
      sym_value_string_text,
      sym_value_string_escaped_char,
      aux_sym_value_string_content_repeat1,
  [7792] = 7,
    ACTIONS(864), 1,
      anon_sym_BSLASH,
    ACTIONS(867), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(870), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(281), 1,
      aux_sym_value_string_text_repeat1,
    ACTIONS(845), 2,
      anon_sym_LF,
      sym_comment,
    STATE(169), 3,
      sym_value_string_content,
      sym_template,
      aux_sym_value_string_repeat1,
    STATE(214), 3,
      sym_value_string_text,
      sym_value_string_escaped_char,
      aux_sym_value_string_content_repeat1,
  [7819] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(873), 1,
      anon_sym_LF,
    ACTIONS(875), 1,
      anon_sym_BSLASH,
    ACTIONS(877), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(879), 1,
      aux_sym__multiline_string_text_token1,
    ACTIONS(881), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(175), 3,
      sym_multiline_string_content,
      sym_template,
      aux_sym_multiline_string_repeat1,
    STATE(206), 3,
      sym__multiline_string_text,
      sym_multiline_string_escaped_char,
      aux_sym_multiline_string_content_repeat1,
  [7848] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(875), 1,
      anon_sym_BSLASH,
    ACTIONS(879), 1,
      aux_sym__multiline_string_text_token1,
    ACTIONS(881), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(883), 1,
      anon_sym_LF,
    ACTIONS(885), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(175), 3,
      sym_multiline_string_content,
      sym_template,
      aux_sym_multiline_string_repeat1,
    STATE(206), 3,
      sym__multiline_string_text,
      sym_multiline_string_escaped_char,
      aux_sym_multiline_string_content_repeat1,
  [7877] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(873), 1,
      anon_sym_LF,
    ACTIONS(875), 1,
      anon_sym_BSLASH,
    ACTIONS(877), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(879), 1,
      aux_sym__multiline_string_text_token1,
    ACTIONS(881), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(171), 3,
      sym_multiline_string_content,
      sym_template,
      aux_sym_multiline_string_repeat1,
    STATE(206), 3,
      sym__multiline_string_text,
      sym_multiline_string_escaped_char,
      aux_sym_multiline_string_content_repeat1,
  [7906] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(875), 1,
      anon_sym_BSLASH,
    ACTIONS(879), 1,
      aux_sym__multiline_string_text_token1,
    ACTIONS(881), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(887), 1,
      anon_sym_LF,
    ACTIONS(889), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(170), 3,
      sym_multiline_string_content,
      sym_template,
      aux_sym_multiline_string_repeat1,
    STATE(206), 3,
      sym__multiline_string_text,
      sym_multiline_string_escaped_char,
      aux_sym_multiline_string_content_repeat1,
  [7935] = 7,
    ACTIONS(754), 1,
      anon_sym_BSLASH,
    ACTIONS(756), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(758), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(281), 1,
      aux_sym_value_string_text_repeat1,
    ACTIONS(841), 2,
      anon_sym_LF,
      sym_comment,
    STATE(169), 3,
      sym_value_string_content,
      sym_template,
      aux_sym_value_string_repeat1,
    STATE(214), 3,
      sym_value_string_text,
      sym_value_string_escaped_char,
      aux_sym_value_string_content_repeat1,
  [7962] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(891), 1,
      anon_sym_LF,
    ACTIONS(894), 1,
      anon_sym_BSLASH,
    ACTIONS(897), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(899), 1,
      aux_sym__multiline_string_text_token1,
    ACTIONS(902), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(175), 3,
      sym_multiline_string_content,
      sym_template,
      aux_sym_multiline_string_repeat1,
    STATE(206), 3,
      sym__multiline_string_text,
      sym_multiline_string_escaped_char,
      aux_sym_multiline_string_content_repeat1,
  [7991] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(788), 1,
      anon_sym_BSLASH,
    ACTIONS(790), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(907), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(224), 1,
      aux_sym_value_string_text_repeat1,
    ACTIONS(905), 3,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
    STATE(183), 3,
      sym_value_string_text,
      sym_value_string_escaped_char,
      aux_sym_value_string_content_repeat1,
  [8017] = 8,
    ACTIONS(204), 1,
      sym_comment,
    ACTIONS(909), 1,
      anon_sym_COLON,
    ACTIONS(911), 1,
      anon_sym_COLON2,
    ACTIONS(913), 1,
      sym_key_string_text,
    ACTIONS(916), 1,
      anon_sym_BSLASH2,
    ACTIONS(919), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(231), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(177), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
  [8045] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(922), 1,
      anon_sym_BSLASH,
    ACTIONS(925), 1,
      anon_sym_BQUOTE,
    ACTIONS(927), 1,
      aux_sym_oneline_string_text_token1,
    ACTIONS(930), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(178), 3,
      sym_oneline_string_content,
      sym_template,
      aux_sym_oneline_string_repeat1,
    STATE(227), 3,
      sym_oneline_string_text,
      sym_oneline_string_escaped_char,
      aux_sym_oneline_string_content_repeat1,
  [8071] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(933), 1,
      anon_sym_BSLASH,
    ACTIONS(935), 1,
      anon_sym_BQUOTE,
    ACTIONS(937), 1,
      aux_sym_oneline_string_text_token1,
    ACTIONS(939), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(188), 3,
      sym_oneline_string_content,
      sym_template,
      aux_sym_oneline_string_repeat1,
    STATE(227), 3,
      sym_oneline_string_text,
      sym_oneline_string_escaped_char,
      aux_sym_oneline_string_content_repeat1,
  [8097] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(941), 1,
      anon_sym_DQUOTE,
    ACTIONS(943), 1,
      sym_quoted_string_text,
    ACTIONS(945), 1,
      anon_sym_BSLASH,
    ACTIONS(947), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(181), 3,
      sym_quoted_string_content,
      sym_template,
      aux_sym_quoted_string_repeat1,
    STATE(229), 3,
      sym_invalid_quoted_string_escaped_char,
      sym_quoted_string_escaped_char,
      aux_sym_quoted_string_content_repeat1,
  [8123] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(943), 1,
      sym_quoted_string_text,
    ACTIONS(945), 1,
      anon_sym_BSLASH,
    ACTIONS(947), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(949), 1,
      anon_sym_DQUOTE,
    STATE(191), 3,
      sym_quoted_string_content,
      sym_template,
      aux_sym_quoted_string_repeat1,
    STATE(229), 3,
      sym_invalid_quoted_string_escaped_char,
      sym_quoted_string_escaped_char,
      aux_sym_quoted_string_content_repeat1,
  [8149] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(943), 1,
      sym_quoted_string_text,
    ACTIONS(945), 1,
      anon_sym_BSLASH,
    ACTIONS(947), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(951), 1,
      anon_sym_DQUOTE,
    STATE(191), 3,
      sym_quoted_string_content,
      sym_template,
      aux_sym_quoted_string_repeat1,
    STATE(229), 3,
      sym_invalid_quoted_string_escaped_char,
      sym_quoted_string_escaped_char,
      aux_sym_quoted_string_content_repeat1,
  [8175] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(955), 1,
      anon_sym_BSLASH,
    ACTIONS(958), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(961), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(224), 1,
      aux_sym_value_string_text_repeat1,
    ACTIONS(953), 3,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
    STATE(183), 3,
      sym_value_string_text,
      sym_value_string_escaped_char,
      aux_sym_value_string_content_repeat1,
  [8201] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(943), 1,
      sym_quoted_string_text,
    ACTIONS(945), 1,
      anon_sym_BSLASH,
    ACTIONS(947), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(963), 1,
      anon_sym_DQUOTE,
    STATE(182), 3,
      sym_quoted_string_content,
      sym_template,
      aux_sym_quoted_string_repeat1,
    STATE(229), 3,
      sym_invalid_quoted_string_escaped_char,
      sym_quoted_string_escaped_char,
      aux_sym_quoted_string_content_repeat1,
  [8227] = 8,
    ACTIONS(47), 1,
      anon_sym_BSLASH2,
    ACTIONS(204), 1,
      sym_comment,
    ACTIONS(292), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(839), 1,
      sym_key_string_text,
    ACTIONS(965), 1,
      anon_sym_COLON,
    ACTIONS(967), 1,
      anon_sym_COLON2,
    STATE(231), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(177), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
  [8255] = 8,
    ACTIONS(47), 1,
      anon_sym_BSLASH2,
    ACTIONS(204), 1,
      sym_comment,
    ACTIONS(292), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(839), 1,
      sym_key_string_text,
    STATE(392), 1,
      sym_key_value,
    STATE(486), 1,
      sym_key_string,
    STATE(231), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(185), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
  [8283] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(969), 1,
      anon_sym_SEMI,
    ACTIONS(971), 1,
      anon_sym_BSLASH,
    ACTIONS(973), 1,
      sym_filename_text,
    ACTIONS(975), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(534), 1,
      sym_filename,
    STATE(237), 2,
      sym_filename_escaped_char,
      aux_sym_filename_content_repeat1,
    STATE(193), 3,
      sym_filename_content,
      sym_template,
      aux_sym_filename_repeat1,
  [8311] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(933), 1,
      anon_sym_BSLASH,
    ACTIONS(937), 1,
      aux_sym_oneline_string_text_token1,
    ACTIONS(939), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(977), 1,
      anon_sym_BQUOTE,
    STATE(178), 3,
      sym_oneline_string_content,
      sym_template,
      aux_sym_oneline_string_repeat1,
    STATE(227), 3,
      sym_oneline_string_text,
      sym_oneline_string_escaped_char,
      aux_sym_oneline_string_content_repeat1,
  [8337] = 8,
    ACTIONS(47), 1,
      anon_sym_BSLASH2,
    ACTIONS(204), 1,
      sym_comment,
    ACTIONS(292), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(839), 1,
      sym_key_string_text,
    STATE(486), 1,
      sym_key_string,
    STATE(558), 1,
      sym_key_value,
    STATE(231), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(185), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
  [8365] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(971), 1,
      anon_sym_BSLASH,
    ACTIONS(973), 1,
      sym_filename_text,
    ACTIONS(975), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(979), 1,
      anon_sym_SEMI,
    STATE(548), 1,
      sym_filename,
    STATE(237), 2,
      sym_filename_escaped_char,
      aux_sym_filename_content_repeat1,
    STATE(193), 3,
      sym_filename_content,
      sym_template,
      aux_sym_filename_repeat1,
  [8393] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(981), 1,
      anon_sym_DQUOTE,
    ACTIONS(983), 1,
      sym_quoted_string_text,
    ACTIONS(986), 1,
      anon_sym_BSLASH,
    ACTIONS(989), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(191), 3,
      sym_quoted_string_content,
      sym_template,
      aux_sym_quoted_string_repeat1,
    STATE(229), 3,
      sym_invalid_quoted_string_escaped_char,
      sym_quoted_string_escaped_char,
      aux_sym_quoted_string_content_repeat1,
  [8419] = 7,
    ACTIONS(204), 1,
      sym_comment,
    ACTIONS(909), 1,
      anon_sym_COLON2,
    ACTIONS(992), 1,
      sym_key_string_text,
    ACTIONS(995), 1,
      anon_sym_BSLASH2,
    ACTIONS(998), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(247), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(192), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
  [8444] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(971), 1,
      anon_sym_BSLASH,
    ACTIONS(973), 1,
      sym_filename_text,
    ACTIONS(975), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1001), 1,
      anon_sym_SEMI,
    STATE(237), 2,
      sym_filename_escaped_char,
      aux_sym_filename_content_repeat1,
    STATE(196), 3,
      sym_filename_content,
      sym_template,
      aux_sym_filename_repeat1,
  [8469] = 7,
    ACTIONS(204), 1,
      sym_comment,
    ACTIONS(559), 1,
      anon_sym_BSLASH2,
    ACTIONS(561), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(965), 1,
      anon_sym_COLON2,
    ACTIONS(1003), 1,
      sym_key_string_text,
    STATE(247), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(192), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
  [8494] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1007), 1,
      aux_sym_invalid_quoted_string_escaped_char_token1,
    ACTIONS(1009), 1,
      anon_sym_u,
    ACTIONS(1005), 7,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
      anon_sym_b,
      anon_sym_f,
      anon_sym_n,
      anon_sym_r,
      anon_sym_t,
  [8513] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1011), 1,
      anon_sym_SEMI,
    ACTIONS(1013), 1,
      anon_sym_BSLASH,
    ACTIONS(1016), 1,
      sym_filename_text,
    ACTIONS(1019), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(237), 2,
      sym_filename_escaped_char,
      aux_sym_filename_content_repeat1,
    STATE(196), 3,
      sym_filename_content,
      sym_template,
      aux_sym_filename_repeat1,
  [8538] = 7,
    ACTIONS(909), 1,
      anon_sym_LF,
    ACTIONS(911), 1,
      sym_comment,
    ACTIONS(1022), 1,
      sym_key_string_text,
    ACTIONS(1025), 1,
      anon_sym_BSLASH2,
    ACTIONS(1028), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(232), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(197), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
  [8563] = 6,
    ACTIONS(1031), 1,
      anon_sym_BSLASH,
    ACTIONS(1034), 1,
      sym_filename_text,
    ACTIONS(1037), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1011), 2,
      anon_sym_LF,
      sym_comment,
    STATE(257), 2,
      sym_filename_escaped_char,
      aux_sym_filename_content_repeat1,
    STATE(198), 3,
      sym_filename_content,
      sym_template,
      aux_sym_filename_repeat1,
  [8586] = 6,
    ACTIONS(858), 1,
      anon_sym_BSLASH,
    ACTIONS(860), 1,
      sym_filename_text,
    ACTIONS(862), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1001), 2,
      anon_sym_LF,
      sym_comment,
    STATE(257), 2,
      sym_filename_escaped_char,
      aux_sym_filename_content_repeat1,
    STATE(198), 3,
      sym_filename_content,
      sym_template,
      aux_sym_filename_repeat1,
  [8609] = 7,
    ACTIONS(57), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(748), 1,
      anon_sym_BSLASH2,
    ACTIONS(965), 1,
      anon_sym_LF,
    ACTIONS(967), 1,
      sym_comment,
    ACTIONS(1040), 1,
      sym_key_string_text,
    STATE(232), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(197), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
  [8634] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1042), 1,
      anon_sym_DQUOTE,
    ACTIONS(1044), 1,
      anon_sym_BSLASH,
    ACTIONS(1046), 1,
      sym_json_string_text,
    ACTIONS(1048), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(320), 1,
      sym_json_string_escaped_char,
    STATE(208), 3,
      sym_json_string_content,
      sym_template,
      aux_sym_json_string_repeat1,
  [8658] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1050), 1,
      anon_sym_LF,
    STATE(513), 1,
      sym_multiline_string_type,
    ACTIONS(1052), 6,
      anon_sym_base64,
      anon_sym_hex,
      anon_sym_json,
      anon_sym_xml,
      anon_sym_graphql,
      aux_sym_multiline_string_type_token1,
  [8676] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1044), 1,
      anon_sym_BSLASH,
    ACTIONS(1046), 1,
      sym_json_string_text,
    ACTIONS(1048), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1054), 1,
      anon_sym_DQUOTE,
    STATE(320), 1,
      sym_json_string_escaped_char,
    STATE(201), 3,
      sym_json_string_content,
      sym_template,
      aux_sym_json_string_repeat1,
  [8700] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1060), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(210), 1,
      aux_sym__multiline_string_text_repeat1,
    ACTIONS(1058), 2,
      anon_sym_BQUOTE,
      anon_sym_LBRACE,
    ACTIONS(1056), 4,
      anon_sym_LF,
      anon_sym_BSLASH,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      aux_sym__multiline_string_text_token1,
  [8720] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1067), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(205), 1,
      aux_sym__multiline_string_text_repeat1,
    ACTIONS(1064), 2,
      anon_sym_BQUOTE,
      anon_sym_LBRACE,
    ACTIONS(1062), 4,
      anon_sym_LF,
      anon_sym_BSLASH,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      aux_sym__multiline_string_text_token1,
  [8740] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1071), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(217), 3,
      sym__multiline_string_text,
      sym_multiline_string_escaped_char,
      aux_sym_multiline_string_content_repeat1,
    ACTIONS(1069), 4,
      anon_sym_LF,
      anon_sym_BSLASH,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      aux_sym__multiline_string_text_token1,
  [8758] = 3,
    ACTIONS(204), 1,
      sym_comment,
    ACTIONS(1075), 1,
      anon_sym_u,
    ACTIONS(1073), 7,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
      anon_sym_b,
      anon_sym_f,
      anon_sym_n,
      anon_sym_r,
      anon_sym_t,
  [8774] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1077), 1,
      anon_sym_DQUOTE,
    ACTIONS(1079), 1,
      anon_sym_BSLASH,
    ACTIONS(1082), 1,
      sym_json_string_text,
    ACTIONS(1085), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(320), 1,
      sym_json_string_escaped_char,
    STATE(208), 3,
      sym_json_string_content,
      sym_template,
      aux_sym_json_string_repeat1,
  [8798] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1090), 1,
      anon_sym_u,
    ACTIONS(1092), 1,
      anon_sym_POUND,
    ACTIONS(1088), 6,
      anon_sym_BSLASH,
      anon_sym_b,
      anon_sym_f,
      anon_sym_n,
      anon_sym_r,
      anon_sym_t,
  [8816] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1098), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(205), 1,
      aux_sym__multiline_string_text_repeat1,
    ACTIONS(1096), 2,
      anon_sym_BQUOTE,
      anon_sym_LBRACE,
    ACTIONS(1094), 4,
      anon_sym_LF,
      anon_sym_BSLASH,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      aux_sym__multiline_string_text_token1,
  [8836] = 6,
    ACTIONS(961), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1100), 1,
      anon_sym_BSLASH,
    ACTIONS(1103), 1,
      aux_sym_value_string_text_token1,
    STATE(281), 1,
      aux_sym_value_string_text_repeat1,
    ACTIONS(953), 2,
      anon_sym_LF,
      sym_comment,
    STATE(211), 3,
      sym_value_string_text,
      sym_value_string_escaped_char,
      aux_sym_value_string_content_repeat1,
  [8858] = 3,
    ACTIONS(204), 1,
      sym_comment,
    ACTIONS(1108), 1,
      anon_sym_u,
    ACTIONS(1106), 7,
      anon_sym_BSLASH,
      anon_sym_b,
      anon_sym_f,
      anon_sym_n,
      anon_sym_r,
      anon_sym_t,
      anon_sym_BQUOTE,
  [8874] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1112), 1,
      anon_sym_u,
    ACTIONS(1114), 1,
      anon_sym_POUND,
    ACTIONS(1110), 6,
      anon_sym_BSLASH,
      anon_sym_b,
      anon_sym_f,
      anon_sym_n,
      anon_sym_r,
      anon_sym_t,
  [8892] = 6,
    ACTIONS(754), 1,
      anon_sym_BSLASH,
    ACTIONS(756), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(907), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(281), 1,
      aux_sym_value_string_text_repeat1,
    ACTIONS(905), 2,
      anon_sym_LF,
      sym_comment,
    STATE(211), 3,
      sym_value_string_text,
      sym_value_string_escaped_char,
      aux_sym_value_string_content_repeat1,
  [8914] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1044), 1,
      anon_sym_BSLASH,
    ACTIONS(1046), 1,
      sym_json_string_text,
    ACTIONS(1048), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1116), 1,
      anon_sym_DQUOTE,
    STATE(320), 1,
      sym_json_string_escaped_char,
    STATE(216), 3,
      sym_json_string_content,
      sym_template,
      aux_sym_json_string_repeat1,
  [8938] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1044), 1,
      anon_sym_BSLASH,
    ACTIONS(1046), 1,
      sym_json_string_text,
    ACTIONS(1048), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1118), 1,
      anon_sym_DQUOTE,
    STATE(320), 1,
      sym_json_string_escaped_char,
    STATE(208), 3,
      sym_json_string_content,
      sym_template,
      aux_sym_json_string_repeat1,
  [8962] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1120), 1,
      anon_sym_LF,
    ACTIONS(1123), 1,
      anon_sym_BSLASH,
    ACTIONS(1126), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(1128), 1,
      aux_sym__multiline_string_text_token1,
    ACTIONS(1131), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(217), 3,
      sym__multiline_string_text,
      sym_multiline_string_escaped_char,
      aux_sym_multiline_string_content_repeat1,
  [8986] = 8,
    ACTIONS(204), 1,
      sym_comment,
    ACTIONS(825), 1,
      anon_sym_DQUOTE,
    ACTIONS(1133), 1,
      anon_sym_RBRACE,
    ACTIONS(1135), 1,
      anon_sym_COMMA,
    STATE(374), 1,
      aux_sym_json_object_repeat1,
    STATE(376), 1,
      sym_json_key_value,
    STATE(505), 1,
      sym_json_string,
    STATE(506), 1,
      sym_json_key_string,
  [9011] = 8,
    ACTIONS(204), 1,
      sym_comment,
    ACTIONS(825), 1,
      anon_sym_DQUOTE,
    ACTIONS(1135), 1,
      anon_sym_COMMA,
    ACTIONS(1137), 1,
      anon_sym_RBRACE,
    STATE(415), 1,
      sym_json_key_value,
    STATE(426), 1,
      aux_sym_json_object_repeat1,
    STATE(505), 1,
      sym_json_string,
    STATE(506), 1,
      sym_json_key_string,
  [9036] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1141), 1,
      sym_quoted_string_text,
    ACTIONS(1144), 1,
      anon_sym_BSLASH,
    ACTIONS(1139), 2,
      anon_sym_DQUOTE,
      anon_sym_LBRACE_LBRACE,
    STATE(220), 3,
      sym_invalid_quoted_string_escaped_char,
      sym_quoted_string_escaped_char,
      aux_sym_quoted_string_content_repeat1,
  [9055] = 4,
    ACTIONS(204), 1,
      sym_comment,
    ACTIONS(1147), 1,
      sym_digit,
    STATE(221), 1,
      aux_sym_integer_repeat1,
    ACTIONS(458), 5,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_e,
      anon_sym_E,
  [9072] = 6,
    ACTIONS(204), 1,
      sym_comment,
    ACTIONS(1152), 1,
      anon_sym_DOT,
    STATE(265), 1,
      sym_fraction,
    STATE(382), 1,
      sym_exponent,
    ACTIONS(1150), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
    ACTIONS(1154), 2,
      anon_sym_e,
      anon_sym_E,
  [9093] = 6,
    ACTIONS(204), 1,
      sym_comment,
    ACTIONS(1156), 1,
      anon_sym_DOT,
    STATE(267), 1,
      sym_fraction,
    STATE(382), 1,
      sym_exponent,
    ACTIONS(1150), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(1158), 2,
      anon_sym_e,
      anon_sym_E,
  [9114] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1162), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(1164), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(225), 1,
      aux_sym_value_string_text_repeat1,
    ACTIONS(1160), 4,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      anon_sym_BSLASH,
  [9133] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1168), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(1171), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(225), 1,
      aux_sym_value_string_text_repeat1,
    ACTIONS(1166), 4,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      anon_sym_BSLASH,
  [9152] = 4,
    ACTIONS(204), 1,
      sym_comment,
    ACTIONS(1173), 1,
      sym_digit,
    STATE(221), 1,
      aux_sym_integer_repeat1,
    ACTIONS(430), 5,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_e,
      anon_sym_E,
  [9169] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1177), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1175), 3,
      anon_sym_BSLASH,
      anon_sym_BQUOTE,
      aux_sym_oneline_string_text_token1,
    STATE(230), 3,
      sym_oneline_string_text,
      sym_oneline_string_escaped_char,
      aux_sym_oneline_string_content_repeat1,
  [9186] = 6,
    ACTIONS(204), 1,
      sym_comment,
    ACTIONS(1181), 1,
      anon_sym_COLON2,
    ACTIONS(1183), 1,
      sym_key_string_text,
    ACTIONS(1186), 1,
      anon_sym_BSLASH2,
    ACTIONS(1179), 2,
      anon_sym_COLON,
      anon_sym_LBRACE_LBRACE,
    STATE(228), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
  [9207] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(945), 1,
      anon_sym_BSLASH,
    ACTIONS(1191), 1,
      sym_quoted_string_text,
    ACTIONS(1189), 2,
      anon_sym_DQUOTE,
      anon_sym_LBRACE_LBRACE,
    STATE(220), 3,
      sym_invalid_quoted_string_escaped_char,
      sym_quoted_string_escaped_char,
      aux_sym_quoted_string_content_repeat1,
  [9226] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1193), 1,
      anon_sym_BSLASH,
    ACTIONS(1196), 1,
      anon_sym_BQUOTE,
    ACTIONS(1198), 1,
      aux_sym_oneline_string_text_token1,
    ACTIONS(1201), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(230), 3,
      sym_oneline_string_text,
      sym_oneline_string_escaped_char,
      aux_sym_oneline_string_content_repeat1,
  [9247] = 4,
    ACTIONS(204), 1,
      sym_comment,
    ACTIONS(1205), 1,
      anon_sym_COLON2,
    STATE(228), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    ACTIONS(1203), 4,
      anon_sym_COLON,
      sym_key_string_text,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
  [9264] = 3,
    ACTIONS(1205), 1,
      sym_comment,
    STATE(252), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    ACTIONS(1203), 4,
      anon_sym_LF,
      sym_key_string_text,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
  [9278] = 4,
    ACTIONS(204), 1,
      sym_comment,
    ACTIONS(434), 1,
      sym_digit,
    STATE(55), 1,
      aux_sym_integer_repeat1,
    ACTIONS(1207), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_e,
      anon_sym_E,
  [9294] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1209), 1,
      anon_sym_BSLASH,
    ACTIONS(1211), 1,
      anon_sym_SLASH,
    ACTIONS(1213), 1,
      sym_regex_text,
    STATE(556), 1,
      sym_regex_content,
    STATE(269), 2,
      sym_regex_escaped_char,
      aux_sym_regex_content_repeat1,
  [9314] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1217), 1,
      anon_sym_BSLASH,
    ACTIONS(1220), 1,
      sym_filename_text,
    ACTIONS(1215), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE_LBRACE,
    STATE(235), 2,
      sym_filename_escaped_char,
      aux_sym_filename_content_repeat1,
  [9332] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1225), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1223), 5,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      anon_sym_BSLASH,
      aux_sym_value_string_text_token1,
  [9346] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(235), 2,
      sym_filename_escaped_char,
      aux_sym_filename_content_repeat1,
    ACTIONS(1227), 4,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      sym_filename_text,
      anon_sym_LBRACE_LBRACE,
  [9360] = 5,
    ACTIONS(204), 1,
      sym_comment,
    ACTIONS(732), 1,
      anon_sym_base64_COMMA,
    ACTIONS(734), 1,
      anon_sym_hex_COMMA,
    ACTIONS(736), 1,
      anon_sym_DQUOTE,
    STATE(520), 3,
      sym_oneline_base64,
      sym_oneline_hex,
      sym_quoted_string,
  [9378] = 6,
    ACTIONS(204), 1,
      sym_comment,
    ACTIONS(736), 1,
      anon_sym_DQUOTE,
    ACTIONS(742), 1,
      sym_digit,
    STATE(111), 1,
      aux_sym_integer_repeat1,
    STATE(404), 1,
      sym_integer,
    STATE(521), 2,
      sym_quoted_string,
      sym_float,
  [9398] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1231), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1229), 5,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      anon_sym_BSLASH,
      aux_sym_value_string_text_token1,
  [9412] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1235), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1233), 5,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      anon_sym_BSLASH,
      aux_sym_value_string_text_token1,
  [9426] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1239), 1,
      anon_sym_u,
    ACTIONS(1241), 1,
      anon_sym_POUND,
    ACTIONS(1237), 4,
      anon_sym_BSLASH,
      anon_sym_b,
      anon_sym_f,
      anon_sym_BQUOTE,
  [9442] = 6,
    ACTIONS(204), 1,
      sym_comment,
    ACTIONS(736), 1,
      anon_sym_DQUOTE,
    ACTIONS(742), 1,
      sym_digit,
    STATE(111), 1,
      aux_sym_integer_repeat1,
    STATE(402), 1,
      sym_integer,
    STATE(522), 2,
      sym_quoted_string,
      sym_float,
  [9462] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1245), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1243), 5,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      anon_sym_BSLASH,
      aux_sym_value_string_text_token1,
  [9476] = 6,
    ACTIONS(204), 1,
      sym_comment,
    ACTIONS(736), 1,
      anon_sym_DQUOTE,
    ACTIONS(742), 1,
      sym_digit,
    STATE(111), 1,
      aux_sym_integer_repeat1,
    STATE(400), 1,
      sym_integer,
    STATE(524), 2,
      sym_quoted_string,
      sym_float,
  [9496] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1249), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1247), 5,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      anon_sym_BSLASH,
      aux_sym_value_string_text_token1,
  [9510] = 3,
    ACTIONS(204), 1,
      sym_comment,
    STATE(253), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    ACTIONS(1203), 4,
      anon_sym_COLON2,
      sym_key_string_text,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
  [9524] = 5,
    ACTIONS(204), 1,
      sym_comment,
    ACTIONS(732), 1,
      anon_sym_base64_COMMA,
    ACTIONS(734), 1,
      anon_sym_hex_COMMA,
    ACTIONS(736), 1,
      anon_sym_DQUOTE,
    STATE(518), 3,
      sym_oneline_base64,
      sym_oneline_hex,
      sym_quoted_string,
  [9542] = 6,
    ACTIONS(204), 1,
      sym_comment,
    ACTIONS(736), 1,
      anon_sym_DQUOTE,
    ACTIONS(742), 1,
      sym_digit,
    STATE(111), 1,
      aux_sym_integer_repeat1,
    STATE(398), 1,
      sym_integer,
    STATE(528), 2,
      sym_quoted_string,
      sym_float,
  [9562] = 4,
    ACTIONS(204), 1,
      sym_comment,
    ACTIONS(1173), 1,
      sym_digit,
    STATE(221), 1,
      aux_sym_integer_repeat1,
    ACTIONS(1207), 4,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_e,
      anon_sym_E,
  [9578] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1253), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1251), 5,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      anon_sym_BSLASH,
      aux_sym_value_string_text_token1,
  [9592] = 5,
    ACTIONS(1181), 1,
      sym_comment,
    ACTIONS(1255), 1,
      sym_key_string_text,
    ACTIONS(1258), 1,
      anon_sym_BSLASH2,
    ACTIONS(1179), 2,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    STATE(252), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
  [9610] = 5,
    ACTIONS(204), 1,
      sym_comment,
    ACTIONS(1261), 1,
      sym_key_string_text,
    ACTIONS(1264), 1,
      anon_sym_BSLASH2,
    ACTIONS(1179), 2,
      anon_sym_COLON2,
      anon_sym_LBRACE_LBRACE,
    STATE(253), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
  [9628] = 4,
    ACTIONS(1267), 1,
      anon_sym_BSLASH,
    ACTIONS(1270), 1,
      sym_filename_text,
    STATE(254), 2,
      sym_filename_escaped_char,
      aux_sym_filename_content_repeat1,
    ACTIONS(1215), 3,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
      sym_comment,
  [9644] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1275), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1273), 5,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      anon_sym_BSLASH,
      aux_sym_value_string_text_token1,
  [9658] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1279), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1277), 5,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      anon_sym_BSLASH,
      aux_sym_value_string_text_token1,
  [9672] = 2,
    STATE(254), 2,
      sym_filename_escaped_char,
      aux_sym_filename_content_repeat1,
    ACTIONS(1227), 5,
      anon_sym_LF,
      anon_sym_BSLASH,
      sym_filename_text,
      anon_sym_LBRACE_LBRACE,
      sym_comment,
  [9684] = 6,
    ACTIONS(1150), 1,
      anon_sym_LF,
    ACTIONS(1281), 1,
      anon_sym_DOT,
    ACTIONS(1285), 1,
      sym_comment,
    STATE(300), 1,
      sym_fraction,
    STATE(492), 1,
      sym_exponent,
    ACTIONS(1283), 2,
      anon_sym_e,
      anon_sym_E,
  [9704] = 6,
    ACTIONS(35), 1,
      anon_sym_LT,
    ACTIONS(204), 1,
      sym_comment,
    ACTIONS(1287), 1,
      anon_sym_LT_QMARK,
    STATE(129), 1,
      sym_xml_open_tag,
    STATE(491), 1,
      sym_xml_tag,
    STATE(299), 2,
      sym_xml_prolog_tag,
      aux_sym_xml_repeat1,
  [9724] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1209), 1,
      anon_sym_BSLASH,
    ACTIONS(1213), 1,
      sym_regex_text,
    ACTIONS(1289), 1,
      anon_sym_SLASH,
    STATE(557), 1,
      sym_regex_content,
    STATE(269), 2,
      sym_regex_escaped_char,
      aux_sym_regex_content_repeat1,
  [9744] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1293), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1291), 5,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      anon_sym_BSLASH,
      aux_sym_value_string_text_token1,
  [9758] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1297), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1295), 4,
      anon_sym_LF,
      anon_sym_BSLASH,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      aux_sym__multiline_string_text_token1,
  [9771] = 3,
    ACTIONS(1299), 1,
      anon_sym_LF,
    ACTIONS(1303), 1,
      sym_comment,
    ACTIONS(1301), 4,
      anon_sym_COLON,
      sym_key_string_text,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
  [9784] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1307), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(1309), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1305), 3,
      anon_sym_LF,
      anon_sym_BSLASH,
      aux_sym__multiline_string_text_token1,
  [9799] = 4,
    ACTIONS(204), 1,
      sym_comment,
    STATE(389), 1,
      sym_exponent,
    ACTIONS(1154), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(1311), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [9814] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(885), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(1309), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1305), 3,
      anon_sym_LF,
      anon_sym_BSLASH,
      aux_sym__multiline_string_text_token1,
  [9829] = 4,
    ACTIONS(204), 1,
      sym_comment,
    STATE(389), 1,
      sym_exponent,
    ACTIONS(1158), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(1311), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [9844] = 4,
    ACTIONS(1171), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1313), 1,
      aux_sym_value_string_text_token1,
    STATE(268), 1,
      aux_sym_value_string_text_repeat1,
    ACTIONS(1166), 3,
      anon_sym_LF,
      anon_sym_BSLASH,
      sym_comment,
  [9859] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1209), 1,
      anon_sym_BSLASH,
    ACTIONS(1316), 1,
      anon_sym_SLASH,
    ACTIONS(1318), 1,
      sym_regex_text,
    STATE(275), 2,
      sym_regex_escaped_char,
      aux_sym_regex_content_repeat1,
  [9876] = 4,
    ACTIONS(707), 1,
      sym_digit,
    ACTIONS(1207), 1,
      anon_sym_LF,
    STATE(112), 1,
      aux_sym_integer_repeat1,
    ACTIONS(1320), 3,
      anon_sym_e,
      anon_sym_E,
      sym_comment,
  [9891] = 3,
    ACTIONS(204), 1,
      sym_comment,
    ACTIONS(1324), 1,
      anon_sym_COLON2,
    ACTIONS(1322), 4,
      anon_sym_COLON,
      sym_key_string_text,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
  [9904] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1249), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1247), 4,
      anon_sym_LF,
      anon_sym_BSLASH,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      aux_sym__multiline_string_text_token1,
  [9917] = 4,
    ACTIONS(1326), 1,
      anon_sym_LF,
    ACTIONS(1328), 1,
      sym_comment,
    STATE(274), 1,
      aux_sym__comment_or_new_line_repeat1,
    ACTIONS(216), 3,
      sym_key_string_text,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
  [9932] = 4,
    ACTIONS(1330), 1,
      anon_sym_LF,
    ACTIONS(1333), 1,
      sym_comment,
    STATE(274), 1,
      aux_sym__comment_or_new_line_repeat1,
    ACTIONS(206), 3,
      sym_key_string_text,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
  [9947] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1336), 1,
      anon_sym_BSLASH,
    ACTIONS(1339), 1,
      anon_sym_SLASH,
    ACTIONS(1341), 1,
      sym_regex_text,
    STATE(275), 2,
      sym_regex_escaped_char,
      aux_sym_regex_content_repeat1,
  [9964] = 2,
    ACTIONS(1229), 1,
      sym_comment,
    ACTIONS(1231), 5,
      anon_sym_LF,
      anon_sym_COLON,
      sym_key_string_text,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
  [9975] = 3,
    ACTIONS(204), 1,
      sym_comment,
    ACTIONS(1229), 1,
      anon_sym_COLON2,
    ACTIONS(1231), 4,
      anon_sym_COLON,
      sym_key_string_text,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
  [9988] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1231), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1229), 4,
      anon_sym_LF,
      anon_sym_BSLASH,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      aux_sym__multiline_string_text_token1,
  [10001] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(877), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(1309), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1305), 3,
      anon_sym_LF,
      anon_sym_BSLASH,
      aux_sym__multiline_string_text_token1,
  [10016] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1346), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1344), 4,
      anon_sym_LF,
      anon_sym_BSLASH,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      aux_sym__multiline_string_text_token1,
  [10029] = 4,
    ACTIONS(1164), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1348), 1,
      aux_sym_value_string_text_token1,
    STATE(268), 1,
      aux_sym_value_string_text_repeat1,
    ACTIONS(1160), 3,
      anon_sym_LF,
      anon_sym_BSLASH,
      sym_comment,
  [10044] = 4,
    ACTIONS(204), 1,
      sym_comment,
    ACTIONS(434), 1,
      sym_digit,
    STATE(55), 1,
      aux_sym_integer_repeat1,
    ACTIONS(1350), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [10058] = 4,
    ACTIONS(204), 1,
      sym_comment,
    ACTIONS(1352), 1,
      anon_sym_DQUOTE,
    ACTIONS(1354), 1,
      anon_sym_SLASH,
    STATE(69), 2,
      sym_quoted_string,
      sym_regex,
  [10072] = 2,
    ACTIONS(204), 1,
      sym_comment,
    ACTIONS(1356), 4,
      anon_sym_COLON2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [10082] = 5,
    ACTIONS(15), 1,
      anon_sym_LF,
    ACTIONS(63), 1,
      sym_comment,
    STATE(42), 1,
      sym__comment_or_new_line,
    STATE(57), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(336), 1,
      aux_sym_query_string_params_section_repeat1,
  [10098] = 5,
    ACTIONS(15), 1,
      anon_sym_LF,
    ACTIONS(63), 1,
      sym_comment,
    STATE(42), 1,
      sym__comment_or_new_line,
    STATE(57), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(340), 1,
      aux_sym_query_string_params_section_repeat1,
  [10114] = 1,
    ACTIONS(1358), 5,
      anon_sym_LF,
      anon_sym_BSLASH,
      sym_filename_text,
      anon_sym_LBRACE_LBRACE,
      sym_comment,
  [10122] = 5,
    ACTIONS(15), 1,
      anon_sym_LF,
    ACTIONS(63), 1,
      sym_comment,
    STATE(43), 1,
      sym__comment_or_new_line,
    STATE(57), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(340), 1,
      aux_sym_query_string_params_section_repeat1,
  [10138] = 5,
    ACTIONS(15), 1,
      anon_sym_LF,
    ACTIONS(63), 1,
      sym_comment,
    STATE(36), 1,
      sym__comment_or_new_line,
    STATE(57), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(341), 1,
      aux_sym_multipart_form_data_section_repeat1,
  [10154] = 5,
    ACTIONS(15), 1,
      anon_sym_LF,
    ACTIONS(63), 1,
      sym_comment,
    STATE(36), 1,
      sym__comment_or_new_line,
    STATE(57), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(331), 1,
      aux_sym_multipart_form_data_section_repeat1,
  [10170] = 5,
    ACTIONS(15), 1,
      anon_sym_LF,
    ACTIONS(63), 1,
      sym_comment,
    STATE(43), 1,
      sym__comment_or_new_line,
    STATE(57), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(328), 1,
      aux_sym_query_string_params_section_repeat1,
  [10186] = 5,
    ACTIONS(15), 1,
      anon_sym_LF,
    ACTIONS(63), 1,
      sym_comment,
    STATE(41), 1,
      sym__comment_or_new_line,
    STATE(57), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(330), 1,
      aux_sym_query_string_params_section_repeat1,
  [10202] = 5,
    ACTIONS(15), 1,
      anon_sym_LF,
    ACTIONS(63), 1,
      sym_comment,
    STATE(41), 1,
      sym__comment_or_new_line,
    STATE(57), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(340), 1,
      aux_sym_query_string_params_section_repeat1,
  [10218] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1362), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1360), 3,
      anon_sym_BSLASH,
      anon_sym_BQUOTE,
      aux_sym_oneline_string_text_token1,
  [10230] = 4,
    ACTIONS(204), 1,
      sym_comment,
    ACTIONS(1364), 1,
      sym_digit,
    STATE(282), 1,
      aux_sym_integer_repeat1,
    ACTIONS(1366), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [10244] = 2,
    ACTIONS(204), 1,
      sym_comment,
    ACTIONS(1322), 4,
      anon_sym_COLON2,
      sym_key_string_text,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
  [10254] = 2,
    ACTIONS(204), 1,
      sym_comment,
    ACTIONS(1368), 4,
      anon_sym_COLON2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [10264] = 4,
    ACTIONS(204), 1,
      sym_comment,
    ACTIONS(434), 1,
      sym_digit,
    STATE(55), 1,
      aux_sym_integer_repeat1,
    ACTIONS(1370), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [10278] = 4,
    ACTIONS(204), 1,
      sym_comment,
    ACTIONS(1372), 1,
      anon_sym_LT,
    ACTIONS(1374), 1,
      anon_sym_LT_QMARK,
    STATE(299), 2,
      sym_xml_prolog_tag,
      aux_sym_xml_repeat1,
  [10292] = 4,
    ACTIONS(1311), 1,
      anon_sym_LF,
    ACTIONS(1377), 1,
      sym_comment,
    STATE(551), 1,
      sym_exponent,
    ACTIONS(1283), 2,
      anon_sym_e,
      anon_sym_E,
  [10306] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1358), 4,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      sym_filename_text,
      anon_sym_LBRACE_LBRACE,
  [10316] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1249), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1247), 3,
      anon_sym_BSLASH,
      anon_sym_BQUOTE,
      aux_sym_oneline_string_text_token1,
  [10328] = 4,
    ACTIONS(204), 1,
      sym_comment,
    ACTIONS(1379), 1,
      sym_digit,
    STATE(377), 1,
      aux_sym_integer_repeat1,
    ACTIONS(1381), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [10342] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1385), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1383), 3,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
      sym_json_string_text,
  [10354] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1389), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1387), 3,
      anon_sym_BSLASH,
      anon_sym_BQUOTE,
      aux_sym_oneline_string_text_token1,
  [10366] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1393), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1391), 3,
      anon_sym_BSLASH,
      anon_sym_BQUOTE,
      aux_sym_oneline_string_text_token1,
  [10378] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1229), 4,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      sym_filename_text,
      anon_sym_LBRACE_LBRACE,
  [10388] = 2,
    ACTIONS(1324), 1,
      sym_comment,
    ACTIONS(1322), 4,
      anon_sym_LF,
      sym_key_string_text,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
  [10398] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1397), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1395), 3,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
      sym_json_string_text,
  [10410] = 4,
    ACTIONS(204), 1,
      sym_comment,
    ACTIONS(1399), 1,
      sym_digit,
    STATE(317), 1,
      aux_sym_integer_repeat1,
    ACTIONS(1401), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [10424] = 4,
    ACTIONS(204), 1,
      sym_comment,
    ACTIONS(1352), 1,
      anon_sym_DQUOTE,
    ACTIONS(1354), 1,
      anon_sym_SLASH,
    STATE(76), 2,
      sym_quoted_string,
      sym_regex,
  [10438] = 5,
    ACTIONS(204), 1,
      sym_comment,
    ACTIONS(825), 1,
      anon_sym_DQUOTE,
    STATE(445), 1,
      sym_json_key_value,
    STATE(505), 1,
      sym_json_string,
    STATE(506), 1,
      sym_json_key_string,
  [10454] = 2,
    ACTIONS(1249), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1247), 4,
      anon_sym_LF,
      anon_sym_BSLASH,
      aux_sym_value_string_text_token1,
      sym_comment,
  [10464] = 2,
    ACTIONS(1405), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1403), 4,
      anon_sym_LF,
      anon_sym_BSLASH,
      aux_sym_value_string_text_token1,
      sym_comment,
  [10474] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1407), 4,
      anon_sym_DQUOTE,
      sym_quoted_string_text,
      anon_sym_BSLASH,
      anon_sym_LBRACE_LBRACE,
  [10484] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1409), 4,
      anon_sym_DQUOTE,
      sym_quoted_string_text,
      anon_sym_BSLASH,
      anon_sym_LBRACE_LBRACE,
  [10494] = 4,
    ACTIONS(204), 1,
      sym_comment,
    ACTIONS(1173), 1,
      sym_digit,
    STATE(221), 1,
      aux_sym_integer_repeat1,
    ACTIONS(1350), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [10508] = 4,
    ACTIONS(204), 1,
      sym_comment,
    ACTIONS(1173), 1,
      sym_digit,
    STATE(221), 1,
      aux_sym_integer_repeat1,
    ACTIONS(1370), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [10522] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1231), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1229), 3,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
      sym_json_string_text,
  [10534] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1413), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1411), 3,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
      sym_json_string_text,
  [10546] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1231), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1229), 3,
      anon_sym_BSLASH,
      anon_sym_BQUOTE,
      aux_sym_oneline_string_text_token1,
  [10558] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1247), 4,
      anon_sym_DQUOTE,
      sym_quoted_string_text,
      anon_sym_BSLASH,
      anon_sym_LBRACE_LBRACE,
  [10568] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1229), 4,
      anon_sym_DQUOTE,
      sym_quoted_string_text,
      anon_sym_BSLASH,
      anon_sym_LBRACE_LBRACE,
  [10578] = 2,
    ACTIONS(204), 1,
      sym_comment,
    ACTIONS(1231), 4,
      anon_sym_COLON2,
      sym_key_string_text,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
  [10588] = 1,
    ACTIONS(1229), 5,
      anon_sym_LF,
      anon_sym_BSLASH,
      sym_filename_text,
      anon_sym_LBRACE_LBRACE,
      sym_comment,
  [10596] = 4,
    ACTIONS(15), 1,
      anon_sym_LF,
    ACTIONS(63), 1,
      sym_comment,
    STATE(57), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(3), 2,
      sym__comment_or_new_line,
      aux_sym_hurl_file_repeat2,
  [10610] = 4,
    ACTIONS(204), 1,
      sym_comment,
    ACTIONS(736), 1,
      anon_sym_DQUOTE,
    ACTIONS(1415), 1,
      anon_sym_SLASH,
    STATE(150), 2,
      sym_quoted_string,
      sym_regex,
  [10624] = 5,
    ACTIONS(15), 1,
      anon_sym_LF,
    ACTIONS(63), 1,
      sym_comment,
    STATE(47), 1,
      sym__comment_or_new_line,
    STATE(57), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(340), 1,
      aux_sym_query_string_params_section_repeat1,
  [10640] = 2,
    ACTIONS(1231), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1229), 4,
      anon_sym_LF,
      anon_sym_BSLASH,
      aux_sym_value_string_text_token1,
      sym_comment,
  [10650] = 5,
    ACTIONS(15), 1,
      anon_sym_LF,
    ACTIONS(63), 1,
      sym_comment,
    STATE(46), 1,
      sym__comment_or_new_line,
    STATE(57), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(340), 1,
      aux_sym_query_string_params_section_repeat1,
  [10666] = 5,
    ACTIONS(1417), 1,
      anon_sym_LF,
    ACTIONS(1420), 1,
      sym_comment,
    STATE(166), 1,
      sym__comment_or_new_line,
    STATE(273), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(331), 1,
      aux_sym_multipart_form_data_section_repeat1,
  [10682] = 2,
    ACTIONS(1245), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1243), 4,
      anon_sym_LF,
      anon_sym_BSLASH,
      aux_sym_value_string_text_token1,
      sym_comment,
  [10692] = 4,
    ACTIONS(204), 1,
      sym_comment,
    ACTIONS(736), 1,
      anon_sym_DQUOTE,
    ACTIONS(1415), 1,
      anon_sym_SLASH,
    STATE(142), 2,
      sym_quoted_string,
      sym_regex,
  [10706] = 4,
    ACTIONS(204), 1,
      sym_comment,
    ACTIONS(1352), 1,
      anon_sym_DQUOTE,
    ACTIONS(1354), 1,
      anon_sym_SLASH,
    STATE(446), 2,
      sym_quoted_string,
      sym_regex,
  [10720] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1423), 4,
      anon_sym_DQUOTE,
      sym_quoted_string_text,
      anon_sym_BSLASH,
      anon_sym_LBRACE_LBRACE,
  [10730] = 5,
    ACTIONS(15), 1,
      anon_sym_LF,
    ACTIONS(63), 1,
      sym_comment,
    STATE(49), 1,
      sym__comment_or_new_line,
    STATE(57), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(340), 1,
      aux_sym_query_string_params_section_repeat1,
  [10746] = 4,
    ACTIONS(204), 1,
      sym_comment,
    ACTIONS(1352), 1,
      anon_sym_DQUOTE,
    ACTIONS(1354), 1,
      anon_sym_SLASH,
    STATE(464), 2,
      sym_quoted_string,
      sym_regex,
  [10760] = 4,
    ACTIONS(204), 1,
      sym_comment,
    ACTIONS(736), 1,
      anon_sym_DQUOTE,
    ACTIONS(1415), 1,
      anon_sym_SLASH,
    STATE(512), 2,
      sym_quoted_string,
      sym_regex,
  [10774] = 2,
    ACTIONS(1235), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1233), 4,
      anon_sym_LF,
      anon_sym_BSLASH,
      aux_sym_value_string_text_token1,
      sym_comment,
  [10784] = 5,
    ACTIONS(1425), 1,
      anon_sym_LF,
    ACTIONS(1428), 1,
      sym_comment,
    STATE(189), 1,
      sym__comment_or_new_line,
    STATE(273), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(340), 1,
      aux_sym_query_string_params_section_repeat1,
  [10800] = 5,
    ACTIONS(15), 1,
      anon_sym_LF,
    ACTIONS(63), 1,
      sym_comment,
    STATE(38), 1,
      sym__comment_or_new_line,
    STATE(57), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(331), 1,
      aux_sym_multipart_form_data_section_repeat1,
  [10816] = 4,
    ACTIONS(856), 1,
      sym_comment,
    ACTIONS(1431), 1,
      anon_sym_LF,
    STATE(17), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(21), 1,
      sym__comment_or_new_line,
  [10829] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1433), 3,
      anon_sym_BSLASH,
      anon_sym_SLASH,
      sym_regex_text,
  [10838] = 4,
    ACTIONS(856), 1,
      sym_comment,
    ACTIONS(1431), 1,
      anon_sym_LF,
    STATE(17), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(22), 1,
      sym__comment_or_new_line,
  [10851] = 2,
    ACTIONS(204), 1,
      sym_comment,
    ACTIONS(1435), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [10860] = 4,
    ACTIONS(856), 1,
      sym_comment,
    ACTIONS(1431), 1,
      anon_sym_LF,
    STATE(17), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(20), 1,
      sym__comment_or_new_line,
  [10873] = 4,
    ACTIONS(856), 1,
      sym_comment,
    ACTIONS(1431), 1,
      anon_sym_LF,
    STATE(17), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(19), 1,
      sym__comment_or_new_line,
  [10886] = 4,
    ACTIONS(856), 1,
      sym_comment,
    ACTIONS(1431), 1,
      anon_sym_LF,
    STATE(17), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(25), 1,
      sym__comment_or_new_line,
  [10899] = 4,
    ACTIONS(856), 1,
      sym_comment,
    ACTIONS(1431), 1,
      anon_sym_LF,
    STATE(17), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(26), 1,
      sym__comment_or_new_line,
  [10912] = 4,
    ACTIONS(856), 1,
      sym_comment,
    ACTIONS(1431), 1,
      anon_sym_LF,
    STATE(17), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(27), 1,
      sym__comment_or_new_line,
  [10925] = 4,
    ACTIONS(856), 1,
      sym_comment,
    ACTIONS(1431), 1,
      anon_sym_LF,
    STATE(17), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(30), 1,
      sym__comment_or_new_line,
  [10938] = 4,
    ACTIONS(856), 1,
      sym_comment,
    ACTIONS(1431), 1,
      anon_sym_LF,
    STATE(17), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(31), 1,
      sym__comment_or_new_line,
  [10951] = 3,
    ACTIONS(204), 1,
      sym_comment,
    STATE(407), 1,
      sym_boolean,
    ACTIONS(740), 2,
      anon_sym_true,
      anon_sym_false,
  [10962] = 3,
    ACTIONS(204), 1,
      sym_comment,
    STATE(385), 1,
      sym_boolean,
    ACTIONS(740), 2,
      anon_sym_true,
      anon_sym_false,
  [10973] = 4,
    ACTIONS(204), 1,
      sym_comment,
    ACTIONS(1437), 1,
      aux_sym_variable_name_token1,
    STATE(106), 1,
      sym_variable_name,
    STATE(533), 1,
      sym_expr,
  [10986] = 2,
    ACTIONS(204), 1,
      sym_comment,
    ACTIONS(1439), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [10995] = 3,
    ACTIONS(204), 1,
      sym_comment,
    STATE(346), 1,
      sym_boolean,
    ACTIONS(740), 2,
      anon_sym_true,
      anon_sym_false,
  [11006] = 4,
    ACTIONS(856), 1,
      sym_comment,
    ACTIONS(1431), 1,
      anon_sym_LF,
    STATE(17), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(32), 1,
      sym__comment_or_new_line,
  [11019] = 4,
    ACTIONS(15), 1,
      anon_sym_LF,
    ACTIONS(63), 1,
      sym_comment,
    STATE(57), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(58), 1,
      sym__comment_or_new_line,
  [11032] = 3,
    ACTIONS(204), 1,
      sym_comment,
    STATE(348), 1,
      sym_boolean,
    ACTIONS(740), 2,
      anon_sym_true,
      anon_sym_false,
  [11043] = 4,
    ACTIONS(204), 1,
      sym_comment,
    ACTIONS(742), 1,
      sym_digit,
    STATE(111), 1,
      aux_sym_integer_repeat1,
    STATE(349), 1,
      sym_integer,
  [11056] = 4,
    ACTIONS(204), 1,
      sym_comment,
    ACTIONS(742), 1,
      sym_digit,
    STATE(111), 1,
      aux_sym_integer_repeat1,
    STATE(350), 1,
      sym_integer,
  [11069] = 4,
    ACTIONS(204), 1,
      sym_comment,
    ACTIONS(1441), 1,
      anon_sym_SEMI,
    ACTIONS(1443), 1,
      sym_hexdigit,
    STATE(399), 1,
      aux_sym_oneline_hex_repeat1,
  [11082] = 4,
    ACTIONS(204), 1,
      sym_comment,
    ACTIONS(1437), 1,
      aux_sym_variable_name_token1,
    STATE(351), 1,
      sym_variable_definition,
    STATE(585), 1,
      sym_variable_name,
  [11095] = 4,
    ACTIONS(204), 1,
      sym_comment,
    ACTIONS(1445), 1,
      anon_sym_COMMA,
    ACTIONS(1447), 1,
      anon_sym_RBRACK,
    STATE(424), 1,
      aux_sym_json_array_repeat1,
  [11108] = 4,
    ACTIONS(204), 1,
      sym_comment,
    ACTIONS(1135), 1,
      anon_sym_COMMA,
    ACTIONS(1449), 1,
      anon_sym_RBRACE,
    STATE(386), 1,
      aux_sym_json_object_repeat1,
  [11121] = 3,
    ACTIONS(204), 1,
      sym_comment,
    STATE(352), 1,
      sym_boolean,
    ACTIONS(740), 2,
      anon_sym_true,
      anon_sym_false,
  [11132] = 3,
    ACTIONS(204), 1,
      sym_comment,
    STATE(358), 1,
      sym_boolean,
    ACTIONS(740), 2,
      anon_sym_true,
      anon_sym_false,
  [11143] = 4,
    ACTIONS(7), 1,
      anon_sym_LF,
    ACTIONS(11), 1,
      sym_comment,
    STATE(59), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(62), 1,
      sym__comment_or_new_line,
  [11156] = 4,
    ACTIONS(204), 1,
      sym_comment,
    ACTIONS(835), 1,
      sym_digit,
    STATE(53), 1,
      aux_sym_integer_repeat1,
    STATE(73), 1,
      sym_integer,
  [11169] = 3,
    ACTIONS(204), 1,
      sym_comment,
    STATE(375), 1,
      sym_status,
    ACTIONS(1451), 2,
      aux_sym_status_token1,
      anon_sym_STAR,
  [11180] = 4,
    ACTIONS(204), 1,
      sym_comment,
    ACTIONS(1437), 1,
      aux_sym_variable_name_token1,
    STATE(106), 1,
      sym_variable_name,
    STATE(578), 1,
      sym_expr,
  [11193] = 4,
    ACTIONS(204), 1,
      sym_comment,
    ACTIONS(1445), 1,
      anon_sym_COMMA,
    ACTIONS(1453), 1,
      anon_sym_RBRACK,
    STATE(365), 1,
      aux_sym_json_array_repeat1,
  [11206] = 4,
    ACTIONS(204), 1,
      sym_comment,
    ACTIONS(1135), 1,
      anon_sym_COMMA,
    ACTIONS(1455), 1,
      anon_sym_RBRACE,
    STATE(386), 1,
      aux_sym_json_object_repeat1,
  [11219] = 4,
    ACTIONS(642), 1,
      anon_sym_LF,
    ACTIONS(656), 1,
      sym_comment,
    STATE(13), 1,
      sym__comment_or_new_line,
    STATE(88), 1,
      aux_sym__comment_or_new_line_repeat1,
  [11232] = 4,
    ACTIONS(204), 1,
      sym_comment,
    ACTIONS(1135), 1,
      anon_sym_COMMA,
    ACTIONS(1455), 1,
      anon_sym_RBRACE,
    STATE(366), 1,
      aux_sym_json_object_repeat1,
  [11245] = 4,
    ACTIONS(707), 1,
      sym_digit,
    ACTIONS(1350), 1,
      anon_sym_LF,
    ACTIONS(1457), 1,
      sym_comment,
    STATE(112), 1,
      aux_sym_integer_repeat1,
  [11258] = 4,
    ACTIONS(204), 1,
      sym_comment,
    ACTIONS(1437), 1,
      aux_sym_variable_name_token1,
    STATE(106), 1,
      sym_variable_name,
    STATE(577), 1,
      sym_expr,
  [11271] = 4,
    ACTIONS(1281), 1,
      anon_sym_DOT,
    ACTIONS(1459), 1,
      anon_sym_LF,
    ACTIONS(1461), 1,
      sym_comment,
    STATE(593), 1,
      sym_fraction,
  [11284] = 4,
    ACTIONS(856), 1,
      sym_comment,
    ACTIONS(1431), 1,
      anon_sym_LF,
    STATE(17), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(103), 1,
      sym__comment_or_new_line,
  [11297] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1465), 1,
      anon_sym_POUND,
    ACTIONS(1463), 2,
      anon_sym_SEMI,
      aux_sym_filename_escaped_char_token1,
  [11308] = 2,
    ACTIONS(204), 1,
      sym_comment,
    ACTIONS(1311), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [11317] = 4,
    ACTIONS(204), 1,
      sym_comment,
    ACTIONS(1445), 1,
      anon_sym_COMMA,
    ACTIONS(1467), 1,
      anon_sym_RBRACK,
    STATE(424), 1,
      aux_sym_json_array_repeat1,
  [11330] = 4,
    ACTIONS(204), 1,
      sym_comment,
    ACTIONS(742), 1,
      sym_digit,
    STATE(111), 1,
      aux_sym_integer_repeat1,
    STATE(342), 1,
      sym_integer,
  [11343] = 4,
    ACTIONS(856), 1,
      sym_comment,
    ACTIONS(1431), 1,
      anon_sym_LF,
    STATE(17), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(24), 1,
      sym__comment_or_new_line,
  [11356] = 4,
    ACTIONS(204), 1,
      sym_comment,
    ACTIONS(1469), 1,
      anon_sym_RBRACE,
    ACTIONS(1471), 1,
      anon_sym_COMMA,
    STATE(386), 1,
      aux_sym_json_object_repeat1,
  [11369] = 4,
    ACTIONS(204), 1,
      sym_comment,
    ACTIONS(1437), 1,
      aux_sym_variable_name_token1,
    STATE(106), 1,
      sym_variable_name,
    STATE(589), 1,
      sym_expr,
  [11382] = 4,
    ACTIONS(204), 1,
      sym_comment,
    ACTIONS(1135), 1,
      anon_sym_COMMA,
    ACTIONS(1474), 1,
      anon_sym_RBRACE,
    STATE(386), 1,
      aux_sym_json_object_repeat1,
  [11395] = 2,
    ACTIONS(204), 1,
      sym_comment,
    ACTIONS(1476), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [11404] = 4,
    ACTIONS(642), 1,
      anon_sym_LF,
    ACTIONS(656), 1,
      sym_comment,
    STATE(88), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(92), 1,
      sym__comment_or_new_line,
  [11417] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1480), 1,
      anon_sym_POUND,
    ACTIONS(1478), 2,
      anon_sym_SEMI,
      aux_sym_filename_escaped_char_token1,
  [11428] = 4,
    ACTIONS(856), 1,
      sym_comment,
    ACTIONS(1431), 1,
      anon_sym_LF,
    STATE(17), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(61), 1,
      sym__comment_or_new_line,
  [11441] = 4,
    ACTIONS(856), 1,
      sym_comment,
    ACTIONS(1431), 1,
      anon_sym_LF,
    STATE(17), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(18), 1,
      sym__comment_or_new_line,
  [11454] = 4,
    ACTIONS(204), 1,
      sym_comment,
    ACTIONS(1437), 1,
      aux_sym_variable_name_token1,
    STATE(106), 1,
      sym_variable_name,
    STATE(565), 1,
      sym_expr,
  [11467] = 4,
    ACTIONS(1281), 1,
      anon_sym_DOT,
    ACTIONS(1482), 1,
      anon_sym_LF,
    ACTIONS(1484), 1,
      sym_comment,
    STATE(593), 1,
      sym_fraction,
  [11480] = 4,
    ACTIONS(204), 1,
      sym_comment,
    ACTIONS(1437), 1,
      aux_sym_variable_name_token1,
    STATE(106), 1,
      sym_variable_name,
    STATE(568), 1,
      sym_expr,
  [11493] = 2,
    ACTIONS(204), 1,
      sym_comment,
    ACTIONS(1231), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [11502] = 4,
    ACTIONS(1281), 1,
      anon_sym_DOT,
    ACTIONS(1486), 1,
      anon_sym_LF,
    ACTIONS(1488), 1,
      sym_comment,
    STATE(593), 1,
      sym_fraction,
  [11515] = 4,
    ACTIONS(204), 1,
      sym_comment,
    ACTIONS(1490), 1,
      anon_sym_SEMI,
    ACTIONS(1492), 1,
      sym_hexdigit,
    STATE(430), 1,
      aux_sym_oneline_hex_repeat1,
  [11528] = 4,
    ACTIONS(1281), 1,
      anon_sym_DOT,
    ACTIONS(1494), 1,
      anon_sym_LF,
    ACTIONS(1496), 1,
      sym_comment,
    STATE(593), 1,
      sym_fraction,
  [11541] = 4,
    ACTIONS(703), 1,
      anon_sym_LF,
    ACTIONS(705), 1,
      sym_comment,
    STATE(130), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(547), 1,
      sym__comment_or_new_line,
  [11554] = 4,
    ACTIONS(1281), 1,
      anon_sym_DOT,
    ACTIONS(1498), 1,
      anon_sym_LF,
    ACTIONS(1500), 1,
      sym_comment,
    STATE(593), 1,
      sym_fraction,
  [11567] = 4,
    ACTIONS(1502), 1,
      anon_sym_LF,
    ACTIONS(1504), 1,
      sym_comment,
    STATE(186), 1,
      sym__comment_or_new_line,
    STATE(273), 1,
      aux_sym__comment_or_new_line_repeat1,
  [11580] = 4,
    ACTIONS(1281), 1,
      anon_sym_DOT,
    ACTIONS(1506), 1,
      anon_sym_LF,
    ACTIONS(1508), 1,
      sym_comment,
    STATE(593), 1,
      sym_fraction,
  [11593] = 4,
    ACTIONS(1502), 1,
      anon_sym_LF,
    ACTIONS(1504), 1,
      sym_comment,
    STATE(163), 1,
      sym__comment_or_new_line,
    STATE(273), 1,
      aux_sym__comment_or_new_line_repeat1,
  [11606] = 4,
    ACTIONS(1502), 1,
      anon_sym_LF,
    ACTIONS(1504), 1,
      sym_comment,
    STATE(162), 1,
      sym__comment_or_new_line,
    STATE(273), 1,
      aux_sym__comment_or_new_line_repeat1,
  [11619] = 4,
    ACTIONS(856), 1,
      sym_comment,
    ACTIONS(1431), 1,
      anon_sym_LF,
    STATE(17), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(23), 1,
      sym__comment_or_new_line,
  [11632] = 4,
    ACTIONS(1502), 1,
      anon_sym_LF,
    ACTIONS(1504), 1,
      sym_comment,
    STATE(159), 1,
      sym__comment_or_new_line,
    STATE(273), 1,
      aux_sym__comment_or_new_line_repeat1,
  [11645] = 2,
    ACTIONS(204), 1,
      sym_comment,
    ACTIONS(1510), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [11654] = 2,
    ACTIONS(204), 1,
      sym_comment,
    ACTIONS(1512), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [11663] = 4,
    ACTIONS(7), 1,
      anon_sym_LF,
    ACTIONS(11), 1,
      sym_comment,
    STATE(59), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(63), 1,
      sym__comment_or_new_line,
  [11676] = 4,
    ACTIONS(204), 1,
      sym_comment,
    ACTIONS(1437), 1,
      aux_sym_variable_name_token1,
    STATE(106), 1,
      sym_variable_name,
    STATE(570), 1,
      sym_expr,
  [11689] = 4,
    ACTIONS(1502), 1,
      anon_sym_LF,
    ACTIONS(1504), 1,
      sym_comment,
    STATE(161), 1,
      sym__comment_or_new_line,
    STATE(273), 1,
      aux_sym__comment_or_new_line_repeat1,
  [11702] = 2,
    ACTIONS(204), 1,
      sym_comment,
    ACTIONS(1514), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [11711] = 4,
    ACTIONS(204), 1,
      sym_comment,
    ACTIONS(1135), 1,
      anon_sym_COMMA,
    ACTIONS(1516), 1,
      anon_sym_RBRACE,
    STATE(388), 1,
      aux_sym_json_object_repeat1,
  [11724] = 4,
    ACTIONS(856), 1,
      sym_comment,
    ACTIONS(1431), 1,
      anon_sym_LF,
    STATE(9), 1,
      sym__comment_or_new_line,
    STATE(17), 1,
      aux_sym__comment_or_new_line_repeat1,
  [11737] = 4,
    ACTIONS(1281), 1,
      anon_sym_DOT,
    ACTIONS(1518), 1,
      anon_sym_LF,
    ACTIONS(1520), 1,
      sym_comment,
    STATE(593), 1,
      sym_fraction,
  [11750] = 4,
    ACTIONS(204), 1,
      sym_comment,
    ACTIONS(1437), 1,
      aux_sym_variable_name_token1,
    STATE(106), 1,
      sym_variable_name,
    STATE(576), 1,
      sym_expr,
  [11763] = 3,
    ACTIONS(204), 1,
      sym_comment,
    STATE(344), 1,
      sym_boolean,
    ACTIONS(740), 2,
      anon_sym_true,
      anon_sym_false,
  [11774] = 4,
    ACTIONS(204), 1,
      sym_comment,
    ACTIONS(742), 1,
      sym_digit,
    STATE(111), 1,
      aux_sym_integer_repeat1,
    STATE(139), 1,
      sym_integer,
  [11787] = 4,
    ACTIONS(7), 1,
      anon_sym_LF,
    ACTIONS(11), 1,
      sym_comment,
    STATE(39), 1,
      sym__comment_or_new_line,
    STATE(59), 1,
      aux_sym__comment_or_new_line_repeat1,
  [11800] = 4,
    ACTIONS(642), 1,
      anon_sym_LF,
    ACTIONS(656), 1,
      sym_comment,
    STATE(78), 1,
      sym__comment_or_new_line,
    STATE(88), 1,
      aux_sym__comment_or_new_line_repeat1,
  [11813] = 4,
    ACTIONS(204), 1,
      sym_comment,
    ACTIONS(1437), 1,
      aux_sym_variable_name_token1,
    STATE(106), 1,
      sym_variable_name,
    STATE(575), 1,
      sym_expr,
  [11826] = 4,
    ACTIONS(204), 1,
      sym_comment,
    ACTIONS(1522), 1,
      anon_sym_COMMA,
    ACTIONS(1525), 1,
      anon_sym_RBRACK,
    STATE(424), 1,
      aux_sym_json_array_repeat1,
  [11839] = 4,
    ACTIONS(204), 1,
      sym_comment,
    ACTIONS(1437), 1,
      aux_sym_variable_name_token1,
    STATE(106), 1,
      sym_variable_name,
    STATE(574), 1,
      sym_expr,
  [11852] = 4,
    ACTIONS(204), 1,
      sym_comment,
    ACTIONS(1135), 1,
      anon_sym_COMMA,
    ACTIONS(1516), 1,
      anon_sym_RBRACE,
    STATE(386), 1,
      aux_sym_json_object_repeat1,
  [11865] = 4,
    ACTIONS(204), 1,
      sym_comment,
    ACTIONS(1445), 1,
      anon_sym_COMMA,
    ACTIONS(1527), 1,
      anon_sym_RBRACK,
    STATE(383), 1,
      aux_sym_json_array_repeat1,
  [11878] = 4,
    ACTIONS(204), 1,
      sym_comment,
    ACTIONS(1437), 1,
      aux_sym_variable_name_token1,
    STATE(106), 1,
      sym_variable_name,
    STATE(573), 1,
      sym_expr,
  [11891] = 4,
    ACTIONS(204), 1,
      sym_comment,
    ACTIONS(1437), 1,
      aux_sym_variable_name_token1,
    STATE(106), 1,
      sym_variable_name,
    STATE(572), 1,
      sym_expr,
  [11904] = 4,
    ACTIONS(204), 1,
      sym_comment,
    ACTIONS(1529), 1,
      anon_sym_SEMI,
    ACTIONS(1531), 1,
      sym_hexdigit,
    STATE(430), 1,
      aux_sym_oneline_hex_repeat1,
  [11917] = 2,
    ACTIONS(204), 1,
      sym_comment,
    ACTIONS(1299), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [11926] = 2,
    ACTIONS(204), 1,
      sym_comment,
    ACTIONS(1534), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [11935] = 4,
    ACTIONS(7), 1,
      anon_sym_LF,
    ACTIONS(11), 1,
      sym_comment,
    STATE(59), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(124), 1,
      sym__comment_or_new_line,
  [11948] = 4,
    ACTIONS(707), 1,
      sym_digit,
    ACTIONS(1370), 1,
      anon_sym_LF,
    ACTIONS(1536), 1,
      sym_comment,
    STATE(112), 1,
      aux_sym_integer_repeat1,
  [11961] = 3,
    ACTIONS(204), 1,
      sym_comment,
    ACTIONS(1538), 1,
      sym_digit,
    STATE(233), 1,
      aux_sym_integer_repeat1,
  [11971] = 3,
    ACTIONS(204), 1,
      sym_comment,
    ACTIONS(1540), 1,
      anon_sym_LBRACE,
    STATE(262), 1,
      sym_unicode_char,
  [11981] = 2,
    ACTIONS(204), 1,
      sym_comment,
    ACTIONS(1542), 2,
      aux_sym_status_token1,
      anon_sym_STAR,
  [11989] = 3,
    ACTIONS(204), 1,
      sym_comment,
    ACTIONS(1352), 1,
      anon_sym_DQUOTE,
    STATE(77), 1,
      sym_quoted_string,
  [11999] = 3,
    ACTIONS(204), 1,
      sym_comment,
    ACTIONS(1544), 1,
      anon_sym_LBRACE,
    STATE(294), 1,
      sym_unicode_char,
  [12009] = 3,
    ACTIONS(204), 1,
      sym_comment,
    ACTIONS(736), 1,
      anon_sym_DQUOTE,
    STATE(140), 1,
      sym_quoted_string,
  [12019] = 3,
    ACTIONS(204), 1,
      sym_comment,
    ACTIONS(1352), 1,
      anon_sym_DQUOTE,
    STATE(83), 1,
      sym_quoted_string,
  [12029] = 3,
    ACTIONS(204), 1,
      sym_comment,
    ACTIONS(1352), 1,
      anon_sym_DQUOTE,
    STATE(81), 1,
      sym_quoted_string,
  [12039] = 2,
    ACTIONS(204), 1,
      sym_comment,
    ACTIONS(1525), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [12047] = 3,
    ACTIONS(204), 1,
      sym_comment,
    ACTIONS(1546), 1,
      sym_digit,
    STATE(250), 1,
      aux_sym_integer_repeat1,
  [12057] = 2,
    ACTIONS(204), 1,
      sym_comment,
    ACTIONS(1469), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [12065] = 3,
    ACTIONS(204), 1,
      sym_comment,
    ACTIONS(1352), 1,
      anon_sym_DQUOTE,
    STATE(70), 1,
      sym_quoted_string,
  [12075] = 2,
    ACTIONS(204), 1,
      sym_comment,
    ACTIONS(1548), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [12083] = 3,
    ACTIONS(204), 1,
      sym_comment,
    ACTIONS(1352), 1,
      anon_sym_DQUOTE,
    STATE(84), 1,
      sym_quoted_string,
  [12093] = 3,
    ACTIONS(1550), 1,
      anon_sym_LF,
    ACTIONS(1552), 1,
      aux_sym_file_value_token1,
    ACTIONS(1554), 1,
      sym_comment,
  [12103] = 3,
    ACTIONS(204), 1,
      sym_comment,
    ACTIONS(1556), 1,
      anon_sym_LBRACE,
    STATE(335), 1,
      sym_unicode_char,
  [12113] = 3,
    ACTIONS(204), 1,
      sym_comment,
    ACTIONS(1558), 1,
      sym_digit,
    STATE(318), 1,
      aux_sym_integer_repeat1,
  [12123] = 3,
    ACTIONS(204), 1,
      sym_comment,
    ACTIONS(1560), 1,
      anon_sym_LBRACE,
    STATE(241), 1,
      sym_unicode_char,
  [12133] = 3,
    ACTIONS(204), 1,
      sym_comment,
    ACTIONS(1273), 1,
      anon_sym_LT,
    ACTIONS(1275), 1,
      anon_sym_LT_QMARK,
  [12143] = 3,
    ACTIONS(204), 1,
      sym_comment,
    ACTIONS(1562), 1,
      sym_digit,
    STATE(270), 1,
      aux_sym_integer_repeat1,
  [12153] = 3,
    ACTIONS(204), 1,
      sym_comment,
    ACTIONS(1352), 1,
      anon_sym_DQUOTE,
    STATE(80), 1,
      sym_quoted_string,
  [12163] = 3,
    ACTIONS(204), 1,
      sym_comment,
    ACTIONS(736), 1,
      anon_sym_DQUOTE,
    STATE(152), 1,
      sym_quoted_string,
  [12173] = 3,
    ACTIONS(204), 1,
      sym_comment,
    ACTIONS(1352), 1,
      anon_sym_DQUOTE,
    STATE(75), 1,
      sym_quoted_string,
  [12183] = 3,
    ACTIONS(204), 1,
      sym_comment,
    ACTIONS(1564), 1,
      sym_digit,
    STATE(298), 1,
      aux_sym_integer_repeat1,
  [12193] = 3,
    ACTIONS(204), 1,
      sym_comment,
    ACTIONS(1566), 1,
      sym_digit,
    STATE(434), 1,
      aux_sym_integer_repeat1,
  [12203] = 3,
    ACTIONS(1568), 1,
      anon_sym_LF,
    ACTIONS(1570), 1,
      aux_sym_file_value_token1,
    ACTIONS(1572), 1,
      sym_comment,
  [12213] = 3,
    ACTIONS(204), 1,
      sym_comment,
    ACTIONS(1574), 1,
      anon_sym_LBRACE,
    STATE(339), 1,
      sym_unicode_char,
  [12223] = 3,
    ACTIONS(204), 1,
      sym_comment,
    ACTIONS(736), 1,
      anon_sym_DQUOTE,
    STATE(516), 1,
      sym_quoted_string,
  [12233] = 3,
    ACTIONS(204), 1,
      sym_comment,
    ACTIONS(1576), 1,
      anon_sym_COLON,
    ACTIONS(1578), 1,
      anon_sym_COLON2,
  [12243] = 3,
    ACTIONS(204), 1,
      sym_comment,
    ACTIONS(736), 1,
      anon_sym_DQUOTE,
    STATE(155), 1,
      sym_quoted_string,
  [12253] = 3,
    ACTIONS(204), 1,
      sym_comment,
    ACTIONS(1352), 1,
      anon_sym_DQUOTE,
    STATE(72), 1,
      sym_quoted_string,
  [12263] = 3,
    ACTIONS(204), 1,
      sym_comment,
    ACTIONS(736), 1,
      anon_sym_DQUOTE,
    STATE(143), 1,
      sym_quoted_string,
  [12273] = 3,
    ACTIONS(204), 1,
      sym_comment,
    ACTIONS(736), 1,
      anon_sym_DQUOTE,
    STATE(149), 1,
      sym_quoted_string,
  [12283] = 3,
    ACTIONS(204), 1,
      sym_comment,
    ACTIONS(736), 1,
      anon_sym_DQUOTE,
    STATE(146), 1,
      sym_quoted_string,
  [12293] = 3,
    ACTIONS(204), 1,
      sym_comment,
    ACTIONS(736), 1,
      anon_sym_DQUOTE,
    STATE(141), 1,
      sym_quoted_string,
  [12303] = 3,
    ACTIONS(204), 1,
      sym_comment,
    ACTIONS(736), 1,
      anon_sym_DQUOTE,
    STATE(145), 1,
      sym_quoted_string,
  [12313] = 3,
    ACTIONS(204), 1,
      sym_comment,
    ACTIONS(1580), 1,
      anon_sym_file_COMMA,
    STATE(401), 1,
      sym_file_value,
  [12323] = 2,
    ACTIONS(204), 1,
      sym_comment,
    ACTIONS(1582), 1,
      anon_sym_COLON2,
  [12330] = 2,
    ACTIONS(1584), 1,
      anon_sym_LF,
    ACTIONS(1586), 1,
      sym_comment,
  [12337] = 2,
    ACTIONS(1588), 1,
      anon_sym_LF,
    ACTIONS(1590), 1,
      sym_comment,
  [12344] = 2,
    ACTIONS(1534), 1,
      anon_sym_LF,
    ACTIONS(1592), 1,
      sym_comment,
  [12351] = 2,
    ACTIONS(204), 1,
      sym_comment,
    ACTIONS(1594), 1,
      anon_sym_COLON2,
  [12358] = 2,
    ACTIONS(204), 1,
      sym_comment,
    ACTIONS(1596), 1,
      anon_sym_COLON2,
  [12365] = 2,
    ACTIONS(204), 1,
      sym_comment,
    ACTIONS(1598), 1,
      sym_hexdigit,
  [12372] = 2,
    ACTIONS(1600), 1,
      anon_sym_LF,
    ACTIONS(1602), 1,
      sym_comment,
  [12379] = 2,
    ACTIONS(1604), 1,
      anon_sym_LF,
    ACTIONS(1606), 1,
      sym_comment,
  [12386] = 2,
    ACTIONS(204), 1,
      sym_comment,
    ACTIONS(1608), 1,
      anon_sym_COLON2,
  [12393] = 2,
    ACTIONS(204), 1,
      sym_comment,
    ACTIONS(1610), 1,
      anon_sym_COLON2,
  [12400] = 2,
    ACTIONS(204), 1,
      sym_comment,
    ACTIONS(1612), 1,
      anon_sym_COLON2,
  [12407] = 2,
    ACTIONS(204), 1,
      sym_comment,
    ACTIONS(1614), 1,
      anon_sym_COLON2,
  [12414] = 2,
    ACTIONS(204), 1,
      sym_comment,
    ACTIONS(1616), 1,
      sym_hexdigit,
  [12421] = 2,
    ACTIONS(204), 1,
      sym_comment,
    ACTIONS(1576), 1,
      anon_sym_COLON,
  [12428] = 2,
    ACTIONS(1299), 1,
      anon_sym_LF,
    ACTIONS(1303), 1,
      sym_comment,
  [12435] = 2,
    ACTIONS(204), 1,
      sym_comment,
    ACTIONS(1618), 1,
      anon_sym_COLON2,
  [12442] = 2,
    ACTIONS(204), 1,
      sym_comment,
    ACTIONS(1620), 1,
      anon_sym_COLON2,
  [12449] = 2,
    ACTIONS(204), 1,
      sym_comment,
    ACTIONS(1622), 1,
      anon_sym_COLON2,
  [12456] = 2,
    ACTIONS(1624), 1,
      anon_sym_LF,
    ACTIONS(1626), 1,
      sym_comment,
  [12463] = 2,
    ACTIONS(1311), 1,
      anon_sym_LF,
    ACTIONS(1377), 1,
      sym_comment,
  [12470] = 2,
    ACTIONS(204), 1,
      sym_comment,
    ACTIONS(1628), 1,
      anon_sym_COLON2,
  [12477] = 2,
    ACTIONS(204), 1,
      sym_comment,
    ACTIONS(1630), 1,
      anon_sym_COLON2,
  [12484] = 2,
    ACTIONS(1632), 1,
      anon_sym_LF,
    ACTIONS(1634), 1,
      sym_comment,
  [12491] = 2,
    ACTIONS(1636), 1,
      anon_sym_LF,
    ACTIONS(1638), 1,
      sym_comment,
  [12498] = 2,
    ACTIONS(1251), 1,
      sym_comment,
    ACTIONS(1253), 1,
      anon_sym_LF,
  [12505] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1640), 1,
      aux_sym_xml_close_tag_token1,
  [12512] = 2,
    ACTIONS(1642), 1,
      anon_sym_LF,
    ACTIONS(1644), 1,
      sym_comment,
  [12519] = 2,
    ACTIONS(204), 1,
      sym_comment,
    ACTIONS(1646), 1,
      sym_hexdigit,
  [12526] = 2,
    ACTIONS(1356), 1,
      anon_sym_LF,
    ACTIONS(1648), 1,
      sym_comment,
  [12533] = 2,
    ACTIONS(1650), 1,
      anon_sym_LF,
    ACTIONS(1652), 1,
      sym_comment,
  [12540] = 2,
    ACTIONS(204), 1,
      sym_comment,
    ACTIONS(1654), 1,
      sym_hexdigit,
  [12547] = 2,
    ACTIONS(204), 1,
      sym_comment,
    ACTIONS(1656), 1,
      anon_sym_COLON2,
  [12554] = 2,
    ACTIONS(204), 1,
      sym_comment,
    ACTIONS(1658), 1,
      anon_sym_COLON2,
  [12561] = 2,
    ACTIONS(204), 1,
      sym_comment,
    ACTIONS(1660), 1,
      anon_sym_COLON2,
  [12568] = 2,
    ACTIONS(1662), 1,
      anon_sym_LF,
    ACTIONS(1664), 1,
      sym_comment,
  [12575] = 2,
    ACTIONS(1518), 1,
      anon_sym_LF,
    ACTIONS(1520), 1,
      sym_comment,
  [12582] = 2,
    ACTIONS(1514), 1,
      anon_sym_LF,
    ACTIONS(1666), 1,
      sym_comment,
  [12589] = 2,
    ACTIONS(1550), 1,
      anon_sym_LF,
    ACTIONS(1554), 1,
      sym_comment,
  [12596] = 2,
    ACTIONS(1668), 1,
      anon_sym_LF,
    ACTIONS(1670), 1,
      sym_comment,
  [12603] = 2,
    ACTIONS(1672), 1,
      anon_sym_LF,
    ACTIONS(1674), 1,
      sym_comment,
  [12610] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1676), 1,
      anon_sym_LF,
  [12617] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1678), 1,
      anon_sym_LF,
  [12624] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1680), 1,
      aux_sym_oneline_string_text_token2,
  [12631] = 2,
    ACTIONS(1682), 1,
      anon_sym_LF,
    ACTIONS(1684), 1,
      sym_comment,
  [12638] = 2,
    ACTIONS(1686), 1,
      anon_sym_LF,
    ACTIONS(1688), 1,
      sym_comment,
  [12645] = 2,
    ACTIONS(1690), 1,
      anon_sym_LF,
    ACTIONS(1692), 1,
      sym_comment,
  [12652] = 2,
    ACTIONS(1368), 1,
      anon_sym_LF,
    ACTIONS(1694), 1,
      sym_comment,
  [12659] = 2,
    ACTIONS(1696), 1,
      anon_sym_LF,
    ACTIONS(1698), 1,
      sym_comment,
  [12666] = 2,
    ACTIONS(1506), 1,
      anon_sym_LF,
    ACTIONS(1508), 1,
      sym_comment,
  [12673] = 2,
    ACTIONS(1498), 1,
      anon_sym_LF,
    ACTIONS(1500), 1,
      sym_comment,
  [12680] = 2,
    ACTIONS(204), 1,
      sym_comment,
    ACTIONS(1700), 1,
      ts_builtin_sym_end,
  [12687] = 2,
    ACTIONS(1494), 1,
      anon_sym_LF,
    ACTIONS(1496), 1,
      sym_comment,
  [12694] = 2,
    ACTIONS(1702), 1,
      anon_sym_LF,
    ACTIONS(1704), 1,
      sym_comment,
  [12701] = 2,
    ACTIONS(204), 1,
      sym_comment,
    ACTIONS(1706), 1,
      anon_sym_SEMI,
  [12708] = 2,
    ACTIONS(204), 1,
      sym_comment,
    ACTIONS(1708), 1,
      anon_sym_QMARK_GT,
  [12715] = 2,
    ACTIONS(1486), 1,
      anon_sym_LF,
    ACTIONS(1488), 1,
      sym_comment,
  [12722] = 2,
    ACTIONS(1710), 1,
      anon_sym_LF,
    ACTIONS(1712), 1,
      sym_comment,
  [12729] = 2,
    ACTIONS(1714), 1,
      anon_sym_LF,
    ACTIONS(1716), 1,
      sym_comment,
  [12736] = 2,
    ACTIONS(204), 1,
      sym_comment,
    ACTIONS(1718), 1,
      anon_sym_GT,
  [12743] = 2,
    ACTIONS(1482), 1,
      anon_sym_LF,
    ACTIONS(1484), 1,
      sym_comment,
  [12750] = 2,
    ACTIONS(204), 1,
      sym_comment,
    ACTIONS(1720), 1,
      anon_sym_RBRACE_RBRACE,
  [12757] = 2,
    ACTIONS(204), 1,
      sym_comment,
    ACTIONS(1722), 1,
      anon_sym_SEMI,
  [12764] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1724), 1,
      aux_sym_key_string_escaped_char_token1,
  [12771] = 2,
    ACTIONS(1726), 1,
      anon_sym_LF,
    ACTIONS(1728), 1,
      sym_comment,
  [12778] = 2,
    ACTIONS(1439), 1,
      anon_sym_LF,
    ACTIONS(1730), 1,
      sym_comment,
  [12785] = 2,
    ACTIONS(1732), 1,
      anon_sym_LF,
    ACTIONS(1734), 1,
      sym_comment,
  [12792] = 2,
    ACTIONS(1736), 1,
      anon_sym_LF,
    ACTIONS(1738), 1,
      sym_comment,
  [12799] = 2,
    ACTIONS(204), 1,
      sym_comment,
    ACTIONS(1740), 1,
      sym_hexdigit,
  [12806] = 2,
    ACTIONS(1435), 1,
      anon_sym_LF,
    ACTIONS(1742), 1,
      sym_comment,
  [12813] = 2,
    ACTIONS(204), 1,
      sym_comment,
    ACTIONS(1744), 1,
      anon_sym_GT,
  [12820] = 2,
    ACTIONS(204), 1,
      sym_comment,
    ACTIONS(1746), 1,
      anon_sym_QMARK_GT,
  [12827] = 2,
    ACTIONS(1277), 1,
      sym_comment,
    ACTIONS(1279), 1,
      anon_sym_LF,
  [12834] = 2,
    ACTIONS(1459), 1,
      anon_sym_LF,
    ACTIONS(1461), 1,
      sym_comment,
  [12841] = 2,
    ACTIONS(1748), 1,
      anon_sym_LF,
    ACTIONS(1750), 1,
      sym_comment,
  [12848] = 2,
    ACTIONS(1752), 1,
      anon_sym_LF,
    ACTIONS(1754), 1,
      sym_comment,
  [12855] = 2,
    ACTIONS(204), 1,
      sym_comment,
    ACTIONS(1756), 1,
      anon_sym_SEMI,
  [12862] = 2,
    ACTIONS(204), 1,
      sym_comment,
    ACTIONS(1758), 1,
      anon_sym_RBRACE,
  [12869] = 2,
    ACTIONS(1760), 1,
      anon_sym_LF,
    ACTIONS(1762), 1,
      sym_comment,
  [12876] = 2,
    ACTIONS(1476), 1,
      anon_sym_LF,
    ACTIONS(1764), 1,
      sym_comment,
  [12883] = 2,
    ACTIONS(204), 1,
      sym_comment,
    ACTIONS(1766), 1,
      sym_hexdigit,
  [12890] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1768), 1,
      aux_sym_key_string_escaped_char_token1,
  [12897] = 2,
    ACTIONS(204), 1,
      sym_comment,
    ACTIONS(1770), 1,
      anon_sym_GT,
  [12904] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1772), 1,
      aux_sym_regex_escaped_char_token1,
  [12911] = 2,
    ACTIONS(204), 1,
      sym_comment,
    ACTIONS(1774), 1,
      anon_sym_SLASH,
  [12918] = 2,
    ACTIONS(204), 1,
      sym_comment,
    ACTIONS(1776), 1,
      anon_sym_SLASH,
  [12925] = 2,
    ACTIONS(1778), 1,
      anon_sym_LF,
    ACTIONS(1780), 1,
      sym_comment,
  [12932] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1782), 1,
      aux_sym_oneline_base64_token1,
  [12939] = 2,
    ACTIONS(1784), 1,
      anon_sym_LF,
    ACTIONS(1786), 1,
      sym_comment,
  [12946] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1788), 1,
      aux_sym_xml_prolog_tag_token1,
  [12953] = 2,
    ACTIONS(1790), 1,
      anon_sym_LF,
    ACTIONS(1792), 1,
      sym_comment,
  [12960] = 2,
    ACTIONS(204), 1,
      sym_comment,
    ACTIONS(1794), 1,
      anon_sym_RBRACE,
  [12967] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1796), 1,
      aux_sym_xml_open_tag_token1,
  [12974] = 2,
    ACTIONS(204), 1,
      sym_comment,
    ACTIONS(1798), 1,
      anon_sym_RBRACE_RBRACE,
  [12981] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1800), 1,
      aux_sym_key_string_escaped_char_token1,
  [12988] = 2,
    ACTIONS(204), 1,
      sym_comment,
    ACTIONS(1802), 1,
      anon_sym_RBRACE,
  [12995] = 2,
    ACTIONS(204), 1,
      sym_comment,
    ACTIONS(1804), 1,
      anon_sym_RBRACE_RBRACE,
  [13002] = 2,
    ACTIONS(204), 1,
      sym_comment,
    ACTIONS(1806), 1,
      anon_sym_RBRACE,
  [13009] = 2,
    ACTIONS(204), 1,
      sym_comment,
    ACTIONS(1808), 1,
      anon_sym_RBRACE_RBRACE,
  [13016] = 2,
    ACTIONS(204), 1,
      sym_comment,
    ACTIONS(1810), 1,
      anon_sym_RBRACE,
  [13023] = 2,
    ACTIONS(204), 1,
      sym_comment,
    ACTIONS(1812), 1,
      anon_sym_RBRACE_RBRACE,
  [13030] = 2,
    ACTIONS(204), 1,
      sym_comment,
    ACTIONS(1814), 1,
      anon_sym_RBRACE_RBRACE,
  [13037] = 2,
    ACTIONS(204), 1,
      sym_comment,
    ACTIONS(1816), 1,
      anon_sym_RBRACE_RBRACE,
  [13044] = 2,
    ACTIONS(204), 1,
      sym_comment,
    ACTIONS(1818), 1,
      anon_sym_RBRACE_RBRACE,
  [13051] = 2,
    ACTIONS(204), 1,
      sym_comment,
    ACTIONS(1820), 1,
      anon_sym_RBRACE_RBRACE,
  [13058] = 2,
    ACTIONS(204), 1,
      sym_comment,
    ACTIONS(1822), 1,
      anon_sym_RBRACE_RBRACE,
  [13065] = 2,
    ACTIONS(204), 1,
      sym_comment,
    ACTIONS(1824), 1,
      anon_sym_RBRACE_RBRACE,
  [13072] = 2,
    ACTIONS(204), 1,
      sym_comment,
    ACTIONS(1826), 1,
      sym_hexdigit,
  [13079] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1828), 1,
      aux_sym_xml_prolog_tag_token1,
  [13086] = 2,
    ACTIONS(1830), 1,
      anon_sym_LF,
    ACTIONS(1832), 1,
      sym_comment,
  [13093] = 2,
    ACTIONS(1834), 1,
      anon_sym_LF,
    ACTIONS(1836), 1,
      sym_comment,
  [13100] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1838), 1,
      aux_sym_xml_close_tag_token1,
  [13107] = 2,
    ACTIONS(204), 1,
      sym_comment,
    ACTIONS(1840), 1,
      sym_hexdigit,
  [13114] = 2,
    ACTIONS(204), 1,
      sym_comment,
    ACTIONS(1842), 1,
      anon_sym_EQ,
  [13121] = 2,
    ACTIONS(204), 1,
      sym_comment,
    ACTIONS(1844), 1,
      sym_hexdigit,
  [13128] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1846), 1,
      aux_sym_variable_name_token2,
  [13135] = 2,
    ACTIONS(204), 1,
      sym_comment,
    ACTIONS(1848), 1,
      sym_hexdigit,
  [13142] = 2,
    ACTIONS(204), 1,
      sym_comment,
    ACTIONS(1850), 1,
      anon_sym_RBRACE_RBRACE,
  [13149] = 2,
    ACTIONS(204), 1,
      sym_comment,
    ACTIONS(1852), 1,
      sym_hexdigit,
  [13156] = 2,
    ACTIONS(204), 1,
      sym_comment,
    ACTIONS(1854), 1,
      sym_hexdigit,
  [13163] = 2,
    ACTIONS(204), 1,
      sym_comment,
    ACTIONS(1856), 1,
      anon_sym_COLON2,
  [13170] = 2,
    ACTIONS(1858), 1,
      anon_sym_LF,
    ACTIONS(1860), 1,
      sym_comment,
  [13177] = 2,
    ACTIONS(1291), 1,
      sym_comment,
    ACTIONS(1293), 1,
      anon_sym_LF,
  [13184] = 2,
    ACTIONS(1512), 1,
      anon_sym_LF,
    ACTIONS(1862), 1,
      sym_comment,
  [13191] = 2,
    ACTIONS(1510), 1,
      anon_sym_LF,
    ACTIONS(1864), 1,
      sym_comment,
  [13198] = 2,
    ACTIONS(1866), 1,
      anon_sym_LF,
    ACTIONS(1868), 1,
      sym_comment,
  [13205] = 2,
    ACTIONS(204), 1,
      sym_comment,
    ACTIONS(1870), 1,
      sym_hexdigit,
  [13212] = 2,
    ACTIONS(204), 1,
      sym_comment,
    ACTIONS(1872), 1,
      sym_hexdigit,
  [13219] = 2,
    ACTIONS(204), 1,
      sym_comment,
    ACTIONS(1874), 1,
      sym_hexdigit,
  [13226] = 2,
    ACTIONS(204), 1,
      sym_comment,
    ACTIONS(1876), 1,
      sym_hexdigit,
  [13233] = 2,
    ACTIONS(204), 1,
      sym_comment,
    ACTIONS(1878), 1,
      sym_hexdigit,
  [13240] = 2,
    ACTIONS(204), 1,
      sym_comment,
    ACTIONS(1880), 1,
      sym_hexdigit,
  [13247] = 2,
    ACTIONS(204), 1,
      sym_comment,
    ACTIONS(1882), 1,
      sym_hexdigit,
  [13254] = 2,
    ACTIONS(204), 1,
      sym_comment,
    ACTIONS(1884), 1,
      sym_hexdigit,
  [13261] = 2,
    ACTIONS(204), 1,
      sym_comment,
    ACTIONS(1886), 1,
      sym_hexdigit,
  [13268] = 2,
    ACTIONS(204), 1,
      sym_comment,
    ACTIONS(1888), 1,
      sym_hexdigit,
  [13275] = 2,
    ACTIONS(204), 1,
      sym_comment,
    ACTIONS(1890), 1,
      sym_hexdigit,
  [13282] = 2,
    ACTIONS(204), 1,
      sym_comment,
    ACTIONS(1892), 1,
      sym_hexdigit,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(16)] = 0,
  [SMALL_STATE(17)] = 75,
  [SMALL_STATE(18)] = 150,
  [SMALL_STATE(19)] = 218,
  [SMALL_STATE(20)] = 286,
  [SMALL_STATE(21)] = 354,
  [SMALL_STATE(22)] = 422,
  [SMALL_STATE(23)] = 490,
  [SMALL_STATE(24)] = 558,
  [SMALL_STATE(25)] = 626,
  [SMALL_STATE(26)] = 694,
  [SMALL_STATE(27)] = 762,
  [SMALL_STATE(28)] = 830,
  [SMALL_STATE(29)] = 898,
  [SMALL_STATE(30)] = 966,
  [SMALL_STATE(31)] = 1034,
  [SMALL_STATE(32)] = 1102,
  [SMALL_STATE(33)] = 1170,
  [SMALL_STATE(34)] = 1291,
  [SMALL_STATE(35)] = 1412,
  [SMALL_STATE(36)] = 1494,
  [SMALL_STATE(37)] = 1576,
  [SMALL_STATE(38)] = 1658,
  [SMALL_STATE(39)] = 1740,
  [SMALL_STATE(40)] = 1824,
  [SMALL_STATE(41)] = 1908,
  [SMALL_STATE(42)] = 1986,
  [SMALL_STATE(43)] = 2064,
  [SMALL_STATE(44)] = 2142,
  [SMALL_STATE(45)] = 2220,
  [SMALL_STATE(46)] = 2298,
  [SMALL_STATE(47)] = 2376,
  [SMALL_STATE(48)] = 2454,
  [SMALL_STATE(49)] = 2532,
  [SMALL_STATE(50)] = 2610,
  [SMALL_STATE(51)] = 2694,
  [SMALL_STATE(52)] = 2773,
  [SMALL_STATE(53)] = 2841,
  [SMALL_STATE(54)] = 2907,
  [SMALL_STATE(55)] = 2985,
  [SMALL_STATE(56)] = 3051,
  [SMALL_STATE(57)] = 3115,
  [SMALL_STATE(58)] = 3179,
  [SMALL_STATE(59)] = 3236,
  [SMALL_STATE(60)] = 3298,
  [SMALL_STATE(61)] = 3360,
  [SMALL_STATE(62)] = 3415,
  [SMALL_STATE(63)] = 3470,
  [SMALL_STATE(64)] = 3525,
  [SMALL_STATE(65)] = 3580,
  [SMALL_STATE(66)] = 3636,
  [SMALL_STATE(67)] = 3692,
  [SMALL_STATE(68)] = 3748,
  [SMALL_STATE(69)] = 3804,
  [SMALL_STATE(70)] = 3859,
  [SMALL_STATE(71)] = 3914,
  [SMALL_STATE(72)] = 3983,
  [SMALL_STATE(73)] = 4038,
  [SMALL_STATE(74)] = 4093,
  [SMALL_STATE(75)] = 4148,
  [SMALL_STATE(76)] = 4203,
  [SMALL_STATE(77)] = 4257,
  [SMALL_STATE(78)] = 4311,
  [SMALL_STATE(79)] = 4377,
  [SMALL_STATE(80)] = 4443,
  [SMALL_STATE(81)] = 4497,
  [SMALL_STATE(82)] = 4551,
  [SMALL_STATE(83)] = 4617,
  [SMALL_STATE(84)] = 4671,
  [SMALL_STATE(85)] = 4725,
  [SMALL_STATE(86)] = 4779,
  [SMALL_STATE(87)] = 4852,
  [SMALL_STATE(88)] = 4906,
  [SMALL_STATE(89)] = 4957,
  [SMALL_STATE(90)] = 5008,
  [SMALL_STATE(91)] = 5052,
  [SMALL_STATE(92)] = 5096,
  [SMALL_STATE(93)] = 5140,
  [SMALL_STATE(94)] = 5182,
  [SMALL_STATE(95)] = 5231,
  [SMALL_STATE(96)] = 5280,
  [SMALL_STATE(97)] = 5332,
  [SMALL_STATE(98)] = 5384,
  [SMALL_STATE(99)] = 5430,
  [SMALL_STATE(100)] = 5476,
  [SMALL_STATE(101)] = 5507,
  [SMALL_STATE(102)] = 5538,
  [SMALL_STATE(103)] = 5569,
  [SMALL_STATE(104)] = 5600,
  [SMALL_STATE(105)] = 5631,
  [SMALL_STATE(106)] = 5677,
  [SMALL_STATE(107)] = 5723,
  [SMALL_STATE(108)] = 5765,
  [SMALL_STATE(109)] = 5811,
  [SMALL_STATE(110)] = 5853,
  [SMALL_STATE(111)] = 5892,
  [SMALL_STATE(112)] = 5924,
  [SMALL_STATE(113)] = 5956,
  [SMALL_STATE(114)] = 5992,
  [SMALL_STATE(115)] = 6027,
  [SMALL_STATE(116)] = 6062,
  [SMALL_STATE(117)] = 6095,
  [SMALL_STATE(118)] = 6146,
  [SMALL_STATE(119)] = 6197,
  [SMALL_STATE(120)] = 6248,
  [SMALL_STATE(121)] = 6298,
  [SMALL_STATE(122)] = 6346,
  [SMALL_STATE(123)] = 6388,
  [SMALL_STATE(124)] = 6413,
  [SMALL_STATE(125)] = 6438,
  [SMALL_STATE(126)] = 6463,
  [SMALL_STATE(127)] = 6492,
  [SMALL_STATE(128)] = 6517,
  [SMALL_STATE(129)] = 6564,
  [SMALL_STATE(130)] = 6611,
  [SMALL_STATE(131)] = 6640,
  [SMALL_STATE(132)] = 6687,
  [SMALL_STATE(133)] = 6734,
  [SMALL_STATE(134)] = 6759,
  [SMALL_STATE(135)] = 6784,
  [SMALL_STATE(136)] = 6809,
  [SMALL_STATE(137)] = 6833,
  [SMALL_STATE(138)] = 6877,
  [SMALL_STATE(139)] = 6900,
  [SMALL_STATE(140)] = 6923,
  [SMALL_STATE(141)] = 6946,
  [SMALL_STATE(142)] = 6969,
  [SMALL_STATE(143)] = 6992,
  [SMALL_STATE(144)] = 7015,
  [SMALL_STATE(145)] = 7038,
  [SMALL_STATE(146)] = 7061,
  [SMALL_STATE(147)] = 7084,
  [SMALL_STATE(148)] = 7107,
  [SMALL_STATE(149)] = 7130,
  [SMALL_STATE(150)] = 7153,
  [SMALL_STATE(151)] = 7176,
  [SMALL_STATE(152)] = 7219,
  [SMALL_STATE(153)] = 7242,
  [SMALL_STATE(154)] = 7285,
  [SMALL_STATE(155)] = 7328,
  [SMALL_STATE(156)] = 7351,
  [SMALL_STATE(157)] = 7394,
  [SMALL_STATE(158)] = 7417,
  [SMALL_STATE(159)] = 7440,
  [SMALL_STATE(160)] = 7484,
  [SMALL_STATE(161)] = 7521,
  [SMALL_STATE(162)] = 7561,
  [SMALL_STATE(163)] = 7601,
  [SMALL_STATE(164)] = 7641,
  [SMALL_STATE(165)] = 7668,
  [SMALL_STATE(166)] = 7699,
  [SMALL_STATE(167)] = 7731,
  [SMALL_STATE(168)] = 7763,
  [SMALL_STATE(169)] = 7792,
  [SMALL_STATE(170)] = 7819,
  [SMALL_STATE(171)] = 7848,
  [SMALL_STATE(172)] = 7877,
  [SMALL_STATE(173)] = 7906,
  [SMALL_STATE(174)] = 7935,
  [SMALL_STATE(175)] = 7962,
  [SMALL_STATE(176)] = 7991,
  [SMALL_STATE(177)] = 8017,
  [SMALL_STATE(178)] = 8045,
  [SMALL_STATE(179)] = 8071,
  [SMALL_STATE(180)] = 8097,
  [SMALL_STATE(181)] = 8123,
  [SMALL_STATE(182)] = 8149,
  [SMALL_STATE(183)] = 8175,
  [SMALL_STATE(184)] = 8201,
  [SMALL_STATE(185)] = 8227,
  [SMALL_STATE(186)] = 8255,
  [SMALL_STATE(187)] = 8283,
  [SMALL_STATE(188)] = 8311,
  [SMALL_STATE(189)] = 8337,
  [SMALL_STATE(190)] = 8365,
  [SMALL_STATE(191)] = 8393,
  [SMALL_STATE(192)] = 8419,
  [SMALL_STATE(193)] = 8444,
  [SMALL_STATE(194)] = 8469,
  [SMALL_STATE(195)] = 8494,
  [SMALL_STATE(196)] = 8513,
  [SMALL_STATE(197)] = 8538,
  [SMALL_STATE(198)] = 8563,
  [SMALL_STATE(199)] = 8586,
  [SMALL_STATE(200)] = 8609,
  [SMALL_STATE(201)] = 8634,
  [SMALL_STATE(202)] = 8658,
  [SMALL_STATE(203)] = 8676,
  [SMALL_STATE(204)] = 8700,
  [SMALL_STATE(205)] = 8720,
  [SMALL_STATE(206)] = 8740,
  [SMALL_STATE(207)] = 8758,
  [SMALL_STATE(208)] = 8774,
  [SMALL_STATE(209)] = 8798,
  [SMALL_STATE(210)] = 8816,
  [SMALL_STATE(211)] = 8836,
  [SMALL_STATE(212)] = 8858,
  [SMALL_STATE(213)] = 8874,
  [SMALL_STATE(214)] = 8892,
  [SMALL_STATE(215)] = 8914,
  [SMALL_STATE(216)] = 8938,
  [SMALL_STATE(217)] = 8962,
  [SMALL_STATE(218)] = 8986,
  [SMALL_STATE(219)] = 9011,
  [SMALL_STATE(220)] = 9036,
  [SMALL_STATE(221)] = 9055,
  [SMALL_STATE(222)] = 9072,
  [SMALL_STATE(223)] = 9093,
  [SMALL_STATE(224)] = 9114,
  [SMALL_STATE(225)] = 9133,
  [SMALL_STATE(226)] = 9152,
  [SMALL_STATE(227)] = 9169,
  [SMALL_STATE(228)] = 9186,
  [SMALL_STATE(229)] = 9207,
  [SMALL_STATE(230)] = 9226,
  [SMALL_STATE(231)] = 9247,
  [SMALL_STATE(232)] = 9264,
  [SMALL_STATE(233)] = 9278,
  [SMALL_STATE(234)] = 9294,
  [SMALL_STATE(235)] = 9314,
  [SMALL_STATE(236)] = 9332,
  [SMALL_STATE(237)] = 9346,
  [SMALL_STATE(238)] = 9360,
  [SMALL_STATE(239)] = 9378,
  [SMALL_STATE(240)] = 9398,
  [SMALL_STATE(241)] = 9412,
  [SMALL_STATE(242)] = 9426,
  [SMALL_STATE(243)] = 9442,
  [SMALL_STATE(244)] = 9462,
  [SMALL_STATE(245)] = 9476,
  [SMALL_STATE(246)] = 9496,
  [SMALL_STATE(247)] = 9510,
  [SMALL_STATE(248)] = 9524,
  [SMALL_STATE(249)] = 9542,
  [SMALL_STATE(250)] = 9562,
  [SMALL_STATE(251)] = 9578,
  [SMALL_STATE(252)] = 9592,
  [SMALL_STATE(253)] = 9610,
  [SMALL_STATE(254)] = 9628,
  [SMALL_STATE(255)] = 9644,
  [SMALL_STATE(256)] = 9658,
  [SMALL_STATE(257)] = 9672,
  [SMALL_STATE(258)] = 9684,
  [SMALL_STATE(259)] = 9704,
  [SMALL_STATE(260)] = 9724,
  [SMALL_STATE(261)] = 9744,
  [SMALL_STATE(262)] = 9758,
  [SMALL_STATE(263)] = 9771,
  [SMALL_STATE(264)] = 9784,
  [SMALL_STATE(265)] = 9799,
  [SMALL_STATE(266)] = 9814,
  [SMALL_STATE(267)] = 9829,
  [SMALL_STATE(268)] = 9844,
  [SMALL_STATE(269)] = 9859,
  [SMALL_STATE(270)] = 9876,
  [SMALL_STATE(271)] = 9891,
  [SMALL_STATE(272)] = 9904,
  [SMALL_STATE(273)] = 9917,
  [SMALL_STATE(274)] = 9932,
  [SMALL_STATE(275)] = 9947,
  [SMALL_STATE(276)] = 9964,
  [SMALL_STATE(277)] = 9975,
  [SMALL_STATE(278)] = 9988,
  [SMALL_STATE(279)] = 10001,
  [SMALL_STATE(280)] = 10016,
  [SMALL_STATE(281)] = 10029,
  [SMALL_STATE(282)] = 10044,
  [SMALL_STATE(283)] = 10058,
  [SMALL_STATE(284)] = 10072,
  [SMALL_STATE(285)] = 10082,
  [SMALL_STATE(286)] = 10098,
  [SMALL_STATE(287)] = 10114,
  [SMALL_STATE(288)] = 10122,
  [SMALL_STATE(289)] = 10138,
  [SMALL_STATE(290)] = 10154,
  [SMALL_STATE(291)] = 10170,
  [SMALL_STATE(292)] = 10186,
  [SMALL_STATE(293)] = 10202,
  [SMALL_STATE(294)] = 10218,
  [SMALL_STATE(295)] = 10230,
  [SMALL_STATE(296)] = 10244,
  [SMALL_STATE(297)] = 10254,
  [SMALL_STATE(298)] = 10264,
  [SMALL_STATE(299)] = 10278,
  [SMALL_STATE(300)] = 10292,
  [SMALL_STATE(301)] = 10306,
  [SMALL_STATE(302)] = 10316,
  [SMALL_STATE(303)] = 10328,
  [SMALL_STATE(304)] = 10342,
  [SMALL_STATE(305)] = 10354,
  [SMALL_STATE(306)] = 10366,
  [SMALL_STATE(307)] = 10378,
  [SMALL_STATE(308)] = 10388,
  [SMALL_STATE(309)] = 10398,
  [SMALL_STATE(310)] = 10410,
  [SMALL_STATE(311)] = 10424,
  [SMALL_STATE(312)] = 10438,
  [SMALL_STATE(313)] = 10454,
  [SMALL_STATE(314)] = 10464,
  [SMALL_STATE(315)] = 10474,
  [SMALL_STATE(316)] = 10484,
  [SMALL_STATE(317)] = 10494,
  [SMALL_STATE(318)] = 10508,
  [SMALL_STATE(319)] = 10522,
  [SMALL_STATE(320)] = 10534,
  [SMALL_STATE(321)] = 10546,
  [SMALL_STATE(322)] = 10558,
  [SMALL_STATE(323)] = 10568,
  [SMALL_STATE(324)] = 10578,
  [SMALL_STATE(325)] = 10588,
  [SMALL_STATE(326)] = 10596,
  [SMALL_STATE(327)] = 10610,
  [SMALL_STATE(328)] = 10624,
  [SMALL_STATE(329)] = 10640,
  [SMALL_STATE(330)] = 10650,
  [SMALL_STATE(331)] = 10666,
  [SMALL_STATE(332)] = 10682,
  [SMALL_STATE(333)] = 10692,
  [SMALL_STATE(334)] = 10706,
  [SMALL_STATE(335)] = 10720,
  [SMALL_STATE(336)] = 10730,
  [SMALL_STATE(337)] = 10746,
  [SMALL_STATE(338)] = 10760,
  [SMALL_STATE(339)] = 10774,
  [SMALL_STATE(340)] = 10784,
  [SMALL_STATE(341)] = 10800,
  [SMALL_STATE(342)] = 10816,
  [SMALL_STATE(343)] = 10829,
  [SMALL_STATE(344)] = 10838,
  [SMALL_STATE(345)] = 10851,
  [SMALL_STATE(346)] = 10860,
  [SMALL_STATE(347)] = 10873,
  [SMALL_STATE(348)] = 10886,
  [SMALL_STATE(349)] = 10899,
  [SMALL_STATE(350)] = 10912,
  [SMALL_STATE(351)] = 10925,
  [SMALL_STATE(352)] = 10938,
  [SMALL_STATE(353)] = 10951,
  [SMALL_STATE(354)] = 10962,
  [SMALL_STATE(355)] = 10973,
  [SMALL_STATE(356)] = 10986,
  [SMALL_STATE(357)] = 10995,
  [SMALL_STATE(358)] = 11006,
  [SMALL_STATE(359)] = 11019,
  [SMALL_STATE(360)] = 11032,
  [SMALL_STATE(361)] = 11043,
  [SMALL_STATE(362)] = 11056,
  [SMALL_STATE(363)] = 11069,
  [SMALL_STATE(364)] = 11082,
  [SMALL_STATE(365)] = 11095,
  [SMALL_STATE(366)] = 11108,
  [SMALL_STATE(367)] = 11121,
  [SMALL_STATE(368)] = 11132,
  [SMALL_STATE(369)] = 11143,
  [SMALL_STATE(370)] = 11156,
  [SMALL_STATE(371)] = 11169,
  [SMALL_STATE(372)] = 11180,
  [SMALL_STATE(373)] = 11193,
  [SMALL_STATE(374)] = 11206,
  [SMALL_STATE(375)] = 11219,
  [SMALL_STATE(376)] = 11232,
  [SMALL_STATE(377)] = 11245,
  [SMALL_STATE(378)] = 11258,
  [SMALL_STATE(379)] = 11271,
  [SMALL_STATE(380)] = 11284,
  [SMALL_STATE(381)] = 11297,
  [SMALL_STATE(382)] = 11308,
  [SMALL_STATE(383)] = 11317,
  [SMALL_STATE(384)] = 11330,
  [SMALL_STATE(385)] = 11343,
  [SMALL_STATE(386)] = 11356,
  [SMALL_STATE(387)] = 11369,
  [SMALL_STATE(388)] = 11382,
  [SMALL_STATE(389)] = 11395,
  [SMALL_STATE(390)] = 11404,
  [SMALL_STATE(391)] = 11417,
  [SMALL_STATE(392)] = 11428,
  [SMALL_STATE(393)] = 11441,
  [SMALL_STATE(394)] = 11454,
  [SMALL_STATE(395)] = 11467,
  [SMALL_STATE(396)] = 11480,
  [SMALL_STATE(397)] = 11493,
  [SMALL_STATE(398)] = 11502,
  [SMALL_STATE(399)] = 11515,
  [SMALL_STATE(400)] = 11528,
  [SMALL_STATE(401)] = 11541,
  [SMALL_STATE(402)] = 11554,
  [SMALL_STATE(403)] = 11567,
  [SMALL_STATE(404)] = 11580,
  [SMALL_STATE(405)] = 11593,
  [SMALL_STATE(406)] = 11606,
  [SMALL_STATE(407)] = 11619,
  [SMALL_STATE(408)] = 11632,
  [SMALL_STATE(409)] = 11645,
  [SMALL_STATE(410)] = 11654,
  [SMALL_STATE(411)] = 11663,
  [SMALL_STATE(412)] = 11676,
  [SMALL_STATE(413)] = 11689,
  [SMALL_STATE(414)] = 11702,
  [SMALL_STATE(415)] = 11711,
  [SMALL_STATE(416)] = 11724,
  [SMALL_STATE(417)] = 11737,
  [SMALL_STATE(418)] = 11750,
  [SMALL_STATE(419)] = 11763,
  [SMALL_STATE(420)] = 11774,
  [SMALL_STATE(421)] = 11787,
  [SMALL_STATE(422)] = 11800,
  [SMALL_STATE(423)] = 11813,
  [SMALL_STATE(424)] = 11826,
  [SMALL_STATE(425)] = 11839,
  [SMALL_STATE(426)] = 11852,
  [SMALL_STATE(427)] = 11865,
  [SMALL_STATE(428)] = 11878,
  [SMALL_STATE(429)] = 11891,
  [SMALL_STATE(430)] = 11904,
  [SMALL_STATE(431)] = 11917,
  [SMALL_STATE(432)] = 11926,
  [SMALL_STATE(433)] = 11935,
  [SMALL_STATE(434)] = 11948,
  [SMALL_STATE(435)] = 11961,
  [SMALL_STATE(436)] = 11971,
  [SMALL_STATE(437)] = 11981,
  [SMALL_STATE(438)] = 11989,
  [SMALL_STATE(439)] = 11999,
  [SMALL_STATE(440)] = 12009,
  [SMALL_STATE(441)] = 12019,
  [SMALL_STATE(442)] = 12029,
  [SMALL_STATE(443)] = 12039,
  [SMALL_STATE(444)] = 12047,
  [SMALL_STATE(445)] = 12057,
  [SMALL_STATE(446)] = 12065,
  [SMALL_STATE(447)] = 12075,
  [SMALL_STATE(448)] = 12083,
  [SMALL_STATE(449)] = 12093,
  [SMALL_STATE(450)] = 12103,
  [SMALL_STATE(451)] = 12113,
  [SMALL_STATE(452)] = 12123,
  [SMALL_STATE(453)] = 12133,
  [SMALL_STATE(454)] = 12143,
  [SMALL_STATE(455)] = 12153,
  [SMALL_STATE(456)] = 12163,
  [SMALL_STATE(457)] = 12173,
  [SMALL_STATE(458)] = 12183,
  [SMALL_STATE(459)] = 12193,
  [SMALL_STATE(460)] = 12203,
  [SMALL_STATE(461)] = 12213,
  [SMALL_STATE(462)] = 12223,
  [SMALL_STATE(463)] = 12233,
  [SMALL_STATE(464)] = 12243,
  [SMALL_STATE(465)] = 12253,
  [SMALL_STATE(466)] = 12263,
  [SMALL_STATE(467)] = 12273,
  [SMALL_STATE(468)] = 12283,
  [SMALL_STATE(469)] = 12293,
  [SMALL_STATE(470)] = 12303,
  [SMALL_STATE(471)] = 12313,
  [SMALL_STATE(472)] = 12323,
  [SMALL_STATE(473)] = 12330,
  [SMALL_STATE(474)] = 12337,
  [SMALL_STATE(475)] = 12344,
  [SMALL_STATE(476)] = 12351,
  [SMALL_STATE(477)] = 12358,
  [SMALL_STATE(478)] = 12365,
  [SMALL_STATE(479)] = 12372,
  [SMALL_STATE(480)] = 12379,
  [SMALL_STATE(481)] = 12386,
  [SMALL_STATE(482)] = 12393,
  [SMALL_STATE(483)] = 12400,
  [SMALL_STATE(484)] = 12407,
  [SMALL_STATE(485)] = 12414,
  [SMALL_STATE(486)] = 12421,
  [SMALL_STATE(487)] = 12428,
  [SMALL_STATE(488)] = 12435,
  [SMALL_STATE(489)] = 12442,
  [SMALL_STATE(490)] = 12449,
  [SMALL_STATE(491)] = 12456,
  [SMALL_STATE(492)] = 12463,
  [SMALL_STATE(493)] = 12470,
  [SMALL_STATE(494)] = 12477,
  [SMALL_STATE(495)] = 12484,
  [SMALL_STATE(496)] = 12491,
  [SMALL_STATE(497)] = 12498,
  [SMALL_STATE(498)] = 12505,
  [SMALL_STATE(499)] = 12512,
  [SMALL_STATE(500)] = 12519,
  [SMALL_STATE(501)] = 12526,
  [SMALL_STATE(502)] = 12533,
  [SMALL_STATE(503)] = 12540,
  [SMALL_STATE(504)] = 12547,
  [SMALL_STATE(505)] = 12554,
  [SMALL_STATE(506)] = 12561,
  [SMALL_STATE(507)] = 12568,
  [SMALL_STATE(508)] = 12575,
  [SMALL_STATE(509)] = 12582,
  [SMALL_STATE(510)] = 12589,
  [SMALL_STATE(511)] = 12596,
  [SMALL_STATE(512)] = 12603,
  [SMALL_STATE(513)] = 12610,
  [SMALL_STATE(514)] = 12617,
  [SMALL_STATE(515)] = 12624,
  [SMALL_STATE(516)] = 12631,
  [SMALL_STATE(517)] = 12638,
  [SMALL_STATE(518)] = 12645,
  [SMALL_STATE(519)] = 12652,
  [SMALL_STATE(520)] = 12659,
  [SMALL_STATE(521)] = 12666,
  [SMALL_STATE(522)] = 12673,
  [SMALL_STATE(523)] = 12680,
  [SMALL_STATE(524)] = 12687,
  [SMALL_STATE(525)] = 12694,
  [SMALL_STATE(526)] = 12701,
  [SMALL_STATE(527)] = 12708,
  [SMALL_STATE(528)] = 12715,
  [SMALL_STATE(529)] = 12722,
  [SMALL_STATE(530)] = 12729,
  [SMALL_STATE(531)] = 12736,
  [SMALL_STATE(532)] = 12743,
  [SMALL_STATE(533)] = 12750,
  [SMALL_STATE(534)] = 12757,
  [SMALL_STATE(535)] = 12764,
  [SMALL_STATE(536)] = 12771,
  [SMALL_STATE(537)] = 12778,
  [SMALL_STATE(538)] = 12785,
  [SMALL_STATE(539)] = 12792,
  [SMALL_STATE(540)] = 12799,
  [SMALL_STATE(541)] = 12806,
  [SMALL_STATE(542)] = 12813,
  [SMALL_STATE(543)] = 12820,
  [SMALL_STATE(544)] = 12827,
  [SMALL_STATE(545)] = 12834,
  [SMALL_STATE(546)] = 12841,
  [SMALL_STATE(547)] = 12848,
  [SMALL_STATE(548)] = 12855,
  [SMALL_STATE(549)] = 12862,
  [SMALL_STATE(550)] = 12869,
  [SMALL_STATE(551)] = 12876,
  [SMALL_STATE(552)] = 12883,
  [SMALL_STATE(553)] = 12890,
  [SMALL_STATE(554)] = 12897,
  [SMALL_STATE(555)] = 12904,
  [SMALL_STATE(556)] = 12911,
  [SMALL_STATE(557)] = 12918,
  [SMALL_STATE(558)] = 12925,
  [SMALL_STATE(559)] = 12932,
  [SMALL_STATE(560)] = 12939,
  [SMALL_STATE(561)] = 12946,
  [SMALL_STATE(562)] = 12953,
  [SMALL_STATE(563)] = 12960,
  [SMALL_STATE(564)] = 12967,
  [SMALL_STATE(565)] = 12974,
  [SMALL_STATE(566)] = 12981,
  [SMALL_STATE(567)] = 12988,
  [SMALL_STATE(568)] = 12995,
  [SMALL_STATE(569)] = 13002,
  [SMALL_STATE(570)] = 13009,
  [SMALL_STATE(571)] = 13016,
  [SMALL_STATE(572)] = 13023,
  [SMALL_STATE(573)] = 13030,
  [SMALL_STATE(574)] = 13037,
  [SMALL_STATE(575)] = 13044,
  [SMALL_STATE(576)] = 13051,
  [SMALL_STATE(577)] = 13058,
  [SMALL_STATE(578)] = 13065,
  [SMALL_STATE(579)] = 13072,
  [SMALL_STATE(580)] = 13079,
  [SMALL_STATE(581)] = 13086,
  [SMALL_STATE(582)] = 13093,
  [SMALL_STATE(583)] = 13100,
  [SMALL_STATE(584)] = 13107,
  [SMALL_STATE(585)] = 13114,
  [SMALL_STATE(586)] = 13121,
  [SMALL_STATE(587)] = 13128,
  [SMALL_STATE(588)] = 13135,
  [SMALL_STATE(589)] = 13142,
  [SMALL_STATE(590)] = 13149,
  [SMALL_STATE(591)] = 13156,
  [SMALL_STATE(592)] = 13163,
  [SMALL_STATE(593)] = 13170,
  [SMALL_STATE(594)] = 13177,
  [SMALL_STATE(595)] = 13184,
  [SMALL_STATE(596)] = 13191,
  [SMALL_STATE(597)] = 13198,
  [SMALL_STATE(598)] = 13205,
  [SMALL_STATE(599)] = 13212,
  [SMALL_STATE(600)] = 13219,
  [SMALL_STATE(601)] = 13226,
  [SMALL_STATE(602)] = 13233,
  [SMALL_STATE(603)] = 13240,
  [SMALL_STATE(604)] = 13247,
  [SMALL_STATE(605)] = 13254,
  [SMALL_STATE(606)] = 13261,
  [SMALL_STATE(607)] = 13268,
  [SMALL_STATE(608)] = 13275,
  [SMALL_STATE(609)] = 13282,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hurl_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(314),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 2, 0, 0),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [17] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 2, 0, 0),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(403),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(405),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(406),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(408),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(413),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(416),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(487),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(564),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(561),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(559),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(363),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(231),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(553),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(202),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(219),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(475),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 3, 0, 0),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 3, 0, 0),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 4, 0, 0),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 4, 0, 0),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 5, 0, 0),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 5, 0, 0),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_options_section, 2, 0, 0),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_options_section, 2, 0, 0),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(476),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(477),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(504),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(481),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(482),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(483),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(484),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(472),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(488),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(489),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(490),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(493),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(494),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_options_section_repeat1, 2, 0, 0),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_options_section_repeat1, 2, 0, 0),
  [111] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_options_section_repeat1, 2, 0, 0), SHIFT_REPEAT(476),
  [114] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_options_section_repeat1, 2, 0, 0), SHIFT_REPEAT(477),
  [117] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_options_section_repeat1, 2, 0, 0), SHIFT_REPEAT(504),
  [120] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_options_section_repeat1, 2, 0, 0), SHIFT_REPEAT(481),
  [123] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_options_section_repeat1, 2, 0, 0), SHIFT_REPEAT(482),
  [126] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_options_section_repeat1, 2, 0, 0), SHIFT_REPEAT(483),
  [129] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_options_section_repeat1, 2, 0, 0), SHIFT_REPEAT(484),
  [132] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_options_section_repeat1, 2, 0, 0), SHIFT_REPEAT(472),
  [135] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_options_section_repeat1, 2, 0, 0), SHIFT_REPEAT(488),
  [138] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_options_section_repeat1, 2, 0, 0), SHIFT_REPEAT(489),
  [141] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_options_section_repeat1, 2, 0, 0), SHIFT_REPEAT(490),
  [144] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_options_section_repeat1, 2, 0, 0), SHIFT_REPEAT(493),
  [147] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_options_section_repeat1, 2, 0, 0), SHIFT_REPEAT(494),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_options_section, 3, 0, 0),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_options_section, 3, 0, 0),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response, 4, 0, 0),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_response, 4, 0, 0),
  [158] = {.entry = {.count = 1, .reusable = false}}, SHIFT(422),
  [160] = {.entry = {.count = 1, .reusable = false}}, SHIFT(421),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response, 3, 0, 0),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_response, 3, 0, 0),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(465),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [170] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(560),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [178] = {.entry = {.count = 1, .reusable = false}}, SHIFT(249),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [182] = {.entry = {.count = 1, .reusable = false}}, SHIFT(243),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(462),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(457),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__comment_or_new_line_repeat1, 2, 0, 0),
  [208] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__comment_or_new_line_repeat1, 2, 0, 0), SHIFT_REPEAT(16),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__comment_or_new_line_repeat1, 2, 0, 0),
  [213] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__comment_or_new_line_repeat1, 2, 0, 0), SHIFT_REPEAT(16),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__comment_or_new_line, 1, 0, 0),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__comment_or_new_line, 1, 0, 0),
  [222] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ca_certificate_option, 4, 0, 0),
  [226] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ca_certificate_option, 4, 0, 0),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_proxy_option, 4, 0, 0),
  [230] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_proxy_option, 4, 0, 0),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path_as_is_option, 4, 0, 0),
  [234] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path_as_is_option, 4, 0, 0),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_max_redirs_option, 4, 0, 0),
  [238] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_max_redirs_option, 4, 0, 0),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insecure_option, 4, 0, 0),
  [242] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_insecure_option, 4, 0, 0),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_follow_redirect_option, 4, 0, 0),
  [246] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_follow_redirect_option, 4, 0, 0),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compressed_option, 4, 0, 0),
  [250] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_compressed_option, 4, 0, 0),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_retry_option, 4, 0, 0),
  [254] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_retry_option, 4, 0, 0),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_retry_interval_option, 4, 0, 0),
  [258] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_retry_interval_option, 4, 0, 0),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_retry_max_count_option, 4, 0, 0),
  [262] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_retry_max_count_option, 4, 0, 0),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ca_certificate_option, 3, 0, 0),
  [266] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ca_certificate_option, 3, 0, 0),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option, 1, 0, 0),
  [270] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_option, 1, 0, 0),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_option, 4, 0, 0),
  [274] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_option, 4, 0, 0),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_verbose_option, 4, 0, 0),
  [278] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_verbose_option, 4, 0, 0),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_very_verbose_option, 4, 0, 0),
  [282] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_very_verbose_option, 4, 0, 0),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response, 5, 0, 0),
  [286] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_response, 5, 0, 0),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multipart_form_data_section, 3, 0, 0),
  [290] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multipart_form_data_section, 3, 0, 0),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multipart_form_data_section, 4, 0, 0),
  [296] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multipart_form_data_section, 4, 0, 0),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_request_repeat1, 2, 0, 0),
  [300] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_request_repeat1, 2, 0, 0),
  [302] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat1, 2, 0, 0), SHIFT_REPEAT(231),
  [305] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_request_repeat1, 2, 0, 0), SHIFT_REPEAT(553),
  [308] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_request_repeat1, 2, 0, 0), SHIFT_REPEAT(425),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multipart_form_data_section, 5, 0, 0),
  [313] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multipart_form_data_section, 5, 0, 0),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_asserts_section, 2, 0, 0),
  [317] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_asserts_section, 2, 0, 0),
  [319] = {.entry = {.count = 1, .reusable = false}}, SHIFT(438),
  [321] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [323] = {.entry = {.count = 1, .reusable = false}}, SHIFT(455),
  [325] = {.entry = {.count = 1, .reusable = false}}, SHIFT(441),
  [327] = {.entry = {.count = 1, .reusable = false}}, SHIFT(442),
  [329] = {.entry = {.count = 1, .reusable = false}}, SHIFT(448),
  [331] = {.entry = {.count = 1, .reusable = false}}, SHIFT(311),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_asserts_section_repeat1, 2, 0, 0),
  [335] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_asserts_section_repeat1, 2, 0, 0),
  [337] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_asserts_section_repeat1, 2, 0, 0), SHIFT_REPEAT(438),
  [340] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_asserts_section_repeat1, 2, 0, 0), SHIFT_REPEAT(85),
  [343] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_asserts_section_repeat1, 2, 0, 0), SHIFT_REPEAT(455),
  [346] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_asserts_section_repeat1, 2, 0, 0), SHIFT_REPEAT(441),
  [349] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_asserts_section_repeat1, 2, 0, 0), SHIFT_REPEAT(442),
  [352] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_asserts_section_repeat1, 2, 0, 0), SHIFT_REPEAT(448),
  [355] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_asserts_section_repeat1, 2, 0, 0), SHIFT_REPEAT(311),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cookies_section, 4, 0, 0),
  [360] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cookies_section, 4, 0, 0),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_form_params_section, 4, 0, 0),
  [364] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_form_params_section, 4, 0, 0),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_string_params_section, 4, 0, 0),
  [368] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query_string_params_section, 4, 0, 0),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_string_params_section, 3, 0, 0),
  [372] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query_string_params_section, 3, 0, 0),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_form_params_section, 3, 0, 0),
  [376] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_form_params_section, 3, 0, 0),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cookies_section, 5, 0, 0),
  [380] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cookies_section, 5, 0, 0),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_string_params_section, 5, 0, 0),
  [384] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query_string_params_section, 5, 0, 0),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cookies_section, 3, 0, 0),
  [388] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cookies_section, 3, 0, 0),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_form_params_section, 5, 0, 0),
  [392] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_form_params_section, 5, 0, 0),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_asserts_section, 3, 0, 0),
  [396] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_asserts_section, 3, 0, 0),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_request_repeat2, 2, 0, 0),
  [400] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_request_repeat2, 2, 0, 0),
  [402] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat2, 2, 0, 0), SHIFT_REPEAT(403),
  [405] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat2, 2, 0, 0), SHIFT_REPEAT(405),
  [408] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat2, 2, 0, 0), SHIFT_REPEAT(406),
  [411] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat2, 2, 0, 0), SHIFT_REPEAT(408),
  [414] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat2, 2, 0, 0), SHIFT_REPEAT(413),
  [417] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat2, 2, 0, 0), SHIFT_REPEAT(416),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_hurl_file_repeat2, 2, 0, 0),
  [422] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_hurl_file_repeat2, 2, 0, 0), SHIFT_REPEAT(57),
  [425] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_hurl_file_repeat2, 2, 0, 0),
  [427] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_hurl_file_repeat2, 2, 0, 0), SHIFT_REPEAT(57),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer, 1, 0, 0),
  [432] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer, 1, 0, 0),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [436] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_capture_repeat1, 2, 0, 0), SHIFT_REPEAT(465),
  [439] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_capture_repeat1, 2, 0, 0), SHIFT_REPEAT(283),
  [442] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_capture_repeat1, 2, 0, 0),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_capture_repeat1, 2, 0, 0),
  [446] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_capture_repeat1, 2, 0, 0), SHIFT_REPEAT(74),
  [449] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_capture_repeat1, 2, 0, 0), SHIFT_REPEAT(370),
  [452] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_capture_repeat1, 2, 0, 0), SHIFT_REPEAT(334),
  [455] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_capture_repeat1, 2, 0, 0), SHIFT_REPEAT(457),
  [458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_integer_repeat1, 2, 0, 0),
  [460] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_integer_repeat1, 2, 0, 0),
  [462] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_integer_repeat1, 2, 0, 0), SHIFT_REPEAT(55),
  [465] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__comment_or_new_line_repeat1, 2, 0, 0), SHIFT_REPEAT(56),
  [468] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__comment_or_new_line_repeat1, 2, 0, 0), SHIFT_REPEAT(56),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [473] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 2, 0, 0),
  [477] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 2, 0, 0),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [481] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [483] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__comment_or_new_line_repeat1, 2, 0, 0), SHIFT_REPEAT(60),
  [486] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__comment_or_new_line_repeat1, 2, 0, 0), SHIFT_REPEAT(60),
  [489] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_basic_auth_section, 4, 0, 0),
  [491] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_basic_auth_section, 4, 0, 0),
  [493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assert, 3, 0, 0),
  [495] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assert, 3, 0, 0),
  [497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assert, 4, 0, 0),
  [499] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assert, 4, 0, 0),
  [501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request_section, 1, 0, 0),
  [503] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request_section, 1, 0, 0),
  [505] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regex, 3, 0, 0),
  [507] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_regex, 3, 0, 0),
  [509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_string, 2, 0, 0),
  [511] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_string, 2, 0, 0),
  [513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regex, 2, 0, 0),
  [515] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_regex, 2, 0, 0),
  [517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_string, 3, 0, 0),
  [519] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_string, 3, 0, 0),
  [521] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regex_filter, 2, 0, 0),
  [523] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_regex_filter, 2, 0, 0),
  [525] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_replace_filter, 3, 0, 0),
  [527] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_replace_filter, 3, 0, 0),
  [529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xpath_filter, 2, 0, 0),
  [531] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xpath_filter, 2, 0, 0),
  [533] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nth_filter, 2, 0, 0),
  [535] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nth_filter, 2, 0, 0),
  [537] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filter, 1, 0, 0),
  [539] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_filter, 1, 0, 0),
  [541] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_split_filter, 2, 0, 0),
  [543] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_split_filter, 2, 0, 0),
  [545] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regex_query, 2, 0, 0),
  [547] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_regex_query, 2, 0, 0),
  [549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_query, 2, 0, 0),
  [551] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_query, 2, 0, 0),
  [553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_captures_section, 2, 0, 0),
  [555] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_captures_section, 2, 0, 0),
  [557] = {.entry = {.count = 1, .reusable = false}}, SHIFT(247),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(535),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [563] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_captures_section, 3, 0, 0),
  [565] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_captures_section, 3, 0, 0),
  [567] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_query, 2, 0, 0),
  [569] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header_query, 2, 0, 0),
  [571] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xpath_query, 2, 0, 0),
  [573] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xpath_query, 2, 0, 0),
  [575] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_captures_section_repeat1, 2, 0, 0),
  [577] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_captures_section_repeat1, 2, 0, 0),
  [579] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_captures_section_repeat1, 2, 0, 0), SHIFT_REPEAT(247),
  [582] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_captures_section_repeat1, 2, 0, 0), SHIFT_REPEAT(535),
  [585] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_captures_section_repeat1, 2, 0, 0), SHIFT_REPEAT(378),
  [588] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cookie_query, 2, 0, 0),
  [590] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cookie_query, 2, 0, 0),
  [592] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jsonpath_query, 2, 0, 0),
  [594] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_jsonpath_query, 2, 0, 0),
  [596] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query, 1, 0, 0),
  [598] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query, 1, 0, 0),
  [600] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_response_repeat1, 2, 0, 0),
  [602] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_response_repeat1, 2, 0, 0),
  [604] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_response_repeat1, 2, 0, 0), SHIFT_REPEAT(422),
  [607] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_response_repeat1, 2, 0, 0), SHIFT_REPEAT(421),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [612] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [614] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__comment_or_new_line_repeat1, 2, 0, 0), SHIFT_REPEAT(89),
  [617] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__comment_or_new_line_repeat1, 2, 0, 0), SHIFT_REPEAT(89),
  [620] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_capture, 4, 0, 0),
  [622] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_capture, 4, 0, 0),
  [624] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_capture, 5, 0, 0),
  [626] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_capture, 5, 0, 0),
  [628] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response_section, 1, 0, 0),
  [630] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_response_section, 1, 0, 0),
  [632] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entry, 2, 0, 0),
  [634] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_entry, 2, 0, 0),
  [636] = {.entry = {.count = 1, .reusable = false}}, SHIFT(437),
  [638] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entry, 1, 0, 0),
  [640] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_entry, 1, 0, 0),
  [642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [644] = {.entry = {.count = 1, .reusable = false}}, SHIFT(440),
  [646] = {.entry = {.count = 1, .reusable = false}}, SHIFT(327),
  [648] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [650] = {.entry = {.count = 1, .reusable = false}}, SHIFT(420),
  [652] = {.entry = {.count = 1, .reusable = false}}, SHIFT(337),
  [654] = {.entry = {.count = 1, .reusable = false}}, SHIFT(456),
  [656] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [658] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_hurl_file_repeat1, 2, 0, 0),
  [660] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_hurl_file_repeat1, 2, 0, 0), SHIFT_REPEAT(130),
  [663] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_hurl_file_repeat1, 2, 0, 0), SHIFT_REPEAT(314),
  [666] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_hurl_file_repeat1, 2, 0, 0), SHIFT_REPEAT(130),
  [669] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hurl_file, 1, 0, 0),
  [671] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 6, 0, 0),
  [673] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 6, 0, 0),
  [675] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 2, 0, 0),
  [677] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_body, 2, 0, 0),
  [679] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_capture_repeat1, 2, 0, 0), SHIFT_REPEAT(440),
  [682] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_capture_repeat1, 2, 0, 0), SHIFT_REPEAT(327),
  [685] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_capture_repeat1, 2, 0, 0), SHIFT_REPEAT(138),
  [688] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_capture_repeat1, 2, 0, 0), SHIFT_REPEAT(420),
  [691] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_capture_repeat1, 2, 0, 0), SHIFT_REPEAT(337),
  [694] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_capture_repeat1, 2, 0, 0), SHIFT_REPEAT(456),
  [697] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 1, 0, 0),
  [699] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 2, 0, 0),
  [701] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hurl_file, 2, 0, 0),
  [703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [705] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [707] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [709] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_integer_repeat1, 2, 0, 0), SHIFT_REPEAT(112),
  [712] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_hurl_file_repeat2, 2, 0, 0), SHIFT_REPEAT(59),
  [715] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_hurl_file_repeat2, 2, 0, 0), SHIFT_REPEAT(59),
  [718] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entry, 3, 0, 0),
  [720] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_entry, 3, 0, 0),
  [722] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_hurl_file_repeat2, 2, 0, 0), SHIFT_REPEAT(130),
  [725] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_hurl_file_repeat2, 2, 0, 0), SHIFT_REPEAT(130),
  [728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(532),
  [730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(559),
  [734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(475),
  [742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [744] = {.entry = {.count = 1, .reusable = false}}, SHIFT(508),
  [746] = {.entry = {.count = 1, .reusable = false}}, SHIFT(232),
  [748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(566),
  [750] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_key_value, 2, 0, 0),
  [752] = {.entry = {.count = 1, .reusable = false}}, SHIFT(545),
  [754] = {.entry = {.count = 1, .reusable = false}}, SHIFT(209),
  [756] = {.entry = {.count = 1, .reusable = false}}, SHIFT(281),
  [758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(466),
  [762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(467),
  [766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(468),
  [768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(469),
  [770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(470),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [774] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response, 6, 0, 0),
  [776] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_response, 6, 0, 0),
  [778] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__comment_or_new_line_repeat1, 2, 0, 0), SHIFT_REPEAT(126),
  [781] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__comment_or_new_line_repeat1, 2, 0, 0), SHIFT_REPEAT(126),
  [784] = {.entry = {.count = 1, .reusable = false}}, SHIFT(580),
  [786] = {.entry = {.count = 1, .reusable = false}}, SHIFT(498),
  [788] = {.entry = {.count = 1, .reusable = false}}, SHIFT(213),
  [790] = {.entry = {.count = 1, .reusable = false}}, SHIFT(224),
  [792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(428),
  [794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [796] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [798] = {.entry = {.count = 1, .reusable = false}}, SHIFT(583),
  [800] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entry, 4, 0, 0),
  [802] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_entry, 4, 0, 0),
  [804] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_name, 2, 0, 0),
  [806] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_xml_tag_repeat1, 2, 0, 0), SHIFT_REPEAT(564),
  [809] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_xml_tag_repeat1, 2, 0, 0), SHIFT_REPEAT(580),
  [812] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_xml_tag_repeat1, 2, 0, 0),
  [814] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_xml_tag_repeat1, 2, 0, 0), SHIFT_REPEAT(213),
  [817] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_xml_tag_repeat1, 2, 0, 0), SHIFT_REPEAT(224),
  [820] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_xml_tag_repeat1, 2, 0, 0), SHIFT_REPEAT(428),
  [823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(431),
  [825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [827] = {.entry = {.count = 1, .reusable = false}}, SHIFT(218),
  [829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [841] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_string, 1, 0, 0),
  [843] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_string, 1, 0, 0),
  [845] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_value_string_repeat1, 2, 0, 0),
  [847] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_string_repeat1, 2, 0, 0), SHIFT_REPEAT(213),
  [850] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_string_repeat1, 2, 0, 0), SHIFT_REPEAT(224),
  [853] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_value_string_repeat1, 2, 0, 0), SHIFT_REPEAT(428),
  [856] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [858] = {.entry = {.count = 1, .reusable = false}}, SHIFT(381),
  [860] = {.entry = {.count = 1, .reusable = false}}, SHIFT(257),
  [862] = {.entry = {.count = 1, .reusable = false}}, SHIFT(372),
  [864] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_string_repeat1, 2, 0, 0), SHIFT_REPEAT(209),
  [867] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_string_repeat1, 2, 0, 0), SHIFT_REPEAT(281),
  [870] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_value_string_repeat1, 2, 0, 0), SHIFT_REPEAT(387),
  [873] = {.entry = {.count = 1, .reusable = false}}, SHIFT(266),
  [875] = {.entry = {.count = 1, .reusable = false}}, SHIFT(212),
  [877] = {.entry = {.count = 1, .reusable = false}}, SHIFT(597),
  [879] = {.entry = {.count = 1, .reusable = false}}, SHIFT(204),
  [881] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [883] = {.entry = {.count = 1, .reusable = false}}, SHIFT(264),
  [885] = {.entry = {.count = 1, .reusable = false}}, SHIFT(581),
  [887] = {.entry = {.count = 1, .reusable = false}}, SHIFT(279),
  [889] = {.entry = {.count = 1, .reusable = false}}, SHIFT(582),
  [891] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multiline_string_repeat1, 2, 0, 0), SHIFT_REPEAT(206),
  [894] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multiline_string_repeat1, 2, 0, 0), SHIFT_REPEAT(212),
  [897] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_multiline_string_repeat1, 2, 0, 0),
  [899] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multiline_string_repeat1, 2, 0, 0), SHIFT_REPEAT(204),
  [902] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_multiline_string_repeat1, 2, 0, 0), SHIFT_REPEAT(423),
  [905] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_string_content, 1, 0, 0),
  [907] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_string_content, 1, 0, 0),
  [909] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_key_string_repeat1, 2, 0, 0),
  [911] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_key_string_repeat1, 2, 0, 0),
  [913] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_string_repeat1, 2, 0, 0), SHIFT_REPEAT(231),
  [916] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_string_repeat1, 2, 0, 0), SHIFT_REPEAT(553),
  [919] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_string_repeat1, 2, 0, 0), SHIFT_REPEAT(425),
  [922] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_oneline_string_repeat1, 2, 0, 0), SHIFT_REPEAT(242),
  [925] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_oneline_string_repeat1, 2, 0, 0),
  [927] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_oneline_string_repeat1, 2, 0, 0), SHIFT_REPEAT(515),
  [930] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_oneline_string_repeat1, 2, 0, 0), SHIFT_REPEAT(412),
  [933] = {.entry = {.count = 1, .reusable = false}}, SHIFT(242),
  [935] = {.entry = {.count = 1, .reusable = false}}, SHIFT(517),
  [937] = {.entry = {.count = 1, .reusable = false}}, SHIFT(515),
  [939] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [941] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [943] = {.entry = {.count = 1, .reusable = false}}, SHIFT(229),
  [945] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [947] = {.entry = {.count = 1, .reusable = false}}, SHIFT(418),
  [949] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [951] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [953] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_value_string_content_repeat1, 2, 0, 0),
  [955] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_string_content_repeat1, 2, 0, 0), SHIFT_REPEAT(213),
  [958] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_string_content_repeat1, 2, 0, 0), SHIFT_REPEAT(224),
  [961] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_value_string_content_repeat1, 2, 0, 0),
  [963] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [965] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_string, 1, 0, 0),
  [967] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_key_string, 1, 0, 0),
  [969] = {.entry = {.count = 1, .reusable = false}}, SHIFT(538),
  [971] = {.entry = {.count = 1, .reusable = false}}, SHIFT(391),
  [973] = {.entry = {.count = 1, .reusable = false}}, SHIFT(237),
  [975] = {.entry = {.count = 1, .reusable = false}}, SHIFT(394),
  [977] = {.entry = {.count = 1, .reusable = false}}, SHIFT(473),
  [979] = {.entry = {.count = 1, .reusable = false}}, SHIFT(460),
  [981] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_quoted_string_repeat1, 2, 0, 0),
  [983] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_string_repeat1, 2, 0, 0), SHIFT_REPEAT(229),
  [986] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_string_repeat1, 2, 0, 0), SHIFT_REPEAT(195),
  [989] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_string_repeat1, 2, 0, 0), SHIFT_REPEAT(418),
  [992] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_string_repeat1, 2, 0, 0), SHIFT_REPEAT(247),
  [995] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_string_repeat1, 2, 0, 0), SHIFT_REPEAT(535),
  [998] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_string_repeat1, 2, 0, 0), SHIFT_REPEAT(378),
  [1001] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_filename, 1, 0, 0),
  [1003] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [1005] = {.entry = {.count = 1, .reusable = false}}, SHIFT(315),
  [1007] = {.entry = {.count = 1, .reusable = false}}, SHIFT(316),
  [1009] = {.entry = {.count = 1, .reusable = false}}, SHIFT(450),
  [1011] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_filename_repeat1, 2, 0, 0),
  [1013] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_filename_repeat1, 2, 0, 0), SHIFT_REPEAT(391),
  [1016] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_filename_repeat1, 2, 0, 0), SHIFT_REPEAT(237),
  [1019] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_filename_repeat1, 2, 0, 0), SHIFT_REPEAT(394),
  [1022] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_string_repeat1, 2, 0, 0), SHIFT_REPEAT(232),
  [1025] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_string_repeat1, 2, 0, 0), SHIFT_REPEAT(566),
  [1028] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_string_repeat1, 2, 0, 0), SHIFT_REPEAT(355),
  [1031] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_filename_repeat1, 2, 0, 0), SHIFT_REPEAT(381),
  [1034] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_filename_repeat1, 2, 0, 0), SHIFT_REPEAT(257),
  [1037] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_filename_repeat1, 2, 0, 0), SHIFT_REPEAT(372),
  [1040] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [1042] = {.entry = {.count = 1, .reusable = false}}, SHIFT(501),
  [1044] = {.entry = {.count = 1, .reusable = false}}, SHIFT(207),
  [1046] = {.entry = {.count = 1, .reusable = false}}, SHIFT(320),
  [1048] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [1050] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [1052] = {.entry = {.count = 1, .reusable = false}}, SHIFT(514),
  [1054] = {.entry = {.count = 1, .reusable = false}}, SHIFT(519),
  [1056] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__multiline_string_text, 1, 0, 0),
  [1058] = {.entry = {.count = 1, .reusable = false}}, SHIFT(210),
  [1060] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multiline_string_text, 1, 0, 0),
  [1062] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__multiline_string_text_repeat1, 2, 0, 0),
  [1064] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__multiline_string_text_repeat1, 2, 0, 0), SHIFT_REPEAT(205),
  [1067] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__multiline_string_text_repeat1, 2, 0, 0),
  [1069] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline_string_content, 1, 0, 0),
  [1071] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_string_content, 1, 0, 0),
  [1073] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [1075] = {.entry = {.count = 1, .reusable = true}}, SHIFT(500),
  [1077] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_json_string_repeat1, 2, 0, 0),
  [1079] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_string_repeat1, 2, 0, 0), SHIFT_REPEAT(207),
  [1082] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_string_repeat1, 2, 0, 0), SHIFT_REPEAT(320),
  [1085] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_json_string_repeat1, 2, 0, 0), SHIFT_REPEAT(396),
  [1088] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [1090] = {.entry = {.count = 1, .reusable = true}}, SHIFT(461),
  [1092] = {.entry = {.count = 1, .reusable = false}}, SHIFT(332),
  [1094] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__multiline_string_text, 2, 0, 0),
  [1096] = {.entry = {.count = 1, .reusable = false}}, SHIFT(205),
  [1098] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multiline_string_text, 2, 0, 0),
  [1100] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_string_content_repeat1, 2, 0, 0), SHIFT_REPEAT(209),
  [1103] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_string_content_repeat1, 2, 0, 0), SHIFT_REPEAT(281),
  [1106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [1108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [1110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [1112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(452),
  [1114] = {.entry = {.count = 1, .reusable = false}}, SHIFT(244),
  [1116] = {.entry = {.count = 1, .reusable = false}}, SHIFT(297),
  [1118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(284),
  [1120] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multiline_string_content_repeat1, 2, 0, 0), SHIFT_REPEAT(217),
  [1123] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multiline_string_content_repeat1, 2, 0, 0), SHIFT_REPEAT(212),
  [1126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_multiline_string_content_repeat1, 2, 0, 0),
  [1128] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multiline_string_content_repeat1, 2, 0, 0), SHIFT_REPEAT(204),
  [1131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_multiline_string_content_repeat1, 2, 0, 0),
  [1133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [1135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [1137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(509),
  [1139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_quoted_string_content_repeat1, 2, 0, 0),
  [1141] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_string_content_repeat1, 2, 0, 0), SHIFT_REPEAT(220),
  [1144] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_string_content_repeat1, 2, 0, 0), SHIFT_REPEAT(195),
  [1147] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_integer_repeat1, 2, 0, 0), SHIFT_REPEAT(221),
  [1150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_number, 1, 0, 0),
  [1152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [1154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [1156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(435),
  [1158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [1160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_string_text, 1, 0, 0),
  [1162] = {.entry = {.count = 1, .reusable = false}}, SHIFT(225),
  [1164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_string_text, 1, 0, 0),
  [1166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_value_string_text_repeat1, 2, 0, 0),
  [1168] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_string_text_repeat1, 2, 0, 0), SHIFT_REPEAT(225),
  [1171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_value_string_text_repeat1, 2, 0, 0),
  [1173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [1175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneline_string_content, 1, 0, 0),
  [1177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneline_string_content, 1, 0, 0),
  [1179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_key_string_content_repeat1, 2, 0, 0),
  [1181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_key_string_content_repeat1, 2, 0, 0),
  [1183] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_string_content_repeat1, 2, 0, 0), SHIFT_REPEAT(228),
  [1186] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_string_content_repeat1, 2, 0, 0), SHIFT_REPEAT(553),
  [1189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_string_content, 1, 0, 0),
  [1191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(220),
  [1193] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_oneline_string_content_repeat1, 2, 0, 0), SHIFT_REPEAT(242),
  [1196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_oneline_string_content_repeat1, 2, 0, 0),
  [1198] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_oneline_string_content_repeat1, 2, 0, 0), SHIFT_REPEAT(515),
  [1201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_oneline_string_content_repeat1, 2, 0, 0),
  [1203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_string_content, 1, 0, 0),
  [1205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_key_string_content, 1, 0, 0),
  [1207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fraction, 2, 0, 0),
  [1209] = {.entry = {.count = 1, .reusable = false}}, SHIFT(555),
  [1211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [1213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(269),
  [1215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_filename_content_repeat1, 2, 0, 0),
  [1217] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_filename_content_repeat1, 2, 0, 0), SHIFT_REPEAT(391),
  [1220] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_filename_content_repeat1, 2, 0, 0), SHIFT_REPEAT(235),
  [1223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xml_open_tag, 3, 0, 0),
  [1225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xml_open_tag, 3, 0, 0),
  [1227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_filename_content, 1, 0, 0),
  [1229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_template, 3, 0, 0),
  [1231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template, 3, 0, 0),
  [1233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_string_escaped_char, 3, 0, 0),
  [1235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_string_escaped_char, 3, 0, 0),
  [1237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [1239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
  [1241] = {.entry = {.count = 1, .reusable = false}}, SHIFT(305),
  [1243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_string_escaped_char, 2, 0, 0),
  [1245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_string_escaped_char, 2, 0, 0),
  [1247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unicode_char, 6, 0, 0),
  [1249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unicode_char, 6, 0, 0),
  [1251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xml_tag, 2, 0, 0),
  [1253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xml_tag, 2, 0, 0),
  [1255] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_string_content_repeat1, 2, 0, 0), SHIFT_REPEAT(252),
  [1258] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_string_content_repeat1, 2, 0, 0), SHIFT_REPEAT(566),
  [1261] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_string_content_repeat1, 2, 0, 0), SHIFT_REPEAT(253),
  [1264] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_string_content_repeat1, 2, 0, 0), SHIFT_REPEAT(535),
  [1267] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_filename_content_repeat1, 2, 0, 0), SHIFT_REPEAT(381),
  [1270] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_filename_content_repeat1, 2, 0, 0), SHIFT_REPEAT(254),
  [1273] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xml_prolog_tag, 3, 0, 0),
  [1275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xml_prolog_tag, 3, 0, 0),
  [1277] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xml_tag, 3, 0, 0),
  [1279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xml_tag, 3, 0, 0),
  [1281] = {.entry = {.count = 1, .reusable = false}}, SHIFT(454),
  [1283] = {.entry = {.count = 1, .reusable = false}}, SHIFT(303),
  [1285] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_number, 1, 0, 0),
  [1287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(561),
  [1289] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [1291] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xml_close_tag, 3, 0, 0),
  [1293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xml_close_tag, 3, 0, 0),
  [1295] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline_string_escaped_char, 3, 0, 0),
  [1297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_string_escaped_char, 3, 0, 0),
  [1299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_value, 1, 0, 0),
  [1301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_key_string_repeat1, 1, 0, 0),
  [1303] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_value, 1, 0, 0),
  [1305] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_multiline_string_content_repeat1, 1, 0, 0),
  [1307] = {.entry = {.count = 1, .reusable = false}}, SHIFT(539),
  [1309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_multiline_string_content_repeat1, 1, 0, 0),
  [1311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_number, 2, 0, 0),
  [1313] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_string_text_repeat1, 2, 0, 0), SHIFT_REPEAT(268),
  [1316] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_regex_content, 1, 0, 0),
  [1318] = {.entry = {.count = 1, .reusable = false}}, SHIFT(275),
  [1320] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fraction, 2, 0, 0),
  [1322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_string_escaped_char, 2, 0, 0),
  [1324] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_key_string_escaped_char, 2, 0, 0),
  [1326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [1328] = {.entry = {.count = 1, .reusable = false}}, SHIFT(274),
  [1330] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__comment_or_new_line_repeat1, 2, 0, 0), SHIFT_REPEAT(274),
  [1333] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__comment_or_new_line_repeat1, 2, 0, 0), SHIFT_REPEAT(274),
  [1336] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_regex_content_repeat1, 2, 0, 0), SHIFT_REPEAT(555),
  [1339] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_regex_content_repeat1, 2, 0, 0),
  [1341] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_regex_content_repeat1, 2, 0, 0), SHIFT_REPEAT(275),
  [1344] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline_string_escaped_char, 2, 0, 0),
  [1346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_string_escaped_char, 2, 0, 0),
  [1348] = {.entry = {.count = 1, .reusable = false}}, SHIFT(268),
  [1350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exponent, 2, 0, 0),
  [1352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [1354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [1356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_string, 3, 0, 0),
  [1358] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_filename_escaped_char, 2, 0, 0),
  [1360] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneline_string_escaped_char, 3, 0, 0),
  [1362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneline_string_escaped_char, 3, 0, 0),
  [1364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [1366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(458),
  [1368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_string, 2, 0, 0),
  [1370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exponent, 3, 0, 0),
  [1372] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_xml_repeat1, 2, 0, 0),
  [1374] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_xml_repeat1, 2, 0, 0), SHIFT_REPEAT(561),
  [1377] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_number, 2, 0, 0),
  [1379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [1381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(459),
  [1383] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_string_escaped_char, 2, 0, 0),
  [1385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_string_escaped_char, 2, 0, 0),
  [1387] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneline_string_escaped_char, 2, 0, 0),
  [1389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneline_string_escaped_char, 2, 0, 0),
  [1391] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneline_string_text, 2, 0, 0),
  [1393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneline_string_text, 2, 0, 0),
  [1395] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_string_escaped_char, 6, 0, 0),
  [1397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_string_escaped_char, 6, 0, 0),
  [1399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [1401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(451),
  [1403] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_method, 1, 0, 0),
  [1405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method, 1, 0, 0),
  [1407] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_string_escaped_char, 2, 0, 0),
  [1409] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_invalid_quoted_string_escaped_char, 2, 0, 0),
  [1411] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_string_content, 1, 0, 0),
  [1413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_string_content, 1, 0, 0),
  [1415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [1417] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_multipart_form_data_section_repeat1, 2, 0, 0), SHIFT_REPEAT(273),
  [1420] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multipart_form_data_section_repeat1, 2, 0, 0), SHIFT_REPEAT(273),
  [1423] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_string_escaped_char, 3, 0, 0),
  [1425] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_query_string_params_section_repeat1, 2, 0, 0), SHIFT_REPEAT(273),
  [1428] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_string_params_section_repeat1, 2, 0, 0), SHIFT_REPEAT(273),
  [1431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [1433] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_regex_escaped_char, 2, 0, 0),
  [1435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_array, 3, 0, 0),
  [1437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(587),
  [1439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_object, 3, 0, 0),
  [1441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(525),
  [1443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [1445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [1447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [1449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [1451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(546),
  [1453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [1455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [1457] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_exponent, 2, 0, 0),
  [1459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_value, 3, 0, 0),
  [1461] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_key_value, 3, 0, 0),
  [1463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [1465] = {.entry = {.count = 1, .reusable = false}}, SHIFT(287),
  [1467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(595),
  [1469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_json_object_repeat1, 2, 0, 0),
  [1471] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_json_object_repeat1, 2, 0, 0), SHIFT_REPEAT(312),
  [1474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(596),
  [1476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_number, 3, 0, 0),
  [1478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [1480] = {.entry = {.count = 1, .reusable = false}}, SHIFT(301),
  [1482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_predicate_value, 1, 0, 0),
  [1484] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_predicate_value, 1, 0, 0),
  [1486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_greater_predicate, 2, 0, 0),
  [1488] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_greater_predicate, 2, 0, 0),
  [1490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(499),
  [1492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(430),
  [1494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_greater_or_equal_predicate, 2, 0, 0),
  [1496] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_greater_or_equal_predicate, 2, 0, 0),
  [1498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_less_predicate, 2, 0, 0),
  [1500] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_less_predicate, 2, 0, 0),
  [1502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [1504] = {.entry = {.count = 1, .reusable = false}}, SHIFT(273),
  [1506] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_less_or_equal_predicate, 2, 0, 0),
  [1508] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_less_or_equal_predicate, 2, 0, 0),
  [1510] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_object, 4, 0, 0),
  [1512] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_array, 4, 0, 0),
  [1514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_object, 2, 0, 0),
  [1516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(537),
  [1518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_value, 1, 0, 0),
  [1520] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_value, 1, 0, 0),
  [1522] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_json_array_repeat1, 2, 0, 0), SHIFT_REPEAT(153),
  [1525] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_json_array_repeat1, 2, 0, 0),
  [1527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(541),
  [1529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_oneline_hex_repeat1, 2, 0, 0),
  [1531] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_oneline_hex_repeat1, 2, 0, 0), SHIFT_REPEAT(430),
  [1534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1, 0, 0),
  [1536] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_exponent, 3, 0, 0),
  [1538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [1540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(608),
  [1542] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version, 1, 0, 0),
  [1544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(606),
  [1546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [1548] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_key_value, 3, 0, 0),
  [1550] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_value, 3, 0, 0),
  [1552] = {.entry = {.count = 1, .reusable = false}}, SHIFT(502),
  [1554] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_file_value, 3, 0, 0),
  [1556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(609),
  [1558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [1560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(607),
  [1562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [1564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [1566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(434),
  [1568] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_value, 2, 0, 0),
  [1570] = {.entry = {.count = 1, .reusable = false}}, SHIFT(510),
  [1572] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_file_value, 2, 0, 0),
  [1574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(478),
  [1576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [1578] = {.entry = {.count = 1, .reusable = false}}, SHIFT(471),
  [1580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [1582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [1584] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneline_string, 3, 0, 0),
  [1586] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneline_string, 3, 0, 0),
  [1588] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multipart_form_data_param, 1, 0, 0),
  [1590] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multipart_form_data_param, 1, 0, 0),
  [1592] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1, 0, 0),
  [1594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [1596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [1598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(485),
  [1600] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bytes, 1, 0, 0),
  [1602] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bytes, 1, 0, 0),
  [1604] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xml, 1, 0, 0),
  [1606] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xml, 1, 0, 0),
  [1608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [1610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [1612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [1614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [1616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(552),
  [1618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [1620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [1622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [1624] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xml, 2, 0, 0),
  [1626] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xml, 2, 0, 0),
  [1628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [1630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [1632] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneline_file, 3, 0, 0),
  [1634] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneline_file, 3, 0, 0),
  [1636] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneline_base64, 3, 0, 0),
  [1638] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneline_base64, 3, 0, 0),
  [1640] = {.entry = {.count = 1, .reusable = false}}, SHIFT(542),
  [1642] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneline_hex, 3, 0, 0),
  [1644] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneline_hex, 3, 0, 0),
  [1646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(503),
  [1648] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_string, 3, 0, 0),
  [1650] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_value, 4, 0, 0),
  [1652] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_file_value, 4, 0, 0),
  [1654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(579),
  [1656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [1658] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_key_string, 1, 0, 1),
  [1660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [1662] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 3, 0, 0),
  [1664] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_definition, 3, 0, 0),
  [1666] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_object, 2, 0, 0),
  [1668] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_predicate, 2, 0, 0),
  [1670] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_include_predicate, 2, 0, 0),
  [1672] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_match_predicate, 2, 0, 0),
  [1674] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_match_predicate, 2, 0, 0),
  [1676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [1678] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_string_type, 1, 0, 0),
  [1680] = {.entry = {.count = 1, .reusable = false}}, SHIFT(306),
  [1682] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contain_predicate, 2, 0, 0),
  [1684] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_contain_predicate, 2, 0, 0),
  [1686] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneline_string, 2, 0, 0),
  [1688] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneline_string, 2, 0, 0),
  [1690] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_end_with_predicate, 2, 0, 0),
  [1692] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_end_with_predicate, 2, 0, 0),
  [1694] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_string, 2, 0, 0),
  [1696] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_with_predicate, 2, 0, 0),
  [1698] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_with_predicate, 2, 0, 0),
  [1700] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1702] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneline_hex, 2, 0, 0),
  [1704] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneline_hex, 2, 0, 0),
  [1706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(496),
  [1708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(453),
  [1710] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_not_equal_predicate, 2, 0, 0),
  [1712] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_not_equal_predicate, 2, 0, 0),
  [1714] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_equal_predicate, 2, 0, 0),
  [1716] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_equal_predicate, 2, 0, 0),
  [1718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [1720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [1722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(495),
  [1724] = {.entry = {.count = 1, .reusable = false}}, SHIFT(296),
  [1726] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_predicate, 2, 0, 0),
  [1728] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_predicate, 2, 0, 0),
  [1730] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_object, 3, 0, 0),
  [1732] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneline_file, 2, 0, 0),
  [1734] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneline_file, 2, 0, 0),
  [1736] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_string, 6, 0, 0),
  [1738] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline_string, 6, 0, 0),
  [1740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [1742] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_array, 3, 0, 0),
  [1744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(594),
  [1746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [1748] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_status, 1, 0, 0),
  [1750] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_status, 1, 0, 0),
  [1752] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_param, 4, 0, 0),
  [1754] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_file_param, 4, 0, 0),
  [1756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(449),
  [1758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [1760] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_predicate, 1, 0, 0),
  [1762] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_predicate, 1, 0, 0),
  [1764] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_number, 3, 0, 0),
  [1766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(591),
  [1768] = {.entry = {.count = 1, .reusable = false}}, SHIFT(271),
  [1770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [1772] = {.entry = {.count = 1, .reusable = false}}, SHIFT(343),
  [1774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [1776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [1778] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_query_string_params_section_repeat1, 2, 0, 0),
  [1780] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_query_string_params_section_repeat1, 2, 0, 0),
  [1782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(526),
  [1784] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_predicate_func, 1, 0, 0),
  [1786] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_predicate_func, 1, 0, 0),
  [1788] = {.entry = {.count = 1, .reusable = false}}, SHIFT(527),
  [1790] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_multipart_form_data_section_repeat1, 2, 0, 0),
  [1792] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_multipart_form_data_section_repeat1, 2, 0, 0),
  [1794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [1796] = {.entry = {.count = 1, .reusable = false}}, SHIFT(531),
  [1798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [1800] = {.entry = {.count = 1, .reusable = false}}, SHIFT(308),
  [1802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [1804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [1806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [1808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [1810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [1812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [1814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [1816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [1818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [1820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [1822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [1824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [1826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(540),
  [1828] = {.entry = {.count = 1, .reusable = false}}, SHIFT(543),
  [1830] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_string, 5, 0, 0),
  [1832] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline_string, 5, 0, 0),
  [1834] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_string, 3, 0, 0),
  [1836] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline_string, 3, 0, 0),
  [1838] = {.entry = {.count = 1, .reusable = false}}, SHIFT(554),
  [1840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(563),
  [1842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [1844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(567),
  [1846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [1848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(569),
  [1850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [1852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(571),
  [1854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(549),
  [1856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [1858] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float, 2, 0, 0),
  [1860] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float, 2, 0, 0),
  [1862] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_array, 4, 0, 0),
  [1864] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_object, 4, 0, 0),
  [1866] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_string, 4, 0, 0),
  [1868] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline_string, 4, 0, 0),
  [1870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(584),
  [1872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(586),
  [1874] = {.entry = {.count = 1, .reusable = true}}, SHIFT(588),
  [1876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(590),
  [1878] = {.entry = {.count = 1, .reusable = true}}, SHIFT(598),
  [1880] = {.entry = {.count = 1, .reusable = true}}, SHIFT(599),
  [1882] = {.entry = {.count = 1, .reusable = true}}, SHIFT(600),
  [1884] = {.entry = {.count = 1, .reusable = true}}, SHIFT(601),
  [1886] = {.entry = {.count = 1, .reusable = true}}, SHIFT(602),
  [1888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(603),
  [1890] = {.entry = {.count = 1, .reusable = true}}, SHIFT(604),
  [1892] = {.entry = {.count = 1, .reusable = true}}, SHIFT(605),
};

#ifdef __cplusplus
extern "C" {
#endif
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
