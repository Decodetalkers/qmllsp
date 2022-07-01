#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 50
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 23
#define ALIAS_COUNT 0
#define TOKEN_COUNT 13
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
  anon_sym_id = 8,
  anon_sym_COLON = 9,
  aux_sym_identifier_token1 = 10,
  anon_sym_DQUOTE = 11,
  sym_number = 12,
  sym_source_file = 13,
  sym_qml_function = 14,
  sym_getimport = 15,
  sym_winid = 16,
  sym_identifier = 17,
  sym_variables = 18,
  sym_qmlwidget = 19,
  sym_widgetid = 20,
  aux_sym_source_file_repeat1 = 21,
  aux_sym_qmlwidget_repeat1 = 22,
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
  [anon_sym_id] = "id",
  [anon_sym_COLON] = ":",
  [aux_sym_identifier_token1] = "identifier_token1",
  [anon_sym_DQUOTE] = "\"",
  [sym_number] = "number",
  [sym_source_file] = "source_file",
  [sym_qml_function] = "qml_function",
  [sym_getimport] = "getimport",
  [sym_winid] = "winid",
  [sym_identifier] = "identifier",
  [sym_variables] = "variables",
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
  [anon_sym_id] = anon_sym_id,
  [anon_sym_COLON] = anon_sym_COLON,
  [aux_sym_identifier_token1] = aux_sym_identifier_token1,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [sym_number] = sym_number,
  [sym_source_file] = sym_source_file,
  [sym_qml_function] = sym_qml_function,
  [sym_getimport] = sym_getimport,
  [sym_winid] = sym_winid,
  [sym_identifier] = sym_identifier,
  [sym_variables] = sym_variables,
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
  [anon_sym_id] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_identifier_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
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
  [sym_winid] = {
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
      if (eof) ADVANCE(5);
      if (lookahead == '"') ADVANCE(30);
      if (lookahead == '(') ADVANCE(8);
      if (lookahead == ')') ADVANCE(9);
      if (lookahead == ':') ADVANCE(14);
      if (lookahead == 'f') ADVANCE(28);
      if (lookahead == 'i') ADVANCE(16);
      if (lookahead == '{') ADVANCE(10);
      if (lookahead == '}') ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(31);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(31);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      END_STATE();
    case 2:
      if (lookahead == ')') ADVANCE(9);
      if (lookahead == 'f') ADVANCE(28);
      if (lookahead == '{') ADVANCE(10);
      if (lookahead == '}') ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      END_STATE();
    case 3:
      if (lookahead == 'f') ADVANCE(28);
      if (lookahead == 'i') ADVANCE(17);
      if (lookahead == '}') ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      END_STATE();
    case 4:
      if (eof) ADVANCE(5);
      if (lookahead == '(') ADVANCE(8);
      if (lookahead == ':') ADVANCE(14);
      if (lookahead == 'i') ADVANCE(19);
      if (lookahead == '{') ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(31);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_function);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_LPAREN_RPAREN);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == ')') ADVANCE(7);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_import);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_id);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'c') ADVANCE(26);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'd') ADVANCE(13);
      if (lookahead == 'm') ADVANCE(24);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'd') ADVANCE(13);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'i') ADVANCE(23);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'm') ADVANCE(24);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'n') ADVANCE(15);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'n') ADVANCE(6);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(25);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(21);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'p') ADVANCE(22);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(27);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(18);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(12);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'u') ADVANCE(20);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(31);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 4},
  [2] = {.lex_state = 3},
  [3] = {.lex_state = 3},
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 4},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 4},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 4},
  [15] = {.lex_state = 4},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 4},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 2},
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 2},
  [24] = {.lex_state = 2},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 2},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 1},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
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
    [anon_sym_id] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [aux_sym_identifier_token1] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(40),
    [sym_getimport] = STATE(12),
    [sym_identifier] = STATE(47),
    [sym_qmlwidget] = STATE(46),
    [aux_sym_source_file_repeat1] = STATE(12),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_import] = ACTIONS(5),
    [aux_sym_identifier_token1] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(7), 1,
      aux_sym_identifier_token1,
    ACTIONS(9), 1,
      anon_sym_function,
    ACTIONS(11), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 1,
      anon_sym_id,
    STATE(8), 1,
      sym_winid,
    STATE(28), 1,
      sym_identifier,
    STATE(7), 4,
      sym_qml_function,
      sym_qmlwidget,
      sym_widgetid,
      aux_sym_qmlwidget_repeat1,
  [25] = 7,
    ACTIONS(7), 1,
      aux_sym_identifier_token1,
    ACTIONS(9), 1,
      anon_sym_function,
    ACTIONS(13), 1,
      anon_sym_id,
    ACTIONS(15), 1,
      anon_sym_RBRACE,
    STATE(10), 1,
      sym_winid,
    STATE(28), 1,
      sym_identifier,
    STATE(4), 4,
      sym_qml_function,
      sym_qmlwidget,
      sym_widgetid,
      aux_sym_qmlwidget_repeat1,
  [50] = 5,
    ACTIONS(7), 1,
      aux_sym_identifier_token1,
    ACTIONS(9), 1,
      anon_sym_function,
    ACTIONS(17), 1,
      anon_sym_RBRACE,
    STATE(28), 1,
      sym_identifier,
    STATE(11), 4,
      sym_qml_function,
      sym_qmlwidget,
      sym_widgetid,
      aux_sym_qmlwidget_repeat1,
  [69] = 5,
    ACTIONS(7), 1,
      aux_sym_identifier_token1,
    ACTIONS(9), 1,
      anon_sym_function,
    ACTIONS(19), 1,
      anon_sym_RBRACE,
    STATE(28), 1,
      sym_identifier,
    STATE(11), 4,
      sym_qml_function,
      sym_qmlwidget,
      sym_widgetid,
      aux_sym_qmlwidget_repeat1,
  [88] = 2,
    ACTIONS(23), 3,
      anon_sym_LPAREN,
      anon_sym_import,
      aux_sym_identifier_token1,
    ACTIONS(21), 5,
      ts_builtin_sym_end,
      anon_sym_LPAREN_RPAREN,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym_number,
  [101] = 5,
    ACTIONS(7), 1,
      aux_sym_identifier_token1,
    ACTIONS(9), 1,
      anon_sym_function,
    ACTIONS(25), 1,
      anon_sym_RBRACE,
    STATE(28), 1,
      sym_identifier,
    STATE(11), 4,
      sym_qml_function,
      sym_qmlwidget,
      sym_widgetid,
      aux_sym_qmlwidget_repeat1,
  [120] = 5,
    ACTIONS(7), 1,
      aux_sym_identifier_token1,
    ACTIONS(9), 1,
      anon_sym_function,
    ACTIONS(25), 1,
      anon_sym_RBRACE,
    STATE(28), 1,
      sym_identifier,
    STATE(5), 4,
      sym_qml_function,
      sym_qmlwidget,
      sym_widgetid,
      aux_sym_qmlwidget_repeat1,
  [139] = 5,
    ACTIONS(7), 1,
      aux_sym_identifier_token1,
    ACTIONS(9), 1,
      anon_sym_function,
    ACTIONS(27), 1,
      anon_sym_RBRACE,
    STATE(28), 1,
      sym_identifier,
    STATE(11), 4,
      sym_qml_function,
      sym_qmlwidget,
      sym_widgetid,
      aux_sym_qmlwidget_repeat1,
  [158] = 5,
    ACTIONS(7), 1,
      aux_sym_identifier_token1,
    ACTIONS(9), 1,
      anon_sym_function,
    ACTIONS(17), 1,
      anon_sym_RBRACE,
    STATE(28), 1,
      sym_identifier,
    STATE(9), 4,
      sym_qml_function,
      sym_qmlwidget,
      sym_widgetid,
      aux_sym_qmlwidget_repeat1,
  [177] = 5,
    ACTIONS(29), 1,
      anon_sym_function,
    ACTIONS(32), 1,
      anon_sym_RBRACE,
    ACTIONS(34), 1,
      aux_sym_identifier_token1,
    STATE(28), 1,
      sym_identifier,
    STATE(11), 4,
      sym_qml_function,
      sym_qmlwidget,
      sym_widgetid,
      aux_sym_qmlwidget_repeat1,
  [196] = 6,
    ACTIONS(5), 1,
      anon_sym_import,
    ACTIONS(7), 1,
      aux_sym_identifier_token1,
    ACTIONS(37), 1,
      ts_builtin_sym_end,
    STATE(45), 1,
      sym_qmlwidget,
    STATE(47), 1,
      sym_identifier,
    STATE(14), 2,
      sym_getimport,
      aux_sym_source_file_repeat1,
  [216] = 5,
    ACTIONS(39), 1,
      aux_sym_identifier_token1,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      sym_number,
    STATE(49), 1,
      sym_identifier,
    STATE(25), 2,
      sym_variables,
      sym_qmlwidget,
  [233] = 4,
    ACTIONS(45), 1,
      ts_builtin_sym_end,
    ACTIONS(47), 1,
      anon_sym_import,
    ACTIONS(50), 1,
      aux_sym_identifier_token1,
    STATE(14), 2,
      sym_getimport,
      aux_sym_source_file_repeat1,
  [247] = 3,
    ACTIONS(52), 1,
      ts_builtin_sym_end,
    ACTIONS(56), 1,
      sym_number,
    ACTIONS(54), 2,
      anon_sym_import,
      aux_sym_identifier_token1,
  [258] = 2,
    ACTIONS(58), 2,
      anon_sym_function,
      aux_sym_identifier_token1,
    ACTIONS(60), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [267] = 3,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(64), 1,
      anon_sym_RBRACE,
    ACTIONS(62), 2,
      anon_sym_function,
      aux_sym_identifier_token1,
  [278] = 2,
    ACTIONS(66), 1,
      ts_builtin_sym_end,
    ACTIONS(68), 2,
      anon_sym_import,
      aux_sym_identifier_token1,
  [286] = 2,
    ACTIONS(72), 1,
      anon_sym_RBRACE,
    ACTIONS(70), 2,
      anon_sym_function,
      aux_sym_identifier_token1,
  [294] = 2,
    ACTIONS(76), 1,
      anon_sym_RBRACE,
    ACTIONS(74), 2,
      anon_sym_function,
      aux_sym_identifier_token1,
  [302] = 2,
    ACTIONS(80), 1,
      anon_sym_RBRACE,
    ACTIONS(78), 2,
      anon_sym_function,
      aux_sym_identifier_token1,
  [310] = 2,
    ACTIONS(84), 1,
      anon_sym_RBRACE,
    ACTIONS(82), 2,
      anon_sym_function,
      aux_sym_identifier_token1,
  [318] = 2,
    ACTIONS(21), 1,
      anon_sym_RBRACE,
    ACTIONS(23), 2,
      anon_sym_function,
      aux_sym_identifier_token1,
  [326] = 2,
    ACTIONS(88), 1,
      anon_sym_RBRACE,
    ACTIONS(86), 2,
      anon_sym_function,
      aux_sym_identifier_token1,
  [334] = 2,
    ACTIONS(92), 1,
      anon_sym_RBRACE,
    ACTIONS(90), 2,
      anon_sym_function,
      aux_sym_identifier_token1,
  [342] = 3,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(94), 1,
      aux_sym_identifier_token1,
    STATE(34), 1,
      sym_variables,
  [352] = 2,
    ACTIONS(98), 1,
      anon_sym_RBRACE,
    ACTIONS(96), 2,
      anon_sym_function,
      aux_sym_identifier_token1,
  [360] = 2,
    ACTIONS(100), 1,
      anon_sym_LBRACE,
    ACTIONS(102), 1,
      anon_sym_COLON,
  [367] = 2,
    ACTIONS(104), 1,
      aux_sym_identifier_token1,
    STATE(15), 1,
      sym_identifier,
  [374] = 2,
    ACTIONS(104), 1,
      aux_sym_identifier_token1,
    STATE(31), 1,
      sym_identifier,
  [381] = 2,
    ACTIONS(106), 1,
      anon_sym_LPAREN_RPAREN,
    ACTIONS(108), 1,
      anon_sym_LPAREN,
  [388] = 2,
    ACTIONS(110), 1,
      aux_sym_identifier_token1,
    STATE(27), 1,
      sym_identifier,
  [395] = 1,
    ACTIONS(64), 1,
      anon_sym_RPAREN,
  [399] = 1,
    ACTIONS(112), 1,
      anon_sym_RPAREN,
  [403] = 1,
    ACTIONS(114), 1,
      anon_sym_DQUOTE,
  [407] = 1,
    ACTIONS(80), 1,
      ts_builtin_sym_end,
  [411] = 1,
    ACTIONS(116), 1,
      anon_sym_LBRACE,
  [415] = 1,
    ACTIONS(118), 1,
      aux_sym_identifier_token1,
  [419] = 1,
    ACTIONS(120), 1,
      anon_sym_LBRACE,
  [423] = 1,
    ACTIONS(122), 1,
      ts_builtin_sym_end,
  [427] = 1,
    ACTIONS(124), 1,
      anon_sym_RBRACE,
  [431] = 1,
    ACTIONS(126), 1,
      anon_sym_RBRACE,
  [435] = 1,
    ACTIONS(76), 1,
      ts_builtin_sym_end,
  [439] = 1,
    ACTIONS(128), 1,
      anon_sym_COLON,
  [443] = 1,
    ACTIONS(130), 1,
      ts_builtin_sym_end,
  [447] = 1,
    ACTIONS(37), 1,
      ts_builtin_sym_end,
  [451] = 1,
    ACTIONS(132), 1,
      anon_sym_LBRACE,
  [455] = 1,
    ACTIONS(84), 1,
      ts_builtin_sym_end,
  [459] = 1,
    ACTIONS(100), 1,
      anon_sym_LBRACE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 25,
  [SMALL_STATE(4)] = 50,
  [SMALL_STATE(5)] = 69,
  [SMALL_STATE(6)] = 88,
  [SMALL_STATE(7)] = 101,
  [SMALL_STATE(8)] = 120,
  [SMALL_STATE(9)] = 139,
  [SMALL_STATE(10)] = 158,
  [SMALL_STATE(11)] = 177,
  [SMALL_STATE(12)] = 196,
  [SMALL_STATE(13)] = 216,
  [SMALL_STATE(14)] = 233,
  [SMALL_STATE(15)] = 247,
  [SMALL_STATE(16)] = 258,
  [SMALL_STATE(17)] = 267,
  [SMALL_STATE(18)] = 278,
  [SMALL_STATE(19)] = 286,
  [SMALL_STATE(20)] = 294,
  [SMALL_STATE(21)] = 302,
  [SMALL_STATE(22)] = 310,
  [SMALL_STATE(23)] = 318,
  [SMALL_STATE(24)] = 326,
  [SMALL_STATE(25)] = 334,
  [SMALL_STATE(26)] = 342,
  [SMALL_STATE(27)] = 352,
  [SMALL_STATE(28)] = 360,
  [SMALL_STATE(29)] = 367,
  [SMALL_STATE(30)] = 374,
  [SMALL_STATE(31)] = 381,
  [SMALL_STATE(32)] = 388,
  [SMALL_STATE(33)] = 395,
  [SMALL_STATE(34)] = 399,
  [SMALL_STATE(35)] = 403,
  [SMALL_STATE(36)] = 407,
  [SMALL_STATE(37)] = 411,
  [SMALL_STATE(38)] = 415,
  [SMALL_STATE(39)] = 419,
  [SMALL_STATE(40)] = 423,
  [SMALL_STATE(41)] = 427,
  [SMALL_STATE(42)] = 431,
  [SMALL_STATE(43)] = 435,
  [SMALL_STATE(44)] = 439,
  [SMALL_STATE(45)] = 443,
  [SMALL_STATE(46)] = 447,
  [SMALL_STATE(47)] = 451,
  [SMALL_STATE(48)] = 455,
  [SMALL_STATE(49)] = 459,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [23] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [29] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_qmlwidget_repeat1, 2), SHIFT_REPEAT(30),
  [32] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_qmlwidget_repeat1, 2),
  [34] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_qmlwidget_repeat1, 2), SHIFT_REPEAT(6),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(29),
  [50] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_getimport, 2),
  [54] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_getimport, 2),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [58] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variables, 3),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variables, 3),
  [62] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variables, 1),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variables, 1),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_getimport, 3),
  [68] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_getimport, 3),
  [70] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_qml_function, 7),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qml_function, 7),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_qmlwidget, 5),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qmlwidget, 5),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_qmlwidget, 4),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qmlwidget, 4),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_qmlwidget, 3),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qmlwidget, 3),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_qml_function, 5),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qml_function, 5),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_widgetid, 3),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_widgetid, 3),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_winid, 3),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_winid, 3),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [122] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
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
