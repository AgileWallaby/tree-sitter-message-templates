#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 23
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 16
#define ALIAS_COUNT 0
#define TOKEN_COUNT 11
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 1

enum {
  sym_text = 1,
  anon_sym_LBRACE = 2,
  anon_sym_AT = 3,
  anon_sym_DOLLAR = 4,
  anon_sym_RBRACE = 5,
  sym_name = 6,
  aux_sym_index_token1 = 7,
  anon_sym_COMMA = 8,
  anon_sym_DASH = 9,
  sym_format = 10,
  sym_template = 11,
  sym_hole = 12,
  sym_index = 13,
  sym_alignment = 14,
  aux_sym_template_repeat1 = 15,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_text] = "text",
  [anon_sym_LBRACE] = "{",
  [anon_sym_AT] = "@",
  [anon_sym_DOLLAR] = "$",
  [anon_sym_RBRACE] = "}",
  [sym_name] = "name",
  [aux_sym_index_token1] = "index_token1",
  [anon_sym_COMMA] = ",",
  [anon_sym_DASH] = "-",
  [sym_format] = "format",
  [sym_template] = "template",
  [sym_hole] = "hole",
  [sym_index] = "index",
  [sym_alignment] = "alignment",
  [aux_sym_template_repeat1] = "template_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_text] = sym_text,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym_name] = sym_name,
  [aux_sym_index_token1] = aux_sym_index_token1,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_DASH] = anon_sym_DASH,
  [sym_format] = sym_format,
  [sym_template] = sym_template,
  [sym_hole] = sym_hole,
  [sym_index] = sym_index,
  [sym_alignment] = sym_alignment,
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
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym_name] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_index_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [sym_format] = {
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
  [sym_index] = {
    .visible = true,
    .named = true,
  },
  [sym_alignment] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_template_repeat1] = {
    .visible = false,
    .named = false,
  },
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
  [22] = 22,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(5);
      if (lookahead == '$') ADVANCE(10);
      if (lookahead == ',') ADVANCE(15);
      if (lookahead == '-') ADVANCE(17);
      if (lookahead == '@') ADVANCE(9);
      if (lookahead == '{') ADVANCE(8);
      if (lookahead == '}') ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(12);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(13);
      END_STATE();
    case 1:
      if (lookahead == ',') ADVANCE(16);
      if (lookahead == '}') ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(18);
      if (lookahead != 0) ADVANCE(20);
      END_STATE();
    case 2:
      if (lookahead == '-') ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      END_STATE();
    case 3:
      if (lookahead == '}') ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(19);
      if (lookahead != 0) ADVANCE(20);
      END_STATE();
    case 4:
      if (eof) ADVANCE(5);
      if (lookahead == '{') ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(6);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(6);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(7);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(sym_text);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(7);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_name);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(12);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(13);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(13);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(aux_sym_index_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_COMMA);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(20);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_format);
      if (lookahead == ',') ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(18);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(20);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_format);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(19);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(20);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_format);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(20);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 4},
  [2] = {.lex_state = 4},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 4},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 4},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 4},
  [11] = {.lex_state = 4},
  [12] = {.lex_state = 4},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 3},
  [15] = {.lex_state = 3},
  [16] = {.lex_state = 3},
  [17] = {.lex_state = 3},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 2},
  [22] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym_name] = ACTIONS(1),
    [aux_sym_index_token1] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
  },
  [1] = {
    [sym_template] = STATE(18),
    [sym_hole] = STATE(4),
    [aux_sym_template_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_text] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(9), 1,
      ts_builtin_sym_end,
    ACTIONS(11), 1,
      sym_text,
    ACTIONS(14), 1,
      anon_sym_LBRACE,
    STATE(2), 2,
      sym_hole,
      aux_sym_template_repeat1,
  [14] = 4,
    ACTIONS(19), 1,
      sym_name,
    ACTIONS(21), 1,
      aux_sym_index_token1,
    STATE(6), 1,
      sym_index,
    ACTIONS(17), 2,
      anon_sym_AT,
      anon_sym_DOLLAR,
  [28] = 4,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      ts_builtin_sym_end,
    ACTIONS(25), 1,
      sym_text,
    STATE(2), 2,
      sym_hole,
      aux_sym_template_repeat1,
  [42] = 4,
    ACTIONS(27), 1,
      anon_sym_RBRACE,
    ACTIONS(29), 1,
      anon_sym_COMMA,
    ACTIONS(31), 1,
      sym_format,
    STATE(15), 1,
      sym_alignment,
  [55] = 4,
    ACTIONS(29), 1,
      anon_sym_COMMA,
    ACTIONS(33), 1,
      anon_sym_RBRACE,
    ACTIONS(35), 1,
      sym_format,
    STATE(14), 1,
      sym_alignment,
  [68] = 2,
    ACTIONS(39), 1,
      anon_sym_LBRACE,
    ACTIONS(37), 2,
      ts_builtin_sym_end,
      sym_text,
  [76] = 1,
    ACTIONS(41), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      sym_format,
  [82] = 3,
    ACTIONS(21), 1,
      aux_sym_index_token1,
    ACTIONS(43), 1,
      sym_name,
    STATE(5), 1,
      sym_index,
  [92] = 2,
    ACTIONS(47), 1,
      anon_sym_LBRACE,
    ACTIONS(45), 2,
      ts_builtin_sym_end,
      sym_text,
  [100] = 2,
    ACTIONS(51), 1,
      anon_sym_LBRACE,
    ACTIONS(49), 2,
      ts_builtin_sym_end,
      sym_text,
  [108] = 2,
    ACTIONS(55), 1,
      anon_sym_LBRACE,
    ACTIONS(53), 2,
      ts_builtin_sym_end,
      sym_text,
  [116] = 2,
    ACTIONS(57), 1,
      aux_sym_index_token1,
    ACTIONS(59), 1,
      anon_sym_DASH,
  [123] = 2,
    ACTIONS(27), 1,
      anon_sym_RBRACE,
    ACTIONS(61), 1,
      sym_format,
  [130] = 2,
    ACTIONS(63), 1,
      anon_sym_RBRACE,
    ACTIONS(65), 1,
      sym_format,
  [137] = 2,
    ACTIONS(67), 1,
      anon_sym_RBRACE,
    ACTIONS(69), 1,
      sym_format,
  [144] = 2,
    ACTIONS(71), 1,
      anon_sym_RBRACE,
    ACTIONS(73), 1,
      sym_format,
  [151] = 1,
    ACTIONS(75), 1,
      ts_builtin_sym_end,
  [155] = 1,
    ACTIONS(77), 1,
      anon_sym_RBRACE,
  [159] = 1,
    ACTIONS(79), 1,
      anon_sym_RBRACE,
  [163] = 1,
    ACTIONS(81), 1,
      aux_sym_index_token1,
  [167] = 1,
    ACTIONS(83), 1,
      anon_sym_RBRACE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 14,
  [SMALL_STATE(4)] = 28,
  [SMALL_STATE(5)] = 42,
  [SMALL_STATE(6)] = 55,
  [SMALL_STATE(7)] = 68,
  [SMALL_STATE(8)] = 76,
  [SMALL_STATE(9)] = 82,
  [SMALL_STATE(10)] = 92,
  [SMALL_STATE(11)] = 100,
  [SMALL_STATE(12)] = 108,
  [SMALL_STATE(13)] = 116,
  [SMALL_STATE(14)] = 123,
  [SMALL_STATE(15)] = 130,
  [SMALL_STATE(16)] = 137,
  [SMALL_STATE(17)] = 144,
  [SMALL_STATE(18)] = 151,
  [SMALL_STATE(19)] = 155,
  [SMALL_STATE(20)] = 159,
  [SMALL_STATE(21)] = 163,
  [SMALL_STATE(22)] = 167,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_template_repeat1, 2),
  [11] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(2),
  [14] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(3),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template, 1),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hole, 3),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hole, 3),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_index, 1),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hole, 4),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hole, 4),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hole, 5),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hole, 5),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hole, 6),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hole, 6),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_alignment, 2),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alignment, 2),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_alignment, 3),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alignment, 3),
  [75] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
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
