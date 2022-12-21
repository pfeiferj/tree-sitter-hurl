module.exports = grammar({
  name: "hurl",

  rules: {
    hurl_file: ($) => seq(repeat($.entry), repeat($.lt)),
    entry: ($) => seq($.request, optional($.response)),
    request: ($) =>
      seq(
        repeat($.lt),
        $.method,
        $.sp,
        optional($.value_string),
        $.lt,
        repeat($.header),
        repeat($.request_section),
        optional($.body)
      ),
    response: ($) =>
      seq(
        repeat($.lt),
        $.version,
        $.sp,
        $.status,
        $.lt,
        repeat($.header),
        repeat($.response_section),
        optional($.body)
      ),
    method: ($) =>
      choice(
        "GET",
        "HEAD",
        "POST",
        "PUT",
        "DELETE",
        "CONNECT",
        "OPTIONS",
        "TRACE",
        "PATCH",
        "LINK",
        "UNLINK",
        "PURGE",
        "LOCK",
        "UNLOCK",
        "PROPFIND",
        "VIEW"
      ),
    version: ($) => choice("HTTP/1.0", "HTTP/1.1", "HTTP/2", "HTTP"),
    status: ($) => /[0-9]+/,
    header: ($) => seq(repeat($.lt), $.key_value, $.lt),
    body: ($) => seq(repeat($.lt), $.bytes, $.lt),
    request_section: ($) =>
      choice(
        $.query_string_params_section,
        $.form_params_section,
        $.multipart_form_data_section,
        $.cookies_section,
        $.options_section
      ),
    response_section: ($) => choice($.captures_section, $.asserts_section),
    query_string_params_section: ($) =>
      seq(repeat($.lt), "[QueryStringParams]", $.lt, repeat($.key_value)),
    form_params_section: ($) =>
      seq(repeat($.lt), "[FormParams]", $.lt, repeat($.key_value)),
    multipart_form_data_section: ($) =>
      seq(
        repeat($.lt),
        "[MultipartFormData]",
        $.lt,
        repeat($.multipart_form_data_param)
      ),
    cookies_section: ($) =>
      seq(repeat($.lt), "[Cookies]", $.lt, repeat($.key_value)),
    captures_section: ($) =>
      seq(repeat($.lt), "[Captures]", $.lt, repeat($.capture)),
    asserts_section: ($) =>
      seq(repeat($.lt), "[Asserts]", $.lt, repeat($.assert)),
    options_section: ($) =>
      seq(repeat($.lt), "[Options]", $.lt, repeat($.option)),
    key_value: ($) => seq($.key_string, ":", optional($.value_string)),
    multipart_form_data_param: ($) => choice($.file_param, $.key_value),
    file_param: ($) => seq(repeat($.lt), $.key_string, ":", $.file_value, $.lt),
    file_value: ($) =>
      seq("file,", optional($.filename), ";", optional($.file_contenttype)),
    file_contenttype: ($) => seq(/[a-zA-Z0-9\/+-]+/),
    capture: ($) =>
      seq(
        repeat($.lt),
        $.key_string,
        ":",
        $.query,
        repeat(seq($.sp, $.filter)),
        $.lt
      ),
    assert: ($) =>
      seq(
        repeat($.lt),
        $.query,
        repeat(seq($.sp, $.filter)),
        $.sp,
        $.predicate,
        $.lt
      ),
    option: ($) =>
      seq(
        repeat($.lt),
        choice(
          $.ca_certificate_option,
          $.follow_redirect_option,
          $.insecure_option,
          $.max_redirs_option,
          $.retry_option,
          $.retry_interval_option,
          $.retry_max_count_option,
          $.variable_option,
          $.verbose_option,
          $.very_verbose_option
        )
      ),
    ca_certificate_option: ($) =>
      seq("cacert", ":", optional($.filename), $.lt),
    follow_redirect_option: ($) => seq("location", ":", $.boolean, $.lt),
    insecure_option: ($) => seq("insecure", ":", $.boolean, $.lt),
    max_redirs_option: ($) => seq("max-redirs", ":", $.integer, $.lt),
    retry_option: ($) => seq("retry", ":", $.boolean, $.lt),
    retry_interval_option: ($) => seq("retry-interval", ":", $.integer, $.lt),
    retry_max_count_option: ($) => seq("retry-max-count", ":", $.integer, $.lt),
    variable_option: ($) => seq("variable", ":", $.variable_definition, $.lt),
    verbose_option: ($) => seq("verbose", ":", $.boolean, $.lt),
    very_verbose_option: ($) => seq("very-verbose", ":", $.boolean, $.lt),
    variable_definition: ($) => seq($.variable_name, "=", $.variable_value),
    variable_value: ($) =>
      choice(
        $.null,
        $.boolean,
        $.integer,
        $.float,
        $.key_string,
        $.quoted_string
      ),
    query: ($) =>
      choice(
        $.status_query,
        $.url_query,
        $.header_query,
        $.cookie_query,
        $.body_query,
        $.xpath_query,
        $.jsonpath_query,
        $.regex_query,
        $.variable_query,
        $.duration_query,
        $.bytes_query,
        $.sha256_query,
        $.md5_query
      ),
    status_query: ($) => "status",
    url_query: ($) => "url",
    header_query: ($) => seq("header", $.sp, $.quoted_string),
    cookie_query: ($) => seq("cookie", $.sp, $.quoted_string),
    body_query: ($) => "body",
    xpath_query: ($) => seq("xpath", $.sp, $.quoted_string),
    jsonpath_query: ($) => seq("jsonpath", $.sp, $.quoted_string),
    regex_query: ($) => seq("regex", $.sp, choice($.quoted_string, $.regex)),
    variable_query: ($) => seq("variable", $.sp, $.quoted_string),
    duration_query: ($) => "duration",
    sha256_query: ($) => "sha256",
    md5_query: ($) => "md5",
    bytes_query: ($) => "bytes",
    predicate: ($) => seq(optional(seq("not", $.sp)), $.predicate_func),
    predicate_func: ($) =>
      choice(
        $.equal_predicate,
        $.not_equal_predicate,
        $.greater_predicate,
        $.greater_or_equal_predicate,
        $.less_predicate,
        $.less_or_equal_predicate,
        $.start_with_predicate,
        $.end_with_predicate,
        $.contain_predicate,
        $.match_predicate,
        $.exist_predicate,
        $.include_predicate,
        $.integer_predicate,
        $.float_predicate,
        $.boolean_predicate,
        $.string_predicate,
        $.collection_predicate
      ),
    equal_predicate: ($) =>
      seq(choice("equals", "=="), $.sp, $.predicate_value),
    not_equal_predicate: ($) =>
      seq(choice("notEquals", "!="), $.sp, $.predicate_value),
    greater_predicate: ($) =>
      seq(
        choice("greaterThan", ">"),
        $.sp,
        choice($.integer, $.float, $.quoted_string)
      ),
    greater_or_equal_predicate: ($) =>
      seq(
        choice("greaterThanOrEquals", ">="),
        $.sp,
        repeat($.sp),
        choice($.integer, $.float, $.quoted_string)
      ),
    less_predicate: ($) =>
      seq(
        choice("lessThan", "<"),
        $.sp,
        choice($.integer, $.float, $.quoted_string)
      ),
    less_or_equal_predicate: ($) =>
      seq(
        choice("lessThanOrEquals", "<="),
        $.sp,
        choice($.integer, $.float, $.quoted_string)
      ),
    start_with_predicate: ($) =>
      seq(
        "startsWith",
        $.sp,
        choice($.quoted_string, $.oneline_hex, $.oneline_base64)
      ),
    end_with_predicate: ($) =>
      seq(
        "endsWith",
        $.sp,
        choice($.quoted_string, $.oneline_hex, $.oneline_base64)
      ),
    contain_predicate: ($) => seq("contains", $.sp, $.quoted_string),
    match_predicate: ($) =>
      seq("matches", $.sp, choice($.quoted_string, $.regex)),
    exist_predicate: ($) => "exists",
    include_predicate: ($) => seq("includes", $.sp, $.predicate_value),
    integer_predicate: ($) => "isInteger",
    float_predicate: ($) => "isFloat",
    boolean_predicate: ($) => "isBoolean",
    string_predicate: ($) => "isString",
    collection_predicate: ($) => "isCollection",
    predicate_value: ($) =>
      choice(
        $.null,
        $.boolean,
        $.integer,
        $.float,
        $.quoted_string,
        $.oneline_hex,
        $.oneline_base64,
        $.oneline_file,
        $.multiline_string,
        $.template
      ),
    bytes: ($) =>
      choice(
        $.json_value,
        $.xml,
        $.multiline_string,
        $.oneline_string,
        $.oneline_base64,
        $.oneline_file,
        $.oneline_hex
      ),
    xml: ($) => seq("<", "To,Be,Defined", ">"),
    oneline_base64: ($) => seq("base64,", /[A-Z0-9+-=,\n]+/, ";"),
    oneline_file: ($) => seq("file,", optional($.filename), ";"),
    oneline_hex: ($) => seq("hex,", repeat($.hexdigit), ";"),
    quoted_string: ($) =>
      seq('"', repeat(choice($.quoted_string_content, $.template)), '"'),
    quoted_string_content: ($) =>
      repeat1(choice($.quoted_string_text, $.quoted_string_escaped_char)),
    quoted_string_text: ($) => seq(/[^"\\]+/),
    quoted_string_escaped_char: ($) =>
      seq(
        "\\",
        choice('"', "\\", "\b", "\f", "\n", "\r", "\t", "\\u", $.unicode_char)
      ),
    key_string: ($) => repeat1(choice($.key_string_content, $.template)),
    key_string_content: ($) =>
      repeat1(choice($.key_string_text, $.key_string_escaped_char)),
    key_string_text: ($) =>
      repeat1(choice($._alphanum, "_", "-", ".", "[", "]", "@", "$")),
    key_string_escaped_char: ($) => seq("\\", choice("#", '"')),
    value_string: ($) => repeat1(choice($.value_string_content, $.template)),
    value_string_content: ($) =>
      repeat1(choice($.value_string_text, $.value_string_escaped_char)),
    value_string_text: ($) => prec.right(repeat1(/[^#\n\\]/)),
    value_string_escaped_char: ($) =>
      seq(
        "\\",
        choice("#", "\\", "\b", "\f", "\n", "\r", "\t", "\\u", $.unicode_char)
      ),
    oneline_string: ($) =>
      seq("`", repeat(choice($.oneline_string_content, $.template)), "`"),
    oneline_string_content: ($) =>
      repeat1(choice($.oneline_string_text, $.oneline_string_escaped_char)),
    oneline_string_text: ($) => seq(/[^#\n\\]/, /[^`]/),
    oneline_string_escaped_char: ($) =>
      seq("\\", choice("`", "#", "\\", "b", "f", "u", $.unicode_char)),
    multiline_string: ($) =>
      seq(
        "```",
        optional($.multiline_string_type),
        $.lt,
        repeat(choice($.multiline_string_content, $.template)),
        $.lt,
        "```"
      ),
    multiline_string_type: ($) =>
      choice("base64", "hex", "json", "xml", "graphql"),
    multiline_string_content: ($) =>
      repeat1(choice($.multiline_string_text, $.multiline_string_escaped_char)),
    multiline_string_text: ($) => seq(/~[\\]+/, /~"```"/),
    multiline_string_escaped_char: ($) =>
      seq(
        "\\",
        choice("\\", "b", "f", "n", "r", "t", "`", "u", $.unicode_char)
      ),
    filename: ($) => repeat1(choice($.filename_content, $.template)),
    filename_content: ($) =>
      repeat1(choice($.filename_text, $.filename_escaped_char)),
    filename_text: ($) => /~[#; \n\\]+/,
    filename_escaped_char: ($) => seq("\\", choice(";", "#", /[,]/)),
    unicode_char: ($) => seq("{", repeat1($.hexdigit), "}"),
    json_value: ($) =>
      choice(
        $.template,
        $.json_object,
        $.json_array,
        $.json_string,
        $.json_number,
        $.boolean,
        $.null
      ),
    json_object: ($) =>
      seq("{", $.json_key_value, repeat(seq(",", $.json_key_value)), "}"),
    json_key_value: ($) => seq($.json_key_string, ":", $.json_value),
    json_key_string: ($) => alias($.json_string, 'json_key_string'),
    json_array: ($) =>
      seq("[", $.json_value, repeat(seq(",", $.json_value)), "]"),
    json_string: ($) =>
      seq('"', repeat(choice($.json_string_content, $.template)), '"'),
    json_string_content: ($) =>
      choice($.json_string_text, $.json_string_escaped_char),
    json_string_text: ($) => /[^"\\]/,
    json_string_escaped_char: ($) =>
      seq(
        "\\",
        choice(
          '"',
          "\\",
          "b",
          "f",
          "n",
          "r",
          "t",
          seq(
          "u",
          $.hexdigit,
          $.hexdigit,
          $.hexdigit,
          $.hexdigit
          )
        )
      ),
    json_number: ($) =>
      seq($.integer, optional($.fraction), optional($.exponent)),
    template: ($) => seq("{{", $.expr, "}}"),
    expr: ($) => seq($.variable_name, repeat(seq($.sp, $.filter))),
    variable_name: ($) => seq(/[A-Za-z]/, /[A-Za-z_\-0-9]*/),
    filter: ($) =>
      choice(
        $.regex_filter,
        $.count_filter,
        $.url_encode_filter,
        $.url_decode_filter,
        $.html_encode_filter,
        $.html_decode_filter,
        $.to_int_filter
      ),
    regex_filter: ($) => seq("regex", $.sp, choice($.quoted_string, $.regex)),
    count_filter: ($) => "count",
    url_encode_filter: ($) => "urlEncode",
    url_decode_filter: ($) => "urlDecode",
    html_encode_filter: ($) => "htmlEscape",
    html_decode_filter: ($) => "htmlUnescape",
    to_int_filter: ($) => "toInt",
    boolean: ($) => choice("true", "false"),
    null: ($) => "null",
    _alphanum: ($) => /[A-Za-z0-9]/,
    integer: ($) => repeat1($.digit),
    float: ($) => seq($.integer, $.fraction),
    digit: ($) => /[0-9]/,
    hexdigit: ($) => /[0-9A-Fa-f]/,
    fraction: ($) => seq(".", repeat1($.digit)),
    exponent: ($) =>
      seq(choice("e", "E"), optional(choice("+", "-")), repeat1($.digit)),
    sp: ($) => /[ \t]/,
    lt: ($) =>
      seq(
        repeat($.sp),
        choice(
          seq($.comment, "\n"),
          "\n"
        )
      ),
    comment: ($) => seq("#", repeat(/([^\n])/)),
    regex: ($) => seq("/", optional($.regex_content), "/"),
    regex_content: ($) => repeat1(choice($.regex_text, $.regex_escaped_char)),
    regex_text: ($) => /[^\n\\\/]+/,
    regex_escaped_char: ($) => seq("\\", /[^\n]/),
  },
  conflicts: ($) => [
    [$.entry],
    [$.lt],
    [$.request],
    [$.value_string_content],
    [$.key_string_text, $.json_array],
    [$.key_string_content],
    [$.key_string_text],
    [$.response],
    [$.query_string_params_section],
    [$.form_params_section],
    [$.multipart_form_data_section],
    [$.cookies_section],
    [$.options_section],
    [$.filename_content],
    [$.oneline_string_content],
    [$.multiline_string_content],
    [$.captures_section],
    [$.asserts_section],
    [$.key_value],
    [$.key_value, $.file_param],
    [$.value_string],
    [$.quoted_string_content],
  ],
});
