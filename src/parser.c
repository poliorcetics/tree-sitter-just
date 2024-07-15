#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 55
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 54
#define ALIAS_COUNT 0
#define TOKEN_COUNT 38
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  sym_identifier = 1,
  anon_sym_set = 2,
  anon_sym_allow_DASHduplicate_DASHrecipes = 3,
  anon_sym_COLON_EQ = 4,
  anon_sym_allow_DASHduplicate_DASHvariables = 5,
  anon_sym_dotenv_DASHfilename = 6,
  anon_sym_dotenv_DASHload = 7,
  anon_sym_dotenv_DASHpath = 8,
  anon_sym_dotenv_DASHrequired = 9,
  anon_sym_export = 10,
  anon_sym_fallback = 11,
  anon_sym_ignore_DASHcomments = 12,
  anon_sym_positional_DASHarguments = 13,
  anon_sym_shell = 14,
  anon_sym_LBRACK = 15,
  anon_sym_COMMA = 16,
  anon_sym_RBRACK = 17,
  anon_sym_tempdir = 18,
  anon_sym_unstable = 19,
  anon_sym_windows_DASHpowershell = 20,
  anon_sym_alias = 21,
  anon_sym_DQUOTE_DQUOTE_DQUOTE = 22,
  aux_sym_indented_normal_string_token1 = 23,
  anon_sym_DQUOTE = 24,
  aux_sym_normal_string_token1 = 25,
  anon_sym_SQUOTE_SQUOTE_SQUOTE = 26,
  aux_sym_indented_raw_string_token1 = 27,
  anon_sym_SQUOTE = 28,
  aux_sym_raw_string_token1 = 29,
  anon_sym_BSLASHn = 30,
  anon_sym_BSLASHr = 31,
  anon_sym_BSLASHt = 32,
  anon_sym_BSLASH_DQUOTE = 33,
  anon_sym_BSLASH_BSLASH = 34,
  anon_sym_true = 35,
  anon_sym_false = 36,
  aux_sym_comment_token1 = 37,
  sym_file = 38,
  sym_setting = 39,
  sym_alias = 40,
  sym_string = 41,
  sym_indented_normal_string = 42,
  sym_normal_string = 43,
  sym_indented_raw_string = 44,
  sym_raw_string = 45,
  sym_escape_sequence = 46,
  sym_boolean = 47,
  sym_comment = 48,
  aux_sym_file_repeat1 = 49,
  aux_sym_setting_repeat1 = 50,
  aux_sym_indented_normal_string_repeat1 = 51,
  aux_sym_normal_string_repeat1 = 52,
  aux_sym_indented_raw_string_repeat1 = 53,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [anon_sym_set] = "set",
  [anon_sym_allow_DASHduplicate_DASHrecipes] = "allow-duplicate-recipes",
  [anon_sym_COLON_EQ] = ":=",
  [anon_sym_allow_DASHduplicate_DASHvariables] = "allow-duplicate-variables",
  [anon_sym_dotenv_DASHfilename] = "dotenv-filename",
  [anon_sym_dotenv_DASHload] = "dotenv-load",
  [anon_sym_dotenv_DASHpath] = "dotenv-path",
  [anon_sym_dotenv_DASHrequired] = "dotenv-required",
  [anon_sym_export] = "export",
  [anon_sym_fallback] = "fallback",
  [anon_sym_ignore_DASHcomments] = "ignore-comments",
  [anon_sym_positional_DASHarguments] = "positional-arguments",
  [anon_sym_shell] = "shell",
  [anon_sym_LBRACK] = "[",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACK] = "]",
  [anon_sym_tempdir] = "tempdir",
  [anon_sym_unstable] = "unstable",
  [anon_sym_windows_DASHpowershell] = "windows-powershell",
  [anon_sym_alias] = "alias",
  [anon_sym_DQUOTE_DQUOTE_DQUOTE] = "\"\"\"",
  [aux_sym_indented_normal_string_token1] = "indented_normal_string_token1",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_normal_string_token1] = "normal_string_token1",
  [anon_sym_SQUOTE_SQUOTE_SQUOTE] = "'''",
  [aux_sym_indented_raw_string_token1] = "indented_raw_string_token1",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_raw_string_token1] = "raw_string_token1",
  [anon_sym_BSLASHn] = "\\n",
  [anon_sym_BSLASHr] = "\\r",
  [anon_sym_BSLASHt] = "\\t",
  [anon_sym_BSLASH_DQUOTE] = "\\\"",
  [anon_sym_BSLASH_BSLASH] = "\\\\",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [aux_sym_comment_token1] = "comment_token1",
  [sym_file] = "file",
  [sym_setting] = "setting",
  [sym_alias] = "alias",
  [sym_string] = "string",
  [sym_indented_normal_string] = "indented_normal_string",
  [sym_normal_string] = "normal_string",
  [sym_indented_raw_string] = "indented_raw_string",
  [sym_raw_string] = "raw_string",
  [sym_escape_sequence] = "escape_sequence",
  [sym_boolean] = "boolean",
  [sym_comment] = "comment",
  [aux_sym_file_repeat1] = "file_repeat1",
  [aux_sym_setting_repeat1] = "setting_repeat1",
  [aux_sym_indented_normal_string_repeat1] = "indented_normal_string_repeat1",
  [aux_sym_normal_string_repeat1] = "normal_string_repeat1",
  [aux_sym_indented_raw_string_repeat1] = "indented_raw_string_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [anon_sym_set] = anon_sym_set,
  [anon_sym_allow_DASHduplicate_DASHrecipes] = anon_sym_allow_DASHduplicate_DASHrecipes,
  [anon_sym_COLON_EQ] = anon_sym_COLON_EQ,
  [anon_sym_allow_DASHduplicate_DASHvariables] = anon_sym_allow_DASHduplicate_DASHvariables,
  [anon_sym_dotenv_DASHfilename] = anon_sym_dotenv_DASHfilename,
  [anon_sym_dotenv_DASHload] = anon_sym_dotenv_DASHload,
  [anon_sym_dotenv_DASHpath] = anon_sym_dotenv_DASHpath,
  [anon_sym_dotenv_DASHrequired] = anon_sym_dotenv_DASHrequired,
  [anon_sym_export] = anon_sym_export,
  [anon_sym_fallback] = anon_sym_fallback,
  [anon_sym_ignore_DASHcomments] = anon_sym_ignore_DASHcomments,
  [anon_sym_positional_DASHarguments] = anon_sym_positional_DASHarguments,
  [anon_sym_shell] = anon_sym_shell,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_tempdir] = anon_sym_tempdir,
  [anon_sym_unstable] = anon_sym_unstable,
  [anon_sym_windows_DASHpowershell] = anon_sym_windows_DASHpowershell,
  [anon_sym_alias] = anon_sym_alias,
  [anon_sym_DQUOTE_DQUOTE_DQUOTE] = anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [aux_sym_indented_normal_string_token1] = aux_sym_indented_normal_string_token1,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_normal_string_token1] = aux_sym_normal_string_token1,
  [anon_sym_SQUOTE_SQUOTE_SQUOTE] = anon_sym_SQUOTE_SQUOTE_SQUOTE,
  [aux_sym_indented_raw_string_token1] = aux_sym_indented_raw_string_token1,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_raw_string_token1] = aux_sym_raw_string_token1,
  [anon_sym_BSLASHn] = anon_sym_BSLASHn,
  [anon_sym_BSLASHr] = anon_sym_BSLASHr,
  [anon_sym_BSLASHt] = anon_sym_BSLASHt,
  [anon_sym_BSLASH_DQUOTE] = anon_sym_BSLASH_DQUOTE,
  [anon_sym_BSLASH_BSLASH] = anon_sym_BSLASH_BSLASH,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [sym_file] = sym_file,
  [sym_setting] = sym_setting,
  [sym_alias] = sym_alias,
  [sym_string] = sym_string,
  [sym_indented_normal_string] = sym_indented_normal_string,
  [sym_normal_string] = sym_normal_string,
  [sym_indented_raw_string] = sym_indented_raw_string,
  [sym_raw_string] = sym_raw_string,
  [sym_escape_sequence] = sym_escape_sequence,
  [sym_boolean] = sym_boolean,
  [sym_comment] = sym_comment,
  [aux_sym_file_repeat1] = aux_sym_file_repeat1,
  [aux_sym_setting_repeat1] = aux_sym_setting_repeat1,
  [aux_sym_indented_normal_string_repeat1] = aux_sym_indented_normal_string_repeat1,
  [aux_sym_normal_string_repeat1] = aux_sym_normal_string_repeat1,
  [aux_sym_indented_raw_string_repeat1] = aux_sym_indented_raw_string_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_set] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_allow_DASHduplicate_DASHrecipes] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_allow_DASHduplicate_DASHvariables] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dotenv_DASHfilename] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dotenv_DASHload] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dotenv_DASHpath] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dotenv_DASHrequired] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_export] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fallback] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ignore_DASHcomments] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_positional_DASHarguments] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_shell] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tempdir] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_unstable] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_windows_DASHpowershell] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_alias] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE_DQUOTE_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_indented_normal_string_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_normal_string_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SQUOTE_SQUOTE_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_indented_raw_string_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_raw_string_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_BSLASHn] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASHr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASHt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASH_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASH_BSLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_file] = {
    .visible = true,
    .named = true,
  },
  [sym_setting] = {
    .visible = true,
    .named = true,
  },
  [sym_alias] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_indented_normal_string] = {
    .visible = true,
    .named = true,
  },
  [sym_normal_string] = {
    .visible = true,
    .named = true,
  },
  [sym_indented_raw_string] = {
    .visible = true,
    .named = true,
  },
  [sym_raw_string] = {
    .visible = true,
    .named = true,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_setting_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_indented_normal_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_normal_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_indented_raw_string_repeat1] = {
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
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 32,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(9);
      ADVANCE_MAP(
        '"', 24,
        '#', 48,
        '\'', 38,
        ',', 12,
        ':', 8,
        '[', 11,
        '\\', 3,
        ']', 13,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1);
      if (lookahead == '"') ADVANCE(18);
      if (lookahead == '#') ADVANCE(16);
      if (lookahead == '\\') ADVANCE(19);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(17);
      if (lookahead != 0) ADVANCE(22);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2);
      if (lookahead == '#') ADVANCE(31);
      if (lookahead == '\'') ADVANCE(34);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(32);
      if (lookahead != 0) ADVANCE(36);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(45);
      if (lookahead == '\\') ADVANCE(46);
      if (lookahead == 'n') ADVANCE(42);
      if (lookahead == 'r') ADVANCE(43);
      if (lookahead == 't') ADVANCE(44);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(14);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(23);
      if (lookahead == '#') ADVANCE(28);
      if (lookahead == '\\') ADVANCE(26);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(27);
      if (lookahead != 0) ADVANCE(25);
      END_STATE();
    case 6:
      if (lookahead == '#') ADVANCE(48);
      if (lookahead == '\'') ADVANCE(37);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6);
      END_STATE();
    case 7:
      if (lookahead == '\'') ADVANCE(29);
      END_STATE();
    case 8:
      if (lookahead == '=') ADVANCE(10);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_DQUOTE_DQUOTE_DQUOTE);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(aux_sym_indented_normal_string_token1);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(aux_sym_indented_normal_string_token1);
      if (lookahead == '\n') ADVANCE(15);
      if (lookahead == '"') ADVANCE(48);
      if (lookahead != 0) ADVANCE(21);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(aux_sym_indented_normal_string_token1);
      if (lookahead == '\n') ADVANCE(20);
      if (lookahead == '"') ADVANCE(18);
      if (lookahead == '#') ADVANCE(16);
      if (lookahead == '\\') ADVANCE(19);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(17);
      if (lookahead != 0) ADVANCE(22);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(aux_sym_indented_normal_string_token1);
      if (lookahead == '"') ADVANCE(4);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(aux_sym_indented_normal_string_token1);
      if (lookahead == '"') ADVANCE(45);
      if (lookahead == '\\') ADVANCE(46);
      if (lookahead == 'n') ADVANCE(42);
      if (lookahead == 'r') ADVANCE(43);
      if (lookahead == 't') ADVANCE(44);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(aux_sym_indented_normal_string_token1);
      if (lookahead == '"') ADVANCE(18);
      if (lookahead == '#') ADVANCE(16);
      if (lookahead == '\\') ADVANCE(19);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(17);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(22);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(aux_sym_indented_normal_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(48);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(aux_sym_indented_normal_string_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(15);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == '"') ADVANCE(4);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(aux_sym_normal_string_token1);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(aux_sym_normal_string_token1);
      if (lookahead == '"') ADVANCE(45);
      if (lookahead == '\\') ADVANCE(46);
      if (lookahead == 'n') ADVANCE(42);
      if (lookahead == 'r') ADVANCE(43);
      if (lookahead == 't') ADVANCE(44);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(aux_sym_normal_string_token1);
      if (lookahead == '#') ADVANCE(28);
      if (lookahead == '\\') ADVANCE(26);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(27);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#') ADVANCE(25);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(aux_sym_normal_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(48);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_SQUOTE_SQUOTE_SQUOTE);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym_indented_raw_string_token1);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym_indented_raw_string_token1);
      if (lookahead == '\n') ADVANCE(30);
      if (lookahead == '\'') ADVANCE(48);
      if (lookahead != 0) ADVANCE(35);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym_indented_raw_string_token1);
      if (lookahead == '\n') ADVANCE(33);
      if (lookahead == '#') ADVANCE(31);
      if (lookahead == '\'') ADVANCE(34);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(32);
      if (lookahead != 0) ADVANCE(36);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_indented_raw_string_token1);
      if (lookahead == '#') ADVANCE(31);
      if (lookahead == '\'') ADVANCE(34);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(32);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(36);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_indented_raw_string_token1);
      if (lookahead == '\'') ADVANCE(7);
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_indented_raw_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(48);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_indented_raw_string_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(30);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '\'') ADVANCE(7);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_raw_string_token1);
      if (lookahead == '\n') ADVANCE(41);
      if (lookahead == '\'') ADVANCE(48);
      if (lookahead != 0) ADVANCE(39);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_raw_string_token1);
      if (lookahead == '#') ADVANCE(39);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(40);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(41);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_raw_string_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(41);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_BSLASHn);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_BSLASHr);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_BSLASHt);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_BSLASH_DQUOTE);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_BSLASH_BSLASH);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(48);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      ADVANCE_MAP(
        'a', 1,
        'd', 2,
        'e', 3,
        'f', 4,
        'i', 5,
        'p', 6,
        's', 7,
        't', 8,
        'u', 9,
        'w', 10,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      END_STATE();
    case 1:
      if (lookahead == 'l') ADVANCE(11);
      END_STATE();
    case 2:
      if (lookahead == 'o') ADVANCE(12);
      END_STATE();
    case 3:
      if (lookahead == 'x') ADVANCE(13);
      END_STATE();
    case 4:
      if (lookahead == 'a') ADVANCE(14);
      END_STATE();
    case 5:
      if (lookahead == 'g') ADVANCE(15);
      END_STATE();
    case 6:
      if (lookahead == 'o') ADVANCE(16);
      END_STATE();
    case 7:
      if (lookahead == 'e') ADVANCE(17);
      if (lookahead == 'h') ADVANCE(18);
      END_STATE();
    case 8:
      if (lookahead == 'e') ADVANCE(19);
      if (lookahead == 'r') ADVANCE(20);
      END_STATE();
    case 9:
      if (lookahead == 'n') ADVANCE(21);
      END_STATE();
    case 10:
      if (lookahead == 'i') ADVANCE(22);
      END_STATE();
    case 11:
      if (lookahead == 'i') ADVANCE(23);
      if (lookahead == 'l') ADVANCE(24);
      END_STATE();
    case 12:
      if (lookahead == 't') ADVANCE(25);
      END_STATE();
    case 13:
      if (lookahead == 'p') ADVANCE(26);
      END_STATE();
    case 14:
      if (lookahead == 'l') ADVANCE(27);
      END_STATE();
    case 15:
      if (lookahead == 'n') ADVANCE(28);
      END_STATE();
    case 16:
      if (lookahead == 's') ADVANCE(29);
      END_STATE();
    case 17:
      if (lookahead == 't') ADVANCE(30);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(31);
      END_STATE();
    case 19:
      if (lookahead == 'm') ADVANCE(32);
      END_STATE();
    case 20:
      if (lookahead == 'u') ADVANCE(33);
      END_STATE();
    case 21:
      if (lookahead == 's') ADVANCE(34);
      END_STATE();
    case 22:
      if (lookahead == 'n') ADVANCE(35);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(36);
      END_STATE();
    case 24:
      if (lookahead == 'o') ADVANCE(37);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(38);
      END_STATE();
    case 26:
      if (lookahead == 'o') ADVANCE(39);
      END_STATE();
    case 27:
      if (lookahead == 'l') ADVANCE(40);
      if (lookahead == 's') ADVANCE(41);
      END_STATE();
    case 28:
      if (lookahead == 'o') ADVANCE(42);
      END_STATE();
    case 29:
      if (lookahead == 'i') ADVANCE(43);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_set);
      END_STATE();
    case 31:
      if (lookahead == 'l') ADVANCE(44);
      END_STATE();
    case 32:
      if (lookahead == 'p') ADVANCE(45);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(46);
      END_STATE();
    case 34:
      if (lookahead == 't') ADVANCE(47);
      END_STATE();
    case 35:
      if (lookahead == 'd') ADVANCE(48);
      END_STATE();
    case 36:
      if (lookahead == 's') ADVANCE(49);
      END_STATE();
    case 37:
      if (lookahead == 'w') ADVANCE(50);
      END_STATE();
    case 38:
      if (lookahead == 'n') ADVANCE(51);
      END_STATE();
    case 39:
      if (lookahead == 'r') ADVANCE(52);
      END_STATE();
    case 40:
      if (lookahead == 'b') ADVANCE(53);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(54);
      END_STATE();
    case 42:
      if (lookahead == 'r') ADVANCE(55);
      END_STATE();
    case 43:
      if (lookahead == 't') ADVANCE(56);
      END_STATE();
    case 44:
      if (lookahead == 'l') ADVANCE(57);
      END_STATE();
    case 45:
      if (lookahead == 'd') ADVANCE(58);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 47:
      if (lookahead == 'a') ADVANCE(59);
      END_STATE();
    case 48:
      if (lookahead == 'o') ADVANCE(60);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_alias);
      END_STATE();
    case 50:
      if (lookahead == '-') ADVANCE(61);
      END_STATE();
    case 51:
      if (lookahead == 'v') ADVANCE(62);
      END_STATE();
    case 52:
      if (lookahead == 't') ADVANCE(63);
      END_STATE();
    case 53:
      if (lookahead == 'a') ADVANCE(64);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(65);
      END_STATE();
    case 56:
      if (lookahead == 'i') ADVANCE(66);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_shell);
      END_STATE();
    case 58:
      if (lookahead == 'i') ADVANCE(67);
      END_STATE();
    case 59:
      if (lookahead == 'b') ADVANCE(68);
      END_STATE();
    case 60:
      if (lookahead == 'w') ADVANCE(69);
      END_STATE();
    case 61:
      if (lookahead == 'd') ADVANCE(70);
      END_STATE();
    case 62:
      if (lookahead == '-') ADVANCE(71);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_export);
      END_STATE();
    case 64:
      if (lookahead == 'c') ADVANCE(72);
      END_STATE();
    case 65:
      if (lookahead == '-') ADVANCE(73);
      END_STATE();
    case 66:
      if (lookahead == 'o') ADVANCE(74);
      END_STATE();
    case 67:
      if (lookahead == 'r') ADVANCE(75);
      END_STATE();
    case 68:
      if (lookahead == 'l') ADVANCE(76);
      END_STATE();
    case 69:
      if (lookahead == 's') ADVANCE(77);
      END_STATE();
    case 70:
      if (lookahead == 'u') ADVANCE(78);
      END_STATE();
    case 71:
      if (lookahead == 'f') ADVANCE(79);
      if (lookahead == 'l') ADVANCE(80);
      if (lookahead == 'p') ADVANCE(81);
      if (lookahead == 'r') ADVANCE(82);
      END_STATE();
    case 72:
      if (lookahead == 'k') ADVANCE(83);
      END_STATE();
    case 73:
      if (lookahead == 'c') ADVANCE(84);
      END_STATE();
    case 74:
      if (lookahead == 'n') ADVANCE(85);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_tempdir);
      END_STATE();
    case 76:
      if (lookahead == 'e') ADVANCE(86);
      END_STATE();
    case 77:
      if (lookahead == '-') ADVANCE(87);
      END_STATE();
    case 78:
      if (lookahead == 'p') ADVANCE(88);
      END_STATE();
    case 79:
      if (lookahead == 'i') ADVANCE(89);
      END_STATE();
    case 80:
      if (lookahead == 'o') ADVANCE(90);
      END_STATE();
    case 81:
      if (lookahead == 'a') ADVANCE(91);
      END_STATE();
    case 82:
      if (lookahead == 'e') ADVANCE(92);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_fallback);
      END_STATE();
    case 84:
      if (lookahead == 'o') ADVANCE(93);
      END_STATE();
    case 85:
      if (lookahead == 'a') ADVANCE(94);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_unstable);
      END_STATE();
    case 87:
      if (lookahead == 'p') ADVANCE(95);
      END_STATE();
    case 88:
      if (lookahead == 'l') ADVANCE(96);
      END_STATE();
    case 89:
      if (lookahead == 'l') ADVANCE(97);
      END_STATE();
    case 90:
      if (lookahead == 'a') ADVANCE(98);
      END_STATE();
    case 91:
      if (lookahead == 't') ADVANCE(99);
      END_STATE();
    case 92:
      if (lookahead == 'q') ADVANCE(100);
      END_STATE();
    case 93:
      if (lookahead == 'm') ADVANCE(101);
      END_STATE();
    case 94:
      if (lookahead == 'l') ADVANCE(102);
      END_STATE();
    case 95:
      if (lookahead == 'o') ADVANCE(103);
      END_STATE();
    case 96:
      if (lookahead == 'i') ADVANCE(104);
      END_STATE();
    case 97:
      if (lookahead == 'e') ADVANCE(105);
      END_STATE();
    case 98:
      if (lookahead == 'd') ADVANCE(106);
      END_STATE();
    case 99:
      if (lookahead == 'h') ADVANCE(107);
      END_STATE();
    case 100:
      if (lookahead == 'u') ADVANCE(108);
      END_STATE();
    case 101:
      if (lookahead == 'm') ADVANCE(109);
      END_STATE();
    case 102:
      if (lookahead == '-') ADVANCE(110);
      END_STATE();
    case 103:
      if (lookahead == 'w') ADVANCE(111);
      END_STATE();
    case 104:
      if (lookahead == 'c') ADVANCE(112);
      END_STATE();
    case 105:
      if (lookahead == 'n') ADVANCE(113);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_dotenv_DASHload);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_dotenv_DASHpath);
      END_STATE();
    case 108:
      if (lookahead == 'i') ADVANCE(114);
      END_STATE();
    case 109:
      if (lookahead == 'e') ADVANCE(115);
      END_STATE();
    case 110:
      if (lookahead == 'a') ADVANCE(116);
      END_STATE();
    case 111:
      if (lookahead == 'e') ADVANCE(117);
      END_STATE();
    case 112:
      if (lookahead == 'a') ADVANCE(118);
      END_STATE();
    case 113:
      if (lookahead == 'a') ADVANCE(119);
      END_STATE();
    case 114:
      if (lookahead == 'r') ADVANCE(120);
      END_STATE();
    case 115:
      if (lookahead == 'n') ADVANCE(121);
      END_STATE();
    case 116:
      if (lookahead == 'r') ADVANCE(122);
      END_STATE();
    case 117:
      if (lookahead == 'r') ADVANCE(123);
      END_STATE();
    case 118:
      if (lookahead == 't') ADVANCE(124);
      END_STATE();
    case 119:
      if (lookahead == 'm') ADVANCE(125);
      END_STATE();
    case 120:
      if (lookahead == 'e') ADVANCE(126);
      END_STATE();
    case 121:
      if (lookahead == 't') ADVANCE(127);
      END_STATE();
    case 122:
      if (lookahead == 'g') ADVANCE(128);
      END_STATE();
    case 123:
      if (lookahead == 's') ADVANCE(129);
      END_STATE();
    case 124:
      if (lookahead == 'e') ADVANCE(130);
      END_STATE();
    case 125:
      if (lookahead == 'e') ADVANCE(131);
      END_STATE();
    case 126:
      if (lookahead == 'd') ADVANCE(132);
      END_STATE();
    case 127:
      if (lookahead == 's') ADVANCE(133);
      END_STATE();
    case 128:
      if (lookahead == 'u') ADVANCE(134);
      END_STATE();
    case 129:
      if (lookahead == 'h') ADVANCE(135);
      END_STATE();
    case 130:
      if (lookahead == '-') ADVANCE(136);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_dotenv_DASHfilename);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_dotenv_DASHrequired);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_ignore_DASHcomments);
      END_STATE();
    case 134:
      if (lookahead == 'm') ADVANCE(137);
      END_STATE();
    case 135:
      if (lookahead == 'e') ADVANCE(138);
      END_STATE();
    case 136:
      if (lookahead == 'r') ADVANCE(139);
      if (lookahead == 'v') ADVANCE(140);
      END_STATE();
    case 137:
      if (lookahead == 'e') ADVANCE(141);
      END_STATE();
    case 138:
      if (lookahead == 'l') ADVANCE(142);
      END_STATE();
    case 139:
      if (lookahead == 'e') ADVANCE(143);
      END_STATE();
    case 140:
      if (lookahead == 'a') ADVANCE(144);
      END_STATE();
    case 141:
      if (lookahead == 'n') ADVANCE(145);
      END_STATE();
    case 142:
      if (lookahead == 'l') ADVANCE(146);
      END_STATE();
    case 143:
      if (lookahead == 'c') ADVANCE(147);
      END_STATE();
    case 144:
      if (lookahead == 'r') ADVANCE(148);
      END_STATE();
    case 145:
      if (lookahead == 't') ADVANCE(149);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_windows_DASHpowershell);
      END_STATE();
    case 147:
      if (lookahead == 'i') ADVANCE(150);
      END_STATE();
    case 148:
      if (lookahead == 'i') ADVANCE(151);
      END_STATE();
    case 149:
      if (lookahead == 's') ADVANCE(152);
      END_STATE();
    case 150:
      if (lookahead == 'p') ADVANCE(153);
      END_STATE();
    case 151:
      if (lookahead == 'a') ADVANCE(154);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_positional_DASHarguments);
      END_STATE();
    case 153:
      if (lookahead == 'e') ADVANCE(155);
      END_STATE();
    case 154:
      if (lookahead == 'b') ADVANCE(156);
      END_STATE();
    case 155:
      if (lookahead == 's') ADVANCE(157);
      END_STATE();
    case 156:
      if (lookahead == 'l') ADVANCE(158);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_allow_DASHduplicate_DASHrecipes);
      END_STATE();
    case 158:
      if (lookahead == 'e') ADVANCE(159);
      END_STATE();
    case 159:
      if (lookahead == 's') ADVANCE(160);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_allow_DASHduplicate_DASHvariables);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 5},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 5},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 5},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 5},
  [33] = {.lex_state = 5},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 2},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 2},
  [40] = {.lex_state = 2},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 2},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 6},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 40},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_comment] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_set] = ACTIONS(1),
    [anon_sym_allow_DASHduplicate_DASHrecipes] = ACTIONS(1),
    [anon_sym_COLON_EQ] = ACTIONS(1),
    [anon_sym_allow_DASHduplicate_DASHvariables] = ACTIONS(1),
    [anon_sym_dotenv_DASHfilename] = ACTIONS(1),
    [anon_sym_dotenv_DASHload] = ACTIONS(1),
    [anon_sym_dotenv_DASHpath] = ACTIONS(1),
    [anon_sym_dotenv_DASHrequired] = ACTIONS(1),
    [anon_sym_export] = ACTIONS(1),
    [anon_sym_fallback] = ACTIONS(1),
    [anon_sym_ignore_DASHcomments] = ACTIONS(1),
    [anon_sym_positional_DASHarguments] = ACTIONS(1),
    [anon_sym_shell] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_tempdir] = ACTIONS(1),
    [anon_sym_unstable] = ACTIONS(1),
    [anon_sym_windows_DASHpowershell] = ACTIONS(1),
    [anon_sym_alias] = ACTIONS(1),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_BSLASHn] = ACTIONS(1),
    [anon_sym_BSLASHr] = ACTIONS(1),
    [anon_sym_BSLASHt] = ACTIONS(1),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(1),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [1] = {
    [sym_file] = STATE(47),
    [sym_setting] = STATE(31),
    [sym_alias] = STATE(31),
    [sym_string] = STATE(31),
    [sym_indented_normal_string] = STATE(12),
    [sym_normal_string] = STATE(12),
    [sym_indented_raw_string] = STATE(12),
    [sym_raw_string] = STATE(12),
    [sym_comment] = STATE(1),
    [aux_sym_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_set] = ACTIONS(9),
    [anon_sym_alias] = ACTIONS(11),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 12,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      ts_builtin_sym_end,
    ACTIONS(23), 1,
      sym_identifier,
    ACTIONS(26), 1,
      anon_sym_set,
    ACTIONS(29), 1,
      anon_sym_alias,
    ACTIONS(32), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(38), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    STATE(2), 2,
      sym_comment,
      aux_sym_file_repeat1,
    STATE(31), 3,
      sym_setting,
      sym_alias,
      sym_string,
    STATE(12), 4,
      sym_indented_normal_string,
      sym_normal_string,
      sym_indented_raw_string,
      sym_raw_string,
  [43] = 13,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(9), 1,
      anon_sym_set,
    ACTIONS(11), 1,
      anon_sym_alias,
    ACTIONS(13), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(44), 1,
      ts_builtin_sym_end,
    STATE(2), 1,
      aux_sym_file_repeat1,
    STATE(3), 1,
      sym_comment,
    STATE(31), 3,
      sym_setting,
      sym_alias,
      sym_string,
    STATE(12), 4,
      sym_indented_normal_string,
      sym_normal_string,
      sym_indented_raw_string,
      sym_raw_string,
  [88] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(50), 1,
      anon_sym_shell,
    STATE(4), 1,
      sym_comment,
    ACTIONS(48), 3,
      anon_sym_dotenv_DASHfilename,
      anon_sym_dotenv_DASHpath,
      anon_sym_tempdir,
    ACTIONS(46), 10,
      anon_sym_allow_DASHduplicate_DASHrecipes,
      anon_sym_allow_DASHduplicate_DASHvariables,
      anon_sym_dotenv_DASHload,
      anon_sym_dotenv_DASHrequired,
      anon_sym_export,
      anon_sym_fallback,
      anon_sym_ignore_DASHcomments,
      anon_sym_positional_DASHarguments,
      anon_sym_unstable,
      anon_sym_windows_DASHpowershell,
  [115] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(5), 1,
      sym_comment,
    ACTIONS(52), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(54), 5,
      anon_sym_set,
      anon_sym_alias,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_identifier,
  [136] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(6), 1,
      sym_comment,
    ACTIONS(56), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(58), 5,
      anon_sym_set,
      anon_sym_alias,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_identifier,
  [157] = 9,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(13), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(60), 1,
      anon_sym_RBRACK,
    STATE(7), 1,
      sym_comment,
    STATE(44), 1,
      sym_string,
    STATE(12), 4,
      sym_indented_normal_string,
      sym_normal_string,
      sym_indented_raw_string,
      sym_raw_string,
  [188] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(8), 1,
      sym_comment,
    ACTIONS(62), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(64), 5,
      anon_sym_set,
      anon_sym_alias,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_identifier,
  [209] = 9,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(13), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(66), 1,
      anon_sym_RBRACK,
    STATE(9), 1,
      sym_comment,
    STATE(44), 1,
      sym_string,
    STATE(12), 4,
      sym_indented_normal_string,
      sym_normal_string,
      sym_indented_raw_string,
      sym_raw_string,
  [240] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(10), 1,
      sym_comment,
    ACTIONS(68), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(70), 5,
      anon_sym_set,
      anon_sym_alias,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_identifier,
  [261] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(11), 1,
      sym_comment,
    ACTIONS(72), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(74), 5,
      anon_sym_set,
      anon_sym_alias,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_identifier,
  [282] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(12), 1,
      sym_comment,
    ACTIONS(76), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(78), 5,
      anon_sym_set,
      anon_sym_alias,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_identifier,
  [303] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(13), 1,
      sym_comment,
    ACTIONS(80), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(82), 5,
      anon_sym_set,
      anon_sym_alias,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_identifier,
  [324] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(14), 1,
      sym_comment,
    ACTIONS(84), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(86), 5,
      anon_sym_set,
      anon_sym_alias,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_identifier,
  [345] = 7,
    ACTIONS(88), 1,
      anon_sym_DQUOTE,
    ACTIONS(90), 1,
      aux_sym_normal_string_token1,
    ACTIONS(94), 1,
      aux_sym_comment_token1,
    STATE(15), 1,
      sym_comment,
    STATE(23), 1,
      aux_sym_normal_string_repeat1,
    STATE(33), 1,
      sym_escape_sequence,
    ACTIONS(92), 5,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
  [371] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(100), 1,
      anon_sym_COLON_EQ,
    STATE(16), 1,
      sym_comment,
    ACTIONS(96), 3,
      ts_builtin_sym_end,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(98), 5,
      anon_sym_set,
      anon_sym_alias,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_identifier,
  [393] = 6,
    ACTIONS(94), 1,
      aux_sym_comment_token1,
    ACTIONS(102), 1,
      anon_sym_DQUOTE,
    ACTIONS(104), 1,
      aux_sym_normal_string_token1,
    STATE(33), 1,
      sym_escape_sequence,
    STATE(17), 2,
      sym_comment,
      aux_sym_normal_string_repeat1,
    ACTIONS(107), 5,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
  [417] = 6,
    ACTIONS(94), 1,
      aux_sym_comment_token1,
    ACTIONS(110), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(112), 1,
      aux_sym_indented_normal_string_token1,
    STATE(35), 1,
      sym_escape_sequence,
    STATE(18), 2,
      sym_comment,
      aux_sym_indented_normal_string_repeat1,
    ACTIONS(115), 5,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
  [441] = 8,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(13), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    STATE(19), 1,
      sym_comment,
    STATE(44), 1,
      sym_string,
    STATE(12), 4,
      sym_indented_normal_string,
      sym_normal_string,
      sym_indented_raw_string,
      sym_raw_string,
  [469] = 7,
    ACTIONS(94), 1,
      aux_sym_comment_token1,
    ACTIONS(118), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(120), 1,
      aux_sym_indented_normal_string_token1,
    STATE(18), 1,
      aux_sym_indented_normal_string_repeat1,
    STATE(20), 1,
      sym_comment,
    STATE(35), 1,
      sym_escape_sequence,
    ACTIONS(122), 5,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
  [495] = 8,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(13), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    STATE(21), 1,
      sym_comment,
    STATE(38), 1,
      sym_string,
    STATE(12), 4,
      sym_indented_normal_string,
      sym_normal_string,
      sym_indented_raw_string,
      sym_raw_string,
  [523] = 8,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(13), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    STATE(22), 1,
      sym_comment,
    STATE(26), 1,
      sym_string,
    STATE(12), 4,
      sym_indented_normal_string,
      sym_normal_string,
      sym_indented_raw_string,
      sym_raw_string,
  [551] = 7,
    ACTIONS(90), 1,
      aux_sym_normal_string_token1,
    ACTIONS(94), 1,
      aux_sym_comment_token1,
    ACTIONS(124), 1,
      anon_sym_DQUOTE,
    STATE(17), 1,
      aux_sym_normal_string_repeat1,
    STATE(23), 1,
      sym_comment,
    STATE(33), 1,
      sym_escape_sequence,
    ACTIONS(92), 5,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
  [577] = 7,
    ACTIONS(94), 1,
      aux_sym_comment_token1,
    ACTIONS(120), 1,
      aux_sym_indented_normal_string_token1,
    ACTIONS(126), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(20), 1,
      aux_sym_indented_normal_string_repeat1,
    STATE(24), 1,
      sym_comment,
    STATE(35), 1,
      sym_escape_sequence,
    ACTIONS(122), 5,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
  [603] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(25), 1,
      sym_comment,
    ACTIONS(128), 3,
      ts_builtin_sym_end,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(130), 5,
      anon_sym_set,
      anon_sym_alias,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_identifier,
  [622] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(26), 1,
      sym_comment,
    ACTIONS(132), 3,
      ts_builtin_sym_end,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(134), 5,
      anon_sym_set,
      anon_sym_alias,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_identifier,
  [641] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(27), 1,
      sym_comment,
    ACTIONS(136), 3,
      ts_builtin_sym_end,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(138), 5,
      anon_sym_set,
      anon_sym_alias,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_identifier,
  [660] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(28), 1,
      sym_comment,
    ACTIONS(140), 3,
      ts_builtin_sym_end,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(142), 5,
      anon_sym_set,
      anon_sym_alias,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_identifier,
  [679] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(29), 1,
      sym_comment,
    ACTIONS(144), 3,
      ts_builtin_sym_end,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(146), 5,
      anon_sym_set,
      anon_sym_alias,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_identifier,
  [698] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(30), 1,
      sym_comment,
    ACTIONS(148), 3,
      ts_builtin_sym_end,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(150), 5,
      anon_sym_set,
      anon_sym_alias,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_identifier,
  [717] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(31), 1,
      sym_comment,
    ACTIONS(152), 3,
      ts_builtin_sym_end,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(154), 5,
      anon_sym_set,
      anon_sym_alias,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_identifier,
  [736] = 3,
    ACTIONS(94), 1,
      aux_sym_comment_token1,
    STATE(32), 1,
      sym_comment,
    ACTIONS(156), 7,
      anon_sym_DQUOTE,
      aux_sym_normal_string_token1,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
  [752] = 3,
    ACTIONS(94), 1,
      aux_sym_comment_token1,
    STATE(33), 1,
      sym_comment,
    ACTIONS(158), 7,
      anon_sym_DQUOTE,
      aux_sym_normal_string_token1,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
  [768] = 3,
    ACTIONS(94), 1,
      aux_sym_comment_token1,
    STATE(34), 1,
      sym_comment,
    ACTIONS(156), 7,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      aux_sym_indented_normal_string_token1,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
  [784] = 3,
    ACTIONS(94), 1,
      aux_sym_comment_token1,
    STATE(35), 1,
      sym_comment,
    ACTIONS(160), 7,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      aux_sym_indented_normal_string_token1,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
  [800] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(66), 1,
      anon_sym_RBRACK,
    ACTIONS(162), 1,
      anon_sym_COMMA,
    STATE(36), 1,
      sym_comment,
    STATE(41), 1,
      aux_sym_setting_repeat1,
  [816] = 4,
    ACTIONS(94), 1,
      aux_sym_comment_token1,
    ACTIONS(164), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(166), 1,
      aux_sym_indented_raw_string_token1,
    STATE(37), 2,
      sym_comment,
      aux_sym_indented_raw_string_repeat1,
  [830] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(169), 1,
      anon_sym_COMMA,
    ACTIONS(171), 1,
      anon_sym_RBRACK,
    STATE(36), 1,
      aux_sym_setting_repeat1,
    STATE(38), 1,
      sym_comment,
  [846] = 5,
    ACTIONS(94), 1,
      aux_sym_comment_token1,
    ACTIONS(173), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(175), 1,
      aux_sym_indented_raw_string_token1,
    STATE(37), 1,
      aux_sym_indented_raw_string_repeat1,
    STATE(39), 1,
      sym_comment,
  [862] = 5,
    ACTIONS(94), 1,
      aux_sym_comment_token1,
    ACTIONS(175), 1,
      aux_sym_indented_raw_string_token1,
    ACTIONS(177), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    STATE(39), 1,
      aux_sym_indented_raw_string_repeat1,
    STATE(40), 1,
      sym_comment,
  [878] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(179), 1,
      anon_sym_COMMA,
    ACTIONS(182), 1,
      anon_sym_RBRACK,
    STATE(41), 2,
      sym_comment,
      aux_sym_setting_repeat1,
  [892] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(26), 1,
      sym_boolean,
    STATE(42), 1,
      sym_comment,
    ACTIONS(184), 2,
      anon_sym_true,
      anon_sym_false,
  [906] = 3,
    ACTIONS(94), 1,
      aux_sym_comment_token1,
    STATE(43), 1,
      sym_comment,
    ACTIONS(186), 2,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      aux_sym_indented_raw_string_token1,
  [917] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(44), 1,
      sym_comment,
    ACTIONS(182), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [928] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(188), 1,
      anon_sym_COLON_EQ,
    STATE(45), 1,
      sym_comment,
  [938] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(190), 1,
      anon_sym_COLON_EQ,
    STATE(46), 1,
      sym_comment,
  [948] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(192), 1,
      ts_builtin_sym_end,
    STATE(47), 1,
      sym_comment,
  [958] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(194), 1,
      anon_sym_SQUOTE,
    STATE(48), 1,
      sym_comment,
  [968] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(196), 1,
      anon_sym_COLON_EQ,
    STATE(49), 1,
      sym_comment,
  [978] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(198), 1,
      sym_identifier,
    STATE(50), 1,
      sym_comment,
  [988] = 3,
    ACTIONS(94), 1,
      aux_sym_comment_token1,
    ACTIONS(200), 1,
      aux_sym_raw_string_token1,
    STATE(51), 1,
      sym_comment,
  [998] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(202), 1,
      anon_sym_LBRACK,
    STATE(52), 1,
      sym_comment,
  [1008] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(204), 1,
      sym_identifier,
    STATE(53), 1,
      sym_comment,
  [1018] = 1,
    ACTIONS(206), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 43,
  [SMALL_STATE(4)] = 88,
  [SMALL_STATE(5)] = 115,
  [SMALL_STATE(6)] = 136,
  [SMALL_STATE(7)] = 157,
  [SMALL_STATE(8)] = 188,
  [SMALL_STATE(9)] = 209,
  [SMALL_STATE(10)] = 240,
  [SMALL_STATE(11)] = 261,
  [SMALL_STATE(12)] = 282,
  [SMALL_STATE(13)] = 303,
  [SMALL_STATE(14)] = 324,
  [SMALL_STATE(15)] = 345,
  [SMALL_STATE(16)] = 371,
  [SMALL_STATE(17)] = 393,
  [SMALL_STATE(18)] = 417,
  [SMALL_STATE(19)] = 441,
  [SMALL_STATE(20)] = 469,
  [SMALL_STATE(21)] = 495,
  [SMALL_STATE(22)] = 523,
  [SMALL_STATE(23)] = 551,
  [SMALL_STATE(24)] = 577,
  [SMALL_STATE(25)] = 603,
  [SMALL_STATE(26)] = 622,
  [SMALL_STATE(27)] = 641,
  [SMALL_STATE(28)] = 660,
  [SMALL_STATE(29)] = 679,
  [SMALL_STATE(30)] = 698,
  [SMALL_STATE(31)] = 717,
  [SMALL_STATE(32)] = 736,
  [SMALL_STATE(33)] = 752,
  [SMALL_STATE(34)] = 768,
  [SMALL_STATE(35)] = 784,
  [SMALL_STATE(36)] = 800,
  [SMALL_STATE(37)] = 816,
  [SMALL_STATE(38)] = 830,
  [SMALL_STATE(39)] = 846,
  [SMALL_STATE(40)] = 862,
  [SMALL_STATE(41)] = 878,
  [SMALL_STATE(42)] = 892,
  [SMALL_STATE(43)] = 906,
  [SMALL_STATE(44)] = 917,
  [SMALL_STATE(45)] = 928,
  [SMALL_STATE(46)] = 938,
  [SMALL_STATE(47)] = 948,
  [SMALL_STATE(48)] = 958,
  [SMALL_STATE(49)] = 968,
  [SMALL_STATE(50)] = 978,
  [SMALL_STATE(51)] = 988,
  [SMALL_STATE(52)] = 998,
  [SMALL_STATE(53)] = 1008,
  [SMALL_STATE(54)] = 1018,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0),
  [23] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(31),
  [26] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [29] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(53),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(24),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(15),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(40),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(51),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file, 1, 0, 0),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_indented_normal_string, 2, 0, 0),
  [54] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_indented_normal_string, 2, 0, 0),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_indented_raw_string, 2, 0, 0),
  [58] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_indented_raw_string, 2, 0, 0),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_normal_string, 2, 0, 0),
  [64] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_normal_string, 2, 0, 0),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_indented_normal_string, 3, 0, 0),
  [70] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_indented_normal_string, 3, 0, 0),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_raw_string, 3, 0, 0),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_raw_string, 3, 0, 0),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1, 0, 0),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 1, 0, 0),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_indented_raw_string, 3, 0, 0),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_indented_raw_string, 3, 0, 0),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_normal_string, 3, 0, 0),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_normal_string, 3, 0, 0),
  [88] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [90] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [92] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [94] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting, 2, 0, 0),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_setting, 2, 0, 0),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_normal_string_repeat1, 2, 0, 0),
  [104] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_normal_string_repeat1, 2, 0, 0), SHIFT_REPEAT(33),
  [107] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_normal_string_repeat1, 2, 0, 0), SHIFT_REPEAT(32),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_indented_normal_string_repeat1, 2, 0, 0),
  [112] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_indented_normal_string_repeat1, 2, 0, 0), SHIFT_REPEAT(35),
  [115] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_indented_normal_string_repeat1, 2, 0, 0), SHIFT_REPEAT(34),
  [118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [124] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1, 0, 0),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1, 0, 0),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting, 4, 0, 0),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_setting, 4, 0, 0),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting, 8, 0, 0),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_setting, 8, 0, 0),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting, 7, 0, 0),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_setting, 7, 0, 0),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting, 6, 0, 0),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_setting, 6, 0, 0),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias, 4, 0, 0),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_alias, 4, 0, 0),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 1, 0, 0),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 1, 0, 0),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_escape_sequence, 1, 0, 0),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_normal_string_repeat1, 1, 0, 0),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_indented_normal_string_repeat1, 1, 0, 0),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_indented_raw_string_repeat1, 2, 0, 0),
  [166] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_indented_raw_string_repeat1, 2, 0, 0), SHIFT_REPEAT(43),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [179] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_setting_repeat1, 2, 0, 0), SHIFT_REPEAT(19),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_setting_repeat1, 2, 0, 0),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_indented_raw_string_repeat1, 1, 0, 0),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [192] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [200] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1, 0, 0),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_just(void) {
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
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_identifier,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
