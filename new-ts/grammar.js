module.exports = grammar({
  name: "mylang",
  rules: {
    source_file: ($) => seq(repeat($.statement)),

    semi: ($) => prec(10, ";"),
    statement: ($) =>
      seq($._statement_start, repeat($._statement_param), $.semi),

    _statement_start: ($) =>
      choice(
        $.select_part,
        $.create_part,
        $.update_part,
        $.delete_part,
        $.content_part,
      ),
    _statement_param: ($) => choice($.from_part, $.where_part, $.content_part),

    let: ($) => "let",
    select: ($) => token("select"),
    from: ($) => token("from"),
    where: ($) => token("where"),
    create: ($) => token("create"),
    update: ($) => token("update"),
    delete: ($) => token("delete"),
    content: ($) => token("content"),
    define: ($) => "define",
    function_token: ($) => "function",

    select_part: ($) => seq($.select, optional($.column_name)),
    from_part: ($) => seq($.from, optional($.table_name)),
    where_part: ($) => seq($.where, optional($.value)),
    create_part: ($) => seq($.create, optional($.table_name)),
    update_part: ($) => seq($.update, optional($.table_name)),
    delete_part: ($) => seq($.delete, optional($.table_name)),
    content_part: ($) => seq($.content, optional($.value)),

    value: ($) =>
      choice(
        $.number,
        $.string,
        $.boolean,
        $.null,
        $.operation,
        $.column_name,
        $.array,
        $.object,
      ),

    equal: ($) => prec.left(0, seq($.value, "=", $.value)),

    sum: ($) => prec.left(1, seq($.value, "+", $.value)),

    subtract: ($) => prec.left(2, seq($.value, "-", $.value)),

    product: ($) => prec.left(3, seq($.value, "*", $.value)),

    divide: ($) => prec.left(4, seq($.value, "/", $.value)),

    operation: ($) => choice($.equal, $.sum, $.subtract, $.product, $.divide),

    number: ($) => /\d+/,
    string: ($) => /"[^"]*"/,
    boolean: ($) => choice("true", "false"),
    null: ($) => "null",

    array: ($) => seq("[", repeat(seq($.value, ",", optional($.value))), "]"),

    object_entry: ($) => seq($.string, ":", $.value),
    object: ($) =>
      seq("{", repeat(seq($.object_entry, ",")), optional($.object_entry), "}"),

    _simple_name: ($) => /[a-zA-Z_][a-zA-Z0-9_]*/,

    table_name: ($) => prec(-1, $._simple_name),
    column_name: ($) => prec(-1, $._simple_name),
    unexpected_name: ($) => prec(-2, $._simple_name),
    unexpected_value: ($) => prec(-3, $.value),

    function_name: ($) =>
      seq($._simple_name, repeat1(seq(token.immediate("::"), $._simple_name))),

    variable: ($) => seq("$", $._simple_name),

    variable_declaration: ($) => seq($.let, $.variable, "=", $.value),

    function_declaration: ($) =>
      seq(
        $.define,
        $.function_token,
        $.function_name,
        $.function_args_def,
        $.function_body,
      ),

    function_args_def: ($) => seq("(", repeat(seq($.function_arg, ",")), ")"),
    function_arg: ($) => seq($._simple_name, optional(seq(":", $.type))),
    function_body: ($) => seq("{", repeat($.statement), "}"),

    type: ($) =>
      choice("string", "number", "boolean", "null", "array", "object"),

    table_definition: ($) => seq($.define, $.table, $.table_name),

    field_definition: ($) =>
      seq(
        $.define,
        $.column_name,
        $.on_table,
        $.table_name,
        $.type_token,
        $.type,
      ),

    _definition: ($) => choice($.field_definition, $.table_definition),
    definition: ($) => seq($._definition, $.semi),

    type_token: ($) => "type",
    table: ($) => "table",
    on_table: ($) => choice("on", "on table"),

    function_call: ($) => seq($.function_name, $.function_args),
    function_args: ($) =>
      seq("(", seq(repeat(seq($.value, ","))), optional($.value), ")"),
  },
});
