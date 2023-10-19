module.exports = grammar({
  name: "mylang",
  rules: {
    source_file: ($) => seq(repeat($.statement)),

    statement: ($) => seq($._statement_start, repeat($._statement_param), ";"),

    _statement_start: ($) => choice($.select_part, $.create_part, $.update_part, $.delete_part, $.content_part),
    _statement_param: ($) => choice($.from_part, $.where_part, $.content_part),

    select: ($) => token("select"),
    from: ($) => token("from"),
    where: ($) => token("where"),
    create: ($) => token("create"),
    update: ($) => token("update"),
    delete: ($) => token("delete"),
    content: ($) => token("content"),
    invalid_part: ($) => prec(-3, /[a-zA-Z0-9_]+/),

    select_part: ($) => seq($.select, optional($.column_name)),
    from_part: ($) => seq($.from, optional($.table_name)),
    where_part: ($) => seq($.where, optional($.value)),
    create_part: ($) => seq($.create, optional($.table_name)),
    update_part: ($) => seq($.update, optional($.table_name)),
    delete_part: ($) => seq($.delete, optional($.table_name)),
    content_part: ($) => seq($.content, optional($.value)),


    value: ($) =>
      choice($.number, $.string, $.boolean, $.null, $.operation, $.column_name),

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

    table_name: ($) => prec(-1, /[a-zA-Z_][a-zA-Z0-9_]*/),
    column_name: ($) => prec(-1, /[a-zA-Z_][a-zA-Z0-9_]*/),
    unexpected_name: ($) => prec(-2, /[a-zA-Z_][a-zA-Z0-9_]*/),
    unexpected_value: ($) => prec(-3, $.value),
  },
});
