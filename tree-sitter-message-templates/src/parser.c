#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 22
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 17
#define ALIAS_COUNT 0
#define TOKEN_COUNT 12
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 3

enum {
  sym_text = 1,
  anon_sym_AT = 2,
  anon_sym_DOLLAR = 3,
  sym__holeStart = 4,
  sym__holeEnd = 5,
  sym_name = 6,
  sym_index = 7,
  sym__formatPrefix = 8,
  sym_format = 9,
  sym__alignmentPrefix = 10,
  sym_alignment = 11,
  sym_template = 12,
  sym_hole = 13,
  sym_hasFormat = 14,
  sym_hasAlignment = 15,
  aux_sym_template_repeat1 = 16,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_text] = "text",
  [anon_sym_AT] = "@",
  [anon_sym_DOLLAR] = "$",
  [sym__holeStart] = "_holeStart",
  [sym__holeEnd] = "_holeEnd",
  [sym_name] = "name",
  [sym_index] = "index",
  [sym__formatPrefix] = "_formatPrefix",
  [sym_format] = "format",
  [sym__alignmentPrefix] = "_alignmentPrefix",
  [sym_alignment] = "alignment",
  [sym_template] = "template",
  [sym_hole] = "hole",
  [sym_hasFormat] = "hasFormat",
  [sym_hasAlignment] = "hasAlignment",
  [aux_sym_template_repeat1] = "template_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_text] = sym_text,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [sym__holeStart] = sym__holeStart,
  [sym__holeEnd] = sym__holeEnd,
  [sym_name] = sym_name,
  [sym_index] = sym_index,
  [sym__formatPrefix] = sym__formatPrefix,
  [sym_format] = sym_format,
  [sym__alignmentPrefix] = sym__alignmentPrefix,
  [sym_alignment] = sym_alignment,
  [sym_template] = sym_template,
  [sym_hole] = sym_hole,
  [sym_hasFormat] = sym_hasFormat,
  [sym_hasAlignment] = sym_hasAlignment,
  [aux_sym_template_repeat1] = aux_sym_template_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_text] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [sym__holeStart] = {
    .visible = false,
    .named = true,
  },
  [sym__holeEnd] = {
    .visible = false,
    .named = true,
  },
  [sym_name] = {
    .visible = true,
    .named = true,
  },
  [sym_index] = {
    .visible = true,
    .named = true,
  },
  [sym__formatPrefix] = {
    .visible = false,
    .named = true,
  },
  [sym_format] = {
    .visible = true,
    .named = true,
  },
  [sym__alignmentPrefix] = {
    .visible = false,
    .named = true,
  },
  [sym_alignment] = {
    .visible = true,
    .named = true,
  },
  [sym_template] = {
    .visible = true,
    .named = true,
  },
  [sym_hole] = {
    .visible = true,
    .named = true,
  },
  [sym_hasFormat] = {
    .visible = true,
    .named = true,
  },
  [sym_hasAlignment] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_template_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_alignment = 1,
  field_format = 2,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_alignment] = "alignment",
  [field_format] = "format",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_format, 1},
  [1] =
    {field_alignment, 1},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(6);
      if (lookahead == '$') ADVANCE(10);
      if (lookahead == ',') ADVANCE(18);
      if (lookahead == '-') ADVANCE(4);
      if (lookahead == ':') ADVANCE(15);
      if (lookahead == '@') ADVANCE(9);
      if (lookahead == '{') ADVANCE(11);
      if (lookahead == '}') ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(14);
      END_STATE();
    case 1:
      if (lookahead == '$') ADVANCE(10);
      if (lookahead == '@') ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(14);
      END_STATE();
    case 2:
      if (lookahead == '-') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      END_STATE();
    case 3:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(17);
      END_STATE();
    case 4:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      END_STATE();
    case 5:
      if (eof) ADVANCE(6);
      if (lookahead == '{') ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(7);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(7);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(8);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(sym_text);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(8);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym__holeStart);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym__holeEnd);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_name);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(14);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(14);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym__formatPrefix);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_format);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(17);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_format);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(17);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym__alignmentPrefix);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_alignment);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 5},
  [2] = {.lex_state = 5},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 5},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 5},
  [8] = {.lex_state = 5},
  [9] = {.lex_state = 5},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 5},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 3},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 2},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [sym__holeStart] = ACTIONS(1),
    [sym__holeEnd] = ACTIONS(1),
    [sym_name] = ACTIONS(1),
    [sym_index] = ACTIONS(1),
    [sym__formatPrefix] = ACTIONS(1),
    [sym__alignmentPrefix] = ACTIONS(1),
    [sym_alignment] = ACTIONS(1),
  },
  [1] = {
    [sym_template] = STATE(19),
    [sym_hole] = STATE(2),
    [aux_sym_template_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_text] = ACTIONS(5),
    [sym__holeStart] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(7), 1,
      sym__holeStart,
    ACTIONS(9), 1,
      ts_builtin_sym_end,
    ACTIONS(11), 1,
      sym_text,
    STATE(4), 2,
      sym_hole,
      aux_sym_template_repeat1,
  [14] = 5,
    ACTIONS(13), 1,
      sym__holeEnd,
    ACTIONS(15), 1,
      sym__formatPrefix,
    ACTIONS(17), 1,
      sym__alignmentPrefix,
    STATE(10), 1,
      sym_hasAlignment,
    STATE(16), 1,
      sym_hasFormat,
  [30] = 4,
    ACTIONS(19), 1,
      ts_builtin_sym_end,
    ACTIONS(21), 1,
      sym_text,
    ACTIONS(24), 1,
      sym__holeStart,
    STATE(4), 2,
      sym_hole,
      aux_sym_template_repeat1,
  [44] = 5,
    ACTIONS(15), 1,
      sym__formatPrefix,
    ACTIONS(17), 1,
      sym__alignmentPrefix,
    ACTIONS(27), 1,
      sym__holeEnd,
    STATE(12), 1,
      sym_hasAlignment,
    STATE(18), 1,
      sym_hasFormat,
  [60] = 3,
    ACTIONS(31), 1,
      sym_name,
    ACTIONS(33), 1,
      sym_index,
    ACTIONS(29), 2,
      anon_sym_AT,
      anon_sym_DOLLAR,
  [71] = 2,
    ACTIONS(37), 1,
      sym__holeStart,
    ACTIONS(35), 2,
      ts_builtin_sym_end,
      sym_text,
  [79] = 2,
    ACTIONS(41), 1,
      sym__holeStart,
    ACTIONS(39), 2,
      ts_builtin_sym_end,
      sym_text,
  [87] = 2,
    ACTIONS(45), 1,
      sym__holeStart,
    ACTIONS(43), 2,
      ts_builtin_sym_end,
      sym_text,
  [95] = 3,
    ACTIONS(15), 1,
      sym__formatPrefix,
    ACTIONS(27), 1,
      sym__holeEnd,
    STATE(18), 1,
      sym_hasFormat,
  [105] = 2,
    ACTIONS(49), 1,
      sym__holeStart,
    ACTIONS(47), 2,
      ts_builtin_sym_end,
      sym_text,
  [113] = 3,
    ACTIONS(15), 1,
      sym__formatPrefix,
    ACTIONS(51), 1,
      sym__holeEnd,
    STATE(20), 1,
      sym_hasFormat,
  [123] = 1,
    ACTIONS(53), 2,
      sym__holeEnd,
      sym__formatPrefix,
  [128] = 2,
    ACTIONS(55), 1,
      sym_name,
    ACTIONS(57), 1,
      sym_index,
  [135] = 1,
    ACTIONS(59), 1,
      sym_format,
  [139] = 1,
    ACTIONS(27), 1,
      sym__holeEnd,
  [143] = 1,
    ACTIONS(61), 1,
      sym__holeEnd,
  [147] = 1,
    ACTIONS(51), 1,
      sym__holeEnd,
  [151] = 1,
    ACTIONS(63), 1,
      ts_builtin_sym_end,
  [155] = 1,
    ACTIONS(65), 1,
      sym__holeEnd,
  [159] = 1,
    ACTIONS(67), 1,
      sym_alignment,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 14,
  [SMALL_STATE(4)] = 30,
  [SMALL_STATE(5)] = 44,
  [SMALL_STATE(6)] = 60,
  [SMALL_STATE(7)] = 71,
  [SMALL_STATE(8)] = 79,
  [SMALL_STATE(9)] = 87,
  [SMALL_STATE(10)] = 95,
  [SMALL_STATE(11)] = 105,
  [SMALL_STATE(12)] = 113,
  [SMALL_STATE(13)] = 123,
  [SMALL_STATE(14)] = 128,
  [SMALL_STATE(15)] = 135,
  [SMALL_STATE(16)] = 139,
  [SMALL_STATE(17)] = 143,
  [SMALL_STATE(18)] = 147,
  [SMALL_STATE(19)] = 151,
  [SMALL_STATE(20)] = 155,
  [SMALL_STATE(21)] = 159,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template, 1),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_template_repeat1, 2),
  [21] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(4),
  [24] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(6),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hole, 6),
  [37] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hole, 6),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hole, 3),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hole, 3),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hole, 5),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hole, 5),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hole, 4),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hole, 4),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hasAlignment, 2, .production_id = 2),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hasFormat, 2, .production_id = 1),
  [63] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_ebnf(void) {
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
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
