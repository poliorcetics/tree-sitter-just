#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 67
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 65
#define ALIAS_COUNT 0
#define TOKEN_COUNT 43
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  sym_identifier = 1,
  anon_sym_alias = 2,
  anon_sym_COLON_EQ = 3,
  aux_sym_import_token1 = 4,
  aux_sym_mod_token1 = 5,
  anon_sym_set = 6,
  anon_sym_allow_DASHduplicate_DASHrecipes = 7,
  anon_sym_allow_DASHduplicate_DASHvariables = 8,
  anon_sym_dotenv_DASHfilename = 9,
  anon_sym_dotenv_DASHload = 10,
  anon_sym_dotenv_DASHpath = 11,
  anon_sym_dotenv_DASHrequired = 12,
  anon_sym_export = 13,
  anon_sym_fallback = 14,
  anon_sym_ignore_DASHcomments = 15,
  anon_sym_positional_DASHarguments = 16,
  anon_sym_shell = 17,
  anon_sym_tempdir = 18,
  anon_sym_unstable = 19,
  anon_sym_windows_DASHpowershell = 20,
  anon_sym_windows_DASHshell = 21,
  anon_sym_LBRACK = 22,
  anon_sym_COMMA = 23,
  anon_sym_RBRACK = 24,
  anon_sym_BQUOTE = 25,
  aux_sym_backtick_token1 = 26,
  anon_sym_DQUOTE_DQUOTE_DQUOTE = 27,
  aux_sym_indented_normal_string_token1 = 28,
  anon_sym_DQUOTE = 29,
  aux_sym_normal_string_token1 = 30,
  anon_sym_SQUOTE_SQUOTE_SQUOTE = 31,
  aux_sym_indented_raw_string_token1 = 32,
  anon_sym_SQUOTE = 33,
  aux_sym_raw_string_token1 = 34,
  anon_sym_BSLASHn = 35,
  anon_sym_BSLASHr = 36,
  anon_sym_BSLASHt = 37,
  anon_sym_BSLASH_DQUOTE = 38,
  anon_sym_BSLASH_BSLASH = 39,
  anon_sym_true = 40,
  anon_sym_false = 41,
  aux_sym_comment_token1 = 42,
  sym_file = 43,
  sym_alias = 44,
  sym_import = 45,
  sym_mod = 46,
  sym_setting = 47,
  sym__setting_boolean = 48,
  sym__setting_string = 49,
  sym__setting_list = 50,
  sym_backtick = 51,
  sym_string = 52,
  sym_indented_normal_string = 53,
  sym_normal_string = 54,
  sym_indented_raw_string = 55,
  sym_raw_string = 56,
  sym_escape_sequence = 57,
  sym_boolean = 58,
  sym_comment = 59,
  aux_sym_file_repeat1 = 60,
  aux_sym__setting_list_repeat1 = 61,
  aux_sym_indented_normal_string_repeat1 = 62,
  aux_sym_normal_string_repeat1 = 63,
  aux_sym_indented_raw_string_repeat1 = 64,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [anon_sym_alias] = "alias",
  [anon_sym_COLON_EQ] = ":=",
  [aux_sym_import_token1] = "import_token1",
  [aux_sym_mod_token1] = "mod_token1",
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
  [anon_sym_LBRACK] = "[",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACK] = "]",
  [anon_sym_BQUOTE] = "`",
  [aux_sym_backtick_token1] = "backtick_token1",
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
  [sym_alias] = "alias",
  [sym_import] = "import",
  [sym_mod] = "mod",
  [sym_setting] = "setting",
  [sym__setting_boolean] = "_setting_boolean",
  [sym__setting_string] = "_setting_string",
  [sym__setting_list] = "_setting_list",
  [sym_backtick] = "backtick",
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
  [anon_sym_alias] = anon_sym_alias,
  [anon_sym_COLON_EQ] = anon_sym_COLON_EQ,
  [aux_sym_import_token1] = aux_sym_import_token1,
  [aux_sym_mod_token1] = aux_sym_mod_token1,
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
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_BQUOTE] = anon_sym_BQUOTE,
  [aux_sym_backtick_token1] = aux_sym_backtick_token1,
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
  [sym_alias] = sym_alias,
  [sym_import] = sym_import,
  [sym_mod] = sym_mod,
  [sym_setting] = sym_setting,
  [sym__setting_boolean] = sym__setting_boolean,
  [sym__setting_string] = sym__setting_string,
  [sym__setting_list] = sym__setting_list,
  [sym_backtick] = sym_backtick,
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
  [anon_sym_alias] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_EQ] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_import_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_mod_token1] = {
    .visible = false,
    .named = false,
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
  [anon_sym_BQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_backtick_token1] = {
    .visible = false,
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
  [sym_alias] = {
    .visible = true,
    .named = true,
  },
  [sym_import] = {
    .visible = true,
    .named = true,
  },
  [sym_mod] = {
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
  [sym_backtick] = {
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
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 41,
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
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(10);
      ADVANCE_MAP(
        '"', 33,
        '#', 64,
        '\'', 47,
        ',', 17,
        ':', 9,
        '[', 16,
        '\\', 4,
        ']', 18,
        '`', 19,
        'i', 57,
        'm', 58,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1);
      if (lookahead == '"') ADVANCE(27);
      if (lookahead == '#') ADVANCE(25);
      if (lookahead == '\\') ADVANCE(28);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(26);
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2);
      if (lookahead == '#') ADVANCE(40);
      if (lookahead == '\'') ADVANCE(43);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(41);
      if (lookahead != 0) ADVANCE(45);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(33);
      if (lookahead == '#') ADVANCE(64);
      if (lookahead == '\'') ADVANCE(47);
      if (lookahead == '[') ADVANCE(16);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(54);
      if (lookahead == '\\') ADVANCE(55);
      if (lookahead == 'n') ADVANCE(51);
      if (lookahead == 'r') ADVANCE(52);
      if (lookahead == 't') ADVANCE(53);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(23);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(32);
      if (lookahead == '#') ADVANCE(37);
      if (lookahead == '\\') ADVANCE(35);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(36);
      if (lookahead != 0) ADVANCE(34);
      END_STATE();
    case 7:
      if (lookahead == '#') ADVANCE(64);
      if (lookahead == '\'') ADVANCE(46);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(7);
      END_STATE();
    case 8:
      if (lookahead == '\'') ADVANCE(38);
      END_STATE();
    case 9:
      if (lookahead == '=') ADVANCE(11);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(aux_sym_import_token1);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(aux_sym_import_token1);
      if (lookahead == '?') ADVANCE(12);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(aux_sym_mod_token1);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(aux_sym_mod_token1);
      if (lookahead == '?') ADVANCE(14);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(aux_sym_backtick_token1);
      if (lookahead == '\n') ADVANCE(22);
      if (lookahead == '`') ADVANCE(64);
      if (lookahead != 0) ADVANCE(20);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(aux_sym_backtick_token1);
      if (lookahead == '#') ADVANCE(20);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(22);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(aux_sym_backtick_token1);
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(22);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_DQUOTE_DQUOTE_DQUOTE);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(aux_sym_indented_normal_string_token1);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(aux_sym_indented_normal_string_token1);
      if (lookahead == '\n') ADVANCE(24);
      if (lookahead == '"') ADVANCE(64);
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(aux_sym_indented_normal_string_token1);
      if (lookahead == '\n') ADVANCE(29);
      if (lookahead == '"') ADVANCE(27);
      if (lookahead == '#') ADVANCE(25);
      if (lookahead == '\\') ADVANCE(28);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(26);
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(aux_sym_indented_normal_string_token1);
      if (lookahead == '"') ADVANCE(5);
      if (lookahead != 0) ADVANCE(24);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(aux_sym_indented_normal_string_token1);
      if (lookahead == '"') ADVANCE(54);
      if (lookahead == '\\') ADVANCE(55);
      if (lookahead == 'n') ADVANCE(51);
      if (lookahead == 'r') ADVANCE(52);
      if (lookahead == 't') ADVANCE(53);
      if (lookahead != 0) ADVANCE(24);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym_indented_normal_string_token1);
      if (lookahead == '"') ADVANCE(27);
      if (lookahead == '#') ADVANCE(25);
      if (lookahead == '\\') ADVANCE(28);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(26);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(31);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym_indented_normal_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(64);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym_indented_normal_string_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(24);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == '"') ADVANCE(5);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_normal_string_token1);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_normal_string_token1);
      if (lookahead == '"') ADVANCE(54);
      if (lookahead == '\\') ADVANCE(55);
      if (lookahead == 'n') ADVANCE(51);
      if (lookahead == 'r') ADVANCE(52);
      if (lookahead == 't') ADVANCE(53);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_normal_string_token1);
      if (lookahead == '#') ADVANCE(37);
      if (lookahead == '\\') ADVANCE(35);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(36);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#') ADVANCE(34);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_normal_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(64);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_SQUOTE_SQUOTE_SQUOTE);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_indented_raw_string_token1);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_indented_raw_string_token1);
      if (lookahead == '\n') ADVANCE(39);
      if (lookahead == '\'') ADVANCE(64);
      if (lookahead != 0) ADVANCE(44);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_indented_raw_string_token1);
      if (lookahead == '\n') ADVANCE(42);
      if (lookahead == '#') ADVANCE(40);
      if (lookahead == '\'') ADVANCE(43);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(41);
      if (lookahead != 0) ADVANCE(45);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_indented_raw_string_token1);
      if (lookahead == '#') ADVANCE(40);
      if (lookahead == '\'') ADVANCE(43);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(41);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(45);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_indented_raw_string_token1);
      if (lookahead == '\'') ADVANCE(8);
      if (lookahead != 0) ADVANCE(39);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_indented_raw_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(64);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_indented_raw_string_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(39);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '\'') ADVANCE(8);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_raw_string_token1);
      if (lookahead == '\n') ADVANCE(50);
      if (lookahead == '\'') ADVANCE(64);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_raw_string_token1);
      if (lookahead == '#') ADVANCE(48);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(49);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(50);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_raw_string_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(50);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_BSLASHn);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_BSLASHr);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_BSLASHt);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_BSLASH_DQUOTE);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_BSLASH_BSLASH);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(15);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(60);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(56);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(61);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(59);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(62);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(13);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(64);
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
  [5] = {.lex_state = 3},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 3},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 6},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 6},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 6},
  [40] = {.lex_state = 1},
  [41] = {.lex_state = 6},
  [42] = {.lex_state = 6},
  [43] = {.lex_state = 1},
  [44] = {.lex_state = 1},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 2},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 2},
  [50] = {.lex_state = 3},
  [51] = {.lex_state = 2},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 2},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 49},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 21},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 3},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 3},
  [64] = {.lex_state = 3},
  [65] = {.lex_state = 7},
  [66] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_comment] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_alias] = ACTIONS(1),
    [anon_sym_COLON_EQ] = ACTIONS(1),
    [aux_sym_import_token1] = ACTIONS(1),
    [aux_sym_mod_token1] = ACTIONS(1),
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
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_BQUOTE] = ACTIONS(1),
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
    [sym_file] = STATE(56),
    [sym_alias] = STATE(17),
    [sym_import] = STATE(17),
    [sym_mod] = STATE(17),
    [sym_setting] = STATE(17),
    [sym_backtick] = STATE(17),
    [sym_string] = STATE(17),
    [sym_indented_normal_string] = STATE(15),
    [sym_normal_string] = STATE(15),
    [sym_indented_raw_string] = STATE(15),
    [sym_raw_string] = STATE(15),
    [sym_comment] = STATE(1),
    [aux_sym_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_alias] = ACTIONS(9),
    [aux_sym_import_token1] = ACTIONS(11),
    [aux_sym_mod_token1] = ACTIONS(13),
    [anon_sym_set] = ACTIONS(15),
    [anon_sym_BQUOTE] = ACTIONS(17),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(23),
    [anon_sym_SQUOTE] = ACTIONS(25),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 16,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(9), 1,
      anon_sym_alias,
    ACTIONS(11), 1,
      aux_sym_import_token1,
    ACTIONS(13), 1,
      aux_sym_mod_token1,
    ACTIONS(15), 1,
      anon_sym_set,
    ACTIONS(17), 1,
      anon_sym_BQUOTE,
    ACTIONS(19), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(27), 1,
      ts_builtin_sym_end,
    STATE(2), 1,
      sym_comment,
    STATE(3), 1,
      aux_sym_file_repeat1,
    STATE(15), 4,
      sym_indented_normal_string,
      sym_normal_string,
      sym_indented_raw_string,
      sym_raw_string,
    STATE(17), 6,
      sym_alias,
      sym_import,
      sym_mod,
      sym_setting,
      sym_backtick,
      sym_string,
  [57] = 15,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(29), 1,
      ts_builtin_sym_end,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(34), 1,
      anon_sym_alias,
    ACTIONS(37), 1,
      aux_sym_import_token1,
    ACTIONS(40), 1,
      aux_sym_mod_token1,
    ACTIONS(43), 1,
      anon_sym_set,
    ACTIONS(46), 1,
      anon_sym_BQUOTE,
    ACTIONS(49), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(52), 1,
      anon_sym_DQUOTE,
    ACTIONS(55), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(58), 1,
      anon_sym_SQUOTE,
    STATE(3), 2,
      sym_comment,
      aux_sym_file_repeat1,
    STATE(15), 4,
      sym_indented_normal_string,
      sym_normal_string,
      sym_indented_raw_string,
      sym_raw_string,
    STATE(17), 6,
      sym_alias,
      sym_import,
      sym_mod,
      sym_setting,
      sym_backtick,
      sym_string,
  [112] = 10,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(19), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    STATE(4), 1,
      sym_comment,
    STATE(28), 1,
      sym_string,
    ACTIONS(61), 2,
      ts_builtin_sym_end,
      anon_sym_BQUOTE,
    STATE(15), 4,
      sym_indented_normal_string,
      sym_normal_string,
      sym_indented_raw_string,
      sym_raw_string,
    ACTIONS(63), 5,
      anon_sym_alias,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_set,
      sym_identifier,
  [151] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(65), 1,
      sym_identifier,
    STATE(5), 1,
      sym_comment,
    ACTIONS(71), 2,
      anon_sym_shell,
      anon_sym_windows_DASHshell,
    ACTIONS(69), 3,
      anon_sym_dotenv_DASHfilename,
      anon_sym_dotenv_DASHpath,
      anon_sym_tempdir,
    ACTIONS(67), 10,
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
  [182] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(77), 1,
      anon_sym_COLON_EQ,
    STATE(6), 1,
      sym_comment,
    STATE(26), 3,
      sym__setting_boolean,
      sym__setting_string,
      sym__setting_list,
    ACTIONS(73), 4,
      ts_builtin_sym_end,
      anon_sym_BQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(75), 7,
      anon_sym_alias,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_set,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_identifier,
  [212] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(7), 1,
      sym_comment,
    ACTIONS(79), 6,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_BQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(81), 7,
      anon_sym_alias,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_set,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_identifier,
  [236] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(83), 1,
      anon_sym_COLON_EQ,
    STATE(8), 1,
      sym_comment,
    STATE(26), 1,
      sym__setting_boolean,
    ACTIONS(73), 4,
      ts_builtin_sym_end,
      anon_sym_BQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(75), 7,
      anon_sym_alias,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_set,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_identifier,
  [264] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(9), 1,
      sym_comment,
    ACTIONS(85), 6,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_BQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(87), 7,
      anon_sym_alias,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_set,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_identifier,
  [288] = 11,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(19), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(89), 1,
      anon_sym_LBRACK,
    STATE(10), 1,
      sym_comment,
    STATE(19), 1,
      sym_string,
    STATE(27), 1,
      sym_boolean,
    ACTIONS(91), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(15), 4,
      sym_indented_normal_string,
      sym_normal_string,
      sym_indented_raw_string,
      sym_raw_string,
  [326] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(11), 1,
      sym_comment,
    ACTIONS(93), 6,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_BQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(95), 7,
      anon_sym_alias,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_set,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_identifier,
  [350] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(12), 1,
      sym_comment,
    ACTIONS(97), 6,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_BQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(99), 7,
      anon_sym_alias,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_set,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_identifier,
  [374] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(13), 1,
      sym_comment,
    ACTIONS(101), 6,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_BQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(103), 7,
      anon_sym_alias,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_set,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_identifier,
  [398] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(14), 1,
      sym_comment,
    ACTIONS(105), 6,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_BQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(107), 7,
      anon_sym_alias,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_set,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_identifier,
  [422] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(15), 1,
      sym_comment,
    ACTIONS(109), 6,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_BQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(111), 7,
      anon_sym_alias,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_set,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_identifier,
  [446] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(16), 1,
      sym_comment,
    ACTIONS(113), 6,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_BQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(115), 7,
      anon_sym_alias,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_set,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_identifier,
  [470] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(17), 1,
      sym_comment,
    ACTIONS(117), 4,
      ts_builtin_sym_end,
      anon_sym_BQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(119), 7,
      anon_sym_alias,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_set,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_identifier,
  [492] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(18), 1,
      sym_comment,
    ACTIONS(121), 4,
      ts_builtin_sym_end,
      anon_sym_BQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(123), 7,
      anon_sym_alias,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_set,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_identifier,
  [514] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(19), 1,
      sym_comment,
    ACTIONS(125), 4,
      ts_builtin_sym_end,
      anon_sym_BQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(127), 7,
      anon_sym_alias,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_set,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_identifier,
  [536] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(20), 1,
      sym_comment,
    ACTIONS(129), 4,
      ts_builtin_sym_end,
      anon_sym_BQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(131), 7,
      anon_sym_alias,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_set,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_identifier,
  [558] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(21), 1,
      sym_comment,
    ACTIONS(133), 4,
      ts_builtin_sym_end,
      anon_sym_BQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(135), 7,
      anon_sym_alias,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_set,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_identifier,
  [580] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(22), 1,
      sym_comment,
    ACTIONS(137), 4,
      ts_builtin_sym_end,
      anon_sym_BQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(139), 7,
      anon_sym_alias,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_set,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_identifier,
  [602] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(23), 1,
      sym_comment,
    ACTIONS(141), 4,
      ts_builtin_sym_end,
      anon_sym_BQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(143), 7,
      anon_sym_alias,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_set,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_identifier,
  [624] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(24), 1,
      sym_comment,
    ACTIONS(145), 4,
      ts_builtin_sym_end,
      anon_sym_BQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(147), 7,
      anon_sym_alias,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_set,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_identifier,
  [646] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(25), 1,
      sym_comment,
    ACTIONS(149), 4,
      ts_builtin_sym_end,
      anon_sym_BQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(151), 7,
      anon_sym_alias,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_set,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_identifier,
  [668] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(26), 1,
      sym_comment,
    ACTIONS(153), 4,
      ts_builtin_sym_end,
      anon_sym_BQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(155), 7,
      anon_sym_alias,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_set,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_identifier,
  [690] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(27), 1,
      sym_comment,
    ACTIONS(157), 4,
      ts_builtin_sym_end,
      anon_sym_BQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(159), 7,
      anon_sym_alias,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_set,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_identifier,
  [712] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(28), 1,
      sym_comment,
    ACTIONS(161), 4,
      ts_builtin_sym_end,
      anon_sym_BQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(163), 7,
      anon_sym_alias,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_set,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_identifier,
  [734] = 9,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(19), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(165), 1,
      anon_sym_RBRACK,
    STATE(29), 1,
      sym_comment,
    STATE(52), 1,
      sym_string,
    STATE(15), 4,
      sym_indented_normal_string,
      sym_normal_string,
      sym_indented_raw_string,
      sym_raw_string,
  [765] = 9,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(19), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(167), 1,
      anon_sym_RBRACK,
    STATE(30), 1,
      sym_comment,
    STATE(52), 1,
      sym_string,
    STATE(15), 4,
      sym_indented_normal_string,
      sym_normal_string,
      sym_indented_raw_string,
      sym_raw_string,
  [796] = 6,
    ACTIONS(169), 1,
      anon_sym_DQUOTE,
    ACTIONS(171), 1,
      aux_sym_normal_string_token1,
    ACTIONS(177), 1,
      aux_sym_comment_token1,
    STATE(42), 1,
      sym_escape_sequence,
    STATE(31), 2,
      sym_comment,
      aux_sym_normal_string_repeat1,
    ACTIONS(174), 5,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
  [820] = 6,
    ACTIONS(177), 1,
      aux_sym_comment_token1,
    ACTIONS(179), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(181), 1,
      aux_sym_indented_normal_string_token1,
    STATE(44), 1,
      sym_escape_sequence,
    STATE(32), 2,
      sym_comment,
      aux_sym_indented_normal_string_repeat1,
    ACTIONS(184), 5,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
  [844] = 8,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(19), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    STATE(33), 1,
      sym_comment,
    STATE(52), 1,
      sym_string,
    STATE(15), 4,
      sym_indented_normal_string,
      sym_normal_string,
      sym_indented_raw_string,
      sym_raw_string,
  [872] = 8,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(19), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    STATE(21), 1,
      sym_string,
    STATE(34), 1,
      sym_comment,
    STATE(15), 4,
      sym_indented_normal_string,
      sym_normal_string,
      sym_indented_raw_string,
      sym_raw_string,
  [900] = 7,
    ACTIONS(177), 1,
      aux_sym_comment_token1,
    ACTIONS(187), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(189), 1,
      aux_sym_indented_normal_string_token1,
    STATE(35), 1,
      sym_comment,
    STATE(40), 1,
      aux_sym_indented_normal_string_repeat1,
    STATE(44), 1,
      sym_escape_sequence,
    ACTIONS(191), 5,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
  [926] = 7,
    ACTIONS(177), 1,
      aux_sym_comment_token1,
    ACTIONS(193), 1,
      anon_sym_DQUOTE,
    ACTIONS(195), 1,
      aux_sym_normal_string_token1,
    STATE(31), 1,
      aux_sym_normal_string_repeat1,
    STATE(36), 1,
      sym_comment,
    STATE(42), 1,
      sym_escape_sequence,
    ACTIONS(197), 5,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
  [952] = 8,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(19), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    STATE(37), 1,
      sym_comment,
    STATE(45), 1,
      sym_string,
    STATE(15), 4,
      sym_indented_normal_string,
      sym_normal_string,
      sym_indented_raw_string,
      sym_raw_string,
  [980] = 8,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(19), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    STATE(19), 1,
      sym_string,
    STATE(38), 1,
      sym_comment,
    STATE(15), 4,
      sym_indented_normal_string,
      sym_normal_string,
      sym_indented_raw_string,
      sym_raw_string,
  [1008] = 7,
    ACTIONS(177), 1,
      aux_sym_comment_token1,
    ACTIONS(195), 1,
      aux_sym_normal_string_token1,
    ACTIONS(199), 1,
      anon_sym_DQUOTE,
    STATE(36), 1,
      aux_sym_normal_string_repeat1,
    STATE(39), 1,
      sym_comment,
    STATE(42), 1,
      sym_escape_sequence,
    ACTIONS(197), 5,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
  [1034] = 7,
    ACTIONS(177), 1,
      aux_sym_comment_token1,
    ACTIONS(189), 1,
      aux_sym_indented_normal_string_token1,
    ACTIONS(201), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(32), 1,
      aux_sym_indented_normal_string_repeat1,
    STATE(40), 1,
      sym_comment,
    STATE(44), 1,
      sym_escape_sequence,
    ACTIONS(191), 5,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
  [1060] = 3,
    ACTIONS(177), 1,
      aux_sym_comment_token1,
    STATE(41), 1,
      sym_comment,
    ACTIONS(203), 7,
      anon_sym_DQUOTE,
      aux_sym_normal_string_token1,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
  [1076] = 3,
    ACTIONS(177), 1,
      aux_sym_comment_token1,
    STATE(42), 1,
      sym_comment,
    ACTIONS(205), 7,
      anon_sym_DQUOTE,
      aux_sym_normal_string_token1,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
  [1092] = 3,
    ACTIONS(177), 1,
      aux_sym_comment_token1,
    STATE(43), 1,
      sym_comment,
    ACTIONS(203), 7,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      aux_sym_indented_normal_string_token1,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
  [1108] = 3,
    ACTIONS(177), 1,
      aux_sym_comment_token1,
    STATE(44), 1,
      sym_comment,
    ACTIONS(207), 7,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      aux_sym_indented_normal_string_token1,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
  [1124] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(209), 1,
      anon_sym_COMMA,
    ACTIONS(211), 1,
      anon_sym_RBRACK,
    STATE(45), 1,
      sym_comment,
    STATE(48), 1,
      aux_sym__setting_list_repeat1,
  [1140] = 5,
    ACTIONS(177), 1,
      aux_sym_comment_token1,
    ACTIONS(213), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(215), 1,
      aux_sym_indented_raw_string_token1,
    STATE(46), 1,
      sym_comment,
    STATE(49), 1,
      aux_sym_indented_raw_string_repeat1,
  [1156] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(217), 1,
      anon_sym_COMMA,
    ACTIONS(220), 1,
      anon_sym_RBRACK,
    STATE(47), 2,
      sym_comment,
      aux_sym__setting_list_repeat1,
  [1170] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(165), 1,
      anon_sym_RBRACK,
    ACTIONS(222), 1,
      anon_sym_COMMA,
    STATE(47), 1,
      aux_sym__setting_list_repeat1,
    STATE(48), 1,
      sym_comment,
  [1186] = 4,
    ACTIONS(177), 1,
      aux_sym_comment_token1,
    ACTIONS(224), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(226), 1,
      aux_sym_indented_raw_string_token1,
    STATE(49), 2,
      sym_comment,
      aux_sym_indented_raw_string_repeat1,
  [1200] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(27), 1,
      sym_boolean,
    STATE(50), 1,
      sym_comment,
    ACTIONS(91), 2,
      anon_sym_true,
      anon_sym_false,
  [1214] = 5,
    ACTIONS(177), 1,
      aux_sym_comment_token1,
    ACTIONS(215), 1,
      aux_sym_indented_raw_string_token1,
    ACTIONS(229), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    STATE(46), 1,
      aux_sym_indented_raw_string_repeat1,
    STATE(51), 1,
      sym_comment,
  [1230] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(52), 1,
      sym_comment,
    ACTIONS(220), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1241] = 3,
    ACTIONS(177), 1,
      aux_sym_comment_token1,
    STATE(53), 1,
      sym_comment,
    ACTIONS(231), 2,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      aux_sym_indented_raw_string_token1,
  [1252] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(233), 1,
      anon_sym_COLON_EQ,
    STATE(26), 1,
      sym__setting_list,
    STATE(54), 1,
      sym_comment,
  [1265] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(235), 1,
      anon_sym_COLON_EQ,
    STATE(26), 1,
      sym__setting_string,
    STATE(55), 1,
      sym_comment,
  [1278] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(237), 1,
      ts_builtin_sym_end,
    STATE(56), 1,
      sym_comment,
  [1288] = 3,
    ACTIONS(177), 1,
      aux_sym_comment_token1,
    ACTIONS(239), 1,
      aux_sym_raw_string_token1,
    STATE(57), 1,
      sym_comment,
  [1298] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(89), 1,
      anon_sym_LBRACK,
    STATE(58), 1,
      sym_comment,
  [1308] = 3,
    ACTIONS(177), 1,
      aux_sym_comment_token1,
    ACTIONS(241), 1,
      aux_sym_backtick_token1,
    STATE(59), 1,
      sym_comment,
  [1318] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(243), 1,
      anon_sym_COLON_EQ,
    STATE(60), 1,
      sym_comment,
  [1328] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(245), 1,
      sym_identifier,
    STATE(61), 1,
      sym_comment,
  [1338] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(247), 1,
      anon_sym_BQUOTE,
    STATE(62), 1,
      sym_comment,
  [1348] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(249), 1,
      sym_identifier,
    STATE(63), 1,
      sym_comment,
  [1358] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(251), 1,
      sym_identifier,
    STATE(64), 1,
      sym_comment,
  [1368] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(253), 1,
      anon_sym_SQUOTE,
    STATE(65), 1,
      sym_comment,
  [1378] = 1,
    ACTIONS(255), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 57,
  [SMALL_STATE(4)] = 112,
  [SMALL_STATE(5)] = 151,
  [SMALL_STATE(6)] = 182,
  [SMALL_STATE(7)] = 212,
  [SMALL_STATE(8)] = 236,
  [SMALL_STATE(9)] = 264,
  [SMALL_STATE(10)] = 288,
  [SMALL_STATE(11)] = 326,
  [SMALL_STATE(12)] = 350,
  [SMALL_STATE(13)] = 374,
  [SMALL_STATE(14)] = 398,
  [SMALL_STATE(15)] = 422,
  [SMALL_STATE(16)] = 446,
  [SMALL_STATE(17)] = 470,
  [SMALL_STATE(18)] = 492,
  [SMALL_STATE(19)] = 514,
  [SMALL_STATE(20)] = 536,
  [SMALL_STATE(21)] = 558,
  [SMALL_STATE(22)] = 580,
  [SMALL_STATE(23)] = 602,
  [SMALL_STATE(24)] = 624,
  [SMALL_STATE(25)] = 646,
  [SMALL_STATE(26)] = 668,
  [SMALL_STATE(27)] = 690,
  [SMALL_STATE(28)] = 712,
  [SMALL_STATE(29)] = 734,
  [SMALL_STATE(30)] = 765,
  [SMALL_STATE(31)] = 796,
  [SMALL_STATE(32)] = 820,
  [SMALL_STATE(33)] = 844,
  [SMALL_STATE(34)] = 872,
  [SMALL_STATE(35)] = 900,
  [SMALL_STATE(36)] = 926,
  [SMALL_STATE(37)] = 952,
  [SMALL_STATE(38)] = 980,
  [SMALL_STATE(39)] = 1008,
  [SMALL_STATE(40)] = 1034,
  [SMALL_STATE(41)] = 1060,
  [SMALL_STATE(42)] = 1076,
  [SMALL_STATE(43)] = 1092,
  [SMALL_STATE(44)] = 1108,
  [SMALL_STATE(45)] = 1124,
  [SMALL_STATE(46)] = 1140,
  [SMALL_STATE(47)] = 1156,
  [SMALL_STATE(48)] = 1170,
  [SMALL_STATE(49)] = 1186,
  [SMALL_STATE(50)] = 1200,
  [SMALL_STATE(51)] = 1214,
  [SMALL_STATE(52)] = 1230,
  [SMALL_STATE(53)] = 1241,
  [SMALL_STATE(54)] = 1252,
  [SMALL_STATE(55)] = 1265,
  [SMALL_STATE(56)] = 1278,
  [SMALL_STATE(57)] = 1288,
  [SMALL_STATE(58)] = 1298,
  [SMALL_STATE(59)] = 1308,
  [SMALL_STATE(60)] = 1318,
  [SMALL_STATE(61)] = 1328,
  [SMALL_STATE(62)] = 1338,
  [SMALL_STATE(63)] = 1348,
  [SMALL_STATE(64)] = 1358,
  [SMALL_STATE(65)] = 1368,
  [SMALL_STATE(66)] = 1378,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file, 1, 0, 0),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0),
  [31] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(17),
  [34] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(64),
  [37] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(34),
  [40] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(61),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(59),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(35),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(39),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(51),
  [58] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(57),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mod, 2, 0, 0),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mod, 2, 0, 0),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting, 2, 0, 0),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_setting, 2, 0, 0),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_normal_string, 3, 0, 0),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_normal_string, 3, 0, 0),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_normal_string, 2, 0, 0),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_normal_string, 2, 0, 0),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_indented_normal_string, 2, 0, 0),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_indented_normal_string, 2, 0, 0),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_indented_normal_string, 3, 0, 0),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_indented_normal_string, 3, 0, 0),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_indented_raw_string, 2, 0, 0),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_indented_raw_string, 2, 0, 0),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_raw_string, 3, 0, 0),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_raw_string, 3, 0, 0),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1, 0, 0),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 1, 0, 0),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_indented_raw_string, 3, 0, 0),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_indented_raw_string, 3, 0, 0),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 1, 0, 0),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 1, 0, 0),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__setting_list, 6, 0, 0),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__setting_list, 6, 0, 0),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__setting_string, 2, 0, 0),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__setting_string, 2, 0, 0),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__setting_list, 4, 0, 0),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__setting_list, 4, 0, 0),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 2, 0, 0),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import, 2, 0, 0),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__setting_list, 5, 0, 0),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__setting_list, 5, 0, 0),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias, 4, 0, 0),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_alias, 4, 0, 0),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_backtick, 3, 0, 0),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_backtick, 3, 0, 0),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1, 0, 0),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1, 0, 0),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting, 3, 0, 0),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_setting, 3, 0, 0),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__setting_boolean, 2, 0, 0),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__setting_boolean, 2, 0, 0),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mod, 3, 0, 0),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mod, 3, 0, 0),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_normal_string_repeat1, 2, 0, 0),
  [171] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_normal_string_repeat1, 2, 0, 0), SHIFT_REPEAT(42),
  [174] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_normal_string_repeat1, 2, 0, 0), SHIFT_REPEAT(41),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_indented_normal_string_repeat1, 2, 0, 0),
  [181] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_indented_normal_string_repeat1, 2, 0, 0), SHIFT_REPEAT(44),
  [184] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_indented_normal_string_repeat1, 2, 0, 0), SHIFT_REPEAT(43),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_escape_sequence, 1, 0, 0),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_normal_string_repeat1, 1, 0, 0),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_indented_normal_string_repeat1, 1, 0, 0),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [215] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [217] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__setting_list_repeat1, 2, 0, 0), SHIFT_REPEAT(33),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__setting_list_repeat1, 2, 0, 0),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_indented_raw_string_repeat1, 2, 0, 0),
  [226] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_indented_raw_string_repeat1, 2, 0, 0), SHIFT_REPEAT(53),
  [229] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_indented_raw_string_repeat1, 1, 0, 0),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [237] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [239] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [241] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1, 0, 0),
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
