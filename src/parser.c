#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 126
#define LARGE_STATE_COUNT 58
#define SYMBOL_COUNT 134
#define ALIAS_COUNT 0
#define TOKEN_COUNT 99
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 2

enum ts_symbol_identifiers {
  sym_identifier = 1,
  anon_sym_alias = 2,
  anon_sym_COLON_EQ = 3,
  aux_sym_import_token1 = 4,
  aux_sym_mod_token1 = 5,
  anon_sym_LPAREN = 6,
  anon_sym_RPAREN = 7,
  anon_sym_arch = 8,
  anon_sym_num_cpus = 9,
  anon_sym_os = 10,
  anon_sym_os_family = 11,
  anon_sym_shell = 12,
  anon_sym_env_var = 13,
  anon_sym_env_var_or_default = 14,
  anon_sym_env = 15,
  anon_sym_is_dependency = 16,
  anon_sym_invocation_dir = 17,
  anon_sym_invocation_dir_native = 18,
  anon_sym_invocation_directory = 19,
  anon_sym_invocation_directory_native = 20,
  anon_sym_justfile = 21,
  anon_sym_justfile_dir = 22,
  anon_sym_justfile_directory = 23,
  anon_sym_source_dir = 24,
  anon_sym_source_directory = 25,
  anon_sym_source_file = 26,
  anon_sym_just_executable = 27,
  anon_sym_just_pid = 28,
  anon_sym_append = 29,
  anon_sym_prepend = 30,
  anon_sym_encode_uri_component = 31,
  anon_sym_quote = 32,
  anon_sym_replace = 33,
  anon_sym_replace_regex = 34,
  anon_sym_trim = 35,
  anon_sym_trim_end = 36,
  anon_sym_trim_end_match = 37,
  anon_sym_trim_end_matches = 38,
  anon_sym_trim_start = 39,
  anon_sym_trim_start_match = 40,
  anon_sym_trim_start_matches = 41,
  anon_sym_capitalize = 42,
  anon_sym_kebabcase = 43,
  anon_sym_lowercamelcase = 44,
  anon_sym_lowercase = 45,
  anon_sym_shoutykebabcase = 46,
  anon_sym_shoutysnakecase = 47,
  anon_sym_snakecase = 48,
  anon_sym_titlecase = 49,
  anon_sym_uppercamelcase = 50,
  anon_sym_uppercase = 51,
  anon_sym_absolute_path = 52,
  anon_sym_canonicalize = 53,
  anon_sym_extension = 54,
  anon_sym_file_name = 55,
  anon_sym_file_stem = 56,
  anon_sym_parent_directory = 57,
  anon_sym_without_extension = 58,
  anon_sym_clean = 59,
  anon_sym_join = 60,
  anon_sym_COMMA = 61,
  anon_sym_set = 62,
  anon_sym_allow_DASHduplicate_DASHrecipes = 63,
  anon_sym_allow_DASHduplicate_DASHvariables = 64,
  anon_sym_dotenv_DASHfilename = 65,
  anon_sym_dotenv_DASHload = 66,
  anon_sym_dotenv_DASHpath = 67,
  anon_sym_dotenv_DASHrequired = 68,
  anon_sym_export = 69,
  anon_sym_fallback = 70,
  anon_sym_ignore_DASHcomments = 71,
  anon_sym_positional_DASHarguments = 72,
  anon_sym_tempdir = 73,
  anon_sym_unstable = 74,
  anon_sym_windows_DASHpowershell = 75,
  anon_sym_windows_DASHshell = 76,
  anon_sym_LBRACK = 77,
  anon_sym_RBRACK = 78,
  anon_sym_BQUOTE = 79,
  aux_sym_backtick_token1 = 80,
  anon_sym_BQUOTE_BQUOTE_BQUOTE = 81,
  aux_sym_indented_backtick_token1 = 82,
  anon_sym_DQUOTE_DQUOTE_DQUOTE = 83,
  aux_sym_indented_normal_string_token1 = 84,
  anon_sym_DQUOTE = 85,
  aux_sym_normal_string_token1 = 86,
  anon_sym_SQUOTE_SQUOTE_SQUOTE = 87,
  aux_sym_indented_raw_string_token1 = 88,
  anon_sym_SQUOTE = 89,
  aux_sym_raw_string_token1 = 90,
  anon_sym_BSLASHn = 91,
  anon_sym_BSLASHr = 92,
  anon_sym_BSLASHt = 93,
  anon_sym_BSLASH_DQUOTE = 94,
  anon_sym_BSLASH_BSLASH = 95,
  anon_sym_true = 96,
  anon_sym_false = 97,
  aux_sym_comment_token1 = 98,
  sym_file = 99,
  sym_alias = 100,
  sym_import = 101,
  sym_mod = 102,
  sym_expression = 103,
  sym_value = 104,
  sym_builtin_function_call = 105,
  sym__p0 = 106,
  sym__p1 = 107,
  sym__p2 = 108,
  sym__p3 = 109,
  sym__pN = 110,
  sym_function_call = 111,
  sym_function_parameters = 112,
  sym_setting = 113,
  sym__setting_boolean = 114,
  sym__setting_string = 115,
  sym__setting_list = 116,
  sym_backtick = 117,
  sym_indented_backtick = 118,
  sym_string = 119,
  sym_indented_normal_string = 120,
  sym_normal_string = 121,
  sym_indented_raw_string = 122,
  sym_raw_string = 123,
  sym_escape_sequence = 124,
  sym_boolean = 125,
  sym_comment = 126,
  aux_sym_file_repeat1 = 127,
  aux_sym_function_parameters_repeat1 = 128,
  aux_sym__setting_list_repeat1 = 129,
  aux_sym_indented_backtick_repeat1 = 130,
  aux_sym_indented_normal_string_repeat1 = 131,
  aux_sym_normal_string_repeat1 = 132,
  aux_sym_indented_raw_string_repeat1 = 133,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [anon_sym_alias] = "alias",
  [anon_sym_COLON_EQ] = ":=",
  [aux_sym_import_token1] = "import_token1",
  [aux_sym_mod_token1] = "mod_token1",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_arch] = "arch",
  [anon_sym_num_cpus] = "num_cpus",
  [anon_sym_os] = "os",
  [anon_sym_os_family] = "os_family",
  [anon_sym_shell] = "shell",
  [anon_sym_env_var] = "env_var",
  [anon_sym_env_var_or_default] = "env_var_or_default",
  [anon_sym_env] = "env",
  [anon_sym_is_dependency] = "is_dependency",
  [anon_sym_invocation_dir] = "invocation_dir",
  [anon_sym_invocation_dir_native] = "invocation_dir_native",
  [anon_sym_invocation_directory] = "invocation_directory",
  [anon_sym_invocation_directory_native] = "invocation_directory_native",
  [anon_sym_justfile] = "justfile",
  [anon_sym_justfile_dir] = "justfile_dir",
  [anon_sym_justfile_directory] = "justfile_directory",
  [anon_sym_source_dir] = "source_dir",
  [anon_sym_source_directory] = "source_directory",
  [anon_sym_source_file] = "source_file",
  [anon_sym_just_executable] = "just_executable",
  [anon_sym_just_pid] = "just_pid",
  [anon_sym_append] = "append",
  [anon_sym_prepend] = "prepend",
  [anon_sym_encode_uri_component] = "encode_uri_component",
  [anon_sym_quote] = "quote",
  [anon_sym_replace] = "replace",
  [anon_sym_replace_regex] = "replace_regex",
  [anon_sym_trim] = "trim",
  [anon_sym_trim_end] = "trim_end",
  [anon_sym_trim_end_match] = "trim_end_match",
  [anon_sym_trim_end_matches] = "trim_end_matches",
  [anon_sym_trim_start] = "trim_start",
  [anon_sym_trim_start_match] = "trim_start_match",
  [anon_sym_trim_start_matches] = "trim_start_matches",
  [anon_sym_capitalize] = "capitalize",
  [anon_sym_kebabcase] = "kebabcase",
  [anon_sym_lowercamelcase] = "lowercamelcase",
  [anon_sym_lowercase] = "lowercase",
  [anon_sym_shoutykebabcase] = "shoutykebabcase",
  [anon_sym_shoutysnakecase] = "shoutysnakecase",
  [anon_sym_snakecase] = "snakecase",
  [anon_sym_titlecase] = "titlecase",
  [anon_sym_uppercamelcase] = "uppercamelcase",
  [anon_sym_uppercase] = "uppercase",
  [anon_sym_absolute_path] = "absolute_path",
  [anon_sym_canonicalize] = "canonicalize",
  [anon_sym_extension] = "extension",
  [anon_sym_file_name] = "file_name",
  [anon_sym_file_stem] = "file_stem",
  [anon_sym_parent_directory] = "parent_directory",
  [anon_sym_without_extension] = "without_extension",
  [anon_sym_clean] = "clean",
  [anon_sym_join] = "join",
  [anon_sym_COMMA] = ",",
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
  [anon_sym_tempdir] = "tempdir",
  [anon_sym_unstable] = "unstable",
  [anon_sym_windows_DASHpowershell] = "windows-powershell",
  [anon_sym_windows_DASHshell] = "windows-shell",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_BQUOTE] = "`",
  [aux_sym_backtick_token1] = "backtick_token1",
  [anon_sym_BQUOTE_BQUOTE_BQUOTE] = "```",
  [aux_sym_indented_backtick_token1] = "indented_backtick_token1",
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
  [sym_expression] = "expression",
  [sym_value] = "value",
  [sym_builtin_function_call] = "builtin_function_call",
  [sym__p0] = "_p0",
  [sym__p1] = "_p1",
  [sym__p2] = "_p2",
  [sym__p3] = "_p3",
  [sym__pN] = "_pN",
  [sym_function_call] = "function_call",
  [sym_function_parameters] = "function_parameters",
  [sym_setting] = "setting",
  [sym__setting_boolean] = "_setting_boolean",
  [sym__setting_string] = "_setting_string",
  [sym__setting_list] = "_setting_list",
  [sym_backtick] = "backtick",
  [sym_indented_backtick] = "indented_backtick",
  [sym_string] = "string",
  [sym_indented_normal_string] = "indented_normal_string",
  [sym_normal_string] = "normal_string",
  [sym_indented_raw_string] = "indented_raw_string",
  [sym_raw_string] = "raw_string",
  [sym_escape_sequence] = "escape_sequence",
  [sym_boolean] = "boolean",
  [sym_comment] = "comment",
  [aux_sym_file_repeat1] = "file_repeat1",
  [aux_sym_function_parameters_repeat1] = "function_parameters_repeat1",
  [aux_sym__setting_list_repeat1] = "_setting_list_repeat1",
  [aux_sym_indented_backtick_repeat1] = "indented_backtick_repeat1",
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
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_arch] = anon_sym_arch,
  [anon_sym_num_cpus] = anon_sym_num_cpus,
  [anon_sym_os] = anon_sym_os,
  [anon_sym_os_family] = anon_sym_os_family,
  [anon_sym_shell] = anon_sym_shell,
  [anon_sym_env_var] = anon_sym_env_var,
  [anon_sym_env_var_or_default] = anon_sym_env_var_or_default,
  [anon_sym_env] = anon_sym_env,
  [anon_sym_is_dependency] = anon_sym_is_dependency,
  [anon_sym_invocation_dir] = anon_sym_invocation_dir,
  [anon_sym_invocation_dir_native] = anon_sym_invocation_dir_native,
  [anon_sym_invocation_directory] = anon_sym_invocation_directory,
  [anon_sym_invocation_directory_native] = anon_sym_invocation_directory_native,
  [anon_sym_justfile] = anon_sym_justfile,
  [anon_sym_justfile_dir] = anon_sym_justfile_dir,
  [anon_sym_justfile_directory] = anon_sym_justfile_directory,
  [anon_sym_source_dir] = anon_sym_source_dir,
  [anon_sym_source_directory] = anon_sym_source_directory,
  [anon_sym_source_file] = anon_sym_source_file,
  [anon_sym_just_executable] = anon_sym_just_executable,
  [anon_sym_just_pid] = anon_sym_just_pid,
  [anon_sym_append] = anon_sym_append,
  [anon_sym_prepend] = anon_sym_prepend,
  [anon_sym_encode_uri_component] = anon_sym_encode_uri_component,
  [anon_sym_quote] = anon_sym_quote,
  [anon_sym_replace] = anon_sym_replace,
  [anon_sym_replace_regex] = anon_sym_replace_regex,
  [anon_sym_trim] = anon_sym_trim,
  [anon_sym_trim_end] = anon_sym_trim_end,
  [anon_sym_trim_end_match] = anon_sym_trim_end_match,
  [anon_sym_trim_end_matches] = anon_sym_trim_end_matches,
  [anon_sym_trim_start] = anon_sym_trim_start,
  [anon_sym_trim_start_match] = anon_sym_trim_start_match,
  [anon_sym_trim_start_matches] = anon_sym_trim_start_matches,
  [anon_sym_capitalize] = anon_sym_capitalize,
  [anon_sym_kebabcase] = anon_sym_kebabcase,
  [anon_sym_lowercamelcase] = anon_sym_lowercamelcase,
  [anon_sym_lowercase] = anon_sym_lowercase,
  [anon_sym_shoutykebabcase] = anon_sym_shoutykebabcase,
  [anon_sym_shoutysnakecase] = anon_sym_shoutysnakecase,
  [anon_sym_snakecase] = anon_sym_snakecase,
  [anon_sym_titlecase] = anon_sym_titlecase,
  [anon_sym_uppercamelcase] = anon_sym_uppercamelcase,
  [anon_sym_uppercase] = anon_sym_uppercase,
  [anon_sym_absolute_path] = anon_sym_absolute_path,
  [anon_sym_canonicalize] = anon_sym_canonicalize,
  [anon_sym_extension] = anon_sym_extension,
  [anon_sym_file_name] = anon_sym_file_name,
  [anon_sym_file_stem] = anon_sym_file_stem,
  [anon_sym_parent_directory] = anon_sym_parent_directory,
  [anon_sym_without_extension] = anon_sym_without_extension,
  [anon_sym_clean] = anon_sym_clean,
  [anon_sym_join] = anon_sym_join,
  [anon_sym_COMMA] = anon_sym_COMMA,
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
  [anon_sym_tempdir] = anon_sym_tempdir,
  [anon_sym_unstable] = anon_sym_unstable,
  [anon_sym_windows_DASHpowershell] = anon_sym_windows_DASHpowershell,
  [anon_sym_windows_DASHshell] = anon_sym_windows_DASHshell,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_BQUOTE] = anon_sym_BQUOTE,
  [aux_sym_backtick_token1] = aux_sym_backtick_token1,
  [anon_sym_BQUOTE_BQUOTE_BQUOTE] = anon_sym_BQUOTE_BQUOTE_BQUOTE,
  [aux_sym_indented_backtick_token1] = aux_sym_indented_backtick_token1,
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
  [sym_expression] = sym_expression,
  [sym_value] = sym_value,
  [sym_builtin_function_call] = sym_builtin_function_call,
  [sym__p0] = sym__p0,
  [sym__p1] = sym__p1,
  [sym__p2] = sym__p2,
  [sym__p3] = sym__p3,
  [sym__pN] = sym__pN,
  [sym_function_call] = sym_function_call,
  [sym_function_parameters] = sym_function_parameters,
  [sym_setting] = sym_setting,
  [sym__setting_boolean] = sym__setting_boolean,
  [sym__setting_string] = sym__setting_string,
  [sym__setting_list] = sym__setting_list,
  [sym_backtick] = sym_backtick,
  [sym_indented_backtick] = sym_indented_backtick,
  [sym_string] = sym_string,
  [sym_indented_normal_string] = sym_indented_normal_string,
  [sym_normal_string] = sym_normal_string,
  [sym_indented_raw_string] = sym_indented_raw_string,
  [sym_raw_string] = sym_raw_string,
  [sym_escape_sequence] = sym_escape_sequence,
  [sym_boolean] = sym_boolean,
  [sym_comment] = sym_comment,
  [aux_sym_file_repeat1] = aux_sym_file_repeat1,
  [aux_sym_function_parameters_repeat1] = aux_sym_function_parameters_repeat1,
  [aux_sym__setting_list_repeat1] = aux_sym__setting_list_repeat1,
  [aux_sym_indented_backtick_repeat1] = aux_sym_indented_backtick_repeat1,
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
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_arch] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_num_cpus] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_os] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_os_family] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_shell] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_env_var] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_env_var_or_default] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_env] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_is_dependency] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_invocation_dir] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_invocation_dir_native] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_invocation_directory] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_invocation_directory_native] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_justfile] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_justfile_dir] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_justfile_directory] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_source_dir] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_source_directory] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_source_file] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_just_executable] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_just_pid] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_append] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_prepend] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_encode_uri_component] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_quote] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_replace] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_replace_regex] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_trim] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_trim_end] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_trim_end_match] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_trim_end_matches] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_trim_start] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_trim_start_match] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_trim_start_matches] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_capitalize] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_kebabcase] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lowercamelcase] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lowercase] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_shoutykebabcase] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_shoutysnakecase] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_snakecase] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_titlecase] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uppercamelcase] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uppercase] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_absolute_path] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_canonicalize] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_extension] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_file_name] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_file_stem] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_parent_directory] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_without_extension] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_clean] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_join] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
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
  [anon_sym_BQUOTE_BQUOTE_BQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_indented_backtick_token1] = {
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
  [sym_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_value] = {
    .visible = true,
    .named = true,
  },
  [sym_builtin_function_call] = {
    .visible = true,
    .named = true,
  },
  [sym__p0] = {
    .visible = false,
    .named = true,
  },
  [sym__p1] = {
    .visible = false,
    .named = true,
  },
  [sym__p2] = {
    .visible = false,
    .named = true,
  },
  [sym__p3] = {
    .visible = false,
    .named = true,
  },
  [sym__pN] = {
    .visible = false,
    .named = true,
  },
  [sym_function_call] = {
    .visible = true,
    .named = true,
  },
  [sym_function_parameters] = {
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
  [sym_indented_backtick] = {
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
  [aux_sym_function_parameters_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__setting_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_indented_backtick_repeat1] = {
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

enum ts_field_identifiers {
  field_function_name = 1,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_function_name] = "function_name",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_function_name, 0},
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
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 72,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(12);
      ADVANCE_MAP(
        '"', 46,
        '#', 77,
        '\'', 60,
        '(', 18,
        ')', 19,
        ',', 20,
        ':', 10,
        '[', 21,
        '\\', 5,
        ']', 22,
        '`', 24,
        'i', 70,
        'm', 71,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1);
      if (lookahead == '"') ADVANCE(40);
      if (lookahead == '#') ADVANCE(38);
      if (lookahead == '\\') ADVANCE(41);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(39);
      if (lookahead != 0) ADVANCE(44);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2);
      if (lookahead == '#') ADVANCE(30);
      if (lookahead == '`') ADVANCE(33);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(31);
      if (lookahead != 0) ADVANCE(35);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(3);
      if (lookahead == '#') ADVANCE(53);
      if (lookahead == '\'') ADVANCE(56);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(54);
      if (lookahead != 0) ADVANCE(58);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(46);
      if (lookahead == '#') ADVANCE(77);
      if (lookahead == '\'') ADVANCE(60);
      if (lookahead == '(') ADVANCE(18);
      if (lookahead == ')') ADVANCE(19);
      if (lookahead == '[') ADVANCE(21);
      if (lookahead == '`') ADVANCE(24);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(67);
      if (lookahead == '\\') ADVANCE(68);
      if (lookahead == 'n') ADVANCE(64);
      if (lookahead == 'r') ADVANCE(65);
      if (lookahead == 't') ADVANCE(66);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(36);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(45);
      if (lookahead == '#') ADVANCE(50);
      if (lookahead == '\\') ADVANCE(48);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(49);
      if (lookahead != 0) ADVANCE(47);
      END_STATE();
    case 8:
      if (lookahead == '#') ADVANCE(77);
      if (lookahead == '\'') ADVANCE(59);
      if (lookahead == '`') ADVANCE(23);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(8);
      END_STATE();
    case 9:
      if (lookahead == '\'') ADVANCE(51);
      END_STATE();
    case 10:
      if (lookahead == '=') ADVANCE(13);
      END_STATE();
    case 11:
      if (lookahead == '`') ADVANCE(28);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(aux_sym_import_token1);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(aux_sym_import_token1);
      if (lookahead == '?') ADVANCE(14);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(aux_sym_mod_token1);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(aux_sym_mod_token1);
      if (lookahead == '?') ADVANCE(16);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      if (lookahead == '`') ADVANCE(11);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(aux_sym_backtick_token1);
      if (lookahead == '\n') ADVANCE(27);
      if (lookahead == '`') ADVANCE(77);
      if (lookahead != 0) ADVANCE(25);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(aux_sym_backtick_token1);
      if (lookahead == '#') ADVANCE(25);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(26);
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(27);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(aux_sym_backtick_token1);
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(27);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_BQUOTE_BQUOTE_BQUOTE);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym_indented_backtick_token1);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym_indented_backtick_token1);
      if (lookahead == '\n') ADVANCE(29);
      if (lookahead == '`') ADVANCE(77);
      if (lookahead != 0) ADVANCE(34);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym_indented_backtick_token1);
      if (lookahead == '\n') ADVANCE(32);
      if (lookahead == '#') ADVANCE(30);
      if (lookahead == '`') ADVANCE(33);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(31);
      if (lookahead != 0) ADVANCE(35);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym_indented_backtick_token1);
      if (lookahead == '#') ADVANCE(30);
      if (lookahead == '`') ADVANCE(33);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(31);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(35);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_indented_backtick_token1);
      if (lookahead == '`') ADVANCE(11);
      if (lookahead != 0) ADVANCE(29);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_indented_backtick_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(77);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_indented_backtick_token1);
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(29);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_DQUOTE_DQUOTE_DQUOTE);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_indented_normal_string_token1);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_indented_normal_string_token1);
      if (lookahead == '\n') ADVANCE(37);
      if (lookahead == '"') ADVANCE(77);
      if (lookahead != 0) ADVANCE(43);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_indented_normal_string_token1);
      if (lookahead == '\n') ADVANCE(42);
      if (lookahead == '"') ADVANCE(40);
      if (lookahead == '#') ADVANCE(38);
      if (lookahead == '\\') ADVANCE(41);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(39);
      if (lookahead != 0) ADVANCE(44);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_indented_normal_string_token1);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead != 0) ADVANCE(37);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_indented_normal_string_token1);
      if (lookahead == '"') ADVANCE(67);
      if (lookahead == '\\') ADVANCE(68);
      if (lookahead == 'n') ADVANCE(64);
      if (lookahead == 'r') ADVANCE(65);
      if (lookahead == 't') ADVANCE(66);
      if (lookahead != 0) ADVANCE(37);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_indented_normal_string_token1);
      if (lookahead == '"') ADVANCE(40);
      if (lookahead == '#') ADVANCE(38);
      if (lookahead == '\\') ADVANCE(41);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(39);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(44);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_indented_normal_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(77);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_indented_normal_string_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(37);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == '"') ADVANCE(6);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_normal_string_token1);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_normal_string_token1);
      if (lookahead == '"') ADVANCE(67);
      if (lookahead == '\\') ADVANCE(68);
      if (lookahead == 'n') ADVANCE(64);
      if (lookahead == 'r') ADVANCE(65);
      if (lookahead == 't') ADVANCE(66);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_normal_string_token1);
      if (lookahead == '#') ADVANCE(50);
      if (lookahead == '\\') ADVANCE(48);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(49);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#') ADVANCE(47);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_normal_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(77);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_SQUOTE_SQUOTE_SQUOTE);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_indented_raw_string_token1);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_indented_raw_string_token1);
      if (lookahead == '\n') ADVANCE(52);
      if (lookahead == '\'') ADVANCE(77);
      if (lookahead != 0) ADVANCE(57);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_indented_raw_string_token1);
      if (lookahead == '\n') ADVANCE(55);
      if (lookahead == '#') ADVANCE(53);
      if (lookahead == '\'') ADVANCE(56);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(54);
      if (lookahead != 0) ADVANCE(58);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_indented_raw_string_token1);
      if (lookahead == '#') ADVANCE(53);
      if (lookahead == '\'') ADVANCE(56);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(54);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(58);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_indented_raw_string_token1);
      if (lookahead == '\'') ADVANCE(9);
      if (lookahead != 0) ADVANCE(52);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_indented_raw_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(77);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_indented_raw_string_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(52);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '\'') ADVANCE(9);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_raw_string_token1);
      if (lookahead == '\n') ADVANCE(63);
      if (lookahead == '\'') ADVANCE(77);
      if (lookahead != 0) ADVANCE(61);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_raw_string_token1);
      if (lookahead == '#') ADVANCE(61);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(62);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(63);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_raw_string_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(63);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_BSLASHn);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_BSLASHr);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_BSLASHt);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_BSLASH_DQUOTE);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_BSLASH_BSLASH);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(17);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(73);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(69);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(74);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(72);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(75);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(15);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(77);
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
        'c', 2,
        'd', 3,
        'e', 4,
        'f', 5,
        'i', 6,
        'j', 7,
        'k', 8,
        'l', 9,
        'n', 10,
        'o', 11,
        'p', 12,
        'q', 13,
        'r', 14,
        's', 15,
        't', 16,
        'u', 17,
        'w', 18,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      END_STATE();
    case 1:
      if (lookahead == 'b') ADVANCE(19);
      if (lookahead == 'l') ADVANCE(20);
      if (lookahead == 'p') ADVANCE(21);
      if (lookahead == 'r') ADVANCE(22);
      END_STATE();
    case 2:
      if (lookahead == 'a') ADVANCE(23);
      if (lookahead == 'l') ADVANCE(24);
      END_STATE();
    case 3:
      if (lookahead == 'o') ADVANCE(25);
      END_STATE();
    case 4:
      if (lookahead == 'n') ADVANCE(26);
      if (lookahead == 'x') ADVANCE(27);
      END_STATE();
    case 5:
      if (lookahead == 'a') ADVANCE(28);
      if (lookahead == 'i') ADVANCE(29);
      END_STATE();
    case 6:
      if (lookahead == 'g') ADVANCE(30);
      if (lookahead == 'n') ADVANCE(31);
      if (lookahead == 's') ADVANCE(32);
      END_STATE();
    case 7:
      if (lookahead == 'o') ADVANCE(33);
      if (lookahead == 'u') ADVANCE(34);
      END_STATE();
    case 8:
      if (lookahead == 'e') ADVANCE(35);
      END_STATE();
    case 9:
      if (lookahead == 'o') ADVANCE(36);
      END_STATE();
    case 10:
      if (lookahead == 'u') ADVANCE(37);
      END_STATE();
    case 11:
      if (lookahead == 's') ADVANCE(38);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(39);
      if (lookahead == 'o') ADVANCE(40);
      if (lookahead == 'r') ADVANCE(41);
      END_STATE();
    case 13:
      if (lookahead == 'u') ADVANCE(42);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(43);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(44);
      if (lookahead == 'h') ADVANCE(45);
      if (lookahead == 'n') ADVANCE(46);
      if (lookahead == 'o') ADVANCE(47);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(48);
      if (lookahead == 'i') ADVANCE(49);
      if (lookahead == 'r') ADVANCE(50);
      END_STATE();
    case 17:
      if (lookahead == 'n') ADVANCE(51);
      if (lookahead == 'p') ADVANCE(52);
      END_STATE();
    case 18:
      if (lookahead == 'i') ADVANCE(53);
      END_STATE();
    case 19:
      if (lookahead == 's') ADVANCE(54);
      END_STATE();
    case 20:
      if (lookahead == 'i') ADVANCE(55);
      if (lookahead == 'l') ADVANCE(56);
      END_STATE();
    case 21:
      if (lookahead == 'p') ADVANCE(57);
      END_STATE();
    case 22:
      if (lookahead == 'c') ADVANCE(58);
      END_STATE();
    case 23:
      if (lookahead == 'n') ADVANCE(59);
      if (lookahead == 'p') ADVANCE(60);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(61);
      END_STATE();
    case 25:
      if (lookahead == 't') ADVANCE(62);
      END_STATE();
    case 26:
      if (lookahead == 'c') ADVANCE(63);
      if (lookahead == 'v') ADVANCE(64);
      END_STATE();
    case 27:
      if (lookahead == 'p') ADVANCE(65);
      if (lookahead == 't') ADVANCE(66);
      END_STATE();
    case 28:
      if (lookahead == 'l') ADVANCE(67);
      END_STATE();
    case 29:
      if (lookahead == 'l') ADVANCE(68);
      END_STATE();
    case 30:
      if (lookahead == 'n') ADVANCE(69);
      END_STATE();
    case 31:
      if (lookahead == 'v') ADVANCE(70);
      END_STATE();
    case 32:
      if (lookahead == '_') ADVANCE(71);
      END_STATE();
    case 33:
      if (lookahead == 'i') ADVANCE(72);
      END_STATE();
    case 34:
      if (lookahead == 's') ADVANCE(73);
      END_STATE();
    case 35:
      if (lookahead == 'b') ADVANCE(74);
      END_STATE();
    case 36:
      if (lookahead == 'w') ADVANCE(75);
      END_STATE();
    case 37:
      if (lookahead == 'm') ADVANCE(76);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_os);
      if (lookahead == '_') ADVANCE(77);
      END_STATE();
    case 39:
      if (lookahead == 'r') ADVANCE(78);
      END_STATE();
    case 40:
      if (lookahead == 's') ADVANCE(79);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(80);
      END_STATE();
    case 42:
      if (lookahead == 'o') ADVANCE(81);
      END_STATE();
    case 43:
      if (lookahead == 'p') ADVANCE(82);
      END_STATE();
    case 44:
      if (lookahead == 't') ADVANCE(83);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(84);
      if (lookahead == 'o') ADVANCE(85);
      END_STATE();
    case 46:
      if (lookahead == 'a') ADVANCE(86);
      END_STATE();
    case 47:
      if (lookahead == 'u') ADVANCE(87);
      END_STATE();
    case 48:
      if (lookahead == 'm') ADVANCE(88);
      END_STATE();
    case 49:
      if (lookahead == 't') ADVANCE(89);
      END_STATE();
    case 50:
      if (lookahead == 'i') ADVANCE(90);
      if (lookahead == 'u') ADVANCE(91);
      END_STATE();
    case 51:
      if (lookahead == 's') ADVANCE(92);
      END_STATE();
    case 52:
      if (lookahead == 'p') ADVANCE(93);
      END_STATE();
    case 53:
      if (lookahead == 'n') ADVANCE(94);
      if (lookahead == 't') ADVANCE(95);
      END_STATE();
    case 54:
      if (lookahead == 'o') ADVANCE(96);
      END_STATE();
    case 55:
      if (lookahead == 'a') ADVANCE(97);
      END_STATE();
    case 56:
      if (lookahead == 'o') ADVANCE(98);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(99);
      END_STATE();
    case 58:
      if (lookahead == 'h') ADVANCE(100);
      END_STATE();
    case 59:
      if (lookahead == 'o') ADVANCE(101);
      END_STATE();
    case 60:
      if (lookahead == 'i') ADVANCE(102);
      END_STATE();
    case 61:
      if (lookahead == 'a') ADVANCE(103);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(104);
      END_STATE();
    case 63:
      if (lookahead == 'o') ADVANCE(105);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_env);
      if (lookahead == '_') ADVANCE(106);
      END_STATE();
    case 65:
      if (lookahead == 'o') ADVANCE(107);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(108);
      END_STATE();
    case 67:
      if (lookahead == 'l') ADVANCE(109);
      if (lookahead == 's') ADVANCE(110);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(111);
      END_STATE();
    case 69:
      if (lookahead == 'o') ADVANCE(112);
      END_STATE();
    case 70:
      if (lookahead == 'o') ADVANCE(113);
      END_STATE();
    case 71:
      if (lookahead == 'd') ADVANCE(114);
      END_STATE();
    case 72:
      if (lookahead == 'n') ADVANCE(115);
      END_STATE();
    case 73:
      if (lookahead == 't') ADVANCE(116);
      END_STATE();
    case 74:
      if (lookahead == 'a') ADVANCE(117);
      END_STATE();
    case 75:
      if (lookahead == 'e') ADVANCE(118);
      END_STATE();
    case 76:
      if (lookahead == '_') ADVANCE(119);
      END_STATE();
    case 77:
      if (lookahead == 'f') ADVANCE(120);
      END_STATE();
    case 78:
      if (lookahead == 'e') ADVANCE(121);
      END_STATE();
    case 79:
      if (lookahead == 'i') ADVANCE(122);
      END_STATE();
    case 80:
      if (lookahead == 'p') ADVANCE(123);
      END_STATE();
    case 81:
      if (lookahead == 't') ADVANCE(124);
      END_STATE();
    case 82:
      if (lookahead == 'l') ADVANCE(125);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_set);
      END_STATE();
    case 84:
      if (lookahead == 'l') ADVANCE(126);
      END_STATE();
    case 85:
      if (lookahead == 'u') ADVANCE(127);
      END_STATE();
    case 86:
      if (lookahead == 'k') ADVANCE(128);
      END_STATE();
    case 87:
      if (lookahead == 'r') ADVANCE(129);
      END_STATE();
    case 88:
      if (lookahead == 'p') ADVANCE(130);
      END_STATE();
    case 89:
      if (lookahead == 'l') ADVANCE(131);
      END_STATE();
    case 90:
      if (lookahead == 'm') ADVANCE(132);
      END_STATE();
    case 91:
      if (lookahead == 'e') ADVANCE(133);
      END_STATE();
    case 92:
      if (lookahead == 't') ADVANCE(134);
      END_STATE();
    case 93:
      if (lookahead == 'e') ADVANCE(135);
      END_STATE();
    case 94:
      if (lookahead == 'd') ADVANCE(136);
      END_STATE();
    case 95:
      if (lookahead == 'h') ADVANCE(137);
      END_STATE();
    case 96:
      if (lookahead == 'l') ADVANCE(138);
      END_STATE();
    case 97:
      if (lookahead == 's') ADVANCE(139);
      END_STATE();
    case 98:
      if (lookahead == 'w') ADVANCE(140);
      END_STATE();
    case 99:
      if (lookahead == 'n') ADVANCE(141);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_arch);
      END_STATE();
    case 101:
      if (lookahead == 'n') ADVANCE(142);
      END_STATE();
    case 102:
      if (lookahead == 't') ADVANCE(143);
      END_STATE();
    case 103:
      if (lookahead == 'n') ADVANCE(144);
      END_STATE();
    case 104:
      if (lookahead == 'n') ADVANCE(145);
      END_STATE();
    case 105:
      if (lookahead == 'd') ADVANCE(146);
      END_STATE();
    case 106:
      if (lookahead == 'v') ADVANCE(147);
      END_STATE();
    case 107:
      if (lookahead == 'r') ADVANCE(148);
      END_STATE();
    case 108:
      if (lookahead == 'n') ADVANCE(149);
      END_STATE();
    case 109:
      if (lookahead == 'b') ADVANCE(150);
      END_STATE();
    case 110:
      if (lookahead == 'e') ADVANCE(151);
      END_STATE();
    case 111:
      if (lookahead == '_') ADVANCE(152);
      END_STATE();
    case 112:
      if (lookahead == 'r') ADVANCE(153);
      END_STATE();
    case 113:
      if (lookahead == 'c') ADVANCE(154);
      END_STATE();
    case 114:
      if (lookahead == 'e') ADVANCE(155);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_join);
      END_STATE();
    case 116:
      if (lookahead == '_') ADVANCE(156);
      if (lookahead == 'f') ADVANCE(157);
      END_STATE();
    case 117:
      if (lookahead == 'b') ADVANCE(158);
      END_STATE();
    case 118:
      if (lookahead == 'r') ADVANCE(159);
      END_STATE();
    case 119:
      if (lookahead == 'c') ADVANCE(160);
      END_STATE();
    case 120:
      if (lookahead == 'a') ADVANCE(161);
      END_STATE();
    case 121:
      if (lookahead == 'n') ADVANCE(162);
      END_STATE();
    case 122:
      if (lookahead == 't') ADVANCE(163);
      END_STATE();
    case 123:
      if (lookahead == 'e') ADVANCE(164);
      END_STATE();
    case 124:
      if (lookahead == 'e') ADVANCE(165);
      END_STATE();
    case 125:
      if (lookahead == 'a') ADVANCE(166);
      END_STATE();
    case 126:
      if (lookahead == 'l') ADVANCE(167);
      END_STATE();
    case 127:
      if (lookahead == 't') ADVANCE(168);
      END_STATE();
    case 128:
      if (lookahead == 'e') ADVANCE(169);
      END_STATE();
    case 129:
      if (lookahead == 'c') ADVANCE(170);
      END_STATE();
    case 130:
      if (lookahead == 'd') ADVANCE(171);
      END_STATE();
    case 131:
      if (lookahead == 'e') ADVANCE(172);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_trim);
      if (lookahead == '_') ADVANCE(173);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 134:
      if (lookahead == 'a') ADVANCE(174);
      END_STATE();
    case 135:
      if (lookahead == 'r') ADVANCE(175);
      END_STATE();
    case 136:
      if (lookahead == 'o') ADVANCE(176);
      END_STATE();
    case 137:
      if (lookahead == 'o') ADVANCE(177);
      END_STATE();
    case 138:
      if (lookahead == 'u') ADVANCE(178);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_alias);
      END_STATE();
    case 140:
      if (lookahead == '-') ADVANCE(179);
      END_STATE();
    case 141:
      if (lookahead == 'd') ADVANCE(180);
      END_STATE();
    case 142:
      if (lookahead == 'i') ADVANCE(181);
      END_STATE();
    case 143:
      if (lookahead == 'a') ADVANCE(182);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_clean);
      END_STATE();
    case 145:
      if (lookahead == 'v') ADVANCE(183);
      END_STATE();
    case 146:
      if (lookahead == 'e') ADVANCE(184);
      END_STATE();
    case 147:
      if (lookahead == 'a') ADVANCE(185);
      END_STATE();
    case 148:
      if (lookahead == 't') ADVANCE(186);
      END_STATE();
    case 149:
      if (lookahead == 's') ADVANCE(187);
      END_STATE();
    case 150:
      if (lookahead == 'a') ADVANCE(188);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 152:
      if (lookahead == 'n') ADVANCE(189);
      if (lookahead == 's') ADVANCE(190);
      END_STATE();
    case 153:
      if (lookahead == 'e') ADVANCE(191);
      END_STATE();
    case 154:
      if (lookahead == 'a') ADVANCE(192);
      END_STATE();
    case 155:
      if (lookahead == 'p') ADVANCE(193);
      END_STATE();
    case 156:
      if (lookahead == 'e') ADVANCE(194);
      if (lookahead == 'p') ADVANCE(195);
      END_STATE();
    case 157:
      if (lookahead == 'i') ADVANCE(196);
      END_STATE();
    case 158:
      if (lookahead == 'c') ADVANCE(197);
      END_STATE();
    case 159:
      if (lookahead == 'c') ADVANCE(198);
      END_STATE();
    case 160:
      if (lookahead == 'p') ADVANCE(199);
      END_STATE();
    case 161:
      if (lookahead == 'm') ADVANCE(200);
      END_STATE();
    case 162:
      if (lookahead == 't') ADVANCE(201);
      END_STATE();
    case 163:
      if (lookahead == 'i') ADVANCE(202);
      END_STATE();
    case 164:
      if (lookahead == 'n') ADVANCE(203);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_quote);
      END_STATE();
    case 166:
      if (lookahead == 'c') ADVANCE(204);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_shell);
      END_STATE();
    case 168:
      if (lookahead == 'y') ADVANCE(205);
      END_STATE();
    case 169:
      if (lookahead == 'c') ADVANCE(206);
      END_STATE();
    case 170:
      if (lookahead == 'e') ADVANCE(207);
      END_STATE();
    case 171:
      if (lookahead == 'i') ADVANCE(208);
      END_STATE();
    case 172:
      if (lookahead == 'c') ADVANCE(209);
      END_STATE();
    case 173:
      if (lookahead == 'e') ADVANCE(210);
      if (lookahead == 's') ADVANCE(211);
      END_STATE();
    case 174:
      if (lookahead == 'b') ADVANCE(212);
      END_STATE();
    case 175:
      if (lookahead == 'c') ADVANCE(213);
      END_STATE();
    case 176:
      if (lookahead == 'w') ADVANCE(214);
      END_STATE();
    case 177:
      if (lookahead == 'u') ADVANCE(215);
      END_STATE();
    case 178:
      if (lookahead == 't') ADVANCE(216);
      END_STATE();
    case 179:
      if (lookahead == 'd') ADVANCE(217);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_append);
      END_STATE();
    case 181:
      if (lookahead == 'c') ADVANCE(218);
      END_STATE();
    case 182:
      if (lookahead == 'l') ADVANCE(219);
      END_STATE();
    case 183:
      if (lookahead == '-') ADVANCE(220);
      END_STATE();
    case 184:
      if (lookahead == '_') ADVANCE(221);
      END_STATE();
    case 185:
      if (lookahead == 'r') ADVANCE(222);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_export);
      END_STATE();
    case 187:
      if (lookahead == 'i') ADVANCE(223);
      END_STATE();
    case 188:
      if (lookahead == 'c') ADVANCE(224);
      END_STATE();
    case 189:
      if (lookahead == 'a') ADVANCE(225);
      END_STATE();
    case 190:
      if (lookahead == 't') ADVANCE(226);
      END_STATE();
    case 191:
      if (lookahead == '-') ADVANCE(227);
      END_STATE();
    case 192:
      if (lookahead == 't') ADVANCE(228);
      END_STATE();
    case 193:
      if (lookahead == 'e') ADVANCE(229);
      END_STATE();
    case 194:
      if (lookahead == 'x') ADVANCE(230);
      END_STATE();
    case 195:
      if (lookahead == 'i') ADVANCE(231);
      END_STATE();
    case 196:
      if (lookahead == 'l') ADVANCE(232);
      END_STATE();
    case 197:
      if (lookahead == 'a') ADVANCE(233);
      END_STATE();
    case 198:
      if (lookahead == 'a') ADVANCE(234);
      END_STATE();
    case 199:
      if (lookahead == 'u') ADVANCE(235);
      END_STATE();
    case 200:
      if (lookahead == 'i') ADVANCE(236);
      END_STATE();
    case 201:
      if (lookahead == '_') ADVANCE(237);
      END_STATE();
    case 202:
      if (lookahead == 'o') ADVANCE(238);
      END_STATE();
    case 203:
      if (lookahead == 'd') ADVANCE(239);
      END_STATE();
    case 204:
      if (lookahead == 'e') ADVANCE(240);
      END_STATE();
    case 205:
      if (lookahead == 'k') ADVANCE(241);
      if (lookahead == 's') ADVANCE(242);
      END_STATE();
    case 206:
      if (lookahead == 'a') ADVANCE(243);
      END_STATE();
    case 207:
      if (lookahead == '_') ADVANCE(244);
      END_STATE();
    case 208:
      if (lookahead == 'r') ADVANCE(245);
      END_STATE();
    case 209:
      if (lookahead == 'a') ADVANCE(246);
      END_STATE();
    case 210:
      if (lookahead == 'n') ADVANCE(247);
      END_STATE();
    case 211:
      if (lookahead == 't') ADVANCE(248);
      END_STATE();
    case 212:
      if (lookahead == 'l') ADVANCE(249);
      END_STATE();
    case 213:
      if (lookahead == 'a') ADVANCE(250);
      END_STATE();
    case 214:
      if (lookahead == 's') ADVANCE(251);
      END_STATE();
    case 215:
      if (lookahead == 't') ADVANCE(252);
      END_STATE();
    case 216:
      if (lookahead == 'e') ADVANCE(253);
      END_STATE();
    case 217:
      if (lookahead == 'u') ADVANCE(254);
      END_STATE();
    case 218:
      if (lookahead == 'a') ADVANCE(255);
      END_STATE();
    case 219:
      if (lookahead == 'i') ADVANCE(256);
      END_STATE();
    case 220:
      if (lookahead == 'f') ADVANCE(257);
      if (lookahead == 'l') ADVANCE(258);
      if (lookahead == 'p') ADVANCE(259);
      if (lookahead == 'r') ADVANCE(260);
      END_STATE();
    case 221:
      if (lookahead == 'u') ADVANCE(261);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_env_var);
      if (lookahead == '_') ADVANCE(262);
      END_STATE();
    case 223:
      if (lookahead == 'o') ADVANCE(263);
      END_STATE();
    case 224:
      if (lookahead == 'k') ADVANCE(264);
      END_STATE();
    case 225:
      if (lookahead == 'm') ADVANCE(265);
      END_STATE();
    case 226:
      if (lookahead == 'e') ADVANCE(266);
      END_STATE();
    case 227:
      if (lookahead == 'c') ADVANCE(267);
      END_STATE();
    case 228:
      if (lookahead == 'i') ADVANCE(268);
      END_STATE();
    case 229:
      if (lookahead == 'n') ADVANCE(269);
      END_STATE();
    case 230:
      if (lookahead == 'e') ADVANCE(270);
      END_STATE();
    case 231:
      if (lookahead == 'd') ADVANCE(271);
      END_STATE();
    case 232:
      if (lookahead == 'e') ADVANCE(272);
      END_STATE();
    case 233:
      if (lookahead == 's') ADVANCE(273);
      END_STATE();
    case 234:
      if (lookahead == 'm') ADVANCE(274);
      if (lookahead == 's') ADVANCE(275);
      END_STATE();
    case 235:
      if (lookahead == 's') ADVANCE(276);
      END_STATE();
    case 236:
      if (lookahead == 'l') ADVANCE(277);
      END_STATE();
    case 237:
      if (lookahead == 'd') ADVANCE(278);
      END_STATE();
    case 238:
      if (lookahead == 'n') ADVANCE(279);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_prepend);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_replace);
      if (lookahead == '_') ADVANCE(280);
      END_STATE();
    case 241:
      if (lookahead == 'e') ADVANCE(281);
      END_STATE();
    case 242:
      if (lookahead == 'n') ADVANCE(282);
      END_STATE();
    case 243:
      if (lookahead == 's') ADVANCE(283);
      END_STATE();
    case 244:
      if (lookahead == 'd') ADVANCE(284);
      if (lookahead == 'f') ADVANCE(285);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_tempdir);
      END_STATE();
    case 246:
      if (lookahead == 's') ADVANCE(286);
      END_STATE();
    case 247:
      if (lookahead == 'd') ADVANCE(287);
      END_STATE();
    case 248:
      if (lookahead == 'a') ADVANCE(288);
      END_STATE();
    case 249:
      if (lookahead == 'e') ADVANCE(289);
      END_STATE();
    case 250:
      if (lookahead == 'm') ADVANCE(290);
      if (lookahead == 's') ADVANCE(291);
      END_STATE();
    case 251:
      if (lookahead == '-') ADVANCE(292);
      END_STATE();
    case 252:
      if (lookahead == '_') ADVANCE(293);
      END_STATE();
    case 253:
      if (lookahead == '_') ADVANCE(294);
      END_STATE();
    case 254:
      if (lookahead == 'p') ADVANCE(295);
      END_STATE();
    case 255:
      if (lookahead == 'l') ADVANCE(296);
      END_STATE();
    case 256:
      if (lookahead == 'z') ADVANCE(297);
      END_STATE();
    case 257:
      if (lookahead == 'i') ADVANCE(298);
      END_STATE();
    case 258:
      if (lookahead == 'o') ADVANCE(299);
      END_STATE();
    case 259:
      if (lookahead == 'a') ADVANCE(300);
      END_STATE();
    case 260:
      if (lookahead == 'e') ADVANCE(301);
      END_STATE();
    case 261:
      if (lookahead == 'r') ADVANCE(302);
      END_STATE();
    case 262:
      if (lookahead == 'o') ADVANCE(303);
      END_STATE();
    case 263:
      if (lookahead == 'n') ADVANCE(304);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_fallback);
      END_STATE();
    case 265:
      if (lookahead == 'e') ADVANCE(305);
      END_STATE();
    case 266:
      if (lookahead == 'm') ADVANCE(306);
      END_STATE();
    case 267:
      if (lookahead == 'o') ADVANCE(307);
      END_STATE();
    case 268:
      if (lookahead == 'o') ADVANCE(308);
      END_STATE();
    case 269:
      if (lookahead == 'd') ADVANCE(309);
      END_STATE();
    case 270:
      if (lookahead == 'c') ADVANCE(310);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_just_pid);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_justfile);
      if (lookahead == '_') ADVANCE(311);
      END_STATE();
    case 273:
      if (lookahead == 'e') ADVANCE(312);
      END_STATE();
    case 274:
      if (lookahead == 'e') ADVANCE(313);
      END_STATE();
    case 275:
      if (lookahead == 'e') ADVANCE(314);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_num_cpus);
      END_STATE();
    case 277:
      if (lookahead == 'y') ADVANCE(315);
      END_STATE();
    case 278:
      if (lookahead == 'i') ADVANCE(316);
      END_STATE();
    case 279:
      if (lookahead == 'a') ADVANCE(317);
      END_STATE();
    case 280:
      if (lookahead == 'r') ADVANCE(318);
      END_STATE();
    case 281:
      if (lookahead == 'b') ADVANCE(319);
      END_STATE();
    case 282:
      if (lookahead == 'a') ADVANCE(320);
      END_STATE();
    case 283:
      if (lookahead == 'e') ADVANCE(321);
      END_STATE();
    case 284:
      if (lookahead == 'i') ADVANCE(322);
      END_STATE();
    case 285:
      if (lookahead == 'i') ADVANCE(323);
      END_STATE();
    case 286:
      if (lookahead == 'e') ADVANCE(324);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_trim_end);
      if (lookahead == '_') ADVANCE(325);
      END_STATE();
    case 288:
      if (lookahead == 'r') ADVANCE(326);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_unstable);
      END_STATE();
    case 290:
      if (lookahead == 'e') ADVANCE(327);
      END_STATE();
    case 291:
      if (lookahead == 'e') ADVANCE(328);
      END_STATE();
    case 292:
      if (lookahead == 'p') ADVANCE(329);
      if (lookahead == 's') ADVANCE(330);
      END_STATE();
    case 293:
      if (lookahead == 'e') ADVANCE(331);
      END_STATE();
    case 294:
      if (lookahead == 'p') ADVANCE(332);
      END_STATE();
    case 295:
      if (lookahead == 'l') ADVANCE(333);
      END_STATE();
    case 296:
      if (lookahead == 'i') ADVANCE(334);
      END_STATE();
    case 297:
      if (lookahead == 'e') ADVANCE(335);
      END_STATE();
    case 298:
      if (lookahead == 'l') ADVANCE(336);
      END_STATE();
    case 299:
      if (lookahead == 'a') ADVANCE(337);
      END_STATE();
    case 300:
      if (lookahead == 't') ADVANCE(338);
      END_STATE();
    case 301:
      if (lookahead == 'q') ADVANCE(339);
      END_STATE();
    case 302:
      if (lookahead == 'i') ADVANCE(340);
      END_STATE();
    case 303:
      if (lookahead == 'r') ADVANCE(341);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_extension);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_file_name);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_file_stem);
      END_STATE();
    case 307:
      if (lookahead == 'm') ADVANCE(342);
      END_STATE();
    case 308:
      if (lookahead == 'n') ADVANCE(343);
      END_STATE();
    case 309:
      if (lookahead == 'e') ADVANCE(344);
      END_STATE();
    case 310:
      if (lookahead == 'u') ADVANCE(345);
      END_STATE();
    case 311:
      if (lookahead == 'd') ADVANCE(346);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_kebabcase);
      END_STATE();
    case 313:
      if (lookahead == 'l') ADVANCE(347);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(anon_sym_lowercase);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(anon_sym_os_family);
      END_STATE();
    case 316:
      if (lookahead == 'r') ADVANCE(348);
      END_STATE();
    case 317:
      if (lookahead == 'l') ADVANCE(349);
      END_STATE();
    case 318:
      if (lookahead == 'e') ADVANCE(350);
      END_STATE();
    case 319:
      if (lookahead == 'a') ADVANCE(351);
      END_STATE();
    case 320:
      if (lookahead == 'k') ADVANCE(352);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(anon_sym_snakecase);
      END_STATE();
    case 322:
      if (lookahead == 'r') ADVANCE(353);
      END_STATE();
    case 323:
      if (lookahead == 'l') ADVANCE(354);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(anon_sym_titlecase);
      END_STATE();
    case 325:
      if (lookahead == 'm') ADVANCE(355);
      END_STATE();
    case 326:
      if (lookahead == 't') ADVANCE(356);
      END_STATE();
    case 327:
      if (lookahead == 'l') ADVANCE(357);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(anon_sym_uppercase);
      END_STATE();
    case 329:
      if (lookahead == 'o') ADVANCE(358);
      END_STATE();
    case 330:
      if (lookahead == 'h') ADVANCE(359);
      END_STATE();
    case 331:
      if (lookahead == 'x') ADVANCE(360);
      END_STATE();
    case 332:
      if (lookahead == 'a') ADVANCE(361);
      END_STATE();
    case 333:
      if (lookahead == 'i') ADVANCE(362);
      END_STATE();
    case 334:
      if (lookahead == 'z') ADVANCE(363);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(anon_sym_capitalize);
      END_STATE();
    case 336:
      if (lookahead == 'e') ADVANCE(364);
      END_STATE();
    case 337:
      if (lookahead == 'd') ADVANCE(365);
      END_STATE();
    case 338:
      if (lookahead == 'h') ADVANCE(366);
      END_STATE();
    case 339:
      if (lookahead == 'u') ADVANCE(367);
      END_STATE();
    case 340:
      if (lookahead == '_') ADVANCE(368);
      END_STATE();
    case 341:
      if (lookahead == '_') ADVANCE(369);
      END_STATE();
    case 342:
      if (lookahead == 'm') ADVANCE(370);
      END_STATE();
    case 343:
      if (lookahead == '_') ADVANCE(371);
      END_STATE();
    case 344:
      if (lookahead == 'n') ADVANCE(372);
      END_STATE();
    case 345:
      if (lookahead == 't') ADVANCE(373);
      END_STATE();
    case 346:
      if (lookahead == 'i') ADVANCE(374);
      END_STATE();
    case 347:
      if (lookahead == 'c') ADVANCE(375);
      END_STATE();
    case 348:
      if (lookahead == 'e') ADVANCE(376);
      END_STATE();
    case 349:
      if (lookahead == '-') ADVANCE(377);
      END_STATE();
    case 350:
      if (lookahead == 'g') ADVANCE(378);
      END_STATE();
    case 351:
      if (lookahead == 'b') ADVANCE(379);
      END_STATE();
    case 352:
      if (lookahead == 'e') ADVANCE(380);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(anon_sym_source_dir);
      if (lookahead == 'e') ADVANCE(381);
      END_STATE();
    case 354:
      if (lookahead == 'e') ADVANCE(382);
      END_STATE();
    case 355:
      if (lookahead == 'a') ADVANCE(383);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(anon_sym_trim_start);
      if (lookahead == '_') ADVANCE(384);
      END_STATE();
    case 357:
      if (lookahead == 'c') ADVANCE(385);
      END_STATE();
    case 358:
      if (lookahead == 'w') ADVANCE(386);
      END_STATE();
    case 359:
      if (lookahead == 'e') ADVANCE(387);
      END_STATE();
    case 360:
      if (lookahead == 't') ADVANCE(388);
      END_STATE();
    case 361:
      if (lookahead == 't') ADVANCE(389);
      END_STATE();
    case 362:
      if (lookahead == 'c') ADVANCE(390);
      END_STATE();
    case 363:
      if (lookahead == 'e') ADVANCE(391);
      END_STATE();
    case 364:
      if (lookahead == 'n') ADVANCE(392);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(anon_sym_dotenv_DASHload);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(anon_sym_dotenv_DASHpath);
      END_STATE();
    case 367:
      if (lookahead == 'i') ADVANCE(393);
      END_STATE();
    case 368:
      if (lookahead == 'c') ADVANCE(394);
      END_STATE();
    case 369:
      if (lookahead == 'd') ADVANCE(395);
      END_STATE();
    case 370:
      if (lookahead == 'e') ADVANCE(396);
      END_STATE();
    case 371:
      if (lookahead == 'd') ADVANCE(397);
      END_STATE();
    case 372:
      if (lookahead == 'c') ADVANCE(398);
      END_STATE();
    case 373:
      if (lookahead == 'a') ADVANCE(399);
      END_STATE();
    case 374:
      if (lookahead == 'r') ADVANCE(400);
      END_STATE();
    case 375:
      if (lookahead == 'a') ADVANCE(401);
      END_STATE();
    case 376:
      if (lookahead == 'c') ADVANCE(402);
      END_STATE();
    case 377:
      if (lookahead == 'a') ADVANCE(403);
      END_STATE();
    case 378:
      if (lookahead == 'e') ADVANCE(404);
      END_STATE();
    case 379:
      if (lookahead == 'c') ADVANCE(405);
      END_STATE();
    case 380:
      if (lookahead == 'c') ADVANCE(406);
      END_STATE();
    case 381:
      if (lookahead == 'c') ADVANCE(407);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(anon_sym_source_file);
      END_STATE();
    case 383:
      if (lookahead == 't') ADVANCE(408);
      END_STATE();
    case 384:
      if (lookahead == 'm') ADVANCE(409);
      END_STATE();
    case 385:
      if (lookahead == 'a') ADVANCE(410);
      END_STATE();
    case 386:
      if (lookahead == 'e') ADVANCE(411);
      END_STATE();
    case 387:
      if (lookahead == 'l') ADVANCE(412);
      END_STATE();
    case 388:
      if (lookahead == 'e') ADVANCE(413);
      END_STATE();
    case 389:
      if (lookahead == 'h') ADVANCE(414);
      END_STATE();
    case 390:
      if (lookahead == 'a') ADVANCE(415);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(anon_sym_canonicalize);
      END_STATE();
    case 392:
      if (lookahead == 'a') ADVANCE(416);
      END_STATE();
    case 393:
      if (lookahead == 'r') ADVANCE(417);
      END_STATE();
    case 394:
      if (lookahead == 'o') ADVANCE(418);
      END_STATE();
    case 395:
      if (lookahead == 'e') ADVANCE(419);
      END_STATE();
    case 396:
      if (lookahead == 'n') ADVANCE(420);
      END_STATE();
    case 397:
      if (lookahead == 'i') ADVANCE(421);
      END_STATE();
    case 398:
      if (lookahead == 'y') ADVANCE(422);
      END_STATE();
    case 399:
      if (lookahead == 'b') ADVANCE(423);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(anon_sym_justfile_dir);
      if (lookahead == 'e') ADVANCE(424);
      END_STATE();
    case 401:
      if (lookahead == 's') ADVANCE(425);
      END_STATE();
    case 402:
      if (lookahead == 't') ADVANCE(426);
      END_STATE();
    case 403:
      if (lookahead == 'r') ADVANCE(427);
      END_STATE();
    case 404:
      if (lookahead == 'x') ADVANCE(428);
      END_STATE();
    case 405:
      if (lookahead == 'a') ADVANCE(429);
      END_STATE();
    case 406:
      if (lookahead == 'a') ADVANCE(430);
      END_STATE();
    case 407:
      if (lookahead == 't') ADVANCE(431);
      END_STATE();
    case 408:
      if (lookahead == 'c') ADVANCE(432);
      END_STATE();
    case 409:
      if (lookahead == 'a') ADVANCE(433);
      END_STATE();
    case 410:
      if (lookahead == 's') ADVANCE(434);
      END_STATE();
    case 411:
      if (lookahead == 'r') ADVANCE(435);
      END_STATE();
    case 412:
      if (lookahead == 'l') ADVANCE(436);
      END_STATE();
    case 413:
      if (lookahead == 'n') ADVANCE(437);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(anon_sym_absolute_path);
      END_STATE();
    case 415:
      if (lookahead == 't') ADVANCE(438);
      END_STATE();
    case 416:
      if (lookahead == 'm') ADVANCE(439);
      END_STATE();
    case 417:
      if (lookahead == 'e') ADVANCE(440);
      END_STATE();
    case 418:
      if (lookahead == 'm') ADVANCE(441);
      END_STATE();
    case 419:
      if (lookahead == 'f') ADVANCE(442);
      END_STATE();
    case 420:
      if (lookahead == 't') ADVANCE(443);
      END_STATE();
    case 421:
      if (lookahead == 'r') ADVANCE(444);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(anon_sym_is_dependency);
      END_STATE();
    case 423:
      if (lookahead == 'l') ADVANCE(445);
      END_STATE();
    case 424:
      if (lookahead == 'c') ADVANCE(446);
      END_STATE();
    case 425:
      if (lookahead == 'e') ADVANCE(447);
      END_STATE();
    case 426:
      if (lookahead == 'o') ADVANCE(448);
      END_STATE();
    case 427:
      if (lookahead == 'g') ADVANCE(449);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(anon_sym_replace_regex);
      END_STATE();
    case 429:
      if (lookahead == 's') ADVANCE(450);
      END_STATE();
    case 430:
      if (lookahead == 's') ADVANCE(451);
      END_STATE();
    case 431:
      if (lookahead == 'o') ADVANCE(452);
      END_STATE();
    case 432:
      if (lookahead == 'h') ADVANCE(453);
      END_STATE();
    case 433:
      if (lookahead == 't') ADVANCE(454);
      END_STATE();
    case 434:
      if (lookahead == 'e') ADVANCE(455);
      END_STATE();
    case 435:
      if (lookahead == 's') ADVANCE(456);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(anon_sym_windows_DASHshell);
      END_STATE();
    case 437:
      if (lookahead == 's') ADVANCE(457);
      END_STATE();
    case 438:
      if (lookahead == 'e') ADVANCE(458);
      END_STATE();
    case 439:
      if (lookahead == 'e') ADVANCE(459);
      END_STATE();
    case 440:
      if (lookahead == 'd') ADVANCE(460);
      END_STATE();
    case 441:
      if (lookahead == 'p') ADVANCE(461);
      END_STATE();
    case 442:
      if (lookahead == 'a') ADVANCE(462);
      END_STATE();
    case 443:
      if (lookahead == 's') ADVANCE(463);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(anon_sym_invocation_dir);
      if (lookahead == '_') ADVANCE(464);
      if (lookahead == 'e') ADVANCE(465);
      END_STATE();
    case 445:
      if (lookahead == 'e') ADVANCE(466);
      END_STATE();
    case 446:
      if (lookahead == 't') ADVANCE(467);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(anon_sym_lowercamelcase);
      END_STATE();
    case 448:
      if (lookahead == 'r') ADVANCE(468);
      END_STATE();
    case 449:
      if (lookahead == 'u') ADVANCE(469);
      END_STATE();
    case 450:
      if (lookahead == 'e') ADVANCE(470);
      END_STATE();
    case 451:
      if (lookahead == 'e') ADVANCE(471);
      END_STATE();
    case 452:
      if (lookahead == 'r') ADVANCE(472);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(anon_sym_trim_end_match);
      if (lookahead == 'e') ADVANCE(473);
      END_STATE();
    case 454:
      if (lookahead == 'c') ADVANCE(474);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(anon_sym_uppercamelcase);
      END_STATE();
    case 456:
      if (lookahead == 'h') ADVANCE(475);
      END_STATE();
    case 457:
      if (lookahead == 'i') ADVANCE(476);
      END_STATE();
    case 458:
      if (lookahead == '-') ADVANCE(477);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(anon_sym_dotenv_DASHfilename);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(anon_sym_dotenv_DASHrequired);
      END_STATE();
    case 461:
      if (lookahead == 'o') ADVANCE(478);
      END_STATE();
    case 462:
      if (lookahead == 'u') ADVANCE(479);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(anon_sym_ignore_DASHcomments);
      END_STATE();
    case 464:
      if (lookahead == 'n') ADVANCE(480);
      END_STATE();
    case 465:
      if (lookahead == 'c') ADVANCE(481);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(anon_sym_just_executable);
      END_STATE();
    case 467:
      if (lookahead == 'o') ADVANCE(482);
      END_STATE();
    case 468:
      if (lookahead == 'y') ADVANCE(483);
      END_STATE();
    case 469:
      if (lookahead == 'm') ADVANCE(484);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(anon_sym_shoutykebabcase);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(anon_sym_shoutysnakecase);
      END_STATE();
    case 472:
      if (lookahead == 'y') ADVANCE(485);
      END_STATE();
    case 473:
      if (lookahead == 's') ADVANCE(486);
      END_STATE();
    case 474:
      if (lookahead == 'h') ADVANCE(487);
      END_STATE();
    case 475:
      if (lookahead == 'e') ADVANCE(488);
      END_STATE();
    case 476:
      if (lookahead == 'o') ADVANCE(489);
      END_STATE();
    case 477:
      if (lookahead == 'r') ADVANCE(490);
      if (lookahead == 'v') ADVANCE(491);
      END_STATE();
    case 478:
      if (lookahead == 'n') ADVANCE(492);
      END_STATE();
    case 479:
      if (lookahead == 'l') ADVANCE(493);
      END_STATE();
    case 480:
      if (lookahead == 'a') ADVANCE(494);
      END_STATE();
    case 481:
      if (lookahead == 't') ADVANCE(495);
      END_STATE();
    case 482:
      if (lookahead == 'r') ADVANCE(496);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(anon_sym_parent_directory);
      END_STATE();
    case 484:
      if (lookahead == 'e') ADVANCE(497);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(anon_sym_source_directory);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(anon_sym_trim_end_matches);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(anon_sym_trim_start_match);
      if (lookahead == 'e') ADVANCE(498);
      END_STATE();
    case 488:
      if (lookahead == 'l') ADVANCE(499);
      END_STATE();
    case 489:
      if (lookahead == 'n') ADVANCE(500);
      END_STATE();
    case 490:
      if (lookahead == 'e') ADVANCE(501);
      END_STATE();
    case 491:
      if (lookahead == 'a') ADVANCE(502);
      END_STATE();
    case 492:
      if (lookahead == 'e') ADVANCE(503);
      END_STATE();
    case 493:
      if (lookahead == 't') ADVANCE(504);
      END_STATE();
    case 494:
      if (lookahead == 't') ADVANCE(505);
      END_STATE();
    case 495:
      if (lookahead == 'o') ADVANCE(506);
      END_STATE();
    case 496:
      if (lookahead == 'y') ADVANCE(507);
      END_STATE();
    case 497:
      if (lookahead == 'n') ADVANCE(508);
      END_STATE();
    case 498:
      if (lookahead == 's') ADVANCE(509);
      END_STATE();
    case 499:
      if (lookahead == 'l') ADVANCE(510);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(anon_sym_without_extension);
      END_STATE();
    case 501:
      if (lookahead == 'c') ADVANCE(511);
      END_STATE();
    case 502:
      if (lookahead == 'r') ADVANCE(512);
      END_STATE();
    case 503:
      if (lookahead == 'n') ADVANCE(513);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(anon_sym_env_var_or_default);
      END_STATE();
    case 505:
      if (lookahead == 'i') ADVANCE(514);
      END_STATE();
    case 506:
      if (lookahead == 'r') ADVANCE(515);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(anon_sym_justfile_directory);
      END_STATE();
    case 508:
      if (lookahead == 't') ADVANCE(516);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(anon_sym_trim_start_matches);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(anon_sym_windows_DASHpowershell);
      END_STATE();
    case 511:
      if (lookahead == 'i') ADVANCE(517);
      END_STATE();
    case 512:
      if (lookahead == 'i') ADVANCE(518);
      END_STATE();
    case 513:
      if (lookahead == 't') ADVANCE(519);
      END_STATE();
    case 514:
      if (lookahead == 'v') ADVANCE(520);
      END_STATE();
    case 515:
      if (lookahead == 'y') ADVANCE(521);
      END_STATE();
    case 516:
      if (lookahead == 's') ADVANCE(522);
      END_STATE();
    case 517:
      if (lookahead == 'p') ADVANCE(523);
      END_STATE();
    case 518:
      if (lookahead == 'a') ADVANCE(524);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(anon_sym_encode_uri_component);
      END_STATE();
    case 520:
      if (lookahead == 'e') ADVANCE(525);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(anon_sym_invocation_directory);
      if (lookahead == '_') ADVANCE(526);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(anon_sym_positional_DASHarguments);
      END_STATE();
    case 523:
      if (lookahead == 'e') ADVANCE(527);
      END_STATE();
    case 524:
      if (lookahead == 'b') ADVANCE(528);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(anon_sym_invocation_dir_native);
      END_STATE();
    case 526:
      if (lookahead == 'n') ADVANCE(529);
      END_STATE();
    case 527:
      if (lookahead == 's') ADVANCE(530);
      END_STATE();
    case 528:
      if (lookahead == 'l') ADVANCE(531);
      END_STATE();
    case 529:
      if (lookahead == 'a') ADVANCE(532);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(anon_sym_allow_DASHduplicate_DASHrecipes);
      END_STATE();
    case 531:
      if (lookahead == 'e') ADVANCE(533);
      END_STATE();
    case 532:
      if (lookahead == 't') ADVANCE(534);
      END_STATE();
    case 533:
      if (lookahead == 's') ADVANCE(535);
      END_STATE();
    case 534:
      if (lookahead == 'i') ADVANCE(536);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(anon_sym_allow_DASHduplicate_DASHvariables);
      END_STATE();
    case 536:
      if (lookahead == 'v') ADVANCE(537);
      END_STATE();
    case 537:
      if (lookahead == 'e') ADVANCE(538);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(anon_sym_invocation_directory_native);
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
  [4] = {.lex_state = 4},
  [5] = {.lex_state = 4},
  [6] = {.lex_state = 4},
  [7] = {.lex_state = 4},
  [8] = {.lex_state = 4},
  [9] = {.lex_state = 4},
  [10] = {.lex_state = 4},
  [11] = {.lex_state = 4},
  [12] = {.lex_state = 4},
  [13] = {.lex_state = 4},
  [14] = {.lex_state = 4},
  [15] = {.lex_state = 4},
  [16] = {.lex_state = 4},
  [17] = {.lex_state = 4},
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
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
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
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 4},
  [59] = {.lex_state = 4},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 1},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 7},
  [66] = {.lex_state = 1},
  [67] = {.lex_state = 7},
  [68] = {.lex_state = 1},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 7},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 7},
  [73] = {.lex_state = 7},
  [74] = {.lex_state = 1},
  [75] = {.lex_state = 1},
  [76] = {.lex_state = 2},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 3},
  [79] = {.lex_state = 4},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 3},
  [82] = {.lex_state = 3},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 2},
  [87] = {.lex_state = 2},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 3},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 2},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 8},
  [107] = {.lex_state = 4},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 4},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 4},
  [113] = {.lex_state = 8},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 26},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 62},
  [125] = {(TSStateId)(-1)},
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
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_arch] = ACTIONS(1),
    [anon_sym_num_cpus] = ACTIONS(1),
    [anon_sym_os] = ACTIONS(1),
    [anon_sym_os_family] = ACTIONS(1),
    [anon_sym_shell] = ACTIONS(1),
    [anon_sym_env_var] = ACTIONS(1),
    [anon_sym_env_var_or_default] = ACTIONS(1),
    [anon_sym_env] = ACTIONS(1),
    [anon_sym_is_dependency] = ACTIONS(1),
    [anon_sym_invocation_dir] = ACTIONS(1),
    [anon_sym_invocation_dir_native] = ACTIONS(1),
    [anon_sym_invocation_directory] = ACTIONS(1),
    [anon_sym_invocation_directory_native] = ACTIONS(1),
    [anon_sym_justfile] = ACTIONS(1),
    [anon_sym_justfile_dir] = ACTIONS(1),
    [anon_sym_justfile_directory] = ACTIONS(1),
    [anon_sym_source_dir] = ACTIONS(1),
    [anon_sym_source_directory] = ACTIONS(1),
    [anon_sym_source_file] = ACTIONS(1),
    [anon_sym_just_executable] = ACTIONS(1),
    [anon_sym_just_pid] = ACTIONS(1),
    [anon_sym_append] = ACTIONS(1),
    [anon_sym_prepend] = ACTIONS(1),
    [anon_sym_encode_uri_component] = ACTIONS(1),
    [anon_sym_quote] = ACTIONS(1),
    [anon_sym_replace] = ACTIONS(1),
    [anon_sym_replace_regex] = ACTIONS(1),
    [anon_sym_trim] = ACTIONS(1),
    [anon_sym_trim_end] = ACTIONS(1),
    [anon_sym_trim_end_match] = ACTIONS(1),
    [anon_sym_trim_end_matches] = ACTIONS(1),
    [anon_sym_trim_start] = ACTIONS(1),
    [anon_sym_trim_start_match] = ACTIONS(1),
    [anon_sym_trim_start_matches] = ACTIONS(1),
    [anon_sym_capitalize] = ACTIONS(1),
    [anon_sym_kebabcase] = ACTIONS(1),
    [anon_sym_lowercamelcase] = ACTIONS(1),
    [anon_sym_lowercase] = ACTIONS(1),
    [anon_sym_shoutykebabcase] = ACTIONS(1),
    [anon_sym_shoutysnakecase] = ACTIONS(1),
    [anon_sym_snakecase] = ACTIONS(1),
    [anon_sym_titlecase] = ACTIONS(1),
    [anon_sym_uppercamelcase] = ACTIONS(1),
    [anon_sym_uppercase] = ACTIONS(1),
    [anon_sym_absolute_path] = ACTIONS(1),
    [anon_sym_canonicalize] = ACTIONS(1),
    [anon_sym_extension] = ACTIONS(1),
    [anon_sym_file_name] = ACTIONS(1),
    [anon_sym_file_stem] = ACTIONS(1),
    [anon_sym_parent_directory] = ACTIONS(1),
    [anon_sym_without_extension] = ACTIONS(1),
    [anon_sym_clean] = ACTIONS(1),
    [anon_sym_join] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
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
    [anon_sym_tempdir] = ACTIONS(1),
    [anon_sym_unstable] = ACTIONS(1),
    [anon_sym_windows_DASHpowershell] = ACTIONS(1),
    [anon_sym_windows_DASHshell] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_BQUOTE] = ACTIONS(1),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(1),
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
    [sym_file] = STATE(123),
    [sym_alias] = STATE(56),
    [sym_import] = STATE(56),
    [sym_mod] = STATE(56),
    [sym_expression] = STATE(56),
    [sym_value] = STATE(35),
    [sym_builtin_function_call] = STATE(36),
    [sym_function_call] = STATE(36),
    [sym_setting] = STATE(56),
    [sym_backtick] = STATE(36),
    [sym_indented_backtick] = STATE(36),
    [sym_string] = STATE(36),
    [sym_indented_normal_string] = STATE(27),
    [sym_normal_string] = STATE(27),
    [sym_indented_raw_string] = STATE(27),
    [sym_raw_string] = STATE(27),
    [sym_comment] = STATE(1),
    [aux_sym_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_alias] = ACTIONS(9),
    [aux_sym_import_token1] = ACTIONS(11),
    [aux_sym_mod_token1] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_arch] = ACTIONS(17),
    [anon_sym_num_cpus] = ACTIONS(17),
    [anon_sym_os] = ACTIONS(17),
    [anon_sym_os_family] = ACTIONS(17),
    [anon_sym_shell] = ACTIONS(19),
    [anon_sym_env_var] = ACTIONS(21),
    [anon_sym_env_var_or_default] = ACTIONS(23),
    [anon_sym_env] = ACTIONS(25),
    [anon_sym_is_dependency] = ACTIONS(17),
    [anon_sym_invocation_dir] = ACTIONS(17),
    [anon_sym_invocation_dir_native] = ACTIONS(17),
    [anon_sym_invocation_directory] = ACTIONS(17),
    [anon_sym_invocation_directory_native] = ACTIONS(17),
    [anon_sym_justfile] = ACTIONS(17),
    [anon_sym_justfile_dir] = ACTIONS(17),
    [anon_sym_justfile_directory] = ACTIONS(17),
    [anon_sym_source_dir] = ACTIONS(17),
    [anon_sym_source_directory] = ACTIONS(17),
    [anon_sym_source_file] = ACTIONS(17),
    [anon_sym_just_executable] = ACTIONS(17),
    [anon_sym_just_pid] = ACTIONS(17),
    [anon_sym_append] = ACTIONS(23),
    [anon_sym_prepend] = ACTIONS(23),
    [anon_sym_encode_uri_component] = ACTIONS(21),
    [anon_sym_quote] = ACTIONS(21),
    [anon_sym_replace] = ACTIONS(27),
    [anon_sym_replace_regex] = ACTIONS(27),
    [anon_sym_trim] = ACTIONS(21),
    [anon_sym_trim_end] = ACTIONS(21),
    [anon_sym_trim_end_match] = ACTIONS(23),
    [anon_sym_trim_end_matches] = ACTIONS(23),
    [anon_sym_trim_start] = ACTIONS(21),
    [anon_sym_trim_start_match] = ACTIONS(23),
    [anon_sym_trim_start_matches] = ACTIONS(23),
    [anon_sym_capitalize] = ACTIONS(21),
    [anon_sym_kebabcase] = ACTIONS(21),
    [anon_sym_lowercamelcase] = ACTIONS(21),
    [anon_sym_lowercase] = ACTIONS(21),
    [anon_sym_shoutykebabcase] = ACTIONS(21),
    [anon_sym_shoutysnakecase] = ACTIONS(21),
    [anon_sym_snakecase] = ACTIONS(21),
    [anon_sym_titlecase] = ACTIONS(21),
    [anon_sym_uppercamelcase] = ACTIONS(21),
    [anon_sym_uppercase] = ACTIONS(21),
    [anon_sym_absolute_path] = ACTIONS(21),
    [anon_sym_canonicalize] = ACTIONS(21),
    [anon_sym_extension] = ACTIONS(21),
    [anon_sym_file_name] = ACTIONS(21),
    [anon_sym_file_stem] = ACTIONS(21),
    [anon_sym_parent_directory] = ACTIONS(21),
    [anon_sym_without_extension] = ACTIONS(21),
    [anon_sym_clean] = ACTIONS(21),
    [anon_sym_join] = ACTIONS(19),
    [anon_sym_set] = ACTIONS(29),
    [anon_sym_BQUOTE] = ACTIONS(31),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(33),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(35),
    [anon_sym_DQUOTE] = ACTIONS(37),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(39),
    [anon_sym_SQUOTE] = ACTIONS(41),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [2] = {
    [sym_alias] = STATE(56),
    [sym_import] = STATE(56),
    [sym_mod] = STATE(56),
    [sym_expression] = STATE(56),
    [sym_value] = STATE(35),
    [sym_builtin_function_call] = STATE(36),
    [sym_function_call] = STATE(36),
    [sym_setting] = STATE(56),
    [sym_backtick] = STATE(36),
    [sym_indented_backtick] = STATE(36),
    [sym_string] = STATE(36),
    [sym_indented_normal_string] = STATE(27),
    [sym_normal_string] = STATE(27),
    [sym_indented_raw_string] = STATE(27),
    [sym_raw_string] = STATE(27),
    [sym_comment] = STATE(2),
    [aux_sym_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(43),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_alias] = ACTIONS(9),
    [aux_sym_import_token1] = ACTIONS(11),
    [aux_sym_mod_token1] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_arch] = ACTIONS(17),
    [anon_sym_num_cpus] = ACTIONS(17),
    [anon_sym_os] = ACTIONS(17),
    [anon_sym_os_family] = ACTIONS(17),
    [anon_sym_shell] = ACTIONS(19),
    [anon_sym_env_var] = ACTIONS(21),
    [anon_sym_env_var_or_default] = ACTIONS(23),
    [anon_sym_env] = ACTIONS(25),
    [anon_sym_is_dependency] = ACTIONS(17),
    [anon_sym_invocation_dir] = ACTIONS(17),
    [anon_sym_invocation_dir_native] = ACTIONS(17),
    [anon_sym_invocation_directory] = ACTIONS(17),
    [anon_sym_invocation_directory_native] = ACTIONS(17),
    [anon_sym_justfile] = ACTIONS(17),
    [anon_sym_justfile_dir] = ACTIONS(17),
    [anon_sym_justfile_directory] = ACTIONS(17),
    [anon_sym_source_dir] = ACTIONS(17),
    [anon_sym_source_directory] = ACTIONS(17),
    [anon_sym_source_file] = ACTIONS(17),
    [anon_sym_just_executable] = ACTIONS(17),
    [anon_sym_just_pid] = ACTIONS(17),
    [anon_sym_append] = ACTIONS(23),
    [anon_sym_prepend] = ACTIONS(23),
    [anon_sym_encode_uri_component] = ACTIONS(21),
    [anon_sym_quote] = ACTIONS(21),
    [anon_sym_replace] = ACTIONS(27),
    [anon_sym_replace_regex] = ACTIONS(27),
    [anon_sym_trim] = ACTIONS(21),
    [anon_sym_trim_end] = ACTIONS(21),
    [anon_sym_trim_end_match] = ACTIONS(23),
    [anon_sym_trim_end_matches] = ACTIONS(23),
    [anon_sym_trim_start] = ACTIONS(21),
    [anon_sym_trim_start_match] = ACTIONS(23),
    [anon_sym_trim_start_matches] = ACTIONS(23),
    [anon_sym_capitalize] = ACTIONS(21),
    [anon_sym_kebabcase] = ACTIONS(21),
    [anon_sym_lowercamelcase] = ACTIONS(21),
    [anon_sym_lowercase] = ACTIONS(21),
    [anon_sym_shoutykebabcase] = ACTIONS(21),
    [anon_sym_shoutysnakecase] = ACTIONS(21),
    [anon_sym_snakecase] = ACTIONS(21),
    [anon_sym_titlecase] = ACTIONS(21),
    [anon_sym_uppercamelcase] = ACTIONS(21),
    [anon_sym_uppercase] = ACTIONS(21),
    [anon_sym_absolute_path] = ACTIONS(21),
    [anon_sym_canonicalize] = ACTIONS(21),
    [anon_sym_extension] = ACTIONS(21),
    [anon_sym_file_name] = ACTIONS(21),
    [anon_sym_file_stem] = ACTIONS(21),
    [anon_sym_parent_directory] = ACTIONS(21),
    [anon_sym_without_extension] = ACTIONS(21),
    [anon_sym_clean] = ACTIONS(21),
    [anon_sym_join] = ACTIONS(19),
    [anon_sym_set] = ACTIONS(29),
    [anon_sym_BQUOTE] = ACTIONS(31),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(33),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(35),
    [anon_sym_DQUOTE] = ACTIONS(37),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(39),
    [anon_sym_SQUOTE] = ACTIONS(41),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [3] = {
    [sym_alias] = STATE(56),
    [sym_import] = STATE(56),
    [sym_mod] = STATE(56),
    [sym_expression] = STATE(56),
    [sym_value] = STATE(35),
    [sym_builtin_function_call] = STATE(36),
    [sym_function_call] = STATE(36),
    [sym_setting] = STATE(56),
    [sym_backtick] = STATE(36),
    [sym_indented_backtick] = STATE(36),
    [sym_string] = STATE(36),
    [sym_indented_normal_string] = STATE(27),
    [sym_normal_string] = STATE(27),
    [sym_indented_raw_string] = STATE(27),
    [sym_raw_string] = STATE(27),
    [sym_comment] = STATE(3),
    [aux_sym_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(45),
    [sym_identifier] = ACTIONS(47),
    [anon_sym_alias] = ACTIONS(50),
    [aux_sym_import_token1] = ACTIONS(53),
    [aux_sym_mod_token1] = ACTIONS(56),
    [anon_sym_LPAREN] = ACTIONS(59),
    [anon_sym_arch] = ACTIONS(62),
    [anon_sym_num_cpus] = ACTIONS(62),
    [anon_sym_os] = ACTIONS(62),
    [anon_sym_os_family] = ACTIONS(62),
    [anon_sym_shell] = ACTIONS(65),
    [anon_sym_env_var] = ACTIONS(68),
    [anon_sym_env_var_or_default] = ACTIONS(71),
    [anon_sym_env] = ACTIONS(74),
    [anon_sym_is_dependency] = ACTIONS(62),
    [anon_sym_invocation_dir] = ACTIONS(62),
    [anon_sym_invocation_dir_native] = ACTIONS(62),
    [anon_sym_invocation_directory] = ACTIONS(62),
    [anon_sym_invocation_directory_native] = ACTIONS(62),
    [anon_sym_justfile] = ACTIONS(62),
    [anon_sym_justfile_dir] = ACTIONS(62),
    [anon_sym_justfile_directory] = ACTIONS(62),
    [anon_sym_source_dir] = ACTIONS(62),
    [anon_sym_source_directory] = ACTIONS(62),
    [anon_sym_source_file] = ACTIONS(62),
    [anon_sym_just_executable] = ACTIONS(62),
    [anon_sym_just_pid] = ACTIONS(62),
    [anon_sym_append] = ACTIONS(71),
    [anon_sym_prepend] = ACTIONS(71),
    [anon_sym_encode_uri_component] = ACTIONS(68),
    [anon_sym_quote] = ACTIONS(68),
    [anon_sym_replace] = ACTIONS(77),
    [anon_sym_replace_regex] = ACTIONS(77),
    [anon_sym_trim] = ACTIONS(68),
    [anon_sym_trim_end] = ACTIONS(68),
    [anon_sym_trim_end_match] = ACTIONS(71),
    [anon_sym_trim_end_matches] = ACTIONS(71),
    [anon_sym_trim_start] = ACTIONS(68),
    [anon_sym_trim_start_match] = ACTIONS(71),
    [anon_sym_trim_start_matches] = ACTIONS(71),
    [anon_sym_capitalize] = ACTIONS(68),
    [anon_sym_kebabcase] = ACTIONS(68),
    [anon_sym_lowercamelcase] = ACTIONS(68),
    [anon_sym_lowercase] = ACTIONS(68),
    [anon_sym_shoutykebabcase] = ACTIONS(68),
    [anon_sym_shoutysnakecase] = ACTIONS(68),
    [anon_sym_snakecase] = ACTIONS(68),
    [anon_sym_titlecase] = ACTIONS(68),
    [anon_sym_uppercamelcase] = ACTIONS(68),
    [anon_sym_uppercase] = ACTIONS(68),
    [anon_sym_absolute_path] = ACTIONS(68),
    [anon_sym_canonicalize] = ACTIONS(68),
    [anon_sym_extension] = ACTIONS(68),
    [anon_sym_file_name] = ACTIONS(68),
    [anon_sym_file_stem] = ACTIONS(68),
    [anon_sym_parent_directory] = ACTIONS(68),
    [anon_sym_without_extension] = ACTIONS(68),
    [anon_sym_clean] = ACTIONS(68),
    [anon_sym_join] = ACTIONS(65),
    [anon_sym_set] = ACTIONS(80),
    [anon_sym_BQUOTE] = ACTIONS(83),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(86),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(89),
    [anon_sym_DQUOTE] = ACTIONS(92),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(95),
    [anon_sym_SQUOTE] = ACTIONS(98),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [4] = {
    [sym_expression] = STATE(89),
    [sym_value] = STATE(35),
    [sym_builtin_function_call] = STATE(36),
    [sym_function_call] = STATE(36),
    [sym_function_parameters] = STATE(117),
    [sym_backtick] = STATE(36),
    [sym_indented_backtick] = STATE(36),
    [sym_string] = STATE(36),
    [sym_indented_normal_string] = STATE(27),
    [sym_normal_string] = STATE(27),
    [sym_indented_raw_string] = STATE(27),
    [sym_raw_string] = STATE(27),
    [sym_comment] = STATE(4),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_RPAREN] = ACTIONS(101),
    [anon_sym_arch] = ACTIONS(17),
    [anon_sym_num_cpus] = ACTIONS(17),
    [anon_sym_os] = ACTIONS(17),
    [anon_sym_os_family] = ACTIONS(17),
    [anon_sym_shell] = ACTIONS(19),
    [anon_sym_env_var] = ACTIONS(21),
    [anon_sym_env_var_or_default] = ACTIONS(23),
    [anon_sym_env] = ACTIONS(25),
    [anon_sym_is_dependency] = ACTIONS(17),
    [anon_sym_invocation_dir] = ACTIONS(17),
    [anon_sym_invocation_dir_native] = ACTIONS(17),
    [anon_sym_invocation_directory] = ACTIONS(17),
    [anon_sym_invocation_directory_native] = ACTIONS(17),
    [anon_sym_justfile] = ACTIONS(17),
    [anon_sym_justfile_dir] = ACTIONS(17),
    [anon_sym_justfile_directory] = ACTIONS(17),
    [anon_sym_source_dir] = ACTIONS(17),
    [anon_sym_source_directory] = ACTIONS(17),
    [anon_sym_source_file] = ACTIONS(17),
    [anon_sym_just_executable] = ACTIONS(17),
    [anon_sym_just_pid] = ACTIONS(17),
    [anon_sym_append] = ACTIONS(23),
    [anon_sym_prepend] = ACTIONS(23),
    [anon_sym_encode_uri_component] = ACTIONS(21),
    [anon_sym_quote] = ACTIONS(21),
    [anon_sym_replace] = ACTIONS(27),
    [anon_sym_replace_regex] = ACTIONS(27),
    [anon_sym_trim] = ACTIONS(21),
    [anon_sym_trim_end] = ACTIONS(21),
    [anon_sym_trim_end_match] = ACTIONS(23),
    [anon_sym_trim_end_matches] = ACTIONS(23),
    [anon_sym_trim_start] = ACTIONS(21),
    [anon_sym_trim_start_match] = ACTIONS(23),
    [anon_sym_trim_start_matches] = ACTIONS(23),
    [anon_sym_capitalize] = ACTIONS(21),
    [anon_sym_kebabcase] = ACTIONS(21),
    [anon_sym_lowercamelcase] = ACTIONS(21),
    [anon_sym_lowercase] = ACTIONS(21),
    [anon_sym_shoutykebabcase] = ACTIONS(21),
    [anon_sym_shoutysnakecase] = ACTIONS(21),
    [anon_sym_snakecase] = ACTIONS(21),
    [anon_sym_titlecase] = ACTIONS(21),
    [anon_sym_uppercamelcase] = ACTIONS(21),
    [anon_sym_uppercase] = ACTIONS(21),
    [anon_sym_absolute_path] = ACTIONS(21),
    [anon_sym_canonicalize] = ACTIONS(21),
    [anon_sym_extension] = ACTIONS(21),
    [anon_sym_file_name] = ACTIONS(21),
    [anon_sym_file_stem] = ACTIONS(21),
    [anon_sym_parent_directory] = ACTIONS(21),
    [anon_sym_without_extension] = ACTIONS(21),
    [anon_sym_clean] = ACTIONS(21),
    [anon_sym_join] = ACTIONS(19),
    [anon_sym_BQUOTE] = ACTIONS(31),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(33),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(35),
    [anon_sym_DQUOTE] = ACTIONS(37),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(39),
    [anon_sym_SQUOTE] = ACTIONS(41),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [5] = {
    [sym_expression] = STATE(102),
    [sym_value] = STATE(35),
    [sym_builtin_function_call] = STATE(36),
    [sym_function_call] = STATE(36),
    [sym_backtick] = STATE(36),
    [sym_indented_backtick] = STATE(36),
    [sym_string] = STATE(36),
    [sym_indented_normal_string] = STATE(27),
    [sym_normal_string] = STATE(27),
    [sym_indented_raw_string] = STATE(27),
    [sym_raw_string] = STATE(27),
    [sym_comment] = STATE(5),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_RPAREN] = ACTIONS(103),
    [anon_sym_arch] = ACTIONS(17),
    [anon_sym_num_cpus] = ACTIONS(17),
    [anon_sym_os] = ACTIONS(17),
    [anon_sym_os_family] = ACTIONS(17),
    [anon_sym_shell] = ACTIONS(19),
    [anon_sym_env_var] = ACTIONS(21),
    [anon_sym_env_var_or_default] = ACTIONS(23),
    [anon_sym_env] = ACTIONS(25),
    [anon_sym_is_dependency] = ACTIONS(17),
    [anon_sym_invocation_dir] = ACTIONS(17),
    [anon_sym_invocation_dir_native] = ACTIONS(17),
    [anon_sym_invocation_directory] = ACTIONS(17),
    [anon_sym_invocation_directory_native] = ACTIONS(17),
    [anon_sym_justfile] = ACTIONS(17),
    [anon_sym_justfile_dir] = ACTIONS(17),
    [anon_sym_justfile_directory] = ACTIONS(17),
    [anon_sym_source_dir] = ACTIONS(17),
    [anon_sym_source_directory] = ACTIONS(17),
    [anon_sym_source_file] = ACTIONS(17),
    [anon_sym_just_executable] = ACTIONS(17),
    [anon_sym_just_pid] = ACTIONS(17),
    [anon_sym_append] = ACTIONS(23),
    [anon_sym_prepend] = ACTIONS(23),
    [anon_sym_encode_uri_component] = ACTIONS(21),
    [anon_sym_quote] = ACTIONS(21),
    [anon_sym_replace] = ACTIONS(27),
    [anon_sym_replace_regex] = ACTIONS(27),
    [anon_sym_trim] = ACTIONS(21),
    [anon_sym_trim_end] = ACTIONS(21),
    [anon_sym_trim_end_match] = ACTIONS(23),
    [anon_sym_trim_end_matches] = ACTIONS(23),
    [anon_sym_trim_start] = ACTIONS(21),
    [anon_sym_trim_start_match] = ACTIONS(23),
    [anon_sym_trim_start_matches] = ACTIONS(23),
    [anon_sym_capitalize] = ACTIONS(21),
    [anon_sym_kebabcase] = ACTIONS(21),
    [anon_sym_lowercamelcase] = ACTIONS(21),
    [anon_sym_lowercase] = ACTIONS(21),
    [anon_sym_shoutykebabcase] = ACTIONS(21),
    [anon_sym_shoutysnakecase] = ACTIONS(21),
    [anon_sym_snakecase] = ACTIONS(21),
    [anon_sym_titlecase] = ACTIONS(21),
    [anon_sym_uppercamelcase] = ACTIONS(21),
    [anon_sym_uppercase] = ACTIONS(21),
    [anon_sym_absolute_path] = ACTIONS(21),
    [anon_sym_canonicalize] = ACTIONS(21),
    [anon_sym_extension] = ACTIONS(21),
    [anon_sym_file_name] = ACTIONS(21),
    [anon_sym_file_stem] = ACTIONS(21),
    [anon_sym_parent_directory] = ACTIONS(21),
    [anon_sym_without_extension] = ACTIONS(21),
    [anon_sym_clean] = ACTIONS(21),
    [anon_sym_join] = ACTIONS(19),
    [anon_sym_BQUOTE] = ACTIONS(31),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(33),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(35),
    [anon_sym_DQUOTE] = ACTIONS(37),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(39),
    [anon_sym_SQUOTE] = ACTIONS(41),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [6] = {
    [sym_expression] = STATE(89),
    [sym_value] = STATE(35),
    [sym_builtin_function_call] = STATE(36),
    [sym_function_call] = STATE(36),
    [sym_function_parameters] = STATE(114),
    [sym_backtick] = STATE(36),
    [sym_indented_backtick] = STATE(36),
    [sym_string] = STATE(36),
    [sym_indented_normal_string] = STATE(27),
    [sym_normal_string] = STATE(27),
    [sym_indented_raw_string] = STATE(27),
    [sym_raw_string] = STATE(27),
    [sym_comment] = STATE(6),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_arch] = ACTIONS(17),
    [anon_sym_num_cpus] = ACTIONS(17),
    [anon_sym_os] = ACTIONS(17),
    [anon_sym_os_family] = ACTIONS(17),
    [anon_sym_shell] = ACTIONS(19),
    [anon_sym_env_var] = ACTIONS(21),
    [anon_sym_env_var_or_default] = ACTIONS(23),
    [anon_sym_env] = ACTIONS(25),
    [anon_sym_is_dependency] = ACTIONS(17),
    [anon_sym_invocation_dir] = ACTIONS(17),
    [anon_sym_invocation_dir_native] = ACTIONS(17),
    [anon_sym_invocation_directory] = ACTIONS(17),
    [anon_sym_invocation_directory_native] = ACTIONS(17),
    [anon_sym_justfile] = ACTIONS(17),
    [anon_sym_justfile_dir] = ACTIONS(17),
    [anon_sym_justfile_directory] = ACTIONS(17),
    [anon_sym_source_dir] = ACTIONS(17),
    [anon_sym_source_directory] = ACTIONS(17),
    [anon_sym_source_file] = ACTIONS(17),
    [anon_sym_just_executable] = ACTIONS(17),
    [anon_sym_just_pid] = ACTIONS(17),
    [anon_sym_append] = ACTIONS(23),
    [anon_sym_prepend] = ACTIONS(23),
    [anon_sym_encode_uri_component] = ACTIONS(21),
    [anon_sym_quote] = ACTIONS(21),
    [anon_sym_replace] = ACTIONS(27),
    [anon_sym_replace_regex] = ACTIONS(27),
    [anon_sym_trim] = ACTIONS(21),
    [anon_sym_trim_end] = ACTIONS(21),
    [anon_sym_trim_end_match] = ACTIONS(23),
    [anon_sym_trim_end_matches] = ACTIONS(23),
    [anon_sym_trim_start] = ACTIONS(21),
    [anon_sym_trim_start_match] = ACTIONS(23),
    [anon_sym_trim_start_matches] = ACTIONS(23),
    [anon_sym_capitalize] = ACTIONS(21),
    [anon_sym_kebabcase] = ACTIONS(21),
    [anon_sym_lowercamelcase] = ACTIONS(21),
    [anon_sym_lowercase] = ACTIONS(21),
    [anon_sym_shoutykebabcase] = ACTIONS(21),
    [anon_sym_shoutysnakecase] = ACTIONS(21),
    [anon_sym_snakecase] = ACTIONS(21),
    [anon_sym_titlecase] = ACTIONS(21),
    [anon_sym_uppercamelcase] = ACTIONS(21),
    [anon_sym_uppercase] = ACTIONS(21),
    [anon_sym_absolute_path] = ACTIONS(21),
    [anon_sym_canonicalize] = ACTIONS(21),
    [anon_sym_extension] = ACTIONS(21),
    [anon_sym_file_name] = ACTIONS(21),
    [anon_sym_file_stem] = ACTIONS(21),
    [anon_sym_parent_directory] = ACTIONS(21),
    [anon_sym_without_extension] = ACTIONS(21),
    [anon_sym_clean] = ACTIONS(21),
    [anon_sym_join] = ACTIONS(19),
    [anon_sym_BQUOTE] = ACTIONS(31),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(33),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(35),
    [anon_sym_DQUOTE] = ACTIONS(37),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(39),
    [anon_sym_SQUOTE] = ACTIONS(41),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [7] = {
    [sym_expression] = STATE(100),
    [sym_value] = STATE(35),
    [sym_builtin_function_call] = STATE(36),
    [sym_function_call] = STATE(36),
    [sym_backtick] = STATE(36),
    [sym_indented_backtick] = STATE(36),
    [sym_string] = STATE(36),
    [sym_indented_normal_string] = STATE(27),
    [sym_normal_string] = STATE(27),
    [sym_indented_raw_string] = STATE(27),
    [sym_raw_string] = STATE(27),
    [sym_comment] = STATE(7),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_RPAREN] = ACTIONS(105),
    [anon_sym_arch] = ACTIONS(17),
    [anon_sym_num_cpus] = ACTIONS(17),
    [anon_sym_os] = ACTIONS(17),
    [anon_sym_os_family] = ACTIONS(17),
    [anon_sym_shell] = ACTIONS(19),
    [anon_sym_env_var] = ACTIONS(21),
    [anon_sym_env_var_or_default] = ACTIONS(23),
    [anon_sym_env] = ACTIONS(25),
    [anon_sym_is_dependency] = ACTIONS(17),
    [anon_sym_invocation_dir] = ACTIONS(17),
    [anon_sym_invocation_dir_native] = ACTIONS(17),
    [anon_sym_invocation_directory] = ACTIONS(17),
    [anon_sym_invocation_directory_native] = ACTIONS(17),
    [anon_sym_justfile] = ACTIONS(17),
    [anon_sym_justfile_dir] = ACTIONS(17),
    [anon_sym_justfile_directory] = ACTIONS(17),
    [anon_sym_source_dir] = ACTIONS(17),
    [anon_sym_source_directory] = ACTIONS(17),
    [anon_sym_source_file] = ACTIONS(17),
    [anon_sym_just_executable] = ACTIONS(17),
    [anon_sym_just_pid] = ACTIONS(17),
    [anon_sym_append] = ACTIONS(23),
    [anon_sym_prepend] = ACTIONS(23),
    [anon_sym_encode_uri_component] = ACTIONS(21),
    [anon_sym_quote] = ACTIONS(21),
    [anon_sym_replace] = ACTIONS(27),
    [anon_sym_replace_regex] = ACTIONS(27),
    [anon_sym_trim] = ACTIONS(21),
    [anon_sym_trim_end] = ACTIONS(21),
    [anon_sym_trim_end_match] = ACTIONS(23),
    [anon_sym_trim_end_matches] = ACTIONS(23),
    [anon_sym_trim_start] = ACTIONS(21),
    [anon_sym_trim_start_match] = ACTIONS(23),
    [anon_sym_trim_start_matches] = ACTIONS(23),
    [anon_sym_capitalize] = ACTIONS(21),
    [anon_sym_kebabcase] = ACTIONS(21),
    [anon_sym_lowercamelcase] = ACTIONS(21),
    [anon_sym_lowercase] = ACTIONS(21),
    [anon_sym_shoutykebabcase] = ACTIONS(21),
    [anon_sym_shoutysnakecase] = ACTIONS(21),
    [anon_sym_snakecase] = ACTIONS(21),
    [anon_sym_titlecase] = ACTIONS(21),
    [anon_sym_uppercamelcase] = ACTIONS(21),
    [anon_sym_uppercase] = ACTIONS(21),
    [anon_sym_absolute_path] = ACTIONS(21),
    [anon_sym_canonicalize] = ACTIONS(21),
    [anon_sym_extension] = ACTIONS(21),
    [anon_sym_file_name] = ACTIONS(21),
    [anon_sym_file_stem] = ACTIONS(21),
    [anon_sym_parent_directory] = ACTIONS(21),
    [anon_sym_without_extension] = ACTIONS(21),
    [anon_sym_clean] = ACTIONS(21),
    [anon_sym_join] = ACTIONS(19),
    [anon_sym_BQUOTE] = ACTIONS(31),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(33),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(35),
    [anon_sym_DQUOTE] = ACTIONS(37),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(39),
    [anon_sym_SQUOTE] = ACTIONS(41),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [8] = {
    [sym_expression] = STATE(100),
    [sym_value] = STATE(35),
    [sym_builtin_function_call] = STATE(36),
    [sym_function_call] = STATE(36),
    [sym_backtick] = STATE(36),
    [sym_indented_backtick] = STATE(36),
    [sym_string] = STATE(36),
    [sym_indented_normal_string] = STATE(27),
    [sym_normal_string] = STATE(27),
    [sym_indented_raw_string] = STATE(27),
    [sym_raw_string] = STATE(27),
    [sym_comment] = STATE(8),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_RPAREN] = ACTIONS(107),
    [anon_sym_arch] = ACTIONS(17),
    [anon_sym_num_cpus] = ACTIONS(17),
    [anon_sym_os] = ACTIONS(17),
    [anon_sym_os_family] = ACTIONS(17),
    [anon_sym_shell] = ACTIONS(19),
    [anon_sym_env_var] = ACTIONS(21),
    [anon_sym_env_var_or_default] = ACTIONS(23),
    [anon_sym_env] = ACTIONS(25),
    [anon_sym_is_dependency] = ACTIONS(17),
    [anon_sym_invocation_dir] = ACTIONS(17),
    [anon_sym_invocation_dir_native] = ACTIONS(17),
    [anon_sym_invocation_directory] = ACTIONS(17),
    [anon_sym_invocation_directory_native] = ACTIONS(17),
    [anon_sym_justfile] = ACTIONS(17),
    [anon_sym_justfile_dir] = ACTIONS(17),
    [anon_sym_justfile_directory] = ACTIONS(17),
    [anon_sym_source_dir] = ACTIONS(17),
    [anon_sym_source_directory] = ACTIONS(17),
    [anon_sym_source_file] = ACTIONS(17),
    [anon_sym_just_executable] = ACTIONS(17),
    [anon_sym_just_pid] = ACTIONS(17),
    [anon_sym_append] = ACTIONS(23),
    [anon_sym_prepend] = ACTIONS(23),
    [anon_sym_encode_uri_component] = ACTIONS(21),
    [anon_sym_quote] = ACTIONS(21),
    [anon_sym_replace] = ACTIONS(27),
    [anon_sym_replace_regex] = ACTIONS(27),
    [anon_sym_trim] = ACTIONS(21),
    [anon_sym_trim_end] = ACTIONS(21),
    [anon_sym_trim_end_match] = ACTIONS(23),
    [anon_sym_trim_end_matches] = ACTIONS(23),
    [anon_sym_trim_start] = ACTIONS(21),
    [anon_sym_trim_start_match] = ACTIONS(23),
    [anon_sym_trim_start_matches] = ACTIONS(23),
    [anon_sym_capitalize] = ACTIONS(21),
    [anon_sym_kebabcase] = ACTIONS(21),
    [anon_sym_lowercamelcase] = ACTIONS(21),
    [anon_sym_lowercase] = ACTIONS(21),
    [anon_sym_shoutykebabcase] = ACTIONS(21),
    [anon_sym_shoutysnakecase] = ACTIONS(21),
    [anon_sym_snakecase] = ACTIONS(21),
    [anon_sym_titlecase] = ACTIONS(21),
    [anon_sym_uppercamelcase] = ACTIONS(21),
    [anon_sym_uppercase] = ACTIONS(21),
    [anon_sym_absolute_path] = ACTIONS(21),
    [anon_sym_canonicalize] = ACTIONS(21),
    [anon_sym_extension] = ACTIONS(21),
    [anon_sym_file_name] = ACTIONS(21),
    [anon_sym_file_stem] = ACTIONS(21),
    [anon_sym_parent_directory] = ACTIONS(21),
    [anon_sym_without_extension] = ACTIONS(21),
    [anon_sym_clean] = ACTIONS(21),
    [anon_sym_join] = ACTIONS(19),
    [anon_sym_BQUOTE] = ACTIONS(31),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(33),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(35),
    [anon_sym_DQUOTE] = ACTIONS(37),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(39),
    [anon_sym_SQUOTE] = ACTIONS(41),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [9] = {
    [sym_expression] = STATE(102),
    [sym_value] = STATE(35),
    [sym_builtin_function_call] = STATE(36),
    [sym_function_call] = STATE(36),
    [sym_backtick] = STATE(36),
    [sym_indented_backtick] = STATE(36),
    [sym_string] = STATE(36),
    [sym_indented_normal_string] = STATE(27),
    [sym_normal_string] = STATE(27),
    [sym_indented_raw_string] = STATE(27),
    [sym_raw_string] = STATE(27),
    [sym_comment] = STATE(9),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_arch] = ACTIONS(17),
    [anon_sym_num_cpus] = ACTIONS(17),
    [anon_sym_os] = ACTIONS(17),
    [anon_sym_os_family] = ACTIONS(17),
    [anon_sym_shell] = ACTIONS(19),
    [anon_sym_env_var] = ACTIONS(21),
    [anon_sym_env_var_or_default] = ACTIONS(23),
    [anon_sym_env] = ACTIONS(25),
    [anon_sym_is_dependency] = ACTIONS(17),
    [anon_sym_invocation_dir] = ACTIONS(17),
    [anon_sym_invocation_dir_native] = ACTIONS(17),
    [anon_sym_invocation_directory] = ACTIONS(17),
    [anon_sym_invocation_directory_native] = ACTIONS(17),
    [anon_sym_justfile] = ACTIONS(17),
    [anon_sym_justfile_dir] = ACTIONS(17),
    [anon_sym_justfile_directory] = ACTIONS(17),
    [anon_sym_source_dir] = ACTIONS(17),
    [anon_sym_source_directory] = ACTIONS(17),
    [anon_sym_source_file] = ACTIONS(17),
    [anon_sym_just_executable] = ACTIONS(17),
    [anon_sym_just_pid] = ACTIONS(17),
    [anon_sym_append] = ACTIONS(23),
    [anon_sym_prepend] = ACTIONS(23),
    [anon_sym_encode_uri_component] = ACTIONS(21),
    [anon_sym_quote] = ACTIONS(21),
    [anon_sym_replace] = ACTIONS(27),
    [anon_sym_replace_regex] = ACTIONS(27),
    [anon_sym_trim] = ACTIONS(21),
    [anon_sym_trim_end] = ACTIONS(21),
    [anon_sym_trim_end_match] = ACTIONS(23),
    [anon_sym_trim_end_matches] = ACTIONS(23),
    [anon_sym_trim_start] = ACTIONS(21),
    [anon_sym_trim_start_match] = ACTIONS(23),
    [anon_sym_trim_start_matches] = ACTIONS(23),
    [anon_sym_capitalize] = ACTIONS(21),
    [anon_sym_kebabcase] = ACTIONS(21),
    [anon_sym_lowercamelcase] = ACTIONS(21),
    [anon_sym_lowercase] = ACTIONS(21),
    [anon_sym_shoutykebabcase] = ACTIONS(21),
    [anon_sym_shoutysnakecase] = ACTIONS(21),
    [anon_sym_snakecase] = ACTIONS(21),
    [anon_sym_titlecase] = ACTIONS(21),
    [anon_sym_uppercamelcase] = ACTIONS(21),
    [anon_sym_uppercase] = ACTIONS(21),
    [anon_sym_absolute_path] = ACTIONS(21),
    [anon_sym_canonicalize] = ACTIONS(21),
    [anon_sym_extension] = ACTIONS(21),
    [anon_sym_file_name] = ACTIONS(21),
    [anon_sym_file_stem] = ACTIONS(21),
    [anon_sym_parent_directory] = ACTIONS(21),
    [anon_sym_without_extension] = ACTIONS(21),
    [anon_sym_clean] = ACTIONS(21),
    [anon_sym_join] = ACTIONS(19),
    [anon_sym_BQUOTE] = ACTIONS(31),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(33),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(35),
    [anon_sym_DQUOTE] = ACTIONS(37),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(39),
    [anon_sym_SQUOTE] = ACTIONS(41),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [10] = {
    [sym_expression] = STATE(90),
    [sym_value] = STATE(35),
    [sym_builtin_function_call] = STATE(36),
    [sym_function_call] = STATE(36),
    [sym_backtick] = STATE(36),
    [sym_indented_backtick] = STATE(36),
    [sym_string] = STATE(36),
    [sym_indented_normal_string] = STATE(27),
    [sym_normal_string] = STATE(27),
    [sym_indented_raw_string] = STATE(27),
    [sym_raw_string] = STATE(27),
    [sym_comment] = STATE(10),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_arch] = ACTIONS(17),
    [anon_sym_num_cpus] = ACTIONS(17),
    [anon_sym_os] = ACTIONS(17),
    [anon_sym_os_family] = ACTIONS(17),
    [anon_sym_shell] = ACTIONS(19),
    [anon_sym_env_var] = ACTIONS(21),
    [anon_sym_env_var_or_default] = ACTIONS(23),
    [anon_sym_env] = ACTIONS(25),
    [anon_sym_is_dependency] = ACTIONS(17),
    [anon_sym_invocation_dir] = ACTIONS(17),
    [anon_sym_invocation_dir_native] = ACTIONS(17),
    [anon_sym_invocation_directory] = ACTIONS(17),
    [anon_sym_invocation_directory_native] = ACTIONS(17),
    [anon_sym_justfile] = ACTIONS(17),
    [anon_sym_justfile_dir] = ACTIONS(17),
    [anon_sym_justfile_directory] = ACTIONS(17),
    [anon_sym_source_dir] = ACTIONS(17),
    [anon_sym_source_directory] = ACTIONS(17),
    [anon_sym_source_file] = ACTIONS(17),
    [anon_sym_just_executable] = ACTIONS(17),
    [anon_sym_just_pid] = ACTIONS(17),
    [anon_sym_append] = ACTIONS(23),
    [anon_sym_prepend] = ACTIONS(23),
    [anon_sym_encode_uri_component] = ACTIONS(21),
    [anon_sym_quote] = ACTIONS(21),
    [anon_sym_replace] = ACTIONS(27),
    [anon_sym_replace_regex] = ACTIONS(27),
    [anon_sym_trim] = ACTIONS(21),
    [anon_sym_trim_end] = ACTIONS(21),
    [anon_sym_trim_end_match] = ACTIONS(23),
    [anon_sym_trim_end_matches] = ACTIONS(23),
    [anon_sym_trim_start] = ACTIONS(21),
    [anon_sym_trim_start_match] = ACTIONS(23),
    [anon_sym_trim_start_matches] = ACTIONS(23),
    [anon_sym_capitalize] = ACTIONS(21),
    [anon_sym_kebabcase] = ACTIONS(21),
    [anon_sym_lowercamelcase] = ACTIONS(21),
    [anon_sym_lowercase] = ACTIONS(21),
    [anon_sym_shoutykebabcase] = ACTIONS(21),
    [anon_sym_shoutysnakecase] = ACTIONS(21),
    [anon_sym_snakecase] = ACTIONS(21),
    [anon_sym_titlecase] = ACTIONS(21),
    [anon_sym_uppercamelcase] = ACTIONS(21),
    [anon_sym_uppercase] = ACTIONS(21),
    [anon_sym_absolute_path] = ACTIONS(21),
    [anon_sym_canonicalize] = ACTIONS(21),
    [anon_sym_extension] = ACTIONS(21),
    [anon_sym_file_name] = ACTIONS(21),
    [anon_sym_file_stem] = ACTIONS(21),
    [anon_sym_parent_directory] = ACTIONS(21),
    [anon_sym_without_extension] = ACTIONS(21),
    [anon_sym_clean] = ACTIONS(21),
    [anon_sym_join] = ACTIONS(19),
    [anon_sym_BQUOTE] = ACTIONS(31),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(33),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(35),
    [anon_sym_DQUOTE] = ACTIONS(37),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(39),
    [anon_sym_SQUOTE] = ACTIONS(41),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [11] = {
    [sym_expression] = STATE(108),
    [sym_value] = STATE(35),
    [sym_builtin_function_call] = STATE(36),
    [sym_function_call] = STATE(36),
    [sym_backtick] = STATE(36),
    [sym_indented_backtick] = STATE(36),
    [sym_string] = STATE(36),
    [sym_indented_normal_string] = STATE(27),
    [sym_normal_string] = STATE(27),
    [sym_indented_raw_string] = STATE(27),
    [sym_raw_string] = STATE(27),
    [sym_comment] = STATE(11),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_arch] = ACTIONS(17),
    [anon_sym_num_cpus] = ACTIONS(17),
    [anon_sym_os] = ACTIONS(17),
    [anon_sym_os_family] = ACTIONS(17),
    [anon_sym_shell] = ACTIONS(19),
    [anon_sym_env_var] = ACTIONS(21),
    [anon_sym_env_var_or_default] = ACTIONS(23),
    [anon_sym_env] = ACTIONS(25),
    [anon_sym_is_dependency] = ACTIONS(17),
    [anon_sym_invocation_dir] = ACTIONS(17),
    [anon_sym_invocation_dir_native] = ACTIONS(17),
    [anon_sym_invocation_directory] = ACTIONS(17),
    [anon_sym_invocation_directory_native] = ACTIONS(17),
    [anon_sym_justfile] = ACTIONS(17),
    [anon_sym_justfile_dir] = ACTIONS(17),
    [anon_sym_justfile_directory] = ACTIONS(17),
    [anon_sym_source_dir] = ACTIONS(17),
    [anon_sym_source_directory] = ACTIONS(17),
    [anon_sym_source_file] = ACTIONS(17),
    [anon_sym_just_executable] = ACTIONS(17),
    [anon_sym_just_pid] = ACTIONS(17),
    [anon_sym_append] = ACTIONS(23),
    [anon_sym_prepend] = ACTIONS(23),
    [anon_sym_encode_uri_component] = ACTIONS(21),
    [anon_sym_quote] = ACTIONS(21),
    [anon_sym_replace] = ACTIONS(27),
    [anon_sym_replace_regex] = ACTIONS(27),
    [anon_sym_trim] = ACTIONS(21),
    [anon_sym_trim_end] = ACTIONS(21),
    [anon_sym_trim_end_match] = ACTIONS(23),
    [anon_sym_trim_end_matches] = ACTIONS(23),
    [anon_sym_trim_start] = ACTIONS(21),
    [anon_sym_trim_start_match] = ACTIONS(23),
    [anon_sym_trim_start_matches] = ACTIONS(23),
    [anon_sym_capitalize] = ACTIONS(21),
    [anon_sym_kebabcase] = ACTIONS(21),
    [anon_sym_lowercamelcase] = ACTIONS(21),
    [anon_sym_lowercase] = ACTIONS(21),
    [anon_sym_shoutykebabcase] = ACTIONS(21),
    [anon_sym_shoutysnakecase] = ACTIONS(21),
    [anon_sym_snakecase] = ACTIONS(21),
    [anon_sym_titlecase] = ACTIONS(21),
    [anon_sym_uppercamelcase] = ACTIONS(21),
    [anon_sym_uppercase] = ACTIONS(21),
    [anon_sym_absolute_path] = ACTIONS(21),
    [anon_sym_canonicalize] = ACTIONS(21),
    [anon_sym_extension] = ACTIONS(21),
    [anon_sym_file_name] = ACTIONS(21),
    [anon_sym_file_stem] = ACTIONS(21),
    [anon_sym_parent_directory] = ACTIONS(21),
    [anon_sym_without_extension] = ACTIONS(21),
    [anon_sym_clean] = ACTIONS(21),
    [anon_sym_join] = ACTIONS(19),
    [anon_sym_BQUOTE] = ACTIONS(31),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(33),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(35),
    [anon_sym_DQUOTE] = ACTIONS(37),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(39),
    [anon_sym_SQUOTE] = ACTIONS(41),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [12] = {
    [sym_expression] = STATE(121),
    [sym_value] = STATE(35),
    [sym_builtin_function_call] = STATE(36),
    [sym_function_call] = STATE(36),
    [sym_backtick] = STATE(36),
    [sym_indented_backtick] = STATE(36),
    [sym_string] = STATE(36),
    [sym_indented_normal_string] = STATE(27),
    [sym_normal_string] = STATE(27),
    [sym_indented_raw_string] = STATE(27),
    [sym_raw_string] = STATE(27),
    [sym_comment] = STATE(12),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_arch] = ACTIONS(17),
    [anon_sym_num_cpus] = ACTIONS(17),
    [anon_sym_os] = ACTIONS(17),
    [anon_sym_os_family] = ACTIONS(17),
    [anon_sym_shell] = ACTIONS(19),
    [anon_sym_env_var] = ACTIONS(21),
    [anon_sym_env_var_or_default] = ACTIONS(23),
    [anon_sym_env] = ACTIONS(25),
    [anon_sym_is_dependency] = ACTIONS(17),
    [anon_sym_invocation_dir] = ACTIONS(17),
    [anon_sym_invocation_dir_native] = ACTIONS(17),
    [anon_sym_invocation_directory] = ACTIONS(17),
    [anon_sym_invocation_directory_native] = ACTIONS(17),
    [anon_sym_justfile] = ACTIONS(17),
    [anon_sym_justfile_dir] = ACTIONS(17),
    [anon_sym_justfile_directory] = ACTIONS(17),
    [anon_sym_source_dir] = ACTIONS(17),
    [anon_sym_source_directory] = ACTIONS(17),
    [anon_sym_source_file] = ACTIONS(17),
    [anon_sym_just_executable] = ACTIONS(17),
    [anon_sym_just_pid] = ACTIONS(17),
    [anon_sym_append] = ACTIONS(23),
    [anon_sym_prepend] = ACTIONS(23),
    [anon_sym_encode_uri_component] = ACTIONS(21),
    [anon_sym_quote] = ACTIONS(21),
    [anon_sym_replace] = ACTIONS(27),
    [anon_sym_replace_regex] = ACTIONS(27),
    [anon_sym_trim] = ACTIONS(21),
    [anon_sym_trim_end] = ACTIONS(21),
    [anon_sym_trim_end_match] = ACTIONS(23),
    [anon_sym_trim_end_matches] = ACTIONS(23),
    [anon_sym_trim_start] = ACTIONS(21),
    [anon_sym_trim_start_match] = ACTIONS(23),
    [anon_sym_trim_start_matches] = ACTIONS(23),
    [anon_sym_capitalize] = ACTIONS(21),
    [anon_sym_kebabcase] = ACTIONS(21),
    [anon_sym_lowercamelcase] = ACTIONS(21),
    [anon_sym_lowercase] = ACTIONS(21),
    [anon_sym_shoutykebabcase] = ACTIONS(21),
    [anon_sym_shoutysnakecase] = ACTIONS(21),
    [anon_sym_snakecase] = ACTIONS(21),
    [anon_sym_titlecase] = ACTIONS(21),
    [anon_sym_uppercamelcase] = ACTIONS(21),
    [anon_sym_uppercase] = ACTIONS(21),
    [anon_sym_absolute_path] = ACTIONS(21),
    [anon_sym_canonicalize] = ACTIONS(21),
    [anon_sym_extension] = ACTIONS(21),
    [anon_sym_file_name] = ACTIONS(21),
    [anon_sym_file_stem] = ACTIONS(21),
    [anon_sym_parent_directory] = ACTIONS(21),
    [anon_sym_without_extension] = ACTIONS(21),
    [anon_sym_clean] = ACTIONS(21),
    [anon_sym_join] = ACTIONS(19),
    [anon_sym_BQUOTE] = ACTIONS(31),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(33),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(35),
    [anon_sym_DQUOTE] = ACTIONS(37),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(39),
    [anon_sym_SQUOTE] = ACTIONS(41),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [13] = {
    [sym_expression] = STATE(96),
    [sym_value] = STATE(35),
    [sym_builtin_function_call] = STATE(36),
    [sym_function_call] = STATE(36),
    [sym_backtick] = STATE(36),
    [sym_indented_backtick] = STATE(36),
    [sym_string] = STATE(36),
    [sym_indented_normal_string] = STATE(27),
    [sym_normal_string] = STATE(27),
    [sym_indented_raw_string] = STATE(27),
    [sym_raw_string] = STATE(27),
    [sym_comment] = STATE(13),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_arch] = ACTIONS(17),
    [anon_sym_num_cpus] = ACTIONS(17),
    [anon_sym_os] = ACTIONS(17),
    [anon_sym_os_family] = ACTIONS(17),
    [anon_sym_shell] = ACTIONS(19),
    [anon_sym_env_var] = ACTIONS(21),
    [anon_sym_env_var_or_default] = ACTIONS(23),
    [anon_sym_env] = ACTIONS(25),
    [anon_sym_is_dependency] = ACTIONS(17),
    [anon_sym_invocation_dir] = ACTIONS(17),
    [anon_sym_invocation_dir_native] = ACTIONS(17),
    [anon_sym_invocation_directory] = ACTIONS(17),
    [anon_sym_invocation_directory_native] = ACTIONS(17),
    [anon_sym_justfile] = ACTIONS(17),
    [anon_sym_justfile_dir] = ACTIONS(17),
    [anon_sym_justfile_directory] = ACTIONS(17),
    [anon_sym_source_dir] = ACTIONS(17),
    [anon_sym_source_directory] = ACTIONS(17),
    [anon_sym_source_file] = ACTIONS(17),
    [anon_sym_just_executable] = ACTIONS(17),
    [anon_sym_just_pid] = ACTIONS(17),
    [anon_sym_append] = ACTIONS(23),
    [anon_sym_prepend] = ACTIONS(23),
    [anon_sym_encode_uri_component] = ACTIONS(21),
    [anon_sym_quote] = ACTIONS(21),
    [anon_sym_replace] = ACTIONS(27),
    [anon_sym_replace_regex] = ACTIONS(27),
    [anon_sym_trim] = ACTIONS(21),
    [anon_sym_trim_end] = ACTIONS(21),
    [anon_sym_trim_end_match] = ACTIONS(23),
    [anon_sym_trim_end_matches] = ACTIONS(23),
    [anon_sym_trim_start] = ACTIONS(21),
    [anon_sym_trim_start_match] = ACTIONS(23),
    [anon_sym_trim_start_matches] = ACTIONS(23),
    [anon_sym_capitalize] = ACTIONS(21),
    [anon_sym_kebabcase] = ACTIONS(21),
    [anon_sym_lowercamelcase] = ACTIONS(21),
    [anon_sym_lowercase] = ACTIONS(21),
    [anon_sym_shoutykebabcase] = ACTIONS(21),
    [anon_sym_shoutysnakecase] = ACTIONS(21),
    [anon_sym_snakecase] = ACTIONS(21),
    [anon_sym_titlecase] = ACTIONS(21),
    [anon_sym_uppercamelcase] = ACTIONS(21),
    [anon_sym_uppercase] = ACTIONS(21),
    [anon_sym_absolute_path] = ACTIONS(21),
    [anon_sym_canonicalize] = ACTIONS(21),
    [anon_sym_extension] = ACTIONS(21),
    [anon_sym_file_name] = ACTIONS(21),
    [anon_sym_file_stem] = ACTIONS(21),
    [anon_sym_parent_directory] = ACTIONS(21),
    [anon_sym_without_extension] = ACTIONS(21),
    [anon_sym_clean] = ACTIONS(21),
    [anon_sym_join] = ACTIONS(19),
    [anon_sym_BQUOTE] = ACTIONS(31),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(33),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(35),
    [anon_sym_DQUOTE] = ACTIONS(37),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(39),
    [anon_sym_SQUOTE] = ACTIONS(41),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [14] = {
    [sym_expression] = STATE(105),
    [sym_value] = STATE(35),
    [sym_builtin_function_call] = STATE(36),
    [sym_function_call] = STATE(36),
    [sym_backtick] = STATE(36),
    [sym_indented_backtick] = STATE(36),
    [sym_string] = STATE(36),
    [sym_indented_normal_string] = STATE(27),
    [sym_normal_string] = STATE(27),
    [sym_indented_raw_string] = STATE(27),
    [sym_raw_string] = STATE(27),
    [sym_comment] = STATE(14),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_arch] = ACTIONS(17),
    [anon_sym_num_cpus] = ACTIONS(17),
    [anon_sym_os] = ACTIONS(17),
    [anon_sym_os_family] = ACTIONS(17),
    [anon_sym_shell] = ACTIONS(19),
    [anon_sym_env_var] = ACTIONS(21),
    [anon_sym_env_var_or_default] = ACTIONS(23),
    [anon_sym_env] = ACTIONS(25),
    [anon_sym_is_dependency] = ACTIONS(17),
    [anon_sym_invocation_dir] = ACTIONS(17),
    [anon_sym_invocation_dir_native] = ACTIONS(17),
    [anon_sym_invocation_directory] = ACTIONS(17),
    [anon_sym_invocation_directory_native] = ACTIONS(17),
    [anon_sym_justfile] = ACTIONS(17),
    [anon_sym_justfile_dir] = ACTIONS(17),
    [anon_sym_justfile_directory] = ACTIONS(17),
    [anon_sym_source_dir] = ACTIONS(17),
    [anon_sym_source_directory] = ACTIONS(17),
    [anon_sym_source_file] = ACTIONS(17),
    [anon_sym_just_executable] = ACTIONS(17),
    [anon_sym_just_pid] = ACTIONS(17),
    [anon_sym_append] = ACTIONS(23),
    [anon_sym_prepend] = ACTIONS(23),
    [anon_sym_encode_uri_component] = ACTIONS(21),
    [anon_sym_quote] = ACTIONS(21),
    [anon_sym_replace] = ACTIONS(27),
    [anon_sym_replace_regex] = ACTIONS(27),
    [anon_sym_trim] = ACTIONS(21),
    [anon_sym_trim_end] = ACTIONS(21),
    [anon_sym_trim_end_match] = ACTIONS(23),
    [anon_sym_trim_end_matches] = ACTIONS(23),
    [anon_sym_trim_start] = ACTIONS(21),
    [anon_sym_trim_start_match] = ACTIONS(23),
    [anon_sym_trim_start_matches] = ACTIONS(23),
    [anon_sym_capitalize] = ACTIONS(21),
    [anon_sym_kebabcase] = ACTIONS(21),
    [anon_sym_lowercamelcase] = ACTIONS(21),
    [anon_sym_lowercase] = ACTIONS(21),
    [anon_sym_shoutykebabcase] = ACTIONS(21),
    [anon_sym_shoutysnakecase] = ACTIONS(21),
    [anon_sym_snakecase] = ACTIONS(21),
    [anon_sym_titlecase] = ACTIONS(21),
    [anon_sym_uppercamelcase] = ACTIONS(21),
    [anon_sym_uppercase] = ACTIONS(21),
    [anon_sym_absolute_path] = ACTIONS(21),
    [anon_sym_canonicalize] = ACTIONS(21),
    [anon_sym_extension] = ACTIONS(21),
    [anon_sym_file_name] = ACTIONS(21),
    [anon_sym_file_stem] = ACTIONS(21),
    [anon_sym_parent_directory] = ACTIONS(21),
    [anon_sym_without_extension] = ACTIONS(21),
    [anon_sym_clean] = ACTIONS(21),
    [anon_sym_join] = ACTIONS(19),
    [anon_sym_BQUOTE] = ACTIONS(31),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(33),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(35),
    [anon_sym_DQUOTE] = ACTIONS(37),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(39),
    [anon_sym_SQUOTE] = ACTIONS(41),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [15] = {
    [sym_expression] = STATE(101),
    [sym_value] = STATE(35),
    [sym_builtin_function_call] = STATE(36),
    [sym_function_call] = STATE(36),
    [sym_backtick] = STATE(36),
    [sym_indented_backtick] = STATE(36),
    [sym_string] = STATE(36),
    [sym_indented_normal_string] = STATE(27),
    [sym_normal_string] = STATE(27),
    [sym_indented_raw_string] = STATE(27),
    [sym_raw_string] = STATE(27),
    [sym_comment] = STATE(15),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_arch] = ACTIONS(17),
    [anon_sym_num_cpus] = ACTIONS(17),
    [anon_sym_os] = ACTIONS(17),
    [anon_sym_os_family] = ACTIONS(17),
    [anon_sym_shell] = ACTIONS(19),
    [anon_sym_env_var] = ACTIONS(21),
    [anon_sym_env_var_or_default] = ACTIONS(23),
    [anon_sym_env] = ACTIONS(25),
    [anon_sym_is_dependency] = ACTIONS(17),
    [anon_sym_invocation_dir] = ACTIONS(17),
    [anon_sym_invocation_dir_native] = ACTIONS(17),
    [anon_sym_invocation_directory] = ACTIONS(17),
    [anon_sym_invocation_directory_native] = ACTIONS(17),
    [anon_sym_justfile] = ACTIONS(17),
    [anon_sym_justfile_dir] = ACTIONS(17),
    [anon_sym_justfile_directory] = ACTIONS(17),
    [anon_sym_source_dir] = ACTIONS(17),
    [anon_sym_source_directory] = ACTIONS(17),
    [anon_sym_source_file] = ACTIONS(17),
    [anon_sym_just_executable] = ACTIONS(17),
    [anon_sym_just_pid] = ACTIONS(17),
    [anon_sym_append] = ACTIONS(23),
    [anon_sym_prepend] = ACTIONS(23),
    [anon_sym_encode_uri_component] = ACTIONS(21),
    [anon_sym_quote] = ACTIONS(21),
    [anon_sym_replace] = ACTIONS(27),
    [anon_sym_replace_regex] = ACTIONS(27),
    [anon_sym_trim] = ACTIONS(21),
    [anon_sym_trim_end] = ACTIONS(21),
    [anon_sym_trim_end_match] = ACTIONS(23),
    [anon_sym_trim_end_matches] = ACTIONS(23),
    [anon_sym_trim_start] = ACTIONS(21),
    [anon_sym_trim_start_match] = ACTIONS(23),
    [anon_sym_trim_start_matches] = ACTIONS(23),
    [anon_sym_capitalize] = ACTIONS(21),
    [anon_sym_kebabcase] = ACTIONS(21),
    [anon_sym_lowercamelcase] = ACTIONS(21),
    [anon_sym_lowercase] = ACTIONS(21),
    [anon_sym_shoutykebabcase] = ACTIONS(21),
    [anon_sym_shoutysnakecase] = ACTIONS(21),
    [anon_sym_snakecase] = ACTIONS(21),
    [anon_sym_titlecase] = ACTIONS(21),
    [anon_sym_uppercamelcase] = ACTIONS(21),
    [anon_sym_uppercase] = ACTIONS(21),
    [anon_sym_absolute_path] = ACTIONS(21),
    [anon_sym_canonicalize] = ACTIONS(21),
    [anon_sym_extension] = ACTIONS(21),
    [anon_sym_file_name] = ACTIONS(21),
    [anon_sym_file_stem] = ACTIONS(21),
    [anon_sym_parent_directory] = ACTIONS(21),
    [anon_sym_without_extension] = ACTIONS(21),
    [anon_sym_clean] = ACTIONS(21),
    [anon_sym_join] = ACTIONS(19),
    [anon_sym_BQUOTE] = ACTIONS(31),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(33),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(35),
    [anon_sym_DQUOTE] = ACTIONS(37),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(39),
    [anon_sym_SQUOTE] = ACTIONS(41),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [16] = {
    [sym_expression] = STATE(100),
    [sym_value] = STATE(35),
    [sym_builtin_function_call] = STATE(36),
    [sym_function_call] = STATE(36),
    [sym_backtick] = STATE(36),
    [sym_indented_backtick] = STATE(36),
    [sym_string] = STATE(36),
    [sym_indented_normal_string] = STATE(27),
    [sym_normal_string] = STATE(27),
    [sym_indented_raw_string] = STATE(27),
    [sym_raw_string] = STATE(27),
    [sym_comment] = STATE(16),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_arch] = ACTIONS(17),
    [anon_sym_num_cpus] = ACTIONS(17),
    [anon_sym_os] = ACTIONS(17),
    [anon_sym_os_family] = ACTIONS(17),
    [anon_sym_shell] = ACTIONS(19),
    [anon_sym_env_var] = ACTIONS(21),
    [anon_sym_env_var_or_default] = ACTIONS(23),
    [anon_sym_env] = ACTIONS(25),
    [anon_sym_is_dependency] = ACTIONS(17),
    [anon_sym_invocation_dir] = ACTIONS(17),
    [anon_sym_invocation_dir_native] = ACTIONS(17),
    [anon_sym_invocation_directory] = ACTIONS(17),
    [anon_sym_invocation_directory_native] = ACTIONS(17),
    [anon_sym_justfile] = ACTIONS(17),
    [anon_sym_justfile_dir] = ACTIONS(17),
    [anon_sym_justfile_directory] = ACTIONS(17),
    [anon_sym_source_dir] = ACTIONS(17),
    [anon_sym_source_directory] = ACTIONS(17),
    [anon_sym_source_file] = ACTIONS(17),
    [anon_sym_just_executable] = ACTIONS(17),
    [anon_sym_just_pid] = ACTIONS(17),
    [anon_sym_append] = ACTIONS(23),
    [anon_sym_prepend] = ACTIONS(23),
    [anon_sym_encode_uri_component] = ACTIONS(21),
    [anon_sym_quote] = ACTIONS(21),
    [anon_sym_replace] = ACTIONS(27),
    [anon_sym_replace_regex] = ACTIONS(27),
    [anon_sym_trim] = ACTIONS(21),
    [anon_sym_trim_end] = ACTIONS(21),
    [anon_sym_trim_end_match] = ACTIONS(23),
    [anon_sym_trim_end_matches] = ACTIONS(23),
    [anon_sym_trim_start] = ACTIONS(21),
    [anon_sym_trim_start_match] = ACTIONS(23),
    [anon_sym_trim_start_matches] = ACTIONS(23),
    [anon_sym_capitalize] = ACTIONS(21),
    [anon_sym_kebabcase] = ACTIONS(21),
    [anon_sym_lowercamelcase] = ACTIONS(21),
    [anon_sym_lowercase] = ACTIONS(21),
    [anon_sym_shoutykebabcase] = ACTIONS(21),
    [anon_sym_shoutysnakecase] = ACTIONS(21),
    [anon_sym_snakecase] = ACTIONS(21),
    [anon_sym_titlecase] = ACTIONS(21),
    [anon_sym_uppercamelcase] = ACTIONS(21),
    [anon_sym_uppercase] = ACTIONS(21),
    [anon_sym_absolute_path] = ACTIONS(21),
    [anon_sym_canonicalize] = ACTIONS(21),
    [anon_sym_extension] = ACTIONS(21),
    [anon_sym_file_name] = ACTIONS(21),
    [anon_sym_file_stem] = ACTIONS(21),
    [anon_sym_parent_directory] = ACTIONS(21),
    [anon_sym_without_extension] = ACTIONS(21),
    [anon_sym_clean] = ACTIONS(21),
    [anon_sym_join] = ACTIONS(19),
    [anon_sym_BQUOTE] = ACTIONS(31),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(33),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(35),
    [anon_sym_DQUOTE] = ACTIONS(37),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(39),
    [anon_sym_SQUOTE] = ACTIONS(41),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [17] = {
    [sym_expression] = STATE(118),
    [sym_value] = STATE(35),
    [sym_builtin_function_call] = STATE(36),
    [sym_function_call] = STATE(36),
    [sym_backtick] = STATE(36),
    [sym_indented_backtick] = STATE(36),
    [sym_string] = STATE(36),
    [sym_indented_normal_string] = STATE(27),
    [sym_normal_string] = STATE(27),
    [sym_indented_raw_string] = STATE(27),
    [sym_raw_string] = STATE(27),
    [sym_comment] = STATE(17),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_arch] = ACTIONS(17),
    [anon_sym_num_cpus] = ACTIONS(17),
    [anon_sym_os] = ACTIONS(17),
    [anon_sym_os_family] = ACTIONS(17),
    [anon_sym_shell] = ACTIONS(19),
    [anon_sym_env_var] = ACTIONS(21),
    [anon_sym_env_var_or_default] = ACTIONS(23),
    [anon_sym_env] = ACTIONS(25),
    [anon_sym_is_dependency] = ACTIONS(17),
    [anon_sym_invocation_dir] = ACTIONS(17),
    [anon_sym_invocation_dir_native] = ACTIONS(17),
    [anon_sym_invocation_directory] = ACTIONS(17),
    [anon_sym_invocation_directory_native] = ACTIONS(17),
    [anon_sym_justfile] = ACTIONS(17),
    [anon_sym_justfile_dir] = ACTIONS(17),
    [anon_sym_justfile_directory] = ACTIONS(17),
    [anon_sym_source_dir] = ACTIONS(17),
    [anon_sym_source_directory] = ACTIONS(17),
    [anon_sym_source_file] = ACTIONS(17),
    [anon_sym_just_executable] = ACTIONS(17),
    [anon_sym_just_pid] = ACTIONS(17),
    [anon_sym_append] = ACTIONS(23),
    [anon_sym_prepend] = ACTIONS(23),
    [anon_sym_encode_uri_component] = ACTIONS(21),
    [anon_sym_quote] = ACTIONS(21),
    [anon_sym_replace] = ACTIONS(27),
    [anon_sym_replace_regex] = ACTIONS(27),
    [anon_sym_trim] = ACTIONS(21),
    [anon_sym_trim_end] = ACTIONS(21),
    [anon_sym_trim_end_match] = ACTIONS(23),
    [anon_sym_trim_end_matches] = ACTIONS(23),
    [anon_sym_trim_start] = ACTIONS(21),
    [anon_sym_trim_start_match] = ACTIONS(23),
    [anon_sym_trim_start_matches] = ACTIONS(23),
    [anon_sym_capitalize] = ACTIONS(21),
    [anon_sym_kebabcase] = ACTIONS(21),
    [anon_sym_lowercamelcase] = ACTIONS(21),
    [anon_sym_lowercase] = ACTIONS(21),
    [anon_sym_shoutykebabcase] = ACTIONS(21),
    [anon_sym_shoutysnakecase] = ACTIONS(21),
    [anon_sym_snakecase] = ACTIONS(21),
    [anon_sym_titlecase] = ACTIONS(21),
    [anon_sym_uppercamelcase] = ACTIONS(21),
    [anon_sym_uppercase] = ACTIONS(21),
    [anon_sym_absolute_path] = ACTIONS(21),
    [anon_sym_canonicalize] = ACTIONS(21),
    [anon_sym_extension] = ACTIONS(21),
    [anon_sym_file_name] = ACTIONS(21),
    [anon_sym_file_stem] = ACTIONS(21),
    [anon_sym_parent_directory] = ACTIONS(21),
    [anon_sym_without_extension] = ACTIONS(21),
    [anon_sym_clean] = ACTIONS(21),
    [anon_sym_join] = ACTIONS(19),
    [anon_sym_BQUOTE] = ACTIONS(31),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(33),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(35),
    [anon_sym_DQUOTE] = ACTIONS(37),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(39),
    [anon_sym_SQUOTE] = ACTIONS(41),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [18] = {
    [sym_string] = STATE(55),
    [sym_indented_normal_string] = STATE(27),
    [sym_normal_string] = STATE(27),
    [sym_indented_raw_string] = STATE(27),
    [sym_raw_string] = STATE(27),
    [sym_comment] = STATE(18),
    [ts_builtin_sym_end] = ACTIONS(109),
    [sym_identifier] = ACTIONS(111),
    [anon_sym_alias] = ACTIONS(111),
    [aux_sym_import_token1] = ACTIONS(111),
    [aux_sym_mod_token1] = ACTIONS(111),
    [anon_sym_LPAREN] = ACTIONS(109),
    [anon_sym_arch] = ACTIONS(111),
    [anon_sym_num_cpus] = ACTIONS(111),
    [anon_sym_os] = ACTIONS(111),
    [anon_sym_os_family] = ACTIONS(111),
    [anon_sym_shell] = ACTIONS(111),
    [anon_sym_env_var] = ACTIONS(111),
    [anon_sym_env_var_or_default] = ACTIONS(111),
    [anon_sym_env] = ACTIONS(111),
    [anon_sym_is_dependency] = ACTIONS(111),
    [anon_sym_invocation_dir] = ACTIONS(111),
    [anon_sym_invocation_dir_native] = ACTIONS(111),
    [anon_sym_invocation_directory] = ACTIONS(111),
    [anon_sym_invocation_directory_native] = ACTIONS(111),
    [anon_sym_justfile] = ACTIONS(111),
    [anon_sym_justfile_dir] = ACTIONS(111),
    [anon_sym_justfile_directory] = ACTIONS(111),
    [anon_sym_source_dir] = ACTIONS(111),
    [anon_sym_source_directory] = ACTIONS(111),
    [anon_sym_source_file] = ACTIONS(111),
    [anon_sym_just_executable] = ACTIONS(111),
    [anon_sym_just_pid] = ACTIONS(111),
    [anon_sym_append] = ACTIONS(111),
    [anon_sym_prepend] = ACTIONS(111),
    [anon_sym_encode_uri_component] = ACTIONS(111),
    [anon_sym_quote] = ACTIONS(111),
    [anon_sym_replace] = ACTIONS(111),
    [anon_sym_replace_regex] = ACTIONS(111),
    [anon_sym_trim] = ACTIONS(111),
    [anon_sym_trim_end] = ACTIONS(111),
    [anon_sym_trim_end_match] = ACTIONS(111),
    [anon_sym_trim_end_matches] = ACTIONS(111),
    [anon_sym_trim_start] = ACTIONS(111),
    [anon_sym_trim_start_match] = ACTIONS(111),
    [anon_sym_trim_start_matches] = ACTIONS(111),
    [anon_sym_capitalize] = ACTIONS(111),
    [anon_sym_kebabcase] = ACTIONS(111),
    [anon_sym_lowercamelcase] = ACTIONS(111),
    [anon_sym_lowercase] = ACTIONS(111),
    [anon_sym_shoutykebabcase] = ACTIONS(111),
    [anon_sym_shoutysnakecase] = ACTIONS(111),
    [anon_sym_snakecase] = ACTIONS(111),
    [anon_sym_titlecase] = ACTIONS(111),
    [anon_sym_uppercamelcase] = ACTIONS(111),
    [anon_sym_uppercase] = ACTIONS(111),
    [anon_sym_absolute_path] = ACTIONS(111),
    [anon_sym_canonicalize] = ACTIONS(111),
    [anon_sym_extension] = ACTIONS(111),
    [anon_sym_file_name] = ACTIONS(111),
    [anon_sym_file_stem] = ACTIONS(111),
    [anon_sym_parent_directory] = ACTIONS(111),
    [anon_sym_without_extension] = ACTIONS(111),
    [anon_sym_clean] = ACTIONS(111),
    [anon_sym_join] = ACTIONS(111),
    [anon_sym_set] = ACTIONS(111),
    [anon_sym_BQUOTE] = ACTIONS(111),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(109),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(35),
    [anon_sym_DQUOTE] = ACTIONS(37),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(39),
    [anon_sym_SQUOTE] = ACTIONS(41),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [19] = {
    [sym__setting_boolean] = STATE(47),
    [sym__setting_string] = STATE(47),
    [sym__setting_list] = STATE(47),
    [sym_comment] = STATE(19),
    [ts_builtin_sym_end] = ACTIONS(113),
    [sym_identifier] = ACTIONS(115),
    [anon_sym_alias] = ACTIONS(115),
    [anon_sym_COLON_EQ] = ACTIONS(117),
    [aux_sym_import_token1] = ACTIONS(115),
    [aux_sym_mod_token1] = ACTIONS(115),
    [anon_sym_LPAREN] = ACTIONS(113),
    [anon_sym_arch] = ACTIONS(115),
    [anon_sym_num_cpus] = ACTIONS(115),
    [anon_sym_os] = ACTIONS(115),
    [anon_sym_os_family] = ACTIONS(115),
    [anon_sym_shell] = ACTIONS(115),
    [anon_sym_env_var] = ACTIONS(115),
    [anon_sym_env_var_or_default] = ACTIONS(115),
    [anon_sym_env] = ACTIONS(115),
    [anon_sym_is_dependency] = ACTIONS(115),
    [anon_sym_invocation_dir] = ACTIONS(115),
    [anon_sym_invocation_dir_native] = ACTIONS(115),
    [anon_sym_invocation_directory] = ACTIONS(115),
    [anon_sym_invocation_directory_native] = ACTIONS(115),
    [anon_sym_justfile] = ACTIONS(115),
    [anon_sym_justfile_dir] = ACTIONS(115),
    [anon_sym_justfile_directory] = ACTIONS(115),
    [anon_sym_source_dir] = ACTIONS(115),
    [anon_sym_source_directory] = ACTIONS(115),
    [anon_sym_source_file] = ACTIONS(115),
    [anon_sym_just_executable] = ACTIONS(115),
    [anon_sym_just_pid] = ACTIONS(115),
    [anon_sym_append] = ACTIONS(115),
    [anon_sym_prepend] = ACTIONS(115),
    [anon_sym_encode_uri_component] = ACTIONS(115),
    [anon_sym_quote] = ACTIONS(115),
    [anon_sym_replace] = ACTIONS(115),
    [anon_sym_replace_regex] = ACTIONS(115),
    [anon_sym_trim] = ACTIONS(115),
    [anon_sym_trim_end] = ACTIONS(115),
    [anon_sym_trim_end_match] = ACTIONS(115),
    [anon_sym_trim_end_matches] = ACTIONS(115),
    [anon_sym_trim_start] = ACTIONS(115),
    [anon_sym_trim_start_match] = ACTIONS(115),
    [anon_sym_trim_start_matches] = ACTIONS(115),
    [anon_sym_capitalize] = ACTIONS(115),
    [anon_sym_kebabcase] = ACTIONS(115),
    [anon_sym_lowercamelcase] = ACTIONS(115),
    [anon_sym_lowercase] = ACTIONS(115),
    [anon_sym_shoutykebabcase] = ACTIONS(115),
    [anon_sym_shoutysnakecase] = ACTIONS(115),
    [anon_sym_snakecase] = ACTIONS(115),
    [anon_sym_titlecase] = ACTIONS(115),
    [anon_sym_uppercamelcase] = ACTIONS(115),
    [anon_sym_uppercase] = ACTIONS(115),
    [anon_sym_absolute_path] = ACTIONS(115),
    [anon_sym_canonicalize] = ACTIONS(115),
    [anon_sym_extension] = ACTIONS(115),
    [anon_sym_file_name] = ACTIONS(115),
    [anon_sym_file_stem] = ACTIONS(115),
    [anon_sym_parent_directory] = ACTIONS(115),
    [anon_sym_without_extension] = ACTIONS(115),
    [anon_sym_clean] = ACTIONS(115),
    [anon_sym_join] = ACTIONS(115),
    [anon_sym_set] = ACTIONS(115),
    [anon_sym_BQUOTE] = ACTIONS(115),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(113),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(113),
    [anon_sym_DQUOTE] = ACTIONS(115),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(113),
    [anon_sym_SQUOTE] = ACTIONS(115),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [20] = {
    [sym_comment] = STATE(20),
    [ts_builtin_sym_end] = ACTIONS(119),
    [sym_identifier] = ACTIONS(121),
    [anon_sym_alias] = ACTIONS(121),
    [aux_sym_import_token1] = ACTIONS(121),
    [aux_sym_mod_token1] = ACTIONS(121),
    [anon_sym_LPAREN] = ACTIONS(119),
    [anon_sym_RPAREN] = ACTIONS(119),
    [anon_sym_arch] = ACTIONS(121),
    [anon_sym_num_cpus] = ACTIONS(121),
    [anon_sym_os] = ACTIONS(121),
    [anon_sym_os_family] = ACTIONS(121),
    [anon_sym_shell] = ACTIONS(121),
    [anon_sym_env_var] = ACTIONS(121),
    [anon_sym_env_var_or_default] = ACTIONS(121),
    [anon_sym_env] = ACTIONS(121),
    [anon_sym_is_dependency] = ACTIONS(121),
    [anon_sym_invocation_dir] = ACTIONS(121),
    [anon_sym_invocation_dir_native] = ACTIONS(121),
    [anon_sym_invocation_directory] = ACTIONS(121),
    [anon_sym_invocation_directory_native] = ACTIONS(121),
    [anon_sym_justfile] = ACTIONS(121),
    [anon_sym_justfile_dir] = ACTIONS(121),
    [anon_sym_justfile_directory] = ACTIONS(121),
    [anon_sym_source_dir] = ACTIONS(121),
    [anon_sym_source_directory] = ACTIONS(121),
    [anon_sym_source_file] = ACTIONS(121),
    [anon_sym_just_executable] = ACTIONS(121),
    [anon_sym_just_pid] = ACTIONS(121),
    [anon_sym_append] = ACTIONS(121),
    [anon_sym_prepend] = ACTIONS(121),
    [anon_sym_encode_uri_component] = ACTIONS(121),
    [anon_sym_quote] = ACTIONS(121),
    [anon_sym_replace] = ACTIONS(121),
    [anon_sym_replace_regex] = ACTIONS(121),
    [anon_sym_trim] = ACTIONS(121),
    [anon_sym_trim_end] = ACTIONS(121),
    [anon_sym_trim_end_match] = ACTIONS(121),
    [anon_sym_trim_end_matches] = ACTIONS(121),
    [anon_sym_trim_start] = ACTIONS(121),
    [anon_sym_trim_start_match] = ACTIONS(121),
    [anon_sym_trim_start_matches] = ACTIONS(121),
    [anon_sym_capitalize] = ACTIONS(121),
    [anon_sym_kebabcase] = ACTIONS(121),
    [anon_sym_lowercamelcase] = ACTIONS(121),
    [anon_sym_lowercase] = ACTIONS(121),
    [anon_sym_shoutykebabcase] = ACTIONS(121),
    [anon_sym_shoutysnakecase] = ACTIONS(121),
    [anon_sym_snakecase] = ACTIONS(121),
    [anon_sym_titlecase] = ACTIONS(121),
    [anon_sym_uppercamelcase] = ACTIONS(121),
    [anon_sym_uppercase] = ACTIONS(121),
    [anon_sym_absolute_path] = ACTIONS(121),
    [anon_sym_canonicalize] = ACTIONS(121),
    [anon_sym_extension] = ACTIONS(121),
    [anon_sym_file_name] = ACTIONS(121),
    [anon_sym_file_stem] = ACTIONS(121),
    [anon_sym_parent_directory] = ACTIONS(121),
    [anon_sym_without_extension] = ACTIONS(121),
    [anon_sym_clean] = ACTIONS(121),
    [anon_sym_join] = ACTIONS(121),
    [anon_sym_COMMA] = ACTIONS(119),
    [anon_sym_set] = ACTIONS(121),
    [anon_sym_RBRACK] = ACTIONS(119),
    [anon_sym_BQUOTE] = ACTIONS(121),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(119),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(119),
    [anon_sym_DQUOTE] = ACTIONS(121),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(119),
    [anon_sym_SQUOTE] = ACTIONS(121),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [21] = {
    [sym_comment] = STATE(21),
    [ts_builtin_sym_end] = ACTIONS(123),
    [sym_identifier] = ACTIONS(125),
    [anon_sym_alias] = ACTIONS(125),
    [aux_sym_import_token1] = ACTIONS(125),
    [aux_sym_mod_token1] = ACTIONS(125),
    [anon_sym_LPAREN] = ACTIONS(123),
    [anon_sym_RPAREN] = ACTIONS(123),
    [anon_sym_arch] = ACTIONS(125),
    [anon_sym_num_cpus] = ACTIONS(125),
    [anon_sym_os] = ACTIONS(125),
    [anon_sym_os_family] = ACTIONS(125),
    [anon_sym_shell] = ACTIONS(125),
    [anon_sym_env_var] = ACTIONS(125),
    [anon_sym_env_var_or_default] = ACTIONS(125),
    [anon_sym_env] = ACTIONS(125),
    [anon_sym_is_dependency] = ACTIONS(125),
    [anon_sym_invocation_dir] = ACTIONS(125),
    [anon_sym_invocation_dir_native] = ACTIONS(125),
    [anon_sym_invocation_directory] = ACTIONS(125),
    [anon_sym_invocation_directory_native] = ACTIONS(125),
    [anon_sym_justfile] = ACTIONS(125),
    [anon_sym_justfile_dir] = ACTIONS(125),
    [anon_sym_justfile_directory] = ACTIONS(125),
    [anon_sym_source_dir] = ACTIONS(125),
    [anon_sym_source_directory] = ACTIONS(125),
    [anon_sym_source_file] = ACTIONS(125),
    [anon_sym_just_executable] = ACTIONS(125),
    [anon_sym_just_pid] = ACTIONS(125),
    [anon_sym_append] = ACTIONS(125),
    [anon_sym_prepend] = ACTIONS(125),
    [anon_sym_encode_uri_component] = ACTIONS(125),
    [anon_sym_quote] = ACTIONS(125),
    [anon_sym_replace] = ACTIONS(125),
    [anon_sym_replace_regex] = ACTIONS(125),
    [anon_sym_trim] = ACTIONS(125),
    [anon_sym_trim_end] = ACTIONS(125),
    [anon_sym_trim_end_match] = ACTIONS(125),
    [anon_sym_trim_end_matches] = ACTIONS(125),
    [anon_sym_trim_start] = ACTIONS(125),
    [anon_sym_trim_start_match] = ACTIONS(125),
    [anon_sym_trim_start_matches] = ACTIONS(125),
    [anon_sym_capitalize] = ACTIONS(125),
    [anon_sym_kebabcase] = ACTIONS(125),
    [anon_sym_lowercamelcase] = ACTIONS(125),
    [anon_sym_lowercase] = ACTIONS(125),
    [anon_sym_shoutykebabcase] = ACTIONS(125),
    [anon_sym_shoutysnakecase] = ACTIONS(125),
    [anon_sym_snakecase] = ACTIONS(125),
    [anon_sym_titlecase] = ACTIONS(125),
    [anon_sym_uppercamelcase] = ACTIONS(125),
    [anon_sym_uppercase] = ACTIONS(125),
    [anon_sym_absolute_path] = ACTIONS(125),
    [anon_sym_canonicalize] = ACTIONS(125),
    [anon_sym_extension] = ACTIONS(125),
    [anon_sym_file_name] = ACTIONS(125),
    [anon_sym_file_stem] = ACTIONS(125),
    [anon_sym_parent_directory] = ACTIONS(125),
    [anon_sym_without_extension] = ACTIONS(125),
    [anon_sym_clean] = ACTIONS(125),
    [anon_sym_join] = ACTIONS(125),
    [anon_sym_COMMA] = ACTIONS(123),
    [anon_sym_set] = ACTIONS(125),
    [anon_sym_RBRACK] = ACTIONS(123),
    [anon_sym_BQUOTE] = ACTIONS(125),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(123),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(123),
    [anon_sym_DQUOTE] = ACTIONS(125),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(123),
    [anon_sym_SQUOTE] = ACTIONS(125),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [22] = {
    [sym_comment] = STATE(22),
    [ts_builtin_sym_end] = ACTIONS(127),
    [sym_identifier] = ACTIONS(129),
    [anon_sym_alias] = ACTIONS(129),
    [aux_sym_import_token1] = ACTIONS(129),
    [aux_sym_mod_token1] = ACTIONS(129),
    [anon_sym_LPAREN] = ACTIONS(127),
    [anon_sym_RPAREN] = ACTIONS(127),
    [anon_sym_arch] = ACTIONS(129),
    [anon_sym_num_cpus] = ACTIONS(129),
    [anon_sym_os] = ACTIONS(129),
    [anon_sym_os_family] = ACTIONS(129),
    [anon_sym_shell] = ACTIONS(129),
    [anon_sym_env_var] = ACTIONS(129),
    [anon_sym_env_var_or_default] = ACTIONS(129),
    [anon_sym_env] = ACTIONS(129),
    [anon_sym_is_dependency] = ACTIONS(129),
    [anon_sym_invocation_dir] = ACTIONS(129),
    [anon_sym_invocation_dir_native] = ACTIONS(129),
    [anon_sym_invocation_directory] = ACTIONS(129),
    [anon_sym_invocation_directory_native] = ACTIONS(129),
    [anon_sym_justfile] = ACTIONS(129),
    [anon_sym_justfile_dir] = ACTIONS(129),
    [anon_sym_justfile_directory] = ACTIONS(129),
    [anon_sym_source_dir] = ACTIONS(129),
    [anon_sym_source_directory] = ACTIONS(129),
    [anon_sym_source_file] = ACTIONS(129),
    [anon_sym_just_executable] = ACTIONS(129),
    [anon_sym_just_pid] = ACTIONS(129),
    [anon_sym_append] = ACTIONS(129),
    [anon_sym_prepend] = ACTIONS(129),
    [anon_sym_encode_uri_component] = ACTIONS(129),
    [anon_sym_quote] = ACTIONS(129),
    [anon_sym_replace] = ACTIONS(129),
    [anon_sym_replace_regex] = ACTIONS(129),
    [anon_sym_trim] = ACTIONS(129),
    [anon_sym_trim_end] = ACTIONS(129),
    [anon_sym_trim_end_match] = ACTIONS(129),
    [anon_sym_trim_end_matches] = ACTIONS(129),
    [anon_sym_trim_start] = ACTIONS(129),
    [anon_sym_trim_start_match] = ACTIONS(129),
    [anon_sym_trim_start_matches] = ACTIONS(129),
    [anon_sym_capitalize] = ACTIONS(129),
    [anon_sym_kebabcase] = ACTIONS(129),
    [anon_sym_lowercamelcase] = ACTIONS(129),
    [anon_sym_lowercase] = ACTIONS(129),
    [anon_sym_shoutykebabcase] = ACTIONS(129),
    [anon_sym_shoutysnakecase] = ACTIONS(129),
    [anon_sym_snakecase] = ACTIONS(129),
    [anon_sym_titlecase] = ACTIONS(129),
    [anon_sym_uppercamelcase] = ACTIONS(129),
    [anon_sym_uppercase] = ACTIONS(129),
    [anon_sym_absolute_path] = ACTIONS(129),
    [anon_sym_canonicalize] = ACTIONS(129),
    [anon_sym_extension] = ACTIONS(129),
    [anon_sym_file_name] = ACTIONS(129),
    [anon_sym_file_stem] = ACTIONS(129),
    [anon_sym_parent_directory] = ACTIONS(129),
    [anon_sym_without_extension] = ACTIONS(129),
    [anon_sym_clean] = ACTIONS(129),
    [anon_sym_join] = ACTIONS(129),
    [anon_sym_COMMA] = ACTIONS(127),
    [anon_sym_set] = ACTIONS(129),
    [anon_sym_RBRACK] = ACTIONS(127),
    [anon_sym_BQUOTE] = ACTIONS(129),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(127),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(127),
    [anon_sym_DQUOTE] = ACTIONS(129),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(127),
    [anon_sym_SQUOTE] = ACTIONS(129),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [23] = {
    [sym_comment] = STATE(23),
    [ts_builtin_sym_end] = ACTIONS(131),
    [sym_identifier] = ACTIONS(133),
    [anon_sym_alias] = ACTIONS(133),
    [aux_sym_import_token1] = ACTIONS(133),
    [aux_sym_mod_token1] = ACTIONS(133),
    [anon_sym_LPAREN] = ACTIONS(131),
    [anon_sym_RPAREN] = ACTIONS(131),
    [anon_sym_arch] = ACTIONS(133),
    [anon_sym_num_cpus] = ACTIONS(133),
    [anon_sym_os] = ACTIONS(133),
    [anon_sym_os_family] = ACTIONS(133),
    [anon_sym_shell] = ACTIONS(133),
    [anon_sym_env_var] = ACTIONS(133),
    [anon_sym_env_var_or_default] = ACTIONS(133),
    [anon_sym_env] = ACTIONS(133),
    [anon_sym_is_dependency] = ACTIONS(133),
    [anon_sym_invocation_dir] = ACTIONS(133),
    [anon_sym_invocation_dir_native] = ACTIONS(133),
    [anon_sym_invocation_directory] = ACTIONS(133),
    [anon_sym_invocation_directory_native] = ACTIONS(133),
    [anon_sym_justfile] = ACTIONS(133),
    [anon_sym_justfile_dir] = ACTIONS(133),
    [anon_sym_justfile_directory] = ACTIONS(133),
    [anon_sym_source_dir] = ACTIONS(133),
    [anon_sym_source_directory] = ACTIONS(133),
    [anon_sym_source_file] = ACTIONS(133),
    [anon_sym_just_executable] = ACTIONS(133),
    [anon_sym_just_pid] = ACTIONS(133),
    [anon_sym_append] = ACTIONS(133),
    [anon_sym_prepend] = ACTIONS(133),
    [anon_sym_encode_uri_component] = ACTIONS(133),
    [anon_sym_quote] = ACTIONS(133),
    [anon_sym_replace] = ACTIONS(133),
    [anon_sym_replace_regex] = ACTIONS(133),
    [anon_sym_trim] = ACTIONS(133),
    [anon_sym_trim_end] = ACTIONS(133),
    [anon_sym_trim_end_match] = ACTIONS(133),
    [anon_sym_trim_end_matches] = ACTIONS(133),
    [anon_sym_trim_start] = ACTIONS(133),
    [anon_sym_trim_start_match] = ACTIONS(133),
    [anon_sym_trim_start_matches] = ACTIONS(133),
    [anon_sym_capitalize] = ACTIONS(133),
    [anon_sym_kebabcase] = ACTIONS(133),
    [anon_sym_lowercamelcase] = ACTIONS(133),
    [anon_sym_lowercase] = ACTIONS(133),
    [anon_sym_shoutykebabcase] = ACTIONS(133),
    [anon_sym_shoutysnakecase] = ACTIONS(133),
    [anon_sym_snakecase] = ACTIONS(133),
    [anon_sym_titlecase] = ACTIONS(133),
    [anon_sym_uppercamelcase] = ACTIONS(133),
    [anon_sym_uppercase] = ACTIONS(133),
    [anon_sym_absolute_path] = ACTIONS(133),
    [anon_sym_canonicalize] = ACTIONS(133),
    [anon_sym_extension] = ACTIONS(133),
    [anon_sym_file_name] = ACTIONS(133),
    [anon_sym_file_stem] = ACTIONS(133),
    [anon_sym_parent_directory] = ACTIONS(133),
    [anon_sym_without_extension] = ACTIONS(133),
    [anon_sym_clean] = ACTIONS(133),
    [anon_sym_join] = ACTIONS(133),
    [anon_sym_COMMA] = ACTIONS(131),
    [anon_sym_set] = ACTIONS(133),
    [anon_sym_RBRACK] = ACTIONS(131),
    [anon_sym_BQUOTE] = ACTIONS(133),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(131),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(131),
    [anon_sym_DQUOTE] = ACTIONS(133),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(131),
    [anon_sym_SQUOTE] = ACTIONS(133),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [24] = {
    [sym_comment] = STATE(24),
    [ts_builtin_sym_end] = ACTIONS(135),
    [sym_identifier] = ACTIONS(137),
    [anon_sym_alias] = ACTIONS(137),
    [aux_sym_import_token1] = ACTIONS(137),
    [aux_sym_mod_token1] = ACTIONS(137),
    [anon_sym_LPAREN] = ACTIONS(135),
    [anon_sym_RPAREN] = ACTIONS(135),
    [anon_sym_arch] = ACTIONS(137),
    [anon_sym_num_cpus] = ACTIONS(137),
    [anon_sym_os] = ACTIONS(137),
    [anon_sym_os_family] = ACTIONS(137),
    [anon_sym_shell] = ACTIONS(137),
    [anon_sym_env_var] = ACTIONS(137),
    [anon_sym_env_var_or_default] = ACTIONS(137),
    [anon_sym_env] = ACTIONS(137),
    [anon_sym_is_dependency] = ACTIONS(137),
    [anon_sym_invocation_dir] = ACTIONS(137),
    [anon_sym_invocation_dir_native] = ACTIONS(137),
    [anon_sym_invocation_directory] = ACTIONS(137),
    [anon_sym_invocation_directory_native] = ACTIONS(137),
    [anon_sym_justfile] = ACTIONS(137),
    [anon_sym_justfile_dir] = ACTIONS(137),
    [anon_sym_justfile_directory] = ACTIONS(137),
    [anon_sym_source_dir] = ACTIONS(137),
    [anon_sym_source_directory] = ACTIONS(137),
    [anon_sym_source_file] = ACTIONS(137),
    [anon_sym_just_executable] = ACTIONS(137),
    [anon_sym_just_pid] = ACTIONS(137),
    [anon_sym_append] = ACTIONS(137),
    [anon_sym_prepend] = ACTIONS(137),
    [anon_sym_encode_uri_component] = ACTIONS(137),
    [anon_sym_quote] = ACTIONS(137),
    [anon_sym_replace] = ACTIONS(137),
    [anon_sym_replace_regex] = ACTIONS(137),
    [anon_sym_trim] = ACTIONS(137),
    [anon_sym_trim_end] = ACTIONS(137),
    [anon_sym_trim_end_match] = ACTIONS(137),
    [anon_sym_trim_end_matches] = ACTIONS(137),
    [anon_sym_trim_start] = ACTIONS(137),
    [anon_sym_trim_start_match] = ACTIONS(137),
    [anon_sym_trim_start_matches] = ACTIONS(137),
    [anon_sym_capitalize] = ACTIONS(137),
    [anon_sym_kebabcase] = ACTIONS(137),
    [anon_sym_lowercamelcase] = ACTIONS(137),
    [anon_sym_lowercase] = ACTIONS(137),
    [anon_sym_shoutykebabcase] = ACTIONS(137),
    [anon_sym_shoutysnakecase] = ACTIONS(137),
    [anon_sym_snakecase] = ACTIONS(137),
    [anon_sym_titlecase] = ACTIONS(137),
    [anon_sym_uppercamelcase] = ACTIONS(137),
    [anon_sym_uppercase] = ACTIONS(137),
    [anon_sym_absolute_path] = ACTIONS(137),
    [anon_sym_canonicalize] = ACTIONS(137),
    [anon_sym_extension] = ACTIONS(137),
    [anon_sym_file_name] = ACTIONS(137),
    [anon_sym_file_stem] = ACTIONS(137),
    [anon_sym_parent_directory] = ACTIONS(137),
    [anon_sym_without_extension] = ACTIONS(137),
    [anon_sym_clean] = ACTIONS(137),
    [anon_sym_join] = ACTIONS(137),
    [anon_sym_COMMA] = ACTIONS(135),
    [anon_sym_set] = ACTIONS(137),
    [anon_sym_RBRACK] = ACTIONS(135),
    [anon_sym_BQUOTE] = ACTIONS(137),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(135),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(135),
    [anon_sym_DQUOTE] = ACTIONS(137),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(135),
    [anon_sym_SQUOTE] = ACTIONS(137),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [25] = {
    [sym_comment] = STATE(25),
    [ts_builtin_sym_end] = ACTIONS(139),
    [sym_identifier] = ACTIONS(141),
    [anon_sym_alias] = ACTIONS(141),
    [aux_sym_import_token1] = ACTIONS(141),
    [aux_sym_mod_token1] = ACTIONS(141),
    [anon_sym_LPAREN] = ACTIONS(139),
    [anon_sym_RPAREN] = ACTIONS(139),
    [anon_sym_arch] = ACTIONS(141),
    [anon_sym_num_cpus] = ACTIONS(141),
    [anon_sym_os] = ACTIONS(141),
    [anon_sym_os_family] = ACTIONS(141),
    [anon_sym_shell] = ACTIONS(141),
    [anon_sym_env_var] = ACTIONS(141),
    [anon_sym_env_var_or_default] = ACTIONS(141),
    [anon_sym_env] = ACTIONS(141),
    [anon_sym_is_dependency] = ACTIONS(141),
    [anon_sym_invocation_dir] = ACTIONS(141),
    [anon_sym_invocation_dir_native] = ACTIONS(141),
    [anon_sym_invocation_directory] = ACTIONS(141),
    [anon_sym_invocation_directory_native] = ACTIONS(141),
    [anon_sym_justfile] = ACTIONS(141),
    [anon_sym_justfile_dir] = ACTIONS(141),
    [anon_sym_justfile_directory] = ACTIONS(141),
    [anon_sym_source_dir] = ACTIONS(141),
    [anon_sym_source_directory] = ACTIONS(141),
    [anon_sym_source_file] = ACTIONS(141),
    [anon_sym_just_executable] = ACTIONS(141),
    [anon_sym_just_pid] = ACTIONS(141),
    [anon_sym_append] = ACTIONS(141),
    [anon_sym_prepend] = ACTIONS(141),
    [anon_sym_encode_uri_component] = ACTIONS(141),
    [anon_sym_quote] = ACTIONS(141),
    [anon_sym_replace] = ACTIONS(141),
    [anon_sym_replace_regex] = ACTIONS(141),
    [anon_sym_trim] = ACTIONS(141),
    [anon_sym_trim_end] = ACTIONS(141),
    [anon_sym_trim_end_match] = ACTIONS(141),
    [anon_sym_trim_end_matches] = ACTIONS(141),
    [anon_sym_trim_start] = ACTIONS(141),
    [anon_sym_trim_start_match] = ACTIONS(141),
    [anon_sym_trim_start_matches] = ACTIONS(141),
    [anon_sym_capitalize] = ACTIONS(141),
    [anon_sym_kebabcase] = ACTIONS(141),
    [anon_sym_lowercamelcase] = ACTIONS(141),
    [anon_sym_lowercase] = ACTIONS(141),
    [anon_sym_shoutykebabcase] = ACTIONS(141),
    [anon_sym_shoutysnakecase] = ACTIONS(141),
    [anon_sym_snakecase] = ACTIONS(141),
    [anon_sym_titlecase] = ACTIONS(141),
    [anon_sym_uppercamelcase] = ACTIONS(141),
    [anon_sym_uppercase] = ACTIONS(141),
    [anon_sym_absolute_path] = ACTIONS(141),
    [anon_sym_canonicalize] = ACTIONS(141),
    [anon_sym_extension] = ACTIONS(141),
    [anon_sym_file_name] = ACTIONS(141),
    [anon_sym_file_stem] = ACTIONS(141),
    [anon_sym_parent_directory] = ACTIONS(141),
    [anon_sym_without_extension] = ACTIONS(141),
    [anon_sym_clean] = ACTIONS(141),
    [anon_sym_join] = ACTIONS(141),
    [anon_sym_COMMA] = ACTIONS(139),
    [anon_sym_set] = ACTIONS(141),
    [anon_sym_RBRACK] = ACTIONS(139),
    [anon_sym_BQUOTE] = ACTIONS(141),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(139),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(139),
    [anon_sym_DQUOTE] = ACTIONS(141),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(139),
    [anon_sym_SQUOTE] = ACTIONS(141),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [26] = {
    [sym_comment] = STATE(26),
    [ts_builtin_sym_end] = ACTIONS(143),
    [sym_identifier] = ACTIONS(145),
    [anon_sym_alias] = ACTIONS(145),
    [aux_sym_import_token1] = ACTIONS(145),
    [aux_sym_mod_token1] = ACTIONS(145),
    [anon_sym_LPAREN] = ACTIONS(143),
    [anon_sym_RPAREN] = ACTIONS(143),
    [anon_sym_arch] = ACTIONS(145),
    [anon_sym_num_cpus] = ACTIONS(145),
    [anon_sym_os] = ACTIONS(145),
    [anon_sym_os_family] = ACTIONS(145),
    [anon_sym_shell] = ACTIONS(145),
    [anon_sym_env_var] = ACTIONS(145),
    [anon_sym_env_var_or_default] = ACTIONS(145),
    [anon_sym_env] = ACTIONS(145),
    [anon_sym_is_dependency] = ACTIONS(145),
    [anon_sym_invocation_dir] = ACTIONS(145),
    [anon_sym_invocation_dir_native] = ACTIONS(145),
    [anon_sym_invocation_directory] = ACTIONS(145),
    [anon_sym_invocation_directory_native] = ACTIONS(145),
    [anon_sym_justfile] = ACTIONS(145),
    [anon_sym_justfile_dir] = ACTIONS(145),
    [anon_sym_justfile_directory] = ACTIONS(145),
    [anon_sym_source_dir] = ACTIONS(145),
    [anon_sym_source_directory] = ACTIONS(145),
    [anon_sym_source_file] = ACTIONS(145),
    [anon_sym_just_executable] = ACTIONS(145),
    [anon_sym_just_pid] = ACTIONS(145),
    [anon_sym_append] = ACTIONS(145),
    [anon_sym_prepend] = ACTIONS(145),
    [anon_sym_encode_uri_component] = ACTIONS(145),
    [anon_sym_quote] = ACTIONS(145),
    [anon_sym_replace] = ACTIONS(145),
    [anon_sym_replace_regex] = ACTIONS(145),
    [anon_sym_trim] = ACTIONS(145),
    [anon_sym_trim_end] = ACTIONS(145),
    [anon_sym_trim_end_match] = ACTIONS(145),
    [anon_sym_trim_end_matches] = ACTIONS(145),
    [anon_sym_trim_start] = ACTIONS(145),
    [anon_sym_trim_start_match] = ACTIONS(145),
    [anon_sym_trim_start_matches] = ACTIONS(145),
    [anon_sym_capitalize] = ACTIONS(145),
    [anon_sym_kebabcase] = ACTIONS(145),
    [anon_sym_lowercamelcase] = ACTIONS(145),
    [anon_sym_lowercase] = ACTIONS(145),
    [anon_sym_shoutykebabcase] = ACTIONS(145),
    [anon_sym_shoutysnakecase] = ACTIONS(145),
    [anon_sym_snakecase] = ACTIONS(145),
    [anon_sym_titlecase] = ACTIONS(145),
    [anon_sym_uppercamelcase] = ACTIONS(145),
    [anon_sym_uppercase] = ACTIONS(145),
    [anon_sym_absolute_path] = ACTIONS(145),
    [anon_sym_canonicalize] = ACTIONS(145),
    [anon_sym_extension] = ACTIONS(145),
    [anon_sym_file_name] = ACTIONS(145),
    [anon_sym_file_stem] = ACTIONS(145),
    [anon_sym_parent_directory] = ACTIONS(145),
    [anon_sym_without_extension] = ACTIONS(145),
    [anon_sym_clean] = ACTIONS(145),
    [anon_sym_join] = ACTIONS(145),
    [anon_sym_COMMA] = ACTIONS(143),
    [anon_sym_set] = ACTIONS(145),
    [anon_sym_RBRACK] = ACTIONS(143),
    [anon_sym_BQUOTE] = ACTIONS(145),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(143),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(143),
    [anon_sym_DQUOTE] = ACTIONS(145),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(143),
    [anon_sym_SQUOTE] = ACTIONS(145),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [27] = {
    [sym_comment] = STATE(27),
    [ts_builtin_sym_end] = ACTIONS(147),
    [sym_identifier] = ACTIONS(149),
    [anon_sym_alias] = ACTIONS(149),
    [aux_sym_import_token1] = ACTIONS(149),
    [aux_sym_mod_token1] = ACTIONS(149),
    [anon_sym_LPAREN] = ACTIONS(147),
    [anon_sym_RPAREN] = ACTIONS(147),
    [anon_sym_arch] = ACTIONS(149),
    [anon_sym_num_cpus] = ACTIONS(149),
    [anon_sym_os] = ACTIONS(149),
    [anon_sym_os_family] = ACTIONS(149),
    [anon_sym_shell] = ACTIONS(149),
    [anon_sym_env_var] = ACTIONS(149),
    [anon_sym_env_var_or_default] = ACTIONS(149),
    [anon_sym_env] = ACTIONS(149),
    [anon_sym_is_dependency] = ACTIONS(149),
    [anon_sym_invocation_dir] = ACTIONS(149),
    [anon_sym_invocation_dir_native] = ACTIONS(149),
    [anon_sym_invocation_directory] = ACTIONS(149),
    [anon_sym_invocation_directory_native] = ACTIONS(149),
    [anon_sym_justfile] = ACTIONS(149),
    [anon_sym_justfile_dir] = ACTIONS(149),
    [anon_sym_justfile_directory] = ACTIONS(149),
    [anon_sym_source_dir] = ACTIONS(149),
    [anon_sym_source_directory] = ACTIONS(149),
    [anon_sym_source_file] = ACTIONS(149),
    [anon_sym_just_executable] = ACTIONS(149),
    [anon_sym_just_pid] = ACTIONS(149),
    [anon_sym_append] = ACTIONS(149),
    [anon_sym_prepend] = ACTIONS(149),
    [anon_sym_encode_uri_component] = ACTIONS(149),
    [anon_sym_quote] = ACTIONS(149),
    [anon_sym_replace] = ACTIONS(149),
    [anon_sym_replace_regex] = ACTIONS(149),
    [anon_sym_trim] = ACTIONS(149),
    [anon_sym_trim_end] = ACTIONS(149),
    [anon_sym_trim_end_match] = ACTIONS(149),
    [anon_sym_trim_end_matches] = ACTIONS(149),
    [anon_sym_trim_start] = ACTIONS(149),
    [anon_sym_trim_start_match] = ACTIONS(149),
    [anon_sym_trim_start_matches] = ACTIONS(149),
    [anon_sym_capitalize] = ACTIONS(149),
    [anon_sym_kebabcase] = ACTIONS(149),
    [anon_sym_lowercamelcase] = ACTIONS(149),
    [anon_sym_lowercase] = ACTIONS(149),
    [anon_sym_shoutykebabcase] = ACTIONS(149),
    [anon_sym_shoutysnakecase] = ACTIONS(149),
    [anon_sym_snakecase] = ACTIONS(149),
    [anon_sym_titlecase] = ACTIONS(149),
    [anon_sym_uppercamelcase] = ACTIONS(149),
    [anon_sym_uppercase] = ACTIONS(149),
    [anon_sym_absolute_path] = ACTIONS(149),
    [anon_sym_canonicalize] = ACTIONS(149),
    [anon_sym_extension] = ACTIONS(149),
    [anon_sym_file_name] = ACTIONS(149),
    [anon_sym_file_stem] = ACTIONS(149),
    [anon_sym_parent_directory] = ACTIONS(149),
    [anon_sym_without_extension] = ACTIONS(149),
    [anon_sym_clean] = ACTIONS(149),
    [anon_sym_join] = ACTIONS(149),
    [anon_sym_COMMA] = ACTIONS(147),
    [anon_sym_set] = ACTIONS(149),
    [anon_sym_RBRACK] = ACTIONS(147),
    [anon_sym_BQUOTE] = ACTIONS(149),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(147),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(147),
    [anon_sym_DQUOTE] = ACTIONS(149),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(147),
    [anon_sym_SQUOTE] = ACTIONS(149),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [28] = {
    [sym_comment] = STATE(28),
    [ts_builtin_sym_end] = ACTIONS(151),
    [sym_identifier] = ACTIONS(153),
    [anon_sym_alias] = ACTIONS(153),
    [aux_sym_import_token1] = ACTIONS(153),
    [aux_sym_mod_token1] = ACTIONS(153),
    [anon_sym_LPAREN] = ACTIONS(151),
    [anon_sym_RPAREN] = ACTIONS(151),
    [anon_sym_arch] = ACTIONS(153),
    [anon_sym_num_cpus] = ACTIONS(153),
    [anon_sym_os] = ACTIONS(153),
    [anon_sym_os_family] = ACTIONS(153),
    [anon_sym_shell] = ACTIONS(153),
    [anon_sym_env_var] = ACTIONS(153),
    [anon_sym_env_var_or_default] = ACTIONS(153),
    [anon_sym_env] = ACTIONS(153),
    [anon_sym_is_dependency] = ACTIONS(153),
    [anon_sym_invocation_dir] = ACTIONS(153),
    [anon_sym_invocation_dir_native] = ACTIONS(153),
    [anon_sym_invocation_directory] = ACTIONS(153),
    [anon_sym_invocation_directory_native] = ACTIONS(153),
    [anon_sym_justfile] = ACTIONS(153),
    [anon_sym_justfile_dir] = ACTIONS(153),
    [anon_sym_justfile_directory] = ACTIONS(153),
    [anon_sym_source_dir] = ACTIONS(153),
    [anon_sym_source_directory] = ACTIONS(153),
    [anon_sym_source_file] = ACTIONS(153),
    [anon_sym_just_executable] = ACTIONS(153),
    [anon_sym_just_pid] = ACTIONS(153),
    [anon_sym_append] = ACTIONS(153),
    [anon_sym_prepend] = ACTIONS(153),
    [anon_sym_encode_uri_component] = ACTIONS(153),
    [anon_sym_quote] = ACTIONS(153),
    [anon_sym_replace] = ACTIONS(153),
    [anon_sym_replace_regex] = ACTIONS(153),
    [anon_sym_trim] = ACTIONS(153),
    [anon_sym_trim_end] = ACTIONS(153),
    [anon_sym_trim_end_match] = ACTIONS(153),
    [anon_sym_trim_end_matches] = ACTIONS(153),
    [anon_sym_trim_start] = ACTIONS(153),
    [anon_sym_trim_start_match] = ACTIONS(153),
    [anon_sym_trim_start_matches] = ACTIONS(153),
    [anon_sym_capitalize] = ACTIONS(153),
    [anon_sym_kebabcase] = ACTIONS(153),
    [anon_sym_lowercamelcase] = ACTIONS(153),
    [anon_sym_lowercase] = ACTIONS(153),
    [anon_sym_shoutykebabcase] = ACTIONS(153),
    [anon_sym_shoutysnakecase] = ACTIONS(153),
    [anon_sym_snakecase] = ACTIONS(153),
    [anon_sym_titlecase] = ACTIONS(153),
    [anon_sym_uppercamelcase] = ACTIONS(153),
    [anon_sym_uppercase] = ACTIONS(153),
    [anon_sym_absolute_path] = ACTIONS(153),
    [anon_sym_canonicalize] = ACTIONS(153),
    [anon_sym_extension] = ACTIONS(153),
    [anon_sym_file_name] = ACTIONS(153),
    [anon_sym_file_stem] = ACTIONS(153),
    [anon_sym_parent_directory] = ACTIONS(153),
    [anon_sym_without_extension] = ACTIONS(153),
    [anon_sym_clean] = ACTIONS(153),
    [anon_sym_join] = ACTIONS(153),
    [anon_sym_COMMA] = ACTIONS(151),
    [anon_sym_set] = ACTIONS(153),
    [anon_sym_BQUOTE] = ACTIONS(153),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(151),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(151),
    [anon_sym_DQUOTE] = ACTIONS(153),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(151),
    [anon_sym_SQUOTE] = ACTIONS(153),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [29] = {
    [sym__setting_boolean] = STATE(47),
    [sym_comment] = STATE(29),
    [ts_builtin_sym_end] = ACTIONS(113),
    [sym_identifier] = ACTIONS(115),
    [anon_sym_alias] = ACTIONS(115),
    [anon_sym_COLON_EQ] = ACTIONS(155),
    [aux_sym_import_token1] = ACTIONS(115),
    [aux_sym_mod_token1] = ACTIONS(115),
    [anon_sym_LPAREN] = ACTIONS(113),
    [anon_sym_arch] = ACTIONS(115),
    [anon_sym_num_cpus] = ACTIONS(115),
    [anon_sym_os] = ACTIONS(115),
    [anon_sym_os_family] = ACTIONS(115),
    [anon_sym_shell] = ACTIONS(115),
    [anon_sym_env_var] = ACTIONS(115),
    [anon_sym_env_var_or_default] = ACTIONS(115),
    [anon_sym_env] = ACTIONS(115),
    [anon_sym_is_dependency] = ACTIONS(115),
    [anon_sym_invocation_dir] = ACTIONS(115),
    [anon_sym_invocation_dir_native] = ACTIONS(115),
    [anon_sym_invocation_directory] = ACTIONS(115),
    [anon_sym_invocation_directory_native] = ACTIONS(115),
    [anon_sym_justfile] = ACTIONS(115),
    [anon_sym_justfile_dir] = ACTIONS(115),
    [anon_sym_justfile_directory] = ACTIONS(115),
    [anon_sym_source_dir] = ACTIONS(115),
    [anon_sym_source_directory] = ACTIONS(115),
    [anon_sym_source_file] = ACTIONS(115),
    [anon_sym_just_executable] = ACTIONS(115),
    [anon_sym_just_pid] = ACTIONS(115),
    [anon_sym_append] = ACTIONS(115),
    [anon_sym_prepend] = ACTIONS(115),
    [anon_sym_encode_uri_component] = ACTIONS(115),
    [anon_sym_quote] = ACTIONS(115),
    [anon_sym_replace] = ACTIONS(115),
    [anon_sym_replace_regex] = ACTIONS(115),
    [anon_sym_trim] = ACTIONS(115),
    [anon_sym_trim_end] = ACTIONS(115),
    [anon_sym_trim_end_match] = ACTIONS(115),
    [anon_sym_trim_end_matches] = ACTIONS(115),
    [anon_sym_trim_start] = ACTIONS(115),
    [anon_sym_trim_start_match] = ACTIONS(115),
    [anon_sym_trim_start_matches] = ACTIONS(115),
    [anon_sym_capitalize] = ACTIONS(115),
    [anon_sym_kebabcase] = ACTIONS(115),
    [anon_sym_lowercamelcase] = ACTIONS(115),
    [anon_sym_lowercase] = ACTIONS(115),
    [anon_sym_shoutykebabcase] = ACTIONS(115),
    [anon_sym_shoutysnakecase] = ACTIONS(115),
    [anon_sym_snakecase] = ACTIONS(115),
    [anon_sym_titlecase] = ACTIONS(115),
    [anon_sym_uppercamelcase] = ACTIONS(115),
    [anon_sym_uppercase] = ACTIONS(115),
    [anon_sym_absolute_path] = ACTIONS(115),
    [anon_sym_canonicalize] = ACTIONS(115),
    [anon_sym_extension] = ACTIONS(115),
    [anon_sym_file_name] = ACTIONS(115),
    [anon_sym_file_stem] = ACTIONS(115),
    [anon_sym_parent_directory] = ACTIONS(115),
    [anon_sym_without_extension] = ACTIONS(115),
    [anon_sym_clean] = ACTIONS(115),
    [anon_sym_join] = ACTIONS(115),
    [anon_sym_set] = ACTIONS(115),
    [anon_sym_BQUOTE] = ACTIONS(115),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(113),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(113),
    [anon_sym_DQUOTE] = ACTIONS(115),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(113),
    [anon_sym_SQUOTE] = ACTIONS(115),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [30] = {
    [sym_comment] = STATE(30),
    [ts_builtin_sym_end] = ACTIONS(157),
    [sym_identifier] = ACTIONS(159),
    [anon_sym_alias] = ACTIONS(159),
    [aux_sym_import_token1] = ACTIONS(159),
    [aux_sym_mod_token1] = ACTIONS(159),
    [anon_sym_LPAREN] = ACTIONS(157),
    [anon_sym_RPAREN] = ACTIONS(157),
    [anon_sym_arch] = ACTIONS(159),
    [anon_sym_num_cpus] = ACTIONS(159),
    [anon_sym_os] = ACTIONS(159),
    [anon_sym_os_family] = ACTIONS(159),
    [anon_sym_shell] = ACTIONS(159),
    [anon_sym_env_var] = ACTIONS(159),
    [anon_sym_env_var_or_default] = ACTIONS(159),
    [anon_sym_env] = ACTIONS(159),
    [anon_sym_is_dependency] = ACTIONS(159),
    [anon_sym_invocation_dir] = ACTIONS(159),
    [anon_sym_invocation_dir_native] = ACTIONS(159),
    [anon_sym_invocation_directory] = ACTIONS(159),
    [anon_sym_invocation_directory_native] = ACTIONS(159),
    [anon_sym_justfile] = ACTIONS(159),
    [anon_sym_justfile_dir] = ACTIONS(159),
    [anon_sym_justfile_directory] = ACTIONS(159),
    [anon_sym_source_dir] = ACTIONS(159),
    [anon_sym_source_directory] = ACTIONS(159),
    [anon_sym_source_file] = ACTIONS(159),
    [anon_sym_just_executable] = ACTIONS(159),
    [anon_sym_just_pid] = ACTIONS(159),
    [anon_sym_append] = ACTIONS(159),
    [anon_sym_prepend] = ACTIONS(159),
    [anon_sym_encode_uri_component] = ACTIONS(159),
    [anon_sym_quote] = ACTIONS(159),
    [anon_sym_replace] = ACTIONS(159),
    [anon_sym_replace_regex] = ACTIONS(159),
    [anon_sym_trim] = ACTIONS(159),
    [anon_sym_trim_end] = ACTIONS(159),
    [anon_sym_trim_end_match] = ACTIONS(159),
    [anon_sym_trim_end_matches] = ACTIONS(159),
    [anon_sym_trim_start] = ACTIONS(159),
    [anon_sym_trim_start_match] = ACTIONS(159),
    [anon_sym_trim_start_matches] = ACTIONS(159),
    [anon_sym_capitalize] = ACTIONS(159),
    [anon_sym_kebabcase] = ACTIONS(159),
    [anon_sym_lowercamelcase] = ACTIONS(159),
    [anon_sym_lowercase] = ACTIONS(159),
    [anon_sym_shoutykebabcase] = ACTIONS(159),
    [anon_sym_shoutysnakecase] = ACTIONS(159),
    [anon_sym_snakecase] = ACTIONS(159),
    [anon_sym_titlecase] = ACTIONS(159),
    [anon_sym_uppercamelcase] = ACTIONS(159),
    [anon_sym_uppercase] = ACTIONS(159),
    [anon_sym_absolute_path] = ACTIONS(159),
    [anon_sym_canonicalize] = ACTIONS(159),
    [anon_sym_extension] = ACTIONS(159),
    [anon_sym_file_name] = ACTIONS(159),
    [anon_sym_file_stem] = ACTIONS(159),
    [anon_sym_parent_directory] = ACTIONS(159),
    [anon_sym_without_extension] = ACTIONS(159),
    [anon_sym_clean] = ACTIONS(159),
    [anon_sym_join] = ACTIONS(159),
    [anon_sym_COMMA] = ACTIONS(157),
    [anon_sym_set] = ACTIONS(159),
    [anon_sym_BQUOTE] = ACTIONS(159),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(157),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(157),
    [anon_sym_DQUOTE] = ACTIONS(159),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(157),
    [anon_sym_SQUOTE] = ACTIONS(159),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [31] = {
    [sym_comment] = STATE(31),
    [ts_builtin_sym_end] = ACTIONS(161),
    [sym_identifier] = ACTIONS(163),
    [anon_sym_alias] = ACTIONS(163),
    [aux_sym_import_token1] = ACTIONS(163),
    [aux_sym_mod_token1] = ACTIONS(163),
    [anon_sym_LPAREN] = ACTIONS(161),
    [anon_sym_RPAREN] = ACTIONS(161),
    [anon_sym_arch] = ACTIONS(163),
    [anon_sym_num_cpus] = ACTIONS(163),
    [anon_sym_os] = ACTIONS(163),
    [anon_sym_os_family] = ACTIONS(163),
    [anon_sym_shell] = ACTIONS(163),
    [anon_sym_env_var] = ACTIONS(163),
    [anon_sym_env_var_or_default] = ACTIONS(163),
    [anon_sym_env] = ACTIONS(163),
    [anon_sym_is_dependency] = ACTIONS(163),
    [anon_sym_invocation_dir] = ACTIONS(163),
    [anon_sym_invocation_dir_native] = ACTIONS(163),
    [anon_sym_invocation_directory] = ACTIONS(163),
    [anon_sym_invocation_directory_native] = ACTIONS(163),
    [anon_sym_justfile] = ACTIONS(163),
    [anon_sym_justfile_dir] = ACTIONS(163),
    [anon_sym_justfile_directory] = ACTIONS(163),
    [anon_sym_source_dir] = ACTIONS(163),
    [anon_sym_source_directory] = ACTIONS(163),
    [anon_sym_source_file] = ACTIONS(163),
    [anon_sym_just_executable] = ACTIONS(163),
    [anon_sym_just_pid] = ACTIONS(163),
    [anon_sym_append] = ACTIONS(163),
    [anon_sym_prepend] = ACTIONS(163),
    [anon_sym_encode_uri_component] = ACTIONS(163),
    [anon_sym_quote] = ACTIONS(163),
    [anon_sym_replace] = ACTIONS(163),
    [anon_sym_replace_regex] = ACTIONS(163),
    [anon_sym_trim] = ACTIONS(163),
    [anon_sym_trim_end] = ACTIONS(163),
    [anon_sym_trim_end_match] = ACTIONS(163),
    [anon_sym_trim_end_matches] = ACTIONS(163),
    [anon_sym_trim_start] = ACTIONS(163),
    [anon_sym_trim_start_match] = ACTIONS(163),
    [anon_sym_trim_start_matches] = ACTIONS(163),
    [anon_sym_capitalize] = ACTIONS(163),
    [anon_sym_kebabcase] = ACTIONS(163),
    [anon_sym_lowercamelcase] = ACTIONS(163),
    [anon_sym_lowercase] = ACTIONS(163),
    [anon_sym_shoutykebabcase] = ACTIONS(163),
    [anon_sym_shoutysnakecase] = ACTIONS(163),
    [anon_sym_snakecase] = ACTIONS(163),
    [anon_sym_titlecase] = ACTIONS(163),
    [anon_sym_uppercamelcase] = ACTIONS(163),
    [anon_sym_uppercase] = ACTIONS(163),
    [anon_sym_absolute_path] = ACTIONS(163),
    [anon_sym_canonicalize] = ACTIONS(163),
    [anon_sym_extension] = ACTIONS(163),
    [anon_sym_file_name] = ACTIONS(163),
    [anon_sym_file_stem] = ACTIONS(163),
    [anon_sym_parent_directory] = ACTIONS(163),
    [anon_sym_without_extension] = ACTIONS(163),
    [anon_sym_clean] = ACTIONS(163),
    [anon_sym_join] = ACTIONS(163),
    [anon_sym_COMMA] = ACTIONS(161),
    [anon_sym_set] = ACTIONS(163),
    [anon_sym_BQUOTE] = ACTIONS(163),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(161),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(161),
    [anon_sym_DQUOTE] = ACTIONS(163),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(161),
    [anon_sym_SQUOTE] = ACTIONS(163),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [32] = {
    [sym_comment] = STATE(32),
    [ts_builtin_sym_end] = ACTIONS(165),
    [sym_identifier] = ACTIONS(167),
    [anon_sym_alias] = ACTIONS(167),
    [aux_sym_import_token1] = ACTIONS(167),
    [aux_sym_mod_token1] = ACTIONS(167),
    [anon_sym_LPAREN] = ACTIONS(169),
    [anon_sym_RPAREN] = ACTIONS(165),
    [anon_sym_arch] = ACTIONS(167),
    [anon_sym_num_cpus] = ACTIONS(167),
    [anon_sym_os] = ACTIONS(167),
    [anon_sym_os_family] = ACTIONS(167),
    [anon_sym_shell] = ACTIONS(167),
    [anon_sym_env_var] = ACTIONS(167),
    [anon_sym_env_var_or_default] = ACTIONS(167),
    [anon_sym_env] = ACTIONS(167),
    [anon_sym_is_dependency] = ACTIONS(167),
    [anon_sym_invocation_dir] = ACTIONS(167),
    [anon_sym_invocation_dir_native] = ACTIONS(167),
    [anon_sym_invocation_directory] = ACTIONS(167),
    [anon_sym_invocation_directory_native] = ACTIONS(167),
    [anon_sym_justfile] = ACTIONS(167),
    [anon_sym_justfile_dir] = ACTIONS(167),
    [anon_sym_justfile_directory] = ACTIONS(167),
    [anon_sym_source_dir] = ACTIONS(167),
    [anon_sym_source_directory] = ACTIONS(167),
    [anon_sym_source_file] = ACTIONS(167),
    [anon_sym_just_executable] = ACTIONS(167),
    [anon_sym_just_pid] = ACTIONS(167),
    [anon_sym_append] = ACTIONS(167),
    [anon_sym_prepend] = ACTIONS(167),
    [anon_sym_encode_uri_component] = ACTIONS(167),
    [anon_sym_quote] = ACTIONS(167),
    [anon_sym_replace] = ACTIONS(167),
    [anon_sym_replace_regex] = ACTIONS(167),
    [anon_sym_trim] = ACTIONS(167),
    [anon_sym_trim_end] = ACTIONS(167),
    [anon_sym_trim_end_match] = ACTIONS(167),
    [anon_sym_trim_end_matches] = ACTIONS(167),
    [anon_sym_trim_start] = ACTIONS(167),
    [anon_sym_trim_start_match] = ACTIONS(167),
    [anon_sym_trim_start_matches] = ACTIONS(167),
    [anon_sym_capitalize] = ACTIONS(167),
    [anon_sym_kebabcase] = ACTIONS(167),
    [anon_sym_lowercamelcase] = ACTIONS(167),
    [anon_sym_lowercase] = ACTIONS(167),
    [anon_sym_shoutykebabcase] = ACTIONS(167),
    [anon_sym_shoutysnakecase] = ACTIONS(167),
    [anon_sym_snakecase] = ACTIONS(167),
    [anon_sym_titlecase] = ACTIONS(167),
    [anon_sym_uppercamelcase] = ACTIONS(167),
    [anon_sym_uppercase] = ACTIONS(167),
    [anon_sym_absolute_path] = ACTIONS(167),
    [anon_sym_canonicalize] = ACTIONS(167),
    [anon_sym_extension] = ACTIONS(167),
    [anon_sym_file_name] = ACTIONS(167),
    [anon_sym_file_stem] = ACTIONS(167),
    [anon_sym_parent_directory] = ACTIONS(167),
    [anon_sym_without_extension] = ACTIONS(167),
    [anon_sym_clean] = ACTIONS(167),
    [anon_sym_join] = ACTIONS(167),
    [anon_sym_COMMA] = ACTIONS(165),
    [anon_sym_set] = ACTIONS(167),
    [anon_sym_BQUOTE] = ACTIONS(167),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(165),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(165),
    [anon_sym_DQUOTE] = ACTIONS(167),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(165),
    [anon_sym_SQUOTE] = ACTIONS(167),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [33] = {
    [sym_comment] = STATE(33),
    [ts_builtin_sym_end] = ACTIONS(171),
    [sym_identifier] = ACTIONS(173),
    [anon_sym_alias] = ACTIONS(173),
    [aux_sym_import_token1] = ACTIONS(173),
    [aux_sym_mod_token1] = ACTIONS(173),
    [anon_sym_LPAREN] = ACTIONS(171),
    [anon_sym_RPAREN] = ACTIONS(171),
    [anon_sym_arch] = ACTIONS(173),
    [anon_sym_num_cpus] = ACTIONS(173),
    [anon_sym_os] = ACTIONS(173),
    [anon_sym_os_family] = ACTIONS(173),
    [anon_sym_shell] = ACTIONS(173),
    [anon_sym_env_var] = ACTIONS(173),
    [anon_sym_env_var_or_default] = ACTIONS(173),
    [anon_sym_env] = ACTIONS(173),
    [anon_sym_is_dependency] = ACTIONS(173),
    [anon_sym_invocation_dir] = ACTIONS(173),
    [anon_sym_invocation_dir_native] = ACTIONS(173),
    [anon_sym_invocation_directory] = ACTIONS(173),
    [anon_sym_invocation_directory_native] = ACTIONS(173),
    [anon_sym_justfile] = ACTIONS(173),
    [anon_sym_justfile_dir] = ACTIONS(173),
    [anon_sym_justfile_directory] = ACTIONS(173),
    [anon_sym_source_dir] = ACTIONS(173),
    [anon_sym_source_directory] = ACTIONS(173),
    [anon_sym_source_file] = ACTIONS(173),
    [anon_sym_just_executable] = ACTIONS(173),
    [anon_sym_just_pid] = ACTIONS(173),
    [anon_sym_append] = ACTIONS(173),
    [anon_sym_prepend] = ACTIONS(173),
    [anon_sym_encode_uri_component] = ACTIONS(173),
    [anon_sym_quote] = ACTIONS(173),
    [anon_sym_replace] = ACTIONS(173),
    [anon_sym_replace_regex] = ACTIONS(173),
    [anon_sym_trim] = ACTIONS(173),
    [anon_sym_trim_end] = ACTIONS(173),
    [anon_sym_trim_end_match] = ACTIONS(173),
    [anon_sym_trim_end_matches] = ACTIONS(173),
    [anon_sym_trim_start] = ACTIONS(173),
    [anon_sym_trim_start_match] = ACTIONS(173),
    [anon_sym_trim_start_matches] = ACTIONS(173),
    [anon_sym_capitalize] = ACTIONS(173),
    [anon_sym_kebabcase] = ACTIONS(173),
    [anon_sym_lowercamelcase] = ACTIONS(173),
    [anon_sym_lowercase] = ACTIONS(173),
    [anon_sym_shoutykebabcase] = ACTIONS(173),
    [anon_sym_shoutysnakecase] = ACTIONS(173),
    [anon_sym_snakecase] = ACTIONS(173),
    [anon_sym_titlecase] = ACTIONS(173),
    [anon_sym_uppercamelcase] = ACTIONS(173),
    [anon_sym_uppercase] = ACTIONS(173),
    [anon_sym_absolute_path] = ACTIONS(173),
    [anon_sym_canonicalize] = ACTIONS(173),
    [anon_sym_extension] = ACTIONS(173),
    [anon_sym_file_name] = ACTIONS(173),
    [anon_sym_file_stem] = ACTIONS(173),
    [anon_sym_parent_directory] = ACTIONS(173),
    [anon_sym_without_extension] = ACTIONS(173),
    [anon_sym_clean] = ACTIONS(173),
    [anon_sym_join] = ACTIONS(173),
    [anon_sym_COMMA] = ACTIONS(171),
    [anon_sym_set] = ACTIONS(173),
    [anon_sym_BQUOTE] = ACTIONS(173),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(171),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(171),
    [anon_sym_DQUOTE] = ACTIONS(173),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(171),
    [anon_sym_SQUOTE] = ACTIONS(173),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [34] = {
    [sym_comment] = STATE(34),
    [ts_builtin_sym_end] = ACTIONS(175),
    [sym_identifier] = ACTIONS(177),
    [anon_sym_alias] = ACTIONS(177),
    [aux_sym_import_token1] = ACTIONS(177),
    [aux_sym_mod_token1] = ACTIONS(177),
    [anon_sym_LPAREN] = ACTIONS(175),
    [anon_sym_RPAREN] = ACTIONS(175),
    [anon_sym_arch] = ACTIONS(177),
    [anon_sym_num_cpus] = ACTIONS(177),
    [anon_sym_os] = ACTIONS(177),
    [anon_sym_os_family] = ACTIONS(177),
    [anon_sym_shell] = ACTIONS(177),
    [anon_sym_env_var] = ACTIONS(177),
    [anon_sym_env_var_or_default] = ACTIONS(177),
    [anon_sym_env] = ACTIONS(177),
    [anon_sym_is_dependency] = ACTIONS(177),
    [anon_sym_invocation_dir] = ACTIONS(177),
    [anon_sym_invocation_dir_native] = ACTIONS(177),
    [anon_sym_invocation_directory] = ACTIONS(177),
    [anon_sym_invocation_directory_native] = ACTIONS(177),
    [anon_sym_justfile] = ACTIONS(177),
    [anon_sym_justfile_dir] = ACTIONS(177),
    [anon_sym_justfile_directory] = ACTIONS(177),
    [anon_sym_source_dir] = ACTIONS(177),
    [anon_sym_source_directory] = ACTIONS(177),
    [anon_sym_source_file] = ACTIONS(177),
    [anon_sym_just_executable] = ACTIONS(177),
    [anon_sym_just_pid] = ACTIONS(177),
    [anon_sym_append] = ACTIONS(177),
    [anon_sym_prepend] = ACTIONS(177),
    [anon_sym_encode_uri_component] = ACTIONS(177),
    [anon_sym_quote] = ACTIONS(177),
    [anon_sym_replace] = ACTIONS(177),
    [anon_sym_replace_regex] = ACTIONS(177),
    [anon_sym_trim] = ACTIONS(177),
    [anon_sym_trim_end] = ACTIONS(177),
    [anon_sym_trim_end_match] = ACTIONS(177),
    [anon_sym_trim_end_matches] = ACTIONS(177),
    [anon_sym_trim_start] = ACTIONS(177),
    [anon_sym_trim_start_match] = ACTIONS(177),
    [anon_sym_trim_start_matches] = ACTIONS(177),
    [anon_sym_capitalize] = ACTIONS(177),
    [anon_sym_kebabcase] = ACTIONS(177),
    [anon_sym_lowercamelcase] = ACTIONS(177),
    [anon_sym_lowercase] = ACTIONS(177),
    [anon_sym_shoutykebabcase] = ACTIONS(177),
    [anon_sym_shoutysnakecase] = ACTIONS(177),
    [anon_sym_snakecase] = ACTIONS(177),
    [anon_sym_titlecase] = ACTIONS(177),
    [anon_sym_uppercamelcase] = ACTIONS(177),
    [anon_sym_uppercase] = ACTIONS(177),
    [anon_sym_absolute_path] = ACTIONS(177),
    [anon_sym_canonicalize] = ACTIONS(177),
    [anon_sym_extension] = ACTIONS(177),
    [anon_sym_file_name] = ACTIONS(177),
    [anon_sym_file_stem] = ACTIONS(177),
    [anon_sym_parent_directory] = ACTIONS(177),
    [anon_sym_without_extension] = ACTIONS(177),
    [anon_sym_clean] = ACTIONS(177),
    [anon_sym_join] = ACTIONS(177),
    [anon_sym_COMMA] = ACTIONS(175),
    [anon_sym_set] = ACTIONS(177),
    [anon_sym_BQUOTE] = ACTIONS(177),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(175),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(175),
    [anon_sym_DQUOTE] = ACTIONS(177),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(175),
    [anon_sym_SQUOTE] = ACTIONS(177),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [35] = {
    [sym_comment] = STATE(35),
    [ts_builtin_sym_end] = ACTIONS(179),
    [sym_identifier] = ACTIONS(181),
    [anon_sym_alias] = ACTIONS(181),
    [aux_sym_import_token1] = ACTIONS(181),
    [aux_sym_mod_token1] = ACTIONS(181),
    [anon_sym_LPAREN] = ACTIONS(179),
    [anon_sym_RPAREN] = ACTIONS(179),
    [anon_sym_arch] = ACTIONS(181),
    [anon_sym_num_cpus] = ACTIONS(181),
    [anon_sym_os] = ACTIONS(181),
    [anon_sym_os_family] = ACTIONS(181),
    [anon_sym_shell] = ACTIONS(181),
    [anon_sym_env_var] = ACTIONS(181),
    [anon_sym_env_var_or_default] = ACTIONS(181),
    [anon_sym_env] = ACTIONS(181),
    [anon_sym_is_dependency] = ACTIONS(181),
    [anon_sym_invocation_dir] = ACTIONS(181),
    [anon_sym_invocation_dir_native] = ACTIONS(181),
    [anon_sym_invocation_directory] = ACTIONS(181),
    [anon_sym_invocation_directory_native] = ACTIONS(181),
    [anon_sym_justfile] = ACTIONS(181),
    [anon_sym_justfile_dir] = ACTIONS(181),
    [anon_sym_justfile_directory] = ACTIONS(181),
    [anon_sym_source_dir] = ACTIONS(181),
    [anon_sym_source_directory] = ACTIONS(181),
    [anon_sym_source_file] = ACTIONS(181),
    [anon_sym_just_executable] = ACTIONS(181),
    [anon_sym_just_pid] = ACTIONS(181),
    [anon_sym_append] = ACTIONS(181),
    [anon_sym_prepend] = ACTIONS(181),
    [anon_sym_encode_uri_component] = ACTIONS(181),
    [anon_sym_quote] = ACTIONS(181),
    [anon_sym_replace] = ACTIONS(181),
    [anon_sym_replace_regex] = ACTIONS(181),
    [anon_sym_trim] = ACTIONS(181),
    [anon_sym_trim_end] = ACTIONS(181),
    [anon_sym_trim_end_match] = ACTIONS(181),
    [anon_sym_trim_end_matches] = ACTIONS(181),
    [anon_sym_trim_start] = ACTIONS(181),
    [anon_sym_trim_start_match] = ACTIONS(181),
    [anon_sym_trim_start_matches] = ACTIONS(181),
    [anon_sym_capitalize] = ACTIONS(181),
    [anon_sym_kebabcase] = ACTIONS(181),
    [anon_sym_lowercamelcase] = ACTIONS(181),
    [anon_sym_lowercase] = ACTIONS(181),
    [anon_sym_shoutykebabcase] = ACTIONS(181),
    [anon_sym_shoutysnakecase] = ACTIONS(181),
    [anon_sym_snakecase] = ACTIONS(181),
    [anon_sym_titlecase] = ACTIONS(181),
    [anon_sym_uppercamelcase] = ACTIONS(181),
    [anon_sym_uppercase] = ACTIONS(181),
    [anon_sym_absolute_path] = ACTIONS(181),
    [anon_sym_canonicalize] = ACTIONS(181),
    [anon_sym_extension] = ACTIONS(181),
    [anon_sym_file_name] = ACTIONS(181),
    [anon_sym_file_stem] = ACTIONS(181),
    [anon_sym_parent_directory] = ACTIONS(181),
    [anon_sym_without_extension] = ACTIONS(181),
    [anon_sym_clean] = ACTIONS(181),
    [anon_sym_join] = ACTIONS(181),
    [anon_sym_COMMA] = ACTIONS(179),
    [anon_sym_set] = ACTIONS(181),
    [anon_sym_BQUOTE] = ACTIONS(181),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(179),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(179),
    [anon_sym_DQUOTE] = ACTIONS(181),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(179),
    [anon_sym_SQUOTE] = ACTIONS(181),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [36] = {
    [sym_comment] = STATE(36),
    [ts_builtin_sym_end] = ACTIONS(165),
    [sym_identifier] = ACTIONS(167),
    [anon_sym_alias] = ACTIONS(167),
    [aux_sym_import_token1] = ACTIONS(167),
    [aux_sym_mod_token1] = ACTIONS(167),
    [anon_sym_LPAREN] = ACTIONS(165),
    [anon_sym_RPAREN] = ACTIONS(165),
    [anon_sym_arch] = ACTIONS(167),
    [anon_sym_num_cpus] = ACTIONS(167),
    [anon_sym_os] = ACTIONS(167),
    [anon_sym_os_family] = ACTIONS(167),
    [anon_sym_shell] = ACTIONS(167),
    [anon_sym_env_var] = ACTIONS(167),
    [anon_sym_env_var_or_default] = ACTIONS(167),
    [anon_sym_env] = ACTIONS(167),
    [anon_sym_is_dependency] = ACTIONS(167),
    [anon_sym_invocation_dir] = ACTIONS(167),
    [anon_sym_invocation_dir_native] = ACTIONS(167),
    [anon_sym_invocation_directory] = ACTIONS(167),
    [anon_sym_invocation_directory_native] = ACTIONS(167),
    [anon_sym_justfile] = ACTIONS(167),
    [anon_sym_justfile_dir] = ACTIONS(167),
    [anon_sym_justfile_directory] = ACTIONS(167),
    [anon_sym_source_dir] = ACTIONS(167),
    [anon_sym_source_directory] = ACTIONS(167),
    [anon_sym_source_file] = ACTIONS(167),
    [anon_sym_just_executable] = ACTIONS(167),
    [anon_sym_just_pid] = ACTIONS(167),
    [anon_sym_append] = ACTIONS(167),
    [anon_sym_prepend] = ACTIONS(167),
    [anon_sym_encode_uri_component] = ACTIONS(167),
    [anon_sym_quote] = ACTIONS(167),
    [anon_sym_replace] = ACTIONS(167),
    [anon_sym_replace_regex] = ACTIONS(167),
    [anon_sym_trim] = ACTIONS(167),
    [anon_sym_trim_end] = ACTIONS(167),
    [anon_sym_trim_end_match] = ACTIONS(167),
    [anon_sym_trim_end_matches] = ACTIONS(167),
    [anon_sym_trim_start] = ACTIONS(167),
    [anon_sym_trim_start_match] = ACTIONS(167),
    [anon_sym_trim_start_matches] = ACTIONS(167),
    [anon_sym_capitalize] = ACTIONS(167),
    [anon_sym_kebabcase] = ACTIONS(167),
    [anon_sym_lowercamelcase] = ACTIONS(167),
    [anon_sym_lowercase] = ACTIONS(167),
    [anon_sym_shoutykebabcase] = ACTIONS(167),
    [anon_sym_shoutysnakecase] = ACTIONS(167),
    [anon_sym_snakecase] = ACTIONS(167),
    [anon_sym_titlecase] = ACTIONS(167),
    [anon_sym_uppercamelcase] = ACTIONS(167),
    [anon_sym_uppercase] = ACTIONS(167),
    [anon_sym_absolute_path] = ACTIONS(167),
    [anon_sym_canonicalize] = ACTIONS(167),
    [anon_sym_extension] = ACTIONS(167),
    [anon_sym_file_name] = ACTIONS(167),
    [anon_sym_file_stem] = ACTIONS(167),
    [anon_sym_parent_directory] = ACTIONS(167),
    [anon_sym_without_extension] = ACTIONS(167),
    [anon_sym_clean] = ACTIONS(167),
    [anon_sym_join] = ACTIONS(167),
    [anon_sym_COMMA] = ACTIONS(165),
    [anon_sym_set] = ACTIONS(167),
    [anon_sym_BQUOTE] = ACTIONS(167),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(165),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(165),
    [anon_sym_DQUOTE] = ACTIONS(167),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(165),
    [anon_sym_SQUOTE] = ACTIONS(167),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [37] = {
    [sym_comment] = STATE(37),
    [ts_builtin_sym_end] = ACTIONS(183),
    [sym_identifier] = ACTIONS(185),
    [anon_sym_alias] = ACTIONS(185),
    [aux_sym_import_token1] = ACTIONS(185),
    [aux_sym_mod_token1] = ACTIONS(185),
    [anon_sym_LPAREN] = ACTIONS(183),
    [anon_sym_RPAREN] = ACTIONS(183),
    [anon_sym_arch] = ACTIONS(185),
    [anon_sym_num_cpus] = ACTIONS(185),
    [anon_sym_os] = ACTIONS(185),
    [anon_sym_os_family] = ACTIONS(185),
    [anon_sym_shell] = ACTIONS(185),
    [anon_sym_env_var] = ACTIONS(185),
    [anon_sym_env_var_or_default] = ACTIONS(185),
    [anon_sym_env] = ACTIONS(185),
    [anon_sym_is_dependency] = ACTIONS(185),
    [anon_sym_invocation_dir] = ACTIONS(185),
    [anon_sym_invocation_dir_native] = ACTIONS(185),
    [anon_sym_invocation_directory] = ACTIONS(185),
    [anon_sym_invocation_directory_native] = ACTIONS(185),
    [anon_sym_justfile] = ACTIONS(185),
    [anon_sym_justfile_dir] = ACTIONS(185),
    [anon_sym_justfile_directory] = ACTIONS(185),
    [anon_sym_source_dir] = ACTIONS(185),
    [anon_sym_source_directory] = ACTIONS(185),
    [anon_sym_source_file] = ACTIONS(185),
    [anon_sym_just_executable] = ACTIONS(185),
    [anon_sym_just_pid] = ACTIONS(185),
    [anon_sym_append] = ACTIONS(185),
    [anon_sym_prepend] = ACTIONS(185),
    [anon_sym_encode_uri_component] = ACTIONS(185),
    [anon_sym_quote] = ACTIONS(185),
    [anon_sym_replace] = ACTIONS(185),
    [anon_sym_replace_regex] = ACTIONS(185),
    [anon_sym_trim] = ACTIONS(185),
    [anon_sym_trim_end] = ACTIONS(185),
    [anon_sym_trim_end_match] = ACTIONS(185),
    [anon_sym_trim_end_matches] = ACTIONS(185),
    [anon_sym_trim_start] = ACTIONS(185),
    [anon_sym_trim_start_match] = ACTIONS(185),
    [anon_sym_trim_start_matches] = ACTIONS(185),
    [anon_sym_capitalize] = ACTIONS(185),
    [anon_sym_kebabcase] = ACTIONS(185),
    [anon_sym_lowercamelcase] = ACTIONS(185),
    [anon_sym_lowercase] = ACTIONS(185),
    [anon_sym_shoutykebabcase] = ACTIONS(185),
    [anon_sym_shoutysnakecase] = ACTIONS(185),
    [anon_sym_snakecase] = ACTIONS(185),
    [anon_sym_titlecase] = ACTIONS(185),
    [anon_sym_uppercamelcase] = ACTIONS(185),
    [anon_sym_uppercase] = ACTIONS(185),
    [anon_sym_absolute_path] = ACTIONS(185),
    [anon_sym_canonicalize] = ACTIONS(185),
    [anon_sym_extension] = ACTIONS(185),
    [anon_sym_file_name] = ACTIONS(185),
    [anon_sym_file_stem] = ACTIONS(185),
    [anon_sym_parent_directory] = ACTIONS(185),
    [anon_sym_without_extension] = ACTIONS(185),
    [anon_sym_clean] = ACTIONS(185),
    [anon_sym_join] = ACTIONS(185),
    [anon_sym_COMMA] = ACTIONS(183),
    [anon_sym_set] = ACTIONS(185),
    [anon_sym_BQUOTE] = ACTIONS(185),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(183),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(183),
    [anon_sym_DQUOTE] = ACTIONS(185),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(183),
    [anon_sym_SQUOTE] = ACTIONS(185),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [38] = {
    [sym_comment] = STATE(38),
    [ts_builtin_sym_end] = ACTIONS(187),
    [sym_identifier] = ACTIONS(189),
    [anon_sym_alias] = ACTIONS(189),
    [aux_sym_import_token1] = ACTIONS(189),
    [aux_sym_mod_token1] = ACTIONS(189),
    [anon_sym_LPAREN] = ACTIONS(187),
    [anon_sym_RPAREN] = ACTIONS(187),
    [anon_sym_arch] = ACTIONS(189),
    [anon_sym_num_cpus] = ACTIONS(189),
    [anon_sym_os] = ACTIONS(189),
    [anon_sym_os_family] = ACTIONS(189),
    [anon_sym_shell] = ACTIONS(189),
    [anon_sym_env_var] = ACTIONS(189),
    [anon_sym_env_var_or_default] = ACTIONS(189),
    [anon_sym_env] = ACTIONS(189),
    [anon_sym_is_dependency] = ACTIONS(189),
    [anon_sym_invocation_dir] = ACTIONS(189),
    [anon_sym_invocation_dir_native] = ACTIONS(189),
    [anon_sym_invocation_directory] = ACTIONS(189),
    [anon_sym_invocation_directory_native] = ACTIONS(189),
    [anon_sym_justfile] = ACTIONS(189),
    [anon_sym_justfile_dir] = ACTIONS(189),
    [anon_sym_justfile_directory] = ACTIONS(189),
    [anon_sym_source_dir] = ACTIONS(189),
    [anon_sym_source_directory] = ACTIONS(189),
    [anon_sym_source_file] = ACTIONS(189),
    [anon_sym_just_executable] = ACTIONS(189),
    [anon_sym_just_pid] = ACTIONS(189),
    [anon_sym_append] = ACTIONS(189),
    [anon_sym_prepend] = ACTIONS(189),
    [anon_sym_encode_uri_component] = ACTIONS(189),
    [anon_sym_quote] = ACTIONS(189),
    [anon_sym_replace] = ACTIONS(189),
    [anon_sym_replace_regex] = ACTIONS(189),
    [anon_sym_trim] = ACTIONS(189),
    [anon_sym_trim_end] = ACTIONS(189),
    [anon_sym_trim_end_match] = ACTIONS(189),
    [anon_sym_trim_end_matches] = ACTIONS(189),
    [anon_sym_trim_start] = ACTIONS(189),
    [anon_sym_trim_start_match] = ACTIONS(189),
    [anon_sym_trim_start_matches] = ACTIONS(189),
    [anon_sym_capitalize] = ACTIONS(189),
    [anon_sym_kebabcase] = ACTIONS(189),
    [anon_sym_lowercamelcase] = ACTIONS(189),
    [anon_sym_lowercase] = ACTIONS(189),
    [anon_sym_shoutykebabcase] = ACTIONS(189),
    [anon_sym_shoutysnakecase] = ACTIONS(189),
    [anon_sym_snakecase] = ACTIONS(189),
    [anon_sym_titlecase] = ACTIONS(189),
    [anon_sym_uppercamelcase] = ACTIONS(189),
    [anon_sym_uppercase] = ACTIONS(189),
    [anon_sym_absolute_path] = ACTIONS(189),
    [anon_sym_canonicalize] = ACTIONS(189),
    [anon_sym_extension] = ACTIONS(189),
    [anon_sym_file_name] = ACTIONS(189),
    [anon_sym_file_stem] = ACTIONS(189),
    [anon_sym_parent_directory] = ACTIONS(189),
    [anon_sym_without_extension] = ACTIONS(189),
    [anon_sym_clean] = ACTIONS(189),
    [anon_sym_join] = ACTIONS(189),
    [anon_sym_COMMA] = ACTIONS(187),
    [anon_sym_set] = ACTIONS(189),
    [anon_sym_BQUOTE] = ACTIONS(189),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(187),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(187),
    [anon_sym_DQUOTE] = ACTIONS(189),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(187),
    [anon_sym_SQUOTE] = ACTIONS(189),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [39] = {
    [sym_comment] = STATE(39),
    [ts_builtin_sym_end] = ACTIONS(191),
    [sym_identifier] = ACTIONS(193),
    [anon_sym_alias] = ACTIONS(193),
    [aux_sym_import_token1] = ACTIONS(193),
    [aux_sym_mod_token1] = ACTIONS(193),
    [anon_sym_LPAREN] = ACTIONS(191),
    [anon_sym_RPAREN] = ACTIONS(191),
    [anon_sym_arch] = ACTIONS(193),
    [anon_sym_num_cpus] = ACTIONS(193),
    [anon_sym_os] = ACTIONS(193),
    [anon_sym_os_family] = ACTIONS(193),
    [anon_sym_shell] = ACTIONS(193),
    [anon_sym_env_var] = ACTIONS(193),
    [anon_sym_env_var_or_default] = ACTIONS(193),
    [anon_sym_env] = ACTIONS(193),
    [anon_sym_is_dependency] = ACTIONS(193),
    [anon_sym_invocation_dir] = ACTIONS(193),
    [anon_sym_invocation_dir_native] = ACTIONS(193),
    [anon_sym_invocation_directory] = ACTIONS(193),
    [anon_sym_invocation_directory_native] = ACTIONS(193),
    [anon_sym_justfile] = ACTIONS(193),
    [anon_sym_justfile_dir] = ACTIONS(193),
    [anon_sym_justfile_directory] = ACTIONS(193),
    [anon_sym_source_dir] = ACTIONS(193),
    [anon_sym_source_directory] = ACTIONS(193),
    [anon_sym_source_file] = ACTIONS(193),
    [anon_sym_just_executable] = ACTIONS(193),
    [anon_sym_just_pid] = ACTIONS(193),
    [anon_sym_append] = ACTIONS(193),
    [anon_sym_prepend] = ACTIONS(193),
    [anon_sym_encode_uri_component] = ACTIONS(193),
    [anon_sym_quote] = ACTIONS(193),
    [anon_sym_replace] = ACTIONS(193),
    [anon_sym_replace_regex] = ACTIONS(193),
    [anon_sym_trim] = ACTIONS(193),
    [anon_sym_trim_end] = ACTIONS(193),
    [anon_sym_trim_end_match] = ACTIONS(193),
    [anon_sym_trim_end_matches] = ACTIONS(193),
    [anon_sym_trim_start] = ACTIONS(193),
    [anon_sym_trim_start_match] = ACTIONS(193),
    [anon_sym_trim_start_matches] = ACTIONS(193),
    [anon_sym_capitalize] = ACTIONS(193),
    [anon_sym_kebabcase] = ACTIONS(193),
    [anon_sym_lowercamelcase] = ACTIONS(193),
    [anon_sym_lowercase] = ACTIONS(193),
    [anon_sym_shoutykebabcase] = ACTIONS(193),
    [anon_sym_shoutysnakecase] = ACTIONS(193),
    [anon_sym_snakecase] = ACTIONS(193),
    [anon_sym_titlecase] = ACTIONS(193),
    [anon_sym_uppercamelcase] = ACTIONS(193),
    [anon_sym_uppercase] = ACTIONS(193),
    [anon_sym_absolute_path] = ACTIONS(193),
    [anon_sym_canonicalize] = ACTIONS(193),
    [anon_sym_extension] = ACTIONS(193),
    [anon_sym_file_name] = ACTIONS(193),
    [anon_sym_file_stem] = ACTIONS(193),
    [anon_sym_parent_directory] = ACTIONS(193),
    [anon_sym_without_extension] = ACTIONS(193),
    [anon_sym_clean] = ACTIONS(193),
    [anon_sym_join] = ACTIONS(193),
    [anon_sym_COMMA] = ACTIONS(191),
    [anon_sym_set] = ACTIONS(193),
    [anon_sym_BQUOTE] = ACTIONS(193),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(191),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(191),
    [anon_sym_DQUOTE] = ACTIONS(193),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(191),
    [anon_sym_SQUOTE] = ACTIONS(193),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [40] = {
    [sym_comment] = STATE(40),
    [ts_builtin_sym_end] = ACTIONS(195),
    [sym_identifier] = ACTIONS(197),
    [anon_sym_alias] = ACTIONS(197),
    [aux_sym_import_token1] = ACTIONS(197),
    [aux_sym_mod_token1] = ACTIONS(197),
    [anon_sym_LPAREN] = ACTIONS(195),
    [anon_sym_RPAREN] = ACTIONS(195),
    [anon_sym_arch] = ACTIONS(197),
    [anon_sym_num_cpus] = ACTIONS(197),
    [anon_sym_os] = ACTIONS(197),
    [anon_sym_os_family] = ACTIONS(197),
    [anon_sym_shell] = ACTIONS(197),
    [anon_sym_env_var] = ACTIONS(197),
    [anon_sym_env_var_or_default] = ACTIONS(197),
    [anon_sym_env] = ACTIONS(197),
    [anon_sym_is_dependency] = ACTIONS(197),
    [anon_sym_invocation_dir] = ACTIONS(197),
    [anon_sym_invocation_dir_native] = ACTIONS(197),
    [anon_sym_invocation_directory] = ACTIONS(197),
    [anon_sym_invocation_directory_native] = ACTIONS(197),
    [anon_sym_justfile] = ACTIONS(197),
    [anon_sym_justfile_dir] = ACTIONS(197),
    [anon_sym_justfile_directory] = ACTIONS(197),
    [anon_sym_source_dir] = ACTIONS(197),
    [anon_sym_source_directory] = ACTIONS(197),
    [anon_sym_source_file] = ACTIONS(197),
    [anon_sym_just_executable] = ACTIONS(197),
    [anon_sym_just_pid] = ACTIONS(197),
    [anon_sym_append] = ACTIONS(197),
    [anon_sym_prepend] = ACTIONS(197),
    [anon_sym_encode_uri_component] = ACTIONS(197),
    [anon_sym_quote] = ACTIONS(197),
    [anon_sym_replace] = ACTIONS(197),
    [anon_sym_replace_regex] = ACTIONS(197),
    [anon_sym_trim] = ACTIONS(197),
    [anon_sym_trim_end] = ACTIONS(197),
    [anon_sym_trim_end_match] = ACTIONS(197),
    [anon_sym_trim_end_matches] = ACTIONS(197),
    [anon_sym_trim_start] = ACTIONS(197),
    [anon_sym_trim_start_match] = ACTIONS(197),
    [anon_sym_trim_start_matches] = ACTIONS(197),
    [anon_sym_capitalize] = ACTIONS(197),
    [anon_sym_kebabcase] = ACTIONS(197),
    [anon_sym_lowercamelcase] = ACTIONS(197),
    [anon_sym_lowercase] = ACTIONS(197),
    [anon_sym_shoutykebabcase] = ACTIONS(197),
    [anon_sym_shoutysnakecase] = ACTIONS(197),
    [anon_sym_snakecase] = ACTIONS(197),
    [anon_sym_titlecase] = ACTIONS(197),
    [anon_sym_uppercamelcase] = ACTIONS(197),
    [anon_sym_uppercase] = ACTIONS(197),
    [anon_sym_absolute_path] = ACTIONS(197),
    [anon_sym_canonicalize] = ACTIONS(197),
    [anon_sym_extension] = ACTIONS(197),
    [anon_sym_file_name] = ACTIONS(197),
    [anon_sym_file_stem] = ACTIONS(197),
    [anon_sym_parent_directory] = ACTIONS(197),
    [anon_sym_without_extension] = ACTIONS(197),
    [anon_sym_clean] = ACTIONS(197),
    [anon_sym_join] = ACTIONS(197),
    [anon_sym_COMMA] = ACTIONS(195),
    [anon_sym_set] = ACTIONS(197),
    [anon_sym_BQUOTE] = ACTIONS(197),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(195),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(195),
    [anon_sym_DQUOTE] = ACTIONS(197),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(195),
    [anon_sym_SQUOTE] = ACTIONS(197),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [41] = {
    [sym_comment] = STATE(41),
    [ts_builtin_sym_end] = ACTIONS(199),
    [sym_identifier] = ACTIONS(201),
    [anon_sym_alias] = ACTIONS(201),
    [aux_sym_import_token1] = ACTIONS(201),
    [aux_sym_mod_token1] = ACTIONS(201),
    [anon_sym_LPAREN] = ACTIONS(199),
    [anon_sym_RPAREN] = ACTIONS(199),
    [anon_sym_arch] = ACTIONS(201),
    [anon_sym_num_cpus] = ACTIONS(201),
    [anon_sym_os] = ACTIONS(201),
    [anon_sym_os_family] = ACTIONS(201),
    [anon_sym_shell] = ACTIONS(201),
    [anon_sym_env_var] = ACTIONS(201),
    [anon_sym_env_var_or_default] = ACTIONS(201),
    [anon_sym_env] = ACTIONS(201),
    [anon_sym_is_dependency] = ACTIONS(201),
    [anon_sym_invocation_dir] = ACTIONS(201),
    [anon_sym_invocation_dir_native] = ACTIONS(201),
    [anon_sym_invocation_directory] = ACTIONS(201),
    [anon_sym_invocation_directory_native] = ACTIONS(201),
    [anon_sym_justfile] = ACTIONS(201),
    [anon_sym_justfile_dir] = ACTIONS(201),
    [anon_sym_justfile_directory] = ACTIONS(201),
    [anon_sym_source_dir] = ACTIONS(201),
    [anon_sym_source_directory] = ACTIONS(201),
    [anon_sym_source_file] = ACTIONS(201),
    [anon_sym_just_executable] = ACTIONS(201),
    [anon_sym_just_pid] = ACTIONS(201),
    [anon_sym_append] = ACTIONS(201),
    [anon_sym_prepend] = ACTIONS(201),
    [anon_sym_encode_uri_component] = ACTIONS(201),
    [anon_sym_quote] = ACTIONS(201),
    [anon_sym_replace] = ACTIONS(201),
    [anon_sym_replace_regex] = ACTIONS(201),
    [anon_sym_trim] = ACTIONS(201),
    [anon_sym_trim_end] = ACTIONS(201),
    [anon_sym_trim_end_match] = ACTIONS(201),
    [anon_sym_trim_end_matches] = ACTIONS(201),
    [anon_sym_trim_start] = ACTIONS(201),
    [anon_sym_trim_start_match] = ACTIONS(201),
    [anon_sym_trim_start_matches] = ACTIONS(201),
    [anon_sym_capitalize] = ACTIONS(201),
    [anon_sym_kebabcase] = ACTIONS(201),
    [anon_sym_lowercamelcase] = ACTIONS(201),
    [anon_sym_lowercase] = ACTIONS(201),
    [anon_sym_shoutykebabcase] = ACTIONS(201),
    [anon_sym_shoutysnakecase] = ACTIONS(201),
    [anon_sym_snakecase] = ACTIONS(201),
    [anon_sym_titlecase] = ACTIONS(201),
    [anon_sym_uppercamelcase] = ACTIONS(201),
    [anon_sym_uppercase] = ACTIONS(201),
    [anon_sym_absolute_path] = ACTIONS(201),
    [anon_sym_canonicalize] = ACTIONS(201),
    [anon_sym_extension] = ACTIONS(201),
    [anon_sym_file_name] = ACTIONS(201),
    [anon_sym_file_stem] = ACTIONS(201),
    [anon_sym_parent_directory] = ACTIONS(201),
    [anon_sym_without_extension] = ACTIONS(201),
    [anon_sym_clean] = ACTIONS(201),
    [anon_sym_join] = ACTIONS(201),
    [anon_sym_COMMA] = ACTIONS(199),
    [anon_sym_set] = ACTIONS(201),
    [anon_sym_BQUOTE] = ACTIONS(201),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(199),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(199),
    [anon_sym_DQUOTE] = ACTIONS(201),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(199),
    [anon_sym_SQUOTE] = ACTIONS(201),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [42] = {
    [sym_comment] = STATE(42),
    [ts_builtin_sym_end] = ACTIONS(203),
    [sym_identifier] = ACTIONS(205),
    [anon_sym_alias] = ACTIONS(205),
    [aux_sym_import_token1] = ACTIONS(205),
    [aux_sym_mod_token1] = ACTIONS(205),
    [anon_sym_LPAREN] = ACTIONS(203),
    [anon_sym_RPAREN] = ACTIONS(203),
    [anon_sym_arch] = ACTIONS(205),
    [anon_sym_num_cpus] = ACTIONS(205),
    [anon_sym_os] = ACTIONS(205),
    [anon_sym_os_family] = ACTIONS(205),
    [anon_sym_shell] = ACTIONS(205),
    [anon_sym_env_var] = ACTIONS(205),
    [anon_sym_env_var_or_default] = ACTIONS(205),
    [anon_sym_env] = ACTIONS(205),
    [anon_sym_is_dependency] = ACTIONS(205),
    [anon_sym_invocation_dir] = ACTIONS(205),
    [anon_sym_invocation_dir_native] = ACTIONS(205),
    [anon_sym_invocation_directory] = ACTIONS(205),
    [anon_sym_invocation_directory_native] = ACTIONS(205),
    [anon_sym_justfile] = ACTIONS(205),
    [anon_sym_justfile_dir] = ACTIONS(205),
    [anon_sym_justfile_directory] = ACTIONS(205),
    [anon_sym_source_dir] = ACTIONS(205),
    [anon_sym_source_directory] = ACTIONS(205),
    [anon_sym_source_file] = ACTIONS(205),
    [anon_sym_just_executable] = ACTIONS(205),
    [anon_sym_just_pid] = ACTIONS(205),
    [anon_sym_append] = ACTIONS(205),
    [anon_sym_prepend] = ACTIONS(205),
    [anon_sym_encode_uri_component] = ACTIONS(205),
    [anon_sym_quote] = ACTIONS(205),
    [anon_sym_replace] = ACTIONS(205),
    [anon_sym_replace_regex] = ACTIONS(205),
    [anon_sym_trim] = ACTIONS(205),
    [anon_sym_trim_end] = ACTIONS(205),
    [anon_sym_trim_end_match] = ACTIONS(205),
    [anon_sym_trim_end_matches] = ACTIONS(205),
    [anon_sym_trim_start] = ACTIONS(205),
    [anon_sym_trim_start_match] = ACTIONS(205),
    [anon_sym_trim_start_matches] = ACTIONS(205),
    [anon_sym_capitalize] = ACTIONS(205),
    [anon_sym_kebabcase] = ACTIONS(205),
    [anon_sym_lowercamelcase] = ACTIONS(205),
    [anon_sym_lowercase] = ACTIONS(205),
    [anon_sym_shoutykebabcase] = ACTIONS(205),
    [anon_sym_shoutysnakecase] = ACTIONS(205),
    [anon_sym_snakecase] = ACTIONS(205),
    [anon_sym_titlecase] = ACTIONS(205),
    [anon_sym_uppercamelcase] = ACTIONS(205),
    [anon_sym_uppercase] = ACTIONS(205),
    [anon_sym_absolute_path] = ACTIONS(205),
    [anon_sym_canonicalize] = ACTIONS(205),
    [anon_sym_extension] = ACTIONS(205),
    [anon_sym_file_name] = ACTIONS(205),
    [anon_sym_file_stem] = ACTIONS(205),
    [anon_sym_parent_directory] = ACTIONS(205),
    [anon_sym_without_extension] = ACTIONS(205),
    [anon_sym_clean] = ACTIONS(205),
    [anon_sym_join] = ACTIONS(205),
    [anon_sym_COMMA] = ACTIONS(203),
    [anon_sym_set] = ACTIONS(205),
    [anon_sym_BQUOTE] = ACTIONS(205),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(203),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(203),
    [anon_sym_DQUOTE] = ACTIONS(205),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(203),
    [anon_sym_SQUOTE] = ACTIONS(205),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [43] = {
    [sym_comment] = STATE(43),
    [ts_builtin_sym_end] = ACTIONS(207),
    [sym_identifier] = ACTIONS(209),
    [anon_sym_alias] = ACTIONS(209),
    [aux_sym_import_token1] = ACTIONS(209),
    [aux_sym_mod_token1] = ACTIONS(209),
    [anon_sym_LPAREN] = ACTIONS(207),
    [anon_sym_RPAREN] = ACTIONS(207),
    [anon_sym_arch] = ACTIONS(209),
    [anon_sym_num_cpus] = ACTIONS(209),
    [anon_sym_os] = ACTIONS(209),
    [anon_sym_os_family] = ACTIONS(209),
    [anon_sym_shell] = ACTIONS(209),
    [anon_sym_env_var] = ACTIONS(209),
    [anon_sym_env_var_or_default] = ACTIONS(209),
    [anon_sym_env] = ACTIONS(209),
    [anon_sym_is_dependency] = ACTIONS(209),
    [anon_sym_invocation_dir] = ACTIONS(209),
    [anon_sym_invocation_dir_native] = ACTIONS(209),
    [anon_sym_invocation_directory] = ACTIONS(209),
    [anon_sym_invocation_directory_native] = ACTIONS(209),
    [anon_sym_justfile] = ACTIONS(209),
    [anon_sym_justfile_dir] = ACTIONS(209),
    [anon_sym_justfile_directory] = ACTIONS(209),
    [anon_sym_source_dir] = ACTIONS(209),
    [anon_sym_source_directory] = ACTIONS(209),
    [anon_sym_source_file] = ACTIONS(209),
    [anon_sym_just_executable] = ACTIONS(209),
    [anon_sym_just_pid] = ACTIONS(209),
    [anon_sym_append] = ACTIONS(209),
    [anon_sym_prepend] = ACTIONS(209),
    [anon_sym_encode_uri_component] = ACTIONS(209),
    [anon_sym_quote] = ACTIONS(209),
    [anon_sym_replace] = ACTIONS(209),
    [anon_sym_replace_regex] = ACTIONS(209),
    [anon_sym_trim] = ACTIONS(209),
    [anon_sym_trim_end] = ACTIONS(209),
    [anon_sym_trim_end_match] = ACTIONS(209),
    [anon_sym_trim_end_matches] = ACTIONS(209),
    [anon_sym_trim_start] = ACTIONS(209),
    [anon_sym_trim_start_match] = ACTIONS(209),
    [anon_sym_trim_start_matches] = ACTIONS(209),
    [anon_sym_capitalize] = ACTIONS(209),
    [anon_sym_kebabcase] = ACTIONS(209),
    [anon_sym_lowercamelcase] = ACTIONS(209),
    [anon_sym_lowercase] = ACTIONS(209),
    [anon_sym_shoutykebabcase] = ACTIONS(209),
    [anon_sym_shoutysnakecase] = ACTIONS(209),
    [anon_sym_snakecase] = ACTIONS(209),
    [anon_sym_titlecase] = ACTIONS(209),
    [anon_sym_uppercamelcase] = ACTIONS(209),
    [anon_sym_uppercase] = ACTIONS(209),
    [anon_sym_absolute_path] = ACTIONS(209),
    [anon_sym_canonicalize] = ACTIONS(209),
    [anon_sym_extension] = ACTIONS(209),
    [anon_sym_file_name] = ACTIONS(209),
    [anon_sym_file_stem] = ACTIONS(209),
    [anon_sym_parent_directory] = ACTIONS(209),
    [anon_sym_without_extension] = ACTIONS(209),
    [anon_sym_clean] = ACTIONS(209),
    [anon_sym_join] = ACTIONS(209),
    [anon_sym_COMMA] = ACTIONS(207),
    [anon_sym_set] = ACTIONS(209),
    [anon_sym_BQUOTE] = ACTIONS(209),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(207),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(207),
    [anon_sym_DQUOTE] = ACTIONS(209),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(207),
    [anon_sym_SQUOTE] = ACTIONS(209),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [44] = {
    [sym_comment] = STATE(44),
    [ts_builtin_sym_end] = ACTIONS(211),
    [sym_identifier] = ACTIONS(213),
    [anon_sym_alias] = ACTIONS(213),
    [aux_sym_import_token1] = ACTIONS(213),
    [aux_sym_mod_token1] = ACTIONS(213),
    [anon_sym_LPAREN] = ACTIONS(211),
    [anon_sym_RPAREN] = ACTIONS(211),
    [anon_sym_arch] = ACTIONS(213),
    [anon_sym_num_cpus] = ACTIONS(213),
    [anon_sym_os] = ACTIONS(213),
    [anon_sym_os_family] = ACTIONS(213),
    [anon_sym_shell] = ACTIONS(213),
    [anon_sym_env_var] = ACTIONS(213),
    [anon_sym_env_var_or_default] = ACTIONS(213),
    [anon_sym_env] = ACTIONS(213),
    [anon_sym_is_dependency] = ACTIONS(213),
    [anon_sym_invocation_dir] = ACTIONS(213),
    [anon_sym_invocation_dir_native] = ACTIONS(213),
    [anon_sym_invocation_directory] = ACTIONS(213),
    [anon_sym_invocation_directory_native] = ACTIONS(213),
    [anon_sym_justfile] = ACTIONS(213),
    [anon_sym_justfile_dir] = ACTIONS(213),
    [anon_sym_justfile_directory] = ACTIONS(213),
    [anon_sym_source_dir] = ACTIONS(213),
    [anon_sym_source_directory] = ACTIONS(213),
    [anon_sym_source_file] = ACTIONS(213),
    [anon_sym_just_executable] = ACTIONS(213),
    [anon_sym_just_pid] = ACTIONS(213),
    [anon_sym_append] = ACTIONS(213),
    [anon_sym_prepend] = ACTIONS(213),
    [anon_sym_encode_uri_component] = ACTIONS(213),
    [anon_sym_quote] = ACTIONS(213),
    [anon_sym_replace] = ACTIONS(213),
    [anon_sym_replace_regex] = ACTIONS(213),
    [anon_sym_trim] = ACTIONS(213),
    [anon_sym_trim_end] = ACTIONS(213),
    [anon_sym_trim_end_match] = ACTIONS(213),
    [anon_sym_trim_end_matches] = ACTIONS(213),
    [anon_sym_trim_start] = ACTIONS(213),
    [anon_sym_trim_start_match] = ACTIONS(213),
    [anon_sym_trim_start_matches] = ACTIONS(213),
    [anon_sym_capitalize] = ACTIONS(213),
    [anon_sym_kebabcase] = ACTIONS(213),
    [anon_sym_lowercamelcase] = ACTIONS(213),
    [anon_sym_lowercase] = ACTIONS(213),
    [anon_sym_shoutykebabcase] = ACTIONS(213),
    [anon_sym_shoutysnakecase] = ACTIONS(213),
    [anon_sym_snakecase] = ACTIONS(213),
    [anon_sym_titlecase] = ACTIONS(213),
    [anon_sym_uppercamelcase] = ACTIONS(213),
    [anon_sym_uppercase] = ACTIONS(213),
    [anon_sym_absolute_path] = ACTIONS(213),
    [anon_sym_canonicalize] = ACTIONS(213),
    [anon_sym_extension] = ACTIONS(213),
    [anon_sym_file_name] = ACTIONS(213),
    [anon_sym_file_stem] = ACTIONS(213),
    [anon_sym_parent_directory] = ACTIONS(213),
    [anon_sym_without_extension] = ACTIONS(213),
    [anon_sym_clean] = ACTIONS(213),
    [anon_sym_join] = ACTIONS(213),
    [anon_sym_COMMA] = ACTIONS(211),
    [anon_sym_set] = ACTIONS(213),
    [anon_sym_BQUOTE] = ACTIONS(213),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(211),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(211),
    [anon_sym_DQUOTE] = ACTIONS(213),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(211),
    [anon_sym_SQUOTE] = ACTIONS(213),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [45] = {
    [sym_comment] = STATE(45),
    [ts_builtin_sym_end] = ACTIONS(215),
    [sym_identifier] = ACTIONS(217),
    [anon_sym_alias] = ACTIONS(217),
    [aux_sym_import_token1] = ACTIONS(217),
    [aux_sym_mod_token1] = ACTIONS(217),
    [anon_sym_LPAREN] = ACTIONS(215),
    [anon_sym_RPAREN] = ACTIONS(215),
    [anon_sym_arch] = ACTIONS(217),
    [anon_sym_num_cpus] = ACTIONS(217),
    [anon_sym_os] = ACTIONS(217),
    [anon_sym_os_family] = ACTIONS(217),
    [anon_sym_shell] = ACTIONS(217),
    [anon_sym_env_var] = ACTIONS(217),
    [anon_sym_env_var_or_default] = ACTIONS(217),
    [anon_sym_env] = ACTIONS(217),
    [anon_sym_is_dependency] = ACTIONS(217),
    [anon_sym_invocation_dir] = ACTIONS(217),
    [anon_sym_invocation_dir_native] = ACTIONS(217),
    [anon_sym_invocation_directory] = ACTIONS(217),
    [anon_sym_invocation_directory_native] = ACTIONS(217),
    [anon_sym_justfile] = ACTIONS(217),
    [anon_sym_justfile_dir] = ACTIONS(217),
    [anon_sym_justfile_directory] = ACTIONS(217),
    [anon_sym_source_dir] = ACTIONS(217),
    [anon_sym_source_directory] = ACTIONS(217),
    [anon_sym_source_file] = ACTIONS(217),
    [anon_sym_just_executable] = ACTIONS(217),
    [anon_sym_just_pid] = ACTIONS(217),
    [anon_sym_append] = ACTIONS(217),
    [anon_sym_prepend] = ACTIONS(217),
    [anon_sym_encode_uri_component] = ACTIONS(217),
    [anon_sym_quote] = ACTIONS(217),
    [anon_sym_replace] = ACTIONS(217),
    [anon_sym_replace_regex] = ACTIONS(217),
    [anon_sym_trim] = ACTIONS(217),
    [anon_sym_trim_end] = ACTIONS(217),
    [anon_sym_trim_end_match] = ACTIONS(217),
    [anon_sym_trim_end_matches] = ACTIONS(217),
    [anon_sym_trim_start] = ACTIONS(217),
    [anon_sym_trim_start_match] = ACTIONS(217),
    [anon_sym_trim_start_matches] = ACTIONS(217),
    [anon_sym_capitalize] = ACTIONS(217),
    [anon_sym_kebabcase] = ACTIONS(217),
    [anon_sym_lowercamelcase] = ACTIONS(217),
    [anon_sym_lowercase] = ACTIONS(217),
    [anon_sym_shoutykebabcase] = ACTIONS(217),
    [anon_sym_shoutysnakecase] = ACTIONS(217),
    [anon_sym_snakecase] = ACTIONS(217),
    [anon_sym_titlecase] = ACTIONS(217),
    [anon_sym_uppercamelcase] = ACTIONS(217),
    [anon_sym_uppercase] = ACTIONS(217),
    [anon_sym_absolute_path] = ACTIONS(217),
    [anon_sym_canonicalize] = ACTIONS(217),
    [anon_sym_extension] = ACTIONS(217),
    [anon_sym_file_name] = ACTIONS(217),
    [anon_sym_file_stem] = ACTIONS(217),
    [anon_sym_parent_directory] = ACTIONS(217),
    [anon_sym_without_extension] = ACTIONS(217),
    [anon_sym_clean] = ACTIONS(217),
    [anon_sym_join] = ACTIONS(217),
    [anon_sym_COMMA] = ACTIONS(215),
    [anon_sym_set] = ACTIONS(217),
    [anon_sym_BQUOTE] = ACTIONS(217),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(215),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(215),
    [anon_sym_DQUOTE] = ACTIONS(217),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(215),
    [anon_sym_SQUOTE] = ACTIONS(217),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [46] = {
    [sym_comment] = STATE(46),
    [ts_builtin_sym_end] = ACTIONS(219),
    [sym_identifier] = ACTIONS(221),
    [anon_sym_alias] = ACTIONS(221),
    [aux_sym_import_token1] = ACTIONS(221),
    [aux_sym_mod_token1] = ACTIONS(221),
    [anon_sym_LPAREN] = ACTIONS(219),
    [anon_sym_RPAREN] = ACTIONS(219),
    [anon_sym_arch] = ACTIONS(221),
    [anon_sym_num_cpus] = ACTIONS(221),
    [anon_sym_os] = ACTIONS(221),
    [anon_sym_os_family] = ACTIONS(221),
    [anon_sym_shell] = ACTIONS(221),
    [anon_sym_env_var] = ACTIONS(221),
    [anon_sym_env_var_or_default] = ACTIONS(221),
    [anon_sym_env] = ACTIONS(221),
    [anon_sym_is_dependency] = ACTIONS(221),
    [anon_sym_invocation_dir] = ACTIONS(221),
    [anon_sym_invocation_dir_native] = ACTIONS(221),
    [anon_sym_invocation_directory] = ACTIONS(221),
    [anon_sym_invocation_directory_native] = ACTIONS(221),
    [anon_sym_justfile] = ACTIONS(221),
    [anon_sym_justfile_dir] = ACTIONS(221),
    [anon_sym_justfile_directory] = ACTIONS(221),
    [anon_sym_source_dir] = ACTIONS(221),
    [anon_sym_source_directory] = ACTIONS(221),
    [anon_sym_source_file] = ACTIONS(221),
    [anon_sym_just_executable] = ACTIONS(221),
    [anon_sym_just_pid] = ACTIONS(221),
    [anon_sym_append] = ACTIONS(221),
    [anon_sym_prepend] = ACTIONS(221),
    [anon_sym_encode_uri_component] = ACTIONS(221),
    [anon_sym_quote] = ACTIONS(221),
    [anon_sym_replace] = ACTIONS(221),
    [anon_sym_replace_regex] = ACTIONS(221),
    [anon_sym_trim] = ACTIONS(221),
    [anon_sym_trim_end] = ACTIONS(221),
    [anon_sym_trim_end_match] = ACTIONS(221),
    [anon_sym_trim_end_matches] = ACTIONS(221),
    [anon_sym_trim_start] = ACTIONS(221),
    [anon_sym_trim_start_match] = ACTIONS(221),
    [anon_sym_trim_start_matches] = ACTIONS(221),
    [anon_sym_capitalize] = ACTIONS(221),
    [anon_sym_kebabcase] = ACTIONS(221),
    [anon_sym_lowercamelcase] = ACTIONS(221),
    [anon_sym_lowercase] = ACTIONS(221),
    [anon_sym_shoutykebabcase] = ACTIONS(221),
    [anon_sym_shoutysnakecase] = ACTIONS(221),
    [anon_sym_snakecase] = ACTIONS(221),
    [anon_sym_titlecase] = ACTIONS(221),
    [anon_sym_uppercamelcase] = ACTIONS(221),
    [anon_sym_uppercase] = ACTIONS(221),
    [anon_sym_absolute_path] = ACTIONS(221),
    [anon_sym_canonicalize] = ACTIONS(221),
    [anon_sym_extension] = ACTIONS(221),
    [anon_sym_file_name] = ACTIONS(221),
    [anon_sym_file_stem] = ACTIONS(221),
    [anon_sym_parent_directory] = ACTIONS(221),
    [anon_sym_without_extension] = ACTIONS(221),
    [anon_sym_clean] = ACTIONS(221),
    [anon_sym_join] = ACTIONS(221),
    [anon_sym_COMMA] = ACTIONS(219),
    [anon_sym_set] = ACTIONS(221),
    [anon_sym_BQUOTE] = ACTIONS(221),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(219),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(219),
    [anon_sym_DQUOTE] = ACTIONS(221),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(219),
    [anon_sym_SQUOTE] = ACTIONS(221),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [47] = {
    [sym_comment] = STATE(47),
    [ts_builtin_sym_end] = ACTIONS(223),
    [sym_identifier] = ACTIONS(225),
    [anon_sym_alias] = ACTIONS(225),
    [aux_sym_import_token1] = ACTIONS(225),
    [aux_sym_mod_token1] = ACTIONS(225),
    [anon_sym_LPAREN] = ACTIONS(223),
    [anon_sym_arch] = ACTIONS(225),
    [anon_sym_num_cpus] = ACTIONS(225),
    [anon_sym_os] = ACTIONS(225),
    [anon_sym_os_family] = ACTIONS(225),
    [anon_sym_shell] = ACTIONS(225),
    [anon_sym_env_var] = ACTIONS(225),
    [anon_sym_env_var_or_default] = ACTIONS(225),
    [anon_sym_env] = ACTIONS(225),
    [anon_sym_is_dependency] = ACTIONS(225),
    [anon_sym_invocation_dir] = ACTIONS(225),
    [anon_sym_invocation_dir_native] = ACTIONS(225),
    [anon_sym_invocation_directory] = ACTIONS(225),
    [anon_sym_invocation_directory_native] = ACTIONS(225),
    [anon_sym_justfile] = ACTIONS(225),
    [anon_sym_justfile_dir] = ACTIONS(225),
    [anon_sym_justfile_directory] = ACTIONS(225),
    [anon_sym_source_dir] = ACTIONS(225),
    [anon_sym_source_directory] = ACTIONS(225),
    [anon_sym_source_file] = ACTIONS(225),
    [anon_sym_just_executable] = ACTIONS(225),
    [anon_sym_just_pid] = ACTIONS(225),
    [anon_sym_append] = ACTIONS(225),
    [anon_sym_prepend] = ACTIONS(225),
    [anon_sym_encode_uri_component] = ACTIONS(225),
    [anon_sym_quote] = ACTIONS(225),
    [anon_sym_replace] = ACTIONS(225),
    [anon_sym_replace_regex] = ACTIONS(225),
    [anon_sym_trim] = ACTIONS(225),
    [anon_sym_trim_end] = ACTIONS(225),
    [anon_sym_trim_end_match] = ACTIONS(225),
    [anon_sym_trim_end_matches] = ACTIONS(225),
    [anon_sym_trim_start] = ACTIONS(225),
    [anon_sym_trim_start_match] = ACTIONS(225),
    [anon_sym_trim_start_matches] = ACTIONS(225),
    [anon_sym_capitalize] = ACTIONS(225),
    [anon_sym_kebabcase] = ACTIONS(225),
    [anon_sym_lowercamelcase] = ACTIONS(225),
    [anon_sym_lowercase] = ACTIONS(225),
    [anon_sym_shoutykebabcase] = ACTIONS(225),
    [anon_sym_shoutysnakecase] = ACTIONS(225),
    [anon_sym_snakecase] = ACTIONS(225),
    [anon_sym_titlecase] = ACTIONS(225),
    [anon_sym_uppercamelcase] = ACTIONS(225),
    [anon_sym_uppercase] = ACTIONS(225),
    [anon_sym_absolute_path] = ACTIONS(225),
    [anon_sym_canonicalize] = ACTIONS(225),
    [anon_sym_extension] = ACTIONS(225),
    [anon_sym_file_name] = ACTIONS(225),
    [anon_sym_file_stem] = ACTIONS(225),
    [anon_sym_parent_directory] = ACTIONS(225),
    [anon_sym_without_extension] = ACTIONS(225),
    [anon_sym_clean] = ACTIONS(225),
    [anon_sym_join] = ACTIONS(225),
    [anon_sym_set] = ACTIONS(225),
    [anon_sym_BQUOTE] = ACTIONS(225),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(223),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(223),
    [anon_sym_DQUOTE] = ACTIONS(225),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(223),
    [anon_sym_SQUOTE] = ACTIONS(225),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [48] = {
    [sym_comment] = STATE(48),
    [ts_builtin_sym_end] = ACTIONS(227),
    [sym_identifier] = ACTIONS(229),
    [anon_sym_alias] = ACTIONS(229),
    [aux_sym_import_token1] = ACTIONS(229),
    [aux_sym_mod_token1] = ACTIONS(229),
    [anon_sym_LPAREN] = ACTIONS(227),
    [anon_sym_arch] = ACTIONS(229),
    [anon_sym_num_cpus] = ACTIONS(229),
    [anon_sym_os] = ACTIONS(229),
    [anon_sym_os_family] = ACTIONS(229),
    [anon_sym_shell] = ACTIONS(229),
    [anon_sym_env_var] = ACTIONS(229),
    [anon_sym_env_var_or_default] = ACTIONS(229),
    [anon_sym_env] = ACTIONS(229),
    [anon_sym_is_dependency] = ACTIONS(229),
    [anon_sym_invocation_dir] = ACTIONS(229),
    [anon_sym_invocation_dir_native] = ACTIONS(229),
    [anon_sym_invocation_directory] = ACTIONS(229),
    [anon_sym_invocation_directory_native] = ACTIONS(229),
    [anon_sym_justfile] = ACTIONS(229),
    [anon_sym_justfile_dir] = ACTIONS(229),
    [anon_sym_justfile_directory] = ACTIONS(229),
    [anon_sym_source_dir] = ACTIONS(229),
    [anon_sym_source_directory] = ACTIONS(229),
    [anon_sym_source_file] = ACTIONS(229),
    [anon_sym_just_executable] = ACTIONS(229),
    [anon_sym_just_pid] = ACTIONS(229),
    [anon_sym_append] = ACTIONS(229),
    [anon_sym_prepend] = ACTIONS(229),
    [anon_sym_encode_uri_component] = ACTIONS(229),
    [anon_sym_quote] = ACTIONS(229),
    [anon_sym_replace] = ACTIONS(229),
    [anon_sym_replace_regex] = ACTIONS(229),
    [anon_sym_trim] = ACTIONS(229),
    [anon_sym_trim_end] = ACTIONS(229),
    [anon_sym_trim_end_match] = ACTIONS(229),
    [anon_sym_trim_end_matches] = ACTIONS(229),
    [anon_sym_trim_start] = ACTIONS(229),
    [anon_sym_trim_start_match] = ACTIONS(229),
    [anon_sym_trim_start_matches] = ACTIONS(229),
    [anon_sym_capitalize] = ACTIONS(229),
    [anon_sym_kebabcase] = ACTIONS(229),
    [anon_sym_lowercamelcase] = ACTIONS(229),
    [anon_sym_lowercase] = ACTIONS(229),
    [anon_sym_shoutykebabcase] = ACTIONS(229),
    [anon_sym_shoutysnakecase] = ACTIONS(229),
    [anon_sym_snakecase] = ACTIONS(229),
    [anon_sym_titlecase] = ACTIONS(229),
    [anon_sym_uppercamelcase] = ACTIONS(229),
    [anon_sym_uppercase] = ACTIONS(229),
    [anon_sym_absolute_path] = ACTIONS(229),
    [anon_sym_canonicalize] = ACTIONS(229),
    [anon_sym_extension] = ACTIONS(229),
    [anon_sym_file_name] = ACTIONS(229),
    [anon_sym_file_stem] = ACTIONS(229),
    [anon_sym_parent_directory] = ACTIONS(229),
    [anon_sym_without_extension] = ACTIONS(229),
    [anon_sym_clean] = ACTIONS(229),
    [anon_sym_join] = ACTIONS(229),
    [anon_sym_set] = ACTIONS(229),
    [anon_sym_BQUOTE] = ACTIONS(229),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(227),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(227),
    [anon_sym_DQUOTE] = ACTIONS(229),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(227),
    [anon_sym_SQUOTE] = ACTIONS(229),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [49] = {
    [sym_comment] = STATE(49),
    [ts_builtin_sym_end] = ACTIONS(231),
    [sym_identifier] = ACTIONS(233),
    [anon_sym_alias] = ACTIONS(233),
    [aux_sym_import_token1] = ACTIONS(233),
    [aux_sym_mod_token1] = ACTIONS(233),
    [anon_sym_LPAREN] = ACTIONS(231),
    [anon_sym_arch] = ACTIONS(233),
    [anon_sym_num_cpus] = ACTIONS(233),
    [anon_sym_os] = ACTIONS(233),
    [anon_sym_os_family] = ACTIONS(233),
    [anon_sym_shell] = ACTIONS(233),
    [anon_sym_env_var] = ACTIONS(233),
    [anon_sym_env_var_or_default] = ACTIONS(233),
    [anon_sym_env] = ACTIONS(233),
    [anon_sym_is_dependency] = ACTIONS(233),
    [anon_sym_invocation_dir] = ACTIONS(233),
    [anon_sym_invocation_dir_native] = ACTIONS(233),
    [anon_sym_invocation_directory] = ACTIONS(233),
    [anon_sym_invocation_directory_native] = ACTIONS(233),
    [anon_sym_justfile] = ACTIONS(233),
    [anon_sym_justfile_dir] = ACTIONS(233),
    [anon_sym_justfile_directory] = ACTIONS(233),
    [anon_sym_source_dir] = ACTIONS(233),
    [anon_sym_source_directory] = ACTIONS(233),
    [anon_sym_source_file] = ACTIONS(233),
    [anon_sym_just_executable] = ACTIONS(233),
    [anon_sym_just_pid] = ACTIONS(233),
    [anon_sym_append] = ACTIONS(233),
    [anon_sym_prepend] = ACTIONS(233),
    [anon_sym_encode_uri_component] = ACTIONS(233),
    [anon_sym_quote] = ACTIONS(233),
    [anon_sym_replace] = ACTIONS(233),
    [anon_sym_replace_regex] = ACTIONS(233),
    [anon_sym_trim] = ACTIONS(233),
    [anon_sym_trim_end] = ACTIONS(233),
    [anon_sym_trim_end_match] = ACTIONS(233),
    [anon_sym_trim_end_matches] = ACTIONS(233),
    [anon_sym_trim_start] = ACTIONS(233),
    [anon_sym_trim_start_match] = ACTIONS(233),
    [anon_sym_trim_start_matches] = ACTIONS(233),
    [anon_sym_capitalize] = ACTIONS(233),
    [anon_sym_kebabcase] = ACTIONS(233),
    [anon_sym_lowercamelcase] = ACTIONS(233),
    [anon_sym_lowercase] = ACTIONS(233),
    [anon_sym_shoutykebabcase] = ACTIONS(233),
    [anon_sym_shoutysnakecase] = ACTIONS(233),
    [anon_sym_snakecase] = ACTIONS(233),
    [anon_sym_titlecase] = ACTIONS(233),
    [anon_sym_uppercamelcase] = ACTIONS(233),
    [anon_sym_uppercase] = ACTIONS(233),
    [anon_sym_absolute_path] = ACTIONS(233),
    [anon_sym_canonicalize] = ACTIONS(233),
    [anon_sym_extension] = ACTIONS(233),
    [anon_sym_file_name] = ACTIONS(233),
    [anon_sym_file_stem] = ACTIONS(233),
    [anon_sym_parent_directory] = ACTIONS(233),
    [anon_sym_without_extension] = ACTIONS(233),
    [anon_sym_clean] = ACTIONS(233),
    [anon_sym_join] = ACTIONS(233),
    [anon_sym_set] = ACTIONS(233),
    [anon_sym_BQUOTE] = ACTIONS(233),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(231),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(231),
    [anon_sym_DQUOTE] = ACTIONS(233),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(231),
    [anon_sym_SQUOTE] = ACTIONS(233),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [50] = {
    [sym_comment] = STATE(50),
    [ts_builtin_sym_end] = ACTIONS(235),
    [sym_identifier] = ACTIONS(237),
    [anon_sym_alias] = ACTIONS(237),
    [aux_sym_import_token1] = ACTIONS(237),
    [aux_sym_mod_token1] = ACTIONS(237),
    [anon_sym_LPAREN] = ACTIONS(235),
    [anon_sym_arch] = ACTIONS(237),
    [anon_sym_num_cpus] = ACTIONS(237),
    [anon_sym_os] = ACTIONS(237),
    [anon_sym_os_family] = ACTIONS(237),
    [anon_sym_shell] = ACTIONS(237),
    [anon_sym_env_var] = ACTIONS(237),
    [anon_sym_env_var_or_default] = ACTIONS(237),
    [anon_sym_env] = ACTIONS(237),
    [anon_sym_is_dependency] = ACTIONS(237),
    [anon_sym_invocation_dir] = ACTIONS(237),
    [anon_sym_invocation_dir_native] = ACTIONS(237),
    [anon_sym_invocation_directory] = ACTIONS(237),
    [anon_sym_invocation_directory_native] = ACTIONS(237),
    [anon_sym_justfile] = ACTIONS(237),
    [anon_sym_justfile_dir] = ACTIONS(237),
    [anon_sym_justfile_directory] = ACTIONS(237),
    [anon_sym_source_dir] = ACTIONS(237),
    [anon_sym_source_directory] = ACTIONS(237),
    [anon_sym_source_file] = ACTIONS(237),
    [anon_sym_just_executable] = ACTIONS(237),
    [anon_sym_just_pid] = ACTIONS(237),
    [anon_sym_append] = ACTIONS(237),
    [anon_sym_prepend] = ACTIONS(237),
    [anon_sym_encode_uri_component] = ACTIONS(237),
    [anon_sym_quote] = ACTIONS(237),
    [anon_sym_replace] = ACTIONS(237),
    [anon_sym_replace_regex] = ACTIONS(237),
    [anon_sym_trim] = ACTIONS(237),
    [anon_sym_trim_end] = ACTIONS(237),
    [anon_sym_trim_end_match] = ACTIONS(237),
    [anon_sym_trim_end_matches] = ACTIONS(237),
    [anon_sym_trim_start] = ACTIONS(237),
    [anon_sym_trim_start_match] = ACTIONS(237),
    [anon_sym_trim_start_matches] = ACTIONS(237),
    [anon_sym_capitalize] = ACTIONS(237),
    [anon_sym_kebabcase] = ACTIONS(237),
    [anon_sym_lowercamelcase] = ACTIONS(237),
    [anon_sym_lowercase] = ACTIONS(237),
    [anon_sym_shoutykebabcase] = ACTIONS(237),
    [anon_sym_shoutysnakecase] = ACTIONS(237),
    [anon_sym_snakecase] = ACTIONS(237),
    [anon_sym_titlecase] = ACTIONS(237),
    [anon_sym_uppercamelcase] = ACTIONS(237),
    [anon_sym_uppercase] = ACTIONS(237),
    [anon_sym_absolute_path] = ACTIONS(237),
    [anon_sym_canonicalize] = ACTIONS(237),
    [anon_sym_extension] = ACTIONS(237),
    [anon_sym_file_name] = ACTIONS(237),
    [anon_sym_file_stem] = ACTIONS(237),
    [anon_sym_parent_directory] = ACTIONS(237),
    [anon_sym_without_extension] = ACTIONS(237),
    [anon_sym_clean] = ACTIONS(237),
    [anon_sym_join] = ACTIONS(237),
    [anon_sym_set] = ACTIONS(237),
    [anon_sym_BQUOTE] = ACTIONS(237),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(235),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(235),
    [anon_sym_DQUOTE] = ACTIONS(237),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(235),
    [anon_sym_SQUOTE] = ACTIONS(237),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [51] = {
    [sym_comment] = STATE(51),
    [ts_builtin_sym_end] = ACTIONS(239),
    [sym_identifier] = ACTIONS(241),
    [anon_sym_alias] = ACTIONS(241),
    [aux_sym_import_token1] = ACTIONS(241),
    [aux_sym_mod_token1] = ACTIONS(241),
    [anon_sym_LPAREN] = ACTIONS(239),
    [anon_sym_arch] = ACTIONS(241),
    [anon_sym_num_cpus] = ACTIONS(241),
    [anon_sym_os] = ACTIONS(241),
    [anon_sym_os_family] = ACTIONS(241),
    [anon_sym_shell] = ACTIONS(241),
    [anon_sym_env_var] = ACTIONS(241),
    [anon_sym_env_var_or_default] = ACTIONS(241),
    [anon_sym_env] = ACTIONS(241),
    [anon_sym_is_dependency] = ACTIONS(241),
    [anon_sym_invocation_dir] = ACTIONS(241),
    [anon_sym_invocation_dir_native] = ACTIONS(241),
    [anon_sym_invocation_directory] = ACTIONS(241),
    [anon_sym_invocation_directory_native] = ACTIONS(241),
    [anon_sym_justfile] = ACTIONS(241),
    [anon_sym_justfile_dir] = ACTIONS(241),
    [anon_sym_justfile_directory] = ACTIONS(241),
    [anon_sym_source_dir] = ACTIONS(241),
    [anon_sym_source_directory] = ACTIONS(241),
    [anon_sym_source_file] = ACTIONS(241),
    [anon_sym_just_executable] = ACTIONS(241),
    [anon_sym_just_pid] = ACTIONS(241),
    [anon_sym_append] = ACTIONS(241),
    [anon_sym_prepend] = ACTIONS(241),
    [anon_sym_encode_uri_component] = ACTIONS(241),
    [anon_sym_quote] = ACTIONS(241),
    [anon_sym_replace] = ACTIONS(241),
    [anon_sym_replace_regex] = ACTIONS(241),
    [anon_sym_trim] = ACTIONS(241),
    [anon_sym_trim_end] = ACTIONS(241),
    [anon_sym_trim_end_match] = ACTIONS(241),
    [anon_sym_trim_end_matches] = ACTIONS(241),
    [anon_sym_trim_start] = ACTIONS(241),
    [anon_sym_trim_start_match] = ACTIONS(241),
    [anon_sym_trim_start_matches] = ACTIONS(241),
    [anon_sym_capitalize] = ACTIONS(241),
    [anon_sym_kebabcase] = ACTIONS(241),
    [anon_sym_lowercamelcase] = ACTIONS(241),
    [anon_sym_lowercase] = ACTIONS(241),
    [anon_sym_shoutykebabcase] = ACTIONS(241),
    [anon_sym_shoutysnakecase] = ACTIONS(241),
    [anon_sym_snakecase] = ACTIONS(241),
    [anon_sym_titlecase] = ACTIONS(241),
    [anon_sym_uppercamelcase] = ACTIONS(241),
    [anon_sym_uppercase] = ACTIONS(241),
    [anon_sym_absolute_path] = ACTIONS(241),
    [anon_sym_canonicalize] = ACTIONS(241),
    [anon_sym_extension] = ACTIONS(241),
    [anon_sym_file_name] = ACTIONS(241),
    [anon_sym_file_stem] = ACTIONS(241),
    [anon_sym_parent_directory] = ACTIONS(241),
    [anon_sym_without_extension] = ACTIONS(241),
    [anon_sym_clean] = ACTIONS(241),
    [anon_sym_join] = ACTIONS(241),
    [anon_sym_set] = ACTIONS(241),
    [anon_sym_BQUOTE] = ACTIONS(241),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(239),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(239),
    [anon_sym_DQUOTE] = ACTIONS(241),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(239),
    [anon_sym_SQUOTE] = ACTIONS(241),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [52] = {
    [sym_comment] = STATE(52),
    [ts_builtin_sym_end] = ACTIONS(243),
    [sym_identifier] = ACTIONS(245),
    [anon_sym_alias] = ACTIONS(245),
    [aux_sym_import_token1] = ACTIONS(245),
    [aux_sym_mod_token1] = ACTIONS(245),
    [anon_sym_LPAREN] = ACTIONS(243),
    [anon_sym_arch] = ACTIONS(245),
    [anon_sym_num_cpus] = ACTIONS(245),
    [anon_sym_os] = ACTIONS(245),
    [anon_sym_os_family] = ACTIONS(245),
    [anon_sym_shell] = ACTIONS(245),
    [anon_sym_env_var] = ACTIONS(245),
    [anon_sym_env_var_or_default] = ACTIONS(245),
    [anon_sym_env] = ACTIONS(245),
    [anon_sym_is_dependency] = ACTIONS(245),
    [anon_sym_invocation_dir] = ACTIONS(245),
    [anon_sym_invocation_dir_native] = ACTIONS(245),
    [anon_sym_invocation_directory] = ACTIONS(245),
    [anon_sym_invocation_directory_native] = ACTIONS(245),
    [anon_sym_justfile] = ACTIONS(245),
    [anon_sym_justfile_dir] = ACTIONS(245),
    [anon_sym_justfile_directory] = ACTIONS(245),
    [anon_sym_source_dir] = ACTIONS(245),
    [anon_sym_source_directory] = ACTIONS(245),
    [anon_sym_source_file] = ACTIONS(245),
    [anon_sym_just_executable] = ACTIONS(245),
    [anon_sym_just_pid] = ACTIONS(245),
    [anon_sym_append] = ACTIONS(245),
    [anon_sym_prepend] = ACTIONS(245),
    [anon_sym_encode_uri_component] = ACTIONS(245),
    [anon_sym_quote] = ACTIONS(245),
    [anon_sym_replace] = ACTIONS(245),
    [anon_sym_replace_regex] = ACTIONS(245),
    [anon_sym_trim] = ACTIONS(245),
    [anon_sym_trim_end] = ACTIONS(245),
    [anon_sym_trim_end_match] = ACTIONS(245),
    [anon_sym_trim_end_matches] = ACTIONS(245),
    [anon_sym_trim_start] = ACTIONS(245),
    [anon_sym_trim_start_match] = ACTIONS(245),
    [anon_sym_trim_start_matches] = ACTIONS(245),
    [anon_sym_capitalize] = ACTIONS(245),
    [anon_sym_kebabcase] = ACTIONS(245),
    [anon_sym_lowercamelcase] = ACTIONS(245),
    [anon_sym_lowercase] = ACTIONS(245),
    [anon_sym_shoutykebabcase] = ACTIONS(245),
    [anon_sym_shoutysnakecase] = ACTIONS(245),
    [anon_sym_snakecase] = ACTIONS(245),
    [anon_sym_titlecase] = ACTIONS(245),
    [anon_sym_uppercamelcase] = ACTIONS(245),
    [anon_sym_uppercase] = ACTIONS(245),
    [anon_sym_absolute_path] = ACTIONS(245),
    [anon_sym_canonicalize] = ACTIONS(245),
    [anon_sym_extension] = ACTIONS(245),
    [anon_sym_file_name] = ACTIONS(245),
    [anon_sym_file_stem] = ACTIONS(245),
    [anon_sym_parent_directory] = ACTIONS(245),
    [anon_sym_without_extension] = ACTIONS(245),
    [anon_sym_clean] = ACTIONS(245),
    [anon_sym_join] = ACTIONS(245),
    [anon_sym_set] = ACTIONS(245),
    [anon_sym_BQUOTE] = ACTIONS(245),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(243),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(243),
    [anon_sym_DQUOTE] = ACTIONS(245),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(243),
    [anon_sym_SQUOTE] = ACTIONS(245),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [53] = {
    [sym_comment] = STATE(53),
    [ts_builtin_sym_end] = ACTIONS(247),
    [sym_identifier] = ACTIONS(249),
    [anon_sym_alias] = ACTIONS(249),
    [aux_sym_import_token1] = ACTIONS(249),
    [aux_sym_mod_token1] = ACTIONS(249),
    [anon_sym_LPAREN] = ACTIONS(247),
    [anon_sym_arch] = ACTIONS(249),
    [anon_sym_num_cpus] = ACTIONS(249),
    [anon_sym_os] = ACTIONS(249),
    [anon_sym_os_family] = ACTIONS(249),
    [anon_sym_shell] = ACTIONS(249),
    [anon_sym_env_var] = ACTIONS(249),
    [anon_sym_env_var_or_default] = ACTIONS(249),
    [anon_sym_env] = ACTIONS(249),
    [anon_sym_is_dependency] = ACTIONS(249),
    [anon_sym_invocation_dir] = ACTIONS(249),
    [anon_sym_invocation_dir_native] = ACTIONS(249),
    [anon_sym_invocation_directory] = ACTIONS(249),
    [anon_sym_invocation_directory_native] = ACTIONS(249),
    [anon_sym_justfile] = ACTIONS(249),
    [anon_sym_justfile_dir] = ACTIONS(249),
    [anon_sym_justfile_directory] = ACTIONS(249),
    [anon_sym_source_dir] = ACTIONS(249),
    [anon_sym_source_directory] = ACTIONS(249),
    [anon_sym_source_file] = ACTIONS(249),
    [anon_sym_just_executable] = ACTIONS(249),
    [anon_sym_just_pid] = ACTIONS(249),
    [anon_sym_append] = ACTIONS(249),
    [anon_sym_prepend] = ACTIONS(249),
    [anon_sym_encode_uri_component] = ACTIONS(249),
    [anon_sym_quote] = ACTIONS(249),
    [anon_sym_replace] = ACTIONS(249),
    [anon_sym_replace_regex] = ACTIONS(249),
    [anon_sym_trim] = ACTIONS(249),
    [anon_sym_trim_end] = ACTIONS(249),
    [anon_sym_trim_end_match] = ACTIONS(249),
    [anon_sym_trim_end_matches] = ACTIONS(249),
    [anon_sym_trim_start] = ACTIONS(249),
    [anon_sym_trim_start_match] = ACTIONS(249),
    [anon_sym_trim_start_matches] = ACTIONS(249),
    [anon_sym_capitalize] = ACTIONS(249),
    [anon_sym_kebabcase] = ACTIONS(249),
    [anon_sym_lowercamelcase] = ACTIONS(249),
    [anon_sym_lowercase] = ACTIONS(249),
    [anon_sym_shoutykebabcase] = ACTIONS(249),
    [anon_sym_shoutysnakecase] = ACTIONS(249),
    [anon_sym_snakecase] = ACTIONS(249),
    [anon_sym_titlecase] = ACTIONS(249),
    [anon_sym_uppercamelcase] = ACTIONS(249),
    [anon_sym_uppercase] = ACTIONS(249),
    [anon_sym_absolute_path] = ACTIONS(249),
    [anon_sym_canonicalize] = ACTIONS(249),
    [anon_sym_extension] = ACTIONS(249),
    [anon_sym_file_name] = ACTIONS(249),
    [anon_sym_file_stem] = ACTIONS(249),
    [anon_sym_parent_directory] = ACTIONS(249),
    [anon_sym_without_extension] = ACTIONS(249),
    [anon_sym_clean] = ACTIONS(249),
    [anon_sym_join] = ACTIONS(249),
    [anon_sym_set] = ACTIONS(249),
    [anon_sym_BQUOTE] = ACTIONS(249),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(247),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(247),
    [anon_sym_DQUOTE] = ACTIONS(249),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(247),
    [anon_sym_SQUOTE] = ACTIONS(249),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [54] = {
    [sym_comment] = STATE(54),
    [ts_builtin_sym_end] = ACTIONS(251),
    [sym_identifier] = ACTIONS(253),
    [anon_sym_alias] = ACTIONS(253),
    [aux_sym_import_token1] = ACTIONS(253),
    [aux_sym_mod_token1] = ACTIONS(253),
    [anon_sym_LPAREN] = ACTIONS(251),
    [anon_sym_arch] = ACTIONS(253),
    [anon_sym_num_cpus] = ACTIONS(253),
    [anon_sym_os] = ACTIONS(253),
    [anon_sym_os_family] = ACTIONS(253),
    [anon_sym_shell] = ACTIONS(253),
    [anon_sym_env_var] = ACTIONS(253),
    [anon_sym_env_var_or_default] = ACTIONS(253),
    [anon_sym_env] = ACTIONS(253),
    [anon_sym_is_dependency] = ACTIONS(253),
    [anon_sym_invocation_dir] = ACTIONS(253),
    [anon_sym_invocation_dir_native] = ACTIONS(253),
    [anon_sym_invocation_directory] = ACTIONS(253),
    [anon_sym_invocation_directory_native] = ACTIONS(253),
    [anon_sym_justfile] = ACTIONS(253),
    [anon_sym_justfile_dir] = ACTIONS(253),
    [anon_sym_justfile_directory] = ACTIONS(253),
    [anon_sym_source_dir] = ACTIONS(253),
    [anon_sym_source_directory] = ACTIONS(253),
    [anon_sym_source_file] = ACTIONS(253),
    [anon_sym_just_executable] = ACTIONS(253),
    [anon_sym_just_pid] = ACTIONS(253),
    [anon_sym_append] = ACTIONS(253),
    [anon_sym_prepend] = ACTIONS(253),
    [anon_sym_encode_uri_component] = ACTIONS(253),
    [anon_sym_quote] = ACTIONS(253),
    [anon_sym_replace] = ACTIONS(253),
    [anon_sym_replace_regex] = ACTIONS(253),
    [anon_sym_trim] = ACTIONS(253),
    [anon_sym_trim_end] = ACTIONS(253),
    [anon_sym_trim_end_match] = ACTIONS(253),
    [anon_sym_trim_end_matches] = ACTIONS(253),
    [anon_sym_trim_start] = ACTIONS(253),
    [anon_sym_trim_start_match] = ACTIONS(253),
    [anon_sym_trim_start_matches] = ACTIONS(253),
    [anon_sym_capitalize] = ACTIONS(253),
    [anon_sym_kebabcase] = ACTIONS(253),
    [anon_sym_lowercamelcase] = ACTIONS(253),
    [anon_sym_lowercase] = ACTIONS(253),
    [anon_sym_shoutykebabcase] = ACTIONS(253),
    [anon_sym_shoutysnakecase] = ACTIONS(253),
    [anon_sym_snakecase] = ACTIONS(253),
    [anon_sym_titlecase] = ACTIONS(253),
    [anon_sym_uppercamelcase] = ACTIONS(253),
    [anon_sym_uppercase] = ACTIONS(253),
    [anon_sym_absolute_path] = ACTIONS(253),
    [anon_sym_canonicalize] = ACTIONS(253),
    [anon_sym_extension] = ACTIONS(253),
    [anon_sym_file_name] = ACTIONS(253),
    [anon_sym_file_stem] = ACTIONS(253),
    [anon_sym_parent_directory] = ACTIONS(253),
    [anon_sym_without_extension] = ACTIONS(253),
    [anon_sym_clean] = ACTIONS(253),
    [anon_sym_join] = ACTIONS(253),
    [anon_sym_set] = ACTIONS(253),
    [anon_sym_BQUOTE] = ACTIONS(253),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(251),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(251),
    [anon_sym_DQUOTE] = ACTIONS(253),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(251),
    [anon_sym_SQUOTE] = ACTIONS(253),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [55] = {
    [sym_comment] = STATE(55),
    [ts_builtin_sym_end] = ACTIONS(255),
    [sym_identifier] = ACTIONS(257),
    [anon_sym_alias] = ACTIONS(257),
    [aux_sym_import_token1] = ACTIONS(257),
    [aux_sym_mod_token1] = ACTIONS(257),
    [anon_sym_LPAREN] = ACTIONS(255),
    [anon_sym_arch] = ACTIONS(257),
    [anon_sym_num_cpus] = ACTIONS(257),
    [anon_sym_os] = ACTIONS(257),
    [anon_sym_os_family] = ACTIONS(257),
    [anon_sym_shell] = ACTIONS(257),
    [anon_sym_env_var] = ACTIONS(257),
    [anon_sym_env_var_or_default] = ACTIONS(257),
    [anon_sym_env] = ACTIONS(257),
    [anon_sym_is_dependency] = ACTIONS(257),
    [anon_sym_invocation_dir] = ACTIONS(257),
    [anon_sym_invocation_dir_native] = ACTIONS(257),
    [anon_sym_invocation_directory] = ACTIONS(257),
    [anon_sym_invocation_directory_native] = ACTIONS(257),
    [anon_sym_justfile] = ACTIONS(257),
    [anon_sym_justfile_dir] = ACTIONS(257),
    [anon_sym_justfile_directory] = ACTIONS(257),
    [anon_sym_source_dir] = ACTIONS(257),
    [anon_sym_source_directory] = ACTIONS(257),
    [anon_sym_source_file] = ACTIONS(257),
    [anon_sym_just_executable] = ACTIONS(257),
    [anon_sym_just_pid] = ACTIONS(257),
    [anon_sym_append] = ACTIONS(257),
    [anon_sym_prepend] = ACTIONS(257),
    [anon_sym_encode_uri_component] = ACTIONS(257),
    [anon_sym_quote] = ACTIONS(257),
    [anon_sym_replace] = ACTIONS(257),
    [anon_sym_replace_regex] = ACTIONS(257),
    [anon_sym_trim] = ACTIONS(257),
    [anon_sym_trim_end] = ACTIONS(257),
    [anon_sym_trim_end_match] = ACTIONS(257),
    [anon_sym_trim_end_matches] = ACTIONS(257),
    [anon_sym_trim_start] = ACTIONS(257),
    [anon_sym_trim_start_match] = ACTIONS(257),
    [anon_sym_trim_start_matches] = ACTIONS(257),
    [anon_sym_capitalize] = ACTIONS(257),
    [anon_sym_kebabcase] = ACTIONS(257),
    [anon_sym_lowercamelcase] = ACTIONS(257),
    [anon_sym_lowercase] = ACTIONS(257),
    [anon_sym_shoutykebabcase] = ACTIONS(257),
    [anon_sym_shoutysnakecase] = ACTIONS(257),
    [anon_sym_snakecase] = ACTIONS(257),
    [anon_sym_titlecase] = ACTIONS(257),
    [anon_sym_uppercamelcase] = ACTIONS(257),
    [anon_sym_uppercase] = ACTIONS(257),
    [anon_sym_absolute_path] = ACTIONS(257),
    [anon_sym_canonicalize] = ACTIONS(257),
    [anon_sym_extension] = ACTIONS(257),
    [anon_sym_file_name] = ACTIONS(257),
    [anon_sym_file_stem] = ACTIONS(257),
    [anon_sym_parent_directory] = ACTIONS(257),
    [anon_sym_without_extension] = ACTIONS(257),
    [anon_sym_clean] = ACTIONS(257),
    [anon_sym_join] = ACTIONS(257),
    [anon_sym_set] = ACTIONS(257),
    [anon_sym_BQUOTE] = ACTIONS(257),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(255),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(255),
    [anon_sym_DQUOTE] = ACTIONS(257),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(255),
    [anon_sym_SQUOTE] = ACTIONS(257),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [56] = {
    [sym_comment] = STATE(56),
    [ts_builtin_sym_end] = ACTIONS(259),
    [sym_identifier] = ACTIONS(261),
    [anon_sym_alias] = ACTIONS(261),
    [aux_sym_import_token1] = ACTIONS(261),
    [aux_sym_mod_token1] = ACTIONS(261),
    [anon_sym_LPAREN] = ACTIONS(259),
    [anon_sym_arch] = ACTIONS(261),
    [anon_sym_num_cpus] = ACTIONS(261),
    [anon_sym_os] = ACTIONS(261),
    [anon_sym_os_family] = ACTIONS(261),
    [anon_sym_shell] = ACTIONS(261),
    [anon_sym_env_var] = ACTIONS(261),
    [anon_sym_env_var_or_default] = ACTIONS(261),
    [anon_sym_env] = ACTIONS(261),
    [anon_sym_is_dependency] = ACTIONS(261),
    [anon_sym_invocation_dir] = ACTIONS(261),
    [anon_sym_invocation_dir_native] = ACTIONS(261),
    [anon_sym_invocation_directory] = ACTIONS(261),
    [anon_sym_invocation_directory_native] = ACTIONS(261),
    [anon_sym_justfile] = ACTIONS(261),
    [anon_sym_justfile_dir] = ACTIONS(261),
    [anon_sym_justfile_directory] = ACTIONS(261),
    [anon_sym_source_dir] = ACTIONS(261),
    [anon_sym_source_directory] = ACTIONS(261),
    [anon_sym_source_file] = ACTIONS(261),
    [anon_sym_just_executable] = ACTIONS(261),
    [anon_sym_just_pid] = ACTIONS(261),
    [anon_sym_append] = ACTIONS(261),
    [anon_sym_prepend] = ACTIONS(261),
    [anon_sym_encode_uri_component] = ACTIONS(261),
    [anon_sym_quote] = ACTIONS(261),
    [anon_sym_replace] = ACTIONS(261),
    [anon_sym_replace_regex] = ACTIONS(261),
    [anon_sym_trim] = ACTIONS(261),
    [anon_sym_trim_end] = ACTIONS(261),
    [anon_sym_trim_end_match] = ACTIONS(261),
    [anon_sym_trim_end_matches] = ACTIONS(261),
    [anon_sym_trim_start] = ACTIONS(261),
    [anon_sym_trim_start_match] = ACTIONS(261),
    [anon_sym_trim_start_matches] = ACTIONS(261),
    [anon_sym_capitalize] = ACTIONS(261),
    [anon_sym_kebabcase] = ACTIONS(261),
    [anon_sym_lowercamelcase] = ACTIONS(261),
    [anon_sym_lowercase] = ACTIONS(261),
    [anon_sym_shoutykebabcase] = ACTIONS(261),
    [anon_sym_shoutysnakecase] = ACTIONS(261),
    [anon_sym_snakecase] = ACTIONS(261),
    [anon_sym_titlecase] = ACTIONS(261),
    [anon_sym_uppercamelcase] = ACTIONS(261),
    [anon_sym_uppercase] = ACTIONS(261),
    [anon_sym_absolute_path] = ACTIONS(261),
    [anon_sym_canonicalize] = ACTIONS(261),
    [anon_sym_extension] = ACTIONS(261),
    [anon_sym_file_name] = ACTIONS(261),
    [anon_sym_file_stem] = ACTIONS(261),
    [anon_sym_parent_directory] = ACTIONS(261),
    [anon_sym_without_extension] = ACTIONS(261),
    [anon_sym_clean] = ACTIONS(261),
    [anon_sym_join] = ACTIONS(261),
    [anon_sym_set] = ACTIONS(261),
    [anon_sym_BQUOTE] = ACTIONS(261),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(259),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(259),
    [anon_sym_DQUOTE] = ACTIONS(261),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(259),
    [anon_sym_SQUOTE] = ACTIONS(261),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [57] = {
    [sym_comment] = STATE(57),
    [ts_builtin_sym_end] = ACTIONS(263),
    [sym_identifier] = ACTIONS(265),
    [anon_sym_alias] = ACTIONS(265),
    [aux_sym_import_token1] = ACTIONS(265),
    [aux_sym_mod_token1] = ACTIONS(265),
    [anon_sym_LPAREN] = ACTIONS(263),
    [anon_sym_arch] = ACTIONS(265),
    [anon_sym_num_cpus] = ACTIONS(265),
    [anon_sym_os] = ACTIONS(265),
    [anon_sym_os_family] = ACTIONS(265),
    [anon_sym_shell] = ACTIONS(265),
    [anon_sym_env_var] = ACTIONS(265),
    [anon_sym_env_var_or_default] = ACTIONS(265),
    [anon_sym_env] = ACTIONS(265),
    [anon_sym_is_dependency] = ACTIONS(265),
    [anon_sym_invocation_dir] = ACTIONS(265),
    [anon_sym_invocation_dir_native] = ACTIONS(265),
    [anon_sym_invocation_directory] = ACTIONS(265),
    [anon_sym_invocation_directory_native] = ACTIONS(265),
    [anon_sym_justfile] = ACTIONS(265),
    [anon_sym_justfile_dir] = ACTIONS(265),
    [anon_sym_justfile_directory] = ACTIONS(265),
    [anon_sym_source_dir] = ACTIONS(265),
    [anon_sym_source_directory] = ACTIONS(265),
    [anon_sym_source_file] = ACTIONS(265),
    [anon_sym_just_executable] = ACTIONS(265),
    [anon_sym_just_pid] = ACTIONS(265),
    [anon_sym_append] = ACTIONS(265),
    [anon_sym_prepend] = ACTIONS(265),
    [anon_sym_encode_uri_component] = ACTIONS(265),
    [anon_sym_quote] = ACTIONS(265),
    [anon_sym_replace] = ACTIONS(265),
    [anon_sym_replace_regex] = ACTIONS(265),
    [anon_sym_trim] = ACTIONS(265),
    [anon_sym_trim_end] = ACTIONS(265),
    [anon_sym_trim_end_match] = ACTIONS(265),
    [anon_sym_trim_end_matches] = ACTIONS(265),
    [anon_sym_trim_start] = ACTIONS(265),
    [anon_sym_trim_start_match] = ACTIONS(265),
    [anon_sym_trim_start_matches] = ACTIONS(265),
    [anon_sym_capitalize] = ACTIONS(265),
    [anon_sym_kebabcase] = ACTIONS(265),
    [anon_sym_lowercamelcase] = ACTIONS(265),
    [anon_sym_lowercase] = ACTIONS(265),
    [anon_sym_shoutykebabcase] = ACTIONS(265),
    [anon_sym_shoutysnakecase] = ACTIONS(265),
    [anon_sym_snakecase] = ACTIONS(265),
    [anon_sym_titlecase] = ACTIONS(265),
    [anon_sym_uppercamelcase] = ACTIONS(265),
    [anon_sym_uppercase] = ACTIONS(265),
    [anon_sym_absolute_path] = ACTIONS(265),
    [anon_sym_canonicalize] = ACTIONS(265),
    [anon_sym_extension] = ACTIONS(265),
    [anon_sym_file_name] = ACTIONS(265),
    [anon_sym_file_stem] = ACTIONS(265),
    [anon_sym_parent_directory] = ACTIONS(265),
    [anon_sym_without_extension] = ACTIONS(265),
    [anon_sym_clean] = ACTIONS(265),
    [anon_sym_join] = ACTIONS(265),
    [anon_sym_set] = ACTIONS(265),
    [anon_sym_BQUOTE] = ACTIONS(265),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(263),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(263),
    [anon_sym_DQUOTE] = ACTIONS(265),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(263),
    [anon_sym_SQUOTE] = ACTIONS(265),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(267), 1,
      sym_identifier,
    STATE(58), 1,
      sym_comment,
    ACTIONS(269), 2,
      anon_sym_shell,
      anon_sym_windows_DASHshell,
    ACTIONS(273), 3,
      anon_sym_dotenv_DASHfilename,
      anon_sym_dotenv_DASHpath,
      anon_sym_tempdir,
    ACTIONS(271), 10,
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
  [31] = 11,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(35), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(275), 1,
      anon_sym_LBRACK,
    STATE(53), 1,
      sym_string,
    STATE(54), 1,
      sym_boolean,
    STATE(59), 1,
      sym_comment,
    ACTIONS(277), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(27), 4,
      sym_indented_normal_string,
      sym_normal_string,
      sym_indented_raw_string,
      sym_raw_string,
  [69] = 9,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(35), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(279), 1,
      anon_sym_RBRACK,
    STATE(60), 1,
      sym_comment,
    STATE(103), 1,
      sym_string,
    STATE(27), 4,
      sym_indented_normal_string,
      sym_normal_string,
      sym_indented_raw_string,
      sym_raw_string,
  [100] = 9,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(35), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(281), 1,
      anon_sym_RBRACK,
    STATE(61), 1,
      sym_comment,
    STATE(103), 1,
      sym_string,
    STATE(27), 4,
      sym_indented_normal_string,
      sym_normal_string,
      sym_indented_raw_string,
      sym_raw_string,
  [131] = 7,
    ACTIONS(283), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(285), 1,
      aux_sym_indented_normal_string_token1,
    ACTIONS(289), 1,
      aux_sym_comment_token1,
    STATE(62), 1,
      sym_comment,
    STATE(66), 1,
      aux_sym_indented_normal_string_repeat1,
    STATE(75), 1,
      sym_escape_sequence,
    ACTIONS(287), 5,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
  [157] = 8,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(35), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    STATE(51), 1,
      sym_string,
    STATE(63), 1,
      sym_comment,
    STATE(27), 4,
      sym_indented_normal_string,
      sym_normal_string,
      sym_indented_raw_string,
      sym_raw_string,
  [185] = 8,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(35), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    STATE(64), 1,
      sym_comment,
    STATE(84), 1,
      sym_string,
    STATE(27), 4,
      sym_indented_normal_string,
      sym_normal_string,
      sym_indented_raw_string,
      sym_raw_string,
  [213] = 7,
    ACTIONS(289), 1,
      aux_sym_comment_token1,
    ACTIONS(291), 1,
      anon_sym_DQUOTE,
    ACTIONS(293), 1,
      aux_sym_normal_string_token1,
    STATE(65), 1,
      sym_comment,
    STATE(67), 1,
      aux_sym_normal_string_repeat1,
    STATE(73), 1,
      sym_escape_sequence,
    ACTIONS(295), 5,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
  [239] = 7,
    ACTIONS(285), 1,
      aux_sym_indented_normal_string_token1,
    ACTIONS(289), 1,
      aux_sym_comment_token1,
    ACTIONS(297), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(66), 1,
      sym_comment,
    STATE(68), 1,
      aux_sym_indented_normal_string_repeat1,
    STATE(75), 1,
      sym_escape_sequence,
    ACTIONS(287), 5,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
  [265] = 6,
    ACTIONS(289), 1,
      aux_sym_comment_token1,
    ACTIONS(299), 1,
      anon_sym_DQUOTE,
    ACTIONS(301), 1,
      aux_sym_normal_string_token1,
    STATE(73), 1,
      sym_escape_sequence,
    STATE(67), 2,
      sym_comment,
      aux_sym_normal_string_repeat1,
    ACTIONS(304), 5,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
  [289] = 6,
    ACTIONS(289), 1,
      aux_sym_comment_token1,
    ACTIONS(307), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(309), 1,
      aux_sym_indented_normal_string_token1,
    STATE(75), 1,
      sym_escape_sequence,
    STATE(68), 2,
      sym_comment,
      aux_sym_indented_normal_string_repeat1,
    ACTIONS(312), 5,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
  [313] = 8,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(35), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    STATE(53), 1,
      sym_string,
    STATE(69), 1,
      sym_comment,
    STATE(27), 4,
      sym_indented_normal_string,
      sym_normal_string,
      sym_indented_raw_string,
      sym_raw_string,
  [341] = 7,
    ACTIONS(289), 1,
      aux_sym_comment_token1,
    ACTIONS(293), 1,
      aux_sym_normal_string_token1,
    ACTIONS(315), 1,
      anon_sym_DQUOTE,
    STATE(65), 1,
      aux_sym_normal_string_repeat1,
    STATE(70), 1,
      sym_comment,
    STATE(73), 1,
      sym_escape_sequence,
    ACTIONS(295), 5,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
  [367] = 8,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(35), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    STATE(71), 1,
      sym_comment,
    STATE(103), 1,
      sym_string,
    STATE(27), 4,
      sym_indented_normal_string,
      sym_normal_string,
      sym_indented_raw_string,
      sym_raw_string,
  [395] = 3,
    ACTIONS(289), 1,
      aux_sym_comment_token1,
    STATE(72), 1,
      sym_comment,
    ACTIONS(317), 7,
      anon_sym_DQUOTE,
      aux_sym_normal_string_token1,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
  [411] = 3,
    ACTIONS(289), 1,
      aux_sym_comment_token1,
    STATE(73), 1,
      sym_comment,
    ACTIONS(319), 7,
      anon_sym_DQUOTE,
      aux_sym_normal_string_token1,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
  [427] = 3,
    ACTIONS(289), 1,
      aux_sym_comment_token1,
    STATE(74), 1,
      sym_comment,
    ACTIONS(317), 7,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      aux_sym_indented_normal_string_token1,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
  [443] = 3,
    ACTIONS(289), 1,
      aux_sym_comment_token1,
    STATE(75), 1,
      sym_comment,
    ACTIONS(321), 7,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      aux_sym_indented_normal_string_token1,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
  [459] = 4,
    ACTIONS(289), 1,
      aux_sym_comment_token1,
    ACTIONS(323), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(325), 1,
      aux_sym_indented_backtick_token1,
    STATE(76), 2,
      sym_comment,
      aux_sym_indented_backtick_repeat1,
  [473] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(281), 1,
      anon_sym_RBRACK,
    ACTIONS(328), 1,
      anon_sym_COMMA,
    STATE(77), 1,
      sym_comment,
    STATE(80), 1,
      aux_sym__setting_list_repeat1,
  [489] = 5,
    ACTIONS(289), 1,
      aux_sym_comment_token1,
    ACTIONS(330), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(332), 1,
      aux_sym_indented_raw_string_token1,
    STATE(78), 1,
      sym_comment,
    STATE(81), 1,
      aux_sym_indented_raw_string_repeat1,
  [505] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(54), 1,
      sym_boolean,
    STATE(79), 1,
      sym_comment,
    ACTIONS(277), 2,
      anon_sym_true,
      anon_sym_false,
  [519] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(334), 1,
      anon_sym_COMMA,
    ACTIONS(337), 1,
      anon_sym_RBRACK,
    STATE(80), 2,
      sym_comment,
      aux_sym__setting_list_repeat1,
  [533] = 5,
    ACTIONS(289), 1,
      aux_sym_comment_token1,
    ACTIONS(332), 1,
      aux_sym_indented_raw_string_token1,
    ACTIONS(339), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    STATE(81), 1,
      sym_comment,
    STATE(82), 1,
      aux_sym_indented_raw_string_repeat1,
  [549] = 4,
    ACTIONS(289), 1,
      aux_sym_comment_token1,
    ACTIONS(341), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(343), 1,
      aux_sym_indented_raw_string_token1,
    STATE(82), 2,
      sym_comment,
      aux_sym_indented_raw_string_repeat1,
  [563] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(346), 1,
      anon_sym_LPAREN,
    STATE(83), 1,
      sym_comment,
    STATE(41), 2,
      sym__p1,
      sym__p2,
  [577] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(348), 1,
      anon_sym_COMMA,
    ACTIONS(350), 1,
      anon_sym_RBRACK,
    STATE(77), 1,
      aux_sym__setting_list_repeat1,
    STATE(84), 1,
      sym_comment,
  [593] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(352), 1,
      anon_sym_RPAREN,
    ACTIONS(354), 1,
      anon_sym_COMMA,
    STATE(85), 2,
      sym_comment,
      aux_sym_function_parameters_repeat1,
  [607] = 5,
    ACTIONS(289), 1,
      aux_sym_comment_token1,
    ACTIONS(357), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(359), 1,
      aux_sym_indented_backtick_token1,
    STATE(76), 1,
      aux_sym_indented_backtick_repeat1,
    STATE(86), 1,
      sym_comment,
  [623] = 5,
    ACTIONS(289), 1,
      aux_sym_comment_token1,
    ACTIONS(359), 1,
      aux_sym_indented_backtick_token1,
    ACTIONS(361), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(86), 1,
      aux_sym_indented_backtick_repeat1,
    STATE(87), 1,
      sym_comment,
  [639] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(107), 1,
      anon_sym_RPAREN,
    ACTIONS(363), 1,
      anon_sym_COMMA,
    STATE(85), 1,
      aux_sym_function_parameters_repeat1,
    STATE(88), 1,
      sym_comment,
  [655] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(365), 1,
      anon_sym_RPAREN,
    ACTIONS(367), 1,
      anon_sym_COMMA,
    STATE(88), 1,
      aux_sym_function_parameters_repeat1,
    STATE(89), 1,
      sym_comment,
  [671] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(369), 1,
      anon_sym_RPAREN,
    ACTIONS(371), 1,
      anon_sym_COMMA,
    STATE(90), 1,
      sym_comment,
  [684] = 3,
    ACTIONS(289), 1,
      aux_sym_comment_token1,
    STATE(91), 1,
      sym_comment,
    ACTIONS(373), 2,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      aux_sym_indented_raw_string_token1,
  [695] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(375), 1,
      anon_sym_LPAREN,
    STATE(41), 1,
      sym__p1,
    STATE(92), 1,
      sym_comment,
  [708] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(377), 1,
      anon_sym_LPAREN,
    STATE(41), 1,
      sym__pN,
    STATE(93), 1,
      sym_comment,
  [721] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(379), 1,
      anon_sym_LPAREN,
    STATE(41), 1,
      sym__p0,
    STATE(94), 1,
      sym_comment,
  [734] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(381), 1,
      anon_sym_LPAREN,
    STATE(41), 1,
      sym__p3,
    STATE(95), 1,
      sym_comment,
  [747] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(383), 1,
      anon_sym_RPAREN,
    ACTIONS(385), 1,
      anon_sym_COMMA,
    STATE(96), 1,
      sym_comment,
  [760] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(387), 1,
      anon_sym_COLON_EQ,
    STATE(47), 1,
      sym__setting_string,
    STATE(97), 1,
      sym_comment,
  [773] = 3,
    ACTIONS(289), 1,
      aux_sym_comment_token1,
    STATE(98), 1,
      sym_comment,
    ACTIONS(389), 2,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      aux_sym_indented_backtick_token1,
  [784] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(391), 1,
      anon_sym_LPAREN,
    STATE(41), 1,
      sym__p2,
    STATE(99), 1,
      sym_comment,
  [797] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(100), 1,
      sym_comment,
    ACTIONS(352), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [808] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(383), 1,
      anon_sym_RPAREN,
    ACTIONS(393), 1,
      anon_sym_COMMA,
    STATE(101), 1,
      sym_comment,
  [821] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(395), 1,
      anon_sym_RPAREN,
    ACTIONS(397), 1,
      anon_sym_COMMA,
    STATE(102), 1,
      sym_comment,
  [834] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(103), 1,
      sym_comment,
    ACTIONS(337), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [845] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(399), 1,
      anon_sym_COLON_EQ,
    STATE(47), 1,
      sym__setting_list,
    STATE(104), 1,
      sym_comment,
  [858] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(401), 1,
      anon_sym_COMMA,
    STATE(105), 1,
      sym_comment,
  [868] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(403), 1,
      anon_sym_SQUOTE,
    STATE(106), 1,
      sym_comment,
  [878] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(405), 1,
      sym_identifier,
    STATE(107), 1,
      sym_comment,
  [888] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(407), 1,
      anon_sym_COMMA,
    STATE(108), 1,
      sym_comment,
  [898] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(409), 1,
      anon_sym_RPAREN,
    STATE(109), 1,
      sym_comment,
  [908] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(411), 1,
      sym_identifier,
    STATE(110), 1,
      sym_comment,
  [918] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(275), 1,
      anon_sym_LBRACK,
    STATE(111), 1,
      sym_comment,
  [928] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(413), 1,
      sym_identifier,
    STATE(112), 1,
      sym_comment,
  [938] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(415), 1,
      anon_sym_BQUOTE,
    STATE(113), 1,
      sym_comment,
  [948] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(417), 1,
      anon_sym_RPAREN,
    STATE(114), 1,
      sym_comment,
  [958] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(103), 1,
      anon_sym_RPAREN,
    STATE(115), 1,
      sym_comment,
  [968] = 3,
    ACTIONS(289), 1,
      aux_sym_comment_token1,
    ACTIONS(419), 1,
      aux_sym_backtick_token1,
    STATE(116), 1,
      sym_comment,
  [978] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(421), 1,
      anon_sym_RPAREN,
    STATE(117), 1,
      sym_comment,
  [988] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(423), 1,
      anon_sym_COMMA,
    STATE(118), 1,
      sym_comment,
  [998] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(425), 1,
      anon_sym_RPAREN,
    STATE(119), 1,
      sym_comment,
  [1008] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(427), 1,
      anon_sym_RPAREN,
    STATE(120), 1,
      sym_comment,
  [1018] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(429), 1,
      anon_sym_RPAREN,
    STATE(121), 1,
      sym_comment,
  [1028] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(431), 1,
      anon_sym_COLON_EQ,
    STATE(122), 1,
      sym_comment,
  [1038] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(433), 1,
      ts_builtin_sym_end,
    STATE(123), 1,
      sym_comment,
  [1048] = 3,
    ACTIONS(289), 1,
      aux_sym_comment_token1,
    ACTIONS(435), 1,
      aux_sym_raw_string_token1,
    STATE(124), 1,
      sym_comment,
  [1058] = 1,
    ACTIONS(437), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(58)] = 0,
  [SMALL_STATE(59)] = 31,
  [SMALL_STATE(60)] = 69,
  [SMALL_STATE(61)] = 100,
  [SMALL_STATE(62)] = 131,
  [SMALL_STATE(63)] = 157,
  [SMALL_STATE(64)] = 185,
  [SMALL_STATE(65)] = 213,
  [SMALL_STATE(66)] = 239,
  [SMALL_STATE(67)] = 265,
  [SMALL_STATE(68)] = 289,
  [SMALL_STATE(69)] = 313,
  [SMALL_STATE(70)] = 341,
  [SMALL_STATE(71)] = 367,
  [SMALL_STATE(72)] = 395,
  [SMALL_STATE(73)] = 411,
  [SMALL_STATE(74)] = 427,
  [SMALL_STATE(75)] = 443,
  [SMALL_STATE(76)] = 459,
  [SMALL_STATE(77)] = 473,
  [SMALL_STATE(78)] = 489,
  [SMALL_STATE(79)] = 505,
  [SMALL_STATE(80)] = 519,
  [SMALL_STATE(81)] = 533,
  [SMALL_STATE(82)] = 549,
  [SMALL_STATE(83)] = 563,
  [SMALL_STATE(84)] = 577,
  [SMALL_STATE(85)] = 593,
  [SMALL_STATE(86)] = 607,
  [SMALL_STATE(87)] = 623,
  [SMALL_STATE(88)] = 639,
  [SMALL_STATE(89)] = 655,
  [SMALL_STATE(90)] = 671,
  [SMALL_STATE(91)] = 684,
  [SMALL_STATE(92)] = 695,
  [SMALL_STATE(93)] = 708,
  [SMALL_STATE(94)] = 721,
  [SMALL_STATE(95)] = 734,
  [SMALL_STATE(96)] = 747,
  [SMALL_STATE(97)] = 760,
  [SMALL_STATE(98)] = 773,
  [SMALL_STATE(99)] = 784,
  [SMALL_STATE(100)] = 797,
  [SMALL_STATE(101)] = 808,
  [SMALL_STATE(102)] = 821,
  [SMALL_STATE(103)] = 834,
  [SMALL_STATE(104)] = 845,
  [SMALL_STATE(105)] = 858,
  [SMALL_STATE(106)] = 868,
  [SMALL_STATE(107)] = 878,
  [SMALL_STATE(108)] = 888,
  [SMALL_STATE(109)] = 898,
  [SMALL_STATE(110)] = 908,
  [SMALL_STATE(111)] = 918,
  [SMALL_STATE(112)] = 928,
  [SMALL_STATE(113)] = 938,
  [SMALL_STATE(114)] = 948,
  [SMALL_STATE(115)] = 958,
  [SMALL_STATE(116)] = 968,
  [SMALL_STATE(117)] = 978,
  [SMALL_STATE(118)] = 988,
  [SMALL_STATE(119)] = 998,
  [SMALL_STATE(120)] = 1008,
  [SMALL_STATE(121)] = 1018,
  [SMALL_STATE(122)] = 1028,
  [SMALL_STATE(123)] = 1038,
  [SMALL_STATE(124)] = 1048,
  [SMALL_STATE(125)] = 1058,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file, 1, 0, 0),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(32),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(110),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(63),
  [56] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(107),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(12),
  [62] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(94),
  [65] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(93),
  [68] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(92),
  [71] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(99),
  [74] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(83),
  [77] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(95),
  [80] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(58),
  [83] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(116),
  [86] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(87),
  [89] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(62),
  [92] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(70),
  [95] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(78),
  [98] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(124),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_parameters, 3, 0, 0),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_parameters, 2, 0, 0),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mod, 2, 0, 0),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mod, 2, 0, 0),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting, 2, 0, 0),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_setting, 2, 0, 0),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_raw_string, 3, 0, 0),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_raw_string, 3, 0, 0),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_indented_raw_string, 3, 0, 0),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_indented_raw_string, 3, 0, 0),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_normal_string, 3, 0, 0),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_normal_string, 3, 0, 0),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_indented_normal_string, 3, 0, 0),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_indented_normal_string, 3, 0, 0),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_normal_string, 2, 0, 0),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_normal_string, 2, 0, 0),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_indented_normal_string, 2, 0, 0),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_indented_normal_string, 2, 0, 0),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_indented_raw_string, 2, 0, 0),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_indented_raw_string, 2, 0, 0),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1, 0, 0),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 1, 0, 0),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__p0, 2, 0, 0),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__p0, 2, 0, 0),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_indented_backtick, 3, 0, 0),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_indented_backtick, 3, 0, 0),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__p3, 8, 0, 0),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__p3, 8, 0, 0),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1, 0, 0),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 1, 0, 0),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_backtick, 3, 0, 0),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_backtick, 3, 0, 0),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 3, 0, 0),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 3, 0, 0),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1, 0, 0),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1, 0, 0),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4, 0, 1),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 4, 0, 1),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__p1, 4, 0, 0),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__p1, 4, 0, 0),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__p3, 7, 0, 0),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__p3, 7, 0, 0),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pN, 3, 0, 0),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__pN, 3, 0, 0),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_builtin_function_call, 2, 0, 1),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_builtin_function_call, 2, 0, 1),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 3, 0, 1),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 3, 0, 1),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__p1, 3, 0, 0),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__p1, 3, 0, 0),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__p2, 6, 0, 0),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__p2, 6, 0, 0),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__p2, 5, 0, 0),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__p2, 5, 0, 0),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_indented_backtick, 2, 0, 0),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_indented_backtick, 2, 0, 0),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting, 3, 0, 0),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_setting, 3, 0, 0),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__setting_list, 4, 0, 0),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__setting_list, 4, 0, 0),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__setting_list, 5, 0, 0),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__setting_list, 5, 0, 0),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias, 4, 0, 0),
  [237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_alias, 4, 0, 0),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 2, 0, 0),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import, 2, 0, 0),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__setting_list, 6, 0, 0),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__setting_list, 6, 0, 0),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__setting_string, 2, 0, 0),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__setting_string, 2, 0, 0),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__setting_boolean, 2, 0, 0),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__setting_boolean, 2, 0, 0),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mod, 3, 0, 0),
  [257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mod, 3, 0, 0),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 1, 0, 0),
  [261] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 1, 0, 0),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1, 0, 0),
  [265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1, 0, 0),
  [267] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [269] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [271] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [273] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [283] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [285] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [287] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [289] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [291] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [293] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [295] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [297] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [299] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_normal_string_repeat1, 2, 0, 0),
  [301] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_normal_string_repeat1, 2, 0, 0), SHIFT_REPEAT(73),
  [304] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_normal_string_repeat1, 2, 0, 0), SHIFT_REPEAT(72),
  [307] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_indented_normal_string_repeat1, 2, 0, 0),
  [309] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_indented_normal_string_repeat1, 2, 0, 0), SHIFT_REPEAT(75),
  [312] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_indented_normal_string_repeat1, 2, 0, 0), SHIFT_REPEAT(74),
  [315] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [317] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_escape_sequence, 1, 0, 0),
  [319] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_normal_string_repeat1, 1, 0, 0),
  [321] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_indented_normal_string_repeat1, 1, 0, 0),
  [323] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_indented_backtick_repeat1, 2, 0, 0),
  [325] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_indented_backtick_repeat1, 2, 0, 0), SHIFT_REPEAT(98),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [330] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [332] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [334] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__setting_list_repeat1, 2, 0, 0), SHIFT_REPEAT(71),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__setting_list_repeat1, 2, 0, 0),
  [339] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [341] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_indented_raw_string_repeat1, 2, 0, 0),
  [343] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_indented_raw_string_repeat1, 2, 0, 0), SHIFT_REPEAT(91),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_parameters_repeat1, 2, 0, 0),
  [354] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_parameters_repeat1, 2, 0, 0), SHIFT_REPEAT(16),
  [357] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [359] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [361] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_parameters, 1, 0, 0),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [373] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_indented_raw_string_repeat1, 1, 0, 0),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [389] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_indented_backtick_repeat1, 1, 0, 0),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [419] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [433] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [435] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1, 0, 0),
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
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
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
