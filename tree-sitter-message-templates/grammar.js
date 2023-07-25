module.exports = grammar({
  name: 'ebnf',

  rules: {
    template: $ => repeat(choice($.text, $.hole)),

    text: $ => /[^\{]+/,

    hole: $ => seq('{', optional(choice('@', '$')), choice($.name, $.index), optional($.alignment), optional($.format), '}'),

    name: $ => /[0-9a-zA-Z_]+/,

    index: $ => /\d+/,

    alignment: $ => seq(',', optional('-'), /\d+/),

    format: $ => /[^}]+/
  }
});