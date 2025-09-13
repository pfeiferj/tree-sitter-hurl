module.exports = grammar({
  name: "hurl",
  //word: $ => $.word,
  extras: $ => [/[\s\p{Zs}\uFEFF\u2060\u200B]/, $.comment],

  rules: {
    hurl_file: ($) => seq(repeat($.entry), repeat($._comment_or_new_line)),
    entry: ($) => prec.right(seq(optional(repeat($._comment_or_new_line)), $.request, optional($.response), optional($._comment_or_new_line))),
    _comment_or_new_line: ($) => prec.right(repeat1(choice($.comment, "\n"))),
    request: ($) =>
      prec.left(seq(
        $.method,
        optional($.value_string),
        repeat1($._comment_or_new_line),
        repeat($.header),
        repeat($.request_section),
        optional($.body)
      )),
    response: ($) =>
      seq(
        $.version,
        $.status,
        $._comment_or_new_line,
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
        "VIEW",
        /[A-Z]+/
      ),
    version: ($) => choice("HTTP/1.0", "HTTP/1.1", "HTTP/2", "HTTP/3", "HTTP/*", "HTTP"),
    status: ($) => choice(/[0-9]+/, '*'),
    header: ($) => seq($.key_value, $._comment_or_new_line),
    body: ($) => seq($.bytes, $._comment_or_new_line),
    request_section: ($) =>
      choice(
        $.basic_auth_section,
        $.query_string_params_section,
        $.form_params_section,
        $.multipart_form_data_section,
        $.cookies_section,
        $.options_section
      ),
    response_section: ($) => choice($.captures_section, $.asserts_section),
    basic_auth_section: ($) =>
      seq(field("section_header", "[BasicAuth]"), $._comment_or_new_line, $.key_value, $._comment_or_new_line),
    query_string_params_section: ($) =>
      prec.right(seq(field("section_header", choice("[Query]", "[QueryStringParams]")), $._comment_or_new_line, optional($.key_value), repeat(seq($._comment_or_new_line,$.key_value)), $._comment_or_new_line)),
    form_params_section: ($) =>
      prec.right(seq(field("section_header", choice("[Form]", "[FormParams]")), $._comment_or_new_line, optional($.key_value), repeat(seq($._comment_or_new_line,$.key_value)), $._comment_or_new_line)),
    multipart_form_data_section: ($) =>
      prec.left(seq(
        field("section_header", choice("[Multipart]", "[MultipartFormData]")),
        $._comment_or_new_line,
        repeat(seq($.multipart_form_data_param, $._comment_or_new_line))
      )),
    cookies_section: ($) =>
      prec.right(seq(field("section_header", "[Cookies]"), $._comment_or_new_line, optional($.key_value), repeat(seq($._comment_or_new_line, $.key_value)), $._comment_or_new_line)),
    captures_section: ($) =>
      prec.right(seq(field("section_header", "[Captures]"), $._comment_or_new_line, repeat($.capture))),
    asserts_section: ($) =>
      seq(field("section_header", "[Asserts]"), $._comment_or_new_line, repeat($.assert)),
    options_section: ($) =>
      seq(field("section_header", "[Options]"), $._comment_or_new_line, repeat(seq($.option, $._comment_or_new_line))),
    key_value: ($) => prec.right(seq($.key_string, ":", optional(choice($.value_string, $.boolean, $.float, $.integer, "null")))),
    multipart_form_data_param: ($) => choice($.file_param, $.key_value),
    file_param: ($) => seq($.key_string, ":", $.file_value),
    file_value: ($) =>
      prec.left(seq("file,", optional($.filename), ";", optional(/[a-zA-Z0-9\/+-]+/))),
    capture: ($) =>
      seq(
        $.key_string,
        ":",
        $.query,
        repeat(seq($.filter)),
        $._comment_or_new_line
      ),
    assert: ($) =>
      seq(
        $.query,
        repeat(seq($.filter)),
        $.predicate,
        $._comment_or_new_line
      ),
    option: ($) =>
      seq(
        choice(
          $.ca_certificate_option,
          $.cert_option,
          $.variable_option,
          $.boolean_option,
          $.integer_option,
          $.duration_option,
          $.string_option
        )
      ),
    ca_certificate_option: ($) =>
      seq(field("option_key", "cacert"), ":", $.filename),
    cert_option: ($) =>
      seq(field("option_key", "cert"), ":", choice($.template, $.filename_password)),
    filename_password: ($) => repeat1(choice($.filename_password_text, $.filename_password_escaped_char)),
    filename_password_text: ($) => /[^#;{}\n\r\\]+/,
    filename_password_escaped_char: ($) =>
      seq(
        "\\",
        choice("\\", "b", "f", "n", "r", "t", seq("u", $.unicode_char), "#", ";", "{", "}", ":")
      ),
    boolean_option: ($) => seq(field("option_key", $.boolean_option_key), ":", choice($.boolean, $.template)),
    boolean_option_key: ($) => choice("compressed", "location", "location-trusted", "http1.0", "http2", "http3", "insecure", "ipv4", "ipv6", "netrc", "netrc-optional", "path-as-is", "skip", "verbose", "very-verbose"),
    integer_option: ($) => seq(field("option_key", $.integer_option_key), ":", choice($.integer, $.template)),
    integer_option_key: ($) => choice("max-redirs", "retry-max-count", "limit-rate", "max-time", "repeat", "retry"),
    duration_option: ($) => seq(field("option_key", $.duration_option_key), ":", choice(seq($.integer, optional($.duration_unit)), $.template)),
    duration_option_key: ($) => choice("connect-timeout", "delay", "retry-interval"),
    duration_unit: ($) => choice("ms", "s", "m"),
    string_option: ($) => prec(2, seq(field("option_key", $.string_option_key), ":", choice($.template, $.value_string))),
    string_option_key: ($) => choice("aws-sigv4", "key", "connect-to", "header", "netrc-file", "output", "pinnedpubkey", "proxy", "unix-socket", "user"),
    variable_option: ($) => seq(field("option_key", "variable"), ":", $.variable_definition),
    variable_definition: ($) => seq($.variable_name, "=", $.variable_value),
    variable_value: ($) =>
      choice(
        "null",
        $.boolean,
        $.integer,
        $.float,
        $.key_string,
        $.quoted_string
      ),
    query: ($) =>
      choice(
        $.simple_query,
        $.header_query,
        $.cookie_query,
        $.xpath_query,
        $.jsonpath_query,
        $.regex_query,
        $.variable_query,
      ),
    simple_query: ($) => field("query_name", choice("status","url","body","duration","bytes","sha256","md5")),
    header_query: ($) => seq(field("query_name", "header"), $.quoted_string),
    cookie_query: ($) => seq(field("query_name", "cookie"), $.quoted_string),
    xpath_query: ($) => seq(field("query_name", "xpath"), $.quoted_string),
    jsonpath_query: ($) => seq(field("query_name", "jsonpath"), $.quoted_string),
    regex_query: ($) => seq(field("query_name", "regex"), choice($.quoted_string, $.regex)),
    variable_query: ($) => seq(field("query_name", "variable"), $.quoted_string),
    predicate: ($) => seq(optional("not"), $.predicate_func),
    predicate_func: ($) =>
      choice(
        $.simple_predicate,
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
        $.include_predicate,
      ),
    simple_predicate: ($) => field("predicate_name", choice("exists", "isInteger", "isFloat", "isBoolean", "isString", "isCollection", "isNumber", "isIsoDate", "isEmpty", "isIpv4", "isIpv6", "isUuid"
    )),
    equal_predicate: ($) =>
      seq(choice(field("predicate_name", "equals"), "=="), $.predicate_value),
    not_equal_predicate: ($) =>
      seq(choice(field("predicate_name", "notEquals"), "!="), $.predicate_value),
    greater_predicate: ($) =>
      seq(
        choice(field("predicate_name", "greaterThan"), ">"),
        choice($.integer, $.float, $.quoted_string)
      ),
    greater_or_equal_predicate: ($) =>
      seq(
        choice(field("predicate_name", "greaterThanOrEquals"), ">="),
        choice($.integer, $.float, $.quoted_string)
      ),
    less_predicate: ($) =>
      seq(
        choice(field("predicate_name", "lessThan"), "<"),
        choice($.integer, $.float, $.quoted_string)
      ),
    less_or_equal_predicate: ($) =>
      seq(
        choice(field("predicate_name", "lessThanOrEquals"), "<="),
        choice($.integer, $.float, $.quoted_string)
      ),
    start_with_predicate: ($) =>
      seq(
        field("predicate_name", "startsWith"),
        choice($.quoted_string, $.oneline_hex, $.oneline_base64)
      ),
    end_with_predicate: ($) =>
      seq(
        field("predicate_name", "endsWith"),
        choice($.quoted_string, $.oneline_hex, $.oneline_base64)
      ),
    contain_predicate: ($) => seq(field("predicate_name", "contains"), $.quoted_string),
    match_predicate: ($) =>
      seq(field("predicate_name", "matches"), choice($.quoted_string, $.regex)),
    include_predicate: ($) => seq(field("predicate_name", "includes"), $.predicate_value),
    predicate_value: ($) =>
      choice(
        "null",
        $.template,
        $.boolean,
        $.integer,
        $.float,
        $.quoted_string,
        $.oneline_hex,
        $.oneline_base64,
        $.oneline_file,
        $.multiline_string
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
    xml: ($) => seq(repeat($.xml_prolog_tag), $.xml_tag), //TODO: create a more accurate xml grammar
    xml_prolog_tag: ($) => seq("<?", /[^?]+/,"?>"),
    xml_tag: ($) => seq($.xml_open_tag, repeat(choice($.xml_prolog_tag, $.xml_tag, $.xml_value_string)), $.xml_close_tag),
    xml_open_tag: ($) => seq("<", /[^/?][^>]*/, ">"),
    xml_close_tag: ($) => seq("</", /[^/>]+/, ">"),
    oneline_base64: ($) => seq("base64,", /[a-zA-Z0-9+\-=,\n]+/, ";"),
    oneline_file: ($) => seq("file,", optional($.filename), ";"),
    oneline_hex: ($) => seq("hex,", repeat($.hexdigit), ";"),
    quoted_string: ($) =>
      seq('"', repeat(choice($.template, $.quoted_string_content)), '"'),
    quoted_string_content: ($) =>
      prec.right(repeat1(choice($.quoted_string_text, choice($.quoted_string_escaped_char, $.invalid_quoted_string_escaped_char)))),
    quoted_string_text: ($) => /[^"\\]+/,
    invalid_quoted_string_escaped_char: ($) =>
      seq( "\\", /[^"\f\r\tu\\]/),
    quoted_string_escaped_char: ($) =>
      seq(
        "\\",
        choice('"', "\\", "b", "f", "n", "r", "t", seq("u", $.unicode_char))
      ),
    key_string: ($) => repeat1(choice($.template, $.key_string_content)),
    key_string_content: ($) =>
      prec.left(repeat1(choice($.key_string_text, $.key_string_escaped_char))),
    key_string_text: ($) =>
      token.immediate(repeat1(choice(/[A-Za-z0-9]/, "_", "-", ".", "[", "]", "@", "$"))),
    key_string_escaped_char: ($) => seq("\\", choice("#", '"')),
    xml_value_string: ($) => prec.right(repeat1(choice($.template, $.value_string_text))),
    xml_value_string_text: ($) => prec.right(repeat1(/[^<\n]/)),
    value_string: ($) => prec.right(repeat1(choice($.template, $.value_string_content))),
    value_string_content: ($) =>
      prec.right(repeat1(choice($.value_string_text, $.value_string_escaped_char))),
    value_string_text: ($) => prec.right(repeat1(/[^#\n\\]/)),
    value_string_escaped_char: ($) =>
      seq(
        "\\",
        choice("#", "\\", "b", "f", "n", "r", "t", seq("u", $.unicode_char))
      ),
    oneline_string: ($) =>
      seq(/`[^`]/, repeat(choice($.template, $.oneline_string_content)), "`"),
    oneline_string_content: ($) =>
      prec.left(repeat1(choice($.oneline_string_text, $.oneline_string_escaped_char))),
    oneline_string_text: ($) => seq(/[^#\n\\]/, /[^`]/),
    oneline_string_escaped_char: ($) =>
      seq("\\", choice("`", "#", "\\", "b", "f", seq("u", $.unicode_char))),
    multiline_string: ($) =>
      prec(2,seq(
        "```",
        optional($.multiline_string_type),
        "\n",
        repeat(choice($.template, $.multiline_string_content)),
        optional("\n"),
        prec(2,"```")
      )),
    multiline_string_type: ($) =>
      choice("base64", "hex", "json", "xml", "graphql", /[^\n]+/),
    multiline_string_content: ($) =>
      prec.left(repeat1(choice($._multiline_string_text, $.multiline_string_escaped_char, "\n"))),
    _multiline_string_text: ($) => seq(/[^\\{`\n]+/, repeat(choice("`", "{"))),
    multiline_string_escaped_char: ($) =>
      seq(
        "\\",
        choice("\\", "b", "f", "n", "r", "t", "`", seq("u", $.unicode_char))
      ),
    filename: ($) => repeat1(choice($.template, $.filename_content)),
    filename_content: ($) =>
      prec.left(repeat1(choice($.filename_text, $.filename_escaped_char))),
    filename_text: ($) => /[^#; \n\\]+/,
    filename_escaped_char: ($) => seq("\\", choice(";", "#", /[,]/)),
    unicode_char: ($) => seq("{", $.hexdigit, $.hexdigit, $.hexdigit, $.hexdigit, "}"),
    json_value: ($) =>
      choice(
        $.template,
        $.json_object,
        $.json_array,
        $.json_string,
        $.json_number,
        $.json_boolean,
        "null"),
    json_object: ($) =>
      seq("{", optional($.json_key_value), repeat(seq(",", $.json_key_value)), "}"),
    json_key_value: ($) => seq($.json_key_string, ":", $.json_value),
    json_key_string: ($) => alias($.json_string, "json_key_string"),
    json_array: ($) =>
      prec(2,seq("[", $.json_value, repeat(seq(",", $.json_value)), "]")),
    json_string: ($) =>
      seq('"', repeat($.json_string_content), '"'),
    json_string_content: ($) =>
      prec.left(choice($.template, $.json_string_text, $.json_string_escaped_char)),
    json_string_text: ($) => prec.right(repeat1(/[^"\\]/)),
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
          seq("u", $.json_hexdigit, $.json_hexdigit, $.json_hexdigit, $.json_hexdigit)
        )
      ),
    json_number: ($) =>
      seq($.json_integer, optional($.json_fraction), optional($.json_exponent)),
    json_boolean: ($) => choice("true", "false"),
    template: ($) => field("template", seq("{{", $.expr, "}}")),
    expr: ($) => seq($.variable_name, repeat(seq($.filter))),
    variable_name: ($) => seq(/[A-Za-z]/, /[A-Za-z_\-0-9]*/),
    filter: ($) =>
      choice(
        $.simple_filter_key,
        $.regex_filter,
        $.nth_filter,
        $.replace_filter,
        $.split_filter,
        $.xpath_filter
      ),
    simple_filter_key: ($) => field("filter_key", choice("count","urlEncode","urlDecode","toInt","htmlEscape","htmlUnescape","daysAfterNow","daysBeforeNow","decode","format", "toDate")),
    regex_filter: ($) => seq(field("filter_key", "regex"), choice($.quoted_string, $.regex)),
    nth_filter: ($) => seq(field("filter_key", "nth"), $.integer),
    replace_filter: ($) => seq(field("filter_key", "replace"), choice($.quoted_string, $.regex), $.quoted_string),
    split_filter: ($) => seq(field("filter_key", "split"), $.quoted_string),
    xpath_filter: ($) => seq(field("filter_key", "xpath"), $.quoted_string),
    boolean: ($) => choice("true", "false"),
    _alphanum: ($) => /[A-Za-z0-9]/,
    integer: ($) => prec.left(seq(repeat1($.digit))),
    json_integer: ($) => prec.left(seq(repeat1($.json_digit))),
    float: ($) => seq($.integer, $.fraction),
    digit: ($) => /[0-9]/,
    json_digit: ($) => /[0-9]/,
    hexdigit: ($) => /[0-9A-Fa-f]/,
    json_hexdigit: ($) => /[0-9A-Fa-f]/,
    fraction: ($) => prec.left(seq(".", repeat1($.digit))),
    json_fraction: ($) => prec.left(seq(".", repeat1($.json_digit))),
    exponent: ($) =>
      seq(choice("e", "E"), optional(choice("+", "-")), repeat1($.json_digit)),
    json_exponent: ($) =>
      seq(choice("e", "E"), optional(choice("+", "-")), repeat1($.json_digit)),
    comment: ($) => token(seq("#", /[^\n]*/)),
    regex: ($) => seq("/", optional($.regex_content), "/"),
    regex_content: ($) => repeat1(choice($.regex_text, $.regex_escaped_char)),
    regex_text: ($) => /[^\n\\\/]+/,
    regex_escaped_char: ($) => seq("\\", /[^\n]/),
  },
  conflicts: ($) => [
  ],
});
