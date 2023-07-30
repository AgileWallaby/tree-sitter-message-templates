module.exports = grammar({
  name: 'ebnf',

  rules: {
    template: $ => repeat(choice($.text, $.hole)),

    text: $ => /[^\{]+/,

    hole: $ => seq($._holeStart, optional(choice('@', '$')), choice($.name, $.index), optional($.hasAlignment), optional($.hasFormat), $._holeEnd),

    _holeStart: $ => /\{/,

    _holeEnd: $ => /\}/,

    name: $ => /[0-9a-zA-Z_]+/,

    index: $ => /\d+/,

    hasFormat: $ => seq($._formatPrefix, field('format', $.format)),

    _formatPrefix: $ => /:/,

    format: $ => /[^}]+/,

    hasAlignment: $ => seq($._alignmentPrefix, field('alignment', $.alignment)),

    _alignmentPrefix: $ => /,/,

    alignment: $ => /-?\d+/,
  }
});