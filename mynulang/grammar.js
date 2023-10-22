module.exports = grammar({
  name: "mynulang",

  rules: {
    source_file: ($) => repeat($._statement),

    statement_end: ($) => ";",
    select_token: ($) => token("select", "SELECT"),
    from_token: ($) => token("from", "FROM"),

    create_token: ($) => token("create", "CREATE"),
    content_token: ($) => token("content", "CONTENT"),

    table_token: ($) => token("table", "TABLE"),
    field_token: ($) => token("field", "FIELD"),

    update_token: ($) => token("update", "UPDATE"),

    delete_token: ($) => token("delete", "DELETE"),

    define_token: ($) => token("define", "DEFINE"),
    on_token: ($) => token("on", "ON"),
    type_token: ($) => token("type", "TYPE"),

    where_token: ($) => token("where", "WHERE"),
    order_by_token: ($) => token("order by", "ORDER BY"),
    group_by_token: ($) => token("group by", "GROUP BY"),
    limit_token: ($) => token("limit by", "LIMIT BY"),
    start_token: ($) => token("start at", "START AT"),

    _identifier: (_) => /[a-zA-Z_][a-zA-Z0-9_]*/,
    table_name: ($) => $._identifier,
    field_name: ($) => $._identifier,
    type_name: ($) =>
      choice(
        $.string_token,
        $.number_token,
        $.boolean_token,
        $.array_token,
        $.object_token,
      ),

    string_token: ($) => token("string"),
    number_token: ($) => token("number"),
    boolean_token: ($) => token("boolean"),
    array_token: ($) => token("array"),
    object_token: ($) => token("object"),

    _statement: ($) => choice($._define_statement, $._crud_statement),

    _define_statement: ($) =>
      choice($.define_table_statement, $.define_field_statement),

    define_table_statement: ($) =>
      seq($.define_token, $.table_token, $.table_name, $.statement_end),

    define_field_statement: ($) =>
      seq(
        $.define_token,
        $.field_token,
        $.field_name,
        $.on_token,
        $.table_name,
        $.type_token,
        $.type_name,
        $.statement_end,
      ),

    _crud_statement: ($) =>
      choice(
        $.create_statement,
        $.update_statement,
        $.delete_statement,
        $.select_statement,
      ),

    _create_statement: ($) =>
      seq($.create_token, $.table_name, $.content_token, $.value),

    _update_statement: ($) =>
      seq($.update_token, $.table_name, $.content_token, $.value),

    _delete_statement: ($) => seq($.delete_token, $.table_name),

    projections: ($) => prec(1, $._var_args),

    _select_statement: ($) =>
      seq($.select_token, prec(1, $.projections), $.from_token, $.table_name),

    where_clause: ($) => seq($.where_token, $.value),
    order_by_clause: ($) => seq($.order_by_token, $.value),
    group_by_clause: ($) => seq($.group_by_token, $.value),
    limit_clause: ($) => seq($.limit_token, $.value),
    start_clause: ($) => seq($.start_token, $.value),

    select_statement: ($) =>
      seq(
        $._select_statement,
        optional($.where_clause),
        optional($.order_by_clause),
        optional($.group_by_clause),
        optional($.start_clause),
        optional($.limit_clause),
        $.statement_end,
      ),

    delete_statement: ($) =>
      seq(
        $._delete_statement,
        optional($.where_clause),
        optional($.order_by_clause),
        optional($.group_by_clause),
        optional($.start_clause),
        optional($.limit_clause),
        $.statement_end,
      ),

    update_statement: ($) =>
      seq(
        $._update_statement,
        optional($.where_clause),
        optional($.order_by_clause),
        optional($.group_by_clause),
        optional($.start_clause),
        optional($.limit_clause),
        $.statement_end,
      ),

    create_statement: ($) =>
      seq(
        $._create_statement,
        optional($.where_clause),
        optional($.order_by_clause),
        optional($.group_by_clause),
        optional($.start_clause),
        optional($.limit_clause),
        $.statement_end,
      ),

    value: ($) => $._value,

    _value: ($) =>
      choice(
        $.string,
        $.number,
        $.boolean,
        $.array,
        $.object,
        $.field_name,
        $._operation,
        $.bracketed_value,
      ),

    bracketed_value: ($) => seq("(", $._value, ")"),

    string: ($) => /"[^"]*"/,
    number: ($) => /\d+/,
    boolean: ($) => choice("true", "false"),

    _var_args: ($) => seq(repeat(seq($._value, ",")), $._value),
    array: ($) => seq("[", optional($._var_args), "]"),

    pair: ($) => seq($.string, ":", $._value),
    _object_entries: ($) => seq(repeat(seq($.pair, ",")), $.pair),
    object: ($) => seq("{", optional($._object_entries), "}"),

    property_access: ($) => prec.left(0, seq($._value, ".", $.field_name)),
    divide_operation: ($) => prec.left(-1, seq($._value, "/", $._value)),
    multiply_operation: ($) => prec.left(-1, seq($._value, "*", $._value)),
    add_operation: ($) => prec.left(-2, seq($._value, "+", $._value)),
    subtract_operation: ($) => prec.left(-2, seq($._value, "-", $._value)),
    less_than_operation: ($) => prec.left(-3, seq($._value, "<", $._value)),
    less_than_or_equal_operation: ($) =>
      prec.left(-3, seq($._value, "<=", $._value)),
    greater_than_operation: ($) => prec.left(-3, seq($._value, ">", $._value)),
    greater_than_or_equal_operation: ($) =>
      prec.left(-3, seq($._value, ">=", $._value)),
    equals_operation: ($) => prec.left(-4, seq($._value, "=", $._value)),
    or_operation: ($) => prec.left(-5, seq($._value, "or", $._value)),
    and_operation: ($) => prec.left(-6, seq($._value, "and", $._value)),

    _operation: ($) =>
      choice(
        $.property_access,
        $.divide_operation,
        $.multiply_operation,
        $.add_operation,
        $.subtract_operation,
        $.less_than_operation,
        $.less_than_or_equal_operation,
        $.greater_than_operation,
        $.greater_than_or_equal_operation,
        $.equals_operation,
        $.or_operation,
        $.and_operation,
      ),
  },
});
