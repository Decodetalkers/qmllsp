#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 26
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 15
#define ALIAS_COUNT 0
#define TOKEN_COUNT 7
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_import = 1,
  aux_sym_identifier_token1 = 2,
  anon_sym_LBRACE = 3,
  anon_sym_RBRACE = 4,
  anon_sym_COLON = 5,
  sym_number = 6,
  sym_source_file = 7,
  sym_getimport = 8,
  sym_identifier = 9,
  sym_idname = 10,
  sym_qmlwidget = 11,
  sym_widgetid = 12,
  aux_sym_source_file_repeat1 = 13,
  aux_sym_qmlwidget_repeat1 = 14,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_import] = "import",
  [aux_sym_identifier_token1] = "identifier_token1",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_COLON] = ":",
  [sym_number] = "number",
  [sym_source_file] = "source_file",
  [sym_getimport] = "getimport",
  [sym_identifier] = "identifier",
  [sym_idname] = "idname",
  [sym_qmlwidget] = "qmlwidget",
  [sym_widgetid] = "widgetid",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_qmlwidget_repeat1] = "qmlwidget_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_import] = anon_sym_import,
  [aux_sym_identifier_token1] = aux_sym_identifier_token1,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_COLON] = anon_sym_COLON,
  [sym_number] = sym_number,
  [sym_source_file] = sym_source_file,
  [sym_getimport] = sym_getimport,
  [sym_identifier] = sym_identifier,
  [sym_idname] = sym_idname,
  [sym_qmlwidget] = sym_qmlwidget,
  [sym_widgetid] = sym_widgetid,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_qmlwidget_repeat1] = aux_sym_qmlwidget_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_import] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_identifier_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_getimport] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_idname] = {
    .visible = true,
    .named = true,
  },
  [sym_qmlwidget] = {
    .visible = true,
    .named = true,
  },
  [sym_widgetid] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_qmlwidget_repeat1] = {
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

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(2);
      if (lookahead == ':') ADVANCE(12);
      if (lookahead == 'i') ADVANCE(4);
      if (lookahead == '{') ADVANCE(10);
      if (lookahead == '}') ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(9);
      END_STATE();
    case 1:
      if (lookahead == '{') ADVANCE(10);
      if (lookahead == '}') ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(9);
      END_STATE();
    case 2:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(anon_sym_import);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(9);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'm') ADVANCE(6);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(9);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(7);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(9);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'p') ADVANCE(5);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(9);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(8);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(9);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(3);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(9);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(9);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_import] = ACTIONS(1),
    [aux_sym_identifier_token1] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(24),
    [sym_getimport] = STATE(2),
    [sym_identifier] = STATE(23),
    [sym_qmlwidget] = STATE(22),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_import] = ACTIONS(5),
    [aux_sym_identifier_token1] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(5), 1,
      anon_sym_import,
    ACTIONS(7), 1,
      aux_sym_identifier_token1,
    ACTIONS(9), 1,
      ts_builtin_sym_end,
    STATE(20), 1,
      sym_qmlwidget,
    STATE(23), 1,
      sym_identifier,
    STATE(10), 2,
      sym_getimport,
      aux_sym_source_file_repeat1,
  [20] = 4,
    ACTIONS(11), 1,
      aux_sym_identifier_token1,
    ACTIONS(13), 1,
      anon_sym_RBRACE,
    STATE(14), 1,
      sym_identifier,
    STATE(6), 3,
      sym_qmlwidget,
      sym_widgetid,
      aux_sym_qmlwidget_repeat1,
  [35] = 2,
    ACTIONS(17), 2,
      anon_sym_import,
      aux_sym_identifier_token1,
    ACTIONS(15), 4,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym_number,
  [46] = 4,
    ACTIONS(11), 1,
      aux_sym_identifier_token1,
    ACTIONS(19), 1,
      anon_sym_RBRACE,
    STATE(14), 1,
      sym_identifier,
    STATE(3), 3,
      sym_qmlwidget,
      sym_widgetid,
      aux_sym_qmlwidget_repeat1,
  [61] = 4,
    ACTIONS(21), 1,
      aux_sym_identifier_token1,
    ACTIONS(24), 1,
      anon_sym_RBRACE,
    STATE(14), 1,
      sym_identifier,
    STATE(6), 3,
      sym_qmlwidget,
      sym_widgetid,
      aux_sym_qmlwidget_repeat1,
  [76] = 4,
    ACTIONS(11), 1,
      aux_sym_identifier_token1,
    ACTIONS(26), 1,
      anon_sym_RBRACE,
    STATE(14), 1,
      sym_identifier,
    STATE(8), 3,
      sym_qmlwidget,
      sym_widgetid,
      aux_sym_qmlwidget_repeat1,
  [91] = 4,
    ACTIONS(11), 1,
      aux_sym_identifier_token1,
    ACTIONS(28), 1,
      anon_sym_RBRACE,
    STATE(14), 1,
      sym_identifier,
    STATE(6), 3,
      sym_qmlwidget,
      sym_widgetid,
      aux_sym_qmlwidget_repeat1,
  [106] = 4,
    ACTIONS(30), 1,
      aux_sym_identifier_token1,
    ACTIONS(32), 1,
      sym_number,
    STATE(25), 1,
      sym_identifier,
    STATE(16), 2,
      sym_idname,
      sym_qmlwidget,
  [120] = 4,
    ACTIONS(34), 1,
      ts_builtin_sym_end,
    ACTIONS(36), 1,
      anon_sym_import,
    ACTIONS(39), 1,
      aux_sym_identifier_token1,
    STATE(10), 2,
      sym_getimport,
      aux_sym_source_file_repeat1,
  [134] = 3,
    ACTIONS(41), 1,
      ts_builtin_sym_end,
    ACTIONS(45), 1,
      sym_number,
    ACTIONS(43), 2,
      anon_sym_import,
      aux_sym_identifier_token1,
  [145] = 2,
    ACTIONS(47), 1,
      ts_builtin_sym_end,
    ACTIONS(49), 2,
      anon_sym_import,
      aux_sym_identifier_token1,
  [153] = 2,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(51), 2,
      aux_sym_identifier_token1,
      anon_sym_RBRACE,
  [161] = 2,
    ACTIONS(53), 1,
      anon_sym_LBRACE,
    ACTIONS(55), 1,
      anon_sym_COLON,
  [168] = 2,
    ACTIONS(11), 1,
      aux_sym_identifier_token1,
    STATE(11), 1,
      sym_identifier,
  [175] = 1,
    ACTIONS(57), 2,
      aux_sym_identifier_token1,
      anon_sym_RBRACE,
  [180] = 1,
    ACTIONS(59), 2,
      aux_sym_identifier_token1,
      anon_sym_RBRACE,
  [185] = 1,
    ACTIONS(61), 2,
      aux_sym_identifier_token1,
      anon_sym_RBRACE,
  [190] = 1,
    ACTIONS(59), 1,
      ts_builtin_sym_end,
  [194] = 1,
    ACTIONS(63), 1,
      ts_builtin_sym_end,
  [198] = 1,
    ACTIONS(61), 1,
      ts_builtin_sym_end,
  [202] = 1,
    ACTIONS(9), 1,
      ts_builtin_sym_end,
  [206] = 1,
    ACTIONS(65), 1,
      anon_sym_LBRACE,
  [210] = 1,
    ACTIONS(67), 1,
      ts_builtin_sym_end,
  [214] = 1,
    ACTIONS(53), 1,
      anon_sym_LBRACE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 20,
  [SMALL_STATE(4)] = 35,
  [SMALL_STATE(5)] = 46,
  [SMALL_STATE(6)] = 61,
  [SMALL_STATE(7)] = 76,
  [SMALL_STATE(8)] = 91,
  [SMALL_STATE(9)] = 106,
  [SMALL_STATE(10)] = 120,
  [SMALL_STATE(11)] = 134,
  [SMALL_STATE(12)] = 145,
  [SMALL_STATE(13)] = 153,
  [SMALL_STATE(14)] = 161,
  [SMALL_STATE(15)] = 168,
  [SMALL_STATE(16)] = 175,
  [SMALL_STATE(17)] = 180,
  [SMALL_STATE(18)] = 185,
  [SMALL_STATE(19)] = 190,
  [SMALL_STATE(20)] = 194,
  [SMALL_STATE(21)] = 198,
  [SMALL_STATE(22)] = 202,
  [SMALL_STATE(23)] = 206,
  [SMALL_STATE(24)] = 210,
  [SMALL_STATE(25)] = 214,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [17] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [21] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_qmlwidget_repeat1, 2), SHIFT_REPEAT(4),
  [24] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_qmlwidget_repeat1, 2),
  [26] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [28] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [30] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [32] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [36] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(15),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_getimport, 2),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_getimport, 2),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_getimport, 3),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_getimport, 3),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_idname, 1),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_widgetid, 3),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qmlwidget, 3),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qmlwidget, 4),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [67] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_qml(void) {
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
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
