#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 153
#define LARGE_STATE_COUNT 73
#define SYMBOL_COUNT 172
#define ALIAS_COUNT 0
#define TOKEN_COUNT 135
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 5
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 7

enum ts_symbol_identifiers {
  sym_identifier = 1,
  anon_sym_alias = 2,
  anon_sym_COLON_EQ = 3,
  anon_sym_export = 4,
  aux_sym_import_token1 = 5,
  aux_sym_mod_token1 = 6,
  anon_sym_set = 7,
  anon_sym_allow_DASHduplicate_DASHrecipes = 8,
  anon_sym_allow_DASHduplicate_DASHvariables = 9,
  anon_sym_dotenv_DASHfilename = 10,
  anon_sym_dotenv_DASHload = 11,
  anon_sym_dotenv_DASHpath = 12,
  anon_sym_dotenv_DASHrequired = 13,
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
  anon_sym_if = 25,
  anon_sym_LBRACE = 26,
  anon_sym_RBRACE = 27,
  anon_sym_else = 28,
  anon_sym_assert = 29,
  anon_sym_LPAREN = 30,
  anon_sym_RPAREN = 31,
  anon_sym_SLASH = 32,
  anon_sym_PLUS = 33,
  anon_sym_EQ_EQ = 34,
  anon_sym_BANG_EQ = 35,
  anon_sym_EQ_TILDE = 36,
  anon_sym_arch = 37,
  anon_sym_num_cpus = 38,
  anon_sym_os = 39,
  anon_sym_os_family = 40,
  anon_sym_env_var = 41,
  anon_sym_env_var_or_default = 42,
  anon_sym_env = 43,
  anon_sym_is_dependency = 44,
  anon_sym_invocation_dir = 45,
  anon_sym_invocation_dir_native = 46,
  anon_sym_invocation_directory = 47,
  anon_sym_invocation_directory_native = 48,
  anon_sym_justfile = 49,
  anon_sym_justfile_dir = 50,
  anon_sym_justfile_directory = 51,
  anon_sym_source_dir = 52,
  anon_sym_source_directory = 53,
  anon_sym_source_file = 54,
  anon_sym_just_executable = 55,
  anon_sym_just_pid = 56,
  anon_sym_append = 57,
  anon_sym_prepend = 58,
  anon_sym_encode_uri_component = 59,
  anon_sym_quote = 60,
  anon_sym_replace = 61,
  anon_sym_replace_regex = 62,
  anon_sym_trim = 63,
  anon_sym_trim_end = 64,
  anon_sym_trim_end_match = 65,
  anon_sym_trim_end_matches = 66,
  anon_sym_trim_start = 67,
  anon_sym_trim_start_match = 68,
  anon_sym_trim_start_matches = 69,
  anon_sym_capitalize = 70,
  anon_sym_kebabcase = 71,
  anon_sym_lowercamelcase = 72,
  anon_sym_lowercase = 73,
  anon_sym_shoutykebabcase = 74,
  anon_sym_shoutysnakecase = 75,
  anon_sym_snakecase = 76,
  anon_sym_titlecase = 77,
  anon_sym_uppercamelcase = 78,
  anon_sym_uppercase = 79,
  anon_sym_absolute_path = 80,
  anon_sym_canonicalize = 81,
  anon_sym_extension = 82,
  anon_sym_file_name = 83,
  anon_sym_file_stem = 84,
  anon_sym_parent_dir = 85,
  anon_sym_parent_directory = 86,
  anon_sym_without_extension = 87,
  anon_sym_clean = 88,
  anon_sym_join = 89,
  anon_sym_path_exists = 90,
  anon_sym_error = 91,
  anon_sym_blake3 = 92,
  anon_sym_blake3_file = 93,
  anon_sym_sha256 = 94,
  anon_sym_sha256_file = 95,
  anon_sym_uuid = 96,
  anon_sym_choose = 97,
  anon_sym_datetime = 98,
  anon_sym_datetime_utc = 99,
  anon_sym_semver_matches = 100,
  anon_sym_cache_dir = 101,
  anon_sym_cache_directory = 102,
  anon_sym_config_dir = 103,
  anon_sym_config_directory = 104,
  anon_sym_config_local_dir = 105,
  anon_sym_config_local_directory = 106,
  anon_sym_data_dir = 107,
  anon_sym_data_directory = 108,
  anon_sym_data_local_dir = 109,
  anon_sym_data_local_directory = 110,
  anon_sym_executable_dir = 111,
  anon_sym_executable_directory = 112,
  anon_sym_home_dir = 113,
  anon_sym_home_directory = 114,
  anon_sym_BQUOTE = 115,
  aux_sym_backtick_token1 = 116,
  anon_sym_BQUOTE_BQUOTE_BQUOTE = 117,
  aux_sym_indented_backtick_token1 = 118,
  anon_sym_DQUOTE_DQUOTE_DQUOTE = 119,
  aux_sym_indented_normal_string_token1 = 120,
  anon_sym_DQUOTE = 121,
  aux_sym_normal_string_token1 = 122,
  anon_sym_SQUOTE_SQUOTE_SQUOTE = 123,
  aux_sym_indented_raw_string_token1 = 124,
  anon_sym_SQUOTE = 125,
  aux_sym_raw_string_token1 = 126,
  anon_sym_BSLASHn = 127,
  anon_sym_BSLASHr = 128,
  anon_sym_BSLASHt = 129,
  anon_sym_BSLASH_DQUOTE = 130,
  anon_sym_BSLASH_BSLASH = 131,
  anon_sym_true = 132,
  anon_sym_false = 133,
  aux_sym_comment_token1 = 134,
  sym_file = 135,
  sym_alias = 136,
  sym_assignment = 137,
  sym_import = 138,
  sym_mod = 139,
  sym_setting = 140,
  sym__setting_boolean = 141,
  sym__setting_string = 142,
  sym__setting_list = 143,
  sym_expression = 144,
  sym_condition = 145,
  sym_value = 146,
  sym_builtin_function_call = 147,
  sym__p0 = 148,
  sym__p1 = 149,
  sym__p2 = 150,
  sym__p3 = 151,
  sym__pN = 152,
  sym_function_call = 153,
  sym_function_parameters = 154,
  sym_backtick = 155,
  sym_indented_backtick = 156,
  sym_string = 157,
  sym_indented_normal_string = 158,
  sym_normal_string = 159,
  sym_indented_raw_string = 160,
  sym_raw_string = 161,
  sym_escape_sequence = 162,
  sym_boolean = 163,
  sym_comment = 164,
  aux_sym_file_repeat1 = 165,
  aux_sym__setting_list_repeat1 = 166,
  aux_sym_function_parameters_repeat1 = 167,
  aux_sym_indented_backtick_repeat1 = 168,
  aux_sym_indented_normal_string_repeat1 = 169,
  aux_sym_normal_string_repeat1 = 170,
  aux_sym_indented_raw_string_repeat1 = 171,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [anon_sym_alias] = "alias",
  [anon_sym_COLON_EQ] = ":=",
  [anon_sym_export] = "export",
  [aux_sym_import_token1] = "import_token1",
  [aux_sym_mod_token1] = "mod_token1",
  [anon_sym_set] = "set",
  [anon_sym_allow_DASHduplicate_DASHrecipes] = "allow-duplicate-recipes",
  [anon_sym_allow_DASHduplicate_DASHvariables] = "allow-duplicate-variables",
  [anon_sym_dotenv_DASHfilename] = "dotenv-filename",
  [anon_sym_dotenv_DASHload] = "dotenv-load",
  [anon_sym_dotenv_DASHpath] = "dotenv-path",
  [anon_sym_dotenv_DASHrequired] = "dotenv-required",
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
  [anon_sym_if] = "if",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_else] = "else",
  [anon_sym_assert] = "assert",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_SLASH] = "/",
  [anon_sym_PLUS] = "+",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_EQ_TILDE] = "=~",
  [anon_sym_arch] = "arch",
  [anon_sym_num_cpus] = "num_cpus",
  [anon_sym_os] = "os",
  [anon_sym_os_family] = "os_family",
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
  [anon_sym_parent_dir] = "parent_dir",
  [anon_sym_parent_directory] = "parent_directory",
  [anon_sym_without_extension] = "without_extension",
  [anon_sym_clean] = "clean",
  [anon_sym_join] = "join",
  [anon_sym_path_exists] = "path_exists",
  [anon_sym_error] = "error",
  [anon_sym_blake3] = "blake3",
  [anon_sym_blake3_file] = "blake3_file",
  [anon_sym_sha256] = "sha256",
  [anon_sym_sha256_file] = "sha256_file",
  [anon_sym_uuid] = "uuid",
  [anon_sym_choose] = "choose",
  [anon_sym_datetime] = "datetime",
  [anon_sym_datetime_utc] = "datetime_utc",
  [anon_sym_semver_matches] = "semver_matches",
  [anon_sym_cache_dir] = "cache_dir",
  [anon_sym_cache_directory] = "cache_directory",
  [anon_sym_config_dir] = "config_dir",
  [anon_sym_config_directory] = "config_directory",
  [anon_sym_config_local_dir] = "config_local_dir",
  [anon_sym_config_local_directory] = "config_local_directory",
  [anon_sym_data_dir] = "data_dir",
  [anon_sym_data_directory] = "data_directory",
  [anon_sym_data_local_dir] = "data_local_dir",
  [anon_sym_data_local_directory] = "data_local_directory",
  [anon_sym_executable_dir] = "executable_dir",
  [anon_sym_executable_directory] = "executable_directory",
  [anon_sym_home_dir] = "home_dir",
  [anon_sym_home_directory] = "home_directory",
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
  [sym_assignment] = "assignment",
  [sym_import] = "import",
  [sym_mod] = "mod",
  [sym_setting] = "setting",
  [sym__setting_boolean] = "_setting_boolean",
  [sym__setting_string] = "_setting_string",
  [sym__setting_list] = "_setting_list",
  [sym_expression] = "expression",
  [sym_condition] = "condition",
  [sym_value] = "value",
  [sym_builtin_function_call] = "builtin_function_call",
  [sym__p0] = "_p0",
  [sym__p1] = "_p1",
  [sym__p2] = "_p2",
  [sym__p3] = "_p3",
  [sym__pN] = "_pN",
  [sym_function_call] = "function_call",
  [sym_function_parameters] = "function_parameters",
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
  [aux_sym__setting_list_repeat1] = "_setting_list_repeat1",
  [aux_sym_function_parameters_repeat1] = "function_parameters_repeat1",
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
  [anon_sym_export] = anon_sym_export,
  [aux_sym_import_token1] = aux_sym_import_token1,
  [aux_sym_mod_token1] = aux_sym_mod_token1,
  [anon_sym_set] = anon_sym_set,
  [anon_sym_allow_DASHduplicate_DASHrecipes] = anon_sym_allow_DASHduplicate_DASHrecipes,
  [anon_sym_allow_DASHduplicate_DASHvariables] = anon_sym_allow_DASHduplicate_DASHvariables,
  [anon_sym_dotenv_DASHfilename] = anon_sym_dotenv_DASHfilename,
  [anon_sym_dotenv_DASHload] = anon_sym_dotenv_DASHload,
  [anon_sym_dotenv_DASHpath] = anon_sym_dotenv_DASHpath,
  [anon_sym_dotenv_DASHrequired] = anon_sym_dotenv_DASHrequired,
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
  [anon_sym_if] = anon_sym_if,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_else] = anon_sym_else,
  [anon_sym_assert] = anon_sym_assert,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_EQ_TILDE] = anon_sym_EQ_TILDE,
  [anon_sym_arch] = anon_sym_arch,
  [anon_sym_num_cpus] = anon_sym_num_cpus,
  [anon_sym_os] = anon_sym_os,
  [anon_sym_os_family] = anon_sym_os_family,
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
  [anon_sym_parent_dir] = anon_sym_parent_dir,
  [anon_sym_parent_directory] = anon_sym_parent_directory,
  [anon_sym_without_extension] = anon_sym_without_extension,
  [anon_sym_clean] = anon_sym_clean,
  [anon_sym_join] = anon_sym_join,
  [anon_sym_path_exists] = anon_sym_path_exists,
  [anon_sym_error] = anon_sym_error,
  [anon_sym_blake3] = anon_sym_blake3,
  [anon_sym_blake3_file] = anon_sym_blake3_file,
  [anon_sym_sha256] = anon_sym_sha256,
  [anon_sym_sha256_file] = anon_sym_sha256_file,
  [anon_sym_uuid] = anon_sym_uuid,
  [anon_sym_choose] = anon_sym_choose,
  [anon_sym_datetime] = anon_sym_datetime,
  [anon_sym_datetime_utc] = anon_sym_datetime_utc,
  [anon_sym_semver_matches] = anon_sym_semver_matches,
  [anon_sym_cache_dir] = anon_sym_cache_dir,
  [anon_sym_cache_directory] = anon_sym_cache_directory,
  [anon_sym_config_dir] = anon_sym_config_dir,
  [anon_sym_config_directory] = anon_sym_config_directory,
  [anon_sym_config_local_dir] = anon_sym_config_local_dir,
  [anon_sym_config_local_directory] = anon_sym_config_local_directory,
  [anon_sym_data_dir] = anon_sym_data_dir,
  [anon_sym_data_directory] = anon_sym_data_directory,
  [anon_sym_data_local_dir] = anon_sym_data_local_dir,
  [anon_sym_data_local_directory] = anon_sym_data_local_directory,
  [anon_sym_executable_dir] = anon_sym_executable_dir,
  [anon_sym_executable_directory] = anon_sym_executable_directory,
  [anon_sym_home_dir] = anon_sym_home_dir,
  [anon_sym_home_directory] = anon_sym_home_directory,
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
  [sym_assignment] = sym_assignment,
  [sym_import] = sym_import,
  [sym_mod] = sym_mod,
  [sym_setting] = sym_setting,
  [sym__setting_boolean] = sym__setting_boolean,
  [sym__setting_string] = sym__setting_string,
  [sym__setting_list] = sym__setting_list,
  [sym_expression] = sym_expression,
  [sym_condition] = sym_condition,
  [sym_value] = sym_value,
  [sym_builtin_function_call] = sym_builtin_function_call,
  [sym__p0] = sym__p0,
  [sym__p1] = sym__p1,
  [sym__p2] = sym__p2,
  [sym__p3] = sym__p3,
  [sym__pN] = sym__pN,
  [sym_function_call] = sym_function_call,
  [sym_function_parameters] = sym_function_parameters,
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
  [aux_sym__setting_list_repeat1] = aux_sym__setting_list_repeat1,
  [aux_sym_function_parameters_repeat1] = aux_sym_function_parameters_repeat1,
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
  [anon_sym_export] = {
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
  [anon_sym_if] = {
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
  [anon_sym_else] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_assert] = {
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
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_TILDE] = {
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
  [anon_sym_parent_dir] = {
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
  [anon_sym_path_exists] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_error] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_blake3] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_blake3_file] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sha256] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sha256_file] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uuid] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_choose] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_datetime] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_datetime_utc] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_semver_matches] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cache_dir] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cache_directory] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_config_dir] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_config_directory] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_config_local_dir] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_config_local_directory] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_data_dir] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_data_directory] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_data_local_dir] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_data_local_directory] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_executable_dir] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_executable_directory] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_home_dir] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_home_directory] = {
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
  [sym_assignment] = {
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
  [sym_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_condition] = {
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
  [aux_sym__setting_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_function_parameters_repeat1] = {
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
  field_alias_name = 1,
  field_function_name = 2,
  field_mod_name = 3,
  field_setting_name = 4,
  field_variable_name = 5,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_alias_name] = "alias_name",
  [field_function_name] = "function_name",
  [field_mod_name] = "mod_name",
  [field_setting_name] = "setting_name",
  [field_variable_name] = "variable_name",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 1},
  [4] = {.index = 3, .length = 1},
  [5] = {.index = 4, .length = 1},
  [6] = {.index = 5, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_mod_name, 1},
  [1] =
    {field_setting_name, 1},
  [2] =
    {field_function_name, 0},
  [3] =
    {field_variable_name, 0},
  [4] =
    {field_alias_name, 1},
  [5] =
    {field_variable_name, 1},
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
  [74] = 74,
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
  [90] = 88,
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
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(14);
      ADVANCE_MAP(
        '!', 10,
        '"', 55,
        '#', 86,
        '\'', 69,
        '(', 25,
        ')', 26,
        '+', 28,
        ',', 21,
        '/', 27,
        ':', 11,
        '=', 12,
        '[', 20,
        '\\', 5,
        ']', 22,
        '`', 33,
        'i', 79,
        'm', 80,
        '{', 23,
        '}', 24,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1);
      if (lookahead == '"') ADVANCE(49);
      if (lookahead == '#') ADVANCE(47);
      if (lookahead == '\\') ADVANCE(50);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(48);
      if (lookahead != 0) ADVANCE(53);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2);
      if (lookahead == '#') ADVANCE(39);
      if (lookahead == '`') ADVANCE(42);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(40);
      if (lookahead != 0) ADVANCE(44);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(3);
      if (lookahead == '#') ADVANCE(62);
      if (lookahead == '\'') ADVANCE(65);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(63);
      if (lookahead != 0) ADVANCE(67);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(55);
      if (lookahead == '#') ADVANCE(86);
      if (lookahead == '\'') ADVANCE(69);
      if (lookahead == '(') ADVANCE(25);
      if (lookahead == ')') ADVANCE(26);
      if (lookahead == '[') ADVANCE(20);
      if (lookahead == '`') ADVANCE(33);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(76);
      if (lookahead == '\\') ADVANCE(77);
      if (lookahead == 'n') ADVANCE(73);
      if (lookahead == 'r') ADVANCE(74);
      if (lookahead == 't') ADVANCE(75);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(45);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(54);
      if (lookahead == '#') ADVANCE(59);
      if (lookahead == '\\') ADVANCE(57);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(58);
      if (lookahead != 0) ADVANCE(56);
      END_STATE();
    case 8:
      if (lookahead == '#') ADVANCE(86);
      if (lookahead == '\'') ADVANCE(68);
      if (lookahead == '`') ADVANCE(32);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(8);
      END_STATE();
    case 9:
      if (lookahead == '\'') ADVANCE(60);
      END_STATE();
    case 10:
      if (lookahead == '=') ADVANCE(30);
      END_STATE();
    case 11:
      if (lookahead == '=') ADVANCE(15);
      END_STATE();
    case 12:
      if (lookahead == '=') ADVANCE(29);
      if (lookahead == '~') ADVANCE(31);
      END_STATE();
    case 13:
      if (lookahead == '`') ADVANCE(37);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(aux_sym_import_token1);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(aux_sym_import_token1);
      if (lookahead == '?') ADVANCE(16);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(aux_sym_mod_token1);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(aux_sym_mod_token1);
      if (lookahead == '?') ADVANCE(18);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_EQ_TILDE);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      if (lookahead == '`') ADVANCE(13);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_backtick_token1);
      if (lookahead == '\n') ADVANCE(36);
      if (lookahead == '`') ADVANCE(86);
      if (lookahead != 0) ADVANCE(34);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_backtick_token1);
      if (lookahead == '#') ADVANCE(34);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(36);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_backtick_token1);
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(36);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_BQUOTE_BQUOTE_BQUOTE);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_indented_backtick_token1);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_indented_backtick_token1);
      if (lookahead == '\n') ADVANCE(38);
      if (lookahead == '`') ADVANCE(86);
      if (lookahead != 0) ADVANCE(43);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_indented_backtick_token1);
      if (lookahead == '\n') ADVANCE(41);
      if (lookahead == '#') ADVANCE(39);
      if (lookahead == '`') ADVANCE(42);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(40);
      if (lookahead != 0) ADVANCE(44);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_indented_backtick_token1);
      if (lookahead == '#') ADVANCE(39);
      if (lookahead == '`') ADVANCE(42);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(40);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(44);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_indented_backtick_token1);
      if (lookahead == '`') ADVANCE(13);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_indented_backtick_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(86);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_indented_backtick_token1);
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(38);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_DQUOTE_DQUOTE_DQUOTE);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_indented_normal_string_token1);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_indented_normal_string_token1);
      if (lookahead == '\n') ADVANCE(46);
      if (lookahead == '"') ADVANCE(86);
      if (lookahead != 0) ADVANCE(52);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_indented_normal_string_token1);
      if (lookahead == '\n') ADVANCE(51);
      if (lookahead == '"') ADVANCE(49);
      if (lookahead == '#') ADVANCE(47);
      if (lookahead == '\\') ADVANCE(50);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(48);
      if (lookahead != 0) ADVANCE(53);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_indented_normal_string_token1);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead != 0) ADVANCE(46);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_indented_normal_string_token1);
      if (lookahead == '"') ADVANCE(76);
      if (lookahead == '\\') ADVANCE(77);
      if (lookahead == 'n') ADVANCE(73);
      if (lookahead == 'r') ADVANCE(74);
      if (lookahead == 't') ADVANCE(75);
      if (lookahead != 0) ADVANCE(46);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_indented_normal_string_token1);
      if (lookahead == '"') ADVANCE(49);
      if (lookahead == '#') ADVANCE(47);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(48);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(53);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_indented_normal_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(86);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_indented_normal_string_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(46);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == '"') ADVANCE(6);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_normal_string_token1);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_normal_string_token1);
      if (lookahead == '"') ADVANCE(76);
      if (lookahead == '\\') ADVANCE(77);
      if (lookahead == 'n') ADVANCE(73);
      if (lookahead == 'r') ADVANCE(74);
      if (lookahead == 't') ADVANCE(75);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_normal_string_token1);
      if (lookahead == '#') ADVANCE(59);
      if (lookahead == '\\') ADVANCE(57);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(58);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#') ADVANCE(56);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_normal_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(86);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_SQUOTE_SQUOTE_SQUOTE);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_indented_raw_string_token1);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_indented_raw_string_token1);
      if (lookahead == '\n') ADVANCE(61);
      if (lookahead == '\'') ADVANCE(86);
      if (lookahead != 0) ADVANCE(66);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_indented_raw_string_token1);
      if (lookahead == '\n') ADVANCE(64);
      if (lookahead == '#') ADVANCE(62);
      if (lookahead == '\'') ADVANCE(65);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(63);
      if (lookahead != 0) ADVANCE(67);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_indented_raw_string_token1);
      if (lookahead == '#') ADVANCE(62);
      if (lookahead == '\'') ADVANCE(65);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(63);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(67);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_indented_raw_string_token1);
      if (lookahead == '\'') ADVANCE(9);
      if (lookahead != 0) ADVANCE(61);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_indented_raw_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(86);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_indented_raw_string_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(61);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '\'') ADVANCE(9);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_raw_string_token1);
      if (lookahead == '\n') ADVANCE(72);
      if (lookahead == '\'') ADVANCE(86);
      if (lookahead != 0) ADVANCE(70);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_raw_string_token1);
      if (lookahead == '#') ADVANCE(70);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(71);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(72);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_raw_string_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(72);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_BSLASHn);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_BSLASHr);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_BSLASHt);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_BSLASH_DQUOTE);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_BSLASH_BSLASH);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(19);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(82);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(78);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(83);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(81);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(84);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(17);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(86);
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
        'b', 2,
        'c', 3,
        'd', 4,
        'e', 5,
        'f', 6,
        'h', 7,
        'i', 8,
        'j', 9,
        'k', 10,
        'l', 11,
        'n', 12,
        'o', 13,
        'p', 14,
        'q', 15,
        'r', 16,
        's', 17,
        't', 18,
        'u', 19,
        'w', 20,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      END_STATE();
    case 1:
      if (lookahead == 'b') ADVANCE(21);
      if (lookahead == 'l') ADVANCE(22);
      if (lookahead == 'p') ADVANCE(23);
      if (lookahead == 'r') ADVANCE(24);
      if (lookahead == 's') ADVANCE(25);
      END_STATE();
    case 2:
      if (lookahead == 'l') ADVANCE(26);
      END_STATE();
    case 3:
      if (lookahead == 'a') ADVANCE(27);
      if (lookahead == 'h') ADVANCE(28);
      if (lookahead == 'l') ADVANCE(29);
      if (lookahead == 'o') ADVANCE(30);
      END_STATE();
    case 4:
      if (lookahead == 'a') ADVANCE(31);
      if (lookahead == 'o') ADVANCE(32);
      END_STATE();
    case 5:
      if (lookahead == 'l') ADVANCE(33);
      if (lookahead == 'n') ADVANCE(34);
      if (lookahead == 'r') ADVANCE(35);
      if (lookahead == 'x') ADVANCE(36);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(37);
      if (lookahead == 'i') ADVANCE(38);
      END_STATE();
    case 7:
      if (lookahead == 'o') ADVANCE(39);
      END_STATE();
    case 8:
      if (lookahead == 'f') ADVANCE(40);
      if (lookahead == 'g') ADVANCE(41);
      if (lookahead == 'n') ADVANCE(42);
      if (lookahead == 's') ADVANCE(43);
      END_STATE();
    case 9:
      if (lookahead == 'o') ADVANCE(44);
      if (lookahead == 'u') ADVANCE(45);
      END_STATE();
    case 10:
      if (lookahead == 'e') ADVANCE(46);
      END_STATE();
    case 11:
      if (lookahead == 'o') ADVANCE(47);
      END_STATE();
    case 12:
      if (lookahead == 'u') ADVANCE(48);
      END_STATE();
    case 13:
      if (lookahead == 's') ADVANCE(49);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(50);
      if (lookahead == 'o') ADVANCE(51);
      if (lookahead == 'r') ADVANCE(52);
      END_STATE();
    case 15:
      if (lookahead == 'u') ADVANCE(53);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(54);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(55);
      if (lookahead == 'h') ADVANCE(56);
      if (lookahead == 'n') ADVANCE(57);
      if (lookahead == 'o') ADVANCE(58);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(59);
      if (lookahead == 'i') ADVANCE(60);
      if (lookahead == 'r') ADVANCE(61);
      END_STATE();
    case 19:
      if (lookahead == 'n') ADVANCE(62);
      if (lookahead == 'p') ADVANCE(63);
      if (lookahead == 'u') ADVANCE(64);
      END_STATE();
    case 20:
      if (lookahead == 'i') ADVANCE(65);
      END_STATE();
    case 21:
      if (lookahead == 's') ADVANCE(66);
      END_STATE();
    case 22:
      if (lookahead == 'i') ADVANCE(67);
      if (lookahead == 'l') ADVANCE(68);
      END_STATE();
    case 23:
      if (lookahead == 'p') ADVANCE(69);
      END_STATE();
    case 24:
      if (lookahead == 'c') ADVANCE(70);
      END_STATE();
    case 25:
      if (lookahead == 's') ADVANCE(71);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(72);
      END_STATE();
    case 27:
      if (lookahead == 'c') ADVANCE(73);
      if (lookahead == 'n') ADVANCE(74);
      if (lookahead == 'p') ADVANCE(75);
      END_STATE();
    case 28:
      if (lookahead == 'o') ADVANCE(76);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(77);
      END_STATE();
    case 30:
      if (lookahead == 'n') ADVANCE(78);
      END_STATE();
    case 31:
      if (lookahead == 't') ADVANCE(79);
      END_STATE();
    case 32:
      if (lookahead == 't') ADVANCE(80);
      END_STATE();
    case 33:
      if (lookahead == 's') ADVANCE(81);
      END_STATE();
    case 34:
      if (lookahead == 'c') ADVANCE(82);
      if (lookahead == 'v') ADVANCE(83);
      END_STATE();
    case 35:
      if (lookahead == 'r') ADVANCE(84);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(85);
      if (lookahead == 'p') ADVANCE(86);
      if (lookahead == 't') ADVANCE(87);
      END_STATE();
    case 37:
      if (lookahead == 'l') ADVANCE(88);
      END_STATE();
    case 38:
      if (lookahead == 'l') ADVANCE(89);
      END_STATE();
    case 39:
      if (lookahead == 'm') ADVANCE(90);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 41:
      if (lookahead == 'n') ADVANCE(91);
      END_STATE();
    case 42:
      if (lookahead == 'v') ADVANCE(92);
      END_STATE();
    case 43:
      if (lookahead == '_') ADVANCE(93);
      END_STATE();
    case 44:
      if (lookahead == 'i') ADVANCE(94);
      END_STATE();
    case 45:
      if (lookahead == 's') ADVANCE(95);
      END_STATE();
    case 46:
      if (lookahead == 'b') ADVANCE(96);
      END_STATE();
    case 47:
      if (lookahead == 'w') ADVANCE(97);
      END_STATE();
    case 48:
      if (lookahead == 'm') ADVANCE(98);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_os);
      if (lookahead == '_') ADVANCE(99);
      END_STATE();
    case 50:
      if (lookahead == 'r') ADVANCE(100);
      if (lookahead == 't') ADVANCE(101);
      END_STATE();
    case 51:
      if (lookahead == 's') ADVANCE(102);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(103);
      END_STATE();
    case 53:
      if (lookahead == 'o') ADVANCE(104);
      END_STATE();
    case 54:
      if (lookahead == 'p') ADVANCE(105);
      END_STATE();
    case 55:
      if (lookahead == 'm') ADVANCE(106);
      if (lookahead == 't') ADVANCE(107);
      END_STATE();
    case 56:
      if (lookahead == 'a') ADVANCE(108);
      if (lookahead == 'e') ADVANCE(109);
      if (lookahead == 'o') ADVANCE(110);
      END_STATE();
    case 57:
      if (lookahead == 'a') ADVANCE(111);
      END_STATE();
    case 58:
      if (lookahead == 'u') ADVANCE(112);
      END_STATE();
    case 59:
      if (lookahead == 'm') ADVANCE(113);
      END_STATE();
    case 60:
      if (lookahead == 't') ADVANCE(114);
      END_STATE();
    case 61:
      if (lookahead == 'i') ADVANCE(115);
      if (lookahead == 'u') ADVANCE(116);
      END_STATE();
    case 62:
      if (lookahead == 's') ADVANCE(117);
      END_STATE();
    case 63:
      if (lookahead == 'p') ADVANCE(118);
      END_STATE();
    case 64:
      if (lookahead == 'i') ADVANCE(119);
      END_STATE();
    case 65:
      if (lookahead == 'n') ADVANCE(120);
      if (lookahead == 't') ADVANCE(121);
      END_STATE();
    case 66:
      if (lookahead == 'o') ADVANCE(122);
      END_STATE();
    case 67:
      if (lookahead == 'a') ADVANCE(123);
      END_STATE();
    case 68:
      if (lookahead == 'o') ADVANCE(124);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(125);
      END_STATE();
    case 70:
      if (lookahead == 'h') ADVANCE(126);
      END_STATE();
    case 71:
      if (lookahead == 'e') ADVANCE(127);
      END_STATE();
    case 72:
      if (lookahead == 'k') ADVANCE(128);
      END_STATE();
    case 73:
      if (lookahead == 'h') ADVANCE(129);
      END_STATE();
    case 74:
      if (lookahead == 'o') ADVANCE(130);
      END_STATE();
    case 75:
      if (lookahead == 'i') ADVANCE(131);
      END_STATE();
    case 76:
      if (lookahead == 'o') ADVANCE(132);
      END_STATE();
    case 77:
      if (lookahead == 'a') ADVANCE(133);
      END_STATE();
    case 78:
      if (lookahead == 'f') ADVANCE(134);
      END_STATE();
    case 79:
      if (lookahead == 'a') ADVANCE(135);
      if (lookahead == 'e') ADVANCE(136);
      END_STATE();
    case 80:
      if (lookahead == 'e') ADVANCE(137);
      END_STATE();
    case 81:
      if (lookahead == 'e') ADVANCE(138);
      END_STATE();
    case 82:
      if (lookahead == 'o') ADVANCE(139);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_env);
      if (lookahead == '_') ADVANCE(140);
      END_STATE();
    case 84:
      if (lookahead == 'o') ADVANCE(141);
      END_STATE();
    case 85:
      if (lookahead == 'c') ADVANCE(142);
      END_STATE();
    case 86:
      if (lookahead == 'o') ADVANCE(143);
      END_STATE();
    case 87:
      if (lookahead == 'e') ADVANCE(144);
      END_STATE();
    case 88:
      if (lookahead == 'l') ADVANCE(145);
      if (lookahead == 's') ADVANCE(146);
      END_STATE();
    case 89:
      if (lookahead == 'e') ADVANCE(147);
      END_STATE();
    case 90:
      if (lookahead == 'e') ADVANCE(148);
      END_STATE();
    case 91:
      if (lookahead == 'o') ADVANCE(149);
      END_STATE();
    case 92:
      if (lookahead == 'o') ADVANCE(150);
      END_STATE();
    case 93:
      if (lookahead == 'd') ADVANCE(151);
      END_STATE();
    case 94:
      if (lookahead == 'n') ADVANCE(152);
      END_STATE();
    case 95:
      if (lookahead == 't') ADVANCE(153);
      END_STATE();
    case 96:
      if (lookahead == 'a') ADVANCE(154);
      END_STATE();
    case 97:
      if (lookahead == 'e') ADVANCE(155);
      END_STATE();
    case 98:
      if (lookahead == '_') ADVANCE(156);
      END_STATE();
    case 99:
      if (lookahead == 'f') ADVANCE(157);
      END_STATE();
    case 100:
      if (lookahead == 'e') ADVANCE(158);
      END_STATE();
    case 101:
      if (lookahead == 'h') ADVANCE(159);
      END_STATE();
    case 102:
      if (lookahead == 'i') ADVANCE(160);
      END_STATE();
    case 103:
      if (lookahead == 'p') ADVANCE(161);
      END_STATE();
    case 104:
      if (lookahead == 't') ADVANCE(162);
      END_STATE();
    case 105:
      if (lookahead == 'l') ADVANCE(163);
      END_STATE();
    case 106:
      if (lookahead == 'v') ADVANCE(164);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_set);
      END_STATE();
    case 108:
      if (lookahead == '2') ADVANCE(165);
      END_STATE();
    case 109:
      if (lookahead == 'l') ADVANCE(166);
      END_STATE();
    case 110:
      if (lookahead == 'u') ADVANCE(167);
      END_STATE();
    case 111:
      if (lookahead == 'k') ADVANCE(168);
      END_STATE();
    case 112:
      if (lookahead == 'r') ADVANCE(169);
      END_STATE();
    case 113:
      if (lookahead == 'p') ADVANCE(170);
      END_STATE();
    case 114:
      if (lookahead == 'l') ADVANCE(171);
      END_STATE();
    case 115:
      if (lookahead == 'm') ADVANCE(172);
      END_STATE();
    case 116:
      if (lookahead == 'e') ADVANCE(173);
      END_STATE();
    case 117:
      if (lookahead == 't') ADVANCE(174);
      END_STATE();
    case 118:
      if (lookahead == 'e') ADVANCE(175);
      END_STATE();
    case 119:
      if (lookahead == 'd') ADVANCE(176);
      END_STATE();
    case 120:
      if (lookahead == 'd') ADVANCE(177);
      END_STATE();
    case 121:
      if (lookahead == 'h') ADVANCE(178);
      END_STATE();
    case 122:
      if (lookahead == 'l') ADVANCE(179);
      END_STATE();
    case 123:
      if (lookahead == 's') ADVANCE(180);
      END_STATE();
    case 124:
      if (lookahead == 'w') ADVANCE(181);
      END_STATE();
    case 125:
      if (lookahead == 'n') ADVANCE(182);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_arch);
      END_STATE();
    case 127:
      if (lookahead == 'r') ADVANCE(183);
      END_STATE();
    case 128:
      if (lookahead == 'e') ADVANCE(184);
      END_STATE();
    case 129:
      if (lookahead == 'e') ADVANCE(185);
      END_STATE();
    case 130:
      if (lookahead == 'n') ADVANCE(186);
      END_STATE();
    case 131:
      if (lookahead == 't') ADVANCE(187);
      END_STATE();
    case 132:
      if (lookahead == 's') ADVANCE(188);
      END_STATE();
    case 133:
      if (lookahead == 'n') ADVANCE(189);
      END_STATE();
    case 134:
      if (lookahead == 'i') ADVANCE(190);
      END_STATE();
    case 135:
      if (lookahead == '_') ADVANCE(191);
      END_STATE();
    case 136:
      if (lookahead == 't') ADVANCE(192);
      END_STATE();
    case 137:
      if (lookahead == 'n') ADVANCE(193);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 139:
      if (lookahead == 'd') ADVANCE(194);
      END_STATE();
    case 140:
      if (lookahead == 'v') ADVANCE(195);
      END_STATE();
    case 141:
      if (lookahead == 'r') ADVANCE(196);
      END_STATE();
    case 142:
      if (lookahead == 'u') ADVANCE(197);
      END_STATE();
    case 143:
      if (lookahead == 'r') ADVANCE(198);
      END_STATE();
    case 144:
      if (lookahead == 'n') ADVANCE(199);
      END_STATE();
    case 145:
      if (lookahead == 'b') ADVANCE(200);
      END_STATE();
    case 146:
      if (lookahead == 'e') ADVANCE(201);
      END_STATE();
    case 147:
      if (lookahead == '_') ADVANCE(202);
      END_STATE();
    case 148:
      if (lookahead == '_') ADVANCE(203);
      END_STATE();
    case 149:
      if (lookahead == 'r') ADVANCE(204);
      END_STATE();
    case 150:
      if (lookahead == 'c') ADVANCE(205);
      END_STATE();
    case 151:
      if (lookahead == 'e') ADVANCE(206);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_join);
      END_STATE();
    case 153:
      if (lookahead == '_') ADVANCE(207);
      if (lookahead == 'f') ADVANCE(208);
      END_STATE();
    case 154:
      if (lookahead == 'b') ADVANCE(209);
      END_STATE();
    case 155:
      if (lookahead == 'r') ADVANCE(210);
      END_STATE();
    case 156:
      if (lookahead == 'c') ADVANCE(211);
      END_STATE();
    case 157:
      if (lookahead == 'a') ADVANCE(212);
      END_STATE();
    case 158:
      if (lookahead == 'n') ADVANCE(213);
      END_STATE();
    case 159:
      if (lookahead == '_') ADVANCE(214);
      END_STATE();
    case 160:
      if (lookahead == 't') ADVANCE(215);
      END_STATE();
    case 161:
      if (lookahead == 'e') ADVANCE(216);
      END_STATE();
    case 162:
      if (lookahead == 'e') ADVANCE(217);
      END_STATE();
    case 163:
      if (lookahead == 'a') ADVANCE(218);
      END_STATE();
    case 164:
      if (lookahead == 'e') ADVANCE(219);
      END_STATE();
    case 165:
      if (lookahead == '5') ADVANCE(220);
      END_STATE();
    case 166:
      if (lookahead == 'l') ADVANCE(221);
      END_STATE();
    case 167:
      if (lookahead == 't') ADVANCE(222);
      END_STATE();
    case 168:
      if (lookahead == 'e') ADVANCE(223);
      END_STATE();
    case 169:
      if (lookahead == 'c') ADVANCE(224);
      END_STATE();
    case 170:
      if (lookahead == 'd') ADVANCE(225);
      END_STATE();
    case 171:
      if (lookahead == 'e') ADVANCE(226);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_trim);
      if (lookahead == '_') ADVANCE(227);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 174:
      if (lookahead == 'a') ADVANCE(228);
      END_STATE();
    case 175:
      if (lookahead == 'r') ADVANCE(229);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_uuid);
      END_STATE();
    case 177:
      if (lookahead == 'o') ADVANCE(230);
      END_STATE();
    case 178:
      if (lookahead == 'o') ADVANCE(231);
      END_STATE();
    case 179:
      if (lookahead == 'u') ADVANCE(232);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_alias);
      END_STATE();
    case 181:
      if (lookahead == '-') ADVANCE(233);
      END_STATE();
    case 182:
      if (lookahead == 'd') ADVANCE(234);
      END_STATE();
    case 183:
      if (lookahead == 't') ADVANCE(235);
      END_STATE();
    case 184:
      if (lookahead == '3') ADVANCE(236);
      END_STATE();
    case 185:
      if (lookahead == '_') ADVANCE(237);
      END_STATE();
    case 186:
      if (lookahead == 'i') ADVANCE(238);
      END_STATE();
    case 187:
      if (lookahead == 'a') ADVANCE(239);
      END_STATE();
    case 188:
      if (lookahead == 'e') ADVANCE(240);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_clean);
      END_STATE();
    case 190:
      if (lookahead == 'g') ADVANCE(241);
      END_STATE();
    case 191:
      if (lookahead == 'd') ADVANCE(242);
      if (lookahead == 'l') ADVANCE(243);
      END_STATE();
    case 192:
      if (lookahead == 'i') ADVANCE(244);
      END_STATE();
    case 193:
      if (lookahead == 'v') ADVANCE(245);
      END_STATE();
    case 194:
      if (lookahead == 'e') ADVANCE(246);
      END_STATE();
    case 195:
      if (lookahead == 'a') ADVANCE(247);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_error);
      END_STATE();
    case 197:
      if (lookahead == 't') ADVANCE(248);
      END_STATE();
    case 198:
      if (lookahead == 't') ADVANCE(249);
      END_STATE();
    case 199:
      if (lookahead == 's') ADVANCE(250);
      END_STATE();
    case 200:
      if (lookahead == 'a') ADVANCE(251);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 202:
      if (lookahead == 'n') ADVANCE(252);
      if (lookahead == 's') ADVANCE(253);
      END_STATE();
    case 203:
      if (lookahead == 'd') ADVANCE(254);
      END_STATE();
    case 204:
      if (lookahead == 'e') ADVANCE(255);
      END_STATE();
    case 205:
      if (lookahead == 'a') ADVANCE(256);
      END_STATE();
    case 206:
      if (lookahead == 'p') ADVANCE(257);
      END_STATE();
    case 207:
      if (lookahead == 'e') ADVANCE(258);
      if (lookahead == 'p') ADVANCE(259);
      END_STATE();
    case 208:
      if (lookahead == 'i') ADVANCE(260);
      END_STATE();
    case 209:
      if (lookahead == 'c') ADVANCE(261);
      END_STATE();
    case 210:
      if (lookahead == 'c') ADVANCE(262);
      END_STATE();
    case 211:
      if (lookahead == 'p') ADVANCE(263);
      END_STATE();
    case 212:
      if (lookahead == 'm') ADVANCE(264);
      END_STATE();
    case 213:
      if (lookahead == 't') ADVANCE(265);
      END_STATE();
    case 214:
      if (lookahead == 'e') ADVANCE(266);
      END_STATE();
    case 215:
      if (lookahead == 'i') ADVANCE(267);
      END_STATE();
    case 216:
      if (lookahead == 'n') ADVANCE(268);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_quote);
      END_STATE();
    case 218:
      if (lookahead == 'c') ADVANCE(269);
      END_STATE();
    case 219:
      if (lookahead == 'r') ADVANCE(270);
      END_STATE();
    case 220:
      if (lookahead == '6') ADVANCE(271);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_shell);
      END_STATE();
    case 222:
      if (lookahead == 'y') ADVANCE(272);
      END_STATE();
    case 223:
      if (lookahead == 'c') ADVANCE(273);
      END_STATE();
    case 224:
      if (lookahead == 'e') ADVANCE(274);
      END_STATE();
    case 225:
      if (lookahead == 'i') ADVANCE(275);
      END_STATE();
    case 226:
      if (lookahead == 'c') ADVANCE(276);
      END_STATE();
    case 227:
      if (lookahead == 'e') ADVANCE(277);
      if (lookahead == 's') ADVANCE(278);
      END_STATE();
    case 228:
      if (lookahead == 'b') ADVANCE(279);
      END_STATE();
    case 229:
      if (lookahead == 'c') ADVANCE(280);
      END_STATE();
    case 230:
      if (lookahead == 'w') ADVANCE(281);
      END_STATE();
    case 231:
      if (lookahead == 'u') ADVANCE(282);
      END_STATE();
    case 232:
      if (lookahead == 't') ADVANCE(283);
      END_STATE();
    case 233:
      if (lookahead == 'd') ADVANCE(284);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_append);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_assert);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_blake3);
      if (lookahead == '_') ADVANCE(285);
      END_STATE();
    case 237:
      if (lookahead == 'd') ADVANCE(286);
      END_STATE();
    case 238:
      if (lookahead == 'c') ADVANCE(287);
      END_STATE();
    case 239:
      if (lookahead == 'l') ADVANCE(288);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_choose);
      END_STATE();
    case 241:
      if (lookahead == '_') ADVANCE(289);
      END_STATE();
    case 242:
      if (lookahead == 'i') ADVANCE(290);
      END_STATE();
    case 243:
      if (lookahead == 'o') ADVANCE(291);
      END_STATE();
    case 244:
      if (lookahead == 'm') ADVANCE(292);
      END_STATE();
    case 245:
      if (lookahead == '-') ADVANCE(293);
      END_STATE();
    case 246:
      if (lookahead == '_') ADVANCE(294);
      END_STATE();
    case 247:
      if (lookahead == 'r') ADVANCE(295);
      END_STATE();
    case 248:
      if (lookahead == 'a') ADVANCE(296);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_export);
      END_STATE();
    case 250:
      if (lookahead == 'i') ADVANCE(297);
      END_STATE();
    case 251:
      if (lookahead == 'c') ADVANCE(298);
      END_STATE();
    case 252:
      if (lookahead == 'a') ADVANCE(299);
      END_STATE();
    case 253:
      if (lookahead == 't') ADVANCE(300);
      END_STATE();
    case 254:
      if (lookahead == 'i') ADVANCE(301);
      END_STATE();
    case 255:
      if (lookahead == '-') ADVANCE(302);
      END_STATE();
    case 256:
      if (lookahead == 't') ADVANCE(303);
      END_STATE();
    case 257:
      if (lookahead == 'e') ADVANCE(304);
      END_STATE();
    case 258:
      if (lookahead == 'x') ADVANCE(305);
      END_STATE();
    case 259:
      if (lookahead == 'i') ADVANCE(306);
      END_STATE();
    case 260:
      if (lookahead == 'l') ADVANCE(307);
      END_STATE();
    case 261:
      if (lookahead == 'a') ADVANCE(308);
      END_STATE();
    case 262:
      if (lookahead == 'a') ADVANCE(309);
      END_STATE();
    case 263:
      if (lookahead == 'u') ADVANCE(310);
      END_STATE();
    case 264:
      if (lookahead == 'i') ADVANCE(311);
      END_STATE();
    case 265:
      if (lookahead == '_') ADVANCE(312);
      END_STATE();
    case 266:
      if (lookahead == 'x') ADVANCE(313);
      END_STATE();
    case 267:
      if (lookahead == 'o') ADVANCE(314);
      END_STATE();
    case 268:
      if (lookahead == 'd') ADVANCE(315);
      END_STATE();
    case 269:
      if (lookahead == 'e') ADVANCE(316);
      END_STATE();
    case 270:
      if (lookahead == '_') ADVANCE(317);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_sha256);
      if (lookahead == '_') ADVANCE(318);
      END_STATE();
    case 272:
      if (lookahead == 'k') ADVANCE(319);
      if (lookahead == 's') ADVANCE(320);
      END_STATE();
    case 273:
      if (lookahead == 'a') ADVANCE(321);
      END_STATE();
    case 274:
      if (lookahead == '_') ADVANCE(322);
      END_STATE();
    case 275:
      if (lookahead == 'r') ADVANCE(323);
      END_STATE();
    case 276:
      if (lookahead == 'a') ADVANCE(324);
      END_STATE();
    case 277:
      if (lookahead == 'n') ADVANCE(325);
      END_STATE();
    case 278:
      if (lookahead == 't') ADVANCE(326);
      END_STATE();
    case 279:
      if (lookahead == 'l') ADVANCE(327);
      END_STATE();
    case 280:
      if (lookahead == 'a') ADVANCE(328);
      END_STATE();
    case 281:
      if (lookahead == 's') ADVANCE(329);
      END_STATE();
    case 282:
      if (lookahead == 't') ADVANCE(330);
      END_STATE();
    case 283:
      if (lookahead == 'e') ADVANCE(331);
      END_STATE();
    case 284:
      if (lookahead == 'u') ADVANCE(332);
      END_STATE();
    case 285:
      if (lookahead == 'f') ADVANCE(333);
      END_STATE();
    case 286:
      if (lookahead == 'i') ADVANCE(334);
      END_STATE();
    case 287:
      if (lookahead == 'a') ADVANCE(335);
      END_STATE();
    case 288:
      if (lookahead == 'i') ADVANCE(336);
      END_STATE();
    case 289:
      if (lookahead == 'd') ADVANCE(337);
      if (lookahead == 'l') ADVANCE(338);
      END_STATE();
    case 290:
      if (lookahead == 'r') ADVANCE(339);
      END_STATE();
    case 291:
      if (lookahead == 'c') ADVANCE(340);
      END_STATE();
    case 292:
      if (lookahead == 'e') ADVANCE(341);
      END_STATE();
    case 293:
      if (lookahead == 'f') ADVANCE(342);
      if (lookahead == 'l') ADVANCE(343);
      if (lookahead == 'p') ADVANCE(344);
      if (lookahead == 'r') ADVANCE(345);
      END_STATE();
    case 294:
      if (lookahead == 'u') ADVANCE(346);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_env_var);
      if (lookahead == '_') ADVANCE(347);
      END_STATE();
    case 296:
      if (lookahead == 'b') ADVANCE(348);
      END_STATE();
    case 297:
      if (lookahead == 'o') ADVANCE(349);
      END_STATE();
    case 298:
      if (lookahead == 'k') ADVANCE(350);
      END_STATE();
    case 299:
      if (lookahead == 'm') ADVANCE(351);
      END_STATE();
    case 300:
      if (lookahead == 'e') ADVANCE(352);
      END_STATE();
    case 301:
      if (lookahead == 'r') ADVANCE(353);
      END_STATE();
    case 302:
      if (lookahead == 'c') ADVANCE(354);
      END_STATE();
    case 303:
      if (lookahead == 'i') ADVANCE(355);
      END_STATE();
    case 304:
      if (lookahead == 'n') ADVANCE(356);
      END_STATE();
    case 305:
      if (lookahead == 'e') ADVANCE(357);
      END_STATE();
    case 306:
      if (lookahead == 'd') ADVANCE(358);
      END_STATE();
    case 307:
      if (lookahead == 'e') ADVANCE(359);
      END_STATE();
    case 308:
      if (lookahead == 's') ADVANCE(360);
      END_STATE();
    case 309:
      if (lookahead == 'm') ADVANCE(361);
      if (lookahead == 's') ADVANCE(362);
      END_STATE();
    case 310:
      if (lookahead == 's') ADVANCE(363);
      END_STATE();
    case 311:
      if (lookahead == 'l') ADVANCE(364);
      END_STATE();
    case 312:
      if (lookahead == 'd') ADVANCE(365);
      END_STATE();
    case 313:
      if (lookahead == 'i') ADVANCE(366);
      END_STATE();
    case 314:
      if (lookahead == 'n') ADVANCE(367);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(anon_sym_prepend);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(anon_sym_replace);
      if (lookahead == '_') ADVANCE(368);
      END_STATE();
    case 317:
      if (lookahead == 'm') ADVANCE(369);
      END_STATE();
    case 318:
      if (lookahead == 'f') ADVANCE(370);
      END_STATE();
    case 319:
      if (lookahead == 'e') ADVANCE(371);
      END_STATE();
    case 320:
      if (lookahead == 'n') ADVANCE(372);
      END_STATE();
    case 321:
      if (lookahead == 's') ADVANCE(373);
      END_STATE();
    case 322:
      if (lookahead == 'd') ADVANCE(374);
      if (lookahead == 'f') ADVANCE(375);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(anon_sym_tempdir);
      END_STATE();
    case 324:
      if (lookahead == 's') ADVANCE(376);
      END_STATE();
    case 325:
      if (lookahead == 'd') ADVANCE(377);
      END_STATE();
    case 326:
      if (lookahead == 'a') ADVANCE(378);
      END_STATE();
    case 327:
      if (lookahead == 'e') ADVANCE(379);
      END_STATE();
    case 328:
      if (lookahead == 'm') ADVANCE(380);
      if (lookahead == 's') ADVANCE(381);
      END_STATE();
    case 329:
      if (lookahead == '-') ADVANCE(382);
      END_STATE();
    case 330:
      if (lookahead == '_') ADVANCE(383);
      END_STATE();
    case 331:
      if (lookahead == '_') ADVANCE(384);
      END_STATE();
    case 332:
      if (lookahead == 'p') ADVANCE(385);
      END_STATE();
    case 333:
      if (lookahead == 'i') ADVANCE(386);
      END_STATE();
    case 334:
      if (lookahead == 'r') ADVANCE(387);
      END_STATE();
    case 335:
      if (lookahead == 'l') ADVANCE(388);
      END_STATE();
    case 336:
      if (lookahead == 'z') ADVANCE(389);
      END_STATE();
    case 337:
      if (lookahead == 'i') ADVANCE(390);
      END_STATE();
    case 338:
      if (lookahead == 'o') ADVANCE(391);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(anon_sym_data_dir);
      if (lookahead == 'e') ADVANCE(392);
      END_STATE();
    case 340:
      if (lookahead == 'a') ADVANCE(393);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(anon_sym_datetime);
      if (lookahead == '_') ADVANCE(394);
      END_STATE();
    case 342:
      if (lookahead == 'i') ADVANCE(395);
      END_STATE();
    case 343:
      if (lookahead == 'o') ADVANCE(396);
      END_STATE();
    case 344:
      if (lookahead == 'a') ADVANCE(397);
      END_STATE();
    case 345:
      if (lookahead == 'e') ADVANCE(398);
      END_STATE();
    case 346:
      if (lookahead == 'r') ADVANCE(399);
      END_STATE();
    case 347:
      if (lookahead == 'o') ADVANCE(400);
      END_STATE();
    case 348:
      if (lookahead == 'l') ADVANCE(401);
      END_STATE();
    case 349:
      if (lookahead == 'n') ADVANCE(402);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(anon_sym_fallback);
      END_STATE();
    case 351:
      if (lookahead == 'e') ADVANCE(403);
      END_STATE();
    case 352:
      if (lookahead == 'm') ADVANCE(404);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(anon_sym_home_dir);
      if (lookahead == 'e') ADVANCE(405);
      END_STATE();
    case 354:
      if (lookahead == 'o') ADVANCE(406);
      END_STATE();
    case 355:
      if (lookahead == 'o') ADVANCE(407);
      END_STATE();
    case 356:
      if (lookahead == 'd') ADVANCE(408);
      END_STATE();
    case 357:
      if (lookahead == 'c') ADVANCE(409);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(anon_sym_just_pid);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(anon_sym_justfile);
      if (lookahead == '_') ADVANCE(410);
      END_STATE();
    case 360:
      if (lookahead == 'e') ADVANCE(411);
      END_STATE();
    case 361:
      if (lookahead == 'e') ADVANCE(412);
      END_STATE();
    case 362:
      if (lookahead == 'e') ADVANCE(413);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(anon_sym_num_cpus);
      END_STATE();
    case 364:
      if (lookahead == 'y') ADVANCE(414);
      END_STATE();
    case 365:
      if (lookahead == 'i') ADVANCE(415);
      END_STATE();
    case 366:
      if (lookahead == 's') ADVANCE(416);
      END_STATE();
    case 367:
      if (lookahead == 'a') ADVANCE(417);
      END_STATE();
    case 368:
      if (lookahead == 'r') ADVANCE(418);
      END_STATE();
    case 369:
      if (lookahead == 'a') ADVANCE(419);
      END_STATE();
    case 370:
      if (lookahead == 'i') ADVANCE(420);
      END_STATE();
    case 371:
      if (lookahead == 'b') ADVANCE(421);
      END_STATE();
    case 372:
      if (lookahead == 'a') ADVANCE(422);
      END_STATE();
    case 373:
      if (lookahead == 'e') ADVANCE(423);
      END_STATE();
    case 374:
      if (lookahead == 'i') ADVANCE(424);
      END_STATE();
    case 375:
      if (lookahead == 'i') ADVANCE(425);
      END_STATE();
    case 376:
      if (lookahead == 'e') ADVANCE(426);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(anon_sym_trim_end);
      if (lookahead == '_') ADVANCE(427);
      END_STATE();
    case 378:
      if (lookahead == 'r') ADVANCE(428);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(anon_sym_unstable);
      END_STATE();
    case 380:
      if (lookahead == 'e') ADVANCE(429);
      END_STATE();
    case 381:
      if (lookahead == 'e') ADVANCE(430);
      END_STATE();
    case 382:
      if (lookahead == 'p') ADVANCE(431);
      if (lookahead == 's') ADVANCE(432);
      END_STATE();
    case 383:
      if (lookahead == 'e') ADVANCE(433);
      END_STATE();
    case 384:
      if (lookahead == 'p') ADVANCE(434);
      END_STATE();
    case 385:
      if (lookahead == 'l') ADVANCE(435);
      END_STATE();
    case 386:
      if (lookahead == 'l') ADVANCE(436);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(anon_sym_cache_dir);
      if (lookahead == 'e') ADVANCE(437);
      END_STATE();
    case 388:
      if (lookahead == 'i') ADVANCE(438);
      END_STATE();
    case 389:
      if (lookahead == 'e') ADVANCE(439);
      END_STATE();
    case 390:
      if (lookahead == 'r') ADVANCE(440);
      END_STATE();
    case 391:
      if (lookahead == 'c') ADVANCE(441);
      END_STATE();
    case 392:
      if (lookahead == 'c') ADVANCE(442);
      END_STATE();
    case 393:
      if (lookahead == 'l') ADVANCE(443);
      END_STATE();
    case 394:
      if (lookahead == 'u') ADVANCE(444);
      END_STATE();
    case 395:
      if (lookahead == 'l') ADVANCE(445);
      END_STATE();
    case 396:
      if (lookahead == 'a') ADVANCE(446);
      END_STATE();
    case 397:
      if (lookahead == 't') ADVANCE(447);
      END_STATE();
    case 398:
      if (lookahead == 'q') ADVANCE(448);
      END_STATE();
    case 399:
      if (lookahead == 'i') ADVANCE(449);
      END_STATE();
    case 400:
      if (lookahead == 'r') ADVANCE(450);
      END_STATE();
    case 401:
      if (lookahead == 'e') ADVANCE(451);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(anon_sym_extension);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(anon_sym_file_name);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(anon_sym_file_stem);
      END_STATE();
    case 405:
      if (lookahead == 'c') ADVANCE(452);
      END_STATE();
    case 406:
      if (lookahead == 'm') ADVANCE(453);
      END_STATE();
    case 407:
      if (lookahead == 'n') ADVANCE(454);
      END_STATE();
    case 408:
      if (lookahead == 'e') ADVANCE(455);
      END_STATE();
    case 409:
      if (lookahead == 'u') ADVANCE(456);
      END_STATE();
    case 410:
      if (lookahead == 'd') ADVANCE(457);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(anon_sym_kebabcase);
      END_STATE();
    case 412:
      if (lookahead == 'l') ADVANCE(458);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(anon_sym_lowercase);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(anon_sym_os_family);
      END_STATE();
    case 415:
      if (lookahead == 'r') ADVANCE(459);
      END_STATE();
    case 416:
      if (lookahead == 't') ADVANCE(460);
      END_STATE();
    case 417:
      if (lookahead == 'l') ADVANCE(461);
      END_STATE();
    case 418:
      if (lookahead == 'e') ADVANCE(462);
      END_STATE();
    case 419:
      if (lookahead == 't') ADVANCE(463);
      END_STATE();
    case 420:
      if (lookahead == 'l') ADVANCE(464);
      END_STATE();
    case 421:
      if (lookahead == 'a') ADVANCE(465);
      END_STATE();
    case 422:
      if (lookahead == 'k') ADVANCE(466);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(anon_sym_snakecase);
      END_STATE();
    case 424:
      if (lookahead == 'r') ADVANCE(467);
      END_STATE();
    case 425:
      if (lookahead == 'l') ADVANCE(468);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(anon_sym_titlecase);
      END_STATE();
    case 427:
      if (lookahead == 'm') ADVANCE(469);
      END_STATE();
    case 428:
      if (lookahead == 't') ADVANCE(470);
      END_STATE();
    case 429:
      if (lookahead == 'l') ADVANCE(471);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(anon_sym_uppercase);
      END_STATE();
    case 431:
      if (lookahead == 'o') ADVANCE(472);
      END_STATE();
    case 432:
      if (lookahead == 'h') ADVANCE(473);
      END_STATE();
    case 433:
      if (lookahead == 'x') ADVANCE(474);
      END_STATE();
    case 434:
      if (lookahead == 'a') ADVANCE(475);
      END_STATE();
    case 435:
      if (lookahead == 'i') ADVANCE(476);
      END_STATE();
    case 436:
      if (lookahead == 'e') ADVANCE(477);
      END_STATE();
    case 437:
      if (lookahead == 'c') ADVANCE(478);
      END_STATE();
    case 438:
      if (lookahead == 'z') ADVANCE(479);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(anon_sym_capitalize);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(anon_sym_config_dir);
      if (lookahead == 'e') ADVANCE(480);
      END_STATE();
    case 441:
      if (lookahead == 'a') ADVANCE(481);
      END_STATE();
    case 442:
      if (lookahead == 't') ADVANCE(482);
      END_STATE();
    case 443:
      if (lookahead == '_') ADVANCE(483);
      END_STATE();
    case 444:
      if (lookahead == 't') ADVANCE(484);
      END_STATE();
    case 445:
      if (lookahead == 'e') ADVANCE(485);
      END_STATE();
    case 446:
      if (lookahead == 'd') ADVANCE(486);
      END_STATE();
    case 447:
      if (lookahead == 'h') ADVANCE(487);
      END_STATE();
    case 448:
      if (lookahead == 'u') ADVANCE(488);
      END_STATE();
    case 449:
      if (lookahead == '_') ADVANCE(489);
      END_STATE();
    case 450:
      if (lookahead == '_') ADVANCE(490);
      END_STATE();
    case 451:
      if (lookahead == '_') ADVANCE(491);
      END_STATE();
    case 452:
      if (lookahead == 't') ADVANCE(492);
      END_STATE();
    case 453:
      if (lookahead == 'm') ADVANCE(493);
      END_STATE();
    case 454:
      if (lookahead == '_') ADVANCE(494);
      END_STATE();
    case 455:
      if (lookahead == 'n') ADVANCE(495);
      END_STATE();
    case 456:
      if (lookahead == 't') ADVANCE(496);
      END_STATE();
    case 457:
      if (lookahead == 'i') ADVANCE(497);
      END_STATE();
    case 458:
      if (lookahead == 'c') ADVANCE(498);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(anon_sym_parent_dir);
      if (lookahead == 'e') ADVANCE(499);
      END_STATE();
    case 460:
      if (lookahead == 's') ADVANCE(500);
      END_STATE();
    case 461:
      if (lookahead == '-') ADVANCE(501);
      END_STATE();
    case 462:
      if (lookahead == 'g') ADVANCE(502);
      END_STATE();
    case 463:
      if (lookahead == 'c') ADVANCE(503);
      END_STATE();
    case 464:
      if (lookahead == 'e') ADVANCE(504);
      END_STATE();
    case 465:
      if (lookahead == 'b') ADVANCE(505);
      END_STATE();
    case 466:
      if (lookahead == 'e') ADVANCE(506);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(anon_sym_source_dir);
      if (lookahead == 'e') ADVANCE(507);
      END_STATE();
    case 468:
      if (lookahead == 'e') ADVANCE(508);
      END_STATE();
    case 469:
      if (lookahead == 'a') ADVANCE(509);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(anon_sym_trim_start);
      if (lookahead == '_') ADVANCE(510);
      END_STATE();
    case 471:
      if (lookahead == 'c') ADVANCE(511);
      END_STATE();
    case 472:
      if (lookahead == 'w') ADVANCE(512);
      END_STATE();
    case 473:
      if (lookahead == 'e') ADVANCE(513);
      END_STATE();
    case 474:
      if (lookahead == 't') ADVANCE(514);
      END_STATE();
    case 475:
      if (lookahead == 't') ADVANCE(515);
      END_STATE();
    case 476:
      if (lookahead == 'c') ADVANCE(516);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(anon_sym_blake3_file);
      END_STATE();
    case 478:
      if (lookahead == 't') ADVANCE(517);
      END_STATE();
    case 479:
      if (lookahead == 'e') ADVANCE(518);
      END_STATE();
    case 480:
      if (lookahead == 'c') ADVANCE(519);
      END_STATE();
    case 481:
      if (lookahead == 'l') ADVANCE(520);
      END_STATE();
    case 482:
      if (lookahead == 'o') ADVANCE(521);
      END_STATE();
    case 483:
      if (lookahead == 'd') ADVANCE(522);
      END_STATE();
    case 484:
      if (lookahead == 'c') ADVANCE(523);
      END_STATE();
    case 485:
      if (lookahead == 'n') ADVANCE(524);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(anon_sym_dotenv_DASHload);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(anon_sym_dotenv_DASHpath);
      END_STATE();
    case 488:
      if (lookahead == 'i') ADVANCE(525);
      END_STATE();
    case 489:
      if (lookahead == 'c') ADVANCE(526);
      END_STATE();
    case 490:
      if (lookahead == 'd') ADVANCE(527);
      END_STATE();
    case 491:
      if (lookahead == 'd') ADVANCE(528);
      END_STATE();
    case 492:
      if (lookahead == 'o') ADVANCE(529);
      END_STATE();
    case 493:
      if (lookahead == 'e') ADVANCE(530);
      END_STATE();
    case 494:
      if (lookahead == 'd') ADVANCE(531);
      END_STATE();
    case 495:
      if (lookahead == 'c') ADVANCE(532);
      END_STATE();
    case 496:
      if (lookahead == 'a') ADVANCE(533);
      END_STATE();
    case 497:
      if (lookahead == 'r') ADVANCE(534);
      END_STATE();
    case 498:
      if (lookahead == 'a') ADVANCE(535);
      END_STATE();
    case 499:
      if (lookahead == 'c') ADVANCE(536);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(anon_sym_path_exists);
      END_STATE();
    case 501:
      if (lookahead == 'a') ADVANCE(537);
      END_STATE();
    case 502:
      if (lookahead == 'e') ADVANCE(538);
      END_STATE();
    case 503:
      if (lookahead == 'h') ADVANCE(539);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(anon_sym_sha256_file);
      END_STATE();
    case 505:
      if (lookahead == 'c') ADVANCE(540);
      END_STATE();
    case 506:
      if (lookahead == 'c') ADVANCE(541);
      END_STATE();
    case 507:
      if (lookahead == 'c') ADVANCE(542);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(anon_sym_source_file);
      END_STATE();
    case 509:
      if (lookahead == 't') ADVANCE(543);
      END_STATE();
    case 510:
      if (lookahead == 'm') ADVANCE(544);
      END_STATE();
    case 511:
      if (lookahead == 'a') ADVANCE(545);
      END_STATE();
    case 512:
      if (lookahead == 'e') ADVANCE(546);
      END_STATE();
    case 513:
      if (lookahead == 'l') ADVANCE(547);
      END_STATE();
    case 514:
      if (lookahead == 'e') ADVANCE(548);
      END_STATE();
    case 515:
      if (lookahead == 'h') ADVANCE(549);
      END_STATE();
    case 516:
      if (lookahead == 'a') ADVANCE(550);
      END_STATE();
    case 517:
      if (lookahead == 'o') ADVANCE(551);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(anon_sym_canonicalize);
      END_STATE();
    case 519:
      if (lookahead == 't') ADVANCE(552);
      END_STATE();
    case 520:
      if (lookahead == '_') ADVANCE(553);
      END_STATE();
    case 521:
      if (lookahead == 'r') ADVANCE(554);
      END_STATE();
    case 522:
      if (lookahead == 'i') ADVANCE(555);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(anon_sym_datetime_utc);
      END_STATE();
    case 524:
      if (lookahead == 'a') ADVANCE(556);
      END_STATE();
    case 525:
      if (lookahead == 'r') ADVANCE(557);
      END_STATE();
    case 526:
      if (lookahead == 'o') ADVANCE(558);
      END_STATE();
    case 527:
      if (lookahead == 'e') ADVANCE(559);
      END_STATE();
    case 528:
      if (lookahead == 'i') ADVANCE(560);
      END_STATE();
    case 529:
      if (lookahead == 'r') ADVANCE(561);
      END_STATE();
    case 530:
      if (lookahead == 'n') ADVANCE(562);
      END_STATE();
    case 531:
      if (lookahead == 'i') ADVANCE(563);
      END_STATE();
    case 532:
      if (lookahead == 'y') ADVANCE(564);
      END_STATE();
    case 533:
      if (lookahead == 'b') ADVANCE(565);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(anon_sym_justfile_dir);
      if (lookahead == 'e') ADVANCE(566);
      END_STATE();
    case 535:
      if (lookahead == 's') ADVANCE(567);
      END_STATE();
    case 536:
      if (lookahead == 't') ADVANCE(568);
      END_STATE();
    case 537:
      if (lookahead == 'r') ADVANCE(569);
      END_STATE();
    case 538:
      if (lookahead == 'x') ADVANCE(570);
      END_STATE();
    case 539:
      if (lookahead == 'e') ADVANCE(571);
      END_STATE();
    case 540:
      if (lookahead == 'a') ADVANCE(572);
      END_STATE();
    case 541:
      if (lookahead == 'a') ADVANCE(573);
      END_STATE();
    case 542:
      if (lookahead == 't') ADVANCE(574);
      END_STATE();
    case 543:
      if (lookahead == 'c') ADVANCE(575);
      END_STATE();
    case 544:
      if (lookahead == 'a') ADVANCE(576);
      END_STATE();
    case 545:
      if (lookahead == 's') ADVANCE(577);
      END_STATE();
    case 546:
      if (lookahead == 'r') ADVANCE(578);
      END_STATE();
    case 547:
      if (lookahead == 'l') ADVANCE(579);
      END_STATE();
    case 548:
      if (lookahead == 'n') ADVANCE(580);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(anon_sym_absolute_path);
      END_STATE();
    case 550:
      if (lookahead == 't') ADVANCE(581);
      END_STATE();
    case 551:
      if (lookahead == 'r') ADVANCE(582);
      END_STATE();
    case 552:
      if (lookahead == 'o') ADVANCE(583);
      END_STATE();
    case 553:
      if (lookahead == 'd') ADVANCE(584);
      END_STATE();
    case 554:
      if (lookahead == 'y') ADVANCE(585);
      END_STATE();
    case 555:
      if (lookahead == 'r') ADVANCE(586);
      END_STATE();
    case 556:
      if (lookahead == 'm') ADVANCE(587);
      END_STATE();
    case 557:
      if (lookahead == 'e') ADVANCE(588);
      END_STATE();
    case 558:
      if (lookahead == 'm') ADVANCE(589);
      END_STATE();
    case 559:
      if (lookahead == 'f') ADVANCE(590);
      END_STATE();
    case 560:
      if (lookahead == 'r') ADVANCE(591);
      END_STATE();
    case 561:
      if (lookahead == 'y') ADVANCE(592);
      END_STATE();
    case 562:
      if (lookahead == 't') ADVANCE(593);
      END_STATE();
    case 563:
      if (lookahead == 'r') ADVANCE(594);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(anon_sym_is_dependency);
      END_STATE();
    case 565:
      if (lookahead == 'l') ADVANCE(595);
      END_STATE();
    case 566:
      if (lookahead == 'c') ADVANCE(596);
      END_STATE();
    case 567:
      if (lookahead == 'e') ADVANCE(597);
      END_STATE();
    case 568:
      if (lookahead == 'o') ADVANCE(598);
      END_STATE();
    case 569:
      if (lookahead == 'g') ADVANCE(599);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(anon_sym_replace_regex);
      END_STATE();
    case 571:
      if (lookahead == 's') ADVANCE(600);
      END_STATE();
    case 572:
      if (lookahead == 's') ADVANCE(601);
      END_STATE();
    case 573:
      if (lookahead == 's') ADVANCE(602);
      END_STATE();
    case 574:
      if (lookahead == 'o') ADVANCE(603);
      END_STATE();
    case 575:
      if (lookahead == 'h') ADVANCE(604);
      END_STATE();
    case 576:
      if (lookahead == 't') ADVANCE(605);
      END_STATE();
    case 577:
      if (lookahead == 'e') ADVANCE(606);
      END_STATE();
    case 578:
      if (lookahead == 's') ADVANCE(607);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(anon_sym_windows_DASHshell);
      END_STATE();
    case 580:
      if (lookahead == 's') ADVANCE(608);
      END_STATE();
    case 581:
      if (lookahead == 'e') ADVANCE(609);
      END_STATE();
    case 582:
      if (lookahead == 'y') ADVANCE(610);
      END_STATE();
    case 583:
      if (lookahead == 'r') ADVANCE(611);
      END_STATE();
    case 584:
      if (lookahead == 'i') ADVANCE(612);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(anon_sym_data_directory);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(anon_sym_data_local_dir);
      if (lookahead == 'e') ADVANCE(613);
      END_STATE();
    case 587:
      if (lookahead == 'e') ADVANCE(614);
      END_STATE();
    case 588:
      if (lookahead == 'd') ADVANCE(615);
      END_STATE();
    case 589:
      if (lookahead == 'p') ADVANCE(616);
      END_STATE();
    case 590:
      if (lookahead == 'a') ADVANCE(617);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(anon_sym_executable_dir);
      if (lookahead == 'e') ADVANCE(618);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(anon_sym_home_directory);
      END_STATE();
    case 593:
      if (lookahead == 's') ADVANCE(619);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(anon_sym_invocation_dir);
      if (lookahead == '_') ADVANCE(620);
      if (lookahead == 'e') ADVANCE(621);
      END_STATE();
    case 595:
      if (lookahead == 'e') ADVANCE(622);
      END_STATE();
    case 596:
      if (lookahead == 't') ADVANCE(623);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(anon_sym_lowercamelcase);
      END_STATE();
    case 598:
      if (lookahead == 'r') ADVANCE(624);
      END_STATE();
    case 599:
      if (lookahead == 'u') ADVANCE(625);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(anon_sym_semver_matches);
      END_STATE();
    case 601:
      if (lookahead == 'e') ADVANCE(626);
      END_STATE();
    case 602:
      if (lookahead == 'e') ADVANCE(627);
      END_STATE();
    case 603:
      if (lookahead == 'r') ADVANCE(628);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(anon_sym_trim_end_match);
      if (lookahead == 'e') ADVANCE(629);
      END_STATE();
    case 605:
      if (lookahead == 'c') ADVANCE(630);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(anon_sym_uppercamelcase);
      END_STATE();
    case 607:
      if (lookahead == 'h') ADVANCE(631);
      END_STATE();
    case 608:
      if (lookahead == 'i') ADVANCE(632);
      END_STATE();
    case 609:
      if (lookahead == '-') ADVANCE(633);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(anon_sym_cache_directory);
      END_STATE();
    case 611:
      if (lookahead == 'y') ADVANCE(634);
      END_STATE();
    case 612:
      if (lookahead == 'r') ADVANCE(635);
      END_STATE();
    case 613:
      if (lookahead == 'c') ADVANCE(636);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(anon_sym_dotenv_DASHfilename);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(anon_sym_dotenv_DASHrequired);
      END_STATE();
    case 616:
      if (lookahead == 'o') ADVANCE(637);
      END_STATE();
    case 617:
      if (lookahead == 'u') ADVANCE(638);
      END_STATE();
    case 618:
      if (lookahead == 'c') ADVANCE(639);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(anon_sym_ignore_DASHcomments);
      END_STATE();
    case 620:
      if (lookahead == 'n') ADVANCE(640);
      END_STATE();
    case 621:
      if (lookahead == 'c') ADVANCE(641);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(anon_sym_just_executable);
      END_STATE();
    case 623:
      if (lookahead == 'o') ADVANCE(642);
      END_STATE();
    case 624:
      if (lookahead == 'y') ADVANCE(643);
      END_STATE();
    case 625:
      if (lookahead == 'm') ADVANCE(644);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(anon_sym_shoutykebabcase);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(anon_sym_shoutysnakecase);
      END_STATE();
    case 628:
      if (lookahead == 'y') ADVANCE(645);
      END_STATE();
    case 629:
      if (lookahead == 's') ADVANCE(646);
      END_STATE();
    case 630:
      if (lookahead == 'h') ADVANCE(647);
      END_STATE();
    case 631:
      if (lookahead == 'e') ADVANCE(648);
      END_STATE();
    case 632:
      if (lookahead == 'o') ADVANCE(649);
      END_STATE();
    case 633:
      if (lookahead == 'r') ADVANCE(650);
      if (lookahead == 'v') ADVANCE(651);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(anon_sym_config_directory);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(anon_sym_config_local_dir);
      if (lookahead == 'e') ADVANCE(652);
      END_STATE();
    case 636:
      if (lookahead == 't') ADVANCE(653);
      END_STATE();
    case 637:
      if (lookahead == 'n') ADVANCE(654);
      END_STATE();
    case 638:
      if (lookahead == 'l') ADVANCE(655);
      END_STATE();
    case 639:
      if (lookahead == 't') ADVANCE(656);
      END_STATE();
    case 640:
      if (lookahead == 'a') ADVANCE(657);
      END_STATE();
    case 641:
      if (lookahead == 't') ADVANCE(658);
      END_STATE();
    case 642:
      if (lookahead == 'r') ADVANCE(659);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(anon_sym_parent_directory);
      END_STATE();
    case 644:
      if (lookahead == 'e') ADVANCE(660);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(anon_sym_source_directory);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(anon_sym_trim_end_matches);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(anon_sym_trim_start_match);
      if (lookahead == 'e') ADVANCE(661);
      END_STATE();
    case 648:
      if (lookahead == 'l') ADVANCE(662);
      END_STATE();
    case 649:
      if (lookahead == 'n') ADVANCE(663);
      END_STATE();
    case 650:
      if (lookahead == 'e') ADVANCE(664);
      END_STATE();
    case 651:
      if (lookahead == 'a') ADVANCE(665);
      END_STATE();
    case 652:
      if (lookahead == 'c') ADVANCE(666);
      END_STATE();
    case 653:
      if (lookahead == 'o') ADVANCE(667);
      END_STATE();
    case 654:
      if (lookahead == 'e') ADVANCE(668);
      END_STATE();
    case 655:
      if (lookahead == 't') ADVANCE(669);
      END_STATE();
    case 656:
      if (lookahead == 'o') ADVANCE(670);
      END_STATE();
    case 657:
      if (lookahead == 't') ADVANCE(671);
      END_STATE();
    case 658:
      if (lookahead == 'o') ADVANCE(672);
      END_STATE();
    case 659:
      if (lookahead == 'y') ADVANCE(673);
      END_STATE();
    case 660:
      if (lookahead == 'n') ADVANCE(674);
      END_STATE();
    case 661:
      if (lookahead == 's') ADVANCE(675);
      END_STATE();
    case 662:
      if (lookahead == 'l') ADVANCE(676);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(anon_sym_without_extension);
      END_STATE();
    case 664:
      if (lookahead == 'c') ADVANCE(677);
      END_STATE();
    case 665:
      if (lookahead == 'r') ADVANCE(678);
      END_STATE();
    case 666:
      if (lookahead == 't') ADVANCE(679);
      END_STATE();
    case 667:
      if (lookahead == 'r') ADVANCE(680);
      END_STATE();
    case 668:
      if (lookahead == 'n') ADVANCE(681);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(anon_sym_env_var_or_default);
      END_STATE();
    case 670:
      if (lookahead == 'r') ADVANCE(682);
      END_STATE();
    case 671:
      if (lookahead == 'i') ADVANCE(683);
      END_STATE();
    case 672:
      if (lookahead == 'r') ADVANCE(684);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(anon_sym_justfile_directory);
      END_STATE();
    case 674:
      if (lookahead == 't') ADVANCE(685);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(anon_sym_trim_start_matches);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(anon_sym_windows_DASHpowershell);
      END_STATE();
    case 677:
      if (lookahead == 'i') ADVANCE(686);
      END_STATE();
    case 678:
      if (lookahead == 'i') ADVANCE(687);
      END_STATE();
    case 679:
      if (lookahead == 'o') ADVANCE(688);
      END_STATE();
    case 680:
      if (lookahead == 'y') ADVANCE(689);
      END_STATE();
    case 681:
      if (lookahead == 't') ADVANCE(690);
      END_STATE();
    case 682:
      if (lookahead == 'y') ADVANCE(691);
      END_STATE();
    case 683:
      if (lookahead == 'v') ADVANCE(692);
      END_STATE();
    case 684:
      if (lookahead == 'y') ADVANCE(693);
      END_STATE();
    case 685:
      if (lookahead == 's') ADVANCE(694);
      END_STATE();
    case 686:
      if (lookahead == 'p') ADVANCE(695);
      END_STATE();
    case 687:
      if (lookahead == 'a') ADVANCE(696);
      END_STATE();
    case 688:
      if (lookahead == 'r') ADVANCE(697);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(anon_sym_data_local_directory);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(anon_sym_encode_uri_component);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(anon_sym_executable_directory);
      END_STATE();
    case 692:
      if (lookahead == 'e') ADVANCE(698);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(anon_sym_invocation_directory);
      if (lookahead == '_') ADVANCE(699);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(anon_sym_positional_DASHarguments);
      END_STATE();
    case 695:
      if (lookahead == 'e') ADVANCE(700);
      END_STATE();
    case 696:
      if (lookahead == 'b') ADVANCE(701);
      END_STATE();
    case 697:
      if (lookahead == 'y') ADVANCE(702);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(anon_sym_invocation_dir_native);
      END_STATE();
    case 699:
      if (lookahead == 'n') ADVANCE(703);
      END_STATE();
    case 700:
      if (lookahead == 's') ADVANCE(704);
      END_STATE();
    case 701:
      if (lookahead == 'l') ADVANCE(705);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(anon_sym_config_local_directory);
      END_STATE();
    case 703:
      if (lookahead == 'a') ADVANCE(706);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(anon_sym_allow_DASHduplicate_DASHrecipes);
      END_STATE();
    case 705:
      if (lookahead == 'e') ADVANCE(707);
      END_STATE();
    case 706:
      if (lookahead == 't') ADVANCE(708);
      END_STATE();
    case 707:
      if (lookahead == 's') ADVANCE(709);
      END_STATE();
    case 708:
      if (lookahead == 'i') ADVANCE(710);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(anon_sym_allow_DASHduplicate_DASHvariables);
      END_STATE();
    case 710:
      if (lookahead == 'v') ADVANCE(711);
      END_STATE();
    case 711:
      if (lookahead == 'e') ADVANCE(712);
      END_STATE();
    case 712:
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
  [31] = {.lex_state = 4},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 4},
  [35] = {.lex_state = 4},
  [36] = {.lex_state = 4},
  [37] = {.lex_state = 4},
  [38] = {.lex_state = 4},
  [39] = {.lex_state = 4},
  [40] = {.lex_state = 4},
  [41] = {.lex_state = 4},
  [42] = {.lex_state = 4},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 4},
  [45] = {.lex_state = 4},
  [46] = {.lex_state = 4},
  [47] = {.lex_state = 4},
  [48] = {.lex_state = 4},
  [49] = {.lex_state = 4},
  [50] = {.lex_state = 4},
  [51] = {.lex_state = 4},
  [52] = {.lex_state = 4},
  [53] = {.lex_state = 4},
  [54] = {.lex_state = 4},
  [55] = {.lex_state = 4},
  [56] = {.lex_state = 4},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 4},
  [74] = {.lex_state = 4},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 7},
  [78] = {.lex_state = 1},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 7},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 1},
  [85] = {.lex_state = 7},
  [86] = {.lex_state = 1},
  [87] = {.lex_state = 1},
  [88] = {.lex_state = 1},
  [89] = {.lex_state = 7},
  [90] = {.lex_state = 7},
  [91] = {.lex_state = 2},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 2},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 3},
  [98] = {.lex_state = 3},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 2},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 3},
  [105] = {.lex_state = 4},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 3},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 2},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 4},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 4},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 71},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 8},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 4},
  [144] = {.lex_state = 35},
  [145] = {.lex_state = 8},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 4},
  [151] = {.lex_state = 4},
  [152] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_comment] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_alias] = ACTIONS(1),
    [anon_sym_COLON_EQ] = ACTIONS(1),
    [anon_sym_export] = ACTIONS(1),
    [aux_sym_import_token1] = ACTIONS(1),
    [aux_sym_mod_token1] = ACTIONS(1),
    [anon_sym_set] = ACTIONS(1),
    [anon_sym_allow_DASHduplicate_DASHrecipes] = ACTIONS(1),
    [anon_sym_allow_DASHduplicate_DASHvariables] = ACTIONS(1),
    [anon_sym_dotenv_DASHfilename] = ACTIONS(1),
    [anon_sym_dotenv_DASHload] = ACTIONS(1),
    [anon_sym_dotenv_DASHpath] = ACTIONS(1),
    [anon_sym_dotenv_DASHrequired] = ACTIONS(1),
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
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
    [anon_sym_assert] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_EQ_TILDE] = ACTIONS(1),
    [anon_sym_arch] = ACTIONS(1),
    [anon_sym_num_cpus] = ACTIONS(1),
    [anon_sym_os] = ACTIONS(1),
    [anon_sym_os_family] = ACTIONS(1),
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
    [anon_sym_parent_dir] = ACTIONS(1),
    [anon_sym_parent_directory] = ACTIONS(1),
    [anon_sym_without_extension] = ACTIONS(1),
    [anon_sym_clean] = ACTIONS(1),
    [anon_sym_join] = ACTIONS(1),
    [anon_sym_path_exists] = ACTIONS(1),
    [anon_sym_error] = ACTIONS(1),
    [anon_sym_blake3] = ACTIONS(1),
    [anon_sym_blake3_file] = ACTIONS(1),
    [anon_sym_sha256] = ACTIONS(1),
    [anon_sym_sha256_file] = ACTIONS(1),
    [anon_sym_uuid] = ACTIONS(1),
    [anon_sym_choose] = ACTIONS(1),
    [anon_sym_datetime] = ACTIONS(1),
    [anon_sym_datetime_utc] = ACTIONS(1),
    [anon_sym_semver_matches] = ACTIONS(1),
    [anon_sym_cache_dir] = ACTIONS(1),
    [anon_sym_cache_directory] = ACTIONS(1),
    [anon_sym_config_dir] = ACTIONS(1),
    [anon_sym_config_directory] = ACTIONS(1),
    [anon_sym_config_local_dir] = ACTIONS(1),
    [anon_sym_config_local_directory] = ACTIONS(1),
    [anon_sym_data_dir] = ACTIONS(1),
    [anon_sym_data_directory] = ACTIONS(1),
    [anon_sym_data_local_dir] = ACTIONS(1),
    [anon_sym_data_local_directory] = ACTIONS(1),
    [anon_sym_executable_dir] = ACTIONS(1),
    [anon_sym_executable_directory] = ACTIONS(1),
    [anon_sym_home_dir] = ACTIONS(1),
    [anon_sym_home_directory] = ACTIONS(1),
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
    [sym_file] = STATE(137),
    [sym_alias] = STATE(70),
    [sym_assignment] = STATE(70),
    [sym_import] = STATE(70),
    [sym_mod] = STATE(70),
    [sym_setting] = STATE(70),
    [sym_expression] = STATE(70),
    [sym_value] = STATE(26),
    [sym_builtin_function_call] = STATE(27),
    [sym_function_call] = STATE(27),
    [sym_backtick] = STATE(27),
    [sym_indented_backtick] = STATE(27),
    [sym_string] = STATE(27),
    [sym_indented_normal_string] = STATE(7),
    [sym_normal_string] = STATE(7),
    [sym_indented_raw_string] = STATE(7),
    [sym_raw_string] = STATE(7),
    [sym_comment] = STATE(1),
    [aux_sym_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_alias] = ACTIONS(9),
    [anon_sym_export] = ACTIONS(11),
    [aux_sym_import_token1] = ACTIONS(13),
    [aux_sym_mod_token1] = ACTIONS(15),
    [anon_sym_set] = ACTIONS(17),
    [anon_sym_shell] = ACTIONS(19),
    [anon_sym_if] = ACTIONS(21),
    [anon_sym_assert] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_arch] = ACTIONS(27),
    [anon_sym_num_cpus] = ACTIONS(27),
    [anon_sym_os] = ACTIONS(27),
    [anon_sym_os_family] = ACTIONS(27),
    [anon_sym_env_var] = ACTIONS(29),
    [anon_sym_env_var_or_default] = ACTIONS(31),
    [anon_sym_env] = ACTIONS(33),
    [anon_sym_is_dependency] = ACTIONS(27),
    [anon_sym_invocation_dir] = ACTIONS(27),
    [anon_sym_invocation_dir_native] = ACTIONS(27),
    [anon_sym_invocation_directory] = ACTIONS(27),
    [anon_sym_invocation_directory_native] = ACTIONS(27),
    [anon_sym_justfile] = ACTIONS(27),
    [anon_sym_justfile_dir] = ACTIONS(27),
    [anon_sym_justfile_directory] = ACTIONS(27),
    [anon_sym_source_dir] = ACTIONS(27),
    [anon_sym_source_directory] = ACTIONS(27),
    [anon_sym_source_file] = ACTIONS(27),
    [anon_sym_just_executable] = ACTIONS(27),
    [anon_sym_just_pid] = ACTIONS(27),
    [anon_sym_append] = ACTIONS(31),
    [anon_sym_prepend] = ACTIONS(31),
    [anon_sym_encode_uri_component] = ACTIONS(29),
    [anon_sym_quote] = ACTIONS(29),
    [anon_sym_replace] = ACTIONS(35),
    [anon_sym_replace_regex] = ACTIONS(35),
    [anon_sym_trim] = ACTIONS(29),
    [anon_sym_trim_end] = ACTIONS(29),
    [anon_sym_trim_end_match] = ACTIONS(31),
    [anon_sym_trim_end_matches] = ACTIONS(31),
    [anon_sym_trim_start] = ACTIONS(29),
    [anon_sym_trim_start_match] = ACTIONS(31),
    [anon_sym_trim_start_matches] = ACTIONS(31),
    [anon_sym_capitalize] = ACTIONS(29),
    [anon_sym_kebabcase] = ACTIONS(29),
    [anon_sym_lowercamelcase] = ACTIONS(29),
    [anon_sym_lowercase] = ACTIONS(29),
    [anon_sym_shoutykebabcase] = ACTIONS(29),
    [anon_sym_shoutysnakecase] = ACTIONS(29),
    [anon_sym_snakecase] = ACTIONS(29),
    [anon_sym_titlecase] = ACTIONS(29),
    [anon_sym_uppercamelcase] = ACTIONS(29),
    [anon_sym_uppercase] = ACTIONS(29),
    [anon_sym_absolute_path] = ACTIONS(29),
    [anon_sym_canonicalize] = ACTIONS(29),
    [anon_sym_extension] = ACTIONS(29),
    [anon_sym_file_name] = ACTIONS(29),
    [anon_sym_file_stem] = ACTIONS(29),
    [anon_sym_parent_dir] = ACTIONS(29),
    [anon_sym_parent_directory] = ACTIONS(29),
    [anon_sym_without_extension] = ACTIONS(29),
    [anon_sym_clean] = ACTIONS(29),
    [anon_sym_join] = ACTIONS(19),
    [anon_sym_path_exists] = ACTIONS(29),
    [anon_sym_error] = ACTIONS(29),
    [anon_sym_blake3] = ACTIONS(29),
    [anon_sym_blake3_file] = ACTIONS(29),
    [anon_sym_sha256] = ACTIONS(29),
    [anon_sym_sha256_file] = ACTIONS(29),
    [anon_sym_uuid] = ACTIONS(27),
    [anon_sym_choose] = ACTIONS(31),
    [anon_sym_datetime] = ACTIONS(29),
    [anon_sym_datetime_utc] = ACTIONS(29),
    [anon_sym_semver_matches] = ACTIONS(31),
    [anon_sym_cache_dir] = ACTIONS(27),
    [anon_sym_cache_directory] = ACTIONS(27),
    [anon_sym_config_dir] = ACTIONS(27),
    [anon_sym_config_directory] = ACTIONS(27),
    [anon_sym_config_local_dir] = ACTIONS(27),
    [anon_sym_config_local_directory] = ACTIONS(27),
    [anon_sym_data_dir] = ACTIONS(27),
    [anon_sym_data_directory] = ACTIONS(27),
    [anon_sym_data_local_dir] = ACTIONS(27),
    [anon_sym_data_local_directory] = ACTIONS(27),
    [anon_sym_executable_dir] = ACTIONS(27),
    [anon_sym_executable_directory] = ACTIONS(27),
    [anon_sym_home_dir] = ACTIONS(27),
    [anon_sym_home_directory] = ACTIONS(27),
    [anon_sym_BQUOTE] = ACTIONS(37),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(39),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(41),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(45),
    [anon_sym_SQUOTE] = ACTIONS(47),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [2] = {
    [sym_alias] = STATE(70),
    [sym_assignment] = STATE(70),
    [sym_import] = STATE(70),
    [sym_mod] = STATE(70),
    [sym_setting] = STATE(70),
    [sym_expression] = STATE(70),
    [sym_value] = STATE(26),
    [sym_builtin_function_call] = STATE(27),
    [sym_function_call] = STATE(27),
    [sym_backtick] = STATE(27),
    [sym_indented_backtick] = STATE(27),
    [sym_string] = STATE(27),
    [sym_indented_normal_string] = STATE(7),
    [sym_normal_string] = STATE(7),
    [sym_indented_raw_string] = STATE(7),
    [sym_raw_string] = STATE(7),
    [sym_comment] = STATE(2),
    [aux_sym_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(49),
    [sym_identifier] = ACTIONS(51),
    [anon_sym_alias] = ACTIONS(54),
    [anon_sym_export] = ACTIONS(57),
    [aux_sym_import_token1] = ACTIONS(60),
    [aux_sym_mod_token1] = ACTIONS(63),
    [anon_sym_set] = ACTIONS(66),
    [anon_sym_shell] = ACTIONS(69),
    [anon_sym_if] = ACTIONS(72),
    [anon_sym_assert] = ACTIONS(75),
    [anon_sym_LPAREN] = ACTIONS(78),
    [anon_sym_arch] = ACTIONS(81),
    [anon_sym_num_cpus] = ACTIONS(81),
    [anon_sym_os] = ACTIONS(81),
    [anon_sym_os_family] = ACTIONS(81),
    [anon_sym_env_var] = ACTIONS(84),
    [anon_sym_env_var_or_default] = ACTIONS(87),
    [anon_sym_env] = ACTIONS(90),
    [anon_sym_is_dependency] = ACTIONS(81),
    [anon_sym_invocation_dir] = ACTIONS(81),
    [anon_sym_invocation_dir_native] = ACTIONS(81),
    [anon_sym_invocation_directory] = ACTIONS(81),
    [anon_sym_invocation_directory_native] = ACTIONS(81),
    [anon_sym_justfile] = ACTIONS(81),
    [anon_sym_justfile_dir] = ACTIONS(81),
    [anon_sym_justfile_directory] = ACTIONS(81),
    [anon_sym_source_dir] = ACTIONS(81),
    [anon_sym_source_directory] = ACTIONS(81),
    [anon_sym_source_file] = ACTIONS(81),
    [anon_sym_just_executable] = ACTIONS(81),
    [anon_sym_just_pid] = ACTIONS(81),
    [anon_sym_append] = ACTIONS(87),
    [anon_sym_prepend] = ACTIONS(87),
    [anon_sym_encode_uri_component] = ACTIONS(84),
    [anon_sym_quote] = ACTIONS(84),
    [anon_sym_replace] = ACTIONS(93),
    [anon_sym_replace_regex] = ACTIONS(93),
    [anon_sym_trim] = ACTIONS(84),
    [anon_sym_trim_end] = ACTIONS(84),
    [anon_sym_trim_end_match] = ACTIONS(87),
    [anon_sym_trim_end_matches] = ACTIONS(87),
    [anon_sym_trim_start] = ACTIONS(84),
    [anon_sym_trim_start_match] = ACTIONS(87),
    [anon_sym_trim_start_matches] = ACTIONS(87),
    [anon_sym_capitalize] = ACTIONS(84),
    [anon_sym_kebabcase] = ACTIONS(84),
    [anon_sym_lowercamelcase] = ACTIONS(84),
    [anon_sym_lowercase] = ACTIONS(84),
    [anon_sym_shoutykebabcase] = ACTIONS(84),
    [anon_sym_shoutysnakecase] = ACTIONS(84),
    [anon_sym_snakecase] = ACTIONS(84),
    [anon_sym_titlecase] = ACTIONS(84),
    [anon_sym_uppercamelcase] = ACTIONS(84),
    [anon_sym_uppercase] = ACTIONS(84),
    [anon_sym_absolute_path] = ACTIONS(84),
    [anon_sym_canonicalize] = ACTIONS(84),
    [anon_sym_extension] = ACTIONS(84),
    [anon_sym_file_name] = ACTIONS(84),
    [anon_sym_file_stem] = ACTIONS(84),
    [anon_sym_parent_dir] = ACTIONS(84),
    [anon_sym_parent_directory] = ACTIONS(84),
    [anon_sym_without_extension] = ACTIONS(84),
    [anon_sym_clean] = ACTIONS(84),
    [anon_sym_join] = ACTIONS(69),
    [anon_sym_path_exists] = ACTIONS(84),
    [anon_sym_error] = ACTIONS(84),
    [anon_sym_blake3] = ACTIONS(84),
    [anon_sym_blake3_file] = ACTIONS(84),
    [anon_sym_sha256] = ACTIONS(84),
    [anon_sym_sha256_file] = ACTIONS(84),
    [anon_sym_uuid] = ACTIONS(81),
    [anon_sym_choose] = ACTIONS(87),
    [anon_sym_datetime] = ACTIONS(84),
    [anon_sym_datetime_utc] = ACTIONS(84),
    [anon_sym_semver_matches] = ACTIONS(87),
    [anon_sym_cache_dir] = ACTIONS(81),
    [anon_sym_cache_directory] = ACTIONS(81),
    [anon_sym_config_dir] = ACTIONS(81),
    [anon_sym_config_directory] = ACTIONS(81),
    [anon_sym_config_local_dir] = ACTIONS(81),
    [anon_sym_config_local_directory] = ACTIONS(81),
    [anon_sym_data_dir] = ACTIONS(81),
    [anon_sym_data_directory] = ACTIONS(81),
    [anon_sym_data_local_dir] = ACTIONS(81),
    [anon_sym_data_local_directory] = ACTIONS(81),
    [anon_sym_executable_dir] = ACTIONS(81),
    [anon_sym_executable_directory] = ACTIONS(81),
    [anon_sym_home_dir] = ACTIONS(81),
    [anon_sym_home_directory] = ACTIONS(81),
    [anon_sym_BQUOTE] = ACTIONS(96),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(99),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(102),
    [anon_sym_DQUOTE] = ACTIONS(105),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(108),
    [anon_sym_SQUOTE] = ACTIONS(111),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [3] = {
    [sym_alias] = STATE(70),
    [sym_assignment] = STATE(70),
    [sym_import] = STATE(70),
    [sym_mod] = STATE(70),
    [sym_setting] = STATE(70),
    [sym_expression] = STATE(70),
    [sym_value] = STATE(26),
    [sym_builtin_function_call] = STATE(27),
    [sym_function_call] = STATE(27),
    [sym_backtick] = STATE(27),
    [sym_indented_backtick] = STATE(27),
    [sym_string] = STATE(27),
    [sym_indented_normal_string] = STATE(7),
    [sym_normal_string] = STATE(7),
    [sym_indented_raw_string] = STATE(7),
    [sym_raw_string] = STATE(7),
    [sym_comment] = STATE(3),
    [aux_sym_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(114),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_alias] = ACTIONS(9),
    [anon_sym_export] = ACTIONS(11),
    [aux_sym_import_token1] = ACTIONS(13),
    [aux_sym_mod_token1] = ACTIONS(15),
    [anon_sym_set] = ACTIONS(17),
    [anon_sym_shell] = ACTIONS(19),
    [anon_sym_if] = ACTIONS(21),
    [anon_sym_assert] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_arch] = ACTIONS(27),
    [anon_sym_num_cpus] = ACTIONS(27),
    [anon_sym_os] = ACTIONS(27),
    [anon_sym_os_family] = ACTIONS(27),
    [anon_sym_env_var] = ACTIONS(29),
    [anon_sym_env_var_or_default] = ACTIONS(31),
    [anon_sym_env] = ACTIONS(33),
    [anon_sym_is_dependency] = ACTIONS(27),
    [anon_sym_invocation_dir] = ACTIONS(27),
    [anon_sym_invocation_dir_native] = ACTIONS(27),
    [anon_sym_invocation_directory] = ACTIONS(27),
    [anon_sym_invocation_directory_native] = ACTIONS(27),
    [anon_sym_justfile] = ACTIONS(27),
    [anon_sym_justfile_dir] = ACTIONS(27),
    [anon_sym_justfile_directory] = ACTIONS(27),
    [anon_sym_source_dir] = ACTIONS(27),
    [anon_sym_source_directory] = ACTIONS(27),
    [anon_sym_source_file] = ACTIONS(27),
    [anon_sym_just_executable] = ACTIONS(27),
    [anon_sym_just_pid] = ACTIONS(27),
    [anon_sym_append] = ACTIONS(31),
    [anon_sym_prepend] = ACTIONS(31),
    [anon_sym_encode_uri_component] = ACTIONS(29),
    [anon_sym_quote] = ACTIONS(29),
    [anon_sym_replace] = ACTIONS(35),
    [anon_sym_replace_regex] = ACTIONS(35),
    [anon_sym_trim] = ACTIONS(29),
    [anon_sym_trim_end] = ACTIONS(29),
    [anon_sym_trim_end_match] = ACTIONS(31),
    [anon_sym_trim_end_matches] = ACTIONS(31),
    [anon_sym_trim_start] = ACTIONS(29),
    [anon_sym_trim_start_match] = ACTIONS(31),
    [anon_sym_trim_start_matches] = ACTIONS(31),
    [anon_sym_capitalize] = ACTIONS(29),
    [anon_sym_kebabcase] = ACTIONS(29),
    [anon_sym_lowercamelcase] = ACTIONS(29),
    [anon_sym_lowercase] = ACTIONS(29),
    [anon_sym_shoutykebabcase] = ACTIONS(29),
    [anon_sym_shoutysnakecase] = ACTIONS(29),
    [anon_sym_snakecase] = ACTIONS(29),
    [anon_sym_titlecase] = ACTIONS(29),
    [anon_sym_uppercamelcase] = ACTIONS(29),
    [anon_sym_uppercase] = ACTIONS(29),
    [anon_sym_absolute_path] = ACTIONS(29),
    [anon_sym_canonicalize] = ACTIONS(29),
    [anon_sym_extension] = ACTIONS(29),
    [anon_sym_file_name] = ACTIONS(29),
    [anon_sym_file_stem] = ACTIONS(29),
    [anon_sym_parent_dir] = ACTIONS(29),
    [anon_sym_parent_directory] = ACTIONS(29),
    [anon_sym_without_extension] = ACTIONS(29),
    [anon_sym_clean] = ACTIONS(29),
    [anon_sym_join] = ACTIONS(19),
    [anon_sym_path_exists] = ACTIONS(29),
    [anon_sym_error] = ACTIONS(29),
    [anon_sym_blake3] = ACTIONS(29),
    [anon_sym_blake3_file] = ACTIONS(29),
    [anon_sym_sha256] = ACTIONS(29),
    [anon_sym_sha256_file] = ACTIONS(29),
    [anon_sym_uuid] = ACTIONS(27),
    [anon_sym_choose] = ACTIONS(31),
    [anon_sym_datetime] = ACTIONS(29),
    [anon_sym_datetime_utc] = ACTIONS(29),
    [anon_sym_semver_matches] = ACTIONS(31),
    [anon_sym_cache_dir] = ACTIONS(27),
    [anon_sym_cache_directory] = ACTIONS(27),
    [anon_sym_config_dir] = ACTIONS(27),
    [anon_sym_config_directory] = ACTIONS(27),
    [anon_sym_config_local_dir] = ACTIONS(27),
    [anon_sym_config_local_directory] = ACTIONS(27),
    [anon_sym_data_dir] = ACTIONS(27),
    [anon_sym_data_directory] = ACTIONS(27),
    [anon_sym_data_local_dir] = ACTIONS(27),
    [anon_sym_data_local_directory] = ACTIONS(27),
    [anon_sym_executable_dir] = ACTIONS(27),
    [anon_sym_executable_directory] = ACTIONS(27),
    [anon_sym_home_dir] = ACTIONS(27),
    [anon_sym_home_directory] = ACTIONS(27),
    [anon_sym_BQUOTE] = ACTIONS(37),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(39),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(41),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(45),
    [anon_sym_SQUOTE] = ACTIONS(47),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [4] = {
    [sym_comment] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(116),
    [sym_identifier] = ACTIONS(118),
    [anon_sym_alias] = ACTIONS(118),
    [anon_sym_export] = ACTIONS(118),
    [aux_sym_import_token1] = ACTIONS(118),
    [aux_sym_mod_token1] = ACTIONS(118),
    [anon_sym_set] = ACTIONS(118),
    [anon_sym_shell] = ACTIONS(118),
    [anon_sym_COMMA] = ACTIONS(116),
    [anon_sym_RBRACK] = ACTIONS(116),
    [anon_sym_if] = ACTIONS(118),
    [anon_sym_LBRACE] = ACTIONS(116),
    [anon_sym_RBRACE] = ACTIONS(116),
    [anon_sym_assert] = ACTIONS(118),
    [anon_sym_LPAREN] = ACTIONS(116),
    [anon_sym_RPAREN] = ACTIONS(116),
    [anon_sym_SLASH] = ACTIONS(116),
    [anon_sym_PLUS] = ACTIONS(116),
    [anon_sym_EQ_EQ] = ACTIONS(116),
    [anon_sym_BANG_EQ] = ACTIONS(116),
    [anon_sym_EQ_TILDE] = ACTIONS(116),
    [anon_sym_arch] = ACTIONS(118),
    [anon_sym_num_cpus] = ACTIONS(118),
    [anon_sym_os] = ACTIONS(118),
    [anon_sym_os_family] = ACTIONS(118),
    [anon_sym_env_var] = ACTIONS(118),
    [anon_sym_env_var_or_default] = ACTIONS(118),
    [anon_sym_env] = ACTIONS(118),
    [anon_sym_is_dependency] = ACTIONS(118),
    [anon_sym_invocation_dir] = ACTIONS(118),
    [anon_sym_invocation_dir_native] = ACTIONS(118),
    [anon_sym_invocation_directory] = ACTIONS(118),
    [anon_sym_invocation_directory_native] = ACTIONS(118),
    [anon_sym_justfile] = ACTIONS(118),
    [anon_sym_justfile_dir] = ACTIONS(118),
    [anon_sym_justfile_directory] = ACTIONS(118),
    [anon_sym_source_dir] = ACTIONS(118),
    [anon_sym_source_directory] = ACTIONS(118),
    [anon_sym_source_file] = ACTIONS(118),
    [anon_sym_just_executable] = ACTIONS(118),
    [anon_sym_just_pid] = ACTIONS(118),
    [anon_sym_append] = ACTIONS(118),
    [anon_sym_prepend] = ACTIONS(118),
    [anon_sym_encode_uri_component] = ACTIONS(118),
    [anon_sym_quote] = ACTIONS(118),
    [anon_sym_replace] = ACTIONS(118),
    [anon_sym_replace_regex] = ACTIONS(118),
    [anon_sym_trim] = ACTIONS(118),
    [anon_sym_trim_end] = ACTIONS(118),
    [anon_sym_trim_end_match] = ACTIONS(118),
    [anon_sym_trim_end_matches] = ACTIONS(118),
    [anon_sym_trim_start] = ACTIONS(118),
    [anon_sym_trim_start_match] = ACTIONS(118),
    [anon_sym_trim_start_matches] = ACTIONS(118),
    [anon_sym_capitalize] = ACTIONS(118),
    [anon_sym_kebabcase] = ACTIONS(118),
    [anon_sym_lowercamelcase] = ACTIONS(118),
    [anon_sym_lowercase] = ACTIONS(118),
    [anon_sym_shoutykebabcase] = ACTIONS(118),
    [anon_sym_shoutysnakecase] = ACTIONS(118),
    [anon_sym_snakecase] = ACTIONS(118),
    [anon_sym_titlecase] = ACTIONS(118),
    [anon_sym_uppercamelcase] = ACTIONS(118),
    [anon_sym_uppercase] = ACTIONS(118),
    [anon_sym_absolute_path] = ACTIONS(118),
    [anon_sym_canonicalize] = ACTIONS(118),
    [anon_sym_extension] = ACTIONS(118),
    [anon_sym_file_name] = ACTIONS(118),
    [anon_sym_file_stem] = ACTIONS(118),
    [anon_sym_parent_dir] = ACTIONS(118),
    [anon_sym_parent_directory] = ACTIONS(118),
    [anon_sym_without_extension] = ACTIONS(118),
    [anon_sym_clean] = ACTIONS(118),
    [anon_sym_join] = ACTIONS(118),
    [anon_sym_path_exists] = ACTIONS(118),
    [anon_sym_error] = ACTIONS(118),
    [anon_sym_blake3] = ACTIONS(118),
    [anon_sym_blake3_file] = ACTIONS(118),
    [anon_sym_sha256] = ACTIONS(118),
    [anon_sym_sha256_file] = ACTIONS(118),
    [anon_sym_uuid] = ACTIONS(118),
    [anon_sym_choose] = ACTIONS(118),
    [anon_sym_datetime] = ACTIONS(118),
    [anon_sym_datetime_utc] = ACTIONS(118),
    [anon_sym_semver_matches] = ACTIONS(118),
    [anon_sym_cache_dir] = ACTIONS(118),
    [anon_sym_cache_directory] = ACTIONS(118),
    [anon_sym_config_dir] = ACTIONS(118),
    [anon_sym_config_directory] = ACTIONS(118),
    [anon_sym_config_local_dir] = ACTIONS(118),
    [anon_sym_config_local_directory] = ACTIONS(118),
    [anon_sym_data_dir] = ACTIONS(118),
    [anon_sym_data_directory] = ACTIONS(118),
    [anon_sym_data_local_dir] = ACTIONS(118),
    [anon_sym_data_local_directory] = ACTIONS(118),
    [anon_sym_executable_dir] = ACTIONS(118),
    [anon_sym_executable_directory] = ACTIONS(118),
    [anon_sym_home_dir] = ACTIONS(118),
    [anon_sym_home_directory] = ACTIONS(118),
    [anon_sym_BQUOTE] = ACTIONS(118),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(116),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(116),
    [anon_sym_DQUOTE] = ACTIONS(118),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(116),
    [anon_sym_SQUOTE] = ACTIONS(118),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [5] = {
    [sym_comment] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(120),
    [sym_identifier] = ACTIONS(122),
    [anon_sym_alias] = ACTIONS(122),
    [anon_sym_export] = ACTIONS(122),
    [aux_sym_import_token1] = ACTIONS(122),
    [aux_sym_mod_token1] = ACTIONS(122),
    [anon_sym_set] = ACTIONS(122),
    [anon_sym_shell] = ACTIONS(122),
    [anon_sym_COMMA] = ACTIONS(120),
    [anon_sym_RBRACK] = ACTIONS(120),
    [anon_sym_if] = ACTIONS(122),
    [anon_sym_LBRACE] = ACTIONS(120),
    [anon_sym_RBRACE] = ACTIONS(120),
    [anon_sym_assert] = ACTIONS(122),
    [anon_sym_LPAREN] = ACTIONS(120),
    [anon_sym_RPAREN] = ACTIONS(120),
    [anon_sym_SLASH] = ACTIONS(120),
    [anon_sym_PLUS] = ACTIONS(120),
    [anon_sym_EQ_EQ] = ACTIONS(120),
    [anon_sym_BANG_EQ] = ACTIONS(120),
    [anon_sym_EQ_TILDE] = ACTIONS(120),
    [anon_sym_arch] = ACTIONS(122),
    [anon_sym_num_cpus] = ACTIONS(122),
    [anon_sym_os] = ACTIONS(122),
    [anon_sym_os_family] = ACTIONS(122),
    [anon_sym_env_var] = ACTIONS(122),
    [anon_sym_env_var_or_default] = ACTIONS(122),
    [anon_sym_env] = ACTIONS(122),
    [anon_sym_is_dependency] = ACTIONS(122),
    [anon_sym_invocation_dir] = ACTIONS(122),
    [anon_sym_invocation_dir_native] = ACTIONS(122),
    [anon_sym_invocation_directory] = ACTIONS(122),
    [anon_sym_invocation_directory_native] = ACTIONS(122),
    [anon_sym_justfile] = ACTIONS(122),
    [anon_sym_justfile_dir] = ACTIONS(122),
    [anon_sym_justfile_directory] = ACTIONS(122),
    [anon_sym_source_dir] = ACTIONS(122),
    [anon_sym_source_directory] = ACTIONS(122),
    [anon_sym_source_file] = ACTIONS(122),
    [anon_sym_just_executable] = ACTIONS(122),
    [anon_sym_just_pid] = ACTIONS(122),
    [anon_sym_append] = ACTIONS(122),
    [anon_sym_prepend] = ACTIONS(122),
    [anon_sym_encode_uri_component] = ACTIONS(122),
    [anon_sym_quote] = ACTIONS(122),
    [anon_sym_replace] = ACTIONS(122),
    [anon_sym_replace_regex] = ACTIONS(122),
    [anon_sym_trim] = ACTIONS(122),
    [anon_sym_trim_end] = ACTIONS(122),
    [anon_sym_trim_end_match] = ACTIONS(122),
    [anon_sym_trim_end_matches] = ACTIONS(122),
    [anon_sym_trim_start] = ACTIONS(122),
    [anon_sym_trim_start_match] = ACTIONS(122),
    [anon_sym_trim_start_matches] = ACTIONS(122),
    [anon_sym_capitalize] = ACTIONS(122),
    [anon_sym_kebabcase] = ACTIONS(122),
    [anon_sym_lowercamelcase] = ACTIONS(122),
    [anon_sym_lowercase] = ACTIONS(122),
    [anon_sym_shoutykebabcase] = ACTIONS(122),
    [anon_sym_shoutysnakecase] = ACTIONS(122),
    [anon_sym_snakecase] = ACTIONS(122),
    [anon_sym_titlecase] = ACTIONS(122),
    [anon_sym_uppercamelcase] = ACTIONS(122),
    [anon_sym_uppercase] = ACTIONS(122),
    [anon_sym_absolute_path] = ACTIONS(122),
    [anon_sym_canonicalize] = ACTIONS(122),
    [anon_sym_extension] = ACTIONS(122),
    [anon_sym_file_name] = ACTIONS(122),
    [anon_sym_file_stem] = ACTIONS(122),
    [anon_sym_parent_dir] = ACTIONS(122),
    [anon_sym_parent_directory] = ACTIONS(122),
    [anon_sym_without_extension] = ACTIONS(122),
    [anon_sym_clean] = ACTIONS(122),
    [anon_sym_join] = ACTIONS(122),
    [anon_sym_path_exists] = ACTIONS(122),
    [anon_sym_error] = ACTIONS(122),
    [anon_sym_blake3] = ACTIONS(122),
    [anon_sym_blake3_file] = ACTIONS(122),
    [anon_sym_sha256] = ACTIONS(122),
    [anon_sym_sha256_file] = ACTIONS(122),
    [anon_sym_uuid] = ACTIONS(122),
    [anon_sym_choose] = ACTIONS(122),
    [anon_sym_datetime] = ACTIONS(122),
    [anon_sym_datetime_utc] = ACTIONS(122),
    [anon_sym_semver_matches] = ACTIONS(122),
    [anon_sym_cache_dir] = ACTIONS(122),
    [anon_sym_cache_directory] = ACTIONS(122),
    [anon_sym_config_dir] = ACTIONS(122),
    [anon_sym_config_directory] = ACTIONS(122),
    [anon_sym_config_local_dir] = ACTIONS(122),
    [anon_sym_config_local_directory] = ACTIONS(122),
    [anon_sym_data_dir] = ACTIONS(122),
    [anon_sym_data_directory] = ACTIONS(122),
    [anon_sym_data_local_dir] = ACTIONS(122),
    [anon_sym_data_local_directory] = ACTIONS(122),
    [anon_sym_executable_dir] = ACTIONS(122),
    [anon_sym_executable_directory] = ACTIONS(122),
    [anon_sym_home_dir] = ACTIONS(122),
    [anon_sym_home_directory] = ACTIONS(122),
    [anon_sym_BQUOTE] = ACTIONS(122),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(120),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(120),
    [anon_sym_DQUOTE] = ACTIONS(122),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(120),
    [anon_sym_SQUOTE] = ACTIONS(122),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [6] = {
    [sym_comment] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(124),
    [sym_identifier] = ACTIONS(126),
    [anon_sym_alias] = ACTIONS(126),
    [anon_sym_export] = ACTIONS(126),
    [aux_sym_import_token1] = ACTIONS(126),
    [aux_sym_mod_token1] = ACTIONS(126),
    [anon_sym_set] = ACTIONS(126),
    [anon_sym_shell] = ACTIONS(126),
    [anon_sym_COMMA] = ACTIONS(124),
    [anon_sym_RBRACK] = ACTIONS(124),
    [anon_sym_if] = ACTIONS(126),
    [anon_sym_LBRACE] = ACTIONS(124),
    [anon_sym_RBRACE] = ACTIONS(124),
    [anon_sym_assert] = ACTIONS(126),
    [anon_sym_LPAREN] = ACTIONS(124),
    [anon_sym_RPAREN] = ACTIONS(124),
    [anon_sym_SLASH] = ACTIONS(124),
    [anon_sym_PLUS] = ACTIONS(124),
    [anon_sym_EQ_EQ] = ACTIONS(124),
    [anon_sym_BANG_EQ] = ACTIONS(124),
    [anon_sym_EQ_TILDE] = ACTIONS(124),
    [anon_sym_arch] = ACTIONS(126),
    [anon_sym_num_cpus] = ACTIONS(126),
    [anon_sym_os] = ACTIONS(126),
    [anon_sym_os_family] = ACTIONS(126),
    [anon_sym_env_var] = ACTIONS(126),
    [anon_sym_env_var_or_default] = ACTIONS(126),
    [anon_sym_env] = ACTIONS(126),
    [anon_sym_is_dependency] = ACTIONS(126),
    [anon_sym_invocation_dir] = ACTIONS(126),
    [anon_sym_invocation_dir_native] = ACTIONS(126),
    [anon_sym_invocation_directory] = ACTIONS(126),
    [anon_sym_invocation_directory_native] = ACTIONS(126),
    [anon_sym_justfile] = ACTIONS(126),
    [anon_sym_justfile_dir] = ACTIONS(126),
    [anon_sym_justfile_directory] = ACTIONS(126),
    [anon_sym_source_dir] = ACTIONS(126),
    [anon_sym_source_directory] = ACTIONS(126),
    [anon_sym_source_file] = ACTIONS(126),
    [anon_sym_just_executable] = ACTIONS(126),
    [anon_sym_just_pid] = ACTIONS(126),
    [anon_sym_append] = ACTIONS(126),
    [anon_sym_prepend] = ACTIONS(126),
    [anon_sym_encode_uri_component] = ACTIONS(126),
    [anon_sym_quote] = ACTIONS(126),
    [anon_sym_replace] = ACTIONS(126),
    [anon_sym_replace_regex] = ACTIONS(126),
    [anon_sym_trim] = ACTIONS(126),
    [anon_sym_trim_end] = ACTIONS(126),
    [anon_sym_trim_end_match] = ACTIONS(126),
    [anon_sym_trim_end_matches] = ACTIONS(126),
    [anon_sym_trim_start] = ACTIONS(126),
    [anon_sym_trim_start_match] = ACTIONS(126),
    [anon_sym_trim_start_matches] = ACTIONS(126),
    [anon_sym_capitalize] = ACTIONS(126),
    [anon_sym_kebabcase] = ACTIONS(126),
    [anon_sym_lowercamelcase] = ACTIONS(126),
    [anon_sym_lowercase] = ACTIONS(126),
    [anon_sym_shoutykebabcase] = ACTIONS(126),
    [anon_sym_shoutysnakecase] = ACTIONS(126),
    [anon_sym_snakecase] = ACTIONS(126),
    [anon_sym_titlecase] = ACTIONS(126),
    [anon_sym_uppercamelcase] = ACTIONS(126),
    [anon_sym_uppercase] = ACTIONS(126),
    [anon_sym_absolute_path] = ACTIONS(126),
    [anon_sym_canonicalize] = ACTIONS(126),
    [anon_sym_extension] = ACTIONS(126),
    [anon_sym_file_name] = ACTIONS(126),
    [anon_sym_file_stem] = ACTIONS(126),
    [anon_sym_parent_dir] = ACTIONS(126),
    [anon_sym_parent_directory] = ACTIONS(126),
    [anon_sym_without_extension] = ACTIONS(126),
    [anon_sym_clean] = ACTIONS(126),
    [anon_sym_join] = ACTIONS(126),
    [anon_sym_path_exists] = ACTIONS(126),
    [anon_sym_error] = ACTIONS(126),
    [anon_sym_blake3] = ACTIONS(126),
    [anon_sym_blake3_file] = ACTIONS(126),
    [anon_sym_sha256] = ACTIONS(126),
    [anon_sym_sha256_file] = ACTIONS(126),
    [anon_sym_uuid] = ACTIONS(126),
    [anon_sym_choose] = ACTIONS(126),
    [anon_sym_datetime] = ACTIONS(126),
    [anon_sym_datetime_utc] = ACTIONS(126),
    [anon_sym_semver_matches] = ACTIONS(126),
    [anon_sym_cache_dir] = ACTIONS(126),
    [anon_sym_cache_directory] = ACTIONS(126),
    [anon_sym_config_dir] = ACTIONS(126),
    [anon_sym_config_directory] = ACTIONS(126),
    [anon_sym_config_local_dir] = ACTIONS(126),
    [anon_sym_config_local_directory] = ACTIONS(126),
    [anon_sym_data_dir] = ACTIONS(126),
    [anon_sym_data_directory] = ACTIONS(126),
    [anon_sym_data_local_dir] = ACTIONS(126),
    [anon_sym_data_local_directory] = ACTIONS(126),
    [anon_sym_executable_dir] = ACTIONS(126),
    [anon_sym_executable_directory] = ACTIONS(126),
    [anon_sym_home_dir] = ACTIONS(126),
    [anon_sym_home_directory] = ACTIONS(126),
    [anon_sym_BQUOTE] = ACTIONS(126),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(124),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(124),
    [anon_sym_DQUOTE] = ACTIONS(126),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(124),
    [anon_sym_SQUOTE] = ACTIONS(126),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [7] = {
    [sym_comment] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(128),
    [sym_identifier] = ACTIONS(130),
    [anon_sym_alias] = ACTIONS(130),
    [anon_sym_export] = ACTIONS(130),
    [aux_sym_import_token1] = ACTIONS(130),
    [aux_sym_mod_token1] = ACTIONS(130),
    [anon_sym_set] = ACTIONS(130),
    [anon_sym_shell] = ACTIONS(130),
    [anon_sym_COMMA] = ACTIONS(128),
    [anon_sym_RBRACK] = ACTIONS(128),
    [anon_sym_if] = ACTIONS(130),
    [anon_sym_LBRACE] = ACTIONS(128),
    [anon_sym_RBRACE] = ACTIONS(128),
    [anon_sym_assert] = ACTIONS(130),
    [anon_sym_LPAREN] = ACTIONS(128),
    [anon_sym_RPAREN] = ACTIONS(128),
    [anon_sym_SLASH] = ACTIONS(128),
    [anon_sym_PLUS] = ACTIONS(128),
    [anon_sym_EQ_EQ] = ACTIONS(128),
    [anon_sym_BANG_EQ] = ACTIONS(128),
    [anon_sym_EQ_TILDE] = ACTIONS(128),
    [anon_sym_arch] = ACTIONS(130),
    [anon_sym_num_cpus] = ACTIONS(130),
    [anon_sym_os] = ACTIONS(130),
    [anon_sym_os_family] = ACTIONS(130),
    [anon_sym_env_var] = ACTIONS(130),
    [anon_sym_env_var_or_default] = ACTIONS(130),
    [anon_sym_env] = ACTIONS(130),
    [anon_sym_is_dependency] = ACTIONS(130),
    [anon_sym_invocation_dir] = ACTIONS(130),
    [anon_sym_invocation_dir_native] = ACTIONS(130),
    [anon_sym_invocation_directory] = ACTIONS(130),
    [anon_sym_invocation_directory_native] = ACTIONS(130),
    [anon_sym_justfile] = ACTIONS(130),
    [anon_sym_justfile_dir] = ACTIONS(130),
    [anon_sym_justfile_directory] = ACTIONS(130),
    [anon_sym_source_dir] = ACTIONS(130),
    [anon_sym_source_directory] = ACTIONS(130),
    [anon_sym_source_file] = ACTIONS(130),
    [anon_sym_just_executable] = ACTIONS(130),
    [anon_sym_just_pid] = ACTIONS(130),
    [anon_sym_append] = ACTIONS(130),
    [anon_sym_prepend] = ACTIONS(130),
    [anon_sym_encode_uri_component] = ACTIONS(130),
    [anon_sym_quote] = ACTIONS(130),
    [anon_sym_replace] = ACTIONS(130),
    [anon_sym_replace_regex] = ACTIONS(130),
    [anon_sym_trim] = ACTIONS(130),
    [anon_sym_trim_end] = ACTIONS(130),
    [anon_sym_trim_end_match] = ACTIONS(130),
    [anon_sym_trim_end_matches] = ACTIONS(130),
    [anon_sym_trim_start] = ACTIONS(130),
    [anon_sym_trim_start_match] = ACTIONS(130),
    [anon_sym_trim_start_matches] = ACTIONS(130),
    [anon_sym_capitalize] = ACTIONS(130),
    [anon_sym_kebabcase] = ACTIONS(130),
    [anon_sym_lowercamelcase] = ACTIONS(130),
    [anon_sym_lowercase] = ACTIONS(130),
    [anon_sym_shoutykebabcase] = ACTIONS(130),
    [anon_sym_shoutysnakecase] = ACTIONS(130),
    [anon_sym_snakecase] = ACTIONS(130),
    [anon_sym_titlecase] = ACTIONS(130),
    [anon_sym_uppercamelcase] = ACTIONS(130),
    [anon_sym_uppercase] = ACTIONS(130),
    [anon_sym_absolute_path] = ACTIONS(130),
    [anon_sym_canonicalize] = ACTIONS(130),
    [anon_sym_extension] = ACTIONS(130),
    [anon_sym_file_name] = ACTIONS(130),
    [anon_sym_file_stem] = ACTIONS(130),
    [anon_sym_parent_dir] = ACTIONS(130),
    [anon_sym_parent_directory] = ACTIONS(130),
    [anon_sym_without_extension] = ACTIONS(130),
    [anon_sym_clean] = ACTIONS(130),
    [anon_sym_join] = ACTIONS(130),
    [anon_sym_path_exists] = ACTIONS(130),
    [anon_sym_error] = ACTIONS(130),
    [anon_sym_blake3] = ACTIONS(130),
    [anon_sym_blake3_file] = ACTIONS(130),
    [anon_sym_sha256] = ACTIONS(130),
    [anon_sym_sha256_file] = ACTIONS(130),
    [anon_sym_uuid] = ACTIONS(130),
    [anon_sym_choose] = ACTIONS(130),
    [anon_sym_datetime] = ACTIONS(130),
    [anon_sym_datetime_utc] = ACTIONS(130),
    [anon_sym_semver_matches] = ACTIONS(130),
    [anon_sym_cache_dir] = ACTIONS(130),
    [anon_sym_cache_directory] = ACTIONS(130),
    [anon_sym_config_dir] = ACTIONS(130),
    [anon_sym_config_directory] = ACTIONS(130),
    [anon_sym_config_local_dir] = ACTIONS(130),
    [anon_sym_config_local_directory] = ACTIONS(130),
    [anon_sym_data_dir] = ACTIONS(130),
    [anon_sym_data_directory] = ACTIONS(130),
    [anon_sym_data_local_dir] = ACTIONS(130),
    [anon_sym_data_local_directory] = ACTIONS(130),
    [anon_sym_executable_dir] = ACTIONS(130),
    [anon_sym_executable_directory] = ACTIONS(130),
    [anon_sym_home_dir] = ACTIONS(130),
    [anon_sym_home_directory] = ACTIONS(130),
    [anon_sym_BQUOTE] = ACTIONS(130),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(128),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(128),
    [anon_sym_DQUOTE] = ACTIONS(130),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(128),
    [anon_sym_SQUOTE] = ACTIONS(130),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [8] = {
    [sym_comment] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(132),
    [sym_identifier] = ACTIONS(134),
    [anon_sym_alias] = ACTIONS(134),
    [anon_sym_export] = ACTIONS(134),
    [aux_sym_import_token1] = ACTIONS(134),
    [aux_sym_mod_token1] = ACTIONS(134),
    [anon_sym_set] = ACTIONS(134),
    [anon_sym_shell] = ACTIONS(134),
    [anon_sym_COMMA] = ACTIONS(132),
    [anon_sym_RBRACK] = ACTIONS(132),
    [anon_sym_if] = ACTIONS(134),
    [anon_sym_LBRACE] = ACTIONS(132),
    [anon_sym_RBRACE] = ACTIONS(132),
    [anon_sym_assert] = ACTIONS(134),
    [anon_sym_LPAREN] = ACTIONS(132),
    [anon_sym_RPAREN] = ACTIONS(132),
    [anon_sym_SLASH] = ACTIONS(132),
    [anon_sym_PLUS] = ACTIONS(132),
    [anon_sym_EQ_EQ] = ACTIONS(132),
    [anon_sym_BANG_EQ] = ACTIONS(132),
    [anon_sym_EQ_TILDE] = ACTIONS(132),
    [anon_sym_arch] = ACTIONS(134),
    [anon_sym_num_cpus] = ACTIONS(134),
    [anon_sym_os] = ACTIONS(134),
    [anon_sym_os_family] = ACTIONS(134),
    [anon_sym_env_var] = ACTIONS(134),
    [anon_sym_env_var_or_default] = ACTIONS(134),
    [anon_sym_env] = ACTIONS(134),
    [anon_sym_is_dependency] = ACTIONS(134),
    [anon_sym_invocation_dir] = ACTIONS(134),
    [anon_sym_invocation_dir_native] = ACTIONS(134),
    [anon_sym_invocation_directory] = ACTIONS(134),
    [anon_sym_invocation_directory_native] = ACTIONS(134),
    [anon_sym_justfile] = ACTIONS(134),
    [anon_sym_justfile_dir] = ACTIONS(134),
    [anon_sym_justfile_directory] = ACTIONS(134),
    [anon_sym_source_dir] = ACTIONS(134),
    [anon_sym_source_directory] = ACTIONS(134),
    [anon_sym_source_file] = ACTIONS(134),
    [anon_sym_just_executable] = ACTIONS(134),
    [anon_sym_just_pid] = ACTIONS(134),
    [anon_sym_append] = ACTIONS(134),
    [anon_sym_prepend] = ACTIONS(134),
    [anon_sym_encode_uri_component] = ACTIONS(134),
    [anon_sym_quote] = ACTIONS(134),
    [anon_sym_replace] = ACTIONS(134),
    [anon_sym_replace_regex] = ACTIONS(134),
    [anon_sym_trim] = ACTIONS(134),
    [anon_sym_trim_end] = ACTIONS(134),
    [anon_sym_trim_end_match] = ACTIONS(134),
    [anon_sym_trim_end_matches] = ACTIONS(134),
    [anon_sym_trim_start] = ACTIONS(134),
    [anon_sym_trim_start_match] = ACTIONS(134),
    [anon_sym_trim_start_matches] = ACTIONS(134),
    [anon_sym_capitalize] = ACTIONS(134),
    [anon_sym_kebabcase] = ACTIONS(134),
    [anon_sym_lowercamelcase] = ACTIONS(134),
    [anon_sym_lowercase] = ACTIONS(134),
    [anon_sym_shoutykebabcase] = ACTIONS(134),
    [anon_sym_shoutysnakecase] = ACTIONS(134),
    [anon_sym_snakecase] = ACTIONS(134),
    [anon_sym_titlecase] = ACTIONS(134),
    [anon_sym_uppercamelcase] = ACTIONS(134),
    [anon_sym_uppercase] = ACTIONS(134),
    [anon_sym_absolute_path] = ACTIONS(134),
    [anon_sym_canonicalize] = ACTIONS(134),
    [anon_sym_extension] = ACTIONS(134),
    [anon_sym_file_name] = ACTIONS(134),
    [anon_sym_file_stem] = ACTIONS(134),
    [anon_sym_parent_dir] = ACTIONS(134),
    [anon_sym_parent_directory] = ACTIONS(134),
    [anon_sym_without_extension] = ACTIONS(134),
    [anon_sym_clean] = ACTIONS(134),
    [anon_sym_join] = ACTIONS(134),
    [anon_sym_path_exists] = ACTIONS(134),
    [anon_sym_error] = ACTIONS(134),
    [anon_sym_blake3] = ACTIONS(134),
    [anon_sym_blake3_file] = ACTIONS(134),
    [anon_sym_sha256] = ACTIONS(134),
    [anon_sym_sha256_file] = ACTIONS(134),
    [anon_sym_uuid] = ACTIONS(134),
    [anon_sym_choose] = ACTIONS(134),
    [anon_sym_datetime] = ACTIONS(134),
    [anon_sym_datetime_utc] = ACTIONS(134),
    [anon_sym_semver_matches] = ACTIONS(134),
    [anon_sym_cache_dir] = ACTIONS(134),
    [anon_sym_cache_directory] = ACTIONS(134),
    [anon_sym_config_dir] = ACTIONS(134),
    [anon_sym_config_directory] = ACTIONS(134),
    [anon_sym_config_local_dir] = ACTIONS(134),
    [anon_sym_config_local_directory] = ACTIONS(134),
    [anon_sym_data_dir] = ACTIONS(134),
    [anon_sym_data_directory] = ACTIONS(134),
    [anon_sym_data_local_dir] = ACTIONS(134),
    [anon_sym_data_local_directory] = ACTIONS(134),
    [anon_sym_executable_dir] = ACTIONS(134),
    [anon_sym_executable_directory] = ACTIONS(134),
    [anon_sym_home_dir] = ACTIONS(134),
    [anon_sym_home_directory] = ACTIONS(134),
    [anon_sym_BQUOTE] = ACTIONS(134),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(132),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(132),
    [anon_sym_DQUOTE] = ACTIONS(134),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(132),
    [anon_sym_SQUOTE] = ACTIONS(134),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [9] = {
    [sym_comment] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(136),
    [sym_identifier] = ACTIONS(138),
    [anon_sym_alias] = ACTIONS(138),
    [anon_sym_export] = ACTIONS(138),
    [aux_sym_import_token1] = ACTIONS(138),
    [aux_sym_mod_token1] = ACTIONS(138),
    [anon_sym_set] = ACTIONS(138),
    [anon_sym_shell] = ACTIONS(138),
    [anon_sym_COMMA] = ACTIONS(136),
    [anon_sym_RBRACK] = ACTIONS(136),
    [anon_sym_if] = ACTIONS(138),
    [anon_sym_LBRACE] = ACTIONS(136),
    [anon_sym_RBRACE] = ACTIONS(136),
    [anon_sym_assert] = ACTIONS(138),
    [anon_sym_LPAREN] = ACTIONS(136),
    [anon_sym_RPAREN] = ACTIONS(136),
    [anon_sym_SLASH] = ACTIONS(136),
    [anon_sym_PLUS] = ACTIONS(136),
    [anon_sym_EQ_EQ] = ACTIONS(136),
    [anon_sym_BANG_EQ] = ACTIONS(136),
    [anon_sym_EQ_TILDE] = ACTIONS(136),
    [anon_sym_arch] = ACTIONS(138),
    [anon_sym_num_cpus] = ACTIONS(138),
    [anon_sym_os] = ACTIONS(138),
    [anon_sym_os_family] = ACTIONS(138),
    [anon_sym_env_var] = ACTIONS(138),
    [anon_sym_env_var_or_default] = ACTIONS(138),
    [anon_sym_env] = ACTIONS(138),
    [anon_sym_is_dependency] = ACTIONS(138),
    [anon_sym_invocation_dir] = ACTIONS(138),
    [anon_sym_invocation_dir_native] = ACTIONS(138),
    [anon_sym_invocation_directory] = ACTIONS(138),
    [anon_sym_invocation_directory_native] = ACTIONS(138),
    [anon_sym_justfile] = ACTIONS(138),
    [anon_sym_justfile_dir] = ACTIONS(138),
    [anon_sym_justfile_directory] = ACTIONS(138),
    [anon_sym_source_dir] = ACTIONS(138),
    [anon_sym_source_directory] = ACTIONS(138),
    [anon_sym_source_file] = ACTIONS(138),
    [anon_sym_just_executable] = ACTIONS(138),
    [anon_sym_just_pid] = ACTIONS(138),
    [anon_sym_append] = ACTIONS(138),
    [anon_sym_prepend] = ACTIONS(138),
    [anon_sym_encode_uri_component] = ACTIONS(138),
    [anon_sym_quote] = ACTIONS(138),
    [anon_sym_replace] = ACTIONS(138),
    [anon_sym_replace_regex] = ACTIONS(138),
    [anon_sym_trim] = ACTIONS(138),
    [anon_sym_trim_end] = ACTIONS(138),
    [anon_sym_trim_end_match] = ACTIONS(138),
    [anon_sym_trim_end_matches] = ACTIONS(138),
    [anon_sym_trim_start] = ACTIONS(138),
    [anon_sym_trim_start_match] = ACTIONS(138),
    [anon_sym_trim_start_matches] = ACTIONS(138),
    [anon_sym_capitalize] = ACTIONS(138),
    [anon_sym_kebabcase] = ACTIONS(138),
    [anon_sym_lowercamelcase] = ACTIONS(138),
    [anon_sym_lowercase] = ACTIONS(138),
    [anon_sym_shoutykebabcase] = ACTIONS(138),
    [anon_sym_shoutysnakecase] = ACTIONS(138),
    [anon_sym_snakecase] = ACTIONS(138),
    [anon_sym_titlecase] = ACTIONS(138),
    [anon_sym_uppercamelcase] = ACTIONS(138),
    [anon_sym_uppercase] = ACTIONS(138),
    [anon_sym_absolute_path] = ACTIONS(138),
    [anon_sym_canonicalize] = ACTIONS(138),
    [anon_sym_extension] = ACTIONS(138),
    [anon_sym_file_name] = ACTIONS(138),
    [anon_sym_file_stem] = ACTIONS(138),
    [anon_sym_parent_dir] = ACTIONS(138),
    [anon_sym_parent_directory] = ACTIONS(138),
    [anon_sym_without_extension] = ACTIONS(138),
    [anon_sym_clean] = ACTIONS(138),
    [anon_sym_join] = ACTIONS(138),
    [anon_sym_path_exists] = ACTIONS(138),
    [anon_sym_error] = ACTIONS(138),
    [anon_sym_blake3] = ACTIONS(138),
    [anon_sym_blake3_file] = ACTIONS(138),
    [anon_sym_sha256] = ACTIONS(138),
    [anon_sym_sha256_file] = ACTIONS(138),
    [anon_sym_uuid] = ACTIONS(138),
    [anon_sym_choose] = ACTIONS(138),
    [anon_sym_datetime] = ACTIONS(138),
    [anon_sym_datetime_utc] = ACTIONS(138),
    [anon_sym_semver_matches] = ACTIONS(138),
    [anon_sym_cache_dir] = ACTIONS(138),
    [anon_sym_cache_directory] = ACTIONS(138),
    [anon_sym_config_dir] = ACTIONS(138),
    [anon_sym_config_directory] = ACTIONS(138),
    [anon_sym_config_local_dir] = ACTIONS(138),
    [anon_sym_config_local_directory] = ACTIONS(138),
    [anon_sym_data_dir] = ACTIONS(138),
    [anon_sym_data_directory] = ACTIONS(138),
    [anon_sym_data_local_dir] = ACTIONS(138),
    [anon_sym_data_local_directory] = ACTIONS(138),
    [anon_sym_executable_dir] = ACTIONS(138),
    [anon_sym_executable_directory] = ACTIONS(138),
    [anon_sym_home_dir] = ACTIONS(138),
    [anon_sym_home_directory] = ACTIONS(138),
    [anon_sym_BQUOTE] = ACTIONS(138),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(136),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(136),
    [anon_sym_DQUOTE] = ACTIONS(138),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(136),
    [anon_sym_SQUOTE] = ACTIONS(138),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [10] = {
    [sym_comment] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(140),
    [sym_identifier] = ACTIONS(142),
    [anon_sym_alias] = ACTIONS(142),
    [anon_sym_export] = ACTIONS(142),
    [aux_sym_import_token1] = ACTIONS(142),
    [aux_sym_mod_token1] = ACTIONS(142),
    [anon_sym_set] = ACTIONS(142),
    [anon_sym_shell] = ACTIONS(142),
    [anon_sym_COMMA] = ACTIONS(140),
    [anon_sym_RBRACK] = ACTIONS(140),
    [anon_sym_if] = ACTIONS(142),
    [anon_sym_LBRACE] = ACTIONS(140),
    [anon_sym_RBRACE] = ACTIONS(140),
    [anon_sym_assert] = ACTIONS(142),
    [anon_sym_LPAREN] = ACTIONS(140),
    [anon_sym_RPAREN] = ACTIONS(140),
    [anon_sym_SLASH] = ACTIONS(140),
    [anon_sym_PLUS] = ACTIONS(140),
    [anon_sym_EQ_EQ] = ACTIONS(140),
    [anon_sym_BANG_EQ] = ACTIONS(140),
    [anon_sym_EQ_TILDE] = ACTIONS(140),
    [anon_sym_arch] = ACTIONS(142),
    [anon_sym_num_cpus] = ACTIONS(142),
    [anon_sym_os] = ACTIONS(142),
    [anon_sym_os_family] = ACTIONS(142),
    [anon_sym_env_var] = ACTIONS(142),
    [anon_sym_env_var_or_default] = ACTIONS(142),
    [anon_sym_env] = ACTIONS(142),
    [anon_sym_is_dependency] = ACTIONS(142),
    [anon_sym_invocation_dir] = ACTIONS(142),
    [anon_sym_invocation_dir_native] = ACTIONS(142),
    [anon_sym_invocation_directory] = ACTIONS(142),
    [anon_sym_invocation_directory_native] = ACTIONS(142),
    [anon_sym_justfile] = ACTIONS(142),
    [anon_sym_justfile_dir] = ACTIONS(142),
    [anon_sym_justfile_directory] = ACTIONS(142),
    [anon_sym_source_dir] = ACTIONS(142),
    [anon_sym_source_directory] = ACTIONS(142),
    [anon_sym_source_file] = ACTIONS(142),
    [anon_sym_just_executable] = ACTIONS(142),
    [anon_sym_just_pid] = ACTIONS(142),
    [anon_sym_append] = ACTIONS(142),
    [anon_sym_prepend] = ACTIONS(142),
    [anon_sym_encode_uri_component] = ACTIONS(142),
    [anon_sym_quote] = ACTIONS(142),
    [anon_sym_replace] = ACTIONS(142),
    [anon_sym_replace_regex] = ACTIONS(142),
    [anon_sym_trim] = ACTIONS(142),
    [anon_sym_trim_end] = ACTIONS(142),
    [anon_sym_trim_end_match] = ACTIONS(142),
    [anon_sym_trim_end_matches] = ACTIONS(142),
    [anon_sym_trim_start] = ACTIONS(142),
    [anon_sym_trim_start_match] = ACTIONS(142),
    [anon_sym_trim_start_matches] = ACTIONS(142),
    [anon_sym_capitalize] = ACTIONS(142),
    [anon_sym_kebabcase] = ACTIONS(142),
    [anon_sym_lowercamelcase] = ACTIONS(142),
    [anon_sym_lowercase] = ACTIONS(142),
    [anon_sym_shoutykebabcase] = ACTIONS(142),
    [anon_sym_shoutysnakecase] = ACTIONS(142),
    [anon_sym_snakecase] = ACTIONS(142),
    [anon_sym_titlecase] = ACTIONS(142),
    [anon_sym_uppercamelcase] = ACTIONS(142),
    [anon_sym_uppercase] = ACTIONS(142),
    [anon_sym_absolute_path] = ACTIONS(142),
    [anon_sym_canonicalize] = ACTIONS(142),
    [anon_sym_extension] = ACTIONS(142),
    [anon_sym_file_name] = ACTIONS(142),
    [anon_sym_file_stem] = ACTIONS(142),
    [anon_sym_parent_dir] = ACTIONS(142),
    [anon_sym_parent_directory] = ACTIONS(142),
    [anon_sym_without_extension] = ACTIONS(142),
    [anon_sym_clean] = ACTIONS(142),
    [anon_sym_join] = ACTIONS(142),
    [anon_sym_path_exists] = ACTIONS(142),
    [anon_sym_error] = ACTIONS(142),
    [anon_sym_blake3] = ACTIONS(142),
    [anon_sym_blake3_file] = ACTIONS(142),
    [anon_sym_sha256] = ACTIONS(142),
    [anon_sym_sha256_file] = ACTIONS(142),
    [anon_sym_uuid] = ACTIONS(142),
    [anon_sym_choose] = ACTIONS(142),
    [anon_sym_datetime] = ACTIONS(142),
    [anon_sym_datetime_utc] = ACTIONS(142),
    [anon_sym_semver_matches] = ACTIONS(142),
    [anon_sym_cache_dir] = ACTIONS(142),
    [anon_sym_cache_directory] = ACTIONS(142),
    [anon_sym_config_dir] = ACTIONS(142),
    [anon_sym_config_directory] = ACTIONS(142),
    [anon_sym_config_local_dir] = ACTIONS(142),
    [anon_sym_config_local_directory] = ACTIONS(142),
    [anon_sym_data_dir] = ACTIONS(142),
    [anon_sym_data_directory] = ACTIONS(142),
    [anon_sym_data_local_dir] = ACTIONS(142),
    [anon_sym_data_local_directory] = ACTIONS(142),
    [anon_sym_executable_dir] = ACTIONS(142),
    [anon_sym_executable_directory] = ACTIONS(142),
    [anon_sym_home_dir] = ACTIONS(142),
    [anon_sym_home_directory] = ACTIONS(142),
    [anon_sym_BQUOTE] = ACTIONS(142),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(140),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(140),
    [anon_sym_DQUOTE] = ACTIONS(142),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(140),
    [anon_sym_SQUOTE] = ACTIONS(142),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [11] = {
    [sym_comment] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(144),
    [sym_identifier] = ACTIONS(146),
    [anon_sym_alias] = ACTIONS(146),
    [anon_sym_export] = ACTIONS(146),
    [aux_sym_import_token1] = ACTIONS(146),
    [aux_sym_mod_token1] = ACTIONS(146),
    [anon_sym_set] = ACTIONS(146),
    [anon_sym_shell] = ACTIONS(146),
    [anon_sym_COMMA] = ACTIONS(144),
    [anon_sym_RBRACK] = ACTIONS(144),
    [anon_sym_if] = ACTIONS(146),
    [anon_sym_LBRACE] = ACTIONS(144),
    [anon_sym_RBRACE] = ACTIONS(144),
    [anon_sym_assert] = ACTIONS(146),
    [anon_sym_LPAREN] = ACTIONS(144),
    [anon_sym_RPAREN] = ACTIONS(144),
    [anon_sym_SLASH] = ACTIONS(144),
    [anon_sym_PLUS] = ACTIONS(144),
    [anon_sym_EQ_EQ] = ACTIONS(144),
    [anon_sym_BANG_EQ] = ACTIONS(144),
    [anon_sym_EQ_TILDE] = ACTIONS(144),
    [anon_sym_arch] = ACTIONS(146),
    [anon_sym_num_cpus] = ACTIONS(146),
    [anon_sym_os] = ACTIONS(146),
    [anon_sym_os_family] = ACTIONS(146),
    [anon_sym_env_var] = ACTIONS(146),
    [anon_sym_env_var_or_default] = ACTIONS(146),
    [anon_sym_env] = ACTIONS(146),
    [anon_sym_is_dependency] = ACTIONS(146),
    [anon_sym_invocation_dir] = ACTIONS(146),
    [anon_sym_invocation_dir_native] = ACTIONS(146),
    [anon_sym_invocation_directory] = ACTIONS(146),
    [anon_sym_invocation_directory_native] = ACTIONS(146),
    [anon_sym_justfile] = ACTIONS(146),
    [anon_sym_justfile_dir] = ACTIONS(146),
    [anon_sym_justfile_directory] = ACTIONS(146),
    [anon_sym_source_dir] = ACTIONS(146),
    [anon_sym_source_directory] = ACTIONS(146),
    [anon_sym_source_file] = ACTIONS(146),
    [anon_sym_just_executable] = ACTIONS(146),
    [anon_sym_just_pid] = ACTIONS(146),
    [anon_sym_append] = ACTIONS(146),
    [anon_sym_prepend] = ACTIONS(146),
    [anon_sym_encode_uri_component] = ACTIONS(146),
    [anon_sym_quote] = ACTIONS(146),
    [anon_sym_replace] = ACTIONS(146),
    [anon_sym_replace_regex] = ACTIONS(146),
    [anon_sym_trim] = ACTIONS(146),
    [anon_sym_trim_end] = ACTIONS(146),
    [anon_sym_trim_end_match] = ACTIONS(146),
    [anon_sym_trim_end_matches] = ACTIONS(146),
    [anon_sym_trim_start] = ACTIONS(146),
    [anon_sym_trim_start_match] = ACTIONS(146),
    [anon_sym_trim_start_matches] = ACTIONS(146),
    [anon_sym_capitalize] = ACTIONS(146),
    [anon_sym_kebabcase] = ACTIONS(146),
    [anon_sym_lowercamelcase] = ACTIONS(146),
    [anon_sym_lowercase] = ACTIONS(146),
    [anon_sym_shoutykebabcase] = ACTIONS(146),
    [anon_sym_shoutysnakecase] = ACTIONS(146),
    [anon_sym_snakecase] = ACTIONS(146),
    [anon_sym_titlecase] = ACTIONS(146),
    [anon_sym_uppercamelcase] = ACTIONS(146),
    [anon_sym_uppercase] = ACTIONS(146),
    [anon_sym_absolute_path] = ACTIONS(146),
    [anon_sym_canonicalize] = ACTIONS(146),
    [anon_sym_extension] = ACTIONS(146),
    [anon_sym_file_name] = ACTIONS(146),
    [anon_sym_file_stem] = ACTIONS(146),
    [anon_sym_parent_dir] = ACTIONS(146),
    [anon_sym_parent_directory] = ACTIONS(146),
    [anon_sym_without_extension] = ACTIONS(146),
    [anon_sym_clean] = ACTIONS(146),
    [anon_sym_join] = ACTIONS(146),
    [anon_sym_path_exists] = ACTIONS(146),
    [anon_sym_error] = ACTIONS(146),
    [anon_sym_blake3] = ACTIONS(146),
    [anon_sym_blake3_file] = ACTIONS(146),
    [anon_sym_sha256] = ACTIONS(146),
    [anon_sym_sha256_file] = ACTIONS(146),
    [anon_sym_uuid] = ACTIONS(146),
    [anon_sym_choose] = ACTIONS(146),
    [anon_sym_datetime] = ACTIONS(146),
    [anon_sym_datetime_utc] = ACTIONS(146),
    [anon_sym_semver_matches] = ACTIONS(146),
    [anon_sym_cache_dir] = ACTIONS(146),
    [anon_sym_cache_directory] = ACTIONS(146),
    [anon_sym_config_dir] = ACTIONS(146),
    [anon_sym_config_directory] = ACTIONS(146),
    [anon_sym_config_local_dir] = ACTIONS(146),
    [anon_sym_config_local_directory] = ACTIONS(146),
    [anon_sym_data_dir] = ACTIONS(146),
    [anon_sym_data_directory] = ACTIONS(146),
    [anon_sym_data_local_dir] = ACTIONS(146),
    [anon_sym_data_local_directory] = ACTIONS(146),
    [anon_sym_executable_dir] = ACTIONS(146),
    [anon_sym_executable_directory] = ACTIONS(146),
    [anon_sym_home_dir] = ACTIONS(146),
    [anon_sym_home_directory] = ACTIONS(146),
    [anon_sym_BQUOTE] = ACTIONS(146),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(144),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(144),
    [anon_sym_DQUOTE] = ACTIONS(146),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(144),
    [anon_sym_SQUOTE] = ACTIONS(146),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [12] = {
    [sym_comment] = STATE(12),
    [ts_builtin_sym_end] = ACTIONS(148),
    [sym_identifier] = ACTIONS(150),
    [anon_sym_alias] = ACTIONS(150),
    [anon_sym_export] = ACTIONS(150),
    [aux_sym_import_token1] = ACTIONS(150),
    [aux_sym_mod_token1] = ACTIONS(150),
    [anon_sym_set] = ACTIONS(150),
    [anon_sym_shell] = ACTIONS(150),
    [anon_sym_COMMA] = ACTIONS(148),
    [anon_sym_if] = ACTIONS(150),
    [anon_sym_LBRACE] = ACTIONS(148),
    [anon_sym_RBRACE] = ACTIONS(148),
    [anon_sym_assert] = ACTIONS(150),
    [anon_sym_LPAREN] = ACTIONS(148),
    [anon_sym_RPAREN] = ACTIONS(148),
    [anon_sym_SLASH] = ACTIONS(148),
    [anon_sym_PLUS] = ACTIONS(148),
    [anon_sym_EQ_EQ] = ACTIONS(148),
    [anon_sym_BANG_EQ] = ACTIONS(148),
    [anon_sym_EQ_TILDE] = ACTIONS(148),
    [anon_sym_arch] = ACTIONS(150),
    [anon_sym_num_cpus] = ACTIONS(150),
    [anon_sym_os] = ACTIONS(150),
    [anon_sym_os_family] = ACTIONS(150),
    [anon_sym_env_var] = ACTIONS(150),
    [anon_sym_env_var_or_default] = ACTIONS(150),
    [anon_sym_env] = ACTIONS(150),
    [anon_sym_is_dependency] = ACTIONS(150),
    [anon_sym_invocation_dir] = ACTIONS(150),
    [anon_sym_invocation_dir_native] = ACTIONS(150),
    [anon_sym_invocation_directory] = ACTIONS(150),
    [anon_sym_invocation_directory_native] = ACTIONS(150),
    [anon_sym_justfile] = ACTIONS(150),
    [anon_sym_justfile_dir] = ACTIONS(150),
    [anon_sym_justfile_directory] = ACTIONS(150),
    [anon_sym_source_dir] = ACTIONS(150),
    [anon_sym_source_directory] = ACTIONS(150),
    [anon_sym_source_file] = ACTIONS(150),
    [anon_sym_just_executable] = ACTIONS(150),
    [anon_sym_just_pid] = ACTIONS(150),
    [anon_sym_append] = ACTIONS(150),
    [anon_sym_prepend] = ACTIONS(150),
    [anon_sym_encode_uri_component] = ACTIONS(150),
    [anon_sym_quote] = ACTIONS(150),
    [anon_sym_replace] = ACTIONS(150),
    [anon_sym_replace_regex] = ACTIONS(150),
    [anon_sym_trim] = ACTIONS(150),
    [anon_sym_trim_end] = ACTIONS(150),
    [anon_sym_trim_end_match] = ACTIONS(150),
    [anon_sym_trim_end_matches] = ACTIONS(150),
    [anon_sym_trim_start] = ACTIONS(150),
    [anon_sym_trim_start_match] = ACTIONS(150),
    [anon_sym_trim_start_matches] = ACTIONS(150),
    [anon_sym_capitalize] = ACTIONS(150),
    [anon_sym_kebabcase] = ACTIONS(150),
    [anon_sym_lowercamelcase] = ACTIONS(150),
    [anon_sym_lowercase] = ACTIONS(150),
    [anon_sym_shoutykebabcase] = ACTIONS(150),
    [anon_sym_shoutysnakecase] = ACTIONS(150),
    [anon_sym_snakecase] = ACTIONS(150),
    [anon_sym_titlecase] = ACTIONS(150),
    [anon_sym_uppercamelcase] = ACTIONS(150),
    [anon_sym_uppercase] = ACTIONS(150),
    [anon_sym_absolute_path] = ACTIONS(150),
    [anon_sym_canonicalize] = ACTIONS(150),
    [anon_sym_extension] = ACTIONS(150),
    [anon_sym_file_name] = ACTIONS(150),
    [anon_sym_file_stem] = ACTIONS(150),
    [anon_sym_parent_dir] = ACTIONS(150),
    [anon_sym_parent_directory] = ACTIONS(150),
    [anon_sym_without_extension] = ACTIONS(150),
    [anon_sym_clean] = ACTIONS(150),
    [anon_sym_join] = ACTIONS(150),
    [anon_sym_path_exists] = ACTIONS(150),
    [anon_sym_error] = ACTIONS(150),
    [anon_sym_blake3] = ACTIONS(150),
    [anon_sym_blake3_file] = ACTIONS(150),
    [anon_sym_sha256] = ACTIONS(150),
    [anon_sym_sha256_file] = ACTIONS(150),
    [anon_sym_uuid] = ACTIONS(150),
    [anon_sym_choose] = ACTIONS(150),
    [anon_sym_datetime] = ACTIONS(150),
    [anon_sym_datetime_utc] = ACTIONS(150),
    [anon_sym_semver_matches] = ACTIONS(150),
    [anon_sym_cache_dir] = ACTIONS(150),
    [anon_sym_cache_directory] = ACTIONS(150),
    [anon_sym_config_dir] = ACTIONS(150),
    [anon_sym_config_directory] = ACTIONS(150),
    [anon_sym_config_local_dir] = ACTIONS(150),
    [anon_sym_config_local_directory] = ACTIONS(150),
    [anon_sym_data_dir] = ACTIONS(150),
    [anon_sym_data_directory] = ACTIONS(150),
    [anon_sym_data_local_dir] = ACTIONS(150),
    [anon_sym_data_local_directory] = ACTIONS(150),
    [anon_sym_executable_dir] = ACTIONS(150),
    [anon_sym_executable_directory] = ACTIONS(150),
    [anon_sym_home_dir] = ACTIONS(150),
    [anon_sym_home_directory] = ACTIONS(150),
    [anon_sym_BQUOTE] = ACTIONS(150),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(148),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(148),
    [anon_sym_DQUOTE] = ACTIONS(150),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(148),
    [anon_sym_SQUOTE] = ACTIONS(150),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [13] = {
    [sym_comment] = STATE(13),
    [ts_builtin_sym_end] = ACTIONS(152),
    [sym_identifier] = ACTIONS(154),
    [anon_sym_alias] = ACTIONS(154),
    [anon_sym_export] = ACTIONS(154),
    [aux_sym_import_token1] = ACTIONS(154),
    [aux_sym_mod_token1] = ACTIONS(154),
    [anon_sym_set] = ACTIONS(154),
    [anon_sym_shell] = ACTIONS(154),
    [anon_sym_COMMA] = ACTIONS(152),
    [anon_sym_if] = ACTIONS(154),
    [anon_sym_LBRACE] = ACTIONS(152),
    [anon_sym_RBRACE] = ACTIONS(152),
    [anon_sym_assert] = ACTIONS(154),
    [anon_sym_LPAREN] = ACTIONS(152),
    [anon_sym_RPAREN] = ACTIONS(152),
    [anon_sym_SLASH] = ACTIONS(152),
    [anon_sym_PLUS] = ACTIONS(152),
    [anon_sym_EQ_EQ] = ACTIONS(152),
    [anon_sym_BANG_EQ] = ACTIONS(152),
    [anon_sym_EQ_TILDE] = ACTIONS(152),
    [anon_sym_arch] = ACTIONS(154),
    [anon_sym_num_cpus] = ACTIONS(154),
    [anon_sym_os] = ACTIONS(154),
    [anon_sym_os_family] = ACTIONS(154),
    [anon_sym_env_var] = ACTIONS(154),
    [anon_sym_env_var_or_default] = ACTIONS(154),
    [anon_sym_env] = ACTIONS(154),
    [anon_sym_is_dependency] = ACTIONS(154),
    [anon_sym_invocation_dir] = ACTIONS(154),
    [anon_sym_invocation_dir_native] = ACTIONS(154),
    [anon_sym_invocation_directory] = ACTIONS(154),
    [anon_sym_invocation_directory_native] = ACTIONS(154),
    [anon_sym_justfile] = ACTIONS(154),
    [anon_sym_justfile_dir] = ACTIONS(154),
    [anon_sym_justfile_directory] = ACTIONS(154),
    [anon_sym_source_dir] = ACTIONS(154),
    [anon_sym_source_directory] = ACTIONS(154),
    [anon_sym_source_file] = ACTIONS(154),
    [anon_sym_just_executable] = ACTIONS(154),
    [anon_sym_just_pid] = ACTIONS(154),
    [anon_sym_append] = ACTIONS(154),
    [anon_sym_prepend] = ACTIONS(154),
    [anon_sym_encode_uri_component] = ACTIONS(154),
    [anon_sym_quote] = ACTIONS(154),
    [anon_sym_replace] = ACTIONS(154),
    [anon_sym_replace_regex] = ACTIONS(154),
    [anon_sym_trim] = ACTIONS(154),
    [anon_sym_trim_end] = ACTIONS(154),
    [anon_sym_trim_end_match] = ACTIONS(154),
    [anon_sym_trim_end_matches] = ACTIONS(154),
    [anon_sym_trim_start] = ACTIONS(154),
    [anon_sym_trim_start_match] = ACTIONS(154),
    [anon_sym_trim_start_matches] = ACTIONS(154),
    [anon_sym_capitalize] = ACTIONS(154),
    [anon_sym_kebabcase] = ACTIONS(154),
    [anon_sym_lowercamelcase] = ACTIONS(154),
    [anon_sym_lowercase] = ACTIONS(154),
    [anon_sym_shoutykebabcase] = ACTIONS(154),
    [anon_sym_shoutysnakecase] = ACTIONS(154),
    [anon_sym_snakecase] = ACTIONS(154),
    [anon_sym_titlecase] = ACTIONS(154),
    [anon_sym_uppercamelcase] = ACTIONS(154),
    [anon_sym_uppercase] = ACTIONS(154),
    [anon_sym_absolute_path] = ACTIONS(154),
    [anon_sym_canonicalize] = ACTIONS(154),
    [anon_sym_extension] = ACTIONS(154),
    [anon_sym_file_name] = ACTIONS(154),
    [anon_sym_file_stem] = ACTIONS(154),
    [anon_sym_parent_dir] = ACTIONS(154),
    [anon_sym_parent_directory] = ACTIONS(154),
    [anon_sym_without_extension] = ACTIONS(154),
    [anon_sym_clean] = ACTIONS(154),
    [anon_sym_join] = ACTIONS(154),
    [anon_sym_path_exists] = ACTIONS(154),
    [anon_sym_error] = ACTIONS(154),
    [anon_sym_blake3] = ACTIONS(154),
    [anon_sym_blake3_file] = ACTIONS(154),
    [anon_sym_sha256] = ACTIONS(154),
    [anon_sym_sha256_file] = ACTIONS(154),
    [anon_sym_uuid] = ACTIONS(154),
    [anon_sym_choose] = ACTIONS(154),
    [anon_sym_datetime] = ACTIONS(154),
    [anon_sym_datetime_utc] = ACTIONS(154),
    [anon_sym_semver_matches] = ACTIONS(154),
    [anon_sym_cache_dir] = ACTIONS(154),
    [anon_sym_cache_directory] = ACTIONS(154),
    [anon_sym_config_dir] = ACTIONS(154),
    [anon_sym_config_directory] = ACTIONS(154),
    [anon_sym_config_local_dir] = ACTIONS(154),
    [anon_sym_config_local_directory] = ACTIONS(154),
    [anon_sym_data_dir] = ACTIONS(154),
    [anon_sym_data_directory] = ACTIONS(154),
    [anon_sym_data_local_dir] = ACTIONS(154),
    [anon_sym_data_local_directory] = ACTIONS(154),
    [anon_sym_executable_dir] = ACTIONS(154),
    [anon_sym_executable_directory] = ACTIONS(154),
    [anon_sym_home_dir] = ACTIONS(154),
    [anon_sym_home_directory] = ACTIONS(154),
    [anon_sym_BQUOTE] = ACTIONS(154),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(152),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(152),
    [anon_sym_DQUOTE] = ACTIONS(154),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(152),
    [anon_sym_SQUOTE] = ACTIONS(154),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [14] = {
    [sym_comment] = STATE(14),
    [ts_builtin_sym_end] = ACTIONS(156),
    [sym_identifier] = ACTIONS(158),
    [anon_sym_alias] = ACTIONS(158),
    [anon_sym_export] = ACTIONS(158),
    [aux_sym_import_token1] = ACTIONS(158),
    [aux_sym_mod_token1] = ACTIONS(158),
    [anon_sym_set] = ACTIONS(158),
    [anon_sym_shell] = ACTIONS(158),
    [anon_sym_COMMA] = ACTIONS(156),
    [anon_sym_if] = ACTIONS(158),
    [anon_sym_LBRACE] = ACTIONS(156),
    [anon_sym_RBRACE] = ACTIONS(156),
    [anon_sym_assert] = ACTIONS(158),
    [anon_sym_LPAREN] = ACTIONS(156),
    [anon_sym_RPAREN] = ACTIONS(156),
    [anon_sym_SLASH] = ACTIONS(156),
    [anon_sym_PLUS] = ACTIONS(156),
    [anon_sym_EQ_EQ] = ACTIONS(156),
    [anon_sym_BANG_EQ] = ACTIONS(156),
    [anon_sym_EQ_TILDE] = ACTIONS(156),
    [anon_sym_arch] = ACTIONS(158),
    [anon_sym_num_cpus] = ACTIONS(158),
    [anon_sym_os] = ACTIONS(158),
    [anon_sym_os_family] = ACTIONS(158),
    [anon_sym_env_var] = ACTIONS(158),
    [anon_sym_env_var_or_default] = ACTIONS(158),
    [anon_sym_env] = ACTIONS(158),
    [anon_sym_is_dependency] = ACTIONS(158),
    [anon_sym_invocation_dir] = ACTIONS(158),
    [anon_sym_invocation_dir_native] = ACTIONS(158),
    [anon_sym_invocation_directory] = ACTIONS(158),
    [anon_sym_invocation_directory_native] = ACTIONS(158),
    [anon_sym_justfile] = ACTIONS(158),
    [anon_sym_justfile_dir] = ACTIONS(158),
    [anon_sym_justfile_directory] = ACTIONS(158),
    [anon_sym_source_dir] = ACTIONS(158),
    [anon_sym_source_directory] = ACTIONS(158),
    [anon_sym_source_file] = ACTIONS(158),
    [anon_sym_just_executable] = ACTIONS(158),
    [anon_sym_just_pid] = ACTIONS(158),
    [anon_sym_append] = ACTIONS(158),
    [anon_sym_prepend] = ACTIONS(158),
    [anon_sym_encode_uri_component] = ACTIONS(158),
    [anon_sym_quote] = ACTIONS(158),
    [anon_sym_replace] = ACTIONS(158),
    [anon_sym_replace_regex] = ACTIONS(158),
    [anon_sym_trim] = ACTIONS(158),
    [anon_sym_trim_end] = ACTIONS(158),
    [anon_sym_trim_end_match] = ACTIONS(158),
    [anon_sym_trim_end_matches] = ACTIONS(158),
    [anon_sym_trim_start] = ACTIONS(158),
    [anon_sym_trim_start_match] = ACTIONS(158),
    [anon_sym_trim_start_matches] = ACTIONS(158),
    [anon_sym_capitalize] = ACTIONS(158),
    [anon_sym_kebabcase] = ACTIONS(158),
    [anon_sym_lowercamelcase] = ACTIONS(158),
    [anon_sym_lowercase] = ACTIONS(158),
    [anon_sym_shoutykebabcase] = ACTIONS(158),
    [anon_sym_shoutysnakecase] = ACTIONS(158),
    [anon_sym_snakecase] = ACTIONS(158),
    [anon_sym_titlecase] = ACTIONS(158),
    [anon_sym_uppercamelcase] = ACTIONS(158),
    [anon_sym_uppercase] = ACTIONS(158),
    [anon_sym_absolute_path] = ACTIONS(158),
    [anon_sym_canonicalize] = ACTIONS(158),
    [anon_sym_extension] = ACTIONS(158),
    [anon_sym_file_name] = ACTIONS(158),
    [anon_sym_file_stem] = ACTIONS(158),
    [anon_sym_parent_dir] = ACTIONS(158),
    [anon_sym_parent_directory] = ACTIONS(158),
    [anon_sym_without_extension] = ACTIONS(158),
    [anon_sym_clean] = ACTIONS(158),
    [anon_sym_join] = ACTIONS(158),
    [anon_sym_path_exists] = ACTIONS(158),
    [anon_sym_error] = ACTIONS(158),
    [anon_sym_blake3] = ACTIONS(158),
    [anon_sym_blake3_file] = ACTIONS(158),
    [anon_sym_sha256] = ACTIONS(158),
    [anon_sym_sha256_file] = ACTIONS(158),
    [anon_sym_uuid] = ACTIONS(158),
    [anon_sym_choose] = ACTIONS(158),
    [anon_sym_datetime] = ACTIONS(158),
    [anon_sym_datetime_utc] = ACTIONS(158),
    [anon_sym_semver_matches] = ACTIONS(158),
    [anon_sym_cache_dir] = ACTIONS(158),
    [anon_sym_cache_directory] = ACTIONS(158),
    [anon_sym_config_dir] = ACTIONS(158),
    [anon_sym_config_directory] = ACTIONS(158),
    [anon_sym_config_local_dir] = ACTIONS(158),
    [anon_sym_config_local_directory] = ACTIONS(158),
    [anon_sym_data_dir] = ACTIONS(158),
    [anon_sym_data_directory] = ACTIONS(158),
    [anon_sym_data_local_dir] = ACTIONS(158),
    [anon_sym_data_local_directory] = ACTIONS(158),
    [anon_sym_executable_dir] = ACTIONS(158),
    [anon_sym_executable_directory] = ACTIONS(158),
    [anon_sym_home_dir] = ACTIONS(158),
    [anon_sym_home_directory] = ACTIONS(158),
    [anon_sym_BQUOTE] = ACTIONS(158),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(156),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(156),
    [anon_sym_DQUOTE] = ACTIONS(158),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(156),
    [anon_sym_SQUOTE] = ACTIONS(158),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [15] = {
    [sym_comment] = STATE(15),
    [ts_builtin_sym_end] = ACTIONS(160),
    [sym_identifier] = ACTIONS(162),
    [anon_sym_alias] = ACTIONS(162),
    [anon_sym_export] = ACTIONS(162),
    [aux_sym_import_token1] = ACTIONS(162),
    [aux_sym_mod_token1] = ACTIONS(162),
    [anon_sym_set] = ACTIONS(162),
    [anon_sym_shell] = ACTIONS(162),
    [anon_sym_COMMA] = ACTIONS(160),
    [anon_sym_if] = ACTIONS(162),
    [anon_sym_LBRACE] = ACTIONS(160),
    [anon_sym_RBRACE] = ACTIONS(160),
    [anon_sym_assert] = ACTIONS(162),
    [anon_sym_LPAREN] = ACTIONS(160),
    [anon_sym_RPAREN] = ACTIONS(160),
    [anon_sym_SLASH] = ACTIONS(160),
    [anon_sym_PLUS] = ACTIONS(160),
    [anon_sym_EQ_EQ] = ACTIONS(160),
    [anon_sym_BANG_EQ] = ACTIONS(160),
    [anon_sym_EQ_TILDE] = ACTIONS(160),
    [anon_sym_arch] = ACTIONS(162),
    [anon_sym_num_cpus] = ACTIONS(162),
    [anon_sym_os] = ACTIONS(162),
    [anon_sym_os_family] = ACTIONS(162),
    [anon_sym_env_var] = ACTIONS(162),
    [anon_sym_env_var_or_default] = ACTIONS(162),
    [anon_sym_env] = ACTIONS(162),
    [anon_sym_is_dependency] = ACTIONS(162),
    [anon_sym_invocation_dir] = ACTIONS(162),
    [anon_sym_invocation_dir_native] = ACTIONS(162),
    [anon_sym_invocation_directory] = ACTIONS(162),
    [anon_sym_invocation_directory_native] = ACTIONS(162),
    [anon_sym_justfile] = ACTIONS(162),
    [anon_sym_justfile_dir] = ACTIONS(162),
    [anon_sym_justfile_directory] = ACTIONS(162),
    [anon_sym_source_dir] = ACTIONS(162),
    [anon_sym_source_directory] = ACTIONS(162),
    [anon_sym_source_file] = ACTIONS(162),
    [anon_sym_just_executable] = ACTIONS(162),
    [anon_sym_just_pid] = ACTIONS(162),
    [anon_sym_append] = ACTIONS(162),
    [anon_sym_prepend] = ACTIONS(162),
    [anon_sym_encode_uri_component] = ACTIONS(162),
    [anon_sym_quote] = ACTIONS(162),
    [anon_sym_replace] = ACTIONS(162),
    [anon_sym_replace_regex] = ACTIONS(162),
    [anon_sym_trim] = ACTIONS(162),
    [anon_sym_trim_end] = ACTIONS(162),
    [anon_sym_trim_end_match] = ACTIONS(162),
    [anon_sym_trim_end_matches] = ACTIONS(162),
    [anon_sym_trim_start] = ACTIONS(162),
    [anon_sym_trim_start_match] = ACTIONS(162),
    [anon_sym_trim_start_matches] = ACTIONS(162),
    [anon_sym_capitalize] = ACTIONS(162),
    [anon_sym_kebabcase] = ACTIONS(162),
    [anon_sym_lowercamelcase] = ACTIONS(162),
    [anon_sym_lowercase] = ACTIONS(162),
    [anon_sym_shoutykebabcase] = ACTIONS(162),
    [anon_sym_shoutysnakecase] = ACTIONS(162),
    [anon_sym_snakecase] = ACTIONS(162),
    [anon_sym_titlecase] = ACTIONS(162),
    [anon_sym_uppercamelcase] = ACTIONS(162),
    [anon_sym_uppercase] = ACTIONS(162),
    [anon_sym_absolute_path] = ACTIONS(162),
    [anon_sym_canonicalize] = ACTIONS(162),
    [anon_sym_extension] = ACTIONS(162),
    [anon_sym_file_name] = ACTIONS(162),
    [anon_sym_file_stem] = ACTIONS(162),
    [anon_sym_parent_dir] = ACTIONS(162),
    [anon_sym_parent_directory] = ACTIONS(162),
    [anon_sym_without_extension] = ACTIONS(162),
    [anon_sym_clean] = ACTIONS(162),
    [anon_sym_join] = ACTIONS(162),
    [anon_sym_path_exists] = ACTIONS(162),
    [anon_sym_error] = ACTIONS(162),
    [anon_sym_blake3] = ACTIONS(162),
    [anon_sym_blake3_file] = ACTIONS(162),
    [anon_sym_sha256] = ACTIONS(162),
    [anon_sym_sha256_file] = ACTIONS(162),
    [anon_sym_uuid] = ACTIONS(162),
    [anon_sym_choose] = ACTIONS(162),
    [anon_sym_datetime] = ACTIONS(162),
    [anon_sym_datetime_utc] = ACTIONS(162),
    [anon_sym_semver_matches] = ACTIONS(162),
    [anon_sym_cache_dir] = ACTIONS(162),
    [anon_sym_cache_directory] = ACTIONS(162),
    [anon_sym_config_dir] = ACTIONS(162),
    [anon_sym_config_directory] = ACTIONS(162),
    [anon_sym_config_local_dir] = ACTIONS(162),
    [anon_sym_config_local_directory] = ACTIONS(162),
    [anon_sym_data_dir] = ACTIONS(162),
    [anon_sym_data_directory] = ACTIONS(162),
    [anon_sym_data_local_dir] = ACTIONS(162),
    [anon_sym_data_local_directory] = ACTIONS(162),
    [anon_sym_executable_dir] = ACTIONS(162),
    [anon_sym_executable_directory] = ACTIONS(162),
    [anon_sym_home_dir] = ACTIONS(162),
    [anon_sym_home_directory] = ACTIONS(162),
    [anon_sym_BQUOTE] = ACTIONS(162),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(160),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(160),
    [anon_sym_DQUOTE] = ACTIONS(162),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(160),
    [anon_sym_SQUOTE] = ACTIONS(162),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [16] = {
    [sym_comment] = STATE(16),
    [ts_builtin_sym_end] = ACTIONS(164),
    [sym_identifier] = ACTIONS(166),
    [anon_sym_alias] = ACTIONS(166),
    [anon_sym_export] = ACTIONS(166),
    [aux_sym_import_token1] = ACTIONS(166),
    [aux_sym_mod_token1] = ACTIONS(166),
    [anon_sym_set] = ACTIONS(166),
    [anon_sym_shell] = ACTIONS(166),
    [anon_sym_COMMA] = ACTIONS(164),
    [anon_sym_if] = ACTIONS(166),
    [anon_sym_LBRACE] = ACTIONS(164),
    [anon_sym_RBRACE] = ACTIONS(164),
    [anon_sym_assert] = ACTIONS(166),
    [anon_sym_LPAREN] = ACTIONS(164),
    [anon_sym_RPAREN] = ACTIONS(164),
    [anon_sym_SLASH] = ACTIONS(164),
    [anon_sym_PLUS] = ACTIONS(164),
    [anon_sym_EQ_EQ] = ACTIONS(164),
    [anon_sym_BANG_EQ] = ACTIONS(164),
    [anon_sym_EQ_TILDE] = ACTIONS(164),
    [anon_sym_arch] = ACTIONS(166),
    [anon_sym_num_cpus] = ACTIONS(166),
    [anon_sym_os] = ACTIONS(166),
    [anon_sym_os_family] = ACTIONS(166),
    [anon_sym_env_var] = ACTIONS(166),
    [anon_sym_env_var_or_default] = ACTIONS(166),
    [anon_sym_env] = ACTIONS(166),
    [anon_sym_is_dependency] = ACTIONS(166),
    [anon_sym_invocation_dir] = ACTIONS(166),
    [anon_sym_invocation_dir_native] = ACTIONS(166),
    [anon_sym_invocation_directory] = ACTIONS(166),
    [anon_sym_invocation_directory_native] = ACTIONS(166),
    [anon_sym_justfile] = ACTIONS(166),
    [anon_sym_justfile_dir] = ACTIONS(166),
    [anon_sym_justfile_directory] = ACTIONS(166),
    [anon_sym_source_dir] = ACTIONS(166),
    [anon_sym_source_directory] = ACTIONS(166),
    [anon_sym_source_file] = ACTIONS(166),
    [anon_sym_just_executable] = ACTIONS(166),
    [anon_sym_just_pid] = ACTIONS(166),
    [anon_sym_append] = ACTIONS(166),
    [anon_sym_prepend] = ACTIONS(166),
    [anon_sym_encode_uri_component] = ACTIONS(166),
    [anon_sym_quote] = ACTIONS(166),
    [anon_sym_replace] = ACTIONS(166),
    [anon_sym_replace_regex] = ACTIONS(166),
    [anon_sym_trim] = ACTIONS(166),
    [anon_sym_trim_end] = ACTIONS(166),
    [anon_sym_trim_end_match] = ACTIONS(166),
    [anon_sym_trim_end_matches] = ACTIONS(166),
    [anon_sym_trim_start] = ACTIONS(166),
    [anon_sym_trim_start_match] = ACTIONS(166),
    [anon_sym_trim_start_matches] = ACTIONS(166),
    [anon_sym_capitalize] = ACTIONS(166),
    [anon_sym_kebabcase] = ACTIONS(166),
    [anon_sym_lowercamelcase] = ACTIONS(166),
    [anon_sym_lowercase] = ACTIONS(166),
    [anon_sym_shoutykebabcase] = ACTIONS(166),
    [anon_sym_shoutysnakecase] = ACTIONS(166),
    [anon_sym_snakecase] = ACTIONS(166),
    [anon_sym_titlecase] = ACTIONS(166),
    [anon_sym_uppercamelcase] = ACTIONS(166),
    [anon_sym_uppercase] = ACTIONS(166),
    [anon_sym_absolute_path] = ACTIONS(166),
    [anon_sym_canonicalize] = ACTIONS(166),
    [anon_sym_extension] = ACTIONS(166),
    [anon_sym_file_name] = ACTIONS(166),
    [anon_sym_file_stem] = ACTIONS(166),
    [anon_sym_parent_dir] = ACTIONS(166),
    [anon_sym_parent_directory] = ACTIONS(166),
    [anon_sym_without_extension] = ACTIONS(166),
    [anon_sym_clean] = ACTIONS(166),
    [anon_sym_join] = ACTIONS(166),
    [anon_sym_path_exists] = ACTIONS(166),
    [anon_sym_error] = ACTIONS(166),
    [anon_sym_blake3] = ACTIONS(166),
    [anon_sym_blake3_file] = ACTIONS(166),
    [anon_sym_sha256] = ACTIONS(166),
    [anon_sym_sha256_file] = ACTIONS(166),
    [anon_sym_uuid] = ACTIONS(166),
    [anon_sym_choose] = ACTIONS(166),
    [anon_sym_datetime] = ACTIONS(166),
    [anon_sym_datetime_utc] = ACTIONS(166),
    [anon_sym_semver_matches] = ACTIONS(166),
    [anon_sym_cache_dir] = ACTIONS(166),
    [anon_sym_cache_directory] = ACTIONS(166),
    [anon_sym_config_dir] = ACTIONS(166),
    [anon_sym_config_directory] = ACTIONS(166),
    [anon_sym_config_local_dir] = ACTIONS(166),
    [anon_sym_config_local_directory] = ACTIONS(166),
    [anon_sym_data_dir] = ACTIONS(166),
    [anon_sym_data_directory] = ACTIONS(166),
    [anon_sym_data_local_dir] = ACTIONS(166),
    [anon_sym_data_local_directory] = ACTIONS(166),
    [anon_sym_executable_dir] = ACTIONS(166),
    [anon_sym_executable_directory] = ACTIONS(166),
    [anon_sym_home_dir] = ACTIONS(166),
    [anon_sym_home_directory] = ACTIONS(166),
    [anon_sym_BQUOTE] = ACTIONS(166),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(164),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(164),
    [anon_sym_DQUOTE] = ACTIONS(166),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(164),
    [anon_sym_SQUOTE] = ACTIONS(166),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [17] = {
    [sym_comment] = STATE(17),
    [ts_builtin_sym_end] = ACTIONS(168),
    [sym_identifier] = ACTIONS(170),
    [anon_sym_alias] = ACTIONS(170),
    [anon_sym_export] = ACTIONS(170),
    [aux_sym_import_token1] = ACTIONS(170),
    [aux_sym_mod_token1] = ACTIONS(170),
    [anon_sym_set] = ACTIONS(170),
    [anon_sym_shell] = ACTIONS(170),
    [anon_sym_COMMA] = ACTIONS(168),
    [anon_sym_if] = ACTIONS(170),
    [anon_sym_LBRACE] = ACTIONS(168),
    [anon_sym_RBRACE] = ACTIONS(168),
    [anon_sym_assert] = ACTIONS(170),
    [anon_sym_LPAREN] = ACTIONS(168),
    [anon_sym_RPAREN] = ACTIONS(168),
    [anon_sym_SLASH] = ACTIONS(168),
    [anon_sym_PLUS] = ACTIONS(168),
    [anon_sym_EQ_EQ] = ACTIONS(168),
    [anon_sym_BANG_EQ] = ACTIONS(168),
    [anon_sym_EQ_TILDE] = ACTIONS(168),
    [anon_sym_arch] = ACTIONS(170),
    [anon_sym_num_cpus] = ACTIONS(170),
    [anon_sym_os] = ACTIONS(170),
    [anon_sym_os_family] = ACTIONS(170),
    [anon_sym_env_var] = ACTIONS(170),
    [anon_sym_env_var_or_default] = ACTIONS(170),
    [anon_sym_env] = ACTIONS(170),
    [anon_sym_is_dependency] = ACTIONS(170),
    [anon_sym_invocation_dir] = ACTIONS(170),
    [anon_sym_invocation_dir_native] = ACTIONS(170),
    [anon_sym_invocation_directory] = ACTIONS(170),
    [anon_sym_invocation_directory_native] = ACTIONS(170),
    [anon_sym_justfile] = ACTIONS(170),
    [anon_sym_justfile_dir] = ACTIONS(170),
    [anon_sym_justfile_directory] = ACTIONS(170),
    [anon_sym_source_dir] = ACTIONS(170),
    [anon_sym_source_directory] = ACTIONS(170),
    [anon_sym_source_file] = ACTIONS(170),
    [anon_sym_just_executable] = ACTIONS(170),
    [anon_sym_just_pid] = ACTIONS(170),
    [anon_sym_append] = ACTIONS(170),
    [anon_sym_prepend] = ACTIONS(170),
    [anon_sym_encode_uri_component] = ACTIONS(170),
    [anon_sym_quote] = ACTIONS(170),
    [anon_sym_replace] = ACTIONS(170),
    [anon_sym_replace_regex] = ACTIONS(170),
    [anon_sym_trim] = ACTIONS(170),
    [anon_sym_trim_end] = ACTIONS(170),
    [anon_sym_trim_end_match] = ACTIONS(170),
    [anon_sym_trim_end_matches] = ACTIONS(170),
    [anon_sym_trim_start] = ACTIONS(170),
    [anon_sym_trim_start_match] = ACTIONS(170),
    [anon_sym_trim_start_matches] = ACTIONS(170),
    [anon_sym_capitalize] = ACTIONS(170),
    [anon_sym_kebabcase] = ACTIONS(170),
    [anon_sym_lowercamelcase] = ACTIONS(170),
    [anon_sym_lowercase] = ACTIONS(170),
    [anon_sym_shoutykebabcase] = ACTIONS(170),
    [anon_sym_shoutysnakecase] = ACTIONS(170),
    [anon_sym_snakecase] = ACTIONS(170),
    [anon_sym_titlecase] = ACTIONS(170),
    [anon_sym_uppercamelcase] = ACTIONS(170),
    [anon_sym_uppercase] = ACTIONS(170),
    [anon_sym_absolute_path] = ACTIONS(170),
    [anon_sym_canonicalize] = ACTIONS(170),
    [anon_sym_extension] = ACTIONS(170),
    [anon_sym_file_name] = ACTIONS(170),
    [anon_sym_file_stem] = ACTIONS(170),
    [anon_sym_parent_dir] = ACTIONS(170),
    [anon_sym_parent_directory] = ACTIONS(170),
    [anon_sym_without_extension] = ACTIONS(170),
    [anon_sym_clean] = ACTIONS(170),
    [anon_sym_join] = ACTIONS(170),
    [anon_sym_path_exists] = ACTIONS(170),
    [anon_sym_error] = ACTIONS(170),
    [anon_sym_blake3] = ACTIONS(170),
    [anon_sym_blake3_file] = ACTIONS(170),
    [anon_sym_sha256] = ACTIONS(170),
    [anon_sym_sha256_file] = ACTIONS(170),
    [anon_sym_uuid] = ACTIONS(170),
    [anon_sym_choose] = ACTIONS(170),
    [anon_sym_datetime] = ACTIONS(170),
    [anon_sym_datetime_utc] = ACTIONS(170),
    [anon_sym_semver_matches] = ACTIONS(170),
    [anon_sym_cache_dir] = ACTIONS(170),
    [anon_sym_cache_directory] = ACTIONS(170),
    [anon_sym_config_dir] = ACTIONS(170),
    [anon_sym_config_directory] = ACTIONS(170),
    [anon_sym_config_local_dir] = ACTIONS(170),
    [anon_sym_config_local_directory] = ACTIONS(170),
    [anon_sym_data_dir] = ACTIONS(170),
    [anon_sym_data_directory] = ACTIONS(170),
    [anon_sym_data_local_dir] = ACTIONS(170),
    [anon_sym_data_local_directory] = ACTIONS(170),
    [anon_sym_executable_dir] = ACTIONS(170),
    [anon_sym_executable_directory] = ACTIONS(170),
    [anon_sym_home_dir] = ACTIONS(170),
    [anon_sym_home_directory] = ACTIONS(170),
    [anon_sym_BQUOTE] = ACTIONS(170),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(168),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(168),
    [anon_sym_DQUOTE] = ACTIONS(170),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(168),
    [anon_sym_SQUOTE] = ACTIONS(170),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [18] = {
    [sym_comment] = STATE(18),
    [ts_builtin_sym_end] = ACTIONS(172),
    [sym_identifier] = ACTIONS(174),
    [anon_sym_alias] = ACTIONS(174),
    [anon_sym_export] = ACTIONS(174),
    [aux_sym_import_token1] = ACTIONS(174),
    [aux_sym_mod_token1] = ACTIONS(174),
    [anon_sym_set] = ACTIONS(174),
    [anon_sym_shell] = ACTIONS(174),
    [anon_sym_COMMA] = ACTIONS(172),
    [anon_sym_if] = ACTIONS(174),
    [anon_sym_LBRACE] = ACTIONS(172),
    [anon_sym_RBRACE] = ACTIONS(172),
    [anon_sym_assert] = ACTIONS(174),
    [anon_sym_LPAREN] = ACTIONS(172),
    [anon_sym_RPAREN] = ACTIONS(172),
    [anon_sym_SLASH] = ACTIONS(172),
    [anon_sym_PLUS] = ACTIONS(172),
    [anon_sym_EQ_EQ] = ACTIONS(172),
    [anon_sym_BANG_EQ] = ACTIONS(172),
    [anon_sym_EQ_TILDE] = ACTIONS(172),
    [anon_sym_arch] = ACTIONS(174),
    [anon_sym_num_cpus] = ACTIONS(174),
    [anon_sym_os] = ACTIONS(174),
    [anon_sym_os_family] = ACTIONS(174),
    [anon_sym_env_var] = ACTIONS(174),
    [anon_sym_env_var_or_default] = ACTIONS(174),
    [anon_sym_env] = ACTIONS(174),
    [anon_sym_is_dependency] = ACTIONS(174),
    [anon_sym_invocation_dir] = ACTIONS(174),
    [anon_sym_invocation_dir_native] = ACTIONS(174),
    [anon_sym_invocation_directory] = ACTIONS(174),
    [anon_sym_invocation_directory_native] = ACTIONS(174),
    [anon_sym_justfile] = ACTIONS(174),
    [anon_sym_justfile_dir] = ACTIONS(174),
    [anon_sym_justfile_directory] = ACTIONS(174),
    [anon_sym_source_dir] = ACTIONS(174),
    [anon_sym_source_directory] = ACTIONS(174),
    [anon_sym_source_file] = ACTIONS(174),
    [anon_sym_just_executable] = ACTIONS(174),
    [anon_sym_just_pid] = ACTIONS(174),
    [anon_sym_append] = ACTIONS(174),
    [anon_sym_prepend] = ACTIONS(174),
    [anon_sym_encode_uri_component] = ACTIONS(174),
    [anon_sym_quote] = ACTIONS(174),
    [anon_sym_replace] = ACTIONS(174),
    [anon_sym_replace_regex] = ACTIONS(174),
    [anon_sym_trim] = ACTIONS(174),
    [anon_sym_trim_end] = ACTIONS(174),
    [anon_sym_trim_end_match] = ACTIONS(174),
    [anon_sym_trim_end_matches] = ACTIONS(174),
    [anon_sym_trim_start] = ACTIONS(174),
    [anon_sym_trim_start_match] = ACTIONS(174),
    [anon_sym_trim_start_matches] = ACTIONS(174),
    [anon_sym_capitalize] = ACTIONS(174),
    [anon_sym_kebabcase] = ACTIONS(174),
    [anon_sym_lowercamelcase] = ACTIONS(174),
    [anon_sym_lowercase] = ACTIONS(174),
    [anon_sym_shoutykebabcase] = ACTIONS(174),
    [anon_sym_shoutysnakecase] = ACTIONS(174),
    [anon_sym_snakecase] = ACTIONS(174),
    [anon_sym_titlecase] = ACTIONS(174),
    [anon_sym_uppercamelcase] = ACTIONS(174),
    [anon_sym_uppercase] = ACTIONS(174),
    [anon_sym_absolute_path] = ACTIONS(174),
    [anon_sym_canonicalize] = ACTIONS(174),
    [anon_sym_extension] = ACTIONS(174),
    [anon_sym_file_name] = ACTIONS(174),
    [anon_sym_file_stem] = ACTIONS(174),
    [anon_sym_parent_dir] = ACTIONS(174),
    [anon_sym_parent_directory] = ACTIONS(174),
    [anon_sym_without_extension] = ACTIONS(174),
    [anon_sym_clean] = ACTIONS(174),
    [anon_sym_join] = ACTIONS(174),
    [anon_sym_path_exists] = ACTIONS(174),
    [anon_sym_error] = ACTIONS(174),
    [anon_sym_blake3] = ACTIONS(174),
    [anon_sym_blake3_file] = ACTIONS(174),
    [anon_sym_sha256] = ACTIONS(174),
    [anon_sym_sha256_file] = ACTIONS(174),
    [anon_sym_uuid] = ACTIONS(174),
    [anon_sym_choose] = ACTIONS(174),
    [anon_sym_datetime] = ACTIONS(174),
    [anon_sym_datetime_utc] = ACTIONS(174),
    [anon_sym_semver_matches] = ACTIONS(174),
    [anon_sym_cache_dir] = ACTIONS(174),
    [anon_sym_cache_directory] = ACTIONS(174),
    [anon_sym_config_dir] = ACTIONS(174),
    [anon_sym_config_directory] = ACTIONS(174),
    [anon_sym_config_local_dir] = ACTIONS(174),
    [anon_sym_config_local_directory] = ACTIONS(174),
    [anon_sym_data_dir] = ACTIONS(174),
    [anon_sym_data_directory] = ACTIONS(174),
    [anon_sym_data_local_dir] = ACTIONS(174),
    [anon_sym_data_local_directory] = ACTIONS(174),
    [anon_sym_executable_dir] = ACTIONS(174),
    [anon_sym_executable_directory] = ACTIONS(174),
    [anon_sym_home_dir] = ACTIONS(174),
    [anon_sym_home_directory] = ACTIONS(174),
    [anon_sym_BQUOTE] = ACTIONS(174),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(172),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(172),
    [anon_sym_DQUOTE] = ACTIONS(174),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(172),
    [anon_sym_SQUOTE] = ACTIONS(174),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [19] = {
    [sym_comment] = STATE(19),
    [ts_builtin_sym_end] = ACTIONS(176),
    [sym_identifier] = ACTIONS(178),
    [anon_sym_alias] = ACTIONS(178),
    [anon_sym_export] = ACTIONS(178),
    [aux_sym_import_token1] = ACTIONS(178),
    [aux_sym_mod_token1] = ACTIONS(178),
    [anon_sym_set] = ACTIONS(178),
    [anon_sym_shell] = ACTIONS(178),
    [anon_sym_COMMA] = ACTIONS(176),
    [anon_sym_if] = ACTIONS(178),
    [anon_sym_LBRACE] = ACTIONS(176),
    [anon_sym_RBRACE] = ACTIONS(176),
    [anon_sym_assert] = ACTIONS(178),
    [anon_sym_LPAREN] = ACTIONS(176),
    [anon_sym_RPAREN] = ACTIONS(176),
    [anon_sym_SLASH] = ACTIONS(176),
    [anon_sym_PLUS] = ACTIONS(176),
    [anon_sym_EQ_EQ] = ACTIONS(176),
    [anon_sym_BANG_EQ] = ACTIONS(176),
    [anon_sym_EQ_TILDE] = ACTIONS(176),
    [anon_sym_arch] = ACTIONS(178),
    [anon_sym_num_cpus] = ACTIONS(178),
    [anon_sym_os] = ACTIONS(178),
    [anon_sym_os_family] = ACTIONS(178),
    [anon_sym_env_var] = ACTIONS(178),
    [anon_sym_env_var_or_default] = ACTIONS(178),
    [anon_sym_env] = ACTIONS(178),
    [anon_sym_is_dependency] = ACTIONS(178),
    [anon_sym_invocation_dir] = ACTIONS(178),
    [anon_sym_invocation_dir_native] = ACTIONS(178),
    [anon_sym_invocation_directory] = ACTIONS(178),
    [anon_sym_invocation_directory_native] = ACTIONS(178),
    [anon_sym_justfile] = ACTIONS(178),
    [anon_sym_justfile_dir] = ACTIONS(178),
    [anon_sym_justfile_directory] = ACTIONS(178),
    [anon_sym_source_dir] = ACTIONS(178),
    [anon_sym_source_directory] = ACTIONS(178),
    [anon_sym_source_file] = ACTIONS(178),
    [anon_sym_just_executable] = ACTIONS(178),
    [anon_sym_just_pid] = ACTIONS(178),
    [anon_sym_append] = ACTIONS(178),
    [anon_sym_prepend] = ACTIONS(178),
    [anon_sym_encode_uri_component] = ACTIONS(178),
    [anon_sym_quote] = ACTIONS(178),
    [anon_sym_replace] = ACTIONS(178),
    [anon_sym_replace_regex] = ACTIONS(178),
    [anon_sym_trim] = ACTIONS(178),
    [anon_sym_trim_end] = ACTIONS(178),
    [anon_sym_trim_end_match] = ACTIONS(178),
    [anon_sym_trim_end_matches] = ACTIONS(178),
    [anon_sym_trim_start] = ACTIONS(178),
    [anon_sym_trim_start_match] = ACTIONS(178),
    [anon_sym_trim_start_matches] = ACTIONS(178),
    [anon_sym_capitalize] = ACTIONS(178),
    [anon_sym_kebabcase] = ACTIONS(178),
    [anon_sym_lowercamelcase] = ACTIONS(178),
    [anon_sym_lowercase] = ACTIONS(178),
    [anon_sym_shoutykebabcase] = ACTIONS(178),
    [anon_sym_shoutysnakecase] = ACTIONS(178),
    [anon_sym_snakecase] = ACTIONS(178),
    [anon_sym_titlecase] = ACTIONS(178),
    [anon_sym_uppercamelcase] = ACTIONS(178),
    [anon_sym_uppercase] = ACTIONS(178),
    [anon_sym_absolute_path] = ACTIONS(178),
    [anon_sym_canonicalize] = ACTIONS(178),
    [anon_sym_extension] = ACTIONS(178),
    [anon_sym_file_name] = ACTIONS(178),
    [anon_sym_file_stem] = ACTIONS(178),
    [anon_sym_parent_dir] = ACTIONS(178),
    [anon_sym_parent_directory] = ACTIONS(178),
    [anon_sym_without_extension] = ACTIONS(178),
    [anon_sym_clean] = ACTIONS(178),
    [anon_sym_join] = ACTIONS(178),
    [anon_sym_path_exists] = ACTIONS(178),
    [anon_sym_error] = ACTIONS(178),
    [anon_sym_blake3] = ACTIONS(178),
    [anon_sym_blake3_file] = ACTIONS(178),
    [anon_sym_sha256] = ACTIONS(178),
    [anon_sym_sha256_file] = ACTIONS(178),
    [anon_sym_uuid] = ACTIONS(178),
    [anon_sym_choose] = ACTIONS(178),
    [anon_sym_datetime] = ACTIONS(178),
    [anon_sym_datetime_utc] = ACTIONS(178),
    [anon_sym_semver_matches] = ACTIONS(178),
    [anon_sym_cache_dir] = ACTIONS(178),
    [anon_sym_cache_directory] = ACTIONS(178),
    [anon_sym_config_dir] = ACTIONS(178),
    [anon_sym_config_directory] = ACTIONS(178),
    [anon_sym_config_local_dir] = ACTIONS(178),
    [anon_sym_config_local_directory] = ACTIONS(178),
    [anon_sym_data_dir] = ACTIONS(178),
    [anon_sym_data_directory] = ACTIONS(178),
    [anon_sym_data_local_dir] = ACTIONS(178),
    [anon_sym_data_local_directory] = ACTIONS(178),
    [anon_sym_executable_dir] = ACTIONS(178),
    [anon_sym_executable_directory] = ACTIONS(178),
    [anon_sym_home_dir] = ACTIONS(178),
    [anon_sym_home_directory] = ACTIONS(178),
    [anon_sym_BQUOTE] = ACTIONS(178),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(176),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(176),
    [anon_sym_DQUOTE] = ACTIONS(178),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(176),
    [anon_sym_SQUOTE] = ACTIONS(178),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [20] = {
    [sym_comment] = STATE(20),
    [ts_builtin_sym_end] = ACTIONS(180),
    [sym_identifier] = ACTIONS(182),
    [anon_sym_alias] = ACTIONS(182),
    [anon_sym_export] = ACTIONS(182),
    [aux_sym_import_token1] = ACTIONS(182),
    [aux_sym_mod_token1] = ACTIONS(182),
    [anon_sym_set] = ACTIONS(182),
    [anon_sym_shell] = ACTIONS(182),
    [anon_sym_COMMA] = ACTIONS(180),
    [anon_sym_if] = ACTIONS(182),
    [anon_sym_LBRACE] = ACTIONS(180),
    [anon_sym_RBRACE] = ACTIONS(180),
    [anon_sym_assert] = ACTIONS(182),
    [anon_sym_LPAREN] = ACTIONS(180),
    [anon_sym_RPAREN] = ACTIONS(180),
    [anon_sym_SLASH] = ACTIONS(180),
    [anon_sym_PLUS] = ACTIONS(180),
    [anon_sym_EQ_EQ] = ACTIONS(180),
    [anon_sym_BANG_EQ] = ACTIONS(180),
    [anon_sym_EQ_TILDE] = ACTIONS(180),
    [anon_sym_arch] = ACTIONS(182),
    [anon_sym_num_cpus] = ACTIONS(182),
    [anon_sym_os] = ACTIONS(182),
    [anon_sym_os_family] = ACTIONS(182),
    [anon_sym_env_var] = ACTIONS(182),
    [anon_sym_env_var_or_default] = ACTIONS(182),
    [anon_sym_env] = ACTIONS(182),
    [anon_sym_is_dependency] = ACTIONS(182),
    [anon_sym_invocation_dir] = ACTIONS(182),
    [anon_sym_invocation_dir_native] = ACTIONS(182),
    [anon_sym_invocation_directory] = ACTIONS(182),
    [anon_sym_invocation_directory_native] = ACTIONS(182),
    [anon_sym_justfile] = ACTIONS(182),
    [anon_sym_justfile_dir] = ACTIONS(182),
    [anon_sym_justfile_directory] = ACTIONS(182),
    [anon_sym_source_dir] = ACTIONS(182),
    [anon_sym_source_directory] = ACTIONS(182),
    [anon_sym_source_file] = ACTIONS(182),
    [anon_sym_just_executable] = ACTIONS(182),
    [anon_sym_just_pid] = ACTIONS(182),
    [anon_sym_append] = ACTIONS(182),
    [anon_sym_prepend] = ACTIONS(182),
    [anon_sym_encode_uri_component] = ACTIONS(182),
    [anon_sym_quote] = ACTIONS(182),
    [anon_sym_replace] = ACTIONS(182),
    [anon_sym_replace_regex] = ACTIONS(182),
    [anon_sym_trim] = ACTIONS(182),
    [anon_sym_trim_end] = ACTIONS(182),
    [anon_sym_trim_end_match] = ACTIONS(182),
    [anon_sym_trim_end_matches] = ACTIONS(182),
    [anon_sym_trim_start] = ACTIONS(182),
    [anon_sym_trim_start_match] = ACTIONS(182),
    [anon_sym_trim_start_matches] = ACTIONS(182),
    [anon_sym_capitalize] = ACTIONS(182),
    [anon_sym_kebabcase] = ACTIONS(182),
    [anon_sym_lowercamelcase] = ACTIONS(182),
    [anon_sym_lowercase] = ACTIONS(182),
    [anon_sym_shoutykebabcase] = ACTIONS(182),
    [anon_sym_shoutysnakecase] = ACTIONS(182),
    [anon_sym_snakecase] = ACTIONS(182),
    [anon_sym_titlecase] = ACTIONS(182),
    [anon_sym_uppercamelcase] = ACTIONS(182),
    [anon_sym_uppercase] = ACTIONS(182),
    [anon_sym_absolute_path] = ACTIONS(182),
    [anon_sym_canonicalize] = ACTIONS(182),
    [anon_sym_extension] = ACTIONS(182),
    [anon_sym_file_name] = ACTIONS(182),
    [anon_sym_file_stem] = ACTIONS(182),
    [anon_sym_parent_dir] = ACTIONS(182),
    [anon_sym_parent_directory] = ACTIONS(182),
    [anon_sym_without_extension] = ACTIONS(182),
    [anon_sym_clean] = ACTIONS(182),
    [anon_sym_join] = ACTIONS(182),
    [anon_sym_path_exists] = ACTIONS(182),
    [anon_sym_error] = ACTIONS(182),
    [anon_sym_blake3] = ACTIONS(182),
    [anon_sym_blake3_file] = ACTIONS(182),
    [anon_sym_sha256] = ACTIONS(182),
    [anon_sym_sha256_file] = ACTIONS(182),
    [anon_sym_uuid] = ACTIONS(182),
    [anon_sym_choose] = ACTIONS(182),
    [anon_sym_datetime] = ACTIONS(182),
    [anon_sym_datetime_utc] = ACTIONS(182),
    [anon_sym_semver_matches] = ACTIONS(182),
    [anon_sym_cache_dir] = ACTIONS(182),
    [anon_sym_cache_directory] = ACTIONS(182),
    [anon_sym_config_dir] = ACTIONS(182),
    [anon_sym_config_directory] = ACTIONS(182),
    [anon_sym_config_local_dir] = ACTIONS(182),
    [anon_sym_config_local_directory] = ACTIONS(182),
    [anon_sym_data_dir] = ACTIONS(182),
    [anon_sym_data_directory] = ACTIONS(182),
    [anon_sym_data_local_dir] = ACTIONS(182),
    [anon_sym_data_local_directory] = ACTIONS(182),
    [anon_sym_executable_dir] = ACTIONS(182),
    [anon_sym_executable_directory] = ACTIONS(182),
    [anon_sym_home_dir] = ACTIONS(182),
    [anon_sym_home_directory] = ACTIONS(182),
    [anon_sym_BQUOTE] = ACTIONS(182),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(180),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(180),
    [anon_sym_DQUOTE] = ACTIONS(182),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(180),
    [anon_sym_SQUOTE] = ACTIONS(182),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [21] = {
    [sym_comment] = STATE(21),
    [ts_builtin_sym_end] = ACTIONS(184),
    [sym_identifier] = ACTIONS(186),
    [anon_sym_alias] = ACTIONS(186),
    [anon_sym_export] = ACTIONS(186),
    [aux_sym_import_token1] = ACTIONS(186),
    [aux_sym_mod_token1] = ACTIONS(186),
    [anon_sym_set] = ACTIONS(186),
    [anon_sym_shell] = ACTIONS(186),
    [anon_sym_COMMA] = ACTIONS(184),
    [anon_sym_if] = ACTIONS(186),
    [anon_sym_LBRACE] = ACTIONS(184),
    [anon_sym_RBRACE] = ACTIONS(184),
    [anon_sym_assert] = ACTIONS(186),
    [anon_sym_LPAREN] = ACTIONS(184),
    [anon_sym_RPAREN] = ACTIONS(184),
    [anon_sym_SLASH] = ACTIONS(184),
    [anon_sym_PLUS] = ACTIONS(184),
    [anon_sym_EQ_EQ] = ACTIONS(184),
    [anon_sym_BANG_EQ] = ACTIONS(184),
    [anon_sym_EQ_TILDE] = ACTIONS(184),
    [anon_sym_arch] = ACTIONS(186),
    [anon_sym_num_cpus] = ACTIONS(186),
    [anon_sym_os] = ACTIONS(186),
    [anon_sym_os_family] = ACTIONS(186),
    [anon_sym_env_var] = ACTIONS(186),
    [anon_sym_env_var_or_default] = ACTIONS(186),
    [anon_sym_env] = ACTIONS(186),
    [anon_sym_is_dependency] = ACTIONS(186),
    [anon_sym_invocation_dir] = ACTIONS(186),
    [anon_sym_invocation_dir_native] = ACTIONS(186),
    [anon_sym_invocation_directory] = ACTIONS(186),
    [anon_sym_invocation_directory_native] = ACTIONS(186),
    [anon_sym_justfile] = ACTIONS(186),
    [anon_sym_justfile_dir] = ACTIONS(186),
    [anon_sym_justfile_directory] = ACTIONS(186),
    [anon_sym_source_dir] = ACTIONS(186),
    [anon_sym_source_directory] = ACTIONS(186),
    [anon_sym_source_file] = ACTIONS(186),
    [anon_sym_just_executable] = ACTIONS(186),
    [anon_sym_just_pid] = ACTIONS(186),
    [anon_sym_append] = ACTIONS(186),
    [anon_sym_prepend] = ACTIONS(186),
    [anon_sym_encode_uri_component] = ACTIONS(186),
    [anon_sym_quote] = ACTIONS(186),
    [anon_sym_replace] = ACTIONS(186),
    [anon_sym_replace_regex] = ACTIONS(186),
    [anon_sym_trim] = ACTIONS(186),
    [anon_sym_trim_end] = ACTIONS(186),
    [anon_sym_trim_end_match] = ACTIONS(186),
    [anon_sym_trim_end_matches] = ACTIONS(186),
    [anon_sym_trim_start] = ACTIONS(186),
    [anon_sym_trim_start_match] = ACTIONS(186),
    [anon_sym_trim_start_matches] = ACTIONS(186),
    [anon_sym_capitalize] = ACTIONS(186),
    [anon_sym_kebabcase] = ACTIONS(186),
    [anon_sym_lowercamelcase] = ACTIONS(186),
    [anon_sym_lowercase] = ACTIONS(186),
    [anon_sym_shoutykebabcase] = ACTIONS(186),
    [anon_sym_shoutysnakecase] = ACTIONS(186),
    [anon_sym_snakecase] = ACTIONS(186),
    [anon_sym_titlecase] = ACTIONS(186),
    [anon_sym_uppercamelcase] = ACTIONS(186),
    [anon_sym_uppercase] = ACTIONS(186),
    [anon_sym_absolute_path] = ACTIONS(186),
    [anon_sym_canonicalize] = ACTIONS(186),
    [anon_sym_extension] = ACTIONS(186),
    [anon_sym_file_name] = ACTIONS(186),
    [anon_sym_file_stem] = ACTIONS(186),
    [anon_sym_parent_dir] = ACTIONS(186),
    [anon_sym_parent_directory] = ACTIONS(186),
    [anon_sym_without_extension] = ACTIONS(186),
    [anon_sym_clean] = ACTIONS(186),
    [anon_sym_join] = ACTIONS(186),
    [anon_sym_path_exists] = ACTIONS(186),
    [anon_sym_error] = ACTIONS(186),
    [anon_sym_blake3] = ACTIONS(186),
    [anon_sym_blake3_file] = ACTIONS(186),
    [anon_sym_sha256] = ACTIONS(186),
    [anon_sym_sha256_file] = ACTIONS(186),
    [anon_sym_uuid] = ACTIONS(186),
    [anon_sym_choose] = ACTIONS(186),
    [anon_sym_datetime] = ACTIONS(186),
    [anon_sym_datetime_utc] = ACTIONS(186),
    [anon_sym_semver_matches] = ACTIONS(186),
    [anon_sym_cache_dir] = ACTIONS(186),
    [anon_sym_cache_directory] = ACTIONS(186),
    [anon_sym_config_dir] = ACTIONS(186),
    [anon_sym_config_directory] = ACTIONS(186),
    [anon_sym_config_local_dir] = ACTIONS(186),
    [anon_sym_config_local_directory] = ACTIONS(186),
    [anon_sym_data_dir] = ACTIONS(186),
    [anon_sym_data_directory] = ACTIONS(186),
    [anon_sym_data_local_dir] = ACTIONS(186),
    [anon_sym_data_local_directory] = ACTIONS(186),
    [anon_sym_executable_dir] = ACTIONS(186),
    [anon_sym_executable_directory] = ACTIONS(186),
    [anon_sym_home_dir] = ACTIONS(186),
    [anon_sym_home_directory] = ACTIONS(186),
    [anon_sym_BQUOTE] = ACTIONS(186),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(184),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(184),
    [anon_sym_DQUOTE] = ACTIONS(186),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(184),
    [anon_sym_SQUOTE] = ACTIONS(186),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [22] = {
    [sym_comment] = STATE(22),
    [ts_builtin_sym_end] = ACTIONS(188),
    [sym_identifier] = ACTIONS(190),
    [anon_sym_alias] = ACTIONS(190),
    [anon_sym_export] = ACTIONS(190),
    [aux_sym_import_token1] = ACTIONS(190),
    [aux_sym_mod_token1] = ACTIONS(190),
    [anon_sym_set] = ACTIONS(190),
    [anon_sym_shell] = ACTIONS(190),
    [anon_sym_COMMA] = ACTIONS(188),
    [anon_sym_if] = ACTIONS(190),
    [anon_sym_LBRACE] = ACTIONS(188),
    [anon_sym_RBRACE] = ACTIONS(188),
    [anon_sym_assert] = ACTIONS(190),
    [anon_sym_LPAREN] = ACTIONS(188),
    [anon_sym_RPAREN] = ACTIONS(188),
    [anon_sym_SLASH] = ACTIONS(188),
    [anon_sym_PLUS] = ACTIONS(188),
    [anon_sym_EQ_EQ] = ACTIONS(188),
    [anon_sym_BANG_EQ] = ACTIONS(188),
    [anon_sym_EQ_TILDE] = ACTIONS(188),
    [anon_sym_arch] = ACTIONS(190),
    [anon_sym_num_cpus] = ACTIONS(190),
    [anon_sym_os] = ACTIONS(190),
    [anon_sym_os_family] = ACTIONS(190),
    [anon_sym_env_var] = ACTIONS(190),
    [anon_sym_env_var_or_default] = ACTIONS(190),
    [anon_sym_env] = ACTIONS(190),
    [anon_sym_is_dependency] = ACTIONS(190),
    [anon_sym_invocation_dir] = ACTIONS(190),
    [anon_sym_invocation_dir_native] = ACTIONS(190),
    [anon_sym_invocation_directory] = ACTIONS(190),
    [anon_sym_invocation_directory_native] = ACTIONS(190),
    [anon_sym_justfile] = ACTIONS(190),
    [anon_sym_justfile_dir] = ACTIONS(190),
    [anon_sym_justfile_directory] = ACTIONS(190),
    [anon_sym_source_dir] = ACTIONS(190),
    [anon_sym_source_directory] = ACTIONS(190),
    [anon_sym_source_file] = ACTIONS(190),
    [anon_sym_just_executable] = ACTIONS(190),
    [anon_sym_just_pid] = ACTIONS(190),
    [anon_sym_append] = ACTIONS(190),
    [anon_sym_prepend] = ACTIONS(190),
    [anon_sym_encode_uri_component] = ACTIONS(190),
    [anon_sym_quote] = ACTIONS(190),
    [anon_sym_replace] = ACTIONS(190),
    [anon_sym_replace_regex] = ACTIONS(190),
    [anon_sym_trim] = ACTIONS(190),
    [anon_sym_trim_end] = ACTIONS(190),
    [anon_sym_trim_end_match] = ACTIONS(190),
    [anon_sym_trim_end_matches] = ACTIONS(190),
    [anon_sym_trim_start] = ACTIONS(190),
    [anon_sym_trim_start_match] = ACTIONS(190),
    [anon_sym_trim_start_matches] = ACTIONS(190),
    [anon_sym_capitalize] = ACTIONS(190),
    [anon_sym_kebabcase] = ACTIONS(190),
    [anon_sym_lowercamelcase] = ACTIONS(190),
    [anon_sym_lowercase] = ACTIONS(190),
    [anon_sym_shoutykebabcase] = ACTIONS(190),
    [anon_sym_shoutysnakecase] = ACTIONS(190),
    [anon_sym_snakecase] = ACTIONS(190),
    [anon_sym_titlecase] = ACTIONS(190),
    [anon_sym_uppercamelcase] = ACTIONS(190),
    [anon_sym_uppercase] = ACTIONS(190),
    [anon_sym_absolute_path] = ACTIONS(190),
    [anon_sym_canonicalize] = ACTIONS(190),
    [anon_sym_extension] = ACTIONS(190),
    [anon_sym_file_name] = ACTIONS(190),
    [anon_sym_file_stem] = ACTIONS(190),
    [anon_sym_parent_dir] = ACTIONS(190),
    [anon_sym_parent_directory] = ACTIONS(190),
    [anon_sym_without_extension] = ACTIONS(190),
    [anon_sym_clean] = ACTIONS(190),
    [anon_sym_join] = ACTIONS(190),
    [anon_sym_path_exists] = ACTIONS(190),
    [anon_sym_error] = ACTIONS(190),
    [anon_sym_blake3] = ACTIONS(190),
    [anon_sym_blake3_file] = ACTIONS(190),
    [anon_sym_sha256] = ACTIONS(190),
    [anon_sym_sha256_file] = ACTIONS(190),
    [anon_sym_uuid] = ACTIONS(190),
    [anon_sym_choose] = ACTIONS(190),
    [anon_sym_datetime] = ACTIONS(190),
    [anon_sym_datetime_utc] = ACTIONS(190),
    [anon_sym_semver_matches] = ACTIONS(190),
    [anon_sym_cache_dir] = ACTIONS(190),
    [anon_sym_cache_directory] = ACTIONS(190),
    [anon_sym_config_dir] = ACTIONS(190),
    [anon_sym_config_directory] = ACTIONS(190),
    [anon_sym_config_local_dir] = ACTIONS(190),
    [anon_sym_config_local_directory] = ACTIONS(190),
    [anon_sym_data_dir] = ACTIONS(190),
    [anon_sym_data_directory] = ACTIONS(190),
    [anon_sym_data_local_dir] = ACTIONS(190),
    [anon_sym_data_local_directory] = ACTIONS(190),
    [anon_sym_executable_dir] = ACTIONS(190),
    [anon_sym_executable_directory] = ACTIONS(190),
    [anon_sym_home_dir] = ACTIONS(190),
    [anon_sym_home_directory] = ACTIONS(190),
    [anon_sym_BQUOTE] = ACTIONS(190),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(188),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(188),
    [anon_sym_DQUOTE] = ACTIONS(190),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(188),
    [anon_sym_SQUOTE] = ACTIONS(190),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [23] = {
    [sym_comment] = STATE(23),
    [ts_builtin_sym_end] = ACTIONS(192),
    [sym_identifier] = ACTIONS(194),
    [anon_sym_alias] = ACTIONS(194),
    [anon_sym_export] = ACTIONS(194),
    [aux_sym_import_token1] = ACTIONS(194),
    [aux_sym_mod_token1] = ACTIONS(194),
    [anon_sym_set] = ACTIONS(194),
    [anon_sym_shell] = ACTIONS(194),
    [anon_sym_COMMA] = ACTIONS(192),
    [anon_sym_if] = ACTIONS(194),
    [anon_sym_LBRACE] = ACTIONS(192),
    [anon_sym_RBRACE] = ACTIONS(192),
    [anon_sym_assert] = ACTIONS(194),
    [anon_sym_LPAREN] = ACTIONS(192),
    [anon_sym_RPAREN] = ACTIONS(192),
    [anon_sym_SLASH] = ACTIONS(192),
    [anon_sym_PLUS] = ACTIONS(192),
    [anon_sym_EQ_EQ] = ACTIONS(192),
    [anon_sym_BANG_EQ] = ACTIONS(192),
    [anon_sym_EQ_TILDE] = ACTIONS(192),
    [anon_sym_arch] = ACTIONS(194),
    [anon_sym_num_cpus] = ACTIONS(194),
    [anon_sym_os] = ACTIONS(194),
    [anon_sym_os_family] = ACTIONS(194),
    [anon_sym_env_var] = ACTIONS(194),
    [anon_sym_env_var_or_default] = ACTIONS(194),
    [anon_sym_env] = ACTIONS(194),
    [anon_sym_is_dependency] = ACTIONS(194),
    [anon_sym_invocation_dir] = ACTIONS(194),
    [anon_sym_invocation_dir_native] = ACTIONS(194),
    [anon_sym_invocation_directory] = ACTIONS(194),
    [anon_sym_invocation_directory_native] = ACTIONS(194),
    [anon_sym_justfile] = ACTIONS(194),
    [anon_sym_justfile_dir] = ACTIONS(194),
    [anon_sym_justfile_directory] = ACTIONS(194),
    [anon_sym_source_dir] = ACTIONS(194),
    [anon_sym_source_directory] = ACTIONS(194),
    [anon_sym_source_file] = ACTIONS(194),
    [anon_sym_just_executable] = ACTIONS(194),
    [anon_sym_just_pid] = ACTIONS(194),
    [anon_sym_append] = ACTIONS(194),
    [anon_sym_prepend] = ACTIONS(194),
    [anon_sym_encode_uri_component] = ACTIONS(194),
    [anon_sym_quote] = ACTIONS(194),
    [anon_sym_replace] = ACTIONS(194),
    [anon_sym_replace_regex] = ACTIONS(194),
    [anon_sym_trim] = ACTIONS(194),
    [anon_sym_trim_end] = ACTIONS(194),
    [anon_sym_trim_end_match] = ACTIONS(194),
    [anon_sym_trim_end_matches] = ACTIONS(194),
    [anon_sym_trim_start] = ACTIONS(194),
    [anon_sym_trim_start_match] = ACTIONS(194),
    [anon_sym_trim_start_matches] = ACTIONS(194),
    [anon_sym_capitalize] = ACTIONS(194),
    [anon_sym_kebabcase] = ACTIONS(194),
    [anon_sym_lowercamelcase] = ACTIONS(194),
    [anon_sym_lowercase] = ACTIONS(194),
    [anon_sym_shoutykebabcase] = ACTIONS(194),
    [anon_sym_shoutysnakecase] = ACTIONS(194),
    [anon_sym_snakecase] = ACTIONS(194),
    [anon_sym_titlecase] = ACTIONS(194),
    [anon_sym_uppercamelcase] = ACTIONS(194),
    [anon_sym_uppercase] = ACTIONS(194),
    [anon_sym_absolute_path] = ACTIONS(194),
    [anon_sym_canonicalize] = ACTIONS(194),
    [anon_sym_extension] = ACTIONS(194),
    [anon_sym_file_name] = ACTIONS(194),
    [anon_sym_file_stem] = ACTIONS(194),
    [anon_sym_parent_dir] = ACTIONS(194),
    [anon_sym_parent_directory] = ACTIONS(194),
    [anon_sym_without_extension] = ACTIONS(194),
    [anon_sym_clean] = ACTIONS(194),
    [anon_sym_join] = ACTIONS(194),
    [anon_sym_path_exists] = ACTIONS(194),
    [anon_sym_error] = ACTIONS(194),
    [anon_sym_blake3] = ACTIONS(194),
    [anon_sym_blake3_file] = ACTIONS(194),
    [anon_sym_sha256] = ACTIONS(194),
    [anon_sym_sha256_file] = ACTIONS(194),
    [anon_sym_uuid] = ACTIONS(194),
    [anon_sym_choose] = ACTIONS(194),
    [anon_sym_datetime] = ACTIONS(194),
    [anon_sym_datetime_utc] = ACTIONS(194),
    [anon_sym_semver_matches] = ACTIONS(194),
    [anon_sym_cache_dir] = ACTIONS(194),
    [anon_sym_cache_directory] = ACTIONS(194),
    [anon_sym_config_dir] = ACTIONS(194),
    [anon_sym_config_directory] = ACTIONS(194),
    [anon_sym_config_local_dir] = ACTIONS(194),
    [anon_sym_config_local_directory] = ACTIONS(194),
    [anon_sym_data_dir] = ACTIONS(194),
    [anon_sym_data_directory] = ACTIONS(194),
    [anon_sym_data_local_dir] = ACTIONS(194),
    [anon_sym_data_local_directory] = ACTIONS(194),
    [anon_sym_executable_dir] = ACTIONS(194),
    [anon_sym_executable_directory] = ACTIONS(194),
    [anon_sym_home_dir] = ACTIONS(194),
    [anon_sym_home_directory] = ACTIONS(194),
    [anon_sym_BQUOTE] = ACTIONS(194),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(192),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(192),
    [anon_sym_DQUOTE] = ACTIONS(194),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(192),
    [anon_sym_SQUOTE] = ACTIONS(194),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [24] = {
    [sym_comment] = STATE(24),
    [ts_builtin_sym_end] = ACTIONS(196),
    [sym_identifier] = ACTIONS(198),
    [anon_sym_alias] = ACTIONS(198),
    [anon_sym_export] = ACTIONS(198),
    [aux_sym_import_token1] = ACTIONS(198),
    [aux_sym_mod_token1] = ACTIONS(198),
    [anon_sym_set] = ACTIONS(198),
    [anon_sym_shell] = ACTIONS(198),
    [anon_sym_COMMA] = ACTIONS(196),
    [anon_sym_if] = ACTIONS(198),
    [anon_sym_LBRACE] = ACTIONS(196),
    [anon_sym_RBRACE] = ACTIONS(196),
    [anon_sym_assert] = ACTIONS(198),
    [anon_sym_LPAREN] = ACTIONS(196),
    [anon_sym_RPAREN] = ACTIONS(196),
    [anon_sym_SLASH] = ACTIONS(196),
    [anon_sym_PLUS] = ACTIONS(196),
    [anon_sym_EQ_EQ] = ACTIONS(196),
    [anon_sym_BANG_EQ] = ACTIONS(196),
    [anon_sym_EQ_TILDE] = ACTIONS(196),
    [anon_sym_arch] = ACTIONS(198),
    [anon_sym_num_cpus] = ACTIONS(198),
    [anon_sym_os] = ACTIONS(198),
    [anon_sym_os_family] = ACTIONS(198),
    [anon_sym_env_var] = ACTIONS(198),
    [anon_sym_env_var_or_default] = ACTIONS(198),
    [anon_sym_env] = ACTIONS(198),
    [anon_sym_is_dependency] = ACTIONS(198),
    [anon_sym_invocation_dir] = ACTIONS(198),
    [anon_sym_invocation_dir_native] = ACTIONS(198),
    [anon_sym_invocation_directory] = ACTIONS(198),
    [anon_sym_invocation_directory_native] = ACTIONS(198),
    [anon_sym_justfile] = ACTIONS(198),
    [anon_sym_justfile_dir] = ACTIONS(198),
    [anon_sym_justfile_directory] = ACTIONS(198),
    [anon_sym_source_dir] = ACTIONS(198),
    [anon_sym_source_directory] = ACTIONS(198),
    [anon_sym_source_file] = ACTIONS(198),
    [anon_sym_just_executable] = ACTIONS(198),
    [anon_sym_just_pid] = ACTIONS(198),
    [anon_sym_append] = ACTIONS(198),
    [anon_sym_prepend] = ACTIONS(198),
    [anon_sym_encode_uri_component] = ACTIONS(198),
    [anon_sym_quote] = ACTIONS(198),
    [anon_sym_replace] = ACTIONS(198),
    [anon_sym_replace_regex] = ACTIONS(198),
    [anon_sym_trim] = ACTIONS(198),
    [anon_sym_trim_end] = ACTIONS(198),
    [anon_sym_trim_end_match] = ACTIONS(198),
    [anon_sym_trim_end_matches] = ACTIONS(198),
    [anon_sym_trim_start] = ACTIONS(198),
    [anon_sym_trim_start_match] = ACTIONS(198),
    [anon_sym_trim_start_matches] = ACTIONS(198),
    [anon_sym_capitalize] = ACTIONS(198),
    [anon_sym_kebabcase] = ACTIONS(198),
    [anon_sym_lowercamelcase] = ACTIONS(198),
    [anon_sym_lowercase] = ACTIONS(198),
    [anon_sym_shoutykebabcase] = ACTIONS(198),
    [anon_sym_shoutysnakecase] = ACTIONS(198),
    [anon_sym_snakecase] = ACTIONS(198),
    [anon_sym_titlecase] = ACTIONS(198),
    [anon_sym_uppercamelcase] = ACTIONS(198),
    [anon_sym_uppercase] = ACTIONS(198),
    [anon_sym_absolute_path] = ACTIONS(198),
    [anon_sym_canonicalize] = ACTIONS(198),
    [anon_sym_extension] = ACTIONS(198),
    [anon_sym_file_name] = ACTIONS(198),
    [anon_sym_file_stem] = ACTIONS(198),
    [anon_sym_parent_dir] = ACTIONS(198),
    [anon_sym_parent_directory] = ACTIONS(198),
    [anon_sym_without_extension] = ACTIONS(198),
    [anon_sym_clean] = ACTIONS(198),
    [anon_sym_join] = ACTIONS(198),
    [anon_sym_path_exists] = ACTIONS(198),
    [anon_sym_error] = ACTIONS(198),
    [anon_sym_blake3] = ACTIONS(198),
    [anon_sym_blake3_file] = ACTIONS(198),
    [anon_sym_sha256] = ACTIONS(198),
    [anon_sym_sha256_file] = ACTIONS(198),
    [anon_sym_uuid] = ACTIONS(198),
    [anon_sym_choose] = ACTIONS(198),
    [anon_sym_datetime] = ACTIONS(198),
    [anon_sym_datetime_utc] = ACTIONS(198),
    [anon_sym_semver_matches] = ACTIONS(198),
    [anon_sym_cache_dir] = ACTIONS(198),
    [anon_sym_cache_directory] = ACTIONS(198),
    [anon_sym_config_dir] = ACTIONS(198),
    [anon_sym_config_directory] = ACTIONS(198),
    [anon_sym_config_local_dir] = ACTIONS(198),
    [anon_sym_config_local_directory] = ACTIONS(198),
    [anon_sym_data_dir] = ACTIONS(198),
    [anon_sym_data_directory] = ACTIONS(198),
    [anon_sym_data_local_dir] = ACTIONS(198),
    [anon_sym_data_local_directory] = ACTIONS(198),
    [anon_sym_executable_dir] = ACTIONS(198),
    [anon_sym_executable_directory] = ACTIONS(198),
    [anon_sym_home_dir] = ACTIONS(198),
    [anon_sym_home_directory] = ACTIONS(198),
    [anon_sym_BQUOTE] = ACTIONS(198),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(196),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(196),
    [anon_sym_DQUOTE] = ACTIONS(198),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(196),
    [anon_sym_SQUOTE] = ACTIONS(198),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [25] = {
    [sym_comment] = STATE(25),
    [ts_builtin_sym_end] = ACTIONS(200),
    [sym_identifier] = ACTIONS(202),
    [anon_sym_alias] = ACTIONS(202),
    [anon_sym_export] = ACTIONS(202),
    [aux_sym_import_token1] = ACTIONS(202),
    [aux_sym_mod_token1] = ACTIONS(202),
    [anon_sym_set] = ACTIONS(202),
    [anon_sym_shell] = ACTIONS(202),
    [anon_sym_COMMA] = ACTIONS(200),
    [anon_sym_if] = ACTIONS(202),
    [anon_sym_LBRACE] = ACTIONS(200),
    [anon_sym_RBRACE] = ACTIONS(200),
    [anon_sym_assert] = ACTIONS(202),
    [anon_sym_LPAREN] = ACTIONS(200),
    [anon_sym_RPAREN] = ACTIONS(200),
    [anon_sym_SLASH] = ACTIONS(200),
    [anon_sym_PLUS] = ACTIONS(200),
    [anon_sym_EQ_EQ] = ACTIONS(200),
    [anon_sym_BANG_EQ] = ACTIONS(200),
    [anon_sym_EQ_TILDE] = ACTIONS(200),
    [anon_sym_arch] = ACTIONS(202),
    [anon_sym_num_cpus] = ACTIONS(202),
    [anon_sym_os] = ACTIONS(202),
    [anon_sym_os_family] = ACTIONS(202),
    [anon_sym_env_var] = ACTIONS(202),
    [anon_sym_env_var_or_default] = ACTIONS(202),
    [anon_sym_env] = ACTIONS(202),
    [anon_sym_is_dependency] = ACTIONS(202),
    [anon_sym_invocation_dir] = ACTIONS(202),
    [anon_sym_invocation_dir_native] = ACTIONS(202),
    [anon_sym_invocation_directory] = ACTIONS(202),
    [anon_sym_invocation_directory_native] = ACTIONS(202),
    [anon_sym_justfile] = ACTIONS(202),
    [anon_sym_justfile_dir] = ACTIONS(202),
    [anon_sym_justfile_directory] = ACTIONS(202),
    [anon_sym_source_dir] = ACTIONS(202),
    [anon_sym_source_directory] = ACTIONS(202),
    [anon_sym_source_file] = ACTIONS(202),
    [anon_sym_just_executable] = ACTIONS(202),
    [anon_sym_just_pid] = ACTIONS(202),
    [anon_sym_append] = ACTIONS(202),
    [anon_sym_prepend] = ACTIONS(202),
    [anon_sym_encode_uri_component] = ACTIONS(202),
    [anon_sym_quote] = ACTIONS(202),
    [anon_sym_replace] = ACTIONS(202),
    [anon_sym_replace_regex] = ACTIONS(202),
    [anon_sym_trim] = ACTIONS(202),
    [anon_sym_trim_end] = ACTIONS(202),
    [anon_sym_trim_end_match] = ACTIONS(202),
    [anon_sym_trim_end_matches] = ACTIONS(202),
    [anon_sym_trim_start] = ACTIONS(202),
    [anon_sym_trim_start_match] = ACTIONS(202),
    [anon_sym_trim_start_matches] = ACTIONS(202),
    [anon_sym_capitalize] = ACTIONS(202),
    [anon_sym_kebabcase] = ACTIONS(202),
    [anon_sym_lowercamelcase] = ACTIONS(202),
    [anon_sym_lowercase] = ACTIONS(202),
    [anon_sym_shoutykebabcase] = ACTIONS(202),
    [anon_sym_shoutysnakecase] = ACTIONS(202),
    [anon_sym_snakecase] = ACTIONS(202),
    [anon_sym_titlecase] = ACTIONS(202),
    [anon_sym_uppercamelcase] = ACTIONS(202),
    [anon_sym_uppercase] = ACTIONS(202),
    [anon_sym_absolute_path] = ACTIONS(202),
    [anon_sym_canonicalize] = ACTIONS(202),
    [anon_sym_extension] = ACTIONS(202),
    [anon_sym_file_name] = ACTIONS(202),
    [anon_sym_file_stem] = ACTIONS(202),
    [anon_sym_parent_dir] = ACTIONS(202),
    [anon_sym_parent_directory] = ACTIONS(202),
    [anon_sym_without_extension] = ACTIONS(202),
    [anon_sym_clean] = ACTIONS(202),
    [anon_sym_join] = ACTIONS(202),
    [anon_sym_path_exists] = ACTIONS(202),
    [anon_sym_error] = ACTIONS(202),
    [anon_sym_blake3] = ACTIONS(202),
    [anon_sym_blake3_file] = ACTIONS(202),
    [anon_sym_sha256] = ACTIONS(202),
    [anon_sym_sha256_file] = ACTIONS(202),
    [anon_sym_uuid] = ACTIONS(202),
    [anon_sym_choose] = ACTIONS(202),
    [anon_sym_datetime] = ACTIONS(202),
    [anon_sym_datetime_utc] = ACTIONS(202),
    [anon_sym_semver_matches] = ACTIONS(202),
    [anon_sym_cache_dir] = ACTIONS(202),
    [anon_sym_cache_directory] = ACTIONS(202),
    [anon_sym_config_dir] = ACTIONS(202),
    [anon_sym_config_directory] = ACTIONS(202),
    [anon_sym_config_local_dir] = ACTIONS(202),
    [anon_sym_config_local_directory] = ACTIONS(202),
    [anon_sym_data_dir] = ACTIONS(202),
    [anon_sym_data_directory] = ACTIONS(202),
    [anon_sym_data_local_dir] = ACTIONS(202),
    [anon_sym_data_local_directory] = ACTIONS(202),
    [anon_sym_executable_dir] = ACTIONS(202),
    [anon_sym_executable_directory] = ACTIONS(202),
    [anon_sym_home_dir] = ACTIONS(202),
    [anon_sym_home_directory] = ACTIONS(202),
    [anon_sym_BQUOTE] = ACTIONS(202),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(200),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(200),
    [anon_sym_DQUOTE] = ACTIONS(202),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(200),
    [anon_sym_SQUOTE] = ACTIONS(202),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [26] = {
    [sym_comment] = STATE(26),
    [ts_builtin_sym_end] = ACTIONS(204),
    [sym_identifier] = ACTIONS(206),
    [anon_sym_alias] = ACTIONS(206),
    [anon_sym_export] = ACTIONS(206),
    [aux_sym_import_token1] = ACTIONS(206),
    [aux_sym_mod_token1] = ACTIONS(206),
    [anon_sym_set] = ACTIONS(206),
    [anon_sym_shell] = ACTIONS(206),
    [anon_sym_COMMA] = ACTIONS(204),
    [anon_sym_if] = ACTIONS(206),
    [anon_sym_LBRACE] = ACTIONS(204),
    [anon_sym_RBRACE] = ACTIONS(204),
    [anon_sym_assert] = ACTIONS(206),
    [anon_sym_LPAREN] = ACTIONS(204),
    [anon_sym_RPAREN] = ACTIONS(204),
    [anon_sym_SLASH] = ACTIONS(208),
    [anon_sym_PLUS] = ACTIONS(208),
    [anon_sym_EQ_EQ] = ACTIONS(204),
    [anon_sym_BANG_EQ] = ACTIONS(204),
    [anon_sym_EQ_TILDE] = ACTIONS(204),
    [anon_sym_arch] = ACTIONS(206),
    [anon_sym_num_cpus] = ACTIONS(206),
    [anon_sym_os] = ACTIONS(206),
    [anon_sym_os_family] = ACTIONS(206),
    [anon_sym_env_var] = ACTIONS(206),
    [anon_sym_env_var_or_default] = ACTIONS(206),
    [anon_sym_env] = ACTIONS(206),
    [anon_sym_is_dependency] = ACTIONS(206),
    [anon_sym_invocation_dir] = ACTIONS(206),
    [anon_sym_invocation_dir_native] = ACTIONS(206),
    [anon_sym_invocation_directory] = ACTIONS(206),
    [anon_sym_invocation_directory_native] = ACTIONS(206),
    [anon_sym_justfile] = ACTIONS(206),
    [anon_sym_justfile_dir] = ACTIONS(206),
    [anon_sym_justfile_directory] = ACTIONS(206),
    [anon_sym_source_dir] = ACTIONS(206),
    [anon_sym_source_directory] = ACTIONS(206),
    [anon_sym_source_file] = ACTIONS(206),
    [anon_sym_just_executable] = ACTIONS(206),
    [anon_sym_just_pid] = ACTIONS(206),
    [anon_sym_append] = ACTIONS(206),
    [anon_sym_prepend] = ACTIONS(206),
    [anon_sym_encode_uri_component] = ACTIONS(206),
    [anon_sym_quote] = ACTIONS(206),
    [anon_sym_replace] = ACTIONS(206),
    [anon_sym_replace_regex] = ACTIONS(206),
    [anon_sym_trim] = ACTIONS(206),
    [anon_sym_trim_end] = ACTIONS(206),
    [anon_sym_trim_end_match] = ACTIONS(206),
    [anon_sym_trim_end_matches] = ACTIONS(206),
    [anon_sym_trim_start] = ACTIONS(206),
    [anon_sym_trim_start_match] = ACTIONS(206),
    [anon_sym_trim_start_matches] = ACTIONS(206),
    [anon_sym_capitalize] = ACTIONS(206),
    [anon_sym_kebabcase] = ACTIONS(206),
    [anon_sym_lowercamelcase] = ACTIONS(206),
    [anon_sym_lowercase] = ACTIONS(206),
    [anon_sym_shoutykebabcase] = ACTIONS(206),
    [anon_sym_shoutysnakecase] = ACTIONS(206),
    [anon_sym_snakecase] = ACTIONS(206),
    [anon_sym_titlecase] = ACTIONS(206),
    [anon_sym_uppercamelcase] = ACTIONS(206),
    [anon_sym_uppercase] = ACTIONS(206),
    [anon_sym_absolute_path] = ACTIONS(206),
    [anon_sym_canonicalize] = ACTIONS(206),
    [anon_sym_extension] = ACTIONS(206),
    [anon_sym_file_name] = ACTIONS(206),
    [anon_sym_file_stem] = ACTIONS(206),
    [anon_sym_parent_dir] = ACTIONS(206),
    [anon_sym_parent_directory] = ACTIONS(206),
    [anon_sym_without_extension] = ACTIONS(206),
    [anon_sym_clean] = ACTIONS(206),
    [anon_sym_join] = ACTIONS(206),
    [anon_sym_path_exists] = ACTIONS(206),
    [anon_sym_error] = ACTIONS(206),
    [anon_sym_blake3] = ACTIONS(206),
    [anon_sym_blake3_file] = ACTIONS(206),
    [anon_sym_sha256] = ACTIONS(206),
    [anon_sym_sha256_file] = ACTIONS(206),
    [anon_sym_uuid] = ACTIONS(206),
    [anon_sym_choose] = ACTIONS(206),
    [anon_sym_datetime] = ACTIONS(206),
    [anon_sym_datetime_utc] = ACTIONS(206),
    [anon_sym_semver_matches] = ACTIONS(206),
    [anon_sym_cache_dir] = ACTIONS(206),
    [anon_sym_cache_directory] = ACTIONS(206),
    [anon_sym_config_dir] = ACTIONS(206),
    [anon_sym_config_directory] = ACTIONS(206),
    [anon_sym_config_local_dir] = ACTIONS(206),
    [anon_sym_config_local_directory] = ACTIONS(206),
    [anon_sym_data_dir] = ACTIONS(206),
    [anon_sym_data_directory] = ACTIONS(206),
    [anon_sym_data_local_dir] = ACTIONS(206),
    [anon_sym_data_local_directory] = ACTIONS(206),
    [anon_sym_executable_dir] = ACTIONS(206),
    [anon_sym_executable_directory] = ACTIONS(206),
    [anon_sym_home_dir] = ACTIONS(206),
    [anon_sym_home_directory] = ACTIONS(206),
    [anon_sym_BQUOTE] = ACTIONS(206),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(204),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(204),
    [anon_sym_DQUOTE] = ACTIONS(206),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(204),
    [anon_sym_SQUOTE] = ACTIONS(206),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [27] = {
    [sym_comment] = STATE(27),
    [ts_builtin_sym_end] = ACTIONS(210),
    [sym_identifier] = ACTIONS(212),
    [anon_sym_alias] = ACTIONS(212),
    [anon_sym_export] = ACTIONS(212),
    [aux_sym_import_token1] = ACTIONS(212),
    [aux_sym_mod_token1] = ACTIONS(212),
    [anon_sym_set] = ACTIONS(212),
    [anon_sym_shell] = ACTIONS(212),
    [anon_sym_COMMA] = ACTIONS(210),
    [anon_sym_if] = ACTIONS(212),
    [anon_sym_LBRACE] = ACTIONS(210),
    [anon_sym_RBRACE] = ACTIONS(210),
    [anon_sym_assert] = ACTIONS(212),
    [anon_sym_LPAREN] = ACTIONS(210),
    [anon_sym_RPAREN] = ACTIONS(210),
    [anon_sym_SLASH] = ACTIONS(210),
    [anon_sym_PLUS] = ACTIONS(210),
    [anon_sym_EQ_EQ] = ACTIONS(210),
    [anon_sym_BANG_EQ] = ACTIONS(210),
    [anon_sym_EQ_TILDE] = ACTIONS(210),
    [anon_sym_arch] = ACTIONS(212),
    [anon_sym_num_cpus] = ACTIONS(212),
    [anon_sym_os] = ACTIONS(212),
    [anon_sym_os_family] = ACTIONS(212),
    [anon_sym_env_var] = ACTIONS(212),
    [anon_sym_env_var_or_default] = ACTIONS(212),
    [anon_sym_env] = ACTIONS(212),
    [anon_sym_is_dependency] = ACTIONS(212),
    [anon_sym_invocation_dir] = ACTIONS(212),
    [anon_sym_invocation_dir_native] = ACTIONS(212),
    [anon_sym_invocation_directory] = ACTIONS(212),
    [anon_sym_invocation_directory_native] = ACTIONS(212),
    [anon_sym_justfile] = ACTIONS(212),
    [anon_sym_justfile_dir] = ACTIONS(212),
    [anon_sym_justfile_directory] = ACTIONS(212),
    [anon_sym_source_dir] = ACTIONS(212),
    [anon_sym_source_directory] = ACTIONS(212),
    [anon_sym_source_file] = ACTIONS(212),
    [anon_sym_just_executable] = ACTIONS(212),
    [anon_sym_just_pid] = ACTIONS(212),
    [anon_sym_append] = ACTIONS(212),
    [anon_sym_prepend] = ACTIONS(212),
    [anon_sym_encode_uri_component] = ACTIONS(212),
    [anon_sym_quote] = ACTIONS(212),
    [anon_sym_replace] = ACTIONS(212),
    [anon_sym_replace_regex] = ACTIONS(212),
    [anon_sym_trim] = ACTIONS(212),
    [anon_sym_trim_end] = ACTIONS(212),
    [anon_sym_trim_end_match] = ACTIONS(212),
    [anon_sym_trim_end_matches] = ACTIONS(212),
    [anon_sym_trim_start] = ACTIONS(212),
    [anon_sym_trim_start_match] = ACTIONS(212),
    [anon_sym_trim_start_matches] = ACTIONS(212),
    [anon_sym_capitalize] = ACTIONS(212),
    [anon_sym_kebabcase] = ACTIONS(212),
    [anon_sym_lowercamelcase] = ACTIONS(212),
    [anon_sym_lowercase] = ACTIONS(212),
    [anon_sym_shoutykebabcase] = ACTIONS(212),
    [anon_sym_shoutysnakecase] = ACTIONS(212),
    [anon_sym_snakecase] = ACTIONS(212),
    [anon_sym_titlecase] = ACTIONS(212),
    [anon_sym_uppercamelcase] = ACTIONS(212),
    [anon_sym_uppercase] = ACTIONS(212),
    [anon_sym_absolute_path] = ACTIONS(212),
    [anon_sym_canonicalize] = ACTIONS(212),
    [anon_sym_extension] = ACTIONS(212),
    [anon_sym_file_name] = ACTIONS(212),
    [anon_sym_file_stem] = ACTIONS(212),
    [anon_sym_parent_dir] = ACTIONS(212),
    [anon_sym_parent_directory] = ACTIONS(212),
    [anon_sym_without_extension] = ACTIONS(212),
    [anon_sym_clean] = ACTIONS(212),
    [anon_sym_join] = ACTIONS(212),
    [anon_sym_path_exists] = ACTIONS(212),
    [anon_sym_error] = ACTIONS(212),
    [anon_sym_blake3] = ACTIONS(212),
    [anon_sym_blake3_file] = ACTIONS(212),
    [anon_sym_sha256] = ACTIONS(212),
    [anon_sym_sha256_file] = ACTIONS(212),
    [anon_sym_uuid] = ACTIONS(212),
    [anon_sym_choose] = ACTIONS(212),
    [anon_sym_datetime] = ACTIONS(212),
    [anon_sym_datetime_utc] = ACTIONS(212),
    [anon_sym_semver_matches] = ACTIONS(212),
    [anon_sym_cache_dir] = ACTIONS(212),
    [anon_sym_cache_directory] = ACTIONS(212),
    [anon_sym_config_dir] = ACTIONS(212),
    [anon_sym_config_directory] = ACTIONS(212),
    [anon_sym_config_local_dir] = ACTIONS(212),
    [anon_sym_config_local_directory] = ACTIONS(212),
    [anon_sym_data_dir] = ACTIONS(212),
    [anon_sym_data_directory] = ACTIONS(212),
    [anon_sym_data_local_dir] = ACTIONS(212),
    [anon_sym_data_local_directory] = ACTIONS(212),
    [anon_sym_executable_dir] = ACTIONS(212),
    [anon_sym_executable_directory] = ACTIONS(212),
    [anon_sym_home_dir] = ACTIONS(212),
    [anon_sym_home_directory] = ACTIONS(212),
    [anon_sym_BQUOTE] = ACTIONS(212),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(210),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(210),
    [anon_sym_DQUOTE] = ACTIONS(212),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(210),
    [anon_sym_SQUOTE] = ACTIONS(212),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [28] = {
    [sym_comment] = STATE(28),
    [ts_builtin_sym_end] = ACTIONS(214),
    [sym_identifier] = ACTIONS(216),
    [anon_sym_alias] = ACTIONS(216),
    [anon_sym_export] = ACTIONS(216),
    [aux_sym_import_token1] = ACTIONS(216),
    [aux_sym_mod_token1] = ACTIONS(216),
    [anon_sym_set] = ACTIONS(216),
    [anon_sym_shell] = ACTIONS(216),
    [anon_sym_COMMA] = ACTIONS(214),
    [anon_sym_if] = ACTIONS(216),
    [anon_sym_LBRACE] = ACTIONS(214),
    [anon_sym_RBRACE] = ACTIONS(214),
    [anon_sym_assert] = ACTIONS(216),
    [anon_sym_LPAREN] = ACTIONS(214),
    [anon_sym_RPAREN] = ACTIONS(214),
    [anon_sym_SLASH] = ACTIONS(214),
    [anon_sym_PLUS] = ACTIONS(214),
    [anon_sym_EQ_EQ] = ACTIONS(214),
    [anon_sym_BANG_EQ] = ACTIONS(214),
    [anon_sym_EQ_TILDE] = ACTIONS(214),
    [anon_sym_arch] = ACTIONS(216),
    [anon_sym_num_cpus] = ACTIONS(216),
    [anon_sym_os] = ACTIONS(216),
    [anon_sym_os_family] = ACTIONS(216),
    [anon_sym_env_var] = ACTIONS(216),
    [anon_sym_env_var_or_default] = ACTIONS(216),
    [anon_sym_env] = ACTIONS(216),
    [anon_sym_is_dependency] = ACTIONS(216),
    [anon_sym_invocation_dir] = ACTIONS(216),
    [anon_sym_invocation_dir_native] = ACTIONS(216),
    [anon_sym_invocation_directory] = ACTIONS(216),
    [anon_sym_invocation_directory_native] = ACTIONS(216),
    [anon_sym_justfile] = ACTIONS(216),
    [anon_sym_justfile_dir] = ACTIONS(216),
    [anon_sym_justfile_directory] = ACTIONS(216),
    [anon_sym_source_dir] = ACTIONS(216),
    [anon_sym_source_directory] = ACTIONS(216),
    [anon_sym_source_file] = ACTIONS(216),
    [anon_sym_just_executable] = ACTIONS(216),
    [anon_sym_just_pid] = ACTIONS(216),
    [anon_sym_append] = ACTIONS(216),
    [anon_sym_prepend] = ACTIONS(216),
    [anon_sym_encode_uri_component] = ACTIONS(216),
    [anon_sym_quote] = ACTIONS(216),
    [anon_sym_replace] = ACTIONS(216),
    [anon_sym_replace_regex] = ACTIONS(216),
    [anon_sym_trim] = ACTIONS(216),
    [anon_sym_trim_end] = ACTIONS(216),
    [anon_sym_trim_end_match] = ACTIONS(216),
    [anon_sym_trim_end_matches] = ACTIONS(216),
    [anon_sym_trim_start] = ACTIONS(216),
    [anon_sym_trim_start_match] = ACTIONS(216),
    [anon_sym_trim_start_matches] = ACTIONS(216),
    [anon_sym_capitalize] = ACTIONS(216),
    [anon_sym_kebabcase] = ACTIONS(216),
    [anon_sym_lowercamelcase] = ACTIONS(216),
    [anon_sym_lowercase] = ACTIONS(216),
    [anon_sym_shoutykebabcase] = ACTIONS(216),
    [anon_sym_shoutysnakecase] = ACTIONS(216),
    [anon_sym_snakecase] = ACTIONS(216),
    [anon_sym_titlecase] = ACTIONS(216),
    [anon_sym_uppercamelcase] = ACTIONS(216),
    [anon_sym_uppercase] = ACTIONS(216),
    [anon_sym_absolute_path] = ACTIONS(216),
    [anon_sym_canonicalize] = ACTIONS(216),
    [anon_sym_extension] = ACTIONS(216),
    [anon_sym_file_name] = ACTIONS(216),
    [anon_sym_file_stem] = ACTIONS(216),
    [anon_sym_parent_dir] = ACTIONS(216),
    [anon_sym_parent_directory] = ACTIONS(216),
    [anon_sym_without_extension] = ACTIONS(216),
    [anon_sym_clean] = ACTIONS(216),
    [anon_sym_join] = ACTIONS(216),
    [anon_sym_path_exists] = ACTIONS(216),
    [anon_sym_error] = ACTIONS(216),
    [anon_sym_blake3] = ACTIONS(216),
    [anon_sym_blake3_file] = ACTIONS(216),
    [anon_sym_sha256] = ACTIONS(216),
    [anon_sym_sha256_file] = ACTIONS(216),
    [anon_sym_uuid] = ACTIONS(216),
    [anon_sym_choose] = ACTIONS(216),
    [anon_sym_datetime] = ACTIONS(216),
    [anon_sym_datetime_utc] = ACTIONS(216),
    [anon_sym_semver_matches] = ACTIONS(216),
    [anon_sym_cache_dir] = ACTIONS(216),
    [anon_sym_cache_directory] = ACTIONS(216),
    [anon_sym_config_dir] = ACTIONS(216),
    [anon_sym_config_directory] = ACTIONS(216),
    [anon_sym_config_local_dir] = ACTIONS(216),
    [anon_sym_config_local_directory] = ACTIONS(216),
    [anon_sym_data_dir] = ACTIONS(216),
    [anon_sym_data_directory] = ACTIONS(216),
    [anon_sym_data_local_dir] = ACTIONS(216),
    [anon_sym_data_local_directory] = ACTIONS(216),
    [anon_sym_executable_dir] = ACTIONS(216),
    [anon_sym_executable_directory] = ACTIONS(216),
    [anon_sym_home_dir] = ACTIONS(216),
    [anon_sym_home_directory] = ACTIONS(216),
    [anon_sym_BQUOTE] = ACTIONS(216),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(214),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(214),
    [anon_sym_DQUOTE] = ACTIONS(216),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(214),
    [anon_sym_SQUOTE] = ACTIONS(216),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [29] = {
    [sym_comment] = STATE(29),
    [ts_builtin_sym_end] = ACTIONS(210),
    [sym_identifier] = ACTIONS(212),
    [anon_sym_alias] = ACTIONS(212),
    [anon_sym_export] = ACTIONS(212),
    [aux_sym_import_token1] = ACTIONS(212),
    [aux_sym_mod_token1] = ACTIONS(212),
    [anon_sym_set] = ACTIONS(212),
    [anon_sym_shell] = ACTIONS(212),
    [anon_sym_COMMA] = ACTIONS(210),
    [anon_sym_if] = ACTIONS(212),
    [anon_sym_LBRACE] = ACTIONS(210),
    [anon_sym_RBRACE] = ACTIONS(210),
    [anon_sym_assert] = ACTIONS(212),
    [anon_sym_LPAREN] = ACTIONS(218),
    [anon_sym_RPAREN] = ACTIONS(210),
    [anon_sym_SLASH] = ACTIONS(210),
    [anon_sym_PLUS] = ACTIONS(210),
    [anon_sym_EQ_EQ] = ACTIONS(210),
    [anon_sym_BANG_EQ] = ACTIONS(210),
    [anon_sym_EQ_TILDE] = ACTIONS(210),
    [anon_sym_arch] = ACTIONS(212),
    [anon_sym_num_cpus] = ACTIONS(212),
    [anon_sym_os] = ACTIONS(212),
    [anon_sym_os_family] = ACTIONS(212),
    [anon_sym_env_var] = ACTIONS(212),
    [anon_sym_env_var_or_default] = ACTIONS(212),
    [anon_sym_env] = ACTIONS(212),
    [anon_sym_is_dependency] = ACTIONS(212),
    [anon_sym_invocation_dir] = ACTIONS(212),
    [anon_sym_invocation_dir_native] = ACTIONS(212),
    [anon_sym_invocation_directory] = ACTIONS(212),
    [anon_sym_invocation_directory_native] = ACTIONS(212),
    [anon_sym_justfile] = ACTIONS(212),
    [anon_sym_justfile_dir] = ACTIONS(212),
    [anon_sym_justfile_directory] = ACTIONS(212),
    [anon_sym_source_dir] = ACTIONS(212),
    [anon_sym_source_directory] = ACTIONS(212),
    [anon_sym_source_file] = ACTIONS(212),
    [anon_sym_just_executable] = ACTIONS(212),
    [anon_sym_just_pid] = ACTIONS(212),
    [anon_sym_append] = ACTIONS(212),
    [anon_sym_prepend] = ACTIONS(212),
    [anon_sym_encode_uri_component] = ACTIONS(212),
    [anon_sym_quote] = ACTIONS(212),
    [anon_sym_replace] = ACTIONS(212),
    [anon_sym_replace_regex] = ACTIONS(212),
    [anon_sym_trim] = ACTIONS(212),
    [anon_sym_trim_end] = ACTIONS(212),
    [anon_sym_trim_end_match] = ACTIONS(212),
    [anon_sym_trim_end_matches] = ACTIONS(212),
    [anon_sym_trim_start] = ACTIONS(212),
    [anon_sym_trim_start_match] = ACTIONS(212),
    [anon_sym_trim_start_matches] = ACTIONS(212),
    [anon_sym_capitalize] = ACTIONS(212),
    [anon_sym_kebabcase] = ACTIONS(212),
    [anon_sym_lowercamelcase] = ACTIONS(212),
    [anon_sym_lowercase] = ACTIONS(212),
    [anon_sym_shoutykebabcase] = ACTIONS(212),
    [anon_sym_shoutysnakecase] = ACTIONS(212),
    [anon_sym_snakecase] = ACTIONS(212),
    [anon_sym_titlecase] = ACTIONS(212),
    [anon_sym_uppercamelcase] = ACTIONS(212),
    [anon_sym_uppercase] = ACTIONS(212),
    [anon_sym_absolute_path] = ACTIONS(212),
    [anon_sym_canonicalize] = ACTIONS(212),
    [anon_sym_extension] = ACTIONS(212),
    [anon_sym_file_name] = ACTIONS(212),
    [anon_sym_file_stem] = ACTIONS(212),
    [anon_sym_parent_dir] = ACTIONS(212),
    [anon_sym_parent_directory] = ACTIONS(212),
    [anon_sym_without_extension] = ACTIONS(212),
    [anon_sym_clean] = ACTIONS(212),
    [anon_sym_join] = ACTIONS(212),
    [anon_sym_path_exists] = ACTIONS(212),
    [anon_sym_error] = ACTIONS(212),
    [anon_sym_blake3] = ACTIONS(212),
    [anon_sym_blake3_file] = ACTIONS(212),
    [anon_sym_sha256] = ACTIONS(212),
    [anon_sym_sha256_file] = ACTIONS(212),
    [anon_sym_uuid] = ACTIONS(212),
    [anon_sym_choose] = ACTIONS(212),
    [anon_sym_datetime] = ACTIONS(212),
    [anon_sym_datetime_utc] = ACTIONS(212),
    [anon_sym_semver_matches] = ACTIONS(212),
    [anon_sym_cache_dir] = ACTIONS(212),
    [anon_sym_cache_directory] = ACTIONS(212),
    [anon_sym_config_dir] = ACTIONS(212),
    [anon_sym_config_directory] = ACTIONS(212),
    [anon_sym_config_local_dir] = ACTIONS(212),
    [anon_sym_config_local_directory] = ACTIONS(212),
    [anon_sym_data_dir] = ACTIONS(212),
    [anon_sym_data_directory] = ACTIONS(212),
    [anon_sym_data_local_dir] = ACTIONS(212),
    [anon_sym_data_local_directory] = ACTIONS(212),
    [anon_sym_executable_dir] = ACTIONS(212),
    [anon_sym_executable_directory] = ACTIONS(212),
    [anon_sym_home_dir] = ACTIONS(212),
    [anon_sym_home_directory] = ACTIONS(212),
    [anon_sym_BQUOTE] = ACTIONS(212),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(210),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(210),
    [anon_sym_DQUOTE] = ACTIONS(212),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(210),
    [anon_sym_SQUOTE] = ACTIONS(212),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [30] = {
    [sym_comment] = STATE(30),
    [ts_builtin_sym_end] = ACTIONS(220),
    [sym_identifier] = ACTIONS(222),
    [anon_sym_alias] = ACTIONS(222),
    [anon_sym_export] = ACTIONS(222),
    [aux_sym_import_token1] = ACTIONS(222),
    [aux_sym_mod_token1] = ACTIONS(222),
    [anon_sym_set] = ACTIONS(222),
    [anon_sym_shell] = ACTIONS(222),
    [anon_sym_COMMA] = ACTIONS(220),
    [anon_sym_if] = ACTIONS(222),
    [anon_sym_LBRACE] = ACTIONS(220),
    [anon_sym_RBRACE] = ACTIONS(220),
    [anon_sym_assert] = ACTIONS(222),
    [anon_sym_LPAREN] = ACTIONS(220),
    [anon_sym_RPAREN] = ACTIONS(220),
    [anon_sym_EQ_EQ] = ACTIONS(220),
    [anon_sym_BANG_EQ] = ACTIONS(220),
    [anon_sym_EQ_TILDE] = ACTIONS(220),
    [anon_sym_arch] = ACTIONS(222),
    [anon_sym_num_cpus] = ACTIONS(222),
    [anon_sym_os] = ACTIONS(222),
    [anon_sym_os_family] = ACTIONS(222),
    [anon_sym_env_var] = ACTIONS(222),
    [anon_sym_env_var_or_default] = ACTIONS(222),
    [anon_sym_env] = ACTIONS(222),
    [anon_sym_is_dependency] = ACTIONS(222),
    [anon_sym_invocation_dir] = ACTIONS(222),
    [anon_sym_invocation_dir_native] = ACTIONS(222),
    [anon_sym_invocation_directory] = ACTIONS(222),
    [anon_sym_invocation_directory_native] = ACTIONS(222),
    [anon_sym_justfile] = ACTIONS(222),
    [anon_sym_justfile_dir] = ACTIONS(222),
    [anon_sym_justfile_directory] = ACTIONS(222),
    [anon_sym_source_dir] = ACTIONS(222),
    [anon_sym_source_directory] = ACTIONS(222),
    [anon_sym_source_file] = ACTIONS(222),
    [anon_sym_just_executable] = ACTIONS(222),
    [anon_sym_just_pid] = ACTIONS(222),
    [anon_sym_append] = ACTIONS(222),
    [anon_sym_prepend] = ACTIONS(222),
    [anon_sym_encode_uri_component] = ACTIONS(222),
    [anon_sym_quote] = ACTIONS(222),
    [anon_sym_replace] = ACTIONS(222),
    [anon_sym_replace_regex] = ACTIONS(222),
    [anon_sym_trim] = ACTIONS(222),
    [anon_sym_trim_end] = ACTIONS(222),
    [anon_sym_trim_end_match] = ACTIONS(222),
    [anon_sym_trim_end_matches] = ACTIONS(222),
    [anon_sym_trim_start] = ACTIONS(222),
    [anon_sym_trim_start_match] = ACTIONS(222),
    [anon_sym_trim_start_matches] = ACTIONS(222),
    [anon_sym_capitalize] = ACTIONS(222),
    [anon_sym_kebabcase] = ACTIONS(222),
    [anon_sym_lowercamelcase] = ACTIONS(222),
    [anon_sym_lowercase] = ACTIONS(222),
    [anon_sym_shoutykebabcase] = ACTIONS(222),
    [anon_sym_shoutysnakecase] = ACTIONS(222),
    [anon_sym_snakecase] = ACTIONS(222),
    [anon_sym_titlecase] = ACTIONS(222),
    [anon_sym_uppercamelcase] = ACTIONS(222),
    [anon_sym_uppercase] = ACTIONS(222),
    [anon_sym_absolute_path] = ACTIONS(222),
    [anon_sym_canonicalize] = ACTIONS(222),
    [anon_sym_extension] = ACTIONS(222),
    [anon_sym_file_name] = ACTIONS(222),
    [anon_sym_file_stem] = ACTIONS(222),
    [anon_sym_parent_dir] = ACTIONS(222),
    [anon_sym_parent_directory] = ACTIONS(222),
    [anon_sym_without_extension] = ACTIONS(222),
    [anon_sym_clean] = ACTIONS(222),
    [anon_sym_join] = ACTIONS(222),
    [anon_sym_path_exists] = ACTIONS(222),
    [anon_sym_error] = ACTIONS(222),
    [anon_sym_blake3] = ACTIONS(222),
    [anon_sym_blake3_file] = ACTIONS(222),
    [anon_sym_sha256] = ACTIONS(222),
    [anon_sym_sha256_file] = ACTIONS(222),
    [anon_sym_uuid] = ACTIONS(222),
    [anon_sym_choose] = ACTIONS(222),
    [anon_sym_datetime] = ACTIONS(222),
    [anon_sym_datetime_utc] = ACTIONS(222),
    [anon_sym_semver_matches] = ACTIONS(222),
    [anon_sym_cache_dir] = ACTIONS(222),
    [anon_sym_cache_directory] = ACTIONS(222),
    [anon_sym_config_dir] = ACTIONS(222),
    [anon_sym_config_directory] = ACTIONS(222),
    [anon_sym_config_local_dir] = ACTIONS(222),
    [anon_sym_config_local_directory] = ACTIONS(222),
    [anon_sym_data_dir] = ACTIONS(222),
    [anon_sym_data_directory] = ACTIONS(222),
    [anon_sym_data_local_dir] = ACTIONS(222),
    [anon_sym_data_local_directory] = ACTIONS(222),
    [anon_sym_executable_dir] = ACTIONS(222),
    [anon_sym_executable_directory] = ACTIONS(222),
    [anon_sym_home_dir] = ACTIONS(222),
    [anon_sym_home_directory] = ACTIONS(222),
    [anon_sym_BQUOTE] = ACTIONS(222),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(220),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(220),
    [anon_sym_DQUOTE] = ACTIONS(222),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(220),
    [anon_sym_SQUOTE] = ACTIONS(222),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [31] = {
    [sym_expression] = STATE(100),
    [sym_value] = STATE(26),
    [sym_builtin_function_call] = STATE(27),
    [sym_function_call] = STATE(27),
    [sym_function_parameters] = STATE(129),
    [sym_backtick] = STATE(27),
    [sym_indented_backtick] = STATE(27),
    [sym_string] = STATE(27),
    [sym_indented_normal_string] = STATE(7),
    [sym_normal_string] = STATE(7),
    [sym_indented_raw_string] = STATE(7),
    [sym_raw_string] = STATE(7),
    [sym_comment] = STATE(31),
    [sym_identifier] = ACTIONS(224),
    [anon_sym_shell] = ACTIONS(19),
    [anon_sym_if] = ACTIONS(21),
    [anon_sym_assert] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_RPAREN] = ACTIONS(226),
    [anon_sym_arch] = ACTIONS(27),
    [anon_sym_num_cpus] = ACTIONS(27),
    [anon_sym_os] = ACTIONS(27),
    [anon_sym_os_family] = ACTIONS(27),
    [anon_sym_env_var] = ACTIONS(29),
    [anon_sym_env_var_or_default] = ACTIONS(31),
    [anon_sym_env] = ACTIONS(33),
    [anon_sym_is_dependency] = ACTIONS(27),
    [anon_sym_invocation_dir] = ACTIONS(27),
    [anon_sym_invocation_dir_native] = ACTIONS(27),
    [anon_sym_invocation_directory] = ACTIONS(27),
    [anon_sym_invocation_directory_native] = ACTIONS(27),
    [anon_sym_justfile] = ACTIONS(27),
    [anon_sym_justfile_dir] = ACTIONS(27),
    [anon_sym_justfile_directory] = ACTIONS(27),
    [anon_sym_source_dir] = ACTIONS(27),
    [anon_sym_source_directory] = ACTIONS(27),
    [anon_sym_source_file] = ACTIONS(27),
    [anon_sym_just_executable] = ACTIONS(27),
    [anon_sym_just_pid] = ACTIONS(27),
    [anon_sym_append] = ACTIONS(31),
    [anon_sym_prepend] = ACTIONS(31),
    [anon_sym_encode_uri_component] = ACTIONS(29),
    [anon_sym_quote] = ACTIONS(29),
    [anon_sym_replace] = ACTIONS(35),
    [anon_sym_replace_regex] = ACTIONS(35),
    [anon_sym_trim] = ACTIONS(29),
    [anon_sym_trim_end] = ACTIONS(29),
    [anon_sym_trim_end_match] = ACTIONS(31),
    [anon_sym_trim_end_matches] = ACTIONS(31),
    [anon_sym_trim_start] = ACTIONS(29),
    [anon_sym_trim_start_match] = ACTIONS(31),
    [anon_sym_trim_start_matches] = ACTIONS(31),
    [anon_sym_capitalize] = ACTIONS(29),
    [anon_sym_kebabcase] = ACTIONS(29),
    [anon_sym_lowercamelcase] = ACTIONS(29),
    [anon_sym_lowercase] = ACTIONS(29),
    [anon_sym_shoutykebabcase] = ACTIONS(29),
    [anon_sym_shoutysnakecase] = ACTIONS(29),
    [anon_sym_snakecase] = ACTIONS(29),
    [anon_sym_titlecase] = ACTIONS(29),
    [anon_sym_uppercamelcase] = ACTIONS(29),
    [anon_sym_uppercase] = ACTIONS(29),
    [anon_sym_absolute_path] = ACTIONS(29),
    [anon_sym_canonicalize] = ACTIONS(29),
    [anon_sym_extension] = ACTIONS(29),
    [anon_sym_file_name] = ACTIONS(29),
    [anon_sym_file_stem] = ACTIONS(29),
    [anon_sym_parent_dir] = ACTIONS(29),
    [anon_sym_parent_directory] = ACTIONS(29),
    [anon_sym_without_extension] = ACTIONS(29),
    [anon_sym_clean] = ACTIONS(29),
    [anon_sym_join] = ACTIONS(19),
    [anon_sym_path_exists] = ACTIONS(29),
    [anon_sym_error] = ACTIONS(29),
    [anon_sym_blake3] = ACTIONS(29),
    [anon_sym_blake3_file] = ACTIONS(29),
    [anon_sym_sha256] = ACTIONS(29),
    [anon_sym_sha256_file] = ACTIONS(29),
    [anon_sym_uuid] = ACTIONS(27),
    [anon_sym_choose] = ACTIONS(31),
    [anon_sym_datetime] = ACTIONS(29),
    [anon_sym_datetime_utc] = ACTIONS(29),
    [anon_sym_semver_matches] = ACTIONS(31),
    [anon_sym_cache_dir] = ACTIONS(27),
    [anon_sym_cache_directory] = ACTIONS(27),
    [anon_sym_config_dir] = ACTIONS(27),
    [anon_sym_config_directory] = ACTIONS(27),
    [anon_sym_config_local_dir] = ACTIONS(27),
    [anon_sym_config_local_directory] = ACTIONS(27),
    [anon_sym_data_dir] = ACTIONS(27),
    [anon_sym_data_directory] = ACTIONS(27),
    [anon_sym_data_local_dir] = ACTIONS(27),
    [anon_sym_data_local_directory] = ACTIONS(27),
    [anon_sym_executable_dir] = ACTIONS(27),
    [anon_sym_executable_directory] = ACTIONS(27),
    [anon_sym_home_dir] = ACTIONS(27),
    [anon_sym_home_directory] = ACTIONS(27),
    [anon_sym_BQUOTE] = ACTIONS(37),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(39),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(41),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(45),
    [anon_sym_SQUOTE] = ACTIONS(47),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [32] = {
    [sym_comment] = STATE(32),
    [ts_builtin_sym_end] = ACTIONS(228),
    [sym_identifier] = ACTIONS(230),
    [anon_sym_alias] = ACTIONS(230),
    [anon_sym_export] = ACTIONS(230),
    [aux_sym_import_token1] = ACTIONS(230),
    [aux_sym_mod_token1] = ACTIONS(230),
    [anon_sym_set] = ACTIONS(230),
    [anon_sym_shell] = ACTIONS(230),
    [anon_sym_COMMA] = ACTIONS(228),
    [anon_sym_if] = ACTIONS(230),
    [anon_sym_LBRACE] = ACTIONS(228),
    [anon_sym_RBRACE] = ACTIONS(228),
    [anon_sym_assert] = ACTIONS(230),
    [anon_sym_LPAREN] = ACTIONS(228),
    [anon_sym_RPAREN] = ACTIONS(228),
    [anon_sym_EQ_EQ] = ACTIONS(228),
    [anon_sym_BANG_EQ] = ACTIONS(228),
    [anon_sym_EQ_TILDE] = ACTIONS(228),
    [anon_sym_arch] = ACTIONS(230),
    [anon_sym_num_cpus] = ACTIONS(230),
    [anon_sym_os] = ACTIONS(230),
    [anon_sym_os_family] = ACTIONS(230),
    [anon_sym_env_var] = ACTIONS(230),
    [anon_sym_env_var_or_default] = ACTIONS(230),
    [anon_sym_env] = ACTIONS(230),
    [anon_sym_is_dependency] = ACTIONS(230),
    [anon_sym_invocation_dir] = ACTIONS(230),
    [anon_sym_invocation_dir_native] = ACTIONS(230),
    [anon_sym_invocation_directory] = ACTIONS(230),
    [anon_sym_invocation_directory_native] = ACTIONS(230),
    [anon_sym_justfile] = ACTIONS(230),
    [anon_sym_justfile_dir] = ACTIONS(230),
    [anon_sym_justfile_directory] = ACTIONS(230),
    [anon_sym_source_dir] = ACTIONS(230),
    [anon_sym_source_directory] = ACTIONS(230),
    [anon_sym_source_file] = ACTIONS(230),
    [anon_sym_just_executable] = ACTIONS(230),
    [anon_sym_just_pid] = ACTIONS(230),
    [anon_sym_append] = ACTIONS(230),
    [anon_sym_prepend] = ACTIONS(230),
    [anon_sym_encode_uri_component] = ACTIONS(230),
    [anon_sym_quote] = ACTIONS(230),
    [anon_sym_replace] = ACTIONS(230),
    [anon_sym_replace_regex] = ACTIONS(230),
    [anon_sym_trim] = ACTIONS(230),
    [anon_sym_trim_end] = ACTIONS(230),
    [anon_sym_trim_end_match] = ACTIONS(230),
    [anon_sym_trim_end_matches] = ACTIONS(230),
    [anon_sym_trim_start] = ACTIONS(230),
    [anon_sym_trim_start_match] = ACTIONS(230),
    [anon_sym_trim_start_matches] = ACTIONS(230),
    [anon_sym_capitalize] = ACTIONS(230),
    [anon_sym_kebabcase] = ACTIONS(230),
    [anon_sym_lowercamelcase] = ACTIONS(230),
    [anon_sym_lowercase] = ACTIONS(230),
    [anon_sym_shoutykebabcase] = ACTIONS(230),
    [anon_sym_shoutysnakecase] = ACTIONS(230),
    [anon_sym_snakecase] = ACTIONS(230),
    [anon_sym_titlecase] = ACTIONS(230),
    [anon_sym_uppercamelcase] = ACTIONS(230),
    [anon_sym_uppercase] = ACTIONS(230),
    [anon_sym_absolute_path] = ACTIONS(230),
    [anon_sym_canonicalize] = ACTIONS(230),
    [anon_sym_extension] = ACTIONS(230),
    [anon_sym_file_name] = ACTIONS(230),
    [anon_sym_file_stem] = ACTIONS(230),
    [anon_sym_parent_dir] = ACTIONS(230),
    [anon_sym_parent_directory] = ACTIONS(230),
    [anon_sym_without_extension] = ACTIONS(230),
    [anon_sym_clean] = ACTIONS(230),
    [anon_sym_join] = ACTIONS(230),
    [anon_sym_path_exists] = ACTIONS(230),
    [anon_sym_error] = ACTIONS(230),
    [anon_sym_blake3] = ACTIONS(230),
    [anon_sym_blake3_file] = ACTIONS(230),
    [anon_sym_sha256] = ACTIONS(230),
    [anon_sym_sha256_file] = ACTIONS(230),
    [anon_sym_uuid] = ACTIONS(230),
    [anon_sym_choose] = ACTIONS(230),
    [anon_sym_datetime] = ACTIONS(230),
    [anon_sym_datetime_utc] = ACTIONS(230),
    [anon_sym_semver_matches] = ACTIONS(230),
    [anon_sym_cache_dir] = ACTIONS(230),
    [anon_sym_cache_directory] = ACTIONS(230),
    [anon_sym_config_dir] = ACTIONS(230),
    [anon_sym_config_directory] = ACTIONS(230),
    [anon_sym_config_local_dir] = ACTIONS(230),
    [anon_sym_config_local_directory] = ACTIONS(230),
    [anon_sym_data_dir] = ACTIONS(230),
    [anon_sym_data_directory] = ACTIONS(230),
    [anon_sym_data_local_dir] = ACTIONS(230),
    [anon_sym_data_local_directory] = ACTIONS(230),
    [anon_sym_executable_dir] = ACTIONS(230),
    [anon_sym_executable_directory] = ACTIONS(230),
    [anon_sym_home_dir] = ACTIONS(230),
    [anon_sym_home_directory] = ACTIONS(230),
    [anon_sym_BQUOTE] = ACTIONS(230),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(228),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(228),
    [anon_sym_DQUOTE] = ACTIONS(230),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(228),
    [anon_sym_SQUOTE] = ACTIONS(230),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [33] = {
    [sym_comment] = STATE(33),
    [ts_builtin_sym_end] = ACTIONS(232),
    [sym_identifier] = ACTIONS(234),
    [anon_sym_alias] = ACTIONS(234),
    [anon_sym_export] = ACTIONS(234),
    [aux_sym_import_token1] = ACTIONS(234),
    [aux_sym_mod_token1] = ACTIONS(234),
    [anon_sym_set] = ACTIONS(234),
    [anon_sym_shell] = ACTIONS(234),
    [anon_sym_COMMA] = ACTIONS(232),
    [anon_sym_if] = ACTIONS(234),
    [anon_sym_LBRACE] = ACTIONS(232),
    [anon_sym_RBRACE] = ACTIONS(232),
    [anon_sym_assert] = ACTIONS(234),
    [anon_sym_LPAREN] = ACTIONS(232),
    [anon_sym_RPAREN] = ACTIONS(232),
    [anon_sym_EQ_EQ] = ACTIONS(232),
    [anon_sym_BANG_EQ] = ACTIONS(232),
    [anon_sym_EQ_TILDE] = ACTIONS(232),
    [anon_sym_arch] = ACTIONS(234),
    [anon_sym_num_cpus] = ACTIONS(234),
    [anon_sym_os] = ACTIONS(234),
    [anon_sym_os_family] = ACTIONS(234),
    [anon_sym_env_var] = ACTIONS(234),
    [anon_sym_env_var_or_default] = ACTIONS(234),
    [anon_sym_env] = ACTIONS(234),
    [anon_sym_is_dependency] = ACTIONS(234),
    [anon_sym_invocation_dir] = ACTIONS(234),
    [anon_sym_invocation_dir_native] = ACTIONS(234),
    [anon_sym_invocation_directory] = ACTIONS(234),
    [anon_sym_invocation_directory_native] = ACTIONS(234),
    [anon_sym_justfile] = ACTIONS(234),
    [anon_sym_justfile_dir] = ACTIONS(234),
    [anon_sym_justfile_directory] = ACTIONS(234),
    [anon_sym_source_dir] = ACTIONS(234),
    [anon_sym_source_directory] = ACTIONS(234),
    [anon_sym_source_file] = ACTIONS(234),
    [anon_sym_just_executable] = ACTIONS(234),
    [anon_sym_just_pid] = ACTIONS(234),
    [anon_sym_append] = ACTIONS(234),
    [anon_sym_prepend] = ACTIONS(234),
    [anon_sym_encode_uri_component] = ACTIONS(234),
    [anon_sym_quote] = ACTIONS(234),
    [anon_sym_replace] = ACTIONS(234),
    [anon_sym_replace_regex] = ACTIONS(234),
    [anon_sym_trim] = ACTIONS(234),
    [anon_sym_trim_end] = ACTIONS(234),
    [anon_sym_trim_end_match] = ACTIONS(234),
    [anon_sym_trim_end_matches] = ACTIONS(234),
    [anon_sym_trim_start] = ACTIONS(234),
    [anon_sym_trim_start_match] = ACTIONS(234),
    [anon_sym_trim_start_matches] = ACTIONS(234),
    [anon_sym_capitalize] = ACTIONS(234),
    [anon_sym_kebabcase] = ACTIONS(234),
    [anon_sym_lowercamelcase] = ACTIONS(234),
    [anon_sym_lowercase] = ACTIONS(234),
    [anon_sym_shoutykebabcase] = ACTIONS(234),
    [anon_sym_shoutysnakecase] = ACTIONS(234),
    [anon_sym_snakecase] = ACTIONS(234),
    [anon_sym_titlecase] = ACTIONS(234),
    [anon_sym_uppercamelcase] = ACTIONS(234),
    [anon_sym_uppercase] = ACTIONS(234),
    [anon_sym_absolute_path] = ACTIONS(234),
    [anon_sym_canonicalize] = ACTIONS(234),
    [anon_sym_extension] = ACTIONS(234),
    [anon_sym_file_name] = ACTIONS(234),
    [anon_sym_file_stem] = ACTIONS(234),
    [anon_sym_parent_dir] = ACTIONS(234),
    [anon_sym_parent_directory] = ACTIONS(234),
    [anon_sym_without_extension] = ACTIONS(234),
    [anon_sym_clean] = ACTIONS(234),
    [anon_sym_join] = ACTIONS(234),
    [anon_sym_path_exists] = ACTIONS(234),
    [anon_sym_error] = ACTIONS(234),
    [anon_sym_blake3] = ACTIONS(234),
    [anon_sym_blake3_file] = ACTIONS(234),
    [anon_sym_sha256] = ACTIONS(234),
    [anon_sym_sha256_file] = ACTIONS(234),
    [anon_sym_uuid] = ACTIONS(234),
    [anon_sym_choose] = ACTIONS(234),
    [anon_sym_datetime] = ACTIONS(234),
    [anon_sym_datetime_utc] = ACTIONS(234),
    [anon_sym_semver_matches] = ACTIONS(234),
    [anon_sym_cache_dir] = ACTIONS(234),
    [anon_sym_cache_directory] = ACTIONS(234),
    [anon_sym_config_dir] = ACTIONS(234),
    [anon_sym_config_directory] = ACTIONS(234),
    [anon_sym_config_local_dir] = ACTIONS(234),
    [anon_sym_config_local_directory] = ACTIONS(234),
    [anon_sym_data_dir] = ACTIONS(234),
    [anon_sym_data_directory] = ACTIONS(234),
    [anon_sym_data_local_dir] = ACTIONS(234),
    [anon_sym_data_local_directory] = ACTIONS(234),
    [anon_sym_executable_dir] = ACTIONS(234),
    [anon_sym_executable_directory] = ACTIONS(234),
    [anon_sym_home_dir] = ACTIONS(234),
    [anon_sym_home_directory] = ACTIONS(234),
    [anon_sym_BQUOTE] = ACTIONS(234),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(232),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(232),
    [anon_sym_DQUOTE] = ACTIONS(234),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(232),
    [anon_sym_SQUOTE] = ACTIONS(234),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [34] = {
    [sym_expression] = STATE(99),
    [sym_condition] = STATE(140),
    [sym_value] = STATE(26),
    [sym_builtin_function_call] = STATE(27),
    [sym_function_call] = STATE(27),
    [sym_backtick] = STATE(27),
    [sym_indented_backtick] = STATE(27),
    [sym_string] = STATE(27),
    [sym_indented_normal_string] = STATE(7),
    [sym_normal_string] = STATE(7),
    [sym_indented_raw_string] = STATE(7),
    [sym_raw_string] = STATE(7),
    [sym_comment] = STATE(34),
    [sym_identifier] = ACTIONS(224),
    [anon_sym_shell] = ACTIONS(19),
    [anon_sym_if] = ACTIONS(21),
    [anon_sym_assert] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_arch] = ACTIONS(27),
    [anon_sym_num_cpus] = ACTIONS(27),
    [anon_sym_os] = ACTIONS(27),
    [anon_sym_os_family] = ACTIONS(27),
    [anon_sym_env_var] = ACTIONS(29),
    [anon_sym_env_var_or_default] = ACTIONS(31),
    [anon_sym_env] = ACTIONS(33),
    [anon_sym_is_dependency] = ACTIONS(27),
    [anon_sym_invocation_dir] = ACTIONS(27),
    [anon_sym_invocation_dir_native] = ACTIONS(27),
    [anon_sym_invocation_directory] = ACTIONS(27),
    [anon_sym_invocation_directory_native] = ACTIONS(27),
    [anon_sym_justfile] = ACTIONS(27),
    [anon_sym_justfile_dir] = ACTIONS(27),
    [anon_sym_justfile_directory] = ACTIONS(27),
    [anon_sym_source_dir] = ACTIONS(27),
    [anon_sym_source_directory] = ACTIONS(27),
    [anon_sym_source_file] = ACTIONS(27),
    [anon_sym_just_executable] = ACTIONS(27),
    [anon_sym_just_pid] = ACTIONS(27),
    [anon_sym_append] = ACTIONS(31),
    [anon_sym_prepend] = ACTIONS(31),
    [anon_sym_encode_uri_component] = ACTIONS(29),
    [anon_sym_quote] = ACTIONS(29),
    [anon_sym_replace] = ACTIONS(35),
    [anon_sym_replace_regex] = ACTIONS(35),
    [anon_sym_trim] = ACTIONS(29),
    [anon_sym_trim_end] = ACTIONS(29),
    [anon_sym_trim_end_match] = ACTIONS(31),
    [anon_sym_trim_end_matches] = ACTIONS(31),
    [anon_sym_trim_start] = ACTIONS(29),
    [anon_sym_trim_start_match] = ACTIONS(31),
    [anon_sym_trim_start_matches] = ACTIONS(31),
    [anon_sym_capitalize] = ACTIONS(29),
    [anon_sym_kebabcase] = ACTIONS(29),
    [anon_sym_lowercamelcase] = ACTIONS(29),
    [anon_sym_lowercase] = ACTIONS(29),
    [anon_sym_shoutykebabcase] = ACTIONS(29),
    [anon_sym_shoutysnakecase] = ACTIONS(29),
    [anon_sym_snakecase] = ACTIONS(29),
    [anon_sym_titlecase] = ACTIONS(29),
    [anon_sym_uppercamelcase] = ACTIONS(29),
    [anon_sym_uppercase] = ACTIONS(29),
    [anon_sym_absolute_path] = ACTIONS(29),
    [anon_sym_canonicalize] = ACTIONS(29),
    [anon_sym_extension] = ACTIONS(29),
    [anon_sym_file_name] = ACTIONS(29),
    [anon_sym_file_stem] = ACTIONS(29),
    [anon_sym_parent_dir] = ACTIONS(29),
    [anon_sym_parent_directory] = ACTIONS(29),
    [anon_sym_without_extension] = ACTIONS(29),
    [anon_sym_clean] = ACTIONS(29),
    [anon_sym_join] = ACTIONS(19),
    [anon_sym_path_exists] = ACTIONS(29),
    [anon_sym_error] = ACTIONS(29),
    [anon_sym_blake3] = ACTIONS(29),
    [anon_sym_blake3_file] = ACTIONS(29),
    [anon_sym_sha256] = ACTIONS(29),
    [anon_sym_sha256_file] = ACTIONS(29),
    [anon_sym_uuid] = ACTIONS(27),
    [anon_sym_choose] = ACTIONS(31),
    [anon_sym_datetime] = ACTIONS(29),
    [anon_sym_datetime_utc] = ACTIONS(29),
    [anon_sym_semver_matches] = ACTIONS(31),
    [anon_sym_cache_dir] = ACTIONS(27),
    [anon_sym_cache_directory] = ACTIONS(27),
    [anon_sym_config_dir] = ACTIONS(27),
    [anon_sym_config_directory] = ACTIONS(27),
    [anon_sym_config_local_dir] = ACTIONS(27),
    [anon_sym_config_local_directory] = ACTIONS(27),
    [anon_sym_data_dir] = ACTIONS(27),
    [anon_sym_data_directory] = ACTIONS(27),
    [anon_sym_data_local_dir] = ACTIONS(27),
    [anon_sym_data_local_directory] = ACTIONS(27),
    [anon_sym_executable_dir] = ACTIONS(27),
    [anon_sym_executable_directory] = ACTIONS(27),
    [anon_sym_home_dir] = ACTIONS(27),
    [anon_sym_home_directory] = ACTIONS(27),
    [anon_sym_BQUOTE] = ACTIONS(37),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(39),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(41),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(45),
    [anon_sym_SQUOTE] = ACTIONS(47),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [35] = {
    [sym_expression] = STATE(99),
    [sym_condition] = STATE(149),
    [sym_value] = STATE(26),
    [sym_builtin_function_call] = STATE(27),
    [sym_function_call] = STATE(27),
    [sym_backtick] = STATE(27),
    [sym_indented_backtick] = STATE(27),
    [sym_string] = STATE(27),
    [sym_indented_normal_string] = STATE(7),
    [sym_normal_string] = STATE(7),
    [sym_indented_raw_string] = STATE(7),
    [sym_raw_string] = STATE(7),
    [sym_comment] = STATE(35),
    [sym_identifier] = ACTIONS(224),
    [anon_sym_shell] = ACTIONS(19),
    [anon_sym_if] = ACTIONS(21),
    [anon_sym_assert] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_arch] = ACTIONS(27),
    [anon_sym_num_cpus] = ACTIONS(27),
    [anon_sym_os] = ACTIONS(27),
    [anon_sym_os_family] = ACTIONS(27),
    [anon_sym_env_var] = ACTIONS(29),
    [anon_sym_env_var_or_default] = ACTIONS(31),
    [anon_sym_env] = ACTIONS(33),
    [anon_sym_is_dependency] = ACTIONS(27),
    [anon_sym_invocation_dir] = ACTIONS(27),
    [anon_sym_invocation_dir_native] = ACTIONS(27),
    [anon_sym_invocation_directory] = ACTIONS(27),
    [anon_sym_invocation_directory_native] = ACTIONS(27),
    [anon_sym_justfile] = ACTIONS(27),
    [anon_sym_justfile_dir] = ACTIONS(27),
    [anon_sym_justfile_directory] = ACTIONS(27),
    [anon_sym_source_dir] = ACTIONS(27),
    [anon_sym_source_directory] = ACTIONS(27),
    [anon_sym_source_file] = ACTIONS(27),
    [anon_sym_just_executable] = ACTIONS(27),
    [anon_sym_just_pid] = ACTIONS(27),
    [anon_sym_append] = ACTIONS(31),
    [anon_sym_prepend] = ACTIONS(31),
    [anon_sym_encode_uri_component] = ACTIONS(29),
    [anon_sym_quote] = ACTIONS(29),
    [anon_sym_replace] = ACTIONS(35),
    [anon_sym_replace_regex] = ACTIONS(35),
    [anon_sym_trim] = ACTIONS(29),
    [anon_sym_trim_end] = ACTIONS(29),
    [anon_sym_trim_end_match] = ACTIONS(31),
    [anon_sym_trim_end_matches] = ACTIONS(31),
    [anon_sym_trim_start] = ACTIONS(29),
    [anon_sym_trim_start_match] = ACTIONS(31),
    [anon_sym_trim_start_matches] = ACTIONS(31),
    [anon_sym_capitalize] = ACTIONS(29),
    [anon_sym_kebabcase] = ACTIONS(29),
    [anon_sym_lowercamelcase] = ACTIONS(29),
    [anon_sym_lowercase] = ACTIONS(29),
    [anon_sym_shoutykebabcase] = ACTIONS(29),
    [anon_sym_shoutysnakecase] = ACTIONS(29),
    [anon_sym_snakecase] = ACTIONS(29),
    [anon_sym_titlecase] = ACTIONS(29),
    [anon_sym_uppercamelcase] = ACTIONS(29),
    [anon_sym_uppercase] = ACTIONS(29),
    [anon_sym_absolute_path] = ACTIONS(29),
    [anon_sym_canonicalize] = ACTIONS(29),
    [anon_sym_extension] = ACTIONS(29),
    [anon_sym_file_name] = ACTIONS(29),
    [anon_sym_file_stem] = ACTIONS(29),
    [anon_sym_parent_dir] = ACTIONS(29),
    [anon_sym_parent_directory] = ACTIONS(29),
    [anon_sym_without_extension] = ACTIONS(29),
    [anon_sym_clean] = ACTIONS(29),
    [anon_sym_join] = ACTIONS(19),
    [anon_sym_path_exists] = ACTIONS(29),
    [anon_sym_error] = ACTIONS(29),
    [anon_sym_blake3] = ACTIONS(29),
    [anon_sym_blake3_file] = ACTIONS(29),
    [anon_sym_sha256] = ACTIONS(29),
    [anon_sym_sha256_file] = ACTIONS(29),
    [anon_sym_uuid] = ACTIONS(27),
    [anon_sym_choose] = ACTIONS(31),
    [anon_sym_datetime] = ACTIONS(29),
    [anon_sym_datetime_utc] = ACTIONS(29),
    [anon_sym_semver_matches] = ACTIONS(31),
    [anon_sym_cache_dir] = ACTIONS(27),
    [anon_sym_cache_directory] = ACTIONS(27),
    [anon_sym_config_dir] = ACTIONS(27),
    [anon_sym_config_directory] = ACTIONS(27),
    [anon_sym_config_local_dir] = ACTIONS(27),
    [anon_sym_config_local_directory] = ACTIONS(27),
    [anon_sym_data_dir] = ACTIONS(27),
    [anon_sym_data_directory] = ACTIONS(27),
    [anon_sym_data_local_dir] = ACTIONS(27),
    [anon_sym_data_local_directory] = ACTIONS(27),
    [anon_sym_executable_dir] = ACTIONS(27),
    [anon_sym_executable_directory] = ACTIONS(27),
    [anon_sym_home_dir] = ACTIONS(27),
    [anon_sym_home_directory] = ACTIONS(27),
    [anon_sym_BQUOTE] = ACTIONS(37),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(39),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(41),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(45),
    [anon_sym_SQUOTE] = ACTIONS(47),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [36] = {
    [sym_expression] = STATE(121),
    [sym_value] = STATE(26),
    [sym_builtin_function_call] = STATE(27),
    [sym_function_call] = STATE(27),
    [sym_backtick] = STATE(27),
    [sym_indented_backtick] = STATE(27),
    [sym_string] = STATE(27),
    [sym_indented_normal_string] = STATE(7),
    [sym_normal_string] = STATE(7),
    [sym_indented_raw_string] = STATE(7),
    [sym_raw_string] = STATE(7),
    [sym_comment] = STATE(36),
    [sym_identifier] = ACTIONS(224),
    [anon_sym_shell] = ACTIONS(19),
    [anon_sym_if] = ACTIONS(21),
    [anon_sym_assert] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_RPAREN] = ACTIONS(236),
    [anon_sym_arch] = ACTIONS(27),
    [anon_sym_num_cpus] = ACTIONS(27),
    [anon_sym_os] = ACTIONS(27),
    [anon_sym_os_family] = ACTIONS(27),
    [anon_sym_env_var] = ACTIONS(29),
    [anon_sym_env_var_or_default] = ACTIONS(31),
    [anon_sym_env] = ACTIONS(33),
    [anon_sym_is_dependency] = ACTIONS(27),
    [anon_sym_invocation_dir] = ACTIONS(27),
    [anon_sym_invocation_dir_native] = ACTIONS(27),
    [anon_sym_invocation_directory] = ACTIONS(27),
    [anon_sym_invocation_directory_native] = ACTIONS(27),
    [anon_sym_justfile] = ACTIONS(27),
    [anon_sym_justfile_dir] = ACTIONS(27),
    [anon_sym_justfile_directory] = ACTIONS(27),
    [anon_sym_source_dir] = ACTIONS(27),
    [anon_sym_source_directory] = ACTIONS(27),
    [anon_sym_source_file] = ACTIONS(27),
    [anon_sym_just_executable] = ACTIONS(27),
    [anon_sym_just_pid] = ACTIONS(27),
    [anon_sym_append] = ACTIONS(31),
    [anon_sym_prepend] = ACTIONS(31),
    [anon_sym_encode_uri_component] = ACTIONS(29),
    [anon_sym_quote] = ACTIONS(29),
    [anon_sym_replace] = ACTIONS(35),
    [anon_sym_replace_regex] = ACTIONS(35),
    [anon_sym_trim] = ACTIONS(29),
    [anon_sym_trim_end] = ACTIONS(29),
    [anon_sym_trim_end_match] = ACTIONS(31),
    [anon_sym_trim_end_matches] = ACTIONS(31),
    [anon_sym_trim_start] = ACTIONS(29),
    [anon_sym_trim_start_match] = ACTIONS(31),
    [anon_sym_trim_start_matches] = ACTIONS(31),
    [anon_sym_capitalize] = ACTIONS(29),
    [anon_sym_kebabcase] = ACTIONS(29),
    [anon_sym_lowercamelcase] = ACTIONS(29),
    [anon_sym_lowercase] = ACTIONS(29),
    [anon_sym_shoutykebabcase] = ACTIONS(29),
    [anon_sym_shoutysnakecase] = ACTIONS(29),
    [anon_sym_snakecase] = ACTIONS(29),
    [anon_sym_titlecase] = ACTIONS(29),
    [anon_sym_uppercamelcase] = ACTIONS(29),
    [anon_sym_uppercase] = ACTIONS(29),
    [anon_sym_absolute_path] = ACTIONS(29),
    [anon_sym_canonicalize] = ACTIONS(29),
    [anon_sym_extension] = ACTIONS(29),
    [anon_sym_file_name] = ACTIONS(29),
    [anon_sym_file_stem] = ACTIONS(29),
    [anon_sym_parent_dir] = ACTIONS(29),
    [anon_sym_parent_directory] = ACTIONS(29),
    [anon_sym_without_extension] = ACTIONS(29),
    [anon_sym_clean] = ACTIONS(29),
    [anon_sym_join] = ACTIONS(19),
    [anon_sym_path_exists] = ACTIONS(29),
    [anon_sym_error] = ACTIONS(29),
    [anon_sym_blake3] = ACTIONS(29),
    [anon_sym_blake3_file] = ACTIONS(29),
    [anon_sym_sha256] = ACTIONS(29),
    [anon_sym_sha256_file] = ACTIONS(29),
    [anon_sym_uuid] = ACTIONS(27),
    [anon_sym_choose] = ACTIONS(31),
    [anon_sym_datetime] = ACTIONS(29),
    [anon_sym_datetime_utc] = ACTIONS(29),
    [anon_sym_semver_matches] = ACTIONS(31),
    [anon_sym_cache_dir] = ACTIONS(27),
    [anon_sym_cache_directory] = ACTIONS(27),
    [anon_sym_config_dir] = ACTIONS(27),
    [anon_sym_config_directory] = ACTIONS(27),
    [anon_sym_config_local_dir] = ACTIONS(27),
    [anon_sym_config_local_directory] = ACTIONS(27),
    [anon_sym_data_dir] = ACTIONS(27),
    [anon_sym_data_directory] = ACTIONS(27),
    [anon_sym_data_local_dir] = ACTIONS(27),
    [anon_sym_data_local_directory] = ACTIONS(27),
    [anon_sym_executable_dir] = ACTIONS(27),
    [anon_sym_executable_directory] = ACTIONS(27),
    [anon_sym_home_dir] = ACTIONS(27),
    [anon_sym_home_directory] = ACTIONS(27),
    [anon_sym_BQUOTE] = ACTIONS(37),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(39),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(41),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(45),
    [anon_sym_SQUOTE] = ACTIONS(47),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [37] = {
    [sym_expression] = STATE(121),
    [sym_value] = STATE(26),
    [sym_builtin_function_call] = STATE(27),
    [sym_function_call] = STATE(27),
    [sym_backtick] = STATE(27),
    [sym_indented_backtick] = STATE(27),
    [sym_string] = STATE(27),
    [sym_indented_normal_string] = STATE(7),
    [sym_normal_string] = STATE(7),
    [sym_indented_raw_string] = STATE(7),
    [sym_raw_string] = STATE(7),
    [sym_comment] = STATE(37),
    [sym_identifier] = ACTIONS(224),
    [anon_sym_shell] = ACTIONS(19),
    [anon_sym_if] = ACTIONS(21),
    [anon_sym_assert] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_RPAREN] = ACTIONS(238),
    [anon_sym_arch] = ACTIONS(27),
    [anon_sym_num_cpus] = ACTIONS(27),
    [anon_sym_os] = ACTIONS(27),
    [anon_sym_os_family] = ACTIONS(27),
    [anon_sym_env_var] = ACTIONS(29),
    [anon_sym_env_var_or_default] = ACTIONS(31),
    [anon_sym_env] = ACTIONS(33),
    [anon_sym_is_dependency] = ACTIONS(27),
    [anon_sym_invocation_dir] = ACTIONS(27),
    [anon_sym_invocation_dir_native] = ACTIONS(27),
    [anon_sym_invocation_directory] = ACTIONS(27),
    [anon_sym_invocation_directory_native] = ACTIONS(27),
    [anon_sym_justfile] = ACTIONS(27),
    [anon_sym_justfile_dir] = ACTIONS(27),
    [anon_sym_justfile_directory] = ACTIONS(27),
    [anon_sym_source_dir] = ACTIONS(27),
    [anon_sym_source_directory] = ACTIONS(27),
    [anon_sym_source_file] = ACTIONS(27),
    [anon_sym_just_executable] = ACTIONS(27),
    [anon_sym_just_pid] = ACTIONS(27),
    [anon_sym_append] = ACTIONS(31),
    [anon_sym_prepend] = ACTIONS(31),
    [anon_sym_encode_uri_component] = ACTIONS(29),
    [anon_sym_quote] = ACTIONS(29),
    [anon_sym_replace] = ACTIONS(35),
    [anon_sym_replace_regex] = ACTIONS(35),
    [anon_sym_trim] = ACTIONS(29),
    [anon_sym_trim_end] = ACTIONS(29),
    [anon_sym_trim_end_match] = ACTIONS(31),
    [anon_sym_trim_end_matches] = ACTIONS(31),
    [anon_sym_trim_start] = ACTIONS(29),
    [anon_sym_trim_start_match] = ACTIONS(31),
    [anon_sym_trim_start_matches] = ACTIONS(31),
    [anon_sym_capitalize] = ACTIONS(29),
    [anon_sym_kebabcase] = ACTIONS(29),
    [anon_sym_lowercamelcase] = ACTIONS(29),
    [anon_sym_lowercase] = ACTIONS(29),
    [anon_sym_shoutykebabcase] = ACTIONS(29),
    [anon_sym_shoutysnakecase] = ACTIONS(29),
    [anon_sym_snakecase] = ACTIONS(29),
    [anon_sym_titlecase] = ACTIONS(29),
    [anon_sym_uppercamelcase] = ACTIONS(29),
    [anon_sym_uppercase] = ACTIONS(29),
    [anon_sym_absolute_path] = ACTIONS(29),
    [anon_sym_canonicalize] = ACTIONS(29),
    [anon_sym_extension] = ACTIONS(29),
    [anon_sym_file_name] = ACTIONS(29),
    [anon_sym_file_stem] = ACTIONS(29),
    [anon_sym_parent_dir] = ACTIONS(29),
    [anon_sym_parent_directory] = ACTIONS(29),
    [anon_sym_without_extension] = ACTIONS(29),
    [anon_sym_clean] = ACTIONS(29),
    [anon_sym_join] = ACTIONS(19),
    [anon_sym_path_exists] = ACTIONS(29),
    [anon_sym_error] = ACTIONS(29),
    [anon_sym_blake3] = ACTIONS(29),
    [anon_sym_blake3_file] = ACTIONS(29),
    [anon_sym_sha256] = ACTIONS(29),
    [anon_sym_sha256_file] = ACTIONS(29),
    [anon_sym_uuid] = ACTIONS(27),
    [anon_sym_choose] = ACTIONS(31),
    [anon_sym_datetime] = ACTIONS(29),
    [anon_sym_datetime_utc] = ACTIONS(29),
    [anon_sym_semver_matches] = ACTIONS(31),
    [anon_sym_cache_dir] = ACTIONS(27),
    [anon_sym_cache_directory] = ACTIONS(27),
    [anon_sym_config_dir] = ACTIONS(27),
    [anon_sym_config_directory] = ACTIONS(27),
    [anon_sym_config_local_dir] = ACTIONS(27),
    [anon_sym_config_local_directory] = ACTIONS(27),
    [anon_sym_data_dir] = ACTIONS(27),
    [anon_sym_data_directory] = ACTIONS(27),
    [anon_sym_data_local_dir] = ACTIONS(27),
    [anon_sym_data_local_directory] = ACTIONS(27),
    [anon_sym_executable_dir] = ACTIONS(27),
    [anon_sym_executable_directory] = ACTIONS(27),
    [anon_sym_home_dir] = ACTIONS(27),
    [anon_sym_home_directory] = ACTIONS(27),
    [anon_sym_BQUOTE] = ACTIONS(37),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(39),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(41),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(45),
    [anon_sym_SQUOTE] = ACTIONS(47),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [38] = {
    [sym_expression] = STATE(100),
    [sym_value] = STATE(26),
    [sym_builtin_function_call] = STATE(27),
    [sym_function_call] = STATE(27),
    [sym_function_parameters] = STATE(146),
    [sym_backtick] = STATE(27),
    [sym_indented_backtick] = STATE(27),
    [sym_string] = STATE(27),
    [sym_indented_normal_string] = STATE(7),
    [sym_normal_string] = STATE(7),
    [sym_indented_raw_string] = STATE(7),
    [sym_raw_string] = STATE(7),
    [sym_comment] = STATE(38),
    [sym_identifier] = ACTIONS(224),
    [anon_sym_shell] = ACTIONS(19),
    [anon_sym_if] = ACTIONS(21),
    [anon_sym_assert] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_arch] = ACTIONS(27),
    [anon_sym_num_cpus] = ACTIONS(27),
    [anon_sym_os] = ACTIONS(27),
    [anon_sym_os_family] = ACTIONS(27),
    [anon_sym_env_var] = ACTIONS(29),
    [anon_sym_env_var_or_default] = ACTIONS(31),
    [anon_sym_env] = ACTIONS(33),
    [anon_sym_is_dependency] = ACTIONS(27),
    [anon_sym_invocation_dir] = ACTIONS(27),
    [anon_sym_invocation_dir_native] = ACTIONS(27),
    [anon_sym_invocation_directory] = ACTIONS(27),
    [anon_sym_invocation_directory_native] = ACTIONS(27),
    [anon_sym_justfile] = ACTIONS(27),
    [anon_sym_justfile_dir] = ACTIONS(27),
    [anon_sym_justfile_directory] = ACTIONS(27),
    [anon_sym_source_dir] = ACTIONS(27),
    [anon_sym_source_directory] = ACTIONS(27),
    [anon_sym_source_file] = ACTIONS(27),
    [anon_sym_just_executable] = ACTIONS(27),
    [anon_sym_just_pid] = ACTIONS(27),
    [anon_sym_append] = ACTIONS(31),
    [anon_sym_prepend] = ACTIONS(31),
    [anon_sym_encode_uri_component] = ACTIONS(29),
    [anon_sym_quote] = ACTIONS(29),
    [anon_sym_replace] = ACTIONS(35),
    [anon_sym_replace_regex] = ACTIONS(35),
    [anon_sym_trim] = ACTIONS(29),
    [anon_sym_trim_end] = ACTIONS(29),
    [anon_sym_trim_end_match] = ACTIONS(31),
    [anon_sym_trim_end_matches] = ACTIONS(31),
    [anon_sym_trim_start] = ACTIONS(29),
    [anon_sym_trim_start_match] = ACTIONS(31),
    [anon_sym_trim_start_matches] = ACTIONS(31),
    [anon_sym_capitalize] = ACTIONS(29),
    [anon_sym_kebabcase] = ACTIONS(29),
    [anon_sym_lowercamelcase] = ACTIONS(29),
    [anon_sym_lowercase] = ACTIONS(29),
    [anon_sym_shoutykebabcase] = ACTIONS(29),
    [anon_sym_shoutysnakecase] = ACTIONS(29),
    [anon_sym_snakecase] = ACTIONS(29),
    [anon_sym_titlecase] = ACTIONS(29),
    [anon_sym_uppercamelcase] = ACTIONS(29),
    [anon_sym_uppercase] = ACTIONS(29),
    [anon_sym_absolute_path] = ACTIONS(29),
    [anon_sym_canonicalize] = ACTIONS(29),
    [anon_sym_extension] = ACTIONS(29),
    [anon_sym_file_name] = ACTIONS(29),
    [anon_sym_file_stem] = ACTIONS(29),
    [anon_sym_parent_dir] = ACTIONS(29),
    [anon_sym_parent_directory] = ACTIONS(29),
    [anon_sym_without_extension] = ACTIONS(29),
    [anon_sym_clean] = ACTIONS(29),
    [anon_sym_join] = ACTIONS(19),
    [anon_sym_path_exists] = ACTIONS(29),
    [anon_sym_error] = ACTIONS(29),
    [anon_sym_blake3] = ACTIONS(29),
    [anon_sym_blake3_file] = ACTIONS(29),
    [anon_sym_sha256] = ACTIONS(29),
    [anon_sym_sha256_file] = ACTIONS(29),
    [anon_sym_uuid] = ACTIONS(27),
    [anon_sym_choose] = ACTIONS(31),
    [anon_sym_datetime] = ACTIONS(29),
    [anon_sym_datetime_utc] = ACTIONS(29),
    [anon_sym_semver_matches] = ACTIONS(31),
    [anon_sym_cache_dir] = ACTIONS(27),
    [anon_sym_cache_directory] = ACTIONS(27),
    [anon_sym_config_dir] = ACTIONS(27),
    [anon_sym_config_directory] = ACTIONS(27),
    [anon_sym_config_local_dir] = ACTIONS(27),
    [anon_sym_config_local_directory] = ACTIONS(27),
    [anon_sym_data_dir] = ACTIONS(27),
    [anon_sym_data_directory] = ACTIONS(27),
    [anon_sym_data_local_dir] = ACTIONS(27),
    [anon_sym_data_local_directory] = ACTIONS(27),
    [anon_sym_executable_dir] = ACTIONS(27),
    [anon_sym_executable_directory] = ACTIONS(27),
    [anon_sym_home_dir] = ACTIONS(27),
    [anon_sym_home_directory] = ACTIONS(27),
    [anon_sym_BQUOTE] = ACTIONS(37),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(39),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(41),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(45),
    [anon_sym_SQUOTE] = ACTIONS(47),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [39] = {
    [sym_expression] = STATE(107),
    [sym_value] = STATE(26),
    [sym_builtin_function_call] = STATE(27),
    [sym_function_call] = STATE(27),
    [sym_backtick] = STATE(27),
    [sym_indented_backtick] = STATE(27),
    [sym_string] = STATE(27),
    [sym_indented_normal_string] = STATE(7),
    [sym_normal_string] = STATE(7),
    [sym_indented_raw_string] = STATE(7),
    [sym_raw_string] = STATE(7),
    [sym_comment] = STATE(39),
    [sym_identifier] = ACTIONS(224),
    [anon_sym_shell] = ACTIONS(19),
    [anon_sym_if] = ACTIONS(21),
    [anon_sym_assert] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_RPAREN] = ACTIONS(240),
    [anon_sym_arch] = ACTIONS(27),
    [anon_sym_num_cpus] = ACTIONS(27),
    [anon_sym_os] = ACTIONS(27),
    [anon_sym_os_family] = ACTIONS(27),
    [anon_sym_env_var] = ACTIONS(29),
    [anon_sym_env_var_or_default] = ACTIONS(31),
    [anon_sym_env] = ACTIONS(33),
    [anon_sym_is_dependency] = ACTIONS(27),
    [anon_sym_invocation_dir] = ACTIONS(27),
    [anon_sym_invocation_dir_native] = ACTIONS(27),
    [anon_sym_invocation_directory] = ACTIONS(27),
    [anon_sym_invocation_directory_native] = ACTIONS(27),
    [anon_sym_justfile] = ACTIONS(27),
    [anon_sym_justfile_dir] = ACTIONS(27),
    [anon_sym_justfile_directory] = ACTIONS(27),
    [anon_sym_source_dir] = ACTIONS(27),
    [anon_sym_source_directory] = ACTIONS(27),
    [anon_sym_source_file] = ACTIONS(27),
    [anon_sym_just_executable] = ACTIONS(27),
    [anon_sym_just_pid] = ACTIONS(27),
    [anon_sym_append] = ACTIONS(31),
    [anon_sym_prepend] = ACTIONS(31),
    [anon_sym_encode_uri_component] = ACTIONS(29),
    [anon_sym_quote] = ACTIONS(29),
    [anon_sym_replace] = ACTIONS(35),
    [anon_sym_replace_regex] = ACTIONS(35),
    [anon_sym_trim] = ACTIONS(29),
    [anon_sym_trim_end] = ACTIONS(29),
    [anon_sym_trim_end_match] = ACTIONS(31),
    [anon_sym_trim_end_matches] = ACTIONS(31),
    [anon_sym_trim_start] = ACTIONS(29),
    [anon_sym_trim_start_match] = ACTIONS(31),
    [anon_sym_trim_start_matches] = ACTIONS(31),
    [anon_sym_capitalize] = ACTIONS(29),
    [anon_sym_kebabcase] = ACTIONS(29),
    [anon_sym_lowercamelcase] = ACTIONS(29),
    [anon_sym_lowercase] = ACTIONS(29),
    [anon_sym_shoutykebabcase] = ACTIONS(29),
    [anon_sym_shoutysnakecase] = ACTIONS(29),
    [anon_sym_snakecase] = ACTIONS(29),
    [anon_sym_titlecase] = ACTIONS(29),
    [anon_sym_uppercamelcase] = ACTIONS(29),
    [anon_sym_uppercase] = ACTIONS(29),
    [anon_sym_absolute_path] = ACTIONS(29),
    [anon_sym_canonicalize] = ACTIONS(29),
    [anon_sym_extension] = ACTIONS(29),
    [anon_sym_file_name] = ACTIONS(29),
    [anon_sym_file_stem] = ACTIONS(29),
    [anon_sym_parent_dir] = ACTIONS(29),
    [anon_sym_parent_directory] = ACTIONS(29),
    [anon_sym_without_extension] = ACTIONS(29),
    [anon_sym_clean] = ACTIONS(29),
    [anon_sym_join] = ACTIONS(19),
    [anon_sym_path_exists] = ACTIONS(29),
    [anon_sym_error] = ACTIONS(29),
    [anon_sym_blake3] = ACTIONS(29),
    [anon_sym_blake3_file] = ACTIONS(29),
    [anon_sym_sha256] = ACTIONS(29),
    [anon_sym_sha256_file] = ACTIONS(29),
    [anon_sym_uuid] = ACTIONS(27),
    [anon_sym_choose] = ACTIONS(31),
    [anon_sym_datetime] = ACTIONS(29),
    [anon_sym_datetime_utc] = ACTIONS(29),
    [anon_sym_semver_matches] = ACTIONS(31),
    [anon_sym_cache_dir] = ACTIONS(27),
    [anon_sym_cache_directory] = ACTIONS(27),
    [anon_sym_config_dir] = ACTIONS(27),
    [anon_sym_config_directory] = ACTIONS(27),
    [anon_sym_config_local_dir] = ACTIONS(27),
    [anon_sym_config_local_directory] = ACTIONS(27),
    [anon_sym_data_dir] = ACTIONS(27),
    [anon_sym_data_directory] = ACTIONS(27),
    [anon_sym_data_local_dir] = ACTIONS(27),
    [anon_sym_data_local_directory] = ACTIONS(27),
    [anon_sym_executable_dir] = ACTIONS(27),
    [anon_sym_executable_directory] = ACTIONS(27),
    [anon_sym_home_dir] = ACTIONS(27),
    [anon_sym_home_directory] = ACTIONS(27),
    [anon_sym_BQUOTE] = ACTIONS(37),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(39),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(41),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(45),
    [anon_sym_SQUOTE] = ACTIONS(47),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [40] = {
    [sym_expression] = STATE(125),
    [sym_value] = STATE(26),
    [sym_builtin_function_call] = STATE(27),
    [sym_function_call] = STATE(27),
    [sym_backtick] = STATE(27),
    [sym_indented_backtick] = STATE(27),
    [sym_string] = STATE(27),
    [sym_indented_normal_string] = STATE(7),
    [sym_normal_string] = STATE(7),
    [sym_indented_raw_string] = STATE(7),
    [sym_raw_string] = STATE(7),
    [sym_comment] = STATE(40),
    [sym_identifier] = ACTIONS(224),
    [anon_sym_shell] = ACTIONS(19),
    [anon_sym_if] = ACTIONS(21),
    [anon_sym_assert] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_arch] = ACTIONS(27),
    [anon_sym_num_cpus] = ACTIONS(27),
    [anon_sym_os] = ACTIONS(27),
    [anon_sym_os_family] = ACTIONS(27),
    [anon_sym_env_var] = ACTIONS(29),
    [anon_sym_env_var_or_default] = ACTIONS(31),
    [anon_sym_env] = ACTIONS(33),
    [anon_sym_is_dependency] = ACTIONS(27),
    [anon_sym_invocation_dir] = ACTIONS(27),
    [anon_sym_invocation_dir_native] = ACTIONS(27),
    [anon_sym_invocation_directory] = ACTIONS(27),
    [anon_sym_invocation_directory_native] = ACTIONS(27),
    [anon_sym_justfile] = ACTIONS(27),
    [anon_sym_justfile_dir] = ACTIONS(27),
    [anon_sym_justfile_directory] = ACTIONS(27),
    [anon_sym_source_dir] = ACTIONS(27),
    [anon_sym_source_directory] = ACTIONS(27),
    [anon_sym_source_file] = ACTIONS(27),
    [anon_sym_just_executable] = ACTIONS(27),
    [anon_sym_just_pid] = ACTIONS(27),
    [anon_sym_append] = ACTIONS(31),
    [anon_sym_prepend] = ACTIONS(31),
    [anon_sym_encode_uri_component] = ACTIONS(29),
    [anon_sym_quote] = ACTIONS(29),
    [anon_sym_replace] = ACTIONS(35),
    [anon_sym_replace_regex] = ACTIONS(35),
    [anon_sym_trim] = ACTIONS(29),
    [anon_sym_trim_end] = ACTIONS(29),
    [anon_sym_trim_end_match] = ACTIONS(31),
    [anon_sym_trim_end_matches] = ACTIONS(31),
    [anon_sym_trim_start] = ACTIONS(29),
    [anon_sym_trim_start_match] = ACTIONS(31),
    [anon_sym_trim_start_matches] = ACTIONS(31),
    [anon_sym_capitalize] = ACTIONS(29),
    [anon_sym_kebabcase] = ACTIONS(29),
    [anon_sym_lowercamelcase] = ACTIONS(29),
    [anon_sym_lowercase] = ACTIONS(29),
    [anon_sym_shoutykebabcase] = ACTIONS(29),
    [anon_sym_shoutysnakecase] = ACTIONS(29),
    [anon_sym_snakecase] = ACTIONS(29),
    [anon_sym_titlecase] = ACTIONS(29),
    [anon_sym_uppercamelcase] = ACTIONS(29),
    [anon_sym_uppercase] = ACTIONS(29),
    [anon_sym_absolute_path] = ACTIONS(29),
    [anon_sym_canonicalize] = ACTIONS(29),
    [anon_sym_extension] = ACTIONS(29),
    [anon_sym_file_name] = ACTIONS(29),
    [anon_sym_file_stem] = ACTIONS(29),
    [anon_sym_parent_dir] = ACTIONS(29),
    [anon_sym_parent_directory] = ACTIONS(29),
    [anon_sym_without_extension] = ACTIONS(29),
    [anon_sym_clean] = ACTIONS(29),
    [anon_sym_join] = ACTIONS(19),
    [anon_sym_path_exists] = ACTIONS(29),
    [anon_sym_error] = ACTIONS(29),
    [anon_sym_blake3] = ACTIONS(29),
    [anon_sym_blake3_file] = ACTIONS(29),
    [anon_sym_sha256] = ACTIONS(29),
    [anon_sym_sha256_file] = ACTIONS(29),
    [anon_sym_uuid] = ACTIONS(27),
    [anon_sym_choose] = ACTIONS(31),
    [anon_sym_datetime] = ACTIONS(29),
    [anon_sym_datetime_utc] = ACTIONS(29),
    [anon_sym_semver_matches] = ACTIONS(31),
    [anon_sym_cache_dir] = ACTIONS(27),
    [anon_sym_cache_directory] = ACTIONS(27),
    [anon_sym_config_dir] = ACTIONS(27),
    [anon_sym_config_directory] = ACTIONS(27),
    [anon_sym_config_local_dir] = ACTIONS(27),
    [anon_sym_config_local_directory] = ACTIONS(27),
    [anon_sym_data_dir] = ACTIONS(27),
    [anon_sym_data_directory] = ACTIONS(27),
    [anon_sym_data_local_dir] = ACTIONS(27),
    [anon_sym_data_local_directory] = ACTIONS(27),
    [anon_sym_executable_dir] = ACTIONS(27),
    [anon_sym_executable_directory] = ACTIONS(27),
    [anon_sym_home_dir] = ACTIONS(27),
    [anon_sym_home_directory] = ACTIONS(27),
    [anon_sym_BQUOTE] = ACTIONS(37),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(39),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(41),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(45),
    [anon_sym_SQUOTE] = ACTIONS(47),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [41] = {
    [sym_expression] = STATE(138),
    [sym_value] = STATE(26),
    [sym_builtin_function_call] = STATE(27),
    [sym_function_call] = STATE(27),
    [sym_backtick] = STATE(27),
    [sym_indented_backtick] = STATE(27),
    [sym_string] = STATE(27),
    [sym_indented_normal_string] = STATE(7),
    [sym_normal_string] = STATE(7),
    [sym_indented_raw_string] = STATE(7),
    [sym_raw_string] = STATE(7),
    [sym_comment] = STATE(41),
    [sym_identifier] = ACTIONS(224),
    [anon_sym_shell] = ACTIONS(19),
    [anon_sym_if] = ACTIONS(21),
    [anon_sym_assert] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_arch] = ACTIONS(27),
    [anon_sym_num_cpus] = ACTIONS(27),
    [anon_sym_os] = ACTIONS(27),
    [anon_sym_os_family] = ACTIONS(27),
    [anon_sym_env_var] = ACTIONS(29),
    [anon_sym_env_var_or_default] = ACTIONS(31),
    [anon_sym_env] = ACTIONS(33),
    [anon_sym_is_dependency] = ACTIONS(27),
    [anon_sym_invocation_dir] = ACTIONS(27),
    [anon_sym_invocation_dir_native] = ACTIONS(27),
    [anon_sym_invocation_directory] = ACTIONS(27),
    [anon_sym_invocation_directory_native] = ACTIONS(27),
    [anon_sym_justfile] = ACTIONS(27),
    [anon_sym_justfile_dir] = ACTIONS(27),
    [anon_sym_justfile_directory] = ACTIONS(27),
    [anon_sym_source_dir] = ACTIONS(27),
    [anon_sym_source_directory] = ACTIONS(27),
    [anon_sym_source_file] = ACTIONS(27),
    [anon_sym_just_executable] = ACTIONS(27),
    [anon_sym_just_pid] = ACTIONS(27),
    [anon_sym_append] = ACTIONS(31),
    [anon_sym_prepend] = ACTIONS(31),
    [anon_sym_encode_uri_component] = ACTIONS(29),
    [anon_sym_quote] = ACTIONS(29),
    [anon_sym_replace] = ACTIONS(35),
    [anon_sym_replace_regex] = ACTIONS(35),
    [anon_sym_trim] = ACTIONS(29),
    [anon_sym_trim_end] = ACTIONS(29),
    [anon_sym_trim_end_match] = ACTIONS(31),
    [anon_sym_trim_end_matches] = ACTIONS(31),
    [anon_sym_trim_start] = ACTIONS(29),
    [anon_sym_trim_start_match] = ACTIONS(31),
    [anon_sym_trim_start_matches] = ACTIONS(31),
    [anon_sym_capitalize] = ACTIONS(29),
    [anon_sym_kebabcase] = ACTIONS(29),
    [anon_sym_lowercamelcase] = ACTIONS(29),
    [anon_sym_lowercase] = ACTIONS(29),
    [anon_sym_shoutykebabcase] = ACTIONS(29),
    [anon_sym_shoutysnakecase] = ACTIONS(29),
    [anon_sym_snakecase] = ACTIONS(29),
    [anon_sym_titlecase] = ACTIONS(29),
    [anon_sym_uppercamelcase] = ACTIONS(29),
    [anon_sym_uppercase] = ACTIONS(29),
    [anon_sym_absolute_path] = ACTIONS(29),
    [anon_sym_canonicalize] = ACTIONS(29),
    [anon_sym_extension] = ACTIONS(29),
    [anon_sym_file_name] = ACTIONS(29),
    [anon_sym_file_stem] = ACTIONS(29),
    [anon_sym_parent_dir] = ACTIONS(29),
    [anon_sym_parent_directory] = ACTIONS(29),
    [anon_sym_without_extension] = ACTIONS(29),
    [anon_sym_clean] = ACTIONS(29),
    [anon_sym_join] = ACTIONS(19),
    [anon_sym_path_exists] = ACTIONS(29),
    [anon_sym_error] = ACTIONS(29),
    [anon_sym_blake3] = ACTIONS(29),
    [anon_sym_blake3_file] = ACTIONS(29),
    [anon_sym_sha256] = ACTIONS(29),
    [anon_sym_sha256_file] = ACTIONS(29),
    [anon_sym_uuid] = ACTIONS(27),
    [anon_sym_choose] = ACTIONS(31),
    [anon_sym_datetime] = ACTIONS(29),
    [anon_sym_datetime_utc] = ACTIONS(29),
    [anon_sym_semver_matches] = ACTIONS(31),
    [anon_sym_cache_dir] = ACTIONS(27),
    [anon_sym_cache_directory] = ACTIONS(27),
    [anon_sym_config_dir] = ACTIONS(27),
    [anon_sym_config_directory] = ACTIONS(27),
    [anon_sym_config_local_dir] = ACTIONS(27),
    [anon_sym_config_local_directory] = ACTIONS(27),
    [anon_sym_data_dir] = ACTIONS(27),
    [anon_sym_data_directory] = ACTIONS(27),
    [anon_sym_data_local_dir] = ACTIONS(27),
    [anon_sym_data_local_directory] = ACTIONS(27),
    [anon_sym_executable_dir] = ACTIONS(27),
    [anon_sym_executable_directory] = ACTIONS(27),
    [anon_sym_home_dir] = ACTIONS(27),
    [anon_sym_home_directory] = ACTIONS(27),
    [anon_sym_BQUOTE] = ACTIONS(37),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(39),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(41),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(45),
    [anon_sym_SQUOTE] = ACTIONS(47),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [42] = {
    [sym_expression] = STATE(141),
    [sym_value] = STATE(26),
    [sym_builtin_function_call] = STATE(27),
    [sym_function_call] = STATE(27),
    [sym_backtick] = STATE(27),
    [sym_indented_backtick] = STATE(27),
    [sym_string] = STATE(27),
    [sym_indented_normal_string] = STATE(7),
    [sym_normal_string] = STATE(7),
    [sym_indented_raw_string] = STATE(7),
    [sym_raw_string] = STATE(7),
    [sym_comment] = STATE(42),
    [sym_identifier] = ACTIONS(224),
    [anon_sym_shell] = ACTIONS(19),
    [anon_sym_if] = ACTIONS(21),
    [anon_sym_assert] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_arch] = ACTIONS(27),
    [anon_sym_num_cpus] = ACTIONS(27),
    [anon_sym_os] = ACTIONS(27),
    [anon_sym_os_family] = ACTIONS(27),
    [anon_sym_env_var] = ACTIONS(29),
    [anon_sym_env_var_or_default] = ACTIONS(31),
    [anon_sym_env] = ACTIONS(33),
    [anon_sym_is_dependency] = ACTIONS(27),
    [anon_sym_invocation_dir] = ACTIONS(27),
    [anon_sym_invocation_dir_native] = ACTIONS(27),
    [anon_sym_invocation_directory] = ACTIONS(27),
    [anon_sym_invocation_directory_native] = ACTIONS(27),
    [anon_sym_justfile] = ACTIONS(27),
    [anon_sym_justfile_dir] = ACTIONS(27),
    [anon_sym_justfile_directory] = ACTIONS(27),
    [anon_sym_source_dir] = ACTIONS(27),
    [anon_sym_source_directory] = ACTIONS(27),
    [anon_sym_source_file] = ACTIONS(27),
    [anon_sym_just_executable] = ACTIONS(27),
    [anon_sym_just_pid] = ACTIONS(27),
    [anon_sym_append] = ACTIONS(31),
    [anon_sym_prepend] = ACTIONS(31),
    [anon_sym_encode_uri_component] = ACTIONS(29),
    [anon_sym_quote] = ACTIONS(29),
    [anon_sym_replace] = ACTIONS(35),
    [anon_sym_replace_regex] = ACTIONS(35),
    [anon_sym_trim] = ACTIONS(29),
    [anon_sym_trim_end] = ACTIONS(29),
    [anon_sym_trim_end_match] = ACTIONS(31),
    [anon_sym_trim_end_matches] = ACTIONS(31),
    [anon_sym_trim_start] = ACTIONS(29),
    [anon_sym_trim_start_match] = ACTIONS(31),
    [anon_sym_trim_start_matches] = ACTIONS(31),
    [anon_sym_capitalize] = ACTIONS(29),
    [anon_sym_kebabcase] = ACTIONS(29),
    [anon_sym_lowercamelcase] = ACTIONS(29),
    [anon_sym_lowercase] = ACTIONS(29),
    [anon_sym_shoutykebabcase] = ACTIONS(29),
    [anon_sym_shoutysnakecase] = ACTIONS(29),
    [anon_sym_snakecase] = ACTIONS(29),
    [anon_sym_titlecase] = ACTIONS(29),
    [anon_sym_uppercamelcase] = ACTIONS(29),
    [anon_sym_uppercase] = ACTIONS(29),
    [anon_sym_absolute_path] = ACTIONS(29),
    [anon_sym_canonicalize] = ACTIONS(29),
    [anon_sym_extension] = ACTIONS(29),
    [anon_sym_file_name] = ACTIONS(29),
    [anon_sym_file_stem] = ACTIONS(29),
    [anon_sym_parent_dir] = ACTIONS(29),
    [anon_sym_parent_directory] = ACTIONS(29),
    [anon_sym_without_extension] = ACTIONS(29),
    [anon_sym_clean] = ACTIONS(29),
    [anon_sym_join] = ACTIONS(19),
    [anon_sym_path_exists] = ACTIONS(29),
    [anon_sym_error] = ACTIONS(29),
    [anon_sym_blake3] = ACTIONS(29),
    [anon_sym_blake3_file] = ACTIONS(29),
    [anon_sym_sha256] = ACTIONS(29),
    [anon_sym_sha256_file] = ACTIONS(29),
    [anon_sym_uuid] = ACTIONS(27),
    [anon_sym_choose] = ACTIONS(31),
    [anon_sym_datetime] = ACTIONS(29),
    [anon_sym_datetime_utc] = ACTIONS(29),
    [anon_sym_semver_matches] = ACTIONS(31),
    [anon_sym_cache_dir] = ACTIONS(27),
    [anon_sym_cache_directory] = ACTIONS(27),
    [anon_sym_config_dir] = ACTIONS(27),
    [anon_sym_config_directory] = ACTIONS(27),
    [anon_sym_config_local_dir] = ACTIONS(27),
    [anon_sym_config_local_directory] = ACTIONS(27),
    [anon_sym_data_dir] = ACTIONS(27),
    [anon_sym_data_directory] = ACTIONS(27),
    [anon_sym_data_local_dir] = ACTIONS(27),
    [anon_sym_data_local_directory] = ACTIONS(27),
    [anon_sym_executable_dir] = ACTIONS(27),
    [anon_sym_executable_directory] = ACTIONS(27),
    [anon_sym_home_dir] = ACTIONS(27),
    [anon_sym_home_directory] = ACTIONS(27),
    [anon_sym_BQUOTE] = ACTIONS(37),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(39),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(41),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(45),
    [anon_sym_SQUOTE] = ACTIONS(47),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [43] = {
    [sym_string] = STATE(69),
    [sym_indented_normal_string] = STATE(7),
    [sym_normal_string] = STATE(7),
    [sym_indented_raw_string] = STATE(7),
    [sym_raw_string] = STATE(7),
    [sym_comment] = STATE(43),
    [ts_builtin_sym_end] = ACTIONS(242),
    [sym_identifier] = ACTIONS(244),
    [anon_sym_alias] = ACTIONS(244),
    [anon_sym_export] = ACTIONS(244),
    [aux_sym_import_token1] = ACTIONS(244),
    [aux_sym_mod_token1] = ACTIONS(244),
    [anon_sym_set] = ACTIONS(244),
    [anon_sym_shell] = ACTIONS(244),
    [anon_sym_if] = ACTIONS(244),
    [anon_sym_assert] = ACTIONS(244),
    [anon_sym_LPAREN] = ACTIONS(242),
    [anon_sym_arch] = ACTIONS(244),
    [anon_sym_num_cpus] = ACTIONS(244),
    [anon_sym_os] = ACTIONS(244),
    [anon_sym_os_family] = ACTIONS(244),
    [anon_sym_env_var] = ACTIONS(244),
    [anon_sym_env_var_or_default] = ACTIONS(244),
    [anon_sym_env] = ACTIONS(244),
    [anon_sym_is_dependency] = ACTIONS(244),
    [anon_sym_invocation_dir] = ACTIONS(244),
    [anon_sym_invocation_dir_native] = ACTIONS(244),
    [anon_sym_invocation_directory] = ACTIONS(244),
    [anon_sym_invocation_directory_native] = ACTIONS(244),
    [anon_sym_justfile] = ACTIONS(244),
    [anon_sym_justfile_dir] = ACTIONS(244),
    [anon_sym_justfile_directory] = ACTIONS(244),
    [anon_sym_source_dir] = ACTIONS(244),
    [anon_sym_source_directory] = ACTIONS(244),
    [anon_sym_source_file] = ACTIONS(244),
    [anon_sym_just_executable] = ACTIONS(244),
    [anon_sym_just_pid] = ACTIONS(244),
    [anon_sym_append] = ACTIONS(244),
    [anon_sym_prepend] = ACTIONS(244),
    [anon_sym_encode_uri_component] = ACTIONS(244),
    [anon_sym_quote] = ACTIONS(244),
    [anon_sym_replace] = ACTIONS(244),
    [anon_sym_replace_regex] = ACTIONS(244),
    [anon_sym_trim] = ACTIONS(244),
    [anon_sym_trim_end] = ACTIONS(244),
    [anon_sym_trim_end_match] = ACTIONS(244),
    [anon_sym_trim_end_matches] = ACTIONS(244),
    [anon_sym_trim_start] = ACTIONS(244),
    [anon_sym_trim_start_match] = ACTIONS(244),
    [anon_sym_trim_start_matches] = ACTIONS(244),
    [anon_sym_capitalize] = ACTIONS(244),
    [anon_sym_kebabcase] = ACTIONS(244),
    [anon_sym_lowercamelcase] = ACTIONS(244),
    [anon_sym_lowercase] = ACTIONS(244),
    [anon_sym_shoutykebabcase] = ACTIONS(244),
    [anon_sym_shoutysnakecase] = ACTIONS(244),
    [anon_sym_snakecase] = ACTIONS(244),
    [anon_sym_titlecase] = ACTIONS(244),
    [anon_sym_uppercamelcase] = ACTIONS(244),
    [anon_sym_uppercase] = ACTIONS(244),
    [anon_sym_absolute_path] = ACTIONS(244),
    [anon_sym_canonicalize] = ACTIONS(244),
    [anon_sym_extension] = ACTIONS(244),
    [anon_sym_file_name] = ACTIONS(244),
    [anon_sym_file_stem] = ACTIONS(244),
    [anon_sym_parent_dir] = ACTIONS(244),
    [anon_sym_parent_directory] = ACTIONS(244),
    [anon_sym_without_extension] = ACTIONS(244),
    [anon_sym_clean] = ACTIONS(244),
    [anon_sym_join] = ACTIONS(244),
    [anon_sym_path_exists] = ACTIONS(244),
    [anon_sym_error] = ACTIONS(244),
    [anon_sym_blake3] = ACTIONS(244),
    [anon_sym_blake3_file] = ACTIONS(244),
    [anon_sym_sha256] = ACTIONS(244),
    [anon_sym_sha256_file] = ACTIONS(244),
    [anon_sym_uuid] = ACTIONS(244),
    [anon_sym_choose] = ACTIONS(244),
    [anon_sym_datetime] = ACTIONS(244),
    [anon_sym_datetime_utc] = ACTIONS(244),
    [anon_sym_semver_matches] = ACTIONS(244),
    [anon_sym_cache_dir] = ACTIONS(244),
    [anon_sym_cache_directory] = ACTIONS(244),
    [anon_sym_config_dir] = ACTIONS(244),
    [anon_sym_config_directory] = ACTIONS(244),
    [anon_sym_config_local_dir] = ACTIONS(244),
    [anon_sym_config_local_directory] = ACTIONS(244),
    [anon_sym_data_dir] = ACTIONS(244),
    [anon_sym_data_directory] = ACTIONS(244),
    [anon_sym_data_local_dir] = ACTIONS(244),
    [anon_sym_data_local_directory] = ACTIONS(244),
    [anon_sym_executable_dir] = ACTIONS(244),
    [anon_sym_executable_directory] = ACTIONS(244),
    [anon_sym_home_dir] = ACTIONS(244),
    [anon_sym_home_directory] = ACTIONS(244),
    [anon_sym_BQUOTE] = ACTIONS(244),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(242),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(41),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(45),
    [anon_sym_SQUOTE] = ACTIONS(47),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [44] = {
    [sym_expression] = STATE(113),
    [sym_value] = STATE(26),
    [sym_builtin_function_call] = STATE(27),
    [sym_function_call] = STATE(27),
    [sym_backtick] = STATE(27),
    [sym_indented_backtick] = STATE(27),
    [sym_string] = STATE(27),
    [sym_indented_normal_string] = STATE(7),
    [sym_normal_string] = STATE(7),
    [sym_indented_raw_string] = STATE(7),
    [sym_raw_string] = STATE(7),
    [sym_comment] = STATE(44),
    [sym_identifier] = ACTIONS(224),
    [anon_sym_shell] = ACTIONS(19),
    [anon_sym_if] = ACTIONS(21),
    [anon_sym_assert] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_arch] = ACTIONS(27),
    [anon_sym_num_cpus] = ACTIONS(27),
    [anon_sym_os] = ACTIONS(27),
    [anon_sym_os_family] = ACTIONS(27),
    [anon_sym_env_var] = ACTIONS(29),
    [anon_sym_env_var_or_default] = ACTIONS(31),
    [anon_sym_env] = ACTIONS(33),
    [anon_sym_is_dependency] = ACTIONS(27),
    [anon_sym_invocation_dir] = ACTIONS(27),
    [anon_sym_invocation_dir_native] = ACTIONS(27),
    [anon_sym_invocation_directory] = ACTIONS(27),
    [anon_sym_invocation_directory_native] = ACTIONS(27),
    [anon_sym_justfile] = ACTIONS(27),
    [anon_sym_justfile_dir] = ACTIONS(27),
    [anon_sym_justfile_directory] = ACTIONS(27),
    [anon_sym_source_dir] = ACTIONS(27),
    [anon_sym_source_directory] = ACTIONS(27),
    [anon_sym_source_file] = ACTIONS(27),
    [anon_sym_just_executable] = ACTIONS(27),
    [anon_sym_just_pid] = ACTIONS(27),
    [anon_sym_append] = ACTIONS(31),
    [anon_sym_prepend] = ACTIONS(31),
    [anon_sym_encode_uri_component] = ACTIONS(29),
    [anon_sym_quote] = ACTIONS(29),
    [anon_sym_replace] = ACTIONS(35),
    [anon_sym_replace_regex] = ACTIONS(35),
    [anon_sym_trim] = ACTIONS(29),
    [anon_sym_trim_end] = ACTIONS(29),
    [anon_sym_trim_end_match] = ACTIONS(31),
    [anon_sym_trim_end_matches] = ACTIONS(31),
    [anon_sym_trim_start] = ACTIONS(29),
    [anon_sym_trim_start_match] = ACTIONS(31),
    [anon_sym_trim_start_matches] = ACTIONS(31),
    [anon_sym_capitalize] = ACTIONS(29),
    [anon_sym_kebabcase] = ACTIONS(29),
    [anon_sym_lowercamelcase] = ACTIONS(29),
    [anon_sym_lowercase] = ACTIONS(29),
    [anon_sym_shoutykebabcase] = ACTIONS(29),
    [anon_sym_shoutysnakecase] = ACTIONS(29),
    [anon_sym_snakecase] = ACTIONS(29),
    [anon_sym_titlecase] = ACTIONS(29),
    [anon_sym_uppercamelcase] = ACTIONS(29),
    [anon_sym_uppercase] = ACTIONS(29),
    [anon_sym_absolute_path] = ACTIONS(29),
    [anon_sym_canonicalize] = ACTIONS(29),
    [anon_sym_extension] = ACTIONS(29),
    [anon_sym_file_name] = ACTIONS(29),
    [anon_sym_file_stem] = ACTIONS(29),
    [anon_sym_parent_dir] = ACTIONS(29),
    [anon_sym_parent_directory] = ACTIONS(29),
    [anon_sym_without_extension] = ACTIONS(29),
    [anon_sym_clean] = ACTIONS(29),
    [anon_sym_join] = ACTIONS(19),
    [anon_sym_path_exists] = ACTIONS(29),
    [anon_sym_error] = ACTIONS(29),
    [anon_sym_blake3] = ACTIONS(29),
    [anon_sym_blake3_file] = ACTIONS(29),
    [anon_sym_sha256] = ACTIONS(29),
    [anon_sym_sha256_file] = ACTIONS(29),
    [anon_sym_uuid] = ACTIONS(27),
    [anon_sym_choose] = ACTIONS(31),
    [anon_sym_datetime] = ACTIONS(29),
    [anon_sym_datetime_utc] = ACTIONS(29),
    [anon_sym_semver_matches] = ACTIONS(31),
    [anon_sym_cache_dir] = ACTIONS(27),
    [anon_sym_cache_directory] = ACTIONS(27),
    [anon_sym_config_dir] = ACTIONS(27),
    [anon_sym_config_directory] = ACTIONS(27),
    [anon_sym_config_local_dir] = ACTIONS(27),
    [anon_sym_config_local_directory] = ACTIONS(27),
    [anon_sym_data_dir] = ACTIONS(27),
    [anon_sym_data_directory] = ACTIONS(27),
    [anon_sym_data_local_dir] = ACTIONS(27),
    [anon_sym_data_local_directory] = ACTIONS(27),
    [anon_sym_executable_dir] = ACTIONS(27),
    [anon_sym_executable_directory] = ACTIONS(27),
    [anon_sym_home_dir] = ACTIONS(27),
    [anon_sym_home_directory] = ACTIONS(27),
    [anon_sym_BQUOTE] = ACTIONS(37),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(39),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(41),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(45),
    [anon_sym_SQUOTE] = ACTIONS(47),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [45] = {
    [sym_expression] = STATE(65),
    [sym_value] = STATE(26),
    [sym_builtin_function_call] = STATE(27),
    [sym_function_call] = STATE(27),
    [sym_backtick] = STATE(27),
    [sym_indented_backtick] = STATE(27),
    [sym_string] = STATE(27),
    [sym_indented_normal_string] = STATE(7),
    [sym_normal_string] = STATE(7),
    [sym_indented_raw_string] = STATE(7),
    [sym_raw_string] = STATE(7),
    [sym_comment] = STATE(45),
    [sym_identifier] = ACTIONS(224),
    [anon_sym_shell] = ACTIONS(19),
    [anon_sym_if] = ACTIONS(21),
    [anon_sym_assert] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_arch] = ACTIONS(27),
    [anon_sym_num_cpus] = ACTIONS(27),
    [anon_sym_os] = ACTIONS(27),
    [anon_sym_os_family] = ACTIONS(27),
    [anon_sym_env_var] = ACTIONS(29),
    [anon_sym_env_var_or_default] = ACTIONS(31),
    [anon_sym_env] = ACTIONS(33),
    [anon_sym_is_dependency] = ACTIONS(27),
    [anon_sym_invocation_dir] = ACTIONS(27),
    [anon_sym_invocation_dir_native] = ACTIONS(27),
    [anon_sym_invocation_directory] = ACTIONS(27),
    [anon_sym_invocation_directory_native] = ACTIONS(27),
    [anon_sym_justfile] = ACTIONS(27),
    [anon_sym_justfile_dir] = ACTIONS(27),
    [anon_sym_justfile_directory] = ACTIONS(27),
    [anon_sym_source_dir] = ACTIONS(27),
    [anon_sym_source_directory] = ACTIONS(27),
    [anon_sym_source_file] = ACTIONS(27),
    [anon_sym_just_executable] = ACTIONS(27),
    [anon_sym_just_pid] = ACTIONS(27),
    [anon_sym_append] = ACTIONS(31),
    [anon_sym_prepend] = ACTIONS(31),
    [anon_sym_encode_uri_component] = ACTIONS(29),
    [anon_sym_quote] = ACTIONS(29),
    [anon_sym_replace] = ACTIONS(35),
    [anon_sym_replace_regex] = ACTIONS(35),
    [anon_sym_trim] = ACTIONS(29),
    [anon_sym_trim_end] = ACTIONS(29),
    [anon_sym_trim_end_match] = ACTIONS(31),
    [anon_sym_trim_end_matches] = ACTIONS(31),
    [anon_sym_trim_start] = ACTIONS(29),
    [anon_sym_trim_start_match] = ACTIONS(31),
    [anon_sym_trim_start_matches] = ACTIONS(31),
    [anon_sym_capitalize] = ACTIONS(29),
    [anon_sym_kebabcase] = ACTIONS(29),
    [anon_sym_lowercamelcase] = ACTIONS(29),
    [anon_sym_lowercase] = ACTIONS(29),
    [anon_sym_shoutykebabcase] = ACTIONS(29),
    [anon_sym_shoutysnakecase] = ACTIONS(29),
    [anon_sym_snakecase] = ACTIONS(29),
    [anon_sym_titlecase] = ACTIONS(29),
    [anon_sym_uppercamelcase] = ACTIONS(29),
    [anon_sym_uppercase] = ACTIONS(29),
    [anon_sym_absolute_path] = ACTIONS(29),
    [anon_sym_canonicalize] = ACTIONS(29),
    [anon_sym_extension] = ACTIONS(29),
    [anon_sym_file_name] = ACTIONS(29),
    [anon_sym_file_stem] = ACTIONS(29),
    [anon_sym_parent_dir] = ACTIONS(29),
    [anon_sym_parent_directory] = ACTIONS(29),
    [anon_sym_without_extension] = ACTIONS(29),
    [anon_sym_clean] = ACTIONS(29),
    [anon_sym_join] = ACTIONS(19),
    [anon_sym_path_exists] = ACTIONS(29),
    [anon_sym_error] = ACTIONS(29),
    [anon_sym_blake3] = ACTIONS(29),
    [anon_sym_blake3_file] = ACTIONS(29),
    [anon_sym_sha256] = ACTIONS(29),
    [anon_sym_sha256_file] = ACTIONS(29),
    [anon_sym_uuid] = ACTIONS(27),
    [anon_sym_choose] = ACTIONS(31),
    [anon_sym_datetime] = ACTIONS(29),
    [anon_sym_datetime_utc] = ACTIONS(29),
    [anon_sym_semver_matches] = ACTIONS(31),
    [anon_sym_cache_dir] = ACTIONS(27),
    [anon_sym_cache_directory] = ACTIONS(27),
    [anon_sym_config_dir] = ACTIONS(27),
    [anon_sym_config_directory] = ACTIONS(27),
    [anon_sym_config_local_dir] = ACTIONS(27),
    [anon_sym_config_local_directory] = ACTIONS(27),
    [anon_sym_data_dir] = ACTIONS(27),
    [anon_sym_data_directory] = ACTIONS(27),
    [anon_sym_data_local_dir] = ACTIONS(27),
    [anon_sym_data_local_directory] = ACTIONS(27),
    [anon_sym_executable_dir] = ACTIONS(27),
    [anon_sym_executable_directory] = ACTIONS(27),
    [anon_sym_home_dir] = ACTIONS(27),
    [anon_sym_home_directory] = ACTIONS(27),
    [anon_sym_BQUOTE] = ACTIONS(37),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(39),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(41),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(45),
    [anon_sym_SQUOTE] = ACTIONS(47),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [46] = {
    [sym_expression] = STATE(147),
    [sym_value] = STATE(26),
    [sym_builtin_function_call] = STATE(27),
    [sym_function_call] = STATE(27),
    [sym_backtick] = STATE(27),
    [sym_indented_backtick] = STATE(27),
    [sym_string] = STATE(27),
    [sym_indented_normal_string] = STATE(7),
    [sym_normal_string] = STATE(7),
    [sym_indented_raw_string] = STATE(7),
    [sym_raw_string] = STATE(7),
    [sym_comment] = STATE(46),
    [sym_identifier] = ACTIONS(224),
    [anon_sym_shell] = ACTIONS(19),
    [anon_sym_if] = ACTIONS(21),
    [anon_sym_assert] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_arch] = ACTIONS(27),
    [anon_sym_num_cpus] = ACTIONS(27),
    [anon_sym_os] = ACTIONS(27),
    [anon_sym_os_family] = ACTIONS(27),
    [anon_sym_env_var] = ACTIONS(29),
    [anon_sym_env_var_or_default] = ACTIONS(31),
    [anon_sym_env] = ACTIONS(33),
    [anon_sym_is_dependency] = ACTIONS(27),
    [anon_sym_invocation_dir] = ACTIONS(27),
    [anon_sym_invocation_dir_native] = ACTIONS(27),
    [anon_sym_invocation_directory] = ACTIONS(27),
    [anon_sym_invocation_directory_native] = ACTIONS(27),
    [anon_sym_justfile] = ACTIONS(27),
    [anon_sym_justfile_dir] = ACTIONS(27),
    [anon_sym_justfile_directory] = ACTIONS(27),
    [anon_sym_source_dir] = ACTIONS(27),
    [anon_sym_source_directory] = ACTIONS(27),
    [anon_sym_source_file] = ACTIONS(27),
    [anon_sym_just_executable] = ACTIONS(27),
    [anon_sym_just_pid] = ACTIONS(27),
    [anon_sym_append] = ACTIONS(31),
    [anon_sym_prepend] = ACTIONS(31),
    [anon_sym_encode_uri_component] = ACTIONS(29),
    [anon_sym_quote] = ACTIONS(29),
    [anon_sym_replace] = ACTIONS(35),
    [anon_sym_replace_regex] = ACTIONS(35),
    [anon_sym_trim] = ACTIONS(29),
    [anon_sym_trim_end] = ACTIONS(29),
    [anon_sym_trim_end_match] = ACTIONS(31),
    [anon_sym_trim_end_matches] = ACTIONS(31),
    [anon_sym_trim_start] = ACTIONS(29),
    [anon_sym_trim_start_match] = ACTIONS(31),
    [anon_sym_trim_start_matches] = ACTIONS(31),
    [anon_sym_capitalize] = ACTIONS(29),
    [anon_sym_kebabcase] = ACTIONS(29),
    [anon_sym_lowercamelcase] = ACTIONS(29),
    [anon_sym_lowercase] = ACTIONS(29),
    [anon_sym_shoutykebabcase] = ACTIONS(29),
    [anon_sym_shoutysnakecase] = ACTIONS(29),
    [anon_sym_snakecase] = ACTIONS(29),
    [anon_sym_titlecase] = ACTIONS(29),
    [anon_sym_uppercamelcase] = ACTIONS(29),
    [anon_sym_uppercase] = ACTIONS(29),
    [anon_sym_absolute_path] = ACTIONS(29),
    [anon_sym_canonicalize] = ACTIONS(29),
    [anon_sym_extension] = ACTIONS(29),
    [anon_sym_file_name] = ACTIONS(29),
    [anon_sym_file_stem] = ACTIONS(29),
    [anon_sym_parent_dir] = ACTIONS(29),
    [anon_sym_parent_directory] = ACTIONS(29),
    [anon_sym_without_extension] = ACTIONS(29),
    [anon_sym_clean] = ACTIONS(29),
    [anon_sym_join] = ACTIONS(19),
    [anon_sym_path_exists] = ACTIONS(29),
    [anon_sym_error] = ACTIONS(29),
    [anon_sym_blake3] = ACTIONS(29),
    [anon_sym_blake3_file] = ACTIONS(29),
    [anon_sym_sha256] = ACTIONS(29),
    [anon_sym_sha256_file] = ACTIONS(29),
    [anon_sym_uuid] = ACTIONS(27),
    [anon_sym_choose] = ACTIONS(31),
    [anon_sym_datetime] = ACTIONS(29),
    [anon_sym_datetime_utc] = ACTIONS(29),
    [anon_sym_semver_matches] = ACTIONS(31),
    [anon_sym_cache_dir] = ACTIONS(27),
    [anon_sym_cache_directory] = ACTIONS(27),
    [anon_sym_config_dir] = ACTIONS(27),
    [anon_sym_config_directory] = ACTIONS(27),
    [anon_sym_config_local_dir] = ACTIONS(27),
    [anon_sym_config_local_directory] = ACTIONS(27),
    [anon_sym_data_dir] = ACTIONS(27),
    [anon_sym_data_directory] = ACTIONS(27),
    [anon_sym_data_local_dir] = ACTIONS(27),
    [anon_sym_data_local_directory] = ACTIONS(27),
    [anon_sym_executable_dir] = ACTIONS(27),
    [anon_sym_executable_directory] = ACTIONS(27),
    [anon_sym_home_dir] = ACTIONS(27),
    [anon_sym_home_directory] = ACTIONS(27),
    [anon_sym_BQUOTE] = ACTIONS(37),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(39),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(41),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(45),
    [anon_sym_SQUOTE] = ACTIONS(47),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [47] = {
    [sym_expression] = STATE(32),
    [sym_value] = STATE(26),
    [sym_builtin_function_call] = STATE(27),
    [sym_function_call] = STATE(27),
    [sym_backtick] = STATE(27),
    [sym_indented_backtick] = STATE(27),
    [sym_string] = STATE(27),
    [sym_indented_normal_string] = STATE(7),
    [sym_normal_string] = STATE(7),
    [sym_indented_raw_string] = STATE(7),
    [sym_raw_string] = STATE(7),
    [sym_comment] = STATE(47),
    [sym_identifier] = ACTIONS(224),
    [anon_sym_shell] = ACTIONS(19),
    [anon_sym_if] = ACTIONS(21),
    [anon_sym_assert] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_arch] = ACTIONS(27),
    [anon_sym_num_cpus] = ACTIONS(27),
    [anon_sym_os] = ACTIONS(27),
    [anon_sym_os_family] = ACTIONS(27),
    [anon_sym_env_var] = ACTIONS(29),
    [anon_sym_env_var_or_default] = ACTIONS(31),
    [anon_sym_env] = ACTIONS(33),
    [anon_sym_is_dependency] = ACTIONS(27),
    [anon_sym_invocation_dir] = ACTIONS(27),
    [anon_sym_invocation_dir_native] = ACTIONS(27),
    [anon_sym_invocation_directory] = ACTIONS(27),
    [anon_sym_invocation_directory_native] = ACTIONS(27),
    [anon_sym_justfile] = ACTIONS(27),
    [anon_sym_justfile_dir] = ACTIONS(27),
    [anon_sym_justfile_directory] = ACTIONS(27),
    [anon_sym_source_dir] = ACTIONS(27),
    [anon_sym_source_directory] = ACTIONS(27),
    [anon_sym_source_file] = ACTIONS(27),
    [anon_sym_just_executable] = ACTIONS(27),
    [anon_sym_just_pid] = ACTIONS(27),
    [anon_sym_append] = ACTIONS(31),
    [anon_sym_prepend] = ACTIONS(31),
    [anon_sym_encode_uri_component] = ACTIONS(29),
    [anon_sym_quote] = ACTIONS(29),
    [anon_sym_replace] = ACTIONS(35),
    [anon_sym_replace_regex] = ACTIONS(35),
    [anon_sym_trim] = ACTIONS(29),
    [anon_sym_trim_end] = ACTIONS(29),
    [anon_sym_trim_end_match] = ACTIONS(31),
    [anon_sym_trim_end_matches] = ACTIONS(31),
    [anon_sym_trim_start] = ACTIONS(29),
    [anon_sym_trim_start_match] = ACTIONS(31),
    [anon_sym_trim_start_matches] = ACTIONS(31),
    [anon_sym_capitalize] = ACTIONS(29),
    [anon_sym_kebabcase] = ACTIONS(29),
    [anon_sym_lowercamelcase] = ACTIONS(29),
    [anon_sym_lowercase] = ACTIONS(29),
    [anon_sym_shoutykebabcase] = ACTIONS(29),
    [anon_sym_shoutysnakecase] = ACTIONS(29),
    [anon_sym_snakecase] = ACTIONS(29),
    [anon_sym_titlecase] = ACTIONS(29),
    [anon_sym_uppercamelcase] = ACTIONS(29),
    [anon_sym_uppercase] = ACTIONS(29),
    [anon_sym_absolute_path] = ACTIONS(29),
    [anon_sym_canonicalize] = ACTIONS(29),
    [anon_sym_extension] = ACTIONS(29),
    [anon_sym_file_name] = ACTIONS(29),
    [anon_sym_file_stem] = ACTIONS(29),
    [anon_sym_parent_dir] = ACTIONS(29),
    [anon_sym_parent_directory] = ACTIONS(29),
    [anon_sym_without_extension] = ACTIONS(29),
    [anon_sym_clean] = ACTIONS(29),
    [anon_sym_join] = ACTIONS(19),
    [anon_sym_path_exists] = ACTIONS(29),
    [anon_sym_error] = ACTIONS(29),
    [anon_sym_blake3] = ACTIONS(29),
    [anon_sym_blake3_file] = ACTIONS(29),
    [anon_sym_sha256] = ACTIONS(29),
    [anon_sym_sha256_file] = ACTIONS(29),
    [anon_sym_uuid] = ACTIONS(27),
    [anon_sym_choose] = ACTIONS(31),
    [anon_sym_datetime] = ACTIONS(29),
    [anon_sym_datetime_utc] = ACTIONS(29),
    [anon_sym_semver_matches] = ACTIONS(31),
    [anon_sym_cache_dir] = ACTIONS(27),
    [anon_sym_cache_directory] = ACTIONS(27),
    [anon_sym_config_dir] = ACTIONS(27),
    [anon_sym_config_directory] = ACTIONS(27),
    [anon_sym_config_local_dir] = ACTIONS(27),
    [anon_sym_config_local_directory] = ACTIONS(27),
    [anon_sym_data_dir] = ACTIONS(27),
    [anon_sym_data_directory] = ACTIONS(27),
    [anon_sym_data_local_dir] = ACTIONS(27),
    [anon_sym_data_local_directory] = ACTIONS(27),
    [anon_sym_executable_dir] = ACTIONS(27),
    [anon_sym_executable_directory] = ACTIONS(27),
    [anon_sym_home_dir] = ACTIONS(27),
    [anon_sym_home_directory] = ACTIONS(27),
    [anon_sym_BQUOTE] = ACTIONS(37),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(39),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(41),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(45),
    [anon_sym_SQUOTE] = ACTIONS(47),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [48] = {
    [sym_expression] = STATE(67),
    [sym_value] = STATE(26),
    [sym_builtin_function_call] = STATE(27),
    [sym_function_call] = STATE(27),
    [sym_backtick] = STATE(27),
    [sym_indented_backtick] = STATE(27),
    [sym_string] = STATE(27),
    [sym_indented_normal_string] = STATE(7),
    [sym_normal_string] = STATE(7),
    [sym_indented_raw_string] = STATE(7),
    [sym_raw_string] = STATE(7),
    [sym_comment] = STATE(48),
    [sym_identifier] = ACTIONS(224),
    [anon_sym_shell] = ACTIONS(19),
    [anon_sym_if] = ACTIONS(21),
    [anon_sym_assert] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_arch] = ACTIONS(27),
    [anon_sym_num_cpus] = ACTIONS(27),
    [anon_sym_os] = ACTIONS(27),
    [anon_sym_os_family] = ACTIONS(27),
    [anon_sym_env_var] = ACTIONS(29),
    [anon_sym_env_var_or_default] = ACTIONS(31),
    [anon_sym_env] = ACTIONS(33),
    [anon_sym_is_dependency] = ACTIONS(27),
    [anon_sym_invocation_dir] = ACTIONS(27),
    [anon_sym_invocation_dir_native] = ACTIONS(27),
    [anon_sym_invocation_directory] = ACTIONS(27),
    [anon_sym_invocation_directory_native] = ACTIONS(27),
    [anon_sym_justfile] = ACTIONS(27),
    [anon_sym_justfile_dir] = ACTIONS(27),
    [anon_sym_justfile_directory] = ACTIONS(27),
    [anon_sym_source_dir] = ACTIONS(27),
    [anon_sym_source_directory] = ACTIONS(27),
    [anon_sym_source_file] = ACTIONS(27),
    [anon_sym_just_executable] = ACTIONS(27),
    [anon_sym_just_pid] = ACTIONS(27),
    [anon_sym_append] = ACTIONS(31),
    [anon_sym_prepend] = ACTIONS(31),
    [anon_sym_encode_uri_component] = ACTIONS(29),
    [anon_sym_quote] = ACTIONS(29),
    [anon_sym_replace] = ACTIONS(35),
    [anon_sym_replace_regex] = ACTIONS(35),
    [anon_sym_trim] = ACTIONS(29),
    [anon_sym_trim_end] = ACTIONS(29),
    [anon_sym_trim_end_match] = ACTIONS(31),
    [anon_sym_trim_end_matches] = ACTIONS(31),
    [anon_sym_trim_start] = ACTIONS(29),
    [anon_sym_trim_start_match] = ACTIONS(31),
    [anon_sym_trim_start_matches] = ACTIONS(31),
    [anon_sym_capitalize] = ACTIONS(29),
    [anon_sym_kebabcase] = ACTIONS(29),
    [anon_sym_lowercamelcase] = ACTIONS(29),
    [anon_sym_lowercase] = ACTIONS(29),
    [anon_sym_shoutykebabcase] = ACTIONS(29),
    [anon_sym_shoutysnakecase] = ACTIONS(29),
    [anon_sym_snakecase] = ACTIONS(29),
    [anon_sym_titlecase] = ACTIONS(29),
    [anon_sym_uppercamelcase] = ACTIONS(29),
    [anon_sym_uppercase] = ACTIONS(29),
    [anon_sym_absolute_path] = ACTIONS(29),
    [anon_sym_canonicalize] = ACTIONS(29),
    [anon_sym_extension] = ACTIONS(29),
    [anon_sym_file_name] = ACTIONS(29),
    [anon_sym_file_stem] = ACTIONS(29),
    [anon_sym_parent_dir] = ACTIONS(29),
    [anon_sym_parent_directory] = ACTIONS(29),
    [anon_sym_without_extension] = ACTIONS(29),
    [anon_sym_clean] = ACTIONS(29),
    [anon_sym_join] = ACTIONS(19),
    [anon_sym_path_exists] = ACTIONS(29),
    [anon_sym_error] = ACTIONS(29),
    [anon_sym_blake3] = ACTIONS(29),
    [anon_sym_blake3_file] = ACTIONS(29),
    [anon_sym_sha256] = ACTIONS(29),
    [anon_sym_sha256_file] = ACTIONS(29),
    [anon_sym_uuid] = ACTIONS(27),
    [anon_sym_choose] = ACTIONS(31),
    [anon_sym_datetime] = ACTIONS(29),
    [anon_sym_datetime_utc] = ACTIONS(29),
    [anon_sym_semver_matches] = ACTIONS(31),
    [anon_sym_cache_dir] = ACTIONS(27),
    [anon_sym_cache_directory] = ACTIONS(27),
    [anon_sym_config_dir] = ACTIONS(27),
    [anon_sym_config_directory] = ACTIONS(27),
    [anon_sym_config_local_dir] = ACTIONS(27),
    [anon_sym_config_local_directory] = ACTIONS(27),
    [anon_sym_data_dir] = ACTIONS(27),
    [anon_sym_data_directory] = ACTIONS(27),
    [anon_sym_data_local_dir] = ACTIONS(27),
    [anon_sym_data_local_directory] = ACTIONS(27),
    [anon_sym_executable_dir] = ACTIONS(27),
    [anon_sym_executable_directory] = ACTIONS(27),
    [anon_sym_home_dir] = ACTIONS(27),
    [anon_sym_home_directory] = ACTIONS(27),
    [anon_sym_BQUOTE] = ACTIONS(37),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(39),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(41),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(45),
    [anon_sym_SQUOTE] = ACTIONS(47),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [49] = {
    [sym_expression] = STATE(107),
    [sym_value] = STATE(26),
    [sym_builtin_function_call] = STATE(27),
    [sym_function_call] = STATE(27),
    [sym_backtick] = STATE(27),
    [sym_indented_backtick] = STATE(27),
    [sym_string] = STATE(27),
    [sym_indented_normal_string] = STATE(7),
    [sym_normal_string] = STATE(7),
    [sym_indented_raw_string] = STATE(7),
    [sym_raw_string] = STATE(7),
    [sym_comment] = STATE(49),
    [sym_identifier] = ACTIONS(224),
    [anon_sym_shell] = ACTIONS(19),
    [anon_sym_if] = ACTIONS(21),
    [anon_sym_assert] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_arch] = ACTIONS(27),
    [anon_sym_num_cpus] = ACTIONS(27),
    [anon_sym_os] = ACTIONS(27),
    [anon_sym_os_family] = ACTIONS(27),
    [anon_sym_env_var] = ACTIONS(29),
    [anon_sym_env_var_or_default] = ACTIONS(31),
    [anon_sym_env] = ACTIONS(33),
    [anon_sym_is_dependency] = ACTIONS(27),
    [anon_sym_invocation_dir] = ACTIONS(27),
    [anon_sym_invocation_dir_native] = ACTIONS(27),
    [anon_sym_invocation_directory] = ACTIONS(27),
    [anon_sym_invocation_directory_native] = ACTIONS(27),
    [anon_sym_justfile] = ACTIONS(27),
    [anon_sym_justfile_dir] = ACTIONS(27),
    [anon_sym_justfile_directory] = ACTIONS(27),
    [anon_sym_source_dir] = ACTIONS(27),
    [anon_sym_source_directory] = ACTIONS(27),
    [anon_sym_source_file] = ACTIONS(27),
    [anon_sym_just_executable] = ACTIONS(27),
    [anon_sym_just_pid] = ACTIONS(27),
    [anon_sym_append] = ACTIONS(31),
    [anon_sym_prepend] = ACTIONS(31),
    [anon_sym_encode_uri_component] = ACTIONS(29),
    [anon_sym_quote] = ACTIONS(29),
    [anon_sym_replace] = ACTIONS(35),
    [anon_sym_replace_regex] = ACTIONS(35),
    [anon_sym_trim] = ACTIONS(29),
    [anon_sym_trim_end] = ACTIONS(29),
    [anon_sym_trim_end_match] = ACTIONS(31),
    [anon_sym_trim_end_matches] = ACTIONS(31),
    [anon_sym_trim_start] = ACTIONS(29),
    [anon_sym_trim_start_match] = ACTIONS(31),
    [anon_sym_trim_start_matches] = ACTIONS(31),
    [anon_sym_capitalize] = ACTIONS(29),
    [anon_sym_kebabcase] = ACTIONS(29),
    [anon_sym_lowercamelcase] = ACTIONS(29),
    [anon_sym_lowercase] = ACTIONS(29),
    [anon_sym_shoutykebabcase] = ACTIONS(29),
    [anon_sym_shoutysnakecase] = ACTIONS(29),
    [anon_sym_snakecase] = ACTIONS(29),
    [anon_sym_titlecase] = ACTIONS(29),
    [anon_sym_uppercamelcase] = ACTIONS(29),
    [anon_sym_uppercase] = ACTIONS(29),
    [anon_sym_absolute_path] = ACTIONS(29),
    [anon_sym_canonicalize] = ACTIONS(29),
    [anon_sym_extension] = ACTIONS(29),
    [anon_sym_file_name] = ACTIONS(29),
    [anon_sym_file_stem] = ACTIONS(29),
    [anon_sym_parent_dir] = ACTIONS(29),
    [anon_sym_parent_directory] = ACTIONS(29),
    [anon_sym_without_extension] = ACTIONS(29),
    [anon_sym_clean] = ACTIONS(29),
    [anon_sym_join] = ACTIONS(19),
    [anon_sym_path_exists] = ACTIONS(29),
    [anon_sym_error] = ACTIONS(29),
    [anon_sym_blake3] = ACTIONS(29),
    [anon_sym_blake3_file] = ACTIONS(29),
    [anon_sym_sha256] = ACTIONS(29),
    [anon_sym_sha256_file] = ACTIONS(29),
    [anon_sym_uuid] = ACTIONS(27),
    [anon_sym_choose] = ACTIONS(31),
    [anon_sym_datetime] = ACTIONS(29),
    [anon_sym_datetime_utc] = ACTIONS(29),
    [anon_sym_semver_matches] = ACTIONS(31),
    [anon_sym_cache_dir] = ACTIONS(27),
    [anon_sym_cache_directory] = ACTIONS(27),
    [anon_sym_config_dir] = ACTIONS(27),
    [anon_sym_config_directory] = ACTIONS(27),
    [anon_sym_config_local_dir] = ACTIONS(27),
    [anon_sym_config_local_directory] = ACTIONS(27),
    [anon_sym_data_dir] = ACTIONS(27),
    [anon_sym_data_directory] = ACTIONS(27),
    [anon_sym_data_local_dir] = ACTIONS(27),
    [anon_sym_data_local_directory] = ACTIONS(27),
    [anon_sym_executable_dir] = ACTIONS(27),
    [anon_sym_executable_directory] = ACTIONS(27),
    [anon_sym_home_dir] = ACTIONS(27),
    [anon_sym_home_directory] = ACTIONS(27),
    [anon_sym_BQUOTE] = ACTIONS(37),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(39),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(41),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(45),
    [anon_sym_SQUOTE] = ACTIONS(47),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [50] = {
    [sym_expression] = STATE(109),
    [sym_value] = STATE(26),
    [sym_builtin_function_call] = STATE(27),
    [sym_function_call] = STATE(27),
    [sym_backtick] = STATE(27),
    [sym_indented_backtick] = STATE(27),
    [sym_string] = STATE(27),
    [sym_indented_normal_string] = STATE(7),
    [sym_normal_string] = STATE(7),
    [sym_indented_raw_string] = STATE(7),
    [sym_raw_string] = STATE(7),
    [sym_comment] = STATE(50),
    [sym_identifier] = ACTIONS(224),
    [anon_sym_shell] = ACTIONS(19),
    [anon_sym_if] = ACTIONS(21),
    [anon_sym_assert] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_arch] = ACTIONS(27),
    [anon_sym_num_cpus] = ACTIONS(27),
    [anon_sym_os] = ACTIONS(27),
    [anon_sym_os_family] = ACTIONS(27),
    [anon_sym_env_var] = ACTIONS(29),
    [anon_sym_env_var_or_default] = ACTIONS(31),
    [anon_sym_env] = ACTIONS(33),
    [anon_sym_is_dependency] = ACTIONS(27),
    [anon_sym_invocation_dir] = ACTIONS(27),
    [anon_sym_invocation_dir_native] = ACTIONS(27),
    [anon_sym_invocation_directory] = ACTIONS(27),
    [anon_sym_invocation_directory_native] = ACTIONS(27),
    [anon_sym_justfile] = ACTIONS(27),
    [anon_sym_justfile_dir] = ACTIONS(27),
    [anon_sym_justfile_directory] = ACTIONS(27),
    [anon_sym_source_dir] = ACTIONS(27),
    [anon_sym_source_directory] = ACTIONS(27),
    [anon_sym_source_file] = ACTIONS(27),
    [anon_sym_just_executable] = ACTIONS(27),
    [anon_sym_just_pid] = ACTIONS(27),
    [anon_sym_append] = ACTIONS(31),
    [anon_sym_prepend] = ACTIONS(31),
    [anon_sym_encode_uri_component] = ACTIONS(29),
    [anon_sym_quote] = ACTIONS(29),
    [anon_sym_replace] = ACTIONS(35),
    [anon_sym_replace_regex] = ACTIONS(35),
    [anon_sym_trim] = ACTIONS(29),
    [anon_sym_trim_end] = ACTIONS(29),
    [anon_sym_trim_end_match] = ACTIONS(31),
    [anon_sym_trim_end_matches] = ACTIONS(31),
    [anon_sym_trim_start] = ACTIONS(29),
    [anon_sym_trim_start_match] = ACTIONS(31),
    [anon_sym_trim_start_matches] = ACTIONS(31),
    [anon_sym_capitalize] = ACTIONS(29),
    [anon_sym_kebabcase] = ACTIONS(29),
    [anon_sym_lowercamelcase] = ACTIONS(29),
    [anon_sym_lowercase] = ACTIONS(29),
    [anon_sym_shoutykebabcase] = ACTIONS(29),
    [anon_sym_shoutysnakecase] = ACTIONS(29),
    [anon_sym_snakecase] = ACTIONS(29),
    [anon_sym_titlecase] = ACTIONS(29),
    [anon_sym_uppercamelcase] = ACTIONS(29),
    [anon_sym_uppercase] = ACTIONS(29),
    [anon_sym_absolute_path] = ACTIONS(29),
    [anon_sym_canonicalize] = ACTIONS(29),
    [anon_sym_extension] = ACTIONS(29),
    [anon_sym_file_name] = ACTIONS(29),
    [anon_sym_file_stem] = ACTIONS(29),
    [anon_sym_parent_dir] = ACTIONS(29),
    [anon_sym_parent_directory] = ACTIONS(29),
    [anon_sym_without_extension] = ACTIONS(29),
    [anon_sym_clean] = ACTIONS(29),
    [anon_sym_join] = ACTIONS(19),
    [anon_sym_path_exists] = ACTIONS(29),
    [anon_sym_error] = ACTIONS(29),
    [anon_sym_blake3] = ACTIONS(29),
    [anon_sym_blake3_file] = ACTIONS(29),
    [anon_sym_sha256] = ACTIONS(29),
    [anon_sym_sha256_file] = ACTIONS(29),
    [anon_sym_uuid] = ACTIONS(27),
    [anon_sym_choose] = ACTIONS(31),
    [anon_sym_datetime] = ACTIONS(29),
    [anon_sym_datetime_utc] = ACTIONS(29),
    [anon_sym_semver_matches] = ACTIONS(31),
    [anon_sym_cache_dir] = ACTIONS(27),
    [anon_sym_cache_directory] = ACTIONS(27),
    [anon_sym_config_dir] = ACTIONS(27),
    [anon_sym_config_directory] = ACTIONS(27),
    [anon_sym_config_local_dir] = ACTIONS(27),
    [anon_sym_config_local_directory] = ACTIONS(27),
    [anon_sym_data_dir] = ACTIONS(27),
    [anon_sym_data_directory] = ACTIONS(27),
    [anon_sym_data_local_dir] = ACTIONS(27),
    [anon_sym_data_local_directory] = ACTIONS(27),
    [anon_sym_executable_dir] = ACTIONS(27),
    [anon_sym_executable_directory] = ACTIONS(27),
    [anon_sym_home_dir] = ACTIONS(27),
    [anon_sym_home_directory] = ACTIONS(27),
    [anon_sym_BQUOTE] = ACTIONS(37),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(39),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(41),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(45),
    [anon_sym_SQUOTE] = ACTIONS(47),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [51] = {
    [sym_expression] = STATE(128),
    [sym_value] = STATE(26),
    [sym_builtin_function_call] = STATE(27),
    [sym_function_call] = STATE(27),
    [sym_backtick] = STATE(27),
    [sym_indented_backtick] = STATE(27),
    [sym_string] = STATE(27),
    [sym_indented_normal_string] = STATE(7),
    [sym_normal_string] = STATE(7),
    [sym_indented_raw_string] = STATE(7),
    [sym_raw_string] = STATE(7),
    [sym_comment] = STATE(51),
    [sym_identifier] = ACTIONS(224),
    [anon_sym_shell] = ACTIONS(19),
    [anon_sym_if] = ACTIONS(21),
    [anon_sym_assert] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_arch] = ACTIONS(27),
    [anon_sym_num_cpus] = ACTIONS(27),
    [anon_sym_os] = ACTIONS(27),
    [anon_sym_os_family] = ACTIONS(27),
    [anon_sym_env_var] = ACTIONS(29),
    [anon_sym_env_var_or_default] = ACTIONS(31),
    [anon_sym_env] = ACTIONS(33),
    [anon_sym_is_dependency] = ACTIONS(27),
    [anon_sym_invocation_dir] = ACTIONS(27),
    [anon_sym_invocation_dir_native] = ACTIONS(27),
    [anon_sym_invocation_directory] = ACTIONS(27),
    [anon_sym_invocation_directory_native] = ACTIONS(27),
    [anon_sym_justfile] = ACTIONS(27),
    [anon_sym_justfile_dir] = ACTIONS(27),
    [anon_sym_justfile_directory] = ACTIONS(27),
    [anon_sym_source_dir] = ACTIONS(27),
    [anon_sym_source_directory] = ACTIONS(27),
    [anon_sym_source_file] = ACTIONS(27),
    [anon_sym_just_executable] = ACTIONS(27),
    [anon_sym_just_pid] = ACTIONS(27),
    [anon_sym_append] = ACTIONS(31),
    [anon_sym_prepend] = ACTIONS(31),
    [anon_sym_encode_uri_component] = ACTIONS(29),
    [anon_sym_quote] = ACTIONS(29),
    [anon_sym_replace] = ACTIONS(35),
    [anon_sym_replace_regex] = ACTIONS(35),
    [anon_sym_trim] = ACTIONS(29),
    [anon_sym_trim_end] = ACTIONS(29),
    [anon_sym_trim_end_match] = ACTIONS(31),
    [anon_sym_trim_end_matches] = ACTIONS(31),
    [anon_sym_trim_start] = ACTIONS(29),
    [anon_sym_trim_start_match] = ACTIONS(31),
    [anon_sym_trim_start_matches] = ACTIONS(31),
    [anon_sym_capitalize] = ACTIONS(29),
    [anon_sym_kebabcase] = ACTIONS(29),
    [anon_sym_lowercamelcase] = ACTIONS(29),
    [anon_sym_lowercase] = ACTIONS(29),
    [anon_sym_shoutykebabcase] = ACTIONS(29),
    [anon_sym_shoutysnakecase] = ACTIONS(29),
    [anon_sym_snakecase] = ACTIONS(29),
    [anon_sym_titlecase] = ACTIONS(29),
    [anon_sym_uppercamelcase] = ACTIONS(29),
    [anon_sym_uppercase] = ACTIONS(29),
    [anon_sym_absolute_path] = ACTIONS(29),
    [anon_sym_canonicalize] = ACTIONS(29),
    [anon_sym_extension] = ACTIONS(29),
    [anon_sym_file_name] = ACTIONS(29),
    [anon_sym_file_stem] = ACTIONS(29),
    [anon_sym_parent_dir] = ACTIONS(29),
    [anon_sym_parent_directory] = ACTIONS(29),
    [anon_sym_without_extension] = ACTIONS(29),
    [anon_sym_clean] = ACTIONS(29),
    [anon_sym_join] = ACTIONS(19),
    [anon_sym_path_exists] = ACTIONS(29),
    [anon_sym_error] = ACTIONS(29),
    [anon_sym_blake3] = ACTIONS(29),
    [anon_sym_blake3_file] = ACTIONS(29),
    [anon_sym_sha256] = ACTIONS(29),
    [anon_sym_sha256_file] = ACTIONS(29),
    [anon_sym_uuid] = ACTIONS(27),
    [anon_sym_choose] = ACTIONS(31),
    [anon_sym_datetime] = ACTIONS(29),
    [anon_sym_datetime_utc] = ACTIONS(29),
    [anon_sym_semver_matches] = ACTIONS(31),
    [anon_sym_cache_dir] = ACTIONS(27),
    [anon_sym_cache_directory] = ACTIONS(27),
    [anon_sym_config_dir] = ACTIONS(27),
    [anon_sym_config_directory] = ACTIONS(27),
    [anon_sym_config_local_dir] = ACTIONS(27),
    [anon_sym_config_local_directory] = ACTIONS(27),
    [anon_sym_data_dir] = ACTIONS(27),
    [anon_sym_data_directory] = ACTIONS(27),
    [anon_sym_data_local_dir] = ACTIONS(27),
    [anon_sym_data_local_directory] = ACTIONS(27),
    [anon_sym_executable_dir] = ACTIONS(27),
    [anon_sym_executable_directory] = ACTIONS(27),
    [anon_sym_home_dir] = ACTIONS(27),
    [anon_sym_home_directory] = ACTIONS(27),
    [anon_sym_BQUOTE] = ACTIONS(37),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(39),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(41),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(45),
    [anon_sym_SQUOTE] = ACTIONS(47),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [52] = {
    [sym_expression] = STATE(111),
    [sym_value] = STATE(26),
    [sym_builtin_function_call] = STATE(27),
    [sym_function_call] = STATE(27),
    [sym_backtick] = STATE(27),
    [sym_indented_backtick] = STATE(27),
    [sym_string] = STATE(27),
    [sym_indented_normal_string] = STATE(7),
    [sym_normal_string] = STATE(7),
    [sym_indented_raw_string] = STATE(7),
    [sym_raw_string] = STATE(7),
    [sym_comment] = STATE(52),
    [sym_identifier] = ACTIONS(224),
    [anon_sym_shell] = ACTIONS(19),
    [anon_sym_if] = ACTIONS(21),
    [anon_sym_assert] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_arch] = ACTIONS(27),
    [anon_sym_num_cpus] = ACTIONS(27),
    [anon_sym_os] = ACTIONS(27),
    [anon_sym_os_family] = ACTIONS(27),
    [anon_sym_env_var] = ACTIONS(29),
    [anon_sym_env_var_or_default] = ACTIONS(31),
    [anon_sym_env] = ACTIONS(33),
    [anon_sym_is_dependency] = ACTIONS(27),
    [anon_sym_invocation_dir] = ACTIONS(27),
    [anon_sym_invocation_dir_native] = ACTIONS(27),
    [anon_sym_invocation_directory] = ACTIONS(27),
    [anon_sym_invocation_directory_native] = ACTIONS(27),
    [anon_sym_justfile] = ACTIONS(27),
    [anon_sym_justfile_dir] = ACTIONS(27),
    [anon_sym_justfile_directory] = ACTIONS(27),
    [anon_sym_source_dir] = ACTIONS(27),
    [anon_sym_source_directory] = ACTIONS(27),
    [anon_sym_source_file] = ACTIONS(27),
    [anon_sym_just_executable] = ACTIONS(27),
    [anon_sym_just_pid] = ACTIONS(27),
    [anon_sym_append] = ACTIONS(31),
    [anon_sym_prepend] = ACTIONS(31),
    [anon_sym_encode_uri_component] = ACTIONS(29),
    [anon_sym_quote] = ACTIONS(29),
    [anon_sym_replace] = ACTIONS(35),
    [anon_sym_replace_regex] = ACTIONS(35),
    [anon_sym_trim] = ACTIONS(29),
    [anon_sym_trim_end] = ACTIONS(29),
    [anon_sym_trim_end_match] = ACTIONS(31),
    [anon_sym_trim_end_matches] = ACTIONS(31),
    [anon_sym_trim_start] = ACTIONS(29),
    [anon_sym_trim_start_match] = ACTIONS(31),
    [anon_sym_trim_start_matches] = ACTIONS(31),
    [anon_sym_capitalize] = ACTIONS(29),
    [anon_sym_kebabcase] = ACTIONS(29),
    [anon_sym_lowercamelcase] = ACTIONS(29),
    [anon_sym_lowercase] = ACTIONS(29),
    [anon_sym_shoutykebabcase] = ACTIONS(29),
    [anon_sym_shoutysnakecase] = ACTIONS(29),
    [anon_sym_snakecase] = ACTIONS(29),
    [anon_sym_titlecase] = ACTIONS(29),
    [anon_sym_uppercamelcase] = ACTIONS(29),
    [anon_sym_uppercase] = ACTIONS(29),
    [anon_sym_absolute_path] = ACTIONS(29),
    [anon_sym_canonicalize] = ACTIONS(29),
    [anon_sym_extension] = ACTIONS(29),
    [anon_sym_file_name] = ACTIONS(29),
    [anon_sym_file_stem] = ACTIONS(29),
    [anon_sym_parent_dir] = ACTIONS(29),
    [anon_sym_parent_directory] = ACTIONS(29),
    [anon_sym_without_extension] = ACTIONS(29),
    [anon_sym_clean] = ACTIONS(29),
    [anon_sym_join] = ACTIONS(19),
    [anon_sym_path_exists] = ACTIONS(29),
    [anon_sym_error] = ACTIONS(29),
    [anon_sym_blake3] = ACTIONS(29),
    [anon_sym_blake3_file] = ACTIONS(29),
    [anon_sym_sha256] = ACTIONS(29),
    [anon_sym_sha256_file] = ACTIONS(29),
    [anon_sym_uuid] = ACTIONS(27),
    [anon_sym_choose] = ACTIONS(31),
    [anon_sym_datetime] = ACTIONS(29),
    [anon_sym_datetime_utc] = ACTIONS(29),
    [anon_sym_semver_matches] = ACTIONS(31),
    [anon_sym_cache_dir] = ACTIONS(27),
    [anon_sym_cache_directory] = ACTIONS(27),
    [anon_sym_config_dir] = ACTIONS(27),
    [anon_sym_config_directory] = ACTIONS(27),
    [anon_sym_config_local_dir] = ACTIONS(27),
    [anon_sym_config_local_directory] = ACTIONS(27),
    [anon_sym_data_dir] = ACTIONS(27),
    [anon_sym_data_directory] = ACTIONS(27),
    [anon_sym_data_local_dir] = ACTIONS(27),
    [anon_sym_data_local_directory] = ACTIONS(27),
    [anon_sym_executable_dir] = ACTIONS(27),
    [anon_sym_executable_directory] = ACTIONS(27),
    [anon_sym_home_dir] = ACTIONS(27),
    [anon_sym_home_directory] = ACTIONS(27),
    [anon_sym_BQUOTE] = ACTIONS(37),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(39),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(41),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(45),
    [anon_sym_SQUOTE] = ACTIONS(47),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [53] = {
    [sym_expression] = STATE(131),
    [sym_value] = STATE(26),
    [sym_builtin_function_call] = STATE(27),
    [sym_function_call] = STATE(27),
    [sym_backtick] = STATE(27),
    [sym_indented_backtick] = STATE(27),
    [sym_string] = STATE(27),
    [sym_indented_normal_string] = STATE(7),
    [sym_normal_string] = STATE(7),
    [sym_indented_raw_string] = STATE(7),
    [sym_raw_string] = STATE(7),
    [sym_comment] = STATE(53),
    [sym_identifier] = ACTIONS(224),
    [anon_sym_shell] = ACTIONS(19),
    [anon_sym_if] = ACTIONS(21),
    [anon_sym_assert] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_arch] = ACTIONS(27),
    [anon_sym_num_cpus] = ACTIONS(27),
    [anon_sym_os] = ACTIONS(27),
    [anon_sym_os_family] = ACTIONS(27),
    [anon_sym_env_var] = ACTIONS(29),
    [anon_sym_env_var_or_default] = ACTIONS(31),
    [anon_sym_env] = ACTIONS(33),
    [anon_sym_is_dependency] = ACTIONS(27),
    [anon_sym_invocation_dir] = ACTIONS(27),
    [anon_sym_invocation_dir_native] = ACTIONS(27),
    [anon_sym_invocation_directory] = ACTIONS(27),
    [anon_sym_invocation_directory_native] = ACTIONS(27),
    [anon_sym_justfile] = ACTIONS(27),
    [anon_sym_justfile_dir] = ACTIONS(27),
    [anon_sym_justfile_directory] = ACTIONS(27),
    [anon_sym_source_dir] = ACTIONS(27),
    [anon_sym_source_directory] = ACTIONS(27),
    [anon_sym_source_file] = ACTIONS(27),
    [anon_sym_just_executable] = ACTIONS(27),
    [anon_sym_just_pid] = ACTIONS(27),
    [anon_sym_append] = ACTIONS(31),
    [anon_sym_prepend] = ACTIONS(31),
    [anon_sym_encode_uri_component] = ACTIONS(29),
    [anon_sym_quote] = ACTIONS(29),
    [anon_sym_replace] = ACTIONS(35),
    [anon_sym_replace_regex] = ACTIONS(35),
    [anon_sym_trim] = ACTIONS(29),
    [anon_sym_trim_end] = ACTIONS(29),
    [anon_sym_trim_end_match] = ACTIONS(31),
    [anon_sym_trim_end_matches] = ACTIONS(31),
    [anon_sym_trim_start] = ACTIONS(29),
    [anon_sym_trim_start_match] = ACTIONS(31),
    [anon_sym_trim_start_matches] = ACTIONS(31),
    [anon_sym_capitalize] = ACTIONS(29),
    [anon_sym_kebabcase] = ACTIONS(29),
    [anon_sym_lowercamelcase] = ACTIONS(29),
    [anon_sym_lowercase] = ACTIONS(29),
    [anon_sym_shoutykebabcase] = ACTIONS(29),
    [anon_sym_shoutysnakecase] = ACTIONS(29),
    [anon_sym_snakecase] = ACTIONS(29),
    [anon_sym_titlecase] = ACTIONS(29),
    [anon_sym_uppercamelcase] = ACTIONS(29),
    [anon_sym_uppercase] = ACTIONS(29),
    [anon_sym_absolute_path] = ACTIONS(29),
    [anon_sym_canonicalize] = ACTIONS(29),
    [anon_sym_extension] = ACTIONS(29),
    [anon_sym_file_name] = ACTIONS(29),
    [anon_sym_file_stem] = ACTIONS(29),
    [anon_sym_parent_dir] = ACTIONS(29),
    [anon_sym_parent_directory] = ACTIONS(29),
    [anon_sym_without_extension] = ACTIONS(29),
    [anon_sym_clean] = ACTIONS(29),
    [anon_sym_join] = ACTIONS(19),
    [anon_sym_path_exists] = ACTIONS(29),
    [anon_sym_error] = ACTIONS(29),
    [anon_sym_blake3] = ACTIONS(29),
    [anon_sym_blake3_file] = ACTIONS(29),
    [anon_sym_sha256] = ACTIONS(29),
    [anon_sym_sha256_file] = ACTIONS(29),
    [anon_sym_uuid] = ACTIONS(27),
    [anon_sym_choose] = ACTIONS(31),
    [anon_sym_datetime] = ACTIONS(29),
    [anon_sym_datetime_utc] = ACTIONS(29),
    [anon_sym_semver_matches] = ACTIONS(31),
    [anon_sym_cache_dir] = ACTIONS(27),
    [anon_sym_cache_directory] = ACTIONS(27),
    [anon_sym_config_dir] = ACTIONS(27),
    [anon_sym_config_directory] = ACTIONS(27),
    [anon_sym_config_local_dir] = ACTIONS(27),
    [anon_sym_config_local_directory] = ACTIONS(27),
    [anon_sym_data_dir] = ACTIONS(27),
    [anon_sym_data_directory] = ACTIONS(27),
    [anon_sym_data_local_dir] = ACTIONS(27),
    [anon_sym_data_local_directory] = ACTIONS(27),
    [anon_sym_executable_dir] = ACTIONS(27),
    [anon_sym_executable_directory] = ACTIONS(27),
    [anon_sym_home_dir] = ACTIONS(27),
    [anon_sym_home_directory] = ACTIONS(27),
    [anon_sym_BQUOTE] = ACTIONS(37),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(39),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(41),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(45),
    [anon_sym_SQUOTE] = ACTIONS(47),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [54] = {
    [sym_expression] = STATE(120),
    [sym_value] = STATE(26),
    [sym_builtin_function_call] = STATE(27),
    [sym_function_call] = STATE(27),
    [sym_backtick] = STATE(27),
    [sym_indented_backtick] = STATE(27),
    [sym_string] = STATE(27),
    [sym_indented_normal_string] = STATE(7),
    [sym_normal_string] = STATE(7),
    [sym_indented_raw_string] = STATE(7),
    [sym_raw_string] = STATE(7),
    [sym_comment] = STATE(54),
    [sym_identifier] = ACTIONS(224),
    [anon_sym_shell] = ACTIONS(19),
    [anon_sym_if] = ACTIONS(21),
    [anon_sym_assert] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_arch] = ACTIONS(27),
    [anon_sym_num_cpus] = ACTIONS(27),
    [anon_sym_os] = ACTIONS(27),
    [anon_sym_os_family] = ACTIONS(27),
    [anon_sym_env_var] = ACTIONS(29),
    [anon_sym_env_var_or_default] = ACTIONS(31),
    [anon_sym_env] = ACTIONS(33),
    [anon_sym_is_dependency] = ACTIONS(27),
    [anon_sym_invocation_dir] = ACTIONS(27),
    [anon_sym_invocation_dir_native] = ACTIONS(27),
    [anon_sym_invocation_directory] = ACTIONS(27),
    [anon_sym_invocation_directory_native] = ACTIONS(27),
    [anon_sym_justfile] = ACTIONS(27),
    [anon_sym_justfile_dir] = ACTIONS(27),
    [anon_sym_justfile_directory] = ACTIONS(27),
    [anon_sym_source_dir] = ACTIONS(27),
    [anon_sym_source_directory] = ACTIONS(27),
    [anon_sym_source_file] = ACTIONS(27),
    [anon_sym_just_executable] = ACTIONS(27),
    [anon_sym_just_pid] = ACTIONS(27),
    [anon_sym_append] = ACTIONS(31),
    [anon_sym_prepend] = ACTIONS(31),
    [anon_sym_encode_uri_component] = ACTIONS(29),
    [anon_sym_quote] = ACTIONS(29),
    [anon_sym_replace] = ACTIONS(35),
    [anon_sym_replace_regex] = ACTIONS(35),
    [anon_sym_trim] = ACTIONS(29),
    [anon_sym_trim_end] = ACTIONS(29),
    [anon_sym_trim_end_match] = ACTIONS(31),
    [anon_sym_trim_end_matches] = ACTIONS(31),
    [anon_sym_trim_start] = ACTIONS(29),
    [anon_sym_trim_start_match] = ACTIONS(31),
    [anon_sym_trim_start_matches] = ACTIONS(31),
    [anon_sym_capitalize] = ACTIONS(29),
    [anon_sym_kebabcase] = ACTIONS(29),
    [anon_sym_lowercamelcase] = ACTIONS(29),
    [anon_sym_lowercase] = ACTIONS(29),
    [anon_sym_shoutykebabcase] = ACTIONS(29),
    [anon_sym_shoutysnakecase] = ACTIONS(29),
    [anon_sym_snakecase] = ACTIONS(29),
    [anon_sym_titlecase] = ACTIONS(29),
    [anon_sym_uppercamelcase] = ACTIONS(29),
    [anon_sym_uppercase] = ACTIONS(29),
    [anon_sym_absolute_path] = ACTIONS(29),
    [anon_sym_canonicalize] = ACTIONS(29),
    [anon_sym_extension] = ACTIONS(29),
    [anon_sym_file_name] = ACTIONS(29),
    [anon_sym_file_stem] = ACTIONS(29),
    [anon_sym_parent_dir] = ACTIONS(29),
    [anon_sym_parent_directory] = ACTIONS(29),
    [anon_sym_without_extension] = ACTIONS(29),
    [anon_sym_clean] = ACTIONS(29),
    [anon_sym_join] = ACTIONS(19),
    [anon_sym_path_exists] = ACTIONS(29),
    [anon_sym_error] = ACTIONS(29),
    [anon_sym_blake3] = ACTIONS(29),
    [anon_sym_blake3_file] = ACTIONS(29),
    [anon_sym_sha256] = ACTIONS(29),
    [anon_sym_sha256_file] = ACTIONS(29),
    [anon_sym_uuid] = ACTIONS(27),
    [anon_sym_choose] = ACTIONS(31),
    [anon_sym_datetime] = ACTIONS(29),
    [anon_sym_datetime_utc] = ACTIONS(29),
    [anon_sym_semver_matches] = ACTIONS(31),
    [anon_sym_cache_dir] = ACTIONS(27),
    [anon_sym_cache_directory] = ACTIONS(27),
    [anon_sym_config_dir] = ACTIONS(27),
    [anon_sym_config_directory] = ACTIONS(27),
    [anon_sym_config_local_dir] = ACTIONS(27),
    [anon_sym_config_local_directory] = ACTIONS(27),
    [anon_sym_data_dir] = ACTIONS(27),
    [anon_sym_data_directory] = ACTIONS(27),
    [anon_sym_data_local_dir] = ACTIONS(27),
    [anon_sym_data_local_directory] = ACTIONS(27),
    [anon_sym_executable_dir] = ACTIONS(27),
    [anon_sym_executable_directory] = ACTIONS(27),
    [anon_sym_home_dir] = ACTIONS(27),
    [anon_sym_home_directory] = ACTIONS(27),
    [anon_sym_BQUOTE] = ACTIONS(37),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(39),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(41),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(45),
    [anon_sym_SQUOTE] = ACTIONS(47),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [55] = {
    [sym_expression] = STATE(122),
    [sym_value] = STATE(26),
    [sym_builtin_function_call] = STATE(27),
    [sym_function_call] = STATE(27),
    [sym_backtick] = STATE(27),
    [sym_indented_backtick] = STATE(27),
    [sym_string] = STATE(27),
    [sym_indented_normal_string] = STATE(7),
    [sym_normal_string] = STATE(7),
    [sym_indented_raw_string] = STATE(7),
    [sym_raw_string] = STATE(7),
    [sym_comment] = STATE(55),
    [sym_identifier] = ACTIONS(224),
    [anon_sym_shell] = ACTIONS(19),
    [anon_sym_if] = ACTIONS(21),
    [anon_sym_assert] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_arch] = ACTIONS(27),
    [anon_sym_num_cpus] = ACTIONS(27),
    [anon_sym_os] = ACTIONS(27),
    [anon_sym_os_family] = ACTIONS(27),
    [anon_sym_env_var] = ACTIONS(29),
    [anon_sym_env_var_or_default] = ACTIONS(31),
    [anon_sym_env] = ACTIONS(33),
    [anon_sym_is_dependency] = ACTIONS(27),
    [anon_sym_invocation_dir] = ACTIONS(27),
    [anon_sym_invocation_dir_native] = ACTIONS(27),
    [anon_sym_invocation_directory] = ACTIONS(27),
    [anon_sym_invocation_directory_native] = ACTIONS(27),
    [anon_sym_justfile] = ACTIONS(27),
    [anon_sym_justfile_dir] = ACTIONS(27),
    [anon_sym_justfile_directory] = ACTIONS(27),
    [anon_sym_source_dir] = ACTIONS(27),
    [anon_sym_source_directory] = ACTIONS(27),
    [anon_sym_source_file] = ACTIONS(27),
    [anon_sym_just_executable] = ACTIONS(27),
    [anon_sym_just_pid] = ACTIONS(27),
    [anon_sym_append] = ACTIONS(31),
    [anon_sym_prepend] = ACTIONS(31),
    [anon_sym_encode_uri_component] = ACTIONS(29),
    [anon_sym_quote] = ACTIONS(29),
    [anon_sym_replace] = ACTIONS(35),
    [anon_sym_replace_regex] = ACTIONS(35),
    [anon_sym_trim] = ACTIONS(29),
    [anon_sym_trim_end] = ACTIONS(29),
    [anon_sym_trim_end_match] = ACTIONS(31),
    [anon_sym_trim_end_matches] = ACTIONS(31),
    [anon_sym_trim_start] = ACTIONS(29),
    [anon_sym_trim_start_match] = ACTIONS(31),
    [anon_sym_trim_start_matches] = ACTIONS(31),
    [anon_sym_capitalize] = ACTIONS(29),
    [anon_sym_kebabcase] = ACTIONS(29),
    [anon_sym_lowercamelcase] = ACTIONS(29),
    [anon_sym_lowercase] = ACTIONS(29),
    [anon_sym_shoutykebabcase] = ACTIONS(29),
    [anon_sym_shoutysnakecase] = ACTIONS(29),
    [anon_sym_snakecase] = ACTIONS(29),
    [anon_sym_titlecase] = ACTIONS(29),
    [anon_sym_uppercamelcase] = ACTIONS(29),
    [anon_sym_uppercase] = ACTIONS(29),
    [anon_sym_absolute_path] = ACTIONS(29),
    [anon_sym_canonicalize] = ACTIONS(29),
    [anon_sym_extension] = ACTIONS(29),
    [anon_sym_file_name] = ACTIONS(29),
    [anon_sym_file_stem] = ACTIONS(29),
    [anon_sym_parent_dir] = ACTIONS(29),
    [anon_sym_parent_directory] = ACTIONS(29),
    [anon_sym_without_extension] = ACTIONS(29),
    [anon_sym_clean] = ACTIONS(29),
    [anon_sym_join] = ACTIONS(19),
    [anon_sym_path_exists] = ACTIONS(29),
    [anon_sym_error] = ACTIONS(29),
    [anon_sym_blake3] = ACTIONS(29),
    [anon_sym_blake3_file] = ACTIONS(29),
    [anon_sym_sha256] = ACTIONS(29),
    [anon_sym_sha256_file] = ACTIONS(29),
    [anon_sym_uuid] = ACTIONS(27),
    [anon_sym_choose] = ACTIONS(31),
    [anon_sym_datetime] = ACTIONS(29),
    [anon_sym_datetime_utc] = ACTIONS(29),
    [anon_sym_semver_matches] = ACTIONS(31),
    [anon_sym_cache_dir] = ACTIONS(27),
    [anon_sym_cache_directory] = ACTIONS(27),
    [anon_sym_config_dir] = ACTIONS(27),
    [anon_sym_config_directory] = ACTIONS(27),
    [anon_sym_config_local_dir] = ACTIONS(27),
    [anon_sym_config_local_directory] = ACTIONS(27),
    [anon_sym_data_dir] = ACTIONS(27),
    [anon_sym_data_directory] = ACTIONS(27),
    [anon_sym_data_local_dir] = ACTIONS(27),
    [anon_sym_data_local_directory] = ACTIONS(27),
    [anon_sym_executable_dir] = ACTIONS(27),
    [anon_sym_executable_directory] = ACTIONS(27),
    [anon_sym_home_dir] = ACTIONS(27),
    [anon_sym_home_directory] = ACTIONS(27),
    [anon_sym_BQUOTE] = ACTIONS(37),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(39),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(41),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(45),
    [anon_sym_SQUOTE] = ACTIONS(47),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [56] = {
    [sym_expression] = STATE(121),
    [sym_value] = STATE(26),
    [sym_builtin_function_call] = STATE(27),
    [sym_function_call] = STATE(27),
    [sym_backtick] = STATE(27),
    [sym_indented_backtick] = STATE(27),
    [sym_string] = STATE(27),
    [sym_indented_normal_string] = STATE(7),
    [sym_normal_string] = STATE(7),
    [sym_indented_raw_string] = STATE(7),
    [sym_raw_string] = STATE(7),
    [sym_comment] = STATE(56),
    [sym_identifier] = ACTIONS(224),
    [anon_sym_shell] = ACTIONS(19),
    [anon_sym_if] = ACTIONS(21),
    [anon_sym_assert] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_arch] = ACTIONS(27),
    [anon_sym_num_cpus] = ACTIONS(27),
    [anon_sym_os] = ACTIONS(27),
    [anon_sym_os_family] = ACTIONS(27),
    [anon_sym_env_var] = ACTIONS(29),
    [anon_sym_env_var_or_default] = ACTIONS(31),
    [anon_sym_env] = ACTIONS(33),
    [anon_sym_is_dependency] = ACTIONS(27),
    [anon_sym_invocation_dir] = ACTIONS(27),
    [anon_sym_invocation_dir_native] = ACTIONS(27),
    [anon_sym_invocation_directory] = ACTIONS(27),
    [anon_sym_invocation_directory_native] = ACTIONS(27),
    [anon_sym_justfile] = ACTIONS(27),
    [anon_sym_justfile_dir] = ACTIONS(27),
    [anon_sym_justfile_directory] = ACTIONS(27),
    [anon_sym_source_dir] = ACTIONS(27),
    [anon_sym_source_directory] = ACTIONS(27),
    [anon_sym_source_file] = ACTIONS(27),
    [anon_sym_just_executable] = ACTIONS(27),
    [anon_sym_just_pid] = ACTIONS(27),
    [anon_sym_append] = ACTIONS(31),
    [anon_sym_prepend] = ACTIONS(31),
    [anon_sym_encode_uri_component] = ACTIONS(29),
    [anon_sym_quote] = ACTIONS(29),
    [anon_sym_replace] = ACTIONS(35),
    [anon_sym_replace_regex] = ACTIONS(35),
    [anon_sym_trim] = ACTIONS(29),
    [anon_sym_trim_end] = ACTIONS(29),
    [anon_sym_trim_end_match] = ACTIONS(31),
    [anon_sym_trim_end_matches] = ACTIONS(31),
    [anon_sym_trim_start] = ACTIONS(29),
    [anon_sym_trim_start_match] = ACTIONS(31),
    [anon_sym_trim_start_matches] = ACTIONS(31),
    [anon_sym_capitalize] = ACTIONS(29),
    [anon_sym_kebabcase] = ACTIONS(29),
    [anon_sym_lowercamelcase] = ACTIONS(29),
    [anon_sym_lowercase] = ACTIONS(29),
    [anon_sym_shoutykebabcase] = ACTIONS(29),
    [anon_sym_shoutysnakecase] = ACTIONS(29),
    [anon_sym_snakecase] = ACTIONS(29),
    [anon_sym_titlecase] = ACTIONS(29),
    [anon_sym_uppercamelcase] = ACTIONS(29),
    [anon_sym_uppercase] = ACTIONS(29),
    [anon_sym_absolute_path] = ACTIONS(29),
    [anon_sym_canonicalize] = ACTIONS(29),
    [anon_sym_extension] = ACTIONS(29),
    [anon_sym_file_name] = ACTIONS(29),
    [anon_sym_file_stem] = ACTIONS(29),
    [anon_sym_parent_dir] = ACTIONS(29),
    [anon_sym_parent_directory] = ACTIONS(29),
    [anon_sym_without_extension] = ACTIONS(29),
    [anon_sym_clean] = ACTIONS(29),
    [anon_sym_join] = ACTIONS(19),
    [anon_sym_path_exists] = ACTIONS(29),
    [anon_sym_error] = ACTIONS(29),
    [anon_sym_blake3] = ACTIONS(29),
    [anon_sym_blake3_file] = ACTIONS(29),
    [anon_sym_sha256] = ACTIONS(29),
    [anon_sym_sha256_file] = ACTIONS(29),
    [anon_sym_uuid] = ACTIONS(27),
    [anon_sym_choose] = ACTIONS(31),
    [anon_sym_datetime] = ACTIONS(29),
    [anon_sym_datetime_utc] = ACTIONS(29),
    [anon_sym_semver_matches] = ACTIONS(31),
    [anon_sym_cache_dir] = ACTIONS(27),
    [anon_sym_cache_directory] = ACTIONS(27),
    [anon_sym_config_dir] = ACTIONS(27),
    [anon_sym_config_directory] = ACTIONS(27),
    [anon_sym_config_local_dir] = ACTIONS(27),
    [anon_sym_config_local_directory] = ACTIONS(27),
    [anon_sym_data_dir] = ACTIONS(27),
    [anon_sym_data_directory] = ACTIONS(27),
    [anon_sym_data_local_dir] = ACTIONS(27),
    [anon_sym_data_local_directory] = ACTIONS(27),
    [anon_sym_executable_dir] = ACTIONS(27),
    [anon_sym_executable_directory] = ACTIONS(27),
    [anon_sym_home_dir] = ACTIONS(27),
    [anon_sym_home_directory] = ACTIONS(27),
    [anon_sym_BQUOTE] = ACTIONS(37),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(39),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(41),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(45),
    [anon_sym_SQUOTE] = ACTIONS(47),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [57] = {
    [sym__setting_boolean] = STATE(71),
    [sym__setting_string] = STATE(71),
    [sym__setting_list] = STATE(71),
    [sym_comment] = STATE(57),
    [ts_builtin_sym_end] = ACTIONS(246),
    [sym_identifier] = ACTIONS(248),
    [anon_sym_alias] = ACTIONS(248),
    [anon_sym_COLON_EQ] = ACTIONS(250),
    [anon_sym_export] = ACTIONS(248),
    [aux_sym_import_token1] = ACTIONS(248),
    [aux_sym_mod_token1] = ACTIONS(248),
    [anon_sym_set] = ACTIONS(248),
    [anon_sym_shell] = ACTIONS(248),
    [anon_sym_if] = ACTIONS(248),
    [anon_sym_assert] = ACTIONS(248),
    [anon_sym_LPAREN] = ACTIONS(246),
    [anon_sym_arch] = ACTIONS(248),
    [anon_sym_num_cpus] = ACTIONS(248),
    [anon_sym_os] = ACTIONS(248),
    [anon_sym_os_family] = ACTIONS(248),
    [anon_sym_env_var] = ACTIONS(248),
    [anon_sym_env_var_or_default] = ACTIONS(248),
    [anon_sym_env] = ACTIONS(248),
    [anon_sym_is_dependency] = ACTIONS(248),
    [anon_sym_invocation_dir] = ACTIONS(248),
    [anon_sym_invocation_dir_native] = ACTIONS(248),
    [anon_sym_invocation_directory] = ACTIONS(248),
    [anon_sym_invocation_directory_native] = ACTIONS(248),
    [anon_sym_justfile] = ACTIONS(248),
    [anon_sym_justfile_dir] = ACTIONS(248),
    [anon_sym_justfile_directory] = ACTIONS(248),
    [anon_sym_source_dir] = ACTIONS(248),
    [anon_sym_source_directory] = ACTIONS(248),
    [anon_sym_source_file] = ACTIONS(248),
    [anon_sym_just_executable] = ACTIONS(248),
    [anon_sym_just_pid] = ACTIONS(248),
    [anon_sym_append] = ACTIONS(248),
    [anon_sym_prepend] = ACTIONS(248),
    [anon_sym_encode_uri_component] = ACTIONS(248),
    [anon_sym_quote] = ACTIONS(248),
    [anon_sym_replace] = ACTIONS(248),
    [anon_sym_replace_regex] = ACTIONS(248),
    [anon_sym_trim] = ACTIONS(248),
    [anon_sym_trim_end] = ACTIONS(248),
    [anon_sym_trim_end_match] = ACTIONS(248),
    [anon_sym_trim_end_matches] = ACTIONS(248),
    [anon_sym_trim_start] = ACTIONS(248),
    [anon_sym_trim_start_match] = ACTIONS(248),
    [anon_sym_trim_start_matches] = ACTIONS(248),
    [anon_sym_capitalize] = ACTIONS(248),
    [anon_sym_kebabcase] = ACTIONS(248),
    [anon_sym_lowercamelcase] = ACTIONS(248),
    [anon_sym_lowercase] = ACTIONS(248),
    [anon_sym_shoutykebabcase] = ACTIONS(248),
    [anon_sym_shoutysnakecase] = ACTIONS(248),
    [anon_sym_snakecase] = ACTIONS(248),
    [anon_sym_titlecase] = ACTIONS(248),
    [anon_sym_uppercamelcase] = ACTIONS(248),
    [anon_sym_uppercase] = ACTIONS(248),
    [anon_sym_absolute_path] = ACTIONS(248),
    [anon_sym_canonicalize] = ACTIONS(248),
    [anon_sym_extension] = ACTIONS(248),
    [anon_sym_file_name] = ACTIONS(248),
    [anon_sym_file_stem] = ACTIONS(248),
    [anon_sym_parent_dir] = ACTIONS(248),
    [anon_sym_parent_directory] = ACTIONS(248),
    [anon_sym_without_extension] = ACTIONS(248),
    [anon_sym_clean] = ACTIONS(248),
    [anon_sym_join] = ACTIONS(248),
    [anon_sym_path_exists] = ACTIONS(248),
    [anon_sym_error] = ACTIONS(248),
    [anon_sym_blake3] = ACTIONS(248),
    [anon_sym_blake3_file] = ACTIONS(248),
    [anon_sym_sha256] = ACTIONS(248),
    [anon_sym_sha256_file] = ACTIONS(248),
    [anon_sym_uuid] = ACTIONS(248),
    [anon_sym_choose] = ACTIONS(248),
    [anon_sym_datetime] = ACTIONS(248),
    [anon_sym_datetime_utc] = ACTIONS(248),
    [anon_sym_semver_matches] = ACTIONS(248),
    [anon_sym_cache_dir] = ACTIONS(248),
    [anon_sym_cache_directory] = ACTIONS(248),
    [anon_sym_config_dir] = ACTIONS(248),
    [anon_sym_config_directory] = ACTIONS(248),
    [anon_sym_config_local_dir] = ACTIONS(248),
    [anon_sym_config_local_directory] = ACTIONS(248),
    [anon_sym_data_dir] = ACTIONS(248),
    [anon_sym_data_directory] = ACTIONS(248),
    [anon_sym_data_local_dir] = ACTIONS(248),
    [anon_sym_data_local_directory] = ACTIONS(248),
    [anon_sym_executable_dir] = ACTIONS(248),
    [anon_sym_executable_directory] = ACTIONS(248),
    [anon_sym_home_dir] = ACTIONS(248),
    [anon_sym_home_directory] = ACTIONS(248),
    [anon_sym_BQUOTE] = ACTIONS(248),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(246),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(246),
    [anon_sym_DQUOTE] = ACTIONS(248),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(246),
    [anon_sym_SQUOTE] = ACTIONS(248),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [58] = {
    [sym_comment] = STATE(58),
    [ts_builtin_sym_end] = ACTIONS(210),
    [sym_identifier] = ACTIONS(212),
    [anon_sym_alias] = ACTIONS(212),
    [anon_sym_COLON_EQ] = ACTIONS(252),
    [anon_sym_export] = ACTIONS(212),
    [aux_sym_import_token1] = ACTIONS(212),
    [aux_sym_mod_token1] = ACTIONS(212),
    [anon_sym_set] = ACTIONS(212),
    [anon_sym_shell] = ACTIONS(212),
    [anon_sym_if] = ACTIONS(212),
    [anon_sym_assert] = ACTIONS(212),
    [anon_sym_LPAREN] = ACTIONS(218),
    [anon_sym_SLASH] = ACTIONS(210),
    [anon_sym_PLUS] = ACTIONS(210),
    [anon_sym_arch] = ACTIONS(212),
    [anon_sym_num_cpus] = ACTIONS(212),
    [anon_sym_os] = ACTIONS(212),
    [anon_sym_os_family] = ACTIONS(212),
    [anon_sym_env_var] = ACTIONS(212),
    [anon_sym_env_var_or_default] = ACTIONS(212),
    [anon_sym_env] = ACTIONS(212),
    [anon_sym_is_dependency] = ACTIONS(212),
    [anon_sym_invocation_dir] = ACTIONS(212),
    [anon_sym_invocation_dir_native] = ACTIONS(212),
    [anon_sym_invocation_directory] = ACTIONS(212),
    [anon_sym_invocation_directory_native] = ACTIONS(212),
    [anon_sym_justfile] = ACTIONS(212),
    [anon_sym_justfile_dir] = ACTIONS(212),
    [anon_sym_justfile_directory] = ACTIONS(212),
    [anon_sym_source_dir] = ACTIONS(212),
    [anon_sym_source_directory] = ACTIONS(212),
    [anon_sym_source_file] = ACTIONS(212),
    [anon_sym_just_executable] = ACTIONS(212),
    [anon_sym_just_pid] = ACTIONS(212),
    [anon_sym_append] = ACTIONS(212),
    [anon_sym_prepend] = ACTIONS(212),
    [anon_sym_encode_uri_component] = ACTIONS(212),
    [anon_sym_quote] = ACTIONS(212),
    [anon_sym_replace] = ACTIONS(212),
    [anon_sym_replace_regex] = ACTIONS(212),
    [anon_sym_trim] = ACTIONS(212),
    [anon_sym_trim_end] = ACTIONS(212),
    [anon_sym_trim_end_match] = ACTIONS(212),
    [anon_sym_trim_end_matches] = ACTIONS(212),
    [anon_sym_trim_start] = ACTIONS(212),
    [anon_sym_trim_start_match] = ACTIONS(212),
    [anon_sym_trim_start_matches] = ACTIONS(212),
    [anon_sym_capitalize] = ACTIONS(212),
    [anon_sym_kebabcase] = ACTIONS(212),
    [anon_sym_lowercamelcase] = ACTIONS(212),
    [anon_sym_lowercase] = ACTIONS(212),
    [anon_sym_shoutykebabcase] = ACTIONS(212),
    [anon_sym_shoutysnakecase] = ACTIONS(212),
    [anon_sym_snakecase] = ACTIONS(212),
    [anon_sym_titlecase] = ACTIONS(212),
    [anon_sym_uppercamelcase] = ACTIONS(212),
    [anon_sym_uppercase] = ACTIONS(212),
    [anon_sym_absolute_path] = ACTIONS(212),
    [anon_sym_canonicalize] = ACTIONS(212),
    [anon_sym_extension] = ACTIONS(212),
    [anon_sym_file_name] = ACTIONS(212),
    [anon_sym_file_stem] = ACTIONS(212),
    [anon_sym_parent_dir] = ACTIONS(212),
    [anon_sym_parent_directory] = ACTIONS(212),
    [anon_sym_without_extension] = ACTIONS(212),
    [anon_sym_clean] = ACTIONS(212),
    [anon_sym_join] = ACTIONS(212),
    [anon_sym_path_exists] = ACTIONS(212),
    [anon_sym_error] = ACTIONS(212),
    [anon_sym_blake3] = ACTIONS(212),
    [anon_sym_blake3_file] = ACTIONS(212),
    [anon_sym_sha256] = ACTIONS(212),
    [anon_sym_sha256_file] = ACTIONS(212),
    [anon_sym_uuid] = ACTIONS(212),
    [anon_sym_choose] = ACTIONS(212),
    [anon_sym_datetime] = ACTIONS(212),
    [anon_sym_datetime_utc] = ACTIONS(212),
    [anon_sym_semver_matches] = ACTIONS(212),
    [anon_sym_cache_dir] = ACTIONS(212),
    [anon_sym_cache_directory] = ACTIONS(212),
    [anon_sym_config_dir] = ACTIONS(212),
    [anon_sym_config_directory] = ACTIONS(212),
    [anon_sym_config_local_dir] = ACTIONS(212),
    [anon_sym_config_local_directory] = ACTIONS(212),
    [anon_sym_data_dir] = ACTIONS(212),
    [anon_sym_data_directory] = ACTIONS(212),
    [anon_sym_data_local_dir] = ACTIONS(212),
    [anon_sym_data_local_directory] = ACTIONS(212),
    [anon_sym_executable_dir] = ACTIONS(212),
    [anon_sym_executable_directory] = ACTIONS(212),
    [anon_sym_home_dir] = ACTIONS(212),
    [anon_sym_home_directory] = ACTIONS(212),
    [anon_sym_BQUOTE] = ACTIONS(212),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(210),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(210),
    [anon_sym_DQUOTE] = ACTIONS(212),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(210),
    [anon_sym_SQUOTE] = ACTIONS(212),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [59] = {
    [sym__setting_boolean] = STATE(71),
    [sym_comment] = STATE(59),
    [ts_builtin_sym_end] = ACTIONS(246),
    [sym_identifier] = ACTIONS(248),
    [anon_sym_alias] = ACTIONS(248),
    [anon_sym_COLON_EQ] = ACTIONS(254),
    [anon_sym_export] = ACTIONS(248),
    [aux_sym_import_token1] = ACTIONS(248),
    [aux_sym_mod_token1] = ACTIONS(248),
    [anon_sym_set] = ACTIONS(248),
    [anon_sym_shell] = ACTIONS(248),
    [anon_sym_if] = ACTIONS(248),
    [anon_sym_assert] = ACTIONS(248),
    [anon_sym_LPAREN] = ACTIONS(246),
    [anon_sym_arch] = ACTIONS(248),
    [anon_sym_num_cpus] = ACTIONS(248),
    [anon_sym_os] = ACTIONS(248),
    [anon_sym_os_family] = ACTIONS(248),
    [anon_sym_env_var] = ACTIONS(248),
    [anon_sym_env_var_or_default] = ACTIONS(248),
    [anon_sym_env] = ACTIONS(248),
    [anon_sym_is_dependency] = ACTIONS(248),
    [anon_sym_invocation_dir] = ACTIONS(248),
    [anon_sym_invocation_dir_native] = ACTIONS(248),
    [anon_sym_invocation_directory] = ACTIONS(248),
    [anon_sym_invocation_directory_native] = ACTIONS(248),
    [anon_sym_justfile] = ACTIONS(248),
    [anon_sym_justfile_dir] = ACTIONS(248),
    [anon_sym_justfile_directory] = ACTIONS(248),
    [anon_sym_source_dir] = ACTIONS(248),
    [anon_sym_source_directory] = ACTIONS(248),
    [anon_sym_source_file] = ACTIONS(248),
    [anon_sym_just_executable] = ACTIONS(248),
    [anon_sym_just_pid] = ACTIONS(248),
    [anon_sym_append] = ACTIONS(248),
    [anon_sym_prepend] = ACTIONS(248),
    [anon_sym_encode_uri_component] = ACTIONS(248),
    [anon_sym_quote] = ACTIONS(248),
    [anon_sym_replace] = ACTIONS(248),
    [anon_sym_replace_regex] = ACTIONS(248),
    [anon_sym_trim] = ACTIONS(248),
    [anon_sym_trim_end] = ACTIONS(248),
    [anon_sym_trim_end_match] = ACTIONS(248),
    [anon_sym_trim_end_matches] = ACTIONS(248),
    [anon_sym_trim_start] = ACTIONS(248),
    [anon_sym_trim_start_match] = ACTIONS(248),
    [anon_sym_trim_start_matches] = ACTIONS(248),
    [anon_sym_capitalize] = ACTIONS(248),
    [anon_sym_kebabcase] = ACTIONS(248),
    [anon_sym_lowercamelcase] = ACTIONS(248),
    [anon_sym_lowercase] = ACTIONS(248),
    [anon_sym_shoutykebabcase] = ACTIONS(248),
    [anon_sym_shoutysnakecase] = ACTIONS(248),
    [anon_sym_snakecase] = ACTIONS(248),
    [anon_sym_titlecase] = ACTIONS(248),
    [anon_sym_uppercamelcase] = ACTIONS(248),
    [anon_sym_uppercase] = ACTIONS(248),
    [anon_sym_absolute_path] = ACTIONS(248),
    [anon_sym_canonicalize] = ACTIONS(248),
    [anon_sym_extension] = ACTIONS(248),
    [anon_sym_file_name] = ACTIONS(248),
    [anon_sym_file_stem] = ACTIONS(248),
    [anon_sym_parent_dir] = ACTIONS(248),
    [anon_sym_parent_directory] = ACTIONS(248),
    [anon_sym_without_extension] = ACTIONS(248),
    [anon_sym_clean] = ACTIONS(248),
    [anon_sym_join] = ACTIONS(248),
    [anon_sym_path_exists] = ACTIONS(248),
    [anon_sym_error] = ACTIONS(248),
    [anon_sym_blake3] = ACTIONS(248),
    [anon_sym_blake3_file] = ACTIONS(248),
    [anon_sym_sha256] = ACTIONS(248),
    [anon_sym_sha256_file] = ACTIONS(248),
    [anon_sym_uuid] = ACTIONS(248),
    [anon_sym_choose] = ACTIONS(248),
    [anon_sym_datetime] = ACTIONS(248),
    [anon_sym_datetime_utc] = ACTIONS(248),
    [anon_sym_semver_matches] = ACTIONS(248),
    [anon_sym_cache_dir] = ACTIONS(248),
    [anon_sym_cache_directory] = ACTIONS(248),
    [anon_sym_config_dir] = ACTIONS(248),
    [anon_sym_config_directory] = ACTIONS(248),
    [anon_sym_config_local_dir] = ACTIONS(248),
    [anon_sym_config_local_directory] = ACTIONS(248),
    [anon_sym_data_dir] = ACTIONS(248),
    [anon_sym_data_directory] = ACTIONS(248),
    [anon_sym_data_local_dir] = ACTIONS(248),
    [anon_sym_data_local_directory] = ACTIONS(248),
    [anon_sym_executable_dir] = ACTIONS(248),
    [anon_sym_executable_directory] = ACTIONS(248),
    [anon_sym_home_dir] = ACTIONS(248),
    [anon_sym_home_directory] = ACTIONS(248),
    [anon_sym_BQUOTE] = ACTIONS(248),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(246),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(246),
    [anon_sym_DQUOTE] = ACTIONS(248),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(246),
    [anon_sym_SQUOTE] = ACTIONS(248),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [60] = {
    [sym_comment] = STATE(60),
    [ts_builtin_sym_end] = ACTIONS(256),
    [sym_identifier] = ACTIONS(258),
    [anon_sym_alias] = ACTIONS(258),
    [anon_sym_export] = ACTIONS(258),
    [aux_sym_import_token1] = ACTIONS(258),
    [aux_sym_mod_token1] = ACTIONS(258),
    [anon_sym_set] = ACTIONS(258),
    [anon_sym_shell] = ACTIONS(258),
    [anon_sym_if] = ACTIONS(258),
    [anon_sym_assert] = ACTIONS(258),
    [anon_sym_LPAREN] = ACTIONS(256),
    [anon_sym_arch] = ACTIONS(258),
    [anon_sym_num_cpus] = ACTIONS(258),
    [anon_sym_os] = ACTIONS(258),
    [anon_sym_os_family] = ACTIONS(258),
    [anon_sym_env_var] = ACTIONS(258),
    [anon_sym_env_var_or_default] = ACTIONS(258),
    [anon_sym_env] = ACTIONS(258),
    [anon_sym_is_dependency] = ACTIONS(258),
    [anon_sym_invocation_dir] = ACTIONS(258),
    [anon_sym_invocation_dir_native] = ACTIONS(258),
    [anon_sym_invocation_directory] = ACTIONS(258),
    [anon_sym_invocation_directory_native] = ACTIONS(258),
    [anon_sym_justfile] = ACTIONS(258),
    [anon_sym_justfile_dir] = ACTIONS(258),
    [anon_sym_justfile_directory] = ACTIONS(258),
    [anon_sym_source_dir] = ACTIONS(258),
    [anon_sym_source_directory] = ACTIONS(258),
    [anon_sym_source_file] = ACTIONS(258),
    [anon_sym_just_executable] = ACTIONS(258),
    [anon_sym_just_pid] = ACTIONS(258),
    [anon_sym_append] = ACTIONS(258),
    [anon_sym_prepend] = ACTIONS(258),
    [anon_sym_encode_uri_component] = ACTIONS(258),
    [anon_sym_quote] = ACTIONS(258),
    [anon_sym_replace] = ACTIONS(258),
    [anon_sym_replace_regex] = ACTIONS(258),
    [anon_sym_trim] = ACTIONS(258),
    [anon_sym_trim_end] = ACTIONS(258),
    [anon_sym_trim_end_match] = ACTIONS(258),
    [anon_sym_trim_end_matches] = ACTIONS(258),
    [anon_sym_trim_start] = ACTIONS(258),
    [anon_sym_trim_start_match] = ACTIONS(258),
    [anon_sym_trim_start_matches] = ACTIONS(258),
    [anon_sym_capitalize] = ACTIONS(258),
    [anon_sym_kebabcase] = ACTIONS(258),
    [anon_sym_lowercamelcase] = ACTIONS(258),
    [anon_sym_lowercase] = ACTIONS(258),
    [anon_sym_shoutykebabcase] = ACTIONS(258),
    [anon_sym_shoutysnakecase] = ACTIONS(258),
    [anon_sym_snakecase] = ACTIONS(258),
    [anon_sym_titlecase] = ACTIONS(258),
    [anon_sym_uppercamelcase] = ACTIONS(258),
    [anon_sym_uppercase] = ACTIONS(258),
    [anon_sym_absolute_path] = ACTIONS(258),
    [anon_sym_canonicalize] = ACTIONS(258),
    [anon_sym_extension] = ACTIONS(258),
    [anon_sym_file_name] = ACTIONS(258),
    [anon_sym_file_stem] = ACTIONS(258),
    [anon_sym_parent_dir] = ACTIONS(258),
    [anon_sym_parent_directory] = ACTIONS(258),
    [anon_sym_without_extension] = ACTIONS(258),
    [anon_sym_clean] = ACTIONS(258),
    [anon_sym_join] = ACTIONS(258),
    [anon_sym_path_exists] = ACTIONS(258),
    [anon_sym_error] = ACTIONS(258),
    [anon_sym_blake3] = ACTIONS(258),
    [anon_sym_blake3_file] = ACTIONS(258),
    [anon_sym_sha256] = ACTIONS(258),
    [anon_sym_sha256_file] = ACTIONS(258),
    [anon_sym_uuid] = ACTIONS(258),
    [anon_sym_choose] = ACTIONS(258),
    [anon_sym_datetime] = ACTIONS(258),
    [anon_sym_datetime_utc] = ACTIONS(258),
    [anon_sym_semver_matches] = ACTIONS(258),
    [anon_sym_cache_dir] = ACTIONS(258),
    [anon_sym_cache_directory] = ACTIONS(258),
    [anon_sym_config_dir] = ACTIONS(258),
    [anon_sym_config_directory] = ACTIONS(258),
    [anon_sym_config_local_dir] = ACTIONS(258),
    [anon_sym_config_local_directory] = ACTIONS(258),
    [anon_sym_data_dir] = ACTIONS(258),
    [anon_sym_data_directory] = ACTIONS(258),
    [anon_sym_data_local_dir] = ACTIONS(258),
    [anon_sym_data_local_directory] = ACTIONS(258),
    [anon_sym_executable_dir] = ACTIONS(258),
    [anon_sym_executable_directory] = ACTIONS(258),
    [anon_sym_home_dir] = ACTIONS(258),
    [anon_sym_home_directory] = ACTIONS(258),
    [anon_sym_BQUOTE] = ACTIONS(258),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(256),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(256),
    [anon_sym_DQUOTE] = ACTIONS(258),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(256),
    [anon_sym_SQUOTE] = ACTIONS(258),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [61] = {
    [sym_comment] = STATE(61),
    [ts_builtin_sym_end] = ACTIONS(260),
    [sym_identifier] = ACTIONS(262),
    [anon_sym_alias] = ACTIONS(262),
    [anon_sym_export] = ACTIONS(262),
    [aux_sym_import_token1] = ACTIONS(262),
    [aux_sym_mod_token1] = ACTIONS(262),
    [anon_sym_set] = ACTIONS(262),
    [anon_sym_shell] = ACTIONS(262),
    [anon_sym_if] = ACTIONS(262),
    [anon_sym_assert] = ACTIONS(262),
    [anon_sym_LPAREN] = ACTIONS(260),
    [anon_sym_arch] = ACTIONS(262),
    [anon_sym_num_cpus] = ACTIONS(262),
    [anon_sym_os] = ACTIONS(262),
    [anon_sym_os_family] = ACTIONS(262),
    [anon_sym_env_var] = ACTIONS(262),
    [anon_sym_env_var_or_default] = ACTIONS(262),
    [anon_sym_env] = ACTIONS(262),
    [anon_sym_is_dependency] = ACTIONS(262),
    [anon_sym_invocation_dir] = ACTIONS(262),
    [anon_sym_invocation_dir_native] = ACTIONS(262),
    [anon_sym_invocation_directory] = ACTIONS(262),
    [anon_sym_invocation_directory_native] = ACTIONS(262),
    [anon_sym_justfile] = ACTIONS(262),
    [anon_sym_justfile_dir] = ACTIONS(262),
    [anon_sym_justfile_directory] = ACTIONS(262),
    [anon_sym_source_dir] = ACTIONS(262),
    [anon_sym_source_directory] = ACTIONS(262),
    [anon_sym_source_file] = ACTIONS(262),
    [anon_sym_just_executable] = ACTIONS(262),
    [anon_sym_just_pid] = ACTIONS(262),
    [anon_sym_append] = ACTIONS(262),
    [anon_sym_prepend] = ACTIONS(262),
    [anon_sym_encode_uri_component] = ACTIONS(262),
    [anon_sym_quote] = ACTIONS(262),
    [anon_sym_replace] = ACTIONS(262),
    [anon_sym_replace_regex] = ACTIONS(262),
    [anon_sym_trim] = ACTIONS(262),
    [anon_sym_trim_end] = ACTIONS(262),
    [anon_sym_trim_end_match] = ACTIONS(262),
    [anon_sym_trim_end_matches] = ACTIONS(262),
    [anon_sym_trim_start] = ACTIONS(262),
    [anon_sym_trim_start_match] = ACTIONS(262),
    [anon_sym_trim_start_matches] = ACTIONS(262),
    [anon_sym_capitalize] = ACTIONS(262),
    [anon_sym_kebabcase] = ACTIONS(262),
    [anon_sym_lowercamelcase] = ACTIONS(262),
    [anon_sym_lowercase] = ACTIONS(262),
    [anon_sym_shoutykebabcase] = ACTIONS(262),
    [anon_sym_shoutysnakecase] = ACTIONS(262),
    [anon_sym_snakecase] = ACTIONS(262),
    [anon_sym_titlecase] = ACTIONS(262),
    [anon_sym_uppercamelcase] = ACTIONS(262),
    [anon_sym_uppercase] = ACTIONS(262),
    [anon_sym_absolute_path] = ACTIONS(262),
    [anon_sym_canonicalize] = ACTIONS(262),
    [anon_sym_extension] = ACTIONS(262),
    [anon_sym_file_name] = ACTIONS(262),
    [anon_sym_file_stem] = ACTIONS(262),
    [anon_sym_parent_dir] = ACTIONS(262),
    [anon_sym_parent_directory] = ACTIONS(262),
    [anon_sym_without_extension] = ACTIONS(262),
    [anon_sym_clean] = ACTIONS(262),
    [anon_sym_join] = ACTIONS(262),
    [anon_sym_path_exists] = ACTIONS(262),
    [anon_sym_error] = ACTIONS(262),
    [anon_sym_blake3] = ACTIONS(262),
    [anon_sym_blake3_file] = ACTIONS(262),
    [anon_sym_sha256] = ACTIONS(262),
    [anon_sym_sha256_file] = ACTIONS(262),
    [anon_sym_uuid] = ACTIONS(262),
    [anon_sym_choose] = ACTIONS(262),
    [anon_sym_datetime] = ACTIONS(262),
    [anon_sym_datetime_utc] = ACTIONS(262),
    [anon_sym_semver_matches] = ACTIONS(262),
    [anon_sym_cache_dir] = ACTIONS(262),
    [anon_sym_cache_directory] = ACTIONS(262),
    [anon_sym_config_dir] = ACTIONS(262),
    [anon_sym_config_directory] = ACTIONS(262),
    [anon_sym_config_local_dir] = ACTIONS(262),
    [anon_sym_config_local_directory] = ACTIONS(262),
    [anon_sym_data_dir] = ACTIONS(262),
    [anon_sym_data_directory] = ACTIONS(262),
    [anon_sym_data_local_dir] = ACTIONS(262),
    [anon_sym_data_local_directory] = ACTIONS(262),
    [anon_sym_executable_dir] = ACTIONS(262),
    [anon_sym_executable_directory] = ACTIONS(262),
    [anon_sym_home_dir] = ACTIONS(262),
    [anon_sym_home_directory] = ACTIONS(262),
    [anon_sym_BQUOTE] = ACTIONS(262),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(260),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(260),
    [anon_sym_DQUOTE] = ACTIONS(262),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(260),
    [anon_sym_SQUOTE] = ACTIONS(262),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [62] = {
    [sym_comment] = STATE(62),
    [ts_builtin_sym_end] = ACTIONS(264),
    [sym_identifier] = ACTIONS(266),
    [anon_sym_alias] = ACTIONS(266),
    [anon_sym_export] = ACTIONS(266),
    [aux_sym_import_token1] = ACTIONS(266),
    [aux_sym_mod_token1] = ACTIONS(266),
    [anon_sym_set] = ACTIONS(266),
    [anon_sym_shell] = ACTIONS(266),
    [anon_sym_if] = ACTIONS(266),
    [anon_sym_assert] = ACTIONS(266),
    [anon_sym_LPAREN] = ACTIONS(264),
    [anon_sym_arch] = ACTIONS(266),
    [anon_sym_num_cpus] = ACTIONS(266),
    [anon_sym_os] = ACTIONS(266),
    [anon_sym_os_family] = ACTIONS(266),
    [anon_sym_env_var] = ACTIONS(266),
    [anon_sym_env_var_or_default] = ACTIONS(266),
    [anon_sym_env] = ACTIONS(266),
    [anon_sym_is_dependency] = ACTIONS(266),
    [anon_sym_invocation_dir] = ACTIONS(266),
    [anon_sym_invocation_dir_native] = ACTIONS(266),
    [anon_sym_invocation_directory] = ACTIONS(266),
    [anon_sym_invocation_directory_native] = ACTIONS(266),
    [anon_sym_justfile] = ACTIONS(266),
    [anon_sym_justfile_dir] = ACTIONS(266),
    [anon_sym_justfile_directory] = ACTIONS(266),
    [anon_sym_source_dir] = ACTIONS(266),
    [anon_sym_source_directory] = ACTIONS(266),
    [anon_sym_source_file] = ACTIONS(266),
    [anon_sym_just_executable] = ACTIONS(266),
    [anon_sym_just_pid] = ACTIONS(266),
    [anon_sym_append] = ACTIONS(266),
    [anon_sym_prepend] = ACTIONS(266),
    [anon_sym_encode_uri_component] = ACTIONS(266),
    [anon_sym_quote] = ACTIONS(266),
    [anon_sym_replace] = ACTIONS(266),
    [anon_sym_replace_regex] = ACTIONS(266),
    [anon_sym_trim] = ACTIONS(266),
    [anon_sym_trim_end] = ACTIONS(266),
    [anon_sym_trim_end_match] = ACTIONS(266),
    [anon_sym_trim_end_matches] = ACTIONS(266),
    [anon_sym_trim_start] = ACTIONS(266),
    [anon_sym_trim_start_match] = ACTIONS(266),
    [anon_sym_trim_start_matches] = ACTIONS(266),
    [anon_sym_capitalize] = ACTIONS(266),
    [anon_sym_kebabcase] = ACTIONS(266),
    [anon_sym_lowercamelcase] = ACTIONS(266),
    [anon_sym_lowercase] = ACTIONS(266),
    [anon_sym_shoutykebabcase] = ACTIONS(266),
    [anon_sym_shoutysnakecase] = ACTIONS(266),
    [anon_sym_snakecase] = ACTIONS(266),
    [anon_sym_titlecase] = ACTIONS(266),
    [anon_sym_uppercamelcase] = ACTIONS(266),
    [anon_sym_uppercase] = ACTIONS(266),
    [anon_sym_absolute_path] = ACTIONS(266),
    [anon_sym_canonicalize] = ACTIONS(266),
    [anon_sym_extension] = ACTIONS(266),
    [anon_sym_file_name] = ACTIONS(266),
    [anon_sym_file_stem] = ACTIONS(266),
    [anon_sym_parent_dir] = ACTIONS(266),
    [anon_sym_parent_directory] = ACTIONS(266),
    [anon_sym_without_extension] = ACTIONS(266),
    [anon_sym_clean] = ACTIONS(266),
    [anon_sym_join] = ACTIONS(266),
    [anon_sym_path_exists] = ACTIONS(266),
    [anon_sym_error] = ACTIONS(266),
    [anon_sym_blake3] = ACTIONS(266),
    [anon_sym_blake3_file] = ACTIONS(266),
    [anon_sym_sha256] = ACTIONS(266),
    [anon_sym_sha256_file] = ACTIONS(266),
    [anon_sym_uuid] = ACTIONS(266),
    [anon_sym_choose] = ACTIONS(266),
    [anon_sym_datetime] = ACTIONS(266),
    [anon_sym_datetime_utc] = ACTIONS(266),
    [anon_sym_semver_matches] = ACTIONS(266),
    [anon_sym_cache_dir] = ACTIONS(266),
    [anon_sym_cache_directory] = ACTIONS(266),
    [anon_sym_config_dir] = ACTIONS(266),
    [anon_sym_config_directory] = ACTIONS(266),
    [anon_sym_config_local_dir] = ACTIONS(266),
    [anon_sym_config_local_directory] = ACTIONS(266),
    [anon_sym_data_dir] = ACTIONS(266),
    [anon_sym_data_directory] = ACTIONS(266),
    [anon_sym_data_local_dir] = ACTIONS(266),
    [anon_sym_data_local_directory] = ACTIONS(266),
    [anon_sym_executable_dir] = ACTIONS(266),
    [anon_sym_executable_directory] = ACTIONS(266),
    [anon_sym_home_dir] = ACTIONS(266),
    [anon_sym_home_directory] = ACTIONS(266),
    [anon_sym_BQUOTE] = ACTIONS(266),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(264),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(264),
    [anon_sym_DQUOTE] = ACTIONS(266),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(264),
    [anon_sym_SQUOTE] = ACTIONS(266),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [63] = {
    [sym_comment] = STATE(63),
    [ts_builtin_sym_end] = ACTIONS(268),
    [sym_identifier] = ACTIONS(270),
    [anon_sym_alias] = ACTIONS(270),
    [anon_sym_export] = ACTIONS(270),
    [aux_sym_import_token1] = ACTIONS(270),
    [aux_sym_mod_token1] = ACTIONS(270),
    [anon_sym_set] = ACTIONS(270),
    [anon_sym_shell] = ACTIONS(270),
    [anon_sym_if] = ACTIONS(270),
    [anon_sym_assert] = ACTIONS(270),
    [anon_sym_LPAREN] = ACTIONS(268),
    [anon_sym_arch] = ACTIONS(270),
    [anon_sym_num_cpus] = ACTIONS(270),
    [anon_sym_os] = ACTIONS(270),
    [anon_sym_os_family] = ACTIONS(270),
    [anon_sym_env_var] = ACTIONS(270),
    [anon_sym_env_var_or_default] = ACTIONS(270),
    [anon_sym_env] = ACTIONS(270),
    [anon_sym_is_dependency] = ACTIONS(270),
    [anon_sym_invocation_dir] = ACTIONS(270),
    [anon_sym_invocation_dir_native] = ACTIONS(270),
    [anon_sym_invocation_directory] = ACTIONS(270),
    [anon_sym_invocation_directory_native] = ACTIONS(270),
    [anon_sym_justfile] = ACTIONS(270),
    [anon_sym_justfile_dir] = ACTIONS(270),
    [anon_sym_justfile_directory] = ACTIONS(270),
    [anon_sym_source_dir] = ACTIONS(270),
    [anon_sym_source_directory] = ACTIONS(270),
    [anon_sym_source_file] = ACTIONS(270),
    [anon_sym_just_executable] = ACTIONS(270),
    [anon_sym_just_pid] = ACTIONS(270),
    [anon_sym_append] = ACTIONS(270),
    [anon_sym_prepend] = ACTIONS(270),
    [anon_sym_encode_uri_component] = ACTIONS(270),
    [anon_sym_quote] = ACTIONS(270),
    [anon_sym_replace] = ACTIONS(270),
    [anon_sym_replace_regex] = ACTIONS(270),
    [anon_sym_trim] = ACTIONS(270),
    [anon_sym_trim_end] = ACTIONS(270),
    [anon_sym_trim_end_match] = ACTIONS(270),
    [anon_sym_trim_end_matches] = ACTIONS(270),
    [anon_sym_trim_start] = ACTIONS(270),
    [anon_sym_trim_start_match] = ACTIONS(270),
    [anon_sym_trim_start_matches] = ACTIONS(270),
    [anon_sym_capitalize] = ACTIONS(270),
    [anon_sym_kebabcase] = ACTIONS(270),
    [anon_sym_lowercamelcase] = ACTIONS(270),
    [anon_sym_lowercase] = ACTIONS(270),
    [anon_sym_shoutykebabcase] = ACTIONS(270),
    [anon_sym_shoutysnakecase] = ACTIONS(270),
    [anon_sym_snakecase] = ACTIONS(270),
    [anon_sym_titlecase] = ACTIONS(270),
    [anon_sym_uppercamelcase] = ACTIONS(270),
    [anon_sym_uppercase] = ACTIONS(270),
    [anon_sym_absolute_path] = ACTIONS(270),
    [anon_sym_canonicalize] = ACTIONS(270),
    [anon_sym_extension] = ACTIONS(270),
    [anon_sym_file_name] = ACTIONS(270),
    [anon_sym_file_stem] = ACTIONS(270),
    [anon_sym_parent_dir] = ACTIONS(270),
    [anon_sym_parent_directory] = ACTIONS(270),
    [anon_sym_without_extension] = ACTIONS(270),
    [anon_sym_clean] = ACTIONS(270),
    [anon_sym_join] = ACTIONS(270),
    [anon_sym_path_exists] = ACTIONS(270),
    [anon_sym_error] = ACTIONS(270),
    [anon_sym_blake3] = ACTIONS(270),
    [anon_sym_blake3_file] = ACTIONS(270),
    [anon_sym_sha256] = ACTIONS(270),
    [anon_sym_sha256_file] = ACTIONS(270),
    [anon_sym_uuid] = ACTIONS(270),
    [anon_sym_choose] = ACTIONS(270),
    [anon_sym_datetime] = ACTIONS(270),
    [anon_sym_datetime_utc] = ACTIONS(270),
    [anon_sym_semver_matches] = ACTIONS(270),
    [anon_sym_cache_dir] = ACTIONS(270),
    [anon_sym_cache_directory] = ACTIONS(270),
    [anon_sym_config_dir] = ACTIONS(270),
    [anon_sym_config_directory] = ACTIONS(270),
    [anon_sym_config_local_dir] = ACTIONS(270),
    [anon_sym_config_local_directory] = ACTIONS(270),
    [anon_sym_data_dir] = ACTIONS(270),
    [anon_sym_data_directory] = ACTIONS(270),
    [anon_sym_data_local_dir] = ACTIONS(270),
    [anon_sym_data_local_directory] = ACTIONS(270),
    [anon_sym_executable_dir] = ACTIONS(270),
    [anon_sym_executable_directory] = ACTIONS(270),
    [anon_sym_home_dir] = ACTIONS(270),
    [anon_sym_home_directory] = ACTIONS(270),
    [anon_sym_BQUOTE] = ACTIONS(270),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(268),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(268),
    [anon_sym_DQUOTE] = ACTIONS(270),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(268),
    [anon_sym_SQUOTE] = ACTIONS(270),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [64] = {
    [sym_comment] = STATE(64),
    [ts_builtin_sym_end] = ACTIONS(272),
    [sym_identifier] = ACTIONS(274),
    [anon_sym_alias] = ACTIONS(274),
    [anon_sym_export] = ACTIONS(274),
    [aux_sym_import_token1] = ACTIONS(274),
    [aux_sym_mod_token1] = ACTIONS(274),
    [anon_sym_set] = ACTIONS(274),
    [anon_sym_shell] = ACTIONS(274),
    [anon_sym_if] = ACTIONS(274),
    [anon_sym_assert] = ACTIONS(274),
    [anon_sym_LPAREN] = ACTIONS(272),
    [anon_sym_arch] = ACTIONS(274),
    [anon_sym_num_cpus] = ACTIONS(274),
    [anon_sym_os] = ACTIONS(274),
    [anon_sym_os_family] = ACTIONS(274),
    [anon_sym_env_var] = ACTIONS(274),
    [anon_sym_env_var_or_default] = ACTIONS(274),
    [anon_sym_env] = ACTIONS(274),
    [anon_sym_is_dependency] = ACTIONS(274),
    [anon_sym_invocation_dir] = ACTIONS(274),
    [anon_sym_invocation_dir_native] = ACTIONS(274),
    [anon_sym_invocation_directory] = ACTIONS(274),
    [anon_sym_invocation_directory_native] = ACTIONS(274),
    [anon_sym_justfile] = ACTIONS(274),
    [anon_sym_justfile_dir] = ACTIONS(274),
    [anon_sym_justfile_directory] = ACTIONS(274),
    [anon_sym_source_dir] = ACTIONS(274),
    [anon_sym_source_directory] = ACTIONS(274),
    [anon_sym_source_file] = ACTIONS(274),
    [anon_sym_just_executable] = ACTIONS(274),
    [anon_sym_just_pid] = ACTIONS(274),
    [anon_sym_append] = ACTIONS(274),
    [anon_sym_prepend] = ACTIONS(274),
    [anon_sym_encode_uri_component] = ACTIONS(274),
    [anon_sym_quote] = ACTIONS(274),
    [anon_sym_replace] = ACTIONS(274),
    [anon_sym_replace_regex] = ACTIONS(274),
    [anon_sym_trim] = ACTIONS(274),
    [anon_sym_trim_end] = ACTIONS(274),
    [anon_sym_trim_end_match] = ACTIONS(274),
    [anon_sym_trim_end_matches] = ACTIONS(274),
    [anon_sym_trim_start] = ACTIONS(274),
    [anon_sym_trim_start_match] = ACTIONS(274),
    [anon_sym_trim_start_matches] = ACTIONS(274),
    [anon_sym_capitalize] = ACTIONS(274),
    [anon_sym_kebabcase] = ACTIONS(274),
    [anon_sym_lowercamelcase] = ACTIONS(274),
    [anon_sym_lowercase] = ACTIONS(274),
    [anon_sym_shoutykebabcase] = ACTIONS(274),
    [anon_sym_shoutysnakecase] = ACTIONS(274),
    [anon_sym_snakecase] = ACTIONS(274),
    [anon_sym_titlecase] = ACTIONS(274),
    [anon_sym_uppercamelcase] = ACTIONS(274),
    [anon_sym_uppercase] = ACTIONS(274),
    [anon_sym_absolute_path] = ACTIONS(274),
    [anon_sym_canonicalize] = ACTIONS(274),
    [anon_sym_extension] = ACTIONS(274),
    [anon_sym_file_name] = ACTIONS(274),
    [anon_sym_file_stem] = ACTIONS(274),
    [anon_sym_parent_dir] = ACTIONS(274),
    [anon_sym_parent_directory] = ACTIONS(274),
    [anon_sym_without_extension] = ACTIONS(274),
    [anon_sym_clean] = ACTIONS(274),
    [anon_sym_join] = ACTIONS(274),
    [anon_sym_path_exists] = ACTIONS(274),
    [anon_sym_error] = ACTIONS(274),
    [anon_sym_blake3] = ACTIONS(274),
    [anon_sym_blake3_file] = ACTIONS(274),
    [anon_sym_sha256] = ACTIONS(274),
    [anon_sym_sha256_file] = ACTIONS(274),
    [anon_sym_uuid] = ACTIONS(274),
    [anon_sym_choose] = ACTIONS(274),
    [anon_sym_datetime] = ACTIONS(274),
    [anon_sym_datetime_utc] = ACTIONS(274),
    [anon_sym_semver_matches] = ACTIONS(274),
    [anon_sym_cache_dir] = ACTIONS(274),
    [anon_sym_cache_directory] = ACTIONS(274),
    [anon_sym_config_dir] = ACTIONS(274),
    [anon_sym_config_directory] = ACTIONS(274),
    [anon_sym_config_local_dir] = ACTIONS(274),
    [anon_sym_config_local_directory] = ACTIONS(274),
    [anon_sym_data_dir] = ACTIONS(274),
    [anon_sym_data_directory] = ACTIONS(274),
    [anon_sym_data_local_dir] = ACTIONS(274),
    [anon_sym_data_local_directory] = ACTIONS(274),
    [anon_sym_executable_dir] = ACTIONS(274),
    [anon_sym_executable_directory] = ACTIONS(274),
    [anon_sym_home_dir] = ACTIONS(274),
    [anon_sym_home_directory] = ACTIONS(274),
    [anon_sym_BQUOTE] = ACTIONS(274),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(272),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(272),
    [anon_sym_DQUOTE] = ACTIONS(274),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(272),
    [anon_sym_SQUOTE] = ACTIONS(274),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [65] = {
    [sym_comment] = STATE(65),
    [ts_builtin_sym_end] = ACTIONS(276),
    [sym_identifier] = ACTIONS(278),
    [anon_sym_alias] = ACTIONS(278),
    [anon_sym_export] = ACTIONS(278),
    [aux_sym_import_token1] = ACTIONS(278),
    [aux_sym_mod_token1] = ACTIONS(278),
    [anon_sym_set] = ACTIONS(278),
    [anon_sym_shell] = ACTIONS(278),
    [anon_sym_if] = ACTIONS(278),
    [anon_sym_assert] = ACTIONS(278),
    [anon_sym_LPAREN] = ACTIONS(276),
    [anon_sym_arch] = ACTIONS(278),
    [anon_sym_num_cpus] = ACTIONS(278),
    [anon_sym_os] = ACTIONS(278),
    [anon_sym_os_family] = ACTIONS(278),
    [anon_sym_env_var] = ACTIONS(278),
    [anon_sym_env_var_or_default] = ACTIONS(278),
    [anon_sym_env] = ACTIONS(278),
    [anon_sym_is_dependency] = ACTIONS(278),
    [anon_sym_invocation_dir] = ACTIONS(278),
    [anon_sym_invocation_dir_native] = ACTIONS(278),
    [anon_sym_invocation_directory] = ACTIONS(278),
    [anon_sym_invocation_directory_native] = ACTIONS(278),
    [anon_sym_justfile] = ACTIONS(278),
    [anon_sym_justfile_dir] = ACTIONS(278),
    [anon_sym_justfile_directory] = ACTIONS(278),
    [anon_sym_source_dir] = ACTIONS(278),
    [anon_sym_source_directory] = ACTIONS(278),
    [anon_sym_source_file] = ACTIONS(278),
    [anon_sym_just_executable] = ACTIONS(278),
    [anon_sym_just_pid] = ACTIONS(278),
    [anon_sym_append] = ACTIONS(278),
    [anon_sym_prepend] = ACTIONS(278),
    [anon_sym_encode_uri_component] = ACTIONS(278),
    [anon_sym_quote] = ACTIONS(278),
    [anon_sym_replace] = ACTIONS(278),
    [anon_sym_replace_regex] = ACTIONS(278),
    [anon_sym_trim] = ACTIONS(278),
    [anon_sym_trim_end] = ACTIONS(278),
    [anon_sym_trim_end_match] = ACTIONS(278),
    [anon_sym_trim_end_matches] = ACTIONS(278),
    [anon_sym_trim_start] = ACTIONS(278),
    [anon_sym_trim_start_match] = ACTIONS(278),
    [anon_sym_trim_start_matches] = ACTIONS(278),
    [anon_sym_capitalize] = ACTIONS(278),
    [anon_sym_kebabcase] = ACTIONS(278),
    [anon_sym_lowercamelcase] = ACTIONS(278),
    [anon_sym_lowercase] = ACTIONS(278),
    [anon_sym_shoutykebabcase] = ACTIONS(278),
    [anon_sym_shoutysnakecase] = ACTIONS(278),
    [anon_sym_snakecase] = ACTIONS(278),
    [anon_sym_titlecase] = ACTIONS(278),
    [anon_sym_uppercamelcase] = ACTIONS(278),
    [anon_sym_uppercase] = ACTIONS(278),
    [anon_sym_absolute_path] = ACTIONS(278),
    [anon_sym_canonicalize] = ACTIONS(278),
    [anon_sym_extension] = ACTIONS(278),
    [anon_sym_file_name] = ACTIONS(278),
    [anon_sym_file_stem] = ACTIONS(278),
    [anon_sym_parent_dir] = ACTIONS(278),
    [anon_sym_parent_directory] = ACTIONS(278),
    [anon_sym_without_extension] = ACTIONS(278),
    [anon_sym_clean] = ACTIONS(278),
    [anon_sym_join] = ACTIONS(278),
    [anon_sym_path_exists] = ACTIONS(278),
    [anon_sym_error] = ACTIONS(278),
    [anon_sym_blake3] = ACTIONS(278),
    [anon_sym_blake3_file] = ACTIONS(278),
    [anon_sym_sha256] = ACTIONS(278),
    [anon_sym_sha256_file] = ACTIONS(278),
    [anon_sym_uuid] = ACTIONS(278),
    [anon_sym_choose] = ACTIONS(278),
    [anon_sym_datetime] = ACTIONS(278),
    [anon_sym_datetime_utc] = ACTIONS(278),
    [anon_sym_semver_matches] = ACTIONS(278),
    [anon_sym_cache_dir] = ACTIONS(278),
    [anon_sym_cache_directory] = ACTIONS(278),
    [anon_sym_config_dir] = ACTIONS(278),
    [anon_sym_config_directory] = ACTIONS(278),
    [anon_sym_config_local_dir] = ACTIONS(278),
    [anon_sym_config_local_directory] = ACTIONS(278),
    [anon_sym_data_dir] = ACTIONS(278),
    [anon_sym_data_directory] = ACTIONS(278),
    [anon_sym_data_local_dir] = ACTIONS(278),
    [anon_sym_data_local_directory] = ACTIONS(278),
    [anon_sym_executable_dir] = ACTIONS(278),
    [anon_sym_executable_directory] = ACTIONS(278),
    [anon_sym_home_dir] = ACTIONS(278),
    [anon_sym_home_directory] = ACTIONS(278),
    [anon_sym_BQUOTE] = ACTIONS(278),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(276),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(276),
    [anon_sym_DQUOTE] = ACTIONS(278),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(276),
    [anon_sym_SQUOTE] = ACTIONS(278),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [66] = {
    [sym_comment] = STATE(66),
    [ts_builtin_sym_end] = ACTIONS(280),
    [sym_identifier] = ACTIONS(282),
    [anon_sym_alias] = ACTIONS(282),
    [anon_sym_export] = ACTIONS(282),
    [aux_sym_import_token1] = ACTIONS(282),
    [aux_sym_mod_token1] = ACTIONS(282),
    [anon_sym_set] = ACTIONS(282),
    [anon_sym_shell] = ACTIONS(282),
    [anon_sym_if] = ACTIONS(282),
    [anon_sym_assert] = ACTIONS(282),
    [anon_sym_LPAREN] = ACTIONS(280),
    [anon_sym_arch] = ACTIONS(282),
    [anon_sym_num_cpus] = ACTIONS(282),
    [anon_sym_os] = ACTIONS(282),
    [anon_sym_os_family] = ACTIONS(282),
    [anon_sym_env_var] = ACTIONS(282),
    [anon_sym_env_var_or_default] = ACTIONS(282),
    [anon_sym_env] = ACTIONS(282),
    [anon_sym_is_dependency] = ACTIONS(282),
    [anon_sym_invocation_dir] = ACTIONS(282),
    [anon_sym_invocation_dir_native] = ACTIONS(282),
    [anon_sym_invocation_directory] = ACTIONS(282),
    [anon_sym_invocation_directory_native] = ACTIONS(282),
    [anon_sym_justfile] = ACTIONS(282),
    [anon_sym_justfile_dir] = ACTIONS(282),
    [anon_sym_justfile_directory] = ACTIONS(282),
    [anon_sym_source_dir] = ACTIONS(282),
    [anon_sym_source_directory] = ACTIONS(282),
    [anon_sym_source_file] = ACTIONS(282),
    [anon_sym_just_executable] = ACTIONS(282),
    [anon_sym_just_pid] = ACTIONS(282),
    [anon_sym_append] = ACTIONS(282),
    [anon_sym_prepend] = ACTIONS(282),
    [anon_sym_encode_uri_component] = ACTIONS(282),
    [anon_sym_quote] = ACTIONS(282),
    [anon_sym_replace] = ACTIONS(282),
    [anon_sym_replace_regex] = ACTIONS(282),
    [anon_sym_trim] = ACTIONS(282),
    [anon_sym_trim_end] = ACTIONS(282),
    [anon_sym_trim_end_match] = ACTIONS(282),
    [anon_sym_trim_end_matches] = ACTIONS(282),
    [anon_sym_trim_start] = ACTIONS(282),
    [anon_sym_trim_start_match] = ACTIONS(282),
    [anon_sym_trim_start_matches] = ACTIONS(282),
    [anon_sym_capitalize] = ACTIONS(282),
    [anon_sym_kebabcase] = ACTIONS(282),
    [anon_sym_lowercamelcase] = ACTIONS(282),
    [anon_sym_lowercase] = ACTIONS(282),
    [anon_sym_shoutykebabcase] = ACTIONS(282),
    [anon_sym_shoutysnakecase] = ACTIONS(282),
    [anon_sym_snakecase] = ACTIONS(282),
    [anon_sym_titlecase] = ACTIONS(282),
    [anon_sym_uppercamelcase] = ACTIONS(282),
    [anon_sym_uppercase] = ACTIONS(282),
    [anon_sym_absolute_path] = ACTIONS(282),
    [anon_sym_canonicalize] = ACTIONS(282),
    [anon_sym_extension] = ACTIONS(282),
    [anon_sym_file_name] = ACTIONS(282),
    [anon_sym_file_stem] = ACTIONS(282),
    [anon_sym_parent_dir] = ACTIONS(282),
    [anon_sym_parent_directory] = ACTIONS(282),
    [anon_sym_without_extension] = ACTIONS(282),
    [anon_sym_clean] = ACTIONS(282),
    [anon_sym_join] = ACTIONS(282),
    [anon_sym_path_exists] = ACTIONS(282),
    [anon_sym_error] = ACTIONS(282),
    [anon_sym_blake3] = ACTIONS(282),
    [anon_sym_blake3_file] = ACTIONS(282),
    [anon_sym_sha256] = ACTIONS(282),
    [anon_sym_sha256_file] = ACTIONS(282),
    [anon_sym_uuid] = ACTIONS(282),
    [anon_sym_choose] = ACTIONS(282),
    [anon_sym_datetime] = ACTIONS(282),
    [anon_sym_datetime_utc] = ACTIONS(282),
    [anon_sym_semver_matches] = ACTIONS(282),
    [anon_sym_cache_dir] = ACTIONS(282),
    [anon_sym_cache_directory] = ACTIONS(282),
    [anon_sym_config_dir] = ACTIONS(282),
    [anon_sym_config_directory] = ACTIONS(282),
    [anon_sym_config_local_dir] = ACTIONS(282),
    [anon_sym_config_local_directory] = ACTIONS(282),
    [anon_sym_data_dir] = ACTIONS(282),
    [anon_sym_data_directory] = ACTIONS(282),
    [anon_sym_data_local_dir] = ACTIONS(282),
    [anon_sym_data_local_directory] = ACTIONS(282),
    [anon_sym_executable_dir] = ACTIONS(282),
    [anon_sym_executable_directory] = ACTIONS(282),
    [anon_sym_home_dir] = ACTIONS(282),
    [anon_sym_home_directory] = ACTIONS(282),
    [anon_sym_BQUOTE] = ACTIONS(282),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(280),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(280),
    [anon_sym_DQUOTE] = ACTIONS(282),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(280),
    [anon_sym_SQUOTE] = ACTIONS(282),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [67] = {
    [sym_comment] = STATE(67),
    [ts_builtin_sym_end] = ACTIONS(284),
    [sym_identifier] = ACTIONS(286),
    [anon_sym_alias] = ACTIONS(286),
    [anon_sym_export] = ACTIONS(286),
    [aux_sym_import_token1] = ACTIONS(286),
    [aux_sym_mod_token1] = ACTIONS(286),
    [anon_sym_set] = ACTIONS(286),
    [anon_sym_shell] = ACTIONS(286),
    [anon_sym_if] = ACTIONS(286),
    [anon_sym_assert] = ACTIONS(286),
    [anon_sym_LPAREN] = ACTIONS(284),
    [anon_sym_arch] = ACTIONS(286),
    [anon_sym_num_cpus] = ACTIONS(286),
    [anon_sym_os] = ACTIONS(286),
    [anon_sym_os_family] = ACTIONS(286),
    [anon_sym_env_var] = ACTIONS(286),
    [anon_sym_env_var_or_default] = ACTIONS(286),
    [anon_sym_env] = ACTIONS(286),
    [anon_sym_is_dependency] = ACTIONS(286),
    [anon_sym_invocation_dir] = ACTIONS(286),
    [anon_sym_invocation_dir_native] = ACTIONS(286),
    [anon_sym_invocation_directory] = ACTIONS(286),
    [anon_sym_invocation_directory_native] = ACTIONS(286),
    [anon_sym_justfile] = ACTIONS(286),
    [anon_sym_justfile_dir] = ACTIONS(286),
    [anon_sym_justfile_directory] = ACTIONS(286),
    [anon_sym_source_dir] = ACTIONS(286),
    [anon_sym_source_directory] = ACTIONS(286),
    [anon_sym_source_file] = ACTIONS(286),
    [anon_sym_just_executable] = ACTIONS(286),
    [anon_sym_just_pid] = ACTIONS(286),
    [anon_sym_append] = ACTIONS(286),
    [anon_sym_prepend] = ACTIONS(286),
    [anon_sym_encode_uri_component] = ACTIONS(286),
    [anon_sym_quote] = ACTIONS(286),
    [anon_sym_replace] = ACTIONS(286),
    [anon_sym_replace_regex] = ACTIONS(286),
    [anon_sym_trim] = ACTIONS(286),
    [anon_sym_trim_end] = ACTIONS(286),
    [anon_sym_trim_end_match] = ACTIONS(286),
    [anon_sym_trim_end_matches] = ACTIONS(286),
    [anon_sym_trim_start] = ACTIONS(286),
    [anon_sym_trim_start_match] = ACTIONS(286),
    [anon_sym_trim_start_matches] = ACTIONS(286),
    [anon_sym_capitalize] = ACTIONS(286),
    [anon_sym_kebabcase] = ACTIONS(286),
    [anon_sym_lowercamelcase] = ACTIONS(286),
    [anon_sym_lowercase] = ACTIONS(286),
    [anon_sym_shoutykebabcase] = ACTIONS(286),
    [anon_sym_shoutysnakecase] = ACTIONS(286),
    [anon_sym_snakecase] = ACTIONS(286),
    [anon_sym_titlecase] = ACTIONS(286),
    [anon_sym_uppercamelcase] = ACTIONS(286),
    [anon_sym_uppercase] = ACTIONS(286),
    [anon_sym_absolute_path] = ACTIONS(286),
    [anon_sym_canonicalize] = ACTIONS(286),
    [anon_sym_extension] = ACTIONS(286),
    [anon_sym_file_name] = ACTIONS(286),
    [anon_sym_file_stem] = ACTIONS(286),
    [anon_sym_parent_dir] = ACTIONS(286),
    [anon_sym_parent_directory] = ACTIONS(286),
    [anon_sym_without_extension] = ACTIONS(286),
    [anon_sym_clean] = ACTIONS(286),
    [anon_sym_join] = ACTIONS(286),
    [anon_sym_path_exists] = ACTIONS(286),
    [anon_sym_error] = ACTIONS(286),
    [anon_sym_blake3] = ACTIONS(286),
    [anon_sym_blake3_file] = ACTIONS(286),
    [anon_sym_sha256] = ACTIONS(286),
    [anon_sym_sha256_file] = ACTIONS(286),
    [anon_sym_uuid] = ACTIONS(286),
    [anon_sym_choose] = ACTIONS(286),
    [anon_sym_datetime] = ACTIONS(286),
    [anon_sym_datetime_utc] = ACTIONS(286),
    [anon_sym_semver_matches] = ACTIONS(286),
    [anon_sym_cache_dir] = ACTIONS(286),
    [anon_sym_cache_directory] = ACTIONS(286),
    [anon_sym_config_dir] = ACTIONS(286),
    [anon_sym_config_directory] = ACTIONS(286),
    [anon_sym_config_local_dir] = ACTIONS(286),
    [anon_sym_config_local_directory] = ACTIONS(286),
    [anon_sym_data_dir] = ACTIONS(286),
    [anon_sym_data_directory] = ACTIONS(286),
    [anon_sym_data_local_dir] = ACTIONS(286),
    [anon_sym_data_local_directory] = ACTIONS(286),
    [anon_sym_executable_dir] = ACTIONS(286),
    [anon_sym_executable_directory] = ACTIONS(286),
    [anon_sym_home_dir] = ACTIONS(286),
    [anon_sym_home_directory] = ACTIONS(286),
    [anon_sym_BQUOTE] = ACTIONS(286),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(284),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(284),
    [anon_sym_DQUOTE] = ACTIONS(286),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(284),
    [anon_sym_SQUOTE] = ACTIONS(286),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [68] = {
    [sym_comment] = STATE(68),
    [ts_builtin_sym_end] = ACTIONS(288),
    [sym_identifier] = ACTIONS(290),
    [anon_sym_alias] = ACTIONS(290),
    [anon_sym_export] = ACTIONS(290),
    [aux_sym_import_token1] = ACTIONS(290),
    [aux_sym_mod_token1] = ACTIONS(290),
    [anon_sym_set] = ACTIONS(290),
    [anon_sym_shell] = ACTIONS(290),
    [anon_sym_if] = ACTIONS(290),
    [anon_sym_assert] = ACTIONS(290),
    [anon_sym_LPAREN] = ACTIONS(288),
    [anon_sym_arch] = ACTIONS(290),
    [anon_sym_num_cpus] = ACTIONS(290),
    [anon_sym_os] = ACTIONS(290),
    [anon_sym_os_family] = ACTIONS(290),
    [anon_sym_env_var] = ACTIONS(290),
    [anon_sym_env_var_or_default] = ACTIONS(290),
    [anon_sym_env] = ACTIONS(290),
    [anon_sym_is_dependency] = ACTIONS(290),
    [anon_sym_invocation_dir] = ACTIONS(290),
    [anon_sym_invocation_dir_native] = ACTIONS(290),
    [anon_sym_invocation_directory] = ACTIONS(290),
    [anon_sym_invocation_directory_native] = ACTIONS(290),
    [anon_sym_justfile] = ACTIONS(290),
    [anon_sym_justfile_dir] = ACTIONS(290),
    [anon_sym_justfile_directory] = ACTIONS(290),
    [anon_sym_source_dir] = ACTIONS(290),
    [anon_sym_source_directory] = ACTIONS(290),
    [anon_sym_source_file] = ACTIONS(290),
    [anon_sym_just_executable] = ACTIONS(290),
    [anon_sym_just_pid] = ACTIONS(290),
    [anon_sym_append] = ACTIONS(290),
    [anon_sym_prepend] = ACTIONS(290),
    [anon_sym_encode_uri_component] = ACTIONS(290),
    [anon_sym_quote] = ACTIONS(290),
    [anon_sym_replace] = ACTIONS(290),
    [anon_sym_replace_regex] = ACTIONS(290),
    [anon_sym_trim] = ACTIONS(290),
    [anon_sym_trim_end] = ACTIONS(290),
    [anon_sym_trim_end_match] = ACTIONS(290),
    [anon_sym_trim_end_matches] = ACTIONS(290),
    [anon_sym_trim_start] = ACTIONS(290),
    [anon_sym_trim_start_match] = ACTIONS(290),
    [anon_sym_trim_start_matches] = ACTIONS(290),
    [anon_sym_capitalize] = ACTIONS(290),
    [anon_sym_kebabcase] = ACTIONS(290),
    [anon_sym_lowercamelcase] = ACTIONS(290),
    [anon_sym_lowercase] = ACTIONS(290),
    [anon_sym_shoutykebabcase] = ACTIONS(290),
    [anon_sym_shoutysnakecase] = ACTIONS(290),
    [anon_sym_snakecase] = ACTIONS(290),
    [anon_sym_titlecase] = ACTIONS(290),
    [anon_sym_uppercamelcase] = ACTIONS(290),
    [anon_sym_uppercase] = ACTIONS(290),
    [anon_sym_absolute_path] = ACTIONS(290),
    [anon_sym_canonicalize] = ACTIONS(290),
    [anon_sym_extension] = ACTIONS(290),
    [anon_sym_file_name] = ACTIONS(290),
    [anon_sym_file_stem] = ACTIONS(290),
    [anon_sym_parent_dir] = ACTIONS(290),
    [anon_sym_parent_directory] = ACTIONS(290),
    [anon_sym_without_extension] = ACTIONS(290),
    [anon_sym_clean] = ACTIONS(290),
    [anon_sym_join] = ACTIONS(290),
    [anon_sym_path_exists] = ACTIONS(290),
    [anon_sym_error] = ACTIONS(290),
    [anon_sym_blake3] = ACTIONS(290),
    [anon_sym_blake3_file] = ACTIONS(290),
    [anon_sym_sha256] = ACTIONS(290),
    [anon_sym_sha256_file] = ACTIONS(290),
    [anon_sym_uuid] = ACTIONS(290),
    [anon_sym_choose] = ACTIONS(290),
    [anon_sym_datetime] = ACTIONS(290),
    [anon_sym_datetime_utc] = ACTIONS(290),
    [anon_sym_semver_matches] = ACTIONS(290),
    [anon_sym_cache_dir] = ACTIONS(290),
    [anon_sym_cache_directory] = ACTIONS(290),
    [anon_sym_config_dir] = ACTIONS(290),
    [anon_sym_config_directory] = ACTIONS(290),
    [anon_sym_config_local_dir] = ACTIONS(290),
    [anon_sym_config_local_directory] = ACTIONS(290),
    [anon_sym_data_dir] = ACTIONS(290),
    [anon_sym_data_directory] = ACTIONS(290),
    [anon_sym_data_local_dir] = ACTIONS(290),
    [anon_sym_data_local_directory] = ACTIONS(290),
    [anon_sym_executable_dir] = ACTIONS(290),
    [anon_sym_executable_directory] = ACTIONS(290),
    [anon_sym_home_dir] = ACTIONS(290),
    [anon_sym_home_directory] = ACTIONS(290),
    [anon_sym_BQUOTE] = ACTIONS(290),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(288),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(288),
    [anon_sym_DQUOTE] = ACTIONS(290),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(288),
    [anon_sym_SQUOTE] = ACTIONS(290),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [69] = {
    [sym_comment] = STATE(69),
    [ts_builtin_sym_end] = ACTIONS(292),
    [sym_identifier] = ACTIONS(294),
    [anon_sym_alias] = ACTIONS(294),
    [anon_sym_export] = ACTIONS(294),
    [aux_sym_import_token1] = ACTIONS(294),
    [aux_sym_mod_token1] = ACTIONS(294),
    [anon_sym_set] = ACTIONS(294),
    [anon_sym_shell] = ACTIONS(294),
    [anon_sym_if] = ACTIONS(294),
    [anon_sym_assert] = ACTIONS(294),
    [anon_sym_LPAREN] = ACTIONS(292),
    [anon_sym_arch] = ACTIONS(294),
    [anon_sym_num_cpus] = ACTIONS(294),
    [anon_sym_os] = ACTIONS(294),
    [anon_sym_os_family] = ACTIONS(294),
    [anon_sym_env_var] = ACTIONS(294),
    [anon_sym_env_var_or_default] = ACTIONS(294),
    [anon_sym_env] = ACTIONS(294),
    [anon_sym_is_dependency] = ACTIONS(294),
    [anon_sym_invocation_dir] = ACTIONS(294),
    [anon_sym_invocation_dir_native] = ACTIONS(294),
    [anon_sym_invocation_directory] = ACTIONS(294),
    [anon_sym_invocation_directory_native] = ACTIONS(294),
    [anon_sym_justfile] = ACTIONS(294),
    [anon_sym_justfile_dir] = ACTIONS(294),
    [anon_sym_justfile_directory] = ACTIONS(294),
    [anon_sym_source_dir] = ACTIONS(294),
    [anon_sym_source_directory] = ACTIONS(294),
    [anon_sym_source_file] = ACTIONS(294),
    [anon_sym_just_executable] = ACTIONS(294),
    [anon_sym_just_pid] = ACTIONS(294),
    [anon_sym_append] = ACTIONS(294),
    [anon_sym_prepend] = ACTIONS(294),
    [anon_sym_encode_uri_component] = ACTIONS(294),
    [anon_sym_quote] = ACTIONS(294),
    [anon_sym_replace] = ACTIONS(294),
    [anon_sym_replace_regex] = ACTIONS(294),
    [anon_sym_trim] = ACTIONS(294),
    [anon_sym_trim_end] = ACTIONS(294),
    [anon_sym_trim_end_match] = ACTIONS(294),
    [anon_sym_trim_end_matches] = ACTIONS(294),
    [anon_sym_trim_start] = ACTIONS(294),
    [anon_sym_trim_start_match] = ACTIONS(294),
    [anon_sym_trim_start_matches] = ACTIONS(294),
    [anon_sym_capitalize] = ACTIONS(294),
    [anon_sym_kebabcase] = ACTIONS(294),
    [anon_sym_lowercamelcase] = ACTIONS(294),
    [anon_sym_lowercase] = ACTIONS(294),
    [anon_sym_shoutykebabcase] = ACTIONS(294),
    [anon_sym_shoutysnakecase] = ACTIONS(294),
    [anon_sym_snakecase] = ACTIONS(294),
    [anon_sym_titlecase] = ACTIONS(294),
    [anon_sym_uppercamelcase] = ACTIONS(294),
    [anon_sym_uppercase] = ACTIONS(294),
    [anon_sym_absolute_path] = ACTIONS(294),
    [anon_sym_canonicalize] = ACTIONS(294),
    [anon_sym_extension] = ACTIONS(294),
    [anon_sym_file_name] = ACTIONS(294),
    [anon_sym_file_stem] = ACTIONS(294),
    [anon_sym_parent_dir] = ACTIONS(294),
    [anon_sym_parent_directory] = ACTIONS(294),
    [anon_sym_without_extension] = ACTIONS(294),
    [anon_sym_clean] = ACTIONS(294),
    [anon_sym_join] = ACTIONS(294),
    [anon_sym_path_exists] = ACTIONS(294),
    [anon_sym_error] = ACTIONS(294),
    [anon_sym_blake3] = ACTIONS(294),
    [anon_sym_blake3_file] = ACTIONS(294),
    [anon_sym_sha256] = ACTIONS(294),
    [anon_sym_sha256_file] = ACTIONS(294),
    [anon_sym_uuid] = ACTIONS(294),
    [anon_sym_choose] = ACTIONS(294),
    [anon_sym_datetime] = ACTIONS(294),
    [anon_sym_datetime_utc] = ACTIONS(294),
    [anon_sym_semver_matches] = ACTIONS(294),
    [anon_sym_cache_dir] = ACTIONS(294),
    [anon_sym_cache_directory] = ACTIONS(294),
    [anon_sym_config_dir] = ACTIONS(294),
    [anon_sym_config_directory] = ACTIONS(294),
    [anon_sym_config_local_dir] = ACTIONS(294),
    [anon_sym_config_local_directory] = ACTIONS(294),
    [anon_sym_data_dir] = ACTIONS(294),
    [anon_sym_data_directory] = ACTIONS(294),
    [anon_sym_data_local_dir] = ACTIONS(294),
    [anon_sym_data_local_directory] = ACTIONS(294),
    [anon_sym_executable_dir] = ACTIONS(294),
    [anon_sym_executable_directory] = ACTIONS(294),
    [anon_sym_home_dir] = ACTIONS(294),
    [anon_sym_home_directory] = ACTIONS(294),
    [anon_sym_BQUOTE] = ACTIONS(294),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(292),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(292),
    [anon_sym_DQUOTE] = ACTIONS(294),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(292),
    [anon_sym_SQUOTE] = ACTIONS(294),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [70] = {
    [sym_comment] = STATE(70),
    [ts_builtin_sym_end] = ACTIONS(296),
    [sym_identifier] = ACTIONS(298),
    [anon_sym_alias] = ACTIONS(298),
    [anon_sym_export] = ACTIONS(298),
    [aux_sym_import_token1] = ACTIONS(298),
    [aux_sym_mod_token1] = ACTIONS(298),
    [anon_sym_set] = ACTIONS(298),
    [anon_sym_shell] = ACTIONS(298),
    [anon_sym_if] = ACTIONS(298),
    [anon_sym_assert] = ACTIONS(298),
    [anon_sym_LPAREN] = ACTIONS(296),
    [anon_sym_arch] = ACTIONS(298),
    [anon_sym_num_cpus] = ACTIONS(298),
    [anon_sym_os] = ACTIONS(298),
    [anon_sym_os_family] = ACTIONS(298),
    [anon_sym_env_var] = ACTIONS(298),
    [anon_sym_env_var_or_default] = ACTIONS(298),
    [anon_sym_env] = ACTIONS(298),
    [anon_sym_is_dependency] = ACTIONS(298),
    [anon_sym_invocation_dir] = ACTIONS(298),
    [anon_sym_invocation_dir_native] = ACTIONS(298),
    [anon_sym_invocation_directory] = ACTIONS(298),
    [anon_sym_invocation_directory_native] = ACTIONS(298),
    [anon_sym_justfile] = ACTIONS(298),
    [anon_sym_justfile_dir] = ACTIONS(298),
    [anon_sym_justfile_directory] = ACTIONS(298),
    [anon_sym_source_dir] = ACTIONS(298),
    [anon_sym_source_directory] = ACTIONS(298),
    [anon_sym_source_file] = ACTIONS(298),
    [anon_sym_just_executable] = ACTIONS(298),
    [anon_sym_just_pid] = ACTIONS(298),
    [anon_sym_append] = ACTIONS(298),
    [anon_sym_prepend] = ACTIONS(298),
    [anon_sym_encode_uri_component] = ACTIONS(298),
    [anon_sym_quote] = ACTIONS(298),
    [anon_sym_replace] = ACTIONS(298),
    [anon_sym_replace_regex] = ACTIONS(298),
    [anon_sym_trim] = ACTIONS(298),
    [anon_sym_trim_end] = ACTIONS(298),
    [anon_sym_trim_end_match] = ACTIONS(298),
    [anon_sym_trim_end_matches] = ACTIONS(298),
    [anon_sym_trim_start] = ACTIONS(298),
    [anon_sym_trim_start_match] = ACTIONS(298),
    [anon_sym_trim_start_matches] = ACTIONS(298),
    [anon_sym_capitalize] = ACTIONS(298),
    [anon_sym_kebabcase] = ACTIONS(298),
    [anon_sym_lowercamelcase] = ACTIONS(298),
    [anon_sym_lowercase] = ACTIONS(298),
    [anon_sym_shoutykebabcase] = ACTIONS(298),
    [anon_sym_shoutysnakecase] = ACTIONS(298),
    [anon_sym_snakecase] = ACTIONS(298),
    [anon_sym_titlecase] = ACTIONS(298),
    [anon_sym_uppercamelcase] = ACTIONS(298),
    [anon_sym_uppercase] = ACTIONS(298),
    [anon_sym_absolute_path] = ACTIONS(298),
    [anon_sym_canonicalize] = ACTIONS(298),
    [anon_sym_extension] = ACTIONS(298),
    [anon_sym_file_name] = ACTIONS(298),
    [anon_sym_file_stem] = ACTIONS(298),
    [anon_sym_parent_dir] = ACTIONS(298),
    [anon_sym_parent_directory] = ACTIONS(298),
    [anon_sym_without_extension] = ACTIONS(298),
    [anon_sym_clean] = ACTIONS(298),
    [anon_sym_join] = ACTIONS(298),
    [anon_sym_path_exists] = ACTIONS(298),
    [anon_sym_error] = ACTIONS(298),
    [anon_sym_blake3] = ACTIONS(298),
    [anon_sym_blake3_file] = ACTIONS(298),
    [anon_sym_sha256] = ACTIONS(298),
    [anon_sym_sha256_file] = ACTIONS(298),
    [anon_sym_uuid] = ACTIONS(298),
    [anon_sym_choose] = ACTIONS(298),
    [anon_sym_datetime] = ACTIONS(298),
    [anon_sym_datetime_utc] = ACTIONS(298),
    [anon_sym_semver_matches] = ACTIONS(298),
    [anon_sym_cache_dir] = ACTIONS(298),
    [anon_sym_cache_directory] = ACTIONS(298),
    [anon_sym_config_dir] = ACTIONS(298),
    [anon_sym_config_directory] = ACTIONS(298),
    [anon_sym_config_local_dir] = ACTIONS(298),
    [anon_sym_config_local_directory] = ACTIONS(298),
    [anon_sym_data_dir] = ACTIONS(298),
    [anon_sym_data_directory] = ACTIONS(298),
    [anon_sym_data_local_dir] = ACTIONS(298),
    [anon_sym_data_local_directory] = ACTIONS(298),
    [anon_sym_executable_dir] = ACTIONS(298),
    [anon_sym_executable_directory] = ACTIONS(298),
    [anon_sym_home_dir] = ACTIONS(298),
    [anon_sym_home_directory] = ACTIONS(298),
    [anon_sym_BQUOTE] = ACTIONS(298),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(296),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(296),
    [anon_sym_DQUOTE] = ACTIONS(298),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(296),
    [anon_sym_SQUOTE] = ACTIONS(298),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [71] = {
    [sym_comment] = STATE(71),
    [ts_builtin_sym_end] = ACTIONS(300),
    [sym_identifier] = ACTIONS(302),
    [anon_sym_alias] = ACTIONS(302),
    [anon_sym_export] = ACTIONS(302),
    [aux_sym_import_token1] = ACTIONS(302),
    [aux_sym_mod_token1] = ACTIONS(302),
    [anon_sym_set] = ACTIONS(302),
    [anon_sym_shell] = ACTIONS(302),
    [anon_sym_if] = ACTIONS(302),
    [anon_sym_assert] = ACTIONS(302),
    [anon_sym_LPAREN] = ACTIONS(300),
    [anon_sym_arch] = ACTIONS(302),
    [anon_sym_num_cpus] = ACTIONS(302),
    [anon_sym_os] = ACTIONS(302),
    [anon_sym_os_family] = ACTIONS(302),
    [anon_sym_env_var] = ACTIONS(302),
    [anon_sym_env_var_or_default] = ACTIONS(302),
    [anon_sym_env] = ACTIONS(302),
    [anon_sym_is_dependency] = ACTIONS(302),
    [anon_sym_invocation_dir] = ACTIONS(302),
    [anon_sym_invocation_dir_native] = ACTIONS(302),
    [anon_sym_invocation_directory] = ACTIONS(302),
    [anon_sym_invocation_directory_native] = ACTIONS(302),
    [anon_sym_justfile] = ACTIONS(302),
    [anon_sym_justfile_dir] = ACTIONS(302),
    [anon_sym_justfile_directory] = ACTIONS(302),
    [anon_sym_source_dir] = ACTIONS(302),
    [anon_sym_source_directory] = ACTIONS(302),
    [anon_sym_source_file] = ACTIONS(302),
    [anon_sym_just_executable] = ACTIONS(302),
    [anon_sym_just_pid] = ACTIONS(302),
    [anon_sym_append] = ACTIONS(302),
    [anon_sym_prepend] = ACTIONS(302),
    [anon_sym_encode_uri_component] = ACTIONS(302),
    [anon_sym_quote] = ACTIONS(302),
    [anon_sym_replace] = ACTIONS(302),
    [anon_sym_replace_regex] = ACTIONS(302),
    [anon_sym_trim] = ACTIONS(302),
    [anon_sym_trim_end] = ACTIONS(302),
    [anon_sym_trim_end_match] = ACTIONS(302),
    [anon_sym_trim_end_matches] = ACTIONS(302),
    [anon_sym_trim_start] = ACTIONS(302),
    [anon_sym_trim_start_match] = ACTIONS(302),
    [anon_sym_trim_start_matches] = ACTIONS(302),
    [anon_sym_capitalize] = ACTIONS(302),
    [anon_sym_kebabcase] = ACTIONS(302),
    [anon_sym_lowercamelcase] = ACTIONS(302),
    [anon_sym_lowercase] = ACTIONS(302),
    [anon_sym_shoutykebabcase] = ACTIONS(302),
    [anon_sym_shoutysnakecase] = ACTIONS(302),
    [anon_sym_snakecase] = ACTIONS(302),
    [anon_sym_titlecase] = ACTIONS(302),
    [anon_sym_uppercamelcase] = ACTIONS(302),
    [anon_sym_uppercase] = ACTIONS(302),
    [anon_sym_absolute_path] = ACTIONS(302),
    [anon_sym_canonicalize] = ACTIONS(302),
    [anon_sym_extension] = ACTIONS(302),
    [anon_sym_file_name] = ACTIONS(302),
    [anon_sym_file_stem] = ACTIONS(302),
    [anon_sym_parent_dir] = ACTIONS(302),
    [anon_sym_parent_directory] = ACTIONS(302),
    [anon_sym_without_extension] = ACTIONS(302),
    [anon_sym_clean] = ACTIONS(302),
    [anon_sym_join] = ACTIONS(302),
    [anon_sym_path_exists] = ACTIONS(302),
    [anon_sym_error] = ACTIONS(302),
    [anon_sym_blake3] = ACTIONS(302),
    [anon_sym_blake3_file] = ACTIONS(302),
    [anon_sym_sha256] = ACTIONS(302),
    [anon_sym_sha256_file] = ACTIONS(302),
    [anon_sym_uuid] = ACTIONS(302),
    [anon_sym_choose] = ACTIONS(302),
    [anon_sym_datetime] = ACTIONS(302),
    [anon_sym_datetime_utc] = ACTIONS(302),
    [anon_sym_semver_matches] = ACTIONS(302),
    [anon_sym_cache_dir] = ACTIONS(302),
    [anon_sym_cache_directory] = ACTIONS(302),
    [anon_sym_config_dir] = ACTIONS(302),
    [anon_sym_config_directory] = ACTIONS(302),
    [anon_sym_config_local_dir] = ACTIONS(302),
    [anon_sym_config_local_directory] = ACTIONS(302),
    [anon_sym_data_dir] = ACTIONS(302),
    [anon_sym_data_directory] = ACTIONS(302),
    [anon_sym_data_local_dir] = ACTIONS(302),
    [anon_sym_data_local_directory] = ACTIONS(302),
    [anon_sym_executable_dir] = ACTIONS(302),
    [anon_sym_executable_directory] = ACTIONS(302),
    [anon_sym_home_dir] = ACTIONS(302),
    [anon_sym_home_directory] = ACTIONS(302),
    [anon_sym_BQUOTE] = ACTIONS(302),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(300),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(300),
    [anon_sym_DQUOTE] = ACTIONS(302),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(300),
    [anon_sym_SQUOTE] = ACTIONS(302),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [72] = {
    [sym_comment] = STATE(72),
    [ts_builtin_sym_end] = ACTIONS(304),
    [sym_identifier] = ACTIONS(306),
    [anon_sym_alias] = ACTIONS(306),
    [anon_sym_export] = ACTIONS(306),
    [aux_sym_import_token1] = ACTIONS(306),
    [aux_sym_mod_token1] = ACTIONS(306),
    [anon_sym_set] = ACTIONS(306),
    [anon_sym_shell] = ACTIONS(306),
    [anon_sym_if] = ACTIONS(306),
    [anon_sym_assert] = ACTIONS(306),
    [anon_sym_LPAREN] = ACTIONS(304),
    [anon_sym_arch] = ACTIONS(306),
    [anon_sym_num_cpus] = ACTIONS(306),
    [anon_sym_os] = ACTIONS(306),
    [anon_sym_os_family] = ACTIONS(306),
    [anon_sym_env_var] = ACTIONS(306),
    [anon_sym_env_var_or_default] = ACTIONS(306),
    [anon_sym_env] = ACTIONS(306),
    [anon_sym_is_dependency] = ACTIONS(306),
    [anon_sym_invocation_dir] = ACTIONS(306),
    [anon_sym_invocation_dir_native] = ACTIONS(306),
    [anon_sym_invocation_directory] = ACTIONS(306),
    [anon_sym_invocation_directory_native] = ACTIONS(306),
    [anon_sym_justfile] = ACTIONS(306),
    [anon_sym_justfile_dir] = ACTIONS(306),
    [anon_sym_justfile_directory] = ACTIONS(306),
    [anon_sym_source_dir] = ACTIONS(306),
    [anon_sym_source_directory] = ACTIONS(306),
    [anon_sym_source_file] = ACTIONS(306),
    [anon_sym_just_executable] = ACTIONS(306),
    [anon_sym_just_pid] = ACTIONS(306),
    [anon_sym_append] = ACTIONS(306),
    [anon_sym_prepend] = ACTIONS(306),
    [anon_sym_encode_uri_component] = ACTIONS(306),
    [anon_sym_quote] = ACTIONS(306),
    [anon_sym_replace] = ACTIONS(306),
    [anon_sym_replace_regex] = ACTIONS(306),
    [anon_sym_trim] = ACTIONS(306),
    [anon_sym_trim_end] = ACTIONS(306),
    [anon_sym_trim_end_match] = ACTIONS(306),
    [anon_sym_trim_end_matches] = ACTIONS(306),
    [anon_sym_trim_start] = ACTIONS(306),
    [anon_sym_trim_start_match] = ACTIONS(306),
    [anon_sym_trim_start_matches] = ACTIONS(306),
    [anon_sym_capitalize] = ACTIONS(306),
    [anon_sym_kebabcase] = ACTIONS(306),
    [anon_sym_lowercamelcase] = ACTIONS(306),
    [anon_sym_lowercase] = ACTIONS(306),
    [anon_sym_shoutykebabcase] = ACTIONS(306),
    [anon_sym_shoutysnakecase] = ACTIONS(306),
    [anon_sym_snakecase] = ACTIONS(306),
    [anon_sym_titlecase] = ACTIONS(306),
    [anon_sym_uppercamelcase] = ACTIONS(306),
    [anon_sym_uppercase] = ACTIONS(306),
    [anon_sym_absolute_path] = ACTIONS(306),
    [anon_sym_canonicalize] = ACTIONS(306),
    [anon_sym_extension] = ACTIONS(306),
    [anon_sym_file_name] = ACTIONS(306),
    [anon_sym_file_stem] = ACTIONS(306),
    [anon_sym_parent_dir] = ACTIONS(306),
    [anon_sym_parent_directory] = ACTIONS(306),
    [anon_sym_without_extension] = ACTIONS(306),
    [anon_sym_clean] = ACTIONS(306),
    [anon_sym_join] = ACTIONS(306),
    [anon_sym_path_exists] = ACTIONS(306),
    [anon_sym_error] = ACTIONS(306),
    [anon_sym_blake3] = ACTIONS(306),
    [anon_sym_blake3_file] = ACTIONS(306),
    [anon_sym_sha256] = ACTIONS(306),
    [anon_sym_sha256_file] = ACTIONS(306),
    [anon_sym_uuid] = ACTIONS(306),
    [anon_sym_choose] = ACTIONS(306),
    [anon_sym_datetime] = ACTIONS(306),
    [anon_sym_datetime_utc] = ACTIONS(306),
    [anon_sym_semver_matches] = ACTIONS(306),
    [anon_sym_cache_dir] = ACTIONS(306),
    [anon_sym_cache_directory] = ACTIONS(306),
    [anon_sym_config_dir] = ACTIONS(306),
    [anon_sym_config_directory] = ACTIONS(306),
    [anon_sym_config_local_dir] = ACTIONS(306),
    [anon_sym_config_local_directory] = ACTIONS(306),
    [anon_sym_data_dir] = ACTIONS(306),
    [anon_sym_data_directory] = ACTIONS(306),
    [anon_sym_data_local_dir] = ACTIONS(306),
    [anon_sym_data_local_directory] = ACTIONS(306),
    [anon_sym_executable_dir] = ACTIONS(306),
    [anon_sym_executable_directory] = ACTIONS(306),
    [anon_sym_home_dir] = ACTIONS(306),
    [anon_sym_home_directory] = ACTIONS(306),
    [anon_sym_BQUOTE] = ACTIONS(306),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(304),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(304),
    [anon_sym_DQUOTE] = ACTIONS(306),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(304),
    [anon_sym_SQUOTE] = ACTIONS(306),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(308), 1,
      sym_identifier,
    STATE(73), 1,
      sym_comment,
    ACTIONS(314), 2,
      anon_sym_shell,
      anon_sym_windows_DASHshell,
    ACTIONS(312), 3,
      anon_sym_dotenv_DASHfilename,
      anon_sym_dotenv_DASHpath,
      anon_sym_tempdir,
    ACTIONS(310), 10,
      anon_sym_export,
      anon_sym_allow_DASHduplicate_DASHrecipes,
      anon_sym_allow_DASHduplicate_DASHvariables,
      anon_sym_dotenv_DASHload,
      anon_sym_dotenv_DASHrequired,
      anon_sym_fallback,
      anon_sym_ignore_DASHcomments,
      anon_sym_positional_DASHarguments,
      anon_sym_unstable,
      anon_sym_windows_DASHpowershell,
  [31] = 11,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(41), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(47), 1,
      anon_sym_SQUOTE,
    ACTIONS(316), 1,
      anon_sym_LBRACK,
    STATE(62), 1,
      sym_string,
    STATE(63), 1,
      sym_boolean,
    STATE(74), 1,
      sym_comment,
    ACTIONS(318), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(7), 4,
      sym_indented_normal_string,
      sym_normal_string,
      sym_indented_raw_string,
      sym_raw_string,
  [69] = 9,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(41), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(47), 1,
      anon_sym_SQUOTE,
    ACTIONS(320), 1,
      anon_sym_RBRACK,
    STATE(75), 1,
      sym_comment,
    STATE(114), 1,
      sym_string,
    STATE(7), 4,
      sym_indented_normal_string,
      sym_normal_string,
      sym_indented_raw_string,
      sym_raw_string,
  [100] = 9,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(41), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(47), 1,
      anon_sym_SQUOTE,
    ACTIONS(322), 1,
      anon_sym_RBRACK,
    STATE(76), 1,
      sym_comment,
    STATE(114), 1,
      sym_string,
    STATE(7), 4,
      sym_indented_normal_string,
      sym_normal_string,
      sym_indented_raw_string,
      sym_raw_string,
  [131] = 7,
    ACTIONS(324), 1,
      anon_sym_DQUOTE,
    ACTIONS(326), 1,
      aux_sym_normal_string_token1,
    ACTIONS(330), 1,
      aux_sym_comment_token1,
    STATE(77), 1,
      sym_comment,
    STATE(81), 1,
      aux_sym_normal_string_repeat1,
    STATE(89), 1,
      sym_escape_sequence,
    ACTIONS(328), 5,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
  [157] = 7,
    ACTIONS(330), 1,
      aux_sym_comment_token1,
    ACTIONS(332), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(334), 1,
      aux_sym_indented_normal_string_token1,
    STATE(78), 1,
      sym_comment,
    STATE(84), 1,
      aux_sym_indented_normal_string_repeat1,
    STATE(87), 1,
      sym_escape_sequence,
    ACTIONS(336), 5,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
  [183] = 8,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(41), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(47), 1,
      anon_sym_SQUOTE,
    STATE(62), 1,
      sym_string,
    STATE(79), 1,
      sym_comment,
    STATE(7), 4,
      sym_indented_normal_string,
      sym_normal_string,
      sym_indented_raw_string,
      sym_raw_string,
  [211] = 8,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(41), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(47), 1,
      anon_sym_SQUOTE,
    STATE(80), 1,
      sym_comment,
    STATE(95), 1,
      sym_string,
    STATE(7), 4,
      sym_indented_normal_string,
      sym_normal_string,
      sym_indented_raw_string,
      sym_raw_string,
  [239] = 7,
    ACTIONS(326), 1,
      aux_sym_normal_string_token1,
    ACTIONS(330), 1,
      aux_sym_comment_token1,
    ACTIONS(338), 1,
      anon_sym_DQUOTE,
    STATE(81), 1,
      sym_comment,
    STATE(85), 1,
      aux_sym_normal_string_repeat1,
    STATE(89), 1,
      sym_escape_sequence,
    ACTIONS(328), 5,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
  [265] = 8,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(41), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(47), 1,
      anon_sym_SQUOTE,
    STATE(72), 1,
      sym_string,
    STATE(82), 1,
      sym_comment,
    STATE(7), 4,
      sym_indented_normal_string,
      sym_normal_string,
      sym_indented_raw_string,
      sym_raw_string,
  [293] = 8,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(41), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(47), 1,
      anon_sym_SQUOTE,
    STATE(83), 1,
      sym_comment,
    STATE(114), 1,
      sym_string,
    STATE(7), 4,
      sym_indented_normal_string,
      sym_normal_string,
      sym_indented_raw_string,
      sym_raw_string,
  [321] = 7,
    ACTIONS(330), 1,
      aux_sym_comment_token1,
    ACTIONS(334), 1,
      aux_sym_indented_normal_string_token1,
    ACTIONS(340), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(84), 1,
      sym_comment,
    STATE(86), 1,
      aux_sym_indented_normal_string_repeat1,
    STATE(87), 1,
      sym_escape_sequence,
    ACTIONS(336), 5,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
  [347] = 6,
    ACTIONS(330), 1,
      aux_sym_comment_token1,
    ACTIONS(342), 1,
      anon_sym_DQUOTE,
    ACTIONS(344), 1,
      aux_sym_normal_string_token1,
    STATE(89), 1,
      sym_escape_sequence,
    STATE(85), 2,
      sym_comment,
      aux_sym_normal_string_repeat1,
    ACTIONS(347), 5,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
  [371] = 6,
    ACTIONS(330), 1,
      aux_sym_comment_token1,
    ACTIONS(350), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(352), 1,
      aux_sym_indented_normal_string_token1,
    STATE(87), 1,
      sym_escape_sequence,
    STATE(86), 2,
      sym_comment,
      aux_sym_indented_normal_string_repeat1,
    ACTIONS(355), 5,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
  [395] = 3,
    ACTIONS(330), 1,
      aux_sym_comment_token1,
    STATE(87), 1,
      sym_comment,
    ACTIONS(358), 7,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      aux_sym_indented_normal_string_token1,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
  [411] = 3,
    ACTIONS(330), 1,
      aux_sym_comment_token1,
    STATE(88), 1,
      sym_comment,
    ACTIONS(360), 7,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      aux_sym_indented_normal_string_token1,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
  [427] = 3,
    ACTIONS(330), 1,
      aux_sym_comment_token1,
    STATE(89), 1,
      sym_comment,
    ACTIONS(362), 7,
      anon_sym_DQUOTE,
      aux_sym_normal_string_token1,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
  [443] = 3,
    ACTIONS(330), 1,
      aux_sym_comment_token1,
    STATE(90), 1,
      sym_comment,
    ACTIONS(360), 7,
      anon_sym_DQUOTE,
      aux_sym_normal_string_token1,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
  [459] = 5,
    ACTIONS(330), 1,
      aux_sym_comment_token1,
    ACTIONS(364), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(366), 1,
      aux_sym_indented_backtick_token1,
    STATE(91), 1,
      sym_comment,
    STATE(93), 1,
      aux_sym_indented_backtick_repeat1,
  [475] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(368), 1,
      anon_sym_COMMA,
    ACTIONS(371), 1,
      anon_sym_RPAREN,
    STATE(92), 2,
      sym_comment,
      aux_sym_function_parameters_repeat1,
  [489] = 4,
    ACTIONS(330), 1,
      aux_sym_comment_token1,
    ACTIONS(373), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(375), 1,
      aux_sym_indented_backtick_token1,
    STATE(93), 2,
      sym_comment,
      aux_sym_indented_backtick_repeat1,
  [503] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(320), 1,
      anon_sym_RBRACK,
    ACTIONS(378), 1,
      anon_sym_COMMA,
    STATE(94), 1,
      sym_comment,
    STATE(96), 1,
      aux_sym__setting_list_repeat1,
  [519] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(380), 1,
      anon_sym_COMMA,
    ACTIONS(382), 1,
      anon_sym_RBRACK,
    STATE(94), 1,
      aux_sym__setting_list_repeat1,
    STATE(95), 1,
      sym_comment,
  [535] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(384), 1,
      anon_sym_COMMA,
    ACTIONS(387), 1,
      anon_sym_RBRACK,
    STATE(96), 2,
      sym_comment,
      aux_sym__setting_list_repeat1,
  [549] = 5,
    ACTIONS(330), 1,
      aux_sym_comment_token1,
    ACTIONS(389), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(391), 1,
      aux_sym_indented_raw_string_token1,
    STATE(97), 1,
      sym_comment,
    STATE(104), 1,
      aux_sym_indented_raw_string_repeat1,
  [565] = 4,
    ACTIONS(330), 1,
      aux_sym_comment_token1,
    ACTIONS(393), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(395), 1,
      aux_sym_indented_raw_string_token1,
    STATE(98), 2,
      sym_comment,
      aux_sym_indented_raw_string_repeat1,
  [579] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(99), 1,
      sym_comment,
    ACTIONS(398), 3,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_EQ_TILDE,
  [591] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(400), 1,
      anon_sym_COMMA,
    ACTIONS(402), 1,
      anon_sym_RPAREN,
    STATE(100), 1,
      sym_comment,
    STATE(103), 1,
      aux_sym_function_parameters_repeat1,
  [607] = 5,
    ACTIONS(330), 1,
      aux_sym_comment_token1,
    ACTIONS(366), 1,
      aux_sym_indented_backtick_token1,
    ACTIONS(404), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(91), 1,
      aux_sym_indented_backtick_repeat1,
    STATE(101), 1,
      sym_comment,
  [623] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(406), 1,
      anon_sym_LPAREN,
    STATE(102), 1,
      sym_comment,
    STATE(14), 2,
      sym__p1,
      sym__p2,
  [637] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(238), 1,
      anon_sym_RPAREN,
    ACTIONS(408), 1,
      anon_sym_COMMA,
    STATE(92), 1,
      aux_sym_function_parameters_repeat1,
    STATE(103), 1,
      sym_comment,
  [653] = 5,
    ACTIONS(330), 1,
      aux_sym_comment_token1,
    ACTIONS(391), 1,
      aux_sym_indented_raw_string_token1,
    ACTIONS(410), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    STATE(98), 1,
      aux_sym_indented_raw_string_repeat1,
    STATE(104), 1,
      sym_comment,
  [669] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(63), 1,
      sym_boolean,
    STATE(105), 1,
      sym_comment,
    ACTIONS(318), 2,
      anon_sym_true,
      anon_sym_false,
  [683] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(412), 1,
      anon_sym_LPAREN,
    STATE(14), 1,
      sym__p2,
    STATE(106), 1,
      sym_comment,
  [696] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(414), 1,
      anon_sym_COMMA,
    ACTIONS(416), 1,
      anon_sym_RPAREN,
    STATE(107), 1,
      sym_comment,
  [709] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(418), 1,
      anon_sym_COLON_EQ,
    STATE(71), 1,
      sym__setting_list,
    STATE(108), 1,
      sym_comment,
  [722] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(420), 1,
      anon_sym_COMMA,
    ACTIONS(422), 1,
      anon_sym_RPAREN,
    STATE(109), 1,
      sym_comment,
  [735] = 3,
    ACTIONS(330), 1,
      aux_sym_comment_token1,
    STATE(110), 1,
      sym_comment,
    ACTIONS(424), 2,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      aux_sym_indented_raw_string_token1,
  [746] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(426), 1,
      anon_sym_COMMA,
    ACTIONS(428), 1,
      anon_sym_RPAREN,
    STATE(111), 1,
      sym_comment,
  [759] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(430), 1,
      anon_sym_LPAREN,
    STATE(14), 1,
      sym__p3,
    STATE(112), 1,
      sym_comment,
  [772] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(113), 1,
      sym_comment,
    ACTIONS(432), 2,
      anon_sym_COMMA,
      anon_sym_LBRACE,
  [783] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(114), 1,
      sym_comment,
    ACTIONS(387), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [794] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(434), 1,
      anon_sym_LPAREN,
    STATE(14), 1,
      sym__pN,
    STATE(115), 1,
      sym_comment,
  [807] = 3,
    ACTIONS(330), 1,
      aux_sym_comment_token1,
    STATE(116), 1,
      sym_comment,
    ACTIONS(436), 2,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      aux_sym_indented_backtick_token1,
  [818] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(438), 1,
      anon_sym_LPAREN,
    STATE(14), 1,
      sym__p1,
    STATE(117), 1,
      sym_comment,
  [831] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(440), 1,
      anon_sym_COLON_EQ,
    STATE(71), 1,
      sym__setting_string,
    STATE(118), 1,
      sym_comment,
  [844] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(442), 1,
      anon_sym_LPAREN,
    STATE(14), 1,
      sym__p0,
    STATE(119), 1,
      sym_comment,
  [857] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(428), 1,
      anon_sym_RPAREN,
    ACTIONS(444), 1,
      anon_sym_COMMA,
    STATE(120), 1,
      sym_comment,
  [870] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(121), 1,
      sym_comment,
    ACTIONS(371), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [881] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(446), 1,
      anon_sym_COMMA,
    STATE(122), 1,
      sym_comment,
  [891] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(448), 1,
      anon_sym_RPAREN,
    STATE(123), 1,
      sym_comment,
  [901] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(450), 1,
      anon_sym_else,
    STATE(124), 1,
      sym_comment,
  [911] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(452), 1,
      anon_sym_RPAREN,
    STATE(125), 1,
      sym_comment,
  [921] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(454), 1,
      anon_sym_LPAREN,
    STATE(126), 1,
      sym_comment,
  [931] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(456), 1,
      sym_identifier,
    STATE(127), 1,
      sym_comment,
  [941] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(458), 1,
      anon_sym_COMMA,
    STATE(128), 1,
      sym_comment,
  [951] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(460), 1,
      anon_sym_RPAREN,
    STATE(129), 1,
      sym_comment,
  [961] = 3,
    ACTIONS(330), 1,
      aux_sym_comment_token1,
    ACTIONS(462), 1,
      aux_sym_raw_string_token1,
    STATE(130), 1,
      sym_comment,
  [971] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(464), 1,
      anon_sym_COMMA,
    STATE(131), 1,
      sym_comment,
  [981] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(466), 1,
      anon_sym_COLON_EQ,
    STATE(132), 1,
      sym_comment,
  [991] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(468), 1,
      anon_sym_LBRACE,
    STATE(133), 1,
      sym_comment,
  [1001] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(316), 1,
      anon_sym_LBRACK,
    STATE(134), 1,
      sym_comment,
  [1011] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(470), 1,
      anon_sym_RPAREN,
    STATE(135), 1,
      sym_comment,
  [1021] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(472), 1,
      anon_sym_BQUOTE,
    STATE(136), 1,
      sym_comment,
  [1031] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(474), 1,
      ts_builtin_sym_end,
    STATE(137), 1,
      sym_comment,
  [1041] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(476), 1,
      anon_sym_RPAREN,
    STATE(138), 1,
      sym_comment,
  [1051] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(240), 1,
      anon_sym_RPAREN,
    STATE(139), 1,
      sym_comment,
  [1061] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(478), 1,
      anon_sym_LBRACE,
    STATE(140), 1,
      sym_comment,
  [1071] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(480), 1,
      anon_sym_RBRACE,
    STATE(141), 1,
      sym_comment,
  [1081] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(482), 1,
      anon_sym_COLON_EQ,
    STATE(142), 1,
      sym_comment,
  [1091] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(484), 1,
      sym_identifier,
    STATE(143), 1,
      sym_comment,
  [1101] = 3,
    ACTIONS(330), 1,
      aux_sym_comment_token1,
    ACTIONS(486), 1,
      aux_sym_backtick_token1,
    STATE(144), 1,
      sym_comment,
  [1111] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    STATE(145), 1,
      sym_comment,
  [1121] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(490), 1,
      anon_sym_RPAREN,
    STATE(146), 1,
      sym_comment,
  [1131] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(492), 1,
      anon_sym_RBRACE,
    STATE(147), 1,
      sym_comment,
  [1141] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(494), 1,
      anon_sym_RPAREN,
    STATE(148), 1,
      sym_comment,
  [1151] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(496), 1,
      anon_sym_COMMA,
    STATE(149), 1,
      sym_comment,
  [1161] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(498), 1,
      sym_identifier,
    STATE(150), 1,
      sym_comment,
  [1171] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(500), 1,
      sym_identifier,
    STATE(151), 1,
      sym_comment,
  [1181] = 1,
    ACTIONS(502), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(73)] = 0,
  [SMALL_STATE(74)] = 31,
  [SMALL_STATE(75)] = 69,
  [SMALL_STATE(76)] = 100,
  [SMALL_STATE(77)] = 131,
  [SMALL_STATE(78)] = 157,
  [SMALL_STATE(79)] = 183,
  [SMALL_STATE(80)] = 211,
  [SMALL_STATE(81)] = 239,
  [SMALL_STATE(82)] = 265,
  [SMALL_STATE(83)] = 293,
  [SMALL_STATE(84)] = 321,
  [SMALL_STATE(85)] = 347,
  [SMALL_STATE(86)] = 371,
  [SMALL_STATE(87)] = 395,
  [SMALL_STATE(88)] = 411,
  [SMALL_STATE(89)] = 427,
  [SMALL_STATE(90)] = 443,
  [SMALL_STATE(91)] = 459,
  [SMALL_STATE(92)] = 475,
  [SMALL_STATE(93)] = 489,
  [SMALL_STATE(94)] = 503,
  [SMALL_STATE(95)] = 519,
  [SMALL_STATE(96)] = 535,
  [SMALL_STATE(97)] = 549,
  [SMALL_STATE(98)] = 565,
  [SMALL_STATE(99)] = 579,
  [SMALL_STATE(100)] = 591,
  [SMALL_STATE(101)] = 607,
  [SMALL_STATE(102)] = 623,
  [SMALL_STATE(103)] = 637,
  [SMALL_STATE(104)] = 653,
  [SMALL_STATE(105)] = 669,
  [SMALL_STATE(106)] = 683,
  [SMALL_STATE(107)] = 696,
  [SMALL_STATE(108)] = 709,
  [SMALL_STATE(109)] = 722,
  [SMALL_STATE(110)] = 735,
  [SMALL_STATE(111)] = 746,
  [SMALL_STATE(112)] = 759,
  [SMALL_STATE(113)] = 772,
  [SMALL_STATE(114)] = 783,
  [SMALL_STATE(115)] = 794,
  [SMALL_STATE(116)] = 807,
  [SMALL_STATE(117)] = 818,
  [SMALL_STATE(118)] = 831,
  [SMALL_STATE(119)] = 844,
  [SMALL_STATE(120)] = 857,
  [SMALL_STATE(121)] = 870,
  [SMALL_STATE(122)] = 881,
  [SMALL_STATE(123)] = 891,
  [SMALL_STATE(124)] = 901,
  [SMALL_STATE(125)] = 911,
  [SMALL_STATE(126)] = 921,
  [SMALL_STATE(127)] = 931,
  [SMALL_STATE(128)] = 941,
  [SMALL_STATE(129)] = 951,
  [SMALL_STATE(130)] = 961,
  [SMALL_STATE(131)] = 971,
  [SMALL_STATE(132)] = 981,
  [SMALL_STATE(133)] = 991,
  [SMALL_STATE(134)] = 1001,
  [SMALL_STATE(135)] = 1011,
  [SMALL_STATE(136)] = 1021,
  [SMALL_STATE(137)] = 1031,
  [SMALL_STATE(138)] = 1041,
  [SMALL_STATE(139)] = 1051,
  [SMALL_STATE(140)] = 1061,
  [SMALL_STATE(141)] = 1071,
  [SMALL_STATE(142)] = 1081,
  [SMALL_STATE(143)] = 1091,
  [SMALL_STATE(144)] = 1101,
  [SMALL_STATE(145)] = 1111,
  [SMALL_STATE(146)] = 1121,
  [SMALL_STATE(147)] = 1131,
  [SMALL_STATE(148)] = 1141,
  [SMALL_STATE(149)] = 1151,
  [SMALL_STATE(150)] = 1161,
  [SMALL_STATE(151)] = 1171,
  [SMALL_STATE(152)] = 1181,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0),
  [51] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(58),
  [54] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(151),
  [57] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(150),
  [60] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(82),
  [63] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(143),
  [66] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(73),
  [69] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(115),
  [72] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(34),
  [75] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(126),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(41),
  [81] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(119),
  [84] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(117),
  [87] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(106),
  [90] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(102),
  [93] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(112),
  [96] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(144),
  [99] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(101),
  [102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(78),
  [105] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(77),
  [108] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(97),
  [111] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(130),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file, 1, 0, 0),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_normal_string, 2, 0, 0),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_normal_string, 2, 0, 0),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_indented_raw_string, 2, 0, 0),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_indented_raw_string, 2, 0, 0),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_indented_normal_string, 2, 0, 0),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_indented_normal_string, 2, 0, 0),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1, 0, 0),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 1, 0, 0),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_indented_normal_string, 3, 0, 0),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_indented_normal_string, 3, 0, 0),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_normal_string, 3, 0, 0),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_normal_string, 3, 0, 0),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_indented_raw_string, 3, 0, 0),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_indented_raw_string, 3, 0, 0),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_raw_string, 3, 0, 0),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_raw_string, 3, 0, 0),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 3, 0, 0),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 3, 0, 0),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__p0, 2, 0, 0),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__p0, 2, 0, 0),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_builtin_function_call, 2, 0, 3),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_builtin_function_call, 2, 0, 3),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__p1, 3, 0, 0),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__p1, 3, 0, 0),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pN, 3, 0, 0),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__pN, 3, 0, 0),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__p3, 7, 0, 0),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__p3, 7, 0, 0),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_indented_backtick, 2, 0, 0),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_indented_backtick, 2, 0, 0),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 3, 0, 3),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 3, 0, 3),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__p3, 8, 0, 0),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__p3, 8, 0, 0),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__p2, 6, 0, 0),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__p2, 6, 0, 0),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__p2, 5, 0, 0),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__p2, 5, 0, 0),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_indented_backtick, 3, 0, 0),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_indented_backtick, 3, 0, 0),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_backtick, 3, 0, 0),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_backtick, 3, 0, 0),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4, 0, 3),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 4, 0, 3),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1, 0, 0),
  [206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1, 0, 0),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1, 0, 0),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 1, 0, 0),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__p1, 4, 0, 0),
  [216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__p1, 4, 0, 0),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 6, 0, 0),
  [222] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 6, 0, 0),
  [224] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 3, 0, 0),
  [230] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 3, 0, 0),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 9, 0, 0),
  [234] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 9, 0, 0),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_parameters, 3, 0, 0),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_parameters, 2, 0, 0),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mod, 2, 0, 1),
  [244] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mod, 2, 0, 1),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting, 2, 0, 2),
  [248] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_setting, 2, 0, 2),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__setting_list, 4, 0, 0),
  [258] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__setting_list, 4, 0, 0),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__setting_list, 5, 0, 0),
  [262] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__setting_list, 5, 0, 0),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__setting_string, 2, 0, 0),
  [266] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__setting_string, 2, 0, 0),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__setting_boolean, 2, 0, 0),
  [270] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__setting_boolean, 2, 0, 0),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1, 0, 0),
  [274] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1, 0, 0),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 4, 0, 6),
  [278] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 4, 0, 6),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias, 4, 0, 5),
  [282] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_alias, 4, 0, 5),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 3, 0, 4),
  [286] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 3, 0, 4),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__setting_list, 6, 0, 0),
  [290] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__setting_list, 6, 0, 0),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mod, 3, 0, 1),
  [294] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mod, 3, 0, 1),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 1, 0, 0),
  [298] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 1, 0, 0),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting, 3, 0, 2),
  [302] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_setting, 3, 0, 2),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 2, 0, 0),
  [306] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import, 2, 0, 0),
  [308] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [310] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [312] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [314] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [324] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [326] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [328] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [330] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [332] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [334] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [336] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [338] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [340] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [342] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_normal_string_repeat1, 2, 0, 0),
  [344] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_normal_string_repeat1, 2, 0, 0), SHIFT_REPEAT(89),
  [347] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_normal_string_repeat1, 2, 0, 0), SHIFT_REPEAT(90),
  [350] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_indented_normal_string_repeat1, 2, 0, 0),
  [352] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_indented_normal_string_repeat1, 2, 0, 0), SHIFT_REPEAT(87),
  [355] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_indented_normal_string_repeat1, 2, 0, 0), SHIFT_REPEAT(88),
  [358] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_indented_normal_string_repeat1, 1, 0, 0),
  [360] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_escape_sequence, 1, 0, 0),
  [362] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_normal_string_repeat1, 1, 0, 0),
  [364] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [366] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [368] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_parameters_repeat1, 2, 0, 0), SHIFT_REPEAT(56),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_parameters_repeat1, 2, 0, 0),
  [373] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_indented_backtick_repeat1, 2, 0, 0),
  [375] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_indented_backtick_repeat1, 2, 0, 0), SHIFT_REPEAT(116),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [384] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__setting_list_repeat1, 2, 0, 0), SHIFT_REPEAT(83),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__setting_list_repeat1, 2, 0, 0),
  [389] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [391] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [393] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_indented_raw_string_repeat1, 2, 0, 0),
  [395] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_indented_raw_string_repeat1, 2, 0, 0), SHIFT_REPEAT(110),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_parameters, 1, 0, 0),
  [404] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [410] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [424] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_indented_raw_string_repeat1, 1, 0, 0),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 3, 0, 0),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [436] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_indented_backtick_repeat1, 1, 0, 0),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [462] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [474] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [486] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1, 0, 0),
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
