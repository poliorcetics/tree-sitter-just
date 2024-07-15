#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 57
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 58
#define ALIAS_COUNT 0
#define TOKEN_COUNT 39
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  sym_identifier = 1,
  anon_sym_set = 2,
  anon_sym_allow_DASHduplicate_DASHrecipes = 3,
  anon_sym_allow_DASHduplicate_DASHvariables = 4,
  anon_sym_dotenv_DASHfilename = 5,
  anon_sym_dotenv_DASHload = 6,
  anon_sym_dotenv_DASHpath = 7,
  anon_sym_dotenv_DASHrequired = 8,
  anon_sym_export = 9,
  anon_sym_fallback = 10,
  anon_sym_ignore_DASHcomments = 11,
  anon_sym_positional_DASHarguments = 12,
  anon_sym_shell = 13,
  anon_sym_tempdir = 14,
  anon_sym_unstable = 15,
  anon_sym_windows_DASHpowershell = 16,
  anon_sym_windows_DASHshell = 17,
  anon_sym_COLON_EQ = 18,
  anon_sym_LBRACK = 19,
  anon_sym_COMMA = 20,
  anon_sym_RBRACK = 21,
  anon_sym_alias = 22,
  anon_sym_DQUOTE_DQUOTE_DQUOTE = 23,
  aux_sym_indented_normal_string_token1 = 24,
  anon_sym_DQUOTE = 25,
  aux_sym_normal_string_token1 = 26,
  anon_sym_SQUOTE_SQUOTE_SQUOTE = 27,
  aux_sym_indented_raw_string_token1 = 28,
  anon_sym_SQUOTE = 29,
  aux_sym_raw_string_token1 = 30,
  anon_sym_BSLASHn = 31,
  anon_sym_BSLASHr = 32,
  anon_sym_BSLASHt = 33,
  anon_sym_BSLASH_DQUOTE = 34,
  anon_sym_BSLASH_BSLASH = 35,
  anon_sym_true = 36,
  anon_sym_false = 37,
  aux_sym_comment_token1 = 38,
  sym_file = 39,
  sym_setting = 40,
  sym__setting_boolean = 41,
  sym__setting_string = 42,
  sym__setting_list = 43,
  sym_alias = 44,
  sym_string = 45,
  sym_indented_normal_string = 46,
  sym_normal_string = 47,
  sym_indented_raw_string = 48,
  sym_raw_string = 49,
  sym_escape_sequence = 50,
  sym_boolean = 51,
  sym_comment = 52,
  aux_sym_file_repeat1 = 53,
  aux_sym__setting_list_repeat1 = 54,
  aux_sym_indented_normal_string_repeat1 = 55,
  aux_sym_normal_string_repeat1 = 56,
  aux_sym_indented_raw_string_repeat1 = 57,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [anon_sym_set] = "set",
  [anon_sym_allow_DASHduplicate_DASHrecipes] = "allow-duplicate-recipes",
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
  [anon_sym_tempdir] = "tempdir",
  [anon_sym_unstable] = "unstable",
  [anon_sym_windows_DASHpowershell] = "windows-powershell",
  [anon_sym_windows_DASHshell] = "windows-shell",
  [anon_sym_COLON_EQ] = ":=",
  [anon_sym_LBRACK] = "[",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACK] = "]",
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
  [sym__setting_boolean] = "_setting_boolean",
  [sym__setting_string] = "_setting_string",
  [sym__setting_list] = "_setting_list",
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
  [aux_sym__setting_list_repeat1] = "_setting_list_repeat1",
  [aux_sym_indented_normal_string_repeat1] = "indented_normal_string_repeat1",
  [aux_sym_normal_string_repeat1] = "normal_string_repeat1",
  [aux_sym_indented_raw_string_repeat1] = "indented_raw_string_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [anon_sym_set] = anon_sym_set,
  [anon_sym_allow_DASHduplicate_DASHrecipes] = anon_sym_allow_DASHduplicate_DASHrecipes,
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
  [anon_sym_tempdir] = anon_sym_tempdir,
  [anon_sym_unstable] = anon_sym_unstable,
  [anon_sym_windows_DASHpowershell] = anon_sym_windows_DASHpowershell,
  [anon_sym_windows_DASHshell] = anon_sym_windows_DASHshell,
  [anon_sym_COLON_EQ] = anon_sym_COLON_EQ,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
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
  [sym__setting_boolean] = sym__setting_boolean,
  [sym__setting_string] = sym__setting_string,
  [sym__setting_list] = sym__setting_list,
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
  [aux_sym__setting_list_repeat1] = aux_sym__setting_list_repeat1,
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
  [anon_sym_windows_DASHshell] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_EQ] = {
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
  [sym__setting_boolean] = {
    .visible = false,
    .named = true,
  },
  [sym__setting_string] = {
    .visible = false,
    .named = true,
  },
  [sym__setting_list] = {
    .visible = false,
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
  [aux_sym__setting_list_repeat1] = {
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
  [34] = 34,
  [35] = 35,
  [36] = 35,
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
  [55] = 55,
  [56] = 56,
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
      if (lookahead == 's') ADVANCE(96);
      END_STATE();
    case 88:
      if (lookahead == 'l') ADVANCE(97);
      END_STATE();
    case 89:
      if (lookahead == 'l') ADVANCE(98);
      END_STATE();
    case 90:
      if (lookahead == 'a') ADVANCE(99);
      END_STATE();
    case 91:
      if (lookahead == 't') ADVANCE(100);
      END_STATE();
    case 92:
      if (lookahead == 'q') ADVANCE(101);
      END_STATE();
    case 93:
      if (lookahead == 'm') ADVANCE(102);
      END_STATE();
    case 94:
      if (lookahead == 'l') ADVANCE(103);
      END_STATE();
    case 95:
      if (lookahead == 'o') ADVANCE(104);
      END_STATE();
    case 96:
      if (lookahead == 'h') ADVANCE(105);
      END_STATE();
    case 97:
      if (lookahead == 'i') ADVANCE(106);
      END_STATE();
    case 98:
      if (lookahead == 'e') ADVANCE(107);
      END_STATE();
    case 99:
      if (lookahead == 'd') ADVANCE(108);
      END_STATE();
    case 100:
      if (lookahead == 'h') ADVANCE(109);
      END_STATE();
    case 101:
      if (lookahead == 'u') ADVANCE(110);
      END_STATE();
    case 102:
      if (lookahead == 'm') ADVANCE(111);
      END_STATE();
    case 103:
      if (lookahead == '-') ADVANCE(112);
      END_STATE();
    case 104:
      if (lookahead == 'w') ADVANCE(113);
      END_STATE();
    case 105:
      if (lookahead == 'e') ADVANCE(114);
      END_STATE();
    case 106:
      if (lookahead == 'c') ADVANCE(115);
      END_STATE();
    case 107:
      if (lookahead == 'n') ADVANCE(116);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_dotenv_DASHload);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_dotenv_DASHpath);
      END_STATE();
    case 110:
      if (lookahead == 'i') ADVANCE(117);
      END_STATE();
    case 111:
      if (lookahead == 'e') ADVANCE(118);
      END_STATE();
    case 112:
      if (lookahead == 'a') ADVANCE(119);
      END_STATE();
    case 113:
      if (lookahead == 'e') ADVANCE(120);
      END_STATE();
    case 114:
      if (lookahead == 'l') ADVANCE(121);
      END_STATE();
    case 115:
      if (lookahead == 'a') ADVANCE(122);
      END_STATE();
    case 116:
      if (lookahead == 'a') ADVANCE(123);
      END_STATE();
    case 117:
      if (lookahead == 'r') ADVANCE(124);
      END_STATE();
    case 118:
      if (lookahead == 'n') ADVANCE(125);
      END_STATE();
    case 119:
      if (lookahead == 'r') ADVANCE(126);
      END_STATE();
    case 120:
      if (lookahead == 'r') ADVANCE(127);
      END_STATE();
    case 121:
      if (lookahead == 'l') ADVANCE(128);
      END_STATE();
    case 122:
      if (lookahead == 't') ADVANCE(129);
      END_STATE();
    case 123:
      if (lookahead == 'm') ADVANCE(130);
      END_STATE();
    case 124:
      if (lookahead == 'e') ADVANCE(131);
      END_STATE();
    case 125:
      if (lookahead == 't') ADVANCE(132);
      END_STATE();
    case 126:
      if (lookahead == 'g') ADVANCE(133);
      END_STATE();
    case 127:
      if (lookahead == 's') ADVANCE(134);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_windows_DASHshell);
      END_STATE();
    case 129:
      if (lookahead == 'e') ADVANCE(135);
      END_STATE();
    case 130:
      if (lookahead == 'e') ADVANCE(136);
      END_STATE();
    case 131:
      if (lookahead == 'd') ADVANCE(137);
      END_STATE();
    case 132:
      if (lookahead == 's') ADVANCE(138);
      END_STATE();
    case 133:
      if (lookahead == 'u') ADVANCE(139);
      END_STATE();
    case 134:
      if (lookahead == 'h') ADVANCE(140);
      END_STATE();
    case 135:
      if (lookahead == '-') ADVANCE(141);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_dotenv_DASHfilename);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_dotenv_DASHrequired);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_ignore_DASHcomments);
      END_STATE();
    case 139:
      if (lookahead == 'm') ADVANCE(142);
      END_STATE();
    case 140:
      if (lookahead == 'e') ADVANCE(143);
      END_STATE();
    case 141:
      if (lookahead == 'r') ADVANCE(144);
      if (lookahead == 'v') ADVANCE(145);
      END_STATE();
    case 142:
      if (lookahead == 'e') ADVANCE(146);
      END_STATE();
    case 143:
      if (lookahead == 'l') ADVANCE(147);
      END_STATE();
    case 144:
      if (lookahead == 'e') ADVANCE(148);
      END_STATE();
    case 145:
      if (lookahead == 'a') ADVANCE(149);
      END_STATE();
    case 146:
      if (lookahead == 'n') ADVANCE(150);
      END_STATE();
    case 147:
      if (lookahead == 'l') ADVANCE(151);
      END_STATE();
    case 148:
      if (lookahead == 'c') ADVANCE(152);
      END_STATE();
    case 149:
      if (lookahead == 'r') ADVANCE(153);
      END_STATE();
    case 150:
      if (lookahead == 't') ADVANCE(154);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_windows_DASHpowershell);
      END_STATE();
    case 152:
      if (lookahead == 'i') ADVANCE(155);
      END_STATE();
    case 153:
      if (lookahead == 'i') ADVANCE(156);
      END_STATE();
    case 154:
      if (lookahead == 's') ADVANCE(157);
      END_STATE();
    case 155:
      if (lookahead == 'p') ADVANCE(158);
      END_STATE();
    case 156:
      if (lookahead == 'a') ADVANCE(159);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_positional_DASHarguments);
      END_STATE();
    case 158:
      if (lookahead == 'e') ADVANCE(160);
      END_STATE();
    case 159:
      if (lookahead == 'b') ADVANCE(161);
      END_STATE();
    case 160:
      if (lookahead == 's') ADVANCE(162);
      END_STATE();
    case 161:
      if (lookahead == 'l') ADVANCE(163);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_allow_DASHduplicate_DASHrecipes);
      END_STATE();
    case 163:
      if (lookahead == 'e') ADVANCE(164);
      END_STATE();
    case 164:
      if (lookahead == 's') ADVANCE(165);
      END_STATE();
    case 165:
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
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 5},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 5},
  [22] = {.lex_state = 5},
  [23] = {.lex_state = 1},
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
  [34] = {.lex_state = 5},
  [35] = {.lex_state = 5},
  [36] = {.lex_state = 1},
  [37] = {.lex_state = 1},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 2},
  [40] = {.lex_state = 2},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 2},
  [45] = {.lex_state = 2},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 6},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 40},
  [55] = {.lex_state = 0},
  [56] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_comment] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_set] = ACTIONS(1),
    [anon_sym_allow_DASHduplicate_DASHrecipes] = ACTIONS(1),
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
    [anon_sym_tempdir] = ACTIONS(1),
    [anon_sym_unstable] = ACTIONS(1),
    [anon_sym_windows_DASHpowershell] = ACTIONS(1),
    [anon_sym_windows_DASHshell] = ACTIONS(1),
    [anon_sym_COLON_EQ] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
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
    [sym_file] = STATE(53),
    [sym_setting] = STATE(32),
    [sym_alias] = STATE(32),
    [sym_string] = STATE(32),
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
    STATE(32), 3,
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
    STATE(32), 3,
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
    STATE(4), 1,
      sym_comment,
    ACTIONS(50), 2,
      anon_sym_shell,
      anon_sym_windows_DASHshell,
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
  [116] = 4,
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
  [137] = 4,
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
  [158] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(7), 1,
      sym_comment,
    ACTIONS(60), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(62), 5,
      anon_sym_set,
      anon_sym_alias,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_identifier,
  [179] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(8), 1,
      sym_comment,
    ACTIONS(64), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(66), 5,
      anon_sym_set,
      anon_sym_alias,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_identifier,
  [200] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(9), 1,
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
  [221] = 9,
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
    ACTIONS(72), 1,
      anon_sym_RBRACK,
    STATE(10), 1,
      sym_comment,
    STATE(48), 1,
      sym_string,
    STATE(12), 4,
      sym_indented_normal_string,
      sym_normal_string,
      sym_indented_raw_string,
      sym_raw_string,
  [252] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(11), 1,
      sym_comment,
    ACTIONS(74), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(76), 5,
      anon_sym_set,
      anon_sym_alias,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_identifier,
  [273] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(12), 1,
      sym_comment,
    ACTIONS(78), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(80), 5,
      anon_sym_set,
      anon_sym_alias,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_identifier,
  [294] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(86), 1,
      anon_sym_COLON_EQ,
    STATE(13), 1,
      sym_comment,
    STATE(28), 1,
      sym__setting_boolean,
    ACTIONS(82), 3,
      ts_builtin_sym_end,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(84), 5,
      anon_sym_set,
      anon_sym_alias,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_identifier,
  [319] = 9,
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
    ACTIONS(88), 1,
      anon_sym_RBRACK,
    STATE(14), 1,
      sym_comment,
    STATE(48), 1,
      sym_string,
    STATE(12), 4,
      sym_indented_normal_string,
      sym_normal_string,
      sym_indented_raw_string,
      sym_raw_string,
  [350] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(15), 1,
      sym_comment,
    ACTIONS(90), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(92), 5,
      anon_sym_set,
      anon_sym_alias,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_identifier,
  [371] = 7,
    ACTIONS(94), 1,
      anon_sym_DQUOTE,
    ACTIONS(96), 1,
      aux_sym_normal_string_token1,
    ACTIONS(100), 1,
      aux_sym_comment_token1,
    STATE(16), 1,
      sym_comment,
    STATE(22), 1,
      aux_sym_normal_string_repeat1,
    STATE(34), 1,
      sym_escape_sequence,
    ACTIONS(98), 5,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
  [397] = 6,
    ACTIONS(100), 1,
      aux_sym_comment_token1,
    ACTIONS(102), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(104), 1,
      aux_sym_indented_normal_string_token1,
    STATE(37), 1,
      sym_escape_sequence,
    STATE(17), 2,
      sym_comment,
      aux_sym_indented_normal_string_repeat1,
    ACTIONS(107), 5,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
  [421] = 8,
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
    STATE(18), 1,
      sym_comment,
    STATE(26), 1,
      sym_string,
    STATE(12), 4,
      sym_indented_normal_string,
      sym_normal_string,
      sym_indented_raw_string,
      sym_raw_string,
  [449] = 8,
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
    STATE(48), 1,
      sym_string,
    STATE(12), 4,
      sym_indented_normal_string,
      sym_normal_string,
      sym_indented_raw_string,
      sym_raw_string,
  [477] = 7,
    ACTIONS(100), 1,
      aux_sym_comment_token1,
    ACTIONS(110), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(112), 1,
      aux_sym_indented_normal_string_token1,
    STATE(17), 1,
      aux_sym_indented_normal_string_repeat1,
    STATE(20), 1,
      sym_comment,
    STATE(37), 1,
      sym_escape_sequence,
    ACTIONS(114), 5,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
  [503] = 6,
    ACTIONS(100), 1,
      aux_sym_comment_token1,
    ACTIONS(116), 1,
      anon_sym_DQUOTE,
    ACTIONS(118), 1,
      aux_sym_normal_string_token1,
    STATE(34), 1,
      sym_escape_sequence,
    STATE(21), 2,
      sym_comment,
      aux_sym_normal_string_repeat1,
    ACTIONS(121), 5,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
  [527] = 7,
    ACTIONS(96), 1,
      aux_sym_normal_string_token1,
    ACTIONS(100), 1,
      aux_sym_comment_token1,
    ACTIONS(124), 1,
      anon_sym_DQUOTE,
    STATE(21), 1,
      aux_sym_normal_string_repeat1,
    STATE(22), 1,
      sym_comment,
    STATE(34), 1,
      sym_escape_sequence,
    ACTIONS(98), 5,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
  [553] = 7,
    ACTIONS(100), 1,
      aux_sym_comment_token1,
    ACTIONS(112), 1,
      aux_sym_indented_normal_string_token1,
    ACTIONS(126), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(20), 1,
      aux_sym_indented_normal_string_repeat1,
    STATE(23), 1,
      sym_comment,
    STATE(37), 1,
      sym_escape_sequence,
    ACTIONS(114), 5,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
  [579] = 8,
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
    STATE(24), 1,
      sym_comment,
    STATE(41), 1,
      sym_string,
    STATE(12), 4,
      sym_indented_normal_string,
      sym_normal_string,
      sym_indented_raw_string,
      sym_raw_string,
  [607] = 4,
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
  [626] = 4,
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
  [645] = 4,
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
  [664] = 4,
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
  [683] = 4,
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
  [702] = 4,
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
  [721] = 4,
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
  [740] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(32), 1,
      sym_comment,
    ACTIONS(156), 3,
      ts_builtin_sym_end,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(158), 5,
      anon_sym_set,
      anon_sym_alias,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_identifier,
  [759] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(33), 1,
      sym_comment,
    ACTIONS(160), 3,
      ts_builtin_sym_end,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(162), 5,
      anon_sym_set,
      anon_sym_alias,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_identifier,
  [778] = 3,
    ACTIONS(100), 1,
      aux_sym_comment_token1,
    STATE(34), 1,
      sym_comment,
    ACTIONS(164), 7,
      anon_sym_DQUOTE,
      aux_sym_normal_string_token1,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
  [794] = 3,
    ACTIONS(100), 1,
      aux_sym_comment_token1,
    STATE(35), 1,
      sym_comment,
    ACTIONS(166), 7,
      anon_sym_DQUOTE,
      aux_sym_normal_string_token1,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
  [810] = 3,
    ACTIONS(100), 1,
      aux_sym_comment_token1,
    STATE(36), 1,
      sym_comment,
    ACTIONS(166), 7,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      aux_sym_indented_normal_string_token1,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
  [826] = 3,
    ACTIONS(100), 1,
      aux_sym_comment_token1,
    STATE(37), 1,
      sym_comment,
    ACTIONS(168), 7,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      aux_sym_indented_normal_string_token1,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
  [842] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(25), 1,
      sym_boolean,
    STATE(38), 1,
      sym_comment,
    ACTIONS(170), 2,
      anon_sym_true,
      anon_sym_false,
  [856] = 4,
    ACTIONS(100), 1,
      aux_sym_comment_token1,
    ACTIONS(172), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(174), 1,
      aux_sym_indented_raw_string_token1,
    STATE(39), 2,
      sym_comment,
      aux_sym_indented_raw_string_repeat1,
  [870] = 5,
    ACTIONS(100), 1,
      aux_sym_comment_token1,
    ACTIONS(177), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(179), 1,
      aux_sym_indented_raw_string_token1,
    STATE(39), 1,
      aux_sym_indented_raw_string_repeat1,
    STATE(40), 1,
      sym_comment,
  [886] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(181), 1,
      anon_sym_COMMA,
    ACTIONS(183), 1,
      anon_sym_RBRACK,
    STATE(41), 1,
      sym_comment,
    STATE(42), 1,
      aux_sym__setting_list_repeat1,
  [902] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(88), 1,
      anon_sym_RBRACK,
    ACTIONS(185), 1,
      anon_sym_COMMA,
    STATE(42), 1,
      sym_comment,
    STATE(43), 1,
      aux_sym__setting_list_repeat1,
  [918] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(187), 1,
      anon_sym_COMMA,
    ACTIONS(190), 1,
      anon_sym_RBRACK,
    STATE(43), 2,
      sym_comment,
      aux_sym__setting_list_repeat1,
  [932] = 5,
    ACTIONS(100), 1,
      aux_sym_comment_token1,
    ACTIONS(179), 1,
      aux_sym_indented_raw_string_token1,
    ACTIONS(192), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    STATE(40), 1,
      aux_sym_indented_raw_string_repeat1,
    STATE(44), 1,
      sym_comment,
  [948] = 3,
    ACTIONS(100), 1,
      aux_sym_comment_token1,
    STATE(45), 1,
      sym_comment,
    ACTIONS(194), 2,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      aux_sym_indented_raw_string_token1,
  [959] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(196), 1,
      anon_sym_COLON_EQ,
    STATE(28), 1,
      sym__setting_list,
    STATE(46), 1,
      sym_comment,
  [972] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(198), 1,
      anon_sym_COLON_EQ,
    STATE(28), 1,
      sym__setting_string,
    STATE(47), 1,
      sym_comment,
  [985] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(48), 1,
      sym_comment,
    ACTIONS(190), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [996] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(200), 1,
      sym_identifier,
    STATE(49), 1,
      sym_comment,
  [1006] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(202), 1,
      anon_sym_LBRACK,
    STATE(50), 1,
      sym_comment,
  [1016] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(204), 1,
      anon_sym_SQUOTE,
    STATE(51), 1,
      sym_comment,
  [1026] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(206), 1,
      anon_sym_COLON_EQ,
    STATE(52), 1,
      sym_comment,
  [1036] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(208), 1,
      ts_builtin_sym_end,
    STATE(53), 1,
      sym_comment,
  [1046] = 3,
    ACTIONS(100), 1,
      aux_sym_comment_token1,
    ACTIONS(210), 1,
      aux_sym_raw_string_token1,
    STATE(54), 1,
      sym_comment,
  [1056] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(212), 1,
      sym_identifier,
    STATE(55), 1,
      sym_comment,
  [1066] = 1,
    ACTIONS(214), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 43,
  [SMALL_STATE(4)] = 88,
  [SMALL_STATE(5)] = 116,
  [SMALL_STATE(6)] = 137,
  [SMALL_STATE(7)] = 158,
  [SMALL_STATE(8)] = 179,
  [SMALL_STATE(9)] = 200,
  [SMALL_STATE(10)] = 221,
  [SMALL_STATE(11)] = 252,
  [SMALL_STATE(12)] = 273,
  [SMALL_STATE(13)] = 294,
  [SMALL_STATE(14)] = 319,
  [SMALL_STATE(15)] = 350,
  [SMALL_STATE(16)] = 371,
  [SMALL_STATE(17)] = 397,
  [SMALL_STATE(18)] = 421,
  [SMALL_STATE(19)] = 449,
  [SMALL_STATE(20)] = 477,
  [SMALL_STATE(21)] = 503,
  [SMALL_STATE(22)] = 527,
  [SMALL_STATE(23)] = 553,
  [SMALL_STATE(24)] = 579,
  [SMALL_STATE(25)] = 607,
  [SMALL_STATE(26)] = 626,
  [SMALL_STATE(27)] = 645,
  [SMALL_STATE(28)] = 664,
  [SMALL_STATE(29)] = 683,
  [SMALL_STATE(30)] = 702,
  [SMALL_STATE(31)] = 721,
  [SMALL_STATE(32)] = 740,
  [SMALL_STATE(33)] = 759,
  [SMALL_STATE(34)] = 778,
  [SMALL_STATE(35)] = 794,
  [SMALL_STATE(36)] = 810,
  [SMALL_STATE(37)] = 826,
  [SMALL_STATE(38)] = 842,
  [SMALL_STATE(39)] = 856,
  [SMALL_STATE(40)] = 870,
  [SMALL_STATE(41)] = 886,
  [SMALL_STATE(42)] = 902,
  [SMALL_STATE(43)] = 918,
  [SMALL_STATE(44)] = 932,
  [SMALL_STATE(45)] = 948,
  [SMALL_STATE(46)] = 959,
  [SMALL_STATE(47)] = 972,
  [SMALL_STATE(48)] = 985,
  [SMALL_STATE(49)] = 996,
  [SMALL_STATE(50)] = 1006,
  [SMALL_STATE(51)] = 1016,
  [SMALL_STATE(52)] = 1026,
  [SMALL_STATE(53)] = 1036,
  [SMALL_STATE(54)] = 1046,
  [SMALL_STATE(55)] = 1056,
  [SMALL_STATE(56)] = 1066,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0),
  [23] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(32),
  [26] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [29] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(55),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(23),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(16),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(44),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(54),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file, 1, 0, 0),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_indented_normal_string, 2, 0, 0),
  [54] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_indented_normal_string, 2, 0, 0),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_raw_string, 3, 0, 0),
  [58] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_raw_string, 3, 0, 0),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_indented_raw_string, 2, 0, 0),
  [62] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_indented_raw_string, 2, 0, 0),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_normal_string, 2, 0, 0),
  [66] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_normal_string, 2, 0, 0),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_indented_raw_string, 3, 0, 0),
  [70] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_indented_raw_string, 3, 0, 0),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_normal_string, 3, 0, 0),
  [76] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_normal_string, 3, 0, 0),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1, 0, 0),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 1, 0, 0),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting, 2, 0, 0),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_setting, 2, 0, 0),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_indented_normal_string, 3, 0, 0),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_indented_normal_string, 3, 0, 0),
  [94] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [96] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [98] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_indented_normal_string_repeat1, 2, 0, 0),
  [104] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_indented_normal_string_repeat1, 2, 0, 0), SHIFT_REPEAT(37),
  [107] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_indented_normal_string_repeat1, 2, 0, 0), SHIFT_REPEAT(36),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [112] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [114] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_normal_string_repeat1, 2, 0, 0),
  [118] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_normal_string_repeat1, 2, 0, 0), SHIFT_REPEAT(34),
  [121] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_normal_string_repeat1, 2, 0, 0), SHIFT_REPEAT(35),
  [124] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__setting_boolean, 2, 0, 0),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__setting_boolean, 2, 0, 0),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__setting_string, 2, 0, 0),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__setting_string, 2, 0, 0),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1, 0, 0),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1, 0, 0),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting, 3, 0, 0),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_setting, 3, 0, 0),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias, 4, 0, 0),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_alias, 4, 0, 0),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__setting_list, 4, 0, 0),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__setting_list, 4, 0, 0),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__setting_list, 5, 0, 0),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__setting_list, 5, 0, 0),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 1, 0, 0),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 1, 0, 0),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__setting_list, 6, 0, 0),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__setting_list, 6, 0, 0),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_normal_string_repeat1, 1, 0, 0),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_escape_sequence, 1, 0, 0),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_indented_normal_string_repeat1, 1, 0, 0),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_indented_raw_string_repeat1, 2, 0, 0),
  [174] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_indented_raw_string_repeat1, 2, 0, 0), SHIFT_REPEAT(45),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [187] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__setting_list_repeat1, 2, 0, 0), SHIFT_REPEAT(19),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__setting_list_repeat1, 2, 0, 0),
  [192] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_indented_raw_string_repeat1, 1, 0, 0),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [208] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [210] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1, 0, 0),
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
