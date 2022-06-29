#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 37
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 21
#define ALIAS_COUNT 0
#define TOKEN_COUNT 11
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_function = 1,
  anon_sym_LPAREN_RPAREN = 2,
  anon_sym_LPAREN = 3,
  anon_sym_RPAREN = 4,
  anon_sym_LBRACE = 5,
  anon_sym_RBRACE = 6,
  anon_sym_import = 7,
  aux_sym_identifier_token1 = 8,
  anon_sym_COLON = 9,
  sym_number = 10,
  sym_source_file = 11,
  sym_qml_function = 12,
  sym_getimport = 13,
  sym_identifier = 14,
  sym_variables = 15,
  sym_idname = 16,
  sym_qmlwidget = 17,
  sym_widgetid = 18,
  aux_sym_source_file_repeat1 = 19,
  aux_sym_qmlwidget_repeat1 = 20,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_function] = "function",
  [anon_sym_LPAREN_RPAREN] = "()",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_import] = "import",
  [aux_sym_identifier_token1] = "identifier_token1",
  [anon_sym_COLON] = ":",
  [sym_number] = "number",
  [sym_source_file] = "source_file",
  [sym_qml_function] = "qml_function",
  [sym_getimport] = "getimport",
  [sym_identifier] = "identifier",
  [sym_variables] = "variables",
  [sym_idname] = "idname",
  [sym_qmlwidget] = "qmlwidget",
  [sym_widgetid] = "widgetid",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_qmlwidget_repeat1] = "qmlwidget_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_function] = anon_sym_function,
  [anon_sym_LPAREN_RPAREN] = anon_sym_LPAREN_RPAREN,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_import] = anon_sym_import,
  [aux_sym_identifier_token1] = aux_sym_identifier_token1,
  [anon_sym_COLON] = anon_sym_COLON,
  [sym_number] = sym_number,
  [sym_source_file] = sym_source_file,
  [sym_qml_function] = sym_qml_function,
  [sym_getimport] = sym_getimport,
  [sym_identifier] = sym_identifier,
  [sym_variables] = sym_variables,
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
  [anon_sym_function] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
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
  [anon_sym_import] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_identifier_token1] = {
    .visible = false,
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
  [sym_qml_function] = {
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
  [sym_variables] = {
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
      if (eof) ADVANCE(4);
      if (lookahead == '(') ADVANCE(7);
      if (lookahead == ')') ADVANCE(8);
      if (lookahead == ':') ADVANCE(25);
      if (lookahead == 'f') ADVANCE(23);
      if (lookahead == 'i') ADVANCE(14);
      if (lookahead == '{') ADVANCE(9);
      if (lookahead == '}') ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(26);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 1:
      if (lookahead == 'f') ADVANCE(23);
      if (lookahead == '{') ADVANCE(9);
      if (lookahead == '}') ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 2:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(26);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 3:
      if (eof) ADVANCE(4);
      if (lookahead == '(') ADVANCE(7);
      if (lookahead == ':') ADVANCE(25);
      if (lookahead == 'i') ADVANCE(14);
      if (lookahead == '{') ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(26);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_function);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_LPAREN_RPAREN);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == ')') ADVANCE(6);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_import);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'c') ADVANCE(21);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'i') ADVANCE(18);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'm') ADVANCE(19);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'n') ADVANCE(12);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'n') ADVANCE(5);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(20);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(16);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'p') ADVANCE(17);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(22);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(13);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(11);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'u') ADVANCE(15);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(26);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 3},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 3},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 3},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 3},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 3},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 3},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 2},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_function] = ACTIONS(1),
    [anon_sym_LPAREN_RPAREN] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_import] = ACTIONS(1),
    [aux_sym_identifier_token1] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(35),
    [sym_getimport] = STATE(8),
    [sym_identifier] = STATE(34),
    [sym_qmlwidget] = STATE(25),
    [aux_sym_source_file_repeat1] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_import] = ACTIONS(5),
    [aux_sym_identifier_token1] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(7), 1,
      aux_sym_identifier_token1,
    ACTIONS(9), 1,
      anon_sym_function,
    ACTIONS(11), 1,
      anon_sym_RBRACE,
    STATE(22), 1,
      sym_identifier,
    STATE(7), 4,
      sym_qml_function,
      sym_qmlwidget,
      sym_widgetid,
      aux_sym_qmlwidget_repeat1,
  [19] = 5,
    ACTIONS(7), 1,
      aux_sym_identifier_token1,
    ACTIONS(9), 1,
      anon_sym_function,
    ACTIONS(13), 1,
      anon_sym_RBRACE,
    STATE(22), 1,
      sym_identifier,
    STATE(6), 4,
      sym_qml_function,
      sym_qmlwidget,
      sym_widgetid,
      aux_sym_qmlwidget_repeat1,
  [38] = 2,
    ACTIONS(17), 3,
      anon_sym_LPAREN,
      anon_sym_import,
      aux_sym_identifier_token1,
    ACTIONS(15), 5,
      ts_builtin_sym_end,
      anon_sym_LPAREN_RPAREN,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym_number,
  [51] = 5,
    ACTIONS(7), 1,
      aux_sym_identifier_token1,
    ACTIONS(9), 1,
      anon_sym_function,
    ACTIONS(19), 1,
      anon_sym_RBRACE,
    STATE(22), 1,
      sym_identifier,
    STATE(3), 4,
      sym_qml_function,
      sym_qmlwidget,
      sym_widgetid,
      aux_sym_qmlwidget_repeat1,
  [70] = 5,
    ACTIONS(21), 1,
      anon_sym_function,
    ACTIONS(24), 1,
      anon_sym_RBRACE,
    ACTIONS(26), 1,
      aux_sym_identifier_token1,
    STATE(22), 1,
      sym_identifier,
    STATE(6), 4,
      sym_qml_function,
      sym_qmlwidget,
      sym_widgetid,
      aux_sym_qmlwidget_repeat1,
  [89] = 5,
    ACTIONS(7), 1,
      aux_sym_identifier_token1,
    ACTIONS(9), 1,
      anon_sym_function,
    ACTIONS(29), 1,
      anon_sym_RBRACE,
    STATE(22), 1,
      sym_identifier,
    STATE(6), 4,
      sym_qml_function,
      sym_qmlwidget,
      sym_widgetid,
      aux_sym_qmlwidget_repeat1,
  [108] = 6,
    ACTIONS(5), 1,
      anon_sym_import,
    ACTIONS(7), 1,
      aux_sym_identifier_token1,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    STATE(26), 1,
      sym_qmlwidget,
    STATE(34), 1,
      sym_identifier,
    STATE(10), 2,
      sym_getimport,
      aux_sym_source_file_repeat1,
  [128] = 4,
    ACTIONS(33), 1,
      aux_sym_identifier_token1,
    ACTIONS(35), 1,
      sym_number,
    STATE(36), 1,
      sym_identifier,
    STATE(18), 2,
      sym_idname,
      sym_qmlwidget,
  [142] = 4,
    ACTIONS(37), 1,
      ts_builtin_sym_end,
    ACTIONS(39), 1,
      anon_sym_import,
    ACTIONS(42), 1,
      aux_sym_identifier_token1,
    STATE(10), 2,
      sym_getimport,
      aux_sym_source_file_repeat1,
  [156] = 3,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(46), 1,
      anon_sym_RBRACE,
    ACTIONS(44), 2,
      anon_sym_function,
      aux_sym_identifier_token1,
  [167] = 3,
    ACTIONS(48), 1,
      ts_builtin_sym_end,
    ACTIONS(52), 1,
      sym_number,
    ACTIONS(50), 2,
      anon_sym_import,
      aux_sym_identifier_token1,
  [178] = 2,
    ACTIONS(56), 1,
      anon_sym_RBRACE,
    ACTIONS(54), 2,
      anon_sym_function,
      aux_sym_identifier_token1,
  [186] = 2,
    ACTIONS(58), 1,
      ts_builtin_sym_end,
    ACTIONS(60), 2,
      anon_sym_import,
      aux_sym_identifier_token1,
  [194] = 2,
    ACTIONS(64), 1,
      anon_sym_RBRACE,
    ACTIONS(62), 2,
      anon_sym_function,
      aux_sym_identifier_token1,
  [202] = 2,
    ACTIONS(68), 1,
      anon_sym_RBRACE,
    ACTIONS(66), 2,
      anon_sym_function,
      aux_sym_identifier_token1,
  [210] = 2,
    ACTIONS(72), 1,
      anon_sym_RBRACE,
    ACTIONS(70), 2,
      anon_sym_function,
      aux_sym_identifier_token1,
  [218] = 2,
    ACTIONS(76), 1,
      anon_sym_RBRACE,
    ACTIONS(74), 2,
      anon_sym_function,
      aux_sym_identifier_token1,
  [226] = 2,
    ACTIONS(78), 1,
      aux_sym_identifier_token1,
    STATE(30), 1,
      sym_variables,
  [233] = 2,
    ACTIONS(80), 1,
      aux_sym_identifier_token1,
    STATE(12), 1,
      sym_identifier,
  [240] = 2,
    ACTIONS(82), 1,
      anon_sym_LPAREN_RPAREN,
    ACTIONS(84), 1,
      anon_sym_LPAREN,
  [247] = 2,
    ACTIONS(86), 1,
      anon_sym_LBRACE,
    ACTIONS(88), 1,
      anon_sym_COLON,
  [254] = 2,
    ACTIONS(80), 1,
      aux_sym_identifier_token1,
    STATE(21), 1,
      sym_identifier,
  [261] = 1,
    ACTIONS(90), 1,
      anon_sym_LBRACE,
  [265] = 1,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
  [269] = 1,
    ACTIONS(92), 1,
      ts_builtin_sym_end,
  [273] = 1,
    ACTIONS(56), 1,
      ts_builtin_sym_end,
  [277] = 1,
    ACTIONS(94), 1,
      anon_sym_RBRACE,
  [281] = 1,
    ACTIONS(96), 1,
      anon_sym_RPAREN,
  [285] = 1,
    ACTIONS(98), 1,
      anon_sym_RPAREN,
  [289] = 1,
    ACTIONS(100), 1,
      anon_sym_LBRACE,
  [293] = 1,
    ACTIONS(102), 1,
      anon_sym_RBRACE,
  [297] = 1,
    ACTIONS(64), 1,
      ts_builtin_sym_end,
  [301] = 1,
    ACTIONS(104), 1,
      anon_sym_LBRACE,
  [305] = 1,
    ACTIONS(106), 1,
      ts_builtin_sym_end,
  [309] = 1,
    ACTIONS(86), 1,
      anon_sym_LBRACE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 19,
  [SMALL_STATE(4)] = 38,
  [SMALL_STATE(5)] = 51,
  [SMALL_STATE(6)] = 70,
  [SMALL_STATE(7)] = 89,
  [SMALL_STATE(8)] = 108,
  [SMALL_STATE(9)] = 128,
  [SMALL_STATE(10)] = 142,
  [SMALL_STATE(11)] = 156,
  [SMALL_STATE(12)] = 167,
  [SMALL_STATE(13)] = 178,
  [SMALL_STATE(14)] = 186,
  [SMALL_STATE(15)] = 194,
  [SMALL_STATE(16)] = 202,
  [SMALL_STATE(17)] = 210,
  [SMALL_STATE(18)] = 218,
  [SMALL_STATE(19)] = 226,
  [SMALL_STATE(20)] = 233,
  [SMALL_STATE(21)] = 240,
  [SMALL_STATE(22)] = 247,
  [SMALL_STATE(23)] = 254,
  [SMALL_STATE(24)] = 261,
  [SMALL_STATE(25)] = 265,
  [SMALL_STATE(26)] = 269,
  [SMALL_STATE(27)] = 273,
  [SMALL_STATE(28)] = 277,
  [SMALL_STATE(29)] = 281,
  [SMALL_STATE(30)] = 285,
  [SMALL_STATE(31)] = 289,
  [SMALL_STATE(32)] = 293,
  [SMALL_STATE(33)] = 297,
  [SMALL_STATE(34)] = 301,
  [SMALL_STATE(35)] = 305,
  [SMALL_STATE(36)] = 309,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [17] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [21] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_qmlwidget_repeat1, 2), SHIFT_REPEAT(23),
  [24] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_qmlwidget_repeat1, 2),
  [26] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_qmlwidget_repeat1, 2), SHIFT_REPEAT(4),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [39] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(20),
  [42] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [44] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_idname, 1),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_idname, 1),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_getimport, 2),
  [50] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_getimport, 2),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [54] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_qmlwidget, 4),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qmlwidget, 4),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_getimport, 3),
  [60] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_getimport, 3),
  [62] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_qmlwidget, 3),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qmlwidget, 3),
  [66] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_qml_function, 7),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qml_function, 7),
  [70] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_qml_function, 5),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qml_function, 5),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_widgetid, 3),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_widgetid, 3),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [84] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variables, 1),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [106] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
